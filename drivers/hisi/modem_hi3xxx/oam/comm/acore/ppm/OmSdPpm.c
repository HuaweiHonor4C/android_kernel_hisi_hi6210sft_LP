

/*****************************************************************************
  1 ͷ�ļ�����
**************************************************************************** */
#include "OmSdPpm.h"
#include "cpm.h"
#include "NVIM_Interface.h"


#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif

/* lint -e767  */
#define    THIS_FILE_ID        PS_FILE_ID_OM_SD_PPM_C
/* lint +e767  */

/* ****************************************************************************
  2 ȫ�ֱ�������
**************************************************************************** */


/*****************************************************************************
  3 �ⲿ��������
*****************************************************************************/


/*****************************************************************************
  4 ����ʵ��
*****************************************************************************/

VOS_UINT32 PPM_LogFileInit(VOS_VOID)
{
    OM_CHANNLE_PORT_CFG_STRU            stPortCfg;

    /*��ȡSD Log��NV�е�����*/
    if(NV_OK != NV_Read(en_NV_Item_Om_Port_Type, &stPortCfg, sizeof(OM_CHANNLE_PORT_CFG_STRU)))
    {
        PS_LOG(WUEPS_PID_OM, 0, PS_PRINT_ERROR, "PPM_LogFileInit:Read NV Config fail!");

        return VOS_OK;
    }

    /* ��ȡSD Log��NV�е�����Ϊ�����SD����ʱ���ʹ�� */
    if (CPM_OM_PORT_TYPE_SD == stPortCfg.enPortNum)
    {
        OM_SDInit();

        return VOS_OK;
    }
#if (VOS_OS_VER == VOS_LINUX)
    else if (CPM_OM_PORT_TYPE_FS == stPortCfg.enPortNum)
    {
        PPM_FSInitLogFile();

        return VOS_OK;
    }
#endif

    return VOS_OK;
}

#ifdef __cplusplus
#if __cplusplus
    }
#endif
#endif




