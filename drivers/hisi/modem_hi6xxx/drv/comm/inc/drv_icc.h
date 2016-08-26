/******************************************************************************

                  ��Ȩ���� (C), 2001-2011, ��Ϊ�������޹�˾

 ******************************************************************************
  �� �� ��   : drv_icc.h
  �� �� ��   : ����
  ��    ��   : ���׳� d00209607
  ��������   : 2013��2��2��
  ����޸�   :
  ��������   : drv_icc.h ��ͷ�ļ�
  �����б�   :
  �޸���ʷ   :
  1.��    ��   : 2013��2��2��
    ��    ��   : ���׳� d00209607
    �޸�����   : �����ļ�

******************************************************************************/
#ifndef __DRV_ICC_H__
#define __DRV_ICC_H__

#include "mdrv_udi_common.h"

/**************************************************************************
  �궨��
**************************************************************************/
#define ICC_CHAN_NUM_MAX            (32)

#define ICC_CHAN_PRIORITY_HIGH      (0)
#define ICC_CHAN_PRIORITY_LOW       (255)
#define ICC_CHAN_PRIORITY_DEFAULT   ICC_CHAN_PRIORITY_LOW

#define ICC_CHAN_FIFO_MIN           (32)

#if defined(CHIP_BB_HI6758)
#define ICC_CHAN_FIFO_MAX           (65536) /* v3r3 sft�ڴ����ƣ�ֻ�ܷ���64KB */
#else
#define ICC_CHAN_FIFO_MAX           (65536 * 2) /* modify for dsda */
#endif

#define ICC_CHAN_FIFO_SIZE1         (1024)
#define ICC_CHAN_FIFO_SIZE2         (2048)
#define ICC_CHAN_FIFO_SIZE3         (4096)

/**************************************************************************
  �ṹ����
**************************************************************************/
typedef enum tagICC_CHAN_STATE_E
{
    ICC_CHAN_STATE_CLOSED   = 0,
    ICC_CHAN_STATE_OPENED,
    ICC_CHAN_STATE_CLOSEING,
    ICC_CHAN_STATE_BUTT
}ICC_CHAN_STATE_E;

typedef enum tagICC_EVENT_E{
    ICC_EVENT_CLOSE         = 0,
    ICC_EVENT_RESET,
    ICC_EVENT_RECOVER,
    ICC_EVENT_BUTT
}ICC_EVENT_E;


/**************************************************************************
  ��������
**************************************************************************/
unsigned int BSP_ICC_CanSleep(unsigned int u32Flag);

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
int BSP_ICC_Close(unsigned int u32ChanId);
#define DRV_ICC_CLOSE(u32ChanId)    BSP_ICC_Close(u32ChanId)

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
int BSP_ICC_Ioctl(unsigned int u32ChanId, unsigned int cmd, void *param);
#define DRV_ICC_IOCTL(u32ChanId,cmd,param)  BSP_ICC_Ioctl(u32ChanId,cmd,param)


/**************************************************************************
  �����붨��
**************************************************************************/
#if 0   /*tmp������BSP_MODU_ICC��BSP.H�ж��壬����������������ã�Ϊ�˲�����������ʱȥ����20130506*/
#define BSP_ERR_ICC_BASE                (int)(0x80000000 | (BSP_DEF_ERR(BSP_MODU_ICC, 0)))
#endif
#define BSP_ERR_ICC_BASE                (int)(0x80000000 | 0x10180000)
#define BSP_ERR_ICC_NOT_INIT            (BSP_ERR_ICC_BASE + 0x1)
#define BSP_ERR_ICC_NOT_CONNECT         (BSP_ERR_ICC_BASE + 0x2)
#define BSP_ERR_ICC_NULL                (BSP_ERR_ICC_BASE + 0x3)
#define BSP_ERR_ICC_NO_MEM              (BSP_ERR_ICC_BASE + 0x4)
#define BSP_ERR_ICC_INVALID_CHAN        (BSP_ERR_ICC_BASE + 0x5)
#define BSP_ERR_ICC_INVALID_PARAM       (BSP_ERR_ICC_BASE + 0x6)
#define BSP_ERR_ICC_EXIST               (BSP_ERR_ICC_BASE + 0x7)
#define BSP_ERR_ICC_NOT_EXIST           (BSP_ERR_ICC_BASE + 0x8)
#define BSP_ERR_ICC_OPENED              (BSP_ERR_ICC_BASE + 0x9)
#define BSP_ERR_ICC_NOT_OPEN            (BSP_ERR_ICC_BASE + 0xa)
#define BSP_ERR_ICC_NO_SEM              (BSP_ERR_ICC_BASE + 0xb)
#define BSP_ERR_ICC_NEGOTIATE_FAIL      (BSP_ERR_ICC_BASE + 0xc)
#define BSP_ERR_ICC_BUFFER_FULL         (BSP_ERR_ICC_BASE + 0xd)
#define BSP_ERR_ICC_BUFFER_EMPTY        (BSP_ERR_ICC_BASE + 0xe)
#define BSP_ERR_ICC_INVALID_PACKET      (BSP_ERR_ICC_BASE + 0xf)
#define BSP_ERR_ICC_PACKET_SIZE         (BSP_ERR_ICC_BASE + 0x10)
#define BSP_ERR_ICC_USER_BUFFER_SIZE    (BSP_ERR_ICC_BASE + 0x11)
/*Modify_for_c_reset, l00212112,20130511, starts*/
/*C�˷�����λ*/
#define BSP_ERR_ICC_CCORE_RESETTING    (BSP_ERR_ICC_BASE + 0x12)
/*Modify_for_c_reset, l00212112,20130511, ends*/
#define BSP_ERR_ICC_MALLOC_FAIL        (BSP_ERR_ICC_BASE + 0x13)
#define BSP_ERR_ICC_TIMEOUT            (BSP_ERR_ICC_BASE + 0x14)
#endif

