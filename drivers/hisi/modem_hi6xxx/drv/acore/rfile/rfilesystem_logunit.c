

/*****************************************************************************
  1 ͷ�ļ�����
*****************************************************************************/
#include <linux/jiffies.h>
#include <linux/string.h>

#include "BSP.h"
#include <rfilesystem_logunit.h>
#include <rfilesystem_process.h>
#include "drv_ifc.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif

#if defined(CHIP_BB_HI6620)
#define     FLASHLESS_LOG_DIR                       "/data/hisi_logs/cp_log/rfile_log.txt"
#elif defined(CHIP_BB_HI6758)
#define     FLASHLESS_LOG_DIR                       "/yaffs0/rfile_log.txt"
#else
#define     FLASHLESS_LOG_DIR                       "/Errlog/rfile_log.txt"
#endif


/*****************************************************************************
  2 ȫ�ֱ�������
*****************************************************************************/
/*���ڱ����¼��������ǰindex���Ƿ�������Ӽ�¼������Ϣ*/
bsp_flashless_log_recordmgr     *g_flashless_log_recordmgr = (bsp_flashless_log_recordmgr *)FLASHLESS_LOG_RECORDMGR_DATA_ADDR;

/*����log����*/
bsp_flashless_log_data   *g_flashless_log_data_ptr = (bsp_flashless_log_data *)FLASHLESS_LOG_DATA_ADDR;


/*���ڴ�ӡ����������log��ӡ��ֱ��
ע��Ҫ��RFS_EVENT_VALUE˳��/��������һ��*/
const char* g_RfileLogEvent[]=
{
    "RFS_EVENT_NONE",
     "RFS_EVENT_LOCAL",
    "RFS_EVENT_PACKET",
    "RFS_EVENT_ICC",
    "RFS_EVENT_MODEM",
    "RFS_EVENT_HSIC",
    "RFS_EVENT_RECEIVEAP",
    "RFS_EVENT_ACORE",
    "RFS_EVENT_MAX",
};
/*���ڴ�ӡ����������log��ӡ��ֱ��
ע��Ҫ��bsp_flashless_fileoper_type �е�˳��/��������һ��*/
const char* g_RfileLogFileoperate[]=
{
    "open file",
    "close file",
    "to read",
    "to write",
    "to seek",
    "to delete",
    "to tell",
    "to set",
    "to send",
    "to init",
    "none",
};
extern void msleep(unsigned int msec);


/*****************************************************************************
  3 ����ʵ��
*****************************************************************************/

/****************************************************************************************
��������
*****************************************************************************************/

/******************************************************************************
*  Function:  FlashLessLogInit
*  Description:
*  ���ڶ�����Ҫ�ı����ʹ洢�ռ��ʼ��
*  Calls:
*
*  Called By:
*
*  Input:
*
*  Output:
*
*  Return:
*
********************************************************************************/
void FlashLessLogInit(void)/*Զ���ļ�ϵͳ��ʼ��*/
{
    if (NULL != g_flashless_log_recordmgr)
    {
        if (FLASHLESS_LOG_RECORD_START != g_flashless_log_recordmgr->uStartStop
            && FLASHLESS_LOG_RECORD_STOP != g_flashless_log_recordmgr->uStartStop)
        {
            printk("FlashLessLogInit, To clear all data in A core!\n");
            /*����memset̫�磬������*/
          //  memset((void*)EXCH_RFS_ADDR, 0x00, EXCH_RFS_SIZE);
            g_flashless_log_recordmgr->uStartStop = FLASHLESS_LOG_RECORD_START;
            g_flashless_log_recordmgr->uCount = 0;
            g_flashless_log_recordmgr->uIndex = 0;
        }
        else
        {
            printk("FlashLessLogInit, the unit has been initiated by C core!\n");
        }
    }
    else
    {
        printk("FlashLessLogInit, g_flashless_log_recordmgr = NULL!\n");
    }
}
/******************************************************************************
*  Function:  FlashLessLogClearData
*  Description:
*  ��������洢�ռ�����ݣ�����ʼ��index
*  Calls:
*
*  Called By:
*
*  Input:
*
*  Output:
*
*  Return:
*
********************************************************************************/
void FlashLessLogClearData(void)
{
    memset((void*)EXCH_RFS_ADDR, 0x00, EXCH_RFS_SIZE);/* [false alarm]:static memory,can not overflow*/
    g_flashless_log_recordmgr->uStartStop = FLASHLESS_LOG_RECORD_START;
    printk("FlashLessLogClearData, this function has run!\n");
}

/******************************************************************************
*  Function:  void  FlashLessLogGetNameInfo(char *ptrname)
*  Description:
*  ժȡ�ļ����ֵ�FLASHLESS_LOG_FILENAME_LEN���ַ������ڴ洢
*  Calls:
*
*  Called By:
*
*  Input:
*
*  Output:
*
*  Return:
*
********************************************************************************/
void  FlashLessLogGetNameInfo(char *ptrname, char *outptrname)
{
    unsigned int     uPos = 0;
    int     iLen = 0;

    if (NULL != ptrname && NULL != outptrname)
    {
        iLen = strlen((const char*)ptrname);

        /*�ļ�����Ϣ���Ȳ��ܴ���FLASHLESS_LOG_FILENAME_LEN���ַ�������ֻ��¼��FLASHLESS_LOG_FILENAME_LEN���ַ�*/
        uPos = (iLen > FLASHLESS_LOG_FILENAME_LEN)?(iLen - FLASHLESS_LOG_FILENAME_LEN):0;
        iLen = iLen - uPos;
        strncpy(outptrname, (const char*)(ptrname + uPos), iLen);
    }
    else
    {
        printk("FlashLessLogGetNameInfo, ptr is NULL!\n");
    }
}


/******************************************************************************
*  Function:  void  FlashLessLogAddInfoCurCodeFile(UINT32 uline)
*  Description:
*  ��log��Ϣ�洢�����ؿռ�,����洢��ǰԴ�ļ������ֺ���������Ϣ
*  Calls:
*
*  Called By:
*
*  Input:
*
*  Output:
*
*  Return:
*
********************************************************************************/
void  FlashLessLogAddInfoCurCodeFile(char codefile, unsigned int uline)
{


    if (NULL != g_flashless_log_data_ptr)
    {
        g_flashless_log_data_ptr[g_flashless_log_recordmgr->uIndex].codeline = uline;
        //todo, add time stamp bellow
        {
         //   FlashLessLogGetNameInfo("A core file", shortfilename);
            strncpy(g_flashless_log_data_ptr[g_flashless_log_recordmgr->uIndex].srcfile, "Acore", sizeof("Acore"));
        }
        g_flashless_log_data_ptr[g_flashless_log_recordmgr->uIndex].utimestamp = jiffies;
    }
    else
    {
        printk("FlashLessLogAddInfoCurCodeFile, s_flashless_log_data_ptr is NULL!\n");
    }
}

/******************************************************************************
*  Function:  void  FlashLessLogAddInfoOperation(RFS_EVENT_VALUE eEvent, char *ptrname, BSP_U32 fhandle, bsp_flashless_fileoper_type opertype)
*  Description:
*  ��log��Ϣ�洢�����ؿռ�,����洢������event��Ϣ���ļ����;�����Լ��ļ���д������������Ϣ
*  Calls:
*
*  Called By:
*
*  Input:
*
*  Output:
*
*  Return:
*
********************************************************************************/
void  FlashLessLogAddInfoOperation(RFS_EVENT_VALUE eEvent, char *ptrname, unsigned int fhandle, bsp_flashless_fileoper_type opertype)
{
    char        shortfilename[FLASHLESS_LOG_FILENAME_LEN + 1] = {0};

    if (NULL != g_flashless_log_data_ptr)
    {
        g_flashless_log_data_ptr[g_flashless_log_recordmgr->uIndex].eEvent = eEvent;
        g_flashless_log_data_ptr[g_flashless_log_recordmgr->uIndex].fileopertype = opertype;
        g_flashless_log_data_ptr[g_flashless_log_recordmgr->uIndex].fhandle = fhandle;
        if (NULL != ptrname)
        {
            FlashLessLogGetNameInfo(ptrname, shortfilename);
            strncpy(g_flashless_log_data_ptr[g_flashless_log_recordmgr->uIndex].filename, (const char*)shortfilename,(FLASHLESS_LOG_FILENAME_LEN+1));
        }
        else
        {
            printk("FlashLessLogAddInfoOperation, ptrname is NULL!\n");
        }
    }
    else
    {
        printk("FlashLessLogAddInfoOperation,  g_flashless_log_data_ptr is NULL!\n");
    }
}
/******************************************************************************
*  Function:  void  FlashLessLogAddInfoOthers(int param1, int param2)
*  Description:
*  ��log��Ϣ�洢�����ؿռ�,����洢������Ҫ��¼����Ϣ
*  Calls:
*
*  Called By:
*
*  Input:
*
*  Output:
*
*  Return:
*
********************************************************************************/
void  FlashLessLogAddInfoOthers(int param1, int param2)
{
    if (NULL != g_flashless_log_data_ptr)
    {
        g_flashless_log_data_ptr[g_flashless_log_recordmgr->uIndex].sRelt = param1;
        g_flashless_log_data_ptr[g_flashless_log_recordmgr->uIndex].param = param2;
    }
    else
    {
        printk("FlashLessLogAddInfoOthers, g_flashless_log_data_ptr is NULL!\n");
    }
}

/******************************************************************************
*  Function:  void  FlashLessLogResetDatabuf()
*  Description:
*  �����ǰ��¼��Ϊ�¼�¼�洢��׼��
*  Calls:
*
*  Called By:
*
*  Input:
*
*  Output:
*
*  Return:
*
********************************************************************************/
void  FlashLessLogResetDatabuf(void)
{
//    printk("FlashLessLogResetDatabuf, index is %d!\n", g_flashless_log_recordmgr->uIndex);
    if (NULL != g_flashless_log_data_ptr
        && g_flashless_log_recordmgr->uIndex < FLASHLESS_LOG_MAX_NUMBER)
    {
        memset((void*)(g_flashless_log_data_ptr + (g_flashless_log_recordmgr->uIndex)), 0, sizeof(bsp_flashless_log_data));
    }
}

/******************************************************************************
*  Function:  void  FlashLessLogAddIndex()
*  Description:
*  ��log index���м�һ����
*  Calls:
*
*  Called By:
*
*  Input:
*
*  Output:
*
*  Return:
*
********************************************************************************/
void  FlashLessLogAddIndex(void)
{

    /*ֻ��֮ǰ������Ч����log��Ϣ������Ż��index���м�һ����*/
    if (NULL != g_flashless_log_data_ptr)
    {
        (g_flashless_log_recordmgr->uIndex)++;
        (g_flashless_log_recordmgr->uCount)++;
        /*���û��ط�ʽ�洢,���ﵽ���������,��ͷ��ʼ���и��Ǵ洢*/
        if (g_flashless_log_recordmgr->uIndex >= FLASHLESS_LOG_MAX_NUMBER)
        {
            g_flashless_log_recordmgr->uIndex = 0;
            g_flashless_log_recordmgr->uCount = FLASHLESS_LOG_MAX_NUMBER;
//            printk("FlashLessLogAddIndex, the number of total logs is MAX!\n");
        }
//        printk("FlashLessLogAddIndex, index is %d!\n", g_flashless_log_recordmgr->uIndex);
    }
    else
    {
        printk("FlashLessLogAddIndex, g_flashless_log_data_ptr is NULL!\n");
    }
}
/******************************************************************************
*  Function:  void FlashLessLogPrint(void)
*  Description:
*  ���洢�ռ��log���ݴ�ӡ��shell
*  Calls:
*
*  Called By:
*
*  Input:
*
*  Output:
*
*  Return:
*
********************************************************************************/
void FlashLessLogPrint(void)
{
    bsp_flashless_log_data  *ptr_log = (bsp_flashless_log_data *)FLASHLESS_LOG_DATA_ADDR;
    unsigned short     logindex = 0;

    printk("===============================flashless log starts====================================\n");
    /*ȷ����ǰû�����log�ļ�*/
    if (NULL != g_flashless_log_recordmgr
        && FLASHLESS_LOG_RECORD_START == g_flashless_log_recordmgr->uStartStop)
    {
        g_flashless_log_recordmgr->uCount = (g_flashless_log_recordmgr->uCount > FLASHLESS_LOG_MAX_NUMBER)?FLASHLESS_LOG_MAX_NUMBER: g_flashless_log_recordmgr->uCount;
        printk("===============================total records is %d====================================\n", g_flashless_log_recordmgr->uCount);
        while (logindex < (g_flashless_log_recordmgr->uCount))
        {
            /*����Ǳ��ж�*/
            (ptr_log + logindex)->eEvent = ((ptr_log + logindex)->eEvent > RFS_EVENT_MAX)? RFS_EVENT_MAX: (ptr_log + logindex)->eEvent;
            (ptr_log + logindex)->fileopertype = ((ptr_log + logindex)->fileopertype > FLASHLESS_FILEOPER_MAX)?FLASHLESS_FILEOPER_MAX : (ptr_log + logindex)->fileopertype;

            printk("%s  line %d  curtime = %d\n%s (%s)  fhandle = 0x%x  %s result = %d param = %d\n",
                (ptr_log + logindex)->srcfile, (ptr_log + logindex)->codeline, (ptr_log + logindex)->utimestamp, g_RfileLogEvent[(ptr_log + logindex)->eEvent], (ptr_log + logindex)->filename, (ptr_log + logindex)->fhandle, g_RfileLogFileoperate[(ptr_log + logindex)->fileopertype],
                            (ptr_log + logindex)->sRelt, (ptr_log + logindex)->param);
            logindex++;
            msleep(1);
        }
    }
    else
    {
        printk("g_flashless_log_recordmgr = NULL or creating log file! \n");
    }
    printk("===============================flashless log ends====================================\n");

}


/******************************************************************************
*  Function:  void  FlashLessLog_RecordStart(void)
*  Description:
* ���ñ�־�������¼�log��Ϣ���ڴ�����
*  Calls:
*
*  Called By:
*
*  Input:
*
*  Output:
*
*  Return:
*
********************************************************************************/
void FlashLessLog_RecordStart(void)
{
    g_flashless_log_recordmgr->uStartStop = FLASHLESS_LOG_RECORD_START;
}

/******************************************************************************
*  Function:  void  FlashLessLog_RecordStop(void)
*  Description:
* ���ñ�־��������(ֹͣ)�¼�log��Ϣ���ڴ�����
*  Calls:
*
*  Called By:
*
*  Input:
*
*  Output:
*
*  Return:
*
********************************************************************************/
void FlashLessLog_RecordStop(void)
{
    g_flashless_log_recordmgr->uStartStop = FLASHLESS_LOG_RECORD_STOP;
}


/******************************************************************************
*  Function:  void FlashLessLogSave(void)
*  Description:
*  ���洢�ռ��log���ݱ��浽ap����ļ���
*  Calls:
*
*  Called By:
*
*  Input:
*
*  Output:
*
*  Return:
*
********************************************************************************/
#if 1/*defined(FEATURE_FLASH_LESS)*/
void FlashLessLogSave(void)
{
	return;
}
#else/*to be fixed*/
void FlashLessLogSave(void)/*��V3/V9�Ͽ�����A��ֱ�ӱ���*/
{
    RFILE            *fhandle = NULL;
    int             uWritenSize = 0;
    unsigned int    uTotalSize = 0;
    int             iRelt = 0;

    bsp_flashless_log_data      *ptrData = (bsp_flashless_log_data*)FLASHLESS_LOG_DATA_ADDR;

    /*ֹͣ���LOG*/
    FlashLessLog_RecordStop();/*A,C��û��һ����õĳ������ݲ����ǻ���*/

    /*��д���ļ�*/
    fhandle = bsp_linux_fopen(FLASHLESS_LOG_DIR, "w+");
    if (NULL != fhandle)
    {
        uTotalSize = sizeof(bsp_flashless_log_data) * (g_flashless_log_recordmgr->uCount);
        uWritenSize = bsp_linux_fwrite((const void*)ptrData, uTotalSize, fhandle);
        iRelt = bsp_linux_fclose(fhandle);
        fhandle = NULL;
        printk("FlashLessLogSave A core, writen %d of %d, result = %d", uWritenSize, uTotalSize, iRelt);
    }
    else
    {
        printk("FlashLessLogSave A core, failed to open file!");
    }
    /*�������log*/
    FlashLessLog_RecordStart();

}
#endif


/******************************************************************************
*  Function:  int  FlashLessLogCanAdd(void)
*  Description:
* ͨ���жϻ��������жϵ�ǰ�Ƿ���������µ�log��Ϣ��
*  Calls:
*
*  Called By:
*
*  Input:
*
*  Output:
*
*  Return:
*
********************************************************************************/
int FlashLessLogCanAdd(void)
{
    int     iRelt = 0;

    if (NULL != g_flashless_log_recordmgr
        && FLASHLESS_LOG_RECORD_START == g_flashless_log_recordmgr->uStartStop)
    {
        iRelt = 1;
    //    printk("FlashLessLogCanAdd, to add, index = %d!\n", g_flashless_log_recordmgr->uIndex);
    }
    else
    {
    //    printk("FlashLessLogCanAdd, can not be added!\n");
    }
    return iRelt;
}
void FlashLessLogAddLogs(void)
{
	return;
}
void rfile_log_test0(void)
{
   FlashLessLogInit();
}
void rfile_log_test1(void)
{
   FLASHLESS_CMD_ADD_LOG(RFS_EVENT_HSIC, "adb/bsp_perimgr_test", 0x12213213, 3, 4,5);
}

void rfile_log_test2(void)
{
   FLASHLESS_CMD_ADD_LOG(RFS_EVENT_HSIC, "adb/bsp_perimgr_test2", 0x12213213, 3, 4,5);
}

void rfile_log_test3(void)
{
    int i = 0;
    for (i = 0;i < FLASHLESS_LOG_MAX_NUMBER;i++)
    {
        rfile_log_test1();
        if (FLASHLESS_LOG_MAX_NUMBER/100 == i )
        {
            FlashLessLogAddLogs();
        }
        if (0 == g_flashless_log_recordmgr->uIndex)
        {
            break;
        }
    }
}


#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

