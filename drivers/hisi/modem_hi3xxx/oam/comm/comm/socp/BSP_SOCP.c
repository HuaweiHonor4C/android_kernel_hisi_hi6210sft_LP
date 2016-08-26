/*************************************************************************
*   ��Ȩ����(C) 1987-2011, ���ڻ�Ϊ�������޹�˾.
*
*   �� �� �� :  BSP_SOCP.c
*
*   ��    �� :  yangzhi
*
*   ��    �� :  ���ļ���Ҫ���socpͨ������������ã��Լ���д���ݴ���
*
*   �޸ļ�¼ :  2011��2��19��  v1.00  yangzhi  ����
*************************************************************************/

#include <product_config.h>

#if (FEATURE_SOCP_SYNC_ENABLE == FEATURE_ON)

#include "BSP_SOCP_DRV.h"
#include "OamSpecTaskDef.h"
#include "omnvinterface.h"
#include "NVIM_Interface.h"
#include "om.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif

/*lint -e767  �޸���: m00128685�������ˣ�l46160 ԭ�����:�����־�ļ���ID����*/
#define    THIS_FILE_ID        PS_FILE_ID_SOCP_C
/*lint +e767  �޸���: m00128685�������ˣ�l46160 */

SOCP_GBLSTATE_STRU              g_strSocpStat;    /* ��¼��ǰȫ��״̬��ͨ��������Ϣ */

SOCP_DEBUGINFO_STRU             g_stSocpDebugInfo;      /* ��¼��SOCP����״̬�еĹ�����Ϣ */

SOCP_LOG_INFO_STRU              g_stSocpLog;            /* ��¼��SOCP����״̬�е�log��Ϣ */

VOS_SPINLOCK                    g_stSocpSpinLock;       /* ��������������SOCP�ٽ���Դ���� */

#ifdef SOCP_ACORE
SOCP_ENC_DST_BUF_LOG_CFG_STRU   g_stEncDstBufLogConfig={0}; /* LOG2.0 SOCP BUFFER��С����ַ����ʱ���á�ʹ�ܱ�־ */

VOS_SPINLOCK                    g_stSocpFlushSpinLock;  /* ��������������SOCP Flush EncDst �ٽ���Դ���� */
#endif

/*lint -e662 -e661*/
/*****************************************************************************
* �� �� ��  : OM_Inner_Log
*
* ��������  : ��¼OM���ڲ�log����
*
* �������  :  pucStr       OM������ַ�����Ϣ
               ulP1         �������1
               ulP2         �������2
               pstLogData   �������ݵ�Log������
               ulFileID     �������ݲ������ļ�
               lLineNo      �������ݲ������к�
*
* �������  : ��
*
* �� �� ֵ  :  ��
*****************************************************************************/
VOS_VOID OM_Inner_Log(const VOS_CHAR         *pucStr,
                            VOS_UINT32              ulP1,
                            VOS_UINT32              ulP2,
                            INNER_LOG_DATA_STRU     *pstLogData ,
                            VOS_UINT32              ulFileID,
                            VOS_INT32               lLineNo)
{
    VOS_UINT32  ulCounter;

#ifdef OM_DEBUG_PRINT
    vos_printf("\r\n T:0x%x ", OM_GetSlice());
    vos_printf("%s ",pucStr);
    vos_printf("F:%d,L:%d,P1:0x%x,P2:0x%x",ulFileID,lLineNo,ulP1,ulP2);
#endif  /* end of OM_DEBUG_PRINT */

    ulCounter = pstLogData->ulCnt;

    pstLogData->astLogData[ulCounter].ulFileNO  = ulFileID;
    pstLogData->astLogData[ulCounter].lLineNO   = lLineNo;
    pstLogData->astLogData[ulCounter].ulP1      = ulP1;
    pstLogData->astLogData[ulCounter].ulP2      = ulP2;
#ifdef SOCP_ACORE
    pstLogData->astLogData[ulCounter].ulSlice   = OM_GetSlice();
#endif

#ifdef SOCP_CCORE
    /* ��Ϊ�漰�Ĵ������ʣ����ÿ16�ζ�һ��sliceֵ */
    if (0 == ulCounter%16)
    {
        pstLogData->astLogData[ulCounter].ulSlice   = OM_GetSlice();
    }
#endif

    pstLogData->ulCnt                           = (ulCounter+1)%INNER_LOG_DATA_MAX;

    return;
}

/*****************************************************************************
* �� �� ��  : SOCP_REG_SAVE
*
* ��������  : ��������쳣�����浱ǰ��SOCP�ļĴ�����Ϣ
*
* �������  :  ulErrorNO       �쳣�����
               ulPara          �������
               pucData         ��������
               ulDataLen       �������ݳ���
*
* �������  : ��
*
* �� �� ֵ  :  ��
*****************************************************************************/
VOS_VOID SOCP_Log_Save(cb_buf_t *pstData)
{
    VOS_UINT8       *pucData;
    VOS_UINT32      ulDataLen;

    if(VOS_TRUE != g_strSocpStat.bInitFlag) /*��ʼ��δ��ɲ�����*/
    {
        pstData->ulDataLen = 0;
        VOS_MemSet(pstData->aucName, 0, EXCH_CB_NAME_SIZE);

        return;
    }

    /* ��д������Ϣ */
    VOS_StrNCpy(pstData->aucName, "SOCP LOG Info", EXCH_CB_NAME_SIZE);

    /* ������Ҫ�����logȫ�ֱ����Ĵ�С,�������ڴ�Ϊ�ָ����ֶ� */
    ulDataLen = SOCP_REGISTER_SIZE + sizeof(g_strSocpStat)+sizeof(g_stSocpLog)+(3*sizeof(VOS_UINT32));

    /* �����ڴ� */
#ifdef OAM_UT_DEBUG     /* only for UT */
    pucData = (VOS_UINT8*)VOS_MemAlloc(0,0,ulDataLen);
#else
#if (VOS_OS_VER == VOS_LINUX)
    pucData = (VOS_UINT8*)kmalloc(ulDataLen, GFP_KERNEL);
#elif (VOS_OS_VER == VOS_RTOSCK)
    pucData = (VOS_UINT8*)SRE_MemCacheAlloc(ulDataLen, MEM_ADDR_ALIGN_004);
#else
    pucData = (VOS_UINT8*)malloc(ulDataLen);
#endif  /*(VOS_OS_VER == VOS_LINUX)*/
#endif  /*OAM_UT_DEBUG*/

    /*�ڴ�����ʧ�ܱ��沿����Ϣ*/
    if(VOS_NULL_PTR == pucData)
    {
        pstData->pucData    = (VOS_UINT8*)&g_stSocpLog;
        pstData->ulDataLen  = sizeof(g_stSocpLog);
    }
    else    /*������������*/
    {
        /*lint -e810*/
        pstData->pucData    = pucData;

        pstData->ulDataLen  = ulDataLen;

        /*���浱ǰIP REG��Ϣ*/
        VOS_MemSet(pucData, SOCP_ERROR_INFO_TAG, sizeof(VOS_UINT32));

        pucData += sizeof(VOS_UINT32);

        VOS_MemCpy(pucData, (unsigned char *)g_strSocpStat.uBaseAddr, SOCP_REGISTER_SIZE);

        pucData += SOCP_REGISTER_SIZE;

        /*���浱ǰͨ��������Ϣ*/
        VOS_MemSet(pucData, SOCP_ERROR_INFO_TAG, sizeof(VOS_UINT32));

        pucData += sizeof(VOS_UINT32);

        VOS_MemCpy(pucData, &g_strSocpStat, sizeof(g_strSocpStat));

        pucData += sizeof(g_strSocpStat);

        /*���浱ǰͨ��log��Ϣ*/
        VOS_MemSet(pucData, SOCP_ERROR_INFO_TAG, sizeof(VOS_UINT32));

        pucData += sizeof(VOS_UINT32);

        VOS_MemCpy(pucData, &g_stSocpLog, sizeof(g_stSocpLog));
        /*lint +e810*/
    }

    return; /*���أ�������������Ҫ�ͷ��ڴ�*/
}

/*****************************************************************************
* �� �� ��  : SocpGetIdleBuffer
*
* ��������  : ��ѯ���л�����
*
* �������  :  pRingBuffer       ����ѯ�Ļ���buffer
               pRWBuffer         ����Ļ���buffer
*
* �������  : ��
*
* �� �� ֵ  :  ��
*****************************************************************************/
VOS_VOID SocpGetIdleBuffer(SOCP_RING_BUF_STRU   *pRingBuffer,
                                 SOCP_BUFFER_RW_STRU  *pRWBuffer)
{
    if(pRingBuffer->u32Write < pRingBuffer->u32Read)
    {
        /* ��ָ�����дָ�룬ֱ�Ӽ��� */
        pRWBuffer->pBuffer = (VOS_UINT8 *)(pRingBuffer->u32Write);
        pRWBuffer->u32Size = (VOS_UINT32)(pRingBuffer->u32Read - pRingBuffer->u32Write - 1);
        pRWBuffer->pRbBuffer = (VOS_UINT8 *)VOS_NULL_PTR;
        pRWBuffer->u32RbSize = 0;
    }
    else
    {
        /* дָ����ڶ�ָ�룬��Ҫ���ǻؾ� */
        if(pRingBuffer->u32Read != pRingBuffer->u32Start)
        {
            pRWBuffer->pBuffer = (VOS_UINT8 *)(pRingBuffer->u32Write);
            pRWBuffer->u32Size = (VOS_UINT32)(pRingBuffer->u32End - pRingBuffer->u32Write + 1);
            pRWBuffer->pRbBuffer = (VOS_UINT8 *)(pRingBuffer->u32Start);
            pRWBuffer->u32RbSize = (VOS_UINT32)(pRingBuffer->u32Read - pRingBuffer->u32Start - 1);
        }
        else
        {
            pRWBuffer->pBuffer = (VOS_UINT8 *)(pRingBuffer->u32Write);
            pRWBuffer->u32Size = (VOS_UINT32)(pRingBuffer->u32End - pRingBuffer->u32Write);
            pRWBuffer->pRbBuffer = (VOS_UINT8 *)VOS_NULL_PTR;
            pRWBuffer->u32RbSize = 0;
        }
    }

    return;
}

/*****************************************************************************
* �� �� ��  : SocpGetDataBuffer
*
* ��������  : ��ȡ���л�����������
*
* �������  :  pRingBuffer       ����ѯ�Ļ���buffer
               pRWBuffer         ����Ļ���buffer
*
* �������  : ��
*
* �� �� ֵ  :  ��
*****************************************************************************/
VOS_VOID SocpGetDataBuffer(SOCP_RING_BUF_STRU  *pRingBuffer,
                                  SOCP_BUFFER_RW_STRU *pRWBuffer)
{
    if (pRingBuffer->u32Read <= pRingBuffer->u32Write)
    {
        /* дָ����ڶ�ָ�룬ֱ�Ӽ��� */
        pRWBuffer->pBuffer   = (VOS_UINT8 *)(pRingBuffer->u32Read);
        pRWBuffer->u32Size   = (VOS_UINT32)(pRingBuffer->u32Write - pRingBuffer->u32Read);
        pRWBuffer->pRbBuffer = (VOS_UINT8 *)VOS_NULL_PTR;
        pRWBuffer->u32RbSize = 0;
    }
    else
    {
        /* ��ָ�����дָ�룬��Ҫ���ǻؾ� */
        pRWBuffer->pBuffer   = (VOS_UINT8 *)(pRingBuffer->u32Read);
        pRWBuffer->u32Size   = (VOS_UINT32)(pRingBuffer->u32End - pRingBuffer->u32Read + 1);
        pRWBuffer->pRbBuffer = (VOS_UINT8 *)(pRingBuffer->u32Start);
        pRWBuffer->u32RbSize = (VOS_UINT32)(pRingBuffer->u32Write - pRingBuffer->u32Start);
    }

    return;
}

/*****************************************************************************
* �� �� ��  : SocpWriteDone
*
* ��������  : ���»�������дָ��
*
* �������  :  pRingBuffer       �����µĻ���buffer
               u32Size           ���µ����ݳ���
*
* �������  : ��
*
* �� �� ֵ  :  ��
*****************************************************************************/
VOS_VOID SocpWriteDone(SOCP_RING_BUF_STRU *pRingBuffer, VOS_UINT32 u32Size)
{
    VOS_UINT32                             tmp_size;
    VOS_UINT32                             rb_size;

    tmp_size = pRingBuffer->u32End - pRingBuffer->u32Write + 1;

    if (tmp_size > u32Size)
    {
        (VOS_VOID)SOCP_FLUSH_CACHE(pRingBuffer->u32Write, u32Size);
        pRingBuffer->u32Write += u32Size;
    }
    else
    {
        rb_size = u32Size - tmp_size;

        (VOS_VOID)SOCP_FLUSH_CACHE(pRingBuffer->u32Write, tmp_size);
        (VOS_VOID)SOCP_FLUSH_CACHE(pRingBuffer->u32Start, rb_size);
        pRingBuffer->u32Write = pRingBuffer->u32Start + rb_size;
    }

    return;
}

/*****************************************************************************
* �� �� ��  : SocpReadDone
*
* ��������  : ���»������Ķ�ָ��
*
* �������  :  pRingBuffer       �����µĻ���buffer
               u32Size           ���µ����ݳ���
*
* �������  : ��
*
* �� �� ֵ  :  ��
*****************************************************************************/
VOS_VOID SocpReadDone(SOCP_RING_BUF_STRU *pRingBuffer, VOS_UINT32 u32Size)
{
    pRingBuffer->u32Read += u32Size;

    if (pRingBuffer->u32Read > pRingBuffer->u32End)
    {
        pRingBuffer->u32Read -= pRingBuffer->u32Length;
    }

    return;
}

/*****************************************************************************
* �� �� ��  : SOCP_CleanEncSrcChan
*
* ��������  : ��ձ���Դͨ��
*
* �������  : enSrcChanID       ����ͨ����
*
* �������  : VOS_OK/BSP_ERR_SOCP_INVALID_CHAN
*
* �� �� ֵ  : �ͷųɹ����ı�ʶ��
*****************************************************************************/
VOS_UINT32 SOCP_CleanEncSrcChan(SOCP_CODER_SRC_ENUM_U32 enSrcChanID)
{
    VOS_UINT32                          ulResetFlag;
    VOS_UINT32                          i;
    VOS_UINT32                          ulChanID;
    VOS_UINT32                          ulChanType;

    ulChanID        = SOCP_REAL_CHAN_ID(enSrcChanID);
    ulChanType      = SOCP_REAL_CHAN_TYPE(enSrcChanID);

    SOCP_CHECK_CHAN_TYPE(ulChanType, SOCP_CODER_SRC_CHAN);

    /* ��λͨ�� */
    SOCP_REG_SETBITS(SOCP_REG_ENCRST, ulChanID, 1, 1);

    /* �ȴ�ͨ������ */
    for(i=0; i< SOCP_RESET_TIME; i++)
    {
        ulResetFlag = SOCP_REG_GETBITS(SOCP_REG_ENCRST, ulChanID, 1);

#ifndef OAM_UT_DEBUG     /* only for UT */
        if(0 == ulResetFlag)
        {
            break;
        }
#endif
    }

    if(SOCP_RESET_TIME == i)
    {
        SOCP_LOG_WARNING("SocpCleanEncChan failed!\n", ulChanID, 0);
    }

    return VOS_OK;
}


#ifdef SOCP_ACORE
/*****************************************************************************
* �� �� ��  : SocpGetNoEmptyEncDstChan
*
* ��������  : SOCP����Ŀ��ͨ���Ƿ�������
*
* �������  : ��
*
* �������  : ��
*
* �� �� ֵ  : BSP_U8 0:������ ��0:��Ӧͨ����λ
*****************************************************************************/
VOS_UINT8 SocpGetNoEmptyEncDstChan(VOS_VOID)
{
    VOS_UINT8                   ucChanSet = 0;
    SOCP_BUFFER_RW_STRU         stBuff;
    VOS_UINT32                  i;

    for(i=0; i<SOCP_MAX_ENCDST_CHN; i++)
    {
        VOS_MemSet(&stBuff, 0x0, sizeof(SOCP_BUFFER_RW_STRU));

        if(VOS_OK != BSP_SOCP_GetReadBuff(SOCP_CHAN_DEF(SOCP_CODER_DEST_CHAN, i), &stBuff))
        {
            continue;
        }

        if(stBuff.u32Size + stBuff.u32RbSize > 0)
        {
            ucChanSet = (VOS_UINT8)(ucChanSet | (1 << i));
        }
    }

    return ucChanSet;
}


VOS_UINT32  SOCP_MsConvertToCycle(VOS_UINT32 ulDelayTimeInMs)
{
    /* ulDelayTimeInMs���Ϊ1200000ms��ulDelayTimeInMs * 2289������Ϊ32λ���ݣ��ʿ��Բ��������㷨���� */
    return ((ulDelayTimeInMs * 2289) / 1000);
}

/*****************************************************************************
* �� �� ��  : BSP_SOCP_GetSDLogCfg
*
* ��������  : ��ѯˢ�º�LOG2.0 SOCP��ʱ������Ϣ
*
* �������  : ��
*
* �������  : ��
*
* �� �� ֵ  : SOCP_ENC_DST_BUF_LOG_CFG_STRUָ��
*****************************************************************************/
VOS_UINT32 BSP_SOCP_GetSDLogCfg(VOS_UINT32 *pulEnable, VOS_UINT32 *pulTimerLen, VOS_UINT32 *pulBufferSize)
{
    if ((VOS_NULL_PTR == pulTimerLen) || (VOS_NULL_PTR == pulEnable) || (VOS_NULL_PTR == pulBufferSize))
    {
        return VOS_ERR;
    }

    *pulTimerLen = g_stEncDstBufLogConfig.ulCurTimeout;

    if (SOCP_ENC_DEST_LOG_DELAY_ON == g_stEncDstBufLogConfig.logOnFlag)
    {
        *pulEnable = VOS_TRUE;
    }
    else
    {
        *pulEnable = VOS_FALSE;
    }

    *pulBufferSize = g_stEncDstBufLogConfig.BufferSize;

    return VOS_OK;
}

/*****************************************************************************
* �� �� ��  : BSP_SOCP_SetLogIntTimeOut
*
* ��������  : ʹ��Ĭ�ϵĳ�ʱʱ��������LOG2.0 SOCP��ʱ����
*
* �������  : ��
*
* �������  : ��
*
* �� �� ֵ  : ��
*****************************************************************************/
VOS_VOID BSP_SOCP_SetLogIntTimeOutDefautl(VOS_VOID)
{
    if (SOCP_ENC_DEST_LOG_DELAY_ON == g_stEncDstBufLogConfig.logOnFlag)
    {
        SOCP_REG_WRITE(SOCP_REG_INTTIMEOUT, SOCP_TRANS_TIMEOUT_DEFAULT);    /* ��ʱ�����жϳ�ʱ���� */

        /* ����SOCP�ĳ�ʱʱ��Ϊ10MS */
        g_stEncDstBufLogConfig.ulCurTimeout = 10;
    }

    return;
}

/*****************************************************************************
* �� �� ��  : BSP_SOCP_SetLogIntTimeOut
*
* ��������  : ʹ��CMD LINE�еĳ�ʱʱ��������LOG2.0 SOCP��ʱ����
*
* �������  : ��
*
* �������  : ��
*
* �� �� ֵ  : ��
*****************************************************************************/
VOS_VOID BSP_SOCP_SetLogIntTimeOut(VOS_VOID)
{
    if (SOCP_ENC_DEST_LOG_DELAY_ON == g_stEncDstBufLogConfig.logOnFlag)
    {
        SOCP_REG_WRITE(SOCP_REG_INTTIMEOUT, SOCP_MsConvertToCycle(g_stEncDstBufLogConfig.overTime));

        /* ����SOCP�ĳ�ʱʱ��ΪDTS�еĳ�ʱʱ�� */
        g_stEncDstBufLogConfig.ulCurTimeout = g_stEncDstBufLogConfig.overTime;
    }

    return;
}


/*****************************************************************************
* �� �� ��  : SocpGetLogCfg
*
* ��������  : ��ȡLOG2.0 SOCPˮ�ߡ���ʱ������Ϣ
*
* �������  : ��
*
* �������  : ��
*
* �� �� ֵ  : SOCP_ENC_DST_BUF_LOG_CFG_STRUָ��
*****************************************************************************/
SOCP_ENC_DST_BUF_LOG_CFG_STRU * SocpGetSDLogCfg(VOS_VOID)
{
    return &g_stEncDstBufLogConfig;
}

/*****************************************************************************
* �� �� ��  : BSP_SOCP_EncDstBufFlush
*
* ��������  : SOCP����Ŀ��buffer���������������
*
* �������  : ��
*
* �������  : ��
*
* �� �� ֵ  : VOS_INT32 VOS_OK:�ɹ� MDRV_ERROR:ʧ��
*****************************************************************************/
VOS_UINT32 BSP_SOCP_EncDstBufFlush(VOS_VOID)
{
    SOCP_ENC_DST_BUF_LOG_CFG_STRU   *stcfg;

    /* ��ȡ���� */
    stcfg = SocpGetSDLogCfg();

    /* LOG2.0δ���� */
    if (SOCP_ENC_DEST_LOG_DELAY_ON != stcfg->logOnFlag)
    {
        return VOS_ERR;
    }

    /* ��EncDstCh1������SOCP���� */
    if (VOS_OK != VOS_SmV(g_strSocpStat.u32EncDstSemIDChannel[SOCP_REAL_CHAN_ID(SOCP_CODER_DST_OM_IND)]))
    {
        return VOS_ERR;
    }

    g_stSocpDebugInfo.stSocpSDLogInfo[SOCP_REAL_CHAN_ID(SOCP_CODER_DST_OM_IND)].ulFlushBufferNum++;

    g_stSocpDebugInfo.stSocpEncDstSemInfo[SOCP_REAL_CHAN_ID(SOCP_CODER_DST_OM_IND)].ulFlushNum++;
    g_stSocpDebugInfo.stSocpEncDstSemInfo[SOCP_REAL_CHAN_ID(SOCP_CODER_DST_OM_IND)].ulFlushSlice = OM_GetSlice();

    return VOS_OK;
}


/*****************************************************************************
* �� �� ��  : SocpEncDstTaskProc
*
* ��������  : A�˱���Ŀ��ͨ�����񹫹�����
* �������  : ulRealChannelId - ʵ�ʱ���Ŀ��ͨ��ID
*
* �������  : ��
*
* �� �� ֵ   : ��
*****************************************************************************/
VOS_VOID SocpEncDstTaskProc(VOS_UINT32 ulRealChannelId)
{
    VOS_UINT32                          ulCBTime = 0;
    VOS_UINT32                          ulChanId;

    /* ���ͨ���Ƿ�����*/
    if (SOCP_CHN_SET != g_strSocpStat.sEncDstChan[ulRealChannelId].u32SetStat)
    {
        return;
    }

    g_stSocpDebugInfo.sSocpDebugEncDst.u32SocpEncDstTskTrfCbOriCnt[ulRealChannelId]++;

    if (VOS_NULL_PTR != g_strSocpStat.sEncDstChan[ulRealChannelId].read_cb)
    {
        ulChanId    = SOCP_CHAN_DEF(SOCP_CODER_DEST_CHAN, ulRealChannelId);

        ulCBTime    = OM_GetSlice();

        (VOS_VOID)g_strSocpStat.sEncDstChan[ulRealChannelId].read_cb(ulChanId);

        ulCBTime    = OM_GetSlice()-ulCBTime;     /* ��ȡ�ص�������ִ��ʱ�� */

        SOCP_LOG_INFO("SocpEncDstTaskProc Dst Channel CallBack",ulChanId, ulCBTime);
    }

    g_stSocpDebugInfo.sSocpDebugEncDst.u32SocpEncDstTskTrfCbCnt[ulRealChannelId]++;

    return;
}


VOS_VOID SocpEncDstTaskChannel(
    VOS_UINT32      ulSocpEncDestCh,
    VOS_UINT32      ulPara2,
    VOS_UINT32      ulPara3,
    VOS_UINT32      ulPara4
)
{
    if (SOCP_CODER_DST_BUTT <= ulSocpEncDestCh)
    {
        SOCP_LOG_ERR("SocpEncDstTaskChannel: ulSocpEncDestCh is abnormal", VOS_NULL, VOS_NULL);
        return;
    }

    for(;;)
    {
        if(VOS_OK != VOS_SmP(g_strSocpStat.u32EncDstSemIDChannel[SOCP_REAL_CHAN_ID(ulSocpEncDestCh)], 0))
        {
#if defined(OAM_UT_DEBUG) || defined(DMT)   /*only for UT and ST*/
            return;
#endif
            g_stSocpDebugInfo.stSocpEncDstSemInfo[SOCP_REAL_CHAN_ID(ulSocpEncDestCh)].ulTaskErrNum++;
            g_stSocpDebugInfo.stSocpEncDstSemInfo[SOCP_REAL_CHAN_ID(ulSocpEncDestCh)].ulTaskErrSlice = OM_GetSlice();

            continue;
        }

        g_stSocpDebugInfo.stSocpEncDstSemInfo[SOCP_REAL_CHAN_ID(ulSocpEncDestCh)].ulTaskNum++;
        g_stSocpDebugInfo.stSocpEncDstSemInfo[SOCP_REAL_CHAN_ID(ulSocpEncDestCh)].ulTaskSlice = OM_GetSlice();


        SocpEncDstTaskProc(SOCP_REAL_CHAN_ID(ulSocpEncDestCh));

#if defined(OAM_UT_DEBUG) || defined(DMT)   /*only for UT and ST*/
        return;
#endif
    }
}

#if 0

/*****************************************************************************
* �� �� ��  : SocpDecDstTask
*
* ��������  : ģ��������:����Ŀ�ģ�˫��
* �������  : ��
*
* �������  : ��
*
* �� �� ֵ   : ��
*****************************************************************************/
VOS_VOID SocpDecDstTask(VOS_VOID)
{
    VOS_UINT32                          i;
    VOS_UINT32                          ulIntTfrState = 0;
    VOS_UINT32                          ulIntOvfState = 0;
    VOS_UINT32                          ulChanId;
    VOS_ULONG                           ulLockLevel;
    VOS_UINT32                          ulCBTime = 0;

    for(;;)
    {
        if(VOS_OK != VOS_SmP(g_strSocpStat.u32DecDstSemID, 0))
        {
#if defined(OAM_UT_DEBUG) || defined(DMT)   /*only for UT and ST*/
            return;
#endif
            continue;
        }

        /*lLockKey                        = VOS_SplIMP();*/
        VOS_SpinLockIntLock(&g_stSocpSpinLock, ulLockLevel);

        ulIntTfrState                   = g_strSocpStat.u32IntDecDstTfr;
        g_strSocpStat.u32IntDecDstTfr   = 0;

        ulIntOvfState                   = g_strSocpStat.u32IntDecDstOvf;
        g_strSocpStat.u32IntDecDstOvf   = 0;

        /*VOS_Splx(lLockKey);*/
        VOS_SpinUnlockIntUnlock(&g_stSocpSpinLock, ulLockLevel);

        /* ������봫������ж�*/
        if (0 != ulIntTfrState)
        {
            for (i=0; i<SOCP_MAX_DECDST_CHN; i++)
            {
                /* ���ͨ���Ƿ�����*/
                if (SOCP_CHN_SET != g_strSocpStat.sDecDstChan[i].u32SetStat)
                {
                    continue;
                }

                if (0 != (ulIntTfrState & ((VOS_UINT32)1 << i)))
                {
                    g_stSocpDebugInfo.sSocpDebugDecDst.u32SocpDecDstTskTrfCbOriCnt[i]++;

                    if (VOS_NULL_PTR != g_strSocpStat.sDecDstChan[i].read_cb)
                    {
                        ulChanId = SOCP_CHAN_DEF(SOCP_DECODER_DEST_CHAN, i);

                        ulCBTime = OM_GetSlice();

                        (VOS_VOID)g_strSocpStat.sDecDstChan[i].read_cb(ulChanId);

                        ulCBTime = OM_GetSlice()-ulCBTime;  /* ��ȡ�ص�������ִ��ʱ�� */

                        SOCP_LOG_INFO("SocpDecDstTask: Dst Trans CB", ulChanId, ulCBTime);
                    }

                    g_stSocpDebugInfo.sSocpDebugDecDst.u32SocpDecDstTskTrfCbCnt[i]++;
                }
            }
        }
        /* �������Ŀ�� buffer ����ж�*/
        else if (0 != ulIntOvfState)
        {
            for (i=0; i<SOCP_MAX_DECDST_CHN; i++)
            {
                /* ���ͨ���Ƿ�����*/
                if (SOCP_CHN_SET != g_strSocpStat.sDecDstChan[i].u32SetStat)
                {
                    continue;
                }

                if (0 != (ulIntOvfState & ((VOS_UINT32)1 << i)))
                {
                    g_stSocpDebugInfo.sSocpDebugDecDst.u32SocpDecDstTskOvfCbOriCnt[i]++;

                    ulChanId = SOCP_CHAN_DEF(SOCP_DECODER_DEST_CHAN, i);

                    ulCBTime = OM_GetSlice();   /* ��ȡͨ�����ʱ�� */

                    SOCP_LOG_WARNING("SocpDecDstTask: Dst Overflow CB", ulChanId, ulCBTime);

                    if (VOS_NULL_PTR != g_strSocpStat.sDecDstChan[i].read_cb)
                    {
                        (VOS_VOID)g_strSocpStat.sDecDstChan[i].read_cb(ulChanId);

                        ulCBTime = OM_GetSlice()-ulCBTime;  /* ��ȡ�ص�������ִ��ʱ�� */

                        SOCP_LOG_INFO("SocpDecDstTask: Dst Overflow CB Out", ulChanId, ulCBTime);
                    }

                    g_stSocpDebugInfo.sSocpDebugDecDst.u32SocpDecDstTskOvfCbCnt[i]++;
                }
            }
        }
        else
        {

        }

#if defined(OAM_UT_DEBUG) || defined(DMT)   /*only for UT and ST*/
        return;
#endif
    }
}
#endif

/*****************************************************************************
* �� �� ��   : SocpHandlerEncSrc
*
* ��������  : ����Դͨ��������
* �������  : ��
*
* �������  : ��
*
* �� �� ֵ   : ��
*****************************************************************************/

/*lint -e774*/
VOS_VOID SocpHandlerEncSrc(VOS_VOID)
{
    VOS_UINT32  IntFlag     = 0;
    VOS_UINT32  IntState    = 0;
    VOS_UINT32  FlagMask    = 0;
    VOS_UINT32  FlagState   = 0;
    VOS_UINT32  IntMask     = 0;
    VOS_UINT32  i           = 0;

    FlagMask    = SOCP_APP_ENC_FLAGINT_MASK;
    FlagState   = SOCP_REG_APP_INTSTAT1;
    IntMask     = SOCP_REG_APP_MASK1;

    /*read and clear the interrupt flags*/
    SOCP_REG_READ(SOCP_REG_GBL_INTSTAT, IntFlag);

    if (IntFlag & FlagMask)
    {
        SOCP_REG_READ(FlagState, IntState);
        SOCP_REG_WRITE(SOCP_REG_ENC_RAWINT1, IntState);

        for (i=0; i<SOCP_MAX_ENCSRC_CHN; i++)
        {
            if (IntState & ((VOS_UINT32)1 << i))
            {
                if(SOCP_REG_GETBITS(SOCP_REG_ENCSRC_BUFCFG1(i), 31, 1))
                {
                    SOCP_REG_SETBITS(IntMask, i, 1, 1);
                }

                g_stSocpDebugInfo.sSocpDebugEncSrc.u32SocpEncSrcIsrHeadIntCnt[i]++;
            }
        }
    }

    return;
}

/*lint +e774*/

/*****************************************************************************
* �� �� ��   : SocpHandlerEncDstTrfInt
*
* ��������  : ����Ŀ�Ĵ����жϴ�����
* �������  : ��
*
* �������  : ��
*
* �� �� ֵ   : ��
*****************************************************************************/
VOS_VOID SocpHandlerEncDstTrfInt(VOS_VOID)
{
    VOS_UINT32  IntState = 0;
    VOS_UINT32  i;
    VOS_UINT32  mask;
    VOS_UINT32  ulChannelId;

    SOCP_REG_READ(SOCP_REG_ENC_INTSTAT0, IntState);
    SOCP_REG_READ(SOCP_REG_ENC_MASK0, mask);
    SOCP_REG_WRITE(SOCP_REG_ENC_MASK0, (IntState | mask));   /* mask int 2011.7.27 by yangzhi */
    SOCP_REG_WRITE(SOCP_REG_ENC_RAWINT0, IntState);

    /*������ֵ����жϣ����⴫��������ϱ����������֮����ٴ�*/
    SOCP_REG_READ(SOCP_REG_ENC_MASK2, mask);
    SOCP_REG_WRITE(SOCP_REG_ENC_MASK2, (mask|((VOS_UINT32)(IntState<<SOCP_ENC_DST_BUFF_THRESHOLD_OVF_BEGIN))));

    for (i = 0; i < SOCP_MAX_ENCDST_CHN; i++)
    {
        if (IntState & ((VOS_UINT32)1 << i))
        {
            if (0 == i)
            {
                /* ��ӦSOCP_CODER_DST_LOM_CNFͨ�� */
                ulChannelId = SOCP_CODER_DST_OM_CNF;

                g_stSocpDebugInfo.stSocpEncDstSemInfo[SOCP_REAL_CHAN_ID(ulChannelId)].ulIntNum++;
                g_stSocpDebugInfo.stSocpEncDstSemInfo[SOCP_REAL_CHAN_ID(ulChannelId)].ulIntSlice = OM_GetSlice();

                VOS_SmV(g_strSocpStat.u32EncDstSemIDChannel[SOCP_REAL_CHAN_ID(ulChannelId)]);
            }
            else if(1 == i)
            {
                /* ��ӦSOCP_CODER_DST_LOM_INDͨ�� */
                ulChannelId = SOCP_CODER_DST_OM_IND;

                g_stSocpDebugInfo.stSocpEncDstSemInfo[SOCP_REAL_CHAN_ID(ulChannelId)].ulIntNum++;
                g_stSocpDebugInfo.stSocpEncDstSemInfo[SOCP_REAL_CHAN_ID(ulChannelId)].ulIntSlice = OM_GetSlice();

                VOS_SmV(g_strSocpStat.u32EncDstSemIDChannel[SOCP_REAL_CHAN_ID(ulChannelId)]);
            }
            else
            {
                /* ����ͨ����������¼�쳣 */
                g_stSocpDebugInfo.sSocpDebugEncDst.u32SocpEncDstIsrTrfIntINvalidChannelCnt[i]++;
            }

            g_stSocpDebugInfo.sSocpDebugEncDst.u32SocpEncDstIsrTrfIntCnt[i]++;
        }
    }

    return ;
}

/*****************************************************************************
* �� �� ��   : SocpHandlerEncDstOutOvfInt
*
* ��������  : ����Ŀ������жϴ�����
* �������  : ��
*
* �������  : ��
*
* �� �� ֵ   : ��
*****************************************************************************/
VOS_VOID SocpHandlerEncDstOutOvfInt(VOS_VOID)
{
    VOS_UINT32  IntState = 0;
    VOS_BOOL    bHandleChannel0 = VOS_FALSE;
    VOS_BOOL    bHandleChannel1 = VOS_FALSE;
    VOS_UINT32  i;
    VOS_UINT32  mask;
    VOS_UINT32  ulChannelId;

    SOCP_REG_READ(SOCP_REG_ENC_INTSTAT2, IntState);

    /* ����Ŀ��buffer�����ж� */
    if(0 != (IntState & SOCP_ENC_DST_BUFF_THRESHOLD_OVF_MASK))
    {
        SOCP_REG_READ(SOCP_REG_ENC_MASK2, mask);
        SOCP_REG_WRITE(SOCP_REG_ENC_MASK2, (IntState|mask));    /*�����ж�Mask*/
        SOCP_REG_WRITE(SOCP_REG_ENC_RAWINT2, IntState);         /*����ж�״̬*/

        for (i = 0; i < SOCP_MAX_ENCDST_CHN; i++)
        {
            if (IntState & ((VOS_UINT32)1 << (i + SOCP_ENC_DST_BUFF_THRESHOLD_OVF_BEGIN)))
            {
                if (0 == i)
                {
                    /* ��ӦSOCP_CODER_DST_LOM_CNFͨ�� */
                    bHandleChannel0 = VOS_TRUE;
                }
                else if(1 == i)
                {
                    /* ��ӦSOCP_CODER_DST_LOM_INDͨ�� */
                    bHandleChannel1 = VOS_TRUE;
                }
                else
                {
                    /* ����ͨ�������� */
                }

                g_stSocpDebugInfo.sSocpDebugEncDst.u32SocpEncDstIsrThresholdOvfIntCnt[i]++;
            }
        }
    }

    if(bHandleChannel0)
    {
        ulChannelId = SOCP_CODER_DST_OM_CNF;

        g_stSocpDebugInfo.stSocpEncDstSemInfo[SOCP_REAL_CHAN_ID(ulChannelId)].ulIntNum++;
        g_stSocpDebugInfo.stSocpEncDstSemInfo[SOCP_REAL_CHAN_ID(ulChannelId)].ulIntSlice = OM_GetSlice();

        VOS_SmV(g_strSocpStat.u32EncDstSemIDChannel[SOCP_REAL_CHAN_ID(ulChannelId)]);
    }

    if(bHandleChannel1)
    {
        ulChannelId = SOCP_CODER_DST_OM_IND;

        g_stSocpDebugInfo.stSocpEncDstSemInfo[SOCP_REAL_CHAN_ID(ulChannelId)].ulIntNum++;
        g_stSocpDebugInfo.stSocpEncDstSemInfo[SOCP_REAL_CHAN_ID(ulChannelId)].ulIntSlice = OM_GetSlice();

        VOS_SmV(g_strSocpStat.u32EncDstSemIDChannel[SOCP_REAL_CHAN_ID(ulChannelId)]);
    }

    return ;
}

/*****************************************************************************
* �� �� ��   : SocpHandlerEncDst
*
* ��������  : ����Ŀ���жϴ�����
* �������  : ��
*
* �������  : ��
*
* �� �� ֵ   : ��
*****************************************************************************/
VOS_VOID SocpHandlerEncDst(VOS_VOID)
{
    VOS_UINT32  IntFlag = 0;

    /*��ȡȫ���ж�״̬*/
    SOCP_REG_READ(SOCP_REG_GBL_INTSTAT, IntFlag);

    /*����Ŀ�Ĵ����ж�*/
    if (IntFlag & SOCP_APP_ENC_TFRINT_MASK)
    {
        SocpHandlerEncDstTrfInt();
    }
    /* �����ж���DMA����жϹ���һ���Ĵ�����DMA����жϲ�������ͨ�����ñ�֤�����ϱ���
       ͨ������жϺʹ����ж�ͬʱ�ʹ���һ�����ȴ������жϣ���������жϵ�ʱ�򲻻��д����ж��ϱ� */
    else if (IntFlag & SOCP_APP_ENC_OUTOVFINT_MASK)
    {
        SocpHandlerEncDstOutOvfInt();
    }
    else
    {
    }

    return ;
}

/*****************************************************************************
* �� �� ��   : SocpHandlerDecSrc
*
* ��������  : ����Դͨ���жϴ�����
* �������  : ��
*
* �������  : ��
*
* �� �� ֵ   : ��
*****************************************************************************/
VOS_VOID SocpHandlerDecSrc(VOS_VOID)
{
    VOS_UINT32  IntFlag  = 0;
    VOS_UINT32  IntState = 0;
    VOS_UINT32  ulmask;
    VOS_UINT32  i = 0;

    /*�����������*/
    SOCP_REG_READ(SOCP_REG_GBL_INTSTAT, IntFlag);

    if (IntFlag & SOCP_DEC_INERRINT_MASK)
    {
        /* ���ж� */
        SOCP_REG_READ(SOCP_REG_DEC_INTSTAT1, IntState);
        SOCP_REG_WRITE(SOCP_REG_DEC_RAWINT1, IntState);

        /* ���ν���Դ�ж� */
        SOCP_REG_READ(SOCP_REG_DEC_MASK1, ulmask);
        SOCP_REG_WRITE(SOCP_REG_DEC_MASK1, (IntState | ulmask));

        for (i = 0; i < SOCP_MAX_DECSRC_CHN; i++)
        {
            if ((IntState >> i) & 0x1111110)
            {
                g_stSocpDebugInfo.sSocpDebugDecSrc.u32SocpDecSrcIsrErrIntCnt[i]++;
            }
        }
    }

    return;
}

/*****************************************************************************
* �� �� ��   : SocpHandlerDecDst
*
* ��������  : ����Ŀ��ͨ���жϴ�����
* �������  : ��
*
* �������  : ��
*
* �� �� ֵ   : ��
*****************************************************************************/

/*lint -e774*/
VOS_VOID SocpHandlerDecDst(VOS_VOID)
{
    VOS_UINT32  IntFlag  = 0;
    VOS_UINT32  IntState = 0;
    VOS_UINT32  TfMask   = 0;
    VOS_UINT32  OvMask   = 0;
    VOS_UINT32  i        = 0;

    TfMask    = SOCP_CORE0_DEC_TFRINT_MASK;
    OvMask  = SOCP_CORE0_DEC_OUTOVFINT_MASK;

    /*���봫���ж�*/
    SOCP_REG_READ(SOCP_REG_GBL_INTSTAT, IntFlag);
    if (IntFlag & TfMask)
    {
        VOS_UINT32 mask;

        SOCP_REG_READ(SOCP_REG_DEC_CORE0ISTAT0, IntState);
        IntState = IntState & 0xffff;
        SOCP_REG_READ(SOCP_REG_DEC_CORE0MASK0, mask);
        SOCP_REG_WRITE(SOCP_REG_DEC_CORE0MASK0, (IntState | mask));  /*added by yangzhi 2011.7.27 */
        SOCP_REG_WRITE(SOCP_REG_DEC_RAWINT0, IntState);

        SOCP_REG_READ(SOCP_REG_DEC_CORE0MASK2, mask);
        SOCP_REG_WRITE(SOCP_REG_DEC_CORE0MASK2, (IntState | mask)); /*���������ж�*/

        for (i = 0; i < SOCP_MAX_DECDST_CHN; i++)
        {
            if (IntState & ((VOS_UINT32)1 << i))
            {
                g_stSocpDebugInfo.sSocpDebugDecDst.u32SocpDecDstIsrTrfIntCnt[i]++;
            }
        }
    }
    /*����Ŀ��buffer ����*/
    else if (IntFlag & OvMask)
    {
        SOCP_REG_READ(SOCP_REG_DEC_CORE0ISTAT2, IntState);
        IntState = IntState & 0xffff;
        SOCP_REG_WRITE(SOCP_REG_DEC_RAWINT2, IntState);

        SOCP_REG_WRITE(SOCP_REG_DEC_CORE0MASK2, IntState); /*���������ж�*/

        for (i = 0; i < SOCP_MAX_DECDST_CHN; i++)
        {
            if (IntState & ((VOS_UINT32)1 << i))
            {
                g_stSocpDebugInfo.sSocpDebugDecDst.u32SocpDecDstIsrOvfIntCnt[i]++;
            }
        }
    }
    else
    {
    }

    return;
}

/*lint +e774*/

/*****************************************************************************
* �� �� ��   : SocpAppInthandler
*
* ��������  : APP ���жϴ�����
* �������  : ��
*
* �������  : ��
*
* �� �� ֵ   : ��
*****************************************************************************/
VOS_UINT32 SocpAppInthandler(VOS_VOID)
{
    VOS_ULONG                           ulLockLevel;

    VOS_SpinLockIntLock(&g_stSocpSpinLock, ulLockLevel);

    g_stSocpDebugInfo.sSocpDebugGBl.u32SocpAppEtrIntCnt++;

    SocpHandlerEncSrc();

    SocpHandlerEncDst();

    SocpHandlerDecSrc();

    SocpHandlerDecDst();

    g_stSocpDebugInfo.sSocpDebugGBl.u32SocpAppSucIntCnt++;

    VOS_SpinUnlockIntUnlock(&g_stSocpSpinLock, ulLockLevel);

    return 1;
}

/*****************************************************************************
* �� �� ��  : BSP_SOCP_DecoderSetDestChan
*
* ��������  : ����Ŀ��ͨ�����뼰���ú���
*
* �������  : pAttr           ����Ŀ��ͨ�����ò���
*             pDestChanID     ��ʼ������Ŀ��ͨ��ID
*
* �������  :
*
* �� �� ֵ  : ���뼰���óɹ����ı�ʶ��
*****************************************************************************/
VOS_UINT32 BSP_SOCP_DecoderSetDestChan(SOCP_DECODER_DST_ENUM_U32 enDestChanID,
                                                    SOCP_DECODER_DEST_CHAN_STRU *pAttr)
{
    VOS_UINT32             start;
    VOS_ULONG              ulStartTmp;
    VOS_UINT32             end;
    VOS_ULONG              ulEndTmp;
    VOS_UINT32             bufThreshold;
    VOS_UINT32             buflength;
    VOS_UINT32             u32ChanID;
    VOS_UINT32             u32SrcChanID;
    VOS_UINT32             u32ChanType;
    SOCP_DECDST_CHAN_STRU  *pChan;

    /* �ж��Ƿ��Ѿ���ʼ�� */
    SOCP_CHECK_INIT();

    /* �жϲ�����Ч�� */
    SOCP_CHECK_PARA(pAttr);
    SOCP_CHECK_DATA_TYPE(pAttr->eDataType);

    u32ChanID    = SOCP_REAL_CHAN_ID(enDestChanID);
    u32ChanType  = SOCP_REAL_CHAN_TYPE(enDestChanID);

    SOCP_CHECK_CHAN_TYPE(u32ChanType, SOCP_DECODER_DEST_CHAN);
    SOCP_CHECK_CHAN_ID(u32ChanID, SOCP_MAX_DECDST_CHN);

    u32SrcChanID = SOCP_REAL_CHAN_ID(pAttr->u32SrcChanID);
    u32ChanType  = SOCP_REAL_CHAN_TYPE(pAttr->u32SrcChanID);

    SOCP_CHECK_CHAN_TYPE(u32ChanType, SOCP_DECODER_SRC_CHAN);
    SOCP_CHECK_CHAN_ID(u32SrcChanID, SOCP_MAX_DECSRC_CHN);

    /* �жϸ����ĵ�ַ�ͳ����Ƿ�Ϊ���ֽڱ���*/
    ulStartTmp   = (VOS_ULONG)pAttr->sDecoderDstSetBuf.pucOutputStart;
    start        = (VOS_UINT32)(ulStartTmp & 0xFFFFFFFFUL);
    ulEndTmp     = (VOS_ULONG)pAttr->sDecoderDstSetBuf.pucOutputEnd;
    end          = (VOS_UINT32)(ulEndTmp & 0xFFFFFFFFUL);
    bufThreshold    = pAttr->sDecoderDstSetBuf.u32Threshold;

    SOCP_CHECK_PARA(start);
    SOCP_CHECK_8BYTESALIGN(start);
    SOCP_CHECK_PARA(end);
    SOCP_CHECK_BUF_ADDR(start, end);
    SOCP_CHECK_PARA(bufThreshold);

    if (bufThreshold > SOCP_DEC_DST_TH_MAX)
    {
        SOCP_LOG_ERR("DecoderAllocDestChan: buffer threshold is too large", bufThreshold, 0);
        return BSP_ERR_SOCP_INVALID_PARA;
    }

    buflength = end - start + 1;

    SOCP_CHECK_8BYTESALIGN(buflength);

    if (buflength > SOCP_DEC_DST_BUFLGTH_MAX)
    {
        SOCP_LOG_ERR("DecoderAllocDestChan: buffer length is too large", buflength, 0);
        return BSP_ERR_SOCP_INVALID_PARA;
    }

    /* д����ʼ��ַ��Դbuffer��ʼ��ַ�Ĵ���*/
    SOCP_REG_SETBITS(SOCP_REG_DECDEST_BUFCFG(u32ChanID), 24, 8, pAttr->eDataType);
    SOCP_REG_WRITE(SOCP_REG_DECDEST_BUFRPTR(u32ChanID), SOCP_VIRT_PHY(start));
    SOCP_REG_WRITE(SOCP_REG_DECDEST_BUFWPTR(u32ChanID), SOCP_VIRT_PHY(start));
    SOCP_REG_WRITE(SOCP_REG_DECDEST_BUFADDR(u32ChanID), SOCP_VIRT_PHY(start));
    SOCP_REG_SETBITS(SOCP_REG_DECDEST_BUFCFG(u32ChanID), 0, 16, buflength);
    SOCP_REG_SETBITS(SOCP_REG_DECDEST_BUFCFG(u32ChanID), 16, 8, bufThreshold);

    /* ������� */
    pChan = &g_strSocpStat.sDecDstChan[u32ChanID];

    pChan->eDataType              = pAttr->eDataType;
    pChan->sDecDstBuf.u32Start    = start;
    pChan->sDecDstBuf.u32End      = end;
    pChan->sDecDstBuf.u32Length   = buflength;
    pChan->sDecDstBuf.u32Read     = start;
    pChan->sDecDstBuf.u32Write    = start;

    /* ͨ���Ѿ����� */
    pChan->u32SetStat             = SOCP_CHN_SET;

    /* �����жϣ��ٴ��ж�*/
    SOCP_REG_SETBITS(SOCP_REG_DEC_RAWINT0,      u32ChanID, 1, 1);
    SOCP_REG_SETBITS(SOCP_REG_DEC_CORE0MASK0,   u32ChanID, 1, 0);

    SOCP_REG_SETBITS(SOCP_REG_DEC_RAWINT2,      u32ChanID, 1, 1);
    SOCP_REG_SETBITS(SOCP_REG_DEC_CORE0MASK2,   u32ChanID, 1, 0);

    return VOS_OK;
}

/*****************************************************************************
* �� �� ��  : BSP_SOCP_CoderSetDestChanAttr
*
* ��������  : ����Ŀ��ͨ�����ú���
*
* �������  : u32DestChanID      ����Ŀ��ͨ��ID
              pDestAttr          ����Ŀ��ͨ�����ò���
*
* �������  : ��
* �� �� ֵ  : ���óɹ����ı�ʶ��
*****************************************************************************/
VOS_UINT32 BSP_SOCP_CoderSetDestChanAttr(VOS_UINT32                 u32DestChanID,
                                         SOCP_CODER_DEST_CHAN_S    *pDestAttr)
{
    VOS_UINT32             start;
    VOS_ULONG              ulStartTmp;
    VOS_UINT32             end;
    VOS_ULONG              ulEndTmp;
    VOS_UINT32             bufThreshold;
    VOS_UINT32             buflength;
    VOS_UINT32             u32ChanID;
    VOS_UINT32             u32ChanType;
    VOS_UINT32             u32Thrh;
    SOCP_ENCDST_CHAN_STRU  *pChan;
    VOS_UINT32             ulVersion;

    /* �ж��Ƿ��Ѿ���ʼ�� */
    SOCP_CHECK_INIT();

    /* �жϲ�����Ч�� */
    SOCP_CHECK_PARA(pDestAttr);

    u32ChanID   = SOCP_REAL_CHAN_ID(u32DestChanID);
    u32ChanType = SOCP_REAL_CHAN_TYPE(u32DestChanID);

    SOCP_CHECK_CHAN_TYPE(u32ChanType, SOCP_CODER_DEST_CHAN);
    SOCP_CHECK_CHAN_ID(u32ChanID, SOCP_MAX_ENCDST_CHN);

    ulStartTmp  = (VOS_ULONG)pDestAttr->sCoderSetDstBuf.pucOutputStart;
    start       = (VOS_UINT32)(ulStartTmp & 0xFFFFFFFFUL);

    ulEndTmp    = (VOS_ULONG)pDestAttr->sCoderSetDstBuf.pucOutputEnd;
    end         = (VOS_UINT32)(ulEndTmp & 0xFFFFFFFFUL);
    bufThreshold= pDestAttr->sCoderSetDstBuf.u32Threshold;
    u32Thrh     = pDestAttr->u32EncDstThrh;

    SOCP_CHECK_PARA(start);
    SOCP_CHECK_8BYTESALIGN(start);
    SOCP_CHECK_PARA(end);
    SOCP_CHECK_BUF_ADDR(start, end);
    SOCP_CHECK_PARA(bufThreshold);

    buflength = end - start + 1;
    SOCP_CHECK_8BYTESALIGN(buflength);

    SOCP_REG_READ(SOCP_REG_VERSION, ulVersion);

    if (SOCP_OLD_VER == ulVersion)
    {
        if (buflength > SOCP_ENC_DST_BUFLGTH_MAX)
        {
            SOCP_LOG_ERR("CoderSetDestChanAttr: buffer length is too large", buflength, 0);
            return BSP_ERR_SOCP_INVALID_PARA;
        }

        if (bufThreshold > SOCP_ENC_DST_TH_MAX)
        {
            SOCP_LOG_ERR("CoderSetDestChanAttr: buffer threshold is too large", bufThreshold, 0);
            return BSP_ERR_SOCP_INVALID_PARA;
        }
    }

    if(u32Thrh < SOCP_ENC_DST_THRH_MIN)
    {
        SOCP_LOG_ERR("CoderSetDestChanAttr: buffer thrh is too large", u32Thrh, 0);
        return BSP_ERR_SOCP_INVALID_PARA;
    }

    pChan = &g_strSocpStat.sEncDstChan[u32ChanID];

    /* ����������������ٴ�����,ͨ����λ֮��ֻ����һ�� */
    if (SOCP_CHN_SET == pChan->u32SetStat)
    {
        SOCP_LOG_ERR("CoderSetDestChanAttr: channel can't be set twice!", u32ChanID, 0);
        return BSP_ERR_SOCP_SET_FAIL;
    }

    /* ʹ�����ò����������� */
    /* д����ʼ��ַ��Ŀ��buffer��ʼ��ַ�Ĵ���*/
    SOCP_REG_WRITE(SOCP_REG_ENCDEST_BUFADDR(u32ChanID),SOCP_VIRT_PHY(start));
    SOCP_REG_WRITE(SOCP_REG_ENCDEST_BUFRPTR(u32ChanID),SOCP_VIRT_PHY(start));
    SOCP_REG_WRITE(SOCP_REG_ENCDEST_BUFWPTR(u32ChanID),SOCP_VIRT_PHY(start));

    /* SOCP��V8R2�Ͻ��ж�Դͨ�����ý�����չ */
    if (SOCP_OLD_VER == ulVersion)
    {
        SOCP_REG_SETBITS(SOCP_REG_ENCDEST_BUFCFG(u32ChanID), 0, 21, buflength);
        SOCP_REG_SETBITS(SOCP_REG_ENCDEST_BUFCFG(u32ChanID), 21, 11, bufThreshold);
    }
    else
    {
        SOCP_REG_SETBITS(SOCP_REG_ENCDEST_BUFCFG(u32ChanID), 0, 31, buflength);
        SOCP_REG_SETBITS(SOCP_REG_ENCDEST_INTTHRH(u32ChanID), 0, 31, bufThreshold*1024);
    }

    SOCP_REG_SETBITS(SOCP_REG_ENCDEST_BUFTHRH(u32ChanID), 0, 31, u32Thrh);

    /* ��g_strSocpStat�б������*/
    pChan->u32ChanID              = u32ChanID;
    pChan->u32Thrh                = u32Thrh;
    pChan->sEncDstBuf.u32Start    = start;
    pChan->sEncDstBuf.u32End      = end;
    pChan->sEncDstBuf.u32Write    = start;
    pChan->sEncDstBuf.u32Read     = start;
    pChan->sEncDstBuf.u32Length   = buflength;

    /* ������ͨ���Ѿ����� */
    pChan->u32SetStat             = SOCP_CHN_SET;

    /* �����жϣ��ٴ��ж� */
    SOCP_REG_SETBITS(SOCP_REG_ENC_RAWINT0, u32ChanID, 1, 1);
    SOCP_REG_SETBITS(SOCP_REG_ENC_MASK0, u32ChanID, 1, 0);

    SOCP_REG_SETBITS(SOCP_REG_ENC_RAWINT2, u32ChanID, 1, 1);
    /*SOCP_REG_SETBITS(SOCP_REG_ENC_MASK2, u32ChanID, 1, 0);*//*�����ж��������жϣ�ͨ�����ñ�֤*/

    /* ����Ŀ��buffer��ֵ����ж� */
    SOCP_REG_SETBITS(SOCP_REG_ENC_RAWINT2, u32ChanID+SOCP_ENC_DST_BUFF_THRESHOLD_OVF_BEGIN, 1, 1);
    SOCP_REG_SETBITS(SOCP_REG_ENC_MASK2, u32ChanID+SOCP_ENC_DST_BUFF_THRESHOLD_OVF_BEGIN, 1, 0);

    return VOS_OK;
}

/*****************************************************************************
* �� �� ��  : BSP_SOCP_DecoderSetSrcChanAttr
*
* ��������  : ����Դͨ�����ú���
*
* �������  : u32SrcChanID    ����Դͨ��ID
*             pInputAttr      ����Դͨ�����ò���
*
* �������  :
*
* �� �� ֵ  : ���óɹ����ı�ʶ��
*****************************************************************************/
VOS_UINT32 BSP_SOCP_DecoderSetSrcChanAttr(VOS_UINT32                u32SrcChanID,
                                                        SOCP_DECODER_SRC_CHAN_STRU *pInputAttr)
{
    VOS_UINT32             start;
    VOS_ULONG              ulStartTmp;
    VOS_UINT32             end;
    VOS_ULONG              ulEndTmp;
    VOS_UINT32             buflength = 0;
    VOS_UINT32             u32ChanID;
    VOS_UINT32             u32ChanType;
    VOS_UINT32             i;
    VOS_UINT32             u32ResetFlag;
    SOCP_DECSRC_CHAN_STRU  *pDecSrcChan;

    /* �ж��Ƿ��Ѿ���ʼ�� */
    SOCP_CHECK_INIT();

    /* �жϲ�����Ч�� */
    SOCP_CHECK_PARA(pInputAttr);

    u32ChanID   = SOCP_REAL_CHAN_ID(u32SrcChanID);
    u32ChanType = SOCP_REAL_CHAN_TYPE(u32SrcChanID);

    SOCP_CHECK_CHAN_TYPE(u32ChanType, SOCP_DECODER_SRC_CHAN);
    SOCP_CHECK_CHAN_ID(u32ChanID, SOCP_MAX_DECSRC_CHN);
    SOCP_CHECK_DATA_TYPE_EN(pInputAttr->eDataTypeEn);

    ulStartTmp = (VOS_ULONG)pInputAttr->sDecoderSetSrcBuf.pucInputStart;
    start      = (VOS_UINT32)(ulStartTmp & 0xFFFFFFFFUL);
    ulEndTmp   = (VOS_ULONG)pInputAttr->sDecoderSetSrcBuf.pucInputEnd;
    end        = (VOS_UINT32)(ulEndTmp & 0xFFFFFFFFUL);

    SOCP_CHECK_PARA(start);
    SOCP_CHECK_8BYTESALIGN(start);
    SOCP_CHECK_PARA(end);
    SOCP_CHECK_BUF_ADDR(start, end);

    buflength = end - start + 1;

    SOCP_CHECK_8BYTESALIGN(buflength);

    if (buflength > SOCP_DEC_SRC_BUFLGTH_MAX)
    {
        SOCP_LOG_ERR("DecoderSetSrcChanAttr: buffer length is too large", buflength, 0);
        return BSP_ERR_SOCP_INVALID_PARA;
    }

    pDecSrcChan = &g_strSocpStat.sDecSrcChan[u32ChanID];

    if (SOCP_CHN_SET == pDecSrcChan->u32SetStat)
    {
        SOCP_LOG_ERR("DecoderSetSrcChanAttr: channel has been configed", u32ChanID, 0);
        return BSP_ERR_SOCP_DECSRC_SET;
    }

    /* ���ȸ�λͨ�� */
    SOCP_REG_SETBITS(SOCP_REG_DECRST, u32ChanID, 1, 1);

    /* �ȴ�ͨ����λ״̬���� */
    for (i = 0; i < SOCP_RESET_TIME; i++)
    {
        u32ResetFlag = SOCP_REG_GETBITS(SOCP_REG_DECRST, u32ChanID, 1);
        if (0 == u32ResetFlag)
        {
            break;
        }
    }

    if (SOCP_RESET_TIME == i)
    {
        SOCP_LOG_WARNING("DecoderSetSrcChanAttr: reset channel failed!\n", u32ChanID, 0);
    }

    /* ʹ�����ò����������� */
    SOCP_REG_WRITE(SOCP_REG_DECSRC_BUFWPTR(u32ChanID),SOCP_VIRT_PHY(start));
    SOCP_REG_WRITE(SOCP_REG_DECSRC_BUFRPTR(u32ChanID),SOCP_VIRT_PHY(start));
    SOCP_REG_WRITE(SOCP_REG_DECSRC_BUFADDR(u32ChanID),SOCP_VIRT_PHY(start));

    SOCP_REG_SETBITS(SOCP_REG_DECSRC_BUFCFG0(u32ChanID), 0, 16, buflength);
    SOCP_REG_SETBITS(SOCP_REG_DECSRC_BUFCFG0(u32ChanID), 31, 1, pInputAttr->eDataTypeEn);
    SOCP_REG_SETBITS(SOCP_REG_DECSRC_RDQCFG(u32ChanID), 29, 1, 0);

    /* ��ȫ�ֱ����б��氲װ�Ĳ��� */
    pDecSrcChan->u32ChanID              = u32ChanID;
    pDecSrcChan->eDataTypeEn            = pInputAttr->eDataTypeEn;
    pDecSrcChan->sDecSrcBuf.u32Start    = start;
    pDecSrcChan->sDecSrcBuf.u32End      = end;
    pDecSrcChan->sDecSrcBuf.u32Length   = buflength;
    pDecSrcChan->sDecSrcBuf.u32Read     = start;
    pDecSrcChan->sDecSrcBuf.u32Write    = start;

    pDecSrcChan->u32SetStat = SOCP_CHN_SET;

    return VOS_OK;
}

/*****************************************************************************
* �� �� ��  : SocpDecSrcStart
*
* ��������  : ������������
*
* �������  : ulRealChanID      ͨ��ID
* �������  :
*
* �� �� ֵ  : �����ɹ����ı�ʶ��
*****************************************************************************/
/*lint -e529*/
VOS_UINT32 SocpDecSrcStart(VOS_UINT32 ulRealChanID)
{
    VOS_UINT32 i;
    VOS_UINT32 ulIntIDMask  = 0;
    VOS_UINT32 ulLogic      = 1;

    SOCP_CHECK_CHAN_ID(ulRealChanID, SOCP_MAX_DECSRC_CHN);
    SOCP_CHECK_DECSRC_SET(ulRealChanID);

    /* ��rd����ж�*/
    if (SOCP_DECSRC_CHNMODE_LIST == g_strSocpStat.sDecSrcChan[ulRealChanID].eChnMode)
    {
        SOCP_REG_SETBITS(SOCP_REG_DEC_RAWINT1, ulRealChanID, 1, 1);
        SOCP_REG_SETBITS(SOCP_REG_DEC_MASK1, ulRealChanID, 1, 0);
    }

    for (i = 1; i < SOCP_DEC_SRCINT_NUM; i++)
    {
        ulIntIDMask  = SOCP_REG_GETBITS(SOCP_REG_DEC_RAWINT1, i * 4, 4);
        ulIntIDMask |= 1 << ulRealChanID;
        SOCP_REG_SETBITS(SOCP_REG_DEC_RAWINT1, (i*4), 4, ulIntIDMask);

        ulIntIDMask  = SOCP_REG_GETBITS(SOCP_REG_DEC_MASK1, i * 4, 4);
        ulIntIDMask &= ~(ulLogic << ulRealChanID);
        SOCP_REG_SETBITS(SOCP_REG_DEC_MASK1, (i*4), 4, ulIntIDMask);
    }

    /* ���ô�״̬*/
    SOCP_REG_SETBITS(SOCP_REG_DECSRC_BUFCFG0(ulRealChanID), 30, 1, 1);

    g_strSocpStat.sDecSrcChan[ulRealChanID].u32ChanEn = SOCP_CHN_ENABLE;

    g_stSocpDebugInfo.sSocpDebugDecSrc.u32SocpStartDecSrcCnt[ulRealChanID]++;

    return VOS_OK;
}
/*lint +e529*/

/*****************************************************************************
* �� �� ��  : BSP_SOCP_RegisterReadCB
*
* ��������  : �����ݻص�����ע�ắ��
*
* �������  : u32DestChanID  Ŀ��ͨ��ID
              ReadCB         �����ݻص�����
*
* �������  :
*
* �� �� ֵ  : ע��ɹ����ı�ʶ��
*****************************************************************************/
VOS_UINT32 BSP_SOCP_RegisterReadCB(VOS_UINT32 u32DestChanID, socp_read_cb ReadCB)
{
    VOS_UINT32 u32RealChanID;
    VOS_UINT32 u32ChanType;

    /* �ж��Ƿ��Ѿ���ʼ�� */
    SOCP_CHECK_INIT();

    /* ��ȡͨ�����ͺ�ʵ�ʵ�ͨ��ID */
    u32RealChanID = SOCP_REAL_CHAN_ID(u32DestChanID);
    u32ChanType   = SOCP_REAL_CHAN_TYPE(u32DestChanID);

    if (SOCP_DECODER_DEST_CHAN == u32ChanType) /* ����ͨ�� */
    {
        SOCP_CHECK_CHAN_ID(u32RealChanID, SOCP_MAX_DECDST_CHN);
        SOCP_CHECK_DECDST_SET(u32RealChanID);

        g_strSocpStat.sDecDstChan[u32RealChanID].read_cb = ReadCB;

        g_stSocpDebugInfo.sSocpDebugDecDst.u32SocpRegReadCBDecDstCnt[u32RealChanID]++;
    }

    else if (SOCP_CODER_DEST_CHAN == u32ChanType)/* ����ͨ�� */
    {
        SOCP_CHECK_CHAN_ID(u32RealChanID, SOCP_MAX_ENCDST_CHN);
        SOCP_CHECK_ENCDST_SET(u32RealChanID);

        /* ���ö�Ӧͨ���Ļص�����*/
        g_strSocpStat.sEncDstChan[u32RealChanID].read_cb = ReadCB;

        g_stSocpDebugInfo.sSocpDebugEncDst.u32SocpRegReadCBEncDstCnt[u32RealChanID]++;
    }
    else
    {
        SOCP_LOG_ERR("BSP_SOCP_RegisterReadCB: invalid Channel type", u32DestChanID, u32ChanType);
        return BSP_ERR_SOCP_INVALID_CHAN;
    }

    return VOS_OK;
}

/*****************************************************************************
* �� �� ��  : BSP_SOCP_GetReadBuff
*
* ��������  : ��ȡ������buffer����
*
* �������  : u32DestChanID  Ŀ��ͨ��buffer

* �������  : pBuffer        ��ȡ�Ķ�����buffer
*
* �� �� ֵ  : ��ȡ�ɹ����ı�ʶ��
*****************************************************************************/
VOS_UINT32 BSP_SOCP_GetReadBuff(VOS_UINT32 u32DestChanID, SOCP_BUFFER_RW_STRU *pBuffer)
{
    VOS_UINT32  u32ChanID;
    VOS_UINT32  u32ChanType;
    VOS_UINT32  uPAddr;

    /* �ж��Ƿ��Ѿ���ʼ�� */
    SOCP_CHECK_INIT();

    /* �жϲ�����Ч�� */
    SOCP_CHECK_PARA(pBuffer);

    SOCP_LOG_INFO("BSP_SOCP_GetReadBuff: Channel is", u32DestChanID, 0);

    /* ���ʵ��ͨ��id */
    u32ChanID           = SOCP_REAL_CHAN_ID(u32DestChanID);
    u32ChanType         = SOCP_REAL_CHAN_TYPE(u32DestChanID);
    pBuffer->u32Size    = 0;
    pBuffer->u32RbSize  = 0;

    if (SOCP_DECODER_DEST_CHAN == u32ChanType) /* ����ͨ�� */
    {
        g_stSocpDebugInfo.sSocpDebugDecDst.u32SocpGetReadBufDecDstEtrCnt[u32ChanID]++;

        /* ����ͨ��id */
        SOCP_CHECK_CHAN_ID(u32ChanID, SOCP_MAX_DECDST_CHN);
        SOCP_CHECK_DECDST_SET(u32ChanID);

        /* ���ݶ�дָ���ȡbuffer */
        SOCP_REG_READ(SOCP_REG_DECDEST_BUFRPTR(u32ChanID), uPAddr);
        g_strSocpStat.sDecDstChan[u32ChanID].sDecDstBuf.u32Read = (VOS_UINT32)SOCP_PHY_VIRT(uPAddr);

        SOCP_REG_READ(SOCP_REG_DECDEST_BUFWPTR(u32ChanID), uPAddr);
        g_strSocpStat.sDecDstChan[u32ChanID].sDecDstBuf.u32Write= (VOS_UINT32)SOCP_PHY_VIRT(uPAddr);

        SocpGetDataBuffer(&g_strSocpStat.sDecDstChan[u32ChanID].sDecDstBuf, pBuffer);

        SOCP_LOG_INFO("BSP_SOCP_GetReadBuff: Channel is", u32DestChanID, 0);

        g_stSocpDebugInfo.sSocpDebugDecDst.u32SocpGetReadBufDecDstSucCnt[u32ChanID]++;
    }
    else if (SOCP_CODER_DEST_CHAN == u32ChanType)
    {
        g_stSocpDebugInfo.sSocpDebugEncDst.u32SocpGetReadBufEncDstEtrCnt[u32ChanID]++;

        /* ����ͨ��id */
        SOCP_CHECK_CHAN_ID(u32ChanID, SOCP_MAX_ENCDST_CHN);
        SOCP_CHECK_ENCDST_SET(u32ChanID);

        /* ���ݶ�дָ���ȡbuffer */
        SOCP_REG_READ(SOCP_REG_ENCDEST_BUFRPTR(u32ChanID), uPAddr);
        g_strSocpStat.sEncDstChan[u32ChanID].sEncDstBuf.u32Read = (VOS_UINT32)SOCP_PHY_VIRT(uPAddr);

        SOCP_REG_READ(SOCP_REG_ENCDEST_BUFWPTR(u32ChanID), uPAddr);
        g_strSocpStat.sEncDstChan[u32ChanID].sEncDstBuf.u32Write= (VOS_UINT32)SOCP_PHY_VIRT(uPAddr);

        SocpGetDataBuffer(&g_strSocpStat.sEncDstChan[u32ChanID].sEncDstBuf, pBuffer);

        SOCP_LOG_INFO("BSP_SOCP_GetReadBuff: Channel is", u32DestChanID, (pBuffer->u32RbSize+pBuffer->u32Size));

        g_stSocpDebugInfo.sSocpDebugEncDst.u32SocpGetReadBufEncDstSucCnt[u32ChanID]++;
    }
    else
    {
        SOCP_LOG_ERR("BSP_SOCP_GetReadBuff: invalid Channel type", u32DestChanID, u32ChanType);
        return BSP_ERR_SOCP_INVALID_CHAN;
    }

    return VOS_OK;
}

/*****************************************************************************
* �� �� ��  : BSP_SOCP_ReadDataDone
*
* ��������  : ��������ɺ���
*
* �������  : u32DestChanID    Ŀ��ͨ��ID
*             u32ReadSize      ��ȡ���ݴ�С
* �������  : ��
*
* �� �� ֵ  : �����ݳɹ����ı�ʶ��
*****************************************************************************/

VOS_UINT32 BSP_SOCP_ReadDataDone(VOS_UINT32 u32DestChanID, VOS_UINT32 u32ReadSize)
{
    VOS_UINT32                      u32ChanID;
    VOS_UINT32                      u32ChanType;
    VOS_ULONG                       ulLockLevel;
    SOCP_BUFFER_RW_STRU             stRwBuff;
    VOS_UINT32                      uPAddr;

    /* �ж��Ƿ��Ѿ���ʼ�� */
    SOCP_CHECK_INIT();

    SOCP_LOG_INFO("BSP_SOCP_ReadDataDone: Channel ID and len is", u32DestChanID, u32ReadSize);

    /* ���ʵ��ͨ��id */
    u32ChanID   = SOCP_REAL_CHAN_ID(u32DestChanID);
    u32ChanType = SOCP_REAL_CHAN_TYPE(u32DestChanID);

    if (SOCP_DECODER_DEST_CHAN == u32ChanType) /* ����ͨ�� */
    {
        SOCP_DECDST_CHAN_STRU *pChan;

        g_stSocpDebugInfo.sSocpDebugDecDst.u32SocpReadDoneDecDstEtrCnt[u32ChanID]++;

        /* ����ͨ��id */
        SOCP_CHECK_CHAN_ID(u32ChanID, SOCP_MAX_DECDST_CHN);
        SOCP_CHECK_DECDST_SET(u32ChanID);

        pChan = &g_strSocpStat.sDecDstChan[u32ChanID];

        SOCP_REG_READ(SOCP_REG_DECDEST_BUFWPTR(u32ChanID), uPAddr);
        pChan->sDecDstBuf.u32Write= (VOS_UINT32)SOCP_PHY_VIRT(uPAddr);

        SOCP_REG_READ(SOCP_REG_DECDEST_BUFRPTR(u32ChanID), uPAddr);
        pChan->sDecDstBuf.u32Read = (VOS_UINT32)SOCP_PHY_VIRT(uPAddr);

        SocpGetDataBuffer(&pChan->sDecDstBuf, &stRwBuff);

        if(stRwBuff.u32Size + stRwBuff.u32RbSize < u32ReadSize)
        {
            SOCP_LOG_ERR("BSP_SOCP_ReadDataDone: dec dst too large read size. write ptr is, read ptr is", pChan->sDecDstBuf.u32Write,
                      pChan->sDecDstBuf.u32Read);

            SOCP_LOG_ERR("BSP_SOCP_ReadDataDone: dec dst too large read size. u32Size is 0x%x, u32RbSize is 0x%x\n",
                      stRwBuff.u32Size, stRwBuff.u32RbSize);

            /*s32LockKey = (VOS_INT32)VOS_SplIMP();*/
            VOS_SpinLockIntLock(&g_stSocpSpinLock, ulLockLevel);

            /* added by yangzhi 2011.7.25 */
            SOCP_REG_SETBITS(SOCP_REG_DEC_CORE0MASK0, u32ChanID, 1, 0);

            /*�������ж�״̬��������ж�����*/
            SOCP_REG_SETBITS(SOCP_REG_DEC_RAWINT2,      u32ChanID, 1, 1);
            SOCP_REG_SETBITS(SOCP_REG_DEC_CORE0MASK2,   u32ChanID, 1, 0);

            /*VOS_Splx((VOS_INT32)s32LockKey);*/
            VOS_SpinUnlockIntUnlock(&g_stSocpSpinLock, ulLockLevel);

            g_stSocpDebugInfo.sSocpDebugDecDst.u32SocpReadDoneDecDstFailCnt[u32ChanID]++;

            return BSP_ERR_SOCP_INVALID_PARA;
        }

        /* ���ö�дָ�� */
        SocpReadDone(&pChan->sDecDstBuf, u32ReadSize);

        /* д��дָ�뵽дָ��Ĵ���*/
        uPAddr = SOCP_VIRT_PHY(pChan->sDecDstBuf.u32Read);
        SOCP_REG_WRITE(SOCP_REG_DECDEST_BUFRPTR(u32ChanID), uPAddr);

        /*s32LockKey = (VOS_INT32)VOS_SplIMP(); */        /*���ж�*/
        VOS_SpinLockIntLock(&g_stSocpSpinLock, ulLockLevel);

        /* added by yangzhi 2011.7.25 */
        SOCP_REG_SETBITS(SOCP_REG_DEC_CORE0MASK0, u32ChanID, 1, 0);

        /*�������ж�״̬��������ж�����*/
        SOCP_REG_SETBITS(SOCP_REG_DEC_RAWINT2,      u32ChanID, 1, 1);
        SOCP_REG_SETBITS(SOCP_REG_DEC_CORE0MASK2,   u32ChanID, 1, 0);

        /*VOS_Splx((VOS_INT32)s32LockKey);*/
        VOS_SpinUnlockIntUnlock(&g_stSocpSpinLock, ulLockLevel);

        g_stSocpDebugInfo.sSocpDebugDecDst.u32SocpReadDoneDecDstSucCnt[u32ChanID]++;
    }
    else if (SOCP_CODER_DEST_CHAN == u32ChanType)/* ����ͨ�� */
    {
        SOCP_ENCDST_CHAN_STRU *pChan;

        g_stSocpDebugInfo.sSocpDebugEncDst.u32SocpReadDoneEncDstEtrCnt[u32ChanID]++;

        /* ����ͨ��id */
        SOCP_CHECK_CHAN_ID(u32ChanID, SOCP_MAX_ENCDST_CHN);
        SOCP_CHECK_ENCDST_SET(u32ChanID);

        g_stSocpDebugInfo.sSocpDebugEncDst.u32SocpReadDoneValidEncDstCnt[u32ChanID]++;

        pChan = &g_strSocpStat.sEncDstChan[u32ChanID];

        SOCP_REG_READ(SOCP_REG_ENCDEST_BUFWPTR(u32ChanID), uPAddr);
        pChan->sEncDstBuf.u32Write= SOCP_PHY_VIRT(uPAddr);

        SOCP_REG_READ(SOCP_REG_ENCDEST_BUFRPTR(u32ChanID), uPAddr);
        pChan->sEncDstBuf.u32Read = SOCP_PHY_VIRT(uPAddr);

        SocpGetDataBuffer(&pChan->sEncDstBuf, &stRwBuff);

        if (stRwBuff.u32Size + stRwBuff.u32RbSize < u32ReadSize)
        {
            SOCP_LOG_ERR("BSP_SOCP_ReadDataDone: enc dst too large read size. write ptr is, read ptr is",
                            pChan->sEncDstBuf.u32Write, pChan->sEncDstBuf.u32Read);

            SOCP_LOG_ERR("BSP_SOCP_ReadDataDone: enc dst too large read size. u32Size is, u32RbSize is",
                            stRwBuff.u32Size, stRwBuff.u32RbSize);

            /*s32LockKey = (VOS_INT32)VOS_SplIMP();*/
            VOS_SpinLockIntLock(&g_stSocpSpinLock, ulLockLevel);

            SOCP_REG_SETBITS(SOCP_REG_ENC_MASK0, u32ChanID, 1, 0);

            /*�����ֵ�����жϣ�����ֵ�����жϣ�����жϿ����ٴ��ϱ�*/
            SOCP_REG_SETBITS(SOCP_REG_ENC_RAWINT2, u32ChanID+SOCP_ENC_DST_BUFF_THRESHOLD_OVF_BEGIN, 1, 1);
            SOCP_REG_SETBITS(SOCP_REG_ENC_MASK2, u32ChanID+SOCP_ENC_DST_BUFF_THRESHOLD_OVF_BEGIN, 1, 0);

            g_stSocpDebugInfo.sSocpDebugEncDst.u32SocpReadDoneEncDstFailCnt[u32ChanID]++;

            /*VOS_Splx((VOS_INT32)s32LockKey);*/
            VOS_SpinUnlockIntUnlock(&g_stSocpSpinLock, ulLockLevel);

            return BSP_ERR_SOCP_INVALID_PARA;
        }

        /* ���ö�дָ�� */
        SocpReadDone(&pChan->sEncDstBuf, u32ReadSize);

        /* д��дָ�뵽дָ��Ĵ���*/
        uPAddr = SOCP_VIRT_PHY(pChan->sEncDstBuf.u32Read);
        SOCP_REG_WRITE(SOCP_REG_ENCDEST_BUFRPTR(u32ChanID), uPAddr);

        /*s32LockKey = (VOS_INT32)VOS_SplIMP();*/
        VOS_SpinLockIntLock(&g_stSocpSpinLock, ulLockLevel);

        SOCP_REG_SETBITS(SOCP_REG_ENC_MASK0, u32ChanID, 1, 0);

        /*�����ֵ�����жϣ�����ֵ�����жϣ�����жϿ����ٴ��ϱ�*/
        SOCP_REG_SETBITS(SOCP_REG_ENC_RAWINT2, u32ChanID+SOCP_ENC_DST_BUFF_THRESHOLD_OVF_BEGIN, 1, 1);
        SOCP_REG_SETBITS(SOCP_REG_ENC_MASK2, u32ChanID+SOCP_ENC_DST_BUFF_THRESHOLD_OVF_BEGIN, 1, 0);

        /*VOS_Splx((VOS_INT32)s32LockKey);*/
        VOS_SpinUnlockIntUnlock(&g_stSocpSpinLock, ulLockLevel);

        g_stSocpDebugInfo.sSocpDebugEncDst.u32SocpReadDoneEncDstSucCnt[u32ChanID]++;
    }
    else
    {
        SOCP_LOG_ERR("BSP_SOCP_ReadDataDone: invalid Channel type", u32DestChanID, u32ChanType);
        return BSP_ERR_SOCP_INVALID_CHAN;
    }

    VOS_FlushCpuWriteBuf();

    return VOS_OK;
}

/*****************************************************************************
* �� �� ��   : BSP_SOCP_GetSrcChannelReg
*
* ��������  : ��ȡָ������Դͨ���ļĴ���
* �������  : ��
*
* �������  : ��
*
* �� �� ֵ   : ��
*****************************************************************************/
VOS_VOID BSP_SOCP_GetEncSrcReg(VOS_UINT32 *pulData, VOS_UINT32 ulDataMax)
{
    VOS_UINT32      i;

    /* ��ȡ 0 �� 7�ܹ�8��ͨ�������üĴ�����ÿ��ͨ����9��32bit �Ĵ������ܹ� 288 ��byte */
    if ( ulDataMax < 72 )/* ���ȵĵ�λ��4byte���������� */
    {
        return;
    }

    for(i=0; i<8; i++)
    {
        VOS_MemCpy((pulData+(i*9)), (VOS_VOID*)(g_strSocpStat.uBaseAddr+SOCP_REG_ENCSRC_BUFWPTR(i)), 9*sizeof(VOS_UINT32));
    }

    return;
}

#endif /*end of SOCP_ACORE*/

/*****************************************************************************
* �� �� ��  : SocpInitGobal
*
* ��������  : ģ���ʼ������,��ʼ��ȫ�ֱ���
*
* �������  : ��
*
* �������  : ��
*
* �� �� ֵ  : ��ʼ���ɹ��ı�ʶ��
*****************************************************************************/
VOS_VOID SocpInitGobal(VOS_VOID)
{
#ifdef SOCP_ACORE
    VOS_UINT32 i;
#endif

    VOS_MemSet(&g_stSocpDebugInfo, 0x0 ,sizeof(SOCP_DEBUGINFO_STRU));

    VOS_MemSet(&g_strSocpStat, 0x0 ,sizeof(SOCP_GBLSTATE_STRU));

    VOS_MemSet(&g_stSocpLog, 0, sizeof(SOCP_LOG_INFO_STRU));

#ifdef SOCP_ACORE
    for(i=0; i<SOCP_MAX_ENCDST_CHN; i++)
    {
        g_strSocpStat.sEncDstChan[i].u32Thrh        = 0;
        g_strSocpStat.sEncDstChan[i].u32SetStat     = SOCP_CHN_UNSET;
    }

    for(i=0; i<SOCP_MAX_DECSRC_CHN; i++)
    {
        g_strSocpStat.sDecSrcChan[i].u32ChanID      = i;
        g_strSocpStat.sDecSrcChan[i].u32ChanEn      = SOCP_CHN_DISABLE;
        g_strSocpStat.sDecSrcChan[i].eDataTypeEn    = SOCP_DATA_TYPE_EN_BUTT;
        g_strSocpStat.sDecSrcChan[i].u32SetStat     = SOCP_CHN_UNSET;
    }

    for(i=0; i<SOCP_MAX_DECDST_CHN; i++)
    {
        g_strSocpStat.sDecDstChan[i].u32ChanID      = i;
        g_strSocpStat.sDecDstChan[i].u32SetStat     = SOCP_CHN_UNSET;
        g_strSocpStat.sDecDstChan[i].eDataType      = SOCP_DATA_TYPE_BUTT;
    }
#endif

    return;
}

#ifdef SOCP_ACORE
/*****************************************************************************
* �� �� ��  : SocpAcpuCreateTask
*
* ��������  : ���񴴽�����
* �������  : ��
*
* �������  : ��
*
* �� �� ֵ  : �����ɹ����ı�ʶ��
*****************************************************************************/

VOS_INT32 SocpAcpuCreateTask(VOS_VOID)
{
    VOS_UINT32      aulOmCnfArguments[4] = {SOCP_CODER_DST_OM_CNF,0,0,0};
    VOS_UINT32      aulOmIndArguments[4] = {SOCP_CODER_DST_OM_IND,0,0,0};
    VOS_UINT32      ulTaskID;
    VOS_UINT32      ulChannelId;

#if 0
    /* ����Դͨ��������ź���*/
    if(VOS_OK != VOS_SmBCreate("SCP1", 0, VOS_SEMA4_FIFO, &g_strSocpStat.u32EncSrcSemID))
    {
        SOCP_LOG_ERR("SocpAcpuCreateTask: create u32EncSrcSemID failed", 0, 0);

        return BSP_ERR_SOCP_SEM_CREATE;
    }

    /* ����Դͨ������Ĵ��� "EncSrc"*/
    if( VOS_OK != VOS_CreateTask( "EncSrc",
                                    &ulTaskID,
                                    (VOS_TASK_ENTRY_TYPE)SocpEncSrcTask,
                                    SOCP_ENCSRC_SELFTASK_PRIO,
                                    SOCP_ENCSRC_TASK_STACK_SIZE,
                                    aulArguments) )
    {
        SOCP_LOG_ERR("SocpAcpuCreateTask: create SocpEncSrcTask failed", 0, 0);

        return BSP_ERR_SOCP_TSK_CREATE;
    }
#endif

    /* ����Ŀ��ͨ��SOCP_CODER_DST_OM_CNF������ź���*/
    ulChannelId = SOCP_CODER_DST_OM_CNF;
    if(VOS_OK != VOS_SmCCreate("CH0SCP", 0, VOS_SEMA4_FIFO, &g_strSocpStat.u32EncDstSemIDChannel[SOCP_REAL_CHAN_ID(ulChannelId)]))
    {
        SOCP_LOG_ERR("SocpAcpuCreateTask: create CH0SCP sem failed", 0, 0);

        return BSP_ERR_SOCP_SEM_CREATE;
    }

    /* ����Ŀ��ͨ��SOCP_CODER_DST_OM_CNF���񴴽� "EncDstCh0"*/
    if( VOS_OK != VOS_CreateTask(  "EncDstCh0",
                                    &ulTaskID,
                                    (VOS_TASK_ENTRY_TYPE)SocpEncDstTaskChannel,
                                    SOCP_ENCDST_SELFTASK_PRIO,
                                    SOCP_ENCDST_TASK_STACK_SIZE,
                                    aulOmCnfArguments) )
    {
        SOCP_LOG_ERR("SocpAcpuCreateTask: create SocpEncDstTaskChannel(cnf) failed",0,0);

        return BSP_ERR_SOCP_TSK_CREATE;
    }

    /* ����Ŀ��ͨ��SOCP_CODER_DST_OM_IND������ź���*/
    ulChannelId = SOCP_CODER_DST_OM_IND;
    if(VOS_OK != VOS_SmCCreate("CH1SCP", 0, VOS_SEMA4_FIFO, &g_strSocpStat.u32EncDstSemIDChannel[SOCP_REAL_CHAN_ID(ulChannelId)]))
    {
        SOCP_LOG_ERR("SocpAcpuCreateTask: create CH1SCP failed", 0, 0);

        return BSP_ERR_SOCP_SEM_CREATE;
    }

    /* ����Ŀ��ͨ��SOCP_CODER_DST_OM_IND���񴴽� "EncDstCh1"*/
    if( VOS_OK != VOS_CreateTask(  "EncDstCh1",
                                    &ulTaskID,
                                    (VOS_TASK_ENTRY_TYPE)SocpEncDstTaskChannel,
                                    SOCP_ENCDST_SELFTASK_PRIO,
                                    SOCP_ENCDST_TASK_STACK_SIZE,
                                    aulOmIndArguments) )
    {
        SOCP_LOG_ERR("SocpAcpuCreateTask: create SocpEncDstTaskChannel(ind) failed",0,0);

        return BSP_ERR_SOCP_TSK_CREATE;
    }

#if 0   /* �ȴ������ṩ�ӿ� */
    /* ע��������쳣��λ��ʱ�򱣴�EncDstջ��Ϣ */
    DRV_EXCH_TASK_INFO_ADD((int)ulTaskID);
#endif

#if 0
    /* ����Դͨ�������ź���*/
    if(VOS_OK != VOS_SmBCreate("SCP3", 0, VOS_SEMA4_FIFO, &g_strSocpStat.u32DecSrcSemID))
    {
        SOCP_LOG_ERR("SocpAcpuCreateTask: create u32DecSrcSemID failed", 0, 0);

        return BSP_ERR_SOCP_SEM_CREATE;
    }

    /* ����Դͨ�����񴴽� "DecSrc"*/
    if ( VOS_OK != VOS_CreateTask( "DecSrc",
                                    &ulTaskID,
                                    (VOS_TASK_ENTRY_TYPE)SocpDecSrcTask,
                                    SOCP_DECSRC_SELFTASK_PRIO,
                                    SOCP_DECSRC_TASK_STACK_SIZE,
                                    aulArguments) )
    {
        SOCP_LOG_ERR("SocpAcpuCreateTask: create u32DecSrcTskID failed", 0, 0);

        return BSP_ERR_SOCP_TSK_CREATE;
    }

    /* ����Ŀ��ͨ�������ź���*/
    if(VOS_OK != VOS_SmBCreate("SCP4", 0, VOS_SEMA4_FIFO, &g_strSocpStat.u32DecDstSemID))
    {
        SOCP_LOG_ERR("SocpAcpuCreateTask: create u32DecDstSemID failed", 0, 0);

        return BSP_ERR_SOCP_SEM_CREATE;
    }

    /* ����Ŀ��ͨ������Ĵ��� "DecDst"*/
    if ( VOS_OK != VOS_CreateTask( "DecDst",
                                    &ulTaskID,
                                    (VOS_TASK_ENTRY_TYPE)SocpDecDstTask,
                                    SOCP_DECDST_SELFTASK_PRIO,
                                    SOCP_DECDST_TASK_STACK_SIZE,
                                    aulArguments) )
    {
        SOCP_LOG_ERR("SocpAcpuCreateTask: create u32DecDstTskID failed", 0, 0);

        return BSP_ERR_SOCP_TSK_CREATE;
    }
#endif

#if 0   /* �ȴ������ṩ�ӿ� */
    /* ע��������쳣��λ��ʱ�򱣴�DecDstջ��Ϣ */
    DRV_EXCH_TASK_INFO_ADD((int)ulTaskID);
#endif

    return VOS_OK;
}

/*****************************************************************************
* �� �� ��  : SocpCoreInit
*
* ��������  : ģ���ʼ������, �����ʼ��оƬ
*
* �������  : ��
*
* �������  : ��
*
* �� �� ֵ  : ��ʼ���ɹ��ı�ʶ��
*****************************************************************************/

VOS_VOID SocpCoreInit(VOS_VOID)
{
    VOS_UINT32 i;
    VOS_UINT32 u32ResetValue = 0;

    /* ��ȫ�ּĴ������и�λ */
    SOCP_REG_WRITE(SOCP_REG_GBLRST, 1);

    /* �ȴ�ͨ����λ״̬���� */
    for (i = 0; i < SOCP_RESET_TIME; i++)
    {
        SOCP_REG_READ(SOCP_REG_GBLRST, u32ResetValue);
        if (0 == u32ResetValue)
        {
            break;
        }
    }

    if (SOCP_RESET_TIME == i)
    {
        SOCP_LOG_WARNING("SocpCoreInit: reset global regs failed!", 0, 0);
    }

    /* ����SOCPȫ����λ���ƼĴ���GLOBAL_CTRL:bit[1]Ϊ1������ͨ������INT_TIMEOUT(0x024)����ʹ�õļĴ���
       λ��Ϊ32bit������ͨ������DEC_INT_TIMEOUT(0x20) */
    SOCP_REG_SETBITS(SOCP_REG_GBLRST, 1, 1, 0x1);           /* ����Bit1 */

    /* ����ram�мĴ����ĸ�λ����*/
    for (i = 0; i < SOCP_REAL_CHAN_ID(SOCP_CODER_SRC_BUTT); i++)
    {
        SOCP_REG_WRITE(SOCP_REG_ENCSRC_BUFADDR(i), 0);
        SOCP_REG_WRITE(SOCP_REG_ENCSRC_BUFCFG0(i), 0);
        SOCP_REG_WRITE(SOCP_REG_ENCSRC_RDQWPTR(i), 0);
        SOCP_REG_WRITE(SOCP_REG_ENCSRC_RDQRPTR(i), 0);
        SOCP_REG_WRITE(SOCP_REG_ENCSRC_RDQADDR(i), 0);
        SOCP_REG_WRITE(SOCP_REG_ENCSRC_RDQCFG(i),  0);
    }

    for (i = 0; i < SOCP_REAL_CHAN_ID(SOCP_CODER_DST_BUTT); i++)
    {
        SOCP_REG_WRITE(SOCP_REG_ENCDEST_BUFADDR(i), 0);
    }

    return;
}

/*lint -save -e102 -e10 -e2 -e40 -e533 -e31 -e830 -e522 -e718 -e746 -e702 -e565   -e64 -e23 -e63 -e26 -e578 -e132*/
extern unsigned long simple_strtoul(const char *cp, char **endp, unsigned int base);

/*****************************************************************************
* �� �� ��  : SocpLogBufferSizeParse
*
* ��������  : �ڴ������׶ν�CMD LINE�е�BUFFER��С������������
*
* �������  : ��
*
* �������  : ��
*
* �� �� ֵ  : ��
*****************************************************************************/
VOS_VOID SocpLogBufferSizeParse(VOS_CHAR *pucChar)
{
    VOS_UINT32      ulBufferSize;

    /* Buffer�Ĵ�С��ByteΪ��λ��ԭ���ϲ�����200M����С��1M */
    ulBufferSize = (VOS_UINT32)simple_strtoul(pucChar, VOS_NULL, VOS_NULL);

    if ((ulBufferSize > (50 *1024 *1024))
      || (ulBufferSize < (1 *1024 *1024)))
    {
        return;
    }

    /* Ϊ�˱���ulBufferSize�ĳ���8�ֽڶ���,������Ȳ���8�ֽڶ����ַҲ���� */
    if (VOS_NULL != (ulBufferSize % 8))
    {
        return;
    }

    g_stEncDstBufLogConfig.BufferSize = ulBufferSize;
    g_stEncDstBufLogConfig.logOnFlag  = SOCP_ENC_DEST_LOG_DELAY_ON;

    return;
}

#if (!defined(DMT)) && (VOS_WIN32 != VOS_OS_VER)
early_param("mdmlogsize", SocpLogBufferSizeParse);
#endif

/*****************************************************************************
* �� �� ��  : SocpLogTimeoutParse
*
* ��������  : �ڴ������׶ν�CMD LINE�е�TIMEOUT��С������������
*
* �������  : ��
*
* �������  : ��
*
* �� �� ֵ  : ��
*****************************************************************************/
VOS_VOID SocpLogTimeoutParse(VOS_CHAR *pucChar)
{
    VOS_UINT32      ulTimeout;

    /* �����ַ�������Ϊ��λ����Ҫ��ת���ɺ��룬����Ϊ1�룬������20���� */
    ulTimeout = (VOS_UINT32)simple_strtoul(pucChar, VOS_NULL, VOS_NULL);

    if (1200 < ulTimeout)
    {
        ulTimeout = 1200;
    }

    ulTimeout *= 1000;

    g_stEncDstBufLogConfig.overTime = ulTimeout;
    g_stEncDstBufLogConfig.ulCurTimeout = ulTimeout;

    return;
}

#if (!defined(DMT)) && (VOS_WIN32 != VOS_OS_VER)
early_param("mdmlogtime", SocpLogTimeoutParse);
#endif

/*****************************************************************************
* �� �� ��  : SocpLogBaseAddrParse
*
* ��������  : �ڴ������׶ν�CMD LINE�еĻ���ַ������������
*
* �������  : ��
*
* �������  : ��
*
* �� �� ֵ  : ��
*****************************************************************************/
VOS_VOID SocpLogBaseAddrParse(VOS_CHAR *pucChar)
{
    VOS_UINT32      ulBaseAddr;

    ulBaseAddr = (VOS_UINT32)simple_strtoul(pucChar, VOS_NULL, VOS_NULL);

    /* �����ַ��32λ��ʵ��ַ������8�ֽڶ���� */
    if ((VOS_NULL != (ulBaseAddr % 8))
        || (VOS_NULL == ulBaseAddr))
    {
        g_stEncDstBufLogConfig.logOnFlag = VOS_FALSE;

        return;
    }

    g_stEncDstBufLogConfig.ulPhyBufferAddr = ulBaseAddr;

    return;
}

#if (!defined(DMT)) && (VOS_WIN32 != VOS_OS_VER)
early_param("mdmlogbase", SocpLogBaseAddrParse);
#endif

/*****************************************************************************
* �� �� ��  : SocpLogCfgShow
*
* ��������  : ��ӡ��ʱд���������Ϣ
*
* �������  : ��
*
* �������  : ��
*
* �� �� ֵ  : ��
*****************************************************************************/
VOS_VOID SocpLogCfgShow(VOS_VOID)
{
    vos_printf("\r\n SocpLogCfgShow: overTime %d", g_stEncDstBufLogConfig.overTime);
    vos_printf("\r\n SocpLogCfgShow: Current Time Out%d", g_stEncDstBufLogConfig.ulCurTimeout);
    vos_printf("\r\n SocpLogCfgShow: BufferSize %d", g_stEncDstBufLogConfig.BufferSize);
    vos_printf("\r\n SocpLogCfgShow: logOnFlag %d", g_stEncDstBufLogConfig.logOnFlag);
    vos_printf("\r\n SocpLogCfgShow: PhyBufferAddr 0x%X", g_stEncDstBufLogConfig.ulPhyBufferAddr);

    return;
}


/*****************************************************************************
 �� �� ��  : SCM_MemRemap
 ��������  : ����LOG�ӳ�д��ʱ�����ݴ�SOCPͨ���Ļ����з��͵�VCOM�˿ڰ�ʵ��ַת�������ַ
             ����ʵ�֣�������ֲ��COMM
 �������  : phys_addr:��ҪREMAP�������ַ
             size:     ��ҪREMAP�����ݴ�С
 �������  : ��
 �� �� ֵ  : REMAP��������ַ

 �޸���ʷ      :
  1.��    ��   : 2014��8��11��
    ��    ��   : h59254
    �޸�����   : V8R1 LOG�ӳ�д������
*****************************************************************************/
VOS_VOID *SocpMemRemap(unsigned long phys_addr, size_t size)
{
#if (!defined(DMT)) && (VOS_WIN32 != VOS_OS_VER)
    int i;
    u8* vaddr;
    int npages = PAGE_ALIGN((phys_addr & (PAGE_SIZE - 1)) + size) >> PAGE_SHIFT;
    unsigned long offset = phys_addr & (PAGE_SIZE - 1);
    struct page **pages;

    pages = vmalloc(sizeof(struct page *) * npages);
    if (!pages)
    {
        return VOS_NULL_PTR;
    }

    pages[0] = phys_to_page(phys_addr);

    for (i = 0; i < npages - 1 ; i++)
    {
        pages[i + 1] = pages[i] + 1;
    }

    vaddr = (u8*)vmap(pages, npages, VM_MAP, pgprot_dmacoherent(PAGE_KERNEL));

    if ( VOS_NULL_PTR != vaddr )

    {
        vaddr += offset;
    }

    vfree(pages);

    return (void *)vaddr;
#else
    return (void *)phys_addr;
#endif
}

/*****************************************************************************
* �� �� ��  : SocpLogBufferInit
*
* ��������  : �ڴ����ʼ���׶ν�LOG�ӳ����ʹ�õ��ڴ��������
*
* �������  : ��
*
* �������  : ��
*
* �� �� ֵ  : ��
*****************************************************************************/
VOS_VOID SocpLogBufferInit(VOS_VOID)
{
    if (SOCP_ENC_DEST_LOG_DELAY_ON != g_stEncDstBufLogConfig.logOnFlag)
    {
        return;
    }

    if (VOS_NULL == g_stEncDstBufLogConfig.ulPhyBufferAddr)
    {
        g_stEncDstBufLogConfig.logOnFlag = VOS_FALSE;

        return;
    }

    g_stEncDstBufLogConfig.pVirBuffer = SocpMemRemap((VOS_ULONG)g_stEncDstBufLogConfig.ulPhyBufferAddr,
                                                     g_stEncDstBufLogConfig.BufferSize);


    if (VOS_NULL_PTR == g_stEncDstBufLogConfig.pVirBuffer)
    {
        g_stEncDstBufLogConfig.logOnFlag = VOS_FALSE;
    }

    return;
}

#if (!defined(DMT)) && (VOS_WIN32 != VOS_OS_VER)
arch_initcall(SocpLogBufferInit);
#endif
/*lint -restore */

/*****************************************************************************
* �� �� ��  : SocpAcpuInit
*
* ��������  : ģ���ʼ������,��ʼ��Acpu�������Դ
*
* �������  : ��
*
* �������  : ��
*
* �� �� ֵ  : ��ʼ���ɹ��ı�ʶ��
*****************************************************************************/
VOS_INT32 SocpAcpuInit(VOS_VOID)
{
    VOS_UINT_PTR                        uBaseAddr;
    VOS_INT32                           s32IntLevel;
    VOS_INT32                           s32Result;
    SOCP_ENC_DST_BUF_LOG_CFG_STRU       *pstcfg;

    vos_printf("\r\n ---------------ACPU zzz SocpInit--------------------\r\n");

    pstcfg = SocpGetSDLogCfg();

    uBaseAddr = (VOS_UINT_PTR)mdrv_misc_get_ip_baseaddr(BSP_IP_TYPE_SOCP);

#if(VOS_OS_VER == VOS_LINUX)
    g_strSocpStat.uBaseAddr = (VOS_UINT_PTR)ioremap(uBaseAddr, SOCP_REGISTER_SIZE);

    if(0 == g_strSocpStat.uBaseAddr)
    {
        SOCP_LOG_ERR("SocpAcpuInit: Socp Reg Base Addr ioremap Error", 0, 0);
        return MDRV_ERROR;
    }
#else
    g_strSocpStat.uBaseAddr = uBaseAddr;
#endif

    SocpCoreInit(); /*A�˳�ʼ��оƬ*/

    /* APP CPUʱ����Ҫ���ε��ж� */
    SOCP_REG_SETBITS(SOCP_REG_ENC_MASK0, 0, 7, 0x7f);           /* ����Bit0~6 */
    SOCP_REG_WRITE(SOCP_REG_APP_MASK1, VOS_NULL_DWORD);
    SOCP_REG_SETBITS(SOCP_REG_ENC_MASK2, 0, 7, 0x7f);           /* ����Bit0~6 */
    SOCP_REG_WRITE(SOCP_REG_APP_MASK3, VOS_NULL_DWORD);
    SOCP_REG_SETBITS(SOCP_REG_DEC_CORE0MASK0, 0, 16, VOS_NULL_WORD);    /* ����Bit0~15 */
    SOCP_REG_SETBITS(SOCP_REG_DEC_MASK1, 4, 24, 0xffffff);              /* ����Bit4~27 */
    SOCP_REG_SETBITS(SOCP_REG_DEC_CORE0MASK2, 0, 16, VOS_NULL_WORD);    /* ����Bit0~15 */

    /* ���������ж� */
    SOCP_REG_SETBITS(SOCP_REG_ENC_MASK2, 16, 7, 0x7f);      /* ����Bit16~22 */

    /* ����Ŀ��ͨ����ʱ�����ݲ���Ҫ��������Ŀ�ĳ�ʱ�Ĵ���DEC_INT_TIMEOUT:bit[0~31]��Ϊȫ0 */
    SOCP_REG_WRITE(SOCP_REG_DECINTTIMEOUT, 0);

    if (SOCP_ENC_DEST_LOG_DELAY_ON == pstcfg->logOnFlag)
    {
        /* ����ΪNV��en_NV_ID_SOCP_SDLOG_CFG�����õ��ӳ�ʱ�� */
        SOCP_REG_WRITE(SOCP_REG_INTTIMEOUT, SOCP_MsConvertToCycle(pstcfg->overTime));
    }
    else
    {
        SOCP_REG_WRITE(SOCP_REG_INTTIMEOUT, SOCP_TRANS_TIMEOUT_DEFAULT);    /* ��ʱ�����жϳ�ʱ���� */
    }

    SOCP_REG_SETBITS(SOCP_REG_BUFTIMEOUT, 31, 1, 0);                    /* ԴĿ��buffer�����ʱ�ж϶���ʹ�� */
    SOCP_REG_SETBITS(SOCP_REG_BUFTIMEOUT, 0, 16, SOCP_OVERFLOW_TIMEOUT_DEFAULT); /* ԴĿ��buffer�����ʱ���� */

#if 0
    /* ���ý���ͨ·���������üĴ���*/
    SOCP_REG_SETBITS(SOCP_REG_DEC_PKTLEN, 0, 12, SOCP_DEC_PKTLGTH_MAX); /* �����������ݰ���С����KBΪ��λ��Ĭ��Ϊ2KB */
    SOCP_REG_SETBITS(SOCP_REG_DEC_PKTLEN, 12, 5, SOCP_DEC_PKTLGTH_MIN); /* �������С���ݰ���С���ֽ�Ϊ��λ */
#endif

     /* �����Զ�ʱ���ſ� */
    SOCP_REG_WRITE(SOCP_REG_CLKCTRL, VOS_NULL_DWORD); /* RAM�Զ��ſؿ��� */

    s32IntLevel = mdrv_int_get_num(BSP_INT_TYPE_SOCP_A);

    if (MDRV_ERROR == s32IntLevel)
    {
        SOCP_LOG_ERR("SocpAcpuInit: Query app core int failed", 0, 0);
        return MDRV_ERROR;
    }

    /* ���ж� */
    if (VOS_OK != mdrv_int_connect(s32IntLevel, (VOIDFUNCPTR)SocpAppInthandler, 0))
    {
        SOCP_LOG_ERR("SocpAcpuInit: connect app core int failed", 0, 0);
        return MDRV_ERROR;
    }

    if (VOS_OK != mdrv_int_enable(s32IntLevel))
    {
        SOCP_LOG_ERR("SocpAcpuInit: enable int failed", 0, 0);
        return MDRV_ERROR;
    }

    s32Result = SocpAcpuCreateTask();

    if (VOS_OK != s32Result)
    {
        SOCP_LOG_ERR("SocpAcpuInit: create task failed", (VOS_UINT32)s32Result, 0);

        return MDRV_ERROR;
    }

    vos_printf("\r\n ---------------ACPU SocpInit end--------------------\r\n");

    return VOS_OK;
}
#endif

#ifdef SOCP_CCORE
/*****************************************************************************
* �� �� ��  : SocpCcpuInit
*
* ��������  : ģ���ʼ������,��ʼ��Ccpu�������Դ
*
* �������  : ��
*
* �������  : ��
*
* �� �� ֵ  : ��ʼ���ɹ��ı�ʶ��
*****************************************************************************/
VOS_INT32 SocpCcpuInit(VOS_VOID)
{
    VOS_INT32     s32IntLevel;

#if 0 /* log2.0������ע�� */
    NV_SOCP_LOG_CFG_STRU nvCfg = {0};
    SOCP_ENC_DST_BUF_LOG_CFG_STRU * logCfg;

    logCfg = BSP_SOCP_GetLogCfg();
#endif

    vos_printf("\r\n ---------------CCPU zzz SocpInit--------------------\r\n");

    g_strSocpStat.uBaseAddr = (VOS_UINT_PTR)mdrv_misc_get_ip_baseaddr(BSP_IP_TYPE_SOCP);

    if(VOS_NULL == g_strSocpStat.uBaseAddr)
    {
        SOCP_LOG_ERR("SocpCcpuInit: Query SOCP base addr failed",0,0);
        return MDRV_ERROR;
    }

#if 0 /* log2.0������ע�� */
#if(FEATURE_LTE == FEATURE_ON)
    ret = NVM_Read(EN_NV_ID_SOCP_LOG_CFG, (VOID *)&nvCfg, sizeof(NV_SOCP_LOG_CFG_STRU));
    if(ret != VOS_OK)
    {
        printf("SocpInit READ NV FAIL\n\n\n\n");
        nvCfg.ulSocpDelayWriteFlg = FALSE;
        logCfg->logOnFlag = FALSE;
    }
#endif
#endif

    /* ���ô����жϳ�ʱʱ���buffer�����ʱʱ�� */
#if 0
    #if(FEATURE_LTE == FEATURE_ON)
    if( TRUE == nvCfg.ulSocpDelayWriteFlg )
    {
        SOCP_REG_WRITE(SOCP_REG_INTTIMEOUT, 0);
    }
    #endif
#endif

    /* Modem Cpuʱ����Ҫ�����ж� */
    SOCP_REG_WRITE(SOCP_REG_MODEM_MASK1, VOS_NULL_DWORD); /* ����ͨ·Դ���ݰ�ͷ�����ж����ο���λ MODEM-cpu���� */
    SOCP_REG_WRITE(SOCP_REG_MODEM_MASK3, VOS_NULL_DWORD); /* CORE1����ͨ·RD��������ж����ο���λ */
    SOCP_REG_SETBITS(SOCP_REG_DEC_CORE1MASK0, 0, 16, VOS_NULL_WORD);   /* core1 DATA-TYPE ����*/
    SOCP_REG_SETBITS(SOCP_REG_DEC_CORE1MASK2, 0, 16, VOS_NULL_WORD);   /* core1����DATA-TYPE */

    /* ���α��봫���ж� */
    SOCP_REG_WRITE(SOCP_REG_MODEM_ENC_MASK0, 0x7f);         /* core1����ͨ·�����ж����ο���λ */

    /* ���α���Ŀ��buffer�����ж� */
    SOCP_REG_SETBITS(SOCP_REG_MODEM_ENC_MASK2, 0, 7, 0x7f); /* core1����Ŀ��bufferʣ��ռ䲻��һ��dma����ʱ�����ж����ο��� */
    SOCP_REG_SETBITS(SOCP_REG_MODEM_ENC_MASK2, 16, 7,0x7f); /* core1����Ŀ��bufferʣ��ռ�С�����õ���ֵʱ�����ж����ο��� */

    /* ���ν���ͨ���쳣�ж� */
    SOCP_REG_WRITE(SOCP_REG_APP_DEC_MASK1, VOS_NULL_DWORD); /* core1����ͨ· */

    s32IntLevel = mdrv_int_get_num(BSP_INT_TYPE_SOCP_C);

    if(MDRV_ERROR == s32IntLevel)
    {
        SOCP_LOG_ERR("SocpCcpuInit: Query modem core int failed",0,0);
        return MDRV_ERROR;
    }

#if 0   /* �����˴��������ں�����չ */
    /* ��Ccpu Socp�ж� ����Ҫ���Բſ���ʹ��*/
    if(VOS_OK != DRV_VICINT_CONNECT((VOIDFUNCPTR *)s32IntLevel, (VOIDFUNCPTR)SocpModemInthandler, 0))
    {
        BSP_TRACE(BSP_LOG_LEVEL_ERROR, BSP_MODU_SOCP, "SocpCcpuInit: connect modem core int failed.\n",0,0,0,0,0,0);
        return MDRV_ERROR;
    }

    if (VOS_OK != mdrv_int_enable(s32IntLevel))
    {
        BSP_TRACE(BSP_LOG_LEVEL_ERROR, BSP_MODU_SOCP, "SocpCcpuInit: enable int failed.\n", 0, 0, 0, 0, 0, 0);
        return MDRV_ERROR;
    }

    if (VOS_OK != SocpCreateTask())
    {
        BSP_TRACE(BSP_LOG_LEVEL_ERROR, BSP_MODU_SOCP, "SocpAcpuCreateTask: create task failed(0x%x).\n", s32Result);

        return MDRV_ERROR;
    }
#endif

    vos_printf("\r\n ---------------CCPU SocpInit end--------------------\r\n");

    return VOS_OK;
}
#endif

/*****************************************************************************
* �� �� ��  : socpInit
*
* ��������  : ģ���ʼ������
*
* �������  : ��
*
* �������  : ��
*
* �� �� ֵ  : ��ʼ���ɹ��ı�ʶ��
*****************************************************************************/

/*lint -e529*/
VOS_INT32 SocpInit(VOS_VOID)
{
    VOS_INT32 s32Result;

    if(VOS_TRUE == g_strSocpStat.bInitFlag)
    {
        return VOS_OK;
    }

    DRV_EXCH_CUST_FUNC_REG((exchCBReg)SOCP_Log_Save);

    VOS_SpinLockInit(&g_stSocpSpinLock);

    SocpInitGobal();    /*��ʼ�� A��C ��ȫ�ֱ���*/

#ifdef SOCP_ACORE
    s32Result = SocpAcpuInit();
#endif

#ifdef SOCP_CCORE
    s32Result = SocpCcpuInit();
#endif

    if(VOS_OK != s32Result)
    {
        SOCP_LOG_ERR("SocpInit: Init Func failed", (VOS_UINT32)s32Result, 0);

        return s32Result;
    }

    /* ���ó�ʼ��״̬ */
    g_strSocpStat.bInitFlag = VOS_TRUE;

    return VOS_OK;
}
/*****************************************************************************
* �� �� ��  : BSP_SOCP_CoderSetSrcChan
*
* ��������  : ����Դͨ�����ú���
*
* �������  : pSrcAttr     ����Դͨ�����ò���
*             ulSrcChanID  ����Դͨ��ID
*
* �������  : ��
*
* �� �� ֵ  : ���뼰���óɹ����ı�ʶ��
*****************************************************************************/
VOS_UINT32 BSP_SOCP_CoderSetSrcChan(SOCP_CODER_SRC_ENUM_U32    enSrcChanID,
                                    SOCP_CODER_SRC_CHAN_S     *pSrcAttr)
{
    VOS_UINT32             start;
    VOS_ULONG              ulStartTmp;
    VOS_UINT32             end;
    VOS_ULONG              ulEndTmp;
    VOS_UINT32             rdstart         = 0;
    VOS_ULONG              ulRdStart       = 0;
    VOS_UINT32             rdend           = 0;
    VOS_ULONG              ulRdEnd         = 0;
    VOS_UINT32             buflength       = 0;
    VOS_UINT32             Rdbuflength     = 0;
    VOS_UINT32             srcChanId;
    VOS_UINT32             u32SrcChanType;
    VOS_UINT32             u32DstChanID;
    VOS_UINT32             u32DstChanType;
    VOS_UINT32             ResetFlag;
    VOS_UINT32             i;
    SOCP_ENCSRC_CHAN_STRU *pChan;
    VOS_UINT32             ulVersion;

    /* �ж��Ƿ��Ѿ���ʼ�� */
    SOCP_CHECK_INIT();

    /* �жϲ�����Ч�� */
    SOCP_CHECK_PARA(pSrcAttr);
    SOCP_CHECK_CHAN_PRIORITY(pSrcAttr->ePriority);
    SOCP_CHECK_DATA_TYPE(pSrcAttr->eDataType);
    SOCP_CHECK_DATA_TYPE_EN(pSrcAttr->eDataTypeEn);
    SOCP_CHECK_ENC_DEBUG_EN(pSrcAttr->eDebugEn);

    srcChanId       = SOCP_REAL_CHAN_ID(enSrcChanID);
    u32SrcChanType  = SOCP_REAL_CHAN_TYPE(enSrcChanID);

    SOCP_CHECK_CHAN_TYPE(u32SrcChanType, SOCP_CODER_SRC_CHAN);
    SOCP_CHECK_CHAN_ID(srcChanId, SOCP_MAX_ENCSRC_CHN);

    u32DstChanID   = SOCP_REAL_CHAN_ID(pSrcAttr->u32DestChanID);
    u32DstChanType = SOCP_REAL_CHAN_TYPE(pSrcAttr->u32DestChanID);

    SOCP_CHECK_CHAN_TYPE(u32DstChanType, SOCP_CODER_DEST_CHAN);
    SOCP_CHECK_CHAN_ID(u32DstChanID, SOCP_MAX_ENCDST_CHN);

    if ((SOCP_ENCSRC_CHNMODE_CTSPACKET != pSrcAttr->eMode)
        && (SOCP_ENCSRC_CHNMODE_LIST != pSrcAttr->eMode))
    {
        SOCP_LOG_ERR("CoderAllocSrcChan: chnnel mode is invalid ", pSrcAttr->eMode, 0);

        return BSP_ERR_SOCP_INVALID_PARA;
    }

    /* ʹ�����ò����������� */
    /* �ж���ʼ��ַ�Ƿ�8�ֽڶ��� */
    ulStartTmp = (VOS_ULONG)pSrcAttr->sCoderSetSrcBuf.pucInputStart;
    start      = (VOS_UINT32)(ulStartTmp & 0xFFFFFFFFUL);
    ulEndTmp   = (VOS_ULONG)pSrcAttr->sCoderSetSrcBuf.pucInputEnd;
    end        = (VOS_UINT32)(ulEndTmp & 0xFFFFFFFFUL);

    SOCP_CHECK_PARA(start);
    SOCP_CHECK_8BYTESALIGN(start);
    SOCP_CHECK_PARA(end);
    SOCP_CHECK_BUF_ADDR(start, end);

    buflength = end - start + 1;

    SOCP_CHECK_8BYTESALIGN(buflength);

    SOCP_REG_READ(SOCP_REG_VERSION, ulVersion);

    if (SOCP_OLD_VER == ulVersion)
    {
        if(buflength > SOCP_ENC_SRC_BUFLGTH_MAX)
        {
            SOCP_LOG_ERR("CoderAllocSrcChan: buffer length is too large", buflength, 0);

            return BSP_ERR_SOCP_INVALID_PARA;
        }
    }

    /* �����������������������RDbuffer����ʼ��ַ�ͳ��� */
    if(SOCP_ENCSRC_CHNMODE_LIST == pSrcAttr->eMode)
    {
        /* �ж�RDBuffer����ʼ��ַ�Ƿ�8�ֽڶ��� */
        ulRdStart = (VOS_ULONG)pSrcAttr->sCoderSetSrcBuf.pucRDStart;
        rdstart = (VOS_UINT32)(ulRdStart & 0xFFFFFFFFUL);

        ulRdEnd   = (VOS_ULONG)pSrcAttr->sCoderSetSrcBuf.pucRDEnd;
        rdend   = (VOS_UINT32)(ulRdEnd & 0xFFFFFFFFUL);

        SOCP_CHECK_PARA(rdstart);
        SOCP_CHECK_8BYTESALIGN(rdstart);
        SOCP_CHECK_PARA(rdend);
        SOCP_CHECK_BUF_ADDR(rdstart, rdend);
        /* SOCP_CHECK_PARA(pSrcAttr->sCoderSetSrcBuf.u32RDThreshold); ��ʱ����Ҫ���ò���*/

        Rdbuflength = rdend - rdstart + 1;

        SOCP_CHECK_8BYTESALIGN(Rdbuflength);

        if(Rdbuflength > SOCP_ENC_SRC_RDLGTH_MAX)
        {
            SOCP_LOG_ERR("CoderAllocSrcChan: RD buffer length is too large", Rdbuflength, 0);

            return BSP_ERR_SOCP_INVALID_PARA;
        }
    }

    /* ��λͨ�� */
    SOCP_REG_SETBITS(SOCP_REG_ENCRST, srcChanId, 1, 1);

    /* �ȴ�ͨ������ */
    for (i = 0; i < SOCP_RESET_TIME; i++)
    {
        ResetFlag = SOCP_REG_GETBITS(SOCP_REG_ENCRST, srcChanId, 1);

        if(0 == ResetFlag)
        {
            break;
        }
    }

    if (SOCP_RESET_TIME == i)
    {
        SOCP_LOG_ERR("CoderAllocSrcChan: reset channel failed!", srcChanId, 0);
    }

    /* д����ʼ��ַ��Դbuffer��ʼ��ַ�Ĵ���*/
    SOCP_REG_WRITE(SOCP_REG_ENCSRC_BUFADDR(srcChanId),SOCP_VIRT_PHY(start));
    SOCP_REG_WRITE(SOCP_REG_ENCSRC_BUFWPTR(srcChanId),SOCP_VIRT_PHY(start));
    SOCP_REG_WRITE(SOCP_REG_ENCSRC_BUFRPTR(srcChanId),SOCP_VIRT_PHY(start));

    /* SOCP��V8R2�Ͻ��ж�Դͨ�����ý�����չ */
    if (SOCP_OLD_VER == ulVersion)
    {
        SOCP_REG_SETBITS(SOCP_REG_ENCSRC_BUFCFG0(srcChanId), 0, 27, buflength);
    }
    else
    {
        SOCP_REG_SETBITS(SOCP_REG_ENCSRC_BUFCFG0(srcChanId), 0, 31, buflength);
    }

    /* �����������������������RDbuffer����ʼ��ַ�ͳ��� */
    if(SOCP_ENCSRC_CHNMODE_LIST == pSrcAttr->eMode)
    {
        SOCP_REG_WRITE(SOCP_REG_ENCSRC_RDQADDR(srcChanId),SOCP_VIRT_PHY(rdstart));
        SOCP_REG_WRITE(SOCP_REG_ENCSRC_RDQRPTR(srcChanId),SOCP_VIRT_PHY(rdstart));
        SOCP_REG_WRITE(SOCP_REG_ENCSRC_RDQWPTR(srcChanId),SOCP_VIRT_PHY(rdstart));
        SOCP_REG_SETBITS(SOCP_REG_ENCSRC_RDQCFG(srcChanId), 0, 16, Rdbuflength);
    }

    /*������������*/
    SOCP_REG_SETBITS(SOCP_REG_ENCSRC_BUFCFG1(srcChanId), 1, 2, pSrcAttr->eMode);
    SOCP_REG_SETBITS(SOCP_REG_ENCSRC_BUFCFG1(srcChanId), 4, 4, pSrcAttr->u32DestChanID);
    SOCP_REG_SETBITS(SOCP_REG_ENCSRC_BUFCFG1(srcChanId), 8, 2, pSrcAttr->ePriority);
    SOCP_REG_SETBITS(SOCP_REG_ENCSRC_BUFCFG1(srcChanId), 10, 1, pSrcAttr->u32BypassEn);
    SOCP_REG_SETBITS(SOCP_REG_ENCSRC_BUFCFG1(srcChanId), 11, 1, pSrcAttr->eDataTypeEn);
    SOCP_REG_SETBITS(SOCP_REG_ENCSRC_BUFCFG1(srcChanId), 31, 1, pSrcAttr->eDebugEn);
    SOCP_REG_SETBITS(SOCP_REG_ENCSRC_BUFCFG1(srcChanId), 16, 8, pSrcAttr->eDataType);

    /* ��g_strSocpStat�б������*/
    pChan = &g_strSocpStat.sEncSrcChan[srcChanId];

    pChan->u32SetStat             = SOCP_CHN_SET;
    pChan->eChnMode               = pSrcAttr->eMode;
    pChan->sEncSrcBuf.u32Start    = start;
    pChan->sEncSrcBuf.u32End      = end;
    pChan->sEncSrcBuf.u32Write    = start;
    pChan->sEncSrcBuf.u32Read     = start;
    pChan->sEncSrcBuf.u32Length   = buflength;
    pChan->sEncSrcBuf.u32IdleSize = 0;

    if(SOCP_ENCSRC_CHNMODE_LIST == pSrcAttr->eMode)
    {
        pChan->sRdBuf.u32Start    = rdstart;
        pChan->sRdBuf.u32End      = rdend;
        pChan->sRdBuf.u32Write    = rdstart;
        pChan->sRdBuf.u32Read     = rdstart;
        pChan->sRdBuf.u32Length   = Rdbuflength;
    }

    return VOS_OK;
}


/*****************************************************************************
* �� �� ��  : SocpEncSrcStart
*
* ��������  : ������߽�����������
*
* �������  : ulRealChanID      ͨ��ID
* �������  :
*
* �� �� ֵ  : �����ɹ����ı�ʶ��
*****************************************************************************/
/*lint -e529*/
VOS_UINT32 SocpEncSrcStart(VOS_UINT32 ulRealChanID)
{
    VOS_UINT32      ulDstId;
#ifdef SOCP_CCORE
    VOS_UINT32      ulStart;
#endif

    SOCP_CHECK_CHAN_ID(ulRealChanID, SOCP_MAX_ENCSRC_CHN);
    SOCP_CHECK_ENCSRC_SET(ulRealChanID);

    /* ����ͨ�� */
    ulDstId = SOCP_REG_GETBITS(SOCP_REG_ENCSRC_BUFCFG1(ulRealChanID), 4, 4);

#ifdef SOCP_ACORE
    if (SOCP_CHN_SET != g_strSocpStat.sEncDstChan[ulDstId].u32SetStat)
    {
        SOCP_LOG_ERR("BSP_SOCP_Start: Acpu enc src's dst Channel is valid", ulRealChanID, 0);
        return BSP_ERR_SOCP_DEST_CHAN;
    }

    SOCP_REG_SETBITS(SOCP_REG_ENC_RAWINT1, ulRealChanID, 1, 1);
    SOCP_REG_SETBITS(SOCP_REG_APP_MASK1, ulRealChanID, 1, 0);
#endif

#ifdef SOCP_CCORE
    /* ͨ���Ĵ����ж� */
    SOCP_REG_READ(SOCP_REG_ENCDEST_BUFADDR(ulDstId), ulStart);

    if (0 == ulStart)
    {
        SOCP_LOG_ERR("BSP_SOCP_Start: Ccpu enc dst Channel is valid", ulRealChanID, 0);
        return BSP_ERR_SOCP_DEST_CHAN;
    }
#endif

    /* ���ô�״̬*/
    SOCP_REG_SETBITS(SOCP_REG_ENCSRC_BUFCFG1(ulRealChanID), 0, 1, 1);

    g_strSocpStat.sEncSrcChan[ulRealChanID].u32ChanEn = SOCP_CHN_ENABLE;
    g_stSocpDebugInfo.sSocpDebugEncSrc.u32SocpStartEncSrcCnt[ulRealChanID]++;

    return VOS_OK;
}

/*lint +e529*/

/*****************************************************************************
* �� �� ��  : BSP_SOCP_Start
*
* ��������  : ������߽�����������
*
* �������  : u32SrcChanID      ͨ��ID
* �������  :
*
* �� �� ֵ  : �����ɹ����ı�ʶ��
*****************************************************************************/

/*lint -e529*/
VOS_UINT32 BSP_SOCP_Start(VOS_UINT32 u32SrcChanID)
{
    VOS_UINT32 u32RealChanID;
    VOS_UINT32 u32ChanType;

    /* �ж��Ƿ��Ѿ���ʼ�� */
    SOCP_CHECK_INIT();

    /* �ж�ͨ��ID�Ƿ���Ч */
    u32RealChanID = SOCP_REAL_CHAN_ID(u32SrcChanID);
    u32ChanType = SOCP_REAL_CHAN_TYPE(u32SrcChanID);

    /* ����ͨ�� */
    if (SOCP_CODER_SRC_CHAN == u32ChanType)
    {
        return SocpEncSrcStart(u32RealChanID);
    }

#ifdef SOCP_ACORE
    else if (SOCP_DECODER_SRC_CHAN == u32ChanType)
    {
        return SocpDecSrcStart(u32RealChanID);
    }
#endif
    else
    {
        SOCP_LOG_ERR("BSP_SOCP_Start: invalid Channel type", u32SrcChanID, u32ChanType);
        return BSP_ERR_SOCP_INVALID_CHAN;
    }
}

/*lint +e529*/

/*****************************************************************************
* �� �� ��  : BSP_SOCP_Stop
*
* ��������  : ������߽���ֹͣ����
*
* �������  : u32SrcChanID      ͨ��ID
*
* �������  :
*
* �� �� ֵ  : ֹͣ�ɹ����ı�ʶ��
*****************************************************************************/

/*lint -e529*/
VOS_UINT32 BSP_SOCP_Stop(VOS_UINT32 u32SrcChanID)
{
    VOS_UINT32 u32RealChanID;
    VOS_UINT32 u32ChanType;

#ifdef SOCP_ACORE
    VOS_UINT32 IntIDMask = 0;
    VOS_UINT32 i;
#endif

    /* �ж��Ƿ��Ѿ���ʼ�� */
    SOCP_CHECK_INIT();

    SOCP_LOG_ERR("BSP_SOCP_Stop Channel ID", u32SrcChanID, 0);

    /* �ж�ͨ��ID�Ƿ���Ч */
    u32RealChanID = SOCP_REAL_CHAN_ID(u32SrcChanID);
    u32ChanType = SOCP_REAL_CHAN_TYPE(u32SrcChanID);

    /* ����ͨ�� */
    if (SOCP_CODER_SRC_CHAN == u32ChanType)
    {
        SOCP_CHECK_CHAN_ID(u32RealChanID, SOCP_MAX_ENCSRC_CHN);
        SOCP_CHECK_ENCSRC_SET(u32RealChanID);

        /* �ر��ж�*/
#ifdef SOCP_ACORE
        SOCP_REG_SETBITS(SOCP_REG_APP_MASK1, u32RealChanID, 1, 1);
#endif

        /* ����ͨ���ر�״̬*/
        SOCP_REG_SETBITS(SOCP_REG_ENCSRC_BUFCFG1(u32RealChanID), 0, 1, 0);

        g_strSocpStat.sEncSrcChan[u32RealChanID].u32ChanEn = SOCP_CHN_DISABLE;

        g_stSocpDebugInfo.sSocpDebugEncSrc.u32SocpStopEncSrcCnt[u32RealChanID]++;
    }

#ifdef SOCP_ACORE
    else if (SOCP_DECODER_SRC_CHAN == u32ChanType)
    {
        SOCP_CHECK_CHAN_ID(u32RealChanID, SOCP_MAX_DECSRC_CHN);
        SOCP_CHECK_DECSRC_SET(u32RealChanID);

        /* �ر��ж�*/
        if (SOCP_DECSRC_CHNMODE_LIST == g_strSocpStat.sDecSrcChan[u32RealChanID].eChnMode)
        {
            SOCP_REG_SETBITS(SOCP_REG_DEC_CORE0MASK0, u32RealChanID, 1, 1);
        }

        for (i = 1; i < SOCP_DEC_SRCINT_NUM; i++)
        {
            IntIDMask  = SOCP_REG_GETBITS(SOCP_REG_DEC_MASK1, i * 4, 4);
            IntIDMask |= 1 << u32RealChanID;
            SOCP_REG_SETBITS(SOCP_REG_DEC_CORE0MASK0, i * 4, 4, IntIDMask);
        }

        /* ����ͨ���ر�״̬*/
        SOCP_REG_SETBITS(SOCP_REG_DECSRC_BUFCFG0(u32RealChanID), 30, 1, 0);

        g_strSocpStat.sDecSrcChan[u32RealChanID].u32ChanEn = SOCP_CHN_DISABLE;

        g_stSocpDebugInfo.sSocpDebugDecSrc.u32SocpStopDecSrcCnt[u32RealChanID]++;
    }
#endif
    else
    {
        SOCP_LOG_ERR("BSP_SOCP_Stop: invalid Channel type", u32SrcChanID, u32ChanType);
        return BSP_ERR_SOCP_INVALID_CHAN;
    }

    return VOS_OK;
}

/*lint +e529*/
/*****************************************************************************
* �� �� ��  : BSP_SOCP_GetWriteBuff
*
* ��������  : �ϲ��ȡд����buffer����
*
* �������  : u32SrcChanID    Դͨ��ID
* �������  : pBuff           ��ȡ��buffer
*
* �� �� ֵ  : ��ȡ�ɹ����ı�ʶ��
*****************************************************************************/
VOS_UINT32 BSP_SOCP_GetWriteBuff(VOS_UINT32 u32SrcChanID, SOCP_BUFFER_RW_STRU *pBuff)
{
    VOS_UINT32 u32ChanID;
    VOS_UINT32 u32ChanType;
    VOS_UINT32 uPAddr;

    /* �ж��Ƿ��Ѿ���ʼ�� */
    SOCP_CHECK_INIT();

    /* �жϲ�����Ч�� */
    SOCP_CHECK_PARA(pBuff);

    SOCP_LOG_INFO("BSP_SOCP_GetWriteBuff: Channel id ", u32SrcChanID, 0);

    /* ���ʵ��ͨ��id */
    u32ChanID   = SOCP_REAL_CHAN_ID(u32SrcChanID);
    u32ChanType = SOCP_REAL_CHAN_TYPE(u32SrcChanID);

    /* ����ͨ�� */
    if (SOCP_CODER_SRC_CHAN == u32ChanType)
    {
        g_stSocpDebugInfo.sSocpDebugEncSrc.u32SocpGetWBufEncSrcEtrCnt[u32ChanID]++;

        /* ����ͨ��id */
        SOCP_CHECK_CHAN_ID(u32ChanID, SOCP_MAX_ENCSRC_CHN);
        SOCP_CHECK_ENCSRC_SET(u32ChanID);

        /* ���ݶ�дָ���ȡbuffer */
        SOCP_REG_READ(SOCP_REG_ENCSRC_BUFRPTR(u32ChanID), uPAddr);

        g_strSocpStat.sEncSrcChan[u32ChanID].sEncSrcBuf.u32Read =(VOS_UINT32)SOCP_PHY_VIRT(uPAddr);

        SOCP_REG_READ(SOCP_REG_ENCSRC_BUFWPTR(u32ChanID), uPAddr);

        g_strSocpStat.sEncSrcChan[u32ChanID].sEncSrcBuf.u32Write= (VOS_UINT32)SOCP_PHY_VIRT(uPAddr);

        SocpGetIdleBuffer(&g_strSocpStat.sEncSrcChan[u32ChanID].sEncSrcBuf, pBuff);

        SOCP_LOG_INFO("BSP_SOCP_GetWriteBuff: Enc Src Buffer Info", (VOS_UINT32)pBuff->pBuffer, pBuff->u32Size);

        SOCP_LOG_INFO("BSP_SOCP_GetWriteBuff: Enc Src Buffer Rb Info", (VOS_UINT32)pBuff->pRbBuffer, pBuff->u32RbSize);

        g_stSocpDebugInfo.sSocpDebugEncSrc.u32SocpGetWBufEncSrcSucCnt[u32ChanID]++;
    }
#ifdef SOCP_ACORE
    else if (SOCP_DECODER_SRC_CHAN == u32ChanType) /* ����ͨ�� */
    {
        g_stSocpDebugInfo.sSocpDebugDecSrc.u32SocpGetWBufDecSrcEtrCnt[u32ChanID]++;

        /* ����ͨ��id */
        SOCP_CHECK_CHAN_ID(u32ChanID, SOCP_MAX_DECSRC_CHN);
        SOCP_CHECK_DECSRC_SET(u32ChanID);

        SOCP_REG_READ(SOCP_REG_DECSRC_BUFRPTR(u32ChanID), uPAddr);

        g_strSocpStat.sDecSrcChan[u32ChanID].sDecSrcBuf.u32Read = (VOS_UINT32)SOCP_PHY_VIRT(uPAddr);

        SOCP_REG_READ(SOCP_REG_DECSRC_BUFWPTR(u32ChanID), uPAddr);

        g_strSocpStat.sDecSrcChan[u32ChanID].sDecSrcBuf.u32Write= (VOS_UINT32)SOCP_PHY_VIRT(uPAddr);

        SocpGetIdleBuffer(&g_strSocpStat.sDecSrcChan[u32ChanID].sDecSrcBuf, pBuff);

        SOCP_LOG_INFO("BSP_SOCP_GetWriteBuff: Dec Src Buffer Info", (VOS_UINT32)pBuff->pBuffer, pBuff->u32Size);

        SOCP_LOG_INFO("BSP_SOCP_GetWriteBuff: Dec Src Buffer Rb Info", (VOS_UINT32)pBuff->pRbBuffer, pBuff->u32RbSize);

        g_stSocpDebugInfo.sSocpDebugDecSrc.u32SocpGetWBufDecSrcSucCnt[u32ChanID]++;
    }
#endif  /*SOCP_ACORE*/
    else
    {
        SOCP_LOG_ERR("BSP_SOCP_GetWriteBuff: invalid Channel type", u32SrcChanID, u32ChanType);
        return BSP_ERR_SOCP_INVALID_CHAN;
    }

    return VOS_OK;
}

/*****************************************************************************
* �� �� ��  : BSP_SOCP_WriteDone
*
* ��������  : д������ɺ���
*
* �������  : u32SrcChanID    Դͨ��ID
              u32WrtSize      д�����ݵĳ���
*
* �������  :
*
* �� �� ֵ  : ����������ı�ʶ��
*****************************************************************************/
VOS_UINT32 BSP_SOCP_WriteDone(VOS_UINT32 u32SrcChanID, VOS_UINT32 u32WrtSize)
{
    VOS_UINT32             u32ChanID;
    VOS_UINT32             u32ChanType;
    VOS_UINT32             u32WrtPad;
    SOCP_BUFFER_RW_STRU    stRwBuff;
    VOS_UINT32             uPAddr;
#if(VOS_OS_VER == VOS_WIN32)    /* for PC Stub */
    VOS_UINT32          ulWritePtr;
#endif
    /* �ж��Ƿ��Ѿ���ʼ�� */
    SOCP_CHECK_INIT();

    /* �жϲ�����Ч�� */
    SOCP_CHECK_PARA(u32WrtSize);

    SOCP_LOG_INFO("BSP_SOCP_WriteDone: Channel id ", u32SrcChanID, u32WrtSize);

    /* ���ʵ��ͨ��id */
    u32ChanID   = SOCP_REAL_CHAN_ID(u32SrcChanID);
    u32ChanType = SOCP_REAL_CHAN_TYPE(u32SrcChanID);

    /* ����ͨ�� */
    if (SOCP_CODER_SRC_CHAN == u32ChanType)
    {
        SOCP_ENCSRC_CHAN_STRU *pChan;

        g_stSocpDebugInfo.sSocpDebugEncSrc.u32SocpWriteDoneEncSrcEtrCnt[u32ChanID]++;

        /* ����ͨ��id */
        SOCP_CHECK_CHAN_ID(u32ChanID, SOCP_MAX_ENCSRC_CHN);
        SOCP_CHECK_ENCSRC_SET(u32ChanID);

        pChan = &g_strSocpStat.sEncSrcChan[u32ChanID];

        u32WrtPad = u32WrtSize % 8;

        if (0 != u32WrtPad)
        {
            u32WrtSize += (8 - u32WrtPad);
        }

        SOCP_REG_READ(SOCP_REG_ENCSRC_BUFWPTR(u32ChanID), uPAddr);

        pChan->sEncSrcBuf.u32Write= (VOS_UINT32)SOCP_PHY_VIRT(uPAddr);

        SOCP_REG_READ(SOCP_REG_ENCSRC_BUFRPTR(u32ChanID), uPAddr);

        pChan->sEncSrcBuf.u32Read = (VOS_UINT32)SOCP_PHY_VIRT(uPAddr);

        SocpGetIdleBuffer(&pChan->sEncSrcBuf, &stRwBuff);

        if (stRwBuff.u32Size + stRwBuff.u32RbSize < u32WrtSize)
        {
            SOCP_LOG_ERR("BSP_SOCP_WriteDone: enc src too large write size. write ptr is, read ptr is",
                      pChan->sEncSrcBuf.u32Write, pChan->sEncSrcBuf.u32Read);

            SOCP_LOG_ERR("BSP_SOCP_WriteDone: enc src too large write size. u32Size is, u32RbSize is",
                      stRwBuff.u32Size, stRwBuff.u32RbSize);

            g_stSocpDebugInfo.sSocpDebugEncSrc.u32SocpWriteDoneEncSrcFailCnt[u32ChanID]++;

            return BSP_ERR_SOCP_INVALID_PARA;
        }

#if(VOS_OS_VER == VOS_WIN32)    /* for PC Stub */
        ulWritePtr = pChan->sEncSrcBuf.u32Write;
#endif

        /* ���ö�дָ�� */
        SocpWriteDone(&pChan->sEncSrcBuf, u32WrtSize);

        /* д��дָ�뵽дָ��Ĵ���*/
        uPAddr = SOCP_VIRT_PHY(pChan->sEncSrcBuf.u32Write);

        SOCP_REG_WRITE(SOCP_REG_ENCSRC_BUFWPTR(u32ChanID), uPAddr);

        g_stSocpDebugInfo.sSocpDebugEncSrc.u32SocpWriteDoneEncSrcSucCnt[u32ChanID]++;
    }

#ifdef SOCP_ACORE
    else  if(SOCP_DECODER_SRC_CHAN == u32ChanType) /* ����ͨ�� */
    {
        SOCP_DECSRC_CHAN_STRU  *pChan;

        g_stSocpDebugInfo.sSocpDebugDecSrc.u32SocpWriteDoneDecSrcEtrCnt[u32ChanID]++;

        /* ����ͨ��id */
        SOCP_CHECK_CHAN_ID(u32ChanID, SOCP_MAX_DECSRC_CHN);
        SOCP_CHECK_DECSRC_SET(u32ChanID);

        pChan = &g_strSocpStat.sDecSrcChan[u32ChanID];

        SOCP_REG_READ(SOCP_REG_DECSRC_BUFWPTR(u32ChanID), uPAddr);

        pChan->sDecSrcBuf.u32Write= (VOS_UINT32)SOCP_PHY_VIRT(uPAddr);

        SOCP_REG_READ(SOCP_REG_DECSRC_BUFRPTR(u32ChanID), uPAddr);

        pChan->sDecSrcBuf.u32Read = (VOS_UINT32)SOCP_PHY_VIRT(uPAddr);

        SocpGetIdleBuffer(&pChan->sDecSrcBuf, &stRwBuff);

        if (stRwBuff.u32Size + stRwBuff.u32RbSize < u32WrtSize)
        {
            SOCP_LOG_ERR("BSP_SOCP_WriteDone: dec src too large write size. write ptr is, read ptr is",
                      pChan->sDecSrcBuf.u32Write, pChan->sDecSrcBuf.u32Read);

            SOCP_LOG_ERR("BSP_SOCP_WriteDone: dec src too large write size. u32Size is, u32RbSize is",
                      stRwBuff.u32Size, stRwBuff.u32RbSize);

            g_stSocpDebugInfo.sSocpDebugDecSrc.u32SocpWriteDoneDecSrcFailCnt[u32ChanID]++;

            return BSP_ERR_SOCP_INVALID_PARA;
        }

#if(VOS_OS_VER == VOS_WIN32)    /* for PC Stub */
        ulWritePtr = pChan->sDecSrcBuf.u32Write;
#endif

        /* ���ö�дָ�� */
        SocpWriteDone(&pChan->sDecSrcBuf, u32WrtSize);

        /* д��дָ�뵽дָ��Ĵ���*/
        uPAddr = SOCP_VIRT_PHY(pChan->sDecSrcBuf.u32Write);

        SOCP_REG_WRITE(SOCP_REG_DECSRC_BUFWPTR(u32ChanID), uPAddr);

        g_stSocpDebugInfo.sSocpDebugDecSrc.u32SocpWriteDoneDecSrcSucCnt[u32ChanID]++;
    }
#endif
    else
    {
        SOCP_LOG_ERR("BSP_SOCP_WriteDone: invalid Channel type", u32SrcChanID, u32ChanType);
        return BSP_ERR_SOCP_INVALID_CHAN;
    }

#if(VOS_OS_VER == VOS_WIN32)    /* for PC Stub */
    Stub_SendSocpData(u32SrcChanID, (VOS_UINT8*)ulWritePtr, u32WrtSize);
#endif

    VOS_FlushCpuWriteBuf();

    return VOS_OK;
}


/*****************************************************************************
* �� �� ��  : BSP_SOCP_GetRDBuffer
*
* ��������  : ��ȡRDbuffer����
*
* �������  : u32SrcChanID    Դͨ��ID
*
* �������  : pBuff           ��ȡ��RDbuffer
*
* �� �� ֵ  : ��ȡ�ɹ����ı�ʶ��
*****************************************************************************/
VOS_UINT32 BSP_SOCP_GetRDBuffer(VOS_UINT32 u32SrcChanID, SOCP_BUFFER_RW_STRU *pBuff)
{
    VOS_UINT32     u32ChanID;
    VOS_UINT32     u32ChanType;
    VOS_UINT32     uPAddr;

    /* �ж��Ƿ��Ѿ���ʼ�� */
    SOCP_CHECK_INIT();

    /* �жϲ�����Ч�� */
    SOCP_CHECK_PARA(pBuff);

    SOCP_LOG_INFO("BSP_SOCP_GetRDBuffer: Channel is", u32SrcChanID, 0);

    /* ���ʵ��ͨ��id */
    u32ChanID   = SOCP_REAL_CHAN_ID(u32SrcChanID);
    u32ChanType = SOCP_REAL_CHAN_TYPE(u32SrcChanID);

    /* ����ͨ�� */
    if (SOCP_CODER_SRC_CHAN == u32ChanType)
    {
        g_stSocpDebugInfo.sSocpDebugEncSrc.u32SocpGetRdBufEncSrcEtrCnt[u32ChanID]++;

        /* ����ͨ��id */
        SOCP_CHECK_CHAN_ID(u32ChanID, SOCP_MAX_ENCSRC_CHN);
        SOCP_CHECK_ENCSRC_SET(u32ChanID);

        /* ���ݶ�дָ���ȡbuffer */
        SOCP_REG_READ(SOCP_REG_ENCSRC_RDQRPTR(u32ChanID), uPAddr);
        g_strSocpStat.sEncSrcChan[u32ChanID].sRdBuf.u32Read = (VOS_UINT32)SOCP_PHY_VIRT(uPAddr);

        SOCP_REG_READ(SOCP_REG_ENCSRC_RDQWPTR(u32ChanID), uPAddr);
        g_strSocpStat.sEncSrcChan[u32ChanID].sRdBuf.u32Write= (VOS_UINT32)SOCP_PHY_VIRT(uPAddr);

        SocpGetDataBuffer(&g_strSocpStat.sEncSrcChan[u32ChanID].sRdBuf, pBuff);

        SOCP_LOG_INFO("BSP_SOCP_GetRDBuffer: pBuff Info is", (VOS_UINT32)pBuff->pBuffer, pBuff->u32Size);

        SOCP_LOG_INFO("BSP_SOCP_GetRDBuffer: pBuff Rb Info is", (VOS_UINT32)pBuff->pRbBuffer, pBuff->u32RbSize);

        g_stSocpDebugInfo.sSocpDebugEncSrc.u32SocpGetRdBufEncSrcSucCnt[u32ChanID]++;
    }
    else
    {
        SOCP_LOG_ERR("BSP_SOCP_GetRDBuffer: invalid Channel type", u32SrcChanID, u32ChanType);
        return BSP_ERR_SOCP_INVALID_CHAN;
    }

    return VOS_OK;
}


/*****************************************************************************
* �� �� ��  : BSP_SOCP_ReadRDDone
*
* ��������  : ��ȡRDbuffer������ɺ���
*
* �������  : u32SrcChanID   Դͨ��ID
              u32RDSize      ��ȡ��RDbuffer���ݳ���
*
* �������  :
*
* �� �� ֵ  : ��ȡ�ɹ����ı�ʶ��
*****************************************************************************/
VOS_UINT32 BSP_SOCP_ReadRDDone(VOS_UINT32 u32SrcChanID, VOS_UINT32 u32RDSize)
{
    VOS_UINT32             u32ChanID;
    VOS_UINT32             u32ChanType;
    SOCP_BUFFER_RW_STRU    stRwBuff;
    VOS_UINT32             uPAddr;

    /* �ж��Ƿ��Ѿ���ʼ�� */
    SOCP_CHECK_INIT();

    /* �жϲ�����Ч�� */
    SOCP_CHECK_PARA(u32RDSize);

    SOCP_LOG_INFO("BSP_SOCP_ReadRDDone: Read RD Done", u32SrcChanID, u32RDSize);

    /* ���ʵ��ͨ��id */
    u32ChanID   = SOCP_REAL_CHAN_ID(u32SrcChanID);
    u32ChanType = SOCP_REAL_CHAN_TYPE(u32SrcChanID);

    /* ����ͨ�� */
    if (SOCP_CODER_SRC_CHAN == u32ChanType)
    {
        SOCP_ENCSRC_CHAN_STRU *pChan;

        g_stSocpDebugInfo.sSocpDebugEncSrc.u32SocpReadRdDoneEncSrcEtrCnt[u32ChanID]++;

        /* ����ͨ��id */
        SOCP_CHECK_CHAN_ID(u32ChanID, SOCP_MAX_ENCSRC_CHN);
        SOCP_CHECK_ENCSRC_SET(u32ChanID);

        pChan = &g_strSocpStat.sEncSrcChan[u32ChanID];
        g_strSocpStat.sEncSrcChan[u32ChanID].u32LastRdSize = 0;

        /* ���ö�дָ�� */
        SOCP_REG_READ(SOCP_REG_ENCSRC_RDQWPTR(u32ChanID), uPAddr);
        pChan->sRdBuf.u32Write = (VOS_UINT32)SOCP_PHY_VIRT(uPAddr);

        SOCP_REG_READ(SOCP_REG_ENCSRC_RDQRPTR(u32ChanID), uPAddr);
        pChan->sRdBuf.u32Read  = (VOS_UINT32)SOCP_PHY_VIRT(uPAddr);

        SocpGetDataBuffer(&pChan->sRdBuf, &stRwBuff);

        if ((stRwBuff.u32Size + stRwBuff.u32RbSize) < u32RDSize)
        {
            SOCP_LOG_ERR("BSP_SOCP_ReadRDDone: enc src too large rd size, write ptr is, read ptr is",
                      pChan->sRdBuf.u32Write, pChan->sRdBuf.u32Read);

            SOCP_LOG_ERR("BSP_SOCP_ReadRDDone: enc src too large rd size u32Size is, u32RbSize is",
                      stRwBuff.u32Size, stRwBuff.u32RbSize);

            g_stSocpDebugInfo.sSocpDebugEncSrc.u32SocpReadRdDoneEncSrcFailCnt[u32ChanID]++;

            return BSP_ERR_SOCP_INVALID_PARA;
        }

        SocpReadDone(&pChan->sRdBuf, u32RDSize);

        /* д��дָ�뵽дָ��Ĵ���*/
        uPAddr= SOCP_VIRT_PHY(pChan->sRdBuf.u32Read);
        SOCP_REG_WRITE(SOCP_REG_ENCSRC_RDQRPTR(u32ChanID), uPAddr);

        g_stSocpDebugInfo.sSocpDebugEncSrc.u32SocpReadRdDoneEncSrcSucCnt[u32ChanID]++;
    }
    else
    {
        SOCP_LOG_ERR("BSP_SOCP_ReadRDDone: invalid Channel type", u32SrcChanID, u32ChanType);
        return BSP_ERR_SOCP_INVALID_CHAN;
    }

    VOS_FlushCpuWriteBuf();

    return VOS_OK;
}

/*����Ŀ��ͨ��ר��
 */

/*****************************************************************************
* �� �� ��   : SOCP_Help
*
* ��������  : ��ȡsocp��ӡ��Ϣ
*
* �������  : ��
*
* �������  : ��
*
* �� �� ֵ   : ��
*****************************************************************************/
VOS_VOID SOCP_Help(VOS_VOID)
{
    vos_printf("\r |*************************************|\n");
    vos_printf("\r SOCP_ShowDebugGbl   : �鿴ȫ��ͳ����Ϣ:ͨ�����롢���ú��ж��ܼ������޲���\n");
    vos_printf("\r SOCP_ShowEncSrcChanCur : �鿴����Դͨ�����ԣ�����Ϊͨ��ID\n");
    vos_printf("\r SOCP_ShowEncSrcChanAdd : �鿴����Դͨ������ͳ��ֵ������Ϊͨ��ID\n");
    vos_printf("\r SOCP_ShowEncSrcChanAll : �鿴���б���Դͨ�����Ժ�ͳ��ֵ���޲���\n");
#ifdef SOCP_ACORE
    vos_printf("\r SOCP_ShowEncDstChanCur : �鿴����Ŀ��ͨ�����ԣ�����Ϊͨ��ID\n");
    vos_printf("\r SOCP_ShowEncDstChanAdd : �鿴����Ŀ��ͨ������ͳ��ֵ������Ϊͨ��ID\n");
    vos_printf("\r SOCP_ShowEncDstChanAll : �鿴���б���Ŀ��ͨ�����Ժ�ͳ��ֵ���޲���\n");
    vos_printf("\r SOCP_ShowDecSrcChanCur : �鿴����Դͨ�����ԣ�����Ϊͨ��ID\n");
    vos_printf("\r SOCP_ShowDecSrcChanAdd : �鿴����Դͨ������ͳ��ֵ������Ϊͨ��ID\n");
    vos_printf("\r SOCP_ShowDecSrcChanAll : �鿴���н���Դͨ�����Ժ�ͳ��ֵ���޲���\n");
#endif
    vos_printf("\r SOCP_ShowDecDstChanCur : �鿴����Ŀ��ͨ�����ԣ�����Ϊͨ��ID\n");
    vos_printf("\r SOCP_ShowDecDstChanAdd : �鿴����Ŀ��ͨ������ͳ��ֵ������Ϊͨ��ID\n");
    vos_printf("\r SOCP_ShowDecDstChanAll : �鿴���н���Ŀ��ͨ�����Ժ�ͳ��ֵ���޲���\n");

    vos_printf("\r SOCP_debugCntShow : �鿴ȫ��ͳ����Ϣ���޲���\n");
}

/*****************************************************************************
* �� �� ��   : SOCP_ShowDebugGbl
*
* ��������  : ��ʾȫ��debug ������Ϣ
*
* �������  : ��
*
* �������  : ��
*
* �� �� ֵ   : ��
*****************************************************************************/
VOS_VOID SOCP_ShowDebugGbl(VOS_VOID)
{
    SOCP_DEBUG_GBL_STRU *sSocpDebugGblInfo;

    sSocpDebugGblInfo = &g_stSocpDebugInfo.sSocpDebugGBl;

    vos_printf("\r SOCPȫ��״̬ά����Ϣ:\n");
    vos_printf("\r socp����ַ:                                            : 0x%x\n",
           (VOS_INT32)g_strSocpStat.uBaseAddr);

#ifdef SOCP_ACORE
    vos_printf("\r socp����APP�жϵĴ���          : 0x%x\n", (VOS_INT32)sSocpDebugGblInfo->u32SocpAppEtrIntCnt);
    vos_printf("\r socp���APP�жϵĴ���          : 0x%x\n", (VOS_INT32)sSocpDebugGblInfo->u32SocpAppSucIntCnt);
#endif

#ifdef SOCP_CCORE
    vos_printf("\r socp����Modem�жϵĴ���        : 0x%x\n", (VOS_INT32)sSocpDebugGblInfo->u32SocpModemEtrIntCnt);
    vos_printf("\r socp���Modem�жϵĴ���        : 0x%x\n", (VOS_INT32)sSocpDebugGblInfo->u32SocpModemSucIntCnt);
#endif

    return;
}

/*****************************************************************************
* �� �� ��   : SOCP_ShowEncSrcChanCur
*
* ��������  : ��ӡ����Դͨ����ǰ����
*
* �������  : ͨ��ID
*
* �������  : ��
*
* �� �� ֵ   : ��
*****************************************************************************/

/*lint -e529*/
VOS_UINT32 SOCP_ShowEncSrcChanCur(VOS_UINT32 u32UniqueId)
{
    VOS_UINT32 u32RealId   = 0;
    VOS_UINT32 u32ChanType = 0;

    u32RealId   = SOCP_REAL_CHAN_ID(u32UniqueId);
    u32ChanType = SOCP_REAL_CHAN_TYPE(u32UniqueId);

    SOCP_CHECK_CHAN_TYPE(u32ChanType, SOCP_CODER_SRC_CHAN);

    vos_printf("================== ����ı���Դͨ�� 0x%x  ����:=================\n", u32UniqueId);
    vos_printf("ͨ������״̬:\t\t%d\n", g_strSocpStat.sEncSrcChan[u32RealId].u32SetStat);
    vos_printf("ͨ��ʹ��״̬:\t\t%d\n", g_strSocpStat.sEncSrcChan[u32RealId].u32ChanEn);
    vos_printf("ͨ�����ݸ�ʽ����:\t\t%d\n", g_strSocpStat.sEncSrcChan[u32RealId].eChnMode);
    vos_printf("ͨ��buffer ��ʼ��ַ:\t\t0x%x\n", g_strSocpStat.sEncSrcChan[u32RealId].sEncSrcBuf.u32Start);
    vos_printf("ͨ��buffer ������ַ:\t\t0x%x\n", g_strSocpStat.sEncSrcChan[u32RealId].sEncSrcBuf.u32End);
    vos_printf("ͨ��buffer ��ָ��:\t\t0x%x\n", g_strSocpStat.sEncSrcChan[u32RealId].sEncSrcBuf.u32Read);
    vos_printf("ͨ��buffer дָ��:\t\t0x%x\n", g_strSocpStat.sEncSrcChan[u32RealId].sEncSrcBuf.u32Write);
    vos_printf("ͨ��buffer ����:\t\t0x%x\n", g_strSocpStat.sEncSrcChan[u32RealId].sEncSrcBuf.u32Length);

    if (SOCP_ENCSRC_CHNMODE_LIST == g_strSocpStat.sEncSrcChan[u32RealId].eChnMode)
    {
        vos_printf("ͨ��RD buffer ��ʼ��ַ:\t\t0x%x\n", g_strSocpStat.sEncSrcChan[u32RealId].sRdBuf.u32Start);
        vos_printf("ͨ��RD buffer ������ַ:\t\t0x%x\n", g_strSocpStat.sEncSrcChan[u32RealId].sRdBuf.u32End);
        vos_printf("ͨ��RD buffer ��ָ��:\t\t0x%x\n", g_strSocpStat.sEncSrcChan[u32RealId].sRdBuf.u32Read);
        vos_printf("ͨ��RD buffer дָ��:\t\t0x%x\n", g_strSocpStat.sEncSrcChan[u32RealId].sRdBuf.u32Write);
        vos_printf("ͨ��RD buffer ����:\t\t0x%x\n", g_strSocpStat.sEncSrcChan[u32RealId].sRdBuf.u32Length);
    }

    return VOS_OK;
}

/*lint +e529*/

/*****************************************************************************
* �� �� ��   : SOCP_ShowEncSrcChanAdd
*
* ��������  : ��ӡ����Դͨ���ۼ�ͳ��ֵ
*
* �������  : ͨ��ID
*
* �������  : ��
*
* �� �� ֵ   : ��
*****************************************************************************/
VOS_UINT32 SOCP_ShowEncSrcChanAdd(VOS_UINT32 u32UniqueId)
{
    VOS_UINT32             u32ChanType;
    VOS_UINT32             u32RealChanID;
    SOCP_DEBUG_ENCSRC_STRU *sSocpAddDebugEncSrc;

    u32RealChanID   = SOCP_REAL_CHAN_ID(u32UniqueId);
    u32ChanType     = SOCP_REAL_CHAN_TYPE(u32UniqueId);

    SOCP_CHECK_CHAN_TYPE(u32ChanType, SOCP_CODER_SRC_CHAN);

    sSocpAddDebugEncSrc = &g_stSocpDebugInfo.sSocpDebugEncSrc;


    vos_printf("================== ����Դͨ�� 0x%x  �ۼ�ͳ��ֵ:=================\n",
            u32UniqueId);
    vos_printf("\r socp��������Դͨ���ɹ��Ĵ���                           : 0x%x\n",
           (VOS_INT32)sSocpAddDebugEncSrc->u32SocpStartEncSrcCnt[u32RealChanID]);
    vos_printf("\r socpֹͣ����Դͨ���ɹ��Ĵ���                           : 0x%x\n",
           (VOS_INT32)sSocpAddDebugEncSrc->u32SocpStopEncSrcCnt[u32RealChanID]);
    vos_printf("\r socpע�����Դͨ���쳣�������Ĵ���               : 0x%x\n",
           (VOS_INT32)sSocpAddDebugEncSrc->u32SocpRegEventEncSrcCnt[u32RealChanID]);
    vos_printf("\r socp����Դͨ�����Ի��дbuffer�Ĵ���                  : 0x%x\n",
           (VOS_INT32)sSocpAddDebugEncSrc->u32SocpGetWBufEncSrcEtrCnt[u32RealChanID]);
    vos_printf("\r socp����Դͨ�����дbuffer�ɹ��Ĵ���                  : 0x%x\n",
           (VOS_INT32)sSocpAddDebugEncSrc->u32SocpGetWBufEncSrcSucCnt[u32RealChanID]);
    vos_printf("\r socp����Դͨ�����Ը���дbufferָ��Ĵ���            : 0x%x\n",
           (VOS_INT32)sSocpAddDebugEncSrc->u32SocpWriteDoneEncSrcEtrCnt[u32RealChanID]);
    vos_printf("\r socp����Դͨ������дbufferָ��ɹ��Ĵ���            : 0x%x\n",
           (VOS_INT32)sSocpAddDebugEncSrc->u32SocpWriteDoneEncSrcSucCnt[u32RealChanID]);
    vos_printf("\r socp����Դͨ������дbufferָ��ʧ�ܵĴ���            : 0x%x\n",
           (VOS_INT32)sSocpAddDebugEncSrc->u32SocpWriteDoneEncSrcFailCnt[u32RealChanID]);
    vos_printf("\r socp����Դͨ�����Ի��RD buffer�Ĵ���                   : 0x%x\n",
           (VOS_INT32)sSocpAddDebugEncSrc->u32SocpGetRdBufEncSrcEtrCnt[u32RealChanID]);
    vos_printf("\r socp����Դͨ�����RD buffer�ɹ��Ĵ���                   : 0x%x\n",
           (VOS_INT32)sSocpAddDebugEncSrc->u32SocpGetRdBufEncSrcSucCnt[u32RealChanID]);
    vos_printf("\r socp����Դͨ�����Ը���RDbufferָ��Ĵ���              : 0x%x\n",
           (VOS_INT32)sSocpAddDebugEncSrc->u32SocpReadRdDoneEncSrcEtrCnt[u32RealChanID]);
    vos_printf("\r socp����Դͨ������RDbufferָ��ɹ��Ĵ���              : 0x%x\n",
           (VOS_INT32)sSocpAddDebugEncSrc->u32SocpReadRdDoneEncSrcSucCnt[u32RealChanID]);
    vos_printf("\r socp����Դͨ������RDbufferָ��ʧ�ܵĴ���              : 0x%x\n",
           (VOS_INT32)sSocpAddDebugEncSrc->u32SocpReadRdDoneEncSrcFailCnt[u32RealChanID]);
    vos_printf("\r socp ISR �н������Դͨ����ͷ�����жϴ���                  : 0x%x\n",
           (VOS_INT32)sSocpAddDebugEncSrc->u32SocpEncSrcIsrHeadIntCnt[u32RealChanID]);
    vos_printf("\r socp ISR �н������Դͨ��Rd ����жϴ���                     : 0x%x\n",
           (VOS_INT32)sSocpAddDebugEncSrc->u32SocpEncSrcIsrRdIntCnt[u32RealChanID]);

    return VOS_OK;
}

/*****************************************************************************
* �� �� ��   : SOCP_ShowEncSrcChanAll
*
* ��������  : ��ӡ���б���Դͨ����Ϣ
*
* �������  : ��
*
* �������  : ��
*
* �� �� ֵ   : ��
*****************************************************************************/
VOS_VOID SOCP_ShowEncSrcChanAll(VOS_VOID)
{
    VOS_UINT32 i;

    for (i=0; i<SOCP_MAX_ENCSRC_CHN; i++)
    {
        (VOS_VOID)SOCP_ShowEncSrcChanCur(i);
        (VOS_VOID)SOCP_ShowEncSrcChanAdd(i);
    }

    return;
}

#ifdef SOCP_ACORE
/*****************************************************************************
* �� �� ��   : SOCP_ShowEncDstSemInfo
*
* ��������  : ��ӡ����Ŀ��ͨ��Sem��Ϣ
*
* �������  : ��
*
* �������  : ��
*
* �� �� ֵ   : ��
*****************************************************************************/
VOS_VOID SOCP_ShowEncDstSemInfo(VOS_VOID)
{
    VOS_UINT8       ucLoop;
    VOS_UINT32      ulChannelId;

    for (ucLoop = 0; ucLoop < SOCP_MAX_ENCDST_CHN; ucLoop++)
    {
        if (0 == ucLoop)
        {
            ulChannelId = SOCP_CODER_DST_OM_CNF;
        }
        else
        {
            ulChannelId = SOCP_CODER_DST_OM_IND;
        }

        vos_printf("CH0 ��ʱд�볬ʱ�ͷ�:\t\t%d\n", g_stSocpDebugInfo.stSocpEncDstSemInfo[SOCP_REAL_CHAN_ID(ulChannelId)].ulTimerNum);
        vos_printf("CH0 ��ʱд�볬ʱ�ͷ�ʱ��:\t\t0x%x\n", g_stSocpDebugInfo.stSocpEncDstSemInfo[SOCP_REAL_CHAN_ID(ulChannelId)].ulTimerSlice);
        vos_printf("CH0 ��ʱд��flush�ͷ�:\t\t%d\n", g_stSocpDebugInfo.stSocpEncDstSemInfo[SOCP_REAL_CHAN_ID(ulChannelId)].ulFlushNum);
        vos_printf("CH0 ��ʱд��flush�ͷ�ʱ��:\t\t0x%x\n", g_stSocpDebugInfo.stSocpEncDstSemInfo[SOCP_REAL_CHAN_ID(ulChannelId)].ulFlushSlice);
        vos_printf("CH0 �ж��ͷ�:\t\t%d\n", g_stSocpDebugInfo.stSocpEncDstSemInfo[SOCP_REAL_CHAN_ID(ulChannelId)].ulIntNum);
        vos_printf("CH0 �ж��ͷ�ʱ��:\t\t0x%x\n", g_stSocpDebugInfo.stSocpEncDstSemInfo[SOCP_REAL_CHAN_ID(ulChannelId)].ulIntSlice);
        vos_printf("CH0 �����ȡʧ��:\t\t%d\n", g_stSocpDebugInfo.stSocpEncDstSemInfo[SOCP_REAL_CHAN_ID(ulChannelId)].ulTaskErrNum);
        vos_printf("CH0 �����ȡʧ��ʱ��:\t\t0x%x\n", g_stSocpDebugInfo.stSocpEncDstSemInfo[SOCP_REAL_CHAN_ID(ulChannelId)].ulTaskErrSlice);
        vos_printf("CH0 �����ȡ�ɹ�:\t\t%d\n", g_stSocpDebugInfo.stSocpEncDstSemInfo[SOCP_REAL_CHAN_ID(ulChannelId)].ulTaskNum);
        vos_printf("CH0 �����ȡ�ɹ�ʱ��:\t\t0x%x\n", g_stSocpDebugInfo.stSocpEncDstSemInfo[SOCP_REAL_CHAN_ID(ulChannelId)].ulTaskSlice);

    }

    return;
}

/*****************************************************************************
* �� �� ��   : SOCP_ShowEncDstChanCur
*
* ��������  : ��ӡ����Ŀ��ͨ����Ϣ
*
* �������  : ͨ��ID
*
* �������  : ��
*
* �� �� ֵ   : ��
*****************************************************************************/
VOS_UINT32 SOCP_ShowEncDstChanCur(VOS_UINT32 u32UniqueId)
{
    VOS_UINT32 u32RealId   = 0;
    VOS_UINT32 u32ChanType = 0;

    u32RealId   = SOCP_REAL_CHAN_ID(u32UniqueId);
    u32ChanType = SOCP_REAL_CHAN_TYPE(u32UniqueId);

    SOCP_CHECK_CHAN_TYPE(u32ChanType, SOCP_CODER_DEST_CHAN);

    vos_printf("================== ����Ŀ��ͨ�� 0x%x  ����:=================\n", u32UniqueId);
    vos_printf("ͨ��ID:\t\t%d\n", g_strSocpStat.sEncDstChan[u32RealId].u32ChanID);
    vos_printf("ͨ������״̬:\t\t%d\n", g_strSocpStat.sEncDstChan[u32RealId].u32SetStat);
    vos_printf("ͨ��buffer ��ʼ��ַ:\t\t0x%x\n", g_strSocpStat.sEncDstChan[u32RealId].sEncDstBuf.u32Start);
    vos_printf("ͨ��buffer ������ַ:\t\t0x%x\n", g_strSocpStat.sEncDstChan[u32RealId].sEncDstBuf.u32End);
    vos_printf("ͨ��buffer ��ָ��:\t\t0x%x\n", g_strSocpStat.sEncDstChan[u32RealId].sEncDstBuf.u32Read);
    vos_printf("ͨ��buffer дָ��:\t\t0x%x\n", g_strSocpStat.sEncDstChan[u32RealId].sEncDstBuf.u32Write);
    vos_printf("ͨ��buffer ����:\t\t0x%x\n", g_strSocpStat.sEncDstChan[u32RealId].sEncDstBuf.u32Length);

    return VOS_OK;
}

/*****************************************************************************
* �� �� ��   : SOCP_ShowEncDstChanAdd
*
* ��������  : ��ӡ����Ŀ��ͨ���ۼ�ͳ��ֵ
*
* �������  : ͨ��ID
*
* �������  : ��
*
* �� �� ֵ   : ��
*****************************************************************************/
VOS_UINT32 SOCP_ShowEncDstChanAdd(VOS_UINT32 u32UniqueId)
{
    VOS_UINT32              u32RealChanID;
    VOS_UINT32              u32ChanType = 0;
    SOCP_DEBUG_ENCDST_STRU *sSocpAddDebugEncDst;

    u32ChanType = SOCP_REAL_CHAN_TYPE(u32UniqueId);

    SOCP_CHECK_CHAN_TYPE(u32ChanType, SOCP_CODER_DEST_CHAN);

    u32RealChanID = SOCP_REAL_CHAN_ID(u32UniqueId);

    sSocpAddDebugEncDst = &g_stSocpDebugInfo.sSocpDebugEncDst;

    vos_printf("================== ����Ŀ��ͨ�� 0x%x  �ۼ�ͳ��ֵ:=================\n",
            u32UniqueId);
    vos_printf("\r socpע�����Ŀ��ͨ���쳣�������Ĵ���           : 0x%x\n",
           (VOS_INT32)sSocpAddDebugEncDst->u32SocpRegEventEncDstCnt[u32RealChanID]);
    vos_printf("\r socp����Ŀ��ͨ��ע������ݻص������ɹ��Ĵ���   : 0x%x\n",
           (VOS_INT32)sSocpAddDebugEncDst->u32SocpRegReadCBEncDstCnt[u32RealChanID]);
    vos_printf("\r socp����Ŀ��ͨ�����Ի�ö�buffer �Ĵ���                : 0x%x\n",
           (VOS_INT32)sSocpAddDebugEncDst->u32SocpGetReadBufEncDstEtrCnt[u32RealChanID]);
    vos_printf("\r socp����Ŀ��ͨ����ö�buffer�ɹ��Ĵ���                : 0x%x\n",
           (VOS_INT32)sSocpAddDebugEncDst->u32SocpGetReadBufEncDstSucCnt[u32RealChanID]);
    vos_printf("\r socp����Ŀ��ͨ�����Ը��¶�bufferָ��Ĵ���          : 0x%x\n",
           (VOS_INT32)sSocpAddDebugEncDst->u32SocpReadDoneEncDstEtrCnt[u32RealChanID]);
    vos_printf("\r socp����Ŀ��ͨ�����¶�bufferָ��ɹ��Ĵ���          : 0x%x\n",
           (VOS_INT32)sSocpAddDebugEncDst->u32SocpReadDoneEncDstSucCnt[u32RealChanID]);
    vos_printf("\r socp����Ŀ��ͨ�����¶�bufferָ��ʧ�ܵĴ���          : 0x%x\n",
           (VOS_INT32)sSocpAddDebugEncDst->u32SocpReadDoneEncDstFailCnt[u32RealChanID]);
    vos_printf("\r socp����Ŀ��ͨ�����¶�bufferָ���ƶ���0 �ֽڳɹ��Ĵ���    : 0x%x\n",
           (VOS_INT32)sSocpAddDebugEncDst->u32SocpReadDoneValidEncDstCnt[u32RealChanID]);
    vos_printf("\r socpISR �н������Ŀ��ͨ����������жϴ���  : 0x%x\n",
           (VOS_INT32)sSocpAddDebugEncDst->u32SocpEncDstIsrTrfIntCnt[u32RealChanID]);
    vos_printf("\r socpISR �н������Ŀ��ͨ����������жϣ���ͨ���쳣��ͳ�ƴ���  : 0x%x\n",
           (VOS_INT32)sSocpAddDebugEncDst->u32SocpEncDstIsrTrfIntINvalidChannelCnt[u32RealChanID]);
    vos_printf("\r socp�����лص�����Ŀ��ͨ����������жϴ���������  : 0x%x\n",
           (VOS_INT32)sSocpAddDebugEncDst->u32SocpEncDstTskTrfCbOriCnt[u32RealChanID]);
    vos_printf("\r socp�ص�����Ŀ��ͨ����������жϴ������ɹ��Ĵ���  : 0x%x\n",
           (VOS_INT32)sSocpAddDebugEncDst->u32SocpEncDstTskTrfCbCnt[u32RealChanID]);
    vos_printf("\r socp�����лص�����Ŀ��ͨ��buf ����жϴ���������    : 0x%x\n",
           (VOS_INT32)sSocpAddDebugEncDst->u32SocpEncDstTskOvfCbOriCnt[u32RealChanID]);
    vos_printf("\r socp�ص�����Ŀ��ͨ��buf ����жϴ������ɹ��Ĵ���    : 0x%x\n",
           (VOS_INT32)sSocpAddDebugEncDst->u32SocpEncDstTskOvfCbCnt[u32RealChanID]);
    vos_printf("\r socpISR �н������Ŀ��ͨ��buf��ֵ����жϴ���    : 0x%x\n",
           (VOS_INT32)sSocpAddDebugEncDst->u32SocpEncDstIsrThresholdOvfIntCnt[u32RealChanID]);
    vos_printf("\r socp�����лص�����Ŀ��ͨ��buf��ֵ����жϴ���������    : 0x%x\n",
           (VOS_INT32)sSocpAddDebugEncDst->u32SocpEncDstTskThresholdOvfCbOriCnt[u32RealChanID]);
    vos_printf("\r socp�ص�����Ŀ��ͨ��buf��ֵ����жϴ������ɹ��Ĵ���    : 0x%x\n",
           (VOS_INT32)sSocpAddDebugEncDst->u32SocpEncDstTskThresholdOvfCbCnt[u32RealChanID]);
    vos_printf("\r socp����Ŀ��ͨ����ӦAT^LOGSAVE������������log����    : 0x%x\n",
           (VOS_INT32)sSocpAddDebugEncDst->u32SocpEncDstLogSaveOriCnt[u32RealChanID]);
    vos_printf("\r socp����Ŀ��ͨ����ӦAT^LOGSAVE������������log��ɴ���    : 0x%x\n",
           (VOS_INT32)sSocpAddDebugEncDst->u32SocpEncDstLogSaveCnt[u32RealChanID]);

    return VOS_OK;
}

/*****************************************************************************
* �� �� ��   : SOCP_ShowEncDstChanAll
*
* ��������  : ��ӡ����Ŀ��ͨ����Ϣ
*
* �������  : ��
*
* �������  : ��
*
* �� �� ֵ   : ��
*****************************************************************************/
VOS_VOID SOCP_ShowEncDstChanAll(VOS_VOID)
{
    VOS_UINT32 i;
    VOS_UINT32 u32UniqueId = 0;

    for (i = 0; i < SOCP_MAX_ENCDST_CHN; i++)
    {
        u32UniqueId = SOCP_CHAN_DEF(SOCP_CODER_DEST_CHAN, i);
        (VOS_VOID)SOCP_ShowEncDstChanCur(u32UniqueId);
        (VOS_VOID)SOCP_ShowEncDstChanAdd(u32UniqueId);
    }

    return;
}

/*****************************************************************************
* �� �� ��   : SOCP_ShowDecSrcChanCur
*
* ��������  : ��ӡ����Դͨ����Ϣ
*
* �������  : ͨ��ID
*
* �������  : ��
*
* �� �� ֵ   : ��
*****************************************************************************/
VOS_UINT32 SOCP_ShowDecSrcChanCur(VOS_UINT32 u32UniqueId)
{
    VOS_UINT32 u32RealId   = 0;
    VOS_UINT32 u32ChanType = 0;

    u32RealId   = SOCP_REAL_CHAN_ID(u32UniqueId);
    u32ChanType = SOCP_REAL_CHAN_TYPE(u32UniqueId);

    SOCP_CHECK_CHAN_TYPE(u32ChanType, SOCP_DECODER_SRC_CHAN);

    vos_printf("================== ����Դͨ�� 0x%x  ����:=================\n", u32UniqueId);
    vos_printf("ͨ��ID:\t\t%d\n",               g_strSocpStat.sDecSrcChan[u32RealId].u32ChanID);
    vos_printf("ͨ������״̬:\t\t%d\n",         g_strSocpStat.sDecSrcChan[u32RealId].u32SetStat);
    vos_printf("ͨ��ʹ��״̬:\t\t%d\n",         g_strSocpStat.sDecSrcChan[u32RealId].u32ChanEn);
    vos_printf("ͨ��ģʽ:\t\t%d\n",             g_strSocpStat.sDecSrcChan[u32RealId].eChnMode);
    vos_printf("ͨ��buffer ��ʼ��ַ:\t\t0x%x\n",g_strSocpStat.sDecSrcChan[u32RealId].sDecSrcBuf.u32Start);
    vos_printf("ͨ��buffer ������ַ:\t\t0x%x\n",g_strSocpStat.sDecSrcChan[u32RealId].sDecSrcBuf.u32End);
    vos_printf("ͨ��buffer ��ָ��:\t\t0x%x\n",  g_strSocpStat.sDecSrcChan[u32RealId].sDecSrcBuf.u32Read);
    vos_printf("ͨ��buffer дָ��:\t\t0x%x\n",  g_strSocpStat.sDecSrcChan[u32RealId].sDecSrcBuf.u32Write);
    vos_printf("ͨ��buffer ����:\t\t0x%x\n",    g_strSocpStat.sDecSrcChan[u32RealId].sDecSrcBuf.u32Length);

    return VOS_OK;
}

/*****************************************************************************
* �� �� ��   : SOCP_ShowDecSrcChanAdd
*
* ��������  : ��ӡ����Դͨ���ۼ�ͳ��ֵ
*
* �������  : ͨ��ID
*
* �������  : ��
*
* �� �� ֵ   : ��
*****************************************************************************/
VOS_UINT32 SOCP_ShowDecSrcChanAdd(VOS_UINT32 u32UniqueId)
{
    VOS_UINT32             u32RealChanID;
    SOCP_DEBUG_DECSRC_STRU *sSocpAddDebugDecSrc;
    VOS_UINT32             u32ChanType = 0;

    u32ChanType = SOCP_REAL_CHAN_TYPE(u32UniqueId);

    SOCP_CHECK_CHAN_TYPE(u32ChanType, SOCP_DECODER_SRC_CHAN);

    u32RealChanID = SOCP_REAL_CHAN_ID(u32UniqueId);

    sSocpAddDebugDecSrc = &g_stSocpDebugInfo.sSocpDebugDecSrc;

    vos_printf("================== ����Դͨ�� 0x%x  �ۼ�ͳ��ֵ:=================\n",
            u32UniqueId);
    vos_printf("\r socp��������Դͨ���ɹ��Ĵ���                           : 0x%x\n",
           (VOS_INT32)sSocpAddDebugDecSrc->u32SocpStartDecSrcCnt[u32RealChanID]);
    vos_printf("\r socpֹͣ����Դͨ���ɹ��Ĵ���                           : 0x%x\n",
           (VOS_INT32)sSocpAddDebugDecSrc->u32SocpStopDecSrcCnt[u32RealChanID]);
    vos_printf("\r socpע�����Դͨ���쳣�������Ĵ���              : 0x%x\n",
           (VOS_INT32)sSocpAddDebugDecSrc->u32SocpRegEventDecSrcCnt[u32RealChanID]);
    vos_printf("\r socp����Դͨ�����Ի��дbuffer�Ĵ���                  : 0x%x\n",
           (VOS_INT32)sSocpAddDebugDecSrc->u32SocpGetWBufDecSrcEtrCnt[u32RealChanID]);
    vos_printf("\r socp����Դͨ�����дbuffer�ɹ��Ĵ���                  : 0x%x\n",
           (VOS_INT32)sSocpAddDebugDecSrc->u32SocpGetWBufDecSrcSucCnt[u32RealChanID]);
    vos_printf("\r socp����Դͨ�����Ը���дbufferָ��Ĵ���            : 0x%x\n",
           (VOS_INT32)sSocpAddDebugDecSrc->u32SocpWriteDoneDecSrcEtrCnt[u32RealChanID]);
    vos_printf("\r socp����Դͨ������дbufferָ��ɹ��Ĵ���            : 0x%x\n",
           (VOS_INT32)sSocpAddDebugDecSrc->u32SocpWriteDoneDecSrcSucCnt[u32RealChanID]);
    vos_printf("\r socp����Դͨ������дbufferָ��ʧ�ܵĴ���            : 0x%x\n",
           (VOS_INT32)sSocpAddDebugDecSrc->u32SocpWriteDoneDecSrcFailCnt[u32RealChanID]);
    vos_printf("\r socpISR �н������Դͨ�������жϴ���                      : 0x%x\n",
           (VOS_INT32)sSocpAddDebugDecSrc->u32SocpDecSrcIsrErrIntCnt[u32RealChanID]);

    return VOS_OK;
}

/*****************************************************************************
* �� �� ��   : SOCP_ShowDecSrcChanAll
*
* ��������  : ��ӡ����Դͨ����Ϣ
*
* �������  : ��
*
* �������  : ��
*
* �� �� ֵ   : ��
*****************************************************************************/
VOS_VOID SOCP_ShowDecSrcChanAll(VOS_VOID)
{
    VOS_UINT32 i;
    VOS_UINT32 u32UniqueId = 0;

    for (i = 0; i < SOCP_MAX_DECSRC_CHN; i++)
    {
        u32UniqueId = SOCP_CHAN_DEF(SOCP_DECODER_SRC_CHAN, i);
        (VOS_VOID)SOCP_ShowDecSrcChanCur(u32UniqueId);
        (VOS_VOID)SOCP_ShowDecSrcChanAdd(u32UniqueId);
    }

    return;
}

/*****************************************************************************
* �� �� ��   : SOCP_ShowDecDstChanCur
*
* ��������  : ��ӡ����Ŀ��ͨ����Ϣ
*
* �������  : ͨ��ID
*
* �������  : ��
*
* �� �� ֵ   : ��
*****************************************************************************/
VOS_UINT32 SOCP_ShowDecDstChanCur(VOS_UINT32 u32UniqueId)
{
    VOS_UINT32 u32RealId   = 0;
    VOS_UINT32 u32ChanType = 0;

    u32RealId   = SOCP_REAL_CHAN_ID(u32UniqueId);
    u32ChanType = SOCP_REAL_CHAN_TYPE(u32UniqueId);

    SOCP_CHECK_CHAN_TYPE(u32ChanType, SOCP_DECODER_DEST_CHAN);

    vos_printf("================== ����Ŀ��ͨ�� 0x%x  ����:=================\n", u32UniqueId);
    vos_printf("ͨ��ID:\t\t%d\n",               g_strSocpStat.sDecDstChan[u32RealId].u32ChanID);
    vos_printf("ͨ��ʹ��ģ����:\t\t%d\n",       g_strSocpStat.sDecDstChan[u32RealId].eDataType);
    vos_printf("ͨ��buffer ��ʼ��ַ:\t\t0x%x\n",g_strSocpStat.sDecDstChan[u32RealId].sDecDstBuf.u32Start);
    vos_printf("ͨ��buffer ������ַ:\t\t0x%x\n",g_strSocpStat.sDecDstChan[u32RealId].sDecDstBuf.u32End);
    vos_printf("ͨ��buffer ��ָ��:\t\t0x%x\n",  g_strSocpStat.sDecDstChan[u32RealId].sDecDstBuf.u32Read);
    vos_printf("ͨ��buffer дָ��:\t\t0x%x\n",  g_strSocpStat.sDecDstChan[u32RealId].sDecDstBuf.u32Write);
    vos_printf("ͨ��buffer ����:\t\t0x%x\n",    g_strSocpStat.sDecDstChan[u32RealId].sDecDstBuf.u32Length);

    return VOS_OK;
}

/*****************************************************************************
* �� �� ��   : SOCP_ShowDecDstChanAdd
*
* ��������  : ��ӡ����Ŀ��ͨ���ۼ�ͳ��ֵ
*
* �������  : ͨ��ID
*
* �������  : ��
*
* �� �� ֵ   : ��
*****************************************************************************/
VOS_UINT32 SOCP_ShowDecDstChanAdd(VOS_UINT32 u32UniqueId)
{
    VOS_UINT32             u32RealChanID;
    SOCP_DEBUG_DECDST_STRU *sSocpAddDebugDecDst;
    VOS_UINT32             u32ChanType = 0;

    u32ChanType = SOCP_REAL_CHAN_TYPE(u32UniqueId);

    SOCP_CHECK_CHAN_TYPE(u32ChanType, SOCP_DECODER_DEST_CHAN);

    u32RealChanID = SOCP_REAL_CHAN_ID(u32UniqueId);

    sSocpAddDebugDecDst = &g_stSocpDebugInfo.sSocpDebugDecDst;

    vos_printf("================== ����Ŀ��ͨ�� 0x%x  �ۼ�ͳ��ֵ:=================\n",
            u32UniqueId);
    vos_printf("\r socpע�����Ŀ��ͨ���쳣�������Ĵ���           : 0x%x\n",
           (VOS_INT32)sSocpAddDebugDecDst->u32SocpRegEventDecDstCnt[u32RealChanID]);
    vos_printf("\r socp����Ŀ��ͨ��ע������ݻص������ɹ��Ĵ���   : 0x%x\n",
           (VOS_INT32)sSocpAddDebugDecDst->u32SocpRegReadCBDecDstCnt[u32RealChanID]);
    vos_printf("\r socp����Ŀ��ͨ�����Ի�ö�buffer�Ĵ���                : 0x%x\n",
           (VOS_INT32)sSocpAddDebugDecDst->u32SocpGetReadBufDecDstEtrCnt[u32RealChanID]);
    vos_printf("\r socp����Ŀ��ͨ����ö�buffer�ɹ��Ĵ���                : 0x%x\n",
           (VOS_INT32)sSocpAddDebugDecDst->u32SocpGetReadBufDecDstSucCnt[u32RealChanID]);
    vos_printf("\r socp����Ŀ��ͨ�����Ը��¶�bufferָ��Ĵ���          : 0x%x\n",
           (VOS_INT32)sSocpAddDebugDecDst->u32SocpReadDoneDecDstEtrCnt[u32RealChanID]);
    vos_printf("\r socp����Ŀ��ͨ�����¶�bufferָ��ɹ��Ĵ���          : 0x%x\n",
           (VOS_INT32)sSocpAddDebugDecDst->u32SocpReadDoneDecDstSucCnt[u32RealChanID]);
    vos_printf("\r socp����Ŀ��ͨ�����¶�bufferָ��ʧ�ܵĴ���          : 0x%x\n",
           (VOS_INT32)sSocpAddDebugDecDst->u32SocpReadDoneDecDstFailCnt[u32RealChanID]);
    vos_printf("\r socp����Ŀ��ͨ�����¶�bufferָ���ƶ�0 �ֽڳɹ��Ĵ���   : 0x%x\n",
           (VOS_INT32)sSocpAddDebugDecDst->u32SocpReadDoneZeroDecDstCnt[u32RealChanID]);
    vos_printf("\r socp����Ŀ��ͨ�����¶�bufferָ���ƶ���0 �ֽڳɹ��Ĵ���: 0x%x\n",
           (VOS_INT32)sSocpAddDebugDecDst->u32SocpReadDoneValidDecDstCnt[u32RealChanID]);
    vos_printf("\r socpISR �н������Ŀ��ͨ����������жϴ���                : 0x%x\n",
           (VOS_INT32)sSocpAddDebugDecDst->u32SocpDecDstIsrTrfIntCnt[u32RealChanID]);
    vos_printf("\r socpISR �н������Ŀ��ͨ��buf ����жϴ���                  : 0x%x\n",
           (VOS_INT32)sSocpAddDebugDecDst->u32SocpDecDstIsrOvfIntCnt[u32RealChanID]);

    return VOS_OK;
}

/*****************************************************************************
* �� �� ��   : SOCP_ShowDecDstChanAll
*
* ��������  : ��ӡ����Ŀ��ͨ����Ϣ
*
* �������  : ��
*
* �������  : ��
*
* �� �� ֵ   : ��
*****************************************************************************/
VOS_VOID SOCP_ShowDecDstChanAll(VOS_VOID)
{
    VOS_UINT32 i;
    VOS_UINT32 u32UniqueId = 0;

    for (i = 0; i < SOCP_MAX_DECDST_CHN; i++)
    {
        u32UniqueId = SOCP_CHAN_DEF(SOCP_DECODER_DEST_CHAN, i);
        (VOS_VOID)SOCP_ShowDecDstChanCur(u32UniqueId);
        (VOS_VOID)SOCP_ShowDecDstChanAdd(u32UniqueId);
    }

    return;
}

/*****************************************************************************
* �� �� ��   : SOCP_ShowDecDstChanAll
*
* ��������  : ��ӡ����Ŀ��ͨ����Ϣ
*
* �������  : ��
*
* �������  : ��
*
* �� �� ֵ   : ��
*****************************************************************************/
VOS_VOID SOCP_ShowSDLogInfo(VOS_VOID)
{
    SOCP_ENC_DST_BUF_LOG_CFG_STRU      *pstcfg;
    VOS_UINT8                           ucLoop;
    VOS_UINT32                          ulChannelId;

    pstcfg = SocpGetSDLogCfg();

    vos_printf("\r\n The SD Log Flag is         %d",    pstcfg->logOnFlag);
    vos_printf("\r\n The Over Time is           %d ms", pstcfg->overTime);

    for (ucLoop = 0; ucLoop < SOCP_MAX_ENCDST_CHN; ucLoop++)
    {
        if (0 == ucLoop)
        {
            ulChannelId = SOCP_CODER_DST_OM_CNF;
        }
        else
        {
            ulChannelId = SOCP_CODER_DST_OM_IND;
        }

        vos_printf("\r\n EncDstCh0 Start Time num is   %d", g_stSocpDebugInfo.stSocpSDLogInfo[SOCP_REAL_CHAN_ID(ulChannelId)].ulStartTimeNum);
        vos_printf("\r\n EncDstCh0 Time Out Run Num is %d", g_stSocpDebugInfo.stSocpSDLogInfo[SOCP_REAL_CHAN_ID(ulChannelId)].ulEncDstRunNum);
        vos_printf("\r\n EncDstCh0 Flush num is        %d", g_stSocpDebugInfo.stSocpSDLogInfo[SOCP_REAL_CHAN_ID(ulChannelId)].ulFlushBufferNum);
        vos_printf("\r\n EncDstCh0 Flush Time Out is   %d", g_stSocpDebugInfo.stSocpSDLogInfo[SOCP_REAL_CHAN_ID(ulChannelId)].ulFlushTimeOutNum);
        vos_printf("\r\n");
    }

    return;
}

#endif

/*****************************************************************************
* �� �� ��   : SOCP_debugCntShow
*
* ��������  : ��ʾdebug ������Ϣ
*
* �������  : ��
*
* �������  : ��
*
* �� �� ֵ   : ��
*****************************************************************************/
VOS_VOID SOCP_debugCntShow(VOS_VOID)
{
    SOCP_ShowDebugGbl();
    SOCP_ShowEncSrcChanAll();
#ifdef SOCP_ACORE
    SOCP_ShowEncDstChanAll();
    SOCP_ShowDecSrcChanAll();
    SOCP_ShowDecDstChanAll();
#endif

    return;
}

/*****************************************************************************
 �� �� ��  : SOCP_Stop1SrcChan
 ��������  : disable һ��SOCP����Դͨ��
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
VOS_VOID SOCP_Stop1SrcChan(VOS_UINT32 ulSrcChanID)
{
    VOS_UINT32                          ulRealChanID;

    /* ��ȡ��ʵͨ��ID */

    ulRealChanID = SOCP_REAL_CHAN_ID(ulSrcChanID);

    /* ����ͨ���ر� */
    SOCP_REG_SETBITS(SOCP_REG_ENCSRC_BUFCFG1(ulRealChanID), 0, 1, 0);

    return ;
}


VOS_VOID SOCP_LogToFile(FILE *fp)
{
    mdrv_file_write((VOS_VOID*)&g_strSocpStat, sizeof(VOS_CHAR), sizeof(g_strSocpStat), fp);
    mdrv_file_write((VOS_VOID*)&g_stSocpDebugInfo, sizeof(VOS_CHAR), sizeof(g_stSocpDebugInfo), fp);
}


VOS_UINT8* SOCP_GetDebugLogInfo(VOS_UINT32  ulType)
{
    /* 1��ʾ socp statue */
    if (1 == ulType)
    {
        return (VOS_UINT8*)&g_strSocpStat;
    }
    /* �����ʾDebug Info */
    return (VOS_UINT8*)&g_stSocpDebugInfo;
}


VOS_UINT32 SOCP_GetDebugLogInfoLen(VOS_UINT32  ulType)
{
    /* 1��ʾ socp statue */
    if (1 == ulType)
    {
        return (VOS_UINT32)sizeof(g_strSocpStat);
    }

    /* �����ʾDebug Info */
    return (VOS_UINT32)sizeof(g_stSocpDebugInfo);
}
/*lint +e662 +e661*/

#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif
