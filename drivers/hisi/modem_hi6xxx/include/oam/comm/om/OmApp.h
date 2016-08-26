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

#ifndef _OM_APP_H_
#define _OM_APP_H_

/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/
#include "vos.h"
#include "pslog.h"
#include "om.h"

#ifdef __cplusplus
#if __cplusplus
extern "C"{
#endif
#endif

/*****************************************************************************
  2 �궨��
*****************************************************************************/

#define MNTN_RecordErrorLog(ulErrNo,pBuf,ulLen) \
        MNTN_ErrorLog(__FILE__,THIS_FILE_ID,__LINE__,ulErrNo,pBuf,ulLen)

/*��¼USB���ʹ������Ϣ������ֵ*/
#define USB_SEND_DATA_ERROR_MAX             512
#if (FEATURE_ON == FEATURE_MULTI_FS_PARTITION) /* SFT board*/
#define OM_USB_LOG_FILE                     "/data/modemlog/Exc/OmUSBLog.bin"
#define OM_USB_UNITARY_LOG_FILE             "/modem_log/Exc/OmUSBLog.bin"
#define OM_CONFIG_PATH                      ("/mnvm3:0/SystemCmd.cmf")
#define OM_CONFIG_UNITARY_PATH              ("/modem_log/SystemCmd.cmf")
#else
#define OM_USB_LOG_FILE                     "/yaffs0/Exc/OmUSBLog.bin"
#define OM_USB_UNITARY_LOG_FILE             "/modem_log/Exc/OmUSBLog.bin"
#define OM_CONFIG_PATH                      ("/yaffs0/SystemCmd.cmf")
#define OM_CONFIG_UNITARY_PATH              ("/modem_log/SystemCmd.cmf")
#endif

#define    OAM_MODELE_NAME                  "OAM"

#define    OAM_CCORE_RESET_CBFUN_PRI        (49)

/*****************************************************************************
  3 ö�ٶ���
*****************************************************************************/

enum
{
    OM_ACPU_OK = 0,
    OM_ACPU_PARA_ERR = 100,
    OM_ACPU_ALLOC_FAIL,
    OM_ACPU_SYNC_TIMEOUT,
    OM_ACPU_SEND_FAIL,
    OM_ACPU_CNF_TIMEOUT,
    OM_ACPU_CNF_ERR,
    OM_ACPU_RUN_IRQ
};




enum OM_CPU_STATUS_ENUM
{
    OM_CPU_STATUS_RESET      = 0,       /* CPU��λ */
    OM_CPU_STATUS_OK,                   /* CPU�Ѿ�����OK */
    OM_CPU_STATUS_BUTT
};
typedef VOS_UINT32 OM_CPU_STATUS_ENUM_UINT32;

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


/* ���ڼ�¼VCOM������Ϣ */
typedef struct
{
    VOS_UINT32                          ulVCOMSendSn;
    VOS_UINT32                          ulVCOMSendNum;
    VOS_UINT32                          ulVCOMSendLen;
    VOS_UINT32                          ulVCOMSendErrNum;
    VOS_UINT32                          ulVCOMSendErrLen;

    VOS_UINT32                          ulVCOMRcvSn;
    VOS_UINT32                          ulVCOMRcvNum;
    VOS_UINT32                          ulVCOMRcvLen;
    VOS_UINT32                          ulVCOMRcvErrNum;
    VOS_UINT32                          ulVCOMRcvErrLen;
}OM_VCOM_DEBUG_INFO;

/* ���ڼ�¼VCOM 27������Ϣ */
typedef struct
{
    VOS_UINT32                          ulVCOMHdlcEnNum;
    VOS_UINT32                          ulVCOMHdlcEnFailNum;
    VOS_UINT32                          ulVCOMSendNum;
    VOS_UINT32                          ulVCOMSendLen;
    VOS_UINT32                          ulVCOMSendErrNum;
    VOS_UINT32                          ulVCOMSendErrLen;
}OM_VCOM_CBT_LOG_DEBUG_INFO;

/* ���ڼ�¼Error Log�յ��ͷ��͸�Ap����Ϣ */
typedef struct
{
    VOS_UINT32                          ulFTMRcvNum;
    VOS_UINT32                          ulFTMRcvLen;
    VOS_UINT32                          ulErrLogRcvNum;
    VOS_UINT32                          ulErrLogRcvLen;

    VOS_UINT32                          ulFTMSendNum;
    VOS_UINT32                          ulFTMSendLen;
    VOS_UINT32                          ulErrLogSendNum;
    VOS_UINT32                          ulErrLogSendLen;
}OM_ERR_LOG_DEBUG_INFO;

/* OM�յ�AP��Ҫ��ȫ�ֱ����м�¼���� */
typedef struct
{
    VOS_UINT32                         *pulErrorLogModule;
    VOS_UINT32                         *pulFTMModule;
    VOS_UINT32                          ulErrLogReportSend;/* ��¼Err Log��Ҫ�ϱ���� */
    VOS_UINT32                          ulFTMReportSend;   /* ��¼FTM��Ҫ�ϱ���� */
    VOS_UINT16                          usModemId;
    VOS_UINT8                           aucRsv[6];
}OM_APP_MSG_RECORD_STRU;

typedef struct
{
    VOS_UINT32                          ulResetNum;
    VOS_UINT32                          ulSlice;
}OM_CPU_STATUS_INFO;

/*****************************************************************************
  8 UNION����
*****************************************************************************/


/*****************************************************************************
  9 OTHERS����
*****************************************************************************/


/*****************************************************************************
  10 ��������
*****************************************************************************/
extern VOS_VOID   OM_AcpuAddSNTime(VOS_UINT32 *pulSN, VOS_UINT32 *pulTimeStamp);
extern VOS_UINT32 OM_AcpuEvent(PS_OM_EVENT_IND_STRU *pstEvent);
extern VOS_UINT32 OM_AcpuSendData(OM_RSP_PACKET_STRU *pucMsg, VOS_UINT16 usMsgLen);
extern VOS_VOID   OM_AcpuSendResult(VOS_UINT8 ucFuncType,
                            VOS_UINT32 ulResult, VOS_UINT16 usReturnPrimId);
extern VOS_VOID   OM_AcpuSendContent(VOS_UINT8 ucFuncType,
                             OM_RSP_PACKET_STRU *pstOmToAppMsg, VOS_UINT16 usReturnPrimId);
extern VOS_UINT32 OM_AppGreenChannel(VOS_UINT8 ucFuncType, VOS_UINT16 usPrimId,VOS_UINT8 *pucData, VOS_UINT16 usLen);

extern unsigned int MNTN_ErrorLog(char * cFileName, unsigned int ulFileId, unsigned int ulLine,
                    unsigned int ulErrNo, void *pRecord, unsigned int ulLen);

extern VOS_UINT32 OM_AcpuConnectInfoEventTimerStart(VOS_VOID);

extern VOS_UINT32 OM_Acpu_WriteLogFile(VOS_CHAR * cFileName, void *pRecord, VOS_UINT32 ulLen);

extern VOS_UINT32 OM_AcpuGetLogPath(VOS_CHAR *pucBuf, VOS_CHAR *pucOldPath, VOS_CHAR *pucUnitaryPath);

extern VOS_VOID OM_AcpuInitAuthVariable(VOS_VOID);

#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif

#endif

