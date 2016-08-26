/******************************************************************************

                  ��Ȩ���� (C), 2001-2011, ��Ϊ�������޹�˾

 ******************************************************************************
  �� �� ��   : drv_wifi.c
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
#if (defined BSP_CORE_APP)
#include <linux/module.h>
#endif
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
 �� �� ��  : DRV_AT_GET_USER_EXIST_FLAG
 ��������  : ���ص�ǰ�Ƿ���USB���ӻ���WIFI�û�����
 �������  : ��
 �������  : ��
 �� �� ֵ  : 1 : ��
             0 : ��
*****************************************************************************/
unsigned int DRV_AT_GET_USER_EXIST_FLAG(void)
{
#if defined(BSP_CORE_MODEM) || defined(PRODUCT_CFG_CORE_TYPE_MODEM)
    DRV_PRINTF("DRV_AT_GET_USER_EXIST_FLAG ++!\n");
    DRV_PRINTF("DRV_AT_GET_USER_EXIST_FLAG --!\n");
	return 0;
#endif

#if (defined BSP_CORE_APP)
    return BSP_TRUE;
#endif
}

/*****************************************************************************
 �� �� ��  : WIFI_GET_TCMD_MODE
 ��������  : ��ȡ���������ģʽ
 �������  : ��
 �������  : 16��У׼����ģʽ
             17����ʾ���ڷ���ģʽ
             18����ʾ����ģʽ
 ����ֵ    ������ִ�е�״̬���ֵ
*****************************************************************************/
int WIFI_GET_TCMD_MODE(void)
{
    return 0;
#if 0
#if defined (BSP_CORE_MODEM) || defined(PRODUCT_CFG_CORE_TYPE_MODEM)
    return 0;   /* ��׮ */
#endif

#if (defined BSP_CORE_APP)
#if (FEATURE_WIFI == FEATURE_ON)
    return wifi_get_tcmd_mode();
#else
    DRV_PRINTF("Function WIFI_GET_TCMD_MODE unsupport!\n");
    return 0;
#endif
#endif
#endif
}

/*****************************************************************************
 �� �� ��  : WIFI_POWER_START
 ��������  : WIFI�ϵ�
 �������  : ��
 �������  : ��
 ����ֵ    �� 0: execute ok
              1: execute failed
*****************************************************************************/
int WIFI_POWER_START(void)
{
    return BSP_ERROR;
#if 0
#if defined (BSP_CORE_MODEM) || defined(PRODUCT_CFG_CORE_TYPE_MODEM)
    return 0;   /* ��׮ */
#endif

#if (defined BSP_CORE_APP)
#if (FEATURE_WIFI == FEATURE_ON)
    return wifi_power_on();
#else
    DRV_PRINTF("Function WIFI_POWER_START unsupport!\n");
    return 1;
#endif
#endif
#endif
}

/*****************************************************************************
 �� �� ��  : WIFI_TEST_CMD
 ��������  : ��������
 �������  : cmdStr�������ַ���
 �������  : ��
 ����ֵ    ����
*****************************************************************************/
void WIFI_TEST_CMD(char * cmdStr)
{
    return;
#if 0
#if defined (BSP_CORE_MODEM) || defined(PRODUCT_CFG_CORE_TYPE_MODEM)
    return;   /* ��׮ */
#endif

#if (defined BSP_CORE_APP)
#if (FEATURE_WIFI == FEATURE_ON)
    wifi_tcmd(cmdStr);
#else
    DRV_PRINTF("Function WIFI_TEST_CMD unsupport!\n");
#endif
#endif
#endif
}

/*****************************************************************************
 �� �� ��  : WIFI_POWER_SHUTDOWN
 ��������  : WIFI�µ�
 �������  : ��
 �������  : ��
 ����ֵ    �� 0: execute ok
              1: execute failed
*****************************************************************************/
int WIFI_POWER_SHUTDOWN(void)
{
    return BSP_ERROR;
#if 0
#if defined (BSP_CORE_MODEM) || defined(PRODUCT_CFG_CORE_TYPE_MODEM)
    return 0;   /* ��׮ */
#endif

#if (defined BSP_CORE_APP)
#if (FEATURE_WIFI == FEATURE_ON)
    return wifi_power_off();
#else
    DRV_PRINTF("Function WIFI_POWER_SHUTDOWN unsupport!\n");
    return 1;
#endif
#endif
#endif
}

/*****************************************************************************
 �� �� ��  : WIFI_GET_STATUS
 ��������  : WIFI״̬��ȡ
 �������  : ��
 �������  : ��
 ����ֵ    �� 0: wifi is off
              1: wifi is in normal mode
              2: wifi is in tcmd mode
*****************************************************************************/
int WIFI_GET_STATUS(void)
{
    return 0;
#if 0
#if defined (BSP_CORE_MODEM) || defined(PRODUCT_CFG_CORE_TYPE_MODEM)
    return 0;   /* ��׮ */
#endif

#if (defined BSP_CORE_APP)
#if (FEATURE_WIFI == FEATURE_ON)
    return wifi_get_status();
#else
    DRV_PRINTF("Function WIFI_GET_STATUS unsupport!\n");
    return 0;
#endif
#endif
#endif
}

/*****************************************************************************
 �� �� ��  : WIFI_GET_RX_DETAIL_REPORT
 ��������  : get result of rx report: totalPkt, GoodPkt, ErrorPkt
 �������  : ��
 �������  : totalPkt��goodPkt��badPkt
 ����ֵ    ����
*****************************************************************************/
void WIFI_GET_RX_DETAIL_REPORT(int* totalPkt,int* goodPkt,int* badPkt)
{
    return;
#if 0
#if defined (BSP_CORE_MODEM) || defined(PRODUCT_CFG_CORE_TYPE_MODEM)
    return;   /* ��׮ */
#endif

#if (defined BSP_CORE_APP)
#if (FEATURE_WIFI == FEATURE_ON)
    wifi_get_rx_detail_report(totalPkt, goodPkt, badPkt);
#else
    DRV_PRINTF("Function WIFI_GET_RX_DATAIL_REPORT unsupport!\n");
#endif
#endif
#endif
}

/*****************************************************************************
 �� �� ��  : WIFI_GET_RX_PACKET_REPORT
 ��������  : get result of rx ucast&mcast packets
 �������  : ��
 �������  : ucastPkts��mcastPkts
 ����ֵ    ����
*****************************************************************************/
void WIFI_GET_RX_PACKET_REPORT(unsigned int *ucastPkts, unsigned int *mcastPkts)
{
    return;
#if 0
#if defined (BSP_CORE_MODEM) || defined(PRODUCT_CFG_CORE_TYPE_MODEM)
    return;   /* ��׮ */
#endif

#if (defined BSP_CORE_APP)
#if (FEATURE_WIFI == FEATURE_ON)
    wifi_get_rx_packet_report(ucastPkts, mcastPkts);
#else
    DRV_PRINTF("Function WIFI_GET_RX_PACKET_REPORT unsupport!\n");
#endif
#endif
#endif
}

/*****************************************************************************
 �� �� ��  : WIFI_GET_PA_CUR_MODE
 ��������  : get the currrent PA mode of the wifi chip
 �������  : ��
 �������  : ��
 ����ֵ    ��0:  (WIFI_ONLY_PA_MODE) WIFI chip is in PA mode
             1:  (WIFI_ONLY_NOPA_MODE) WIFI chip is in no PA mode
             -1: wifi chip is in abnormal mode
*****************************************************************************/
int WIFI_GET_PA_CUR_MODE(void)
{
    return BSP_ERROR;
#if 0
#if defined (BSP_CORE_MODEM) || defined(PRODUCT_CFG_CORE_TYPE_MODEM)
    return 0;   /* ��׮ */
#endif

#if (defined BSP_CORE_APP)
#if (FEATURE_WIFI == FEATURE_ON)
    wifi_get_pa_curMode();
#else
    DRV_PRINTF("Function WIFI_GET_PA_CUR_MODE unsupport!\n");
    return -1;
#endif
#endif
#endif
}

/*****************************************************************************
 �� �� ��  : WIFI_GET_PA_MODE
 ��������  : get the support PA mode of wifi chip
 �������  : ��
 �������  : ��
 ����ֵ    ��0:  (WIFI_ONLY_PA_MODE) WIFI suppport only PA mode
             1:  (WIFI_ONLY_NOPA_MODE) WIFI suppport only no PA mode
             2:  (WIFI_PA_NOPA_MODE) WIFI suppport both PA &  no PA mode
             -1: failed
*****************************************************************************/
int WIFI_GET_PA_MODE(void)
{
    return BSP_ERROR;
#if 0
#if defined (BSP_CORE_MODEM) || defined(PRODUCT_CFG_CORE_TYPE_MODEM)
    return 0;   /* ��׮ */
#endif

#if (defined BSP_CORE_APP)
#if (FEATURE_WIFI == FEATURE_ON)
    wifi_get_pa_mode();
#else
    DRV_PRINTF("Function WIFI_GET_PA_MODE unsupport!\n");
    return -1;
#endif
#endif
#endif
}

/*****************************************************************************
 �� �� ��  : WIFI_SET_PA_MODE
 ��������  : set the PA mode of wifi chip
 �������  : 0:  (WIFI_ONLY_PA_MODE) WIFI suppport only PA mode
             1:  (WIFI_ONLY_NOPA_MODE) WIFI suppport only no PA mode
             2:  (WIFI_PA_NOPA_MODE) WIFI suppport both PA &  no PA mode
 �������  : ��
 ����ֵ    ��0: success
             -1: failed
*****************************************************************************/
int WIFI_SET_PA_MODE(int wifiPaMode)
{
    return BSP_ERROR;
#if 0
#if defined (BSP_CORE_MODEM) || defined(PRODUCT_CFG_CORE_TYPE_MODEM)
    return 0;   /* ��׮ */
#endif

#if (defined BSP_CORE_APP)
#if (FEATURE_WIFI == FEATURE_ON)
    wifi_set_pa_mode(wifiPaMode);
#else
    DRV_PRINTF("Function WIFI_SET_PA_MODE unsupport!\n");
    return -1;
#endif
#endif
#endif
}

/*****************************************************************************
 �� �� ��  : DRV_WIFI_DATA_RESERVED_TAIL
 ��������  : WIFI������Ҫ���ݿ��ڴ�
 �������  : usLen - �û��������ݳ���Len
 �������  : ��
 �� �� ֵ  : ��������β��Ԥ���ĳ���
*****************************************************************************/
unsigned int DRV_WIFI_DATA_RESERVED_TAIL(unsigned int len)
{
    return 0;
#if 0
#if defined (BSP_CORE_MODEM) || defined(PRODUCT_CFG_CORE_TYPE_MODEM)
    return 0;   /* ��׮ */
#endif

#if (defined BSP_CORE_APP)
#if (FEATURE_WIFI == FEATURE_ON)
    return BSP_WifiDataReservedTail(len);
#else
    DRV_PRINTF("Function DRV_WIFI_DATA_RESERVED_TAIL unsupport!\n");
    return 0;
#endif
#endif
#endif
}

/*****************************************************************************
 �� �� ��  : DRV_WIFI_CLR_RX_FCTL
 ��������  : ���WIFI�������ر�ʶ
 �������  : para1��para2
 �������  : ��
 �� �� ֵ  : 1 : ��
             0 : ��
*****************************************************************************/
unsigned int DRV_WIFI_CLR_RX_FCTL(unsigned int para1, unsigned int para2)
{
    return (unsigned int)BSP_ERROR;
#if 0
#if defined (BSP_CORE_MODEM) || defined(PRODUCT_CFG_CORE_TYPE_MODEM)
    return 0;   /* ��׮ */
#endif

#if (defined BSP_CORE_APP)
#if (FEATURE_WIFI == FEATURE_ON)
    return WiFi_DrvClearRxFlowCtrl(para1, para2);
#else
    DRV_PRINTF("Function DRV_WIFI_CLR_RX_FCL unsupport!\n");
    return (unsigned long)BSP_ERROR;
#endif
#endif
#endif
}

/*****************************************************************************
 �� �� ��  : WiFi_DrvSetRxFlowCtrl
 ��������  : ����WIFI�������ر�ʶ
 �������  : para1��para2
 �������  : ��
 �� �� ֵ  : BSP_OK/BSP_ERROR
*****************************************************************************/
unsigned int DRV_WIFI_SET_RX_FCTL(unsigned int para1, unsigned int para2)
{
    return (unsigned int)BSP_ERROR;
#if 0
#if defined (BSP_CORE_MODEM) || defined(PRODUCT_CFG_CORE_TYPE_MODEM)
    return 0;   /* ��׮ */
#endif

#if (defined BSP_CORE_APP)
#if (FEATURE_WIFI == FEATURE_ON)
    return WiFi_DrvSetRxFlowCtrl(para1, para2);
#else
    DRV_PRINTF("Function DRV_WIFI_SET_RX_FCTL unsupport!\n");
    return (unsigned long)BSP_ERROR;
#endif
#endif
#endif
}

/*********************************************************************
  Function��        USB_ETH_DrvSetDeviceAssembleParam
  Description��     TTF���ݵ�ǰCPU����TX������������ӿ�
  Input��           ctx                ��չ������
                    ulEthTxMinNum      TX�������
                    ulEthTxTimeout     TX�����ʱʱ��
                    ulEthRxMinNum      RX�������
                    ulEthRxTimeout     RX�����ʱʱ��
  Output:           NA;
  Return��          UWE_OK
**********************************************************************/
unsigned int USB_ETH_DrvSetDeviceAssembleParam(
                unsigned int ulEthTxMinNum,
                unsigned int ulEthTxTimeout,
                unsigned int ulEthRxMinNum,
                unsigned int ulEthRxTimeout)
{
#if defined (BSP_CORE_MODEM) || defined(PRODUCT_CFG_CORE_TYPE_MODEM)
    return 0;   /* ��׮ */
#endif

#if (defined BSP_CORE_APP)
    return BSP_ERROR;
#endif
}

/*********************************************************************
  Function��        USB_ETH_DrvSetHostAssembleParam
  Description��     TTF���ݵ�ǰCPU����TX������������ӿ�
  Input��           ctx                ��չ������
                    ulHostOutTimeout   �����������ʱ��
                    ulEthTxMinNum      TX�������
                    ulEthTxTimeout     TX�����ʱʱ��
                    ulEthRxMinNum      RX�������
                    ulEthRxTimeout     RX�����ʱʱ��
  Output:           NA;
  Return��          UWE_OK
**********************************************************************/
unsigned int USB_ETH_DrvSetHostAssembleParam(unsigned int ulHostOutTimeout)
{
#if defined (BSP_CORE_MODEM) || defined(PRODUCT_CFG_CORE_TYPE_MODEM)
    return 0;   /* ��׮ */
#endif

#if (defined BSP_CORE_APP)
    return BSP_ERROR;
#endif
}

#if (defined BSP_CORE_APP)
EXPORT_SYMBOL(DRV_WIFI_SET_RX_FCTL);
EXPORT_SYMBOL(DRV_WIFI_CLR_RX_FCTL);
EXPORT_SYMBOL(DRV_WIFI_DATA_RESERVED_TAIL);
EXPORT_SYMBOL(WIFI_TEST_CMD);
EXPORT_SYMBOL(WIFI_GET_TCMD_MODE);
EXPORT_SYMBOL(WIFI_POWER_START);
EXPORT_SYMBOL(WIFI_POWER_SHUTDOWN);
EXPORT_SYMBOL(WIFI_GET_STATUS);
EXPORT_SYMBOL(WIFI_GET_RX_DETAIL_REPORT);
EXPORT_SYMBOL(WIFI_GET_RX_PACKET_REPORT);
EXPORT_SYMBOL(WIFI_GET_PA_CUR_MODE);
EXPORT_SYMBOL(WIFI_GET_PA_MODE);
EXPORT_SYMBOL(WIFI_SET_PA_MODE);
#endif



#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif

