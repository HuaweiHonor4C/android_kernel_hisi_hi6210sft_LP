/******************************************************************************

                  ��Ȩ���� (C), 2001-2011, ��Ϊ�������޹�˾

 ******************************************************************************
  �� �� ��      : Om.c
  �� �� ��      : ����
  ��    ��      : ����47350
  ��������      : 2008��5��3��
  ����޸�      :
  ��������      : ��C�ļ�������OMģ���ʵ��
  �����б�      :
  �޸���ʷ      :
  1.��    ��    : 2008��5��3��
    ��    ��    : ����47350
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
#include "Omappagent.h"
#include "SCMSoftDecode.h"

#ifdef __cplusplus
#if __cplusplus
extern "C"{
#endif
#endif


/*lint -e767 �޸��ˣ�����47350�������ˣ�����46160��ԭ�������LOG���������Ҫ*/
#define    THIS_FILE_ID        PS_FILE_ID_APP_CBT_FUNC_C

extern VOS_UINT32 OM_IsAcpuAuthNv(VOS_UINT16 usNvId);

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
VOS_UINT32 CBT_AcpuReadNv(APP_OM_MSG_EX_STRU *pstAppToOmMsg, VOS_UINT16 usReturnPrimId)
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

            return ulResult;
        }
        ulTotalSize += ulNvLen;
    }

    /*Allocate the memory space.*/
    ulTotalSize += OM_APP_MSG_EX_LEN + OM_READ_NV_HEAD_SIZE + (ulCount*OM_NV_ITEM_SIZE);
    pstOmToAppMsg = (OM_APP_MSG_EX_STRU*)VOS_AssistantMemAlloc(ACPU_PID_CBT,
                                                   DYNAMIC_MEM_PT, ulTotalSize);
    if (VOS_NULL_PTR == pstOmToAppMsg)
    {
        OM_AcpuSendResultChannel(pstAppToOmMsg->ucCpuId, pstAppToOmMsg->ucFuncType, VOS_ERR, usReturnPrimId);

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
            VOS_MemFree(ACPU_PID_CBT, pstOmToAppMsg);

            return ulResult;
        }
        pusOmToAppPara += ulNvLen/sizeof(VOS_UINT16);
    }

    pstOmToAppMsg->usLength = (VOS_UINT16)(ulTotalSize - VOS_OM_HEADER_LEN);
    OM_AcpuSendContentChannel(pstAppToOmMsg->ucCpuId, pstAppToOmMsg->ucFuncType, (OM_RSP_PACKET_STRU *)pstOmToAppMsg, usReturnPrimId);
    VOS_MemFree(ACPU_PID_CBT, pstOmToAppMsg);

    return VOS_OK;
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
VOS_UINT32 CBT_AcpuWriteNv(APP_OM_MSG_EX_STRU *pstAppToOmMsg, VOS_UINT16 usReturnPrimId)
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

            return VOS_ERR;
        }

        ulResult = NV_WriteEx(OM_GET_FUNCID_MODEMINFO(pstAppToOmMsg->ucFuncType),
                                usNvId, pusAppToOmPara, (VOS_UINT32)usNvLen);
        if(NV_OK != ulResult)
        {
            NV_GET_RETURN(ulResult, usNvId);
            OM_AcpuSendResultChannel(pstAppToOmMsg->ucCpuId, pstAppToOmMsg->ucFuncType, ulResult, usReturnPrimId);

            return VOS_ERR;
        }
        /*���ڷ��ص�usNvLen��byteΪ��λ��������Ҫ����ָ��ָ�����͵Ĵ�С*/
        pusAppToOmPara += (usNvLen/sizeof(VOS_UINT16));
    }

    OM_AcpuSendResultChannel(pstAppToOmMsg->ucCpuId, pstAppToOmMsg->ucFuncType, NV_OK, usReturnPrimId);

    return VOS_OK;
}


VOS_VOID CBT_AppNvProc(APP_OM_MSG_EX_STRU *pstAppToOmMsg)
{
    VOS_UINT16                          usPrimId;

    usPrimId = pstAppToOmMsg->usPrimId;

    switch ( usPrimId )
    {
        case APP_OM_READ_NV_REQ:
            CBT_AcpuReadNv(pstAppToOmMsg, OM_APP_READ_NV_IND);
            break;

        case APP_OM_WRITE_NV_REQ:
            CBT_AcpuWriteNv(pstAppToOmMsg, OM_APP_WRITE_NV_CNF);
            break;

        default:
            OM_AcpuSendResultChannel(OM_LOGIC_CHANNEL_CBT, OM_NV_FUNC, VOS_ERR, usPrimId);
            break;
    }

    return;
}


VOS_UINT32 CBT_AcpuEstablishProc(APP_OM_MSG_EX_STRU *pstAppToOmMsg)
{
    VOS_UINT32                          ulRet;
    MsgBlock                            *pMsg;

    /* �ȶϿ���· */
    g_stAcpuCbtCtrlInfo.ulOMSwitchOnOff = OM_STATE_IDLE;

    /* �Լ���У׼���ߣ������ɹ��ظ�״̬��0x02 */
    ulRet = 0x02;

    /* �����߻ظ������ɹ�״̬ */
    OM_AcpuSendResultChannel(OM_LOGIC_CHANNEL_CBT, OM_QUERY_FUNC, ulRet, OM_APP_ESTABLISH_CNF);

    /* ������· */
    g_stAcpuCbtCtrlInfo.ulOMSwitchOnOff = OM_STATE_ACTIVE;

    /* ֪ͨCCPU��·״̬ */
    pMsg = (MsgBlock *)VOS_AllocMsg(ACPU_PID_OM, sizeof(APP_OM_MSG_EX_STRU));

    if (VOS_NULL_PTR == pMsg)
    {
        return VOS_ERR;
    }

    pMsg->ulReceiverPid      = CCPU_PID_CBT;

    /*lint -e419 -e416  */
    VOS_MemCpy((VOS_VOID *)(pMsg->aucValue), (VOS_VOID *)pstAppToOmMsg, sizeof(APP_OM_MSG_EX_STRU) );
    /*lint +e419 +e416  */

    if (VOS_OK != VOS_SendMsg(ACPU_PID_OM, pMsg))
    {
        return VOS_ERR;
    }

    return VOS_OK;
}
VOS_UINT32 CBT_AcpuReleaseProc(APP_OM_MSG_EX_STRU *pstAppToOmMsg)
{
    MsgBlock                            *pMsg;

    g_stAcpuCbtCtrlInfo.ulOMSwitchOnOff       = OM_STATE_IDLE;

    pMsg = (MsgBlock *)VOS_AllocMsg(ACPU_PID_OM, sizeof(APP_OM_MSG_EX_STRU));

    if (VOS_NULL_PTR == pMsg)
    {
        return VOS_ERR;
    }

    pMsg->ulReceiverPid      = CCPU_PID_CBT;

    /*lint -e419 -e416  */
    VOS_MemCpy((VOS_VOID *)(pMsg->aucValue), (VOS_VOID *)pstAppToOmMsg, sizeof(APP_OM_MSG_EX_STRU) );
    /*lint +e419 +e416  */

    if (VOS_OK != VOS_SendMsg(ACPU_PID_OM, pMsg))
    {
        return VOS_ERR;
    }

    return VOS_OK;
}


VOS_VOID CBT_AppLinkProc(APP_OM_MSG_EX_STRU *pstAppToOmMsg)
{
    VOS_UINT16                          usPrimId;

    usPrimId = pstAppToOmMsg->usPrimId;

    switch ( usPrimId )
    {
        case APP_OM_ESTABLISH_REQ:
            CBT_AcpuEstablishProc(pstAppToOmMsg);
            break;

        case APP_OM_RELEASE_REQ:
            CBT_AcpuReleaseProc(pstAppToOmMsg);
            break;

        default:
            OM_AcpuSendResultChannel(OM_LOGIC_CHANNEL_CBT, OM_QUERY_FUNC, VOS_ERR, usPrimId);
            break;
    }

    return;
}



/*****************************************************************************
 Prototype       : CBT_AppMsgProc
 Description     : Handle all messages sent to OM.
 Input           : pMsg -- The pointer of the msg.
 Output          : None
 Return Value    : VOS_VOID

 History         : ---
    Date         : 2008-03-20
    Author       : g47350
    Modification : Created function
 *****************************************************************************/
VOS_VOID CBT_AppMsgProc(MsgBlock* pMsg)
{
    APP_OM_MSG_EX_STRU    *pstAppToOmMsg;
    VOS_UINT8              ucOriginalId;
    OM_CBT_MSG_STRU        *pstCbtMsg;

    if (ACPU_PID_OM == pMsg->ulSenderPid)
    {
        pstAppToOmMsg = (APP_OM_MSG_EX_STRU*)pMsg->aucValue;
        ucOriginalId = (VOS_UINT32)(pstAppToOmMsg->ucFuncType&OM_FUNCID_VALUE_BITS);

        switch ( ucOriginalId )
        {
            case OM_QUERY_FUNC:
                CBT_AppLinkProc(pstAppToOmMsg);
                break;

            case OM_NV_FUNC:
                CBT_AppNvProc(pstAppToOmMsg);
                break;

            default:
                break;
        }
    }
    else if (CCPU_PID_CBT == pMsg->ulSenderPid)
    {
        pstCbtMsg = (OM_CBT_MSG_STRU *)pMsg;

        if (OM_CBT_SEND_DATA_REQ == pstCbtMsg->usPrimId)/* C�˷�������У׼���� */
        {
            OM_AcpuSendDataChannel((OM_LOGIC_CHANNEL_ENUM_UINT32)OM_LOGIC_CHANNEL_CBT, (OM_RSP_PACKET_STRU *)(pstCbtMsg->aucData), pstCbtMsg->usLen);

            return;
        }
    }
    else
    {
        /* blank */
    }

    return;
}

/*****************************************************************************
 Prototype       : CBTAppFidInit
 Description     : OM' initializtion function
 Input           : None
 Output          : None
 Return Value    : VOS_UINT32

 History         : ---
    Date         : 2008-03-20
    Author       : g47350
    Modification : Created function
 *****************************************************************************/
VOS_UINT32 CBTAppFidInit(enum VOS_INIT_PHASE_DEFINE ip)
{
    VOS_UINT32 ulRslt;

    switch( ip )
    {
        case VOS_IP_LOAD_CONFIG:
        {

            ulRslt = VOS_RegisterPIDInfo(ACPU_PID_CBT,
                                        (Init_Fun_Type)VOS_NULL_PTR,
                                        (Msg_Fun_Type)CBT_AppMsgProc);
            if( VOS_OK != ulRslt )
            {
                return VOS_ERR;
            }

            ulRslt = VOS_RegisterMsgTaskPrio(ACPU_FID_CBT, VOS_PRIORITY_M2);
            if( VOS_OK != ulRslt )
            {
                return VOS_ERR;
            }

            /* CBT�Դ������񴴽� */
            if (VOS_OK != CBTSCM_SoftDecodeReqRcvTaskInit())
            {
                return VOS_ERR;
            }

            break;
        }

        default:
            break;
    }
    return VOS_OK;
}


#ifdef __cplusplus
#if __cplusplus
    }
#endif
#endif