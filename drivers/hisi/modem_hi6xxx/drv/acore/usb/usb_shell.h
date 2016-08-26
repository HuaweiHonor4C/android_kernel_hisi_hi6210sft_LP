/*******************************************************************************

                  ��Ȩ���� (C), 2001-2012, ��Ϊ�������޹�˾

 *******************************************************************************
  �� �� ��   : usb_shell.h
  �� �� ��   : ����
  ��    ��   : �ű� kf67996
  ��������   : 2012��9��13��
  ����޸�   :
  ��������   : USB ASHELL/CSHELLģ��ͷ�ļ���Ϣ
  �����б�   :
  �޸���ʷ   :
  1.��    ��   : 2012��9��13��
    ��    ��   : �ű� kf67996
    �޸�����   : �����ļ�

*******************************************************************************/

/*******************************************************************************
  1 ����ͷ�ļ�����
*******************************************************************************/

#ifndef    _BSP_USB_SHELL_H_
#define    _BSP_USB_SHELL_H_
#include <linux/tty.h>
#include <linux/console.h>
#include <linux/kernel.h>
#include <linux/slab.h>
#include <linux/delay.h>
#include <linux/kthread.h>
#include <linux/sched.h>
#include <linux/semaphore.h>
#include <linux/kallsyms.h>
#include <linux/syscalls.h>

#include "drv_usb_shell.h"

#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */


/**************************************************************************
  list ����
**************************************************************************/

/**************************************************************************
  ���ú궨��
**************************************************************************/
#define CSHELL_ICC_CHANNEL_FIFO_SIZE    8192
#define CSHELL_ICC_CHANNEL_ID           31
#define CSHELL_ICC_CHANNEL_INVALID_ID   0xFFFF
#define CSHELL_SEND_BUFFER_NUM          8
#define CSHELL_BUFFER_SIZE              (16*1024)
#define ASHELL_SEND_BUFFER_NUM          16
#define ASHELL_BUFFER_SIZE              2048

#ifdef _DRV_LLT_
#define SHELL_STATIC
#else
#define SHELL_STATIC                    static
#endif

/* it should be the same as MAX_ACM_INSTANCES in android.c */
#define USB_TTY_INSTANCES_NUM           7

#define SHELL_OK                        0
#define SHELL_ERROR                     (-1)

/*Modify_for_c_reset, l00212112,20130511, starts*/
#define CSHELL_VALID                   (1)
#define CSHELL_INVALID                 (0)
/*Modify_for_c_reset, l00212112,20130511, ends*/

/*move from drv_usb_if.h begin*/
#define USB_TTY_NAME0                 "ttyGS0"
#define USB_TTY_NAME1                 "ttyGS1"
#define USB_TTY_NAME2                 "ttyGS2"
#define USB_TTY_NAME3                 "ttyGS3"
#define USB_TTY_NAME4                 "ttyGS4"
#define USB_TTY_NAME5                 "ttyGS5"
#define USB_TTY_NAME6                 "ttyGS6"

#define USB_TTY_ASH_NAME              USB_TTY_NAME0
#define USB_TTY_AT_NAME               USB_TTY_NAME1
#define USB_TTY_CTRL_NAME             USB_TTY_NAME2
#define USB_TTY_OM_NAME               USB_TTY_NAME3
#define USB_TTY_CSH_NAME              USB_TTY_NAME4
#define USB_TTY_LTEOM_NAME            USB_TTY_NAME5
#define USB_TTY_GPS_NAME              USB_TTY_NAME6

/*move from drv_usb_if.h end*/

/**************************************************************************
  ���ܺ궨��
**************************************************************************/


/**************************************************************************
  ö�ٶ���
**************************************************************************/

/*move from drv_usb_if.h begin*/
enum usb_tty_type {
    USB_TTY_ASH_TYPE = 0,
    USB_TTY_AT_TYPE,
    USB_TTY_CTRL_TYPE,
    USB_TTY_OM_TYPE,
    USB_TTY_CSH_TYPE,
    USB_TTY_LTEOM_TYPE,
    USB_TTY_GPS_TYPE,
    USB_TTY_RESERVED_TYPE
};

enum usb_tty_index {
    USB_TTY_ASH_INDEX = 0,
    USB_TTY_AT_INDEX,
    USB_TTY_CTRL_INDEX,
    USB_TTY_OM_INDEX,
    USB_TTY_CSH_INDEX,
    USB_TTY_LTEOM_INDEX,
    USB_TTY_GPS_INDEX,
    USB_TTY_RESERVED_INDEX
};
/*move from drv_usb_if.h end*/

/**************************************************************************
  STRUCT����
**************************************************************************/
struct shell_mem_info {
    char          *pbuf;    /* BUFʵ��ַ */
    char          *vbuf;   /* BUF���ַ */
    unsigned int  used;
    int           free;
    int           idx;
    struct shell_mem_info *next;
};

struct ashell_ctx_t {
    struct tty_struct   *tty;              /* tty�ṹ�� */
    void                *acm_ctx;          /* acm�ṹ�� */
    struct console      port_console;      /* console�ṹ�� */
    spinlock_t          lock;              /* ������ */
    int                 enable;            /* USB�˿�ʹ�� */
    int                 port_open;         /* USB�˿ڴ� */
    int                 tx_idx;            /* ����BUF����ֵ */
    struct delayed_work tx_work;           /* ����work */
    struct shell_mem_info tx_mem[ASHELL_SEND_BUFFER_NUM];
};

struct cshell_mem_handle_t {
    unsigned char   *buf;
    unsigned long   buf_size;
    bool            buf_valid;
    unsigned long   index;
    struct cshell_mem_handle_t *next;
};

struct cshell_ctx_t{
    unsigned int        icc_chan_id;        /* ICCͨ��ID */
    unsigned int        icc_opened;         /* ICCͨ����FLAG */
    int                 icc_fd;             /* ICCͨ����� */
    int                 usb_fd;             /* ACM�豸��� */
    int                 icc_valid;          /* icc ��Ч��־ */
    int                 usb_valid;	        /* usb ��Ч��־ */
    spinlock_t          icc_lock;           /* icc������ */
    spinlock_t          usb_lock;           /* usb������ */
    char                *icc_rx_buf;        /* icc����buf */
    char                *usb_rx_buf;        /* usb����buf */
    struct work_struct  icc_tx_work;        /* icc����work */
    struct work_struct  usb_tx_work;        /* usb����work */
    int                 icc_tx_idx;         /* icc����buf���� */
    int                 usb_tx_idx;         /* usb����buf���� */
    struct shell_mem_info   icc_tx_mem[CSHELL_SEND_BUFFER_NUM];  /* icc����mem */
    struct shell_mem_info   usb_tx_mem[CSHELL_SEND_BUFFER_NUM];  /* usb����mem */
};
/*move from drv_usb_if.h begin*/
struct usb_tty_t {
    enum usb_tty_index  index;
    enum usb_tty_type   type;
    char                *name;
};
/*move from drv_usb_if.h end*/
/**************************************************************************
  ��������
**************************************************************************/
int  cshell_init(void);
void cshell_uninit(void);
int  cshell_icc_init(void);
void cshell_icc_uninit(void);
void cshell_udi_open_cb(void);
void cshell_udi_close_cb(void);
void cshell_shell_rx_cb(void);
unsigned int cshell_write_cb(unsigned int id);
unsigned int cshell_read_cb (unsigned int id, int size);
unsigned int cshell_event_cb(unsigned int id, unsigned int event, void *Param);

int  usb_tty_exist(char *name);
int  ashell_console_register(void);
struct tty_driver *ashell_console_device(struct console *cons, int *gidx);
int  ashell_console_setup(struct console *cons, char *options);
void ashell_console_write(struct console *cons, const char *buf, unsigned count);
int  ashell_start_io(void);
int  ashell_stop_io(void);
int  ashell_init(void);

/*Modify_for_c_reset, l00212112,20130511, starts*/
extern int bsp_ccpu_rest_cshell_handle(int status);
/*Modify_for_c_reset, l00212112,20130511, ends*/

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif    /* _BSP_USB_SHELL_H_ */


