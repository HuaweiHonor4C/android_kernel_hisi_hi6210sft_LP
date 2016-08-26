/******************************************************************************

   Copyright(C)2008,Hisilicon Co. LTD.

 ******************************************************************************
  File Name       : diag_cfg.c
  Description     :
  History         :
     1.w00182550       2012-11-29   Draft Enact

******************************************************************************/


#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


/*****************************************************************************
  1 Include HeadFile
*****************************************************************************/
/*lint -save -e537*/
#include "diag_common.h"
#include "diag_debug.h"
#include "diag_cfg.h"
#include "diag_cmd_id.h"
#include "msp_errno.h"
#include "LPsNvInterface.h"
#if(VOS_OS_VER == VOS_LINUX)
#include "diag_port.h"
#include "diag_app_agent.h"
#else
#include "diag_agent.h"
#endif
/*lint -restore*/
/*lint -save -e767 ԭ��:Log��ӡ*/
#define    THIS_FILE_ID        MSP_FILE_ID_DIAG_CFG_C
/*lint -restore +e767*/


/*****************************************************************************
  2 Declare the Global Variable
*****************************************************************************/
#define DIAG_CFG_PRINT_MODULE_NUM              (44)

/*lint -save -e40*/

VOS_UINT32 g_ulDiagCfgInfo = 0;
VOS_UINT8 g_LayerSrcModuleCfg[DIAG_CFG_PID_SUM] = {0};
VOS_UINT8 g_LayerDecModuleCfg[DIAG_CFG_PID_SUM] = {0};
VOS_UINT8 g_PrintModuleCfg[DIAG_CFG_PID_NUM] = {0};
VOS_UINT32 g_PrintTotalCfg = DIAG_CFG_PRINT_TOTAL_MODULE_SWT_NOT_USE;
DIAG_CMD_LOG_CAT_USERPLANE_REQ_STRU g_stUserPlaneCfg[DIAG_CFG_USER_PLANE_ID_NUM] = {{0}};
DIAG_CFG_LOG_CAT_CFG_STRU g_stMsgCfg = {0};
VOS_UINT32 g_ulDiagDfsCtrl = 0;
/*lint -restore +e40*/

/*****************************************************************************
  3 Function
*****************************************************************************/

/*****************************************************************************
 Function Name   : diag_CfgResetAllSwt
 Description     : ���ÿ���״̬
 Output          : None
 Return          : VOS_UINT32

 History         :
    1.w00182550      2012-12-1  Draft Enact

*****************************************************************************/
VOS_VOID diag_CfgResetAllSwt(VOS_VOID)
{

    /*��տտڿ��ص�״̬�����1����ΪDIAG��ʼ��״̬������*/
    g_ulDiagCfgInfo = 0x1;

    /*��ղ�俪��״̬*/
    VOS_MemSet(g_LayerSrcModuleCfg,0,sizeof(g_LayerSrcModuleCfg));
    VOS_MemSet(g_LayerDecModuleCfg,0,sizeof(g_LayerDecModuleCfg));

    /*��մ�ӡ����״̬*/
    VOS_MemSet(g_PrintModuleCfg,0,sizeof(g_PrintModuleCfg));

    /*��մ�ӡ�ܿ���״̬*/
	g_PrintTotalCfg = DIAG_CFG_PRINT_TOTAL_MODULE_SWT_NOT_USE;

    /*����û�����Ϣ����״̬*/
    VOS_MemSet(g_stUserPlaneCfg,0,sizeof(g_stUserPlaneCfg));

    /*�����Ϣ���˿���״̬*/
    VOS_MemSet(&g_stMsgCfg,0,sizeof(DIAG_CFG_LOG_CAT_CFG_STRU));


    return;
}

/*****************************************************************************
 Function Name   : diag_CfgSetGlobalBitValue
 Description     : ����DIAG�տڵȿ���״̬
 Input           :VOS_UINT32* pstDiagGlobal
                ENUM_DIAG_CFG_BIT enBit
                VOS_UINT32 enSwtich
 Output          : None
 Return          : VOS_UINT32

 History         :
    1.w00182550      2012-12-1  Draft Enact

*****************************************************************************/
VOS_UINT32 diag_CfgSetGlobalBitValue(VOS_UINT32* pstDiagGlobal,ENUM_DIAG_CFG_BIT_U32 enBit,ENUM_DIAG_CFG_SWT_U8 enSwtich)
{
    /*����Ϊopen 1ʱ����Ҫʹ��|�����ø�bit Ϊ1*/
    if(DIAG_CFG_SWT_OPEN == enSwtich)
    {
        *pstDiagGlobal |=  ((VOS_UINT)1 << enBit);
    }
    /*����Ϊclose 0ʱ����Ҫʹ��&�����ø�bit Ϊ0*/
    else if(DIAG_CFG_SWT_CLOSE == enSwtich)
    {
        /*lint -save -e502*/
        *pstDiagGlobal &= ~((VOS_UINT)1 << enBit);
        /*lint -restore +e502*/
    }
    else
    {
        return ERR_MSP_INVALID_PARAMETER;
    }
    return ERR_MSP_SUCCESS;
}

/*****************************************************************************
 Function Name   : diag_CfgProcEntry
 Description     : �ú���Ϊ����DIAG FW�������Ŀ��������������
 Input           : pstReq ����������
                   ulCmdSn ����ID
 Output          : None
 Return          : VOS_UINT32

 History         :
    1.y00228784      2012-11-22  Draft Enact

*****************************************************************************/
VOS_UINT32 diag_CfgProcEntry (VOS_UINT8* pstReq , VOS_UINT32 ulCmdId)
{
     VOS_UINT32 ret = ERR_MSP_SUCCESS;

     switch(MSP_STRU_ID_0_15_CMD_CATEGORY(ulCmdId))
     {
          case DIAG_CMD_LOG_CAT_PRINT:
              ret = diag_PrintCfgProc(pstReq,ulCmdId);
              break;
          case DIAG_CMD_LOG_CAT_LAYER:
              ret = diag_LayerCfgProc(pstReq,ulCmdId);
              break;
          case DIAG_CMD_LOG_CAT_AIR:
              ret = diag_AirCfgProc(pstReq,ulCmdId);
              break;
          case DIAG_CMD_LOG_CAT_USERPLANE:
              ret = diag_UsrPlaneCfgProc(pstReq,ulCmdId);
              break;
          case DIAG_CMD_LOG_CAT_EVENT:
              ret = diag_EventCfgProc(pstReq,ulCmdId);
              break;
          case DIAG_CMD_LOG_CAT_MSG:
              ret = diag_MsgCfgProc(pstReq,ulCmdId);
              break;
          default:
              ret = ERR_MSP_FAILURE;
              break;
    /*lint -save -e525*/
    }
     /*lint -restore*/
    return ret;
}

/*****************************************************************************
 Function Name   : diag_AirCfgProc
 Description     : �ú������ڴ���CfgProcEntry�������Ŀտڿ�������
 Input           : pstReq ����������
 Output          : None
 Return          : VOS_UINT32

 History         :
    1.y00228784      2012-11-22  Draft Enact

*****************************************************************************/
VOS_UINT32 diag_AirCfgProc (VOS_UINT8* pstReq,VOS_UINT32 ulCmdId)
{
    /*lint -save -e958*/
    DIAG_CMD_LOG_CAT_AIR_REQ_STRU* pstAirSwtReq = NULL;
#if(VOS_OS_VER == VOS_LINUX)
    DIAG_CMD_LOG_CAT_AIR_CNF_STRU stAirSwtCnf = {0};
#endif
    VOS_UINT32 ret = ERR_MSP_SUCCESS;
    ENUM_DIAG_CFG_SWT_U8 enLSwitch = 0;
    ENUM_DIAG_CFG_SWT_U8 enGuSwitch = 0;
    VOS_UINT32 ulSetRet;
    /*lint -restore*/
    pstAirSwtReq = (DIAG_CMD_LOG_CAT_AIR_REQ_STRU*)(DIAG_OFFSET_HEAD_GET_DATA(pstReq));

    /*����LT�տڿ���ֵ*/
    enLSwitch = DIAG_GET_CFG_SWT(pstAirSwtReq->ulSwitch);
    enGuSwitch = DIAG_GET_CFG_SWT(pstAirSwtReq->ulGuSwitch);

    ulSetRet = diag_CfgSetGlobalBitValue(&g_ulDiagCfgInfo,DIAG_CFG_LT_AIR_BIT,enLSwitch);

    /*����GU�տڿ���ֵ*/
    ulSetRet |= diag_CfgSetGlobalBitValue(&g_ulDiagCfgInfo,DIAG_CFG_GU_AIR_BIT,enGuSwitch);

    DIAG_DEBUG_SDM_FUN(EN_DIAG_DEBUG_AIR_CFG, pstAirSwtReq->ulSwitch, ulSetRet, 0);
#if(VOS_OS_VER == VOS_LINUX)

    if(ERR_MSP_SUCCESS == ulSetRet)
    {
        stAirSwtCnf.ulRc = ERR_MSP_SUCCESS;
    }
    else
    {
        stAirSwtCnf.ulRc = ERR_MSP_FAILURE;
    }

    /*�����FW�ظ�*/
    ret = diag_AgentCnfFun((VOS_UINT8*)&stAirSwtCnf,ulCmdId,sizeof(DIAG_CMD_LOG_CAT_AIR_CNF_STRU));
#endif
    return ret;
}


/*****************************************************************************
 Function Name   : diag_CfgSetLayerSwt
 Description     : ���ò����Ϣ����
 Input           :DIAG_CMD_LOG_CAT_LAYER_REQ_STRU* pstLayerReq
                VOS_UINT32 ulCfgCnt
 Output          : None
 Return          : VOS_UINT32

 History         :
    1.w00182550      2012-11-29  Draft Enact

*****************************************************************************/
VOS_UINT32 diag_CfgSetLayerSwt(DIAG_CMD_LOG_CAT_LAYER_REQ_STRU* pstLayerReq, VOS_UINT32 ulCfgSize)
{
    /*lint -save -e958*/
    VOS_UINT32 ret = ERR_MSP_SUCCESS;
    ENUM_DIAG_CFG_SWT_U8 enSwitch = 0;
    VOS_UINT32 j = 0;
    /*lint -restore*/
    if((0 == ulCfgSize)||(0 !=ulCfgSize %sizeof(DIAG_CMD_LOG_CAT_LAYER_REQ_STRU)))
    {
        return  ERR_MSP_INVALID_PARAMETER;
    }

    /* ����ĳCategory�Ŀ����������б����Ҷ�Ӧ���������������*/
    for(j = 0 ; j< ulCfgSize /sizeof(DIAG_CMD_LOG_CAT_LAYER_REQ_STRU);j++)
    {

        enSwitch = DIAG_GET_CFG_SWT((pstLayerReq + j)->ulSwitch);

        /*lint -save -e40 -e63*/
		if(DIAG_CFG_LAYER_MODULE_IS_INVALID((VOS_INT32)((pstLayerReq + j)->ulModuleId )))
		{
			continue;
		}

		if( DIAG_CMD_LAYER_MOD_SRC == (pstLayerReq + j)->ulIsDestModule)
		{
			g_LayerSrcModuleCfg[(pstLayerReq + j)->ulModuleId] = (VOS_UINT8)enSwitch;
		}
		else
		{
			g_LayerDecModuleCfg[(pstLayerReq + j)->ulModuleId] = (VOS_UINT8)enSwitch;
		}
		/*lint -restore  +e40 +e63*/
    }
    /*lint -save -e539*/
	return ret;
    /*lint -restore*/
}

/*****************************************************************************
 Function Name   : diag_LayerCfgProc
 Description     : �ú������ڴ���CfgProcEntry�������Ĳ�俪������
 Input           : pstReq ����������
 Output          : None
 Return          : VOS_UINT32

 History         :
    1.y00228784      2012-11-22  Draft Enact

*****************************************************************************/
VOS_UINT32 diag_LayerCfgProc (VOS_UINT8* pstReq, VOS_UINT32 ulCmdId)
{
    MSP_DIAG_HEAD_STRU *pstDiagHead = NULL;
    DIAG_CMD_LOG_CAT_LAYER_REQ_STRU* pstLayerSwtReq = NULL;
#if(VOS_OS_VER == VOS_LINUX)
    DIAG_CMD_LOG_CAT_LAYER_CNF_STRU stLayerSwtCnf = {0};
#endif
    VOS_UINT32 ret = ERR_MSP_SUCCESS;
    VOS_UINT32 ulSetRet;

    pstDiagHead = (MSP_DIAG_HEAD_STRU*)(DIAG_OFFSET_SOCP_GET_DIAG_HEAD(pstReq));

    pstLayerSwtReq = (DIAG_CMD_LOG_CAT_LAYER_REQ_STRU*)(DIAG_OFFSET_HEAD_GET_DATA(pstReq));


    /*���ò��ģ�鿪�ص�ȫ�ֱ�����*/
    ulSetRet = diag_CfgSetLayerSwt(pstLayerSwtReq, pstDiagHead->ulDataSize - sizeof(MSP_DIAG_DATA_REQ_STRU));

    DIAG_DEBUG_SDM_FUN(EN_DIAG_DEBUG_LAYER_CFG, ulSetRet, 0, 0);
#if(VOS_OS_VER == VOS_LINUX)

    stLayerSwtCnf.ulRc = ulSetRet;
    stLayerSwtCnf.ulModuleId = pstLayerSwtReq->ulModuleId;

    /*�����FW�ظ�*/
    ret = diag_AgentCnfFun((VOS_UINT8*)&stLayerSwtCnf,ulCmdId,sizeof(DIAG_CMD_LOG_CAT_LAYER_CNF_STRU));
#endif
    return ret;
}


/*****************************************************************************
 Function Name   : diag_EventCfgProc
 Description     : �ú������ڴ���CfgProcEntry���������¼���������
 Input           : pstReq ����������
 Output          : None
 Return          : VOS_UINT32

 History         :
    1.y00228784      2012-11-22  Draft Enact

*****************************************************************************/
VOS_UINT32 diag_EventCfgProc(VOS_UINT8* pstReq,VOS_UINT32 ulCmdId)
{
    DIAG_CMD_LOG_CAT_EVENT_REQ_STRU* pstEvtSwtReq = NULL;
#if(VOS_OS_VER == VOS_LINUX)
    DIAG_CMD_LOG_CAT_EVENT_CNF_STRU stEvtSwtCnf = {0};
#endif
    VOS_UINT32 ret = ERR_MSP_SUCCESS;
    VOS_UINT32 ulSetRet;
    ENUM_DIAG_CFG_SWT_U8 enSwitch =0;

    pstEvtSwtReq = (DIAG_CMD_LOG_CAT_EVENT_REQ_STRU*)(DIAG_OFFSET_HEAD_GET_DATA(pstReq));

    /*�����¼�����ֵ*/
    enSwitch = DIAG_GET_CFG_SWT(pstEvtSwtReq->ulSwitch);
    ulSetRet = diag_CfgSetGlobalBitValue(&g_ulDiagCfgInfo,DIAG_CFG_EVENT_BIT,enSwitch);
    DIAG_DEBUG_SDM_FUN(EN_DIAG_DEBUG_EVENT_CFG, pstEvtSwtReq->ulSwitch, ulSetRet, 0);
#if(VOS_OS_VER == VOS_LINUX)

    stEvtSwtCnf.ulRc = ulSetRet;
    stEvtSwtCnf.ulSwitch = pstEvtSwtReq->ulSwitch;

    /*�����FW�ظ�*/
    ret = diag_AgentCnfFun((VOS_UINT8*)&stEvtSwtCnf,ulCmdId,sizeof(DIAG_CMD_LOG_CAT_EVENT_CNF_STRU));
#endif
    return ret;
}

/*****************************************************************************
 Function Name   : diag_CfgSetUserPlaneSwt
 Description     : �����û�����Ϣ����״̬
 Input           :DIAG_CMD_LOG_CAT_USERPLANE_REQ_STRU *pstUserPlaneReq
 Output          : None
 Return          : VOS_UINT32

 History         :
    1.w00182550      2012-12-5  Draft Enact

*****************************************************************************/
VOS_UINT32 diag_CfgSetUserPlaneSwt(DIAG_CMD_LOG_CAT_USERPLANE_REQ_STRU *pstUserPlaneReq,VOS_UINT32 ulCfgSize)
{
    /*lint -save -e958*/
    VOS_UINT32 i = 0,j = 0;
    ENUM_DIAG_CFG_SWT_U8 enSwitch =0;
    VOS_UINT32 ret = ERR_MSP_FAILURE;
    /*lint -restore*/
    if((0 == ulCfgSize)||(0 !=ulCfgSize % sizeof(DIAG_CMD_LOG_CAT_USERPLANE_REQ_STRU)))
    {
        return  ERR_MSP_INVALID_PARAMETER;
    }

    /* ����ĳCategory�Ŀ����������б����Ҷ�Ӧ���������������*/
    for(j = 0 ; j< ulCfgSize /sizeof(DIAG_CMD_LOG_CAT_USERPLANE_REQ_STRU);j++)
    {
        enSwitch = DIAG_GET_CFG_SWT((pstUserPlaneReq + j)->ulSwitch);

        for(i=0;i<DIAG_CFG_USER_PLANE_ID_NUM;i++)
        {
            if(DIAG_NOT_SET_USERPALNE_MSGID == g_stUserPlaneCfg[i].ulMsgId)
            {
                g_stUserPlaneCfg[i].ulMsgId  = (pstUserPlaneReq + j)->ulMsgId;
                g_stUserPlaneCfg[i].ulSwitch = enSwitch;
                ret = ERR_MSP_SUCCESS;
				break;
            }
            /*lint -save -e525 -e539*/
			if(g_stUserPlaneCfg[i].ulMsgId == (pstUserPlaneReq + j)->ulMsgId)
            {
                g_stUserPlaneCfg[i].ulSwitch = enSwitch;
                ret = ERR_MSP_SUCCESS;
				break;
            }
            /*lint -restore*/
        }
    }
    return ret;
}
/*****************************************************************************
 Function Name   : diag_UsrPlaneCfgProc
 Description     : �ú������ڴ���CfgProcEntry���������û��濪������
 Input           : pstReq ����������
 Output          : None
 Return          : VOS_UINT32

 History         :
    1.y00228784      2012-11-22  Draft Enact

*****************************************************************************/
VOS_UINT32 diag_UsrPlaneCfgProc(VOS_UINT8* pstReq,VOS_UINT32 ulCmdId)
{
    DIAG_CMD_LOG_CAT_USERPLANE_REQ_STRU* pstUserPlaneSwtReq = NULL;
#if(VOS_OS_VER == VOS_LINUX)
    DIAG_CMD_LOG_CAT_USERPLANE_CNF_STRU stUserPlaneSwtCnf = {0};
#endif
    MSP_DIAG_HEAD_STRU *pstDiagHead = NULL;
    VOS_UINT32 ret = ERR_MSP_SUCCESS;
    VOS_UINT32 ulSetRet;

    pstDiagHead = (MSP_DIAG_HEAD_STRU*)(DIAG_OFFSET_SOCP_GET_DIAG_HEAD(pstReq));

    pstUserPlaneSwtReq = (DIAG_CMD_LOG_CAT_USERPLANE_REQ_STRU*)(DIAG_OFFSET_HEAD_GET_DATA(pstReq));


    /*�����û��濪�ص�ȫ�ֱ�����*/
    ulSetRet = diag_CfgSetUserPlaneSwt(pstUserPlaneSwtReq, pstDiagHead->ulDataSize - sizeof(MSP_DIAG_DATA_REQ_STRU));
	DIAG_DEBUG_SDM_FUN(EN_DIAG_DEBUG_USEPLANE_CFG, ulSetRet, 0, 0);
#if(VOS_OS_VER == VOS_LINUX)

    stUserPlaneSwtCnf.ulRc = ulSetRet;
    stUserPlaneSwtCnf.ulMsgId = pstUserPlaneSwtReq->ulMsgId;

    /*�����FW�ظ�*/
    ret = diag_AgentCnfFun((VOS_UINT8*)&stUserPlaneSwtCnf,ulCmdId,sizeof(DIAG_CMD_LOG_CAT_USERPLANE_CNF_STRU));
#endif
    return ret;
}

/*****************************************************************************
 Function Name   : diag_SetMsgCfgSwt
 Description     : ��ϢID���˿�������
 Input           :DIAG_CMD_LOG_CAT_CFG_REQ_STRU *pstCatCfgReq
                VOS_UINT32 ulCfgSize
 Output          : None
 Return          : VOS_UINT32

 History         :
    1.w00182550      2012-12-5  Draft Enact

*****************************************************************************/
VOS_UINT32 diag_CfgSetMsgSwt(DIAG_CMD_LOG_CAT_CFG_REQ_STRU *pstCatCfgReq,VOS_UINT32 ulCfgSize)
{
    /*lint -save -e958*/
    VOS_UINT32 i = 0,j = 0;
    ENUM_DIAG_CFG_SWT_U8 enSwitch =0;
    VOS_UINT32 ulRst = ERR_MSP_INVALID_PARAMETER;
    DIAG_CFG_LOG_CAT_MSG_CFG_STRU *pstItemCfg =NULL;
    /*lint -restore*/
    /*�������*/
    if((0 == ulCfgSize)||(0 !=ulCfgSize % sizeof(DIAG_CMD_LOG_CAT_CFG_REQ_STRU)))
    {
        DIAG_DEBUG_SDM_FUN(EN_DIAG_DEBUG_MSG_ERR, ulCfgSize, 0, 0);
        return ERR_MSP_DIAG_CMD_SIZE_INVALID;
    }

    for(j = 0 ; j< ulCfgSize /sizeof(DIAG_CMD_LOG_CAT_CFG_REQ_STRU);j++)
    {

        /*��֧�ֲ����ϢCATEGORY����*/
        if(DIAG_CMD_LOG_CATETORY_LAYER_ID != (pstCatCfgReq + j)->ulCategory)
        {
            DIAG_DEBUG_SDM_FUN(EN_DIAG_DEBUG_MSG_ERR, (pstCatCfgReq + j)->ulCategory, 0, 1);
            return ERR_MSP_NOT_SUPPORT;
        }
    }


    /* ����ĳCategory�Ŀ����������б����Ҷ�Ӧ���������������*/   /* [false alarm]:����Fortify */
    /* coverity[unreachable] */
    for(j = 0 ; j< ulCfgSize /sizeof(DIAG_CMD_LOG_CAT_CFG_REQ_STRU);j++)
    {
        enSwitch = DIAG_GET_CFG_SWT((pstCatCfgReq + j)->ulSwitch);

        for(i = 0; i < g_stMsgCfg.ulCfgCnt; i++)
        {
            pstItemCfg = (g_stMsgCfg.astMsgCfgList + i);

            if((pstCatCfgReq + j)->ulId == pstItemCfg->ulId)
            {
                pstItemCfg->ulSwt = enSwitch;
                ulRst = ERR_MSP_SUCCESS;
                break;
            }
        }
        if(i >= g_stMsgCfg.ulCfgCnt)
        {
            /*Ŀǰ��һ��֧��DIAG_CFG_CAT_CFG_NUM����Ϣ����*/
            if((g_stMsgCfg.ulCfgCnt < DIAG_CFG_CAT_CFG_NUM))
            {
                pstItemCfg = g_stMsgCfg.astMsgCfgList + g_stMsgCfg.ulCfgCnt;

                pstItemCfg->ulId  = (pstCatCfgReq + j)->ulId;
                pstItemCfg->ulSwt = enSwitch;

                g_stMsgCfg.ulCfgCnt++;
                ulRst = ERR_MSP_SUCCESS;
            }
            else
            {
                DIAG_DEBUG_SDM_FUN(EN_DIAG_DEBUG_MSG_ERR, g_stMsgCfg.ulCfgCnt, 0, 3);
                return ERR_MSP_INVALID_PARAMETER;
            }
        }
    }

    return ulRst;

}

/*****************************************************************************
 Function Name   : diag_MsgCfgProc
 Description     : �ú������ڴ���CfgProcEntry����������Ϣ��������
 Input           : pstReq ����������
 Output          : None
 Return          : VOS_UINT32

 History         :
    1.y00228784      2012-11-22  Draft Enact

*****************************************************************************/
VOS_UINT32 diag_MsgCfgProc(VOS_UINT8* pstReq,VOS_UINT32 ulCmdId)
    {
#if(VOS_OS_VER == VOS_LINUX)
        DIAG_CMD_LOG_CAT_CFG_CNF_STRU stCatSwtCnf = {0};
#endif
        DIAG_CMD_LOG_CAT_CFG_REQ_STRU* pstCatCfgReq = NULL;
        VOS_UINT32 ret = ERR_MSP_SUCCESS;
        VOS_UINT32 ulSetRet;
        MSP_DIAG_HEAD_STRU *pstDiagHead = NULL;

        pstDiagHead = (MSP_DIAG_HEAD_STRU *)(DIAG_OFFSET_SOCP_GET_DIAG_HEAD(pstReq));

        pstCatCfgReq = (DIAG_CMD_LOG_CAT_CFG_REQ_STRU*)(DIAG_OFFSET_HEAD_GET_DATA(pstReq));


        /*������Ϣ���˿��ص�ȫ�ֱ�����*/
        ulSetRet = diag_CfgSetMsgSwt(pstCatCfgReq,pstDiagHead->ulDataSize - sizeof(MSP_DIAG_DATA_REQ_STRU));

        DIAG_DEBUG_SDM_FUN(EN_DIAG_DEBUG_MSG, ulSetRet, 0, 0);
#if(VOS_OS_VER == VOS_LINUX)
        stCatSwtCnf.ulRc = ulSetRet;
        stCatSwtCnf.ulId = pstCatCfgReq->ulId;

        /*�����FW�ظ�*/
        ret = diag_AgentCnfFun((VOS_UINT8*)&stCatSwtCnf,ulCmdId,sizeof(DIAG_CMD_LOG_CAT_CFG_CNF_STRU));
#endif
        return ret;

    }


/*****************************************************************************
 Function Name   : diag_CfgSetPrintSwt
 Description     : ���ô�ӡ����״̬
 Input           :DIAG_CMD_LOG_CAT_PRINT_REQ_STRU* pstPrintReq
                VOS_UINT32 ulCfgCnt
 Output          : None
 Return          : VOS_UINT32

 History         :
    1.w00182550      2012-12-6  Draft Enact

*****************************************************************************/
VOS_UINT32 diag_CfgSetPrintSwt(DIAG_CMD_LOG_CAT_PRINT_REQ_STRU* pstPrintReq, VOS_UINT32 ulCfgSize)
{
    /*lint -save -e958*/
    VOS_UINT32 j = 0;
    VOS_UINT8 ucLevelFilter = 0;
    VOS_UINT32 ret = ERR_MSP_SUCCESS;
    /*lint -restore*/
    if ((0 == ulCfgSize)||(0 != ulCfgSize % sizeof(DIAG_CMD_LOG_CAT_PRINT_REQ_STRU)))
    {
        return ERR_MSP_INVALID_PARAMETER;
    }

    if(DIAG_CFG_PRINT_TOTAL_MODULE == pstPrintReq->ulModuleId)
    {
        /*����PRINTʱ������������ģ������*/
         VOS_MemSet(g_PrintModuleCfg,0,sizeof(g_PrintModuleCfg));

        /*���ô�ӡ�ܿ���*/
        ucLevelFilter = DIAG_GET_PRINT_CFG_SWT(pstPrintReq->ulLevelFilter);
        g_PrintTotalCfg = ucLevelFilter;
    }
    else
    {
        /* ����PRINT�ܿ���0xFFģ��*/
        g_PrintTotalCfg = DIAG_CFG_PRINT_TOTAL_MODULE_SWT_NOT_USE;

        /* ����ĳCategory�Ŀ����������б����Ҷ�Ӧ���������������*/
        for(j = 0 ; j< ulCfgSize /sizeof(DIAG_CMD_LOG_CAT_PRINT_REQ_STRU);j++)
        {
              /*lint -save -e40 -e63*/
            if(DIAG_CFG_MODULE_IS_INVALID((VOS_INT32)((pstPrintReq + j)->ulModuleId )))
            {
                //ret = ERR_MSP_INVALID_PARAMETER;
                continue;
            }

            ucLevelFilter = DIAG_GET_PRINT_CFG_SWT((pstPrintReq +j)->ulLevelFilter);

            g_PrintModuleCfg[(pstPrintReq +j)->ulModuleId - VOS_PID_DOPRAEND] = ucLevelFilter;
              /*lint -restore  +e40 +e63*/
        }
    }
    /*lint -save -e539*/
	return ret;
    /*lint -restore */

}


/*****************************************************************************
 Function Name   : diag_PrintCfgProc
 Description     : �ú������ڴ���CfgProcEntry�������Ĵ�ӡ��������
 Input           : pstReq ����������
 Output          : None
 Return          : VOS_UINT32

 History         :
    1.y00228784      2012-11-22  Draft Enact

*****************************************************************************/
VOS_UINT32 diag_PrintCfgProc(VOS_UINT8* pstReq,VOS_UINT32 ulCmdId)
{
    MSP_DIAG_HEAD_STRU *pstDiagHead = NULL;
    DIAG_CMD_LOG_CAT_PRINT_REQ_STRU* pstPrintSwtReq = NULL;
#if(VOS_OS_VER == VOS_LINUX)
    DIAG_CMD_LOG_CAT_PRINT_CNF_STRU stPrintSwtCnf = {0};
#endif
    VOS_UINT32 ret = ERR_MSP_SUCCESS;
    VOS_UINT32 ulSetRet;

    pstDiagHead = (MSP_DIAG_HEAD_STRU*)(DIAG_OFFSET_SOCP_GET_DIAG_HEAD(pstReq));

    pstPrintSwtReq = (DIAG_CMD_LOG_CAT_PRINT_REQ_STRU*)(DIAG_OFFSET_HEAD_GET_DATA(pstReq));


    /*���ô�ӡ���ص�ȫ�ֱ�����*/
    ulSetRet = diag_CfgSetPrintSwt(pstPrintSwtReq, pstDiagHead->ulDataSize - sizeof(MSP_DIAG_DATA_REQ_STRU));
    DIAG_DEBUG_SDM_FUN(EN_DIAG_DEBUG_PRINT_CFG, ulSetRet, 0, 0);
#if(VOS_OS_VER == VOS_LINUX)

    stPrintSwtCnf.ulRc = ulSetRet;

    stPrintSwtCnf.ulModuleId = pstPrintSwtReq->ulModuleId;

    /*�����FW�ظ�*/
    ret = diag_AgentCnfFun((VOS_UINT8*)&stPrintSwtCnf,ulCmdId,sizeof(DIAG_CMD_LOG_CAT_PRINT_CNF_STRU));
#endif
    return ret;

}
/*****************************************************************************
 Function Name   : diag_GetTimeStampInitValue
 Description     : �ú�������hidis��ȡ������TL��Gu��ʱ�����ʼֵ����
 Input           : pstReq ����������
                   ulCmdId ����ID
 Output          : None
 Return          : VOS_UINT32
*****************************************************************************/
VOS_UINT32 diag_GetTimeStampInitValue(VOS_UINT8* pstReq , VOS_UINT32 ulCmdId)
{
    VOS_UINT ret = ERR_MSP_SUCCESS;
#if(VOS_OS_VER == VOS_LINUX)
    DIAG_TIMESTAMP_CNF_STRU timestampCnf = {0};

    timestampCnf.ulGuTimeStampInitValue = mdrv_timer_get_normal_timestamp();
    timestampCnf.ulTLTimeStampInitValue = diag_GetFrameTime();
    timestampCnf.ulErrcode              = ret;
    /*�����FW�ظ�*/
    ret = diag_AgentCnfFun((VOS_UINT8*)&timestampCnf, ulCmdId,sizeof(DIAG_TIMESTAMP_CNF_STRU));
#endif
    return (VOS_UINT32)ret;
}
/*****************************************************************************
 Function Name   : diag_ConnProcEntry
 Description     : �ú���Ϊ����DIAG FW��������HSO���������������
 Input           : pstReq ����������
                   ulCmdId ����ID
 Output          : None
 Return          : VOS_UINT32

 History         :
    1.y00228784      2012-11-22  Draft Enact

*****************************************************************************/
VOS_UINT32 diag_ConnProcEntry(VOS_UINT8* pstReq , VOS_UINT32 ulCmdId)
{
    VOS_UINT32 ret = ERR_MSP_SUCCESS;

    switch(MSP_STRU_ID_0_15_CMD_CATEGORY(ulCmdId))
    {
        case DIAG_CMD_HOST_CONNECT:
            ret = diag_ConnProc(pstReq,ulCmdId);
            break;
        case DIAG_CMD_HOST_DISCONNECT:
            ret = diag_DisConnProc(pstReq,ulCmdId);
            break;
#if(VOS_OS_VER == VOS_LINUX)
        case DIAG_CMD_GET_TIMESTAMP_INIT_VALUE:
            ret = diag_GetTimeStampInitValue(pstReq,ulCmdId);
            break;
#if (FEATURE_OFF == FEATURE_MERGE_OM_CHAN)
        case DIAG_CMD_SET_LOG_MODE:
            ret = diag_LogSaveProc(pstReq,ulCmdId);
            break;
#endif
#endif
        default:
            ret = ERR_MSP_INVALID_PARAMETER;
            break;
    }
    return ret;
}

/*****************************************************************************
 Function Name   : diag_ConnProc
 Description     : �ú������ڴ���ConnProcEntry��������HSO��������
 Input           : pstReq ����������
 Output          : None
 Return          : VOS_UINT32

 History         :
    1.y00228784      2012-11-22  Draft Enact

*****************************************************************************/
VOS_UINT32 diag_ConnProc(VOS_UINT8* pstReq,VOS_UINT32 ulCmdId)
{
    VOS_UINT32 ret      = ERR_MSP_SUCCESS;
    VOS_UINT32 ulCnfRst = ERR_MSP_UNAVAILABLE;
#if (VOS_OS_VER == VOS_LINUX)
    DIAG_CMD_HOST_CONNECT_CNF_STRU stCnf = {0};
    const MODEM_VER_INFO_S* pstVerInfo = VOS_NULL;
	DIAG_CMD_REPLAY_SET_REQ_STRU stReplay={0};
#else

#ifndef FEATURE_UPGRADE_TL
    VOS_INT32 lReqId = 0;
#endif
#endif

    /*�������п���״̬Ϊδ��*/
    diag_CfgResetAllSwt();

    /*��������״̬����ֵ*/
    ulCnfRst = diag_CfgSetGlobalBitValue(&g_ulDiagCfgInfo,DIAG_CFG_CONN_BIT,DIAG_CFG_SWT_OPEN);

    DIAG_DEBUG_SDM_FUN(EN_DIAG_DEBUG_CONN_CFG, ulCnfRst, 0, 0);

#if (VOS_OS_VER == VOS_LINUX)
    VOS_MemSet(&(stCnf.stBuildVersion), 0, sizeof(DIAG_CMD_UE_BUILD_VER_STRU));

    /*��ȡ�汾��Ϣ*/
    pstVerInfo = mdrv_ver_get_info();
	if(pstVerInfo!=NULL)
	{
        stCnf.stBuildVersion.usVVerNo        = pstVerInfo->stswverinfo.ulVVerNO;
        stCnf.stBuildVersion.usRVerNo        = pstVerInfo->stswverinfo.ulRVerNO;
        stCnf.stBuildVersion.usCVerNo        = pstVerInfo->stswverinfo.ulCVerNO;
        stCnf.stBuildVersion.usBVerNo        = pstVerInfo->stswverinfo.ulBVerNO;
        stCnf.stBuildVersion.usSpcNo         = pstVerInfo->stswverinfo.ulSpcNO;
        stCnf.stBuildVersion.usHardwareVerNo = pstVerInfo->stswverinfo.ulCustomNOv;
        stCnf.stBuildVersion.ulProductNo     = pstVerInfo->stswverinfo.ulProductNo;
	}

    /*��ȡIMEI��*/
    ret = diag_GetImei(stCnf.szImei);
    if(ret)
    {
    }

    /*��ȡ����汾��*/
    VOS_MemSet(&stCnf.stUeSoftVersion,0,sizeof(DIAG_CMD_UE_SOFT_VERSION_STRU));

    /*��ȡ���ɻ���ַ*/
    stCnf.ulChipBaseAddr = (VOS_UINT32)pstVerInfo->stproductinfo.echiptype;
    //stCnf.ulChipBaseAddr = (VOS_UINT32)V7R1_PILOT_CHIP;

    /*·����Ϣ��ȡ*/
    ret = NVM_Read(EN_NV_ID_AGENT_FLAG,&(stCnf.stAgentFlag),sizeof(NV_ITEM_AGENT_FLAG_STRU));
    if(ret)
    {
    }

    /*��HIDSȷ�ϴ˴�����ʹ��,��׮������*/
    stCnf.diag_cfg.CtrlFlag.ulDrxControlFlag = 0;
    /*lint -save -e40*/
    stCnf.diag_cfg.CtrlFlag.ulPortFlag = 1;

	ulCnfRst |= diag_SendMsg(diag_GetAgentPid(),PS_PID_MM,ID_MSG_DIAG_CMD_REPLAY_TO_PS,(VOS_UINT8*)&stReplay,\
					sizeof(DIAG_CMD_REPLAY_SET_REQ_STRU));
    /*lint -restore  +e40*/
#if (FEATURE_OFF == FEATURE_MERGE_OM_CHAN)
    /*��ȡ��ǰ��ȡģʽ*/
    stCnf.ulLpdMode = diag_GetLogSendType();
#endif

    /*������*/
    stCnf.ulRc = ulCnfRst;

    VOS_MemCpy(stCnf.szProduct,PRODUCT_FULL_VERSION_STR,sizeof(PRODUCT_FULL_VERSION_STR));

    /*�����FW�ظ�*/
    ret = diag_AgentCnfFun((VOS_UINT8*)&stCnf,ulCmdId,sizeof(DIAG_CMD_HOST_CONNECT_CNF_STRU));
#else
#ifndef FEATURE_UPGRADE_TL
/*lint -save -e539 -e830*/
    if(0 == g_ulDiagDfsCtrl)
    {
        (VOS_VOID)mdrv_pm_dfs_qos_get(DFS_QOS_ID_DDR_MINFREQ_E, 800*1000, &lReqId);
    }
#endif
/*lint -save -e18*/
    diag_EnableSocpChan();
/*lint -restore +e18*/
/*lint -restore*/
#endif
#if (FEATURE_BSP_LCH_OM == FEATURE_ON)
    mdrv_om_set_hsoflag(1);
#endif

#if((VOS_OS_VER == VOS_VXWORKS) || (VOS_OS_VER == VOS_RTOSCK))
    /*lint -save -e718 -e746*/
    /*��������*/
    diag_AgentConnectCmdProc(DIAG_CONNECT_CMD);
    /*lint -restore*/
#endif
    return ret;
}


/*****************************************************************************
 Function Name   : diag_DisConnProc
 Description     : �ú������ڴ���ConnProcEntry��������HSO�Ͽ�����
 Input           : pstReq ����������
 Output          : None
 Return          : VOS_UINT32

 History         :
    1.y00228784      2012-11-22  Draft Enact

*****************************************************************************/
VOS_UINT32 diag_DisConnProc(VOS_UINT8* pstReq,VOS_UINT32 ulCmdId)
{
#if(VOS_OS_VER == VOS_LINUX)
    VOS_UINT32 reqLen = 0;
#endif
    VOS_UINT32 ulRst = ERR_MSP_SUCCESS;

    /*�������п���״̬Ϊδ��*/
    diag_CfgResetAllSwt();

    DIAG_DEBUG_SDM_FUN(EN_DIAG_DEBUG_DIS_CONN_CFG, 0, 0, 0);

#if(VOS_OS_VER == VOS_LINUX)
    reqLen = (((MSP_DIAG_HEAD_STRU*)DIAG_OFFSET_SOCP_GET_DIAG_HEAD(pstReq))->ulDataSize) + sizeof(MSP_DIAG_HEAD_STRU)
                + sizeof(MSP_SOCP_HEAD_STRU);

    /*�����FW�ظ�*/
    ulRst = diag_AgentCnfFun((VOS_UINT8*)&pstReq, ulCmdId, reqLen);
#endif
#if (FEATURE_BSP_LCH_OM == FEATURE_ON)
    mdrv_om_set_hsoflag(0);
#endif

    /*���߶Ͽ�����*/
#if((VOS_OS_VER == VOS_VXWORKS) || (VOS_OS_VER == VOS_RTOSCK))
    diag_AgentConnectCmdProc(DIAG_DISCONNECT_CMD);
#endif
    return ulRst;
}

#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

