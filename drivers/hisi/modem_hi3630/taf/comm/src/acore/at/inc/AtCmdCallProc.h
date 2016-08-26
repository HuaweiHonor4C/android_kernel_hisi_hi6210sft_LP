/******************************************************************************

                  ��Ȩ���� (C), 2001-2011, ��Ϊ�������޹�˾

 ******************************************************************************
  �� �� ��   : AtCmdCallProc.h
  �� �� ��   : ����
  ��    ��   : 
  ��������   : 2013��3��13��
  ����޸�   :
  ��������   : AtCmdCallProc.c ��ͷ�ļ�
  �����б�   :
  �޸���ʷ   :
  1.��    ��   : 2013��3��13��
    ��    ��   : 
    �޸�����   : �����ļ�

******************************************************************************/

#ifndef __ATCMDCALLPROC_H__
#define __ATCMDCALLPROC_H__

/*****************************************************************************
  1 ����ͷ�ļ�����                            
*****************************************************************************/
#include "AtCtx.h"
#include "AtParse.h"
/* Added by l60609 for CDMA 1X Iteration 2, 2014-9-5, begin */
#include "AtMnInterface.h"
/* Added by l60609 for CDMA 1X Iteration 2, 2014-9-5, end */

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


#pragma pack(4)

/*****************************************************************************
  2 �궨�� 
*****************************************************************************/

#define AT_CALL_D_GI_PARA_LEN                          (2)

/*****************************************************************************
  3 ö�ٶ��� 
*****************************************************************************/


/*****************************************************************************
  4 ȫ�ֱ�������
*****************************************************************************/


/*****************************************************************************
  5 ��Ϣͷ����
*****************************************************************************/


/*****************************************************************************
  6 ��Ϣ����
*****************************************************************************/


/*****************************************************************************
  7 STRUCT����
*****************************************************************************/


/*****************************************************************************
  8 UNION����
*****************************************************************************/


/*****************************************************************************
  9 OTHERS����
*****************************************************************************/


/*****************************************************************************
  10 ��������
*****************************************************************************/
#if (FEATURE_ON == FEATURE_ECALL)
VOS_UINT32 AT_SetCecallPara(VOS_UINT8 ucIndex);
VOS_UINT32 AT_QryCecallPara(VOS_UINT8 ucIndex);
VOS_UINT32 AT_SetEclstartPara(VOS_UINT8 ucIndex);
VOS_UINT32 AT_TestEclstartPara(VOS_UINT8 ucIndex);
VOS_UINT32 AT_SetEclstopPara(VOS_UINT8 ucIndex);
VOS_UINT32 AT_SetEclcfgPara(VOS_UINT8 ucIndex);
VOS_UINT32 AT_QryEclcfgPara(VOS_UINT8 ucIndex);
VOS_UINT32 AT_SetEclmsdPara(VOS_UINT8 ucIndex);
VOS_UINT32 AT_QryEclmsdPara(VOS_UINT8 ucIndex);
VOS_UINT32 AT_TestEclmsdPara(VOS_UINT8 ucIndex);
#endif

VOS_UINT32 At_RcvVcMsgDtmfDecoderIndProc(
    MN_AT_IND_EVT_STRU                 *pstData
);

/* Added by l60609 for CDMA 1X Iteration 2, 2014-9-5, begin */
VOS_UINT32 AT_SetHflashPara(VOS_UINT8 ucIndex);
VOS_UINT32 AT_RcvTafCallSndFlashCnf(
    MN_AT_IND_EVT_STRU                 *pEvtInfo
);
VOS_UINT32 AT_RcvTafCallSndFlashRslt(
    MN_AT_IND_EVT_STRU                 *pEvtInfo
);

/* Added by l60609 for CDMA 1X Iteration 2, 2014-9-5, end */



#if (VOS_OS_VER == VOS_WIN32)
#pragma pack()
#else
#pragma pack(0)
#endif




#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif /* end of AtCmdCallProc.h */
