/******************************************************************************

                  ��Ȩ���� (C), 2001-2011, ��Ϊ�������޹�˾

 ******************************************************************************
  �� �� ��   : BSP_TIMER_PHY.h
  �� �� ��   : ����
  ��    ��   : ��ϲ 220237
  ��������   : 2013��3��30��
  ����޸�   :
  ��������   : Bsp_timer_phy.c ��ͷ�ļ�
  �����б�   :
  �޸���ʷ   :
  1.��    ��   : 2013��3��30��
    ��    ��   : ��ϲ 220237
    �޸�����   : �����ļ�

******************************************************************************/

/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/
#ifndef __BSP_TIMER_PHY_H__
#define __BSP_TIMER_PHY_H__

#include "soc_timer_interface.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


/*****************************************************************************
  2 �궨��
*****************************************************************************/
#define TIMER_PRINT_ERR             KERN_ERR
#define TIMER_PRINT_INFO            KERN_INFO

#define TIMER_LOAD_REG(base)      SOC_TIMER_TIMERN_LOAD_ADDR(base, 0)
#define TIMER_VALUE_REG(base)     SOC_TIMER_TIMERN_VALUE_ADDR(base, 0)
#define TIMER_CNTL_REG(base)      SOC_TIMER_TIMERN_CONTROL_ADDR(base, 0)
#define TIMER_INTC_REG(base)      SOC_TIMER_TIMERN_INTCLR_ADDR(base, 0)
#define TIMER_RIS_REG(base)       SOC_TIMER_TIMERN_RIS_ADDR(base, 0)
#define TIMER_MIS_REG(base)       SOC_TIMER_TIMERN_MIS_ADDR(base, 0)

#define TIMER_TOTAL_NUM 18          /* V9R1 SFT Acore��Timer��Դ���� */

#define TIMER_ACPU_ID_MAX  6
#define TIMER_ACPU_ID_BEGIN 8

#ifdef _DRV_LLT_
extern SOC_TIMER_TIMERN_CONTROL_UNION   g_SOC_TIMER_TIMERN_CONTROL_UNION;
#define TIMER_CNTL_REG(base)    (&g_SOC_TIMER_TIMERN_CONTROL_UNION)
#endif


#ifndef TIMER_REG_READ
#ifdef _DRV_LLT_
#define TIMER_REG_READ(reg,result)  ((result) = 1)
#else
#define TIMER_REG_READ(reg,result) BSP_REG_READ(0, reg, result)
#endif
#endif

#ifndef TIMER_REG_WRITE
#ifdef _DRV_LLT_
#define TIMER_REG_WRITE(reg,data)  1
#else
#define TIMER_REG_WRITE(reg,data)  BSP_REG_WRITE(0, reg, data)
#endif
#endif

/* ����ʱ������ */
#define SLEEP_CLK_FREQ (32768)
#define TCXO_CLK_FREQ  (19200000)
#define TIMER_LOAD_MAX_VALUE    (0xFFFFFFFF)


#define SC_TIMER_EN0_Ctrl_ENABLE_START_INDEX    (16)        /* ϵͳ������SC_TIMER_EN0��ʹ��ʱ�����õ���ʼλ�� */
#define SC_TIMER_EN1_Ctrl_ENABLE_START_INDEX    (16)        /* ϵͳ������SC_TIMER_EN1��ʹ��ʱ�����õ���ʼλ�� */
#define SC_TIMER_EN1_START_INDEX                ( 8)        /* ϵͳ������SC_TIMER_EN1�п���ʱ�ӵ���ʼλ�� */
#define SCtrl_BIT_FOR_TIMER                     ( 2)        /* ϵͳ������SC_TIMER_EN0,1,2������ÿ��timer�õ�λ�� */

#define SET_BIT_WIHT_TRUE   0x1       /* ���øñ���λΪ1 */
#define SET_BIT_WIHT_FALSE  0x0       /* ���øñ���λΪ0 */
#define SET_BITS_WIHT_TRUETRUE  0x3   /* ������2������λΪ11 */

#define TIMER_INVALID_ADDR              0xFFFFFFFF   /* ��Ч��ַ */

typedef enum
{
    TIMER_PCLK                  = 0,/* �ο�ʱ��ѡ��pclk_mcpu */
#if defined(BOARD_SFT)
    TIMER_TCXO_OFF_IN_SLEEP     = TIMER_PCLK, /*B50�߼��޵���19MHZ*//* 1. �ο�ʱ��ѡ��19.2MHz���ҽ���sleep���Զ��رա� */
    TIMER_TCXO_SWITCH_IN_SLEEP  = TIMER_PCLK, /*B50�߼��޵���19MHZ*//* 2.�ο�ʱ��ѡ��19.2MHz���ҽ���sleep���Զ��л�Ϊ32KHz */
#elif defined(BOARD_ASIC)
    TIMER_TCXO_OFF_IN_SLEEP         = 1,
    TIMER_TCXO_SWITCH_IN_SLEEP      = 2,
#endif
    TIMER_32K                   = 3 /* �ο�ʱ��ѡ��32KHz */
}TIMER_TYPE;

/*****************************************************************************
  3 ö�ٶ��� 
*****************************************************************************/

typedef enum
{
    TIMER_ACPU_SYSTEM_ID_PHY    = 0,
    TIMER_ACPU_FREE_RUN_PHY     = 1, 
    TIMER_ACPU_OSA_ID_PHY       = 2,   
    TIMER_ACPU_SOFTTIMER_ID_PHY = 3, 
    TIMER_ACPU_IDLE_ID_PHY      = 12,
    TIMER_ACPU_OM_TCXO_ID_PHY   = 13,
    TIMER_ID_MAX_PHY
} DRV_TIMER_ID_PHY;



/* C�˵�8_1��Timer ��value�Ĵ��� */
#define CCORE_TIMER_EXP 1
#define ulCoreTimer8_1  17

#define SC_TIMER_EN0_START_TIMER    0
#define SC_TIMER_EN1_START_TIMER    8

#define TIMER_REG_SIZE 0x1000

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

extern void timer_32bit_count_set(unsigned char timerId);
extern unsigned int timer_input_clk_get(unsigned char timerId);
extern void timer_int_clear(unsigned char timerId);
extern void timer_int_mask(unsigned char timerId);
extern unsigned int timer_int_status_get(unsigned char timerId);
extern void timer_int_unmask(unsigned char timerId);
extern unsigned int timer_load_get(unsigned char timerId);
extern void timer_load_set(unsigned char ucTimerId, unsigned int ulValue);
extern unsigned int timer_raw_int_status_get(unsigned char timerId);
extern void timer_start(unsigned char timerId, unsigned int mode);
extern void timer_stop(unsigned char timerId);
extern signed int timer_sys_ctrl_set(void);
extern unsigned int timer_value_get(unsigned char timerId);
extern signed int timer_find_phy_id (unsigned char timerID);
extern signed int timer_is_running(unsigned char timerId);

#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif /* end of BSP_TIMER_PHY.h */
