#ifndef __MSP_DIAG_COMM_H__
#define __MSP_DIAG_COMM_H__
#ifdef __cplusplus
extern "C"
{
#endif
#include "vos.h"
#include "mdrv.h"
/**************************************************************************
  �궨��
**************************************************************************/
/*���PS��MODID ��DIAG_AIR_MSG_LOG_ID�ĵط����滻��DIAG_ID*/
#define DIAG_ID(module_id, log_type)   (VOS_UINT32)(module_id | (log_type << 12))

#define MODID(module_id, log_type) DIAG_ID(module_id, log_type)

#define DIAG_AIR_MSG_LOG_ID(module_id, is_up_link)  DIAG_ID(module_id, is_up_link) /*module_id��ӦPID*/


/*is_up_linkȡֵ*/
#define OS_MSG_UL                (0x01)/* ��ʾ������Ϣ*/
#define OS_MSG_DL                (0x02)/* ��ʾ������Ϣ*/


#define DIAG_SIDE_UE             (0x1)  /* ��ʾUE���յĿտ���Ϣ��NET-->UE*/
#define DIAG_SIDE_NET            (0x2)  /* ��ʾNET���յĿտ���Ϣ��UE-->NET*/


/* �¼���Ϣ��ӡ������*/
#define LOG_TYPE_INFO            0x00000008UL
#define LOG_TYPE_AUDIT_FAILURE   0x00000004UL
#define LOG_TYPE_AUDIT_SUCCESS   0x00000002UL
#define LOG_TYPE_ERROR           0x00000001UL
#define LOG_TYPE_WARNING         0x00000010UL

/*diag fw����AGENTģ��������Լ���Ӧ�Ļظ���Ϣ*/
/*ԭ������diag_message_id.h��,*/
#define ID_MSG_DIAG_HSO_DISCONN_IND                 (0x00010004)

/**************************************************************************
  �ṹ����
**************************************************************************/
typedef struct
{
    VOS_UINT32 ulId;
    VOS_UINT32 ulMessageID;  /* Specify the message id.*/
    VOS_UINT32 ulSideId;     /* �տ���Ϣ�ķ���*/
    VOS_UINT32 ulDestMod;    /* Ŀ��ģ��*/
    VOS_UINT32 ulDataSize;   /* the data size in bytes.*/
    VOS_VOID* pData;      /* Pointer to the data buffer.*/
} DIAG_AIR_MSG_LOG_STRU;

typedef struct
{
    VOS_UINT32 ulId;
    VOS_UINT32 ulMessageID;  /* Specify the message id.*/
    VOS_UINT32 ulSideId;     /* VoLTE��Ϣ�ķ���,0x1:���ൽUE�� 0x2:UE�ൽ���� 0xFFFFFFFF:Ϊ��Чֵ,�����뷽���޹�*/
    VOS_UINT32 ulDestMod;    /* Ŀ��ģ��*/
    VOS_UINT32 ulDataSize;   /* the data size in bytes.*/
    VOS_VOID*  pData;        /* Pointer to the data buffer.*/
} DIAG_VoLTE_LOG_STRU;

typedef DIAG_AIR_MSG_LOG_STRU DIAG_LAYER_MSG_STRU;

typedef struct
{
    VOS_UINT32 ulMessageID;    /* Specify the message id.*/
    VOS_UINT32 ulDataSize;     /* the data size in bytes.*/
    VOS_VOID* pData;        /* Pointer to the data buffer.*/
} DIAG_USERPLANE_MSG_STRU;


#ifndef FEATURE_UPGRADE_TL
/* SOCPͶƱ��� */
enum SOCP_VOTE_ID_ENUM
{
    SOCP_VOTE_GU_OM_APP,    /* GU OM APP */
    SOCP_VOTE_GU_OM_COMM,   /* GU OM COMM*/
    SOCP_VOTE_GU_DSP,       /* GU DSP */
    SOCP_VOTE_DIAG_APP,     /* DIAG APP,����DRV APP */
    SOCP_VOTE_DIAG_COMM,    /* DIAG COMM,����LDSP��DRV COMM */
    SOCP_VOTE_DIAG_DEC,     /* DIAG���� */
    SOCP_VOTE_ID_BUTT
};
typedef unsigned int SOCP_VOTE_ID_ENUM_U32;

/* SOCPͶƱ���� */
enum SOCP_VOTE_TYPE_ENUM
{
    SOCP_VOTE_FOR_SLEEP,    /* ����˯�� */
    SOCP_VOTE_FOR_WAKE,     /* ����˯�� */
    SOCP_VOTE_TYPE_BUTT
};
typedef unsigned int SOCP_VOTE_TYPE_ENUM_U32;
#endif
/*****************************************************************************
   5 STRUCT
*****************************************************************************/
/* ���͸�MSP_PID_DIAG_APP_AGENT��ͶƱ������Ϣ�ṹ�� */
typedef struct
{
    VOS_MSG_HEADER
    SOCP_VOTE_ID_ENUM_U32   ulVoteId;    /* ͶƱ��� */
    SOCP_VOTE_TYPE_ENUM_U32 ulVoteType;  /* ͶƱ���� */
}DIAG_MSG_SOCP_VOTE_REQ_STRU;
#if(FEATURE_SOCP_ON_DEMAND == FEATURE_ON)
/* ����Ʊ��Ϣ�ظ� */
typedef struct
{
    VOS_MSG_HEADER
    SOCP_VOTE_ID_ENUM_U32   ulVoteId;    /* ͶƱ��� */
    SOCP_VOTE_TYPE_ENUM_U32 ulVoteType;  /* ͶƱ���� */
    VOS_UINT32              ulVoteRst;   /* ͶƱ�����0-�ɹ�, 0xFFFFFFFF-ʧ�� */
}DIAG_MSG_SOCP_VOTE_WAKE_CNF_STRU;
#endif

/**************************************************************************
  ��������
**************************************************************************/

/*****************************************************************************
 Function Name   : DIAG_PrintfV
 Description     : ��ӡ�ϱ��ӿ�
 Input           : VOS_UINT32 id:module id
                   VOS_CHAR* pszFileName:�ļ���
                   VOS_UINT32 ulLineNum:�к�
                   VOS_CHAR* pszFmt:��ӡ��ʽ
 Output          : None
 Return          : VOS_UINT32

 History         :
    1.w00182550      2012-11-20  Draft Enact

*****************************************************************************/
VOS_UINT32 DIAG_PrintfV(VOS_UINT32 id, VOS_CHAR* pszFileName, VOS_UINT32 ulLineNum, VOS_CHAR* pszFmt, ...);
/*****************************************************************************
 Function Name   : DIAG_ReportCommand
 Description     : MSP�ڲ������ϱ��ӿڣ���MSPʹ��
 Input           :VOS_UINT16 ulID
                VOS_UINT32 ulDataSize
                VOS_VOID* pData
 Output          : None
 Return          : VOS_UINT32

 History         :
    1.w00182550      2012-11-20  Draft Enact

*****************************************************************************/
VOS_UINT32 DIAG_ReportCommand(VOS_UINT16 ulID, VOS_UINT32 ulDataSize, VOS_VOID* pData);
/*****************************************************************************
 Function Name   : DIAG_ReportEventLog
 Description     : �¼��ϱ��ӿڣ���PSʹ��
 Input           :VOS_UINT32 id
                VOS_UINT32 ulEventID
 Output          : None
 Return          : VOS_UINT32

 History         :
    1.w00182550      2012-11-20  Draft Enact

*****************************************************************************/
VOS_UINT32 DIAG_ReportEventLog(VOS_UINT32 id, VOS_UINT32 ulEventID);
/*****************************************************************************
 Function Name   : DIAG_ReportAirMessageLog
 Description     : LTE��TDS�տ��ϱ��ӿڣ���PSʹ��
 Input           :DIAG_AIR_MSG_LOG_STRU* pRptMessage
 Output          : None
 Return          : VOS_UINT32

 History         :
    1.w00182550      2012-11-20  Draft Enact

*****************************************************************************/
VOS_UINT32 DIAG_ReportAirMessageLog(DIAG_AIR_MSG_LOG_STRU* pRptMessage);
/*****************************************************************************
 Function Name   : DIAG_ReportVoLTELog
 Description     : VoLTE��Ϣ�ϱ��ӿ�
 Input           : DIAG_VoLTE_LOG_STRU* pRptMessage
 Output          : None
 Return          : VOS_UINT32

 History         :
    1.fuxin      2013-12-30  create
*****************************************************************************/
VOS_UINT32 DIAG_ReportVoLTELog(DIAG_VoLTE_LOG_STRU* pRptMessage);
/*****************************************************************************
 Function Name   : DIAG_ReportLayerMessageLog
 Description     : �����Ϣ�ϱ��ӿڣ���PSʹ��
 Input           :DIAG_LAYER_MSG_STRU* pRptMessage
 Output          : None
 Return          : VOS_UINT32

 History         :
    1.w00182550      2012-11-20  Draft Enact

*****************************************************************************/
VOS_UINT32 DIAG_ReportLayerMessageLog(DIAG_LAYER_MSG_STRU* pRptMessage);
/*****************************************************************************
 Function Name   : DIAG_ReportUserPlaneMessageLog
 Description     : �û����ϱ��ӿڣ���PSʹ��
 Input           :DIAG_USERPLANE_MSG_STRU* pRptMessage
 Output          : None
 Return          : VOS_UINT32

 History         :
    1.w00182550      2012-11-20  Draft Enact

*****************************************************************************/
VOS_UINT32 DIAG_ReportUserPlaneMessageLog(DIAG_USERPLANE_MSG_STRU* pRptMessage);

/******************************************************************************
��������: LTE_DIAG_LOG
��������: ��ӡ�����͵Ĵ�ӡ�ӿں���
����˵��:
            ulModuleId[in]  : ģ��id����ӦPID
            ulSubModId[in]  : ��ģ��id
            ulLevel[in]     : ��ӡ����
            ulLogId[in]     : ���ļ��ź��кŸ���DIAG_LOG_ID����
            amount[in]      : �ɱ�������������ֵ6��������ulModuleId/ulLevel/ulLogId/amout��
            ...             : �ɱ����
����Լ��:
            1. ���Խ�ֹ�Դ˺������ж��η�װ��ֻ��ת����
            2. ֧�ֿɱ�Ĳ����������������ڵ���ʱ�ɲ���amountָ����������
            3. �ɱ����ֻ֧��int����
            4. Ŀǰ�汾��֧�ֵ�������������6���������Ĳ���Ĭ�϶���
******************************************************************************/
#if 0
extern VOS_INT32 LTE_DIAG_LOG(VOS_UINT32 ulModuleId, VOS_UINT32 ulSubModId,
                        VOS_UINT32 ulLevel, VOS_UINT32 ulLogId,
                        VOS_UINT32 amount, ...);
#endif



#ifdef __cplusplus
}
#endif
#endif

