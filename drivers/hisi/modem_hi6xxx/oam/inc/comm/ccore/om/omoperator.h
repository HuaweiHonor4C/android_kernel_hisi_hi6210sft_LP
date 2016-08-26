/******************************************************************************

                  ��Ȩ���� (C), 2001-2011, ��Ϊ�������޹�˾

 ******************************************************************************
  �� �� ��   : OmOperator.h
  �� �� ��   : ����
  ��    ��   : ����47350
  ��������   : 2009��10��27��

  ����޸�   :
  ��������   : OmOperator.c ��ͷ�ļ�
  �����б�   :
  �޸���ʷ   :
  1.��    ��   : 2009��10��27��
    ��    ��   : ����47350
    �޸�����   : �����ļ�

******************************************************************************/

#ifndef __OM_OPERATOR_H__
#define __OM_OPERATOR_H__

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/

#include "vos.h"
#include "omprivate.h"

#pragma pack(4)

/*****************************************************************************
  2 �궨��
*****************************************************************************/


/*****************************************************************************
  3 ö�ٶ���
*****************************************************************************/
enum LMT_RAT_MODE
{
    LMT_RAT_WCDMA = 0,
    LMT_RAT_GSM,
    LMT_RAT_BUTT
};

enum OM_MODEM_MODE
{
    OM_MODEM_TYPE_0 = 0,
    OM_MODEM_TYPE_1,
    OM_MODEM_TYPE_2,
    OM_MODEM_BUTT
};

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
extern VOS_VOID     OM_RfMsgProc(OM_REQ_PACKET_STRU *pRspPacket, OM_RSP_FUNC *pRspFuncPtr);
extern VOS_UINT32   MMA_GetOperatorLockPwd(VOS_UINT8 *pucPwd);
extern VOS_UINT32   AT_ResumeOm2AtMode(VOS_VOID);
extern VOS_UINT32   MMA_VerifyOperatorLockPwd(VOS_UINT8 *pucPwd);


extern VOS_UINT32 OM_ReadNv(APP_OM_MSG_EX_STRU *pstAppToOmMsg, VOS_UINT16 usReturnPrimId);

extern VOS_UINT32 OM_WriteNv(APP_OM_MSG_EX_STRU *pstAppToOmMsg, VOS_UINT16 usReturnPrimId);

extern VOS_UINT32 OM_SysCtrlCmd(OM_LOGIC_CHANNEL_ENUM_UINT32 enChannel, VOS_UINT16 usClientId, VOS_UINT32 ulMode, MODEM_ID_ENUM_UINT16 enModemID);

extern VOS_UINT32 OM_SetFTMReq(APP_OM_MSG_EX_STRU *pstAppToOmMsg,VOS_UINT16 usReturnPrimId);

extern VOS_UINT32 OM_QueryModemNumReq(APP_OM_MSG_EX_STRU *pstAppToOmMsg,VOS_UINT16 usReturnPrimId);

extern VOS_VOID   OM_RfMsgProc(OM_REQ_PACKET_STRU *pRspPacket, OM_RSP_FUNC *pRspFuncPtr);

extern VOS_VOID   OM_MsgProc(MsgBlock* pMsg);

extern VOS_VOID   OM_ConfigMsgProc(OM_REQ_PACKET_STRU *pRspPacket, OM_RSP_FUNC *pRspFuncPtr);

#if ((VOS_OS_VER == VOS_WIN32) || (VOS_OS_VER == VOS_NUCLEUS))
#pragma pack()
#else
#pragma pack(0)
#endif


#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif /* end of OmOpeator.h */

