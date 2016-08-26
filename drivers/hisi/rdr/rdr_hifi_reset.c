#include <linux/kernel.h>
#include <linux/types.h>
#include <linux/module.h>
#include <linux/init.h>
#include <linux/platform_device.h>
#include <linux/clk.h>
#include <linux/device.h>
#include <linux/io.h>
#include <linux/kmod.h>
#include <linux/slab.h>
#include <linux/proc_fs.h>
#include <linux/sysctl.h>
#include <linux/uaccess.h>
#include <linux/delay.h>
#include <linux/huawei/rdr.h>
#include <product_config.h>
#include <drv_reset.h>
#include <rdr_internal.h>

#ifdef CONFIG_HIFI_RESET
#include <bsp_reset.h>
#include <linux/hisi/rdr_hifi_reset.h>
#endif

#ifndef HIFI_SEC_DDR_MAX_NUM
#define HIFI_SEC_DDR_MAX_NUM		(32)
#endif
#define HIFI_SEC_HEAD_BACKUP		(0x37C75000)
#define HIFI_SEC_HEAD_SIZE		(1024)
#define HIFI_BSS_SEC				(2)

struct drv_hifi_sec_info {
	unsigned int    type;
	unsigned int    src_addr;
	unsigned int    des_addr;
	unsigned int    size;
};

struct drv_hifi_sec_ddr_head {
	unsigned int sections_num;
	struct drv_hifi_sec_info sections[HIFI_SEC_DDR_MAX_NUM];
};

int reset_hifi_sec(void)
{
	struct drv_hifi_sec_ddr_head *head;
	void *sec_head = NULL;
	void *sec_addr = NULL;
	int i;
	int ret = 0;

	sec_head = ioremap(HIFI_SEC_HEAD_BACKUP, HIFI_SEC_HEAD_SIZE);
	if (NULL == sec_head) {
		ret = -1;
		goto error;
	}
	head = (struct drv_hifi_sec_ddr_head *)sec_head;

	pr_debug("sections_num = 0x%x\n", head->sections_num);

	for (i = 0; i < head->sections_num; i++) {
		if (head->sections[i].type == HIFI_BSS_SEC) {
			pr_debug("sec_id = %d, type = 0x%x, src_addr = 0x%x, des_addr = 0x%x, size = %d\n",
					i,
					head->sections[i].type,
					head->sections[i].src_addr,
					head->sections[i].des_addr,
					head->sections[i].size);
			sec_addr = ioremap(head->sections[i].des_addr,
							head->sections[i].size);
			if (NULL == sec_addr) {
				ret = -1;
				goto error1;
			}
			memset(sec_addr, 0x0, head->sections[i].size);
			iounmap(sec_addr);
		}
	}

error1:
	iounmap(sec_head);
error:
	return ret;
}


#ifdef CONFIG_HIFI_RESET

/*Link used for hifi reset*/
sreset_mgr_LLI  *g_pmgr_hifireset_data = NULL;

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
		printk(KERN_ERR "%s: fail in ccore reset regcb,fail, name 0x%s, cbfun 0x%p, prio %d\n", __FUNCTION__, \
						pname, pcbfun, priolevel);
		return NULL;
	}

	/*����ռ�*/
	pmgr_unit = (sreset_mgr_LLI*)kmalloc(sizeof(sreset_mgr_LLI), GFP_KERNEL);
	if (NULL != pmgr_unit)
	{
		memset((void*)pmgr_unit, 0, (sizeof(sreset_mgr_LLI)));
		/*��ֵ*/
		strncpy(pmgr_unit->cbfuninfo.name, pname, 9);
		pmgr_unit->cbfuninfo.priolevel = priolevel;
		pmgr_unit->cbfuninfo.userdata = userdata;
		pmgr_unit->cbfuninfo.cbfun = pcbfun;
	}
	else
	{
		printk(KERN_ERR "%s: pmgr_unit malloc fail!\n", __FUNCTION__);
		return NULL;
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
	return 0;
}

/*****************************************************************************
 �� �� ��  :  hifireset_doruncbfun
 ��������  : HIFI��λǰ����ûص������ĺ���������Ȧ���Ӷȳ��꣬���������װ����
 �������  : DRV_RESET_CALLCBFUN_MOMENT eparam, 0 ��ʾHIFI��λǰ�������ʾ��λ��

 �������  : ��
 �� �� ֵ  : int
        0, �ɹ�����0��ʧ��
*****************************************************************************/
int hifireset_doruncbfun (const char *pname, DRV_RESET_CALLCBFUN_MOMENT eparam)
{
	int  iresult = BSP_RESET_OK;

	sreset_mgr_LLI  *phead = g_pmgr_hifireset_data;
	BUG_ON(NULL == pname);
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
					printk(KERN_ERR "%s: fail to run cbfun of %s, at %d return %d\n", __FUNCTION__, phead->cbfuninfo.name, eparam, iresult);
					break;
				}
				printk(KERN_INFO "%s: run %s cb function 0x%p\n", __FUNCTION__, phead->cbfuninfo.name,phead->cbfuninfo.cbfun);
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

	if (BSP_RESET_OK != iresult)
	{
		if (NULL != phead)
		{
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
 �������  : DRV_RESET_CALLCBFUN_MOMENT eparam, 0 ��ʾHIFI��λǰ�������ʾ��λ��

 �������  : ��
 �� �� ֵ  : int
        0, �ɹ�����0��ʧ��
*****************************************************************************/
int hifireset_runcbfun (DRV_RESET_CALLCBFUN_MOMENT eparam)
{
	int  iresult = 0;

	if (DRV_RESET_CALLCBFUN_RESET_BEFORE == eparam)
	{
		/*�����ص�������������NAS�Ļص�*/
		iresult = hifireset_doruncbfun("NAS_AT", eparam);
		if (BSP_RESET_OK != iresult)
		{
			/*�������ʧ�ܣ���¼���齨name, ����ֵ�����浽�ļ�*/
			goto return_error;
		}
	}
	else
	{
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
#endif

