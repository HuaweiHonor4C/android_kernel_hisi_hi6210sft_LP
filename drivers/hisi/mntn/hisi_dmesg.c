/*************************************************************************
*   ��Ȩ����(C) 1987-2011, ���ڻ�Ϊ�������޹�˾.
*
*   �� �� �� :  hisi_dmesg.c
*
*   ��    �� :
*
*   ��    �� :  A�˴�ӡ���������
*
*   �޸ļ�¼ :
*************************************************************************/

/*****************************************************************************
  1 ͷ�ļ�����
*****************************************************************************/
/*lint -save -e322 -e7 -e537*/
#include <linux/kernel.h>
#include <linux/string.h>
#include <linux/slab.h>
#include <linux/semaphore.h>
#include <linux/fs.h>
#include <linux/module.h>
#include <linux/sched.h>
#include <linux/uaccess.h>
#include <linux/kthread.h>
#include "../ipc_hi6xxx/bsp_drv_ipc.h"
#include "MemoryLayout.h"
#include "hisi_dmesg.h"
#include <linux/wakelock.h>
/*lint -restore*/

extern unsigned int himntn_gobal_resetlog;

static struct semaphore g_st_log_sem;
static void* g_ccore_logbuf_addr = 0;
static LIST_HEAD(kernel_log_list);
static struct wake_lock g_wake_lock;


typedef  void   (*VOIDFUNCPTR)(u32);


static void set_wakelock(int iflag)
{
	if ((1 == iflag) && (0 == wake_lock_active(&g_wake_lock)))
		wake_lock(&g_wake_lock);
	else if ((0 == iflag) && (0 != wake_lock_active(&g_wake_lock)))
		wake_unlock(&g_wake_lock);
}

void log_buff_info(void)
{
    log_mem_stru * log = NULL;
    //log_mem_stru * m3_log = NULL;

    log    = (log_mem_stru *)g_ccore_logbuf_addr;

    printk(KERN_ERR"CCORE DMESG ADDR: 0x%p\n", (void*)log);
    printk(KERN_ERR"BUFFER MAGIC    : 0x%x\n", log->magic);
    printk(KERN_ERR"READ POINTER    : 0x%x\n", log->log_read);
    printk(KERN_ERR"WRITE POINTER   : 0x%x\n", log->log_write);
    printk(KERN_ERR"BUFFER LENGTH   : 0x%x\n", log->log_buf_len);
    printk(KERN_ERR"FULL FLAG       : 0x%x\n", log->full_flag);
    printk(KERN_ERR"LOG BUF         : 0x%p\n", (void*)((unsigned long)(log->log_buf_l32)));

#if 0
    printk("M3 LOG ADDR     : 0x%x\n", (u32)m3_log);
    printk("BUFFER MAGIC    : 0x%x\n", m3_log->magic);
    printk("READ POINTER    : 0x%x\n", m3_log->log_read);
    printk("WRITE POINTER   : 0x%x\n", m3_log->log_write);
    printk("BUFFER LENGTH   : 0x%x\n", m3_log->log_buf_len);
    printk("FULL FLAG       : 0x%x\n", m3_log->full_flag);
#endif
}

/*****************************************************************************
* �� �� ��  : log_buff_init
*
* ��������  : ��ʼ��log�豸buffer, �˼�ͬ��, C�ˡ�M�˳�ʼ����������log_init
*
* �������  : logger_info_stru * log_info
*
* �������  : ��
*
* �� �� ֵ  : 0 --- �ɹ�����0 --- ʧ��
*****************************************************************************/
static int log_buff_init(logger_info_stru * log_info)
{
    if (!strncmp(log_info->misc.name,  CCORE_LOG_DEV_NAME, sizeof(CCORE_LOG_DEV_NAME)))
    {
        if(NULL == (void*)g_ccore_logbuf_addr)
        {
            printk(KERN_ERR "device <%s>: g_ccore_logbuf_addr is NULL! \n", log_info->misc.name);
            return -1;
        }

        log_info->log_mem = (log_mem_stru *)g_ccore_logbuf_addr;
    } else {
        printk(KERN_ERR "device <%s>: is not support! \n", log_info->misc.name);
        return -1;
    }

    return 0;
}

/*****************************************************************************
* �� �� ��  : log_task_func
*
* ��������  : log task����ʱ�����������ݽ���˯�ߵ�Ӧ��
*
* �������  : ��
*
* �������  : ��
*
* �� �� ֵ  :
*****************************************************************************/
static int log_task_func(void * data)
{
    logger_info_stru * log_info;
    unsigned long lock_flag;
    u32 sleep_flag;

    while(1)
    {
        if(0 != down_timeout(&g_st_log_sem, LOG_TASK_SCHED_TIME))
        {
            /* do nothing */
        }

        list_for_each_entry(log_info, &kernel_log_list, logs)
        {
            /* ����豸log bufferû�г�ʼ����������ʼ�� */
            if(log_info->log_mem == NULL)
            {
                if(0 != log_buff_init(log_info))
                {
                    continue;
                }
            }

            if(log_info->in_use == BSP_FALSE)
            {
                continue;
            }
            spin_lock_irqsave(&log_info->lock, lock_flag);
            sleep_flag = log_info->sleep_flag;
            spin_unlock_irqrestore(&log_info->lock, lock_flag);

            /* �����ݻ���Ӧ�����ڶ�ȡ���ݣ���ѯ��һ���豸 */
            if((sleep_flag == BSP_FALSE) || (log_info->log_mem->log_read == log_info->log_mem->log_write))
            {
                continue;
            }

            spin_lock_irqsave(&log_info->lock, lock_flag);
            log_info->sleep_flag = BSP_FALSE;
            spin_unlock_irqrestore(&log_info->lock, lock_flag);
            /* ����Ӧ�� */
            wake_up_interruptible(&log_info->wq);
        }
    }

    return 0;
}

/*****************************************************************************
* �� �� ��  : get_log_from_minor
*
* ��������  : ��ȡlog�豸ָ��
*
* �������  :  int minor�����豸��
*
* �������  : ��
*
* �� �� ֵ  : logger_info_stru *
*****************************************************************************/
static logger_info_stru * get_log_from_minor(int minor)
{
    logger_info_stru * log;

    list_for_each_entry(log, &kernel_log_list, logs)
    {
        if (log->misc.minor == minor)
        {
            return log;
        }
    }

    return NULL;
}

/*****************************************************************************
* �� �� ��  : do_read_data_to_user
*
* ��������  : �����������û�̬
*
* �������  : char * src, ����Դbuffer
*             char * dst������Ŀ��buffer
*             u32 len, ������ȡ�����ݳ���
*
* �������  : ��
*
* �� �� ֵ  : ʵ�ʶ�ȡ�����ݳ���
*****************************************************************************/
static int do_read_data_to_user(char * src, char * dst, u32 len)
{
    u32 ret;

    /* ����δ�ܿ��������ݳ��� */
    ret = (u32)copy_to_user(dst, src, len);

    return (int)(len - ret);
}

/*****************************************************************************
* �� �� ��  : is_log_buffer_full
*
* ��������  : �������Ƿ���
*
* �������  : u32 read_p,  ��ָ��
*             u32 write_p��дָ��
*             u32 buf_len, buffer����
*
* �������  : ��
*
* �� �� ֵ  : BSP_TRUE:����BSP_FALSE:δ��
*****************************************************************************/
static int is_log_buffer_full(u32 read_p, u32 write_p, u32 buf_len)
{
    u32 left_len;

    if(read_p > write_p)
    {
        left_len = read_p - write_p;
    }
    else
    {
        left_len = buf_len - write_p + read_p;
    }

    if(left_len < LOG_BUFFER_FULL_THRESHOLD)
    {
        printk(KERN_ERR "%s: buffer full read 0x%x, write 0x%x, len 0x%x\n", __FUNCTION__, read_p, write_p, buf_len);
        return BSP_TRUE;
    }

    return BSP_FALSE;
}

/*****************************************************************************
* �� �� ��  : log_read
*
* ��������  : ��log�豸��ȡ����
*
* �������  : struct file *file, �豸�ļ�fileָ��
*             buf��Ŀ��buffer
*             count, Ŀ��buffer��С
*
*
* �������  : ��
*
* �� �� ֵ  : 0���򿪳ɹ��� ��0����ʧ��
*****************************************************************************/
static ssize_t log_read(struct file *file, char __user *buf, size_t count, loff_t *pos)
{
    logger_info_stru * log_info;
    u32 read_p;
    u32 write_p;
    u32 len;
    u32 msg_len;
    ssize_t ret;
    unsigned long lock_flag;
    char * log_buff;
    DEFINE_WAIT(wait);

    log_info = file->private_data;
    if(NULL == log_info)
    {
        printk(KERN_ERR "%s: get log_info fail\n", __FUNCTION__);
        return -EPERM;
    }

    /* bufferδ��ʼ��������˯�� */
    if(log_info->log_mem == NULL)
    {
        prepare_to_wait(&log_info->wq, &wait, TASK_INTERRUPTIBLE);
        spin_lock_irqsave(&log_info->lock, lock_flag);
        log_info->sleep_flag = BSP_TRUE;
        spin_unlock_irqrestore(&log_info->lock, lock_flag);
        schedule();
    }

    read_p  = log_info->log_mem->log_read;
    /*Ensure CCore has initialized*/
    if (DUMP_PRINT_MAGIC != log_info->log_mem->magic 
        || read_p >= MEMORY_RAM_CORESHARE_CCORE_LOGBUF_SIZE
        || log_info->log_mem->log_write >= MEMORY_RAM_CORESHARE_CCORE_LOGBUF_SIZE)
    {
        return -EPERM;
    }
    
    while(1)
    {
        prepare_to_wait(&log_info->wq, &wait, TASK_INTERRUPTIBLE);

        write_p = log_info->log_mem->log_write;
        /* buffer�������Ķ�ָ�룬��buffer�ÿ� */
        if(is_log_buffer_full(read_p, write_p, log_info->log_mem->log_buf_len))
        {
            /* ���¶�ָ�� */
            log_info->log_mem->log_read += LOG_DROPPED_SIZE;
            /* �����ʾ��Ϣ */
            msg_len = (u32)strlen(LOG_OVERLAP_MESSAGE);
            len = (count > msg_len) ? msg_len : count;
            ret = do_read_data_to_user(LOG_OVERLAP_MESSAGE, buf, len);
            break;
        }

        ret = (read_p == write_p);
        if (!ret){
            break;
        }

        /* ��дָ����ȣ������ݣ����Ϊ��������ʽ�򿪣��ٴγ��� */
        if (file->f_flags & O_NONBLOCK) {
            ret = -EAGAIN;
            break;
        }

        /* ������ź���Ҫ����ֱ�ӷ��� */
        if (signal_pending(current)) {
            ret = -EINTR;
            break;
        }

        /* �����ݣ�˯�� */
        spin_lock_irqsave(&log_info->lock, lock_flag);
        log_info->sleep_flag = BSP_TRUE;
        spin_unlock_irqrestore(&log_info->lock, lock_flag);
        schedule();
    }
    finish_wait(&log_info->wq, &wait);

    if (ret){
        set_wakelock(0);
        return (ssize_t)ret;
    }

    if(read_p <= write_p)
    {
        len = write_p - read_p;
    }
    else
    {
        len = log_info->log_mem->log_buf_len - read_p;
    }

    log_buff = (char *)ALIGN((unsigned long)(log_info->log_mem) + sizeof(log_mem_stru), 8);
    log_buff =log_buff+read_p;
    len = (len > count) ? count : len;

#ifdef CONFIG_ARM64
    if (IS_ALIGNED((u64)log_buff, 8) && len>=8) {
        //do nothing
    } else if (IS_ALIGNED((u64)log_buff, 4) && len>=4) {
        len = 4;
    } else if (IS_ALIGNED((u64)log_buff, 2) && len>=2) {
        len = 2;
    } else{
        len = 1;
    }
#endif

	set_wakelock(1);

    /* �������� */
    ret = do_read_data_to_user(log_buff , buf, len);

    /* ���¶�ָ�� */
    log_info->log_mem->log_read = (read_p + ret)%(log_info->log_mem->log_buf_len);
    if(log_info->log_mem->full_flag)
    {
        printk(KERN_ERR "%s: device clear full_flag\n", __FUNCTION__);
        log_info->log_mem->full_flag = 0;
    }
    set_wakelock(0);
    return (ssize_t)ret;
}

/*****************************************************************************
* �� �� ��  : log_open
*
* ��������  : ��log�豸
*
* �������  : struct inode *inode, �豸�ļ�inode�ڵ�
*             struct file *file
*
* �������  : ��
*
* �� �� ֵ  : 0���򿪳ɹ��� ��0����ʧ��
*****************************************************************************/
static int log_open(struct inode *inode, struct file *file)
{
    logger_info_stru * log_info;

    log_info = get_log_from_minor(MINOR(inode->i_rdev));
    if(NULL == log_info)
    {
        printk(KERN_ERR "%s: get device fail\n", __FUNCTION__);
        return -1;
    }

    if(log_info->in_use == BSP_TRUE)
    {
        printk(KERN_ERR "%s: device %s is in use\n", __FUNCTION__, log_info->misc.name);
        return -1;
    }
    log_info->in_use = BSP_TRUE;

    file->private_data = log_info;

    return 0;
}

/*****************************************************************************
* �� �� ��  : log_release
*
* ��������  : �ر�log�豸
*
* �������  : struct inode *inode, �豸�ļ�inode�ڵ�
*             struct file *file
*
* �������  : ��
*
* �� �� ֵ  : 0���ɹ�
*****************************************************************************/
static int log_release(struct inode *ignored, struct file *file)
{
    logger_info_stru * log_info;

    log_info = file->private_data;
    if(NULL == log_info)
    {
        printk(KERN_ERR "%s: release device fail\n", __FUNCTION__);
        return -1;
    }

    log_info->in_use = BSP_FALSE;

    return 0;
}

static const struct file_operations logger_fops = {
	.owner   = THIS_MODULE,
	.read    = log_read,
	.open    = log_open,
	.release = log_release,
};

/*****************************************************************************
* �� �� ��  : log_int_handle
*
* ��������  : IPC�жϴ�����������log task
*
* �������  : u32 data
*
* �������  : ��
*
* �� �� ֵ  : ��
*****************************************************************************/
static void log_int_handle(u32 data)
{
    logger_info_stru * log;

    list_for_each_entry(log, &kernel_log_list, logs)
    {
        printk(KERN_ERR "%s: ipc for [%s]\n", __FUNCTION__, log->misc.name);
        set_wakelock(1);
        if (log->in_use == BSP_TRUE)
        {
            up(&g_st_log_sem);
        }
    }
}

/*****************************************************************************
* �� �� ��  : log_device_init
*
* ��������  : ��ʼ������������log�豸�ڵ�
*
* �������  : char * dev_name, �豸��, log_mem_stru * log_info, log������
*
* �������  : ��
*
* �� �� ֵ  : 0���ɹ�, ��0��ʧ��
*****************************************************************************/
static int __init log_device_init(char * dev_name)
{
    int ret = 0;
    logger_info_stru * log;

    log = kzalloc(sizeof(logger_info_stru), GFP_KERNEL);
    if (log == NULL)
    {
        printk(KERN_ERR "%s: malloc fail\n", __FUNCTION__);
        return -1;
    }

    log->misc.minor = MISC_DYNAMIC_MINOR;
    log->misc.name = kstrdup(dev_name, GFP_KERNEL);
    if (log->misc.name == NULL)
    {
        printk(KERN_ERR "%s: malloc for dev name[%s] fail\n", __FUNCTION__, dev_name);
        kfree(log);
        return -1;
    }

    log->in_use = BSP_FALSE;
    log->sleep_flag = BSP_FALSE;
    log->misc.fops = &logger_fops;
    log->misc.parent = NULL;
    log->log_mem = NULL;

    init_waitqueue_head(&log->wq);
    spin_lock_init(&log->lock);

    INIT_LIST_HEAD(&log->logs);
    list_add_tail(&log->logs, &kernel_log_list);

    ret = misc_register(&log->misc);
    if (unlikely(ret)) {
        printk(KERN_ERR "%s: failed to register misc device for log '%s'!\n", __FUNCTION__, log->misc.name);
        kfree(log->misc.name);
        kfree(log);
        return -1;
    }

    return 0;
}

/*****************************************************************************
* �� �� ��  : log_init
*
* ��������  : ��ʼ�����������������Դ
*
* �������  : ��
*
* �������  : ��
*
* �� �� ֵ  : 0���ɹ�, ��0��ʧ��
*****************************************************************************/
static int __init log_init(void)
{
    int ret = 0;
    struct task_struct  *tsk;

    if (!himntn_gobal_resetlog)
    {
        return 0;
    }

    printk(KERN_ERR "log_init: MEMORY_RAM_CORESHARE_CCORE_LOGBUF_ADDR [0x%x] \n", MEMORY_RAM_CORESHARE_CCORE_LOGBUF_ADDR);

    g_ccore_logbuf_addr = (void*)ioremap_nocache(MEMORY_RAM_CORESHARE_CCORE_LOGBUF_ADDR,
                                                        MEMORY_RAM_CORESHARE_CCORE_LOGBUF_SIZE);
    if(NULL == (void*)g_ccore_logbuf_addr)
    {
        printk(KERN_ERR "device <%s>: MEMORY_RAM_CORESHARE_CCORE_LOGBUF_ADDR ioremap failed \n", __FUNCTION__);
        return -1;
    }
    g_ccore_logbuf_addr = (void *)ALIGN((unsigned long)g_ccore_logbuf_addr, 8);
    printk(KERN_ERR "log_init: g_ccore_logbuf_addr [0x%p] \n", g_ccore_logbuf_addr);

    /* ccore device */
    ret = log_device_init(CCORE_LOG_DEV_NAME);
    if(0 != ret)
    {
        printk(KERN_ERR "%s: log_ccore device init fail\n", __FUNCTION__);
        iounmap((void*)g_ccore_logbuf_addr);
        return -1;
    }

#if 0
    /* mcore device */
    ret = log_device_init(MCORE_LOG_DEV_NAME);
    if(0 != ret)
    {
        printk("%s: log_mcore device init fail\n", __FUNCTION__);
        return -1;
    }
#endif

    sema_init(&g_st_log_sem, 0);
    wake_lock_init(&g_wake_lock, WAKE_LOCK_SUSPEND, "hisi_dmesg");

    ret = BSP_IPC_IntConnect(IPC_ACPU_INT_SRC_CCPU_LOG, (VOIDFUNCPTR)log_int_handle, 0);
    if(0 != ret)
    {
        printk(KERN_ERR "%s: ipc connect failed! ret = %d\n", __FUNCTION__, ret);
        return -1;
    }

    ret = BSP_IPC_IntEnable(IPC_ACPU_INT_SRC_CCPU_LOG);
    if(0 != ret)
    {
        printk(KERN_ERR "%s: ipc enable failed! ret = %d\n", __FUNCTION__, ret);
        return -1;
    }

    tsk = kthread_run(log_task_func, 0, "log_task");
    if (IS_ERR(tsk))
    {
        printk(KERN_ERR "%s: create log_task failed!\n", __FUNCTION__);
        return -1;
    }

    log_buff_info();

    printk(KERN_ERR "%s  ok\n", __FUNCTION__);

    return 0;
}

module_init(log_init);

