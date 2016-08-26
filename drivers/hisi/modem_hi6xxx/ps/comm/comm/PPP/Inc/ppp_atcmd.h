/************************************************************************
  Copyright    : 2005-2007, Huawei Tech. Co., Ltd.
  File name    : ppp_atcmd.h
  Author       : ---
  Version      : V200R001
  Date         : 2005-11-18
  Description  : ��ͷ�ļ�ΪATģ��"����PPP��·"��"�ͷ�PPP��·"��
                  "PPPģ���������ָʾ��������Ϣ"�ṩ�Ķ�ӦAPI�����ṩ
                  ������˵����

  Function List:
        ---
        ---
        ---
  History      :
  1. Date:2005-11-18
     Author: ---fanzhibin 49086
     Modification:Create
  2.��    ��   : 2006��08��09��
    ��    ��   : ����Ƽj60010247
    �޸�����   : ���ⵥA32D03479����PC����ʵ��ʱ��#pragma pack(0)��#pragma pack()�ӱ��뿪��
 ************************************************************************/

#include "vos.h"
#include "PppInterface.h"

#pragma pack(4)

extern VOS_UINT32 PPP_ProcTeConfigInfo (VOS_UINT16 usPppId, PPP_REQ_CONFIG_INFO_STRU *pPppReqConfigInfo);
extern VOS_UINT32 PPP_ProcPppRelEvent (VOS_UINT16 usPppId);
extern VOS_UINT32 PPP_ProcPppDisconnEvent (VOS_UINT16 usPppId);
extern VOS_UINT32 Ppp_SndPPPDisconnIndtoAT(VOS_UINT16 usPppId);
#if ((VOS_OS_VER == VOS_WIN32) || (VOS_OS_VER == VOS_NUCLEUS))
#pragma pack()
#else
#pragma pack(0)
#endif

