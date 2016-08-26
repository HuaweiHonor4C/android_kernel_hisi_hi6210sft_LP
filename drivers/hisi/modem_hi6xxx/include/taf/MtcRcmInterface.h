/******************************************************************************

                  ��Ȩ���� (C), 2001-2011, ��Ϊ�������޹�˾

 ******************************************************************************
  �� �� ��   : MtcRcmInterface.h
  �� �� ��   : ����
  ��    ��   : ���±�/00174725
  ��������   : 2014��06��16��
  ����޸�   :
  ��������   : MTC��RCM֮��Ľӿ�
  �����б�   :
  �޸���ʷ   :
  1.��    ��   : 2014��06��16��
    ��    ��   : ���±�/00174725
    �޸�����   : �����ļ�

******************************************************************************/

#ifndef __MTCRCMINTERFACE_H__
#define __MTCRCMINTERFACE_H__

/*****************************************************************************
  1 ͷ�ļ�����
*****************************************************************************/
#include "vos.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif

#pragma pack(4)


/*****************************************************************************
  2 �궨��
*****************************************************************************/
#define MTC_RCM_MAX_MODEM_NUM              (MTC_RCM_MODEM_BUTT)                 /* ֧�ֵ����modem���� */


/*****************************************************************************
  3 ö�ٶ���
*****************************************************************************/
/*****************************************************************************
ö����    : MTC_RCM_MSG_ID_ENUM
�ṹ˵��  : MTC��RCM��֮�����Ϣ

  1.��    ��   : 2014��06��16��
    ��    ��   : ���±�/00174725
    �޸�����  :  ����MTC��RCM֮�����Ϣ
*****************************************************************************/
enum MTC_RCM_MSG_ID_ENUM
{
    /* ��Ϣ����: MTC->RCM */
    ID_MTC_RCM_MODEM_STATUS_NOTIFY      = 0x1818,                              /* MTC֪ͨRCM modem����״̬ *//* _H2ASN_MsgChoice MTC_RCM_MODEM_STATE_NOTIFY_STRU */

    /* ��Ϣ����: RCM->MTC */

    ID_MTC_RCM_MSG_ID_ENUM_BUTT

};
typedef VOS_UINT32  MTC_RCM_MSG_ID_ENUM_UINT32;

/*****************************************************************************
ö����    : MTC_RCM_MODEM_TYPE_ENUM
�ṹ˵��  : Modem ID ����

  1.��    ��   : 2014��06��16��
    ��    ��   : ���±�/00174725
    �޸�����  :  ����modem ID
*****************************************************************************/
enum MTC_RCM_MODEM_TYPE_ENUM
{
    MTC_RCM_MODEM_0                     = MODEM_ID_0,
    MTC_RCM_MODEM_1,
    MTC_RCM_MODEM_CDMA,

    MTC_RCM_MODEM_BUTT
};
typedef VOS_UINT16 MTC_RCM_MODEM_TYPE_ENUM_UINT16;


enum MTC_RCM_CONN_STATE_ENUM
{
    MTC_RCM_CONN_NO_EXIST                   = 0x00,                            /* ����������״̬ */
    MTC_RCM_CONN_EXIST                      = 0x01,                            /* ��������״̬ */

    MTC_RCM_CONN_STATE_BUTT
};
typedef VOS_UINT16 MTC_RCM_CONN_STATE_ENUM_UINT16;

/*****************************************************************************
ö����    : MTC_RCM_MODEM_POWER_STATE_ENUM
�ṹ˵��  : ����״̬ö��

  1.��    ��   : 2014��06��16��
    ��    ��   : ���±�/j00174725
    �޸�����   : K3V3 ��ģ����������
*****************************************************************************/
enum MTC_RCM_MODEM_POWER_STATE_ENUM
{
    MTC_RCM_MODEM_POWER_OFF             = 0x00,                                /* �ػ� */
    MTC_RCM_MODEM_POWER_ON              = 0x01,                                /* ���� */

    MTC_RCM_MODEM_POWER_STATE_BUTT
};
typedef VOS_UINT16  MTC_RCM_MODEM_POWER_STATE_ENUM_UINT16;

/*****************************************************************************
ö����    : MTC_RCM_USIMM_CARD_SERVIC_ENUM
�ṹ˵��  : ��״̬

  1.��    ��   : 2014��06��16��
    ��    ��   : ���±�/j00174725
    �޸�����   : K3V3 ��ģ����������
*****************************************************************************/

enum MTC_RCM_USIMM_CARD_SERVIC_ENUM
{
    MTC_RCM_USIMM_CARD_SERVIC_ABSENT        =0,                                 /* �޿� */
    MTC_RCM_USIMM_CARD_SERVIC_UNAVAILABLE   =1,                                 /* �п�,���񲻿��� */
    MTC_RCM_USIMM_CARD_SERVIC_SIM_PIN       =2,                                 /* SIM����������PIN��ԭ�򲻿��� */
    MTC_RCM_USIMM_CARD_SERVIC_SIM_PUK       =3,                                 /* SIM����������PUK��ԭ�򲻿��� */
    MTC_RCM_USIMM_CARD_SERVIC_NET_LCOK      =4,                                 /* SIM������������������ԭ�򲻿��� */
    MTC_RCM_USIMM_CARD_SERVIC_IMSI_LCOK     =5,                                 /* SIM����������IMSI����ԭ�򲻿��� */
    MTC_RCM_USIMM_CARD_SERVIC_AVAILABLE     =6,                                 /* ������� */

    MTC_RCM_USIMM_CARD_SERVIC_BUTT
};
typedef VOS_UINT16      MTC_RCM_USIMM_CARD_SERVIC_ENUM_UINT16;

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

typedef struct
{
    VOS_MSG_HEADER
    VOS_UINT32                          ulMsgName;
}MTC_RCM_MSG_HEADER_STRU;


typedef struct
{
    MTC_RCM_MODEM_TYPE_ENUM_UINT16          enModemType;                        /* MODEM ID */
    MTC_RCM_CONN_STATE_ENUM_UINT16          enCsSrvConnState;                   /* CS����״̬ */
    MTC_RCM_CONN_STATE_ENUM_UINT16          enPsSrvConnState;                   /* PS����״̬ */
    MTC_RCM_MODEM_POWER_STATE_ENUM_UINT16   enModemPowerState;                  /* ���ػ�״̬ */
    MTC_RCM_USIMM_CARD_SERVIC_ENUM_UINT16   enUsimmCardState;                   /* ��״̬ */

    VOS_UINT16                              usRsv;                              /* ����λ */
} MTC_RCM_MODEM_STATE_INFO_STRU;


typedef struct
{
    MTC_RCM_MSG_HEADER_STRU             stMsgHeader;                            /*_H2ASN_Skip*/
    MTC_RCM_MODEM_STATE_INFO_STRU       astModemState[MTC_RCM_MAX_MODEM_NUM];
} MTC_RCM_MODEM_STATE_NOTIFY_STRU;

/*****************************************************************************
  8 UNION����
*****************************************************************************/


/*****************************************************************************
  9 OTHERS����
*****************************************************************************/

/*****************************************************************************
  10 ��������
*****************************************************************************/


/*****************************************************************************
  H2ASN������Ϣ�ṹ����
*****************************************************************************/
typedef struct
{
    MTC_RCM_MSG_ID_ENUM_UINT32          enMsgId;                                /*_H2ASN_MsgChoice_Export MTC_RCM_MSG_ID_ENUM_UINT32*/
    VOS_UINT8                           aucMsgBlock[4];
    /***************************************************************************
        _H2ASN_MsgChoice_When_Comment          MTC_RCM_MSG_ID_ENUM_UINT32
    ****************************************************************************/
}MTC_RCM_MSG_DATA;
/*_H2ASN_Length UINT32*/

typedef struct
{
    VOS_MSG_HEADER
    MTC_RCM_MSG_DATA                    stMsgData;
}MtcRcmInterface_MSG;

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

#endif


