/******************************************************************************

                  ��Ȩ���� (C), 2001-2011, ��Ϊ�������޹�˾

 ******************************************************************************
  �� �� ��   : drv_sec.c
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
extern int BSP_SEC_AlreadyUse(UINT8* pData);
extern int BSP_SEC_Start(void);
#endif

/*****************************************************************************
  3 ����ʵ��
*****************************************************************************/

/*************************************************
 �� �� ��       : DRV_SECURE_SUPPORT
 ��������   : ��ǰ�汾�Ƿ�֧�ְ�ȫ����
 �������   : unsigned char *pData
 �������   : unsigned char *pData
 �� �� ֵ      : OK/ERROR
*************************************************/
BSP_S32 DRV_SECURE_SUPPORT(BSP_U8 *pu8Data)
{
    return 0;
}

/*************************************************
 �� �� ��       : DRV_SECURE_ALREADY_USE
 ��������   : ��ѯ��ǰ�汾�Ƿ��Ѿ����ð�ȫ����
 �������   : unsigned char *pData
 �������   : unsigned char *pData
 �� �� ֵ      : OK/ERROR
*************************************************/
BSP_S32 DRV_SECURE_ALREADY_USE(BSP_U8 *pu8Data)
{
#if defined (BSP_CORE_MODEM) || defined(PRODUCT_CFG_CORE_TYPE_MODEM)
    return BSP_SEC_AlreadyUse(pu8Data);
#endif

#if (defined BSP_CORE_APP)
    return 0;   /* ��׮ */
#endif
}

/*************************************************
 �� �� ��       : DRV_START_SECURE
 ��������   : ���ð�ȫ����
 �������   :
 �������   :
 �� �� ֵ      : OK/ERROR
*************************************************/
BSP_S32 DRV_START_SECURE(void)
{
#if defined (BSP_CORE_MODEM) || defined(PRODUCT_CFG_CORE_TYPE_MODEM)
    return BSP_SEC_Start();
#endif

#if (defined BSP_CORE_APP)
    return 0;   /* ��׮ */
#endif
}
BSP_U32 DRV_SEC_CHECK(void)
{
    return 0;
}



#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif

