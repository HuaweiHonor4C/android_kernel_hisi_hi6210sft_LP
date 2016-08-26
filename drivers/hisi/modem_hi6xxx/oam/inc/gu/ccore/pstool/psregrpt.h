/******************************************************************************
  Copyright    : 2005-2011, Huawei Tech. Co., Ltd.
  File name    : PsRegRpt.h
  Author       :
  Version      : V700R001
  Date         : 2011-3-23
  Description  :
  Function List:
        ---
        ---
        ---
  History      :
  1. Date:2011-3-23
     Author:
     Modification:Create

******************************************************************************/

#ifdef  __cplusplus
  #if  __cplusplus
  extern "C"{
  #endif
#endif


/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/
#include "omrl.h"
#include "product_config.h"

#pragma pack(4)

/*****************************************************************************
  2 �궨��
*****************************************************************************/
#define ID_OM_TRANS_PRIMID                      (0x5001)

#define ID_OM_APP_W_REG_IND                     (0xF501) /*Wģʽ���ϱ��Ĵ������ݵ���Ϣ*/
#define ID_OM_APP_G_REG_IND                     (0xE501) /*Gģʽ���ϱ��Ĵ������ݵ���Ϣ*/
#define ID_APP_OM_REG_ADD_REQ                   (0xF502) /*�Ĵ��������Ϣ��SDT��д��OM͸�� */
#define ID_APP_OM_REG_DEL_REQ                   (0xF503) /*�Ĵ���ɾ����Ϣ��SDT��д��OM͸�� */
#define ID_OM_APP_REG_ADD_CNF                   (0xF504) /*�Ĵ��������Ϣ�ظ���UE��д��OM ͸����PC */
#define ID_OM_APP_REG_DEL_CNF                   (0xF505) /*�Ĵ���ɾ����Ϣ�ظ���UE��д��OM ͸����PC */

#define ID_APP_OM_REG_START_REQ                 (0xFF01) /* ��ʼץ�Ĵ������� */
#define ID_APP_OM_REG_START_CNF                 (0xFF02) /* ץ�Ĵ����ظ� */
#define ID_OM_APP_REG_IND                       (0xFF03) /* �ϱ��Ĵ������ݵ���Ϣ */

#define ID_APP_OM_REG_STOP_REQ                  (0xFF05) /* ֹͣ�Ĵ����ϱ���Ϣ���� */
#define ID_APP_OM_REG_STOP_CNF                  (0xFF06) /* ֹͣ�Ĵ����ϱ���Ϣ�ظ� */

#define ID_APP_OM_REG_DIFF_REQ                  (0xFF07) /* ���ò����ϱ��������� */
#define ID_APP_OM_REG_DIFF_CNF                  (0xFF08) /* ���ò����ϱ������ظ� */

#define PS_REG_RPT_MAX_NUM                      (1024)   /* �Ĵ�������Buffer�������� */
#define PS_REG_RPT_G_MAX_NUM                    (800)    /* �Ĵ�������Buffer�������� */

#define PS_REG_RPT_MAX_BITMAP_LEN               (32)     /* ���BIT MAP���� 1024/32 */

#define PS_REG_RPT_HEAD_NUM                     (1)      /* �Ĵ���CD Buffer��OM��Ϣͷ��ռCD List�ĸ��� */
#define PS_REG_RPT_CFG_MAX_TIME                 (100)    /* �Ĵ�������ʱ������õȴ�ʱ�� */
#define PS_REG_ADDR_STEP                        (4)      /* ����2���Ĵ�����ַ�Ĳ�ֵ */
#define PS_REG_RETRY_MAX_NUM                    (1000)   /* �յ�add/del����ʱ���������Դ��� */
#define PS_REG_ADDR_LEN                         (4)      /* �Ĵ�����ַ���� */

#define PS_REG_RPT_RBUF_NUM                     (0x3+1+1+2) /* ��ΪGģ��֡�ж���4.615ms,10ms����໺��3���Ĵ����ϱ���Ϣ,���ζ���������һ����Ԫ�����ж��Ƿ��������һ��"1",��ֹ�������ϱ� */

#define PS_REG_RPT_FREQ_LEN                     10      /*�ϱ�Ƶ��Ϊ10����*/

#define PS_REG_RPT_BUF_NUM                      (2)     /* �ϱ�����buffer������ƹ���ϱ� */

#define PS_REG_RPT_SEND_FREQUENCY               (3)     /* �ϱ�֡Ƶ:�ۼ���֡�ϱ�һ֡ */

#define PS_REG_RPT_DIFF_NUM                     (300)   /* �����ϱ�������:�ﵽ�ô��������ϱ�һ֡ȫ�� */

#define PS_REG_RPT_DMA_DEST_BUFFER              (PS_REG_RPT_MAX_NUM * sizeof(VOS_UINT32)) /* ����żĴ���ֵĿ��Buffer */

#define PS_REG_RPT_GET_BITMAP_NUM(n)            ((n)>>5) /* �Ĵ���������32 */

/*****************************************************************************
  3 ö�ٶ���
*****************************************************************************/
enum PS_REG_RPT_MODE_ENUM
{
    PS_REG_RPT_MODE_0MS = 0,
    PS_REG_RPT_MODE_TIMER,
    PS_REG_RPT_MODE_G_INT,
    PS_REG_RPT_MODE_G_PLUS_W_INT,
    PS_REG_RPT_MODE_BUTT
};
typedef VOS_UINT8  PS_REG_RPT_MODE_ENUM_UINT8;

#if  ( FEATURE_MULTI_MODEM == FEATURE_ON )
enum PS_REG_SYS_MODE_ENUM
{
    PS_REG_SYS_MODE_WCDMA = 0,
    PS_REG_SYS_MODE_GSM,
    PS_REG_SYS_MODE_GSM1,
    PS_REG_SYS_MODE_BUTT
};
#else
enum PS_REG_SYS_MODE_ENUM
{
    PS_REG_SYS_MODE_WCDMA = 0,
    PS_REG_SYS_MODE_GSM,
    PS_REG_SYS_MODE_BUTT
};
#endif
typedef VOS_UINT32  PS_REG_SYS_MODE_ENUM_UINT32;

enum PS_REG_ERR_CODE_ENUM
{
    PS_REG_OK = 0,                  /* ���óɹ� */
    PS_REG_MODE_ERR,                /* ģʽָʾ���� */
    PS_REG_MODE_NUM_ERR,            /* �����·�ģʽ�������� */
    PS_REG_MSG_LEN_ERR,             /* �����·�������Ϣ���ȴ��� */
    PS_REG_NUM_OVERFLOW,            /* ����Ĵ���������� */
    PS_REG_NUM_ERR,                 /* ����Ĵ�����ַ�������� */
    PS_REG_ALIGN_ERR,               /* �Ĵ�����ַû��4�ֽڶ��� */
    PS_REG_BUSY_ERR,                /* �Ĵ���æ������ʧ�� */
    PS_REG_RPT_NOT_ENABLE,          /* �Ĵ����ϱ�û��ʹ�� */
    PS_REG_RPT_DMA_INIT_FAIL,       /* �Ĵ����ϱ���ʼ��ʧ�� */
    PS_REG_STOP_DAM_FAIL,           /* �Ĵ����ϱ�ֹͣDMAʧ�� */
    PS_REG_STOP_ERR,                /* �Ĵ����ϱ�ֹͣ���� */
    PS_REG_NUM_ZERO,                /* ����Ĵ�������Ϊ0 */
    PS_W_REG_NUM_TOO_LARGE,         /* �Ĵ�������W������� */
    PS_G_REG_NUM_TOO_LARGE,         /* �Ĵ�������G������� */
    PS_G1_REG_NUM_TOO_LARGE,        /* �Ĵ�������G1������� */
    PS_REG_ADDR_NOT_MATCH_MODE,     /* �Ĵ�����ַ��MODE��ƥ�� */
    PS_REG_QUEUE_ERR,               /* �Ĵ�����ַ������� */
    PS_REG_ERR_BUTT
};
typedef VOS_UINT32  PS_REG_ERR_CODE_ENUM_UINT32;

enum PS_REG_MSG_END_TAG_ENUM
{
    PS_REG_MSG_TAG_START = 0,
    PS_REG_MSG_TAG_END,
    PS_REG_MSG_TAG_BUFF_BUTT
};
typedef VOS_UINT16  PS_REG_MSG_TAG_ENUM_UINT16;

enum PS_REG_BUFF_STATE_ENUM
{
    PS_REG_BUFF_STATE_READY = 0,                        /* Buffer���ڿ���״̬ */
    PS_REG_BUFF_STATE_USING,                            /* Buffer��֡�ж�ʱʹ��   */
    PS_REG_BUFF_STATE_CFG,                              /* Buffer����������ʱʹ�� */
    PS_REG_BUFF_STATE_BUTT
};
typedef VOS_UINT32  PS_REG_BUFF_STATE_ENUM_UINT32;

enum PS_REG_DEL_ENUM
{
    PS_REG_DEL_NO_FOUND = 0,                            /* û���ҵ���ͬ�ļĴ�����ַ          */
    PS_REG_DEL_ONE_ITEM,                                /* ɾ��һ���Ĵ�����ַ                */
    PS_REG_DEL_CHG_LEN,                                 /* ɾ��ʱ������ı�Ĵ�����ϢƬ����  */
    PS_REG_DEL_SPLIT_TWO_ITEMS,                         /* ɾ��ʱ����Ҫ�������              */
    PS_REG_DEL_BUTT
};
typedef VOS_UINT32  PS_REG_DEL_ENUM_UINT32;

typedef struct
{
    PS_REG_SYS_MODE_ENUM_UINT32 enSysMode;
    VOS_UINT32                  ulCnt;      /* �ϱ��ļĴ������� */
    VOS_UINT32                  aulRegValue[PS_REG_RPT_MAX_NUM];
} PS_REG_RPT_VALUE_STRU;

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
    VOS_UINT32                      ulRegAddr;          /* ָ����ϢƬbuffer��ʼ��ַ���ֽڶ��� */
    VOS_UINT16                      usMsgLen;           /* ��ϢƬ����ָʾ                     */
    PS_REG_MSG_TAG_ENUM_UINT16      usMsgTag;           /* ��Ϣ��ָ������                     */
} OM_SOCP_CD_LIST_STRU;

typedef struct
{
    VOS_UINT32                  ulCnt;       /* �ϱ��ļĴ������� */
    VOS_UINT32                  aulRegValue[PS_REG_RPT_MAX_NUM];
} PS_REG_RPT_CFG_STRU;


typedef struct
{
    VOS_UINT32                  ulCnt;       /* �ϱ��ļĴ������� */
    VOS_UINT32                  aulRegAddr[PS_REG_RPT_MAX_NUM];
} PS_REG_REQ_ADDR_STRU;

/*===============  PS_REG_RPT_SIMPLE_RPT_MSG  ====================*/
/*======= �˽ṹ�Ǽ�ģʽ�ϱ��Ĵ���ֵ����PS_REG_RPT_MSG�������û�ж�Ӧ�ĵ�ַ����ַ��PC��ά�� =======*/
typedef struct
{
    VOS_OM_HEADER
    VOS_UINT16                  usPrimId;
    VOS_UINT16                  usToolId;
    VOS_MSG_HEADER
    VOS_UINT16                  usMsgName;  /*ĿǰΪ�����ֶ�*/
    VOS_UINT16                  usCnt;      /* �ϱ��ļĴ������� */

}PS_REG_RPT_IND_CONTENT_HEAD;

#define PS_REG_RPT_MAX_FREQUENCY_BUFFER  (sizeof(PS_REG_RPT_IND_CONTENT_HEAD)+(PS_REG_RPT_MAX_BITMAP_LEN*sizeof(VOS_UINT32))+(PS_REG_RPT_MAX_NUM * sizeof(VOS_UINT32)))
typedef struct
{
    OM_APP_HEADER_STRU          stMsgHeader;
    VOS_UINT16                  usPrimId;
    VOS_UINT16                  usToolId;
    VOS_MSG_HEADER
    /* Ϊ����OMͨ��������ֻ�ϱ��Ĵ�����ֵ���Ĵ�����Ӧ�ĵ�ַ����PC��ά�� */
    VOS_UINT8                  aucValue[PS_REG_RPT_MAX_FREQUENCY_BUFFER * PS_REG_RPT_SEND_FREQUENCY];
} PS_REG_RPT_IND_MSG;
typedef struct
{
    VOS_BOOL                bRptEnableStatus;
    VOS_BOOL                bEdma0StartStatus;
    VOS_BOOL                bEdma1StartStatus;
    VOS_UINT32              aulSendCount[PS_REG_SYS_MODE_BUTT];/* ��¼ÿ��ģ�ϱ��Ĵ��� */
    VOS_UINT32              ulSendBufIndex;                    /* ��¼ƹ��buf���� */
    VOS_UINT32              ulDmaDestWriteIndex;               /* ��¼DmaDestд���� */

    VOS_UINT32              aulDmaDestWriteStatus[PS_REG_RPT_BUF_NUM][PS_REG_RPT_SEND_FREQUENCY]; /* Ŀ��bufд��� */
    VOS_UINT32              aulDmaDestWriteSysMode[PS_REG_RPT_BUF_NUM][PS_REG_RPT_SEND_FREQUENCY]; /* Ŀ��buf��ӦдģʽW/G/G1? */
} PS_REG_RPT_CONTROL_STRU;

/* �����߷���͸����Ϣ */
typedef struct
{
    OM_APP_HEADER_STRU  stAppHeader;
    VOS_UINT16          usPrimId;
    VOS_UINT16          usToolId;
    VOS_UINT8           aucPara[4];
}OM_APP_TRANS_CNF_STRU;

typedef struct
{
    VOS_UINT32          ulDmaIdleErrTime;
    VOS_UINT32          ulDmaHeadErrTime;
    VOS_UINT32          ulDmaStartErrTime;
    VOS_UINT32          ulDmaSuccTime;
    VOS_UINT32          ulDmaIsrTime;
    VOS_UINT32          ulDmaIsrSuccTime;
    VOS_UINT32          ulDmaIsrErrTime;
    VOS_UINT32          ulDmaTaskTime;
    VOS_UINT32          ulDmaIntState;
    VOS_UINT32          ulMemDmaStartTime;
    VOS_UINT32          ulMemDmaIsrTime;

    VOS_UINT32          ulDmaDestIdleErrTime;
    VOS_UINT32          ulDmaDestBusyErrTime;
    VOS_UINT32          ulChan1ArgErrTime;
    VOS_UINT32          ulModemErrTime;

}DMAREG_INFO_STRU;

typedef struct
{
    VOS_UINT32          ulStartSlice;
    VOS_UINT32          ulDmaStartTime;
    VOS_UINT32          ulSmVTime;
    VOS_UINT32          ulSmVPTime;
    VOS_UINT32          ulSmVMaxTime;
    VOS_UINT32          ulSmPMaxTime;
    VOS_UINT32          ulIsrMaxTime;
    VOS_UINT32          ulMemcpyMaxTime;
    VOS_UINT32          ulSocpMaxTime;
    VOS_UINT32          ulMaxTime;
}DMA_REG_TIME_STRU;
/*===============  OM_REG_RPT_STOP_STRU  ====================*/
/*======= �˽ṹ����Ϊֹͣ���мĴ����ϱ���ԭ������ =======*/

typedef struct
{
    VOS_MSG_HEADER
    VOS_UINT16                      usMsgId;
    VOS_UINT16                      usToolsId;
    VOS_UINT32                      ulSysModeNum;
    VOS_UINT32                      ulValueLenth;
    VOS_UINT8                       aucValue[4];
}APP_OM_REG_START_REQ_STRU;


typedef struct
{
    VOS_UINT32                      ulLenth;
    PS_REG_SYS_MODE_ENUM_UINT32     enSysMode;
    VOS_UINT32                      ulRegNum;      /*�Ĵ�������*/
    VOS_UINT32                      aulRegAddr[1];
}APP_OM_REG_START_MODE_STRU;
typedef struct
{
    PS_REG_SYS_MODE_ENUM_UINT32     enSysMode;
    VOS_UINT32                      ulRegNum;
    VOS_UINT8                       aucAddr[4];
}OM_APP_REG_MODE_NUM_STRU;


typedef struct
{
    VOS_UINT32                      ulErrCode;
    VOS_UINT32                      ulSysModeNum;
    VOS_UINT8                       aucAddr[4];
}OM_APP_REG_START_CNF_STRU;

typedef struct
{
    VOS_MSG_HEADER
    VOS_UINT16                      usMsgId;
    VOS_UINT16                      usToolsId;
    PS_REG_SYS_MODE_ENUM_UINT32     enSysMode;
}OM_REG_RPT_STOP_STRU;

typedef struct
{
    VOS_MSG_HEADER
    VOS_UINT16                      usMsgId;
    VOS_UINT16                      usToolsId;
    VOS_UINT32                      ulRptDiffNum;
}OM_REG_RPT_DIFF_STRU;

typedef struct
{
    OM_APP_MSG_SEG_EX_STRU          stOMSocpHeader; /* SOCPͷ��Ϣ */

    OM_APP_HEADER_STRU              stAppHeader;
    VOS_UINT16                      usPrimId;
    VOS_UINT16                      usToolId;
    VOS_MSG_HEADER
    VOS_UINT16                      usMsgName;  /*ĿǰΪ�����ֶ�*/
    VOS_UINT16                      usTick;
    VOS_UINT16                      usFreq;     /* �ϱ�Ƶ�ʣ���10msΪ��λ ��ĿǰΪ�����ֶ�*/
    PS_REG_RPT_MODE_ENUM_UINT8      enRptMode;  /* �ϱ�ģʽ: ֡�жϣ���ʱ���ϱ� ��ĿǰΪ�����ֶ�*/
    VOS_UINT8                       ucRsv;
    VOS_UINT32                      ulFN;       /* ��Wģ��ʾCFN(ֻ��8bit)����Gģ��ʾFN(��32λ) ��ĿǰΪ�����ֶ�*/
    VOS_UINT16                      usSfn;      /* Wģ��ʾSFN, Gģ��ʹ�� ��ĿǰΪ�����ֶ�*/
    VOS_UINT16                      usCnt;      /* �ϱ��ļĴ������� */
} PS_REG_OM_HEADER_MSG;

/*****************************************************************************
  8 UNION����
*****************************************************************************/


/*****************************************************************************
  9 OTHERS����
*****************************************************************************/
extern PS_REG_RPT_CFG_STRU     g_astPsRegRptCfg[PS_REG_SYS_MODE_BUTT];

extern PS_REG_RPT_VALUE_STRU   g_astPsRegRptBuf[PS_REG_RPT_RBUF_NUM];

extern VOS_UINT32              g_ulPsReg;
/*****************************************************************************
  10 ��������
*****************************************************************************/

extern VOS_UINT32 PsRegNumberGet(PS_REG_SYS_MODE_ENUM_UINT32 enSysMode);
extern VOS_UINT32 PsRegSysModeGet(VOS_UINT32 ulSendBufIndex, VOS_UINT32 ulSendFrequency);
extern VOS_VOID PsRegCapture(VOS_UINT32 ulSysMode);
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

