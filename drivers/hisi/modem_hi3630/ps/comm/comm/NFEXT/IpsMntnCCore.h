/******************************************************************************

                  ��Ȩ���� (C), 2001-2011, ��Ϊ�������޹�˾

 ******************************************************************************
  �� �� ��   : IpsMntnCCore.h
  �� �� ��   : ����
  ��    ��   : caikai
  ��������   : 2013��7��23��
  ����޸�   :
  ��������   : IPS MNTNģ��ͷ�ļ�
  �����б�   :
  �޸���ʷ   :
  1.��    ��   : 2013��7��16��
    ��    ��   : caikai
    �޸�����   : �����ļ�

******************************************************************************/

#ifndef __IPSMNTNCCORE_H__
#define __IPSMNTNCCORE_H__

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif

/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/

#include  "product_config.h"
#include  "vos.h"

#if( FEATURE_ON == FEATURE_IMS )

#include  "PsTypeDef.h"
#include  "InterpeakMntnInterface.h"

#if ((VOS_OS_VER == VOS_RTOSCK) || ((VOS_OS_VER == VOS_WIN32) && (VOS_PC_TEST == VOS_RTOSCK)))
#include "tcpip/public/tcpip_basetype.h"
#include "tcpip/public/arith_cbb/include/mbuf.h"
#endif

#pragma pack(4)

/*****************************************************************************
  2 �궨��
*****************************************************************************/
#define IPS_CCORE_IFNAMSIZ                    (16)                    /*�����������Ƴ���*/
#define IPS_CCORE_END_NAME                    (8)
#define IPS_CCORE_APP_CMD_INFO_LEN            (200)                   /*����APP��������������*/
#define IPS_MNTN_CCORE_TRACE_MAX_BYTE_LEN     (1514)                  /*����TCP/IPЭ��ջ��������� */
#define IPS_MNTN_CCORE_NAT_MAPPING_INFO_LEN   (40)                    /*����TCP/IPЭ��ջNATӳ����Ϣ��������*/
#define IPS_ARRAY_SIZE(x)                     (sizeof(x) / sizeof(x[0]))

#if ((VOS_OS_VER == VOS_RTOSCK) || ((VOS_OS_VER == VOS_WIN32) && (VOS_PC_TEST == VOS_RTOSCK)))
#define IPS_MNTN_CCORE_LINK_LAYER_UP_MASK     (1)                     /* ��·������ץ����־ */
#define IPS_MNTN_CCORE_LINK_LAYER_DOWN_MASK   (1 << 1)                /* ��·������ץ����־ */
#define IPS_MNTN_CCORE_IPV4_CAPTRURE_UP_MASK  (1 << 2)                /* IPV4��������ץ����־ */
#define IPS_MNTN_CCORE_IPV4_CAPTRURE_DOWN_MASK (1 << 3)               /* IPV4��������ץ����־ */
#define IPS_MNTN_CCORE_IPV6_CAPTRURE_UP_MASK  (1 << 4)                /* IPV6��������ץ����־ */
#define IPS_MNTN_CCORE_IPV6_CAPTRURE_DOWN_MASK (1 << 5)               /* IPV6��������ץ����־ */
#define ARRAY_SIZE(x) (sizeof(x) / sizeof(struct x))                  /* ���������Ա���� */
#define IPS_MNTN_CCORE_LINK_UP_TYPE            (0)                    /* ��·��ץ���������� */
#define IPS_MNTN_CCORE_LINK_DOWN_TYPE          (1)                    /* ��·��ץ���������� */
#define IPS_MNTN_CCORE_NIC_NAME_STR            "ethernet0"            /* ������������ */
#define IPS_MNTN_CCORE_MAX_IPV4_ADDR_NUM       (100)                  /* ���ϱ�OM�����IPV4��ַ���� */
#define IPS_MNTN_CCORE_BASE_INFO_OFFSET_LEN    (8)                    /* ������Ϣͷ���� */

/* ���ϱ�OM�����IPV6·������ */
#define IPS_MNTN_CCORE_MAX_IPV6_ROUTE_ITEM              \
    (IPS_MNTN_CCORE_INFO_LEN / (IPS_MNTN_CCORE_BASE_INFO_OFFSET_LEN + sizeof(TCPIP_RT6_ENTRY_S)))

/* ���ϱ�OM�����IPV4·������ */
#define IPS_MNTN_CCORE_MAX_IPV4_ROUTE_ITEM              \
    (IPS_MNTN_CCORE_INFO_LEN / (IPS_MNTN_CCORE_BASE_INFO_OFFSET_LEN + sizeof(TCPIP_RT4_ENTRY_S)))

#endif

/*�����Ϣͷ*/
#define IPS_CCORE_FILL_MSG_HEADER(pSendMsg, RecvPid)    \
        (pSendMsg)->ulReceiverCpuId  = VOS_LOCAL_CPUID; \
        (pSendMsg)->ulReceiverPid    = RecvPid;


#define IPS_CCORE_OM_TRANS_DATA_OFFSET_LEN        /*lint -e(545) -e(413)*/offsetof(OM_APP_TRACE_STRU, aucPara)

#define IPS_CCORE_PS_OM_TRANS_DATA_OFFSET_LEN     /*lint -e(545) -e(413)*/offsetof(PS_OM_TRANS_IND_STRU, aucData)

#define IPS_CCORE_PS_OM_TRANS_OM_HEADER_LEN       /*lint -e(545) -e(413)*/offsetof(PS_OM_TRANS_IND_STRU, ulSn)

#define IPS_CCORE_PKT_INFO_OFFSET_LEN             /*lint -e(545) -e(413)*/offsetof(IPS_MNTN_CCORE_PKT_INFO_STRU, aucData)

#define IPS_CCORE_BRIDGE_PKT_INFO_OFFSET_LEN      /*lint -e(545) -e(413)*/offsetof(IPS_MNTN_CCORE_BRIDGE_PKT_INFO_STRU, aucData)

#define IPS_CCORE_APP_CMD_INFO_OFFSET_LEN         /*lint -e(545) -e(413)*/offsetof(IPS_MNTN_CCORE_APP_CMD_INFO_STRU, aucData)

#if 0
#define MNTN_PKT_INFO_LEN               (OM_TRANS_DATA_OFFSET_LEN + MNTN_PKT_INFO_OFFSET_LEN + IPS_MNTN_CCORE_TRACE_MAX_BYTE_LEN)

#define MNTN_BRIDGE_PKT_INFO_LEN        (OM_TRANS_DATA_OFFSET_LEN + MNTN_BRIDGE_PKT_INFO_OFFSET_LEN + IPS_MNTN_CCORE_TRACE_MAX_BYTE_LEN)

#define MNTN_APP_CMD_INFO_LEN           (OM_TRANS_DATA_OFFSET_LEN + MNTN_APP_CMD_INFO_OFFSET_LEN + IPS_CCORE_APP_CMD_INFO_LEN)
#endif

#define IPS_CCORE_INFO_LEN                      (IPS_CCORE_OM_TRANS_DATA_OFFSET_LEN + IPS_MNTN_CCORE_INFO_LEN)

/*****************************************************************************
  3 ö�ٶ���
*****************************************************************************/
enum IPS_MNTN_CCORE_TRACE_CONFIG_TYPE_ENUM
{
    ID_OM_IPS_CCORE_ADVANCED_TRACE_CONFIG_REQ = 0xD513,               /* ����TCP/IPЭ��ջ ��������*/
    ID_IPS_CCORE_OM_ADVANCED_TRACE_CONFIG_CNF = 0xD514,               /* ����TCP/IPЭ��ջ ����ָʾ*/

    ID_OM_IPS_MNTN_CCORE_INFO_CONFIG_REQ      = 0xD515,               /* �����Բ���TCP/IPЭ��ջ ������Ϣ����*/
    ID_IPS_CCORE_OM_MNTN_INFO_CONFIG_CNF      = 0xD516,               /* �����Բ���TCP/IPЭ��ջ ������Ϣ����ָʾ*/

    ID_IPS_MNTN_CCORE_TRACE_CONFIG_TYPE_BUTT
};
typedef VOS_UINT16 IPS_MNTN_CCORE_TRACE_CONFIG_TYPE_ENUM_UINT16;

enum IPS_MNTN_CCORE_INFO_ACTION_ENUM
{
    IPS_MNTN_CCORE_INFO_REPORT_STOP           = 0,                    /*���������Բ���TCP/IPЭ��ջ������Ϣ*/
    IPS_MNTN_CCORE_INFO_REPORT_START          = 1,                    /*�ر������Բ���TCP/IPЭ��ջ������Ϣ*/

    IPS_MNTN_CCORE_INFO_REPORT_BUTT
};
typedef VOS_UINT16 IPS_MNTN_CCORE_INFO_ACTION_ENUM_UINT16;

enum IPS_MNTN_CCORE_RESULT_TYPE_ENUM
{
    IPS_MNTN_CCORE_RESULT_OK                  = 0,
    IPS_MNTN_CCORE_RESULT_START_TIMER_FAIL    = 1,
    IPS_MNTN_CCORE_RESULT_ALLOC_MEM_FAIL      = 2,
    IPS_MNTN_CCORE_RESULT_ALLOC_MSG_FAIL      = 3,
    IPS_MNTN_CCORE_RESULT_INPUT_PARAM_ERR     = 4,
    IPS_MNTN_CCORE_RESULT_LOCAL_PARAM_ERR     = 5,

    IPS_MNTN_RESULT_BUTT
};
typedef VOS_UINT16  IPS_MNTN_CCORE_RESULT_TYPE_ENUM_UINT16;

enum IPS_MNTN_CCORE_TIMER_NAME_ENUM
{
    IPS_MNTN_CCORE_INFO_TIMER                 = 0x00000001,           /*�����Բ���TCP/IPЭ��ջ������Ϣ��ʱ��*/

    IPS_MNTN_CCORE_TIMER_NAME_BUTT
};
typedef VOS_UINT32 IPS_MNTN_CCORE_TIMER_NAME_ENUM_UINT32;

enum IPS_MNTN_CCORE_TRACE_CHOSEN_ENUM
{
    IPS_MNTN_CCORE_TRACE_NULL_CHOSEN               =   0,             /*����������Ϣ*/
    IPS_MNTN_CCORE_TRACE_MSG_HEADER_CHOSEN         =   1,             /*������ͷ��*/
    IPS_MNTN_CCORE_TRACE_CONFIGURABLE_LEN_CHOSEN   =   2,             /*�������ò�����*/
    IPS_MNTN_CCORE_TRACE_WHOLE_DATA_LEN_CHOSEN     =   3,             /*������ȫ������*/

    IPS_MNTN_CCORE_TRACE_MSG_CHOSEN_BUTT
};
typedef VOS_UINT32   IPS_MNTN_CCORE_TRACE_CHOSEN_ENUM_UINT32;

/*TCP/IPЭ��ջ��ά�ɲⲶ�����Ϣ��ʶ*/
enum IPS_MNTN_CCORE_TRACE_MSG_TYPE_ENUM
{
    ID_IPS_CCORE_TRACE_INPUT_DATA_INFO        = 0xD517,               /*TCP/IP��ά�ɲ���ձ���*/
    ID_IPS_CCORE_TRACE_OUTPUT_DATA_INFO       = 0xD518,               /*TCP/IP��ά�ɲⷢ�ͱ���*/
    ID_IPS_CCORE_TRACE_BRIDGE_DATA_INFO       = 0xD519,               /*TCP/IP������ת����*/
    ID_IPS_CCORE_TRACE_RECV_ARP_PKT           = 0xD51A,               /*TCP/IPЭ��ջ���յ�ARP���Ʊ���*/
    ID_IPS_CCORE_TRACE_SEND_ARP_PKT           = 0xD51B,               /*TCP/IPЭ��ջ���͵�ARP���Ʊ���*/
    ID_IPS_CCORE_TRACE_RECV_DHCPC_PKT         = 0xD51C,               /*TCP/IPЭ��ջ���յ�DHCP���Ʊ���*/
    ID_IPS_CCORE_TRACE_SEND_DHCPC_PKT         = 0xD51D,               /*TCP/IPЭ��ջ���͵�DHCP���Ʊ���*/
    ID_IPS_CCORE_TRACE_RECV_DHCPS_PKT         = 0xD51E,               /*TCP/IPЭ��ջ���յ�DHCP���Ʊ���*/
    ID_IPS_CCORE_TRACE_SEND_DHCPS_PKT         = 0xD51F,               /*TCP/IPЭ��ջ���͵�DHCP���Ʊ���*/
    ID_IPS_CCORE_TRACE_APP_CMD                = 0xD520,               /*APP����������Ϣ*/
    ID_IPS_CCORE_TRACE_MNTN_INFO              = 0xD521,               /*TCP/IPЭ��ջ������Ϣ*/
    ID_IPS_MNTN_CCORE_IMS_NIC_INFO            = 0xD522,               /*IMS��������ͳ����Ϣ*/

    ID_IPS_CCORE_TRACE_MSG_TYPE_BUTT          = 0xffff
};
typedef VOS_UINT16  IPS_MNTN_CCORE_TRACE_MSG_TYPE_ENUM_UINT16;

/*TCP/IPЭ��ջ������Ϣ����*/
enum IPS_MNTN_CCORE_BASE_INFO_ENUM
{
    ID_IPS_MNTN_CCORE_NETIF_INFO              = 0x1001,               /* ����������Ϣ */
    ID_IPS_MNTN_CCORE_TCP_INFO                = 0x1002,               /* TCP����������Ϣ */
    ID_IPS_MNTN_CCORE_UDP_INFO                = 0x1003,               /* UDP����������Ϣ */
    ID_IPS_MNTN_CCORE_IPV4_ROUTE_INFO         = 0x1004,               /* IPV4·����Ϣ */
    ID_IPS_MNTN_CCORE_IPV6_ROUTE_INFO         = 0x1005,               /* IPV6·����Ϣ */
    ID_IPS_MNTN_CCORE_IPV4_ADDR_INFO          = 0x1006,               /* IPV4��ַ��Ϣ */
    ID_IPS_MNTN_CCORE_IPV6_ADDR_INFO          = 0x1007,               /* IPV6��ַ��Ϣ */

    ID_IPS_MNTN_CCORE_BASE_INFO_BUTT          = 0xffff
};
typedef unsigned short IPS_MNTN_CCORE_BASE_INFO_ENUM_UINT16;


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
#pragma pack(4)

typedef struct
{
    IPS_MNTN_CCORE_TRACE_CHOSEN_ENUM_UINT32   ulChoice;
    VOS_UINT32                                ulTraceDataLen;         /* ��ѡ��TRACE_CONFIGURABLE_LEN_CHOSENʱ����ֵ��Ч */

}IPS_MNTN_CCORE_TRACE_CONFIG_STRU;

typedef IPS_MNTN_CCORE_TRACE_CONFIG_STRU  IPS_MNTN_CCORE_BRIDGE_TRACE_CFG_STRU;

typedef IPS_MNTN_CCORE_TRACE_CONFIG_STRU  IPS_MNTN_CCORE_INPUT_TRACE_CFG_STRU;

typedef IPS_MNTN_CCORE_TRACE_CONFIG_STRU  IPS_MNTN_CCORE_OUTPUT_TRACE_CFG_STRU;

typedef struct
{
    IPS_MNTN_CCORE_BRIDGE_TRACE_CFG_STRU      stBridgeTraceCfg;       /*���ò���������Ϣ*/
    IPS_MNTN_CCORE_INPUT_TRACE_CFG_STRU       stInputTraceCfg;        /*���ò���TCP/IPЭ��ջ������Ϣ*/
    IPS_MNTN_CCORE_OUTPUT_TRACE_CFG_STRU      stOutputTraceCfg;       /*���ò���TCP/IPЭ��ջ������Ϣ*/
    VOS_UINT8                                 aucRsv[100];            /* ����λ��Ϊ���ڿ���չ */
}IPS_MNTN_CCORE_TRACE_CONFIG_REQ_STRU;

typedef struct
{
    PS_RSLT_CODE_ENUM_UINT32            enRslt;                 /* ���ز�ѯ�ṹ�ɹ���ʧ�ܣ�PS_SUCC��ʾ�ɹ���PS_FAIL��ʾʧ�� */

}IPS_MNTN_CCORE_TRACE_CONFIG_CNF_STRU;

typedef struct
{
    IPS_MNTN_CCORE_INFO_ACTION_ENUM_UINT16    enCommand;
    VOS_UINT16                                usTimeLen;              /*��λ���� */
}IPS_MNTN_CCORE_INFO_CFG_REQ_STRU;

typedef struct
{
    IPS_MNTN_CCORE_INFO_ACTION_ENUM_UINT16    enCommand;
    IPS_MNTN_CCORE_RESULT_TYPE_ENUM_UINT16    enRslt;
}IPS_MNTN_CCORE_INFO_CFG_CNF_STRU;

/*****************************************************************************
 �ṹ��    : IPS_MNTN_CCORE_INFO_ENTITY
 �ṹ˵��  : ����TCP/IPЭ��ջ������Ϣʵ��
*****************************************************************************/
typedef struct
{
    HTIMER                                    hIpsMntnTimer;          /*��ʱ��*/
    VOS_UINT32                                ulIpsMntnTimerLen;      /*��ʱ�����ȣ��̶�1s*/
    IPS_MNTN_CCORE_INFO_ACTION_ENUM_UINT16    enIpsMntnFlag;          /*����TCP/IPЭ��ջ������Ϣ������־*/
    VOS_UINT8                                 aucRsv[2];
}IPS_MNTN_CCORE_INFO_ENTITY;

/*****************************************************************************
 �ṹ��    : IPS_MNTN_CCORE_PKT_INFO_STRU
 �ṹ˵��  : TCP/IPЭ��ջ���Ĳ���
*****************************************************************************/
typedef struct
{
    VOS_UINT8                               aucNetIfName[IPS_CCORE_IFNAMSIZ]; /* ������������ */
    VOS_UINT16                              usLen;
    VOS_UINT8                               aucData[2];
} IPS_MNTN_CCORE_PKT_INFO_STRU;

/*****************************************************************************
 �ṹ��    : IPS_MNTN_CCORE_BRIDGE_PKT_INFO_STRU
 �ṹ˵��  : ������ת���Ĳ���
*****************************************************************************/
typedef struct
{
    VOS_UINT8                               aucSrcPort[IPS_CCORE_END_NAME];   /* ��������������Ϣ */
    VOS_UINT8                               aucDestPort[IPS_CCORE_END_NAME];  /* ���������������� */
    VOS_UINT16                              usLen;
    VOS_UINT8                               aucData[2];
} IPS_MNTN_CCORE_BRIDGE_PKT_INFO_STRU;

/*****************************************************************************
 �ṹ��    : IPS_MNTN_CCORE_APP_CMD_INFO_STRU
 �ṹ˵��  : APP���������
*****************************************************************************/
typedef struct
{
    VOS_UINT16                              usLen;
    VOS_UINT8                               aucData[2];
} IPS_MNTN_CCORE_APP_CMD_INFO_STRU;

/*****************************************************************************
 �ṹ��    : IPS_MNTN_CCORE_INFO_STRU
 �ṹ˵��  : APP���������
*****************************************************************************/
typedef struct
{
    VOS_UINT16                              usType;
    VOS_UINT8                               aucData[2];
    VOS_UINT32                              ulLen;
} IPS_MNTN_CCORE_INFO_STRU;

#if ((VOS_OS_VER == VOS_RTOSCK) || ((VOS_OS_VER == VOS_WIN32) && (VOS_PC_TEST == VOS_RTOSCK)))

typedef VOS_UINT32 (*pfHookCb)(MBUF_S *pstMBuf);
typedef VOS_UINT32 (*pfRegHook)(VOS_UINT32 ulType, VOS_UINT32 ulPriority, pfHookCb pfHookCbFunc);
typedef VOS_UINT32 (*pfUnRegHook)(VOS_UINT32 ulType, pfHookCb pfHookCbFunc);

/*****************************************************************************
 �ṹ��    : IPS_MNTN_CCORE_HOOK_MASK_OPS_STRU
 �ṹ˵��  : RTOSckƽ̨��ά�ɲ�ӿڹ��Ӻ���������ע��ṹ
*****************************************************************************/
typedef struct
{
    VOS_UINT32                              ulMask;
    VOS_UINT32                              ulType;
    VOS_UINT32                              ulPriority;
    pfHookCb                                pfHookCbFunc;
    pfRegHook                               pfRegHookFunc;
    pfUnRegHook                             pfUnRegHookFunc;
}IPS_MNTN_CCORE_HOOK_MASK_OPS_STRU;

#endif

/*****************************************************************************
  8 UNION����
*****************************************************************************/


/*****************************************************************************
  9 OTHERS����
*****************************************************************************/


/*****************************************************************************
  10 ��������
*****************************************************************************/
VOS_VOID IPS_MNTN_CCORE_PktInfo
(
    VOS_UINT8                                    *pucNetIfName,
    VOS_UINT8                                    *pucPktData,
    VOS_UINT16                                    usPktLen,
    IPS_MNTN_CCORE_TRACE_MSG_TYPE_ENUM_UINT16     usType
);
VOS_VOID IPS_MNTN_CCORE_IpsMntnInfoTimeoutProc();
VOS_VOID IPS_MNTN_CCORE_OutputIpsInfo
(
    VOS_UINT8                          *pucData,
    VOS_UINT16                          usType
);
VOS_VOID IPS_MNTN_CCORE_OutputIpsNatMappingsInfo
(
    VOS_UINT8                          *pucData
);
VOS_VOID IPS_MNTN_CCORE_OutputImsNicStatsInfo
(
    VOS_UINT8                          *pucData,
    VOS_UINT16                          usType
);

#if ((VOS_OS_VER == VOS_RTOSCK) || ((VOS_OS_VER == VOS_WIN32) && (VOS_PC_TEST == VOS_RTOSCK)))
VOS_UINT32 IPS_MNTN_CCORE_ReRegHooks(VOS_UINT32 ulMask);
VOS_VOID IPS_MNTN_CCORE_UnregHooks(VOS_UINT32 ulMask);
VOS_UINT32 IPS_MNTN_CCORE_RegHooks(VOS_UINT32 ulMask);
VOS_UINT32 IPS_MNTN_CCORE_LinkLayerUpCapCB(MBUF_S *pMBuf);
VOS_UINT32 IPS_MNTN_CCORE_LinkLayerDownCapCB(MBUF_S *pMBuf);
VOS_UINT32 IPS_MNTN_CCORE_IpLayerUpCapCB(MBUF_S *pMBuf);
VOS_UINT32 IPS_MNTN_CCORE_IpLayerDownCapCB(MBUF_S *pMBuf);
VOS_UINT32 IPS_MNTN_CCORE_AdapterLinkRegHook
(
    VOS_UINT32                          ulType,
    VOS_UINT32                          ulPriority,
    pfHookCb                            pfHookCbFunc
);
VOS_VOID IPS_MNTN_CCORE_OutputNetIfInfo(VOS_UINT8 *pucData, VOS_UINT16 usType);
VOS_VOID IPS_MNTN_CCORE_OutputUdpInfo(VOS_UINT8 *pucData, VOS_UINT16 usType);
VOS_VOID IPS_MNTN_CCORE_OutputTcpInfo(VOS_UINT8 *pucData, VOS_UINT16 usType);
VOS_VOID IPS_MNTN_CCORE_OutputRouteIpv4Info(VOS_UINT8 *pucData, VOS_UINT16 usType);
VOS_VOID IPS_MNTN_CCORE_OutputRouteIpv6Info(VOS_UINT8 *pucData, VOS_UINT16 usType);
VOS_VOID IPS_MNTN_CCORE_OutputIpv4AddrInfo(VOS_UINT8 *pucData, VOS_UINT16 usType);
//VOS_VOID IPS_MNTN_CCORE_OutputIpv6AddrInfo(VOS_UINT8 *pucData, VOS_UINT16 usType);
#endif

#endif  /*FEATURE_ON == FEATURE_IMS*/

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

#endif /* end of IpsMntnCCore.h */



