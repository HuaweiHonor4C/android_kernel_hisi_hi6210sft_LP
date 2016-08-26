

#ifndef _USIMM_TAFUSIMMINTERFACE_H_
#define _USIMM_TAFUSIMMINTERFACE_H_

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif



/*****************************************************************************
1 ����ͷ�ļ�����
*****************************************************************************/
#include "vos.h"
#include "product_config.h"

#if (FEATURE_VSIM == FEATURE_ON)
#include "mdrv.h"
#endif

#pragma pack(4)

/*******************************************************************************
2 �궨��
*******************************************************************************/

#define PS_USIM_SERVICE_NOT_AVAILIABLE          0
#define PS_USIM_SERVICE_AVAILIABLE              1


#define USIMM_NULL_ID                           0xFFFF

/* ���忨���볤�� */
#define USIMM_PINNUMBER_LEN                     8

#define USIMM_T0_APDU_MAX_LEN                   256

/* USIMMģ��֧�ֵ����·������,UINT16Ϊ��λ */
#define USIMM_MAX_PATH_LEN                      (6)

/* USIMMģ��֧�ֵ�һ��REFRESH��������ļ�����������STK���ݳ������256�����������ļ�·��Ϊ65�� */
#define USIMM_MAX_REFRESH_FILE_NUM              (65)

/* APDU�ظ����ݵ���󳤶� */
#define USIMM_APDU_RSP_MAX_LEN                  (260)

/* APDU�����ײ����� */
#define USIMM_APDU_HEADLEN                      (5)

/* APDU����CLA�Ķ��� */
#define USIMM_USIM_CLA                          (0x00)
#define USIMM_SIM_CLA                           (0xA0)
#define USIMM_CAT_CLA                           (0X80)

/* APDU ͷ���� */
#define CLA                                     0
#define INS                                     1
#define P1                                      2
#define P2                                      3
#define P3                                      4

/*INS�ֽڶ��� */
#define CMD_INS_END                             0x00
#define CMD_INS_ANY                             0xFF

#define CMD_INS_SELECT                          0xA4
#define CMD_INS_STATUS                          0xF2
#define CMD_INS_READ_BINARY                     0xB0
#define CMD_INS_UPDATE_BINARY                   0xD6
#define CMD_INS_READ_RECORD                     0xB2
#define CMD_INS_UPDATE_RECORD                   0xDC
#define CMD_INS_SEARCH_RECORD                   0xA2
#define CMD_INS_INCREASE                        0x32
#define CMD_INS_RETRIEVE_DATA                   0xCB
#define CMD_INS_SET_DATA                        0xDB
#define CMD_INS_VERIFY                          0x20
#define CMD_INS_CHANGE_PIN                      0x24
#define CMD_INS_DISABLE_PIN                     0x26
#define CMD_INS_ENABLE_PIN                      0x28
#define CMD_INS_UNBLOCK_PIN                     0x2C
#define CMD_INS_DEACTIVATE_FILE                 0x04
#define CMD_INS_ACTIVATE_FILE                   0x44
#define CMD_INS_AUTHENTICATE                    0x88
#define CMD_INS_GET_CHALLENGE                   0x84
#define CMD_INS_TERMINAL_PROFILE                0x10
#define CMD_INS_ENVELOPE                        0xC2
#define CMD_INS_FETCH                           0x12
#define CMD_INS_TERMINAL_RESPONSE               0x14
#define CMD_INS_MANAGE_CHANNEL                  0x70
#define CMD_INS_GET_RESPONSE                    0xC0
#define CMD_INS_TERMINAL_CAPABILITY             0xAA
#define CMD_INS_MANAGE_SECURE_CHANNEL           0x72
#define CMD_INS_TRANSACT_DATA                   0x75
#define CMD_INS_SLEEP                           0xFA
#define CMD_INS_BASE_STATION_CHALLENGE          0x8A
#define CMD_INS_UPDATE_SSD                      0x84
#define CMD_INS_MANAGE_SSD                      0x82
#define CMD_INS_CONFIRM_SSD                     0x82
#define CMD_INS_GENERATE_KEY                    0x8E
#define CMD_INS_STORE_ESNMEID                   0xDE

#define USIMM_EF_IMSI_LEN                       (9)
#define USIMM_EF_AD_MIN_LEN                     (3)

#define ARRAYSIZE(array)                        (sizeof(array)/sizeof(array[0]))

#define MFLAB                                   0x3F
#define DFUNDERMFLAB                            0x7F
#define DFUNDERDFLAB                            0x5F
#define MFID                                    0x3F00
#define EFIDUNDERMF                             0x2F00
#define EFIDUNDERMFDFDF                         0x4F00
#define EFIDUNDERMFDF                           0x6F00
#define DFIDUNDERMF                             0x7F00
#define DFIDUNDERMFDF                           0x5F00

/*  FID�궨��*/
#define MFTAG                                   0x3F
#define DFUNDERMF                               0x7F
#define DFUNDERDF                               0x5F
#define EFUNDERMF                               0x2F
#define EFUNDERDF                               0x6F
#define EFUNDERGRANDADF                         0x4F
#define EFUNDERATTANDDF                         0x4F
#define EFUNDERATT                              0x6F

#define MF                                      0x3F00
#define EFDIR                                   0x2F00

#define ADF                                     0x7FFF
#define DFGSM                                   0x7F20
#define DFGSM1800                               0x7F21
#define DFGSMACCESS                             0x5F3B
#define DFMExE                                  0x5F3C
#define DFWLAN                                  0x5F40
#define DFSoLSA                                 0x5F70

#define DFTELCOM                                0x7F10
#define DFGRAPHICS                              0x5F20
#define DFUGRAPHICS                             0x5F50
#define DFPHONEBOOK                             0x5F3A
#define DFMULTIMEDIA                            0x5F3B

#define DFCDMA                                  0x7F25
/* ATT�Զ���DF���� */
#define DFATT                                   0x7F66
#define DFUNDERDFATT                            0x5F30

/* ATT�Զ����ļ�ID */
#define EFACTINGHPLMN                           0x4F34
#define EFRATMODE                               0x4F36
#define EFTERMINALSUPPORTTABLE                  0x6FD2

#define EFEST                                   0x6F56
#define EFADN                                   0x6F3A
#define EFBDN                                   0x6F4D
#define EFFDN                                   0x6F3B
#define EFECC                                   0x6FB7
#define EFMSISDN                                0x6F40
#define EFPHASE                                 0x6FAE

#define EFPSC                                   0x4F22
#define EFCC                                    0x4F23
#define EFPUID                                  0x4F24

/* ISIM �ļ�ID���� �ο�31.103 */
#define EFISIMIMPI                              0x6F02
#define EFISIMDOMAIN                            0x6F03
#define EFISIMIMPU                              0x6F04
#define EFISIMAD                                0x6FAD
#define EFISIMIST                               0x6F07
#define EFISIMPCSCF                             0x6F09
#define EFISIMGBABP                             0x6FD5
#define EFISIMGBANL                             0x6FD7
#define EFISIMNAFKCA                            0x6FDD
#define EFISIMUICCIARI                          0x6FE7

/* USIM �ļ�ID���� �ο�31.102 */
#define EFGBABP                                 0x6FD6
#define EFGBANL                                 0x6FDA
#define EFNAFKCA                                0x6FDD
#define EFUICCIARI                              0x6FE7

/* USIM����PS����Ϣ���ͱ�ʶ */
#define PS_USIM_GET_FILE_RSP                    1
#define PS_USIM_SET_FILE_RSP                    3
#define PS_USIM_EF_MAX_RECORD_NUM_CNF           5
#define PS_USIM_PIN_OPERATE_RSP                 7
#define PS_USIM_AUTHENTICATION_CNF              9
#define PS_USIM_REFRESH_CNF                     11
#define PS_USIM_TERMINALRESPONSE_CNF            13
#define PS_USIM_ENVELOPE_CNF                    15
#define PS_USIM_SAT_IND                         17
#define PS_USIM_STATUSCMD_CNF                   19
#define PS_USIM_ECCNUMBER_IND                   21
#define PS_USIM_PROTECT_RESET_CNF               23
#define PS_USIM_GENERIC_ACCESS_CNF              25
#define PS_USIM_GET_STATUS_IND                  27
#define PS_USIM_RESTRICTED_ACCESS_CNF           29
#define PS_UISM_FDN_CNF                         31
#define PS_USIM_REFRESH_IND                     33
#define PS_USIM_SET_SPBFILE_CNF                 35
#define PS_USIM_SEARCH_CNF                      39
/* Added by f62575 for C50_IPC Project, 2012/02/23, begin */
#define PS_USIM_FDN_IND                         41
#define PS_USIM_FDN_CHECK_CNF                   43
/* Added by f62575 for C50_IPC Project, 2012/02/23, end   */
/* �Ȳ�ο�״̬��ָʾ */
#define PS_HOT_IN_OUT_USIM_STATUS_IND           45
/* Added by h59254 for V7R1C50 ISDB Project,  2012-8-27 begin */
/* ISDB APDU͸������ظ���Ϣ */
#define PS_USIMM_ISDB_ACCESS_CNF                47
/* Added by h59254 for V7R1C50 ISDB Project,  2012-8-27 end */
#define PS_USIMM_OPENCHANNEL_CNF                48
#define PS_USIMM_CLOSECHANNEL_CNF               49
#define PS_USIMM_ACCESSCHANNEL_CNF              50

/* SIM����ʼ�������� */
#define PS_USIMM_ACTIVE_CNF                     51

/* VSIM DH��Э������ */
#define PS_USIMM_VSIM_RDH_IND                   53

#define PS_USIM_SENDTPDU_CNF                    (55)

#define PS_USIMM_QRYECALL_CNF                   57

#define PS_USIMM_ECALLINIT_IND                  59

#define PS_USIM_MAMAGESSD_CNF                   61
#define PS_USIM_BSCHALLENGE_CNF                 63
#define PS_USIM_GENERATE_KEYVPM_CNF             65
#define PS_USIM_AUTH_CNF                        67

/* AID������Сֵ�����ֵ */
#define USIMM_AID_LEN_MIN                       (5)
#define USIMM_AID_LEN_MAX                       (16)

/* APDU������Сֵ�����ֵ */
#define USIMM_APDU_LEN_MIN                      (4)
#define USIMM_APDU_LEN_MAX                      (261)

#define USIMM_TPDU_HEAD_LEN                     (5)
#define USIMM_TPDU_DATA_LEN_MAX                 (256)

/*���ݶ�λ*/
#define USIMM_TAGNOTFOUND                       (0xFFFFFFFF)
#define USIMM_BITNOFOUNE                        (0xFFFFFFFF)

#define VSIM_XML_FILE_NAME                      "vsim.xml"
#define VSIM_XML_TEMP_NAME                      "vsim.temp"

#if(VOS_WIN32 == VOS_OS_VER)
#define VSIM_XML_DIR_PATH                       ".\\yaffs0\\vsim0"
#define VSIM_XML_FILE_PATH                      ".\\yaffs0\\vsim0\\vsim.xml"
#define VSIM_XML_TEMP_PATH                      ".\\yaffs0\\vsim0\\vsim.temp"
#else

#if (FEATURE_ON == FEATURE_MULTI_FS_PARTITION)
#if defined (INSTANCE_1)
#define VSIM_XML_DIR_PATH                       "/mnvm2:0/vsim1"
#define VSIM_XML_FILE_PATH                      "/mnvm2:0/vsim1/vsim.xml"
#define VSIM_XML_TEMP_PATH                      "/mnvm2:0/vsim1/vsim.temp"
#else
#define VSIM_XML_DIR_PATH                       "/mnvm2:0/vsim0"
#define VSIM_XML_FILE_PATH                      "/mnvm2:0/vsim0/vsim.xml"
#define VSIM_XML_TEMP_PATH                      "/mnvm2:0/vsim0/vsim.temp"
#endif
#else
#if defined (INSTANCE_1)
#define VSIM_XML_DIR_PATH                       "/yaffs0/vsim1"
#define VSIM_XML_FILE_PATH                      "/yaffs0/vsim1/vsim.xml"
#define VSIM_XML_TEMP_PATH                      "/yaffs0/vsim1/vsim.temp"
#else
#define VSIM_XML_DIR_PATH                       "/yaffs0/vsim0"
#define VSIM_XML_FILE_PATH                      "/yaffs0/vsim0/vsim.xml"
#define VSIM_XML_TEMP_PATH                      "/yaffs0/vsim0/vsim.temp"
#endif
#endif

#endif  /*(VOS_WIN32 == VOS_OS_VER)*/

#define USIMM_FILE_OPEN_MODE_R                  "rb"            /* open binary file for reading */
#define USIMM_FILE_OPEN_MODE_W                  "wb"            /* open binary file for writing */
#define USIMM_FILE_OPEN_MODE_RW                 "rb+"           /* open binary file for reading and writing */
#define USIMM_FILE_OPEN_MODE_NEW_RW             "wb+"           /* creat binary file for reading and writing*/
#define USIMM_FILE_OPEN_MODE_APEND              "a"
#define USIMM_FILE_OPEN_MODE_ADD_W              "ab"            /* creat binary file for add writing */

#define USIMM_FILE_SEEK_SET                     (0)             /* the beginning of the file*/
#define USIMM_FILE_SEEK_CUR                     (1)             /* the current value of the file position indicator */
#define USIMM_FILE_SEEK_END                     (2)             /* the end of the file */

#define USIMM_RUNCAVE_RAND_LEN                  (4)
#define USIMM_RUNCAVE_DIGLEN                    (3)
#define USIMM_ESN_MEID_LEN                      (7)
#define USIMM_CDMA_RANDSSD_LEN                  (7)
#define USIMM_CDMA_AUTHBS_LEN                   (3)

#define UICC_AUTH_RUNCAVE_LEN                   (17)
#define UICC_AUTH_IK_LEN                        (17)    /*Len+Data*/
#define UICC_AUTH_CK_LEN                        (17)    /*Len+Data*/
#define UICC_AUTH_KC_LEN                        (9)     /*Len+Data*/
#define UICC_AUTH_AUHS_LEN                      (15)    /*Len+Data*/
#define UICC_AUTH_RES_LEN                       (17)    /*Len+Data*/
#define UICC_AUTH_ATUHR_LEN                     (3)     /*Data*/
#define UICC_AUTH_MSG_PADDING_LEN               (20)    /* ��Ϣ�ṹ����Ԥ���ֽڣ�ΪPCLint�޸� */


/*******************************************************************************
3 ö�ٶ���
*******************************************************************************/
enum USIMM_SWCHECK_ENUM
{
    USIMM_SW_OK         = VOS_OK,    /*����ִ������*/
    USIMM_SW_ERR                ,    /*����ִ�д���*/
    USIMM_SW_OK_WITH_RESOPNSE   ,    /*����ִ�������������ݷ���*/
    USIMM_SW_OK_WITH_SAT        ,    /*����ִ����������SAT���ݷ���*/
    USIMM_SW_CMD_REMAINTIME     ,    /*��ǰ�����ʣ�����*/
    USIMM_SW_CARD_BUSY          ,    /*��ǰ��æ*/
    USIMM_SW_AUTN_ERROR         ,    /*��Ȩ����*/
    USIMM_SW_MEMORY_ERROR       ,    /*���ڴ����*/
    USIMM_SW_NOFILE_SELECT      ,    /*��ǰ���κ��ļ�ѡ��*/
    USIMM_SW_OUTOF_RANGE        ,    /*������Χ*/
    USIMM_SW_NOFILE_FOUND       ,   /*�ļ��Ҳ���*/
    USIMM_SW_FILETYPE_ERROR     ,   /*�ļ�����ì��*/
    USIMM_SW_SECURITY_ERROR     ,   /*��ȫ״̬������*/
    USIMM_SW_PIN_BLOCK          ,   /*���뱻��*/
    USIMM_SW_PINSTATUS_ERROR    ,   /*����״̬ì��*/
    USIMM_SW_PINNUMBER_ERROR    ,   /*������������*/
    USIMM_SW_FILESTATUS_ERROR   ,   /*�ļ�״̬ì��*/
    USIMM_SW_INCREACE_ERROR     ,   /*INCREACE��������*/
    USIMM_SW_CLA_ERROR          ,   /*CLA����*/
    USIMM_SW_CMD_ERROR          ,   /*����1��2��3���������ݴ���*/
    USIMM_SW_P3_ERROR           ,   /*�Ƽ�P3����*/
    USIMM_SW_NORECORD_FOUND     ,   /*�޼�¼*/
    USIMM_SW_DOWNLOAD_ERROR     ,   /*�������ݴ���*/
    USIMM_SW_CHANNEL_NOSUPPORT  ,   /*��֧���߼�ͨ��*/
    USIMM_SW_WARNING            ,   /*����ִ�и澯,��Ҫ��ȡ��Ϣ*/
    USIMM_SW_OTHER_WARNING      ,   /*����ִ�и澯*/
    USIMM_SW_OTHER_ERROR        ,   /*����ִ�д���*/
    USIMM_SW_SENDCMD_ERROR      ,   /*�����������*/
    USIMM_SW_NO_INFO            ,   /* No information given, state of non volatile memory unchanged */
    USIMM_SW_DATA_CORRUPTED     ,   /* Part of returned data may be corrupted */
    USIMM_SW_END_OF_FILE        ,   /* End of file/record reached before reading Le bytes */
    USIMM_SW_INVALID_FILE       ,   /* Selected file invalidated */
    USIMM_SW_TERMINATE_FILE     ,   /* Selected file in termination state */
    USIMM_SW_MORE_DATA1         ,   /* More data available */
    USIMM_SW_MORE_DATA2         ,   /* More data available and proactive command pending */
    USIMM_SW_RESPONSE_DATA      ,   /* Authentication response data available */
    USIMM_SW_MORE_DATA3         ,   /* More data expected */
    USIMM_SW_MORE_DATA4         ,   /* More data expected and proactive command pending */
    USIMM_SW_TECH_ERROR         ,   /* Technical problem, no precise diagnosis */
    USIMM_SW_COMMAND_ERROR      ,   /* Command not allowed - secure channel - security not satisfied */
    USIMM_SW_EXPIRED_ERROR      ,   /* Security session or association expired */
    USIMM_SW_UNHANDLE_ERROR     ,   /* ״̬����Э�鶨���INS�ֶβ��� */
    USIMM_SW_CDMA_AUTN_ERROR    ,   /* CDMA��Ȩ���̴��� */
    USIMM_SW_BUTT
};

enum USIMM_API_RESULT_ENUM              /* ����ӿڷ��صĴ����� */
{
    USIMM_API_SUCCESS           = VOS_OK,   /* ����ִ�гɹ� */
    USIMM_API_FAILED,                       /* ����ִ��ʧ�ܣ�ԭ���� */
    USIMM_API_WRONG_PARA,                   /* ��Ϊ�������󣬺���ִ��ʧ�� */
    USIMM_API_NOTAVAILABLE,                 /* ��Ϊû�п���Ӧ�ã�����ִ��ʧ�� */
    USIMM_API_ALLOCMEM_FAILED,              /* ��Ϊ�ڴ����ʧ�ܣ�����ִ��ʧ�� */
    USIMM_API_SENDMSG_FAILED,               /* ��Ϊ��Ϣ����ʧ�ܣ�����ִ��ʧ�� */
    USIMM_API_SMSP_FAILED,                  /* ��ȡ�ź���ʧ�� */
    USIMM_API_RESULT_BUTT
};

enum USIMM_PIN_CMD_TYPE_ENUM
{
     USIMM_PINCMD_NULL      = 0x00,
     USIMM_PINCMD_VERIFY    = 0x20,   /*У��PIN��*/
     USIMM_PINCMD_CHANGE    = 0x24,   /*����PIN�������*/
     USIMM_PINCMD_DISABLE   = 0x26,   /*��ֹʹ��PIN��*/
     USIMM_PINCMD_ENABLE    = 0x28,   /*ʹ��PIN��*/
     USIMM_PINCMD_UNBLOCK   = 0x2C,   /*�����ֹPIN��*/
     USIMM_PINCMD_PHNET     = 0x30,   /*У����������*/
     USIMM_PINCMD_PHSIM     = 0x32,   /*У����������*/
     USIMM_PINCMD_BUTT
};
typedef VOS_UINT32      USIMM_PIN_CMD_TYPE_ENUM_UINT32;

enum USIMM_PIN_TYPE_ENUM
{
    USIMM_PIN               = 0,      /* PIN1*/
    USIMM_PUK               = 1,      /* PUK1*/
    USIMM_PIN2              = 6,      /* PIN2*/
    USIMM_PUK2              = 7,      /* PUK2 */
    USIMM_PHSIM_PIN         = 8,      /* PH-SIM PIN*/
    USIMM_PHNET_PIN         = 9,      /* PH-NET PIN*/
    USIMM_SIM_NON           = 255,   /* ��ȷ������PIN������ʱ�����ֵ*/
    SIMM_PIN_BUTT
};
typedef VOS_UINT32      USIMM_PIN_TYPE_ENUM_UINT32;

enum  USIMM_PIN_ENABLE_STATUS_ENUM
{
    USIMM_PIN_DISABLED      = 0,      /*δʹ��*/
    USIMM_PIN_ENABLED       = 1,       /*�Ѿ�ʹ��*/
    USIMM_PIN_ENABLE_BUTT
};
typedef VOS_UINT32      USIMM_PIN_ENABLE_STATUS_ENUM_UINT32;

enum USIMM_PIN_VERIY_STATUS_ENUM
{
    USIMM_NONEED            = 0, /*����Ҫ��֤*/
    USIMM_PIN_NEED          = 1, /*��Ҫ��֤*/
    USIMM_PUK_NEED          = 2, /*��Ҫ��֤puk*/
    USIMM_PUK_BLOCK         = 3, /*��Ҫ��֤ADM*/
    USIMM_PIN_VERIY_BUTT
};
typedef VOS_UINT32      USIMM_PIN_VERIY_STATUS_ENUM_UINT32;


enum USIMM_REFRESH_TYPE_ENUM
{
    USIMM_INITIAL_FULL_FILE_CHANGE_NOTIFY= 0,
    USIMM_FILE_CHANGE_NOTIFY             = 1,
    USIMM_INITIAL_FILE_CHANGE_NOTIFY     = 2,
    USIMM_INITIALIZATION                 = 3,
    USIMM_RESET                          = 4,
    USIMM_APPLICATION_RESET_3G_ONLY      = 5,
    USIMM_SESSION_RESET_3G_ONLY          = 6,
    USIMM_STEERING_OF_ROAMING            = 7,
    USIMM_REFRESH_BUTT
};
typedef VOS_UINT32      USIMM_REFRESH_TYPE_ENUM_UINT32;

enum USIMM_CARD_TYPE_ENUM
{
    USIMM_CARD_SIM           = 0,
    USIMM_CARD_USIM          = 1,
    USIMM_CARD_ISIM          = 3,             /*ISIM��*/
#if (FEATURE_UE_MODE_CDMA == FEATURE_ON)
    USIMM_CARD_UIM           = 4,
    USIMM_CARD_CSIM          = 5,
#endif
    USIMM_CARD_ROM_SIM       = 254,
    USIMM_CARD_NOCARD        = 255,
    USIMM_CARD_TYPE_BUTT
};
typedef VOS_UINT32      USIMM_CARD_TYPE_ENUM_UINT32;

enum USIMM_PB_INIT_STATUS_ENUM
{
    USIMM_PB_IDLE           = 0,
    USIMM_PB_INITIALING     = 1
};
typedef VOS_UINT16      USIMM_PB_INIT_STATUS_ENUM_UINT16;


enum USIMM_CARD_SERVIC_ENUM
{
    USIMM_CARD_SERVIC_ABSENT        =0,     /* �޿� */
    USIMM_CARD_SERVIC_UNAVAILABLE   =1,     /* �п�,���񲻿��� */
    USIMM_CARD_SERVIC_SIM_PIN       =2,     /* SIM����������PIN��ԭ�򲻿��� */
    USIMM_CARD_SERVIC_SIM_PUK       =3,     /* SIM����������PUK��ԭ�򲻿��� */
    USIMM_CARD_SERVIC_NET_LCOK      =4,     /* SIM������������������ԭ�򲻿��� */
    USIMM_CARD_SERVIC_IMSI_LCOK     =5,     /* SIM����������IMSI����ԭ�򲻿��� */
    USIMM_CARD_SERVIC_AVAILABLE     =6,     /* ������� */
    USIMM_CARD_SERVIC_BUTT
};
typedef VOS_UINT32      USIMM_CARD_SERVIC_ENUM_UINT32;

enum USIMM_POOL_FILEID_ENUM
{
    /*File Under MF*/
    EFPL                            = 0x2F05,
    EFICCID                         = 0x2FE2,
    /*Mandantory File*/
    EFLP                            = 0x6F05,
    EFIMSI                          = 0x6F07,
    EFLOCI                          = 0x6F7E,
    EFAD                            = 0x6FAD,
    EFSST                           = 0x6F38,
    EFUST                           = 0x6F38,
    EFACC                           = 0x6F78,
    EFHPPLMN                        = 0x6F31,
    EFPLMNsel                       = 0x6F30,
    EFKC                            = 0x6F20,
    EFBCCH                          = 0x6F74,
    EFFPLMN                         = 0x6F7B,
    EFPSLOCI                        = 0x6F73,
    EFKeys                          = 0x6F08,
    EFKeysPS                        = 0x6F09,
    EFSTARTHFN                      = 0x6F5B,
    EFTHRESHOLD                     = 0x6F5C,
    EFNETPAR                        = 0x6FC4,
    /*Optional File*/
    EFKCGPRS                        = 0x6F52,
    EFLOCIGPRS                      = 0x6F53,
    EFPLMNwAcT                      = 0x6F60,
    EFOPLMNwAcT                     = 0x6F61,
    EFHPLMNwAcT                     = 0x6F62,
    EFEHPLMN                        = 0x6FD9,
    EFKc                            = 0x4F20,
    EFKcGPRS                        = 0x4F52,
    USIMM_POOL_FILEID_BUTT          = 0x6FFF
};
typedef VOS_UINT16      USIMM_POOL_FILEID_ENUM_UINT16;

enum USIMM_CUIM_FILEID_ENUM
{
    /*Mandantory File*/
    EF_CUIM_AD                      = 0x6F43,   /*T*/
    EF_CUIM_CST                     = 0x6F32,   /*T*/
    EF_CUIM_RUIMID                  = 0x6F31,   /*T*/
    EF_CUIM_USGIND                  = 0x6F42,   /*T*/
    EF_CUIM_SP                      = 0x6F37,   /*T*/
    EF_CUIM_COUNT                   = 0x6F21,   /*C*/
    EF_CUIM_IMSIM                   = 0x6F22,   /*T*/
    EF_CUIM_IMSIT                   = 0x6F23,   /*T*/
    EF_CUIM_TMSI                    = 0x6F24,   /*T*/
    EF_CUIM_ACCOLC                  = 0x6F2C,   /*T*/
    EF_CUIM_PRL                     = 0x6F30,   /*T*/
    EF_CUIM_MAXPRL                  = 0x6F45,   /*T*/
    EF_UIM_RUIM_PL                  = 0x6F3A,   /*T*/
    EF_UIM_REVISION                 = 0x6F39,   /*T*/
    EF_CUIM_HOME                    = 0x6F28,   /*L*/
    EF_CUIM_ZNREGI                  = 0x6F29,   /*L*/
    EF_CUIM_SNREGI                  = 0x6F2A,   /*L*/
    EF_CUIM_DISTREGI                = 0x6F2B,   /*L*/
    EF_CUIM_ESNMEID                 = 0x6F38,   /*T*/
    EF_CUIM_SMS                     = 0x6F3C,   /*L*/
    EF_CUIM_SMSP                    = 0x6F3D,   /*L*/
    EF_CUIM_SMSS                    = 0x6F3E,   /*T*/
    EF_CUIM_SPN                     = 0x6F41,   /*T*/

    /*Optional File*/
    EF_CUIM_ECC                     = 0x6F47,   /*T*/
    EF_CUIM_EPRL                    = 0x6F5A,   /*T*/
    EF_CSIM_LI                      = 0x6F3A,   /*T*/
    EF_CSIM_EST                     = 0x6F75,   /*T*/
    EF_CUIM_PUZL                    = 0x6F53,   /*T*/
    EF_CUIM_MAXPUZL                 = 0x6F54,   /*T*/
    EF_CUIM_CSSPRL                  = 0x6F58,   /*T*/
    EF_CUIM_ATC                     = 0x6F59,   /*T*/
    EF_CUIM_BCSMS_CFG               = 0x6F5B,   /*T*/
    EF_CUIM_BCSMS_PREF              = 0x6F5C,   /*T*/
    EF_CUIM_BCSMS_TBL               = 0x6F5D,   /*L*/
    EF_CUIM_BCSMSP                  = 0x6F5E,   /*L*/
    EF_CUIM_CDMACNL                 = 0x6F6F,   /*T*/
    EF_CUIM_SMSCAP                  = 0x6F76,   /*T*/
    EF_CSIM_ICI                     = 0x6F7C,   /*C*/
    EF_CSIM_OCI                     = 0x6F7D,   /*C*/

    USIMM_CUIM_FILEID_BUTT          = 0x6FFF
};
typedef VOS_UINT16      USIMM_CUIM_FILEID_ENUM_UINT16;


enum UICC_SERVICES_TYPE_ENUM
{
/* 00 */ UICC_SVR_NONE = 0,

/* 01 */ SIM_SVR_CHV1,                   /* CHV1 disable function                                           */
/* 02 */ SIM_SVR_ADN,                    /* Abbreviated Dialling Numbers (ADN)                              */
/* 03 */ SIM_SVR_FDN,                    /* Fixed Dialling Numbers (FDN)                                    */
/* 04 */ SIM_SVR_SMS,                    /* Short Message Storage (SMS)                                     */
/* 05 */ SIM_SVR_AOC,                    /* Advice of Charge (AoC)                                          */
/* 06 */ SIM_SVR_CCP,                    /* Capability Configuration Parameters (CCP)                       */
/* 07 */ SIM_SVR_PLMN_SELECTOR,          /* PLMN selector                                                   */
/* 08 */ SIM_SVR_RFU1,                   /* RFU                                                             */
/* 09 */ SIM_SVR_MSISDN,                 /* MSISDN                                                          */
/* 10 */ SIM_SVR_EXT1,                   /* Extension1                                                      */
/* 11 */ SIM_SVR_EXT2,                   /* Extension2                                                      */
/* 12 */ SIM_SVR_SMS_PARA,               /* SMS Parameters                                                  */
/* 13 */ SIM_SVR_LND,                    /* Last Number Dialled (LND)                                       */
/* 14 */ SIM_SVR_CBMID,                  /* Cell Broadcast Message Identifier                               */
/* 15 */ SIM_SVR_GIDL1,                  /* Group Identifier Level 1                                        */
/* 16 */ SIM_SVR_GIDL2,                  /* Group Identifier Level 2                                        */
/* 17 */ SIM_SVR_SERVICE_PRO_NAME,       /* Service Provider Name                                           */
/* 18 */ SIM_SVR_SDN,                    /* Service Dialling Numbers (SDN)                                  */
/* 19 */ SIM_SVR_EXT3,                   /* Extension3                                                      */
/* 20 */ SIM_SVR_RFU2,                   /* RFU                                                             */
/* 21 */ SIM_SVR_EFVGCS_EFVGCSS,         /* VGCS Group Identifier List (EFVGCS and EFVGCSS)                 */
/* 22 */ SIM_SVR_FVBS_EFVBSS,            /* VBS Group Identifier List (EFVBS and EFVBSS)                    */
/* 23 */ SIM_SVR_ENH_ML_SVC,             /* enhanced Multi Level Precedence and Pre emption Service         */
/* 24 */ SIM_SVR_AUTO_ANSWER_FOR_EMLPP,  /* Automatic Answer for eMLPP                                      */
/* 25 */ SIM_SVR_DD_VIA_SMS_CB,          /* Data download via SMS CB                                        */
/* 26 */ SIM_SVR_DD_VIA_SMS_PP,          /* Data download via SMS PP                                        */
/* 27 */ SIM_SVR_MENU_SELECTION,         /* Menu selection                                                  */
/* 28 */ SIM_SVR_CALL_CONTROL,           /* Call control                                                    */
/* 29 */ SIM_SVR_PRO_SIM,                /* Proactive SIM                                                   */
/* 30 */ SIM_SVR_CBMIR,                  /* Cell Broadcast Message Identifier Ranges                        */
/* 31 */ SIM_SVR_BDN,                    /* Barred Dialling Numbers (BDN)                                   */
/* 32 */ SIM_SVR_EXT4,                   /* Extension4                                                      */
/* 33 */ SIM_SVR_DPCK,                   /* De personalization Control Keys                                 */
/* 34 */ SIM_SVR_CONL,                   /* Co operative Network List                                       */
/* 35 */ SIM_SVR_SMS_REPORTS,            /* Short Message Status Reports                                    */
/* 36 */ SIM_SVR_NID,                    /* Network's indication of alerting in the MS                      */
/* 37 */ SIM_SVR_MOSMC,                  /* Mobile Originated Short Message control by SIM                  */
/* 38 */ SIM_SVR_GPRS,                   /* GPRS                                                            */
/* 39 */ SIM_SVR_IMG,                    /* Image (IMG)                                                     */
/* 40 */ SIM_SVR_SOLSA,                  /* SoLSA (Support of Local Service Area)                           */
/* 41 */ SIM_SVR_USSD,                   /* USSD string data object supported in Call Control               */
/* 42 */ SIM_SVR_RUN_AT_CMD,             /* RUN AT COMMAND command                                          */
/* 43 */ SIM_SVR_USER_CTRL_PLMN,         /* User controlled PLMN Selector with Access Technology            */
/* 44 */ SIM_SVR_OPERATOR_CTRL_PLMN,     /* Operator controlled PLMN Selector with Access Technology        */
/* 45 */ SIM_SVR_HPLMN,                  /* HPLMN Selector with Access Technology                           */
/* 46 */ SIM_SVR_CPBCCHI,                /* CPBCCH Information                                              */
/* 47 */ SIM_SVR_INV_SCAN,               /* Investigation Scan                                              */
/* 48 */ SIM_SVR_ECCP,                   /* Extended Capability Configuration Parameters                    */
/* 49 */ SIM_SVR_MEXE,                   /* MExE                                                            */
/* 50 */ SIM_SVR_RSV,                    /* Reserved and shall be ignored                                   */
/* 51 */ SIM_SVR_PLMNNN,                 /* PLMN Network Name                                               */
/* 52 */ SIM_SVR_OPLMNL,                 /* Operator PLMN List                                              */
/* 53 */ SIM_SVR_MDN,                    /* Mailbox Dialling Numbers                                        */
/* 54 */ SIM_SVR_MWIS,                   /* Message Waiting Indication Status                               */
/* 55 */ SIM_SVR_CFIS,                   /* Call Forwarding Indication Status                               */
/* 56 */ SIM_SVR_SPDI,                   /* Service Provider Display Information                            */
/* 57 */ SIM_SVR_MMS,                    /* Multimedia Messaging Service (MMS)                              */
/* 58 */ SIM_SVR_EXT8,                   /* Extension 8                                                     */
/* 59 */ SIM_SVR_MMS_UCP,                /* MMS User Connectivity Parameters                                */
	     SIM_SVR_BUTT,

/* 01 */ USIM_SVR_LOCAL_PHONEBOOK = SIM_SVR_BUTT,       /* Local Phonebook, UADF/Phonebook/ADN  */
/* 02 */ USIM_SVR_FDN,                   /* Forbidden Dialling Numbers                                      */
/* 03 */ USIM_SVR_EXT2,                  /* Extension 2                                                     */
/* 04 */ USIM_SVR_SDN,                   /* Service Dialling Numbers                                        */
/* 05 */ USIM_SVR_EXT3,                  /* Extension 3                                                     */
/* 06 */ USIM_SVR_BDN,                   /* Barred Dialing Numbers                                          */
/* 07 */ USIM_SVR_EXT4,                  /* Extension 4                                                     */
/* 08 */ USIM_SVR_OCI_OCT,               /* Outgoing Call information/timer                                 */
/* 09 */ USIM_SVR_ICI_ICT,               /* Incoming call information/timer                                 */
/* 10 */ USIM_SVR_SMS,                   /* Short Message Services                                          */
/* 11 */ USIM_SVR_SMSR,                  /* Short Message Status Reports                                    */
/* 12 */ USIM_SVR_SMSP,                  /* SMS Parameters                                                  */
/* 13 */ USIM_SVR_AOC,                   /* Advice of Charge                                                */
/* 14 */ USIM_SVR_CCP,                   /* Configuration Capability Params                                 */
/* 15 */ USIM_SVR_CBMI,                  /* Cell Broadcast Message Identifier                               */
/* 16 */ USIM_SVR_CBMIR,                 /* Cell Broadcast Message Identifiers Range                        */
/* 17 */ USIM_SVR_GID1,                  /* Group Identifier 1                                              */
/* 18 */ USIM_SVR_GID2,                  /* Group Identifier 2                                              */
/* 19 */ USIM_SVR_SPN,                   /* Service Provider Name                                           */
/* 20 */ USIM_SVR_UPLMN_SEL_WACT,        /* User controlled PLMN Selector with Access Technology            */
/* 21 */ USIM_SVR_MSISDN,                /* MSISDN                                                          */
/* 22 */ USIM_SVR_IMAGE,                 /* Image (IMG)                                                     */
/* 23 */ USIM_SVR_SOLSA,                 /* Support of Local Service Area                                   */
/* 24 */ USIM_SVR_ENH_ML_SVC,            /* Enhanced Multi Level precedence and Premption Service           */
/* 25 */ USIM_SVR_AA_EMLPP,              /* Automatic Answer for eMLPP                                      */
/* 26 */ USIM_SVR_RFU1,                  /* RFU                                                             */
/* 27 */ USIM_SVR_GSM_ACCESS_IN_USIM,    /* USIM ADF Access to USIM files for GSM Roaming                   */
/* 28 */ USIM_SVR_DATA_DL_SMSPP,         /* Data download via SMS-PP                                        */
/* 29 */ USIM_SVR_DATA_DL_SMSCB,         /* Data download via SMS-CB                                        */
/* 30 */ USIM_SVR_CALL_CONTROL,          /* Call Control                                                    */
/* 31 */ USIM_SVR_MOSMS_CONTROL,         /* MO SMS control                                                  */
/* 32 */ USIM_SVR_RUN_AT_CMD,            /* RUN AT COMMAND command                                          */
/* 33 */ USIM_SVR_SET_ONE,               /* shall be set to1                                                */
/* 34 */ USIM_SVR_EST,                   /* Enable Service Table in USIM                                    */
/* 35 */ USIM_SVR_ACL,                   /* APN Control list                                                */
/* 36 */ USIM_SVR_DEPERSON_KEYS,         /* Depersonalization Keys                                          */
/* 37 */ USIM_SVR_COOP_NETWK_LIST,       /* Co-operative Network List                                       */
/* 38 */ USIM_SVR_GSM_SECURITY_CONTEXT,  /* GSM Security Context                                            */
/* 39 */ USIM_SVR_CPBCCH,                /* CP BCCH                                                         */
/* 40 */ USIM_SVR_INV_SCAN,              /* Investigation Scan                                              */
/* 41 */ USIM_SVR_MEXE,                  /* MExE info                                                       */
/* 42 */ USIM_SVR_OPLMN_SEL_WACT,        /* Operator controlled PLMN Selector with Access Technology        */
/* 43 */ USIM_SVR_HPLMN_WACT,            /* HPLMN Selector with Access Technology                           */
/* 44 */ USIM_SVR_EXT5,                  /* Extension 5                                                     */
/* 45 */ USIM_SVR_PLMN_NTWRK_NAME,       /* PLMN Network Name                                               */
/* 46 */ USIM_SVR_OPLMN_LIST,            /* Operator PLMN list                                              */
/* 47 */ USIM_SVR_MAILBOX_DIAL,          /* Mailbox dialling numbers                                        */
/* 48 */ USIM_SVR_MSG_WAIT,              /* Message Wait indication                                         */
/* 49 */ USIM_SVR_CALL_FWD_IND,          /* Call Forward indication status                                  */
/* 50 */ USIM_SVR_RFU2,                  /* RFU                                                             */
/* 51 */ USIM_SVR_SP_DISP_INFO,          /* Service Provider Display Information                            */
/* 52 */ USIM_SVR_MMS,                   /* Multimedia Messaging Service                                    */
/* 53 */ USIM_SVR_EXT8,                  /* Extension 8                                                     */
/* 54 */ USIM_SVR_GPRS_USIM,             /* Call control on GPRS by USIM                                    */
/* 55 */ USIM_SVR_MMS_USR_P,             /* MMS User Connectivity Parameters                                */
/* 56 */ USIM_SVR_NIA,                   /* Network's indication of alerting in the MS                      */
/* 57 */ USIM_SVR_VGCS_GID_LIST,         /* VGCS Group Identifier List                                      */
/* 58 */ USIM_SVR_VBS_GID_LIST,          /* VBS Group Identifier List                                       */
/* 59 */ USIM_SVR_PSEUDONYM,             /* Pseudonmy                                                       */
/* 60 */ USIM_SVR_UPLMN_WLAN_ACC,        /* User Controlled PLMNselector for WLAN access                    */
/* 61 */ USIM_SVR_OPLMN_WLAN_ACC,        /* Opeator Controlled PLMN selector for WLAN access                */
/* 62 */ USIM_SVR_USER_CTRL_WSID,        /* User controlled WSID list                                       */
/* 63 */ USIM_SVR_OPER_CTRL_WSID,        /* Operator controlled WSID list                                   */
/* 64 */ USIM_SVR_VGCS_SECURITY,         /* VGCS Security                                                   */
/* 65 */ USIM_SVR_VBS_SECURITY,          /* VBS Security                                                    */
/* 66 */ USIM_SVR_WLAN_REAUTH_ID,        /* WLAN Reauthentication Identity                                  */
/* 67 */ USIM_SVR_MM_STORAGE,            /* Multimedia Messaging Storage                                    */
/* 68 */ USIM_SVR_GBA,                   /* Generic Bootstrapping Architecture                              */
/* 69 */ USIM_SVR_MBMS_SECURITY,         /* MBMS security                                                   */
/* 70 */ USIM_SVR_DATA_DL_USSD,          /* Data Downlod via USSD and USSD application mode                 */
/* 71 */ USIM_SVR_EHPLMN,                /* EHPLMN                                                          */
/* 72 */ USIM_SVR_TP_AFTER_UICC_ACT,     /* additional TERMINAL PROFILE after UICC activation               */
/* 73 */ USIM_SVR_EHPLMN_IND,            /* Equivalent HPLMN Presentation Indication                        */
/* 74 */ USIM_SVR_RPLMN_LACT,            /* RPLMN Last used Access Technology                               */
/* 75 */ USIM_SVR_OMA_BCAST_PROFILE,     /* OMA BCAST Smart Card Profile                                     */
/* 76 */ USIM_SVR_GBAKEY_EM,             /* GBA-based Local Key Establishment Mechanism                      */
/* 77 */ USIM_SVR_TERMINAL_APP,          /* Terminal Applications                                            */
/* 78 */ USIM_SVR_SPN_ICON,              /* Service Provider Name Icon                                       */
/* 79 */ USIM_SVR_PNN_ICON,              /* PLMN Network Name Icon                                           */
/* 80 */ USIM_SVR_CONNECT_SIM_IP,        /* Connectivity Parameters for USIM IP connections                  */
/* 81 */ USIM_SVR_IWLEN_ID_LIST,         /* Home I-WLAN Specific Identifier List                             */
/* 82 */ USIM_SVR_IWLEN_EHPLMN_IND,      /* I-WLAN Equivalent HPLMN Presentation Indication                  */
/* 83 */ USIM_SVR_IWLEN_HPLMN_IND,       /* I-WLAN HPLMN Priority Indication                                 */
/* 84 */ USIM_SVR_IWLEN_RPLMN,           /* I-WLAN Last Registered PLMN                                      */
/* 85 */ USIM_SVR_EPS_INFO,              /* EPS Mobility Management Information                              */
/* 86 */ USIM_SVR_CSG_COR_IND,           /* Allowed CSG Lists and corresponding indications                  */
/* 87 */ USIM_SVR_CALL_CTRL_EPS,         /* Call control on EPS PDN connection by USIM                       */
/* 88 */ USIM_SVR_HPLMN_DIR_ACCESS,      /* HPLMN Direct Access                                              */
/* 89 */ USIM_SVR_ECALL_DATA,            /* eCall Data                                                       */
/* 90 */ USIM_SVR_OP_CGS,                /* Operator CSG Lists and corresponding indications                 */
/* 91 */ USIM_SVR_SM_VOER_IP,            /* Support for SM-over-IP                                           */
/* 92 */ USIM_SVR_CSG_CTRL,              /* Support of CSG Display Control                                   */
/* 93 */ USIM_SVR_CTRL_IMS,              /* Communication Control for IMS by USIM                            */
/* 94 */ USIM_SVR_APP_EX,                /* Extended Terminal Applications                                   */
/* 95 */ USIM_SVR_ACCESS_IMS,            /* Support of UICC access to IMS                                    */
/* 96 */ USIM_SVR_NO_ACCESS,             /* Non-Access Stratum configuration by USIM                         */
/* 97 */ USIM_SVR_PWS_CONFIG,            /* PWS configuration by USIM                                        */
	     USIM_SVR_BUTT,

/* 01 */ ISIM_SVR_PCSCF_ADDR = USIM_SVR_BUTT,            /* P-CSCF address */
/* 02 */ ISIM_SVR_GBA,                   /* Generic Bootstrapping Architecture (GBA)                         */
/* 03 */ ISIM_SVR_HTTP_DIGEST,           /* HTTP Digest                                                      */
/* 04 */ ISIM_SVR_LOCAL_GBA,             /* GBA-based Local Key Establishment Mechanism                      */
/* 05 */ ISIM_SVR_IMS_PCSCF,             /* Support of P-CSCF discovery for IMS Local Break Out              */
/* 06 */ ISIM_SVR_SMS,                   /* Short Message Storage (SMS)                                      */
/* 07 */ ISIM_SVR_SMSR,                  /* Short Message Status Reports (SMSR)                              */
/* 08 */ ISIM_SVR_SOI,                   /* Support for SM-over-IP including data download via SMS-PP as defined in TS 31.111 [31] */
/* 09 */ ISIM_SVR_COMM_CTRL,             /* Communication Control for IMS by ISIM                            */
/* 10 */ ISIM_SVR_UICC_IMS,              /* Support of UICC access to IMS                                    */
         ISIM_SVR_BUTT,

/* 01 */ UIM_SVR_CHV_DISABLE = ISIM_SVR_BUTT,  /* CHV Disable fuction */
/* 02 */ UIM_SVR_ADN,                   /* Abbreviated Dialing Numbers */
/* 03 */ UIM_SVR_FDN,                   /* Fix Dialing Numbers */
/* 04 */ UIM_SVR_SMS,                   /* Short Message Stroage */
/* 05 */ UIM_SVR_HRPD,                  /* HRPD */
/* 06 */ UIM_SVR_EPB,                   /* Enhanced Phone Book */
/* 07 */ UIM_SVR_MMD,                   /* Multi Media Domain */
/* 08 */ UIM_SVR_SF_EUIMID,             /* SF_EUIMID-based EUIMID */
/* 09 */ UIM_SVR_MEID,                  /* MEID Support */
/* 10 */ UIM_SVR_EXT1,                  /* Extension1 */
/* 11 */ UIM_SVR_EXT2,                  /* Extension2 */
/* 12 */ UIM_SVR_SMSP,                  /* SMS Parameters */
/* 13 */ UIM_SVR_LND,                   /* Last Number Dialed */
/* 14 */ UIM_SVR_SCP_BC_SMS,            /* Service Category Program for BC-SMS */
/* 15 */ UIM_SVR_3GPD_EXT,              /* Messaging and 3GPD Extensions */
/* 16 */ UIM_SVR_ROOT_CA,               /* Root Certificates */
/* 17 */ UIM_SVR_HOME_SPN,              /* CDMA Home Service Provider Name */
/* 18 */ UIM_SVR_SDN,                   /* Service Dialing Numbers */
/* 19 */ UIM_SVR_EXT3,                  /* Extension 3 */
/* 20 */ UIM_SVR_3GPD_SIP,              /* 3GPD SIP */
/* 21 */ UIM_SVR_WAP,                   /* WAP Browser */
/* 22 */ UIM_SVR_JAVA,                  /* Java */
/* 23 */ UIM_SVR_RSV_CDG1,              /* Reserved for CDG */
/* 24 */ UIM_SVR_RSV_CDG2,              /* Reserved for CDG */
/* 25 */ UIM_SVR_CBS_DOWNLOAD,          /* Data Download via SMS Broadcast */
/* 26 */ UIM_SVR_SMS_PP_DOWNOLAD,       /* Data Download via SMS-PP */
/* 27 */ UIM_SVR_MENU_SELECTION,        /* Menu Selection  */
/* 28 */ UIM_SVR_CALL_CONTROL,          /* Call Control */
/* 29 */ UIM_SVR_PROACTIVE_UIM,         /* Proactive R-UIM */
/* 30 */ UIM_SVR_AKA,                   /* AKA */
/* 31 */ UIM_SVR_IPV6,                  /* IPV6 */
/* 32 */ UIM_SVR_RFU1,                  /* RFU */
/* 33 */ UIM_SVR_RFU2,                  /* RFU */
/* 34 */ UIM_SVR_RFU3,                  /* RFU */
/* 35 */ UIM_SVR_RFU4,                  /* RFU */
/* 36 */ UIM_SVR_RFU5,                  /* RFU */
/* 37 */ UIM_SVR_RFU6,                  /* RFU */
/* 38 */ UIM_SVR_3GPD_MIP,              /* 3GPD MIP */
/* 39 */ UIM_SVR_BCMCS,                 /* BCMCS */
/* 40 */ UIM_SVR_MMS,                   /* Multimedia Messaging Service */
/* 41 */ UIM_SVR_EXT8,                  /* Extension 8 */
/* 42 */ UIM_SVR_MMSCP,                 /* MMS User Connectivity Parameters */
/* 43 */ UIM_SVR_APP_AUTH,              /* Application Authentication */
/* 44 */ UIM_SVR_GID1,                  /* Group Identifier Level 1 */
/* 45 */ UIM_SVR_GID2,                  /* Group Identifier Level 2 */
/* 46 */ UIM_SVR_CPCK,                  /* De-Personalization Control Keys */
/* 47 */ UIM_SVR_CNL,                   /* Cooperative Network List */
         UIM_SVR_BUTT,

/* 01 */ CSIM_SVR_LOCAL_PB = UIM_SVR_BUTT,  /* Local Phone Book */
/* 02 */ CSIM_SVR_FDN,                  /* Fixed Dialing Numbers */
/* 03 */ CSIM_SVR_EXT2,                 /* Extension 2 */
/* 04 */ CSIM_SVR_SDN,                  /* Service Dialing Numbers */
/* 05 */ CSIM_SVR_EXT3,                 /* Extension 2 */
/* 06 */ CSIM_SVR_SMS,                  /* Short Message Storage */
/* 07 */ CSIM_SVR_SMSP,                 /* Short Message Parameters */
/* 08 */ CSIM_SVR_HRPD,                 /* HRPD */
/* 09 */ CSIM_SVR_SCP_BCSMS,            /* Service Category Program for BC-SMS */
/* 10 */ CSIM_SVR_HOME_SPN,             /* CDMA Home Service Provider Name */
/* 11 */ CSIM_SVR_CBS_DOWNLOAD,         /* Data Download via SMS Broadcast */
/* 12 */ CSIM_SVR_SMSPP_DOWNLOAD,       /* Data Download via SMS PP */
/* 13 */ CSIM_SVR_CALL_CONTROL,         /* Call Control */
/* 14 */ CSIM_SVR_3GPD_SIP,             /* 3GPD_SIP */
/* 15 */ CSIM_SVR_3GPD_MIP,             /* 3GPD_MIP */
/* 16 */ CSIM_SVR_AKA,                  /* AKA */
/* 17 */ CSIM_SVR_IP_LCS,               /* IP based Location Services */
/* 18 */ CSIM_SVR_BCMCS,                /* BCMCS */
/* 19 */ CSIM_SVR_MMS,                  /* Multimedia Messaging Service */
/* 20 */ CSIM_SVR_EXT8,                 /* Extension 8 */
/* 21 */ CSIM_SVR_MMS_UCP,              /* MMS User Connectivity Parameters */
/* 22 */ CSIM_SVR_APP_AUTH,             /* Application Authentication */
/* 23 */ CSIM_SVR_GID1,                 /* Group Identifier Level 1 */
/* 24 */ CSIM_SVR_GID2,                 /* Group Identifier Level 2 */
/* 25 */ CSIM_SVR_DPCK,                 /* De-Personalization Control Keys */
/* 26 */ CSIM_SVR_CNL,                  /* Cooperative Network List */
/* 27 */ CSIM_SVR_OCI,                  /* Outgoing Call Information */
/* 28 */ CSIM_SVR_ICI,                  /* Incoming Call Information */
/* 29 */ CSIM_SVR_EXT5,                 /* Extension 5 */
/* 30 */ CSIM_SVR_MS,                   /* Multimedia Stroage */
/* 31 */ CSIM_SVR_IMG,                  /* Image EFIMG */
/* 32 */ CSIM_SVR_EST,                  /* Enabled Services Table */
/* 33 */ CSIM_SVR_CCP,                  /* Capability Configuration Parameters */
/* 34 */ CSIM_SVR_SF_EUIMID,            /* SF_EUIMID-based EUIMID */
/* 35 */ CSIM_SVR_3GPD_EXT,             /* Messaging and 3GPD Extensions */
/* 36 */ CSIM_SVR_ROOT_CA,              /* Root Certificates */
/* 37 */ CSIM_SVR_WAP_BROWSER,          /* WAP Browser */
/* 38 */ CSIM_SVR_JAVA,                 /* Java */
/* 39 */ CSIM_SVR_RSV_CDG1,             /* Reserved for CDG */
/* 40 */ CSIM_SVR_RSV_CDG2,             /* Reserved for CDG */
/* 41 */ CSIM_SVR_IPV6,                 /* IPV6 */
         CSIM_SVR_BUTT

};

typedef VOS_UINT32      UICC_SERVICES_TYPE_ENUM_UINT32;

enum USIMM_RESTRIC_CMD_ENUM
{
    USIMM_AUTHENTICATION                = 136,
    USIMM_READ_BINARY                   = 176,
    USIMM_READ_RECORD                   = 178,
    USIMM_GET_RESPONSE                  = 192,
    USIMM_UPDATE_BINARY                 = 214,
    USIMM_UPDATE_RECORD                 = 220,
    USIMM_STATUS                        = 242,
    USIMM_CMD_BUTT
};
typedef VOS_UINT32      USIMM_RESTRIC_CMD_ENUM_UINT32;

enum USIMM_APP_TYPE_ENUM
{
    USIMM_GSM_APP                       = 0,
    USIMM_UMTS_APP,
    USIMM_PB_APP,
    USIMM_ATT_APP,
    USIMM_ISIM_APP,
#if (FEATURE_UE_MODE_CDMA == FEATURE_ON)
    USIMM_3GPP2_APP,
#endif
    USIMM_UNLIMIT_APP,
    USIMM_APP_BUTT
};
typedef VOS_UINT32 USIMM_APP_TYPE_ENUM_UINT32;

enum USIMM_POLL_FCP_ENUM
{
    USIMM_POLL_NO_NEED_FCP              = 0,
    USIMM_POLL_NEED_FCP                 = 1,
    USIMM_POLL_FCP_BUTT
};
typedef VOS_UINT32      USIMM_POLL_FCP_ENUM_UINT32;

enum USIMM_CARD_IND_REASON_ENUM
{
    USIMM_CARD_IND_NORMAL               = 0,
    USIMM_CARD_IND_STK_RESET            = 1,
    USIMM_CARD_IND_IMSI_CHANGE          = 2,
    USIMM_CARD_IND_BUTT
};
typedef VOS_UINT32 USIMM_CARD_IND_REASON_ENUM_UINT32;

enum USIMM_FDNSTATUS_ENUM
{
    USIMM_FDNSTATUS_OFF                 = 0,
    USIMM_FDNSTATUS_ON                  = 1,
    USIMM_FDNSTATUS_BUTT
};
typedef VOS_UINT32 USIMM_FDNSTATUS_ENUM_UINT32;

enum USIMM_BDNSTATUS_ENUM
{
    USIMM_BDNSTATUS_OFF                 = 0,
    USIMM_BDNSTATUS_ON                  = 1,
    USIMM_BDNSTATUS_BUTT
};
typedef VOS_UINT32      USIMM_BDNSTATUS_ENUM_UINT32;

/*PIN�����ʧ�ܽ��*/
enum USIMM_PIN_ERROR_ENUM
{
    USIMM_SIM_PIN_REQUIRED              = 151,
    USIMM_SIM_PUK_REQUIRED              = 152,
    USIMM_SIM_FAILURE                   = 153,
    USIMM_SIM_BUSY                      = 154,
    USIMM_SIM_WRONG                     = 155,
    USIMM_INCORRECT_PASSWORD            = 156,
    USIMM_SIM_PIN2_REQUIRED             = 157,
    USIMM_SIM_PUK2_REQUIRED             = 158,
    USIMM_OPERATION_NOT_ALLOW           = 167,
    USIMM_PIN_ERROR_BUTT
};
typedef VOS_UINT32 USIMM_PIN_ERROR_ENUM_UINT32;

/* Api_UsimAuthCnf ucResult�궨�� */
enum USIMM_AUTH_RESULT_ENUM
{
    USIMM_AUTH_UMTS_SUCCESS,
    USIMM_AUTH_GSM_SUCCESS,
    USIMM_AUTH_IMS_SUCCESS,        /*��Ȩ�ɹ�*/
    USIMM_AUTH_CDMA_SUCCESS,
    USIMM_AUTH_MAC_FAILURE,       /*MACʧ��*/
    USIMM_AUTH_SYNC_FAILURE,     /*��ͬ��ʧ��*/
    USIMM_AUTH_UMTS_OTHER_FAILURE,
    USIMM_AUTH_GSM_OTHER_FAILURE,
    USIMM_AUTH_IMS_OTHER_FAILURE, /*����ʧ��*/
    USIMM_AUTH_CDMA_OTHER_FAILURE,
    USIMM_AUTH_RESULT_BUTT
};
typedef VOS_UINT32 USIMM_AUTH_RESULT_ENUM_UINT32;

enum USIMM_FBDN_HANDLE_ENUM
{
    USIMM_FBDN_DEACTIVE                  = 0,
    USIMM_FBDN_ACTIVE                    = 1,
    USIMM_FBDN_BUTT
};
typedef VOS_UINT32 USIMM_FBDN_HANDLE_ENUM_UINT32;

enum USIMM_REFRESH_FILE_TYPE
{
    USIMM_REFRESH_ALL_FILE,
    USIMM_REFRESH_FILE_LIST,
    USIMM_REFRESH_3G_SESSION_RESET,
    USIMM_REFRESH_FILE_BUTT
};
typedef VOS_UINT16 USIMM_REFRESH_FILE_TYPE_UINT16;

/*****************************************************************************
 �ṹ��    : USIMM_AID_TYPE_ENUM_UINT32
 �ṹ˵��  : AID����ö��ֵ
 �޸���ʷ      :
  1.��    ��   : 2013��12��19��
    ��    ��   : h59254
    �޸�����   :
*****************************************************************************/
enum USIMM_AID_TYPE_ENUM
{
    USIMM_AID_TYPE_USIM                 = 0,    /* USIM��AID */
    USIMM_AID_TYPE_ISIM                 = 1,    /* ISIM��AID */
    USIMM_AID_TYPE_CSIM                 = 2,    /* CSIM��AID */
    USIMM_AID_TYPE_BUTT
};
typedef VOS_UINT32  USIMM_AID_TYPE_ENUM_UINT32;

/*****************************************************************************
 �ṹ��    : USIMM_TR_PARA_ENUM_32
 �ṹ˵��  : TERMINAL RESPONSE͸������
 �޸���ʷ      :
  1.��    ��   : 2014��02��15��
    ��    ��   : h59254
    �޸�����   :
*****************************************************************************/
enum USIMM_TR_PARA_ENUM
{
    USIMM_TR_TYPE_BALONG    = 0,
    USIMM_TR_TYPE_CBP       = 0x5A5A5A5A,
    USIMM_TR_TYPE_BUTT
};
typedef VOS_UINT32  USIMM_TR_PARA_ENUM_32;

enum USIMM_CARDAPP_ENUM
{
    USIMM_GUTL_APP      = 0x00000000,
    USIMM_IMS_APP       = 0x00000001,
    USIMM_CDMA_APP      = 0x00000002,
    /*USIMM_ATT_APP       = 0x00000003,*/
    USIMM_AUTO_APP      = 0x00000004,
    USIMM_OUTSIDE_APP   = 0x00000005,
    USIMM_CARDAPP_BUTT
};
typedef VOS_UINT32 USIMM_CARDAPP_ENUM_UINT32;

enum USIMM_AUTH_TYPE_ENUM
{
    USIMM_3G_AUTH          = 0x00000000,
    USIMM_2G_AUTH          = 0x00000001,
    USIMM_IMS_AUTH         = 0x00000002,
    USIMM_HTTP_AUTH        = 0x00000003,
    USIMM_GBA_AUTH         = 0x00000004,
    USIMM_NAF_AUTH         = 0x00000005,
    USIMM_RUNCAVE_AUTH     = 0x00000006,
    USIMM_UIMEAP_AUTH      = 0x00000007,
    USIMM_WLAM_AUTH        = 0x00000008,
    USIMM_AUTH_BUTT
};
typedef VOS_UINT32 USIMM_AUTH_TYPE_ENUM_UINT32;

enum USIMM_RUNCAVE_RANDTYPE_ENUM
{
    USIMM_RUNCAVE_RAND          = 0x00,
    USIMM_RUNCAVE_RANDU         = 0x01,
    USIMM_RUNCAVE_RANDBUTT      = 0x02,
    USIMM_RUNCAVE_RANDTYPE_BUTT
};
typedef VOS_UINT8 USIMM_RUNCAVE_RANDTYPE_ENUM_UINT8;

enum USIMM_MANAGESSD_TYPE_ENUM
{
    USIMM_MANAGESSD_UPDATE  = 0x00000000,
    USIMM_MANAGESSD_CONFIRM = 0x00000001,
    USIMM_MANAGESSD_BUTT
};
typedef VOS_UINT32 USIMM_MANAGESSD_TYPE_ENUM_UINT32;


/*******************************************************************************
4 struct����
*******************************************************************************/
typedef struct
{
    VOS_UINT8                           ucPin1RemainTime;       /* PIN1��ʣ�����      */
    VOS_UINT8                           ucPin2RemainTime;       /* PIN2��ʣ�����      */
    VOS_UINT8                           ucPuk1RemainTime;       /* PUK1��ʣ�����     */
    VOS_UINT8                           ucPuk2RemainTime;       /* PUK2��ʣ�����     */
    USIMM_PIN_ENABLE_STATUS_ENUM_UINT32 enPin1Enable;           /* PIN1����״̬        */
    USIMM_PIN_ENABLE_STATUS_ENUM_UINT32 enPin2Enable;           /* PIN2����״̬        */
}USIMM_PIN_INFO_STRU;

typedef struct
{
    VOS_UINT8                           ucCommandNum;
    VOS_UINT8                           ucCommandType;
    VOS_UINT8                           ucCommandQua;
    VOS_UINT8                           ucRsv;
}USIMM_STK_COMMAND_DETAILS_STRU;

typedef struct
{
    VOS_UINT8                           ucPin1RemainTime;    /* PIN1��ʣ����� */
    VOS_UINT8                           ucPin2RemainTime;    /* PIN2��ʣ����� */
    VOS_UINT8                           ucPuk1RemainTime;    /* PUK1��ʣ����� */
    VOS_UINT8                           ucPuk2RemainTime;    /* PUK2��ʣ����� */
}USIMM_PIN_REMAIN_STRU;

/* Added by f62575 for C50_IPC Project, 2012/02/23, begin */
/* FDN����ṹ */
typedef struct
{
    VOS_UINT32                  ulNum1Len;
    VOS_UINT8                   aucNum1[20];
    VOS_UINT32                  ulNum2Len;
    VOS_UINT8                   aucNum2[20];
}PS_PB_FDN_NUM_STRU;
/* Added by f62575 for C50_IPC Project, 2012/02/23, end   */

/*API ����ṹ*/
typedef struct
{
    VOS_UINT32                  ulDataLen;
    VOS_UINT8                   *pucData;
}USIMM_U8_LVDATA_STRU;

typedef struct
{
    VOS_UINT32                  ulDataLen;
    VOS_UINT16                  *pusData;
}USIMM_U16_LVDATA_STRU;

typedef struct
{
    USIMM_APP_TYPE_ENUM_UINT32  enAppType;      /* Ӧ������ */
    VOS_UINT16                  usEfId;         /* �ļ�ID */
    VOS_UINT8                   ucRecordNum;    /* �ļ���¼�ţ��������ļ���0 */
    VOS_UINT8                   ucRsv;          /* ���� */
    VOS_UINT32                  ulEfLen ;       /* �������ݳ��� */
    VOS_UINT8                   *pucEfContent;  /* ������������ */
}USIMM_SET_FILE_INFO_STRU;

typedef struct
{
    USIMM_APP_TYPE_ENUM_UINT32  enAppType;      /* Ӧ������ */
    VOS_UINT16                  usEfId;         /* �ļ�ID */
    VOS_UINT8                   ucRecordNum;    /* �ļ���¼�ţ��������ļ���0 */
    VOS_UINT8                   ucRsv;          /* ���� */
}USIMM_GET_FILE_INFO_STRU;

typedef struct
{
    VOS_UINT16                      usFileID[14];
    VOS_UINT16                      usDataLen[14];
    VOS_UINT8                       ucRecordNum[14];
    VOS_UINT16                      usFileNum;
    VOS_UINT8                       *pContent[14];
}USIMM_SPB_API_STRU;

/*****************************************************************************
 �ṹ��    : USIMM_RESET_INFO_STRU
 �ṹ˵��  : STK����USIMMģ���RESET��Ϣ��RESET��Ϣ�ֶνṹ
*****************************************************************************/
typedef struct
{
    VOS_UINT16                      usFileListLen;              /* FILE�б��� */
    VOS_UINT8                       aucFileList[256];           /* FILE�б����� */
    VOS_UINT16                      usAidLen;                   /* AID���� */
    VOS_UINT8                       aucAid[USIMM_AID_LEN_MAX];  /* AID���� */
}USIMM_RESET_INFO_STRU;

/*****************************************************************************
6 ��Ϣ����
*****************************************************************************/

typedef struct
{
    VOS_MSG_HEADER
    VOS_UINT32                          ulMsgName;
}PS_USIM_MSG_STRU;

typedef struct
{
    VOS_MSG_HEADER
    VOS_UINT32                          ulMsgName;      /* ��Ϣ�� */
    VOS_UINT32                          ulResult;       /* ��ȡ�ļ��Ľ��*/
    VOS_UINT32                          ulErrorCode;    /*����ԭ��ֵ*/
    VOS_UINT32                          ulSendPara;     /* ͸������ */
    VOS_UINT16                          usEfId;         /* Ҫ��ȡ���ļ���ID */
    VOS_UINT16                          usEfLen;        /* EF�ļ�����(�Զ�������˵���ļ����ȣ��������ļ���˵�Ǽ�¼����)*/
    VOS_UINT8                           ucRecordNum;    /* �˴ζ�ȡ��¼ID */
    VOS_UINT8                           ucTotalNum;     /*�˴ζ�ȡ�ļ�¼�ܸ���*/
    VOS_UINT8                           aucEf[6];       /* ָ�����ȡ��EF�ļ�����*/
}PS_USIM_GET_FILE_CNF_STRU;

typedef struct
{
    VOS_MSG_HEADER
    VOS_UINT32                          ulMsgName;
    VOS_UINT32                          ulResult;       /* �����ļ��Ľ��*/
    VOS_UINT32                          ulErrorCode;    /* ����ԭ��ֵ */
    VOS_UINT32                          ulSendPara;     /* ͸����������� */
    VOS_UINT16                          usEfId;         /* Ҫ���µ��ļ���ID*/
    VOS_UINT16                          usEfLen;        /* EF���� */
    VOS_UINT8                           ucRecordNum;    /* linear fixed��cycle fixed����EF��¼��*/
    VOS_UINT8                           aucRsv[3];
}PS_USIM_SET_FILE_CNF_STRU;


typedef struct
{
    VOS_MSG_HEADER
    VOS_UINT32                          ulMsgName;            /* ��Ϣ�� */
    VOS_UINT32                          ulResult;             /* ��ȡ�ļ��Ľ��*/
    VOS_UINT32                          ulErrorCode;          /*����ԭ��ֵ*/
    VOS_UINT16                          usEfId;               /* Ҫ��ȡ���ļ���ID  */
    VOS_UINT8                           ucRecordNum;          /* linear fixed��cycle fixed����EF��¼��    */
    VOS_UINT8                           ucRecordLen;          /* Record����*/
    VOS_UINT32                          ulFileStatus;         /*�ļ��ļ���״̬*/
    VOS_UINT32                          ulFileReadUpdateFlag; /*�ļ��ɶ��Ϳɸ��±�־*/
}PS_USIM_EFMAX_CNF_STRU;

typedef struct
{
    VOS_UINT8                       aucIK[UICC_AUTH_IK_LEN];          /*Len+Data*/
    VOS_UINT8                       aucCK[UICC_AUTH_CK_LEN];          /*Len+Data*/
    VOS_UINT8                       aucGsmKc[UICC_AUTH_KC_LEN];       /*Len+Data*/
    VOS_UINT8                       aucAuts[UICC_AUTH_AUHS_LEN];      /*Len+Data*/
    VOS_UINT8                       aucAuthRes[UICC_AUTH_RES_LEN];    /*Len+Data*/
    VOS_UINT8                       aucRsv[5];
}USIMM_TELECOM_AUTH_CNF_STRU;

typedef struct
{
    VOS_UINT8                       aucIK[UICC_AUTH_IK_LEN];            /*Len+Data*/
    VOS_UINT8                       aucCK[UICC_AUTH_CK_LEN];            /*Len+Data*/
    VOS_UINT8                       aucAuts[UICC_AUTH_AUHS_LEN];        /*Len+Data*/
    VOS_UINT8                       aucAuthRes[UICC_AUTH_RES_LEN];      /*Len+Data*/
    VOS_UINT8                       aucKs_ext_NAF[6];                   /*Len+Data*/
}USIMM_IMS_AUTH_CNF_STRU;

typedef struct
{
    VOS_UINT8                       aucAuthr[UICC_AUTH_ATUHR_LEN];        /*Data*/
    VOS_UINT8                       ucRsv;
}USIMM_RUNCAVE_AUTH_CNF_STRU;

typedef struct
{
    VOS_MSG_HEADER
    VOS_UINT32                          ulMsgName;
    USIMM_APP_TYPE_ENUM_UINT32          enAppType;      /* Ӧ������ */
    USIMM_AUTH_TYPE_ENUM_UINT32         enAuthType;     /* ��Ȩ���� */
    VOS_UINT8                           ucOpId;
    VOS_UINT8                           aucRsv[3];
    USIMM_AUTH_RESULT_ENUM_UINT32       enResult;       /* ��Ȩ��� */
    union
    {
        USIMM_TELECOM_AUTH_CNF_STRU     stTELECnf;
        USIMM_IMS_AUTH_CNF_STRU         stIMSCnf;
    }cnfdata;
}USIMM_AUTH_CNF_STRU;

typedef struct
{
    VOS_MSG_HEADER
    VOS_UINT32                          ulMsgName;
    USIMM_CARDAPP_ENUM_UINT32           enAppType;      /* Ӧ������ */
    USIMM_AUTH_TYPE_ENUM_UINT32         enAuthType;     /* ��Ȩ���� */
    VOS_UINT8                           ucOpId;
    VOS_UINT8                           aucRsv[3];
    USIMM_AUTH_RESULT_ENUM_UINT32       enResult;       /* ��Ȩ��� */
    union
    {
        USIMM_TELECOM_AUTH_CNF_STRU     stTELECnf;
        USIMM_IMS_AUTH_CNF_STRU         stIMSCnf;
        USIMM_RUNCAVE_AUTH_CNF_STRU     stCdmaCnf;
    }cnfdata;
}PS_USIM_AUTH_CNF_STRU;

typedef struct
{
    VOS_MSG_HEADER
    VOS_UINT32                      ulMsgName;
    USIMM_CARD_TYPE_ENUM_UINT32     enCardType;     /* ������:SIM��USIM��ROM-SIM  */
    USIMM_CARD_SERVIC_ENUM_UINT32   enCardStatus;   /* ��״̬*/
    VOS_UINT8                       aucIMSI[9];     /* IMSI��*/
    VOS_UINT8                       ucIMSILen;      /* IMSI���� */
    VOS_UINT8                       ucReason;       /* �ϱ�ԭ��*/
    VOS_UINT8                       ucRsv;
}PS_USIM_STATUS_IND_STRU;

typedef struct
{
    VOS_MSG_HEADER
    VOS_UINT32                      ulMsgName;
    VOS_UINT32                      ulResult;                                   /*���*/
    VOS_UINT16                      usPathLen;
    VOS_UINT16                      ausPath[USIMM_MAX_PATH_LEN];
    VOS_UINT8                       ucINS;
    VOS_UINT8                       ucRsv;
    VOS_UINT8                       ucSw1;
    VOS_UINT8                       ucSw2;
    VOS_UINT16                      usRsv;
    VOS_UINT16                      usLen;                                      /* �������ݳ���*/
    VOS_UINT8                       aucContent[USIMM_APDU_RSP_MAX_LEN];         /* ����Data*/
    VOS_UINT16                      usRsv1;
}PS_USIM_GENERIC_ACCESS_CNF_STRU;

/*����OM��͸����Ϣ*/
typedef struct
{
    VOS_MSG_HEADER                                  /* ����Ϣͷ���TOOL_ID��PS��PID,��֤��Ϣ��ת������Ӧ��PSģ�� */
    VOS_UINT16                      usTransPrimId;       /* �̶���д0x5001*/
    VOS_UINT16                      usReserve;
    VOS_UINT8                       ucFuncType;          /*���ݲ�ѯ04,�տ���Ϣ�ϱ�:02*/
    VOS_UINT8                       ucReserve;
    VOS_UINT16                      usAppLength;         /*��һ���ֽڵ���β�ĳ���*/
    VOS_UINT32                      ulSn;                /* �ϱ���Ϣ�����к� */
    VOS_UINT32                      ulTimeStamp;         /*��Ϣ��ʱ������ǰ��SOC Tickֵ*/
    VOS_UINT16                      usPrimId;            /* ԭ��ID*/
    VOS_UINT16                      usToolsId;           /* ����ID */
    VOS_UINT8                       ucResult;            /*������Ϣ������*/
    VOS_UINT8                       ucEFLen;             /*ǰ�����ֽ���д��ȡ�ĳ���*/
    VOS_UINT8                       aucData[2];
}PS_USIM_OM_TRANS_IND_STRU;


/*****************************************************************************
 �ṹ��    : PS_USIM_ISDB_ACCESS_CNF_STRU
 ö��˵��  : ISDB͸��APDU�ظ��ṹ

  1.��    ��   : 2012��9��4��
    ��    ��   : h59254
    �޸�����   : V7R1C50 ISDB��ȫ�洢��Ŀ����
*****************************************************************************/
typedef struct
{
    VOS_MSG_HEADER
    VOS_UINT32                      ulMsgName;
    VOS_UINT32                      ulResult;                                   /* ��� */
    VOS_UINT8                       ucSw1;
    VOS_UINT8                       ucSw2;
    VOS_UINT16                      usLen;                                      /* �������ݳ���*/
    VOS_UINT8                       aucContent[USIMM_APDU_RSP_MAX_LEN];         /* ������������ */
}PS_USIM_ISDB_ACCESS_CNF_STRU;

/*****************************************************************************
 �ṹ��    : PS_USIM_OPEN_CHANNEL_CNF_STRU
 ö��˵��  : ��ͨ���ظ��ṹ

  1.��    ��   : 2013��5��17��
    ��    ��   : g47350
    �޸�����   : V9R1 NFC-BIP��Ŀ����
*****************************************************************************/
typedef struct
{
    VOS_MSG_HEADER
    VOS_UINT32                      ulMsgName;
    VOS_UINT32                      ulResult;                                   /* ��� */
    VOS_UINT32                      ulErrCode;
    VOS_UINT32                      ulSessionId;
}PS_USIM_OPEN_CHANNEL_CNF_STRU;

/*****************************************************************************
 �ṹ��    : PS_USIM_CLOSE_CHANNEL_CNF_STRU
 ö��˵��  : �ر�ͨ���ظ��ṹ

  1.��    ��   : 2013��5��17��
    ��    ��   : g47350
    �޸�����   : V9R1 NFC-BIP��Ŀ����
*****************************************************************************/
typedef struct
{
    VOS_MSG_HEADER
    VOS_UINT32                      ulMsgName;
    VOS_UINT32                      ulResult;                                   /* ��� */
    VOS_UINT32                      ulErrCode;
}PS_USIM_CLOSE_CHANNEL_CNF_STRU;

/*****************************************************************************
 �ṹ��    : PS_USIM_ACCESS_CHANNEL_CNF_STRU
 ö��˵��  : ����ͨ���ظ��ṹ

  1.��    ��   : 2013��5��17��
    ��    ��   : g47350
    �޸�����   : V9R1 NFC-BIP��Ŀ����
*****************************************************************************/
typedef struct
{
    VOS_MSG_HEADER
    VOS_UINT32                      ulMsgName;
    VOS_UINT32                      ulResult;                                   /* ��� */
    VOS_UINT32                      ulErrCode;
    VOS_UINT8                       ucSw1;
    VOS_UINT8                       ucSw2;
    VOS_UINT16                      usLen;                                      /* �������ݳ���*/
    VOS_UINT8                       aucContent[USIMM_APDU_RSP_MAX_LEN];         /* ������������ */
}PS_USIM_ACCESS_CHANNEL_CNF_STRU;

typedef struct
{
    VOS_MSG_HEADER
    VOS_UINT32                      ulMsgName;
    VOS_UINT32                      ulResult;                                   /* �������*/
    VOS_UINT32                      ulErrorCode;
    VOS_UINT32                      ulSendPara;
    VOS_UINT8                       ucSW1;                                      /* Status Word 1*/
    VOS_UINT8                       ucSW2;                                      /* Status Word 2 */
    VOS_UINT16                      usLen;                                      /* �������ݳ���,������SW1��SW2       */
    VOS_UINT8                       aucContent[USIMM_APDU_RSP_MAX_LEN];         /* ����Data*/
}PS_USIM_RESTRICTED_ACCESS_CNF_STRU;

typedef struct
{
    VOS_MSG_HEADER
    VOS_UINT32                      ulMsgName;
    VOS_UINT32                      ulResult;       /* PIN����������*/
    USIMM_PIN_CMD_TYPE_ENUM_UINT32  enCmdType;        /* ��PIN�Ĳ�������*/
    USIMM_PIN_TYPE_ENUM_UINT32      enPinType;        /* ��ѯ�����PIN����*/
    USIMM_PIN_INFO_STRU             stPinInfo;
}PS_USIM_PIN_CNF_STRU;

typedef struct
{
    VOS_MSG_HEADER
    VOS_UINT32                      ulMsgName;
    VOS_UINT32                      ulResult;           /* �����ļ��Ľ��*/
    VOS_UINT32                      ulErrorCode;        /*����ԭ��ֵ*/
    VOS_UINT16                      ausEfId[14];          /* Ҫ���µ��ļ���ID*/
    VOS_UINT16                      ausEfLen[14];         /* EF���� */
    VOS_UINT8                       aucRecordNum[14];     /* linear fixed��cycle fixed����EF��¼��*/
    VOS_UINT8                       ucFileNum;
    VOS_UINT8                       ucRsv;
}PS_USIM_SPB_CNF_STRU;

typedef struct
{
    VOS_MSG_HEADER
    VOS_UINT32                      ulMsgName;
    USIMM_REFRESH_TYPE_ENUM_UINT32  enRefreshType;
    VOS_UINT32                      ulResult;           /*���������*/
    VOS_UINT32                      ulErrorCode;
    VOS_UINT32                      ulSatLen;           /* ������������ĳ��� */
}PS_USIM_REFRESH_CNF_STRU;

typedef struct
{
    VOS_MSG_HEADER
    VOS_UINT32                      ulMsgName;
    VOS_UINT32                      ulResult;           /*���*/
    VOS_UINT32                      ulErrorCode;
    VOS_UINT32                      ulSendPara;         /* ͸����������������VIA��Balong�ڲ�Terminal Response���ݵ���Դ */
    VOS_UINT8                       ucSW1;
    VOS_UINT8                       ucSW2;
    VOS_UINT8                       aucRsv[2];
}PS_USIM_TERMINALRESPONSE_CNF_STRU;

typedef struct
{
    VOS_MSG_HEADER
    VOS_UINT32                      ulMsgName;
    VOS_UINT32                      ulResult;           /*���*/
    VOS_UINT32                      ulErrorCode;
    VOS_UINT32                      ulSendPara;
    VOS_UINT8                       ucSW1;
    VOS_UINT8                       ucSW2;
    VOS_UINT8                       ucDataType;
    VOS_UINT8                       ucDataLen;
    VOS_UINT8                       aucData[USIMM_T0_APDU_MAX_LEN];
}PS_USIM_ENVELOPE_CNF_STRU;

typedef struct
{
    VOS_MSG_HEADER
    VOS_UINT32                      ulMsgName;
    VOS_UINT16                      usLen;
    VOS_UINT8                       ucCmdType;
    VOS_UINT8                       ucRsv;
    VOS_UINT8                       aucContent[USIMM_T0_APDU_MAX_LEN];
}PS_USIM_SAT_IND_STRU;

typedef struct
{
    VOS_MSG_HEADER
    VOS_UINT32                      ulMsgName;
    VOS_UINT32                      ulCardInOutStatus;
}PS_HOT_IN_OUT_USIM_STATUS_IND_STRU;



/* Added by f62575 for C50_IPC Project, 2012/02/23, begin */
/*�����ϱ�FDN״̬*/
typedef struct
{
    VOS_MSG_HEADER
    VOS_UINT32                      ulMsgName;
    VOS_UINT32                      ulResult;
    USIMM_FDNSTATUS_ENUM_UINT32     enFDNState;
}PS_USIM_FDN_IND_STRU;
typedef PS_USIM_FDN_IND_STRU PS_USIM_FDN_CNF_STRU;

/* Added by f62575 for C50_IPC Project, 2012/02/23, end   */
typedef struct
{
    VOS_MSG_HEADER
    VOS_UINT32                      ulMsgName;
    VOS_UINT16                      usFileSize;/*ucContent�����ݳ���*/
    VOS_UINT8                       ucEccType;/*�������к�����SIM������USIM��*/
    VOS_UINT8                       ucRecordNum;/*USIM���������к����¼����SIM����0*/
    VOS_UINT8                       ucContent[4];/*�������к����¼��Ϣ*/
}PS_USIM_ECC_IND_STRU;

typedef struct
{
    VOS_MSG_HEADER
    VOS_UINT32                      ulMsgName;
    VOS_UINT32                      ulResult;       /*���*/
}PS_USIM_SINGLECMD_CNF_STRU;

typedef struct
{
    VOS_MSG_HEADER                              /* dopra��Ϣͷ */
    VOS_UINT32                      ulMsgName;          /* ��Ϣ�� */
    VOS_UINT32                      ulResult;           /* ��ȡ�ļ��Ľ�� */
    VOS_UINT32                      ulErrorCode;        /* ����ԭ��ֵ */
    VOS_UINT16                      usEfId;             /* �ļ�ID */
    VOS_UINT16                      usTotalRecNum;      /* �ļ��м�¼�� */
    VOS_UINT8                       ucLen;              /* �������ݳ��� */
    VOS_UINT8                       aucContent[3];      /* ������������ */
}PS_USIM_SEARCH_CNF_STRU;

typedef struct
{
    VOS_UINT16                          usCmdType;
    VOS_UINT16                          usEfId;
    VOS_UINT8                           ucP1;
    VOS_UINT8                           ucP2;
    VOS_UINT8                           ucP3;
    VOS_UINT8                           ucRsv;
    VOS_UINT16                          usCmdLen;
    VOS_UINT16                          usPathLen;
    VOS_UINT8                           aucCommand[USIMM_T0_APDU_MAX_LEN+4];
    VOS_UINT16                          ausPath[USIMM_MAX_PATH_LEN];
}TAF_SIM_RESTRIC_ACCESS_STRU;


typedef struct
{
    VOS_UINT16                          usFileId;       /*�ļ�ID*/
    VOS_UINT16                          usRsv;          /*Ԥ������*/
    USIMM_APP_TYPE_ENUM_UINT32          enAppType;      /*APP����*/
}PS_USIM_REFRESH_FILE_STRU;

typedef struct
{
    VOS_MSG_HEADER
    VOS_UINT32                          ulMsgName;      /* ��Ϣ�� */
    USIMM_REFRESH_FILE_TYPE_UINT16      enRefreshType;  /* �ļ��������� */
    VOS_UINT16                          usEfNum;        /* ���µ��ļ��ĸ��� */
    PS_USIM_REFRESH_FILE_STRU           astEfId[1];     /* ���µ��ļ�ID ��Ϣ���ɱ䳤����*/
}PS_USIM_REFRESH_IND_STRU;

/* Added by c00318887 for file refresh��Ҫ����������, 2015-4-28, begin */
typedef struct
{
    VOS_UINT16                          usEfNum;        /* ���µ��ļ��ĸ��� */
    VOS_UINT8                           aucRsv[2];      /* Ԥ������ */
    PS_USIM_REFRESH_FILE_STRU           astRefreshFile[USIMM_MAX_REFRESH_FILE_NUM];
}PS_USIM_REFRESH_FILE_CONTENT_STRU;

/* Added by c00318887 for file refresh��Ҫ����������, 2015-4-28, end */

typedef struct
{
    USIMM_U8_LVDATA_STRU                stRand;
    USIMM_U8_LVDATA_STRU                stAutn;
}USIMM_3G_AUTH_STRU;

typedef struct
{
    USIMM_U8_LVDATA_STRU                stRand;
} USIMM_2G_AUTH_STRU;

typedef struct
{
    USIMM_U8_LVDATA_STRU                stRand;
    USIMM_U8_LVDATA_STRU                stAutn;
} USIMM_IMS_AUTH_STRU;

typedef struct
{
    USIMM_U8_LVDATA_STRU                stRealm;
    USIMM_U8_LVDATA_STRU                stNonce;
    USIMM_U8_LVDATA_STRU                stCnonce;
} USIMM_HTTP_AUTH_STRU;

typedef struct
{
    USIMM_U8_LVDATA_STRU                stRand;
    USIMM_U8_LVDATA_STRU                stAutn;
} USIMM_GBA_AUTH_STRU;

typedef struct
{
    USIMM_U8_LVDATA_STRU                stNafID;
    USIMM_U8_LVDATA_STRU                stImpi;
} USIMM_NAF_AUTH_STRU;




/*****************************************************************************
�ṹ��    : PS_USIM_VSIM_REDH_IND_STRU
�ṹ˵��  : ���⿨DH��Э���ϱ�ָʾ��Ϣ�ṹ
*****************************************************************************/
typedef struct
{
    VOS_MSG_HEADER
    VOS_UINT32                          ulMsgName;      /* ��Ϣ�� */
}PS_USIM_VSIM_REDH_IND_STRU;

typedef struct
{
    VOS_UINT8                           aucTPDUHead[USIMM_TPDU_HEAD_LEN];
    VOS_UINT8                           aucRsv[3];
    VOS_UINT32                          ulDataLen;
    VOS_UINT8                           *pucData;
}USIMM_TPDU_DATA_STRU;

typedef struct
{
    VOS_UINT32                          ulPathLen;
    VOS_UINT16                          ausPath[USIMM_MAX_PATH_LEN];
}USIMM_FILEPATH_INFO_STRU;

typedef struct
{
    VOS_MSG_HEADER
    VOS_UINT32                      ulMsgName;
    VOS_UINT32                      ulResult;                                   /* ��� */
    VOS_UINT32                      ulErrorCode;
    VOS_UINT32                      ulSessionID;
    VOS_UINT8                       aucTPDUHead[USIMM_TPDU_HEAD_LEN];
    VOS_UINT8                       ucRsv;
    VOS_UINT8                       ucSw1;
    VOS_UINT8                       ucSw2;
    VOS_UINT32                      ulLen;                                      /* �������ݳ���*/
    VOS_UINT8                       aucContent[USIMM_APDU_RSP_MAX_LEN];         /* ������������ */
}PS_USIM_SENDTPDU_CNF_STRU;

typedef struct
{
    VOS_MSG_HEADER
    VOS_UINT32                      ulMsgName;
    VOS_UINT32                      ulResult;
    VOS_UINT32                      ulErrorCode;
    VOS_UINT32                      ulDataLen;
    VOS_UINT8                       aucData[4];
}PS_USIM_BSCHALLENGE_CNF_STRU;

typedef struct
{
    VOS_MSG_HEADER
    VOS_UINT32                      ulMsgName;
    VOS_UINT32                      ulResult;
    VOS_UINT32                      ulErrorCode;
    VOS_UINT8                       aucKey[8];
    VOS_UINT32                      ulVpmLen;
    VOS_UINT8                       aucVpmData[8];
}PS_USIM_GENERATEKEYVPM_CNF_STRU;

typedef struct
{
    USIMM_RUNCAVE_RANDTYPE_ENUM_UINT8   ucRandType;
    VOS_UINT8                           ucDigLen;
    VOS_UINT8                           ucProcessCtrl;
    VOS_UINT8                           aucRand[USIMM_RUNCAVE_RAND_LEN];
    VOS_UINT8                           aucDigits[USIMM_RUNCAVE_DIGLEN];
    VOS_UINT8                           aucEsn[USIMM_ESN_MEID_LEN];
    VOS_UINT8                           aucRsv[3];
}USIMM_RUNCAVE_AUTH_STRU;

typedef union
{
    USIMM_3G_AUTH_STRU                  st3GAuth;
    USIMM_2G_AUTH_STRU                  st2GAuth;
    USIMM_IMS_AUTH_STRU                 stImsAuth;
    USIMM_HTTP_AUTH_STRU                stHttpAuth;
    USIMM_GBA_AUTH_STRU                 stGbaAuth;
    USIMM_NAF_AUTH_STRU                 stNafAuth;
    USIMM_RUNCAVE_AUTH_STRU             stRunCaveAuth;
}USIMM_AUTH_DATA_UNION;

typedef struct
{
    USIMM_AUTH_TYPE_ENUM_UINT32         enAuthType;
    VOS_UINT8                           ucOpId;
    VOS_UINT8                           aucRsv[3];
    union
    {
        USIMM_3G_AUTH_STRU              st3GAuth;
        USIMM_2G_AUTH_STRU              st2GAuth;
        USIMM_IMS_AUTH_STRU             stImsAuth;
        USIMM_HTTP_AUTH_STRU            stHttpAuth;
        USIMM_GBA_AUTH_STRU             stGbaAuth;
        USIMM_NAF_AUTH_STRU             stNafAuth;
        USIMM_RUNCAVE_AUTH_STRU         stRunCaveAuth;
    }unAuthPara;
}USIMM_AUTH_DATA_STRU;

typedef struct
{
    VOS_UINT8       aucAuthBS[USIMM_CDMA_AUTHBS_LEN];
    VOS_UINT8       ucRsv;
}USIMM_CONFIRMSSD_DATA_STRU;

typedef struct
{
    VOS_UINT8       aucRandSSD[USIMM_CDMA_RANDSSD_LEN];
    VOS_UINT8       ucProcessCtrl;
    VOS_UINT8       aucESN[USIMM_ESN_MEID_LEN];
    VOS_UINT8       ucRsv;
}USIMM_UPDATESSD_DATA_STRU;

typedef union
{
    USIMM_CONFIRMSSD_DATA_STRU          stConfirmSSD;
    USIMM_UPDATESSD_DATA_STRU           stUpdateSSD;
}USIMM_MANAGESSD_DATA_UNION;

typedef struct
{
    USIMM_MANAGESSD_TYPE_ENUM_UINT32    enCmdType;
    USIMM_MANAGESSD_DATA_UNION          uSSDData;
}USIMM_MANAGESSD_DATA_STRU;
/*****************************************************************************
7 api����
*****************************************************************************/
/*new API*/
extern VOS_UINT32 USIMM_TerminalResponseReq(VOS_UINT32 ulSenderPid,VOS_UINT8 ucLen,VOS_UINT8 *pucRsp);

extern VOS_UINT32 USIMM_CbpTerminalResponseReq(VOS_UINT32 ulSenderPid,VOS_UINT8 ucLen,VOS_UINT8 *pucRsp);

extern VOS_UINT32 USIMM_EnvelopeReq(VOS_UINT32 ulSenderPid, VOS_UINT32 ulSendPara, VOS_UINT8 ucLen, VOS_UINT8 *pEnvelope);

extern VOS_UINT32 USIMM_FDNHandleReq(VOS_UINT32 ulSenderPid,USIMM_FBDN_HANDLE_ENUM_UINT32 ucFucEnable,VOS_UINT8 *pucPin2);

extern VOS_UINT32 USIMM_SetFileReq(VOS_UINT32 ulSenderPid, VOS_UINT32 ulSendPara,USIMM_SET_FILE_INFO_STRU *pstSetFileInfo);

extern VOS_UINT32 USIMM_GetFileReq(VOS_UINT32 ulSenderPid, VOS_UINT32 ulSendPara, USIMM_GET_FILE_INFO_STRU *pstGetFileInfo);

extern VOS_UINT32 USIMM_AuthReq(VOS_UINT32 ulSenderPid, USIMM_APP_TYPE_ENUM_UINT32 ulAppType, USIMM_AUTH_DATA_STRU *pstAuth);

extern VOS_UINT32 USIMM_PinReq(VOS_UINT32 ulSenderPid, VOS_UINT8 ucCmdType, VOS_UINT8 ucPINType, VOS_UINT8 *pucOldPIN, VOS_UINT8 *pucNewPIN);

extern VOS_UINT32 USIMM_GenericAccessReq(VOS_UINT32 ulSenderPid, USIMM_U8_LVDATA_STRU *pstData,VOS_UINT32 ulPathLen, VOS_UINT16 *pusPath);

extern VOS_UINT32 USIMM_RestrictedAccessReq(VOS_UINT32 ulSenderPid, VOS_UINT32 ulSendPara, TAF_SIM_RESTRIC_ACCESS_STRU *pstData);

extern VOS_UINT32 USIMM_MaxEFRecordNumReq(VOS_UINT32 ulSenderPid, USIMM_APP_TYPE_ENUM_UINT32 enAppType, VOS_UINT16 usEFid);

extern VOS_UINT32 USIMM_StatusReq (VOS_UINT32 ulSenderPid,USIMM_POLL_FCP_ENUM_UINT32 enNeedFcp);

extern VOS_UINT32 USIMM_ResetReq(
    VOS_UINT32                          ulSenderPid,
    USIMM_STK_COMMAND_DETAILS_STRU     *pstCMDDetail,
    USIMM_RESET_INFO_STRU              *pstRstInfo);

extern VOS_UINT32 USIMM_IsServiceAvailable(UICC_SERVICES_TYPE_ENUM_UINT32 enService);

extern VOS_BOOL USIMM_IsTestCard(VOS_VOID);

extern VOS_UINT32 USIMM_GetPinStatus(VOS_UINT8 *pucType,VOS_UINT8 * pucBeEnable,VOS_UINT8 * pucBeNeed,VOS_UINT8 * pucNum);

extern VOS_VOID USIMM_SCICardOutNotify(VOS_UINT ulCardInOutStatus);

extern VOS_UINT32 USIMM_GetCardType(VOS_UINT8 *pucCardStatus, VOS_UINT8 *pucCardType);

extern VOS_UINT32 USIMM_GetCardIMSI(VOS_UINT8 *pucImsi);

extern VOS_UINT32 USIMM_GetPinRemainTime(USIMM_PIN_REMAIN_STRU *pstRemainTime);

extern VOS_UINT32 USIMM_SetSPBFileReq(VOS_UINT32 ulSenderPid,USIMM_SPB_API_STRU *pstSPBReq);

extern VOS_VOID USIMM_BdnQuery(VOS_UINT32 *pulState);

extern VOS_VOID USIMM_FdnQuery(VOS_UINT32 *pulState);

extern VOS_UINT32 USIMM_DeactiveCardReq(VOS_UINT32 ulSenderPid);

extern VOS_UINT32 USIMM_ActiveCardReq(VOS_UINT32 ulSenderPid);

extern VOS_UINT32 USIMM_ProtectResetReq(VOS_UINT32 ulSenderPid);

extern VOS_UINT32  USIMM_SearchReq(VOS_UINT32 ulSenderPid, USIMM_APP_TYPE_ENUM_UINT32 enAppType,USIMM_U8_LVDATA_STRU *pstData, VOS_UINT16 usFileId);

extern VOS_UINT32 USIMM_PCSCCmdReq(VOS_UINT32 ulCmdType, VOS_UINT8 *pucAPDU, VOS_UINT32 ulAPDULen);

extern VOS_UINT32 USIMM_GetCachedFile(VOS_UINT16 usFileID, VOS_UINT32 *pulDataLen, VOS_UINT8 **ppucData, USIMM_APP_TYPE_ENUM_UINT32 enAppType);

extern VOS_UINT32 USIMM_IsdbAccessReq(VOS_UINT32 ulSenderPid, VOS_UINT16 usLen, VOS_UINT8 *pucCommand);

extern VOS_UINT32 USIMM_OpenChannelReq(VOS_UINT32 ulSenderPid, VOS_UINT32 ulAIDLen, VOS_UINT8 *pucADFName);

extern VOS_UINT32 USIMM_CloseChannelReq(VOS_UINT32 ulSenderPid, VOS_UINT32 ulSessionID);

extern VOS_UINT32 USIMM_AccessChannelReq(VOS_UINT32 ulSenderPid, VOS_UINT32 ulSessionID, VOS_UINT32 ulDataLen, VOS_UINT8 *pucData);

extern VOS_UINT32 USIMM_SendTPDUReq(VOS_UINT32 ulSenderPid, VOS_UINT32 ulSessionID, USIMM_FILEPATH_INFO_STRU *pstFilePath, USIMM_TPDU_DATA_STRU *pstTPDU);

extern VOS_BOOL USIMM_VsimIsActive(VOS_VOID);

extern VOS_UINT32 USIMM_GetCardCGType(VOS_UINT8 *pucCardMode, VOS_UINT8 *pucHasCModule, VOS_UINT8 *pucHasWGModule);

/*****************************************************************************
�� �� ��  :USIMM_GetAid
��������  :��ȡAID����
�������  :ulAidType:AID����
�������  :pulLen:���ص����ݳ���
           pucAid:AID������
�� �� ֵ  :USIMM_API_SUCCESS:�ɹ�������ʧ��

�޶���¼  :
1.��    ��  : 2013��12��19��
  ��    ��  : h59254
  �޸�����  : Create
*****************************************************************************/
extern VOS_UINT32 USIMM_GetAid(VOS_UINT32 ulAidType, VOS_UINT32 *pulLen, VOS_UINT8 *pucAid);
extern VOS_VOID USIMM_SessionIdToChanNum(VOS_UINT32 ulSessionId, VOS_UINT32 *pulChanNum);
extern VOS_VOID USIMM_ChanNumToSessionId(VOS_UINT32 ulChanNum, VOS_UINT32 *pulSessionId);
extern VOS_UINT32 USIMM_GetUiccChanNumByAid(VOS_UINT8 *pucAid, VOS_UINT32 ulAIDLen, VOS_UINT8 *pucChanNum);

#if (FEATURE_VSIM == FEATURE_ON)
extern FILE *USIMM_File_Open(VOS_CHAR *pcFileName, VOS_CHAR *pcAccessMode);
extern VOS_INT32 USIMM_File_Close(FILE *Fp);
extern VOS_INT32 USIMM_File_Write(VOS_VOID *pBuf,VOS_UINT32 ulSize,VOS_UINT32 ulCount,FILE *Fp);
extern VOS_INT32 USIMM_File_Seek( FILE *Fp,VOS_INT32 lOffset,VOS_INT32 lWhence);
extern VOS_INT32 USIMM_File_Tell(FILE *Fp);
extern VOS_INT32 USIMM_File_Read(VOS_VOID *pBuf,VOS_UINT32 ulSize,VOS_UINT32 ulCount,FILE *Fp);
extern VOS_INT32 USIMM_File_Rename(VOS_CHAR *pcOldFileName,VOS_CHAR *pcNewFileName);
extern VOS_INT32 USIMM_OpenDir(VOS_CHAR *pcDirName);
extern VOS_INT32 USIMM_Mkdir(VOS_CHAR *pcDirName);
#endif

/*������ӿڵ����� */
/*****************************************************************************
�� �� ��  :USIMM_IsSvlte
��������  :�жϵ�������ӿ��Ƿ���SVLTE��
�������  :��
�������  :��
�޶���¼  :
1. ��    ��   : 2013��5��27��
   ��    ��   : h59254
   �޸�����   : Creat
*****************************************************************************/
extern VOS_UINT32 USIMM_IsSvlte(VOS_VOID);

/*****************************************************************************
�� �� ��  :USIMM_SetFileReq_Instance
��������  :�����ļ�������
�������  :enModemID:Modem ID
           ulSenderPid:������ID
           ulSendPara:���Ͳ���
           pstSetFileInfo:д���ļ���Ϣ
�������  :��
����ֵ    :USIMM_API_RESULT_ENUM����
�޶���¼  :
1. ��    ��   : 2013��5��27��
   ��    ��   : h59254
   �޸�����   : Creat
*****************************************************************************/
extern VOS_UINT32 USIMM_SetFileReq_Instance(
    MODEM_ID_ENUM_UINT16                enModemID,
    VOS_UINT32                          ulSenderPid,
    VOS_UINT32                          ulSendPara,
    USIMM_SET_FILE_INFO_STRU           *pstSetFileInfo);


/*****************************************************************************
�� �� ��  :USIMM_GetFileReq_Instance
��������  :��ȡ�ļ�������
�������  :enModemID:Modem ID
           ulSenderPid:������ID
           ulSendPara:���Ͳ���
           pstGetFileInfo:��ȡ�ļ���Ϣ
�������  :��
����ֵ    :USIMM_API_RESULT_ENUM����
�޶���¼  :
1. ��    ��   : 2013��5��27��
   ��    ��   : h59254
   �޸�����   : Creat
*****************************************************************************/
extern VOS_UINT32 USIMM_GetFileReq_Instance(
    MODEM_ID_ENUM_UINT16                enModemID,
    VOS_UINT32                          ulSenderPid,
    VOS_UINT32                          ulSendPara,
    USIMM_GET_FILE_INFO_STRU           *pstGetFileInfo);

/*****************************************************************************
�� �� ��  :USIMM_AuthReq_Instance
��������  :�����ļ�������
�������  :enModemID:Modem ID
           ulSenderPid:������ID
           ulAppType:Ӧ������
           pstAuth:��Ȩ����
�������  :��
����ֵ    :USIMM_API_RESULT_ENUM����
�޶���¼  :
1. ��    ��   : 2013��5��27��
   ��    ��   : h59254
   �޸�����   : Creat
*****************************************************************************/
extern VOS_UINT32 USIMM_AuthReq_Instance(
    MODEM_ID_ENUM_UINT16                enModemID,
    VOS_UINT32                          ulSenderPid,
    USIMM_APP_TYPE_ENUM_UINT32          enAppType,
    USIMM_AUTH_DATA_STRU               *pstAuth);

/*****************************************************************************
�� �� ��  :USIMM_PinReq
��������  :PIN������
�������  :enModemID:Modem ID
           ucClientId:������ID
           ucCmdType:��������
           ucPINType:PIN����
           pucOldPIN:PIN������
           pucNewPIN:��PIN������
�������  :��
����ֵ    :USIMM_API_RESULT_ENUM����
�޶���¼  :
1. ��    ��   : 2013��5��27��
   ��    ��   : h59254
   �޸�����   : Creat
*****************************************************************************/
extern VOS_UINT32 USIMM_PinReq_Instance(
    MODEM_ID_ENUM_UINT16                enModemID,
    VOS_UINT32                          ulSenderPid,
    VOS_UINT8                           ucCmdType,
    VOS_UINT8                           ucPINType,
    VOS_UINT8                          *pucOldPIN,
    VOS_UINT8                          *pucNewPIN);

/*****************************************************************************
�� �� ��  :USIMM_MaxEFRecordNumReq_Instance
��������  :��ȡ�ļ�����¼����
�������  :enModemID:Modem ID
           ulSenderPid:������ID
           enAppType:Ӧ������
           usEfId:�ļ�ID
�������  :��
����ֵ    :USIMM_API_RESULT_ENUM����
�޶���¼  :
1. ��    ��   : 2013��5��27��
   ��    ��   : h59254
   �޸�����   : Creat
*****************************************************************************/
extern VOS_UINT32 USIMM_MaxEFRecordNumReq_Instance(
    MODEM_ID_ENUM_UINT16                enModemID,
    VOS_UINT32                          ulSenderPid,
    USIMM_APP_TYPE_ENUM_UINT32          enAppType,
    VOS_UINT16                          usEFid);

/*****************************************************************************
�� �� ��  :USIMM_IsServiceAvailable_Instance
��������  :��ȡ������״̬��
�������  :enModemID:Modem ID
           enService:����ID
�������  :��
�� �� ֵ  :PS_USIM_SERVICE_NOT_AVAILIABLE
           PS_USIM_SERVICE_NOT_AVAILIABLE
�޶���¼  :
1. ��    ��   : 2013��5��27��
   ��    ��   : h59254
   �޸�����   : Creat
*****************************************************************************/
extern VOS_UINT32 USIMM_IsServiceAvailable_Instance(
    MODEM_ID_ENUM_UINT16                enModemID,
    UICC_SERVICES_TYPE_ENUM_UINT32     enService);

/*****************************************************************************
�� �� ��  :USIMM_IsTestCard
��������  :�жϵ�ǰ�Ƿ��ǲ��Կ�����SIM/USIM���е�PLMN����NV���е�PLMNƥ��ʱ����VOS_TRUE
           �����κ�����¶�����VOS_FALSE�����޿������ٿ�����IMSIδ��ȡ����δ��ʼ����ɵ�
�������  :enModemID:Modem ID
�������  :��
�� �� ֵ  :VOS_TRUE/VOS_FALSE
�޶���¼  :
1. ��    ��   : 2013��5��27��
   ��    ��   : h59254
   �޸�����   : Creat
*****************************************************************************/
extern VOS_BOOL USIMM_IsTestCard_Instance(MODEM_ID_ENUM_UINT16 enModemID);

/*****************************************************************************
�� �� ��  :USIMM_GetPinStatus_Instance
��������  :��ȡPIN��Ϣ��
�������  :ucType:PIN����
           enModemID:Modem ID
�������  : pucBeEnable:  PIN�Ƿ���
            pucBeNeed:PIN�Ƿ���Ҫ
            pucNum:PINʣ�����
�޶���¼  :
1. ��    ��   : 2013��5��27��
   ��    ��   : h59254
   �޸�����   : Creat
*****************************************************************************/
extern VOS_UINT32 USIMM_GetPinStatus_Instance(
    MODEM_ID_ENUM_UINT16                enModemID,
    VOS_UINT8                          *pucType,
    VOS_UINT8                          *pucBeEnable,
    VOS_UINT8                          *pucBeNeed,
    VOS_UINT8                          *pucNum);

/*****************************************************************************
�� �� ��  :USIMM_GetCardType_Instance
��������  :��ȡ�����ͺͿ�����״̬��
�������  :enModemID:Modem ID
�������  :pucCardStatus:������
           pucCardType:��״̬
�� �� ֵ  :USIMM_API_SUCCESS
�޶���¼  :
1. ��    ��   : 2013��5��27��
   ��    ��   : h59254
   �޸�����   : Creat
*****************************************************************************/
extern VOS_UINT32 USIMM_GetCardType_Instance(
    MODEM_ID_ENUM_UINT16                enModemID,
    VOS_UINT8                          *pucCardStatus,
    VOS_UINT8                          *pucCardType);

/*****************************************************************************
�� �� ��  :USIMM_GetCachedFile
��������  :��ȡ������ļ����ݽӿ�
�������  :enModemID:Modem ID
�������  :usFileID:��ȡ���ļ�ID
           pulDataLen:�����ļ������ݳ���
           ppucData:�����ļ����ݵĵ�ַ
           enAppType:Ӧ������
����ֵ    :USIMM_API_RESULT_ENUM����
�޶���¼  :
1. ��    ��   : 2013��5��27��
   ��    ��   : h59254
   �޸�����   : Creat
*****************************************************************************/
extern VOS_UINT32 USIMM_GetCachedFile_Instance(
    MODEM_ID_ENUM_UINT16                enModemID,
    VOS_UINT16                          usFileID,
    VOS_UINT32                         *pulDataLen,
    VOS_UINT8                         **ppucData,
    USIMM_APP_TYPE_ENUM_UINT32          enAppType);


/*****************************************************************************
�� �� ��  :USIMM_GetCardIMSI_Instance
��������  :��ȡIMSI�ӿ�
�������  :enModemID:Modem ID
�������  :pucImsi �洢�ļ�����
����ֵ    :USIMM_API_RESULT_ENUM����
�޶���¼  :
1. ��    ��   : 2013��5��27��
   ��    ��   : h59254
   �޸�����   : Creat
*****************************************************************************/
extern VOS_UINT32 USIMM_GetCardIMSI_Instance(
    MODEM_ID_ENUM_UINT16                enModemID,
    VOS_UINT8                          *pucImsi);

/*****************************************************************************
�� �� ��  : USIMM_GetPinRemainTime_Instance
��������  : ��ȡpin�����ʣ�����
�������  : enModemID:Modem ID
�������  : pin�����ʣ�����
�� �� ֵ  : VOS_UINT32����ʾ����ִ�н��
�޶���¼  :
1. ��    ��   : 2013��5��27��
   ��    ��   : h59254
   �޸�����   : Creat
*****************************************************************************/
extern VOS_UINT32 USIMM_GetPinRemainTime_Instance(
    MODEM_ID_ENUM_UINT16                enModemID,
    USIMM_PIN_REMAIN_STRU              *pstRemainTime);

/*****************************************************************************
�� �� ��  : USIMM_BdnQuery
��������  : BDN״̬��ѯ�ӿ�
�������  : enModemID:Modem ID
�������  : pulState:BDN״̬
�޶���¼  :
1. ��    ��   : 2013��5��27��
   ��    ��   : h59254
   �޸�����   : Creat
*****************************************************************************/
extern VOS_VOID USIMM_BdnQuery_Instance(
    MODEM_ID_ENUM_UINT16                enModemID,
    VOS_UINT32                         *pulState);

/*****************************************************************************
�� �� ��  : USIMM_FdnQuery
��������  : FDN״̬��ѯ�ӿ�
�������  : enModemID:Modem ID
�������  : pulState:FDN״̬
�޶���¼  :
1. ��    ��   : 2013��5��27��
   ��    ��   : h59254
   �޸�����   : Creat
*****************************************************************************/
extern VOS_VOID USIMM_FdnQuery_Instance(
    MODEM_ID_ENUM_UINT16                enModemID,
    VOS_UINT32                         *pulState);

/*****************************************************************************
�� �� ��  :USIMM_VsimIsActive_Instance
��������  :�����ļ�������
�������  :enModemID:Modem ID
�������  :��
����ֵ    :USIMM_API_RESULT_ENUM����
�޶���¼  :
1. ��    ��   : 2013��8��30��
   ��    ��   : h59254
   �޸�����   : Creat
*****************************************************************************/
extern VOS_UINT32 USIMM_VsimIsActive_Instance(MODEM_ID_ENUM_UINT16 enModemID);


#if (FEATURE_UE_MODE_CDMA == FEATURE_ON)
extern VOS_UINT32 USIMM_CdmaAuthReq(VOS_UINT32 ulSenderPID, USIMM_CARDAPP_ENUM_UINT32 enAppType, USIMM_AUTH_DATA_STRU *pstAuthData);

extern VOS_UINT32 USIMM_BSChallengeReq(VOS_UINT32 ulSenderPid, USIMM_U8_LVDATA_STRU *pstData);

extern VOS_UINT32 USIMM_ManageSsdReq(VOS_UINT32 ulSenderPid, USIMM_MANAGESSD_DATA_STRU *pstSSDData);

extern VOS_UINT32 USIMM_GenerateKeyVpmReq(VOS_UINT32 ulSenderPid, VOS_UINT8 ucFirstOctet, VOS_UINT8 ucLastOctet);

extern VOS_UINT32 USIMM_SetCdmaFileReq(VOS_UINT32 ulSenderPid, VOS_UINT32 ulSendPara, USIMM_SET_FILE_INFO_STRU *pstSetFileInfo);

extern VOS_UINT32 USIMM_GetCdmaFileReq(VOS_UINT32 ulSenderPid, VOS_UINT32 ulSendPara, USIMM_GET_FILE_INFO_STRU *pstGetFileInfo);

#endif /*(FEATURE_UE_MODE_CDMA == FEATURE_ON)*/

/**************************************************************************
8 OTHERS����
*****************************************************************************/

#if ((VOS_OS_VER == VOS_WIN32) || (VOS_OS_VER == VOS_NUCLEUS))
#pragma pack()
#else
#pragma pack(0)
#endif


#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif                                                                          /* __cpluscplus                             */

#endif
