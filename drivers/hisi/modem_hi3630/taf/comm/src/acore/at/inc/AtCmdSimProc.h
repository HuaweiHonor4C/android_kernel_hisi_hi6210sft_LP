/******************************************************************************

                  ��Ȩ���� (C), 2001-2011, ��Ϊ�������޹�˾

 ******************************************************************************
  �� �� ��   : AtCmdSimProc.h
  �� �� ��   : ����
  ��    ��   :
  ��������   : 2013��3��13��
  ����޸�   :
  ��������   : AtCmdSimProc.c ��ͷ�ļ�
  �����б�   :
  �޸���ʷ   :
  1.��    ��   : 2013��3��13��
    ��    ��   :
    �޸�����   : �����ļ�

******************************************************************************/

#ifndef __ATCMDSIMROC_H__
#define __ATCMDSIMPROC_H__

/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/
#include "AtCtx.h"
#include "AtParse.h"
#include "ATCmdProc.h"
#include "TafNvInterface.h"
#include "siapppih.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


#pragma pack(4)

/*****************************************************************************
  2 �궨��
*****************************************************************************/


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
extern VOS_UINT32 At_Base16Decode(VOS_CHAR *pcData, VOS_UINT32 ulDataLen, VOS_UINT8* pucDst);
extern VOS_UINT16 At_Hex2Base16(VOS_UINT32 MaxLength,VOS_CHAR *headaddr,VOS_CHAR *pucDst,VOS_UINT8 *pucSrc,VOS_UINT16 usSrcLen);

#if (FEATURE_ON == FEATURE_VSIM)
extern VOS_UINT32 At_SetHvsDHPara(VOS_UINT8 ucIndex);
extern VOS_UINT32 At_QryHvsDHPara(VOS_UINT8 ucIndex);
extern VOS_UINT32 At_TestHvsDHPara(VOS_UINT8 ucIndex);
extern VOS_UINT32 At_QryHvsContPara(VOS_UINT8 ucIndex);
extern VOS_UINT32 At_SetHvsstPara(VOS_UINT8 ucIndex);
extern VOS_UINT32 At_QryHvsstPara(VOS_UINT8 ucIndex);
extern VOS_UINT32 At_TestHvsstPara(VOS_UINT8 ucIndex);
extern VOS_UINT32 At_DealRSFWVsim(VOS_UINT8 ucIndex);
extern VOS_UINT32 At_SetHvpDHPara(VOS_UINT8 ucIndex);
extern VOS_UINT32 At_TestHvpDHPara(VOS_UINT8 ucIndex);
extern VOS_UINT16 At_HvsstQueryCnf(SI_PIH_EVENT_INFO_STRU *pstEvent);
extern VOS_UINT16 At_HvsContQueryCnf(SI_PIH_EVENT_INFO_STRU *pstEvent);
extern VOS_UINT16 AT_HvsDHQueryCnf(SI_PIH_EVENT_INFO_STRU *pstEvent);
#endif

extern VOS_UINT16 AT_UiccAuthCnf(TAF_UINT8 ucIndex,SI_PIH_EVENT_INFO_STRU *pstEvent);
extern VOS_UINT16 AT_UiccAccessFileCnf(TAF_UINT8 ucIndex,SI_PIH_EVENT_INFO_STRU *pstEvent);



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

#endif /* end of AtCmdSimProc.h */
