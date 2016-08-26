/*****************************************************************************

                  ��Ȩ���� (C), 2001-2011, ��Ϊ�������޹�˾

*****************************************************************************
  �� �� ��   : osm.h
  �� �� ��   : V1.0
  ��    ��   : ����/00130424
  ��������   : 2008��07��07��
  ��������   : OSL�ӿ�����
  �����б�   : ��
  �޸���ʷ   :
  1.��    �� : 2008��07��07��
    ��    �� : ����/00130424
    �޸����� : �����ļ�
*****************************************************************************/

#ifndef __OSM_H__
#define __OSM_H__

#include "vos.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif

typedef struct
{
    VOS_UINT32 ulMsgId;
    VOS_UINT32 ulParam2;
    VOS_UINT8 *ulParam1;
} OS_MSG_STRU;

typedef struct
{
    VOS_UINT32 ulTimeId;
    VOS_UINT32 ulPara;    /* ��Ӧԭ����ulParam2*/
} OSM_MSG_TIMER_STRU;


#define HAL_SDMLOG  (VOS_VOID)vos_printf
#define MSP_MEMCPY(dst,src,count)   VOS_MemCpy(dst,src,count)
#define MSP_MEMSET(dst, val, count) VOS_MemSet(dst, val, count)

#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif /* __OSM_H__*/

