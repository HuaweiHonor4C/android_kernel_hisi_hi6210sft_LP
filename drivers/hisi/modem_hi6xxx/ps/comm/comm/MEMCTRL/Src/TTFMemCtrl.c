


/******************************************************************************
   1 ͷ�ļ�����
******************************************************************************/
#include "TTFMemCtrl.h"
#include "mdrv.h"
#include "om.h"

#ifdef  __cplusplus
  #if  __cplusplus
  extern "C"{
  #endif
#endif


/*****************************************************************************
    Э��ջ��ӡ��㷽ʽ�µ�.C�ļ��궨��
*****************************************************************************/
#define    THIS_FILE_ID        PS_FILE_ID_TTF_MEMCTRL_C

/******************************************************************************
   2 �궨��
******************************************************************************/


/*****************************************************************************
   ��������
*****************************************************************************/
#if (OSA_CPU_CCPU == VOS_OSA_CPU)
extern VOS_UINT32 OM_TraceMsgHook(VOS_VOID* pMsg);
#else
extern VOS_UINT32 OM_AcpuTraceMsgHook(VOS_VOID* pMsg);
#endif


/*****************************************************************************
   ȫ�ֱ�������
*****************************************************************************/
TTF_MEMCTRL_ADDR_STRU                   g_stTtfMemCtrlAddr =
{
    /* stTtfMemCtrlAddrComm */
    {
        /* ucInitFlg */
        VOS_NULL,
        /* aucRsv[3] */
        {VOS_NULL, VOS_NULL, VOS_NULL}
    },
    /* astTtfMemCtrlAddrType */
    {
        {
            /* ulAttribute */
            VOS_NULL,
            /* ulLen */
            VOS_NULL,
            /* ulOffsetBaseLen */
            VOS_NULL
        },
        {
            /* ulAttribute */
            VOS_NULL,
            /* ulLen */
            VOS_NULL,
            /* ulOffsetBaseLen */
            VOS_NULL
        },
        {
            /* ulAttribute */
            VOS_NULL,
            /* ulLen */
            VOS_NULL,
            /* ulOffsetBaseLen */
            VOS_NULL
        },
        {
            /* ulAttribute */
            VOS_NULL,
            /* ulLen */
            VOS_NULL,
            /* ulOffsetBaseLen */
            VOS_NULL
        },
        {
            /* ulAttribute */
            VOS_NULL,
            /* ulLen */
            VOS_NULL,
            /* ulOffsetBaseLen */
            VOS_NULL
        }
    }
};

/*  TTF��̬�ڴ�ά��ʵ�� */
TTF_MEM_DYNAMIC_CTRL_ENTITY_STRU        g_stTtfMemDynamicCtrlEntity =
{
    /* ulTtfMemDynamicInitAddrFlag */
    VOS_NULL,
    /* ucSupportWcdma */
    TTF_MEMCTRL_SUPPORT_WCDMA_YES,
    /* aucRsv[3] */
    {VOS_NULL, VOS_NULL, VOS_NULL},
    /* astTtfMemAddrType */
    {
        {
            /* ulAttribute */
            VOS_NULL,
            /* ulLen */
            VOS_NULL,
            /* ulOffsetBaseLen */
            VOS_NULL
        },
        {
            /* ulAttribute */
            VOS_NULL,
            /* ulLen */
            VOS_NULL,
            /* ulOffsetBaseLen */
            VOS_NULL
        },
        {
            /* ulAttribute */
            VOS_NULL,
            /* ulLen */
            VOS_NULL,
            /* ulOffsetBaseLen */
            VOS_NULL
        },
        {
            /* ulAttribute */
            VOS_NULL,
            /* ulLen */
            VOS_NULL,
            /* ulOffsetBaseLen */
            VOS_NULL
        }
    },
    /* pucTtfMemBaseAddr */
    VOS_NULL_PTR,
    /* ulMemTotalLen */
    VOS_NULL,
};

/* BBPMSTͷ��TB����Ϣ */
WTTF_MACDL_BBPMST_TB_HEAD_STRU          g_stBbpMstTBHeadInfo;

/******************************************************************************
   6 ����ʵ��
******************************************************************************/
/*lint -save -e958 */

VOS_UINT8 TTF_MEMCTRL_SupportWcdma(void)
{
    VOS_UINT32                              ulResult;
    PLATAFORM_RAT_CAPABILITY_STRU           stPlatformRat;
    VOS_UINT32                              ulLoop;

    /* Read the NV Config Value */
    ulResult = NV_Read (en_NV_Item_Platform_RAT_CAP,
                        &stPlatformRat,
                        sizeof(PLATAFORM_RAT_CAPABILITY_STRU));

    /* Read NV Content is Failed , Configed the Vaule By Default Value */
    if ( VOS_OK != ulResult )
    {
        /* ��ȡNVʧ�ܣ�����Ĭ��֧��wcdma���� */
        vos_printf("read platform RAT capability fail \n");

        return TTF_MEMCTRL_SUPPORT_WCDMA_YES;
    }

    /* ��Ч�Լ�飬���ƽ̨֧�ֵĽ��뼼������Ϊ0������usRatNum���ڽ��뼼�����ֵ������֧��WCDMA */
    if ((0 == stPlatformRat.usRatNum) || (stPlatformRat.usRatNum > PLATFORM_MAX_RAT_NUM))
    {
        vos_printf("RatNum error! usRatNum: %d \n", stPlatformRat.usRatNum);

        return TTF_MEMCTRL_SUPPORT_WCDMA_YES;
    }

    /* ����aenRatList, �鿴�Ƿ�֧��Wģ */
    for ( ulLoop = 0; ulLoop < stPlatformRat.usRatNum; ulLoop++ )
    {
        if ( PLATFORM_RAT_WCDMA == stPlatformRat.aenRatList[ulLoop] )
        {
            return TTF_MEMCTRL_SUPPORT_WCDMA_YES;
        }
    }

    return TTF_MEMCTRL_SUPPORT_WCDMA_NO;
}
void TTF_MEMCTRL_ReadBBPMemConfig(void)
{
    VOS_UINT32                          ulResult;

    if (TTF_MEMCTRL_SUPPORT_WCDMA_NO == TTF_MEM_GET_SUPPORT_WCDMA())
    {
        return ;
    }

    /*Read the NV Config Value*/
    ulResult = NV_Read (en_NV_Item_WTTF_MACDL_BBPMST_TB_HEAD_Config,
                        &g_stBbpMstTBHeadInfo,
                        sizeof(WTTF_MACDL_BBPMST_TB_HEAD_STRU));

    /*Read NV Content is Failed , Configed the Vaule By Default Value*/
    if ( VOS_OK != ulResult )
    {
        vos_printf("read BBPMaster NV TB head config fail!\n");

#if (FEATURE_ON == FEATURE_MMU_MEDIUM)
        g_stBbpMstTBHeadInfo.ulTBHeadNum            = 440;
        g_stBbpMstTBHeadInfo.ulTBHeadReserved       = 40;
#else
        g_stBbpMstTBHeadInfo.ulTBHeadNum            = 220;
        g_stBbpMstTBHeadInfo.ulTBHeadReserved       = 20;
#endif
    }

    return ;

}


VOS_UINT32 TTF_MEMCTRL_CalcTotalDynamicMemLen(void)
{
    VOS_UINT32                           ulDynamicMemLen;

    /* ��ʽ���£�����ͷβ�Լ�BBPMaster��TTF�ڴ��֮���32byteΪ�����ڴ棬���ڼ��TTF�ڴ��Ƿ񱻲�*/
    /*
    *  ------------------------------------------------------
    * |              ͷ�������ֶ�0byte                       |
    *  ------------------------------------------------------
    * |      BbpMaster Head(���֧��Wģ���������ڴ�)         |
    *  ------------------------------------------------------
    * |      BbpMaster Data(���֧��Wģ���������ڴ�)         |
    *  ------------------------------------------------------
    * |                    TTF pool memory                   |
    *  ------------------------------------------------------
    */

    /* ��ʼ�������ڴ�Ϊ0 */
    ulDynamicMemLen = TTF_DYNAMIC_MEM_LEN_ZERO;

    /* Section 1:ͷ������ħ���ֶ� */
    TTF_DYNAMIC_MEM_SET_OFFSETBASE(TTF_DYNAMIC_MEM_HEAD_ADDR_TYPE, ulDynamicMemLen);
    TTF_DYNAMIC_MEM_SET_LEN(TTF_DYNAMIC_MEM_HEAD_ADDR_TYPE, TTF_DYNAMIC_MEM_LEN_ZERO);
    TTF_DYNAMIC_MEM_SET_ATTRIBUTE(TTF_DYNAMIC_MEM_HEAD_ADDR_TYPE, TTF_MEMCTRL_TYPE_EXIST_FLG);
    ulDynamicMemLen += TTF_GET_32BYTE_ALIGN_VALUE(TTF_DYNAMIC_MEM_GET_LEN(TTF_DYNAMIC_MEM_HEAD_ADDR_TYPE));

    /* ÿһ�ν���������32�ֽ�ħ���ֶ� */
    ulDynamicMemLen += TTF_GET_32BYTE_ALIGN_VALUE(TTF_MEM_MAGIC_NUM_LEN);

    /* �����Ƿ�֧��WCDMA��ȷ���Ƿ����BBPMASTER�ڴ� */
    if (TTF_MEMCTRL_SUPPORT_WCDMA_YES == TTF_MEM_GET_SUPPORT_WCDMA())
    {
        /*
        * BBPMaster data������ʼλ�ñ���8�ֽڶ��룬��ΪBBPӲ��Ҫ��
        * �ʽ�BBPMaster��ͷ��������8btyte����
        * BBP Master����������ɣ�ͷ�������ݲ������£�
        *  --------------------------------------------------------------
        * |  BbpMasterHeadLen = ulTBHeadNum * 128(byte)                   |
        *  --------------------------------------------------------------
        * |  BbpMasterDataLen = (ulTBHeadNum-ulTBHeadReserved)*5408(byte) |
        *  --------------------------------------------------------------
        * BBP Head��data 32byte����
        */

        /* Section 2:BBPMaster head */
        TTF_DYNAMIC_MEM_SET_OFFSETBASE(TTF_DYNAMIC_MEM_BBP_MASTER_HEAD_ADDR_TYPE, ulDynamicMemLen);
        TTF_DYNAMIC_MEM_SET_LEN(TTF_DYNAMIC_MEM_BBP_MASTER_HEAD_ADDR_TYPE, WTTF_BBPMST_MAC_TB_HEAD_BUFF_LEN);
        TTF_DYNAMIC_MEM_SET_ATTRIBUTE(TTF_DYNAMIC_MEM_BBP_MASTER_HEAD_ADDR_TYPE, TTF_MEMCTRL_TYPE_EXIST_FLG);
        ulDynamicMemLen += TTF_GET_32BYTE_ALIGN_VALUE(TTF_DYNAMIC_MEM_GET_LEN(TTF_DYNAMIC_MEM_BBP_MASTER_HEAD_ADDR_TYPE));

        /* ÿһ�ν���������32�ֽ�ħ���ֶ� */
        ulDynamicMemLen += TTF_GET_32BYTE_ALIGN_VALUE(TTF_MEM_MAGIC_NUM_LEN);

        /* Section 3:BBPMaster data */
        TTF_DYNAMIC_MEM_SET_OFFSETBASE(TTF_DYNAMIC_MEM_BBP_MASTER_DATA_ADDR_TYPE, ulDynamicMemLen);
        TTF_DYNAMIC_MEM_SET_LEN(TTF_DYNAMIC_MEM_BBP_MASTER_DATA_ADDR_TYPE, WTTF_BBPMST_MAC_TB_DATA_BUFF_LEN);
        TTF_DYNAMIC_MEM_SET_ATTRIBUTE(TTF_DYNAMIC_MEM_BBP_MASTER_DATA_ADDR_TYPE, TTF_MEMCTRL_TYPE_EXIST_FLG);
        ulDynamicMemLen += TTF_GET_32BYTE_ALIGN_VALUE(TTF_DYNAMIC_MEM_GET_LEN(TTF_DYNAMIC_MEM_BBP_MASTER_DATA_ADDR_TYPE));

        /* ÿһ�ν���������32�ֽ�ħ���ֶ� */
        ulDynamicMemLen += TTF_GET_32BYTE_ALIGN_VALUE(TTF_MEM_MAGIC_NUM_LEN);
    }

    /* Section 4:TTF�ڲ�ʹ�õ��ڴ� */
    TTF_DYNAMIC_MEM_SET_OFFSETBASE(TTF_DYNAMIC_MEM_TTF_INTERNAL_ADDR_TYPE, ulDynamicMemLen);
    TTF_DYNAMIC_MEM_SET_LEN(TTF_DYNAMIC_MEM_TTF_INTERNAL_ADDR_TYPE, TTF_MEM_POOL_SIZE);
    TTF_DYNAMIC_MEM_SET_ATTRIBUTE(TTF_DYNAMIC_MEM_TTF_INTERNAL_ADDR_TYPE, TTF_MEMCTRL_TYPE_EXIST_FLG);
    ulDynamicMemLen += TTF_GET_32BYTE_ALIGN_VALUE(TTF_DYNAMIC_MEM_GET_LEN(TTF_DYNAMIC_MEM_TTF_INTERNAL_ADDR_TYPE));

    /* ÿһ�ν���������32�ֽ�ħ���ֶ� */
    ulDynamicMemLen += TTF_GET_32BYTE_ALIGN_VALUE(TTF_MEM_MAGIC_NUM_LEN);

    return ulDynamicMemLen;
}


VOS_UINT32 TTF_MEMCTRL_DynamicAddrInit(VOS_VOID)
{
    VOS_UINT32                          ulDynamicTtfMemLen;
    TTF_MEMCTRL_ADDR_TYPE_STRU         *pstTtfMemDynamicAddr;
    VOS_UINT8                          *pucDynamicTtfMemBaseAddr;
    VOS_UINT32                          ulLoop;
    VOS_UINT32                          ulMagicDataAddr;

    /* ��ʼ������ֻ�ᱻPID��ʼ������˳����� */
    if ( TTF_MEMCTRL_TYPE_INIT_FLG == TTF_MEM_GET_DYNAMIC_INIT_ADDR_FLAG() )
    {
        vos_printf("TTF_MEMCTRL_DynamicAddrInit, Warning, Dynamic Memory were already initialized!\n");

        return VOS_OK;
    }

    /* �ж��Ƿ�֧��wcdma�����ں����Ƿ���Ҫ����BBPMaster����ڴ� */
    TTF_MEM_SET_SUPPORT_WCDMA(TTF_MEMCTRL_SupportWcdma());

    /* ��ʼ��BBPMaster������ */
    TTF_MEMCTRL_ReadBBPMemConfig();

    pstTtfMemDynamicAddr = &TTF_MEM_GET_DYNAMIC_ADDR_TYPE();
    VOS_MemSet(pstTtfMemDynamicAddr, 0, sizeof(TTF_MEMCTRL_ADDR_TYPE_STRU) * TTF_DYNAMIC_MEM_ADDR_TYPE_BUTT);

    /* ����TTF����Ҫ������ڴ��С */
    ulDynamicTtfMemLen = TTF_MEMCTRL_CalcTotalDynamicMemLen();

    /* ����drv�ṩ�Ľӿڣ�����uncached�ڴ� */
    pucDynamicTtfMemBaseAddr = (VOS_UINT8 *)TTF_UNCACHED_MEM_BSP_ALLOC(ulDynamicTtfMemLen);
    if (VOS_NULL_PTR == pucDynamicTtfMemBaseAddr)
    {
        vos_printf("TTF_MEMCTRL_DynamicAddrInit, Memory Alloc Fail!!Length:0x%x \tSupporWcdma:%d \tBbpMaster Head Num:%d \tBbpMaster Data Num:%d\r\n",
                    ulDynamicTtfMemLen,
                    TTF_MEM_GET_SUPPORT_WCDMA(),
                    WTTF_BBPMST_MAC_TB_HEAD_NUM,
                    WTTF_BBPMST_MAC_TB_DATA_NUM);

        return VOS_ERR;
    }

    TTF_MEM_SET_TTF_BASE_ADDR(pucDynamicTtfMemBaseAddr);

    TTF_MEM_SET_TTF_TOTAL_LEN(ulDynamicTtfMemLen);

    /*
    * ��ʼ��ͷ��32byte�����������ʼ��ħ���֣����ڼ��TTF�ڴ��Ƿ񱻲�
    * ��ǰ���ý�32byte����Ϊ5A5A......5A5A������32byte����0��1�ͱȽ������
    * һ��32byte�ڴ���������ݱ��ȣ��Ǳ��ⲿ�����ݱض�����5A5A....5A5A
    */
    for (ulLoop = TTF_DYNAMIC_MEM_HEAD_ADDR_TYPE; ulLoop < TTF_DYNAMIC_MEM_ADDR_TYPE_BUTT; ulLoop++)
    {
        ulMagicDataAddr = (VOS_UINT32)((VOS_UINT_PTR)TTF_MEM_GET_TTF_BASE_ADDR() + TTF_DYNAMIC_MEM_GET_OFFSETBASE(ulLoop) + TTF_DYNAMIC_MEM_GET_LEN(ulLoop));
        if (TTF_MEMCTRL_TYPE_EXIST_FLG == TTF_DYNAMIC_MEM_GET_ATTRIBUTE(ulLoop))
        {
            VOS_MemSet((VOS_VOID *)(VOS_UINT_PTR)ulMagicDataAddr, TTF_MEM_MAGIC_NUM_VALUE, TTF_MEM_MAGIC_NUM_LEN);
        }
    }

    TTF_MEM_SET_DYNAMIC_INIT_ADDR_FLAG(TTF_MEMCTRL_TYPE_INIT_FLG);

    return VOS_OK;
}



VOS_UINT32 TTF_MEMCTRL_ReportMemErrorInd( VOS_UINT32 ulPid,
                                                 TTF_DYNAMIC_MEM_ADDR_TYPE_ENUM_UINT32 ulMagicNumFlag,
                                                 VOS_UINT8 *pucMagicNum,
                                                 TTF_MEMCTRL_ADDR_TYPE_STRU *pststTtfMemAddr)
{
    TTF_MEM_ERROR_INFO_IND_STRU                     stTtfMemErrorInfoInd;

    VOS_MemSet(&stTtfMemErrorInfoInd, 0, sizeof(TTF_MEM_ERROR_INFO_IND_STRU));

    stTtfMemErrorInfoInd.ulSenderCpuId              = VOS_LOCAL_CPUID;
    stTtfMemErrorInfoInd.ulSenderPid                = ulPid;
    stTtfMemErrorInfoInd.ulReceiverCpuId            = VOS_LOCAL_CPUID;
    stTtfMemErrorInfoInd.ulReceiverPid              = ulPid;
    stTtfMemErrorInfoInd.ulLength                   = (sizeof(TTF_MEM_ERROR_INFO_IND_STRU) - VOS_MSG_HEAD_LENGTH);

    stTtfMemErrorInfoInd.usMsgName                  = ID_TRACE_TTF_MEM_ERR_IND;
    stTtfMemErrorInfoInd.ulMagicNumFlag             = ulMagicNumFlag;

    VOS_MemCpy(stTtfMemErrorInfoInd.aulMagicNum, pucMagicNum, TTF_MEM_MAGIC_NUM_LEN);
    VOS_MemCpy(&stTtfMemErrorInfoInd.astTtfMemAddrType[0], pststTtfMemAddr, sizeof(TTF_MEMCTRL_ADDR_TYPE_STRU) * TTF_DYNAMIC_MEM_ADDR_TYPE_BUTT);

#if (OSA_CPU_CCPU == VOS_OSA_CPU)
    OM_TraceMsgHook((VOS_VOID *)&stTtfMemErrorInfoInd);
#else
    OM_AcpuTraceMsgHook((VOS_VOID *)&stTtfMemErrorInfoInd);
#endif

    return VOS_OK;
}



void TTF_MEMCTRL_CheckMagicNum(TTF_MEMCTRL_CALLBACK_FUNC_FLAG_ENUM_ENUM8 ucCallbackFlag,
                                            VOS_UINT32 ulPid)
{
    const VOS_UINT8                     aucMagicNumValue[32] = {TTF_MEM_MAGIC_NUM_VALUE, TTF_MEM_MAGIC_NUM_VALUE,
                                                                TTF_MEM_MAGIC_NUM_VALUE, TTF_MEM_MAGIC_NUM_VALUE,
                                                                TTF_MEM_MAGIC_NUM_VALUE, TTF_MEM_MAGIC_NUM_VALUE,
                                                                TTF_MEM_MAGIC_NUM_VALUE, TTF_MEM_MAGIC_NUM_VALUE,
                                                                TTF_MEM_MAGIC_NUM_VALUE, TTF_MEM_MAGIC_NUM_VALUE,
                                                                TTF_MEM_MAGIC_NUM_VALUE, TTF_MEM_MAGIC_NUM_VALUE,
                                                                TTF_MEM_MAGIC_NUM_VALUE, TTF_MEM_MAGIC_NUM_VALUE,
                                                                TTF_MEM_MAGIC_NUM_VALUE, TTF_MEM_MAGIC_NUM_VALUE,
                                                                TTF_MEM_MAGIC_NUM_VALUE, TTF_MEM_MAGIC_NUM_VALUE,
                                                                TTF_MEM_MAGIC_NUM_VALUE, TTF_MEM_MAGIC_NUM_VALUE,
                                                                TTF_MEM_MAGIC_NUM_VALUE, TTF_MEM_MAGIC_NUM_VALUE,
                                                                TTF_MEM_MAGIC_NUM_VALUE, TTF_MEM_MAGIC_NUM_VALUE,
                                                                TTF_MEM_MAGIC_NUM_VALUE, TTF_MEM_MAGIC_NUM_VALUE,
                                                                TTF_MEM_MAGIC_NUM_VALUE, TTF_MEM_MAGIC_NUM_VALUE,
                                                                TTF_MEM_MAGIC_NUM_VALUE, TTF_MEM_MAGIC_NUM_VALUE,
                                                                TTF_MEM_MAGIC_NUM_VALUE, TTF_MEM_MAGIC_NUM_VALUE};
    VOS_UINT32                          ulMagicDataAddr;
    VOS_UINT32                          ulLoop;

    if (VOS_FALSE == TTF_MEM_GET_DYNAMIC_INIT_ADDR_FLAG())
    {
        return;
    }

    for (ulLoop = TTF_DYNAMIC_MEM_HEAD_ADDR_TYPE; ulLoop < TTF_DYNAMIC_MEM_ADDR_TYPE_BUTT; ulLoop++)
    {
        /* ��ȡ��̬�ڴ�ͷ��ħ���ֶε�ַ */
        ulMagicDataAddr = (VOS_UINT32)((VOS_UINT_PTR)TTF_MEM_GET_TTF_BASE_ADDR() + TTF_DYNAMIC_MEM_GET_OFFSETBASE(ulLoop) + TTF_DYNAMIC_MEM_GET_LEN(ulLoop));

        if (TTF_MEMCTRL_TYPE_EXIST_FLG == TTF_DYNAMIC_MEM_GET_ATTRIBUTE(ulLoop))
        {
            if (0 != VOS_MemCmp((VOS_VOID *)(VOS_UINT_PTR)ulMagicDataAddr, aucMagicNumValue, TTF_MEM_MAGIC_NUM_LEN))
            {
                if (TTF_MEMCTRL_CALLBACK_FUNC_DRV == ucCallbackFlag)
                {
                   LogPrint1("Section:%d, Magic number value has been changed \r\n", (VOS_INT)ulLoop);
                }
                else
                {
                    TTF_MEMCTRL_ReportMemErrorInd(  ulPid,
                                                    ulLoop,
                                                    (VOS_UINT8 *)((VOS_UINT_PTR)ulMagicDataAddr),
                                                    &TTF_MEM_GET_DYNAMIC_ADDR_TYPE());
                }
            }
        }
    }

    return;
}
void TTF_MEMCTRL_DRVCallbackFunc(void)
{
    TTF_MEMCTRL_CheckMagicNum(TTF_MEMCTRL_CALLBACK_FUNC_DRV, TTF_MEMCTRL_PID_INVAILD);
}



void TTF_MEMCTRL_EnableAdvanceCheck (void)
{
    /* ���ڴ��⺯���ҹ��������л������ϣ������д�ӡ����,���õ���ӿڣ�OSAL_TaskSwitchHookAdd */
    #if 0
    OSAL_TaskSwitchHookAdd((OSAL_FUNCPTR)TTF_MEMCTRL_DRVCallbackFunc);
    #endif
}
void TTF_MEMCTRL_DisableAdvanceCheck(void)
{
    /*ȥ���Ӻ�����OSAL_TaskSwitchHookDel */
    #if 0
    OSAL_TaskSwitchHookDel((OSAL_FUNCPTR)TTF_MEMCTRL_DRVCallbackFunc);
    #endif
}
void TTF_MEMCTRL_CheckTTFDynamicMem(VOS_UINT32 ulPid)
{
    TTF_MEMCTRL_CheckMagicNum(TTF_MEMCTRL_CALLBACK_FUNC_TTF, ulPid);

    return ;
}

/*****************************************************************************
 �� �� ��  : TTF_MEMCTRL_GetTtfInternalMemBaseAddr
 ��������  : ��ȡTTF�ڲ�ʹ�õĻ���ַ������HDLC,CICOM,BBPMASTER CIRCLE,ACORE POOL,CCORE POOL
 �������  : VOS_VOID
 �������  : ��
 �� �� ֵ  : ��
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2012��08��6��
    ��    ��   : gebaizhang
    �޸�����   : Created
*****************************************************************************/
VOS_UINT_PTR TTF_MEMCTRL_GetTtfInternalMemBaseAddr(VOS_VOID)
{
    VOS_UINT_PTR           ulBaseAddr;

#if (VOS_WIN32 == VOS_OS_VER)
    BSP_DDR_SECT_QUERY   stQuery;
    BSP_DDR_SECT_INFO    stInfo;

    stQuery.enSectType = BSP_DDR_SECT_TYPE_TTF;
    DRV_GET_FIX_DDR_ADDR(&stQuery, &stInfo);

    ulBaseAddr = (VOS_UINT_PTR)stInfo.pSectPhysAddr;
#else
    ulBaseAddr = (VOS_UINT_PTR)(TTF_MEM_GET_TTF_BASE_ADDR() + TTF_DYNAMIC_MEM_GET_OFFSETBASE(TTF_DYNAMIC_MEM_TTF_INTERNAL_ADDR_TYPE));
#endif

    return ulBaseAddr;
}


VOS_UINT32   TTF_MEMCTRL_GetMemTotalLen(void)
{
    VOS_UINT32                          ulMemTotalLen;

#if (VOS_WIN32 == VOS_OS_VER)
    BSP_DDR_SECT_QUERY                  stQuery;
    BSP_DDR_SECT_INFO                   stInfo;
    signed int                          lRslt;

    stQuery.enSectType = BSP_DDR_SECT_TYPE_TTF;
    stInfo.ulSectSize  = TTF_MEMCTRL_INVAILD_SIZE;

    lRslt = DRV_GET_FIX_DDR_ADDR(&stQuery, &stInfo);

    if (BSP_OK != lRslt)
    {
        stInfo.ulSectSize = TTF_MEMCTRL_INVAILD_SIZE;
    }

    ulMemTotalLen    = stInfo.ulSectSize;
#else
    ulMemTotalLen    = TTF_DYNAMIC_MEM_GET_LEN(TTF_DYNAMIC_MEM_TTF_INTERNAL_ADDR_TYPE);
#endif

    return ulMemTotalLen;
}


VOS_UINT32   TTF_MEMCTRL_AddrInit(void)
{
    VOS_UINT8                           ucTypeLoop;
    VOS_UINT8                           ucTypeLoopOne   = 0;
    VOS_UINT32                          ulTypeOffestLen = 0;
    VOS_UINT32                          ulCCoreTypeLen  = 0;
    VOS_UINT32                          ulMemTotalLen   = 0;

    if (TTF_MEMCTRL_TYPE_INIT_FLG == TTF_MEMCTRL_GET_ADDR_INIT_FLG())
    {
         vos_printf("TTF_MEMCTRL_AddrInit::Addrs were already initialized!\n");
         return 0;
    }

    memset(&g_stTtfMemCtrlAddr, 0, sizeof(TTF_MEMCTRL_ADDR_STRU));

    /* ����TTF�ڲ��ڴ�������͵��ڴ泤�� */
    TTF_MEMCTRL_SET_TYPE_LEN(TTF_MEMCTRL_HDLC_MASTER_ADDR_TYPE, TTF_HDLC_MASTER_LINK_TOTAL_LEN);
    TTF_MEMCTRL_SET_TYPE_LEN(TTF_MEMCTRL_CIPHER_MASTER_ADDR_TYPE, TTF_PARA_MEM_TOTAL_LEN);
    TTF_MEMCTRL_SET_TYPE_LEN(TTF_MEMCTRL_BBP_MASTER_ADDR_TYPE, TTF_BBPMST_BUFF_TOTAL_LEN);
    TTF_MEMCTRL_SET_TYPE_LEN(TTF_MEMCTRL_ACORE_POOL_ADDR_TYPE, TTF_ACORE_POOL_MEM_TOTAL_LEN);

    ulMemTotalLen   = TTF_MEMCTRL_GetMemTotalLen();

    if (TTF_MEMCTRL_INVAILD_SIZE == ulMemTotalLen)
    {
        vos_printf("TTF_MEMCTRL_AddrInit:ulMemTotalLen is invalid!\n");
        return 0;
    }

    ulCCoreTypeLen  = (ulMemTotalLen - TTF_HDLC_MASTER_LINK_TOTAL_LEN
                        - TTF_PARA_MEM_TOTAL_LEN - TTF_BBPMST_BUFF_TOTAL_LEN - TTF_ACORE_POOL_MEM_TOTAL_LEN);
    TTF_MEMCTRL_SET_TYPE_LEN(TTF_MEMCTRL_CCORE_POOL_ADDR_TYPE, ulCCoreTypeLen);


    for (ucTypeLoop = 0; ucTypeLoop < TTF_MEMCTRL_ADDR_TYPE_BUTT; ucTypeLoop++)
    {
        if (0 != TTF_MEMCTRL_GET_TYPE_LEN(ucTypeLoop))
        {
            TTF_MEMCTRL_SET_TYPE_FLG(ucTypeLoop, TTF_MEMCTRL_TYPE_EXIST_FLG);
        }

        ulTypeOffestLen += TTF_MEMCTRL_GET_TYPE_LEN(ucTypeLoop);
        ucTypeLoopOne   =  ucTypeLoop + 1;
        if (ucTypeLoopOne < TTF_MEMCTRL_ADDR_TYPE_BUTT)
        {
            /* TTF ���������ڴ�����ڻ�ַ��ƫ�Ƴ������� */
            TTF_MEMCTRL_SET_TYPE_OFFSET_BASE_LEN(ucTypeLoopOne, ulTypeOffestLen);
        }
    }

    TTF_MEMCTRL_SET_ADDR_INIT_FLG(TTF_MEMCTRL_TYPE_INIT_FLG);

    return 0;
}



VOS_UINT32   TTF_MEMCTRL_ACORE_AddrInit(VOS_VOID)
{
    TTF_MEMCTRL_AddrInit();

    TTF_MEMCTRL_SET_TYPE_FLG(TTF_MEMCTRL_HDLC_MASTER_ADDR_TYPE, TTF_MEMCTRL_TYPE_VISIBLE_FLG);
    TTF_MEMCTRL_SET_TYPE_FLG(TTF_MEMCTRL_ACORE_POOL_ADDR_TYPE, TTF_MEMCTRL_TYPE_VISIBLE_FLG);

    return 0;
}



VOS_UINT32   TTF_MEMCTRL_CCORE_AddrInit(VOS_VOID)
{
    TTF_MEMCTRL_AddrInit();

    TTF_MEMCTRL_SET_TYPE_FLG(TTF_MEMCTRL_CIPHER_MASTER_ADDR_TYPE, TTF_MEMCTRL_TYPE_VISIBLE_FLG);
    TTF_MEMCTRL_SET_TYPE_FLG(TTF_MEMCTRL_BBP_MASTER_ADDR_TYPE, TTF_MEMCTRL_TYPE_VISIBLE_FLG);
    TTF_MEMCTRL_SET_TYPE_FLG(TTF_MEMCTRL_CCORE_POOL_ADDR_TYPE, TTF_MEMCTRL_TYPE_VISIBLE_FLG);

    return 0;
}


VOS_UINT32  TTF_MEMCTRL_GetOffsetBaseLen(VOS_UINT32  ulType)
{
    VOS_UINT32                          ulAttribute;

    if (ulType >= TTF_MEMCTRL_ADDR_TYPE_BUTT)
    {
        vos_printf("TTF_MEMCTRL_GetOffsetBaseLen::ulType:%d is invalid!\n", ulType);

        return 0;
    }

    if (TTF_MEMCTRL_TYPE_INIT_FLG != TTF_MEMCTRL_GET_ADDR_INIT_FLG())
    {
        vos_printf("TTF_MEMCTRL_GetOffsetBaseLen::addr is not init!\n");

        return 0;
    }

    ulAttribute = TTF_MEMCTRL_GET_TYPE_ATTRIBUTE(ulType);
    if ((TTF_MEMCTRL_TYPE_EXIST_FLG == (TTF_MEMCTRL_TYPE_EXIST_FLG & ulAttribute))
            && (TTF_MEMCTRL_TYPE_VISIBLE_FLG == (TTF_MEMCTRL_TYPE_VISIBLE_FLG & ulAttribute)))
    {
        return TTF_MEMCTRL_GET_TYPE_OFFSET_BASE_LEN(ulType);
    }

    vos_printf("TTF_MEMCTRL_GetOffsetBaseLen::ulType:%d, ulAttribute:%d is not exist or not visible!\n",
                    ulType, ulAttribute);

    return 0;
}


VOS_UINT_PTR  TTF_MEMCTRL_GetTypeAddr(VOS_UINT_PTR ulAddr, VOS_UINT32 ulType)
{
    VOS_UINT32                          ulOffsetBaseLen;
    VOS_UINT_PTR                        ulTtfMemCtrlTypeAddr;

    if (ulType >= TTF_MEMCTRL_ADDR_TYPE_BUTT)
    {
        vos_printf("TTF_MEMCTRL_GetTypeAddr::ulType:%d is invalid!\n", ulType);
        return 0;
    }

    ulOffsetBaseLen         = TTF_MEMCTRL_GetOffsetBaseLen(ulType);
    ulTtfMemCtrlTypeAddr    = ulAddr + ulOffsetBaseLen;

    return  ulTtfMemCtrlTypeAddr;
}


VOS_VOID TTF_MEMCTRL_AddrPrint(VOS_VOID)
{
    VOS_UINT32                          ulLoop;
    VOS_UINT_PTR                        ulBaseAddr;

    /* ��̬�ڴ������Ϣ����̬�����ڴ����ַ�Լ��Ƿ�֧��WCDMA */
    vos_printf("Ttf Dynamic Mem Info: \r\nInit Flag:%d \tIsSupportWcdma:%d \tTtf Mem Base Addr:0x%x \tMem TotalLen:0x%x\r\n",
                TTF_MEM_GET_DYNAMIC_INIT_ADDR_FLAG(),
                TTF_MEM_GET_SUPPORT_WCDMA(),
                (VOS_UINT32)(VOS_UINT_PTR)TTF_MEM_GET_TTF_BASE_ADDR(),
                TTF_MEM_GET_TTF_TOTAL_LEN());

    vos_printf("Ttf Dynamic Mem Section Info:\r\n");

    for (ulLoop = TTF_DYNAMIC_MEM_HEAD_ADDR_TYPE; ulLoop < TTF_DYNAMIC_MEM_ADDR_TYPE_BUTT; ulLoop++)
    {
        vos_printf("[Section]:%d \t[Attribute]:%d \t[StartAddr]:0x%-8x \t[Len]:0x%-8x \t[OffsetBaseLen]:0x%-8x\r\n",
                    ulLoop,
                    TTF_DYNAMIC_MEM_GET_ATTRIBUTE(ulLoop),
                    TTF_MEM_GET_TTF_BASE_ADDR() + TTF_DYNAMIC_MEM_GET_OFFSETBASE(ulLoop),
                    TTF_DYNAMIC_MEM_GET_LEN(ulLoop),
                    TTF_DYNAMIC_MEM_GET_OFFSETBASE(ulLoop));
    }

    ulBaseAddr      = TTF_MEMCTRL_GetTtfInternalMemBaseAddr();

    vos_printf("\r\nTTF Internal Mem Base Addr:%p\r\n", ulBaseAddr);

    vos_printf("\r\nTTF Internal Mem Ctrl Addr Init is :%d\r\n", TTF_MEMCTRL_GET_ADDR_INIT_FLG());

    for (ulLoop = TTF_MEMCTRL_HDLC_MASTER_ADDR_TYPE; ulLoop < TTF_MEMCTRL_ADDR_TYPE_BUTT; ulLoop++)
    {
        vos_printf("[Section]:%d \t[Attribute]:%d \t[StartAddr]:%p \t[Len]:0x%-8x \t[OffsetBaseLen]:0x%-8x\r\n",
            ulLoop,
            TTF_MEMCTRL_GET_TYPE_ATTRIBUTE(ulLoop),
            TTF_MEMCTRL_GetTypeAddr((TTF_GET_32BYTE_ALIGN_VALUE(ulBaseAddr)), ulLoop),
            TTF_MEMCTRL_GET_TYPE_LEN(ulLoop),
            TTF_MEMCTRL_GET_TYPE_OFFSET_BASE_LEN(ulLoop));
    }

    return;
}
/*lint -restore */

#ifdef  __cplusplus
  #if  __cplusplus
  }
  #endif
#endif


