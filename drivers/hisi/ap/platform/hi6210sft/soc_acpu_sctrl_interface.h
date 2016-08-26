

/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/

#ifndef __SOC_ACPU_SCTRL_INTERFACE_H__
#define __SOC_ACPU_SCTRL_INTERFACE_H__

#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif



/*****************************************************************************
  2 �궨��
*****************************************************************************/

/****************************************************************************
                     (1/1) reg_define
 ****************************************************************************/
/* �Ĵ���˵����ACPU��ϵͳ�ϵ����üĴ���
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU_CTRL_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU_CTRL_ADDR(base)    ((base) + (0x000))

/* �Ĵ���˵����ACPU��ϵͳmemory���ƼĴ���������L1/L2���RAM�ٶ��ȶ��Ե���
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_MEM_CTRL_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_MEM_CTRL_ADDR(base)    ((base) + (0x004))

/* �Ĵ���˵����ϵͳ״̬�Ĵ��������ڼ��ϵͳ��״̬��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU_STAT_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU_STAT_ADDR(base)    ((base) + (0x008))

/* �Ĵ���˵����ACPU��ϵͳʱ���ſ����üĴ���������Ӧλд1ʹ����Ӧʱ�ӣ�д0��Ӱ�졣
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CLKEN_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CLKEN_ADDR(base)       ((base) + (0x00C))

/* �Ĵ���˵����ACPU��ϵͳʱ���ſ����üĴ���������Ӧλд1��ֹ��Ӧʱ�ӣ�д0��Ӱ�졣
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CLKDIS_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CLKDIS_ADDR(base)      ((base) + (0x010))

/* �Ĵ���˵����ACPU��ϵͳʱ��״̬�Ĵ�����0��ʾʱ����Ӧ�رգ�1��ʾ�򿪡�
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CLK_STAT_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CLK_STAT_ADDR(base)    ((base) + (0x014))

/* �Ĵ���˵����ACPU��ϵͳ��λʹ�ܼĴ���������Ӧλд1ʹ����Ӧ��λ�źţ������븴λ̬����д0��Ӱ�졣�üĴ���ֻ���ϵ縴λʱ����λ��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_RSTEN_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_RSTEN_ADDR(base)       ((base) + (0x018))

/* �Ĵ���˵����ACPU��ϵͳ��λ��ֹ�Ĵ��������ڿ��Ƹ��������ܵĸ�λ��ֹ������Ӧλд1��ֹ��Ӧ��������λ�źţ����˳���λ̬����д0��Ӱ�졣�üĴ���ֻ���ϵ縴λʱ����λ��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_RSTDIS_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_RSTDIS_ADDR(base)      ((base) + (0x01C))

/* �Ĵ���˵����ACPU��ϵͳ��λ״̬�Ĵ�����0��ʾ��λ��ʹ�ܣ�1��λʹ�ܼ����븴λ̬��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_RST_STAT_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_RST_STAT_ADDR(base)    ((base) + (0x020))

/* �Ĵ���˵����AARM�ڲ���Ƶ�����üĴ�����
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CLKCFG8BIT_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CLKCFG8BIT_ADDR(base)  ((base) + (0x024))

/* �Ĵ���˵����AARM�ڲ�PDBG��MBIST���üĴ�����
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_PDBGUP_MBIST_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_PDBGUP_MBIST_ADDR(base) ((base) + (0x02C))

/* �Ĵ���˵����PD SNOOP CNT״̬�Ĵ�����
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_PD_SNOOP_CNT_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_PD_SNOOP_CNT_ADDR(base) ((base) + (0x034))

/* �Ĵ���˵����Voltage Detect CFG״̬�Ĵ���LS��λ��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_VD_CFG_H_STAT_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_VD_CFG_H_STAT_ADDR(base) ((base) + (0x038))

/* �Ĵ���˵����Voltage Detect DLY_MIN�Ĵ�����
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_VD_HPM_DLY_MIN_STAT_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_VD_HPM_DLY_MIN_STAT_ADDR(base) ((base) + (0x03C))

/* �Ĵ���˵����Voltage Detect CLK_DIS_CNT�Ĵ�����
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_VD_CLK_DIS_CNT_INT_STAT_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_VD_CLK_DIS_CNT_INT_STAT_ADDR(base) ((base) + (0x040))

/* �Ĵ���˵����Voltage Detect CLK_DIFF_MAX�Ĵ�����
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_VD_CLK_DIS_CNT_DIF_STAT_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_VD_CLK_DIS_CNT_DIF_STAT_ADDR(base) ((base) + (0x044))

/* �Ĵ���˵����Voltage Detect DLY_DIFF_AND״̬�Ĵ���LS��λ��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_VD_DLY_DIFF_MAX_STAT_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_VD_DLY_DIFF_MAX_STAT_ADDR(base) ((base) + (0x048))

/* �Ĵ���˵����Voltage Detect DLY_ABS_OR״̬�Ĵ���LS��λ��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_VD_DLY_ABS_MIN_STAT_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_VD_DLY_ABS_MIN_STAT_ADDR(base) ((base) + (0x04C))

/* �Ĵ���˵����Voltage Detect DLY_ABS_AND״̬�Ĵ���LS��λ��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_VD_DLY_ABS_MAX_STAT_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_VD_DLY_ABS_MAX_STAT_ADDR(base) ((base) + (0x050))

/* �Ĵ���˵����Voltage Detect���üĴ���
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_VD_CTRL_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_VD_CTRL_ADDR(base)     ((base) + (0x054))

/* �Ĵ���˵����Voltage Detect mask_pattern���á�
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_VD_MASK_PATTERN_CTRL_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_VD_MASK_PATTERN_CTRL_ADDR(base) ((base) + (0x058))

/* �Ĵ���˵����Voltage Detect dly_fixed���á�
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_VD_DLY_FIXED_CTRL_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_VD_DLY_FIXED_CTRL_ADDR(base) ((base) + (0x05C))

/* �Ĵ���˵����Voltage Detect dly_table0���á�
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_VD_DLY_TABLE0_CTRL_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_VD_DLY_TABLE0_CTRL_ADDR(base) ((base) + (0x060))

/* �Ĵ���˵����Voltage Detect dly_table1���á�
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_VD_DLY_TABLE1_CTRL_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_VD_DLY_TABLE1_CTRL_ADDR(base) ((base) + (0x064))

/* �Ĵ���˵����Voltage Detect dly_table2���á�
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_VD_DLY_TABLE2_CTRL_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_VD_DLY_TABLE2_CTRL_ADDR(base) ((base) + (0x068))

/* �Ĵ���˵����Voltage Detect OSC ��Ƶ���á�
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_VD_HPM_CTRL_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_VD_HPM_CTRL_ADDR(base) ((base) + (0x06C))

/* �Ĵ���˵����L2 cache data ram latency���üĴ�����
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_L2_DATARAM_LATENCY_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_L2_DATARAM_LATENCY_ADDR(base) ((base) + (0x070))

/* �Ĵ���˵����ACPU��ϵͳDEC���ߵ�LOCK״ָ̬ʾ��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_DEC_LOCK_STA_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_DEC_LOCK_STA_ADDR(base) ((base) + (0x074))

/* �Ĵ���˵����ACPU��ϵͳEVENT BYPASS���ơ�
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_EVENT_BYPASS_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_EVENT_BYPASS_ADDR(base) ((base) + (0x080))

/* �Ĵ���˵����ACPU��ϵͳCCI 400�����á�
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CCI400_CTRL_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CCI400_CTRL_ADDR(base) ((base) + (0x084))

/* �Ĵ���˵����ACPU��ϵͳ�ϵ�����Ĵ��������ڸ������������ϵ������źţ�����Ӧλд1�����ϵ�����д0��Ӱ�졣
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_A53_CLUSTER_MTCMOS_EN_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_A53_CLUSTER_MTCMOS_EN_ADDR(base) ((base) + (0x088))

/* �Ĵ���˵����ACPU��ϵͳ�ϵ�����Ĵ��������ڸ������������ϵ������źţ�����Ӧλд1�����ϵ�����д0��Ӱ�졣
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_A53_CLUSTER_MTCMOS_DIS_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_A53_CLUSTER_MTCMOS_DIS_ADDR(base) ((base) + (0x08C))

/* �Ĵ���˵����ACPU��ϵͳ�ϵ�����Ĵ��������ڸ�������״̬��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_A53_CLUSTER_MTCMOS_STA_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_A53_CLUSTER_MTCMOS_STA_ADDR(base) ((base) + (0x090))

/* �Ĵ���˵����ACPU��ϵͳ�ϵ練����ѯ�Ĵ��������ڲ�ѯ�������������ϵ������źź��Ƿ񷵻�ACK������ӦλΪ1��ʾ�����µ磬Ϊ0��ʾ������
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_A53_CLUSTER_MTCMOS_ACK_STAT_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_A53_CLUSTER_MTCMOS_ACK_STAT_ADDR(base) ((base) + (0x094))

/* �Ĵ���˵����ACPU��ϵͳA53 cluster ISOʹ�ܼĴ��������ڸ������������ϵ������źţ�����Ӧλд1�����ϵ�����д0��Ӱ�졣
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_A53_CLUSTER_ISO_EN_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_A53_CLUSTER_ISO_EN_ADDR(base) ((base) + (0x098))

/* �Ĵ���˵����ACPU��ϵͳA53 Cluster ISOʹ�ܼĴ��������ڸ������������ϵ������źţ�����Ӧλд1�����ϵ�����д0��Ӱ�졣
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_A53_CLUSTER_ISO_DIS_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_A53_CLUSTER_ISO_DIS_ADDR(base) ((base) + (0x09C))

/* �Ĵ���˵����ACPU��ϵͳA53 Cluster ISO״̬��ѯ��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_A53_CLUSTER_ISO_STA_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_A53_CLUSTER_ISO_STA_ADDR(base) ((base) + (0x0A0))

/* �Ĵ���˵����L2dataram_1 MTCMOS�ȶ�ʱ�������ֵ����ʱʱ����19.2M��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_L2DATARAM_1_MTCMOS_TIMER_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_L2DATARAM_1_MTCMOS_TIMER_ADDR(base) ((base) + (0x0A4))

/* �Ĵ���˵����L2dataram_1 MTCMOS�ȶ�ʱ��״ָ̬ʾ��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_L2DATARAM_1_MTCMOS_TIMER_STAT_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_L2DATARAM_1_MTCMOS_TIMER_STAT_ADDR(base) ((base) + (0x0A8))

/* �Ĵ���˵����L2dataram0  MTCMOS�ȶ�ʱ�������ֵ����ʱʱ����19.2M��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_L2DATARAM_0_MTCMOS_TIMER_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_L2DATARAM_0_MTCMOS_TIMER_ADDR(base) ((base) + (0x0AC))

/* �Ĵ���˵����L2 dataram0 MTCMOS�ȶ�ʱ��״ָ̬ʾ��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_L2DATARAM_0_MTCMOS_TIMER_STAT_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_L2DATARAM_0_MTCMOS_TIMER_STAT_ADDR(base) ((base) + (0x0B0))

/* �Ĵ���˵����A53_1 MTCMOS�ȶ�ʱ�������ֵ����ʱʱ����19.2M��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_A53_1_MTCMOS_TIMER_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_A53_1_MTCMOS_TIMER_ADDR(base) ((base) + (0x0B4))

/* �Ĵ���˵����A53_1 MTCMOS�ȶ�ʱ��״ָ̬ʾ��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_A53_1_MTCMOS_TIMER_STAT_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_A53_1_MTCMOS_TIMER_STAT_ADDR(base) ((base) + (0x0B8))

/* �Ĵ���˵����A53_0 MTCMOS�ȶ�ʱ�������ֵ����ʱʱ����19.2M��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_A53_0_MTCMOS_TIMER_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_A53_0_MTCMOS_TIMER_ADDR(base) ((base) + (0x0BC))

/* �Ĵ���˵����A53_0 MTCMOS�ȶ�ʱ��״ָ̬ʾ��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_A53_0_MTCMOS_TIMER_STAT_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_A53_0_MTCMOS_TIMER_STAT_ADDR(base) ((base) + (0x0C0))

/* �Ĵ���˵��������L2 TAG��RAM��CS��չ����
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_A53_0_L2TAG_SRAM_CS_EXT_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_A53_0_L2TAG_SRAM_CS_EXT_ADDR(base) ((base) + (0x0C4))

/* �Ĵ���˵��������SCU TAG��RAM��CS��չ����
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_A53_0_SCUTAG_SRAM_CS_EXT_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_A53_0_SCUTAG_SRAM_CS_EXT_ADDR(base) ((base) + (0x0C8))

/* �Ĵ���˵��������L1 ��RAM��CS ��չ������
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_A53_0_L1SRAM_CS_EXT_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_A53_0_L1SRAM_CS_EXT_ADDR(base) ((base) + (0x0CC))

/* �Ĵ���˵��������L2 TAG��RAM��CS��չ������
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_A53_1_L2TAG_SRAM_CS_EXT_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_A53_1_L2TAG_SRAM_CS_EXT_ADDR(base) ((base) + (0x0D0))

/* �Ĵ���˵��������SCU TAG��RAM��CS��չ����
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_A53_1_SCUTAG_SRAM_CS_EXT_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_A53_1_SCUTAG_SRAM_CS_EXT_ADDR(base) ((base) + (0x0D4))

/* �Ĵ���˵��������L1 ��RAM��CS ��չ����
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_A53_1_L1SRAM_CS_EXT_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_A53_1_L1SRAM_CS_EXT_ADDR(base) ((base) + (0x0D8))

/* �Ĵ���˵�������ò���system counter������
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_SYSCNT_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_SYSCNT_ADDR(base)      ((base) + (0x0DC))

/* �Ĵ���˵��������L2 data RAM��retention����
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_L2_RETENTION_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_L2_RETENTION_ADDR(base) ((base) + (0x0E0))

/* �Ĵ���˵��������cluster�µ��ǰ����SNOOP�ſջ���
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_SNOOP_PWD_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_SNOOP_PWD_ADDR(base)   ((base) + (0x0E4))

/* �Ĵ���˵����ָʾcpu0~7 �͸�CM3��CPU0 ���κ���ж�״̬
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_INT_STM_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_INT_STM_ADDR(base)     ((base) + (0x0E8))

/* �Ĵ���˵�����ڲ��ж����μĴ������Ա���д1�������Σ�д0��Ӱ�����ε�״̬��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_EN_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_EN_ADDR(base) ((base) + (0x0EC))

/* �Ĵ���˵�����ڲ��ж����μĴ������Ա���д1����ֹ���Σ�д0��Ӱ��ʱ�����ε�״̬��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_DIS_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_DIS_ADDR(base) ((base) + (0x0F0))

/* �Ĵ���˵�����ڲ��ж�ʹ�ܼĴ���״̬��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_STAT_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_STAT_ADDR(base) ((base) + (0x0F4))

/* �Ĵ���˵�������κ��ж�״̬�Ĵ�����
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_STM_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_STM_ADDR(base) ((base) + (0x0F8))

/* �Ĵ���˵����ACPU��ϵͳ�ϵ����üĴ���
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU0_CTRL_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_CTRL_ADDR(base)   ((base) + (0x100))

/* �Ĵ���˵����ϵͳ״̬�Ĵ��������ڼ��ϵͳ��״̬��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU0_STAT_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_STAT_ADDR(base)   ((base) + (0x104))

/* �Ĵ���˵����ACPU��ϵͳʱ���ſ����üĴ���������Ӧλд1ʹ����Ӧʱ�ӣ�д0��Ӱ�졣
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU0_CLKEN_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_CLKEN_ADDR(base)  ((base) + (0x108))

/* �Ĵ���˵����ACPU��ϵͳʱ���ſ����üĴ���������Ӧλд1��ֹ��Ӧʱ�ӣ�д0��Ӱ�졣
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU0_CLKDIS_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_CLKDIS_ADDR(base) ((base) + (0x10C))

/* �Ĵ���˵����ACPU��ϵͳʱ��״̬�Ĵ�����0��ʾʱ����Ӧ�رգ�1��ʾ�򿪡�
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU0_CLK_STAT_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_CLK_STAT_ADDR(base) ((base) + (0x110))

/* �Ĵ���˵����ACPU��ϵͳ��λʹ�ܼĴ���������Ӧλд1ʹ����Ӧ��λ�źţ������븴λ̬����д0��Ӱ�졣�üĴ���ֻ���ϵ縴λʱ����λ��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU0_RSTEN_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_RSTEN_ADDR(base)  ((base) + (0x114))

/* �Ĵ���˵����ACPU��ϵͳ��λ��ֹ�Ĵ��������ڿ��Ƹ��������ܵĸ�λ��ֹ������Ӧλд1��ֹ��Ӧ��������λ�źţ����˳���λ̬����д0��Ӱ�졣�üĴ���ֻ���ϵ縴λʱ����λ��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU0_RSTDIS_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_RSTDIS_ADDR(base) ((base) + (0x118))

/* �Ĵ���˵����ACPU��ϵͳ��λ״̬�Ĵ�����0��ʾ��λ��ʹ�ܣ�1��λʹ�ܼ����븴λ̬��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU0_RST_STAT_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_RST_STAT_ADDR(base) ((base) + (0x11C))

/* �Ĵ���˵����ACPU��ϵͳ�ϵ�����Ĵ��������ڸ������������ϵ������źţ�����Ӧλд1�����ϵ�����д0��Ӱ�졣
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU0_MTCMOS_EN_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_MTCMOS_EN_ADDR(base) ((base) + (0x120))

/* �Ĵ���˵����ACPU��ϵͳ�ϵ������ֹ�Ĵ��������ڸ���������ֹ�ϵ������źţ�����Ӧλд1��ֹ�ϵ�����д0��Ӱ�졣
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU0_MTCMOS_DIS_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_MTCMOS_DIS_ADDR(base) ((base) + (0x124))

/* �Ĵ���˵����ACPU��ϵͳ�ϵ�����״̬�Ĵ�������ӦλΪ1��ʾ��������״̬��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU0_MTCMOS_STAT_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_MTCMOS_STAT_ADDR(base) ((base) + (0x128))

/* �Ĵ���˵����ACPU��ϵͳ�ϵ練����ѯ�Ĵ��������ڲ�ѯ�������������ϵ������źź��Ƿ񷵻�ACK������ӦλΪ1��ʾ�����µ磬Ϊ0��ʾ������
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU0_MTCMOS_ACK_STAT_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_MTCMOS_ACK_STAT_ADDR(base) ((base) + (0x12C))

/* �Ĵ���˵����ACPU��ϵͳISOʹ�ܼĴ��������ڿ��Ƹ���������ص�Isolation Cellʹ�ܡ�����Ӧλд1ʹ����Ӧ������IsoLation Cell�����źŸ��ϣ���д0��Ӱ�졣�üĴ���ֻ���ϵ縴λʱ����λ��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU0_PW_ISOEN_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_PW_ISOEN_ADDR(base) ((base) + (0x130))

/* �Ĵ���˵����ACPU��ϵͳISO��ֹ�Ĵ��������ڿ��Ƹ���������ص�Isolation Cell��ֹ������Ӧλд1��ֹ��Ӧ������IsoLation Cell�����źŲ����ϣ���д0��Ӱ�졣�üĴ���ֻ���ϵ縴λʱ����λ��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU0_PW_ISODIS_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_PW_ISODIS_ADDR(base) ((base) + (0x134))

/* �Ĵ���˵����ACPU��ϵͳISO״̬�Ĵ�����0��ʾisolation��ʹ�ܣ�1��ʾisolationʹ�ܡ�
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU0_PW_ISO_STAT_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_PW_ISO_STAT_ADDR(base) ((base) + (0x138))

/* �Ĵ���˵�����ڲ��ж����μĴ������Ա���д1�������Σ�д0��Ӱ�����ε�״̬��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU0_INT_EN_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_INT_EN_ADDR(base) ((base) + (0x13C))

/* �Ĵ���˵�����ڲ��ж����μĴ������Ա���д1����ֹ���Σ�д0��Ӱ��ʱ�����ε�״̬��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU0_INT_DIS_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_INT_DIS_ADDR(base) ((base) + (0x140))

/* �Ĵ���˵�����ڲ��ж�ʹ�ܼĴ���������SC�ڲ��жϵ��������á���ӦbitΪ1��ʾʹ����Ӧ�жϣ�Ϊ0��ʾ�����жϡ�
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU0_INT_STAT_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_INT_STAT_ADDR(base) ((base) + (0x144))

/* �Ĵ���˵����ԭʼ�ڲ��жϼĴ���������ָʾSC�ڲ���ԭʼ�ж�״̬������ǰ������ӦbitΪ1��ʾ���жϣ�Ϊ0��ʾ���жϡ�
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU0_INT_STATR_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_INT_STATR_ADDR(base) ((base) + (0x148))

/* �Ĵ���˵�������κ��ڲ��жϼĴ���������ָʾSC��ǰ�ڲ��ж�״̬�����κ󣩡���ӦbitΪ1��ʾ���жϣ�Ϊ0��ʾ���жϡ�
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU0_INT_STATM_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_INT_STATM_ADDR(base) ((base) + (0x14C))

/* �Ĵ���˵����CPU0 MTCMOS�ȶ�ʱ�������ֵ����ʱʱ����19.2M��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU0_MTCMOS_TIMER_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_MTCMOS_TIMER_ADDR(base) ((base) + (0x150))

/* �Ĵ���˵����CPU0 MTCMOS�ȶ�ʱ��״ָ̬ʾ��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU0_MTCMOS_TIMER_STAT_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_MTCMOS_TIMER_STAT_ADDR(base) ((base) + (0x154))

/* �Ĵ���˵����Reset Vector Base Address for executing in 64-bit state.
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU0_RVBARADDR_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_RVBARADDR_ADDR(base) ((base) + (0x158))

/* �Ĵ���˵����ACPU��ϵͳ�ϵ����üĴ���
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU1_CTRL_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_CTRL_ADDR(base)   ((base) + (0x0200))

/* �Ĵ���˵����ϵͳ״̬�Ĵ��������ڼ��ϵͳ��״̬��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU1_STAT_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_STAT_ADDR(base)   ((base) + (0x0204))

/* �Ĵ���˵����ACPU��ϵͳʱ���ſ����üĴ���������Ӧλд1ʹ����Ӧʱ�ӣ�д0��Ӱ�졣
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU1_CLKEN_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_CLKEN_ADDR(base)  ((base) + (0x0208))

/* �Ĵ���˵����ACPU��ϵͳʱ���ſ����üĴ���������Ӧλд1��ֹ��Ӧʱ�ӣ�д0��Ӱ�졣
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU1_CLKDIS_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_CLKDIS_ADDR(base) ((base) + (0x020C))

/* �Ĵ���˵����ACPU��ϵͳʱ��״̬�Ĵ�����0��ʾʱ����Ӧ�رգ�1��ʾ�򿪡�
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU1_CLK_STAT_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_CLK_STAT_ADDR(base) ((base) + (0x0210))

/* �Ĵ���˵����ACPU��ϵͳ��λʹ�ܼĴ���������Ӧλд1ʹ����Ӧ��λ�źţ������븴λ̬����д0��Ӱ�졣�üĴ���ֻ���ϵ縴λʱ����λ��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU1_RSTEN_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_RSTEN_ADDR(base)  ((base) + (0x0214))

/* �Ĵ���˵����ACPU��ϵͳ��λ��ֹ�Ĵ��������ڿ��Ƹ��������ܵĸ�λ��ֹ������Ӧλд1��ֹ��Ӧ��������λ�źţ����˳���λ̬����д0��Ӱ�졣�üĴ���ֻ���ϵ縴λʱ����λ��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU1_RSTDIS_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_RSTDIS_ADDR(base) ((base) + (0x0218))

/* �Ĵ���˵����ACPU��ϵͳ��λ״̬�Ĵ�����0��ʾ��λ��ʹ�ܣ�1��λʹ�ܼ����븴λ̬��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU1_RST_STAT_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_RST_STAT_ADDR(base) ((base) + (0x021C))

/* �Ĵ���˵����ACPU��ϵͳ�ϵ�����Ĵ��������ڸ������������ϵ������źţ�����Ӧλд1�����ϵ�����д0��Ӱ�졣
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU1_MTCMOS_EN_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_MTCMOS_EN_ADDR(base) ((base) + (0x0220))

/* �Ĵ���˵����ACPU��ϵͳ�ϵ������ֹ�Ĵ��������ڸ���������ֹ�ϵ������źţ�����Ӧλд1��ֹ�ϵ�����д0��Ӱ�졣
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU1_MTCMOS_DIS_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_MTCMOS_DIS_ADDR(base) ((base) + (0x0224))

/* �Ĵ���˵����ACPU��ϵͳ�ϵ�����״̬�Ĵ�������ӦλΪ1��ʾ��������״̬��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU1_MTCMOS_STAT_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_MTCMOS_STAT_ADDR(base) ((base) + (0x0228))

/* �Ĵ���˵����ACPU��ϵͳ�ϵ練����ѯ�Ĵ��������ڲ�ѯ�������������ϵ������źź��Ƿ񷵻�ACK������ӦλΪ1��ʾ�����µ磬Ϊ0��ʾ������
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU1_MTCMOS_ACK_STAT_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_MTCMOS_ACK_STAT_ADDR(base) ((base) + (0x022C))

/* �Ĵ���˵����ACPU��ϵͳISOʹ�ܼĴ��������ڿ��Ƹ���������ص�Isolation Cellʹ�ܡ�����Ӧλд1ʹ����Ӧ������IsoLation Cell�����źŸ��ϣ���д0��Ӱ�졣�üĴ���ֻ���ϵ縴λʱ����λ��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU1_PW_ISOEN_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_PW_ISOEN_ADDR(base) ((base) + (0x0230))

/* �Ĵ���˵����ACPU��ϵͳISO��ֹ�Ĵ��������ڿ��Ƹ���������ص�Isolation Cell��ֹ������Ӧλд1��ֹ��Ӧ������IsoLation Cell�����źŲ����ϣ���д0��Ӱ�졣�üĴ���ֻ���ϵ縴λʱ����λ��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU1_PW_ISODIS_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_PW_ISODIS_ADDR(base) ((base) + (0x0234))

/* �Ĵ���˵����ACPU��ϵͳISO״̬�Ĵ�����0��ʾisolation��ʹ�ܣ�1��ʾisolationʹ�ܡ�
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU1_PW_ISO_STAT_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_PW_ISO_STAT_ADDR(base) ((base) + (0x0238))

/* �Ĵ���˵�����ڲ��ж����μĴ������Ա���д1�������Σ�д0��Ӱ�����ε�״̬��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU1_INT_EN_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_INT_EN_ADDR(base) ((base) + (0x023C))

/* �Ĵ���˵�����ڲ��ж����μĴ������Ա���д1����ֹ���Σ�д0��Ӱ��ʱ�����ε�״̬��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU1_INT_DIS_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_INT_DIS_ADDR(base) ((base) + (0x0240))

/* �Ĵ���˵�����ڲ��ж�ʹ�ܼĴ���������SC�ڲ��жϵ��������á���ӦbitΪ1��ʾʹ����Ӧ�жϣ�Ϊ0��ʾ�����жϡ�
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU1_INT_STAT_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_INT_STAT_ADDR(base) ((base) + (0x0244))

/* �Ĵ���˵����ԭʼ�ڲ��жϼĴ���������ָʾSC�ڲ���ԭʼ�ж�״̬������ǰ������ӦbitΪ1��ʾ���жϣ�Ϊ0��ʾ���жϡ�
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU1_INT_STATR_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_INT_STATR_ADDR(base) ((base) + (0x0248))

/* �Ĵ���˵�������κ��ڲ��жϼĴ���������ָʾSC��ǰ�ڲ��ж�״̬�����κ󣩡���ӦbitΪ1��ʾ���жϣ�Ϊ0��ʾ���жϡ�
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU1_INT_STATM_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_INT_STATM_ADDR(base) ((base) + (0x024C))

/* �Ĵ���˵����CPU0 MTCMOS�ȶ�ʱ�������ֵ����ʱʱ����19.2M��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU1_MTCMOS_TIMER_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_MTCMOS_TIMER_ADDR(base) ((base) + (0x0250))

/* �Ĵ���˵����CPU0 MTCMOS�ȶ�ʱ��״ָ̬ʾ��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU1_MTCMOS_TIMER_STAT_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_MTCMOS_TIMER_STAT_ADDR(base) ((base) + (0x0254))

/* �Ĵ���˵����Reset Vector Base Address for executing in 64-bit state.
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU1_RVBARADDR_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_RVBARADDR_ADDR(base) ((base) + (0x0258))

/* �Ĵ���˵����ACPU��ϵͳ�ϵ����üĴ���
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU2_CTRL_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_CTRL_ADDR(base)   ((base) + (0x300))

/* �Ĵ���˵����ϵͳ״̬�Ĵ��������ڼ��ϵͳ��״̬��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU2_STAT_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_STAT_ADDR(base)   ((base) + (0x304))

/* �Ĵ���˵����ACPU��ϵͳʱ���ſ����üĴ���������Ӧλд1ʹ����Ӧʱ�ӣ�д0��Ӱ�졣
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU2_CLKEN_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_CLKEN_ADDR(base)  ((base) + (0x308))

/* �Ĵ���˵����ACPU��ϵͳʱ���ſ����üĴ���������Ӧλд1��ֹ��Ӧʱ�ӣ�д0��Ӱ�졣
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU2_CLKDIS_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_CLKDIS_ADDR(base) ((base) + (0x30C))

/* �Ĵ���˵����ACPU��ϵͳʱ��״̬�Ĵ�����0��ʾʱ����Ӧ�رգ�1��ʾ�򿪡�
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU2_CLK_STAT_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_CLK_STAT_ADDR(base) ((base) + (0x310))

/* �Ĵ���˵����ACPU��ϵͳ��λʹ�ܼĴ���������Ӧλд1ʹ����Ӧ��λ�źţ������븴λ̬����д0��Ӱ�졣�üĴ���ֻ���ϵ縴λʱ����λ��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU2_RSTEN_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_RSTEN_ADDR(base)  ((base) + (0x314))

/* �Ĵ���˵����ACPU��ϵͳ��λ��ֹ�Ĵ��������ڿ��Ƹ��������ܵĸ�λ��ֹ������Ӧλд1��ֹ��Ӧ��������λ�źţ����˳���λ̬����д0��Ӱ�졣�üĴ���ֻ���ϵ縴λʱ����λ��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU2_RSTDIS_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_RSTDIS_ADDR(base) ((base) + (0x318))

/* �Ĵ���˵����ACPU��ϵͳ��λ״̬�Ĵ�����0��ʾ��λ��ʹ�ܣ�1��λʹ�ܼ����븴λ̬��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU2_RST_STAT_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_RST_STAT_ADDR(base) ((base) + (0x31C))

/* �Ĵ���˵����ACPU��ϵͳ�ϵ�����Ĵ��������ڸ������������ϵ������źţ�����Ӧλд1�����ϵ�����д0��Ӱ�졣
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU2_MTCMOS_EN_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_MTCMOS_EN_ADDR(base) ((base) + (0x320))

/* �Ĵ���˵����ACPU��ϵͳ�ϵ������ֹ�Ĵ��������ڸ���������ֹ�ϵ������źţ�����Ӧλд1��ֹ�ϵ�����д0��Ӱ�졣
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU2_MTCMOS_DIS_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_MTCMOS_DIS_ADDR(base) ((base) + (0x324))

/* �Ĵ���˵����ACPU��ϵͳ�ϵ�����״̬�Ĵ�������ӦλΪ1��ʾ��������״̬��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU2_MTCMOS_STAT_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_MTCMOS_STAT_ADDR(base) ((base) + (0x328))

/* �Ĵ���˵����ACPU��ϵͳ�ϵ練����ѯ�Ĵ��������ڲ�ѯ�������������ϵ������źź��Ƿ񷵻�ACK������ӦλΪ1��ʾ�����µ磬Ϊ0��ʾ������
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU2_MTCMOS_ACK_STAT_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_MTCMOS_ACK_STAT_ADDR(base) ((base) + (0x32C))

/* �Ĵ���˵����ACPU��ϵͳISOʹ�ܼĴ��������ڿ��Ƹ���������ص�Isolation Cellʹ�ܡ�����Ӧλд1ʹ����Ӧ������IsoLation Cell�����źŸ��ϣ���д0��Ӱ�졣�üĴ���ֻ���ϵ縴λʱ����λ��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU2_PW_ISOEN_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_PW_ISOEN_ADDR(base) ((base) + (0x330))

/* �Ĵ���˵����ACPU��ϵͳISO��ֹ�Ĵ��������ڿ��Ƹ���������ص�Isolation Cell��ֹ������Ӧλд1��ֹ��Ӧ������IsoLation Cell�����źŲ����ϣ���д0��Ӱ�졣�üĴ���ֻ���ϵ縴λʱ����λ��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU2_PW_ISODIS_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_PW_ISODIS_ADDR(base) ((base) + (0x334))

/* �Ĵ���˵����ACPU��ϵͳISO״̬�Ĵ�����0��ʾisolation��ʹ�ܣ�1��ʾisolationʹ�ܡ�
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU2_PW_ISO_STAT_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_PW_ISO_STAT_ADDR(base) ((base) + (0x338))

/* �Ĵ���˵�����ڲ��ж����μĴ������Ա���д1�������Σ�д0��Ӱ�����ε�״̬��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU2_INT_EN_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_INT_EN_ADDR(base) ((base) + (0x33C))

/* �Ĵ���˵�����ڲ��ж����μĴ������Ա���д1����ֹ���Σ�д0��Ӱ��ʱ�����ε�״̬��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU2_INT_DIS_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_INT_DIS_ADDR(base) ((base) + (0x340))

/* �Ĵ���˵�����ڲ��ж�ʹ�ܼĴ���������SC�ڲ��жϵ��������á���ӦbitΪ1��ʾʹ����Ӧ�жϣ�Ϊ0��ʾ�����жϡ�
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU2_INT_STAT_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_INT_STAT_ADDR(base) ((base) + (0x344))

/* �Ĵ���˵����ԭʼ�ڲ��жϼĴ���������ָʾSC�ڲ���ԭʼ�ж�״̬������ǰ������ӦbitΪ1��ʾ���жϣ�Ϊ0��ʾ���жϡ�
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU2_INT_STATR_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_INT_STATR_ADDR(base) ((base) + (0x348))

/* �Ĵ���˵�������κ��ڲ��жϼĴ���������ָʾSC��ǰ�ڲ��ж�״̬�����κ󣩡���ӦbitΪ1��ʾ���жϣ�Ϊ0��ʾ���жϡ�
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU2_INT_STATM_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_INT_STATM_ADDR(base) ((base) + (0x34C))

/* �Ĵ���˵����CPU0 MTCMOS�ȶ�ʱ�������ֵ����ʱʱ����19.2M��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU2_MTCMOS_TIMER_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_MTCMOS_TIMER_ADDR(base) ((base) + (0x350))

/* �Ĵ���˵����CPU0 MTCMOS�ȶ�ʱ��״ָ̬ʾ��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU2_MTCMOS_TIMER_STAT_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_MTCMOS_TIMER_STAT_ADDR(base) ((base) + (0x354))

/* �Ĵ���˵����Reset Vector Base Address for executing in 64-bit state.
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU2_RVBARADDR_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_RVBARADDR_ADDR(base) ((base) + (0x358))

/* �Ĵ���˵����ACPU��ϵͳ�ϵ����üĴ���
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU3_CTRL_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_CTRL_ADDR(base)   ((base) + (0x400))

/* �Ĵ���˵����ϵͳ״̬�Ĵ��������ڼ��ϵͳ��״̬��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU3_STAT_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_STAT_ADDR(base)   ((base) + (0x404))

/* �Ĵ���˵����ACPU��ϵͳʱ���ſ����üĴ���������Ӧλд1ʹ����Ӧʱ�ӣ�д0��Ӱ�졣
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU3_CLKEN_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_CLKEN_ADDR(base)  ((base) + (0x408))

/* �Ĵ���˵����ACPU��ϵͳʱ���ſ����üĴ���������Ӧλд1��ֹ��Ӧʱ�ӣ�д0��Ӱ�졣
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU3_CLKDIS_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_CLKDIS_ADDR(base) ((base) + (0x40C))

/* �Ĵ���˵����ACPU��ϵͳʱ��״̬�Ĵ�����0��ʾʱ����Ӧ�رգ�1��ʾ�򿪡�
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU3_CLK_STAT_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_CLK_STAT_ADDR(base) ((base) + (0x410))

/* �Ĵ���˵����ACPU��ϵͳ��λʹ�ܼĴ���������Ӧλд1ʹ����Ӧ��λ�źţ������븴λ̬����д0��Ӱ�졣�üĴ���ֻ���ϵ縴λʱ����λ��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU3_RSTEN_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_RSTEN_ADDR(base)  ((base) + (0x414))

/* �Ĵ���˵����ACPU��ϵͳ��λ��ֹ�Ĵ��������ڿ��Ƹ��������ܵĸ�λ��ֹ������Ӧλд1��ֹ��Ӧ��������λ�źţ����˳���λ̬����д0��Ӱ�졣�üĴ���ֻ���ϵ縴λʱ����λ��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU3_RSTDIS_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_RSTDIS_ADDR(base) ((base) + (0x418))

/* �Ĵ���˵����ACPU��ϵͳ��λ״̬�Ĵ�����0��ʾ��λ��ʹ�ܣ�1��λʹ�ܼ����븴λ̬��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU3_RST_STAT_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_RST_STAT_ADDR(base) ((base) + (0x41C))

/* �Ĵ���˵����ACPU��ϵͳ�ϵ�����Ĵ��������ڸ������������ϵ������źţ�����Ӧλд1�����ϵ�����д0��Ӱ�졣
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU3_MTCMOS_EN_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_MTCMOS_EN_ADDR(base) ((base) + (0x420))

/* �Ĵ���˵����ACPU��ϵͳ�ϵ������ֹ�Ĵ��������ڸ���������ֹ�ϵ������źţ�����Ӧλд1��ֹ�ϵ�����д0��Ӱ�졣
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU3_MTCMOS_DIS_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_MTCMOS_DIS_ADDR(base) ((base) + (0x424))

/* �Ĵ���˵����ACPU��ϵͳ�ϵ�����״̬�Ĵ�������ӦλΪ1��ʾ��������״̬��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU3_MTCMOS_STAT_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_MTCMOS_STAT_ADDR(base) ((base) + (0x428))

/* �Ĵ���˵����ACPU��ϵͳ�ϵ練����ѯ�Ĵ��������ڲ�ѯ�������������ϵ������źź��Ƿ񷵻�ACK������ӦλΪ1��ʾ�����µ磬Ϊ0��ʾ������
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU3_MTCMOS_ACK_STAT_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_MTCMOS_ACK_STAT_ADDR(base) ((base) + (0x42C))

/* �Ĵ���˵����ACPU��ϵͳISOʹ�ܼĴ��������ڿ��Ƹ���������ص�Isolation Cellʹ�ܡ�����Ӧλд1ʹ����Ӧ������IsoLation Cell�����źŸ��ϣ���д0��Ӱ�졣�üĴ���ֻ���ϵ縴λʱ����λ��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU3_PW_ISOEN_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_PW_ISOEN_ADDR(base) ((base) + (0x430))

/* �Ĵ���˵����ACPU��ϵͳISO��ֹ�Ĵ��������ڿ��Ƹ���������ص�Isolation Cell��ֹ������Ӧλд1��ֹ��Ӧ������IsoLation Cell�����źŲ����ϣ���д0��Ӱ�졣�üĴ���ֻ���ϵ縴λʱ����λ��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU3_PW_ISODIS_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_PW_ISODIS_ADDR(base) ((base) + (0x434))

/* �Ĵ���˵����ACPU��ϵͳISO״̬�Ĵ�����0��ʾisolation��ʹ�ܣ�1��ʾisolationʹ�ܡ�
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU3_PW_ISO_STAT_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_PW_ISO_STAT_ADDR(base) ((base) + (0x438))

/* �Ĵ���˵�����ڲ��ж����μĴ������Ա���д1�������Σ�д0��Ӱ�����ε�״̬��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU3_INT_EN_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_INT_EN_ADDR(base) ((base) + (0x43C))

/* �Ĵ���˵�����ڲ��ж����μĴ������Ա���д1����ֹ���Σ�д0��Ӱ��ʱ�����ε�״̬��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU3_INT_DIS_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_INT_DIS_ADDR(base) ((base) + (0x440))

/* �Ĵ���˵�����ڲ��ж�ʹ�ܼĴ���������SC�ڲ��жϵ��������á���ӦbitΪ1��ʾʹ����Ӧ�жϣ�Ϊ0��ʾ�����жϡ�
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU3_INT_STAT_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_INT_STAT_ADDR(base) ((base) + (0x444))

/* �Ĵ���˵����ԭʼ�ڲ��жϼĴ���������ָʾSC�ڲ���ԭʼ�ж�״̬������ǰ������ӦbitΪ1��ʾ���жϣ�Ϊ0��ʾ���жϡ�
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU3_INT_STATR_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_INT_STATR_ADDR(base) ((base) + (0x448))

/* �Ĵ���˵�������κ��ڲ��жϼĴ���������ָʾSC��ǰ�ڲ��ж�״̬�����κ󣩡���ӦbitΪ1��ʾ���жϣ�Ϊ0��ʾ���жϡ�
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU3_INT_STATM_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_INT_STATM_ADDR(base) ((base) + (0x44C))

/* �Ĵ���˵����CPU0 MTCMOS�ȶ�ʱ�������ֵ����ʱʱ����19.2M��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU3_MTCMOS_TIMER_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_MTCMOS_TIMER_ADDR(base) ((base) + (0x450))

/* �Ĵ���˵����CPU0 MTCMOS�ȶ�ʱ��״ָ̬ʾ��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU3_MTCMOS_TIMER_STAT_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_MTCMOS_TIMER_STAT_ADDR(base) ((base) + (0x454))

/* �Ĵ���˵����Reset Vector Base Address for executing in 64-bit state.
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU3_RVBARADDR_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_RVBARADDR_ADDR(base) ((base) + (0x458))

/* �Ĵ���˵����ACPU��ϵͳ�ϵ����üĴ���
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU4_CTRL_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_CTRL_ADDR(base)   ((base) + (0x500))

/* �Ĵ���˵����ϵͳ״̬�Ĵ��������ڼ��ϵͳ��״̬��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU4_STAT_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_STAT_ADDR(base)   ((base) + (0x504))

/* �Ĵ���˵����ACPU��ϵͳʱ���ſ����üĴ���������Ӧλд1ʹ����Ӧʱ�ӣ�д0��Ӱ�졣
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU4_CLKEN_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_CLKEN_ADDR(base)  ((base) + (0x508))

/* �Ĵ���˵����ACPU��ϵͳʱ���ſ����üĴ���������Ӧλд1��ֹ��Ӧʱ�ӣ�д0��Ӱ�졣
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU4_CLKDIS_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_CLKDIS_ADDR(base) ((base) + (0x50C))

/* �Ĵ���˵����ACPU��ϵͳʱ��״̬�Ĵ�����0��ʾʱ����Ӧ�رգ�1��ʾ�򿪡�
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU4_CLK_STAT_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_CLK_STAT_ADDR(base) ((base) + (0x510))

/* �Ĵ���˵����ACPU��ϵͳ��λʹ�ܼĴ���������Ӧλд1ʹ����Ӧ��λ�źţ������븴λ̬����д0��Ӱ�졣�üĴ���ֻ���ϵ縴λʱ����λ��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU4_RSTEN_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_RSTEN_ADDR(base)  ((base) + (0x514))

/* �Ĵ���˵����ACPU��ϵͳ��λ��ֹ�Ĵ��������ڿ��Ƹ��������ܵĸ�λ��ֹ������Ӧλд1��ֹ��Ӧ��������λ�źţ����˳���λ̬����д0��Ӱ�졣�üĴ���ֻ���ϵ縴λʱ����λ��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU4_RSTDIS_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_RSTDIS_ADDR(base) ((base) + (0x518))

/* �Ĵ���˵����ACPU��ϵͳ��λ״̬�Ĵ�����0��ʾ��λ��ʹ�ܣ�1��λʹ�ܼ����븴λ̬��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU4_RST_STAT_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_RST_STAT_ADDR(base) ((base) + (0x51C))

/* �Ĵ���˵����ACPU��ϵͳ�ϵ�����Ĵ��������ڸ������������ϵ������źţ�����Ӧλд1�����ϵ�����д0��Ӱ�졣
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU4_MTCMOS_EN_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_MTCMOS_EN_ADDR(base) ((base) + (0x520))

/* �Ĵ���˵����ACPU��ϵͳ�ϵ������ֹ�Ĵ��������ڸ���������ֹ�ϵ������źţ�����Ӧλд1��ֹ�ϵ�����д0��Ӱ�졣
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU4_MTCMOS_DIS_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_MTCMOS_DIS_ADDR(base) ((base) + (0x524))

/* �Ĵ���˵����ACPU��ϵͳ�ϵ�����״̬�Ĵ�������ӦλΪ1��ʾ��������״̬��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU4_MTCMOS_STAT_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_MTCMOS_STAT_ADDR(base) ((base) + (0x528))

/* �Ĵ���˵����ACPU��ϵͳ�ϵ練����ѯ�Ĵ��������ڲ�ѯ�������������ϵ������źź��Ƿ񷵻�ACK������ӦλΪ1��ʾ�����µ磬Ϊ0��ʾ������
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU4_MTCMOS_ACK_STAT_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_MTCMOS_ACK_STAT_ADDR(base) ((base) + (0x52C))

/* �Ĵ���˵����ACPU��ϵͳISOʹ�ܼĴ��������ڿ��Ƹ���������ص�Isolation Cellʹ�ܡ�����Ӧλд1ʹ����Ӧ������IsoLation Cell�����źŸ��ϣ���д0��Ӱ�졣�üĴ���ֻ���ϵ縴λʱ����λ��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU4_PW_ISOEN_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_PW_ISOEN_ADDR(base) ((base) + (0x530))

/* �Ĵ���˵����ACPU��ϵͳISO��ֹ�Ĵ��������ڿ��Ƹ���������ص�Isolation Cell��ֹ������Ӧλд1��ֹ��Ӧ������IsoLation Cell�����źŲ����ϣ���д0��Ӱ�졣�üĴ���ֻ���ϵ縴λʱ����λ��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU4_PW_ISODIS_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_PW_ISODIS_ADDR(base) ((base) + (0x534))

/* �Ĵ���˵����ACPU��ϵͳISO״̬�Ĵ�����0��ʾisolation��ʹ�ܣ�1��ʾisolationʹ�ܡ�
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU4_PW_ISO_STAT_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_PW_ISO_STAT_ADDR(base) ((base) + (0x538))

/* �Ĵ���˵�����ڲ��ж����μĴ������Ա���д1�������Σ�д0��Ӱ�����ε�״̬��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU4_INT_EN_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_INT_EN_ADDR(base) ((base) + (0x53C))

/* �Ĵ���˵�����ڲ��ж����μĴ������Ա���д1����ֹ���Σ�д0��Ӱ��ʱ�����ε�״̬��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU4_INT_DIS_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_INT_DIS_ADDR(base) ((base) + (0x540))

/* �Ĵ���˵�����ڲ��ж�ʹ�ܼĴ���������SC�ڲ��жϵ��������á���ӦbitΪ1��ʾʹ����Ӧ�жϣ�Ϊ0��ʾ�����жϡ�
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU4_INT_STAT_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_INT_STAT_ADDR(base) ((base) + (0x544))

/* �Ĵ���˵����ԭʼ�ڲ��жϼĴ���������ָʾSC�ڲ���ԭʼ�ж�״̬������ǰ������ӦbitΪ1��ʾ���жϣ�Ϊ0��ʾ���жϡ�
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU4_INT_STATR_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_INT_STATR_ADDR(base) ((base) + (0x548))

/* �Ĵ���˵�������κ��ڲ��жϼĴ���������ָʾSC��ǰ�ڲ��ж�״̬�����κ󣩡���ӦbitΪ1��ʾ���жϣ�Ϊ0��ʾ���жϡ�
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU4_INT_STATM_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_INT_STATM_ADDR(base) ((base) + (0x54C))

/* �Ĵ���˵����CPU0 MTCMOS�ȶ�ʱ�������ֵ����ʱʱ����19.2M��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU4_MTCMOS_TIMER_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_MTCMOS_TIMER_ADDR(base) ((base) + (0x550))

/* �Ĵ���˵����CPU0 MTCMOS�ȶ�ʱ��״ָ̬ʾ��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU4_MTCMOS_TIMER_STAT_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_MTCMOS_TIMER_STAT_ADDR(base) ((base) + (0x554))

/* �Ĵ���˵����Reset Vector Base Address for executing in 64-bit state.
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU4_RVBARADDR_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_RVBARADDR_ADDR(base) ((base) + (0x558))

/* �Ĵ���˵����ACPU��ϵͳ�ϵ����üĴ���
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU5_CTRL_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_CTRL_ADDR(base)   ((base) + (0x600))

/* �Ĵ���˵����ϵͳ״̬�Ĵ��������ڼ��ϵͳ��״̬��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU5_STAT_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_STAT_ADDR(base)   ((base) + (0x604))

/* �Ĵ���˵����ACPU��ϵͳʱ���ſ����üĴ���������Ӧλд1ʹ����Ӧʱ�ӣ�д0��Ӱ�졣
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU5_CLKEN_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_CLKEN_ADDR(base)  ((base) + (0x608))

/* �Ĵ���˵����ACPU��ϵͳʱ���ſ����üĴ���������Ӧλд1��ֹ��Ӧʱ�ӣ�д0��Ӱ�졣
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU5_CLKDIS_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_CLKDIS_ADDR(base) ((base) + (0x60C))

/* �Ĵ���˵����ACPU��ϵͳʱ��״̬�Ĵ�����0��ʾʱ����Ӧ�رգ�1��ʾ�򿪡�
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU5_CLK_STAT_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_CLK_STAT_ADDR(base) ((base) + (0x610))

/* �Ĵ���˵����ACPU��ϵͳ��λʹ�ܼĴ���������Ӧλд1ʹ����Ӧ��λ�źţ������븴λ̬����д0��Ӱ�졣�üĴ���ֻ���ϵ縴λʱ����λ��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU5_RSTEN_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_RSTEN_ADDR(base)  ((base) + (0x614))

/* �Ĵ���˵����ACPU��ϵͳ��λ��ֹ�Ĵ��������ڿ��Ƹ��������ܵĸ�λ��ֹ������Ӧλд1��ֹ��Ӧ��������λ�źţ����˳���λ̬����д0��Ӱ�졣�üĴ���ֻ���ϵ縴λʱ����λ��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU5_RSTDIS_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_RSTDIS_ADDR(base) ((base) + (0x618))

/* �Ĵ���˵����ACPU��ϵͳ��λ״̬�Ĵ�����0��ʾ��λ��ʹ�ܣ�1��λʹ�ܼ����븴λ̬��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU5_RST_STAT_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_RST_STAT_ADDR(base) ((base) + (0x61C))

/* �Ĵ���˵����ACPU��ϵͳ�ϵ�����Ĵ��������ڸ������������ϵ������źţ�����Ӧλд1�����ϵ�����д0��Ӱ�졣
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU5_MTCMOS_EN_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_MTCMOS_EN_ADDR(base) ((base) + (0x620))

/* �Ĵ���˵����ACPU��ϵͳ�ϵ������ֹ�Ĵ��������ڸ���������ֹ�ϵ������źţ�����Ӧλд1��ֹ�ϵ�����д0��Ӱ�졣
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU5_MTCMOS_DIS_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_MTCMOS_DIS_ADDR(base) ((base) + (0x624))

/* �Ĵ���˵����ACPU��ϵͳ�ϵ�����״̬�Ĵ�������ӦλΪ1��ʾ��������״̬��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU5_MTCMOS_STAT_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_MTCMOS_STAT_ADDR(base) ((base) + (0x628))

/* �Ĵ���˵����ACPU��ϵͳ�ϵ練����ѯ�Ĵ��������ڲ�ѯ�������������ϵ������źź��Ƿ񷵻�ACK������ӦλΪ1��ʾ�����µ磬Ϊ0��ʾ������
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU5_MTCMOS_ACK_STAT_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_MTCMOS_ACK_STAT_ADDR(base) ((base) + (0x62C))

/* �Ĵ���˵����ACPU��ϵͳISOʹ�ܼĴ��������ڿ��Ƹ���������ص�Isolation Cellʹ�ܡ�����Ӧλд1ʹ����Ӧ������IsoLation Cell�����źŸ��ϣ���д0��Ӱ�졣�üĴ���ֻ���ϵ縴λʱ����λ��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU5_PW_ISOEN_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_PW_ISOEN_ADDR(base) ((base) + (0x630))

/* �Ĵ���˵����ACPU��ϵͳISO��ֹ�Ĵ��������ڿ��Ƹ���������ص�Isolation Cell��ֹ������Ӧλд1��ֹ��Ӧ������IsoLation Cell�����źŲ����ϣ���д0��Ӱ�졣�üĴ���ֻ���ϵ縴λʱ����λ��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU5_PW_ISODIS_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_PW_ISODIS_ADDR(base) ((base) + (0x634))

/* �Ĵ���˵����ACPU��ϵͳISO״̬�Ĵ�����0��ʾisolation��ʹ�ܣ�1��ʾisolationʹ�ܡ�
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU5_PW_ISO_STAT_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_PW_ISO_STAT_ADDR(base) ((base) + (0x638))

/* �Ĵ���˵�����ڲ��ж����μĴ������Ա���д1�������Σ�д0��Ӱ�����ε�״̬��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU5_INT_EN_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_INT_EN_ADDR(base) ((base) + (0x63C))

/* �Ĵ���˵�����ڲ��ж����μĴ������Ա���д1����ֹ���Σ�д0��Ӱ��ʱ�����ε�״̬��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU5_INT_DIS_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_INT_DIS_ADDR(base) ((base) + (0x640))

/* �Ĵ���˵�����ڲ��ж�ʹ�ܼĴ���������SC�ڲ��жϵ��������á���ӦbitΪ1��ʾʹ����Ӧ�жϣ�Ϊ0��ʾ�����жϡ�
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU5_INT_STAT_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_INT_STAT_ADDR(base) ((base) + (0x644))

/* �Ĵ���˵����ԭʼ�ڲ��жϼĴ���������ָʾSC�ڲ���ԭʼ�ж�״̬������ǰ������ӦbitΪ1��ʾ���жϣ�Ϊ0��ʾ���жϡ�
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU5_INT_STATR_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_INT_STATR_ADDR(base) ((base) + (0x648))

/* �Ĵ���˵�������κ��ڲ��жϼĴ���������ָʾSC��ǰ�ڲ��ж�״̬�����κ󣩡���ӦbitΪ1��ʾ���жϣ�Ϊ0��ʾ���жϡ�
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU5_INT_STATM_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_INT_STATM_ADDR(base) ((base) + (0x64C))

/* �Ĵ���˵����CPU0 MTCMOS�ȶ�ʱ�������ֵ����ʱʱ����19.2M��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU5_MTCMOS_TIMER_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_MTCMOS_TIMER_ADDR(base) ((base) + (0x650))

/* �Ĵ���˵����CPU0 MTCMOS�ȶ�ʱ��״ָ̬ʾ��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU5_MTCMOS_TIMER_STAT_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_MTCMOS_TIMER_STAT_ADDR(base) ((base) + (0x654))

/* �Ĵ���˵����Reset Vector Base Address for executing in 64-bit state.
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU5_RVBARADDR_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_RVBARADDR_ADDR(base) ((base) + (0x658))

/* �Ĵ���˵����ACPU��ϵͳ�ϵ����üĴ���
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU6_CTRL_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_CTRL_ADDR(base)   ((base) + (0x700))

/* �Ĵ���˵����ϵͳ״̬�Ĵ��������ڼ��ϵͳ��״̬��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU6_STAT_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_STAT_ADDR(base)   ((base) + (0x704))

/* �Ĵ���˵����ACPU��ϵͳʱ���ſ����üĴ���������Ӧλд1ʹ����Ӧʱ�ӣ�д0��Ӱ�졣
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU6_CLKEN_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_CLKEN_ADDR(base)  ((base) + (0x708))

/* �Ĵ���˵����ACPU��ϵͳʱ���ſ����üĴ���������Ӧλд1��ֹ��Ӧʱ�ӣ�д0��Ӱ�졣
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU6_CLKDIS_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_CLKDIS_ADDR(base) ((base) + (0x70C))

/* �Ĵ���˵����ACPU��ϵͳʱ��״̬�Ĵ�����0��ʾʱ����Ӧ�رգ�1��ʾ�򿪡�
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU6_CLK_STAT_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_CLK_STAT_ADDR(base) ((base) + (0x710))

/* �Ĵ���˵����ACPU��ϵͳ��λʹ�ܼĴ���������Ӧλд1ʹ����Ӧ��λ�źţ������븴λ̬����д0��Ӱ�졣�üĴ���ֻ���ϵ縴λʱ����λ��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU6_RSTEN_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_RSTEN_ADDR(base)  ((base) + (0x714))

/* �Ĵ���˵����ACPU��ϵͳ��λ��ֹ�Ĵ��������ڿ��Ƹ��������ܵĸ�λ��ֹ������Ӧλд1��ֹ��Ӧ��������λ�źţ����˳���λ̬����д0��Ӱ�졣�üĴ���ֻ���ϵ縴λʱ����λ��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU6_RSTDIS_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_RSTDIS_ADDR(base) ((base) + (0x718))

/* �Ĵ���˵����ACPU��ϵͳ��λ״̬�Ĵ�����0��ʾ��λ��ʹ�ܣ�1��λʹ�ܼ����븴λ̬��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU6_RST_STAT_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_RST_STAT_ADDR(base) ((base) + (0x71C))

/* �Ĵ���˵����ACPU��ϵͳ�ϵ�����Ĵ��������ڸ������������ϵ������źţ�����Ӧλд1�����ϵ�����д0��Ӱ�졣
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU6_MTCMOS_EN_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_MTCMOS_EN_ADDR(base) ((base) + (0x720))

/* �Ĵ���˵����ACPU��ϵͳ�ϵ������ֹ�Ĵ��������ڸ���������ֹ�ϵ������źţ�����Ӧλд1��ֹ�ϵ�����д0��Ӱ�졣
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU6_MTCMOS_DIS_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_MTCMOS_DIS_ADDR(base) ((base) + (0x724))

/* �Ĵ���˵����ACPU��ϵͳ�ϵ�����״̬�Ĵ�������ӦλΪ1��ʾ��������״̬��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU6_MTCMOS_STAT_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_MTCMOS_STAT_ADDR(base) ((base) + (0x728))

/* �Ĵ���˵����ACPU��ϵͳ�ϵ練����ѯ�Ĵ��������ڲ�ѯ�������������ϵ������źź��Ƿ񷵻�ACK������ӦλΪ1��ʾ�����µ磬Ϊ0��ʾ������
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU6_MTCMOS_ACK_STAT_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_MTCMOS_ACK_STAT_ADDR(base) ((base) + (0x72C))

/* �Ĵ���˵����ACPU��ϵͳISOʹ�ܼĴ��������ڿ��Ƹ���������ص�Isolation Cellʹ�ܡ�����Ӧλд1ʹ����Ӧ������IsoLation Cell�����źŸ��ϣ���д0��Ӱ�졣�üĴ���ֻ���ϵ縴λʱ����λ��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU6_PW_ISOEN_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_PW_ISOEN_ADDR(base) ((base) + (0x730))

/* �Ĵ���˵����ACPU��ϵͳISO��ֹ�Ĵ��������ڿ��Ƹ���������ص�Isolation Cell��ֹ������Ӧλд1��ֹ��Ӧ������IsoLation Cell�����źŲ����ϣ���д0��Ӱ�졣�üĴ���ֻ���ϵ縴λʱ����λ��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU6_PW_ISODIS_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_PW_ISODIS_ADDR(base) ((base) + (0x734))

/* �Ĵ���˵����ACPU��ϵͳISO״̬�Ĵ�����0��ʾisolation��ʹ�ܣ�1��ʾisolationʹ�ܡ�
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU6_PW_ISO_STAT_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_PW_ISO_STAT_ADDR(base) ((base) + (0x738))

/* �Ĵ���˵�����ڲ��ж����μĴ������Ա���д1�������Σ�д0��Ӱ�����ε�״̬��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU6_INT_EN_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_INT_EN_ADDR(base) ((base) + (0x73C))

/* �Ĵ���˵�����ڲ��ж����μĴ������Ա���д1����ֹ���Σ�д0��Ӱ��ʱ�����ε�״̬��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU6_INT_DIS_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_INT_DIS_ADDR(base) ((base) + (0x740))

/* �Ĵ���˵�����ڲ��ж�ʹ�ܼĴ���������SC�ڲ��жϵ��������á���ӦbitΪ1��ʾʹ����Ӧ�жϣ�Ϊ0��ʾ�����жϡ�
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU6_INT_STAT_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_INT_STAT_ADDR(base) ((base) + (0x744))

/* �Ĵ���˵����ԭʼ�ڲ��жϼĴ���������ָʾSC�ڲ���ԭʼ�ж�״̬������ǰ������ӦbitΪ1��ʾ���жϣ�Ϊ0��ʾ���жϡ�
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU6_INT_STATR_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_INT_STATR_ADDR(base) ((base) + (0x748))

/* �Ĵ���˵�������κ��ڲ��жϼĴ���������ָʾSC��ǰ�ڲ��ж�״̬�����κ󣩡���ӦbitΪ1��ʾ���жϣ�Ϊ0��ʾ���жϡ�
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU6_INT_STATM_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_INT_STATM_ADDR(base) ((base) + (0x74C))

/* �Ĵ���˵����CPU0 MTCMOS�ȶ�ʱ�������ֵ����ʱʱ����19.2M��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU6_MTCMOS_TIMER_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_MTCMOS_TIMER_ADDR(base) ((base) + (0x750))

/* �Ĵ���˵����CPU0 MTCMOS�ȶ�ʱ��״ָ̬ʾ��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU6_MTCMOS_TIMER_STAT_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_MTCMOS_TIMER_STAT_ADDR(base) ((base) + (0x754))

/* �Ĵ���˵����Reset Vector Base Address for executing in 64-bit state.
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU6_RVBARADDR_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_RVBARADDR_ADDR(base) ((base) + (0x758))

/* �Ĵ���˵����ACPU��ϵͳ�ϵ����üĴ���
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU7_CTRL_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_CTRL_ADDR(base)   ((base) + (0x800))

/* �Ĵ���˵����ϵͳ״̬�Ĵ��������ڼ��ϵͳ��״̬��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU7_STAT_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_STAT_ADDR(base)   ((base) + (0x804))

/* �Ĵ���˵����ACPU��ϵͳʱ���ſ����üĴ���������Ӧλд1ʹ����Ӧʱ�ӣ�д0��Ӱ�졣
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU7_CLKEN_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_CLKEN_ADDR(base)  ((base) + (0x808))

/* �Ĵ���˵����ACPU��ϵͳʱ���ſ����üĴ���������Ӧλд1��ֹ��Ӧʱ�ӣ�д0��Ӱ�졣
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU7_CLKDIS_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_CLKDIS_ADDR(base) ((base) + (0x80C))

/* �Ĵ���˵����ACPU��ϵͳʱ��״̬�Ĵ�����0��ʾʱ����Ӧ�رգ�1��ʾ�򿪡�
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU7_CLK_STAT_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_CLK_STAT_ADDR(base) ((base) + (0x810))

/* �Ĵ���˵����ACPU��ϵͳ��λʹ�ܼĴ���������Ӧλд1ʹ����Ӧ��λ�źţ������븴λ̬����д0��Ӱ�졣�üĴ���ֻ���ϵ縴λʱ����λ��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU7_RSTEN_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_RSTEN_ADDR(base)  ((base) + (0x814))

/* �Ĵ���˵����ACPU��ϵͳ��λ��ֹ�Ĵ��������ڿ��Ƹ��������ܵĸ�λ��ֹ������Ӧλд1��ֹ��Ӧ��������λ�źţ����˳���λ̬����д0��Ӱ�졣�üĴ���ֻ���ϵ縴λʱ����λ��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU7_RSTDIS_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_RSTDIS_ADDR(base) ((base) + (0x818))

/* �Ĵ���˵����ACPU��ϵͳ��λ״̬�Ĵ�����0��ʾ��λ��ʹ�ܣ�1��λʹ�ܼ����븴λ̬��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU7_RST_STAT_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_RST_STAT_ADDR(base) ((base) + (0x81C))

/* �Ĵ���˵����ACPU��ϵͳ�ϵ�����Ĵ��������ڸ������������ϵ������źţ�����Ӧλд1�����ϵ�����д0��Ӱ�졣
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU7_MTCMOS_EN_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_MTCMOS_EN_ADDR(base) ((base) + (0x820))

/* �Ĵ���˵����ACPU��ϵͳ�ϵ������ֹ�Ĵ��������ڸ���������ֹ�ϵ������źţ�����Ӧλд1��ֹ�ϵ�����д0��Ӱ�졣
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU7_MTCMOS_DIS_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_MTCMOS_DIS_ADDR(base) ((base) + (0x824))

/* �Ĵ���˵����ACPU��ϵͳ�ϵ�����״̬�Ĵ�������ӦλΪ1��ʾ��������״̬��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU7_MTCMOS_STAT_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_MTCMOS_STAT_ADDR(base) ((base) + (0x828))

/* �Ĵ���˵����ACPU��ϵͳ�ϵ練����ѯ�Ĵ��������ڲ�ѯ�������������ϵ������źź��Ƿ񷵻�ACK������ӦλΪ1��ʾ�����µ磬Ϊ0��ʾ������
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU7_MTCMOS_ACK_STAT_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_MTCMOS_ACK_STAT_ADDR(base) ((base) + (0x82C))

/* �Ĵ���˵����ACPU��ϵͳISOʹ�ܼĴ��������ڿ��Ƹ���������ص�Isolation Cellʹ�ܡ�����Ӧλд1ʹ����Ӧ������IsoLation Cell�����źŸ��ϣ���д0��Ӱ�졣�üĴ���ֻ���ϵ縴λʱ����λ��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU7_PW_ISOEN_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_PW_ISOEN_ADDR(base) ((base) + (0x830))

/* �Ĵ���˵����ACPU��ϵͳISO��ֹ�Ĵ��������ڿ��Ƹ���������ص�Isolation Cell��ֹ������Ӧλд1��ֹ��Ӧ������IsoLation Cell�����źŲ����ϣ���д0��Ӱ�졣�üĴ���ֻ���ϵ縴λʱ����λ��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU7_PW_ISODIS_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_PW_ISODIS_ADDR(base) ((base) + (0x834))

/* �Ĵ���˵����ACPU��ϵͳISO״̬�Ĵ�����0��ʾisolation��ʹ�ܣ�1��ʾisolationʹ�ܡ�
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU7_PW_ISO_STAT_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_PW_ISO_STAT_ADDR(base) ((base) + (0x838))

/* �Ĵ���˵�����ڲ��ж����μĴ������Ա���д1�������Σ�д0��Ӱ�����ε�״̬��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU7_INT_EN_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_INT_EN_ADDR(base) ((base) + (0x83C))

/* �Ĵ���˵�����ڲ��ж����μĴ������Ա���д1����ֹ���Σ�д0��Ӱ��ʱ�����ε�״̬��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU7_INT_DIS_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_INT_DIS_ADDR(base) ((base) + (0x840))

/* �Ĵ���˵�����ڲ��ж�ʹ�ܼĴ���������SC�ڲ��жϵ��������á���ӦbitΪ1��ʾʹ����Ӧ�жϣ�Ϊ0��ʾ�����жϡ�
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU7_INT_STAT_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_INT_STAT_ADDR(base) ((base) + (0x844))

/* �Ĵ���˵����ԭʼ�ڲ��жϼĴ���������ָʾSC�ڲ���ԭʼ�ж�״̬������ǰ������ӦbitΪ1��ʾ���жϣ�Ϊ0��ʾ���жϡ�
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU7_INT_STATR_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_INT_STATR_ADDR(base) ((base) + (0x848))

/* �Ĵ���˵�������κ��ڲ��жϼĴ���������ָʾSC��ǰ�ڲ��ж�״̬�����κ󣩡���ӦbitΪ1��ʾ���жϣ�Ϊ0��ʾ���жϡ�
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU7_INT_STATM_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_INT_STATM_ADDR(base) ((base) + (0x84C))

/* �Ĵ���˵����CPU0 MTCMOS�ȶ�ʱ�������ֵ����ʱʱ����19.2M��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU7_MTCMOS_TIMER_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_MTCMOS_TIMER_ADDR(base) ((base) + (0x850))

/* �Ĵ���˵����CPU0 MTCMOS�ȶ�ʱ��״ָ̬ʾ��
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU7_MTCMOS_TIMER_STAT_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_MTCMOS_TIMER_STAT_ADDR(base) ((base) + (0x854))

/* �Ĵ���˵����Reset Vector Base Address for executing in 64-bit state.
   λ����UNION�ṹ:  SOC_ACPU_SCTRL_ACPU_SC_CPU7_RVBARADDR_UNION */
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_RVBARADDR_ADDR(base) ((base) + (0x858))





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



/*****************************************************************************
  7 UNION����
*****************************************************************************/

/****************************************************************************
                     (1/1) reg_define
 ****************************************************************************/
/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU_CTRL_UNION
 �ṹ˵��  : ACPU_SC_CPU_CTRL �Ĵ����ṹ���塣��ַƫ����:0x000����ֵ:0x00FF0000�����:32
 �Ĵ���˵��: ACPU��ϵͳ�ϵ����üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cfgsdisable                  : 1;  /* bit[0]    : gic ��ȫ�Ĵ�����ֹ����
                                                                        0: �������
                                                                        1: ��ֹ���� */
        unsigned int  l2rstdisable                 : 1;  /* bit[1]    : L2 cache�ڸ�λ�Զ�invalide����ȥ��ʹ��
                                                                        0: �Զ�invalide��ʹ����Ч
                                                                        1: �Զ�invalide��ʹ����Ч */
        unsigned int  acinactm                     : 1;  /* bit[2]    : [2]������V8r1�д�������v8r2Ϊreserved */
        unsigned int  cdbgrst_core_en              : 1;  /* bit[3]    : atb��apb�첽�Ÿ�λ�����ź��Ƿ���Ч
                                                                        0: ��Ч
                                                                        1: ��Ч */
        unsigned int  bypass_eventi                : 1;  /* bit[4]    : eventi�������·�����ź�
                                                                        1: event����
                                                                        0: ��·eventi */
        unsigned int  dbgl1rstdisable0             : 1;  /* bit[5]    : Disable L1 data cache automatic invalidate on reset functionality:
                                                                        0 Enable automatic invalidation of L1 data cache on reset.
                                                                        1 Disable automatic invalidation of L1 data cache on reset.
                                                                        This pin is sampled only during reset of the processor. */
        unsigned int  l2flushreq0                  : 1;  /* bit[6]    : L2 hardware flush request. */
        unsigned int  reserved_0                   : 2;  /* bit[7-8]  : ���� */
        unsigned int  l2rstdisable1                : 1;  /* bit[9]    : L2 cache�ڸ�λ�Զ�invalide����ȥ��ʹ��
                                                                        0: �Զ�invalide��ʹ����Ч
                                                                        1: �Զ�invalide��ʹ����Ч */
        unsigned int  reserved_1                   : 3;  /* bit[10-12]: ���� */
        unsigned int  dbgl1rstdisable1             : 1;  /* bit[13]   : Disable L1 data cache automatic invalidate on reset functionality:
                                                                        0 Enable automatic invalidation of L1 data cache on reset.
                                                                        1 Disable automatic invalidation of L1 data cache on reset.
                                                                        This pin is sampled only during reset of the processor. */
        unsigned int  l2flushreq1                  : 1;  /* bit[14]   : L2 hardware flush request. */
        unsigned int  bypass_standbywfil2_tcxo     : 1;  /* bit[15]   : stndbywfil2 ��·clk_tcxo�л������ź�
                                                                        1: ��2��cluster��standbyefil2������cci400��cative���ͺ���ʱ���л�clk_tcxo��
                                                                        0: ��·�л�clk_tcxo���ܣ� */
        unsigned int  broadcastcachemaint_cluster0 : 1;  /* bit[16]   : Enable broadcasting of cache maintenance operations to downstream caches:
                                                                        0 Cache maintenance operations are not broadcast to downstream 
                                                                        caches.
                                                                        1 Cache maintenance operations are broadcast to downstream 
                                                                        caches */
        unsigned int  broadcastinner_cluster0      : 1;  /* bit[17]   : Enable broadcasting of Inner Shareable transactions:
                                                                        0 Inner Shareable transactions are not broadcast externally.
                                                                        1 Inner Shareable transactions are broadcast externally.
                                                                        If BROADCASTINNER is tied HIGH, you must also tie BROADCASTOUTER 
                                                                        HIGH */
        unsigned int  broadcastouter_cluster0      : 1;  /* bit[18]   : Enable broadcasting of outer shareable transactions:
                                                                        0 Outer Shareable transactions are not broadcast externally.
                                                                        1 Outer Shareable transactions are broadcast externally. */
        unsigned int  sysbardisable_cluster0       : 1;  /* bit[19]   : Disable broadcasting of barriers onto the system bus:
                                                                        0 Barriers are broadcast onto the system bus. This requires an AMBA4 ACE, or 
                                                                        AMBA5 CHI, interconnect.
                                                                        1 Barriers are not broadcast onto the system bus. This is compatible with an 
                                                                        AXI3 intercon */
        unsigned int  broadcastcachemaint_cluster1 : 1;  /* bit[20]   : Enable broadcasting of cache maintenance operations to downstream caches:
                                                                        0 Cache maintenance operations are not broadcast to downstream 
                                                                        caches.
                                                                        1 Cache maintenance operations are broadcast to downstream 
                                                                        caches */
        unsigned int  broadcastinner_cluster1      : 1;  /* bit[21]   : Enable broadcasting of Inner Shareable transactions:
                                                                        0 Inner Shareable transactions are not broadcast externally.
                                                                        1 Inner Shareable transactions are broadcast externally.
                                                                        If BROADCASTINNER is tied HIGH, you must also tie BROADCASTOUTER 
                                                                        HIGH */
        unsigned int  broadcastouter_cluster1      : 1;  /* bit[22]   : Enable broadcasting of outer shareable transactions:
                                                                        0 Outer Shareable transactions are not broadcast externally.
                                                                        1 Outer Shareable transactions are broadcast externally. */
        unsigned int  sysbardisable_cluster1       : 1;  /* bit[23]   : Disable broadcasting of barriers onto the system bus:
                                                                        0 Barriers are broadcast onto the system bus. This requires an AMBA4 ACE, or 
                                                                        AMBA5 CHI, interconnect.
                                                                        1 Barriers are not broadcast onto the system bus. This is compatible with an 
                                                                        AXI3 intercon */
        unsigned int  reserved_2                   : 8;  /* bit[24-31]: ������ */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU_CTRL_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU_CTRL_cfgsdisable_START                   (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU_CTRL_cfgsdisable_END                     (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU_CTRL_l2rstdisable_START                  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU_CTRL_l2rstdisable_END                    (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU_CTRL_acinactm_START                      (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU_CTRL_acinactm_END                        (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU_CTRL_cdbgrst_core_en_START               (3)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU_CTRL_cdbgrst_core_en_END                 (3)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU_CTRL_bypass_eventi_START                 (4)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU_CTRL_bypass_eventi_END                   (4)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU_CTRL_dbgl1rstdisable0_START              (5)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU_CTRL_dbgl1rstdisable0_END                (5)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU_CTRL_l2flushreq0_START                   (6)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU_CTRL_l2flushreq0_END                     (6)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU_CTRL_l2rstdisable1_START                 (9)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU_CTRL_l2rstdisable1_END                   (9)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU_CTRL_dbgl1rstdisable1_START              (13)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU_CTRL_dbgl1rstdisable1_END                (13)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU_CTRL_l2flushreq1_START                   (14)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU_CTRL_l2flushreq1_END                     (14)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU_CTRL_bypass_standbywfil2_tcxo_START      (15)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU_CTRL_bypass_standbywfil2_tcxo_END        (15)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU_CTRL_broadcastcachemaint_cluster0_START  (16)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU_CTRL_broadcastcachemaint_cluster0_END    (16)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU_CTRL_broadcastinner_cluster0_START       (17)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU_CTRL_broadcastinner_cluster0_END         (17)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU_CTRL_broadcastouter_cluster0_START       (18)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU_CTRL_broadcastouter_cluster0_END         (18)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU_CTRL_sysbardisable_cluster0_START        (19)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU_CTRL_sysbardisable_cluster0_END          (19)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU_CTRL_broadcastcachemaint_cluster1_START  (20)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU_CTRL_broadcastcachemaint_cluster1_END    (20)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU_CTRL_broadcastinner_cluster1_START       (21)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU_CTRL_broadcastinner_cluster1_END         (21)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU_CTRL_broadcastouter_cluster1_START       (22)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU_CTRL_broadcastouter_cluster1_END         (22)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU_CTRL_sysbardisable_cluster1_START        (23)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU_CTRL_sysbardisable_cluster1_END          (23)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_MEM_CTRL_UNION
 �ṹ˵��  : ACPU_SC_MEM_CTRL �Ĵ����ṹ���塣��ַƫ����:0x004����ֵ:0x2C9B2C9B�����:32
 �Ĵ���˵��: ACPU��ϵͳmemory���ƼĴ���������L1/L2���RAM�ٶ��ȶ��Ե���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  l1_mem_ctr_s : 16; /* bit[0-15] : A53 integration�е�L1/l2 cache tag ��ص�RAM�ٶ��ȶ��Ե����ź� */
        unsigned int  l2_mem_ctr_s : 16; /* bit[16-31]: A53 integration�е�L2 cache��data RAM�ٶ��ȶ��Ե����ź� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_MEM_CTRL_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_MEM_CTRL_l1_mem_ctr_s_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_MEM_CTRL_l1_mem_ctr_s_END    (15)
#define SOC_ACPU_SCTRL_ACPU_SC_MEM_CTRL_l2_mem_ctr_s_START  (16)
#define SOC_ACPU_SCTRL_ACPU_SC_MEM_CTRL_l2_mem_ctr_s_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU_STAT_UNION
 �ṹ˵��  : ACPU_SC_CPU_STAT �Ĵ����ṹ���塣��ַƫ����:0x008����ֵ:0x00000000�����:32
 �Ĵ���˵��: ϵͳ״̬�Ĵ��������ڼ��ϵͳ��״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_standbywfil2    : 1;  /* bit[0]    : A53 integration�������wfiָʾ
                                                              0:not all processor in WFE Standby mode
                                                              1:all processor in WFE Standby mode. */
        unsigned int  sc_standbywfi0     : 1;  /* bit[1]    : indicates whether a processor is in WFI low-power state:
                                                              0 Processor not in WFI low-power state.
                                                              1 Processor in WFI low-power state. This is the reset condition. */
        unsigned int  sc_standbywfi1     : 1;  /* bit[2]    : indicates whether a processor is in WFI low-power state:
                                                              0 Processor not in WFI low-power state.
                                                              1 Processor in WFI low-power state. This is the reset condition. */
        unsigned int  sc_standbywfi2     : 1;  /* bit[3]    : indicates whether a processor is in WFI low-power state:
                                                              0 Processor not in WFI low-power state.
                                                              1 Processor in WFI low-power state. This is the reset condition. */
        unsigned int  sc_standbywfi3     : 1;  /* bit[4]    : indicates whether a processor is in WFI low-power state:
                                                              0 Processor not in WFI low-power state.
                                                              1 Processor in WFI low-power state. This is the reset condition. */
        unsigned int  reserved_0         : 3;  /* bit[5-7]  : ���� */
        unsigned int  a53_1_standbywfil2 : 1;  /* bit[8]    :  */
        unsigned int  a53_1_standbywfi   : 4;  /* bit[9-12] : ���� */
        unsigned int  reserved_1         : 3;  /* bit[13-15]: ���� */
        unsigned int  l2flshudone0       : 1;  /* bit[16]   : L2 hardware flush complete. */
        unsigned int  l2flshudone1       : 1;  /* bit[17]   : L2 hardware flush complete. */
        unsigned int  cci400_active      : 1;  /* bit[18]   : ָʾcci400��active״̬
                                                              0��cci400 Ϊidle״̬
                                                              1��cci400 Ϊ��������״̬ */
        unsigned int  reserved_2         : 1;  /* bit[19]   : ���� */
        unsigned int  clk_div_status_vd  : 2;  /* bit[20-21]: ָʾ��ѹ���ģ���ʱ�ӷ�Ƶ״̬λ */
        unsigned int  reserved_3         : 10; /* bit[22-31]: ���� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU_STAT_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU_STAT_sc_standbywfil2_START     (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU_STAT_sc_standbywfil2_END       (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU_STAT_sc_standbywfi0_START      (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU_STAT_sc_standbywfi0_END        (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU_STAT_sc_standbywfi1_START      (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU_STAT_sc_standbywfi1_END        (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU_STAT_sc_standbywfi2_START      (3)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU_STAT_sc_standbywfi2_END        (3)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU_STAT_sc_standbywfi3_START      (4)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU_STAT_sc_standbywfi3_END        (4)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU_STAT_a53_1_standbywfil2_START  (8)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU_STAT_a53_1_standbywfil2_END    (8)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU_STAT_a53_1_standbywfi_START    (9)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU_STAT_a53_1_standbywfi_END      (12)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU_STAT_l2flshudone0_START        (16)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU_STAT_l2flshudone0_END          (16)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU_STAT_l2flshudone1_START        (17)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU_STAT_l2flshudone1_END          (17)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU_STAT_cci400_active_START       (18)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU_STAT_cci400_active_END         (18)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU_STAT_clk_div_status_vd_START   (20)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU_STAT_clk_div_status_vd_END     (21)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CLKEN_UNION
 �ṹ˵��  : ACPU_SC_CLKEN �Ĵ����ṹ���塣��ַƫ����:0x00C����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳʱ���ſ����üĴ���������Ӧλд1ʹ����Ӧʱ�ӣ�д0��Ӱ�졣
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  g_cpu_clken              : 1;  /* bit[0]    : A53 intergration 0: ����ʱ���ſ�ʹ��
                                                                    1'b1: ʱ��ʹ�ܣ� 
                                                                    1'b0: ��Ч */
        unsigned int  hpm_l2_clken             : 1;  /* bit[1]    : A53 cluster0:L2/scu hpm����ʱ���ſ�ʹ��
                                                                    1'b1: ʱ��ʹ�ܣ� 
                                                                    1'b0: ��Ч */
        unsigned int  sft_decbrg_clken         : 1;  /* bit[2]    : dec���ߺ��첽�� ����ʱ���ſ�
                                                                    1'b1: ʱ��ʹ�ܣ� 
                                                                    1'b0:��Ч */
        unsigned int  sft_ace_clken            : 1;  /* bit[3]    : CCI400���ߵ���ʱ���ſ�
                                                                    1'b1: ʱ��ʹ�ܣ� 
                                                                    1'b0: ��Ч */
        unsigned int  bypass_decbrg_clkgten    : 1;  /* bit[4]    : dec���ߺ��첽�ŵ���ʱ���ſ�bypass
                                                                    1'b1: ʱ���ſ�ʹ�ܣ� 
                                                                    1'b0: ��Ч */
        unsigned int  bypass_ace_clkgten       : 1;  /* bit[5]    : CCI400 ���ߵ�ʱ���ſ� bypass 
                                                                    1'b1: ʱ���ſ�ʹ�ܣ� 
                                                                    1'b0: ��Ч */
        unsigned int  bypass_ddrcbrg_clkgten   : 1;  /* bit[6]    : ��·ddrc �첽��ʱ���ſ� bypass 
                                                                    1'b1: ʱ���ſ�ʹ�ܣ� 
                                                                    1'b0: ��Ч */
        unsigned int  sft_ddrcbrg_clken        : 1;  /* bit[7]    : DDRC �첽�����ߵ���ʱ���ſ�
                                                                    1'b1: ʱ��ʹ�ܣ� 
                                                                    1'b0: ��Ч */
        unsigned int  g_cpu_1_clken            : 1;  /* bit[8]    : A53 intergration 1: ����ʱ���ſ�ʹ��
                                                                    1'b1: ʱ��ʹ�ܣ� 
                                                                    1'b0: ��Ч */
        unsigned int  hpm_l2_1_clken           : 1;  /* bit[9]    : A53 cluster1:L2/scu hpm����ʱ���ſ�ʹ��
                                                                    1'b1: ʱ��ʹ�ܣ� 
                                                                    1'b0: bypassʱ���ſأ�ʱ��һֱ�� */
        unsigned int  bypass_cci400_csysreq_en : 1;  /* bit[10]   : cci400_csysreq �ź�bypass 
                                                                    1'b1: ʹ��csysreq��2��A53 cluster�����standbywfil2�źž�Ϊ�� ��cci400�����cactiveΪ�ͣ�����csysreq���� 
                                                                    1'b0:��Ч */
        unsigned int  sft_at_s_clken           : 1;  /* bit[11]   : atb�첽��slave�˺�acpu_cssys�� �˵���ʱ���ſ�
                                                                    1'b1: ʱ�Ӵ�
                                                                    1'b0: ��Ч */
        unsigned int  gic400_clken             : 1;  /* bit[12]   : gic400��ʱ���ſ�
                                                                    1'b1: ʱ�Ӵ�
                                                                    1'b0: ��Ч */
        unsigned int  reserved                 : 19; /* bit[13-31]: [31:13]�������� 
                                                                      */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CLKEN_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CLKEN_g_cpu_clken_START               (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CLKEN_g_cpu_clken_END                 (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CLKEN_hpm_l2_clken_START              (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CLKEN_hpm_l2_clken_END                (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CLKEN_sft_decbrg_clken_START          (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CLKEN_sft_decbrg_clken_END            (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CLKEN_sft_ace_clken_START             (3)
#define SOC_ACPU_SCTRL_ACPU_SC_CLKEN_sft_ace_clken_END               (3)
#define SOC_ACPU_SCTRL_ACPU_SC_CLKEN_bypass_decbrg_clkgten_START     (4)
#define SOC_ACPU_SCTRL_ACPU_SC_CLKEN_bypass_decbrg_clkgten_END       (4)
#define SOC_ACPU_SCTRL_ACPU_SC_CLKEN_bypass_ace_clkgten_START        (5)
#define SOC_ACPU_SCTRL_ACPU_SC_CLKEN_bypass_ace_clkgten_END          (5)
#define SOC_ACPU_SCTRL_ACPU_SC_CLKEN_bypass_ddrcbrg_clkgten_START    (6)
#define SOC_ACPU_SCTRL_ACPU_SC_CLKEN_bypass_ddrcbrg_clkgten_END      (6)
#define SOC_ACPU_SCTRL_ACPU_SC_CLKEN_sft_ddrcbrg_clken_START         (7)
#define SOC_ACPU_SCTRL_ACPU_SC_CLKEN_sft_ddrcbrg_clken_END           (7)
#define SOC_ACPU_SCTRL_ACPU_SC_CLKEN_g_cpu_1_clken_START             (8)
#define SOC_ACPU_SCTRL_ACPU_SC_CLKEN_g_cpu_1_clken_END               (8)
#define SOC_ACPU_SCTRL_ACPU_SC_CLKEN_hpm_l2_1_clken_START            (9)
#define SOC_ACPU_SCTRL_ACPU_SC_CLKEN_hpm_l2_1_clken_END              (9)
#define SOC_ACPU_SCTRL_ACPU_SC_CLKEN_bypass_cci400_csysreq_en_START  (10)
#define SOC_ACPU_SCTRL_ACPU_SC_CLKEN_bypass_cci400_csysreq_en_END    (10)
#define SOC_ACPU_SCTRL_ACPU_SC_CLKEN_sft_at_s_clken_START            (11)
#define SOC_ACPU_SCTRL_ACPU_SC_CLKEN_sft_at_s_clken_END              (11)
#define SOC_ACPU_SCTRL_ACPU_SC_CLKEN_gic400_clken_START              (12)
#define SOC_ACPU_SCTRL_ACPU_SC_CLKEN_gic400_clken_END                (12)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CLKDIS_UNION
 �ṹ˵��  : ACPU_SC_CLKDIS �Ĵ����ṹ���塣��ַƫ����:0x010����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳʱ���ſ����üĴ���������Ӧλд1��ֹ��Ӧʱ�ӣ�д0��Ӱ�졣
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  g_cpu_clkdis              : 1;  /* bit[0]    : A53 intergration ����ʱ���ſ�ʹ��
                                                                     1'b1: ʱ�ӹر� 
                                                                     1'b0: ��Ч */
        unsigned int  hpm_l2_clkdis             : 1;  /* bit[1]    : L2/scu hpm����ʱ���ſ�ʹ��
                                                                     1'b1: ʱ�ӹر� 
                                                                     1'b0: ��Ч */
        unsigned int  sft_decbrg_clkdis         : 1;  /* bit[2]    : dec���ߺ��첽�� ����ʱ���ſ�
                                                                     1'b1: ʱ�ӹرգ� 
                                                                     1'b0:��Ч */
        unsigned int  sft_ace_clkdis            : 1;  /* bit[3]    : cci400����ʱ���ſ�
                                                                     1'b1: ʱ�ӹرգ� 
                                                                     1'b0: ��Ч */
        unsigned int  bypass_decbrg_clkgtdis    : 1;  /* bit[4]    : dec���ߺ��첽�� ����ʱ���ſ� bypass
                                                                     1'b1: ʱ���ſؽ�ֹ�� 
                                                                     1'b0: ��Ч */
        unsigned int  bypass_ace_clkgtdis       : 1;  /* bit[5]    : CCI 400 ���ߵ�ʱ���ſ�bypass 
                                                                     1'b1: ʱ���ſؽ�ֹ�� 
                                                                     1'b0: ��Ч */
        unsigned int  bypass_ddrcbrg_clkgtdis   : 1;  /* bit[6]    : ddrc �첽�ŵ�ʱ���ſ� bypass 
                                                                     1'b1: ��ʱ���ſ�ʹ�ܣ� 
                                                                     1'b0: ��Ч */
        unsigned int  sft_ddrcbrg_clkdis        : 1;  /* bit[7]    : ddrc �첽����ʱ���ſ�
                                                                     1'b1: ��ʱ��ʹ�ܣ� 
                                                                     1'b0: ��Ч */
        unsigned int  g_cpu_1_clkdis            : 1;  /* bit[8]    : A53 intergration 1: ����ʱ���ſ�ʹ��
                                                                     1'b1: ��ʱ��ʹ�ܣ� 
                                                                     1'b0: ��Ч */
        unsigned int  hpm_l2_1_clkdis           : 1;  /* bit[9]    : A53 cluster1:L2/scu hpm����ʱ���ſ�ʹ��
                                                                     1'b1: ��ʱ��ʹ�ܣ� 
                                                                     1'b0: ��Ч */
        unsigned int  bypass_cci400_csysreq_dis : 1;  /* bit[10]   : cci400_csysreq �ź�bypass 
                                                                     1'b1: ��ʹ��csysreq��2��A53 cluster�����standbywfil2�źž�Ϊ�� ��cci400�����cactiveΪ�ͣ�����csysreq���� 
                                                                     1'b0:��Ч */
        unsigned int  sft_at_s_clkdis           : 1;  /* bit[11]   : atb�첽��slave�˺�acpu_cssys�� �˵���ʱ���ſ�
                                                                     1'b1: ʱ�ӹر� 
                                                                     1'b0: ��Ч */
        unsigned int  gic400_clkdis             : 1;  /* bit[12]   : gic400��ʱ���ſ�
                                                                     1'b1: ʱ�Ӵ�
                                                                     1'b0: ��Ч */
        unsigned int  reserved                  : 19; /* bit[13-31]: [31:13]�������� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CLKDIS_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CLKDIS_g_cpu_clkdis_START               (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CLKDIS_g_cpu_clkdis_END                 (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CLKDIS_hpm_l2_clkdis_START              (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CLKDIS_hpm_l2_clkdis_END                (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CLKDIS_sft_decbrg_clkdis_START          (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CLKDIS_sft_decbrg_clkdis_END            (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CLKDIS_sft_ace_clkdis_START             (3)
#define SOC_ACPU_SCTRL_ACPU_SC_CLKDIS_sft_ace_clkdis_END               (3)
#define SOC_ACPU_SCTRL_ACPU_SC_CLKDIS_bypass_decbrg_clkgtdis_START     (4)
#define SOC_ACPU_SCTRL_ACPU_SC_CLKDIS_bypass_decbrg_clkgtdis_END       (4)
#define SOC_ACPU_SCTRL_ACPU_SC_CLKDIS_bypass_ace_clkgtdis_START        (5)
#define SOC_ACPU_SCTRL_ACPU_SC_CLKDIS_bypass_ace_clkgtdis_END          (5)
#define SOC_ACPU_SCTRL_ACPU_SC_CLKDIS_bypass_ddrcbrg_clkgtdis_START    (6)
#define SOC_ACPU_SCTRL_ACPU_SC_CLKDIS_bypass_ddrcbrg_clkgtdis_END      (6)
#define SOC_ACPU_SCTRL_ACPU_SC_CLKDIS_sft_ddrcbrg_clkdis_START         (7)
#define SOC_ACPU_SCTRL_ACPU_SC_CLKDIS_sft_ddrcbrg_clkdis_END           (7)
#define SOC_ACPU_SCTRL_ACPU_SC_CLKDIS_g_cpu_1_clkdis_START             (8)
#define SOC_ACPU_SCTRL_ACPU_SC_CLKDIS_g_cpu_1_clkdis_END               (8)
#define SOC_ACPU_SCTRL_ACPU_SC_CLKDIS_hpm_l2_1_clkdis_START            (9)
#define SOC_ACPU_SCTRL_ACPU_SC_CLKDIS_hpm_l2_1_clkdis_END              (9)
#define SOC_ACPU_SCTRL_ACPU_SC_CLKDIS_bypass_cci400_csysreq_dis_START  (10)
#define SOC_ACPU_SCTRL_ACPU_SC_CLKDIS_bypass_cci400_csysreq_dis_END    (10)
#define SOC_ACPU_SCTRL_ACPU_SC_CLKDIS_sft_at_s_clkdis_START            (11)
#define SOC_ACPU_SCTRL_ACPU_SC_CLKDIS_sft_at_s_clkdis_END              (11)
#define SOC_ACPU_SCTRL_ACPU_SC_CLKDIS_gic400_clkdis_START              (12)
#define SOC_ACPU_SCTRL_ACPU_SC_CLKDIS_gic400_clkdis_END                (12)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CLK_STAT_UNION
 �ṹ˵��  : ACPU_SC_CLK_STAT �Ĵ����ṹ���塣��ַƫ����:0x014����ֵ:0x0000108D�����:32
 �Ĵ���˵��: ACPU��ϵͳʱ��״̬�Ĵ�����0��ʾʱ����Ӧ�رգ�1��ʾ�򿪡�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  g_cpu_clksta              : 1;  /* bit[0]    : A53 intergration ����ʱ���ſ�ʹ��
                                                                     1'b1: ʱ��ʹ�ܣ� 
                                                                     1'b0: ʱ�ӹر� */
        unsigned int  hpm_l2_clksta             : 1;  /* bit[1]    : L2/scu hpm����ʱ���ſ�ʹ��
                                                                     1'b1: ʱ��ʹ�ܣ� 
                                                                     1'b0: ʱ�ӹر� */
        unsigned int  sft_decbrg_clksta         : 1;  /* bit[2]    : dec���ߺ��첽�� ����ʱ���ſ�
                                                                     1'b1: ʱ��ʹ�ܣ� 
                                                                     1'b0: ʱ�ӹر� */
        unsigned int  sft_ace_clksta            : 1;  /* bit[3]    : CCI400 RS���ߵ���ʱ���ſ�
                                                                     1'b1: ʱ��ʹ�ܣ� 
                                                                     1'b0: ʱ�ӹر� */
        unsigned int  bypass_decbrg_clkgtsta    : 1;  /* bit[4]    : dec���ߺ��첽�ŵ���ʱ���ſ�bypass
                                                                     1'b1: ʱ���ſ�ʹ�ܣ� 
                                                                     1'b0: bypassʱ���ſأ�ʱ��һֱ�� */
        unsigned int  bypass_ace_clkgtsta       : 1;  /* bit[5]    : ace RS���ߵ�ʱ���ſ� bypass 
                                                                     1'b1: ʱ���ſ�ʹ�ܣ� 
                                                                     1'b0: bypassʱ���ſأ�ʱ��һֱ�� */
        unsigned int  bypass_ddrcbrg_clkgtsta   : 1;  /* bit[6]    : CCI400���ߵ�ʱ���ſ� bypass 
                                                                     1'b1: ʱ���ſ�ʹ�ܣ� 
                                                                     1'b0: bypassʱ���ſأ�ʱ��һֱ�� */
        unsigned int  sft_ddrcbrg_clksta        : 1;  /* bit[7]    : ace RS���ߵ���ʱ���ſ�
                                                                     1'b1: ʱ��ʹ�ܣ� 
                                                                     1'b0: ��Ч */
        unsigned int  g_cpu_1_clksta            : 1;  /* bit[8]    : A53 intergration 1: ����ʱ���ſ�ʹ��
                                                                     1'b1: ʱ��ʹ�ܣ� 
                                                                     1'b0: ʱ�ӹر� */
        unsigned int  hpm_l2_1_clksta           : 1;  /* bit[9]    : A53 cluster1:L2/scu hpm����ʱ���ſ�ʹ��
                                                                     1'b1: ʱ��ʹ�ܣ� 
                                                                     1'b0: ʱ�ӹر� */
        unsigned int  bypass_cci400_csysreq_sta : 1;  /* bit[10]   : cci400_csysreq �ź�bypass 
                                                                     1'b1: ʹ��csysreq��2��A53 cluster�����standbywfil2�źž�Ϊ�� ��cci400�����cactiveΪ�ͣ�����csysreq���� 
                                                                     1'b0: bypass cci400��csysreqΪ�� */
        unsigned int  sft_at_s_clksta           : 1;  /* bit[11]   : atb�첽��slave�˺�acpu_cssys�Ķ˵���ʱ���ſ�
                                                                     1'b1: ʱ�Ӵ� 
                                                                     1'b0: ��Ч */
        unsigned int  gic400_clksta             : 1;  /* bit[12]   : gic400��ʱ���ſ�״̬
                                                                     1'b1: ʱ�Ӵ�
                                                                     1'b0: ��Ч */
        unsigned int  reserved                  : 19; /* bit[13-31]: 
                                                                     [31:13]��������  */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CLK_STAT_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CLK_STAT_g_cpu_clksta_START               (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CLK_STAT_g_cpu_clksta_END                 (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CLK_STAT_hpm_l2_clksta_START              (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CLK_STAT_hpm_l2_clksta_END                (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CLK_STAT_sft_decbrg_clksta_START          (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CLK_STAT_sft_decbrg_clksta_END            (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CLK_STAT_sft_ace_clksta_START             (3)
#define SOC_ACPU_SCTRL_ACPU_SC_CLK_STAT_sft_ace_clksta_END               (3)
#define SOC_ACPU_SCTRL_ACPU_SC_CLK_STAT_bypass_decbrg_clkgtsta_START     (4)
#define SOC_ACPU_SCTRL_ACPU_SC_CLK_STAT_bypass_decbrg_clkgtsta_END       (4)
#define SOC_ACPU_SCTRL_ACPU_SC_CLK_STAT_bypass_ace_clkgtsta_START        (5)
#define SOC_ACPU_SCTRL_ACPU_SC_CLK_STAT_bypass_ace_clkgtsta_END          (5)
#define SOC_ACPU_SCTRL_ACPU_SC_CLK_STAT_bypass_ddrcbrg_clkgtsta_START    (6)
#define SOC_ACPU_SCTRL_ACPU_SC_CLK_STAT_bypass_ddrcbrg_clkgtsta_END      (6)
#define SOC_ACPU_SCTRL_ACPU_SC_CLK_STAT_sft_ddrcbrg_clksta_START         (7)
#define SOC_ACPU_SCTRL_ACPU_SC_CLK_STAT_sft_ddrcbrg_clksta_END           (7)
#define SOC_ACPU_SCTRL_ACPU_SC_CLK_STAT_g_cpu_1_clksta_START             (8)
#define SOC_ACPU_SCTRL_ACPU_SC_CLK_STAT_g_cpu_1_clksta_END               (8)
#define SOC_ACPU_SCTRL_ACPU_SC_CLK_STAT_hpm_l2_1_clksta_START            (9)
#define SOC_ACPU_SCTRL_ACPU_SC_CLK_STAT_hpm_l2_1_clksta_END              (9)
#define SOC_ACPU_SCTRL_ACPU_SC_CLK_STAT_bypass_cci400_csysreq_sta_START  (10)
#define SOC_ACPU_SCTRL_ACPU_SC_CLK_STAT_bypass_cci400_csysreq_sta_END    (10)
#define SOC_ACPU_SCTRL_ACPU_SC_CLK_STAT_sft_at_s_clksta_START            (11)
#define SOC_ACPU_SCTRL_ACPU_SC_CLK_STAT_sft_at_s_clksta_END              (11)
#define SOC_ACPU_SCTRL_ACPU_SC_CLK_STAT_gic400_clksta_START              (12)
#define SOC_ACPU_SCTRL_ACPU_SC_CLK_STAT_gic400_clksta_END                (12)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_RSTEN_UNION
 �ṹ˵��  : ACPU_SC_RSTEN �Ĵ����ṹ���塣��ַƫ����:0x018����ֵ:0x00000A00�����:32
 �Ĵ���˵��: ACPU��ϵͳ��λʹ�ܼĴ���������Ӧλд1ʹ����Ӧ��λ�źţ������븴λ̬����д0��Ӱ�졣�üĴ���ֻ���ϵ縴λʱ����λ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  srst_aarm_socdbg_rsten : 1;  /* bit[0]    : [0]�������� V8r1�д�������v8r2Ϊreserved */
        unsigned int  srst_aarm_l2_rsten     : 1;  /* bit[1]    : A53 integration0��L2 cache��λ���� */
        unsigned int  reserved_0             : 1;  /* bit[2]    : [2]��������  */
        unsigned int  srst_l2_hpm_rsten      : 1;  /* bit[3]    : A53 integration0��L2cache hpm��λ���� */
        unsigned int  srst_aarm_l2_1_rsten   : 1;  /* bit[4]    : A53 integration1��L2 cache��λ���� */
        unsigned int  srst_l2_hpm_1_rsten    : 1;  /* bit[5]    : A53 integration1��L2cache hpm��λ���� */
        unsigned int  srst_cci400_rsten      : 1;  /* bit[6]    : cci400 ��λ���� */
        unsigned int  srst_gic400_rsten      : 1;  /* bit[7]    : gic400 ��λ���� */
        unsigned int  srst_cluster0_rsten    : 1;  /* bit[8]    : cluster0 ��glue ͬ���߼��ĸ�λ����״̬ */
        unsigned int  srst_cluster1_rsten    : 1;  /* bit[9]    : cluster1 ��glue ͬ���߼��ĸ�λ����״̬������por��atreset��ace��λ���� */
        unsigned int  srst_preset0_rsten     : 1;  /* bit[10]   : cluster0 ��preset ��λ����״̬ */
        unsigned int  srst_preset1_rsten     : 1;  /* bit[11]   : cluster1 ��preset ��λ����״̬ */
        unsigned int  reserved_1             : 20; /* bit[12-31]: 
                                                                  [31:12]��������  */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_RSTEN_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_RSTEN_srst_aarm_socdbg_rsten_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_RSTEN_srst_aarm_socdbg_rsten_END    (0)
#define SOC_ACPU_SCTRL_ACPU_SC_RSTEN_srst_aarm_l2_rsten_START      (1)
#define SOC_ACPU_SCTRL_ACPU_SC_RSTEN_srst_aarm_l2_rsten_END        (1)
#define SOC_ACPU_SCTRL_ACPU_SC_RSTEN_srst_l2_hpm_rsten_START       (3)
#define SOC_ACPU_SCTRL_ACPU_SC_RSTEN_srst_l2_hpm_rsten_END         (3)
#define SOC_ACPU_SCTRL_ACPU_SC_RSTEN_srst_aarm_l2_1_rsten_START    (4)
#define SOC_ACPU_SCTRL_ACPU_SC_RSTEN_srst_aarm_l2_1_rsten_END      (4)
#define SOC_ACPU_SCTRL_ACPU_SC_RSTEN_srst_l2_hpm_1_rsten_START     (5)
#define SOC_ACPU_SCTRL_ACPU_SC_RSTEN_srst_l2_hpm_1_rsten_END       (5)
#define SOC_ACPU_SCTRL_ACPU_SC_RSTEN_srst_cci400_rsten_START       (6)
#define SOC_ACPU_SCTRL_ACPU_SC_RSTEN_srst_cci400_rsten_END         (6)
#define SOC_ACPU_SCTRL_ACPU_SC_RSTEN_srst_gic400_rsten_START       (7)
#define SOC_ACPU_SCTRL_ACPU_SC_RSTEN_srst_gic400_rsten_END         (7)
#define SOC_ACPU_SCTRL_ACPU_SC_RSTEN_srst_cluster0_rsten_START     (8)
#define SOC_ACPU_SCTRL_ACPU_SC_RSTEN_srst_cluster0_rsten_END       (8)
#define SOC_ACPU_SCTRL_ACPU_SC_RSTEN_srst_cluster1_rsten_START     (9)
#define SOC_ACPU_SCTRL_ACPU_SC_RSTEN_srst_cluster1_rsten_END       (9)
#define SOC_ACPU_SCTRL_ACPU_SC_RSTEN_srst_preset0_rsten_START      (10)
#define SOC_ACPU_SCTRL_ACPU_SC_RSTEN_srst_preset0_rsten_END        (10)
#define SOC_ACPU_SCTRL_ACPU_SC_RSTEN_srst_preset1_rsten_START      (11)
#define SOC_ACPU_SCTRL_ACPU_SC_RSTEN_srst_preset1_rsten_END        (11)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_RSTDIS_UNION
 �ṹ˵��  : ACPU_SC_RSTDIS �Ĵ����ṹ���塣��ַƫ����:0x01C����ֵ:0x00000A00�����:32
 �Ĵ���˵��: ACPU��ϵͳ��λ��ֹ�Ĵ��������ڿ��Ƹ��������ܵĸ�λ��ֹ������Ӧλд1��ֹ��Ӧ��������λ�źţ����˳���λ̬����д0��Ӱ�졣�üĴ���ֻ���ϵ縴λʱ����λ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  srst_aarm_socdbg_rstdis : 1;  /* bit[0]    : [0]�������� V8r1�д�������v8r2Ϊreserved */
        unsigned int  srst_aarm_l2_rstdis     : 1;  /* bit[1]    : A53 integration0��L2 cache��λ���� */
        unsigned int  reserved_0              : 1;  /* bit[2]    : [2]��������  */
        unsigned int  srst_l2_hpm_rstdis      : 1;  /* bit[3]    : A53 integration0��L2cache hpm��λ���� */
        unsigned int  srst_aarm_l2_1_rstdis   : 1;  /* bit[4]    : A53 integration1��L2 cache��λ���� */
        unsigned int  srst_l2_hpm_1_rstdis    : 1;  /* bit[5]    : A53 integration1��L2cache hpm��λ���� */
        unsigned int  srst_cci400_rstdis      : 1;  /* bit[6]    : cci400 ��λ���� */
        unsigned int  srst_gic400_rstdis      : 1;  /* bit[7]    : gic400 ��λ���� */
        unsigned int  srst_cluster0_rstdis    : 1;  /* bit[8]    : cluster0 ��glue ͬ���߼��ĸ�λ����״̬ */
        unsigned int  srst_cluster1_rstdis    : 1;  /* bit[9]    : cluster1 ��glue ͬ���߼��ĸ�λ����״̬������por��atreset��ace��λ���� */
        unsigned int  srst_preset0_rstdis     : 1;  /* bit[10]   : cluster0 ��preset ��λ����״̬ */
        unsigned int  srst_preset1_rstdis     : 1;  /* bit[11]   : cluster1 ��preset ��λ����״̬ */
        unsigned int  reserved_1              : 20; /* bit[12-31]: 
                                                                   [31:12]��������  */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_RSTDIS_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_RSTDIS_srst_aarm_socdbg_rstdis_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_RSTDIS_srst_aarm_socdbg_rstdis_END    (0)
#define SOC_ACPU_SCTRL_ACPU_SC_RSTDIS_srst_aarm_l2_rstdis_START      (1)
#define SOC_ACPU_SCTRL_ACPU_SC_RSTDIS_srst_aarm_l2_rstdis_END        (1)
#define SOC_ACPU_SCTRL_ACPU_SC_RSTDIS_srst_l2_hpm_rstdis_START       (3)
#define SOC_ACPU_SCTRL_ACPU_SC_RSTDIS_srst_l2_hpm_rstdis_END         (3)
#define SOC_ACPU_SCTRL_ACPU_SC_RSTDIS_srst_aarm_l2_1_rstdis_START    (4)
#define SOC_ACPU_SCTRL_ACPU_SC_RSTDIS_srst_aarm_l2_1_rstdis_END      (4)
#define SOC_ACPU_SCTRL_ACPU_SC_RSTDIS_srst_l2_hpm_1_rstdis_START     (5)
#define SOC_ACPU_SCTRL_ACPU_SC_RSTDIS_srst_l2_hpm_1_rstdis_END       (5)
#define SOC_ACPU_SCTRL_ACPU_SC_RSTDIS_srst_cci400_rstdis_START       (6)
#define SOC_ACPU_SCTRL_ACPU_SC_RSTDIS_srst_cci400_rstdis_END         (6)
#define SOC_ACPU_SCTRL_ACPU_SC_RSTDIS_srst_gic400_rstdis_START       (7)
#define SOC_ACPU_SCTRL_ACPU_SC_RSTDIS_srst_gic400_rstdis_END         (7)
#define SOC_ACPU_SCTRL_ACPU_SC_RSTDIS_srst_cluster0_rstdis_START     (8)
#define SOC_ACPU_SCTRL_ACPU_SC_RSTDIS_srst_cluster0_rstdis_END       (8)
#define SOC_ACPU_SCTRL_ACPU_SC_RSTDIS_srst_cluster1_rstdis_START     (9)
#define SOC_ACPU_SCTRL_ACPU_SC_RSTDIS_srst_cluster1_rstdis_END       (9)
#define SOC_ACPU_SCTRL_ACPU_SC_RSTDIS_srst_preset0_rstdis_START      (10)
#define SOC_ACPU_SCTRL_ACPU_SC_RSTDIS_srst_preset0_rstdis_END        (10)
#define SOC_ACPU_SCTRL_ACPU_SC_RSTDIS_srst_preset1_rstdis_START      (11)
#define SOC_ACPU_SCTRL_ACPU_SC_RSTDIS_srst_preset1_rstdis_END        (11)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_RST_STAT_UNION
 �ṹ˵��  : ACPU_SC_RST_STAT �Ĵ����ṹ���塣��ַƫ����:0x020����ֵ:0x00000A38�����:32
 �Ĵ���˵��: ACPU��ϵͳ��λ״̬�Ĵ�����0��ʾ��λ��ʹ�ܣ�1��λʹ�ܼ����븴λ̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  srst_aarm_socdbg_rststa : 1;  /* bit[0]    : [0]�������� V8r1�д�������v8r2Ϊreserved  */
        unsigned int  srst_aarm_l2_rststa     : 1;  /* bit[1]    : A53 integration��L2 cache��λ���� */
        unsigned int  reserved_0              : 1;  /* bit[2]    : [2]��������  */
        unsigned int  srst_l2_hpm_rststa      : 1;  /* bit[3]    : A53 integration��L2cache hpm��λ���� */
        unsigned int  srst_aarm_l2_1_rststa   : 1;  /* bit[4]    : A53 integration1��L2 cache��λ���� */
        unsigned int  srst_l2_hpm_1_rststa    : 1;  /* bit[5]    : A53 integration1��L2cache hpm��λ���� */
        unsigned int  srst_cci400_rststa      : 1;  /* bit[6]    : cci400 ��λ���� */
        unsigned int  srst_gic400_rststa      : 1;  /* bit[7]    : gic400 ��λ���� */
        unsigned int  srst_cluster0_rststa    : 1;  /* bit[8]    : cluster0 ��glue ͬ���߼��ĸ�λ����״̬ */
        unsigned int  srst_cluster1_rststa    : 1;  /* bit[9]    : cluster1 ��glue ͬ���߼��ĸ�λ����״̬������por��atreset��ace��λ���� */
        unsigned int  srst_preset0_rststa     : 1;  /* bit[10]   : cluster0 ��preset ��λ����״̬ */
        unsigned int  srst_preset1_rststa     : 1;  /* bit[11]   : cluster1 ��preset ��λ����״̬ */
        unsigned int  reserved_1              : 20; /* bit[12-31]: 
                                                                   [31:8]��������  */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_RST_STAT_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_RST_STAT_srst_aarm_socdbg_rststa_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_RST_STAT_srst_aarm_socdbg_rststa_END    (0)
#define SOC_ACPU_SCTRL_ACPU_SC_RST_STAT_srst_aarm_l2_rststa_START      (1)
#define SOC_ACPU_SCTRL_ACPU_SC_RST_STAT_srst_aarm_l2_rststa_END        (1)
#define SOC_ACPU_SCTRL_ACPU_SC_RST_STAT_srst_l2_hpm_rststa_START       (3)
#define SOC_ACPU_SCTRL_ACPU_SC_RST_STAT_srst_l2_hpm_rststa_END         (3)
#define SOC_ACPU_SCTRL_ACPU_SC_RST_STAT_srst_aarm_l2_1_rststa_START    (4)
#define SOC_ACPU_SCTRL_ACPU_SC_RST_STAT_srst_aarm_l2_1_rststa_END      (4)
#define SOC_ACPU_SCTRL_ACPU_SC_RST_STAT_srst_l2_hpm_1_rststa_START     (5)
#define SOC_ACPU_SCTRL_ACPU_SC_RST_STAT_srst_l2_hpm_1_rststa_END       (5)
#define SOC_ACPU_SCTRL_ACPU_SC_RST_STAT_srst_cci400_rststa_START       (6)
#define SOC_ACPU_SCTRL_ACPU_SC_RST_STAT_srst_cci400_rststa_END         (6)
#define SOC_ACPU_SCTRL_ACPU_SC_RST_STAT_srst_gic400_rststa_START       (7)
#define SOC_ACPU_SCTRL_ACPU_SC_RST_STAT_srst_gic400_rststa_END         (7)
#define SOC_ACPU_SCTRL_ACPU_SC_RST_STAT_srst_cluster0_rststa_START     (8)
#define SOC_ACPU_SCTRL_ACPU_SC_RST_STAT_srst_cluster0_rststa_END       (8)
#define SOC_ACPU_SCTRL_ACPU_SC_RST_STAT_srst_cluster1_rststa_START     (9)
#define SOC_ACPU_SCTRL_ACPU_SC_RST_STAT_srst_cluster1_rststa_END       (9)
#define SOC_ACPU_SCTRL_ACPU_SC_RST_STAT_srst_preset0_rststa_START      (10)
#define SOC_ACPU_SCTRL_ACPU_SC_RST_STAT_srst_preset0_rststa_END        (10)
#define SOC_ACPU_SCTRL_ACPU_SC_RST_STAT_srst_preset1_rststa_START      (11)
#define SOC_ACPU_SCTRL_ACPU_SC_RST_STAT_srst_preset1_rststa_END        (11)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CLKCFG8BIT_UNION
 �ṹ˵��  : ACPU_SC_CLKCFG8BIT �Ĵ����ṹ���塣��ַƫ����:0x024����ֵ:0x0000070F�����:32
 �Ĵ���˵��: AARM�ڲ���Ƶ�����üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cpuext_pclkdbg_div : 5;  /* bit[0-4]  : [4:0]pclkdbgʱ�ӷ�Ƶ���� */
        unsigned int  reserved_0         : 3;  /* bit[5-7]  : [7:5]���� */
        unsigned int  cpuext_atclk_div   : 4;  /* bit[8-11] : [11:8]atb�첽��slaveʱ�ӵķ�Ƶ������ */
        unsigned int  reserved_1         : 4;  /* bit[12-15]: [15:12]������ */
        unsigned int  reserved_2         : 16; /* bit[16-31]: [31:16]reserved */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CLKCFG8BIT_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CLKCFG8BIT_cpuext_pclkdbg_div_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CLKCFG8BIT_cpuext_pclkdbg_div_END    (4)
#define SOC_ACPU_SCTRL_ACPU_SC_CLKCFG8BIT_cpuext_atclk_div_START    (8)
#define SOC_ACPU_SCTRL_ACPU_SC_CLKCFG8BIT_cpuext_atclk_div_END      (11)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_PDBGUP_MBIST_UNION
 �ṹ˵��  : ACPU_SC_PDBGUP_MBIST �Ĵ����ṹ���塣��ַƫ����:0x02C����ֵ:0x00000001�����:32
 �Ĵ���˵��: AARM�ڲ�PDBG��MBIST���üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  dbgpwrup        : 4;  /* bit[0-3]  : [3:0]CA53 CPU0~3��DBGPWRDUP */
        unsigned int  func_mbist_en_i : 1;  /* bit[4]    : V8r1�д�������v8r2Ϊreserved  */
        unsigned int  reserved_0      : 3;  /* bit[5-7]  : ���� */
        unsigned int  dbgpwrup1       : 4;  /* bit[8-11] : [11:8]CA53 CPU0~3��DBGPWRDUP */
        unsigned int  reserved_1      : 20; /* bit[12-31]: [31:12]reserved */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_PDBGUP_MBIST_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_PDBGUP_MBIST_dbgpwrup_START         (0)
#define SOC_ACPU_SCTRL_ACPU_SC_PDBGUP_MBIST_dbgpwrup_END           (3)
#define SOC_ACPU_SCTRL_ACPU_SC_PDBGUP_MBIST_func_mbist_en_i_START  (4)
#define SOC_ACPU_SCTRL_ACPU_SC_PDBGUP_MBIST_func_mbist_en_i_END    (4)
#define SOC_ACPU_SCTRL_ACPU_SC_PDBGUP_MBIST_dbgpwrup1_START        (8)
#define SOC_ACPU_SCTRL_ACPU_SC_PDBGUP_MBIST_dbgpwrup1_END          (11)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_PD_SNOOP_CNT_UNION
 �ṹ˵��  : ACPU_SC_PD_SNOOP_CNT �Ĵ����ṹ���塣��ַƫ����:0x034����ֵ:0x00000000�����:32
 �Ĵ���˵��: PD SNOOP CNT״̬�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  a53_0_snoop_cnt : 6;  /* bit[0-5]  : pd snoop cnt��״̬λ */
        unsigned int  reserved_0      : 2;  /* bit[6-7]  : ���� */
        unsigned int  a53_1_snoop_cnt : 6;  /* bit[8-13] : pd snoop cnt��״̬λ */
        unsigned int  reserved_1      : 18; /* bit[14-31]: ���� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_PD_SNOOP_CNT_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_PD_SNOOP_CNT_a53_0_snoop_cnt_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_PD_SNOOP_CNT_a53_0_snoop_cnt_END    (5)
#define SOC_ACPU_SCTRL_ACPU_SC_PD_SNOOP_CNT_a53_1_snoop_cnt_START  (8)
#define SOC_ACPU_SCTRL_ACPU_SC_PD_SNOOP_CNT_a53_1_snoop_cnt_END    (13)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_VD_CFG_H_STAT_UNION
 �ṹ˵��  : ACPU_SC_VD_CFG_H_STAT �Ĵ����ṹ���塣��ַƫ����:0x038����ֵ:0x00000000�����:32
 �Ĵ���˵��: Voltage Detect CFG״̬�Ĵ���LS��λ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved : 32; /* bit[0-31]: [31:0]reserved */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_VD_CFG_H_STAT_UNION;
#endif


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_VD_HPM_DLY_MIN_STAT_UNION
 �ṹ˵��  : ACPU_SC_VD_HPM_DLY_MIN_STAT �Ĵ����ṹ���塣��ַƫ����:0x03C����ֵ:0x00000000�����:32
 �Ĵ���˵��: Voltage Detect DLY_MIN�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  hpm_dly_min : 13; /* bit[0-12] :  */
        unsigned int  reserved    : 19; /* bit[13-31]: [31:13]:���� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_VD_HPM_DLY_MIN_STAT_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_VD_HPM_DLY_MIN_STAT_hpm_dly_min_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_VD_HPM_DLY_MIN_STAT_hpm_dly_min_END    (12)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_VD_CLK_DIS_CNT_INT_STAT_UNION
 �ṹ˵��  : ACPU_SC_VD_CLK_DIS_CNT_INT_STAT �Ĵ����ṹ���塣��ַƫ����:0x040����ֵ:0x00000000�����:32
 �Ĵ���˵��: Voltage Detect CLK_DIS_CNT�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  clk_dis_cnt_int : 24; /* bit[0-23] :  */
        unsigned int  reserved        : 8;  /* bit[24-31]: [31:24]:���� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_VD_CLK_DIS_CNT_INT_STAT_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_VD_CLK_DIS_CNT_INT_STAT_clk_dis_cnt_int_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_VD_CLK_DIS_CNT_INT_STAT_clk_dis_cnt_int_END    (23)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_VD_CLK_DIS_CNT_DIF_STAT_UNION
 �ṹ˵��  : ACPU_SC_VD_CLK_DIS_CNT_DIF_STAT �Ĵ����ṹ���塣��ַƫ����:0x044����ֵ:0x00000000�����:32
 �Ĵ���˵��: Voltage Detect CLK_DIFF_MAX�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  clk_dis_cnt_dif : 24; /* bit[0-23] :  */
        unsigned int  reserved        : 8;  /* bit[24-31]: [31:24]:���� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_VD_CLK_DIS_CNT_DIF_STAT_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_VD_CLK_DIS_CNT_DIF_STAT_clk_dis_cnt_dif_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_VD_CLK_DIS_CNT_DIF_STAT_clk_dis_cnt_dif_END    (23)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_VD_DLY_DIFF_MAX_STAT_UNION
 �ṹ˵��  : ACPU_SC_VD_DLY_DIFF_MAX_STAT �Ĵ����ṹ���塣��ַƫ����:0x048����ֵ:0x00000000�����:32
 �Ĵ���˵��: Voltage Detect DLY_DIFF_AND״̬�Ĵ���LS��λ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  dly_diff_max : 6;  /* bit[0-5] :  */
        unsigned int  reserved     : 26; /* bit[6-31]: [31:6]:���� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_VD_DLY_DIFF_MAX_STAT_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_VD_DLY_DIFF_MAX_STAT_dly_diff_max_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_VD_DLY_DIFF_MAX_STAT_dly_diff_max_END    (5)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_VD_DLY_ABS_MIN_STAT_UNION
 �ṹ˵��  : ACPU_SC_VD_DLY_ABS_MIN_STAT �Ĵ����ṹ���塣��ַƫ����:0x04C����ֵ:0x00000000�����:32
 �Ĵ���˵��: Voltage Detect DLY_ABS_OR״̬�Ĵ���LS��λ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  dly_abs_min : 32; /* bit[0-31]: [31:0]Voltage Detect��dly_abs_min״ָ̬ʾ */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_VD_DLY_ABS_MIN_STAT_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_VD_DLY_ABS_MIN_STAT_dly_abs_min_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_VD_DLY_ABS_MIN_STAT_dly_abs_min_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_VD_DLY_ABS_MAX_STAT_UNION
 �ṹ˵��  : ACPU_SC_VD_DLY_ABS_MAX_STAT �Ĵ����ṹ���塣��ַƫ����:0x050����ֵ:0x00000000�����:32
 �Ĵ���˵��: Voltage Detect DLY_ABS_AND״̬�Ĵ���LS��λ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  dly_abs_max : 32; /* bit[0-31]: [31:0]Voltage Detect��dly_abs_max״ָ̬ʾ */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_VD_DLY_ABS_MAX_STAT_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_VD_DLY_ABS_MAX_STAT_dly_abs_max_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_VD_DLY_ABS_MAX_STAT_dly_abs_max_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_VD_CTRL_UNION
 �ṹ˵��  : ACPU_SC_VD_CTRL �Ĵ����ṹ���塣��ַƫ����:0x054����ֵ:0x30000000�����:32
 �Ĵ���˵��: Voltage Detect���üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  tune_en_dif      : 1;  /* bit[0]    : ��ּ���ѹģ��ʹ�� */
        unsigned int  tune             : 6;  /* bit[1-6]  : delay chain��ѡȡ�ź� */
        unsigned int  calibrate_en_dif : 1;  /* bit[7]    : ��ּ���ѹģ�����У׼ʹ�� */
        unsigned int  calibrate_en_ini : 1;  /* bit[8]    : ���ּ���ѹģ�����У׼ʹ�� */
        unsigned int  clk_dis_cnt_clr  : 1;  /* bit[9]    : clk_dis���������ʹ��
                                                            0:��ʹ��
                                                            1:ʹ�� */
        unsigned int  clk_dis_cnt_en   : 1;  /* bit[10]   : clk_dis������ʹ��
                                                            0:��ʹ��
                                                            1:ʹ�� */
        unsigned int  tune_en_int      : 1;  /* bit[11]   : ���ּ���ѹģ��ʹ�� */
        unsigned int  shift_table0     : 4;  /* bit[12-15]: shift_table0[3:0] */
        unsigned int  shift_table1     : 4;  /* bit[16-19]: shift_table1[3:0] */
        unsigned int  shift_table2     : 4;  /* bit[20-23]: shift_table2[3:0] */
        unsigned int  shift_table3     : 4;  /* bit[24-27]: shift_table3[3:0] */
        unsigned int  force_clk_en     : 1;  /* bit[28]   : ǿ��ʱ�Ӵ򿪣�����VDģ�����
                                                            0: ��ʹ��
                                                            1: ǿ��ʱ�Ӵ� */
        unsigned int  div_en_dif       : 1;  /* bit[29]   : ����ѹ��������ʱ�ӵĲ���
                                                            0: ����ʱ�ӹر�
                                                            1: ���2��Ƶʱ�� */
        unsigned int  reserved         : 2;  /* bit[30-31]: [31:30]���� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_VD_CTRL_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_VD_CTRL_tune_en_dif_START       (0)
#define SOC_ACPU_SCTRL_ACPU_SC_VD_CTRL_tune_en_dif_END         (0)
#define SOC_ACPU_SCTRL_ACPU_SC_VD_CTRL_tune_START              (1)
#define SOC_ACPU_SCTRL_ACPU_SC_VD_CTRL_tune_END                (6)
#define SOC_ACPU_SCTRL_ACPU_SC_VD_CTRL_calibrate_en_dif_START  (7)
#define SOC_ACPU_SCTRL_ACPU_SC_VD_CTRL_calibrate_en_dif_END    (7)
#define SOC_ACPU_SCTRL_ACPU_SC_VD_CTRL_calibrate_en_ini_START  (8)
#define SOC_ACPU_SCTRL_ACPU_SC_VD_CTRL_calibrate_en_ini_END    (8)
#define SOC_ACPU_SCTRL_ACPU_SC_VD_CTRL_clk_dis_cnt_clr_START   (9)
#define SOC_ACPU_SCTRL_ACPU_SC_VD_CTRL_clk_dis_cnt_clr_END     (9)
#define SOC_ACPU_SCTRL_ACPU_SC_VD_CTRL_clk_dis_cnt_en_START    (10)
#define SOC_ACPU_SCTRL_ACPU_SC_VD_CTRL_clk_dis_cnt_en_END      (10)
#define SOC_ACPU_SCTRL_ACPU_SC_VD_CTRL_tune_en_int_START       (11)
#define SOC_ACPU_SCTRL_ACPU_SC_VD_CTRL_tune_en_int_END         (11)
#define SOC_ACPU_SCTRL_ACPU_SC_VD_CTRL_shift_table0_START      (12)
#define SOC_ACPU_SCTRL_ACPU_SC_VD_CTRL_shift_table0_END        (15)
#define SOC_ACPU_SCTRL_ACPU_SC_VD_CTRL_shift_table1_START      (16)
#define SOC_ACPU_SCTRL_ACPU_SC_VD_CTRL_shift_table1_END        (19)
#define SOC_ACPU_SCTRL_ACPU_SC_VD_CTRL_shift_table2_START      (20)
#define SOC_ACPU_SCTRL_ACPU_SC_VD_CTRL_shift_table2_END        (23)
#define SOC_ACPU_SCTRL_ACPU_SC_VD_CTRL_shift_table3_START      (24)
#define SOC_ACPU_SCTRL_ACPU_SC_VD_CTRL_shift_table3_END        (27)
#define SOC_ACPU_SCTRL_ACPU_SC_VD_CTRL_force_clk_en_START      (28)
#define SOC_ACPU_SCTRL_ACPU_SC_VD_CTRL_force_clk_en_END        (28)
#define SOC_ACPU_SCTRL_ACPU_SC_VD_CTRL_div_en_dif_START        (29)
#define SOC_ACPU_SCTRL_ACPU_SC_VD_CTRL_div_en_dif_END          (29)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_VD_MASK_PATTERN_CTRL_UNION
 �ṹ˵��  : ACPU_SC_VD_MASK_PATTERN_CTRL �Ĵ����ṹ���塣��ַƫ����:0x058����ֵ:0x00000000�����:32
 �Ĵ���˵��: Voltage Detect mask_pattern���á�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mask_pattern : 32; /* bit[0-31]: [31:0]mask_pattern ������
                                                       0�������delay cell�����ֵ
                                                       1�����delay cell�����ֵ */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_VD_MASK_PATTERN_CTRL_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_VD_MASK_PATTERN_CTRL_mask_pattern_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_VD_MASK_PATTERN_CTRL_mask_pattern_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_VD_DLY_FIXED_CTRL_UNION
 �ṹ˵��  : ACPU_SC_VD_DLY_FIXED_CTRL �Ĵ����ṹ���塣��ַƫ����:0x05C����ֵ:0x00000000�����:32
 �Ĵ���˵��: Voltage Detect dly_fixed���á�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  dly_fixed : 32; /* bit[0-31]: [31:0]���Ե���ֵ������ */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_VD_DLY_FIXED_CTRL_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_VD_DLY_FIXED_CTRL_dly_fixed_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_VD_DLY_FIXED_CTRL_dly_fixed_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_VD_DLY_TABLE0_CTRL_UNION
 �ṹ˵��  : ACPU_SC_VD_DLY_TABLE0_CTRL �Ĵ����ṹ���塣��ַƫ����:0x060����ֵ:0x00000000�����:32
 �Ĵ���˵��: Voltage Detect dly_table0���á�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  dly_table0 : 32; /* bit[0-31]: [31:0]ѡ�������ֵ������ */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_VD_DLY_TABLE0_CTRL_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_VD_DLY_TABLE0_CTRL_dly_table0_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_VD_DLY_TABLE0_CTRL_dly_table0_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_VD_DLY_TABLE1_CTRL_UNION
 �ṹ˵��  : ACPU_SC_VD_DLY_TABLE1_CTRL �Ĵ����ṹ���塣��ַƫ����:0x064����ֵ:0x00000000�����:32
 �Ĵ���˵��: Voltage Detect dly_table1���á�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  dly_table1 : 32; /* bit[0-31]: [31:0]ѡ�������ֵ������ */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_VD_DLY_TABLE1_CTRL_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_VD_DLY_TABLE1_CTRL_dly_table1_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_VD_DLY_TABLE1_CTRL_dly_table1_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_VD_DLY_TABLE2_CTRL_UNION
 �ṹ˵��  : ACPU_SC_VD_DLY_TABLE2_CTRL �Ĵ����ṹ���塣��ַƫ����:0x068����ֵ:0x00000000�����:32
 �Ĵ���˵��: Voltage Detect dly_table2���á�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  dly_table2 : 32; /* bit[0-31]: [31:0]ѡ�������ֵ������ */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_VD_DLY_TABLE2_CTRL_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_VD_DLY_TABLE2_CTRL_dly_table2_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_VD_DLY_TABLE2_CTRL_dly_table2_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_VD_HPM_CTRL_UNION
 �ṹ˵��  : ACPU_SC_VD_HPM_CTRL �Ĵ����ṹ���塣��ַƫ����:0x06C����ֵ:0x000FFF7F�����:32
 �Ĵ���˵��: Voltage Detect OSC ��Ƶ���á�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  hpm_osc_div : 8;  /* bit[0-7]  : ���ּ���ѹģ����ʱ��ʹ�������� */
        unsigned int  hpm_dly_exp : 13; /* bit[8-20] : ���ּ���ѹģ���ѹ�ж����ޣ�����ʱ�ܻ���С�ڸ�ֵʱ��ʱ�ӻ���ж���Ƶ */
        unsigned int  reserved    : 11; /* bit[21-31]: [31:21]:���� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_VD_HPM_CTRL_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_VD_HPM_CTRL_hpm_osc_div_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_VD_HPM_CTRL_hpm_osc_div_END    (7)
#define SOC_ACPU_SCTRL_ACPU_SC_VD_HPM_CTRL_hpm_dly_exp_START  (8)
#define SOC_ACPU_SCTRL_ACPU_SC_VD_HPM_CTRL_hpm_dly_exp_END    (20)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_L2_DATARAM_LATENCY_UNION
 �ṹ˵��  : ACPU_SC_L2_DATARAM_LATENCY �Ĵ����ṹ���塣��ַƫ����:0x070����ֵ:0x00000011�����:32
 �Ĵ���˵��: L2 cache data ram latency���üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  l2_dataram_latency        : 1;  /* bit[0]   : L2 cache��дlatency����
                                                                    0: д1��
                                                                    1: д2�� */
        unsigned int  l2_dataram_latency_bypass : 1;  /* bit[1]   : V8r1�д�������v8r2Ϊreserved  */
        unsigned int  reserved_0                : 2;  /* bit[2-3] : ���� */
        unsigned int  l2_output_lat_sel         : 1;  /* bit[4]   : L2 cache�Ķ�latency����
                                                                    0: ��2��
                                                                    1: ��3�� */
        unsigned int  reserved_1                : 27; /* bit[5-31]: [31:5]������ */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_L2_DATARAM_LATENCY_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_L2_DATARAM_LATENCY_l2_dataram_latency_START         (0)
#define SOC_ACPU_SCTRL_ACPU_SC_L2_DATARAM_LATENCY_l2_dataram_latency_END           (0)
#define SOC_ACPU_SCTRL_ACPU_SC_L2_DATARAM_LATENCY_l2_dataram_latency_bypass_START  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_L2_DATARAM_LATENCY_l2_dataram_latency_bypass_END    (1)
#define SOC_ACPU_SCTRL_ACPU_SC_L2_DATARAM_LATENCY_l2_output_lat_sel_START          (4)
#define SOC_ACPU_SCTRL_ACPU_SC_L2_DATARAM_LATENCY_l2_output_lat_sel_END            (4)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_DEC_LOCK_STA_UNION
 �ṹ˵��  : ACPU_SC_DEC_LOCK_STA �Ĵ����ṹ���塣��ַƫ����:0x074����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳDEC���ߵ�LOCK״ָ̬ʾ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  dlock_irq : 1;  /* bit[0]    : LOCK ָʾ */
        unsigned int  dlock_wr  : 1;  /* bit[1]    : LOCK wrָʾ */
        unsigned int  reserved_0: 10; /* bit[2-11] : ���� */
        unsigned int  dlock_slv : 2;  /* bit[12-13]: LOCK SLAVEָʾ */
        unsigned int  reserved_1: 2;  /* bit[14-15]: ���� */
        unsigned int  dlock_mst : 1;  /* bit[16]   : LOCK masterָʾ */
        unsigned int  reserved_2: 3;  /* bit[17-19]: ���� */
        unsigned int  dlock_id  : 9;  /* bit[20-28]: LOCK IDָʾ */
        unsigned int  reserved_3: 3;  /* bit[29-31]: [31:29]������ */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_DEC_LOCK_STA_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_DEC_LOCK_STA_dlock_irq_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_DEC_LOCK_STA_dlock_irq_END    (0)
#define SOC_ACPU_SCTRL_ACPU_SC_DEC_LOCK_STA_dlock_wr_START   (1)
#define SOC_ACPU_SCTRL_ACPU_SC_DEC_LOCK_STA_dlock_wr_END     (1)
#define SOC_ACPU_SCTRL_ACPU_SC_DEC_LOCK_STA_dlock_slv_START  (12)
#define SOC_ACPU_SCTRL_ACPU_SC_DEC_LOCK_STA_dlock_slv_END    (13)
#define SOC_ACPU_SCTRL_ACPU_SC_DEC_LOCK_STA_dlock_mst_START  (16)
#define SOC_ACPU_SCTRL_ACPU_SC_DEC_LOCK_STA_dlock_mst_END    (16)
#define SOC_ACPU_SCTRL_ACPU_SC_DEC_LOCK_STA_dlock_id_START   (20)
#define SOC_ACPU_SCTRL_ACPU_SC_DEC_LOCK_STA_dlock_id_END     (28)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_EVENT_BYPASS_UNION
 �ṹ˵��  : ACPU_SC_EVENT_BYPASS �Ĵ����ṹ���塣��ַƫ����:0x080����ֵ:0x00000005�����:32
 �Ĵ���˵��: ACPU��ϵͳEVENT BYPASS���ơ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cpu_bypass_eventi : 2;  /* bit[0-1] : bypass eventi����
                                                            0: bypass eventi �㲥 
                                                            1: ʹ��eveni �㲥 */
        unsigned int  cpu_bypass_evento : 2;  /* bit[2-3] : bypass evento����
                                                            0: bypass evento �㲥 
                                                            1: ʹ��evento �㲥 */
        unsigned int  reserved          : 28; /* bit[4-31]: ���� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_EVENT_BYPASS_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_EVENT_BYPASS_cpu_bypass_eventi_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_EVENT_BYPASS_cpu_bypass_eventi_END    (1)
#define SOC_ACPU_SCTRL_ACPU_SC_EVENT_BYPASS_cpu_bypass_evento_START  (2)
#define SOC_ACPU_SCTRL_ACPU_SC_EVENT_BYPASS_cpu_bypass_evento_END    (3)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CCI400_CTRL_UNION
 �ṹ˵��  : ACPU_SC_CCI400_CTRL �Ĵ����ṹ���塣��ַƫ����:0x084����ֵ:0x00000F00�����:32
 �Ĵ���˵��: ACPU��ϵͳCCI 400�����á�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cci400_ecorevnum       : 4;  /* bit[0-3]  : ����ECOʱ��CCI�ڲ��Ĵ�������ECO�汾���м�¼�� */
        unsigned int  cci400_ariusres3       : 1;  /* bit[4]    : AR channel��USER */
        unsigned int  cci400_awiuser3        : 1;  /* bit[5]    : AW channel��USER */
        unsigned int  cci400_ariusres4       : 1;  /* bit[6]    : AR channel��USER */
        unsigned int  cci400_awiuser4        : 1;  /* bit[7]    : AW channel��USER */
        unsigned int  cci400_cactive_cnt_cfg : 8;  /* bit[8-15] : ����cci 400��active���Ͷ����ĺ�����cci400�Ķ�̬�ſ� */
        unsigned int  reserved               : 16; /* bit[16-31]: reserved */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CCI400_CTRL_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CCI400_CTRL_cci400_ecorevnum_START        (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CCI400_CTRL_cci400_ecorevnum_END          (3)
#define SOC_ACPU_SCTRL_ACPU_SC_CCI400_CTRL_cci400_ariusres3_START        (4)
#define SOC_ACPU_SCTRL_ACPU_SC_CCI400_CTRL_cci400_ariusres3_END          (4)
#define SOC_ACPU_SCTRL_ACPU_SC_CCI400_CTRL_cci400_awiuser3_START         (5)
#define SOC_ACPU_SCTRL_ACPU_SC_CCI400_CTRL_cci400_awiuser3_END           (5)
#define SOC_ACPU_SCTRL_ACPU_SC_CCI400_CTRL_cci400_ariusres4_START        (6)
#define SOC_ACPU_SCTRL_ACPU_SC_CCI400_CTRL_cci400_ariusres4_END          (6)
#define SOC_ACPU_SCTRL_ACPU_SC_CCI400_CTRL_cci400_awiuser4_START         (7)
#define SOC_ACPU_SCTRL_ACPU_SC_CCI400_CTRL_cci400_awiuser4_END           (7)
#define SOC_ACPU_SCTRL_ACPU_SC_CCI400_CTRL_cci400_cactive_cnt_cfg_START  (8)
#define SOC_ACPU_SCTRL_ACPU_SC_CCI400_CTRL_cci400_cactive_cnt_cfg_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_A53_CLUSTER_MTCMOS_EN_UNION
 �ṹ˵��  : ACPU_SC_A53_CLUSTER_MTCMOS_EN �Ĵ����ṹ���塣��ַƫ����:0x088����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳ�ϵ�����Ĵ��������ڸ������������ϵ������źţ�����Ӧλд1�����ϵ�����д0��Ӱ�졣
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pw_mtcmos_en_a53_0_en  : 1;  /* bit[0]   : [0] ��A53_0��cpu0~3�����߼��µ��� */
        unsigned int  pw_mtcmos_en_a53_1_en  : 1;  /* bit[1]   : [1] ��A53_1��cpu0~3�����߼��µ��� */
        unsigned int  pw_mtcmos_ldatram0_en  : 1;  /* bit[2]   : [2] ��A53_0��L2 data ram �����߼��µ��� */
        unsigned int  pw_mtcmos_l2datram1_en : 1;  /* bit[3]   : [3] ��A53_0��L2 data ram �����߼��µ��� */
        unsigned int  reserved               : 28; /* bit[4-31]: ���� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_A53_CLUSTER_MTCMOS_EN_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_A53_CLUSTER_MTCMOS_EN_pw_mtcmos_en_a53_0_en_START   (0)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_CLUSTER_MTCMOS_EN_pw_mtcmos_en_a53_0_en_END     (0)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_CLUSTER_MTCMOS_EN_pw_mtcmos_en_a53_1_en_START   (1)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_CLUSTER_MTCMOS_EN_pw_mtcmos_en_a53_1_en_END     (1)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_CLUSTER_MTCMOS_EN_pw_mtcmos_ldatram0_en_START   (2)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_CLUSTER_MTCMOS_EN_pw_mtcmos_ldatram0_en_END     (2)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_CLUSTER_MTCMOS_EN_pw_mtcmos_l2datram1_en_START  (3)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_CLUSTER_MTCMOS_EN_pw_mtcmos_l2datram1_en_END    (3)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_A53_CLUSTER_MTCMOS_DIS_UNION
 �ṹ˵��  : ACPU_SC_A53_CLUSTER_MTCMOS_DIS �Ĵ����ṹ���塣��ַƫ����:0x08C����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳ�ϵ�����Ĵ��������ڸ������������ϵ������źţ�����Ӧλд1�����ϵ�����д0��Ӱ�졣
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pw_mtcmos_en_a53_0_dis  : 1;  /* bit[0]   : [0] ��A53_0��cpu0~3�����߼��µ��� */
        unsigned int  pw_mtcmos_en_a53_1_dis  : 1;  /* bit[1]   : [1] ��A53_1��cpu0~3�����߼��µ��� */
        unsigned int  pw_mtcmos_ldatram0_dis  : 1;  /* bit[2]   : [2] ��A53_0��L2 data ram �����߼��µ��� */
        unsigned int  pw_mtcmos_l2datram1_dis : 1;  /* bit[3]   : [3] ��A53_0��L2 data ram �����߼��µ��� */
        unsigned int  reserved                : 28; /* bit[4-31]: ���� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_A53_CLUSTER_MTCMOS_DIS_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_A53_CLUSTER_MTCMOS_DIS_pw_mtcmos_en_a53_0_dis_START   (0)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_CLUSTER_MTCMOS_DIS_pw_mtcmos_en_a53_0_dis_END     (0)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_CLUSTER_MTCMOS_DIS_pw_mtcmos_en_a53_1_dis_START   (1)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_CLUSTER_MTCMOS_DIS_pw_mtcmos_en_a53_1_dis_END     (1)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_CLUSTER_MTCMOS_DIS_pw_mtcmos_ldatram0_dis_START   (2)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_CLUSTER_MTCMOS_DIS_pw_mtcmos_ldatram0_dis_END     (2)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_CLUSTER_MTCMOS_DIS_pw_mtcmos_l2datram1_dis_START  (3)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_CLUSTER_MTCMOS_DIS_pw_mtcmos_l2datram1_dis_END    (3)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_A53_CLUSTER_MTCMOS_STA_UNION
 �ṹ˵��  : ACPU_SC_A53_CLUSTER_MTCMOS_STA �Ĵ����ṹ���塣��ַƫ����:0x090����ֵ:0x00000005�����:32
 �Ĵ���˵��: ACPU��ϵͳ�ϵ�����Ĵ��������ڸ�������״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pw_mtcmos_en_a53_0_sta  : 1;  /* bit[0]   : [0] ��A53_0��cpu0~3�����߼��µ��� */
        unsigned int  pw_mtcmos_en_a53_1_sta  : 1;  /* bit[1]   : [1] ��A53_1��cpu0~3�����߼��µ��� */
        unsigned int  pw_mtcmos_l2datram0_sta : 1;  /* bit[2]   : [2] ��A53_0��L2 data ram �����߼��µ��� */
        unsigned int  pw_mtcmos_l2datram1_sta : 1;  /* bit[3]   : [3] ��A53_0��L2 data ram �����߼��µ��� */
        unsigned int  reserved                : 28; /* bit[4-31]: ���� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_A53_CLUSTER_MTCMOS_STA_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_A53_CLUSTER_MTCMOS_STA_pw_mtcmos_en_a53_0_sta_START   (0)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_CLUSTER_MTCMOS_STA_pw_mtcmos_en_a53_0_sta_END     (0)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_CLUSTER_MTCMOS_STA_pw_mtcmos_en_a53_1_sta_START   (1)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_CLUSTER_MTCMOS_STA_pw_mtcmos_en_a53_1_sta_END     (1)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_CLUSTER_MTCMOS_STA_pw_mtcmos_l2datram0_sta_START  (2)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_CLUSTER_MTCMOS_STA_pw_mtcmos_l2datram0_sta_END    (2)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_CLUSTER_MTCMOS_STA_pw_mtcmos_l2datram1_sta_START  (3)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_CLUSTER_MTCMOS_STA_pw_mtcmos_l2datram1_sta_END    (3)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_A53_CLUSTER_MTCMOS_ACK_STAT_UNION
 �ṹ˵��  : ACPU_SC_A53_CLUSTER_MTCMOS_ACK_STAT �Ĵ����ṹ���塣��ַƫ����:0x094����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳ�ϵ練����ѯ�Ĵ��������ڲ�ѯ�������������ϵ������źź��Ƿ񷵻�ACK������ӦλΪ1��ʾ�����µ磬Ϊ0��ʾ������
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pw_mtcmos_acksta_a53_0 : 1;  /* bit[0]   : [0] ��A53_0��cpu0~3�����߼��µ���mtcmos��ready */
        unsigned int  pw_mtcmos_acksta_a53_1 : 1;  /* bit[1]   : [1] ��A53_1��cpu0~3�����߼��µ���mtcmos��ready */
        unsigned int  reserved_0             : 1;  /* bit[2]   : [2] ��A53_0��L2 data ram mtcmos��ready */
        unsigned int  reserved_1             : 1;  /* bit[3]   : [3] ��A53_1��L2 data ram mtcmos��ready */
        unsigned int  reserved_2             : 28; /* bit[4-31]: ���� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_A53_CLUSTER_MTCMOS_ACK_STAT_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_A53_CLUSTER_MTCMOS_ACK_STAT_pw_mtcmos_acksta_a53_0_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_CLUSTER_MTCMOS_ACK_STAT_pw_mtcmos_acksta_a53_0_END    (0)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_CLUSTER_MTCMOS_ACK_STAT_pw_mtcmos_acksta_a53_1_START  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_CLUSTER_MTCMOS_ACK_STAT_pw_mtcmos_acksta_a53_1_END    (1)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_A53_CLUSTER_ISO_EN_UNION
 �ṹ˵��  : ACPU_SC_A53_CLUSTER_ISO_EN �Ĵ����ṹ���塣��ַƫ����:0x098����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳA53 cluster ISOʹ�ܼĴ��������ڸ������������ϵ������źţ�����Ӧλд1�����ϵ�����д0��Ӱ�졣
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pw_iso_a53_0_en : 1;  /* bit[0]   : [0] ��A53_0��cpu0~3�����߼��µ���������mbist controller */
        unsigned int  pw_iso_a53_1_en : 1;  /* bit[1]   : [1] ��A53_1��cpu0~3�����߼��µ���������mbist controller */
        unsigned int  reserved        : 30; /* bit[2-31]: ���� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_A53_CLUSTER_ISO_EN_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_A53_CLUSTER_ISO_EN_pw_iso_a53_0_en_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_CLUSTER_ISO_EN_pw_iso_a53_0_en_END    (0)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_CLUSTER_ISO_EN_pw_iso_a53_1_en_START  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_CLUSTER_ISO_EN_pw_iso_a53_1_en_END    (1)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_A53_CLUSTER_ISO_DIS_UNION
 �ṹ˵��  : ACPU_SC_A53_CLUSTER_ISO_DIS �Ĵ����ṹ���塣��ַƫ����:0x09C����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳA53 Cluster ISOʹ�ܼĴ��������ڸ������������ϵ������źţ�����Ӧλд1�����ϵ�����д0��Ӱ�졣
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pw_iso_a53_0_dis : 1;  /* bit[0]   : [0] ��A53_0��cpu0~3�����߼��µ���������mbist controller */
        unsigned int  pw_iso_a53_1_dis : 1;  /* bit[1]   : [1] ��A53_1��cpu0~3�����߼��µ���������mbist controller */
        unsigned int  reserved         : 30; /* bit[2-31]: ���� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_A53_CLUSTER_ISO_DIS_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_A53_CLUSTER_ISO_DIS_pw_iso_a53_0_dis_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_CLUSTER_ISO_DIS_pw_iso_a53_0_dis_END    (0)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_CLUSTER_ISO_DIS_pw_iso_a53_1_dis_START  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_CLUSTER_ISO_DIS_pw_iso_a53_1_dis_END    (1)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_A53_CLUSTER_ISO_STA_UNION
 �ṹ˵��  : ACPU_SC_A53_CLUSTER_ISO_STA �Ĵ����ṹ���塣��ַƫ����:0x0A0����ֵ:0x00000003�����:32
 �Ĵ���˵��: ACPU��ϵͳA53 Cluster ISO״̬��ѯ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pw_iso_a53_0_sta : 1;  /* bit[0]   : [0] ��A53_0��cpu0~3�����߼��µ���������mbist controller */
        unsigned int  pw_iso_a53_1_sta : 1;  /* bit[1]   : [1] ��A53_0��cpu0~3�����߼��µ���������mbist controller */
        unsigned int  reserved         : 30; /* bit[2-31]: ���� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_A53_CLUSTER_ISO_STA_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_A53_CLUSTER_ISO_STA_pw_iso_a53_0_sta_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_CLUSTER_ISO_STA_pw_iso_a53_0_sta_END    (0)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_CLUSTER_ISO_STA_pw_iso_a53_1_sta_START  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_CLUSTER_ISO_STA_pw_iso_a53_1_sta_END    (1)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_L2DATARAM_1_MTCMOS_TIMER_UNION
 �ṹ˵��  : ACPU_SC_L2DATARAM_1_MTCMOS_TIMER �Ĵ����ṹ���塣��ַƫ����:0x0A4����ֵ:0x000000FF�����:32
 �Ĵ���˵��: L2dataram_1 MTCMOS�ȶ�ʱ�������ֵ����ʱʱ����19.2M��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  l2dataram_1_mtcmos_timer : 16; /* bit[0-15] :  */
        unsigned int  reserved                 : 16; /* bit[16-31]:  */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_L2DATARAM_1_MTCMOS_TIMER_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_L2DATARAM_1_MTCMOS_TIMER_l2dataram_1_mtcmos_timer_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_L2DATARAM_1_MTCMOS_TIMER_l2dataram_1_mtcmos_timer_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_L2DATARAM_1_MTCMOS_TIMER_STAT_UNION
 �ṹ˵��  : ACPU_SC_L2DATARAM_1_MTCMOS_TIMER_STAT �Ĵ����ṹ���塣��ַƫ����:0x0A8����ֵ:0x00000000�����:32
 �Ĵ���˵��: L2dataram_1 MTCMOS�ȶ�ʱ��״ָ̬ʾ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  l2dataram_1_mtcmos_timer_sta : 1;  /* bit[0]   :  */
        unsigned int  reserved                     : 31; /* bit[1-31]:  */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_L2DATARAM_1_MTCMOS_TIMER_STAT_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_L2DATARAM_1_MTCMOS_TIMER_STAT_l2dataram_1_mtcmos_timer_sta_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_L2DATARAM_1_MTCMOS_TIMER_STAT_l2dataram_1_mtcmos_timer_sta_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_L2DATARAM_0_MTCMOS_TIMER_UNION
 �ṹ˵��  : ACPU_SC_L2DATARAM_0_MTCMOS_TIMER �Ĵ����ṹ���塣��ַƫ����:0x0AC����ֵ:0x000000FF�����:32
 �Ĵ���˵��: L2dataram0  MTCMOS�ȶ�ʱ�������ֵ����ʱʱ����19.2M��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  l2dataram_0_mtcmos_timer : 16; /* bit[0-15] :  */
        unsigned int  reserved                 : 16; /* bit[16-31]:  */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_L2DATARAM_0_MTCMOS_TIMER_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_L2DATARAM_0_MTCMOS_TIMER_l2dataram_0_mtcmos_timer_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_L2DATARAM_0_MTCMOS_TIMER_l2dataram_0_mtcmos_timer_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_L2DATARAM_0_MTCMOS_TIMER_STAT_UNION
 �ṹ˵��  : ACPU_SC_L2DATARAM_0_MTCMOS_TIMER_STAT �Ĵ����ṹ���塣��ַƫ����:0x0B0����ֵ:0x00000000�����:32
 �Ĵ���˵��: L2 dataram0 MTCMOS�ȶ�ʱ��״ָ̬ʾ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  l2dataram_0_mtcmos_timer_sta : 1;  /* bit[0]   :  */
        unsigned int  reserved                     : 31; /* bit[1-31]:  */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_L2DATARAM_0_MTCMOS_TIMER_STAT_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_L2DATARAM_0_MTCMOS_TIMER_STAT_l2dataram_0_mtcmos_timer_sta_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_L2DATARAM_0_MTCMOS_TIMER_STAT_l2dataram_0_mtcmos_timer_sta_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_A53_1_MTCMOS_TIMER_UNION
 �ṹ˵��  : ACPU_SC_A53_1_MTCMOS_TIMER �Ĵ����ṹ���塣��ַƫ����:0x0B4����ֵ:0x000000FF�����:32
 �Ĵ���˵��: A53_1 MTCMOS�ȶ�ʱ�������ֵ����ʱʱ����19.2M��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  a53_1_mtcmos_timer : 16; /* bit[0-15] : [15:0]:a53_1_timer */
        unsigned int  reserved           : 16; /* bit[16-31]: [31:16]�������� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_A53_1_MTCMOS_TIMER_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_A53_1_MTCMOS_TIMER_a53_1_mtcmos_timer_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_1_MTCMOS_TIMER_a53_1_mtcmos_timer_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_A53_1_MTCMOS_TIMER_STAT_UNION
 �ṹ˵��  : ACPU_SC_A53_1_MTCMOS_TIMER_STAT �Ĵ����ṹ���塣��ַƫ����:0x0B8����ֵ:0x00000000�����:32
 �Ĵ���˵��: A53_1 MTCMOS�ȶ�ʱ��״ָ̬ʾ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  a53_1_mtcmos_timer_sta : 1;  /* bit[0]   : [0]:a53_1_timer_sta
                                                                 0: δ�ȶ�
                                                                 1���ȶ� */
        unsigned int  reserved               : 31; /* bit[1-31]: [31:1]�������� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_A53_1_MTCMOS_TIMER_STAT_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_A53_1_MTCMOS_TIMER_STAT_a53_1_mtcmos_timer_sta_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_1_MTCMOS_TIMER_STAT_a53_1_mtcmos_timer_sta_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_A53_0_MTCMOS_TIMER_UNION
 �ṹ˵��  : ACPU_SC_A53_0_MTCMOS_TIMER �Ĵ����ṹ���塣��ַƫ����:0x0BC����ֵ:0x000000FF�����:32
 �Ĵ���˵��: A53_0 MTCMOS�ȶ�ʱ�������ֵ����ʱʱ����19.2M��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  a53_0_mtcmos_timer : 16; /* bit[0-15] : [15:0]:a53_0_timer */
        unsigned int  reserved           : 16; /* bit[16-31]: [31:16]�������� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_A53_0_MTCMOS_TIMER_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_A53_0_MTCMOS_TIMER_a53_0_mtcmos_timer_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_0_MTCMOS_TIMER_a53_0_mtcmos_timer_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_A53_0_MTCMOS_TIMER_STAT_UNION
 �ṹ˵��  : ACPU_SC_A53_0_MTCMOS_TIMER_STAT �Ĵ����ṹ���塣��ַƫ����:0x0C0����ֵ:0x00000000�����:32
 �Ĵ���˵��: A53_0 MTCMOS�ȶ�ʱ��״ָ̬ʾ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  a53_0_mtcmos_timer_sta : 1;  /* bit[0]   : [0]:a53_0_timer_sta
                                                                 0: δ�ȶ�
                                                                 1���ȶ� */
        unsigned int  reserved               : 31; /* bit[1-31]: [31:1]�������� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_A53_0_MTCMOS_TIMER_STAT_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_A53_0_MTCMOS_TIMER_STAT_a53_0_mtcmos_timer_sta_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_0_MTCMOS_TIMER_STAT_a53_0_mtcmos_timer_sta_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_A53_0_L2TAG_SRAM_CS_EXT_UNION
 �ṹ˵��  : ACPU_SC_A53_0_L2TAG_SRAM_CS_EXT �Ĵ����ṹ���塣��ַƫ����:0x0C4����ֵ:0x00000020�����:32
 �Ĵ���˵��: ����L2 TAG��RAM��CS��չ����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  a53_0_l2_tagram_cyc_cfg  : 4;  /* bit[0-3] : ����ÿ���ٸ�������Ч1��洢�� */
        unsigned int  a53_0_l2_tagram_ext_en   : 1;  /* bit[4]   : �����Ƿ�ʹ�ܴ洢��Ƭѡ��չ���� */
        unsigned int  a53_0_l2_tagram_match_en : 1;  /* bit[5]   : �����Ƿ�ʹ�ܴ洢���ַmatch���� */
        unsigned int  reserved                 : 26; /* bit[6-31]: ���� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_A53_0_L2TAG_SRAM_CS_EXT_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_A53_0_L2TAG_SRAM_CS_EXT_a53_0_l2_tagram_cyc_cfg_START   (0)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_0_L2TAG_SRAM_CS_EXT_a53_0_l2_tagram_cyc_cfg_END     (3)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_0_L2TAG_SRAM_CS_EXT_a53_0_l2_tagram_ext_en_START    (4)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_0_L2TAG_SRAM_CS_EXT_a53_0_l2_tagram_ext_en_END      (4)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_0_L2TAG_SRAM_CS_EXT_a53_0_l2_tagram_match_en_START  (5)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_0_L2TAG_SRAM_CS_EXT_a53_0_l2_tagram_match_en_END    (5)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_A53_0_SCUTAG_SRAM_CS_EXT_UNION
 �ṹ˵��  : ACPU_SC_A53_0_SCUTAG_SRAM_CS_EXT �Ĵ����ṹ���塣��ַƫ����:0x0C8����ֵ:0x20202020�����:32
 �Ĵ���˵��: ����SCU TAG��RAM��CS��չ����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  a53_0_scu_tagram0_cyc_cfg  : 4;  /* bit[0-3]  : ����ÿ���ٸ�������Ч1��洢�� */
        unsigned int  a53_0_scu_tagram0_ext_en   : 1;  /* bit[4]    : �����Ƿ�ʹ�ܴ洢��Ƭѡ��չ���� */
        unsigned int  a53_0_scu_tagram0_match_en : 1;  /* bit[5]    : �����Ƿ�ʹ�ܴ洢���ַmatch���� */
        unsigned int  reserved_0                 : 2;  /* bit[6-7]  : ���� */
        unsigned int  a53_0_scu_tagram1_cyc_cfg  : 4;  /* bit[8-11] : ����ÿ���ٸ�������Ч1��洢�� */
        unsigned int  a53_0_scu_tagram1_ext_en   : 1;  /* bit[12]   : �����Ƿ�ʹ�ܴ洢��Ƭѡ��չ���� */
        unsigned int  a53_0_scu_tagram1_match_en : 1;  /* bit[13]   : �����Ƿ�ʹ�ܴ洢���ַmatch���� */
        unsigned int  reserved_1                 : 2;  /* bit[14-15]: ���� */
        unsigned int  a53_0_scu_tagram2_cyc_cfg  : 4;  /* bit[16-19]: ����ÿ���ٸ�������Ч1��洢�� */
        unsigned int  a53_0_scu_tagram2_ext_en   : 1;  /* bit[20]   : �����Ƿ�ʹ�ܴ洢��Ƭѡ��չ���� */
        unsigned int  a53_0_scu_tagram2_match_en : 1;  /* bit[21]   : �����Ƿ�ʹ�ܴ洢���ַmatch���� */
        unsigned int  reserved_2                 : 2;  /* bit[22-23]: ���� */
        unsigned int  a53_0_scu_tagram3_cyc_cfg  : 4;  /* bit[24-27]: ����ÿ���ٸ�������Ч1��洢�� */
        unsigned int  a53_0_scu_tagram3_ext_en   : 1;  /* bit[28]   : �����Ƿ�ʹ�ܴ洢��Ƭѡ��չ���� */
        unsigned int  a53_0_scu_tagram3_match_en : 1;  /* bit[29]   : �����Ƿ�ʹ�ܴ洢���ַmatch���� */
        unsigned int  reserved_3                 : 2;  /* bit[30-31]: ���� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_A53_0_SCUTAG_SRAM_CS_EXT_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_A53_0_SCUTAG_SRAM_CS_EXT_a53_0_scu_tagram0_cyc_cfg_START   (0)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_0_SCUTAG_SRAM_CS_EXT_a53_0_scu_tagram0_cyc_cfg_END     (3)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_0_SCUTAG_SRAM_CS_EXT_a53_0_scu_tagram0_ext_en_START    (4)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_0_SCUTAG_SRAM_CS_EXT_a53_0_scu_tagram0_ext_en_END      (4)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_0_SCUTAG_SRAM_CS_EXT_a53_0_scu_tagram0_match_en_START  (5)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_0_SCUTAG_SRAM_CS_EXT_a53_0_scu_tagram0_match_en_END    (5)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_0_SCUTAG_SRAM_CS_EXT_a53_0_scu_tagram1_cyc_cfg_START   (8)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_0_SCUTAG_SRAM_CS_EXT_a53_0_scu_tagram1_cyc_cfg_END     (11)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_0_SCUTAG_SRAM_CS_EXT_a53_0_scu_tagram1_ext_en_START    (12)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_0_SCUTAG_SRAM_CS_EXT_a53_0_scu_tagram1_ext_en_END      (12)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_0_SCUTAG_SRAM_CS_EXT_a53_0_scu_tagram1_match_en_START  (13)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_0_SCUTAG_SRAM_CS_EXT_a53_0_scu_tagram1_match_en_END    (13)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_0_SCUTAG_SRAM_CS_EXT_a53_0_scu_tagram2_cyc_cfg_START   (16)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_0_SCUTAG_SRAM_CS_EXT_a53_0_scu_tagram2_cyc_cfg_END     (19)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_0_SCUTAG_SRAM_CS_EXT_a53_0_scu_tagram2_ext_en_START    (20)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_0_SCUTAG_SRAM_CS_EXT_a53_0_scu_tagram2_ext_en_END      (20)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_0_SCUTAG_SRAM_CS_EXT_a53_0_scu_tagram2_match_en_START  (21)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_0_SCUTAG_SRAM_CS_EXT_a53_0_scu_tagram2_match_en_END    (21)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_0_SCUTAG_SRAM_CS_EXT_a53_0_scu_tagram3_cyc_cfg_START   (24)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_0_SCUTAG_SRAM_CS_EXT_a53_0_scu_tagram3_cyc_cfg_END     (27)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_0_SCUTAG_SRAM_CS_EXT_a53_0_scu_tagram3_ext_en_START    (28)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_0_SCUTAG_SRAM_CS_EXT_a53_0_scu_tagram3_ext_en_END      (28)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_0_SCUTAG_SRAM_CS_EXT_a53_0_scu_tagram3_match_en_START  (29)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_0_SCUTAG_SRAM_CS_EXT_a53_0_scu_tagram3_match_en_END    (29)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_A53_0_L1SRAM_CS_EXT_UNION
 �ṹ˵��  : ACPU_SC_A53_0_L1SRAM_CS_EXT �Ĵ����ṹ���塣��ַƫ����:0x0CC����ֵ:0x20202020�����:32
 �Ĵ���˵��: ����L1 ��RAM��CS ��չ������
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  a53_0_dc_dataram_cyc_cfg  : 4;  /* bit[0-3]  : ����ÿ���ٸ�������Ч1��洢�� */
        unsigned int  a53_0_dc_dataram_ext_en   : 1;  /* bit[4]    : �����Ƿ�ʹ�ܴ洢��Ƭѡ��չ���� */
        unsigned int  a53_0_dc_dataram_match_en : 1;  /* bit[5]    : �����Ƿ�ʹ�ܴ洢���ַmatch���� */
        unsigned int  reserved_0                : 2;  /* bit[6-7]  : ���� */
        unsigned int  a53_0_dc_tagram_cyc_cfg   : 4;  /* bit[8-11] : ����ÿ���ٸ�������Ч1��洢�� */
        unsigned int  a53_0_dc_tagram_ext_en    : 1;  /* bit[12]   : �����Ƿ�ʹ�ܴ洢��Ƭѡ��չ���� */
        unsigned int  a53_0_dc_tagram_match_en  : 1;  /* bit[13]   : �����Ƿ�ʹ�ܴ洢���ַmatch���� */
        unsigned int  reserved_1                : 2;  /* bit[14-15]: ���� */
        unsigned int  a53_0_tlbram_cyc_cfg      : 4;  /* bit[16-19]: ����ÿ���ٸ�������Ч1��洢�� */
        unsigned int  a53_0_tlbram_ext_en       : 1;  /* bit[20]   : �����Ƿ�ʹ�ܴ洢��Ƭѡ��չ���� */
        unsigned int  a53_0_tlbram_match_en     : 1;  /* bit[21]   : �����Ƿ�ʹ�ܴ洢���ַmatch���� */
        unsigned int  reserved_2                : 2;  /* bit[22-23]: ���� */
        unsigned int  a53_0_ic_dataram_cyc_cfg  : 4;  /* bit[24-27]: ����ÿ���ٸ�������Ч1��洢�� */
        unsigned int  a53_0_ic_dataram_ext_en   : 1;  /* bit[28]   : �����Ƿ�ʹ�ܴ洢��Ƭѡ��չ���� */
        unsigned int  a53_0_ic_dataram_match_en : 1;  /* bit[29]   : �����Ƿ�ʹ�ܴ洢���ַmatch���� */
        unsigned int  reserved_3                : 2;  /* bit[30-31]: ���� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_A53_0_L1SRAM_CS_EXT_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_A53_0_L1SRAM_CS_EXT_a53_0_dc_dataram_cyc_cfg_START   (0)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_0_L1SRAM_CS_EXT_a53_0_dc_dataram_cyc_cfg_END     (3)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_0_L1SRAM_CS_EXT_a53_0_dc_dataram_ext_en_START    (4)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_0_L1SRAM_CS_EXT_a53_0_dc_dataram_ext_en_END      (4)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_0_L1SRAM_CS_EXT_a53_0_dc_dataram_match_en_START  (5)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_0_L1SRAM_CS_EXT_a53_0_dc_dataram_match_en_END    (5)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_0_L1SRAM_CS_EXT_a53_0_dc_tagram_cyc_cfg_START    (8)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_0_L1SRAM_CS_EXT_a53_0_dc_tagram_cyc_cfg_END      (11)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_0_L1SRAM_CS_EXT_a53_0_dc_tagram_ext_en_START     (12)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_0_L1SRAM_CS_EXT_a53_0_dc_tagram_ext_en_END       (12)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_0_L1SRAM_CS_EXT_a53_0_dc_tagram_match_en_START   (13)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_0_L1SRAM_CS_EXT_a53_0_dc_tagram_match_en_END     (13)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_0_L1SRAM_CS_EXT_a53_0_tlbram_cyc_cfg_START       (16)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_0_L1SRAM_CS_EXT_a53_0_tlbram_cyc_cfg_END         (19)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_0_L1SRAM_CS_EXT_a53_0_tlbram_ext_en_START        (20)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_0_L1SRAM_CS_EXT_a53_0_tlbram_ext_en_END          (20)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_0_L1SRAM_CS_EXT_a53_0_tlbram_match_en_START      (21)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_0_L1SRAM_CS_EXT_a53_0_tlbram_match_en_END        (21)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_0_L1SRAM_CS_EXT_a53_0_ic_dataram_cyc_cfg_START   (24)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_0_L1SRAM_CS_EXT_a53_0_ic_dataram_cyc_cfg_END     (27)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_0_L1SRAM_CS_EXT_a53_0_ic_dataram_ext_en_START    (28)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_0_L1SRAM_CS_EXT_a53_0_ic_dataram_ext_en_END      (28)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_0_L1SRAM_CS_EXT_a53_0_ic_dataram_match_en_START  (29)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_0_L1SRAM_CS_EXT_a53_0_ic_dataram_match_en_END    (29)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_A53_1_L2TAG_SRAM_CS_EXT_UNION
 �ṹ˵��  : ACPU_SC_A53_1_L2TAG_SRAM_CS_EXT �Ĵ����ṹ���塣��ַƫ����:0x0D0����ֵ:0x00000020�����:32
 �Ĵ���˵��: ����L2 TAG��RAM��CS��չ������
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  a53_1_l2_tagram_cyc_cfg  : 4;  /* bit[0-3] : ����ÿ���ٸ�������Ч1��洢�� */
        unsigned int  a53_1_l2_tagram_ext_en   : 1;  /* bit[4]   : �����Ƿ�ʹ�ܴ洢��Ƭѡ��չ���� */
        unsigned int  a53_1_l2_tagram_match_en : 1;  /* bit[5]   : �����Ƿ�ʹ�ܴ洢���ַmatch���� */
        unsigned int  reserved                 : 26; /* bit[6-31]: ���� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_A53_1_L2TAG_SRAM_CS_EXT_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_A53_1_L2TAG_SRAM_CS_EXT_a53_1_l2_tagram_cyc_cfg_START   (0)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_1_L2TAG_SRAM_CS_EXT_a53_1_l2_tagram_cyc_cfg_END     (3)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_1_L2TAG_SRAM_CS_EXT_a53_1_l2_tagram_ext_en_START    (4)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_1_L2TAG_SRAM_CS_EXT_a53_1_l2_tagram_ext_en_END      (4)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_1_L2TAG_SRAM_CS_EXT_a53_1_l2_tagram_match_en_START  (5)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_1_L2TAG_SRAM_CS_EXT_a53_1_l2_tagram_match_en_END    (5)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_A53_1_SCUTAG_SRAM_CS_EXT_UNION
 �ṹ˵��  : ACPU_SC_A53_1_SCUTAG_SRAM_CS_EXT �Ĵ����ṹ���塣��ַƫ����:0x0D4����ֵ:0x20202020�����:32
 �Ĵ���˵��: ����SCU TAG��RAM��CS��չ����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  a53_1_scu_tagram0_cyc_cfg  : 4;  /* bit[0-3]  : ����ÿ���ٸ�������Ч1��洢�� */
        unsigned int  a53_1_scu_tagram0_ext_en   : 1;  /* bit[4]    : �����Ƿ�ʹ�ܴ洢��Ƭѡ��չ���� */
        unsigned int  a53_1_scu_tagram0_match_en : 1;  /* bit[5]    : �����Ƿ�ʹ�ܴ洢���ַmatch���� */
        unsigned int  reserved_0                 : 2;  /* bit[6-7]  : ���� */
        unsigned int  a53_1_scu_tagram1_cyc_cfg  : 4;  /* bit[8-11] : ����ÿ���ٸ�������Ч1��洢�� */
        unsigned int  a53_1_scu_tagram1_ext_en   : 1;  /* bit[12]   : �����Ƿ�ʹ�ܴ洢��Ƭѡ��չ���� */
        unsigned int  a53_1_scu_tagram1_match_en : 1;  /* bit[13]   : �����Ƿ�ʹ�ܴ洢���ַmatch���� */
        unsigned int  reserved_1                 : 2;  /* bit[14-15]: ���� */
        unsigned int  a53_1_scu_tagram2_cyc_cfg  : 4;  /* bit[16-19]: ����ÿ���ٸ�������Ч1��洢�� */
        unsigned int  a53_1_scu_tagram2_ext_en   : 1;  /* bit[20]   : �����Ƿ�ʹ�ܴ洢��Ƭѡ��չ���� */
        unsigned int  a53_1_scu_tagram2_match_en : 1;  /* bit[21]   : �����Ƿ�ʹ�ܴ洢���ַmatch���� */
        unsigned int  reserved_2                 : 2;  /* bit[22-23]: ���� */
        unsigned int  a53_1_scu_tagram3_cyc_cfg  : 4;  /* bit[24-27]: ����ÿ���ٸ�������Ч1��洢�� */
        unsigned int  a53_1_scu_tagram3_ext_en   : 1;  /* bit[28]   : �����Ƿ�ʹ�ܴ洢��Ƭѡ��չ���� */
        unsigned int  a53_1_scu_tagram3_match_en : 1;  /* bit[29]   : �����Ƿ�ʹ�ܴ洢���ַmatch���� */
        unsigned int  reserved_3                 : 2;  /* bit[30-31]: ���� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_A53_1_SCUTAG_SRAM_CS_EXT_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_A53_1_SCUTAG_SRAM_CS_EXT_a53_1_scu_tagram0_cyc_cfg_START   (0)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_1_SCUTAG_SRAM_CS_EXT_a53_1_scu_tagram0_cyc_cfg_END     (3)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_1_SCUTAG_SRAM_CS_EXT_a53_1_scu_tagram0_ext_en_START    (4)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_1_SCUTAG_SRAM_CS_EXT_a53_1_scu_tagram0_ext_en_END      (4)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_1_SCUTAG_SRAM_CS_EXT_a53_1_scu_tagram0_match_en_START  (5)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_1_SCUTAG_SRAM_CS_EXT_a53_1_scu_tagram0_match_en_END    (5)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_1_SCUTAG_SRAM_CS_EXT_a53_1_scu_tagram1_cyc_cfg_START   (8)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_1_SCUTAG_SRAM_CS_EXT_a53_1_scu_tagram1_cyc_cfg_END     (11)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_1_SCUTAG_SRAM_CS_EXT_a53_1_scu_tagram1_ext_en_START    (12)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_1_SCUTAG_SRAM_CS_EXT_a53_1_scu_tagram1_ext_en_END      (12)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_1_SCUTAG_SRAM_CS_EXT_a53_1_scu_tagram1_match_en_START  (13)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_1_SCUTAG_SRAM_CS_EXT_a53_1_scu_tagram1_match_en_END    (13)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_1_SCUTAG_SRAM_CS_EXT_a53_1_scu_tagram2_cyc_cfg_START   (16)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_1_SCUTAG_SRAM_CS_EXT_a53_1_scu_tagram2_cyc_cfg_END     (19)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_1_SCUTAG_SRAM_CS_EXT_a53_1_scu_tagram2_ext_en_START    (20)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_1_SCUTAG_SRAM_CS_EXT_a53_1_scu_tagram2_ext_en_END      (20)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_1_SCUTAG_SRAM_CS_EXT_a53_1_scu_tagram2_match_en_START  (21)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_1_SCUTAG_SRAM_CS_EXT_a53_1_scu_tagram2_match_en_END    (21)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_1_SCUTAG_SRAM_CS_EXT_a53_1_scu_tagram3_cyc_cfg_START   (24)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_1_SCUTAG_SRAM_CS_EXT_a53_1_scu_tagram3_cyc_cfg_END     (27)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_1_SCUTAG_SRAM_CS_EXT_a53_1_scu_tagram3_ext_en_START    (28)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_1_SCUTAG_SRAM_CS_EXT_a53_1_scu_tagram3_ext_en_END      (28)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_1_SCUTAG_SRAM_CS_EXT_a53_1_scu_tagram3_match_en_START  (29)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_1_SCUTAG_SRAM_CS_EXT_a53_1_scu_tagram3_match_en_END    (29)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_A53_1_L1SRAM_CS_EXT_UNION
 �ṹ˵��  : ACPU_SC_A53_1_L1SRAM_CS_EXT �Ĵ����ṹ���塣��ַƫ����:0x0D8����ֵ:0x20202020�����:32
 �Ĵ���˵��: ����L1 ��RAM��CS ��չ����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  a53_1_dc_dataram_cyc_cfg  : 4;  /* bit[0-3]  : ����ÿ���ٸ�������Ч1��洢�� */
        unsigned int  a53_1_dc_dataram_ext_en   : 1;  /* bit[4]    : �����Ƿ�ʹ�ܴ洢��Ƭѡ��չ���� */
        unsigned int  a53_1_dc_dataram_match_en : 1;  /* bit[5]    : �����Ƿ�ʹ�ܴ洢���ַmatch���� */
        unsigned int  reserved_0                : 2;  /* bit[6-7]  : ���� */
        unsigned int  a53_1_dc_tagram_cyc_cfg   : 4;  /* bit[8-11] : ����ÿ���ٸ�������Ч1��洢�� */
        unsigned int  a53_1_dc_tagram_ext_en    : 1;  /* bit[12]   : �����Ƿ�ʹ�ܴ洢��Ƭѡ��չ���� */
        unsigned int  a53_1_dc_tagram_match_en  : 1;  /* bit[13]   : �����Ƿ�ʹ�ܴ洢���ַmatch���� */
        unsigned int  reserved_1                : 2;  /* bit[14-15]: ���� */
        unsigned int  a53_1_tlbram_cyc_cfg      : 4;  /* bit[16-19]: ����ÿ���ٸ�������Ч1��洢�� */
        unsigned int  a53_1_tlbram_ext_en       : 1;  /* bit[20]   : �����Ƿ�ʹ�ܴ洢��Ƭѡ��չ���� */
        unsigned int  a53_1_tlbram_match_en     : 1;  /* bit[21]   : �����Ƿ�ʹ�ܴ洢���ַmatch���� */
        unsigned int  reserved_2                : 2;  /* bit[22-23]: ���� */
        unsigned int  a53_1_ic_dataram_cyc_cfg  : 4;  /* bit[24-27]: ����ÿ���ٸ�������Ч1��洢�� */
        unsigned int  a53_1_ic_dataram_ext_en   : 1;  /* bit[28]   : �����Ƿ�ʹ�ܴ洢��Ƭѡ��չ���� */
        unsigned int  a53_1_ic_dataram_match_en : 1;  /* bit[29]   : �����Ƿ�ʹ�ܴ洢���ַmatch���� */
        unsigned int  reserved_3                : 2;  /* bit[30-31]: ���� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_A53_1_L1SRAM_CS_EXT_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_A53_1_L1SRAM_CS_EXT_a53_1_dc_dataram_cyc_cfg_START   (0)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_1_L1SRAM_CS_EXT_a53_1_dc_dataram_cyc_cfg_END     (3)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_1_L1SRAM_CS_EXT_a53_1_dc_dataram_ext_en_START    (4)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_1_L1SRAM_CS_EXT_a53_1_dc_dataram_ext_en_END      (4)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_1_L1SRAM_CS_EXT_a53_1_dc_dataram_match_en_START  (5)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_1_L1SRAM_CS_EXT_a53_1_dc_dataram_match_en_END    (5)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_1_L1SRAM_CS_EXT_a53_1_dc_tagram_cyc_cfg_START    (8)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_1_L1SRAM_CS_EXT_a53_1_dc_tagram_cyc_cfg_END      (11)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_1_L1SRAM_CS_EXT_a53_1_dc_tagram_ext_en_START     (12)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_1_L1SRAM_CS_EXT_a53_1_dc_tagram_ext_en_END       (12)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_1_L1SRAM_CS_EXT_a53_1_dc_tagram_match_en_START   (13)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_1_L1SRAM_CS_EXT_a53_1_dc_tagram_match_en_END     (13)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_1_L1SRAM_CS_EXT_a53_1_tlbram_cyc_cfg_START       (16)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_1_L1SRAM_CS_EXT_a53_1_tlbram_cyc_cfg_END         (19)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_1_L1SRAM_CS_EXT_a53_1_tlbram_ext_en_START        (20)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_1_L1SRAM_CS_EXT_a53_1_tlbram_ext_en_END          (20)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_1_L1SRAM_CS_EXT_a53_1_tlbram_match_en_START      (21)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_1_L1SRAM_CS_EXT_a53_1_tlbram_match_en_END        (21)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_1_L1SRAM_CS_EXT_a53_1_ic_dataram_cyc_cfg_START   (24)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_1_L1SRAM_CS_EXT_a53_1_ic_dataram_cyc_cfg_END     (27)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_1_L1SRAM_CS_EXT_a53_1_ic_dataram_ext_en_START    (28)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_1_L1SRAM_CS_EXT_a53_1_ic_dataram_ext_en_END      (28)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_1_L1SRAM_CS_EXT_a53_1_ic_dataram_match_en_START  (29)
#define SOC_ACPU_SCTRL_ACPU_SC_A53_1_L1SRAM_CS_EXT_a53_1_ic_dataram_match_en_END    (29)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_SYSCNT_UNION
 �ṹ˵��  : ACPU_SC_SYSCNT �Ĵ����ṹ���塣��ַƫ����:0x0DC����ֵ:0x0000000A�����:32
 �Ĵ���˵��: ���ò���system counter������
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  system_cnt_dly : 6;  /* bit[0-5] : ����cnt_clk_en�����system counter�仯 */
        unsigned int  reserved       : 26; /* bit[6-31]: ���� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_SYSCNT_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_SYSCNT_system_cnt_dly_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_SYSCNT_system_cnt_dly_END    (5)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_L2_RETENTION_UNION
 �ṹ˵��  : ACPU_SC_L2_RETENTION �Ĵ����ṹ���塣��ַƫ����:0x0E0����ֵ:0x00000000�����:32
 �Ĵ���˵��: ����L2 data RAM��retention����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  dyn_retention_en0 : 1;  /* bit[0]    : ʹ��L2 dynamic retention���� */
        unsigned int  wfi_ret_en0       : 1;  /* bit[1]    : ʹ��L2 dynamic retention��WFI���� */
        unsigned int  wfe_ret_en0       : 1;  /* bit[2]    : ʹ��L2 dynamic retention��WFE���� */
        unsigned int  ctrl_norm0        : 1;  /* bit[3]    : ����norm �µ�retention��ֵ */
        unsigned int  ctrl_ret0         : 1;  /* bit[4]    : ����ret �µ�retention��ֵ */
        unsigned int  wait_cycle_chg0   : 1;  /* bit[5]    : ����wait_cycle������ ���޸� */
        unsigned int  reserved_0        : 2;  /* bit[6-7]  : ���� */
        unsigned int  wait_cycle0       : 4;  /* bit[8-11] : ���ô�retention���ص�normal�������� */
        unsigned int  reserved_1        : 4;  /* bit[12-15]: ���� */
        unsigned int  dyn_retention_en1 : 1;  /* bit[16]   : ʹ��L2 dynamic retention���� */
        unsigned int  wfi_ret_en1       : 1;  /* bit[17]   : ʹ��L2 dynamic retention��WFI���� */
        unsigned int  wfe_ret_en1       : 1;  /* bit[18]   : ʹ��L2 dynamic retention��WFE���� */
        unsigned int  ctrl_norm1        : 1;  /* bit[19]   : ����norm �µ�retention��ֵ */
        unsigned int  ctrl_ret1         : 1;  /* bit[20]   : ����ret �µ�retention��ֵ */
        unsigned int  wait_cycle_chg1   : 1;  /* bit[21]   : ����wait_cycle������ ���޸� */
        unsigned int  reserved_2        : 2;  /* bit[22-23]: ���� */
        unsigned int  wait_cycle1       : 4;  /* bit[24-27]: ���ô�retention���ص�normal�������� */
        unsigned int  dyn_static_sel    : 1;  /* bit[28]   : ѡ����memadjust��̬���Ƕ�̬����L2 data RAM��retention���ܣ�
                                                             0��mem_adjust ��̬����
                                                             1��dynamic ����retention���� */
        unsigned int  reserved_3        : 3;  /* bit[29-31]: ���� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_L2_RETENTION_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_L2_RETENTION_dyn_retention_en0_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_L2_RETENTION_dyn_retention_en0_END    (0)
#define SOC_ACPU_SCTRL_ACPU_SC_L2_RETENTION_wfi_ret_en0_START        (1)
#define SOC_ACPU_SCTRL_ACPU_SC_L2_RETENTION_wfi_ret_en0_END          (1)
#define SOC_ACPU_SCTRL_ACPU_SC_L2_RETENTION_wfe_ret_en0_START        (2)
#define SOC_ACPU_SCTRL_ACPU_SC_L2_RETENTION_wfe_ret_en0_END          (2)
#define SOC_ACPU_SCTRL_ACPU_SC_L2_RETENTION_ctrl_norm0_START         (3)
#define SOC_ACPU_SCTRL_ACPU_SC_L2_RETENTION_ctrl_norm0_END           (3)
#define SOC_ACPU_SCTRL_ACPU_SC_L2_RETENTION_ctrl_ret0_START          (4)
#define SOC_ACPU_SCTRL_ACPU_SC_L2_RETENTION_ctrl_ret0_END            (4)
#define SOC_ACPU_SCTRL_ACPU_SC_L2_RETENTION_wait_cycle_chg0_START    (5)
#define SOC_ACPU_SCTRL_ACPU_SC_L2_RETENTION_wait_cycle_chg0_END      (5)
#define SOC_ACPU_SCTRL_ACPU_SC_L2_RETENTION_wait_cycle0_START        (8)
#define SOC_ACPU_SCTRL_ACPU_SC_L2_RETENTION_wait_cycle0_END          (11)
#define SOC_ACPU_SCTRL_ACPU_SC_L2_RETENTION_dyn_retention_en1_START  (16)
#define SOC_ACPU_SCTRL_ACPU_SC_L2_RETENTION_dyn_retention_en1_END    (16)
#define SOC_ACPU_SCTRL_ACPU_SC_L2_RETENTION_wfi_ret_en1_START        (17)
#define SOC_ACPU_SCTRL_ACPU_SC_L2_RETENTION_wfi_ret_en1_END          (17)
#define SOC_ACPU_SCTRL_ACPU_SC_L2_RETENTION_wfe_ret_en1_START        (18)
#define SOC_ACPU_SCTRL_ACPU_SC_L2_RETENTION_wfe_ret_en1_END          (18)
#define SOC_ACPU_SCTRL_ACPU_SC_L2_RETENTION_ctrl_norm1_START         (19)
#define SOC_ACPU_SCTRL_ACPU_SC_L2_RETENTION_ctrl_norm1_END           (19)
#define SOC_ACPU_SCTRL_ACPU_SC_L2_RETENTION_ctrl_ret1_START          (20)
#define SOC_ACPU_SCTRL_ACPU_SC_L2_RETENTION_ctrl_ret1_END            (20)
#define SOC_ACPU_SCTRL_ACPU_SC_L2_RETENTION_wait_cycle_chg1_START    (21)
#define SOC_ACPU_SCTRL_ACPU_SC_L2_RETENTION_wait_cycle_chg1_END      (21)
#define SOC_ACPU_SCTRL_ACPU_SC_L2_RETENTION_wait_cycle1_START        (24)
#define SOC_ACPU_SCTRL_ACPU_SC_L2_RETENTION_wait_cycle1_END          (27)
#define SOC_ACPU_SCTRL_ACPU_SC_L2_RETENTION_dyn_static_sel_START     (28)
#define SOC_ACPU_SCTRL_ACPU_SC_L2_RETENTION_dyn_static_sel_END       (28)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_SNOOP_PWD_UNION
 �ṹ˵��  : ACPU_SC_SNOOP_PWD �Ĵ����ṹ���塣��ַƫ����:0x0E4����ֵ:0x00000000�����:32
 �Ĵ���˵��: ����cluster�µ��ǰ����SNOOP�ſջ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pd_detect_start0   : 1;  /* bit[0]    : д1����cluster�µ�������ʼ���ã� д0 ��Ч */
        unsigned int  pd_detect_clr0     : 1;  /* bit[1]    : д1����cluster�µ����н������ã�����snoop���������̬��acinactm��λ��д0��Ч */
        unsigned int  set_acinactm_high0 : 1;  /* bit[2]    : д1���� acinactm Ϊ�ߣ� д0��Ч */
        unsigned int  set_acinactm_low0  : 1;  /* bit[3]    : д1���� acinactm Ϊ�ͣ�д0��Ч */
        unsigned int  reserved_0         : 12; /* bit[4-15] : ���� */
        unsigned int  pd_detect_start1   : 1;  /* bit[16]   : д1����cluster�µ�������ʼ���ã� д0 ��Ч */
        unsigned int  pd_detect_clr1     : 1;  /* bit[17]   : д1����cluster�µ����н������ã� д0��Ч */
        unsigned int  set_acinactm_high1 : 1;  /* bit[18]   : д1���� acinactm Ϊ�ߣ�д0��Ч */
        unsigned int  set_acinactm_low1  : 1;  /* bit[19]   : д1���� acinactm Ϊ�ͣ�д0��Ч */
        unsigned int  reserved_1         : 12; /* bit[20-31]: ���� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_SNOOP_PWD_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_SNOOP_PWD_pd_detect_start0_START    (0)
#define SOC_ACPU_SCTRL_ACPU_SC_SNOOP_PWD_pd_detect_start0_END      (0)
#define SOC_ACPU_SCTRL_ACPU_SC_SNOOP_PWD_pd_detect_clr0_START      (1)
#define SOC_ACPU_SCTRL_ACPU_SC_SNOOP_PWD_pd_detect_clr0_END        (1)
#define SOC_ACPU_SCTRL_ACPU_SC_SNOOP_PWD_set_acinactm_high0_START  (2)
#define SOC_ACPU_SCTRL_ACPU_SC_SNOOP_PWD_set_acinactm_high0_END    (2)
#define SOC_ACPU_SCTRL_ACPU_SC_SNOOP_PWD_set_acinactm_low0_START   (3)
#define SOC_ACPU_SCTRL_ACPU_SC_SNOOP_PWD_set_acinactm_low0_END     (3)
#define SOC_ACPU_SCTRL_ACPU_SC_SNOOP_PWD_pd_detect_start1_START    (16)
#define SOC_ACPU_SCTRL_ACPU_SC_SNOOP_PWD_pd_detect_start1_END      (16)
#define SOC_ACPU_SCTRL_ACPU_SC_SNOOP_PWD_pd_detect_clr1_START      (17)
#define SOC_ACPU_SCTRL_ACPU_SC_SNOOP_PWD_pd_detect_clr1_END        (17)
#define SOC_ACPU_SCTRL_ACPU_SC_SNOOP_PWD_set_acinactm_high1_START  (18)
#define SOC_ACPU_SCTRL_ACPU_SC_SNOOP_PWD_set_acinactm_high1_END    (18)
#define SOC_ACPU_SCTRL_ACPU_SC_SNOOP_PWD_set_acinactm_low1_START   (19)
#define SOC_ACPU_SCTRL_ACPU_SC_SNOOP_PWD_set_acinactm_low1_END     (19)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_INT_STM_UNION
 �ṹ˵��  : ACPU_SC_INT_STM �Ĵ����ṹ���塣��ַƫ����:0x0E8����ֵ:0x00000000�����:32
 �Ĵ���˵��: ָʾcpu0~7 �͸�CM3��CPU0 ���κ���ж�״̬
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cpu_irqout2cpu0_0_statm : 1;  /* bit[0] : �͸�CPU0��irqout0 ���κ���ж� */
        unsigned int  cpu_irqout2cpu0_1_statm : 1;  /* bit[1] : irq1 */
        unsigned int  cpu_irqout2cpu0_2_statm : 1;  /* bit[2] : irq2 */
        unsigned int  cpu_irqout2cpu0_3_statm : 1;  /* bit[3] : irq3 */
        unsigned int  cpu_irqout2cpu0_4_statm : 1;  /* bit[4] : irq4 */
        unsigned int  cpu_irqout2cpu0_5_statm : 1;  /* bit[5] : irq5 */
        unsigned int  cpu_irqout2cpu0_6_statm : 1;  /* bit[6] : irq6 */
        unsigned int  cpu_irqout2cpu0_7_statm : 1;  /* bit[7] : irq7 */
        unsigned int  cpu_fiqout2cpu0_0_statm : 1;  /* bit[8] : �͸�CPU0��fiqout0 ���κ���ж� */
        unsigned int  cpu_fiqout2cpu0_1_statm : 1;  /* bit[9] : fiq1 */
        unsigned int  cpu_fiqout2cpu0_2_statm : 1;  /* bit[10]: fiq2 */
        unsigned int  cpu_fiqout2cpu0_3_statm : 1;  /* bit[11]: fiq3 */
        unsigned int  cpu_fiqout2cpu0_4_statm : 1;  /* bit[12]: fiq4 */
        unsigned int  cpu_fiqout2cpu0_5_statm : 1;  /* bit[13]: fiq5 */
        unsigned int  cpu_fiqout2cpu0_6_statm : 1;  /* bit[14]: fiq6 */
        unsigned int  cpu_fiqout2cpu0_7_statm : 1;  /* bit[15]: fiq7 */
        unsigned int  cpu_irqout0_statm       : 1;  /* bit[16]: �͸�CM3��irqout0 ���κ���ж� */
        unsigned int  cpu_irqout1_statm       : 1;  /* bit[17]: irq1 */
        unsigned int  cpu_irqout2_statm       : 1;  /* bit[18]: irq2 */
        unsigned int  cpu_irqout3_statm       : 1;  /* bit[19]: irq3 */
        unsigned int  cpu_irqout4_statm       : 1;  /* bit[20]: irq4 */
        unsigned int  cpu_irqout5_statm       : 1;  /* bit[21]: irq5 */
        unsigned int  cpu_irqout6_statm       : 1;  /* bit[22]: irq6 */
        unsigned int  cpu_irqout7_statm       : 1;  /* bit[23]: irq7 */
        unsigned int  cpu_fiqout0_statm       : 1;  /* bit[24]: �͸�CM3��fiqout0 ���κ���ж� */
        unsigned int  cpu_fiqout1_statm       : 1;  /* bit[25]: �͸�CM3��fiqout1 ���κ���ж� */
        unsigned int  cpu_fiqout2_statm       : 1;  /* bit[26]: �͸�CM3��fiqout2 ���κ���ж� */
        unsigned int  cpu_fiqout3_statm       : 1;  /* bit[27]: �͸�CM3��fiqout3 ���κ���ж� */
        unsigned int  cpu_fiqout4_statm       : 1;  /* bit[28]: �͸�CM3��fiqout4 ���κ���ж� */
        unsigned int  cpu_fiqout5_statm       : 1;  /* bit[29]: �͸�CM3��fiqout5 ���κ���ж� */
        unsigned int  cpu_fiqout6_statm       : 1;  /* bit[30]: �͸�CM3��fiqout6 ���κ���ж� */
        unsigned int  cpu_fiqout7_statm       : 1;  /* bit[31]: �͸�CM3��fiqout7 ���κ���ж� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_INT_STM_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_INT_STM_cpu_irqout2cpu0_0_statm_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_INT_STM_cpu_irqout2cpu0_0_statm_END    (0)
#define SOC_ACPU_SCTRL_ACPU_SC_INT_STM_cpu_irqout2cpu0_1_statm_START  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_INT_STM_cpu_irqout2cpu0_1_statm_END    (1)
#define SOC_ACPU_SCTRL_ACPU_SC_INT_STM_cpu_irqout2cpu0_2_statm_START  (2)
#define SOC_ACPU_SCTRL_ACPU_SC_INT_STM_cpu_irqout2cpu0_2_statm_END    (2)
#define SOC_ACPU_SCTRL_ACPU_SC_INT_STM_cpu_irqout2cpu0_3_statm_START  (3)
#define SOC_ACPU_SCTRL_ACPU_SC_INT_STM_cpu_irqout2cpu0_3_statm_END    (3)
#define SOC_ACPU_SCTRL_ACPU_SC_INT_STM_cpu_irqout2cpu0_4_statm_START  (4)
#define SOC_ACPU_SCTRL_ACPU_SC_INT_STM_cpu_irqout2cpu0_4_statm_END    (4)
#define SOC_ACPU_SCTRL_ACPU_SC_INT_STM_cpu_irqout2cpu0_5_statm_START  (5)
#define SOC_ACPU_SCTRL_ACPU_SC_INT_STM_cpu_irqout2cpu0_5_statm_END    (5)
#define SOC_ACPU_SCTRL_ACPU_SC_INT_STM_cpu_irqout2cpu0_6_statm_START  (6)
#define SOC_ACPU_SCTRL_ACPU_SC_INT_STM_cpu_irqout2cpu0_6_statm_END    (6)
#define SOC_ACPU_SCTRL_ACPU_SC_INT_STM_cpu_irqout2cpu0_7_statm_START  (7)
#define SOC_ACPU_SCTRL_ACPU_SC_INT_STM_cpu_irqout2cpu0_7_statm_END    (7)
#define SOC_ACPU_SCTRL_ACPU_SC_INT_STM_cpu_fiqout2cpu0_0_statm_START  (8)
#define SOC_ACPU_SCTRL_ACPU_SC_INT_STM_cpu_fiqout2cpu0_0_statm_END    (8)
#define SOC_ACPU_SCTRL_ACPU_SC_INT_STM_cpu_fiqout2cpu0_1_statm_START  (9)
#define SOC_ACPU_SCTRL_ACPU_SC_INT_STM_cpu_fiqout2cpu0_1_statm_END    (9)
#define SOC_ACPU_SCTRL_ACPU_SC_INT_STM_cpu_fiqout2cpu0_2_statm_START  (10)
#define SOC_ACPU_SCTRL_ACPU_SC_INT_STM_cpu_fiqout2cpu0_2_statm_END    (10)
#define SOC_ACPU_SCTRL_ACPU_SC_INT_STM_cpu_fiqout2cpu0_3_statm_START  (11)
#define SOC_ACPU_SCTRL_ACPU_SC_INT_STM_cpu_fiqout2cpu0_3_statm_END    (11)
#define SOC_ACPU_SCTRL_ACPU_SC_INT_STM_cpu_fiqout2cpu0_4_statm_START  (12)
#define SOC_ACPU_SCTRL_ACPU_SC_INT_STM_cpu_fiqout2cpu0_4_statm_END    (12)
#define SOC_ACPU_SCTRL_ACPU_SC_INT_STM_cpu_fiqout2cpu0_5_statm_START  (13)
#define SOC_ACPU_SCTRL_ACPU_SC_INT_STM_cpu_fiqout2cpu0_5_statm_END    (13)
#define SOC_ACPU_SCTRL_ACPU_SC_INT_STM_cpu_fiqout2cpu0_6_statm_START  (14)
#define SOC_ACPU_SCTRL_ACPU_SC_INT_STM_cpu_fiqout2cpu0_6_statm_END    (14)
#define SOC_ACPU_SCTRL_ACPU_SC_INT_STM_cpu_fiqout2cpu0_7_statm_START  (15)
#define SOC_ACPU_SCTRL_ACPU_SC_INT_STM_cpu_fiqout2cpu0_7_statm_END    (15)
#define SOC_ACPU_SCTRL_ACPU_SC_INT_STM_cpu_irqout0_statm_START        (16)
#define SOC_ACPU_SCTRL_ACPU_SC_INT_STM_cpu_irqout0_statm_END          (16)
#define SOC_ACPU_SCTRL_ACPU_SC_INT_STM_cpu_irqout1_statm_START        (17)
#define SOC_ACPU_SCTRL_ACPU_SC_INT_STM_cpu_irqout1_statm_END          (17)
#define SOC_ACPU_SCTRL_ACPU_SC_INT_STM_cpu_irqout2_statm_START        (18)
#define SOC_ACPU_SCTRL_ACPU_SC_INT_STM_cpu_irqout2_statm_END          (18)
#define SOC_ACPU_SCTRL_ACPU_SC_INT_STM_cpu_irqout3_statm_START        (19)
#define SOC_ACPU_SCTRL_ACPU_SC_INT_STM_cpu_irqout3_statm_END          (19)
#define SOC_ACPU_SCTRL_ACPU_SC_INT_STM_cpu_irqout4_statm_START        (20)
#define SOC_ACPU_SCTRL_ACPU_SC_INT_STM_cpu_irqout4_statm_END          (20)
#define SOC_ACPU_SCTRL_ACPU_SC_INT_STM_cpu_irqout5_statm_START        (21)
#define SOC_ACPU_SCTRL_ACPU_SC_INT_STM_cpu_irqout5_statm_END          (21)
#define SOC_ACPU_SCTRL_ACPU_SC_INT_STM_cpu_irqout6_statm_START        (22)
#define SOC_ACPU_SCTRL_ACPU_SC_INT_STM_cpu_irqout6_statm_END          (22)
#define SOC_ACPU_SCTRL_ACPU_SC_INT_STM_cpu_irqout7_statm_START        (23)
#define SOC_ACPU_SCTRL_ACPU_SC_INT_STM_cpu_irqout7_statm_END          (23)
#define SOC_ACPU_SCTRL_ACPU_SC_INT_STM_cpu_fiqout0_statm_START        (24)
#define SOC_ACPU_SCTRL_ACPU_SC_INT_STM_cpu_fiqout0_statm_END          (24)
#define SOC_ACPU_SCTRL_ACPU_SC_INT_STM_cpu_fiqout1_statm_START        (25)
#define SOC_ACPU_SCTRL_ACPU_SC_INT_STM_cpu_fiqout1_statm_END          (25)
#define SOC_ACPU_SCTRL_ACPU_SC_INT_STM_cpu_fiqout2_statm_START        (26)
#define SOC_ACPU_SCTRL_ACPU_SC_INT_STM_cpu_fiqout2_statm_END          (26)
#define SOC_ACPU_SCTRL_ACPU_SC_INT_STM_cpu_fiqout3_statm_START        (27)
#define SOC_ACPU_SCTRL_ACPU_SC_INT_STM_cpu_fiqout3_statm_END          (27)
#define SOC_ACPU_SCTRL_ACPU_SC_INT_STM_cpu_fiqout4_statm_START        (28)
#define SOC_ACPU_SCTRL_ACPU_SC_INT_STM_cpu_fiqout4_statm_END          (28)
#define SOC_ACPU_SCTRL_ACPU_SC_INT_STM_cpu_fiqout5_statm_START        (29)
#define SOC_ACPU_SCTRL_ACPU_SC_INT_STM_cpu_fiqout5_statm_END          (29)
#define SOC_ACPU_SCTRL_ACPU_SC_INT_STM_cpu_fiqout6_statm_START        (30)
#define SOC_ACPU_SCTRL_ACPU_SC_INT_STM_cpu_fiqout6_statm_END          (30)
#define SOC_ACPU_SCTRL_ACPU_SC_INT_STM_cpu_fiqout7_statm_START        (31)
#define SOC_ACPU_SCTRL_ACPU_SC_INT_STM_cpu_fiqout7_statm_END          (31)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_EN_UNION
 �ṹ˵��  : ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_EN �Ĵ����ṹ���塣��ַƫ����:0x0EC����ֵ:0x00000000�����:32
 �Ĵ���˵��: �ڲ��ж����μĴ������Ա���д1�������Σ�д0��Ӱ�����ε�״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  acpu_pmuirq0_en         : 1;  /* bit[0]    : [0]:pmuirq0 */
        unsigned int  acpu_pmuirq1_en         : 1;  /* bit[1]    : [1]:pmuirq1 */
        unsigned int  acpu_pmuirq2_en         : 1;  /* bit[2]    : [2]:pmuirq2 */
        unsigned int  acpu_pmuirq3_en         : 1;  /* bit[3]    : [3]:pmuirq3 */
        unsigned int  acpu_pmuirq4_en         : 1;  /* bit[4]    : [4]:pmuirq4 */
        unsigned int  acpu_pmuirq5_en         : 1;  /* bit[5]    : [5]:pmuirq5 */
        unsigned int  acpu_pmuirq6_en         : 1;  /* bit[6]    : [6]:pmuirq6 */
        unsigned int  acpu_pmuirq7_en         : 1;  /* bit[7]    : [7]:pmuirq7 */
        unsigned int  cci400_cnt_overflow0_en : 1;  /* bit[8]    : [8]:cci400_cnt_overflow0 */
        unsigned int  cci400_cnt_overflow1_en : 1;  /* bit[9]    : [9]:cci400_cnt_overflow1 */
        unsigned int  cci400_cnt_overflow2_en : 1;  /* bit[10]   : [10]:cci400_cnt_overflow2 */
        unsigned int  cci400_cnt_overflow3_en : 1;  /* bit[11]   : [11]:cci400_cnt_overflow3 */
        unsigned int  cci400_cnt_overflow4_en : 1;  /* bit[12]   : [12]:cci400_cnt_overflow4 */
        unsigned int  cci400_axi_err_en       : 1;  /* bit[13]   : [13]:cci400_axi_err */
        unsigned int  a53_0_axi_err_en        : 1;  /* bit[14]   : [14]:a53_0_axi_err */
        unsigned int  a53_1_axi_err_en        : 1;  /* bit[15]   : [15]:a53_1_axi_err */
        unsigned int  reserved                : 16; /* bit[16-31]: [31:16]�������� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_EN_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_EN_acpu_pmuirq0_en_START          (0)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_EN_acpu_pmuirq0_en_END            (0)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_EN_acpu_pmuirq1_en_START          (1)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_EN_acpu_pmuirq1_en_END            (1)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_EN_acpu_pmuirq2_en_START          (2)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_EN_acpu_pmuirq2_en_END            (2)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_EN_acpu_pmuirq3_en_START          (3)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_EN_acpu_pmuirq3_en_END            (3)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_EN_acpu_pmuirq4_en_START          (4)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_EN_acpu_pmuirq4_en_END            (4)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_EN_acpu_pmuirq5_en_START          (5)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_EN_acpu_pmuirq5_en_END            (5)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_EN_acpu_pmuirq6_en_START          (6)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_EN_acpu_pmuirq6_en_END            (6)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_EN_acpu_pmuirq7_en_START          (7)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_EN_acpu_pmuirq7_en_END            (7)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_EN_cci400_cnt_overflow0_en_START  (8)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_EN_cci400_cnt_overflow0_en_END    (8)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_EN_cci400_cnt_overflow1_en_START  (9)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_EN_cci400_cnt_overflow1_en_END    (9)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_EN_cci400_cnt_overflow2_en_START  (10)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_EN_cci400_cnt_overflow2_en_END    (10)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_EN_cci400_cnt_overflow3_en_START  (11)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_EN_cci400_cnt_overflow3_en_END    (11)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_EN_cci400_cnt_overflow4_en_START  (12)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_EN_cci400_cnt_overflow4_en_END    (12)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_EN_cci400_axi_err_en_START        (13)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_EN_cci400_axi_err_en_END          (13)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_EN_a53_0_axi_err_en_START         (14)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_EN_a53_0_axi_err_en_END           (14)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_EN_a53_1_axi_err_en_START         (15)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_EN_a53_1_axi_err_en_END           (15)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_DIS_UNION
 �ṹ˵��  : ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_DIS �Ĵ����ṹ���塣��ַƫ����:0x0F0����ֵ:0x00000000�����:32
 �Ĵ���˵��: �ڲ��ж����μĴ������Ա���д1����ֹ���Σ�д0��Ӱ��ʱ�����ε�״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  acpu_pmuirq0_dis         : 1;  /* bit[0]    : [0]:pmuirq0 */
        unsigned int  acpu_pmuirq1_dis         : 1;  /* bit[1]    : [1]:pmuirq1 */
        unsigned int  acpu_pmuirq2_dis         : 1;  /* bit[2]    : [2]:pmuirq2 */
        unsigned int  acpu_pmuirq3_dis         : 1;  /* bit[3]    : [3]:pmuirq3 */
        unsigned int  acpu_pmuirq4_dis         : 1;  /* bit[4]    : [4]:pmuirq4 */
        unsigned int  acpu_pmuirq5_dis         : 1;  /* bit[5]    : [5]:pmuirq5 */
        unsigned int  acpu_pmuirq6_dis         : 1;  /* bit[6]    : [6]:pmuirq6 */
        unsigned int  acpu_pmuirq7_dis         : 1;  /* bit[7]    : [7]:pmuirq7 */
        unsigned int  cci400_cnt_overflow0_dis : 1;  /* bit[8]    : [8]:cci400_cnt_overflow0 */
        unsigned int  cci400_cnt_overflow1_dis : 1;  /* bit[9]    : [9]:cci400_cnt_overflow1 */
        unsigned int  cci400_cnt_overflow2_dis : 1;  /* bit[10]   : [10]:cci400_cnt_overflow2 */
        unsigned int  cci400_cnt_overflow3_dis : 1;  /* bit[11]   : [11]:cci400_cnt_overflow3 */
        unsigned int  cci400_cnt_overflow4_dis : 1;  /* bit[12]   : [12]:cci400_cnt_overflow4 */
        unsigned int  cci400_axi_err_dis       : 1;  /* bit[13]   : [13]:cci400_axi_err */
        unsigned int  a53_0_axi_err_dis        : 1;  /* bit[14]   : [14]:a53_0_axi_err */
        unsigned int  a53_1_axi_err_dis        : 1;  /* bit[15]   : [15]:a53_1_axi_err */
        unsigned int  reserved                 : 16; /* bit[16-31]: [31:16]�������� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_DIS_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_DIS_acpu_pmuirq0_dis_START          (0)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_DIS_acpu_pmuirq0_dis_END            (0)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_DIS_acpu_pmuirq1_dis_START          (1)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_DIS_acpu_pmuirq1_dis_END            (1)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_DIS_acpu_pmuirq2_dis_START          (2)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_DIS_acpu_pmuirq2_dis_END            (2)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_DIS_acpu_pmuirq3_dis_START          (3)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_DIS_acpu_pmuirq3_dis_END            (3)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_DIS_acpu_pmuirq4_dis_START          (4)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_DIS_acpu_pmuirq4_dis_END            (4)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_DIS_acpu_pmuirq5_dis_START          (5)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_DIS_acpu_pmuirq5_dis_END            (5)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_DIS_acpu_pmuirq6_dis_START          (6)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_DIS_acpu_pmuirq6_dis_END            (6)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_DIS_acpu_pmuirq7_dis_START          (7)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_DIS_acpu_pmuirq7_dis_END            (7)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_DIS_cci400_cnt_overflow0_dis_START  (8)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_DIS_cci400_cnt_overflow0_dis_END    (8)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_DIS_cci400_cnt_overflow1_dis_START  (9)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_DIS_cci400_cnt_overflow1_dis_END    (9)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_DIS_cci400_cnt_overflow2_dis_START  (10)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_DIS_cci400_cnt_overflow2_dis_END    (10)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_DIS_cci400_cnt_overflow3_dis_START  (11)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_DIS_cci400_cnt_overflow3_dis_END    (11)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_DIS_cci400_cnt_overflow4_dis_START  (12)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_DIS_cci400_cnt_overflow4_dis_END    (12)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_DIS_cci400_axi_err_dis_START        (13)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_DIS_cci400_axi_err_dis_END          (13)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_DIS_a53_0_axi_err_dis_START         (14)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_DIS_a53_0_axi_err_dis_END           (14)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_DIS_a53_1_axi_err_dis_START         (15)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_DIS_a53_1_axi_err_dis_END           (15)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_STAT_UNION
 �ṹ˵��  : ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_STAT �Ĵ����ṹ���塣��ַƫ����:0x0F4����ֵ:0x00000000�����:32
 �Ĵ���˵��: �ڲ��ж�ʹ�ܼĴ���״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  acpu_pmuirq0_state         : 1;  /* bit[0]    : [0]:pmuirq0 */
        unsigned int  acpu_pmuirq1_state         : 1;  /* bit[1]    : [1]:pmuirq1 */
        unsigned int  acpu_pmuirq2_state         : 1;  /* bit[2]    : [2]:pmuirq2 */
        unsigned int  acpu_pmuirq3_state         : 1;  /* bit[3]    : [3]:pmuirq3 */
        unsigned int  acpu_pmuirq4_state         : 1;  /* bit[4]    : [4]:pmuirq4 */
        unsigned int  acpu_pmuirq5_state         : 1;  /* bit[5]    : [5]:pmuirq5 */
        unsigned int  acpu_pmuirq6_state         : 1;  /* bit[6]    : [6]:pmuirq6 */
        unsigned int  acpu_pmuirq7_state         : 1;  /* bit[7]    : [7]:pmuirq7 */
        unsigned int  cci400_cnt_overflow0_state : 1;  /* bit[8]    : [8]:cci400_cnt_overflow0 */
        unsigned int  cci400_cnt_overflow1_state : 1;  /* bit[9]    : [9]:cci400_cnt_overflow1 */
        unsigned int  cci400_cnt_overflow2_state : 1;  /* bit[10]   : [10]:cci400_cnt_overflow2 */
        unsigned int  cci400_cnt_overflow3_state : 1;  /* bit[11]   : [11]:cci400_cnt_overflow3 */
        unsigned int  cci400_cnt_overflow4_state : 1;  /* bit[12]   : [12]:cci400_cnt_overflow4 */
        unsigned int  cci400_axi_err_state       : 1;  /* bit[13]   : [13]:cci400_axi_err */
        unsigned int  a53_0_axi_err_state        : 1;  /* bit[14]   : [14]:a53_0_axi_err */
        unsigned int  a53_1_axi_err_state        : 1;  /* bit[15]   : [15]:a53_1_axi_err */
        unsigned int  a53_0_ctiirq_state         : 4;  /* bit[16-19]:  */
        unsigned int  a53_1_ctiirq_state         : 4;  /* bit[20-23]:  */
        unsigned int  a53_0_commirq_state        : 1;  /* bit[24]   :  */
        unsigned int  a53_1_commirq_state        : 1;  /* bit[25]   :  */
        unsigned int  reserved                   : 6;  /* bit[26-31]: [31:16]�������� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_STAT_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_STAT_acpu_pmuirq0_state_START          (0)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_STAT_acpu_pmuirq0_state_END            (0)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_STAT_acpu_pmuirq1_state_START          (1)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_STAT_acpu_pmuirq1_state_END            (1)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_STAT_acpu_pmuirq2_state_START          (2)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_STAT_acpu_pmuirq2_state_END            (2)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_STAT_acpu_pmuirq3_state_START          (3)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_STAT_acpu_pmuirq3_state_END            (3)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_STAT_acpu_pmuirq4_state_START          (4)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_STAT_acpu_pmuirq4_state_END            (4)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_STAT_acpu_pmuirq5_state_START          (5)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_STAT_acpu_pmuirq5_state_END            (5)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_STAT_acpu_pmuirq6_state_START          (6)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_STAT_acpu_pmuirq6_state_END            (6)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_STAT_acpu_pmuirq7_state_START          (7)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_STAT_acpu_pmuirq7_state_END            (7)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_STAT_cci400_cnt_overflow0_state_START  (8)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_STAT_cci400_cnt_overflow0_state_END    (8)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_STAT_cci400_cnt_overflow1_state_START  (9)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_STAT_cci400_cnt_overflow1_state_END    (9)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_STAT_cci400_cnt_overflow2_state_START  (10)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_STAT_cci400_cnt_overflow2_state_END    (10)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_STAT_cci400_cnt_overflow3_state_START  (11)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_STAT_cci400_cnt_overflow3_state_END    (11)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_STAT_cci400_cnt_overflow4_state_START  (12)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_STAT_cci400_cnt_overflow4_state_END    (12)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_STAT_cci400_axi_err_state_START        (13)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_STAT_cci400_axi_err_state_END          (13)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_STAT_a53_0_axi_err_state_START         (14)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_STAT_a53_0_axi_err_state_END           (14)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_STAT_a53_1_axi_err_state_START         (15)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_STAT_a53_1_axi_err_state_END           (15)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_STAT_a53_0_ctiirq_state_START          (16)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_STAT_a53_0_ctiirq_state_END            (19)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_STAT_a53_1_ctiirq_state_START          (20)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_STAT_a53_1_ctiirq_state_END            (23)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_STAT_a53_0_commirq_state_START         (24)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_STAT_a53_0_commirq_state_END           (24)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_STAT_a53_1_commirq_state_START         (25)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_STAT_a53_1_commirq_state_END           (25)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_STM_UNION
 �ṹ˵��  : ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_STM �Ĵ����ṹ���塣��ַƫ����:0x0F8����ֵ:0x00000000�����:32
 �Ĵ���˵��: ���κ��ж�״̬�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  acpu_pmuirq0_stm         : 1;  /* bit[0]    :  */
        unsigned int  acpu_pmuirq1_stm         : 1;  /* bit[1]    :  */
        unsigned int  acpu_pmuirq2_stm         : 1;  /* bit[2]    :  */
        unsigned int  acpu_pmuirq3_stm         : 1;  /* bit[3]    :  */
        unsigned int  acpu_pmuirq4_stm         : 1;  /* bit[4]    :  */
        unsigned int  acpu_pmuirq5_stm         : 1;  /* bit[5]    :  */
        unsigned int  acpu_pmuirq6_stm         : 1;  /* bit[6]    :  */
        unsigned int  acpu_pmuirq7_stm         : 1;  /* bit[7]    :  */
        unsigned int  cci400_cnt_overflow0_stm : 1;  /* bit[8]    :  */
        unsigned int  cci400_cnt_overflow1_stm : 1;  /* bit[9]    :  */
        unsigned int  cci400_cnt_overflow2_stm : 1;  /* bit[10]   :  */
        unsigned int  cci400_cnt_overflow3_stm : 1;  /* bit[11]   :  */
        unsigned int  cci400_cnt_overflow4_stm : 1;  /* bit[12]   :  */
        unsigned int  cci400_axi_err_stm       : 1;  /* bit[13]   :  */
        unsigned int  a53_0_axi_err_stm        : 1;  /* bit[14]   :  */
        unsigned int  a53_1_axi_err_stm        : 1;  /* bit[15]   :  */
        unsigned int  a53_0_ctiirq_stm         : 4;  /* bit[16-19]:  */
        unsigned int  a53_1_ctiirq_stm         : 4;  /* bit[20-23]:  */
        unsigned int  a53_0_commirq_stm        : 1;  /* bit[24]   :  */
        unsigned int  a53_1_commirq_stm        : 1;  /* bit[25]   :  */
        unsigned int  reserved                 : 6;  /* bit[26-31]: [31:16]reserved */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_STM_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_STM_acpu_pmuirq0_stm_START          (0)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_STM_acpu_pmuirq0_stm_END            (0)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_STM_acpu_pmuirq1_stm_START          (1)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_STM_acpu_pmuirq1_stm_END            (1)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_STM_acpu_pmuirq2_stm_START          (2)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_STM_acpu_pmuirq2_stm_END            (2)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_STM_acpu_pmuirq3_stm_START          (3)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_STM_acpu_pmuirq3_stm_END            (3)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_STM_acpu_pmuirq4_stm_START          (4)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_STM_acpu_pmuirq4_stm_END            (4)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_STM_acpu_pmuirq5_stm_START          (5)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_STM_acpu_pmuirq5_stm_END            (5)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_STM_acpu_pmuirq6_stm_START          (6)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_STM_acpu_pmuirq6_stm_END            (6)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_STM_acpu_pmuirq7_stm_START          (7)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_STM_acpu_pmuirq7_stm_END            (7)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_STM_cci400_cnt_overflow0_stm_START  (8)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_STM_cci400_cnt_overflow0_stm_END    (8)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_STM_cci400_cnt_overflow1_stm_START  (9)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_STM_cci400_cnt_overflow1_stm_END    (9)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_STM_cci400_cnt_overflow2_stm_START  (10)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_STM_cci400_cnt_overflow2_stm_END    (10)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_STM_cci400_cnt_overflow3_stm_START  (11)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_STM_cci400_cnt_overflow3_stm_END    (11)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_STM_cci400_cnt_overflow4_stm_START  (12)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_STM_cci400_cnt_overflow4_stm_END    (12)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_STM_cci400_axi_err_stm_START        (13)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_STM_cci400_axi_err_stm_END          (13)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_STM_a53_0_axi_err_stm_START         (14)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_STM_a53_0_axi_err_stm_END           (14)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_STM_a53_1_axi_err_stm_START         (15)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_STM_a53_1_axi_err_stm_END           (15)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_STM_a53_0_ctiirq_stm_START          (16)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_STM_a53_0_ctiirq_stm_END            (19)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_STM_a53_1_ctiirq_stm_START          (20)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_STM_a53_1_ctiirq_stm_END            (23)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_STM_a53_0_commirq_stm_START         (24)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_STM_a53_0_commirq_stm_END           (24)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_STM_a53_1_commirq_stm_START         (25)
#define SOC_ACPU_SCTRL_ACPU_SC_PMUIRQ_CCI400CNT_OVERFLOW_INT_STM_a53_1_commirq_stm_END           (25)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU0_CTRL_UNION
 �ṹ˵��  : ACPU_SC_CPU0_CTRL �Ĵ����ṹ���塣��ַƫ����:0x100����ֵ:0x00000068�����:32
 �Ĵ���˵��: ACPU��ϵͳ�ϵ����üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cp15disable0       : 1;  /* bit[0]    : CPU0 cp15 ��ȫ�Ĵ�����ֹ����
                                                              0: �������
                                                              1: ��ֹ���� */
        unsigned int  reserved_0         : 1;  /* bit[1]    : ���� */
        unsigned int  edbgrq0            : 1;  /* bit[2]    : ʹ��A53 integration ��edbgrq0
                                                              0: ��ֹ
                                                              1: ʹ�� */
        unsigned int  vinithi0           : 1;  /* bit[3]    : CPU0 ��������ַ������
                                                              0: ��λ��ַ
                                                              1: ��λ��ַ */
        unsigned int  reserved_1         : 1;  /* bit[4]    : ���� */
        unsigned int  bypass_warmrstreq0 : 1;  /* bit[5]    : bypass cpu0��warm reset
                                                              0: ��ִ���ȸ�λ��bypass
                                                              1: ִ���ȸ�λ */
        unsigned int  bypass_dbgrstreq0  : 1;  /* bit[6]    : bypass cpu0��dbg warm reset
                                                              0: ��ִ���ȸ�λ��bypass
                                                              1: ִ���ȸ�λ */
        unsigned int  aa64naa32_0        : 1;  /* bit[7]    : 0 AArch32
                                                              1 AArch64 */
        unsigned int  cfgend0            : 1;  /* bit[8]    : 0 С����
                                                              1 ����� */
        unsigned int  cfgte0             : 1;  /* bit[9]    : 0 ��ʹ��T32
                                                              1 ʹ��T32 */
        unsigned int  cryptodisable0     : 1;  /* bit[10]   : ��ʹ��crypto����
                                                              0 ʹ�ܼ��ܹ���
                                                              1 ��ʹ�ܼ��ܹ��� */
        unsigned int  reserved_2         : 21; /* bit[11-31]: [31��11]������ */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU0_CTRL_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_CTRL_cp15disable0_START        (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_CTRL_cp15disable0_END          (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_CTRL_edbgrq0_START             (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_CTRL_edbgrq0_END               (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_CTRL_vinithi0_START            (3)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_CTRL_vinithi0_END              (3)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_CTRL_bypass_warmrstreq0_START  (5)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_CTRL_bypass_warmrstreq0_END    (5)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_CTRL_bypass_dbgrstreq0_START   (6)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_CTRL_bypass_dbgrstreq0_END     (6)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_CTRL_aa64naa32_0_START         (7)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_CTRL_aa64naa32_0_END           (7)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_CTRL_cfgend0_START             (8)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_CTRL_cfgend0_END               (8)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_CTRL_cfgte0_START              (9)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_CTRL_cfgte0_END                (9)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_CTRL_cryptodisable0_START      (10)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_CTRL_cryptodisable0_END        (10)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU0_STAT_UNION
 �ṹ˵��  : ACPU_SC_CPU0_STAT �Ĵ����ṹ���塣��ַƫ����:0x104����ֵ:0x00000000�����:32
 �Ĵ���˵��: ϵͳ״̬�Ĵ��������ڼ��ϵͳ��״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_smpnamp0    : 1;  /* bit[0]   : ���ñ��ؿ��Զ���CPU0��ϵͳ�����sc_smpnamp0�źŵ�ֵ��
                                                         0:Asymmetric
                                                         1:Symmetric. */
        unsigned int  sc_standbywfi0 : 1;  /* bit[1]   : ���ñ��ؿ��Զ���CPU0��ϵͳ�����sc_standbywfi�źŵ�ֵ��
                                                         0:processor not in WFE Standby mode
                                                         1:processor in WFE Standby mode. */
        unsigned int  sc_standbywfe0 : 1;  /* bit[2]   : ���ñ��ؿ��Զ���CPU0��ϵͳ�����sc_standbywfe�źŵ�ֵ��
                                                         0:processor not in WFE Standby mode
                                                         1:processor in WFE Standby mode. */
        unsigned int  aarm_dbgack0   : 1;  /* bit[3]   : aarm_dbgack��AARM��debugacknowledge״ָ̬ʾ�źţ�
                                                         0:not acknowledged
                                                         1:acknowledged. */
        unsigned int  reserved_0     : 1;  /* bit[4]   : ���� */
        unsigned int  dbgrstreq0     : 1;  /* bit[5]   : dbg Warm reset request */
        unsigned int  warmrstreq0    : 1;  /* bit[6]   : Warm reset request */
        unsigned int  reserved_1     : 25; /* bit[7-31]: [31:7]���� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU0_STAT_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_STAT_sc_smpnamp0_START     (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_STAT_sc_smpnamp0_END       (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_STAT_sc_standbywfi0_START  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_STAT_sc_standbywfi0_END    (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_STAT_sc_standbywfe0_START  (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_STAT_sc_standbywfe0_END    (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_STAT_aarm_dbgack0_START    (3)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_STAT_aarm_dbgack0_END      (3)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_STAT_dbgrstreq0_START      (5)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_STAT_dbgrstreq0_END        (5)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_STAT_warmrstreq0_START     (6)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_STAT_warmrstreq0_END       (6)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU0_CLKEN_UNION
 �ṹ˵��  : ACPU_SC_CPU0_CLKEN �Ĵ����ṹ���塣��ַƫ����:0x108����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳʱ���ſ����üĴ���������Ӧλд1ʹ����Ӧʱ�ӣ�д0��Ӱ�졣
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved_0         : 1;  /* bit[0]   : [0]�������� 
                                                               */
        unsigned int  hpm_cpucore0_clken : 1;  /* bit[1]   : hpm cpucore0 ����ʱ���ſ�ʹ��
                                                             1'b1: ʱ��ʹ�ܣ� 
                                                             1'b0: ��Ч */
        unsigned int  reserved_1         : 1;  /* bit[2]   : [2]�������� 
                                                               */
        unsigned int  reserved_2         : 29; /* bit[3-31]: [31:3]�������� 
                                                               */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU0_CLKEN_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_CLKEN_hpm_cpucore0_clken_START  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_CLKEN_hpm_cpucore0_clken_END    (1)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU0_CLKDIS_UNION
 �ṹ˵��  : ACPU_SC_CPU0_CLKDIS �Ĵ����ṹ���塣��ַƫ����:0x10C����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳʱ���ſ����üĴ���������Ӧλд1��ֹ��Ӧʱ�ӣ�д0��Ӱ�졣
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved_0          : 1;  /* bit[0]   : [0]�������� 
                                                                */
        unsigned int  hpm_cpucore0_clkdis : 1;  /* bit[1]   : hpm cpucore0 ����ʱ���ſ�ʹ��
                                                              1'b1: ʱ�ӹر� 
                                                              1'b0: ��Ч */
        unsigned int  reserved_1          : 1;  /* bit[2]   : [2]�������� 
                                                                */
        unsigned int  reserved_2          : 29; /* bit[3-31]: [31:3]�������� 
                                                                */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU0_CLKDIS_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_CLKDIS_hpm_cpucore0_clkdis_START  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_CLKDIS_hpm_cpucore0_clkdis_END    (1)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU0_CLK_STAT_UNION
 �ṹ˵��  : ACPU_SC_CPU0_CLK_STAT �Ĵ����ṹ���塣��ַƫ����:0x110����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳʱ��״̬�Ĵ�����0��ʾʱ����Ӧ�رգ�1��ʾ�򿪡�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved_0          : 1;  /* bit[0]   : [0]�������� 
                                                                */
        unsigned int  hpm_cpucore0_clksta : 1;  /* bit[1]   : hpm cpucore0 ����ʱ���ſ�ʹ��
                                                              1'b1: ʱ��ʹ�ܣ� 
                                                              1'b0: ʱ�ӹر� */
        unsigned int  reserved_1          : 1;  /* bit[2]   : [0]�������� 
                                                                */
        unsigned int  reserved_2          : 29; /* bit[3-31]: [0]�������� 
                                                                */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU0_CLK_STAT_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_CLK_STAT_hpm_cpucore0_clksta_START  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_CLK_STAT_hpm_cpucore0_clksta_END    (1)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU0_RSTEN_UNION
 �ṹ˵��  : ACPU_SC_CPU0_RSTEN �Ĵ����ṹ���塣��ַƫ����:0x114����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳ��λʹ�ܼĴ���������Ӧλд1ʹ����Ӧ��λ�źţ������븴λ̬����д0��Ӱ�졣�üĴ���ֻ���ϵ縴λʱ����λ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  srst_aarm_por0_rsten         : 1;  /* bit[0]    : A53 integration��por 0��λ���� */
        unsigned int  srst_aarm_core0_rsten        : 1;  /* bit[1]    : A53 integration��core 0��λ���� */
        unsigned int  reserved_0                   : 2;  /* bit[2-3]  : ������ 
                                                                          */
        unsigned int  srst_aarm_hpm0_rsten         : 1;  /* bit[4]    : A53 integration��hpm0��λ���� */
        unsigned int  reserved_1                   : 3;  /* bit[5-7]  : ���� */
        unsigned int  srst_aarm_por0_npwron_rsten  : 1;  /* bit[8]    : A53 integration��por 0��λ���� */
        unsigned int  srst_aarm_core0_npwron_rsten : 1;  /* bit[9]    : A53 integration��core 0��λ���� */
        unsigned int  reserved_2                   : 22; /* bit[10-31]: ������ 
                                                                          */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU0_RSTEN_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_RSTEN_srst_aarm_por0_rsten_START          (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_RSTEN_srst_aarm_por0_rsten_END            (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_RSTEN_srst_aarm_core0_rsten_START         (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_RSTEN_srst_aarm_core0_rsten_END           (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_RSTEN_srst_aarm_hpm0_rsten_START          (4)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_RSTEN_srst_aarm_hpm0_rsten_END            (4)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_RSTEN_srst_aarm_por0_npwron_rsten_START   (8)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_RSTEN_srst_aarm_por0_npwron_rsten_END     (8)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_RSTEN_srst_aarm_core0_npwron_rsten_START  (9)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_RSTEN_srst_aarm_core0_npwron_rsten_END    (9)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU0_RSTDIS_UNION
 �ṹ˵��  : ACPU_SC_CPU0_RSTDIS �Ĵ����ṹ���塣��ַƫ����:0x118����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳ��λ��ֹ�Ĵ��������ڿ��Ƹ��������ܵĸ�λ��ֹ������Ӧλд1��ֹ��Ӧ��������λ�źţ����˳���λ̬����д0��Ӱ�졣�üĴ���ֻ���ϵ縴λʱ����λ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  srst_aarm_por0_rstdis         : 1;  /* bit[0]    : A53 integration��por 0��λ���� */
        unsigned int  srst_aarm_core0_rstdis        : 1;  /* bit[1]    : A53 integration��core 0��λ���� */
        unsigned int  reserved_0                    : 2;  /* bit[2-3]  : ������ 
                                                                           */
        unsigned int  srst_aarm_hpm0_rstdis         : 1;  /* bit[4]    : A53 integration��hpm0��λ���� */
        unsigned int  reserved_1                    : 3;  /* bit[5-7]  : ���� */
        unsigned int  srst_aarm_por0_npwron_rstdis  : 1;  /* bit[8]    : A53 integration��por 0��λ���� */
        unsigned int  srst_aarm_core0_npwron_rstdis : 1;  /* bit[9]    : A53 integration��core 0��λ���� */
        unsigned int  reserved_2                    : 22; /* bit[10-31]: ������ 
                                                                           */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU0_RSTDIS_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_RSTDIS_srst_aarm_por0_rstdis_START          (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_RSTDIS_srst_aarm_por0_rstdis_END            (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_RSTDIS_srst_aarm_core0_rstdis_START         (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_RSTDIS_srst_aarm_core0_rstdis_END           (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_RSTDIS_srst_aarm_hpm0_rstdis_START          (4)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_RSTDIS_srst_aarm_hpm0_rstdis_END            (4)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_RSTDIS_srst_aarm_por0_npwron_rstdis_START   (8)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_RSTDIS_srst_aarm_por0_npwron_rstdis_END     (8)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_RSTDIS_srst_aarm_core0_npwron_rstdis_START  (9)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_RSTDIS_srst_aarm_core0_npwron_rstdis_END    (9)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU0_RST_STAT_UNION
 �ṹ˵��  : ACPU_SC_CPU0_RST_STAT �Ĵ����ṹ���塣��ַƫ����:0x11C����ֵ:0x00000310�����:32
 �Ĵ���˵��: ACPU��ϵͳ��λ״̬�Ĵ�����0��ʾ��λ��ʹ�ܣ�1��λʹ�ܼ����븴λ̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  srst_aarm_por0_rststa         : 1;  /* bit[0]    : A53 integration��por 0��λ���� */
        unsigned int  srst_aarm_core0_rststa        : 1;  /* bit[1]    : A53 integration��core 0��λ���� */
        unsigned int  reserved_0                    : 2;  /* bit[2-3]  : ������ 
                                                                           */
        unsigned int  srst_aarm_hpm0_rststa         : 1;  /* bit[4]    : A53 integration��hpm0��λ���� */
        unsigned int  reserved_1                    : 3;  /* bit[5-7]  : ���� */
        unsigned int  srst_aarm_por0_npwron_rststa  : 1;  /* bit[8]    : A53 integration��por 0��λ���� */
        unsigned int  srst_aarm_core0_npwron_rststa : 1;  /* bit[9]    : A53 integration��core 0��λ���� */
        unsigned int  reserved_2                    : 22; /* bit[10-31]: ������ 
                                                                           */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU0_RST_STAT_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_RST_STAT_srst_aarm_por0_rststa_START          (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_RST_STAT_srst_aarm_por0_rststa_END            (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_RST_STAT_srst_aarm_core0_rststa_START         (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_RST_STAT_srst_aarm_core0_rststa_END           (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_RST_STAT_srst_aarm_hpm0_rststa_START          (4)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_RST_STAT_srst_aarm_hpm0_rststa_END            (4)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_RST_STAT_srst_aarm_por0_npwron_rststa_START   (8)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_RST_STAT_srst_aarm_por0_npwron_rststa_END     (8)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_RST_STAT_srst_aarm_core0_npwron_rststa_START  (9)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_RST_STAT_srst_aarm_core0_npwron_rststa_END    (9)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU0_MTCMOS_EN_UNION
 �ṹ˵��  : ACPU_SC_CPU0_MTCMOS_EN �Ĵ����ṹ���塣��ַƫ����:0x120����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳ�ϵ�����Ĵ��������ڸ������������ϵ������źţ�����Ӧλд1�����ϵ�����д0��Ӱ�졣
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pw_mtcmos_en_acpu0         : 1;  /* bit[0]   : [0] ��ACPU0�µ��� */
        unsigned int  reserved_0                 : 7;  /* bit[1-7] : ���� */
        unsigned int  pw_mtcmos_en_acpu0_cpuidle : 1;  /* bit[8]   : [8] ��ACPU0�µ��� */
        unsigned int  reserved_1                 : 23; /* bit[9-31]: ������  */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU0_MTCMOS_EN_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_MTCMOS_EN_pw_mtcmos_en_acpu0_START          (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_MTCMOS_EN_pw_mtcmos_en_acpu0_END            (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_MTCMOS_EN_pw_mtcmos_en_acpu0_cpuidle_START  (8)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_MTCMOS_EN_pw_mtcmos_en_acpu0_cpuidle_END    (8)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU0_MTCMOS_DIS_UNION
 �ṹ˵��  : ACPU_SC_CPU0_MTCMOS_DIS �Ĵ����ṹ���塣��ַƫ����:0x124����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳ�ϵ������ֹ�Ĵ��������ڸ���������ֹ�ϵ������źţ�����Ӧλд1��ֹ�ϵ�����д0��Ӱ�졣
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pw_mtcmos_dis_acpu0         : 1;  /* bit[0]   : [0] ��ACPU0�µ��� */
        unsigned int  reserved_0                  : 7;  /* bit[1-7] : ���� */
        unsigned int  pw_mtcmos_dis_acpu0_cpuidle : 1;  /* bit[8]   : [8] ��ACPU0�µ��� */
        unsigned int  reserved_1                  : 23; /* bit[9-31]: ������  */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU0_MTCMOS_DIS_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_MTCMOS_DIS_pw_mtcmos_dis_acpu0_START          (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_MTCMOS_DIS_pw_mtcmos_dis_acpu0_END            (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_MTCMOS_DIS_pw_mtcmos_dis_acpu0_cpuidle_START  (8)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_MTCMOS_DIS_pw_mtcmos_dis_acpu0_cpuidle_END    (8)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU0_MTCMOS_STAT_UNION
 �ṹ˵��  : ACPU_SC_CPU0_MTCMOS_STAT �Ĵ����ṹ���塣��ַƫ����:0x128����ֵ:0x00000001�����:32
 �Ĵ���˵��: ACPU��ϵͳ�ϵ�����״̬�Ĵ�������ӦλΪ1��ʾ��������״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pw_mtcmos_sta_acpu0         : 1;  /* bit[0]   : [0] ��ACPU0�µ��� */
        unsigned int  reserved_0                  : 7;  /* bit[1-7] : ���� */
        unsigned int  pw_mtcmos_sta_acpu0_cpuidle : 1;  /* bit[8]   : [8] ��ACPU0�µ��� */
        unsigned int  reserved_1                  : 23; /* bit[9-31]: ������  */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU0_MTCMOS_STAT_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_MTCMOS_STAT_pw_mtcmos_sta_acpu0_START          (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_MTCMOS_STAT_pw_mtcmos_sta_acpu0_END            (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_MTCMOS_STAT_pw_mtcmos_sta_acpu0_cpuidle_START  (8)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_MTCMOS_STAT_pw_mtcmos_sta_acpu0_cpuidle_END    (8)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU0_MTCMOS_ACK_STAT_UNION
 �ṹ˵��  : ACPU_SC_CPU0_MTCMOS_ACK_STAT �Ĵ����ṹ���塣��ַƫ����:0x12C����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳ�ϵ練����ѯ�Ĵ��������ڲ�ѯ�������������ϵ������źź��Ƿ񷵻�ACK������ӦλΪ1��ʾ�����µ磬Ϊ0��ʾ������
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pw_mtcmos_acksta_acpu0 : 1;  /* bit[0]   : [0] ��ACPU0�µ��� */
        unsigned int  reserved               : 31; /* bit[1-31]: [31:1]��������  */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU0_MTCMOS_ACK_STAT_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_MTCMOS_ACK_STAT_pw_mtcmos_acksta_acpu0_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_MTCMOS_ACK_STAT_pw_mtcmos_acksta_acpu0_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU0_PW_ISOEN_UNION
 �ṹ˵��  : ACPU_SC_CPU0_PW_ISOEN �Ĵ����ṹ���塣��ַƫ����:0x130����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳISOʹ�ܼĴ��������ڿ��Ƹ���������ص�Isolation Cellʹ�ܡ�����Ӧλд1ʹ����Ӧ������IsoLation Cell�����źŸ��ϣ���д0��Ӱ�졣�üĴ���ֻ���ϵ縴λʱ����λ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pw_isoen_acpu0         : 1;  /* bit[0]   : [0] ��ACPU0�µ��� */
        unsigned int  reserved_0             : 7;  /* bit[1-7] : ���� */
        unsigned int  pw_isoen_acpu0_cpuidle : 1;  /* bit[8]   : ACPU0�µ��� */
        unsigned int  reserved_1             : 23; /* bit[9-31]: ������  */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU0_PW_ISOEN_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_PW_ISOEN_pw_isoen_acpu0_START          (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_PW_ISOEN_pw_isoen_acpu0_END            (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_PW_ISOEN_pw_isoen_acpu0_cpuidle_START  (8)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_PW_ISOEN_pw_isoen_acpu0_cpuidle_END    (8)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU0_PW_ISODIS_UNION
 �ṹ˵��  : ACPU_SC_CPU0_PW_ISODIS �Ĵ����ṹ���塣��ַƫ����:0x134����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳISO��ֹ�Ĵ��������ڿ��Ƹ���������ص�Isolation Cell��ֹ������Ӧλд1��ֹ��Ӧ������IsoLation Cell�����źŲ����ϣ���д0��Ӱ�졣�üĴ���ֻ���ϵ縴λʱ����λ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pw_isodis_acpu0         : 1;  /* bit[0]   : [0] ��ACPU0�µ��� */
        unsigned int  reserved_0              : 7;  /* bit[1-7] : ���� */
        unsigned int  pw_isodis_acpu0_cpuidle : 1;  /* bit[8]   : ACPU0�µ��� */
        unsigned int  reserved_1              : 23; /* bit[9-31]: ������  */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU0_PW_ISODIS_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_PW_ISODIS_pw_isodis_acpu0_START          (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_PW_ISODIS_pw_isodis_acpu0_END            (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_PW_ISODIS_pw_isodis_acpu0_cpuidle_START  (8)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_PW_ISODIS_pw_isodis_acpu0_cpuidle_END    (8)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU0_PW_ISO_STAT_UNION
 �ṹ˵��  : ACPU_SC_CPU0_PW_ISO_STAT �Ĵ����ṹ���塣��ַƫ����:0x138����ֵ:0x00000101�����:32
 �Ĵ���˵��: ACPU��ϵͳISO״̬�Ĵ�����0��ʾisolation��ʹ�ܣ�1��ʾisolationʹ�ܡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pw_iso_stat_acpu0        : 1;  /* bit[0]   : [0] ��ACPU0�µ��� */
        unsigned int  reserved_0               : 7;  /* bit[1-7] : ���� */
        unsigned int  pw_iso_sta_acpu0_cpuidle : 1;  /* bit[8]   : ACPU0�µ��� */
        unsigned int  reserved_1               : 23; /* bit[9-31]: ������  */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU0_PW_ISO_STAT_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_PW_ISO_STAT_pw_iso_stat_acpu0_START         (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_PW_ISO_STAT_pw_iso_stat_acpu0_END           (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_PW_ISO_STAT_pw_iso_sta_acpu0_cpuidle_START  (8)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_PW_ISO_STAT_pw_iso_sta_acpu0_cpuidle_END    (8)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU0_INT_EN_UNION
 �ṹ˵��  : ACPU_SC_CPU0_INT_EN �Ĵ����ṹ���塣��ַƫ����:0x13C����ֵ:0x00000000�����:32
 �Ĵ���˵��: �ڲ��ж����μĴ������Ա���д1�������Σ�д0��Ӱ�����ε�״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cpu_irqout2mcu0_en   : 1;  /* bit[0]   : [0]:irq0 */
        unsigned int  cpu_irqout2cpu0_0_en : 1;  /* bit[1]   : [1]:irq2cpu0_0 */
        unsigned int  cpu_fiqout2mcu0_en   : 1;  /* bit[2]   : [2]:fiq0 */
        unsigned int  cpu_fiqout2cpu0_0_en : 1;  /* bit[3]   : [3]:fiq2cpu0_0 */
        unsigned int  reserved             : 28; /* bit[4-31]: [31:4]�������� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU0_INT_EN_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_INT_EN_cpu_irqout2mcu0_en_START    (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_INT_EN_cpu_irqout2mcu0_en_END      (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_INT_EN_cpu_irqout2cpu0_0_en_START  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_INT_EN_cpu_irqout2cpu0_0_en_END    (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_INT_EN_cpu_fiqout2mcu0_en_START    (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_INT_EN_cpu_fiqout2mcu0_en_END      (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_INT_EN_cpu_fiqout2cpu0_0_en_START  (3)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_INT_EN_cpu_fiqout2cpu0_0_en_END    (3)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU0_INT_DIS_UNION
 �ṹ˵��  : ACPU_SC_CPU0_INT_DIS �Ĵ����ṹ���塣��ַƫ����:0x140����ֵ:0x00000000�����:32
 �Ĵ���˵��: �ڲ��ж����μĴ������Ա���д1����ֹ���Σ�д0��Ӱ��ʱ�����ε�״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cpu_irqout2mcu0_dis   : 1;  /* bit[0]   : [0]:irq0 */
        unsigned int  cpu_irqout2cpu0_0_dis : 1;  /* bit[1]   : [0]:irq2cpu0_0 */
        unsigned int  cpu_fiqout2mcu0_dis   : 1;  /* bit[2]   : [1]:fiq0 */
        unsigned int  cpu_fiqout2cpu0_0_dis : 1;  /* bit[3]   : [1]:fiq2cpu0_0 */
        unsigned int  reserved              : 28; /* bit[4-31]: [31:4]�������� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU0_INT_DIS_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_INT_DIS_cpu_irqout2mcu0_dis_START    (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_INT_DIS_cpu_irqout2mcu0_dis_END      (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_INT_DIS_cpu_irqout2cpu0_0_dis_START  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_INT_DIS_cpu_irqout2cpu0_0_dis_END    (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_INT_DIS_cpu_fiqout2mcu0_dis_START    (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_INT_DIS_cpu_fiqout2mcu0_dis_END      (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_INT_DIS_cpu_fiqout2cpu0_0_dis_START  (3)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_INT_DIS_cpu_fiqout2cpu0_0_dis_END    (3)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU0_INT_STAT_UNION
 �ṹ˵��  : ACPU_SC_CPU0_INT_STAT �Ĵ����ṹ���塣��ַƫ����:0x144����ֵ:0x00000000�����:32
 �Ĵ���˵��: �ڲ��ж�ʹ�ܼĴ���������SC�ڲ��жϵ��������á���ӦbitΪ1��ʾʹ����Ӧ�жϣ�Ϊ0��ʾ�����жϡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cpu_irqout0_state       : 1;  /* bit[0]   : [0]:irq0 */
        unsigned int  cpu_irqout2cpu0_0_state : 1;  /* bit[1]   : [0]:irq2cpu0_0 */
        unsigned int  cpu_fiqout0_state       : 1;  /* bit[2]   : [1]:fiq0 */
        unsigned int  cpu_fiqout2cpu0_0_state : 1;  /* bit[3]   : [1]:fiq0 */
        unsigned int  reserved                : 28; /* bit[4-31]: [31:4]�������� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU0_INT_STAT_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_INT_STAT_cpu_irqout0_state_START        (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_INT_STAT_cpu_irqout0_state_END          (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_INT_STAT_cpu_irqout2cpu0_0_state_START  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_INT_STAT_cpu_irqout2cpu0_0_state_END    (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_INT_STAT_cpu_fiqout0_state_START        (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_INT_STAT_cpu_fiqout0_state_END          (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_INT_STAT_cpu_fiqout2cpu0_0_state_START  (3)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_INT_STAT_cpu_fiqout2cpu0_0_state_END    (3)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU0_INT_STATR_UNION
 �ṹ˵��  : ACPU_SC_CPU0_INT_STATR �Ĵ����ṹ���塣��ַƫ����:0x148����ֵ:0x00000000�����:32
 �Ĵ���˵��: ԭʼ�ڲ��жϼĴ���������ָʾSC�ڲ���ԭʼ�ж�״̬������ǰ������ӦbitΪ1��ʾ���жϣ�Ϊ0��ʾ���жϡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cpu_irqout2mcu0_statr : 1;  /* bit[0]   : [0]:irq0 */
        unsigned int  cpu_fiqout0_statr     : 1;  /* bit[1]   : [1]:fiq0 */
        unsigned int  reserved              : 30; /* bit[2-31]: [31:2]�������� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU0_INT_STATR_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_INT_STATR_cpu_irqout2mcu0_statr_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_INT_STATR_cpu_irqout2mcu0_statr_END    (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_INT_STATR_cpu_fiqout0_statr_START      (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_INT_STATR_cpu_fiqout0_statr_END        (1)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU0_INT_STATM_UNION
 �ṹ˵��  : ACPU_SC_CPU0_INT_STATM �Ĵ����ṹ���塣��ַƫ����:0x14C����ֵ:0x00000000�����:32
 �Ĵ���˵��: ���κ��ڲ��жϼĴ���������ָʾSC��ǰ�ڲ��ж�״̬�����κ󣩡���ӦbitΪ1��ʾ���жϣ�Ϊ0��ʾ���жϡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cpu_irqout2mcu0_statm   : 1;  /* bit[0]   : [0]:irq0 */
        unsigned int  cpu_irqout2cpu0_0_statm : 1;  /* bit[1]   : [0]:irq2cpu0_0 */
        unsigned int  cpu_fiqout0_statm       : 1;  /* bit[2]   : [1]:fiq0 */
        unsigned int  cpu_fiqout2cpu0_0_statm : 1;  /* bit[3]   : [1]:fiq0 */
        unsigned int  reserved                : 28; /* bit[4-31]: [31:4]�������� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU0_INT_STATM_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_INT_STATM_cpu_irqout2mcu0_statm_START    (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_INT_STATM_cpu_irqout2mcu0_statm_END      (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_INT_STATM_cpu_irqout2cpu0_0_statm_START  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_INT_STATM_cpu_irqout2cpu0_0_statm_END    (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_INT_STATM_cpu_fiqout0_statm_START        (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_INT_STATM_cpu_fiqout0_statm_END          (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_INT_STATM_cpu_fiqout2cpu0_0_statm_START  (3)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_INT_STATM_cpu_fiqout2cpu0_0_statm_END    (3)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU0_MTCMOS_TIMER_UNION
 �ṹ˵��  : ACPU_SC_CPU0_MTCMOS_TIMER �Ĵ����ṹ���塣��ַƫ����:0x150����ֵ:0x000000FF�����:32
 �Ĵ���˵��: CPU0 MTCMOS�ȶ�ʱ�������ֵ����ʱʱ����19.2M��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cpu_mtcmos_timer0 : 16; /* bit[0-15] : [15:0]:timer0 */
        unsigned int  reserved          : 16; /* bit[16-31]: [31:16]�������� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU0_MTCMOS_TIMER_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_MTCMOS_TIMER_cpu_mtcmos_timer0_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_MTCMOS_TIMER_cpu_mtcmos_timer0_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU0_MTCMOS_TIMER_STAT_UNION
 �ṹ˵��  : ACPU_SC_CPU0_MTCMOS_TIMER_STAT �Ĵ����ṹ���塣��ַƫ����:0x154����ֵ:0x00000000�����:32
 �Ĵ���˵��: CPU0 MTCMOS�ȶ�ʱ��״ָ̬ʾ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cpu_mtcmos_timer0_sta : 1;  /* bit[0]   : [0]:timer0_sta
                                                                0: δ�ȶ�
                                                                1���ȶ� */
        unsigned int  reserved              : 31; /* bit[1-31]: [31:1]�������� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU0_MTCMOS_TIMER_STAT_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_MTCMOS_TIMER_STAT_cpu_mtcmos_timer0_sta_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_MTCMOS_TIMER_STAT_cpu_mtcmos_timer0_sta_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU0_RVBARADDR_UNION
 �ṹ˵��  : ACPU_SC_CPU0_RVBARADDR �Ĵ����ṹ���塣��ַƫ����:0x158����ֵ:0x00000000�����:32
 �Ĵ���˵��: Reset Vector Base Address for executing in 64-bit state.
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  rvbaraddr0 : 32; /* bit[0-31]: RVBARADDRx[33:2]���ã�
                                                     RVBARADDRx[39:34]=0x0 */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU0_RVBARADDR_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_RVBARADDR_rvbaraddr0_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU0_RVBARADDR_rvbaraddr0_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU1_CTRL_UNION
 �ṹ˵��  : ACPU_SC_CPU1_CTRL �Ĵ����ṹ���塣��ַƫ����:0x0200����ֵ:0x00000068�����:32
 �Ĵ���˵��: ACPU��ϵͳ�ϵ����üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cp15disable1       : 1;  /* bit[0]    : CPU0 cp15 ��ȫ�Ĵ�����ֹ����
                                                              0: �������
                                                              1: ��ֹ���� */
        unsigned int  reserved_0         : 1;  /* bit[1]    : ���� */
        unsigned int  edbgrq1            : 1;  /* bit[2]    : ʹ��A53 integration ��edbgrq0
                                                              0: ��ֹ
                                                              1: ʹ�� */
        unsigned int  vinithi1           : 1;  /* bit[3]    : CPU0 ��������ַ������
                                                              0: ��λ��ַ
                                                              1: ��λ��ַ */
        unsigned int  reserved_1         : 1;  /* bit[4]    : ���� */
        unsigned int  bypass_warmrstreq1 : 1;  /* bit[5]    : bypass cpu0��warm reset
                                                              0: ��ִ���ȸ�λ��bypass
                                                              1: ִ���ȸ�λ */
        unsigned int  bypass_dbgrstreq1  : 1;  /* bit[6]    : bypass cpu0��dbg warm reset
                                                              0: ��ִ���ȸ�λ��bypass
                                                              1: ִ���ȸ�λ */
        unsigned int  aa64naa32_1        : 1;  /* bit[7]    : 0 AArch32
                                                              1 AArch64 */
        unsigned int  cfgend1            : 1;  /* bit[8]    : 0 С����
                                                              1 ����� */
        unsigned int  cfgte1             : 1;  /* bit[9]    : 0 ��ʹ��T32
                                                              1 ʹ��T32 */
        unsigned int  cryptodisable1     : 1;  /* bit[10]   : ��ʹ��crypto���� */
        unsigned int  reserved_2         : 21; /* bit[11-31]: [31��11]������ */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU1_CTRL_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_CTRL_cp15disable1_START        (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_CTRL_cp15disable1_END          (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_CTRL_edbgrq1_START             (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_CTRL_edbgrq1_END               (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_CTRL_vinithi1_START            (3)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_CTRL_vinithi1_END              (3)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_CTRL_bypass_warmrstreq1_START  (5)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_CTRL_bypass_warmrstreq1_END    (5)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_CTRL_bypass_dbgrstreq1_START   (6)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_CTRL_bypass_dbgrstreq1_END     (6)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_CTRL_aa64naa32_1_START         (7)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_CTRL_aa64naa32_1_END           (7)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_CTRL_cfgend1_START             (8)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_CTRL_cfgend1_END               (8)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_CTRL_cfgte1_START              (9)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_CTRL_cfgte1_END                (9)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_CTRL_cryptodisable1_START      (10)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_CTRL_cryptodisable1_END        (10)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU1_STAT_UNION
 �ṹ˵��  : ACPU_SC_CPU1_STAT �Ĵ����ṹ���塣��ַƫ����:0x0204����ֵ:0x00000000�����:32
 �Ĵ���˵��: ϵͳ״̬�Ĵ��������ڼ��ϵͳ��״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_smpnamp1    : 1;  /* bit[0]   : ���ñ��ؿ��Զ���CPU0��ϵͳ�����sc_smpnamp0�źŵ�ֵ��
                                                         0:Asymmetric
                                                         1:Symmetric. */
        unsigned int  sc_standbywfi1 : 1;  /* bit[1]   : ���ñ��ؿ��Զ���CPU0��ϵͳ�����sc_standbywfi�źŵ�ֵ��
                                                         0:processor not in WFE Standby mode
                                                         1:processor in WFE Standby mode. */
        unsigned int  sc_standbywfe1 : 1;  /* bit[2]   : ���ñ��ؿ��Զ���CPU0��ϵͳ�����sc_standbywfe�źŵ�ֵ��
                                                         0:processor not in WFE Standby mode
                                                         1:processor in WFE Standby mode. */
        unsigned int  aarm_dbgack1   : 1;  /* bit[3]   : aarm_dbgack��AARM��debugacknowledge״ָ̬ʾ�źţ�
                                                         0:not acknowledged
                                                         1:acknowledged. */
        unsigned int  reserved_0     : 1;  /* bit[4]   : ���� */
        unsigned int  dbgrstreq1     : 1;  /* bit[5]   : dbg Warm reset request */
        unsigned int  warmrstreq1    : 1;  /* bit[6]   : Warm reset request */
        unsigned int  reserved_1     : 25; /* bit[7-31]: [31:7]���� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU1_STAT_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_STAT_sc_smpnamp1_START     (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_STAT_sc_smpnamp1_END       (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_STAT_sc_standbywfi1_START  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_STAT_sc_standbywfi1_END    (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_STAT_sc_standbywfe1_START  (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_STAT_sc_standbywfe1_END    (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_STAT_aarm_dbgack1_START    (3)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_STAT_aarm_dbgack1_END      (3)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_STAT_dbgrstreq1_START      (5)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_STAT_dbgrstreq1_END        (5)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_STAT_warmrstreq1_START     (6)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_STAT_warmrstreq1_END       (6)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU1_CLKEN_UNION
 �ṹ˵��  : ACPU_SC_CPU1_CLKEN �Ĵ����ṹ���塣��ַƫ����:0x0208����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳʱ���ſ����üĴ���������Ӧλд1ʹ����Ӧʱ�ӣ�д0��Ӱ�졣
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved_0         : 1;  /* bit[0]   : [0]�������� 
                                                               */
        unsigned int  hpm_cpucore1_clken : 1;  /* bit[1]   : hpm cpucore0 ����ʱ���ſ�ʹ��
                                                             1'b1: ʱ��ʹ�ܣ� 
                                                             1'b0: ��Ч */
        unsigned int  reserved_1         : 1;  /* bit[2]   : [2]�������� 
                                                               */
        unsigned int  reserved_2         : 29; /* bit[3-31]: [31:3]�������� 
                                                               */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU1_CLKEN_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_CLKEN_hpm_cpucore1_clken_START  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_CLKEN_hpm_cpucore1_clken_END    (1)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU1_CLKDIS_UNION
 �ṹ˵��  : ACPU_SC_CPU1_CLKDIS �Ĵ����ṹ���塣��ַƫ����:0x020C����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳʱ���ſ����üĴ���������Ӧλд1��ֹ��Ӧʱ�ӣ�д0��Ӱ�졣
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved_0          : 1;  /* bit[0]   : [0]�������� 
                                                                */
        unsigned int  hpm_cpucore1_clkdis : 1;  /* bit[1]   : hpm cpucore0 ����ʱ���ſ�ʹ��
                                                              1'b1: ʱ�ӹر� 
                                                              1'b0: ��Ч */
        unsigned int  reserved_1          : 1;  /* bit[2]   : [2]�������� 
                                                                */
        unsigned int  reserved_2          : 29; /* bit[3-31]: [31:3]�������� 
                                                                */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU1_CLKDIS_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_CLKDIS_hpm_cpucore1_clkdis_START  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_CLKDIS_hpm_cpucore1_clkdis_END    (1)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU1_CLK_STAT_UNION
 �ṹ˵��  : ACPU_SC_CPU1_CLK_STAT �Ĵ����ṹ���塣��ַƫ����:0x0210����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳʱ��״̬�Ĵ�����0��ʾʱ����Ӧ�رգ�1��ʾ�򿪡�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved_0          : 1;  /* bit[0]   : [0]�������� 
                                                                */
        unsigned int  hpm_cpucore1_clksta : 1;  /* bit[1]   : hpm cpucore0 ����ʱ���ſ�ʹ��
                                                              1'b1: ʱ��ʹ�ܣ� 
                                                              1'b0: ʱ�ӹر� */
        unsigned int  reserved_1          : 1;  /* bit[2]   : [0]�������� 
                                                                */
        unsigned int  reserved_2          : 29; /* bit[3-31]: [0]�������� 
                                                                */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU1_CLK_STAT_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_CLK_STAT_hpm_cpucore1_clksta_START  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_CLK_STAT_hpm_cpucore1_clksta_END    (1)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU1_RSTEN_UNION
 �ṹ˵��  : ACPU_SC_CPU1_RSTEN �Ĵ����ṹ���塣��ַƫ����:0x0214����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳ��λʹ�ܼĴ���������Ӧλд1ʹ����Ӧ��λ�źţ������븴λ̬����д0��Ӱ�졣�üĴ���ֻ���ϵ縴λʱ����λ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  srst_aarm_por1_rsten  : 1;  /* bit[0]   : A53 integration��por 0��λ���� */
        unsigned int  srst_aarm_core1_rsten : 1;  /* bit[1]   : A53 integration��core 0��λ���� */
        unsigned int  reserved_0            : 2;  /* bit[2-3] : ������ 
                                                                  */
        unsigned int  srst_aarm_hpm1_rsten  : 1;  /* bit[4]   : A53 integration��hpm0��λ���� */
        unsigned int  reserved_1            : 27; /* bit[5-31]: [31:5]�������� 
                                                                  */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU1_RSTEN_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_RSTEN_srst_aarm_por1_rsten_START   (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_RSTEN_srst_aarm_por1_rsten_END     (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_RSTEN_srst_aarm_core1_rsten_START  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_RSTEN_srst_aarm_core1_rsten_END    (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_RSTEN_srst_aarm_hpm1_rsten_START   (4)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_RSTEN_srst_aarm_hpm1_rsten_END     (4)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU1_RSTDIS_UNION
 �ṹ˵��  : ACPU_SC_CPU1_RSTDIS �Ĵ����ṹ���塣��ַƫ����:0x0218����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳ��λ��ֹ�Ĵ��������ڿ��Ƹ��������ܵĸ�λ��ֹ������Ӧλд1��ֹ��Ӧ��������λ�źţ����˳���λ̬����д0��Ӱ�졣�üĴ���ֻ���ϵ縴λʱ����λ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  srst_aarm_por1_rstdis  : 1;  /* bit[0]   : A53 integration��por 0��λ���� */
        unsigned int  srst_aarm_core1_rstdis : 1;  /* bit[1]   : A53 integration��core 0��λ���� */
        unsigned int  reserved_0             : 2;  /* bit[2-3] : ������ 
                                                                   */
        unsigned int  srst_aarm_hpm1_rstdis  : 1;  /* bit[4]   : A53 integration��hpm0��λ���� */
        unsigned int  reserved_1             : 27; /* bit[5-31]: [31:5]�������� 
                                                                   */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU1_RSTDIS_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_RSTDIS_srst_aarm_por1_rstdis_START   (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_RSTDIS_srst_aarm_por1_rstdis_END     (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_RSTDIS_srst_aarm_core1_rstdis_START  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_RSTDIS_srst_aarm_core1_rstdis_END    (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_RSTDIS_srst_aarm_hpm1_rstdis_START   (4)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_RSTDIS_srst_aarm_hpm1_rstdis_END     (4)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU1_RST_STAT_UNION
 �ṹ˵��  : ACPU_SC_CPU1_RST_STAT �Ĵ����ṹ���塣��ַƫ����:0x021C����ֵ:0x00000013�����:32
 �Ĵ���˵��: ACPU��ϵͳ��λ״̬�Ĵ�����0��ʾ��λ��ʹ�ܣ�1��λʹ�ܼ����븴λ̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  srst_aarm_por1_rststa  : 1;  /* bit[0]   : A53 integration��por 0��λ���� */
        unsigned int  srst_aarm_core1_rststa : 1;  /* bit[1]   : A53 integration��core 0��λ���� */
        unsigned int  reserved_0             : 2;  /* bit[2-3] : ������ 
                                                                   */
        unsigned int  srst_aarm_hpm1_rststa  : 1;  /* bit[4]   : A53 integration��hpm0��λ���� */
        unsigned int  reserved_1             : 27; /* bit[5-31]: [31:5]�������� 
                                                                   */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU1_RST_STAT_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_RST_STAT_srst_aarm_por1_rststa_START   (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_RST_STAT_srst_aarm_por1_rststa_END     (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_RST_STAT_srst_aarm_core1_rststa_START  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_RST_STAT_srst_aarm_core1_rststa_END    (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_RST_STAT_srst_aarm_hpm1_rststa_START   (4)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_RST_STAT_srst_aarm_hpm1_rststa_END     (4)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU1_MTCMOS_EN_UNION
 �ṹ˵��  : ACPU_SC_CPU1_MTCMOS_EN �Ĵ����ṹ���塣��ַƫ����:0x0220����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳ�ϵ�����Ĵ��������ڸ������������ϵ������źţ�����Ӧλд1�����ϵ�����д0��Ӱ�졣
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pw_mtcmos_en_acpu1 : 1;  /* bit[0]   : [0] ��ACPU0�µ��� */
        unsigned int  reserved           : 31; /* bit[1-31]: [31:1]��������  */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU1_MTCMOS_EN_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_MTCMOS_EN_pw_mtcmos_en_acpu1_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_MTCMOS_EN_pw_mtcmos_en_acpu1_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU1_MTCMOS_DIS_UNION
 �ṹ˵��  : ACPU_SC_CPU1_MTCMOS_DIS �Ĵ����ṹ���塣��ַƫ����:0x0224����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳ�ϵ������ֹ�Ĵ��������ڸ���������ֹ�ϵ������źţ�����Ӧλд1��ֹ�ϵ�����д0��Ӱ�졣
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pw_mtcmos_dis_acpu1 : 1;  /* bit[0]   : [0] ��ACPU0�µ��� */
        unsigned int  reserved            : 31; /* bit[1-31]: [31:1]��������  */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU1_MTCMOS_DIS_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_MTCMOS_DIS_pw_mtcmos_dis_acpu1_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_MTCMOS_DIS_pw_mtcmos_dis_acpu1_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU1_MTCMOS_STAT_UNION
 �ṹ˵��  : ACPU_SC_CPU1_MTCMOS_STAT �Ĵ����ṹ���塣��ַƫ����:0x0228����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳ�ϵ�����״̬�Ĵ�������ӦλΪ1��ʾ��������״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pw_mtcmos_sta_acpu1 : 1;  /* bit[0]   : [0] ��ACPU0�µ��� */
        unsigned int  reserved            : 31; /* bit[1-31]: [31:1]��������  */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU1_MTCMOS_STAT_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_MTCMOS_STAT_pw_mtcmos_sta_acpu1_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_MTCMOS_STAT_pw_mtcmos_sta_acpu1_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU1_MTCMOS_ACK_STAT_UNION
 �ṹ˵��  : ACPU_SC_CPU1_MTCMOS_ACK_STAT �Ĵ����ṹ���塣��ַƫ����:0x022C����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳ�ϵ練����ѯ�Ĵ��������ڲ�ѯ�������������ϵ������źź��Ƿ񷵻�ACK������ӦλΪ1��ʾ�����µ磬Ϊ0��ʾ������
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pw_mtcmos_acksta_acpu1 : 1;  /* bit[0]   : [0] ��ACPU0�µ��� */
        unsigned int  reserved               : 31; /* bit[1-31]: [31:1]��������  */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU1_MTCMOS_ACK_STAT_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_MTCMOS_ACK_STAT_pw_mtcmos_acksta_acpu1_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_MTCMOS_ACK_STAT_pw_mtcmos_acksta_acpu1_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU1_PW_ISOEN_UNION
 �ṹ˵��  : ACPU_SC_CPU1_PW_ISOEN �Ĵ����ṹ���塣��ַƫ����:0x0230����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳISOʹ�ܼĴ��������ڿ��Ƹ���������ص�Isolation Cellʹ�ܡ�����Ӧλд1ʹ����Ӧ������IsoLation Cell�����źŸ��ϣ���д0��Ӱ�졣�üĴ���ֻ���ϵ縴λʱ����λ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pw_isoen_acpu1 : 1;  /* bit[0]   : [0] ��ACPU0�µ��� */
        unsigned int  reserved       : 31; /* bit[1-31]: [31:1]��������  */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU1_PW_ISOEN_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_PW_ISOEN_pw_isoen_acpu1_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_PW_ISOEN_pw_isoen_acpu1_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU1_PW_ISODIS_UNION
 �ṹ˵��  : ACPU_SC_CPU1_PW_ISODIS �Ĵ����ṹ���塣��ַƫ����:0x0234����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳISO��ֹ�Ĵ��������ڿ��Ƹ���������ص�Isolation Cell��ֹ������Ӧλд1��ֹ��Ӧ������IsoLation Cell�����źŲ����ϣ���д0��Ӱ�졣�üĴ���ֻ���ϵ縴λʱ����λ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pw_isodis_acpu1 : 1;  /* bit[0]   : [0] ��ACPU0�µ��� */
        unsigned int  reserved        : 31; /* bit[1-31]: [31:1]��������  */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU1_PW_ISODIS_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_PW_ISODIS_pw_isodis_acpu1_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_PW_ISODIS_pw_isodis_acpu1_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU1_PW_ISO_STAT_UNION
 �ṹ˵��  : ACPU_SC_CPU1_PW_ISO_STAT �Ĵ����ṹ���塣��ַƫ����:0x0238����ֵ:0x00000001�����:32
 �Ĵ���˵��: ACPU��ϵͳISO״̬�Ĵ�����0��ʾisolation��ʹ�ܣ�1��ʾisolationʹ�ܡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pw_iso_stat_acpu1 : 1;  /* bit[0]   : [0] ��ACPU0�µ��� */
        unsigned int  reserved          : 31; /* bit[1-31]: [31:1]�������� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU1_PW_ISO_STAT_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_PW_ISO_STAT_pw_iso_stat_acpu1_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_PW_ISO_STAT_pw_iso_stat_acpu1_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU1_INT_EN_UNION
 �ṹ˵��  : ACPU_SC_CPU1_INT_EN �Ĵ����ṹ���塣��ַƫ����:0x023C����ֵ:0x00000000�����:32
 �Ĵ���˵��: �ڲ��ж����μĴ������Ա���д1�������Σ�д0��Ӱ�����ε�״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cpu_irqout2mcu1_en   : 1;  /* bit[0]   : [0]:irq0 */
        unsigned int  cpu_irqout2cpu0_1_en : 1;  /* bit[1]   : [0]:irq0 */
        unsigned int  cpu_fiqout1_en       : 1;  /* bit[2]   : [1]:fiq0 */
        unsigned int  cpu_fiqout2cpu0_1_en : 1;  /* bit[3]   : [1]:fiq0 */
        unsigned int  reserved             : 28; /* bit[4-31]: [31:4]�������� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU1_INT_EN_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_INT_EN_cpu_irqout2mcu1_en_START    (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_INT_EN_cpu_irqout2mcu1_en_END      (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_INT_EN_cpu_irqout2cpu0_1_en_START  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_INT_EN_cpu_irqout2cpu0_1_en_END    (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_INT_EN_cpu_fiqout1_en_START        (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_INT_EN_cpu_fiqout1_en_END          (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_INT_EN_cpu_fiqout2cpu0_1_en_START  (3)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_INT_EN_cpu_fiqout2cpu0_1_en_END    (3)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU1_INT_DIS_UNION
 �ṹ˵��  : ACPU_SC_CPU1_INT_DIS �Ĵ����ṹ���塣��ַƫ����:0x0240����ֵ:0x00000000�����:32
 �Ĵ���˵��: �ڲ��ж����μĴ������Ա���д1����ֹ���Σ�д0��Ӱ��ʱ�����ε�״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cpu_irqout2mcu1_dis   : 1;  /* bit[0]   : [0]:irq0 */
        unsigned int  cpu_irqout2cpu0_1_dis : 1;  /* bit[1]   : [0]:irq0 */
        unsigned int  cpu_fiqout1_dis       : 1;  /* bit[2]   : [1]:fiq0 */
        unsigned int  cpu_fiqout2cpu0_1_dis : 1;  /* bit[3]   : [1]:fiq0 */
        unsigned int  reserved              : 28; /* bit[4-31]: [31:4]�������� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU1_INT_DIS_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_INT_DIS_cpu_irqout2mcu1_dis_START    (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_INT_DIS_cpu_irqout2mcu1_dis_END      (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_INT_DIS_cpu_irqout2cpu0_1_dis_START  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_INT_DIS_cpu_irqout2cpu0_1_dis_END    (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_INT_DIS_cpu_fiqout1_dis_START        (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_INT_DIS_cpu_fiqout1_dis_END          (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_INT_DIS_cpu_fiqout2cpu0_1_dis_START  (3)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_INT_DIS_cpu_fiqout2cpu0_1_dis_END    (3)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU1_INT_STAT_UNION
 �ṹ˵��  : ACPU_SC_CPU1_INT_STAT �Ĵ����ṹ���塣��ַƫ����:0x0244����ֵ:0x00000000�����:32
 �Ĵ���˵��: �ڲ��ж�ʹ�ܼĴ���������SC�ڲ��жϵ��������á���ӦbitΪ1��ʾʹ����Ӧ�жϣ�Ϊ0��ʾ�����жϡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cpu_irqout2mcu1_state   : 1;  /* bit[0]   : [0]:irq0 */
        unsigned int  cpu_irqout2cpu0_1_state : 1;  /* bit[1]   : [0]:irq0 */
        unsigned int  cpu_fiqout1_state       : 1;  /* bit[2]   : [1]:fiq0 */
        unsigned int  cpu_fiqout2cpu0_1_state : 1;  /* bit[3]   : [1]:fiq0 */
        unsigned int  reserved                : 28; /* bit[4-31]: [31:4]�������� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU1_INT_STAT_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_INT_STAT_cpu_irqout2mcu1_state_START    (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_INT_STAT_cpu_irqout2mcu1_state_END      (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_INT_STAT_cpu_irqout2cpu0_1_state_START  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_INT_STAT_cpu_irqout2cpu0_1_state_END    (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_INT_STAT_cpu_fiqout1_state_START        (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_INT_STAT_cpu_fiqout1_state_END          (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_INT_STAT_cpu_fiqout2cpu0_1_state_START  (3)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_INT_STAT_cpu_fiqout2cpu0_1_state_END    (3)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU1_INT_STATR_UNION
 �ṹ˵��  : ACPU_SC_CPU1_INT_STATR �Ĵ����ṹ���塣��ַƫ����:0x0248����ֵ:0x00000000�����:32
 �Ĵ���˵��: ԭʼ�ڲ��жϼĴ���������ָʾSC�ڲ���ԭʼ�ж�״̬������ǰ������ӦbitΪ1��ʾ���жϣ�Ϊ0��ʾ���жϡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cpu_irqout2mcu1_statr : 1;  /* bit[0]   : [0]:irq0 */
        unsigned int  cpu_fiqout1_statr     : 1;  /* bit[1]   : [1]:fiq0 */
        unsigned int  reserved              : 30; /* bit[2-31]: [31:2]�������� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU1_INT_STATR_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_INT_STATR_cpu_irqout2mcu1_statr_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_INT_STATR_cpu_irqout2mcu1_statr_END    (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_INT_STATR_cpu_fiqout1_statr_START      (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_INT_STATR_cpu_fiqout1_statr_END        (1)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU1_INT_STATM_UNION
 �ṹ˵��  : ACPU_SC_CPU1_INT_STATM �Ĵ����ṹ���塣��ַƫ����:0x024C����ֵ:0x00000000�����:32
 �Ĵ���˵��: ���κ��ڲ��жϼĴ���������ָʾSC��ǰ�ڲ��ж�״̬�����κ󣩡���ӦbitΪ1��ʾ���жϣ�Ϊ0��ʾ���жϡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cpu_irqout2mcu1_statm   : 1;  /* bit[0]   : [0]:irq0 */
        unsigned int  cpu_irqout2cpu0_1_statm : 1;  /* bit[1]   : [1]:irq0 */
        unsigned int  cpu_fiqout1_statm       : 1;  /* bit[2]   : [2]:fiq0 */
        unsigned int  cpu_fiqout2cpu0_1_statm : 1;  /* bit[3]   : [3]:fiq0 */
        unsigned int  reserved                : 28; /* bit[4-31]: [31:4]�������� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU1_INT_STATM_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_INT_STATM_cpu_irqout2mcu1_statm_START    (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_INT_STATM_cpu_irqout2mcu1_statm_END      (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_INT_STATM_cpu_irqout2cpu0_1_statm_START  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_INT_STATM_cpu_irqout2cpu0_1_statm_END    (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_INT_STATM_cpu_fiqout1_statm_START        (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_INT_STATM_cpu_fiqout1_statm_END          (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_INT_STATM_cpu_fiqout2cpu0_1_statm_START  (3)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_INT_STATM_cpu_fiqout2cpu0_1_statm_END    (3)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU1_MTCMOS_TIMER_UNION
 �ṹ˵��  : ACPU_SC_CPU1_MTCMOS_TIMER �Ĵ����ṹ���塣��ַƫ����:0x0250����ֵ:0x000000FF�����:32
 �Ĵ���˵��: CPU0 MTCMOS�ȶ�ʱ�������ֵ����ʱʱ����19.2M��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cpu_mtcmos_timer1 : 16; /* bit[0-15] : [15:0]:timer0 */
        unsigned int  reserved          : 16; /* bit[16-31]: [31:16]�������� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU1_MTCMOS_TIMER_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_MTCMOS_TIMER_cpu_mtcmos_timer1_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_MTCMOS_TIMER_cpu_mtcmos_timer1_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU1_MTCMOS_TIMER_STAT_UNION
 �ṹ˵��  : ACPU_SC_CPU1_MTCMOS_TIMER_STAT �Ĵ����ṹ���塣��ַƫ����:0x0254����ֵ:0x00000000�����:32
 �Ĵ���˵��: CPU0 MTCMOS�ȶ�ʱ��״ָ̬ʾ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cpu_mtcmos_timer1_sta : 1;  /* bit[0]   : [0]:timer0_sta
                                                                0: δ�ȶ�
                                                                1���ȶ� */
        unsigned int  reserved              : 31; /* bit[1-31]: [31:1]�������� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU1_MTCMOS_TIMER_STAT_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_MTCMOS_TIMER_STAT_cpu_mtcmos_timer1_sta_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_MTCMOS_TIMER_STAT_cpu_mtcmos_timer1_sta_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU1_RVBARADDR_UNION
 �ṹ˵��  : ACPU_SC_CPU1_RVBARADDR �Ĵ����ṹ���塣��ַƫ����:0x0258����ֵ:0x00000000�����:32
 �Ĵ���˵��: Reset Vector Base Address for executing in 64-bit state.
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  rvbaraddr1 : 32; /* bit[0-31]: RVBARADDRx[33:2]���ã�
                                                     RVBARADDRx[39:34]=0x0 */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU1_RVBARADDR_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_RVBARADDR_rvbaraddr1_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU1_RVBARADDR_rvbaraddr1_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU2_CTRL_UNION
 �ṹ˵��  : ACPU_SC_CPU2_CTRL �Ĵ����ṹ���塣��ַƫ����:0x300����ֵ:0x00000048�����:32
 �Ĵ���˵��: ACPU��ϵͳ�ϵ����üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cp15disable2       : 1;  /* bit[0]    : CPU0 cp15 ��ȫ�Ĵ�����ֹ����
                                                              0: �������
                                                              1: ��ֹ���� */
        unsigned int  reserved_0         : 1;  /* bit[1]    : ���� */
        unsigned int  edbgrq2            : 1;  /* bit[2]    : ʹ��A53 integration ��edbgrq0
                                                              0: ��ֹ
                                                              1: ʹ�� */
        unsigned int  vinithi2           : 1;  /* bit[3]    : CPU0 ��������ַ������
                                                              0: ��λ��ַ
                                                              1: ��λ��ַ */
        unsigned int  reserved_1         : 1;  /* bit[4]    : ���� */
        unsigned int  bypass_warmrstreq2 : 1;  /* bit[5]    : bypass cpu0��warm reset
                                                              0: ��ִ���ȸ�λ��bypass
                                                              1: ִ���ȸ�λ */
        unsigned int  bypass_dbgrstreq2  : 1;  /* bit[6]    : bypass cpu0��dbg warm reset
                                                              0: ��ִ���ȸ�λ��bypass
                                                              1: ִ���ȸ�λ */
        unsigned int  aa64naa32_2        : 1;  /* bit[7]    : 0 AArch32
                                                              1 AArch64 */
        unsigned int  cfgend2            : 1;  /* bit[8]    : 0 С����
                                                              1 ����� */
        unsigned int  cfgte2             : 1;  /* bit[9]    : 0 ��ʹ��T32
                                                              1 ʹ��T32 */
        unsigned int  cryptodisable2     : 1;  /* bit[10]   : ��ʹ��crypto���� */
        unsigned int  reserved_2         : 21; /* bit[11-31]: [31��11]������ */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU2_CTRL_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_CTRL_cp15disable2_START        (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_CTRL_cp15disable2_END          (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_CTRL_edbgrq2_START             (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_CTRL_edbgrq2_END               (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_CTRL_vinithi2_START            (3)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_CTRL_vinithi2_END              (3)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_CTRL_bypass_warmrstreq2_START  (5)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_CTRL_bypass_warmrstreq2_END    (5)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_CTRL_bypass_dbgrstreq2_START   (6)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_CTRL_bypass_dbgrstreq2_END     (6)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_CTRL_aa64naa32_2_START         (7)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_CTRL_aa64naa32_2_END           (7)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_CTRL_cfgend2_START             (8)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_CTRL_cfgend2_END               (8)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_CTRL_cfgte2_START              (9)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_CTRL_cfgte2_END                (9)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_CTRL_cryptodisable2_START      (10)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_CTRL_cryptodisable2_END        (10)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU2_STAT_UNION
 �ṹ˵��  : ACPU_SC_CPU2_STAT �Ĵ����ṹ���塣��ַƫ����:0x304����ֵ:0x00000000�����:32
 �Ĵ���˵��: ϵͳ״̬�Ĵ��������ڼ��ϵͳ��״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_smpnamp2    : 1;  /* bit[0]   : ���ñ��ؿ��Զ���CPU0��ϵͳ�����sc_smpnamp0�źŵ�ֵ��
                                                         0:Asymmetric
                                                         1:Symmetric. */
        unsigned int  sc_standbywfi2 : 1;  /* bit[1]   : ���ñ��ؿ��Զ���CPU0��ϵͳ�����sc_standbywfi�źŵ�ֵ��
                                                         0:processor not in WFE Standby mode
                                                         1:processor in WFE Standby mode. */
        unsigned int  sc_standbywfe2 : 1;  /* bit[2]   : ���ñ��ؿ��Զ���CPU0��ϵͳ�����sc_standbywfe�źŵ�ֵ��
                                                         0:processor not in WFE Standby mode
                                                         1:processor in WFE Standby mode. */
        unsigned int  aarm_dbgack2   : 1;  /* bit[3]   : aarm_dbgack��AARM��debugacknowledge״ָ̬ʾ�źţ�
                                                         0:not acknowledged
                                                         1:acknowledged. */
        unsigned int  reserved_0     : 1;  /* bit[4]   : ���� */
        unsigned int  dbgrstreq2     : 1;  /* bit[5]   : dbg Warm reset request */
        unsigned int  warmrstreq2    : 1;  /* bit[6]   : Warm reset request */
        unsigned int  reserved_1     : 25; /* bit[7-31]: [31:7]���� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU2_STAT_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_STAT_sc_smpnamp2_START     (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_STAT_sc_smpnamp2_END       (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_STAT_sc_standbywfi2_START  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_STAT_sc_standbywfi2_END    (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_STAT_sc_standbywfe2_START  (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_STAT_sc_standbywfe2_END    (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_STAT_aarm_dbgack2_START    (3)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_STAT_aarm_dbgack2_END      (3)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_STAT_dbgrstreq2_START      (5)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_STAT_dbgrstreq2_END        (5)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_STAT_warmrstreq2_START     (6)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_STAT_warmrstreq2_END       (6)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU2_CLKEN_UNION
 �ṹ˵��  : ACPU_SC_CPU2_CLKEN �Ĵ����ṹ���塣��ַƫ����:0x308����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳʱ���ſ����üĴ���������Ӧλд1ʹ����Ӧʱ�ӣ�д0��Ӱ�졣
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved_0         : 1;  /* bit[0]   : [0]�������� 
                                                               */
        unsigned int  hpm_cpucore2_clken : 1;  /* bit[1]   : hpm cpucore0 ����ʱ���ſ�ʹ��
                                                             1'b1: ʱ��ʹ�ܣ� 
                                                             1'b0: ��Ч */
        unsigned int  reserved_1         : 1;  /* bit[2]   : [2]�������� 
                                                               */
        unsigned int  reserved_2         : 29; /* bit[3-31]: [31:3]�������� 
                                                               */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU2_CLKEN_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_CLKEN_hpm_cpucore2_clken_START  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_CLKEN_hpm_cpucore2_clken_END    (1)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU2_CLKDIS_UNION
 �ṹ˵��  : ACPU_SC_CPU2_CLKDIS �Ĵ����ṹ���塣��ַƫ����:0x30C����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳʱ���ſ����üĴ���������Ӧλд1��ֹ��Ӧʱ�ӣ�д0��Ӱ�졣
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved_0          : 1;  /* bit[0]   : [0]�������� 
                                                                */
        unsigned int  hpm_cpucore2_clkdis : 1;  /* bit[1]   : hpm cpucore0 ����ʱ���ſ�ʹ��
                                                              1'b1: ʱ�ӹر� 
                                                              1'b0: ��Ч */
        unsigned int  reserved_1          : 1;  /* bit[2]   : [2]�������� 
                                                                */
        unsigned int  reserved_2          : 29; /* bit[3-31]: [31:3]�������� 
                                                                */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU2_CLKDIS_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_CLKDIS_hpm_cpucore2_clkdis_START  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_CLKDIS_hpm_cpucore2_clkdis_END    (1)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU2_CLK_STAT_UNION
 �ṹ˵��  : ACPU_SC_CPU2_CLK_STAT �Ĵ����ṹ���塣��ַƫ����:0x310����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳʱ��״̬�Ĵ�����0��ʾʱ����Ӧ�رգ�1��ʾ�򿪡�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved_0          : 1;  /* bit[0]   : [0]�������� 
                                                                */
        unsigned int  hpm_cpucore2_clksta : 1;  /* bit[1]   : hpm cpucore0 ����ʱ���ſ�ʹ��
                                                              1'b1: ʱ��ʹ�ܣ� 
                                                              1'b0: ʱ�ӹر� */
        unsigned int  reserved_1          : 1;  /* bit[2]   : [0]�������� 
                                                                */
        unsigned int  reserved_2          : 29; /* bit[3-31]: [0]�������� 
                                                                */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU2_CLK_STAT_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_CLK_STAT_hpm_cpucore2_clksta_START  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_CLK_STAT_hpm_cpucore2_clksta_END    (1)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU2_RSTEN_UNION
 �ṹ˵��  : ACPU_SC_CPU2_RSTEN �Ĵ����ṹ���塣��ַƫ����:0x314����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳ��λʹ�ܼĴ���������Ӧλд1ʹ����Ӧ��λ�źţ������븴λ̬����д0��Ӱ�졣�üĴ���ֻ���ϵ縴λʱ����λ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  srst_aarm_por2_rsten  : 1;  /* bit[0]   : A53 integration��por 0��λ���� */
        unsigned int  srst_aarm_core2_rsten : 1;  /* bit[1]   : A53 integration��core 0��λ���� */
        unsigned int  reserved_0            : 2;  /* bit[2-3] : ������ 
                                                                  */
        unsigned int  srst_aarm_hpm2_rsten  : 1;  /* bit[4]   : A53 integration��hpm0��λ���� */
        unsigned int  reserved_1            : 27; /* bit[5-31]: [31:5]�������� 
                                                                  */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU2_RSTEN_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_RSTEN_srst_aarm_por2_rsten_START   (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_RSTEN_srst_aarm_por2_rsten_END     (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_RSTEN_srst_aarm_core2_rsten_START  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_RSTEN_srst_aarm_core2_rsten_END    (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_RSTEN_srst_aarm_hpm2_rsten_START   (4)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_RSTEN_srst_aarm_hpm2_rsten_END     (4)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU2_RSTDIS_UNION
 �ṹ˵��  : ACPU_SC_CPU2_RSTDIS �Ĵ����ṹ���塣��ַƫ����:0x318����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳ��λ��ֹ�Ĵ��������ڿ��Ƹ��������ܵĸ�λ��ֹ������Ӧλд1��ֹ��Ӧ��������λ�źţ����˳���λ̬����д0��Ӱ�졣�üĴ���ֻ���ϵ縴λʱ����λ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  srst_aarm_por2_rstdis  : 1;  /* bit[0]   : A53 integration��por 0��λ���� */
        unsigned int  srst_aarm_core2_rstdis : 1;  /* bit[1]   : A53 integration��core 0��λ���� */
        unsigned int  reserved_0             : 2;  /* bit[2-3] : ������ 
                                                                   */
        unsigned int  srst_aarm_hpm2_rstdis  : 1;  /* bit[4]   : A53 integration��hpm0��λ���� */
        unsigned int  reserved_1             : 27; /* bit[5-31]: [31:5]�������� 
                                                                   */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU2_RSTDIS_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_RSTDIS_srst_aarm_por2_rstdis_START   (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_RSTDIS_srst_aarm_por2_rstdis_END     (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_RSTDIS_srst_aarm_core2_rstdis_START  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_RSTDIS_srst_aarm_core2_rstdis_END    (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_RSTDIS_srst_aarm_hpm2_rstdis_START   (4)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_RSTDIS_srst_aarm_hpm2_rstdis_END     (4)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU2_RST_STAT_UNION
 �ṹ˵��  : ACPU_SC_CPU2_RST_STAT �Ĵ����ṹ���塣��ַƫ����:0x31C����ֵ:0x00000013�����:32
 �Ĵ���˵��: ACPU��ϵͳ��λ״̬�Ĵ�����0��ʾ��λ��ʹ�ܣ�1��λʹ�ܼ����븴λ̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  srst_aarm_por2_rststa  : 1;  /* bit[0]   : A53 integration��por 0��λ���� */
        unsigned int  srst_aarm_core2_rststa : 1;  /* bit[1]   : A53 integration��core 0��λ���� */
        unsigned int  reserved_0             : 2;  /* bit[2-3] : ������ 
                                                                   */
        unsigned int  srst_aarm_hpm2_rststa  : 1;  /* bit[4]   : A53 integration��hpm0��λ���� */
        unsigned int  reserved_1             : 27; /* bit[5-31]: [31:5]�������� 
                                                                   */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU2_RST_STAT_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_RST_STAT_srst_aarm_por2_rststa_START   (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_RST_STAT_srst_aarm_por2_rststa_END     (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_RST_STAT_srst_aarm_core2_rststa_START  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_RST_STAT_srst_aarm_core2_rststa_END    (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_RST_STAT_srst_aarm_hpm2_rststa_START   (4)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_RST_STAT_srst_aarm_hpm2_rststa_END     (4)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU2_MTCMOS_EN_UNION
 �ṹ˵��  : ACPU_SC_CPU2_MTCMOS_EN �Ĵ����ṹ���塣��ַƫ����:0x320����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳ�ϵ�����Ĵ��������ڸ������������ϵ������źţ�����Ӧλд1�����ϵ�����д0��Ӱ�졣
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pw_mtcmos_en_acpu2 : 1;  /* bit[0]   : [0] ��ACPU0�µ��� */
        unsigned int  reserved           : 31; /* bit[1-31]: [31:1]��������  */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU2_MTCMOS_EN_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_MTCMOS_EN_pw_mtcmos_en_acpu2_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_MTCMOS_EN_pw_mtcmos_en_acpu2_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU2_MTCMOS_DIS_UNION
 �ṹ˵��  : ACPU_SC_CPU2_MTCMOS_DIS �Ĵ����ṹ���塣��ַƫ����:0x324����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳ�ϵ������ֹ�Ĵ��������ڸ���������ֹ�ϵ������źţ�����Ӧλд1��ֹ�ϵ�����д0��Ӱ�졣
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pw_mtcmos_dis_acpu2 : 1;  /* bit[0]   : [0] ��ACPU0�µ��� */
        unsigned int  reserved            : 31; /* bit[1-31]: [31:1]��������  */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU2_MTCMOS_DIS_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_MTCMOS_DIS_pw_mtcmos_dis_acpu2_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_MTCMOS_DIS_pw_mtcmos_dis_acpu2_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU2_MTCMOS_STAT_UNION
 �ṹ˵��  : ACPU_SC_CPU2_MTCMOS_STAT �Ĵ����ṹ���塣��ַƫ����:0x328����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳ�ϵ�����״̬�Ĵ�������ӦλΪ1��ʾ��������״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pw_mtcmos_sta_acpu2 : 1;  /* bit[0]   : [0] ��ACPU0�µ��� */
        unsigned int  reserved            : 31; /* bit[1-31]: [31:1]��������  */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU2_MTCMOS_STAT_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_MTCMOS_STAT_pw_mtcmos_sta_acpu2_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_MTCMOS_STAT_pw_mtcmos_sta_acpu2_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU2_MTCMOS_ACK_STAT_UNION
 �ṹ˵��  : ACPU_SC_CPU2_MTCMOS_ACK_STAT �Ĵ����ṹ���塣��ַƫ����:0x32C����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳ�ϵ練����ѯ�Ĵ��������ڲ�ѯ�������������ϵ������źź��Ƿ񷵻�ACK������ӦλΪ1��ʾ�����µ磬Ϊ0��ʾ������
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pw_mtcmos_acksta_acpu2 : 1;  /* bit[0]   : [0] ��ACPU0�µ��� */
        unsigned int  reserved               : 31; /* bit[1-31]: [31:1]��������  */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU2_MTCMOS_ACK_STAT_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_MTCMOS_ACK_STAT_pw_mtcmos_acksta_acpu2_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_MTCMOS_ACK_STAT_pw_mtcmos_acksta_acpu2_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU2_PW_ISOEN_UNION
 �ṹ˵��  : ACPU_SC_CPU2_PW_ISOEN �Ĵ����ṹ���塣��ַƫ����:0x330����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳISOʹ�ܼĴ��������ڿ��Ƹ���������ص�Isolation Cellʹ�ܡ�����Ӧλд1ʹ����Ӧ������IsoLation Cell�����źŸ��ϣ���д0��Ӱ�졣�üĴ���ֻ���ϵ縴λʱ����λ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pw_isoen_acpu2 : 1;  /* bit[0]   : [0] ��ACPU0�µ��� */
        unsigned int  reserved       : 31; /* bit[1-31]: [31:1]��������  */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU2_PW_ISOEN_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_PW_ISOEN_pw_isoen_acpu2_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_PW_ISOEN_pw_isoen_acpu2_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU2_PW_ISODIS_UNION
 �ṹ˵��  : ACPU_SC_CPU2_PW_ISODIS �Ĵ����ṹ���塣��ַƫ����:0x334����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳISO��ֹ�Ĵ��������ڿ��Ƹ���������ص�Isolation Cell��ֹ������Ӧλд1��ֹ��Ӧ������IsoLation Cell�����źŲ����ϣ���д0��Ӱ�졣�üĴ���ֻ���ϵ縴λʱ����λ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pw_isodis_acpu2 : 1;  /* bit[0]   : [0] ��ACPU0�µ��� */
        unsigned int  reserved        : 31; /* bit[1-31]: [31:1]��������  */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU2_PW_ISODIS_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_PW_ISODIS_pw_isodis_acpu2_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_PW_ISODIS_pw_isodis_acpu2_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU2_PW_ISO_STAT_UNION
 �ṹ˵��  : ACPU_SC_CPU2_PW_ISO_STAT �Ĵ����ṹ���塣��ַƫ����:0x338����ֵ:0x00000001�����:32
 �Ĵ���˵��: ACPU��ϵͳISO״̬�Ĵ�����0��ʾisolation��ʹ�ܣ�1��ʾisolationʹ�ܡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pw_iso_stat_acpu2 : 1;  /* bit[0]   : [0] ��ACPU0�µ��� */
        unsigned int  reserved          : 31; /* bit[1-31]: [31:1]�������� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU2_PW_ISO_STAT_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_PW_ISO_STAT_pw_iso_stat_acpu2_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_PW_ISO_STAT_pw_iso_stat_acpu2_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU2_INT_EN_UNION
 �ṹ˵��  : ACPU_SC_CPU2_INT_EN �Ĵ����ṹ���塣��ַƫ����:0x33C����ֵ:0x00000000�����:32
 �Ĵ���˵��: �ڲ��ж����μĴ������Ա���д1�������Σ�д0��Ӱ�����ε�״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cpu_irqout2mcu2_en   : 1;  /* bit[0]   : [0]:irq0 */
        unsigned int  cpu_irqout2cpu0_2_en : 1;  /* bit[1]   : [0]:irq0 */
        unsigned int  cpu_fiqout2_en       : 1;  /* bit[2]   : [1]:fiq0 */
        unsigned int  cpu_fiqout2cpu0_2_en : 1;  /* bit[3]   : [1]:fiq0 */
        unsigned int  reserved             : 28; /* bit[4-31]: [31:4]�������� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU2_INT_EN_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_INT_EN_cpu_irqout2mcu2_en_START    (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_INT_EN_cpu_irqout2mcu2_en_END      (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_INT_EN_cpu_irqout2cpu0_2_en_START  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_INT_EN_cpu_irqout2cpu0_2_en_END    (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_INT_EN_cpu_fiqout2_en_START        (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_INT_EN_cpu_fiqout2_en_END          (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_INT_EN_cpu_fiqout2cpu0_2_en_START  (3)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_INT_EN_cpu_fiqout2cpu0_2_en_END    (3)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU2_INT_DIS_UNION
 �ṹ˵��  : ACPU_SC_CPU2_INT_DIS �Ĵ����ṹ���塣��ַƫ����:0x340����ֵ:0x00000000�����:32
 �Ĵ���˵��: �ڲ��ж����μĴ������Ա���д1����ֹ���Σ�д0��Ӱ��ʱ�����ε�״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cpu_irqout2mcu2_dis   : 1;  /* bit[0]   : [0]:irq0 */
        unsigned int  cpu_irqout2cpu0_2_dis : 1;  /* bit[1]   : [0]:irq0 */
        unsigned int  cpu_fiqout2_dis       : 1;  /* bit[2]   : [1]:fiq0 */
        unsigned int  cpu_fiqout2cpu0_2_dis : 1;  /* bit[3]   : [1]:fiq0 */
        unsigned int  reserved              : 28; /* bit[4-31]: [31:4]�������� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU2_INT_DIS_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_INT_DIS_cpu_irqout2mcu2_dis_START    (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_INT_DIS_cpu_irqout2mcu2_dis_END      (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_INT_DIS_cpu_irqout2cpu0_2_dis_START  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_INT_DIS_cpu_irqout2cpu0_2_dis_END    (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_INT_DIS_cpu_fiqout2_dis_START        (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_INT_DIS_cpu_fiqout2_dis_END          (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_INT_DIS_cpu_fiqout2cpu0_2_dis_START  (3)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_INT_DIS_cpu_fiqout2cpu0_2_dis_END    (3)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU2_INT_STAT_UNION
 �ṹ˵��  : ACPU_SC_CPU2_INT_STAT �Ĵ����ṹ���塣��ַƫ����:0x344����ֵ:0x00000000�����:32
 �Ĵ���˵��: �ڲ��ж�ʹ�ܼĴ���������SC�ڲ��жϵ��������á���ӦbitΪ1��ʾʹ����Ӧ�жϣ�Ϊ0��ʾ�����жϡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cpu_irqout2mcu2_state   : 1;  /* bit[0]   : [0]:irq0 */
        unsigned int  cpu_irqout2cpu0_2_state : 1;  /* bit[1]   : [0]:irq0 */
        unsigned int  cpu_fiqout2_state       : 1;  /* bit[2]   : [1]:fiq0 */
        unsigned int  cpu_fiqout2cpu0_2_state : 1;  /* bit[3]   : [1]:fiq0 */
        unsigned int  reserved                : 28; /* bit[4-31]: [31:4]�������� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU2_INT_STAT_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_INT_STAT_cpu_irqout2mcu2_state_START    (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_INT_STAT_cpu_irqout2mcu2_state_END      (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_INT_STAT_cpu_irqout2cpu0_2_state_START  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_INT_STAT_cpu_irqout2cpu0_2_state_END    (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_INT_STAT_cpu_fiqout2_state_START        (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_INT_STAT_cpu_fiqout2_state_END          (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_INT_STAT_cpu_fiqout2cpu0_2_state_START  (3)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_INT_STAT_cpu_fiqout2cpu0_2_state_END    (3)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU2_INT_STATR_UNION
 �ṹ˵��  : ACPU_SC_CPU2_INT_STATR �Ĵ����ṹ���塣��ַƫ����:0x348����ֵ:0x00000000�����:32
 �Ĵ���˵��: ԭʼ�ڲ��жϼĴ���������ָʾSC�ڲ���ԭʼ�ж�״̬������ǰ������ӦbitΪ1��ʾ���жϣ�Ϊ0��ʾ���жϡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cpu_irqout2mcu2_statr : 1;  /* bit[0]   : [0]:irq0 */
        unsigned int  cpu_fiqout2_statr     : 1;  /* bit[1]   : [1]:fiq0 */
        unsigned int  reserved              : 30; /* bit[2-31]: [31:2]�������� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU2_INT_STATR_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_INT_STATR_cpu_irqout2mcu2_statr_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_INT_STATR_cpu_irqout2mcu2_statr_END    (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_INT_STATR_cpu_fiqout2_statr_START      (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_INT_STATR_cpu_fiqout2_statr_END        (1)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU2_INT_STATM_UNION
 �ṹ˵��  : ACPU_SC_CPU2_INT_STATM �Ĵ����ṹ���塣��ַƫ����:0x34C����ֵ:0x00000000�����:32
 �Ĵ���˵��: ���κ��ڲ��жϼĴ���������ָʾSC��ǰ�ڲ��ж�״̬�����κ󣩡���ӦbitΪ1��ʾ���жϣ�Ϊ0��ʾ���жϡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cpu_irqout2mcu2_statm   : 1;  /* bit[0]   : [0]:irq0 */
        unsigned int  cpu_irqout2cpu0_2_statm : 1;  /* bit[1]   : [0]:irq0 */
        unsigned int  cpu_fiqout2_statm       : 1;  /* bit[2]   : [1]:fiq0 */
        unsigned int  cpu_fiqout2cpu0_2_statm : 1;  /* bit[3]   : [1]:fiq0 */
        unsigned int  reserved                : 28; /* bit[4-31]: [31:4]�������� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU2_INT_STATM_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_INT_STATM_cpu_irqout2mcu2_statm_START    (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_INT_STATM_cpu_irqout2mcu2_statm_END      (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_INT_STATM_cpu_irqout2cpu0_2_statm_START  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_INT_STATM_cpu_irqout2cpu0_2_statm_END    (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_INT_STATM_cpu_fiqout2_statm_START        (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_INT_STATM_cpu_fiqout2_statm_END          (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_INT_STATM_cpu_fiqout2cpu0_2_statm_START  (3)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_INT_STATM_cpu_fiqout2cpu0_2_statm_END    (3)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU2_MTCMOS_TIMER_UNION
 �ṹ˵��  : ACPU_SC_CPU2_MTCMOS_TIMER �Ĵ����ṹ���塣��ַƫ����:0x350����ֵ:0x000000FF�����:32
 �Ĵ���˵��: CPU0 MTCMOS�ȶ�ʱ�������ֵ����ʱʱ����19.2M��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cpu_mtcmos_timer2 : 16; /* bit[0-15] : [15:0]:timer0 */
        unsigned int  reserved          : 16; /* bit[16-31]: [31:16]�������� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU2_MTCMOS_TIMER_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_MTCMOS_TIMER_cpu_mtcmos_timer2_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_MTCMOS_TIMER_cpu_mtcmos_timer2_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU2_MTCMOS_TIMER_STAT_UNION
 �ṹ˵��  : ACPU_SC_CPU2_MTCMOS_TIMER_STAT �Ĵ����ṹ���塣��ַƫ����:0x354����ֵ:0x00000000�����:32
 �Ĵ���˵��: CPU0 MTCMOS�ȶ�ʱ��״ָ̬ʾ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cpu_mtcmos_timer2_sta : 1;  /* bit[0]   : [0]:timer0_sta
                                                                0: δ�ȶ�
                                                                1���ȶ� */
        unsigned int  reserved              : 31; /* bit[1-31]: [31:1]�������� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU2_MTCMOS_TIMER_STAT_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_MTCMOS_TIMER_STAT_cpu_mtcmos_timer2_sta_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_MTCMOS_TIMER_STAT_cpu_mtcmos_timer2_sta_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU2_RVBARADDR_UNION
 �ṹ˵��  : ACPU_SC_CPU2_RVBARADDR �Ĵ����ṹ���塣��ַƫ����:0x358����ֵ:0x00000000�����:32
 �Ĵ���˵��: Reset Vector Base Address for executing in 64-bit state.
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  rvbaraddr2 : 32; /* bit[0-31]: RVBARADDRx[33:2]���ã�
                                                     RVBARADDRx[39:34]=0x0 */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU2_RVBARADDR_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_RVBARADDR_rvbaraddr2_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU2_RVBARADDR_rvbaraddr2_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU3_CTRL_UNION
 �ṹ˵��  : ACPU_SC_CPU3_CTRL �Ĵ����ṹ���塣��ַƫ����:0x400����ֵ:0x00000068�����:32
 �Ĵ���˵��: ACPU��ϵͳ�ϵ����üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cp15disable3       : 1;  /* bit[0]    : CPU0 cp15 ��ȫ�Ĵ�����ֹ����
                                                              0: �������
                                                              1: ��ֹ���� */
        unsigned int  reserved_0         : 1;  /* bit[1]    : ���� */
        unsigned int  edbgrq3            : 1;  /* bit[2]    : ʹ��A53 integration ��edbgrq0
                                                              0: ��ֹ
                                                              1: ʹ�� */
        unsigned int  vinithi3           : 1;  /* bit[3]    : CPU0 ��������ַ������
                                                              0: ��λ��ַ
                                                              1: ��λ��ַ */
        unsigned int  reserved_1         : 1;  /* bit[4]    : ���� */
        unsigned int  bypass_warmrstreq3 : 1;  /* bit[5]    : bypass cpu0��warm reset
                                                              0: ��ִ���ȸ�λ��bypass
                                                              1: ִ���ȸ�λ */
        unsigned int  bypass_dbgrstreq3  : 1;  /* bit[6]    : bypass cpu0��dbg warm reset
                                                              0: ��ִ���ȸ�λ��bypass
                                                              1: ִ���ȸ�λ */
        unsigned int  aa64naa32_3        : 1;  /* bit[7]    : 0 AArch32
                                                              1 AArch64 */
        unsigned int  cfgend3            : 1;  /* bit[8]    : 0 С����
                                                              1 ����� */
        unsigned int  cfgte3             : 1;  /* bit[9]    : 0 ��ʹ��T32
                                                              1 ʹ��T32 */
        unsigned int  cryptodisable3     : 1;  /* bit[10]   : ��ʹ��crypto���� */
        unsigned int  reserved_2         : 21; /* bit[11-31]: [31��11]������ */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU3_CTRL_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_CTRL_cp15disable3_START        (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_CTRL_cp15disable3_END          (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_CTRL_edbgrq3_START             (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_CTRL_edbgrq3_END               (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_CTRL_vinithi3_START            (3)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_CTRL_vinithi3_END              (3)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_CTRL_bypass_warmrstreq3_START  (5)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_CTRL_bypass_warmrstreq3_END    (5)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_CTRL_bypass_dbgrstreq3_START   (6)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_CTRL_bypass_dbgrstreq3_END     (6)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_CTRL_aa64naa32_3_START         (7)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_CTRL_aa64naa32_3_END           (7)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_CTRL_cfgend3_START             (8)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_CTRL_cfgend3_END               (8)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_CTRL_cfgte3_START              (9)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_CTRL_cfgte3_END                (9)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_CTRL_cryptodisable3_START      (10)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_CTRL_cryptodisable3_END        (10)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU3_STAT_UNION
 �ṹ˵��  : ACPU_SC_CPU3_STAT �Ĵ����ṹ���塣��ַƫ����:0x404����ֵ:0x00000000�����:32
 �Ĵ���˵��: ϵͳ״̬�Ĵ��������ڼ��ϵͳ��״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_smpnamp3    : 1;  /* bit[0]   : ���ñ��ؿ��Զ���CPU0��ϵͳ�����sc_smpnamp0�źŵ�ֵ��
                                                         0:Asymmetric
                                                         1:Symmetric. */
        unsigned int  sc_standbywfi3 : 1;  /* bit[1]   : ���ñ��ؿ��Զ���CPU0��ϵͳ�����sc_standbywfi�źŵ�ֵ��
                                                         0:processor not in WFE Standby mode
                                                         1:processor in WFE Standby mode. */
        unsigned int  sc_standbywfe3 : 1;  /* bit[2]   : ���ñ��ؿ��Զ���CPU0��ϵͳ�����sc_standbywfe�źŵ�ֵ��
                                                         0:processor not in WFE Standby mode
                                                         1:processor in WFE Standby mode. */
        unsigned int  aarm_dbgack3   : 1;  /* bit[3]   : aarm_dbgack��AARM��debugacknowledge״ָ̬ʾ�źţ�
                                                         0:not acknowledged
                                                         1:acknowledged. */
        unsigned int  reserved_0     : 1;  /* bit[4]   : ���� */
        unsigned int  dbgrstreq3     : 1;  /* bit[5]   : dbg Warm reset request */
        unsigned int  warmrstreq3    : 1;  /* bit[6]   : Warm reset request */
        unsigned int  reserved_1     : 25; /* bit[7-31]: [31:7]���� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU3_STAT_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_STAT_sc_smpnamp3_START     (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_STAT_sc_smpnamp3_END       (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_STAT_sc_standbywfi3_START  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_STAT_sc_standbywfi3_END    (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_STAT_sc_standbywfe3_START  (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_STAT_sc_standbywfe3_END    (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_STAT_aarm_dbgack3_START    (3)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_STAT_aarm_dbgack3_END      (3)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_STAT_dbgrstreq3_START      (5)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_STAT_dbgrstreq3_END        (5)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_STAT_warmrstreq3_START     (6)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_STAT_warmrstreq3_END       (6)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU3_CLKEN_UNION
 �ṹ˵��  : ACPU_SC_CPU3_CLKEN �Ĵ����ṹ���塣��ַƫ����:0x408����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳʱ���ſ����üĴ���������Ӧλд1ʹ����Ӧʱ�ӣ�д0��Ӱ�졣
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved_0         : 1;  /* bit[0]   : [0]�������� 
                                                               */
        unsigned int  hpm_cpucore3_clken : 1;  /* bit[1]   : hpm cpucore0 ����ʱ���ſ�ʹ��
                                                             1'b1: ʱ��ʹ�ܣ� 
                                                             1'b0: ��Ч */
        unsigned int  reserved_1         : 1;  /* bit[2]   : [2]�������� 
                                                               */
        unsigned int  reserved_2         : 29; /* bit[3-31]: [31:3]�������� 
                                                               */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU3_CLKEN_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_CLKEN_hpm_cpucore3_clken_START  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_CLKEN_hpm_cpucore3_clken_END    (1)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU3_CLKDIS_UNION
 �ṹ˵��  : ACPU_SC_CPU3_CLKDIS �Ĵ����ṹ���塣��ַƫ����:0x40C����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳʱ���ſ����üĴ���������Ӧλд1��ֹ��Ӧʱ�ӣ�д0��Ӱ�졣
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved_0          : 1;  /* bit[0]   : [0]�������� 
                                                                */
        unsigned int  hpm_cpucore3_clkdis : 1;  /* bit[1]   : hpm cpucore0 ����ʱ���ſ�ʹ��
                                                              1'b1: ʱ�ӹر� 
                                                              1'b0: ��Ч */
        unsigned int  reserved_1          : 1;  /* bit[2]   : [2]�������� 
                                                                */
        unsigned int  reserved_2          : 29; /* bit[3-31]: [31:3]�������� 
                                                                */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU3_CLKDIS_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_CLKDIS_hpm_cpucore3_clkdis_START  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_CLKDIS_hpm_cpucore3_clkdis_END    (1)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU3_CLK_STAT_UNION
 �ṹ˵��  : ACPU_SC_CPU3_CLK_STAT �Ĵ����ṹ���塣��ַƫ����:0x410����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳʱ��״̬�Ĵ�����0��ʾʱ����Ӧ�رգ�1��ʾ�򿪡�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved_0          : 1;  /* bit[0]   : [0]�������� 
                                                                */
        unsigned int  hpm_cpucore3_clksta : 1;  /* bit[1]   : hpm cpucore0 ����ʱ���ſ�ʹ��
                                                              1'b1: ʱ��ʹ�ܣ� 
                                                              1'b0: ʱ�ӹر� */
        unsigned int  reserved_1          : 1;  /* bit[2]   : [0]�������� 
                                                                */
        unsigned int  reserved_2          : 29; /* bit[3-31]: [0]�������� 
                                                                */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU3_CLK_STAT_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_CLK_STAT_hpm_cpucore3_clksta_START  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_CLK_STAT_hpm_cpucore3_clksta_END    (1)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU3_RSTEN_UNION
 �ṹ˵��  : ACPU_SC_CPU3_RSTEN �Ĵ����ṹ���塣��ַƫ����:0x414����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳ��λʹ�ܼĴ���������Ӧλд1ʹ����Ӧ��λ�źţ������븴λ̬����д0��Ӱ�졣�üĴ���ֻ���ϵ縴λʱ����λ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  srst_aarm_por3_rsten  : 1;  /* bit[0]   : A53 integration��por 0��λ���� */
        unsigned int  srst_aarm_core3_rsten : 1;  /* bit[1]   : A53 integration��core 0��λ���� */
        unsigned int  reserved_0            : 2;  /* bit[2-3] : ������ 
                                                                  */
        unsigned int  srst_aarm_hpm3_rsten  : 1;  /* bit[4]   : A53 integration��hpm0��λ���� */
        unsigned int  reserved_1            : 27; /* bit[5-31]: [31:5]�������� 
                                                                  */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU3_RSTEN_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_RSTEN_srst_aarm_por3_rsten_START   (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_RSTEN_srst_aarm_por3_rsten_END     (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_RSTEN_srst_aarm_core3_rsten_START  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_RSTEN_srst_aarm_core3_rsten_END    (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_RSTEN_srst_aarm_hpm3_rsten_START   (4)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_RSTEN_srst_aarm_hpm3_rsten_END     (4)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU3_RSTDIS_UNION
 �ṹ˵��  : ACPU_SC_CPU3_RSTDIS �Ĵ����ṹ���塣��ַƫ����:0x418����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳ��λ��ֹ�Ĵ��������ڿ��Ƹ��������ܵĸ�λ��ֹ������Ӧλд1��ֹ��Ӧ��������λ�źţ����˳���λ̬����д0��Ӱ�졣�üĴ���ֻ���ϵ縴λʱ����λ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  srst_aarm_por3_rstdis  : 1;  /* bit[0]   : A53 integration��por 0��λ���� */
        unsigned int  srst_aarm_core3_rstdis : 1;  /* bit[1]   : A53 integration��core 0��λ���� */
        unsigned int  reserved_0             : 2;  /* bit[2-3] : ������ 
                                                                   */
        unsigned int  srst_aarm_hpm3_rstdis  : 1;  /* bit[4]   : A53 integration��hpm0��λ���� */
        unsigned int  reserved_1             : 27; /* bit[5-31]: [31:5]�������� 
                                                                   */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU3_RSTDIS_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_RSTDIS_srst_aarm_por3_rstdis_START   (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_RSTDIS_srst_aarm_por3_rstdis_END     (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_RSTDIS_srst_aarm_core3_rstdis_START  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_RSTDIS_srst_aarm_core3_rstdis_END    (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_RSTDIS_srst_aarm_hpm3_rstdis_START   (4)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_RSTDIS_srst_aarm_hpm3_rstdis_END     (4)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU3_RST_STAT_UNION
 �ṹ˵��  : ACPU_SC_CPU3_RST_STAT �Ĵ����ṹ���塣��ַƫ����:0x41C����ֵ:0x00000013�����:32
 �Ĵ���˵��: ACPU��ϵͳ��λ״̬�Ĵ�����0��ʾ��λ��ʹ�ܣ�1��λʹ�ܼ����븴λ̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  srst_aarm_por3_rststa  : 1;  /* bit[0]   : A53 integration��por 0��λ���� */
        unsigned int  srst_aarm_core3_rststa : 1;  /* bit[1]   : A53 integration��core 0��λ���� */
        unsigned int  reserved_0             : 2;  /* bit[2-3] : ������ 
                                                                   */
        unsigned int  srst_aarm_hpm3_rststa  : 1;  /* bit[4]   : A53 integration��hpm0��λ���� */
        unsigned int  reserved_1             : 27; /* bit[5-31]: [31:5]�������� 
                                                                   */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU3_RST_STAT_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_RST_STAT_srst_aarm_por3_rststa_START   (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_RST_STAT_srst_aarm_por3_rststa_END     (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_RST_STAT_srst_aarm_core3_rststa_START  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_RST_STAT_srst_aarm_core3_rststa_END    (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_RST_STAT_srst_aarm_hpm3_rststa_START   (4)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_RST_STAT_srst_aarm_hpm3_rststa_END     (4)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU3_MTCMOS_EN_UNION
 �ṹ˵��  : ACPU_SC_CPU3_MTCMOS_EN �Ĵ����ṹ���塣��ַƫ����:0x420����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳ�ϵ�����Ĵ��������ڸ������������ϵ������źţ�����Ӧλд1�����ϵ�����д0��Ӱ�졣
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pw_mtcmos_en_acpu3 : 1;  /* bit[0]   : [0] ��ACPU0�µ��� */
        unsigned int  reserved           : 31; /* bit[1-31]: [31:1]��������  */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU3_MTCMOS_EN_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_MTCMOS_EN_pw_mtcmos_en_acpu3_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_MTCMOS_EN_pw_mtcmos_en_acpu3_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU3_MTCMOS_DIS_UNION
 �ṹ˵��  : ACPU_SC_CPU3_MTCMOS_DIS �Ĵ����ṹ���塣��ַƫ����:0x424����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳ�ϵ������ֹ�Ĵ��������ڸ���������ֹ�ϵ������źţ�����Ӧλд1��ֹ�ϵ�����д0��Ӱ�졣
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pw_mtcmos_dis_acpu3 : 1;  /* bit[0]   : [0] ��ACPU0�µ��� */
        unsigned int  reserved            : 31; /* bit[1-31]: [31:1]��������  */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU3_MTCMOS_DIS_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_MTCMOS_DIS_pw_mtcmos_dis_acpu3_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_MTCMOS_DIS_pw_mtcmos_dis_acpu3_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU3_MTCMOS_STAT_UNION
 �ṹ˵��  : ACPU_SC_CPU3_MTCMOS_STAT �Ĵ����ṹ���塣��ַƫ����:0x428����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳ�ϵ�����״̬�Ĵ�������ӦλΪ1��ʾ��������״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pw_mtcmos_sta_acpu3 : 1;  /* bit[0]   : [0] ��ACPU0�µ��� */
        unsigned int  reserved            : 31; /* bit[1-31]: [31:1]��������  */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU3_MTCMOS_STAT_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_MTCMOS_STAT_pw_mtcmos_sta_acpu3_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_MTCMOS_STAT_pw_mtcmos_sta_acpu3_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU3_MTCMOS_ACK_STAT_UNION
 �ṹ˵��  : ACPU_SC_CPU3_MTCMOS_ACK_STAT �Ĵ����ṹ���塣��ַƫ����:0x42C����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳ�ϵ練����ѯ�Ĵ��������ڲ�ѯ�������������ϵ������źź��Ƿ񷵻�ACK������ӦλΪ1��ʾ�����µ磬Ϊ0��ʾ������
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pw_mtcmos_acksta_acpu3 : 1;  /* bit[0]   : [0] ��ACPU0�µ��� */
        unsigned int  reserved               : 31; /* bit[1-31]: [31:1]��������  */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU3_MTCMOS_ACK_STAT_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_MTCMOS_ACK_STAT_pw_mtcmos_acksta_acpu3_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_MTCMOS_ACK_STAT_pw_mtcmos_acksta_acpu3_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU3_PW_ISOEN_UNION
 �ṹ˵��  : ACPU_SC_CPU3_PW_ISOEN �Ĵ����ṹ���塣��ַƫ����:0x430����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳISOʹ�ܼĴ��������ڿ��Ƹ���������ص�Isolation Cellʹ�ܡ�����Ӧλд1ʹ����Ӧ������IsoLation Cell�����źŸ��ϣ���д0��Ӱ�졣�üĴ���ֻ���ϵ縴λʱ����λ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pw_isoen_acpu3 : 1;  /* bit[0]   : [0] ��ACPU0�µ��� */
        unsigned int  reserved       : 31; /* bit[1-31]: [31:1]��������  */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU3_PW_ISOEN_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_PW_ISOEN_pw_isoen_acpu3_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_PW_ISOEN_pw_isoen_acpu3_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU3_PW_ISODIS_UNION
 �ṹ˵��  : ACPU_SC_CPU3_PW_ISODIS �Ĵ����ṹ���塣��ַƫ����:0x434����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳISO��ֹ�Ĵ��������ڿ��Ƹ���������ص�Isolation Cell��ֹ������Ӧλд1��ֹ��Ӧ������IsoLation Cell�����źŲ����ϣ���д0��Ӱ�졣�üĴ���ֻ���ϵ縴λʱ����λ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pw_isodis_acpu3 : 1;  /* bit[0]   : [0] ��ACPU0�µ��� */
        unsigned int  reserved        : 31; /* bit[1-31]: [31:1]��������  */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU3_PW_ISODIS_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_PW_ISODIS_pw_isodis_acpu3_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_PW_ISODIS_pw_isodis_acpu3_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU3_PW_ISO_STAT_UNION
 �ṹ˵��  : ACPU_SC_CPU3_PW_ISO_STAT �Ĵ����ṹ���塣��ַƫ����:0x438����ֵ:0x00000001�����:32
 �Ĵ���˵��: ACPU��ϵͳISO״̬�Ĵ�����0��ʾisolation��ʹ�ܣ�1��ʾisolationʹ�ܡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pw_iso_stat_acpu3 : 1;  /* bit[0]   : [0] ��ACPU0�µ��� */
        unsigned int  reserved          : 31; /* bit[1-31]: [31:1]�������� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU3_PW_ISO_STAT_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_PW_ISO_STAT_pw_iso_stat_acpu3_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_PW_ISO_STAT_pw_iso_stat_acpu3_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU3_INT_EN_UNION
 �ṹ˵��  : ACPU_SC_CPU3_INT_EN �Ĵ����ṹ���塣��ַƫ����:0x43C����ֵ:0x00000000�����:32
 �Ĵ���˵��: �ڲ��ж����μĴ������Ա���д1�������Σ�д0��Ӱ�����ε�״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cpu_irqout2mcu3_en   : 1;  /* bit[0]   : [0]:irq0 */
        unsigned int  cpu_irqout2cpu0_3_en : 1;  /* bit[1]   : [0]:irq0 */
        unsigned int  cpu_fiqout3_en       : 1;  /* bit[2]   : [1]:fiq0 */
        unsigned int  cpu_fiqout2cpu0_3_en : 1;  /* bit[3]   : [1]:fiq0 */
        unsigned int  reserved             : 28; /* bit[4-31]: [31:4]�������� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU3_INT_EN_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_INT_EN_cpu_irqout2mcu3_en_START    (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_INT_EN_cpu_irqout2mcu3_en_END      (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_INT_EN_cpu_irqout2cpu0_3_en_START  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_INT_EN_cpu_irqout2cpu0_3_en_END    (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_INT_EN_cpu_fiqout3_en_START        (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_INT_EN_cpu_fiqout3_en_END          (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_INT_EN_cpu_fiqout2cpu0_3_en_START  (3)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_INT_EN_cpu_fiqout2cpu0_3_en_END    (3)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU3_INT_DIS_UNION
 �ṹ˵��  : ACPU_SC_CPU3_INT_DIS �Ĵ����ṹ���塣��ַƫ����:0x440����ֵ:0x00000000�����:32
 �Ĵ���˵��: �ڲ��ж����μĴ������Ա���д1����ֹ���Σ�д0��Ӱ��ʱ�����ε�״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cpu_irqout2mcu3_dis   : 1;  /* bit[0]   : [0]:irq0 */
        unsigned int  cpu_irqout2cpu0_3_dis : 1;  /* bit[1]   : [0]:irq0 */
        unsigned int  cpu_fiqout3_dis       : 1;  /* bit[2]   : [1]:fiq0 */
        unsigned int  cpu_fiqout2cpu0_3_dis : 1;  /* bit[3]   : [1]:fiq0 */
        unsigned int  reserved              : 28; /* bit[4-31]: [31:4]�������� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU3_INT_DIS_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_INT_DIS_cpu_irqout2mcu3_dis_START    (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_INT_DIS_cpu_irqout2mcu3_dis_END      (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_INT_DIS_cpu_irqout2cpu0_3_dis_START  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_INT_DIS_cpu_irqout2cpu0_3_dis_END    (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_INT_DIS_cpu_fiqout3_dis_START        (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_INT_DIS_cpu_fiqout3_dis_END          (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_INT_DIS_cpu_fiqout2cpu0_3_dis_START  (3)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_INT_DIS_cpu_fiqout2cpu0_3_dis_END    (3)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU3_INT_STAT_UNION
 �ṹ˵��  : ACPU_SC_CPU3_INT_STAT �Ĵ����ṹ���塣��ַƫ����:0x444����ֵ:0x00000000�����:32
 �Ĵ���˵��: �ڲ��ж�ʹ�ܼĴ���������SC�ڲ��жϵ��������á���ӦbitΪ1��ʾʹ����Ӧ�жϣ�Ϊ0��ʾ�����жϡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cpu_irqout2mcu3_state   : 1;  /* bit[0]   : [0]:irq0 */
        unsigned int  cpu_irqout2cpu0_3_state : 1;  /* bit[1]   : [0]:irq0 */
        unsigned int  cpu_fiqout3_state       : 1;  /* bit[2]   : [1]:fiq0 */
        unsigned int  cpu_fiqout2cpu0_3_state : 1;  /* bit[3]   : [1]:fiq0 */
        unsigned int  reserved                : 28; /* bit[4-31]: [31:4]�������� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU3_INT_STAT_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_INT_STAT_cpu_irqout2mcu3_state_START    (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_INT_STAT_cpu_irqout2mcu3_state_END      (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_INT_STAT_cpu_irqout2cpu0_3_state_START  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_INT_STAT_cpu_irqout2cpu0_3_state_END    (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_INT_STAT_cpu_fiqout3_state_START        (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_INT_STAT_cpu_fiqout3_state_END          (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_INT_STAT_cpu_fiqout2cpu0_3_state_START  (3)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_INT_STAT_cpu_fiqout2cpu0_3_state_END    (3)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU3_INT_STATR_UNION
 �ṹ˵��  : ACPU_SC_CPU3_INT_STATR �Ĵ����ṹ���塣��ַƫ����:0x448����ֵ:0x00000000�����:32
 �Ĵ���˵��: ԭʼ�ڲ��жϼĴ���������ָʾSC�ڲ���ԭʼ�ж�״̬������ǰ������ӦbitΪ1��ʾ���жϣ�Ϊ0��ʾ���жϡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cpu_irqout2mcu3_statr : 1;  /* bit[0]   : [0]:irq0 */
        unsigned int  cpu_fiqout3_statr     : 1;  /* bit[1]   : [1]:fiq0 */
        unsigned int  reserved              : 30; /* bit[2-31]: [31:2]�������� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU3_INT_STATR_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_INT_STATR_cpu_irqout2mcu3_statr_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_INT_STATR_cpu_irqout2mcu3_statr_END    (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_INT_STATR_cpu_fiqout3_statr_START      (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_INT_STATR_cpu_fiqout3_statr_END        (1)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU3_INT_STATM_UNION
 �ṹ˵��  : ACPU_SC_CPU3_INT_STATM �Ĵ����ṹ���塣��ַƫ����:0x44C����ֵ:0x00000000�����:32
 �Ĵ���˵��: ���κ��ڲ��жϼĴ���������ָʾSC��ǰ�ڲ��ж�״̬�����κ󣩡���ӦbitΪ1��ʾ���жϣ�Ϊ0��ʾ���жϡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cpu_irqout2mcu3_statm   : 1;  /* bit[0]   : [0]:irq0 */
        unsigned int  cpu_irqout2cpu0_3_statm : 1;  /* bit[1]   : [0]:irq0 */
        unsigned int  cpu_fiqout3_statm       : 1;  /* bit[2]   : [1]:fiq0 */
        unsigned int  cpu_fiqout2cpu0_3_statm : 1;  /* bit[3]   : [1]:fiq0 */
        unsigned int  reserved                : 28; /* bit[4-31]: [31:4]�������� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU3_INT_STATM_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_INT_STATM_cpu_irqout2mcu3_statm_START    (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_INT_STATM_cpu_irqout2mcu3_statm_END      (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_INT_STATM_cpu_irqout2cpu0_3_statm_START  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_INT_STATM_cpu_irqout2cpu0_3_statm_END    (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_INT_STATM_cpu_fiqout3_statm_START        (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_INT_STATM_cpu_fiqout3_statm_END          (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_INT_STATM_cpu_fiqout2cpu0_3_statm_START  (3)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_INT_STATM_cpu_fiqout2cpu0_3_statm_END    (3)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU3_MTCMOS_TIMER_UNION
 �ṹ˵��  : ACPU_SC_CPU3_MTCMOS_TIMER �Ĵ����ṹ���塣��ַƫ����:0x450����ֵ:0x000000FF�����:32
 �Ĵ���˵��: CPU0 MTCMOS�ȶ�ʱ�������ֵ����ʱʱ����19.2M��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cpu_mtcmos_timer3 : 16; /* bit[0-15] : [15:0]:timer0 */
        unsigned int  reserved          : 16; /* bit[16-31]: [31:16]�������� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU3_MTCMOS_TIMER_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_MTCMOS_TIMER_cpu_mtcmos_timer3_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_MTCMOS_TIMER_cpu_mtcmos_timer3_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU3_MTCMOS_TIMER_STAT_UNION
 �ṹ˵��  : ACPU_SC_CPU3_MTCMOS_TIMER_STAT �Ĵ����ṹ���塣��ַƫ����:0x454����ֵ:0x00000000�����:32
 �Ĵ���˵��: CPU0 MTCMOS�ȶ�ʱ��״ָ̬ʾ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cpu_mtcmos_timer3_sta : 1;  /* bit[0]   : [0]:timer0_sta
                                                                0: δ�ȶ�
                                                                1���ȶ� */
        unsigned int  reserved              : 31; /* bit[1-31]: [31:1]�������� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU3_MTCMOS_TIMER_STAT_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_MTCMOS_TIMER_STAT_cpu_mtcmos_timer3_sta_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_MTCMOS_TIMER_STAT_cpu_mtcmos_timer3_sta_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU3_RVBARADDR_UNION
 �ṹ˵��  : ACPU_SC_CPU3_RVBARADDR �Ĵ����ṹ���塣��ַƫ����:0x458����ֵ:0x00000000�����:32
 �Ĵ���˵��: Reset Vector Base Address for executing in 64-bit state.
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  rvbaraddr3 : 32; /* bit[0-31]: RVBARADDRx[33:2]���ã�
                                                     RVBARADDRx[39:34]=0x0 */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU3_RVBARADDR_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_RVBARADDR_rvbaraddr3_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU3_RVBARADDR_rvbaraddr3_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU4_CTRL_UNION
 �ṹ˵��  : ACPU_SC_CPU4_CTRL �Ĵ����ṹ���塣��ַƫ����:0x500����ֵ:0x00000068�����:32
 �Ĵ���˵��: ACPU��ϵͳ�ϵ����üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cp15disable4       : 1;  /* bit[0]    : CPU0 cp15 ��ȫ�Ĵ�����ֹ����
                                                              0: �������
                                                              1: ��ֹ���� */
        unsigned int  reserved_0         : 1;  /* bit[1]    : ���� */
        unsigned int  edbgrq4            : 1;  /* bit[2]    : ʹ��A53 integration ��edbgrq0
                                                              0: ��ֹ
                                                              1: ʹ�� */
        unsigned int  vinithi4           : 1;  /* bit[3]    : CPU0 ��������ַ������
                                                              0: ��λ��ַ
                                                              1: ��λ��ַ */
        unsigned int  reserved_1         : 1;  /* bit[4]    : ���� */
        unsigned int  bypass_warmrstreq4 : 1;  /* bit[5]    : bypass cpu0��warm reset
                                                              0: ��ִ���ȸ�λ��bypass
                                                              1: ִ���ȸ�λ */
        unsigned int  bypass_dbgrstreq4  : 1;  /* bit[6]    : bypass cpu0��dbg warm reset
                                                              0: ��ִ���ȸ�λ��bypass
                                                              1: ִ���ȸ�λ */
        unsigned int  aa64naa32_4        : 1;  /* bit[7]    : 0 AArch32
                                                              1 AArch64 */
        unsigned int  cfgend4            : 1;  /* bit[8]    : 0 С����
                                                              1 ����� */
        unsigned int  cfgte4             : 1;  /* bit[9]    : 0 ��ʹ��T32
                                                              1 ʹ��T32 */
        unsigned int  cryptodisable4     : 1;  /* bit[10]   : ��ʹ��crypto���� */
        unsigned int  reserved_2         : 21; /* bit[11-31]: [31��11]������ */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU4_CTRL_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_CTRL_cp15disable4_START        (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_CTRL_cp15disable4_END          (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_CTRL_edbgrq4_START             (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_CTRL_edbgrq4_END               (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_CTRL_vinithi4_START            (3)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_CTRL_vinithi4_END              (3)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_CTRL_bypass_warmrstreq4_START  (5)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_CTRL_bypass_warmrstreq4_END    (5)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_CTRL_bypass_dbgrstreq4_START   (6)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_CTRL_bypass_dbgrstreq4_END     (6)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_CTRL_aa64naa32_4_START         (7)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_CTRL_aa64naa32_4_END           (7)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_CTRL_cfgend4_START             (8)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_CTRL_cfgend4_END               (8)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_CTRL_cfgte4_START              (9)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_CTRL_cfgte4_END                (9)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_CTRL_cryptodisable4_START      (10)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_CTRL_cryptodisable4_END        (10)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU4_STAT_UNION
 �ṹ˵��  : ACPU_SC_CPU4_STAT �Ĵ����ṹ���塣��ַƫ����:0x504����ֵ:0x00000000�����:32
 �Ĵ���˵��: ϵͳ״̬�Ĵ��������ڼ��ϵͳ��״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_smpnamp4    : 1;  /* bit[0]   : ���ñ��ؿ��Զ���CPU0��ϵͳ�����sc_smpnamp0�źŵ�ֵ��
                                                         0:Asymmetric
                                                         1:Symmetric. */
        unsigned int  sc_standbywfi4 : 1;  /* bit[1]   : ���ñ��ؿ��Զ���CPU0��ϵͳ�����sc_standbywfi�źŵ�ֵ��
                                                         0:processor not in WFE Standby mode
                                                         1:processor in WFE Standby mode. */
        unsigned int  sc_standbywfe4 : 1;  /* bit[2]   : ���ñ��ؿ��Զ���CPU0��ϵͳ�����sc_standbywfe�źŵ�ֵ��
                                                         0:processor not in WFE Standby mode
                                                         1:processor in WFE Standby mode. */
        unsigned int  aarm_dbgack4   : 1;  /* bit[3]   : aarm_dbgack��AARM��debugacknowledge״ָ̬ʾ�źţ�
                                                         0:not acknowledged
                                                         1:acknowledged. */
        unsigned int  reserved_0     : 1;  /* bit[4]   : ���� */
        unsigned int  dbgrstreq4     : 1;  /* bit[5]   : dbg Warm reset request */
        unsigned int  warmrstreq4    : 1;  /* bit[6]   : Warm reset request */
        unsigned int  reserved_1     : 25; /* bit[7-31]: [31:7]���� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU4_STAT_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_STAT_sc_smpnamp4_START     (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_STAT_sc_smpnamp4_END       (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_STAT_sc_standbywfi4_START  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_STAT_sc_standbywfi4_END    (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_STAT_sc_standbywfe4_START  (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_STAT_sc_standbywfe4_END    (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_STAT_aarm_dbgack4_START    (3)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_STAT_aarm_dbgack4_END      (3)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_STAT_dbgrstreq4_START      (5)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_STAT_dbgrstreq4_END        (5)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_STAT_warmrstreq4_START     (6)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_STAT_warmrstreq4_END       (6)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU4_CLKEN_UNION
 �ṹ˵��  : ACPU_SC_CPU4_CLKEN �Ĵ����ṹ���塣��ַƫ����:0x508����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳʱ���ſ����üĴ���������Ӧλд1ʹ����Ӧʱ�ӣ�д0��Ӱ�졣
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved_0         : 1;  /* bit[0]   : [0]�������� 
                                                               */
        unsigned int  hpm_cpucore4_clken : 1;  /* bit[1]   : hpm cpucore0 ����ʱ���ſ�ʹ��
                                                             1'b1: ʱ��ʹ�ܣ� 
                                                             1'b0: ��Ч */
        unsigned int  reserved_1         : 1;  /* bit[2]   : [2]�������� 
                                                               */
        unsigned int  reserved_2         : 29; /* bit[3-31]: [31:3]�������� 
                                                               */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU4_CLKEN_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_CLKEN_hpm_cpucore4_clken_START  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_CLKEN_hpm_cpucore4_clken_END    (1)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU4_CLKDIS_UNION
 �ṹ˵��  : ACPU_SC_CPU4_CLKDIS �Ĵ����ṹ���塣��ַƫ����:0x50C����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳʱ���ſ����üĴ���������Ӧλд1��ֹ��Ӧʱ�ӣ�д0��Ӱ�졣
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved_0          : 1;  /* bit[0]   : [0]�������� 
                                                                */
        unsigned int  hpm_cpucore4_clkdis : 1;  /* bit[1]   : hpm cpucore0 ����ʱ���ſ�ʹ��
                                                              1'b1: ʱ�ӹر� 
                                                              1'b0: ��Ч */
        unsigned int  reserved_1          : 1;  /* bit[2]   : [2]�������� 
                                                                */
        unsigned int  reserved_2          : 29; /* bit[3-31]: [31:3]�������� 
                                                                */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU4_CLKDIS_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_CLKDIS_hpm_cpucore4_clkdis_START  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_CLKDIS_hpm_cpucore4_clkdis_END    (1)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU4_CLK_STAT_UNION
 �ṹ˵��  : ACPU_SC_CPU4_CLK_STAT �Ĵ����ṹ���塣��ַƫ����:0x510����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳʱ��״̬�Ĵ�����0��ʾʱ����Ӧ�رգ�1��ʾ�򿪡�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved_0          : 1;  /* bit[0]   : [0]�������� 
                                                                */
        unsigned int  hpm_cpucore4_clksta : 1;  /* bit[1]   : hpm cpucore0 ����ʱ���ſ�ʹ��
                                                              1'b1: ʱ��ʹ�ܣ� 
                                                              1'b0: ʱ�ӹر� */
        unsigned int  reserved_1          : 1;  /* bit[2]   : [0]�������� 
                                                                */
        unsigned int  reserved_2          : 29; /* bit[3-31]: [0]�������� 
                                                                */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU4_CLK_STAT_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_CLK_STAT_hpm_cpucore4_clksta_START  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_CLK_STAT_hpm_cpucore4_clksta_END    (1)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU4_RSTEN_UNION
 �ṹ˵��  : ACPU_SC_CPU4_RSTEN �Ĵ����ṹ���塣��ַƫ����:0x514����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳ��λʹ�ܼĴ���������Ӧλд1ʹ����Ӧ��λ�źţ������븴λ̬����д0��Ӱ�졣�üĴ���ֻ���ϵ縴λʱ����λ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  srst_aarm_por4_rsten  : 1;  /* bit[0]   : A53 integration��por 0��λ���� */
        unsigned int  srst_aarm_core4_rsten : 1;  /* bit[1]   : A53 integration��core 0��λ���� */
        unsigned int  reserved_0            : 2;  /* bit[2-3] : ������ 
                                                                  */
        unsigned int  srst_aarm_hpm4_rsten  : 1;  /* bit[4]   : A53 integration��hpm0��λ���� */
        unsigned int  reserved_1            : 27; /* bit[5-31]: [31:5]�������� 
                                                                  */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU4_RSTEN_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_RSTEN_srst_aarm_por4_rsten_START   (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_RSTEN_srst_aarm_por4_rsten_END     (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_RSTEN_srst_aarm_core4_rsten_START  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_RSTEN_srst_aarm_core4_rsten_END    (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_RSTEN_srst_aarm_hpm4_rsten_START   (4)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_RSTEN_srst_aarm_hpm4_rsten_END     (4)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU4_RSTDIS_UNION
 �ṹ˵��  : ACPU_SC_CPU4_RSTDIS �Ĵ����ṹ���塣��ַƫ����:0x518����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳ��λ��ֹ�Ĵ��������ڿ��Ƹ��������ܵĸ�λ��ֹ������Ӧλд1��ֹ��Ӧ��������λ�źţ����˳���λ̬����д0��Ӱ�졣�üĴ���ֻ���ϵ縴λʱ����λ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  srst_aarm_por4_rstdis  : 1;  /* bit[0]   : A53 integration��por 0��λ���� */
        unsigned int  srst_aarm_core4_rstdis : 1;  /* bit[1]   : A53 integration��core 0��λ���� */
        unsigned int  reserved_0             : 2;  /* bit[2-3] : ������ 
                                                                   */
        unsigned int  srst_aarm_hpm4_rstdis  : 1;  /* bit[4]   : A53 integration��hpm0��λ���� */
        unsigned int  reserved_1             : 27; /* bit[5-31]: [31:5]�������� 
                                                                   */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU4_RSTDIS_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_RSTDIS_srst_aarm_por4_rstdis_START   (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_RSTDIS_srst_aarm_por4_rstdis_END     (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_RSTDIS_srst_aarm_core4_rstdis_START  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_RSTDIS_srst_aarm_core4_rstdis_END    (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_RSTDIS_srst_aarm_hpm4_rstdis_START   (4)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_RSTDIS_srst_aarm_hpm4_rstdis_END     (4)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU4_RST_STAT_UNION
 �ṹ˵��  : ACPU_SC_CPU4_RST_STAT �Ĵ����ṹ���塣��ַƫ����:0x51C����ֵ:0x00000013�����:32
 �Ĵ���˵��: ACPU��ϵͳ��λ״̬�Ĵ�����0��ʾ��λ��ʹ�ܣ�1��λʹ�ܼ����븴λ̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  srst_aarm_por4_rststa  : 1;  /* bit[0]   : A53 integration��por 0��λ���� */
        unsigned int  srst_aarm_core4_rststa : 1;  /* bit[1]   : A53 integration��core 0��λ���� */
        unsigned int  reserved_0             : 2;  /* bit[2-3] : ������ 
                                                                   */
        unsigned int  srst_aarm_hpm4_rststa  : 1;  /* bit[4]   : A53 integration��hpm0��λ���� */
        unsigned int  reserved_1             : 27; /* bit[5-31]: [31:5]�������� 
                                                                   */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU4_RST_STAT_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_RST_STAT_srst_aarm_por4_rststa_START   (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_RST_STAT_srst_aarm_por4_rststa_END     (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_RST_STAT_srst_aarm_core4_rststa_START  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_RST_STAT_srst_aarm_core4_rststa_END    (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_RST_STAT_srst_aarm_hpm4_rststa_START   (4)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_RST_STAT_srst_aarm_hpm4_rststa_END     (4)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU4_MTCMOS_EN_UNION
 �ṹ˵��  : ACPU_SC_CPU4_MTCMOS_EN �Ĵ����ṹ���塣��ַƫ����:0x520����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳ�ϵ�����Ĵ��������ڸ������������ϵ������źţ�����Ӧλд1�����ϵ�����д0��Ӱ�졣
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pw_mtcmos_en_acpu4 : 1;  /* bit[0]   : [0] ��ACPU0�µ��� */
        unsigned int  reserved           : 31; /* bit[1-31]: [31:1]��������  */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU4_MTCMOS_EN_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_MTCMOS_EN_pw_mtcmos_en_acpu4_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_MTCMOS_EN_pw_mtcmos_en_acpu4_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU4_MTCMOS_DIS_UNION
 �ṹ˵��  : ACPU_SC_CPU4_MTCMOS_DIS �Ĵ����ṹ���塣��ַƫ����:0x524����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳ�ϵ������ֹ�Ĵ��������ڸ���������ֹ�ϵ������źţ�����Ӧλд1��ֹ�ϵ�����д0��Ӱ�졣
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pw_mtcmos_dis_acpu4 : 1;  /* bit[0]   : [0] ��ACPU0�µ��� */
        unsigned int  reserved            : 31; /* bit[1-31]: [31:1]��������  */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU4_MTCMOS_DIS_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_MTCMOS_DIS_pw_mtcmos_dis_acpu4_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_MTCMOS_DIS_pw_mtcmos_dis_acpu4_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU4_MTCMOS_STAT_UNION
 �ṹ˵��  : ACPU_SC_CPU4_MTCMOS_STAT �Ĵ����ṹ���塣��ַƫ����:0x528����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳ�ϵ�����״̬�Ĵ�������ӦλΪ1��ʾ��������״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pw_mtcmos_sta_acpu4 : 1;  /* bit[0]   : [0] ��ACPU0�µ��� */
        unsigned int  reserved            : 31; /* bit[1-31]: [31:1]��������  */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU4_MTCMOS_STAT_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_MTCMOS_STAT_pw_mtcmos_sta_acpu4_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_MTCMOS_STAT_pw_mtcmos_sta_acpu4_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU4_MTCMOS_ACK_STAT_UNION
 �ṹ˵��  : ACPU_SC_CPU4_MTCMOS_ACK_STAT �Ĵ����ṹ���塣��ַƫ����:0x52C����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳ�ϵ練����ѯ�Ĵ��������ڲ�ѯ�������������ϵ������źź��Ƿ񷵻�ACK������ӦλΪ1��ʾ�����µ磬Ϊ0��ʾ������
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pw_mtcmos_acksta_acpu4 : 1;  /* bit[0]   : [0] ��ACPU0�µ��� */
        unsigned int  reserved               : 31; /* bit[1-31]: [31:1]��������  */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU4_MTCMOS_ACK_STAT_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_MTCMOS_ACK_STAT_pw_mtcmos_acksta_acpu4_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_MTCMOS_ACK_STAT_pw_mtcmos_acksta_acpu4_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU4_PW_ISOEN_UNION
 �ṹ˵��  : ACPU_SC_CPU4_PW_ISOEN �Ĵ����ṹ���塣��ַƫ����:0x530����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳISOʹ�ܼĴ��������ڿ��Ƹ���������ص�Isolation Cellʹ�ܡ�����Ӧλд1ʹ����Ӧ������IsoLation Cell�����źŸ��ϣ���д0��Ӱ�졣�üĴ���ֻ���ϵ縴λʱ����λ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pw_isoen_acpu4 : 1;  /* bit[0]   : [0] ��ACPU0�µ��� */
        unsigned int  reserved       : 31; /* bit[1-31]: [31:1]��������  */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU4_PW_ISOEN_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_PW_ISOEN_pw_isoen_acpu4_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_PW_ISOEN_pw_isoen_acpu4_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU4_PW_ISODIS_UNION
 �ṹ˵��  : ACPU_SC_CPU4_PW_ISODIS �Ĵ����ṹ���塣��ַƫ����:0x534����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳISO��ֹ�Ĵ��������ڿ��Ƹ���������ص�Isolation Cell��ֹ������Ӧλд1��ֹ��Ӧ������IsoLation Cell�����źŲ����ϣ���д0��Ӱ�졣�üĴ���ֻ���ϵ縴λʱ����λ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pw_isodis_acpu4 : 1;  /* bit[0]   : [0] ��ACPU0�µ��� */
        unsigned int  reserved        : 31; /* bit[1-31]: [31:1]��������  */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU4_PW_ISODIS_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_PW_ISODIS_pw_isodis_acpu4_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_PW_ISODIS_pw_isodis_acpu4_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU4_PW_ISO_STAT_UNION
 �ṹ˵��  : ACPU_SC_CPU4_PW_ISO_STAT �Ĵ����ṹ���塣��ַƫ����:0x538����ֵ:0x00000001�����:32
 �Ĵ���˵��: ACPU��ϵͳISO״̬�Ĵ�����0��ʾisolation��ʹ�ܣ�1��ʾisolationʹ�ܡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pw_iso_stat_acpu4 : 1;  /* bit[0]   : [0] ��ACPU0�µ��� */
        unsigned int  reserved          : 31; /* bit[1-31]: [31:1]�������� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU4_PW_ISO_STAT_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_PW_ISO_STAT_pw_iso_stat_acpu4_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_PW_ISO_STAT_pw_iso_stat_acpu4_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU4_INT_EN_UNION
 �ṹ˵��  : ACPU_SC_CPU4_INT_EN �Ĵ����ṹ���塣��ַƫ����:0x53C����ֵ:0x00000000�����:32
 �Ĵ���˵��: �ڲ��ж����μĴ������Ա���д1�������Σ�д0��Ӱ�����ε�״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cpu_irqout2mcu4_en   : 1;  /* bit[0]   : [0]:irq0 */
        unsigned int  cpu_irqout2cpu0_4_en : 1;  /* bit[1]   : [0]:irq0 */
        unsigned int  cpu_fiqout4_en       : 1;  /* bit[2]   : [1]:fiq0 */
        unsigned int  cpu_fiqout2cpu0_4_en : 1;  /* bit[3]   : [1]:fiq0 */
        unsigned int  reserved             : 28; /* bit[4-31]: [31:4]�������� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU4_INT_EN_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_INT_EN_cpu_irqout2mcu4_en_START    (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_INT_EN_cpu_irqout2mcu4_en_END      (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_INT_EN_cpu_irqout2cpu0_4_en_START  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_INT_EN_cpu_irqout2cpu0_4_en_END    (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_INT_EN_cpu_fiqout4_en_START        (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_INT_EN_cpu_fiqout4_en_END          (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_INT_EN_cpu_fiqout2cpu0_4_en_START  (3)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_INT_EN_cpu_fiqout2cpu0_4_en_END    (3)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU4_INT_DIS_UNION
 �ṹ˵��  : ACPU_SC_CPU4_INT_DIS �Ĵ����ṹ���塣��ַƫ����:0x540����ֵ:0x00000000�����:32
 �Ĵ���˵��: �ڲ��ж����μĴ������Ա���д1����ֹ���Σ�д0��Ӱ��ʱ�����ε�״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cpu_irqout2mcu4_dis   : 1;  /* bit[0]   : [0]:irq0 */
        unsigned int  cpu_irqout2cpu0_4_dis : 1;  /* bit[1]   : [0]:irq0 */
        unsigned int  cpu_fiqout4_dis       : 1;  /* bit[2]   : [1]:fiq0 */
        unsigned int  cpu_fiqout2cpu0_4_dis : 1;  /* bit[3]   : [1]:fiq0 */
        unsigned int  reserved              : 28; /* bit[4-31]: [31:4]�������� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU4_INT_DIS_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_INT_DIS_cpu_irqout2mcu4_dis_START    (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_INT_DIS_cpu_irqout2mcu4_dis_END      (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_INT_DIS_cpu_irqout2cpu0_4_dis_START  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_INT_DIS_cpu_irqout2cpu0_4_dis_END    (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_INT_DIS_cpu_fiqout4_dis_START        (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_INT_DIS_cpu_fiqout4_dis_END          (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_INT_DIS_cpu_fiqout2cpu0_4_dis_START  (3)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_INT_DIS_cpu_fiqout2cpu0_4_dis_END    (3)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU4_INT_STAT_UNION
 �ṹ˵��  : ACPU_SC_CPU4_INT_STAT �Ĵ����ṹ���塣��ַƫ����:0x544����ֵ:0x00000000�����:32
 �Ĵ���˵��: �ڲ��ж�ʹ�ܼĴ���������SC�ڲ��жϵ��������á���ӦbitΪ1��ʾʹ����Ӧ�жϣ�Ϊ0��ʾ�����жϡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cpu_irqout2mcu4_state   : 1;  /* bit[0]   : [0]:irq0 */
        unsigned int  cpu_irqout2cpu0_4_state : 1;  /* bit[1]   : [0]:irq0 */
        unsigned int  cpu_fiqout4_state       : 1;  /* bit[2]   : [1]:fiq0 */
        unsigned int  cpu_fiqout2cpu0_4_state : 1;  /* bit[3]   : [1]:fiq0 */
        unsigned int  reserved                : 28; /* bit[4-31]: [31:4]�������� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU4_INT_STAT_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_INT_STAT_cpu_irqout2mcu4_state_START    (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_INT_STAT_cpu_irqout2mcu4_state_END      (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_INT_STAT_cpu_irqout2cpu0_4_state_START  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_INT_STAT_cpu_irqout2cpu0_4_state_END    (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_INT_STAT_cpu_fiqout4_state_START        (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_INT_STAT_cpu_fiqout4_state_END          (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_INT_STAT_cpu_fiqout2cpu0_4_state_START  (3)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_INT_STAT_cpu_fiqout2cpu0_4_state_END    (3)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU4_INT_STATR_UNION
 �ṹ˵��  : ACPU_SC_CPU4_INT_STATR �Ĵ����ṹ���塣��ַƫ����:0x548����ֵ:0x00000000�����:32
 �Ĵ���˵��: ԭʼ�ڲ��жϼĴ���������ָʾSC�ڲ���ԭʼ�ж�״̬������ǰ������ӦbitΪ1��ʾ���жϣ�Ϊ0��ʾ���жϡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cpu_irqout2mcu4_statr : 1;  /* bit[0]   : [0]:irq0 */
        unsigned int  cpu_fiqout4_statr     : 1;  /* bit[1]   : [1]:fiq0 */
        unsigned int  reserved              : 30; /* bit[2-31]: [31:2]�������� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU4_INT_STATR_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_INT_STATR_cpu_irqout2mcu4_statr_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_INT_STATR_cpu_irqout2mcu4_statr_END    (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_INT_STATR_cpu_fiqout4_statr_START      (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_INT_STATR_cpu_fiqout4_statr_END        (1)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU4_INT_STATM_UNION
 �ṹ˵��  : ACPU_SC_CPU4_INT_STATM �Ĵ����ṹ���塣��ַƫ����:0x54C����ֵ:0x00000000�����:32
 �Ĵ���˵��: ���κ��ڲ��жϼĴ���������ָʾSC��ǰ�ڲ��ж�״̬�����κ󣩡���ӦbitΪ1��ʾ���жϣ�Ϊ0��ʾ���жϡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cpu_irqout2mcu4_statm   : 1;  /* bit[0]   : [0]:irq0 */
        unsigned int  cpu_irqout2cpu0_4_statm : 1;  /* bit[1]   : [0]:irq0 */
        unsigned int  cpu_fiqout4_statm       : 1;  /* bit[2]   : [1]:fiq0 */
        unsigned int  cpu_fiqout2cpu0_4_statm : 1;  /* bit[3]   : [1]:fiq0 */
        unsigned int  reserved                : 28; /* bit[4-31]: [31:4]�������� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU4_INT_STATM_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_INT_STATM_cpu_irqout2mcu4_statm_START    (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_INT_STATM_cpu_irqout2mcu4_statm_END      (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_INT_STATM_cpu_irqout2cpu0_4_statm_START  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_INT_STATM_cpu_irqout2cpu0_4_statm_END    (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_INT_STATM_cpu_fiqout4_statm_START        (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_INT_STATM_cpu_fiqout4_statm_END          (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_INT_STATM_cpu_fiqout2cpu0_4_statm_START  (3)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_INT_STATM_cpu_fiqout2cpu0_4_statm_END    (3)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU4_MTCMOS_TIMER_UNION
 �ṹ˵��  : ACPU_SC_CPU4_MTCMOS_TIMER �Ĵ����ṹ���塣��ַƫ����:0x550����ֵ:0x000000FF�����:32
 �Ĵ���˵��: CPU0 MTCMOS�ȶ�ʱ�������ֵ����ʱʱ����19.2M��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cpu_mtcmos_timer4 : 16; /* bit[0-15] : [15:0]:timer0 */
        unsigned int  reserved          : 16; /* bit[16-31]: [31:16]�������� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU4_MTCMOS_TIMER_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_MTCMOS_TIMER_cpu_mtcmos_timer4_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_MTCMOS_TIMER_cpu_mtcmos_timer4_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU4_MTCMOS_TIMER_STAT_UNION
 �ṹ˵��  : ACPU_SC_CPU4_MTCMOS_TIMER_STAT �Ĵ����ṹ���塣��ַƫ����:0x554����ֵ:0x00000000�����:32
 �Ĵ���˵��: CPU0 MTCMOS�ȶ�ʱ��״ָ̬ʾ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cpu_mtcmos_timer4_sta : 1;  /* bit[0]   : [0]:timer0_sta
                                                                0: δ�ȶ�
                                                                1���ȶ� */
        unsigned int  reserved              : 31; /* bit[1-31]: [31:1]�������� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU4_MTCMOS_TIMER_STAT_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_MTCMOS_TIMER_STAT_cpu_mtcmos_timer4_sta_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_MTCMOS_TIMER_STAT_cpu_mtcmos_timer4_sta_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU4_RVBARADDR_UNION
 �ṹ˵��  : ACPU_SC_CPU4_RVBARADDR �Ĵ����ṹ���塣��ַƫ����:0x558����ֵ:0x00000000�����:32
 �Ĵ���˵��: Reset Vector Base Address for executing in 64-bit state.
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  rvbaraddr4 : 32; /* bit[0-31]: RVBARADDRx[33:2]���ã�
                                                     RVBARADDRx[39:34]=0x0 */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU4_RVBARADDR_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_RVBARADDR_rvbaraddr4_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU4_RVBARADDR_rvbaraddr4_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU5_CTRL_UNION
 �ṹ˵��  : ACPU_SC_CPU5_CTRL �Ĵ����ṹ���塣��ַƫ����:0x600����ֵ:0x00000068�����:32
 �Ĵ���˵��: ACPU��ϵͳ�ϵ����üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cp15disable5       : 1;  /* bit[0]    : CPU0 cp15 ��ȫ�Ĵ�����ֹ����
                                                              0: �������
                                                              1: ��ֹ���� */
        unsigned int  reserved_0         : 1;  /* bit[1]    : ���� */
        unsigned int  edbgrq5            : 1;  /* bit[2]    : ʹ��A53 integration ��edbgrq0
                                                              0: ��ֹ
                                                              1: ʹ�� */
        unsigned int  vinithi5           : 1;  /* bit[3]    : CPU0 ��������ַ������
                                                              0: ��λ��ַ
                                                              1: ��λ��ַ */
        unsigned int  reserved_1         : 1;  /* bit[4]    : ���� */
        unsigned int  bypass_warmrstreq5 : 1;  /* bit[5]    : bypass cpu0��warm reset
                                                              0: ��ִ���ȸ�λ��bypass
                                                              1: ִ���ȸ�λ */
        unsigned int  bypass_dbgrstreq5  : 1;  /* bit[6]    : bypass cpu0��dbg warm reset
                                                              0: ��ִ���ȸ�λ��bypass
                                                              1: ִ���ȸ�λ */
        unsigned int  aa64naa32_5        : 1;  /* bit[7]    : 0 AArch32
                                                              1 AArch64 */
        unsigned int  cfgend5            : 1;  /* bit[8]    : 0 С����
                                                              1 ����� */
        unsigned int  cfgte5             : 1;  /* bit[9]    : 0 ��ʹ��T32
                                                              1 ʹ��T32 */
        unsigned int  cryptodisable5     : 1;  /* bit[10]   : ��ʹ��crypto���� */
        unsigned int  reserved_2         : 21; /* bit[11-31]: [31��11]������ */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU5_CTRL_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_CTRL_cp15disable5_START        (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_CTRL_cp15disable5_END          (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_CTRL_edbgrq5_START             (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_CTRL_edbgrq5_END               (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_CTRL_vinithi5_START            (3)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_CTRL_vinithi5_END              (3)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_CTRL_bypass_warmrstreq5_START  (5)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_CTRL_bypass_warmrstreq5_END    (5)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_CTRL_bypass_dbgrstreq5_START   (6)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_CTRL_bypass_dbgrstreq5_END     (6)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_CTRL_aa64naa32_5_START         (7)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_CTRL_aa64naa32_5_END           (7)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_CTRL_cfgend5_START             (8)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_CTRL_cfgend5_END               (8)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_CTRL_cfgte5_START              (9)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_CTRL_cfgte5_END                (9)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_CTRL_cryptodisable5_START      (10)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_CTRL_cryptodisable5_END        (10)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU5_STAT_UNION
 �ṹ˵��  : ACPU_SC_CPU5_STAT �Ĵ����ṹ���塣��ַƫ����:0x604����ֵ:0x00000000�����:32
 �Ĵ���˵��: ϵͳ״̬�Ĵ��������ڼ��ϵͳ��״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_smpnamp5    : 1;  /* bit[0]   : ���ñ��ؿ��Զ���CPU0��ϵͳ�����sc_smpnamp0�źŵ�ֵ��
                                                         0:Asymmetric
                                                         1:Symmetric. */
        unsigned int  sc_standbywfi5 : 1;  /* bit[1]   : ���ñ��ؿ��Զ���CPU0��ϵͳ�����sc_standbywfi�źŵ�ֵ��
                                                         0:processor not in WFE Standby mode
                                                         1:processor in WFE Standby mode. */
        unsigned int  sc_standbywfe5 : 1;  /* bit[2]   : ���ñ��ؿ��Զ���CPU0��ϵͳ�����sc_standbywfe�źŵ�ֵ��
                                                         0:processor not in WFE Standby mode
                                                         1:processor in WFE Standby mode. */
        unsigned int  aarm_dbgack5   : 1;  /* bit[3]   : aarm_dbgack��AARM��debugacknowledge״ָ̬ʾ�źţ�
                                                         0:not acknowledged
                                                         1:acknowledged. */
        unsigned int  reserved_0     : 1;  /* bit[4]   : ���� */
        unsigned int  dbgrstreq5     : 1;  /* bit[5]   : dbg Warm reset request */
        unsigned int  warmrstreq5    : 1;  /* bit[6]   : Warm reset request */
        unsigned int  reserved_1     : 25; /* bit[7-31]: [31:7]���� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU5_STAT_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_STAT_sc_smpnamp5_START     (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_STAT_sc_smpnamp5_END       (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_STAT_sc_standbywfi5_START  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_STAT_sc_standbywfi5_END    (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_STAT_sc_standbywfe5_START  (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_STAT_sc_standbywfe5_END    (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_STAT_aarm_dbgack5_START    (3)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_STAT_aarm_dbgack5_END      (3)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_STAT_dbgrstreq5_START      (5)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_STAT_dbgrstreq5_END        (5)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_STAT_warmrstreq5_START     (6)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_STAT_warmrstreq5_END       (6)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU5_CLKEN_UNION
 �ṹ˵��  : ACPU_SC_CPU5_CLKEN �Ĵ����ṹ���塣��ַƫ����:0x608����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳʱ���ſ����üĴ���������Ӧλд1ʹ����Ӧʱ�ӣ�д0��Ӱ�졣
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved_0         : 1;  /* bit[0]   : [0]�������� 
                                                               */
        unsigned int  hpm_cpucore5_clken : 1;  /* bit[1]   : hpm cpucore0 ����ʱ���ſ�ʹ��
                                                             1'b1: ʱ��ʹ�ܣ� 
                                                             1'b0: ��Ч */
        unsigned int  reserved_1         : 1;  /* bit[2]   : [2]�������� 
                                                               */
        unsigned int  reserved_2         : 29; /* bit[3-31]: [31:3]�������� 
                                                               */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU5_CLKEN_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_CLKEN_hpm_cpucore5_clken_START  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_CLKEN_hpm_cpucore5_clken_END    (1)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU5_CLKDIS_UNION
 �ṹ˵��  : ACPU_SC_CPU5_CLKDIS �Ĵ����ṹ���塣��ַƫ����:0x60C����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳʱ���ſ����üĴ���������Ӧλд1��ֹ��Ӧʱ�ӣ�д0��Ӱ�졣
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved_0          : 1;  /* bit[0]   : [0]�������� 
                                                                */
        unsigned int  hpm_cpucore5_clkdis : 1;  /* bit[1]   : hpm cpucore0 ����ʱ���ſ�ʹ��
                                                              1'b1: ʱ�ӹر� 
                                                              1'b0: ��Ч */
        unsigned int  reserved_1          : 1;  /* bit[2]   : [2]�������� 
                                                                */
        unsigned int  reserved_2          : 29; /* bit[3-31]: [31:3]�������� 
                                                                */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU5_CLKDIS_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_CLKDIS_hpm_cpucore5_clkdis_START  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_CLKDIS_hpm_cpucore5_clkdis_END    (1)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU5_CLK_STAT_UNION
 �ṹ˵��  : ACPU_SC_CPU5_CLK_STAT �Ĵ����ṹ���塣��ַƫ����:0x610����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳʱ��״̬�Ĵ�����0��ʾʱ����Ӧ�رգ�1��ʾ�򿪡�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved_0          : 1;  /* bit[0]   : [0]�������� 
                                                                */
        unsigned int  hpm_cpucore5_clksta : 1;  /* bit[1]   : hpm cpucore0 ����ʱ���ſ�ʹ��
                                                              1'b1: ʱ��ʹ�ܣ� 
                                                              1'b0: ʱ�ӹر� */
        unsigned int  reserved_1          : 1;  /* bit[2]   : [0]�������� 
                                                                */
        unsigned int  reserved_2          : 29; /* bit[3-31]: [0]�������� 
                                                                */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU5_CLK_STAT_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_CLK_STAT_hpm_cpucore5_clksta_START  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_CLK_STAT_hpm_cpucore5_clksta_END    (1)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU5_RSTEN_UNION
 �ṹ˵��  : ACPU_SC_CPU5_RSTEN �Ĵ����ṹ���塣��ַƫ����:0x614����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳ��λʹ�ܼĴ���������Ӧλд1ʹ����Ӧ��λ�źţ������븴λ̬����д0��Ӱ�졣�üĴ���ֻ���ϵ縴λʱ����λ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  srst_aarm_por5_rsten  : 1;  /* bit[0]   : A53 integration��por 0��λ���� */
        unsigned int  srst_aarm_core5_rsten : 1;  /* bit[1]   : A53 integration��core 0��λ���� */
        unsigned int  reserved_0            : 2;  /* bit[2-3] : ������ 
                                                                  */
        unsigned int  srst_aarm_hpm5_rsten  : 1;  /* bit[4]   : A53 integration��hpm0��λ���� */
        unsigned int  reserved_1            : 27; /* bit[5-31]: [31:5]�������� 
                                                                  */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU5_RSTEN_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_RSTEN_srst_aarm_por5_rsten_START   (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_RSTEN_srst_aarm_por5_rsten_END     (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_RSTEN_srst_aarm_core5_rsten_START  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_RSTEN_srst_aarm_core5_rsten_END    (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_RSTEN_srst_aarm_hpm5_rsten_START   (4)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_RSTEN_srst_aarm_hpm5_rsten_END     (4)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU5_RSTDIS_UNION
 �ṹ˵��  : ACPU_SC_CPU5_RSTDIS �Ĵ����ṹ���塣��ַƫ����:0x618����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳ��λ��ֹ�Ĵ��������ڿ��Ƹ��������ܵĸ�λ��ֹ������Ӧλд1��ֹ��Ӧ��������λ�źţ����˳���λ̬����д0��Ӱ�졣�üĴ���ֻ���ϵ縴λʱ����λ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  srst_aarm_por5_rstdis  : 1;  /* bit[0]   : A53 integration��por 0��λ���� */
        unsigned int  srst_aarm_core5_rstdis : 1;  /* bit[1]   : A53 integration��core 0��λ���� */
        unsigned int  reserved_0             : 2;  /* bit[2-3] : ������ 
                                                                   */
        unsigned int  srst_aarm_hpm5_rstdis  : 1;  /* bit[4]   : A53 integration��hpm0��λ���� */
        unsigned int  reserved_1             : 27; /* bit[5-31]: [31:5]�������� 
                                                                   */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU5_RSTDIS_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_RSTDIS_srst_aarm_por5_rstdis_START   (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_RSTDIS_srst_aarm_por5_rstdis_END     (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_RSTDIS_srst_aarm_core5_rstdis_START  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_RSTDIS_srst_aarm_core5_rstdis_END    (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_RSTDIS_srst_aarm_hpm5_rstdis_START   (4)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_RSTDIS_srst_aarm_hpm5_rstdis_END     (4)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU5_RST_STAT_UNION
 �ṹ˵��  : ACPU_SC_CPU5_RST_STAT �Ĵ����ṹ���塣��ַƫ����:0x61C����ֵ:0x00000013�����:32
 �Ĵ���˵��: ACPU��ϵͳ��λ״̬�Ĵ�����0��ʾ��λ��ʹ�ܣ�1��λʹ�ܼ����븴λ̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  srst_aarm_por5_rststa  : 1;  /* bit[0]   : A53 integration��por 0��λ���� */
        unsigned int  srst_aarm_core5_rststa : 1;  /* bit[1]   : A53 integration��core 0��λ���� */
        unsigned int  reserved_0             : 2;  /* bit[2-3] : ������ 
                                                                   */
        unsigned int  srst_aarm_hpm5_rststa  : 1;  /* bit[4]   : A53 integration��hpm0��λ���� */
        unsigned int  reserved_1             : 27; /* bit[5-31]: [31:5]�������� 
                                                                   */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU5_RST_STAT_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_RST_STAT_srst_aarm_por5_rststa_START   (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_RST_STAT_srst_aarm_por5_rststa_END     (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_RST_STAT_srst_aarm_core5_rststa_START  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_RST_STAT_srst_aarm_core5_rststa_END    (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_RST_STAT_srst_aarm_hpm5_rststa_START   (4)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_RST_STAT_srst_aarm_hpm5_rststa_END     (4)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU5_MTCMOS_EN_UNION
 �ṹ˵��  : ACPU_SC_CPU5_MTCMOS_EN �Ĵ����ṹ���塣��ַƫ����:0x620����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳ�ϵ�����Ĵ��������ڸ������������ϵ������źţ�����Ӧλд1�����ϵ�����д0��Ӱ�졣
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pw_mtcmos_en_acpu5 : 1;  /* bit[0]   : [0] ��ACPU0�µ��� */
        unsigned int  reserved           : 31; /* bit[1-31]: [31:1]��������  */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU5_MTCMOS_EN_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_MTCMOS_EN_pw_mtcmos_en_acpu5_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_MTCMOS_EN_pw_mtcmos_en_acpu5_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU5_MTCMOS_DIS_UNION
 �ṹ˵��  : ACPU_SC_CPU5_MTCMOS_DIS �Ĵ����ṹ���塣��ַƫ����:0x624����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳ�ϵ������ֹ�Ĵ��������ڸ���������ֹ�ϵ������źţ�����Ӧλд1��ֹ�ϵ�����д0��Ӱ�졣
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pw_mtcmos_dis_acpu5 : 1;  /* bit[0]   : [0] ��ACPU0�µ��� */
        unsigned int  reserved            : 31; /* bit[1-31]: [31:1]��������  */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU5_MTCMOS_DIS_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_MTCMOS_DIS_pw_mtcmos_dis_acpu5_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_MTCMOS_DIS_pw_mtcmos_dis_acpu5_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU5_MTCMOS_STAT_UNION
 �ṹ˵��  : ACPU_SC_CPU5_MTCMOS_STAT �Ĵ����ṹ���塣��ַƫ����:0x628����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳ�ϵ�����״̬�Ĵ�������ӦλΪ1��ʾ��������״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pw_mtcmos_sta_acpu5 : 1;  /* bit[0]   : [0] ��ACPU0�µ��� */
        unsigned int  reserved            : 31; /* bit[1-31]: [31:1]��������  */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU5_MTCMOS_STAT_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_MTCMOS_STAT_pw_mtcmos_sta_acpu5_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_MTCMOS_STAT_pw_mtcmos_sta_acpu5_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU5_MTCMOS_ACK_STAT_UNION
 �ṹ˵��  : ACPU_SC_CPU5_MTCMOS_ACK_STAT �Ĵ����ṹ���塣��ַƫ����:0x62C����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳ�ϵ練����ѯ�Ĵ��������ڲ�ѯ�������������ϵ������źź��Ƿ񷵻�ACK������ӦλΪ1��ʾ�����µ磬Ϊ0��ʾ������
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pw_mtcmos_acksta_acpu5 : 1;  /* bit[0]   : [0] ��ACPU0�µ��� */
        unsigned int  reserved               : 31; /* bit[1-31]: [31:1]��������  */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU5_MTCMOS_ACK_STAT_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_MTCMOS_ACK_STAT_pw_mtcmos_acksta_acpu5_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_MTCMOS_ACK_STAT_pw_mtcmos_acksta_acpu5_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU5_PW_ISOEN_UNION
 �ṹ˵��  : ACPU_SC_CPU5_PW_ISOEN �Ĵ����ṹ���塣��ַƫ����:0x630����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳISOʹ�ܼĴ��������ڿ��Ƹ���������ص�Isolation Cellʹ�ܡ�����Ӧλд1ʹ����Ӧ������IsoLation Cell�����źŸ��ϣ���д0��Ӱ�졣�üĴ���ֻ���ϵ縴λʱ����λ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pw_isoen_acpu5 : 1;  /* bit[0]   : [0] ��ACPU0�µ��� */
        unsigned int  reserved       : 31; /* bit[1-31]: [31:1]��������  */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU5_PW_ISOEN_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_PW_ISOEN_pw_isoen_acpu5_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_PW_ISOEN_pw_isoen_acpu5_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU5_PW_ISODIS_UNION
 �ṹ˵��  : ACPU_SC_CPU5_PW_ISODIS �Ĵ����ṹ���塣��ַƫ����:0x634����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳISO��ֹ�Ĵ��������ڿ��Ƹ���������ص�Isolation Cell��ֹ������Ӧλд1��ֹ��Ӧ������IsoLation Cell�����źŲ����ϣ���д0��Ӱ�졣�üĴ���ֻ���ϵ縴λʱ����λ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pw_isodis_acpu5 : 1;  /* bit[0]   : [0] ��ACPU0�µ��� */
        unsigned int  reserved        : 31; /* bit[1-31]: [31:1]��������  */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU5_PW_ISODIS_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_PW_ISODIS_pw_isodis_acpu5_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_PW_ISODIS_pw_isodis_acpu5_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU5_PW_ISO_STAT_UNION
 �ṹ˵��  : ACPU_SC_CPU5_PW_ISO_STAT �Ĵ����ṹ���塣��ַƫ����:0x638����ֵ:0x00000001�����:32
 �Ĵ���˵��: ACPU��ϵͳISO״̬�Ĵ�����0��ʾisolation��ʹ�ܣ�1��ʾisolationʹ�ܡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pw_iso_stat_acpu5 : 1;  /* bit[0]   : [0] ��ACPU0�µ��� */
        unsigned int  reserved          : 31; /* bit[1-31]: [31:1]�������� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU5_PW_ISO_STAT_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_PW_ISO_STAT_pw_iso_stat_acpu5_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_PW_ISO_STAT_pw_iso_stat_acpu5_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU5_INT_EN_UNION
 �ṹ˵��  : ACPU_SC_CPU5_INT_EN �Ĵ����ṹ���塣��ַƫ����:0x63C����ֵ:0x00000000�����:32
 �Ĵ���˵��: �ڲ��ж����μĴ������Ա���д1�������Σ�д0��Ӱ�����ε�״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cpu_irqout2mcu5_en   : 1;  /* bit[0]   : [0]:irq0 */
        unsigned int  cpu_irqout2cpu0_5_en : 1;  /* bit[1]   : [0]:irq0 */
        unsigned int  cpu_fiqout5_en       : 1;  /* bit[2]   : [1]:fiq0 */
        unsigned int  cpu_fiqout2cpu0_5_en : 1;  /* bit[3]   : [1]:fiq0 */
        unsigned int  reserved             : 28; /* bit[4-31]: [31:4]�������� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU5_INT_EN_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_INT_EN_cpu_irqout2mcu5_en_START    (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_INT_EN_cpu_irqout2mcu5_en_END      (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_INT_EN_cpu_irqout2cpu0_5_en_START  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_INT_EN_cpu_irqout2cpu0_5_en_END    (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_INT_EN_cpu_fiqout5_en_START        (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_INT_EN_cpu_fiqout5_en_END          (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_INT_EN_cpu_fiqout2cpu0_5_en_START  (3)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_INT_EN_cpu_fiqout2cpu0_5_en_END    (3)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU5_INT_DIS_UNION
 �ṹ˵��  : ACPU_SC_CPU5_INT_DIS �Ĵ����ṹ���塣��ַƫ����:0x640����ֵ:0x00000000�����:32
 �Ĵ���˵��: �ڲ��ж����μĴ������Ա���д1����ֹ���Σ�д0��Ӱ��ʱ�����ε�״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cpu_irqout2mcu5_dis   : 1;  /* bit[0]   : [0]:irq0 */
        unsigned int  cpu_irqout2cpu0_5_dis : 1;  /* bit[1]   : [0]:irq0 */
        unsigned int  cpu_fiqout5_dis       : 1;  /* bit[2]   : [1]:fiq0 */
        unsigned int  cpu_fiqout2cpu0_5_dis : 1;  /* bit[3]   : [1]:fiq0 */
        unsigned int  reserved              : 28; /* bit[4-31]: [31:4]�������� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU5_INT_DIS_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_INT_DIS_cpu_irqout2mcu5_dis_START    (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_INT_DIS_cpu_irqout2mcu5_dis_END      (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_INT_DIS_cpu_irqout2cpu0_5_dis_START  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_INT_DIS_cpu_irqout2cpu0_5_dis_END    (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_INT_DIS_cpu_fiqout5_dis_START        (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_INT_DIS_cpu_fiqout5_dis_END          (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_INT_DIS_cpu_fiqout2cpu0_5_dis_START  (3)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_INT_DIS_cpu_fiqout2cpu0_5_dis_END    (3)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU5_INT_STAT_UNION
 �ṹ˵��  : ACPU_SC_CPU5_INT_STAT �Ĵ����ṹ���塣��ַƫ����:0x644����ֵ:0x00000000�����:32
 �Ĵ���˵��: �ڲ��ж�ʹ�ܼĴ���������SC�ڲ��жϵ��������á���ӦbitΪ1��ʾʹ����Ӧ�жϣ�Ϊ0��ʾ�����жϡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cpu_irqout2mcu5_state   : 1;  /* bit[0]   : [0]:irq0 */
        unsigned int  cpu_irqout2cpu0_5_state : 1;  /* bit[1]   : [0]:irq0 */
        unsigned int  cpu_fiqout5_state       : 1;  /* bit[2]   : [1]:fiq0 */
        unsigned int  cpu_fiqout2cpu0_5_state : 1;  /* bit[3]   : [1]:fiq0 */
        unsigned int  reserved                : 28; /* bit[4-31]: [31:4]�������� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU5_INT_STAT_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_INT_STAT_cpu_irqout2mcu5_state_START    (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_INT_STAT_cpu_irqout2mcu5_state_END      (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_INT_STAT_cpu_irqout2cpu0_5_state_START  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_INT_STAT_cpu_irqout2cpu0_5_state_END    (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_INT_STAT_cpu_fiqout5_state_START        (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_INT_STAT_cpu_fiqout5_state_END          (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_INT_STAT_cpu_fiqout2cpu0_5_state_START  (3)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_INT_STAT_cpu_fiqout2cpu0_5_state_END    (3)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU5_INT_STATR_UNION
 �ṹ˵��  : ACPU_SC_CPU5_INT_STATR �Ĵ����ṹ���塣��ַƫ����:0x648����ֵ:0x00000000�����:32
 �Ĵ���˵��: ԭʼ�ڲ��жϼĴ���������ָʾSC�ڲ���ԭʼ�ж�״̬������ǰ������ӦbitΪ1��ʾ���жϣ�Ϊ0��ʾ���жϡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cpu_irqout2mcu5_statr : 1;  /* bit[0]   : [0]:irq0 */
        unsigned int  cpu_fiqout5_statr     : 1;  /* bit[1]   : [1]:fiq0 */
        unsigned int  reserved              : 30; /* bit[2-31]: [31:2]�������� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU5_INT_STATR_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_INT_STATR_cpu_irqout2mcu5_statr_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_INT_STATR_cpu_irqout2mcu5_statr_END    (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_INT_STATR_cpu_fiqout5_statr_START      (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_INT_STATR_cpu_fiqout5_statr_END        (1)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU5_INT_STATM_UNION
 �ṹ˵��  : ACPU_SC_CPU5_INT_STATM �Ĵ����ṹ���塣��ַƫ����:0x64C����ֵ:0x00000000�����:32
 �Ĵ���˵��: ���κ��ڲ��жϼĴ���������ָʾSC��ǰ�ڲ��ж�״̬�����κ󣩡���ӦbitΪ1��ʾ���жϣ�Ϊ0��ʾ���жϡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cpu_irqout2mcu5_statm   : 1;  /* bit[0]   : [0]:irq0 */
        unsigned int  cpu_irqout2cpu0_5_statm : 1;  /* bit[1]   : [0]:irq0 */
        unsigned int  cpu_fiqout5_statm       : 1;  /* bit[2]   : [1]:fiq0 */
        unsigned int  cpu_fiqout2cpu0_5_statm : 1;  /* bit[3]   : [1]:fiq0 */
        unsigned int  reserved                : 28; /* bit[4-31]: [31:4]�������� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU5_INT_STATM_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_INT_STATM_cpu_irqout2mcu5_statm_START    (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_INT_STATM_cpu_irqout2mcu5_statm_END      (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_INT_STATM_cpu_irqout2cpu0_5_statm_START  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_INT_STATM_cpu_irqout2cpu0_5_statm_END    (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_INT_STATM_cpu_fiqout5_statm_START        (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_INT_STATM_cpu_fiqout5_statm_END          (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_INT_STATM_cpu_fiqout2cpu0_5_statm_START  (3)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_INT_STATM_cpu_fiqout2cpu0_5_statm_END    (3)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU5_MTCMOS_TIMER_UNION
 �ṹ˵��  : ACPU_SC_CPU5_MTCMOS_TIMER �Ĵ����ṹ���塣��ַƫ����:0x650����ֵ:0x000000FF�����:32
 �Ĵ���˵��: CPU0 MTCMOS�ȶ�ʱ�������ֵ����ʱʱ����19.2M��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cpu_mtcmos_timer5 : 16; /* bit[0-15] : [15:0]:timer0 */
        unsigned int  reserved          : 16; /* bit[16-31]: [31:16]�������� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU5_MTCMOS_TIMER_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_MTCMOS_TIMER_cpu_mtcmos_timer5_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_MTCMOS_TIMER_cpu_mtcmos_timer5_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU5_MTCMOS_TIMER_STAT_UNION
 �ṹ˵��  : ACPU_SC_CPU5_MTCMOS_TIMER_STAT �Ĵ����ṹ���塣��ַƫ����:0x654����ֵ:0x00000000�����:32
 �Ĵ���˵��: CPU0 MTCMOS�ȶ�ʱ��״ָ̬ʾ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cpu_mtcmos_timer5_sta : 1;  /* bit[0]   : [0]:timer0_sta
                                                                0: δ�ȶ�
                                                                1���ȶ� */
        unsigned int  reserved              : 31; /* bit[1-31]: [31:1]�������� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU5_MTCMOS_TIMER_STAT_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_MTCMOS_TIMER_STAT_cpu_mtcmos_timer5_sta_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_MTCMOS_TIMER_STAT_cpu_mtcmos_timer5_sta_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU5_RVBARADDR_UNION
 �ṹ˵��  : ACPU_SC_CPU5_RVBARADDR �Ĵ����ṹ���塣��ַƫ����:0x658����ֵ:0x00000000�����:32
 �Ĵ���˵��: Reset Vector Base Address for executing in 64-bit state.
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  rvbaraddr5 : 32; /* bit[0-31]: RVBARADDRx[33:2]���ã�
                                                     RVBARADDRx[39:34]=0x0 */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU5_RVBARADDR_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_RVBARADDR_rvbaraddr5_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU5_RVBARADDR_rvbaraddr5_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU6_CTRL_UNION
 �ṹ˵��  : ACPU_SC_CPU6_CTRL �Ĵ����ṹ���塣��ַƫ����:0x700����ֵ:0x00000068�����:32
 �Ĵ���˵��: ACPU��ϵͳ�ϵ����üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cp15disable6       : 1;  /* bit[0]    : CPU0 cp15 ��ȫ�Ĵ�����ֹ����
                                                              0: �������
                                                              1: ��ֹ���� */
        unsigned int  reserved_0         : 1;  /* bit[1]    : ���� */
        unsigned int  edbgrq6            : 1;  /* bit[2]    : ʹ��A53 integration ��edbgrq0
                                                              0: ��ֹ
                                                              1: ʹ�� */
        unsigned int  vinithi6           : 1;  /* bit[3]    : CPU0 ��������ַ������
                                                              0: ��λ��ַ
                                                              1: ��λ��ַ */
        unsigned int  reserved_1         : 1;  /* bit[4]    : ���� */
        unsigned int  bypass_warmrstreq6 : 1;  /* bit[5]    : bypass cpu0��warm reset
                                                              0: ��ִ���ȸ�λ��bypass
                                                              1: ִ���ȸ�λ */
        unsigned int  bypass_dbgrstreq6  : 1;  /* bit[6]    : bypass cpu0��dbg warm reset
                                                              0: ��ִ���ȸ�λ��bypass
                                                              1: ִ���ȸ�λ */
        unsigned int  aa64naa32_6        : 1;  /* bit[7]    : 0 AArch32
                                                              1 AArch64 */
        unsigned int  cfgend6            : 1;  /* bit[8]    : 0 С����
                                                              1 ����� */
        unsigned int  cfgte6             : 1;  /* bit[9]    : 0 ��ʹ��T32
                                                              1 ʹ��T32 */
        unsigned int  cryptodisable6     : 1;  /* bit[10]   : ��ʹ��crypto���� */
        unsigned int  reserved_2         : 21; /* bit[11-31]: [31��11]������ */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU6_CTRL_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_CTRL_cp15disable6_START        (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_CTRL_cp15disable6_END          (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_CTRL_edbgrq6_START             (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_CTRL_edbgrq6_END               (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_CTRL_vinithi6_START            (3)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_CTRL_vinithi6_END              (3)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_CTRL_bypass_warmrstreq6_START  (5)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_CTRL_bypass_warmrstreq6_END    (5)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_CTRL_bypass_dbgrstreq6_START   (6)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_CTRL_bypass_dbgrstreq6_END     (6)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_CTRL_aa64naa32_6_START         (7)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_CTRL_aa64naa32_6_END           (7)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_CTRL_cfgend6_START             (8)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_CTRL_cfgend6_END               (8)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_CTRL_cfgte6_START              (9)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_CTRL_cfgte6_END                (9)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_CTRL_cryptodisable6_START      (10)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_CTRL_cryptodisable6_END        (10)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU6_STAT_UNION
 �ṹ˵��  : ACPU_SC_CPU6_STAT �Ĵ����ṹ���塣��ַƫ����:0x704����ֵ:0x00000000�����:32
 �Ĵ���˵��: ϵͳ״̬�Ĵ��������ڼ��ϵͳ��״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_smpnamp6    : 1;  /* bit[0]   : ���ñ��ؿ��Զ���CPU0��ϵͳ�����sc_smpnamp0�źŵ�ֵ��
                                                         0:Asymmetric
                                                         1:Symmetric. */
        unsigned int  sc_standbywfi6 : 1;  /* bit[1]   : ���ñ��ؿ��Զ���CPU0��ϵͳ�����sc_standbywfi�źŵ�ֵ��
                                                         0:processor not in WFE Standby mode
                                                         1:processor in WFE Standby mode. */
        unsigned int  sc_standbywfe6 : 1;  /* bit[2]   : ���ñ��ؿ��Զ���CPU0��ϵͳ�����sc_standbywfe�źŵ�ֵ��
                                                         0:processor not in WFE Standby mode
                                                         1:processor in WFE Standby mode. */
        unsigned int  aarm_dbgack6   : 1;  /* bit[3]   : aarm_dbgack��AARM��debugacknowledge״ָ̬ʾ�źţ�
                                                         0:not acknowledged
                                                         1:acknowledged. */
        unsigned int  reserved_0     : 1;  /* bit[4]   : ���� */
        unsigned int  dbgrstreq6     : 1;  /* bit[5]   : dbg Warm reset request */
        unsigned int  warmrstreq6    : 1;  /* bit[6]   : Warm reset request */
        unsigned int  reserved_1     : 25; /* bit[7-31]: [31:7]���� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU6_STAT_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_STAT_sc_smpnamp6_START     (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_STAT_sc_smpnamp6_END       (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_STAT_sc_standbywfi6_START  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_STAT_sc_standbywfi6_END    (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_STAT_sc_standbywfe6_START  (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_STAT_sc_standbywfe6_END    (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_STAT_aarm_dbgack6_START    (3)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_STAT_aarm_dbgack6_END      (3)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_STAT_dbgrstreq6_START      (5)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_STAT_dbgrstreq6_END        (5)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_STAT_warmrstreq6_START     (6)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_STAT_warmrstreq6_END       (6)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU6_CLKEN_UNION
 �ṹ˵��  : ACPU_SC_CPU6_CLKEN �Ĵ����ṹ���塣��ַƫ����:0x708����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳʱ���ſ����üĴ���������Ӧλд1ʹ����Ӧʱ�ӣ�д0��Ӱ�졣
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved_0         : 1;  /* bit[0]   : [0]�������� 
                                                               */
        unsigned int  hpm_cpucore6_clken : 1;  /* bit[1]   : hpm cpucore0 ����ʱ���ſ�ʹ��
                                                             1'b1: ʱ��ʹ�ܣ� 
                                                             1'b0: ��Ч */
        unsigned int  reserved_1         : 1;  /* bit[2]   : [2]�������� 
                                                               */
        unsigned int  reserved_2         : 29; /* bit[3-31]: [31:3]�������� 
                                                               */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU6_CLKEN_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_CLKEN_hpm_cpucore6_clken_START  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_CLKEN_hpm_cpucore6_clken_END    (1)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU6_CLKDIS_UNION
 �ṹ˵��  : ACPU_SC_CPU6_CLKDIS �Ĵ����ṹ���塣��ַƫ����:0x70C����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳʱ���ſ����üĴ���������Ӧλд1��ֹ��Ӧʱ�ӣ�д0��Ӱ�졣
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved_0          : 1;  /* bit[0]   : [0]�������� 
                                                                */
        unsigned int  hpm_cpucore6_clkdis : 1;  /* bit[1]   : hpm cpucore0 ����ʱ���ſ�ʹ��
                                                              1'b1: ʱ�ӹر� 
                                                              1'b0: ��Ч */
        unsigned int  reserved_1          : 1;  /* bit[2]   : [2]�������� 
                                                                */
        unsigned int  reserved_2          : 29; /* bit[3-31]: [31:3]�������� 
                                                                */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU6_CLKDIS_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_CLKDIS_hpm_cpucore6_clkdis_START  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_CLKDIS_hpm_cpucore6_clkdis_END    (1)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU6_CLK_STAT_UNION
 �ṹ˵��  : ACPU_SC_CPU6_CLK_STAT �Ĵ����ṹ���塣��ַƫ����:0x710����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳʱ��״̬�Ĵ�����0��ʾʱ����Ӧ�رգ�1��ʾ�򿪡�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved_0          : 1;  /* bit[0]   : [0]�������� 
                                                                */
        unsigned int  hpm_cpucore6_clksta : 1;  /* bit[1]   : hpm cpucore0 ����ʱ���ſ�ʹ��
                                                              1'b1: ʱ��ʹ�ܣ� 
                                                              1'b0: ʱ�ӹر� */
        unsigned int  reserved_1          : 1;  /* bit[2]   : [0]�������� 
                                                                */
        unsigned int  reserved_2          : 29; /* bit[3-31]: [0]�������� 
                                                                */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU6_CLK_STAT_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_CLK_STAT_hpm_cpucore6_clksta_START  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_CLK_STAT_hpm_cpucore6_clksta_END    (1)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU6_RSTEN_UNION
 �ṹ˵��  : ACPU_SC_CPU6_RSTEN �Ĵ����ṹ���塣��ַƫ����:0x714����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳ��λʹ�ܼĴ���������Ӧλд1ʹ����Ӧ��λ�źţ������븴λ̬����д0��Ӱ�졣�üĴ���ֻ���ϵ縴λʱ����λ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  srst_aarm_por6_rsten  : 1;  /* bit[0]   : A53 integration��por 0��λ���� */
        unsigned int  srst_aarm_core6_rsten : 1;  /* bit[1]   : A53 integration��core 0��λ���� */
        unsigned int  reserved_0            : 2;  /* bit[2-3] : ������ 
                                                                  */
        unsigned int  srst_aarm_hpm6_rsten  : 1;  /* bit[4]   : A53 integration��hpm0��λ���� */
        unsigned int  reserved_1            : 27; /* bit[5-31]: [31:5]�������� 
                                                                  */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU6_RSTEN_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_RSTEN_srst_aarm_por6_rsten_START   (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_RSTEN_srst_aarm_por6_rsten_END     (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_RSTEN_srst_aarm_core6_rsten_START  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_RSTEN_srst_aarm_core6_rsten_END    (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_RSTEN_srst_aarm_hpm6_rsten_START   (4)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_RSTEN_srst_aarm_hpm6_rsten_END     (4)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU6_RSTDIS_UNION
 �ṹ˵��  : ACPU_SC_CPU6_RSTDIS �Ĵ����ṹ���塣��ַƫ����:0x718����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳ��λ��ֹ�Ĵ��������ڿ��Ƹ��������ܵĸ�λ��ֹ������Ӧλд1��ֹ��Ӧ��������λ�źţ����˳���λ̬����д0��Ӱ�졣�üĴ���ֻ���ϵ縴λʱ����λ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  srst_aarm_por6_rstdis  : 1;  /* bit[0]   : A53 integration��por 0��λ���� */
        unsigned int  srst_aarm_core6_rstdis : 1;  /* bit[1]   : A53 integration��core 0��λ���� */
        unsigned int  reserved_0             : 2;  /* bit[2-3] : ������ 
                                                                   */
        unsigned int  srst_aarm_hpm6_rstdis  : 1;  /* bit[4]   : A53 integration��hpm0��λ���� */
        unsigned int  reserved_1             : 27; /* bit[5-31]: [31:5]�������� 
                                                                   */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU6_RSTDIS_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_RSTDIS_srst_aarm_por6_rstdis_START   (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_RSTDIS_srst_aarm_por6_rstdis_END     (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_RSTDIS_srst_aarm_core6_rstdis_START  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_RSTDIS_srst_aarm_core6_rstdis_END    (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_RSTDIS_srst_aarm_hpm6_rstdis_START   (4)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_RSTDIS_srst_aarm_hpm6_rstdis_END     (4)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU6_RST_STAT_UNION
 �ṹ˵��  : ACPU_SC_CPU6_RST_STAT �Ĵ����ṹ���塣��ַƫ����:0x71C����ֵ:0x00000013�����:32
 �Ĵ���˵��: ACPU��ϵͳ��λ״̬�Ĵ�����0��ʾ��λ��ʹ�ܣ�1��λʹ�ܼ����븴λ̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  srst_aarm_por6_rststa  : 1;  /* bit[0]   : A53 integration��por 0��λ���� */
        unsigned int  srst_aarm_core6_rststa : 1;  /* bit[1]   : A53 integration��core 0��λ���� */
        unsigned int  reserved_0             : 2;  /* bit[2-3] : ������ 
                                                                   */
        unsigned int  srst_aarm_hpm6_rststa  : 1;  /* bit[4]   : A53 integration��hpm0��λ���� */
        unsigned int  reserved_1             : 27; /* bit[5-31]: [31:5]�������� 
                                                                   */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU6_RST_STAT_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_RST_STAT_srst_aarm_por6_rststa_START   (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_RST_STAT_srst_aarm_por6_rststa_END     (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_RST_STAT_srst_aarm_core6_rststa_START  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_RST_STAT_srst_aarm_core6_rststa_END    (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_RST_STAT_srst_aarm_hpm6_rststa_START   (4)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_RST_STAT_srst_aarm_hpm6_rststa_END     (4)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU6_MTCMOS_EN_UNION
 �ṹ˵��  : ACPU_SC_CPU6_MTCMOS_EN �Ĵ����ṹ���塣��ַƫ����:0x720����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳ�ϵ�����Ĵ��������ڸ������������ϵ������źţ�����Ӧλд1�����ϵ�����д0��Ӱ�졣
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pw_mtcmos_en_acpu6 : 1;  /* bit[0]   : [0] ��ACPU0�µ��� */
        unsigned int  reserved           : 31; /* bit[1-31]: [31:1]��������  */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU6_MTCMOS_EN_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_MTCMOS_EN_pw_mtcmos_en_acpu6_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_MTCMOS_EN_pw_mtcmos_en_acpu6_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU6_MTCMOS_DIS_UNION
 �ṹ˵��  : ACPU_SC_CPU6_MTCMOS_DIS �Ĵ����ṹ���塣��ַƫ����:0x724����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳ�ϵ������ֹ�Ĵ��������ڸ���������ֹ�ϵ������źţ�����Ӧλд1��ֹ�ϵ�����д0��Ӱ�졣
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pw_mtcmos_dis_acpu6 : 1;  /* bit[0]   : [0] ��ACPU0�µ��� */
        unsigned int  reserved            : 31; /* bit[1-31]: [31:1]��������  */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU6_MTCMOS_DIS_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_MTCMOS_DIS_pw_mtcmos_dis_acpu6_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_MTCMOS_DIS_pw_mtcmos_dis_acpu6_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU6_MTCMOS_STAT_UNION
 �ṹ˵��  : ACPU_SC_CPU6_MTCMOS_STAT �Ĵ����ṹ���塣��ַƫ����:0x728����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳ�ϵ�����״̬�Ĵ�������ӦλΪ1��ʾ��������״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pw_mtcmos_sta_acpu6 : 1;  /* bit[0]   : [0] ��ACPU0�µ��� */
        unsigned int  reserved            : 31; /* bit[1-31]: [31:1]��������  */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU6_MTCMOS_STAT_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_MTCMOS_STAT_pw_mtcmos_sta_acpu6_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_MTCMOS_STAT_pw_mtcmos_sta_acpu6_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU6_MTCMOS_ACK_STAT_UNION
 �ṹ˵��  : ACPU_SC_CPU6_MTCMOS_ACK_STAT �Ĵ����ṹ���塣��ַƫ����:0x72C����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳ�ϵ練����ѯ�Ĵ��������ڲ�ѯ�������������ϵ������źź��Ƿ񷵻�ACK������ӦλΪ1��ʾ�����µ磬Ϊ0��ʾ������
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pw_mtcmos_acksta_acpu6 : 1;  /* bit[0]   : [0] ��ACPU0�µ��� */
        unsigned int  reserved               : 31; /* bit[1-31]: [31:1]��������  */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU6_MTCMOS_ACK_STAT_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_MTCMOS_ACK_STAT_pw_mtcmos_acksta_acpu6_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_MTCMOS_ACK_STAT_pw_mtcmos_acksta_acpu6_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU6_PW_ISOEN_UNION
 �ṹ˵��  : ACPU_SC_CPU6_PW_ISOEN �Ĵ����ṹ���塣��ַƫ����:0x730����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳISOʹ�ܼĴ��������ڿ��Ƹ���������ص�Isolation Cellʹ�ܡ�����Ӧλд1ʹ����Ӧ������IsoLation Cell�����źŸ��ϣ���д0��Ӱ�졣�üĴ���ֻ���ϵ縴λʱ����λ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pw_isoen_acpu6 : 1;  /* bit[0]   : [0] ��ACPU0�µ��� */
        unsigned int  reserved       : 31; /* bit[1-31]: [31:1]��������  */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU6_PW_ISOEN_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_PW_ISOEN_pw_isoen_acpu6_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_PW_ISOEN_pw_isoen_acpu6_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU6_PW_ISODIS_UNION
 �ṹ˵��  : ACPU_SC_CPU6_PW_ISODIS �Ĵ����ṹ���塣��ַƫ����:0x734����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳISO��ֹ�Ĵ��������ڿ��Ƹ���������ص�Isolation Cell��ֹ������Ӧλд1��ֹ��Ӧ������IsoLation Cell�����źŲ����ϣ���д0��Ӱ�졣�üĴ���ֻ���ϵ縴λʱ����λ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pw_isodis_acpu6 : 1;  /* bit[0]   : [0] ��ACPU0�µ��� */
        unsigned int  reserved        : 31; /* bit[1-31]: [31:1]��������  */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU6_PW_ISODIS_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_PW_ISODIS_pw_isodis_acpu6_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_PW_ISODIS_pw_isodis_acpu6_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU6_PW_ISO_STAT_UNION
 �ṹ˵��  : ACPU_SC_CPU6_PW_ISO_STAT �Ĵ����ṹ���塣��ַƫ����:0x738����ֵ:0x00000001�����:32
 �Ĵ���˵��: ACPU��ϵͳISO״̬�Ĵ�����0��ʾisolation��ʹ�ܣ�1��ʾisolationʹ�ܡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pw_iso_stat_acpu6 : 1;  /* bit[0]   : [0] ��ACPU0�µ��� */
        unsigned int  reserved          : 31; /* bit[1-31]: [31:1]�������� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU6_PW_ISO_STAT_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_PW_ISO_STAT_pw_iso_stat_acpu6_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_PW_ISO_STAT_pw_iso_stat_acpu6_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU6_INT_EN_UNION
 �ṹ˵��  : ACPU_SC_CPU6_INT_EN �Ĵ����ṹ���塣��ַƫ����:0x73C����ֵ:0x00000000�����:32
 �Ĵ���˵��: �ڲ��ж����μĴ������Ա���д1�������Σ�д0��Ӱ�����ε�״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cpu_irqout2mcu6_en   : 1;  /* bit[0]   : [0]:irq0 */
        unsigned int  cpu_irqout2cpu0_6_en : 1;  /* bit[1]   : [0]:irq0 */
        unsigned int  cpu_fiqout6_en       : 1;  /* bit[2]   : [1]:fiq0 */
        unsigned int  cpu_fiqout2cpu0_6_en : 1;  /* bit[3]   : [1]:fiq0 */
        unsigned int  reserved             : 28; /* bit[4-31]: [31:4]�������� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU6_INT_EN_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_INT_EN_cpu_irqout2mcu6_en_START    (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_INT_EN_cpu_irqout2mcu6_en_END      (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_INT_EN_cpu_irqout2cpu0_6_en_START  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_INT_EN_cpu_irqout2cpu0_6_en_END    (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_INT_EN_cpu_fiqout6_en_START        (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_INT_EN_cpu_fiqout6_en_END          (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_INT_EN_cpu_fiqout2cpu0_6_en_START  (3)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_INT_EN_cpu_fiqout2cpu0_6_en_END    (3)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU6_INT_DIS_UNION
 �ṹ˵��  : ACPU_SC_CPU6_INT_DIS �Ĵ����ṹ���塣��ַƫ����:0x740����ֵ:0x00000000�����:32
 �Ĵ���˵��: �ڲ��ж����μĴ������Ա���д1����ֹ���Σ�д0��Ӱ��ʱ�����ε�״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cpu_irqout2mcu6_dis   : 1;  /* bit[0]   : [0]:irq0 */
        unsigned int  cpu_irqout2cpu0_6_dis : 1;  /* bit[1]   : [0]:irq0 */
        unsigned int  cpu_fiqout6_dis       : 1;  /* bit[2]   : [1]:fiq0 */
        unsigned int  cpu_fiqout2cpu0_6_dis : 1;  /* bit[3]   : [1]:fiq0 */
        unsigned int  reserved              : 28; /* bit[4-31]: [31:4]�������� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU6_INT_DIS_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_INT_DIS_cpu_irqout2mcu6_dis_START    (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_INT_DIS_cpu_irqout2mcu6_dis_END      (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_INT_DIS_cpu_irqout2cpu0_6_dis_START  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_INT_DIS_cpu_irqout2cpu0_6_dis_END    (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_INT_DIS_cpu_fiqout6_dis_START        (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_INT_DIS_cpu_fiqout6_dis_END          (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_INT_DIS_cpu_fiqout2cpu0_6_dis_START  (3)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_INT_DIS_cpu_fiqout2cpu0_6_dis_END    (3)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU6_INT_STAT_UNION
 �ṹ˵��  : ACPU_SC_CPU6_INT_STAT �Ĵ����ṹ���塣��ַƫ����:0x744����ֵ:0x00000000�����:32
 �Ĵ���˵��: �ڲ��ж�ʹ�ܼĴ���������SC�ڲ��жϵ��������á���ӦbitΪ1��ʾʹ����Ӧ�жϣ�Ϊ0��ʾ�����жϡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cpu_irqout2mcu6_state   : 1;  /* bit[0]   : [0]:irq0 */
        unsigned int  cpu_irqout2cpu0_6_state : 1;  /* bit[1]   : [0]:irq0 */
        unsigned int  cpu_fiqout6_state       : 1;  /* bit[2]   : [1]:fiq0 */
        unsigned int  cpu_fiqout2cpu0_6_state : 1;  /* bit[3]   : [1]:fiq0 */
        unsigned int  reserved                : 28; /* bit[4-31]: [31:4]�������� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU6_INT_STAT_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_INT_STAT_cpu_irqout2mcu6_state_START    (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_INT_STAT_cpu_irqout2mcu6_state_END      (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_INT_STAT_cpu_irqout2cpu0_6_state_START  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_INT_STAT_cpu_irqout2cpu0_6_state_END    (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_INT_STAT_cpu_fiqout6_state_START        (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_INT_STAT_cpu_fiqout6_state_END          (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_INT_STAT_cpu_fiqout2cpu0_6_state_START  (3)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_INT_STAT_cpu_fiqout2cpu0_6_state_END    (3)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU6_INT_STATR_UNION
 �ṹ˵��  : ACPU_SC_CPU6_INT_STATR �Ĵ����ṹ���塣��ַƫ����:0x748����ֵ:0x00000000�����:32
 �Ĵ���˵��: ԭʼ�ڲ��жϼĴ���������ָʾSC�ڲ���ԭʼ�ж�״̬������ǰ������ӦbitΪ1��ʾ���жϣ�Ϊ0��ʾ���жϡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cpu_irqout2mcu6_statr : 1;  /* bit[0]   : [0]:irq0 */
        unsigned int  cpu_fiqout6_statr     : 1;  /* bit[1]   : [1]:fiq0 */
        unsigned int  reserved              : 30; /* bit[2-31]: [31:2]�������� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU6_INT_STATR_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_INT_STATR_cpu_irqout2mcu6_statr_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_INT_STATR_cpu_irqout2mcu6_statr_END    (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_INT_STATR_cpu_fiqout6_statr_START      (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_INT_STATR_cpu_fiqout6_statr_END        (1)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU6_INT_STATM_UNION
 �ṹ˵��  : ACPU_SC_CPU6_INT_STATM �Ĵ����ṹ���塣��ַƫ����:0x74C����ֵ:0x00000000�����:32
 �Ĵ���˵��: ���κ��ڲ��жϼĴ���������ָʾSC��ǰ�ڲ��ж�״̬�����κ󣩡���ӦbitΪ1��ʾ���жϣ�Ϊ0��ʾ���жϡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cpu_irqout2mcu6_statm   : 1;  /* bit[0]   : [0]:irq0 */
        unsigned int  cpu_irqout2cpu0_6_statm : 1;  /* bit[1]   : [0]:irq0 */
        unsigned int  cpu_fiqout6_statm       : 1;  /* bit[2]   : [1]:fiq0 */
        unsigned int  cpu_fiqout2cpu0_6_statm : 1;  /* bit[3]   : [1]:fiq0 */
        unsigned int  reserved                : 28; /* bit[4-31]: [31:4]�������� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU6_INT_STATM_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_INT_STATM_cpu_irqout2mcu6_statm_START    (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_INT_STATM_cpu_irqout2mcu6_statm_END      (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_INT_STATM_cpu_irqout2cpu0_6_statm_START  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_INT_STATM_cpu_irqout2cpu0_6_statm_END    (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_INT_STATM_cpu_fiqout6_statm_START        (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_INT_STATM_cpu_fiqout6_statm_END          (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_INT_STATM_cpu_fiqout2cpu0_6_statm_START  (3)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_INT_STATM_cpu_fiqout2cpu0_6_statm_END    (3)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU6_MTCMOS_TIMER_UNION
 �ṹ˵��  : ACPU_SC_CPU6_MTCMOS_TIMER �Ĵ����ṹ���塣��ַƫ����:0x750����ֵ:0x000000FF�����:32
 �Ĵ���˵��: CPU0 MTCMOS�ȶ�ʱ�������ֵ����ʱʱ����19.2M��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cpu_mtcmos_timer6 : 16; /* bit[0-15] : [15:0]:timer0 */
        unsigned int  reserved          : 16; /* bit[16-31]: [31:16]�������� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU6_MTCMOS_TIMER_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_MTCMOS_TIMER_cpu_mtcmos_timer6_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_MTCMOS_TIMER_cpu_mtcmos_timer6_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU6_MTCMOS_TIMER_STAT_UNION
 �ṹ˵��  : ACPU_SC_CPU6_MTCMOS_TIMER_STAT �Ĵ����ṹ���塣��ַƫ����:0x754����ֵ:0x00000000�����:32
 �Ĵ���˵��: CPU0 MTCMOS�ȶ�ʱ��״ָ̬ʾ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cpu_mtcmos_timer6_sta : 1;  /* bit[0]   : [0]:timer0_sta
                                                                0: δ�ȶ�
                                                                1���ȶ� */
        unsigned int  reserved              : 31; /* bit[1-31]: [31:1]�������� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU6_MTCMOS_TIMER_STAT_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_MTCMOS_TIMER_STAT_cpu_mtcmos_timer6_sta_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_MTCMOS_TIMER_STAT_cpu_mtcmos_timer6_sta_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU6_RVBARADDR_UNION
 �ṹ˵��  : ACPU_SC_CPU6_RVBARADDR �Ĵ����ṹ���塣��ַƫ����:0x758����ֵ:0x00000000�����:32
 �Ĵ���˵��: Reset Vector Base Address for executing in 64-bit state.
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  rvbaraddr6 : 32; /* bit[0-31]: RVBARADDRx[33:2]���ã�
                                                     RVBARADDRx[39:34]=0x0 */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU6_RVBARADDR_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_RVBARADDR_rvbaraddr6_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU6_RVBARADDR_rvbaraddr6_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU7_CTRL_UNION
 �ṹ˵��  : ACPU_SC_CPU7_CTRL �Ĵ����ṹ���塣��ַƫ����:0x800����ֵ:0x00000068�����:32
 �Ĵ���˵��: ACPU��ϵͳ�ϵ����üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cp15disable7       : 1;  /* bit[0]    : CPU0 cp15 ��ȫ�Ĵ�����ֹ����
                                                              0: �������
                                                              1: ��ֹ���� */
        unsigned int  reserved_0         : 1;  /* bit[1]    : ���� */
        unsigned int  edbgrq7            : 1;  /* bit[2]    : ʹ��A53 integration ��edbgrq0
                                                              0: ��ֹ
                                                              1: ʹ�� */
        unsigned int  vinithi7           : 1;  /* bit[3]    : CPU0 ��������ַ������
                                                              0: ��λ��ַ
                                                              1: ��λ��ַ */
        unsigned int  reserved_1         : 1;  /* bit[4]    : ���� */
        unsigned int  bypass_warmrstreq7 : 1;  /* bit[5]    : bypass cpu0��warm reset
                                                              0: ��ִ���ȸ�λ��bypass
                                                              1: ִ���ȸ�λ */
        unsigned int  bypass_dbgrstreq7  : 1;  /* bit[6]    : bypass cpu0��dbg warm reset
                                                              0: ��ִ���ȸ�λ��bypass
                                                              1: ִ���ȸ�λ */
        unsigned int  aa64naa32_7        : 1;  /* bit[7]    : 0 AArch32
                                                              1 AArch64 */
        unsigned int  cfgend7            : 1;  /* bit[8]    : 0 С����
                                                              1 ����� */
        unsigned int  cfgte7             : 1;  /* bit[9]    : 0 ��ʹ��T32
                                                              1 ʹ��T32 */
        unsigned int  cryptodisable7     : 1;  /* bit[10]   : ��ʹ��crypto���� */
        unsigned int  reserved_2         : 21; /* bit[11-31]: [31��11]������ */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU7_CTRL_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_CTRL_cp15disable7_START        (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_CTRL_cp15disable7_END          (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_CTRL_edbgrq7_START             (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_CTRL_edbgrq7_END               (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_CTRL_vinithi7_START            (3)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_CTRL_vinithi7_END              (3)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_CTRL_bypass_warmrstreq7_START  (5)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_CTRL_bypass_warmrstreq7_END    (5)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_CTRL_bypass_dbgrstreq7_START   (6)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_CTRL_bypass_dbgrstreq7_END     (6)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_CTRL_aa64naa32_7_START         (7)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_CTRL_aa64naa32_7_END           (7)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_CTRL_cfgend7_START             (8)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_CTRL_cfgend7_END               (8)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_CTRL_cfgte7_START              (9)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_CTRL_cfgte7_END                (9)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_CTRL_cryptodisable7_START      (10)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_CTRL_cryptodisable7_END        (10)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU7_STAT_UNION
 �ṹ˵��  : ACPU_SC_CPU7_STAT �Ĵ����ṹ���塣��ַƫ����:0x804����ֵ:0x00000000�����:32
 �Ĵ���˵��: ϵͳ״̬�Ĵ��������ڼ��ϵͳ��״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_smpnamp7    : 1;  /* bit[0]   : ���ñ��ؿ��Զ���CPU0��ϵͳ�����sc_smpnamp0�źŵ�ֵ��
                                                         0:Asymmetric
                                                         1:Symmetric. */
        unsigned int  sc_standbywfi7 : 1;  /* bit[1]   : ���ñ��ؿ��Զ���CPU0��ϵͳ�����sc_standbywfi�źŵ�ֵ��
                                                         0:processor not in WFE Standby mode
                                                         1:processor in WFE Standby mode. */
        unsigned int  sc_standbywfe7 : 1;  /* bit[2]   : ���ñ��ؿ��Զ���CPU0��ϵͳ�����sc_standbywfe�źŵ�ֵ��
                                                         0:processor not in WFE Standby mode
                                                         1:processor in WFE Standby mode. */
        unsigned int  aarm_dbgack7   : 1;  /* bit[3]   : aarm_dbgack��AARM��debugacknowledge״ָ̬ʾ�źţ�
                                                         0:not acknowledged
                                                         1:acknowledged. */
        unsigned int  reserved_0     : 1;  /* bit[4]   : ���� */
        unsigned int  dbgrstreq7     : 1;  /* bit[5]   : dbg Warm reset request */
        unsigned int  warmrstreq7    : 1;  /* bit[6]   : Warm reset request */
        unsigned int  reserved_1     : 25; /* bit[7-31]: [31:7]���� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU7_STAT_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_STAT_sc_smpnamp7_START     (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_STAT_sc_smpnamp7_END       (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_STAT_sc_standbywfi7_START  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_STAT_sc_standbywfi7_END    (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_STAT_sc_standbywfe7_START  (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_STAT_sc_standbywfe7_END    (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_STAT_aarm_dbgack7_START    (3)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_STAT_aarm_dbgack7_END      (3)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_STAT_dbgrstreq7_START      (5)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_STAT_dbgrstreq7_END        (5)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_STAT_warmrstreq7_START     (6)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_STAT_warmrstreq7_END       (6)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU7_CLKEN_UNION
 �ṹ˵��  : ACPU_SC_CPU7_CLKEN �Ĵ����ṹ���塣��ַƫ����:0x808����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳʱ���ſ����üĴ���������Ӧλд1ʹ����Ӧʱ�ӣ�д0��Ӱ�졣
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved_0         : 1;  /* bit[0]   : [0]�������� 
                                                               */
        unsigned int  hpm_cpucore7_clken : 1;  /* bit[1]   : hpm cpucore0 ����ʱ���ſ�ʹ��
                                                             1'b1: ʱ��ʹ�ܣ� 
                                                             1'b0: ��Ч */
        unsigned int  reserved_1         : 1;  /* bit[2]   : [2]�������� 
                                                               */
        unsigned int  reserved_2         : 29; /* bit[3-31]: [31:3]�������� 
                                                               */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU7_CLKEN_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_CLKEN_hpm_cpucore7_clken_START  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_CLKEN_hpm_cpucore7_clken_END    (1)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU7_CLKDIS_UNION
 �ṹ˵��  : ACPU_SC_CPU7_CLKDIS �Ĵ����ṹ���塣��ַƫ����:0x80C����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳʱ���ſ����üĴ���������Ӧλд1��ֹ��Ӧʱ�ӣ�д0��Ӱ�졣
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved_0          : 1;  /* bit[0]   : [0]�������� 
                                                                */
        unsigned int  hpm_cpucore7_clkdis : 1;  /* bit[1]   : hpm cpucore0 ����ʱ���ſ�ʹ��
                                                              1'b1: ʱ�ӹر� 
                                                              1'b0: ��Ч */
        unsigned int  reserved_1          : 1;  /* bit[2]   : [2]�������� 
                                                                */
        unsigned int  reserved_2          : 29; /* bit[3-31]: [31:3]�������� 
                                                                */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU7_CLKDIS_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_CLKDIS_hpm_cpucore7_clkdis_START  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_CLKDIS_hpm_cpucore7_clkdis_END    (1)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU7_CLK_STAT_UNION
 �ṹ˵��  : ACPU_SC_CPU7_CLK_STAT �Ĵ����ṹ���塣��ַƫ����:0x810����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳʱ��״̬�Ĵ�����0��ʾʱ����Ӧ�رգ�1��ʾ�򿪡�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved_0          : 1;  /* bit[0]   : [0]�������� 
                                                                */
        unsigned int  hpm_cpucore7_clksta : 1;  /* bit[1]   : hpm cpucore0 ����ʱ���ſ�ʹ��
                                                              1'b1: ʱ��ʹ�ܣ� 
                                                              1'b0: ʱ�ӹر� */
        unsigned int  reserved_1          : 1;  /* bit[2]   : [0]�������� 
                                                                */
        unsigned int  reserved_2          : 29; /* bit[3-31]: [0]�������� 
                                                                */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU7_CLK_STAT_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_CLK_STAT_hpm_cpucore7_clksta_START  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_CLK_STAT_hpm_cpucore7_clksta_END    (1)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU7_RSTEN_UNION
 �ṹ˵��  : ACPU_SC_CPU7_RSTEN �Ĵ����ṹ���塣��ַƫ����:0x814����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳ��λʹ�ܼĴ���������Ӧλд1ʹ����Ӧ��λ�źţ������븴λ̬����д0��Ӱ�졣�üĴ���ֻ���ϵ縴λʱ����λ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  srst_aarm_por7_rsten  : 1;  /* bit[0]   : A53 integration��por 0��λ���� */
        unsigned int  srst_aarm_core7_rsten : 1;  /* bit[1]   : A53 integration��core 0��λ���� */
        unsigned int  reserved_0            : 2;  /* bit[2-3] : ������ 
                                                                  */
        unsigned int  srst_aarm_hpm7_rsten  : 1;  /* bit[4]   : A53 integration��hpm0��λ���� */
        unsigned int  reserved_1            : 27; /* bit[5-31]: [31:5]�������� 
                                                                  */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU7_RSTEN_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_RSTEN_srst_aarm_por7_rsten_START   (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_RSTEN_srst_aarm_por7_rsten_END     (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_RSTEN_srst_aarm_core7_rsten_START  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_RSTEN_srst_aarm_core7_rsten_END    (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_RSTEN_srst_aarm_hpm7_rsten_START   (4)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_RSTEN_srst_aarm_hpm7_rsten_END     (4)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU7_RSTDIS_UNION
 �ṹ˵��  : ACPU_SC_CPU7_RSTDIS �Ĵ����ṹ���塣��ַƫ����:0x818����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳ��λ��ֹ�Ĵ��������ڿ��Ƹ��������ܵĸ�λ��ֹ������Ӧλд1��ֹ��Ӧ��������λ�źţ����˳���λ̬����д0��Ӱ�졣�üĴ���ֻ���ϵ縴λʱ����λ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  srst_aarm_por7_rstdis  : 1;  /* bit[0]   : A53 integration��por 0��λ���� */
        unsigned int  srst_aarm_core7_rstdis : 1;  /* bit[1]   : A53 integration��core 0��λ���� */
        unsigned int  reserved_0             : 2;  /* bit[2-3] : ������ 
                                                                   */
        unsigned int  srst_aarm_hpm7_rstdis  : 1;  /* bit[4]   : A53 integration��hpm0��λ���� */
        unsigned int  reserved_1             : 27; /* bit[5-31]: [31:5]�������� 
                                                                   */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU7_RSTDIS_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_RSTDIS_srst_aarm_por7_rstdis_START   (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_RSTDIS_srst_aarm_por7_rstdis_END     (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_RSTDIS_srst_aarm_core7_rstdis_START  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_RSTDIS_srst_aarm_core7_rstdis_END    (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_RSTDIS_srst_aarm_hpm7_rstdis_START   (4)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_RSTDIS_srst_aarm_hpm7_rstdis_END     (4)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU7_RST_STAT_UNION
 �ṹ˵��  : ACPU_SC_CPU7_RST_STAT �Ĵ����ṹ���塣��ַƫ����:0x81C����ֵ:0x00000013�����:32
 �Ĵ���˵��: ACPU��ϵͳ��λ״̬�Ĵ�����0��ʾ��λ��ʹ�ܣ�1��λʹ�ܼ����븴λ̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  srst_aarm_por7_rststa  : 1;  /* bit[0]   : A53 integration��por 0��λ���� */
        unsigned int  srst_aarm_core7_rststa : 1;  /* bit[1]   : A53 integration��core 0��λ���� */
        unsigned int  reserved_0             : 2;  /* bit[2-3] : ������ 
                                                                   */
        unsigned int  srst_aarm_hpm7_rststa  : 1;  /* bit[4]   : A53 integration��hpm0��λ���� */
        unsigned int  reserved_1             : 27; /* bit[5-31]: [31:5]�������� 
                                                                   */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU7_RST_STAT_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_RST_STAT_srst_aarm_por7_rststa_START   (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_RST_STAT_srst_aarm_por7_rststa_END     (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_RST_STAT_srst_aarm_core7_rststa_START  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_RST_STAT_srst_aarm_core7_rststa_END    (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_RST_STAT_srst_aarm_hpm7_rststa_START   (4)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_RST_STAT_srst_aarm_hpm7_rststa_END     (4)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU7_MTCMOS_EN_UNION
 �ṹ˵��  : ACPU_SC_CPU7_MTCMOS_EN �Ĵ����ṹ���塣��ַƫ����:0x820����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳ�ϵ�����Ĵ��������ڸ������������ϵ������źţ�����Ӧλд1�����ϵ�����д0��Ӱ�졣
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pw_mtcmos_en_acpu7 : 1;  /* bit[0]   : [0] ��ACPU0�µ��� */
        unsigned int  reserved           : 31; /* bit[1-31]: [31:1]��������  */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU7_MTCMOS_EN_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_MTCMOS_EN_pw_mtcmos_en_acpu7_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_MTCMOS_EN_pw_mtcmos_en_acpu7_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU7_MTCMOS_DIS_UNION
 �ṹ˵��  : ACPU_SC_CPU7_MTCMOS_DIS �Ĵ����ṹ���塣��ַƫ����:0x824����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳ�ϵ������ֹ�Ĵ��������ڸ���������ֹ�ϵ������źţ�����Ӧλд1��ֹ�ϵ�����д0��Ӱ�졣
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pw_mtcmos_dis_acpu7 : 1;  /* bit[0]   : [0] ��ACPU0�µ��� */
        unsigned int  reserved            : 31; /* bit[1-31]: [31:1]��������  */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU7_MTCMOS_DIS_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_MTCMOS_DIS_pw_mtcmos_dis_acpu7_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_MTCMOS_DIS_pw_mtcmos_dis_acpu7_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU7_MTCMOS_STAT_UNION
 �ṹ˵��  : ACPU_SC_CPU7_MTCMOS_STAT �Ĵ����ṹ���塣��ַƫ����:0x828����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳ�ϵ�����״̬�Ĵ�������ӦλΪ1��ʾ��������״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pw_mtcmos_sta_acpu7 : 1;  /* bit[0]   : [0] ��ACPU0�µ��� */
        unsigned int  reserved            : 31; /* bit[1-31]: [31:1]��������  */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU7_MTCMOS_STAT_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_MTCMOS_STAT_pw_mtcmos_sta_acpu7_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_MTCMOS_STAT_pw_mtcmos_sta_acpu7_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU7_MTCMOS_ACK_STAT_UNION
 �ṹ˵��  : ACPU_SC_CPU7_MTCMOS_ACK_STAT �Ĵ����ṹ���塣��ַƫ����:0x82C����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳ�ϵ練����ѯ�Ĵ��������ڲ�ѯ�������������ϵ������źź��Ƿ񷵻�ACK������ӦλΪ1��ʾ�����µ磬Ϊ0��ʾ������
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pw_mtcmos_acksta_acpu7 : 1;  /* bit[0]   : [0] ��ACPU0�µ��� */
        unsigned int  reserved               : 31; /* bit[1-31]: [31:1]��������  */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU7_MTCMOS_ACK_STAT_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_MTCMOS_ACK_STAT_pw_mtcmos_acksta_acpu7_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_MTCMOS_ACK_STAT_pw_mtcmos_acksta_acpu7_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU7_PW_ISOEN_UNION
 �ṹ˵��  : ACPU_SC_CPU7_PW_ISOEN �Ĵ����ṹ���塣��ַƫ����:0x830����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳISOʹ�ܼĴ��������ڿ��Ƹ���������ص�Isolation Cellʹ�ܡ�����Ӧλд1ʹ����Ӧ������IsoLation Cell�����źŸ��ϣ���д0��Ӱ�졣�üĴ���ֻ���ϵ縴λʱ����λ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pw_isoen_acpu7 : 1;  /* bit[0]   : [0] ��ACPU0�µ��� */
        unsigned int  reserved       : 31; /* bit[1-31]: [31:1]��������  */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU7_PW_ISOEN_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_PW_ISOEN_pw_isoen_acpu7_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_PW_ISOEN_pw_isoen_acpu7_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU7_PW_ISODIS_UNION
 �ṹ˵��  : ACPU_SC_CPU7_PW_ISODIS �Ĵ����ṹ���塣��ַƫ����:0x834����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ϵͳISO��ֹ�Ĵ��������ڿ��Ƹ���������ص�Isolation Cell��ֹ������Ӧλд1��ֹ��Ӧ������IsoLation Cell�����źŲ����ϣ���д0��Ӱ�졣�üĴ���ֻ���ϵ縴λʱ����λ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pw_isodis_acpu7 : 1;  /* bit[0]   : [0] ��ACPU0�µ��� */
        unsigned int  reserved        : 31; /* bit[1-31]: [31:1]��������  */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU7_PW_ISODIS_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_PW_ISODIS_pw_isodis_acpu7_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_PW_ISODIS_pw_isodis_acpu7_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU7_PW_ISO_STAT_UNION
 �ṹ˵��  : ACPU_SC_CPU7_PW_ISO_STAT �Ĵ����ṹ���塣��ַƫ����:0x838����ֵ:0x00000001�����:32
 �Ĵ���˵��: ACPU��ϵͳISO״̬�Ĵ�����0��ʾisolation��ʹ�ܣ�1��ʾisolationʹ�ܡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pw_iso_stat_acpu7 : 1;  /* bit[0]   : [0] ��ACPU0�µ��� */
        unsigned int  reserved          : 31; /* bit[1-31]: [31:1]�������� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU7_PW_ISO_STAT_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_PW_ISO_STAT_pw_iso_stat_acpu7_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_PW_ISO_STAT_pw_iso_stat_acpu7_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU7_INT_EN_UNION
 �ṹ˵��  : ACPU_SC_CPU7_INT_EN �Ĵ����ṹ���塣��ַƫ����:0x83C����ֵ:0x00000000�����:32
 �Ĵ���˵��: �ڲ��ж����μĴ������Ա���д1�������Σ�д0��Ӱ�����ε�״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cpu_irqout2mcu7_en   : 1;  /* bit[0]   : [0]:irq0 */
        unsigned int  cpu_irqout2cpu0_7_en : 1;  /* bit[1]   : [0]:irq0 */
        unsigned int  cpu_fiqout7_en       : 1;  /* bit[2]   : [1]:fiq0 */
        unsigned int  cpu_fiqout2cpu0_7_en : 1;  /* bit[3]   : [1]:fiq0 */
        unsigned int  reserved             : 28; /* bit[4-31]: [31:4]�������� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU7_INT_EN_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_INT_EN_cpu_irqout2mcu7_en_START    (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_INT_EN_cpu_irqout2mcu7_en_END      (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_INT_EN_cpu_irqout2cpu0_7_en_START  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_INT_EN_cpu_irqout2cpu0_7_en_END    (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_INT_EN_cpu_fiqout7_en_START        (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_INT_EN_cpu_fiqout7_en_END          (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_INT_EN_cpu_fiqout2cpu0_7_en_START  (3)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_INT_EN_cpu_fiqout2cpu0_7_en_END    (3)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU7_INT_DIS_UNION
 �ṹ˵��  : ACPU_SC_CPU7_INT_DIS �Ĵ����ṹ���塣��ַƫ����:0x840����ֵ:0x00000000�����:32
 �Ĵ���˵��: �ڲ��ж����μĴ������Ա���д1����ֹ���Σ�д0��Ӱ��ʱ�����ε�״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cpu_irqout2mcu7_dis   : 1;  /* bit[0]   : [0]:irq0 */
        unsigned int  cpu_irqout2cpu0_7_dis : 1;  /* bit[1]   : [0]:irq0 */
        unsigned int  cpu_fiqout7_dis       : 1;  /* bit[2]   : [1]:fiq0 */
        unsigned int  cpu_fiqout2cpu0_7_dis : 1;  /* bit[3]   : [1]:fiq0 */
        unsigned int  reserved              : 28; /* bit[4-31]: [31:4]�������� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU7_INT_DIS_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_INT_DIS_cpu_irqout2mcu7_dis_START    (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_INT_DIS_cpu_irqout2mcu7_dis_END      (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_INT_DIS_cpu_irqout2cpu0_7_dis_START  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_INT_DIS_cpu_irqout2cpu0_7_dis_END    (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_INT_DIS_cpu_fiqout7_dis_START        (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_INT_DIS_cpu_fiqout7_dis_END          (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_INT_DIS_cpu_fiqout2cpu0_7_dis_START  (3)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_INT_DIS_cpu_fiqout2cpu0_7_dis_END    (3)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU7_INT_STAT_UNION
 �ṹ˵��  : ACPU_SC_CPU7_INT_STAT �Ĵ����ṹ���塣��ַƫ����:0x844����ֵ:0x00000000�����:32
 �Ĵ���˵��: �ڲ��ж�ʹ�ܼĴ���������SC�ڲ��жϵ��������á���ӦbitΪ1��ʾʹ����Ӧ�жϣ�Ϊ0��ʾ�����жϡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cpu_irqout2mcu7_state   : 1;  /* bit[0]   : [0]:irq0 */
        unsigned int  cpu_irqout2cpu0_7_state : 1;  /* bit[1]   : [0]:irq0 */
        unsigned int  cpu_fiqout7_state       : 1;  /* bit[2]   : [1]:fiq0 */
        unsigned int  cpu_fiqout2cpu0_7_state : 1;  /* bit[3]   : [1]:fiq0 */
        unsigned int  reserved                : 28; /* bit[4-31]: [31:4]�������� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU7_INT_STAT_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_INT_STAT_cpu_irqout2mcu7_state_START    (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_INT_STAT_cpu_irqout2mcu7_state_END      (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_INT_STAT_cpu_irqout2cpu0_7_state_START  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_INT_STAT_cpu_irqout2cpu0_7_state_END    (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_INT_STAT_cpu_fiqout7_state_START        (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_INT_STAT_cpu_fiqout7_state_END          (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_INT_STAT_cpu_fiqout2cpu0_7_state_START  (3)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_INT_STAT_cpu_fiqout2cpu0_7_state_END    (3)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU7_INT_STATR_UNION
 �ṹ˵��  : ACPU_SC_CPU7_INT_STATR �Ĵ����ṹ���塣��ַƫ����:0x848����ֵ:0x00000000�����:32
 �Ĵ���˵��: ԭʼ�ڲ��жϼĴ���������ָʾSC�ڲ���ԭʼ�ж�״̬������ǰ������ӦbitΪ1��ʾ���жϣ�Ϊ0��ʾ���жϡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cpu_irqout2mcu7_statr : 1;  /* bit[0]   : [0]:irq0 */
        unsigned int  cpu_fiqout7_statr     : 1;  /* bit[1]   : [1]:fiq0 */
        unsigned int  reserved              : 30; /* bit[2-31]: ������ */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU7_INT_STATR_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_INT_STATR_cpu_irqout2mcu7_statr_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_INT_STATR_cpu_irqout2mcu7_statr_END    (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_INT_STATR_cpu_fiqout7_statr_START      (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_INT_STATR_cpu_fiqout7_statr_END        (1)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU7_INT_STATM_UNION
 �ṹ˵��  : ACPU_SC_CPU7_INT_STATM �Ĵ����ṹ���塣��ַƫ����:0x84C����ֵ:0x00000000�����:32
 �Ĵ���˵��: ���κ��ڲ��жϼĴ���������ָʾSC��ǰ�ڲ��ж�״̬�����κ󣩡���ӦbitΪ1��ʾ���жϣ�Ϊ0��ʾ���жϡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cpu_irqout2mcu7_statm   : 1;  /* bit[0]   : [0]:irq0 */
        unsigned int  cpu_irqout2cpu0_7_statm : 1;  /* bit[1]   : [0]:irq0 */
        unsigned int  cpu_fiqout7_statm       : 1;  /* bit[2]   : [1]:fiq0 */
        unsigned int  cpu_fiqout2cpu0_7_statm : 1;  /* bit[3]   : [1]:fiq0 */
        unsigned int  reserved                : 28; /* bit[4-31]: [31:4]�������� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU7_INT_STATM_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_INT_STATM_cpu_irqout2mcu7_statm_START    (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_INT_STATM_cpu_irqout2mcu7_statm_END      (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_INT_STATM_cpu_irqout2cpu0_7_statm_START  (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_INT_STATM_cpu_irqout2cpu0_7_statm_END    (1)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_INT_STATM_cpu_fiqout7_statm_START        (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_INT_STATM_cpu_fiqout7_statm_END          (2)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_INT_STATM_cpu_fiqout2cpu0_7_statm_START  (3)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_INT_STATM_cpu_fiqout2cpu0_7_statm_END    (3)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU7_MTCMOS_TIMER_UNION
 �ṹ˵��  : ACPU_SC_CPU7_MTCMOS_TIMER �Ĵ����ṹ���塣��ַƫ����:0x850����ֵ:0x000000FF�����:32
 �Ĵ���˵��: CPU0 MTCMOS�ȶ�ʱ�������ֵ����ʱʱ����19.2M��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cpu_mtcmos_timer7 : 16; /* bit[0-15] : [15:0]:timer0 */
        unsigned int  reserved          : 16; /* bit[16-31]: [31:16]�������� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU7_MTCMOS_TIMER_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_MTCMOS_TIMER_cpu_mtcmos_timer7_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_MTCMOS_TIMER_cpu_mtcmos_timer7_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU7_MTCMOS_TIMER_STAT_UNION
 �ṹ˵��  : ACPU_SC_CPU7_MTCMOS_TIMER_STAT �Ĵ����ṹ���塣��ַƫ����:0x854����ֵ:0x00000000�����:32
 �Ĵ���˵��: CPU0 MTCMOS�ȶ�ʱ��״ָ̬ʾ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cpu_mtcmos_timer7_sta : 1;  /* bit[0]   : [0]:timer0_sta
                                                                0: δ�ȶ�
                                                                1���ȶ� */
        unsigned int  reserved              : 31; /* bit[1-31]: [31:9]�������� */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU7_MTCMOS_TIMER_STAT_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_MTCMOS_TIMER_STAT_cpu_mtcmos_timer7_sta_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_MTCMOS_TIMER_STAT_cpu_mtcmos_timer7_sta_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_ACPU_SCTRL_ACPU_SC_CPU7_RVBARADDR_UNION
 �ṹ˵��  : ACPU_SC_CPU7_RVBARADDR �Ĵ����ṹ���塣��ַƫ����:0x858����ֵ:0x00000000�����:32
 �Ĵ���˵��: Reset Vector Base Address for executing in 64-bit state.
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  rvbaraddr7 : 32; /* bit[0-31]: RVBARADDRx[33:2]���ã�
                                                     RVBARADDRx[39:34]=0x0 */
    } reg;
} SOC_ACPU_SCTRL_ACPU_SC_CPU7_RVBARADDR_UNION;
#endif
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_RVBARADDR_rvbaraddr7_START  (0)
#define SOC_ACPU_SCTRL_ACPU_SC_CPU7_RVBARADDR_rvbaraddr7_END    (31)






/*****************************************************************************
  8 OTHERS����
*****************************************************************************/



/*****************************************************************************
  9 ȫ�ֱ�������
*****************************************************************************/


/*****************************************************************************
  10 ��������
*****************************************************************************/


#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif /* end of soc_acpu_sctrl_interface.h */
