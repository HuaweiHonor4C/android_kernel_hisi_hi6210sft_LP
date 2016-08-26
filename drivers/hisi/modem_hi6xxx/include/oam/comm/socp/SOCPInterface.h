/******************************************************************************

                  ��Ȩ���� (C), 2001-2011, ��Ϊ�������޹�˾

 ******************************************************************************
  �� �� ��      : SOCPInterface.h
  �� �� ��      : ����
  ��    ��      : zhuli
  ��������      : 2012��8��3��
  ����޸�      :
  ��������      : ��ͷ�ļ�ΪSOCP API��ͷ�ļ�����Ҫ�ṩ���ⲿ����ʹ��
  �����б�      :
  �޸���ʷ      :
  1.��    ��    : 2012��8��3��
    ��    ��    : zhuli
    �޸�����    : �����ļ�

******************************************************************************/
#ifndef _SOCP_INTERFACE_H_
#define _SOCP_INTERFACE_H_

/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/
#include "product_config.h"

#if (FEATURE_SOCP_SYNC_ENABLE == FEATURE_ON)
#include "mdrv.h"
#include "vos.h"

#ifdef __cplusplus
#if __cplusplus
extern "C"{
#endif
#endif


/**************************************************************************
  2 �궨��
**************************************************************************/
#define SOCP_CODER_SRC_CHAN                 0x00
#define SOCP_CODER_DEST_CHAN                0x01
#define SOCP_DECODER_SRC_CHAN               0x02
#define SOCP_DECODER_DEST_CHAN              0x03

#define SOCP_CHAN_DEF(chan_type, chan_id)   ((chan_type<<16)|chan_id)
#define SOCP_REAL_CHAN_ID(unique_chan_id)   (unique_chan_id & 0xFFFF)
#define SOCP_REAL_CHAN_TYPE(unique_chan_id) (unique_chan_id>>16)

/**************************************************************************
  3 ö�ٶ���
**************************************************************************/
#if ((FEATURE_ON == FEATURE_SOCP_CHANNEL_REDUCE)&&(VOS_OS_VER != VOS_WIN32))
/*����Դͨ��IDö�ٶ���*/
enum SOCP_CODER_SRC_ENUM
{
    SOCP_CODER_SRC_GU_CNF1      = SOCP_CHAN_DEF(SOCP_CODER_SRC_CHAN,0),  /* GU OM�����Ϣ */
    SOCP_CODER_SRC_GU_CNF2      = SOCP_CHAN_DEF(SOCP_CODER_SRC_CHAN,1),  /* GU OM�����Ϣ */
    SOCP_CODER_SRC_GUBBP1       = SOCP_CHAN_DEF(SOCP_CODER_SRC_CHAN,2), /* GUBBP�����Ϣ */
    SOCP_CODER_SRC_GUBBP2       = SOCP_CHAN_DEF(SOCP_CODER_SRC_CHAN,3), /* GUBBP�����Ϣ */
    SOCP_CODER_SRC_GUDSP1       = SOCP_CHAN_DEF(SOCP_CODER_SRC_CHAN,4), /* GUDSP�����Ϣ */
    SOCP_CODER_SRC_GUDSP2       = SOCP_CHAN_DEF(SOCP_CODER_SRC_CHAN,5), /* GUDSP�����Ϣ */
    SOCP_CODER_SRC_GU_IND1      = SOCP_CHAN_DEF(SOCP_CODER_SRC_CHAN,6), /* ý�������Ϣ */
    SOCP_CODER_SRC_GU_IND2      = SOCP_CHAN_DEF(SOCP_CODER_SRC_CHAN,7), /* ý�������Ϣ */
    SOCP_CODER_SRC_BUTT
};
#else
/*����Դͨ��IDö�ٶ���*/
enum SOCP_CODER_SRC_ENUM
{
    SOCP_CODER_SRC_LOM_CNF1     = SOCP_CHAN_DEF(SOCP_CODER_SRC_CHAN,0),  /* LTE OM������Ӧ(A��) */
    SOCP_CODER_SRC_HDLCAT_CNF   = SOCP_CHAN_DEF(SOCP_CODER_SRC_CHAN,1),  /* HDLC��ʽAT������Ӧ(A��) */
    SOCP_CODER_SRC_LOM_IND1     = SOCP_CHAN_DEF(SOCP_CODER_SRC_CHAN,2),  /* LTE OM�����Ϣ(A��) */
    SOCP_CODER_SRC_GU_CNF1      = SOCP_CHAN_DEF(SOCP_CODER_SRC_CHAN,3),  /* GU OM������Ӧ(A��) */
    SOCP_CODER_SRC_LOM_IND2     = SOCP_CHAN_DEF(SOCP_CODER_SRC_CHAN,4),  /* LTE OM�����Ϣ����(C��) */
    SOCP_CODER_SRC_LOM_IND3     = SOCP_CHAN_DEF(SOCP_CODER_SRC_CHAN,5),  /* LTE OM�����Ϣ����(C��) */
    SOCP_CODER_SRC_LOM_CNF2     = SOCP_CHAN_DEF(SOCP_CODER_SRC_CHAN,6),  /* LTE OM������Ӧ(C��) */
    SOCP_CODER_SRC_GU_CNF2      = SOCP_CHAN_DEF(SOCP_CODER_SRC_CHAN,7),  /* GU OM������Ӧ(C��) */
    SOCP_CODER_SRC_RFU          = SOCP_CHAN_DEF(SOCP_CODER_SRC_CHAN,8),  /* ���� */
    SOCP_CODER_SRC_HIFI         = SOCP_CHAN_DEF(SOCP_CODER_SRC_CHAN,9),  /* GU HIFI�����Ϣ */
    SOCP_CODER_SRC_GU_IND1      = SOCP_CHAN_DEF(SOCP_CODER_SRC_CHAN,10), /* GU OM�����Ϣ(A��) */
    SOCP_CODER_SRC_GU_IND2      = SOCP_CHAN_DEF(SOCP_CODER_SRC_CHAN,11), /* GU OM�����Ϣ(C��) */
    SOCP_CODER_SRC_MCU1         = SOCP_CHAN_DEF(SOCP_CODER_SRC_CHAN,12), /* MCU�����Ϣ */
    SOCP_CODER_SRC_MCU2         = SOCP_CHAN_DEF(SOCP_CODER_SRC_CHAN,13), /* MCU�����Ϣ */
    SOCP_CODER_SRC_LDSP1        = SOCP_CHAN_DEF(SOCP_CODER_SRC_CHAN,14), /* LDSP�����Ϣ */
    SOCP_CODER_SRC_LDSP2        = SOCP_CHAN_DEF(SOCP_CODER_SRC_CHAN,15), /* LDSP�����Ϣ */
    SOCP_CODER_SRC_LBBP1        = SOCP_CHAN_DEF(SOCP_CODER_SRC_CHAN,16), /* LBBP�����Ϣ */
    SOCP_CODER_SRC_LBBP2        = SOCP_CHAN_DEF(SOCP_CODER_SRC_CHAN,17), /* LBBP�����Ϣ */
    SOCP_CODER_SRC_LBBP3        = SOCP_CHAN_DEF(SOCP_CODER_SRC_CHAN,18), /* LBBP�����Ϣ */
    SOCP_CODER_SRC_LBBP4        = SOCP_CHAN_DEF(SOCP_CODER_SRC_CHAN,19), /* LBBP�����Ϣ */
    SOCP_CODER_SRC_LBBP5        = SOCP_CHAN_DEF(SOCP_CODER_SRC_CHAN,20), /* LBBP�����Ϣ */
    SOCP_CODER_SRC_LBBP6        = SOCP_CHAN_DEF(SOCP_CODER_SRC_CHAN,21), /* LBBP�����Ϣ */
    SOCP_CODER_SRC_LBBP7        = SOCP_CHAN_DEF(SOCP_CODER_SRC_CHAN,22), /* LBBP�����Ϣ */
    SOCP_CODER_SRC_LBBP8        = SOCP_CHAN_DEF(SOCP_CODER_SRC_CHAN,23), /* LBBP�����Ϣ */
    SOCP_CODER_SRC_LBBP9        = SOCP_CHAN_DEF(SOCP_CODER_SRC_CHAN,24), /* LBBP�����Ϣ */
    SOCP_CODER_SRC_GUBBP1       = SOCP_CHAN_DEF(SOCP_CODER_SRC_CHAN,25), /* GUBBP�����Ϣ */
    SOCP_CODER_SRC_GUBBP2       = SOCP_CHAN_DEF(SOCP_CODER_SRC_CHAN,26), /* GUBBP�����Ϣ */
    SOCP_CODER_SRC_GUDSP1       = SOCP_CHAN_DEF(SOCP_CODER_SRC_CHAN,27), /* GUDSP�����Ϣ */
    SOCP_CODER_SRC_GUDSP2       = SOCP_CHAN_DEF(SOCP_CODER_SRC_CHAN,28), /* GUDSP�����Ϣ */
    SOCP_CODER_SRC_TDDSP1       = SOCP_CHAN_DEF(SOCP_CODER_SRC_CHAN,29), /* TDDSP�����Ϣ */
    SOCP_CODER_SRC_TDBBP1       = SOCP_CHAN_DEF(SOCP_CODER_SRC_CHAN,30), /* TDBBP�����Ϣ */
    SOCP_CODER_SRC_TDBBP2       = SOCP_CHAN_DEF(SOCP_CODER_SRC_CHAN,31), /* TDBBP�����Ϣ */
    SOCP_CODER_SRC_BUTT
};
#endif
typedef VOS_UINT32 SOCP_CODER_SRC_ENUM_U32;

/*����Դͨ��IDö�ٶ���*/
enum SOCP_DECODER_SRC_ENUM
{
    SOCP_DECODER_SRC_LOM        = SOCP_CHAN_DEF(SOCP_DECODER_SRC_CHAN,0),   /* LTE OM���� */
    SOCP_DECODER_SRC_HDLC_AT    = SOCP_CHAN_DEF(SOCP_DECODER_SRC_CHAN,1),   /* HDLC�������ʽAT���� */
    SOCP_DECODER_SRC_GUOM       = SOCP_CHAN_DEF(SOCP_DECODER_SRC_CHAN,2),   /* GU OM���� */
    SOCP_DECODER_SRC_RFU        = SOCP_CHAN_DEF(SOCP_DECODER_SRC_CHAN,3),   /* ���� */
    SOCP_DECODER_SRC_BUTT
};
typedef VOS_UINT32 SOCP_DECODER_SRC_ENUM_U32;

#if ((FEATURE_ON == FEATURE_SOCP_CHANNEL_REDUCE)&&(VOS_OS_VER != VOS_WIN32))
/*����Ŀ��ͨ��IDö�ٶ���*/
enum SOCP_CODER_DST_ENUM
{
    SOCP_CODER_DST_OM_CNF        = SOCP_CHAN_DEF(SOCP_CODER_DEST_CHAN,0), /* GU OMĿ��ͨ�� */
    SOCP_CODER_DST_OM_IND        = SOCP_CHAN_DEF(SOCP_CODER_DEST_CHAN,1), /* OM�����ϱ���� */
    SOCP_CODER_DST_BUTT
};
#else
/*����Ŀ��ͨ��IDö�ٶ���*/
enum SOCP_CODER_DST_ENUM
{
    SOCP_CODER_DST_OM_CNF        = SOCP_CHAN_DEF(SOCP_CODER_DEST_CHAN,0), /* OM������Ӧ��� */
    SOCP_CODER_DST_OM_IND        = SOCP_CHAN_DEF(SOCP_CODER_DEST_CHAN,1), /* OM�����ϱ���� */
    SOCP_CODER_DST_HDLC_AT       = SOCP_CHAN_DEF(SOCP_CODER_DEST_CHAN,2), /* ��ʽAT������Ӧ���,Ŀǰ��������ʹ�� */
    SOCP_CODER_DST_RFU0          = SOCP_CHAN_DEF(SOCP_CODER_DEST_CHAN,3), /* GU OMĿ��ͨ�� */
    SOCP_CODER_DST_RFU1          = SOCP_CHAN_DEF(SOCP_CODER_DEST_CHAN,4), /* ���� */
    SOCP_CODER_DST_RFU2          = SOCP_CHAN_DEF(SOCP_CODER_DEST_CHAN,5), /* ���� */
    SOCP_CODER_DST_RFU3          = SOCP_CHAN_DEF(SOCP_CODER_DEST_CHAN,6), /* ���� */
    SOCP_CODER_DST_BUTT
};
#endif
typedef VOS_UINT32 SOCP_CODER_DST_ENUM_U32;

/*����Ŀ��ͨ��IDö�ٶ���,������µĽ���Ŀ��ͨ������SOCP_DECODER_DST_RFU֮�����*/
enum SOCP_DECODER_DST_ENUM
{
    SOCP_DECODER_DST_LOM        = SOCP_CHAN_DEF(SOCP_DECODER_DEST_CHAN,0),  /* LTE OM���� */
    SOCP_DECODER_DST_HDLC_AT    = SOCP_CHAN_DEF(SOCP_DECODER_DEST_CHAN,1),  /* HDLC�������ʽAT���� */
    SOCP_DECODER_DST_GUOM       = SOCP_CHAN_DEF(SOCP_DECODER_DEST_CHAN,2),  /* GU OM���� */
    SOCP_DECODER_DST_RFU        = SOCP_CHAN_DEF(SOCP_DECODER_DEST_CHAN,3),  /* ���� */
    SOCP_DECODER_CBT            = SOCP_CHAN_DEF(SOCP_DECODER_DEST_CHAN,16), /* GU CBT */
    SOCP_DECODER_DST_BUTT
};
typedef VOS_UINT32 SOCP_DECODER_DST_ENUM_U32;

/*�����붨��*/
enum SOCP_ERR_ENUM
{
    BSP_ERR_SOCP_BASE           = VOS_OK,
    BSP_ERR_SOCP_NULL,
    BSP_ERR_SOCP_NOT_INIT,
    BSP_ERR_SOCP_MEM_ALLOC,
    BSP_ERR_SOCP_SEM_CREATE,
    BSP_ERR_SOCP_TSK_CREATE,
    BSP_ERR_SOCP_INVALID_CHAN,
    BSP_ERR_SOCP_INVALID_PARA,
    BSP_ERR_SOCP_NO_CHAN,
    BSP_ERR_SOCP_SET_FAIL,
    BSP_ERR_SOCP_TIMEOUT,
    BSP_ERR_SOCP_NOT_8BYTESALIGN,
    BSP_ERR_SOCP_CHAN_RUNNING,
    BSP_ERR_SOCP_CHAN_MODE,
    BSP_ERR_SOCP_DEST_CHAN,
    BSP_ERR_SOCP_DECSRC_SET,
    BSP_ERR_SOCP_BUTT
};

#define SOCP_MAX_ENCSRC_CHN         (SOCP_REAL_CHAN_ID(SOCP_CODER_SRC_BUTT))
#define SOCP_MAX_ENCDST_CHN         (SOCP_REAL_CHAN_ID(SOCP_CODER_DST_BUTT))
#define SOCP_MAX_DECSRC_CHN         (SOCP_REAL_CHAN_ID(SOCP_DECODER_SRC_BUTT))
#define SOCP_MAX_DECDST_CHN         (SOCP_REAL_CHAN_ID(SOCP_DECODER_DST_BUTT))


enum SOCP_BD_TYPE_ENUM
{
    SOCP_BD_DATA            = 0,    /* SOCP BD���ݿռ�ʹ��ʵ������ */
    SOCP_BD_LIST            = 1,    /* SOCP BD���ݿռ�ʹ��ʵ�����ݵ�ָ�� */
    SOCP_BD_BUTT
};
typedef VOS_UINT16 SOCP_BD_TYPE_ENUM_UINT16;

enum SOCP_HDLC_FLAG_ENUM
{
    SOCP_HDLC_ENABLE         = 0,    /* ��ǰHDLC���ܴ� */
    SOCP_HDLC_DISABLE        = 1,    /* ��ǰHDLC���ܹر� */
    SOCP_HDLC_FLAG_BUTT
};

enum SOCP_STATE_ENUM
{
    SOCP_IDLE               = 0,    /* SOCP���ڿ���̬ */
    SOCP_BUSY,                      /* SOCP��æ */
    SOCP_UNKNOWN_BUTT,              /*  δ֪״̬ */
};
typedef VOS_UINT32 SOCP_STATE_ENUM_UIN32;

enum SOCP_EVENT_ENUM
{
    SOCP_EVENT_PKT_HEADER_ERROR         = 0x1,    /* ��ͷ������"HISI" */
    SOCP_EVENT_OUTBUFFER_OVERFLOW       = 0x2,    /* Ŀ��buffer���� */
    SOCP_EVENT_RDBUFFER_OVERFLOW        = 0x4,    /* RDbuffer���� */
    SOCP_EVENT_DECODER_UNDERFLOW        = 0x8,    /* ����Դbuffer���� */
    SOCP_EVENT_PKT_LENGTH_ERROR         = 0x10,   /* ��������ȼ����� */
    SOCP_EVENT_CRC_ERROR                = 0x20,   /* ����CRCУ����� */
    SOCP_EVENT_DATA_TYPE_ERROR          = 0x40,   /* �����������ʹ���*/
    SOCP_EVENT_HDLC_HEADER_ERROR        = 0x80,   /* ����HDLC������ */
    SOCP_EVENT_OUTBUFFER_THRESHOLD_OVERFLOW = 0x100,/* Ŀ��buffer��ֵ���� */
    SOCP_EVENT_BUTT
};
typedef VOS_UINT32 SOCP_EVENT_ENUM_UIN32;

/* ����Դ�����ݽṹģʽ */
enum SOCP_ENCSRC_CHNMODE_ENUM
{
    SOCP_ENCSRC_CHNMODE_CTSPACKET       = 0,    /* �������ݰ����λ����� */
    SOCP_ENCSRC_CHNMODE_FIXPACKET,              /* �̶��������ݰ����λ����� */
    SOCP_ENCSRC_CHNMODE_LIST,                   /* ��ʽ���λ����� */
    SOCP_ENCSRC_CHNMODE_BUTT
};
typedef VOS_UINT32 SOCP_ENCSRC_CHNMODE_ENUM_UIN32;

/* ����Դ�����ݽṹģʽ */
enum SOCP_DECSRC_CHNMODE_ENUM
{
    SOCP_DECSRC_CHNMODE_BYTES        = 0,       /* �����ֽڻ��λ����� */
    SOCP_DECSRC_CHNMODE_LIST,                   /* ��ʽ���λ����� */
    SOCP_DECSRC_CHNMODE_BUTT
};
typedef VOS_UINT32 SOCP_DECSRC_CHNMODE_ENUM_UIN32;

/* ��ʱѡ��ʹ�����ݽṹ�� */
enum SOCP_TIMEOUT_EN_ENUM
{
    SOCP_TIMEOUT_BUFOVF_DISABLE        = 0,       /* buffer��������ϱ��ж� */
    SOCP_TIMEOUT_BUFOVF_ENABLE,                   /* buffer�������ʱ�����ϱ��ж� */
    SOCP_TIMEOUT_TRF,                             /* �����жϳ�ʱ���� */
    SOCP_TIMEOUT_BUTT
};
typedef VOS_UINT32 SOCP_TIMEOUT_EN_ENUM_UIN32;

/* ͬһ���͵�ͨ����ͬ���ȼ�ö��ֵ*/
enum SOCP_CHAN_PRIORITY_ENUM
{
    SOCP_CHAN_PRIORITY_0     = 0,               /* ������ȼ�*/
    SOCP_CHAN_PRIORITY_1,                       /* �ε����ȼ�*/
    SOCP_CHAN_PRIORITY_2,                       /* �θ����ȼ�*/
    SOCP_CHAN_PRIORITY_3,                       /* ������ȼ�*/
    SOCP_CHAN_PRIORITY_BUTT
};
typedef VOS_UINT32 SOCP_CHAN_PRIORITY_ENUM_UIN32;

/* ��������ö��ֵ*/
enum SOCP_DATA_TYPE_ENUM
{
    SOCP_DATA_TYPE_0            = 0,            /* LTE OAM���� */
    SOCP_DATA_TYPE_1,                           /* GU OAM���� */
    SOCP_DATA_TYPE_2,                           /* ���� */
    SOCP_DATA_TYPE_3,                           /* ���� */
    SOCP_DATA_TYPE_BUTT
};
typedef VOS_UINT32 SOCP_DATA_TYPE_ENUM_UIN32;

/* BBP ����ģʽ�����ݶ����򸲸� */
enum SOCP_BBP_DS_MODE_ENUM
{
    SOCP_BBP_DS_MODE_DROP           = 0,        /* ���ݶ��� */
    SOCP_BBP_DS_MODE_OVERRIDE,                  /* ���ݸ��� */
    SOCP_BBP_DS_MODE_BUTT
};
typedef VOS_UINT32 SOCP_BBP_DS_MODE_ENUM_UIN32;

/* ����Դͨ��data type ʹ��λ */
enum SOCP_DATA_TYPE_EN_ENUM
{
    SOCP_DATA_TYPE_EN           = 0,        /* data type ʹ�ܣ�Ĭ��ֵ */
    SOCP_DATA_TYPE_DIS,                     /* data type ��ʹ�� */
    SOCP_DATA_TYPE_EN_BUTT
};
typedef VOS_UINT32 SOCP_DATA_TYPE_EN_ENUM_UIN32;

/* ����Դͨ��debug ʹ��λ */
enum SOCP_ENC_DEBUG_EN_ENUM
{
    SOCP_ENC_DEBUG_DIS          = 0,       /* debug ��ʹ�ܣ�Ĭ��ֵ */
    SOCP_ENC_DEBUG_EN,                     /* debug ʹ�� */
    SOCP_ENC_DEBUG_EN_BUTT
};
typedef VOS_UINT32 SOCP_ENC_DEBUG_EN_ENUM_UIN32;

/* ��������ö��ֵ*/
enum SCM_DATA_TYPE_ENUM
{
    SCM_DATA_TYPE_TL            = 0,            /* LTE OAM���� */
    SCM_DATA_TYPE_GU,                           /* GU OAM���� */
    SCM_DATA_TYPE_BUTT
};
typedef VOS_UINT8 SOCP_DATA_TYPE_ENUM_UIN8;

/**************************************************************************
  3 �ṹ����
**************************************************************************/
/*����SOCPͨ����BD����Ƭ�ṹ*/
typedef struct
{
    VOS_UINT32                      ulDataAddr;     /* ���ݵ�ָ�� */
    VOS_UINT16                      usMsgLen;       /* ���ݳ��� */
    SOCP_BD_TYPE_ENUM_UINT16        enDataType;     /* ʵ���������ͣ�����������ʵ���� */
}SOCP_BD_DATA_STRU;

/*����SOCPͨ����RD����Ƭ�ṹ*/
typedef struct
{
    VOS_UINT32                      ulDataAddr;     /*����ָ��*/
    VOS_UINT16                      usMsgLen;       /*���ݳ���*/
    SOCP_BD_TYPE_ENUM_UINT16        enDataType;     /*ʵ���������ͣ�����������ʵ����*/
}SOCP_RD_DATA_STRU;

/* ����ͨ·�������ýṹ�� */
typedef struct
{
    VOS_UINT32                 u32PktMax;         /*���������ֵ*/
    VOS_UINT32                 u32PktMin;         /*��������Сֵ*/
}SOCP_DEC_PKTLGTH_STRU;


/* ͨ��Դͨ��buffer�ṹ�嶨��*/
typedef struct
{
    VOS_UINT8                 *pucInputStart;      /* ����ͨ����ʼ��ַ*/
    VOS_UINT8                 *pucInputEnd;        /* ����ͨ��������ַ*/
    VOS_UINT8                 *pucRDStart;         /* RD buffer��ʼ��ַ*/
    VOS_UINT8                 *pucRDEnd;           /* RD buffer������ַ*/
    VOS_UINT32                 u32RDThreshold;     /* RD buffer�����ϱ���ֵ*/
    VOS_UINT32                 ulRsv;              /* reserve */
}SOCP_SRC_SETBUF_STRU;

/* ͨ��Ŀ��ͨ��buffer�ṹ�嶨��*/
typedef struct
{
    VOS_UINT8                 *pucOutputStart;     /* ���ͨ����ʼ��ַ*/
    VOS_UINT8                 *pucOutputEnd;       /* ���ͨ��������ַ*/
    VOS_UINT32                 u32Threshold;       /* ���ͨ������ֵ */
    VOS_UINT32                 ulRsv;              /* reserve */
}SOCP_DST_SETBUF_STRU;

/* ����Դͨ���ṹ�嶨��*/
typedef struct
{
    VOS_UINT32                      u32DestChanID;      /* Ŀ��ͨ��ID*/
    VOS_UINT32                      u32BypassEn;        /* ͨ��bypassʹ��*/
    SOCP_DATA_TYPE_ENUM_UIN32       eDataType;          /* �������ͣ�ָ�����ݷ�װЭ�飬���ڸ��ö�ƽ̨*/
    SOCP_DATA_TYPE_EN_ENUM_UIN32    eDataTypeEn;        /* ��������ʹ��λ*/
    SOCP_ENC_DEBUG_EN_ENUM_UIN32    eDebugEn;           /* ����λʹ��*/
    SOCP_ENCSRC_CHNMODE_ENUM_UIN32  eMode;              /* ͨ������ģʽ*/
    SOCP_CHAN_PRIORITY_ENUM_UIN32   ePriority;          /* ͨ�����ȼ�*/
    SOCP_SRC_SETBUF_STRU            sCoderSetSrcBuf;
}SOCP_CODER_SRC_CHAN_S;

/* ����Ŀ�����ýṹ�嶨��*/
typedef struct
{
    VOS_UINT32                 u32EncDstThrh;     /* ����Ŀ��ͨ����ֵ���ޣ��ٲ�ͨ��ʱʹ��*/
    SOCP_DST_SETBUF_STRU       sCoderSetDstBuf;
}SOCP_CODER_DEST_CHAN_S;

/* ����Դͨ���ṹ�嶨��*/
typedef struct
{
    SOCP_DATA_TYPE_EN_ENUM_UIN32    eDataTypeEn;        /* ��������ʹ��λ*/
    SOCP_DECSRC_CHNMODE_ENUM_UIN32  eMode;              /* ͨ��ģʽ*/
    SOCP_SRC_SETBUF_STRU            sDecoderSetSrcBuf;
}SOCP_DECODER_SRC_CHAN_STRU;

/* ����Ŀ��ͨ���ṹ�嶨��*/
typedef struct
{
    VOS_UINT32                 u32SrcChanID;       /* ������Դͨ��ID*/
    SOCP_DATA_TYPE_ENUM_UIN32  eDataType;          /* �������ͣ�ָ�����ݷ�װЭ�飬���ڸ��ö�ƽ̨*/
    SOCP_DST_SETBUF_STRU       sDecoderDstSetBuf;
}SOCP_DECODER_DEST_CHAN_STRU;

/* ͨ��buffer�����ṹ�嶨��*/
typedef struct
{
    VOS_UINT8       *pBuffer;                        /* bufferָ��*/
    VOS_UINT8       *pRbBuffer;                      /* �ؾ�bufferָ��*/
    VOS_UINT32      u32Size;                        /* ����buffer��С*/
    VOS_UINT32      u32RbSize;                      /* �ؾ�buffer��С*/
}SOCP_BUFFER_RW_STRU;

/* ����Դͨ����������ṹ�嶨��*/
typedef struct
{
    VOS_UINT32     u32PktlengthCnt;                /* �������������*/
    VOS_UINT32     u32CrcCnt;                      /* CRCУ��������*/
    VOS_UINT32     u32DataTypeCnt;                 /* �����������ͼ���������*/
    VOS_UINT32     u32HdlcHeaderCnt;               /* 0x7EУ�����*/
}SOCP_DECODER_ERROR_CNT_STRU;

/* ����ͨ·�������ýṹ�� */
typedef struct
{
    VOS_UINT32                 u32RsvIDMin;        /*����Դ����ͨ��ID��Сֵ*/
    VOS_UINT32                 u32RsvIDMax;        /*����Դ����ͨ��ID���ֵ*/
}SOCP_ENCSRC_RSVCHN_SCOPE_STRU;

typedef VOS_UINT32 (*socp_event_cb)(VOS_UINT32 u32ChanID, SOCP_EVENT_ENUM_UIN32 u32Event, VOS_UINT32 u32Param);
typedef VOS_UINT32 (*socp_read_cb)(VOS_UINT32 u32ChanID);
typedef VOS_UINT32 (*socp_rd_cb)(VOS_UINT32 u32ChanID);

#define INNER_LOG_DATA_MAX                   0x40

typedef struct
{
    VOS_UINT32                  ulSlice;
    VOS_UINT32                  ulFileNO;
    VOS_INT32                   lLineNO;
    VOS_UINT32                  ulP1;
    VOS_UINT32                  ulP2;
}INNER_LOG_RECORD_STRU;

typedef struct
{
    VOS_UINT32                  ulCnt;
    INNER_LOG_RECORD_STRU       astLogData[INNER_LOG_DATA_MAX];
}INNER_LOG_DATA_STRU;

/**************************************************************************
  ��������
**************************************************************************/
extern VOS_VOID OM_Inner_Log(const VOS_CHAR *pucStr, VOS_UINT32 ulP1, VOS_UINT32 ulP2,
                          INNER_LOG_DATA_STRU *pstLogData ,VOS_UINT32 ulFileID, VOS_INT32 lLineNo);

#define OM_INNER_LOG( pucStr, ulP1, ulP2, pstLogData )\
    OM_Inner_Log( pucStr, ulP1, ulP2, pstLogData, VOS_FILE_ID, __LINE__ )

/*****************************************************************************
 �� �� ��  : mdrv_socp_corder_set_src_chan
 ��������  : �˽ӿ����ĳһ����Դͨ�������ã����غ���ִ�еĽ����
 �������  : enSrcChanID:SOCP��������Ŀ��ͨ��ID��
             pDestAttr:SOCP������Ŀ��ͨ�������ṹ��ָ�롣
 �������  : �ޡ�
 �� �� ֵ  : MDRV_OK:����Ŀ��ͨ�����óɹ���
             other:����Ŀ��ͨ������ʧ�ܴ����롣
*****************************************************************************/
VOS_UINT32 BSP_SOCP_CoderSetSrcChan(SOCP_CODER_SRC_ENUM_U32 enSrcChanID,SOCP_CODER_SRC_CHAN_S *pSrcAttr);
#define mdrv_socp_corder_set_src_chan(enSrcChanID, pSrcAttr) \
            BSP_SOCP_CoderSetSrcChan(enSrcChanID, pSrcAttr)

/*****************************************************************************
 �� �� ��  : mdrv_socp_coder_set_dest_chan_attr
 ��������  : �˽ӿ����ĳһ����Ŀ��ͨ�������ã����غ���ִ�еĽ����
 �������  : u32DestChanID:SOCP��������Ŀ��ͨ��ID��
             pDestAttr:SOCP������Ŀ��ͨ�������ṹ��ָ�롣
 �������  : �ޡ�
 �� �� ֵ  : SOCP_OK:����Ŀ��ͨ�����óɹ���
             SOCP_ERROR:����Ŀ��ͨ������ʧ�ܡ�
*****************************************************************************/
VOS_UINT32 BSP_SOCP_CoderSetDestChanAttr(VOS_UINT32 u32DestChanID,SOCP_CODER_DEST_CHAN_S *pDestAttr);
#define mdrv_socp_coder_set_dest_chan_attr(u32DestChanID, pDestAttr) \
            BSP_SOCP_CoderSetDestChanAttr(u32DestChanID, pDestAttr)

/*****************************************************************************
 �� �� ��  : BSP_SOCP_Start
 ��������  : �˽ӿ�����Դͨ��������������߽��롣
 �������  : u32SrcChanID:Դͨ��ID��
 �������  : �ޡ�
 �� �� ֵ  : SOCP_OK:�������������ɹ���
             SOCP_ERROR:������������ʧ�ܡ�
*****************************************************************************/
VOS_UINT32 BSP_SOCP_Start(VOS_UINT32 u32SrcChanID);
#define mdrv_socp_start(u32SrcChanID) \
            BSP_SOCP_Start(u32SrcChanID)

/*****************************************************************************
 �� �� ��  : BSP_SOCP_Stop
 ��������  : �˽ӿ�����Դͨ����ֹͣ������߽��롣
 �������  : u32SrcChanID:Դͨ��ID��
 �������  : �ޡ�
 �� �� ֵ  : SOCP_OK:��������ֹͣ�ɹ���
             SOCP_ERROR:��������ֹͣʧ�ܡ�
*****************************************************************************/
VOS_UINT32 BSP_SOCP_Stop(VOS_UINT32 u32SrcChanID);
#define mdrv_socp_stop(u32SrcChanID) \
            BSP_SOCP_Stop(u32SrcChanID)

/*****************************************************************************
 �� �� ��      : BSP_SOCP_GetWriteBuff
 ��������  :�˽ӿ����ڻ�ȡд����buffer��
 �������  : u32SrcChanID:Դͨ��ID
                  pBuff:           :д����buffer

 �������  : �ޡ�
 �� �� ֵ      : SOCP_OK:��ȡд����buffer�ɹ���
                             SOCP_ERROR:��ȡд����bufferʧ��
*****************************************************************************/
VOS_UINT32 BSP_SOCP_GetWriteBuff(VOS_UINT32 u32SrcChanID, SOCP_BUFFER_RW_STRU *pBuff);
#define mdrv_socp_get_write_buff(u32SrcChanID, pBuff) \
            BSP_SOCP_GetWriteBuff( u32SrcChanID, pBuff)

/*****************************************************************************
 �� �� ��      : BSP_SOCP_WriteDone
 ��������  :�ýӿ��������ݵ�д�������ṩд�����ݵĳ��ȡ�
 �������  : u32SrcChanID:Դͨ��ID
                  u32WrtSize:   ��д�����ݵĳ���
 �������  : �ޡ�
 �� �� ֵ      : SOCP_OK:д�����ݳɹ���
                             SOCP_ERROR:д������ʧ��
*****************************************************************************/
VOS_UINT32 BSP_SOCP_WriteDone(VOS_UINT32 u32SrcChanID, VOS_UINT32 u32WrtSize);
#define mdrv_socp_write_done(u32SrcChanID, u32WrtSize) \
            BSP_SOCP_WriteDone(u32SrcChanID, u32WrtSize)

/*****************************************************************************
 �� �� ��      : BSP_SOCP_GetRDBuffer
 ��������  :�ô˽ӿ����ڻ�ȡRD buffer������ָ�롣
 �������  : u32SrcChanID:Դͨ��ID
                  pBuff:  RD buffer
 �������  : �ޡ�
 �� �� ֵ      : SOCP_OK:��ȡRD���λ������ɹ�
                             SOCP_ERROR:��ȡRD���λ�����ʧ��
*****************************************************************************/
VOS_UINT32 BSP_SOCP_GetRDBuffer(VOS_UINT32 u32SrcChanID, SOCP_BUFFER_RW_STRU *pBuff);
#define mdrv_socp_get_rd_buffer(u32SrcChanID, pBuff) \
            BSP_SOCP_GetRDBuffer( u32SrcChanID, pBuff)

/*****************************************************************************
 �� �� ��      : BSP_SOCP_ReadRDDone
 ��������  :�˽ӿ������ϲ�֪ͨSOCP��������RD buffer��ʵ�ʶ�ȡ�����ݡ�
 �������  : u32SrcChanID:Դͨ��ID
                  u32RDSize:  ��RD buffer��ʵ�ʶ�ȡ�����ݳ���
 �������  : �ޡ�
 �� �� ֵ      : SOCP_OK:��ȡRDbuffer�е����ݳɹ�
                             SOCP_ERROR:��ȡRDbuffer�е�����ʧ��
*****************************************************************************/
VOS_UINT32 BSP_SOCP_ReadRDDone(VOS_UINT32 u32SrcChanID, VOS_UINT32 u32RDSize);
#define mdrv_socp_read_rd_done(u32SrcChanID, u32RDSize) \
            BSP_SOCP_ReadRDDone(u32SrcChanID, u32RDSize)

/*****************************************************************************
 �� �� ��      : BSP_SOCP_RegisterReadCB
 ��������  :�ýӿ�����ע������ݵĻص�������
 �������  : u32DestChanID:Ŀ��ͨ��ID
                  ReadCB: �¼��ص�����
 �������  : �ޡ�
 �� �� ֵ      : SOCP_OK:ע������ݻص������ɹ�
                             SOCP_ERROR:ע������ݻص�����ʧ��
*****************************************************************************/
extern VOS_UINT32 BSP_SOCP_RegisterReadCB( VOS_UINT32 u32DestChanID, socp_read_cb ReadCB);

/*****************************************************************************
 �� �� ��      : BSP_SOCP_RegisterReadCB
 ��������  :�ô˽ӿ����ڻ�ȡ�����ݻ�����ָ�롣
 �������  : u32DestChanID:Ŀ��ͨ��ID
                  ReadCB: ������buffer
 �������  : �ޡ�
 �� �� ֵ      : SOCP_OK:��ȡ�����ݻ������ɹ���
                             SOCP_ERROR:��ȡ�����ݻ������ɹ���
*****************************************************************************/
extern VOS_UINT32 BSP_SOCP_GetReadBuff( VOS_UINT32 u32DestChanID,SOCP_BUFFER_RW_STRU *pBuffer);

/*****************************************************************************
 �� �� ��      : BSP_SOCP_ReadDataDone
 ��������  :�ýӿ������ϲ����SOCP��������Ŀ��ͨ���ж��ߵ�ʵ�����ݡ�
 �������  : u32DestChanID:Ŀ��ͨ��ID
                  u32ReadSize: �Ѷ������ݵĳ���
 �������  : �ޡ�
 �� �� ֵ      : SOCP_OK:�����ݳɹ���
                             SOCP_ERROR:������ʧ��
*****************************************************************************/
extern VOS_UINT32 BSP_SOCP_ReadDataDone(VOS_UINT32 u32DestChanID,VOS_UINT32 u32ReadSize);

/*****************************************************************************
 �� �� ��  : SOCP_CleanEncSrcChan
 ��������  :�ýӿ������ϲ����SOCP���������SOCP�ı���Դͨ�������üĴ�����
 �������  : u32SrcChanID:ͨ��ID
 �������  : �ޡ�
 �� �� ֵ  : VOS_OK:�ɹ�
             VOS_ERR:ʧ��
*****************************************************************************/
extern VOS_UINT32 SOCP_CleanEncSrcChan(SOCP_CODER_SRC_ENUM_U32 enSrcChanID);

extern VOS_VOID BSP_SOCP_StartSDLogTimerFail(VOS_VOID);

VOS_UINT32 BSP_SOCP_EncDstBufFlush(VOS_VOID);
#define mdrv_socp_enc_dst_buf_flush() \
            BSP_SOCP_EncDstBufFlush()

VOS_UINT32 BSP_SOCP_GetSDLogCfg(VOS_UINT32 *pulEnable, VOS_UINT32 *pulTimerLen, VOS_UINT32 *pulBufferSize);
#define mdrv_socp_get_sd_logcfg(pulEnable, pulTimerLen, pulBufferSize) \
            BSP_SOCP_GetSDLogCfg(pulEnable, pulTimerLen, pulBufferSize)

VOS_VOID BSP_SOCP_SetLogIntTimeOut(VOS_VOID);
#define mdrv_socp_set_log_int_timeout() \
            BSP_SOCP_SetLogIntTimeOut()

VOS_VOID BSP_SOCP_SetLogIntTimeOutDefautl(VOS_VOID);
#define mdrv_socp_set_log_int_default_timeout() \
            BSP_SOCP_SetLogIntTimeOutDefautl()

extern VOS_VOID BSP_SOCP_GetEncSrcReg(VOS_UINT32 *pulData, VOS_UINT32 ulDataMax);

/* C�˵�����λ��Ŀ����,j00174725 2013-05-02 */
extern VOS_VOID SOCP_Stop1SrcChan(VOS_UINT32 ulSrcChanID);


#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif

#else
#include "mdrv_socp.h"
#include "mdrv_socp_common.h"
#endif

#endif


