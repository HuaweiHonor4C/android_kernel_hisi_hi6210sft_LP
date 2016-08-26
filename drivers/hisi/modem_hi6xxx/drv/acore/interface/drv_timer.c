/******************************************************************************

                  ��Ȩ���� (C), 2001-2011, ��Ϊ�������޹�˾

 ******************************************************************************
  �� �� ��   : drv_timer.c
  �� �� ��   : ����
  ��    ��   : c61362
  ��������   : 2012��3��2��
  ����޸�   :
  ��������   : ������ϲ������װ�Ľӿڲ�
  �޸���ʷ   :
  1.��    ��   : 2012��3��2��
    ��    ��   : c61362
    �޸�����   : �½�Drvinterface.c

  2.��    ��   : 2013��2��19��
    ��    ��   : ��ϲ 220237
    �޸�����   : ��Drvinterface.c�������

******************************************************************************/

/*****************************************************************************
  1 ͷ�ļ�����
*****************************************************************************/


#include "BSP.h"
#if defined(BSP_CORE_MODEM) || defined(PRODUCT_CFG_CORE_TYPE_MODEM)
#include "stdio.h"
#ifdef __OS_RTOSCK__
#else
#include <vxWorks.h>
#include <private/vmLibP.h>
#include <cacheLib.h>
#include "arm_pbxa9.h"
#include <cacheLib.h>
#endif
#include "BSP_TIMER.h"
#include "sys_config.h"
#include "soc_baseaddr_interface.h"
#include "string.h"
#endif

#if (defined BSP_CORE_APP)
#include <bsp_timer.h>
#endif

#include "soc_rtc_interface.h"
#include "soc_baseaddr_interface.h"
#include "soc_timer_interface.h"
#if defined (CHIP_BB_HI6210)
#include "soc_peri_sctrl_interface.h"
#elif defined (CHIP_BB_HI6620)
#include "soc_sctrl_interface.h"
#endif
#include <soc_ao_sctrl_interface.h>

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


/*****************************************************************************
  2 ��������
*****************************************************************************/
extern unsigned int get_rtc_timer_value(void);
/*****************************************************************************
  3 ����ʵ��
*****************************************************************************/
extern unsigned int omTimerGet(void);
/********************************************************************************************************************
 �� �� ��  : BSP_GetSliceValue
 ��������  : ��ȡʱ���Timer�ĵ�ǰֵ
 �������  :
 �� �� ֵ  :
********************************************************************************************************************/
unsigned int BSP_GetSliceValue(void)
{
    return omTimerGet();
}

extern BSP_S32 BSP_TIMER_GetRestTime(BSP_U32 clk_logic_id, BSP_U32 unitType, BSP_U32 * pRestTime);

int mdrv_timer_get_rest_time(unsigned int usrClkId, unsigned int unitType, unsigned int * pRestTime)
{
#if defined(BSP_CORE_MODEM) || defined(PRODUCT_CFG_CORE_TYPE_MODEM)
    return BSP_TIMER_GetRestTime(usrClkId, unitType, pRestTime);
#endif

#if (defined BSP_CORE_APP)
    return BSP_TIMER_GetRestTime(usrClkId, unitType, pRestTime);
#endif
}

extern BSP_S32 BSP_TIMER_UsrClkStart
(
    BSP_U32     clk_logic_id,
    FUNCPTR_1   routine,
    BSP_S32     arg,
    BSP_U32     timerValue,
    BSP_U32     mode,
    BSP_U32     unitType
);

int mdrv_timer_start
(
    unsigned int     usrClkId,
    FUNCPTR_1        routine,
    int              arg,
    unsigned int     timerValue,
    unsigned int     mode,
    unsigned int     unitType
)
{
#if defined(BSP_CORE_MODEM) || defined(PRODUCT_CFG_CORE_TYPE_MODEM)
    return BSP_TIMER_UsrClkStart(usrClkId, routine, arg, timerValue, mode, unitType);
#endif

#if (defined BSP_CORE_APP)
    return BSP_TIMER_UsrClkStart(usrClkId, routine, arg, timerValue, mode, unitType);
#endif
}

extern BSP_S32 BSP_TIMER_UsrClkDisable(BSP_U32 clk_logic_id);

int mdrv_timer_stop(unsigned int usrClkId)
{
#if defined(BSP_CORE_MODEM) || defined(PRODUCT_CFG_CORE_TYPE_MODEM)
    return BSP_TIMER_UsrClkDisable(usrClkId);
#endif

#if (defined BSP_CORE_APP)
    return BSP_TIMER_UsrClkDisable(usrClkId);
#endif
}

/*****************************************************************************
 �� �� ��  : BSP_GET_RTC_VALUE
 ��������  : ����rtc�Ĵ�������õ�ǰRTC��ֵ
 �������  : ��
 �������  : ��
 ����ֵ    ��RTCֵ����λs
 �޸�˵��  :
             V9sft A��C�˹��ʵ��(A����mach_info.c�ļ��У�C����BSP_TIMER.c�ļ���)
             V3sft A��C�˴�׮
*****************************************************************************/

unsigned int BSP_GET_RTC_VALUE(void)
{
    BSP_U32 result;

    result = get_rtc_timer_value();
    return result;
}

unsigned int mdrv_rtc_get_value(void)
{
    return BSP_GET_RTC_VALUE();
}

/************************************************************************
     *  FUNCTION
     *       mdrv_timer_get_normal_timestamp
     * DESCRIPTION
     *       GetSliceValue
     * INPUTS
     *       NONE
     * OUTPUTS
     *       NONE
             ��ȡʱ�����ʱ�������ֵΪ����ֵ
*************************************************************************/
extern unsigned int omTimerGet(void);
unsigned int mdrv_timer_get_normal_timestamp(void)
{
    return omTimerGet();
}

/*****************************************************************************
 �� �� ��  : mdrv_timer_get_accuracy_timestamp
 ��������  : ������ȡ�߾��ȵĶ�ʱ����ֵ����Э��ջ�ṩ�Ľӿڡ�
 �������  : ��
 �������  : unsigned int  *pulHigh32bitValue �洢��32bitֵ
             unsigned int  *pulLow32bitValue  �洢��32bitֵ
 ����ֵ    ��0 �ɹ�
            -1 ʧ��
*****************************************************************************/
int mdrv_timer_get_accuracy_timestamp(unsigned int  *pulHigh32bitValue,  unsigned int  *pulLow32bitValue)
{
    return bsp_get_accuracy_timestamp(pulHigh32bitValue,pulLow32bitValue);
}

#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif

