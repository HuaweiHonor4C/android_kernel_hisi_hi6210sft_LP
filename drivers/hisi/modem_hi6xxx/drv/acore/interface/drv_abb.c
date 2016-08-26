/******************************************************************************

                  ��Ȩ���� (C), 2001-2011, ��Ϊ�������޹�˾

 ******************************************************************************
  �� �� ��   : drv_abb.c
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
#if defined(BSP_CORE_MODEM) || defined(PRODUCT_CFG_CORE_TYPE_MODEM)
extern BSP_S32 BSP_ABB_RegGet( BSP_U32 regAddr, BSP_U32 * getData );
extern BSP_S32 BSP_ABB_RegSet( BSP_U32 regAddr, BSP_U32 setData );
#endif

/*****************************************************************************
  3 ����ʵ��
*****************************************************************************/


int DRV_ABB_REG_GET(unsigned int regAddr, unsigned int * getData)
{
#if defined (BSP_CORE_MODEM) || defined(PRODUCT_CFG_CORE_TYPE_MODEM)
    return BSP_ABB_RegGet(regAddr, getData);
#endif

#if (defined BSP_CORE_APP)
    return 0;   /* ��׮ */
#endif
}
int DRV_ABB_REG_SET(unsigned int regAddr, unsigned int setData)
{
#if defined (BSP_CORE_MODEM) || defined(PRODUCT_CFG_CORE_TYPE_MODEM)
    return BSP_ABB_RegSet(regAddr, setData);
#endif

#if (defined BSP_CORE_APP)
    return 0;   /* ��׮ */
#endif
}
int DRV_AUX_ABB_REG_SET(unsigned int regAddr, unsigned int setData)
{
#if defined (BSP_CORE_MODEM) || defined(PRODUCT_CFG_CORE_TYPE_MODEM)
    return BSP_OK;  /* temp tub��for RF6361 */
#endif

#if (defined BSP_CORE_APP)
    return 0;   /* ��׮ */
#endif
}


int DRV_AUX_ABB_REG_GET(unsigned int regAddr, unsigned int * getData)
{
#if defined (BSP_CORE_MODEM) || defined(PRODUCT_CFG_CORE_TYPE_MODEM)
    return BSP_OK;  /* temp tub��for RF6361 */
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

