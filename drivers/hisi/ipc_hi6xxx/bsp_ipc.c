#include <linux/init.h>
#include <linux/module.h>
#include <asm/io.h>
#include <asm/string.h>
#include <linux/semaphore.h>
#include <linux/interrupt.h>
#include <linux/pm_qos.h>
#include <linux/spinlock.h>
#include <excDrv.h>

//#include "BSP.h"
#include "bsp_drv_ipc.h"

#ifdef __cplusplus
extern "C" {
#endif

BSP_IPC_ENTRY	stIpcIntTable[INTSRC_NUM];
static IPC_DEV_S	g_stIpcDev = {0};
unsigned int			g_CoreNum;

struct semaphore	g_semIpcTask[INTSRC_NUM];
IPC_DEBUG_E		g_stIpc_debug = {0};

/* base address of ipc registers */
void __iomem *ipc_base = NULL;

static spinlock_t s_ipc_int_lock = __SPIN_LOCK_UNLOCKED(old_style_spin_init);

/*acpu idle*/
struct pm_qos_request ipc_sem_pm_qos_req_list[INTSRC_NUM];
static spinlock_t ipc_sem_pm_qos_lock;
static int debug_on = 1;


static irqreturn_t BSP_DRV_IpcIntHandler(int irq, void *dev_id);
static irqreturn_t BSP_IPC_SemIntHandler(int irq, void *dev_id);

#define IPC_INT_DEBUG_NUM   (128)
#define IPC_DIFF_SLICE(s,e) (((e) >= (s))?((e) - (s)) : (0xFFFFFFFF - (s) + (e)))

typedef struct __ipc_int_record_s {
    unsigned int start_slice;   /*start slice*/
    unsigned int end_slice;     /*end slice*/
}IPC_INT_RECORD_S;

typedef struct __ipc_int_debug_s {
    unsigned int max_sp;    /*max slice point*/
    unsigned int max_sd;    /*max slice diff*/

    unsigned int index;     /*recent record index*/
    IPC_INT_RECORD_S info[IPC_INT_DEBUG_NUM];   /*recent record*/
}IPC_INT_DEBUG_S;

IPC_INT_DEBUG_S g_stIpcIntDbgInfo[INTSRC_NUM] = {{0}};
extern unsigned int omTimerGet(void);

void ipc_debug_int_info(unsigned long *poffset, unsigned int *psize)
{
    *poffset = (unsigned long)(&g_stIpcIntDbgInfo[0]);
    *psize = (unsigned int)(sizeof(g_stIpcIntDbgInfo));
}

static void ipc_debug_int_init(void)
{
    memset((void*)g_stIpcIntDbgInfo, 0x0, sizeof(g_stIpcIntDbgInfo));
}

/*
 * only called in interrupt, so not protected by spinlock
 */
static void ipc_debug_int_record(unsigned int int_no, unsigned int start_slice, unsigned int end_slice)
{
    unsigned long flag = 0;
    unsigned int dbg_index = 0;
	IPC_INT_DEBUG_S *ipc_int_debug;
	unsigned int diff_slice = 0;

    /*lint -e77*/
    ipc_int_debug = &g_stIpcIntDbgInfo[int_no];
    dbg_index = ipc_int_debug->index;
    ipc_int_debug->info[dbg_index].start_slice = start_slice;
    ipc_int_debug->info[dbg_index].end_slice = end_slice;
    ipc_int_debug->index++;
    ipc_int_debug->index = (IPC_INT_DEBUG_NUM == ipc_int_debug->index) ? 0 : ipc_int_debug->index;

    diff_slice = IPC_DIFF_SLICE(start_slice, end_slice);
    if (diff_slice > ipc_int_debug->max_sd) {
        ipc_int_debug->max_sd = diff_slice;
        ipc_int_debug->max_sp = start_slice;
    }
    /*lint +e77*/
}

/*****************************************************************************
* �� �� ��  : module_ipcInt_init
*
* ��������  : IPCģ���ʼ��
*
* �������  : ��
* �������  : ��
*
* �� �� ֵ  : ��
*
* �޸ļ�¼  : 2009��3��5��   wangjing  creat
*****************************************************************************/
static int __init module_ipcInt_init(void)
{
	int ret = 0;
	unsigned int i = 0;

	if (1 == g_stIpcDev.bInit)
	{
		return 0;
	}

	for (i = 0; i < INTSRC_NUM; i++)
	{
	    ipc_sem_pm_qos_req_list[i].pm_qos_class = 0;
	}
	spin_lock_init(&ipc_sem_pm_qos_lock);

	g_CoreNum = IPC_CORE_APPARM;

	memset((void*)stIpcIntTable, 0x0, (INTSRC_NUM * sizeof(BSP_IPC_ENTRY) ));/*lint665,modifyby z00212992,2012.4.20*/
	if(check_himntn(HIMNTN_MBX_ERRLOG_SAVE))
	{
		ipc_debug_int_init();
	}
    

	ipc_base = ioremap(BSP_IPC_BASE_ADDR, IPC_REG_SIZE);
	if (!ipc_base)
	{
		printk(KERN_ERR "ipc ioremap error.\n");
		return -1;
	}

    /*дȫ0�������л���Դ*/
	BSP_RegWr(BSP_IPC_CPU_INT_MASK(g_CoreNum), 0x0);
	BSP_RegWr(BSP_IPC_SEM_INT_MASK(g_CoreNum), 0x0);

    /*дȫ1��������ж�*/
    BSP_RegWr(BSP_IPC_CPU_INT_CLR_ACPU, UCOM_COMM_UINT32_MAX);

	/* 	�ҽ��ܵ��жϷ�����򣬰����жϻ������жϷ��������ź����ͷ��жϷ������*/
	ret = request_irq(INT_LEV_IPC_CPU, BSP_DRV_IpcIntHandler, 0, "ipc_irq", NULL);
	if (ret ) {
		printk(KERN_ERR "module_ipcInt_init: Unable to register ipc irq ret=%d.\n", ret);
		return -1;
	}

	ret = request_irq(INT_LEV_IPC_SEM, BSP_IPC_SemIntHandler, 0, "ipc_sem", NULL);
	if (ret ) {
		printk(KERN_ERR "module_ipcInt_init: Unable to register sem irq ret=%d.\n", ret);
		return -1;
	}

	g_stIpcDev.bInit = HI6XXX_IPC_TRUE;

	return 0;
}
arch_initcall(module_ipcInt_init);

/*****************************************************************************
* �� �� ��  : BSP_IPC_SemCreate
*
* ��������  : ��ʼ���ź���
*
* �������  :   BSP_U32 u32SignalNum Ҫ��ʼ�����ź������

* �������  : ��
*
* �� �� ֵ  : ��
*
* �޸ļ�¼  : 2011��4��11�� wangjing creat
*****************************************************************************/
int BSP_IPC_SemCreate(unsigned int u32SignalNum)
{
    IPC_CHECK_PARA(u32SignalNum);
	sema_init(&g_semIpcTask[u32SignalNum], SEM_EMPTY);

    return 0;
}

/*****************************************************************************
* �� �� ��  : BSP_IPC_IntEnable
*
* ��������  : ʹ��ĳ���ж�
*
* �������  :   IPC_INT_CORE_E enCoreNum Ҫʹ���жϵ�core
                BSP_U32 ulLvl Ҫʹ�ܵ��жϺţ�ȡֵ��Χ0��31
* �������  : ��
*
* �� �� ֵ  : OK&ERROR
*
* �޸ļ�¼  : 2011��4��11�� wangjing creat
*****************************************************************************/
int BSP_IPC_IntEnable (IPC_INT_LEV_E ulLvl)
{
	/*�������*/
	IPC_CHECK_PARA(ulLvl);

	/*д�ж����μĴ���*/
    BSP_RegWr(BSP_IPC_CPU_INT_MASK_DIS_ACPU, (1 << ulLvl));

	return 0;
}


/*****************************************************************************
 * �� �� ��  : BSP_INT_Disable
 *
 * ��������  : ȥʹ��ĳ���ж�
 *
 * �������  : IPC_INT_CORE_E enCoreNum Ҫʹ���жϵ�core
                BSP_U32 ulLvl Ҫʹ�ܵ��жϺţ�ȡֵ��Χ0��31
 * �������  : ��
 *
 * �� �� ֵ  : OK&ERROR
 *
 * �޸ļ�¼  : 2011��4��11�� wangjing creat
 *****************************************************************************/
int BSP_IPC_IntDisable (IPC_INT_LEV_E ulLvl)
{
	/*�������*/
	IPC_CHECK_PARA(ulLvl);

	/*д�ж����μĴ���*/
	BSP_RegWr(BSP_IPC_CPU_INT_MASK_EN_ACPU, (1 << ulLvl));

	return 0;
}

/*****************************************************************************
 * �� �� ��  : BSP_IPC_IntConnect
 *
 * ��������  : ע��ĳ���ж�
 *
 * �������  : IPC_INT_CORE_E enCoreNum Ҫʹ���жϵ�core
               BSP_U32 ulLvl Ҫʹ�ܵ��жϺţ�ȡֵ��Χ0��31
               VOIDFUNCPTR routine �жϷ������
 *             BSP_U32 parameter      �жϷ���������
 * �������  : ��
 *
 * �� �� ֵ  : OK&ERROR
 *
 * �޸ļ�¼  : 2011��4��11�� wangjing creat
 *****************************************************************************/
int BSP_IPC_IntConnect  (IPC_INT_LEV_E ulLvl, IPCVOIDFUNCPTR routine, unsigned int parameter)
{

	unsigned long flag = 0;/*lint530,modify by z00212992,2012.4.18*/

	/*�������*/
	IPC_CHECK_PARA(ulLvl);

	spin_lock_irqsave(&s_ipc_int_lock, flag);
	stIpcIntTable[ulLvl].routine = routine;
	stIpcIntTable[ulLvl].arg = parameter;
	spin_unlock_irqrestore(&s_ipc_int_lock, flag);

	return 0;
}

/*****************************************************************************
 * �� �� ��  : BSP_IPC_IntDisonnect
 *
 * ��������  : ȡ��ע��ĳ���ж�
 *
 * �������  :
 *              BSP_U32 ulLvl Ҫʹ�ܵ��жϺţ�ȡֵ��Χ0��31
 *              VOIDFUNCPTR routine �жϷ������
 *             BSP_U32 parameter      �жϷ���������
 * �������  : ��
 *
 * �� �� ֵ  : OK&ERROR
 *
 * �޸ļ�¼  : 2011��4��11�� wangjing creat
 *****************************************************************************/
 int BSP_IPC_IntDisonnect  (IPC_INT_LEV_E ulLvl,IPCVOIDFUNCPTR routine, unsigned int parameter)
 {
	unsigned long flag = 0;/*lint530,modify by z00212992,2012.4.18*/

	/*�������*/
	IPC_CHECK_PARA(ulLvl);

	spin_lock_irqsave(&s_ipc_int_lock, flag);
	stIpcIntTable[ulLvl].routine = NULL;
	stIpcIntTable[ulLvl].arg = 0;
	spin_unlock_irqrestore(&s_ipc_int_lock, flag);

    return 0;
 }
/**
 *	Warning: Ensure the inputs para isn't zero, if zero, deadcycle will ocurrs.
 */
int ffsLsb(int args)
{
    int num = 0;
    int s32ImpVal = args;

	for(;;)
	{
		num++;

		if (0x1 == (s32ImpVal & 0x1))
		{
			break;
		}
        s32ImpVal = (int)((unsigned int)s32ImpVal >> 1);
	}

	return num;
}

 /*****************************************************************************
 * �� �� ��  : BSP_DRV_IpcIntHandler
 *
 * ��������  : �жϴ�����
 *
 * �������  : ��
 * �������  : ��
 *
 * �� �� ֵ  : ��
 *
 * �޸ļ�¼  : 2011��4��11�� wangjing creat
 *****************************************************************************/
static irqreturn_t BSP_DRV_IpcIntHandler(int irq, void *dev_id)
{
    int retval = IRQ_HANDLED;
    unsigned int newLevel = 0;
    unsigned int u32IntStat = 0;
    unsigned int startSlice = 0;
    unsigned int endSlice = 0;

    u32IntStat = BSP_RegRd(BSP_IPC_CPU_INT_STAT(g_CoreNum));

    if(0 == u32IntStat)/*lint539,modify by z00212992,2012.4.18*/
    {
        return (irqreturn_t)IRQ_RETVAL(retval);/*lint64,modify by z00212992,2012.4.17*/
    }
    newLevel = ffsLsb (u32IntStat);
    --newLevel;		/* ffsLsb returns numbers from 1, not 0 */


    /*���ж�*/
    BSP_RegWr(BSP_IPC_CPU_INT_CLR(g_CoreNum), (1 << newLevel));
    g_stIpc_debug.u32IntHandleTimes[newLevel]++;

    /*����ע����жϴ�����*/
    if (NULL != stIpcIntTable[newLevel].routine)
    {
        startSlice = omTimerGet();
        stIpcIntTable[newLevel].routine(stIpcIntTable[newLevel].arg);
        if(check_himntn(HIMNTN_MBX_ERRLOG_SAVE))
        {
            endSlice = omTimerGet();
            ipc_debug_int_record(newLevel, startSlice, endSlice);
        }
    }

    return (irqreturn_t)IRQ_RETVAL(retval);/*lint64,modify by z00212992,2012.4.17*/
}

/*****************************************************************************
* �� �� ��  : BSP_IPC_IntSend
*
* ��������  : �����ж�
*
* �������  :
                IPC_INT_CORE_E enDstore Ҫ�����жϵ�core
                BSP_U32 ulLvl Ҫ���͵��жϺţ�ȡֵ��Χ0��31
* �������  : ��
*
* �� �� ֵ  : OK&ERROR
*
* �޸ļ�¼  : 2011��4��11�� wangjing creat
*****************************************************************************/
int BSP_IPC_IntSend(IPC_INT_CORE_E enDstCore, IPC_INT_LEV_E ulLvl)
{
	/*�������*/
	IPC_CHECK_PARA(ulLvl);

	/*дԭʼ�жϼĴ���,�����ж�*/
	BSP_RegWr(BSP_IPC_CPU_RAW_INT(enDstCore), (1 << ulLvl));
	g_stIpc_debug.u32RecvIntCore = enDstCore;
	g_stIpc_debug.u32IntSendTimes[ulLvl]++;

	return 0;
}

/*****************************************************************************
 * �� �� ��  : BSP_MaskInt
 *
 * ��������  : �����ź���������ж��ͷżĴ���
 *
 * �������  :
                BSP_U32 ulLvl Ҫ���͵��жϺţ�ȡֵ��Χ0��31
 * �������  : ��
 *
 * �� �� ֵ  : ��
 *
 * �޸ļ�¼  : 2011��4��11�� wangjing creat
 *****************************************************************************/

void BSP_MaskInt(unsigned int u32SignalNum)
{
	unsigned int u32IntMask = 0;
	/*lint82,modify by z00212992,2012.4.17*/
	if(u32SignalNum >= INTSRC_NUM)
	{
		printk("BSP_MaskInt  Parameter error, line:%d\n", __LINE__);
		return;
	}

	/*д�ж����μĴ���*/
	u32IntMask = BSP_RegRd(BSP_IPC_SEM_INT_MASK(g_CoreNum));
	u32IntMask = (unsigned int)(u32IntMask & (~(1 << u32SignalNum))); /*lint !e502*/
	BSP_RegWr(BSP_IPC_SEM_INT_MASK(g_CoreNum), u32IntMask);
}

void TEST_ACPUIDLE_IPC_DEBUG_ON(int on)
{
    debug_on = on;
}

/*0:create Sem, 1:take, 2:give*/
void TEST_ACPUIDLE_IPC_SEM_REQ(int take_or_give)
{
    /*TODO*/
    /*
    IPC_SEM_EMMC
    BSP_IPC_SemCreate
    BSP_IPC_SemTake
    BSP_IPC_SemGive
    */

    if(0==take_or_give)
    {
        BSP_IPC_SemCreate(IPC_SEM_EMMC);
    }
    else if(1==take_or_give)
    {
        BSP_IPC_SemTake(IPC_SEM_EMMC, 2000);
    }else{
        BSP_IPC_SemGive(IPC_SEM_EMMC);
    }
}




 /*****************************************************************************
 * �� �� ��  : BSP_IPC_SemTake
 *
 * ��������  : ��ȡ�ź���
 *
 * �������  : ��
 * �������  : ��
 *
 * �� �� ֵ  : ��
 *
 * �޸ļ�¼  : 2011��4��11�� wangjing creat
 *****************************************************************************/
 int BSP_IPC_SemTake(unsigned int u32SignalNum,int s32timeout)
 {
	unsigned int u32HsCtrl = 0;
	unsigned int u32IntMask = 0;

	/*�������*/
	IPC_CHECK_PARA(u32SignalNum);

	/*��������ź�����Ӧ���ͷ��ж�����*/
	BSP_RegWr(BSP_IPC_SEM_INT_CLR(g_CoreNum), (1 << u32SignalNum));
	while (1)
	{
		u32HsCtrl = BSP_RegRd(BSP_IPC_HS_CTRL(g_CoreNum, u32SignalNum));
		if (0 == u32HsCtrl)
		{
			/*�ź�����ռ�ɹ�,��������˵��ź����ͷ��ж�*/
			BSP_MaskInt(u32SignalNum);
			g_stIpc_debug.u32SemId = u32SignalNum;
			g_stIpc_debug.u32SemTakeTimes[u32SignalNum]++;/*lint !e661*/
			break;
		}
		else
		{
			/*ʹ���ź����ͷ��ж�*/
			u32IntMask = BSP_RegRd(BSP_IPC_SEM_INT_MASK(g_CoreNum));
			u32IntMask = (unsigned int)(u32IntMask | ((1 << u32SignalNum)));
			BSP_RegWr(BSP_IPC_SEM_INT_MASK(g_CoreNum), u32IntMask);
			//g_SemTakeTimes++;


			if (0 != down_timeout(&g_semIpcTask[u32SignalNum], msecs_to_jiffies(s32timeout * 10)))
			{
				/*ȥʹ���ź����ͷ��ж�*/
				BSP_MaskInt(u32SignalNum);
				printk(KERN_ERR "semTake timeout!\n");
				return (-1);
			}

		}
	}

	return 0;
 }

 /*****************************************************************************
 * �� �� ��  : BSP_IPC_SemGive
 *
 * ��������  : �ͷ��ź���
 *
 * �������  : ��
 * �������  : ��
 *
 * �� �� ֵ  : ��
 *
 * �޸ļ�¼  : 2011��4��11�� wangjing creat
 *****************************************************************************/
 void BSP_IPC_SemGive(unsigned int u32SignalNum)
 {
	/*lint82,modify by z00212992,2012.4.17*/
	if(u32SignalNum >= INTSRC_NUM)
	{
		printk("BSP_IPC_SemGive  Parameter error, line:%d\n", __LINE__);
		return;
	}
	/*lint82,modify by z00212992,2012.4.17*/
	/*���ź�������Ĵ�����0*/
	BSP_RegWr(BSP_IPC_HS_CTRL(g_CoreNum, u32SignalNum), 0);
	g_stIpc_debug.u32SemGiveTimes[u32SignalNum]++;
 }
/*Modify_for_c_reset, l00212112,20130511, starts*/
/*****************************************************************************
 * �� �� ��  : BSP_IPC_SemGive_Ccore_All
 *
 * ��������  : �ͷ�C�������ź���(��C�˵�����λ��Ŀ����)
 *
 * �������  : ��
 * �������  : ��
 *
 * �� �� ֵ  : ��
 *
 * �޸ļ�¼  : 2013��5��10�� wangjing creat
 *****************************************************************************/
 void BSP_IPC_SemGive_Ccore_All(void)
 {
    unsigned int     i = 0;

    for (i = 0;i < INTSRC_NUM;i++)
    {
    	/*���ź�������Ĵ�����0*/
    	BSP_RegWr(BSP_IPC_HS_CTRL(IPC_CORE_CCPU, i), 0);
    	g_stIpc_debug.u32SemGiveTimes[i]++;

    }
 }
/*Modify_for_c_reset, l00212112,20130511, ends*/
/*****************************************************************************
 * �� �� ��  : BSP_IPC_SemIntHandler
 *
 * ��������  : �ź����ͷ��жϴ�����
 *
 * �������  : ��
 * �������  : ��
 *
 * �� �� ֵ  : ��
 *
 * �޸ļ�¼  : 2011��4��11�� wangjing creat
 *****************************************************************************/
static irqreturn_t BSP_IPC_SemIntHandler(int irq, void *dev_id)
{
    int retval = IRQ_HANDLED;
    unsigned int u32SNum = 0;
    unsigned int u32IntStat = 0;

    u32IntStat = BSP_RegRd(BSP_IPC_SEM_INT_STAT(g_CoreNum));

    /*if the int status is equal to 0,return directly*/
    if(0 == u32IntStat)
    {
        return IRQ_NONE;
    }
    /*������ź����ͷ��жϣ�������ж�*/
    u32SNum = ffsLsb (u32IntStat);
    BSP_RegWr(BSP_IPC_SEM_INT_CLR(g_CoreNum), (1 << --u32SNum));

    up(&g_semIpcTask[u32SNum]);

    return (irqreturn_t)IRQ_RETVAL(retval);/*lint64,modify by z00212992,2012.4.17*/
}

/*****************************************************************************
* �� �� ��  : BSP_IPC_SpinLock
*
* ��������  : ��ѯ�ȴ���ȡ�ź���
*
* �������  : ��
* �������  : ��
*
* �� �� ֵ  : ��
*
* �޸ļ�¼  : 2011��4��11�� wangjing creat
*****************************************************************************/
void BSP_IPC_SpinLock (unsigned int u32SignalNum)
{
	unsigned int u32HsCtrl;

	/*lint82,modify by z00212992,2012.4.17*/
	if(u32SignalNum >= INTSRC_NUM)
	{
		printk("BSP_IPC_SpinLock  Parameter error, line:%d\n", __LINE__);
		return;
	}
	/*lint82,modify by z00212992,2012.4.17*/
	for(;;)
	{
		u32HsCtrl = BSP_RegRd(BSP_IPC_HS_CTRL(g_CoreNum, u32SignalNum));
		if (0 == u32HsCtrl)
		{
			break;
		}
	}
}

/*****************************************************************************
* �� �� ��  : BSP_IPC_SpinUnLock
*
* ��������  : �ͷ��ź���
*
* �������  : ��
* �������  : ��
*
* �� �� ֵ  : ��
*
* �޸ļ�¼  : 2011��4��11�� wangjing creat
*****************************************************************************/
void BSP_IPC_SpinUnLock (unsigned int u32SignalNum)
{
	/*lint82,modify by z00212992,2012.4.17*/
	if(u32SignalNum >= INTSRC_NUM)
	{
		printk("BSP_IPC_SpinUnLock  Parameter error, line:%d\n", __LINE__);
		return;
	}
	/*lint82,modify by z00212992,2012.4.17*/
	/*���ź�������Ĵ�����0*/
	BSP_RegWr(BSP_IPC_HS_CTRL(g_CoreNum, u32SignalNum), 0);
}



/*****************************************************************************
* �� �� ��  : BSP_IPC_DebugShow
*
* ��������  : ��ά�ɲ�ӿ�
*
* �������  : ��
* �������  : ��
*
* �� �� ֵ  : ��
*
* �޸ļ�¼  : 2011��4��11�� wangjing creat
*****************************************************************************/
void BSP_IPC_DebugShow(void)
{
	unsigned int i;

	printk("\n��ǰռ�õ��ź���IDΪ       : \t%d\n", g_stIpc_debug.u32SemId);
	for (i = 0; i < INTSRC_NUM; i++)
	{
		printk("�ź���%d��ȡ����             : \t%d\n", i, g_stIpc_debug.u32SemTakeTimes[i]);
		printk("�ź���%d�ͷŴ���             : \t%d\n", i, g_stIpc_debug.u32SemGiveTimes[i]);
		printk("�����жϵĴ���Ϊ             : \t%d\n", g_stIpc_debug.u32IntSendTimes[i]);
		printk("�����жϴ���Ĵ���Ϊ         : \t%d\n", g_stIpc_debug.u32IntHandleTimes[i]);
	}

	printk("�����жϵ�Core IDΪ          : \t%d\n", g_stIpc_debug.u32RecvIntCore);
}

EXPORT_SYMBOL(BSP_IPC_IntEnable);
EXPORT_SYMBOL(BSP_IPC_IntDisable);
EXPORT_SYMBOL(BSP_IPC_IntConnect);
EXPORT_SYMBOL(BSP_IPC_IntSend);
EXPORT_SYMBOL(BSP_IPC_SemCreate);
EXPORT_SYMBOL(BSP_IPC_SemTake);
EXPORT_SYMBOL(BSP_IPC_SemGive);
EXPORT_SYMBOL(BSP_IPC_SpinLock);
EXPORT_SYMBOL(BSP_IPC_SpinUnLock);

#ifdef __cplusplus
}
#endif

