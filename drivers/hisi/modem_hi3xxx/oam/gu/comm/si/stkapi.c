

#include "si_pb.h"
#include "siappstk.h"
#include "si_stk.h"
#include "product_config.h"

#if (OSA_CPU_CCPU == VOS_OSA_CPU)
#include "UsimPsInterface.h"
#endif

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif /* __cpluscplus */
#endif /* __cpluscplus */


/*****************************************************************************
    Э��ջ��ӡ��㷽ʽ�µ�.C�ļ��궨��
*****************************************************************************/
/*lint -e767*/
#define    THIS_FILE_ID PS_FILE_ID_STK_API_C
/*lint +e767*/

/*****************************************************************************
�� �� ��  : GetMainMenu
��������  : ��ȡSTK���ܵ����˵�
�������  : ��
�������  : ��
�� �� ֵ  : SI_UINT32 ����ִ�н��
���ú���  : ��
��������  : �ⲿ�ӿ�
History     :
1.��    ��  : 2009��7��6��
  ��    ��  : H9254
  �޸�����  : Create
*****************************************************************************/
SI_UINT32 SI_STK_SendReqMsg(MN_CLIENT_ID_T ClientId,MN_OPERATION_ID_T OpId, SI_UINT32 MsgName,
                                    SI_UINT32 CmdType, SI_UINT32 DataLen, SI_UINT8 *pData)
{
    SI_STK_REQ_STRU         *pstSTKReq;
    SI_UINT32               ulSendPid;
    SI_UINT32               ulReceiverPid;
#if (OSA_CPU_ACPU == VOS_OSA_CPU)
#if ( FEATURE_MULTI_MODEM == FEATURE_ON )
    MODEM_ID_ENUM_UINT16    enModemID;
#endif  /*( FEATURE_MULTI_MODEM == FEATURE_ON )*/

    ulSendPid = WUEPS_PID_AT;

#if ( FEATURE_MULTI_MODEM == FEATURE_ON )
    /* ���ýӿڻ�ȡModem ID */
    if(VOS_OK != AT_GetModemIdFromClient(ClientId,&enModemID))
    {
      STK_ERROR_LOG("SI_STK_SendReqMsg: AT_GetModemIdFromClient Return Error");
      return VOS_ERR;
    }

    if(MODEM_ID_1 == enModemID)
    {
        ulReceiverPid = I1_MAPS_STK_PID;
    }
    else
    {
        ulReceiverPid = I0_MAPS_STK_PID;
    }
#else
    ulReceiverPid = MAPS_STK_PID;
#endif  /*( FEATURE_MULTI_MODEM == FEATURE_ON )*/

#else   /*CCPU STK->STK*/
    ulSendPid = MAPS_STK_PID;
    ulReceiverPid = MAPS_STK_PID;
#endif  /* (OSA_CPU_ACPU == VOS_OSA_CPU) */

    pstSTKReq = (SI_STK_REQ_STRU *)VOS_AllocMsg(ulSendPid, sizeof(SI_STK_REQ_STRU)-VOS_MSG_HEAD_LENGTH+DataLen);

    if(VOS_NULL_PTR == pstSTKReq)
    {
        STK_ERROR_LOG("SI_STK_SendReqMsg: VOS_AllocMsg Return Error");
        return VOS_ERR;
    }

    pstSTKReq->MsgName       = MsgName;
    pstSTKReq->ulReceiverPid = ulReceiverPid;
    pstSTKReq->OpId          = OpId;
    pstSTKReq->ClientId      = ClientId;
    pstSTKReq->SatType       = CmdType;
    pstSTKReq->Datalen       = DataLen;

    if(DataLen != 0)
    {
        VOS_MemCpy(pstSTKReq->Data, pData, DataLen);
    }

    if(VOS_OK != VOS_SendMsg(ulSendPid, pstSTKReq))
    {
        return VOS_ERR;
    }

    return VOS_OK;
}

#if  ((OSA_CPU_ACPU == VOS_OSA_CPU) || (defined(DMT)))
/*****************************************************************************
�� �� ��  : GetMainMenu
��������  : ��ȡSTK���ܵ����˵�
�������  : ��
�������  : ��
�� �� ֵ  : SI_UINT32 ����ִ�н��
���ú���  : ��
��������  : �ⲿ�ӿ�
History     :
1.��    ��  : 2009��7��6��
  ��    ��  : H9254
  �޸�����  : Create
*****************************************************************************/
SI_UINT32 SI_STK_GetMainMenu(MN_CLIENT_ID_T ClientId,MN_OPERATION_ID_T OpId)
{
    return SI_STK_SendReqMsg(ClientId,OpId, SI_STK_GETMAINMNUE, SI_STK_NOCMDDATA,0,VOS_NULL_PTR);
}


SI_UINT32 SI_STK_GetSTKCommand(MN_CLIENT_ID_T      ClientId,
                                            MN_OPERATION_ID_T   OpId,
                                            SI_STK_CMD_TYPE     CmdType)
{
    return SI_STK_SendReqMsg(ClientId,OpId, SI_STK_GETCOMMAND, CmdType,0,VOS_NULL_PTR);
}


SI_UINT32 SI_STK_QuerySTKCommand(MN_CLIENT_ID_T      ClientId,
                                                MN_OPERATION_ID_T   OpId)
{
#if (( FEATURE_MULTI_MODEM == FEATURE_ON )&&(!defined(DMT)))
    return VOS_ERR;
#else
    return SI_STK_SendReqMsg(ClientId,OpId, SI_STK_QUERYCOMMAND, SI_STK_NOCMDDATA,0,VOS_NULL_PTR);
#endif
}


SI_UINT32 SI_STK_DataSendSimple(MN_CLIENT_ID_T           ClientId,
                                            MN_OPERATION_ID_T       OpId,
                                            SI_SEND_DATA_TYPE       SendType,
                                            SI_UINT32               DataLen,
                                            SI_UINT8                *pData)
{
    return SI_STK_SendReqMsg(ClientId,OpId, SI_STK_SIMPLEDOWN,SendType,DataLen,pData);
}


SI_UINT32 SI_STK_TerminalResponse(MN_CLIENT_ID_T            ClientId,
                                             MN_OPERATION_ID_T          OpId,
                                             SI_STK_TERMINAL_RSP_STRU*  pstTRStru)
{
#if (( FEATURE_MULTI_MODEM == FEATURE_ON )&&(!defined(DMT)))
    return VOS_ERR;
#else

    if(pstTRStru == VOS_NULL_PTR)
    {
        STK_ERROR_LOG("SI_STK_TerminalResponse: The input parameter is null.");

        return VOS_ERR;
    }

    return SI_STK_SendReqMsg(ClientId,OpId, SI_STK_TRDOWN, SI_STK_NOCMDDATA,sizeof(SI_STK_TERMINAL_RSP_STRU),(VOS_UINT8*)pstTRStru);
#endif
}



SI_UINT32 SI_STKDualIMSIChangeReq(MN_CLIENT_ID_T      ClientId,
                                              MN_OPERATION_ID_T   OpId)
{
#if (( FEATURE_MULTI_MODEM == FEATURE_ON )&&(!defined(DMT)))
    return TAF_FAILURE;
#else
    SI_STK_REQ_STRU *pstSTKReq;

    pstSTKReq = (SI_STK_REQ_STRU *)VOS_AllocMsg(WUEPS_PID_AT, sizeof(SI_STK_REQ_STRU)-VOS_MSG_HEAD_LENGTH);

    if(VOS_NULL_PTR ==pstSTKReq)
    {
        STK_ERROR_LOG("SI_STKDualIMSIChangeReq: VOS_AllocMsg Return Error");
        return VOS_ERR;
    }

    pstSTKReq->ClientId      = ClientId;
    pstSTKReq->OpId          = OpId;
    pstSTKReq->MsgName       = SI_STK_IMSICHG;
    pstSTKReq->ulReceiverPid = MAPS_STK_PID;

    if(VOS_OK != VOS_SendMsg(MAPS_STK_PID, pstSTKReq))
    {
        STK_ERROR_LOG("SI_STKDualIMSIChangeReq: VOS_SendMsg Return Error");
        return VOS_ERR;
    }

    return VOS_OK;
#endif
}


VOS_UINT32 SI_STKIsDualImsiSupport(VOS_VOID)
{
#if (( FEATURE_MULTI_MODEM == FEATURE_ON )&&(!defined(DMT)))
    return TAF_FAILURE;
#else
    VOS_UINT16 usDualIMSIFlag = 0;

    if ( NV_OK != NV_Read(en_NV_Item_NV_HUAWEI_DOUBLE_IMSI_CFG_I, &usDualIMSIFlag, sizeof(VOS_UINT16)) )
    {
        STK_WARNING_LOG("STK_InitGobal: Read en_NV_Item_NV_HUAWEI_DOUBLE_IMSI_CFG_I Fail");
    }

    /* ǰ�������Խھ�Ϊ1��Dual IMSI���ܲſ�������һ���ֽ�ΪNV�����־���ڶ���Ϊʹ��λ */
    if ( STK_NV_ENABLED == usDualIMSIFlag )
    {
        return VOS_TRUE;
    }

    return VOS_FALSE;
#endif
}

SI_UINT32 SI_STK_MenuSelection(MN_CLIENT_ID_T        ClientId,
                                             MN_OPERATION_ID_T      OpId,
                                             SI_STK_ENVELOPE_STRU   *pstENStru)
{
#if (( FEATURE_MULTI_MODEM == FEATURE_ON )&&(!defined(DMT)))
    return TAF_FAILURE;
#else
    if((VOS_NULL_PTR == pstENStru)||(SI_STK_ENVELOPE_MENUSEL != pstENStru->EnvelopeType))
    {
        STK_ERROR_LOG("SI_STK_MenuSelection: The Input Data is Error");

        return VOS_ERR;
    }

    return SI_STK_SendReqMsg(ClientId,OpId, SI_STK_MENUSELECTION, pstENStru->EnvelopeType,sizeof(SI_STK_ENVELOPE_STRU),(SI_UINT8*)pstENStru);
#endif
}


VOS_UINT32 SI_STK_SetUpCallConfirm(MN_CLIENT_ID_T ClientId, SI_STK_SETUPCALLCONFIRM_ENUM_UINT32 enAction)
{
    /* ������� */
    if (SI_STK_SETUPCALL_BUTT <= enAction)
    {
        STK_ERROR_LOG("SI_STK_SetUpCallConfirm: The Input Para is Error");

        return VOS_ERR;
    }

    return SI_STK_SendReqMsg(ClientId, 0, SI_STK_SETUPCALL_CONFIRM, SI_STK_SETUPCALL, sizeof(VOS_UINT32), (SI_UINT8 *)&enAction);
}
#endif

#if ((OSA_CPU_CCPU == VOS_OSA_CPU) || (defined(DMT)))
VOS_VOID SI_STKGetCurImsiSign(VOS_UINT16 *pusDualIMSIEnable, VOS_UINT32 *pulCurImsiSign)
{
    VOS_UINT32 i;
    VOS_UINT32 j;

    *pulCurImsiSign = gstSTKIMSIChgCtrl.ulCurImsiSign;

    *pusDualIMSIEnable = VOS_FALSE;

    /* �ж��Ƿ�������˵� */
    if (SI_STK_MENU_EXIST != gstSetUpMenuData.ucUsatTag)
    {
        STK_WARNING_LOG("SI_STKGetCurImsiSign: There is any Main Menu Content");

        return;
    }

    /* �����˵���ƥ�䣬���ƥ��ʧ��pusDualIMSIEnable����ΪDisable��*/
    for (i = 0; i < gstSetUpMenuData.stSetUpMenu.ulItemNum; i++)
    {
        for (j = 0; j < gstSTKIMSIMatch.usMatchStrCnt; j++)
        {
            if (VOS_TRUE == SI_STK_StrStr(gstSetUpMenuData.stSetUpMenu.Item[i].pucItemText,
                                          gstSTKIMSIMatch.astMatchStr[j].aucMatchStr,
                                          gstSetUpMenuData.stSetUpMenu.Item[i].ucLen,
                                          gstSTKIMSIMatch.astMatchStr[j].usStrLen))
            {
                *pusDualIMSIEnable = VOS_TRUE;

                return;
            }
        }
    }

    return;
}


VOS_VOID SI_STK_CCResultInd(SI_STK_ENVELOPE_RSP_STRU    *pstRspData)
{
/*lint -e813*/
    SI_STK_EVENT_INFO_STRU              stEvent;

    VOS_MemSet(&stEvent, 0, sizeof(stEvent));

    stEvent.STKCBEvent                                  = SI_STK_CC_RESULT_IND_EVENT;
    stEvent.STKErrorNo                                  = VOS_OK;
    stEvent.STKCmdStru.CmdStru.STKCcIndInfo.ucResult    = (SI_UINT8)pstRspData->Result;

    if (USSD_STRING_TAG == (pstRspData->uResp.CallCtrlRsp.SpecialData.ucTag & 0x7F))
    {
        stEvent.STKCmdStru.CmdStru.STKCcIndInfo.ucType = SI_STK_USSD_CALL_CTRL;
    }
    else if (SS_STRING_TAG == (pstRspData->uResp.CallCtrlRsp.SpecialData.ucTag & 0x7F))
    {
        stEvent.STKCmdStru.CmdStru.STKCcIndInfo.ucType = SI_STK_SS_CALL_CTRL;
    }
    else if (ADDRESS_TAG == (pstRspData->uResp.CallCtrlRsp.SpecialData.ucTag & 0x7F))
    {
        stEvent.STKCmdStru.CmdStru.STKCcIndInfo.ucType = SI_STK_MO_CALL_CTRL;
    }
    else
    {
        return;
    }

    /* COPY aplhaid �ֶ� */
    if (VOS_TRUE == pstRspData->uResp.CallCtrlRsp.OP_Alaph)
    {
        stEvent.STKCmdStru.CmdStru.STKCcIndInfo.stAlphaIdInfo.ulAlphaLen
                                                        = pstRspData->uResp.CallCtrlRsp.AlphaId.ulLen;
        VOS_MemCpy(stEvent.STKCmdStru.CmdStru.STKCcIndInfo.stAlphaIdInfo.aucAlphaId,
                   pstRspData->uResp.CallCtrlRsp.AlphaId.pucAlphabet,
                   stEvent.STKCmdStru.CmdStru.STKCcIndInfo.stAlphaIdInfo.ulAlphaLen);
    }

    if (VOS_TRUE == pstRspData->uResp.CallCtrlRsp.OP_SepcialData)
    {
        /* ���������ֶ� */
        stEvent.STKCmdStru.CmdStru.STKCcIndInfo.uInfo.stCtrlDataInfo.ucDataType
                                                       = pstRspData->uResp.CallCtrlRsp.SpecialData.pValue[0];
        /* �����ֶ�copy */
        stEvent.STKCmdStru.CmdStru.STKCcIndInfo.uInfo.stCtrlDataInfo.usDataLen
                                                        = pstRspData->uResp.CallCtrlRsp.SpecialData.ucLen - 1;

        VOS_MemCpy(stEvent.STKCmdStru.CmdStru.STKCcIndInfo.uInfo.stCtrlDataInfo.aucData,
                   &pstRspData->uResp.CallCtrlRsp.SpecialData.pValue[1],
                   pstRspData->uResp.CallCtrlRsp.SpecialData.ucLen - 1);
    }

    SI_STKCallBack_BroadCast(&stEvent);
/*lint +e813*/
    return;
}
VOS_VOID SI_STK_SMSCtrlResultInd(SI_STK_ENVELOPE_RSP_STRU *pstRspData)
{
    //��Ҫȷ��addr1��Ŀ�ĵ�ַ����addr2
/*lint -e813*/
    SI_STK_EVENT_INFO_STRU              stEvent;

    VOS_MemSet(&stEvent, 0, sizeof(stEvent));

    stEvent.STKCBEvent                                  = SI_STK_SMSCTRL_RESULT_IND_EVENT;
    stEvent.STKErrorNo                                  = VOS_OK;
    stEvent.STKCmdStru.CmdStru.STKCcIndInfo.ucResult    = (SI_UINT8)pstRspData->Result;
    stEvent.STKCmdStru.CmdStru.STKCcIndInfo.ucType      = SI_STK_SMS_CTRL;


    /* COPY aplhaid �ֶ� */
    if (VOS_TRUE == pstRspData->uResp.MoSmsCtrlRsp.OP_Alaph)
    {

        stEvent.STKCmdStru.CmdStru.STKCcIndInfo.stAlphaIdInfo.ulAlphaLen
                                                        = pstRspData->uResp.MoSmsCtrlRsp.AlphaId.ulLen;
        VOS_MemCpy(stEvent.STKCmdStru.CmdStru.STKCcIndInfo.stAlphaIdInfo.aucAlphaId,
                   pstRspData->uResp.MoSmsCtrlRsp.AlphaId.pucAlphabet,
                   stEvent.STKCmdStru.CmdStru.STKCcIndInfo.stAlphaIdInfo.ulAlphaLen);
    }

    if (VOS_TRUE == pstRspData->uResp.MoSmsCtrlRsp.OP_Addr1)
    {
        /* ����Ŀ�ĵ�ַ�����ֶ� */
        stEvent.STKCmdStru.CmdStru.STKCcIndInfo.uInfo.stMoSmsCtrlInfo.stDstAddrInfo.ucNumType
                                                            = pstRspData->uResp.MoSmsCtrlRsp.Addr1.ucNumType;
        /* copyĿ�ĵ�ַ */
        stEvent.STKCmdStru.CmdStru.STKCcIndInfo.uInfo.stMoSmsCtrlInfo.stDstAddrInfo.ucAddrLen
                                                            = pstRspData->uResp.MoSmsCtrlRsp.Addr1.ucLen;

        VOS_MemCpy(stEvent.STKCmdStru.CmdStru.STKCcIndInfo.uInfo.stMoSmsCtrlInfo.stDstAddrInfo.aucAddr,
                   pstRspData->uResp.MoSmsCtrlRsp.Addr1.pucAddr,
                   pstRspData->uResp.MoSmsCtrlRsp.Addr1.ucLen);
    }


    if (VOS_TRUE == pstRspData->uResp.MoSmsCtrlRsp.OP_Addr2)
    {
        /* �����������ĵ�ַ�����ֶ� */
        stEvent.STKCmdStru.CmdStru.STKCcIndInfo.uInfo.stMoSmsCtrlInfo.stSerCenterAddrInfo.ucNumType
                                                          = pstRspData->uResp.MoSmsCtrlRsp.Addr2.ucNumType;

        /* copy�������ĺ��� */
        stEvent.STKCmdStru.CmdStru.STKCcIndInfo.uInfo.stMoSmsCtrlInfo.stSerCenterAddrInfo.ucAddrLen
                                                            =pstRspData->uResp.MoSmsCtrlRsp.Addr2.ucLen;

        VOS_MemCpy(stEvent.STKCmdStru.CmdStru.STKCcIndInfo.uInfo.stMoSmsCtrlInfo.stSerCenterAddrInfo.aucAddr,
                   pstRspData->uResp.MoSmsCtrlRsp.Addr2.pucAddr,
                   pstRspData->uResp.MoSmsCtrlRsp.Addr2.ucLen);
    }

    SI_STKCallBack_BroadCast(&stEvent);
/*lint +e813*/
    return;
}
VOS_VOID SI_STK_DecodeCCRspSpecial(VOS_UINT32                  ulDataLen,
                                            VOS_UINT8                   *pucCmdData,
                                            SI_STK_ENVELOPE_RSP_STRU    *pstRspData)
{
    VOS_UINT8   aucTagList[]={ADDRESS_TAG,SS_STRING_TAG,USSD_STRING_TAG,PDP_CONTEXT_ACTIVATION_PAR_TAG,EPSPDN_ACTIVE_PARA_TAG};
    VOS_UINT32  i;
    VOS_UINT32  ulCCTagOffset;

    for(i=0; i<sizeof(aucTagList); i++)
    {
        ulCCTagOffset = SI_STKFindTag(aucTagList[i], pucCmdData, ulDataLen, 1);

        if(ulCCTagOffset != SI_TAGNOTFOUND)
        {
            pstRspData->uResp.CallCtrlRsp.SpecialData.ucTag = pucCmdData[ulCCTagOffset-1] & 0x7F;
            pstRspData->uResp.CallCtrlRsp.SpecialData.ucLen = pucCmdData[ulCCTagOffset];
            pstRspData->uResp.CallCtrlRsp.SpecialData.pValue
                = (SI_UINT8*)VOS_MemAlloc(MAPS_STK_PID, DYNAMIC_MEM_PT, pucCmdData[ulCCTagOffset]);

            if(VOS_NULL_PTR != pstRspData->uResp.CallCtrlRsp.SpecialData.pValue)
            {
                VOS_MemCpy(pstRspData->uResp.CallCtrlRsp.SpecialData.pValue,
                    &pucCmdData[ulCCTagOffset+1], pucCmdData[ulCCTagOffset]);
            }

            pstRspData->uResp.CallCtrlRsp.OP_SepcialData = 1;

            return;
        }
    }

    return;
}


VOS_VOID SI_STK_DecodeMoSmsRspSpecial(VOS_UINT32                  ulDataLen,
                                                    VOS_UINT8                   *pucCmdData,
                                                    SI_STK_ENVELOPE_RSP_STRU    *pstRspData)
{
    VOS_UINT32  ulTagOffset;

    ulTagOffset = SI_STKFindTag(ADDRESS_TAG, pucCmdData, ulDataLen, 1);

    if(ulTagOffset != SI_TAGNOTFOUND)
    {
        pstRspData->uResp.MoSmsCtrlRsp.Addr1.ucLen = pucCmdData[ulTagOffset] - 1;
        pstRspData->uResp.MoSmsCtrlRsp.Addr1.ucNumType = pucCmdData[ulTagOffset+1];
        pstRspData->uResp.MoSmsCtrlRsp.Addr1.pucAddr
            = (SI_UINT8*)VOS_MemAlloc(MAPS_STK_PID, DYNAMIC_MEM_PT, pstRspData->uResp.MoSmsCtrlRsp.Addr1.ucLen);

        if(VOS_NULL_PTR != pstRspData->uResp.MoSmsCtrlRsp.Addr1.pucAddr)
        {
            VOS_MemCpy(pstRspData->uResp.MoSmsCtrlRsp.Addr1.pucAddr,
                &pucCmdData[ulTagOffset+2], pstRspData->uResp.MoSmsCtrlRsp.Addr1.ucLen);
        }

        pstRspData->uResp.MoSmsCtrlRsp.OP_Addr1 = 1;
    }

    ulTagOffset = SI_STKFindTag(ADDRESS_TAG, pucCmdData, ulDataLen, 2);

    if(ulTagOffset != SI_TAGNOTFOUND)
    {
        pstRspData->uResp.MoSmsCtrlRsp.Addr2.ucLen = pucCmdData[ulTagOffset] - 1;
        pstRspData->uResp.MoSmsCtrlRsp.Addr2.ucNumType = pucCmdData[ulTagOffset+1];
        pstRspData->uResp.MoSmsCtrlRsp.Addr2.pucAddr
            = (SI_UINT8*)VOS_MemAlloc(MAPS_STK_PID, DYNAMIC_MEM_PT, pstRspData->uResp.MoSmsCtrlRsp.Addr2.ucLen);

        if(VOS_NULL_PTR != pstRspData->uResp.MoSmsCtrlRsp.Addr2.pucAddr)
        {
            VOS_MemCpy(pstRspData->uResp.MoSmsCtrlRsp.Addr2.pucAddr,
                &pucCmdData[ulTagOffset+2], pstRspData->uResp.MoSmsCtrlRsp.Addr2.ucLen);
        }

        pstRspData->uResp.MoSmsCtrlRsp.OP_Addr2 = 1;
    }

    return;
}




VOS_UINT32 SI_STK_EnvelopeRsp_Decode(SI_STK_ENVELOPE_TYPE         enDataType,
                                                VOS_UINT32                  ulDataLen,
                                                VOS_UINT8                   *pucCmdData,
                                                SI_STK_ENVELOPE_RSP_STRU    *pstRspData)
{
    VOS_UINT32  i;
    VOS_UINT32  ulOffset;

    if((pucCmdData == VOS_NULL_PTR)||(pstRspData == VOS_NULL_PTR))
    {
        STK_ERROR_LOG("SI_STKCommCodeData: The Input Parameter is Error");

        return VOS_ERR;
    }

    pstRspData->EnvelopeType    = enDataType;
    pstRspData->Result          = pucCmdData[0];

    if(pucCmdData[0] > 0x80)/*ȷ����������ĳ����ֽ�*/
    {
        ulOffset = 0x02;
    }
    else
    {
        ulOffset = 0x01;
    }

    for(i=0; i<ARRAYSIZE(gastEnvelopeDecodeList); i++)
    {
        if(enDataType == gastEnvelopeDecodeList[i].ulCmdType)
        {
            SI_STKDecodeTagList(&pucCmdData[ulOffset],
                                gastEnvelopeDecodeList[i].pucTagList,
                                gastEnvelopeDecodeList[i].ulTagLen,
                                (SI_SAT_COMMDATA_STRU *)pstRspData);

            break;
        }
    }

    if(i >= ARRAYSIZE(gastEnvelopeDecodeList))
    {
        STK_ERROR_LOG("SI_STKCommCodeData: The Input enDataType is Error");

        return VOS_ERR;
    }

    if(enDataType == SI_STK_ENVELOPE_CALLCRTL)
    {
        SI_STK_DecodeCCRspSpecial((VOS_UINT32)pucCmdData[ulOffset], &pucCmdData[ulOffset+1], pstRspData);
    }

    if(enDataType == SI_STK_ENVELOPE_SMSCRTL)
    {
        SI_STK_DecodeMoSmsRspSpecial((VOS_UINT32)pucCmdData[ulOffset], &pucCmdData[ulOffset+1], pstRspData);
    }

    return VOS_OK;
}

VOS_UINT32 SI_STK_EnvelopeData_Code(SI_STK_ENVELOPE_STRU        *pstENStru,
                                            VOS_UINT32                  *pulDataLen,
                                            VOS_UINT8                   *pucData,
                                            VOS_UINT32                  *pulDataOffset)
{
    if((pstENStru           == VOS_NULL_PTR)
        ||(pulDataLen       == VOS_NULL_PTR)
        ||(pucData          == VOS_NULL_PTR)
        ||(pulDataOffset    == VOS_NULL_PTR))
    {
        STK_ERROR_LOG("SI_STK_EnvelopeData_Code: The Input Data is Error");

        return VOS_ERR;
    }

    SI_STK_InitEnvelope(pucData, &pstENStru->DeviceId, (VOS_UINT8)pstENStru->EnvelopeType);

    if(pstENStru->EnvelopeType == SI_STK_ENVELOPE_CALLCRTL)
    {
        if(pstENStru->uEnvelope.CallCtrl.OP_SepcialData != 0)
        {
            pucData[2] += pstENStru->uEnvelope.CallCtrl.SpecialData.ucLen+2;
            pucData[7] = pstENStru->uEnvelope.CallCtrl.SpecialData.ucTag;
            pucData[8] = pstENStru->uEnvelope.CallCtrl.SpecialData.ucLen;

            VOS_MemCpy(&pucData[9], pstENStru->uEnvelope.CallCtrl.SpecialData.pValue, pstENStru->uEnvelope.CallCtrl.SpecialData.ucLen);
        }
    }

    if(VOS_OK != SI_STKCommCodeData(&pucData[1], SI_CODE_ENVELOPE_DATA, pstENStru->EnvelopeType, (SI_SAT_COMMDATA_STRU*)pstENStru))
    {
        STK_ERROR_LOG("SI_STK_EnvelopeData_Code: The Code Data is Error");

        return VOS_ERR;
    }

    if(pucData[2] > 0x7F)
    {
        pucData[1] = 0x81;

        *pulDataLen = pucData[2] + 3;

        *pulDataOffset = 0;
    }
    else
    {
        *pulDataLen   = pucData[2] + 2;

        *pulDataOffset = 1;
    }

    return VOS_OK;
}


VOS_VOID SI_STK_EnvelopeRspDataFree(SI_STK_ENVELOPE_RSP_STRU *pstData)
{
    VOS_UINT32 i;
    VOS_UINT32 j;
    VOS_UINT32 ulOffset = 0;
    VOS_UINT8* pData;

    if(VOS_NULL_PTR == pstData)
    {
        STK_ERROR_LOG("SI_STK_EnvelopeRspDataFree: The Input Parameter is Error");

        return ;
    }

    pData = (VOS_UINT8*)&(pstData->uResp)+sizeof(VOS_UINT32);

    for(i=0; i<STK_ARRAYSIZE(gastEnvelopeDecodeList); i++)
    {
        if(pstData->EnvelopeType == gastEnvelopeDecodeList[i].ulCmdType)
        {
            for(j=0; j<gastEnvelopeDecodeList[i].ulTagLen; j++)
            {
                ulOffset = SI_STKTagDataFree(*(gastEnvelopeDecodeList[i].pucTagList+j), pData);

                pData += ulOffset;
            }

            break;
        }
    }

    if((pstData->EnvelopeType == SI_STK_ENVELOPE_CALLCRTL)
      &&(pstData->uResp.CallCtrlRsp.OP_SepcialData != 0))
    {
        VOS_MemFree(MAPS_STK_PID, pstData->uResp.CallCtrlRsp.SpecialData.pValue);
    }

    if(pstData->EnvelopeType == SI_STK_ENVELOPE_SMSCRTL)
    {
        if(pstData->uResp.MoSmsCtrlRsp.OP_Addr1 != 0)
        {
            VOS_MemFree(MAPS_STK_PID, pstData->uResp.MoSmsCtrlRsp.Addr1.pucAddr);
        }

        if(pstData->uResp.MoSmsCtrlRsp.OP_Addr2 != 0)
        {
            VOS_MemFree(MAPS_STK_PID, pstData->uResp.MoSmsCtrlRsp.Addr2.pucAddr);
        }
    }

    return ;
}


SI_UINT32 SI_STK_EnvelopeDownload(VOS_UINT32                ulSenderPid,
                                             VOS_UINT32                 ulSendPara,
                                             SI_STK_ENVELOPE_STRU      *pstENStru)
{
    VOS_UINT8                           aucEvent[256] = {0};
    VOS_UINT32                          ulDataLen;
    VOS_UINT32                          ulDataOffset;
#if (FEATURE_VSIM == FEATURE_ON)
    VOS_BOOL                            bVSimState;
#endif

    if(VOS_NULL_PTR == pstENStru)
    {
        STK_ERROR_LOG("SI_STK_EnvelopeDownload: The Input Data is Error");

        return VOS_ERR;
    }

    if((SI_STK_ENVELOPE_MENUSEL == pstENStru->EnvelopeType)||(SI_STK_PROCMD == pstENStru->EnvelopeType))
    {
        STK_ERROR_LOG("SI_STK_EnvelopeDownload: The Input EnvelopeType is Error");

        return VOS_ERR;
    }

#if (FEATURE_VSIM == FEATURE_ON)
    bVSimState = USIMM_VsimIsActive();

    if ((SI_STK_ENVELOPE_PPDOWN == pstENStru->EnvelopeType)
     && (VOS_TRUE == bVSimState))
    {

        SI_STK_VsimSmsPpDownloadProc(ulSenderPid, ulSendPara, &pstENStru->uEnvelope.PPDown);

        return VOS_OK;
    }
#endif

    if(VOS_ERR == SI_STK_EnvelopeData_Code(pstENStru, &ulDataLen, aucEvent, &ulDataOffset))
    {
        STK_ERROR_LOG("SI_STK_EnvelopeDownload: The SI_STK_EnvelopeData_Code is Error");

        return VOS_ERR;
    }

    return SI_STK_SendReqMsg(VOS_NULL, VOS_NULL, SI_STK_ENVELOPETAF, ulSendPara, ulDataLen, &aucEvent[ulDataOffset]);
}

/*****************************************************************************
�� �� ��  : SI_STK_CLSndTrMsg
��������  : C+L��SIM��CBP����TERMINAL RESPONSE
�������  : DataLen:���ݳ���
            pData:��������
�������  : ��
�� �� ֵ  : SI_UINT32 ����ִ�н��
History     :
1.��    ��  : 2013��12��20��
  ��    ��  : h59254
  �޸�����  : Create
*****************************************************************************/
SI_UINT32 SI_STK_CLSndTrMsg(SI_UINT32 ulDataLen, SI_UINT8 *pucData)
{
    SI_STK_REQ_STRU                    *pstSTKReq;

    pstSTKReq = (SI_STK_REQ_STRU *)VOS_AllocMsg(MAPS_STK_PID, sizeof(SI_STK_REQ_STRU) - VOS_MSG_HEAD_LENGTH + ulDataLen);

    if (VOS_NULL_PTR == pstSTKReq)
    {
        STK_ERROR_LOG("SI_STK_CLSndTrMsg: VOS_AllocMsg Return Error");
        return VOS_ERR;
    }

    pstSTKReq->MsgName       = SI_STK_VIA_TRDOWN;
    pstSTKReq->ulReceiverPid = MAPS_STK_PID;
    pstSTKReq->OpId          = 0;
    pstSTKReq->ClientId      = 0;
    pstSTKReq->SatType       = SI_STK_TRSEND;
    pstSTKReq->Datalen       = ulDataLen;

    if (VOS_NULL != ulDataLen)
    {
        VOS_MemCpy(pstSTKReq->Data, pucData, ulDataLen);
    }

    if (VOS_OK != VOS_SendMsg(MAPS_STK_PID, pstSTKReq))
    {
        return VOS_ERR;
    }

    return VOS_OK;
}

/*****************************************************************************
�� �� ��  : SI_STK_CbpSetupEventListCmdSnd
��������  : C+L��SIM��BALONG��CBP����SETUP EVENT LIST����
�������  : ��
�������  : ��
�� �� ֵ  : ��
History     :
1.��    ��  : 2014��01��22��
  ��    ��  : h59254
  �޸�����  : Create
*****************************************************************************/
VOS_VOID SI_STK_CbpSetupEventListCmdSnd(VOS_VOID)
{
    if ((VOS_NULL_PTR == g_stCbpEventList.pucCmd)
     || (VOS_NULL == g_stCbpEventList.ulProactiveCmdLen))
    {
        return;
    }

    SI_STK_SndProactiveCmd2CBP(g_stCbpEventList.ulProactiveCmdLen, g_stCbpEventList.pucCmd);

    VOS_MemFree(MAPS_STK_PID, g_stCbpEventList.pucCmd);

    g_stCbpEventList.pucCmd            = VOS_NULL_PTR;
    g_stCbpEventList.ulProactiveCmdLen = VOS_NULL;

    return;
}

#endif

#ifdef __cplusplus
#if __cplusplus
}
#endif /* __cpluscplus */
#endif /* __cpluscplus */



