
#include <linux/module.h>
#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/sched.h>
#include <linux/slab.h>
#include <linux/delay.h>
#include <asm/io.h>
/*#include <asm/system.h>*/
#include <linux/interrupt.h>
#include <linux/string.h>
#include <linux/platform_device.h>
#include <linux/device.h>
#include <linux/hisi/hi6xxx-iomap.h>                   /* For IO_ADDRESS access */
#include "soc_baseaddr_interface.h"
#include "soc_peri_sctrl_interface.h"
#include "bsp_mem_drv.h"
#include "ipf_driver.h"
/*#include "drv_timer.h"*/

/*****************************************************************************
  ��������
*****************************************************************************/
irqreturn_t  IPF_IntHandler (int irq, void* dev);
void IPF_Int_Connect(void);
int IPF_FilterList_Init(void);
int IPF_WaitResume(void);
static int IPF_Probe(struct platform_device *pdev);
static int IPF_Remove(struct platform_device *pdev);
static int IPF_Suspend(struct platform_device *pdev,pm_message_t state);
static int IPF_Resume(struct platform_device *pdev);

/*****************************************************************************
  �궨��
*****************************************************************************/
#define IPF_INIT_CHECK()    \
do {\
    if(!g_stIpfCtx.isInit) \
    { \
        IPF_PRINT_ERROR("ipf is not init\n"); \
        return BSP_ERR_IPF_NOT_INIT; \
    } \
}while(0)

/*****************************************************************************
  ��������
*****************************************************************************/
IPF_UL_S g_stIpfUl = {0};
IPF_DL_S g_stIpfDl = {0};
IPF_CONTEXT_S g_stIpfCtx = {0};

unsigned long ifp_ulbd_mem_addr = 0;
unsigned long ipf_regs_base_addr = 0;

#ifdef __BSP_IPF_DEBUG__
IPF_DEBUG_INFO_S* g_stIPFDebugInfo = (IPF_DEBUG_INFO_S*)NULL;
unsigned int g_32IpfDebugReg[IPF_REG_NUM] = {0};
#endif
static IPF_FORRESET_CONTROL_E g_forCcore_reset_Up_flag = 0;
static struct platform_driver ipf_pfdrv = {
	.probe		= IPF_Probe,
	.remove		= IPF_Remove,
    .suspend    = IPF_Suspend,
    .resume     = IPF_Resume,
	.driver		= {
		.name	= "balong_ipf",
		.owner	= THIS_MODULE,
		},
};
static struct platform_device ipf_pfdev = {
	.name		  = "balong_ipf",
	.id                	  =0,
};
static unsigned long ipf_peri_ctrl_base = 0;

irqreturn_t  IPF_IntHandler (int irq, void* dev)
{
    unsigned int u32IpfAdqInt = 0;
    SOC_IPF_INT1_UNION unIpfInt;

    unIpfInt.value = 0;
    /* ��ȡ�ж�״̬ */
    IPF_REG_READ(SOC_IPF_INT1_ADDR(IPF_REGBASE_ADR), unIpfInt.value);
    /* ���н���ϱ��ͽ����ʱ�ϱ� */
    if((unIpfInt.reg.dl_rpt_int1) || (unIpfInt.reg.dl_timeout_int1))
    {
        /* д1������н���ͽ����ʱ�ж� */
        IPF_REG_WRITE(SOC_IPF_INT_STATE_ADDR(IPF_REGBASE_ADR), (IPF_DL_RPT_INT | IPF_DL_TIMEOUT_INT));
    #ifdef __BSP_IPF_DEBUG__
        if(unIpfInt.reg.dl_rpt_int1)
        {
            g_stIPFDebugInfo->u32DlResultCnt++;
        }
        if(unIpfInt.reg.dl_timeout_int1)
        {
            g_stIPFDebugInfo->u32DlResultTimeoutCnt++;
        }
    #endif
        /* ����ps�������� */
        if(g_stIpfDl.pFnDlIntCb != NULL)
        {
            (void)g_stIpfDl.pFnDlIntCb();
        }
        else
        {
            IPF_PRINT_ERROR("dl int callback is null\n");
        }
    }

    /* ����ADQ0��ADQ1��ָʾ */
    if((unIpfInt.reg.dl_adq0_epty_int1) || (unIpfInt.reg.dl_adq1_epty_int1))
    {
        /* д1�������ADQ��ADQ1���ж� */
        IPF_REG_WRITE(SOC_IPF_INT_STATE_ADDR(IPF_REGBASE_ADR), (IPF_DL_ADQ0_EMPTY_INT | IPF_DL_ADQ1_EMPTY_INT));
        if(unIpfInt.reg.dl_adq0_epty_int1)
        {
        #ifdef __BSP_IPF_DEBUG__
            g_stIPFDebugInfo->u32DlAdq0Empty++;
        #endif
            u32IpfAdqInt += IPF_EMPTY_ADQ0;
        }
        if(unIpfInt.reg.dl_adq1_epty_int1)
        {
        #ifdef __BSP_IPF_DEBUG__
            g_stIPFDebugInfo->u32DlAdq1Empty++;
        #endif
            u32IpfAdqInt += IPF_EMPTY_ADQ1;
        }
        if(g_stIpfDl.pAdqEmptyDlCb != NULL)
        {
            (void)g_stIpfDl.pAdqEmptyDlCb(u32IpfAdqInt);
        }
        else
        {
            IPF_PRINT_ERROR("dl adq callback is null\n");
        }
    }
    return IRQ_HANDLED;
}
/*****************************************************************************
* �� �� ��  : IPF_Int_Connect
*
* ��������  : ��IPF�жϴ�����(���˶��ṩ)
*
* �������  : void
* �������  : ��
* �� �� ֵ  : ��
*
* �޸ļ�¼  :2011��12��2��   ³��  ����
*****************************************************************************/
void IPF_Int_Connect(void)
{
    if(request_irq(INT_LVL_IPF, (irq_handler_t)IPF_IntHandler, 0, "IPF_APP_IRQ", NULL) != 0)
    {
        IPF_PRINT_ERROR("irequest_irq error\n");
    }
}


int IPF_WaitResume(void)
{
    unsigned int u32Times = 0;
    IPF_RESTORE_STATE_E IPF_Restore_flag = (IPF_RESTORE_STATE_E)0;

    unsigned long ipf_restore_flag_addr = HISI_VA_ADDRESS(MEMORY_RAM_CORESHARE_IPF_FLAG_ADDR);

    IPF_Restore_flag= (IPF_RESTORE_STATE_E)(*(volatile unsigned int*)ipf_restore_flag_addr);

    /* ��ȡIPF״̬��ʶ */
    if(IPF_STATE_RESTORED == IPF_Restore_flag)
    {
        return IPF_SUCCESS;
    }

    /* �ȴ�IPF_Restore_flag����IPF_STATE_RESTORED������2ms��ʱ���� */
    do{
        IPF_Restore_flag = (IPF_RESTORE_STATE_E)(*(volatile unsigned int*)ipf_restore_flag_addr);
        udelay(10);
        u32Times++;
    }while((IPF_STATE_RESTORED != IPF_Restore_flag) && (u32Times < IPF_RESUME_COUNT));

    if(IPF_RESUME_COUNT == u32Times)
    {
        return IPF_ERROR;
    }

    return IPF_SUCCESS;
}


static int IPF_ObligateAdqRpt(IPF_CHANNEL_TYPE_E eChId, IPF_AD_TYPE_E eType, unsigned int *pu32Rpt)
{
    unsigned int u32Index = 0;
    unsigned int u32RptValue = 0;
    IPF_ADQ_INFO_S *pIpfAdqReg = NULL;

    /* ADQ��ָ���״̬�Ĵ����� */
    IPF_ADQ_INFO_S stIpfAdqReg[4] = {{0}};
    pIpfAdqReg = &stIpfAdqReg[0];
    pIpfAdqReg->pu32RptReg = (unsigned int *)(SOC_IPF_CH0_ADQ0_RPTR_ADDR(IPF_REGBASE_ADR));
    pIpfAdqReg = &stIpfAdqReg[1];
    pIpfAdqReg->pu32RptReg = (unsigned int *)(SOC_IPF_CH0_ADQ1_RPTR_ADDR(IPF_REGBASE_ADR));
    pIpfAdqReg = &stIpfAdqReg[2];
    pIpfAdqReg->pu32RptReg = (unsigned int *)(SOC_IPF_CH1_ADQ0_RPTR_ADDR(IPF_REGBASE_ADR));
    pIpfAdqReg = &stIpfAdqReg[3];
    pIpfAdqReg->pu32RptReg = (unsigned int *)(SOC_IPF_CH1_ADQ1_RPTR_ADDR(IPF_REGBASE_ADR));

    /*  ��μ�� */
    if((IPF_CHANNEL_MAX <= eChId) || (IPF_AD_MAX <= eType) || (NULL == pu32Rpt))
    {
        IPF_PRINT_ERROR("parameter is error\n");
        return BSP_ERR_IPF_INVALID_PARA;
    }

    /* ����ͨ��ID��AD���ͻ�ȡ�����Ĵ�������indexֵ */
    switch (eChId) {
        case IPF_CHANNEL_UP:
            u32Index = (IPF_AD_0 == eType) ? 0 : 1;
            break;
        case IPF_CHANNEL_DOWN:
            u32Index = (IPF_AD_0 == eType) ? 2 : 3;
            break;
        default:
            IPF_PRINT_ERROR("parameter is error\n");
            u32Index = 0;
            break;
    }

    /* ��ȡADQ��ָ��Ĵ��� */
    IPF_REG_READ(stIpfAdqReg[u32Index].pu32RptReg, u32RptValue);

    /* ����ADQ��ָ�� */
    *pu32Rpt = u32RptValue;
    return IPF_SUCCESS;
}
static void IPF_Assert(unsigned int u32ErrNo)
{
    /* ��¼IPF���мĴ��������� */
     hisi_io_memcpy((void*)g_32IpfDebugReg, (void*)IPF_REGBASE_ADR, sizeof(g_32IpfDebugReg));

    /* ����λ */
    //BSP_MNTN_SystemError(BSP_MODU_IPF, u32ErrNo, 0, 0, 0);
	while(1)
	{
        __asm__ __volatile__("nop");
	}

    return;
}
/*****************************************************************************
* �� �� ��  : BSP_IPF_GetControlFLagForCcoreReset
*
* ��������  : ���ccore��λʱ�����õ�IPF��־�����ڿ���IPF����
*
* �������  : ��
* �������  : ��
* �� �� ֵ  : 0������1��������

*
* �޸ļ�¼  :2013��4��19��   ¬��ʤ ����
*   1.�޸����� :
*     �޸����� :
*     �޸ļ�¼ :
*****************************************************************************/
static IPF_FORRESET_CONTROL_E IPF_GetControlFLagForCcoreReset(void)
{
    return g_forCcore_reset_Up_flag;
}

/*****************************************************************************
* �� �� ��  : BSP_IPF_SetControlFLagForCcoreReset
*
* ��������  : ccore��λʱ������IPF��־�����ڿ���IPF����
*
* �������  : IPF_FORRESET_CONTROL_E flagvalue,0:����1:����������
* �������  : ��
* �� �� ֵ  : IPF_SUCCESS    ��ʼ���ɹ�
*             IPF_ERROR      ��ʼ��ʧ��
*
* �޸ļ�¼  :2013��4��19��   ¬��ʤ ����
*   1.�޸����� :2013��9��12
*     �޸����� :��ɺ
*     �޸ļ�¼ :�����μ�顢forbidden֮��ȴ�idle
*****************************************************************************/
void BSP_IPF_SetControlFLagForCcoreReset(IPF_FORRESET_CONTROL_E flagvalue)
{
    unsigned int u32UlState = 0;
    unsigned int u32DlState = 0;
    unsigned int u32Cnt = 0;

    /* ��μ�� */
    if(IPF_FORRESET_CONTROL_MAX <= flagvalue)
    {
        IPF_PRINT_ERROR("parameter is error\n");
    }

    /* ���õ�ǰIPF״̬ */
    g_forCcore_reset_Up_flag = flagvalue;

    if(IPF_FORRESET_CONTROL_FORBID == flagvalue)
    {
        /* �ȴ�IPF����idle̬(���ͷ�CPU������ȴ���ʱ),����޷�����idle����ȴ�ʱ���ȷ��IPF���ٴ�������Ϊֹ */
        do{
            IPF_REG_READ(SOC_IPF_CH0_STATE_ADDR(IPF_REGBASE_ADR), u32UlState);
            IPF_REG_READ(SOC_IPF_CH1_STATE_ADDR(IPF_REGBASE_ADR), u32DlState);
            msleep(10);
            u32Cnt++;
        }while(((u32UlState != IPF_CH_IDLE) || (u32DlState != IPF_CH_IDLE)) && (u32Cnt <= IPF_IDLE_TIMEOUT_NUM));
        if(u32UlState != IPF_CH_IDLE)
        {
            IPF_PRINT_ERROR("ul is not idle\n");
        }
        if(u32DlState != IPF_CH_IDLE)
        {
            IPF_PRINT_ERROR("ul is not idle\n");
        }
    }
}
EXPORT_SYMBOL(BSP_IPF_SetControlFLagForCcoreReset);
/*****************************************************************************
* �� �� ��  : BSP_IPF_ConfigTimeout
*
* ��������  : ����ʹ�ã����ó�ʱʱ��ӿ�
*
* �������  : unsigned int u32Timeout ���õĳ�ʱʱ��
* �������  : ��
* �� �� ֵ  : IPF_SUCCESS                   �ɹ�
*             BSP_ERR_IPF_INVALID_PARA      ������Ч
*
* ˵��      : 1����256��ʱ������
*
* �޸ļ�¼   : 2011��11��30��   ³��  ����
*****************************************************************************/
int BSP_IPF_ConfigTimeout(unsigned int u32Timeout)
{
    SOC_IPF_TIME_OUT_UNION unTimeout;

    unTimeout.value = 0;
    if((u32Timeout == 0) || (u32Timeout > 0xFFFF))
    {
        IPF_PRINT_ERROR("parameter is error\n");
        return BSP_ERR_IPF_INVALID_PARA;
    }
    unTimeout.reg.time_out_cfg = u32Timeout;
    unTimeout.reg.time_out_valid = 1;

    IPF_REG_WRITE(SOC_IPF_TIME_OUT_ADDR(IPF_REGBASE_ADR), unTimeout.value);

    return IPF_SUCCESS;
}
EXPORT_SYMBOL(BSP_IPF_ConfigTimeout);


int BSP_IPF_ConfigUpFilter(unsigned int u32Num, IPF_CONFIG_ULPARAM_S* pstUlPara)
{
    unsigned int i = 0;
    unsigned int u32BdqWptr = 0;
    IPF_CONFIG_ULPARAM_S* pstUlParam = pstUlPara;
#ifdef __BSP_IPF_DEBUG__
    SOC_IPF_CH0_ADQ_CTRL_UNION unCh0AdqCtrl;
#endif
    /*Modify_for_c_reset, l00212112,20130511, starts*/
    /*���C�˸�λ���򷵻�*/
    if (IPF_FORRESET_CONTROL_FORBID == IPF_GetControlFLagForCcoreReset())
    {
        IPF_PRINT_ERROR("ccore is resetting\n");
        return BSP_ERR_IPF_CCORE_RESETTING;
    }
    /*Modify_for_c_reset, l00212112,20130511, ends*/
    /* ������� */
    if((NULL == pstUlPara))
    {
        IPF_PRINT_ERROR("point is null\n");
        return BSP_ERR_IPF_INVALID_PARA;
    }

    /* ���ģ���Ƿ��ʼ�� */
    IPF_INIT_CHECK();

    if(u32Num > *(g_stIpfUl.pu32IdleBd))
    {
    #ifdef __BSP_IPF_DEBUG__
        g_stIPFDebugInfo->u32UlBdNotEnough++;
    #endif
        return IPF_ERROR;
    }

#ifdef __BSP_IPF_DEBUG__
    IPF_REG_READ(SOC_IPF_CH0_ADQ_CTRL_ADDR(IPF_REGBASE_ADR), unCh0AdqCtrl.value);
    if(unCh0AdqCtrl.reg.ul_adq_en != IPF_BOTH_ADQ_EN)
    {
        IPF_PRINT_ERROR("adq is not supported\n");
        return IPF_ERROR;
    }

    g_stIPFDebugInfo->u32UlBdNum += u32Num;
#endif

    /* ȷ��IPF�ѻָ� */
    if(IPF_ERROR == IPF_WaitResume())
    {
        IPF_PRINT_ERROR("wait for resume timeout\n");
        g_stIPFDebugInfo->u32UlResumeTimeoutCnt++;
        return  BSP_ERR_IPF_RESUME_TIMEOUT;
    }

    /* ����BDдָ��,��u32BdqWptr��Ϊ��ʱдָ��ʹ�� */
    IPF_REG_READ(SOC_IPF_CH0_BDQ_WPTR_ADDR(IPF_REGBASE_ADR), u32BdqWptr);

    for(i = 0; i < u32Num; i++)
    {
        if(0 == pstUlParam[i].u32Data)
        {
            IPF_PRINT_ERROR("ulbd inptr is null\n");
            return BSP_ERR_IPF_INVALID_PARA;
        }
        if(0 == pstUlParam[i].u16Len)
        {
            IPF_PRINT_ERROR("ulbd len is zero\n");
            g_stIPFDebugInfo->u32UlBdSizeErr = 1;
            return BSP_ERR_IPF_INVALID_PARA;
        }

        g_stIpfUl.pstIpfBDQ[u32BdqWptr].u16Attribute = pstUlParam[i].u16Attribute;
        g_stIpfUl.pstIpfBDQ[u32BdqWptr].u32InPtr = pstUlParam[i].u32Data;
        g_stIpfUl.pstIpfBDQ[u32BdqWptr].u16PktLen = pstUlParam[i].u16Len;
        g_stIpfUl.pstIpfBDQ[u32BdqWptr].u16UsrField1 = pstUlParam[i].u16UsrField1;
        g_stIpfUl.pstIpfBDQ[u32BdqWptr].u32UsrField2= pstUlParam[i].u32UsrField2;
        g_stIpfUl.pstIpfBDQ[u32BdqWptr].u32UsrField3 = pstUlParam[i].u32UsrField3;
        u32BdqWptr = ((u32BdqWptr + 1) < IPF_ULBD_DESC_SIZE)? (u32BdqWptr + 1) : 0;
    }

    /* ����BDдָ��*/
    IPF_REG_WRITE(SOC_IPF_CH0_BDQ_WPTR_ADDR(IPF_REGBASE_ADR), u32BdqWptr);

    return IPF_SUCCESS;
}
EXPORT_SYMBOL(BSP_IPF_ConfigUpFilter);


unsigned int BSP_IPF_GetUlDescNum(void)
{
    unsigned int u32UlAd0Num = 0;
    unsigned int u32UlAd1Num = 0;
    unsigned int u32UlBdNum = 0;
    unsigned int u32UlAdwptr = 0;
    unsigned int u32UlAdrptr = 0;
    unsigned int u32UlBdDepth = 0;
    SOC_IPF_CH0_DQ_DEPTH_UNION unDQDepth;

    /* ����BD��� */
    unDQDepth.value = 0;
    IPF_REG_READ(SOC_IPF_CH0_DQ_DEPTH_ADDR(IPF_REGBASE_ADR), unDQDepth.value);
    u32UlBdDepth = unDQDepth.reg.ul_bdq_depth;

    /* �������AD0���� */
    IPF_REG_READ(SOC_IPF_CH0_ADQ0_WPTR_ADDR(IPF_REGBASE_ADR), u32UlAdwptr);
    IPF_REG_READ(SOC_IPF_CH0_ADQ0_RPTR_ADDR(IPF_REGBASE_ADR), u32UlAdrptr);

    /*дָ����ǰ������˳��*/
    if (u32UlAdwptr >= u32UlAdrptr)
    {
        u32UlAd0Num = u32UlAdwptr - u32UlAdrptr;
    }
    else
    {
        u32UlAd0Num = IPF_ULAD0_DESC_SIZE - (u32UlAdrptr -u32UlAdwptr);
    }
    if(u32UlAd0Num > u32UlBdDepth)
    {
        u32UlAd0Num -= u32UlBdDepth;
    }
    else
    {
        u32UlAd0Num = 0;
        g_stIPFDebugInfo->u32UlAd0NotEnough++;
    }

    /* �������AD1���� */
    IPF_REG_READ(SOC_IPF_CH0_ADQ1_WPTR_ADDR(IPF_REGBASE_ADR), u32UlAdwptr);
    IPF_REG_READ(SOC_IPF_CH0_ADQ1_RPTR_ADDR(IPF_REGBASE_ADR), u32UlAdrptr);

    if (u32UlAdwptr >= u32UlAdrptr)/*дָ����ǰ������˳��*/
    {
        u32UlAd1Num = u32UlAdwptr - u32UlAdrptr;
    }
    else
    {
        u32UlAd1Num =  IPF_ULAD1_DESC_SIZE - (u32UlAdrptr -u32UlAdwptr);
    }

    if(u32UlAd1Num > u32UlBdDepth)
    {
        u32UlAd1Num -= u32UlBdDepth;
    }
    else
    {
        u32UlAd1Num = 0;
        g_stIPFDebugInfo->u32UlAd1NotEnough++;
    }

    u32UlBdNum = BSP_IPF_GetUlBDNum();
    if(0 == u32UlBdNum)
    {
        g_stIPFDebugInfo->u32UlBdNotEnough++;
    }

    if(u32UlBdNum > u32UlAd0Num)
    {
        u32UlBdNum = u32UlAd0Num;
    }

    if(u32UlBdNum > u32UlAd1Num)
    {
        u32UlBdNum = u32UlAd1Num;
    }

    return u32UlBdNum;
}
EXPORT_SYMBOL(BSP_IPF_GetUlDescNum);

/*****************************************************************************
* �� �� ��  : BSP_IPF_GetUlBDNum
*
* ��������  : �ýӿ����ڻ�ȡ���п���BD ��Ŀ
*
* �������  : ��
*
* �������  : ��
* �� �� ֵ  : ����BD��Ŀ
*
* �޸ļ�¼  :2011��11��30��   ³��  ����
*****************************************************************************/
unsigned int BSP_IPF_GetUlBDNum(void)
{
    SOC_IPF_CH0_DQ_DEPTH_UNION unUlBdDepth;
    unsigned int u32IdleBd = 0;

    unUlBdDepth.value = 0;
    /* �������BD���� */
    IPF_REG_READ(SOC_IPF_CH0_DQ_DEPTH_ADDR(IPF_REGBASE_ADR), unUlBdDepth.value);
    u32IdleBd = IPF_ULBD_DESC_SIZE - unUlBdDepth.reg.ul_bdq_depth;
    *(g_stIpfUl.pu32IdleBd) = u32IdleBd;

    return u32IdleBd;
}
EXPORT_SYMBOL(BSP_IPF_GetUlBDNum);

/*****************************************************************************
* �� �� ��  : BSP_IPF_UlStateIdle
*
* ��������  : �ýӿ����ڻ�ȡ����ͨ���Ƿ�Ϊ����
*
* �������  : ��
*
* �������  : ��
* �� �� ֵ  : IPF_SUCCESS  ��ʾ���п��У������л�ģʽ
*             IPF_ERROR      ��ʾ���зǿ��У��������л�ģʽ
*
* �޸ļ�¼  :2011��12��9��   ³��  ����
*****************************************************************************/
int BSP_IPF_UlStateIdle(void)
{
    unsigned int u32UlState = 0;

    IPF_REG_READ(SOC_IPF_CH0_STATE_ADDR(IPF_REGBASE_ADR), u32UlState);

    if(u32UlState != IPF_CH_IDLE)
    {
        return IPF_ERROR;
    }

    return IPF_SUCCESS;
}
EXPORT_SYMBOL(BSP_IPF_UlStateIdle);

/*****************************************************************************
* �� �� ��  : BSP_IPF_PktLen
*
* ��������  : �ýӿ��������ù�������������С����
*
* �������  : unsigned int MaxLen   ������
*             unsigned int MinLen   ��С����
*
* �������  : ��
* �� �� ֵ  : IPF_SUCCESS                �ɹ�
*             BSP_ERR_IPF_INVALID_PARA   ��������(����������С����С)
*
* �޸ļ�¼  :2011��2��17��   ³��  ����
*****************************************************************************/
int BSP_IPF_SetPktLen(unsigned int u32MaxLen, unsigned int u32MinLen)
{
    SOC_IPF_PKT_LEN_UNION unPktLen;

    unPktLen.value = 0;
    /* ������� */
    if(u32MaxLen < u32MinLen)
    {
        IPF_PRINT_ERROR("parameter is error\n");
        return BSP_ERR_IPF_INVALID_PARA;
    }

    unPktLen.reg.max_pkt_len = u32MaxLen;
    unPktLen.reg.min_pkt_len = u32MinLen;

    IPF_REG_WRITE(SOC_IPF_PKT_LEN_ADDR(IPF_REGBASE_ADR), unPktLen.value);
    return IPF_SUCCESS;
}
EXPORT_SYMBOL(BSP_IPF_SetPktLen);

/*****************************************************************************
* �� �� ��  : BSP_IPF_GetStat
*
* ��������  : �ýӿڻ�ȡͳ�Ƽ�������ֵ
*
* �������  : IPF_FILTER_STAT_S *pstFilterStat ͳ�Ƽ����ṹ��ָ��
*
*
* �������  : ��
* �� �� ֵ  : IPF_SUCCESS                �ɹ�
*             BSP_ERR_IPF_INVALID_PARA   ��������
*
* �޸ļ�¼  : 2011��2��17��   ³��  ����
*****************************************************************************/
int BSP_IPF_GetStat(IPF_FILTER_STAT_S *pstFilterStat)
{
    /* ��׮ */
    return IPF_SUCCESS;
}
EXPORT_SYMBOL(BSP_IPF_GetStat);
void BSP_IPF_DlRegReInit(void)
{
    /*��׮*/
}
EXPORT_SYMBOL(BSP_IPF_DlRegReInit);

/*****************************************************************************
* �� �� ��  : BSP_IPF_RegisterWakeupDlCb
*
* ��������  : �ýӿ�����ע������PS����ص�����
*
* �������  : BSP_IPF_WakeupDlkCb *pFnWakeupDl
*
* �������  : ��
* �� �� ֵ  : ��
*
* �޸ļ�¼  :2011��11��30��   ³��  ����
*****************************************************************************/
int BSP_IPF_RegisterWakeupDlCb(BSP_IPF_WakeupDlCb pFnWakeupDl)
{
    /* ������� */
    if(NULL == pFnWakeupDl)
    {
        IPF_PRINT_ERROR("parameter is error\n");
        return BSP_ERR_IPF_INVALID_PARA;
    }
    g_stIpfDl.pFnDlIntCb = pFnWakeupDl;
    return IPF_SUCCESS;
}
EXPORT_SYMBOL(BSP_IPF_RegisterWakeupDlCb);
int BSP_IPF_RegisterAdqEmptyDlCb(BSP_IPF_AdqEmptyDlCb pAdqEmptyDl)
{
    /* ������� */
    if(NULL == pAdqEmptyDl)
    {
        IPF_PRINT_ERROR("parameter is error\n");
        return BSP_ERR_IPF_INVALID_PARA;
    }
    g_stIpfDl.pAdqEmptyDlCb = pAdqEmptyDl;
    return IPF_SUCCESS;
}
EXPORT_SYMBOL(BSP_IPF_RegisterAdqEmptyDlCb);
unsigned int BSP_IPF_GetUlRdNum(void)
{
    SOC_IPF_CH0_DQ_DEPTH_UNION unRdqDepth;

    /* ��ȡ����RD��ȼĴ��� */
    unRdqDepth.value = 0;
    IPF_REG_READ(SOC_IPF_CH0_DQ_DEPTH_ADDR(IPF_REGBASE_ADR), unRdqDepth.value);

    return unRdqDepth.reg.ul_rdq_depth;
}
EXPORT_SYMBOL(BSP_IPF_GetUlRdNum);
unsigned int BSP_IPF_GetDlRdNum(void)
{
    SOC_IPF_CH1_DQ_DEPTH_UNION unRdqDepth;

    /* ��ȡ����RD��ȼĴ��� */
    unRdqDepth.value = 0;
    IPF_REG_READ(SOC_IPF_CH1_DQ_DEPTH_ADDR(IPF_REGBASE_ADR), unRdqDepth.value);

    return unRdqDepth.reg.dl_rdq_depth;
}
EXPORT_SYMBOL(BSP_IPF_GetDlRdNum);
void BSP_IPF_GetDlRd(unsigned int* pu32Num, IPF_RD_DESC_S *pstRd)
{
    SOC_IPF_CH1_DQ_DEPTH_UNION unDqDepth;
    unsigned int u32CdqRptr = 0;
    unsigned int u32RdqRptr = 0;
    unsigned int u32RdqDepth = 0;
    unsigned int u32Num = 0;
    unsigned int i = 0;

    if((NULL == pu32Num) || (NULL == pstRd))
    {
        IPF_PRINT_ERROR("parameter is error\n");
        return;
    }

    /* ��ȡRD��� */
    unDqDepth.value = 0;
    IPF_REG_READ(SOC_IPF_CH1_DQ_DEPTH_ADDR(IPF_REGBASE_ADR), unDqDepth.value);
    u32RdqDepth = unDqDepth.reg.dl_rdq_depth;

    u32Num = (u32RdqDepth < *pu32Num)?u32RdqDepth:*pu32Num;
    if(u32Num > 0)
    {
        g_stIPFDebugInfo->u32DlRdNum += u32Num;
        for(i = 0; i < u32Num; i++)
        {
            /* ��ȡRD��ָ�� */
            IPF_REG_READ(SOC_IPF_CH1_RDQ_RPTR_ADDR(IPF_REGBASE_ADR), u32RdqRptr);
            if(u32RdqRptr >= IPF_DLRD_DESC_SIZE)
            {
                IPF_PRINT_ERROR("u32RdqRptr = %d\n", u32RdqRptr);
            }

            /* ��ȡRD */
            pstRd[i].u16Attribute = g_stIpfDl.pstIpfRDQ[u32RdqRptr].u16Attribute;
            pstRd[i].u16PktLen = g_stIpfDl.pstIpfRDQ[u32RdqRptr].u16PktLen;
            pstRd[i].u16Result = g_stIpfDl.pstIpfRDQ[u32RdqRptr].u16Result;
            pstRd[i].u32InPtr = g_stIpfDl.pstIpfRDQ[u32RdqRptr].u32InPtr;
            pstRd[i].u32OutPtr = g_stIpfDl.pstIpfRDQ[u32RdqRptr].u32OutPtr;
            if((0 == pstRd[i].u32OutPtr)/* || (0x55555555 == pstRd[i].u32OutPtr) || (0xAAAAAAAA == pstRd[i].u32OutPtr)*/)
            {
                IPF_PRINT_ERROR("invalid rd of dl\n");
                IPF_Assert(BSP_ERR_IPF_INVALID_DLRD);
            }
            pstRd[i].u16UsrField1 = g_stIpfDl.pstIpfRDQ[u32RdqRptr].u16UsrField1;
            pstRd[i].u32UsrField2 = g_stIpfDl.pstIpfRDQ[u32RdqRptr].u32UsrField2;
            pstRd[i].u32UsrField3 = g_stIpfDl.pstIpfRDQ[u32RdqRptr].u32UsrField3;

            u32RdqRptr = ((u32RdqRptr+1) < IPF_DLRD_DESC_SIZE)?(u32RdqRptr+1):0;

            /* ����RD��ָ�� */
            IPF_REG_WRITE(SOC_IPF_CH1_RDQ_RPTR_ADDR(IPF_REGBASE_ADR), u32RdqRptr);
            /* ����CD��ָ�� */
            u32CdqRptr = (unsigned int)((char *)(HISI_VA_ADDRESS(pstRd[i].u32InPtr)) - (char *)g_stIpfDl.pstIpfCDQ)/sizeof(IPF_CD_DESC_S);
            while(g_stIpfDl.pstIpfCDQ[u32CdqRptr].u16Attribute != 1)
            {
                /* ���ͷŵ�CD��0 */
                g_stIpfDl.pstIpfCDQ[u32CdqRptr].u16Attribute = 0;
                g_stIpfDl.pstIpfCDQ[u32CdqRptr].u16PktLen = 0;
                g_stIpfDl.pstIpfCDQ[u32CdqRptr].u32Ptr = 0;
                u32CdqRptr = ((u32CdqRptr+1) < IPF_DLCD_DESC_SIZE)?(u32CdqRptr+1):0;
            }
            u32CdqRptr = ((u32CdqRptr+1) < IPF_DLCD_DESC_SIZE)?(u32CdqRptr+1):0;
            *(g_stIpfDl.u32IpfCdRptr) = u32CdqRptr;
        }
    }
    *pu32Num = u32Num;
}
EXPORT_SYMBOL(BSP_IPF_GetDlRd);
int BSP_IPF_GetDlAdNum(unsigned int* pu32AD0Num, unsigned int* pu32AD1Num)
{
    unsigned int u32DlAd0Depth = 0;
    unsigned int u32DlAd1Depth = 0;
    unsigned int u32DlAd0wptr = 0;
    unsigned int u32DlAd0rptr = 0;
    unsigned int u32DlAd1wptr = 0;
    unsigned int u32DlAd1rptr = 0;
    unsigned int u32AD0Num = 0;
    unsigned int u32AD1Num = 0;
    /*��μ��*/
    if((NULL == pu32AD0Num)||(NULL == pu32AD1Num))
    {
        IPF_PRINT_ERROR("parameter is error\n");
        return BSP_ERR_IPF_INVALID_PARA;
    }

    /* �������AD0���� */
    IPF_REG_READ(SOC_IPF_CH1_ADQ0_WPTR_ADDR(IPF_REGBASE_ADR), u32DlAd0wptr);
    IPF_REG_READ(SOC_IPF_CH1_ADQ0_RPTR_ADDR(IPF_REGBASE_ADR), u32DlAd0rptr);
    if (u32DlAd0wptr >= u32DlAd0rptr)/*дָ����ǰ������˳��*/
        u32DlAd0Depth = IPF_DLAD0_DESC_SIZE - (u32DlAd0wptr - u32DlAd0rptr+1);
    else
        u32DlAd0Depth = u32DlAd0rptr - u32DlAd0wptr - 1;
    u32AD0Num = (u32DlAd0Depth > IPF_OBLIGATE_AD_NUM) ? (u32DlAd0Depth - IPF_OBLIGATE_AD_NUM) : 0;
    if(u32AD0Num > IPF_DLAD0_DESC_SIZE)
    {
        IPF_PRINT_ERROR("adq0 num is error\n");
        return BSP_ERR_IPF_INVALID_PARA;
    }
    *pu32AD0Num = u32AD0Num;

    /* �������AD1���� */
    IPF_REG_READ(SOC_IPF_CH1_ADQ1_WPTR_ADDR(IPF_REGBASE_ADR), u32DlAd1wptr);
    IPF_REG_READ(SOC_IPF_CH1_ADQ1_RPTR_ADDR(IPF_REGBASE_ADR), u32DlAd1rptr);
    if (u32DlAd1wptr >= u32DlAd1rptr)/*дָ����ǰ������˳��*/
        u32DlAd1Depth = IPF_DLAD1_DESC_SIZE - (u32DlAd1wptr - u32DlAd1rptr+1);
    else
        u32DlAd1Depth = u32DlAd1rptr - u32DlAd1wptr - 1;

    u32AD1Num = (u32DlAd1Depth > IPF_OBLIGATE_AD_NUM) ? (u32DlAd1Depth - IPF_OBLIGATE_AD_NUM) : 0;
    if(u32AD1Num > IPF_DLAD1_DESC_SIZE)
    {
        IPF_PRINT_ERROR("adq1 num is error\n");
        return BSP_ERR_IPF_INVALID_PARA;
    }
    *pu32AD1Num = u32AD1Num;

    return IPF_SUCCESS;
}
EXPORT_SYMBOL(BSP_IPF_GetDlAdNum);
int BSP_IPF_ConfigDlAd(IPF_AD_TYPE_E eAdType, unsigned int u32AdNum, IPF_AD_DESC_S *pstAdDesc  )
{
    unsigned int i;
    unsigned int u32ADQ0wptr;
    unsigned int u32ADQ1wptr;

    /*Modify_for_c_reset, l00212112,20130511, starts*/
    /*���C�˸�λ���򷵻�*/
    if (IPF_FORRESET_CONTROL_FORBID == IPF_GetControlFLagForCcoreReset())
    {
        IPF_PRINT_ERROR("ccore is resetting\n");
        return BSP_ERR_IPF_CCORE_RESETTING;
    }
    /*Modify_for_c_reset, l00212112,20130511, ends*/

    /* ��μ�� */
    if((IPF_AD_MAX <= eAdType) || (NULL == pstAdDesc))
    {
        IPF_PRINT_ERROR("parameter is error\n");
        return BSP_ERR_IPF_INVALID_PARA;
    }

    /* ���ģ���Ƿ��ʼ�� */
    IPF_INIT_CHECK();

    if(IPF_AD_0 == eAdType)
    {
        g_stIPFDebugInfo->u32DlAdq0Num += u32AdNum;
        /* ��ȡADQ0дָ�� */
        IPF_REG_READ(SOC_IPF_CH1_ADQ0_WPTR_ADDR(IPF_REGBASE_ADR), u32ADQ0wptr);
        /* ��ȡĿ�Ľṹ��ָ���Ŀ�Ľṹ������ָ�룬���뵽ADQ�� */
        for(i=0; i < u32AdNum; i++)
        {
            if((0 == pstAdDesc[i].u32OutPtr0) || (0 == pstAdDesc[i].u32OutPtr1))
            {
                IPF_PRINT_ERROR("point is null\n");
                return BSP_ERR_IPF_INVALID_PARA;
            }
            g_stIpfDl.pstIpfADQ0[u32ADQ0wptr].u32OutPtr0 = pstAdDesc[i].u32OutPtr0;
            g_stIpfDl.pstIpfADQ0[u32ADQ0wptr].u32OutPtr1 = pstAdDesc[i].u32OutPtr1;
            u32ADQ0wptr = ((u32ADQ0wptr + 1) < IPF_DLAD0_DESC_SIZE)? (u32ADQ0wptr + 1) : 0;
        }
        /* ����ADQ0дָ�� */
        IPF_REG_WRITE(SOC_IPF_CH1_ADQ0_WPTR_ADDR(IPF_REGBASE_ADR), u32ADQ0wptr);
    }
    else
    {
        g_stIPFDebugInfo->u32DlAdq1Num += u32AdNum;
        /* ��ȡADQ1дָ�� */
        IPF_REG_READ(SOC_IPF_CH1_ADQ1_WPTR_ADDR(IPF_REGBASE_ADR), u32ADQ1wptr);
        /* ��ȡĿ�Ľṹ��ָ���Ŀ�Ľṹ������ָ�룬���뵽ADQ�� */
        for(i=0; i < u32AdNum; i++)
        {
            if((0 == pstAdDesc[i].u32OutPtr0) || (0 == pstAdDesc[i].u32OutPtr1))
            {
                IPF_PRINT_ERROR("point is null\n");
                return BSP_ERR_IPF_INVALID_PARA;
            }
            g_stIpfDl.pstIpfADQ1[u32ADQ1wptr].u32OutPtr0 = pstAdDesc[i].u32OutPtr0;
            g_stIpfDl.pstIpfADQ1[u32ADQ1wptr].u32OutPtr1 = pstAdDesc[i].u32OutPtr1;
            u32ADQ1wptr = ((u32ADQ1wptr + 1) < IPF_DLAD1_DESC_SIZE)? (u32ADQ1wptr + 1) : 0;
        }
        /* ����ADQ1дָ�� */
        IPF_REG_WRITE(SOC_IPF_CH1_ADQ1_WPTR_ADDR(IPF_REGBASE_ADR), u32ADQ1wptr);
    }
    return IPF_SUCCESS;
}
EXPORT_SYMBOL(BSP_IPF_ConfigDlAd);
int BSP_IPF_GetUsedDlAd(IPF_AD_TYPE_E eAdType, unsigned int *pu32AdNum, IPF_AD_DESC_S *pstAdDesc)
{
    unsigned int i = 0;
    unsigned int u32IpfAdqRpt = 0;
    unsigned int u32IpfAdqWpt = 0;
    unsigned int u32IpfAdqSize = 0;
    IPF_AD_DESC_S *pstIpfADQ = (IPF_AD_DESC_S*)NULL;
    unsigned int u32AdNum = 0;

    /*  ��μ�� */
    if((IPF_AD_MAX <= eAdType)|| (NULL == pu32AdNum) || (NULL == pstAdDesc))
    {
        IPF_PRINT_ERROR("parameter is error\n");
        return BSP_ERR_IPF_INVALID_PARA;
    }

    /* ��ȡ��ʵ�Ķ�ָ�� */
    if(IPF_SUCCESS != IPF_ObligateAdqRpt(IPF_CHANNEL_DOWN, eAdType, &u32IpfAdqRpt))
    {
        IPF_PRINT_ERROR("IPF_ObligateAdqRpt error\n");
        return IPF_ERROR;
    }

    /* ����ͨ��ID��AD���ͻ�ȡ�����Ĵ�������(дָ�롢��С������) */
    switch (eAdType) {
        case IPF_AD_0:
                IPF_REG_READ(SOC_IPF_CH1_ADQ0_WPTR_ADDR(IPF_REGBASE_ADR), u32IpfAdqWpt);
                u32IpfAdqSize = IPF_DLAD0_DESC_SIZE;
                pstIpfADQ = g_stIpfDl.pstIpfADQ0;
            break;
        case IPF_AD_1:
                IPF_REG_READ(SOC_IPF_CH1_ADQ1_WPTR_ADDR(IPF_REGBASE_ADR), u32IpfAdqWpt);
                u32IpfAdqSize = IPF_DLAD1_DESC_SIZE;
                pstIpfADQ = g_stIpfDl.pstIpfADQ1;
            break;
        default:
            IPF_PRINT_ERROR("parameter is error\n");
            break;
    }

    if((IPF_AD_DESC_S*)NULL == pstIpfADQ)
    {
        return BSP_ERR_IPF_INVALID_PARA;
    }

    /* ���ݻ�ȡ����ADQ����(��Ӧ����)���Ѿ�������ʹ�õ�AD��Ϣ��������pu32AdNum��pstAdDesc */
    for(i = u32IpfAdqRpt; i != u32IpfAdqWpt; i %= u32IpfAdqSize)
    {
        if(NULL == pstAdDesc)
        {
            IPF_PRINT_ERROR("point is null\n");
            return BSP_ERR_IPF_INVALID_PARA;
        }
        pstAdDesc->u32OutPtr0 = pstIpfADQ[i].u32OutPtr0;
        pstAdDesc->u32OutPtr1 = pstIpfADQ[i].u32OutPtr1;
        u32AdNum++;
        pstAdDesc++;
        i++;
    }
    *pu32AdNum = u32AdNum;

    return IPF_SUCCESS;
}
EXPORT_SYMBOL(BSP_IPF_GetUsedDlAd);
/*Modify_for_c_reset, l00212112,20130511, ends*/

static int IPF_Probe(struct platform_device *pdev)
{
    return IPF_SUCCESS;
}


static int IPF_Remove(struct platform_device *pdev)
{
    return IPF_SUCCESS;
}


static int IPF_Suspend(struct platform_device *pdev,pm_message_t state)
{
    /* �ر�IPF hclkʱ�ӡ�axi����ʱ�� */
    IPF_REG_WRITE(SOC_PERI_SCTRL_SC_PERIPH_CLKDIS2_ADDR(ipf_peri_ctrl_base), \
                (0x1 << SOC_PERI_SCTRL_SC_PERIPH_CLKDIS2_periph_clkdis2_ipf_acpu_START));

    return 0;
}
static int IPF_Resume(struct platform_device *pdev)
{
    /* ��IPF hclkʱ�ӡ�axi����ʱ�� */
    IPF_REG_WRITE(SOC_PERI_SCTRL_SC_PERIPH_CLKEN2_ADDR(ipf_peri_ctrl_base), \
                (0x1 << SOC_PERI_SCTRL_SC_PERIPH_CLKEN2_periph_clken2_ipf_acpu_START));

    return 0;
}
int IPF_Init(void)
{
    int s32Ret = 0;

    /* IPF�ڴ�����Խ���� */
    if(IPF_MEM_USED_SIZE > IPF_AXI_MEM_SIZE)
    {
        IPF_PRINT_ERROR("memory overstep the boundary\n");
        return IPF_ERROR;
    }


    hisi_io_memset((BSP_VOID*)&g_stIpfCtx, 0x0, sizeof(IPF_CONTEXT_S));

    IPF_ULBD_MEM_ADDR = HISI_VA_ADDRESS(IPF_AXI_MEM_ADDR);

    if (0 == (IPF_REGBASE_ADR = (unsigned long)ioremap(REG_BASE_IPF,REG_IPF_IOSIZE))){
        BUG_ON(1);
        return IPF_ERROR;
    }

    /* Ϊ����BD��RD����������һ�������������ַ */
    g_stIpfUl.pstIpfBDQ = (IPF_BD_DESC_S*)IPF_ULBD_MEM_ADDR;
    g_stIpfUl.pstIpfRDQ = (IPF_RD_DESC_S*)IPF_ULRD_MEM_ADDR;

    /* Ϊ����AD����������һ�������ڴ棨�׵�ַ8�ֽڶ��룩*/
    g_stIpfUl.pstIpfADQ0 = (IPF_AD_DESC_S*)IPF_ULAD0_MEM_ADDR;
    g_stIpfUl.pstIpfADQ1 = (IPF_AD_DESC_S*)IPF_ULAD1_MEM_ADDR;

    /* Ϊ����BD��RD����������һ�������������ַ */
    g_stIpfDl.pstIpfBDQ = (IPF_BD_DESC_S*)IPF_DLBD_MEM_ADDR;
    g_stIpfDl.pstIpfRDQ = (IPF_RD_DESC_S*)IPF_DLRD_MEM_ADDR;

    /* Ϊ����AD����������һ�������ڴ棨�׵�ַ8�ֽڶ��룩*/
    g_stIpfDl.pstIpfADQ0 = (IPF_AD_DESC_S*)IPF_DLAD0_MEM_ADDR;
    g_stIpfDl.pstIpfADQ1 = (IPF_AD_DESC_S*)IPF_DLAD1_MEM_ADDR;

    /* Ϊ����CD����������һ�������������ַ */
    g_stIpfDl.pstIpfCDQ = (IPF_CD_DESC_S*)IPF_DLCD_MEM_ADDR;

    /* ��¼IPF���п���BD���� */
    g_stIpfUl.pu32IdleBd = (unsigned int*)IPF_ULBD_IDLENUM_ADDR;

#ifdef __BSP_IPF_DEBUG__
    /* ��¼IPF debug��Ϣ */
    g_stIPFDebugInfo = (IPF_DEBUG_INFO_S*)IPF_DEBUG_INFO_ADDR;

    /* ��¼IPF ����CDdebug��Ϣ */
    g_stIpfDl.pstIpfDebugCDQ = (IPF_CD_DESC_S*)IPF_DEBUG_DLCD_ADDR;
#endif

    /* ��¼IPF ����CD��дָ�� */
    g_stIpfDl.u32IpfCdRptr = (unsigned int*)IPF_DLCD_PTR_ADDR;
    g_stIpfDl.u32IpfCdWptr = (unsigned int*)(IPF_DLCD_PTR_ADDR+4);

    /* �ҽ�IPF�ж� */
    IPF_Int_Connect();

    /* ע��IPF�豸 */
    s32Ret = platform_device_register(&ipf_pfdev);
    if(s32Ret)
    {
        IPF_PRINT_ERROR("ipf device register fail\n");
        return s32Ret;
    }

    /* ע��IPF���� */
    s32Ret = platform_driver_register(&ipf_pfdrv);
    if(s32Ret)
    {
        platform_device_unregister(&ipf_pfdev);
        IPF_PRINT_ERROR("ipf driver register fail\n");
        return s32Ret;
    }

    ipf_peri_ctrl_base = (unsigned long)HISI_VA_ADDRESS(SOC_PERI_SCTRL_BASE_ADDR);
	if (!ipf_peri_ctrl_base)
	{
        IPF_PRINT_ERROR("unable to ioremap ipf peri ctrl\n");
	}

    /* ��IPF hclkʱ�ӡ�axi����ʱ�� */
    IPF_REG_WRITE(SOC_PERI_SCTRL_SC_PERIPH_CLKEN2_ADDR(ipf_peri_ctrl_base), \
                (0x1 << SOC_PERI_SCTRL_SC_PERIPH_CLKEN2_periph_clken2_ipf_acpu_START));

    /* �ȴ�����һ��core ipf��ʼ��ͬ����� */
    s32Ret = mdrv_sync_wait(SYNC_MODULE_IPF, 5000);
    if(s32Ret != BSP_OK)
    {
        IPF_PRINT_ERROR("BSP_SYNC_Wait timeout\n");
        return IPF_ERROR;
    }

    /* IPF��ʼ����� */
    g_stIpfCtx.isInit = BSP_TRUE;


    IPF_PRINT_INFO("success\n");
    return IPF_SUCCESS;
}
/*module_init(IPF_Init);*/
MODULE_LICENSE("GPL V2");
