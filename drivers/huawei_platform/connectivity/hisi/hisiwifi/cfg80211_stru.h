

#ifndef __CFG80211_STRU_H__
#define __CFG80211_STRU_H__

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/
#include "common.h"
#include <linux/netlink.h>

/*****************************************************************************/
/* Data Types                                                                */
/*****************************************************************************/

#pragma pack(1)

/*****************************************************************************
  2 �궨��
*****************************************************************************/
/* �ϱ�����Ϣ����I,R,W eg. */
#define MSG_TYPE_REPORT_STATUS   'I'

#define AP_TO_STA_MAX_NUM       8

#ifdef MAC_802_11W
#define NETLINK_PMF (NETLINK_HISI_WIFI_PMF)   /* ����ֵ���ܺ�linux���ж����ͻ */
#endif

#define HISI_WIFI_DBB_LEN               256

/*****************************************************************************
  3 ö�ٶ���
*****************************************************************************/
/* HOST���·��������Ͷ��� */
enum HOST_CMD_TYPE_ENUM
{
    HOST_CMD_SCAN       = 0,            /* ɨ���������� */
    HOST_CMD_CONNECT    = 1,            /* ������������ */
    HOST_CMD_DISCONNECT = 2,            /* ȥ������������ */
    HOST_CMD_STATS      = 3,            /* ��ѯ�������� */
    HOST_CMD_MODE       = 4,            /* ģʽ�л����� */
    HOST_CMD_CONFIG     = 5,            /* �������� */
    HOST_CMD_MGMT_FRAME = 6,            /* �·�����֡���� */
    HOST_CMD_LISTEN     = 7,            /* �·��������� */
    HOST_CMD_INIT       = 8,            /* �ϵ��ʼ������ */
    HOST_CMD_CANCEL_LISTEN = 9,         /*  ȡ��device����״̬ */
#ifdef __ROAM__
    HOST_CMD_ROAM       = 10,
#endif
#ifdef MAC_802_11W
    HOST_CMD_PMF        = 11,            /* PMF�������� */
#endif
    HOST_CMD_INVALID       ,            /* ��Ч����,����ִ������������ */

    HOST_CMD_BUTT
};

/* HOST���·��������Ͷ��� */
enum DEVICE_STATUS_TYPE_ENUM
{
    DEVICE_STATUS_NET_INFO          = 0,    /* ɨ��AP״̬�ϱ� */
    DEVICE_STATUS_SCAN_COMP         = 1,    /* ɨ������ϱ� */
    DEVICE_STATUS_ASOC_COMP         = 2,    /* ��������ϱ� */
    DEVICE_STATUS_DISCONNECT        = 3,    /* DISCONNECT�ϱ� */
    DEVICE_STATUS_STATS             = 4,    /* ͳ�Ʋ�ѯ�ϱ� */
    DEVICE_STATUS_CONNECT           = 5,    /* APģʽ��STA�ɹ�������AP�ϱ� */
    DEVICE_STATUS_MODE              = 6,    /* ģʽ�л���״̬�ϱ� */
    DEVICE_STATUS_CONFIG            = 7,    /* ��������״̬�ϱ� */
    DEVICE_STATUS_FRAME             = 8,    /* �ϱ�����֡��0-Probe request 1-P2P action*/
    DEVICE_STATUS_INIT              = 9,    /* �ϵ��ʼ��״̬�ϱ� */
    DEVICE_STATUS_READY             = 10,   /* Device׼����ϣ��ȴ��������� */
    DEVICE_STATUS_CURRENT           = 11,   /* ��ǰ״̬��ѯ�ϱ� */
#ifdef MAC_802_11W
    DEVICE_STATUS_PMF               = 12,   /* �ϱ����ܹ���֡: 0-Disassociation 1-Deauthentication 2-SA Query Response */
#endif

#ifdef __ROAM__
    DEVICE_STATUS_ROAM              = 13,
#endif
    DEVICE_STATUS_SPEC_BA_SESSION   = 14,   /* �ϱ�ָ��mac��ַ��ba�Ự��� */
    DEVICE_STATUS_ALL_BA_SESSION    = 15,   /* �ϱ�����mac��ַ��ba�Ự��� */

    DEVICE_STATUS_TKIP_MIC_FAILURE  = 16,   /* MIC Failure report �ϱ� */
    DEVICE_EC212_REPORT             = 17,

    DEVICE_STATUS_BUTT
};

/* �ϱ�����֡�����Ͷ��� */
enum DEVICE_FRAME_TYPE_ENUM
{
    DEVICE_FRAME_PROBE_REQUEST  = 0,    /* Probe request֡ */
    DEVICE_FRAME_ACTION         = 1,    /* P2P action֡ */
    DEVICE_FRAME_ASSOC_REQ      = 2,    /* Assoc Req frame */
    DEVICE_FRAME_REASSOC_REQ    = 3,    /* ReAssoc Req frame */

    DEVICE_FRAME_BUTT
};

/* ����������Ͷ��� */
enum ASOC_STATUS_TYPE_ENUM
{
    ASOC_STATUS_SUCC        = 0,    /* �����ɹ� */
    ASOC_STATUS_JOIN_FAILED = 1,    /* JOINʧ�� */
    ASOC_STATUS_AUTH_FAILED = 2,    /* AUTHʧ�� */
    ASOC_STATUS_ASOC_FAILED = 3,    /* ASOCʧ�� */

    ASOC_STATUS_BUTT
};
#define JOIN_FAILED_STATUS_0    0 /* JOINʧ��״̬�� */
#define JOIN_FAILED_STATUS_1    1 /* JOINʧ��״̬�� */

/* WLAN Identifiers */
typedef enum {
    WID_NIL                            = -1,
    /* EMAC Character WID list */
    WID_BSS_TYPE                       = 0x0000,
    WID_CURRENT_TX_RATE                = 0x0001,
    WID_PRIMARY_CHANNEL                = 0x0002,
    WID_PREAMBLE                       = 0x0003,
    WID_11G_OPERATING_MODE             = 0x0004,
    WID_STATUS                         = 0x0005,
    WID_SCAN_TYPE                      = 0x0007,
    WID_PRIVACY_INVOKED                = 0x0008,
    WID_KEY_ID                         = 0x0009,
    WID_QOS_ENABLE                     = 0x000A,
    WID_POWER_MANAGEMENT               = 0x000B,
    WID_11I_MODE                    = 0x000C,
    WID_AUTH_TYPE                      = 0x000D,
    WID_SITE_SURVEY                    = 0x000E,
    WID_LISTEN_INTERVAL                = 0x000F,
    WID_FILTER_GROUP_DATA              = 0x00E3,
    WID_HI1101_PS_SWITCH               = 0x00E4,
    WID_DTIM_PERIOD                    = 0x0010,
    WID_ACK_POLICY                     = 0x0011,
    WID_RESET                          = 0x0012,
    WID_BCAST_SSID                     = 0x0015,
    WID_DEL_TYPE                       = 0x0016,
    WID_READ_ADDR_SDRAM                = 0x0017,
    WID_TX_POWER_LEVEL_11A             = 0x0018,
    WID_REKEY_POLICY                   = 0x0019,
    WID_SHORT_SLOT_ALLOWED             = 0x001A,
    WID_PHY_ACTIVE_REG                 = 0x001B,
    WID_TX_POWER_LEVEL_11B             = 0x001D,
    WID_START_SCAN_REQ                 = 0x001E,
    WID_RSSI                           = 0x001F,
    WID_JOIN_REQ                       = 0x0020,
    WID_USER_CONTROL_ON_TX_POWER       = 0x0027,
    WID_MEMORY_ACCESS_8BIT             = 0x0029,
    WID_UAPSD_SUPPORT_AP               = 0x002A,
    WID_CURRENT_MAC_STATUS             = 0x0031,
    WID_AUTO_RX_SENSITIVITY            = 0x0032,
    WID_DATAFLOW_CONTROL               = 0x0033,
    WID_SCAN_FILTER                    = 0x0036,
    WID_LINK_LOSS_THRESHOLD            = 0x0037,
    WID_AUTORATE_TYPE                  = 0x0038,
    WID_802_11H_DFS_MODE               = 0x003B,
    WID_802_11H_TPC_MODE               = 0x003C,
    WID_WPS_ENABLE                     = 0x0041,
    WID_WPS_START                      = 0x0043,
    WID_WPS_DEV_MODE                   = 0x0044,
    WID_OOB_RESET_REQ                  = 0x0046,
    WID_ENABLE_INT_SUPP                = 0x0047,
    WID_DEVICE_MODE                    = 0x0048,
    WID_WAPI_MODE                      = 0x0060,                      /*char*/
    WID_PS_MODE                        = 0x0070,
    WID_PS_ENABLE                      = 0x0071,


    /* NMAC Character WID list */
    WID_11N_PROT_MECH                  = 0x0080,
    WID_11N_ERP_PROT_TYPE              = 0x0081,
    WID_11N_ENABLE                     = 0x0082,
    WID_11N_OPERATING_TYPE             = 0x0083,
    WID_11N_OBSS_NONHT_DETECTION       = 0x0084,
    WID_11N_HT_PROT_TYPE               = 0x0085,
    WID_11N_RIFS_PROT_ENABLE           = 0x0086,
    WID_11N_SMPS_MODE                  = 0x0087,
    WID_11N_CURRENT_TX_MCS             = 0x0088,
    WID_11N_PRINT_STATS                = 0x0089,
    WID_HUT_FCS_CORRUPT_MODE           = 0x008A,
    WID_HUT_RESTART                    = 0x008B,
    WID_HUT_TX_FORMAT                  = 0x008C,
    WID_11N_SHORT_GI_ENABLE            = 0x008D,
    WID_HUT_BANDWIDTH                  = 0x008E,
    WID_HUT_OP_BAND                    = 0x008F,
    WID_HUT_STBC                       = 0x0090,
    WID_HUT_ESS                        = 0x0091,
    WID_HUT_ANTSET                     = 0x0092,
    WID_HUT_HT_OP_MODE                 = 0x0093,
    WID_RIFS_MODE                      = 0x0094,
    WID_HUT_SMOOTHING_REC              = 0x0095,
    WID_HUT_SOUNDING_PKT               = 0x0096,
    WID_HUT_HT_CODING                  = 0x0097,
    WID_HUT_TEST_DIR                   = 0x0098,
    WID_HUT_PHY_TEST_MODE              = 0x009A,
    WID_HUT_PHY_TEST_RATE_HI           = 0x009B,
    WID_HUT_PHY_TEST_RATE_LO           = 0x009C,
    WID_HUT_DISABLE_RXQ_REPLENISH      = 0x009D,
    WID_HUT_KEY_ORIGIN                 = 0x009E,
    WID_HUT_BCST_PERCENT               = 0x009F,
    WID_HUT_GROUP_CIPHER_TYPE          = 0x00A0,
    WID_TX_ABORT_CONFIG                = 0x00A1,
    WID_HOST_DATA_IF_TYPE              = 0x00A2,
    WID_HOST_CONFIG_IF_TYPE            = 0x00A3,
    WID_HUT_TSF_TEST_MODE              = 0x00A4,
    WID_HUT_PKT_TSSI_VALUE             = 0x00A5,
    WID_REG_TSSI_11B_VALUE             = 0x00A6,
    WID_REG_TSSI_11G_VALUE             = 0x00A7,
    WID_REG_TSSI_11N_VALUE             = 0x00A8,
    WID_TX_CALIBRATION                 = 0x00A9,
    WID_DSCR_TSSI_11B_VALUE            = 0x00AA,
    WID_DSCR_TSSI_11G_VALUE            = 0x00AB,
    WID_DSCR_TSSI_11N_VALUE            = 0x00AC,
    WID_HUT_RSSI_EX                    = 0x00AD,
    WID_HUT_ADJ_RSSI_EX                = 0x00AE,
    WID_11N_IMMEDIATE_BA_ENABLED       = 0x00AF,
    WID_11N_TXOP_PROT_DISABLE          = 0x00B0,
    WID_TX_POWER_LEVEL_11N             = 0x00B1,
    WID_2040_COEXISTENCE               = 0x00C1,
    WID_HUT_FC_TXOP_MOD                = 0x00C2,
    WID_HUT_FC_PROT_TYPE               = 0x00C3,
    WID_HUT_SEC_CCA_ASSERT             = 0x00C4,
    WID_2040_ENABLE                    = 0x00C5,
    WID_2040_40MHZ_INTOLERANT          = 0x00C7,
    WID_11N_CURRENT_TX_BW              = 0x00C8,
    WID_TX_POWER_LEVEL_11N_40MHZ       = 0x00C9,

   /* TPC char WID list */
   WID_OLTPC_SWITCH                    = 0x00D1,
   WID_OLTPC_UPPOWERCON                = 0x00D2,
   WID_OLTPC_ACTIVE                    = 0x00D3,
   WID_OLTPC_RFCHLOSS                  = 0x00D4,
   WID_CURRENT_TX_POW                  = 0x00D7,
    /* arp offload */
   WID_ARP_OFFLOAD_ENABLE              = 0x00E1,

   WID_KEEP_ALIVE_ENABLE               = 0x00E2,

    /* Custom Character WID list */
    WID_P2P_ENABLE                     = 0x0201,
    WID_P2P_DISCOVERABLE               = 0x0202,
    WID_P2P_LISTEN_CHAN                = 0x0203,
    WID_P2P_FIND_TO                    = 0x0204,
    WID_P2P_GO_INT_VAL                 = 0x0205,
    WID_P2P_PERSIST_GRP                = 0x0206,
    WID_P2P_AUTO_GO                    = 0x0207,
    WID_P2P_INTRA_BSS                  = 0x0208,
    WID_P2P_CT_WINDOW                  = 0x0209,

    /* DFX Character WID list */
    /* OTA */
    WID_DFX_MAC_STATICS                = 0x0300,  /* ��ӡͳ�� */
    WID_DFX_OTA_ON                     = 0x0301,  /* ��OTA */
    WID_DFX_OTA_OFF                    = 0x0302,  /* �ر�OTA */
    WID_DFX_FUNC_TRACE                 = 0x0303,  /* �����켣���� */

    WID_DFX_RUNTC                      = 0x0311, /* run test case */
    WID_DFX_STATUS                     = 0x0312, /* ״̬ */
    WID_DFX_HWAR                       = 0x0313, /* Ӳ���Զ����ʵ��� */

    WID_11B_SCALE                       = 0x0314, /* 11B scale */
    WID_11A_SCALE                       = 0x0315, /* 11A scale */

    WID_AP_INDEX                        = 0x0316, /* get AP index */

    /* DFS  Character WID list */
    WID_DFS_CHAN_SWITCH_MODE            = 0x0321, /* DFS �ŵ��л�ģʽ */
    WID_DFS_CHAN_SWITCH_CNT             = 0x0322, /* DFS �ŵ��л����� */
    WID_DFS_RADAR_STANDARD              = 0x0323, /* �״����׼ */

    WID_HOST_CMD                        = 0x0400,   /* ���������·�����WID */
    WID_HOST_RST                        = 0x0401,   /* ��λWID */
    WID_CHAR_STATS                      = 0x0402,   /* ͳ�Ʋ�ѯ���� */
    WID_CHAR_HOST_IF                    = 0x0403,   /* */
    WID_MODE_CHANGE                     = 0x0404,   /* ģʽ�л����� */
    WID_START_AP_NETWORK                = 0x0405,   /* AP���ADD Beacon֡��������ʹ�� */
    WID_MAX_NUM_STA                     = 0x0407,   /* ����STA������û��� */
    WID_CHAR_RESERVE                    = 0x0408,   /* ����40M short gi */
    WID_AMSDU_LEN_FIX                   = 0x0409,   /* ����AMSDU���Ȳ������� */
    WID_CHAR_RESERVE02                  = 0x040A,   /* Ԥ��CHAR����WID�ӿ� */

    WID_11I_ENCYPT_MODE                 = 0x0420,
    WID_11I_PAIRWISE_CIPHER_MODE        = 0x0421,
    WID_11I_GROUP_CIPHER_MODE           = 0x0422,
#ifdef MAC_802_11W
    WID_PMF_ACTIVATED                   = 0x0423,
    WID_UNPMF_ALLOWED                   = 0x0424,
#endif
    WID_BA_CONTROL_SET                  = 0x0440,

    WID_DFX_LOG_ON                      = 0x0500, /* log swtich: ������־ */
    WID_DFX_LOG_OFF                     = 0x0501, /* log swtich: �ر���־ */

    /* EMAC Short WID list */
    WID_RTS_THRESHOLD                  = 0x1000,
    WID_FRAG_THRESHOLD                 = 0x1001,
    WID_SHORT_RETRY_LIMIT              = 0x1002,
    WID_LONG_RETRY_LIMIT               = 0x1003,
    WID_BEACON_INTERVAL                = 0x1006,
    WID_MEMORY_ACCESS_16BIT            = 0x1008,
    WID_RX_SENSE                       = 0x100B,
    WID_ACTIVE_SCAN_TIME               = 0x100C,
    WID_PASSIVE_SCAN_TIME              = 0x100D,
    WID_SITE_SURVEY_SCAN_TIME          = 0x100E,
    WID_JOIN_START_TIMEOUT             = 0x100F,
    WID_AUTH_TIMEOUT                   = 0x1010,
    WID_ASOC_TIMEOUT                   = 0x1011,
    WID_11I_PROTOCOL_TIMEOUT           = 0x1012,
    WID_EAPOL_RESPONSE_TIMEOUT         = 0x1013,
    WID_WPS_PASS_ID                    = 0x1017,
    WID_WPS_CONFIG_METHOD              = 0x1018,

    WID_USER_PREF_CHANNEL              = 0x1020,
    WID_CURR_OPER_CHANNEL              = 0x1021,

    WID_PA_GAIN                        = 0x1072, /* PA Gain Scale */
    WID_UPC_GAIN                       = 0x1073, /* UPC Gain Scale */

    WID_UPC_STATUS                     = 0x1074, /* CHECK UPC */
    WID_SHORT_RESERVE                  = 0x1075, /* Ԥ��SHORT����WID�ӿ� */


    /* NMAC Short WID list */
    WID_HUT_FRAME_LEN                  = 0x1081,
    WID_HUT_TXOP_LIMIT                 = 0x1082,
    WID_HUT_SIG_QUAL_AVG               = 0x1083,
    WID_HUT_SIG_QUAL_AVG_CNT           = 0x1084,
    WID_11N_SIG_QUAL_VAL               = 0x1085,
    WID_HUT_RSSI_EX_COUNT              = 0x1086,
    WID_CCA_THRESHOLD                  = 0x1087,

    /* Custom Short WID list */
    WID_OLTPC_POWER_MIN                = 0x1090,
    WID_OLTPC_ESTIMATE_PERIOD          = 0x1091,

    WID_FLCTL_MEM_THRESHOLD_UP         = 0x1092,
    WID_FLCTL_MEM_THRESHOLD_DOWN       = 0x1093,
    WID_CALI_MASK_CTRL                 = 0x1094,

    /* Lte coex set bit */
    WID_LTE_COEX_ENABLE                = 0x1095,

    /* EMAC Integer WID list */
    WID_FAILED_COUNT                   = 0x2000,
    WID_RETRY_COUNT                    = 0x2001,
    WID_MULTIPLE_RETRY_COUNT           = 0x2002,
    WID_FRAME_DUPLICATE_COUNT          = 0x2003,
    WID_ACK_FAILURE_COUNT              = 0x2004,
    WID_RECEIVED_FRAGMENT_COUNT        = 0x2005,
    WID_MCAST_RECEIVED_FRAME_COUNT     = 0x2006,
    WID_FCS_ERROR_COUNT                = 0x2007,
    WID_SUCCESS_FRAME_COUNT            = 0x2008,
    WID_HUT_TX_COUNT                   = 0x200A,
    WID_TX_FRAGMENT_COUNT              = 0x200B,
    WID_TX_MULTICAST_FRAME_COUNT       = 0x200C,
    WID_RTS_SUCCESS_COUNT              = 0x200D,
    WID_RTS_FAILURE_COUNT              = 0x200E,
    WID_WEP_UNDECRYPTABLE_COUNT        = 0x200F,
    WID_REKEY_PERIOD                   = 0x2010,
    WID_REKEY_PACKET_COUNT             = 0x2011,
    WID_1X_SERV_ADDR                   = 0x2012,
    WID_STACK_IP_ADDR                  = 0x2013,
    WID_STACK_NETMASK_ADDR             = 0x2014,
    WID_HW_RX_COUNT                    = 0x2015,
    WID_MEMORY_ADDRESS                 = 0x201E,
    WID_MEMORY_ACCESS_32BIT            = 0x201F,
    WID_RF_REG_VAL                     = 0x2021,
    WID_DEV_OS_VERSION                 = 0x2025,
    WID_CHANNEL                         = 0x2026, /* ָ���ŵ� */
    WID_SEND_CHANNEL                   = 0x2027,

    /* NMAC Integer WID list */
    WID_11N_PHY_ACTIVE_REG_VAL         = 0x2080,
    WID_HUT_NUM_TX_PKTS                = 0x2081,
    WID_HUT_TX_TIME_TAKEN              = 0x2082,
    WID_HUT_TX_TEST_TIME               = 0x2083,
    WID_KEEP_ALIVE_TIME                = 0x2101,

    /* Custom Integer WID list */

    /* DFX Integer WID list */
    WID_DFX_MEM_VIEW                   = 0x2301, /* �鿴ָ����ַ�ڴ��ϵ�ֵ */
    WID_11N_BA_AMPDU_PARAM             = 0x2400,

    WID_DISCONNECT                     = 0x2404,
    WID_INT_RESERVE                    = 0x2406,  /* Ԥ��INT����WID�ӿ�, WiFi RF��֤��ȡ���հ���ʹ�ô�WID, ��Device��һ�� */

    /* EMAC String WID list */
    WID_SSID                           = 0x3000,
    WID_FIRMWARE_VERSION               = 0x3001,
    WID_OPERATIONAL_RATE_SET           = 0x3002,
    WID_BSSID                          = 0x3003,
    WID_WEP_KEY_VALUE                  = 0x3004,
    WID_11I_PSK                        = 0x3008,
    WID_11E_P_ACTION_REQ               = 0x3009,
    WID_1X_KEY                         = 0x300A,
    WID_HARDWARE_VERSION               = 0x300B,
    WID_MAC_ADDR                       = 0x300C,
    WID_HUT_DEST_ADDR                  = 0x300D,
    WID_MISC_TEST_MODES                = 0x300E,
    WID_PHY_VERSION                    = 0x300F,
    WID_SUPP_USERNAME                  = 0x3010,
    WID_SUPP_PASSWORD                  = 0x3011,
    WID_SITE_SURVEY_RESULTS            = 0x3012,
    WID_RX_POWER_LEVEL                 = 0x3013,
    WID_ADD_WEP_KEY                    = 0x3019,
    WID_REMOVE_WEP_KEY                 = 0x301A,
    WID_ADD_PTK                        = 0x301B,
    WID_ADD_RX_GTK                     = 0x301C,
    WID_ADD_TX_GTK                     = 0x301D,
    WID_REMOVE_KEY                     = 0x301E,
    WID_ASSOC_REQ_INFO                 = 0x301F,
    WID_ASSOC_RES_INFO                 = 0x3020,
    WID_WPS_STATUS                     = 0x3024,
    WID_WPS_PIN                        = 0x3025,
    WID_MANUFACTURER                   = 0x3026,
    WID_MODEL_NAME                     = 0x3027,
    WID_MODEL_NUM                      = 0x3028,
    WID_DEVICE_NAME                    = 0x3029,

    WID_SET_DEFAULT_KEY                = 0x3059,
    WID_ADD_WPIKEY                     = 0x3060,                      /*str*/
    WID_REMOVE_WPIKEY                  = 0x3061,                      /*str*/

    /* NMAC String WID list */
    WID_11N_P_ACTION_REQ               = 0x3080,
    WID_HUT_TEST_ID                    = 0x3081,
    WID_PMKID_INFO                     = 0x3082,
    WID_FIRMWARE_INFO                  = 0x3083,

    /* Custom String WID list */
    WID_SERIAL_NUMBER                  = 0x3102,

    WID_P2P_TARGET_DEV_ID              = 0x3201,
    WID_P2P_INVIT_DEV_ID               = 0x3202,
    WID_P2P_PERSIST_CRED               = 0x3203,
    WID_P2P_NOA_SCHEDULE               = 0x3204,

    /* DFX String WID list */
    WID_DFX_PING                       = 0x3301,
    WID_DFX_CONTX                      = 0x3302,
    WID_COUNTRY_CODE                   = 0x3305,/* regulatory country code */
    WID_BA_INFO_QUERY                  = 0x3333,

    /* EMAC Binary WID list */
    WID_UAPSD_CONFIG                   = 0x4001,
    WID_UAPSD_STATUS                   = 0x4002,
    WID_WMM_AP_AC_PARAMS               = 0x4003,
    WID_WMM_STA_AC_PARAMS              = 0x4004,
    WID_NETWORK_INFO                   = 0x4005,

    WID_WPS_CRED_LIST                  = 0x4006,
    WID_PRIM_DEV_TYPE                  = 0x4007,
    WID_STA_JOIN_INFO                  = 0x4008,
    WID_CONNECTED_STA_LIST             = 0x4009,

    /* ָ���ŵ�ɨ�� */
    WID_BIN_CHANNEL_LIST               = 0x4100,
    WID_BIN_RC_BMAP                    = 0x4101,
    WID_BIN_RC_INFO                    = 0x4102,
    WID_BIN_FRAME                   = 0x4103,

     /* p2p */
    WID_FRAME                           = 0x4105,  /* HOST �·�P2P ����֡���� */
    WID_IE                              = 0x4106,  /* HOST �·���wps IE ���� */
    WID_IE_BEACON                      = 0x4107,
    WID_IE_PROBERSP                    = 0x4108,   /* ����P2Pɨ���Ӧprobe response����Я����WPS P2P IE */
    WID_IE_ASOCRSP                     = 0x4109,
    WID_IE_PROBERSP_GO                 = 0x410A,   /* ����GO��Ӧprobe response����Я����WPS P2P IE */
    /* p2p end */
    /* NMAC Binary WID list */
    WID_11N_AUTORATE_TABLE             = 0x4080,
    WID_HUT_TX_PATTERN                 = 0x4081,
    WID_HUT_STATS                      = 0x4082,
    WID_HUT_LOG_STATS                  = 0x4083,

    /* Custom Binary WID list */
    WID_P2P_REQ_DEV_TYPE               = 0x4201,

    WID_TSSI_CMP_TAB                   = 0x4202,
    WID_RSSI_CMP_TAB                   = 0x4203,

#ifdef __ROAM__
    WID_ROAM                            = 0x4300,
#endif
#ifdef MAC_802_11W
    WID_PMF                            = 0x4400, /* host�·�pmf��Ϣ */
#endif

    /* software anti-jamming WID begin */
    /* Clock Frequency Plan WID */
    WID_FREQ_PLAN                      = 0x4501,

    /* Single Voice WID */
    WID_SINGLE_TYPE                    = 0x4505,

    /* DC OFFSET */
    WID_DC_OFFSET_TYPE                 = 0x4506,

    /* Miscellaneous WIDs */
    WID_ALL                            = 0x7FFE,
    WID_MAX                            = 0xFFFF
} WID_T;



enum truth_value_t
{
    tv_true =  1,
    tv_false = 2
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
/* char type wid */
struct char_wid{
    uint16 wid;
    uint8  len;
    uint8  val;
};

/* short type wid */
struct short_wid{
    uint16  wid;
    uint8   len;
    uint16  val;
};

/* int type wid */
struct int_wid{
    uint16  wid;
    uint8   len;
    uint32  val;
};

/* binary type wid */
struct binary_wid{
    uint16 wid;
    uint16 len;
    uint8  val[0];
};

/* string type wid */
struct string_wid{
    uint16 wid;
    uint8  len;
    uint8  val[0];
};

/* msg header struct */
struct hwifi_msg_header
{
    uint8           msg_type;       /* msg type:W or Q */
    uint8           msg_seq;        /* msg seq */
    uint16          msg_len;        /* msg len */
    struct char_wid host_cmd;
};


typedef struct
{
    UWORD32 ulLow;      /* ��32BIT�� */
    UWORD32 ulHigh;     /* ��32BIT�� */
}UWORD64_STRU;

/* �ϱ���Ϣ��ͷ�� */
typedef struct
{
    UWORD8  ucMsgType;      /* ��Ϣ���ͣ�I,R,W eg. */
    UWORD8  ucMsgIndex;     /* ��Ϣ��ţ�ÿ�ϴ�һ����Ϣ�󶼻���� */
    UWORD16 usMsgLength;    /* ��Ϣ���� */
    UWORD16 usMsgStatus;    /* �ϱ�״̬��� */
    UWORD16 usMsgSubStatus; /* �ϱ�״̬��������ͣ�0-�ɹ�������ֵ��Э�� */
}CFG_MSG_HEADER_STRU;
/* �ϱ���ѯ�����Ϣ��ͷ�� */
typedef struct
{
    UWORD8  ucMsgType;       /* ��Ϣ���ͣ�R */
    UWORD8  ucMsgIndex;      /* ��Ϣ��ţ�ÿ�ϴ�һ����Ϣ�󶼻���� */
    UWORD16 usMsgLength;     /* ��Ϣ���� */
    UWORD16 usWID;           /* WID�� */
    UWORD8  ucLength;        /* ���� */
    UWORD8  ucInfo[];        /* ���� */
}CFG_QUERY_INFO_STRU;

/* ɨ��AP�ϱ� */
typedef struct
{
    CFG_MSG_HEADER_STRU stMsgHdr;           /* ��Ϣͷ�� */
    SWORD8              cRssi;              /* �ź�ǿ�� */
    UWORD8              ucChan;             /* �ŵ��� */
    UWORD16             usNetWorkMsgLength; /* ������Beacon��ProbeRsp֡���ȣ�������FCS */
}CFG_MSG_NETWORK_INFO_STRU;

/* ɨ������¼��ϱ� */
typedef struct
{
    CFG_MSG_HEADER_STRU     stMsgHdr;       /* ��Ϣͷ�� */
}CFG_MSG_SCAN_COMP_STRU;

/* ��������¼��ϱ� */
typedef struct
{
    CFG_MSG_HEADER_STRU     stMsgHdr;           /* ��Ϣͷ�� */
    UWORD16                 usCode;             /* ״̬�� */
    UWORD8                  aucApMacAddr[6];    /* �����ɹ���AP��MAC��ַ */
}CFG_MSG_CONNECT_RESULT_STRU;

/* ȥ�����ϱ� */
typedef struct
{
    CFG_MSG_HEADER_STRU     stMsgHdr;           /* ��Ϣͷ�� */
    UWORD8                  ucAid;              /* 0-sta, ��0-AP */
}CFG_MSG_DISCONNECT_RESULT_STRU;

typedef struct
{
    UWORD8         ucTxRateIdx;     /* ������������ */
    UWORD8         ucTxRate;        /* ��������*/
}TX_RATE_STRU;

/* ͳ�Ʋ�ѯ�ϱ�����ͳ����Ϣ */
typedef struct
{
    UWORD32         ulRxPkt;        /* ��������յ��İ��� */
    UWORD32         ulTxPkt;        /* �������͵İ��� */
    UWORD64_STRU    stRxPktBit;     /* ��������յ��ֽ��� */
    UWORD64_STRU    stTxPktBit;     /* �������͵��ֽ��� */
    UWORD32         ulTxRetry;      /* �������ش����� */
    UWORD32         ulTxFailed;     /* ��������ʧ�� */
    UWORD32         ulRxDropped;    /* ���������ʧ�� */
    SWORD8          cRssi;          /* ���� */
    UWORD8          ucTxRateIdx;        /* ������������ */
    UWORD8          ucTxRateFlg;        /* ��������flg*/
}DEVICE_STATS_STRU;

/* ͳ�Ʋ�ѯ�ϱ� */
typedef struct
{
    CFG_MSG_HEADER_STRU     stMsgHdr;           /* ��Ϣͷ�� */
    UWORD8                  aucApMacAddr[6];    /* AP:��ѯָ��STA��MAC��ַ��STA:AP��MAC��ַ */
    DEVICE_STATS_STRU       stStatInfo;         /* ����ͳ����Ϣ */
}CFG_MSG_STAT_QUERY_RESULT_STRU;

/* ����Ԫ�ػ����״̬�ϱ� */
typedef struct
{
    CFG_MSG_HEADER_STRU     stMsgHdr;       /* ��Ϣͷ�� */
}CFG_MSG_SET_RESULT_STRU;

/* DEVICE READY״̬�ϱ� */
typedef struct
{
   CFG_MSG_HEADER_STRU     stMsgHdr;       /* ��Ϣͷ�� */
   UWORD8                  ucMode;         /* 0-STA��1-AP */
}CFG_MSG_MODE_RESULT_STRU;

/* STA������AP�ϱ� */
typedef struct
{
    CFG_MSG_HEADER_STRU     stMsgHdr;           /* ��Ϣͷ�� */
    UWORD8                  ucAid;              /* ������STA��AID */
    UWORD8                  aucApMacAddr[6];    /* �ɹ�������AP��STA��MAC��ַ */

    UWORD8                  ucStaType;          /* 0��ʾSTAδ������AP;1-STA��֧��11A����(5GHZ)��2-11B(2.4G),3-11B(2.4G),4-11AB,5-11N,6-11N*/
    UWORD8                  uc11gInfo;          /* bit0:1-֧��ǰ���룬0-��֧�֣�bit1:1-֧�ֶ�ʱ϶��0-��֧��*/
    UWORD16                 usWMM;              /* WMM��Ϣ */
    UWORD16                 us11nCap;           /* 11N������Ϣ */
    UWORD8                  ucCipherType;       /* �������� */
}CFG_MSG_ASSOC_STA_STRU;

/* p2p added */
typedef struct
{
    CFG_MSG_HEADER_STRU     stMsgHdr;           /* ��Ϣͷ�� */
    UWORD8                  ucChan;             /* �ŵ��� */
    UWORD16                 usAid;
    UWORD16                 usMgmtFrmLength; /* ������֡���ȣ�������FCS */
}CFG_MSG_MGMT_FRAME_STRU;
/* p2p added */

typedef struct
{
    CFG_MSG_HEADER_STRU     stMsgHdr;       /* ��Ϣͷ�� */
    UWORD8                  SourceAddr[6];  /* ����֡��Դ��ַ */
    UWORD8                  ucKeyType;      /* �Ƿ�Ϊ�鲥:1-�鲥,0-����  */
}CFG_MSG_TKIP_MIC_ERROR_STRU;

#ifdef MAC_802_11W
/* PMF add */



/*****************************************************************************
  ö����  : DEVICE_REPORT_PROTECTED_FRAME_TYPE
  Э����:
  ö��˵��: Device���ϱ��ļ��ܹ���֡����
*****************************************************************************/
enum DEVICE_REPORT_PROTECTED_FRAME_TYPE
{
    DEVICE_REPORT_PROTECTED_DISASSOC = 0,   /* Disassociation֡ */
    DEVICE_REPORT_PROTECTED_DEAUTH   = 1,   /* Deauthentication֡ */
    DEVICE_REPORT_PROTECTED_ACTION   = 2,   /* ACTION֡(Ŀǰֻ��SA Query Response֡) */

    DEVICE_REPORT_PROTECTED_BUTT
};


struct pmf_info_stru
{
    struct sock *nl_sk;
    uint32 user_pid;

    uint8    dot11RSNAProtectedManagementFramesActivated;
    uint8    dot11RSNAUnprotectedManagementFramesAllowed;
};






/*******************************************************************************
    PMF�ϱ���Ϣ�ṹ
*******************************************************************************/
typedef struct
{
    CFG_MSG_HEADER_STRU   stMsgHdr;       /* ��Ϣͷ�� */
    UWORD8                ucMFPR;         /* Management Frame Protection Required */
    UWORD8                ucMFPC;         /* Maximum index of rate supported */
    UWORD8                resv[2];
    UWORD32               ptk_type;         /* BUTT:ptk������  CCM:AES_128_CCM  */
    UWORD32               igtk_type;        /* BUTT:igtk������ CMAC:AES-128-CMAC  */
    UWORD8                ptk_index;
    UWORD8                ptk_key[16];
    UWORD8                igtk_index;
    UWORD8                igtk_key[16];
    UWORD8                dot11RSNAEnabled; /* MIB�� */
    UWORD8                aucPn[6];       /* PN��(48λ�޷�����) */
    UWORD8                resv2[1];
    UWORD16               usFrameLenght;  /* Deauthentication֡��Disassociation֡��SA Query Response֡����(������FCS) */
    UWORD8                ucFrame[0];     /* Deauthentication֡��Disassociation֡��SA Query Response֡�������� */
}CFG_MSG_PROTECTED_MGMT_STRU;
/* PMF add */
#endif

#ifdef __ROAM__
typedef enum
{
    ROAM_CMD_TYPE_CFG                   = 0,
    ROAM_CMD_TYPE_SINGLE_CH             = 1,
    ROAM_CMD_TYPE_SEND_PROBE_REQ        = 2,
    ROAM_CMD_TYPE_STAY_HOME             = 3,
    ROAM_CMD_TYPE_SEL_NEW_AP            = 4,
    ROAM_CMD_TYPE_SEL_NEW_AP_TIMEOUT    = 5,

    ROAM_CMD_TYPE_BUTT
}ROAM_CMD_TYPE_ENUM;
typedef uint8 roam_cmd_type_enum_uint8;

typedef enum
{
    ROAM_SUB_STATUS_CFG_RESULT      = 0,
    ROAM_SUB_STATUS_TRIGGER         = 1,
    ROAM_SUB_STATUS_SCAN_RESULT     = 2,
    ROAM_SUB_STATUS_NEW_AP_ASSOC    = 3,
    ROAM_SUB_STATUS_RETURN_TO_OLD   = 4,
    ROAM_SUB_STATUS_TRIGGER_FORCE   = 5,

    ROAM_SUB_STATUS_BUTT
}ROAM_SUB_STATUS_ENUM;
typedef uint16 roam_sub_status_enum_uint16;

typedef struct
{
    UWORD8                      ucMsgType;      /* ��Ϣ���ͣ�I,R,W eg. */
    UWORD8                      ucMsgIndex;     /* ��Ϣ��ţ�ÿ�ϴ�һ����Ϣ�󶼻���� */
    UWORD16                     usMsgLength;    /* ��Ϣ���� */
    UWORD16                     usMsgStatus;    /* �ϱ�״̬���  DEVICE_STATUS_ROAM */

    /* 0: roam cfg result 1: Trigger 2: scan  result 3: NEW AP Assoc 4: Return_to_old,����ֵ��Ч */
    roam_sub_status_enum_uint16 enMsgSubStatus; /* �ϱ�״̬��������� */
}roam_rpt_msg_header;

/* 0:�������� */
struct roam_cfg_stru
{
    roam_cmd_type_enum_uint8        cmdtype;                /* 0:�������� 1:����ɨ���ŵ� 2:����home�ŵ� 3:New AP Roam 4:New AP Assoc Timeout, 5:��������PROBE REQ��Ϣ */
    int8                            status;                 /* 0:�ر�ROAM, 1:��ROAM */
    int8                            rssithreshold;          /* ��λ1dBm */
    int8                            triggercnt;             /* ����������� */
    uint8               timeoutcnt;             /* roaming max timeout count */
};

/* roam scan req 1:����ɨ���ŵ� */
struct roam_scan_cfg_ch_stru
{
    roam_cmd_type_enum_uint8        cmdtype;                /* 0:�������� 1:����ɨ���ŵ� 2:����home�ŵ� 3:New AP Roam 4:New AP Assoc Timeout, 5:��������PROBE REQ��Ϣ */
    uint8                           band;       /* ɨ��Ƶ�� */
    uint8                           channel;    /* ɨ���ŵ��� */
};

/* roam scan req 2:��������PROBE REQ��Ϣ */
struct roam_scan_probe_req_stru
{
    roam_cmd_type_enum_uint8       cmdtype;                /* 0:�������� 1:����ɨ���ŵ� 2:����home�ŵ� 3:New AP Roam 4:New AP Assoc Timeout, 5:��������PROBE REQ��Ϣ */
};

/*  3:����home�ŵ� */
struct roam_stay_home_stru
{
    roam_cmd_type_enum_uint8        cmdtype;                /* 0:�������� 1:����ɨ���ŵ� 2:����home�ŵ� 3:New AP Roam 4:New AP Assoc Timeout, 5:��������PROBE REQ��Ϣ */
    uint8                           band;         /* ɨ��Ƶ�� */
    uint8                           channel;      /* ɨ���ŵ��� */
};

/* �л�AP���� 4:New AP Roam */
struct roam_roaming_stru
{
    roam_cmd_type_enum_uint8        cmdtype;                /* 0:�������� 1:����ɨ���ŵ� 2:����home�ŵ� 3:New AP Roam 4:New AP Assoc Timeout, 5:��������PROBE REQ��Ϣ */
    uint8                           bssid[6];
    uint8                           band;           /* �л�AP����Ƶ�� */
    uint8                           channel;        /* �л�AP�����ŵ� */
    uint16                          length;
    uint8                           frame[0];
};

 /* �л�AP��ʱ֪ͨ 5:New AP Assoc Timeout */
struct roam_roaming_timeout_stru
{
    roam_cmd_type_enum_uint8        cmdtype;                /* 0:�������� 1:����ɨ���ŵ� 2:����home�ŵ� 3:New AP Roam 4:New AP Assoc Timeout, 5:��������PROBE REQ��Ϣ */
    uint8                           bssid[6];
};

/* roam scan report */
struct roam_scan_report_stru
{
    uint8       band;           /* �л�AP����Ƶ�� */
    uint8       channel;
    int8        rssi;     /* ��λ1dBm */
    uint16      length;   /* BEACON֡��PROBERSP֡���� */
    uint8       frame[0]; /* BEACON֡��PROBERSP�������� */
};

/* roam new ap assoc comp */
struct roam_new_ap_assoc_comp_stru
{
    uint8     band;                 /* ɨ��Ƶ�� */
    uint8     channel;              /* ɨ���ŵ��� */
    uint16    assoc_req_length;     /* assoc_req֡���� */
    uint16    assoc_rsp_length;     /* assoc_rsp֡���� */
    uint8     frame[0];             /* assoc_req/assoc_rsp�������� */
};


/*******************************************************************************
    �·���Ϣ�ṹ
*******************************************************************************/
struct roam_cfg_msg
{
    struct hwifi_msg_header  msg_hdr;
    struct binary_wid        roam_wid;
    struct roam_cfg_stru     cfg_param;
};

/* roam scan msg */
struct roam_scan_cfg_ch_msg
{
    struct hwifi_msg_header         msg_hdr;
    struct binary_wid               roam_wid;
    struct roam_scan_cfg_ch_stru    scan_param;
};

/* roam scan msg */
struct roam_scan_probe_req_msg
{
    struct hwifi_msg_header  msg_hdr;
    struct binary_wid        roam_wid;
    struct roam_scan_probe_req_stru    scan_param;
};

/* roam stay home channel msg */
struct roam_stay_home_channel_msg
{
    struct hwifi_msg_header     msg_hdr;
    struct binary_wid           roam_wid;
    struct roam_stay_home_stru  home_param;
};

/* roam roaming msg */
struct roam_roaming_msg
{
    struct hwifi_msg_header  msg_hdr;
    struct binary_wid        roam_wid;
    struct roam_roaming_stru roaming_param;
};

/* roam roaming timeout msg */
struct roam_roaming_timeout_msg
{
    struct hwifi_msg_header             msg_hdr;
    struct binary_wid                   roam_wid;
    struct roam_roaming_timeout_stru    roaming_timeout_param;
};
/******************************************************************************/

/*******************************************************************************
    �ϱ���Ϣ�ṹ
*******************************************************************************/
struct roam_cfg_report_msg
{
    roam_rpt_msg_header     msg_header;
    uint8                   cfg_seq;
};

struct roam_trigger_msg
{
    roam_rpt_msg_header     msg_header;
};

/* scan report msg */
struct roam_scan_report_msg
{
    roam_rpt_msg_header             msg_header;
    struct roam_scan_report_stru    scan_report;
};

/* roam new ap assoc comp msg */
struct roam_roaming_result_msg
{
    roam_rpt_msg_header                 msg_header;
    struct roam_new_ap_assoc_comp_stru  new_ap_assoc_comp;
};
#endif

/* query ba session */
typedef struct
{
    UWORD8                  ucAid;                      /* APģʽ������STA�Ĺ���id�ţ�STAģʽ��Ĭ��Ϊ0 */
    UWORD8                  aucDestMacAddr[MAC_LEN];    /* BA�Ự�Է�MAC��ַ */
    UWORD8                  ucTxBaSessionCount;         /* ���ͷ�������BA�Ự�� */
    UWORD8                  ucRxBaSessionCount;         /* ���շ�������BA�Ự�� */
    UWORD8                  aucTxBaTid[MAX_BA_SESS];    /* ����ucTxBaSessionCount��ȡ���������Чλ�е�TIDֵ */
    UWORD8                  aucRxBaTid[MAX_BA_SESS];    /* ����ucTxBaSessionCount��ȡ���������Чλ�е�TIDֵ */
}CFG_MSG_BA_SESS_STRU;

typedef struct
{
    CFG_MSG_HEADER_STRU     stMsgHdr;                           /* ��Ϣͷ�� */
    CFG_MSG_BA_SESS_STRU    ba_sess_data;    /* �ϱ�mac��Ӧ��ba�Ự��� */
}CFG_MSG_BA_SESSION_STRU;

/* query all ba session */
typedef struct
{
    UWORD8                  aucDestMacAddr[MAC_LEN];    /* BA�Ự�Է�MAC��ַ */
    UWORD8                  ucTxBaTidsMap;              /* ���ͷ�������BA�ỰTIDλͼ */
    UWORD8                  ucRxBaTidsMap;              /* ���շ�������BA�ỰTIDλͼ */
}CFG_MSG_ALL_BA_SESS_STRU;

typedef struct
{
    CFG_MSG_HEADER_STRU     stMsgHdr;                           /* ��Ϣͷ�� */
    CFG_MSG_ALL_BA_SESS_STRU    ba_sess_data[AP_TO_STA_MAX_NUM];    /* �ϱ�mac��Ӧ��ba�Ự��� */
}CFG_MSG_ALL_BA_SESSION_STRU;
/* EC212 */
typedef struct
{
	    CFG_MSG_HEADER_STRU     stMsgHdr;       /*TBD*/
			UWORD8                  ucKeyId;
			UWORD8                  ucKeyNum;
		  UWORD8                  ucType;
			UWORD8                  sta_addr[6];
		  UWORD8                  ucReserve;
}CFG_MSG_EC212_STRU;
/******************************************************************************/


/*****************************************************************************
  8 UNION����
*****************************************************************************/


/*****************************************************************************
  9 OTHERS����
*****************************************************************************/


#pragma pack()
/*****************************************************************************
  10 ��������
*****************************************************************************/

#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif /* end of cfg80211_stru.h */
