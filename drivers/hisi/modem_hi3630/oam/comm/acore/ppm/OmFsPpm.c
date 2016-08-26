

/*****************************************************************************
  1 ͷ�ļ�����
**************************************************************************** */
#include "SCMProc.h"
#include "ombufmngr.h"
#include "cpm.h"
#include "omsdlog.h"
#include "OmFsPpm.h"
#include "NVIM_Interface.h"
#include "SysNvId.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif

/* lint -e767  */
#define    THIS_FILE_ID        PS_FILE_ID_OM_FS_PPM_C
/* lint +e767  */

/* ****************************************************************************
  2 ȫ�ֱ�������
**************************************************************************** */


/*****************************************************************************
  3 �ⲿ��������
*****************************************************************************/
extern NV_FLASH_LOG_RECORD_STRU            g_stFlashLogCfg;
extern OM_FLASH_DEBUG_INFO_STRU            g_stFSLogFileInfo;
extern VOS_UINT32                          g_ulLogMaxCout;
/*****************************************************************************
  4 ����ʵ��
*****************************************************************************/

/*****************************************************************************
 �� �� ��  :
 ��������  :
 �������  :
 �������  :
 �� �� ֵ  :
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2014��5��31��
    ��    ��   : XXXXXXXX
    �޸�����   : V8R1 OM_Optimize��Ŀ����

*****************************************************************************/
#if (VOS_LINUX == VOS_OS_VER)


VOS_UINT32 PPM_FSStartLog(VOS_VOID)
{
    /*���GU���ñ���ռ�����Ϊ0������Ҫ���б���*/
    if (0 == g_stFlashLogCfg.ulGULogFileSize)
    {
        return VOS_OK;
    }

    if (VOS_OK != OM_FSInitCfgFile())
    {
        return VOS_ERR;
    }

    if (VOS_OK != OM_FSCheckSpace())
    {
        return VOS_ERR;
    }

    g_stFSLogFileInfo.bIsWritten    = VOS_TRUE;
    g_stFSLogFileInfo.lFileHandle   = -1;
    g_stFSLogFileInfo.ulRemainCount = g_ulLogMaxCout;
    g_stFSLogFileInfo.ulFileSize    = OM_FLASH_DEFAULT_FILE_SIZE;
    g_stFSLogFileInfo.ulFileMaxSize = OM_FLASH_DEFAULT_FILE_SIZE;

    return VOS_OK;
}
VOS_UINT32 PPM_FSWriteLogProc(VOS_UINT8 *pucVirAddr, VOS_UINT8 *pucPhyAddr, VOS_UINT32 ulLength)
{
#if (FEATURE_ON == FEATURE_COMPRESS_WRITE_LOG_FILE)
    return OM_CompressRcvLog(pucVirAddr, ulLength);
#else
    return OM_FSWriteLogFile(pucVirAddr, ulLength);
#endif
}

/*****************************************************************************
 �� �� ��  : PPM_FSInitLogFile
 ��������  : ��ʼ��LOG�ļ�
 �������  : ��
 �������  : ��
 �� �� ֵ  : VOS_ERR
             VOS_OK
  1.��    ��   : 2014��5��31��
    ��    ��   : h59254
    �޸�����   : V8R1 OM_Optimize��Ŀ����
*****************************************************************************/
VOS_UINT32 PPM_FSInitLogFile(VOS_VOID)
{
    /*��ȡFlash����trace����*/
    if(NV_OK != NV_Read(en_NV_Item_FLASH_Log_Record_CFG, &g_stFlashLogCfg, sizeof(NV_FLASH_LOG_RECORD_STRU)))
    {
        PS_LOG(WUEPS_PID_OM, 0, PS_PRINT_ERROR, "PPM_FSInitLogFile:Read NV Config fail!");

        return VOS_OK;
    }

    g_stFSLogFileInfo.bIsWritten    = VOS_FALSE;

    /*���GU���ñ���ռ�����Ϊ0������Ҫ���б���*/
    if (0 == g_stFlashLogCfg.ulGULogFileSize)
    {
        return VOS_OK;
    }

    CPM_PhySendReg(CPM_FS_PORT, (CPM_SEND_FUNC)PPM_FSWriteLogProc);

    if (VOS_OK != PPM_FSStartLog())
    {
        return VOS_ERR;
    }

    return VOS_OK;
}

#endif

#ifdef __cplusplus
#if __cplusplus
    }
#endif
#endif




