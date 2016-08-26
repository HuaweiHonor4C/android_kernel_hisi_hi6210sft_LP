/******************************************************************************

                  ��Ȩ���� (C), 2001-2011, ��Ϊ�������޹�˾

 ******************************************************************************
  �� �� ��   : SCMProc.c
  �� �� ��   : ����
  ��    ��   : ף� 100318
  ��������   : 2012��8��12��
  ����޸�   :
  ��������   :
  �����б�   :
  �޸���ʷ   :
  1.��    ��   : 2012��8��12��
    ��    ��   : ף� 100318
    �޸�����   : �����ļ�

***************************************************************************** */

/*****************************************************************************
  1 ͷ�ļ�����
**************************************************************************** */
#include "SCMProc.h"
#include "ombufmngr.h"
#include "omnvinterface.h"
#include "NVIM_Interface.h"
#include "omprivate.h"
#include "omrl.h"
#include "OmAppRl.h"
#include "SCMSoftDecode.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif

/* lint -e767  */
#define    THIS_FILE_ID        PS_FILE_ID_SCM_PROC_C
/* lint +e767  */

/* ****************************************************************************
  2 ȫ�ֱ�������
**************************************************************************** */
extern SCM_SOFTDECODE_INFO_STRU   g_stScmSoftDecodeInfo;

#if (VOS_OS_VER == VOS_WIN32)       /* PC Stub */
/* ����Ŀ��ͨ���ص����� */
SCM_DECODERDESTFUCN         g_astSCMDecoderCbFunc[SOCP_DECODER_DST_CB_BUTT]={VOS_NULL_PTR, VOS_NULL_PTR, VOS_NULL_PTR};

SCM_CODER_SRC_CFG_STRU      g_astSCMCoderSrcCfg[SCM_CODER_SRC_NUM]=
{
    {SCM_CHANNEL_UNINIT, SOCP_CODER_SRC_LOM_CNF1, SOCP_CODER_DST_OM_CNF,  SOCP_DATA_TYPE_0, SOCP_ENCSRC_CHNMODE_LIST, SOCP_DATA_TYPE_3, SCM_CODER_SRC_BDSIZE, SCM_CODER_SRC_RDSIZE, VOS_NULL_PTR, VOS_NULL_PTR, VOS_NULL_PTR, VOS_NULL_PTR},
    {SCM_CHANNEL_UNINIT, SOCP_CODER_SRC_LOM_IND1, SOCP_CODER_DST_OM_IND,  SOCP_DATA_TYPE_0, SOCP_ENCSRC_CHNMODE_LIST, SOCP_DATA_TYPE_2, SCM_CODER_SRC_BDSIZE, SCM_CODER_SRC_RDSIZE, VOS_NULL_PTR, VOS_NULL_PTR, VOS_NULL_PTR, VOS_NULL_PTR},
    {SCM_CHANNEL_UNINIT, SOCP_CODER_SRC_GU_CNF1,  SOCP_CODER_DST_OM_CNF,  SOCP_DATA_TYPE_1, SOCP_ENCSRC_CHNMODE_LIST, SOCP_DATA_TYPE_1, SCM_CODER_SRC_BDSIZE, SCM_CODER_SRC_RDSIZE, VOS_NULL_PTR, VOS_NULL_PTR, VOS_NULL_PTR, VOS_NULL_PTR},
    {SCM_CHANNEL_UNINIT, SOCP_CODER_SRC_GU_IND1,  SOCP_CODER_DST_OM_IND,  SOCP_DATA_TYPE_1, SOCP_ENCSRC_CHNMODE_LIST, SOCP_DATA_TYPE_1, SCM_CODER_SRC_BDSIZE, SCM_CODER_SRC_RDSIZE, VOS_NULL_PTR, VOS_NULL_PTR, VOS_NULL_PTR, VOS_NULL_PTR},
    {SCM_CHANNEL_UNINIT, SOCP_CODER_SRC_GU_CNF2,  SOCP_CODER_DST_OM_CNF,  SOCP_DATA_TYPE_1, SOCP_ENCSRC_CHNMODE_LIST, SOCP_DATA_TYPE_1, SCM_CODER_SRC_BDSIZE, SCM_CODER_SRC_RDSIZE, VOS_NULL_PTR, VOS_NULL_PTR, VOS_NULL_PTR, VOS_NULL_PTR},
    {SCM_CHANNEL_UNINIT, SOCP_CODER_SRC_GU_IND2,  SOCP_CODER_DST_OM_IND,  SOCP_DATA_TYPE_1, SOCP_ENCSRC_CHNMODE_LIST, SOCP_DATA_TYPE_1, SCM_CODER_SRC_BDSIZE, SCM_CODER_SRC_RDSIZE, VOS_NULL_PTR, VOS_NULL_PTR, VOS_NULL_PTR, VOS_NULL_PTR}
};

SCM_CODER_DEST_CFG_STRU     g_astSCMCoderDstCfg[SCM_CODER_DST_NUM]=
{
    {SCM_CHANNEL_UNINIT, SOCP_CODER_DST_OM_CNF, SCM_CODER_DST_CNF_SIZE, SCM_CODER_DST_THRESHOLD, VOS_NULL_PTR, VOS_NULL_PTR, VOS_NULL_PTR},
    {SCM_CHANNEL_UNINIT, SOCP_CODER_DST_OM_IND, SCM_CODER_DST_IND_SIZE, SCM_CODER_DST_THRESHOLD, VOS_NULL_PTR, VOS_NULL_PTR, VOS_NULL_PTR},
};

SCM_DECODER_SRC_CFG_STRU    g_astSCMDecoderSrcCfg[SCM_DECODER_SRC_NUM]=
{
    {SCM_CHANNEL_UNINIT, SOCP_DECODER_SRC_LOM, SCM_DECODER_SRC_SIZE, VOS_NULL, VOS_NULL_PTR, VOS_NULL_PTR}
};

SCM_DECODER_DEST_CFG_STRU   g_astSCMDecoderDstCfg[SCM_DECODER_DST_NUM]=
{
    {SCM_CHANNEL_UNINIT, SOCP_DECODER_DST_LOM, SOCP_DECODER_SRC_LOM, SOCP_DATA_TYPE_0, SCM_DECODER_DST_SIZE, SCM_DECDOER_DST_THRESHOLD, VOS_NULL_PTR, VOS_NULL_PTR, VOS_NULL_PTR}
};

#ifdef SCM_SNCHECK
OM_HDLC_STRU                            g_astSnCheckHdlcEntity[2];
VOS_UINT32                              g_ulSnErrCount         = 0;
SCM_SN_CHECK_STRU                       g_stSnCheck;
VOS_UINT16                              g_usSnCheckFlag;
VOS_SPINLOCK                            g_stSnCheckSpinLock;       /* ��������������SN check�ٽ���Դ���� */
#endif

#else

#if (OSA_CPU_CCPU == VOS_OSA_CPU)

#if (RAT_MODE != RAT_GU)    /* Mutil Mode */
SCM_CODER_SRC_CFG_STRU      g_astSCMCoderSrcCfg[SCM_CODER_SRC_NUM]=
{
    {SCM_CHANNEL_UNINIT, SOCP_CODER_SRC_LOM_IND2, SOCP_CODER_DST_OM_IND,   SOCP_DATA_TYPE_0, SOCP_ENCSRC_CHNMODE_LIST, SOCP_CHAN_PRIORITY_3, SCM_CODER_SRC_BDSIZE, SCM_CODER_SRC_RDSIZE, VOS_NULL_PTR, VOS_NULL_PTR, VOS_NULL_PTR, VOS_NULL_PTR},
    {SCM_CHANNEL_UNINIT, SOCP_CODER_SRC_LOM_IND3, SOCP_CODER_DST_OM_IND,   SOCP_DATA_TYPE_0, SOCP_ENCSRC_CHNMODE_LIST, SOCP_CHAN_PRIORITY_0, SCM_CODER_SRC_BDSIZE, SCM_CODER_SRC_RDSIZE, VOS_NULL_PTR, VOS_NULL_PTR, VOS_NULL_PTR, VOS_NULL_PTR},
    {SCM_CHANNEL_UNINIT, SOCP_CODER_SRC_LOM_CNF2, SOCP_CODER_DST_OM_IND,   SOCP_DATA_TYPE_0, SOCP_ENCSRC_CHNMODE_LIST, SOCP_CHAN_PRIORITY_2, SCM_CODER_SRC_BDSIZE, SCM_CODER_SRC_RDSIZE, VOS_NULL_PTR, VOS_NULL_PTR, VOS_NULL_PTR, VOS_NULL_PTR},
    {SCM_CHANNEL_UNINIT, SOCP_CODER_SRC_GU_CNF2,  SOCP_CODER_DST_OM_CNF,   SOCP_DATA_TYPE_1, SOCP_ENCSRC_CHNMODE_LIST, SOCP_CHAN_PRIORITY_1, SCM_CODER_SRC_BDSIZE, SCM_CODER_SRC_RDSIZE, VOS_NULL_PTR, VOS_NULL_PTR, VOS_NULL_PTR, VOS_NULL_PTR},
    {SCM_CHANNEL_UNINIT, SOCP_CODER_SRC_GU_IND2,  SOCP_CODER_DST_OM_IND,   SOCP_DATA_TYPE_1, SOCP_ENCSRC_CHNMODE_LIST, SOCP_CHAN_PRIORITY_1, SCM_CODER_SRC_BDSIZE, SCM_CODER_SRC_RDSIZE, VOS_NULL_PTR, VOS_NULL_PTR, VOS_NULL_PTR, VOS_NULL_PTR}
};
#else                       /* GU  Single Mode */
SCM_CODER_SRC_CFG_STRU      g_astSCMCoderSrcCfg[SCM_CODER_SRC_NUM]=
{
    {SCM_CHANNEL_UNINIT, SOCP_CODER_SRC_GU_CNF2,  SOCP_CODER_DST_OM_CNF,   SOCP_DATA_TYPE_1, SOCP_ENCSRC_CHNMODE_LIST, SOCP_CHAN_PRIORITY_1, SCM_CODER_SRC_BDSIZE, SCM_CODER_SRC_RDSIZE, VOS_NULL_PTR, VOS_NULL_PTR, VOS_NULL_PTR, VOS_NULL_PTR},
    {SCM_CHANNEL_UNINIT, SOCP_CODER_SRC_GU_IND2,  SOCP_CODER_DST_OM_IND,   SOCP_DATA_TYPE_1, SOCP_ENCSRC_CHNMODE_LIST, SOCP_CHAN_PRIORITY_1, SCM_CODER_SRC_BDSIZE, SCM_CODER_SRC_RDSIZE, VOS_NULL_PTR, VOS_NULL_PTR, VOS_NULL_PTR, VOS_NULL_PTR}
};
#endif  /* (RAT_MODE != RAT_GU) */

#endif /*(OSA_CPU_CCPU == VOS_OSA_CPU)*/

#if (OSA_CPU_ACPU == VOS_OSA_CPU)

#ifdef SCM_SNCHECK
OM_HDLC_STRU                            g_astSnCheckHdlcEntity[2];
VOS_UINT32                              g_ulSnErrCount         = 0;
SCM_SN_CHECK_STRU                       g_stSnCheck;
VOS_UINT16                              g_usSnCheckFlag;
VOS_SPINLOCK                            g_stSnCheckSpinLock;       /* ��������������SN check�ٽ���Դ���� */
#endif

/* ����Ŀ��ͨ���ص����� */
SCM_DECODERDESTFUCN         g_astSCMDecoderCbFunc[SOCP_DECODER_DST_CB_BUTT]={VOS_NULL_PTR, VOS_NULL_PTR, VOS_NULL_PTR};

#if (RAT_MODE != RAT_GU)    /* Mutil Mode */
SCM_CODER_SRC_CFG_STRU      g_astSCMCoderSrcCfg[SCM_CODER_SRC_NUM]=
{
    {SCM_CHANNEL_UNINIT, SOCP_CODER_SRC_LOM_CNF1, SOCP_CODER_DST_OM_CNF,   SOCP_DATA_TYPE_0, SOCP_ENCSRC_CHNMODE_LIST, SOCP_CHAN_PRIORITY_3, SCM_CODER_SRC_BDSIZE, SCM_CODER_SRC_RDSIZE, VOS_NULL_PTR, VOS_NULL_PTR, VOS_NULL_PTR, VOS_NULL_PTR},
    {SCM_CHANNEL_UNINIT, SOCP_CODER_SRC_LOM_IND1, SOCP_CODER_DST_OM_IND,   SOCP_DATA_TYPE_0, SOCP_ENCSRC_CHNMODE_LIST, SOCP_CHAN_PRIORITY_2, SCM_CODER_SRC_BDSIZE, SCM_CODER_SRC_RDSIZE, VOS_NULL_PTR, VOS_NULL_PTR, VOS_NULL_PTR, VOS_NULL_PTR},
    {SCM_CHANNEL_UNINIT, SOCP_CODER_SRC_GU_CNF1,  SOCP_CODER_DST_OM_CNF,   SOCP_DATA_TYPE_1, SOCP_ENCSRC_CHNMODE_LIST, SOCP_CHAN_PRIORITY_1, SCM_CODER_SRC_BDSIZE, SCM_CODER_SRC_RDSIZE, VOS_NULL_PTR, VOS_NULL_PTR, VOS_NULL_PTR, VOS_NULL_PTR},
    {SCM_CHANNEL_UNINIT, SOCP_CODER_SRC_GU_IND1,  SOCP_CODER_DST_OM_IND,   SOCP_DATA_TYPE_1, SOCP_ENCSRC_CHNMODE_LIST, SOCP_CHAN_PRIORITY_1, SCM_CODER_SRC_BDSIZE, SCM_CODER_SRC_RDSIZE, VOS_NULL_PTR, VOS_NULL_PTR, VOS_NULL_PTR, VOS_NULL_PTR}
};

SCM_CODER_DEST_CFG_STRU     g_astSCMCoderDstCfg[SCM_CODER_DST_NUM]=
{
    {SCM_CHANNEL_UNINIT, SOCP_CODER_DST_OM_CNF, SCM_CODER_DST_CNF_SIZE, SCM_CODER_DST_THRESHOLD,  VOS_NULL_PTR, VOS_NULL_PTR,  VOS_NULL_PTR},
    {SCM_CHANNEL_UNINIT, SOCP_CODER_DST_OM_IND, SCM_CODER_DST_IND_SIZE, SCM_CODER_DST_THRESHOLD,  VOS_NULL_PTR, VOS_NULL_PTR,  VOS_NULL_PTR},
};

SCM_DECODER_SRC_CFG_STRU    g_astSCMDecoderSrcCfg[SCM_DECODER_SRC_NUM]=
{
    {SCM_CHANNEL_UNINIT, SOCP_DECODER_SRC_LOM, SCM_DECODER_SRC_SIZE, VOS_NULL, VOS_NULL_PTR, VOS_NULL_PTR}
};

SCM_DECODER_DEST_CFG_STRU   g_astSCMDecoderDstCfg[SCM_DECODER_DST_NUM]=
{
    {SCM_CHANNEL_UNINIT, SOCP_DECODER_DST_LOM, SOCP_DECODER_SRC_LOM, SOCP_DATA_TYPE_0, SCM_DECODER_DST_SIZE, SCM_DECDOER_DST_THRESHOLD, VOS_NULL_PTR, VOS_NULL_PTR, VOS_NULL_PTR}
};
#else                           /* GU Single Mode */
SCM_CODER_SRC_CFG_STRU      g_astSCMCoderSrcCfg[SCM_CODER_SRC_NUM]=
{
    {SCM_CHANNEL_UNINIT, SOCP_CODER_SRC_GU_CNF1, SOCP_CODER_DST_OM_CNF, SOCP_DATA_TYPE_1, SOCP_ENCSRC_CHNMODE_LIST, SOCP_CHAN_PRIORITY_1, SCM_CODER_SRC_BDSIZE, SCM_CODER_SRC_RDSIZE, VOS_NULL_PTR, VOS_NULL_PTR, VOS_NULL_PTR, VOS_NULL_PTR},
    {SCM_CHANNEL_UNINIT, SOCP_CODER_SRC_GU_IND1, SOCP_CODER_DST_OM_IND, SOCP_DATA_TYPE_1, SOCP_ENCSRC_CHNMODE_LIST, SOCP_CHAN_PRIORITY_1, SCM_CODER_SRC_BDSIZE, SCM_CODER_SRC_RDSIZE, VOS_NULL_PTR, VOS_NULL_PTR, VOS_NULL_PTR, VOS_NULL_PTR}
};

SCM_CODER_DEST_CFG_STRU     g_astSCMCoderDstCfg[SCM_CODER_DST_NUM]=
{
    {SCM_CHANNEL_UNINIT, SOCP_CODER_DST_OM_CNF, SCM_CODER_DST_CNF_SIZE, SCM_CODER_DST_THRESHOLD, VOS_NULL_PTR, VOS_NULL_PTR, VOS_NULL_PTR},
    {SCM_CHANNEL_UNINIT, SOCP_CODER_DST_OM_IND, SCM_CODER_DST_IND_SIZE, SCM_CODER_DST_THRESHOLD, VOS_NULL_PTR, VOS_NULL_PTR, VOS_NULL_PTR}
};
#endif /* (RAT_MODE != RAT_GU) */

#endif /* (OSA_CPU_ACPU == VOS_OSA_CPU) */

#endif /* (VOS_OS_VER == VOS_WIN32) */

SCM_INFODATA_STRU           g_stSCMInfoData;    /* ���ڱ���log��Ϣ */


/* c�˵�����λ�ص���������Ҫ�رյı���Դͨ�� */
#if (FEATURE_ON == FEATURE_SOCP_CHANNEL_REDUCE)
SOCP_CODER_SRC_ENUM_U32     g_ulCloseSrcNum[] =
{
    SOCP_CODER_SRC_GU_CNF2,         /* GU OM�����Ϣ */
    SOCP_CODER_SRC_GU_IND2,         /* GU OM�����Ϣ */
    SOCP_CODER_SRC_GUBBP1,          /* GUBBP�����Ϣ */
    SOCP_CODER_SRC_GUBBP2,          /* GUBBP�����Ϣ */
    SOCP_CODER_SRC_GUDSP1,          /* GUDSP�����Ϣ */
    SOCP_CODER_SRC_GUDSP2,          /* GUDSP�����Ϣ */
};

#else
SOCP_CODER_SRC_ENUM_U32     g_ulCloseSrcNum[] =
{
    SOCP_CODER_SRC_GU_CNF2,         /* GU OM�����Ϣ */
    SOCP_CODER_SRC_GU_IND2,         /* GU OM�����Ϣ */
    SOCP_CODER_SRC_RFU,             /* ���� */
    SOCP_CODER_SRC_HIFI,            /* GU HIFI�����Ϣ */
    SOCP_CODER_SRC_MCU1,            /* MCU�����Ϣ */
    SOCP_CODER_SRC_MCU2,            /* MCU�����Ϣ */
    SOCP_CODER_SRC_LDSP1,           /* LDSP�����Ϣ */
    SOCP_CODER_SRC_LDSP2,           /* LDSP�����Ϣ */
    SOCP_CODER_SRC_LBBP1,           /* LBBP�����Ϣ */
    SOCP_CODER_SRC_LBBP2,           /* LBBP�����Ϣ */
    SOCP_CODER_SRC_LBBP3,           /* LBBP�����Ϣ */
    SOCP_CODER_SRC_LBBP4,           /* LBBP�����Ϣ */
    SOCP_CODER_SRC_LBBP5,           /* LBBP�����Ϣ */
    SOCP_CODER_SRC_LBBP6,           /* LBBP�����Ϣ */
    SOCP_CODER_SRC_LBBP7,           /* LBBP�����Ϣ */
    SOCP_CODER_SRC_LBBP8,           /* LBBP�����Ϣ */
    SOCP_CODER_SRC_LBBP9,           /* LBBP�����Ϣ */
    SOCP_CODER_SRC_GUBBP1,          /* GUBBP�����Ϣ */
    SOCP_CODER_SRC_GUBBP2,          /* GUBBP�����Ϣ */
    SOCP_CODER_SRC_GUDSP1,          /* GUDSP�����Ϣ */
    SOCP_CODER_SRC_GUDSP2,          /* GUDSP�����Ϣ */
    SOCP_CODER_SRC_TDDSP1,          /* TDDSP�����Ϣ */
    SOCP_CODER_SRC_TDBBP1,          /* TDBBP�����Ϣ */
    SOCP_CODER_SRC_TDBBP2,          /* TDBBP�����Ϣ */
};
#endif

/*****************************************************************************
  3 �ⲿ��������
*****************************************************************************/
/* BBP��ά�ɲ���Ŀ����,j00174725 2012-11-26 */
#ifdef SCM_CCORE
extern VOS_VOID Om_BbpDbgChanInit(VOS_VOID);
#endif

/*****************************************************************************
  4 ����ʵ��
*****************************************************************************/

/*****************************************************************************
 �� �� ��  : SCM_FindChannelCfg
 ��������  : ����ͨ��ID��ѯͨ�����ñ��λ��
 �������  : ulChannelID: ��Ҫ��ѯ��ͨ��ID
             ulChNax:     ͨ�����ñ����ֵ
             pstCfg:      ͨ�����ñ�
 �������  : pulNum:      ͨ�����ñ��λ��
 �� �� ֵ  : VOS_ERR/VOS_OK
 ���ú���  :
 ��������  :
 �޸���ʷ  :
   1.��    ��  : 2012��8��8��
     ��    ��  : zhuli
     �޸�����  : Creat Function
**************************************************************************** */
VOS_UINT32  SCM_FindChannelCfg(VOS_UINT32           ulChannelID,
                                    VOS_UINT32              ulChMax,
                                    SCM_CHANNEL_CFG_HEAD    *pstCfg,
                                    VOS_UINT32               ulStruLen,
                                    VOS_UINT32              *pulNum)
{
    VOS_UINT32                          i;
    SCM_CHANNEL_CFG_HEAD               *pstTmpCfg = pstCfg;

    for(i=0; i<ulChMax; i++)
    {
        if((pstTmpCfg->ulChannelID == ulChannelID)
            &&(SCM_CHANNEL_INIT_SUCC == pstTmpCfg->enInitState))
        {
            *pulNum = i;

            return VOS_OK;/* ���سɹ� */
        }

        pstTmpCfg = (SCM_CHANNEL_CFG_HEAD *)((VOS_UINT8 *)pstTmpCfg + ulStruLen);
    }

    return VOS_ERR;/* ����ʧ�� */
}

/*****************************************************************************
 �� �� ��  : SCM_CoderSrcChannelCfg
 ��������  : ��ACPU/CCPU�ı���Դͨ�������õ���SOCP�ӿ����õ�IP
 �������  : ��
 �������  : ��
 �� �� ֵ  : VOS_ERR/VOS_OK
 ���ú���  :
 ��������  :
 �޸���ʷ  :
   1.��    ��  : 2012��8��8��
     ��    ��  : zhuli
     �޸�����  : Creat Function
*****************************************************************************/
VOS_UINT32 SCM_CoderSrcChannelCfg(SCM_CODER_SRC_CFG_STRU *pstCfg)
{
    SOCP_CODER_SRC_CHAN_S               stChannle;          /* ��ǰͨ����������Ϣ */

    stChannle.u32DestChanID = pstCfg->enDstCHID;            /*  Ŀ��ͨ��ID */
    stChannle.eDataType     = pstCfg->enDataType;           /*  �������ͣ�ָ�����ݷ�װЭ�飬���ڸ��ö�ƽ̨ */
    stChannle.eMode         = pstCfg->enCHMode;             /*  ͨ������ģʽ */
    stChannle.ePriority     = pstCfg->enCHLevel;            /*  ͨ�����ȼ� */
    stChannle.u32BypassEn   = SOCP_HDLC_ENABLE;             /*  ͨ��bypassʹ�� */
    stChannle.eDataTypeEn   = SOCP_DATA_TYPE_EN;            /*  ��������ʹ��λ */
    stChannle.eDebugEn      = SOCP_ENC_DEBUG_DIS;           /*  ����λʹ�� */

    stChannle.sCoderSetSrcBuf.pucInputStart  = pstCfg->pucSrcPHY;                             /*  ����ͨ����ʼ��ַ */
    stChannle.sCoderSetSrcBuf.pucInputEnd    = (pstCfg->pucSrcPHY + pstCfg->ulSrcBufLen)-1;   /*  ����ͨ��������ַ */
    stChannle.sCoderSetSrcBuf.pucRDStart     = pstCfg->pucRDPHY;                              /* RD buffer��ʼ��ַ */
    stChannle.sCoderSetSrcBuf.pucRDEnd       = (pstCfg->pucRDPHY + pstCfg->ulRDBufLen)-1;     /*  RD buffer������ַ */
    stChannle.sCoderSetSrcBuf.u32RDThreshold = SCM_CODER_SRC_RD_THRESHOLD;                    /* RD buffer�����ϱ���ֵ */

    if (VOS_OK != mdrv_socp_corder_set_src_chan(pstCfg->enChannelID, &stChannle))
    {
        SCM_CODER_SRC_ERR("SCM_CoderSrcChannelCfg: Search Channel ID Error", pstCfg->enChannelID, 0);/* ��ӡʧ�� */

        return VOS_ERR;/* ���ش��� */
    }

    pstCfg->enInitState = SCM_CHANNEL_INIT_SUCC; /* ��¼ͨ����ʼ�����ô��� */

    return VOS_OK;/* ���سɹ� */
}

/* ****************************************************************************
 �� �� ��  : SCM_ResetCoderSrcChan
 ��������  : ��ACPU/CCPU�ı���Դͨ������������
 �������  : ��
 �������  : ��
 �� �� ֵ  : VOS_ERR/VOS_OK
 ���ú���  :
 ��������  :
 �޸���ʷ  :
   1.��    ��  : 2012��8��8��
     ��    ��  : zhuli
     �޸�����  : Creat Function
**************************************************************************** */
VOS_UINT32 SCM_ResetCoderSrcChan(SOCP_CODER_SRC_ENUM_U32 enChID)
{
    VOS_UINT32                          ulCfgNum;

    if (VOS_OK != SCM_FindChannelCfg(enChID,
                                SCM_CODER_SRC_NUM,
                                (SCM_CHANNEL_CFG_HEAD*)g_astSCMCoderSrcCfg,
                                sizeof(SCM_CODER_SRC_CFG_STRU),
                                &ulCfgNum))
    {
        return VOS_ERR;/* ����ʧ�� */
    }

    /* ��¼ͨ����λlog */
    SCM_CODER_SRCRESET_LOG("SCM_ResetCoderSrcChan: Reset Channel", enChID, 0);

    if(VOS_OK != SOCP_CleanEncSrcChan(enChID))    /* ���ͨ������ */
    {
        return VOS_ERR;
    }

    if(VOS_OK != SCM_CoderSrcChannelCfg(&g_astSCMCoderSrcCfg[ulCfgNum]))  /* ��������ͨ�� */
    {
        return VOS_ERR;
    }

    if(VOS_OK != mdrv_socp_start(enChID))
    {
        return VOS_ERR;
    }

    return VOS_OK;
}

/* ****************************************************************************
 �� �� ��  : SCM_CoderSrcChannelInit
 ��������  : ��ACPU/CCPU�ı���Դͨ�������ó�ʼ��
 �������  : ��
 �������  : ��
 �� �� ֵ  : VOS_ERR/VOS_OK
 ���ú���  :
 ��������  :
 �޸���ʷ  :
   1.��    ��  : 2012��8��8��
     ��    ��  : zhuli
     �޸�����  : Creat Function
**************************************************************************** */
VOS_UINT32 SCM_CoderSrcChannelInit(VOS_VOID)
{
    VOS_UINT32                          i;

    for (i = 0; i < SCM_CODER_SRC_NUM; i++)
    {
        if (VOS_OK != SCM_CoderSrcChannelCfg(&g_astSCMCoderSrcCfg[i]))
        {
            g_astSCMCoderSrcCfg[i].enInitState = SCM_CHANNEL_CFG_FAIL;  /* ��¼ͨ����ʼ�����ô��� */

            return VOS_ERR;/* ����ʧ�� */
        }

        if(VOS_OK != mdrv_socp_start(g_astSCMCoderSrcCfg[i].enChannelID))
        {
            g_astSCMCoderSrcCfg[i].enInitState = SCM_CHANNEL_START_FAIL;  /* ��¼ͨ���������ô��� */

            return VOS_ERR;/* ����ʧ�� */
        }

        g_astSCMCoderSrcCfg[i].enInitState = SCM_CHANNEL_INIT_SUCC;     /* ��¼ͨ����ʼ�����ô��� */
    }

    return VOS_OK;/* ���سɹ� */
}

/* ****************************************************************************
 �� �� ��  : SCM_RlsSrcRDAll
 ��������  : ������Դͨ��������RD�ڴ�����ͷ�
 �������  : enChanlID: ����Դͨ��ID
 �������  : pulDataPhyAddr: ����Դͨ�����ͷ�����ʵ��ֵַ
             pulDataLen: ����Դͨ�����ͷ����ݳ���
 �� �� ֵ  : VOS_ERR/VOS_OK
 ���ú���  :
 ��������  :
 �޸���ʷ  :
   1.��    ��  : 2012��8��8��
     ��    ��  : zhuli
     �޸�����  : Creat Function
**************************************************************************** */
VOS_UINT32 SCM_RlsSrcRDAll(SOCP_CODER_SRC_ENUM_U32 enChanlID, VOS_UINT_PTR *pDataPhyAddr, VOS_UINT32 *pulDataLen)
{
    SOCP_BUFFER_RW_STRU                 stSrcChanRD;
    SOCP_RD_DATA_STRU                  *pstRDData;
    VOS_UINT32                          ulRDNum;
    VOS_UINT32                          ulRDTotalNum= 0;
    VOS_UINT32                          ulTotalLen  = 0;
    VOS_UINT32                          ulFirstAddr = 0;
    VOS_UINT32                          ulCfgNum;
    VOS_UINT32                          i;
    SCM_CHANNEL_ENUM_U32                enLteMark   = SCM_CHANNEL_BUTT;/*��־ͨ������*/
    VOS_UINT32                          ulen = 0;

    if((SOCP_CODER_SRC_LOM_CNF1 == enChanlID)||(SOCP_CODER_SRC_LOM_CNF2 == enChanlID)
        ||(SOCP_CODER_SRC_LOM_IND1 == enChanlID)||(SOCP_CODER_SRC_LOM_IND2 == enChanlID)
        ||(SOCP_CODER_SRC_LOM_IND3 == enChanlID))
    {
          enLteMark = SCM_LTE_CHANNEL;
    }
    VOS_MemSet(&stSrcChanRD, 0, sizeof(stSrcChanRD));

    if ( VOS_OK != SCM_FindChannelCfg(enChanlID,
                                        SCM_CODER_SRC_NUM,
                                        (SCM_CHANNEL_CFG_HEAD *)g_astSCMCoderSrcCfg,
                                        sizeof(SCM_CODER_SRC_CFG_STRU),
                                        &ulCfgNum))/* �ж�ͨ������ */
    {
        SCM_CODER_SRC_ERR("SCM_RlsSrcRDAll: Find Channel Error", enChanlID, 0);/* ��¼Log */
        return VOS_ERR;/* ����ʧ�� */
    }

    SCM_CODER_SRC_LOG("SCM_RlsSrcRDAll: Release Channel Data", enChanlID, 0);

    if (VOS_OK != mdrv_socp_get_rd_buffer(enChanlID, &stSrcChanRD))
    {
        SCM_CODER_SRC_ERR("SCM_RlsSrcRDAll: Get RD Info Error", enChanlID, 0);/* ��¼Log */
        return VOS_ERR;/* ����ʧ�� */
    }

    if (VOS_NULL_PTR == stSrcChanRD.pBuffer)        /* �������� */
    {
        SCM_CODER_SRC_ERR("SCM_RlsSrcRDAll: RD Info is Error", enChanlID, (VOS_UINT32)stSrcChanRD.pBuffer);/* ��¼Log */
        return VOS_ERR;/* ����ʧ�� */
    }

    if ((0 == stSrcChanRD.u32Size) && (0 == stSrcChanRD.u32RbSize)) /* ��������Ҫ�ͷ� */
    {
        *pDataPhyAddr   = 0;
        *pulDataLen     = 0;

        return VOS_OK;/* ���سɹ� */
    }

    /* RD������ȡ�Ƿ� */
    if(((stSrcChanRD.u32Size + stSrcChanRD.u32RbSize) / sizeof(SOCP_RD_DATA_STRU)) > SCM_CODE_SRC_RD_NUM)
    {
        SCM_CODER_SRC_ERR("SCM_RlsSrcRDFirst: Get RD Data Error", enChanlID, 0);/* ��¼Log */
        SCM_CODER_SRC_ERR("SCM_RlsSrcRDFirst: Get RD PTR Error", stSrcChanRD.u32Size, stSrcChanRD.u32RbSize);/* ��¼Log */

        return VOS_ERR;/* ����ʧ�� */
    }

    /* ����RD���� */
    ulRDNum = stSrcChanRD.u32Size / sizeof(SOCP_RD_DATA_STRU);

    if (0 != ulRDNum)
    {
        stSrcChanRD.pBuffer = (VOS_UINT8*)VOS_UncacheMemPhyToVirt(stSrcChanRD.pBuffer,
                                    g_astSCMCoderSrcCfg[ulCfgNum].pucRDPHY,
                                    g_astSCMCoderSrcCfg[ulCfgNum].pucRDBuf,
                                    g_astSCMCoderSrcCfg[ulCfgNum].ulRDBufLen);

        ulRDTotalNum = ulRDNum;

        /* ��ȡRD���ݵĵ�ַ�ͳ��� */
        pstRDData   = (SOCP_RD_DATA_STRU*)stSrcChanRD.pBuffer;

        /* ��¼��ǰ��һ���ͷŵ����ݵ�ַ,������Ҫ���ظ��ϲ� */
        ulFirstAddr = pstRDData->ulDataAddr;

        for (i = 0; i < ulRDNum; i++)
        {
            ulen    = 0;

            /* �ۼ�RD���ݳ��� */
            if(SCM_LTE_CHANNEL == enLteMark)
            {
                ulen = ALIGN_DDR_WITH_4BYTE(pstRDData->usMsgLen);
            }
            else
            {
                ulen = pstRDData->usMsgLen;
            }
            ulTotalLen += ulen;
            pstRDData++;
        }
    }

    /* ����ؾ�RD���� */
    ulRDNum = stSrcChanRD.u32RbSize / sizeof(SOCP_RD_DATA_STRU);

    if (0 != ulRDNum)
    {
        stSrcChanRD.pRbBuffer = (VOS_UINT8*)VOS_UncacheMemPhyToVirt(stSrcChanRD.pRbBuffer,
                                    g_astSCMCoderSrcCfg[ulCfgNum].pucRDPHY,
                                    g_astSCMCoderSrcCfg[ulCfgNum].pucRDBuf,
                                    g_astSCMCoderSrcCfg[ulCfgNum].ulRDBufLen);

        ulRDTotalNum += ulRDNum;

        /* ��ȡRD���ݻؾ�ĵ�ַ�ͳ��� */
        pstRDData   = (SOCP_RD_DATA_STRU*)stSrcChanRD.pRbBuffer;

        if (0 == ulFirstAddr)/* ��¼��ǰ��һ���ͷŵ����ݵ�ַ,������Ҫ���ظ��ϲ� */
        {
            ulFirstAddr = pstRDData->ulDataAddr;
        }

        for (i = 0; i < ulRDNum; i++)
        {
            ulen    = 0;

            /* �ۼ�RD���ݳ��� */
            if(SCM_LTE_CHANNEL == enLteMark)
            {
                ulen = ALIGN_DDR_WITH_4BYTE((pstRDData->usMsgLen));
            }
            else
            {
                ulen = pstRDData->usMsgLen;
            }
            ulTotalLen += ulen;

            pstRDData++;
        }
    }

    if (VOS_OK != mdrv_socp_read_rd_done(enChanlID, (stSrcChanRD.u32Size+stSrcChanRD.u32RbSize)))
    {
        SCM_CODER_SRC_ERR("SCM_RlsSrcRDAll: Write RD Done is Error", enChanlID, (stSrcChanRD.u32Size+stSrcChanRD.u32RbSize));/* ��¼Log */
        return VOS_ERR;/* ���ش��� */
    }

    /* ��ȡ��RD���ֵ��¼��ȫ�ֱ����� */
    if (ulRDTotalNum > g_stSCMInfoData.aulRDUsedMax[ulCfgNum])
    {
        g_stSCMInfoData.aulRDUsedMax[ulCfgNum] = ulRDTotalNum;
    }

    *pDataPhyAddr   = ulFirstAddr;

    *pulDataLen     = ulTotalLen;

    return VOS_OK;/* ���ؽ��OK */
}

/* ****************************************************************************
 �� �� ��  : SCM_RlsSrcRDFirst
 ��������  : ��ȡ����Դͨ����RD��һ������
 �������  : enChanlID:ͨ��ID
 �������  : pulDataPhyAddr:���ͷ�����ʵ��ֵַ
             pulDataLen: ���ͷ����ݳ���
 �� �� ֵ  : VOS_ERR/VOS_OK
 ���ú���  :
 ��������  :
 �޸���ʷ  :
   1.��    ��  : 2012��8��8��
     ��    ��  : zhuli
     �޸�����  : Creat Function
**************************************************************************** */
VOS_UINT32 SCM_RlsSrcRDFirst(SOCP_CODER_SRC_ENUM_U32 enChanlID,
                                    VOS_UINT_PTR *pDataPhyAddr,
                                    VOS_UINT32   *pulDataLen)
{
    SOCP_BUFFER_RW_STRU                 stSrcChanRD;
    SOCP_RD_DATA_STRU                  *pstRDData;
    VOS_UINT32                          ulRDTotalNum = 0;
    VOS_UINT32                          ulCfgNum;
    VOS_UINT32                          ulResult;

    VOS_MemSet(&stSrcChanRD, 0, sizeof(stSrcChanRD));

    if (VOS_OK != SCM_FindChannelCfg(enChanlID, SCM_CODER_SRC_NUM,
                                (SCM_CHANNEL_CFG_HEAD *)g_astSCMCoderSrcCfg,
                                sizeof(SCM_CODER_SRC_CFG_STRU),
                                &ulCfgNum))/* �ж�ͨ������ */
    {
        SCM_CODER_SRC_ERR("SCM_RlsSrcRDFirst: Find Channel Error", enChanlID, 0);/* ��¼Log */
        return VOS_ERR;/* ����ʧ�� */
    }

    SCM_CODER_SRC_LOG("SCM_RlsSrcRDFirst: Release Channel Data", enChanlID, 0);

    if (VOS_OK != mdrv_socp_get_rd_buffer(enChanlID, &stSrcChanRD))
    {
        SCM_CODER_SRC_ERR("SCM_RlsSrcRDFirst: Get RD Buffer Error", enChanlID, 0);/* ��¼Log */
        return VOS_ERR;/* ����ʧ�� */
    }

    if (VOS_NULL_PTR == stSrcChanRD.pBuffer)        /* �������� */
    {
        SCM_CODER_SRC_ERR("SCM_RlsSrcRDFirst: RD Buffer is  Error", enChanlID, 0);/* ��¼Log */
        return VOS_ERR;/* ����ʧ�� */
    }

    /* RD������ȡ�Ƿ� */
    if(((stSrcChanRD.u32Size + stSrcChanRD.u32RbSize) / sizeof(SOCP_RD_DATA_STRU)) > SCM_CODE_SRC_RD_NUM)
    {
        SCM_CODER_SRC_ERR("SCM_RlsSrcRDFirst: Get RD Data Error", enChanlID, 0);/* ��¼Log */
        SCM_CODER_SRC_ERR("SCM_RlsSrcRDFirst: Get RD PTR Error", stSrcChanRD.u32Size, stSrcChanRD.u32RbSize);/* ��¼Log */

        return VOS_ERR;/* ����ʧ�� */
    }

    if (0 != stSrcChanRD.u32Size)      /* RD������ */
    {
        stSrcChanRD.pBuffer = (VOS_UINT8*)VOS_UncacheMemPhyToVirt(stSrcChanRD.pBuffer,
                                    g_astSCMCoderSrcCfg[ulCfgNum].pucRDPHY,
                                    g_astSCMCoderSrcCfg[ulCfgNum].pucRDBuf,
                                    g_astSCMCoderSrcCfg[ulCfgNum].ulRDBufLen);

        /* ��ȡRD��һ�������׵�ַ�ͳ��� */
        pstRDData = (SOCP_RD_DATA_STRU *)stSrcChanRD.pBuffer;

        *pDataPhyAddr   = (VOS_UINT_PTR)(pstRDData->ulDataAddr);
        *pulDataLen     = (VOS_UINT32)pstRDData->usMsgLen;

        ulResult = mdrv_socp_read_rd_done(enChanlID, sizeof(SOCP_RD_DATA_STRU));  /* �ͷ�һ������ */
    }
    else if (0 != stSrcChanRD.u32RbSize)/* RD�ؾ������� */
    {
        stSrcChanRD.pRbBuffer = (VOS_UINT8*)VOS_UncacheMemPhyToVirt(stSrcChanRD.pRbBuffer,
                                    g_astSCMCoderSrcCfg[ulCfgNum].pucRDPHY,
                                    g_astSCMCoderSrcCfg[ulCfgNum].pucRDBuf,
                                    g_astSCMCoderSrcCfg[ulCfgNum].ulRDBufLen);

        /* ��ȡ�ؾ�RD��һ�������׵�ַ�ͳ��� */
        pstRDData = (SOCP_RD_DATA_STRU *)stSrcChanRD.pRbBuffer;

        *pDataPhyAddr   = (VOS_UINT_PTR)(pstRDData->ulDataAddr);
        *pulDataLen     = (VOS_UINT32)pstRDData->usMsgLen;

        ulResult = mdrv_socp_read_rd_done(enChanlID, sizeof(SOCP_RD_DATA_STRU));  /* �ͷ�һ������ */
    }
    else         /* ��������Ҫ�ͷ� */
    {
        *pDataPhyAddr   = 0;
        *pulDataLen     = 0;
        ulResult        = VOS_OK;
    }

    if (VOS_OK != ulResult)
    {
        SCM_CODER_SRC_ERR("SCM_RlsSrcRDFirst: Read RD Done is  Error", enChanlID, 0);/* ��¼Log */
        return VOS_ERR;/* ���ش��� */
    }

    /* ����RD�ܴ�С����¼ȫ�ֱ����� */
    ulRDTotalNum = (stSrcChanRD.u32Size + stSrcChanRD.u32RbSize) / sizeof(SOCP_RD_DATA_STRU);

    if (ulRDTotalNum > g_stSCMInfoData.aulRDUsedMax[ulCfgNum])
    {
        g_stSCMInfoData.aulRDUsedMax[ulCfgNum] = ulRDTotalNum;
    }

    return VOS_OK;/* ���سɹ� */
}


/* ****************************************************************************
 �� �� ��  : SCM_GetBDFreeNum
 ��������  : ��ѯBDʣ��ռ�
 �������  : enChanlID: ͨ��ID
 �������  : pulBDNum:BDʣ�����
 �� �� ֵ  : VOS_ERR/VOS_OK
 ���ú���  :
 ��������  :
 �޸���ʷ  :
   1.��    ��  : 2012��8��8��
     ��    ��  : zhuli
     �޸�����  : Creat Function
**************************************************************************** */
VOS_UINT32 SCM_GetBDFreeNum(SOCP_CODER_SRC_ENUM_U32 enChanlID, VOS_UINT32 *pulBDNum)
{
    SOCP_BUFFER_RW_STRU                 stRwBuf;
    VOS_UINT32                          ulBDNum;
    VOS_UINT32                          ulBDTotal;
    VOS_UINT32                          ulCfgNum;

    /* �ж�ָ�����ȷ */
    if (VOS_NULL_PTR == pulBDNum)
    {
        return VOS_ERR;
    }

    if (VOS_OK != SCM_FindChannelCfg(enChanlID, SCM_CODER_SRC_NUM,
                                (SCM_CHANNEL_CFG_HEAD *)g_astSCMCoderSrcCfg, sizeof(SCM_CODER_SRC_CFG_STRU), &ulCfgNum))/* �ж�ͨ������ */
    {
        SCM_CODER_SRC_ERR("SCM_GetBDFreeNum: Find Channel Error", enChanlID, 0);/* ��¼Log */
        return VOS_ERR;/* ����ʧ�� */
    }

    SCM_CODER_SRC_LOG("SCM_GetBDFreeNum: Get BD Number", enChanlID, 0);

    if (VOS_OK != mdrv_socp_get_write_buff(enChanlID, &stRwBuf))
    {
        SCM_CODER_SRC_ERR("SCM_GetBDFreeNum: Get Write Buffer Error", enChanlID, 0);/* ��¼Log */
        return VOS_ERR;/* ����ʧ�� */
    }

    /* ����BD��ֵ */
    ulBDNum = (stRwBuf.u32Size + stRwBuf.u32RbSize) / sizeof(SOCP_BD_DATA_STRU);

    /* BD������ȡ�Ƿ� */
    if(ulBDNum > SCM_CODE_SRC_BD_NUM)
    {
        SCM_CODER_SRC_ERR("SCM_GetBDFreeNum: Get BD Data Error", enChanlID, 0);/* ��¼Log */
        SCM_CODER_SRC_ERR("SCM_GetBDFreeNum: Get BD PTR Error", stRwBuf.u32Size, stRwBuf.u32RbSize);/* ��¼Log */

        return VOS_ERR;/* ����ʧ�� */
    }

    /* ����Ҫ����һ������BD����֤ͨ�����ᱻд�����쳣 */
    if (ulBDNum <= 1)
    {
        *pulBDNum = 0;
    }
    else
    {
        *pulBDNum = (ulBDNum - 1);
    }

    /* ����ͨ��ȫ��BD�ĸ��� */
    ulBDTotal = g_astSCMCoderSrcCfg[ulCfgNum].ulSrcBufLen / sizeof(SOCP_BD_DATA_STRU);

    /* ��ȫ�ֱ����бȽϼ�¼���ֵ */
    if ((ulBDTotal- ulBDNum) > g_stSCMInfoData.aulBDUsedMax[ulCfgNum])
    {
        g_stSCMInfoData.aulBDUsedMax[ulCfgNum] = (ulBDTotal- ulBDNum);
    }

    return VOS_OK;
}

/* ****************************************************************************
 �� �� ��  : SCM_SendCoderSrc
 ��������  : ͨ��SOCP�ı���Դͨ����������
 �������  : enChanlID: ͨ��ID
             pucSendDataPhy:��������ʵ��ַ
             ulSendLen: �������ݳ���
 �������  : ��
 �� �� ֵ  : VOS_ERR/VOS_OK
 ���ú���  :
 ��������  :
 �޸���ʷ  :
   1.��    ��  : 2012��8��8��
     ��    ��  : zhuli
     �޸�����  : Creat Function
**************************************************************************** */
VOS_UINT32 SCM_SendCoderSrc(SOCP_CODER_SRC_ENUM_U32 enChanlID, VOS_UINT8 *pucSendDataPhy, VOS_UINT32 ulSendLen)
{
    SOCP_BUFFER_RW_STRU                 stRwBuf;
    VOS_UINT32                          ulBDNum;
    VOS_UINT32                          ulCfgNum;
    SOCP_BD_DATA_STRU                   stBDData;

    /* �ж�����ָ��ͳ��ȵ���ȷ�����Ȳ��ܴ���16K */
    if ((VOS_NULL_PTR == pucSendDataPhy)
        ||(0 == ulSendLen)
        ||(SCM_CODER_SRC_MAX_LEN < ulSendLen))
    {
        return VOS_ERR;
    }

    if (VOS_OK != SCM_FindChannelCfg(enChanlID, SCM_CODER_SRC_NUM,
                                     (SCM_CHANNEL_CFG_HEAD *)g_astSCMCoderSrcCfg,
                                     sizeof(SCM_CODER_SRC_CFG_STRU), &ulCfgNum))/* �ж�ͨ������ */
    {
        SCM_CODER_SRC_ERR("SCM_SendCoderSrc: Find Channel Error", enChanlID, 0);/* ��¼Log */
        return VOS_ERR;/* ����ʧ�� */
    }

    SCM_CODER_SRC_LOG("SCM_SendCoderSrc: Get BD Number", enChanlID, 0);

    if (VOS_OK != mdrv_socp_get_write_buff(g_astSCMCoderSrcCfg[ulCfgNum].enChannelID, &stRwBuf))
    {
        SCM_CODER_SRC_ERR("SCM_SendCoderSrc: Get Write Buffer Error", enChanlID, 0);/* ��¼Log */
        return VOS_ERR;/* ����ʧ�� */
    }

    /* �������BD��ֵ */
    ulBDNum = (stRwBuf.u32Size + stRwBuf.u32RbSize) / sizeof(SOCP_BD_DATA_STRU);

    /* �ж��Ƿ��пռ� */
    if (1 >= ulBDNum)
    {
        SCM_CODER_SRC_ERR("SCM_SendCoderSrc: Buffer is Full", enChanlID, ulBDNum);/* ��¼Log */
        return VOS_ERR;
    }

    stRwBuf.pBuffer = (VOS_UINT8*)VOS_UncacheMemPhyToVirt(stRwBuf.pBuffer,
                                    g_astSCMCoderSrcCfg[ulCfgNum].pucSrcPHY,
                                    g_astSCMCoderSrcCfg[ulCfgNum].pucSrcBuf,
                                    g_astSCMCoderSrcCfg[ulCfgNum].ulSrcBufLen);

    stBDData.ulDataAddr = (VOS_UINT32)pucSendDataPhy;
    stBDData.usMsgLen   = (VOS_UINT16)ulSendLen;
    stBDData.enDataType = SOCP_BD_DATA;

    VOS_MemCpy(stRwBuf.pBuffer, &stBDData, sizeof(stBDData));    /* �������ݵ�ָ���ĵ�ַ */

    VOS_FlushCpuWriteBuf();

    if (VOS_OK != mdrv_socp_write_done(enChanlID, sizeof(stBDData)))   /* ��ǰ����д����� */
    {
        SCM_CODER_SRC_ERR("SCM_SendCoderSrc: Write Buffer is Error", enChanlID, 0);/* ��¼Log */
        return VOS_ERR;/* ����ʧ�� */
    }

    return VOS_OK;
}

#ifdef SCM_ACORE
/* ****************************************************************************
 �� �� ��  : SCM_CoderDstChanMemAlloc
 ��������  : ����Ŀ��ͨ��memory����
 �������  : ��
 �������  : ��
 �� �� ֵ  : VOS_VOID
 ���ú���  :
 ��������  :
 �޸���ʷ  :
   1.��    ��  : 2013��8��20��
     ��    ��  : zhuli
     �޸�����  : Creat Function
**************************************************************************** */
VOS_UINT32 SCM_CoderDstChanMemAlloc(VOS_VOID)
{
    VOS_UINT32                          i = 0;
    VOS_UINT_PTR                        ulPHYAddr;

    for (i = 0; i < SCM_CODER_DST_NUM; i++)
    {
        /* �������Ŀ�Ŀռ� */
        g_astSCMCoderDstCfg[i].pucBuf = (VOS_UINT8*)VOS_UnCacheMemAlloc(g_astSCMCoderDstCfg[i].ulBufLen, &ulPHYAddr);

        /* ����ռ���� */
        if (VOS_NULL_PTR == g_astSCMCoderDstCfg[i].pucBuf)
        {
            /* ��¼ͨ����ʼ�����Ϊ�ڴ������쳣 */
            g_astSCMCoderDstCfg[i].enInitState = SCM_CHANNEL_MEM_FAIL;

            return VOS_ERR;/* ���ش��� */
        }

        g_astSCMCoderDstCfg[i].pucBufPHY = (VOS_UINT8*)ulPHYAddr;
    }

    return VOS_OK;
}

/* ****************************************************************************
 �� �� ��  : SCM_CoderDstChanMemInit
 ��������  : ����Ŀ��ͨ��memory��ʼ��
 �������  : ��
 �������  : ��
 �� �� ֵ  : VOS_VOID
 ���ú���  :
 ��������  :
 �޸���ʷ  :
   1.��    ��  : 2013��8��20��
     ��    ��  : zhuli
     �޸�����  : Creat Function
**************************************************************************** */
VOS_UINT32 SCM_CoderDstChanMemInit(VOS_VOID)
{
#if (FEATURE_SOCP_SYNC_ENABLE == FEATURE_ON)
    VOS_UINT_PTR                        ulPHYAddr;
    VOS_UINT32                          ulBufLen;

    /* ���ӳ�д���µĴ��� */
    if ((SOCP_ENC_DEST_LOG_DELAY_ON != g_stEncDstBufLogConfig.logOnFlag)
        || (VOS_NULL == g_stEncDstBufLogConfig.ulPhyBufferAddr))
    {
        return SCM_CoderDstChanMemAlloc();
    }

    /* INDͨ����Ҫ���ӳ�д�룬BUFFER��С50M(Ĭ��ֵ)��ˮ������Ϊˮ������Ϊ75%���ڴ��ڳ�ʼ���Ѿ������ */
    g_astSCMCoderDstCfg[SCM_CODER_DST_IND_CHANNEL].pucBufPHY    = (VOS_UINT8*)(g_stEncDstBufLogConfig.ulPhyBufferAddr);
    g_astSCMCoderDstCfg[SCM_CODER_DST_IND_CHANNEL].ulBufLen     = g_stEncDstBufLogConfig.BufferSize;
    g_astSCMCoderDstCfg[SCM_CODER_DST_IND_CHANNEL].pucBuf       = g_stEncDstBufLogConfig.pVirBuffer;
    /* ��Ϊ�ɰ汾��SOCP�ĵ�λ��KB�µİ汾��B,Ϊ�˼���SOCP�����г���1024,����������Ҫ����1024 */
    g_astSCMCoderDstCfg[SCM_CODER_DST_IND_CHANNEL].ulThreshold  = ((g_stEncDstBufLogConfig.BufferSize>>2)*3)>>10;

    /* CNFͨ������Ҫ���ӳ�д�� */
    ulBufLen = g_astSCMCoderDstCfg[SCM_CODER_DST_CNF_CHANNEL].ulBufLen;

    g_astSCMCoderDstCfg[SCM_CODER_DST_CNF_CHANNEL].pucBuf = (VOS_UINT8*)VOS_UnCacheMemAlloc(ulBufLen, &ulPHYAddr);

    /* ����ռ���� */
    if (VOS_NULL_PTR == g_astSCMCoderDstCfg[SCM_CODER_DST_CNF_CHANNEL].pucBuf)
    {
        /* ��¼ͨ����ʼ�����Ϊ�ڴ������쳣 */
        g_astSCMCoderDstCfg[SCM_CODER_DST_CNF_CHANNEL].enInitState = SCM_CHANNEL_MEM_FAIL;

        return VOS_ERR;
    }

    g_astSCMCoderDstCfg[SCM_CODER_DST_CNF_CHANNEL].pucBufPHY = (VOS_UINT8*)ulPHYAddr;

    return VOS_OK;
#else
    return SCM_CoderDstChanMemAlloc();
#endif
}

/* ****************************************************************************
 �� �� ��  : SCM_RlsDestBuf
 ��������  : ����Ŀ��ͨ���������ͷ�
 �������  : ulChanlID Ŀ��ͨ��ID
             ulReadSize ���ݴ�С
 �������  : ��
 �� �� ֵ  : VOS_ERR/VOS_OK
 ���ú���  :
 ��������  :
 �޸���ʷ  :
   1.��    ��  : 2012��8��8��
     ��    ��  : zhuli
     �޸�����  : Creat Function
**************************************************************************** */
VOS_UINT32 SCM_RlsDestBuf(VOS_UINT32 ulChanlID, VOS_UINT32 ulReadSize)
{
    VOS_UINT32                          ulDataLen;
    SOCP_BUFFER_RW_STRU                 stBuffer;

    if(0 == ulReadSize) /*�ͷ�ͨ����������*/
    {
        if (VOS_OK != BSP_SOCP_GetReadBuff(ulChanlID, &stBuffer))
        {
            SCM_CODER_DST_ERR("SCM_RlsDestBuf: Get Read Buffer is Error", ulChanlID, 0);/* ��¼Log */
            return VOS_ERR;
        }

        ulDataLen = stBuffer.u32Size + stBuffer.u32RbSize;

        SCM_CODER_DST_LOG("SCM_RlsDestBuf: Relese All Data", ulChanlID, ulDataLen);
    }
    else
    {
        /* ��¼����ʱ�� */
        SCM_CODER_DST_LOG("SCM_RlsDestBuf: Relese Read Data", ulChanlID, ulReadSize);

        ulDataLen = ulReadSize;
    }

    if (VOS_OK != BSP_SOCP_ReadDataDone(ulChanlID, ulDataLen))
    {
        SCM_CODER_DST_ERR("SCM_RlsDestBuf: Read Data Done is Error", ulChanlID, ulDataLen);/* ��¼Log */

        return VOS_ERR;
    }

    return VOS_OK;
}

/* ****************************************************************************
 �� �� ��  : SCM_CoderDestReadCB
 ��������  : �������Ŀ��ͨ��������
 �������  : ulDstChID Ŀ��ͨ��ID
 �������  : ��
 �� �� ֵ  : ��
 ���ú���  :
 ��������  :
 �޸���ʷ  :
   1.��    ��  : 2012��8��8��
     ��    ��  : zhuli
     �޸�����  : Creat Function
**************************************************************************** */
VOS_VOID SCM_CoderDestReadCB(VOS_UINT32 ulDstChID)
{
    VOS_UINT32                          ulChType;
    VOS_UINT32                          ulCfgNum;
    SOCP_BUFFER_RW_STRU                 stBuffer;
    VOS_UINT32                          ulTimerIn;
    VOS_UINT32                          ulTimerOut;
    VOS_UINT_PTR                        ulVirtAddr;

    ulChType = SOCP_REAL_CHAN_TYPE(ulDstChID);

    if (SOCP_CODER_DEST_CHAN != ulChType)
    {
        SCM_CODER_DST_ERR("SCM_CoderDestReadCB: Channel Type is Error", ulDstChID, ulChType);/* ��¼Log */
        return;
    }

    if (VOS_OK != BSP_SOCP_GetReadBuff(ulDstChID, &stBuffer))
    {
        SCM_CODER_DST_ERR("SCM_CoderDestReadCB: Get Read Buffer is Error", ulDstChID, 0);/* ��¼Log */
        return;
    }

    if (VOS_OK != SCM_FindChannelCfg(ulDstChID, SCM_CODER_DST_NUM,
                                (SCM_CHANNEL_CFG_HEAD *)g_astSCMCoderDstCfg, sizeof(SCM_CODER_DEST_CFG_STRU), &ulCfgNum))
    {
        BSP_SOCP_ReadDataDone(ulDstChID, stBuffer.u32Size + stBuffer.u32RbSize);  /* ������� */

        SCM_CODER_DST_ERR("SCM_CoderDestReadCB: Find Channel is Error", ulDstChID, 0);/* ��¼Log */

        return;
    }

     /*lint -save -e539*/
     if((0 == (stBuffer.u32Size + stBuffer.u32RbSize))||(VOS_NULL_PTR == stBuffer.pBuffer))
     /*lint -restore*/
     {
         BSP_SOCP_ReadDataDone(ulDstChID, stBuffer.u32Size + stBuffer.u32RbSize);  /* ������� */
         SCM_CODER_DST_ERR("SCM_CoderDestReadCB: Get RD error ", ulDstChID,0);/* ��¼Log */
         return;
     }
    if(0 == stBuffer.u32Size)
    {
        return;
    }
     /*�������Ϊ��*/
    if(VOS_NULL_PTR == g_astSCMCoderDstCfg[ulCfgNum].pfunc)
     {
         BSP_SOCP_ReadDataDone(ulDstChID, stBuffer.u32Size + stBuffer.u32RbSize);  /* ������� */
         SCM_CODER_DST_ERR("SCM_CoderDestReadCB: Channel Callback Fucn is NULL", ulDstChID,0);/* ��¼Log */
         return;
     }

     /* �������� */
     /*lint -save -e539*/
     ulVirtAddr = VOS_UncacheMemPhyToVirt(stBuffer.pBuffer,
                                 g_astSCMCoderDstCfg[ulCfgNum].pucBufPHY,
                                 g_astSCMCoderDstCfg[ulCfgNum].pucBuf,
                                 g_astSCMCoderDstCfg[ulCfgNum].ulBufLen);
     /*lint -restore*/
     if(VOS_NULL_PTR == ulVirtAddr)
     {
         BSP_SOCP_ReadDataDone(ulDstChID, stBuffer.u32Size + stBuffer.u32RbSize);  /* ������� */
         SCM_CODER_DST_ERR("SCM_CoderDestReadCB:  stBuffer.pBuffer == VOS_NULL", ulDstChID, 0);/* ��¼Log */
         return;
     }
     /* lint -e539  */
     ulTimerIn = OM_GetSlice();
     /* lint +e539  */
     g_astSCMCoderDstCfg[ulCfgNum].pfunc(ulDstChID, (VOS_UINT8*)ulVirtAddr, (VOS_UINT8*)stBuffer.pBuffer,(VOS_UINT32)stBuffer.u32Size);
     ulTimerOut = OM_GetSlice();
     /* ��¼�ص�������ִ��ʱ�� */
     SCM_CODER_DST_LOG("SCM_CoderDestReadCB: Call channel Func Proc time", ulDstChID, (ulTimerIn-ulTimerOut));
     return;
}

/*****************************************************************************
 �� �� ��  : SCM_CoderDstChannelInit
 ��������  : ��ACPU�ı���Ŀ��ͨ������������
 �������  : ��
 �������  : ��
 �� �� ֵ  : VOS_ERR/VOS_OK
 ���ú���  :
 ��������  :
 �޸���ʷ  :
   1.��    ��  : 2012��8��8��
     ��    ��  : zhuli
     �޸�����  : Creat Function
*****************************************************************************/
VOS_UINT32 SCM_CoderDstChannelInit(VOS_VOID)
{
    VOS_UINT32                          i;
    SOCP_CODER_DEST_CHAN_S              stChannel;

    for (i = 0; i < SCM_CODER_DST_NUM; i++)
    {
        if (0 == i)
        {
            stChannel.u32EncDstThrh = SCM_CODER_DST_GTHRESHOLD;
        }
        else
        {
            /* �������Ŀ��ͨ��1��ֵ���� */
            stChannel.u32EncDstThrh = 2 * SCM_CODER_DST_GTHRESHOLD;
        }

        stChannel.sCoderSetDstBuf.pucOutputStart    = g_astSCMCoderDstCfg[i].pucBufPHY;

        stChannel.sCoderSetDstBuf.pucOutputEnd
            = (g_astSCMCoderDstCfg[i].pucBufPHY + g_astSCMCoderDstCfg[i].ulBufLen)-1;

        stChannel.sCoderSetDstBuf.u32Threshold      = g_astSCMCoderDstCfg[i].ulThreshold;

        if (VOS_OK != mdrv_socp_coder_set_dest_chan_attr(g_astSCMCoderDstCfg[i].enChannelID, &stChannel))
        {
            g_astSCMCoderDstCfg[i].enInitState = SCM_CHANNEL_CFG_FAIL;  /* ��¼ͨ����ʼ�����ô��� */

            return VOS_ERR;/* ����ʧ�� */
        }

        g_astSCMCoderDstCfg[i].enInitState = SCM_CHANNEL_INIT_SUCC;     /* ��¼ͨ����ʼ�����ô��� */

        BSP_SOCP_RegisterReadCB(g_astSCMCoderDstCfg[i].enChannelID, (socp_read_cb)SCM_CoderDestReadCB);
    }

    return VOS_OK;
}


/*****************************************************************************
 �� �� ��  : SCM_RegCoderDestProc
 ��������  : ACPU�ı���Ŀ��ͨ���Ļص�����ע��ӿ�
 �������  : enChanlID: ����Ŀ��ͨ��ID
             func: �ص�����ָ��
 �������  :
 �� �� ֵ  : VOS_ERR/VOS_OK
 ���ú���  :
 ��������  :
 �޸���ʷ  :
   1.��    ��  : 2012��8��8��
     ��    ��  : zhuli
     �޸�����  : Creat Function
*****************************************************************************/

VOS_UINT32 SCM_RegCoderDestProc(SOCP_CODER_DST_ENUM_U32 enChanlID, SCM_CODERDESTFUCN func)
{
    VOS_UINT32                          ulCgfNum;

    if (VOS_OK != SCM_FindChannelCfg(enChanlID,
                                SCM_CODER_DST_NUM,
                                (SCM_CHANNEL_CFG_HEAD *)g_astSCMCoderDstCfg,
                                sizeof(SCM_CODER_DEST_CFG_STRU),
                                &ulCgfNum))
    {
        SCM_CODER_DST_ERR("SCM_RegCoderDestProc: Find Channeld is Error", enChanlID, (VOS_UINT32)func);

        return VOS_ERR;/* ����ʧ�� */
    }

    g_astSCMCoderDstCfg[ulCgfNum].pfunc = func;

    return VOS_OK;/* ���سɹ� */
}

/* ****************************************************************************
 �� �� ��  : SCM_RegDecoderDestProc
 ��������  : ACPU�Ľ���Ŀ��ͨ���Ļص�����ע��ӿ�
 �������  : enChanlID: ����Ŀ��ͨ��ID
             func: �ص�����ָ��
 �������  :
 �� �� ֵ  : VOS_ERR/VOS_OK
 ���ú���  :
 ��������  :
 �޸���ʷ  :
   1.��    ��  : 2012��8��8��
     ��    ��  : zhuli
     �޸�����  : Creat Function
**************************************************************************** */

VOS_UINT32 SCM_RegDecoderDestProc(SOCP_DECODER_DST_ENUM_U32 enChanlID, SCM_DECODERDESTFUCN func)
{
    VOS_UINT32                          ulOffset;

    if (enChanlID >= SOCP_DECODER_DST_BUTT)
    {
        return VOS_ERR;
    }

    if (VOS_NULL_PTR == func)
    {
        return VOS_ERR;
    }

    if (SOCP_DECODER_DST_LOM == enChanlID)
    {
        ulOffset = SOCP_DECODER_DST_CB_TL_OM;
    }
    else if (SOCP_DECODER_DST_GUOM == enChanlID)
    {
        ulOffset = SOCP_DECODER_DST_CB_GU_OM;
    }
    else if (SOCP_DECODER_CBT == enChanlID)
    {
        ulOffset = SOCP_DECODER_DST_CB_GU_CBT;
    }
    else
    {
        return VOS_ERR;
    }

    g_astSCMDecoderCbFunc[ulOffset] = func;

    return VOS_OK;
}

#if (RAT_MODE != RAT_GU)                /* Mutil Mode */
#if 0
/* ****************************************************************************
 �� �� ��  : SCM_DecoderDestReadCB
 ��������  : �������Ŀ��ͨ��������
 �������  : ulDstChID Ŀ��ͨ��ID
 �������  : ��
 �� �� ֵ  : ��
 ���ú���  :
 ��������  :
 �޸���ʷ  :
   1.��    ��  : 2012��8��8��
     ��    ��  : zhuli
     �޸�����  : Creat Function
**************************************************************************** */

VOS_VOID SCM_DecoderDestReadCB(VOS_UINT32 ulDstChID)
{
    VOS_UINT32                          ulChType;
    VOS_UINT32                          ulCfgNum;
    VOS_UINT32                          ulTimerIn;
    VOS_UINT32                          ulTimerOut;
    SOCP_BUFFER_RW_STRU                 stBuffer;
    VOS_UINT_PTR                        ulVirtAdd;
    VOS_UINT_PTR                        ulRBVirtaddr;

    ulChType = SOCP_REAL_CHAN_TYPE(ulDstChID);

    if (SOCP_DECODER_DEST_CHAN != ulChType)
    {
        SCM_DECODER_DST_ERR("SCM_DecoderDestReadCB: Channel Type is Error", ulDstChID, ulChType);/* ��¼Log */
        return;
    }

    if (VOS_OK != BSP_SOCP_GetReadBuff(ulDstChID, &stBuffer))
    {
        SCM_DECODER_DST_ERR("SCM_DecoderDestReadCB: Get Read Buffer is Error", ulDstChID, 0);/* ��¼Log */
        return;
    }

    if (VOS_OK != SCM_FindChannelCfg(ulDstChID, SCM_DECODER_DST_NUM,
                                (SCM_CHANNEL_CFG_HEAD *)g_astSCMDecoderDstCfg, sizeof(SCM_DECODER_DEST_CFG_STRU), &ulCfgNum))
    {
        BSP_SOCP_ReadDataDone(ulDstChID, (stBuffer.u32Size + stBuffer.u32RbSize));  /* ������� */

        SCM_DECODER_DST_ERR("SCM_DecoderDestReadCB: Find Channel is Error", ulDstChID, 0);/* ��¼Log */

        return;
    }

    if ((VOS_NULL_PTR == g_astSCMDecoderDstCfg[ulCfgNum].pfunc)
        || (0 == (stBuffer.u32Size + stBuffer.u32RbSize)))
    {
        BSP_SOCP_ReadDataDone(ulDstChID, (stBuffer.u32Size + stBuffer.u32RbSize));  /* ������� */

        SCM_DECODER_DST_ERR("SCM_DecoderDestReadCB: Channel Callback Func or Data is NULL", ulDstChID, 0);/* ��¼Log */

        return;
    }

    ulVirtAdd = VOS_UncacheMemPhyToVirt(stBuffer.pBuffer,
                            g_astSCMDecoderDstCfg[ulCfgNum].pucBufPHY,
                            g_astSCMDecoderDstCfg[ulCfgNum].pucBuf,
                            g_astSCMDecoderDstCfg[ulCfgNum].ulBufLen);

    if (VOS_NULL_PTR !=  stBuffer.pRbBuffer)
    {
        ulRBVirtaddr = VOS_UncacheMemPhyToVirt(stBuffer.pRbBuffer,
                            g_astSCMDecoderDstCfg[ulCfgNum].pucBufPHY,
                            g_astSCMDecoderDstCfg[ulCfgNum].pucBuf,
                            g_astSCMDecoderDstCfg[ulCfgNum].ulBufLen);
    }
    else
    {
        ulRBVirtaddr = VOS_NULL_PTR;
    }

    ulTimerIn = OM_GetSlice();

    g_astSCMDecoderDstCfg[ulCfgNum].pfunc(ulDstChID,
                                          (VOS_UINT8*)ulVirtAdd,
                                          stBuffer.u32Size,
                                          (VOS_UINT8*)ulRBVirtaddr,
                                          stBuffer.u32RbSize);

    ulTimerOut = OM_GetSlice();

    /* ��¼�ص�������ִ��ʱ�� */
    SCM_DECODER_DST_LOG("SCM_DecoderDestReadCB: Call channel Func Proc time", ulDstChID, (ulTimerOut-ulTimerIn));

    if (VOS_OK != BSP_SOCP_ReadDataDone(ulDstChID, (stBuffer.u32Size + stBuffer.u32RbSize)))  /* ������� */
    {
        SCM_DECODER_DST_ERR("SCM_DecoderDestReadCB: Channel Read Done is Error", ulDstChID, 0);/* ��¼Log */
    }

    /* make pclint happy */
    ulTimerIn  = ulTimerOut;
    ulTimerOut = ulTimerIn;

    return;
}


/* ****************************************************************************
 �� �� ��  : SCM_DecoderDstChannelInit
 ��������  : ��ACPU�Ľ���Ŀ��ͨ�������ó�ʼ��
 �������  : ��
 �������  : ��
 �� �� ֵ  : VOS_ERR/VOS_OK
 ���ú���  :
 ��������  :
 �޸���ʷ  :
   1.��    ��  : 2012��8��8��
     ��    ��  : zhuli
     �޸�����  : Creat Function
**************************************************************************** */
VOS_UINT32 SCM_DecoderDstChannelInit(VOS_VOID)
{
    VOS_UINT32                          i;
    SOCP_DECODER_DEST_CHAN_STRU         stChannel;

    for (i = 0; i < SCM_DECODER_DST_NUM; i++)
    {
        stChannel.eDataType     = g_astSCMDecoderDstCfg[i].enDataType;

        stChannel.u32SrcChanID  = g_astSCMDecoderDstCfg[i].enSrcCHID;

        stChannel.sDecoderDstSetBuf.pucOutputStart  = g_astSCMDecoderDstCfg[i].pucBufPHY;

        stChannel.sDecoderDstSetBuf.pucOutputEnd
                = (g_astSCMDecoderDstCfg[i].pucBufPHY + g_astSCMDecoderDstCfg[i].ulBufLen)-1;

        stChannel.sDecoderDstSetBuf.u32Threshold    = g_astSCMDecoderDstCfg[i].ulThreshold;

        if (VOS_OK != BSP_SOCP_DecoderSetDestChan(g_astSCMDecoderDstCfg[i].enChannelID, &stChannel))
        {
            g_astSCMDecoderDstCfg[i].enInitState = SCM_CHANNEL_CFG_FAIL;  /* ��¼ͨ����ʼ�����ô��� */

            return VOS_ERR;/* ����ʧ�� */
        }

        g_astSCMDecoderDstCfg[i].enInitState = SCM_CHANNEL_INIT_SUCC;     /* ��¼ͨ����ʼ�����ô��� */

        BSP_SOCP_RegisterReadCB(g_astSCMDecoderDstCfg[i].enChannelID,(socp_read_cb)SCM_DecoderDestReadCB);
    }

    return VOS_OK;

}

/* ****************************************************************************
 �� �� ��  : SCM_DecoderSrcChannelInit
 ��������  : ��ACPU/CCPU�ı���Դͨ������������
 �������  : ��
 �������  : ��
 �� �� ֵ  : VOS_ERR/VOS_OK
 ���ú���  :
 ��������  :
 �޸���ʷ  :
   1.��    ��  : 2012��8��8��
     ��    ��  : zhuli
     �޸�����  : Creat Function
**************************************************************************** */
VOS_UINT32 SCM_DecoderSrcChannelInit(VOS_VOID)
{
    VOS_UINT32                          i;
    SOCP_DECODER_SRC_CHAN_STRU          stChannel;

    stChannel.eDataTypeEn   = SOCP_DATA_TYPE_EN;
    stChannel.eMode         = SOCP_DECSRC_CHNMODE_BYTES;

    stChannel.sDecoderSetSrcBuf.pucRDStart      = 0;
    stChannel.sDecoderSetSrcBuf.pucRDEnd        = 0;
    stChannel.sDecoderSetSrcBuf.u32RDThreshold  = 0;

    for (i = 0; i < SCM_DECODER_SRC_NUM; i++)
    {
        stChannel.sDecoderSetSrcBuf.pucInputStart = g_astSCMDecoderSrcCfg[i].pucSrcPHY;

        stChannel.sDecoderSetSrcBuf.pucInputEnd
                = (g_astSCMDecoderSrcCfg[i].pucSrcPHY + g_astSCMDecoderSrcCfg[i].ulSrcBufLen)-1;

        if (VOS_OK != BSP_SOCP_DecoderSetSrcChanAttr(g_astSCMDecoderSrcCfg[i].enChannelID, &stChannel))
        {
            g_astSCMDecoderSrcCfg[i].enInitState = SCM_CHANNEL_CFG_FAIL;  /* ��¼ͨ����ʼ�����ô��� */

            return VOS_ERR;/* ����ʧ�� */
        }

        if(VOS_OK != BSP_SOCP_Start(g_astSCMDecoderSrcCfg[i].enChannelID))
        {
            g_astSCMDecoderSrcCfg[i].enInitState = SCM_CHANNEL_START_FAIL;  /* ��¼ͨ���������ô��� */

            return VOS_ERR;/* ����ʧ�� */
        }

        g_astSCMDecoderSrcCfg[i].enInitState = SCM_CHANNEL_INIT_SUCC;     /* ��¼ͨ����ʼ�����ô��� */
    }

    return VOS_OK;

}




/* ****************************************************************************
 �� �� ��  : SCM_SendDecoderSrc
 ��������  : ACPU�Ľ���Դͨ�������ݷ��ͺ���
 �������  : enChanlID: ����Ŀ��ͨ��ID
             pucSendDataVirt: �������ݵ����ַ
             ulSendLen:       �������ݵĳ���
 �������  :
 �� �� ֵ  : VOS_ERR/VOS_OK
 ���ú���  :
 ��������  :
 �޸���ʷ  :
   1.��    ��  : 2012��8��8��
     ��    ��  : zhuli
     �޸�����  : Creat Function
**************************************************************************** */

VOS_UINT32 SCM_SendDecoderSrc(SOCP_DECODER_SRC_ENUM_U32 enChanlID, VOS_UINT8 *pucSendDataVirt, VOS_UINT32 ulSendLen)
{
    SOCP_BUFFER_RW_STRU                 stRwBuf;
    VOS_UINT32                          ulCfgNum;
    VOS_UINT32                          ulResult;

    /* �ж�����ָ��ͳ��ȵ���ȷ */
    if ((VOS_NULL_PTR == pucSendDataVirt)||(0 == ulSendLen))
    {
        SCM_DECODER_SRC_ERR("SCM_SendDecoderSrc: Input Para is Error", enChanlID, (VOS_UINT32)pucSendDataVirt);

        return VOS_ERR;
    }

    if (VOS_OK != SCM_FindChannelCfg(enChanlID, SCM_DECODER_SRC_NUM,
                                (SCM_CHANNEL_CFG_HEAD *)g_astSCMDecoderSrcCfg, sizeof(SCM_DECODER_SRC_CFG_STRU), &ulCfgNum))/* �ж�ͨ������ */
    {
        SCM_DECODER_SRC_ERR("SCM_SendDecoderSrc: Find Channel is Error", enChanlID, 0);/* ��¼Log */

        return VOS_ERR;/* ����ʧ�� */
    }

    SCM_DECODER_SRC_LOG("SCM_SendDecoderSrc: Send Decoder Data", enChanlID, ulSendLen);

    if (VOS_OK != BSP_SOCP_GetWriteBuff(enChanlID, &stRwBuf))
    {
        SCM_DECODER_SRC_ERR("SCM_SendDecoderSrc: Get Write Buffer is Error", enChanlID, 0);/* ��¼Log */

        return VOS_ERR;/* ����ʧ�� */
    }

    /* �ж��Ƿ��пռ� */
    if (ulSendLen > (stRwBuf.u32Size + stRwBuf.u32RbSize))
    {
        SCM_DECODER_SRC_ERR("SCM_SendDecoderSrc: Buffer is Full", enChanlID, ulSendLen);/* ��¼Log */

        return VOS_ERR;/* ����ʧ�� */
    }

    stRwBuf.pBuffer = (VOS_UINT8 *)VOS_UncacheMemPhyToVirt(stRwBuf.pBuffer,
                                    g_astSCMDecoderSrcCfg[ulCfgNum].pucSrcPHY,
                                    g_astSCMDecoderSrcCfg[ulCfgNum].pucSrcBuf,
                                    g_astSCMDecoderSrcCfg[ulCfgNum].ulSrcBufLen);

    if(VOS_NULL_PTR != stRwBuf.pRbBuffer)
    {
        stRwBuf.pRbBuffer = (VOS_UINT8 *)VOS_UncacheMemPhyToVirt(stRwBuf.pRbBuffer,
                                    g_astSCMDecoderSrcCfg[ulCfgNum].pucSrcPHY,
                                    g_astSCMDecoderSrcCfg[ulCfgNum].pucSrcBuf,
                                    g_astSCMDecoderSrcCfg[ulCfgNum].ulSrcBufLen);
    }

    if (stRwBuf.u32Size >= ulSendLen)
    {
       VOS_MemCpy(stRwBuf.pBuffer, pucSendDataVirt, ulSendLen);

       VOS_FlushCpuWriteBuf();

       ulResult = BSP_SOCP_WriteDone(enChanlID, ulSendLen);
    }
    else if ((stRwBuf.pRbBuffer != VOS_NULL_PTR)&& (stRwBuf.u32RbSize != 0))    /* �ռ䲻�㣬��д��ؾ��ַ */
    {
        VOS_MemCpy(stRwBuf.pBuffer, pucSendDataVirt, stRwBuf.u32Size);

        VOS_MemCpy(stRwBuf.pRbBuffer, (pucSendDataVirt + stRwBuf.u32Size), (ulSendLen-stRwBuf.u32Size));

        VOS_FlushCpuWriteBuf();

        ulResult = BSP_SOCP_WriteDone(enChanlID, ulSendLen);
    }
    else
    {
        SCM_DECODER_SRC_ERR("SCM_SendDecoderSrc: Buffer Info is Full", enChanlID, stRwBuf.u32RbSize);/* ��¼Log */
        ulResult = VOS_ERR;
    }

    if (VOS_OK != ulResult)
    {
        SCM_DECODER_SRC_ERR("SCM_SendDecoderSrc: Write Done is Error", enChanlID, stRwBuf.u32Size);/* ��¼Log */
        return VOS_ERR;
    }

    return VOS_OK;
}
#endif
#endif /* (RAT_MODE != RAT_GU) */

#endif  /* SCM_ACORE */

/* ****************************************************************************
 �� �� ��  : SCM_AcpuChannelMemInit
 ��������  : ��ACPU�ı���Դ������Ŀ�ġ�����Դ������Ŀ��ͨ�����ڴ��ʼ����
             ����ʧ�ܻḴλ���壬����Ҫ�ͷ��ڴ�
 �������  : ��
 �������  : ��
 �� �� ֵ  : VOS_ERR/VOS_OK
 ���ú���  :
 ��������  :
 �޸���ʷ  :
   1.��    ��  : 2012��8��8��
     ��    ��  : zhuli
     �޸�����  : Creat Function
**************************************************************************** */
VOS_UINT32 SCM_ChannelMemInit(VOS_VOID)
{
    VOS_UINT32                           i;
    VOS_UINT_PTR                         ulPHYAddr;

#ifdef SCM_ACORE
    if (VOS_OK != SCM_CoderDstChanMemInit())/* ����Ŀ��ͨ���ڴ��ʼ�� */
    {
        return VOS_ERR;/* ���ش��� */
    }
#if 0
#if (RAT_MODE != RAT_GU)                /* Mutil Mode */
    for (i=0; i<SCM_DECODER_DST_NUM; i++)
    {
        /* �������Ŀ�Ŀռ� */
        g_astSCMDecoderDstCfg[i].pucBuf = (VOS_UINT8*)VOS_UnCacheMemAlloc(g_astSCMDecoderDstCfg[i].ulBufLen, &ulPHYAddr);

        /* ����ռ���� */
        if (VOS_NULL_PTR == g_astSCMDecoderDstCfg[i].pucBuf)
        {
            /* ��¼ͨ����ʼ�����Ϊ�ڴ������쳣 */
            g_astSCMDecoderDstCfg[i].enInitState = SCM_CHANNEL_MEM_FAIL;

            return VOS_ERR;   /* ���ش��� */
        }

        g_astSCMDecoderDstCfg[i].pucBufPHY = (VOS_UINT8*)ulPHYAddr;
    }

    for(i=0; i<SCM_DECODER_SRC_NUM; i++)
    {
        /* �������Դ�ռ� */
        g_astSCMDecoderSrcCfg[i].pucSrcBuf = (VOS_UINT8*)VOS_UnCacheMemAlloc(g_astSCMDecoderSrcCfg[i].ulSrcBufLen, &ulPHYAddr);

        /* ����ռ���� */
        if(VOS_NULL_PTR == g_astSCMDecoderSrcCfg[i].pucSrcBuf)
        {
            /* ��¼ͨ����ʼ�����Ϊ�ڴ������쳣 */
            g_astSCMDecoderSrcCfg[i].enInitState = SCM_CHANNEL_MEM_FAIL;

            return VOS_ERR; /* ���ش��� */
        }

        g_astSCMDecoderSrcCfg[i].pucSrcPHY = (VOS_UINT8*)ulPHYAddr;
    }
#endif  /* (RAT_MODE != RAT_GU) */
#endif

#endif  /* SCM_ACORE */

    for (i=0; i<SCM_CODER_SRC_NUM; i++)
    {
        /* ����BD�ռ� */
        g_astSCMCoderSrcCfg[i].pucSrcBuf = (VOS_UINT8*)VOS_UnCacheMemAlloc(g_astSCMCoderSrcCfg[i].ulSrcBufLen, &ulPHYAddr);

        if (VOS_NULL_PTR == g_astSCMCoderSrcCfg[i].pucSrcBuf)/* ����BD�ռ���� */
        {
            /* ��¼ͨ����ʼ�����Ϊ�ڴ������쳣 */
            g_astSCMCoderSrcCfg[i].enInitState = SCM_CHANNEL_MEM_FAIL;

            return VOS_ERR;/* ���ش��� */
        }

        g_astSCMCoderSrcCfg[i].pucSrcPHY = (VOS_UINT8*)ulPHYAddr;

        if (SOCP_ENCSRC_CHNMODE_LIST == g_astSCMCoderSrcCfg[i].enCHMode)
        {
            /* ����RD�ռ� */
            g_astSCMCoderSrcCfg[i].pucRDBuf = (VOS_UINT8*)VOS_UnCacheMemAlloc(g_astSCMCoderSrcCfg[i].ulRDBufLen, &ulPHYAddr);

            /* ����RD�ռ���� */
            if(VOS_NULL_PTR == g_astSCMCoderSrcCfg[i].pucRDBuf)
            {
                /* ��¼ͨ����ʼ�����Ϊ�ڴ������쳣 */
                g_astSCMCoderSrcCfg[i].enInitState = SCM_CHANNEL_MEM_FAIL;

                return VOS_ERR; /* ���ش��� */
            }

            g_astSCMCoderSrcCfg[i].pucRDPHY = (VOS_UINT8*)ulPHYAddr;
        }
    }

    return VOS_OK;
}

/* ****************************************************************************
 �� �� ��  : SCM_ErrorChInfoSave
 ��������  : ��SOCPͨ����ͨ���������ݱ��浽Exc�ļ���
 �������  : ��
 �������  : pstData : �������ݵ���Ϣ
 �� �� ֵ  : ��
 ���ú���  :
 ��������  :
 �޸���ʷ  :
   1.��    ��  : 2012��8��8��
     ��    ��  : zhuli
     �޸�����  : Creat Function
**************************************************************************** */
VOS_VOID SCM_ErrorChInfoSave(cb_buf_t *pstData)
{
    VOS_UINT32                          ulDataLen;
    VOS_UINT8                          *pucData;

    /* ������Ҫ�����ͨ��������Ϣ��С */
#ifdef SCM_CCORE
    /* ��Ҫ������4����־λ */
    ulDataLen = sizeof(g_astSCMCoderSrcCfg)+ sizeof(g_stSCMInfoData) + (2*sizeof(VOS_UINT32));
#endif

#ifdef SCM_ACORE

#if (RAT_MODE != RAT_GU)                /* Mutil Mode */

    ulDataLen = sizeof(g_astSCMCoderDstCfg)
                + sizeof(g_astSCMCoderSrcCfg)
                + sizeof(g_astSCMDecoderDstCfg)
                + sizeof(g_astSCMDecoderSrcCfg)
                + sizeof(g_stSCMInfoData)
                + (5*sizeof(VOS_UINT32));        /* ��Ҫ������5����־λ */
#else                                       /* GU Single Mode */
    ulDataLen = sizeof(g_astSCMCoderDstCfg)
                + sizeof(g_astSCMCoderSrcCfg)
                + sizeof(g_stSCMInfoData)
                + (3*sizeof(VOS_UINT32));        /* ��Ҫ������5����־λ */;
#endif  /* (RAT_MODE != RAT_GU) */

#endif  /* SCM_ACORE */

    /* ��д������Ϣ */
    VOS_StrNCpy(pstData->aucName, "SCM CHCfg Info", EXCH_CB_NAME_SIZE);

    /* �����ڴ� */
    /*lint -e438 ����pucDataû��ʹ�õĴ���*/
    pucData = (VOS_UINT8 *)VOS_CacheMemAlloc(ulDataLen);

    if (VOS_NULL_PTR == pucData)
    {
        /* �ڴ�����ʧ�ܣ�ֻ����������Ϣ */
        pstData->pucData    = (VOS_UINT8 *)g_astSCMCoderSrcCfg;

        pstData->ulDataLen  = sizeof(g_astSCMCoderSrcCfg);
    }
    else
    {
        pstData->pucData = pucData;

        pstData->ulDataLen = ulDataLen;

        /* ����ͨ����LOG��Ϣ */
        VOS_MemSet(pucData, SCM_DATA_SAVE_TAG, sizeof(VOS_UINT32));

        pucData += sizeof(VOS_UINT32);

        VOS_MemCpy(pucData, (VOS_UINT8 *)&g_stSCMInfoData, sizeof(g_stSCMInfoData));

        pucData += sizeof(g_stSCMInfoData);

        /* �������Դͨ����������Ϣ */
        VOS_MemSet(pucData, SCM_DATA_SAVE_TAG, sizeof(VOS_UINT32));

        pucData += sizeof(VOS_UINT32);

        VOS_MemCpy(pucData, g_astSCMCoderSrcCfg, sizeof(g_astSCMCoderSrcCfg));

        pucData += sizeof(g_astSCMCoderSrcCfg);

#ifdef SCM_ACORE
        /* �������Ŀ��ͨ����������Ϣ */
        VOS_MemSet(pucData, SCM_DATA_SAVE_TAG, sizeof(VOS_UINT32));

        pucData += sizeof(VOS_UINT32);

        VOS_MemCpy(pucData, g_astSCMCoderDstCfg, sizeof(g_astSCMCoderDstCfg));

        pucData += sizeof(g_astSCMCoderDstCfg);

#if (RAT_MODE != RAT_GU)                /* Mutil Mode */
        /* �������Ŀ��ͨ����������Ϣ */
        VOS_MemSet(pucData, SCM_DATA_SAVE_TAG, sizeof(VOS_UINT32));

        pucData += sizeof(VOS_UINT32);

        VOS_MemCpy(pucData, g_astSCMDecoderDstCfg, sizeof(g_astSCMDecoderDstCfg));

        pucData += sizeof(g_astSCMDecoderDstCfg);

        /* ����������Դͨ����������Ϣ */
        VOS_MemSet(pucData, SCM_DATA_SAVE_TAG, sizeof(VOS_UINT32));

        pucData += sizeof(VOS_UINT32);

        VOS_MemCpy(pucData, g_astSCMDecoderSrcCfg, sizeof(g_astSCMDecoderSrcCfg));
#endif  /* (RAT_MODE != RAT_GU) */

#endif  /* SCM_ACORE */
    }
    /*lint -e438 ����pucDataû��ʹ�õĴ���*/

    return;    /* ���أ�����������������Ҫ�ͷ��ڴ� */
}


/* ****************************************************************************
 �� �� ��  : SCM_ChannelInit
 ��������  : ��SOCPͨ���ĳ�ʼ��
 �������  : ��
 �������  : ��
 �� �� ֵ  : VOS_ERR/VOS_OK
 ���ú���  :
 ��������  :
 �޸���ʷ  :
   1.��    ��  : 2012��8��8��
     ��    ��  : zhuli
     �޸�����  : Creat Function
**************************************************************************** */
VOS_UINT32 SCM_ChannelInit(VOS_VOID)
{
    VOS_MemSet(&g_stSCMInfoData, 0, sizeof(g_stSCMInfoData));

    /* ע���쳣��Ϣ����ص� */
    /*DRV_EXCH_CUST_FUNC_REG((exchCBReg)SCM_ErrorChInfoSave);*/

#ifdef SCM_ACORE
    if (VOS_OK != SCM_CoderDstChannelInit())
    {
        return VOS_ERR;/* ���ش��� */
    }

#if 0
#if (RAT_MODE != RAT_GU)                /* Mutil Mode */
    if (VOS_OK != SCM_DecoderDstChannelInit())
    {
        return VOS_ERR;/* ���ش��� */
    }

    if (VOS_OK != SCM_DecoderSrcChannelInit())
    {
        return VOS_ERR;/* ���ش��� */
    }
#endif  /* (RAT_MODE != RAT_GU) */
#endif

#endif  /* SCM_ACORE */

    if (VOS_OK != SCM_CoderSrcChannelInit()) /* ����Դͨ����ʼ�� */
    {
        return VOS_ERR;/* ���ش��� */
    }

/* BBP��ά�ɲ���Ŀ����,j00174725 2012-11-26 ��ʼ��BBP��ά�ɲ�ʹ�õ�ͨ�� */
#ifdef SCM_CCORE
    Om_BbpDbgChanInit();
#endif

    return VOS_OK;
}

/*****************************************************************************
 �� �� ��  : SCM_ChannelInfoShow
 ��������  : ��SOCPͨ������Ϣ��ӡ������
 �������  : ��
 �������  : ��
 �� �� ֵ  : ��
 ���ú���  :
 ��������  :
 �޸���ʷ  :
   1.��    ��  : 2012��8��8��
     ��    ��  : zhuli
     �޸�����  : Creat Function
*****************************************************************************/
VOS_VOID SCM_ChannelInfoShow(VOS_VOID)
{
    VOS_UINT32      i;

    for(i=0; i<SCM_CODER_SRC_NUM; i++)
    {
        vos_printf("\r\n The Channle 0x%x info is :", g_astSCMCoderSrcCfg[i].enChannelID);

        vos_printf("\r\n The Max BD num is %d", g_stSCMInfoData.aulBDUsedMax[i]);

        vos_printf("\r\n The Max rD num is %d \r\n", g_stSCMInfoData.aulRDUsedMax[i]);
    }

    return;
}

/*****************************************************************************
 �� �� ��  : SCM_CoderSrcCHShow
 ��������  : ��SOCP ����Դͨ������Ϣ��ӡ������
 �������  : ��
 �������  : ��
 �� �� ֵ  : ��
 ���ú���  :
 ��������  :
 �޸���ʷ  :
   1.��    ��  : 2012��8��8��
     ��    ��  : zhuli
     �޸�����  : Creat Function
*****************************************************************************/
VOS_VOID SCM_CoderSrcCHShow(VOS_UINT32 ulCfgNum)
{
    vos_printf("\r\n CH id         is 0x%x", g_astSCMCoderSrcCfg[ulCfgNum].enChannelID);
    vos_printf("\r\n CH init state is   %d", g_astSCMCoderSrcCfg[ulCfgNum].enInitState);
    vos_printf("\r\n CH type       is   %d", g_astSCMCoderSrcCfg[ulCfgNum].enCHMode);
    vos_printf("\r\n CH Dst        is 0x%x", g_astSCMCoderSrcCfg[ulCfgNum].enDstCHID);
    vos_printf("\r\n CH data type  is   %d", g_astSCMCoderSrcCfg[ulCfgNum].enDataType);
    vos_printf("\r\n CH Level      is   %d", g_astSCMCoderSrcCfg[ulCfgNum].enCHLevel);
    vos_printf("\r\n CH BD VirtAddris 0x%x", g_astSCMCoderSrcCfg[ulCfgNum].pucSrcBuf);
    vos_printf("\r\n CH BD PHYAddr is 0x%x", g_astSCMCoderSrcCfg[ulCfgNum].pucSrcPHY);
    vos_printf("\r\n CH BD BufLen  is 0x%x", g_astSCMCoderSrcCfg[ulCfgNum].ulSrcBufLen);
    vos_printf("\r\n CH RD VirtAddris 0x%x", g_astSCMCoderSrcCfg[ulCfgNum].pucRDBuf);
    vos_printf("\r\n CH RD PHYAddr is 0x%x", g_astSCMCoderSrcCfg[ulCfgNum].pucRDPHY);
    vos_printf("\r\n CH RD BufLen  is 0x%x", g_astSCMCoderSrcCfg[ulCfgNum].ulRDBufLen);

    return;
}

#ifdef SCM_ACORE

/*****************************************************************************
 �� �� ��  : SCM_CoderDstCHShow
 ��������  : ��SOCP ����Դͨ������Ϣ��ӡ������
 �������  : ��
 �������  : ��
 �� �� ֵ  : ��
 ���ú���  :
 ��������  :
 �޸���ʷ  :
   1.��    ��  : 2012��8��8��
     ��    ��  : zhuli
     �޸�����  : Creat Function
*****************************************************************************/
VOS_VOID SCM_CoderDstCHShow(VOS_UINT32 ulCfgNum)
{
    vos_printf("\r\n CH id         is 0x%x", g_astSCMCoderDstCfg[ulCfgNum].enChannelID);
    vos_printf("\r\n CH init state is   %d", g_astSCMCoderDstCfg[ulCfgNum].enInitState);
    vos_printf("\r\n CH BD VirtAddris 0x%x", g_astSCMCoderDstCfg[ulCfgNum].pucBuf);
    vos_printf("\r\n CH BD PHYAddr is 0x%x", g_astSCMCoderDstCfg[ulCfgNum].pucBufPHY);
    vos_printf("\r\n CH BD BufLen  is 0x%x", g_astSCMCoderDstCfg[ulCfgNum].ulBufLen);
    vos_printf("\r\n CH threshold  is 0x%x", g_astSCMCoderDstCfg[ulCfgNum].ulThreshold);
    vos_printf("\r\n CH CB func    is 0x%x", g_astSCMCoderDstCfg[ulCfgNum].pfunc);

    return;
}
#endif

/*****************************************************************************
 �� �� ��  : SCM_StopAllSrcChan
 ��������  : disable ����C�ˣ�HIFIʹ�õı���Դͨ��
 �������  : ulSrcChanID ͨ��ID
 �������  : ��
 �� �� ֵ  : ��
 ���ú���  :
 ��������  :
 �޸���ʷ  :
   1.��    ��  : 2013��5��2��
     ��    ��  : j0174725s
     �޸�����  : Creat Function
*****************************************************************************/
VOS_VOID SCM_StopAllSrcChan(VOS_VOID)
{
    VOS_UINT32                          ulSrcChanID;
    VOS_UINT32                          ulNum;
    VOS_UINT32                          i;

    ulNum = sizeof(g_ulCloseSrcNum)/sizeof(SOCP_CODER_SRC_ENUM_U32);

    for (i = 0; i < ulNum; i++)
    {
        ulSrcChanID = g_ulCloseSrcNum[i];

        SOCP_Stop1SrcChan(ulSrcChanID);
    }

    return ;
}

/*****************************************************************************
 �� �� ��  : SCM_SOCPDBRegShow
 ��������  :
 �������  : ulCfgNum ͨ��num

 �������  : ��

 �� �� ֵ  : VOS_VOID
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2012��07��31��
    ��    ��   : g47350
    �޸�����   : V900R001��Ŀ��������

*****************************************************************************/
VOS_VOID SCM_SOCPBDRegShow(VOS_UINT32 ulCfgNum)
{
    VOS_INT32                           lValue1 = 0;
    VOS_INT32                           lValue2 = 0;
    VOS_INT32                           lValue3 = 0;
    VOS_INT32                           lValue4 = 0;
    VOS_INT32                           lValue1Phy = 0;
    VOS_INT32                           lValue3Phy = 0;
    VOS_UINT32                          i = 0;
    VOS_INT32                           lTempAddr;
#ifdef SCM_ACORE
    OM_BUF_CTRL_STRU                   *pOmBufCtrl;
#endif

    lTempAddr = (VOS_INT32)g_astSCMCoderSrcCfg[ulCfgNum].pucSrcBuf;

#ifdef SCM_ACORE
    if (SOCP_CODER_SRC_GU_CNF1 == g_astSCMCoderSrcCfg[ulCfgNum].enChannelID)
    {
        pOmBufCtrl = &g_stAcpuTxCnfCtrlInfo.OmBufCtrl;
    }
    else if (SOCP_CODER_SRC_GU_IND1 == g_astSCMCoderSrcCfg[ulCfgNum].enChannelID)
    {
        pOmBufCtrl = &g_stAcpuTxIndCtrlInfo.OmBufCtrl;
    }
    else
    {
        vos_printf("abnormal GU ulCfgNum !!! \r\n");
        return;
    }
#endif

    for(i = 0; i < (g_astSCMCoderSrcCfg[ulCfgNum].ulSrcBufLen/16) + 1; i++)
    {
        lValue1 = *(VOS_INT32*)(lTempAddr);
#ifdef SCM_ACORE
        lValue1Phy = (VOS_INT32)OM_AddrRealToVirt(pOmBufCtrl, (VOS_UINT8*)lValue1);
#endif
        lValue2 = *(VOS_INT32*)(lTempAddr + 0x4);
        lValue3 = *(VOS_INT32*)(lTempAddr + 0x8);
#ifdef SCM_ACORE
        lValue3Phy = (VOS_INT32)OM_AddrRealToVirt(pOmBufCtrl, (VOS_UINT8*)lValue3);
#endif
        lValue4 = *(VOS_INT32*)(lTempAddr + 0xc);

        vos_printf("0x%x: 0x%8x  0x%8x  0x%8x  0x%8x  0x%8x  0x%8x\r\n",lTempAddr,lValue1,lValue1Phy,lValue2,lValue3,lValue3Phy,lValue4);
        VOS_TaskDelay(20);

        lTempAddr += 0x10;
    }

    return ;
}

/*****************************************************************************
 �� �� ��  : SCM_SOCPRDRegShow
 ��������  :
 �������  : ulCfgNum ͨ��num

 �������  : ��

 �� �� ֵ  : VOS_VOID
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2012��07��31��
    ��    ��   : g47350
    �޸�����   : V900R001��Ŀ��������

*****************************************************************************/
VOS_VOID SCM_SOCPRDRegShow(VOS_UINT32 ulCfgNum)
{
    VOS_INT32                           lValue1 = 0;
    VOS_INT32                           lValue2 = 0;
    VOS_INT32                           lValue3 = 0;
    VOS_INT32                           lValue4 = 0;
    VOS_INT32                           lValue1Phy = 0;
    VOS_INT32                           lValue3Phy = 0;
    VOS_UINT32                          i = 0;
    VOS_INT32                           lTempAddr;
#ifdef SCM_ACORE
    OM_BUF_CTRL_STRU                   *pOmBufCtrl;
#endif

    lTempAddr = (VOS_INT32)g_astSCMCoderSrcCfg[ulCfgNum].pucRDBuf;

#ifdef SCM_ACORE
    if (SOCP_CODER_SRC_GU_CNF1 == g_astSCMCoderSrcCfg[ulCfgNum].enChannelID)
    {
        pOmBufCtrl = &g_stAcpuTxCnfCtrlInfo.OmBufCtrl;
    }
    else if (SOCP_CODER_SRC_GU_IND1 == g_astSCMCoderSrcCfg[ulCfgNum].enChannelID)
    {
        pOmBufCtrl = &g_stAcpuTxIndCtrlInfo.OmBufCtrl;
    }
    else
    {
        vos_printf("abnormal GU ulCfgNum !!! \r\n");
        return;
    }
#endif

    for(i = 0; i < (g_astSCMCoderSrcCfg[ulCfgNum].ulRDBufLen/16) + 1; i++)
    {
        lValue1 = *(VOS_INT32*)(lTempAddr);
#ifdef SCM_ACORE
        lValue1Phy = (VOS_INT32)OM_AddrRealToVirt(pOmBufCtrl, (VOS_UINT8*)lValue1);
#endif
        lValue2 = *(VOS_INT32*)(lTempAddr + 0x4);
        lValue3 = *(VOS_INT32*)(lTempAddr + 0x8);
#ifdef SCM_ACORE
        lValue3Phy = (VOS_INT32)OM_AddrRealToVirt(pOmBufCtrl, (VOS_UINT8*)lValue3);
#endif
        lValue4 = *(VOS_INT32*)(lTempAddr + 0xc);

        vos_printf("0x%x: 0x%8x  0x%8x  0x%8x  0x%8x  0x%8x  0x%8x\r\n",lTempAddr,lValue1,lValue1Phy,lValue2,lValue3,lValue3Phy,lValue4);
        VOS_TaskDelay(20);

        lTempAddr += 0x10;
    }

}


VOS_VOID SCM_LogToFile(FILE *fp)
{
    mdrv_file_write((VOS_VOID*)&g_stSCMInfoData, sizeof(VOS_CHAR), sizeof(g_stSCMInfoData), fp);
}


VOS_UINT8* SCM_GetDebugLogInfo(VOS_VOID)
{
    return (VOS_UINT8*)&g_stSCMInfoData;
}


VOS_UINT32 SCM_GetDebugLogInfoLen(VOS_VOID)
{
    return (VOS_UINT32)sizeof(g_stSCMInfoData);
}

#ifdef SCM_ACORE
/*****************************************************************************
 �� �� ��  : SCM_SocpSendDataToUDISucc
 ��������  : �����ݴ�SOCPͨ���Ļ����з��͵�ָ���Ķ˿�ִ�гɹ�
 �������  : enChanID       Ŀ��ͨ����
             enPhyport      ����˿ں�
             pstDebugInfo   ��ά�ɲ���Ϣ�ṹָ��
             pulSendDataLen Ԥ�ڷ��͵ĳ���
 �������  : pulSendDataLen ʵ�ʷ��͵ĳ���
 �� �� ֵ  : VOS_VOID

 �޸���ʷ      :
  1.��    ��   : 2014��5��25��
    ��    ��   : h59254
    �޸�����   : V8R1 OM_Optimize��Ŀ����
*****************************************************************************/
VOS_VOID SCM_SocpSendDataToUDISucc(
    SOCP_CODER_DST_ENUM_U32             enChanID,
    CPM_PHY_PORT_ENUM_UINT32            enPhyport,
    OM_SOCP_CHANNEL_DEBUG_INFO         *pstDebugInfo,
    VOS_UINT32                         *pulSendDataLen
)
{
    if ((SOCP_CODER_DST_OM_CNF == enChanID) && (CPM_CFG_PORT == enPhyport))
    {
        if ((0 == g_stUsbCfgPseudoSync.ulLen) || (*pulSendDataLen != g_stUsbCfgPseudoSync.ulLen))
        {
            pstDebugInfo->ulUSBSendCBAbnormalNum++;
            pstDebugInfo->ulUSBSendCBAbnormalLen += *pulSendDataLen;
        }

        *pulSendDataLen = g_stUsbCfgPseudoSync.ulLen;
    }
    else if ((SOCP_CODER_DST_OM_IND == enChanID) && (CPM_IND_PORT == enPhyport))
    {
        if ((0 == g_stUsbIndPseudoSync.ulLen) || (*pulSendDataLen != g_stUsbIndPseudoSync.ulLen))
        {
            pstDebugInfo->ulUSBSendCBAbnormalNum++;
            pstDebugInfo->ulUSBSendCBAbnormalLen += *pulSendDataLen;
        }

        *pulSendDataLen = g_stUsbIndPseudoSync.ulLen;
    }
    else
    {
        ;
    }

    return;
}

#ifdef SCM_SNCHECK

VOS_VOID SCM_SnCheckShow(VOS_VOID)
{
    vos_printf("\r\n *******************SN error count is%d***************\r\n", g_ulSnErrCount);
    return;
}


VOS_VOID SCM_MaoPao(VOS_UINT32 *pulDataBuf, VOS_UINT32 ulBufLen)
{
    VOS_UINT32                          i;
    VOS_UINT32                          j;
    VOS_UINT32                          ulTmp;

    for(i = 0; i < ulBufLen - 1; i++)
    {
        for(j = 0; j < ulBufLen - 1 - i; j++)
        {
            if(pulDataBuf[j] > pulDataBuf[j+1])
            {
                ulTmp           = pulDataBuf[j];
                pulDataBuf[j]   = pulDataBuf[j+1];
                pulDataBuf[j+1] = ulTmp;
            }
        }
    }

    return;
}


VOS_VOID SCM_CheckSn(VOS_VOID)
{
    VOS_UINT32                          i;
    VOS_UINT8                           *pucData;

    /* ð�������Ƚ������� */
    SCM_MaoPao(g_stSnCheck.aulSnBuf, g_stSnCheck.ulCount);

    /* ������������ */
    for(i = 0; i < SCM_SN_CHECK_THRESHOLD_VALUE; i++)
    {
        if (g_stSnCheck.aulSnBuf[i+1] != (g_stSnCheck.aulSnBuf[i] + 1))
        {
            g_ulSnErrCount++;

            pucData = (VOS_UINT8 *)&(g_stSnCheck.aulSnBuf[i]);

            /*lint -e40*/
            OM_ACPU_DEBUG_TRACE(pucData, 16, OM_ACPU_SN_CHECK);
            /*lint +e40*/
        }
    }

    /* ��ʣ�������Ƶ�bufferǰ�� */
    VOS_MemCpy(g_stSnCheck.aulSnBuf, &g_stSnCheck.aulSnBuf[SCM_SN_CHECK_THRESHOLD_VALUE],
                   (SCM_SN_RECORD_BUF_SIZE-SCM_SN_CHECK_THRESHOLD_VALUE)*sizeof(VOS_UINT32));

    g_stSnCheck.ulCount = SCM_SN_RECORD_BUF_SIZE-SCM_SN_CHECK_THRESHOLD_VALUE;

    return;
}
#endif
VOS_VOID SCM_MsgSnRecord(SOCP_CODER_DST_ENUM_U32 enChanID, VOS_UINT8 *pucData, VOS_UINT32 ulLen)
{
#ifdef SCM_SNCHECK
    VOS_UINT8                           ucChar;
    VOS_UINT32                          i;
    VOS_UINT32                          ulResult = VOS_ERR;
    OM_APP_HEADER_STRU                 *pstOmAppHeader;
    VOS_UINT8                          *pucTem;
    VOS_UINT8                           ucSegSn;
    VOS_UINT8                           ucCpuId;
    VOS_UINT8                           ucFuncType;
    VOS_ULONG                           ulLockLevel;
    OM_HDLC_STRU                        *pstHdlcEntity;

    if (SCM_SN_CHECK_FLAG != g_usSnCheckFlag)
    {
        return;
    }

    if (SOCP_CODER_DST_OM_CNF == enChanID)
    {
        pstHdlcEntity = &g_astSnCheckHdlcEntity[0];
    }
    else  /*(SOCP_CODER_DST_OM_IND == enChanID)*/
    {
        pstHdlcEntity = &g_astSnCheckHdlcEntity[1];
    }

    /* ���ؿ��ţ���NV��������¼ */
    for ( i = 0; i < ulLen; i++ )
    {
        ucChar = (VOS_UINT8)pucData[i];

        ulResult = Om_HdlcDecap(pstHdlcEntity, ucChar);

        if ( HDLC_SUCC == ulResult )
        {
            /* �ж����� */
            pucTem = (VOS_UINT8*)pstHdlcEntity->pucDecapBuff;
            ucSegSn = *(pucTem + OM_RL_DATATYPE_LEN + offsetof(OM_APP_MSG_SEG_EX_STRU, stMsgSeg.ucSegSn));
            ucCpuId = *(pucTem + OM_RL_DATATYPE_LEN + offsetof(OM_APP_MSG_SEG_EX_STRU, stSocpHdr.ucCPUID));
            pstOmAppHeader = (OM_APP_HEADER_STRU*)(pucTem + OM_RL_DATATYPE_LEN + sizeof(OM_APP_MSG_SEG_EX_STRU));

            /* sn��ֻ�����ڵ�һ֡������ */
            if ((1 != ucSegSn ) || (OM_TOOL_CCPU_ID != ucCpuId))
            {
                continue;
            }

            ucFuncType= (pstOmAppHeader->ucFuncType) & OM_FUNCID_VALUE_BITS;

            /* funcType 45, 50 Ϊ������Ϣ */
            if ((OM_TRACE_FUNC != ucFuncType)
                && (OM_AIR_FUNC != ucFuncType)
                && (OM_TRANS_FUNC != ucFuncType)
                && (OM_EVENT_FUNC != ucFuncType)
                && (OM_GREEN_FUNC != ucFuncType)
                && (OM_PRINTF_FUNC != ucFuncType)
                && (OM_LOG_FUNC != ucFuncType)
                && (45 != ucFuncType)
                && (50 != ucFuncType))
            {
                continue;
            }
            else
            {
                /* ��snΪ0���˵�,��SDT�Ͽ���trans ��snΪ0�� */
                if(0 == pstOmAppHeader->ulSn)
                {
                    continue;
                }

                VOS_SpinLockIntLock(&g_stSnCheckSpinLock, ulLockLevel);

                g_stSnCheck.aulSnBuf[g_stSnCheck.ulCount++] = pstOmAppHeader->ulSn;

                if(SCM_SN_RECORD_BUF_SIZE == g_stSnCheck.ulCount)
                {
                    SCM_CheckSn();
                }

                VOS_SpinUnlockIntUnlock(&g_stSnCheckSpinLock, ulLockLevel);
            }
        }
        else if (HDLC_NOT_HDLC_FRAME == ulResult)
        {
            /*����������֡,����HDLC���װ*/
        }
        else
        {
        }
    }
#endif
    return;
}

/*****************************************************************************
 �� �� ��  : SCM_SocpSendDataToUDI
 ��������  : ���ڰ����ݴ�SOCPͨ���Ļ����з��͵�ָ���Ķ˿�
 �������  : enChanID:  Ŀ��ͨ����
             pucVirData:SOCPͨ�����ݵ����������ַ
             pucPHYData:SOCPͨ�����ݵ����������ַ
             ulDataLen: SOCPͨ�������ݳ���
 �������  : ��
 �� �� ֵ  : VOS_VOID

 �޸���ʷ      :
  1.��    ��   : 2014��5��25��
    ��    ��   : h59254
    �޸�����   : V8R1 OM_Optimize��Ŀ����
*****************************************************************************/
VOS_VOID SCM_SocpSendDataToUDI(SOCP_CODER_DST_ENUM_U32 enChanID, VOS_UINT8 *pucVirData, VOS_UINT8 *pucPHYData, VOS_UINT32 ulDataLen)
{
    VOS_UINT32                  ulResult;
    VOS_UINT32                  ulRet = VOS_ERR;
    CPM_PHY_PORT_ENUM_UINT32    enPhyport;
    VOS_UINT32                  ulSendDataLen;
    VOS_BOOL                    bUsbSendSucFlag = VOS_FALSE;
#if (FEATURE_SOCP_SYNC_ENABLE == FEATURE_OFF)
    VOS_BOOL                    bUsbSendFlag = VOS_FALSE;
#endif
    OM_SOCP_CHANNEL_DEBUG_INFO  *pstDebugInfo = VOS_NULL_PTR;
    CPM_LOGIC_PORT_ENUM_UINT32  enLogicPort;

    if (SOCP_CODER_DST_OM_CNF == enChanID)
    {
        pstDebugInfo = &g_stAcpuDebugInfo.stCnfDebugInfo;
        enLogicPort  = CPM_OM_CFG_COMM;
    }
    else if (SOCP_CODER_DST_OM_IND == enChanID)
    {
        pstDebugInfo = &g_stAcpuDebugInfo.stIndDebugInfo;
        enLogicPort  = CPM_OM_IND_COMM;
    }
    else
    {
        g_stAcpuDebugInfo.ulInvaldChannel++;

        return;
    }

    /*�������*/
    SOCP_SEND_DATA_PARA_CHECK(pstDebugInfo, ulDataLen, pucVirData);

    PPM_GetSendDataLen(enChanID, ulDataLen, &ulSendDataLen, &enPhyport);

    /*lint -e40*/
    OM_ACPU_DEBUG_CHANNEL_TRACE(enChanID, pucVirData, ulSendDataLen, OM_ACPU_SEND_USB);
    /*lint +e40*/

    ulResult = CPM_ComSend(enLogicPort, pucVirData, pucPHYData, ulSendDataLen);

    /* ���ݽ��װ�����SN���Ƿ����� */
    SCM_MsgSnRecord(enChanID, pucVirData, ulSendDataLen);

    if(CPM_SEND_ERR == ulResult)  /*��ǰͨ���Ѿ�����ʧ�ܣ�����SOCPͨ�������ݰ���*/
    {
        pstDebugInfo->ulUSBSendErrNum++;
        pstDebugInfo->ulUSBSendErrLen += ulSendDataLen;
    }
    else if(CPM_SEND_FUNC_NULL == ulResult)   /*��ǰͨ���쳣���ӵ���������*/
    {
        pstDebugInfo->ulOmDiscardNum++;
        pstDebugInfo->ulOmDiscardLen += ulDataLen;
    }
    else if(CPM_SEND_PARA_ERR == ulResult)   /* �������ݻ�ȡʵ��ַ�쳣 */
    {
        pstDebugInfo->ulOmGetVirtErr++;
        pstDebugInfo->ulOmGetVirtSendLen += ulDataLen;
    }
#if (FEATURE_SOCP_SYNC_ENABLE == FEATURE_OFF)
    else if(CPM_SEND_AYNC == ulResult) //����cpm������
    {
        bUsbSendSucFlag = VOS_TRUE;
        bUsbSendFlag    = VOS_TRUE;
        ulRet           = VOS_OK;
    }
#endif
    else if(CPM_SEND_OK == ulResult)
    {
        SCM_SocpSendDataToUDISucc(enChanID, enPhyport, pstDebugInfo, &ulSendDataLen);

        bUsbSendSucFlag = VOS_TRUE;
    }
    else
    {
        LogPrint1("PPM_SocpSendDataToUDI: CPM_ComSend return Error %d", (VOS_INT)ulResult);
    }

#if (FEATURE_SOCP_SYNC_ENABLE == FEATURE_OFF)
    if(bUsbSendFlag != VOS_TRUE)
#endif
    {
        ulRet = SCM_RlsDestBuf(enChanID, ulSendDataLen);

        if(VOS_OK != ulRet)
        {
            pstDebugInfo->ulSocpReadDoneErrNum++;
            pstDebugInfo->ulSocpReadDoneErrLen += ulSendDataLen;
            LogPrint1("PPM_SocpSendDataToUDI: SCM_RlsDestBuf return Error %d", (VOS_INT)ulRet);
        }
    }

    if ((VOS_OK == ulRet) && (VOS_TRUE == bUsbSendSucFlag))
    {
        pstDebugInfo->ulUSBSendNum++;
        pstDebugInfo->ulUSBSendLen += ulSendDataLen;

        if(pstDebugInfo->ulUSBSendLen > OM_DATA_MAX_LENGTH)
        {
            pstDebugInfo->ulUSBSendRealNum++;
            pstDebugInfo->ulUSBSendLen -= OM_DATA_MAX_LENGTH;
        }
    }

    return;
}

/*****************************************************************************
 �� �� ��  : SCM_Init
 ��������  : SCMģ����س�ʼ��
 �������  : ��
 �������  : ��
 �� �� ֵ  : VOS_UINT32

 �޸���ʷ      :
  1.��    ��   : 2014��5��25��
    ��    ��   : h59254
    �޸�����   : V8R1 OM_Optimize��Ŀ����
*****************************************************************************/
VOS_UINT32 SCM_Init(VOS_VOID)
{
#ifdef SCM_SNCHECK
    OM_TTL_STRU                         stMntnFlag;

    /*��ȡSD Log��NV�е�����*/
    if (NV_OK != NV_Read(en_NV_Ttl_ID, &stMntnFlag, sizeof(OM_TTL_STRU)))
    {
        LogPrint("\r\nSCM_Init:Read EncDst MNTN Flag Failed!\r\n");

        stMntnFlag.usTtl = 0;
    }

    g_usSnCheckFlag = stMntnFlag.usTtl;

    if (SCM_SN_CHECK_FLAG == g_usSnCheckFlag)
    {
        g_astSnCheckHdlcEntity[0].pucDecapBuff = (VOS_UINT8 *)VOS_MemAlloc(ACPU_PID_OM, STATIC_MEM_PT, 2*OM_HDLC_BUF_MAX_LEN);

        if (VOS_NULL_PTR == g_astSnCheckHdlcEntity[0].pucDecapBuff)
        {
            LogPrint("\r\nSCM_Init:Alloc Memory Failed!\r\n");

            g_astSnCheckHdlcEntity[0].ulDecapBuffSize = 0;

            return VOS_ERR;
        }

        Om_HdlcInit(&g_astSnCheckHdlcEntity[0]);

        g_astSnCheckHdlcEntity[0].ulDecapBuffSize = 2*OM_HDLC_BUF_MAX_LEN;

        g_astSnCheckHdlcEntity[1].pucDecapBuff = (VOS_UINT8 *)VOS_MemAlloc(ACPU_PID_OM, STATIC_MEM_PT, 2*OM_HDLC_BUF_MAX_LEN);

        if (VOS_NULL_PTR == g_astSnCheckHdlcEntity[0].pucDecapBuff)
        {
            LogPrint("\r\nSCM_Init:Alloc Memory Failed!\r\n");

            g_astSnCheckHdlcEntity[1].ulDecapBuffSize = 0;

            return VOS_ERR;
        }

        Om_HdlcInit(&g_astSnCheckHdlcEntity[1]);

        g_astSnCheckHdlcEntity[1].ulDecapBuffSize = 2*OM_HDLC_BUF_MAX_LEN;

        g_stSnCheck.ulCount = 0;

        VOS_SpinLockInit(&g_stSnCheckSpinLock);
    }
#endif

    /* ��OM SOCPĿ��ͨ��������ע���SCM */
    if (VOS_OK != SCM_RegCoderDestProc(SOCP_CODER_DST_OM_CNF, (SCM_CODERDESTFUCN)SCM_SocpSendDataToUDI))
    {
        LogPrint("SCM_Init:SCM_RegCoderDestProc Reg OM CNF Fail.\n");

        return VOS_ERR;
    }

    /* ��OM SOCPĿ��ͨ��������ע���SCM */
    if (VOS_OK != SCM_RegCoderDestProc(SOCP_CODER_DST_OM_IND, (SCM_CODERDESTFUCN)SCM_SocpSendDataToUDI))
    {
        LogPrint("SCM_Init:SCM_RegCoderDestProc Reg OM IND Fail.\n");

        return VOS_ERR;
    }

    /* ע���SCM�������Ŀ�Ļص�������OM���� */
    if (VOS_OK != SCM_RegDecoderDestProc(SOCP_DECODER_DST_GUOM,(SCM_DECODERDESTFUCN)OMRL_RcvCnfChannel))
    {
        LogPrint("SCM_Init:SCM_RegDecoderDestProc Reg OMRL_RcvCnfChannel Fail.\n");

        return VOS_ERR;
    }

    /* ע���SCM�������Ŀ�Ļص�������CBT���� */
    if (VOS_OK != SCM_RegDecoderDestProc(SOCP_DECODER_CBT,(SCM_DECODERDESTFUCN)OMRL_RcvCbtChannel))
    {
        LogPrint("SCM_Init:SCM_RegDecoderDestProc Reg OMRL_RcvCbtChannel Fail.\n");

        return VOS_ERR;
    }

    CPM_LogicRcvReg(CPM_OM_CFG_COMM, SCM_SoftDecodeCfgDataRcv);

    g_stScmSoftDecodeInfo.ulCpmRegLogicRcvSuc++;

    return VOS_OK;
}

/*****************************************************************************
 �� �� ��  : COMM_Init
 ��������  : �����ֵĳ�ʼ������װΪһ��ͳһ�Ľӿڣ���OM PID��ʼ���׶ε���
 �������  : ��
 �������  : ��
 �� �� ֵ  : VOS_UINT32

 �޸���ʷ      :
  1.��    ��   : 2014��5��25��
    ��    ��   : h59254
    �޸�����   : V8R1 OM_Optimize��Ŀ����
*****************************************************************************/
VOS_UINT32 COMM_Init(VOS_VOID)
{
    if (VOS_OK != SCM_Init())
    {
        return VOS_ERR;
    }

    /* ��ʼ������ͨ�� */
    if (VOS_OK != PPM_InitPhyPort())
    {
        return VOS_ERR;
    }

    if (VOS_OK != CPM_PortAssociateInit())
    {
        return VOS_ERR;
    }

    return VOS_OK;
}

#endif

VOS_UINT64 g_scm_dma_mask;
VOS_VOID SCM_FlushCpuCache( VOS_VOID *pAddress, VOS_INT lSize )
{
#if(VOS_LINUX == VOS_OS_VER)
    struct device dev;
    memset(&dev,0,sizeof(struct device));
    dev.dma_mask = (unsigned long long *)(&g_scm_dma_mask);
    dma_map_single(&dev, pAddress, lSize, DMA_TO_DEVICE);
#elif(VOS_WIN32 == VOS_OS_VER)
    ;
#endif
}



VOS_VOID SCM_InvalidCpuCache( VOS_VOID *pAddress, VOS_INT lSize )
{
#if(VOS_LINUX == VOS_OS_VER)
    struct device dev;
    memset(&dev,0,sizeof(struct device));
    dev.dma_mask = (unsigned long long *)(&g_scm_dma_mask);
    dma_map_single(&dev, pAddress, lSize, DMA_FROM_DEVICE);
#elif(VOS_WIN32 == VOS_OS_VER)
    ;
#endif
}

#ifdef __cplusplus
#if __cplusplus
    }
#endif
#endif




