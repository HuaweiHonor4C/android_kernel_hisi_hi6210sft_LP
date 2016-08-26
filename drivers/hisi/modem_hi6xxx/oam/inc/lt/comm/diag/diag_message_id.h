/******************************************************************************

    Copyright(C)2008,Hisilicon Co. LTD.

 ******************************************************************************
  File Name       : msp_diag.h
  Description     : msp_diag.h header file
  History         :
     1.w00182550       2012-11-20     Draft Enact
     2.
******************************************************************************/
#ifndef __DIAG_MESSAGE_ID_H__
#define __DIAG_MESSAGE_ID_H__
#ifdef __cplusplus
extern "C"
{
#endif
#include <msp.h>

/*DIAG��ϢID����*/
/*diag fw�����Լ��Ľ�����Ϣ��������*/
#define ID_MSG_DIAG_CMD_REQ_FW_TO_FW                (0x00010001)

/*diag fw����AGENTģ��������Լ���Ӧ�Ļظ���Ϣ*/
#define ID_MSG_DIAG_CMD_REQ_FW_TO_AGENT             (0x00010002)
#define ID_MSG_DIAG_CMD_CNF_AGENT_TO_FW             (0x00010003)
/*ID_MSG_DIAG_HSO_DISCONN_IND���������, msp_diag_common.h��*/
/*#define ID_MSG_DIAG_HSO_DISCONN_IND                 (0x00010004)*/

/*diag fw����APP AGENTģ��������Լ���Ӧ�Ļظ���Ϣ*/
#define ID_MSG_DIAG_CMD_REQ_FW_TO_APP_AGENT         (0x00010005)
#define ID_MSG_DIAG_CMD_CNF_APP_AGENT_TO_FW         (0x00010006)

/*diag AGENT����BBP AGENTģ�������*/
#define ID_MSG_REQ_DRX_DATA_SAMPLE_START            (0x00010009)
#define ID_MSG_REQ_DRX_DATA_SAMPLE_STOP             (0x0001000A)
#define ID_MSG_REQ_DRX_LOG_SAMPLE_START             (0x0001000B)
#define ID_MSG_REQ_DRX_LOG_SAMPLE_STOP              (0x0001000C)


/*diag AGENT����PSģ���HSO�ط�����*/
#define ID_MSG_DIAG_CMD_REPLAY_TO_PS    			(0x00010100)

/*����diag APP AGENT�Ķ˿����ݴ�����ϢID*/
#define ID_MSG_DIAG_CMD_PORT_REQ_TO_APP_AGENT       (0x00010200)

#ifdef __cplusplus
}
#endif

#endif

