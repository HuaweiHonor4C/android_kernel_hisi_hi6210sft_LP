/******************************************************************************

                  ��Ȩ���� (C), 2001-2011, ��Ϊ�������޹�˾

 ******************************************************************************
  �� �� ��      : Om.h
  �� �� ��      : ����
  ��    ��      : ����47350
  ��������      : 2008��5��3��
  ����޸�      :
  ��������      : ��ͷ�ļ�ΪOM��ͷ�ļ�����Ҫ�ṩ���ⲿ����ʹ��
  �����б�      :
  �޸���ʷ      :
  1.��    ��    : 2008��5��3��
    ��    ��    : ����47350
    �޸�����    : �����ļ�

******************************************************************************/
#ifndef _OM_H_
#define _OM_H_

/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/
#include "vos.h"
#include "pslog.h"
#include "mdrv.h"
#include "product_config.h"
#include "OmToolInterface.h"

#ifdef __cplusplus
#if __cplusplus
extern "C"{
#endif
#endif

/*****************************************************************************
  2 �궨��
*****************************************************************************/
/*Om's function type.*/
typedef enum
{
    OM_TRACE_FUNC         = 1,
    OM_AIR_FUNC           = 2,
    OM_FS_FUNC            = 3,
    OM_TRANS_FUNC         = 4,
    OM_EVENT_FUNC         = 5,
    OM_LOG_FUNC           = 6,
    OM_WRF_FUNC           = 7,
    OM_GRF_FUNC           = 8,
    OM_AUTH_NV_FUNC       = 9,
    OM_QUERY_FUNC         = 10,
    OM_NV_FUNC            = 11,
    OM_SIGCAL_FUNC        = 12,
    OM_GREEN_FUNC         = 13,
    OM_PRINTF_FUNC        = 14,
    OM_READSD_FUNC        = 15,
    OM_NOSIG_FUNC         = 16,
    OM_BBP_FUNC           = 17,
    OM_CBT_TRANS_FUNC     = 20,/* Ϊ�˳»۷�����ӣ�18��19���ǿ��Լ����õ� */
    OM_FUNC_ID_BUTT
}OM_FUNC_ID_ENUM;

/*The number of the function id.*/
#define  OM_FUNC_NUM                                            (OM_FUNC_ID_BUTT - 1)

/*ָʾOMͷ�ĳ��ȣ��μ�VOS_OM_HEADER*/
#define VOS_OM_HEADER_LEN                         (4U)

/*OM��Ϣͷ�ĳ��ȣ��μ�OM_APP_MSG_EX_STRU*/
#define OM_APP_MSG_EX_LEN                         (8U)
/*TRACEͷ�ĳ��ȣ��μ�OM_APP_TRACE_STRU*/
#define OM_APP_TRACE_LEN                          (16U)
/*͸����Ϣͷ�ĳ���*/
#define OM_APP_TRANS_LEN                          16
/*EVENTͷ�ĳ��ȣ��μ�OM_APP_EVENT_STRU*/
#define OM_APP_EVENT_LEN                          20
/*LOGͷ�ĳ��ȣ��μ�OM_APP_LOG_STRU*/
#define OM_APP_LOG_LEN                            24


/*Initialize static verison info.*/
#define  OM_MEDIA_VER_LEN                                       (32)
#define  OM_APP_VER_LEN                                         (32)
#define  OM_PS_VER_LEN                                          (32)
#define  OM_SOC_VER_LEN                                         (16)
#define  OM_STR_MAX_LEN                                         (255)
#define  OM_RF_VER_LEN                                          (4)
#define  OM_READ                                                (0)
#define  OM_WRITE                                               (1)
#define  OM_DEFALUT_LEN                                         (0)
#define  OM_PHY_VERSION_INFO                                    (6)
#define  OM_SOC_VERSION_INFO                                    (10)
#define  OM_MEDIA_VERSION_INFO                                  (13)
#define  OM_APP_VERSION_INFO                                    (14)
#define  OM_PS_VERSION_INFO                                     (7)
#define  OM_HWRF_VERSION_INFO                                   (9)
#define  LEN_MOBILE_ID                                          (9)
#define  UE_VERSION_LEN                                         (32)

#define OM_ICC_CHANNEL_PRIORITY                                 (0)


#define OM_A_SOCP_CHANNEL_MAXNUM                                (1)

#define OM_SOCP_RD_THRESHOLD                                    (1)      /* Lx SOCP (1) */

#define OM_WAIT_TIME_MAX                                        (100)

#define OM_ICC_BUFFER_SIZE                                      (16*1024)

#if  ( FEATURE_MULTI_MODEM == FEATURE_ON )
#define OSA_ICC_BUFFER_SIZE                                     (128*1024)
#else
#define OSA_ICC_BUFFER_SIZE                                     (64*1024)
#endif  /* ( FEATURE_MULTI_MODEM == FEATURE_ON ) */

#define OM_ICC_HANDSHAKE_TIME_MAX                               (200000)

#define OM_SOCP_DESECHANNEL_ID                                  (0x10002)

#define OM_SOCP_SID_HSO_CONNECT_STATUS                          (0x0)       /* ����HiStudio�����Modem������״̬ */
#define OM_SOCP_SID_AT                                          (0x1)       /* HSO AT��� */
#define OM_SOCP_SID_DIAG_SERVICE                                (0x2)       /* HSO DIAG������� */
#define OM_SOCP_SID_DATA_SERVICE                                (0x3)       /* ������� */
#define OM_SOCP_SID_NV_SERVICE                                  (0x4)       /* HSO NV����� */
#define OM_SOCP_SID_USIM_SERVICE                                (0x5)       /* HSO USIM��� */
#define OM_SOCP_SID_DM_SERVICE                                  (0x6)       /* HSO �豸������� */
#define OM_SOCP_SID_OM_DATA                                     (0x7)       /* OM������� */

#define OM_SSID_NULL                                            (0x0)       /* δָ�� */
#define OM_SSID_ACPU                                            (0x1)       /* App CPU */
#define OM_SSID_MODEM_CPU                                       (0x2)       /* Modem CPU */
#define OM_SSID_MODEM_DSP                                       (0x3)       /* Modem DSP */
#define OM_SSID_BBP                                             (0x4)       /* BBP */

#define OM_DRV_MAX_IO_COUNT                                     (16)        /*һ���ύ������ӿڵ������Ŀ*/
#define OM_SEND_BD_NUM                                          (100)       /*һ���ύ������SOCP BD�������Ŀ*/

/*OM BUF �ϱ�event��Ϣ��ʱ��ʱ��*/
#define OM_BUFF_TIMER_LENTH                                     (10000)

/* OM CONNECT��Ϣ�ϱ�event��Ϣ��ʱ��ʱ�� */
#define OM_CONNECT_TIMER_LENTH                                  (10000)

/*OM BUF CPUռ���ʱ������ݸ��� */
#define OM_BUFF_ARRAY_NUM                                       (20)

#if(1/* V9�汾*/)
/*��1����Ϊ����������ʱʵ�ʴ�СΪ���볤�ȼ� 1 ,�˴������СΪ1M���պ�Ϊһҳ��
 �������Ա�֤���ݴ���ڻ������е�ż��ַ,��߶�дЧ�ʡ�*/
#define OM_UPLINK_BUFFER_SIZE               ((1024*1024)-1)
#define OM_CNF_BUFFER_SIZE                  ((60*1024)-1)

#else
/* V3R3�汾���ֺ�V3R2һ�� */
/* ��ΪES stick�汾�ڴ治�������Խ�A�˵� size��СΪ480����������Ҫɾ������һ */
#if (OSA_CPU_CCPU == VOS_OSA_CPU)
#define OM_UPLINK_BUFFER_SIZE               ((640*1024)+3)   /* Lx SOCP ((320*1024)+3) */
#else
#define OM_UPLINK_BUFFER_SIZE               ((480*1024)+3)   /* Lx SOCP ((320*1024)+3) */
#endif
#endif

/*****************************************************************************
  3 ö�ٶ���
*****************************************************************************/
enum
{
    OM_FPGA_PLATFORM = 0,
    OM_ASIC_PLATFORM,
    OM_WIN32_PLATFORM,
    OM_SFT_PLATFORM,
    OM_PLATFORM_BUTT
};

enum OM_PCV_CHANNEL_EUNM
{
    OM_PCV_CHANNEL_OPEN = 0,
    OM_PCV_CHANNEL_CLOSE,
    OM_PCV_CHANNEL_SWITCH,
    OM_PCV_CHANNEL_BUTT
};

enum OM_SOCP_HDLC_FLAG_ENUM
{
    OM_SOCP_HDLC_ENABLE         = 0,    /*��ǰHDLC���ܴ�*/
    OM_SOCP_HDLC_DISABLE        = 1,    /*��ǰHDLC���ܹر�*/
    OM_SOCP_HDLC_FLAG_BUTT
};

enum OM_DATA_DESTINATION_ENUM
{
    OMRL_UART = 0,              /*������*/
    OMRL_USB,                   /*USBͨ��*/
    OMRL_FS,                    /*д�ļ�ϵͳ*/
    OMRL_WIFI,                  /*SOCKET WIFIͨ��*/
    OMRL_SD,                    /*дSD��*/
    OMRL_PORT_BUTT
};
typedef VOS_UINT16 OM_DATA_DESTINATION_ENUM_UIN16;
typedef VOS_UINT32 OM_DATA_DESTINATION_ENUM_UIN32;

enum OM_USB_PORT_ENUM
{
    OMRL_USB_OM = 1,            /*OM����˿�*/
    OMRL_USB_AT,                /*AT����˿�*/
    OMRL_USB_SHELL,             /*shell����˿�*/
    OMRL_USB_CONTROL = 5,
    OMRL_USB_BUTT
};
typedef VOS_UINT16 OM_USB_PORT_ENUM_UINT16;
typedef VOS_UINT32 OM_USB_PORT_ENUM_UINT32;

enum OM_ICC_CHANNEL_ENUM
{
    OM_OM_ICC_CHANNEL           = 0,    /*��ǰͨ�����ڴ���OM����*/
    OM_OSA_MSG_ICC_CHANNEL,             /*��ǰͨ�����ڴ���OSA����Ϣ����*/
    OM_ICC_CHANNEL_BUTT
};
typedef VOS_UINT32 OM_ICC_CHANNEL_ENUM_UINT32;

enum OM_PORT_STATE_ENUM
{
    OM_PORT_INSERT              = 0,    /*��ǰ�˿ڲ���*/
    OM_PORT_PULLOUT             = 1,    /*��ǰ�˿ڰγ�*/
    OM_PORT_STATE_BUTT
};
typedef VOS_UINT32 OM_PORT_STATE_ENUM_UINT32;

enum OM_SOCP_BD_TYPE_ENUM
{
    OM_SOCP_BD_DATA             = 0,    /*SOCP BD���ݿռ�ʹ��ʵ������*/
    OM_SOCP_BD_LIST             = 1,    /*SOCP BD���ݿռ�ʹ��ʵ�����ݵ�ָ��*/
    OM_SOCP_BD_BUTT
};
typedef VOS_UINT16 OM_SOCP_BD_TYPE_ENUM_UINT16;

/*****************************************************************************
ö����    : OM_AT_MSG_ENUM
ö��˵��  : AT��OM���͵�������Ϣ����

  1.��    ��   : 2012��4��4��
    ��    ��   : h59254
    �޸�����   : V7R1C51 ����������Ŀ����
*****************************************************************************/
enum OM_AT_MSG_ENUM
{
    AT_OM_PORT_SWITCH           = 0,    /* OM���л�������USB��HSIC֮���л� */
    AT_OM_HSIC_PORT_CONNECT,            /* OM��OM����HSIC������ */
    AT_OM_HSIC_PORT_DISCONNECT,         /* OM��OM����HSICȡ������ */
    AT_OM_MSG_BUTT
};
typedef VOS_UINT32 OM_AT_MSG_ENUM_UINT32;

/*****************************************************************************
ö����    : OM_PORT_SWITCH_MODE_ENUM
ö��˵��  : USB SWITCH�л�����

  1.��    ��   : 2012��4��4��
    ��    ��   : h59254
    �޸�����   : V7R1C51 ��ά�ɲ���Ŀ����
*****************************************************************************/
enum OM_PORT_SWITCH_MODE_ENUM
{
    OM_PORT_SWITCH_MODEM2AP     = USB_SWITCH_OFF,
    OM_PORT_SWITCH_AP2MODEM     = USB_SWITCH_ON,
    OM_PORT_SWITCH_BUTT
};
typedef VOS_UINT32 OM_PORT_SWITCH_MODE_ENUM_UINT32;



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
    VOS_MSG_HEADER                                                     /* ����Ϣͷ���TOOL_ID��PS��PID,��֤��Ϣ��ת������Ӧ��PSģ�� */
    VOS_UINT16                          usTransPrimId;          /* �̶���д0x5001*/
    VOS_UINT16                          usReserve;
    VOS_UINT8                           ucFuncType;              /*���ݲ�ѯ04,�տ���Ϣ�ϱ�:02*/
    VOS_UINT8                           ucReserve;
    VOS_UINT16                          usAppLength;            /*��һ���ֽڵ���β�ĳ���*/
    VOS_UINT32                          ulSn;                          /* �ϱ���Ϣ�����к� */
    VOS_UINT32                          ulTimeStamp;            /*��Ϣ��ʱ������ǰ��SOC Tickֵ*/
    VOS_UINT16                          usPrimId;                  /* ԭ��ID*/
    VOS_UINT16                          usToolsId;                 /* ����ID */
    VOS_UINT8                           aucData[4];                /*������Ϣ������*/
}PS_OM_TRANS_IND_STRU;

typedef PS_OM_TRANS_IND_STRU PS_OM_TRANS_CNF_STRU;

typedef struct
{
    VOS_MSG_HEADER                                          /* ����Ϣͷ���TOOL_ID��PS��PID,��֤��Ϣ��ת������Ӧ��PSģ�� */
    VOS_UINT16                          usPrimId;           /* ԭ��ID*/
    VOS_UINT16                          usToolsId;          /* Ŀǰ����������ID������֧�ֶ๤�ߣ��ɹ��߶��壬UE��ԭֵ���ؼ��� */
    VOS_UINT8                           aucData[4];         /*������Ϣ������*/
}OM_PS_PARAM_REQ_STRU;

typedef struct
{
    VOS_OM_HEADER
    VOS_UINT32      ulSn;           /*Sequence Number for Trace, Event, OTA msg.*/
    VOS_UINT32      ulTimeStamp;    /*CPU time coming from ARM.*/
}OM_APP_HEADER_STRU;

typedef struct
{
    OM_APP_HEADER_STRU  stAppHeader;
    VOS_UINT16          usPrimId;
    VOS_UINT16          usToolId;
    VOS_UINT8           aucPara[4];
}OM_APP_TRACE_STRU;

typedef struct
{
    OM_APP_HEADER_STRU  stAppHeader;
    VOS_UINT16          usPrimId;
    VOS_UINT16          usToolId;
    VOS_UINT8           aucPara[8];
}OM_APP_TRACE_STRU_EX;

typedef struct
{
    VOS_UINT32  ulLength;
    VOS_UINT16  usEventId;
    VOS_UINT16  usReserved;
    VOS_UINT32  ulModuleId;
    VOS_UINT8   aucData[4];
}PS_OM_EVENT_IND_STRU;

typedef struct
{
    VOS_UINT8    ucClassmark2Length;
    VOS_UINT8    ucClassmark2[3];
} CLASSMARK2_STRU;

 typedef struct
{
    VOS_UINT8    ucClassmark3Length;
    VOS_UINT8    ucClassmark3[13];
} CLASSMARK3_STRU;

typedef struct
{
    VOS_UINT8    ucClassmark1;
    VOS_UINT8    ucReserved1[3];
    CLASSMARK2_STRU   classmark2;
    CLASSMARK3_STRU   classmark3;
    VOS_UINT8    ucReserved2[2];
} CLASSMARK_STRU;

typedef struct
{
    VOS_UINT8    ucLength;
    VOS_UINT8    ucMobileIDValue[9];
} MOBILE_ID_STRU;

typedef struct
{
    VOS_UINT32                  ulPlatformType;
    VERSIONINFO_I               staVersion[VER_INFO_NUM];
}OM_QUERY_VERSION_INFO_STRU;

typedef struct
{
    VOS_UINT32 ulHwVersion;                    /*Ӳ��RF�汾��Ϣ*/
}OM_DEVICE_VERSION_INFO_STRU;

typedef struct
{
    VOS_UINT16     Hi6410Version;
    VOS_UINT16     Hi6510Version;
    VOS_UINT16     Hi6511Version;
    VOS_UINT16     usRslv[5];
}OM_SOC_VERSION_INFO_STRU;  /* �����汾��Ϣ */

/*PC->OM ���ݰ��ṹ��*/
typedef struct
{
    VOS_UINT8  ucModuleId;
    VOS_UINT8  ucReserved;
    VOS_UINT16 usLength;
    VOS_UINT8  aucCommand[4];
}OM_REQ_PACKET_STRU;

/*OM->PC ���ݰ��ṹ��*/
typedef struct
{
    VOS_UINT8  ucModuleId;
    VOS_UINT8  ucReserved;
    VOS_UINT16 usLength;
    VOS_UINT8  aucFeedback[4];
}OM_RSP_PACKET_STRU;

/*ICCͨ�����ڶ˿�״̬����Ϣ���ݽṹ*/
typedef struct
{
    OM_USB_PORT_ENUM_UINT32         enPortNum;      /*��ǰ�Ķ˿�����*/
    OM_PORT_STATE_ENUM_UINT32       enState;        /*��ǰ�Ķ˿�״̬*/
}OM_ICC_PORT_STATE_MSG_STRU;

/*����ICCͨ��UDI��������Ƭ�ṹ*/
typedef struct
{
    VOS_UINT32                      enICCId;        /*������ĵ�ǰͨ����*/
    ICC_CHAN_ATTR_S                *pstICCAttr;     /*��ǰͨ������*/
}OM_ICC_UDI_CTRL_STRU;

/*����ICCͨ���Ŀ�����Ϣ���ݽṹ*/
typedef struct
{
    UDI_HANDLE                      UDIHdle;        /*UDI���*/
    VOS_UINT8                       aucRsv[4];
    OM_ICC_UDI_CTRL_STRU            stUDICtrl;      /*UDI������Ϣ*/
}OM_ICC_CHANNEL_CTRL_STRU;

/*****************************************************************************
�ṹ��    : AT_OM_MSG_STRU
�ṹ˵��  : AP+MODEM��̬��ƷAT��OM������Ϣ�ṹ

  1.��    ��   : 2012��4��18��
    ��    ��   : h59254
    �޸�����   : ��ʼ����
*****************************************************************************/
typedef struct
{
    VOS_MSG_HEADER
    VOS_UINT32                      ulMsgName;
}AT_OM_MSG_STRU;

/*****************************************************************************
�ṹ��    : OM_PORT_SWITCH_MSG_STRU
�ṹ˵��  : AP+MODEM��̬��ƷAP-Modem USB�л���Ϣ�ṹ

  1.��    ��   : 2012��4��10��
    ��    ��   : h59254
    �޸�����   : ��ʼ����
*****************************************************************************/
typedef struct
{
   VOS_MSG_HEADER
   OM_AT_MSG_ENUM_UINT32            ulMsgName;      /*�л���Ϣ��*/
   OM_PORT_SWITCH_MODE_ENUM_UINT32  ulSwitchMode;   /*�л�ģʽ����AP��Modem��Modem��AP*/
}OM_PORT_SWITCH_MSG_STRU;

/*****************************************************************************
�ṹ��    : OM_HSIC_CONNECT_MSG_STRU
�ṹ˵��  : AP+MODEM��̬��ƷATҪ�����OM��HSIC����Ϣ�ṹ

  1.��    ��   : 2012��4��10��
    ��    ��   : h59254
    �޸�����   : ��ʼ����
*****************************************************************************/
typedef struct
{
   VOS_MSG_HEADER
   OM_AT_MSG_ENUM_UINT32            ulMsgName;      /*�л���Ϣ��*/
}OM_HSIC_CONNECT_MSG_STRU;

typedef struct
{
   VOS_UINT16                       usSendPid;
   VOS_UINT16                       usRcvPid;
   VOS_UINT32                       ulMsgName;
   VOS_UINT32                       ulSliceStart;
   VOS_UINT32                       ulSliceEnd;
}OM_RECORD_INFO_STRU;

typedef struct
{
   VOS_UINT8                       *pucBuf;
   VOS_UINT32                       ulLen;
   VOS_UINT8                        aucRsv[4];
}OM_RECORD_BUF_STRU;

typedef struct
{
    VOS_MSG_HEADER
    VOS_UINT16                      usPrimId;            /* ��ϢID */
    VOS_UINT16                      usLen;
    VOS_UINT8                       aucData[4];
}OM_CBT_MSG_STRU;

/*****************************************************************************
  8 UNION����
*****************************************************************************/


/*****************************************************************************
  9 OTHERS����
*****************************************************************************/
typedef VOS_UINT32(*OM_PORT_READ_DATA_CB)(VOS_UINT8 *pucData, VOS_UINT16 usDataLen);

typedef VOS_UINT32 OM_RSP_FUNC(OM_RSP_PACKET_STRU *pstRspPacket, VOS_UINT16 usLength);

typedef VOS_VOID   OM_REQUEST_PROCEDURE(OM_REQ_PACKET_STRU *pstRspPacket, OM_RSP_FUNC *pstRspFuncPtr);

/*****************************************************************************
  10 ��������
*****************************************************************************/
VOS_UINT32 WuepsOmPidInit ( enum VOS_INIT_PHASE_DEFINE ip );
VOS_VOID   OM_MsgProc(MsgBlock* pMsg);
VOS_UINT32 OM_Event(PS_OM_EVENT_IND_STRU *pstEvent);
VOS_INT32  OM_RegisterRequestProcedure(VOS_UINT8 ucModuleId, OM_REQUEST_PROCEDURE *pReqPro);
VOS_VOID   OM_AddSNTime(VOS_UINT32 *pulSN, VOS_UINT32 *pulTimeStamp);
VOS_UINT32 OM_SendData(OM_RSP_PACKET_STRU *pucMsg, VOS_UINT16 usMsgLen);
VOS_UINT32 OM_GreenChannel(VOS_UINT8 ucFuncType, VOS_UINT16 usPrimId,
                                    VOS_UINT8 *pucData, VOS_UINT16 usLen);
VOS_VOID   OM_TimerMsgProc(MsgBlock* pMsg);

/*****************************************************************************
 Prototype       : OM_GetSlice
 Description     : ���ݵ�ǰ�Ƿ�ΪASIC�汾���ṩ��ͬ��ʱ���
 Input           : None
 Output          : None
 Return Value    : VOS_UINT32

 History         : ---
    Date         : 2008-12-08
    Author       : g47350
    Modification : Created function
 *****************************************************************************/
#if ((OSA_CPU_ACPU == VOS_OSA_CPU)||(VOS_WIN32 == VOS_OS_VER))
extern VOS_UINT32 OM_GetSlice(VOS_VOID);
#else
static inline __attribute__((always_inline)) VOS_UINT32 OM_GetSlice(VOS_VOID)
{
    /* Add for L Only version */
    if (PROTOCOL_TYPE_LTE_ONLY == VOS_GetProtocolType())
    {
        return VOS_GetTick();
    }

    return mdrv_timer_get_normal_timestamp();
}
#endif

VOS_UINT32 OmGetUsimTemp(VOS_INT *plUsimTemp);
VOS_UINT32 OmGetAfcLockFlag(VOS_UINT16 *pusAfcCurrVal);
extern VOS_VOID OM_Add64BitTimeStamp(VOS_UINT32 *pulTimerLow, VOS_UINT32 *pulTimeHigh);
extern VOS_UINT32 OM_Read32Reg(VOS_UINT_PTR ulRegAddr);
extern VOS_VOID   OM_Write32Reg(VOS_UINT_PTR ulRegAddr, VOS_UINT32 ulRegVal);
extern VOS_UINT16 OM_Read16Reg(VOS_UINT_PTR ulRegAddr);
extern VOS_VOID   OM_Write16Reg( VOS_UINT_PTR ulRegAddr, VOS_UINT16 usRegVal);

extern VOS_VOID OM_RecordInfoEnd(VOS_EXC_DUMP_MEM_NUM_ENUM_UINT32 enNumber);

extern VOS_VOID OM_RecordInfoStart(VOS_EXC_DUMP_MEM_NUM_ENUM_UINT32 enNumber, VOS_UINT32 ulSendPid, VOS_UINT32 ulRcvPid, VOS_UINT32 ulMsgName);

extern VOS_VOID OM_SetDrxTimerWakeSrc(MODEM_ID_ENUM_UINT16 enModem);
extern VOS_VOID OM_DelDrxTimerWakeSrc(MODEM_ID_ENUM_UINT16 enModem);
extern VOS_VOID OM_AcpuLogShowToFile(VOS_BOOL bIsSendMsg);
extern VOS_UINT32 OM_GetLogPath(VOS_CHAR *pucBuf, VOS_CHAR *pucOldPath, VOS_CHAR *pucUnitaryPath);

#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif

#endif
