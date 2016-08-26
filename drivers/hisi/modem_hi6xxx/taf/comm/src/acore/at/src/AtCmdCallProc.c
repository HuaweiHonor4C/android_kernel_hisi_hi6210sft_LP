/******************************************************************************

                  ��Ȩ���� (C), 2001-2011, ��Ϊ�������޹�˾

 ******************************************************************************
  �� �� ��   : AtCmdCallProc.c
  �� �� ��   : ����
  ��    ��   : l60609
  ��������   : 2013��3��13��
  ����޸�   :
  ��������   : ����������ļ�
  �����б�   :
  �޸���ʷ   :
  1.��    ��   : 2013��3��13��
    ��    ��   : l60609
    �޸�����   : �����ļ�

******************************************************************************/

/*****************************************************************************
  1 ͷ�ļ�����
*****************************************************************************/
#include "AtCmdCallProc.h"

#include "AtSndMsg.h"
#include "ATCmdProc.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif

/*****************************************************************************
    Э��ջ��ӡ��㷽ʽ�µ�.C�ļ��궨��
*****************************************************************************/
/*lint -save -e960 */
#define    THIS_FILE_ID                 PS_FILE_ID_AT_CMD_CALL_PROC_C
/*lint -restore */

/*****************************************************************************
  2 ȫ�ֱ�������
*****************************************************************************/


/*****************************************************************************
  3 ����ʵ��
*****************************************************************************/
#if (FEATURE_ON == FEATURE_ECALL)

VOS_UINT32 AT_SetCecallPara(VOS_UINT8 ucIndex)
{
    VOS_UINT32                          ulRst;
    MN_CALL_ORIG_PARAM_STRU             stCecallPara;

    /* ��������Ϊ1��
       ��������Ϊ1ʱ���������Ȳ�����Ϊ0��
       ��"AT+CECALL="����£�gucAtParaIndexΪ0 */
    if (1 != gucAtParaIndex)
    {
        return AT_ERROR;
    }

    PS_MEM_SET(&stCecallPara, 0x0, sizeof(stCecallPara));

    switch (gastAtParaList[0].ulParaValue)
    {
        case 0:
            stCecallPara.enCallType = MN_CALL_TYPE_TEST;
            break;
        case 1:
            stCecallPara.enCallType = MN_CALL_TYPE_RECFGURATION;
            break;
        case 2:
            stCecallPara.enCallType = MN_CALL_TYPE_MIEC;
            break;
        case 3:
            stCecallPara.enCallType = MN_CALL_TYPE_AIEC;
            break;
        default:
            return AT_ERROR;
    }

    ulRst = AT_FillAndSndAppReqMsg(gastAtClientTab[ucIndex].usClientId,
                                   gastAtClientTab[ucIndex].opId,
                                   MN_CALL_APP_ORIG_REQ,
                                   &stCecallPara,
                                   sizeof(stCecallPara),
                                   I0_WUEPS_PID_TAF);

    if (TAF_SUCCESS == ulRst)
    {
        gastAtClientTab[ucIndex].CmdCurrentOpt = AT_CMD_CECALL_SET;
        return AT_WAIT_ASYNC_RETURN;
    }
    else
    {
        return AT_ERROR;
    }
}


VOS_UINT32 AT_SetEclstartPara(VOS_UINT8 ucIndex)
{
    VOS_UINT32                          ulRst;
    MN_CALL_ORIG_PARAM_STRU             stCecallPara;
    MN_CALL_CALLED_NUM_STRU             stDialNumber;

    /*  �ж�1: ��ѡ�����ĳ��Ȳ���Ϊ0 */
    if ((0 == gastAtParaList[0].usParaLen)
     || (0 == gastAtParaList[1].usParaLen))
    {
        return AT_ERROR;
    }

    /* �ж�2: ������������, �ж�1�ѱ�֤��������>=2 */
    if (gucAtParaIndex > 3)
    {
        return AT_ERROR;
    }

    /* �ж�3:  AT^ECLSTART=1,1, ��������Ǵ�� */
    if ((3 == gucAtParaIndex)
     && (0 == gastAtParaList[2].usParaLen))
    {
        return AT_ERROR;
    }

    /* ��ʼ�� */
    PS_MEM_SET(&stDialNumber, 0x0, sizeof(stDialNumber));

    /* �����ź��� */
    if (gastAtParaList[2].usParaLen > 0)
    {
        /* �������󳤶Ȳ��ܳ���18 */
        if (gastAtParaList[2].usParaLen > ECALL_MAX_DIAL_NUM_LEN)
        {
            return AT_ERROR;
        }

        /* ��鲢ת���绰���� */
        if (VOS_OK !=  AT_FillCalledNumPara(gastAtParaList[2].aucPara,
                                            gastAtParaList[2].usParaLen,
                                            &stDialNumber))
        {
            AT_SetCsCallErrCause(ucIndex, TAF_CS_CAUSE_INVALID_PARAMETER);
            return AT_ERROR;
        }
    }

    /* ��ʼ�� */
    PS_MEM_SET(&stCecallPara, 0x0, sizeof(stCecallPara));

    /* ����������ʱ��<activation_type>������Ч���ǽ�������ʱ,<activation_type>����û������ --��Ʒ��:t00192572 */
    /* ^ECLSTART=x,0  �������call */
    if (0 == gastAtParaList[1].ulParaValue)
    {
        stCecallPara.enCallType = MN_CALL_TYPE_TEST;

        /* ֻ�в��Ժ��в��·��绰���룬�������в��·��绰���� */
        PS_MEM_CPY(&stCecallPara.stDialNumber, &stDialNumber, sizeof(stDialNumber));
    }
    else
    {
        /* ^ECLSTART=0,1  �û��������call */
        if (0 == gastAtParaList[0].ulParaValue)
        {
            stCecallPara.enCallType = MN_CALL_TYPE_MIEC;
        }
        /* ^ECLSTART=1,1  �Զ��������call */
        else
        {
            stCecallPara.enCallType = MN_CALL_TYPE_AIEC;
        }
    }

    ulRst = AT_FillAndSndAppReqMsg(gastAtClientTab[ucIndex].usClientId,
                                   gastAtClientTab[ucIndex].opId,
                                   MN_CALL_APP_ORIG_REQ,
                                   &stCecallPara,
                                   sizeof(stCecallPara),
                                   I0_WUEPS_PID_TAF);

    if (TAF_SUCCESS == ulRst)
    {
        gastAtClientTab[ucIndex].CmdCurrentOpt = AT_CMD_ECLSTART_SET;
        return AT_WAIT_ASYNC_RETURN;
    }
    else
    {
        return AT_ERROR;
    }
}
VOS_UINT32 AT_SetEclstopPara(VOS_UINT8 ucIndex)
{
    VOS_UINT32                          ulRst;
    MN_CALL_SUPS_PARAM_STRU             stEclstopPara;

    /* ������������������ */
    if (AT_CMD_OPT_SET_CMD_NO_PARA != g_stATParseCmd.ucCmdOptType)
    {
        return AT_ERROR;
    }

    /* ��ʼ�� */
    PS_MEM_SET(&stEclstopPara, 0x0, sizeof(stEclstopPara));

    stEclstopPara.enCallSupsCmd = MN_CALL_SUPS_CMD_REL_ECALL;

    ulRst = AT_FillAndSndAppReqMsg(gastAtClientTab[ucIndex].usClientId,
                                   gastAtClientTab[ucIndex].opId,
                                   MN_CALL_APP_SUPS_CMD_REQ,
                                   &stEclstopPara,
                                   sizeof(stEclstopPara),
                                   I0_WUEPS_PID_TAF);

    if (TAF_SUCCESS == ulRst)
    {
        gastAtClientTab[ucIndex].CmdCurrentOpt = AT_CMD_ECLSTOP_SET;
        return AT_WAIT_ASYNC_RETURN;
    }
    else
    {
        return AT_ERROR;
    }
}


VOS_UINT32 AT_SetEclcfgPara(VOS_UINT8 ucIndex)
{
    VOS_UINT32                          ulRst;
    APP_VC_MSG_SET_ECALL_CFG_REQ_STRU   stEclcfgSetPara;

    /* �ж�һ: ��ѡ�����ĳ��Ȳ���Ϊ0 */
    if (0 == gastAtParaList[0].usParaLen)
    {
        return AT_ERROR;
    }

    /* �ж϶�: ������������, �ж�һ�Ѿ���֤��������>=1 */
    if (gucAtParaIndex > 2)
    {
        return AT_ERROR;
    }

    /* �ж�3:  AT^ECLCFG=0, ��������Ǵ�� */
    if ((2 == gucAtParaIndex)
     && (0 == gastAtParaList[1].usParaLen))
    {
        return AT_ERROR;
    }

    stEclcfgSetPara.enMode = (APP_VC_ECALL_MSD_MODE_ENUM_UINT16)gastAtParaList[0].ulParaValue;

    if (0 == gastAtParaList[1].usParaLen)
    {
        stEclcfgSetPara.enVocConfig = APP_VC_ECALL_VOC_CONFIG_NOT_ABANDON;
    }
    else
    {
        stEclcfgSetPara.enVocConfig = (APP_VC_ECALL_VOC_CONFIG_ENUM_UINT16)gastAtParaList[1].ulParaValue;
    }

    ulRst = AT_FillAndSndAppReqMsg(gastAtClientTab[ucIndex].usClientId,
                                   gastAtClientTab[ucIndex].opId,
                                   APP_VC_MSG_SET_ECALL_CFG_REQ,
                                   &stEclcfgSetPara,
                                   sizeof(stEclcfgSetPara),
                                   I0_WUEPS_PID_VC);

    if (TAF_SUCCESS == ulRst)
    {
        gastAtClientTab[ucIndex].CmdCurrentOpt = AT_CMD_ECLCFG_SET;
        return AT_WAIT_ASYNC_RETURN;
    }
    else
    {
        return AT_ERROR;
    }
}
VOS_UINT32 AT_SetEclmsdPara(VOS_UINT8 ucIndex)
{
    VOS_UINT32                          ulRst;
    APP_VC_MSG_SET_MSD_REQ_STRU         stEclmsdPara;

    /* ��������Ϊ1��
       ��������Ϊ1ʱ���������Ȳ�����Ϊ0��
       ��"AT+CELMSD="����£�gucAtParaIndexΪ0 */
    if (1 != gucAtParaIndex)
    {
        return AT_ERROR;
    }

    /* �������Ȳ���
       ʮ�������ı��ַ���������ʮ���������ݱ��뷽ʽ���ַ�������Ϊ280���ֽڣ���ʾ����MSDЭ��Ҫ���140���ֽ�ԭʼ����
    */
    if (((APP_VC_MSD_DATA_LEN * 2) != gastAtParaList[0].usParaLen))
    {
        return AT_ERROR;
    }

    if (AT_FAILURE == At_AsciiString2HexSimple(stEclmsdPara.aucMsdData,
                                               gastAtParaList[0].aucPara,
                                               APP_VC_MSD_DATA_LEN * 2))
    {
        return AT_ERROR;
    }

    ulRst = AT_FillAndSndAppReqMsg(gastAtClientTab[ucIndex].usClientId,
                                   gastAtClientTab[ucIndex].opId,
                                   APP_VC_MSG_SET_MSD_REQ,
                                   &stEclmsdPara,
                                   sizeof(stEclmsdPara),
                                   I0_WUEPS_PID_VC);

    if (TAF_SUCCESS == ulRst)
    {
        gastAtClientTab[ucIndex].CmdCurrentOpt = AT_CMD_ECLMSD_SET;
        return AT_WAIT_ASYNC_RETURN;
    }
    else
    {
        return AT_ERROR;
    }
}


VOS_UINT32 AT_QryCecallPara(VOS_UINT8 ucIndex)
{
    VOS_UINT32                          ulRst;

    ulRst = AT_FillAndSndAppReqMsg(gastAtClientTab[ucIndex].usClientId,
                                   gastAtClientTab[ucIndex].opId,
                                   MN_CALL_QRY_ECALL_INFO_REQ,
                                   VOS_NULL_PTR,
                                   0,
                                   I0_WUEPS_PID_TAF);

    if (TAF_SUCCESS == ulRst)
    {
        gastAtClientTab[ucIndex].CmdCurrentOpt = AT_CMD_CECALL_QRY;
        return AT_WAIT_ASYNC_RETURN;
    }
    else
    {
        return AT_ERROR;
    }
}


VOS_UINT32 AT_QryEclcfgPara(VOS_UINT8 ucIndex)
{
    VOS_UINT32                          ulRst;

    ulRst = AT_FillAndSndAppReqMsg(gastAtClientTab[ucIndex].usClientId,
                                   gastAtClientTab[ucIndex].opId,
                                   APP_VC_MSG_QRY_ECALL_CFG_REQ,
                                   VOS_NULL,
                                   0,
                                   I0_WUEPS_PID_VC);

    if (TAF_SUCCESS == ulRst)
    {
        gastAtClientTab[ucIndex].CmdCurrentOpt = AT_CMD_ECLCFG_QRY;
        return AT_WAIT_ASYNC_RETURN;
    }
    else
    {
        return AT_ERROR;
    }
}


VOS_UINT32 AT_QryEclmsdPara(VOS_UINT8 ucIndex)
{
    VOS_UINT32                          ulRst;

    ulRst = AT_FillAndSndAppReqMsg(gastAtClientTab[ucIndex].usClientId,
                                   gastAtClientTab[ucIndex].opId,
                                   APP_VC_MSG_QRY_MSD_REQ,
                                   VOS_NULL,
                                   0,
                                   I0_WUEPS_PID_VC);

    if (TAF_SUCCESS == ulRst)
    {
        gastAtClientTab[ucIndex].CmdCurrentOpt = AT_CMD_ECLMSD_QRY;
        return AT_WAIT_ASYNC_RETURN;
    }
    else
    {
        return AT_ERROR;
    }
}


VOS_UINT32 AT_TestEclstartPara(VOS_UINT8 ucIndex)
{

    gstAtSendData.usBufLen = (VOS_UINT16)At_sprintf(AT_CMD_MAX_LEN,
                                                    (VOS_CHAR *)pgucAtSndCodeAddr,
                                                    (VOS_CHAR *)pgucAtSndCodeAddr,
                                                    "%s: (0,1),(0,1)",
                                                    g_stParseContext[ucIndex].pstCmdElement->pszCmdName);
    return AT_OK;
}


VOS_UINT32 AT_TestEclmsdPara(VOS_UINT8 ucIndex)
{
    /* ^eclmsd��֧�ֲ������
        �ú���������eclmsd��������ʱ����ERROR��������"(MSD)" */
    return AT_ERROR;
}

#endif


VOS_UINT32 At_RcvVcMsgDtmfDecoderIndProc(
    MN_AT_IND_EVT_STRU                 *pstData
)
{
    APP_VC_DTMF_DECODER_IND_STRU       *pstDtmfInd;
    VOS_UINT8                           ucIndex;
    VOS_CHAR                            aucOutput[2];

    /* ͨ��clientid��ȡindex */
    if (AT_FAILURE == At_ClientIdToUserId(pstData->clientId, &ucIndex))
    {
        AT_WARN_LOG("At_RcvVcMsgDtmfDecoderIndProc:WARNING:AT INDEX NOT FOUND!");
        return VOS_ERR;
    }

    /* ��ʼ�� */
    pstDtmfInd = (APP_VC_DTMF_DECODER_IND_STRU *)pstData->aucContent;
    aucOutput[0] = pstDtmfInd->ucDtmfCode;
    aucOutput[1] = '\0';

    /* �����ѯ��� */
    gstAtSendData.usBufLen = (VOS_UINT16)At_sprintf(AT_CMD_MAX_LEN,
                                                    (VOS_CHAR *)pgucAtSndCodeAddr,
                                                    (VOS_CHAR *)pgucAtSndCodeAddr,
                                                    "%s^DDTMF: %s%s",
                                                    gaucAtCrLf,
                                                    aucOutput,
                                                    gaucAtCrLf);

    At_SendResultData(ucIndex, pgucAtSndCodeAddr, gstAtSendData.usBufLen);

    return VOS_OK;
}

/* Added by l60609 for CDMA 1X Iteration 2, 2014-9-5, begin */
/*****************************************************************************
 �� �� ��  : AT_SetHflashPara
 ��������  : AT^HFLASH=<phone number> �����ú���

             <CR><LF>OK<CR><LF>
             ��MS��ش���ʱ��
             <CR><LF>+CME ERROR: <err><CR><LF>

             ������ʵ��FLASH���ܣ� ���ȶ�����������кϷ��Լ�飬���������뼰���ȡ�Լ�����Ϸ����ַ�����ASCII�����֣����볤�ȷ�Χ��0~32��
             Ȼ����FLASH����

             ��û�д���ͨ��״̬ʱ, ���ϱ�һ������
             ���к��еȴ���ʱ�򣬷��Ͳ����绰�����FLASH����������������С�
             ��ͨ��ʱ�����ʹ��绰�����FLASH������жԵ������ĺ��С�
             �����������
 �������  : VOS_UINT8 ucIndex
 �������  : ��
 �� �� ֵ  : VOS_UINT32
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2014��9��5��
    ��    ��   : l60609
    �޸�����   : �����ɺ���

*****************************************************************************/
VOS_UINT32 AT_SetHflashPara(VOS_UINT8 ucIndex)
{
    /* TO DO: �¸�����ʵ�� */

    /* ����MN_CALL_APP_SEND_FLASH_REQ��Ϣ */
    return AT_OK;
}

/*****************************************************************************
 �� �� ��  : AT_RcvTafCallSndFlashCnf
 ��������  : ����TAF_CALL_EVT_SEND_FLASH_CNF�¼�
 �������  : MN_AT_IND_EVT_STRU                 *pEvtInfo
 �������  : ��
 �� �� ֵ  : VOS_UINT32
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2014��9��10��
    ��    ��   : l60609
    �޸�����   : �����ɺ���

*****************************************************************************/
VOS_UINT32 AT_RcvTafCallSndFlashCnf(
    MN_AT_IND_EVT_STRU                 *pEvtInfo
)
{
    /* TO DO: �¸�����ʵ�� */

    return VOS_OK;
}

/*****************************************************************************
 �� �� ��  : AT_RcvTafCallSndFlashRslt
 ��������  : ����TAF_CALL_EVT_SEND_FLASH_RSLT�¼�
 �������  : MN_AT_IND_EVT_STRU                 *pEvtInfo
 �������  : ��
 �� �� ֵ  : VOS_UINT32
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2014��9��10��
    ��    ��   : l60609
    �޸�����   : �����ɺ���

*****************************************************************************/
VOS_UINT32 AT_RcvTafCallSndFlashRslt(
    MN_AT_IND_EVT_STRU                 *pEvtInfo
)
{
    /* TO DO: �¸�����ʵ�� */

    return VOS_OK;
}


/* Added by l60609 for CDMA 1X Iteration 2, 2014-9-5, end */


#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

