/******************************************************************************

                  ��Ȩ���� (C), 2001-2011, ��Ϊ�������޹�˾

 ******************************************************************************
  �� �� ��   : drv_debug_led.c
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
#if 0/* defined(BSP_CORE_MODEM) || defined(PRODUCT_CFG_CORE_TYPE_MODEM)*/
extern BSP_S32 BSP_DBLED_ON( DBLED_ID_E ledId );
extern BSP_S32 BSP_DBLED_OFF( DBLED_ID_E ledId );
extern int BSP_SYSCTRL_REG_SET(unsigned int regAddr, unsigned int setData);
extern int BSP_SYSCTRL_REG_GET(unsigned int regAddr, unsigned int * getData);
#endif

/*****************************************************************************
  3 ����ʵ��
*****************************************************************************/


int DRV_DBLED_ON( unsigned int ledId )
{
#if 0/*defined(BSP_CORE_MODEM) || defined(PRODUCT_CFG_CORE_TYPE_MODEM)*/
    return BSP_DBLED_ON((DBLED_ID_E)ledId);
#endif

#if (defined BSP_CORE_APP)
    return 0;   /* ��׮ */
#endif
}


int DRV_DBLED_OFF( unsigned int ledId )
{
#if 0/*defined(BSP_CORE_MODEM) || defined(PRODUCT_CFG_CORE_TYPE_MODEM)*/
    return BSP_DBLED_OFF((DBLED_ID_E)ledId);
#endif

#if (defined BSP_CORE_APP)
    return 0;   /* ��׮ */
#endif
}


int DRV_SYSCTRL_REG_SET(unsigned int regAddr, unsigned int setData)
{
#if 0/*defined(BSP_CORE_MODEM) || defined(PRODUCT_CFG_CORE_TYPE_MODEM)*/
    return BSP_SYSCTRL_REG_SET(regAddr, setData);
#endif

#if (defined BSP_CORE_APP)
    return 0;   /* ��׮ */
#endif
}


int DRV_SYSCTRL_REG_GET(unsigned int regAddr, unsigned int * getData)
{
#if 0/*defined(BSP_CORE_MODEM) || defined(PRODUCT_CFG_CORE_TYPE_MODEM)*/
    return BSP_SYSCTRL_REG_GET(regAddr, getData);
#endif

#if (defined BSP_CORE_APP)
    return 0;   /* ��׮ */
#endif
}




#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif

