/******************************************************************************

                  ��Ȩ���� (C), 2001-2011, ��Ϊ�������޹�˾

 ******************************************************************************
  �� �� ��   : debug_func.h
  �� �� ��   : ����
  ��    ��   : ¬��ʤ 00212112
  ��������   : 2014��3��29��
  ����޸�   :
  ��������   : debug_func.c ��ͷ�ļ�
  �����б�   :
  �޸���ʷ   :
  1.��    ��   : 2014��3��29��
    ��    ��   : ¬��ʤ 00212112
    �޸�����   : �����ļ�

******************************************************************************/

/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/
#ifndef __DEBUG_FUNC_H__
#define __DEBUG_FUNC_H__
#include <linux/uaccess.h>
#include <linux/types.h>
#include <linux/io.h>               /* For writel */
#include <linux/of.h>
#include <linux/err.h>

/*#include  ###*/

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif

/*****************************************************************************
���Լ���������
*****************************************************************************/
/*it's ecall an variable, if the first input parameter is this value
the same as the one defined in ecall.c*/
#define DBG_ECALL_VARIABLE              0xf0
/*The max number of arguments of ecalled function
keep the same as the one defined in ecall.c*/
#define DBG_ECALL_FUNC_ARGS_MAXNUMB     6
/*for mcu wdg*/
#define MCU_WDT_UNLOCK_VALUE              (0x1ACCE551)
#define M3_WDT_GLOBAL_FREQUENCY       (32768)/*ʹ��32.768Kʱ��*/
#define M3_WDT_NOT_GLOBAL_FREQUENCY   (32768)/*ʹ��32.768Kʱ��*/

/*for c core wdg*/
#define CCORE_WDT_REG_VALUE_UNLOCK        0x1ACCE551
#define CCORE_WDT_REG_VALUE_LOCK          0x00000000
#define CCORE_WDT_CLK_CNT_PER_S               32768   /* ���Ź���ʱ��Ƶ�� */

#define DEBUG_FUNC_MARK         "_func"
#define DEBUG_FUNC_MARK_LEN         strlen(DEBUG_FUNC_MARK)

/*k3v3+ wdg information*/
#define INT_ENABLE	                          (1 << 0)
#define RESET_ENABLE	                   (1 << 1)
#define INT_MASK                                (1 << 0)
#define WDT_REG_VALUE_UNLOCK          0x1ACCE551
#define WDT_REG_VALUE_LOCK              0x00000000
#define SOC_K3_WDG_ACPU_ADDR      0xE8A06000
#define SOC_K3_WDG_LPM3_ADDR      0xFFF3D000
#define DEFAULT_TIME                        10
#define BOARD_ID_INFO                      1

/*balong wdg information*/
#define SOC_BALONG_AO_SCTRL_BASE_ADDR         (0xF7800000)
#define SOC_BALONG_AO_SCTRL_SC_PERIPH_CLKEN4_ADDR(base)      ((base) + (0x630))
#define SOC_BALONG_MODEM_SCTRL_BASE_ADDR      (0xFF00E000)
#define SOC_BALONG_MODEM_SCTRL_MDMSC_AO_CLKEN_ADDR(base)     ((base) + (0x0000))
#define SOC_BALONG_AO_SCTRL_SC_PERIPH_CLKDIS4_ADDR(base)     ((base) + (0x634))
#define SOC_BALONG_MODEM_SCTRL_MDMSC_AO_CLKDIS_ADDR(base)    ((base) + (0x0004))

#define SOC_BALONG_WDG_ACPU_ADDR         (0xF8005000)
#define SOC_BALONG_WDG_CCPU_ADDR         (0xFF00A000)
#define SOC_BALONG_WDG_LMCU_ADDR         (0xF6182000)
#define SOC_BALONG_WDG_GMCU_ADDR        (0xF6183000)
#define BALONG_CCPU_SLEEP_OFFSET                0x840

#define BALONG_WDG_CLKSTART_BIT            12
#define BALONG_MLWDG_CLKSTART_BIT        6
#define BALONG_MGWDG_CLKSTART_BIT        7
#define BALONG_CCPU_SLEEP_BIT                  4

/*common regs opreration*/
#define WDT_WDG_LOAD_ADDR(base)                    ((base) + (0x0000))
#define WDT_WDG_VALUE_ADDR(base)                  ((base) + (0x0004))
#define WDT_WDG_CONTROL_ADDR(base)             ((base) + (0x0008))
#define WDT_WDG_INTCLR_ADDR(base)                ((base) + (0x000C))
#define WDT_WDG_RIS_ADDR(base)                      ((base) + (0x0010))
#define WDT_WDG_MIS_ADDR(base)                      ((base) + (0x0014))
#define WDT_WDG_LOCK_ADDR(base)                    ((base) + (0x0C00))


/*type define of watch dogs*/
typedef enum Dbg_wdg_type
{
    DBG_WDG_ACORE,       /*k3v3+ balong all hold*/
    DBG_WDG_CCORE,       /*only balong all hold*/
    DBG_WDG_LOCAL_MCU,  /*k3v3+ balong all hold*/
    DBG_WDG_GLOBAL_MCU,  /*only balong hold*/
    DBG_CORE_MAX,
} dbg_wdg_type;


#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif

#endif
