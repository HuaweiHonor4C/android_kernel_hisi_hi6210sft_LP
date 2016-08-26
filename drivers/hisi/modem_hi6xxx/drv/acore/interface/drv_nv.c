/******************************************************************************

                  ��Ȩ���� (C), 2001-2011, ��Ϊ�������޹�˾

 ******************************************************************************
  �� �� ��   : drv_nv.c
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
extern int BSP_COPY_NVUSE_TO_NVBACKUP ( void );
extern int BSP_COPY_NVUPGRADE_TO_NVUSE( void );
#endif

/*****************************************************************************
  3 ����ʵ��
*****************************************************************************/


int DRV_COPY_NVUSE_TO_NVBACKUP ( void )
{
#if defined(BSP_CORE_MODEM) || defined(PRODUCT_CFG_CORE_TYPE_MODEM)    
    return BSP_COPY_NVUSE_TO_NVBACKUP();
#endif

#if (defined BSP_CORE_APP)
    return 0;   /* ��׮ */
#endif
}
int DRV_COPY_NVUPGRADE_TO_NVUSE( void )
{
#if defined(BSP_CORE_MODEM) || defined(PRODUCT_CFG_CORE_TYPE_MODEM)
    return BSP_COPY_NVUPGRADE_TO_NVUSE();
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

