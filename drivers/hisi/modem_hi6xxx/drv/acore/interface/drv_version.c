/******************************************************************************

                  ��Ȩ���� (C), 2001-2011, ��Ϊ�������޹�˾

 ******************************************************************************
  �� �� ��   : drv_version.c
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
#include "board_diff.h"
#include "sys_config.h"
#endif

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif

/*****************************************************************************
  2 ��������
*****************************************************************************/
#if defined(BSP_CORE_MODEM) || defined(PRODUCT_CFG_CORE_TYPE_MODEM)
extern BSP_VOID WriteChipVersion(BSP_U32 ulAddress, BSP_U32 ucType);
#endif

/*****************************************************************************
  3 ����ʵ��
*****************************************************************************/

/*****************************************************************************
 �� �� ��  : mdrv_misc_support_check
 ��������  : ��ѯģ���Ƿ�֧��
 �������  : enModuleType: ��Ҫ��ѯ��ģ������
 �������  : ��
 ����ֵ    ��BSP_MODULE_SUPPORT��BSP_MODULE_UNSUPPORT
*****************************************************************************/
BSP_MODULE_SUPPORT_E mdrv_misc_support_check(BSP_MODULE_TYPE_E enModuleType)
{
    BSP_MODULE_SUPPORT_E enRet = BSP_MODULE_SUPPORT;

    switch(enModuleType)
    {
        case BSP_MODULE_TYPE_LOCALFLASH:

            enRet = BSP_MODULE_SUPPORT;

            break;
        default:
            enRet = BSP_MODULE_UNSUPPORT;
            break;
    }

    return enRet;
}

void mdrv_ver_init_platform(BSP_VOID)
{
    return;
}

int mdrv_ver_get_memberinfo(void ** ppVersionInfo, unsigned int * ullength )
{
	return 0;
}




#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif

