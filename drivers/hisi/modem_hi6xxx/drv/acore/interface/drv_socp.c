/******************************************************************************

                  ��Ȩ���� (C), 2001-2011, ��Ϊ�������޹�˾

 ******************************************************************************
  �� �� ��   : drv_socp.c
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
#if (defined BSP_CORE_APP)
extern BSP_U32 BSP_SOCP_SLEEPIN(BSP_U32 *pu32SrcChanID, BSP_U32 uSrcChanNum, BSP_U32 *pu32DstChanID, BSP_U32 uDstChanNum);
extern BSP_U32 BSP_SOCP_SLEEPOUT(BSP_U32 *pu32SrcChanID, BSP_U32 uSrcChanNum, BSP_U32 *pu32DstChanID, BSP_U32 uDstChanNum);
#endif

/*****************************************************************************
  3 ����ʵ��
*****************************************************************************/

/*****************************************************************************
 �� �� ��  : DRV_SOCP_SLEEPIN
 ��������  : SOCP����˯��
 �������  : pu32SrcChanID:����Դͨ��ID�б�
             uSrcChanNum:  ����Դͨ������
             pu32DstChanID:����Ŀ��ͨ��ID�б�
             uSrcChanNum:  ����Ŀ��ͨ������
 �������  : �ޡ�
 �� �� ֵ  : SOCP_OK:����˯�߳ɹ���
             ����:   ����˯��ʧ��
*****************************************************************************/
BSP_U32 DRV_SOCP_SLEEPIN(BSP_U32 *pu32SrcChanID, BSP_U32 uSrcChanNum, BSP_U32 *pu32DstChanID, BSP_U32 uDstChanNum)
{
    
#if defined (BSP_CORE_MODEM) || defined(PRODUCT_CFG_CORE_TYPE_MODEM)
    return 0;   /* ��׮ */
#if 0
#ifdef BSP_COMPILE_ALLY
    return BSP_SOCP_SleepIn(pu32SrcChanID, uSrcChanNum, pu32DstChanID, uDstChanNum);
#else
    return 0;
#endif
#endif
#endif

#if (defined BSP_CORE_APP)
    BSP_SOCP_SLEEPIN(pu32SrcChanID, uSrcChanNum, pu32DstChanID, uDstChanNum);
    return 0;
#endif
}



/*****************************************************************************
 �� �� ��  : DRV_SOCP_SLEEPOUT
 ��������  : SOCP�˳�˯��
 �������  : pu32SrcChanID:����Դͨ��ID�б�
             uSrcChanNum:  ����Դͨ������
             pu32DstChanID:����Ŀ��ͨ��ID�б�
             uSrcChanNum:  ����Ŀ��ͨ������
 �������  : �ޡ�
 �� �� ֵ  : SOCP_OK:����˯�߳ɹ���
             ����:   ����˯��ʧ��
*****************************************************************************/
BSP_U32 DRV_SOCP_SLEEPOUT(BSP_U32 *pu32SrcChanID, BSP_U32 uSrcChanNum, BSP_U32 *pu32DstChanID, BSP_U32 uDstChanNum)
{
#if defined (BSP_CORE_MODEM) || defined(PRODUCT_CFG_CORE_TYPE_MODEM)
    return 0;   /* ��׮ */
#if 0
#ifdef BSP_COMPILE_ALLY
    return BSP_SOCP_SleepOut(pu32SrcChanID, uSrcChanNum, pu32DstChanID, uDstChanNum);
#else
    return 0;
#endif
#endif
#endif

#if (defined BSP_CORE_APP)
    BSP_SOCP_SLEEPOUT(pu32SrcChanID, uSrcChanNum, pu32DstChanID, uDstChanNum);
    return 0;
#endif
}




#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif

