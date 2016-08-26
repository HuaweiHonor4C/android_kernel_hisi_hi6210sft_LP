/******************************************************************************

                  ��Ȩ���� (C), 2001-2011, ��Ϊ�������޹�˾

 ******************************************************************************
  �� �� ��      : OmappOperator.c
  �� �� ��      : ����
  ��    ��      : jinni168360
  ��������      : 2012��08��08��
  ����޸�      :
  ��������      : ��C�ļ�������OmappOperatorģ���ʵ��
  �����б�      :
  �޸���ʷ      :
  1.��    ��    : 2012��08��08��
    ��    ��    : jinni 168360
    �޸�����    : �����ļ�

******************************************************************************/
/*****************************************************************************
  1 ͷ�ļ�����
*****************************************************************************/
#include "NVIM_Interface.h"
#include "omappoperator.h"
#include "OmApp.h"
#include "OmAppRl.h"
#include "omprintf.h"
#include "TafNvInterface.h"
#include "SCMProc.h"

#ifdef __cplusplus
#if __cplusplus
extern "C"{
#endif
#endif

/*lint -e767 �޸���:���� 47350;ԭ��:Log��ӡ */
#define    THIS_FILE_ID        PS_FILE_ID_ACPU_OMOPERATOR_C
/*lint +e767 �޸���:���� 47350;*/


/*****************************************************************************
  2 ȫ�ֱ�������
*****************************************************************************/

/*****************************************************************************
  3 ��������
*****************************************************************************/
/*��Ҫ���м�Ȩ��NV��*/
VOS_UINT16                      g_ausAcpuOMNvAuthIdList[] =
{
    en_NV_Item_IMEI,
    en_NV_Item_USB_Enum_Status,
    en_NV_Item_CustomizeSimLockPlmnInfo,
    en_NV_Item_CardlockStatus,
    en_NV_Item_CustomizeSimLockMaxTimes,
    en_NV_Item_CustomizeService,
    en_NV_Item_PRODUCT_ID,
    en_NV_Item_PREVENT_TEST_IMSI_REG,
    en_NV_Item_AT_SHELL_OPEN_FLAG,
};

/*��¼��ǰ�û����û�Ȩ��*/
static VOS_UINT32               g_ulAcpuOMPrivilegeLevel = LEVEL_NORMAL;

/*****************************************************************************
 Prototype       : OM_ReadNv
 Description     : Read the NV by NV ID and return the content.
                   APP->OM:
                    struct
                    {
                         ulCount               32         Ҫ��ȡ��NV�����
                         ausNvItemId[n]     n*16          Ҫ��ȡ��NV��ID���飬����n= usCount
                    }
                   OM->APP:
                    struct
                    {
                         ulErrorCode           32
                         ulCount               32       ���ص�NV�����
                         NvItem1Id         16       ��һ��NV��Id���
                         NvItem1Len        16       ��һ��NV�ĳ��ȣ���ByteΪ��λ
                         NvItem1Data[n1]       n1*16    ��һ��NV������
                    }
 Input           : pstAppToOmMsg  - The input msg received from APP side.
                   usReturnPrimId - The value of the returned PrimId.
 Output          : None.
 Return Value    : VOS_OK  - Success.
                   VOS_ERR - Failure.


 History         : ---
    Date         : 2008-03-20
    Author       : g47350
    Modification : Created function
 *****************************************************************************/
VOS_UINT32 OM_AcpuReadNv(APP_OM_MSG_EX_STRU *pstAppToOmMsg, VOS_UINT16 usReturnPrimId)
{
    OM_APP_MSG_EX_STRU      *pstOmToAppMsg;
    APP_OM_READ_NV_STRU     *pstAppOmReadNv;
    OM_APP_READ_NV_STRU     *pstOmAppReadNv;
    VOS_UINT16              *pusOmToAppPara;
    VOS_UINT32               ulCount;
    VOS_UINT32               ulIndex;
    VOS_UINT32               ulTotalSize = 0;
    VOS_UINT32               ulResult;
    VOS_UINT16               usNvId;
    VOS_UINT32               ulNvLen;

    pstAppOmReadNv = (APP_OM_READ_NV_STRU*)(pstAppToOmMsg->aucPara);
    ulCount = pstAppOmReadNv->ulCount;

    /*Get the total length of all NV items.*/
    for (ulIndex = 0; ulIndex < ulCount; ulIndex++)
    {
        usNvId = pstAppOmReadNv->ausNvItemId[ulIndex];
        ulResult = NV_GetLength(usNvId, &ulNvLen);
        if (VOS_OK != ulResult)
        {
            NV_GET_RETURN(ulResult, usNvId);
            OM_AcpuSendResultChannel(pstAppToOmMsg->ucCpuId, pstAppToOmMsg->ucFuncType, ulResult, usReturnPrimId);
            PS_LOG1(WUEPS_PID_OM, 0, PS_PRINT_ERROR,
                        "OM_AcpuReadNv:NV_GetLength, NV id: ",(VOS_INT32)usNvId);

            return ulResult;
        }
        ulTotalSize += ulNvLen;
    }

    /*Allocate the memory space.*/
    ulTotalSize += OM_APP_MSG_EX_LEN + OM_READ_NV_HEAD_SIZE + (ulCount*OM_NV_ITEM_SIZE);
    pstOmToAppMsg = (OM_APP_MSG_EX_STRU*)VOS_AssistantMemAlloc(WUEPS_PID_OM,
                                                   DYNAMIC_MEM_PT, ulTotalSize);
    if (VOS_NULL_PTR == pstOmToAppMsg)
    {
        OM_AcpuSendResultChannel(pstAppToOmMsg->ucCpuId, pstAppToOmMsg->ucFuncType, VOS_ERR, usReturnPrimId);
        PS_LOG(WUEPS_PID_OM, 0, PS_PRINT_ERROR, "OM_AcpuReadNv:VOS_MemAlloc.\n");
        return VOS_ERR;

    }
    /*Assign the return value and the count to struct's fields.*/
    pstOmAppReadNv = (OM_APP_READ_NV_STRU*)(pstOmToAppMsg->aucPara);
    pstOmAppReadNv->ulErrorCode = VOS_OK;
    pstOmAppReadNv->ulCount = ulCount;

    pusOmToAppPara = (VOS_UINT16*)(pstOmAppReadNv->ausNVItemData);
    /*Read the NV content by the NV Id.*/
    for(ulIndex = 0; ulIndex < ulCount; ulIndex++)
    {
        usNvId = pstAppOmReadNv->ausNvItemId[ulIndex];
        NV_GetLength(usNvId, &ulNvLen);

        *pusOmToAppPara = usNvId;
        pusOmToAppPara++;
        *pusOmToAppPara = (VOS_UINT16)ulNvLen;
        pusOmToAppPara++;

        ulResult = NV_ReadEx(OM_GET_FUNCID_MODEMINFO(pstAppToOmMsg->ucFuncType),
                            usNvId, pusOmToAppPara, ulNvLen);
        if (NV_OK != ulResult)
        {
            NV_GET_RETURN(ulResult, usNvId);
            OM_AcpuSendResultChannel(pstAppToOmMsg->ucCpuId, pstAppToOmMsg->ucFuncType, ulResult, usReturnPrimId);
            VOS_MemFree(WUEPS_PID_OM, pstOmToAppMsg);
            PS_LOG1(WUEPS_PID_OM, 0, PS_PRINT_ERROR,
                    "OM_AcpuReadNv:NV_Read, NV id:", (VOS_INT32)usNvId);
            return ulResult;
        }
        pusOmToAppPara += ulNvLen/sizeof(VOS_UINT16);
    }

    pstOmToAppMsg->usLength = (VOS_UINT16)(ulTotalSize - VOS_OM_HEADER_LEN);
    OM_AcpuSendContentChannel(pstAppToOmMsg->ucCpuId, pstAppToOmMsg->ucFuncType, (OM_RSP_PACKET_STRU *)pstOmToAppMsg, usReturnPrimId);
    VOS_MemFree(WUEPS_PID_OM, pstOmToAppMsg);

    return VOS_OK;
}

/*****************************************************************************
 Prototype       : OM_IsAuthNv
 Description     : �жϴ�NV���Ƿ���Խ����޸�

 Input           : usNvId  - NV��ID.

 Output          : None.
 Return Value    : VOS_YES  - ���Խ����޸�.
                   VOS_NO   - ��ֹ�����޸�.

 History         : ---
    Date         : 2009-07-28
    Author       : g47350
    Modification : Created function
 *****************************************************************************/
VOS_UINT32 OM_IsAcpuAuthNv(VOS_UINT16 usNvId)
{
    VOS_UINT32 ulIndex;

    for (ulIndex = 0; ulIndex
            < (sizeof(g_ausAcpuOMNvAuthIdList)/sizeof(VOS_UINT16)); ulIndex++)
    {
        if (usNvId == g_ausAcpuOMNvAuthIdList[ulIndex])
        {
            if (LEVEL_ADVANCED == g_ulAcpuOMPrivilegeLevel)
            {
                return VOS_YES;
            }
            return VOS_NO;
        }
    }

    return VOS_YES;
}

/*****************************************************************************
 Prototype       : OM_AcpuInitAuthVariable
 Description     : A�˳�ʼ����Ȩȫ�ֱ���

 Input           : VOS_VOID.
 Output          : VOS_VOID.
 Return Value    : VOS_VOID.

 History         : ---
    Date         : 2011-07-04
    Author       : g47350
    Modification : Created function
 *****************************************************************************/
VOS_VOID OM_AcpuInitAuthVariable(VOS_VOID)
{
    IMEI_STRU                   stIMEI;
    VOS_UINT8                   aucDefaultIMEI[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

    /*����IMEIΪĬ��ֵ������Ҫ��Ȩ*/
    if (NV_OK == NV_Read(en_NV_Item_IMEI, (VOS_VOID*)&stIMEI, sizeof(stIMEI)))
    {
        if (0 == VOS_MemCmp((VOS_CHAR*)aucDefaultIMEI, &stIMEI, sizeof(stIMEI)))
        {
            g_ulAcpuOMPrivilegeLevel = LEVEL_ADVANCED;
        }
    }

    return;
}

/*****************************************************************************
 Prototype       : OM_WriteNv
 Description     :
                  APP->OM:
                  struct
                  {
                        ulCount 32             Ҫ��ȡ��NV�����
                        NvItem1Id   16         ��һ��NV��Id���
                        NvItem1Len  16         ��һ��NV�ĳ��ȣ���ByteΪ��λ
                        NvItem1Data[n1] n1*16  ��һ��NV������
                  }
                  OM->APP:
                  ulErrorCode   32      ��μ�"��65 UlErrorCode�����"

 Input           : pstAppToOmMsg  - The input msg received from APP side.
                   usReturnPrimId - The value of the returned PrimId.
 Output          : None.
 Return Value    : VOS_OK  - Success.
                   VOS_ERR - Failure.

 History         : ---
    Date         : 2008-03-20
    Author       : g47350
    Modification : Created function

    Date         : 2008-11-12
    Author       : g47350
    Modification : Change NV interface to NV Auth interface.
 *****************************************************************************/
VOS_UINT32 OM_AcpuWriteNv(APP_OM_MSG_EX_STRU *pstAppToOmMsg, VOS_UINT16 usReturnPrimId)
{
    APP_OM_WRITE_NV_STRU   *pstAppOmWriteNv;
    VOS_UINT16             *pusAppToOmPara;
    VOS_UINT32              ulCount;
    VOS_UINT32              ulIndex;
    VOS_UINT16              usNvId;
    VOS_UINT16              usNvLen;
    VOS_UINT32              ulResult;

    pstAppOmWriteNv = (APP_OM_WRITE_NV_STRU*)(pstAppToOmMsg->aucPara);
    /*Get the number of all NV Id.*/
    ulCount = pstAppOmWriteNv->ulCount;

    pusAppToOmPara = (VOS_UINT16*)(pstAppOmWriteNv->ausNvItemData);
    /*Write the NV content by NV Id.*/
    for (ulIndex = 0; ulIndex < ulCount; ulIndex++)
    {
        usNvId  = *pusAppToOmPara;
        pusAppToOmPara++;
        usNvLen = *pusAppToOmPara;
        pusAppToOmPara++;

        /*�жϴ�NV���Ƿ���Ҫ���м�Ȩ*/
        if (VOS_YES != OM_IsAcpuAuthNv(usNvId))
        {
            OM_AcpuSendResultChannel(pstAppToOmMsg->ucCpuId, pstAppToOmMsg->ucFuncType, OM_NEED_AUTH, usReturnPrimId);
            PS_LOG1(WUEPS_PID_OM, 0, PS_PRINT_WARNING,
                    "OM_AcpuWriteNv:OM_IsAcpuAuthNv, NV id:", (VOS_INT32)usNvId);

            return VOS_ERR;
        }

        ulResult = NV_WriteEx(OM_GET_FUNCID_MODEMINFO(pstAppToOmMsg->ucFuncType),
                                usNvId, pusAppToOmPara, (VOS_UINT32)usNvLen);
        if(NV_OK != ulResult)
        {
            NV_GET_RETURN(ulResult, usNvId);
            OM_AcpuSendResultChannel(pstAppToOmMsg->ucCpuId, pstAppToOmMsg->ucFuncType, ulResult, usReturnPrimId);
            PS_LOG1(WUEPS_PID_OM, 0, PS_PRINT_ERROR,
                        "OM_AcpuWriteNv:NV_Write, NV id:", (VOS_INT32)usNvId);

            return VOS_ERR;
        }
        /*���ڷ��ص�usNvLen��byteΪ��λ��������Ҫ����ָ��ָ�����͵Ĵ�С*/
        pusAppToOmPara += (usNvLen/sizeof(VOS_UINT16));
    }

    OM_AcpuSendResultChannel(pstAppToOmMsg->ucCpuId, pstAppToOmMsg->ucFuncType, NV_OK, usReturnPrimId);

    return VOS_OK;
}

/*****************************************************************************
 Prototype       : OM_GetNvIdList
 Description     : Get the NV ID list.
 Input           : pstAppToOmMsg  - The input msg received from APP side.
                   usReturnPrimId - The value of the returned PrimId.
 Output          : None.
 Return Value    : VOS_OK  - Success.
                   VOS_ERR - Failure.


 History         : ---
    Date         : 2008-03-20
    Author       : g47350
    Modification : Created function
 *****************************************************************************/
VOS_UINT32 OM_AcpuGetNvIdList(APP_OM_MSG_EX_STRU *pstAppToOmMsg,
                                          VOS_UINT16 usReturnPrimId)
{
    VOS_UINT32              ulNvNum;
    VOS_UINT32              ulTotalLen;
    OM_APP_MSG_EX_STRU      *pstOmToAppMsg;
    VOS_UINT32              ulResult;
    OM_APP_GET_NV_LIST_STRU *pstOmGetNvList;

    ulNvNum = NV_GetNVIdListNum();
    /*No NV exist*/
    if (0 == ulNvNum)
    {
        OM_AcpuSendResultChannel(pstAppToOmMsg->ucCpuId, pstAppToOmMsg->ucFuncType, VOS_ERR, usReturnPrimId);
        PS_LOG(WUEPS_PID_OM, 0, PS_PRINT_ERROR, "OM_AcpuGetNvIdList:No NV exist.\n");
        return VOS_ERR;
    }

    /*APP_HEAD + Result + NV nums + NV ID/LEN lists*/
    ulTotalLen = sizeof(OM_APP_MSG_EX_STRU) + sizeof(VOS_UINT32)
                        + (ulNvNum*sizeof(NV_LIST_INFO_STRU));

    pstOmToAppMsg = (OM_APP_MSG_EX_STRU*)VOS_MemAlloc(
                                   WUEPS_PID_OM, DYNAMIC_MEM_PT, ulTotalLen);

    if (VOS_NULL_PTR == pstOmToAppMsg)
    {
        OM_AcpuSendResultChannel(pstAppToOmMsg->ucCpuId, pstAppToOmMsg->ucFuncType, VOS_ERR, usReturnPrimId);
        PS_LOG(WUEPS_PID_OM, 0, PS_PRINT_ERROR, "OM_AcpuGetNvIdList:VOS_MemAlloc Fail.");
        return VOS_ERR;
    }

    pstOmGetNvList = (OM_APP_GET_NV_LIST_STRU*)(pstOmToAppMsg->aucPara);

    /*��ȡÿ��NV���ID�ͳ���*/
    ulResult = NV_GetNVIdList(pstOmGetNvList->astNvInfo);
    if (NV_OK != ulResult)
    {
        VOS_MemFree(WUEPS_PID_OM, pstOmToAppMsg);

        OM_AcpuSendResultChannel(pstAppToOmMsg->ucCpuId, pstAppToOmMsg->ucFuncType, ulResult, usReturnPrimId);
        PS_LOG(WUEPS_PID_OM, 0, PS_PRINT_ERROR, "OM_AcpuGetNvIdList:VOS_MemAlloc Fail.");
        return VOS_ERR;
    }

    /*��дִ�н����NV����Ŀ*/
    pstOmGetNvList->ulErrorCode     = VOS_OK;
    pstOmGetNvList->usCount         = (VOS_UINT16)ulNvNum;
    pstOmGetNvList->ucMsgIndex      = 1;    /*�ְ���������Ĭ��Ϊ1*/
    pstOmGetNvList->ucTotalMsgCnt   = 1;    /*�ְ���������Ĭ��Ϊ1*/

    pstOmToAppMsg->usLength = (VOS_UINT16)(ulTotalLen - VOS_OM_HEADER_LEN);
    OM_AcpuSendContentChannel(pstAppToOmMsg->ucCpuId, pstAppToOmMsg->ucFuncType, (OM_RSP_PACKET_STRU *)pstOmToAppMsg, usReturnPrimId);
    VOS_MemFree(WUEPS_PID_OM, pstOmToAppMsg);
    return VOS_OK;
}


VOS_UINT32 OM_AcpuCnfEstablishProc(APP_OM_MSG_EX_STRU *pstAppToOmMsg,
                                           VOS_UINT16 usReturnPrimId)
{
    VOS_UINT32                          ulRet;
#ifdef SCM_SNCHECK
    g_stSnCheck.ulCount = 0;
    g_ulSnErrCount      = 0;
#endif
    VOS_MemSet(&g_stAcpuTraceEventConfig, 0, sizeof(OM_TRACE_EVENT_CONFIG_PS_STRU));
    VOS_MemSet(g_astOmPrintfOutPutLev, 0, OM_PRINTF_MODULE_MAX_NUM*sizeof(LOG_LEVEL_EN));
    VOS_MemSet(g_aulLogPrintLevPsTable, 0, LOG_PS_MODULE_MAX_NUM*sizeof(LOG_LEVEL_EN));
    VOS_MemSet(g_aulLogPrintLevDrvTable, 0, LOG_DRV_MODULE_MAX_NUM*sizeof(LOG_LEVEL_EN));

    /* �ȶϿ���· */
    g_stAcpuCnfCtrlInfo.ulOMSwitchOnOff = OM_STATE_IDLE;

    /* �Լ���У׼���ߣ������ɹ��ظ�״̬��0x02 */
    ulRet = 0x02;

    /* �����߻ظ������ɹ�״̬ */
    OM_AcpuSendResultChannel(OM_LOGIC_CHANNEL_CNF, OM_QUERY_FUNC, ulRet, usReturnPrimId);

    /* ������· */
    g_stAcpuCnfCtrlInfo.ulOMSwitchOnOff = OM_STATE_ACTIVE;

#if 0
    /* ���ڶ�λLOGTOOLץ����LOGû��C��LOG�����⣬����V9ʹ�ã�V8ɾ�� */
    if (VOS_OK != OM_AcpuConnectInfoEventTimerStart())
    {
        PS_LOG(WUEPS_PID_OM, 0, PS_PRINT_WARNING, "OM_AcpuInit: OM_AcpuStartConnectEventTimerStart failed.\n");
    }
#endif


    /* ֪ͨCCPU��·״̬ */
    if(VOS_OK != GU_OamSndPcMsgToCcpu(&g_stAcpuCnfCtrlInfo,(VOS_UINT8*)pstAppToOmMsg, sizeof(APP_OM_MSG_EX_STRU)))
    {
        /* ��ӡ���� */
    }

    return VOS_OK;
}
VOS_UINT32 OM_AcpuEstablishReq(APP_OM_MSG_EX_STRU *pstAppToOmMsg,
                                           VOS_UINT16 usReturnPrimId)
{
    return OM_AcpuCnfEstablishProc(pstAppToOmMsg, usReturnPrimId);
}


VOS_VOID OM_NotifyOtherCpuReleaseLink(VOS_VOID)
{
    VOS_UINT32                          ulMsgId;

    ulMsgId                     = APP_OM_RELEASE_REQ;

    /* Ŀǰ���������ͨ�Ż������⣬��˳��˸�CCPU�������˲����Ͷ�����Ϣ������A�˻Ḵλ begin */
    /* ��HIFI֪ͨ��·�Ͽ���Ϣ */
    OMRL_AcpuSendMsg((VOS_UINT8*)&ulMsgId, sizeof(VOS_UINT32), ACPU_PID_OM, DSP_PID_HIFI_OM);

    /* ��MCU֪ͨ��·�Ͽ���Ϣ */
    /* OMRL_AcpuSendMsg((VOS_UINT8*)&ulMsgId, sizeof(VOS_UINT32), ACPU_PID_OM, ACPU_PID_MCU_OM); */
    /* Ŀǰ���������ͨ�Ż������⣬��˳��˸�CCPU�������˲����Ͷ�����Ϣ������A�˻Ḵλ end */
    return;
}
VOS_UINT32 OM_AcpuCnfReleaseProc(APP_OM_MSG_EX_STRU *pstAppToOmMsg,
                                           VOS_UINT16 usReturnPrimId)
{
    g_stAcpuCnfCtrlInfo.ulOMSwitchOnOff       = OM_STATE_IDLE;

    /* ͨ��ICCͨ��֪ͨCCPU��·�Ͽ� */
    if(VOS_OK != GU_OamSndPcMsgToCcpu(&g_stAcpuCnfCtrlInfo, (VOS_UINT8*)pstAppToOmMsg, sizeof(APP_OM_MSG_EX_STRU)))
    {
        /* ��ӡ���� */
        LogPrint("OM_AcpuReleaseReq: The ICC UDI Write is Error.\n");
    }

    OM_NotifyOtherCpuReleaseLink();

    g_stAcpuCnfCtrlInfo.stPcToUeSucRecord.stRlsData.ulDataLen = OM_GetSlice();
    g_stAcpuCnfCtrlInfo.stPcToUeSucRecord.stRlsData.ulNum++;

    return VOS_OK;
}


VOS_UINT32 OM_AcpuReleaseReq(APP_OM_MSG_EX_STRU *pstAppToOmMsg,
                                           VOS_UINT16 usReturnPrimId)
{
    OM_AcpuCnfReleaseProc(pstAppToOmMsg, usReturnPrimId);

    return VOS_OK;
}

/*****************************************************************************
  4 ��Ϣ������ӳ���
*****************************************************************************/
/*Global map table used to find the function according the PrimId.*/
OM_MSG_FUN_STRU g_astAcpuOmMsgFunTbl[] =
{
    {OM_AcpuReadNv,                    APP_OM_READ_NV_REQ,                OM_APP_READ_NV_IND},
    {OM_AcpuWriteNv,                   APP_OM_WRITE_NV_REQ,               OM_APP_WRITE_NV_CNF},
    {OM_AcpuGetNvIdList,               APP_OM_NV_ID_LIST_REQ,             OM_APP_NV_ID_LIST_CNF},
    {OM_AcpuEstablishReq,              APP_OM_ESTABLISH_REQ,              OM_APP_ESTABLISH_CNF},
    {OM_AcpuReleaseReq,                APP_OM_RELEASE_REQ,                OM_APP_RELEASE_CNF}
};
VOS_VOID OM_AcpuQueryMsgProc(OM_REQ_PACKET_STRU *pRspPacket, OM_RSP_FUNC *pRspFuncPtr)
{
    APP_OM_MSG_EX_STRU                 *pstAppToOmMsg;
    VOS_UINT32                          ulIndex;
    VOS_UINT32                          ulTotalNum;
    VOS_UINT16                          usPrimId;
    VOS_UINT16                          usReturnPrimId;
    VOS_UINT32                          ulResult = VOS_ERR;

    pstAppToOmMsg = (APP_OM_MSG_EX_STRU*)pRspPacket;
    ulTotalNum = sizeof(g_astAcpuOmMsgFunTbl)/sizeof(OM_MSG_FUN_STRU);
    usPrimId = pstAppToOmMsg->usPrimId;
    /*Search the corresponding function and return PrimId*/
    for (ulIndex = 0; ulIndex < ulTotalNum; ulIndex++)
    {
        if (usPrimId == (VOS_UINT16)(g_astAcpuOmMsgFunTbl[ulIndex].ulPrimId))
        {
            usReturnPrimId = (VOS_UINT16)(g_astAcpuOmMsgFunTbl[ulIndex].ulReturnPrimId);
            ulResult = g_astAcpuOmMsgFunTbl[ulIndex].pfFun(pstAppToOmMsg, usReturnPrimId);
            break;
        }
    }

    /*Can't find the function handles the usPrimId.*/
    if (ulIndex == ulTotalNum)
    {
        OM_AcpuSendResult(pstAppToOmMsg->ucFuncType, ulResult, usPrimId);
    }
    return;
}


/*****************************************************************************
 �� �� ��  : OmAcpuShowOnOff
 ��������  : �鿴��·����״̬
 �������  :
 �������  :
 �� �� ֵ  :
 ���ú���  :
 ��������  :
 �޸���ʷ  :
   1.��    ��  : 2009��5��18��
     ��    ��  : g47350
     �޸�����  : Creat Function
*****************************************************************************/
VOS_VOID OmAcpuShowOnOff(VOS_VOID)
{
    vos_printf("g_ulAcpuOMSwitchOnOff = %d\r\n",g_stAcpuCnfCtrlInfo.ulOMSwitchOnOff);

    return;
}

#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif

