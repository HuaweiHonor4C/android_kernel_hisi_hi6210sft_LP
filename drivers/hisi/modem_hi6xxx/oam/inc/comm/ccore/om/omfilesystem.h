/******************************************************************************

                  ��Ȩ���� (C), 2001-2011, ��Ϊ�������޹�˾

 ******************************************************************************
  �� �� ��      : OmFileSystem.h
  �� �� ��      : ����
  ��    ��      : ����47350
  ��������      : 2008��9��16��
  ����޸�      :
  ��������      :
  �����б�      :
  �޸���ʷ      :
  1.��    ��    : 2008��9��16��
    ��    ��    : ����47350
    �޸�����    : �����ļ�

******************************************************************************/
#ifndef _OM_FILESYSTEM_H_
#define _OM_FILESYSTEM_H_

#ifdef __cplusplus
  #if __cplusplus
  extern "C"{
  #endif
#endif

/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/

#include "vos.h"
#include "omprivate.h"

/*****************************************************************************
  2 �궨��
*****************************************************************************/
/*�жϴ��ļ��ķ�ʽ*/
#define ISWIRTE(Flags)                  (Flags&0x1)
#define ISREAD(Flags)                   (Flags&0x2)
#define ISCREATE(Flags)                 (Flags&0x4)

/*������ʱ��*/
#define OM_START_FILETIMER(phTimer)     VOS_StartRelTimer(phTimer, \
                  WUEPS_PID_OM, 5000, OM_FILE_TIMER, 0, VOS_RELTIMER_NOLOOP, VOS_TIMER_NO_PRECISION)
/*�رն�ʱ��*/
#define OM_STOP_FILETIMER(phTimer)      VOS_StopRelTimer(phTimer)

/*��ȡ�ļ����ݵ���󳤶�*/
#define OM_READ_MAX_LEN                 (1024*32)

/*���ļ���Ϣ����ͷ���ȣ����:OM_APP_READ_FILE_STRU*/
#define OM_READ_FILE_HEAD_LEN           8
/*�ļ����ļ���ÿһ��Ľṹ��ͷ���ȣ����: OM_ITEM_INFO_STRU*/
#define OM_ITEM_INFO_HEAD_LEN           24
/*��ȡ�ļ����ļ��л�����Ϣ��ͷ���ȣ����OM_APP_SCAN_DIR_STRU*/
#define OM_APP_SCAN_DIR_HEAD_LEN        8

#if (FEATURE_ON == FEATURE_MULTI_FS_PARTITION) /* SFT board*/
/* Ӳ�����ļ�·�� */
#define OM_CFDNV_FILE_PATH              ("/mnvm2:0/NvimUse/CFDNVTable.bin")
/* DSP�ļ�·�� */
#define OM_ZSP_FILE_PATH                ("/data/modemlog/ZSP.bin")
#else
/* Ӳ�����ļ�·�� */
#define OM_CFDNV_FILE_PATH              ("/yaffs0/Nvim/CFDNVTable.bin")
/* DSP�ļ�·�� */
#define OM_ZSP_FILE_PATH                ("/yaffs0/ZSP.bin")
#endif

#define OM_FILE_SEND_RESULT(enChannel, msg_fun_type, error_no, ReturnPrimId)\
{\
    g_ulOmSendToolErrNo = error_no;\
    OM_SendResultChannel(enChannel, msg_fun_type, error_no, ReturnPrimId);\
}\

/*****************************************************************************
  3 ö�ٶ���
*****************************************************************************/
/*�ļ�������*/
enum OM_FOLDER_TYPE_ENUM
{
    OM_ROOT_FOLDER = 0,
    OM_LOG_FOLDER,
    OM_DUMP_FOLDER,
    OM_FILE_BUTT
};
/*Ŀ¼�и��������*/
typedef enum
{
    OM_ITEM_FOLDER = 0,
    OM_ITEM_FILE,
    OM_ITEM_BUTT
}OM_ITEM_TYPE_ENUM;

/* OM �ϱ������߲������ */
typedef enum
{
    OM_DRV_FILE_OPENDIR_ERR       = 3,
    OM_DRV_FILE_MKDIR_ERR         = 4,
    OM_DRV_FILE_RMDIR_ERR         = 5,
    OM_DRV_FILE_CLOSEDIR_ERR      = 6,

    OM_DRV_FILE_OPEN_ERR          = 7,
    OM_DRV_FILE_READ_ERR          = 8,
    OM_DRV_FILE_WRITE_ERR         = 9,
    OM_DRV_FILE_RMFILE_ERR        = 10,
    OM_DRV_FILE_WRITE_LEN_ERR     = 11,

    OM_DRV_GET_DIRECTORY_ERR        = 12,
    OM_DRV_FILE_GET_DISKSPACE_ERR   = 13,
    OM_DRV_FILE_OPERATE_NOT_FINISH  = 14,

    OM_FILE_OPERATE_SEC_FILE_FORBID_CFD = 15,
    OM_FILE_OPERATE_SEC_FILE_FORBID_ZSP = 16,
    OM_FILE_RECEIVE_REQ_FIND_FUNC_ERR   = 17,
    OM_FILE_RECEIVE_ITEM_TYPE_ERR       = 18,
    OM_FILE_RECEIVE_FOLDER_TYPE_ERR     = 19,
    OM_FILE_START_FILE_TIMER_ERR        = 20,
    OM_FILE_MEM_ALLOC_ERR               = 21,
    OM_FILE_OPEN_SC_ERR                 = 22,

    OM_FILE_SEND_RESULT_ERR_BUTT
}OM_FILE_SEND_RESULT_ERR_ENUM;

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
/*��������ļ�����Ϣ*/
typedef struct
{
    FILE *      lFile;
    VOS_UINT32  ulFileType;
    HTIMER      hTimer;
}OM_FILE_INFO_STRU;
/*���߲���OM����ʹ�õĲ�ѯĿ¼�ṹ*/
typedef struct
{
    VOS_UINT32  ulResult;
    VOS_UINT32  ulLength;
    VOS_UINT8   aucDirPath[DRV_NAME_MAX + 1];
}OM_APP_QUERY_DIR_STRU;
/*���߲���OM����ʹ�õĶ�ȡ�ļ����ݽṹ*/
typedef struct
{
    VOS_UINT32  ulResult;
    VOS_UINT32  ulLength;
    VOS_CHAR    acFileContent[OM_READ_MAX_LEN];
}OM_APP_READ_FILE_STRU;
/*�ļ����ļ���ÿһ��Ľṹ*/
typedef struct
{
    VOS_UINT32  ulItemType;
    VOS_UINT32  ulSize;      /*�ļ���С��Ŀ¼û�д�С*/
    DRV_TIME    st_atime;    /*�������ʱ�䣬Ŀ¼û�д��ֶ�*/
    DRV_TIME    st_mtime;    /*����޸�ʱ�䣬Ŀ¼û�д��ֶ�*/
    DRV_TIME    st_ctime;    /*����ʱ��*/
    VOS_UINT32  ulNameLen;   /*�ļ����ļ������ֳ���*/
    VOS_UINT8   aucName[4];
}OM_ITEM_INFO_STRU;
/*���߲���OM����ʹ�õĻ�ȡ�ļ����ļ��л�����Ϣ�Ľṹ*/
typedef struct
{
    VOS_UINT32        ulResult;
    VOS_UINT32        ulNumber;
    OM_ITEM_INFO_STRU stOmItemInfo[1];
}OM_APP_SCAN_DIR_STRU;
/*���߲෢��OM���ļ��Ľṹ��*/
typedef struct
{
    VOS_UINT32        ulFlag;
    VOS_UINT8         aucPara[4];
}APP_OM_OPEN_INFO_STRU;
/*���߲���OM����ʹ�õĲ�ѯ�ļ�ϵͳ�ռ��С*/
typedef struct
{
    VOS_OM_HEADER
    VOS_UINT16        usPrimId;   /*Indicates current msg type.*/
    VOS_UINT16        usToolId;   /*Not used now.*/
    VOS_UINT32        ulResult;   /*Result of operation*/
    VOS_UINT32        ulDiskSpace;
    VOS_UINT32        ulUsedSpace;
    VOS_UINT32        ulValidSpace;
}OM_APP_QUERY_DISKSPACE_STRU;

/*****************************************************************************
  8 UNION����
*****************************************************************************/


/*****************************************************************************
  9 OTHERS����
*****************************************************************************/

/*****************************************************************************
  10 ��������
*****************************************************************************/
VOS_VOID OM_CloseFile(VOS_VOID);
VOS_VOID OM_FileSystemMsgProc(OM_REQ_PACKET_STRU *pRspPacket,
                                      OM_RSP_FUNC *pRspFuncPtr);

extern VOS_VOID Log_PauseFile(VOS_VOID);
extern VOS_VOID Log_ResumeFile(VOS_VOID);

extern FILE* OM_Open(const VOS_CHAR *pcFileName, VOS_INT lFlag);
extern VOS_UINT32 OM_FileSystemInit(VOS_VOID);

#ifdef __cplusplus
  #if __cplusplus
  }
  #endif
#endif

#endif
