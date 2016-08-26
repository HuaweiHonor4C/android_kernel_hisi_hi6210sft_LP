/******************************************************************************

                  ��Ȩ���� (C), 2001-2011, ��Ϊ�������޹�˾

 ******************************************************************************
  �� �� ��   : AdsInterface.h
  �� �� ��   : ����
  ��    ��   : ³��/l60609
  ��������   : 2011��12��6��
  ����޸�   :
  ��������   : ADS�����ṩ�Ľӿ�
  �����б�   :
  �޸���ʷ   :
  1.��    ��   : 2011��12��6��
    ��    ��   : ³��/l60609
    �޸�����   : �����ļ�

******************************************************************************/

#ifndef __ADSINTERFACE_H__
#define __ADSINTERFACE_H__

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


/*****************************************************************************
  3 ö�ٶ���
*****************************************************************************/

/*****************************************************************************
ö����    : ADS_MSG_ID_ENUM
ö��˵��  : ADS��ϢID

  1.��    ��   : 2011��12��6��
    ��    ��   : ³��/l60609
    �޸�����   : ����ADS��ϢID
*****************************************************************************/
enum ADS_MSG_ID_ENUM
{
    /* PDP״̬��Ϣ*/
    ID_APS_ADS_PDP_STATUS_IND,                                                  /* _H2ASN_MsgChoice ADS_PDP_STATUS_IND_STRU */

    /* CCPU��λǰ��ADS����Ϣָʾ */
    ID_ADS_CCPU_RESET_START_IND         = 0x1001,                               /* _H2ASN_MsgChoice ADS_CCPU_RESET_IND_STRU */

    /* CCPU��λ���ADS����Ϣָʾ */
    ID_ADS_CCPU_RESET_END_IND           = 0x1002,                               /* _H2ASN_MsgChoice ADS_CCPU_RESET_IND_STRU */

    ID_ADS_LOG_RPT_STATS_INFO           = 0x1103,                               /* _H2ASN_MsgChoice ADS_LOG_HEAD_STRU */

    ID_ADS_MSG_ID_ENUM_BUTT
};
typedef VOS_UINT32  ADS_MSG_ID_ENUM_UINT32;

/*****************************************************************************
 ö����    : ADS_PDP_STATUS_ENUM
 ö��˵��  : ����ADS��PDP������ȥ����ָʾ

  1.��    ��   : 2011��12��6��
    ��    ��   : ³��/l60609
    �޸�����   : ����PDP��״̬
  2.��    ��   : 2012��2��17��
    ��    ��   : L47619
    �޸�����   : V7R1C50��Ŀ������PDP�޸ĳɹ���ö��
*****************************************************************************/
enum ADS_PDP_STATUS_ENUM
{
    ADS_PDP_STATUS_ACT,                                                         /* PDP����ɹ� */
    ADS_PDP_STATUS_MODIFY,                                                      /* PDP�޸ĳɹ� */
    ADS_PDP_STATUS_DEACT,                                                       /* PDPȥ����ɹ� */
    ADS_PDP_STATUS_BUTT
};
typedef VOS_UINT8 ADS_PDP_STATUS_ENUM_UINT8;

/*****************************************************************************
ö����    : ADS_QCI_TYPE_ENUM
ö��˵��  : ADS����PDP״ָ̬ʾʱ��ʹ�õ�QCIö��

  1.��    ��   : 2012��2��23��
    ��    ��   : L47619
    �޸�����   : V7R1C50 IPC��Ŀ����
*****************************************************************************/
typedef enum
{
    ADS_QCI_TYPE_QCI1_GBR               = 0,
    ADS_QCI_TYPE_QCI2_GBR               = 1,
    ADS_QCI_TYPE_QCI3_GBR               = 2,
    ADS_QCI_TYPE_QCI4_GBR               = 3,
    ADS_QCI_TYPE_QCI5_NONGBR            = 4,
    ADS_QCI_TYPE_QCI6_NONGBR            = 5,
    ADS_QCI_TYPE_QCI7_NONGBR            = 6,
    ADS_QCI_TYPE_QCI8_NONGBR            = 7,
    ADS_QCI_TYPE_QCI9_NONGBR            = 8,

    ADS_QCI_TYPE_BUTT
}ADS_QCI_TYPE_ENUM;

typedef VOS_UINT8 ADS_QCI_TYPE_ENUM_UINT8;


typedef enum
{
    ADS_PDP_IPV4                        = 0x01,                                 /* IPV4���� */
    ADS_PDP_IPV6                        = 0x02,                                 /* IPV6���� */
    ADS_PDP_IPV4V6                      = 0x03,                                 /* IPV4V6���� */
    ADS_PDP_PPP                         = 0x04,                                 /* PPP���� */

    ADS_PDP_TYPE_BUTT                   = 0xFF
}ADS_PDP_TYPE_ENUM;

typedef VOS_UINT8 ADS_PDP_TYPE_ENUM_UINT8;

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
    VOS_MSG_HEADER                                                              /* ��Ϣͷ */    /* _H2ASN_Skip */
    ADS_MSG_ID_ENUM_UINT32              enMsgId;                                /* ��ϢID */    /* _H2ASN_Skip */
    /* Added by l60609 for DSDA PhaseII, 2012-12-13, begin */
    MODEM_ID_ENUM_UINT16                enModemId;                              /* Modem Id*/
    /* Added by l60609 for DSDA PhaseII, 2012-12-13, end */
    VOS_UINT8                           ucRabId;                                /* Rab Id*/
    ADS_PDP_STATUS_ENUM_UINT8           enPdpStatus;                            /* PDP״̬*/
    ADS_QCI_TYPE_ENUM_UINT8             enQciType;                              /* QCI */
    ADS_PDP_TYPE_ENUM_UINT8             enPdpType;                              /* PDP���� */
    VOS_UINT8                           aucRsv[2];
}ADS_PDP_STATUS_IND_STRU;
typedef struct
{
    VOS_MSG_HEADER                                                              /* ��Ϣͷ */    /* _H2ASN_Skip */
    ADS_MSG_ID_ENUM_UINT32              enMsgId;                                /* ��ϢID */    /* _H2ASN_Skip */
}ADS_CCPU_RESET_IND_STRU;

/*****************************************************************************
�ṹ��    : ADS_LOG_HEAD_STRU
�ṹ˵��  : ��log��Ϣ

  1.��    ��   : 2014��02��11��
    ��    ��   : l60609
    �޸�����   : ����
*****************************************************************************/
typedef struct
{
    VOS_MSG_HEADER                                                              /* ��Ϣͷ */    /* _H2ASN_Skip */
    ADS_MSG_ID_ENUM_UINT32              enMsgId;                                /* ��ϢID */    /* _H2ASN_Skip */
}ADS_LOG_HEAD_STRU;

/*****************************************************************************
  8 UNION����
*****************************************************************************/


/*****************************************************************************
  9 OTHERS����
*****************************************************************************/
/*****************************************************************************
  H2ASN������Ϣ�ṹ����
*****************************************************************************/
typedef struct
{
    ADS_MSG_ID_ENUM_UINT32              enMsgId;            /* _H2ASN_MsgChoice_Export ADS_MSG_ID_ENUM_UINT32 */
    VOS_UINT8                           aucMsg[4];
    /***************************************************************************
        _H2ASN_MsgChoice_When_Comment          ADS_MSG_ID_ENUM_UINT32
    ****************************************************************************/
} ADS_INTERFACE_MSG_DATA;
/* _H2ASN_Length UINT32 */

typedef struct
{
    VOS_MSG_HEADER
    ADS_INTERFACE_MSG_DATA              stMsgData;
} AdsInterface_MSG;

/*****************************************************************************
  10 ��������
*****************************************************************************/






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

