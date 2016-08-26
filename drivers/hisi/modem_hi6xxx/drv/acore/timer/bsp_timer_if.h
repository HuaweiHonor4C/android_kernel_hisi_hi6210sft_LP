/******************************************************************************

                  ��Ȩ���� (C), 2001-2011, ��Ϊ�������޹�˾

 ******************************************************************************
  �� �� ��   : BSP_TIMER.h
  �� �� ��   : ����
  ��    ��   : ��ϲ 220237
  ��������   : 2012��7��25��
  ����޸�   :
  ��������   : BSP_TIMER.c ��ͷ�ļ�
  �����б�   :
  �޸���ʷ   :
  1.��    ��   : 2012��7��25��
    ��    ��   : ��ϲ 220237
    �޸�����   : �����ļ�

******************************************************************************/

/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/
#ifndef __BSP_TIMER_H__
#define __BSP_TIMER_H__

#include "soc_baseaddr_interface.h"
#include "soc_peri_sctrl_interface.h"
#include <soc_ao_sctrl_interface.h>

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif

/*****************************************************************************
  2 �궨��
*****************************************************************************/
/* ��ʱ��ʹ��λ*/
#define TIMER_DEF_TC_ENABLE    (1 << 7)   /* Timerʹ��*/
#define TIMER_DEF_TC_DISABLE   (0 << 7)     /* Timer��ֹ*/
#define TIMER_DEF_TC_ENABLE_BIT_MSK       (~(1 << 7)) /* Timer����λmask*/

/* ��ʱ���ļ���ģʽλ*/
#define TIMER_DEF_TC_PERIODIC    (1 << 6)       /* user-defined count mode*/
#define TIMER_DEF_TC_FREERUN     (0 << 6)       /* free-running mode*/
#define TIMER_DEF_TC_COUNT_MODE_BIT_MSK       (~(1 << 6)) /* Timer����ģʽλmask*/

/* TimerXRIS�ж�����λ*/
#define TIMER_DEF_TC_INTENABLE   (1 << 5)       /* �����θ��ж�*/
#define TIMER_DEF_TC_INTDISABLE  (0 << 5)     /* ���θ��ж� */
#define TIMER_DEF_TC_INT_BIT_MSK       (~(1 << 5)) /* Timer�ж�����λmask*/

/* ��ʱ����Ƶֵ*/
#define TIMER_DEF_TC_CLK_DIV_1   (0 << 2)       /* 1��Ƶ*/
#define TIMER_DEF_TC_CLK_DIV_16  (1 << 2)       /* 16��Ƶ */
#define TIMER_DEF_TC_CLK_DIV_256 (2 << 2)       /* 256��Ƶ*/
#define TIMER_DEF_TC_CLK_DIV_BIT_MSK (~(3 << 2))    /* ��Ƶλmask */

/* ��ʱ������ģʽ*/
#define TIMER_DEF_TC_16BITS_MODE    (0 << 1)   /* 16λ����ģʽ*/
#define TIMER_DEF_TC_32BITS_MODE    (1 << 1)     /* 32λ����ģʽ*/
#define TIMER_DEF_TC_BITS_MODE_BIT_MSK (~(1 << 1))    /* ����ģʽλmask */
/* ��ʱ������ģʽѡ��*/
#define TIMER_DEF_TC_ONCE_MODE    0x1   /* һ�μ���ģʽ*/
#define TIMER_DEF_TC_PERIOD_MODE  0x0     /* �����Լ���ģʽ*/
#define TIMER_DEF_TC_ONESHOT_MODE_BIT_MSK (~(1 << 0))    /* oneshotλmask */

/*timer clk select bits*/
#define SC_TIMER_EN0_TIMER0_0_START_BIT 0
#define SC_TIMER_EN0_TIMER0_1_START_BIT 2

#define SC_TIMER_EN0_MSK_TIMER1_0_START_BIT 20
#define SC_TIMER_EN0_MSK_TIMER1_1_START_BIT 22

#define SC_TIMER_EN0_TIMER1_0_START_BIT 4
#define SC_TIMER_EN0_TIMER1_1_START_BIT 6

#define SC_TIMER_EN0_TIMER0_0_MSK (~(3 << SC_TIMER_EN0_TIMER0_0_START_BIT))
#define SC_TIMER_EN0_TIMER0_1_MSK (~(3 << SC_TIMER_EN0_TIMER0_1_START_BIT))

#define SC_TIMER_EN0_MSK_TIMER1_0_MSK (~(3 << SC_TIMER_EN0_MSK_TIMER1_0_START_BIT))
#define SC_TIMER_EN0_MSK_TIMER1_1_MSK (~(3 << SC_TIMER_EN0_MSK_TIMER1_1_START_BIT))

#define SC_TIMER_EN0_TIMER1_0_MSK (~(3 << SC_TIMER_EN0_TIMER1_0_START_BIT))
#define SC_TIMER_EN0_TIMER1_1_MSK (~(3 << SC_TIMER_EN0_TIMER1_1_START_BIT))

/*OM TIMER reg base & index*/
#define OSA_TIMER_REG_BASE SOC_Timer1_BASE_ADDR
#define OSA_TIMER_REG_SIZE 0x1000
#define OSA_TIMER_INDEX 0

#define TIMER_INT_CLEAR 1
#define TIMER_INT_VALID 1

/*****************************************************************************
  3 ö�ٶ���
*****************************************************************************/
typedef enum
{
    TIMER_PCLK                  = 0,/* �ο�ʱ��ѡ��pclk_mcpu */
    TIMER_TCXO_OFF_IN_SLEEP     = 1,/* �ο�ʱ��ѡ��19.2MHz���ҽ���sleep���Զ��رա� */
    TIMER_TCXO_SWITCH_IN_SLEEP  = 2,/* �ο�ʱ��ѡ��19.2MHz���ҽ���sleep���Զ��л�Ϊ32KHz */
    TIMER_32K                   = 3 /* �ο�ʱ��ѡ��32KHz */
}TIMER_TYPE;

typedef enum
{
    TIMER_UNINITED     = 0,/* timerδ��ʼ�� */
    TIMER_INITED       = 1,/* timer�ѳ�ʼ��*/
}TIMER_INIT_FLAG;
/*****************************************************************************
  4 ��Ϣͷ����
*****************************************************************************/


/*****************************************************************************
  5 ��Ϣ����
*****************************************************************************/


/*****************************************************************************
  6 STRUCT����
*****************************************************************************/

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
int start_om_hard_timer(unsigned int value);
int stop_om_hard_timer(void);
unsigned int get_om_hard_timer_curtime(void);
int clear_om_hard_timer_int(void);
unsigned int GetHardTimerCurTime(void);




#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif /* end of BSP_TIMER.h */
