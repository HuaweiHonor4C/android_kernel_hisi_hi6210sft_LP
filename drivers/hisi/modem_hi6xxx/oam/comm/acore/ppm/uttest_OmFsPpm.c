/* ͷ�ļ����� */
#include "omsdlog.h"
#include "OmFsPpm.h"
#include "omnvinterface.h"

extern NV_FLASH_LOG_RECORD_STRU            g_stFlashLogCfg;

/*******************************************************************
*������:
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
VOS_UINT32 uttest_PPM_FSStartLog_case1(VOS_VOID)
{
    g_stFlashLogCfg.ulGULogFileSize = 0;

    return PPM_FSStartLog();
}

/*******************************************************************
*������:
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
VOS_UINT32 uttest_PPM_FSStartLog_case2(VOS_VOID)
{
    g_stFlashLogCfg.ulGULogFileSize = 1000;

    return PPM_FSStartLog();
}

/*******************************************************************
*������:
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
VOS_UINT32 uttest_PPM_FSStartLog_case3(VOS_VOID)
{
    g_stFlashLogCfg.ulGULogFileSize = 1000;

    return PPM_FSStartLog();
}

/*******************************************************************
*������:
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
VOS_UINT32 uttest_PPM_FSStartLog_case4(VOS_VOID)
{
    g_stFlashLogCfg.ulGULogFileSize = 1000;

    return PPM_FSStartLog();
}

/*******************************************************************
*������:
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
VOS_UINT32 uttest_PPM_FSWriteLogProc_case1(VOS_VOID)
{
    VOS_UINT8                           aucVirAddr[100];
    VOS_UINT8                           aucPhyAddr[100];

    return PPM_FSWriteLogProc(aucVirAddr, aucPhyAddr, sizeof(aucPhyAddr));
}

/*******************************************************************
*������:
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
VOS_UINT32 uttest_PPM_FSInitLogFile_case1(VOS_VOID)
{
    return PPM_FSInitLogFile();
}

/*******************************************************************
*������:
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
VOS_UINT32 NV_ReadExStub(MODEM_ID_ENUM_UINT16           enModemID,
                            VOS_UINT16                  usID,
                            VOS_VOID                   *pItem,
                            VOS_UINT32                  ulLength)
{
    NV_FLASH_LOG_RECORD_STRU *pstNv;

    pstNv = (NV_FLASH_LOG_RECORD_STRU *)pItem;

    pstNv->ulGULogFileSize = 0;

    return VOS_OK;
}

VOS_UINT32 uttest_PPM_FSInitLogFile_case2(VOS_VOID)
{
    return PPM_FSInitLogFile();
}

/*******************************************************************
*������:
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
VOS_UINT32 NV_ReadExStub1(MODEM_ID_ENUM_UINT16           enModemID,
                            VOS_UINT16                  usID,
                            VOS_VOID                   *pItem,
                            VOS_UINT32                  ulLength)
{
    NV_FLASH_LOG_RECORD_STRU *pstNv;

    pstNv = (NV_FLASH_LOG_RECORD_STRU *)pItem;

    pstNv->ulGULogFileSize = 1000;

    return VOS_OK;
}

VOS_UINT32 uttest_PPM_FSInitLogFile_case3(VOS_VOID)
{
    return PPM_FSInitLogFile();
}

/*******************************************************************
*������:
*���⺯����������:
*Ԥ�ڽ����
************************* �޸ļ�¼ *************************
#  1.��    ��:
#    ��    ��:
#    �޸�����:
*******************************************************************/
VOS_UINT32 uttest_PPM_FSInitLogFile_case4(VOS_VOID)
{
    return PPM_FSInitLogFile();
}

