/*************************************************************************
*   ��Ȩ����(C) 1987-2011, ���ڻ�Ϊ�������޹�˾.
*
*   �� �� �� :  hisi_dmesg.h
*
*   ��    �� :
*
*   ��    �� :  ��ӡ�������ͷ�ļ�
*
*   �޸ļ�¼ :
*************************************************************************/


/*****************************************************************************
  1 ͷ�ļ�����
*****************************************************************************/
#include <linux/miscdevice.h>
#include <linux/wait.h>
#include <linux/spinlock.h>

/*****************************************************************************
  2 �궨��
*****************************************************************************/
#define DUMP_PRINT_MAGIC        (0x32324554)

/*****************************************************************************
  2 ö�ٶ���
*****************************************************************************/


/*****************************************************************************
  2 �ṹ��
*****************************************************************************/
typedef struct
{
    u32     magic;          /* magic number for print section */
    u32     log_read;       /* read pointer, update by acore */
    u32     log_write;      /* write pointer, update by dmesg_write */
    u32     logged_chars;   /* number of chars in log buffer */
    u32     log_buf_len;    /* buffer length */
    u32     w_mark;         /* water mark, if logged chars exceed w_mark, ccore send IPC to acore */
    u32     full_flag;      /* set this flag when ccore send IPC, acore clear this flag after data consumption */
    u32     reserved;       /* reserved for 32-byte align */
    u32     log_buf_l32;    /* data area low 32bit*/
    u32     log_buf_h32;    /* data area high 32bit: not used*/
}log_mem_stru;

typedef struct
{
    struct miscdevice	misc;       /* misc device */
    wait_queue_head_t	wq;         /* wait queue */
    u32                 in_use;     /* whether device is in use */
    u32                 sleep_flag; /* whether app is sleep */
    spinlock_t          lock;
    struct list_head	logs;
    log_mem_stru      * log_mem;
}logger_info_stru;

/* log����������ֵ��buffer���пռ�С��200�ַ�����Ϊbuffer���� */
#define LOG_BUFFER_FULL_THRESHOLD   200
/* log task���ȼ����2s */
#define LOG_TASK_SCHED_TIME         200
/*��log overlapʱ���������ֽ���*/
#define LOG_DROPPED_SIZE  1024
/* log buffer���������ʾ */
#define LOG_OVERLAP_MESSAGE         "LOG OVERLAP, DATA DROPPED!\n"
/* log buffer���������ʾ */
#define LOG_DROPPED_MESSAGE         "log buffer full, data dropped\n"
/* ccore log�豸�� */
#define CCORE_LOG_DEV_NAME          "log_ccore"
/* mcore log�豸�� */
#define MCORE_LOG_DEV_NAME          "log_mcore"

#ifndef BSP_TRUE
#define BSP_TRUE            (1)
#endif

#ifndef BSP_FALSE
#define BSP_FALSE           (0)
#endif

void log_buff_info(void);

/*****************************************************************************
  5 �����붨��
*****************************************************************************/


