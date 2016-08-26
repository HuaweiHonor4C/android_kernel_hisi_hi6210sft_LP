

/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/


#ifndef __RFILESYSTEM_LOGUNIT__
#define __RFILESYSTEM_LOGUNIT__

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif

#include "BSP.h"
#include "MemoryLayout.h"

/*****************************************************************************
  2 �궨��
*****************************************************************************/
/*#define IFCP_FUNC_RFILE_LOG_SAVE 46*//*Ҫ��Ϊ��bsp.h������*/

#define FLASHLESS_LOG_FILENAME_LEN              15          /*ֻ�����������ļ����ֵ�15���ַ�*/

#define RFILE_OPER_RESULT_FAIL                    (-1)
#define RFILE_OPER_RESULT_OK                      (0)

/*�����¼������������ﵽ��ֵ�󻷻ش洢*/
#define     FLASHLESS_LOG_MAX_NUMBER            (FLASHLESS_LOG_DATA_SIZE/sizeof(bsp_flashless_log_data))

/*��Ƿ�*/
#define FLASHLESS_LOG_RECORD_START              0x2468ace0
#define FLASHLESS_LOG_RECORD_STOP               0x0eca8642

/*A C �˹����ڴ��ַ*/
/*#define EXCH_RFS_ADDR                           0xffffffff*/

/*�ڴ��С ��ν�ɲ�*/
/*#define EXCH_RFS_SIZE                           0xffffffff*/

/*z00179562,ccore unite,Զ���ļ�ϵͳ��ά�ɲ�,starts,����Ҫʹ��excDrv.h�еĶ���*/
#define EXCH_RFS_ADDR (MEMORY_RAM_CORESHARE_RFS_MNTN_ADDR)
#define EXCH_RFS_SIZE (MEMORY_RAM_CORESHARE_RFS_MNTN_SIZE)
/*z00179562,ccore unite,Զ���ļ�ϵͳ��ά�ɲ�,ends*/


/*���ڶ���Ӽ�¼�Ĺ���*/
#define FLASHLESS_LOG_RECORDMGR_DATA_ADDR       (EXCH_RFS_ADDR)
#define FLASHLESS_LOG_RECORDMGR_DATA_SIZE       (sizeof(bsp_flashless_log_recordmgr))


/*���ڴ洢log����*/
#define FLASHLESS_LOG_DATA_ADDR                  (FLASHLESS_LOG_RECORDMGR_DATA_ADDR + FLASHLESS_LOG_RECORDMGR_DATA_SIZE)
#define FLASHLESS_LOG_DATA_SIZE                  (EXCH_RFS_SIZE - FLASHLESS_LOG_RECORDMGR_DATA_SIZE)


#define RFILE_ERROR   (-1)
#define RFILE_OK      (0)
/*****************************************************************************
  3 ö�ٶ���
*****************************************************************************/


/*****************************************************************************
  4 ��Ϣͷ����
*****************************************************************************/


/*****************************************************************************
  5 ��Ϣ����
*****************************************************************************/


/*****************************************************************************
  6 STRUCT����
*****************************************************************************/
/*�¼����壬�������ֵ�ǰ�����Ĳ���*/
typedef enum
{
    /* RFS stands for Remote File System*/
   /*���յ��������Ϣ*/
    RFS_EVENT_CMD,
    RFS_EVENT_LOCAL,

    /* �����Ϣ */
    RFS_EVENT_PACKET,
    /*���͸��˼�ͨ����Ϣ */
    RFS_EVENT_ICC,
    /*�յ�C Core��Ϣ */
    RFS_EVENT_MODEM,
    /* ���͸�AP��Ϣ */
    RFS_EVENT_HSIC,
    /*�յ�AP��Ӧ��Ϣ */
    RFS_EVENT_RECEIVEAP,
     /*�յ�A�˻�Ӧ��Ϣ */
    RFS_EVENT_ACORE,
    RFS_EVENT_MAX
}RFS_EVENT_VALUE;

/*�����ļ��Ĳ�������*/
typedef enum _bsp_flashless_fileoper_type
{
    FLASHLESS_FILEOPER_OPEN,
    FLASHLESS_FILEOPER_CLOSE,
    FLASHLESS_FILEOPER_READ,
    FLASHLESS_FILEOPER_WRITE,
    FLASHLESS_FILEOPER_SEEK,
    FLASHLESS_FILEOPER_DELETE,
    FLASHLESS_FILEOPER_TELL,
    FLASHLESS_FILEOPER_MKDIR,
    FLASHLESS_FILEOPER_RMDIR,
    FLASHLESS_FILEOPER_OPENDIR,
    FLASHLESS_FILEOPER_READDIR,
    FLASHLESS_FILEOPER_CLOSEDIR,
    FLASHLESS_FILEOPER_STAT,
    FLASHLESS_FILEOPER_ERRNOGET,
    FLASHLESS_FILEOPER_XCOPY,
    FLASHLESS_FILEOPER_XDELETE,
    FLASHLESS_FILEOPER_ACCESS,
    FLASHLESS_FILEOPER_RENAME,
    FLASHLESS_FILEOPER_MASS_READ,
    FLASHLESS_FILEOPER_MASS_WRITE,
    FLASHLESS_FILEOPER_SET,
    FLASHLESS_FILEOPER_SEND,
    FLASHLESS_FILEOPER_INIT,
    FLASHLESS_FILEOPER_MAX
} bsp_flashless_fileoper_type;


/*�洢log��Ϣ�����ݽṹ*/
typedef struct _bsp_flashless_log_data
{
    RFS_EVENT_VALUE          eEvent;                                /*�ļ����ʷ�ʽ,HSIC, ICC��*/
    unsigned int     codeline;                                                                     /*��ǰ������*/

    unsigned int     utimestamp;                                                             /*ʱ���*/
    unsigned int     sRelt;                                                                          /*�������*/
    unsigned int     param;                                                                          /*����������Ϣ*/

    unsigned int         fhandle;                                                                 /*���ʵ��ļ��ľ��*/
    char            filename[FLASHLESS_LOG_FILENAME_LEN + 1];       /*���ʵ��ļ�������Ϣ*/
    char            srcfile[FLASHLESS_LOG_FILENAME_LEN + 1];       /*���ʵ�Դ�ļ�������Ϣ*/
    bsp_flashless_fileoper_type     fileopertype;                       /*�ļ�������ʽ�������д��*/
} bsp_flashless_log_data;

/*���ں˼�ͨѶ*/
typedef struct _bsp_flashless_log_ifcmsg
{
    unsigned int ulModuleId;
    unsigned int ulFuncId;
    unsigned int ulFlag;
} bsp_flashless_log_ifcmsg;

typedef struct _bsp_flashless_log_recordmgr
{
    unsigned int     uIndex;
    unsigned int     uCount;
    unsigned int     uStartStop;
} bsp_flashless_log_recordmgr;


/*****************************************************************************
  7 UNION����
*****************************************************************************/


/*****************************************************************************
  8 OTHERS����
*****************************************************************************/


/*****************************************************************************
  9 ȫ�ֱ�������
*****************************************************************************/


/*****************************************************************************
  10 ��������
*****************************************************************************/
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
extern void FlashLessLogInit(void);
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
extern void FlashLessLogClearData(void);

/******************************************************************************
*  Function:  void  FlashLessLogGetNameInfo(char *ptrname)
*  Description:
*  ժȡ�ļ����ֵģ������ַ������ڴ洢
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
extern void  FlashLessLogGetNameInfo(char *ptrname, char *outptrname);

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
extern void FlashLessLogPrint(void);

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
extern void FlashLessLogSave(void);

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
extern int FlashLessLogCanAdd(void);
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
extern void  FlashLessLogResetDatabuf(void);

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
extern void  FlashLessLogAddIndex(void);

/******************************************************************************
*  Function:  void  FlashLessLogAddInfoCurCodeFile(UINT32 uline)
*  Description:
*  ��log��Ϣ�洢�����ؿռ�,����洢��ǰԴ�ļ�������Ϣ
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
extern void  FlashLessLogAddInfoCurCodeFile(char codefile, unsigned int uline);

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
extern void  FlashLessLogAddInfoOperation(RFS_EVENT_VALUE eEvent, char *ptrname, unsigned int fhandle, bsp_flashless_fileoper_type opertype);
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
extern void  FlashLessLogAddInfoOthers(int param1, int param2);

/*********************************************************************************
����ӿں�,ֻ�����²��ֿ��Ա�����ģ�����!!!!
********************************************************************************/
/*��ʼ��*/
#define     FLASHLESS_CMD_LOG_INIT()        FlashLessLogInit()
/*�������*/
#define     FLASHLESS_CMD_LOG_CLEARDATA()        FlashLessLogClearData()
/*��¼log��Ϣ*/
#define     FLASHLESS_CMD_ADD_LOG(event, ptrname, fhandle, opertype, param1, param2)
#if 0
do{                   \
	unsigned long flag = 0;     \
	local_irq_save(flag);       \
    DRV_SPIN_LOCK(IPC_SEM_RFILE_LOG);             \
    if (1 == FlashLessLogCanAdd())              \
    {                   \
        FlashLessLogResetDatabuf();             \
        FlashLessLogAddInfoCurCodeFile(__FILE__, __LINE__);                     \
        FlashLessLogAddInfoOperation(event, ptrname, fhandle, opertype);                 \
        FlashLessLogAddInfoOthers(param1, param2);                \
        FlashLessLogAddIndex();                                         \
    }               \
    DRV_SPIN_UNLOCK(IPC_SEM_RFILE_LOG);         \
	local_irq_restore(flag);        \
} while(0)
#endif

/*�Ѽ�¼��log��ӡ��shell*/
#define     FLASHLESS_CMD_LOG_PRINT()        FlashLessLogPrint()
/*�Ѽ�¼��log������ļ�*/
#define     FLASHLESS_CMD_LOG_SAVE()        FlashLessLogSave()

#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif /* end of rfilesystem_logunit_new.h */
