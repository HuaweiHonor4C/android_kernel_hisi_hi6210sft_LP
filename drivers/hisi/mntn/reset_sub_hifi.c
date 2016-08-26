
#include <linux/kernel.h>
#include <linux/kthread.h>
#include <linux/module.h>
#include <linux/slab.h>
#include <linux/fs.h>
#include <linux/uaccess.h>
#include <linux/notifier.h>         /* For notifier... */
//#include <linux/hisi/reset.h>
#include "soc_peri_sctrl_interface.h"
#include <soc_modem_sctrl_interface.h>
#include "soc_pmctrl_interface.h"
#include <linux/hisi/hi6xxx-iomap.h>                   /* For IO_ADDRESS access */
#include <soc_ao_sctrl_interface.h>
#include <soc_wdt_interface.h>
#include <soc_baseaddr_interface.h>
#include <soc_mddrc_axi_interface.h>
#include <linux/io.h>
#include "MemoryMap.h"
#include "../ipc_hi6xxx/bsp_drv_ipc.h"
#include "bsp_mailbox.h"
#include <linux/hisi/etb.h>
#include "excDrv.h"
#include "reset_sub_hifi.h"
#include <linux/hisi/hi6xxx_mntn.h>
#include <drv_mailbox_cfg.h>

extern void sochifi_watchdog_send_event(void);

#ifndef _DRV_LLT_
#include <mach/util.h>          /* For mach_call_usermoduleshell*/
#endif
#include <linux/hisi/ipc_msg.h>

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif

/*****************************************************************************
�궨��
*****************************************************************************/

/*��Ϊb090�Ժ��Ѿ�֧�ְ�printk��ӡ��Ϣ�洢���ļ������Բ���Ҫ��ģ���Լ��洢
�繦�ܿ���������init.rc����mkdir log/record */
#define PRINK_TO_FILE

/*****************************************************************************
ȫ�ֱ���
*****************************************************************************/
/*Link used for hifi reset*/
sreset_mgr_LLI  *g_pmgr_hifireset_data = NULL;
#define RESET_CBFUNC_PRIO_LEVEL_LOWT      0
#define RESET_CBFUN_IGNORE_NAME           "NONAME"
#define RESET_CBFUNC_PRIO_LEVEL_HIGH      49
/*����Э����ɸ�λ����*/
static sreset_mgr_assistant_hifi   g_reset_assistant_hifi;
/*ms, time of wating mail msg reply from hifi/mcu*/
#define RESET_WAIT_TIMEOUT_MAILMSG        5000

/*****************************************************************************
��������
*****************************************************************************/
static void  do_reset_system(int ireset_type);
static void reset_set_cpu_status(unsigned int iOff, unsigned int iflag);
static int ccorereset_enable_wdt_irq(void);
#ifndef _DRV_LLT_
extern void check_doreset_for_noc(void);
#endif
extern void BSP_CPU_StateSet(unsigned int iOff,unsigned int offset);
/*****************************************************************************
 �� �� ��  : mailbox_recfun_mcu_hifireset
 ��������  : ���ڽ���������MCU��MAILBOX��Ϣ
 �������  : void  *UserHandle, �û����
            void *MailHandle, ������
            unsigned long MailLen, ���ݳ���
 �������  : ��
 �� �� ֵ  : void
*****************************************************************************/
static int mailbox_recfun_mcu_hifireset(union ipc_data *msg)
{
    unsigned char msg_mcu = 0;

    msg_mcu = (msg->cmd_mix).cmd_para[0];
    printk(KERN_INFO "%s: receive mail from mcu, msg_mcu = %d\n", __FUNCTION__, msg_mcu);
    if (1 == msg_mcu)
    {
        up(&(g_reset_assistant_hifi.sem_wait_mcu_msg_hifireset));
    }
    else
    {
        /*��λϵͳ*/
        printk(KERN_INFO "%s: mcu give wrong msg, msg is %d\n", __FUNCTION__, msg_mcu);
        do_reset_system(RESET_TYPE_MSG_FROM_MCU_WRONG);
    }
    return 0;
}
/*****************************************************************************
 �� �� ��  : reset_do_regcbfunc
 ��������  : �����������ע��ص�����������Modem��λǰ��������ݡ�
 �������  :
         sreset_mgr_LLI *plink,��������ע�⣬����Ϊ��.
            const char *pname, ���ע�������
         pdrv_reset_cbfun cbfun,    ���ע��Ļص�����
         int userdata,�����˽������
         Int Priolevel, �ص������������ȼ� 0-49������0-9 ������
 �������  : ��
 �� �� ֵ  : int
*****************************************************************************/
sreset_mgr_LLI * reset_do_regcbfunc(sreset_mgr_LLI *plink, const char *pname, pdrv_reset_cbfun pcbfun, int userdata, int priolevel)
{
    sreset_mgr_LLI  *phead = plink;
    sreset_mgr_LLI  *pmgr_unit = NULL;

    /*�ж�����Ƿ�Ϸ������Ϸ����ش���*/
    if (NULL == pname
        || NULL == pcbfun
        || (priolevel < RESET_CBFUNC_PRIO_LEVEL_LOWT || priolevel > RESET_CBFUNC_PRIO_LEVEL_HIGH))
    {
        printk(KERN_ERR "%s: fail in ccore reset regcb,fail, name 0x%p, cbfun 0x%p, prio %d\n", __FUNCTION__, \
                        (void*)pname, (void*)pcbfun, priolevel);
        return NULL;
    }

    /*����ռ�*/
    pmgr_unit = (sreset_mgr_LLI*)kmalloc(sizeof(sreset_mgr_LLI), GFP_KERNEL);
    if (NULL != pmgr_unit)
    {
        hisi_io_memset((void*)pmgr_unit, 0, (sizeof(sreset_mgr_LLI)));
        /*��ֵ*/
        strncpy(pmgr_unit->cbfuninfo.name, pname, DRV_RESET_MODULE_NAME_LEN);
        pmgr_unit->cbfuninfo.priolevel = priolevel;
        pmgr_unit->cbfuninfo.userdata = userdata;
        pmgr_unit->cbfuninfo.cbfun = pcbfun;
    }

    /*��һ�ε��øú���������Ϊ��*/
    if (NULL == phead)
    {
        phead = pmgr_unit;
    }
    else
    {
    /*�������ȼ���������*/
        phead = reset_link_insert(phead, pmgr_unit);
    }
    return phead;
}

/*caixi 6*/
/*****************************************************************************
 �� �� ��  : hifireset_regcbfunc
 ��������  : �����������ע��ص�����������HIFI��λǰ��������ݡ�
 �������  : const char *pname, ���ע�������
         pdrv_reset_cbfun cbfun,    ���ע��Ļص�����
         int userdata,�����˽������
         Int Priolevel, �ص������������ȼ� 0-49������0-9 ������
 �������  : ��
 �� �� ֵ  : int
*****************************************************************************/
int hifireset_regcbfunc(const char *pname, pdrv_reset_cbfun pcbfun, int userdata, int priolevel)
{
    g_pmgr_hifireset_data = reset_do_regcbfunc(g_pmgr_hifireset_data, pname, pcbfun, userdata, priolevel);
    printk(KERN_INFO "%s: %s registered a cbfun for hifi reset\n", __FUNCTION__, pname);
    return BSP_RESET_OK;
}
/*****************************************************************************
 �� �� ��  : get_local_time
 ��������  : kernel���ȡϵͳʱ��
 �������  : char *pbuf, ����ϵͳʱ���ַ�������
            int buf_len, �ַ������鳤��
 �������  : ��
 �� �� ֵ  : void
*****************************************************************************/
static void get_local_time(char *pbuf, int buf_len)
{
   //��������ļ�ʱ�䣬�γ�һ���ַ�������2012-7-13-8-15-38,��ʾ:ϵͳʱ���µ� ������ʱ����
   struct timeval tv;
   struct rtc_time tm;
   memset(&tv, 0, sizeof(struct timeval));
   memset(&tm, 0, sizeof(struct rtc_time));
   do_gettimeofday(&tv);
   tv.tv_sec -= sys_tz.tz_minuteswest * 60; 
   rtc_time_to_tm(tv.tv_sec, &tm);
   snprintf(pbuf,buf_len,"%d-%d-%d-%d-%d-%d",tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec);
}
/*****************************************************************************
 �� �� ��  : apr_upload_hificrash
 ��������  : ֪ͨlogservice������·��LOG��Ϣ
 �������  : ��
 �������  : ��
 �� �� ֵ  : void
*****************************************************************************/
void apr_upload_hificrash(void)
{
	char apr_cmd[MAX_APR_CMD_LEN]={0};
	int ret = 0;
	char output_zip_filename[MAX_APR_FILE_LEN] = {0};
	char local_time[MAX_APR_LOCAL_TIME_STR] = {0};
	get_local_time(local_time, MAX_APR_LOCAL_TIME_STR);
	snprintf(output_zip_filename,MAX_APR_FILE_LEN,"%s_%s",local_time,"hificrash");
	snprintf(apr_cmd,MAX_APR_CMD_LEN,"archive -d %s -d %s -d %s -o %s -z zip",AP_LOG_PATH_APR, CP_LOG_PATH_APR, HIFI_LOG_PATH_APR,output_zip_filename);
	ret = log_to_exception("balong_hifi",apr_cmd);
	if(ret<0)
	{
		printk(KERN_ERR "hifi log write apr_exception err\n");
	}
}
/*caixi 7*/
/*****************************************************************************
 �� �� ��  : hifireset_task
 ��������  : ���ڴ���HIFI��λ��
 �������  : ��
 �������  : ��
 �� �� ֵ  : int
*****************************************************************************/
int hifireset_task(void *arg)
{
    int iresult = BSP_RESET_OK;

#ifdef _DRV_LLT_
#else
    for ( ; ; )
#endif
    {
        down(&(g_reset_assistant_hifi.sem_wait_hifireset));

        printk(KERN_INFO "%s: enter hifireset_task\n", __FUNCTION__);

        printk(KERN_INFO "%s: hifi reset int is coming!\n", __FUNCTION__);

        reset_for_savelog("\n=============hifi reset=============\n");

        /*���ûص�����*/
        iresult = hifireset_runcbfun(MDRV_RESET_CB_BEFORE);
        if (BSP_RESET_OK != iresult)
        {
            printk(KERN_ERR "%s: fail to run cb func before hifi reset\n", __FUNCTION__);

            /*��λϵͳ*/
            do_reset_system(RESET_TYPE_HIFIRESET_RUNCB_STEP1_FAIL);
            return BSP_RESET_ERROR;
        }

#ifdef _DRV_LLT_
#else
        if (0 != down_timeout(&(g_reset_assistant_hifi.sem_wait_mcu_msg_hifireset), msecs_to_jiffies(RESET_WAIT_TIMEOUT_MAILMSG)))
        {
            /*��λϵͳ*/
            printk(KERN_ERR "%s: fail to get mail from mcu,reset system\n", __FUNCTION__);
            /*do_reset_system(RESET_TYPE_FAILGET_MSG_FROM_MCU);*/
            return BSP_RESET_ERROR;
        }

        printk(KERN_INFO "%s: to load hifi bin!\n", __FUNCTION__);

        reset_for_savelog("To load hifi bin\n");

       /*���¼���HIFIӳ��*/
        iresult = hifireset_loadhifibin();
        if (BSP_RESET_OK != iresult)
        {
            reset_for_savelog("fail to load hifi bin\n");
            printk(KERN_ERR "%s: fail to load hifi bin! reset system\n", __FUNCTION__);
            /*��λϵͳ*/
            do_reset_system(RESET_TYPE_HIFIRESET_LOAD_BIN_FAIL);
            return BSP_RESET_ERROR;
        }
#endif

        printk(KERN_INFO "%s: to run cb fun after hifi reset!\n", __FUNCTION__);

        reset_for_savelog("To run cb func after hifi reset\n");

        /*HIFI������Ϻ󣬵��ûص�����*/
        iresult = hifireset_runcbfun(MDRV_RESET_CB_AFTER);

        /*�ָ��ж�ʹ��*/
        finish_reset_sub();

        if (BSP_RESET_OK != iresult)
        {
            printk(KERN_ERR "%s: fail to run cb fun after hifi reset! reset system\n", __FUNCTION__);
            /*��λϵͳ*/
            do_reset_system(RESET_TYPE_HIFIRESET_RUNCB_STEP2_FAIL);
            return BSP_RESET_ERROR;
        }

        printk(KERN_INFO "%s: reset hifi successfully!\n", __FUNCTION__);

        reset_for_savelog("hifi reset ok\n");
#ifndef _DRV_LLT_
        check_doreset_for_noc();
#endif
		if(himntn_hifi_resetlog==1)
		{
			apr_upload_hificrash();	
		}
    }
}


/*caixi 1 2 11*/
/*****************************************************************************
 �� �� ��  :  hifireset_doruncbfun
 ��������  : HIFI��λǰ����ûص������ĺ���������Ȧ���Ӷȳ��꣬���������װ����
 �������  : DRV_RESET_CB_MOMENT_E eparam, 0 ��ʾHIFI��λǰ�������ʾ��λ��

 �������  : ��
 �� �� ֵ  : int
        0, �ɹ�����0��ʧ��
*****************************************************************************/
int hifireset_doruncbfun (const char *pname, DRV_RESET_CB_MOMENT_E eparam)
{
    int  iresult = BSP_RESET_OK;

    sreset_mgr_LLI  *phead = g_pmgr_hifireset_data;

    if (NULL != pname)
    {
        /*���ж�ģ������,��˳��ִ��*/
        if (strcmp(pname, RESET_CBFUN_IGNORE_NAME) == 0)
        {
            while (NULL != phead)
            {
                if (NULL != phead->cbfuninfo.cbfun)
                {
                    iresult = phead->cbfuninfo.cbfun(eparam, phead->cbfuninfo.userdata);
                    if (BSP_RESET_OK != iresult)
                    {
                        /*�������ʧ�ܣ���¼���������,����ֵ*/
                        reset_no_ok_savelog(phead->cbfuninfo.name, iresult, eparam, BSP_RESET_MODULE_CCORE);
                        printk(KERN_ERR "%s: fail to run cbfun of %s, at %d return %d\n", __FUNCTION__, phead->cbfuninfo.name, eparam, iresult);
                        break;
                    }
                    printk(KERN_INFO "%s: run %s cb function 0x%p\n", __FUNCTION__, phead->cbfuninfo.name, phead->cbfuninfo.cbfun);
                }
                phead = phead->pnext;
            }
        }
        else/*��Ҫ�ж�ģ�����֣�ִ��ָ���Ļص�����*/
        {
            while (NULL != phead)
            {
                if (strcmp(pname, phead->cbfuninfo.name) == 0
                    && NULL != phead->cbfuninfo.cbfun)
                {
                    iresult  = phead->cbfuninfo.cbfun(eparam, phead->cbfuninfo.userdata);
                    printk(KERN_INFO "%s: run %s cb function 0x%p\n", __FUNCTION__, phead->cbfuninfo.name, phead->cbfuninfo.cbfun);
                    break;
                }
                phead = phead->pnext;
            }
        }
    }
    else
    {
        iresult = BSP_RESET_ERROR;
    }
    if (BSP_RESET_OK != iresult)
    {
        if (NULL != phead)
        {
            reset_no_ok_savelog(phead->cbfuninfo.name, iresult, eparam, BSP_RESET_MODULE_HIFI);
            printk(KERN_ERR "%s: fail to run cbfun of %s, at %d, return %d\n", __FUNCTION__, phead->cbfuninfo.name, eparam ,iresult);

        }
        else
        {
            printk(KERN_ERR "%s: fail to run cbfun, but phead or pname is null\n", __FUNCTION__);
        }
    }
    return iresult;
}
/*****************************************************************************
 �� �� ��  :  hifireset _runcbfun
 ��������  : HIFI��λǰ����ûص������ĺ�����
 �������  : DRV_RESET_CB_MOMENT_E eparam, 0 ��ʾHIFI��λǰ�������ʾ��λ��

 �������  : ��
 �� �� ֵ  : int
        0, �ɹ�����0��ʧ��
*****************************************************************************/
int hifireset_runcbfun (DRV_RESET_CB_MOMENT_E eparam)
{
    int  iresult = 0;

    if (MDRV_RESET_CB_BEFORE == eparam)
    {
        /*Mailbox ����*/
        reset_set_cpu_status(1, RESET_CPU_HIFI_STATUS_OFF);
        /*�����ص�������������NAS�Ļص�*/
        iresult = hifireset_doruncbfun("NAS_AT", eparam);
        if (BSP_RESET_OK != iresult)
        {
        /*�������ʧ�ܣ���¼���齨name, ����ֵ�����浽�ļ�*/
            goto return_error;
        }

        /*�����ص���������������Ƶ�Ļص�*/
        iresult = hifireset_doruncbfun("CODEC", eparam);
        if (BSP_RESET_OK != iresult)
        {
        /*�������ʧ�ܣ���¼���齨name, ����ֵ�����浽�ļ�*/
            goto return_error;
        }

        /*֪ͨMCU*/
        g_reset_assistant_hifi.smailboxmsg_mcu.iproctec = BSP_RESET_MAILBOX_MSG_PROTECT;
        g_reset_assistant_hifi.smailboxmsg_mcu.idata = BSP_RESET_MCU_MSG_HIFI_RESET_BEFORE;
        hifireset_tonotify(eparam, BSP_RESET_MODULE_MCU);
        /*�����ص�������������OM�Ļص�*/
        iresult = hifireset_doruncbfun("OAM", eparam);
        if (BSP_RESET_OK != iresult)
        {
        /*�������ʧ�ܣ���¼���齨name, ����ֵ�����浽�ļ�*/
            goto return_error;
        }
    }
    else
    {
        /*֪ͨMCU*/
        g_reset_assistant_hifi.smailboxmsg_mcu.idata = BSP_RESET_MCU_MSG_HIFI_RESET_AFTER;
        hifireset_tonotify(eparam, BSP_RESET_MODULE_MCU);

        /*MAILBOX����*/
        reset_set_cpu_status(0, RESET_CPU_HIFI_STATUS_OFF);

        /*�����ص������������ûص�����*/
        iresult = hifireset_doruncbfun(RESET_CBFUN_IGNORE_NAME, eparam);
        if (BSP_RESET_OK != iresult)
        {
            goto return_error;
        }
    }
    printk(KERN_INFO "%s: end of run cb functions for hifi reset at %d, %d\n", __FUNCTION__, eparam, iresult);
    return BSP_RESET_OK;
return_error:
    return BSP_RESET_ERROR;
}
/*****************************************************************************
 �� �� ��  : reset_link_insert
 ��������  : �����ݲ�������
 �������  : sreset_mgr_LLI *plink, ����ָ��
             sreset_mgr_LLI *punit��������Ľڵ�ָ��
 �������  : ��
 �� �� ֵ  : int
*****************************************************************************/
sreset_mgr_LLI * reset_link_insert(sreset_mgr_LLI *plink, sreset_mgr_LLI *punit)
{
    sreset_mgr_LLI    *phead = plink;
    sreset_mgr_LLI    *ppose = plink;
    sreset_mgr_LLI    *ptail = plink;

    if (NULL == plink || NULL == punit)
    {
        return NULL;
    }
    while (NULL != ppose)
    {
        /*�������ȼ����뵽������*/
        if (ppose->cbfuninfo.priolevel > punit->cbfuninfo.priolevel)
        {
            if (phead == ppose)
            {
                punit->pnext = ppose;
                phead = punit;
            }
            else
            {
                ptail->pnext = punit;
                punit->pnext = ppose;
            }
            break;
        }
        ptail = ppose;
        ppose = ppose->pnext;
    }
    if (NULL == ppose)
    {
        ptail->pnext = punit;
    }
    return phead;
}

/*caixi 3*/
/*****************************************************************************
 �� �� ��  : ccorereset_tonotify
 ��������  : HIFI��λʱ��֪ͨMCU
 �������  : DRV_RESET_CB_MOMENT_E eparam,��λǰ���Ǹ�λ��
            int imodule, Ҫ֪ͨ��ģ�飬0��MCU;1,HIFI
 �������  : ��
 �� �� ֵ  : int
*****************************************************************************/
int hifireset_tonotify(DRV_RESET_CB_MOMENT_E eparam, ereset_module emodule)
{
    struct ipc_msg msg;
    int       iret = 0;

    if (MDRV_RESET_CB_BEFORE == eparam)
    {
        if (BSP_RESET_MODULE_MCU == emodule)
        {
            (msg.cmd_mix).cmd_type = TYPE_RESET;
            (msg.cmd_mix).cmd = CMD_NOTIFY;
            (msg.cmd_mix).cmd_obj = OBJ_HIFI;
            (msg.cmd_mix).cmd_src = OBJ_AP;
            msg.mode =ASYNC_CMD;
            memcpy(&msg.data[1], &(g_reset_assistant_hifi.smailboxmsg_mcu),sizeof(g_reset_assistant_hifi.smailboxmsg_mcu));
            iret = ipc_msg_send(OBJ_LPM3, &msg, ASYNC_MODE);
	     if (-1 == iret)
            {
                printk(KERN_ERR "%s: fail to send msg to mcu before resetting hifi\n", __FUNCTION__);  
            }
        }
        else
        {
            printk(KERN_ERR "%s: to notify none in hifireset_tonotify\n", __FUNCTION__);
        }
    }
    else
    {
        if (BSP_RESET_MODULE_MCU == emodule)
        {
            (msg.cmd_mix).cmd_type = TYPE_RESET;
            (msg.cmd_mix).cmd = CMD_NOTIFY;
            (msg.cmd_mix).cmd_obj = OBJ_HIFI;
            (msg.cmd_mix).cmd_src = OBJ_AP;
            msg.mode =ASYNC_CMD;
            memcpy(&msg.data[1], &(g_reset_assistant_hifi.smailboxmsg_mcu),sizeof(g_reset_assistant_hifi.smailboxmsg_mcu));
            iret = ipc_msg_send(OBJ_LPM3, &msg, ASYNC_MODE);
	     if (-1 == iret)
            {
                printk(KERN_ERR "%s: fail to send msg to mcu after resetting hifi\n", __FUNCTION__);  
            }

        }
        else
        {
            printk(KERN_ERR "%s: to notify none in hifireset_tonotify\n", __FUNCTION__);
        }
    }
    printk(KERN_INFO "%s: after send mail to %d, %d\n", __FUNCTION__, emodule, eparam);
    return BSP_RESET_OK;
}

/*caixi 14*/
/*****************************************************************************
 �� �� ��  : ccorereset_enable_wdt_irq
 ��������  : ͨ��д�Ĵ���ʵ���������жϵ�a��
 �������  : ��
 �������  : ��
 �� �� ֵ  : int
*****************************************************************************/
static int ccorereset_enable_wdt_irq(void)
{
#ifdef _DRV_LLT_
#else
	unsigned long sctrl_on  = (unsigned long)HISI_VA_ADDRESS(SOC_AO_SCTRL_BASE_ADDR);

    unsigned long uvalue = 0;


    /*WatchDog1 HIFI WatchDog��ʱ��λ����*/
    uvalue = readl((void __iomem *)SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_ADDR(sctrl_on));
    printk(KERN_INFO "%s: org val = 0x%lx\n", __FUNCTION__, uvalue);

    writel((uvalue | (1 << 6)), (void __iomem *)SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_ADDR(sctrl_on));
    uvalue = readl((void __iomem *)SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_ADDR(sctrl_on));
    printk(KERN_INFO "%s: new val = 0x%lx\n", __FUNCTION__, uvalue);

#if 0
        unsigned int  sc_int_en0_0awd           : 1;  /* bit[0] : [0]�� ACPU Watchdog��λ�����жϣ��͸�MCU�� */
        unsigned int  sc_int_en0_1cm3wdg0       : 1;  /* bit[1] : [1]�� CM3 Watchdog0��λ�����жϣ��͸�ACPU�� */
        unsigned int  sc_int_en0_2hifiwd        : 1;  /* bit[2] : [2]�� HIFI Watchdog��λ�����жϣ��͸�MCU��ACPU�� */
        unsigned int  sc_int_en0_3bakwd         : 1;  /* bit[3] : [3]�� ����Watchdog��λ�����жϣ��͸�MCU��ACPU�� */
        unsigned int  sc_int_en0_4acpu_sft_fiq  : 1;  /* bit[4] : [4]�� acpu fiq int���͸�acpu�����ڵ��ԣ���acpu_sft_fiq_req���ò����� */
#endif
    writel(0x1f, (void __iomem *)SOC_AO_SCTRL_SC_INT_EN_SET_ADDR(sctrl_on));
    uvalue = readl((void __iomem *)SOC_AO_SCTRL_SC_INT_EN_SET_ADDR(sctrl_on));
    printk(KERN_INFO "%s: new uvalue = 0x%lx\n", __FUNCTION__, uvalue);

#endif
    return 0;
}

/*caixi e*/
/*****************************************************************************
 �� �� ��  : do_reset_system
 ��������  : ���ڸ�λϵͳ
 �������  : int ireset_type,��λ����
 �������  : ��
 �� �� ֵ  : int
*****************************************************************************/
static void  do_reset_system(int ireset_type)
{
#ifdef _DRV_LLT_
#else

    systemError((int)BSP_MODU_DORESET, EXCH_S_DORESET, ireset_type, 0, 0);

#endif
}


/*caixi d*/
/*****************************************************************************
 �� �� ��  : reset_set_cpu_status
 ��������  : ��hifi����ccpu��λʱ������״̬������mailbox��������hifi  ��mail.
 �������  : unsigned int iOff  1-��ʹ��;0-�ر�
             unsigned int iflag ��ʶcpu״̬��Ӧ��ƫ��
 �������  : ��
 �� �� ֵ  : int
*****************************************************************************/
static void reset_set_cpu_status(unsigned int iOff, unsigned int iflag)
{
    BSP_CPU_StateSet(iOff,iflag);

    printk(KERN_INFO "%s: reset_set_cpu_status_hifi, ioff = %d, iflag = %d\n", __FUNCTION__, iOff, iflag);
}

/*caixi 9*/
/*****************************************************************************
 �� �� ��  : reset_hifi_up_semaphone
 ��������  : �ͷ�hifi reset�ź���
 �������  : ��
 �������  : ��
 �� �� ֵ  : ��
*****************************************************************************/
void reset_hifi_up_semaphone(void)
{
#ifdef BSP_C_HIFI_RESET_ALONE_FEATURE
    up(&(g_reset_assistant_hifi.sem_wait_hifireset));
    printk(KERN_INFO "%s: reset_hifi_up_semaphone\n", __FUNCTION__);
#endif
}



/*caixi 8*/
/*****************************************************************************
 �� �� ��  : drv_hifireset_cbfun
 ��������  : ������hifi������λʱ���ڴ���mailbox������ݡ�
 �������  : DRV_RESET_CB_MOMENT_E eparam, ��ʾ��λǰ���Ǹ�λ�����
            ��int userdata,�û����ݣ�

 �������  : ��
 �� �� ֵ  : int
        0, �ɹ�����0��ʧ��
*****************************************************************************/
static int drv_hifireset_cbfun(DRV_RESET_CB_MOMENT_E eparam, int userdata)
{
    int     iresult = 0;

#ifdef _DRV_LLT_
#else

    unsigned int   *hifi_nv_vir_addr = NULL;
    phys_addr_t     hifi_nv_phy_addr = 0;

    if (MDRV_RESET_CB_BEFORE == eparam)
    {
        /* clean hifi nv flag */
        hifi_nv_phy_addr = (phys_addr_t)(HIFI_SYS_MEM_ADDR + sizeof(CARM_HIFI_DYN_ADDR_SHARE_STRU));

        /* nv flag is 4byte */
        hifi_nv_vir_addr = (unsigned int*)ioremap_wc(hifi_nv_phy_addr, 4);

        if (NULL == hifi_nv_vir_addr)
        {
            printk(KERN_INFO"RESET LOG %s: hifi_nv_vir_addr ioremap fail.\n", __FUNCTION__);
        }
        else
        {
            (*hifi_nv_vir_addr) = 0;

            printk(KERN_INFO"RESET LOG %s: hifi_nv_phy_addr  = 0x%x, hifi_nv_vir_addr = 0x%p, (*hifi_nv_vir_addr) = 0x%x\n",
                   __FUNCTION__, (unsigned int )hifi_nv_phy_addr, hifi_nv_vir_addr, (*hifi_nv_vir_addr));

            iounmap(hifi_nv_vir_addr);
        }

        printk(KERN_INFO"RESET LOG: reset mediaserver task! before\n");

        sochifi_watchdog_send_event();

        printk(KERN_INFO"RESET LOG: reset mediaserver task! after\n");
    }
    else
    {
    }

    printk(KERN_INFO"RESET LOG: HIFI cb fun %d run ok(%d)\n", eparam, iresult);

#endif

    return iresult;

}

/*caixi c 10*/
/*****************************************************************************
 �� �� ��  : reset_no_ok_savelog
 ��������  : �ڵ��ûص�����ʱ����ص���������ʧ�ܣ����¼��ģ�����֣�����ֵ
 �������  : char *pname,���ע��ص�����ʱע������֣�
             int iresult,�ص������ķ���ֵ��
             ereset_module emodule, ��λ��ģ��,ccore or hifi
 �������  : ��
 �� �� ֵ  : int
        0, �ɹ�����0��ʧ��
*****************************************************************************/
int reset_no_ok_savelog(char *pname, int iresult, DRV_RESET_CB_MOMENT_E eparam, ereset_module emodule)
{
#ifdef PRINK_TO_FILE    /*���ʵ����printk��ӡ��Ϣ�����ļ����ܣ�����Ҫ�ú�������*/
    return BSP_RESET_OK;
#else

    int     ilen = 0;
    char    *psavelog = NULL;
    char    *ptime = (MDRV_RESET_CB_BEFORE == eparam?"before":"after");

    if (NULL == pname)
    {
        printk(KERN_ERR "[%s ]name is NULL, in savelog fun\n", __FUNCTION__);
        return BSP_RESET_ERROR;
    }

    psavelog = (char*)kmalloc(BSP_RESET_LOG_INFO_ITEM_LEN, GFP_KERNEL);
    if (NULL == psavelog)
    {
        printk(KERN_ERR "%s: fail to malloc, in savelog fun\n", __FUNCTION__);
        return BSP_RESET_ERROR;
    }
    hisi_io_memset((void*)psavelog, 0, BSP_RESET_LOG_INFO_ITEM_LEN);
    switch (emodule)
    {
    case BSP_RESET_MODULE_CCORE:
        sprintf(psavelog, "%s ccore reset, %s fail, return %d\n",ptime, pname, iresult);
        break;
    case BSP_RESET_MODULE_HIFI:
        sprintf(psavelog, "%s hifi reset, %s fail, return %d\n",ptime, pname, iresult);
        break;
    default:
        sprintf(psavelog, "valid module, %s fail, return %d\n",pname, iresult);
        printk(KERN_ERR "%s: module id %d invalid!!, in savelog fun\n", __FUNCTION__, emodule);
        break;

    }
    reset_for_savelog(psavelog);
    kfree(psavelog);
    psavelog = NULL;

    return BSP_RESET_OK;
#endif /* PRINK_TO_FILE */
}
/*****************************************************************************
 �� �� ��  : reset_for_savelog
 ��������  : ����log
 �������  : char *pstr,log����
 �������  : ��
 �� �� ֵ  : int
        0, �ɹ�����0��ʧ��
*****************************************************************************/
int reset_for_savelog(char *pstr)
{
#ifdef PRINK_TO_FILE    /*���ʵ����printk��ӡ��Ϣ�����ļ����ܣ�����Ҫ�ú�������*/
    return BSP_RESET_OK;
#else

#ifdef _DRV_LLT_
#else
    struct file *fd = NULL;
    mm_segment_t fs = 0;
    int iwrite = 0, ilen = 0;

    if (NULL == pstr)
    {
        printk(KERN_ERR "%s: pstr is NULL\n", __FUNCTION__);
        return BSP_RESET_ERROR;
    }

    fd = filp_open(BSP_RESET_LOG_FILE, O_RDWR | O_CREAT | O_APPEND, 0666);
    if (IS_ERR(fd))
    {
        printk(KERN_ERR "%s: file can not open\n", __FUNCTION__);
        return BSP_RESET_ERROR;
    }

    fs = get_fs();
    set_fs(KERNEL_DS);

    ilen = strlen(pstr);
    iwrite = vfs_write(fd, (const char __user *)pstr, ilen, &(fd->f_pos));
    if (iwrite < 1)
    {
        printk(KERN_ERR "%s: can not write all %d/%d\n", __FUNCTION__, iwrite, ilen);
    }
    set_fs(fs);

    printk(KERN_INFO "%s: iwrite %d/%d\n", __FUNCTION__, iwrite, ilen);

    filp_close(fd, NULL);

#endif

    return BSP_RESET_OK;

#endif /* PRINK_TO_FILE */
}

/*****************************************************************************
 �� �� ��  : reset_info_show
 ��������  : ��ʾ��ά�ɲ���Ϣ
 �������  :
 �������  : ��
 �� �� ֵ  : ��
*****************************************************************************/
void reset_info_show_hifi(void)
{
    sreset_mgr_LLI  *phead = g_pmgr_hifireset_data;

    while (NULL != phead)
    {
        printk(KERN_INFO "%s: hifi reset: name:%s cbfun:0x%p data:%d priolevel:%d\n", __FUNCTION__, phead->cbfuninfo.name,
            (void *)phead->cbfuninfo.cbfun, phead->cbfuninfo.userdata, phead->cbfuninfo.priolevel);
        phead = phead->pnext;
    }
}



#ifdef BSP_C_HIFI_RESET_ALONE_TESET_VALID
extern int simulate_irq_hifi_reset(void);
/*caixi a*/
void test_clean_mgr_hifi_link(void)
{
    sreset_mgr_LLI  *phead = g_pmgr_hifireset_data;
    sreset_mgr_LLI  *ptail = g_pmgr_hifireset_data;

    while (NULL != phead)
    {
        ptail = phead->pnext;
        kfree(phead);
        phead = ptail;
    }
    g_pmgr_hifireset_data = NULL;
}
#endif

#ifdef BSP_C_HIFI_RESET_ALONE_FEATURE
static int __init reset_sub_mgr_init_hifi(void)
{
    struct task_struct    *pHifiTask = NULL;
    int     iret = BSP_RESET_OK;

    /*Ĭ��HIFIʹ��*/
    reset_set_cpu_status(0, RESET_CPU_HIFI_STATUS_OFF);



    /*������Ҫ���ź���*/
    printk(KERN_INFO "%s: enter\n", __FUNCTION__);
    hisi_io_memset(&g_reset_assistant_hifi, 0, sizeof(g_reset_assistant_hifi));
    sema_init(&(g_reset_assistant_hifi.sem_wait_hifireset), SEM_EMPTY);
    sema_init(&(g_reset_assistant_hifi.sem_wait_mcu_msg_hifireset), SEM_EMPTY);

    /*����hifi��λ�����߳�*/
    pHifiTask = kthread_run(hifireset_task,  NULL, "hifireset_task");
    printk(KERN_INFO "%s: create hifireset_task, return %p\n", __FUNCTION__, pHifiTask);

    ccorereset_enable_wdt_irq();


    /*ע��HIFI��λ�ص�����*//*hifi��λ������ע��*/
    hifireset_regcbfunc("CODEC", drv_hifireset_cbfun, 0, BSP_DRV_CBFUN_PRIOLEVEL);

    iret = ipc_msg_req_callback(OBJ_HIFI, CMD_NOTIFY, mailbox_recfun_mcu_hifireset);
    printk(KERN_INFO"RESET LOG: LEAVE reset_sub_mgr_init0! iret = %d\n", iret);

    return BSP_RESET_OK;
}

extern void hifi_freeze_give_semaphone(void);
extern int simulate_irq_mcuwdt_reset(void);
/*****************************************************************************
 �� �� ��  : reset_only_for_test
 ��������  : �ú���ֻ���ڲ���!!
 �������  : int iparam, ����case:
             0,����modem ����λ
             1,����modem ����쳣��λ
             2,����modem ������λ
             3,����hifi��λ
             4,����mcu����λ
             5,���Ե�����ccore��λʱ�����Ĵ�����ipf,icc,fileagent,cshell��Ӧ�����Ƿ���ȷ
 �������  : ��
 �� �� ֵ  : int
        0, �ɹ�����0��ʧ��
*****************************************************************************/
void reset_only_for_test_hifi(int iparam)
{
    //int     iresult = 0;
#ifdef _DRV_LLT_
#else
    switch (iparam)
    {
    case 3:
        up(&(g_reset_assistant_hifi.sem_wait_hifireset));
		up(&(g_reset_assistant_hifi.sem_wait_mcu_msg_hifireset));
        hifi_freeze_give_semaphone();
        break;
    case 4:
        simulate_irq_mcuwdt_reset();
        break;
    case 6:
       reset_no_ok_savelog("drv", -2, 0, BSP_RESET_MODULE_HIFI);
       do_reset_system(RESET_TYPE_FOR_TEST);
       break;
    case 10:
        test_clean_mgr_hifi_link();
        break;
    case 12:
        hifireset_runcbfun(MDRV_RESET_CB_BEFORE);
        hifireset_runcbfun(MDRV_RESET_CB_AFTER);

        break;
    case 16:
        up(&(g_reset_assistant_hifi.sem_wait_hifireset));
        break;
    case 17:
        reset_no_ok_savelog("drv", -2, 0, BSP_RESET_MODULE_HIFI);
        break;
    case 18:
        break;
    default:
        break;
    }
#endif
}
#endif
subsys_initcall(reset_sub_mgr_init_hifi);


#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif
