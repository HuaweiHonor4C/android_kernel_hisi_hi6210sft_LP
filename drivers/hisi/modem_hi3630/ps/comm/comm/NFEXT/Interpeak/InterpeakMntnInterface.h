/******************************************************************************

                  ��Ȩ���� (C), 2001-2011, ��Ϊ�������޹�˾

 ******************************************************************************
  �� �� ��   : InterpeakMntnInterface.h
  �� �� ��   : ����
  ��    ��   : caikai
  ��������   : 2013��7��30��
  ����޸�   :
  ��������   : InterpeakMntn.c �Ľӿ��ļ������ⲿģ�����
  �����б�   :
  �޸���ʷ   :
  1.��    ��   : 2013��7��30��
    ��    ��   : caikai
    �޸�����   : �����ļ�

******************************************************************************/

#ifndef __INTERPEAKMNTNINTERFACE_H__
#define __INTERPEAKMNTNINTERFACE_H__


/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/
#if (VOS_OS_VER == VOS_WIN32)
#include  "VxWorksStub.h"
#else
#if ((VOS_OS_VER == VOS_RTOSCK) || ((VOS_OS_VER == VOS_WIN32) && (VOS_PC_TEST == VOS_RTOSCK)))

#else
#include <ipcom_type.h>
#endif
#endif


#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


#pragma pack(4)
/*****************************************************************************
  2 �궨��
*****************************************************************************/
#define IPS_MNTN_CCORE_INFO_LEN               (10000)           /*TCP/IPЭ��ջ������Ϣ�����*/

#define IPS_MNTN_CCORE_INFO_TYPE_LEN          (2)
#define IPS_MNTN_CCORE_INFO_TYPE_OFFSET       (4)               /*TCP/IPЭ��ջ������Ϣ����ƫ��*/
#define IPS_MNTN_CCORE_INFO_LEN_OFFSET        (4)               /*TCP/IPЭ��ջ������Ϣ����ƫ��*/

#define IPS_MNTN_CCORE_OK                     (0)
#define IPS_MNTN_CCORE_ERROR                  (-1)

/*****************************************************************************
  3 ö�ٶ���
*****************************************************************************/
/*TCP/IPЭ��ջ������Ϣ����*/
enum IPS_MNTN_CCORE_INFO_TYPE_ENUM
{
    ID_IPS_MNTN_CCORE_IFCONFIG_INFO           = 0x1001,               /*����������Ϣ*/
    ID_IPS_MNTN_CCORE_NETSTAT_ROUTES_INFO     = 0x1002,               /*·����Ϣ*/
    ID_IPS_MNTN_CCORE_NETSTAT_ENTRIES_INFO    = 0x1003,               /*����״̬��Ϣ*/
    ID_IPS_MNTN_CCORE_NAT_RULES_INFO          = 0x1004,               /*NAT�������Ϣ*/
    ID_IPS_MNTN_CCORE_NAT_STATS_INFO          = 0x1005,               /*NAT��״̬��Ϣ*/
    ID_IPS_MNTN_CCORE_NAT_PROXIES_INFO        = 0x1006,               /*NAT��Э����Ϣ*/
    ID_IPS_MNTN_CCORE_NAT_MAPPINGS_INFO       = 0x1007,               /*NAT��ӳ����Ϣ*/

    ID_IPS_MNTN_CCORE_NAT_TYPE_BUTT           = 0xffff
};
typedef unsigned short IPS_MNTN_CCORE_INFO_TYPE_ENUM_UINT16;

/* Interpeak��ά�ɲ�ص������±�ָʾ */
enum IPS_MNTN_CCORE_CB_TYPE_ENUM
{
    IPS_MNTN_CCORE_INPUT_DATA_CB        = 0,    /*TCP/IP��ά�ɲ���ձ���*/
    IPS_MNTN_CCORE_OUTPUT_DATA_CB,              /*TCP/IP��ά�ɲⷢ�ͱ���*/
    IPS_MNTN_CCORE_BRIDGE_DATA_CB,              /*TCP/IP������ת����*/
    IPS_MNTN_CCORE_RECV_ARP_CB,                 /*TCP/IPЭ��ջ���յ�ARP���Ʊ���*/
    IPS_MNTN_CCORE_SEND_ARP_CB,                 /*TCP/IPЭ��ջ���͵�ARP���Ʊ���*/
    IPS_MNTN_CCORE_RECV_DHCPC_CB,               /*TCP/IPЭ��ջ���յ�DHCP���Ʊ���*/
    IPS_MNTN_CCORE_SEND_DHCPC_CB,               /*TCP/IPЭ��ջ���͵�DHCP���Ʊ���*/
    IPS_MNTN_CCORE_RECV_DHCPS_CB,               /*TCP/IPЭ��ջ���յ�DHCP���Ʊ���*/
    IPS_MNTN_CCORE_SEND_DHCPS_CB,               /*TCP/IPЭ��ջ���͵�DHCP���Ʊ���*/
    IPS_MNTN_CCORE_APP_CMD_CB,                  /*APP����������Ϣ*/

    IPS_MNTN_CCORE_CB_TYPE_BUTT
};
typedef unsigned short  IPS_MNTN_CCORE_CB_TYPE_ENUM_UINT16;

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
 �ṹ��    : IPS_MNTN_CCORE_CAPTURE_CB_PARA_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : Interpeak��ά�ɲ�ص����������ṹ
*****************************************************************************/
typedef struct
{
    unsigned char      *paucNetIfName;  /* ����������Ϣ*/
    unsigned char      *paucSrcPort;    /* ��������������Ϣ������ʹ��*/
    unsigned char      *paucDestPort;   /* ��������������Ϣ������ʹ��*/
    unsigned char      *pucData;        /* ��������ָ��,����Ϊ������Ϣ����APP���� */
    unsigned short      usLen;          /* �������ݳ��� */
    unsigned char       aucRsv[2];      /* �������ݳ��� */
}IPS_MNTN_CCORE_CAPTURE_PARA_STRU;


/*****************************************************************************
  8 UNION����
*****************************************************************************/


/*****************************************************************************
  9 OTHERS����
*****************************************************************************/
/* ���Ļ��������ص����� */
typedef void (*IPS_MNTN_CCORE_CAPTURE_CB)(IPS_MNTN_CCORE_CAPTURE_PARA_STRU *pstIpsMntnCapturePara);


/*****************************************************************************
  10 ��������
*****************************************************************************/
#if ((VOS_OS_VER == VOS_RTOSCK) || ((VOS_OS_VER == VOS_WIN32) && (VOS_PC_TEST == VOS_RTOSCK)))

#else

/*lint -esym(752,IPS_MNTN_CCORE_RegExtFunc)*/
extern int IPS_MNTN_CCORE_RegExtFunc(IPS_MNTN_CCORE_CAPTURE_CB pCaptureCb, IPS_MNTN_CCORE_CB_TYPE_ENUM_UINT16 enCbType);

/*lint -esym(752,IPS_MNTN_CCORE_InterpeakMntnInit)*/
extern int IPS_MNTN_CCORE_InterpeakMntnInit(void);

/*lint -esym(752,IPS_MNTN_CCORE_GetNetstatEntries)*/
extern int IPS_MNTN_CCORE_GetNetstatEntries
(
    Ip_u8                              *pucData,
    Ip_u32                             *pulTotalLen,
    Ip_u16                              usType
);

/*lint -esym(752,IPS_MNTN_CCORE_GetNatRules)*/
extern int IPS_MNTN_CCORE_GetNatRules
(
    Ip_u8                              *pucData,
    Ip_u32                             *pulTotalLen,
    Ip_u16                              usType
);

/*lint -esym(752,IPS_MNTN_CCORE_GetNatStats)*/
extern int IPS_MNTN_CCORE_GetNatStats
(
    Ip_u8                              *pucData,
    Ip_u32                             *pulTotalLen,
    Ip_u16                              usType
);

/*lint -esym(752,IPS_MNTN_CCORE_GetNatProxies)*/
extern int IPS_MNTN_CCORE_GetNatProxies
(
    Ip_u8                              *pucData,
    Ip_u32                             *pulTotalLen,
    Ip_u16                              usType
);

/*lint -esym(752,IPS_MNTN_CCORE_GetIpsInfo)*/
extern int IPS_MNTN_CCORE_GetIpsInfo
(
    unsigned char                      *pucData,
    unsigned int                       *pulLen,
    unsigned short                      usType
);

/*lint -esym(752,IPS_MNTN_CCORE_GetNatMappings)*/
extern int IPS_MNTN_CCORE_GetNatMappings
(
    unsigned char                  *pucData,
    int                             ulNum
);
#endif

#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif /* end of InterpeakMntnInterface.h */




