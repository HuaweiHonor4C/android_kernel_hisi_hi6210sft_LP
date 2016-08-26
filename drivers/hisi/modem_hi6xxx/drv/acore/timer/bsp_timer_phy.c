/******************************************************************************

                  ��Ȩ���� (C), 2001-2011, ��Ϊ�������޹�˾

 ******************************************************************************
  �� �� ��   : BSP_TIMER_PHY.c
  �� �� ��   : ����
  ��    ��   : ��ϲ 220237
  ��������   : 2013��3��30��
  ����޸�   :
  ��������   : �ṩTimer�Ĵ������ƹ���
  �����б�   :
              timer_32bit_count_set
              timer_input_clk_get
              timer_int_clear
              timer_int_mask
              timer_int_status_get
              timer_int_unmask
              timer_load_get
              timer_load_set
              timer_raw_int_status_get
              timer_start
              timer_stop
              timer_sys_ctrl_set
              timer_value_get
              timer_is_running
  �޸���ʷ   :
  1.��    ��   : 2013��3��30��
    ��    ��   : ��ϲ 220237
    �޸�����   : �����ļ�

******************************************************************************/

/*****************************************************************************
  1 ͷ�ļ�����
*****************************************************************************/
#include <linux/spinlock.h>
#include <linux/hisi/hi6xxx-iomap.h>                   /* For IO_ADDRESS access */
#include <linux/hisi/hi6xxx-platform.h>
#include <linux/io.h>
#include "soc_baseaddr_interface.h"
#include "soc_timer_interface.h"
#include "BSP.h"
#include "bsp_timer_phy.h"
#include "soc_ao_sctrl_interface.h"


#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


/*****************************************************************************
  2 ȫ�ֱ�������
*****************************************************************************/
 /*��timer���ƼĴ�����ʹ��λ��д���Ᵽ��*/
extern spinlock_t timer_en_lock;

/* ���ֵ�A�˵�����Timer�Ļ���ַ */
unsigned int* pulTimerBase[TIMER_TOTAL_NUM + CCORE_TIMER_EXP] = {0};

#ifdef _DRV_LLT_
SOC_TIMER_TIMERN_CONTROL_UNION   g_SOC_TIMER_TIMERN_CONTROL_UNION;
SOC_TIMER_TIMERN_INTCLR_UNION   g_SOC_TIMER_TIMERN_INTCLR_UNION;
SOC_TIMER_TIMERN_RIS_UNION   g_SOC_TIMER_TIMERN_RIS_UNION;
SOC_TIMER_TIMERN_MIS_UNION   g_SOC_TIMER_TIMERN_MIS_UNION;
unsigned int g_SCtrl_TIMER_EN1_REG;
unsigned int g_SCtrl_TIMER_EN0_REG;
#define SOC_SCTRL_SC_TIMER_EN1_ADDR(base)  &g_SCtrl_TIMER_EN1_REG
#define SOC_SCTRL_SC_TIMER_EN0_ADDR(base)  &g_SCtrl_TIMER_EN0_REG
#define TIMER_MIS_REG(base)    (&g_SOC_TIMER_TIMERN_MIS_UNION)
#define TIMER_RIS_REG(base)    (&g_SOC_TIMER_TIMERN_RIS_UNION)
#define TIMER_INTC_REG(base)    (&g_SOC_TIMER_TIMERN_INTCLR_UNION)
#endif



/*****************************************************************************
  3 ����ʵ��
*****************************************************************************/
/*****************************************************************************
 �� �� ��  : timer_find_phy_id
 ��������  : ���ݴ�����߼�timer ID, ת��Ϊ����timer ID, ������IDΪ�ú��ܷ��ʵ���Чtimer ID
 �������  : ucTimerId        Timer ID
 �������  : ��
 �� �� ֵ  :   �ɹ�:������Ӧ������timerID
                          ʧ��:����-1
 ���ú���  :
 ��������  :

*****************************************************************************/
signed int timer_find_phy_id (unsigned char timerID)
{
    signed int ret = 0;
    switch (timerID)
    {
        case ACORE_SYSTEM_TIMER_ID:
            ret = TIMER_ACPU_SYSTEM_ID_PHY;
            break;
        case TIMER_ACPU_FREE_RUN:
            ret = TIMER_ACPU_FREE_RUN_PHY;
            break;
        case TIMER_ACPU_OSA_ID:
            ret = TIMER_ACPU_OSA_ID_PHY;
            break;
        case ACORE_SOFTTIMER_ID:
            ret = TIMER_ACPU_SOFTTIMER_ID_PHY;
            break;

        case TIMER_ACPU_IDLE_ID:
            ret = TIMER_ACPU_IDLE_ID_PHY;
            break;
        case TIMER_ACPU_OM_TCXO_ID:
            ret = TIMER_ACPU_OM_TCXO_ID_PHY;
            break;
        /* ĿǰֻΪTIMER_CCPU_CPUVIEW_ID��Ȩ�ޣ�ʹ����Զ�ȡc��timer17��valueֵ */
        case TIMER_CCPU_CPUVIEW_ID:
            ret = TIMER_TOTAL_NUM + 0;
            break;

        default:
            ret = -1;
            break;
    }
    return ret;
}
void timer_load_set(unsigned char ucTimerId, unsigned int ulValue)
{
    SOC_TIMER_TIMERN_CONTROL_UNION *pTIMER_CNTL_REG = NULL;
	if(NULL == pulTimerBase[ucTimerId])
	{
		printk("pulTimerBase[ucTimerId] is NULL");
		return;
	}
    pTIMER_CNTL_REG = (SOC_TIMER_TIMERN_CONTROL_UNION *)TIMER_CNTL_REG((unsigned char*)pulTimerBase[ucTimerId]);

    /* ��cntl�Ĵ���Ϊ32λ����ģʽ��Ĭ��Ϊ16λ���� */
    pTIMER_CNTL_REG->reg.timersize = SET_BIT_WIHT_TRUE;

    /* ��ulValueд��load�Ĵ��� */
    TIMER_REG_WRITE(TIMER_LOAD_REG((unsigned long)pulTimerBase[ucTimerId]), ulValue);
}


unsigned int timer_load_get(unsigned char timerId)
{
    unsigned int result;
    TIMER_REG_READ(TIMER_LOAD_REG((unsigned long)pulTimerBase[timerId]), result);

    return result;
}


unsigned int timer_value_get(unsigned char timerId)
{
    unsigned int result;
    TIMER_REG_READ(TIMER_VALUE_REG((unsigned long)pulTimerBase[timerId]), result);

    return result;
}


signed int timer_is_running(unsigned char timerId)
{
    /* ���ݶ�ʱ��timerId����ȡ�Ĵ���TIMERN_CONTROL[7] */
    SOC_TIMER_TIMERN_CONTROL_UNION *pTIMER_CNTL_REG = (SOC_TIMER_TIMERN_CONTROL_UNION *)TIMER_CNTL_REG((unsigned char*)pulTimerBase[timerId]);
    if (SET_BIT_WIHT_TRUE == pTIMER_CNTL_REG->reg.timeren)
    {
        return BSP_OK;
    }

    return BSP_ERROR;
}
void timer_start(unsigned char timerId, unsigned int mode)
{
    unsigned long flags;
    unsigned long base = HISI_VA_ADDRESS(REG_BASE_SC_ON);
    unsigned char dualTimerId = (unsigned char)timerId/2;

    /* �Զ�ʱ��timerId��д�Ĵ���TIMERN_CONTROL[7]�����ö�ʱ��ֹͣ */
    SOC_TIMER_TIMERN_CONTROL_UNION *pTIMER_CNTL_REG =
        (SOC_TIMER_TIMERN_CONTROL_UNION *)TIMER_CNTL_REG((unsigned char*)pulTimerBase[timerId]);

    /*��timer���ƼĴ�����ʹ��λ��д���Ᵽ��*/
    spin_lock_irqsave(&timer_en_lock, flags);

    /*ʹ��dualt-timer�����ߺ͹���ʱ��*/
    /*SC_PERIPH_CLKEN4 д1��Ч��д0��Ч*/
    TIMER_REG_WRITE(SOC_AO_SCTRL_SC_PERIPH_CLKEN4_ADDR(base), SET_BITS_WIHT_TRUETRUE<<(2*dualTimerId+1));

    pTIMER_CNTL_REG->reg.timeren = SET_BIT_WIHT_FALSE;

    /*����ģʽ*/
    if ( (DRV_TIMER_MODE_E)mode == TIMER_PERIOD_COUNT)
    {
        /* �Զ�ʱ��timerId��д�Ĵ���TIMERN_CONTROL[0~1]��TIMERN_CONTROL[5,6,7]��
           ���ö�ʱ��Ϊ32bit����������ģʽ��ʹ�� */
        pTIMER_CNTL_REG->reg.oneshot = SET_BIT_WIHT_FALSE;
        pTIMER_CNTL_REG->reg.timersize = SET_BIT_WIHT_TRUE;
        pTIMER_CNTL_REG->reg.intenable = SET_BIT_WIHT_TRUE;
        pTIMER_CNTL_REG->reg.timermode = SET_BIT_WIHT_TRUE;
        pTIMER_CNTL_REG->reg.timeren = SET_BIT_WIHT_TRUE;
    }
    /*����ģʽ*/
    else if((DRV_TIMER_MODE_E)mode == TIMER_ONCE_COUNT)
    {
        /* �Զ�ʱ��timerId��д�Ĵ���TIMERN_CONTROL[0~1]��TIMERN_CONTROL[5,7]��
           ���ö�ʱ��Ϊ32bit����������ģʽ��ʹ�� */
        pTIMER_CNTL_REG->reg.oneshot = SET_BIT_WIHT_TRUE;
        pTIMER_CNTL_REG->reg.timersize = SET_BIT_WIHT_TRUE;
        pTIMER_CNTL_REG->reg.intenable = SET_BIT_WIHT_TRUE;
        pTIMER_CNTL_REG->reg.timeren = SET_BIT_WIHT_TRUE;
    }
    else
    {
        return;
    }

    spin_unlock_irqrestore(&timer_en_lock, flags);
}


void timer_stop(unsigned char timerId)
{
    unsigned long flags;



    /* �Զ�ʱ��timerId��д�Ĵ���TIMERN_CONTROL[7]�����ö�ʱ��ֹͣ */
    SOC_TIMER_TIMERN_CONTROL_UNION *pTIMER_CNTL_REG =
          (SOC_TIMER_TIMERN_CONTROL_UNION *)TIMER_CNTL_REG((unsigned char*)pulTimerBase[timerId]);

    /*����ͬdual-timer����һ��timerId*/
    unsigned char another_timerId = (timerId % 2) ? (timerId-1):(timerId+1);

    /*��timer���ƼĴ�����ʹ��λ��д���Ᵽ��*/
    spin_lock_irqsave(&timer_en_lock, flags);

    pTIMER_CNTL_REG->reg.timeren = SET_BIT_WIHT_FALSE;

    /*�ж�ͬdualt-timer����һ��timer��ʹ��״̬*/
    if (BSP_OK != timer_is_running(another_timerId))
    {
        /*���δʹ�ܣ��رմ�dual-timer�����ߺ͹���ʱ��*/
        /*TIMER_REG_WRITE(SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_ADDR(base), SET_BITS_WIHT_TRUETRUE<<(2*dualTimerId+1));*/
    }

    spin_unlock_irqrestore(&timer_en_lock, flags);
}


void timer_int_mask(unsigned char timerId)
{
    /* �Զ�ʱ��timerId��д�Ĵ���TIMERN_CONTROL[5]������Ϊ�ж�����״̬ */
    SOC_TIMER_TIMERN_CONTROL_UNION *pTIMER_CNTL_REG =
        (SOC_TIMER_TIMERN_CONTROL_UNION *)TIMER_CNTL_REG((unsigned char*)pulTimerBase[timerId]);
    pTIMER_CNTL_REG->reg.intenable = SET_BIT_WIHT_FALSE;
}
void timer_int_unmask(unsigned char timerId)
{
    /* �Զ�ʱ��timerId��д�Ĵ���TIMERN_CONTROL[5]������Ϊ�жϽ�����״̬ */
    SOC_TIMER_TIMERN_CONTROL_UNION *pTIMER_CNTL_REG =
        (SOC_TIMER_TIMERN_CONTROL_UNION *)TIMER_CNTL_REG((unsigned char*)pulTimerBase[timerId]);
    pTIMER_CNTL_REG->reg.intenable = SET_BIT_WIHT_TRUE;
}
void timer_int_clear(unsigned char timerId)
{
    /* �Զ�ʱ��timerId��д�Ĵ���TIMERN_INTCLR[0]����ж� */
    SOC_TIMER_TIMERN_INTCLR_UNION *pTIMER_INTC_REG =
        (SOC_TIMER_TIMERN_INTCLR_UNION *)TIMER_INTC_REG((unsigned char*)pulTimerBase[timerId]);
    pTIMER_INTC_REG->reg.timern_intclr = SET_BIT_WIHT_TRUE;
}
unsigned int timer_int_status_get(unsigned char timerId)
{
    /* �Զ�ʱ��timerId�����Ĵ���TIMERN_MIS[0]�������ظ�ֵ */
    SOC_TIMER_TIMERN_MIS_UNION *pTIMER_MIS_REG =
        (SOC_TIMER_TIMERN_MIS_UNION *)TIMER_MIS_REG((unsigned char*)pulTimerBase[timerId]);

    return(pTIMER_MIS_REG->reg.timernmis);
}
unsigned int timer_raw_int_status_get(unsigned char timerId)
{
    /* �Զ�ʱ��timerId�����Ĵ���TIMERN_RIS[0]�������ظ�ֵ */
    SOC_TIMER_TIMERN_RIS_UNION *pTIMER_RIS_REG =
        (SOC_TIMER_TIMERN_RIS_UNION *)TIMER_RIS_REG((unsigned char*)pulTimerBase[timerId]);

    return(pTIMER_RIS_REG->reg.timernris);
}
void  timer_32bit_count_set(unsigned char timerId)
{
    /* �Զ�ʱ��timerId��д�Ĵ���TIMERN_CONTROL[1]������Ϊ32-bitģʽ */
    SOC_TIMER_TIMERN_CONTROL_UNION *pTIMER_CNTL_REG =
        (SOC_TIMER_TIMERN_CONTROL_UNION *)TIMER_CNTL_REG((unsigned char*)pulTimerBase[timerId]);
    pTIMER_CNTL_REG->reg.timersize = SET_BIT_WIHT_TRUE;
}
unsigned int timer_input_clk_get(unsigned char timerId)
{
    switch (timerId)
    {
        /* Timerʱ��Ƶ��Ϊ32KHz */
        case TIMER_ACPU_OSA_ID_PHY:
        case TIMER_ACPU_SOFTTIMER_ID_PHY:
        case TIMER_ACPU_OM_TCXO_ID_PHY:
            return SLEEP_CLK_FREQ;

        /* Timerʱ��Ƶ��Ϊ19.2MHz */
        case TIMER_ACPU_SYSTEM_ID_PHY:
        case TIMER_ACPU_FREE_RUN_PHY:
        case TIMER_ACPU_IDLE_ID_PHY:
            return TCXO_CLK_FREQ;

        default:
            return BSP_FALSE;
    }
}



signed int timer_sys_ctrl_set(void)
{
    unsigned int *pSCtrl_TIMER_EN0_REG = (unsigned int *)(HISI_VA_ADDRESS(SOC_AO_SCTRL_SC_TIMER_EN0_ADDR(SOC_AO_SCTRL_BASE_ADDR)));
    unsigned int *pSCtrl_TIMER_EN1_REG = (unsigned int *)(HISI_VA_ADDRESS(SOC_AO_SCTRL_SC_TIMER_EN1_ADDR(SOC_AO_SCTRL_BASE_ADDR)));
    SOC_AO_SCTRL_SC_TIMER_EN0_UNION SCtrl_TIMER_EN0_REG;
    SOC_AO_SCTRL_SC_TIMER_EN1_UNION SCtrl_TIMER_EN1_REG;

    /* ����timer0,2,3 */
    SCtrl_TIMER_EN0_REG.value = 0;
    /*A �˵͹���ʹ��dts����timer0�����ڴ˴�����*/
#if 0
    SCtrl_TIMER_EN0_REG.reg.timer_en0_1acpu_dualtimer0_en0 = TIMER_PCLK;
    SCtrl_TIMER_EN0_REG.reg.timer_en0_msk_1acpu_dualtimer0_en0 = SET_BITS_WIHT_TRUETRUE;
#endif
    SCtrl_TIMER_EN0_REG.reg.timer_en0_5acpu_dualtimer1_en0 = TIMER_32K;
    SCtrl_TIMER_EN0_REG.reg.timer_en0_msk_5acpu_dualtimer1_en0 = SET_BITS_WIHT_TRUETRUE;

    SCtrl_TIMER_EN0_REG.reg.timer_en0_7acpu_dualtimer1_en1 = TIMER_32K;
    SCtrl_TIMER_EN0_REG.reg.timer_en0_msk_7acpu_dualtimer1_en1 = SET_BITS_WIHT_TRUETRUE;

    *pSCtrl_TIMER_EN0_REG = SCtrl_TIMER_EN0_REG.value;


    SCtrl_TIMER_EN1_REG.value = 0;
    SCtrl_TIMER_EN1_REG.reg.timer_en1_9acpu_dualtimer6_en0 = TIMER_PCLK;
    SCtrl_TIMER_EN1_REG.reg.timer_en1_msk_9acpu_dualtimer6_en0 = SET_BITS_WIHT_TRUETRUE;

    SCtrl_TIMER_EN1_REG.reg.timer_en1_11acpu_dualtimer6_en1 = TIMER_32K;
    SCtrl_TIMER_EN1_REG.reg.timer_en1_msk_11acpu_dualtimer6_en1 = SET_BITS_WIHT_TRUETRUE;

    *pSCtrl_TIMER_EN1_REG = SCtrl_TIMER_EN1_REG.value;

    return BSP_OK;
}


#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

