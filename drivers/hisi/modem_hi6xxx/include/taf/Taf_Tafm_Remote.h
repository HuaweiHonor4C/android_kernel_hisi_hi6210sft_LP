#ifndef __TAF_TAFM_REMOTE_H__
#define __TAF_TAFM_REMOTE_H__

/*============================================================================*

******************************************************************************
* Copyright (c) ,1988-2001,Huawei Tech. Co.,Ltd                              *
* File name     :Taf_Tafm_Remote.h                                           *
* Author        :zzy                                                         *
* Description   :TAFMģ��Զ��API�ڲ�ʹ�õ����ݽṹ����ͷ�ļ�                 *
* Others        :                                                            *
* Function List :                                                            *
* History       :                                                            *
*               :2005-04-13 ����                                             *
*               :2005-10-07 ����Detach,Attach���ܣ��޸���:���r               *
*               :2005-12-12 ����TAF_MSG_MMISTR���壬�޸���:����              *
*               :2006-05-27 ����TAF_MSG_ENA_RING���壬�޸���:����            *
*               :2006-10.25 h44270 modified for A32D06630                    *

*Date         Updated By      PR Number                                      *
*2006-10-26   Li Jilin        A32D06630                                      *
*2006-11-03   dingqing        A32D06124, 6125, 6754                          *
 3.��    ��  : 2006��12��4��
   ��    ��  : luojian id:60022475
   �޸�����  : ���� #pragma pack(4)�����ⵥ��:A32D07779
  4.��    ��   : 2006��12��09��
    ��    ��   : x51137
    �޸�����   : A32D06630
  5.��    ��   : 2007��01��05��
    ��    ��   : s46746
    �޸�����   : A32D07668
  6.��    ��   : 2007��01��25��
    ��    ��   : s62952
    �޸�����   : A32D08541
  7.��    ��   : 2007��10��9��
    ��    ��   : luojian id:107747
    �޸�����   : �����ɺ�����A32D13994
  8.��    ��   : 2008��3��17��
    ��    ��   : s46746
    �޸�����   : ���ⵥ��:AT2D02570,NAS B005�汾�����������
  9.��    ��   : 2008��6��10��
    ��    ��   : luojian id:00107747
    �޸�����   : ���ⵥ��:AT2D03704,�㲥ClientIDͳһ�޸�Ϊ0xffff
******************************************************************************/
#ifdef __cplusplus
extern "C" {
#endif
#pragma pack(4)
/*========================================================*/

#include "TafClientApi.h"

/*�궨�忪ʼ*/

/*����Client�Ĺ㲥ֵ*/
#define TAF_CLIENTID_BROADCAST          (0xFFFF)
#define MN_CLIENTID_INVALID             (0xFFFE)


/*CS����PS���֧�ֵ�RAB��Ŀ*/
#define  TAF_MAX_RABID                15


#define TAF_MSG_HEADER_LEN  6

#ifndef TAF_SUCCESS
#define TAF_SUCCESS    TAF_ERR_NO_ERROR     /*����ִ�гɹ�*/
#endif
#ifndef TAF_FAILURE
#define TAF_FAILURE    TAF_ERR_ERROR        /*����ִ��ʧ��*/
#endif

#define PS_INIT_NOT_START  0
#define PS_INIT_START      1
#define PS_INIT_FINISH     2

/*�궨�����*/

/*Զ��API��TAFM����ͨ��ʱʹ�õ���Ϣ����*/


typedef enum
{
    TAF_MSG_MMA_MS_CLASS,         /* ҵ��ģʽ����չ����*/

    TAF_MSG_MMA_FUN_QUERY,              /* �������ֻ�������������*/
    TAF_MSG_MMA_REG_PLMN,         /* ��ǰ��ע��PLMN*/
    TAF_MSG_MMA_HANDLE_PREF_PLMN_INFO, /* ��ѯPREF PLMN��Ϣ*/
    TAF_MSG_MMA_SET_QUICKSTART,   /*���ٿ��� */
    TAF_MSG_MMA_SET_AUTOATTACH,
    TAF_MSG_MMA_SET_LOADDEFAULT,    /* Load Default Value of NV Item */
    TAF_MSG_MMA_USIM_COMMAND,
    TAF_MSG_MMA_USIM_RESTRICTED_ACCESS, /*+CRSM*/
    TAF_MSG_MMA_SET_IMEI,
    TAF_MSG_MMA_FPLMN_HANDLE,
    TAF_MSG_MMA_SYSCFG_QUERY_REQ,

    TAF_MSG_MMA_CRPN_HANDLE,            /* AT����AT^CRPN��ѯ���� */
    TAF_MSG_MM_TEST_HANDLE,             /* AT����AT^CMM��������� */

    TAF_MSG_PARA_READ,            /* ͨ�Ų�����ѯ*/

    /*�绰����*/
    TAF_MSG_MMA_PLMN_LIST,        /* ����PLMN��������չ����*/

    TAF_MSG_MMA_PLMN_RESEL,       /* �Զ����˹�������ѡ*/
    TAF_MSG_MMA_PLMN_USER_SEL,    /* ָ��PLMNѡ��*/
    TAF_MSG_MMA_OP_PIN_REQ,       /* PIN��������*/
    TAF_MSG_MMA_ATTACH,           /* �������Ź���*/
    TAF_MSG_MMA_DETACH,           /* ����ȥ���Ź���*/
    TAF_MSG_MMA_PARA_QUERY,       /* ��ѯ��������*/
    TAF_MSG_MMA_INFO_REPORT,      /* ���������ϱ�״̬��Ϣ*/
    TAF_MSG_MMA_ME_PERSONAL_REQ,   /* ������������ */

    TAF_MSG_MMA_GET_CURRENT_ATTACH_STATUS,      /*�����ȡCS��PS��ע��״̬*/
    TAF_MSG_MMA_MT_POWER_DOWN,                  /* ����MT�µ� */
    TAF_MSG_MMA_SET_PREF_PLMN_TYPE,             /* �������������б��ļ� */
    TAF_MSG_MMA_SET_PREF_PLMN,                  /* ����PREF PLMN��Ϣ*/
    TAF_MSG_MMA_TEST_PREF_PLMN,                 /* ����PREF PLMN��Ϣ*/
    TAF_MSG_MMA_TEST_SYSCFG,                    /* SYSCFG����������Ϣ*/
    /* Deleted by f62575 for SS FDN&Call Control, 2013-05-06, begin */
    /* Deleted SSA��Ϣ */
    /* Deleted by f62575 for SS FDN&Call Control, 2013-05-06, end */

    TAF_MSG_MMA_USIM_INFO,
    TAF_MSG_MMA_CPNN_INFO,

    TAF_MSG_MMA_SET_PIN,

    TAF_MSG_MMA_CIPHER_INFO,
    TAF_MSG_MMA_LOCATION_INFO,

    TAF_MSG_MMA_PLMN_LIST_ABORT_REQ,  /* PLMN LIST��� */

    TAF_MSG_MMA_AC_INFO_QUERY_REQ, /* С�������ֹ��Ϣ�ϱ� */


    TAF_MSG_MMA_CERSSI_INFO_QUERY_REQ,     /* С���ź�������ѯ */

    /* Added by f62575 for SS FDN&Call Control, 2013-05-06, begin */
    TAF_MSG_MMA_COPN_INFO_QUERY_REQ,
    /* Added by f62575 for SS FDN&Call Control, 2013-05-06, end */

    TAF_MSG_MMA_SIMINSERT_IND,   /*SIM��������Ƴ�*/

    TAF_MSG_MMA_EOPLMN_SET_REQ,
    TAF_MSG_MMA_EOPLMN_QUERY_REQ,

    TAF_MSG_MMA_NET_SCAN_REQ,
    TAF_MSG_MMA_ABORT_NET_SCAN_REQ,

    TAF_MSG_MMA_CPOL_INFO_QUERY_REQ,

    /* Modified by c00318887 for file refresh ��Ҫ����������, 2015-3-9, begin */
    TAF_MSG_MMA_REFRESH_STUB_SET_REQ,
    /* Modified by c00318887 for file refresh ��Ҫ����������, 2015-3-9, end */
    
    TAF_MSG_BUTT
}TAF_MSG_TYPE;
typedef VOS_UINT16   TAF_MSG_TYPE_ENUM_U16;


/*TAF��������������Ϣ���Ͷ���*/
typedef enum
{
    TAF_SUB_MSG_PARA_SET,     /*ͨ�Ų�������*/
    TAF_SUB_MSG_PARA_READ,    /*ͨ�Ų�����ѯ*/
    TAF_SUB_MSG_BUTT
}TAF_PRIM_MSG_TYPE;


/*ȫ�ֱ������忪ʼ*/
/*Զ��API����ȫ�ֱ�������*/
/*APP/AT�ص�������¼��*/


/*ȫ�ֱ����������*/

/*API�����궨��*/
#define TAF_ENCODE_MSG_HEADER(ptr, MsgType, ClientId, Id, IeMask)  \
                         *ptr++ = MsgType;                         \
                         *ptr++ = (VOS_UINT8)((ClientId >> 8) & 0xFF); \
                         *ptr++ = (VOS_UINT8)(ClientId & 0xFF);        \
                         *ptr++ = Id;                              \
                         *ptr++ = (VOS_UINT8)((IeMask >> 8) & 0xFF);   \
                         *ptr++ = (VOS_UINT8)(IeMask & 0xFF)


/*TAF�Ƿ��Ѿ���Զ��ע���MUX�ص�����*/
#define TAF_REG_MUX_CALLBACK_NO    0   /*δע���MUX�ص�����*/
#define TAF_REG_MUX_CALLBACK_YES   1   /*��ע���MUX�ص�����*/

VOS_VOID   Taf_EventReportProc(VOS_UINT16 usMuxId, VOS_UINT8 *pData, VOS_UINT16 usLen, VOS_UINT8 ucRegTabIndex);


#if ((VOS_OS_VER == VOS_WIN32) || (VOS_OS_VER == VOS_NUCLEUS))
#pragma pack()
#else
#pragma pack(0)
#endif

/*========================================================*/
#ifdef __cplusplus
}
#endif
/******************************************************************************/

/*============================================================================*/
#endif          /* __TAF_REMOTE_H__ */
