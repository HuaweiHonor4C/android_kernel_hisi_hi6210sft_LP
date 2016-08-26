/******************************************************************************

                  ��Ȩ���� (C), 2001-2011, ��Ϊ�������޹�˾

 ******************************************************************************
  �� �� ��   : RnicDemandDialFileIO.h
  �� �� ��   : ����
  ��    ��   :
  ��������   : 2012��1��31��
  ����޸�   :
  ��������   : RnicDemandDialFileIO.c ��ͷ�ļ�
  �����б�   :
  �޸���ʷ   :
  1.��    ��   : 2012��1��31��
    ��    ��   :
    �޸�����   : �����ļ�

******************************************************************************/

#ifndef __RNICDEMANDDIALFILEIO_H__
#define __RNICDEMANDDIALFILEIO_H__

/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/
#include "dopra_def.h"
#if (VOS_OS_VER == VOS_LINUX)
#include <linux/module.h>
#include <linux/proc_fs.h>
#include <linux/kallsyms.h>
#include <asm/uaccess.h>
#else
#include "RnicLinuxInterface.h"
#endif


#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


#pragma pack(4)

/*****************************************************************************
  2 �궨��
*****************************************************************************/


#define RNIC_ONDEMAND_FILE_LEN          (4)

#define RNIC_IDLETIMEROUT_FILE_LEN      (16)

#define RNIC_EVENTFLAG_FILE_LEN         (4)

/*lint -e960 �޸���:l60609;ԭ��:64bit*/
#define RNIC_VFILE_CRT_LEVEL            (0770)
/*lint +e960 �޸���:l60609;ԭ��:64bit*/

/*****************************************************************************
  3 ö�ٶ���
*****************************************************************************/


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


/*****************************************************************************
  8 UNION����
*****************************************************************************/


/*****************************************************************************
  9 OTHERS����
*****************************************************************************/


/*****************************************************************************
  10 ��������
*****************************************************************************/
extern VOS_UINT32 RNIC_InitDialEventReportFile(struct proc_dir_entry *pstParentFileDirEntry);
extern VOS_UINT32 RNIC_InitIdleTimerOutFile(struct proc_dir_entry *pstParentFileDirEntry);
extern VOS_UINT32 RNIC_InitOnDemandFile(struct proc_dir_entry *pstParentFileDirEntry);
extern ssize_t RNIC_ReadDialEventReportFile(
           struct file                        *file,
           char __user                        *buf,
           size_t                              len,
           loff_t                             *ppos
       );
extern ssize_t RNIC_ReadIdleTimerOutFile(
           struct file                        *file,
           char __user                        *buf,
           size_t                              len,
           loff_t                             *ppos
       );
extern ssize_t RNIC_ReadOnDemandFile(
           struct file                        *file,
           char __user                        *buf,
           size_t                              len,
           loff_t                             *ppos
       );
extern ssize_t RNIC_WriteDialEventReportFile(
           struct file                        *file,
           const char __user                  *buf,
           size_t                              len,
           loff_t                             *ppos
       );
extern ssize_t RNIC_WriteIdleTimerOutFile(
           struct file                        *file,
           const char __user                  *buf,
           size_t                              len,
           loff_t                             *ppos
       );
extern ssize_t RNIC_WriteOnDemandFile(
           struct file                        *file,
           const char __user                  *buf,
           size_t                              len,
           loff_t                             *ppos
       );
extern VOS_UINT32 RNIC_InitDemandDialFile(VOS_VOID);









#if (VOS_OS_VER == VOS_WIN32)
#pragma pack()
#else
#pragma pack(0)
#endif




#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif /* end of RnicDemandDialFileIO.h */
