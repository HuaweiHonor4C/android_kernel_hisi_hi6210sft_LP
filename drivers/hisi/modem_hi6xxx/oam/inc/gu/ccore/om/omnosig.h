/******************************************************************************

                  ��Ȩ���� (C), 2001-2011, ��Ϊ�������޹�˾

 ******************************************************************************
  �� �� ��   : omnosig.h
  �� �� ��   : ����
  ��    ��   : ����47350
  ��������   : 2011��9��27��

  ����޸�   :
  ��������   : omnosig.c ��ͷ�ļ�
  �����б�   :
  �޸���ʷ   :
  1.��    ��   : 2011��9��27��
    ��    ��   : ����47350
    �޸�����   : �����ļ�

******************************************************************************/

#ifndef __OM_NOSIG_H__
#define __OM_NOSIG_H__

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/

#include "vos.h"
#include "omprivate.h"

#pragma pack(4)

/*****************************************************************************
  2 �궨��
*****************************************************************************/
/*OM<->APP : NON SIGALING Transparent Message.*/
#define APP_OM_NON_SIG_BT_TRAN_REQ      (0x1601)
#define OM_APP_NON_SIG_BT_TRAN_CNF      (0x1602)

/*OM<->APP : Get the WCDMA SYNC Status.*/
#define APP_OM_W_SYNC_STATUS_REQ        (0x1603)
#define OM_APP_W_SYNC_STATUS_CNF        (0x1604)

/*OM<->APP : Get the GMSK/EDGE DownLink Status.*/
#define APP_OM_GE_DL_STATUS_REQ         (0x1605)
#define OM_APP_GE_DL_STATUS_CNF         (0x1606)

/*OM<->APP : Get the EDGE BLER.*/
#define APP_OM_EDGE_BLER_REQ            (0x1607)
#define OM_APP_EDGE_BLER_CNF            (0x1608)

/*OM<->APP : Get the EDGE BLER.*/
#define APP_OM_W_BER_DATA_REQ           (0x1609)
#define OM_APP_W_BER_DATA_CNF           (0x160a)
#define OM_APP_W_BER_DATA_IND           (0x160b)

#define OM_FRAME_NUM_REG_MASKBIT                      (0x7FF)

/* ��ȡ�Ĵ�������ʱ���� */
#define OM_EDGE_BLER_TASK_DELAY         (2000)

/* �ȴ�DSP�ظ��ĳ�ʱ���� */
#define OM_NOSIG_WAIT_TIME_LEN          (5000)

/* ���֡��*/
#define OM_FRAME_MAX_NUM                (2715648)

/*�Ĵ�����λ��Ӧ֡��*/
#define OM_HIHG_ADDR_FRAME_NUM                        (1326)

/*�·���Ϣ��Ӧ����ʱ��*/
#define OM_DL_MSG_FRAME_NUM                           (50)

/*��������������ݳ��ȣ�������32λ����ʾ */
#define OM_R99_MAILBOX_MAX_PHY_DATA_IND_LEN           ((328)*4)

/*���д����ŵ�����*/
#define OM_UL_TRANS_CHANNEL_NUM                       (2)

/*R99 ������������*/
#define OM_R99_DECODE_BUF_INDEX_INIT                  (0x0)
#define OM_R99_DECODE_BUF_INDEX_FIRST                 (0x1)
#define OM_R99_DECODE_BUF_INDEX_SECOND                (0x2)

#define OM_OFFSET_OF(s, m) ((VOS_SIZE_T)&(((s *)0)->m))

#define OM_BER_DATA_MAX_SIZE            (1024)

/*****************************************************************************
  3 ö�ٶ���
*****************************************************************************/
enum OM_W_SNYC_STATUS
{
    OM_W_SYNC_STATUS_SYNC,
    OM_W_SYNC_STATUS_OUT_OF_SYNC,
    OM_W_SYNC_STATUS_UNKNOWN,
    OM_W_SYNC_STATUS_BUTT
};

typedef VOS_UINT32 OM_W_SNYC_STATUS_ENUM_UINT32;

enum OM_GE_DL_MODE
{
    OM_GE_DL_MODE_GSM,
    OM_GE_DL_MODE_EDGE,
    OM_GE_DL_MODE_BUTT
};

typedef VOS_UINT32 OM_GE_DL_MODE_ENUM_UINT32;

enum OM_R99_MAILBOX_MUTEX_ENUM
{
    OM_R99_MAILBOX_MUTEX_DATA_NOT_EXIST             = 0,        /* ��������������ݣ�  ��д�����ɶ�;*/
    OM_R99_MAILBOX_MUTEX_DATA_EXIST                 = 1,        /* ��������������ݣ�����д��  �ɶ�;*/
    OM_R99_MAILBOX_MUTEX_BUTT
};

typedef VOS_UINT16 OM_R99_MAILBOX_MUTEX_ENUM_UINT16;
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
    VOS_UINT16 usEnableReport;  /* �Ƿ�ʹ����Ϣ�ϱ�,0���ϱ���1�ϱ� */
    VOS_UINT16 usRcvMsgPrimId;  /* �ȴ���ϢID */
    VOS_UINT16 usSyncStatus;    /* ����Wͬ��״̬ */
    VOS_UINT8  ucFuncType;      /* Functype */
    VOS_UINT8  ucReserve;       /* ������ */
    VOS_SEM    ulNoSigSyncSem;  /* ���еȴ���Ϣͬ���ź��� */
    VOS_UINT32 ulTotalFrameNum; /* �ϱ���BER��֡�� */
    VOS_UINT32 ulCurFrameNum;   /* �ϱ���BER��ǰ֡�� */
}OM_NOSIG_CTRL_STRU;

typedef struct
{
    VOS_OM_HEADER
    VOS_UINT16             usPrimId;   /*Indicates current msg type.*/
    VOS_UINT16             usToolId;   /*Not used now.*/
    VOS_UINT32             ulFirstErrNum;
    VOS_UINT32             ulFirstTotalNum;
    VOS_UINT32             ulSecondErrNum;
    VOS_UINT32             ulSecondTotalNum;
}OM_EDGE_BLER_STRU;

typedef struct
{
    VOS_OM_HEADER
    VOS_UINT16             usPrimId;    /*Indicates current msg type.*/
    VOS_UINT16             usReverse1;  /*Not used now.*/
    VOS_UINT16             usModeType;  /*1:GSM 2: EDGE*/
    VOS_UINT16             usReverse2;  /*Not used now.*/
}OM_GE_DL_STATUS_REQ_STRU;

typedef struct
{
    VOS_OM_HEADER
    VOS_UINT16             usPrimId;   /*Indicates current msg type.*/
    VOS_UINT16             usToolId;   /*Not used now.*/
    VOS_UINT16             usBerValue[2];
}OM_GE_DL_STATUS_STRU;

typedef struct
{
    VOS_UINT16  usNsMsgType;    /* VOS_FALSE:�·���Ϣ, VOS_TRUE:�ȴ�CNF����IND��Ϣ */
    VOS_UINT16  usNsMsgLen;     /* ��Ϣ�ĳ��� */
    VOS_UINT16  usRcvMsgPrimId; /* ������Ϣ��IDֵ */
    VOS_UINT16  usReserve;      /* ���� */
}OM_NOSIG_MSG_HEAD_STRU;


typedef struct
{
    VOS_OM_HEADER
    VOS_UINT16             usPrimId;   /*Indicates current msg type.*/
    VOS_UINT16             usToolId;   /*Not used now.*/
    VOS_UINT16             usFrameNum;
    VOS_UINT16             usReserve;
}APP_OM_W_BER_DATA_REQ_STRU;

typedef struct
{
    VOS_OM_HEADER
    VOS_UINT16             usPrimId;   /*Indicates current msg type.*/
    VOS_UINT16             usToolId;   /*Not used now.*/
    VOS_UINT32             ulResult;
}APP_OM_W_BER_DATA_CNF_STRU;

typedef struct
{
    VOS_OM_HEADER
    VOS_UINT16             usPrimId;            /*Indicates current msg type.*/
    VOS_UINT16             usToolId;            /*Not used now.*/
    VOS_UINT16             usTotalFrameNum;
    VOS_UINT16             usCurFrameNum;
    VOS_UINT32             ulDataLen;           /* ���ݳ���,��λ:�ֽ�,����ֵ����4��������,��Χ[0..WTTFPHY_MAX_PHY_DATA_REQ_LEN-1] */
    VOS_UINT8              aucData[OM_BER_DATA_MAX_SIZE]; /* �������ݿ� */
}APP_OM_W_BER_DATA_IND_STRU;


/*****************************************************************************
  8 UNION����
*****************************************************************************/


/*****************************************************************************
  9 OTHERS����
*****************************************************************************/


/*****************************************************************************
  10 ��������
*****************************************************************************/
VOS_UINT32 OM_BtTransProc(APP_OM_MSG_EX_STRU *pstAppToOmMsg, VOS_UINT16 usReturnPrimId);
VOS_UINT32 OM_WSyncStatusProc(APP_OM_MSG_EX_STRU *pstAppToOmMsg, VOS_UINT16 usReturnPrimId);
VOS_UINT32 OM_EdgeBlerProc (APP_OM_MSG_EX_STRU *pstAppToOmMsg, VOS_UINT16 usReturnPrimId);
VOS_UINT32 OM_GeDlStatusProc (APP_OM_MSG_EX_STRU *pstAppToOmMsg, VOS_UINT16 usReturnPrimId);
VOS_UINT32 OM_BerConfigProc(APP_OM_MSG_EX_STRU *pstAppToOmMsg, VOS_UINT16 usReturnPrimId);
VOS_VOID   OM_LoopTestProc(VOS_VOID);


#if ((VOS_OS_VER == VOS_WIN32) || (VOS_OS_VER == VOS_NUCLEUS))
#pragma pack()
#else
#pragma pack(0)
#endif


#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif /* end of omnosig.h */

