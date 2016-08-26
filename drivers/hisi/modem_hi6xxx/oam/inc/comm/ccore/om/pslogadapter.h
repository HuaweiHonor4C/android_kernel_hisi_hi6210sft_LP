/******************************************************************************

                ��Ȩ���� (C), 2001-2011, ��Ϊ�������޹�˾

 ******************************************************************************
  �� �� ��   : PsLogAdapter.h
  �� �� ��   : ����
  ��    ��   : ���� 47350
  ��������   : 2008��7��16��
  ����޸�   :
  ��������   : PsLogAdapter��ͷ�ļ�
  �����б�   :
  �޸���ʷ   :
  1.��    ��   : 2008��7��16��
    ��    ��   : ���� 47350
    �޸�����   : �����ļ�

******************************************************************************/
#ifndef __PSLOGOSA_H__
#define __PSLOGOSA_H__

#ifdef __cplusplus
#if __cplusplus
extern "C"{
#endif
#endif /* __cplusplus */

/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/
#include <stdio.h>
#include "pslog.h"
#include "omringbuffer.h"
#include "omnvinterface.h"

#if ((VOS_OS_VER == VOS_VXWORKS) || (VOS_OS_VER == VOS_RTOSCK))
#include "mdrv.h"
#endif

#ifndef _lint

#if (VOS_OS_VER == VOS_VXWORKS)
#include <vxWorks.h>
#include <taskLib.h>
#include <semLib.h>
#include <string.h>
#include <tickLib.h>
#elif (VOS_OS_VER == VOS_WIN32)
#include <Windows.h>
#include <string.h>
#endif

#endif

/*****************************************************************************
  1 ���Ͷ���
*****************************************************************************/

typedef VOS_VOID          (*LOG_PFUN)();

/*****************************************************************************
  2 �궨��
*****************************************************************************/
#define LOG_TRUE                1
#define LOG_FALSE               0

#define LOG_OK                  0
#define LOG_ERR                 1

#define LOG_NULL_PTR            0

/*LOG֧�ֵ�Э��ջ���ģ����Ŀ*/
#define LOG_PS_MODULE_MAX_NUM      (VOS_PID_BUTT - VOS_PID_DOPRAEND)
/*LOG֧�ֵĵ������ģ����Ŀ*/
#define LOG_DRV_MODULE_MAX_NUM   (LOG_MAX_MODULE_ID_DRV- LOG_MIN_MODULE_ID_DRV+1)
/*LOG֧��ģ��ID�����䷶ΧΪ(LOG_MODULE_MIN_ID, LOG_MODULE_MAX_ID]*/
#define LOG_MODULE_MIN_ID       VOS_PID_DOPRAEND
#define LOG_MODULE_MAX_ID       (LOG_MODULE_MIN_ID + LOG_PS_MODULE_MAX_NUM)

#define MAX_ERRLOG_BUF_LEN                  (4096)
#define ERRLOG_BUF_COUNT                    (2)
#define ERRLOG_ENABLE                       (1)
#define ERRLOG_DISABLE                      (0)
#define ERRLOG_WRITE_INTERVAL_DEFAULT_VALUE (3000)
#define ERRLOG_TOTAL_RECORD_TIME            (51840)
#define MNTN_ERRLOR0_ID                     (0)                             /*Errorlog0.bin �ļ�ID*/
#define MNTN_ERRLOR1_ID                     (1)                             /*Errorlog1.bin �ļ�ID*/

/*****************************************************************************
  3 ö�ٶ���
*****************************************************************************/
typedef enum
{
    LOG_FILE_1 = 0,
    LOG_FILE_2,
    LOG_FILE_BUTT
}LOG_NUM_ENUM;

/* LOGд��FLASH����������Ϣ���� */
typedef enum
{
    LOG_OPERATION_OK =0,
    LOG_OPERATION_CREATE_SEM_FAIL,
    LOG_OPERATION_POST_SEM_FAIL,
    LOG_OPERATION_MKDIR_FAIL,
    LOG_OPERATION_OPEN_FILE_FAIL,
    LOG_OPERATION_LSEEK_FILE_FAIL,
    LOG_OPERATION_WRITE_FILE_FAIL,
    LOG_OPERATION_WRITE_PROTECT,
    LOG_OPERATION_LENGTH_TOOBIG,
    LOG_OPERATION_DELETE_SEM_FAIL,
    LOG_OPERATION_ERROR_BUTT
}LOG_OPERATION_ERROR_ENUM;
/*****************************************************************************
  4 STRUCT����
*****************************************************************************/
typedef struct
{
    LOG_MODULE_ID_EN        enModuleId;
    LOG_SUBMOD_ID_EN        enSubModId;
    LOG_LEVEL_EN            enPrintLev;
} LOG_ID_LEVEL_ST;

/*typedef struct
{
    LOG_MODULE_ID_EN        enMinModId;
    LOG_MODULE_ID_EN        enMaxModId;
} LOG_LEVEL_RANGE_ST;*/

typedef struct
{
    VOS_UINT32                  ulPrintSwitch;        /* �Ƿ�������ӡ          */
    VOS_UINT32                  ulLogOutput;          /* ��������ڡ�д��Flash */
    OM_RING_ID                  rngOmRbufId;          /* ���λ���Id            */
    VOS_SEM                     semOmPrint;           /* �����ź���            */
} LOG_ENTITY_ST;
/*ָʾÿһ��ģ���ID�źʹ�ӡ����*/
typedef struct
{
    VOS_UINT32                  ulModuleId;
    LOG_LEVEL_EN                enPrintLev;
}LOG_MODULE_LEVEL_STRU;
/*���߲��������ô�ӡ����Ľṹ*/
typedef struct
{
    VOS_UINT32                  ulModuleNum;
    LOG_MODULE_LEVEL_STRU       astModuleLev[1];
}LOG_ID_LEVEL_STRU;

/*��־�ļ�����Ϣ�ṹ*/
typedef struct
{
    VOS_BOOL                bIsWritten;             /* Log�ļ���д��־ */
    LOG_NUM_ENUM            enLogFileNum;           /* Log�ļ�ƹ���ļ���� */
    VOS_INT                 lFileSize;              /* Log�ļ�ʵ�ʴ�С */
    VOS_INT                 lFileMaxSize;           /* Log�ļ���С���� */
    VOS_SEM                 ulSem;                  /* Log�ļ��ź������� */
    VOS_CHAR                acName[32];             /* Log�ļ�ƹ���ļ��� */
}LOG_FILE_INFO_STRU;

/*****************************************************************************
  10 ��������
*****************************************************************************/
extern LOG_ENTITY_ST  g_stLogEnt;


extern VOS_INT32 Log_BufInput(VOS_CHAR *pcLogStr, VOS_UINT32 ulLen);
extern VOS_INT32 Log_GetPathOffset(VOS_CHAR* pcFileName);
extern VOS_UINT32 Log_GetTableIndex(LOG_MODULE_ID_EN enModuleId, LOG_SUBMOD_ID_EN enSubModId);
extern VOS_VOID Log_Output(VOS_UINT32 ulOutputType, VOS_CHAR *pcStr, VOS_UINT32 ulLen);
extern VOS_VOID Log_Init(VOS_VOID);
extern VOS_VOID Log_SelfTask(VOS_UINT32 ulPara1, VOS_UINT32 ulPara2,
                         VOS_UINT32 ulPara3, VOS_UINT32 ulPara4);
extern VOS_UINT32 Log_CheckPara(LOG_ID_LEVEL_STRU *pstLogIdLevel, VOS_UINT32 ulLength);

/* BBIT�汾ʹ�õ��ڲ����� */
#ifdef __LOG_BBIT__
extern VOS_VOID Log_BuildStr(VOS_CHAR          *pcFileName,  VOS_UINT32  ulLineNum,
                         LOG_LEVEL_EN   enPrintLev,  VOS_CHAR          *pcOriStr,
                         VOS_UINT8  ucParaCnt,   VOS_INT32          *plPara,
                         VOS_CHAR          *pcDstStr,    VOS_UINT32 *pulLen);
extern int Log_StrNParam(VOS_CHAR             *cFileName,  VOS_UINT32      ulLineNum,
                    LOG_MODULE_ID_EN  enModuleId, LOG_SUBMOD_ID_EN   enSubModId,
                    LOG_LEVEL_EN      enLevel,    VOS_CHAR              *pcOriStr,
                    VOS_UINT8     ucParaCnt,  VOS_INT32              *plPara);
#endif

/* Release�汾ʹ�õ��ڲ����� */
#ifdef __LOG_RELEASE__
extern VOS_VOID Log_BuildId(VOS_UINT32  ulLogId, VOS_UINT8  ucParaCnt, VOS_INT32 *plPara,
                           VOS_CHAR          *pcDst,   VOS_UINT32 *pulLen);
extern int Log_IdNParam(LOG_MODULE_ID_EN enModuleId, LOG_SUBMOD_ID_EN  enSubModId,
                      LOG_LEVEL_EN     enLevel,    VOS_UINT32     ulLogId,
                      VOS_UINT8    ucParaCnt,  VOS_INT32             *plPara);
#endif

VOS_UINT32 LOG_RegisterDrv(LOG_PFUN fptr, LOG_PFUN fptr1, LOG_PFUN fptr2,
                                 LOG_PFUN fptr3, LOG_PFUN fptr4);

typedef struct
{
    OM_ERRORLOG_ENABLE_FLAG_STRU    stEnableFlag;                                   /*errlog�Ƿ�ʹ��*/
    VOS_UINT8                       ucFileId;                                       /*��ǰд����ļ�ID, �ļ�0���ļ�1�����л�*/
    VOS_UINT8                       ucInitSucc ;                                    /*�Ƿ��ʼ���ɹ�*/
    OM_ERRORLOG_FLUSHBUFINTER_STRU  stFlushInterval;                                /*flashˢд���*/
    OM_ERRORLOG_RECORDPERIOD_STRU   stRecordPeriod;             /*errlog�ܵļ�¼ʱ��*/
    VOS_UINT32                      ulLastTick;                                     /*��һ��дFile��tickֵ*/
    VOS_CHAR                        acbuf[ERRLOG_BUF_COUNT][MAX_ERRLOG_BUF_LEN];    /*�����¼�Ļ�����*/
    VOS_UINT32                      aulRecordLen[ERRLOG_BUF_COUNT];                 /*��ǰbuf�ĳ���*/
    VOS_UINT8                       ucBufId ;                                       /*��ǰʹ��buf��id*/
    VOS_UINT8                       aucReserve[3];
    VOS_SEM                         semErrlog;                                      /*buf�����Ļ����ź���*/
    VOS_SEM                         semFileId;                                      /*file�����Ļ����ź���*/
}MNTN_ERRLOG_STRU;

#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif /* __cplusplus */

#endif /* __PSLOGOSA_H__ */
