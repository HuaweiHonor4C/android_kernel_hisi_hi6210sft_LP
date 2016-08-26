/******************************************************************************

                  ��Ȩ���� (C), 2001-2011, ��Ϊ�������޹�˾

 ******************************************************************************
  �� �� ��      : OmLittleImageLog.h
  �� �� ��      : ����
  ��    ��      : ��Ц��184875
  ��������      : 2012��12��27��
  ����޸�      :
  ��������      : ��h�ļ�������OmLittleImageLogģ���ʵ��
  �����б�      :
  �޸���ʷ      :
  1.��    ��    : 2012��12��27��
    ��    ��    : ��Ц��
    �޸�����    : �����ļ�

******************************************************************************/


#ifndef __OMLITTLEIMAGELOG_H__
#define __OMLITTLEIMAGELOG_H__


#ifdef __cplusplus
#if __cplusplus
extern "C"{
#endif
#endif /* __cplusplus */

/****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/

/*****************************************************************************
  2 �궨��
******************************************************************************/
#define LOG_FILE_SIZE               (5)                 /* Ĭ��LOG�ļ���С */
#define LOG_FILE_UNIT_SIZE          (1024*1024)         /* Ĭ���ļ���Ԫ */
#define LOG_FILE_ENABLE             (VOS_OK)
#define LOG_FILE_DISABLE            (VOS_ERR)           /* Ĭ��ʹ��Ϊ1��������LOG�ļ����� */
#define LOG_FILE_PATH_MAX_LENGTH    (30)                /* LOG�ļ������·������ */
#define FILE_SIZE_THRESHOLD_PERCENT (0.9)
#define LOG_SEM_TIMEOUT_VALUE       (2000)

/*******************************************************************************
  3 ö�ٶ���
*****************************************************************************/


/*****************************************************************************
  4 STRUCT����
*****************************************************************************/

typedef struct
{
    VOS_UINT32              ulFileMinId;                /* �ļ��������� */
    VOS_UINT32              ulFileMaxId;                /* �ļ�daixi����� */
    VOS_UINT32              ulFSFreeSpace;              /* �ļ�ϵͳ���д�С */
    VOS_UINT32              ulCurLogFileSize;           /* ��ǰ�ļ���С */
    VOS_UINT32              ulCurLogFileMaxSize;        /* �����ļ�Ĭ�ϴ�С */
    VOS_UINT32              ulSem;                      /* �ļ����������ź��� */
}LOG_FILE_SAVE_INFO_STRU;

typedef struct
{
    VOS_UINT32        ulDiskSpace;
    VOS_UINT32        ulUsedSpace;
    VOS_UINT32        ulValidSpace;
}LOG_FILE_DISK_INFO_STRU;

/*****************************************************************************
  5 �ⲿ�ӿڶ���
*****************************************************************************/
VOS_UINT32 OM_LittleImgWriteLogFile(VOS_CHAR *pcLogData, VOS_UINT32 ulLength);
VOS_UINT32 OM_StartUpLogSaveReq(APP_OM_MSG_EX_STRU *pstAppToOmMsg,
                                            VOS_UINT16 usReturnPrimId);
VOS_UINT32 OM_StopLogSaveReq(APP_OM_MSG_EX_STRU *pstAppToOmMsg,
                                            VOS_UINT16 usReturnPrimId);

#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif /* __cplusplus */


#endif /* __PSLOG_H__ */