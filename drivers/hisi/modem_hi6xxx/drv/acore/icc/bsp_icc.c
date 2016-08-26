/*************************************************************************
*   ��Ȩ����(C) 1987-2010, ���ڻ�Ϊ�������޹�˾.
*
*   �� �� �� :  BSP_ICC.c
*
*   ��    �� :  zhouluojun
*
*   ��    �� :  ���ļ���Ҫ��ɹ����ڴ�ͨ��������д�ӿڷ�װ.
*
*   �޸ļ�¼ :  2011��1��14��  v1.00  zhouluojun  ����
*************************************************************************/

#include <linux/module.h>
#include <linux/debugfs.h>
#include <linux/fs.h>
#include <linux/kernel.h>
#include <linux/spinlock.h>
#include <linux/semaphore.h>
#include <linux/string.h>
#include <linux/slab.h>
#include <linux/errno.h>
#include <linux/kthread.h>
#include <linux/freezer.h>
#include <linux/delay.h>
#include <linux/interrupt.h>
#include <asm/io.h>
#include <linux/sched.h>
#include <linux/sched/rt.h>
#include <linux/hisi/hi6xxx-iomap.h>                   /* For IO_ADDRESS access */
#include <bsp_mem.h>
#include "bsp_mem_drv.h"
#include <excDrv.h>
#include "BSP.h"
#include "bsp_icc_drv.h"


#if(FEATURE_ICC_DEBUG == FEATURE_ON)
/*#include "excDrv.h"*/

#include <linux/workqueue.h>
#endif


//#include "bsp_drv_ipc.h"
/*#include "drv_timer.h"*/
#include <linux/wakelock.h>
#include <linux/syscalls.h>

#if defined (CONFIG_HISILICON_PLATFORM_POWER_CONTROL)
#include <linux/hisi/pm/hi6xxx-power-common.h>
#include "bsp_tele_mntn.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif

#define IO_TYPE(var) ((ICC_SUB_CHAN_S *)HISI_VA_ADDRESS((unsigned long)(var)))

#if(FEATURE_ICC_DEBUG == FEATURE_ON)
extern unsigned int omTimerGet(void);
#endif

extern UDI_HANDLE BSP_UDI_ICC_ChnToHandle(unsigned int u32Chn);
extern int BSP_IPC_IntSend(IPC_INT_CORE_E enDstCore, IPC_INT_LEV_E ulLvl);
extern void BSP_IPC_SpinLock (unsigned int u32SignalNum);
extern void BSP_IPC_SpinUnLock (unsigned int u32SignalNum);
extern int BSP_IPC_IntConnect  (IPC_INT_LEV_E ulLvl, VOIDFUNCPTR routine, unsigned int parameter);
extern int BSP_IPC_IntEnable (IPC_INT_LEV_E ulLvl);
extern int  check_himntn(int feature);


//l00186593 rt prio begin
static int icc_thread_prio = 85;
//l00186593 rt prio end

ICC_CTRL_CHAN_S     *g_pstIccCtrlChan;
static ICC_DEV_S        g_stIccDev={0};
ICC_CHAN_DEV_S  *g_pstOpenList = BSP_NULL;

struct semaphore    g_semIccList;
struct semaphore    g_semIccTask;
struct semaphore    g_semIccCtrl;
struct semaphore    g_semIpcSpinLock;

struct dentry *iccswitch_debugfs_root;
struct dentry *icclevel_debugfs_root;

struct wake_lock g_ulIccwakelock;

static BSP_BOOL            g_IccStMode = BSP_FALSE;

#define ICC_SPIN_LOCK(a)\
do{\
    down(&g_semIpcSpinLock);\
    BSP_IPC_SpinLock(0);\
}while(0)

#define ICC_SPIN_UNLOCK(a)\
do{\
    BSP_IPC_SpinUnLock(0); \
    up(&g_semIpcSpinLock);\
}while(0)

#define INT_VEC_ICC         31
#define INT_VEC_ICC_TARGET  30
#define IPC_CPU_TARGET      IPC_CORE_COMARM



#define LOG_LEVEL_HEADER        (0)
#define LOG_LEVEL_PACKET        (1)
#define LOG_LEVEL_SEND          ("s")
#define LOG_LEVEL_REV           ("r")
#define EXCH_LOG_PATH           ("/data/hisi_logs/cp_log")
#define EXCH_LOG_HEADER         ("icc_log_a_core.bin")
#define MAX_FILE_NAME           (512)
#define MAX_FILE_LENGTH         (1024*1024)
#define CHAN_ID_21              (21)
#define CHAN_ID_22              (22)


/* Wakes up icc_thread */
static DECLARE_WAIT_QUEUE_HEAD(icc_wait);
static struct task_struct *icc_task;
static int thread_flag = 0;

spinlock_t g_icc_thread_flag_lock = __SPIN_LOCK_UNLOCKED(old_style_spin_init);

#if(FEATURE_ICC_DEBUG == FEATURE_ON)

BSP_U8 icc_debug_print = FALSE;

#endif

#define ICC_MEMSET(m,c,size)    memset(m,c,size)
#define ICC_MEMCPY(dst,src,len)  memcpy(dst,src,len)

/*Modify_for_c_reset, l00212112,20130511, starts*/
/*Ccore reset,��c�˸�λ���������ڿ���ÿ��channel�Ŀ���*/
BSP_BOOL    g_bCcoreReset_Channel[ICC_CHAN_NUM_MAX] = {BSP_FALSE};
/*Modify_for_c_reset, l00212112,20130511, ends*/

/*used for the Uplayer like OAM to register a icc channel 's wakeup callback*/
IccUplayerChannelCB  g_UplayerChannel_CB = {NULL, 0};

int mdrv_icc_register_resume_cb(unsigned int u32ChanId, FUNCPTR_1 debug_routine, int param)
{
    /*the u32ChanId is ignored*/
    g_UplayerChannel_CB.routine = debug_routine;
    g_UplayerChannel_CB.param = param;
}

static ssize_t chan_switch_read(struct file *filp, char __user *buffer, size_t count, loff_t *ppos)
{
    char buf[4];
    int len = 0;
    int channelID;

    if(1 != sscanf(filp->f_dentry->d_parent->d_name.name, "%d", &channelID))
    {
        channelID = 0;
    }
    snprintf(buf, 4, "%d\n", g_pstIccCtrlChan->astChanInfo[channelID].bLogSwitch);
    len = strlen(buf);
    return simple_read_from_buffer(buffer, count, ppos, buf, len);
}

static ssize_t chan_switch_write(struct file *filp, const char __user *buffer, size_t count, loff_t *ppos)
{
    int switch_val;
    char buf[4] = {0};
    int channelID;
    ssize_t len = 0;
    int ret = 0;

    len = simple_write_to_buffer(buf, sizeof(buf), ppos, buffer, count);
    ret = sscanf(buf, "%4d", &switch_val);
    if(ret <1)
        return -ENOENT;

    if(!(switch_val == 0 || switch_val == 1))
        return len;

    ret = sscanf(filp->f_dentry->d_parent->d_name.name, "%4d", &channelID);
    if(ret <1)
        return -ENOENT;

    g_pstIccCtrlChan->astChanInfo[channelID].bLogSwitch = switch_val;

    return len;
}

static const struct file_operations config_attr_file_fops = {
    .read = chan_switch_read,
    .write = chan_switch_write,
};

static ssize_t chan_level_read(struct file *filp, char __user *buffer, size_t count, loff_t *ppos)
{
    char level[4] = {0};
    int len = 0;

    snprintf(level,sizeof(level), "%d\n", g_pstIccCtrlChan->bLog_level);
    len = strlen(level);
    return simple_read_from_buffer(buffer, count, ppos, level, len);
}

static ssize_t chan_level_write(struct file *filp, const char __user *buffer, size_t count, loff_t *ppos)
{
    int level_val = 0;
    char level[4] = {0};
    ssize_t len = 0;
    int ret = 0;

    len = simple_write_to_buffer(level, sizeof(level), ppos, buffer, count);

    ret = sscanf(level, "%4d", &level_val);
    if(ret <1)
        return -ENOENT;

    if(!(level_val == 0 || level_val == 1))
        return len;

    g_pstIccCtrlChan->bLog_level = level_val;

    return len;
}

static const struct file_operations config_attr_level_file_fops = {
    .read = chan_level_read,
    .write = chan_level_write,
};

BSP_S32 ICC_CreateDevInit(void)
{
    struct dentry *attr_file;
    iccswitch_debugfs_root = debugfs_create_dir("iccswitch", NULL);
    if (!iccswitch_debugfs_root)
        return -ENOENT;

   icclevel_debugfs_root = debugfs_create_dir("icclevel", NULL);
   if (!icclevel_debugfs_root)
        return -ENOENT;


    attr_file = debugfs_create_file("levelswitch", 0664, icclevel_debugfs_root, NULL, &config_attr_level_file_fops);
    if(!attr_file)
       return -ENOENT;


    return 0;
}

BSP_S32 ICC_CreateChanDev(BSP_U32 u32ChanId)
{
    char str[4];
    struct dentry *den, *attr_file;

    snprintf(str, 4, "%u", u32ChanId);

    den = debugfs_create_dir(str, iccswitch_debugfs_root);
    if (!den)
        return -ENOENT;

    attr_file = debugfs_create_file("chanswitch", 0664, den, NULL, &config_attr_file_fops);
    if(!attr_file)
       return -ENOENT;

    g_pstIccCtrlChan->astChanInfo[u32ChanId].bLogSwitch = BSP_FALSE;

    return 0;
}

BSP_VOID ICC_DestroyChanDev(BSP_U32 u32ChanId)
{
    struct dentry *child, *child_tmp;
    char buf[4];

    snprintf(buf, 4, "%u", u32ChanId);
    list_for_each_entry_safe(child, child_tmp, &iccswitch_debugfs_root->d_subdirs, d_u.d_child)
    {
        if (memcmp(child->d_name.name, buf, sizeof(buf)) == 0)
        {
            debugfs_remove(child);
            break;
        }
    }
}

BSP_VOID ICC_SetTestMode(BSP_BOOL bEnable)
{
    g_IccStMode = bEnable;
    return;
}

void ICC_IntGen(void)
{
    BSP_IPC_IntSend(IPC_CPU_TARGET, (IPC_INT_LEV_E)INT_VEC_ICC_TARGET);
}



#if(FEATURE_ICC_DEBUG == FEATURE_ON)
/*****************************************************************************
* �� �� ��  : ICC_debug_print_send()
*
* ��������  : �����Ƿ��ӡʱ���
*
* �������  : 1����ӡ  0������ӡ
*
* �������  :
*
* �� �� ֵ  :
*****************************************************************************/

BSP_VOID ICC_debug_print_send(BSP_U32 value)
{
    icc_debug_print = value;
    printk( "icc_debug_print=%d\n",value);
    return;
}
#endif


/*****************************************************************************
* �� �� ��  : ICC_NotifyTarget
*
* ��������  : ��Ŀ�괦���������ж��ź�
*
* �������  :
*
* �������  :
*
* �� �� ֵ  :
*****************************************************************************/
BSP_VOID ICC_NotifyTarget(ICC_CHAN_DEV_S *pChan, BSP_U32 signal)
{
    unsigned long flag = 0;

    local_irq_save(flag);

    ICC_SPIN_LOCK(&pChan->ptxSubChanInfo->u32SpinLock);
    pChan->ptxSubChanInfo->u32Signal |= signal;
    ICC_SPIN_UNLOCK(&pChan->ptxSubChanInfo->u32SpinLock);

    /* ������Ӧ���ж� */
    ICC_IntGen();

    local_irq_restore(flag);

    return;
}


/*****************************************************************************
* �� �� ��  : ICC_FIFOIdleSize
*
* ��������  : ��ѯͨ���еĿ����ڴ��С
*
* �������  : pSubChan      ��ͨ��
*
* �������  : IdleSize1     ����buffer1
*             IdleSize2     ����buffer2
*
* �� �� ֵ  :
*****************************************************************************/
BSP_VOID ICC_FIFOIdleSize(ICC_SUB_CHAN_S *pSubChan, BSP_S32 *IdleSize1, BSP_S32 *IdleSize2)
{
    BSP_U32 start = (BSP_U32)pSubChan->u32PhyStart;
    BSP_U32 end = (BSP_U32)pSubChan->u32PhyEnd;
    BSP_U32 read =  (BSP_U32)pSubChan->u32PhyRead;
    BSP_U32 write = (BSP_U32)pSubChan->u32PhyWrite;

    if (write < read)
    {
        /* ��ָ�����дָ�룬ֱ�Ӽ��� */
        *IdleSize1 = (BSP_S32)(read - write - 1);
        *IdleSize2 = 0;
    }
    else
    {
        /* дָ����ڶ�ָ�룬��Ҫ���ǻؾ� */
        if (read != start)
        {
            *IdleSize1 = (BSP_S32)(end - write + 1);
            *IdleSize2 = (BSP_S32)(read - start - 1);
        }
        else
        {
            *IdleSize1 = (BSP_S32)(end - write);
            *IdleSize2 = 0;
        }
    }

    return;
}


/*****************************************************************************
* �� �� ��  : ICC_FIFODataSize
*
* ��������  : ��ѯͨ���е���Ч�����ڴ��С
*
* �������  : pSubChan      ��ͨ��
*
* �������  : DataSize1     ��Ч����buffer1
*             DataSize2     ��Ч����buffer2
*
* �� �� ֵ  :
*****************************************************************************/
BSP_VOID ICC_FIFODataSize(ICC_SUB_CHAN_S *pSubChan, BSP_S32 *s32DataSize1, BSP_S32 *s32DataSize2)
{
    unsigned long start = (unsigned long)HISI_VA_ADDRESS((BSP_U32)pSubChan->u32PhyStart);
    unsigned long end = (unsigned long)HISI_VA_ADDRESS((BSP_U32)pSubChan->u32PhyEnd);
    unsigned long read =  (unsigned long)HISI_VA_ADDRESS((BSP_U32)pSubChan->u32PhyRead);
    unsigned long write = (unsigned long)HISI_VA_ADDRESS((BSP_U32)pSubChan->u32PhyWrite);

    if (read <= write)
    {
        /* дָ����ڶ�ָ�룬ֱ�Ӽ��� */
        *s32DataSize1 = (BSP_S32)(write - read);
        *s32DataSize2 = 0;
    }
    else
    {
        /* ��ָ�����дָ�룬��Ҫ���ǻؾ� */
        *s32DataSize1 = (BSP_S32)(end - read + 1);
        *s32DataSize2 = (BSP_S32)(write - start);
    }

    return;
}


/*****************************************************************************
* �� �� ��  : ICC_ListAdd
*
* ��������  : ��ͨ������������һ���ڵ�
*
* �������  : pList         ����ָ��
*             pNode         ���ݽڵ�
*
* �������  :
*
* �� �� ֵ  :
*****************************************************************************/
BSP_S32 ICC_ListAdd(ICC_CHAN_DEV_S **pList, ICC_CHAN_DEV_S *pNode)
{
    ICC_CHAN_DEV_S *pCur = *pList;
    ICC_CHAN_DEV_S *pPre = BSP_NULL;

    if (0 != down_timeout(&g_semIccList, msecs_to_jiffies(200)))
    {
        return BSP_ERR_ICC_TIMEOUT;
    }

    while((BSP_NULL != pCur) && (pCur->u32Priority <= pNode->u32Priority))
    {
        pPre = pCur;
        pCur = pCur->next;
    }

    if (pPre)
    {
        pNode->next = pCur;
        pPre->next = pNode;
    }
    else
    {
        pNode->next = pCur;
        *pList = pNode;
    }

    up(&g_semIccList);

    return BSP_OK;
}


/*****************************************************************************
* �� �� ��  : ICC_ListGet
*
* ��������  : ��ͨ�������в�ѯһ���ڵ�
*
* �������  : pList         ����ָ��
*             u32ChanId        ͨ��ID
*
* �������  : pNode         �ڵ�ָ��
*
* �� �� ֵ  :
*****************************************************************************/
BSP_VOID ICC_ListGet(ICC_CHAN_DEV_S *pList, BSP_U32 u32ChanId, ICC_CHAN_DEV_S **pNode)
{
    ICC_CHAN_DEV_S *pCur = pList;
    *pNode = BSP_NULL;

    if (0 != down_timeout(&g_semIccList, msecs_to_jiffies(200)))
    {
        return;
    }

    while(pCur)
    {
        if (pCur->u32ChanID == u32ChanId)
        {
            *pNode = pCur;
            break;
        }
        pCur = pCur->next;
    }

    up(&g_semIccList);

    return;
}


/*****************************************************************************
* �� �� ��  : ICC_ListGetOut
*
* ��������  : ��ͨ��������ȡ��һ���ڵ�
*
* �������  : pList         ����ָ��
*             u32ChanId        ͨ��ID
*
* �������  : pNode         �ڵ�ָ��
*
* �� �� ֵ  :
*****************************************************************************/
BSP_VOID ICC_ListGetOut(ICC_CHAN_DEV_S **pList, BSP_U32 u32ChanId, ICC_CHAN_DEV_S **pNode)
{
    ICC_CHAN_DEV_S *pCur = *pList;
    ICC_CHAN_DEV_S *pPre = pCur;
    *pNode = BSP_NULL;

    if (0 != down_timeout(&g_semIccList, msecs_to_jiffies(200)))
    {
        return;
    }
    while (pCur)
    {
        if (pCur->u32ChanID == u32ChanId)
        {
            *pNode = pCur;

            /* ɾ���ڵ� */
            if (pCur != pPre)
            {
                pPre->next = pCur->next;
                pCur->next = BSP_NULL;
            }
            else
            {
                *pList = pCur->next;
            }
            break;
        }
        pPre = pCur;
        pCur = pCur->next;
    }

    up(&g_semIccList);

    return;
}


/*****************************************************************************
* �� �� ��  : ICC_AllocChannel
*
* ��������  : ����һ��ͨ��
*
* �������  : u32ChanId        ͨ��ID
*             pChanAttr        ͨ������
*
* �������  :
*
* �� �� ֵ  :
*****************************************************************************/
BSP_S32 ICC_AllocChannel(BSP_U32 u32ChanId, ICC_CHAN_ATTR_S *pChanAttr)
{
    BSP_VOID *pMem1, *pMem2, *pMem3, *pMem4;
    ICC_CHAN_S *pSmChan;
    ICC_SUB_CHAN_S *pTxChan, *pRxChan;

    pSmChan = &g_pstIccCtrlChan->astChanInfo[u32ChanId];

    /* �ֱ����뷢�ͺͽ���ͨ����info��fifo�ֿ����� */
    pMem1 = BSP_SMALLOC(sizeof(ICC_SUB_CHAN_S), MEM_ICC_DDR_POOL);
    if(!pMem1)
    {
        printk(KERN_ERR "BSP_MODU_ICC channel[%d] alloc sm info failed.\n",u32ChanId);
        return BSP_ERR_ICC_NO_MEM;
    }

    pMem2 = BSP_SMALLOC(sizeof(ICC_SUB_CHAN_S), MEM_ICC_DDR_POOL);
    if(!pMem2)
    {
        BSP_SFree(pMem1);
        printk(KERN_ERR "BSP_MODU_ICC channel[%d] alloc sm info failed.\n",u32ChanId);
        return BSP_ERR_ICC_NO_MEM;
    }

    pMem3 = BSP_SMALLOC(pChanAttr->u32FIFOOutSize, MEM_ICC_DDR_POOL);
    if(!pMem3)
    {
        BSP_SFree(pMem1);
        BSP_SFree(pMem2);
        printk(KERN_ERR "BSP_MODU_ICC channel[%d] alloc sm info failed.\n",u32ChanId);
        return BSP_ERR_ICC_NO_MEM;
    }

    pMem4 = BSP_SMALLOC(pChanAttr->u32FIFOInSize, MEM_ICC_DDR_POOL);
    if(!pMem4)
    {
        BSP_SFree(pMem1);
        BSP_SFree(pMem2);
        BSP_SFree(pMem3);
        printk(KERN_ERR "BSP_MODU_ICC channel[%d] alloc sm info failed.\n",u32ChanId);
        return BSP_ERR_ICC_NO_MEM;
    }

    /* ��ʼ��״̬ */
    pSmChan->enState = ICC_CHAN_STATE_CLOSED;
    pSmChan->enMode = pChanAttr->enChanMode;
    pSmChan->u32Priority = pChanAttr->u32Priority;
    pSmChan->u32SpinLock = 0;
    pSmChan->u32SubChanInfo[ICC_HOST] = (BSP_U32)HISI_PA_ADDRESS(pMem1);
    pSmChan->u32SubChanInfo[ICC_TAGET] = (BSP_U32)HISI_PA_ADDRESS(pMem2);
    pSmChan->bAlloc= BSP_TRUE;

    /* ��ʼ������ͨ��������ͨ����FIFO��ǰ����Ӧ��FIFO size��FIFOOutSize */
    pTxChan = pMem1;
    pTxChan->u32SubChanState = ICC_CHAN_STATE_CLOSED;
    pTxChan->u32Signal = 0;
    pTxChan->u32SpinLock = 0;
    pTxChan->u32FIFOsize = pChanAttr->u32FIFOOutSize;
    pTxChan->u32PhyStart = (BSP_U32)HISI_PA_ADDRESS(pMem3);
    pTxChan->u32PhyEnd = pTxChan->u32PhyStart + pChanAttr->u32FIFOOutSize - 1;
    pTxChan->u32PhyRead = pTxChan->u32PhyStart;
    pTxChan->u32PhyWrite = pTxChan->u32PhyStart;

    /* ��ʼ������ͨ��������ͨ����FIFO�ں󣬶�Ӧ��FIFO size��FIFOInSize */
    pRxChan = pMem2;
    pRxChan->u32SubChanState = ICC_CHAN_STATE_CLOSED;
    pRxChan->u32Signal = 0;
    pRxChan->u32SpinLock = 0;
    pRxChan->u32FIFOsize = pChanAttr->u32FIFOInSize;
    pRxChan->u32PhyStart = (BSP_U32)HISI_PA_ADDRESS(pMem4);
    pRxChan->u32PhyEnd = pRxChan->u32PhyStart + pChanAttr->u32FIFOInSize - 1;
    pRxChan->u32PhyRead = pRxChan->u32PhyStart;
    pRxChan->u32PhyWrite = pRxChan->u32PhyStart;

    return BSP_OK;
}


/*****************************************************************************
* �� �� ��  : ICC_FreeChannel
*
* ��������  : �ͷ�һ��ͨ��
*
* �������  : u32ChanId        ͨ��ID
*
* �������  :
*
* �� �� ֵ  :
*****************************************************************************/
BSP_VOID ICC_FreeChannel(BSP_U32 u32ChanId)
{
    ICC_CHAN_S *pSmChan = &g_pstIccCtrlChan->astChanInfo[u32ChanId];
    ICC_SUB_CHAN_S* temp = BSP_NULL;

    if (pSmChan->bAlloc)
    {
        {
            temp = (IO_TYPE(pSmChan->u32SubChanInfo[ICC_HOST]));
            BSP_SFree((BSP_VOID*)(HISI_VA_ADDRESS((BSP_U32)temp->u32PhyStart)));
            temp = (IO_TYPE(pSmChan->u32SubChanInfo[ICC_TAGET]));
            BSP_SFree((BSP_VOID*)(HISI_VA_ADDRESS((BSP_U32)temp->u32PhyStart)));
            BSP_SFree(IO_TYPE(pSmChan->u32SubChanInfo[ICC_HOST]));
            BSP_SFree(IO_TYPE(pSmChan->u32SubChanInfo[ICC_TAGET]));
            pSmChan->u32SubChanInfo[ICC_HOST] = (BSP_U32)BSP_NULL;
            pSmChan->u32SubChanInfo[ICC_TAGET] = (BSP_U32)BSP_NULL;
        }
        pSmChan->enState = ICC_CHAN_STATE_CLOSED;
    }

    pSmChan->bAlloc = BSP_FALSE;

    return;
}


/*****************************************************************************
* �� �� ��  : ICC_ResetChannel
*
* ��������  : ��λͨ��
*
* �������  : pChan ָ����Ҫ��λ��ͨ����ָ��
*
* �������  :
*
* �� �� ֵ  :
*****************************************************************************/
BSP_VOID ICC_ResetChannel(ICC_CHAN_DEV_S *pChan)
{
    /* ��λͨ���ɷ��Ͷ���ִ�У������ںϺ�д�������ֻ��� */
    ICC_NotifyTarget(pChan, ICC_CHAN_SIGNAL_RESET);
    return;
}


/*****************************************************************************
* �� �� ��  : ICC_SetEventCB
*
* ��������  : ���ö����ص�����
*
* �������  : u32ChanId        ͨ��ID
*             cb            �¼��ص�����
*
* �������  :
*
* �� �� ֵ  :
*****************************************************************************/
BSP_S32 ICC_SetEventCB(BSP_U32 u32ChanId, icc_event_cb cb)
{
    ICC_CHAN_DEV_S  *pChan = BSP_NULL;

    /* ��ȡͨ�� */
    ICC_ListGet(g_pstOpenList, u32ChanId, &pChan);
    if (BSP_NULL == pChan)
    {
        printk(KERN_ERR "BSP_MODU_ICC channel[%d] is not open!.\n",u32ChanId);
        return BSP_ERR_ICC_NOT_OPEN;
    }

    pChan->event_cb = cb;

    return BSP_OK;
}


/*****************************************************************************
* �� �� ��  : ICC_SetReadCB
*
* ��������  : ���ö����ص�����
*
* �������  : u32ChanId        ͨ��ID
*             cb            �¼��ص�����
*
* �������  :
*
* �� �� ֵ  :
*****************************************************************************/
BSP_S32 ICC_SetReadCB(BSP_U32 u32ChanId, icc_read_cb cb)
{
    ICC_CHAN_DEV_S  *pChan = BSP_NULL;

    /* ��ȡͨ�� */
    ICC_ListGet(g_pstOpenList, u32ChanId, &pChan);
    if (BSP_NULL == pChan)
    {
        printk(KERN_ERR "BSP_MODU_ICC channel[%d] is not open!.\n",u32ChanId);
        return BSP_ERR_ICC_NOT_OPEN;
    }

    pChan->read_cb = cb;

    return BSP_OK;
}


/*****************************************************************************
* �� �� ��  : ICC_SetWriteCB
*
* ��������  : ����д���ص�����
*
* �������  : u32ChanId        ͨ��ID
*             cb            �¼��ص�����
*
* �������  :
*
* �� �� ֵ  :
*****************************************************************************/
BSP_S32 ICC_SetWriteCB(BSP_U32 u32ChanId, icc_write_cb cb)
{
    ICC_CHAN_DEV_S  *pChan = BSP_NULL;

    /* ��ȡͨ�� */
    ICC_ListGet(g_pstOpenList, u32ChanId, &pChan);
    if (BSP_NULL == pChan)
    {
        printk(KERN_ERR "BSP_MODU_ICC channel[%d] is not open!.\n",u32ChanId);
        return BSP_ERR_ICC_NOT_OPEN;
    }

    pChan->write_cb = cb;

    return BSP_OK;
}


/*****************************************************************************
* �� �� ��  : ICC_GetChanState
*
* ��������  : ��ѯͨ��״̬
*
* �������  : u32ChanId        ͨ��ID
*
* �������  : state            ��ͨ��״̬
*
* �� �� ֵ  :
*****************************************************************************/
BSP_S32 ICC_GetChanState(BSP_U32 u32ChanId, ICC_CHAN_STATE_E *state)
{
    ICC_CHAN_DEV_S  *pChan = BSP_NULL;

    /* ��ȡͨ�� */
    ICC_ListGet(g_pstOpenList, u32ChanId, &pChan);
    if (BSP_NULL == pChan)
    {
        *state = ICC_CHAN_STATE_CLOSED;
    }

    *state = g_pstIccCtrlChan->astChanInfo[u32ChanId].enState;

    return BSP_OK;
}


/*****************************************************************************
* �� �� ��  : ICC_GetPriority
*
* ��������  : ��ȡͨ�������ȼ�
*
* �������  : u32ChanId        ͨ��ID
*
* �������  : priority         ��ͨ�������ȼ�
*
* �� �� ֵ  :
*****************************************************************************/
BSP_S32 ICC_GetPriority(BSP_U32 u32ChanId, BSP_U32 *priority)
{
    ICC_CHAN_DEV_S  *pChan = BSP_NULL;

    /* ��ȡͨ�� */
    ICC_ListGet(g_pstOpenList, u32ChanId, &pChan);
    if (BSP_NULL == pChan)
    {
        printk(KERN_ERR "BSP_MODU_ICC channel[%d] is not open!.\n",u32ChanId);
        return BSP_ERR_ICC_NOT_OPEN;
    }

    *priority = pChan->u32Priority;

    return BSP_OK;
}


/*****************************************************************************
* �� �� ��  : ICC_CopyDataOut
*
* ��������  :
*
* �������  :
*
* �������  :
*
* �� �� ֵ  :
*****************************************************************************/
BSP_VOID ICC_CopyDataOut(BSP_U8* pData, BSP_S32 size, BSP_U8* start, BSP_U8* read, BSP_S32 size1)
{
    if (size <= size1)
    {
        ICC_INVALID_CACHE(read, size);
        ICC_MEMCPY(pData, read, size);
    }
    else
    {
        ICC_INVALID_CACHE(read, size1);
        ICC_MEMCPY(pData, read, size1);
        size -= size1;
        ICC_INVALID_CACHE(start, size);
        ICC_MEMCPY(pData+size1, start, size);
    }
    return;
}


/*****************************************************************************
* �� �� ��  : ICC_CopyDataIn
*
* ��������  :
*
* �������  :
*
* �������  :
*
* �� �� ֵ  :
*****************************************************************************/
BSP_VOID ICC_CopyDataIn(BSP_U8* pData, BSP_S32 size, BSP_U8* start, BSP_U8* write, BSP_S32 size1)
{
    if (size <= size1)
    {
        ICC_MEMCPY(write, pData, size);
        ICC_FLUSH_CACHE(write, size);
    }
    else
    {
        ICC_MEMCPY(write, pData, size1);
        ICC_MEMCPY(start, pData+size1, size-size1);
        ICC_FLUSH_CACHE(write, size1);
        ICC_FLUSH_CACHE(start, size-size1);
    }
    return;
}


/*****************************************************************************
* �� �� ��  : ICC_GetPacket
*
* ��������  :
*
* �������  :
*
* �������  :
*
* �� �� ֵ  :
*****************************************************************************/
BSP_S32 ICC_GetPacket(ICC_CHAN_DEV_S *pChan)
{
    BSP_S32 s32ReadSize, s32DataSize1, s32DataSize2, s32PacketSize, s32PayLoadSize;
    ICC_SUB_CHAN_S *pRxChan = pChan->prxSubChanInfo;
    BSP_U8* pRead = (BSP_U8*)(HISI_VA_ADDRESS((BSP_U32)pChan->prxSubChanInfo->u32PhyRead));
    BSP_S32 header[(ICC_PACKET_HEADER_LEN/4)];
    BSP_U32 delta;


#if(FEATURE_ICC_DEBUG == FEATURE_ON)
    BSP_S32 s32sendtime;
    BSP_S32 s32gettime;
#endif

    /*printk("\n============ get packet ===============\n");*/

    ICC_FIFODataSize(pRxChan, &s32DataSize1, &s32DataSize2);
    s32ReadSize = s32DataSize1+s32DataSize2;

    delta = (BSP_U32)pRead%4;
    if (delta)
    {
        /* ��ָ���4�ֽڶ��룬�����ʼ��ȡ���� */
        delta = 4 - delta;
        pRead += delta;
        s32DataSize1-= delta;
        s32ReadSize -= delta;
        if (((unsigned long)pRead) > HISI_VA_ADDRESS((BSP_U32)pRxChan->u32PhyEnd))
        {
            pRead = (BSP_U8*)HISI_VA_ADDRESS((BSP_U32)pRxChan->u32PhyStart);
            s32DataSize1 = s32DataSize2;
            s32DataSize2 = 0;
        }
    }

    if (s32ReadSize <= ICC_PACKET_HEADER_LEN)
    {
        /* ���ָ�ʽ���󣬸�λͨ�� */
        ICC_ResetChannel(pChan);
        printk(KERN_ERR "BSP_MODU_ICC data size is not correct!.\n");
        return BSP_ERROR;
    }

    /* packetģʽ��Ҫ�Ƚ�����������ͷ���� */
    ICC_CopyDataOut((BSP_U8*)header, ICC_PACKET_HEADER_LEN, (BSP_U8*)(HISI_VA_ADDRESS((BSP_U32)pRxChan->u32PhyStart)),
                    pRead, s32DataSize1);
    s32PayLoadSize = header[1];
    s32PacketSize = s32PayLoadSize+ICC_PACKET_HEADER_LEN;

    if (ICC_PACKET_HEADER != header[0])
    {
        /* ���ָ�ʽ���󣬰�ͷTAG����ȷ����λͨ�� */
        ICC_ResetChannel(pChan);
        printk(KERN_ERR "BSP_MODU_ICC pakcet header is invalid!. header=0x%x\n", header[0]);
        return BSP_ERROR;
    }
    if (s32PacketSize > s32ReadSize)
    {
        /* ���ָ�ʽ���󣬸�λͨ�� */
        ICC_ResetChannel(pChan);
        printk(KERN_ERR "BSP_MODU_ICC pakcet size is invalid!.\n");
        return BSP_ERROR;
    }

    /* packet��Ч����¼��ǰpacket��Ϣ */
    pChan->packet.data = (BSP_U32)HISI_PA_ADDRESS((unsigned long)(pRead + ICC_PACKET_HEADER_LEN));
    if (HISI_VA_ADDRESS((BSP_U32)pChan->packet.data) > HISI_VA_ADDRESS((BSP_U32)pRxChan->u32PhyEnd))
    {
        pChan->packet.data -= pRxChan->u32FIFOsize;
    }
    pChan->packet.size = s32PayLoadSize;


#if(FEATURE_ICC_DEBUG == FEATURE_ON)
    s32sendtime = header[2];        /*���淢������ʱ��ʱ���*/
    s32gettime  = (BSP_S32)omTimerGet(); /*�����յ�����ʱ��ʱ���*/

    /*��ӡ���ݴ����ͨ����ʱ���*/

    if(TRUE == icc_debug_print)
    {
        printk("\r\nCHAN:%d,Time: \n%u send the packet,\n%u get the packet  \r\n",pChan->u32ChanID, s32sendtime, s32gettime);
    }
#endif
    return BSP_OK;
}


/*****************************************************************************
* �� �� ��  : ICC_SendStream
*
* ��������  :
*
* �������  :
*
* �������  :
*
* �� �� ֵ  :
*****************************************************************************/
BSP_S32 ICC_SendStream(ICC_CHAN_DEV_S *pChan, BSP_U8 *pData, BSP_S32 s32Size)
{
    ICC_SUB_CHAN_S  *ptxChan = BSP_NULL;
    BSP_S32 s32IdleSize1, s32IdleSize2, s32CopySize;
    unsigned long flags = 0;
    void *pWrite = NULL;
    void *pStart = NULL;

    down(&pChan->semSync);

    /* ��ȡ����buffer��С */
    /* BSP-693, modified by z67193 */
    local_irq_save(flags);
    ptxChan = pChan->ptxSubChanInfo;
    ICC_FIFOIdleSize(ptxChan, &s32IdleSize1, &s32IdleSize2);

    /* �������� */
    if (s32Size <= s32IdleSize1)
    {
        pWrite = (void *)HISI_VA_ADDRESS((BSP_U32)ptxChan->u32PhyWrite);
        ICC_MEMCPY(pWrite, pData, (BSP_U32)s32Size);
        s32CopySize = s32Size;
        ICC_FLUSH_CACHE(pWrite, s32Size);
    }
    else
    {
        BSP_S32 len;

        pWrite = (void *)HISI_VA_ADDRESS((BSP_U32)ptxChan->u32PhyWrite);
        pStart = (void *)HISI_VA_ADDRESS((BSP_U32)ptxChan->u32PhyStart);
        ICC_MEMCPY(pWrite, pData, (BSP_U32)s32IdleSize1);
        len = ((s32Size-s32IdleSize1) > s32IdleSize2) ? s32IdleSize2 : (s32Size-s32IdleSize1);
        ICC_MEMCPY(pStart, pData+s32IdleSize1, (BSP_U32)len);
        s32CopySize = s32IdleSize1+len;
        ICC_FLUSH_CACHE(pWrite, s32IdleSize1);
        ICC_FLUSH_CACHE(pStart, len);
    }

    /* ����дָ�� */
    ptxChan->u32PhyWrite += (BSP_U32)s32CopySize;
    if (HISI_VA_ADDRESS((BSP_U32)ptxChan->u32PhyWrite) > HISI_VA_ADDRESS((BSP_U32)ptxChan->u32PhyEnd))
    {
        ptxChan->u32PhyWrite -= ptxChan->u32FIFOsize;
    }

    /* ��¼����ͨ����Ҫ�ٴη������ݵĴ�С */
    pChan->ptxSubChanInfo->u32WriteNeedSize += (s32Size - s32CopySize);

    /* BSP-693, modified by z67193 */
    local_irq_restore(flags);

    pChan->sDebug.u32SendTimes++;
    pChan->sDebug.u32SendBytes += s32CopySize;

    /* ֪ͨ�Է� */
    ICC_NotifyTarget(pChan, ICC_CHAN_SIGNAL_DATA);

    up(&pChan->semSync);

    return s32CopySize;
}

/*****************************************************************************
 �� �� ��  : icc_file_stat
 ��������  : ��ȡ�ļ�״̬
 �������  : const  char *path
             struct stat *buf
 �������  : ��
 �� �� ֵ  : int
 ���ú���  :
 ��������  :

*****************************************************************************/
static int icc_file_stat( const char *pathname, struct stat *pState )
{
    int ret          = 0;
    unsigned long fs = 0;

    if ((NULL == pathname) || (NULL == pState))
    {
       printk(KERN_INFO "icc_file_stat:the input para is null");
       return BSP_ERROR;
    }

    /* �ı��ڴ����Ȩ�� */
    fs = get_fs();
    set_fs(KERNEL_DS);

    ret = sys_newlstat((const char __user *)pathname, (struct stat __user *)pState);
    if (ret < 0)
    {
        printk(KERN_INFO "icc_file_stat:stat is fail,the pathname is %s,the ret is %x\n", pathname, ret);
        ret = BSP_ERROR;
    }
    else
    {
        ret = BSP_OK;
    }

    set_fs(fs);

    return ret;
}

/*****************************************************************************
 �� �� ��  : bsp_fopen
 ��������  : ���ļ�  �����߲��ܷ��ʷ���ֵֵ�ĳ�Ա����
 �������  : const char *path
             const char *mode
 �������  : ��
 �� �� ֵ  : int
 ���ú���  :
 ��������  :

*****************************************************************************/
static int icc_file_fopen( const char *filename, int flags )
{
    int     ret = 0;
    unsigned long fs;

    if (NULL == filename)
    {
        printk(KERN_INFO "icc_file_fopen:the input para is error \n");
        return BSP_ERROR;
    }

    /* �ı��ڴ����Ȩ�� */
    fs = get_fs();
    set_fs(KERNEL_DS);

    /*����V9��ret ʵ������ΪFILE*����ǰ�����ַ*/
    ret = sys_open((const char __user *)filename, flags, /*S_IRWXU*/00664);
    if (ret < 0)
    {
        printk(KERN_INFO "icc_file_fopen:sys_open op fail, filename:%s, ret is %x \n", filename, ret);
        ret = BSP_ERROR;
    }

    set_fs(fs);

    return ret;
}

/*****************************************************************************
 �� �� ��  : bsp_fclose
 ��������  : �ر��ļ�
 �������  : int fd
 �������  : ��
 �� �� ֵ  : int
 ���ú���  :
 ��������  :

*****************************************************************************/
static int icc_file_fclose(unsigned int fd)
{
    int ret = 0;
    unsigned long fs;

    /* �ı��ڴ����Ȩ�� */
    fs = get_fs();
    set_fs(KERNEL_DS);

    ret = sys_close(fd);
    if (ret < 0)
    {
        printk(KERN_INFO "icc_file_fclose:the sys_close ops fail, the ret is %x\n",ret);
        ret = BSP_ERROR;
    }
    else
    {
        ret = BSP_OK;
    }

    set_fs(fs);

    return ret;
}

/*****************************************************************************
 �� �� ��  : bsp_rename
 ��������  : �ļ�������
 �������  : const char * oldname
             const char * newname
 �������  : ��
 �� �� ֵ  : int
 ���ú���  :
 ��������  :

*****************************************************************************/
static int icc_file_rename( const char * oldname, const char * newname )
{
    int ret = 0;
    unsigned long fs = 0;

    if ((NULL == oldname) || (NULL == newname))
    {
        printk(KERN_INFO "icc_file_rename:the input is null\n");
        return BSP_ERROR;
    }

    /* �ı��ڴ����Ȩ�� */
    fs = get_fs();
    set_fs(KERNEL_DS);

    ret = sys_rename((const char __user *)oldname, (const char __user *)newname);
    if (ret < 0)
    {
        printk(KERN_INFO "icc_file_rename:old filename:%s,new filename:%s,the ret is %x \n", oldname, newname, ret);
        ret = BSP_ERROR;
    }
    else
    {
        ret = BSP_OK;
    }

    set_fs(fs);

    return ret;
}

/*****************************************************************************
 �� �� ��  : icc_file_remove
 ��������  : ɾ���ļ�
 �������  : const char *pathname
 �������  : ��
 �� �� ֵ  : int
 ���ú���  :
 ��������  :

*****************************************************************************/
static int icc_file_remove( const char *pathname )
{
    int ret = 0;
    unsigned long fs = 0;

    if (NULL == pathname)
    {
       printk(KERN_INFO "icc_file_remove:the input para is error\n");
       return BSP_ERROR;
    }

    /* �ı��ڴ����Ȩ�� */
    fs = get_fs();
    set_fs(KERNEL_DS);

    ret = sys_unlink((const char __user *)pathname);
    if (ret < 0)
    {
        printk(KERN_INFO "icc_file_remove:the sys unlink is fail,filename:%s,the ret is %x\n", pathname, ret);
        ret = BSP_ERROR;
    }
    else
    {
        ret = BSP_OK;
    }

    set_fs(fs);

    return ret;
}

/*****************************************************************************
 �� �� ��  : icc_file_fwrite
 ��������  : д�ļ�
 �������  : void *ptr
             unsigned int size
             unsigned int nmemb
             FILE *stream
 �������  : ��
 �� �� ֵ  : int
 ���ú���  :
 ��������  :

*****************************************************************************/
static int icc_file_fwrite( void *buf, unsigned int count, unsigned int fd )
{
    int ret = 0;
    unsigned long fs;

    if ((NULL == buf) || (0 == count))
    {
        printk(KERN_INFO "icc_file_fwrite:the input para is error\n");
        return BSP_ERROR;
    }

    /* �ı��ڴ����Ȩ�� */
    fs = get_fs();
    set_fs(KERNEL_DS);

    ret = sys_write(fd, buf, count);
    if (ret < 0)
    {
        printk(KERN_INFO "icc_file_fwrite:the sys_write ops fail,the ret is %x\n", ret);
        ret = BSP_ERROR;
    }
    else
    {
        ret = sys_fsync(fd);
        if (ret < 0)
        {
            printk(KERN_INFO "icc_file_fwrite:sys_fsync fail,the ret is %x\n", ret);
            ret = BSP_ERROR;
        }
        else
        {
            ret = BSP_OK;
        }
    }

    set_fs(fs);

    return ret;
}
BSP_S32 ICC_a_core_LogFileSave(BSP_CHAR *dirName, BSP_CHAR *fileHeader, BSP_VOID*address, BSP_S32 length)
{
    int fd = 0;
    struct stat state = {0};

    BSP_S32  filelength = 0;
    BSP_CHAR *filename = (BSP_CHAR *)NULL;
    BSP_CHAR *fileBackname = (BSP_CHAR *)NULL;

    if((strlen(dirName) + strlen("/") + strlen(fileHeader)) >= MAX_FILE_NAME)
    {
        return BSP_ERROR;
    }
    filename = (BSP_CHAR *)kmalloc(MAX_FILE_NAME, GFP_KERNEL);
    if(NULL == filename)
    {
        goto err;
    }
    ICC_MEMSET(filename, 0, MAX_FILE_NAME);
    fileBackname = (BSP_CHAR *)kmalloc(MAX_FILE_NAME, GFP_KERNEL);
    if(NULL == fileBackname)
    {
        goto err;
    }
    ICC_MEMSET(fileBackname, 0, MAX_FILE_NAME);

    strncpy(filename, dirName, strlen(dirName));
    *(filename + strlen(dirName)) = '\0';
    strncat(filename, "/", strlen("/"));
    strncat(filename, fileHeader, strlen(fileHeader));

    if((icc_file_stat(filename, &state)) == BSP_ERROR)
    {
        filelength = 0;
    }
    else
    {
        filelength = state.st_size;
    }

    if((filelength + length) > MAX_FILE_LENGTH)
    {
        strncpy(fileBackname, filename, strlen(filename));
        strncat(fileBackname, ".bak", strlen(".bak"));

        if((icc_file_stat(fileBackname, &state)) != BSP_ERROR)
        {
            icc_file_remove(fileBackname);
            icc_file_rename(filename, fileBackname);
        }
        else
        {
            icc_file_rename(filename, fileBackname);
        }
    }

    fd = icc_file_fopen(filename, (O_RDWR | O_CREAT | O_APPEND | O_CLOEXEC));
    if (fd < 0)
    {
        goto err;
    }

    icc_file_fwrite(address, length, fd);
    icc_file_fclose(fd);

    return BSP_OK;

err:
    if(NULL != filename)
    {
        kfree(filename);
    }
    if(NULL != fileBackname)
    {
        kfree(fileBackname);
    }
    return BSP_ERROR;
}

BSP_VOID ICC_LOG_FUN(struct work_struct *Icc_log_work)
{
    ICC_LOG_DATA *icc_log_data = container_of(Icc_log_work, struct tagICC_LOG_DATA, ICC_work);
    ICC_a_core_LogFileSave(EXCH_LOG_PATH, EXCH_LOG_HEADER, icc_log_data->buf, icc_log_data->buf_length);
    kfree(icc_log_data->buf);
    kfree(icc_log_data);
    return;
}

BSP_S32 ICC_LogSave_Send(ICC_CHAN_DEV_S *pChan, BSP_U8 *pData, BSP_S32 s32Size, BSP_S32 header[])
{
    if(pChan->u32ChanID != CHAN_ID_21 && pChan->u32ChanID != CHAN_ID_22 )
    {
        if(g_pstIccCtrlChan->astChanInfo[pChan->u32ChanID].bLogSwitch == 1)
        {
            char *buf = NULL;
            BSP_S32 buf_length = 0;
            ICC_LOG_DATA *icc_log_data = kmalloc(sizeof(struct tagICC_LOG_DATA), GFP_ATOMIC);

            if(NULL == icc_log_data)
                return BSP_ERROR;
            if(g_pstIccCtrlChan->bLog_level == LOG_LEVEL_HEADER)
            {
                buf_length = strlen(LOG_LEVEL_SEND) + sizeof(pChan->u32ChanID) + ICC_PACKET_HEADER_LEN;
                buf = kmalloc(buf_length, GFP_ATOMIC);
				if(NULL == buf)
				{
                    kfree(icc_log_data);
                    return BSP_ERROR;
				}
                ICC_MEMCPY(buf, (void *) LOG_LEVEL_SEND, strlen(LOG_LEVEL_SEND));
                ICC_MEMCPY(buf + strlen(LOG_LEVEL_SEND), (void *)&(pChan->u32ChanID), sizeof(pChan->u32ChanID));
                ICC_MEMCPY(buf+ strlen(LOG_LEVEL_SEND) + sizeof(pChan->u32ChanID), (void*)header, ICC_PACKET_HEADER_LEN);
            }
            else
            {
                buf_length = strlen(LOG_LEVEL_SEND) + sizeof(pChan->u32ChanID) + ICC_PACKET_HEADER_LEN + s32Size;
                buf = kmalloc(buf_length, GFP_ATOMIC);
				if(NULL == buf)
				{
                    kfree(icc_log_data);
                    return BSP_ERROR;
				}
                ICC_MEMCPY(buf, (void *) LOG_LEVEL_SEND, strlen(LOG_LEVEL_SEND));
                ICC_MEMCPY(buf + strlen(LOG_LEVEL_SEND), (void *)&(pChan->u32ChanID), sizeof(pChan->u32ChanID));
                ICC_MEMCPY(buf + strlen(LOG_LEVEL_SEND) + sizeof(pChan->u32ChanID), (void *)header, ICC_PACKET_HEADER_LEN);
                ICC_MEMCPY(buf + strlen(LOG_LEVEL_SEND) + sizeof(pChan->u32ChanID) + ICC_PACKET_HEADER_LEN, (void *)pData, s32Size);
            }
            icc_log_data->buf = buf;
            icc_log_data->buf_length = buf_length;

            INIT_WORK(&icc_log_data->ICC_work, ICC_LOG_FUN);
            schedule_work(&icc_log_data->ICC_work);
        }
    }
    return BSP_OK;
}

BSP_S32 ICC_LogSave_Rev(ICC_CHAN_DEV_S *pChan, BSP_U8 *pData, BSP_S32 s32Size)
{
    if(pChan->u32ChanID != CHAN_ID_21 && pChan->u32ChanID != CHAN_ID_22 )
    {
        if(g_pstIccCtrlChan->astChanInfo[pChan->u32ChanID].bLogSwitch == 1)
        {
            char *buf = NULL;
            BSP_S32 buf_length = 0;
            ICC_LOG_DATA *icc_log_data = NULL;
            BSP_U32 header[(ICC_PACKET_HEADER_LEN/4)];
            header[0] = ICC_PACKET_HEADER;
            header[1] = pChan->packet.size;
            header[2] = mdrv_timer_get_normal_timestamp();

            icc_log_data = kmalloc(sizeof(struct tagICC_LOG_DATA), GFP_ATOMIC);


            if(NULL == icc_log_data)
                return BSP_ERROR;
            if(g_pstIccCtrlChan->bLog_level == LOG_LEVEL_HEADER)
            {
                buf_length = strlen(LOG_LEVEL_REV) + sizeof(pChan->u32ChanID) + ICC_PACKET_HEADER_LEN;
                buf = kmalloc(buf_length, GFP_ATOMIC);
				if(NULL == buf)
				{
                    kfree(icc_log_data);
                    return BSP_ERROR;
				}
                ICC_MEMCPY(buf, (void *) LOG_LEVEL_REV, strlen(LOG_LEVEL_REV));
                ICC_MEMCPY(buf + strlen(LOG_LEVEL_REV), (void *) &(pChan->u32ChanID), sizeof(pChan->u32ChanID));
                ICC_MEMCPY(buf+ strlen(LOG_LEVEL_REV) + sizeof(pChan->u32ChanID), (void *)header, ICC_PACKET_HEADER_LEN);
            }
            else
            {
                buf_length = strlen(LOG_LEVEL_REV) + sizeof(pChan->u32ChanID) + ICC_PACKET_HEADER_LEN + s32Size;
                buf = kmalloc(buf_length, GFP_ATOMIC);
				if(NULL == buf)
				{
                    kfree(icc_log_data);
                    return BSP_ERROR;
				}
                ICC_MEMCPY(buf, (void *) LOG_LEVEL_REV, strlen(LOG_LEVEL_REV));
                ICC_MEMCPY(buf + strlen(LOG_LEVEL_REV), (void *)&(pChan->u32ChanID), sizeof(pChan->u32ChanID));
                ICC_MEMCPY(buf + strlen(LOG_LEVEL_REV) + sizeof(pChan->u32ChanID), (void*)header, ICC_PACKET_HEADER_LEN);
                ICC_MEMCPY(buf + strlen(LOG_LEVEL_REV) + sizeof(pChan->u32ChanID) + ICC_PACKET_HEADER_LEN, (void *)pData, s32Size);
            }
            icc_log_data->buf = buf;
            icc_log_data->buf_length = buf_length;

            INIT_WORK(&icc_log_data->ICC_work, ICC_LOG_FUN);
            schedule_work(&icc_log_data->ICC_work);
        }
    }
    return BSP_OK;
}


/*****************************************************************************
* �� �� ��  : ICC_SendPacket
*
* ��������  :
*
* �������  :
*
* �������  :
*
* �� �� ֵ  :
*****************************************************************************/
BSP_S32 ICC_SendPacket(ICC_CHAN_DEV_S *pChan, BSP_U8 *pData, BSP_S32 s32Size)
{
    ICC_SUB_CHAN_S  *ptxChan = BSP_NULL;
    BSP_S32 s32IdleSize, s32IdleSize1, s32IdleSize2, s32PacketSize;
    BSP_U8* pWrite;
    BSP_S32 header[(ICC_PACKET_HEADER_LEN/4)];
    BSP_U32 delta;
    unsigned long flags = 0;

    #if(FEATURE_ICC_DEBUG != FEATURE_ON)
    BSP_S32 s32FifoSize;
    BSP_U8* CopyStart;
    BSP_S32 s32CopySize;
    BSP_S32 s32SaveAdd;
    BSP_S32 s32UsedSize;
    #endif


    down(&pChan->semSync);

    /* ��ȡ����buffer��С */
    /* BSP-693, modified by z67193 */
    local_irq_save(flags);
    ptxChan = pChan->ptxSubChanInfo;
    ICC_FIFOIdleSize(ptxChan, &s32IdleSize1, &s32IdleSize2);
    s32IdleSize = s32IdleSize1 + s32IdleSize2;

    /* ����packet��Ҫ4�ֽڶ��� */
    pWrite = (BSP_U8*)(HISI_VA_ADDRESS((BSP_U32)ptxChan->u32PhyWrite));
    delta = (BSP_U32)pWrite % 4;
    if (delta)
    {
    /* дָ���4�ֽڶ��룬�����ʼд������ */
    delta = 4 - delta;
    pWrite += delta;
    s32IdleSize1 -= delta;
    s32IdleSize -= delta;
    if (((unsigned long)pWrite) > HISI_VA_ADDRESS((BSP_U32)ptxChan->u32PhyEnd))
    {
        pWrite = (BSP_U8*)(HISI_VA_ADDRESS((BSP_U32)ptxChan->u32PhyStart));
        s32IdleSize1 = s32IdleSize2;
        s32IdleSize2 = 0;
    }
    }

    s32PacketSize = s32Size+ICC_PACKET_HEADER_LEN;
    if (s32PacketSize > s32IdleSize)
    {
        if (s32PacketSize > (BSP_S32)(ptxChan->u32FIFOsize - 4))
        {
            /* BSP-693, modified by z67193 */
            local_irq_restore(flags);
            up(&pChan->semSync);
            return BSP_ERR_ICC_PACKET_SIZE;
        }

        /* BSP-693, modified by z67193 */
        pChan->ptxSubChanInfo->u32WriteNeedSize += s32PacketSize;
        local_irq_restore(flags);
        up(&pChan->semSync);


#if(FEATURE_ICC_DEBUG != FEATURE_ON)
        s32FifoSize =ptxChan->u32FIFOsize;

        ICC_MEMCPY((void *) EXCH_A_ICC_SAVE_ADDR, pChan, sizeof (ICC_CHAN_DEV_S));
        ICC_MEMCPY((void *) (EXCH_A_ICC_SAVE_ADDR + sizeof (ICC_CHAN_DEV_S)), ptxChan, sizeof (ICC_SUB_CHAN_S));

        s32UsedSize=sizeof (ICC_SUB_CHAN_S)+sizeof (ICC_CHAN_DEV_S);
        s32SaveAdd = EXCH_A_ICC_SAVE_ADDR+s32UsedSize;
        s32CopySize= EXCH_A_ICC_SAVE_SIZE-s32UsedSize;
        ICC_DEBUG_printk("((ptxChan->u32PhyWrite): %x,(ptxChan->u32PhyStart):%x,s32CopySize:%d \n",ptxChan->u32PhyWrite, ptxChan->u32PhyStart, s32CopySize);//test
        ICC_DEBUG_printk("s32FifoSize:%d,s32CopySize:%d \n",s32FifoSize, s32CopySize);//test

        if(s32FifoSize <s32CopySize)
        {
            CopyStart =(BSP_U8*)HISI_VA_ADDRESS(ptxChan->u32PhyStart);
            ICC_DEBUG_printk("s32FifoSize <s32CopySize \n");//test
            ICC_MEMCPY((void *)s32SaveAdd, CopyStart, s32FifoSize);
        }
        else if(((ptxChan->u32PhyWrite)-(ptxChan->u32PhyStart))>s32CopySize)
        {
            CopyStart =(BSP_U8*)HISI_VA_ADDRESS((ptxChan->u32PhyWrite)-(s32CopySize));
            ICC_DEBUG_printk("((ptxChan->u32PhyWrite)-(ptxChan->u32PhyStart))>s32CopySize \n");//test
            ICC_MEMCPY((void *)s32SaveAdd, CopyStart, s32CopySize);
        }
        else
        {
            ICC_DEBUG_printk("((ptxChan->u32PhyWrite)-(ptxChan->u32PhyStart))<s32CopySize \n");//test
            s32CopySize= (EXCH_A_ICC_SAVE_SIZE-s32UsedSize)-(ptxChan->u32PhyWrite- ptxChan->u32PhyStart);
            CopyStart = (BSP_U8*)HISI_VA_ADDRESS((ptxChan->u32PhyEnd)-(s32CopySize));
            ICC_MEMCPY((void *)s32SaveAdd, CopyStart, s32CopySize);
            CopyStart =(BSP_U8*)HISI_VA_ADDRESS(ptxChan->u32PhyStart);
            s32CopySize= (ptxChan->u32PhyWrite- ptxChan->u32PhyStart);
            s32SaveAdd = EXCH_A_ICC_SAVE_ADDR+(s32UsedSize+s32CopySize);
            ICC_MEMCPY((void *)s32SaveAdd, CopyStart, s32CopySize);
        }

        *(volatile UINT32 *) EXCH_A_ICC_FLAG_ADDR = EXCH_A_CORE_FLAG;

#endif
        //systemError(BSP_MODU_MNTN, 0, 0, 0, 0);//test
        return BSP_ERR_ICC_BUFFER_FULL;
    }
    else
    {
        pChan->ptxSubChanInfo->u32WriteNeedSize = 0;
        /* BSP-693, modified by z67193 */
        local_irq_restore(flags);
    }

    /* ������ͷ */
    header[0] = ICC_PACKET_HEADER;
    header[1] = s32Size;


#if(FEATURE_ICC_DEBUG == FEATURE_ON)
    header[2] = (BSP_S32)omTimerGet();
#endif


    ICC_CopyDataIn((BSP_U8*)header, ICC_PACKET_HEADER_LEN, (BSP_U8*)(HISI_VA_ADDRESS((BSP_U32)ptxChan->u32PhyStart)),
            pWrite, s32IdleSize1);
    pWrite += ICC_PACKET_HEADER_LEN;
    s32IdleSize1 -= ICC_PACKET_HEADER_LEN;
    s32IdleSize -= ICC_PACKET_HEADER_LEN;

    if (((unsigned long)pWrite) > HISI_VA_ADDRESS((BSP_U32)ptxChan->u32PhyEnd))
    {
        pWrite -= ptxChan->u32FIFOsize;
        s32IdleSize2 += s32IdleSize1;
        s32IdleSize1 = s32IdleSize2;
    }

    /* �������� */
    ICC_CopyDataIn(pData, s32Size, (BSP_U8*)(HISI_VA_ADDRESS((BSP_U32)ptxChan->u32PhyStart)), pWrite, s32IdleSize1);
    pWrite += s32Size;
    if (((unsigned long)pWrite) > HISI_VA_ADDRESS((BSP_U32)ptxChan->u32PhyEnd))
    {
        pWrite -= ptxChan->u32FIFOsize;
    }

#if(FEATURE_ICC_DEBUG == FEATURE_ON)
    ICC_LogSave_Send(pChan, pData, s32Size, header);
#endif

    /* ����дָ�� */
    ptxChan->u32PhyWrite = (BSP_U32)HISI_PA_ADDRESS(pWrite);

    pChan->sDebug.u32SendTimes++;
    pChan->sDebug.u32SendBytes += s32Size;

#if(FEATURE_ICC_DEBUG == FEATURE_ON)
    ICC_FIFOIdleSize(ptxChan, &s32IdleSize1, &s32IdleSize2);
    s32IdleSize = s32IdleSize1 + s32IdleSize2;
    pChan->sDebug.u32IdleSize = s32IdleSize;
#endif

    /* ֪ͨ�Է� */
    ICC_NotifyTarget(pChan, ICC_CHAN_SIGNAL_DATA);

    up(&pChan->semSync);
    return s32Size;
}

/*****************************************************************************
* �� �� ��  : ICC_ReceiveStream
*
* ��������  :
*
* �������  :
*
* �������  :
*
* �� �� ֵ  :
*****************************************************************************/
BSP_VOID ICC_ReceiveStream(ICC_CHAN_DEV_S *pChan)
{
    BSP_S32 s32DataSize1, s32DataSize2;
    UDI_HANDLE handle;

    ICC_FIFODataSize(pChan->prxSubChanInfo, &s32DataSize1, &s32DataSize2);
    pChan->sDebug.u32LastHaveBytes = s32DataSize1+s32DataSize2;

    /* streamģʽֱ�ӻص� */
    if (pChan->read_cb)
    {
        if (!g_IccStMode)
        {

            handle = BSP_UDI_ICC_ChnToHandle(pChan->u32ChanID);
            (BSP_VOID)pChan->read_cb(handle, s32DataSize1+s32DataSize2);

            /*(BSP_VOID)pChan->read_cb(pChan->u32ChanID, s32DataSize1+s32DataSize2);*/
        }
        else
        {
            (BSP_VOID)pChan->read_cb(pChan->u32ChanID, s32DataSize1+s32DataSize2);
        }
    }

    return;
}


/*****************************************************************************
* �� �� ��  : ICC_ReceivePacket
*
* ��������  :
*
* �������  :
*
* �������  :
*
* �� �� ֵ  :
*****************************************************************************/
BSP_VOID ICC_ReceivePacket(ICC_CHAN_DEV_S *pChan)
{
    UDI_HANDLE handle;

    /* ���ܻ����˶��packet��ͨ��ѭ�����δ��� */
    while(pChan->prxSubChanInfo->u32PhyRead != pChan->prxSubChanInfo->u32PhyWrite)
    {
        if(BSP_OK == ICC_GetPacket(pChan))
        {
            /* �ص�֪ͨ�û� */
            if(pChan->read_cb)
            {
                if(!g_IccStMode)
                {

                    handle = BSP_UDI_ICC_ChnToHandle(pChan->u32ChanID);
                    (BSP_VOID)pChan->read_cb(handle, pChan->packet.size);

                    /*(BSP_VOID)pChan->read_cb(pChan->u32ChanID, pChan->packet.size);*/
                }
                else
                {
                    (BSP_VOID)pChan->read_cb(pChan->u32ChanID, pChan->packet.size);
                }
            }
            else
            {
                break;
            }
        }
        else
        {
            printk(KERN_ERR "BSP_MODU_ICC get a packet fail!.\n");
            break;
        }
    }

    return;
}


/*****************************************************************************
* �� �� ��  : ICC_ReadStream
*
* ��������  :
*
* �������  :
*
* �������  :
*
* �� �� ֵ  :
*****************************************************************************/
BSP_S32 ICC_ReadStream(ICC_CHAN_DEV_S *pChan, BSP_U8 *pData, BSP_S32 s32Size)
{
    BSP_S32 s32DataSize1, s32DataSize2, s32CopySize=0;
    BSP_S32 s32IdleSize1, s32IdleSize2;
    BSP_U8*  pRead = (BSP_U8*)(HISI_VA_ADDRESS((BSP_U32)pChan->prxSubChanInfo->u32PhyRead));
    BSP_U8*  pStart =(BSP_U8*)(HISI_VA_ADDRESS((BSP_U32)pChan->prxSubChanInfo->u32PhyStart));
    ICC_FIFODataSize(pChan->prxSubChanInfo, &s32DataSize1, &s32DataSize2);

    if (s32DataSize1)
    {
        if (s32Size <= s32DataSize1)
        {
            ICC_INVALID_CACHE(pRead, s32Size);
            ICC_MEMCPY(pData, pRead, s32Size);
            pRead += s32Size;
            if (((unsigned long)pRead) > HISI_VA_ADDRESS((BSP_U32)pChan->prxSubChanInfo->u32PhyEnd))
            {
                pRead -= pChan->prxSubChanInfo->u32FIFOsize;
            }
            s32CopySize = s32Size;
        }
        else
        {
            BSP_S32 len = s32Size-s32DataSize1;

            ICC_INVALID_CACHE(pRead, s32DataSize1);
            ICC_MEMCPY(pData, pRead, s32DataSize1);
            if (len > s32DataSize2)
            {
                len = s32DataSize2;
            }

            ICC_INVALID_CACHE(pStart, len);
            ICC_MEMCPY(pData+s32DataSize1, pStart, len);
            s32CopySize = s32DataSize1+len;
            pRead = (BSP_U8*)(pStart + len);
        }

        pChan->prxSubChanInfo->u32PhyRead = (BSP_U32)HISI_PA_ADDRESS(pRead);

#if(FEATURE_ICC_DEBUG == FEATURE_ON)
        pChan->sDebug.u32RecvTimes++;
        pChan->sDebug.u32RecvBytes += s32CopySize;
        pChan->sDebug.u32LastReadBytes = s32CopySize;
#endif

        /* ���FIFO�ռ��㹻�ˣ�֪ͨ�Է�CPU */
    if (pChan->prxSubChanInfo->u32WriteNeedSize > 0)
        {
        ICC_FIFOIdleSize(pChan->prxSubChanInfo, &s32IdleSize1, &s32IdleSize2);
        if ((pChan->prxSubChanInfo->u32WriteNeedSize <= (s32IdleSize1 + s32IdleSize2))
            ||(HISI_VA_ADDRESS((BSP_U32)pChan->prxSubChanInfo->u32PhyRead) == HISI_VA_ADDRESS((BSP_U32)pChan->prxSubChanInfo->u32PhyWrite)))
        {
            ICC_NotifyTarget(pChan, ICC_CHAN_SIGNAL_ENOUGH);
#if(FEATURE_ICC_DEBUG == FEATURE_ON)
                pChan->sDebug.u32NoticeEnough++;
#endif
        }
    }
    }

    return s32CopySize;
}


/*****************************************************************************
* �� �� ��  : ICC_ReceivePacket
*
* ��������  :
*
* �������  :
*
* �������  :
*
* �� �� ֵ  :
*****************************************************************************/
BSP_S32 ICC_ReadPacket(ICC_CHAN_DEV_S *pChan, BSP_U8 *pData, BSP_S32 s32Size)
{
    BSP_S32 s32IdleSize1, s32IdleSize2;
    ICC_SUB_CHAN_S *pRxChan = pChan->prxSubChanInfo;
    BSP_U8* pRead = (BSP_U8*)(HISI_VA_ADDRESS((BSP_U32)pChan->prxSubChanInfo->u32PhyRead));
    BSP_U8* pWrite = (BSP_U8*)(HISI_VA_ADDRESS((BSP_U32)pChan->prxSubChanInfo->u32PhyWrite));
    BSP_U8* pStart = (BSP_U8*)(HISI_VA_ADDRESS((BSP_U32)pRxChan->u32PhyStart));
    BSP_U8* data = (BSP_U8*)(HISI_VA_ADDRESS((BSP_U32)pChan->packet.data));

    if (0 == (pChan->packet.size))
    {
        if (pRead != pWrite)
        {
            if (BSP_OK != ICC_GetPacket(pChan))
            {
                return BSP_ERR_ICC_INVALID_PACKET;
            }
        }
        else
        {
            return 0;
        }
    }

    if (pChan->packet.size)
    {
        if (pChan->packet.size > s32Size)
        {
            return BSP_ERR_ICC_USER_BUFFER_SIZE;
        }

        if ((unsigned long)data + pChan->packet.size <= HISI_VA_ADDRESS((BSP_U32)pRxChan->u32PhyEnd) + 1)
        {
            ICC_INVALID_CACHE(data, pChan->packet.size);
            ICC_MEMCPY(pData, data, pChan->packet.size);
        }
        else
        {
            BSP_S32 size1, size2;

            size1 = HISI_VA_ADDRESS((BSP_U32)pRxChan->u32PhyEnd) + 1 - (unsigned long)data;
            size2 = pChan->packet.size - size1;
            ICC_INVALID_CACHE(data, size1);
            ICC_MEMCPY(pData, data, size1);
            ICC_INVALID_CACHE(pStart, size2);
            ICC_MEMCPY(pData+size1, pStart, size2);
        }

#if(FEATURE_ICC_DEBUG == FEATURE_ON)
    ICC_LogSave_Rev(pChan, pData, s32Size);
#endif


        pRead = data + pChan->packet.size;
        if (((unsigned long)pRead) > HISI_VA_ADDRESS((BSP_U32)pRxChan->u32PhyEnd))
        {
            pRead -= pRxChan->u32FIFOsize;
        }

        /* ����״̬ */
        pChan->packet.data = (BSP_U32)BSP_NULL;
        pChan->packet.size = 0;
        pRxChan->u32PhyRead = (BSP_U32)HISI_PA_ADDRESS(pRead);

#if(FEATURE_ICC_DEBUG == FEATURE_ON)
        pChan->sDebug.u32RecvTimes++;
        pChan->sDebug.u32RecvBytes += s32Size;
#endif
        /* ���FIFO�㹻�ˣ�֪ͨ�Է�CPU */
        if (pChan->prxSubChanInfo->u32WriteNeedSize > 0)
        {
            ICC_FIFOIdleSize(pChan->prxSubChanInfo, &s32IdleSize1, &s32IdleSize2);
            if ((pChan->prxSubChanInfo->u32WriteNeedSize <= (s32IdleSize1 + s32IdleSize2))
                ||(HISI_VA_ADDRESS((BSP_U32)pChan->prxSubChanInfo->u32PhyRead) == HISI_VA_ADDRESS((BSP_U32)pChan->prxSubChanInfo->u32PhyWrite)))
            {
                ICC_NotifyTarget(pChan, ICC_CHAN_SIGNAL_ENOUGH);
#if(FEATURE_ICC_DEBUG == FEATURE_ON)
                pChan->sDebug.u32NoticeEnough++;
#endif
            }
        }
    }

    return s32Size;
}


/*****************************************************************************
* �� �� ��  : ICC_HandleEvent
*
* ��������  : �¼�������
*
* �������  :
*
* �������  :
*
* �� �� ֵ  :
*****************************************************************************/
BSP_VOID ICC_HandleEvent(ICC_CHAN_DEV_S *pChan)
{
    BSP_U32 u32Signal;
    UDI_HANDLE handle;
    unsigned long flag = 0;

    local_irq_save(flag);

    ICC_SPIN_LOCK(&pChan->prxSubChanInfo->u32SpinLock);
    u32Signal = pChan->prxSubChanInfo->u32Signal;
    pChan->prxSubChanInfo->u32Signal &= (~u32Signal);
    ICC_SPIN_UNLOCK(&pChan->prxSubChanInfo->u32SpinLock);

    local_irq_restore(flag);
    if (check_himntn(HIMNTN_PRINTK_WHO_WAKEUP_ACPU)) {
        printk(KERN_INFO "%s:%d:icc channel_id:[%d]\n", __func__, __LINE__, pChan->u32ChanID);
    }
#if defined (CONFIG_HISILICON_PLATFORM_POWER_CONTROL)
    if(g_pwcAcpuWakeFlagIcc)
    {
        g_pwcAcpuWakeFlagIcc = 0;
        if(NULL != g_UplayerChannel_CB.routine)
        {
            g_UplayerChannel_CB.routine(g_UplayerChannel_CB.param);
        }
        (void)tele_mntn_write_log(TELE_MNTN_ICC_WAKE_ACPU, sizeof(pChan->u32ChanID), &(pChan->u32ChanID));
        printk(KERN_ERR "%s:%d:icc wakeup channel_id:[%d]\n", __func__, __LINE__, pChan->u32ChanID);
    }
#endif
    if (ICC_CHAN_SIGNAL_OPEN & u32Signal)
    {
        up(&pChan->semOpen);
/*Modify_for_c_reset, l00212112,20130511, starts*/
        if (BSP_TRUE == g_bCcoreReset_Channel[pChan->u32ChanID])
        {
            g_bCcoreReset_Channel[pChan->u32ChanID] = BSP_FALSE;
            printk(KERN_INFO "ICC_HandleEvent C reset, channel[%d] is valid!.\n",pChan->u32ChanID);
        }
/*Modify_for_c_reset, l00212112,20130511, ends*/
        if(pChan->u32ChanID != CHAN_ID_21 && pChan->u32ChanID != CHAN_ID_22 )
            ICC_CreateChanDev(pChan->u32ChanID);
    }

    /* Ŀ�괦�����ر���ͨ�� */
    if(ICC_CHAN_SIGNAL_CLOSE & u32Signal)
    {
        if(ICC_CHAN_STATE_CLOSED == pChan->prxSubChanInfo->u32SubChanState)
        {
            if(pChan->event_cb)
            {
                if(!g_IccStMode)
                {

                    handle = BSP_UDI_ICC_ChnToHandle(pChan->u32ChanID);
                    (BSP_VOID)pChan->event_cb(handle, ICC_EVENT_CLOSE, 0);

                    /*(BSP_VOID)pChan->event_cb(pChan->u32ChanID, ICC_EVENT_CLOSE, 0);*/
                }
                else
                {
                    (BSP_VOID)pChan->event_cb(pChan->u32ChanID, ICC_EVENT_CLOSE, 0);
                }
            }
        }

        /* close֮�󣬺����������ź� */
        u32Signal = 0;
        pChan->ptxSubChanInfo->u32WriteNeedSize = 0;
        ICC_DestroyChanDev(pChan->u32ChanID);
    }

    if (ICC_CHAN_SIGNAL_RESET & u32Signal)
    {
        /* ��λͨ���Ķ�дָ�룬ֻ��λ����ͨ�� */
        pChan->ptxSubChanInfo->u32PhyWrite = pChan->ptxSubChanInfo->u32PhyStart;
        pChan->ptxSubChanInfo->u32PhyRead = pChan->ptxSubChanInfo->u32PhyStart;

        /* ֪ͨ�ϲ� */
        if (pChan->event_cb)
        {
            if (!g_IccStMode)
            {

                handle = BSP_UDI_ICC_ChnToHandle(pChan->u32ChanID);
                (BSP_VOID)pChan->event_cb(handle, ICC_EVENT_RESET, 0);

                /*(BSP_VOID)pChan->event_cb(pChan->u32ChanID, ICC_EVENT_RESET, 0);*/
            }
            else
            {
                 (BSP_VOID)pChan->event_cb(pChan->u32ChanID, ICC_EVENT_RESET, 0);
            }
        }
    }

    if (ICC_CHAN_SIGNAL_DATA & u32Signal)
    {
        pChan->sDebug.u32RecvInt++;
        if (ICC_CHAN_MODE_STREAM == pChan->enMode)
        {
            /* streamģʽ */
            ICC_ReceiveStream(pChan);
        }
        else
        {
            /* packetģʽ��Ҫ�Ƚ��� */
            ICC_ReceivePacket(pChan);
        }
    }

    if (ICC_CHAN_SIGNAL_ENOUGH & u32Signal)
    {
#if(FEATURE_ICC_DEBUG == FEATURE_ON)
        pChan->sDebug.u32RecvEnough++;
#endif
        if ((pChan->ptxSubChanInfo->u32WriteNeedSize > 0) && (pChan->write_cb))
        {
            if (!g_IccStMode)
            {

                handle = BSP_UDI_ICC_ChnToHandle(pChan->u32ChanID);
                (BSP_VOID)pChan->write_cb(handle);

                /*(BSP_VOID)pChan->write_cb(pChan->u32ChanID);*/
            }
            else
            {
                (BSP_VOID)pChan->write_cb(pChan->u32ChanID);
            }

            pChan->ptxSubChanInfo->u32WriteNeedSize = 0;
        }
    }

    return;
}


/*****************************************************************************
* �� �� ��  : ICC_task
*
* ��������  : ICC��������
*
* �������  :
*
* �������  :
*
* �� �� ֵ  :
*****************************************************************************/
BSP_S32 ICC_task(void)
{
    ICC_CHAN_DEV_S *pChan = BSP_NULL;
    ICC_CHAN_DEV_S *pChanNext = BSP_NULL;

    do {
        down(&g_semIccTask);

        for (pChan = g_pstOpenList; BSP_NULL != pChan ; pChan = pChanNext)
        {
            /* ����event�У�������Ϊ���ȼ�������������˳��ı� */
            pChanNext = pChan->next;

            if (pChan->prxSubChanInfo->u32Signal)
            {
                ICC_HandleEvent(pChan);
            }
        }
    } while(1);
}

int icc_thread(void *__unused)
{
    ICC_CHAN_DEV_S *pChan = BSP_NULL;
    ICC_CHAN_DEV_S *pChanNext = BSP_NULL;
    unsigned long flags = 0;

    //l00186593 rt prio begin
    if (icc_thread_prio > 0)
    {
        struct sched_param param;
        param.sched_priority = (icc_thread_prio < MAX_RT_PRIO)?icc_thread_prio:(MAX_RT_PRIO-1);
        (void)sched_setscheduler(current, SCHED_FIFO, &param);
    }
    //l00186593 rt prio end

    /*set_freezable();*/            /*  advised by l56193         */

    do {
        for (pChan = g_pstOpenList; BSP_NULL != pChan ; pChan = pChanNext)
        {
            /* ����event�У�������Ϊ���ȼ�������������˳��ı� */
            pChanNext = pChan->next;

            if (pChan->prxSubChanInfo->u32Signal)
            {
                ICC_HandleEvent(pChan);
            }
        }

        wait_event(icc_wait, thread_flag);
        spin_lock_irqsave(&g_icc_thread_flag_lock, flags);
        thread_flag = 0;
        spin_unlock_irqrestore(&g_icc_thread_flag_lock, flags);

    } while (!kthread_should_stop());

    return 0;
}



/*****************************************************************************
* �� �� ��  : ICC_HandleEvent
*
* ��������  : ICC���жϴ�����
*
* �������  :
*
* �������  :
*
* �� �� ֵ  :
*****************************************************************************/
static irqreturn_t ICC_IntHandle(int irq, void *dev_id)
{
    wake_lock_timeout(&g_ulIccwakelock, HZ);

    /* ����ICC TASK */
    thread_flag = 1;
    wake_up(&icc_wait);
    return IRQ_HANDLED;
}


/*****************************************************************************
* �� �� ��  : BSP_ICC_Init
*
* ��������  : ICC��ʼ��
*
* �������  : ��
*
* �������  : ��
*
* �� �� ֵ  :
*****************************************************************************/
BSP_S32 BSP_ICC_Init(void)
{
    BSP_U32 cnt = 2000;
    BSP_S32 ret = 0;

    if (BSP_TRUE == g_stIccDev.bInit)
    {
        return BSP_OK;
    }

    printk(KERN_INFO "BSP_ICC_Init: enter,time stamp = 0x%x!\n", mdrv_timer_get_normal_timestamp());

    g_pstIccCtrlChan = (ICC_CTRL_CHAN_S*)HISI_VA_ADDRESS(MEMORY_AXI_ICC_ADDR);

    /* �����������ź��� */
    sema_init(&g_semIccCtrl, SEM_FULL);

    /* �����������ź��� */
    sema_init(&g_semIccTask, SEM_EMPTY);

    /* ����ͨ���������ź��� */
    sema_init(&g_semIccList, SEM_FULL);

    /* ������Դ�������ź��� */
    sema_init(&g_semIpcSpinLock, SEM_FULL);

    wake_lock_init(&g_ulIccwakelock,WAKE_LOCK_SUSPEND,"Icc");

    icc_task = kthread_run(icc_thread, NULL, "icc_thread");
    if (IS_ERR(icc_task))
    {
        printk("create kthread icc_thread failed!\n");
        return BSP_ERROR;
    }

    /* register multicore irq function and enable irq */
    ret = BSP_IPC_IntConnect((IPC_INT_LEV_E)INT_VEC_ICC, (VOIDFUNCPTR)ICC_IntHandle, 0);
    if(ret)
    {
        printk("IPC interrupt connect failed!\n");
        return BSP_ERROR;
    }
    ret = BSP_IPC_IntEnable((IPC_INT_LEV_E)INT_VEC_ICC);
    if(ret)
    {
        printk("IPC interrupt enable failed!\n");
        return BSP_ERROR;
    }

    ICC_SPIN_LOCK(&g_pstIccCtrlChan->u32SpinLock);

    if (!g_pstIccCtrlChan->bInit[ICC_TAGET])
    {
        ICC_MEMSET(g_pstIccCtrlChan->astChanInfo, 0, (ICC_CHAN_NUM_MAX*sizeof(ICC_CHAN_S)));
    }
    else
    {
        g_pstIccCtrlChan->bConnect = BSP_TRUE;
    }

    g_pstIccCtrlChan->bInit[ICC_HOST] = BSP_TRUE;
    ICC_SPIN_UNLOCK(&g_pstIccCtrlChan->u32SpinLock);

    g_pstIccCtrlChan->bLog_level=LOG_LEVEL_HEADER;

    while ((cnt--) && (!g_pstIccCtrlChan->bInit[ICC_TAGET]))
    {
        msleep(10);
    }

    ret = ICC_CreateDevInit();

    if (ret < 0)
        return ret;

    if (g_pstIccCtrlChan->bInit[ICC_TAGET])
    {
        g_stIccDev.bInit = BSP_TRUE;
        printk(KERN_INFO"BSP_ICC_Init: leave,time stamp=0x%x,cnt=%d, connet=%d!\n", \
                                   mdrv_timer_get_normal_timestamp(), cnt, g_pstIccCtrlChan->bConnect);
        return BSP_OK;
    }
    else
    {
        return BSP_ERROR;
    }
}


/*****************************************************************************
* �� �� ��  : BSP_ICC_Open
*
* ��������  : ��һ��ICCͨ��
*
* �������  : u32ChanId        ͨ��ID
*             pChanAttr        ͨ������
*
* �������  : ��
*
* �� �� ֵ  :
*****************************************************************************/
BSP_S32 BSP_ICC_Open(BSP_U32 u32ChanId, ICC_CHAN_ATTR_S *pChanAttr)
{
    BSP_S32 ret;
    ICC_CHAN_DEV_S *pChan = BSP_NULL;
    ICC_CHAN_S *pSmChan;

    if (BSP_FALSE == g_stIccDev.bInit)
    {
        printk(KERN_ERR "BSP_MODU_ICC ICC is not inited!.\n");
        return BSP_ERR_ICC_NOT_INIT;
    }

    if (BSP_FALSE == g_pstIccCtrlChan->bConnect)
    {
        printk(KERN_ERR "BSP_MODU_ICC ICC is not connect!.\n");
        return BSP_ERR_ICC_NOT_CONNECT;
    }

    if (u32ChanId >= ICC_CHAN_NUM_MAX)
    {
        printk(KERN_ERR "BSP_MODU_ICC invalid channel[%d]!.\n",u32ChanId);
        return BSP_ERR_ICC_INVALID_CHAN;
    }
    pSmChan = (ICC_CHAN_S *)(&g_pstIccCtrlChan->astChanInfo[u32ChanId]);
    pSmChan->openBeginTime[ICC_HOST] = mdrv_timer_get_normal_timestamp();
    printk(KERN_INFO"BSP_ICC_Open channel id is %d,enter at 0x%x(time)!\n", \
                                        u32ChanId, pSmChan->openBeginTime[ICC_HOST]);

    if (BSP_NULL == pChanAttr)
    {
        printk(KERN_ERR "BSP_MODU_ICC invalid param[%d]!.\n",u32ChanId);
        return BSP_ERR_ICC_NULL;
    }

    if ( (pChanAttr->enChanMode >= ICC_CHAN_MODE_BUTT)
        ||(pChanAttr->u32Priority > ICC_CHAN_PRIORITY_LOW)
        ||(pChanAttr->u32FIFOInSize < ICC_CHAN_FIFO_MIN)
        ||(pChanAttr->u32FIFOInSize > ICC_CHAN_FIFO_MAX)
        ||(pChanAttr->u32FIFOInSize % 4)
        ||(pChanAttr->u32FIFOOutSize < ICC_CHAN_FIFO_MIN)
        ||(pChanAttr->u32FIFOOutSize > ICC_CHAN_FIFO_MAX)
        ||(pChanAttr->u32FIFOOutSize % 4))
        {
            printk(KERN_ERR "BSP_MODU_ICC invalid para:[chan%d], mode=%d, priority=%d, iSize=%d, oSize=%d.\n",
               u32ChanId,
               pChanAttr->enChanMode,
               pChanAttr->u32Priority,
               pChanAttr->u32FIFOInSize,
               pChanAttr->u32FIFOOutSize);
            return BSP_ERR_ICC_INVALID_PARAM;
        }

    down(&g_semIccCtrl);

    /* �ȼ���Ƿ��Ѿ��� */
    ICC_ListGet(g_pstOpenList, u32ChanId, &pChan);
    if (pChan)
    {
        up(&g_semIccCtrl);
        printk(KERN_ERR "BSP_MODU_ICC channel[%d] is openned!.\n",u32ChanId);
        return BSP_ERR_ICC_OPENED;
    }

    /* ����ͨ���ڵ� */
    pChan = (ICC_CHAN_DEV_S*)kmalloc(sizeof(ICC_CHAN_DEV_S), GFP_KERNEL);
    if (!pChan)
    {
        up(&g_semIccCtrl);
        printk(KERN_ERR "BSP_MODU_ICC channel[%d] alloc channel info failed.\n",u32ChanId);
        return BSP_ERR_ICC_NO_MEM;
    }

    sema_init(&pChan->semSync, SEM_FULL);
    sema_init(&pChan->semOpen, SEM_EMPTY);
    sema_init(&pChan->semRead, SEM_EMPTY);

    /* �Կ���ͨ������ */
    ICC_SPIN_LOCK(&g_pstIccCtrlChan->u32SpinLock);

    /* ���ͨ���Ƿ��Ѿ����� */
    if (BSP_FALSE == pSmChan->bAlloc)
    {
        /* ����Է���û������ͨ������������ͨ�� */
        ret = ICC_AllocChannel(u32ChanId, pChanAttr);
        if (BSP_OK != ret)
        {
            kfree(pChan);
            pChan = BSP_NULL;
            ICC_SPIN_UNLOCK(&g_pstIccCtrlChan->u32SpinLock);

            up(&g_semIccCtrl);
            printk(KERN_ERR "BSP_MODU_ICC channel[%d] alloc channel failed.\n",u32ChanId);
            return ret;
        }
    }
    else
    {
        /* ����Է�ͨ���Ѿ����룬�Ƚ�ͨ�����ԣ�
        ���In/Out FIFO��size����ȣ�����ͨ��ģ��/���ȼ�����ȣ����ش���*/
        if ( (pChanAttr->enChanMode != pSmChan->enMode)
        ||(pChanAttr->u32Priority != pSmChan->u32Priority)
        ||(pChanAttr->u32FIFOInSize != IO_TYPE(pSmChan->u32SubChanInfo[ICC_TAGET])->u32FIFOsize)
        ||(pChanAttr->u32FIFOOutSize !=IO_TYPE( pSmChan->u32SubChanInfo[ICC_HOST])->u32FIFOsize))
        {
            kfree(pChan);
            pChan = BSP_NULL;
            ICC_SPIN_UNLOCK(&g_pstIccCtrlChan->u32SpinLock);

            up(&g_semIccCtrl);
            printk(KERN_ERR "BSP_MODU_ICC channel attr is defferent! chan[%d] mode=%d priority=%d iSize=%d oSize=%d.\n",
               u32ChanId,
               pChanAttr->enChanMode,
               pChanAttr->u32Priority,
               pChanAttr->u32FIFOInSize,
               pChanAttr->u32FIFOOutSize);
            return BSP_ERR_ICC_INVALID_PARAM;
        }

        if (ICC_CHAN_STATE_CLOSEING == pSmChan->enState)
        {
            kfree(pChan);
            pChan = BSP_NULL;
            ICC_SPIN_UNLOCK(&g_pstIccCtrlChan->u32SpinLock);

            up(&g_semIccCtrl);
            printk(KERN_ERR "BSP_MODU_ICC channel[%d] is closing.\n", u32ChanId);
            return BSP_ERR_ICC_OPENED;
        }
    }

    /* ��ʼ��ͨ���ڵ� */
    pChan->u32ChanID = u32ChanId;
    pChan->u32Priority = pSmChan->u32Priority;
    pChan->enMode = pSmChan->enMode;
/*Modify_for_c_reset, l00212112,20130511, starts*/
    g_bCcoreReset_Channel[pChan->u32ChanID] = BSP_FALSE;
/*Modify_for_c_reset, l00212112,20130511, ends*/
    pChan->pSpinLock = &pSmChan->u32SpinLock;
    pChan->packet.data = (BSP_U32)BSP_NULL;
    pChan->packet.size = 0;

    pChan->ptxSubChanInfo = IO_TYPE(pSmChan->u32SubChanInfo[ICC_HOST]);
    pChan->prxSubChanInfo = IO_TYPE(pSmChan->u32SubChanInfo[ICC_TAGET]);

    pChan->prxSubChanInfo->u32Signal = 0;
    pChan->ptxSubChanInfo->u32SubChanState = ICC_CHAN_STATE_OPENED;
    pChan->ptxSubChanInfo->u32WriteNeedSize = 0;
    pChan->event_cb = pChanAttr->event_cb;
    pChan->read_cb = pChanAttr->read_cb;
    pChan->write_cb = pChanAttr->write_cb;
    pChan->next = BSP_NULL;
    pChan->sDebug.u32SendTimes = 0;
    pChan->sDebug.u32SendBytes= 0;
    pChan->sDebug.u32RecvTimes= 0;
    pChan->sDebug.u32RecvBytes= 0;
    pChan->sDebug.u32RecvInt= 0;
    pChan->sDebug.u32LastHaveBytes = 0;
    pChan->sDebug.u32LastReadBytes = 0;
    pChan->sDebug.u32NoticeEnough = 0;
    pChan->sDebug.u32RecvEnough = 0;

    /* �ж�Ŀ�괦����ͨ����״̬ */
    if(ICC_CHAN_STATE_OPENED == pChan->prxSubChanInfo->u32SubChanState)
    {
        pSmChan->enState = ICC_CHAN_STATE_OPENED;

        /* �������� */
        (BSP_VOID)ICC_ListAdd(&g_pstOpenList, pChan);
        if(pChan->u32ChanID != CHAN_ID_21 && pChan->u32ChanID != CHAN_ID_22)
            ICC_CreateChanDev(pChan->u32ChanID);
        /* �ͷſ���ͨ�������� */
        ICC_SPIN_UNLOCK(&g_pstIccCtrlChan->u32SpinLock);
        /* ֪ͨ�Է� */
        ICC_NotifyTarget(pChan, ICC_CHAN_SIGNAL_OPEN);

        up(&g_semIccCtrl);

        pSmChan->openEndTime[ICC_HOST] = mdrv_timer_get_normal_timestamp();
        printk(KERN_INFO"BSP_ICC_Open channel id is %d,leave at 0x%x(time)!\n", \
                                    u32ChanId, pSmChan->openEndTime[ICC_HOST]);
        return BSP_OK;
    }
    else
    {
        /* �������� */
        (BSP_VOID)ICC_ListAdd(&g_pstOpenList, pChan);
        if(pChan->u32ChanID != CHAN_ID_21 && pChan->u32ChanID != CHAN_ID_22 )
            ICC_CreateChanDev(pChan->u32ChanID);
        /* �ͷſ���ͨ�������� */
        ICC_SPIN_UNLOCK(&g_pstIccCtrlChan->u32SpinLock);
        /* ֪ͨ�Է� */
        ICC_NotifyTarget(pChan, ICC_CHAN_SIGNAL_OPEN);

        /* �����ȴ� */
        if (0 != down_timeout(&pChan->semOpen, msecs_to_jiffies(pChanAttr->u32TimeOut * 10)))
        {
            /* �˳����� */
            ICC_ListGetOut(&g_pstOpenList, pChan->u32ChanID, &pChan);
            ICC_DestroyChanDev(pChan->u32ChanID);
            ICC_FreeChannel(pChan->u32ChanID);

            up(&g_semIccCtrl);
            printk(KERN_ERR "BSP_MODU_ICC ICC timer out. %d\n", u32ChanId);
            return BSP_ERR_ICC_TIMEOUT;
        }
        if (ICC_CHAN_STATE_OPENED == pChan->prxSubChanInfo->u32SubChanState)
        {
            up(&g_semIccCtrl);

            pSmChan->openEndTime[ICC_HOST] = mdrv_timer_get_normal_timestamp();
            printk(KERN_INFO"BSP_ICC_Open channel id is %d,leave at 0x%x(time)!\n", \
                                        u32ChanId, pSmChan->openEndTime[ICC_HOST]);
            return BSP_OK;
        }
        else
        {
            /* �˳����� */
            ICC_ListGetOut(&g_pstOpenList, pChan->u32ChanID, &pChan);
            ICC_DestroyChanDev(pChan->u32ChanID);
            ICC_FreeChannel(pChan->u32ChanID);

            up(&g_semIccCtrl);
            printk(KERN_ERR "BSP_MODU_ICC ICC NEGOTIATE_FAIL. %d\n", u32ChanId);
            return BSP_ERR_ICC_NEGOTIATE_FAIL;
        }
    }
}


/*****************************************************************************
* �� �� ��  : BSP_ICC_Close
*
* ��������  : �ر�һ��ICCͨ��
*
* �������  : u32ChanId    ͨ��ID
*
* �������  : ��
*
* �� �� ֵ  :
*****************************************************************************/
BSP_S32 BSP_ICC_Close(BSP_U32 u32ChanId)
{
    ICC_CHAN_DEV_S  *pChan = BSP_NULL;
    ICC_CHAN_S *pSmChan = BSP_NULL;

    printk(KERN_INFO "BSP_MODU_ICC BSP_ICC_Close enter chan[%d]!.\n",u32ChanId);

    if (BSP_FALSE == g_stIccDev.bInit)
    {
        printk(KERN_ERR "BSP_MODU_ICC ICC is not inited!.\n");
        return BSP_ERR_ICC_NOT_INIT;
    }

    if (BSP_FALSE == g_pstIccCtrlChan->bConnect)
    {
        printk(KERN_ERR "BSP_MODU_ICC ICC is not inited!.\n");
        return BSP_ERR_ICC_NOT_CONNECT;
    }

    if (u32ChanId >= ICC_CHAN_NUM_MAX)
    {
        printk(KERN_ERR "BSP_MODU_ICC invalid channel[%d]!.\n",u32ChanId);
        return BSP_ERR_ICC_INVALID_CHAN;
    }

    /* ��ȡͨ�� */
    ICC_ListGetOut(&g_pstOpenList, u32ChanId, &pChan);
    if (BSP_NULL == pChan)
    {
        printk(KERN_ERR "BSP_MODU_ICC channel[%d] is not open!.\n",u32ChanId);
        return BSP_ERR_ICC_NOT_OPEN;
    }
    ICC_DestroyChanDev(pChan->u32ChanID);
    down(&pChan->semSync);

    ICC_SPIN_LOCK(pChan->pSpinLock);
    pSmChan = &g_pstIccCtrlChan->astChanInfo[u32ChanId];
    if (ICC_CHAN_STATE_CLOSEING == pSmChan->enState)
    {
        /* ����Է��ѹرգ����ͷŹ����ڴ��е�ͨ�� */
        ICC_FreeChannel(u32ChanId);

        ICC_SPIN_UNLOCK(pChan->pSpinLock);
    }
    else
    {
        /* ����״̬ */
        pChan->ptxSubChanInfo->u32SubChanState = ICC_CHAN_STATE_CLOSED;
        pSmChan->enState = ICC_CHAN_STATE_CLOSEING;
        ICC_SPIN_UNLOCK(pChan->pSpinLock);
        /* ֪ͨ�Է� */
        ICC_NotifyTarget(pChan, ICC_CHAN_SIGNAL_CLOSE);
    }

    up(&pChan->semSync);

    kfree(pChan);
    pChan = BSP_NULL;

    return BSP_OK;
}


/*****************************************************************************
* �� �� ��  : BSP_ICC_Write
*
* ��������  : ��ICCͨ����д������
*
* �������  : u32ChanId    ͨ��ID
*             data      ����ָ��
*             size      ���ݴ�С
*
* �������  : ��
*
* �� �� ֵ  :
*****************************************************************************/
BSP_S32 BSP_ICC_Write(BSP_U32 u32ChanId, BSP_U8* pData, BSP_S32 s32Size)
{
    ICC_CHAN_DEV_S  *pChan = BSP_NULL;
    BSP_S32 s32CopySize;
    BSP_S32 s32ErrorNum=0;

    /* δ��ʼ��������д������ */
    if (BSP_FALSE == g_stIccDev.bInit)
    {
        s32ErrorNum=BSP_ERR_ICC_NOT_INIT;
        goto errorExit;
    }

    if (BSP_FALSE == g_pstIccCtrlChan->bConnect)
    {
        s32ErrorNum=BSP_ERR_ICC_NOT_CONNECT;
        goto errorExit;
    }

    if (!pData)
    {
        s32ErrorNum=BSP_ERR_ICC_NULL;
        goto errorExit;
    }

    if (s32Size <= 0)
    {
        s32ErrorNum= BSP_ERR_ICC_INVALID_PARAM;
        goto errorExit;
    }

    if (u32ChanId >= ICC_CHAN_NUM_MAX)
    {
        s32ErrorNum= BSP_ERR_ICC_INVALID_CHAN;
        goto errorExit;
    }

    /* ��ȡͨ�� */
    ICC_ListGet(g_pstOpenList, u32ChanId, &pChan);
    if (BSP_NULL == pChan)
    {
        s32ErrorNum= BSP_ERR_ICC_NOT_OPEN;
        goto errorExit;
    }
/*Modify_for_c_reset, l00212112,20130511, starts*/
/*���C�˸�λ���򷵻�*/
    if (BSP_TRUE == g_bCcoreReset_Channel[pChan->u32ChanID])
    {
        s32ErrorNum=BSP_ERR_ICC_CCORE_RESETTING;
        printk(KERN_INFO "BSP_ICC_Write C reset, channel[%d] is invalid!.\n",u32ChanId);

        goto errorExit;
    }
/*Modify_for_c_reset, l00212112,20130511, ends*/
    if (ICC_CHAN_MODE_PACKET == pChan->enMode)
    {
        s32CopySize = ICC_SendPacket(pChan, pData, s32Size);
    }
    else
    {
        s32CopySize = ICC_SendStream(pChan, pData, s32Size);
    }

    /*
    if(s32Size == s32CopySize)
    {
        return s32CopySize;
    }
    else
    {
        s32ErrorNum=s32CopySize;
        goto errorExit;
    }
    */
    return s32CopySize;

errorExit:

    return s32ErrorNum;
}


/*****************************************************************************
* �� �� ��  : BSP_ICC_Read
*
* ��������  : ��������
*
* �������  : u32ChanId    ͨ��ID
*
*
* �������  : ��
*
* �� �� ֵ  :
*****************************************************************************/
BSP_S32 BSP_ICC_Read(BSP_U32 u32ChanId, BSP_U8* pData, BSP_S32 s32Size)
{
    ICC_CHAN_DEV_S  *pChan = BSP_NULL;
    BSP_S32 s32CopySize;
    BSP_S32 s32ErrorNum=0;

    /* δ��ʼ��������д������ */
    if (BSP_FALSE == g_stIccDev.bInit)
    {
        s32ErrorNum=BSP_ERR_ICC_NOT_INIT;
        goto errorExit;
    }

    if (BSP_FALSE == g_pstIccCtrlChan->bConnect)
    {
        s32ErrorNum=BSP_ERR_ICC_NOT_CONNECT;
        goto errorExit;
    }

    if (!pData)
    {
        s32ErrorNum=BSP_ERR_ICC_NULL;
        goto errorExit;
    }

    if (u32ChanId >= ICC_CHAN_NUM_MAX)
    {
        s32ErrorNum=BSP_ERR_ICC_INVALID_CHAN;
        goto errorExit;
    }

    /* ��ȡͨ�� */
    ICC_ListGet(g_pstOpenList, u32ChanId, &pChan);
    if (BSP_NULL == pChan)
    {
        s32ErrorNum=BSP_ERR_ICC_NOT_OPEN;
        goto errorExit;
    }

    if (ICC_CHAN_MODE_PACKET == pChan->enMode)
    {
        s32CopySize = ICC_ReadPacket(pChan, pData, s32Size);
    }
    else
    {
        s32CopySize = ICC_ReadStream(pChan, pData, s32Size);
    }

    if(s32Size == s32CopySize)
    {
        return s32CopySize;
    }
    else
    {
        s32ErrorNum=s32CopySize;
        goto errorExit;
    }

errorExit:

    return s32ErrorNum;
}


/*****************************************************************************
* �� �� ��  : BSP_ICC_Ioctl
*
* ��������  : ��������
*
* �������  : u32ChanId    ͨ��ID
*             cmd       ��������
*             param     ��������Ĳ���
*
* �������  : ��
*
* �� �� ֵ  :
*****************************************************************************/
BSP_S32 BSP_ICC_Ioctl(BSP_U32 u32ChanId, BSP_U32 cmd, BSP_VOID *param)
{
    BSP_S32 ret;
    printk(KERN_ERR "BSP_MODU_ICC BSP_ICC_Ioctl enter chan[%d]!.\n",u32ChanId);

    if (BSP_FALSE == g_stIccDev.bInit)
    {
        printk(KERN_ERR "BSP_MODU_ICC ICC is not inited!.\n");
        return BSP_ERR_ICC_NOT_INIT;
    }

    if (BSP_FALSE == g_pstIccCtrlChan->bConnect)
    {
        printk(KERN_ERR "BSP_MODU_ICC ICC is not inited!.\n");
        return BSP_ERR_ICC_NOT_CONNECT;
    }

    if (u32ChanId >= ICC_CHAN_NUM_MAX)
    {
        printk(KERN_ERR "BSP_MODU_ICC invalid channel[%d]!.\n",u32ChanId);
        return BSP_ERR_ICC_INVALID_CHAN;
    }

    switch(cmd)
    {
        case ICC_IOCTL_SET_EVENT_CB:
        {
            ret = ICC_SetEventCB(u32ChanId, (icc_event_cb)param);
            break;
        }
        case ICC_IOCTL_SET_READ_CB:
        {
            ret = ICC_SetReadCB(u32ChanId, (icc_read_cb)param);
            break;
        }
        case ICC_IOCTL_SET_WRITE_CB:
        {
            ret = ICC_SetWriteCB(u32ChanId, (icc_write_cb)param);
            break;
        }
        case ICC_IOCTL_GET_STATE:
        {
            ret = ICC_GetChanState(u32ChanId, (ICC_CHAN_STATE_E*)param);
            break;
        }
        default:
        {
            printk(KERN_ERR "BSP_MODU_ICC channel[%d] invalid cmd[%d].\n",u32ChanId,cmd);
            ret = BSP_ERR_ICC_INVALID_PARAM;
            break;
        }
    }

    return ret;
}
/*Modify_for_c_reset, l00212112,20130511, starts*/
/*****************************************************************************
* �� �� ��  : BSP_ICC_ResetFun
*
* ��������  : ��λICC
*
* �������  : ��
*
* �������  : ��
*
* �� �� ֵ  :
*****************************************************************************/
BSP_VOID BSP_ICC_ResetFun(void)
{
    ICC_CHAN_DEV_S  *pChan = BSP_NULL;
    ICC_CHAN_DEV_S  *pChanNext = BSP_NULL;
    UDI_HANDLE      handle = 0;

    /*��ѯͨ�����������д򿪵�ͨ���ܵ����ź�����Ϊ��λ�ź�*/
    for (pChan = g_pstOpenList; BSP_NULL != pChan;pChan = pChanNext)
    {
        g_bCcoreReset_Channel[pChan->u32ChanID] = BSP_TRUE;
        if (pChan->event_cb)
        {
            if (!g_IccStMode)
            {
                handle = BSP_UDI_ICC_ChnToHandle(pChan->u32ChanID);
                (BSP_VOID)pChan->event_cb((BSP_U32)handle, ICC_EVENT_RESET, 0);
            }
            else
            {
                (BSP_VOID)pChan->event_cb(pChan->u32ChanID, ICC_EVENT_RESET, 0);
            }
        }
        /*���ͨ���������Ϣ����*/
        if (BSP_NULL != pChan->ptxSubChanInfo)
        {
            if (BSP_NULL != (BSP_U8*)pChan->ptxSubChanInfo->u32PhyStart)
            {
                ICC_MEMSET((BSP_VOID*)HISI_VA_ADDRESS((BSP_U32)pChan->ptxSubChanInfo->u32PhyStart)
                    , 0, pChan->ptxSubChanInfo->u32FIFOsize);
            }
            /*��λͨ���Ķ�дָ�롢״̬*/
            pChan->ptxSubChanInfo->u32PhyWrite = pChan->ptxSubChanInfo->u32PhyStart;
            pChan->ptxSubChanInfo->u32PhyRead = pChan->ptxSubChanInfo->u32PhyStart;
            pChan->ptxSubChanInfo->u32WriteNeedSize = 0;

        }
        if (BSP_NULL != pChan->prxSubChanInfo)
        {
            if (BSP_NULL != (BSP_U8*)pChan->prxSubChanInfo->u32PhyStart)
            {
                ICC_MEMSET((BSP_VOID*)HISI_VA_ADDRESS((BSP_U32)pChan->prxSubChanInfo->u32PhyStart), 0, pChan->prxSubChanInfo->u32FIFOsize);
            }
            /*��λͨ���Ķ�дָ�롢״̬*/
            pChan->prxSubChanInfo->u32PhyWrite = pChan->prxSubChanInfo->u32PhyStart;
            pChan->prxSubChanInfo->u32PhyRead = pChan->prxSubChanInfo->u32PhyStart;
            pChan->prxSubChanInfo->u32WriteNeedSize = 0;
        }

        /*�л���һ��channel*/
        pChanNext = pChan->next;
    }
    return;
}
/*Modify_for_c_reset, l00212112,20130511, ends*/
BSP_S32 ICC_ShowChan(BSP_U32 u32ChanId)
{
    ICC_CHAN_DEV_S *pChan;

    ICC_ListGet(g_pstOpenList, u32ChanId, &pChan);
    if (pChan)
    {
        printk("================== CHANNEL %d ==================\n", u32ChanId);
        printk("MODE:\t\t%d\n", pChan->enMode);
        printk("Priority:\t%d\n", pChan->u32Priority);
        printk("SpinLock:\t%d\n", *pChan->pSpinLock);
        printk("Packet:\t\t0x%x, 0x%x\n", (unsigned int)pChan->packet.data, pChan->packet.size);
        printk("TX state:\t0x%x\n", pChan->ptxSubChanInfo->u32SubChanState);
        printk("TX signal:\t0x%x\n", pChan->ptxSubChanInfo->u32Signal);
        printk("TX need write data size:\t%d\n", pChan->ptxSubChanInfo->u32WriteNeedSize);
        printk("TX buffer:\tS=0x%x,E=0x%x,W=0x%x,R=0x%x\n",
               (unsigned int)(pChan->ptxSubChanInfo->u32PhyStart), (unsigned int)(pChan->ptxSubChanInfo->u32PhyEnd),
               (unsigned int)(pChan->ptxSubChanInfo->u32PhyWrite), (unsigned int)(pChan->ptxSubChanInfo->u32PhyRead));
        printk("TX times:\tWt=0x%x Bytes=0x%x EM=0x%x\n", pChan->sDebug.u32SendTimes, pChan->sDebug.u32SendBytes, pChan->sDebug.u32NoticeEnough);
        printk("RX state:\t0x%x\n", pChan->prxSubChanInfo->u32SubChanState);
        printk("RX signal:\t0x%x\n", pChan->prxSubChanInfo->u32Signal);
        printk("RX need write data size:\t%d\n", pChan->prxSubChanInfo->u32WriteNeedSize);
        printk("RX buffer:\tS=0x%x,E=0x%x,W=0x%x,R=0x%x\n",
               (unsigned int)(pChan->prxSubChanInfo->u32PhyStart), (unsigned int)(pChan->prxSubChanInfo->u32PhyEnd),
               (unsigned int)(pChan->prxSubChanInfo->u32PhyWrite), (unsigned int)(pChan->prxSubChanInfo->u32PhyRead));
        printk("RX times:\tInt=0x%x Read=0x%x Bytes=0x%x EM=0x%x\n", pChan->sDebug.u32RecvInt,
            pChan->sDebug.u32RecvTimes, pChan->sDebug.u32RecvBytes, pChan->sDebug.u32RecvEnough);
        printk("RX last:\tRecv=0x%x Read=0x%x\n", pChan->sDebug.u32LastHaveBytes, pChan->sDebug.u32LastReadBytes);
#if(FEATURE_ICC_DEBUG == FEATURE_ON)
        printk("IdleSize=0x%x \n", pChan->sDebug.u32IdleSize);
#endif
    }

    return 0;
}


BSP_S32 ICC_ShowChanAll(void)
{
    int i;
    ICC_CHAN_DEV_S *pChan;

    for (i=0; i<32; i++)
    {
        ICC_ListGet(g_pstOpenList, i, &pChan);

        if (pChan)
        {
            printk("================== CHANNEL %d ==================\n", i);
            printk("MODE:\t\t%d\n", pChan->enMode);
            printk("Priority:\t%d\n", pChan->u32Priority);
            printk("SpinLock:\t%d\n", *pChan->pSpinLock);
            printk("Packet:\t\t0x%x, 0x%x\n", (unsigned int)(pChan->packet.data), pChan->packet.size);
            printk("TX state:\t0x%x\n", pChan->ptxSubChanInfo->u32SubChanState);
            printk("TX signal:\t0x%x\n", pChan->ptxSubChanInfo->u32Signal);
            printk("TX need write data size:\t%d\n", pChan->ptxSubChanInfo->u32WriteNeedSize);
            printk("TX buffer:\tS=0x%x,E=0x%x,W=0x%x,R=0x%x\n",
                    (unsigned int)(pChan->ptxSubChanInfo->u32PhyStart), (unsigned int)(pChan->ptxSubChanInfo->u32PhyEnd),
                    (unsigned int)(pChan->ptxSubChanInfo->u32PhyWrite), (unsigned int)(pChan->ptxSubChanInfo->u32PhyRead));
            printk("TX times:\tWt=0x%x Bytes=0x%x EM=0x%x\n", pChan->sDebug.u32SendTimes, pChan->sDebug.u32SendBytes, pChan->sDebug.u32NoticeEnough);
            printk("RX state:\t0x%x\n", pChan->prxSubChanInfo->u32SubChanState);
            printk("RX signal:\t0x%x\n", pChan->prxSubChanInfo->u32Signal);
            printk("RX need write data size:\t%d\n", pChan->prxSubChanInfo->u32WriteNeedSize);
            printk("RX buffer:\tS=0x%x,E=0x%x,W=0x%x,R=0x%x\n",
                    (unsigned int)(pChan->prxSubChanInfo->u32PhyStart), (unsigned int)(pChan->prxSubChanInfo->u32PhyEnd),
                    (unsigned int)(pChan->prxSubChanInfo->u32PhyWrite), (unsigned int)(pChan->prxSubChanInfo->u32PhyRead));
            printk("RX times:\tInt=0x%x Read=0x%x Bytes=0x%x EM=0x%x\n", pChan->sDebug.u32RecvInt,
                pChan->sDebug.u32RecvTimes, pChan->sDebug.u32RecvBytes, pChan->sDebug.u32RecvEnough);
            printk("RX last:\tRecv=0x%x Read=0x%x\n", pChan->sDebug.u32LastHaveBytes, pChan->sDebug.u32LastReadBytes);
#if(FEATURE_ICC_DEBUG == FEATURE_ON)
            printk("IdleSize=0x%x \n", pChan->sDebug.u32IdleSize);
#endif
        }

    }

    return 0;
}

#ifdef __cplusplus
}
#endif


