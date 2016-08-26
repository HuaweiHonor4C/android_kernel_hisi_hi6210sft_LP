/*****************************************************************************/
/*                                                                           */
/*                Copyright 1999 - 2015, Huawei Tech. Co., Ltd.              */
/*                           ALL RIGHTS RESERVED                             */
/*                                                                           */
/* FileName: v_private.c                                                     */
/*                                                                           */
/* Author: dongtinghuan                                                      */
/*                                                                           */
/* Version: 1.0                                                              */
/*                                                                           */
/* Date: 2014-11                                                             */
/*                                                                           */
/* Description: �Ե���ӿڵ�˽�з�װ                                         */
/*                                                                           */
/* Others:                                                                   */
/*                                                                           */
/* History:                                                                  */
/* 1. Date:                                                                  */
/*    Author:                                                                */
/*    Modification: Create this file                                         */
/*                                                                           */
/*****************************************************************************/

#ifdef __cplusplus
#if __cplusplus
extern "C"{
#endif /* __cpluscplus */
#endif /* __cpluscplus */

#include "v_typdef.h"
#include "v_IO.h"
#include "v_int.h"
#include "vos_Id.h"
#include "v_sem.h"
#include "v_private.h"
#include "mdrv.h"

/*****************************************************************************
    Э��ջ��ӡ��㷽ʽ�µ�.C�ļ��궨��
*****************************************************************************/
#define    THIS_FILE_ID        PS_FILE_ID_V_PRIVATE_C

/*****************************************************************************
 Function   : VOS_GetDrvVerInfo
 Description: ��ȡ����汾��Ϣ
 Input      : enVerInfo -- ��ȡ����
 Return     : VOS_INT   -- ��ȡ����ֵ
 Other      :
 *****************************************************************************/
VOS_INT VOS_GetDrvVerInfo(VOS_GET_DRV_VER_INFO_ENUM_UINT32 enVerInfo)
{
    const MODEM_VER_INFO_S             *pstModemVerInfo;

    pstModemVerInfo = mdrv_ver_get_info();

    if ((VOS_NULL_PTR == pstModemVerInfo)||(VOS_GET_DRV_VER_INFO_BUTT <= enVerInfo))
    {
        VOS_ProtectionReboot(VOS_GET_DRV_VER_INFO_ERROR, (VOS_INT)PS_FILE_ID_V_PRIVATE_C,
                             (VOS_INT)enVerInfo,(VOS_CHAR *)VOS_NULL_PTR, 0);
        return VOS_ERROR;
    }

    if (VOS_GET_DRV_BOARD_PRODUCT_ID == enVerInfo)
    {
        return pstModemVerInfo->sthwverinfo.hwindex;
    }
    else if (VOS_GET_DRV_PROTOCOL_TYPE == enVerInfo)
    {
        return pstModemVerInfo->stproductinfo.eprotype;
    }
    else
    {
    }

    return pstModemVerInfo->stproductinfo.eboardatype;
}

#ifdef __cplusplus
#if __cplusplus
}
#endif /* __cpluscplus */
#endif /* __cpluscplus */

