/******************************************************************************

                  ��Ȩ���� (C), 2001-2011, ��Ϊ�������޹�˾

 ******************************************************************************
  �� �� ��   : AdsCtx.c
  �� �� ��   : ����
  ��    ��   : ³��/l60609
  ��������   : 2011��12��6��
  ����޸�   :
  ��������   : ADS�����Ĺ���
  �����б�   :
  �޸���ʷ   :
  1.��    ��   : 2011��12��6��
    ��    ��   : ³��/l60609
    �޸�����   : �����ļ�

******************************************************************************/

/*****************************************************************************
  1 ͷ�ļ�����
*****************************************************************************/
#include "AdsCtx.h"
#include "AdsUpLink.h"
#include "AdsDownLink.h"
#include "AdsFilter.h"
#include "AdsDebug.h"
#include "mdrv.h"
#include "NasNvInterface.h"
#include "TafNvInterface.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif

/*****************************************************************************
    Э��ջ��ӡ��㷽ʽ�µ�.C�ļ��궨��
*****************************************************************************/
/*lint -e767*/
#define    THIS_FILE_ID                 PS_FILE_ID_ADS_CTX_C
/*lint +e767*/

/*****************************************************************************
  2 ȫ�ֱ�������
*****************************************************************************/

VOS_UINT32                              g_ulAdsULTaskId        = 0;  /* ADS��������ID */
VOS_UINT32                              g_ulAdsDLTaskId        = 0;  /* ADS��������ID */
VOS_UINT32                              g_ulAdsULTaskReadyFlag = 0;  /* ADS������������״̬ */
VOS_UINT32                              g_ulAdsDLTaskReadyFlag = 0;  /* ADS������������״̬ */

/* ADSģ��������� */
ADS_CTX_STRU                            g_stAdsCtx;

/*****************************************************************************
  3 ����ʵ��
*****************************************************************************/
/*****************************************************************************
 �� �� ��  : ADS_IsValidRabId
 ��������  : ���RabId���Ƿ�Ϊ��Чֵ
 �������  : VOS_UINT8 ucRabId
 �������  : ��
 �� �� ֵ  : VOS_UINT32
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2011��12��12��
    ��    ��   : ³��/l60609
    �޸�����   : �����ɺ���

*****************************************************************************/
VOS_UINT32 ADS_IsValidRabId(VOS_UINT8 ucRabId)
{

    /* RabId����ЧֵΪ{5,15} */
    if ((ucRabId < ADS_RAB_ID_MIN)
     || ( ucRabId > ADS_RAB_ID_MAX))
    {
        ADS_ERROR_LOG1(ACPU_PID_ADS_UL, "ADS_IsValidRabId: ucRabId is", ucRabId);
        return VOS_ERR;
    }
    else
    {
        return VOS_OK;
    }
}

/* Modified by l60609 for DSDA Phase II, 2012-11-24, Begin */

/*****************************************************************************
 �� �� ��  : ADS_UL_GetSpecInstanceSndPermitFlg
 ��������  : ָ��ʵ��������RAB�Ƿ�������
 �������  : VOS_UINT8 ucInstanceIndex
 �������  : ��
 �� �� ֵ  : VOS_TRUE ��RAB������
             VOS_TRUE ����RAB����������
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2012��12��5��
    ��    ��   : l60609
    �޸�����   : �����ɺ���

*****************************************************************************/
VOS_UINT32 ADS_UL_GetSpecInstanceSndPermitFlg(VOS_UINT8 ucInstanceIndex)
{
    VOS_UINT8                           i;
    ADS_SPEC_CTX_STRU                  *pstAdsSpecCtx = VOS_NULL_PTR;

    pstAdsSpecCtx = &(g_stAdsCtx.astAdsSpecCtx[ucInstanceIndex]);

    /* ���Ҹ�ʵ����ÿ��RAB���� */
    for (i = ADS_RAB_ID_MIN; i < (ADS_RAB_ID_MAX + 1); i++)
    {
        /* ������Ч*/
        if (VOS_TRUE == pstAdsSpecCtx->stAdsUlCtx.astAdsUlQueue[i].ucIsQueueValid)
        {
            /* ���������� */
            if (VOS_TRUE == pstAdsSpecCtx->stAdsUlCtx.astAdsUlQueue[i].ucRabSndPermitFlg)
            {
                return VOS_TRUE;
            }
        }
    }

    return VOS_FALSE;
}

/*****************************************************************************
 �� �� ��  : ADS_UL_IsAllRabNotSndPermitFlg
 ��������  : �ж��Ƿ����е�RAB���������ͣ�����Ƿ���VOS_TRUE�����򷵻�VOS_FALSE
 �������  : VOS_VOID
 �������  : ��
 �� �� ֵ  : VOS_UINT32
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2012��11��27��
    ��    ��   : l60609
    �޸�����   : �����ɺ���

*****************************************************************************/
VOS_UINT32 ADS_UL_IsAllRabNotSndPermitFlg(VOS_VOID)
{
    VOS_UINT8                           i;

    /* ��������ʵ�� */
    for (i = 0; i < ADS_INSTANCE_MAX_NUM; i++)
    {
        if (VOS_TRUE == ADS_UL_GetSpecInstanceSndPermitFlg(i))
        {
            return VOS_FALSE;
        }
    }

    return VOS_TRUE;
}

/* Added by l60609 for AP������Ŀ ��2012-08-31 Begin */
/*****************************************************************************
 �� �� ��  : ADS_UL_CheckAllQueueEmpty
 ��������  : ���е�PDP��ȥ�������Ϊ��
 �������  : VOS_UINT8 ucInstanceIndex
 �������  : ��
 �� �� ֵ  : VOS_UINT32
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2012��8��31��
    ��    ��   : l60609
    �޸�����   : �����ɺ���

  2.��    ��   : 2012��11��24��
    ��    ��   : l60609
    �޸�����   : DSDA Phase II:˫ʵ��

*****************************************************************************/
VOS_UINT32 ADS_UL_CheckAllQueueEmpty(VOS_UINT8 ucInstanceIndex)
{
    VOS_UINT32                          i;
    ADS_UL_CTX_STRU                    *pstAdsUlCtx = VOS_NULL_PTR;

    pstAdsUlCtx = ADS_GetUlCtx(ucInstanceIndex);

    for (i = ADS_RAB_ID_MIN; i < ADS_RAB_ID_MAX + 1; i++)
    {
        if (VOS_FALSE != pstAdsUlCtx->astAdsUlQueue[i].ucIsQueueValid)
        {
            break;
        }
    }

    /* ���е�PDP��ȥ���*/
    if ((ADS_RAB_ID_MAX + 1) != i)
    {
        return VOS_FALSE;
    }

    return VOS_TRUE;
}
/* Added by l60609 for AP������Ŀ ��2012-08-31 End */
/* Modified by l60609 for DSDA Phase II, 2012-11-24, End */

VOS_VOID ADS_UL_SetProtectTmrLen(VOS_UINT32 ulTimerLen)
{
    /* Modified by l60609 for DSDA Phase II, 2012-11-24, Begin */
    g_stAdsCtx.stAdsIpfCtx.ulProtectTmrLen = ulTimerLen;
    /* Modified by l60609 for DSDA Phase II, 2012-11-24, End */

    return;
}

/* Modified by l60609 for DSDA Phase II, 2012-11-24, Begin */
/*****************************************************************************
 �� �� ��  : ADS_UL_IsQueueExistent
 ��������  : �ж϶����Ƿ����
 �������  : VOS_UINT8                           ucInstanceIndex,
             VOS_UINT8                           ucRabId
 �������  : ��
 �� �� ֵ  : VOS_UINT32
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2011��12��12��
    ��    ��   : ³��/l60609
    �޸�����   : �����ɺ���

  2.��    ��   : 2012��11��24��
    ��    ��   : l60609
    �޸�����   : DSDA Phase II:˫ʵ��
*****************************************************************************/
VOS_UINT32 ADS_UL_IsQueueExistent(
    VOS_UINT8                           ucInstanceIndex,
    VOS_UINT8                           ucRabId
)
{
    /* ����Ϊ�� */
    if (VOS_NULL_PTR == ADS_UL_GET_QUEUE_LINK_PTR(ucInstanceIndex, ucRabId))
    {
        ADS_WARNING_LOG(ACPU_PID_ADS_UL, "ADS_UL_IsQueueExistent: g_stAdsCtx.stAdsUlCtx.astAdsUlQueue[ulIndex].pstAdsUlLink is NULL");
        return VOS_ERR;
    }
    else
    {
        return VOS_OK;
    }
}
VOS_UINT32 ADS_UL_IsAnyQueueExist(VOS_UINT8 ucInstance)
{
    VOS_UINT8                           ucRabId;

    for (ucRabId = ADS_RAB_ID_MIN; ucRabId <= ADS_RAB_ID_MAX; ucRabId++)
    {
        if (VOS_OK == ADS_UL_IsQueueExistent(ucInstance, ucRabId))
        {
            return VOS_TRUE;
        }
    }

    return VOS_FALSE;
}


VOS_UINT32 ADS_UL_InsertQueue(
    VOS_UINT8                           ucInstanceIndex,
    IMM_ZC_STRU                        *pstData,
    VOS_UINT8                           ucRabId
)
{
    VOS_UINT32                          ulNonEmptyEvent;
    VOS_UINT32                          ulAllUlQueueDataNum;
#if(FEATURE_OFF == FEATURE_SKB_EXP)
    VOS_UINT                            ulQueueLen;
#endif
    VOS_ULONG                           ulLockLevel;

    ulNonEmptyEvent = VOS_FALSE;

    /* �˽ӿڲ��ͷ�pstData�����ϲ�ģ����ݺ�������ֵ�ж��Ƿ���Ҫ�ͷ��ڴ� */
    /* �ж�RabId�Ƿ�Ϊ��Чֵ */
    if (VOS_OK != ADS_IsValidRabId(ucRabId))
    {
        ADS_WARNING_LOG1(ACPU_PID_ADS_UL, "ADS_UL_InsertQueue: ucRabId is", ucRabId);
        return VOS_ERR;
    }

    /* ���м��� */
    /*lint -e571*/
    VOS_SpinLockIntLock(ADS_UL_GET_QUEUE_LINK_SPINLOCK(ucInstanceIndex, ucRabId), ulLockLevel);
    /*lint +e571*/

    /* �����ڣ������в����� */
    if (VOS_OK != ADS_UL_IsQueueExistent(ucInstanceIndex, ucRabId))
    {
        /* ���в�����ɽ��� */
        VOS_SpinUnlockIntUnlock(ADS_UL_GET_QUEUE_LINK_SPINLOCK(ucInstanceIndex, ucRabId), ulLockLevel);
        ADS_WARNING_LOG(ACPU_PID_ADS_UL, "ADS_UL_InsertQueue:the queue is not ext!");
        return VOS_ERR;
    }

#if(FEATURE_OFF == FEATURE_SKB_EXP)
    ulQueueLen = IMM_ZcQueueLen(ADS_UL_GET_QUEUE_LINK_PTR(ucInstanceIndex, ucRabId));

    if (ulQueueLen >= ADS_UL_GET_MAX_QUEUE_LENGTH(ucInstanceIndex))
    {
        /* ���в�����ɽ��� */
        VOS_SpinUnlockIntUnlock(ADS_UL_GET_QUEUE_LINK_SPINLOCK(ucInstanceIndex, ucRabId), ulLockLevel);
        ADS_DBG_UL_DROPPED_PACKET_NUM(1);
        return VOS_ERR;
    }

    /* �������ǰ�����ݴ���ʱ��� */
    pstData->tstamp.tv64 = (VOS_INT64)VOS_GetSlice();
#endif

    /* ������� */
    IMM_ZcQueueTail(ADS_UL_GET_QUEUE_LINK_PTR(ucInstanceIndex, ucRabId), pstData);

    /* �����ɿձ�Ϊ�ǿ� */
    if (1 == IMM_ZcQueueLen(ADS_UL_GET_QUEUE_LINK_PTR(ucInstanceIndex, ucRabId)))
    {
        ulNonEmptyEvent = VOS_TRUE;
    }

    /* ���в�����ɽ��� */
    VOS_SpinUnlockIntUnlock(ADS_UL_GET_QUEUE_LINK_SPINLOCK(ucInstanceIndex, ucRabId), ulLockLevel);

    ulAllUlQueueDataNum = ADS_UL_GetAllQueueDataNum();

#if(FEATURE_OFF == FEATURE_SKB_EXP)
    if (VOS_TRUE == ADS_UL_GET_THRESHOLD_ACTIVE_FLAG())
    {
        /* (1).jiffies��ʱ,��ֱ�Ӵ�������,��ֹͣ������ʱ��
           (2).�����������ѵ��ܰ������ҵ�ǰû���ڴ�������,�������л��滺�洦���¼�
           (3).�����ɿձ�Ϊ�ǿ�ʱ��������ͳ�ƶ�ʱ���Լ�������ʱ��
         */
        ADS_UL_ADD_STAT_PKT_NUM(1);

        /* ��ʱ����Ϊ��������Ҫ������������ */
        if (0 != ADS_UL_GET_JIFFIES_EXP_TMR_LEN())
        {
            if (ADS_TIME_AFTER_EQ(ADS_GET_CURR_KERNEL_TIME(),
                                  (ADS_UL_GET_JIFFIES_TMR_CNT() + ADS_UL_GET_JIFFIES_EXP_TMR_LEN())))
            {
                ADS_UL_SndEvent(ADS_UL_EVENT_DATA_PROC);
                ADS_StopTimer(ACPU_PID_ADS_UL, TI_ADS_UL_SEND, ADS_TIMER_STOP_CAUSE_USER);
                ADS_UL_SET_JIFFIES_TMR_CNT(ADS_GET_CURR_KERNEL_TIME());

                return VOS_OK;
            }
        }

        if (ADS_UL_IS_REACH_THRESHOLD(ulAllUlQueueDataNum, ADS_UL_GET_SENDING_FLAG()))
        {
            ADS_UL_SndEvent(ADS_UL_EVENT_DATA_PROC);
        }

        /* �����ɿձ�Ϊ�ǿ� */
        if (VOS_TRUE == ulNonEmptyEvent)
        {
            ADS_StartTimer(ACPU_PID_ADS_UL, TI_ADS_UL_DATA_STAT, ADS_UL_GET_STAT_TIMER_LEN());
            ADS_StartTimer(ACPU_PID_ADS_UL, TI_ADS_UL_SEND, ADS_UL_GET_PROTECT_TIMER_LEN());
        }
    }
    else
    {
        /* (1).�����ɿձ�Ϊ�ǿ�ʱ�������л��洦���¼�
           (2).�����������ѵ��ܰ����޵��������ҵ�ǰû���ڴ�������
               �������л��滺�洦���¼�
         */
        if (VOS_TRUE == ulNonEmptyEvent)
        {
            ADS_UL_SndEvent(ADS_UL_EVENT_DATA_PROC);
        }
        else
        {
            if (ADS_UL_IS_REACH_THRESHOLD(ulAllUlQueueDataNum, ADS_UL_GET_SENDING_FLAG()))
            {
                ADS_UL_SndEvent(ADS_UL_EVENT_DATA_PROC);
            }
        }
    }
#else
    /* (1).��TCP/IPЭ��ջ�����ĵ����ݣ�ucTailPktIndΪ0.
           �������ɿյ��ǿ�,
           ���Ǵﵽ�ܰ������ҵ�ǰû�������ݴ���ʱ�������л��洦���¼�.
       (2).USB���������ݷ����һ����ucTailPktIndΪ2�����һ����ucTailPktIndΪ1
           ��Ϊ���һ��IP��,
           ���Ǵﵽ�ܰ������ҵ�ǰû�������ݴ���ʱ�������л��洦���¼�.
     */

    if (0 == pstData->private_mem.ucTailPktInd)
    {
        if ((VOS_TRUE == ulNonEmptyEvent)
         || (ADS_UL_IS_REACH_THRESHOLD(ulAllUlQueueDataNum, ADS_UL_GET_SENDING_FLAG())))
        {
            ADS_UL_SndEvent(ADS_UL_EVENT_DATA_PROC);
        }
    }
    else
    {
        if ((1 == pstData->private_mem.ucTailPktInd)
         || (ADS_UL_IS_REACH_THRESHOLD(ulAllUlQueueDataNum, ADS_UL_GET_SENDING_FLAG())))
        {
            ADS_UL_SndEvent(ADS_UL_EVENT_DATA_PROC);
        }
    }
#endif

    return VOS_OK;
}

/*****************************************************************************
 �� �� ��  : ADS_UL_GetInstanceAllQueueDataNum
 ��������  : ��ȡһ��ʵ�����������л�������е����ݰ�����
 �������  : VOS_UINT8 ucInstanceIndex
 �������  : ��
 �� �� ֵ  : VOS_UINT32
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2011��12��7��
    ��    ��   : ³��/l60609
    �޸�����   :DSDA Phase II: �����ɺ���

*****************************************************************************/
VOS_UINT32 ADS_UL_GetInstanceAllQueueDataNum(VOS_UINT8 ucInstanceIndex)
{
    VOS_UINT32                          i;
    VOS_UINT32                          ulTotalNum;
    ADS_SPEC_CTX_STRU                  *pstAdsSpecCtx = VOS_NULL_PTR;

    pstAdsSpecCtx = &(g_stAdsCtx.astAdsSpecCtx[ucInstanceIndex]);

    ulTotalNum = 0;

    for (i = ADS_RAB_ID_MIN; i < ADS_RAB_ID_MAX + 1; i++)
    {
        if (VOS_NULL_PTR != pstAdsSpecCtx->stAdsUlCtx.astAdsUlQueue[i].pstAdsUlLink)
        {
            ulTotalNum += pstAdsSpecCtx->stAdsUlCtx.astAdsUlQueue[i].pstAdsUlLink->qlen;
        }
    }

    return ulTotalNum;
}

/*****************************************************************************
 �� �� ��  : ADS_UL_GetAllQueueDataNum
 ��������  : ��ȡ�������л�������е����ݰ�����
 �������  : VOS_VOID
 �������  : ��
 �� �� ֵ  : VOS_UINT32
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2011��12��7��
    ��    ��   : ³��/l60609
    �޸�����   : �����ɺ���

  2.��    ��   : 2012��11��24��
    ��    ��   : l60609
    �޸�����   : DSDA Phase II:˫ʵ��

*****************************************************************************/
VOS_UINT32 ADS_UL_GetAllQueueDataNum(VOS_VOID)
{
    VOS_UINT32                          ulTotalNum;
    VOS_UINT8                           i;

    ulTotalNum = 0;

    for (i = 0; i < ADS_INSTANCE_MAX_NUM; i++)
    {
        ulTotalNum = ulTotalNum + ADS_UL_GetInstanceAllQueueDataNum(i);
    }

    return ulTotalNum;
}


VOS_UINT32 ADS_UL_CreateQueue(
    VOS_UINT8                           ucInstanceIndex,
    VOS_UINT8                           ucRabId,
    ADS_QCI_TYPE_ENUM_UINT8             enPrio,
    ADS_CDS_IPF_PKT_TYPE_ENUM_UINT8     enPktType
)
{
    IMM_ZC_HEAD_STRU                   *pstUlQueue;
    ADS_UL_CTX_STRU                    *pstAdsUlCtx;

    pstAdsUlCtx = ADS_GetUlCtx(ucInstanceIndex);

    /* RabId�Ķ����Ѿ����� */
    if (VOS_OK == ADS_UL_IsQueueExistent(ucInstanceIndex, ucRabId))
    {
        /* ��Ӧ�ĵ������ȼ�Ҳһ�������Ǳ�֮ǰ��Ҫ�ͣ�������QCIֱ�ӷ���OK */
        if (enPrio >= pstAdsUlCtx->astAdsUlQueue[ucRabId].enPrio)
        {
            return VOS_OK;
        }
        /* �����Ӧ�ĵ������ȼ���֮ǰ��Ҫ�ߣ���Ҫ���¸�PDP�Ķ������ȼ������Զ��й���������� */
        else
        {
            ADS_UL_UpdateQueueInPdpModified(ucInstanceIndex, enPrio, ucRabId);
            return VOS_OK;
        }
    }

    /* ucRabID�Ķ��в�����, ��Ҫ��������ͷ��� */
    pstUlQueue = (IMM_ZC_HEAD_STRU *)PS_MEM_ALLOC(ACPU_PID_ADS_UL, sizeof(IMM_ZC_HEAD_STRU));

    if (VOS_NULL_PTR == pstUlQueue)
    {
        ADS_ERROR_LOG(ACPU_PID_ADS_UL, "ADS_UL_CreateQueue: pstUlQueue is null");
        return VOS_ERR;
    }

    /* ���г�ʼ�� */
    IMM_ZcQueueHeadInit(pstUlQueue);

    /* ��������Ϣ���µ����������� */
    ADS_UL_SetQueue(ucInstanceIndex,
                    ucRabId,
                    VOS_TRUE,
                    pstUlQueue,
                    enPrio,
                    enPktType);

    /* ���в����ܱ��þ���һ��RABID��Ӧһ�����У�����Ч���Ѿ�����Ϣ�������Σ�
       �ʲ���Ҫ�ж��Ƿ���������ֱ���������� */
    ADS_UL_OrderQueueIndex(ucInstanceIndex, ucRabId);

    /*lint -e429*/
    return VOS_OK;
    /*lint +e429*/
}


VOS_VOID ADS_UL_ClearQueue(
    VOS_UINT8                           ucRabId,
    IMM_ZC_HEAD_STRU                   *pstQueue
)
{
    VOS_UINT32                          i;
    VOS_UINT32                          ulQueueCnt;
    IMM_ZC_STRU                        *pstNode;

    ulQueueCnt = IMM_ZcQueueLen(pstQueue);

    for (i = 0; i < ulQueueCnt; i++)
    {
        pstNode = IMM_ZcDequeueHead(pstQueue);

        /* �ͷŽ������ */
        IMM_ZcFree(pstNode);
    }
}
VOS_VOID ADS_UL_DestroyQueue(
    VOS_UINT8                           ucInstanceIndex,
    VOS_UINT8                           ucRabId
)
{
    VOS_ULONG                           ulLockLevel;

    /* �����ڵ�����Ϊ�� */
    if (VOS_ERR == ADS_UL_IsQueueExistent(ucInstanceIndex, ucRabId))
    {
        /* Rab Id�Լ����ȼ���Ϊ��Чֵ */
        ADS_UL_SetQueue(ucInstanceIndex,
                        ucRabId,
                        VOS_FALSE,
                        VOS_NULL_PTR,
                        ADS_QCI_TYPE_BUTT,
                        ADS_PDP_TYPE_BUTT);

        /* �������µĶ��й���������� */
        ADS_UL_UpdateQueueInPdpDeactived(ucInstanceIndex, ucRabId);

        return;
    }

    /* ���м��� */
    /*lint -e571*/
    VOS_SpinLockIntLock(ADS_UL_GET_QUEUE_LINK_SPINLOCK(ucInstanceIndex, ucRabId), ulLockLevel);
    /*lint +e571*/

    /* Modified by l60609 for AP������Ŀ ��2012-09-10 Begin */
    /* ���ٶ����е����� */
    ADS_UL_ClearQueue(ucRabId,
                      ADS_UL_GET_QUEUE_LINK_PTR(ucInstanceIndex, ucRabId));
    /* Modified by l60609 for AP������Ŀ ��2012-09-10 End */

    /* ���ٶ���ͷ���*/
    PS_MEM_FREE(ACPU_PID_ADS_DL, ADS_UL_GET_QUEUE_LINK_PTR(ucInstanceIndex, ucRabId));

    /* ��������Ϣ���µ����������� */
    ADS_UL_SetQueue(ucInstanceIndex,
                    ucRabId,
                    VOS_FALSE,
                    VOS_NULL_PTR,
                    ADS_QCI_TYPE_BUTT,
                    ADS_PDP_TYPE_BUTT);

    /* ���в�����ɽ��� */
    VOS_SpinUnlockIntUnlock(ADS_UL_GET_QUEUE_LINK_SPINLOCK(ucInstanceIndex, ucRabId), ulLockLevel);

    /* �������µĶ��й���������� */
    ADS_UL_UpdateQueueInPdpDeactived(ucInstanceIndex, ucRabId);

}
VOS_UINT32 ADS_UL_GetInsertIndex(
    VOS_UINT8                           ucInstanceIndex,
    VOS_UINT8                           ucRabId
)
{
    VOS_UINT32                          i;
    ADS_UL_CTX_STRU                    *pstAdsUlCtx;

    pstAdsUlCtx = ADS_GetUlCtx(ucInstanceIndex);

    /* �������ȼ�����ȡ�����������ж��е�Indexֵ */
    for (i = 0; i < ADS_RAB_NUM_MAX; i++)
    {
        if (pstAdsUlCtx->aucPrioIndex[i] == ucRabId)
        {
            break;
        }
    }

    return i;

}
VOS_VOID ADS_UL_OrderQueueIndex(
    VOS_UINT8                           ucInstanceIndex,
    VOS_UINT8                           ucIndex
)
{
    VOS_UINT32                          i;
    VOS_UINT32                          j;
    ADS_UL_CTX_STRU                    *pstAdsUlCtx;

    pstAdsUlCtx = ADS_GetUlCtx(ucInstanceIndex);

    /* �����PDP�����ȼ��Ƚϸߣ���Ҫ���뵽����PDP��ǰ�棬�������ȼ��͵���Ҫ�����һλ */
    for (i = 0; i < ADS_RAB_NUM_MAX; i++)
    {
        if (pstAdsUlCtx->astAdsUlQueue[ucIndex].enPrio < pstAdsUlCtx->astAdsUlQueue[pstAdsUlCtx->aucPrioIndex[i]].enPrio)
        {
            for (j = ADS_RAB_NUM_MAX - 1; j > i; j--)
            {
                pstAdsUlCtx->aucPrioIndex[j] = pstAdsUlCtx->aucPrioIndex[j - 1];
            }
            pstAdsUlCtx->aucPrioIndex[i] = ucIndex;

            break;
        }
    }
}
VOS_VOID ADS_UL_UpdateQueueInPdpModified(
    VOS_UINT8                           ucInstanceIndex,
    ADS_QCI_TYPE_ENUM_UINT8             enPrio,
    VOS_UINT8                           ucRabId
)
{
    VOS_UINT32                          i;
    VOS_UINT32                          ulIndex;
    ADS_UL_CTX_STRU                    *pstAdsUlCtx;

    pstAdsUlCtx = ADS_GetUlCtx(ucInstanceIndex);

    /* ���޸ĵ����ȼ����µ����ڵĶ��й����� */
    pstAdsUlCtx->astAdsUlQueue[ucRabId].enPrio = enPrio;

    /* ��ȡ�޸ĵ�RABID��aucPrioIndex������λ�� */
    ulIndex = ADS_UL_GetInsertIndex(ucInstanceIndex, ucRabId);

    /* û���ҵ����������� */
    if (ulIndex >= ADS_RAB_NUM_MAX)
    {
        return;
    }

    /* �Ƚ��޸Ķ�Ӧλ�������ǰ�ƶ�һλ */
    for (i = ulIndex; i <  ADS_RAB_NUM_MAX - 1; i++)
    {
        pstAdsUlCtx->aucPrioIndex[i] = pstAdsUlCtx->aucPrioIndex[i + 1UL];
    }
    pstAdsUlCtx->aucPrioIndex[ADS_RAB_NUM_MAX - 1] = ADS_RAB_ID_INVALID;

    /* �ƶ����൱�������²��뵽���й����� */
    ADS_UL_OrderQueueIndex(ucInstanceIndex, ucRabId);

}
VOS_VOID ADS_UL_UpdateQueueInPdpDeactived(
    VOS_UINT8                           ucInstanceIndex,
    VOS_UINT8                           ucRabId
)
{
    VOS_UINT32                          i;
    VOS_UINT32                          ulIndex;
    ADS_UL_CTX_STRU                    *pstAdsUlCtx;

    pstAdsUlCtx = ADS_GetUlCtx(ucInstanceIndex);

    /* ����ɾ����PDP��������������Ԫ����ǰ�ƶ�һλ */
    ulIndex = ADS_UL_GetInsertIndex(ucInstanceIndex, ucRabId);

    if (ulIndex >= ADS_RAB_NUM_MAX)
    {
        return;
    }

    for (i = ulIndex; i < ADS_RAB_NUM_MAX - 1; i++)
    {
        pstAdsUlCtx->aucPrioIndex[i] = pstAdsUlCtx->aucPrioIndex[i + 1UL];
    }
    pstAdsUlCtx->aucPrioIndex[ADS_RAB_NUM_MAX - 1] = ADS_RAB_ID_INVALID;

}
VOS_VOID ADS_UL_SetQueue(
    VOS_UINT8                           ucInstanceIndex,
    VOS_UINT8                           ucRabId,
    VOS_UINT8                           ucIsQueueValid,
    IMM_ZC_HEAD_STRU                   *pstUlQueue,
    ADS_QCI_TYPE_ENUM_UINT8             enPrio,
    ADS_CDS_IPF_PKT_TYPE_ENUM_UINT8     enPktType
)
{
    g_stAdsCtx.astAdsSpecCtx[ucInstanceIndex].stAdsUlCtx.astAdsUlQueue[ucRabId].pstAdsUlLink   = pstUlQueue;
    g_stAdsCtx.astAdsSpecCtx[ucInstanceIndex].stAdsUlCtx.astAdsUlQueue[ucRabId].ucIsQueueValid = ucIsQueueValid;
    g_stAdsCtx.astAdsSpecCtx[ucInstanceIndex].stAdsUlCtx.astAdsUlQueue[ucRabId].enPrio         = enPrio;
    g_stAdsCtx.astAdsSpecCtx[ucInstanceIndex].stAdsUlCtx.astAdsUlQueue[ucRabId].usRecordNum    = 0;

    g_stAdsCtx.astAdsSpecCtx[ucInstanceIndex].stAdsUlCtx.astAdsUlQueue[ucRabId].enPktType      = enPktType;

}
/* Modified by l60609 for DSDA Phase II, 2012-11-24, End */

VOS_VOID ADS_UL_SndEvent(VOS_UINT32 ulEvent)
{
    if (1 == g_ulAdsULTaskReadyFlag)
    {
        (VOS_VOID)VOS_EventWrite(g_ulAdsULTaskId, ulEvent);
    }

    return;
}


VOS_VOID ADS_UL_ProcEvent(VOS_UINT32 ulEvent)
{
    if (ulEvent & ADS_UL_EVENT_DATA_PROC)
    {
        ADS_UL_ProcLinkData();
        ADS_DBG_UL_PROC_EVENT_NUM(1);
    }

    return;
}


VOS_VOID ADS_DL_SndEvent(VOS_UINT32 ulEvent)
{
    if (1 == g_ulAdsDLTaskReadyFlag)
    {
        (VOS_VOID)VOS_EventWrite(g_ulAdsDLTaskId, ulEvent);
    }

    return;
}


VOS_VOID ADS_DL_ProcEvent(VOS_UINT32 ulEvent)
{
    if (ulEvent & ADS_DL_EVENT_IPF_RD_INT)
    {
        ADS_DBG_DL_PROC_RD_EVENT_NUM(1);
        ADS_DL_ProcIpfResult();
    }
    else if (ulEvent & ADS_DL_EVENT_IPF_ADQ_EMPTY_INT)
    {
        ADS_DBG_DL_PROC_AD_EMPTY_EVENT_NUM(1);
        ADS_DL_ProcAdqEmptyEvent(ulEvent);
    }
    else
    {
        ADS_DBG_DL_PROC_OTHER_EVENT_NUM(1);
    }

    return;
}

/* Added by l60609 for DSDA Phase II, 2012-12-20, Begin */
/*****************************************************************************
 �� �� ��  : ADS_DL_ProcAdqEmptyEvent
 ��������  : ADS_DL_EVENT_IPF_ADQ_EMPTY_INT�¼�����
 �������  : VOS_UINT32 ulEvent
 �������  : ��
 �� �� ֵ  : VOS_VOID
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2012��12��20��
    ��    ��   : l60609
    �޸�����   : �����ɺ���

*****************************************************************************/
VOS_VOID ADS_DL_ProcAdqEmptyEvent(VOS_UINT32 ulEvent)
{
#if (FEATURE_OFF == FEATURE_SKB_EXP)
    ADS_DL_ProcIpfAdqEmtpyEvent();
    ADS_DBG_DL_PROC_ADQ_EMPTY_EVENT_NUM(1);
#endif
    return;
}
/* Added by l60609 for DSDA Phase II, 2012-12-20, End */

VOS_VOID ADS_DL_InitFcAssemParamInfo(VOS_VOID)
{
    ADS_DL_FC_ASSEM_STRU               *pstFcAssemInfo;

    pstFcAssemInfo = ADS_DL_GET_FC_ASSEM_INFO_PTR(ADS_INSTANCE_INDEX_0);

    pstFcAssemInfo->ulEnableMask     = VOS_FALSE;
    pstFcAssemInfo->ulFcActiveFlg    = VOS_FALSE;
    pstFcAssemInfo->ulTmrCnt         = ADS_GET_CURR_KERNEL_TIME();
    pstFcAssemInfo->ulRdCnt          = 0;
    pstFcAssemInfo->ulRateUpLev      = 0;
    pstFcAssemInfo->ulRateDownLev    = 0;
    pstFcAssemInfo->ulExpireTmrLen   = 0;
    pstFcAssemInfo->pFcAssemTuneFunc = VOS_NULL_PTR;

    return;
}


VOS_VOID ADS_DL_ResetFcAssemParamInfo(VOS_VOID)
{
    ADS_DL_FC_ASSEM_STRU               *pstFcAssemInfo;

    pstFcAssemInfo = ADS_DL_GET_FC_ASSEM_INFO_PTR(ADS_INSTANCE_INDEX_0);

    pstFcAssemInfo->ulFcActiveFlg    = VOS_FALSE;
    pstFcAssemInfo->ulRdCnt          = 0;

    return;
}

VOS_SEM ADS_GetULResetSem(VOS_VOID)
{
    return g_stAdsCtx.hULResetSem;
}


VOS_SEM ADS_GetDLResetSem(VOS_VOID)
{
    return g_stAdsCtx.hDLResetSem;
}

/* Modified by l60609 for DSDA Phase II, 2012-11-24, Begin */
/*****************************************************************************
 �� �� ��  : ADS_GetCurrentRate
 ��������  : ���õ�ǰ��������
 �������  : ��
 �������  : VOS_UINT32                         *pulUlBpsRate,
             VOS_UINT32                         *pulDlBpsRate
 �� �� ֵ  : VOS_UINT32
 ���ú���  :
 ��������  :

 �޸���ʷ     :
 1.��    ��   : 2012��1��10��
   ��    ��   : l60609
   �޸�����   : �����ɺ���

 2.��    ��   : 2012��11��24��
   ��    ��   : l60609
   �޸�����   : DSDA Phase II��˫ʵ��
*****************************************************************************/
VOS_UINT32 ADS_GetCurrentRate(
    VOS_UINT32                         *pulUlBpsRate,
    VOS_UINT32                         *pulDlBpsRate
)
{
    /* Modified by l60609 for DSDA Phase II, 2012-11-24, Begin */
    /* FCֻ��stick�ã�ֻ����ʵ��0�� */
    *pulUlBpsRate = g_stAdsCtx.astAdsSpecCtx[ADS_INSTANCE_INDEX_0].stAdsStatsInfoCtx.stULDataStats.ulULCurDataRate << 3;
    *pulDlBpsRate = g_stAdsCtx.astAdsSpecCtx[ADS_INSTANCE_INDEX_0].stAdsStatsInfoCtx.stDLDataStats.ulDLCurDataRate << 3;
    /* Modified by l60609 for DSDA Phase II, 2012-11-24, End */

    return VOS_OK;
}

/*****************************************************************************
 �� �� ��  : ADS_GetTiCtx
 ��������  : ��ȡADS���е�������
 �������  : VOS_UINT8 ucInstanceIndex
 �������  : ��
 �� �� ֵ  : ADS_TIMER_CTX_STRU*
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2011��12��13��
    ��    ��   : ³��/l60609
    �޸�����   : �����ɺ���

  2.��    ��   : 2012��11��24��
    ��    ��   : l60609
    �޸�����   : DSDA Phase II:˫ʵ��

*****************************************************************************/
ADS_UL_CTX_STRU* ADS_GetUlCtx(VOS_UINT8 ucInstanceIndex)
{
    ADS_SPEC_CTX_STRU                  *pstAdsSpecCtx = VOS_NULL_PTR;

    pstAdsSpecCtx = &(g_stAdsCtx.astAdsSpecCtx[ucInstanceIndex]);

    return &(pstAdsSpecCtx->stAdsUlCtx);
}

/*****************************************************************************
 �� �� ��  : ADS_GetTiCtx
 ��������  : ��ȡADS���е�������
 �������  : VOS_UINT8 ucIndex
 �������  : ��
 �� �� ֵ  : ADS_TIMER_CTX_STRU*
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2011��12��13��
    ��    ��   : ³��/l60609
    �޸�����   : �����ɺ���

  2.��    ��   : 2012��11��24��
    ��    ��   : l60609
    �޸�����   : DSDA Phase II:˫ʵ��

*****************************************************************************/
ADS_DL_CTX_STRU* ADS_GetDlCtx(VOS_UINT8 ucInstanceIndex)
{
    ADS_SPEC_CTX_STRU                  *pstAdsSpecCtx = VOS_NULL_PTR;

    pstAdsSpecCtx = &(g_stAdsCtx.astAdsSpecCtx[ucInstanceIndex]);

    return &(pstAdsSpecCtx->stAdsDlCtx);
}

/*****************************************************************************
 �� �� ��  : ADS_GetStatsInfoCtx
 ��������  : ��ȡADS״̬��������
 �������  : VOS_UINT8 ucIndex
 �������  : ��
 �� �� ֵ  : ADS_STATS_INFO_CTX_STRU*
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2012��1��10��
    ��    ��   : ³��/l60609
    �޸�����   : �����ɺ���

  2.��    ��   : 2012��11��24��
    ��    ��   : l60609
    �޸�����   : DSDA Phase II:˫ʵ��

*****************************************************************************/
ADS_STATS_INFO_CTX_STRU* ADS_GetStatsInfoCtx(VOS_UINT8 ucInstanceIndex)
{
    ADS_SPEC_CTX_STRU                  *pstAdsSpecCtx = VOS_NULL_PTR;

    pstAdsSpecCtx = &(g_stAdsCtx.astAdsSpecCtx[ucInstanceIndex]);

    return &(pstAdsSpecCtx->stAdsStatsInfoCtx);
}

/*****************************************************************************
 �� �� ��  : ADS_GetTiCtx
 ��������  : ��ȡADS��ʱ����������
 �������  : VOS_VOID
 �������  : ��
 �� �� ֵ  : ADS_TIMER_CTX_STRU*
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2011��12��13��
    ��    ��   : ³��/l60609
    �޸�����   : �����ɺ���

*****************************************************************************/
ADS_TIMER_CTX_STRU* ADS_GetTiCtx(VOS_VOID)
{
    return g_stAdsCtx.astAdsTiCtx;
}

/*****************************************************************************
 �� �� ��  : ADS_GetAllCtx
 ��������  : ��ȡADS���е�������
 �������  : VOS_VOID
 �������  : ��
 �� �� ֵ  : ADS_CTX_STRU*
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2012��11��24��
    ��    ��   : l60609
    �޸�����   : DSDA Phase II:�����ɺ���

*****************************************************************************/
ADS_CTX_STRU* ADS_GetAllCtx(VOS_VOID)
{
    return &g_stAdsCtx;
}


VOS_VOID ADS_InitUlCtx(VOS_UINT8 ucInstanceIndex)
{
    VOS_UINT32                          i;
    VOS_UINT32                          ulRst;
    ADS_SPEC_CTX_STRU                  *pstAdsSpecCtx = VOS_NULL_PTR;

    pstAdsSpecCtx = &(g_stAdsCtx.astAdsSpecCtx[ucInstanceIndex]);

    /* Ĭ�ϴӵ�һ�����п�ʼ���� */
    pstAdsSpecCtx->stAdsUlCtx.ucAdsUlCurIndex      = 0;

    for (i = 0; i < ADS_RAB_ID_MAX + 1; i++)
    {
        pstAdsSpecCtx->stAdsUlCtx.astAdsUlQueue[i].pstAdsUlLink    = VOS_NULL_PTR;
        pstAdsSpecCtx->stAdsUlCtx.astAdsUlQueue[i].ucIsQueueValid  = VOS_FALSE;
        pstAdsSpecCtx->stAdsUlCtx.astAdsUlQueue[i].enPrio          = ADS_QCI_TYPE_BUTT;
        pstAdsSpecCtx->stAdsUlCtx.astAdsUlQueue[i].usRecordNum     = 0;
        pstAdsSpecCtx->stAdsUlCtx.astAdsUlQueue[i].enPktType       = ADS_CDS_IPF_PKT_TYPE_IP;

        /* Added by l60609 for AP������Ŀ ��2012-09-10 Begin */
        /* ����ʼ�� */
        VOS_SpinLockInit(&(pstAdsSpecCtx->stAdsUlCtx.astAdsUlQueue[i].stSpinLock));
        /* Added by l60609 for AP������Ŀ ��2012-09-10 End */
        pstAdsSpecCtx->stAdsUlCtx.astAdsUlQueue[i].ucRabSndPermitFlg  = VOS_TRUE;
    }

    PS_MEM_SET(pstAdsSpecCtx->stAdsUlCtx.aucPrioIndex, 0, ADS_RAB_NUM_MAX);

    /* ��NV�������ȼ���Ȩ����д��ADS�������� */
    ulRst = NV_ReadEx(ucInstanceIndex,
                      en_NV_Item_ADS_Queue_Scheduler_Pri,
                      &(pstAdsSpecCtx->stAdsUlCtx.stQueuePriNv),
                      sizeof(ADS_UL_QUEUE_SCHEDULER_PRI_NV_STRU));
    if(NV_OK != ulRst)
    {
        pstAdsSpecCtx->stAdsUlCtx.stQueuePriNv.ulStatus = VOS_FALSE;

        for (i = 0; i < ADS_UL_QUEUE_SCHEDULER_PRI_MAX; i++)
        {
            pstAdsSpecCtx->stAdsUlCtx.stQueuePriNv.ausPriWeightedNum[i] = ADS_UL_DEFAULT_PRI_WEIGHTED_NUM;
        }

        ADS_ERROR_LOG(ACPU_PID_ADS_UL, "ADS_InitUlCtx: NV read failed !");
    }

    if (VOS_FALSE == pstAdsSpecCtx->stAdsUlCtx.stQueuePriNv.ulStatus)
    {
        for (i = 0; i < ADS_UL_QUEUE_SCHEDULER_PRI_MAX; i++)
        {
            pstAdsSpecCtx->stAdsUlCtx.stQueuePriNv.ausPriWeightedNum[i] = ADS_UL_DEFAULT_PRI_WEIGHTED_NUM;
        }
    }
    pstAdsSpecCtx->stAdsUlCtx.ucModemSndPermitFlg    = VOS_TRUE;

    /* Added by l60609 for AP������Ŀ ��2012-08-31 Begin */
#if(FEATURE_OFF == FEATURE_SKB_EXP)
    pstAdsSpecCtx->stAdsUlCtx.ulUlMaxQueueLength     = ADS_UL_MAX_QUEUE_LENGTH;
#endif
    /* Added by l60609 for AP������Ŀ ��2012-08-31 End */

    return;
}
VOS_VOID ADS_InitDlCtx(VOS_UINT8 ucInstanceIndex)
{
    VOS_UINT32                          i;
    ADS_SPEC_CTX_STRU                  *pstAdsSpecCtx = VOS_NULL_PTR;

    pstAdsSpecCtx = &(g_stAdsCtx.astAdsSpecCtx[ucInstanceIndex]);

    /* ��ʼ�����е�RAB��Ϣ */
    for (i = 0; i < ADS_RAB_NUM_MAX; i++)
    {
        pstAdsSpecCtx->stAdsDlCtx.astAdsDlRabInfo[i].ucRabId        = ADS_RAB_ID_INVALID;
        pstAdsSpecCtx->stAdsDlCtx.astAdsDlRabInfo[i].enPktType      = ADS_CDS_IPF_PKT_TYPE_IP;
        pstAdsSpecCtx->stAdsDlCtx.astAdsDlRabInfo[i].pRcvDlDataFunc = VOS_NULL_PTR;
    }

    //ADS_DL_StartProtectTimer();

    /* ��ʼ������̬������� */
    ADS_DL_InitFcAssemParamInfo();

    return;
}

/*****************************************************************************
 �� �� ��  : ADS_InitStatsInfoCtx
 ��������  : ��ʼ������ͳ�Ƶ�������
 �������  : VOS_UINT8 ucInstanceIndex
 �������  : ��
 �� �� ֵ  : VOS_VOID
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2012��1��10��
    ��    ��   : ³��/l60609
    �޸�����   : �����ɺ���

  2.��    ��   : 2012��11��24��
    ��    ��   : l60609
    �޸�����   : DSDA Phase II:˫ʵ��

*****************************************************************************/
VOS_VOID ADS_InitStatsInfoCtx(VOS_UINT8 ucInstanceIndex)
{
    ADS_SPEC_CTX_STRU                  *pstAdsSpecCtx = VOS_NULL_PTR;

    pstAdsSpecCtx = &(g_stAdsCtx.astAdsSpecCtx[ucInstanceIndex]);

    pstAdsSpecCtx->stAdsStatsInfoCtx.stULDataStats.ulULPeriodSndBytes = 0;
    pstAdsSpecCtx->stAdsStatsInfoCtx.stULDataStats.ulULCurDataRate    = 0;
    pstAdsSpecCtx->stAdsStatsInfoCtx.stDLDataStats.ulDLPeriodRcvBytes = 0;
    pstAdsSpecCtx->stAdsStatsInfoCtx.stDLDataStats.ulDLCurDataRate    = 0;
}


VOS_VOID ADS_InitSpecCtx(VOS_VOID)
{
    VOS_UINT8                           i;

    for (i = 0; i < ADS_INSTANCE_MAX_NUM; i++)
    {
        /* ��ʼ������������ */
        ADS_InitUlCtx(i);

        /* ��ʼ������������ */
        ADS_InitDlCtx(i);

        /* ��ʼ������ͳ�Ƶ������� */
        ADS_InitStatsInfoCtx(i);
    }
}
VOS_VOID ADS_ResetUlCtx(VOS_UINT8 ucInstanceIndex)
{
    VOS_UINT32                          i;
    VOS_UINT32                          ulRst;
    ADS_SPEC_CTX_STRU                  *pstAdsSpecCtx = VOS_NULL_PTR;

    pstAdsSpecCtx = &(g_stAdsCtx.astAdsSpecCtx[ucInstanceIndex]);

    /* Ĭ�ϴӵ�һ�����п�ʼ���� */
    pstAdsSpecCtx->stAdsUlCtx.ucAdsUlCurIndex      = 0;

    for (i = 0; i < ADS_RAB_ID_MAX + 1; i++)
    {
        pstAdsSpecCtx->stAdsUlCtx.astAdsUlQueue[i].pstAdsUlLink    = VOS_NULL_PTR;
        pstAdsSpecCtx->stAdsUlCtx.astAdsUlQueue[i].ucIsQueueValid  = VOS_FALSE;
        pstAdsSpecCtx->stAdsUlCtx.astAdsUlQueue[i].enPrio          = ADS_QCI_TYPE_BUTT;
        pstAdsSpecCtx->stAdsUlCtx.astAdsUlQueue[i].usRecordNum     = 0;
        pstAdsSpecCtx->stAdsUlCtx.astAdsUlQueue[i].enPktType       = ADS_CDS_IPF_PKT_TYPE_IP;

        pstAdsSpecCtx->stAdsUlCtx.astAdsUlQueue[i].ucRabSndPermitFlg  = VOS_TRUE;
    }

    PS_MEM_SET(pstAdsSpecCtx->stAdsUlCtx.aucPrioIndex, 0, ADS_RAB_NUM_MAX);

    /* ��NV�������ȼ���Ȩ����д��ADS�������� */
    ulRst = NV_ReadEx(ucInstanceIndex,
                      en_NV_Item_ADS_Queue_Scheduler_Pri,
                      &(pstAdsSpecCtx->stAdsUlCtx.stQueuePriNv),
                      sizeof(ADS_UL_QUEUE_SCHEDULER_PRI_NV_STRU));
    if(NV_OK != ulRst)
    {
        pstAdsSpecCtx->stAdsUlCtx.stQueuePriNv.ulStatus = VOS_FALSE;

        for (i = 0; i < ADS_UL_QUEUE_SCHEDULER_PRI_MAX; i++)
        {
            pstAdsSpecCtx->stAdsUlCtx.stQueuePriNv.ausPriWeightedNum[i] = ADS_UL_DEFAULT_PRI_WEIGHTED_NUM;
        }

        ADS_ERROR_LOG(ACPU_PID_ADS_UL, "ADS_InitUlCtx: NV read failed !");
    }

    if (VOS_FALSE == pstAdsSpecCtx->stAdsUlCtx.stQueuePriNv.ulStatus)
    {
        for (i = 0; i < ADS_UL_QUEUE_SCHEDULER_PRI_MAX; i++)
        {
            pstAdsSpecCtx->stAdsUlCtx.stQueuePriNv.ausPriWeightedNum[i] = ADS_UL_DEFAULT_PRI_WEIGHTED_NUM;
        }
    }

    pstAdsSpecCtx->stAdsUlCtx.ucModemSndPermitFlg    = VOS_TRUE;

#if(FEATURE_OFF == FEATURE_SKB_EXP)
    pstAdsSpecCtx->stAdsUlCtx.ulUlMaxQueueLength     = ADS_UL_MAX_QUEUE_LENGTH;
#endif

    return;
}
VOS_VOID ADS_ResetDlCtx(VOS_UINT8 ucInstanceIndex)
{
    VOS_UINT32                          i;
    ADS_SPEC_CTX_STRU                  *pstAdsSpecCtx  = VOS_NULL_PTR;

    pstAdsSpecCtx = &(g_stAdsCtx.astAdsSpecCtx[ucInstanceIndex]);

    /* �������е�RAB��Ϣ */
    for (i = 0; i < ADS_RAB_NUM_MAX; i++)
    {
        pstAdsSpecCtx->stAdsDlCtx.astAdsDlRabInfo[i].ucRabId        = ADS_RAB_ID_INVALID;
    }

    /* ���õ���̬������� */
    ADS_DL_ResetFcAssemParamInfo();

    return;
}


VOS_VOID ADS_ResetSpecCtx(VOS_VOID)
{
    VOS_UINT8                           i;

    for (i = 0; i < ADS_INSTANCE_MAX_NUM; i++)
    {
        /* ��ʼ������������ */
        ADS_ResetUlCtx(i);

        /* ��ʼ������������ */
        ADS_ResetDlCtx(i);

        /* ��ʼ������ͳ�Ƶ������� */
        ADS_InitStatsInfoCtx(i);
    }
}
VOS_VOID ADS_ResetIpfCtx(VOS_VOID)
{
#if (FEATURE_OFF == FEATURE_SKB_EXP)
    VOS_UINT8                           ucAdqIndex;

    for (ucAdqIndex = 0; ucAdqIndex < ADS_DL_ADQ_MAX_NUM; ucAdqIndex++)
    {
        PS_MEM_SET(g_stAdsCtx.stAdsIpfCtx.astIpfDlAdBuff[ucAdqIndex],
                   0x00,
                   (VOS_SIZE_T)(IPF_DLAD0_DESC_SIZE * sizeof(IPF_AD_DESC_S)));
    }
#endif

    /* ��ʼ������BD BUFF*/
    PS_MEM_SET(g_stAdsCtx.stAdsIpfCtx.astIpfUlBdBuff, 0x00, (VOS_SIZE_T)(IPF_ULBD_DESC_SIZE * sizeof(IPF_CONFIG_ULPARAM_S)));

    /* ��ʼ������RD BUFF*/
    PS_MEM_SET(g_stAdsCtx.stAdsIpfCtx.astIpfDlRdBuff, 0x00, (VOS_SIZE_T)(IPF_DLRD_DESC_SIZE * sizeof(IPF_RD_DESC_S)));

    /* Ĭ���������ݷ��ͱ�����ʱ��ʱ��Ϊ10ms */
    g_stAdsCtx.stAdsIpfCtx.ulProtectTmrLen   = 10;

    /* Ĭ����������ͳ�ƶ�ʱ��ʱ��Ϊ100ms */
    g_stAdsCtx.stAdsIpfCtx.stUlAssemParmInfo.stThresholdStatInfo.ulStatTmrLen = 100;
    g_stAdsCtx.stAdsIpfCtx.stUlAssemParmInfo.stThresholdStatInfo.ulStatPktNum = 0;

    /* Ĭ���ܰ��������� */
    if (VOS_TRUE == g_stAdsCtx.stAdsIpfCtx.stUlAssemParmInfo.ulActiveFlag)
    {
        g_stAdsCtx.stAdsIpfCtx.ulThredHoldNum = ADS_UL_DATA_THRESHOLD_ONE;
    }
    else
    {
        g_stAdsCtx.stAdsIpfCtx.ulThredHoldNum = 32;
    }

    /* Ĭ�����ݲ��ڷ��� */
    g_stAdsCtx.stAdsIpfCtx.ucSendingFlg = VOS_FALSE;
}


VOS_VOID ADS_InitIpfCtx(VOS_VOID)
{
    VOS_UINT32                          ulRst;
    ADS_NV_DYNAMIC_THRESHOLD_STRU       stThreshold;
    ADS_UL_DYNAMIC_ASSEM_INFO_STRU     *pstUlAssemParmInfo;

#if(FEATURE_OFF == FEATURE_SKB_EXP)
    VOS_UINT8                           i;

    for (i = 0; i < ADS_DL_ADQ_MAX_NUM; i++)
    {
        PS_MEM_SET(g_stAdsCtx.stAdsIpfCtx.astIpfDlAdBuff[i], 0x00, (VOS_SIZE_T)(IPF_DLAD0_DESC_SIZE * sizeof(IPF_AD_DESC_S)));
    }

    /* ��ʼ������Դ�ڴ��ͷŶ��� */
    IMM_ZcQueueHeadInit(&g_stAdsCtx.stAdsIpfCtx.stUlSrcMemFreeQue);
#endif

    /* ��ʼ������BD BUFF*/
    PS_MEM_SET(g_stAdsCtx.stAdsIpfCtx.astIpfUlBdBuff, 0x00, (VOS_SIZE_T)(IPF_ULBD_DESC_SIZE * sizeof(IPF_CONFIG_ULPARAM_S)));

    /* ��ʼ������RD BUFF*/
    PS_MEM_SET(g_stAdsCtx.stAdsIpfCtx.astIpfDlRdBuff, 0x00, (VOS_SIZE_T)(IPF_DLRD_DESC_SIZE * sizeof(IPF_RD_DESC_S)));

    /* Ĭ���������ݷ��ͱ�����ʱ��ʱ��Ϊ10ms */
    g_stAdsCtx.stAdsIpfCtx.ulProtectTmrLen   = 10;

    pstUlAssemParmInfo = &g_stAdsCtx.stAdsIpfCtx.stUlAssemParmInfo;

    PS_MEM_SET(&stThreshold, 0x00, (VOS_SIZE_T)sizeof(ADS_NV_DYNAMIC_THRESHOLD_STRU));

    ulRst = NV_ReadEx(MODEM_ID_0,
                      en_NV_Item_ADS_DYNAMIC_THRESHOLD_CFG,
                      &stThreshold,
                      sizeof(ADS_NV_DYNAMIC_THRESHOLD_STRU));
    if(NV_OK != ulRst)
    {
        pstUlAssemParmInfo->ulActiveFlag                      = VOS_FALSE;
        pstUlAssemParmInfo->ulProtectTmrExpCnt                = 0;
        pstUlAssemParmInfo->stWaterMarkLevel.ulWaterLevel1    = 80;
        pstUlAssemParmInfo->stWaterMarkLevel.ulWaterLevel2    = 150;
        pstUlAssemParmInfo->stWaterMarkLevel.ulWaterLevel3    = 500;
        pstUlAssemParmInfo->stWaterMarkLevel.ulWaterLevel4    = 0xFFFFFFFF;

        pstUlAssemParmInfo->stThresholdLevel.ulThreshold1     = 1;
        pstUlAssemParmInfo->stThresholdLevel.ulThreshold2     = 13;
        pstUlAssemParmInfo->stThresholdLevel.ulThreshold3     = 60;
        pstUlAssemParmInfo->stThresholdLevel.ulThreshold4     = 64;
        ADS_ERROR_LOG(ACPU_PID_ADS_UL, "ADS_InitIpfCtx: NV read failed !");
    }

    pstUlAssemParmInfo->ulActiveFlag                      = stThreshold.ulActiveFlag;
    pstUlAssemParmInfo->ulProtectTmrExpCnt                = stThreshold.ulProtectTmrExpCnt;
    pstUlAssemParmInfo->stWaterMarkLevel.ulWaterLevel1    = stThreshold.stWaterMarkLevel.ulWaterLevel1;
    pstUlAssemParmInfo->stWaterMarkLevel.ulWaterLevel2    = stThreshold.stWaterMarkLevel.ulWaterLevel2;
    pstUlAssemParmInfo->stWaterMarkLevel.ulWaterLevel3    = stThreshold.stWaterMarkLevel.ulWaterLevel3;
    pstUlAssemParmInfo->stWaterMarkLevel.ulWaterLevel4    = stThreshold.stWaterMarkLevel.ulWaterLevel4;

    pstUlAssemParmInfo->stThresholdLevel.ulThreshold1     = stThreshold.stThresholdLevel.ulThreshold1;
    pstUlAssemParmInfo->stThresholdLevel.ulThreshold2     = stThreshold.stThresholdLevel.ulThreshold2;
    pstUlAssemParmInfo->stThresholdLevel.ulThreshold3     = stThreshold.stThresholdLevel.ulThreshold3;
    pstUlAssemParmInfo->stThresholdLevel.ulThreshold4     = stThreshold.stThresholdLevel.ulThreshold4;

    /* Ĭ����������ͳ�ƶ�ʱ��ʱ��Ϊ100ms */
    pstUlAssemParmInfo->stThresholdStatInfo.ulStatTmrLen = 100;
    pstUlAssemParmInfo->stThresholdStatInfo.ulStatPktNum = 0;

    /* ��ʱʱ�����������Ҫ����jiffies������ʱ�� */
    if (0 != pstUlAssemParmInfo->ulProtectTmrExpCnt)
    {
        pstUlAssemParmInfo->ulProtectTmrCnt = ADS_GET_CURR_KERNEL_TIME();
    }

    /* Ĭ���ܰ��������� */
    if (VOS_TRUE == pstUlAssemParmInfo->ulActiveFlag)
    {
        g_stAdsCtx.stAdsIpfCtx.ulThredHoldNum = ADS_UL_DATA_THRESHOLD_ONE;
    }
    else
    {
        g_stAdsCtx.stAdsIpfCtx.ulThredHoldNum = 32;
    }

    /* Ĭ�����ݲ��ڷ��� */
    g_stAdsCtx.stAdsIpfCtx.ucSendingFlg = VOS_FALSE;
}

/*****************************************************************************
 �� �� ��  : ADS_InitTiCtx
 ��������  : ��ʼ����ʱ����������
 �������  : VOS_VOID
 �������  : ��
 �� �� ֵ  : VOS_VOID
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2011��12��13��
    ��    ��   : ³��/l60609
    �޸�����   : �����ɺ���

*****************************************************************************/
VOS_VOID ADS_InitTiCtx(VOS_VOID)
{
    VOS_UINT32                          i;

    for (i = 0; i < ADS_MAX_TIMER_NUM; i++)
    {
        g_stAdsCtx.astAdsTiCtx[i].hTimer        = VOS_NULL_PTR;
        g_stAdsCtx.astAdsTiCtx[i].enTimerStatus = ADS_TIMER_STATUS_STOP;
    }

    return;
}


VOS_VOID ADS_InitResetSem(VOS_VOID)
{
    g_stAdsCtx.hULResetSem  = VOS_NULL_PTR;
    g_stAdsCtx.hDLResetSem  = VOS_NULL_PTR;

    /* ����������ź��� */
    if (VOS_OK != VOS_SmBCreate( "UL", 0, VOS_SEMA4_FIFO, &g_stAdsCtx.hULResetSem))
    {
        vos_printf("Create ADS acpu UL_CNF sem failed!\r\n");
        ADS_UL_DBG_CREATE_BINARY_SEM_FAIL_NUM(1);
        ADS_DBG_SET_SEM_INIT_FLAG(VOS_FALSE);

        return;
    }
    else
    {
        ADS_UL_DBG_SAVE_BINARY_SEM_ID(g_stAdsCtx.hULResetSem);
    }

    if (VOS_OK != VOS_SmBCreate( "DL", 0, VOS_SEMA4_FIFO, &g_stAdsCtx.hDLResetSem))
    {
        vos_printf("Create ADS acpu DL_CNF sem failed!\r\n");
        ADS_DL_DBG_CREATE_BINARY_SEM_FAIL_NUM(1);
        ADS_DBG_SET_SEM_INIT_FLAG(VOS_FALSE);

        return;
    }
    else
    {
        ADS_DL_DBG_SAVE_BINARY_SEM_ID(g_stAdsCtx.hDLResetSem);
    }

    ADS_DBG_SET_SEM_INIT_FLAG(VOS_TRUE);

    return;
}
VOS_VOID ADS_InitCtx(VOS_VOID)
{
    PS_MEM_SET(&g_stAdsStats, 0, sizeof(g_stAdsStats));

    /* ��ʼ��ÿ��ʵ���������� */
    ADS_InitSpecCtx();

    /* ��ʼ��IPF��ص������� */
    ADS_InitIpfCtx();

    /* ��ʼ����ʱ�������� */
    ADS_InitTiCtx();

    /* ��ʼ����λ�ź��� */
    ADS_InitResetSem();

    /* ��ʼ��ADS������������ */
    ADS_FILTER_InitCtx();

    /* ��ʼ����ǰʵ������ֵ */
    g_stAdsCtx.ucAdsCurInstanceIndex = ADS_INSTANCE_INDEX_0;
}
/* Modified by l60609 for DSDA Phase II, 2012-11-24, End */

#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

