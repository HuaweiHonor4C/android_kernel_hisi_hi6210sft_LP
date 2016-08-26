/******************************************************************************

                  ��Ȩ���� (C), 2001-2011, ��Ϊ�������޹�˾

 ******************************************************************************
  �� �� ��   : acm_ldisc.h
  �� �� ��   : ����
  ��    ��   : ���� 00195127
  ��������   : 2012��9��13��
  ����޸�   :
  ��������   : acm_ldisc.c ��ͷ�ļ�
  �����б�   :
  �޸���ʷ   :
  1.��    ��   : 2012��9��13��
    ��    ��   : ���� 00195127
    �޸�����   : �����ļ�

******************************************************************************/

/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/
#include <linux/interrupt.h>


#ifndef __ACM_LDISC_H__
#define __ACM_LDISC_H__

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif



/*****************************************************************************
  2 �궨��
*****************************************************************************/
#ifndef OK
#define OK 0
#endif

#ifndef ERROR
#define ERROR -1
#endif

#ifndef USB_NODATA
#define USB_NODATA -2
#endif

#ifndef NULL
#define NULL ((void)*)0
#endif

#define ACM_LD_ROOM 65536

#define ACM_LD_DBG(args,...) do {\
    printk("%d:%s:",__LINE__,__func__);\
    printk(args,##__VA_ARGS__);\
}while(0)

/*****************************************************************************
  3 ö�ٶ���
*****************************************************************************/


/*****************************************************************************
  4 ��Ϣͷ����
*****************************************************************************/


/*****************************************************************************
  5 ��Ϣ����
*****************************************************************************/


/*****************************************************************************
  6 STRUCT����
*****************************************************************************/
/* acm ��дmem�ṹ��*/
struct acm_mem_info{
    struct list_head list;        /*����ͷ*/
    void             *mem;        /*buff��ַ*/
    int              valid_size;  /*buff�ܳ���*/
    unsigned char *  current_pos; /*ָʾ��ǰ��Ҫ��д��ַ*/
    unsigned int     left_size;   /*��һ��δ����д���buff����*/
    struct semaphore sema;      /*�ź��������ڷ�ֹ����ʱ�ź�������*/
};

/* acm ldisc˽������*/
struct acm_ldisc_priv{
    struct tty_struct     *tty;          /* ldisc��Ӧtty�ڵ� */
    char                   tty_name[64];
    spinlock_t             write_lock;    /* ldiscд������ */
    spinlock_t             recv_lock;     /* ldisc�������ź��� */
    struct semaphore       recv_sema;     /* ldisc��task_let */
    struct tasklet_struct  write_tsk;     /* ldiscдtask_let*/
    struct list_head       recv_list;
    struct list_head       write_list;
    struct acm_mem_info    *last_read_left_mem;  /*��¼δ���������*/
    struct acm_mem_info    *last_write_left_mem; /*��¼δд�������*/
    unsigned int           write_size;           /*��¼д���ݵ��ܳ���*/
    unsigned int           write_success_size;   /*��¼д�ɹ������ݳ���*/
    unsigned int           read_size;            /*�����ݵ��ܳ���*/
    unsigned int           tty_recv_size;
    unsigned int           ps_recv_size;
    unsigned int           read_cb;
    unsigned int           get_read_buf;
    unsigned int           return_read_buf;
    unsigned int           get_read_buf_no_data;
    unsigned int           get_read_buf_invalid;
    unsigned int           acm_ldisc_read;
};


/*****************************************************************************
  7 UNION����
*****************************************************************************/


/*****************************************************************************
  8 OTHERS����
*****************************************************************************/


/*****************************************************************************
  9 ȫ�ֱ�������
*****************************************************************************/


/*****************************************************************************
  10 ��������
*****************************************************************************/
void acm_free_list(struct list_head *plist);
int acm_ldisc_open(struct tty_struct *tty);
void acm_ldisc_close(struct tty_struct *tty);
ssize_t acm_ldisc_read(struct tty_struct * tty, struct file * file,
                        unsigned char __user * buf, size_t nr);

ssize_t acm_ldisc_write(struct tty_struct *tty, struct file *file,
                       const unsigned char *buf, size_t nr);

void acm_write_task(unsigned long ldisc_priv);
void acm_ldisc_receive_buf(struct tty_struct *tty, const unsigned char *buf,
                                char *cflags, int count);

void acm_ldisc_write_wakeup(struct tty_struct *tty);
int  acm_ldisc_ioctl(struct tty_struct *tty, struct file *file,
                        unsigned int cmd, unsigned long arg);
long  acm_ldisc_compact_ioctl(struct tty_struct *tty, struct file *file,
                        unsigned int cmd, unsigned long arg);
int  acm_ldisc_get_rd_buf(struct tty_struct * tty, ACM_WR_ASYNC_INFO *mem_info);
int  acm_ldisc_return_buf(struct tty_struct * tty, ACM_WR_ASYNC_INFO *mem_info);
int acm_ldisc_hangup(struct tty_struct *tty);
int __init acm_ldisc_init(void);
void __exit acm_ldisc_exit(void);

#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif /* end of acm_ldisc.h */
