#ifndef  __STA_TAFM_H__
#define  __STA_TAFM_H__

#include "vos.h"
#include "TafAppMma.h"

/*===========================================================================*/

/*****************************************************************************
*  Copyright (C), 2004-2005, Huawei Tech. Co., Ltd.                         *
*                                                                           *
*  FileName: sta_tafm.h                                                     *
*                                                                           *
*  Author:   Roger     Version :   1.00     Date:  2005.3.30                *
*                                                                           *
*  Description:      ģ������                                             *
*    MAPS1000 STATUS ģ��TAFM�ⲿ���ýӿ�˵���ļ�                           *
*                                                                           *
*  Version:          �汾��Ϣ                                             *
*    MAPS1000 V100R001                                                      *
*                                                                           *
*  Function List:    ��Ҫ�������书��                                     *
*                                                                           *
*  History:          ��ʷ�޸ļ�¼                                         *
*      <author>  <time>   <version >   <desc>                               *
*      Roger    050330     1.0     build this file                        *
*                                                                           *
   1.��    ��  : 2006��12��4��
     ��    ��  : luojian id:60022475
     �޸�����  : ���� #pragma pack(4)�����ⵥ��:A32D07779
*****************************************************************************/


/*****************************************************************************/
#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif

/*=================================================================*/
#pragma pack(4)
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
/*----------------------  �������� ----------------------*/
/*=======================================================*/
/*=======================================================*/


/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
/*----------------  �ӿڲ������ݽṹ���� ----------------*/
/*=======================================================*/
/*--------- Sta_PhoneStart �ӿڲ����ṹ -------*/


/*--------- Sta_SoftReset �ӿڲ����ṹ --------*/
#define     STA_PH_RESET_ALL        0   /* ��������ģ�� */
#define     STA_PH_RESET_FSM        1   /* ״̬����λ */
#define     STA_PH_RESET_FLAG       2   /* ״̬����־��λ */
#define     STA_PH_RESET_DATA       3   /* ����ȫ�����ݸ�λ */
#define     STA_PH_RESET_INIT       4   /* Э��ջ��ʼ������ */

/*=======================================================*/


/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
/*----------- STATUS ��TAFM�ṩ��API�ӿں��� ------------*/
/*=======================================================*/


/*--------------- PLMN��������  ---------------*/
VOS_UINT32 Sta_PlmnList ( VOS_UINT32 ulOpID );

/*------------- PLMN����������ֹ --------------*/
VOS_UINT32 Sta_PlmnListAbort ( VOS_UINT32 ulOpID );

/*------------ PLMN��ѡ���Զ�ģʽ��------------*/
VOS_UINT32 Sta_PlmnReselectAuto ( VOS_UINT32 ulOpID );

/*------------ PLMN��ѡ���ֶ�ģʽ��------------*/
VOS_UINT32 Sta_PlmnReselectManual ( VOS_UINT32 ulOpID );

/*--------------- ѡ��ָ����PLMN --------------*/
VOS_UINT32 Sta_PlmnSelect ( VOS_UINT32 ulOpID, TAF_PLMN_ID_STRU PlmnId, TAF_PH_RA_MODE AccessMode, VOS_UINT8 ucReselMode);

/*------ ���ϲ�Ӧ�÷���Э��ջ��Ϣ�Ľӿ� -------*/

/* Sta_MsgInd�����ƶ�λ�� */

 /*-------------- DETACH�������� --------------*/
VOS_UINT32 Sta_Detach ( VOS_UINT32 ulOpID, VOS_UINT32 uDetachCause, TAF_MMA_DETACH_CAUSE_ENUM_UINT8     enDetachCause);

 /*------------- ATTACH�������� ---------------*/

VOS_UINT32 Sta_Attach ( VOS_UINT32 ulOpID, VOS_UINT32 uAttatchType, TAF_MMA_EPS_ATTACH_REASON_ENUM_UINT8 enAttachReason);

 /*------- STATUS��ʱ����ʱ�¼�������� -------*/
VOS_UINT32 Sta_TimeoutProc ( REL_TIMER_MSG *pMsg );

 /*---------- STATUSģ�������λ���� ----------*/
VOS_UINT32 Sta_SoftReset ( VOS_UINT8 ucResetMode );

/*=======================================================*/

/*=================================================================*/
#if ((VOS_OS_VER == VOS_WIN32) || (VOS_OS_VER == VOS_NUCLEUS))
#pragma pack()
#else
#pragma pack(0)
#endif

#ifdef  __cplusplus
  #if  __cplusplus
  }
  #endif
#endif

/*****************************************************************************/

/*===========================================================================*/
#endif      /* __STA_TAFM_H__*/

/***** End of the file *****/
