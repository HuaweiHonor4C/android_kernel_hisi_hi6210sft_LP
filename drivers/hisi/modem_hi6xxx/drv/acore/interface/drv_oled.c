/******************************************************************************

                  ��Ȩ���� (C), 2001-2011, ��Ϊ�������޹�˾

 ******************************************************************************
  �� �� ��   : drv_oled.c
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
#include "sys_config.h"
#endif

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif

extern int printf(const char *format, ...);
/*****************************************************************************
  2 ��������
*****************************************************************************/

/*****************************************************************************
  3 ����ʵ��
*****************************************************************************/

/*****************************************************************************
*  Function:  DRV_OLED_CLEAR_WHOLE_SCREEN
*  Description: oled clear *
*  Called By:AP
*  Table Accessed:
*  Table Updated:
*  Input:
*         N/A
*  Output:
*         N/A
*  Return:
*         N/A
*****************************************************************************/
BSP_VOID DRV_OLED_CLEAR_WHOLE_SCREEN(BSP_VOID)
{
#if defined(BSP_CORE_MODEM) || defined(PRODUCT_CFG_CORE_TYPE_MODEM)    
#if( FEATURE_OLED == FEATURE_ON )
    oledClearWholeScreen();
#else
    DRV_PRINTF("Function DRV_OLED_CLEAR_WHOLE_SCREEN unsupport!\n");
#endif
#endif

#if (defined BSP_CORE_APP)
    DRV_PRINTF("Function DRV_OLED_CLEAR_WHOLE_SCREEN unsupport!\n");
#endif
}

/*****************************************************************************
*  Function:  DRV_OLED_UPDATE_STATE_DISPLAY
*  Description: oled display right or not right  *
*  Called By:AP
*  Table Accessed:
*  Table Updated:
*  Input:
*         N/A
*  Output:
*         N/A
*  Return:
*         N/A
*****************************************************************************/
void DRV_OLED_UPDATE_STATE_DISPLAY(int UpdateStatus)
{
#if defined(BSP_CORE_MODEM) || defined(PRODUCT_CFG_CORE_TYPE_MODEM)
#if( FEATURE_OLED == FEATURE_ON )
    oledUpdateDisplay(UpdateStatus);
#else
    DRV_PRINTF("Function DRV_OLED_UPDATE_STATE_DISPLAY unsupport!\n");
#endif
#endif

#if (defined BSP_CORE_APP)
    DRV_PRINTF("Function DRV_OLED_UPDATE_STATE_DISPLAY unsupport!\n");
#endif
}

/*****************************************************************************
*  Function:  DRV_OLED_UPDATE_DISPLAY
*  Description: oled display right or not right  *
*  Called By:AP
*  Table Accessed:
*  Table Updated:
*  Input:
*         N/A
*  Output:
*         N/A
*  Return:
*         N/A
*****************************************************************************/
void DRV_OLED_UPDATE_DISPLAY(int UpdateStatus)
{
#if defined(BSP_CORE_MODEM) || defined(PRODUCT_CFG_CORE_TYPE_MODEM)    
#if( FEATURE_OLED == FEATURE_ON )
    oledUpdateDisplay(UpdateStatus);
#else
    DRV_PRINTF("Function DRV_OLED_UPDATE_DISPLAY unsupport!\n");
#endif
#endif

#if (defined BSP_CORE_APP)
    DRV_PRINTF("Function DRV_OLED_UPDATE_DISPLAY unsupport!\n");
#endif
}

/*****************************************************************************
 �� �� ��  : DRV_OLED_STRING_DISPLAY
 ��������  : oled�ַ�����ʾ����
 �������  :
 *           Ҫ��ʾ�ַ�������ʼ����
 *           Ҫ��ʾ���ַ���
 �������  : none
 �� �� ֵ  : void
*****************************************************************************/
BSP_VOID DRV_OLED_STRING_DISPLAY(UINT8 ucX, UINT8 ucY, UINT8 *pucStr)
{
#if defined(BSP_CORE_MODEM) || defined(PRODUCT_CFG_CORE_TYPE_MODEM)
#if( FEATURE_OLED == FEATURE_ON )
    oledStringDisplay(ucX,ucY,pucStr);
#else
    DRV_PRINTF("Function DRV_OLED_STRING_DISPLAYs unsupport!\n");
#endif
#endif

#if (defined BSP_CORE_APP)
    DRV_PRINTF("Function DRV_OLED_STRING_DISPLAYs unsupport!\n");
#endif
}




#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif

