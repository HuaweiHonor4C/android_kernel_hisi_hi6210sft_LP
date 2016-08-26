/*****************************************************************************
//
//                  ��Ȩ���� (C), 2001-2011, ��Ϊ�������޹�˾
//
*****************************************************************************
//  �� �� ��   : msp_nvim.h
//  �� �� ��   : V1.0
//  ��    ��   : ����/00130424
//  ��������   : 2008��07��07��
//  ��������   : NV�����ӿڣ�������д��ɾ�������NV��Ĳ���.
//  �����б�   : NVM_Read, NVM_Write
//  �޸���ʷ   :
//  1.��    �� : 2008��07��07��
//    ��    �� : ����/00130424
//    �޸����� : �����ļ�
//
*****************************************************************************/

#ifndef __MSP_NVIM_H__
#define __MSP_NVIM_H__

#include "vos.h"
#include "NVIM_Interface.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


#if defined (INSTANCE_1)
#define NVM_Read(usID,pItem,ulLength)                NV_ReadEx(MODEM_ID_1,(VOS_UINT16)(usID),(pItem),(VOS_UINT32)(ulLength))

#define NVM_Write(usID,pItem,ulLength)               NV_WriteEx(MODEM_ID_1,(VOS_UINT16)(usID),(pItem),(VOS_UINT32)(ulLength))
#else
#define NVM_Read(usID,pItem,ulLength)                NV_ReadEx(MODEM_ID_0,(VOS_UINT16)(usID),(pItem),(VOS_UINT32)(ulLength))

#define NVM_Write(usID,pItem,ulLength)               NV_WriteEx(MODEM_ID_0,(VOS_UINT16)(usID),(pItem),(VOS_UINT32)(ulLength))
#endif

#define NVM_GetItemLength(usID, pulLength)           NV_Get16BitLength((usID), (pulLength))

#define NVM_Flush()                                  NV_Flush()


#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif


#endif /* __MSP_DIAG_H__*/

