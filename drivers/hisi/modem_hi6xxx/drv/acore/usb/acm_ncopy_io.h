

/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/
#include <linux/tty.h>
#include <linux/interrupt.h>
#include <linux/spinlock.h>

#ifndef __ACM_NCOPY_IO_H__
#define __ACM_NCOPY_IO_H__

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif



/*****************************************************************************
  2 �궨��
*****************************************************************************/
#define ACM_NCOPY_TX_ALLOCATED   64     /* USB requests number */
#define ACM_NCOPY_TX_MAX_SIZE    65535  /* max size of tx buf */

#define NCPY_OK                  0
#define NCPY_ERROR               (-1)

#ifdef _DRV_LLT_
#define STATIC
#else
#define STATIC                   static
#endif

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
struct acm_ncopy_ctx {
    void                   *acm;        /* ACM context to this handle */
    struct tty_struct      *tty;        /* tty context to this handle */
    void                   *port;       /* port context to this handle */
    spinlock_t             tx_lock;     /* spinlock to protect the context */
    struct list_head       tx_list;     /* list for requests sending */
    struct list_head       free_list;   /* list for requests free */
    struct tasklet_struct  tx_task;     /* task for transferring */
    int                    allocated;   /* requests number allocated */
    int                    available;   /* This handle is available */
    unsigned int           tx_got;      /* packets number got from app */
    unsigned int           tx_discard;  /* packets number discarded by drv */
    unsigned int           tx_queued;   /* packets number queued in the list */
    unsigned int           tx_sending;  /* packets number in fifo */
    unsigned int           tx_sent;     /* packets number sent to PC */
    unsigned int           tx_fail;     /* packets sent but fail */
    unsigned int           tx_cb;       /* tx_cb called */
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
int acm_ncopy_init(void *acm_dev);
int acm_ncopy_uninit(void *acm_dev);
int acm_ncopy_start_tx(void *acm_dev, char *pVirAddr, char *pPhyAddr, unsigned int size);
void *acm_ncopy_port_ready(void *tty);

int v2p_mmu_get_ttbr0(void);
int v2p_mmu_get_ttbr1(void);
int v2p_mmu_get_ttbcr(void);
int v2p_get_pa(int va, int *pa);


#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif /* end of acm_ncopy_io.h */
