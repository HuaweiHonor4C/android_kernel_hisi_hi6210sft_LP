/******************************************************************************

            ��Ȩ���� (C), 2001-2011, ��Ϊ�������޹�˾

 ******************************************************************************
  �� �� ��   : PsLog.c
  �� �� ��   : ����
  ��    ��   : ���� 46160
  ��������   : 2007��4��23��
  ����޸�   :
  ��������   : Log����ʵ��
  �����б�   : Log_BufInput
               Log_BuildId
               Log_BuildStr
               Log_FileClose
               Log_FileOpen
               Log_FileWrite
               Log_GetFileName
               Log_GetTableIndex
               Log_IdNParam
               Log_Init
               Log_Output
               Log_SelfTask
               Log_SetAsPrintLev
               Log_SetHpaPrintLev
               Log_SetModuleIdLev
               Log_SetNasLev
               Log_SetOutputType
               Log_SetPartLev
               Log_SetTtfPrintLev
               Log_StrNParam
               OM_Log
               OM_Log1
               OM_Log2
               OM_Log3
               OM_Log4
               OM_LogId
               OM_LogId1
               OM_LogId2
               OM_LogId3
               OM_LogId4

  �޸���ʷ   :
  1.��    ��   : 2007��4��23��
    ��    ��   : ���� 46160
    �޸�����   : �����ļ�

******************************************************************************/
#ifdef  __cplusplus
  #if  __cplusplus
  extern "C"{
  #endif
#endif

/********************ͷ�ļ�****************************************************/

#include "vos.h"
#include "PsLogAdapterApp.h"
#include "omprivate.h"
#include "NVIM_Interface.h"


/******************ȫ�ֱ�������************************************************/
/*lint -e767 modify:j00168360; review:l00134988; cause:print log */
#define THIS_FILE_ID PS_FILE_ID_PS_LOG_APP_C
/*lint +e767 modify:j00168360; review:l00134988; cause:print log */

/* Logʵ�� */
LOG_ENTITY_ST  g_stLogEnt =
{LOG_FALSE,  OM_OUTPUT_SHELL, LOG_NULL_PTR, LOG_NULL_PTR};

/*������RingBuffer���л������*/
VOS_SEM        g_logBuffSem;

/*ȫ�ֱ�������������ÿ��ģ��Ĵ�ӡ����*/

LOG_LEVEL_EN   g_aulLogPrintLevPsTable[LOG_PS_MODULE_MAX_NUM] = {LOG_LEVEL_OFF};
LOG_LEVEL_EN   g_aulLogPrintLevDrvTable[LOG_DRV_MODULE_MAX_NUM] = {LOG_LEVEL_OFF};

/* ����LOGд��FLASH�ӿڵĶ�λ��Ϣ */
VOS_UINT32  g_ulLogErrFlag = LOG_OPERATION_OK;
#if (VOS_VXWORKS == VOS_OS_VER)
#if (FEATURE_ON == FEATURE_MULTI_FS_PARTITION) /* SFT board*/
VOS_CHAR    g_acLogDir[LOG_FILE_PATH_MAX_LENGTH] = "/data/modemlog/Log";
#else
/*LOG File Directory */
VOS_CHAR    g_acLogDir[LOG_FILE_PATH_MAX_LENGTH] = "/yaffs0/Log";
#endif

#elif (VOS_WIN32 == VOS_OS_VER)

/*LOG File Directory */
VOS_CHAR    g_acLogDir[] = "";

#endif

extern VOS_UINT32 OM_AcpuSendLog(VOS_UINT8 *pucLogData, VOS_UINT32 ulLength);

/*****************************************************************************
 �� �� ��  : LOG_GetTick
 ��������  : ��ȡ��ǰCPU��Tickʱ��
 �������  : ��
 �������  : ��
 �� �� ֵ  : LOG_ERR - ����ʧ��
             LOG_OK  - �����ɹ�


 �޸���ʷ      :
  1.��    ��   : 2008��7��17��
    ��    ��   : ���� 47350
    �޸�����   : �����ɺ���
*****************************************************************************/
VOS_UINT32 LOG_GetTick(VOS_VOID)
{
#if ((VOS_OS_VER == VOS_VXWORKS)||(VOS_OS_VER == VOS_LINUX))
/*lint -e718*/
/*lint -e746*/

    /*��ASIC/FPGAƽ̨�£���Ҫ��Sliceֵת����tickֵ����֤��SDT����ʾһ��*/
    VOS_UINT32   ulSlice;
    ulSlice = OM_GetSlice();
    /*Sliceֵÿ��һ������32768��ͨ�����¼���ת����10ms��tickֵ
    ��������7λ���ٳ���100����Ϊ�˷�ֹ���ݹ�������*/
    ulSlice >>= 7;
    ulSlice *= 100;
    ulSlice >>= 8;
    return ulSlice;

/*lint +e718*/
/*lint +e746*/

#elif(VOS_OS_VER == VOS_WIN32)
    return (VOS_UINT32)GetTickCount();
#else
    return LOG_OK;
#endif
}

/*****************************************************************************
 �� �� ��  : Log_GetPrintLevel
 ��������  : �õ�ģ��Id����ģ��Id�ڴ�ӡ�����¼���е�������
 �������  : LOG_MODULE_ID_EN enModuleId
             LOG_SUBMOD_ID_EN enSubModId
 �������  : ��
 �� �� ֵ  : VOS_UINT32
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2007��4��24��
    ��    ��   : ���� 46160
    �޸�����   : �����ɺ���

  2.��    ��   : 2008��9��12��
    ��    ��   : ����
    �޸�����   : ��ά�ɲ�����׶�����

*****************************************************************************/
VOS_UINT32 Log_GetPrintLevel(VOS_UINT32 ulModuleId)
{
    /*������ΪOM���ʱ�������OMģ��Ĵ�ӡ��Ϣ�������п��ܻ������ѭ��*/
    if ((VOS_PID_BUTT == ulModuleId) && (OM_OUTPUT_SDT == g_stLogEnt.ulLogOutput))
    {
        return LOG_LEVEL_OFF;
    }
    /*�ж�ģ��ID�Ƿ���ACPU֧�ֵ�PS��Χ��*/
    if ((VOS_PID_DOPRAEND <= ulModuleId)
         && (VOS_PID_BUTT > ulModuleId))
    {
        return g_aulLogPrintLevPsTable[ulModuleId - VOS_PID_DOPRAEND];
    }
    /*�ж�ģ��ID�Ƿ���ACPU֧�ֵ�DRV��Χ��*/
    if ((LOG_MIN_MODULE_ID_ACPU_DRV <= ulModuleId)
         && (LOG_MAX_MODULE_ID_ACPU_DRV >= ulModuleId))
    {
        return g_aulLogPrintLevDrvTable[ulModuleId - LOG_MIN_MODULE_ID_ACPU_DRV];
    }
    return LOG_LEVEL_OFF;
}

/*****************************************************************************
 �� �� ��  : Log_GetPathOffset
 ��������  : �õ��ļ�·������ƫ��ֵ
 �������  : VOS_CHAR* pcFileName
 �������  : ��
 �� �� ֵ  : VOS_VOID
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2007��4��24��
    ��    ��   : ���� 46160
    �޸�����   : �����ɺ���

*****************************************************************************/
VOS_INT32 Log_GetPathOffset(VOS_CHAR* pcFileName)
{
    VOS_INT32     lOffset;
    VOS_INT32     lOffset1;
    VOS_INT32     lOffset2;
    VOS_CHAR    *pcPathPos;

    lOffset1  = 0;
    lOffset2  = 0;

    /* ����ϵͳ����ʹ��'\'������·�� */
    pcPathPos = (VOS_CHAR*)strrchr(pcFileName, '\\');
    if (LOG_NULL_PTR != pcPathPos)
    {
        lOffset1 = (VOS_INT32)(pcPathPos - pcFileName) + 1;
    }

    /* ����ϵͳ����ʹ��'/'������·�� */
    pcPathPos = (VOS_CHAR*)strrchr(pcFileName, '/');
    if (LOG_NULL_PTR != pcPathPos)
    {
        lOffset2 = (VOS_INT32)(pcPathPos - pcFileName) + 1;
    }

    lOffset = (lOffset1 > lOffset2) ? lOffset1 : lOffset2;

    return lOffset;
}

/*****************************************************************************
 �� �� ��  : Log_Init
 ��������  : ��ӡ��ʼ��
 �������  : VOS_VOID
 �������  : ��
 �� �� ֵ  : VOS_VOID
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2007��4��24��
    ��    ��   : ���� 46160
    �޸�����   : �����ɺ���

*****************************************************************************/
VOS_VOID Log_Init(VOS_VOID)
{
    OM_PORT_CFG_STRU    stPortCfg;

    g_stLogEnt.ulPrintSwitch = LOG_FALSE;

    if (VOS_OK != VOS_SmMCreate("LOG_MSem", VOS_SEMA4_PRIOR | VOS_SEMA4_INVERSION_SAFE, &g_logBuffSem))
    {
        vos_printf("Log: Error, semMCreate Fail");
        return ;
    }


    if (VOS_OK != VOS_SmCCreate("LOG_CSem", 0, VOS_SEMA4_FIFO, &(g_stLogEnt.semOmPrint)))
    {
        VOS_SmDelete(g_logBuffSem);
        vos_printf("Log: Error, semCCreate Fail");
        return ;
    }

    g_stLogEnt.rngOmRbufId = OM_RingBufferCreate(LOG_BUF_VOLUMN);
    if (LOG_NULL_PTR == g_stLogEnt.rngOmRbufId)
    {
        VOS_SmDelete(g_logBuffSem);
        VOS_SmDelete(g_stLogEnt.semOmPrint);
        vos_printf("Log: Error, rngCreate Fail");
        return;
    }

    /* ��NV���ж���LOG�������ʽ���ļ�֧�ֵ�����С */
    if(NV_OK != NV_Read(en_NV_Item_Om_PsLog_Port,
                                &stPortCfg,
                                sizeof(OM_PORT_CFG_STRU)))
    {
        vos_printf("Log_InitFile: NV_Read fail, NV Id :%d\n", en_NV_Item_Om_PsLog_Port);
        stPortCfg.ulMaxFileSize = 0;
    }
    else
    {
        /*�������*/
        if (OM_OUTPUT_BUTT > stPortCfg.enPortType)
        {
            g_stLogEnt.ulLogOutput = stPortCfg.enPortType;
        }
    }

    g_stLogEnt.ulPrintSwitch = LOG_TRUE;

    return;
}

#ifdef __LOG_BBIT__

/*****************************************************************************
 �� �� ��  : OM_Log
 ��������  : �ַ������͵Ĵ�ӡ�ӿں������޲�����
 �������  : VOS_CHAR             *cFileName
             VOS_UINT32      ulLineNum
             LOG_MODULE_ID_EN  enModuleId
             LOG_SUBMOD_ID_EN   enSubModId
             LOG_LEVEL_EN      enLevel
             VOS_CHAR              *pcString
 �������  : ��
 �� �� ֵ  : VOS_VOID
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2007��4��24��
    ��    ��   : ���� 46160
    �޸�����   : �����ɺ���

*****************************************************************************/
VOS_VOID OM_Log(VOS_CHAR  *cFileName,  VOS_UINT32        ulLineNum,
            LOG_MODULE_ID_EN  enModuleId, LOG_SUBMOD_ID_EN   enSubModId,
            LOG_LEVEL_EN      enLevel,    VOS_CHAR          *pcString)
{
    Log_StrNParam(cFileName, ulLineNum, enModuleId, enSubModId, enLevel,
            pcString, 0, LOG_NULL_PTR);
    return;
}

/*****************************************************************************
 �� �� ��  : OM_Log1
 ��������  : �ַ������͵Ĵ�ӡ�ӿں�����1 ��������
 �������  : VOS_CHAR             *cFileName
             VOS_UINT32      ulLineNum
             LOG_MODULE_ID_EN  enModuleId
             LOG_SUBMOD_ID_EN   enSubModId
             LOG_LEVEL_EN      enLevel
             VOS_CHAR              *pcString
             VOS_INT32              lPara1
 �������  : ��
 �� �� ֵ  : VOS_VOID
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2007��4��24��
    ��    ��   : ���� 46160
    �޸�����   : �����ɺ���

*****************************************************************************/
VOS_VOID OM_Log1(VOS_CHAR *cFileName,  VOS_UINT32         ulLineNum,
             LOG_MODULE_ID_EN  enModuleId, LOG_SUBMOD_ID_EN   enSubModId,
             LOG_LEVEL_EN      enLevel,    VOS_CHAR          *pcString,
             VOS_INT32         lPara1)
{
    VOS_INT32 alParam[4];
    alParam[0] = lPara1;

    Log_StrNParam(cFileName, ulLineNum, enModuleId, enSubModId, enLevel,
            pcString, 1, alParam);
    return;
}

/*****************************************************************************
 �� �� ��  : OM_Log2
 ��������  : �ַ������͵Ĵ�ӡ�ӿں�����2��������
 �������  : VOS_CHAR             *cFileName
             VOS_UINT32      ulLineNum
             LOG_MODULE_ID_EN  enModuleId
             LOG_SUBMOD_ID_EN   enSubModId
             LOG_LEVEL_EN      enLevel
             VOS_CHAR              *pcString
             VOS_INT32              lPara1
             VOS_INT32               lPara2
 �������  : ��
 �� �� ֵ  : VOS_VOID
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2007��4��24��
    ��    ��   : ���� 46160
    �޸�����   : �����ɺ���

*****************************************************************************/
VOS_VOID OM_Log2(VOS_CHAR *cFileName,  VOS_UINT32         ulLineNum,
             LOG_MODULE_ID_EN  enModuleId, LOG_SUBMOD_ID_EN   enSubModId,
             LOG_LEVEL_EN      enLevel,    VOS_CHAR          *pcString,
             VOS_INT32         lPara1,     VOS_INT32          lPara2)
{
    VOS_INT32 alParam[4];

    alParam[0] = lPara1;
    alParam[1] = lPara2;

    Log_StrNParam(cFileName, ulLineNum, enModuleId, enSubModId, enLevel,
            pcString, 2, alParam);

    return;
}

/*****************************************************************************
 �� �� ��  : OM_Log3
 ��������  : �ַ������͵Ĵ�ӡ�ӿں�����3 ��������
 �������  : VOS_CHAR             *cFileName
             VOS_UINT32      ulLineNum
             LOG_MODULE_ID_EN  enModuleId
             LOG_SUBMOD_ID_EN   enSubModId
             LOG_LEVEL_EN      enLevel
             VOS_CHAR              *pcString
             VOS_INT32              lPara1
             VOS_INT32               lPara2
             VOS_INT32              lPara3
 �������  : ��
 �� �� ֵ  : VOS_VOID
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2007��4��24��
    ��    ��   : ���� 46160
    �޸�����   : �����ɺ���

*****************************************************************************/
VOS_VOID OM_Log3(VOS_CHAR *cFileName,  VOS_UINT32         ulLineNum,
             LOG_MODULE_ID_EN  enModuleId, LOG_SUBMOD_ID_EN   enSubModId,
             LOG_LEVEL_EN      enLevel,    VOS_CHAR          *pcString,
             VOS_INT32         lPara1,     VOS_INT32          lPara2,
             VOS_INT32         lPara3)
{
    VOS_INT32 alParam[4];

    alParam[0] = lPara1;
    alParam[1] = lPara2;
    alParam[2] = lPara3;

    Log_StrNParam(cFileName, ulLineNum, enModuleId, enSubModId, enLevel,
            pcString, 3, alParam);

    return;
}

/*****************************************************************************
 �� �� ��  : OM_Log4
 ��������  : �ַ������͵Ĵ�ӡ�ӿں�����4 ��������
 �������  : VOS_CHAR             *cFileName
                         VOS_UINT32      ulLineNum
                         LOG_MODULE_ID_EN  enModuleId
                         LOG_SUBMOD_ID_EN   enSubModId
                         LOG_LEVEL_EN      enLevel
                         VOS_CHAR              *pcString
                         VOS_INT32              lPara1
                         VOS_INT32               lPara2
                         VOS_INT32              lPara3
                         VOS_INT32               lPara4
 �������  : ��
 �� �� ֵ  : VOS_VOID
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2007��4��24��
        ��    ��   : ���� 46160
        �޸�����   : �����ɺ���

*****************************************************************************/
VOS_VOID OM_Log4(VOS_CHAR *cFileName,  VOS_UINT32         ulLineNum,
             LOG_MODULE_ID_EN  enModuleId, LOG_SUBMOD_ID_EN   enSubModId,
             LOG_LEVEL_EN      enLevel,    VOS_CHAR          *pcString,
             VOS_INT32         lPara1,     VOS_INT32          lPara2,
             VOS_INT32         lPara3,     VOS_INT32          lPara4)
{
    VOS_INT32 alParam[4];

    alParam[0] = lPara1;
    alParam[1] = lPara2;
    alParam[2] = lPara3;
    alParam[3] = lPara4;

    Log_StrNParam(cFileName, ulLineNum, enModuleId, enSubModId, enLevel,
            pcString, 4, alParam);

    return;
}

/*****************************************************************************
 �� �� ��  : Log_BuildStr
 ��������  : �����ַ������͵Ĵ�ӡ�����Ϣ
 �������  : VOS_CHAR          *pcFileName
                         VOS_UINT32  ulLineNum
                         LOG_LEVEL_EN   enPrintLev
                         VOS_CHAR          *pcOriStr
                         VOS_UINT8  ucParaCnt
                         VOS_INT32          *plPara
                         VOS_CHAR          *pcDstStr
                         VOS_UINT32 *pulLen
 �������  : ��
 �� �� ֵ  : VOS_VOID
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2007��4��24��
        ��    ��   : ���� 46160
        �޸�����   : �����ɺ���

*****************************************************************************/
VOS_VOID Log_BuildStr(VOS_CHAR *pcFileName,  VOS_UINT32  ulLineNum,
                      LOG_LEVEL_EN enPrintLev,  VOS_CHAR   *pcOriStr,
                      VOS_UINT8    ucParaCnt,   VOS_INT32  *plPara,
                      VOS_CHAR    *pcDstStr,    VOS_UINT32 *pulLen)
{
    VOS_INT32            lTmpLen;
    VOS_INT32            lStrLen;
    VOS_INT32            lOffset;
    VOS_INT32            lParamLen;
    VOS_INT32            lSpareLen;
    VOS_INT32            lOccupyLen;
    VOS_UINT8            i;

    *pulLen = 0;

    switch ( enPrintLev )
    {
        case LOG_LEVEL_ERROR :
            lTmpLen    = VOS_nsprintf( pcDstStr, LOG_MAX_COLUMN_VAL, "\nERROR,F: ");
            break;
        case LOG_LEVEL_WARNING :
            lTmpLen    = VOS_nsprintf( pcDstStr, LOG_MAX_COLUMN_VAL, "\nWARNING,F: ");
            break;
        case LOG_LEVEL_NORMAL :
            lTmpLen    = VOS_nsprintf( pcDstStr, LOG_MAX_COLUMN_VAL, "\nNORMAL,F: ");
            break;
        case LOG_LEVEL_INFO :
            lTmpLen    = VOS_nsprintf( pcDstStr, LOG_MAX_COLUMN_VAL, "\nINFO,F: ");
            break;
        default:
            lTmpLen    = VOS_nsprintf( pcDstStr, LOG_MAX_COLUMN_VAL, "\nF: ");
            break;
    }

    lOccupyLen = lTmpLen;
    LOG_AFFIRM(LOG_MAX_COLUMN_VAL >= lOccupyLen)

    lSpareLen  = LOG_MAX_COLUMN_VAL - lOccupyLen;
    LOG_AFFIRM(lSpareLen >= LOG_MAX_FILENAME_LEN)

        /* ��·��ȥ��,ֻ�����ļ����� */
    lOffset = Log_GetPathOffset(pcFileName);
    lTmpLen = (VOS_INT32)strlen(pcFileName + lOffset);
    if (lTmpLen < LOG_MAX_FILENAME_LEN)
    {
        memcpy(pcDstStr + lOccupyLen, pcFileName + lOffset, (VOS_UINT32)lTmpLen);
        lOccupyLen += lTmpLen;
    }
    else
    {
        memcpy(pcDstStr + lOccupyLen, pcFileName + lOffset, LOG_MAX_FILENAME_LEN);
        lOccupyLen += LOG_MAX_FILENAME_LEN;
    }

    lSpareLen   = LOG_MAX_COLUMN_VAL - lOccupyLen;

    lTmpLen = VOS_nsprintf( pcDstStr + lOccupyLen, (VOS_UINT32)lSpareLen,
                           ", Line: %u, Tick: %u, ", ulLineNum, LOG_GetTick());

    lOccupyLen += lTmpLen;
    lSpareLen   = LOG_MAX_COLUMN_VAL - lOccupyLen;

        /*=======================*/ /* �������������Ҫ�ĳ��� */
    lParamLen = ucParaCnt * LOG_MAX_PARA_LEN;
    lStrLen   = lSpareLen - lParamLen;
    LOG_AFFIRM(0 <= lStrLen)

        /*=======================*/ /* �����ַ�����Ϣ */
    lTmpLen = (VOS_INT32)strlen(pcOriStr);
    if (lTmpLen <= lStrLen)
    {
        memcpy(pcDstStr + lOccupyLen, pcOriStr, (VOS_UINT32)lTmpLen);
        lOccupyLen += lTmpLen;
    }
    else
    {
        memcpy(pcDstStr + lOccupyLen, pcOriStr, (VOS_UINT32)lStrLen);
        lOccupyLen += lStrLen;
    }

    if (0 == ucParaCnt)
    {
        if (LOG_MAX_COLUMN_VAL == lOccupyLen)
        {
            *(pcDstStr + (lOccupyLen - 1)) = '\0';
        }
        else
        {
            *(pcDstStr + lOccupyLen) = '\0';
            lOccupyLen = lOccupyLen + 1;
        }

        LOG_AFFIRM(LOG_MAX_COLUMN_VAL >= lOccupyLen)
        *pulLen = (VOS_UINT32)lOccupyLen;
        return;
    }

    *(pcDstStr + lOccupyLen) = ':';
    lOccupyLen = lOccupyLen + 1;
    LOG_AFFIRM(LOG_MAX_COLUMN_VAL > lOccupyLen)

    lSpareLen = LOG_MAX_COLUMN_VAL - lOccupyLen;

        /*=======================*/ /* ������� */
    for (i = 0; i < ucParaCnt; i++)
    {
        lTmpLen = VOS_nsprintf( pcDstStr + lOccupyLen, (VOS_UINT32)lSpareLen, " %d.", *(plPara + i));
        lOccupyLen += lTmpLen;
        LOG_AFFIRM(LOG_MAX_COLUMN_VAL >= lOccupyLen)

        lSpareLen  = LOG_MAX_COLUMN_VAL - lOccupyLen;
    }

    *pulLen = (VOS_UINT32)(LOG_MAX_COLUMN_VAL - lSpareLen);
    return;
}

/*****************************************************************************
 �� �� ��  : Log_StrNParam
 ��������  : �ַ������͵Ĵ�ӡ������N ��������
 �������  : VOS_CHAR             *cFileName
                         VOS_UINT32      ulLineNum
                         LOG_MODULE_ID_EN  enModuleId
                         LOG_SUBMOD_ID_EN   enSubModId
                         LOG_LEVEL_EN      enLevel
                         VOS_CHAR              *pcOriStr
                         VOS_UINT8     ucParaCnt
                         VOS_INT32              *plPara
 �������  : ��
 �� �� ֵ  : VOS_VOID
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2007��4��24��
        ��    ��   : ���� 46160
        �޸�����   : �����ɺ���

*****************************************************************************/
VOS_INT32 Log_StrNParam(VOS_CHAR *cFileName, VOS_UINT32 ulLineNum,
             LOG_MODULE_ID_EN  enModuleId, LOG_SUBMOD_ID_EN   enSubModId,
             LOG_LEVEL_EN      enLevel,    VOS_CHAR          *pcOriStr,
             VOS_UINT8         ucParaCnt,  VOS_INT32         *plPara)
{
    VOS_UINT32        ulLen;
    VOS_INT32         ret = VOS_ERR;

    /*lint -e813*/
    VOS_CHAR          acLogStr[LOG_MAX_COLUMN_VAL_EX + 1];
    /*lint +e813*/

    if (LOG_TRUE != g_stLogEnt.ulPrintSwitch)
    {
        return ret;
    }

    if (enLevel > Log_GetPrintLevel(enModuleId))
    {
        return ret;
    }

#if(VOS_OS_VER == VOS_WIN32)

    switch ( enLevel )
    {
        case LOG_LEVEL_ERROR :
            vos_printf("\r\nERROR,");
            break;
        case LOG_LEVEL_WARNING :
            vos_printf("\r\nWARNING,");
            break;
        case LOG_LEVEL_NORMAL :
            vos_printf("\r\nNORMAL,");
            break;
        case LOG_LEVEL_INFO :
            vos_printf("\r\nINFO,");
            break;
        default:
            break;
    }
    vos_printf("%s, L: %d, T: %u, %s", (cFileName + Log_GetPathOffset(cFileName)), ulLineNum, LOG_GetTick(), pcOriStr);

    for (ulLen = 0; ulLen < ucParaCnt; ulLen++)
    {
        vos_printf(",%d ", plPara[ulLen]);
    }
#else
    *((VOS_UINT32*)acLogStr) = (VOS_UINT32)enModuleId;
    *(VOS_UINT32*)(acLogStr + sizeof(VOS_UINT32)) = (VOS_UINT32)enLevel;
    /*����LOG_MODULE_ID_LEN��������LOG���ݵ�ͷ�������Module ID
      ����ɵ�ƫ��*/
    Log_BuildStr(cFileName, ulLineNum, enLevel,  pcOriStr,
                 ucParaCnt, plPara,    acLogStr + LOG_MODULE_ID_LEN, &ulLen);
    ret = Log_BufInput(acLogStr, ulLen + LOG_MODULE_ID_LEN);
#endif

    return ret;
}
#endif

#ifdef __LOG_RELEASE__

/*****************************************************************************
 �� �� ��  : OM_LogId
 ��������  : ��ӡ�����͵Ĵ�ӡ�ӿں������޲�����
 �������  : LOG_MODULE_ID_EN  enModuleId
                         LOG_SUBMOD_ID_EN  enSubModId
                         LOG_LEVEL_EN      enLevel
                         VOS_UINT32     ulLogId
 �������  : ��
 �� �� ֵ  : VOS_VOID
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2007��4��24��
        ��    ��   : ���� 46160
        �޸�����   : �����ɺ���

*****************************************************************************/
VOS_VOID OM_LogId(LOG_MODULE_ID_EN  enModuleId, LOG_SUBMOD_ID_EN  enSubModId,
                      LOG_LEVEL_EN      enLevel,    VOS_UINT32        ulLogId)
{
    Log_IdNParam(enModuleId, enSubModId, enLevel, ulLogId, 0, LOG_NULL_PTR);
    return;
}

/*****************************************************************************
 �� �� ��  : OM_LogId1
 ��������  : ��ӡ�����͵Ĵ�ӡ�ӿں�����1 ��������
 �������  : LOG_MODULE_ID_EN  enModuleId
                         LOG_SUBMOD_ID_EN  enSubModId
                         LOG_LEVEL_EN      enLevel
                         VOS_UINT32     ulLogId
                         VOS_INT32              lPara1
 �������  : ��
 �� �� ֵ  : VOS_VOID
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2007��4��24��
        ��    ��   : ���� 46160
        �޸�����   : �����ɺ���

*****************************************************************************/
VOS_VOID OM_LogId1(LOG_MODULE_ID_EN  enModuleId, LOG_SUBMOD_ID_EN  enSubModId,
                       LOG_LEVEL_EN      enLevel,    VOS_UINT32        ulLogId,
                       VOS_INT32         lPara1)
{
    VOS_INT32 alParam[4];
    alParam[0] = lPara1;

    Log_IdNParam(enModuleId, enSubModId, enLevel, ulLogId, 1, alParam);
    return;
}

/*****************************************************************************
 �� �� ��  : OM_LogId2
 ��������  : ��ӡ�����͵Ĵ�ӡ�ӿں�����2 ��������
 �������  : LOG_MODULE_ID_EN  enModuleId
                         LOG_SUBMOD_ID_EN  enSubModId
                         LOG_LEVEL_EN      enLevel
                         VOS_UINT32     ulLogId
                         VOS_INT32              lPara1
                         VOS_INT32              lPara2
 �������  : ��
 �� �� ֵ  : VOS_VOID
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2007��4��24��
        ��    ��   : ���� 46160
        �޸�����   : �����ɺ���

*****************************************************************************/
VOS_VOID OM_LogId2(LOG_MODULE_ID_EN  enModuleId, LOG_SUBMOD_ID_EN  enSubModId,
                       LOG_LEVEL_EN      enLevel,    VOS_UINT32     ulLogId,
                       VOS_INT32         lPara1,     VOS_INT32      lPara2)
{
    VOS_INT32 alParam[4];

    alParam[0] = lPara1;
    alParam[1] = lPara2;

    Log_IdNParam(enModuleId, enSubModId, enLevel, ulLogId, 2, alParam);

    return;
}

/*****************************************************************************
 �� �� ��  : OM_LogId3
 ��������  : ��ӡ�����͵Ĵ�ӡ�ӿں�����3 ��������
 �������  : LOG_MODULE_ID_EN  enModuleId
                         LOG_SUBMOD_ID_EN  enSubModId
                         LOG_LEVEL_EN      enLevel
                         VOS_UINT32     ulLogId
                         VOS_INT32              lPara1
                         VOS_INT32              lPara2
                         VOS_INT32              lPara3
 �������  : ��
 �� �� ֵ  : VOS_VOID
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2007��4��24��
        ��    ��   : ���� 46160
        �޸�����   : �����ɺ���

*****************************************************************************/
VOS_VOID OM_LogId3(LOG_MODULE_ID_EN  enModuleId, LOG_SUBMOD_ID_EN  enSubModId,
                       LOG_LEVEL_EN      enLevel,    VOS_UINT32        ulLogId,
                       VOS_INT32         lPara1,     VOS_INT32         lPara2,
                       VOS_INT32         lPara3)
{
    VOS_INT32 alParam[4];

    alParam[0] = lPara1;
    alParam[1] = lPara2;
    alParam[2] = lPara3;

    Log_IdNParam(enModuleId, enSubModId, enLevel, ulLogId, 3, alParam);

    return;
}

/*****************************************************************************
 �� �� ��  : OM_LogId4
 ��������  : ��ӡ�����͵Ĵ�ӡ�ӿں�����4 ��������
 �������  : LOG_MODULE_ID_EN  enModuleId
                         LOG_SUBMOD_ID_EN  enSubModId
                         LOG_LEVEL_EN      enLevel
                         VOS_UINT32     ulLogId
                         VOS_INT32              lPara1
                         VOS_INT32              lPara2
                         VOS_INT32              lPara3
                         VOS_INT32              lPara4
 �������  : ��
 �� �� ֵ  : VOS_VOID
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2007��4��24��
        ��    ��   : ���� 46160
        �޸�����   : �����ɺ���

*****************************************************************************/
VOS_VOID OM_LogId4(LOG_MODULE_ID_EN  enModuleId, LOG_SUBMOD_ID_EN  enSubModId,
                       LOG_LEVEL_EN      enLevel,    VOS_UINT32        ulLogId,
                       VOS_INT32         lPara1,     VOS_INT32         lPara2,
                       VOS_INT32         lPara3,     VOS_INT32         lPara4)
{
    VOS_INT32 alParam[4];

    alParam[0] = lPara1;
    alParam[1] = lPara2;
    alParam[2] = lPara3;
    alParam[3] = lPara4;

    Log_IdNParam(enModuleId, enSubModId, enLevel, ulLogId, 4, alParam);

    return;
}

/*****************************************************************************
 �� �� ��  : Log_BuildId
 ��������  : ������ӡ�����͵Ĵ�ӡ�����Ϣ
 �������  : VOS_UINT32  ulLogId
                         VOS_UINT8  ucParaCnt
                         VOS_INT32 *plPara
                         VOS_CHAR          *pcDst
                         VOS_UINT32 *pulLen
 �������  : ��
 �� �� ֵ  : VOS_VOID
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2007��4��24��
        ��    ��   : ���� 46160
        �޸�����   : �����ɺ���

*****************************************************************************/
VOS_VOID Log_BuildId(VOS_UINT32  ulLogId, VOS_UINT8   ucParaCnt, VOS_INT32 *plPara,
                        VOS_CHAR   *pcDst,   VOS_UINT32 *pulLen)
{
    VOS_INT32             lTmpLen;
    VOS_INT32             lSpareLen;
    VOS_INT32             lOccupyLen;
    VOS_UINT8             i;

    *pulLen = 0;

    if (ucParaCnt > LOG_MAX_PARA_CNT)
    {
        ucParaCnt = LOG_MAX_PARA_CNT;
    }

    lTmpLen    = VOS_nsprintf( pcDst, LOG_MAX_COLUMN_VAL, "%d, ", ulLogId);
    LOG_AFFIRM (0 <= lTmpLen)

    lOccupyLen = lTmpLen;
    LOG_AFFIRM(LOG_MAX_COLUMN_VAL >= lOccupyLen)
    lSpareLen  = LOG_MAX_COLUMN_VAL - lOccupyLen;

    lTmpLen    = VOS_nsprintf( pcDst + lOccupyLen, (VOS_UINT32)lSpareLen, "%u, ", LOG_GetTick());
    LOG_AFFIRM(0 <= lTmpLen)

    lOccupyLen += lTmpLen;
    LOG_AFFIRM(LOG_MAX_COLUMN_VAL >= lOccupyLen)
    lSpareLen  = LOG_MAX_COLUMN_VAL - lOccupyLen;

    for (i = 0; i < ucParaCnt; i ++)
    {
        lTmpLen = VOS_nsprintf( pcDst + lOccupyLen, (VOS_UINT32)lSpareLen, "%d, ", *plPara);
        LOG_AFFIRM(0 <= lTmpLen)

        lOccupyLen += lTmpLen;
        LOG_AFFIRM(LOG_MAX_COLUMN_VAL >= lOccupyLen)
        lSpareLen  = LOG_MAX_COLUMN_VAL - lOccupyLen;
        plPara++;
    }

    *pulLen = (VOS_UINT32)(LOG_MAX_COLUMN_VAL - lSpareLen);

    return;
}

/*****************************************************************************
 �� �� ��  : Log_IdNParam
 ��������  : ��ӡ�����͵Ĵ�ӡ������N ��������
 �������  : LOG_MODULE_ID_EN enModuleId
                         LOG_SUBMOD_ID_EN  enSubModId
                         LOG_LEVEL_EN     enLevel
                         VOS_UINT32     ulLogId
                         VOS_UINT8    ucParaCnt
                         VOS_INT32             *plPara
 �������  : ��
 �� �� ֵ  : VOS_VOID
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2007��4��24��
        ��    ��   : ���� 46160
        �޸�����   : �����ɺ���

*****************************************************************************/
VOS_INT32 Log_IdNParam(LOG_MODULE_ID_EN enModuleId, LOG_SUBMOD_ID_EN  enSubModId,
               LOG_LEVEL_EN     enLevel,    VOS_UINT32     ulLogId,
               VOS_UINT8        ucParaCnt,  VOS_INT32     *plPara)
{
    VOS_UINT32        ulLen;
    VOS_INT32         ret = VOS_ERR;

/*lint -e813*/
    VOS_CHAR          acLogStr[LOG_MAX_COLUMN_VAL_EX + 1];
/*lint +e813*/

    enSubModId = enSubModId;

    if (LOG_TRUE != g_stLogEnt.ulPrintSwitch)
    {
        return ret;
    }

    if (enLevel > Log_GetPrintLevel((VOS_UINT32)enModuleId))
    {
        return ret;
    }

    *((VOS_UINT32*)acLogStr) = (VOS_UINT32)enModuleId;
    *(VOS_UINT32*)(acLogStr + sizeof(VOS_UINT32)) = (VOS_UINT32)enLevel;
    /*����LOG_MODULE_ID_LEN��������LOG���ݵ�ͷ�������Module ID
      ����ɵ�ƫ��*/
    Log_BuildId(ulLogId, ucParaCnt, plPara, acLogStr + LOG_MODULE_ID_LEN, &ulLen);
    ret = Log_BufInput(acLogStr, ulLen + LOG_MODULE_ID_LEN);

    return ret;
}
#endif

/*****************************************************************************
 �� �� ��  : Log_BufInput
 ��������  : ����ӡ��Ϣд�뻺��
 �������  : VOS_CHAR *pcLogStr
                         VOS_UINT32 ulLen
 �������  : ��
 �� �� ֵ  : VOS_VOID
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2007��4��24��
        ��    ��   : ���� 46160
        �޸�����   : �����ɺ���

*****************************************************************************/
VOS_INT32 Log_BufInput(VOS_CHAR *pcLogStr, VOS_UINT32 ulLen)
{
    VOS_INT32     sRet;

#if (VOS_OS_VER == VOS_LINUX)
    if( in_interrupt() )
    {
        return VOS_ERR;
    }
#endif

    if (0 < ulLen)
    {
        if(VOS_OK != VOS_SmP(g_logBuffSem, 0))
        {
            return VOS_ERR;
        }

        if ((ulLen + sizeof(VOS_UINT32)) > (VOS_UINT32)OM_RingBufferFreeBytes(g_stLogEnt.rngOmRbufId))
        {
            VOS_SmV(g_logBuffSem);
            return VOS_ERR;
        }

        sRet = OM_RingBufferPut(g_stLogEnt.rngOmRbufId, (VOS_CHAR*)(&ulLen), sizeof(VOS_UINT32));
        if ((VOS_INT32)sizeof(VOS_UINT32) == sRet)
        {
            sRet = OM_RingBufferPut(g_stLogEnt.rngOmRbufId, pcLogStr, (VOS_INT32)ulLen);
            VOS_SmV(g_logBuffSem);

            if (ulLen == (VOS_UINT32)sRet)
            {
                VOS_SmV(g_stLogEnt.semOmPrint);
                return VOS_OK ;
            }
            else
            {
                vos_printf("\nLog, Error, rngBufPut Data not OK");
            }
        }
        else
        {
            VOS_SmV(g_logBuffSem);
            vos_printf("\nLog, Error, rngBufPut DataLen not OK");
        }
    }
    return VOS_ERR;
}

/*****************************************************************************
 �� �� ��  : Log_SelfTask
 ��������  : ��ӡ�Դ�������
 �������  : VOS_UINT32 ulPara1
                         VOS_UINT32 ulPara2
                         VOS_UINT32 ulPara3
                         VOS_UINT32 ulPara4
 �������  : ��
 �� �� ֵ  : VOS_VOID
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2007��4��24��
        ��    ��   : ���� 46160
        �޸�����   : �����ɺ���

*****************************************************************************/
VOS_VOID Log_SelfTask(VOS_UINT32 ulPara1, VOS_UINT32 ulPara2,
                  VOS_UINT32 ulPara3, VOS_UINT32 ulPara4)
{
    VOS_INT32                           sRet;
    VOS_UINT32                          ulLen;
/*lint -e813*/
    VOS_CHAR                            acTmpStr[LOG_MAX_COLUMN_VAL_EX + 1];
/*lint +e813*/

    ulPara1 = ulPara1;
    ulPara2 = ulPara2;
    ulPara3 = ulPara3;
    ulPara4 = ulPara4;

    Log_Init();

    for(;;)
    {
        if(VOS_OK != VOS_SmP(g_stLogEnt.semOmPrint, 0))
        {
            continue;
        }

        if (LOG_NULL_PTR == g_stLogEnt.rngOmRbufId)
        {
            continue;
        }

        if (LOG_TRUE == OM_RingBufferIsEmpty(g_stLogEnt.rngOmRbufId))
        {
            continue;
        }

        sRet = OM_RingBufferGet(g_stLogEnt.rngOmRbufId, (VOS_CHAR*)(&ulLen), sizeof(VOS_UINT32));
        if (sizeof(VOS_UINT32) != (VOS_UINT32)sRet)
        {
            continue;
        }

        if(LOG_MAX_COLUMN_VAL_EX < ulLen)
        {
            OM_RingBufferFlush(g_stLogEnt.rngOmRbufId);

            continue;
        }

        sRet = OM_RingBufferGet(g_stLogEnt.rngOmRbufId, acTmpStr, (VOS_INT32)ulLen);
        if (ulLen == (VOS_UINT32)sRet)
        {
            Log_Output(g_stLogEnt.ulLogOutput, acTmpStr, ulLen);
        }
    }
}
/*****************************************************************************
 �� �� ��  : Log_Output
 ��������  : ��ӡ������������������ ��д��Flash��
 �������  : LOG_OUTPUT_EN enOutputType
             VOS_CHAR *pcStr
             VOS_UINT32 ulLen
 �������  : ��
 �� �� ֵ  : VOS_VOID
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2007��4��24��
    ��    ��   : ���� 46160
    �޸�����   : �����ɺ���

*****************************************************************************/
VOS_VOID Log_Output(VOS_UINT32 ulOutputType, VOS_CHAR *pcStr, VOS_UINT32 ulLen)
{
    if (ulLen < LOG_MAX_COLUMN_VAL_EX)
    {
        pcStr[ulLen] = '\0';
    }
    else
    {
        pcStr[LOG_MAX_COLUMN_VAL_EX] = '\0';
    }

    switch (ulOutputType)
    {
        case OM_OUTPUT_SHELL:
            vos_printf("%s\n", pcStr + LOG_MODULE_ID_LEN);/* ���ַ������������ */
            break;

        case OM_OUTPUT_SDT:
            OM_AcpuSendLog((VOS_UINT8*)pcStr, ulLen);
            break;

        default:
            break;
    }

    return;
}

/*****************************************************************************
 �� �� ��  : Log_SetOutputType
 ��������  : ������ӡ���λ�ã����ڡ�FileSystem, OM���Ľӿڿ��ƺ���
 �������  : OM_OUTPUT_PORT_ENUM_UINT32 enOutputType
 �������  : ��
 �� �� ֵ  : VOS_VOID
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2007��4��24��
    ��    ��   : ���� 46160
    �޸�����   : �����ɺ���
  2.��    ��   : 2008��9��9��
    ��    ��   : ���� 47350
    �޸�����   : ��ӿ�ά�ɲ�����׶�����
*****************************************************************************/
VOS_UINT32 Log_SetOutputType(OM_OUTPUT_PORT_ENUM_UINT32 enOutputType)
{
    /*�����Ϸ��Լ��*/
    if (OM_OUTPUT_BUTT <= enOutputType)
    {
        return VOS_ERR;
    }

/*���ڹ��߲಻֧���ַ��������ʽ����Ҫ����ʧ��*/
#ifdef __LOG_BBIT__
    if (OM_OUTPUT_SDT == enOutputType)
    {
        return VOS_ERR;
    }
#endif

    g_stLogEnt.ulLogOutput = enOutputType;

    return VOS_OK;
}

/*****************************************************************************
 �� �� ��  : Log_CheckPara
 ��������  : ������ô�ӡ��������ĺϷ���
 �������  : pstLogIdLevel
             ulLength
 �������  : ��
 �� �� ֵ  : VOS_OK  - �ɹ�
             VOS_ERR - ʧ��

 �޸���ʷ      :
  1.��    ��   : 2008��9��9��
    ��    ��   : ���� 47350
    �޸�����   : �����ɺ���,��ӿ�ά�ɲ�����׶�����
*****************************************************************************/
VOS_UINT32 Log_CheckPara(LOG_ID_LEVEL_STRU *pstLogIdLevel, VOS_UINT32 ulLength)
{
    VOS_UINT32                          ulModuleNum;

    ulModuleNum = pstLogIdLevel->ulModuleNum;

    /*�жϸ����ͳ��ȼ�Ĺ�ϵ�Ƿ���ȷ*/
    if (ulLength != (sizeof(ulModuleNum)
             + (ulModuleNum*sizeof(LOG_MODULE_LEVEL_STRU))))
    {
        vos_printf("Log_CheckPara: Received length isn't correct.\n");
        return VOS_ERR;
    }

    return VOS_OK;
}
/*****************************************************************************
 �� �� ��  : Log_SetModuleIdLev
 ��������  : ����ģ��Ĵ�ӡ����
 �������  : enModuleId - ģ��ID��
             enSubModId - ��ģ��ID�ţ�Ŀǰû���õ�
             enLevel    - ��ӡ����
 �������  : ��
 �� �� ֵ  : VOS_VOID

 �޸���ʷ      :
  1.��    ��   : 2008��9��9��
    ��    ��   : ���� 47350
    �޸�����   : �����ɺ���,��ӿ�ά�ɲ�����׶�����
*****************************************************************************/
VOS_VOID Log_SetModuleIdLev(LOG_MODULE_ID_EN enModuleId, LOG_SUBMOD_ID_EN enSubModId,
                                LOG_LEVEL_EN enLevel)
{
	/*lint -e662 -e661*/
    /*����ӡ���𲻺Ϸ�ʱ������ʧ��*/
    if (LOG_LEVEL_BUTT <= enLevel)
    {
        vos_printf("Log_SetModuleIdLev: ModuleId is %d, Level is %d.\r\n", enModuleId, enLevel);
        return;
    }

    if (LOG_MIN_MODULE_ID_ACPU_DRV <= enModuleId && LOG_MAX_MODULE_ID_ACPU_DRV >= enModuleId)
    {
        g_aulLogPrintLevDrvTable[enModuleId - LOG_MIN_MODULE_ID_ACPU_DRV] = enLevel;
    }
    else if ((VOS_PID_DOPRAEND <= enModuleId) && (VOS_PID_BUTT > enModuleId))
    {
        g_aulLogPrintLevPsTable[enModuleId - VOS_PID_DOPRAEND] = enLevel;
    }
    else
    {
        vos_printf("Log_SetModuleIdLev: enModuleId isn't correct. ModuleId is %d.\r\n", enModuleId);
    }
	/*lint +e662 +e661*/
}

/*****************************************************************************
 �� �� ��  : Log_SetPrintLev
 ��������  : ����ģ��Ĵ�ӡ����
 �������  : pstLogIdLevel - ָ�򹤾߲෢����ģ�鼶��ṹ���ָ��
             ulLength      - ���ݵĳ���
 �������  : ��
 �� �� ֵ  : VOS_OK  - �ɹ�
             VOS_ERR - ʧ��

 �޸���ʷ      :
  1.��    ��   : 2008��9��9��
    ��    ��   : ���� 47350
    �޸�����   : �����ɺ���,��ӿ�ά�ɲ�����׶�����
*****************************************************************************/
VOS_UINT32 Log_SetPrintLev(LOG_ID_LEVEL_STRU *pstLogIdLevel, VOS_UINT32 ulLength)
{
    VOS_UINT32         ulIndex;
    VOS_UINT32         ulModuleId;
    VOS_UINT32         ulModuleNum;
    LOG_LEVEL_EN       enPrintLev;

    /*�������ĺϷ���*/
    if (VOS_ERR == Log_CheckPara(pstLogIdLevel, ulLength))
    {
        return VOS_ERR;
    }

    /*����ϴ�����*/
    VOS_MemSet(g_aulLogPrintLevPsTable, 0, LOG_PS_MODULE_MAX_NUM*sizeof(LOG_LEVEL_EN));
    VOS_MemSet(g_aulLogPrintLevDrvTable, 0, LOG_DRV_MODULE_MAX_NUM*sizeof(LOG_LEVEL_EN));

    ulModuleNum = pstLogIdLevel->ulModuleNum;

    /*��ÿ��ģ��Ĵ�ӡ�������뵽ȫ�ֹ��˱���*/
    for (ulIndex = 0; ulIndex < ulModuleNum; ulIndex++)
    {
        ulModuleId = pstLogIdLevel->astModuleLev[ulIndex].ulModuleId;
        enPrintLev = pstLogIdLevel->astModuleLev[ulIndex].enPrintLev;

        Log_SetModuleIdLev((LOG_MODULE_ID_EN)ulModuleId, (LOG_SUBMOD_ID_EN)0, enPrintLev);
    }

    return VOS_OK;
}

/*****************************************************************************
 �� �� ��  : Log_OmMsgProc
 ��������  : �����߲෢������Ϣ��
 �������  : pRspPacket - ��Ϣ����ָ��
 �������  : ��
 �� �� ֵ  : VOS_VOID

 �޸���ʷ      :
  1.��    ��   : 2008��9��11��
    ��    ��   : ���� 47350
    �޸�����   : �����ɺ���
*****************************************************************************/
VOS_VOID Log_AcpuOmMsgProc(OM_REQ_PACKET_STRU *pRspPacket, OM_RSP_FUNC *pRspFuncPtr)
{
    APP_OM_MSG_EX_STRU             *pstAppToOmMsg;
    VOS_UINT32                      ulOutputType;

    pstAppToOmMsg = (APP_OM_MSG_EX_STRU*)pRspPacket;
    /*������־�����ʽ��ԭ����Ϣ*/
    if (APP_OM_SET_PRINT_OUTPUT_REQ == pstAppToOmMsg->usPrimId)
    {
        ulOutputType = *((VOS_UINT32*)pstAppToOmMsg->aucPara);
        Log_SetOutputType((OM_OUTPUT_PORT_ENUM_UINT32)ulOutputType);
    }
    /*������־��ӡ�����ԭ����Ϣ*/
    else if (APP_OM_SET_PRINT_LEV_REQ == pstAppToOmMsg->usPrimId)
    {
        Log_SetPrintLev((LOG_ID_LEVEL_STRU*)(pstAppToOmMsg->aucPara),
            pstAppToOmMsg->usLength - (OM_APP_MSG_EX_LEN - VOS_OM_HEADER_LEN));
    }
    /*ɾ���ļ�ϵͳ�е���־�ļ�*/
    else if (APP_OM_EXPORT_LOG_END_CNF == pstAppToOmMsg->usPrimId)
    {
        return;
    }
    else
    {
        vos_printf("Undefined PrimId : %d", pstAppToOmMsg->usPrimId);
        return;
    }

    return;
}

/*****************************************************************************
 �� �� ��  : LogShow
 ��������  : ��ʾ��־�ϱ���ǰ״̬
 �������  : VOID
 �������  : ��
 �� �� ֵ  : VOID
 �޸���ʷ      :
  1.��    ��   : 2008��9��11��
    ��    ��   : ���� 47350
    �޸�����   : �����ɺ���
*****************************************************************************/
VOS_VOID LogAcpuShow(VOS_VOID)
{
    VOS_UINT32      ulBufferLen;

    if (LOG_TRUE == g_stLogEnt.ulPrintSwitch)
    {
        vos_printf("The Current Log State:      ON\n");
    }
    else
    {
        vos_printf("The Current Log State:      OFF\n");
    }

#ifdef __LOG_BBIT__
    vos_printf("The Data Type:              STRING\n");
#else
    vos_printf("The Data Type:              DOT\n");
#endif

    if (OM_OUTPUT_SHELL == g_stLogEnt.ulLogOutput)
    {
        vos_printf("The Output Type:            COM\n");
    }
    else if (OM_OUTPUT_FS == g_stLogEnt.ulLogOutput)
    {
        vos_printf("The Output Type:            File System\n");
    }
    else if (OM_OUTPUT_SDT == g_stLogEnt.ulLogOutput)
    {
        vos_printf("The Output Type:            SDT\n");
    }
    else
    {
        /*Make pclint happy*/
    }

    ulBufferLen = (VOS_UINT32)OM_RingBufferFreeBytes(g_stLogEnt.rngOmRbufId);
    vos_printf("Remainder Len of Log buffer:%ld\n", ulBufferLen);
}

#ifdef  __cplusplus
  #if  __cplusplus
  }
  #endif
#endif


