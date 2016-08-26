/******************************************************************************

                  ��Ȩ���� (C), 2001-2011, ��Ϊ�������޹�˾

 ******************************************************************************
  �� �� ��      : OmAppOutside.c
  �� �� ��      : ����
  ��    ��      : w00184875
  ��������      : 2011��10��10��
  ����޸�      :
  ��������      : ��C�ļ�������ACPU��OM CallBackģ���ʵ��
  �����б�      :
  �޸���ʷ      :
  1.��    ��    : 2011��10��10��
    ��    ��    : w00184875
    �޸�����    : �����ļ�

******************************************************************************/

/*****************************************************************************
  1 ͷ�ļ�����
*****************************************************************************/
#include "omprivate.h"
#include "OamSpecTaskDef.h"

#ifdef __cplusplus
#if __cplusplus
extern "C"{
#endif
#endif

/*lint -e767 �޸���:��Ц�� 00184875;ԭ��:Log��ӡ */
#define    THIS_FILE_ID        PS_FILE_ID_OM_APP_OUTSIDE_C
/*lint +e767 �޸���:��Ц�� 00184875;*/


/*****************************************************************************
  2 �ⲿ���ñ�������
*****************************************************************************/
#if ((VOS_OS_VER == VOS_WIN32) || (FEATURE_HISOCKET == FEATURE_ON))
extern  VOS_VOID PPM_SockAtServerTask(VOS_VOID);
extern  VOS_VOID PPM_SockOmServerTask(VOS_VOID);
extern  VOS_BOOL PPM_SockIsEnable(VOS_VOID);
#endif

/*****************************************************************************
 Prototype       : OM_AcpuCallBackMsgProc
 Description     : The Proc function of msgs.
 Input           : pMsg - ��Ϣ��
 Output          : None
 Return Value    : VOS_VOID

 History         : ---
    Date         : 2011-10-10
    Author       : w00184875
    Modification : Created function
 *****************************************************************************/
VOS_VOID OM_AcpuCallBackMsgProc(MsgBlock* pMsg)
{
    OM_REQ_PACKET_STRU    *pstAppMsg;
    OM_REQUEST_PROCEDURE  *pOmFuncProc;
    VOS_UINT32            ulFuncID;

    pstAppMsg = (OM_REQ_PACKET_STRU*)pMsg->aucValue;
    ulFuncID  = (VOS_UINT32)pstAppMsg->ucModuleId;

    /*�������*/
    if ((OM_FUNCID_ACPU_PART_NUM >= ulFuncID) || (OM_FUNCID_MAX_NUM <= ulFuncID))
    {
        PS_LOG1(ACPU_PID_OM_CALLBACK, 0, PS_PRINT_WARNING,
                        "OM_CallBackMsgProc:ucModuleId is overflow :", (VOS_INT32)ulFuncID);

        VOS_UnreserveMsg(ACPU_PID_OM, pMsg);

        return;
    }

    if (VOS_NULL_PTR == g_astAcpuOmFuncIdProcTbl[ulFuncID].pOmFuncProc)
    {
        PS_LOG1(ACPU_PID_OM_CALLBACK, 0, PS_PRINT_WARNING,
            "OM_CallBackMsgProc:The Process Function is NULL, ucModuleId is :", (VOS_INT32)ulFuncID);

        VOS_UnreserveMsg(ACPU_PID_OM, pMsg);

        return;
    }

    pOmFuncProc = g_astAcpuOmFuncIdProcTbl[ulFuncID].pOmFuncProc;
    pOmFuncProc(pstAppMsg, OM_AcpuSendData);

    VOS_UnreserveMsg(ACPU_PID_OM, pMsg);

    return;
}
/*****************************************************************************
 Prototype       : OM_AcpuCallBackFidInit
 Description     : The init function of Fid.
 Input           :
 Output          : ��
 Return Value    : VOS_OK - �ɹ�;
                   VOS_ERR - ʧ��

 History         : ---
    Date         : 2011-10-10
    Author       : w00184875
    Modification : Created function
 *****************************************************************************/
VOS_UINT32 OM_AcpuCallBackFidInit(enum VOS_INIT_PHASE_DEFINE ip)
{
    VOS_UINT32 ulRslt;

    switch( ip )
    {
        case VOS_IP_LOAD_CONFIG:
        {
            ulRslt = VOS_RegisterPIDInfo(ACPU_PID_OM_CALLBACK,
                        VOS_NULL_PTR,
                        (Msg_Fun_Type)OM_AcpuCallBackMsgProc);

            if( VOS_OK != ulRslt )
            {
                return VOS_ERR;
            }

            if(VOS_OK != VOS_RegisterMsgTaskPrio(ACPU_FID_OM_CALLBACK, VOS_PRIORITY_P6))
            {
                PS_LOG(ACPU_PID_OM_CALLBACK, 0, PS_PRINT_ERROR,
                    "OMCallBackFidInit:VOS_RegisterMsgTaskPrio failure !\n");

                return VOS_ERR;
            }
/*lint -e960 �޸���:���� */

#if (FEATURE_HISOCKET == FEATURE_ON)

            if((BSP_MODULE_SUPPORT == mdrv_misc_support_check(BSP_MODULE_TYPE_WIFI))
                && (VOS_TRUE == PPM_SockIsEnable()))
            {
                /* ����SOCKET���ݵ��Դ������� */
                ulRslt = VOS_RegisterSelfTaskPrio(ACPU_FID_OM_CALLBACK,
                                 (VOS_TASK_ENTRY_TYPE)PPM_SockOmServerTask,
                                 COMM_SOCK_SELFTASK_PRIO, RL_SOCK_TASK_STACK_SIZE);
                if ( VOS_NULL_BYTE == ulRslt )
                {
                    return VOS_ERR;
                }

                /* ����SOCKET���ݵ��Դ������� */
                ulRslt = VOS_RegisterSelfTaskPrio(ACPU_FID_OM_CALLBACK,
                                 (VOS_TASK_ENTRY_TYPE)PPM_SockAtServerTask,
                                 COMM_SOCK_SELFTASK_PRIO, RL_SOCK_TASK_STACK_SIZE);
                if ( VOS_NULL_BYTE == ulRslt )
                {
                    return VOS_ERR;
                }
            }

#endif

/*lint +e960 �޸���:���� */
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

