/******************************************************************************

                  ��Ȩ���� (C), 2001-2011, ��Ϊ�������޹�˾

 ******************************************************************************
  �� �� ��   : drv_sci.c
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


#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif

/*****************************************************************************
  2 ��������
*****************************************************************************/
#if defined (BSP_CORE_MODEM) || defined(PRODUCT_CFG_CORE_TYPE_MODEM)
extern BSP_S32 BSP_SCI_SendData(BSP_U32 u32DataLength, BSP_U8 *pu8DataBuffer);
extern BSP_S32 BSP_SCI_ReceiveSync(BSP_U32 u32Length,BSP_U8 *pu8Data);
extern BSP_S32 BSP_SCI_GetATR (unsigned long *u32DataLength, BSP_U8 *pu8ATR,SCI_ATRInfo *sciATRInfo);
extern BSP_S32 BSP_SCI_ClassSwitch();
extern BSP_VOID BSP_SCI_TimeStop(BSP_U32 ulStopType);
#endif

/*****************************************************************************
  3 ����ʵ��
*****************************************************************************/

#if 0 /* �л�DSDA�󣬶���ӿ�ͳһ��DrvInterface.h�ж��� */
/*****************************************************************************
* �� �� ��  : DRV_USIMMSCI_SND_DATA
*
* ��������  : ���ӿ����ڷ���һ�����ݵ�USIM��
*
* �������  : BSP_U32 u32DataLength �������ݵ���Ч���ȡ�ȡֵ��Χ1��256����λΪ�ֽ�
*             BSP_U8 *pu8DataBuffer �������������ڴ���׵�ַ�����Ƕ�̬���䣬���ýӿ�
*                                   ���������ͷţ�������Ӳ����������
* �������  : ��
*
* �� �� ֵ  : OK
*           BSP_ERR_SCI_NOTINIT
*           BSP_ERR_SCI_INVALIDPARA
*           BSP_ERR_SCI_DISABLED
*           BSP_ERR_SCI_NOCARD
*           BSP_ERR_SCI_NODATA
*
* �޸ļ�¼  : 2009��6��29��   liumengcun  creat
*
*****************************************************************************/
BSP_S32 DRV_USIMMSCI_SND_DATA(BSP_U32 u32DataLength, BSP_U8 *pu8DataBuffer)
{
#if defined (BSP_CORE_MODEM) || defined(PRODUCT_CFG_CORE_TYPE_MODEM)
    return BSP_SCI_SendData(u32DataLength,pu8DataBuffer);
#endif

#if (defined BSP_CORE_APP)
    return 0;   /* ��׮ */
#endif
}

/*****************************************************************************
* �� �� ��  : DRV_USIMMSCI_RCV
*
* ��������  : ���ӿ�����USIM Manager��ȡ����SCI Driver�Ŀ���������
*             �ýӿ�Ϊ�����ӿڣ�ֻ��SCI���յ��㹻����������Ż᷵�أ�
*             �ýӿڵĳ�ʱ����Ϊ1s
*
* �������  : BSP_U32 u32DataLength USIM Manager����SCI Driver��ȡ�����ݳ��ȡ�
* �������  : BSP_U8 *pu8DataBuffer USIM Managerָ����Buffer��SCI Driver�����ݿ�������Buffer��
* �� �� ֵ  : OK
*             BSP_ERR_SCI_NOTINIT
*             BSP_ERR_SCI_INVALIDPARA
*
* �޸ļ�¼  : 2009��6��29��   liumengcun  creat
*
*****************************************************************************/

BSP_S32 DRV_USIMMSCI_RCV(BSP_U32 u32Length,BSP_U8 *pu8Data)
{
#if defined (BSP_CORE_MODEM) || defined(PRODUCT_CFG_CORE_TYPE_MODEM)
    return BSP_SCI_ReceiveSync(u32Length,pu8Data);
#endif

#if (defined BSP_CORE_APP)
    return 0;   /* ��׮ */
#endif
}

/*****************************************************************************
* �� �� ��  : DRV_USIMMSCI_GET_ATR
*
* ��������  : ���ӿ����ڽ�Driver�㻺���ATR���ݺ����ݸ������ظ�USIM Manager��
*
* �������  : BSP_VOID
* �������  : unsigned long *u8DataLength  Driver��ȡ��ATR���ݳ��ȣ����ظ�USIM Manager��
*                                   ȡֵ��Χ0��32����λ���ֽ�
*           BSP_U8 *pu8ATR          USIM Managerָ����Buffer��SCI Driver��ATR
*                                   ���ݿ�������Buffer��һ��Ϊ����ϵͳ������̬����
*                                   ���߾�̬����ĵ�ַ
*
*
* �� �� ֵ  : OK
*          BSP_ERR_SCI_NOTINIT
*          BSP_ERR_SCI_INVALIDPARA
*
* �޸ļ�¼  : 2009��6��29��   liumengcun  creat
*
*****************************************************************************/
BSP_S32 DRV_USIMMSCI_GET_ATR(unsigned long *u32DataLength, BSP_U8 *pu8ATR)
{
#if defined (BSP_CORE_MODEM) || defined(PRODUCT_CFG_CORE_TYPE_MODEM)
    return BSP_SCI_GetATR(u32DataLength, pu8ATR);
#endif

#if (defined BSP_CORE_APP)
    return 0;   /* ��׮ */
#endif
}

/*****************************************************************************
* �� �� ��  : DRV_USIMMSCI_CLASS_SWITCH
*
* ��������  : ���ӿ�����֧��PS�Կ��ĵ�ѹ���ͽ����л�����1.8V�л���3V
*
* �������  : BSP_VOID
* �������  : ��
*
* �� �� ֵ  :  OK    ��ǰ��ѹ������ߵģ����е�ѹ�л�����
*           BSP_ERR_SCI_CURRENT_STATE_ERR �л�ʧ�� current SCI driver state is ready/rx/tx
*           BSP_ERR_SCI_VLTG_HIGHEST   ��ǰ��ѹ�Ѿ�����ߵ�ѹ��û�н��е�ѹ�л�
*           BSP_ERR_SCI_NOTINIT
*           BSP_ERR_SCI_CURRENT_VLTG_ERR ��ǰ��ѹֵ�쳣����class B����C��
*
* �޸ļ�¼  : 2009��6��29��   liumengcun  creat
*
*****************************************************************************/
BSP_S32 DRV_USIMMSCI_CLASS_SWITCH(BSP_VOID)
{
#if defined (BSP_CORE_MODEM) || defined(PRODUCT_CFG_CORE_TYPE_MODEM)
    return BSP_SCI_ClassSwitch();
#endif

#if (defined BSP_CORE_APP)
    return 0;   /* ��׮ */
#endif
}

/*****************************************************************************
* �� �� ��  : DRV_USIMMSCI_TM_STOP
*
* ��������  : ���ӿ�����֧��PS�ر�SIM��ʱ��
*
* �������  :
*           SCI_CLK_STOP_TYPE_E enTimeStopCfg ʱ��ֹͣģʽ
*
* �������  : ��
*
* �� �� ֵ  : OK - successful completion
*               ERROR - failed
*               BSP_ERR_SCI_NOTINIT
*               BSP_ERR_SCI_INVALIDPARA - invalid mode specified
*               BSP_ERR_SCI_UNSUPPORTED - not support such a operation
* �޸ļ�¼  : 2009��6��29��   liumengcun  creat
*
*****************************************************************************/
BSP_S32 DRV_USIMMSCI_TM_STOP(BSP_U32 ulStopType)
{
#if defined (BSP_CORE_MODEM) || defined(PRODUCT_CFG_CORE_TYPE_MODEM)
    return BSP_SCI_TimeStop(ulStopType);
#endif

#if (defined BSP_CORE_APP)
    return 0;   /* ��׮ */
#endif
}
#endif


#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif

