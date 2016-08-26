

/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/

#ifndef __SOC_AO_SCTRL_INTERFACE_H__
#define __SOC_AO_SCTRL_INTERFACE_H__

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
/* �Ĵ���˵����ϵͳ���ƼĴ���0�����ڶ���ϵͳģʽ���á�
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_SYS_CTRL0_UNION */
#define SOC_AO_SCTRL_SC_SYS_CTRL0_ADDR(base)          ((base) + (0x000))

/* �Ĵ���˵����ϵͳ���ƼĴ���1�����ܰ���MCUʱ���ſء�����DFSӲ�����ơ�MCU WDG0 RSTѡ��ACPU WDG RSTѡ��ACPU REMAP��eFUSEC REMAP��USIM_HPD��EXT_PLL���á�
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_SYS_CTRL1_UNION */
#define SOC_AO_SCTRL_SC_SYS_CTRL1_ADDR(base)          ((base) + (0x004))

/* �Ĵ���˵����ϵͳ���ƼĴ���2��WDG��λ״̬�����ȫ�ָ�λ״̬�����
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_SYS_CTRL2_UNION */
#define SOC_AO_SCTRL_SC_SYS_CTRL2_ADDR(base)          ((base) + (0x008))

/* �Ĵ���˵����ϵͳ״̬�Ĵ���0�����ڼ��ϵͳ��ϵͳ��λԭ���ѯ��
            ���üĴ���д��0x48698284����ϵͳ��λ��д������ֵ��Ӱ�졣
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_SYS_STAT0_UNION */
#define SOC_AO_SCTRL_SC_SYS_STAT0_ADDR(base)          ((base) + (0x010))

/* �Ĵ���˵����ϵͳ״̬�Ĵ���1�����ڼ��ϵͳ��״̬������efuse״̬NAND BOOT��NAND BITWIDTH��JTAGģʽ��BOOTMODE��BOOTSEL��ϵͳģʽ״̬��FUNCMODE��ϵͳ״̬��ѯ��
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_SYS_STAT1_UNION */
#define SOC_AO_SCTRL_SC_SYS_STAT1_ADDR(base)          ((base) + (0x014))

/* �Ĵ���˵����MCU�ж�ģʽ���ƼĴ��������ڿ���MCU�жϷ���ʱ��ϵͳģʽ��
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_MCU_IMCTRL_UNION */
#define SOC_AO_SCTRL_SC_MCU_IMCTRL_ADDR(base)         ((base) + (0x018))

/* �Ĵ���˵����MCU�ж�ģʽ״̬�Ĵ��������ڼ��Ϳ���MCUϵͳ�ж�ģʽ��
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_MCU_IMSTAT_UNION */
#define SOC_AO_SCTRL_SC_MCU_IMSTAT_ADDR(base)         ((base) + (0x01C))

/* �Ĵ���˵����ϵͳ�����ж�ʹ�ܼĴ��������ڶ�ϵͳ�����жϽ����������á���ӦbitΪ1��ʾʹ����Ӧ�жϣ�Ϊ0��ʾ�����жϡ�
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_SECONDRY_INT_EN0_UNION */
#define SOC_AO_SCTRL_SC_SECONDRY_INT_EN0_ADDR(base)   ((base) + (0x044))

/* �Ĵ���˵����ϵͳ�����ж��жϼĴ���������ָʾϵͳ����ԭʼ�ж�״̬������ǰ������ӦbitΪ1��ʾ���жϣ�Ϊ0��ʾ���жϡ�
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_SECONDRY_INT_STATR0_UNION */
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATR0_ADDR(base) ((base) + (0x048))

/* �Ĵ���˵����ϵͳ�����ж����κ�Ĵ���������ָʾϵͳ�����ж�״̬�����κ󣩡���ӦbitΪ1��ʾ���жϣ�Ϊ0��ʾ���жϡ�
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_SECONDRY_INT_STATM0_UNION */
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATM0_ADDR(base) ((base) + (0x04C))

/* �Ĵ���˵����MCU�����ж�ʹ�ܼĴ�������ӦMCU�Ļ����ж�bit32��63�����ڶ�MCU�Ļ����жϽ����������á���ӦbitΪ1��ʾʹ����Ӧ�жϣ�Ϊ0��ʾ�����жϡ�
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN6_UNION */
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN6_ADDR(base)   ((base) + (0x054))

/* �Ĵ���˵����MCUԭʼ�����жϼĴ�������ӦMCU�Ļ����ж�bit32��63������ָʾMCU��ԭʼ�����ж�״̬������ǰ������ӦbitΪ1��ʾ���жϣ�Ϊ0��ʾ���жϡ�
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR6_UNION */
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR6_ADDR(base) ((base) + (0x058))

/* �Ĵ���˵����MCU���κ����жϼĴ�������ӦMCU�Ļ����ж�bit32��63������ָʾMCU�ĵ�ǰ�����ж�״̬�����κ󣩡���ӦbitΪ1��ʾ���жϣ�Ϊ0��ʾ���жϡ�
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM6_UNION */
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM6_ADDR(base) ((base) + (0x05C))

/* �Ĵ���˵����MCU�����ж�ʹ�ܼĴ�������ӦMCU�Ļ����ж�bit31��0�����ڶ�MCU�Ļ����жϽ����������á���ӦbitΪ1��ʾʹ����Ӧ�жϣ�Ϊ0��ʾ�����жϡ�
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_UNION */
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_ADDR(base)   ((base) + (0x064))

/* �Ĵ���˵����MCUԭʼ�����жϼĴ�������ӦMCU�Ļ����ж�bit31��0������ָʾMCU��ԭʼ�����ж�״̬������ǰ������ӦbitΪ1��ʾ���жϣ�Ϊ0��ʾ���жϡ�
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_UNION */
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_ADDR(base) ((base) + (0x068))

/* �Ĵ���˵����MCU���κ����жϼĴ�������ӦMCU�Ļ����ж�bit31��0������ָʾMCU�ĵ�ǰ�����ж�״̬�����κ󣩡���ӦbitΪ1��ʾ���жϣ�Ϊ0��ʾ���жϡ�
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_UNION */
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_ADDR(base) ((base) + (0x06C))

/* �Ĵ���˵����HiFi�����ж��͸�MCU�Ļ����ж�ʹ�ܼĴ�������ӦHiFi�Ļ����ж�bit0��31�����ڶ�MCU�Ļ����жϽ����������á���ӦbitΪ1��ʾʹ����Ӧ�жϣ�Ϊ0��ʾ�����жϡ�
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN4_UNION */
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN4_ADDR(base)   ((base) + (0x094))

/* �Ĵ���˵����HiFi�����ж��͸�MCU��ԭʼ�����жϼĴ�������ӦHiFi�Ļ����ж�bit0��31������ָʾMCU��ԭʼ�����ж�״̬������ǰ������ӦbitΪ1��ʾ���жϣ�Ϊ0��ʾ���жϡ�
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR4_UNION */
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR4_ADDR(base) ((base) + (0x098))

/* �Ĵ���˵����HiFi�����ж��͸�MCU�����κ����жϼĴ�������ӦHiFi�Ļ����ж�bit0��31������ָʾMCU�ĵ�ǰ�����ж�״̬�����κ󣩡���ӦbitΪ1��ʾ���жϣ�Ϊ0��ʾ���жϡ�
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM4_UNION */
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM4_ADDR(base) ((base) + (0x09C))

/* �Ĵ���˵����ACPU�����ж��͸�MCU�Ļ����ж�ʹ�ܼĴ�������ӦACPU�Ļ����ж�bit0��31�����ڶ�MCU�Ļ����жϽ����������á���ӦbitΪ1��ʾʹ����Ӧ�жϣ�Ϊ0��ʾ�����жϡ�
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_UNION */
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_ADDR(base)   ((base) + (0x0A8))

/* �Ĵ���˵����ACPU�����ж��͸�MCU��ԭʼ�����жϼĴ�������ӦACPU�Ļ����ж�bit0��31������ָʾMCU��ԭʼ�����ж�״̬������ǰ������ӦbitΪ1��ʾ���жϣ�Ϊ0��ʾ���жϡ�
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_UNION */
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_ADDR(base) ((base) + (0x0AC))

/* �Ĵ���˵����ACPU�����ж��͸�MCU�����κ����жϼĴ�������ӦACPU�Ļ����ж�bit0��31������ָʾMCU�ĵ�ǰ�����ж�״̬�����κ󣩡���ӦbitΪ1��ʾ���жϣ�Ϊ0��ʾ���жϡ�
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_UNION */
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_ADDR(base) ((base) + (0x0B0))

/* �Ĵ���˵����ACPU�����ж��͸�MCU�Ļ����ж�ʹ�ܼĴ�������ӦACPU�Ļ����ж�bit32��63�����ڶ�MCU�Ļ����жϽ����������á���ӦbitΪ1��ʾʹ����Ӧ�жϣ�Ϊ0��ʾ�����жϡ�
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_UNION */
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_ADDR(base)   ((base) + (0x0B4))

/* �Ĵ���˵����ACPU�����ж��͸�MCU��ԭʼ�����жϼĴ�������ӦACPU�Ļ����ж�bit32��63������ָʾMCU��ԭʼ�����ж�״̬������ǰ������ӦbitΪ1��ʾ���жϣ�Ϊ0��ʾ���жϡ�
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_UNION */
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_ADDR(base) ((base) + (0x0B8))

/* �Ĵ���˵����ACPU�����ж��͸�MCU�����κ����жϼĴ�������ӦACPU�Ļ����ж�bit32��63������ָʾMCU�ĵ�ǰ�����ж�״̬�����κ󣩡���ӦbitΪ1��ʾ���жϣ�Ϊ0��ʾ���жϡ�
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_UNION */
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_ADDR(base) ((base) + (0x0BC))

/* �Ĵ���˵����ԭʼ�ڲ��жϼĴ���������ָʾSC�ڲ���ԭʼ�ж�״̬������ǰ������ӦbitΪ1��ʾ���жϣ�Ϊ0��ʾ���жϡ�
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_INT_STATR_UNION */
#define SOC_AO_SCTRL_SC_INT_STATR_ADDR(base)          ((base) + (0x0C4))

/* �Ĵ���˵�������κ��ڲ��жϼĴ���������ָʾSC��ǰ�ڲ��ж�״̬�����κ󣩡���ӦbitΪ1��ʾ���жϣ�Ϊ0��ʾ���жϡ�
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_INT_STATM_UNION */
#define SOC_AO_SCTRL_SC_INT_STATM_ADDR(base)          ((base) + (0x0C8))

/* �Ĵ���˵�����ڲ��ж�����Ĵ���������Ӧ�жϱ���λд1����ʾ�����Ӧ���ж�״̬������ԭʼ�ڲ��жϼĴ��������κ��ڲ��жϼĴ�����
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_INT_CLEAR_UNION */
#define SOC_AO_SCTRL_SC_INT_CLEAR_ADDR(base)          ((base) + (0x0CC))

/* �Ĵ���˵�����ڲ��ж�ʹ�ܼĴ���0���Ա���д1��SC_INT_EN_STAT�Ķ�Ӧbit��1��д0��Ӱ�����ε�״̬��
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_INT_EN_SET_UNION */
#define SOC_AO_SCTRL_SC_INT_EN_SET_ADDR(base)         ((base) + (0x0D0))

/* �Ĵ���˵�����ڲ��ж����μĴ���0���Ա���д1��SC_INT_EN_STAT�Ķ�Ӧbit��0��д0��Ӱ��ʱ�����ε�״̬��
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_INT_EN_DIS_UNION */
#define SOC_AO_SCTRL_SC_INT_EN_DIS_ADDR(base)         ((base) + (0x0D4))

/* �Ĵ���˵�����ڲ��ж�ʹ��״̬�Ĵ�����ͨ������SC_INT_EN_SET0��SC_INT_EN_DIS0�޸�״̬������SC�ڲ��жϵ�ʹ�ܺ��������á���ӦbitΪ1��ʾʹ����Ӧ�жϣ�Ϊ0��ʾ�����жϡ�
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_INT_EN_STAT_UNION */
#define SOC_AO_SCTRL_SC_INT_EN_STAT_ADDR(base)        ((base) + (0x0D8))

/* �Ĵ���˵����ԭʼ�ڲ��жϼĴ���������ָʾSC�ڲ���ԭʼ�ж�״̬������ǰ������ӦbitΪ1��ʾ���жϣ�Ϊ0��ʾ���жϡ�
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_INT_STATR1_UNION */
#define SOC_AO_SCTRL_SC_INT_STATR1_ADDR(base)         ((base) + (0x0E4))

/* �Ĵ���˵�������κ��ڲ��жϼĴ���������ָʾSC��ǰ�ڲ��ж�״̬�����κ󣩡���ӦbitΪ1��ʾ���жϣ�Ϊ0��ʾ���жϡ�
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_INT_STATM1_UNION */
#define SOC_AO_SCTRL_SC_INT_STATM1_ADDR(base)         ((base) + (0x0E8))

/* �Ĵ���˵�����ڲ��ж�����Ĵ���������Ӧ�жϱ���λд1����ʾ�����Ӧ���ж�״̬������ԭʼ�ڲ��жϼĴ��������κ��ڲ��жϼĴ�����
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_INT_CLEAR1_UNION */
#define SOC_AO_SCTRL_SC_INT_CLEAR1_ADDR(base)         ((base) + (0x0EC))

/* �Ĵ���˵�����ڲ��ж�ʹ�ܼĴ���0���Ա���д1��SC_INT_EN_STAT1�Ķ�Ӧbit��1��д0��Ӱ�����ε�״̬��
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_INT_EN_SET1_UNION */
#define SOC_AO_SCTRL_SC_INT_EN_SET1_ADDR(base)        ((base) + (0x0F0))

/* �Ĵ���˵�����ڲ��ж����μĴ���0���Ա���д1��SC_INT_EN_STAT1�Ķ�Ӧbit��0��д0��Ӱ��ʱ�����ε�״̬��
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_INT_EN_DIS1_UNION */
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_ADDR(base)        ((base) + (0x0F4))

/* �Ĵ���˵�����ڲ��ж�ʹ��״̬�Ĵ�����ͨ������SC_INT_EN_SET1��SC_INT_EN_DIS1�޸�״̬������SC�ڲ��жϵ�ʹ�ܺ��������á���ӦbitΪ1��ʾʹ����Ӧ�жϣ�Ϊ0��ʾ�����жϡ�
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_INT_EN_STAT1_UNION */
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_ADDR(base)       ((base) + (0x0F8))

/* �Ĵ���˵����timerʹ�ܼĴ���0��
            �Ĵ���д��ʱ��Ҫmsk��Ч��[31:16]��ÿһbit˳���Ӧbit15��bit0������bit31��16��bitд1��ͬʱ������bit15��0������Ч����bit31��16��bitд0ʱ������bit15��0���ֲ��䣻
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_TIMER_EN0_UNION */
#define SOC_AO_SCTRL_SC_TIMER_EN0_ADDR(base)          ((base) + (0x1D0))

/* �Ĵ���˵����timerʹ�ܼĴ���1��
            �Ĵ���д��ʱ��Ҫmsk��Ч��[31:16]��ÿһbit˳���Ӧbit15��bit0������bit31��16��bitд1��ͬʱ������bit15��0������Ч����bit31��16��bitд0ʱ������bit15��0���ֲ��䣻
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_TIMER_EN1_UNION */
#define SOC_AO_SCTRL_SC_TIMER_EN1_ADDR(base)          ((base) + (0x1D4))

/* �Ĵ���˵����timerʹ�ܼĴ���4��
            �Ĵ���д��ʱ��Ҫmsk��Ч��[31:16]��ÿһbit˳���Ӧbit15��bit0������bit31��16��bitд1��ͬʱ������bit15��0������Ч����bit31��16��bitд0ʱ������bit15��0���ֲ��䣻
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_TIMER_EN4_UNION */
#define SOC_AO_SCTRL_SC_TIMER_EN4_ADDR(base)          ((base) + (0x1F0))

/* �Ĵ���˵����timerʹ�ܼĴ���5��
            �Ĵ���д��ʱ��Ҫmsk��Ч��[31:16]��ÿһbit˳���Ӧbit15��bit0������bit31��16��bitд1��ͬʱ������bit15��0������Ч����bit31��16��bitд0ʱ������bit15��0���ֲ��䣻
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_TIMER_EN5_UNION */
#define SOC_AO_SCTRL_SC_TIMER_EN5_ADDR(base)          ((base) + (0x1F4))

/* �Ĵ���˵����MCU��ϵͳ���ƼĴ�����
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL0_UNION */
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL0_ADDR(base)   ((base) + (0x400))

/* �Ĵ���˵����MCU��ϵͳ���ƼĴ��������ܰ���MCU��DAP enable,Tickʱ��У׼,MCU NMI�жϡ�
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL1_UNION */
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL1_ADDR(base)   ((base) + (0x404))

/* �Ĵ���˵����MCU��ϵͳ���ƼĴ���,���ܰ���MCU��DDR REMAP��ʼ��ַ���á�
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL2_UNION */
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL2_ADDR(base)   ((base) + (0x408))

/* �Ĵ���˵����MCU��ϵͳ���ƼĴ��������ܰ���PMUSSI���ơ�cssys_ctrl_prot���ơ�
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL3_UNION */
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL3_ADDR(base)   ((base) + (0x40C))

/* �Ĵ���˵����MCU��ϵͳ���ƼĴ��������ܰ���COREON Memory���ơ�
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL4_UNION */
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL4_ADDR(base)   ((base) + (0x410))

/* �Ĵ���˵����MCU��ϵͳ���ƼĴ��������ܰ���MCU SHARE MEM��ַ���á�
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL5_UNION */
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL5_ADDR(base)   ((base) + (0x414))

/* �Ĵ���˵����MCU��ϵͳ���ƼĴ��������ܰ���CM3������ַ�ռ���ʼ��ַ��
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL6_UNION */
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL6_ADDR(base)   ((base) + (0x418))

/* �Ĵ���˵����MCU��ϵͳ���ƼĴ��������ܰ���CM3������ַ�ռ������ַ��
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL7_UNION */
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL7_ADDR(base)   ((base) + (0x41C))

/* �Ĵ���˵����MCU��ϵͳ״̬�Ĵ��������ܰ���MCU״̬�źš�
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT0_UNION */
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT0_ADDR(base)   ((base) + (0x440))

/* �Ĵ���˵����MCU��ϵͳ״̬�Ĵ��������ܰ���������
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT1_UNION */
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT1_ADDR(base)   ((base) + (0x444))

/* �Ĵ���˵����MCU��ϵͳ״̬�Ĵ��������ܰ���MCU״̬�ź�INTERNALSTATE��
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT2_UNION */
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT2_ADDR(base)   ((base) + (0x448))

/* �Ĵ���˵����MCU��ϵͳ״̬�Ĵ��������ܰ���MCU״̬�ź�INTERNALSTATE��
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT3_UNION */
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT3_ADDR(base)   ((base) + (0x44C))

/* �Ĵ���˵����MCU��ϵͳ״̬�Ĵ��������ܰ���MCU״̬�ź�INTERNALSTATE��
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT4_UNION */
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT4_ADDR(base)   ((base) + (0x450))

/* �Ĵ���˵����MCU��ϵͳ״̬�Ĵ��������ܰ���MCU״̬�ź�INTERNALSTATE��
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT5_UNION */
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT5_ADDR(base)   ((base) + (0x454))

/* �Ĵ���˵����MCU��ϵͳ״̬�Ĵ��������ܰ���MCU״̬�ź�INTERNALSTATE��
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT6_UNION */
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT6_ADDR(base)   ((base) + (0x458))

/* �Ĵ���˵����MCU��ϵͳ״̬�Ĵ��������ܰ���MCU״̬�ź�INTERNALSTATE��
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT7_UNION */
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT7_ADDR(base)   ((base) + (0x45C))

/* �Ĵ���˵����ALWAYSON����ʱ��ʹ�ܼĴ���4���Ա���д1��ʹ��SC_PERIPH_CLKSTAT4��Ӧ��ʱ�ӣ�д0��Ӱ��ʱ��ʹ�ܵ�״̬��
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_PERIPH_CLKEN4_UNION */
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_ADDR(base)      ((base) + (0x630))

/* �Ĵ���˵����ALWAYSON����ʱ�ӽ�ֹ�Ĵ���4���Ա���д1����ֹSC_PERIPH_CLKSTAT4��Ӧ��ʱ�ӣ�д0��Ӱ��ʱ��ʹ�ܵ�״̬��
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_UNION */
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_ADDR(base)     ((base) + (0x634))

/* �Ĵ���˵����ALWAYSON����ʱ��״̬�Ĵ���4����SC_PERIPH_CLKEN4��SC_PERIPH_CLKDIS4���ý���״̬�޸ġ�
            ����ʱ�ӿ����ź��辭����CRG�н���ͬ��������ˣ�����ļĴ���ֵ���ӳ���Ӧʱ����ļ������ں��������Ӧʱ��״̬��
            ÿ��Bit���壺
            0��ʱ�ӹرգ�
            1��ʱ�Ӵ򿪡�
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_UNION */
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_ADDR(base)    ((base) + (0x638))

/* �Ĵ���˵����ALWAYSON����ʱ��ʹ�ܼĴ���5���Ա���д1��ʹ��SC_PERIPH_CLKSTAT5��Ӧ��ʱ�ӣ�д0��Ӱ��ʱ��ʹ�ܵ�״̬��
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_PERIPH_CLKEN5_UNION */
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_ADDR(base)      ((base) + (0x63C))

/* �Ĵ���˵����ALWAYSON����ʱ�ӽ�ֹ�Ĵ���5���Ա���д1����ֹSC_PERIPH_CLKSTAT5��Ӧ��ʱ�ӣ�д0��Ӱ��ʱ��ʹ�ܵ�״̬��
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_UNION */
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_ADDR(base)     ((base) + (0x640))

/* �Ĵ���˵����ALWAYSON����ʱ��״̬�Ĵ���5����SC_PERIPH_CLKEN5��SC_PERIPH_CLKDIS5���ý���״̬�޸ġ�
            ����ʱ�ӿ����ź��辭����CRG�н���ͬ��������ˣ�����ļĴ���ֵ���ӳ���Ӧʱ����ļ������ں��������Ӧʱ��״̬��
            ÿ��Bit���壺
            0��ʱ�ӹرգ�
            1��ʱ�Ӵ򿪡�
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_UNION */
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_ADDR(base)    ((base) + (0x644))

/* �Ĵ���˵����ALWAYSON������λʹ�ܼĴ���4������ʹ��SC_PERIPH_RSTSTAT4��λ���Ա���д1����ӦIP���븴λ״̬��д0��Ӱ�츴λ״̬��
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_PERIPH_RSTEN4_UNION */
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_ADDR(base)      ((base) + (0x6F0))

/* �Ĵ���˵����ALWAYSON�����踴λ��ֹ�Ĵ���4�����ڽ�ֹSC_PERIPH_RSTSTAT4��λ���Ա���д1����Ӧ��������λ��д0��Ӱ�츴λʹ�ܵ�״̬��
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_UNION */
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_ADDR(base)     ((base) + (0x6F4))

/* �Ĵ���˵����ALWAYSON�����踴λ״̬�Ĵ���4����SC_PERIPH_RSTEN4��SC_PERIPH_RSTDIS4���ý���״̬�޸ġ��⸴λ�����ź��辭��ͬ��������ˣ�����ļĴ���ֵ���ӳ���Ӧʱ����ļ������ں��������Ӧ�⸴λ״̬��
            ÿ��Bit���壺
            0����λ��ʹ�ܣ�
            1����λʹ�ܡ�
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_UNION */
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_ADDR(base)    ((base) + (0x6F8))

/* �Ĵ���˵����ALWAYSON������λʹ�ܼĴ���5������ʹ��SC_PERIPH_RSTSTAT5��λ���Ա���д1����ӦIP���븴λ״̬��д0��Ӱ�츴λ״̬��
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_PERIPH_RSTEN5_UNION */
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN5_ADDR(base)      ((base) + (0x6FC))

/* �Ĵ���˵����ALWAYSON�����踴λ��ֹ�Ĵ���5�����ڽ�ֹSC_PERIPH_RSTSTAT5��λ���Ա���д1����Ӧ��������λ��д0��Ӱ�츴λʹ�ܵ�״̬��
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_PERIPH_RSTDIS5_UNION */
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS5_ADDR(base)     ((base) + (0x700))

/* �Ĵ���˵����ALWAYSON�����踴λ״̬�Ĵ���5����SC_PERIPH_RSTEN5��SC_PERIPH_RSTDIS5���ý���״̬�޸ġ��⸴λ�����ź��辭��ͬ��������ˣ�����ļĴ���ֵ���ӳ���Ӧʱ����ļ������ں��������Ӧ�⸴λ״̬��
            ÿ��Bit���壺
            0����λ��ʹ�ܣ�
            1����λʹ�ܡ�
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_PERIPH_RSTSTAT5_UNION */
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT5_ADDR(base)    ((base) + (0x704))

/* �Ĵ���˵����������ʱ��ʹ�ܼĴ��������ڿ��Ƹ��������ܵ�ʱ��ʹ�ܡ�����Ӧλд1ʹ��SC_PW_CLK_STAT0��Ӧ��ѹ��ʱ�ӣ�д0��Ӱ�졣�üĴ���ֻ���ϵ縴λʱ����λ��
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_PW_CLKEN0_UNION */
#define SOC_AO_SCTRL_SC_PW_CLKEN0_ADDR(base)          ((base) + (0x800))

/* �Ĵ���˵����������ʱ�ӽ�ֹ�Ĵ��������ڿ��Ƹ��������ܵ�ʱ�ӽ�ֹ������Ӧλд1��ֹSC_PW_CLK_STAT0��Ӧ������ʱ�ӣ�д0��Ӱ�졣�üĴ���ֻ���ϵ縴λʱ����λ��
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_PW_CLKDIS0_UNION */
#define SOC_AO_SCTRL_SC_PW_CLKDIS0_ADDR(base)         ((base) + (0x804))

/* �Ĵ���˵�����µ���ʱ��״̬��ͨ��SC_PW_CLKEN0��SC_PW_CLKDIS0�޸�״̬��
            ÿ��Bit���壺
            0���رգ�
            1���򿪡�
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_PW_CLK_STAT0_UNION */
#define SOC_AO_SCTRL_SC_PW_CLK_STAT0_ADDR(base)       ((base) + (0x808))

/* �Ĵ���˵������������λʹ�ܼĴ��������ڿ��Ƹ��������ܵĸ�λʹ�ܡ�����Ӧλд1ʹ��SC_PW_RST_STAT0��Ӧ��������λ�źţ������븴λ̬����д0��Ӱ�졣�üĴ���ֻ���ϵ縴λʱ����λ��
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_PW_RSTEN0_UNION */
#define SOC_AO_SCTRL_SC_PW_RSTEN0_ADDR(base)          ((base) + (0x810))

/* �Ĵ���˵������������λ��ֹ�Ĵ��������ڿ��Ƹ��������ܵĸ�λ��ֹ������Ӧλд1��ֹSC_PW_RST_STAT0��Ӧ��������λ�źţ����˳���λ̬����д0��Ӱ�졣�üĴ���ֻ���ϵ縴λʱ����λ��
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_PW_RSTDIS0_UNION */
#define SOC_AO_SCTRL_SC_PW_RSTDIS0_ADDR(base)         ((base) + (0x814))

/* �Ĵ���˵�����µ�����λ״̬��ͨ��SC_PW_RSTEN0��SC_PW_RSTDIS0�޸�״̬��
            ÿ��Bit���壺
            0����λ��ʹ�ܣ�
            1����λʹ�ܡ�
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_PW_RST_STAT0_UNION */
#define SOC_AO_SCTRL_SC_PW_RST_STAT0_ADDR(base)       ((base) + (0x818))

/* �Ĵ���˵����������ISOʹ�ܼĴ��������ڿ��Ƹ���������ص�Isolation Cellʹ�ܡ�����Ӧλд1ʹ��SC_PW_ISO_STAT0��Ӧ������IsoLation Cell�����źŸ��ϣ���д0��Ӱ�졣�üĴ���ֻ���ϵ縴λʱ����λ��
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_PW_ISOEN0_UNION */
#define SOC_AO_SCTRL_SC_PW_ISOEN0_ADDR(base)          ((base) + (0x820))

/* �Ĵ���˵����������ISO��ֹ�Ĵ��������ڿ��Ƹ���������ص�Isolation Cell��ֹ������Ӧλд1��ֹSC_PW_ISO_STAT0��Ӧ������IsoLation Cell�����źŲ����ϣ���д0��Ӱ�졣�üĴ���ֻ���ϵ縴λʱ����λ��
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_PW_ISODIS0_UNION */
#define SOC_AO_SCTRL_SC_PW_ISODIS0_ADDR(base)         ((base) + (0x824))

/* �Ĵ���˵�����µ���ISO״̬��ͨ��SC_PW_ISOEN0��SC_PW_ISODIS0�޸�״̬��
            ÿ��Bit���壺
            0��isolation��ʹ�ܣ�
            1��isolationʹ�ܡ�
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_PW_ISO_STAT0_UNION */
#define SOC_AO_SCTRL_SC_PW_ISO_STAT0_ADDR(base)       ((base) + (0x828))

/* �Ĵ���˵������������Դʹ�ܼĴ��������ڿ��Ƹ��������ĵ�Դʹ�ܣ�����Ӧλд1��SC_PW_MTCMOS_STAT0��Ӧ��ѹ���Դ��д0��Ӱ�졣�üĴ�����ֻ���ϵ縴λʱ����λ��
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_PW_MTCMOS_EN0_UNION */
#define SOC_AO_SCTRL_SC_PW_MTCMOS_EN0_ADDR(base)      ((base) + (0x830))

/* �Ĵ���˵������������Դ��ֹ�Ĵ��������ڿ��Ƹ��������ĵ�Դ��ֹ������Ӧλд1�ر�SC_PW_MTCMOS_STAT0��Ӧ��ѹ���Դ��д0��Ӱ�졣�üĴ�����ֻ���ϵ縴λʱ����λ��
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_PW_MTCMOS_DIS0_UNION */
#define SOC_AO_SCTRL_SC_PW_MTCMOS_DIS0_ADDR(base)     ((base) + (0x834))

/* �Ĵ���˵�����µ���MTCMOS����״̬��ͨ��SC_PW_EN0��SC_PW_DIS0�޸�MTCMOS����״̬��
            ÿ��Bit���壺
            0����Դ�رգ�
            1����Դ�򿪡�
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_PW_MTCMOS_STAT0_UNION */
#define SOC_AO_SCTRL_SC_PW_MTCMOS_STAT0_ADDR(base)    ((base) + (0x838))

/* �Ĵ���˵�����µ���MTCMOS״̬��ͨ��SC_PW_EN0��SC_PW_DIS0�޸�MTCMOS����״̬���پ��������������������
            ÿ��Bit���壺
            0����Դ�رգ�
            1����Դ�򿪡�
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_PW_MTCMOS_ACK_STAT0_UNION */
#define SOC_AO_SCTRL_SC_PW_MTCMOS_ACK_STAT0_ADDR(base) ((base) + (0x83C))

/* �Ĵ���˵����ϵͳPOWER״̬�Ĵ���1�����ڼ��ϵͳ������POWER״̬��
            0����Դ�ȶ�������δ�����
            1����Դ�ȶ���������MTCMOS���ⲿ��Դ�ȶ���״̬��
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_PW_MTCMOS_TIMEOUT_STAT0_UNION */
#define SOC_AO_SCTRL_SC_PW_MTCMOS_TIMEOUT_STAT0_ADDR(base) ((base) + (0x840))

/* �Ĵ���˵����ϵͳPOWER״̬0�Ĵ��������ڼ��ϵͳ������POWER״̬��
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_PW_STAT0_UNION */
#define SOC_AO_SCTRL_SC_PW_STAT0_ADDR(base)           ((base) + (0x850))

/* �Ĵ���˵����ϵͳPOWER״̬1�Ĵ�����POWER DOMAIN IDLEACK״̬��
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_PW_STAT1_UNION */
#define SOC_AO_SCTRL_SC_PW_STAT1_ADDR(base)           ((base) + (0x854))

/* �Ĵ���˵����ϵͳ״̬�Ĵ���1�����ڼ��ϵͳ��״̬������λ����JTAGģʽ��nand_boot_en��efuse_hw_rd_finish��usim_hpd_sta��ϵͳ״̬��ѯ��
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_SYSTEST_STAT_UNION */
#define SOC_AO_SCTRL_SC_SYSTEST_STAT_ADDR(base)       ((base) + (0x880))

/* �Ĵ���˵����64bit�����������ĵ�32bit��SLICERl_CNT[31:0]��32KHz�ο�ʱ�ӡ�
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_SYSTEST_SLICER_CNT0_UNION */
#define SOC_AO_SCTRL_SC_SYSTEST_SLICER_CNT0_ADDR(base) ((base) + (0x890))

/* �Ĵ���˵����64bit�����������ĸ�32bit��SLICERl_CNT[63:32]��32KHz�ο�ʱ�ӡ�
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_SYSTEST_SLICER_CNT1_UNION */
#define SOC_AO_SCTRL_SC_SYSTEST_SLICER_CNT1_ADDR(base) ((base) + (0x894))

/* �Ĵ���˵�����͹��Ŀ��ƼĴ���1�����ܰ�����������������DOMAIN IDLE����
            [31:16]��ÿһbit˳���Ӧbit15��bit0������bit31��16��bitд1��ͬʱ������bit15��0������Ч����bit31��16��bitд0ʱ������bit15��0���ֲ��䣻
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_PW_CTRL1_UNION */
#define SOC_AO_SCTRL_SC_PW_CTRL1_ADDR(base)           ((base) + (0x8C8))

/* �Ĵ���˵�����͹��Ŀ��ƼĴ���0�����ܰ�������IO retention��ddr io retention�������ſأ�ipc_ns��ipc_s�Զ��ſأ�������������ơ�
            [31:16]��ÿһbit˳���Ӧbit15��bit0������bit31��16��bitд1��ͬʱ������bit15��0������Ч����bit31��16��bitд0ʱ������bit15��0���ֲ��䣻
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_PW_CTRL_UNION */
#define SOC_AO_SCTRL_SC_PW_CTRL_ADDR(base)            ((base) + (0x8CC))

/* �Ĵ���˵����MCPU˯�߻���ͶƱʹ�ܼĴ���0���Ա���д1������ͶƱ״̬��д0��Ӱ��ͶƱ״̬��
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_MCPU_VOTEEN_UNION */
#define SOC_AO_SCTRL_SC_MCPU_VOTEEN_ADDR(base)        ((base) + (0x8D0))

/* �Ĵ���˵����MCPU˯�߻���ͶƱ��ֹ�Ĵ���0���Ա���д1�����ͶƱ״̬��д0��Ӱ��ͶƱʹ�ܵ�״̬��
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_MCPU_VOTEDIS_UNION */
#define SOC_AO_SCTRL_SC_MCPU_VOTEDIS_ADDR(base)       ((base) + (0x8D4))

/* �Ĵ���˵����MCPU˯�߻���ͶƱ״̬�Ĵ���0�����ڻض���ͶƱ��״̬��1Ϊ��ͶƱ״̬��0Ϊ��ͶƱ״̬��
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_MCPU_VOTESTAT_UNION */
#define SOC_AO_SCTRL_SC_MCPU_VOTESTAT_ADDR(base)      ((base) + (0x8D8))

/* �Ĵ���˵����MCPU˯�߻���ͶƱ���μĴ���0���Ա���д1����Ӧȡ�����Σ�д0�����жϡ�
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_MCPU_VOTE_MSK0_UNION */
#define SOC_AO_SCTRL_SC_MCPU_VOTE_MSK0_ADDR(base)     ((base) + (0x8E0))

/* �Ĵ���˵����MCPU˯�߻���ͶƱ���μĴ���1���Ա���д1����Ӧȡ�����Σ�д0�����жϡ�
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_MCPU_VOTE_MSK1_UNION */
#define SOC_AO_SCTRL_SC_MCPU_VOTE_MSK1_ADDR(base)     ((base) + (0x8E4))

/* �Ĵ���˵����MCPU˯��ͶƱ���κ�״̬�Ĵ���0�����ڻض���ͶƱ��״̬��1ΪͶƱ��0Ϊ��ͶƱ״̬��
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_MCPU_VOTESTAT0_MSK_UNION */
#define SOC_AO_SCTRL_SC_MCPU_VOTESTAT0_MSK_ADDR(base) ((base) + (0x8E8))

/* �Ĵ���˵����MCPU˯�߻���ͶƱ���κ�״̬�Ĵ���1�����ڻض���ͶƱ��״̬��1ΪͶƱ��0Ϊ��ͶƱ״̬��
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_MCPU_VOTESTAT1_MSK_UNION */
#define SOC_AO_SCTRL_SC_MCPU_VOTESTAT1_MSK_ADDR(base) ((base) + (0x8EC))

/* �Ĵ���˵����PERI˯�߻���ͶƱʹ�ܼĴ���0���Ա���д1������ͶƱ״̬��д0��Ӱ��ͶƱ״̬��
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_PERI_VOTEEN_UNION */
#define SOC_AO_SCTRL_SC_PERI_VOTEEN_ADDR(base)        ((base) + (0x8F0))

/* �Ĵ���˵����PERI˯�߻���ͶƱ��ֹ�Ĵ���0���Ա���д1�����ͶƱ״̬��д0��Ӱ��ͶƱʹ�ܵ�״̬��
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_PERI_VOTEDIS_UNION */
#define SOC_AO_SCTRL_SC_PERI_VOTEDIS_ADDR(base)       ((base) + (0x8F4))

/* �Ĵ���˵����PERI˯�߻���ͶƱ״̬�Ĵ���0�����ڻض���ͶƱ��״̬��1Ϊ��ͶƱ״̬��0Ϊ��ͶƱ״̬��
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_PERI_VOTESTAT_UNION */
#define SOC_AO_SCTRL_SC_PERI_VOTESTAT_ADDR(base)      ((base) + (0x8F8))

/* �Ĵ���˵����PERI˯�߻���ͶƱ���μĴ���0���Ա���д1����Ӧȡ�����Σ�д0�����жϡ�
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_PERI_VOTE_MSK0_UNION */
#define SOC_AO_SCTRL_SC_PERI_VOTE_MSK0_ADDR(base)     ((base) + (0x900))

/* �Ĵ���˵����PERI˯�߻���ͶƱ���μĴ���1���Ա���д1����Ӧȡ�����Σ�д0�����жϡ�
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_PERI_VOTE_MSK1_UNION */
#define SOC_AO_SCTRL_SC_PERI_VOTE_MSK1_ADDR(base)     ((base) + (0x904))

/* �Ĵ���˵����PERI˯��ͶƱ���κ�״̬�Ĵ���0�����ڻض���ͶƱ��״̬��1ΪͶƱ��0Ϊ��ͶƱ״̬��
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_PERI_VOTESTAT0_MSK_UNION */
#define SOC_AO_SCTRL_SC_PERI_VOTESTAT0_MSK_ADDR(base) ((base) + (0x908))

/* �Ĵ���˵����PERI˯�߻���ͶƱ���κ�״̬�Ĵ���1�����ڻض���ͶƱ��״̬��1ΪͶƱ��0Ϊ��ͶƱ״̬��
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_PERI_VOTESTAT1_MSK_UNION */
#define SOC_AO_SCTRL_SC_PERI_VOTESTAT1_MSK_ADDR(base) ((base) + (0x90C))

/* �Ĵ���˵����ACPU˯�߻���ͶƱʹ�ܼĴ���0���Ա���д1������ͶƱ״̬��д0��Ӱ��ͶƱ״̬��
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_ACPU_VOTEEN_UNION */
#define SOC_AO_SCTRL_SC_ACPU_VOTEEN_ADDR(base)        ((base) + (0x910))

/* �Ĵ���˵����ACPU˯�߻���ͶƱ��ֹ�Ĵ���0���Ա���д1�����ͶƱ״̬��д0��Ӱ��ͶƱʹ�ܵ�״̬��
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_ACPU_VOTEDIS_UNION */
#define SOC_AO_SCTRL_SC_ACPU_VOTEDIS_ADDR(base)       ((base) + (0x914))

/* �Ĵ���˵����ACPU˯�߻���ͶƱ״̬�Ĵ���0�����ڻض���ͶƱ��״̬��1Ϊ��ͶƱ״̬��0Ϊ��ͶƱ״̬��
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_ACPU_VOTESTAT_UNION */
#define SOC_AO_SCTRL_SC_ACPU_VOTESTAT_ADDR(base)      ((base) + (0x918))

/* �Ĵ���˵����ACPU˯�߻���ͶƱ���μĴ���0���Ա���д1����Ӧȡ�����Σ�д0�����жϡ�
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_ACPU_VOTE_MSK0_UNION */
#define SOC_AO_SCTRL_SC_ACPU_VOTE_MSK0_ADDR(base)     ((base) + (0x920))

/* �Ĵ���˵����ACPU˯�߻���ͶƱ���μĴ���1���Ա���д1����Ӧȡ�����Σ�д0�����жϡ�
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_ACPU_VOTE_MSK1_UNION */
#define SOC_AO_SCTRL_SC_ACPU_VOTE_MSK1_ADDR(base)     ((base) + (0x924))

/* �Ĵ���˵����ACPU˯��ͶƱ���κ�״̬�Ĵ���0�����ڻض���ͶƱ��״̬��1ΪͶƱ��0Ϊ��ͶƱ״̬��
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_ACPU_VOTESTAT0_MSK_UNION */
#define SOC_AO_SCTRL_SC_ACPU_VOTESTAT0_MSK_ADDR(base) ((base) + (0x928))

/* �Ĵ���˵����ACPU˯�߻���ͶƱ���κ�״̬�Ĵ���1�����ڻض���ͶƱ��״̬��1ΪͶƱ��0Ϊ��ͶƱ״̬��
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_ACPU_VOTESTAT1_MSK_UNION */
#define SOC_AO_SCTRL_SC_ACPU_VOTESTAT1_MSK_ADDR(base) ((base) + (0x92C))

/* �Ĵ���˵����MCUͶƱ�����Ĵ���0���Ա���д1����Ӧ����ͶƱ״̬��д0��Ӱ��ͶƱ״̬��
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_MCU_VOTEEN_UNION */
#define SOC_AO_SCTRL_SC_MCU_VOTEEN_ADDR(base)         ((base) + (0x930))

/* �Ĵ���˵����MCUͶƱ��ֹ�Ĵ���0���Ա���д1�����ͶƱ״̬��д0��Ӱ��ͶƱʹ�ܵ�״̬��
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_MCU_VOTEDIS_UNION */
#define SOC_AO_SCTRL_SC_MCU_VOTEDIS_ADDR(base)        ((base) + (0x934))

/* �Ĵ���˵����MCUͶƱ״̬�Ĵ���0�����ڻض���ͶƱ��״̬��1Ϊ��ͶƱ״̬��0Ϊ��ͶƱ״̬��
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_MCU_VOTESTAT_UNION */
#define SOC_AO_SCTRL_SC_MCU_VOTESTAT_ADDR(base)       ((base) + (0x938))

/* �Ĵ���˵����MCUͶƱ�Ĵ���0�����μĴ���0���Ա���д1����Ӧȡ�����Σ�д0�����жϡ�
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_MCU_VOTE_MSK0_UNION */
#define SOC_AO_SCTRL_SC_MCU_VOTE_MSK0_ADDR(base)      ((base) + (0x940))

/* �Ĵ���˵����MCUͶƱ�Ĵ���0�����μĴ���1���Ա���д1����Ӧȡ�����Σ�д0�����жϡ�
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_MCU_VOTE_MSK1_UNION */
#define SOC_AO_SCTRL_SC_MCU_VOTE_MSK1_ADDR(base)      ((base) + (0x944))

/* �Ĵ���˵����MCUͶƱ�Ĵ���0���κ�״̬�Ĵ���0�����ڻض���ͶƱ��״̬��1Ϊ��ͶƱ״̬��0Ϊ��ͶƱ״̬��
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_MCU_VOTESTAT0_MSK_UNION */
#define SOC_AO_SCTRL_SC_MCU_VOTESTAT0_MSK_ADDR(base)  ((base) + (0x948))

/* �Ĵ���˵����MCUͶƱ�Ĵ���0���κ�״̬�Ĵ���1�����ڻض���ͶƱ��״̬��1Ϊ��ͶƱ״̬��0Ϊ��ͶƱ״̬��
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_MCU_VOTESTAT1_MSK_UNION */
#define SOC_AO_SCTRL_SC_MCU_VOTESTAT1_MSK_ADDR(base)  ((base) + (0x94C))

/* �Ĵ���˵����MCUͶƱ�����Ĵ���1���Ա���д1����Ӧ����ͶƱ״̬��д0��Ӱ��ͶƱ״̬��
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_MCU_VOTE1EN_UNION */
#define SOC_AO_SCTRL_SC_MCU_VOTE1EN_ADDR(base)        ((base) + (0x960))

/* �Ĵ���˵����MCUͶƱ��ֹ�Ĵ���1���Ա���д1�����ͶƱ״̬��д0��Ӱ��ͶƱʹ�ܵ�״̬��
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_MCU_VOTE1DIS_UNION */
#define SOC_AO_SCTRL_SC_MCU_VOTE1DIS_ADDR(base)       ((base) + (0x964))

/* �Ĵ���˵����MCUͶƱ״̬�Ĵ���1�����ڻض���ͶƱ��״̬��1Ϊ��ͶƱ״̬��0Ϊ��ͶƱ״̬��
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_MCU_VOTE1STAT_UNION */
#define SOC_AO_SCTRL_SC_MCU_VOTE1STAT_ADDR(base)      ((base) + (0x968))

/* �Ĵ���˵����MCUͶƱ�Ĵ���1�����μĴ���0���Ա���д1����Ӧȡ�����Σ�д0�����жϡ�
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_MCU_VOTE1_MSK0_UNION */
#define SOC_AO_SCTRL_SC_MCU_VOTE1_MSK0_ADDR(base)     ((base) + (0x970))

/* �Ĵ���˵����MCUͶƱ�Ĵ���1�����μĴ���1���Ա���д1����Ӧȡ�����Σ�д0�����жϡ�
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_MCU_VOTE1_MSK1_UNION */
#define SOC_AO_SCTRL_SC_MCU_VOTE1_MSK1_ADDR(base)     ((base) + (0x974))

/* �Ĵ���˵����MCUͶƱ�Ĵ���1���κ�״̬�Ĵ���0��������SYSNOC 150MHz����DFS���ơ����ڻض���ͶƱ��״̬��1Ϊ��ͶƱ״̬��0Ϊ��ͶƱ״̬��
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_MCU_VOTE1STAT0_MSK_UNION */
#define SOC_AO_SCTRL_SC_MCU_VOTE1STAT0_MSK_ADDR(base) ((base) + (0x978))

/* �Ĵ���˵����MCUͶƱ�Ĵ���1���κ�״̬�Ĵ���1�����ڻض���ͶƱ��״̬��1Ϊ��ͶƱ״̬��0Ϊ��ͶƱ״̬��
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_MCU_VOTE1STAT1_MSK_UNION */
#define SOC_AO_SCTRL_SC_MCU_VOTE1STAT1_MSK_ADDR(base) ((base) + (0x97C))

/* �Ĵ���˵����MCUͶƱ�����Ĵ���2���Ա���д1����Ӧ����ͶƱ״̬��д0��Ӱ��ͶƱ״̬��
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_MCU_VOTE2EN_UNION */
#define SOC_AO_SCTRL_SC_MCU_VOTE2EN_ADDR(base)        ((base) + (0x980))

/* �Ĵ���˵����MCUͶƱ��ֹ�Ĵ���2���Ա���д1�����ͶƱ״̬��д0��Ӱ��ͶƱʹ�ܵ�״̬��
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_MCU_VOTE2DIS_UNION */
#define SOC_AO_SCTRL_SC_MCU_VOTE2DIS_ADDR(base)       ((base) + (0x984))

/* �Ĵ���˵����MCUͶƱ״̬�Ĵ���2�����ڻض���ͶƱ��״̬��1Ϊ��ͶƱ״̬��0Ϊ��ͶƱ״̬��
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_MCU_VOTE2STAT_UNION */
#define SOC_AO_SCTRL_SC_MCU_VOTE2STAT_ADDR(base)      ((base) + (0x988))

/* �Ĵ���˵����MCUͶƱ�Ĵ���2�����μĴ���0���Ա���д1����Ӧȡ�����Σ�д0�����жϡ�
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_MCU_VOTE2_MSK0_UNION */
#define SOC_AO_SCTRL_SC_MCU_VOTE2_MSK0_ADDR(base)     ((base) + (0x990))

/* �Ĵ���˵����MCUͶƱ�Ĵ���2�����μĴ���1���Ա���д1����Ӧȡ�����Σ�д0�����жϡ�
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_MCU_VOTE2_MSK1_UNION */
#define SOC_AO_SCTRL_SC_MCU_VOTE2_MSK1_ADDR(base)     ((base) + (0x994))

/* �Ĵ���˵����MCUͶƱ�Ĵ���2���κ�״̬�Ĵ���0��������SYSNOC/CFGBUS/PERI_DMA BUS����100MHz����DFS���ơ����ڻض���ͶƱ��״̬��1Ϊ��ͶƱ״̬��0Ϊ��ͶƱ״̬��
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_MCU_VOTE2STAT0_MSK_UNION */
#define SOC_AO_SCTRL_SC_MCU_VOTE2STAT0_MSK_ADDR(base) ((base) + (0x998))

/* �Ĵ���˵����MCUͶƱ�Ĵ���2���κ�״̬�Ĵ���1�����ڻض���ͶƱ��״̬��1Ϊ��ͶƱ״̬��0Ϊ��ͶƱ״̬��
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_MCU_VOTE2STAT1_MSK_UNION */
#define SOC_AO_SCTRL_SC_MCU_VOTE2STAT1_MSK_ADDR(base) ((base) + (0x99C))

/* �Ĵ���˵����ͶƱ���ƼĴ��������ܰ���ͶƱ���ﻥ�⡣
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_VOTE_CTRL_UNION */
#define SOC_AO_SCTRL_SC_VOTE_CTRL_ADDR(base)          ((base) + (0x9A0))

/* �Ĵ���˵����ͶƱ���ƼĴ��������ܰ���ͶƱ���ﻥ��״̬��
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_VOTE_STAT_UNION */
#define SOC_AO_SCTRL_SC_VOTE_STAT_ADDR(base)          ((base) + (0x9A4))

/* �Ĵ���˵����ECO �汾�żĴ�����
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_ECONUM_UNION */
#define SOC_AO_SCTRL_SC_ECONUM_ADDR(base)             ((base) + (0xF00))

/* �Ĵ���˵����CHIPID�Ĵ�����
   λ����UNION�ṹ:  SOC_AO_SCTRL_SCCHIPID_UNION */
#define SOC_AO_SCTRL_SCCHIPID_ADDR(base)              ((base) + (0xF10))

/* �Ĵ���˵����SOCID�Ĵ�����
   λ����UNION�ṹ:  SOC_AO_SCTRL_SCSOCID_UNION */
#define SOC_AO_SCTRL_SCSOCID_ADDR(base)               ((base) + (0xF1C))

/* �Ĵ���˵��������ID�Ĵ���0��FPGA�汾ʹ�ã��ɺ궨��ȷ����ֵ
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_SOC_FPGA_RTL_DEF_UNION */
#define SOC_AO_SCTRL_SC_SOC_FPGA_RTL_DEF_ADDR(base)   ((base) + (0xFE0))

/* �Ĵ���˵��������ID�Ĵ���1��FPGA�汾ʹ�ã��ɺ궨��ȷ����ֵ
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_SOC_FPGA_PR_DEF_UNION */
#define SOC_AO_SCTRL_SC_SOC_FPGA_PR_DEF_ADDR(base)    ((base) + (0xFE4))

/* �Ĵ���˵��������ID�Ĵ���2��FPGA�汾ʹ�ã��ɺ궨��ȷ����ֵ
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_SOC_FPGA_RES_DEF0_UNION */
#define SOC_AO_SCTRL_SC_SOC_FPGA_RES_DEF0_ADDR(base)  ((base) + (0xFE8))

/* �Ĵ���˵��������ID�Ĵ���3��FPGA�汾ʹ�ã��ɺ궨��ȷ����ֵ
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_SOC_FPGA_RES_DEF1_UNION */
#define SOC_AO_SCTRL_SC_SOC_FPGA_RES_DEF1_ADDR(base)  ((base) + (0xFEC))

/* �Ĵ���˵����������ƼĴ��������ڶ�tcxo0������п��ơ�ϵͳ��SLOW��NORMALģʽ�£�tcxo���뱻ʹ�ܡ�tcxo ABB�ȶ��ӳ����á�
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_XTAL_CTRL0_UNION */
#define SOC_AO_SCTRL_SC_XTAL_CTRL0_ADDR(base)         ((base) + (0x1028))

/* �Ĵ���˵����������ƼĴ��������ڶ�tcxo1������п��ơ�
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_XTAL_CTRL1_UNION */
#define SOC_AO_SCTRL_SC_XTAL_CTRL1_ADDR(base)         ((base) + (0x102c))

/* �Ĵ���˵����������ƼĴ�����tcxo0 PMU��ʹ�ܣ����ڵ���ģʽ��ϵͳ����SLEEP��Ҫ��tcxo�ĳ���ʹ�á�
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_XTAL_CTRL3_UNION */
#define SOC_AO_SCTRL_SC_XTAL_CTRL3_ADDR(base)         ((base) + (0x1034))

/* �Ĵ���˵����������ƼĴ�����tcxo0�µ����̣�tcxo0��Դ�رյ�tcxo0 ABB��ʹ�ܹر��ӳ�ʱ�����á�
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_XTAL_CTRL5_UNION */
#define SOC_AO_SCTRL_SC_XTAL_CTRL5_ADDR(base)         ((base) + (0x103C))

/* �Ĵ���˵��������tcxo0״̬�Ĵ�����
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_XTAL_STAT0_UNION */
#define SOC_AO_SCTRL_SC_XTAL_STAT0_ADDR(base)         ((base) + (0x1060))

/* �Ĵ���˵��������tcxo1״̬�Ĵ�����
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_XTAL_STAT1_UNION */
#define SOC_AO_SCTRL_SC_XTAL_STAT1_ADDR(base)         ((base) + (0x1070))

/* �Ĵ���˵����EFUSE_CHIPID״̬�Ĵ�����
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_EFUSE_CHIPID0_UNION */
#define SOC_AO_SCTRL_SC_EFUSE_CHIPID0_ADDR(base)      ((base) + (0x1080))

/* �Ĵ���˵����EFUSE_CHIPID״̬�Ĵ�����
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_EFUSE_CHIPID1_UNION */
#define SOC_AO_SCTRL_SC_EFUSE_CHIPID1_ADDR(base)      ((base) + (0x1084))

/* �Ĵ���˵����EFUSE_SYS_CTRL״̬�Ĵ�����
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_EFUSE_SYS_CTRL_UNION */
#define SOC_AO_SCTRL_SC_EFUSE_SYS_CTRL_ADDR(base)     ((base) + (0x1088))

/* �Ĵ���˵������ȫDEBUG���ƼĴ���1�����ڿ���ACPU��CCPU��MCU��CSSYS��HIFI��BBE���ԡ�DJTAG���ܣ���֤SC_DEBUG_CTRL1�Ĵ�����ֵ����DFT���ƣ����ͨ����ȫDFTʵ�֣����˼Ĵ���ֻ��д��1�Ρ�
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_DEBUG_CTRL1_UNION */
#define SOC_AO_SCTRL_SC_DEBUG_CTRL1_ADDR(base)        ((base) + (0x1288))

/* �Ĵ���˵������ȫDEBUG״̬�Ĵ�����
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_DBG_STAT_UNION */
#define SOC_AO_SCTRL_SC_DBG_STAT_ADDR(base)           ((base) + (0x12B4))

/* �Ĵ���˵������ȫDEBUG����Ĵ������˼Ĵ�����д��3�Σ��˼Ĵ������ɶ���
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_ARM_DBG_KEY0_UNION */
#define SOC_AO_SCTRL_SC_ARM_DBG_KEY0_ADDR(base)       ((base) + (0x12B8))

/* �Ĵ���˵���������Ĵ������ṩ������Ժ͵���ʹ�á��Ĵ�����ֵ����ϵͳ��λ��оƬ�ϵ�Ĭ��ֵΪx��
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_RESERVED31_UNION */
#define SOC_AO_SCTRL_SC_RESERVED31_ADDR(base)         ((base) + (0x13A0))

/* �Ĵ���˵���������Ĵ������ṩ������Ժ͵���ʹ�á��Ĵ�����ֵ����ϵͳ��λ��оƬ�ϵ�Ĭ��ֵΪx��
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_RESERVED32_UNION */
#define SOC_AO_SCTRL_SC_RESERVED32_ADDR(base)         ((base) + (0x13A4))

/* �Ĵ���˵���������Ĵ������ṩ������Ժ͵���ʹ�á��Ĵ�����ֵ����ϵͳ��λ��оƬ�ϵ�Ĭ��ֵΪx��
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_RESERVED33_UNION */
#define SOC_AO_SCTRL_SC_RESERVED33_ADDR(base)         ((base) + (0x13A8))

/* �Ĵ���˵���������Ĵ������ṩ������Ժ͵���ʹ�á��Ĵ�����ֵ����ϵͳ��λ��оƬ�ϵ�Ĭ��ֵΪx��
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_RESERVED34_UNION */
#define SOC_AO_SCTRL_SC_RESERVED34_ADDR(base)         ((base) + (0x13AC))

/* �Ĵ���˵���������Ĵ������ṩ������Ժ͵���ʹ�á��Ĵ�����ֵ����ϵͳ��λ��оƬ�ϵ�Ĭ��ֵΪx��
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_RESERVED35_UNION */
#define SOC_AO_SCTRL_SC_RESERVED35_ADDR(base)         ((base) + (0x13B0))

/* �Ĵ���˵���������Ĵ������ṩ������Ժ͵���ʹ�á��Ĵ�����ֵ����ϵͳ��λ��оƬ�ϵ�Ĭ��ֵΪx��
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_RESERVED36_UNION */
#define SOC_AO_SCTRL_SC_RESERVED36_ADDR(base)         ((base) + (0x13B4))

/* �Ĵ���˵���������Ĵ������ṩ������Ժ͵���ʹ�á��Ĵ�����ֵ����ϵͳ��λ��оƬ�ϵ�Ĭ��ֵΪx��
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_RESERVED37_UNION */
#define SOC_AO_SCTRL_SC_RESERVED37_ADDR(base)         ((base) + (0x13B8))

/* �Ĵ���˵���������Ĵ������ṩ������Ժ͵���ʹ�á��Ĵ�����ֵ����ϵͳ��λ��оƬ�ϵ�Ĭ��ֵΪx��
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_RESERVED38_UNION */
#define SOC_AO_SCTRL_SC_RESERVED38_ADDR(base)         ((base) + (0x13BC))

/* �Ĵ���˵����ALWAYSON���ƼĴ��������ܰ���CLKSYS_ON��Ƶ�����á�
            [31:16]��ÿһbit˳���Ӧbit15��bit0������bit31��16��bitд1��ͬʱ������bit15��0������Ч����bit31��16��bitд0ʱ������bit15��0���ֲ��䣻
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL0_UNION */
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL0_ADDR(base) ((base) + (0x1480))

/* �Ĵ���˵����ALWAYSON���ƼĴ��������ܰ���TCXOռ�ձ����ã�DCXO��Ƶ���ơ�
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL1_UNION */
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL1_ADDR(base) ((base) + (0x1484))

/* �Ĵ���˵����ALWAYSON���ƼĴ��������ܰ���PDM��Ƶ���á�
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL2_UNION */
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL2_ADDR(base) ((base) + (0x1488))

/* �Ĵ���˵����ALWAYSON���ƼĴ���������32Kʱ��ѡ���RTC��Ƶ���á�
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL3_UNION */
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL3_ADDR(base) ((base) + (0x148C))

/* �Ĵ���˵����ALWAYSON���ƼĴ��������ܰ���CLK MONITOR���ơ�
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL10_UNION */
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL10_ADDR(base) ((base) + (0x14A8))

/* �Ĵ���˵����ALWAYSON���ƼĴ��������ܰ���CLK MONITOR����,IO RET��
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL11_UNION */
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL11_ADDR(base) ((base) + (0x14AC))

/* �Ĵ���˵����ALWAYSON״̬�Ĵ��������ܰ���CLK MONITOR���ơ�
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT0_UNION */
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT0_ADDR(base) ((base) + (0x14C0))

/* �Ĵ���˵����ALWAYSON״̬�Ĵ���������BBP DRX��ȡ�
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT1_UNION */
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT1_ADDR(base) ((base) + (0x14C4))

/* �Ĵ���˵����ALWAYSON״̬�Ĵ��������ܰ���usb chgdet_sts��datcondet_sts״̬��
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT2_UNION */
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT2_ADDR(base) ((base) + (0x14C8))

/* �Ĵ���˵����ALWAYSON״̬�Ĵ��������ܱ�����
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT3_UNION */
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT3_ADDR(base) ((base) + (0x14CC))

/* �Ĵ���˵������������Դ�ȶ�������0�Ĵ���������ָʾ����������Դ�������ѹ�ȶ������ʱ�䡣
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_PWUP_TIME0_UNION */
#define SOC_AO_SCTRL_SC_PWUP_TIME0_ADDR(base)         ((base) + (0x1880))

/* �Ĵ���˵������������Դ�ȶ�������1�Ĵ���������ָʾ����������Դ�������ѹ�ȶ������ʱ�䡣
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_PWUP_TIME1_UNION */
#define SOC_AO_SCTRL_SC_PWUP_TIME1_ADDR(base)         ((base) + (0x1884))

/* �Ĵ���˵������������Դ�ȶ�������2�Ĵ���������ָʾ����������Դ�������ѹ�ȶ������ʱ�䡣
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_PWUP_TIME2_UNION */
#define SOC_AO_SCTRL_SC_PWUP_TIME2_ADDR(base)         ((base) + (0x1888))

/* �Ĵ���˵������������Դ�ȶ�������3�Ĵ���������ָʾ����������Դ�������ѹ�ȶ������ʱ�䡣
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_PWUP_TIME3_UNION */
#define SOC_AO_SCTRL_SC_PWUP_TIME3_ADDR(base)         ((base) + (0x188C))

/* �Ĵ���˵������������Դ�ȶ�������4�Ĵ���������ָʾ����������Դ�������ѹ�ȶ������ʱ�䡣
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_PWUP_TIME4_UNION */
#define SOC_AO_SCTRL_SC_PWUP_TIME4_ADDR(base)         ((base) + (0x1890))

/* �Ĵ���˵������������Դ�ȶ�������5�Ĵ���������ָʾ����������Դ�������ѹ�ȶ������ʱ�䡣
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_PWUP_TIME5_UNION */
#define SOC_AO_SCTRL_SC_PWUP_TIME5_ADDR(base)         ((base) + (0x1894))

/* �Ĵ���˵������������Դ�ȶ�������6�Ĵ���������ָʾ����������Դ�������ѹ�ȶ������ʱ�䡣
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_PWUP_TIME6_UNION */
#define SOC_AO_SCTRL_SC_PWUP_TIME6_ADDR(base)         ((base) + (0x1898))

/* �Ĵ���˵������������Դ�ȶ�������7�Ĵ���������ָʾ����������Դ�������ѹ�ȶ������ʱ�䡣
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_PWUP_TIME7_UNION */
#define SOC_AO_SCTRL_SC_PWUP_TIME7_ADDR(base)         ((base) + (0x189C))

/* �Ĵ���˵������ȫ���ƼĴ���������AO_SC�ļĴ���BIT��ȫ���ʡ�
   λ����UNION�ṹ:  SOC_AO_SCTRL_SC_SECURITY_CTRL1_UNION */
#define SOC_AO_SCTRL_SC_SECURITY_CTRL1_ADDR(base)     ((base) + (0x1C04))





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
 �ṹ��    : SOC_AO_SCTRL_SC_SYS_CTRL0_UNION
 �ṹ˵��  : SC_SYS_CTRL0 �Ĵ����ṹ���塣��ַƫ����:0x000����ֵ:0x00000002�����:32
 �Ĵ���˵��: ϵͳ���ƼĴ���0�����ڶ���ϵͳģʽ���á�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  modectrl0_sftcfg : 3;  /* bit[0-2] : ����ϵͳ�����Ĺ���ģʽ��ϵͳ��SLEEP����ʱ�����ʹ���ж���Ӧģʽ����˼Ĵ�����Ӳ�����ƣ��жϻ��Ѻ���Զ��л���SLOW��
                                                           000��SLEEP��
                                                           001��DOZE��
                                                           010��SLOW��
                                                           100��NORMAL�� */
        unsigned int  reserved         : 29; /* bit[3-31]: reserved */
    } reg;
} SOC_AO_SCTRL_SC_SYS_CTRL0_UNION;
#endif
#define SOC_AO_SCTRL_SC_SYS_CTRL0_modectrl0_sftcfg_START  (0)
#define SOC_AO_SCTRL_SC_SYS_CTRL0_modectrl0_sftcfg_END    (2)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_SYS_CTRL1_UNION
 �ṹ˵��  : SC_SYS_CTRL1 �Ĵ����ṹ���塣��ַƫ����:0x004����ֵ:0x00000000�����:32
 �Ĵ���˵��: ϵͳ���ƼĴ���1�����ܰ���MCUʱ���ſء�����DFSӲ�����ơ�MCU WDG0 RSTѡ��ACPU WDG RSTѡ��ACPU REMAP��eFUSEC REMAP��USIM_HPD��EXT_PLL���á�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  aarm_wd_rst_cfg             : 1;  /* bit[0] : ACPU wdg��λ�Ƿ�����ȫ�ָ�λ
                                                                    1'b0��������ȫ�ָ�λ��
                                                                    1'b1������ȫ�ָ�λ�� */
        unsigned int  remap_sram_aarm             : 1;  /* bit[1] : ָʾACPU��ַ�Ƿ�remap��sram����sram������
                                                                    0������sram������
                                                                    1����sram������ */
        unsigned int  efusec_remap                : 1;  /* bit[2] : ָʾefusec��ȡ��ַremap����
                                                                    0����efuse��ȡ��
                                                                    1���Ӿ����ȡ�� */
        unsigned int  ext_pll_sel                 : 1;  /* bit[3] : external pll sel
                                                                    0��internal pll sel��
                                                                    1��external pll sel
                                                                    Note:This is a debug function bit and can only be configured in SLOW sysmode state�� */
        unsigned int  mcu_wdg0_rstmcu_cfg         : 1;  /* bit[4] : MCU Watchdog0��λ�����Ƿ�����Ӳ���Զ���λMCU��ϵͳѡ��
                                                                    0��MCU Watchdog0��λ��������Ӳ���Զ���λMCU��ϵͳ��
                                                                    1��MCU Watchdog0��λ��������Ӳ���Զ���λMCU��ϵͳ�� */
        unsigned int  reserved_0                  : 1;  /* bit[5] : reserved */
        unsigned int  usim0_hpd_de_bounce_cfg     : 1;  /* bit[6] : usim0_hpd ����ȥ������
                                                                    0����ȥ����
                                                                    1:150usȥ���� */
        unsigned int  usim0_hpd_oe_cfg            : 1;  /* bit[7] : usim0 �˿�����
                                                                    0��SIM�����в����γ�����ʱ��SIM����CLK��RST��DATA����������ƣ�
                                                                    1:SIM�����в����γ�����ʱ��SIM��CLK��RST��DATA����Ϊ������衣 */
        unsigned int  usim1_hpd_de_bounce_cfg     : 1;  /* bit[8] : usim1_hpd ����ȥ������
                                                                    0����ȥ����
                                                                    1:150usȥ���� */
        unsigned int  usim1_hpd_oe_cfg            : 1;  /* bit[9] : usim1 �˿�����
                                                                    0��SIM�����в����γ�����ʱ��SIM����CLK��RST��DATA����������ƣ�
                                                                    1:SIM�����в����γ�����ʱ��SIM��CLK��RST��DATA����Ϊ������衣 */
        unsigned int  bus_dfs_fore_hd_cfg         : 1;  /* bit[10]: ʹ���µ�����SYSNOC/CFGBUS/PERI_DMA BUS����100MHz����DFS��Ӳ��ͶƱ״̬ȷ����
                                                                    0���������ͨ���޸����߷�Ƶ���޸�����Ƶ�ʣ�
                                                                    1��������DFSͶƱ�Ĵ�����SC_MCU_VOTE2STAT���ڷ�ȫ0�£�����޷�ͨ���޸����߷�Ƶ���޸�����Ƶ�ʣ�SC_MCU_VOTE2STAT����ȫ0�£��������ͨ���޸����߷�Ƶ���޸�����Ƶ�ʡ� */
        unsigned int  bus_dfs_fore_hd_cfg1        : 1;  /* bit[11]: ʹ���µ�����SYSNOC 150MHz����DFS��Ӳ��ͶƱ״̬ȷ����
                                                                    0���������ͨ���޸����߷�Ƶ���޸�����Ƶ�ʣ�
                                                                    1��������DFSͶƱ�Ĵ�����SC_MCU_VOTE1STAT���ڷ�ȫ0�£�����޷�ͨ���޸����߷�Ƶ���޸�����Ƶ�ʣ�SC_MCU_VOTE1STAT����ȫ0�£��������ͨ���޸����߷�Ƶ���޸�����Ƶ�ʡ� */
        unsigned int  usim0_hpd_oe_sft            : 1;  /* bit[12]: �������USMI0�Ķ˿ڣ������ý���usim0_hpd_oe_cfg=1'b1ʱ��Ч
                                                                    0��SIM����CLK��RST�ź�����Ϊ�����DATA���ڲ�ģ����ƣ�
                                                                    1:SIM����CLK��RST��DATA����Ϊ������衣
                                                                    ע����bit��������������������� */
        unsigned int  usim1_hpd_oe_sft            : 1;  /* bit[13]: �������USMI1�Ķ˿ڣ������ý���usim1_hpd_oe_cfg=1'b1ʱ��Ч
                                                                    0��SIM����CLK��RST�ź�����Ϊ�����DATA���ڲ�ģ����ƣ�
                                                                    1:SIM����CLK��RST��DATA����Ϊ������衣
                                                                    ע����bit��������������������� */
        unsigned int  reserved_1                  : 1;  /* bit[14]: reserved */
        unsigned int  mcu_clken_hardcfg           : 1;  /* bit[15]: MCU����wfiʱǿ�ƹر�MCU HCLKʱ�ӣ��ù��ܿ�����
                                                                    0��MCU����wfiʱ���ر�MCU HCLKʱ�ӣ�
                                                                    1��MCU����wfiʱǿ�ƹر�MCU HCLKʱ�ӡ� */
        unsigned int  aarm_wd_rst_cfg_msk         : 1;  /* bit[16]: ACPU wdg��λ�Ƿ�����ȫ�ָ�λ */
        unsigned int  remap_sram_aarm_msk         : 1;  /* bit[17]: ָʾACPU��ַ�Ƿ�remap��sram����sram������ */
        unsigned int  efusec_remap_msk            : 1;  /* bit[18]: ָʾefusec��ȡ��ַremap���� */
        unsigned int  ext_pll_sel_msk             : 1;  /* bit[19]: ext_pll_sel msk */
        unsigned int  mcu_wdg0_rstmcu_cfg_msk     : 1;  /* bit[20]: mcu_wdg0_rstmcu_cfg��дmskλ */
        unsigned int  reserved_2                  : 1;  /* bit[21]: reserved */
        unsigned int  usim0_hpd_de_bounce_cfg_msk : 1;  /* bit[22]: usim0_hpd_de_bounce_cfg msk */
        unsigned int  usim0_hpd_oe_cfg_msk        : 1;  /* bit[23]: usim0_hpd_oe_cfg msk */
        unsigned int  usim1_hpd_de_bounce_cfg_msk : 1;  /* bit[24]: usim1_hpd_de_bounce_cfg msk */
        unsigned int  usim1_hpd_oe_cfg_msk        : 1;  /* bit[25]: usim1_hpd_oe_cfg msk */
        unsigned int  bus_dfs_fore_hd_cfg_msk     : 1;  /* bit[26]: bus_dfs_fore_hd_cfg msk */
        unsigned int  bus_dfs_fore_hd_cfg1_msk    : 1;  /* bit[27]: bus_dfs_fore_hd_cfg1 msk */
        unsigned int  usim0_hpd_oe_sft_msk        : 1;  /* bit[28]: usim0_hpd_oe_sft msk */
        unsigned int  usim1_hpd_oe_sft_msk        : 1;  /* bit[29]: usim1_hpd_oe_sft msk */
        unsigned int  reserved_3                  : 1;  /* bit[30]: reserved */
        unsigned int  mcu_clken_hardcfg_msk       : 1;  /* bit[31]: [31:16]��ÿһbit˳���Ӧbit15��bit0������bit31��16��bitд1��ͬʱ������bit15��0������Ч����bit31��16��bitд0ʱ������bit15��0���ֲ��䣻
                                                                    MCU����wfiʱǿ�ƹر�MCU HCLKʱ�ӣ��ù��ܿ����� */
    } reg;
} SOC_AO_SCTRL_SC_SYS_CTRL1_UNION;
#endif
#define SOC_AO_SCTRL_SC_SYS_CTRL1_aarm_wd_rst_cfg_START              (0)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_aarm_wd_rst_cfg_END                (0)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_remap_sram_aarm_START              (1)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_remap_sram_aarm_END                (1)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_efusec_remap_START                 (2)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_efusec_remap_END                   (2)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_ext_pll_sel_START                  (3)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_ext_pll_sel_END                    (3)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_mcu_wdg0_rstmcu_cfg_START          (4)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_mcu_wdg0_rstmcu_cfg_END            (4)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_usim0_hpd_de_bounce_cfg_START      (6)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_usim0_hpd_de_bounce_cfg_END        (6)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_usim0_hpd_oe_cfg_START             (7)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_usim0_hpd_oe_cfg_END               (7)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_usim1_hpd_de_bounce_cfg_START      (8)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_usim1_hpd_de_bounce_cfg_END        (8)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_usim1_hpd_oe_cfg_START             (9)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_usim1_hpd_oe_cfg_END               (9)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_bus_dfs_fore_hd_cfg_START          (10)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_bus_dfs_fore_hd_cfg_END            (10)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_bus_dfs_fore_hd_cfg1_START         (11)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_bus_dfs_fore_hd_cfg1_END           (11)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_usim0_hpd_oe_sft_START             (12)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_usim0_hpd_oe_sft_END               (12)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_usim1_hpd_oe_sft_START             (13)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_usim1_hpd_oe_sft_END               (13)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_mcu_clken_hardcfg_START            (15)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_mcu_clken_hardcfg_END              (15)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_aarm_wd_rst_cfg_msk_START          (16)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_aarm_wd_rst_cfg_msk_END            (16)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_remap_sram_aarm_msk_START          (17)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_remap_sram_aarm_msk_END            (17)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_efusec_remap_msk_START             (18)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_efusec_remap_msk_END               (18)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_ext_pll_sel_msk_START              (19)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_ext_pll_sel_msk_END                (19)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_mcu_wdg0_rstmcu_cfg_msk_START      (20)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_mcu_wdg0_rstmcu_cfg_msk_END        (20)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_usim0_hpd_de_bounce_cfg_msk_START  (22)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_usim0_hpd_de_bounce_cfg_msk_END    (22)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_usim0_hpd_oe_cfg_msk_START         (23)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_usim0_hpd_oe_cfg_msk_END           (23)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_usim1_hpd_de_bounce_cfg_msk_START  (24)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_usim1_hpd_de_bounce_cfg_msk_END    (24)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_usim1_hpd_oe_cfg_msk_START         (25)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_usim1_hpd_oe_cfg_msk_END           (25)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_bus_dfs_fore_hd_cfg_msk_START      (26)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_bus_dfs_fore_hd_cfg_msk_END        (26)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_bus_dfs_fore_hd_cfg1_msk_START     (27)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_bus_dfs_fore_hd_cfg1_msk_END       (27)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_usim0_hpd_oe_sft_msk_START         (28)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_usim0_hpd_oe_sft_msk_END           (28)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_usim1_hpd_oe_sft_msk_START         (29)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_usim1_hpd_oe_sft_msk_END           (29)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_mcu_clken_hardcfg_msk_START        (31)
#define SOC_AO_SCTRL_SC_SYS_CTRL1_mcu_clken_hardcfg_msk_END          (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_SYS_CTRL2_UNION
 �ṹ˵��  : SC_SYS_CTRL2 �Ĵ����ṹ���塣��ַƫ����:0x008����ֵ:0x00000000�����:32
 �Ĵ���˵��: ϵͳ���ƼĴ���2��WDG��λ״̬�����ȫ�ָ�λ״̬�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved                : 26; /* bit[0-25]: reserved */
        unsigned int  mcu_sft_rst_stat_clear  : 1;  /* bit[26]  : д1���MCU Watchdog0 Core��λָʾ״̬SC_SYS_STAT0.mcu_softrst_stat��д0��Ч�� */
        unsigned int  mcu_wdg0_rst_stat_clear : 1;  /* bit[27]  : д1���MCU Watchdog0 Core��λָʾ״̬SC_SYS_STAT0.mcu_wdgrst_stat��д0��Ч�� */
        unsigned int  tsensor_rst_stat_clear  : 1;  /* bit[28]  : д1���Tsensor����ȫ����λָʾ״̬SC_SYS_STAT0.tsensor_hardrst_stat��д0��Ч�� */
        unsigned int  acpu_wdg_rst_stat_clear : 1;  /* bit[29]  : д1���ACPU Watchdogȫ�ָ�ָʾ״̬SC_SYS_STAT0.acpu_wd_glb_rst_stat��д0��Ч�� */
        unsigned int  mcu_wdg1_rst_stat_clear : 1;  /* bit[30]  : д1���MCU Watchdog1ȫ�ָ�λָʾ״̬SC_SYS_STAT0.cm3_wdg1_rst_stat��д0��Ч�� */
        unsigned int  glb_srst_stat_clear     : 1;  /* bit[31]  : д1���MCUϵͳ��λָʾ״̬SC_SYS_STAT0.glb_srst_stat��д0��Ч�� */
    } reg;
} SOC_AO_SCTRL_SC_SYS_CTRL2_UNION;
#endif
#define SOC_AO_SCTRL_SC_SYS_CTRL2_mcu_sft_rst_stat_clear_START   (26)
#define SOC_AO_SCTRL_SC_SYS_CTRL2_mcu_sft_rst_stat_clear_END     (26)
#define SOC_AO_SCTRL_SC_SYS_CTRL2_mcu_wdg0_rst_stat_clear_START  (27)
#define SOC_AO_SCTRL_SC_SYS_CTRL2_mcu_wdg0_rst_stat_clear_END    (27)
#define SOC_AO_SCTRL_SC_SYS_CTRL2_tsensor_rst_stat_clear_START   (28)
#define SOC_AO_SCTRL_SC_SYS_CTRL2_tsensor_rst_stat_clear_END     (28)
#define SOC_AO_SCTRL_SC_SYS_CTRL2_acpu_wdg_rst_stat_clear_START  (29)
#define SOC_AO_SCTRL_SC_SYS_CTRL2_acpu_wdg_rst_stat_clear_END    (29)
#define SOC_AO_SCTRL_SC_SYS_CTRL2_mcu_wdg1_rst_stat_clear_START  (30)
#define SOC_AO_SCTRL_SC_SYS_CTRL2_mcu_wdg1_rst_stat_clear_END    (30)
#define SOC_AO_SCTRL_SC_SYS_CTRL2_glb_srst_stat_clear_START      (31)
#define SOC_AO_SCTRL_SC_SYS_CTRL2_glb_srst_stat_clear_END        (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_SYS_STAT0_UNION
 �ṹ˵��  : SC_SYS_STAT0 �Ĵ����ṹ���塣��ַƫ����:0x010����ֵ:0x00000000�����:32
 �Ĵ���˵��: ϵͳ״̬�Ĵ���0�����ڼ��ϵͳ��ϵͳ��λԭ���ѯ��
            ���üĴ���д��0x48698284����ϵͳ��λ��д������ֵ��Ӱ�졣
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved             : 25; /* bit[0-24]: reserved */
        unsigned int  mcu_rst_stat         : 1;  /* bit[25]  : reserved */
        unsigned int  mcu_softrst_stat     : 1;  /* bit[26]  : reserved */
        unsigned int  mcu_wdgrst_stat      : 1;  /* bit[27]  : MCU_wdgrst_statΪ1ʱ��ָʾ����MCU������λԴΪMCU Watchdog��Core��λ����ʼֵδ֪Ϊx��
                                                               0��ָʾ����MCU������λԴ����MCU Watchdog��Core��λ��
                                                               1��ָʾ����MCU������λԴΪMCU Watchdog��Core��λ�� */
        unsigned int  tsensor_hardrst_stat : 1;  /* bit[28]  : Tsensor����ȫ����λָʾ������Ч����ʼֵδ֪Ϊx�������ϵ縴λ���ƣ���ʾ����ȫ����λ��ԭ����Tsensor��λ����
                                                               0������Tsensorȫ�ָ�λ�����ϵͳ��λ��
                                                               1��Tsensorȫ�ָ�λ�����ϵͳ��λ�� */
        unsigned int  acpu_wd_glb_rst_stat : 1;  /* bit[29]  : ָʾ����ϵͳ��λ��ԭ����ʼֵδ֪Ϊx�������ϵ縴λ����
                                                               0������ACPU Watchdogȫ�ָ�λ�����ϵͳ��λ��
                                                               1��ACPU Watchdogȫ�ָ�λ�����ϵͳ��λ�� */
        unsigned int  cm3_wdg1_rst_stat    : 1;  /* bit[30]  : ָʾ����ϵͳ��λ��ԭ����ʼֵδ֪Ϊx�������ϵ縴λ����
                                                               0������MCU Watchdogȫ�ָ�λ�����ϵͳ��λ��
                                                               1��MCU Watchdogȫ�ָ�λ�����ϵͳ��λ��
                                                               ע�⣺��bit�ڶԼĴ���SC_SYS_CTRL0 bit[30]����д1����ʱ������� */
        unsigned int  glb_srst_stat        : 1;  /* bit[31]  : ָʾ����ϵͳ��λ��ԭ����ʼֵδ֪Ϊx�������ϵ縴λ����
                                                               0����ϵͳ��λ��
                                                               1��ϵͳ��λ��
                                                               ע�⣺��bit�ڶԼĴ���SC_SYS_CTRL.glb_srst_stat_clear����д1����ʱ������� */
    } reg;
} SOC_AO_SCTRL_SC_SYS_STAT0_UNION;
#endif
#define SOC_AO_SCTRL_SC_SYS_STAT0_mcu_rst_stat_START          (25)
#define SOC_AO_SCTRL_SC_SYS_STAT0_mcu_rst_stat_END            (25)
#define SOC_AO_SCTRL_SC_SYS_STAT0_mcu_softrst_stat_START      (26)
#define SOC_AO_SCTRL_SC_SYS_STAT0_mcu_softrst_stat_END        (26)
#define SOC_AO_SCTRL_SC_SYS_STAT0_mcu_wdgrst_stat_START       (27)
#define SOC_AO_SCTRL_SC_SYS_STAT0_mcu_wdgrst_stat_END         (27)
#define SOC_AO_SCTRL_SC_SYS_STAT0_tsensor_hardrst_stat_START  (28)
#define SOC_AO_SCTRL_SC_SYS_STAT0_tsensor_hardrst_stat_END    (28)
#define SOC_AO_SCTRL_SC_SYS_STAT0_acpu_wd_glb_rst_stat_START  (29)
#define SOC_AO_SCTRL_SC_SYS_STAT0_acpu_wd_glb_rst_stat_END    (29)
#define SOC_AO_SCTRL_SC_SYS_STAT0_cm3_wdg1_rst_stat_START     (30)
#define SOC_AO_SCTRL_SC_SYS_STAT0_cm3_wdg1_rst_stat_END       (30)
#define SOC_AO_SCTRL_SC_SYS_STAT0_glb_srst_stat_START         (31)
#define SOC_AO_SCTRL_SC_SYS_STAT0_glb_srst_stat_END           (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_SYS_STAT1_UNION
 �ṹ˵��  : SC_SYS_STAT1 �Ĵ����ṹ���塣��ַƫ����:0x014����ֵ:0x00010002�����:32
 �Ĵ���˵��: ϵͳ״̬�Ĵ���1�����ڼ��ϵͳ��״̬������efuse״̬NAND BOOT��NAND BITWIDTH��JTAGģʽ��BOOTMODE��BOOTSEL��ϵͳģʽ״̬��FUNCMODE��ϵͳ״̬��ѯ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mode_status        : 4;  /* bit[0-3]  : ָʾϵͳ����״̬����ǰ����ģʽ��
                                                              0000��SLEEP��
                                                              0001��DOZE��
                                                              0011��XTALCTRL��
                                                              1011��SWtoXTAL��
                                                              1001��SWfromXTAL��
                                                              0010��SLOW��
                                                              0110��PLLCTRL��
                                                              1110��SWtoPLL��
                                                              1010��SWfromPLL��
                                                              0100��NORMAL�� */
        unsigned int  reserved_0         : 12; /* bit[4-15] : reserved */
        unsigned int  boot_sel_lock      : 1;  /* bit[16]   : PAD�ź�BOOT_SEL_PIN�����ϵ縴λ�����״ָ̬ʾ�źš�
                                                              0��USBǿ���Ծ�������
                                                              1������Onchiprom������Ȼ���MMCֱ�Ӷ�ȡ�������� */
        unsigned int  func_mode_lock     : 2;  /* bit[17-18]: ���ܸ���ģʽ״̬�Ĵ�����
                                                              00���������ܣ�
                                                              01��ABB��������ģʽ��
                                                              10��SOC/BBP Test��
                                                              11��EFUSE��NAND��TSENSOR����ģʽ�� */
        unsigned int  boot_mode_lock     : 1;  /* bit[19]   : ����ģʽ����ָʾ����bit0�к���
                                                              0��������������Ƭ��Onchiprom������
                                                              1��NAND����ָʾ������ATE���ԣ���Ƭ��NAND������ */
        unsigned int  fun_jtag_mode_out  : 2;  /* bit[20-21]: JTAG����ģʽѡ��״̬�Ĵ�����
                                                              {JTAG_SEL1,JTAG_SEL0}
                                                               2��b00 ��DAP����ACPU+CCPU+MCU��
                                                               2��b01 ��BBE16 DSP��
                                                               2��b10 ��HiFi DSP��
                                                               2��b11 ����ȫ��Ȩ JTAG����  */
        unsigned int  reserved_1         : 5;  /* bit[22-26]: reserved */
        unsigned int  security_boot_flg  : 1;  /* bit[27]   : efuse��ȫ����ָʾ
                                                              0���ǰ�ȫ������
                                                              1����ȫ������ */
        unsigned int  efuse_nandboot_msk : 1;  /* bit[28]   : efuse nand boot mskָʾ
                                                              0����ֹnand��������Onchiprom�����󲻽���nand boot��
                                                              1������nand��������Onchiprom���������nand boot�� */
        unsigned int  efuse_nand_bitwide : 1;  /* bit[29]   : efuse nand bit wideָʾ
                                                              0��8 bit��
                                                              1��16 bit��
                                                              �˰汾ֻ֧��8bit */
        unsigned int  reserved_2         : 2;  /* bit[30-31]: reserved */
    } reg;
} SOC_AO_SCTRL_SC_SYS_STAT1_UNION;
#endif
#define SOC_AO_SCTRL_SC_SYS_STAT1_mode_status_START         (0)
#define SOC_AO_SCTRL_SC_SYS_STAT1_mode_status_END           (3)
#define SOC_AO_SCTRL_SC_SYS_STAT1_boot_sel_lock_START       (16)
#define SOC_AO_SCTRL_SC_SYS_STAT1_boot_sel_lock_END         (16)
#define SOC_AO_SCTRL_SC_SYS_STAT1_func_mode_lock_START      (17)
#define SOC_AO_SCTRL_SC_SYS_STAT1_func_mode_lock_END        (18)
#define SOC_AO_SCTRL_SC_SYS_STAT1_boot_mode_lock_START      (19)
#define SOC_AO_SCTRL_SC_SYS_STAT1_boot_mode_lock_END        (19)
#define SOC_AO_SCTRL_SC_SYS_STAT1_fun_jtag_mode_out_START   (20)
#define SOC_AO_SCTRL_SC_SYS_STAT1_fun_jtag_mode_out_END     (21)
#define SOC_AO_SCTRL_SC_SYS_STAT1_security_boot_flg_START   (27)
#define SOC_AO_SCTRL_SC_SYS_STAT1_security_boot_flg_END     (27)
#define SOC_AO_SCTRL_SC_SYS_STAT1_efuse_nandboot_msk_START  (28)
#define SOC_AO_SCTRL_SC_SYS_STAT1_efuse_nandboot_msk_END    (28)
#define SOC_AO_SCTRL_SC_SYS_STAT1_efuse_nand_bitwide_START  (29)
#define SOC_AO_SCTRL_SC_SYS_STAT1_efuse_nand_bitwide_END    (29)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_MCU_IMCTRL_UNION
 �ṹ˵��  : SC_MCU_IMCTRL �Ĵ����ṹ���塣��ַƫ����:0x018����ֵ:0x00000004�����:32
 �Ĵ���˵��: MCU�ж�ģʽ���ƼĴ��������ڿ���MCU�жϷ���ʱ��ϵͳģʽ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  itmd_en0   : 1;  /* bit[0]   : MCU�ж�ģʽʹ�ܡ�
                                                     0���ж�ģʽ��ֹ��
                                                     1���ж�ģʽʹ�ܡ� */
        unsigned int  itmd_ctrl0 : 3;  /* bit[1-3] : MCU�����ж�ģʽ��ϵͳ��͵Ĺ���ģʽ����ΪMCU�жϷ�����ϵͳ�����Ĺ���ģʽ��Ĭ�Ͻ���slowģʽ������������޸Ĵ˼Ĵ��� */
        unsigned int  reserved   : 28; /* bit[4-31]: reserved */
    } reg;
} SOC_AO_SCTRL_SC_MCU_IMCTRL_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_IMCTRL_itmd_en0_START    (0)
#define SOC_AO_SCTRL_SC_MCU_IMCTRL_itmd_en0_END      (0)
#define SOC_AO_SCTRL_SC_MCU_IMCTRL_itmd_ctrl0_START  (1)
#define SOC_AO_SCTRL_SC_MCU_IMCTRL_itmd_ctrl0_END    (3)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_MCU_IMSTAT_UNION
 �ṹ˵��  : SC_MCU_IMSTAT �Ĵ����ṹ���塣��ַƫ����:0x01C����ֵ:0x00000000�����:32
 �Ĵ���˵��: MCU�ж�ģʽ״̬�Ĵ��������ڼ��Ϳ���MCUϵͳ�ж�ģʽ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  itmd_stat0_sftcfg : 1;  /* bit[0]   : MCU�ж�ģʽ״ָ̬ʾ��
                                                            0���ж�ģʽû�м��
                                                            1���ж���Ӧģʽ�����
                                                            ע�⣺���жϷ���������ִ��ʱ�����뽫�����λд0����ж���Ӧ״̬�� */
        unsigned int  reserved          : 31; /* bit[1-31]: reserved */
    } reg;
} SOC_AO_SCTRL_SC_MCU_IMSTAT_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_IMSTAT_itmd_stat0_sftcfg_START  (0)
#define SOC_AO_SCTRL_SC_MCU_IMSTAT_itmd_stat0_sftcfg_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_SECONDRY_INT_EN0_UNION
 �ṹ˵��  : SC_SECONDRY_INT_EN0 �Ĵ����ṹ���塣��ַƫ����:0x044����ֵ:0x00000000�����:32
 �Ĵ���˵��: ϵͳ�����ж�ʹ�ܼĴ��������ڶ�ϵͳ�����жϽ����������á���ӦbitΪ1��ʾʹ����Ӧ�жϣ�Ϊ0��ʾ�����жϡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_secondry_int_en0_0bit  : 1;  /* bit[0]    : CM3_SOFT_NMI_intr�жϡ� */
        unsigned int  sc_secondry_int_en0_1bit  : 1;  /* bit[1]    : CM3WDog0_intr�жϡ� */
        unsigned int  sc_secondry_int_en0_2bit  : 1;  /* bit[2]    : DDRC_intr�жϡ� */
        unsigned int  sc_secondry_int_en0_15bit : 13; /* bit[3-15] : reserved */
        unsigned int  sc_secondry_int_en0_16bit : 1;  /* bit[16]   : reserved */
        unsigned int  sc_secondry_int_en0_17bit : 1;  /* bit[17]   : reserved */
        unsigned int  sc_secondry_int_en0_18bit : 1;  /* bit[18]   : reserved */
        unsigned int  sc_secondry_int_en0_19bit : 1;  /* bit[19]   : reserved */
        unsigned int  sc_secondry_int_en0_20bit : 1;  /* bit[20]   : reserved */
        unsigned int  sc_secondry_int_en0_21bit : 1;  /* bit[21]   : UART0�жϣ����ڲ���У׼�����ڲ�Ʒ����HiFi���ڵ��ԣ��� */
        unsigned int  sc_secondry_int_en0_22bit : 1;  /* bit[22]   : UART2�жϣ�����BT�� */
        unsigned int  sc_secondry_int_en0_23bit : 1;  /* bit[23]   : UART4�жϣ����ڴ��ڵ��ԡ� */
        unsigned int  sc_secondry_int_en0_31bit : 8;  /* bit[24-31]: reserved */
    } reg;
} SOC_AO_SCTRL_SC_SECONDRY_INT_EN0_UNION;
#endif
#define SOC_AO_SCTRL_SC_SECONDRY_INT_EN0_sc_secondry_int_en0_0bit_START   (0)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_EN0_sc_secondry_int_en0_0bit_END     (0)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_EN0_sc_secondry_int_en0_1bit_START   (1)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_EN0_sc_secondry_int_en0_1bit_END     (1)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_EN0_sc_secondry_int_en0_2bit_START   (2)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_EN0_sc_secondry_int_en0_2bit_END     (2)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_EN0_sc_secondry_int_en0_15bit_START  (3)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_EN0_sc_secondry_int_en0_15bit_END    (15)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_EN0_sc_secondry_int_en0_16bit_START  (16)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_EN0_sc_secondry_int_en0_16bit_END    (16)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_EN0_sc_secondry_int_en0_17bit_START  (17)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_EN0_sc_secondry_int_en0_17bit_END    (17)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_EN0_sc_secondry_int_en0_18bit_START  (18)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_EN0_sc_secondry_int_en0_18bit_END    (18)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_EN0_sc_secondry_int_en0_19bit_START  (19)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_EN0_sc_secondry_int_en0_19bit_END    (19)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_EN0_sc_secondry_int_en0_20bit_START  (20)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_EN0_sc_secondry_int_en0_20bit_END    (20)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_EN0_sc_secondry_int_en0_21bit_START  (21)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_EN0_sc_secondry_int_en0_21bit_END    (21)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_EN0_sc_secondry_int_en0_22bit_START  (22)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_EN0_sc_secondry_int_en0_22bit_END    (22)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_EN0_sc_secondry_int_en0_23bit_START  (23)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_EN0_sc_secondry_int_en0_23bit_END    (23)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_EN0_sc_secondry_int_en0_31bit_START  (24)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_EN0_sc_secondry_int_en0_31bit_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_SECONDRY_INT_STATR0_UNION
 �ṹ˵��  : SC_SECONDRY_INT_STATR0 �Ĵ����ṹ���塣��ַƫ����:0x048����ֵ:0x00000000�����:32
 �Ĵ���˵��: ϵͳ�����ж��жϼĴ���������ָʾϵͳ����ԭʼ�ж�״̬������ǰ������ӦbitΪ1��ʾ���жϣ�Ϊ0��ʾ���жϡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_secondry_int_raw0_0bit  : 1;  /* bit[0]    : CM3_SOFT_NMI_intr�жϡ� */
        unsigned int  sc_secondry_int_raw0_1bit  : 1;  /* bit[1]    : CM3WDog0_intr�жϡ� */
        unsigned int  sc_secondry_int_raw0_2bit  : 1;  /* bit[2]    : DDRC_intr�жϡ� */
        unsigned int  sc_secondry_int_raw0_15bit : 13; /* bit[3-15] : reserved */
        unsigned int  sc_secondry_int_raw0_16bit : 1;  /* bit[16]   : reserved */
        unsigned int  sc_secondry_int_raw0_17bit : 1;  /* bit[17]   : reserved */
        unsigned int  sc_secondry_int_raw0_18bit : 1;  /* bit[18]   : reserved */
        unsigned int  sc_secondry_int_raw0_19bit : 1;  /* bit[19]   : reserved */
        unsigned int  sc_secondry_int_raw0_20bit : 1;  /* bit[20]   : reserved */
        unsigned int  sc_secondry_int_raw0_21bit : 1;  /* bit[21]   : UART0�жϣ����ڲ���У׼�����ڲ�Ʒ����HiFi���ڵ��ԣ��� */
        unsigned int  sc_secondry_int_raw0_22bit : 1;  /* bit[22]   : UART2�жϣ�����BT�� */
        unsigned int  sc_secondry_int_raw0_23bit : 1;  /* bit[23]   : UART4�жϣ����ڴ��ڵ��ԡ� */
        unsigned int  sc_secondry_int_raw0_31bit : 8;  /* bit[24-31]: reserved */
    } reg;
} SOC_AO_SCTRL_SC_SECONDRY_INT_STATR0_UNION;
#endif
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATR0_sc_secondry_int_raw0_0bit_START   (0)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATR0_sc_secondry_int_raw0_0bit_END     (0)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATR0_sc_secondry_int_raw0_1bit_START   (1)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATR0_sc_secondry_int_raw0_1bit_END     (1)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATR0_sc_secondry_int_raw0_2bit_START   (2)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATR0_sc_secondry_int_raw0_2bit_END     (2)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATR0_sc_secondry_int_raw0_15bit_START  (3)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATR0_sc_secondry_int_raw0_15bit_END    (15)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATR0_sc_secondry_int_raw0_16bit_START  (16)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATR0_sc_secondry_int_raw0_16bit_END    (16)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATR0_sc_secondry_int_raw0_17bit_START  (17)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATR0_sc_secondry_int_raw0_17bit_END    (17)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATR0_sc_secondry_int_raw0_18bit_START  (18)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATR0_sc_secondry_int_raw0_18bit_END    (18)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATR0_sc_secondry_int_raw0_19bit_START  (19)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATR0_sc_secondry_int_raw0_19bit_END    (19)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATR0_sc_secondry_int_raw0_20bit_START  (20)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATR0_sc_secondry_int_raw0_20bit_END    (20)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATR0_sc_secondry_int_raw0_21bit_START  (21)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATR0_sc_secondry_int_raw0_21bit_END    (21)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATR0_sc_secondry_int_raw0_22bit_START  (22)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATR0_sc_secondry_int_raw0_22bit_END    (22)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATR0_sc_secondry_int_raw0_23bit_START  (23)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATR0_sc_secondry_int_raw0_23bit_END    (23)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATR0_sc_secondry_int_raw0_31bit_START  (24)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATR0_sc_secondry_int_raw0_31bit_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_SECONDRY_INT_STATM0_UNION
 �ṹ˵��  : SC_SECONDRY_INT_STATM0 �Ĵ����ṹ���塣��ַƫ����:0x04C����ֵ:0x00000000�����:32
 �Ĵ���˵��: ϵͳ�����ж����κ�Ĵ���������ָʾϵͳ�����ж�״̬�����κ󣩡���ӦbitΪ1��ʾ���жϣ�Ϊ0��ʾ���жϡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_secondry_int_mask0_0bit  : 1;  /* bit[0]    : CM3_SOFT_NMI_intr�жϡ� */
        unsigned int  sc_secondry_int_mask0_1bit  : 1;  /* bit[1]    : CM3WDog0_intr�жϡ� */
        unsigned int  sc_secondry_int_mask0_2bit  : 1;  /* bit[2]    : DDRC_intr�жϡ� */
        unsigned int  sc_secondry_int_mask0_15bit : 13; /* bit[3-15] : reserved */
        unsigned int  sc_secondry_int_mask0_16bit : 1;  /* bit[16]   : reserved */
        unsigned int  sc_secondry_int_mask0_17bit : 1;  /* bit[17]   : reserved */
        unsigned int  sc_secondry_int_mask0_18bit : 1;  /* bit[18]   : reserved */
        unsigned int  sc_secondry_int_mask0_19bit : 1;  /* bit[19]   : reserved */
        unsigned int  sc_secondry_int_mask0_20bit : 1;  /* bit[20]   : reserved */
        unsigned int  sc_secondry_int_mask0_21bit : 1;  /* bit[21]   : UART0�жϣ����ڲ���У׼�����ڲ�Ʒ����HiFi���ڵ��ԣ��� */
        unsigned int  sc_secondry_int_mask0_22bit : 1;  /* bit[22]   : UART2�жϣ�����BT�� */
        unsigned int  sc_secondry_int_mask0_23bit : 1;  /* bit[23]   : UART4�жϣ����ڴ��ڵ��ԡ� */
        unsigned int  sc_secondry_int_mask0_31bit : 8;  /* bit[24-31]: reserved */
    } reg;
} SOC_AO_SCTRL_SC_SECONDRY_INT_STATM0_UNION;
#endif
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATM0_sc_secondry_int_mask0_0bit_START   (0)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATM0_sc_secondry_int_mask0_0bit_END     (0)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATM0_sc_secondry_int_mask0_1bit_START   (1)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATM0_sc_secondry_int_mask0_1bit_END     (1)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATM0_sc_secondry_int_mask0_2bit_START   (2)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATM0_sc_secondry_int_mask0_2bit_END     (2)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATM0_sc_secondry_int_mask0_15bit_START  (3)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATM0_sc_secondry_int_mask0_15bit_END    (15)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATM0_sc_secondry_int_mask0_16bit_START  (16)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATM0_sc_secondry_int_mask0_16bit_END    (16)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATM0_sc_secondry_int_mask0_17bit_START  (17)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATM0_sc_secondry_int_mask0_17bit_END    (17)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATM0_sc_secondry_int_mask0_18bit_START  (18)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATM0_sc_secondry_int_mask0_18bit_END    (18)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATM0_sc_secondry_int_mask0_19bit_START  (19)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATM0_sc_secondry_int_mask0_19bit_END    (19)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATM0_sc_secondry_int_mask0_20bit_START  (20)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATM0_sc_secondry_int_mask0_20bit_END    (20)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATM0_sc_secondry_int_mask0_21bit_START  (21)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATM0_sc_secondry_int_mask0_21bit_END    (21)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATM0_sc_secondry_int_mask0_22bit_START  (22)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATM0_sc_secondry_int_mask0_22bit_END    (22)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATM0_sc_secondry_int_mask0_23bit_START  (23)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATM0_sc_secondry_int_mask0_23bit_END    (23)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATM0_sc_secondry_int_mask0_31bit_START  (24)
#define SOC_AO_SCTRL_SC_SECONDRY_INT_STATM0_sc_secondry_int_mask0_31bit_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN6_UNION
 �ṹ˵��  : SC_MCU_WKUP_INT_EN6 �Ĵ����ṹ���塣��ַƫ����:0x054����ֵ:0x00000000�����:32
 �Ĵ���˵��: MCU�����ж�ʹ�ܼĴ�������ӦMCU�Ļ����ж�bit32��63�����ڶ�MCU�Ļ����жϽ����������á���ӦbitΪ1��ʾʹ����Ӧ�жϣ�Ϊ0��ʾ�����жϡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mcu_wakeup_int_en6_WatchDog0    : 1;  /* bit[0]    : WatchDog0��ʱ��λ�����жϡ� */
        unsigned int  mcu_wakeup_int_en6_WatchDog1    : 1;  /* bit[1]    : WatchDog1��ʱ��λ�����жϡ� */
        unsigned int  mcu_wakeup_int_en6_WatchDog2    : 1;  /* bit[2]    : WatchDog2��ʱ��λ�����жϡ� */
        unsigned int  mcu_wakeup_int_en6_CM3WatchDog1 : 1;  /* bit[3]    : CM3 WatchDog1 ��ʱ�жϡ� */
        unsigned int  mcu_wakeup_int_en6_MWatchDog0   : 1;  /* bit[4]    : MDM WatchDog0��ʱ��λ�����жϡ� */
        unsigned int  mcu_wakeup_int_en6_GPIO14       : 1;  /* bit[5]    : GPIO14�жϡ� */
        unsigned int  mcu_wakeup_int_en6_GPIO15       : 1;  /* bit[6]    : GPIO15�жϡ� */
        unsigned int  mcu_wakeup_int_en6_GPIO16       : 1;  /* bit[7]    : GPIO16�жϡ� */
        unsigned int  mcu_wakeup_int_en6_GPIO17       : 1;  /* bit[8]    : GPIO17�жϡ� */
        unsigned int  mcu_wakeup_int_en6_GPIO18       : 1;  /* bit[9]    : GPIO18�жϡ� */
        unsigned int  mcu_wakeup_int_en6_GPIO19       : 1;  /* bit[10]   : GPIO19�жϡ� */
        unsigned int  mcu_wakeup_int_en6_CM3Timer2    : 1;  /* bit[11]   : CM3Timer2�жϡ� */
        unsigned int  mcu_wakeup_int_en6_CM3Timer3    : 1;  /* bit[12]   : CM3Timer3�жϡ� */
        unsigned int  mcu_wakeup_int_en6_PWM0         : 1;  /* bit[13]   : PWM0 int�жϡ� */
        unsigned int  mcu_wakeup_int_en6_PWM1         : 1;  /* bit[14]   : PWM1 int�жϡ� */
        unsigned int  mcu_wakeup_int_en6_PWMIN        : 1;  /* bit[15]   : PWMIN int�жϡ� */
        unsigned int  mcu_wakeup_int_en6_reserved     : 16; /* bit[16-31]: reserved */
    } reg;
} SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN6_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN6_mcu_wakeup_int_en6_WatchDog0_START     (0)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN6_mcu_wakeup_int_en6_WatchDog0_END       (0)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN6_mcu_wakeup_int_en6_WatchDog1_START     (1)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN6_mcu_wakeup_int_en6_WatchDog1_END       (1)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN6_mcu_wakeup_int_en6_WatchDog2_START     (2)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN6_mcu_wakeup_int_en6_WatchDog2_END       (2)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN6_mcu_wakeup_int_en6_CM3WatchDog1_START  (3)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN6_mcu_wakeup_int_en6_CM3WatchDog1_END    (3)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN6_mcu_wakeup_int_en6_MWatchDog0_START    (4)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN6_mcu_wakeup_int_en6_MWatchDog0_END      (4)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN6_mcu_wakeup_int_en6_GPIO14_START        (5)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN6_mcu_wakeup_int_en6_GPIO14_END          (5)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN6_mcu_wakeup_int_en6_GPIO15_START        (6)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN6_mcu_wakeup_int_en6_GPIO15_END          (6)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN6_mcu_wakeup_int_en6_GPIO16_START        (7)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN6_mcu_wakeup_int_en6_GPIO16_END          (7)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN6_mcu_wakeup_int_en6_GPIO17_START        (8)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN6_mcu_wakeup_int_en6_GPIO17_END          (8)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN6_mcu_wakeup_int_en6_GPIO18_START        (9)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN6_mcu_wakeup_int_en6_GPIO18_END          (9)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN6_mcu_wakeup_int_en6_GPIO19_START        (10)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN6_mcu_wakeup_int_en6_GPIO19_END          (10)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN6_mcu_wakeup_int_en6_CM3Timer2_START     (11)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN6_mcu_wakeup_int_en6_CM3Timer2_END       (11)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN6_mcu_wakeup_int_en6_CM3Timer3_START     (12)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN6_mcu_wakeup_int_en6_CM3Timer3_END       (12)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN6_mcu_wakeup_int_en6_PWM0_START          (13)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN6_mcu_wakeup_int_en6_PWM0_END            (13)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN6_mcu_wakeup_int_en6_PWM1_START          (14)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN6_mcu_wakeup_int_en6_PWM1_END            (14)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN6_mcu_wakeup_int_en6_PWMIN_START         (15)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN6_mcu_wakeup_int_en6_PWMIN_END           (15)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN6_mcu_wakeup_int_en6_reserved_START      (16)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN6_mcu_wakeup_int_en6_reserved_END        (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR6_UNION
 �ṹ˵��  : SC_MCU_WKUP_INT_STATR6 �Ĵ����ṹ���塣��ַƫ����:0x058����ֵ:0x00000000�����:32
 �Ĵ���˵��: MCUԭʼ�����жϼĴ�������ӦMCU�Ļ����ж�bit32��63������ָʾMCU��ԭʼ�����ж�״̬������ǰ������ӦbitΪ1��ʾ���жϣ�Ϊ0��ʾ���жϡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mcu_wakeup_int_raw6_WatchDog0    : 1;  /* bit[0]    : WatchDog0��ʱ��λ�����жϡ� */
        unsigned int  mcu_wakeup_int_raw6_WatchDog1    : 1;  /* bit[1]    : WatchDog1��ʱ��λ�����жϡ� */
        unsigned int  mcu_wakeup_int_raw6_WatchDog2    : 1;  /* bit[2]    : WatchDog2��ʱ��λ�����жϡ� */
        unsigned int  mcu_wakeup_int_raw6_CM3WatchDog1 : 1;  /* bit[3]    : CM3 WatchDog1 ��ʱ�жϡ� */
        unsigned int  mcu_wakeup_int_raw6_MWatchDog0   : 1;  /* bit[4]    : MDM WatchDog0��ʱ��λ�����жϡ� */
        unsigned int  mcu_wakeup_int_raw6_GPIO14       : 1;  /* bit[5]    : GPIO14�жϡ� */
        unsigned int  mcu_wakeup_int_raw6_GPIO15       : 1;  /* bit[6]    : GPIO15�жϡ� */
        unsigned int  mcu_wakeup_int_raw6_GPIO16       : 1;  /* bit[7]    : GPIO16�жϡ� */
        unsigned int  mcu_wakeup_int_raw6_GPIO17       : 1;  /* bit[8]    : GPIO17�жϡ� */
        unsigned int  mcu_wakeup_int_raw6_GPIO18       : 1;  /* bit[9]    : GPIO18�жϡ� */
        unsigned int  mcu_wakeup_int_raw6_GPIO19       : 1;  /* bit[10]   : GPIO19�жϡ� */
        unsigned int  mcu_wakeup_int_raw6_CM3Timer2    : 1;  /* bit[11]   : CM3Timer2�жϡ� */
        unsigned int  mcu_wakeup_int_raw6_CM3Timer3    : 1;  /* bit[12]   : CM3Timer3�жϡ� */
        unsigned int  mcu_wakeup_int_raw6_PWM0         : 1;  /* bit[13]   : PWM0 int�жϡ� */
        unsigned int  mcu_wakeup_int_raw6_PWM1         : 1;  /* bit[14]   : PWM1 int�жϡ� */
        unsigned int  mcu_wakeup_int_raw6_PWMIN        : 1;  /* bit[15]   : PWMIN int�жϡ� */
        unsigned int  mcu_wakeup_int_raw6_reserved     : 16; /* bit[16-31]: reserved */
    } reg;
} SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR6_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR6_mcu_wakeup_int_raw6_WatchDog0_START     (0)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR6_mcu_wakeup_int_raw6_WatchDog0_END       (0)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR6_mcu_wakeup_int_raw6_WatchDog1_START     (1)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR6_mcu_wakeup_int_raw6_WatchDog1_END       (1)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR6_mcu_wakeup_int_raw6_WatchDog2_START     (2)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR6_mcu_wakeup_int_raw6_WatchDog2_END       (2)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR6_mcu_wakeup_int_raw6_CM3WatchDog1_START  (3)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR6_mcu_wakeup_int_raw6_CM3WatchDog1_END    (3)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR6_mcu_wakeup_int_raw6_MWatchDog0_START    (4)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR6_mcu_wakeup_int_raw6_MWatchDog0_END      (4)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR6_mcu_wakeup_int_raw6_GPIO14_START        (5)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR6_mcu_wakeup_int_raw6_GPIO14_END          (5)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR6_mcu_wakeup_int_raw6_GPIO15_START        (6)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR6_mcu_wakeup_int_raw6_GPIO15_END          (6)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR6_mcu_wakeup_int_raw6_GPIO16_START        (7)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR6_mcu_wakeup_int_raw6_GPIO16_END          (7)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR6_mcu_wakeup_int_raw6_GPIO17_START        (8)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR6_mcu_wakeup_int_raw6_GPIO17_END          (8)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR6_mcu_wakeup_int_raw6_GPIO18_START        (9)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR6_mcu_wakeup_int_raw6_GPIO18_END          (9)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR6_mcu_wakeup_int_raw6_GPIO19_START        (10)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR6_mcu_wakeup_int_raw6_GPIO19_END          (10)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR6_mcu_wakeup_int_raw6_CM3Timer2_START     (11)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR6_mcu_wakeup_int_raw6_CM3Timer2_END       (11)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR6_mcu_wakeup_int_raw6_CM3Timer3_START     (12)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR6_mcu_wakeup_int_raw6_CM3Timer3_END       (12)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR6_mcu_wakeup_int_raw6_PWM0_START          (13)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR6_mcu_wakeup_int_raw6_PWM0_END            (13)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR6_mcu_wakeup_int_raw6_PWM1_START          (14)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR6_mcu_wakeup_int_raw6_PWM1_END            (14)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR6_mcu_wakeup_int_raw6_PWMIN_START         (15)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR6_mcu_wakeup_int_raw6_PWMIN_END           (15)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR6_mcu_wakeup_int_raw6_reserved_START      (16)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR6_mcu_wakeup_int_raw6_reserved_END        (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM6_UNION
 �ṹ˵��  : SC_MCU_WKUP_INT_STATM6 �Ĵ����ṹ���塣��ַƫ����:0x05C����ֵ:0x00000000�����:32
 �Ĵ���˵��: MCU���κ����жϼĴ�������ӦMCU�Ļ����ж�bit32��63������ָʾMCU�ĵ�ǰ�����ж�״̬�����κ󣩡���ӦbitΪ1��ʾ���жϣ�Ϊ0��ʾ���жϡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mcu_wakeup_int_mask6_WatchDog0    : 1;  /* bit[0]    : WatchDog0��ʱ��λ�����жϡ� */
        unsigned int  mcu_wakeup_int_mask6_WatchDog1    : 1;  /* bit[1]    : WatchDog1��ʱ��λ�����жϡ� */
        unsigned int  mcu_wakeup_int_mask6_WatchDog2    : 1;  /* bit[2]    : WatchDog2��ʱ��λ�����жϡ� */
        unsigned int  mcu_wakeup_int_mask6_CM3WatchDog1 : 1;  /* bit[3]    : CM3 WatchDog1 ��ʱ�жϡ� */
        unsigned int  mcu_wakeup_int_mask6_MWatchDog0   : 1;  /* bit[4]    : MDM WatchDog0��ʱ��λ�����жϡ� */
        unsigned int  mcu_wakeup_int_mask6_GPIO14       : 1;  /* bit[5]    : GPIO14�жϡ� */
        unsigned int  mcu_wakeup_int_mask6_GPIO15       : 1;  /* bit[6]    : GPIO15�жϡ� */
        unsigned int  mcu_wakeup_int_mask6_GPIO16       : 1;  /* bit[7]    : GPIO16�жϡ� */
        unsigned int  mcu_wakeup_int_mask6_GPIO17       : 1;  /* bit[8]    : GPIO17�жϡ� */
        unsigned int  mcu_wakeup_int_mask6_GPIO18       : 1;  /* bit[9]    : GPIO18�жϡ� */
        unsigned int  mcu_wakeup_int_mask6_GPIO19       : 1;  /* bit[10]   : GPIO19�жϡ� */
        unsigned int  mcu_wakeup_int_mask6_CM3Timer2    : 1;  /* bit[11]   : CM3Timer2�жϡ� */
        unsigned int  mcu_wakeup_int_mask6_CM3Timer3    : 1;  /* bit[12]   : CM3Timer3�жϡ� */
        unsigned int  mcu_wakeup_int_mask6_PWM0         : 1;  /* bit[13]   : PWM0 int�жϡ� */
        unsigned int  mcu_wakeup_int_mask6_PWM1         : 1;  /* bit[14]   : PWM1 int�жϡ� */
        unsigned int  mcu_wakeup_int_mask6_PWMIN        : 1;  /* bit[15]   : PWMIN int�жϡ� */
        unsigned int  mcu_wakeup_int_mask6_reserved     : 16; /* bit[16-31]: reserved */
    } reg;
} SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM6_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM6_mcu_wakeup_int_mask6_WatchDog0_START     (0)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM6_mcu_wakeup_int_mask6_WatchDog0_END       (0)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM6_mcu_wakeup_int_mask6_WatchDog1_START     (1)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM6_mcu_wakeup_int_mask6_WatchDog1_END       (1)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM6_mcu_wakeup_int_mask6_WatchDog2_START     (2)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM6_mcu_wakeup_int_mask6_WatchDog2_END       (2)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM6_mcu_wakeup_int_mask6_CM3WatchDog1_START  (3)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM6_mcu_wakeup_int_mask6_CM3WatchDog1_END    (3)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM6_mcu_wakeup_int_mask6_MWatchDog0_START    (4)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM6_mcu_wakeup_int_mask6_MWatchDog0_END      (4)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM6_mcu_wakeup_int_mask6_GPIO14_START        (5)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM6_mcu_wakeup_int_mask6_GPIO14_END          (5)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM6_mcu_wakeup_int_mask6_GPIO15_START        (6)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM6_mcu_wakeup_int_mask6_GPIO15_END          (6)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM6_mcu_wakeup_int_mask6_GPIO16_START        (7)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM6_mcu_wakeup_int_mask6_GPIO16_END          (7)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM6_mcu_wakeup_int_mask6_GPIO17_START        (8)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM6_mcu_wakeup_int_mask6_GPIO17_END          (8)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM6_mcu_wakeup_int_mask6_GPIO18_START        (9)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM6_mcu_wakeup_int_mask6_GPIO18_END          (9)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM6_mcu_wakeup_int_mask6_GPIO19_START        (10)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM6_mcu_wakeup_int_mask6_GPIO19_END          (10)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM6_mcu_wakeup_int_mask6_CM3Timer2_START     (11)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM6_mcu_wakeup_int_mask6_CM3Timer2_END       (11)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM6_mcu_wakeup_int_mask6_CM3Timer3_START     (12)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM6_mcu_wakeup_int_mask6_CM3Timer3_END       (12)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM6_mcu_wakeup_int_mask6_PWM0_START          (13)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM6_mcu_wakeup_int_mask6_PWM0_END            (13)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM6_mcu_wakeup_int_mask6_PWM1_START          (14)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM6_mcu_wakeup_int_mask6_PWM1_END            (14)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM6_mcu_wakeup_int_mask6_PWMIN_START         (15)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM6_mcu_wakeup_int_mask6_PWMIN_END           (15)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM6_mcu_wakeup_int_mask6_reserved_START      (16)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM6_mcu_wakeup_int_mask6_reserved_END        (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_UNION
 �ṹ˵��  : SC_MCU_WKUP_INT_EN5 �Ĵ����ṹ���塣��ַƫ����:0x064����ֵ:0x00000000�����:32
 �Ĵ���˵��: MCU�����ж�ʹ�ܼĴ�������ӦMCU�Ļ����ж�bit31��0�����ڶ�MCU�Ļ����жϽ����������á���ӦbitΪ1��ʾʹ����Ӧ�жϣ�Ϊ0��ʾ�����жϡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mcu_wakeup_int_en5_GPIO0        : 1;  /* bit[0] : 0�� GPIO0 �жϡ� */
        unsigned int  mcu_wakeup_int_en5_GPIO1        : 1;  /* bit[1] : 1�� GPIO1 �жϡ� */
        unsigned int  mcu_wakeup_int_en5_GPIO2        : 1;  /* bit[2] : 2�� GPIO2 �жϡ� */
        unsigned int  mcu_wakeup_int_en5_GPIO3        : 1;  /* bit[3] : 3�� GPIO3 �жϡ� */
        unsigned int  mcu_wakeup_int_en5_GPIO4        : 1;  /* bit[4] : 4�� GPIO4 �жϡ� */
        unsigned int  mcu_wakeup_int_en5_GPIO5        : 1;  /* bit[5] : 5�� GPIO5 �жϡ� */
        unsigned int  mcu_wakeup_int_en5_GPIO6        : 1;  /* bit[6] : 6�� GPIO6 �жϡ� */
        unsigned int  mcu_wakeup_int_en5_GPIO7        : 1;  /* bit[7] : [7] ��GPIO7 �жϡ� */
        unsigned int  mcu_wakeup_int_en5_GPIO8        : 1;  /* bit[8] : [8] ��GPIO8�жϡ� */
        unsigned int  mcu_wakeup_int_en5_GPIO9        : 1;  /* bit[9] : [9] ��GPIO9�жϡ� */
        unsigned int  mcu_wakeup_int_en5_GPIO10       : 1;  /* bit[10]: [10]��GPIO10 �жϡ� */
        unsigned int  mcu_wakeup_int_en5_GPIO11       : 1;  /* bit[11]: [11]��GPIO11�жϡ� */
        unsigned int  mcu_wakeup_int_en5_GPIO12       : 1;  /* bit[12]: [12]��GPIO12 �жϡ� */
        unsigned int  mcu_wakeup_int_en5_GPIO13       : 1;  /* bit[13]: [13]��GPIO13�жϡ� */
        unsigned int  mcu_wakeup_int_en5_CSYSPWRUPREQ : 1;  /* bit[14]: [14]��CSYSPWRUPREQ CoreSight system power up����״̬�źţ��߱�ʾ������Ч�� */
        unsigned int  mcu_wakeup_int_en5_CDBGPWRUPREQ : 1;  /* bit[15]: [15]��CDBGPWRUPREQ CoreSight debug power up����״̬�źţ��߱�ʾ������Ч�� */
        unsigned int  mcu_wakeup_int_en5_16reserved   : 1;  /* bit[16]: reserved */
        unsigned int  mcu_wakeup_int_en5_RTC1_INT     : 1;  /* bit[17]: [17]��RTC1_INT */
        unsigned int  mcu_wakeup_int_en5_RTC0_INT     : 1;  /* bit[18]: [18]��RTC0_INT  */
        unsigned int  mcu_wakeup_int_en5_19reserved   : 1;  /* bit[19]: 19�� reserved */
        unsigned int  mcu_wakeup_int_en5_20reserved   : 1;  /* bit[20]: 20�� reserved */
        unsigned int  mcu_wakeup_int_en5_Timer14      : 1;  /* bit[21]: 21�� Timer14 AP Dual_Timer7_0�жϡ� */
        unsigned int  mcu_wakeup_int_en5_Timer15      : 1;  /* bit[22]: 22�� Timer15 AP Dual_Timer7_1�жϡ� */
        unsigned int  mcu_wakeup_int_en5_Timer16      : 1;  /* bit[23]: 23�� Timer16 AP Dual_Timer8_0�жϡ� */
        unsigned int  mcu_wakeup_int_en5_Timer17      : 1;  /* bit[24]: 24�� Timer17 AP Dual_Timer8_1�жϡ� */
        unsigned int  mcu_wakeup_int_en5_CM3Timer0    : 1;  /* bit[25]: 25�� CM3 Timer0 CM3 Dual_Timer0_0�жϡ� */
        unsigned int  mcu_wakeup_int_en5_CM3Timer1    : 1;  /* bit[26]: 26�� CM3 Timer1 CM3 Dual_Timer0_1�жϡ� */
        unsigned int  mcu_wakeup_int_en5_MTimer16     : 1;  /* bit[27]: 27�� MTimer16 Modem Dual_Timer8_0�жϡ� */
        unsigned int  mcu_wakeup_int_en5_MTimer17     : 1;  /* bit[28]: 28�� MTimer17 Modem Dual_Timer8_1�жϡ� */
        unsigned int  mcu_wakeup_int_en5_MTimer18     : 1;  /* bit[29]: 29�� MTimer18 Modem Dual_Timer9_0�жϡ� */
        unsigned int  mcu_wakeup_int_en5_MTimer19     : 1;  /* bit[30]: 30�� MTimer19 Modem Dual_Timer9_1�жϡ� */
        unsigned int  mcu_wakeup_int_en5_CM3WatchDog0 : 1;  /* bit[31]: 31�� CM3 WatchDog0��λ�����жϡ� */
    } reg;
} SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_GPIO0_START         (0)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_GPIO0_END           (0)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_GPIO1_START         (1)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_GPIO1_END           (1)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_GPIO2_START         (2)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_GPIO2_END           (2)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_GPIO3_START         (3)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_GPIO3_END           (3)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_GPIO4_START         (4)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_GPIO4_END           (4)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_GPIO5_START         (5)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_GPIO5_END           (5)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_GPIO6_START         (6)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_GPIO6_END           (6)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_GPIO7_START         (7)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_GPIO7_END           (7)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_GPIO8_START         (8)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_GPIO8_END           (8)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_GPIO9_START         (9)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_GPIO9_END           (9)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_GPIO10_START        (10)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_GPIO10_END          (10)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_GPIO11_START        (11)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_GPIO11_END          (11)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_GPIO12_START        (12)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_GPIO12_END          (12)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_GPIO13_START        (13)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_GPIO13_END          (13)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_CSYSPWRUPREQ_START  (14)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_CSYSPWRUPREQ_END    (14)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_CDBGPWRUPREQ_START  (15)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_CDBGPWRUPREQ_END    (15)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_16reserved_START    (16)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_16reserved_END      (16)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_RTC1_INT_START      (17)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_RTC1_INT_END        (17)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_RTC0_INT_START      (18)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_RTC0_INT_END        (18)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_19reserved_START    (19)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_19reserved_END      (19)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_20reserved_START    (20)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_20reserved_END      (20)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_Timer14_START       (21)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_Timer14_END         (21)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_Timer15_START       (22)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_Timer15_END         (22)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_Timer16_START       (23)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_Timer16_END         (23)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_Timer17_START       (24)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_Timer17_END         (24)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_CM3Timer0_START     (25)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_CM3Timer0_END       (25)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_CM3Timer1_START     (26)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_CM3Timer1_END       (26)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_MTimer16_START      (27)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_MTimer16_END        (27)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_MTimer17_START      (28)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_MTimer17_END        (28)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_MTimer18_START      (29)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_MTimer18_END        (29)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_MTimer19_START      (30)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_MTimer19_END        (30)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_CM3WatchDog0_START  (31)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN5_mcu_wakeup_int_en5_CM3WatchDog0_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_UNION
 �ṹ˵��  : SC_MCU_WKUP_INT_STATR5 �Ĵ����ṹ���塣��ַƫ����:0x068����ֵ:0x00000000�����:32
 �Ĵ���˵��: MCUԭʼ�����жϼĴ�������ӦMCU�Ļ����ж�bit31��0������ָʾMCU��ԭʼ�����ж�״̬������ǰ������ӦbitΪ1��ʾ���жϣ�Ϊ0��ʾ���жϡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mcu_wakeup_int_raw5_GPIO0        : 1;  /* bit[0] : 0�� GPIO0 �жϡ� */
        unsigned int  mcu_wakeup_int_raw5_GPIO1        : 1;  /* bit[1] : 1�� GPIO1 �жϡ� */
        unsigned int  mcu_wakeup_int_raw5_GPIO2        : 1;  /* bit[2] : 2�� GPIO2 �жϡ� */
        unsigned int  mcu_wakeup_int_raw5_GPIO3        : 1;  /* bit[3] : 3�� GPIO3 �жϡ� */
        unsigned int  mcu_wakeup_int_raw5_GPIO4        : 1;  /* bit[4] : 4�� GPIO4 �жϡ� */
        unsigned int  mcu_wakeup_int_raw5_GPIO5        : 1;  /* bit[5] : 5�� GPIO5 �жϡ� */
        unsigned int  mcu_wakeup_int_raw5_GPIO6        : 1;  /* bit[6] : 6�� GPIO6 �жϡ� */
        unsigned int  mcu_wakeup_int_raw5_GPIO7        : 1;  /* bit[7] : [7] ��GPIO7 �жϡ� */
        unsigned int  mcu_wakeup_int_raw5_GPIO8        : 1;  /* bit[8] : [8] ��GPIO8�жϡ� */
        unsigned int  mcu_wakeup_int_raw5_GPIO9        : 1;  /* bit[9] : [9] ��GPIO9�жϡ� */
        unsigned int  mcu_wakeup_int_raw5_GPIO10       : 1;  /* bit[10]: [10]��GPIO10 �жϡ� */
        unsigned int  mcu_wakeup_int_raw5_GPIO11       : 1;  /* bit[11]: [11]��GPIO11�жϡ� */
        unsigned int  mcu_wakeup_int_raw5_GPIO12       : 1;  /* bit[12]: [12]��GPIO12 �жϡ� */
        unsigned int  mcu_wakeup_int_raw5_GPIO13       : 1;  /* bit[13]: [13]��GPIO13�жϡ� */
        unsigned int  mcu_wakeup_int_raw5_CSYSPWRUPREQ : 1;  /* bit[14]: [14]��CSYSPWRUPREQ CoreSight system power up����״̬�źţ��߱�ʾ������Ч�� */
        unsigned int  mcu_wakeup_int_raw5_CDBGPWRUPREQ : 1;  /* bit[15]: [15]��CDBGPWRUPREQ CoreSight debug power up����״̬�źţ��߱�ʾ������Ч�� */
        unsigned int  mcu_wakeup_int_raw5_16reserved   : 1;  /* bit[16]: reserved */
        unsigned int  mcu_wakeup_int_raw5_RTC1_INT     : 1;  /* bit[17]: [17]��RTC1_INT */
        unsigned int  mcu_wakeup_int_raw5_RTC0_INT     : 1;  /* bit[18]: [18]��RTC0_INT  */
        unsigned int  mcu_wakeup_int_raw5_19reserved   : 1;  /* bit[19]: 19�� reserved */
        unsigned int  mcu_wakeup_int_raw5_20reserved   : 1;  /* bit[20]: 20�� reserved */
        unsigned int  mcu_wakeup_int_raw5_Timer14      : 1;  /* bit[21]: 21�� Timer14 AP Dual_Timer7_0�жϡ� */
        unsigned int  mcu_wakeup_int_raw5_Timer15      : 1;  /* bit[22]: 22�� Timer15 AP Dual_Timer7_1�жϡ� */
        unsigned int  mcu_wakeup_int_raw5_Timer16      : 1;  /* bit[23]: 23�� Timer16 AP Dual_Timer8_0�жϡ� */
        unsigned int  mcu_wakeup_int_raw5_Timer17      : 1;  /* bit[24]: 24�� Timer17 AP Dual_Timer8_1�жϡ� */
        unsigned int  mcu_wakeup_int_raw5_CM3Timer0    : 1;  /* bit[25]: 25�� CM3 Timer0 CM3 Dual_Timer0_0�жϡ� */
        unsigned int  mcu_wakeup_int_raw5_CM3Timer1    : 1;  /* bit[26]: 26�� CM3 Timer1 CM3 Dual_Timer0_1�жϡ� */
        unsigned int  mcu_wakeup_int_raw5_MTimer16     : 1;  /* bit[27]: 27�� MTimer16 Modem Dual_Timer8_0�жϡ� */
        unsigned int  mcu_wakeup_int_raw5_MTimer17     : 1;  /* bit[28]: 28�� MTimer17 Modem Dual_Timer8_1�жϡ� */
        unsigned int  mcu_wakeup_int_raw5_MTimer18     : 1;  /* bit[29]: 29�� MTimer18 Modem Dual_Timer9_0�жϡ� */
        unsigned int  mcu_wakeup_int_raw5_MTimer19     : 1;  /* bit[30]: 30�� MTimer19 Modem Dual_Timer9_1�жϡ� */
        unsigned int  mcu_wakeup_int_raw5_CM3WatchDog0 : 1;  /* bit[31]: 31�� CM3 WatchDog0��λ�����жϡ� */
    } reg;
} SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_GPIO0_START         (0)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_GPIO0_END           (0)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_GPIO1_START         (1)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_GPIO1_END           (1)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_GPIO2_START         (2)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_GPIO2_END           (2)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_GPIO3_START         (3)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_GPIO3_END           (3)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_GPIO4_START         (4)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_GPIO4_END           (4)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_GPIO5_START         (5)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_GPIO5_END           (5)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_GPIO6_START         (6)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_GPIO6_END           (6)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_GPIO7_START         (7)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_GPIO7_END           (7)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_GPIO8_START         (8)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_GPIO8_END           (8)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_GPIO9_START         (9)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_GPIO9_END           (9)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_GPIO10_START        (10)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_GPIO10_END          (10)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_GPIO11_START        (11)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_GPIO11_END          (11)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_GPIO12_START        (12)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_GPIO12_END          (12)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_GPIO13_START        (13)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_GPIO13_END          (13)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_CSYSPWRUPREQ_START  (14)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_CSYSPWRUPREQ_END    (14)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_CDBGPWRUPREQ_START  (15)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_CDBGPWRUPREQ_END    (15)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_16reserved_START    (16)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_16reserved_END      (16)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_RTC1_INT_START      (17)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_RTC1_INT_END        (17)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_RTC0_INT_START      (18)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_RTC0_INT_END        (18)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_19reserved_START    (19)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_19reserved_END      (19)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_20reserved_START    (20)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_20reserved_END      (20)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_Timer14_START       (21)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_Timer14_END         (21)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_Timer15_START       (22)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_Timer15_END         (22)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_Timer16_START       (23)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_Timer16_END         (23)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_Timer17_START       (24)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_Timer17_END         (24)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_CM3Timer0_START     (25)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_CM3Timer0_END       (25)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_CM3Timer1_START     (26)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_CM3Timer1_END       (26)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_MTimer16_START      (27)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_MTimer16_END        (27)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_MTimer17_START      (28)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_MTimer17_END        (28)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_MTimer18_START      (29)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_MTimer18_END        (29)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_MTimer19_START      (30)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_MTimer19_END        (30)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_CM3WatchDog0_START  (31)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR5_mcu_wakeup_int_raw5_CM3WatchDog0_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_UNION
 �ṹ˵��  : SC_MCU_WKUP_INT_STATM5 �Ĵ����ṹ���塣��ַƫ����:0x06C����ֵ:0x00000000�����:32
 �Ĵ���˵��: MCU���κ����жϼĴ�������ӦMCU�Ļ����ж�bit31��0������ָʾMCU�ĵ�ǰ�����ж�״̬�����κ󣩡���ӦbitΪ1��ʾ���жϣ�Ϊ0��ʾ���жϡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mcu_wakeup_int_mask5_GPIO0        : 1;  /* bit[0] : 0�� GPIO0 �жϡ� */
        unsigned int  mcu_wakeup_int_mask5_GPIO1        : 1;  /* bit[1] : 1�� GPIO1 �жϡ� */
        unsigned int  mcu_wakeup_int_mask5_GPIO2        : 1;  /* bit[2] : 2�� GPIO2 �жϡ� */
        unsigned int  mcu_wakeup_int_mask5_GPIO3        : 1;  /* bit[3] : 3�� GPIO3 �жϡ� */
        unsigned int  mcu_wakeup_int_mask5_GPIO4        : 1;  /* bit[4] : 4�� GPIO4 �жϡ� */
        unsigned int  mcu_wakeup_int_mask5_GPIO5        : 1;  /* bit[5] : 5�� GPIO5 �жϡ� */
        unsigned int  mcu_wakeup_int_mask5_GPIO6        : 1;  /* bit[6] : 6�� GPIO6 �жϡ� */
        unsigned int  mcu_wakeup_int_mask5_GPIO7        : 1;  /* bit[7] : [7] ��GPIO7 �жϡ� */
        unsigned int  mcu_wakeup_int_mask5_GPIO8        : 1;  /* bit[8] : [8] ��GPIO8�жϡ� */
        unsigned int  mcu_wakeup_int_mask5_GPIO9        : 1;  /* bit[9] : [9] ��GPIO9�жϡ� */
        unsigned int  mcu_wakeup_int_mask5_GPIO10       : 1;  /* bit[10]: [10]��GPIO10 �жϡ� */
        unsigned int  mcu_wakeup_int_mask5_GPIO11       : 1;  /* bit[11]: [11]��GPIO11�жϡ� */
        unsigned int  mcu_wakeup_int_mask5_GPIO12       : 1;  /* bit[12]: [12]��GPIO12 �жϡ� */
        unsigned int  mcu_wakeup_int_mask5_GPIO13       : 1;  /* bit[13]: [13]��GPIO13�жϡ� */
        unsigned int  mcu_wakeup_int_mask5_CSYSPWRUPREQ : 1;  /* bit[14]: [14]��CSYSPWRUPREQ CoreSight system power up����״̬�źţ��߱�ʾ������Ч�� */
        unsigned int  mcu_wakeup_int_mask5_CDBGPWRUPREQ : 1;  /* bit[15]: [15]��CDBGPWRUPREQ CoreSight debug power up����״̬�źţ��߱�ʾ������Ч�� */
        unsigned int  mcu_wakeup_int_mask5_16reserved   : 1;  /* bit[16]: reserved */
        unsigned int  mcu_wakeup_int_mask5_RTC1_INT     : 1;  /* bit[17]: [17]��RTC1_INT */
        unsigned int  mcu_wakeup_int_mask5_RTC0_INT     : 1;  /* bit[18]: [18]��RTC0_INT  */
        unsigned int  mcu_wakeup_int_mask5_19reserved   : 1;  /* bit[19]: 19�� reserved */
        unsigned int  mcu_wakeup_int_mask5_20reserved   : 1;  /* bit[20]: 20�� reserved */
        unsigned int  mcu_wakeup_int_mask5_Timer14      : 1;  /* bit[21]: 21�� Timer14 AP Dual_Timer7_0�жϡ� */
        unsigned int  mcu_wakeup_int_mask5_Timer15      : 1;  /* bit[22]: 22�� Timer15 AP Dual_Timer7_1�жϡ� */
        unsigned int  mcu_wakeup_int_mask5_Timer16      : 1;  /* bit[23]: 23�� Timer16 AP Dual_Timer8_0�жϡ� */
        unsigned int  mcu_wakeup_int_mask5_Timer17      : 1;  /* bit[24]: 24�� Timer17 AP Dual_Timer8_1�жϡ� */
        unsigned int  mcu_wakeup_int_mask5_CM3Timer0    : 1;  /* bit[25]: 25�� CM3 Timer0 CM3 Dual_Timer0_0�жϡ� */
        unsigned int  mcu_wakeup_int_mask5_CM3Timer1    : 1;  /* bit[26]: 26�� CM3 Timer1 CM3 Dual_Timer0_1�жϡ� */
        unsigned int  mcu_wakeup_int_mask5_MTimer16     : 1;  /* bit[27]: 27�� MTimer16 Modem Dual_Timer8_0�жϡ� */
        unsigned int  mcu_wakeup_int_mask5_MTimer17     : 1;  /* bit[28]: 28�� MTimer17 Modem Dual_Timer8_1�жϡ� */
        unsigned int  mcu_wakeup_int_mask5_MTimer18     : 1;  /* bit[29]: 29�� MTimer18 Modem Dual_Timer9_0�жϡ� */
        unsigned int  mcu_wakeup_int_mask5_MTimer19     : 1;  /* bit[30]: 30�� MTimer19 Modem Dual_Timer9_1�жϡ� */
        unsigned int  mcu_wakeup_int_mask5_CM3WatchDog0 : 1;  /* bit[31]: 31�� CM3 WatchDog0��λ�����жϡ� */
    } reg;
} SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_GPIO0_START         (0)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_GPIO0_END           (0)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_GPIO1_START         (1)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_GPIO1_END           (1)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_GPIO2_START         (2)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_GPIO2_END           (2)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_GPIO3_START         (3)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_GPIO3_END           (3)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_GPIO4_START         (4)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_GPIO4_END           (4)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_GPIO5_START         (5)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_GPIO5_END           (5)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_GPIO6_START         (6)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_GPIO6_END           (6)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_GPIO7_START         (7)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_GPIO7_END           (7)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_GPIO8_START         (8)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_GPIO8_END           (8)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_GPIO9_START         (9)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_GPIO9_END           (9)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_GPIO10_START        (10)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_GPIO10_END          (10)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_GPIO11_START        (11)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_GPIO11_END          (11)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_GPIO12_START        (12)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_GPIO12_END          (12)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_GPIO13_START        (13)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_GPIO13_END          (13)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_CSYSPWRUPREQ_START  (14)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_CSYSPWRUPREQ_END    (14)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_CDBGPWRUPREQ_START  (15)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_CDBGPWRUPREQ_END    (15)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_16reserved_START    (16)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_16reserved_END      (16)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_RTC1_INT_START      (17)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_RTC1_INT_END        (17)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_RTC0_INT_START      (18)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_RTC0_INT_END        (18)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_19reserved_START    (19)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_19reserved_END      (19)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_20reserved_START    (20)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_20reserved_END      (20)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_Timer14_START       (21)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_Timer14_END         (21)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_Timer15_START       (22)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_Timer15_END         (22)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_Timer16_START       (23)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_Timer16_END         (23)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_Timer17_START       (24)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_Timer17_END         (24)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_CM3Timer0_START     (25)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_CM3Timer0_END       (25)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_CM3Timer1_START     (26)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_CM3Timer1_END       (26)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_MTimer16_START      (27)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_MTimer16_END        (27)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_MTimer17_START      (28)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_MTimer17_END        (28)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_MTimer18_START      (29)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_MTimer18_END        (29)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_MTimer19_START      (30)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_MTimer19_END        (30)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_CM3WatchDog0_START  (31)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM5_mcu_wakeup_int_mask5_CM3WatchDog0_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN4_UNION
 �ṹ˵��  : SC_MCU_WKUP_INT_EN4 �Ĵ����ṹ���塣��ַƫ����:0x094����ֵ:0x00000000�����:32
 �Ĵ���˵��: HiFi�����ж��͸�MCU�Ļ����ж�ʹ�ܼĴ�������ӦHiFi�Ļ����ж�bit0��31�����ڶ�MCU�Ļ����жϽ����������á���ӦbitΪ1��ʾʹ����Ӧ�жϣ�Ϊ0��ʾ�����жϡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mcu_wakeup_int_en4_CSYSPWRUPREQ   : 1;  /* bit[0]    : CSYSPWRUPREQ �жϡ�  */
        unsigned int  mcu_wakeup_int_en4_CDBGPWRUPREQ   : 1;  /* bit[1]    : CDBGPWRUPREQ �жϡ�  */
        unsigned int  mcu_wakeup_int_en4_MTimer10       : 1;  /* bit[2]    : MTimer10 �жϡ�  */
        unsigned int  mcu_wakeup_int_en4_MTimer11       : 1;  /* bit[3]    : MTimer11�жϡ�  */
        unsigned int  mcu_wakeup_int_en4_MTimer12       : 1;  /* bit[4]    : MTimer12�жϡ� */
        unsigned int  mcu_wakeup_int_en4_MTimer13       : 1;  /* bit[5]    : MTimer13�жϡ� */
        unsigned int  mcu_wakeup_int_en4_WatchDog1      : 1;  /* bit[6]    : Hifi WatchDog�жϡ� */
        unsigned int  mcu_wakeup_int_en4_7reserved      : 1;  /* bit[7]    : reserved */
        unsigned int  mcu_wakeup_int_en4_IPC2HIFI_0     : 1;  /* bit[8]    : mcu_wakeup_int_en4_IPC2HIFI_0
                                                                             IPC2HIFI_0 �ǰ�ȫIPC�����HIFI2�ĺ˼��жϡ� */
        unsigned int  mcu_wakeup_int_en4_HIFI_NMI_INT   : 1;  /* bit[9]    : HIFI_NMI_INT �жϡ� */
        unsigned int  mcu_wakeup_int_en4_AP_EDMAC_NSORS : 1;  /* bit[10]   : AP EDMAC��ȫ�ж�3��AP EDMAC�ǰ�ȫ�ж�3����������� */
        unsigned int  mcu_wakeup_int_en4_11reserved     : 1;  /* bit[11]   : reserved */
        unsigned int  mcu_wakeup_int_en4_SEC_IPC2HIFI_0 : 1;  /* bit[12]   : ��ȫIPC�����HIFI2�ĺ˼��жϡ� */
        unsigned int  mcu_wakeup_int_en4_13GPIO11       : 1;  /* bit[13]   : GPIO11��8bit����жϡ� */
        unsigned int  mcu_wakeup_int_en4_14reserved     : 1;  /* bit[14]   : reserved */
        unsigned int  mcu_wakeup_int_en4_15reserved     : 1;  /* bit[15]   : reserved */
        unsigned int  mcu_wakeup_int_en4_31reserved     : 16; /* bit[16-31]: reserved */
    } reg;
} SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN4_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN4_mcu_wakeup_int_en4_CSYSPWRUPREQ_START    (0)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN4_mcu_wakeup_int_en4_CSYSPWRUPREQ_END      (0)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN4_mcu_wakeup_int_en4_CDBGPWRUPREQ_START    (1)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN4_mcu_wakeup_int_en4_CDBGPWRUPREQ_END      (1)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN4_mcu_wakeup_int_en4_MTimer10_START        (2)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN4_mcu_wakeup_int_en4_MTimer10_END          (2)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN4_mcu_wakeup_int_en4_MTimer11_START        (3)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN4_mcu_wakeup_int_en4_MTimer11_END          (3)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN4_mcu_wakeup_int_en4_MTimer12_START        (4)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN4_mcu_wakeup_int_en4_MTimer12_END          (4)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN4_mcu_wakeup_int_en4_MTimer13_START        (5)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN4_mcu_wakeup_int_en4_MTimer13_END          (5)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN4_mcu_wakeup_int_en4_WatchDog1_START       (6)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN4_mcu_wakeup_int_en4_WatchDog1_END         (6)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN4_mcu_wakeup_int_en4_7reserved_START       (7)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN4_mcu_wakeup_int_en4_7reserved_END         (7)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN4_mcu_wakeup_int_en4_IPC2HIFI_0_START      (8)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN4_mcu_wakeup_int_en4_IPC2HIFI_0_END        (8)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN4_mcu_wakeup_int_en4_HIFI_NMI_INT_START    (9)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN4_mcu_wakeup_int_en4_HIFI_NMI_INT_END      (9)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN4_mcu_wakeup_int_en4_AP_EDMAC_NSORS_START  (10)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN4_mcu_wakeup_int_en4_AP_EDMAC_NSORS_END    (10)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN4_mcu_wakeup_int_en4_11reserved_START      (11)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN4_mcu_wakeup_int_en4_11reserved_END        (11)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN4_mcu_wakeup_int_en4_SEC_IPC2HIFI_0_START  (12)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN4_mcu_wakeup_int_en4_SEC_IPC2HIFI_0_END    (12)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN4_mcu_wakeup_int_en4_13GPIO11_START        (13)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN4_mcu_wakeup_int_en4_13GPIO11_END          (13)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN4_mcu_wakeup_int_en4_14reserved_START      (14)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN4_mcu_wakeup_int_en4_14reserved_END        (14)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN4_mcu_wakeup_int_en4_15reserved_START      (15)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN4_mcu_wakeup_int_en4_15reserved_END        (15)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN4_mcu_wakeup_int_en4_31reserved_START      (16)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN4_mcu_wakeup_int_en4_31reserved_END        (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR4_UNION
 �ṹ˵��  : SC_MCU_WKUP_INT_STATR4 �Ĵ����ṹ���塣��ַƫ����:0x098����ֵ:0x00000000�����:32
 �Ĵ���˵��: HiFi�����ж��͸�MCU��ԭʼ�����жϼĴ�������ӦHiFi�Ļ����ж�bit0��31������ָʾMCU��ԭʼ�����ж�״̬������ǰ������ӦbitΪ1��ʾ���жϣ�Ϊ0��ʾ���жϡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mcu_wakeup_int_raw4_CSYSPWRUPREQ   : 1;  /* bit[0]    : CSYSPWRUPREQ �жϡ�  */
        unsigned int  mcu_wakeup_int_raw4_CDBGPWRUPREQ   : 1;  /* bit[1]    : CDBGPWRUPREQ �жϡ�  */
        unsigned int  mcu_wakeup_int_raw4_MTimer10       : 1;  /* bit[2]    : MTimer10 �жϡ�  */
        unsigned int  mcu_wakeup_int_raw4_MTimer11       : 1;  /* bit[3]    : MTimer11�жϡ�  */
        unsigned int  mcu_wakeup_int_raw4_MTimer12       : 1;  /* bit[4]    : MTimer12�жϡ� */
        unsigned int  mcu_wakeup_int_raw4_MTimer13       : 1;  /* bit[5]    : MTimer13�жϡ� */
        unsigned int  mcu_wakeup_int_raw4_WatchDog1      : 1;  /* bit[6]    : Hifi WatchDog�жϡ� */
        unsigned int  mcu_wakeup_int_raw4_7reserved      : 1;  /* bit[7]    : reserved */
        unsigned int  mcu_wakeup_int_raw4_IPC2HIFI_0     : 1;  /* bit[8]    : mcu_wakeup_int_en4_IPC2HIFI_0
                                                                              IPC2HIFI_0 �ǰ�ȫIPC�����HIFI2�ĺ˼��жϡ� */
        unsigned int  mcu_wakeup_int_raw4_HIFI_NMI_INT   : 1;  /* bit[9]    : HIFI_NMI_INT �жϡ� */
        unsigned int  mcu_wakeup_int_raw4_AP_EDMAC_NSORS : 1;  /* bit[10]   : AP EDMAC��ȫ�ж�3��AP EDMAC�ǰ�ȫ�ж�3����������� */
        unsigned int  mcu_wakeup_int_raw4_11reserved     : 1;  /* bit[11]   : reserved */
        unsigned int  mcu_wakeup_int_raw4_SEC_IPC2HIFI_0 : 1;  /* bit[12]   : ��ȫIPC�����HIFI2�ĺ˼��жϡ� */
        unsigned int  mcu_wakeup_int_raw4_13GPIO11       : 1;  /* bit[13]   : GPIO11��8bit����жϡ� */
        unsigned int  mcu_wakeup_int_raw4_14reserved     : 1;  /* bit[14]   : reserved */
        unsigned int  mcu_wakeup_int_raw4_15reserved     : 1;  /* bit[15]   : reserved */
        unsigned int  mcu_wakeup_int_raw4_31reserved     : 16; /* bit[16-31]: reserved */
    } reg;
} SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR4_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR4_mcu_wakeup_int_raw4_CSYSPWRUPREQ_START    (0)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR4_mcu_wakeup_int_raw4_CSYSPWRUPREQ_END      (0)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR4_mcu_wakeup_int_raw4_CDBGPWRUPREQ_START    (1)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR4_mcu_wakeup_int_raw4_CDBGPWRUPREQ_END      (1)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR4_mcu_wakeup_int_raw4_MTimer10_START        (2)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR4_mcu_wakeup_int_raw4_MTimer10_END          (2)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR4_mcu_wakeup_int_raw4_MTimer11_START        (3)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR4_mcu_wakeup_int_raw4_MTimer11_END          (3)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR4_mcu_wakeup_int_raw4_MTimer12_START        (4)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR4_mcu_wakeup_int_raw4_MTimer12_END          (4)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR4_mcu_wakeup_int_raw4_MTimer13_START        (5)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR4_mcu_wakeup_int_raw4_MTimer13_END          (5)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR4_mcu_wakeup_int_raw4_WatchDog1_START       (6)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR4_mcu_wakeup_int_raw4_WatchDog1_END         (6)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR4_mcu_wakeup_int_raw4_7reserved_START       (7)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR4_mcu_wakeup_int_raw4_7reserved_END         (7)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR4_mcu_wakeup_int_raw4_IPC2HIFI_0_START      (8)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR4_mcu_wakeup_int_raw4_IPC2HIFI_0_END        (8)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR4_mcu_wakeup_int_raw4_HIFI_NMI_INT_START    (9)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR4_mcu_wakeup_int_raw4_HIFI_NMI_INT_END      (9)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR4_mcu_wakeup_int_raw4_AP_EDMAC_NSORS_START  (10)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR4_mcu_wakeup_int_raw4_AP_EDMAC_NSORS_END    (10)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR4_mcu_wakeup_int_raw4_11reserved_START      (11)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR4_mcu_wakeup_int_raw4_11reserved_END        (11)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR4_mcu_wakeup_int_raw4_SEC_IPC2HIFI_0_START  (12)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR4_mcu_wakeup_int_raw4_SEC_IPC2HIFI_0_END    (12)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR4_mcu_wakeup_int_raw4_13GPIO11_START        (13)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR4_mcu_wakeup_int_raw4_13GPIO11_END          (13)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR4_mcu_wakeup_int_raw4_14reserved_START      (14)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR4_mcu_wakeup_int_raw4_14reserved_END        (14)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR4_mcu_wakeup_int_raw4_15reserved_START      (15)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR4_mcu_wakeup_int_raw4_15reserved_END        (15)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR4_mcu_wakeup_int_raw4_31reserved_START      (16)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR4_mcu_wakeup_int_raw4_31reserved_END        (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM4_UNION
 �ṹ˵��  : SC_MCU_WKUP_INT_STATM4 �Ĵ����ṹ���塣��ַƫ����:0x09C����ֵ:0x00000000�����:32
 �Ĵ���˵��: HiFi�����ж��͸�MCU�����κ����жϼĴ�������ӦHiFi�Ļ����ж�bit0��31������ָʾMCU�ĵ�ǰ�����ж�״̬�����κ󣩡���ӦbitΪ1��ʾ���жϣ�Ϊ0��ʾ���жϡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mcu_wakeup_int_mask4_CSYSPWRUPREQ   : 1;  /* bit[0]    : CSYSPWRUPREQ �жϡ�  */
        unsigned int  mcu_wakeup_int_mask4_CDBGPWRUPREQ   : 1;  /* bit[1]    : CDBGPWRUPREQ �жϡ�  */
        unsigned int  mcu_wakeup_int_mask4_MTimer10       : 1;  /* bit[2]    : MTimer10 �жϡ�  */
        unsigned int  mcu_wakeup_int_mask4_MTimer11       : 1;  /* bit[3]    : MTimer11�жϡ�  */
        unsigned int  mcu_wakeup_int_mask4_MTimer12       : 1;  /* bit[4]    : MTimer12�жϡ� */
        unsigned int  mcu_wakeup_int_mask4_MTimer13       : 1;  /* bit[5]    : MTimer13�жϡ� */
        unsigned int  mcu_wakeup_int_mask4_WatchDog1      : 1;  /* bit[6]    : Hifi WatchDog�жϡ� */
        unsigned int  mcu_wakeup_int_mask4_7reserved      : 1;  /* bit[7]    : reserved */
        unsigned int  mcu_wakeup_int_mask4_IPC2HIFI_0     : 1;  /* bit[8]    : mcu_wakeup_int_en4_IPC2HIFI_0
                                                                               IPC2HIFI_0 �ǰ�ȫIPC�����HIFI2�ĺ˼��жϡ� */
        unsigned int  mcu_wakeup_int_mask4_HIFI_NMI_INT   : 1;  /* bit[9]    : HIFI_NMI_INT �жϡ� */
        unsigned int  mcu_wakeup_int_mask4_AP_EDMAC_NSORS : 1;  /* bit[10]   : AP EDMAC��ȫ�ж�3��AP EDMAC�ǰ�ȫ�ж�3����������� */
        unsigned int  mcu_wakeup_int_mask4_11reserved     : 1;  /* bit[11]   : reserved */
        unsigned int  mcu_wakeup_int_mask4_SEC_IPC2HIFI_0 : 1;  /* bit[12]   : ��ȫIPC�����HIFI2�ĺ˼��жϡ� */
        unsigned int  mcu_wakeup_int_mask4_13GPIO11       : 1;  /* bit[13]   : GPIO11��8bit����жϡ� */
        unsigned int  mcu_wakeup_int_mask4_14reserved     : 1;  /* bit[14]   : reserved */
        unsigned int  mcu_wakeup_int_mask4_15reserved     : 1;  /* bit[15]   : reserved */
        unsigned int  mcu_wakeup_int_mask4_31reserved     : 16; /* bit[16-31]: reserved */
    } reg;
} SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM4_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM4_mcu_wakeup_int_mask4_CSYSPWRUPREQ_START    (0)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM4_mcu_wakeup_int_mask4_CSYSPWRUPREQ_END      (0)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM4_mcu_wakeup_int_mask4_CDBGPWRUPREQ_START    (1)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM4_mcu_wakeup_int_mask4_CDBGPWRUPREQ_END      (1)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM4_mcu_wakeup_int_mask4_MTimer10_START        (2)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM4_mcu_wakeup_int_mask4_MTimer10_END          (2)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM4_mcu_wakeup_int_mask4_MTimer11_START        (3)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM4_mcu_wakeup_int_mask4_MTimer11_END          (3)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM4_mcu_wakeup_int_mask4_MTimer12_START        (4)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM4_mcu_wakeup_int_mask4_MTimer12_END          (4)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM4_mcu_wakeup_int_mask4_MTimer13_START        (5)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM4_mcu_wakeup_int_mask4_MTimer13_END          (5)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM4_mcu_wakeup_int_mask4_WatchDog1_START       (6)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM4_mcu_wakeup_int_mask4_WatchDog1_END         (6)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM4_mcu_wakeup_int_mask4_7reserved_START       (7)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM4_mcu_wakeup_int_mask4_7reserved_END         (7)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM4_mcu_wakeup_int_mask4_IPC2HIFI_0_START      (8)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM4_mcu_wakeup_int_mask4_IPC2HIFI_0_END        (8)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM4_mcu_wakeup_int_mask4_HIFI_NMI_INT_START    (9)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM4_mcu_wakeup_int_mask4_HIFI_NMI_INT_END      (9)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM4_mcu_wakeup_int_mask4_AP_EDMAC_NSORS_START  (10)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM4_mcu_wakeup_int_mask4_AP_EDMAC_NSORS_END    (10)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM4_mcu_wakeup_int_mask4_11reserved_START      (11)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM4_mcu_wakeup_int_mask4_11reserved_END        (11)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM4_mcu_wakeup_int_mask4_SEC_IPC2HIFI_0_START  (12)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM4_mcu_wakeup_int_mask4_SEC_IPC2HIFI_0_END    (12)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM4_mcu_wakeup_int_mask4_13GPIO11_START        (13)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM4_mcu_wakeup_int_mask4_13GPIO11_END          (13)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM4_mcu_wakeup_int_mask4_14reserved_START      (14)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM4_mcu_wakeup_int_mask4_14reserved_END        (14)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM4_mcu_wakeup_int_mask4_15reserved_START      (15)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM4_mcu_wakeup_int_mask4_15reserved_END        (15)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM4_mcu_wakeup_int_mask4_31reserved_START      (16)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM4_mcu_wakeup_int_mask4_31reserved_END        (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_UNION
 �ṹ˵��  : SC_MCU_WKUP_INT_EN0 �Ĵ����ṹ���塣��ַƫ����:0x0A8����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU�����ж��͸�MCU�Ļ����ж�ʹ�ܼĴ�������ӦACPU�Ļ����ж�bit0��31�����ڶ�MCU�Ļ����жϽ����������á���ӦbitΪ1��ʾʹ����Ӧ�жϣ�Ϊ0��ʾ�����жϡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mcu_wakeup_int_en0_GPIO0            : 1;  /* bit[0] : [0] ��GPIO0�жϡ�  */
        unsigned int  mcu_wakeup_int_en0_GPIO1            : 1;  /* bit[1] : [1] ��GPIO1�жϡ� */
        unsigned int  mcu_wakeup_int_en0_GPIO2            : 1;  /* bit[2] : [2] ��GPIO2�жϡ�  */
        unsigned int  mcu_wakeup_int_en0_GPIO3            : 1;  /* bit[3] : [3] ��GPIO3�жϡ�  */
        unsigned int  mcu_wakeup_int_en0_4reserved        : 1;  /* bit[4] : reserved */
        unsigned int  mcu_wakeup_int_en0_5reserved        : 1;  /* bit[5] : reserved */
        unsigned int  mcu_wakeup_int_en0_6reserved        : 1;  /* bit[6] : reserved */
        unsigned int  mcu_wakeup_int_en0_7reserved        : 1;  /* bit[7] : reserved */
        unsigned int  mcu_wakeup_int_en0_8reserved        : 1;  /* bit[8] : reserved */
        unsigned int  mcu_wakeup_int_en0_9reserved        : 1;  /* bit[9] : reserved */
        unsigned int  mcu_wakeup_int_en0_10reserved       : 1;  /* bit[10]: reserved */
        unsigned int  mcu_wakeup_int_en0_11reserved       : 1;  /* bit[11]: reserved */
        unsigned int  mcu_wakeup_int_en0_12reserved       : 1;  /* bit[12]: reserved */
        unsigned int  mcu_wakeup_int_en0_13reserved       : 1;  /* bit[13]: reserved */
        unsigned int  mcu_wakeup_int_en0_CSYSPWRUPREQ     : 1;  /* bit[14]: [14]��CSYSPWRUPREQ CoreSight system power up����״̬�źţ��߱�ʾ������Ч�� */
        unsigned int  mcu_wakeup_int_en0_CDBGPWRUPREQ     : 1;  /* bit[15]: [15]��CDBGPWRUPREQ CoreSight debug power up����״̬�źţ��߱�ʾ������Ч�� */
        unsigned int  mcu_wakeup_int_en0_scoff_2acpu_comb : 1;  /* bit[16]: [16]��SCOFF��ACPU����ϻ����жϣ�����ο�SCOFF�����жϼĴ����� */
        unsigned int  mcu_wakeup_int_en0_RTC1_INT         : 1;  /* bit[17]: [17]��RTC1_INT�жϡ�  */
        unsigned int  mcu_wakeup_int_en0_RTC0_INT         : 1;  /* bit[18]: [18]��RTC0_INT�жϡ�  */
        unsigned int  mcu_wakeup_int_en0_Timer0           : 1;  /* bit[19]: [27]��Timer0 AP Dual_Timer0_0�жϡ� */
        unsigned int  mcu_wakeup_int_en0_Timer1           : 1;  /* bit[20]: [28]��Timer1 AP Dual_Timer0_1�жϡ� */
        unsigned int  mcu_wakeup_int_en0_Timer2           : 1;  /* bit[21]: [29]��Timer2 AP Dual_Timer1_0�жϡ� */
        unsigned int  mcu_wakeup_int_en0_Timer3           : 1;  /* bit[22]: [30]��Timer3 AP Dual_Timer1_1�жϡ� */
        unsigned int  mcu_wakeup_int_en0_Timer4           : 1;  /* bit[23]: [23]��Timer4 AP Dual_Timer2_0�жϡ� */
        unsigned int  mcu_wakeup_int_en0_Timer5           : 1;  /* bit[24]: [24]��Timer5 AP Dual_Timer2_1�жϡ� */
        unsigned int  mcu_wakeup_int_en0_Timer6           : 1;  /* bit[25]: [25]��Timer6 AP Dual_Timer3_0�жϡ� */
        unsigned int  mcu_wakeup_int_en0_Timer7           : 1;  /* bit[26]: [26]��Timer7 AP Dual_Timer3_1�жϡ� */
        unsigned int  mcu_wakeup_int_en0_Timer8           : 1;  /* bit[27]: [27]��Timer8 AP Dual_Timer4_0�жϡ� */
        unsigned int  mcu_wakeup_int_en0_Timer9           : 1;  /* bit[28]: [28]��Timer9 AP Dual_Timer4_1�жϡ� */
        unsigned int  mcu_wakeup_int_en0_Timer10          : 1;  /* bit[29]: [29]��Timer10 AP Dual_Timer5_0�жϡ� */
        unsigned int  mcu_wakeup_int_en0_Timer11          : 1;  /* bit[30]: [30]��Timer11 AP Dual_Timer5_1�жϡ� */
        unsigned int  mcu_wakeup_int_en0_Timer12          : 1;  /* bit[31]: [31]�� Timer12 AP Dual_Timer6_0�жϡ� */
    } reg;
} SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_GPIO0_START             (0)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_GPIO0_END               (0)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_GPIO1_START             (1)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_GPIO1_END               (1)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_GPIO2_START             (2)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_GPIO2_END               (2)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_GPIO3_START             (3)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_GPIO3_END               (3)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_4reserved_START         (4)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_4reserved_END           (4)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_5reserved_START         (5)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_5reserved_END           (5)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_6reserved_START         (6)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_6reserved_END           (6)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_7reserved_START         (7)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_7reserved_END           (7)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_8reserved_START         (8)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_8reserved_END           (8)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_9reserved_START         (9)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_9reserved_END           (9)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_10reserved_START        (10)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_10reserved_END          (10)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_11reserved_START        (11)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_11reserved_END          (11)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_12reserved_START        (12)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_12reserved_END          (12)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_13reserved_START        (13)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_13reserved_END          (13)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_CSYSPWRUPREQ_START      (14)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_CSYSPWRUPREQ_END        (14)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_CDBGPWRUPREQ_START      (15)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_CDBGPWRUPREQ_END        (15)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_scoff_2acpu_comb_START  (16)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_scoff_2acpu_comb_END    (16)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_RTC1_INT_START          (17)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_RTC1_INT_END            (17)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_RTC0_INT_START          (18)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_RTC0_INT_END            (18)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_Timer0_START            (19)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_Timer0_END              (19)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_Timer1_START            (20)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_Timer1_END              (20)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_Timer2_START            (21)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_Timer2_END              (21)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_Timer3_START            (22)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_Timer3_END              (22)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_Timer4_START            (23)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_Timer4_END              (23)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_Timer5_START            (24)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_Timer5_END              (24)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_Timer6_START            (25)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_Timer6_END              (25)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_Timer7_START            (26)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_Timer7_END              (26)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_Timer8_START            (27)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_Timer8_END              (27)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_Timer9_START            (28)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_Timer9_END              (28)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_Timer10_START           (29)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_Timer10_END             (29)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_Timer11_START           (30)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_Timer11_END             (30)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_Timer12_START           (31)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN0_mcu_wakeup_int_en0_Timer12_END             (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_UNION
 �ṹ˵��  : SC_MCU_WKUP_INT_STATR0 �Ĵ����ṹ���塣��ַƫ����:0x0AC����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU�����ж��͸�MCU��ԭʼ�����жϼĴ�������ӦACPU�Ļ����ж�bit0��31������ָʾMCU��ԭʼ�����ж�״̬������ǰ������ӦbitΪ1��ʾ���жϣ�Ϊ0��ʾ���жϡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mcu_wakeup_int_raw0_GPIO0            : 1;  /* bit[0] : [0] ��GPIO0�жϡ�  */
        unsigned int  mcu_wakeup_int_raw0_GPIO1            : 1;  /* bit[1] : [1] ��GPIO1�жϡ� */
        unsigned int  mcu_wakeup_int_raw0_GPIO2            : 1;  /* bit[2] : [2] ��GPIO2�жϡ�  */
        unsigned int  mcu_wakeup_int_raw0_GPIO3            : 1;  /* bit[3] : [3] ��GPIO3�жϡ�  */
        unsigned int  mcu_wakeup_int_raw0_4reserved        : 1;  /* bit[4] : reserved */
        unsigned int  mcu_wakeup_int_raw0_5reserved        : 1;  /* bit[5] : reserved */
        unsigned int  mcu_wakeup_int_raw0_6reserved        : 1;  /* bit[6] : reserved */
        unsigned int  mcu_wakeup_int_raw0_7reserved        : 1;  /* bit[7] : reserved */
        unsigned int  mcu_wakeup_int_raw0_8reserved        : 1;  /* bit[8] : reserved */
        unsigned int  mcu_wakeup_int_raw0_9reserved        : 1;  /* bit[9] : reserved */
        unsigned int  mcu_wakeup_int_raw0_10reserved       : 1;  /* bit[10]: reserved */
        unsigned int  mcu_wakeup_int_raw0_11reserved       : 1;  /* bit[11]: reserved */
        unsigned int  mcu_wakeup_int_raw0_12reserved       : 1;  /* bit[12]: reserved */
        unsigned int  mcu_wakeup_int_raw0_13reserved       : 1;  /* bit[13]: reserved */
        unsigned int  mcu_wakeup_int_raw0_CSYSPWRUPREQ     : 1;  /* bit[14]: [14]��CSYSPWRUPREQ CoreSight system power up����״̬�źţ��߱�ʾ������Ч�� */
        unsigned int  mcu_wakeup_int_raw0_CDBGPWRUPREQ     : 1;  /* bit[15]: [15]��CDBGPWRUPREQ CoreSight debug power up����״̬�źţ��߱�ʾ������Ч�� */
        unsigned int  mcu_wakeup_int_raw0_scoff_2acpu_comb : 1;  /* bit[16]: [16]��SCOFF��ACPU����ϻ����жϣ�����ο�SCOFF�����жϼĴ����� */
        unsigned int  mcu_wakeup_int_raw0_RTC1_INT         : 1;  /* bit[17]: [17]��RTC1_INT�жϡ�  */
        unsigned int  mcu_wakeup_int_raw0_RTC0_INT         : 1;  /* bit[18]: [18]��RTC0_INT�жϡ�  */
        unsigned int  mcu_wakeup_int_raw0_Timer0           : 1;  /* bit[19]: [27]��Timer0 AP Dual_Timer0_0�жϡ� */
        unsigned int  mcu_wakeup_int_raw0_Timer1           : 1;  /* bit[20]: [28]��Timer1 AP Dual_Timer0_1�жϡ� */
        unsigned int  mcu_wakeup_int_raw0_Timer2           : 1;  /* bit[21]: [29]��Timer2 AP Dual_Timer1_0�жϡ� */
        unsigned int  mcu_wakeup_int_raw0_Timer3           : 1;  /* bit[22]: [30]��Timer3 AP Dual_Timer1_1�жϡ� */
        unsigned int  mcu_wakeup_int_raw0_Timer4           : 1;  /* bit[23]: [23]��Timer4 AP Dual_Timer2_0�жϡ� */
        unsigned int  mcu_wakeup_int_raw0_Timer5           : 1;  /* bit[24]: [24]��Timer5 AP Dual_Timer2_1�жϡ� */
        unsigned int  mcu_wakeup_int_raw0_Timer6           : 1;  /* bit[25]: [25]��Timer6 AP Dual_Timer3_0�жϡ� */
        unsigned int  mcu_wakeup_int_raw0_Timer7           : 1;  /* bit[26]: [26]��Timer7 AP Dual_Timer3_1�жϡ� */
        unsigned int  mcu_wakeup_int_raw0_Timer8           : 1;  /* bit[27]: [27]��Timer8 AP Dual_Timer4_0�жϡ� */
        unsigned int  mcu_wakeup_int_raw0_Timer9           : 1;  /* bit[28]: [28]��Timer9 AP Dual_Timer4_1�жϡ� */
        unsigned int  mcu_wakeup_int_raw0_Timer10          : 1;  /* bit[29]: [29]��Timer10 AP Dual_Timer5_0�жϡ� */
        unsigned int  mcu_wakeup_int_raw0_Timer11          : 1;  /* bit[30]: [30]��Timer11 AP Dual_Timer5_1�жϡ� */
        unsigned int  mcu_wakeup_int_raw0_Timer12          : 1;  /* bit[31]: [31]�� Timer12 AP Dual_Timer6_0�жϡ� */
    } reg;
} SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_GPIO0_START             (0)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_GPIO0_END               (0)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_GPIO1_START             (1)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_GPIO1_END               (1)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_GPIO2_START             (2)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_GPIO2_END               (2)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_GPIO3_START             (3)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_GPIO3_END               (3)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_4reserved_START         (4)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_4reserved_END           (4)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_5reserved_START         (5)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_5reserved_END           (5)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_6reserved_START         (6)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_6reserved_END           (6)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_7reserved_START         (7)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_7reserved_END           (7)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_8reserved_START         (8)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_8reserved_END           (8)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_9reserved_START         (9)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_9reserved_END           (9)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_10reserved_START        (10)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_10reserved_END          (10)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_11reserved_START        (11)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_11reserved_END          (11)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_12reserved_START        (12)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_12reserved_END          (12)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_13reserved_START        (13)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_13reserved_END          (13)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_CSYSPWRUPREQ_START      (14)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_CSYSPWRUPREQ_END        (14)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_CDBGPWRUPREQ_START      (15)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_CDBGPWRUPREQ_END        (15)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_scoff_2acpu_comb_START  (16)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_scoff_2acpu_comb_END    (16)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_RTC1_INT_START          (17)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_RTC1_INT_END            (17)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_RTC0_INT_START          (18)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_RTC0_INT_END            (18)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_Timer0_START            (19)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_Timer0_END              (19)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_Timer1_START            (20)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_Timer1_END              (20)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_Timer2_START            (21)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_Timer2_END              (21)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_Timer3_START            (22)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_Timer3_END              (22)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_Timer4_START            (23)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_Timer4_END              (23)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_Timer5_START            (24)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_Timer5_END              (24)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_Timer6_START            (25)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_Timer6_END              (25)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_Timer7_START            (26)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_Timer7_END              (26)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_Timer8_START            (27)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_Timer8_END              (27)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_Timer9_START            (28)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_Timer9_END              (28)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_Timer10_START           (29)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_Timer10_END             (29)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_Timer11_START           (30)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_Timer11_END             (30)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_Timer12_START           (31)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR0_mcu_wakeup_int_raw0_Timer12_END             (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_UNION
 �ṹ˵��  : SC_MCU_WKUP_INT_STATM0 �Ĵ����ṹ���塣��ַƫ����:0x0B0����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU�����ж��͸�MCU�����κ����жϼĴ�������ӦACPU�Ļ����ж�bit0��31������ָʾMCU�ĵ�ǰ�����ж�״̬�����κ󣩡���ӦbitΪ1��ʾ���жϣ�Ϊ0��ʾ���жϡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mcu_wakeup_int_mask0_GPIO0            : 1;  /* bit[0] : [0] ��GPIO0�жϡ�  */
        unsigned int  mcu_wakeup_int_mask0_GPIO1            : 1;  /* bit[1] : [1] ��GPIO1�жϡ� */
        unsigned int  mcu_wakeup_int_mask0_GPIO2            : 1;  /* bit[2] : [2] ��GPIO2�жϡ�  */
        unsigned int  mcu_wakeup_int_mask0_GPIO3            : 1;  /* bit[3] : [3] ��GPIO3�жϡ�  */
        unsigned int  mcu_wakeup_int_mask0_4reserved        : 1;  /* bit[4] : reserved */
        unsigned int  mcu_wakeup_int_mask0_5reserved        : 1;  /* bit[5] : reserved */
        unsigned int  mcu_wakeup_int_mask0_6reserved        : 1;  /* bit[6] : reserved */
        unsigned int  mcu_wakeup_int_mask0_7reserved        : 1;  /* bit[7] : reserved */
        unsigned int  mcu_wakeup_int_mask0_8reserved        : 1;  /* bit[8] : reserved */
        unsigned int  mcu_wakeup_int_mask0_9reserved        : 1;  /* bit[9] : reserved */
        unsigned int  mcu_wakeup_int_mask0_10reserved       : 1;  /* bit[10]: reserved */
        unsigned int  mcu_wakeup_int_mask0_11reserved       : 1;  /* bit[11]: reserved */
        unsigned int  mcu_wakeup_int_mask0_12reserved       : 1;  /* bit[12]: reserved */
        unsigned int  mcu_wakeup_int_mask0_13reserved       : 1;  /* bit[13]: reserved */
        unsigned int  mcu_wakeup_int_mask0_CSYSPWRUPREQ     : 1;  /* bit[14]: [14]��CSYSPWRUPREQ CoreSight system power up����״̬�źţ��߱�ʾ������Ч�� */
        unsigned int  mcu_wakeup_int_mask0_CDBGPWRUPREQ     : 1;  /* bit[15]: [15]��CDBGPWRUPREQ CoreSight debug power up����״̬�źţ��߱�ʾ������Ч�� */
        unsigned int  mcu_wakeup_int_mask0_scoff_2acpu_comb : 1;  /* bit[16]: [16]��SCOFF��ACPU����ϻ����жϣ�����ο�SCOFF�����жϼĴ����� */
        unsigned int  mcu_wakeup_int_mask0_RTC1_INT         : 1;  /* bit[17]: [17]��RTC1_INT�жϡ�  */
        unsigned int  mcu_wakeup_int_mask0_RTC0_INT         : 1;  /* bit[18]: [18]��RTC0_INT�жϡ�  */
        unsigned int  mcu_wakeup_int_mask0_Timer0           : 1;  /* bit[19]: [27]��Timer0 AP Dual_Timer0_0�жϡ� */
        unsigned int  mcu_wakeup_int_mask0_Timer1           : 1;  /* bit[20]: [28]��Timer1 AP Dual_Timer0_1�жϡ� */
        unsigned int  mcu_wakeup_int_mask0_Timer2           : 1;  /* bit[21]: [29]��Timer2 AP Dual_Timer1_0�жϡ� */
        unsigned int  mcu_wakeup_int_mask0_Timer3           : 1;  /* bit[22]: [30]��Timer3 AP Dual_Timer1_1�жϡ� */
        unsigned int  mcu_wakeup_int_mask0_Timer4           : 1;  /* bit[23]: [23]��Timer4 AP Dual_Timer2_0�жϡ� */
        unsigned int  mcu_wakeup_int_mask0_Timer5           : 1;  /* bit[24]: [24]��Timer5 AP Dual_Timer2_1�жϡ� */
        unsigned int  mcu_wakeup_int_mask0_Timer6           : 1;  /* bit[25]: [25]��Timer6 AP Dual_Timer3_0�жϡ� */
        unsigned int  mcu_wakeup_int_mask0_Timer7           : 1;  /* bit[26]: [26]��Timer7 AP Dual_Timer3_1�жϡ� */
        unsigned int  mcu_wakeup_int_mask0_Timer8           : 1;  /* bit[27]: [27]��Timer8 AP Dual_Timer4_0�жϡ� */
        unsigned int  mcu_wakeup_int_mask0_Timer9           : 1;  /* bit[28]: [28]��Timer9 AP Dual_Timer4_1�жϡ� */
        unsigned int  mcu_wakeup_int_mask0_Timer10          : 1;  /* bit[29]: [29]��Timer10 AP Dual_Timer5_0�жϡ� */
        unsigned int  mcu_wakeup_int_mask0_Timer11          : 1;  /* bit[30]: [30]��Timer11 AP Dual_Timer5_1�жϡ� */
        unsigned int  mcu_wakeup_int_mask0_Timer12          : 1;  /* bit[31]: [31]�� Timer12 AP Dual_Timer6_0�жϡ� */
    } reg;
} SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_GPIO0_START             (0)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_GPIO0_END               (0)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_GPIO1_START             (1)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_GPIO1_END               (1)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_GPIO2_START             (2)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_GPIO2_END               (2)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_GPIO3_START             (3)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_GPIO3_END               (3)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_4reserved_START         (4)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_4reserved_END           (4)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_5reserved_START         (5)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_5reserved_END           (5)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_6reserved_START         (6)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_6reserved_END           (6)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_7reserved_START         (7)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_7reserved_END           (7)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_8reserved_START         (8)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_8reserved_END           (8)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_9reserved_START         (9)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_9reserved_END           (9)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_10reserved_START        (10)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_10reserved_END          (10)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_11reserved_START        (11)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_11reserved_END          (11)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_12reserved_START        (12)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_12reserved_END          (12)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_13reserved_START        (13)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_13reserved_END          (13)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_CSYSPWRUPREQ_START      (14)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_CSYSPWRUPREQ_END        (14)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_CDBGPWRUPREQ_START      (15)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_CDBGPWRUPREQ_END        (15)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_scoff_2acpu_comb_START  (16)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_scoff_2acpu_comb_END    (16)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_RTC1_INT_START          (17)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_RTC1_INT_END            (17)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_RTC0_INT_START          (18)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_RTC0_INT_END            (18)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_Timer0_START            (19)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_Timer0_END              (19)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_Timer1_START            (20)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_Timer1_END              (20)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_Timer2_START            (21)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_Timer2_END              (21)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_Timer3_START            (22)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_Timer3_END              (22)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_Timer4_START            (23)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_Timer4_END              (23)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_Timer5_START            (24)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_Timer5_END              (24)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_Timer6_START            (25)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_Timer6_END              (25)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_Timer7_START            (26)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_Timer7_END              (26)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_Timer8_START            (27)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_Timer8_END              (27)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_Timer9_START            (28)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_Timer9_END              (28)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_Timer10_START           (29)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_Timer10_END             (29)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_Timer11_START           (30)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_Timer11_END             (30)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_Timer12_START           (31)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM0_mcu_wakeup_int_mask0_Timer12_END             (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_UNION
 �ṹ˵��  : SC_MCU_WKUP_INT_EN1 �Ĵ����ṹ���塣��ַƫ����:0x0B4����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU�����ж��͸�MCU�Ļ����ж�ʹ�ܼĴ�������ӦACPU�Ļ����ж�bit32��63�����ڶ�MCU�Ļ����жϽ����������á���ӦbitΪ1��ʾʹ����Ӧ�жϣ�Ϊ0��ʾ�����жϡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mcu_wakeup_int_en1_Timer13            : 1;  /* bit[0]    : [0] ��Timer13 AP Dual_Timer6_1�жϡ� */
        unsigned int  mcu_wakeup_int_en1_Timer14            : 1;  /* bit[1]    : [1] ��Timer14 AP Dual_Timer7_0�жϡ�  */
        unsigned int  mcu_wakeup_int_en1_Timer15            : 1;  /* bit[2]    : [2] ��Timer15 AP Dual_Timer7_1�жϡ�  */
        unsigned int  mcu_wakeup_int_en1_Timer16            : 1;  /* bit[3]    : [3] ��Timer16 AP Dual_Timer8_0�жϡ�  */
        unsigned int  mcu_wakeup_int_en1_Timer17            : 1;  /* bit[4]    : [4] ��Timer17 AP Dual_Timer8_1�жϡ�  */
        unsigned int  mcu_wakeup_int_en1_WatchDog0          : 1;  /* bit[5]    : [5] ��WatchDog0 ACPU WatchDog��ʱ��λ���� */
        unsigned int  mcu_wakeup_int_en1_WatchDog1          : 1;  /* bit[6]    : [6] ��WatchDog1 HIFI WatchDog��ʱ��λ���� */
        unsigned int  mcu_wakeup_int_en1_MWatchDog2         : 1;  /* bit[7]    : [7] ��WatchDog2 ��ȫWatchDog��ʱ��λ���� */
        unsigned int  mcu_wakeup_int_en1_ACPU_WKUP_VOTE     : 1;  /* bit[8]    : [8] ��ACPU_WKUP_VOTE�жϡ� */
        unsigned int  mcu_wakeup_int_en1_NS_IPC2ACPU_0      : 1;  /* bit[9]    : [9] ���ǰ�ȫIPC�����ACPU�ĺ˼��ж�0��ipc_cpu_intr0[0]���� */
        unsigned int  mcu_wakeup_int_en1_10reserved         : 1;  /* bit[10]   : reserved */
        unsigned int  mcu_wakeup_int_en1_11reserved         : 1;  /* bit[11]   : reserved */
        unsigned int  mcu_wakeup_int_en1_12reserved         : 1;  /* bit[12]   : reserved */
        unsigned int  mcu_wakeup_int_en1_13reserved         : 1;  /* bit[13]   : reserved */
        unsigned int  mcu_wakeup_int_en1_14reserved         : 1;  /* bit[14]   : reserved */
        unsigned int  mcu_wakeup_int_en1_15reserved         : 1;  /* bit[15]   : reserved */
        unsigned int  mcu_wakeup_int_en1_16reserved         : 1;  /* bit[16]   : reserved */
        unsigned int  mcu_wakeup_int_en1_17reserved         : 1;  /* bit[17]   : reserved */
        unsigned int  mcu_wakeup_int_en1_18reserved         : 1;  /* bit[18]   : reserved */
        unsigned int  mcu_wakeup_int_en1_19reserved         : 1;  /* bit[19]   : reserved */
        unsigned int  mcu_wakeup_int_en1_NS_IPC2ACPU_2      : 1;  /* bit[20]   : �ǰ�ȫIPC�����ACPU�ĺ˼��ж�1��ipc_cpu_intr0[5]���� */
        unsigned int  mcu_wakeup_int_en1_SEC_IPC2ACPU_2     : 1;  /* bit[21]   : ��ȫIPC�����ACPU�ĺ˼��ж�1��ipc_cpu_intr0[0]���� */
        unsigned int  mcu_wakeup_int_en1_MWDog0_rstreq_intr : 1;  /* bit[22]   : CCPU WatchDog��ʱ��λ���� */
        unsigned int  mcu_wakeup_int_en1_PWM0               : 1;  /* bit[23]   : PWM0 int�жϡ� */
        unsigned int  mcu_wakeup_int_en1_PWM1               : 1;  /* bit[24]   : PWM1 int�жϡ� */
        unsigned int  mcu_wakeup_int_en1_PWMIN              : 1;  /* bit[25]   : PWMIN int�жϡ� */
        unsigned int  mcu_wakeup_int_en1_31reserved         : 6;  /* bit[26-31]: reserved */
    } reg;
} SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_Timer13_START             (0)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_Timer13_END               (0)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_Timer14_START             (1)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_Timer14_END               (1)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_Timer15_START             (2)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_Timer15_END               (2)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_Timer16_START             (3)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_Timer16_END               (3)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_Timer17_START             (4)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_Timer17_END               (4)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_WatchDog0_START           (5)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_WatchDog0_END             (5)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_WatchDog1_START           (6)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_WatchDog1_END             (6)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_MWatchDog2_START          (7)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_MWatchDog2_END            (7)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_ACPU_WKUP_VOTE_START      (8)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_ACPU_WKUP_VOTE_END        (8)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_NS_IPC2ACPU_0_START       (9)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_NS_IPC2ACPU_0_END         (9)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_10reserved_START          (10)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_10reserved_END            (10)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_11reserved_START          (11)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_11reserved_END            (11)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_12reserved_START          (12)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_12reserved_END            (12)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_13reserved_START          (13)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_13reserved_END            (13)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_14reserved_START          (14)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_14reserved_END            (14)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_15reserved_START          (15)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_15reserved_END            (15)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_16reserved_START          (16)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_16reserved_END            (16)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_17reserved_START          (17)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_17reserved_END            (17)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_18reserved_START          (18)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_18reserved_END            (18)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_19reserved_START          (19)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_19reserved_END            (19)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_NS_IPC2ACPU_2_START       (20)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_NS_IPC2ACPU_2_END         (20)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_SEC_IPC2ACPU_2_START      (21)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_SEC_IPC2ACPU_2_END        (21)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_MWDog0_rstreq_intr_START  (22)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_MWDog0_rstreq_intr_END    (22)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_PWM0_START                (23)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_PWM0_END                  (23)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_PWM1_START                (24)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_PWM1_END                  (24)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_PWMIN_START               (25)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_PWMIN_END                 (25)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_31reserved_START          (26)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_EN1_mcu_wakeup_int_en1_31reserved_END            (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_UNION
 �ṹ˵��  : SC_MCU_WKUP_INT_STATR1 �Ĵ����ṹ���塣��ַƫ����:0x0B8����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU�����ж��͸�MCU��ԭʼ�����жϼĴ�������ӦACPU�Ļ����ж�bit32��63������ָʾMCU��ԭʼ�����ж�״̬������ǰ������ӦbitΪ1��ʾ���жϣ�Ϊ0��ʾ���жϡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mcu_wakeup_int_raw1_Timer13            : 1;  /* bit[0]    : [0] ��Timer13 AP Dual_Timer6_1�жϡ� */
        unsigned int  mcu_wakeup_int_raw1_Timer14            : 1;  /* bit[1]    : [1] ��Timer14 AP Dual_Timer7_0�жϡ�  */
        unsigned int  mcu_wakeup_int_raw1_Timer15            : 1;  /* bit[2]    : [2] ��Timer15 AP Dual_Timer7_1�жϡ�  */
        unsigned int  mcu_wakeup_int_raw1_Timer16            : 1;  /* bit[3]    : [3] ��Timer16 AP Dual_Timer8_0�жϡ�  */
        unsigned int  mcu_wakeup_int_raw1_Timer17            : 1;  /* bit[4]    : [4] ��Timer17 AP Dual_Timer8_1�жϡ�  */
        unsigned int  mcu_wakeup_int_raw1_WatchDog0          : 1;  /* bit[5]    : [5] ��WatchDog0 ACPU WatchDog��ʱ��λ���� */
        unsigned int  mcu_wakeup_int_raw1_WatchDog1          : 1;  /* bit[6]    : [6] ��WatchDog1 HIFI WatchDog��ʱ��λ���� */
        unsigned int  mcu_wakeup_int_raw1_MWatchDog2         : 1;  /* bit[7]    : [7] ��WatchDog2 ��ȫWatchDog��ʱ��λ���� */
        unsigned int  mcu_wakeup_int_raw1_ACPU_WKUP_VOTE     : 1;  /* bit[8]    : [8] ��ACPU_WKUP_VOTE�жϡ� */
        unsigned int  mcu_wakeup_int_raw1_NS_IPC2ACPU_0      : 1;  /* bit[9]    : [9] ���ǰ�ȫIPC�����ACPU�ĺ˼��ж�0��ipc_cpu_intr0[0]���� */
        unsigned int  mcu_wakeup_int_raw1_10reserved         : 1;  /* bit[10]   : reserved */
        unsigned int  mcu_wakeup_int_raw1_11reserved         : 1;  /* bit[11]   : reserved */
        unsigned int  mcu_wakeup_int_raw1_12reserved         : 1;  /* bit[12]   : reserved */
        unsigned int  mcu_wakeup_int_raw1_13reserved         : 1;  /* bit[13]   : reserved */
        unsigned int  mcu_wakeup_int_raw1_14reserved         : 1;  /* bit[14]   : reserved */
        unsigned int  mcu_wakeup_int_raw1_15reserved         : 1;  /* bit[15]   : reserved */
        unsigned int  mcu_wakeup_int_raw1_16reserved         : 1;  /* bit[16]   : reserved */
        unsigned int  mcu_wakeup_int_raw1_17reserved         : 1;  /* bit[17]   : reserved */
        unsigned int  mcu_wakeup_int_raw1_18reserved         : 1;  /* bit[18]   : reserved */
        unsigned int  mcu_wakeup_int_raw1_19reserved         : 1;  /* bit[19]   : reserved */
        unsigned int  mcu_wakeup_int_raw1_NS_IPC2ACPU_2      : 1;  /* bit[20]   : �ǰ�ȫIPC�����ACPU�ĺ˼��ж�1��ipc_cpu_intr0[5]���� */
        unsigned int  mcu_wakeup_int_raw1_SEC_IPC2ACPU_2     : 1;  /* bit[21]   : ��ȫIPC�����ACPU�ĺ˼��ж�1��ipc_cpu_intr0[0]���� */
        unsigned int  mcu_wakeup_int_raw1_MWDog0_rstreq_intr : 1;  /* bit[22]   : CCPU WatchDog��ʱ��λ���� */
        unsigned int  mcu_wakeup_int_raw1_PWM0               : 1;  /* bit[23]   : PWM0 int�жϡ� */
        unsigned int  mcu_wakeup_int_raw1_PWM1               : 1;  /* bit[24]   : PWM1 int�жϡ� */
        unsigned int  mcu_wakeup_int_raw1_PWMIN              : 1;  /* bit[25]   : PWMIN int�жϡ� */
        unsigned int  mcu_wakeup_int_raw1_31reserved         : 6;  /* bit[26-31]: reserved */
    } reg;
} SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_Timer13_START             (0)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_Timer13_END               (0)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_Timer14_START             (1)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_Timer14_END               (1)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_Timer15_START             (2)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_Timer15_END               (2)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_Timer16_START             (3)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_Timer16_END               (3)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_Timer17_START             (4)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_Timer17_END               (4)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_WatchDog0_START           (5)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_WatchDog0_END             (5)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_WatchDog1_START           (6)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_WatchDog1_END             (6)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_MWatchDog2_START          (7)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_MWatchDog2_END            (7)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_ACPU_WKUP_VOTE_START      (8)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_ACPU_WKUP_VOTE_END        (8)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_NS_IPC2ACPU_0_START       (9)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_NS_IPC2ACPU_0_END         (9)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_10reserved_START          (10)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_10reserved_END            (10)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_11reserved_START          (11)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_11reserved_END            (11)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_12reserved_START          (12)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_12reserved_END            (12)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_13reserved_START          (13)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_13reserved_END            (13)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_14reserved_START          (14)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_14reserved_END            (14)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_15reserved_START          (15)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_15reserved_END            (15)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_16reserved_START          (16)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_16reserved_END            (16)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_17reserved_START          (17)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_17reserved_END            (17)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_18reserved_START          (18)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_18reserved_END            (18)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_19reserved_START          (19)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_19reserved_END            (19)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_NS_IPC2ACPU_2_START       (20)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_NS_IPC2ACPU_2_END         (20)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_SEC_IPC2ACPU_2_START      (21)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_SEC_IPC2ACPU_2_END        (21)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_MWDog0_rstreq_intr_START  (22)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_MWDog0_rstreq_intr_END    (22)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_PWM0_START                (23)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_PWM0_END                  (23)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_PWM1_START                (24)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_PWM1_END                  (24)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_PWMIN_START               (25)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_PWMIN_END                 (25)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_31reserved_START          (26)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATR1_mcu_wakeup_int_raw1_31reserved_END            (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_UNION
 �ṹ˵��  : SC_MCU_WKUP_INT_STATM1 �Ĵ����ṹ���塣��ַƫ����:0x0BC����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU�����ж��͸�MCU�����κ����жϼĴ�������ӦACPU�Ļ����ж�bit32��63������ָʾMCU�ĵ�ǰ�����ж�״̬�����κ󣩡���ӦbitΪ1��ʾ���жϣ�Ϊ0��ʾ���жϡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mcu_wakeup_int_mask1_Timer13            : 1;  /* bit[0]    : [0] ��Timer13 AP Dual_Timer6_1�жϡ� */
        unsigned int  mcu_wakeup_int_mask1_Timer14            : 1;  /* bit[1]    : [1] ��Timer14 AP Dual_Timer7_0�жϡ�  */
        unsigned int  mcu_wakeup_int_mask1_Timer15            : 1;  /* bit[2]    : [2] ��Timer15 AP Dual_Timer7_1�жϡ�  */
        unsigned int  mcu_wakeup_int_mask1_Timer16            : 1;  /* bit[3]    : [3] ��Timer16 AP Dual_Timer8_0�жϡ�  */
        unsigned int  mcu_wakeup_int_mask1_Timer17            : 1;  /* bit[4]    : [4] ��Timer17 AP Dual_Timer8_1�жϡ�  */
        unsigned int  mcu_wakeup_int_mask1_WatchDog0          : 1;  /* bit[5]    : [5] ��WatchDog0 ACPU WatchDog��ʱ��λ���� */
        unsigned int  mcu_wakeup_int_mask1_WatchDog1          : 1;  /* bit[6]    : [6] ��WatchDog1 HIFI WatchDog��ʱ��λ���� */
        unsigned int  mcu_wakeup_int_mask1_MWatchDog2         : 1;  /* bit[7]    : [7] ��WatchDog2 ��ȫWatchDog��ʱ��λ���� */
        unsigned int  mcu_wakeup_int_mask1_ACPU_WKUP_VOTE     : 1;  /* bit[8]    : [8] ��ACPU_WKUP_VOTE�жϡ� */
        unsigned int  mcu_wakeup_int_mask1_NS_IPC2ACPU_0      : 1;  /* bit[9]    : [9] ���ǰ�ȫIPC�����ACPU�ĺ˼��ж�0��ipc_cpu_intr0[0]���� */
        unsigned int  mcu_wakeup_int_mask1_10reserved         : 1;  /* bit[10]   : reserved */
        unsigned int  mcu_wakeup_int_mask1_11reserved         : 1;  /* bit[11]   : reserved */
        unsigned int  mcu_wakeup_int_mask1_12reserved         : 1;  /* bit[12]   : reserved */
        unsigned int  mcu_wakeup_int_mask1_13reserved         : 1;  /* bit[13]   : reserved */
        unsigned int  mcu_wakeup_int_mask1_14reserved         : 1;  /* bit[14]   : reserved */
        unsigned int  mcu_wakeup_int_mask1_15reserved         : 1;  /* bit[15]   : reserved */
        unsigned int  mcu_wakeup_int_mask1_16reserved         : 1;  /* bit[16]   : reserved */
        unsigned int  mcu_wakeup_int_mask1_17reserved         : 1;  /* bit[17]   : reserved */
        unsigned int  mcu_wakeup_int_mask1_18reserved         : 1;  /* bit[18]   : reserved */
        unsigned int  mcu_wakeup_int_mask1_19reserved         : 1;  /* bit[19]   : reserved */
        unsigned int  mcu_wakeup_int_mask1_NS_IPC2ACPU_2      : 1;  /* bit[20]   : �ǰ�ȫIPC�����ACPU�ĺ˼��ж�1��ipc_cpu_intr0[5]���� */
        unsigned int  mcu_wakeup_int_mask1_SEC_IPC2ACPU_2     : 1;  /* bit[21]   : ��ȫIPC�����ACPU�ĺ˼��ж�1��ipc_cpu_intr0[0]���� */
        unsigned int  mcu_wakeup_int_mask1_MWDog0_rstreq_intr : 1;  /* bit[22]   : CCPU WatchDog��ʱ��λ���� */
        unsigned int  mcu_wakeup_int_mask1_PWM0               : 1;  /* bit[23]   : PWM0 int�жϡ� */
        unsigned int  mcu_wakeup_int_mask1_PWM1               : 1;  /* bit[24]   : PWM1 int�жϡ� */
        unsigned int  mcu_wakeup_int_mask1_PWMIN              : 1;  /* bit[25]   : PWMIN int�жϡ� */
        unsigned int  mcu_wakeup_int_mask1_31reserved         : 6;  /* bit[26-31]: reserved */
    } reg;
} SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_Timer13_START             (0)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_Timer13_END               (0)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_Timer14_START             (1)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_Timer14_END               (1)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_Timer15_START             (2)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_Timer15_END               (2)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_Timer16_START             (3)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_Timer16_END               (3)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_Timer17_START             (4)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_Timer17_END               (4)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_WatchDog0_START           (5)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_WatchDog0_END             (5)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_WatchDog1_START           (6)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_WatchDog1_END             (6)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_MWatchDog2_START          (7)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_MWatchDog2_END            (7)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_ACPU_WKUP_VOTE_START      (8)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_ACPU_WKUP_VOTE_END        (8)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_NS_IPC2ACPU_0_START       (9)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_NS_IPC2ACPU_0_END         (9)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_10reserved_START          (10)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_10reserved_END            (10)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_11reserved_START          (11)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_11reserved_END            (11)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_12reserved_START          (12)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_12reserved_END            (12)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_13reserved_START          (13)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_13reserved_END            (13)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_14reserved_START          (14)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_14reserved_END            (14)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_15reserved_START          (15)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_15reserved_END            (15)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_16reserved_START          (16)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_16reserved_END            (16)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_17reserved_START          (17)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_17reserved_END            (17)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_18reserved_START          (18)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_18reserved_END            (18)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_19reserved_START          (19)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_19reserved_END            (19)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_NS_IPC2ACPU_2_START       (20)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_NS_IPC2ACPU_2_END         (20)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_SEC_IPC2ACPU_2_START      (21)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_SEC_IPC2ACPU_2_END        (21)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_MWDog0_rstreq_intr_START  (22)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_MWDog0_rstreq_intr_END    (22)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_PWM0_START                (23)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_PWM0_END                  (23)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_PWM1_START                (24)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_PWM1_END                  (24)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_PWMIN_START               (25)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_PWMIN_END                 (25)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_31reserved_START          (26)
#define SOC_AO_SCTRL_SC_MCU_WKUP_INT_STATM1_mcu_wakeup_int_mask1_31reserved_END            (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_INT_STATR_UNION
 �ṹ˵��  : SC_INT_STATR �Ĵ����ṹ���塣��ַƫ����:0x0C4����ֵ:0x00000000�����:32
 �Ĵ���˵��: ԭʼ�ڲ��жϼĴ���������ָʾSC�ڲ���ԭʼ�ж�״̬������ǰ������ӦbitΪ1��ʾ���жϣ�Ϊ0��ʾ���жϡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_int_statr_0awd           : 1;  /* bit[0] : [0]�� ACPU Watchdog��λ�����жϣ��͸�MCU�� */
        unsigned int  sc_int_statr_1cm3wdg0       : 1;  /* bit[1] : [1]�� CM3 Watchdog0��λ�����жϣ��͸�ACPU�� */
        unsigned int  sc_int_statr_2hifiwd        : 1;  /* bit[2] : [2]�� HIFI Watchdog��λ�����жϣ��͸�MCU��ACPU�� */
        unsigned int  sc_int_statr_3bakwd         : 1;  /* bit[3] : [3]�� ����Watchdog��λ�����жϣ��͸�MCU��ACPU�� */
        unsigned int  sc_int_statr_4acpu_sft_fiq  : 1;  /* bit[4] : [4]�� acpu fiq int���͸�acpu�����ڵ��ԣ���acpu_sft_fiq_req���ò����� */
        unsigned int  sc_int_statr_5vote0mcuei    : 1;  /* bit[5] : [5]�� ͶƱ�Ĵ���0�����жϣ��͸�MCU�� */
        unsigned int  sc_int_statr_6vote0mcudi    : 1;  /* bit[6] : [6]�� ͶƱ�Ĵ���0�������жϣ��͸�MCU�� */
        unsigned int  sc_int_statr_7vote1mcuei    : 1;  /* bit[7] : [7]�� ͶƱ�Ĵ���1�����жϣ��͸�MCU�� */
        unsigned int  sc_int_statr_8vote1mcudi    : 1;  /* bit[8] : [8]�� ͶƱ�Ĵ���1�������жϣ��͸�MCU�� */
        unsigned int  sc_int_statr_9cei           : 1;  /* bit[9] : [9]�� CCPU ˯��ͶƱ�����жϣ��͸�CCPU�� */
        unsigned int  sc_int_statr_10cdi          : 1;  /* bit[10]: [10]�� CCPU ˯��ͶƱ�������������жϣ��͸�MCU�� */
        unsigned int  sc_int_statr_11aei          : 1;  /* bit[11]: [11]�� ACPU ˯��ͶƱ�����жϣ��͸�ACPU�� */
        unsigned int  sc_int_statr_12adi          : 1;  /* bit[12]: [12]�� ACPU ˯��ͶƱ�������������жϣ��͸�MCU�� */
        unsigned int  sc_int_statr_13vote2mcudi   : 1;  /* bit[13]: [13]�� ͶƱ�Ĵ���2�����жϣ��͸�MCU�� */
        unsigned int  sc_int_statr_14vote0mcuei   : 1;  /* bit[14]: [14]�� ͶƱ�Ĵ���2�������жϣ��͸�MCU�� */
        unsigned int  sc_int_statr_15periei       : 1;  /* bit[15]: [15]�� PERI ˯��ͶƱ�����жϣ��͸�MCU�� */
        unsigned int  sc_int_statr_16peridi       : 1;  /* bit[16]: [16]�� PERI ˯��ͶƱ�������������жϣ��͸�MCU�� */
        unsigned int  sc_int_statr_17vote0aarmei  : 1;  /* bit[17]: [17]�� ͶƱ�Ĵ���0�����жϣ��͸�ACPU�� */
        unsigned int  sc_int_statr_18vote0aarmdi  : 1;  /* bit[18]: [18]�� ͶƱ�Ĵ���0�������жϣ��͸�ACPU�� */
        unsigned int  sc_int_statr_19vote1aarmei  : 1;  /* bit[19]: [19]�� ͶƱ�Ĵ���1�����жϣ��͸�ACPU�� */
        unsigned int  sc_int_statr_20vote1aarmdi  : 1;  /* bit[20]: [20]�� ͶƱ�Ĵ���1�������жϣ��͸�ACPU�� */
        unsigned int  sc_int_statr_21vote2aarmdi  : 1;  /* bit[21]: [21]�� ͶƱ�Ĵ���2�����жϣ��͸�ACPU�� */
        unsigned int  sc_int_statr_22vote0aarmei  : 1;  /* bit[22]: [22]�� ͶƱ�Ĵ���2�������жϣ��͸�ACPU�� */
        unsigned int  sc_int_statr_23vote0carmei  : 1;  /* bit[23]: [23]�� ͶƱ�Ĵ���0�����жϣ��͸�CCPU�� */
        unsigned int  sc_int_statr_24vote0carmdi  : 1;  /* bit[24]: [24]�� ͶƱ�Ĵ���0�������жϣ��͸�CCPU�� */
        unsigned int  sc_int_statr_25vote1carmei  : 1;  /* bit[25]: [25]�� ͶƱ�Ĵ���1�����жϣ��͸�CCPU�� */
        unsigned int  sc_int_statr_26vote1carmdi  : 1;  /* bit[26]: [26]�� ͶƱ�Ĵ���1�������жϣ��͸�CCPU�� */
        unsigned int  sc_int_statr_27vote2hifidi  : 1;  /* bit[27]: [27]�� ͶƱ�Ĵ���2�����жϣ��͸�HiFi�� */
        unsigned int  sc_int_statr_28vote0hifiei  : 1;  /* bit[28]: [28]�� ͶƱ�Ĵ���2�������жϣ��͸�HiFi�� */
        unsigned int  sc_int_statr_29otgchg       : 1;  /* bit[29]: [29]�� ��USBOTG chgdet_sts�жϣ��͸�MCU��ACPU�� */
        unsigned int  sc_int_statr_30otgdat       : 1;  /* bit[30]: [30]�� ��USBOTG datcondet_sts�жϡ��͸�MCU��ACPU�� */
        unsigned int  sc_int_statr_31ccpu_sft_fiq : 1;  /* bit[31]: [31]��ccpu fiq int���͸�ccpu�����ڵ��ԣ���ccpu_sft_fiq_req���ò����� */
    } reg;
} SOC_AO_SCTRL_SC_INT_STATR_UNION;
#endif
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_0awd_START            (0)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_0awd_END              (0)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_1cm3wdg0_START        (1)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_1cm3wdg0_END          (1)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_2hifiwd_START         (2)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_2hifiwd_END           (2)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_3bakwd_START          (3)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_3bakwd_END            (3)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_4acpu_sft_fiq_START   (4)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_4acpu_sft_fiq_END     (4)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_5vote0mcuei_START     (5)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_5vote0mcuei_END       (5)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_6vote0mcudi_START     (6)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_6vote0mcudi_END       (6)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_7vote1mcuei_START     (7)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_7vote1mcuei_END       (7)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_8vote1mcudi_START     (8)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_8vote1mcudi_END       (8)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_9cei_START            (9)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_9cei_END              (9)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_10cdi_START           (10)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_10cdi_END             (10)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_11aei_START           (11)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_11aei_END             (11)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_12adi_START           (12)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_12adi_END             (12)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_13vote2mcudi_START    (13)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_13vote2mcudi_END      (13)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_14vote0mcuei_START    (14)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_14vote0mcuei_END      (14)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_15periei_START        (15)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_15periei_END          (15)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_16peridi_START        (16)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_16peridi_END          (16)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_17vote0aarmei_START   (17)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_17vote0aarmei_END     (17)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_18vote0aarmdi_START   (18)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_18vote0aarmdi_END     (18)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_19vote1aarmei_START   (19)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_19vote1aarmei_END     (19)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_20vote1aarmdi_START   (20)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_20vote1aarmdi_END     (20)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_21vote2aarmdi_START   (21)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_21vote2aarmdi_END     (21)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_22vote0aarmei_START   (22)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_22vote0aarmei_END     (22)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_23vote0carmei_START   (23)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_23vote0carmei_END     (23)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_24vote0carmdi_START   (24)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_24vote0carmdi_END     (24)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_25vote1carmei_START   (25)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_25vote1carmei_END     (25)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_26vote1carmdi_START   (26)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_26vote1carmdi_END     (26)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_27vote2hifidi_START   (27)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_27vote2hifidi_END     (27)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_28vote0hifiei_START   (28)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_28vote0hifiei_END     (28)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_29otgchg_START        (29)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_29otgchg_END          (29)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_30otgdat_START        (30)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_30otgdat_END          (30)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_31ccpu_sft_fiq_START  (31)
#define SOC_AO_SCTRL_SC_INT_STATR_sc_int_statr_31ccpu_sft_fiq_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_INT_STATM_UNION
 �ṹ˵��  : SC_INT_STATM �Ĵ����ṹ���塣��ַƫ����:0x0C8����ֵ:0x00000000�����:32
 �Ĵ���˵��: ���κ��ڲ��жϼĴ���������ָʾSC��ǰ�ڲ��ж�״̬�����κ󣩡���ӦbitΪ1��ʾ���жϣ�Ϊ0��ʾ���жϡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_int_statm_0awd           : 1;  /* bit[0] : [0]�� ACPU Watchdog��λ�����жϣ��͸�MCU�� */
        unsigned int  sc_int_statm_1cm3wdg0       : 1;  /* bit[1] : [1]�� CM3 Watchdog0��λ�����жϣ��͸�ACPU�� */
        unsigned int  sc_int_statm_2hifiwd        : 1;  /* bit[2] : [2]�� HIFI Watchdog��λ�����жϣ��͸�MCU��ACPU�� */
        unsigned int  sc_int_statm_3bakwd         : 1;  /* bit[3] : [3]�� ����Watchdog��λ�����жϣ��͸�MCU��ACPU�� */
        unsigned int  sc_int_statm_4acpu_sft_fiq  : 1;  /* bit[4] : [4]�� acpu fiq int���͸�acpu�����ڵ��ԣ���acpu_sft_fiq_req���ò����� */
        unsigned int  sc_int_statm_5vote0mcuei    : 1;  /* bit[5] : [5]�� ͶƱ�Ĵ���0�����жϣ��͸�MCU�� */
        unsigned int  sc_int_statm_6vote0mcudi    : 1;  /* bit[6] : [6]�� ͶƱ�Ĵ���0�������жϣ��͸�MCU�� */
        unsigned int  sc_int_statm_7vote1mcuei    : 1;  /* bit[7] : [7]�� ͶƱ�Ĵ���1�����жϣ��͸�MCU�� */
        unsigned int  sc_int_statm_8vote1mcudi    : 1;  /* bit[8] : [8]�� ͶƱ�Ĵ���1�������жϣ��͸�MCU�� */
        unsigned int  sc_int_statm_9cei           : 1;  /* bit[9] : [9]�� CCPU ˯��ͶƱ�����жϣ��͸�CCPU�� */
        unsigned int  sc_int_statm_10cdi          : 1;  /* bit[10]: [10]�� CCPU ˯��ͶƱ�������������жϣ��͸�MCU�� */
        unsigned int  sc_int_statm_11aei          : 1;  /* bit[11]: [11]�� ACPU ˯��ͶƱ�����жϣ��͸�ACPU�� */
        unsigned int  sc_int_statm_12adi          : 1;  /* bit[12]: [12]�� ACPU ˯��ͶƱ�������������жϣ��͸�MCU�� */
        unsigned int  sc_int_statm_13vote2mcudi   : 1;  /* bit[13]: [13]�� ͶƱ�Ĵ���2�����жϣ��͸�MCU�� */
        unsigned int  sc_int_statm_14vote0mcuei   : 1;  /* bit[14]: [14]�� ͶƱ�Ĵ���2�������жϣ��͸�MCU�� */
        unsigned int  sc_int_statm_15periei       : 1;  /* bit[15]: [15]�� PERI ˯��ͶƱ�����жϣ��͸�MCU�� */
        unsigned int  sc_int_statm_16peridi       : 1;  /* bit[16]: [16]�� PERI ˯��ͶƱ�������������жϣ��͸�MCU�� */
        unsigned int  sc_int_statm_17vote0aarmei  : 1;  /* bit[17]: [17]�� ͶƱ�Ĵ���0�����жϣ��͸�ACPU�� */
        unsigned int  sc_int_statm_18vote0aarmdi  : 1;  /* bit[18]: [18]�� ͶƱ�Ĵ���0�������жϣ��͸�ACPU�� */
        unsigned int  sc_int_statm_19vote1aarmei  : 1;  /* bit[19]: [19]�� ͶƱ�Ĵ���1�����жϣ��͸�ACPU�� */
        unsigned int  sc_int_statm_20vote1aarmdi  : 1;  /* bit[20]: [20]�� ͶƱ�Ĵ���1�������жϣ��͸�ACPU�� */
        unsigned int  sc_int_statm_21vote2aarmdi  : 1;  /* bit[21]: [21]�� ͶƱ�Ĵ���2�����жϣ��͸�ACPU�� */
        unsigned int  sc_int_statm_22vote0aarmei  : 1;  /* bit[22]: [22]�� ͶƱ�Ĵ���2�������жϣ��͸�ACPU�� */
        unsigned int  sc_int_statm_23vote0carmei  : 1;  /* bit[23]: [23]�� ͶƱ�Ĵ���0�����жϣ��͸�CCPU�� */
        unsigned int  sc_int_statm_24vote0carmdi  : 1;  /* bit[24]: [24]�� ͶƱ�Ĵ���0�������жϣ��͸�CCPU�� */
        unsigned int  sc_int_statm_25vote1carmei  : 1;  /* bit[25]: [25]�� ͶƱ�Ĵ���1�����жϣ��͸�CCPU�� */
        unsigned int  sc_int_statm_26vote1carmdi  : 1;  /* bit[26]: [26]�� ͶƱ�Ĵ���1�������жϣ��͸�CCPU�� */
        unsigned int  sc_int_statm_27vote2hifidi  : 1;  /* bit[27]: [27]�� ͶƱ�Ĵ���2�����жϣ��͸�HiFi�� */
        unsigned int  sc_int_statm_28vote0hifiei  : 1;  /* bit[28]: [28]�� ͶƱ�Ĵ���2�������жϣ��͸�HiFi�� */
        unsigned int  sc_int_statm_29otgchg       : 1;  /* bit[29]: [29]�� ��USBOTG chgdet_sts�жϣ��͸�MCU��ACPU�� */
        unsigned int  sc_int_statm_30otgdat       : 1;  /* bit[30]: [30]�� ��USBOTG datcondet_sts�жϡ��͸�MCU��ACPU�� */
        unsigned int  sc_int_statm_31ccpu_sft_fiq : 1;  /* bit[31]: [31]��ccpu fiq int���͸�ccpu�����ڵ��ԣ���ccpu_sft_fiq_req���ò����� */
    } reg;
} SOC_AO_SCTRL_SC_INT_STATM_UNION;
#endif
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_0awd_START            (0)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_0awd_END              (0)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_1cm3wdg0_START        (1)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_1cm3wdg0_END          (1)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_2hifiwd_START         (2)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_2hifiwd_END           (2)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_3bakwd_START          (3)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_3bakwd_END            (3)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_4acpu_sft_fiq_START   (4)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_4acpu_sft_fiq_END     (4)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_5vote0mcuei_START     (5)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_5vote0mcuei_END       (5)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_6vote0mcudi_START     (6)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_6vote0mcudi_END       (6)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_7vote1mcuei_START     (7)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_7vote1mcuei_END       (7)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_8vote1mcudi_START     (8)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_8vote1mcudi_END       (8)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_9cei_START            (9)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_9cei_END              (9)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_10cdi_START           (10)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_10cdi_END             (10)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_11aei_START           (11)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_11aei_END             (11)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_12adi_START           (12)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_12adi_END             (12)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_13vote2mcudi_START    (13)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_13vote2mcudi_END      (13)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_14vote0mcuei_START    (14)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_14vote0mcuei_END      (14)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_15periei_START        (15)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_15periei_END          (15)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_16peridi_START        (16)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_16peridi_END          (16)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_17vote0aarmei_START   (17)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_17vote0aarmei_END     (17)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_18vote0aarmdi_START   (18)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_18vote0aarmdi_END     (18)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_19vote1aarmei_START   (19)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_19vote1aarmei_END     (19)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_20vote1aarmdi_START   (20)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_20vote1aarmdi_END     (20)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_21vote2aarmdi_START   (21)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_21vote2aarmdi_END     (21)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_22vote0aarmei_START   (22)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_22vote0aarmei_END     (22)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_23vote0carmei_START   (23)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_23vote0carmei_END     (23)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_24vote0carmdi_START   (24)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_24vote0carmdi_END     (24)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_25vote1carmei_START   (25)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_25vote1carmei_END     (25)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_26vote1carmdi_START   (26)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_26vote1carmdi_END     (26)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_27vote2hifidi_START   (27)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_27vote2hifidi_END     (27)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_28vote0hifiei_START   (28)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_28vote0hifiei_END     (28)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_29otgchg_START        (29)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_29otgchg_END          (29)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_30otgdat_START        (30)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_30otgdat_END          (30)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_31ccpu_sft_fiq_START  (31)
#define SOC_AO_SCTRL_SC_INT_STATM_sc_int_statm_31ccpu_sft_fiq_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_INT_CLEAR_UNION
 �ṹ˵��  : SC_INT_CLEAR �Ĵ����ṹ���塣��ַƫ����:0x0CC����ֵ:0x00000000�����:32
 �Ĵ���˵��: �ڲ��ж�����Ĵ���������Ӧ�жϱ���λд1����ʾ�����Ӧ���ж�״̬������ԭʼ�ڲ��жϼĴ��������κ��ڲ��жϼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_int_clear_0awd           : 1;  /* bit[0] : [0]�� ACPU Watchdog��λ�����жϣ��͸�MCU�� */
        unsigned int  sc_int_clear_1cm3wdg0       : 1;  /* bit[1] : [1]�� CM3 Watchdog0��λ�����жϣ��͸�ACPU�� */
        unsigned int  sc_int_clear_2hifiwd        : 1;  /* bit[2] : [2]�� HIFI Watchdog��λ�����жϣ��͸�MCU��ACPU�� */
        unsigned int  sc_int_clear_3bakwd         : 1;  /* bit[3] : [3]�� ����Watchdog��λ�����жϣ��͸�MCU��ACPU�� */
        unsigned int  sc_int_clear_4acpu_sft_fiq  : 1;  /* bit[4] : [4]�� acpu fiq int���͸�acpu�����ڵ��ԣ���acpu_sft_fiq_req���ò����� */
        unsigned int  sc_int_clear_5vote0mcuei    : 1;  /* bit[5] : [5]�� ͶƱ�Ĵ���0�����жϣ��͸�MCU�� */
        unsigned int  sc_int_clear_6vote0mcudi    : 1;  /* bit[6] : [6]�� ͶƱ�Ĵ���0�������жϣ��͸�MCU�� */
        unsigned int  sc_int_clear_7vote1mcuei    : 1;  /* bit[7] : [7]�� ͶƱ�Ĵ���1�����жϣ��͸�MCU�� */
        unsigned int  sc_int_clear_8vote1mcudi    : 1;  /* bit[8] : [8]�� ͶƱ�Ĵ���1�������жϣ��͸�MCU�� */
        unsigned int  sc_int_clear_9cei           : 1;  /* bit[9] : [9]�� CCPU ˯��ͶƱ�����жϣ��͸�CCPU�� */
        unsigned int  sc_int_clear_10cdi          : 1;  /* bit[10]: [10]�� CCPU ˯��ͶƱ�������������жϣ��͸�MCU�� */
        unsigned int  sc_int_clear_11aei          : 1;  /* bit[11]: [11]�� ACPU ˯��ͶƱ�����жϣ��͸�ACPU�� */
        unsigned int  sc_int_clear_12adi          : 1;  /* bit[12]: [12]�� ACPU ˯��ͶƱ�������������жϣ��͸�MCU�� */
        unsigned int  sc_int_clear_13vote2mcudi   : 1;  /* bit[13]: [13]�� ͶƱ�Ĵ���2�����жϣ��͸�MCU�� */
        unsigned int  sc_int_clear_14vote0mcuei   : 1;  /* bit[14]: [14]�� ͶƱ�Ĵ���2�������жϣ��͸�MCU�� */
        unsigned int  sc_int_clear_15periei       : 1;  /* bit[15]: [15]�� PERI ˯��ͶƱ�����жϣ��͸�MCU�� */
        unsigned int  sc_int_clear_16peridi       : 1;  /* bit[16]: [16]�� PERI ˯��ͶƱ�������������жϣ��͸�MCU�� */
        unsigned int  sc_int_clear_17vote0aarmei  : 1;  /* bit[17]: [17]�� ͶƱ�Ĵ���0�����жϣ��͸�ACPU�� */
        unsigned int  sc_int_clear_18vote0aarmdi  : 1;  /* bit[18]: [18]�� ͶƱ�Ĵ���0�������жϣ��͸�ACPU�� */
        unsigned int  sc_int_clear_19vote1aarmei  : 1;  /* bit[19]: [19]�� ͶƱ�Ĵ���1�����жϣ��͸�ACPU�� */
        unsigned int  sc_int_clear_20vote1aarmdi  : 1;  /* bit[20]: [20]�� ͶƱ�Ĵ���1�������жϣ��͸�ACPU�� */
        unsigned int  sc_int_clear_21vote2aarmdi  : 1;  /* bit[21]: [21]�� ͶƱ�Ĵ���2�����жϣ��͸�ACPU�� */
        unsigned int  sc_int_clear_22vote0aarmei  : 1;  /* bit[22]: [22]�� ͶƱ�Ĵ���2�������жϣ��͸�ACPU�� */
        unsigned int  sc_int_clear_23vote0carmei  : 1;  /* bit[23]: [23]�� ͶƱ�Ĵ���0�����жϣ��͸�CCPU�� */
        unsigned int  sc_int_clear_24vote0carmdi  : 1;  /* bit[24]: [24]�� ͶƱ�Ĵ���0�������жϣ��͸�CCPU�� */
        unsigned int  sc_int_clear_25vote1carmei  : 1;  /* bit[25]: [25]�� ͶƱ�Ĵ���1�����жϣ��͸�CCPU�� */
        unsigned int  sc_int_clear_26vote1carmdi  : 1;  /* bit[26]: [26]�� ͶƱ�Ĵ���1�������жϣ��͸�CCPU�� */
        unsigned int  sc_int_clear_27vote2hifidi  : 1;  /* bit[27]: [27]�� ͶƱ�Ĵ���2�����жϣ��͸�HiFi�� */
        unsigned int  sc_int_clear_28vote0hifiei  : 1;  /* bit[28]: [28]�� ͶƱ�Ĵ���2�������жϣ��͸�HiFi�� */
        unsigned int  sc_int_clear_29otgchg       : 1;  /* bit[29]: [29]�� ��USBOTG chgdet_sts�жϣ��͸�MCU��ACPU�� */
        unsigned int  sc_int_clear_30otgdat       : 1;  /* bit[30]: [30]�� ��USBOTG datcondet_sts�жϡ��͸�MCU��ACPU�� */
        unsigned int  sc_int_clear_31ccpu_sft_fiq : 1;  /* bit[31]: [31]��ccpu fiq int���͸�ccpu�����ڵ��ԣ���ccpu_sft_fiq_req���ò����� */
    } reg;
} SOC_AO_SCTRL_SC_INT_CLEAR_UNION;
#endif
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_0awd_START            (0)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_0awd_END              (0)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_1cm3wdg0_START        (1)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_1cm3wdg0_END          (1)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_2hifiwd_START         (2)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_2hifiwd_END           (2)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_3bakwd_START          (3)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_3bakwd_END            (3)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_4acpu_sft_fiq_START   (4)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_4acpu_sft_fiq_END     (4)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_5vote0mcuei_START     (5)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_5vote0mcuei_END       (5)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_6vote0mcudi_START     (6)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_6vote0mcudi_END       (6)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_7vote1mcuei_START     (7)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_7vote1mcuei_END       (7)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_8vote1mcudi_START     (8)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_8vote1mcudi_END       (8)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_9cei_START            (9)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_9cei_END              (9)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_10cdi_START           (10)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_10cdi_END             (10)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_11aei_START           (11)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_11aei_END             (11)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_12adi_START           (12)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_12adi_END             (12)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_13vote2mcudi_START    (13)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_13vote2mcudi_END      (13)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_14vote0mcuei_START    (14)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_14vote0mcuei_END      (14)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_15periei_START        (15)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_15periei_END          (15)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_16peridi_START        (16)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_16peridi_END          (16)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_17vote0aarmei_START   (17)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_17vote0aarmei_END     (17)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_18vote0aarmdi_START   (18)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_18vote0aarmdi_END     (18)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_19vote1aarmei_START   (19)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_19vote1aarmei_END     (19)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_20vote1aarmdi_START   (20)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_20vote1aarmdi_END     (20)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_21vote2aarmdi_START   (21)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_21vote2aarmdi_END     (21)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_22vote0aarmei_START   (22)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_22vote0aarmei_END     (22)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_23vote0carmei_START   (23)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_23vote0carmei_END     (23)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_24vote0carmdi_START   (24)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_24vote0carmdi_END     (24)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_25vote1carmei_START   (25)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_25vote1carmei_END     (25)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_26vote1carmdi_START   (26)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_26vote1carmdi_END     (26)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_27vote2hifidi_START   (27)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_27vote2hifidi_END     (27)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_28vote0hifiei_START   (28)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_28vote0hifiei_END     (28)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_29otgchg_START        (29)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_29otgchg_END          (29)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_30otgdat_START        (30)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_30otgdat_END          (30)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_31ccpu_sft_fiq_START  (31)
#define SOC_AO_SCTRL_SC_INT_CLEAR_sc_int_clear_31ccpu_sft_fiq_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_INT_EN_SET_UNION
 �ṹ˵��  : SC_INT_EN_SET �Ĵ����ṹ���塣��ַƫ����:0x0D0����ֵ:0x00000000�����:32
 �Ĵ���˵��: �ڲ��ж�ʹ�ܼĴ���0���Ա���д1��SC_INT_EN_STAT�Ķ�Ӧbit��1��д0��Ӱ�����ε�״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_int_en0_0awd           : 1;  /* bit[0] : [0]�� ACPU Watchdog��λ�����жϣ��͸�MCU�� */
        unsigned int  sc_int_en0_1cm3wdg0       : 1;  /* bit[1] : [1]�� CM3 Watchdog0��λ�����жϣ��͸�ACPU�� */
        unsigned int  sc_int_en0_2hifiwd        : 1;  /* bit[2] : [2]�� HIFI Watchdog��λ�����жϣ��͸�MCU��ACPU�� */
        unsigned int  sc_int_en0_3bakwd         : 1;  /* bit[3] : [3]�� ����Watchdog��λ�����жϣ��͸�MCU��ACPU�� */
        unsigned int  sc_int_en0_4acpu_sft_fiq  : 1;  /* bit[4] : [4]�� acpu fiq int���͸�acpu�����ڵ��ԣ���acpu_sft_fiq_req���ò����� */
        unsigned int  sc_int_en0_5vote0mcuei    : 1;  /* bit[5] : [5]�� ͶƱ�Ĵ���0�����жϣ��͸�MCU�� */
        unsigned int  sc_int_en0_6vote0mcudi    : 1;  /* bit[6] : [6]�� ͶƱ�Ĵ���0�������жϣ��͸�MCU�� */
        unsigned int  sc_int_en0_7vote1mcuei    : 1;  /* bit[7] : [7]�� ͶƱ�Ĵ���1�����жϣ��͸�MCU�� */
        unsigned int  sc_int_en0_8vote1mcudi    : 1;  /* bit[8] : [8]�� ͶƱ�Ĵ���1�������жϣ��͸�MCU�� */
        unsigned int  sc_int_en0_9cei           : 1;  /* bit[9] : [9]�� CCPU ˯��ͶƱ�����жϣ��͸�CCPU�� */
        unsigned int  sc_int_en0_10cdi          : 1;  /* bit[10]: [10]�� CCPU ˯��ͶƱ�������������жϣ��͸�MCU�� */
        unsigned int  sc_int_en0_11aei          : 1;  /* bit[11]: [11]�� ACPU ˯��ͶƱ�����жϣ��͸�ACPU�� */
        unsigned int  sc_int_en0_12adi          : 1;  /* bit[12]: [12]�� ACPU ˯��ͶƱ�������������жϣ��͸�MCU�� */
        unsigned int  sc_int_en0_13vote2mcudi   : 1;  /* bit[13]: [13]�� ͶƱ�Ĵ���2�����жϣ��͸�MCU�� */
        unsigned int  sc_int_en0_14vote0mcuei   : 1;  /* bit[14]: [14]�� ͶƱ�Ĵ���2�������жϣ��͸�MCU�� */
        unsigned int  sc_int_en0_15periei       : 1;  /* bit[15]: [15]�� PERI ˯��ͶƱ�����жϣ��͸�MCU�� */
        unsigned int  sc_int_en0_16peridi       : 1;  /* bit[16]: [16]�� PERI ˯��ͶƱ�������������жϣ��͸�MCU�� */
        unsigned int  sc_int_en0_17vote0aarmei  : 1;  /* bit[17]: [17]�� ͶƱ�Ĵ���0�����жϣ��͸�ACPU�� */
        unsigned int  sc_int_en0_18vote0aarmdi  : 1;  /* bit[18]: [18]�� ͶƱ�Ĵ���0�������жϣ��͸�ACPU�� */
        unsigned int  sc_int_en0_19vote1aarmei  : 1;  /* bit[19]: [19]�� ͶƱ�Ĵ���1�����жϣ��͸�ACPU�� */
        unsigned int  sc_int_en0_20vote1aarmdi  : 1;  /* bit[20]: [20]�� ͶƱ�Ĵ���1�������жϣ��͸�ACPU�� */
        unsigned int  sc_int_en0_21vote2aarmdi  : 1;  /* bit[21]: [21]�� ͶƱ�Ĵ���2�����жϣ��͸�ACPU�� */
        unsigned int  sc_int_en0_22vote0aarmei  : 1;  /* bit[22]: [22]�� ͶƱ�Ĵ���2�������жϣ��͸�ACPU�� */
        unsigned int  sc_int_en0_23vote0carmei  : 1;  /* bit[23]: [23]�� ͶƱ�Ĵ���0�����жϣ��͸�CCPU�� */
        unsigned int  sc_int_en0_24vote0carmdi  : 1;  /* bit[24]: [24]�� ͶƱ�Ĵ���0�������жϣ��͸�CCPU�� */
        unsigned int  sc_int_en0_25vote1carmei  : 1;  /* bit[25]: [25]�� ͶƱ�Ĵ���1�����жϣ��͸�CCPU�� */
        unsigned int  sc_int_en0_26vote1carmdi  : 1;  /* bit[26]: [26]�� ͶƱ�Ĵ���1�������жϣ��͸�CCPU�� */
        unsigned int  sc_int_en0_27vote2hifidi  : 1;  /* bit[27]: [27]�� ͶƱ�Ĵ���2�����жϣ��͸�HiFi�� */
        unsigned int  sc_int_en0_28vote0hifiei  : 1;  /* bit[28]: [28]�� ͶƱ�Ĵ���2�������жϣ��͸�HiFi�� */
        unsigned int  sc_int_en0_29otgchg       : 1;  /* bit[29]: [29]�� ��USBOTG chgdet_sts�жϣ��͸�MCU��ACPU�� */
        unsigned int  sc_int_en0_30otgdat       : 1;  /* bit[30]: [30]�� ��USBOTG datcondet_sts�жϡ��͸�MCU��ACPU�� */
        unsigned int  sc_int_en0_31ccpu_sft_fiq : 1;  /* bit[31]: [31]��ccpu fiq int���͸�ccpu�����ڵ��ԣ���ccpu_sft_fiq_req���ò����� */
    } reg;
} SOC_AO_SCTRL_SC_INT_EN_SET_UNION;
#endif
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_0awd_START            (0)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_0awd_END              (0)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_1cm3wdg0_START        (1)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_1cm3wdg0_END          (1)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_2hifiwd_START         (2)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_2hifiwd_END           (2)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_3bakwd_START          (3)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_3bakwd_END            (3)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_4acpu_sft_fiq_START   (4)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_4acpu_sft_fiq_END     (4)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_5vote0mcuei_START     (5)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_5vote0mcuei_END       (5)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_6vote0mcudi_START     (6)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_6vote0mcudi_END       (6)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_7vote1mcuei_START     (7)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_7vote1mcuei_END       (7)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_8vote1mcudi_START     (8)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_8vote1mcudi_END       (8)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_9cei_START            (9)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_9cei_END              (9)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_10cdi_START           (10)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_10cdi_END             (10)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_11aei_START           (11)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_11aei_END             (11)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_12adi_START           (12)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_12adi_END             (12)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_13vote2mcudi_START    (13)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_13vote2mcudi_END      (13)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_14vote0mcuei_START    (14)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_14vote0mcuei_END      (14)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_15periei_START        (15)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_15periei_END          (15)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_16peridi_START        (16)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_16peridi_END          (16)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_17vote0aarmei_START   (17)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_17vote0aarmei_END     (17)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_18vote0aarmdi_START   (18)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_18vote0aarmdi_END     (18)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_19vote1aarmei_START   (19)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_19vote1aarmei_END     (19)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_20vote1aarmdi_START   (20)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_20vote1aarmdi_END     (20)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_21vote2aarmdi_START   (21)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_21vote2aarmdi_END     (21)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_22vote0aarmei_START   (22)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_22vote0aarmei_END     (22)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_23vote0carmei_START   (23)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_23vote0carmei_END     (23)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_24vote0carmdi_START   (24)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_24vote0carmdi_END     (24)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_25vote1carmei_START   (25)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_25vote1carmei_END     (25)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_26vote1carmdi_START   (26)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_26vote1carmdi_END     (26)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_27vote2hifidi_START   (27)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_27vote2hifidi_END     (27)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_28vote0hifiei_START   (28)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_28vote0hifiei_END     (28)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_29otgchg_START        (29)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_29otgchg_END          (29)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_30otgdat_START        (30)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_30otgdat_END          (30)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_31ccpu_sft_fiq_START  (31)
#define SOC_AO_SCTRL_SC_INT_EN_SET_sc_int_en0_31ccpu_sft_fiq_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_INT_EN_DIS_UNION
 �ṹ˵��  : SC_INT_EN_DIS �Ĵ����ṹ���塣��ַƫ����:0x0D4����ֵ:0x00000000�����:32
 �Ĵ���˵��: �ڲ��ж����μĴ���0���Ա���д1��SC_INT_EN_STAT�Ķ�Ӧbit��0��д0��Ӱ��ʱ�����ε�״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_int_dis0_0awd           : 1;  /* bit[0] : [0]�� ACPU Watchdog��λ�����жϣ��͸�MCU�� */
        unsigned int  sc_int_dis0_1cm3wdg0       : 1;  /* bit[1] : [1]�� CM3 Watchdog0��λ�����жϣ��͸�ACPU�� */
        unsigned int  sc_int_dis0_2hifiwd        : 1;  /* bit[2] : [2]�� HIFI Watchdog��λ�����жϣ��͸�MCU��ACPU�� */
        unsigned int  sc_int_dis0_3bakwd         : 1;  /* bit[3] : [3]�� ����Watchdog��λ�����жϣ��͸�MCU��ACPU�� */
        unsigned int  sc_int_dis0_4acpu_sft_fiq  : 1;  /* bit[4] : [4]�� acpu fiq int���͸�acpu�����ڵ��ԣ���acpu_sft_fiq_req���ò����� */
        unsigned int  sc_int_dis0_5vote0mcuei    : 1;  /* bit[5] : [5]�� ͶƱ�Ĵ���0�����жϣ��͸�MCU�� */
        unsigned int  sc_int_dis0_6vote0mcudi    : 1;  /* bit[6] : [6]�� ͶƱ�Ĵ���0�������жϣ��͸�MCU�� */
        unsigned int  sc_int_dis0_7vote1mcuei    : 1;  /* bit[7] : [7]�� ͶƱ�Ĵ���1�����жϣ��͸�MCU�� */
        unsigned int  sc_int_dis0_8vote1mcudi    : 1;  /* bit[8] : [8]�� ͶƱ�Ĵ���1�������жϣ��͸�MCU�� */
        unsigned int  sc_int_dis0_9cei           : 1;  /* bit[9] : [9]�� CCPU ˯��ͶƱ�����жϣ��͸�CCPU�� */
        unsigned int  sc_int_dis0_10cdi          : 1;  /* bit[10]: [10]�� CCPU ˯��ͶƱ�������������жϣ��͸�MCU�� */
        unsigned int  sc_int_dis0_11aei          : 1;  /* bit[11]: [11]�� ACPU ˯��ͶƱ�����жϣ��͸�ACPU�� */
        unsigned int  sc_int_dis0_12adi          : 1;  /* bit[12]: [12]�� ACPU ˯��ͶƱ�������������жϣ��͸�MCU�� */
        unsigned int  sc_int_dis0_13vote2mcudi   : 1;  /* bit[13]: [13]�� ͶƱ�Ĵ���2�����жϣ��͸�MCU�� */
        unsigned int  sc_int_dis0_14vote0mcuei   : 1;  /* bit[14]: [14]�� ͶƱ�Ĵ���2�������жϣ��͸�MCU�� */
        unsigned int  sc_int_dis0_15periei       : 1;  /* bit[15]: [15]�� PERI ˯��ͶƱ�����жϣ��͸�MCU�� */
        unsigned int  sc_int_dis0_16peridi       : 1;  /* bit[16]: [16]�� PERI ˯��ͶƱ�������������жϣ��͸�MCU�� */
        unsigned int  sc_int_dis0_17vote0aarmei  : 1;  /* bit[17]: [17]�� ͶƱ�Ĵ���0�����жϣ��͸�ACPU�� */
        unsigned int  sc_int_dis0_18vote0aarmdi  : 1;  /* bit[18]: [18]�� ͶƱ�Ĵ���0�������жϣ��͸�ACPU�� */
        unsigned int  sc_int_dis0_19vote1aarmei  : 1;  /* bit[19]: [19]�� ͶƱ�Ĵ���1�����жϣ��͸�ACPU�� */
        unsigned int  sc_int_dis0_20vote1aarmdi  : 1;  /* bit[20]: [20]�� ͶƱ�Ĵ���1�������жϣ��͸�ACPU�� */
        unsigned int  sc_int_dis0_21vote2aarmdi  : 1;  /* bit[21]: [21]�� ͶƱ�Ĵ���2�����жϣ��͸�ACPU�� */
        unsigned int  sc_int_dis0_22vote0aarmei  : 1;  /* bit[22]: [22]�� ͶƱ�Ĵ���2�������жϣ��͸�ACPU�� */
        unsigned int  sc_int_dis0_23vote0carmei  : 1;  /* bit[23]: [23]�� ͶƱ�Ĵ���0�����жϣ��͸�CCPU�� */
        unsigned int  sc_int_dis0_24vote0carmdi  : 1;  /* bit[24]: [24]�� ͶƱ�Ĵ���0�������жϣ��͸�CCPU�� */
        unsigned int  sc_int_dis0_25vote1carmei  : 1;  /* bit[25]: [25]�� ͶƱ�Ĵ���1�����жϣ��͸�CCPU�� */
        unsigned int  sc_int_dis0_26vote1carmdi  : 1;  /* bit[26]: [26]�� ͶƱ�Ĵ���1�������жϣ��͸�CCPU�� */
        unsigned int  sc_int_dis0_27vote2hifidi  : 1;  /* bit[27]: [27]�� ͶƱ�Ĵ���2�����жϣ��͸�HiFi�� */
        unsigned int  sc_int_dis0_28vote0hifiei  : 1;  /* bit[28]: [28]�� ͶƱ�Ĵ���2�������жϣ��͸�HiFi�� */
        unsigned int  sc_int_dis0_29otgchg       : 1;  /* bit[29]: [29]�� ��USBOTG chgdet_sts�жϣ��͸�MCU��ACPU�� */
        unsigned int  sc_int_dis0_30otgdat       : 1;  /* bit[30]: [30]�� ��USBOTG datcondet_sts�жϡ��͸�MCU��ACPU�� */
        unsigned int  sc_int_dis0_31ccpu_sft_fiq : 1;  /* bit[31]: [31]��ccpu fiq int���͸�ccpu�����ڵ��ԣ���ccpu_sft_fiq_req���ò����� */
    } reg;
} SOC_AO_SCTRL_SC_INT_EN_DIS_UNION;
#endif
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_0awd_START            (0)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_0awd_END              (0)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_1cm3wdg0_START        (1)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_1cm3wdg0_END          (1)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_2hifiwd_START         (2)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_2hifiwd_END           (2)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_3bakwd_START          (3)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_3bakwd_END            (3)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_4acpu_sft_fiq_START   (4)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_4acpu_sft_fiq_END     (4)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_5vote0mcuei_START     (5)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_5vote0mcuei_END       (5)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_6vote0mcudi_START     (6)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_6vote0mcudi_END       (6)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_7vote1mcuei_START     (7)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_7vote1mcuei_END       (7)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_8vote1mcudi_START     (8)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_8vote1mcudi_END       (8)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_9cei_START            (9)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_9cei_END              (9)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_10cdi_START           (10)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_10cdi_END             (10)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_11aei_START           (11)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_11aei_END             (11)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_12adi_START           (12)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_12adi_END             (12)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_13vote2mcudi_START    (13)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_13vote2mcudi_END      (13)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_14vote0mcuei_START    (14)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_14vote0mcuei_END      (14)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_15periei_START        (15)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_15periei_END          (15)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_16peridi_START        (16)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_16peridi_END          (16)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_17vote0aarmei_START   (17)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_17vote0aarmei_END     (17)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_18vote0aarmdi_START   (18)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_18vote0aarmdi_END     (18)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_19vote1aarmei_START   (19)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_19vote1aarmei_END     (19)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_20vote1aarmdi_START   (20)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_20vote1aarmdi_END     (20)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_21vote2aarmdi_START   (21)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_21vote2aarmdi_END     (21)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_22vote0aarmei_START   (22)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_22vote0aarmei_END     (22)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_23vote0carmei_START   (23)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_23vote0carmei_END     (23)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_24vote0carmdi_START   (24)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_24vote0carmdi_END     (24)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_25vote1carmei_START   (25)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_25vote1carmei_END     (25)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_26vote1carmdi_START   (26)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_26vote1carmdi_END     (26)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_27vote2hifidi_START   (27)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_27vote2hifidi_END     (27)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_28vote0hifiei_START   (28)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_28vote0hifiei_END     (28)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_29otgchg_START        (29)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_29otgchg_END          (29)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_30otgdat_START        (30)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_30otgdat_END          (30)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_31ccpu_sft_fiq_START  (31)
#define SOC_AO_SCTRL_SC_INT_EN_DIS_sc_int_dis0_31ccpu_sft_fiq_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_INT_EN_STAT_UNION
 �ṹ˵��  : SC_INT_EN_STAT �Ĵ����ṹ���塣��ַƫ����:0x0D8����ֵ:0x00000000�����:32
 �Ĵ���˵��: �ڲ��ж�ʹ��״̬�Ĵ�����ͨ������SC_INT_EN_SET0��SC_INT_EN_DIS0�޸�״̬������SC�ڲ��жϵ�ʹ�ܺ��������á���ӦbitΪ1��ʾʹ����Ӧ�жϣ�Ϊ0��ʾ�����жϡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_int_en_sta_0awd           : 1;  /* bit[0] : [0]�� ACPU Watchdog��λ�����жϣ��͸�MCU�� */
        unsigned int  sc_int_en_sta_1cm3wdg0       : 1;  /* bit[1] : [1]�� CM3 Watchdog0��λ�����жϣ��͸�ACPU�� */
        unsigned int  sc_int_en_sta_2hifiwd        : 1;  /* bit[2] : [2]�� HIFI Watchdog��λ�����жϣ��͸�MCU��ACPU�� */
        unsigned int  sc_int_en_sta_3bakwd         : 1;  /* bit[3] : [3]�� ����Watchdog��λ�����жϣ��͸�MCU��ACPU�� */
        unsigned int  sc_int_en_sta_4acpu_sft_fiq  : 1;  /* bit[4] : [4]�� acpu fiq int���͸�acpu�����ڵ��ԣ���acpu_sft_fiq_req���ò����� */
        unsigned int  sc_int_en_sta_5vote0mcuei    : 1;  /* bit[5] : [5]�� ͶƱ�Ĵ���0�����жϣ��͸�MCU�� */
        unsigned int  sc_int_en_sta_6vote0mcudi    : 1;  /* bit[6] : [6]�� ͶƱ�Ĵ���0�������жϣ��͸�MCU�� */
        unsigned int  sc_int_en_sta_7vote1mcuei    : 1;  /* bit[7] : [7]�� ͶƱ�Ĵ���1�����жϣ��͸�MCU�� */
        unsigned int  sc_int_en_sta_8vote1mcudi    : 1;  /* bit[8] : [8]�� ͶƱ�Ĵ���1�������жϣ��͸�MCU�� */
        unsigned int  sc_int_en_sta_9cei           : 1;  /* bit[9] : [9]�� CCPU ˯��ͶƱ�����жϣ��͸�CCPU�� */
        unsigned int  sc_int_en_sta_10cdi          : 1;  /* bit[10]: [10]�� CCPU ˯��ͶƱ�������������жϣ��͸�MCU�� */
        unsigned int  sc_int_en_sta_11aei          : 1;  /* bit[11]: [11]�� ACPU ˯��ͶƱ�����жϣ��͸�ACPU�� */
        unsigned int  sc_int_en_sta_12adi          : 1;  /* bit[12]: [12]�� ACPU ˯��ͶƱ�������������жϣ��͸�MCU�� */
        unsigned int  sc_int_en_sta_13vote2mcudi   : 1;  /* bit[13]: [13]�� ͶƱ�Ĵ���2�����жϣ��͸�MCU�� */
        unsigned int  sc_int_en_sta_14vote0mcuei   : 1;  /* bit[14]: [14]�� ͶƱ�Ĵ���2�������жϣ��͸�MCU�� */
        unsigned int  sc_int_en_sta_15periei       : 1;  /* bit[15]: [15]�� PERI ˯��ͶƱ�����жϣ��͸�MCU�� */
        unsigned int  sc_int_en_sta_16peridi       : 1;  /* bit[16]: [16]�� PERI ˯��ͶƱ�������������жϣ��͸�MCU�� */
        unsigned int  sc_int_en_sta_17vote0aarmei  : 1;  /* bit[17]: [17]�� ͶƱ�Ĵ���0�����жϣ��͸�ACPU�� */
        unsigned int  sc_int_en_sta_18vote0aarmdi  : 1;  /* bit[18]: [18]�� ͶƱ�Ĵ���0�������жϣ��͸�ACPU�� */
        unsigned int  sc_int_en_sta_19vote1aarmei  : 1;  /* bit[19]: [19]�� ͶƱ�Ĵ���1�����жϣ��͸�ACPU�� */
        unsigned int  sc_int_en_sta_20vote1aarmdi  : 1;  /* bit[20]: [20]�� ͶƱ�Ĵ���1�������жϣ��͸�ACPU�� */
        unsigned int  sc_int_en_sta_21vote2aarmdi  : 1;  /* bit[21]: [21]�� ͶƱ�Ĵ���2�����жϣ��͸�ACPU�� */
        unsigned int  sc_int_en_sta_22vote0aarmei  : 1;  /* bit[22]: [22]�� ͶƱ�Ĵ���2�������жϣ��͸�ACPU�� */
        unsigned int  sc_int_en_sta_23vote0carmei  : 1;  /* bit[23]: [23]�� ͶƱ�Ĵ���0�����жϣ��͸�CCPU�� */
        unsigned int  sc_int_en_sta_24vote0carmdi  : 1;  /* bit[24]: [24]�� ͶƱ�Ĵ���0�������жϣ��͸�CCPU�� */
        unsigned int  sc_int_en_sta_25vote1carmei  : 1;  /* bit[25]: [25]�� ͶƱ�Ĵ���1�����жϣ��͸�CCPU�� */
        unsigned int  sc_int_en_sta_26vote1carmdi  : 1;  /* bit[26]: [26]�� ͶƱ�Ĵ���1�������жϣ��͸�CCPU�� */
        unsigned int  sc_int_en_sta_27vote2hifidi  : 1;  /* bit[27]: [27]�� ͶƱ�Ĵ���2�����жϣ��͸�HiFi�� */
        unsigned int  sc_int_en_sta_28vote0hifiei  : 1;  /* bit[28]: [28]�� ͶƱ�Ĵ���2�������жϣ��͸�HiFi�� */
        unsigned int  sc_int_en_sta_29otgchg       : 1;  /* bit[29]: [29]�� ��USBOTG chgdet_sts�жϣ��͸�MCU��ACPU�� */
        unsigned int  sc_int_en_sta_30otgdat       : 1;  /* bit[30]: [30]�� ��USBOTG datcondet_sts�жϡ��͸�MCU��ACPU�� */
        unsigned int  sc_int_en_sta_31ccpu_sft_fiq : 1;  /* bit[31]: [31]��ccpu fiq int���͸�ccpu�����ڵ��ԣ���ccpu_sft_fiq_req���ò����� */
    } reg;
} SOC_AO_SCTRL_SC_INT_EN_STAT_UNION;
#endif
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_0awd_START            (0)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_0awd_END              (0)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_1cm3wdg0_START        (1)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_1cm3wdg0_END          (1)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_2hifiwd_START         (2)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_2hifiwd_END           (2)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_3bakwd_START          (3)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_3bakwd_END            (3)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_4acpu_sft_fiq_START   (4)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_4acpu_sft_fiq_END     (4)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_5vote0mcuei_START     (5)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_5vote0mcuei_END       (5)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_6vote0mcudi_START     (6)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_6vote0mcudi_END       (6)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_7vote1mcuei_START     (7)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_7vote1mcuei_END       (7)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_8vote1mcudi_START     (8)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_8vote1mcudi_END       (8)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_9cei_START            (9)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_9cei_END              (9)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_10cdi_START           (10)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_10cdi_END             (10)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_11aei_START           (11)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_11aei_END             (11)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_12adi_START           (12)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_12adi_END             (12)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_13vote2mcudi_START    (13)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_13vote2mcudi_END      (13)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_14vote0mcuei_START    (14)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_14vote0mcuei_END      (14)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_15periei_START        (15)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_15periei_END          (15)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_16peridi_START        (16)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_16peridi_END          (16)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_17vote0aarmei_START   (17)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_17vote0aarmei_END     (17)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_18vote0aarmdi_START   (18)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_18vote0aarmdi_END     (18)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_19vote1aarmei_START   (19)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_19vote1aarmei_END     (19)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_20vote1aarmdi_START   (20)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_20vote1aarmdi_END     (20)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_21vote2aarmdi_START   (21)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_21vote2aarmdi_END     (21)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_22vote0aarmei_START   (22)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_22vote0aarmei_END     (22)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_23vote0carmei_START   (23)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_23vote0carmei_END     (23)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_24vote0carmdi_START   (24)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_24vote0carmdi_END     (24)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_25vote1carmei_START   (25)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_25vote1carmei_END     (25)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_26vote1carmdi_START   (26)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_26vote1carmdi_END     (26)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_27vote2hifidi_START   (27)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_27vote2hifidi_END     (27)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_28vote0hifiei_START   (28)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_28vote0hifiei_END     (28)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_29otgchg_START        (29)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_29otgchg_END          (29)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_30otgdat_START        (30)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_30otgdat_END          (30)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_31ccpu_sft_fiq_START  (31)
#define SOC_AO_SCTRL_SC_INT_EN_STAT_sc_int_en_sta_31ccpu_sft_fiq_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_INT_STATR1_UNION
 �ṹ˵��  : SC_INT_STATR1 �Ĵ����ṹ���塣��ַƫ����:0x0E4����ֵ:0x00000000�����:32
 �Ĵ���˵��: ԭʼ�ڲ��жϼĴ���������ָʾSC�ڲ���ԭʼ�ж�״̬������ǰ������ӦbitΪ1��ʾ���жϣ�Ϊ0��ʾ���жϡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_int_statr_0usim0_detect_int : 1;  /* bit[0] : [0]�� USIM0 ����γ�����жϡ� */
        unsigned int  sc_int_statr_1usim1_detect_int : 1;  /* bit[1] : [1]�� USIM1 ����γ�����жϡ� */
        unsigned int  sc_int_statr_2reserved         : 1;  /* bit[2] : [2]�� reserved */
        unsigned int  sc_int_statr_3reserved         : 1;  /* bit[3] : [3]�� reserved */
        unsigned int  sc_int_statr_4reserved         : 1;  /* bit[4] : [4]�� reserved */
        unsigned int  sc_int_statr_5reserved         : 1;  /* bit[5] : [5]�� reserved */
        unsigned int  sc_int_statr_6reserved         : 1;  /* bit[6] : [6]�� reserved */
        unsigned int  sc_int_statr_7reserved         : 1;  /* bit[7] : [7]�� reserved */
        unsigned int  sc_int_statr_8reserved         : 1;  /* bit[8] : [8]�� reserved */
        unsigned int  sc_int_statr_9reserved         : 1;  /* bit[9] : [9]�� reserved */
        unsigned int  sc_int_statr_10reserved        : 1;  /* bit[10]: [10]�� reserved */
        unsigned int  sc_int_statr_11reserved        : 1;  /* bit[11]: [11]�� reserved */
        unsigned int  sc_int_statr_12reserved        : 1;  /* bit[12]: [12]�� reserved */
        unsigned int  sc_int_statr_13reserved        : 1;  /* bit[13]: [13]�� reserved */
        unsigned int  sc_int_statr_14reserved        : 1;  /* bit[14]: [14]�� reserved */
        unsigned int  sc_int_statr_15reserved        : 1;  /* bit[15]: [15]�� reserved */
        unsigned int  sc_int_statr_16reserved        : 1;  /* bit[16]: [16]�� reserved */
        unsigned int  sc_int_statr_17reserved        : 1;  /* bit[17]: [17]�� reserved */
        unsigned int  sc_int_statr_18reserved        : 1;  /* bit[18]: [18]�� reserved */
        unsigned int  sc_int_statr_19reserved        : 1;  /* bit[19]: [19]�� reserved */
        unsigned int  sc_int_statr_20reserved        : 1;  /* bit[20]: [20]�� reserved */
        unsigned int  sc_int_statr_21reserved        : 1;  /* bit[21]: [21]�� reserved */
        unsigned int  sc_int_statr_22reserved        : 1;  /* bit[22]: [22]�� reserved */
        unsigned int  sc_int_statr_23reserved        : 1;  /* bit[23]: [23]�� reserved */
        unsigned int  sc_int_statr_24reserved        : 1;  /* bit[24]: [24]�� reserved */
        unsigned int  sc_int_statr_25reserved        : 1;  /* bit[25]: [25]�� reserved */
        unsigned int  sc_int_statr_26reserved        : 1;  /* bit[26]: [26]�� reserved */
        unsigned int  sc_int_statr_27reserved        : 1;  /* bit[27]: [27]�� reserved */
        unsigned int  sc_int_statr_28reserved        : 1;  /* bit[28]: [28]�� reserved */
        unsigned int  sc_int_statr_29reserved        : 1;  /* bit[29]: [29]�� reserved */
        unsigned int  sc_int_statr_30reserved        : 1;  /* bit[30]: [30]�� reserved */
        unsigned int  sc_int_statr_31reserved        : 1;  /* bit[31]: [31]��reserved */
    } reg;
} SOC_AO_SCTRL_SC_INT_STATR1_UNION;
#endif
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_0usim0_detect_int_START  (0)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_0usim0_detect_int_END    (0)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_1usim1_detect_int_START  (1)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_1usim1_detect_int_END    (1)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_2reserved_START          (2)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_2reserved_END            (2)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_3reserved_START          (3)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_3reserved_END            (3)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_4reserved_START          (4)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_4reserved_END            (4)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_5reserved_START          (5)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_5reserved_END            (5)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_6reserved_START          (6)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_6reserved_END            (6)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_7reserved_START          (7)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_7reserved_END            (7)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_8reserved_START          (8)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_8reserved_END            (8)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_9reserved_START          (9)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_9reserved_END            (9)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_10reserved_START         (10)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_10reserved_END           (10)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_11reserved_START         (11)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_11reserved_END           (11)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_12reserved_START         (12)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_12reserved_END           (12)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_13reserved_START         (13)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_13reserved_END           (13)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_14reserved_START         (14)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_14reserved_END           (14)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_15reserved_START         (15)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_15reserved_END           (15)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_16reserved_START         (16)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_16reserved_END           (16)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_17reserved_START         (17)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_17reserved_END           (17)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_18reserved_START         (18)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_18reserved_END           (18)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_19reserved_START         (19)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_19reserved_END           (19)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_20reserved_START         (20)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_20reserved_END           (20)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_21reserved_START         (21)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_21reserved_END           (21)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_22reserved_START         (22)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_22reserved_END           (22)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_23reserved_START         (23)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_23reserved_END           (23)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_24reserved_START         (24)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_24reserved_END           (24)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_25reserved_START         (25)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_25reserved_END           (25)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_26reserved_START         (26)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_26reserved_END           (26)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_27reserved_START         (27)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_27reserved_END           (27)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_28reserved_START         (28)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_28reserved_END           (28)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_29reserved_START         (29)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_29reserved_END           (29)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_30reserved_START         (30)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_30reserved_END           (30)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_31reserved_START         (31)
#define SOC_AO_SCTRL_SC_INT_STATR1_sc_int_statr_31reserved_END           (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_INT_STATM1_UNION
 �ṹ˵��  : SC_INT_STATM1 �Ĵ����ṹ���塣��ַƫ����:0x0E8����ֵ:0x00000000�����:32
 �Ĵ���˵��: ���κ��ڲ��жϼĴ���������ָʾSC��ǰ�ڲ��ж�״̬�����κ󣩡���ӦbitΪ1��ʾ���жϣ�Ϊ0��ʾ���жϡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_int_statm_0usim0_detect_int : 1;  /* bit[0] : [0]�� USIM0 ����γ�����жϡ� */
        unsigned int  sc_int_statm_1usim1_detect_int : 1;  /* bit[1] : [1]�� USIM1 ����γ�����жϡ� */
        unsigned int  sc_int_statm_2reserved         : 1;  /* bit[2] : [2]�� reserved */
        unsigned int  sc_int_statm_3reserved         : 1;  /* bit[3] : [3]�� reserved */
        unsigned int  sc_int_statm_4reserved         : 1;  /* bit[4] : [4]�� reserved */
        unsigned int  sc_int_statm_5reserved         : 1;  /* bit[5] : [5]�� reserved */
        unsigned int  sc_int_statm_6reserved         : 1;  /* bit[6] : [6]�� reserved */
        unsigned int  sc_int_statm_7reserved         : 1;  /* bit[7] : [7]�� reserved */
        unsigned int  sc_int_statm_8reserved         : 1;  /* bit[8] : [8]�� reserved */
        unsigned int  sc_int_statm_9reserved         : 1;  /* bit[9] : [9]�� reserved */
        unsigned int  sc_int_statm_10reserved        : 1;  /* bit[10]: [10]�� reserved */
        unsigned int  sc_int_statm_11reserved        : 1;  /* bit[11]: [11]�� reserved */
        unsigned int  sc_int_statm_12reserved        : 1;  /* bit[12]: [12]�� reserved */
        unsigned int  sc_int_statm_13reserved        : 1;  /* bit[13]: [13]�� reserved */
        unsigned int  sc_int_statm_14reserved        : 1;  /* bit[14]: [14]�� reserved */
        unsigned int  sc_int_statm_15reserved        : 1;  /* bit[15]: [15]�� reserved */
        unsigned int  sc_int_statm_16reserved        : 1;  /* bit[16]: [16]�� reserved */
        unsigned int  sc_int_statm_17reserved        : 1;  /* bit[17]: [17]�� reserved */
        unsigned int  sc_int_statm_18reserved        : 1;  /* bit[18]: [18]�� reserved */
        unsigned int  sc_int_statm_19reserved        : 1;  /* bit[19]: [19]�� reserved */
        unsigned int  sc_int_statm_20reserved        : 1;  /* bit[20]: [20]�� reserved */
        unsigned int  sc_int_statm_21reserved        : 1;  /* bit[21]: [21]�� reserved */
        unsigned int  sc_int_statm_22reserved        : 1;  /* bit[22]: [22]�� reserved */
        unsigned int  sc_int_statm_23reserved        : 1;  /* bit[23]: [23]�� reserved */
        unsigned int  sc_int_statm_24reserved        : 1;  /* bit[24]: [24]�� reserved */
        unsigned int  sc_int_statm_25reserved        : 1;  /* bit[25]: [25]�� reserved */
        unsigned int  sc_int_statm_26reserved        : 1;  /* bit[26]: [26]�� reserved */
        unsigned int  sc_int_statm_27reserved        : 1;  /* bit[27]: [27]�� reserved */
        unsigned int  sc_int_statm_28reserved        : 1;  /* bit[28]: [28]�� reserved */
        unsigned int  sc_int_statm_29reserved        : 1;  /* bit[29]: [29]�� reserved */
        unsigned int  sc_int_statm_30reserved        : 1;  /* bit[30]: [30]�� reserved */
        unsigned int  sc_int_statm_31reserved        : 1;  /* bit[31]: [31]��reserved */
    } reg;
} SOC_AO_SCTRL_SC_INT_STATM1_UNION;
#endif
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_0usim0_detect_int_START  (0)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_0usim0_detect_int_END    (0)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_1usim1_detect_int_START  (1)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_1usim1_detect_int_END    (1)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_2reserved_START          (2)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_2reserved_END            (2)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_3reserved_START          (3)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_3reserved_END            (3)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_4reserved_START          (4)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_4reserved_END            (4)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_5reserved_START          (5)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_5reserved_END            (5)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_6reserved_START          (6)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_6reserved_END            (6)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_7reserved_START          (7)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_7reserved_END            (7)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_8reserved_START          (8)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_8reserved_END            (8)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_9reserved_START          (9)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_9reserved_END            (9)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_10reserved_START         (10)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_10reserved_END           (10)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_11reserved_START         (11)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_11reserved_END           (11)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_12reserved_START         (12)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_12reserved_END           (12)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_13reserved_START         (13)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_13reserved_END           (13)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_14reserved_START         (14)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_14reserved_END           (14)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_15reserved_START         (15)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_15reserved_END           (15)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_16reserved_START         (16)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_16reserved_END           (16)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_17reserved_START         (17)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_17reserved_END           (17)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_18reserved_START         (18)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_18reserved_END           (18)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_19reserved_START         (19)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_19reserved_END           (19)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_20reserved_START         (20)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_20reserved_END           (20)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_21reserved_START         (21)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_21reserved_END           (21)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_22reserved_START         (22)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_22reserved_END           (22)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_23reserved_START         (23)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_23reserved_END           (23)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_24reserved_START         (24)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_24reserved_END           (24)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_25reserved_START         (25)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_25reserved_END           (25)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_26reserved_START         (26)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_26reserved_END           (26)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_27reserved_START         (27)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_27reserved_END           (27)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_28reserved_START         (28)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_28reserved_END           (28)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_29reserved_START         (29)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_29reserved_END           (29)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_30reserved_START         (30)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_30reserved_END           (30)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_31reserved_START         (31)
#define SOC_AO_SCTRL_SC_INT_STATM1_sc_int_statm_31reserved_END           (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_INT_CLEAR1_UNION
 �ṹ˵��  : SC_INT_CLEAR1 �Ĵ����ṹ���塣��ַƫ����:0x0EC����ֵ:0x00000000�����:32
 �Ĵ���˵��: �ڲ��ж�����Ĵ���������Ӧ�жϱ���λд1����ʾ�����Ӧ���ж�״̬������ԭʼ�ڲ��жϼĴ��������κ��ڲ��жϼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_int_clear_0usim0_detect_int : 1;  /* bit[0] : [0]�� USIM0 ����γ�����жϡ� */
        unsigned int  sc_int_clear_1usim1_detect_int : 1;  /* bit[1] : [1]�� USIM1 ����γ�����жϡ� */
        unsigned int  sc_int_clear_2reserved         : 1;  /* bit[2] : [2]�� reserved */
        unsigned int  sc_int_clear_3reserved         : 1;  /* bit[3] : [3]�� reserved */
        unsigned int  sc_int_clear_4reserved         : 1;  /* bit[4] : [4]�� reserved */
        unsigned int  sc_int_clear_5reserved         : 1;  /* bit[5] : [5]�� reserved */
        unsigned int  sc_int_clear_6reserved         : 1;  /* bit[6] : [6]�� reserved */
        unsigned int  sc_int_clear_7reserved         : 1;  /* bit[7] : [7]�� reserved */
        unsigned int  sc_int_clear_8reserved         : 1;  /* bit[8] : [8]�� reserved */
        unsigned int  sc_int_clear_9reserved         : 1;  /* bit[9] : [9]�� reserved */
        unsigned int  sc_int_clear_10reserved        : 1;  /* bit[10]: [10]�� reserved */
        unsigned int  sc_int_clear_11reserved        : 1;  /* bit[11]: [11]�� reserved */
        unsigned int  sc_int_clear_12reserved        : 1;  /* bit[12]: [12]�� reserved */
        unsigned int  sc_int_clear_13reserved        : 1;  /* bit[13]: [13]�� reserved */
        unsigned int  sc_int_clear_14reserved        : 1;  /* bit[14]: [14]�� reserved */
        unsigned int  sc_int_clear_15reserved        : 1;  /* bit[15]: [15]�� reserved */
        unsigned int  sc_int_clear_16reserved        : 1;  /* bit[16]: [16]�� reserved */
        unsigned int  sc_int_clear_17reserved        : 1;  /* bit[17]: [17]�� reserved */
        unsigned int  sc_int_clear_18reserved        : 1;  /* bit[18]: [18]�� reserved */
        unsigned int  sc_int_clear_19reserved        : 1;  /* bit[19]: [19]�� reserved */
        unsigned int  sc_int_clear_20reserved        : 1;  /* bit[20]: [20]�� reserved */
        unsigned int  sc_int_clear_21reserved        : 1;  /* bit[21]: [21]�� reserved */
        unsigned int  sc_int_clear_22reserved        : 1;  /* bit[22]: [22]�� reserved */
        unsigned int  sc_int_clear_23reserved        : 1;  /* bit[23]: [23]�� reserved */
        unsigned int  sc_int_clear_24reserved        : 1;  /* bit[24]: [24]�� reserved */
        unsigned int  sc_int_clear_25reserved        : 1;  /* bit[25]: [25]�� reserved */
        unsigned int  sc_int_clear_26reserved        : 1;  /* bit[26]: [26]�� reserved */
        unsigned int  sc_int_clear_27reserved        : 1;  /* bit[27]: [27]�� reserved */
        unsigned int  sc_int_clear_28reserved        : 1;  /* bit[28]: [28]�� reserved */
        unsigned int  sc_int_clear_29reserved        : 1;  /* bit[29]: [29]�� reserved */
        unsigned int  sc_int_clear_30reserved        : 1;  /* bit[30]: [30]�� reserved */
        unsigned int  sc_int_clear_31reserved        : 1;  /* bit[31]: [31]��reserved */
    } reg;
} SOC_AO_SCTRL_SC_INT_CLEAR1_UNION;
#endif
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_0usim0_detect_int_START  (0)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_0usim0_detect_int_END    (0)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_1usim1_detect_int_START  (1)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_1usim1_detect_int_END    (1)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_2reserved_START          (2)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_2reserved_END            (2)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_3reserved_START          (3)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_3reserved_END            (3)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_4reserved_START          (4)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_4reserved_END            (4)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_5reserved_START          (5)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_5reserved_END            (5)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_6reserved_START          (6)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_6reserved_END            (6)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_7reserved_START          (7)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_7reserved_END            (7)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_8reserved_START          (8)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_8reserved_END            (8)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_9reserved_START          (9)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_9reserved_END            (9)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_10reserved_START         (10)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_10reserved_END           (10)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_11reserved_START         (11)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_11reserved_END           (11)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_12reserved_START         (12)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_12reserved_END           (12)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_13reserved_START         (13)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_13reserved_END           (13)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_14reserved_START         (14)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_14reserved_END           (14)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_15reserved_START         (15)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_15reserved_END           (15)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_16reserved_START         (16)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_16reserved_END           (16)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_17reserved_START         (17)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_17reserved_END           (17)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_18reserved_START         (18)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_18reserved_END           (18)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_19reserved_START         (19)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_19reserved_END           (19)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_20reserved_START         (20)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_20reserved_END           (20)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_21reserved_START         (21)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_21reserved_END           (21)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_22reserved_START         (22)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_22reserved_END           (22)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_23reserved_START         (23)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_23reserved_END           (23)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_24reserved_START         (24)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_24reserved_END           (24)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_25reserved_START         (25)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_25reserved_END           (25)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_26reserved_START         (26)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_26reserved_END           (26)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_27reserved_START         (27)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_27reserved_END           (27)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_28reserved_START         (28)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_28reserved_END           (28)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_29reserved_START         (29)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_29reserved_END           (29)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_30reserved_START         (30)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_30reserved_END           (30)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_31reserved_START         (31)
#define SOC_AO_SCTRL_SC_INT_CLEAR1_sc_int_clear_31reserved_END           (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_INT_EN_SET1_UNION
 �ṹ˵��  : SC_INT_EN_SET1 �Ĵ����ṹ���塣��ַƫ����:0x0F0����ֵ:0x00000000�����:32
 �Ĵ���˵��: �ڲ��ж�ʹ�ܼĴ���0���Ա���д1��SC_INT_EN_STAT1�Ķ�Ӧbit��1��д0��Ӱ�����ε�״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_int_en0_0usim0_detect_int : 1;  /* bit[0] : [0]�� USIM0 ����γ�����жϡ� */
        unsigned int  sc_int_en0_1usim1_detect_int : 1;  /* bit[1] : [1]�� USIM1 ����γ�����жϡ� */
        unsigned int  sc_int_en0_2reserved         : 1;  /* bit[2] : [2]�� reserved */
        unsigned int  sc_int_en0_3reserved         : 1;  /* bit[3] : [3]�� reserved */
        unsigned int  sc_int_en0_4reserved         : 1;  /* bit[4] : [4]�� reserved */
        unsigned int  sc_int_en0_5reserved         : 1;  /* bit[5] : [5]�� reserved */
        unsigned int  sc_int_en0_6reserved         : 1;  /* bit[6] : [6]�� reserved */
        unsigned int  sc_int_en0_7reserved         : 1;  /* bit[7] : [7]�� reserved */
        unsigned int  sc_int_en0_8reserved         : 1;  /* bit[8] : [8]�� reserved */
        unsigned int  sc_int_en0_9reserved         : 1;  /* bit[9] : [9]�� reserved */
        unsigned int  sc_int_en0_10reserved        : 1;  /* bit[10]: [10]�� reserved */
        unsigned int  sc_int_en0_11reserved        : 1;  /* bit[11]: [11]�� reserved */
        unsigned int  sc_int_en0_12reserved        : 1;  /* bit[12]: [12]�� reserved */
        unsigned int  sc_int_en0_13reserved        : 1;  /* bit[13]: [13]�� reserved */
        unsigned int  sc_int_en0_14reserved        : 1;  /* bit[14]: [14]�� reserved */
        unsigned int  sc_int_en0_15reserved        : 1;  /* bit[15]: [15]�� reserved */
        unsigned int  sc_int_en0_16reserved        : 1;  /* bit[16]: [16]�� reserved */
        unsigned int  sc_int_en0_17reserved        : 1;  /* bit[17]: [17]�� reserved */
        unsigned int  sc_int_en0_18reserved        : 1;  /* bit[18]: [18]�� reserved */
        unsigned int  sc_int_en0_19reserved        : 1;  /* bit[19]: [19]�� reserved */
        unsigned int  sc_int_en0_20reserved        : 1;  /* bit[20]: [20]�� reserved */
        unsigned int  sc_int_en0_21reserved        : 1;  /* bit[21]: [21]�� reserved */
        unsigned int  sc_int_en0_22reserved        : 1;  /* bit[22]: [22]�� reserved */
        unsigned int  sc_int_en0_23reserved        : 1;  /* bit[23]: [23]�� reserved */
        unsigned int  sc_int_en0_24reserved        : 1;  /* bit[24]: [24]�� reserved */
        unsigned int  sc_int_en0_25reserved        : 1;  /* bit[25]: [25]�� reserved */
        unsigned int  sc_int_en0_26reserved        : 1;  /* bit[26]: [26]�� reserved */
        unsigned int  sc_int_en0_27reserved        : 1;  /* bit[27]: [27]�� reserved */
        unsigned int  sc_int_en0_28reserved        : 1;  /* bit[28]: [28]�� reserved */
        unsigned int  sc_int_en0_29reserved        : 1;  /* bit[29]: [29]�� reserved */
        unsigned int  sc_int_en0_30reserved        : 1;  /* bit[30]: [30]�� reserved */
        unsigned int  sc_int_en0_31reserved        : 1;  /* bit[31]: [31]��reserved */
    } reg;
} SOC_AO_SCTRL_SC_INT_EN_SET1_UNION;
#endif
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_0usim0_detect_int_START  (0)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_0usim0_detect_int_END    (0)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_1usim1_detect_int_START  (1)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_1usim1_detect_int_END    (1)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_2reserved_START          (2)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_2reserved_END            (2)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_3reserved_START          (3)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_3reserved_END            (3)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_4reserved_START          (4)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_4reserved_END            (4)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_5reserved_START          (5)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_5reserved_END            (5)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_6reserved_START          (6)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_6reserved_END            (6)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_7reserved_START          (7)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_7reserved_END            (7)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_8reserved_START          (8)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_8reserved_END            (8)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_9reserved_START          (9)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_9reserved_END            (9)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_10reserved_START         (10)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_10reserved_END           (10)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_11reserved_START         (11)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_11reserved_END           (11)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_12reserved_START         (12)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_12reserved_END           (12)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_13reserved_START         (13)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_13reserved_END           (13)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_14reserved_START         (14)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_14reserved_END           (14)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_15reserved_START         (15)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_15reserved_END           (15)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_16reserved_START         (16)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_16reserved_END           (16)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_17reserved_START         (17)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_17reserved_END           (17)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_18reserved_START         (18)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_18reserved_END           (18)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_19reserved_START         (19)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_19reserved_END           (19)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_20reserved_START         (20)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_20reserved_END           (20)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_21reserved_START         (21)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_21reserved_END           (21)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_22reserved_START         (22)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_22reserved_END           (22)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_23reserved_START         (23)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_23reserved_END           (23)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_24reserved_START         (24)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_24reserved_END           (24)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_25reserved_START         (25)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_25reserved_END           (25)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_26reserved_START         (26)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_26reserved_END           (26)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_27reserved_START         (27)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_27reserved_END           (27)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_28reserved_START         (28)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_28reserved_END           (28)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_29reserved_START         (29)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_29reserved_END           (29)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_30reserved_START         (30)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_30reserved_END           (30)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_31reserved_START         (31)
#define SOC_AO_SCTRL_SC_INT_EN_SET1_sc_int_en0_31reserved_END           (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_INT_EN_DIS1_UNION
 �ṹ˵��  : SC_INT_EN_DIS1 �Ĵ����ṹ���塣��ַƫ����:0x0F4����ֵ:0x00000000�����:32
 �Ĵ���˵��: �ڲ��ж����μĴ���0���Ա���д1��SC_INT_EN_STAT1�Ķ�Ӧbit��0��д0��Ӱ��ʱ�����ε�״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_int_dis0_0usim0_detect_int : 1;  /* bit[0] : [0]�� USIM0 ����γ�����жϡ� */
        unsigned int  sc_int_dis0_1usim1_detect_int : 1;  /* bit[1] : [1]�� USIM1 ����γ�����жϡ� */
        unsigned int  sc_int_dis0_2reserved         : 1;  /* bit[2] : [2]�� reserved */
        unsigned int  sc_int_dis0_3reserved         : 1;  /* bit[3] : [3]�� reserved */
        unsigned int  sc_int_dis0_4reserved         : 1;  /* bit[4] : [4]�� reserved */
        unsigned int  sc_int_dis0_5reserved         : 1;  /* bit[5] : [5]�� reserved */
        unsigned int  sc_int_dis0_6reserved         : 1;  /* bit[6] : [6]�� reserved */
        unsigned int  sc_int_dis0_7reserved         : 1;  /* bit[7] : [7]�� reserved */
        unsigned int  sc_int_dis0_8reserved         : 1;  /* bit[8] : [8]�� reserved */
        unsigned int  sc_int_dis0_9reserved         : 1;  /* bit[9] : [9]�� reserved */
        unsigned int  sc_int_dis0_10reserved        : 1;  /* bit[10]: [10]�� reserved */
        unsigned int  sc_int_dis0_11reserved        : 1;  /* bit[11]: [11]�� reserved */
        unsigned int  sc_int_dis0_12reserved        : 1;  /* bit[12]: [12]�� reserved */
        unsigned int  sc_int_dis0_13reserved        : 1;  /* bit[13]: [13]�� reserved */
        unsigned int  sc_int_dis0_14reserved        : 1;  /* bit[14]: [14]�� reserved */
        unsigned int  sc_int_dis0_15reserved        : 1;  /* bit[15]: [15]�� reserved */
        unsigned int  sc_int_dis0_16reserved        : 1;  /* bit[16]: [16]�� reserved */
        unsigned int  sc_int_dis0_17reserved        : 1;  /* bit[17]: [17]�� reserved */
        unsigned int  sc_int_dis0_18reserved        : 1;  /* bit[18]: [18]�� reserved */
        unsigned int  sc_int_dis0_19reserved        : 1;  /* bit[19]: [19]�� reserved */
        unsigned int  sc_int_dis0_20reserved        : 1;  /* bit[20]: [20]�� reserved */
        unsigned int  sc_int_dis0_21reserved        : 1;  /* bit[21]: [21]�� reserved */
        unsigned int  sc_int_dis0_22reserved        : 1;  /* bit[22]: [22]�� reserved */
        unsigned int  sc_int_dis0_23reserved        : 1;  /* bit[23]: [23]�� reserved */
        unsigned int  sc_int_dis0_24reserved        : 1;  /* bit[24]: [24]�� reserved */
        unsigned int  sc_int_dis0_25reserved        : 1;  /* bit[25]: [25]�� reserved */
        unsigned int  sc_int_dis0_26reserved        : 1;  /* bit[26]: [26]�� reserved */
        unsigned int  sc_int_dis0_27reserved        : 1;  /* bit[27]: [27]�� reserved */
        unsigned int  sc_int_dis0_28reserved        : 1;  /* bit[28]: [28]�� reserved */
        unsigned int  sc_int_dis0_29reserved        : 1;  /* bit[29]: [29]�� reserved */
        unsigned int  sc_int_dis0_30reserved        : 1;  /* bit[30]: [30]�� reserved */
        unsigned int  sc_int_dis0_31reserved        : 1;  /* bit[31]: [31]��reserved */
    } reg;
} SOC_AO_SCTRL_SC_INT_EN_DIS1_UNION;
#endif
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_0usim0_detect_int_START  (0)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_0usim0_detect_int_END    (0)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_1usim1_detect_int_START  (1)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_1usim1_detect_int_END    (1)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_2reserved_START          (2)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_2reserved_END            (2)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_3reserved_START          (3)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_3reserved_END            (3)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_4reserved_START          (4)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_4reserved_END            (4)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_5reserved_START          (5)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_5reserved_END            (5)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_6reserved_START          (6)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_6reserved_END            (6)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_7reserved_START          (7)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_7reserved_END            (7)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_8reserved_START          (8)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_8reserved_END            (8)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_9reserved_START          (9)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_9reserved_END            (9)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_10reserved_START         (10)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_10reserved_END           (10)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_11reserved_START         (11)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_11reserved_END           (11)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_12reserved_START         (12)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_12reserved_END           (12)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_13reserved_START         (13)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_13reserved_END           (13)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_14reserved_START         (14)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_14reserved_END           (14)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_15reserved_START         (15)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_15reserved_END           (15)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_16reserved_START         (16)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_16reserved_END           (16)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_17reserved_START         (17)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_17reserved_END           (17)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_18reserved_START         (18)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_18reserved_END           (18)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_19reserved_START         (19)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_19reserved_END           (19)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_20reserved_START         (20)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_20reserved_END           (20)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_21reserved_START         (21)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_21reserved_END           (21)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_22reserved_START         (22)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_22reserved_END           (22)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_23reserved_START         (23)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_23reserved_END           (23)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_24reserved_START         (24)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_24reserved_END           (24)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_25reserved_START         (25)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_25reserved_END           (25)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_26reserved_START         (26)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_26reserved_END           (26)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_27reserved_START         (27)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_27reserved_END           (27)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_28reserved_START         (28)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_28reserved_END           (28)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_29reserved_START         (29)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_29reserved_END           (29)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_30reserved_START         (30)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_30reserved_END           (30)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_31reserved_START         (31)
#define SOC_AO_SCTRL_SC_INT_EN_DIS1_sc_int_dis0_31reserved_END           (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_INT_EN_STAT1_UNION
 �ṹ˵��  : SC_INT_EN_STAT1 �Ĵ����ṹ���塣��ַƫ����:0x0F8����ֵ:0x00000000�����:32
 �Ĵ���˵��: �ڲ��ж�ʹ��״̬�Ĵ�����ͨ������SC_INT_EN_SET1��SC_INT_EN_DIS1�޸�״̬������SC�ڲ��жϵ�ʹ�ܺ��������á���ӦbitΪ1��ʾʹ����Ӧ�жϣ�Ϊ0��ʾ�����жϡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_int_en_sta_0usim0_detect_int : 1;  /* bit[0] : [0]�� USIM0 ����γ�����жϡ� */
        unsigned int  sc_int_en_sta_1usim1_detect_int : 1;  /* bit[1] : [1]�� USIM1 ����γ�����жϡ� */
        unsigned int  sc_int_en_sta_2reserved         : 1;  /* bit[2] : [2]�� reserved */
        unsigned int  sc_int_en_sta_3reserved         : 1;  /* bit[3] : [3]�� reserved */
        unsigned int  sc_int_en_sta_4reserved         : 1;  /* bit[4] : [4]�� reserved */
        unsigned int  sc_int_en_sta_5reserved         : 1;  /* bit[5] : [5]�� reserved */
        unsigned int  sc_int_en_sta_6reserved         : 1;  /* bit[6] : [6]�� reserved */
        unsigned int  sc_int_en_sta_7reserved         : 1;  /* bit[7] : [7]�� reserved */
        unsigned int  sc_int_en_sta_8reserved         : 1;  /* bit[8] : [8]�� reserved */
        unsigned int  sc_int_en_sta_9reserved         : 1;  /* bit[9] : [9]�� reserved */
        unsigned int  sc_int_en_sta_10reserved        : 1;  /* bit[10]: [10]�� reserved */
        unsigned int  sc_int_en_sta_11reserved        : 1;  /* bit[11]: [11]�� reserved */
        unsigned int  sc_int_en_sta_12reserved        : 1;  /* bit[12]: [12]�� reserved */
        unsigned int  sc_int_en_sta_13reserved        : 1;  /* bit[13]: [13]�� reserved */
        unsigned int  sc_int_en_sta_14reserved        : 1;  /* bit[14]: [14]�� reserved */
        unsigned int  sc_int_en_sta_15reserved        : 1;  /* bit[15]: [15]�� reserved */
        unsigned int  sc_int_en_sta_16reserved        : 1;  /* bit[16]: [16]�� reserved */
        unsigned int  sc_int_en_sta_17reserved        : 1;  /* bit[17]: [17]�� reserved */
        unsigned int  sc_int_en_sta_18reserved        : 1;  /* bit[18]: [18]�� reserved */
        unsigned int  sc_int_en_sta_19reserved        : 1;  /* bit[19]: [19]�� reserved */
        unsigned int  sc_int_en_sta_20reserved        : 1;  /* bit[20]: [20]�� reserved */
        unsigned int  sc_int_en_sta_21reserved        : 1;  /* bit[21]: [21]�� reserved */
        unsigned int  sc_int_en_sta_22reserved        : 1;  /* bit[22]: [22]�� reserved */
        unsigned int  sc_int_en_sta_23reserved        : 1;  /* bit[23]: [23]�� reserved */
        unsigned int  sc_int_en_sta_24reserved        : 1;  /* bit[24]: [24]�� reserved */
        unsigned int  sc_int_en_sta_25reserved        : 1;  /* bit[25]: [25]�� reserved */
        unsigned int  sc_int_en_sta_26reserved        : 1;  /* bit[26]: [26]�� reserved */
        unsigned int  sc_int_en_sta_27reserved        : 1;  /* bit[27]: [27]�� reserved */
        unsigned int  sc_int_en_sta_28reserved        : 1;  /* bit[28]: [28]�� reserved */
        unsigned int  sc_int_en_sta_29reserved        : 1;  /* bit[29]: [29]�� reserved */
        unsigned int  sc_int_en_sta_30reserved        : 1;  /* bit[30]: [30]�� reserved */
        unsigned int  sc_int_en_sta_31reserved        : 1;  /* bit[31]: [31]��reserved */
    } reg;
} SOC_AO_SCTRL_SC_INT_EN_STAT1_UNION;
#endif
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_0usim0_detect_int_START  (0)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_0usim0_detect_int_END    (0)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_1usim1_detect_int_START  (1)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_1usim1_detect_int_END    (1)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_2reserved_START          (2)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_2reserved_END            (2)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_3reserved_START          (3)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_3reserved_END            (3)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_4reserved_START          (4)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_4reserved_END            (4)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_5reserved_START          (5)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_5reserved_END            (5)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_6reserved_START          (6)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_6reserved_END            (6)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_7reserved_START          (7)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_7reserved_END            (7)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_8reserved_START          (8)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_8reserved_END            (8)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_9reserved_START          (9)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_9reserved_END            (9)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_10reserved_START         (10)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_10reserved_END           (10)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_11reserved_START         (11)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_11reserved_END           (11)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_12reserved_START         (12)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_12reserved_END           (12)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_13reserved_START         (13)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_13reserved_END           (13)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_14reserved_START         (14)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_14reserved_END           (14)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_15reserved_START         (15)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_15reserved_END           (15)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_16reserved_START         (16)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_16reserved_END           (16)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_17reserved_START         (17)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_17reserved_END           (17)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_18reserved_START         (18)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_18reserved_END           (18)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_19reserved_START         (19)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_19reserved_END           (19)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_20reserved_START         (20)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_20reserved_END           (20)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_21reserved_START         (21)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_21reserved_END           (21)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_22reserved_START         (22)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_22reserved_END           (22)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_23reserved_START         (23)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_23reserved_END           (23)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_24reserved_START         (24)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_24reserved_END           (24)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_25reserved_START         (25)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_25reserved_END           (25)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_26reserved_START         (26)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_26reserved_END           (26)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_27reserved_START         (27)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_27reserved_END           (27)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_28reserved_START         (28)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_28reserved_END           (28)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_29reserved_START         (29)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_29reserved_END           (29)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_30reserved_START         (30)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_30reserved_END           (30)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_31reserved_START         (31)
#define SOC_AO_SCTRL_SC_INT_EN_STAT1_sc_int_en_sta_31reserved_END           (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_TIMER_EN0_UNION
 �ṹ˵��  : SC_TIMER_EN0 �Ĵ����ṹ���塣��ַƫ����:0x1D0����ֵ:0x00000000�����:32
 �Ĵ���˵��: timerʹ�ܼĴ���0��
            �Ĵ���д��ʱ��Ҫmsk��Ч��[31:16]��ÿһbit˳���Ӧbit15��bit0������bit31��16��bitд1��ͬʱ������bit15��0������Ч����bit31��16��bitд0ʱ������bit15��0���ֲ��䣻
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  timer_en0_1acpu_dualtimer0_en0      : 2;  /* bit[0-1]  : [1:0] acpu dualtimer0 ��en0����Ӧacpu timer0
                                                                               ʱ��ʹ�ܿ��ƺ��壺
                                                                               x0��en��1���ο�ʱ��ѡ��clk_slow��ϵͳģʽ����Normal��SLOWʱΪ19.2MHz��ϵͳģʽ����Sleep�󣬲ο�ʱ��Ϊ32KHz��
                                                                               x1���ο�ʱ��ѡ��32KHz�� */
        unsigned int  timer_en0_3acpu_dualtimer0_en1      : 2;  /* bit[2-3]  : [3:2] acpu dualtimer0 ��en1 ����Ӧacpu timer1��
                                                                               ʱ��ʹ�ܿ��ƺ���ο�timer_en0_1acpu_dualtimer0_en0�� */
        unsigned int  timer_en0_5acpu_dualtimer1_en0      : 2;  /* bit[4-5]  : [5:4] acpu dualtimer1 ��en0����Ӧacpu timer2��
                                                                               ʱ��ʹ�ܿ��ƺ���ο�timer_en0_1acpu_dualtimer0_en0�� */
        unsigned int  timer_en0_7acpu_dualtimer1_en1      : 2;  /* bit[6-7]  : [7:6] acpu dualtimer1 ��en1 ����Ӧacpu timer3��
                                                                               ʱ��ʹ�ܿ��ƺ���ο�timer_en0_1acpu_dualtimer0_en0�� */
        unsigned int  timer_en0_9acpu_dualtimer2_en0      : 2;  /* bit[8-9]  : [9:8] acpu dualtimer2 ��en0����Ӧacpu timer4��
                                                                               ʱ��ʹ�ܿ��ƺ���ο�timer_en0_1acpu_dualtimer0_en0�� */
        unsigned int  timer_en0_11acpu_dualtimer2_en1     : 2;  /* bit[10-11]: [11:10] acpu dualtimer2 ��en1����Ӧacpu timer5��
                                                                               ʱ��ʹ�ܿ��ƺ���ο�timer_en0_1acpu_dualtimer0_en0�� */
        unsigned int  timer_en0_13acpu_dualtimer3_en0     : 2;  /* bit[12-13]: [13:12] acpu dualtimer3 ��en0����Ӧacpu timer6��
                                                                               ʱ��ʹ�ܿ��ƺ���ο�timer_en0_1acpu_dualtimer0_en0�� */
        unsigned int  timer_en0_15acpu_dualtimer3_en1     : 2;  /* bit[14-15]: [15:14] acpu dualtimer3 ��en1����Ӧacpu timer7��
                                                                               ʱ��ʹ�ܿ��ƺ���ο�timer_en0_1acpu_dualtimer0_en0��  */
        unsigned int  timer_en0_msk_1acpu_dualtimer0_en0  : 2;  /* bit[16-17]: [17:16] acpu timer0 msk */
        unsigned int  timer_en0_msk_3acpu_dualtimer0_en1  : 2;  /* bit[18-19]: [19:18] acpu timer1 msk */
        unsigned int  timer_en0_msk_5acpu_dualtimer1_en0  : 2;  /* bit[20-21]: [21:20] acpu timer2 msk */
        unsigned int  timer_en0_msk_7acpu_dualtimer1_en1  : 2;  /* bit[22-23]: [23:22] acpu timer3 msk */
        unsigned int  timer_en0_msk_9acpu_dualtimer2_en0  : 2;  /* bit[24-25]: [25:24] acpu timer4 msk */
        unsigned int  timer_en0_msk_11acpu_dualtimer2_en1 : 2;  /* bit[26-27]: [27:26] acpu timer5 msk */
        unsigned int  timer_en0_msk_13acpu_dualtimer3_en0 : 2;  /* bit[28-29]: [29:28] acpu timer6 msk */
        unsigned int  timer_en0_msk_15acpu_dualtimer3_en1 : 2;  /* bit[30-31]: [30:30] acpu timer7 msk */
    } reg;
} SOC_AO_SCTRL_SC_TIMER_EN0_UNION;
#endif
#define SOC_AO_SCTRL_SC_TIMER_EN0_timer_en0_1acpu_dualtimer0_en0_START       (0)
#define SOC_AO_SCTRL_SC_TIMER_EN0_timer_en0_1acpu_dualtimer0_en0_END         (1)
#define SOC_AO_SCTRL_SC_TIMER_EN0_timer_en0_3acpu_dualtimer0_en1_START       (2)
#define SOC_AO_SCTRL_SC_TIMER_EN0_timer_en0_3acpu_dualtimer0_en1_END         (3)
#define SOC_AO_SCTRL_SC_TIMER_EN0_timer_en0_5acpu_dualtimer1_en0_START       (4)
#define SOC_AO_SCTRL_SC_TIMER_EN0_timer_en0_5acpu_dualtimer1_en0_END         (5)
#define SOC_AO_SCTRL_SC_TIMER_EN0_timer_en0_7acpu_dualtimer1_en1_START       (6)
#define SOC_AO_SCTRL_SC_TIMER_EN0_timer_en0_7acpu_dualtimer1_en1_END         (7)
#define SOC_AO_SCTRL_SC_TIMER_EN0_timer_en0_9acpu_dualtimer2_en0_START       (8)
#define SOC_AO_SCTRL_SC_TIMER_EN0_timer_en0_9acpu_dualtimer2_en0_END         (9)
#define SOC_AO_SCTRL_SC_TIMER_EN0_timer_en0_11acpu_dualtimer2_en1_START      (10)
#define SOC_AO_SCTRL_SC_TIMER_EN0_timer_en0_11acpu_dualtimer2_en1_END        (11)
#define SOC_AO_SCTRL_SC_TIMER_EN0_timer_en0_13acpu_dualtimer3_en0_START      (12)
#define SOC_AO_SCTRL_SC_TIMER_EN0_timer_en0_13acpu_dualtimer3_en0_END        (13)
#define SOC_AO_SCTRL_SC_TIMER_EN0_timer_en0_15acpu_dualtimer3_en1_START      (14)
#define SOC_AO_SCTRL_SC_TIMER_EN0_timer_en0_15acpu_dualtimer3_en1_END        (15)
#define SOC_AO_SCTRL_SC_TIMER_EN0_timer_en0_msk_1acpu_dualtimer0_en0_START   (16)
#define SOC_AO_SCTRL_SC_TIMER_EN0_timer_en0_msk_1acpu_dualtimer0_en0_END     (17)
#define SOC_AO_SCTRL_SC_TIMER_EN0_timer_en0_msk_3acpu_dualtimer0_en1_START   (18)
#define SOC_AO_SCTRL_SC_TIMER_EN0_timer_en0_msk_3acpu_dualtimer0_en1_END     (19)
#define SOC_AO_SCTRL_SC_TIMER_EN0_timer_en0_msk_5acpu_dualtimer1_en0_START   (20)
#define SOC_AO_SCTRL_SC_TIMER_EN0_timer_en0_msk_5acpu_dualtimer1_en0_END     (21)
#define SOC_AO_SCTRL_SC_TIMER_EN0_timer_en0_msk_7acpu_dualtimer1_en1_START   (22)
#define SOC_AO_SCTRL_SC_TIMER_EN0_timer_en0_msk_7acpu_dualtimer1_en1_END     (23)
#define SOC_AO_SCTRL_SC_TIMER_EN0_timer_en0_msk_9acpu_dualtimer2_en0_START   (24)
#define SOC_AO_SCTRL_SC_TIMER_EN0_timer_en0_msk_9acpu_dualtimer2_en0_END     (25)
#define SOC_AO_SCTRL_SC_TIMER_EN0_timer_en0_msk_11acpu_dualtimer2_en1_START  (26)
#define SOC_AO_SCTRL_SC_TIMER_EN0_timer_en0_msk_11acpu_dualtimer2_en1_END    (27)
#define SOC_AO_SCTRL_SC_TIMER_EN0_timer_en0_msk_13acpu_dualtimer3_en0_START  (28)
#define SOC_AO_SCTRL_SC_TIMER_EN0_timer_en0_msk_13acpu_dualtimer3_en0_END    (29)
#define SOC_AO_SCTRL_SC_TIMER_EN0_timer_en0_msk_15acpu_dualtimer3_en1_START  (30)
#define SOC_AO_SCTRL_SC_TIMER_EN0_timer_en0_msk_15acpu_dualtimer3_en1_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_TIMER_EN1_UNION
 �ṹ˵��  : SC_TIMER_EN1 �Ĵ����ṹ���塣��ַƫ����:0x1D4����ֵ:0x00000000�����:32
 �Ĵ���˵��: timerʹ�ܼĴ���1��
            �Ĵ���д��ʱ��Ҫmsk��Ч��[31:16]��ÿһbit˳���Ӧbit15��bit0������bit31��16��bitд1��ͬʱ������bit15��0������Ч����bit31��16��bitд0ʱ������bit15��0���ֲ��䣻
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  timer_en1_1acpu_dualtimer4_en0      : 2;  /* bit[0-1]  : [1:0] acpu dualtimer4 ��en0����Ӧacpu timer8
                                                                               ʱ��ʹ�ܿ��ƺ��壺
                                                                               x0��en��1���ο�ʱ��ѡ��clk_slow��ϵͳģʽ����Normal��SLOWʱΪ19.2MHz��ϵͳģʽ����Sleep�󣬲ο�ʱ��Ϊ32KHz��
                                                                               x1���ο�ʱ��ѡ��32KHz�� */
        unsigned int  timer_en1_3acpu_dualtimer4_en1      : 2;  /* bit[2-3]  : [3:2] acpu dualtimer4 ��en1 ����Ӧacpu timer9��
                                                                               ʱ��ʹ�ܿ��ƺ���ο�timer_en0_1acpu_dualtimer0_en0�� */
        unsigned int  timer_en1_5acpu_dualtimer5_en0      : 2;  /* bit[4-5]  : [5:4] acpu dualtimer5 ��en0����Ӧacpu timer10��
                                                                               ʱ��ʹ�ܿ��ƺ���ο�timer_en0_1acpu_dualtimer0_en0�� */
        unsigned int  timer_en1_7acpu_dualtimer5_en1      : 2;  /* bit[6-7]  : [7:6] acpu dualtimer5 ��en1 ����Ӧacpu timer11��
                                                                               ʱ��ʹ�ܿ��ƺ���ο�timer_en0_1acpu_dualtimer0_en0�� */
        unsigned int  timer_en1_9acpu_dualtimer6_en0      : 2;  /* bit[8-9]  : [9:8] acpu dualtimer6 ��en0����Ӧacpu timer12��
                                                                               ʱ��ʹ�ܿ��ƺ���ο�timer_en0_1acpu_dualtimer0_en0�� */
        unsigned int  timer_en1_11acpu_dualtimer6_en1     : 2;  /* bit[10-11]: [11:10] acpu dualtimer6 ��en1����Ӧacpu timer13��
                                                                               ʱ��ʹ�ܿ��ƺ���ο�timer_en0_1acpu_dualtimer0_en0�� */
        unsigned int  timer_en1_13acpu_dualtimer7_en0     : 2;  /* bit[12-13]: [13:12] acpu dualtimer7 ��en0����Ӧacpu timer14��
                                                                               ʱ��ʹ�ܿ��ƺ���ο�timer_en0_1acpu_dualtimer0_en0�� */
        unsigned int  timer_en1_15acpu_dualtimer7_en1     : 2;  /* bit[14-15]: [15:14] acpu dualtimer7 ��en1����Ӧacpu timer15��
                                                                               ʱ��ʹ�ܿ��ƺ���ο�timer_en0_1acpu_dualtimer0_en0�� */
        unsigned int  timer_en1_msk_1acpu_dualtimer4_en0  : 2;  /* bit[16-17]: [17:16] acpu timer8 msk */
        unsigned int  timer_en1_msk_3acpu_dualtimer4_en1  : 2;  /* bit[18-19]: [19:18] acpu timer9 msk */
        unsigned int  timer_en1_msk_5acpu_dualtimer5_en0  : 2;  /* bit[20-21]: [21:20] acpu timer10 msk */
        unsigned int  timer_en1_msk_7acpu_dualtimer5_en1  : 2;  /* bit[22-23]: [23:22] acpu timer11 msk */
        unsigned int  timer_en1_msk_9acpu_dualtimer6_en0  : 2;  /* bit[24-25]: [25:24] acpu timer12 msk */
        unsigned int  timer_en1_msk_11acpu_dualtimer6_en1 : 2;  /* bit[26-27]: [27:26] acpu timer13 msk */
        unsigned int  timer_en1_msk_13acpu_dualtimer7_en0 : 2;  /* bit[28-29]: [29:28] acpu timer14 msk */
        unsigned int  timer_en1_msk_15acpu_dualtimer7_en1 : 2;  /* bit[30-31]: [30:30] acpu timer15 msk */
    } reg;
} SOC_AO_SCTRL_SC_TIMER_EN1_UNION;
#endif
#define SOC_AO_SCTRL_SC_TIMER_EN1_timer_en1_1acpu_dualtimer4_en0_START       (0)
#define SOC_AO_SCTRL_SC_TIMER_EN1_timer_en1_1acpu_dualtimer4_en0_END         (1)
#define SOC_AO_SCTRL_SC_TIMER_EN1_timer_en1_3acpu_dualtimer4_en1_START       (2)
#define SOC_AO_SCTRL_SC_TIMER_EN1_timer_en1_3acpu_dualtimer4_en1_END         (3)
#define SOC_AO_SCTRL_SC_TIMER_EN1_timer_en1_5acpu_dualtimer5_en0_START       (4)
#define SOC_AO_SCTRL_SC_TIMER_EN1_timer_en1_5acpu_dualtimer5_en0_END         (5)
#define SOC_AO_SCTRL_SC_TIMER_EN1_timer_en1_7acpu_dualtimer5_en1_START       (6)
#define SOC_AO_SCTRL_SC_TIMER_EN1_timer_en1_7acpu_dualtimer5_en1_END         (7)
#define SOC_AO_SCTRL_SC_TIMER_EN1_timer_en1_9acpu_dualtimer6_en0_START       (8)
#define SOC_AO_SCTRL_SC_TIMER_EN1_timer_en1_9acpu_dualtimer6_en0_END         (9)
#define SOC_AO_SCTRL_SC_TIMER_EN1_timer_en1_11acpu_dualtimer6_en1_START      (10)
#define SOC_AO_SCTRL_SC_TIMER_EN1_timer_en1_11acpu_dualtimer6_en1_END        (11)
#define SOC_AO_SCTRL_SC_TIMER_EN1_timer_en1_13acpu_dualtimer7_en0_START      (12)
#define SOC_AO_SCTRL_SC_TIMER_EN1_timer_en1_13acpu_dualtimer7_en0_END        (13)
#define SOC_AO_SCTRL_SC_TIMER_EN1_timer_en1_15acpu_dualtimer7_en1_START      (14)
#define SOC_AO_SCTRL_SC_TIMER_EN1_timer_en1_15acpu_dualtimer7_en1_END        (15)
#define SOC_AO_SCTRL_SC_TIMER_EN1_timer_en1_msk_1acpu_dualtimer4_en0_START   (16)
#define SOC_AO_SCTRL_SC_TIMER_EN1_timer_en1_msk_1acpu_dualtimer4_en0_END     (17)
#define SOC_AO_SCTRL_SC_TIMER_EN1_timer_en1_msk_3acpu_dualtimer4_en1_START   (18)
#define SOC_AO_SCTRL_SC_TIMER_EN1_timer_en1_msk_3acpu_dualtimer4_en1_END     (19)
#define SOC_AO_SCTRL_SC_TIMER_EN1_timer_en1_msk_5acpu_dualtimer5_en0_START   (20)
#define SOC_AO_SCTRL_SC_TIMER_EN1_timer_en1_msk_5acpu_dualtimer5_en0_END     (21)
#define SOC_AO_SCTRL_SC_TIMER_EN1_timer_en1_msk_7acpu_dualtimer5_en1_START   (22)
#define SOC_AO_SCTRL_SC_TIMER_EN1_timer_en1_msk_7acpu_dualtimer5_en1_END     (23)
#define SOC_AO_SCTRL_SC_TIMER_EN1_timer_en1_msk_9acpu_dualtimer6_en0_START   (24)
#define SOC_AO_SCTRL_SC_TIMER_EN1_timer_en1_msk_9acpu_dualtimer6_en0_END     (25)
#define SOC_AO_SCTRL_SC_TIMER_EN1_timer_en1_msk_11acpu_dualtimer6_en1_START  (26)
#define SOC_AO_SCTRL_SC_TIMER_EN1_timer_en1_msk_11acpu_dualtimer6_en1_END    (27)
#define SOC_AO_SCTRL_SC_TIMER_EN1_timer_en1_msk_13acpu_dualtimer7_en0_START  (28)
#define SOC_AO_SCTRL_SC_TIMER_EN1_timer_en1_msk_13acpu_dualtimer7_en0_END    (29)
#define SOC_AO_SCTRL_SC_TIMER_EN1_timer_en1_msk_15acpu_dualtimer7_en1_START  (30)
#define SOC_AO_SCTRL_SC_TIMER_EN1_timer_en1_msk_15acpu_dualtimer7_en1_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_TIMER_EN4_UNION
 �ṹ˵��  : SC_TIMER_EN4 �Ĵ����ṹ���塣��ַƫ����:0x1F0����ֵ:0x00000000�����:32
 �Ĵ���˵��: timerʹ�ܼĴ���4��
            �Ĵ���д��ʱ��Ҫmsk��Ч��[31:16]��ÿһbit˳���Ӧbit15��bit0������bit31��16��bitд1��ͬʱ������bit15��0������Ч����bit31��16��bitд0ʱ������bit15��0���ֲ��䣻
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  timer_en4_mcu_dualtimer0_en0        : 2;  /* bit[0-1]  : [1:0] mcu Dualtimer0��en0����Ӧmcu timer0
                                                                               mcu timer0~1ʱ��ʹ�ܿ��ơ�
                                                                               x0��en��1���ο�ʱ��ѡ��clk_slow��ϵͳģʽ����Normal��SLOWʱΪ19.2MHz��ϵͳģʽ����Sleep�󣬲ο�ʱ��Ϊ32KHz��
                                                                               x1���ο�ʱ��ѡ��32KHz�� */
        unsigned int  timer_en4_3mcu_dualtimer0_en1       : 2;  /* bit[2-3]  : [3:2] mcu Dualtimer0��en1����Ӧmcu timer1
                                                                               mcu timer0~1ʱ��ʹ�ܿ��ơ�
                                                                               x0��en��1���ο�ʱ��ѡ��clk_slow��ϵͳģʽ����Normal��SLOWʱΪ19.2MHz��ϵͳģʽ����Sleep�󣬲ο�ʱ��Ϊ32KHz��
                                                                               x1���ο�ʱ��ѡ��32KHz�� */
        unsigned int  timer_en4_5mcu_dualtimer1_en0       : 2;  /* bit[4-5]  : [5:4] mcu Dualtimer1��en0����Ӧmcu timer2 */
        unsigned int  timer_en4_7mcu_dualtimer1_en1       : 2;  /* bit[6-7]  : [7:6] mcu Dualtimer1��en1����Ӧmcu timer3 */
        unsigned int  reserved_0                          : 8;  /* bit[8-15] : reserved */
        unsigned int  timer_en4_msk_acpu_dualtimer9_en0   : 2;  /* bit[16-17]: [17:16] mcu timer0 */
        unsigned int  timer_en4_msk_3acpu_dualtimer9_en1  : 2;  /* bit[18-19]: [19:18] mcu timer1 */
        unsigned int  timer_en4_msk_5acpu_dualtimer10_en0 : 2;  /* bit[20-21]: [21:20] mcu timer2 */
        unsigned int  timer_en4_msk_7acpu_dualtimer10_en1 : 2;  /* bit[22-23]: [23:22] mcu timer3 */
        unsigned int  reserved_1                          : 8;  /* bit[24-31]: reserved */
    } reg;
} SOC_AO_SCTRL_SC_TIMER_EN4_UNION;
#endif
#define SOC_AO_SCTRL_SC_TIMER_EN4_timer_en4_mcu_dualtimer0_en0_START         (0)
#define SOC_AO_SCTRL_SC_TIMER_EN4_timer_en4_mcu_dualtimer0_en0_END           (1)
#define SOC_AO_SCTRL_SC_TIMER_EN4_timer_en4_3mcu_dualtimer0_en1_START        (2)
#define SOC_AO_SCTRL_SC_TIMER_EN4_timer_en4_3mcu_dualtimer0_en1_END          (3)
#define SOC_AO_SCTRL_SC_TIMER_EN4_timer_en4_5mcu_dualtimer1_en0_START        (4)
#define SOC_AO_SCTRL_SC_TIMER_EN4_timer_en4_5mcu_dualtimer1_en0_END          (5)
#define SOC_AO_SCTRL_SC_TIMER_EN4_timer_en4_7mcu_dualtimer1_en1_START        (6)
#define SOC_AO_SCTRL_SC_TIMER_EN4_timer_en4_7mcu_dualtimer1_en1_END          (7)
#define SOC_AO_SCTRL_SC_TIMER_EN4_timer_en4_msk_acpu_dualtimer9_en0_START    (16)
#define SOC_AO_SCTRL_SC_TIMER_EN4_timer_en4_msk_acpu_dualtimer9_en0_END      (17)
#define SOC_AO_SCTRL_SC_TIMER_EN4_timer_en4_msk_3acpu_dualtimer9_en1_START   (18)
#define SOC_AO_SCTRL_SC_TIMER_EN4_timer_en4_msk_3acpu_dualtimer9_en1_END     (19)
#define SOC_AO_SCTRL_SC_TIMER_EN4_timer_en4_msk_5acpu_dualtimer10_en0_START  (20)
#define SOC_AO_SCTRL_SC_TIMER_EN4_timer_en4_msk_5acpu_dualtimer10_en0_END    (21)
#define SOC_AO_SCTRL_SC_TIMER_EN4_timer_en4_msk_7acpu_dualtimer10_en1_START  (22)
#define SOC_AO_SCTRL_SC_TIMER_EN4_timer_en4_msk_7acpu_dualtimer10_en1_END    (23)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_TIMER_EN5_UNION
 �ṹ˵��  : SC_TIMER_EN5 �Ĵ����ṹ���塣��ַƫ����:0x1F4����ֵ:0x00000000�����:32
 �Ĵ���˵��: timerʹ�ܼĴ���5��
            �Ĵ���д��ʱ��Ҫmsk��Ч��[31:16]��ÿһbit˳���Ӧbit15��bit0������bit31��16��bitд1��ͬʱ������bit15��0������Ч����bit31��16��bitд0ʱ������bit15��0���ֲ��䣻
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  timer_en5_acpu_dualtimer8_en0     : 3;  /* bit[0-2]  : [2:0] acpu dualtimer8 ��en0ʱ��ʹ�ܿ��ƣ��������£�
                                                                             xx0��en��1���ο�ʱ��ѡ��clk_slow��ϵͳģʽ����Normal��SLOWʱΪ19.2MHz��ϵͳģʽ����Sleep�󣬲ο�ʱ��Ϊ32KHz��
                                                                             xx1���ο�ʱ��ѡ��32KHz�� */
        unsigned int  timer_en5_acpu_dualtimer8_en1     : 3;  /* bit[3-5]  : [5:3] acpu dualtimer8 ��en1ʱ��ʹ�ܿ��ƣ��������£�
                                                                             xx0��en��1���ο�ʱ��ѡ��clk_slow��ϵͳģʽ����Normal��SLOWʱΪ19.2MHz��ϵͳģʽ����Sleep�󣬲ο�ʱ��Ϊ32KHz��
                                                                             xx1���ο�ʱ��ѡ��32KHz�� */
        unsigned int  timer_en5_reserved                : 10; /* bit[6-15] : reserved */
        unsigned int  timer_en5_msk_acpu_dualtimer8_en0 : 3;  /* bit[16-18]: [18:16] acpu dualtimer8 ��en0 */
        unsigned int  timer_en5_msk_acpu_dualtimer8_en1 : 3;  /* bit[19-21]: [21:19] acpu dualtimer8 ��en1 */
        unsigned int  timer_en5_msk                     : 10; /* bit[22-31]: reserved */
    } reg;
} SOC_AO_SCTRL_SC_TIMER_EN5_UNION;
#endif
#define SOC_AO_SCTRL_SC_TIMER_EN5_timer_en5_acpu_dualtimer8_en0_START      (0)
#define SOC_AO_SCTRL_SC_TIMER_EN5_timer_en5_acpu_dualtimer8_en0_END        (2)
#define SOC_AO_SCTRL_SC_TIMER_EN5_timer_en5_acpu_dualtimer8_en1_START      (3)
#define SOC_AO_SCTRL_SC_TIMER_EN5_timer_en5_acpu_dualtimer8_en1_END        (5)
#define SOC_AO_SCTRL_SC_TIMER_EN5_timer_en5_reserved_START                 (6)
#define SOC_AO_SCTRL_SC_TIMER_EN5_timer_en5_reserved_END                   (15)
#define SOC_AO_SCTRL_SC_TIMER_EN5_timer_en5_msk_acpu_dualtimer8_en0_START  (16)
#define SOC_AO_SCTRL_SC_TIMER_EN5_timer_en5_msk_acpu_dualtimer8_en0_END    (18)
#define SOC_AO_SCTRL_SC_TIMER_EN5_timer_en5_msk_acpu_dualtimer8_en1_START  (19)
#define SOC_AO_SCTRL_SC_TIMER_EN5_timer_en5_msk_acpu_dualtimer8_en1_END    (21)
#define SOC_AO_SCTRL_SC_TIMER_EN5_timer_en5_msk_START                      (22)
#define SOC_AO_SCTRL_SC_TIMER_EN5_timer_en5_msk_END                        (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL0_UNION
 �ṹ˵��  : SC_MCU_SUBSYS_CTRL0 �Ĵ����ṹ���塣��ַƫ����:0x400����ֵ:0x00000000�����:32
 �Ĵ���˵��: MCU��ϵͳ���ƼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mcu_share_mem_waterlevel : 32; /* bit[0-31]: reserved */
    } reg;
} SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL0_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL0_mcu_share_mem_waterlevel_START  (0)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL0_mcu_share_mem_waterlevel_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL1_UNION
 �ṹ˵��  : SC_MCU_SUBSYS_CTRL1 �Ĵ����ṹ���塣��ַƫ����:0x404����ֵ:0x0516E360�����:32
 �Ĵ���˵��: MCU��ϵͳ���ƼĴ��������ܰ���MCU��DAP enable,Tickʱ��У׼,MCU NMI�жϡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mcu_subsys_ctrl1_dbgen_stcalib   : 26; /* bit[0-25] : [26:1]��DBGEN STCALIB[25:0],ϵͳTickʱ�ӵ�У׼,Ĭ��ֵ0x116e360 */
        unsigned int  mcu_subsys_ctrl1_dbgen_dapenable : 1;  /* bit[26]   : MCU DAP enable,��λֵ1
                                                                            0��debug disable��
                                                                            1��debug enable�� */
        unsigned int  reserved                         : 2;  /* bit[27-28]: reserved */
        unsigned int  cm3_sft_nmi_intreq               : 1;  /* bit[29]   : ���ò���CM3 NMI����ж�
                                                                            0������CM3 NMI����жϣ�
                                                                            1������CM3 NMI����жϡ� */
        unsigned int  cache_hready_sel                 : 1;  /* bit[30]   : cm3 cache hsel signal
                                                                            0��hsel_cm3cache&amp;hreadyin_cachereg��
                                                                            1��hsel_cm3cache�� */
        unsigned int  mcu_subsys_ctrl1                 : 1;  /* bit[31]   : reserved */
    } reg;
} SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL1_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL1_mcu_subsys_ctrl1_dbgen_stcalib_START    (0)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL1_mcu_subsys_ctrl1_dbgen_stcalib_END      (25)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL1_mcu_subsys_ctrl1_dbgen_dapenable_START  (26)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL1_mcu_subsys_ctrl1_dbgen_dapenable_END    (26)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL1_cm3_sft_nmi_intreq_START                (29)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL1_cm3_sft_nmi_intreq_END                  (29)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL1_cache_hready_sel_START                  (30)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL1_cache_hready_sel_END                    (30)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL1_mcu_subsys_ctrl1_START                  (31)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL1_mcu_subsys_ctrl1_END                    (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL2_UNION
 �ṹ˵��  : SC_MCU_SUBSYS_CTRL2 �Ĵ����ṹ���塣��ַƫ����:0x408����ֵ:0x00000000�����:32
 �Ĵ���˵��: MCU��ϵͳ���ƼĴ���,���ܰ���MCU��DDR REMAP��ʼ��ַ���á�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mcu_remap_ddr_startaddr : 32; /* bit[0-31]: [31:0]��ddr rmp addr for cm3��mcu��Ҫִ�д����ַ�ռ����48KBʱ���������ô˵�ַʵ�ַ���DDRʱ����ʼ��ַ */
    } reg;
} SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL2_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL2_mcu_remap_ddr_startaddr_START  (0)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL2_mcu_remap_ddr_startaddr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL3_UNION
 �ṹ˵��  : SC_MCU_SUBSYS_CTRL3 �Ĵ����ṹ���塣��ַƫ����:0x40C����ֵ:0x00000711�����:32
 �Ĵ���˵��: MCU��ϵͳ���ƼĴ��������ܰ���PMUSSI���ơ�cssys_ctrl_prot���ơ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mcu_subsys_ctrl3_pmussi   : 3;  /* bit[0-2]  : [5��3]��pmussi mst count Ĭ��3'b001
                                                                     ��ֵ�������ö�����ʱ��master check��ͬ��λ���ӳ�ʱ��
                                                                     000��1.5 clk�� 
                                                                     001��2.0 clk��
                                                                     010��2.5 clk��
                                                                     011��3.0 clk��
                                                                     100��3.5 clk��
                                                                     101��4.0 clk��
                                                                     110��4.5 clk��
                                                                     111��5.0 clk�� */
        unsigned int  cssys_ctrl_prot           : 1;  /* bit[3]    : cssys��dbg pwup and sys pwup ack ctrl
                                                                     0��set cssys_dbg/sys_pwup_ack to 1'b0 when cssys_dbg/sys_pwup_req comes in pw_stat of not PWON ��
                                                                     1��no set cssys_dbg/sys_pwup_ack to 1'b0 when cssys_dbg/sys_pwup_req comes in pw_stat of not PWON �� */
        unsigned int  tcxo_afc_oen_crg          : 1;  /* bit[4]    : tcxo afc output enable
                                                                     0��output enable��
                                                                     1��output disable,high Z�� */
        unsigned int  reserved                  : 3;  /* bit[5-7]  : reserved */
        unsigned int  aob_io_sel18_usim1        : 1;  /* bit[8]    : USIM1 IO Voltage Select
                                                                     0��IO_SEL 1'b1,3.0V��
                                                                     1��IO_SEL 1'b0,1.8V��
                                                                     Note:Integrated by inv-logic�� */
        unsigned int  aob_io_sel18_usim0        : 1;  /* bit[9]    : USIM0 IO Voltage Select
                                                                     0��IO_SEL 1'b1,3.0V��
                                                                     1��IO_SEL 1'b0,1.8V��
                                                                     Note:Integrated by inv-logic�� */
        unsigned int  aob_io_sel18_sd           : 1;  /* bit[10]   : SD IO Voltage Select
                                                                     0��IO_SEL 1'b1,3.0V��
                                                                     1��IO_SEL 1'b0,1.8V��
                                                                     Note:Integrated by inv-logic�� */
        unsigned int  mcu_subsys_ctrl3_reserved : 21; /* bit[11-31]: reserved */
    } reg;
} SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL3_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL3_mcu_subsys_ctrl3_pmussi_START    (0)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL3_mcu_subsys_ctrl3_pmussi_END      (2)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL3_cssys_ctrl_prot_START            (3)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL3_cssys_ctrl_prot_END              (3)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL3_tcxo_afc_oen_crg_START           (4)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL3_tcxo_afc_oen_crg_END             (4)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL3_aob_io_sel18_usim1_START         (8)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL3_aob_io_sel18_usim1_END           (8)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL3_aob_io_sel18_usim0_START         (9)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL3_aob_io_sel18_usim0_END           (9)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL3_aob_io_sel18_sd_START            (10)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL3_aob_io_sel18_sd_END              (10)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL3_mcu_subsys_ctrl3_reserved_START  (11)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL3_mcu_subsys_ctrl3_reserved_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL4_UNION
 �ṹ˵��  : SC_MCU_SUBSYS_CTRL4 �Ĵ����ṹ���塣��ַƫ����:0x410����ֵ:0x00000C9B�����:32
 �Ĵ���˵��: MCU��ϵͳ���ƼĴ��������ܰ���COREON Memory���ơ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  coreon_ramctrl_s_ema   : 3;  /* bit[0-2]  : memory�����ʿ��ƣ����ֵ������memory����ʱ���� */
        unsigned int  reserved_0             : 1;  /* bit[3]    : reserved */
        unsigned int  coreon_ramctrl_s_emaw  : 2;  /* bit[4-5]  : memoryд���ʿ��ƣ����ֵ������memoryд��ʱ�����ĵ���������������LIB�����ֲ��ǣ����������ĵ����� */
        unsigned int  coreon_ramctrl_s_emas  : 1;  /* bit[6]    : ��HS memory�����ã�
                                                                  ��HD memoryΪ����bit�������塣 */
        unsigned int  reserved_1             : 3;  /* bit[7-9]  : reserved */
        unsigned int  coreon_ramctrl_s_ret1n : 1;  /* bit[10]   : retention ����1
                                                                  0��retentionģʽ1��
                                                                  1����������ģʽ��
                                                                  ע���˹�����Ӳ�����ƣ�����޷����ơ� */
        unsigned int  coreon_ramctrl_s_ret2n : 1;  /* bit[11]   : ֻ�е���power gatingѡ��ʱ�д˹��ܣ���û��power gating���ܵ�memory���˶˿�Ϊ�����������塣
                                                                  retention ����2
                                                                  0��retentionģʽ2��
                                                                  1����������ģʽ��
                                                                  ע���˹�����Ӳ�����ƣ�����޷����ơ� */
        unsigned int  coreon_ramctrl_s_pgen  : 1;  /* bit[12]   : ֻ�е���power gatingѡ��ʱ�д˹��ܣ���û��power gating���ܵ�memory���˶˿�Ϊ�����������塣
                                                                  0����������ģʽ��
                                                                  1�����ret1n/ret2n���retention��
                                                                  ע���˹�����Ӳ�����ƣ�����޷����ơ� */
        unsigned int  reserved_2             : 3;  /* bit[13-15]: reserved */
        unsigned int  reserved_3             : 16; /* bit[16-31]: 
                                                                  reserved */
    } reg;
} SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL4_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL4_coreon_ramctrl_s_ema_START    (0)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL4_coreon_ramctrl_s_ema_END      (2)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL4_coreon_ramctrl_s_emaw_START   (4)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL4_coreon_ramctrl_s_emaw_END     (5)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL4_coreon_ramctrl_s_emas_START   (6)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL4_coreon_ramctrl_s_emas_END     (6)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL4_coreon_ramctrl_s_ret1n_START  (10)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL4_coreon_ramctrl_s_ret1n_END    (10)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL4_coreon_ramctrl_s_ret2n_START  (11)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL4_coreon_ramctrl_s_ret2n_END    (11)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL4_coreon_ramctrl_s_pgen_START   (12)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL4_coreon_ramctrl_s_pgen_END     (12)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL5_UNION
 �ṹ˵��  : SC_MCU_SUBSYS_CTRL5 �Ĵ����ṹ���塣��ַƫ����:0x414����ֵ:0x00000000�����:32
 �Ĵ���˵��: MCU��ϵͳ���ƼĴ��������ܰ���MCU SHARE MEM��ַ���á�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mcu_share_mem_addr_mapaddr : 15; /* bit[0-14] : mcu����share mem��ӳ�����ַ������remapʹ��ʱ,��mcu�����ⲿ��ַ�ռ䣬mcu�����������ַʱ�ᱻӳ�䵽share mem�ռ䣨����Harq mem��������ƫ�Ƶ�ַΪ��{mcu_share_mem_addr_mapaddr,mcu_share_mem_pageaddr,17'h0}�� */
        unsigned int  reserved                   : 1;  /* bit[15]   : reserved */
        unsigned int  mcu_share_mem_pageaddr     : 3;  /* bit[16-18]: mcu����share mem��ӳ��ҳ��ַ,ÿ��pageΪ128KB�� */
        unsigned int  mcu_share_mem_remap_en     : 1;  /* bit[19]   : mcu����share mem��ӳ��ʹ��
                                                                      0��disable��
                                                                      1��enable�� */
        unsigned int  mcu_share_mem_addr         : 12; /* bit[20-31]: reserved */
    } reg;
} SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL5_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL5_mcu_share_mem_addr_mapaddr_START  (0)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL5_mcu_share_mem_addr_mapaddr_END    (14)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL5_mcu_share_mem_pageaddr_START      (16)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL5_mcu_share_mem_pageaddr_END        (18)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL5_mcu_share_mem_remap_en_START      (19)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL5_mcu_share_mem_remap_en_END        (19)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL5_mcu_share_mem_addr_START          (20)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL5_mcu_share_mem_addr_END            (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL6_UNION
 �ṹ˵��  : SC_MCU_SUBSYS_CTRL6 �Ĵ����ṹ���塣��ַƫ����:0x418����ֵ:0x0EFF0000�����:32
 �Ĵ���˵��: MCU��ϵͳ���ƼĴ��������ܰ���CM3������ַ�ռ���ʼ��ַ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cm3_acc_ddr_protect_str_addr : 12; /* bit[0-11] : CM3������ַ��ʼ��ַ,��λ1MByte,��Ӧ��ַΪ[cm3_acc_ddr_protect_str_addr,0x00000]�������ý���cm3_acc_ddr_protect_ctrl=1'b1ʱ��Ч�� */
        unsigned int  reserved_0                   : 4;  /* bit[12-15]: reserved */
        unsigned int  cm3_acc_ddr_protect_end_addr : 12; /* bit[16-27]: CM3������ַ������ַ,��λ1MByte,��Ӧ��ַΪ[cm3_acc_ddr_protect_end_addr,0xFFFFF]�������ý���cm3_acc_ddr_protect_ctrl=1'b1ʱ��Ч�� */
        unsigned int  reserved_1                   : 2;  /* bit[28-29]: reserved */
        unsigned int  cm3_acc_ddr_protect_sel      : 1;  /* bit[30]   : CM3����DDR�����ռ�ѡ��,�����ý���cm3_acc_ddr_protect_ctrl=1'b1ʱ��Ч
                                                                        0��cm3_acc_ddr_protect_beg��cm3_acc_ddr_protect_end����Ŀռ���������ʣ����ʴ˿ռ�����mcu_remap_ddr_startaddr�����DDR�ռ䷵������error��
                                                                        1��cm3_acc_ddr_protect_beg��cm3_acc_ddr_protect_end����Ŀռ䷵������error���˿ռ�����mcu_remap_ddr_startaddr�����DDR�ռ���������ʡ� */
        unsigned int  cm3_acc_ddr_protect_ctrl     : 1;  /* bit[31]   : CM3����DDR�����ռ书�ܿ���,
                                                                        0�����οռ䱣�����ܣ�
                                                                        1��ʹ�ܿռ䱣�����ܡ� */
    } reg;
} SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL6_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL6_cm3_acc_ddr_protect_str_addr_START  (0)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL6_cm3_acc_ddr_protect_str_addr_END    (11)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL6_cm3_acc_ddr_protect_end_addr_START  (16)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL6_cm3_acc_ddr_protect_end_addr_END    (27)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL6_cm3_acc_ddr_protect_sel_START       (30)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL6_cm3_acc_ddr_protect_sel_END         (30)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL6_cm3_acc_ddr_protect_ctrl_START      (31)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL6_cm3_acc_ddr_protect_ctrl_END        (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL7_UNION
 �ṹ˵��  : SC_MCU_SUBSYS_CTRL7 �Ĵ����ṹ���塣��ַƫ����:0x41C����ֵ:0x00000000�����:32
 �Ĵ���˵��: MCU��ϵͳ���ƼĴ��������ܰ���CM3������ַ�ռ������ַ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved      : 32; /* bit[0-31]: reserved */
    } reg;
} SOC_AO_SCTRL_SC_MCU_SUBSYS_CTRL7_UNION;
#endif


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT0_UNION
 �ṹ˵��  : SC_MCU_SUBSYS_STAT0 �Ĵ����ṹ���塣��ַƫ����:0x440����ֵ:0x00000000�����:32
 �Ĵ���˵��: MCU��ϵͳ״̬�Ĵ��������ܰ���MCU״̬�źš�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mcu_subsys_state0_sysresetreq : 1;  /* bit[0]    : [0]��SYSRESETREQ
                                                                         1'b0��MCU�޸�λ����
                                                                         1'b1��MCU�и�λ���� */
        unsigned int  mcu_subsys_state0_sleeping    : 1;  /* bit[1]    : [1]��SLEEPING
                                                                         1'b0��MCUδ����˯�ߣ�
                                                                         1'b1��MCU�ѽ���˯�ߡ� */
        unsigned int  mcu_subsys_state0_sleepdeep   : 1;  /* bit[2]    : [2]��SLEEPDEEP
                                                                         1'b0��MCUδ������˯��
                                                                         1'b1��MCU�ѽ�����˯�� */
        unsigned int  mcu_subsys_state0_lockup      : 1;  /* bit[3]    : [3]��LOCKUP��LOCKUP gives immediate indication of seriously errant kernel software.
                                                                         1'b0��MCUδ���ˣ�
                                                                         1'b1��MCU�����ˣ���ʾ��������ش��� */
        unsigned int  mcu_subsys_state0_currpri     : 8;  /* bit[4-11] : [11:4]��CURRPRI[7:0]��ʾ��ǰ���ڱ�������жϵ����ȼ� */
        unsigned int  mcu_subsys_state0_brchstat    : 4;  /* bit[12-15]: [15:12]��BRCHSTAT[3:0]
                                                                         0000 No hint��
                                                                         0001 Conditional branch backwards in decode��
                                                                         0010 Conditional branch in decode��
                                                                         0011 Conditional branch in execute��
                                                                         0100 Unconditional branch in decode��
                                                                         0101 Unconditional branch in execute��
                                                                         0110 Reserved��
                                                                         0111 Reserved��
                                                                         1000 Conditional branch in decode taken (cycle after IHTRANS)��
                                                                         1001 ... 1111 Reserved�� */
        unsigned int  mcu_subsys_state0_reserved    : 16; /* bit[16-31]: reserved */
    } reg;
} SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT0_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT0_mcu_subsys_state0_sysresetreq_START  (0)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT0_mcu_subsys_state0_sysresetreq_END    (0)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT0_mcu_subsys_state0_sleeping_START     (1)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT0_mcu_subsys_state0_sleeping_END       (1)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT0_mcu_subsys_state0_sleepdeep_START    (2)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT0_mcu_subsys_state0_sleepdeep_END      (2)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT0_mcu_subsys_state0_lockup_START       (3)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT0_mcu_subsys_state0_lockup_END         (3)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT0_mcu_subsys_state0_currpri_START      (4)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT0_mcu_subsys_state0_currpri_END        (11)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT0_mcu_subsys_state0_brchstat_START     (12)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT0_mcu_subsys_state0_brchstat_END       (15)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT0_mcu_subsys_state0_reserved_START     (16)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT0_mcu_subsys_state0_reserved_END       (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT1_UNION
 �ṹ˵��  : SC_MCU_SUBSYS_STAT1 �Ĵ����ṹ���塣��ַƫ����:0x444����ֵ:0x00000000�����:32
 �Ĵ���˵��: MCU��ϵͳ״̬�Ĵ��������ܰ���������
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mcu_subsys_state1 : 32; /* bit[0-31]: reserved */
    } reg;
} SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT1_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT1_mcu_subsys_state1_START  (0)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT1_mcu_subsys_state1_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT2_UNION
 �ṹ˵��  : SC_MCU_SUBSYS_STAT2 �Ĵ����ṹ���塣��ַƫ����:0x448����ֵ:0x00000000�����:32
 �Ĵ���˵��: MCU��ϵͳ״̬�Ĵ��������ܰ���MCU״̬�ź�INTERNALSTATE��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mcu_subsys_state2 : 32; /* bit[0-31]: INTERNALSTATE[148:0]
                                                            bits [31:0] = Instruction in execute�� */
    } reg;
} SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT2_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT2_mcu_subsys_state2_START  (0)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT2_mcu_subsys_state2_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT3_UNION
 �ṹ˵��  : SC_MCU_SUBSYS_STAT3 �Ĵ����ṹ���塣��ַƫ����:0x44C����ֵ:0x00000000�����:32
 �Ĵ���˵��: MCU��ϵͳ״̬�Ĵ��������ܰ���MCU״̬�ź�INTERNALSTATE��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mcu_subsys_state3 : 32; /* bit[0-31]: INTERNALSTATE[148:0]
                                                            bits [63:32] = Register bank write port data�� */
    } reg;
} SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT3_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT3_mcu_subsys_state3_START  (0)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT3_mcu_subsys_state3_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT4_UNION
 �ṹ˵��  : SC_MCU_SUBSYS_STAT4 �Ĵ����ṹ���塣��ַƫ����:0x450����ֵ:0x00000000�����:32
 �Ĵ���˵��: MCU��ϵͳ״̬�Ĵ��������ܰ���MCU״̬�ź�INTERNALSTATE��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mcu_subsys_state4_bank_write_port_enable   : 1;  /* bit[0]    : INTERNALSTATE[148:0]
                                                                                      bit [64] = Register bank write port enable�� */
        unsigned int  mcu_subsys_state4_bank_write_port_addres   : 4;  /* bit[1-4]  : INTERNALSTATE[148:0]
                                                                                      bits [68:65] = Register bank write port address�� */
        unsigned int  mcu_subsys_state4_bank_read_port_A_address : 4;  /* bit[5-8]  : INTERNALSTATE[148:0]
                                                                                      bits [72:69] = Register bank read port A address�� */
        unsigned int  mcu_subsys_state4_bank_read_port_B_address : 4;  /* bit[9-12] : INTERNALSTATE[148:0]
                                                                                      bits [76:73] = Register bank read port B address�� */
        unsigned int  mcu_subsys_state4                          : 19; /* bit[13-31]: [31:13]reserved */
    } reg;
} SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT4_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT4_mcu_subsys_state4_bank_write_port_enable_START    (0)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT4_mcu_subsys_state4_bank_write_port_enable_END      (0)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT4_mcu_subsys_state4_bank_write_port_addres_START    (1)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT4_mcu_subsys_state4_bank_write_port_addres_END      (4)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT4_mcu_subsys_state4_bank_read_port_A_address_START  (5)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT4_mcu_subsys_state4_bank_read_port_A_address_END    (8)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT4_mcu_subsys_state4_bank_read_port_B_address_START  (9)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT4_mcu_subsys_state4_bank_read_port_B_address_END    (12)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT4_mcu_subsys_state4_START                           (13)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT4_mcu_subsys_state4_END                             (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT5_UNION
 �ṹ˵��  : SC_MCU_SUBSYS_STAT5 �Ĵ����ṹ���塣��ַƫ����:0x454����ֵ:0x00000000�����:32
 �Ĵ���˵��: MCU��ϵͳ״̬�Ĵ��������ܰ���MCU״̬�ź�INTERNALSTATE��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mcu_subsys_state5 : 32; /* bit[0-31]: INTERNALSTATE[148:0]
                                                            bits [108:77] = Register bank read port A data�� */
    } reg;
} SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT5_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT5_mcu_subsys_state5_START  (0)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT5_mcu_subsys_state5_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT6_UNION
 �ṹ˵��  : SC_MCU_SUBSYS_STAT6 �Ĵ����ṹ���塣��ַƫ����:0x458����ֵ:0x00000000�����:32
 �Ĵ���˵��: MCU��ϵͳ״̬�Ĵ��������ܰ���MCU״̬�ź�INTERNALSTATE��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mcu_subsys_state6 : 32; /* bit[0-31]: INTERNALSTATE[148:0]
                                                            bits [140:109] = Register bank read port B data�� */
    } reg;
} SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT6_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT6_mcu_subsys_state6_START  (0)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT6_mcu_subsys_state6_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT7_UNION
 �ṹ˵��  : SC_MCU_SUBSYS_STAT7 �Ĵ����ṹ���塣��ַƫ����:0x45C����ֵ:0x00000000�����:32
 �Ĵ���˵��: MCU��ϵͳ״̬�Ĵ��������ܰ���MCU״̬�ź�INTERNALSTATE��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mcu_subsys_state7_DAP_HTRANS                  : 2;  /* bit[0-1] : INTERNALSTATE
                                                                                        bits [142:141] = DAP HTRANS�� */
        unsigned int  mcu_subsys_state7_DAP_abort                   : 1;  /* bit[2]   : INTERNALSTATE
                                                                                        bit [143] = DAP abort�� */
        unsigned int  mcu_subsys_state7_Watchpoint                  : 1;  /* bit[3]   : INTERNALSTATE
                                                                                        bit [144] = Watchpoint�� */
        unsigned int  mcu_subsys_state7_FPB_instruction_remap_match : 1;  /* bit[4]   : INTERNALSTATE
                                                                                        bit [145] = FPB instruction remap match�� */
        unsigned int  mcu_subsys_state7_FPB_literal_remap_match     : 1;  /* bit[5]   : INTERNALSTATE
                                                                                        bit [146] = FPB literal remap match�� */
        unsigned int  mcu_subsys_state7_FPB_BKPT_match              : 1;  /* bit[6]   : INTERNALSTATE
                                                                                        bit [147] = FPB BKPT match�� */
        unsigned int  mcu_subsys_state7_SysTick_interrupt_request   : 1;  /* bit[7]   : INTERNALSTATE
                                                                                        bit [148] = SysTick interrupt request�� */
        unsigned int  mcu_subsys_state7                             : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT7_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT7_mcu_subsys_state7_DAP_HTRANS_START                   (0)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT7_mcu_subsys_state7_DAP_HTRANS_END                     (1)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT7_mcu_subsys_state7_DAP_abort_START                    (2)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT7_mcu_subsys_state7_DAP_abort_END                      (2)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT7_mcu_subsys_state7_Watchpoint_START                   (3)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT7_mcu_subsys_state7_Watchpoint_END                     (3)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT7_mcu_subsys_state7_FPB_instruction_remap_match_START  (4)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT7_mcu_subsys_state7_FPB_instruction_remap_match_END    (4)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT7_mcu_subsys_state7_FPB_literal_remap_match_START      (5)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT7_mcu_subsys_state7_FPB_literal_remap_match_END        (5)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT7_mcu_subsys_state7_FPB_BKPT_match_START               (6)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT7_mcu_subsys_state7_FPB_BKPT_match_END                 (6)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT7_mcu_subsys_state7_SysTick_interrupt_request_START    (7)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT7_mcu_subsys_state7_SysTick_interrupt_request_END      (7)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT7_mcu_subsys_state7_START                              (8)
#define SOC_AO_SCTRL_SC_MCU_SUBSYS_STAT7_mcu_subsys_state7_END                                (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_PERIPH_CLKEN4_UNION
 �ṹ˵��  : SC_PERIPH_CLKEN4 �Ĵ����ṹ���塣��ַƫ����:0x630����ֵ:0x00000000�����:32
 �Ĵ���˵��: ALWAYSON����ʱ��ʹ�ܼĴ���4���Ա���д1��ʹ��SC_PERIPH_CLKSTAT4��Ӧ��ʱ�ӣ�д0��Ӱ��ʱ��ʹ�ܵ�״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  periph_clken4_0hclk_mcu        : 1;  /* bit[0] : 0hclk_mcu */
        unsigned int  periph_clken4_lreserved        : 1;  /* bit[1] : lreserved */
        unsigned int  periph_clken4_2reserved        : 1;  /* bit[2] : 2reserved */
        unsigned int  periph_clken4_3clk_mcu_dap     : 1;  /* bit[3] : 3clk_mcu_dap */
        unsigned int  periph_clken4_4pclk_cm3_timer0 : 1;  /* bit[4] : 4pclk_cm3_timer0 */
        unsigned int  periph_clken4_5pclk_cm3_timer1 : 1;  /* bit[5] : 5pclk_cm3_timer1 */
        unsigned int  periph_clken4_6pclk_cm3_wdt0   : 1;  /* bit[6] : 6pclk_cm3_wdt0 */
        unsigned int  periph_clken4_7pclk_cm3_wdt1   : 1;  /* bit[7] : 7pclk_cm3_wdt1 */
        unsigned int  periph_clken4_8hclk_ipc_s      : 1;  /* bit[8] : 8hclk_ipc_s for acpu config */
        unsigned int  periph_clken4_9hclk_ipc_ns     : 1;  /* bit[9] : 9hclk_ipc_ns for acpu config */
        unsigned int  periph_clken4_10pclk_efusec    : 1;  /* bit[10]: 10pclk_efusec for acpu config */
        unsigned int  periph_clken4_11pclk_tzpc      : 1;  /* bit[11]: 11pclk_tzpc */
        unsigned int  periph_clken4_12pclk_wdt0      : 1;  /* bit[12]: 12pclk_wdt0 */
        unsigned int  periph_clken4_13pclk_wdt1      : 1;  /* bit[13]: 13pclk_wdt1 */
        unsigned int  periph_clken4_14pclk_wdt2      : 1;  /* bit[14]: 14pclk_wdt2 */
        unsigned int  periph_clken4_15pclk_timer0    : 1;  /* bit[15]: 15pclk_timer0 */
        unsigned int  periph_clken4_16pclk_timer1    : 1;  /* bit[16]: 16pclk_timer1 */
        unsigned int  periph_clken4_17pclk_timer2    : 1;  /* bit[17]: 17pclk_timer2 */
        unsigned int  periph_clken4_18pclk_timer3    : 1;  /* bit[18]: 18pclk_timer3 */
        unsigned int  periph_clken4_19pclk_timer4    : 1;  /* bit[19]: 19pclk_timer4 */
        unsigned int  periph_clken4_20pclk_timer5    : 1;  /* bit[20]: 20pclk_timer5 */
        unsigned int  periph_clken4_21pclk_timer6    : 1;  /* bit[21]: 21pclk_timer6 */
        unsigned int  periph_clken4_22pclk_timer7    : 1;  /* bit[22]: 22pclk_timer7 */
        unsigned int  periph_clken4_23pclk_timer8    : 1;  /* bit[23]: 23pclk_timer8 */
        unsigned int  periph_clken4_24clk_uart0      : 1;  /* bit[24]: 24clk_uart0 */
        unsigned int  periph_clken4_25clk_rtc0       : 1;  /* bit[25]: 25clk_rtc0 */
        unsigned int  periph_clken4_26clk_rtc1       : 1;  /* bit[26]: 26clk_rtc1 */
        unsigned int  periph_clken4_27pclk_pmussi    : 1;  /* bit[27]: 27pclk_pmussi for acpu config */
        unsigned int  periph_clken4_28clk_jtag_auth  : 1;  /* bit[28]: 28clk_jtag_auth */
        unsigned int  periph_clken4_29clk_cs_dapb_on : 1;  /* bit[29]: 29clk_cs_dapb_on */
        unsigned int  periph_clken4_30clk_pdm        : 1;  /* bit[30]: 30clk_pdm */
        unsigned int  periph_clken4_31clk_ssi_pad    : 1;  /* bit[31]: 31clk_ssi_pad */
    } reg;
} SOC_AO_SCTRL_SC_PERIPH_CLKEN4_UNION;
#endif
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_0hclk_mcu_START         (0)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_0hclk_mcu_END           (0)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_lreserved_START         (1)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_lreserved_END           (1)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_2reserved_START         (2)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_2reserved_END           (2)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_3clk_mcu_dap_START      (3)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_3clk_mcu_dap_END        (3)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_4pclk_cm3_timer0_START  (4)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_4pclk_cm3_timer0_END    (4)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_5pclk_cm3_timer1_START  (5)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_5pclk_cm3_timer1_END    (5)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_6pclk_cm3_wdt0_START    (6)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_6pclk_cm3_wdt0_END      (6)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_7pclk_cm3_wdt1_START    (7)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_7pclk_cm3_wdt1_END      (7)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_8hclk_ipc_s_START       (8)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_8hclk_ipc_s_END         (8)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_9hclk_ipc_ns_START      (9)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_9hclk_ipc_ns_END        (9)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_10pclk_efusec_START     (10)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_10pclk_efusec_END       (10)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_11pclk_tzpc_START       (11)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_11pclk_tzpc_END         (11)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_12pclk_wdt0_START       (12)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_12pclk_wdt0_END         (12)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_13pclk_wdt1_START       (13)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_13pclk_wdt1_END         (13)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_14pclk_wdt2_START       (14)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_14pclk_wdt2_END         (14)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_15pclk_timer0_START     (15)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_15pclk_timer0_END       (15)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_16pclk_timer1_START     (16)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_16pclk_timer1_END       (16)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_17pclk_timer2_START     (17)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_17pclk_timer2_END       (17)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_18pclk_timer3_START     (18)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_18pclk_timer3_END       (18)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_19pclk_timer4_START     (19)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_19pclk_timer4_END       (19)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_20pclk_timer5_START     (20)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_20pclk_timer5_END       (20)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_21pclk_timer6_START     (21)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_21pclk_timer6_END       (21)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_22pclk_timer7_START     (22)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_22pclk_timer7_END       (22)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_23pclk_timer8_START     (23)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_23pclk_timer8_END       (23)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_24clk_uart0_START       (24)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_24clk_uart0_END         (24)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_25clk_rtc0_START        (25)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_25clk_rtc0_END          (25)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_26clk_rtc1_START        (26)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_26clk_rtc1_END          (26)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_27pclk_pmussi_START     (27)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_27pclk_pmussi_END       (27)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_28clk_jtag_auth_START   (28)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_28clk_jtag_auth_END     (28)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_29clk_cs_dapb_on_START  (29)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_29clk_cs_dapb_on_END    (29)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_30clk_pdm_START         (30)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_30clk_pdm_END           (30)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_31clk_ssi_pad_START     (31)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN4_periph_clken4_31clk_ssi_pad_END       (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_UNION
 �ṹ˵��  : SC_PERIPH_CLKDIS4 �Ĵ����ṹ���塣��ַƫ����:0x634����ֵ:0x00000000�����:32
 �Ĵ���˵��: ALWAYSON����ʱ�ӽ�ֹ�Ĵ���4���Ա���д1����ֹSC_PERIPH_CLKSTAT4��Ӧ��ʱ�ӣ�д0��Ӱ��ʱ��ʹ�ܵ�״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  periph_clkdis4_0hclk_mcu        : 1;  /* bit[0] : 0hclk_mcu */
        unsigned int  periph_clkdis4_lreserved        : 1;  /* bit[1] : lreserved */
        unsigned int  periph_clkdis4_2reserved        : 1;  /* bit[2] : 2reserved */
        unsigned int  periph_clkdis4_3clk_mcu_dap     : 1;  /* bit[3] : 3clk_mcu_dap */
        unsigned int  periph_clkdis4_4pclk_cm3_timer0 : 1;  /* bit[4] : 4pclk_cm3_timer0 */
        unsigned int  periph_clkdis4_5pclk_cm3_timer1 : 1;  /* bit[5] : 5pclk_cm3_timer1 */
        unsigned int  periph_clkdis4_6pclk_cm3_wdt0   : 1;  /* bit[6] : 6pclk_cm3_wdt0 */
        unsigned int  periph_clkdis4_7pclk_cm3_wdt1   : 1;  /* bit[7] : 7pclk_cm3_wdt1 */
        unsigned int  periph_clkdis4_8hclk_ipc_s      : 1;  /* bit[8] : 8hclk_ipc_s for acpu config */
        unsigned int  periph_clkdis4_9hclk_ipc_ns     : 1;  /* bit[9] : 9hclk_ipc_ns for acpu config */
        unsigned int  periph_clkdis4_10pclk_efusec    : 1;  /* bit[10]: 10pclk_efusec for acpu config */
        unsigned int  periph_clkdis4_11pclk_tzpc      : 1;  /* bit[11]: 11pclk_tzpc */
        unsigned int  periph_clkdis4_12pclk_wdt0      : 1;  /* bit[12]: 12pclk_wdt0 */
        unsigned int  periph_clkdis4_13pclk_wdt1      : 1;  /* bit[13]: 13pclk_wdt1 */
        unsigned int  periph_clkdis4_14pclk_wdt2      : 1;  /* bit[14]: 14pclk_wdt2 */
        unsigned int  periph_clkdis4_15pclk_timer0    : 1;  /* bit[15]: 15pclk_timer0 */
        unsigned int  periph_clkdis4_16pclk_timer1    : 1;  /* bit[16]: 16pclk_timer1 */
        unsigned int  periph_clkdis4_17pclk_timer2    : 1;  /* bit[17]: 17pclk_timer2 */
        unsigned int  periph_clkdis4_18pclk_timer3    : 1;  /* bit[18]: 18pclk_timer3 */
        unsigned int  periph_clkdis4_19pclk_timer4    : 1;  /* bit[19]: 19pclk_timer4 */
        unsigned int  periph_clkdis4_20pclk_timer5    : 1;  /* bit[20]: 20pclk_timer5 */
        unsigned int  periph_clkdis4_21pclk_timer6    : 1;  /* bit[21]: 21pclk_timer6 */
        unsigned int  periph_clkdis4_22pclk_timer7    : 1;  /* bit[22]: 22pclk_timer7 */
        unsigned int  periph_clkdis4_23pclk_timer8    : 1;  /* bit[23]: 23pclk_timer8 */
        unsigned int  periph_clkdis4_24clk_uart0      : 1;  /* bit[24]: 24clk_uart0 */
        unsigned int  periph_clkdis4_25clk_rtc0       : 1;  /* bit[25]: 25clk_rtc0 */
        unsigned int  periph_clkdis4_26clk_rtc1       : 1;  /* bit[26]: 26clk_rtc1 */
        unsigned int  periph_clkdis4_27pclk_pmussi    : 1;  /* bit[27]: 27pclk_pmussi for acpu config */
        unsigned int  periph_clkdis4_28clk_jtag_auth  : 1;  /* bit[28]: 28clk_jtag_auth */
        unsigned int  periph_clkdis4_29clk_cs_dapb_on : 1;  /* bit[29]: 29clk_cs_dapb_on */
        unsigned int  periph_clkdis4_30clk_pdm        : 1;  /* bit[30]: 30clk_pdm */
        unsigned int  periph_clkdis4_31clk_ssi_pad    : 1;  /* bit[31]: 31clk_ssi_pad */
    } reg;
} SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_UNION;
#endif
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_0hclk_mcu_START         (0)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_0hclk_mcu_END           (0)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_lreserved_START         (1)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_lreserved_END           (1)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_2reserved_START         (2)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_2reserved_END           (2)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_3clk_mcu_dap_START      (3)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_3clk_mcu_dap_END        (3)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_4pclk_cm3_timer0_START  (4)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_4pclk_cm3_timer0_END    (4)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_5pclk_cm3_timer1_START  (5)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_5pclk_cm3_timer1_END    (5)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_6pclk_cm3_wdt0_START    (6)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_6pclk_cm3_wdt0_END      (6)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_7pclk_cm3_wdt1_START    (7)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_7pclk_cm3_wdt1_END      (7)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_8hclk_ipc_s_START       (8)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_8hclk_ipc_s_END         (8)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_9hclk_ipc_ns_START      (9)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_9hclk_ipc_ns_END        (9)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_10pclk_efusec_START     (10)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_10pclk_efusec_END       (10)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_11pclk_tzpc_START       (11)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_11pclk_tzpc_END         (11)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_12pclk_wdt0_START       (12)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_12pclk_wdt0_END         (12)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_13pclk_wdt1_START       (13)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_13pclk_wdt1_END         (13)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_14pclk_wdt2_START       (14)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_14pclk_wdt2_END         (14)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_15pclk_timer0_START     (15)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_15pclk_timer0_END       (15)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_16pclk_timer1_START     (16)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_16pclk_timer1_END       (16)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_17pclk_timer2_START     (17)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_17pclk_timer2_END       (17)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_18pclk_timer3_START     (18)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_18pclk_timer3_END       (18)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_19pclk_timer4_START     (19)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_19pclk_timer4_END       (19)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_20pclk_timer5_START     (20)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_20pclk_timer5_END       (20)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_21pclk_timer6_START     (21)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_21pclk_timer6_END       (21)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_22pclk_timer7_START     (22)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_22pclk_timer7_END       (22)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_23pclk_timer8_START     (23)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_23pclk_timer8_END       (23)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_24clk_uart0_START       (24)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_24clk_uart0_END         (24)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_25clk_rtc0_START        (25)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_25clk_rtc0_END          (25)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_26clk_rtc1_START        (26)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_26clk_rtc1_END          (26)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_27pclk_pmussi_START     (27)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_27pclk_pmussi_END       (27)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_28clk_jtag_auth_START   (28)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_28clk_jtag_auth_END     (28)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_29clk_cs_dapb_on_START  (29)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_29clk_cs_dapb_on_END    (29)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_30clk_pdm_START         (30)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_30clk_pdm_END           (30)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_31clk_ssi_pad_START     (31)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS4_periph_clkdis4_31clk_ssi_pad_END       (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_UNION
 �ṹ˵��  : SC_PERIPH_CLKSTAT4 �Ĵ����ṹ���塣��ַƫ����:0x638����ֵ:0x31000C00�����:32
 �Ĵ���˵��: ALWAYSON����ʱ��״̬�Ĵ���4����SC_PERIPH_CLKEN4��SC_PERIPH_CLKDIS4���ý���״̬�޸ġ�
            ����ʱ�ӿ����ź��辭����CRG�н���ͬ��������ˣ�����ļĴ���ֵ���ӳ���Ӧʱ����ļ������ں��������Ӧʱ��״̬��
            ÿ��Bit���壺
            0��ʱ�ӹرգ�
            1��ʱ�Ӵ򿪡�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  periph_clkstat4_0hclk_mcu        : 1;  /* bit[0] : 0hclk_mcu */
        unsigned int  periph_clkstat4_lreserved        : 1;  /* bit[1] : lreserved */
        unsigned int  periph_clkstat4_2reserved        : 1;  /* bit[2] : 2reserved */
        unsigned int  periph_clkstat4_3clk_mcu_dap     : 1;  /* bit[3] : 3clk_mcu_dap */
        unsigned int  periph_clkstat4_4pclk_cm3_timer0 : 1;  /* bit[4] : 4pclk_cm3_timer0 */
        unsigned int  periph_clkstat4_5pclk_cm3_timer1 : 1;  /* bit[5] : 5pclk_cm3_timer1 */
        unsigned int  periph_clkstat4_6pclk_cm3_wdt0   : 1;  /* bit[6] : 6pclk_cm3_wdt0 */
        unsigned int  periph_clkstat4_7pclk_cm3_wdt1   : 1;  /* bit[7] : 7pclk_cm3_wdt1 */
        unsigned int  periph_clkstat4_8hclk_ipc_s      : 1;  /* bit[8] : 8hclk_ipc_s for acpu config */
        unsigned int  periph_clkstat4_9hclk_ipc_ns     : 1;  /* bit[9] : 9hclk_ipc_ns for acpu config */
        unsigned int  periph_clkstat4_10pclk_efusec    : 1;  /* bit[10]: 10pclk_efusec for acpu config */
        unsigned int  periph_clkstat4_11pclk_tzpc      : 1;  /* bit[11]: 11pclk_tzpc */
        unsigned int  periph_clkstat4_12pclk_wdt0      : 1;  /* bit[12]: 12pclk_wdt0 */
        unsigned int  periph_clkstat4_13pclk_wdt1      : 1;  /* bit[13]: 13pclk_wdt1 */
        unsigned int  periph_clkstat4_14pclk_wdt2      : 1;  /* bit[14]: 14pclk_wdt2 */
        unsigned int  periph_clkstat4_15pclk_timer0    : 1;  /* bit[15]: 15pclk_timer0 */
        unsigned int  periph_clkstat4_16pclk_timer1    : 1;  /* bit[16]: 16pclk_timer1 */
        unsigned int  periph_clkstat4_17pclk_timer2    : 1;  /* bit[17]: 17pclk_timer2 */
        unsigned int  periph_clkstat4_18pclk_timer3    : 1;  /* bit[18]: 18pclk_timer3 */
        unsigned int  periph_clkstat4_19pclk_timer4    : 1;  /* bit[19]: 19pclk_timer4 */
        unsigned int  periph_clkstat4_20pclk_timer5    : 1;  /* bit[20]: 20pclk_timer5 */
        unsigned int  periph_clkstat4_21pclk_timer6    : 1;  /* bit[21]: 21pclk_timer6 */
        unsigned int  periph_clkstat4_22pclk_timer7    : 1;  /* bit[22]: 22pclk_timer7 */
        unsigned int  periph_clkstat4_23pclk_timer8    : 1;  /* bit[23]: 23pclk_timer8 */
        unsigned int  periph_clkstat4_24clk_uart0      : 1;  /* bit[24]: 24clk_uart0 */
        unsigned int  periph_clkstat4_25clk_rtc0       : 1;  /* bit[25]: 25clk_rtc0 */
        unsigned int  periph_clkstat4_26clk_rtc1       : 1;  /* bit[26]: 26clk_rtc1 */
        unsigned int  periph_clkstat4_27pclk_pmussi    : 1;  /* bit[27]: 27pclk_pmussi for acpu config */
        unsigned int  periph_clkstat4_28clk_jtag_auth  : 1;  /* bit[28]: 28clk_jtag_auth */
        unsigned int  periph_clkstat4_29clk_cs_dapb_on : 1;  /* bit[29]: 29clk_cs_dapb_on */
        unsigned int  periph_clkstat4_30clk_pdm        : 1;  /* bit[30]: 30clk_pdm */
        unsigned int  periph_clkstat4_31clk_ssi_pad    : 1;  /* bit[31]: 31clk_ssi_pad */
    } reg;
} SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_UNION;
#endif
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_0hclk_mcu_START         (0)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_0hclk_mcu_END           (0)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_lreserved_START         (1)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_lreserved_END           (1)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_2reserved_START         (2)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_2reserved_END           (2)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_3clk_mcu_dap_START      (3)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_3clk_mcu_dap_END        (3)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_4pclk_cm3_timer0_START  (4)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_4pclk_cm3_timer0_END    (4)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_5pclk_cm3_timer1_START  (5)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_5pclk_cm3_timer1_END    (5)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_6pclk_cm3_wdt0_START    (6)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_6pclk_cm3_wdt0_END      (6)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_7pclk_cm3_wdt1_START    (7)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_7pclk_cm3_wdt1_END      (7)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_8hclk_ipc_s_START       (8)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_8hclk_ipc_s_END         (8)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_9hclk_ipc_ns_START      (9)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_9hclk_ipc_ns_END        (9)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_10pclk_efusec_START     (10)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_10pclk_efusec_END       (10)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_11pclk_tzpc_START       (11)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_11pclk_tzpc_END         (11)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_12pclk_wdt0_START       (12)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_12pclk_wdt0_END         (12)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_13pclk_wdt1_START       (13)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_13pclk_wdt1_END         (13)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_14pclk_wdt2_START       (14)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_14pclk_wdt2_END         (14)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_15pclk_timer0_START     (15)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_15pclk_timer0_END       (15)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_16pclk_timer1_START     (16)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_16pclk_timer1_END       (16)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_17pclk_timer2_START     (17)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_17pclk_timer2_END       (17)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_18pclk_timer3_START     (18)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_18pclk_timer3_END       (18)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_19pclk_timer4_START     (19)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_19pclk_timer4_END       (19)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_20pclk_timer5_START     (20)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_20pclk_timer5_END       (20)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_21pclk_timer6_START     (21)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_21pclk_timer6_END       (21)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_22pclk_timer7_START     (22)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_22pclk_timer7_END       (22)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_23pclk_timer8_START     (23)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_23pclk_timer8_END       (23)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_24clk_uart0_START       (24)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_24clk_uart0_END         (24)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_25clk_rtc0_START        (25)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_25clk_rtc0_END          (25)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_26clk_rtc1_START        (26)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_26clk_rtc1_END          (26)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_27pclk_pmussi_START     (27)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_27pclk_pmussi_END       (27)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_28clk_jtag_auth_START   (28)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_28clk_jtag_auth_END     (28)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_29clk_cs_dapb_on_START  (29)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_29clk_cs_dapb_on_END    (29)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_30clk_pdm_START         (30)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_30clk_pdm_END           (30)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_31clk_ssi_pad_START     (31)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT4_periph_clkstat4_31clk_ssi_pad_END       (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_PERIPH_CLKEN5_UNION
 �ṹ˵��  : SC_PERIPH_CLKEN5 �Ĵ����ṹ���塣��ַƫ����:0x63C����ֵ:0x00000000�����:32
 �Ĵ���˵��: ALWAYSON����ʱ��ʹ�ܼĴ���5���Ա���д1��ʹ��SC_PERIPH_CLKSTAT5��Ӧ��ʱ�ӣ�д0��Ӱ��ʱ��ʹ�ܵ�״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  periph_clken5_0pclk_pmussi_ccpu : 1;  /* bit[0] : 0pclk_pmussi_ccpu */
        unsigned int  periph_clken5_1pclk_efusec_ccpu : 1;  /* bit[1] : 1pclk_efusec_ccpu */
        unsigned int  periph_clken5_2hclk_ipc_ccpu    : 1;  /* bit[2] : 2hclk_ipc_ccpu */
        unsigned int  periph_clken5_3hclk_ipc_ns_ccpu : 1;  /* bit[3] : 3hclk_ipc_ns_ccpu */
        unsigned int  periph_clken5_4reserved         : 1;  /* bit[4] : 4reserved */
        unsigned int  periph_clken5_5reserved         : 1;  /* bit[5] : 5reserved */
        unsigned int  periph_clken5_6reserved         : 1;  /* bit[6] : 6reserved */
        unsigned int  periph_clken5_7reserved         : 1;  /* bit[7] : 7reserved */
        unsigned int  periph_clken5_8reserved         : 1;  /* bit[8] : 8reserved */
        unsigned int  periph_clken5_9reserved         : 1;  /* bit[9] : 9reserved */
        unsigned int  periph_clken5_10reserved        : 1;  /* bit[10]: 10reserved */
        unsigned int  periph_clken5_11reserved        : 1;  /* bit[11]: 11reserved */
        unsigned int  periph_clken5_12reserved        : 1;  /* bit[12]: 12reserved */
        unsigned int  periph_clken5_13reserved        : 1;  /* bit[13]: 13reserved */
        unsigned int  periph_clken5_14reserved        : 1;  /* bit[14]: 14reserved */
        unsigned int  periph_clken5_15reserved        : 1;  /* bit[15]: 15reserved */
        unsigned int  periph_clken5_16pclk_pmussi_mcu : 1;  /* bit[16]: 16pclk_pmussi_mcu */
        unsigned int  periph_clken5_17pclk_efusec_mcu : 1;  /* bit[17]: 17pclk_efusec_mcu */
        unsigned int  periph_clken5_18hclk_ipc_mcu    : 1;  /* bit[18]: 18hclk_ipc_mcu */
        unsigned int  periph_clken5_19hclk_ipc_ns_mcu : 1;  /* bit[19]: 19hclk_ipc_ns_mcu */
        unsigned int  periph_clken5_20reserved        : 1;  /* bit[20]: 20reserved */
        unsigned int  periph_clken5_21reserved        : 1;  /* bit[21]: 21reserved */
        unsigned int  periph_clken5_22reserved        : 1;  /* bit[22]: 22reserved */
        unsigned int  periph_clken5_23reserved        : 1;  /* bit[23]: 23reserved */
        unsigned int  periph_clken5_24reserved        : 1;  /* bit[24]: 24reserved */
        unsigned int  periph_clken5_25reserved        : 1;  /* bit[25]: 25reserved */
        unsigned int  periph_clken5_26reserved        : 1;  /* bit[26]: 26reserved */
        unsigned int  periph_clken5_27reserved        : 1;  /* bit[27]: 27reserved */
        unsigned int  periph_clken5_28reserved        : 1;  /* bit[28]: 28reserved */
        unsigned int  periph_clken5_29reserved        : 1;  /* bit[29]: 29reserved */
        unsigned int  periph_clken5_30reserved        : 1;  /* bit[30]: 30reserved */
        unsigned int  periph_clken5_31reserved        : 1;  /* bit[31]: 31reserved */
    } reg;
} SOC_AO_SCTRL_SC_PERIPH_CLKEN5_UNION;
#endif
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_0pclk_pmussi_ccpu_START  (0)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_0pclk_pmussi_ccpu_END    (0)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_1pclk_efusec_ccpu_START  (1)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_1pclk_efusec_ccpu_END    (1)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_2hclk_ipc_ccpu_START     (2)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_2hclk_ipc_ccpu_END       (2)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_3hclk_ipc_ns_ccpu_START  (3)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_3hclk_ipc_ns_ccpu_END    (3)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_4reserved_START          (4)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_4reserved_END            (4)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_5reserved_START          (5)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_5reserved_END            (5)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_6reserved_START          (6)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_6reserved_END            (6)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_7reserved_START          (7)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_7reserved_END            (7)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_8reserved_START          (8)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_8reserved_END            (8)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_9reserved_START          (9)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_9reserved_END            (9)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_10reserved_START         (10)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_10reserved_END           (10)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_11reserved_START         (11)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_11reserved_END           (11)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_12reserved_START         (12)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_12reserved_END           (12)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_13reserved_START         (13)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_13reserved_END           (13)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_14reserved_START         (14)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_14reserved_END           (14)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_15reserved_START         (15)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_15reserved_END           (15)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_16pclk_pmussi_mcu_START  (16)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_16pclk_pmussi_mcu_END    (16)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_17pclk_efusec_mcu_START  (17)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_17pclk_efusec_mcu_END    (17)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_18hclk_ipc_mcu_START     (18)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_18hclk_ipc_mcu_END       (18)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_19hclk_ipc_ns_mcu_START  (19)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_19hclk_ipc_ns_mcu_END    (19)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_20reserved_START         (20)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_20reserved_END           (20)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_21reserved_START         (21)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_21reserved_END           (21)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_22reserved_START         (22)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_22reserved_END           (22)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_23reserved_START         (23)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_23reserved_END           (23)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_24reserved_START         (24)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_24reserved_END           (24)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_25reserved_START         (25)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_25reserved_END           (25)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_26reserved_START         (26)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_26reserved_END           (26)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_27reserved_START         (27)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_27reserved_END           (27)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_28reserved_START         (28)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_28reserved_END           (28)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_29reserved_START         (29)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_29reserved_END           (29)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_30reserved_START         (30)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_30reserved_END           (30)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_31reserved_START         (31)
#define SOC_AO_SCTRL_SC_PERIPH_CLKEN5_periph_clken5_31reserved_END           (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_UNION
 �ṹ˵��  : SC_PERIPH_CLKDIS5 �Ĵ����ṹ���塣��ַƫ����:0x640����ֵ:0x00000000�����:32
 �Ĵ���˵��: ALWAYSON����ʱ�ӽ�ֹ�Ĵ���5���Ա���д1����ֹSC_PERIPH_CLKSTAT5��Ӧ��ʱ�ӣ�д0��Ӱ��ʱ��ʹ�ܵ�״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  periph_clkdis5_0pclk_pmussi_ccpu : 1;  /* bit[0] : 0pclk_pmussi_ccpu */
        unsigned int  periph_clkdis5_1pclk_efusec_ccpu : 1;  /* bit[1] : 1pclk_efusec_ccpu */
        unsigned int  periph_clkdis5_2hclk_ipc_ccpu    : 1;  /* bit[2] : 2hclk_ipc_ccpu */
        unsigned int  periph_clkdis5_3hclk_ipc_ns_ccpu : 1;  /* bit[3] : 3hclk_ipc_ns_ccpu */
        unsigned int  periph_clkdis5_4reserved         : 1;  /* bit[4] : 4reserved */
        unsigned int  periph_clkdis5_5reserved         : 1;  /* bit[5] : 5reserved */
        unsigned int  periph_clkdis5_6reserved         : 1;  /* bit[6] : 6reserved */
        unsigned int  periph_clkdis5_7reserved         : 1;  /* bit[7] : 7reserved */
        unsigned int  periph_clkdis5_8reserved         : 1;  /* bit[8] : 8reserved */
        unsigned int  periph_clkdis5_9reserved         : 1;  /* bit[9] : 9reserved */
        unsigned int  periph_clkdis5_10reserved        : 1;  /* bit[10]: 10reserved */
        unsigned int  periph_clkdis5_11reserved        : 1;  /* bit[11]: 11reserved */
        unsigned int  periph_clkdis5_12reserved        : 1;  /* bit[12]: 12reserved */
        unsigned int  periph_clkdis5_13reserved        : 1;  /* bit[13]: 13reserved */
        unsigned int  periph_clkdis5_14reserved        : 1;  /* bit[14]: 14reserved */
        unsigned int  periph_clkdis5_15reserved        : 1;  /* bit[15]: 15reserved */
        unsigned int  periph_clkdis5_16pclk_pmussi_mcu : 1;  /* bit[16]: 16pclk_pmussi_mcu */
        unsigned int  periph_clkdis5_17pclk_efusec_mcu : 1;  /* bit[17]: 17pclk_efusec_mcu */
        unsigned int  periph_clkdis5_18hclk_ipc_mcu    : 1;  /* bit[18]: 18hclk_ipc_mcu */
        unsigned int  periph_clkdis5_19hclk_ipc_ns_mcu : 1;  /* bit[19]: 19hclk_ipc_ns_mcu */
        unsigned int  periph_clkdis5_20reserved        : 1;  /* bit[20]: 20reserved */
        unsigned int  periph_clkdis5_21reserved        : 1;  /* bit[21]: 21reserved */
        unsigned int  periph_clkdis5_22reserved        : 1;  /* bit[22]: 22reserved */
        unsigned int  periph_clkdis5_23reserved        : 1;  /* bit[23]: 23reserved */
        unsigned int  periph_clkdis5_24reserved        : 1;  /* bit[24]: 24reserved */
        unsigned int  periph_clkdis5_25reserved        : 1;  /* bit[25]: 25reserved */
        unsigned int  periph_clkdis5_26reserved        : 1;  /* bit[26]: 26reserved */
        unsigned int  periph_clkdis5_27reserved        : 1;  /* bit[27]: 27reserved */
        unsigned int  periph_clkdis5_28reserved        : 1;  /* bit[28]: 28reserved */
        unsigned int  periph_clkdis5_29reserved        : 1;  /* bit[29]: 29reserved */
        unsigned int  periph_clkdis5_30reserved        : 1;  /* bit[30]: 30reserved */
        unsigned int  periph_clkdis5_31reserved        : 1;  /* bit[31]: 31reserved */
    } reg;
} SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_UNION;
#endif
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_0pclk_pmussi_ccpu_START  (0)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_0pclk_pmussi_ccpu_END    (0)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_1pclk_efusec_ccpu_START  (1)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_1pclk_efusec_ccpu_END    (1)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_2hclk_ipc_ccpu_START     (2)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_2hclk_ipc_ccpu_END       (2)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_3hclk_ipc_ns_ccpu_START  (3)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_3hclk_ipc_ns_ccpu_END    (3)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_4reserved_START          (4)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_4reserved_END            (4)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_5reserved_START          (5)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_5reserved_END            (5)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_6reserved_START          (6)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_6reserved_END            (6)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_7reserved_START          (7)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_7reserved_END            (7)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_8reserved_START          (8)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_8reserved_END            (8)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_9reserved_START          (9)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_9reserved_END            (9)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_10reserved_START         (10)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_10reserved_END           (10)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_11reserved_START         (11)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_11reserved_END           (11)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_12reserved_START         (12)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_12reserved_END           (12)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_13reserved_START         (13)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_13reserved_END           (13)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_14reserved_START         (14)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_14reserved_END           (14)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_15reserved_START         (15)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_15reserved_END           (15)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_16pclk_pmussi_mcu_START  (16)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_16pclk_pmussi_mcu_END    (16)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_17pclk_efusec_mcu_START  (17)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_17pclk_efusec_mcu_END    (17)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_18hclk_ipc_mcu_START     (18)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_18hclk_ipc_mcu_END       (18)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_19hclk_ipc_ns_mcu_START  (19)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_19hclk_ipc_ns_mcu_END    (19)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_20reserved_START         (20)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_20reserved_END           (20)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_21reserved_START         (21)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_21reserved_END           (21)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_22reserved_START         (22)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_22reserved_END           (22)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_23reserved_START         (23)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_23reserved_END           (23)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_24reserved_START         (24)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_24reserved_END           (24)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_25reserved_START         (25)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_25reserved_END           (25)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_26reserved_START         (26)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_26reserved_END           (26)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_27reserved_START         (27)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_27reserved_END           (27)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_28reserved_START         (28)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_28reserved_END           (28)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_29reserved_START         (29)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_29reserved_END           (29)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_30reserved_START         (30)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_30reserved_END           (30)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_31reserved_START         (31)
#define SOC_AO_SCTRL_SC_PERIPH_CLKDIS5_periph_clkdis5_31reserved_END           (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_UNION
 �ṹ˵��  : SC_PERIPH_CLKSTAT5 �Ĵ����ṹ���塣��ַƫ����:0x644����ֵ:0x00020002�����:32
 �Ĵ���˵��: ALWAYSON����ʱ��״̬�Ĵ���5����SC_PERIPH_CLKEN5��SC_PERIPH_CLKDIS5���ý���״̬�޸ġ�
            ����ʱ�ӿ����ź��辭����CRG�н���ͬ��������ˣ�����ļĴ���ֵ���ӳ���Ӧʱ����ļ������ں��������Ӧʱ��״̬��
            ÿ��Bit���壺
            0��ʱ�ӹرգ�
            1��ʱ�Ӵ򿪡�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  periph_clkstat5_0pclk_pmussi_ccpu : 1;  /* bit[0] : 0pclk_pmussi_ccpu */
        unsigned int  periph_clkstat5_1pclk_efusec_ccpu : 1;  /* bit[1] : 1pclk_efusec_ccpu */
        unsigned int  periph_clkstat5_2hclk_ipc_ccpu    : 1;  /* bit[2] : 2hclk_ipc_ccpu */
        unsigned int  periph_clkstat5_3hclk_ipc_ns_ccpu : 1;  /* bit[3] : 3hclk_ipc_ns_ccpu */
        unsigned int  periph_clkstat5_4reserved         : 1;  /* bit[4] : 4reserved */
        unsigned int  periph_clkstat5_5reserved         : 1;  /* bit[5] : 5reserved */
        unsigned int  periph_clkstat5_6reserved         : 1;  /* bit[6] : 6reserved */
        unsigned int  periph_clkstat5_7reserved         : 1;  /* bit[7] : 7reserved */
        unsigned int  periph_clkstat5_8reserved         : 1;  /* bit[8] : 8reserved */
        unsigned int  periph_clkstat5_9reserved         : 1;  /* bit[9] : 9reserved */
        unsigned int  periph_clkstat5_10reserved        : 1;  /* bit[10]: 10reserved */
        unsigned int  periph_clkstat5_11reserved        : 1;  /* bit[11]: 11reserved */
        unsigned int  periph_clkstat5_12reserved        : 1;  /* bit[12]: 12reserved */
        unsigned int  periph_clkstat5_13reserved        : 1;  /* bit[13]: 13reserved */
        unsigned int  periph_clkstat5_14reserved        : 1;  /* bit[14]: 14reserved */
        unsigned int  periph_clkstat5_15reserved        : 1;  /* bit[15]: 15reserved */
        unsigned int  periph_clkstat5_16pclk_pmussi_mcu : 1;  /* bit[16]: 16pclk_pmussi_mcu */
        unsigned int  periph_clkstat5_17pclk_efusec_mcu : 1;  /* bit[17]: 17pclk_efusec_mcu */
        unsigned int  periph_clkstat5_18hclk_ipc_mcu    : 1;  /* bit[18]: 18hclk_ipc_mcu */
        unsigned int  periph_clkstat5_19hclk_ipc_ns_mcu : 1;  /* bit[19]: 19hclk_ipc_ns_mcu */
        unsigned int  periph_clkstat5_20reserved        : 1;  /* bit[20]: 20reserved */
        unsigned int  periph_clkstat5_21reserved        : 1;  /* bit[21]: 21reserved */
        unsigned int  periph_clkstat5_22reserved        : 1;  /* bit[22]: 22reserved */
        unsigned int  periph_clkstat5_23reserved        : 1;  /* bit[23]: 23reserved */
        unsigned int  periph_clkstat5_24reserved        : 1;  /* bit[24]: 24reserved */
        unsigned int  periph_clkstat5_25reserved        : 1;  /* bit[25]: 25reserved */
        unsigned int  periph_clkstat5_26reserved        : 1;  /* bit[26]: 26reserved */
        unsigned int  periph_clkstat5_27reserved        : 1;  /* bit[27]: 27reserved */
        unsigned int  periph_clkstat5_28reserved        : 1;  /* bit[28]: 28reserved */
        unsigned int  periph_clkstat5_29reserved        : 1;  /* bit[29]: 29reserved */
        unsigned int  periph_clkstat5_30reserved        : 1;  /* bit[30]: 30reserved */
        unsigned int  periph_clkstat5_31reserved        : 1;  /* bit[31]: 31reserved */
    } reg;
} SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_UNION;
#endif
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_0pclk_pmussi_ccpu_START  (0)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_0pclk_pmussi_ccpu_END    (0)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_1pclk_efusec_ccpu_START  (1)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_1pclk_efusec_ccpu_END    (1)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_2hclk_ipc_ccpu_START     (2)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_2hclk_ipc_ccpu_END       (2)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_3hclk_ipc_ns_ccpu_START  (3)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_3hclk_ipc_ns_ccpu_END    (3)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_4reserved_START          (4)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_4reserved_END            (4)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_5reserved_START          (5)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_5reserved_END            (5)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_6reserved_START          (6)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_6reserved_END            (6)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_7reserved_START          (7)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_7reserved_END            (7)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_8reserved_START          (8)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_8reserved_END            (8)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_9reserved_START          (9)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_9reserved_END            (9)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_10reserved_START         (10)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_10reserved_END           (10)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_11reserved_START         (11)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_11reserved_END           (11)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_12reserved_START         (12)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_12reserved_END           (12)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_13reserved_START         (13)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_13reserved_END           (13)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_14reserved_START         (14)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_14reserved_END           (14)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_15reserved_START         (15)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_15reserved_END           (15)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_16pclk_pmussi_mcu_START  (16)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_16pclk_pmussi_mcu_END    (16)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_17pclk_efusec_mcu_START  (17)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_17pclk_efusec_mcu_END    (17)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_18hclk_ipc_mcu_START     (18)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_18hclk_ipc_mcu_END       (18)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_19hclk_ipc_ns_mcu_START  (19)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_19hclk_ipc_ns_mcu_END    (19)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_20reserved_START         (20)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_20reserved_END           (20)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_21reserved_START         (21)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_21reserved_END           (21)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_22reserved_START         (22)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_22reserved_END           (22)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_23reserved_START         (23)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_23reserved_END           (23)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_24reserved_START         (24)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_24reserved_END           (24)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_25reserved_START         (25)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_25reserved_END           (25)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_26reserved_START         (26)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_26reserved_END           (26)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_27reserved_START         (27)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_27reserved_END           (27)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_28reserved_START         (28)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_28reserved_END           (28)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_29reserved_START         (29)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_29reserved_END           (29)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_30reserved_START         (30)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_30reserved_END           (30)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_31reserved_START         (31)
#define SOC_AO_SCTRL_SC_PERIPH_CLKSTAT5_periph_clkstat5_31reserved_END           (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_PERIPH_RSTEN4_UNION
 �ṹ˵��  : SC_PERIPH_RSTEN4 �Ĵ����ṹ���塣��ַƫ����:0x6F0����ֵ:0x00000000�����:32
 �Ĵ���˵��: ALWAYSON������λʹ�ܼĴ���4������ʹ��SC_PERIPH_RSTSTAT4��λ���Ա���д1����ӦIP���븴λ״̬��д0��Ӱ�츴λ״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  periph_rsten4_0reset_mcu_ectr_n    : 1;  /* bit[0] : 0reset_mcu_ectr_n */
        unsigned int  periph_rsten4_1reset_mcu_sys_n     : 1;  /* bit[1] : 1reset_mcu_sys_n */
        unsigned int  periph_rsten4_2reset_mcu_por_n     : 1;  /* bit[2] : 2reset_mcu_por_n */
        unsigned int  periph_rsten4_3reset_mcu_dap_n     : 1;  /* bit[3] : 3reset_mcu_dap_n */
        unsigned int  periph_rsten4_4preset_cm3_timer0_n : 1;  /* bit[4] : 4preset_cm3_timer0_n */
        unsigned int  periph_rsten4_5preset_cm3_timer1_n : 1;  /* bit[5] : 5preset_cm3_timer1_n */
        unsigned int  periph_rsten4_6preset_cm3_wdt0_n   : 1;  /* bit[6] : 6preset_cm3_wdt0_n */
        unsigned int  periph_rsten4_7preset_cm3_wdt1_n   : 1;  /* bit[7] : 7preset_cm3_wdt1_n */
        unsigned int  periph_rsten4_8hreset_ipc_s_n      : 1;  /* bit[8] : 8hreset_ipc_s_n */
        unsigned int  periph_rsten4_9hreset_ipc_ns_n     : 1;  /* bit[9] : 9hreset_ipc_ns_n */
        unsigned int  periph_rsten4_10preset_efusec_n    : 1;  /* bit[10]: 10preset_efusec_n */
        unsigned int  periph_rsten4_11reserved           : 1;  /* bit[11]: 11reserved */
        unsigned int  periph_rsten4_12preset_wdt0_n      : 1;  /* bit[12]: 12preset_wdt0_n */
        unsigned int  periph_rsten4_13preset_wdt1_n      : 1;  /* bit[13]: 13preset_wdt1_n */
        unsigned int  periph_rsten4_14preset_wdt2_n      : 1;  /* bit[14]: 14preset_wdt2_n */
        unsigned int  periph_rsten4_15preset_timer0_n    : 1;  /* bit[15]: 15preset_timer0_n */
        unsigned int  periph_rsten4_16preset_timer1_n    : 1;  /* bit[16]: 16preset_timer1_n */
        unsigned int  periph_rsten4_17preset_timer2_n    : 1;  /* bit[17]: 17preset_timer2_n */
        unsigned int  periph_rsten4_18preset_timer3_n    : 1;  /* bit[18]: 18preset_timer3_n */
        unsigned int  periph_rsten4_19preset_timer4_n    : 1;  /* bit[19]: 19preset_timer4_n */
        unsigned int  periph_rsten4_20preset_timer5_n    : 1;  /* bit[20]: 20preset_timer5_n */
        unsigned int  periph_rsten4_21preset_timer6_n    : 1;  /* bit[21]: 21preset_timer6_n */
        unsigned int  periph_rsten4_22preset_timer7_n    : 1;  /* bit[22]: 22preset_timer7_n */
        unsigned int  periph_rsten4_23preset_timer8_n    : 1;  /* bit[23]: 23preset_timer8_n */
        unsigned int  periph_rsten4_24preset_uart0_n     : 1;  /* bit[24]: 24preset_uart0_n */
        unsigned int  periph_rsten4_25reset_rtc0_n       : 1;  /* bit[25]: 25reset_rtc0_n */
        unsigned int  periph_rsten4_26reset_rtc1_n       : 1;  /* bit[26]: 26reset_rtc1_n */
        unsigned int  periph_rsten4_27preset_pmussi_n    : 1;  /* bit[27]: 27preset_pmussi_n */
        unsigned int  periph_rsten4_28reset_jtag_auth_n  : 1;  /* bit[28]: 28reset_jtag_auth_n */
        unsigned int  periph_rsten4_29reset_cs_dapb_on_n : 1;  /* bit[29]: 29reset_cs_dapb_on_n */
        unsigned int  periph_rsten4_30mdm_subsys_glb     : 1;  /* bit[30]: 30mdm_subsys_glb Modem��ϵͳȫ�ָ�λ */
        unsigned int  periph_rsten4_31reserved           : 1;  /* bit[31]: reserved */
    } reg;
} SOC_AO_SCTRL_SC_PERIPH_RSTEN4_UNION;
#endif
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_0reset_mcu_ectr_n_START     (0)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_0reset_mcu_ectr_n_END       (0)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_1reset_mcu_sys_n_START      (1)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_1reset_mcu_sys_n_END        (1)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_2reset_mcu_por_n_START      (2)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_2reset_mcu_por_n_END        (2)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_3reset_mcu_dap_n_START      (3)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_3reset_mcu_dap_n_END        (3)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_4preset_cm3_timer0_n_START  (4)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_4preset_cm3_timer0_n_END    (4)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_5preset_cm3_timer1_n_START  (5)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_5preset_cm3_timer1_n_END    (5)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_6preset_cm3_wdt0_n_START    (6)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_6preset_cm3_wdt0_n_END      (6)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_7preset_cm3_wdt1_n_START    (7)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_7preset_cm3_wdt1_n_END      (7)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_8hreset_ipc_s_n_START       (8)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_8hreset_ipc_s_n_END         (8)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_9hreset_ipc_ns_n_START      (9)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_9hreset_ipc_ns_n_END        (9)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_10preset_efusec_n_START     (10)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_10preset_efusec_n_END       (10)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_11reserved_START            (11)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_11reserved_END              (11)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_12preset_wdt0_n_START       (12)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_12preset_wdt0_n_END         (12)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_13preset_wdt1_n_START       (13)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_13preset_wdt1_n_END         (13)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_14preset_wdt2_n_START       (14)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_14preset_wdt2_n_END         (14)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_15preset_timer0_n_START     (15)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_15preset_timer0_n_END       (15)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_16preset_timer1_n_START     (16)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_16preset_timer1_n_END       (16)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_17preset_timer2_n_START     (17)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_17preset_timer2_n_END       (17)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_18preset_timer3_n_START     (18)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_18preset_timer3_n_END       (18)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_19preset_timer4_n_START     (19)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_19preset_timer4_n_END       (19)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_20preset_timer5_n_START     (20)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_20preset_timer5_n_END       (20)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_21preset_timer6_n_START     (21)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_21preset_timer6_n_END       (21)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_22preset_timer7_n_START     (22)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_22preset_timer7_n_END       (22)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_23preset_timer8_n_START     (23)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_23preset_timer8_n_END       (23)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_24preset_uart0_n_START      (24)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_24preset_uart0_n_END        (24)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_25reset_rtc0_n_START        (25)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_25reset_rtc0_n_END          (25)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_26reset_rtc1_n_START        (26)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_26reset_rtc1_n_END          (26)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_27preset_pmussi_n_START     (27)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_27preset_pmussi_n_END       (27)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_28reset_jtag_auth_n_START   (28)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_28reset_jtag_auth_n_END     (28)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_29reset_cs_dapb_on_n_START  (29)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_29reset_cs_dapb_on_n_END    (29)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_30mdm_subsys_glb_START      (30)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_30mdm_subsys_glb_END        (30)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_31reserved_START            (31)
#define SOC_AO_SCTRL_SC_PERIPH_RSTEN4_periph_rsten4_31reserved_END              (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_UNION
 �ṹ˵��  : SC_PERIPH_RSTDIS4 �Ĵ����ṹ���塣��ַƫ����:0x6F4����ֵ:0x00000000�����:32
 �Ĵ���˵��: ALWAYSON�����踴λ��ֹ�Ĵ���4�����ڽ�ֹSC_PERIPH_RSTSTAT4��λ���Ա���д1����Ӧ��������λ��д0��Ӱ�츴λʹ�ܵ�״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  periph_rstdis4_0reset_mcu_ectr_n    : 1;  /* bit[0] : 0reset_mcu_ectr_n */
        unsigned int  periph_rstdis4_1reset_mcu_sys_n     : 1;  /* bit[1] : 1reset_mcu_sys_n */
        unsigned int  periph_rstdis4_2reset_mcu_por_n     : 1;  /* bit[2] : 2reset_mcu_por_n */
        unsigned int  periph_rstdis4_3reset_mcu_dap_n     : 1;  /* bit[3] : 3reset_mcu_dap_n */
        unsigned int  periph_rstdis4_4preset_cm3_timer0_n : 1;  /* bit[4] : 4preset_cm3_timer0_n */
        unsigned int  periph_rstdis4_5preset_cm3_timer1_n : 1;  /* bit[5] : 5preset_cm3_timer1_n */
        unsigned int  periph_rstdis4_6preset_cm3_wdt0_n   : 1;  /* bit[6] : 6preset_cm3_wdt0_n */
        unsigned int  periph_rstdis4_7preset_cm3_wdt1_n   : 1;  /* bit[7] : 7preset_cm3_wdt1_n */
        unsigned int  periph_rstdis4_8hreset_ipc_s_n      : 1;  /* bit[8] : 8hreset_ipc_s_n */
        unsigned int  periph_rstdis4_9hreset_ipc_ns_n     : 1;  /* bit[9] : 9hreset_ipc_ns_n */
        unsigned int  periph_rstdis4_10preset_efusec_n    : 1;  /* bit[10]: 10preset_efusec_n */
        unsigned int  periph_rstdis4_11reserved           : 1;  /* bit[11]: 11reserved */
        unsigned int  periph_rstdis4_12preset_wdt0_n      : 1;  /* bit[12]: 12preset_wdt0_n */
        unsigned int  periph_rstdis4_13preset_wdt1_n      : 1;  /* bit[13]: 13preset_wdt1_n */
        unsigned int  periph_rstdis4_14preset_wdt2_n      : 1;  /* bit[14]: 14preset_wdt2_n */
        unsigned int  periph_rstdis4_15preset_timer0_n    : 1;  /* bit[15]: 15preset_timer0_n */
        unsigned int  periph_rstdis4_16preset_timer1_n    : 1;  /* bit[16]: 16preset_timer1_n */
        unsigned int  periph_rstdis4_17preset_timer2_n    : 1;  /* bit[17]: 17preset_timer2_n */
        unsigned int  periph_rstdis4_18preset_timer3_n    : 1;  /* bit[18]: 18preset_timer3_n */
        unsigned int  periph_rstdis4_19preset_timer4_n    : 1;  /* bit[19]: 19preset_timer4_n */
        unsigned int  periph_rstdis4_20preset_timer5_n    : 1;  /* bit[20]: 20preset_timer5_n */
        unsigned int  periph_rstdis4_21preset_timer6_n    : 1;  /* bit[21]: 21preset_timer6_n */
        unsigned int  periph_rstdis4_22preset_timer7_n    : 1;  /* bit[22]: 22preset_timer7_n */
        unsigned int  periph_rstdis4_23preset_timer8_n    : 1;  /* bit[23]: 23preset_timer8_n */
        unsigned int  periph_rstdis4_24preset_uart0_n     : 1;  /* bit[24]: 24preset_uart0_n */
        unsigned int  periph_rstdis4_25reset_rtc0_n       : 1;  /* bit[25]: 25reset_rtc0_n */
        unsigned int  periph_rstdis4_26reset_rtc1_n       : 1;  /* bit[26]: 26reset_rtc1_n */
        unsigned int  periph_rstdis4_27preset_pmussi_n    : 1;  /* bit[27]: 27preset_pmussi_n */
        unsigned int  periph_rstdis4_28reset_jtag_auth_n  : 1;  /* bit[28]: 28reset_jtag_auth_n */
        unsigned int  periph_rstdis4_29reset_cs_dapb_on_n : 1;  /* bit[29]: 29reset_cs_dapb_on_n */
        unsigned int  periph_rstdis4_30mdm_subsys_glb     : 1;  /* bit[30]: 30mdm_subsys_glb Modem��ϵͳȫ�ָ�λ */
        unsigned int  periph_rstdis4_31reserved           : 1;  /* bit[31]: reserved */
    } reg;
} SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_UNION;
#endif
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_0reset_mcu_ectr_n_START     (0)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_0reset_mcu_ectr_n_END       (0)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_1reset_mcu_sys_n_START      (1)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_1reset_mcu_sys_n_END        (1)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_2reset_mcu_por_n_START      (2)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_2reset_mcu_por_n_END        (2)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_3reset_mcu_dap_n_START      (3)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_3reset_mcu_dap_n_END        (3)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_4preset_cm3_timer0_n_START  (4)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_4preset_cm3_timer0_n_END    (4)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_5preset_cm3_timer1_n_START  (5)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_5preset_cm3_timer1_n_END    (5)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_6preset_cm3_wdt0_n_START    (6)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_6preset_cm3_wdt0_n_END      (6)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_7preset_cm3_wdt1_n_START    (7)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_7preset_cm3_wdt1_n_END      (7)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_8hreset_ipc_s_n_START       (8)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_8hreset_ipc_s_n_END         (8)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_9hreset_ipc_ns_n_START      (9)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_9hreset_ipc_ns_n_END        (9)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_10preset_efusec_n_START     (10)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_10preset_efusec_n_END       (10)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_11reserved_START            (11)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_11reserved_END              (11)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_12preset_wdt0_n_START       (12)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_12preset_wdt0_n_END         (12)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_13preset_wdt1_n_START       (13)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_13preset_wdt1_n_END         (13)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_14preset_wdt2_n_START       (14)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_14preset_wdt2_n_END         (14)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_15preset_timer0_n_START     (15)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_15preset_timer0_n_END       (15)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_16preset_timer1_n_START     (16)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_16preset_timer1_n_END       (16)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_17preset_timer2_n_START     (17)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_17preset_timer2_n_END       (17)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_18preset_timer3_n_START     (18)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_18preset_timer3_n_END       (18)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_19preset_timer4_n_START     (19)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_19preset_timer4_n_END       (19)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_20preset_timer5_n_START     (20)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_20preset_timer5_n_END       (20)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_21preset_timer6_n_START     (21)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_21preset_timer6_n_END       (21)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_22preset_timer7_n_START     (22)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_22preset_timer7_n_END       (22)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_23preset_timer8_n_START     (23)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_23preset_timer8_n_END       (23)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_24preset_uart0_n_START      (24)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_24preset_uart0_n_END        (24)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_25reset_rtc0_n_START        (25)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_25reset_rtc0_n_END          (25)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_26reset_rtc1_n_START        (26)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_26reset_rtc1_n_END          (26)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_27preset_pmussi_n_START     (27)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_27preset_pmussi_n_END       (27)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_28reset_jtag_auth_n_START   (28)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_28reset_jtag_auth_n_END     (28)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_29reset_cs_dapb_on_n_START  (29)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_29reset_cs_dapb_on_n_END    (29)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_30mdm_subsys_glb_START      (30)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_30mdm_subsys_glb_END        (30)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_31reserved_START            (31)
#define SOC_AO_SCTRL_SC_PERIPH_RSTDIS4_periph_rstdis4_31reserved_END              (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_UNION
 �ṹ˵��  : SC_PERIPH_RSTSTAT4 �Ĵ����ṹ���塣��ַƫ����:0x6F8����ֵ:0x0000000F�����:32
 �Ĵ���˵��: ALWAYSON�����踴λ״̬�Ĵ���4����SC_PERIPH_RSTEN4��SC_PERIPH_RSTDIS4���ý���״̬�޸ġ��⸴λ�����ź��辭��ͬ��������ˣ�����ļĴ���ֵ���ӳ���Ӧʱ����ļ������ں��������Ӧ�⸴λ״̬��
            ÿ��Bit���壺
            0����λ��ʹ�ܣ�
            1����λʹ�ܡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  periph_rststat4_0reset_mcu_ectr_n    : 1;  /* bit[0] : 0reset_mcu_ectr_n */
        unsigned int  periph_rststat4_1reset_mcu_sys_n     : 1;  /* bit[1] : 1reset_mcu_sys_n */
        unsigned int  periph_rststat4_2reset_mcu_por_n     : 1;  /* bit[2] : 2reset_mcu_por_n */
        unsigned int  periph_rststat4_3reset_mcu_dap_n     : 1;  /* bit[3] : 3reset_mcu_dap_n */
        unsigned int  periph_rststat4_4preset_cm3_timer0_n : 1;  /* bit[4] : 4preset_cm3_timer0_n */
        unsigned int  periph_rststat4_5preset_cm3_timer1_n : 1;  /* bit[5] : 5preset_cm3_timer1_n */
        unsigned int  periph_rststat4_6preset_cm3_wdt0_n   : 1;  /* bit[6] : 6preset_cm3_wdt0_n */
        unsigned int  periph_rststat4_7preset_cm3_wdt1_n   : 1;  /* bit[7] : 7preset_cm3_wdt1_n */
        unsigned int  periph_rststat4_8hreset_ipc_s_n      : 1;  /* bit[8] : 8hreset_ipc_s_n */
        unsigned int  periph_rststat4_9hreset_ipc_ns_n     : 1;  /* bit[9] : 9hreset_ipc_ns_n */
        unsigned int  periph_rststat4_10preset_efusec_n    : 1;  /* bit[10]: 10preset_efusec_n */
        unsigned int  periph_rststat4_11reserved           : 1;  /* bit[11]: 11reserved */
        unsigned int  periph_rststat4_12preset_wdt0_n      : 1;  /* bit[12]: 12preset_wdt0_n */
        unsigned int  periph_rststat4_13preset_wdt1_n      : 1;  /* bit[13]: 13preset_wdt1_n */
        unsigned int  periph_rststat4_14preset_wdt2_n      : 1;  /* bit[14]: 14preset_wdt2_n */
        unsigned int  periph_rststat4_15preset_timer0_n    : 1;  /* bit[15]: 15preset_timer0_n */
        unsigned int  periph_rststat4_16preset_timer1_n    : 1;  /* bit[16]: 16preset_timer1_n */
        unsigned int  periph_rststat4_17preset_timer2_n    : 1;  /* bit[17]: 17preset_timer2_n */
        unsigned int  periph_rststat4_18preset_timer3_n    : 1;  /* bit[18]: 18preset_timer3_n */
        unsigned int  periph_rststat4_19preset_timer4_n    : 1;  /* bit[19]: 19preset_timer4_n */
        unsigned int  periph_rststat4_20preset_timer5_n    : 1;  /* bit[20]: 20preset_timer5_n */
        unsigned int  periph_rststat4_21preset_timer6_n    : 1;  /* bit[21]: 21preset_timer6_n */
        unsigned int  periph_rststat4_22preset_timer7_n    : 1;  /* bit[22]: 22preset_timer7_n */
        unsigned int  periph_rststat4_23preset_timer8_n    : 1;  /* bit[23]: 23preset_timer8_n */
        unsigned int  periph_rststat4_24preset_uart0_n     : 1;  /* bit[24]: 24preset_uart0_n */
        unsigned int  periph_rststat4_25reset_rtc0_n       : 1;  /* bit[25]: 25reset_rtc0_n */
        unsigned int  periph_rststat4_26reset_rtc1_n       : 1;  /* bit[26]: 26reset_rtc1_n */
        unsigned int  periph_rststat4_27preset_pmussi_n    : 1;  /* bit[27]: 27preset_pmussi_n */
        unsigned int  periph_rststat4_28reset_jtag_auth_n  : 1;  /* bit[28]: 28reset_jtag_auth_n */
        unsigned int  periph_rststat4_29reset_cs_dapb_on_n : 1;  /* bit[29]: 29reset_cs_dapb_on_n */
        unsigned int  periph_rststat4_30mdm_subsys_glb     : 1;  /* bit[30]: 30mdm_subsys_glb Modem��ϵͳȫ�ָ�λ */
        unsigned int  periph_rststat4_31reserved           : 1;  /* bit[31]: reserved */
    } reg;
} SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_UNION;
#endif
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_0reset_mcu_ectr_n_START     (0)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_0reset_mcu_ectr_n_END       (0)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_1reset_mcu_sys_n_START      (1)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_1reset_mcu_sys_n_END        (1)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_2reset_mcu_por_n_START      (2)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_2reset_mcu_por_n_END        (2)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_3reset_mcu_dap_n_START      (3)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_3reset_mcu_dap_n_END        (3)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_4preset_cm3_timer0_n_START  (4)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_4preset_cm3_timer0_n_END    (4)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_5preset_cm3_timer1_n_START  (5)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_5preset_cm3_timer1_n_END    (5)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_6preset_cm3_wdt0_n_START    (6)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_6preset_cm3_wdt0_n_END      (6)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_7preset_cm3_wdt1_n_START    (7)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_7preset_cm3_wdt1_n_END      (7)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_8hreset_ipc_s_n_START       (8)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_8hreset_ipc_s_n_END         (8)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_9hreset_ipc_ns_n_START      (9)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_9hreset_ipc_ns_n_END        (9)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_10preset_efusec_n_START     (10)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_10preset_efusec_n_END       (10)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_11reserved_START            (11)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_11reserved_END              (11)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_12preset_wdt0_n_START       (12)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_12preset_wdt0_n_END         (12)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_13preset_wdt1_n_START       (13)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_13preset_wdt1_n_END         (13)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_14preset_wdt2_n_START       (14)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_14preset_wdt2_n_END         (14)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_15preset_timer0_n_START     (15)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_15preset_timer0_n_END       (15)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_16preset_timer1_n_START     (16)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_16preset_timer1_n_END       (16)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_17preset_timer2_n_START     (17)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_17preset_timer2_n_END       (17)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_18preset_timer3_n_START     (18)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_18preset_timer3_n_END       (18)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_19preset_timer4_n_START     (19)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_19preset_timer4_n_END       (19)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_20preset_timer5_n_START     (20)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_20preset_timer5_n_END       (20)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_21preset_timer6_n_START     (21)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_21preset_timer6_n_END       (21)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_22preset_timer7_n_START     (22)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_22preset_timer7_n_END       (22)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_23preset_timer8_n_START     (23)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_23preset_timer8_n_END       (23)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_24preset_uart0_n_START      (24)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_24preset_uart0_n_END        (24)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_25reset_rtc0_n_START        (25)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_25reset_rtc0_n_END          (25)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_26reset_rtc1_n_START        (26)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_26reset_rtc1_n_END          (26)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_27preset_pmussi_n_START     (27)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_27preset_pmussi_n_END       (27)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_28reset_jtag_auth_n_START   (28)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_28reset_jtag_auth_n_END     (28)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_29reset_cs_dapb_on_n_START  (29)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_29reset_cs_dapb_on_n_END    (29)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_30mdm_subsys_glb_START      (30)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_30mdm_subsys_glb_END        (30)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_31reserved_START            (31)
#define SOC_AO_SCTRL_SC_PERIPH_RSTSTAT4_periph_rststat4_31reserved_END              (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_PERIPH_RSTEN5_UNION
 �ṹ˵��  : SC_PERIPH_RSTEN5 �Ĵ����ṹ���塣��ַƫ����:0x6FC����ֵ:0x00000000�����:32
 �Ĵ���˵��: ALWAYSON������λʹ�ܼĴ���5������ʹ��SC_PERIPH_RSTSTAT5��λ���Ա���д1����ӦIP���븴λ״̬��д0��Ӱ�츴λ״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved : 32; /* bit[0-31]: ��λʹ�ܶ������£�д1��λʹ�ܣ���
                                                   [31:0] �� Reserved */
    } reg;
} SOC_AO_SCTRL_SC_PERIPH_RSTEN5_UNION;
#endif


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_PERIPH_RSTDIS5_UNION
 �ṹ˵��  : SC_PERIPH_RSTDIS5 �Ĵ����ṹ���塣��ַƫ����:0x700����ֵ:0x00000000�����:32
 �Ĵ���˵��: ALWAYSON�����踴λ��ֹ�Ĵ���5�����ڽ�ֹSC_PERIPH_RSTSTAT5��λ���Ա���д1����Ӧ��������λ��д0��Ӱ�츴λʹ�ܵ�״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved : 32; /* bit[0-31]: ��λ��ֹ�������£�д1��λ�������
                                                   [31:0] �� Reserved */
    } reg;
} SOC_AO_SCTRL_SC_PERIPH_RSTDIS5_UNION;
#endif


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_PERIPH_RSTSTAT5_UNION
 �ṹ˵��  : SC_PERIPH_RSTSTAT5 �Ĵ����ṹ���塣��ַƫ����:0x704����ֵ:0x00000000�����:32
 �Ĵ���˵��: ALWAYSON�����踴λ״̬�Ĵ���5����SC_PERIPH_RSTEN5��SC_PERIPH_RSTDIS5���ý���״̬�޸ġ��⸴λ�����ź��辭��ͬ��������ˣ�����ļĴ���ֵ���ӳ���Ӧʱ����ļ������ں��������Ӧ�⸴λ״̬��
            ÿ��Bit���壺
            0����λ��ʹ�ܣ�
            1����λʹ�ܡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved : 32; /* bit[0-31]: ��λ״̬�������£��ߵ�ƽ��ʾ���ڸ�λ����
                                                   [31:0] �� Reserved */
    } reg;
} SOC_AO_SCTRL_SC_PERIPH_RSTSTAT5_UNION;
#endif


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_PW_CLKEN0_UNION
 �ṹ˵��  : SC_PW_CLKEN0 �Ĵ����ṹ���塣��ַƫ����:0x800����ֵ:0x00000000�����:32
 �Ĵ���˵��: ������ʱ��ʹ�ܼĴ��������ڿ��Ƹ��������ܵ�ʱ��ʹ�ܡ�����Ӧλд1ʹ��SC_PW_CLK_STAT0��Ӧ��ѹ��ʱ�ӣ�д0��Ӱ�졣�üĴ���ֻ���ϵ縴λʱ����λ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pw_clken0_0peri         : 1;  /* bit[0]    : [0] �����������͹��Ŀ����ź���Ӳ�����ƣ����������Ч����Դ���ⲿPMUֱ���ṩ����mtcmos timeoutָʾ�۲���Ч�� */
        unsigned int  pw_clken0_1g3d          : 1;  /* bit[1]    : [1] ��G3D�µ����� */
        unsigned int  pw_clken0_2codecisp     : 1;  /* bit[2]    : [2] ��CODEC+ISP�µ�����  */
        unsigned int  pw_clken0_3reserved     : 1;  /* bit[3]    : [3] ��reserved */
        unsigned int  pw_clken0_4mcpu         : 1;  /* bit[4]    : [4] ��MCPU�µ�����  */
        unsigned int  pw_clken0_5bbpharqmem   : 1;  /* bit[5]    : [5] ��BBP Harq Memory�����µ������  */
        unsigned int  pw_clken0_6reserved     : 1;  /* bit[6]    : [6] ��reserved  */
        unsigned int  pw_clken0_7reserved     : 1;  /* bit[7]    : [7] ��reserved */
        unsigned int  pw_clken0_8hifi         : 1;  /* bit[8]    : [8] ��HIFI�µ��� �� */
        unsigned int  pw_clken0_9reserved     : 1;  /* bit[9]    : [9] ��reserved */
        unsigned int  pw_clken0_10reserved    : 1;  /* bit[10]   : [10] ��reserved */
        unsigned int  pw_clken0_11reserved    : 1;  /* bit[11]   : [11] ��reserved */
        unsigned int  pw_clken0_12acpucluster : 1;  /* bit[12]   : [12] ��ACPU SCU��L2C�߼��µ�������MTCMOS��������Դͨ������PMU����ʵ�ֿ��أ��Ĵ�������pw_en0_12acpucluter�������õ�Դ�ȶ�ʱ�䣬��Դ�ȶ�ʱ��ɲ�ѯ����ACPU SCU��L2C����ISOͬʱ����ACPU L2����MEM�����źš� */
        unsigned int  pw_clken0_13reserved    : 1;  /* bit[13]   : [13] ��reserved */
        unsigned int  pw_clken0_14reserved    : 1;  /* bit[14]   : [14] ��reserved */
        unsigned int  pw_clken0_15reserved    : 1;  /* bit[15]   : [15] ��reserved */
        unsigned int  pw_clken0_31reserved    : 16; /* bit[16-31]: [31:16] ��reserved */
    } reg;
} SOC_AO_SCTRL_SC_PW_CLKEN0_UNION;
#endif
#define SOC_AO_SCTRL_SC_PW_CLKEN0_pw_clken0_0peri_START          (0)
#define SOC_AO_SCTRL_SC_PW_CLKEN0_pw_clken0_0peri_END            (0)
#define SOC_AO_SCTRL_SC_PW_CLKEN0_pw_clken0_1g3d_START           (1)
#define SOC_AO_SCTRL_SC_PW_CLKEN0_pw_clken0_1g3d_END             (1)
#define SOC_AO_SCTRL_SC_PW_CLKEN0_pw_clken0_2codecisp_START      (2)
#define SOC_AO_SCTRL_SC_PW_CLKEN0_pw_clken0_2codecisp_END        (2)
#define SOC_AO_SCTRL_SC_PW_CLKEN0_pw_clken0_3reserved_START      (3)
#define SOC_AO_SCTRL_SC_PW_CLKEN0_pw_clken0_3reserved_END        (3)
#define SOC_AO_SCTRL_SC_PW_CLKEN0_pw_clken0_4mcpu_START          (4)
#define SOC_AO_SCTRL_SC_PW_CLKEN0_pw_clken0_4mcpu_END            (4)
#define SOC_AO_SCTRL_SC_PW_CLKEN0_pw_clken0_5bbpharqmem_START    (5)
#define SOC_AO_SCTRL_SC_PW_CLKEN0_pw_clken0_5bbpharqmem_END      (5)
#define SOC_AO_SCTRL_SC_PW_CLKEN0_pw_clken0_6reserved_START      (6)
#define SOC_AO_SCTRL_SC_PW_CLKEN0_pw_clken0_6reserved_END        (6)
#define SOC_AO_SCTRL_SC_PW_CLKEN0_pw_clken0_7reserved_START      (7)
#define SOC_AO_SCTRL_SC_PW_CLKEN0_pw_clken0_7reserved_END        (7)
#define SOC_AO_SCTRL_SC_PW_CLKEN0_pw_clken0_8hifi_START          (8)
#define SOC_AO_SCTRL_SC_PW_CLKEN0_pw_clken0_8hifi_END            (8)
#define SOC_AO_SCTRL_SC_PW_CLKEN0_pw_clken0_9reserved_START      (9)
#define SOC_AO_SCTRL_SC_PW_CLKEN0_pw_clken0_9reserved_END        (9)
#define SOC_AO_SCTRL_SC_PW_CLKEN0_pw_clken0_10reserved_START     (10)
#define SOC_AO_SCTRL_SC_PW_CLKEN0_pw_clken0_10reserved_END       (10)
#define SOC_AO_SCTRL_SC_PW_CLKEN0_pw_clken0_11reserved_START     (11)
#define SOC_AO_SCTRL_SC_PW_CLKEN0_pw_clken0_11reserved_END       (11)
#define SOC_AO_SCTRL_SC_PW_CLKEN0_pw_clken0_12acpucluster_START  (12)
#define SOC_AO_SCTRL_SC_PW_CLKEN0_pw_clken0_12acpucluster_END    (12)
#define SOC_AO_SCTRL_SC_PW_CLKEN0_pw_clken0_13reserved_START     (13)
#define SOC_AO_SCTRL_SC_PW_CLKEN0_pw_clken0_13reserved_END       (13)
#define SOC_AO_SCTRL_SC_PW_CLKEN0_pw_clken0_14reserved_START     (14)
#define SOC_AO_SCTRL_SC_PW_CLKEN0_pw_clken0_14reserved_END       (14)
#define SOC_AO_SCTRL_SC_PW_CLKEN0_pw_clken0_15reserved_START     (15)
#define SOC_AO_SCTRL_SC_PW_CLKEN0_pw_clken0_15reserved_END       (15)
#define SOC_AO_SCTRL_SC_PW_CLKEN0_pw_clken0_31reserved_START     (16)
#define SOC_AO_SCTRL_SC_PW_CLKEN0_pw_clken0_31reserved_END       (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_PW_CLKDIS0_UNION
 �ṹ˵��  : SC_PW_CLKDIS0 �Ĵ����ṹ���塣��ַƫ����:0x804����ֵ:0x00000000�����:32
 �Ĵ���˵��: ������ʱ�ӽ�ֹ�Ĵ��������ڿ��Ƹ��������ܵ�ʱ�ӽ�ֹ������Ӧλд1��ֹSC_PW_CLK_STAT0��Ӧ������ʱ�ӣ�д0��Ӱ�졣�üĴ���ֻ���ϵ縴λʱ����λ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pw_clkdis0_0peri         : 1;  /* bit[0]    : [0] �����������͹��Ŀ����ź���Ӳ�����ƣ����������Ч����Դ���ⲿPMUֱ���ṩ����mtcmos timeoutָʾ�۲���Ч�� */
        unsigned int  pw_clkdis0_1g3d          : 1;  /* bit[1]    : [1] ��G3D�µ����� */
        unsigned int  pw_clkdis0_2codecisp     : 1;  /* bit[2]    : [2] ��CODEC+ISP�µ�����  */
        unsigned int  pw_clkdis0_3reserved     : 1;  /* bit[3]    : [3] ��reserved */
        unsigned int  pw_clkdis0_4mcpu         : 1;  /* bit[4]    : [4] ��MCPU�µ�����  */
        unsigned int  pw_clkdis0_5bbpharqmem   : 1;  /* bit[5]    : [5] ��BBP Harq Memory�����µ������  */
        unsigned int  pw_clkdis0_6reserved     : 1;  /* bit[6]    : [6] ��reserved  */
        unsigned int  pw_clkdis0_7reserved     : 1;  /* bit[7]    : [7] ��reserved */
        unsigned int  pw_clkdis0_8hifi         : 1;  /* bit[8]    : [8] ��HIFI�µ��� �� */
        unsigned int  pw_clkdis0_9reserved     : 1;  /* bit[9]    : [9] ��reserved */
        unsigned int  pw_clkdis0_10reserved    : 1;  /* bit[10]   : [10] ��reserved */
        unsigned int  pw_clkdis0_11reserved    : 1;  /* bit[11]   : [11] ��reserved */
        unsigned int  pw_clkdis0_12acpucluster : 1;  /* bit[12]   : [12] ��ACPU SCU��L2C�߼��µ�������MTCMOS��������Դͨ������PMU����ʵ�ֿ��أ��Ĵ�������pw_en0_12acpucluter�������õ�Դ�ȶ�ʱ�䣬��Դ�ȶ�ʱ��ɲ�ѯ����ACPU SCU��L2C����ISOͬʱ����ACPU L2����MEM�����źš� */
        unsigned int  pw_clkdis0_13reserved    : 1;  /* bit[13]   : [13] ��reserved */
        unsigned int  pw_clkdis0_14reserved    : 1;  /* bit[14]   : [14] ��reserved */
        unsigned int  pw_clkdis0_15reserved    : 1;  /* bit[15]   : [15] ��reserved */
        unsigned int  pw_clkdis0_31reserved    : 16; /* bit[16-31]: [31:16] ��reserved */
    } reg;
} SOC_AO_SCTRL_SC_PW_CLKDIS0_UNION;
#endif
#define SOC_AO_SCTRL_SC_PW_CLKDIS0_pw_clkdis0_0peri_START          (0)
#define SOC_AO_SCTRL_SC_PW_CLKDIS0_pw_clkdis0_0peri_END            (0)
#define SOC_AO_SCTRL_SC_PW_CLKDIS0_pw_clkdis0_1g3d_START           (1)
#define SOC_AO_SCTRL_SC_PW_CLKDIS0_pw_clkdis0_1g3d_END             (1)
#define SOC_AO_SCTRL_SC_PW_CLKDIS0_pw_clkdis0_2codecisp_START      (2)
#define SOC_AO_SCTRL_SC_PW_CLKDIS0_pw_clkdis0_2codecisp_END        (2)
#define SOC_AO_SCTRL_SC_PW_CLKDIS0_pw_clkdis0_3reserved_START      (3)
#define SOC_AO_SCTRL_SC_PW_CLKDIS0_pw_clkdis0_3reserved_END        (3)
#define SOC_AO_SCTRL_SC_PW_CLKDIS0_pw_clkdis0_4mcpu_START          (4)
#define SOC_AO_SCTRL_SC_PW_CLKDIS0_pw_clkdis0_4mcpu_END            (4)
#define SOC_AO_SCTRL_SC_PW_CLKDIS0_pw_clkdis0_5bbpharqmem_START    (5)
#define SOC_AO_SCTRL_SC_PW_CLKDIS0_pw_clkdis0_5bbpharqmem_END      (5)
#define SOC_AO_SCTRL_SC_PW_CLKDIS0_pw_clkdis0_6reserved_START      (6)
#define SOC_AO_SCTRL_SC_PW_CLKDIS0_pw_clkdis0_6reserved_END        (6)
#define SOC_AO_SCTRL_SC_PW_CLKDIS0_pw_clkdis0_7reserved_START      (7)
#define SOC_AO_SCTRL_SC_PW_CLKDIS0_pw_clkdis0_7reserved_END        (7)
#define SOC_AO_SCTRL_SC_PW_CLKDIS0_pw_clkdis0_8hifi_START          (8)
#define SOC_AO_SCTRL_SC_PW_CLKDIS0_pw_clkdis0_8hifi_END            (8)
#define SOC_AO_SCTRL_SC_PW_CLKDIS0_pw_clkdis0_9reserved_START      (9)
#define SOC_AO_SCTRL_SC_PW_CLKDIS0_pw_clkdis0_9reserved_END        (9)
#define SOC_AO_SCTRL_SC_PW_CLKDIS0_pw_clkdis0_10reserved_START     (10)
#define SOC_AO_SCTRL_SC_PW_CLKDIS0_pw_clkdis0_10reserved_END       (10)
#define SOC_AO_SCTRL_SC_PW_CLKDIS0_pw_clkdis0_11reserved_START     (11)
#define SOC_AO_SCTRL_SC_PW_CLKDIS0_pw_clkdis0_11reserved_END       (11)
#define SOC_AO_SCTRL_SC_PW_CLKDIS0_pw_clkdis0_12acpucluster_START  (12)
#define SOC_AO_SCTRL_SC_PW_CLKDIS0_pw_clkdis0_12acpucluster_END    (12)
#define SOC_AO_SCTRL_SC_PW_CLKDIS0_pw_clkdis0_13reserved_START     (13)
#define SOC_AO_SCTRL_SC_PW_CLKDIS0_pw_clkdis0_13reserved_END       (13)
#define SOC_AO_SCTRL_SC_PW_CLKDIS0_pw_clkdis0_14reserved_START     (14)
#define SOC_AO_SCTRL_SC_PW_CLKDIS0_pw_clkdis0_14reserved_END       (14)
#define SOC_AO_SCTRL_SC_PW_CLKDIS0_pw_clkdis0_15reserved_START     (15)
#define SOC_AO_SCTRL_SC_PW_CLKDIS0_pw_clkdis0_15reserved_END       (15)
#define SOC_AO_SCTRL_SC_PW_CLKDIS0_pw_clkdis0_31reserved_START     (16)
#define SOC_AO_SCTRL_SC_PW_CLKDIS0_pw_clkdis0_31reserved_END       (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_PW_CLK_STAT0_UNION
 �ṹ˵��  : SC_PW_CLK_STAT0 �Ĵ����ṹ���塣��ַƫ����:0x808����ֵ:0x00003001�����:32
 �Ĵ���˵��: �µ���ʱ��״̬��ͨ��SC_PW_CLKEN0��SC_PW_CLKDIS0�޸�״̬��
            ÿ��Bit���壺
            0���رգ�
            1���򿪡�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pw_clk_stat0_0peri         : 1;  /* bit[0]    : [0] �����������͹��Ŀ����ź���Ӳ�����ƣ����������Ч����Դ���ⲿPMUֱ���ṩ����mtcmos timeoutָʾ�۲���Ч�� */
        unsigned int  pw_clk_stat0_1g3d          : 1;  /* bit[1]    : [1] ��G3D�µ����� */
        unsigned int  pw_clk_stat0_2codecisp     : 1;  /* bit[2]    : [2] ��CODEC+ISP�µ�����  */
        unsigned int  pw_clk_stat0_3reserved     : 1;  /* bit[3]    : [3] ��reserved */
        unsigned int  pw_clk_stat0_4mcpu         : 1;  /* bit[4]    : [4] ��MCPU�µ�����  */
        unsigned int  pw_clk_stat0_5bbpharqmem   : 1;  /* bit[5]    : [5] ��BBP Harq Memory�����µ������  */
        unsigned int  pw_clk_stat0_6reserved     : 1;  /* bit[6]    : [6] ��reserved  */
        unsigned int  pw_clk_stat0_7reserved     : 1;  /* bit[7]    : [7] ��reserved */
        unsigned int  pw_clk_stat0_8hifi         : 1;  /* bit[8]    : [8] ��HIFI�µ��� �� */
        unsigned int  pw_clk_stat0_9reserved     : 1;  /* bit[9]    : [9] ��reserved */
        unsigned int  pw_clk_stat0_10reserved    : 1;  /* bit[10]   : [10] ��reserved */
        unsigned int  pw_clk_stat0_11reserved    : 1;  /* bit[11]   : [11] ��reserved */
        unsigned int  pw_clk_stat0_12acpucluster : 1;  /* bit[12]   : [12] ��ACPU SCU��L2C�߼��µ�������MTCMOS��������Դͨ������PMU����ʵ�ֿ��أ��Ĵ�������pw_en0_12acpucluter�������õ�Դ�ȶ�ʱ�䣬��Դ�ȶ�ʱ��ɲ�ѯ����ACPU SCU��L2C����ISOͬʱ����ACPU L2����MEM�����źš� */
        unsigned int  pw_clk_stat0_13reserved    : 1;  /* bit[13]   : [13] ��reserved */
        unsigned int  pw_clk_stat0_14reserved    : 1;  /* bit[14]   : [14] ��reserved */
        unsigned int  pw_clk_stat0_15reserved    : 1;  /* bit[15]   : [15] ��reserved */
        unsigned int  pw_clk_stat0_31reserved    : 16; /* bit[16-31]: [31:16] ��reserved */
    } reg;
} SOC_AO_SCTRL_SC_PW_CLK_STAT0_UNION;
#endif
#define SOC_AO_SCTRL_SC_PW_CLK_STAT0_pw_clk_stat0_0peri_START          (0)
#define SOC_AO_SCTRL_SC_PW_CLK_STAT0_pw_clk_stat0_0peri_END            (0)
#define SOC_AO_SCTRL_SC_PW_CLK_STAT0_pw_clk_stat0_1g3d_START           (1)
#define SOC_AO_SCTRL_SC_PW_CLK_STAT0_pw_clk_stat0_1g3d_END             (1)
#define SOC_AO_SCTRL_SC_PW_CLK_STAT0_pw_clk_stat0_2codecisp_START      (2)
#define SOC_AO_SCTRL_SC_PW_CLK_STAT0_pw_clk_stat0_2codecisp_END        (2)
#define SOC_AO_SCTRL_SC_PW_CLK_STAT0_pw_clk_stat0_3reserved_START      (3)
#define SOC_AO_SCTRL_SC_PW_CLK_STAT0_pw_clk_stat0_3reserved_END        (3)
#define SOC_AO_SCTRL_SC_PW_CLK_STAT0_pw_clk_stat0_4mcpu_START          (4)
#define SOC_AO_SCTRL_SC_PW_CLK_STAT0_pw_clk_stat0_4mcpu_END            (4)
#define SOC_AO_SCTRL_SC_PW_CLK_STAT0_pw_clk_stat0_5bbpharqmem_START    (5)
#define SOC_AO_SCTRL_SC_PW_CLK_STAT0_pw_clk_stat0_5bbpharqmem_END      (5)
#define SOC_AO_SCTRL_SC_PW_CLK_STAT0_pw_clk_stat0_6reserved_START      (6)
#define SOC_AO_SCTRL_SC_PW_CLK_STAT0_pw_clk_stat0_6reserved_END        (6)
#define SOC_AO_SCTRL_SC_PW_CLK_STAT0_pw_clk_stat0_7reserved_START      (7)
#define SOC_AO_SCTRL_SC_PW_CLK_STAT0_pw_clk_stat0_7reserved_END        (7)
#define SOC_AO_SCTRL_SC_PW_CLK_STAT0_pw_clk_stat0_8hifi_START          (8)
#define SOC_AO_SCTRL_SC_PW_CLK_STAT0_pw_clk_stat0_8hifi_END            (8)
#define SOC_AO_SCTRL_SC_PW_CLK_STAT0_pw_clk_stat0_9reserved_START      (9)
#define SOC_AO_SCTRL_SC_PW_CLK_STAT0_pw_clk_stat0_9reserved_END        (9)
#define SOC_AO_SCTRL_SC_PW_CLK_STAT0_pw_clk_stat0_10reserved_START     (10)
#define SOC_AO_SCTRL_SC_PW_CLK_STAT0_pw_clk_stat0_10reserved_END       (10)
#define SOC_AO_SCTRL_SC_PW_CLK_STAT0_pw_clk_stat0_11reserved_START     (11)
#define SOC_AO_SCTRL_SC_PW_CLK_STAT0_pw_clk_stat0_11reserved_END       (11)
#define SOC_AO_SCTRL_SC_PW_CLK_STAT0_pw_clk_stat0_12acpucluster_START  (12)
#define SOC_AO_SCTRL_SC_PW_CLK_STAT0_pw_clk_stat0_12acpucluster_END    (12)
#define SOC_AO_SCTRL_SC_PW_CLK_STAT0_pw_clk_stat0_13reserved_START     (13)
#define SOC_AO_SCTRL_SC_PW_CLK_STAT0_pw_clk_stat0_13reserved_END       (13)
#define SOC_AO_SCTRL_SC_PW_CLK_STAT0_pw_clk_stat0_14reserved_START     (14)
#define SOC_AO_SCTRL_SC_PW_CLK_STAT0_pw_clk_stat0_14reserved_END       (14)
#define SOC_AO_SCTRL_SC_PW_CLK_STAT0_pw_clk_stat0_15reserved_START     (15)
#define SOC_AO_SCTRL_SC_PW_CLK_STAT0_pw_clk_stat0_15reserved_END       (15)
#define SOC_AO_SCTRL_SC_PW_CLK_STAT0_pw_clk_stat0_31reserved_START     (16)
#define SOC_AO_SCTRL_SC_PW_CLK_STAT0_pw_clk_stat0_31reserved_END       (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_PW_RSTEN0_UNION
 �ṹ˵��  : SC_PW_RSTEN0 �Ĵ����ṹ���塣��ַƫ����:0x810����ֵ:0x00000000�����:32
 �Ĵ���˵��: ��������λʹ�ܼĴ��������ڿ��Ƹ��������ܵĸ�λʹ�ܡ�����Ӧλд1ʹ��SC_PW_RST_STAT0��Ӧ��������λ�źţ������븴λ̬����д0��Ӱ�졣�üĴ���ֻ���ϵ縴λʱ����λ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pw_rsten0_0peri         : 1;  /* bit[0]    : [0] �����������͹��Ŀ����ź���Ӳ�����ƣ����������Ч����Դ���ⲿPMUֱ���ṩ����mtcmos timeoutָʾ�۲���Ч�� */
        unsigned int  pw_rsten0_1g3d          : 1;  /* bit[1]    : [1] ��G3D�µ����� */
        unsigned int  pw_rsten0_2codecisp     : 1;  /* bit[2]    : [2] ��CODEC+ISP�µ�����  */
        unsigned int  pw_rsten0_3reserved     : 1;  /* bit[3]    : [3] ��reserved */
        unsigned int  pw_rsten0_4mcpu         : 1;  /* bit[4]    : [4] ��MCPU�µ�����  */
        unsigned int  pw_rsten0_5bbpharqmem   : 1;  /* bit[5]    : [5] ��BBP Harq Memory�����µ������  */
        unsigned int  pw_rsten0_6reserved     : 1;  /* bit[6]    : [6] ��reserved  */
        unsigned int  pw_rsten0_7reserved     : 1;  /* bit[7]    : [7] ��reserved */
        unsigned int  pw_rsten0_8hifi         : 1;  /* bit[8]    : [8] ��HIFI�µ��� �� */
        unsigned int  pw_rsten0_9reserved     : 1;  /* bit[9]    : [9] ��reserved */
        unsigned int  pw_rsten0_10reserved    : 1;  /* bit[10]   : [10] ��reserved */
        unsigned int  pw_rsten0_11reserved    : 1;  /* bit[11]   : [11] ��reserved */
        unsigned int  pw_rsten0_12acpucluster : 1;  /* bit[12]   : [12] ��ACPU SCU��L2C�߼��µ�������MTCMOS��������Դͨ������PMU����ʵ�ֿ��أ��Ĵ�������pw_en0_12acpucluter�������õ�Դ�ȶ�ʱ�䣬��Դ�ȶ�ʱ��ɲ�ѯ����ACPU SCU��L2C����ISOͬʱ����ACPU L2����MEM�����źš� */
        unsigned int  pw_rsten0_13reserved    : 1;  /* bit[13]   : [13] ��reserved */
        unsigned int  pw_rsten0_14reserved    : 1;  /* bit[14]   : [14] ��reserved */
        unsigned int  pw_rsten0_15reserved    : 1;  /* bit[15]   : [15] ��reserved */
        unsigned int  pw_rsten0_31reserved    : 16; /* bit[16-31]: [31:16] ��reserved */
    } reg;
} SOC_AO_SCTRL_SC_PW_RSTEN0_UNION;
#endif
#define SOC_AO_SCTRL_SC_PW_RSTEN0_pw_rsten0_0peri_START          (0)
#define SOC_AO_SCTRL_SC_PW_RSTEN0_pw_rsten0_0peri_END            (0)
#define SOC_AO_SCTRL_SC_PW_RSTEN0_pw_rsten0_1g3d_START           (1)
#define SOC_AO_SCTRL_SC_PW_RSTEN0_pw_rsten0_1g3d_END             (1)
#define SOC_AO_SCTRL_SC_PW_RSTEN0_pw_rsten0_2codecisp_START      (2)
#define SOC_AO_SCTRL_SC_PW_RSTEN0_pw_rsten0_2codecisp_END        (2)
#define SOC_AO_SCTRL_SC_PW_RSTEN0_pw_rsten0_3reserved_START      (3)
#define SOC_AO_SCTRL_SC_PW_RSTEN0_pw_rsten0_3reserved_END        (3)
#define SOC_AO_SCTRL_SC_PW_RSTEN0_pw_rsten0_4mcpu_START          (4)
#define SOC_AO_SCTRL_SC_PW_RSTEN0_pw_rsten0_4mcpu_END            (4)
#define SOC_AO_SCTRL_SC_PW_RSTEN0_pw_rsten0_5bbpharqmem_START    (5)
#define SOC_AO_SCTRL_SC_PW_RSTEN0_pw_rsten0_5bbpharqmem_END      (5)
#define SOC_AO_SCTRL_SC_PW_RSTEN0_pw_rsten0_6reserved_START      (6)
#define SOC_AO_SCTRL_SC_PW_RSTEN0_pw_rsten0_6reserved_END        (6)
#define SOC_AO_SCTRL_SC_PW_RSTEN0_pw_rsten0_7reserved_START      (7)
#define SOC_AO_SCTRL_SC_PW_RSTEN0_pw_rsten0_7reserved_END        (7)
#define SOC_AO_SCTRL_SC_PW_RSTEN0_pw_rsten0_8hifi_START          (8)
#define SOC_AO_SCTRL_SC_PW_RSTEN0_pw_rsten0_8hifi_END            (8)
#define SOC_AO_SCTRL_SC_PW_RSTEN0_pw_rsten0_9reserved_START      (9)
#define SOC_AO_SCTRL_SC_PW_RSTEN0_pw_rsten0_9reserved_END        (9)
#define SOC_AO_SCTRL_SC_PW_RSTEN0_pw_rsten0_10reserved_START     (10)
#define SOC_AO_SCTRL_SC_PW_RSTEN0_pw_rsten0_10reserved_END       (10)
#define SOC_AO_SCTRL_SC_PW_RSTEN0_pw_rsten0_11reserved_START     (11)
#define SOC_AO_SCTRL_SC_PW_RSTEN0_pw_rsten0_11reserved_END       (11)
#define SOC_AO_SCTRL_SC_PW_RSTEN0_pw_rsten0_12acpucluster_START  (12)
#define SOC_AO_SCTRL_SC_PW_RSTEN0_pw_rsten0_12acpucluster_END    (12)
#define SOC_AO_SCTRL_SC_PW_RSTEN0_pw_rsten0_13reserved_START     (13)
#define SOC_AO_SCTRL_SC_PW_RSTEN0_pw_rsten0_13reserved_END       (13)
#define SOC_AO_SCTRL_SC_PW_RSTEN0_pw_rsten0_14reserved_START     (14)
#define SOC_AO_SCTRL_SC_PW_RSTEN0_pw_rsten0_14reserved_END       (14)
#define SOC_AO_SCTRL_SC_PW_RSTEN0_pw_rsten0_15reserved_START     (15)
#define SOC_AO_SCTRL_SC_PW_RSTEN0_pw_rsten0_15reserved_END       (15)
#define SOC_AO_SCTRL_SC_PW_RSTEN0_pw_rsten0_31reserved_START     (16)
#define SOC_AO_SCTRL_SC_PW_RSTEN0_pw_rsten0_31reserved_END       (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_PW_RSTDIS0_UNION
 �ṹ˵��  : SC_PW_RSTDIS0 �Ĵ����ṹ���塣��ַƫ����:0x814����ֵ:0x00000000�����:32
 �Ĵ���˵��: ��������λ��ֹ�Ĵ��������ڿ��Ƹ��������ܵĸ�λ��ֹ������Ӧλд1��ֹSC_PW_RST_STAT0��Ӧ��������λ�źţ����˳���λ̬����д0��Ӱ�졣�üĴ���ֻ���ϵ縴λʱ����λ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pw_rstdis0_0peri         : 1;  /* bit[0]    : [0] �����������͹��Ŀ����ź���Ӳ�����ƣ����������Ч����Դ���ⲿPMUֱ���ṩ����mtcmos timeoutָʾ�۲���Ч�� */
        unsigned int  pw_rstdis0_1g3d          : 1;  /* bit[1]    : [1] ��G3D�µ����� */
        unsigned int  pw_rstdis0_2codecisp     : 1;  /* bit[2]    : [2] ��CODEC+ISP�µ�����  */
        unsigned int  pw_rstdis0_3reserved     : 1;  /* bit[3]    : [3] ��reserved */
        unsigned int  pw_rstdis0_4mcpu         : 1;  /* bit[4]    : [4] ��MCPU�µ�����  */
        unsigned int  pw_rstdis0_5bbpharqmem   : 1;  /* bit[5]    : [5] ��BBP Harq Memory�����µ������  */
        unsigned int  pw_rstdis0_6reserved     : 1;  /* bit[6]    : [6] ��reserved  */
        unsigned int  pw_rstdis0_7reserved     : 1;  /* bit[7]    : [7] ��reserved */
        unsigned int  pw_rstdis0_8hifi         : 1;  /* bit[8]    : [8] ��HIFI�µ��� �� */
        unsigned int  pw_rstdis0_9reserved     : 1;  /* bit[9]    : [9] ��reserved */
        unsigned int  pw_rstdis0_10reserved    : 1;  /* bit[10]   : [10] ��reserved */
        unsigned int  pw_rstdis0_11reserved    : 1;  /* bit[11]   : [11] ��reserved */
        unsigned int  pw_rstdis0_12acpucluster : 1;  /* bit[12]   : [12] ��ACPU SCU��L2C�߼��µ�������MTCMOS��������Դͨ������PMU����ʵ�ֿ��أ��Ĵ�������pw_en0_12acpucluter�������õ�Դ�ȶ�ʱ�䣬��Դ�ȶ�ʱ��ɲ�ѯ����ACPU SCU��L2C����ISOͬʱ����ACPU L2����MEM�����źš� */
        unsigned int  pw_rstdis0_13reserved    : 1;  /* bit[13]   : [13] ��reserved */
        unsigned int  pw_rstdis0_14reserved    : 1;  /* bit[14]   : [14] ��reserved */
        unsigned int  pw_rstdis0_15reserved    : 1;  /* bit[15]   : [15] ��reserved */
        unsigned int  pw_rstdis0_31reserved    : 16; /* bit[16-31]: [31:16] ��reserved */
    } reg;
} SOC_AO_SCTRL_SC_PW_RSTDIS0_UNION;
#endif
#define SOC_AO_SCTRL_SC_PW_RSTDIS0_pw_rstdis0_0peri_START          (0)
#define SOC_AO_SCTRL_SC_PW_RSTDIS0_pw_rstdis0_0peri_END            (0)
#define SOC_AO_SCTRL_SC_PW_RSTDIS0_pw_rstdis0_1g3d_START           (1)
#define SOC_AO_SCTRL_SC_PW_RSTDIS0_pw_rstdis0_1g3d_END             (1)
#define SOC_AO_SCTRL_SC_PW_RSTDIS0_pw_rstdis0_2codecisp_START      (2)
#define SOC_AO_SCTRL_SC_PW_RSTDIS0_pw_rstdis0_2codecisp_END        (2)
#define SOC_AO_SCTRL_SC_PW_RSTDIS0_pw_rstdis0_3reserved_START      (3)
#define SOC_AO_SCTRL_SC_PW_RSTDIS0_pw_rstdis0_3reserved_END        (3)
#define SOC_AO_SCTRL_SC_PW_RSTDIS0_pw_rstdis0_4mcpu_START          (4)
#define SOC_AO_SCTRL_SC_PW_RSTDIS0_pw_rstdis0_4mcpu_END            (4)
#define SOC_AO_SCTRL_SC_PW_RSTDIS0_pw_rstdis0_5bbpharqmem_START    (5)
#define SOC_AO_SCTRL_SC_PW_RSTDIS0_pw_rstdis0_5bbpharqmem_END      (5)
#define SOC_AO_SCTRL_SC_PW_RSTDIS0_pw_rstdis0_6reserved_START      (6)
#define SOC_AO_SCTRL_SC_PW_RSTDIS0_pw_rstdis0_6reserved_END        (6)
#define SOC_AO_SCTRL_SC_PW_RSTDIS0_pw_rstdis0_7reserved_START      (7)
#define SOC_AO_SCTRL_SC_PW_RSTDIS0_pw_rstdis0_7reserved_END        (7)
#define SOC_AO_SCTRL_SC_PW_RSTDIS0_pw_rstdis0_8hifi_START          (8)
#define SOC_AO_SCTRL_SC_PW_RSTDIS0_pw_rstdis0_8hifi_END            (8)
#define SOC_AO_SCTRL_SC_PW_RSTDIS0_pw_rstdis0_9reserved_START      (9)
#define SOC_AO_SCTRL_SC_PW_RSTDIS0_pw_rstdis0_9reserved_END        (9)
#define SOC_AO_SCTRL_SC_PW_RSTDIS0_pw_rstdis0_10reserved_START     (10)
#define SOC_AO_SCTRL_SC_PW_RSTDIS0_pw_rstdis0_10reserved_END       (10)
#define SOC_AO_SCTRL_SC_PW_RSTDIS0_pw_rstdis0_11reserved_START     (11)
#define SOC_AO_SCTRL_SC_PW_RSTDIS0_pw_rstdis0_11reserved_END       (11)
#define SOC_AO_SCTRL_SC_PW_RSTDIS0_pw_rstdis0_12acpucluster_START  (12)
#define SOC_AO_SCTRL_SC_PW_RSTDIS0_pw_rstdis0_12acpucluster_END    (12)
#define SOC_AO_SCTRL_SC_PW_RSTDIS0_pw_rstdis0_13reserved_START     (13)
#define SOC_AO_SCTRL_SC_PW_RSTDIS0_pw_rstdis0_13reserved_END       (13)
#define SOC_AO_SCTRL_SC_PW_RSTDIS0_pw_rstdis0_14reserved_START     (14)
#define SOC_AO_SCTRL_SC_PW_RSTDIS0_pw_rstdis0_14reserved_END       (14)
#define SOC_AO_SCTRL_SC_PW_RSTDIS0_pw_rstdis0_15reserved_START     (15)
#define SOC_AO_SCTRL_SC_PW_RSTDIS0_pw_rstdis0_15reserved_END       (15)
#define SOC_AO_SCTRL_SC_PW_RSTDIS0_pw_rstdis0_31reserved_START     (16)
#define SOC_AO_SCTRL_SC_PW_RSTDIS0_pw_rstdis0_31reserved_END       (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_PW_RST_STAT0_UNION
 �ṹ˵��  : SC_PW_RST_STAT0 �Ĵ����ṹ���塣��ַƫ����:0x818����ֵ:0xFFFFCFFE�����:32
 �Ĵ���˵��: �µ�����λ״̬��ͨ��SC_PW_RSTEN0��SC_PW_RSTDIS0�޸�״̬��
            ÿ��Bit���壺
            0����λ��ʹ�ܣ�
            1����λʹ�ܡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pw_rst_stat0_0peri         : 1;  /* bit[0]    : [0] �����������͹��Ŀ����ź���Ӳ�����ƣ����������Ч����Դ���ⲿPMUֱ���ṩ����mtcmos timeoutָʾ�۲���Ч�� */
        unsigned int  pw_rst_stat0_1g3d          : 1;  /* bit[1]    : [1] ��G3D�µ����� */
        unsigned int  pw_rst_stat0_2codecisp     : 1;  /* bit[2]    : [2] ��CODEC+ISP�µ�����  */
        unsigned int  pw_rst_stat0_3reserved     : 1;  /* bit[3]    : [3] ��reserved */
        unsigned int  pw_rst_stat0_4mcpu         : 1;  /* bit[4]    : [4] ��MCPU�µ�����  */
        unsigned int  pw_rst_stat0_5bbpharqmem   : 1;  /* bit[5]    : [5] ��BBP Harq Memory�����µ������  */
        unsigned int  pw_rst_stat0_6reserved     : 1;  /* bit[6]    : [6] ��reserved  */
        unsigned int  pw_rst_stat0_7reserved     : 1;  /* bit[7]    : [7] ��reserved */
        unsigned int  pw_rst_stat0_8hifi         : 1;  /* bit[8]    : [8] ��HIFI�µ��� �� */
        unsigned int  pw_rst_stat0_9reserved     : 1;  /* bit[9]    : [9] ��reserved */
        unsigned int  pw_rst_stat0_10reserved    : 1;  /* bit[10]   : [10] ��reserved */
        unsigned int  pw_rst_stat0_11reserved    : 1;  /* bit[11]   : [11] ��reserved */
        unsigned int  pw_rst_stat0_12acpucluster : 1;  /* bit[12]   : [12] ��ACPU SCU��L2C�߼��µ�������MTCMOS��������Դͨ������PMU����ʵ�ֿ��أ��Ĵ�������pw_en0_12acpucluter�������õ�Դ�ȶ�ʱ�䣬��Դ�ȶ�ʱ��ɲ�ѯ����ACPU SCU��L2C����ISOͬʱ����ACPU L2����MEM�����źš� */
        unsigned int  pw_rst_stat0_13reserved    : 1;  /* bit[13]   : [13] ��reserved */
        unsigned int  pw_rst_stat0_14reserved    : 1;  /* bit[14]   : [14] ��reserved */
        unsigned int  pw_rst_stat0_15reserved    : 1;  /* bit[15]   : [15] ��reserved */
        unsigned int  pw_rst_stat0_31reserved    : 16; /* bit[16-31]: [31:16] ��reserved */
    } reg;
} SOC_AO_SCTRL_SC_PW_RST_STAT0_UNION;
#endif
#define SOC_AO_SCTRL_SC_PW_RST_STAT0_pw_rst_stat0_0peri_START          (0)
#define SOC_AO_SCTRL_SC_PW_RST_STAT0_pw_rst_stat0_0peri_END            (0)
#define SOC_AO_SCTRL_SC_PW_RST_STAT0_pw_rst_stat0_1g3d_START           (1)
#define SOC_AO_SCTRL_SC_PW_RST_STAT0_pw_rst_stat0_1g3d_END             (1)
#define SOC_AO_SCTRL_SC_PW_RST_STAT0_pw_rst_stat0_2codecisp_START      (2)
#define SOC_AO_SCTRL_SC_PW_RST_STAT0_pw_rst_stat0_2codecisp_END        (2)
#define SOC_AO_SCTRL_SC_PW_RST_STAT0_pw_rst_stat0_3reserved_START      (3)
#define SOC_AO_SCTRL_SC_PW_RST_STAT0_pw_rst_stat0_3reserved_END        (3)
#define SOC_AO_SCTRL_SC_PW_RST_STAT0_pw_rst_stat0_4mcpu_START          (4)
#define SOC_AO_SCTRL_SC_PW_RST_STAT0_pw_rst_stat0_4mcpu_END            (4)
#define SOC_AO_SCTRL_SC_PW_RST_STAT0_pw_rst_stat0_5bbpharqmem_START    (5)
#define SOC_AO_SCTRL_SC_PW_RST_STAT0_pw_rst_stat0_5bbpharqmem_END      (5)
#define SOC_AO_SCTRL_SC_PW_RST_STAT0_pw_rst_stat0_6reserved_START      (6)
#define SOC_AO_SCTRL_SC_PW_RST_STAT0_pw_rst_stat0_6reserved_END        (6)
#define SOC_AO_SCTRL_SC_PW_RST_STAT0_pw_rst_stat0_7reserved_START      (7)
#define SOC_AO_SCTRL_SC_PW_RST_STAT0_pw_rst_stat0_7reserved_END        (7)
#define SOC_AO_SCTRL_SC_PW_RST_STAT0_pw_rst_stat0_8hifi_START          (8)
#define SOC_AO_SCTRL_SC_PW_RST_STAT0_pw_rst_stat0_8hifi_END            (8)
#define SOC_AO_SCTRL_SC_PW_RST_STAT0_pw_rst_stat0_9reserved_START      (9)
#define SOC_AO_SCTRL_SC_PW_RST_STAT0_pw_rst_stat0_9reserved_END        (9)
#define SOC_AO_SCTRL_SC_PW_RST_STAT0_pw_rst_stat0_10reserved_START     (10)
#define SOC_AO_SCTRL_SC_PW_RST_STAT0_pw_rst_stat0_10reserved_END       (10)
#define SOC_AO_SCTRL_SC_PW_RST_STAT0_pw_rst_stat0_11reserved_START     (11)
#define SOC_AO_SCTRL_SC_PW_RST_STAT0_pw_rst_stat0_11reserved_END       (11)
#define SOC_AO_SCTRL_SC_PW_RST_STAT0_pw_rst_stat0_12acpucluster_START  (12)
#define SOC_AO_SCTRL_SC_PW_RST_STAT0_pw_rst_stat0_12acpucluster_END    (12)
#define SOC_AO_SCTRL_SC_PW_RST_STAT0_pw_rst_stat0_13reserved_START     (13)
#define SOC_AO_SCTRL_SC_PW_RST_STAT0_pw_rst_stat0_13reserved_END       (13)
#define SOC_AO_SCTRL_SC_PW_RST_STAT0_pw_rst_stat0_14reserved_START     (14)
#define SOC_AO_SCTRL_SC_PW_RST_STAT0_pw_rst_stat0_14reserved_END       (14)
#define SOC_AO_SCTRL_SC_PW_RST_STAT0_pw_rst_stat0_15reserved_START     (15)
#define SOC_AO_SCTRL_SC_PW_RST_STAT0_pw_rst_stat0_15reserved_END       (15)
#define SOC_AO_SCTRL_SC_PW_RST_STAT0_pw_rst_stat0_31reserved_START     (16)
#define SOC_AO_SCTRL_SC_PW_RST_STAT0_pw_rst_stat0_31reserved_END       (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_PW_ISOEN0_UNION
 �ṹ˵��  : SC_PW_ISOEN0 �Ĵ����ṹ���塣��ַƫ����:0x820����ֵ:0x00000000�����:32
 �Ĵ���˵��: ������ISOʹ�ܼĴ��������ڿ��Ƹ���������ص�Isolation Cellʹ�ܡ�����Ӧλд1ʹ��SC_PW_ISO_STAT0��Ӧ������IsoLation Cell�����źŸ��ϣ���д0��Ӱ�졣�üĴ���ֻ���ϵ縴λʱ����λ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pw_isoen0_0peri         : 1;  /* bit[0]    : [0] �����������͹��Ŀ����ź���Ӳ�����ƣ����������Ч����Դ���ⲿPMUֱ���ṩ����mtcmos timeoutָʾ�۲���Ч�� */
        unsigned int  pw_isoen0_1g3d          : 1;  /* bit[1]    : [1] ��G3D�µ����� */
        unsigned int  pw_isoen0_2codecisp     : 1;  /* bit[2]    : [2] ��CODEC+ISP�µ�����  */
        unsigned int  pw_isoen0_3reserved     : 1;  /* bit[3]    : [3] ��reserved */
        unsigned int  pw_isoen0_4mcpu         : 1;  /* bit[4]    : [4] ��MCPU�µ�����  */
        unsigned int  pw_isoen0_5bbpharqmem   : 1;  /* bit[5]    : [5] ��BBP Harq Memory�����µ������  */
        unsigned int  pw_isoen0_6reserved     : 1;  /* bit[6]    : [6] ��reserved  */
        unsigned int  pw_isoen0_7reserved     : 1;  /* bit[7]    : [7] ��reserved */
        unsigned int  pw_isoen0_8hifi         : 1;  /* bit[8]    : [8] ��HIFI�µ��� �� */
        unsigned int  pw_isoen0_9reserved     : 1;  /* bit[9]    : [9] ��reserved */
        unsigned int  pw_isoen0_10reserved    : 1;  /* bit[10]   : [10] ��reserved */
        unsigned int  pw_isoen0_11reserved    : 1;  /* bit[11]   : [11] ��reserved */
        unsigned int  pw_isoen0_12acpucluster : 1;  /* bit[12]   : [12] ��ACPU SCU��L2C�߼��µ�������MTCMOS��������Դͨ������PMU����ʵ�ֿ��أ��Ĵ�������pw_en0_12acpucluter�������õ�Դ�ȶ�ʱ�䣬��Դ�ȶ�ʱ��ɲ�ѯ����ACPU SCU��L2C����ISOͬʱ����ACPU L2����MEM�����źš� */
        unsigned int  pw_isoen0_13reserved    : 1;  /* bit[13]   : [13] ��reserved */
        unsigned int  pw_isoen0_14reserved    : 1;  /* bit[14]   : [14] ��reserved */
        unsigned int  pw_isoen0_15reserved    : 1;  /* bit[15]   : [15] ��reserved */
        unsigned int  pw_isoen0_31reserved    : 16; /* bit[16-31]: [31:16] ��reserved */
    } reg;
} SOC_AO_SCTRL_SC_PW_ISOEN0_UNION;
#endif
#define SOC_AO_SCTRL_SC_PW_ISOEN0_pw_isoen0_0peri_START          (0)
#define SOC_AO_SCTRL_SC_PW_ISOEN0_pw_isoen0_0peri_END            (0)
#define SOC_AO_SCTRL_SC_PW_ISOEN0_pw_isoen0_1g3d_START           (1)
#define SOC_AO_SCTRL_SC_PW_ISOEN0_pw_isoen0_1g3d_END             (1)
#define SOC_AO_SCTRL_SC_PW_ISOEN0_pw_isoen0_2codecisp_START      (2)
#define SOC_AO_SCTRL_SC_PW_ISOEN0_pw_isoen0_2codecisp_END        (2)
#define SOC_AO_SCTRL_SC_PW_ISOEN0_pw_isoen0_3reserved_START      (3)
#define SOC_AO_SCTRL_SC_PW_ISOEN0_pw_isoen0_3reserved_END        (3)
#define SOC_AO_SCTRL_SC_PW_ISOEN0_pw_isoen0_4mcpu_START          (4)
#define SOC_AO_SCTRL_SC_PW_ISOEN0_pw_isoen0_4mcpu_END            (4)
#define SOC_AO_SCTRL_SC_PW_ISOEN0_pw_isoen0_5bbpharqmem_START    (5)
#define SOC_AO_SCTRL_SC_PW_ISOEN0_pw_isoen0_5bbpharqmem_END      (5)
#define SOC_AO_SCTRL_SC_PW_ISOEN0_pw_isoen0_6reserved_START      (6)
#define SOC_AO_SCTRL_SC_PW_ISOEN0_pw_isoen0_6reserved_END        (6)
#define SOC_AO_SCTRL_SC_PW_ISOEN0_pw_isoen0_7reserved_START      (7)
#define SOC_AO_SCTRL_SC_PW_ISOEN0_pw_isoen0_7reserved_END        (7)
#define SOC_AO_SCTRL_SC_PW_ISOEN0_pw_isoen0_8hifi_START          (8)
#define SOC_AO_SCTRL_SC_PW_ISOEN0_pw_isoen0_8hifi_END            (8)
#define SOC_AO_SCTRL_SC_PW_ISOEN0_pw_isoen0_9reserved_START      (9)
#define SOC_AO_SCTRL_SC_PW_ISOEN0_pw_isoen0_9reserved_END        (9)
#define SOC_AO_SCTRL_SC_PW_ISOEN0_pw_isoen0_10reserved_START     (10)
#define SOC_AO_SCTRL_SC_PW_ISOEN0_pw_isoen0_10reserved_END       (10)
#define SOC_AO_SCTRL_SC_PW_ISOEN0_pw_isoen0_11reserved_START     (11)
#define SOC_AO_SCTRL_SC_PW_ISOEN0_pw_isoen0_11reserved_END       (11)
#define SOC_AO_SCTRL_SC_PW_ISOEN0_pw_isoen0_12acpucluster_START  (12)
#define SOC_AO_SCTRL_SC_PW_ISOEN0_pw_isoen0_12acpucluster_END    (12)
#define SOC_AO_SCTRL_SC_PW_ISOEN0_pw_isoen0_13reserved_START     (13)
#define SOC_AO_SCTRL_SC_PW_ISOEN0_pw_isoen0_13reserved_END       (13)
#define SOC_AO_SCTRL_SC_PW_ISOEN0_pw_isoen0_14reserved_START     (14)
#define SOC_AO_SCTRL_SC_PW_ISOEN0_pw_isoen0_14reserved_END       (14)
#define SOC_AO_SCTRL_SC_PW_ISOEN0_pw_isoen0_15reserved_START     (15)
#define SOC_AO_SCTRL_SC_PW_ISOEN0_pw_isoen0_15reserved_END       (15)
#define SOC_AO_SCTRL_SC_PW_ISOEN0_pw_isoen0_31reserved_START     (16)
#define SOC_AO_SCTRL_SC_PW_ISOEN0_pw_isoen0_31reserved_END       (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_PW_ISODIS0_UNION
 �ṹ˵��  : SC_PW_ISODIS0 �Ĵ����ṹ���塣��ַƫ����:0x824����ֵ:0x00000000�����:32
 �Ĵ���˵��: ������ISO��ֹ�Ĵ��������ڿ��Ƹ���������ص�Isolation Cell��ֹ������Ӧλд1��ֹSC_PW_ISO_STAT0��Ӧ������IsoLation Cell�����źŲ����ϣ���д0��Ӱ�졣�üĴ���ֻ���ϵ縴λʱ����λ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pw_isodis0_0peri         : 1;  /* bit[0]    : [0] �����������͹��Ŀ����ź���Ӳ�����ƣ����������Ч����Դ���ⲿPMUֱ���ṩ����mtcmos timeoutָʾ�۲���Ч�� */
        unsigned int  pw_isodis0_1g3d          : 1;  /* bit[1]    : [1] ��G3D�µ����� */
        unsigned int  pw_isodis0_2codecisp     : 1;  /* bit[2]    : [2] ��CODEC+ISP�µ�����  */
        unsigned int  pw_isodis0_3reserved     : 1;  /* bit[3]    : [3] ��reserved */
        unsigned int  pw_isodis0_4mcpu         : 1;  /* bit[4]    : [4] ��MCPU�µ�����  */
        unsigned int  pw_isodis0_5bbpharqmem   : 1;  /* bit[5]    : [5] ��BBP Harq Memory�����µ������  */
        unsigned int  pw_isodis0_6reserved     : 1;  /* bit[6]    : [6] ��reserved  */
        unsigned int  pw_isodis0_7reserved     : 1;  /* bit[7]    : [7] ��reserved */
        unsigned int  pw_isodis0_8hifi         : 1;  /* bit[8]    : [8] ��HIFI�µ��� �� */
        unsigned int  pw_isodis0_9reserved     : 1;  /* bit[9]    : [9] ��reserved */
        unsigned int  pw_isodis0_10reserved    : 1;  /* bit[10]   : [10] ��reserved */
        unsigned int  pw_isodis0_11reserved    : 1;  /* bit[11]   : [11] ��reserved */
        unsigned int  pw_isodis0_12acpucluster : 1;  /* bit[12]   : [12] ��ACPU SCU��L2C�߼��µ�������MTCMOS��������Դͨ������PMU����ʵ�ֿ��أ��Ĵ�������pw_en0_12acpucluter�������õ�Դ�ȶ�ʱ�䣬��Դ�ȶ�ʱ��ɲ�ѯ����ACPU SCU��L2C����ISOͬʱ����ACPU L2����MEM�����źš� */
        unsigned int  pw_isodis0_13reserved    : 1;  /* bit[13]   : [13] ��reserved */
        unsigned int  pw_isodis0_14reserved    : 1;  /* bit[14]   : [14] ��reserved */
        unsigned int  pw_isodis0_15reserved    : 1;  /* bit[15]   : [15] ��reserved */
        unsigned int  pw_isodis0_31reserved    : 16; /* bit[16-31]: [31:16] ��reserved */
    } reg;
} SOC_AO_SCTRL_SC_PW_ISODIS0_UNION;
#endif
#define SOC_AO_SCTRL_SC_PW_ISODIS0_pw_isodis0_0peri_START          (0)
#define SOC_AO_SCTRL_SC_PW_ISODIS0_pw_isodis0_0peri_END            (0)
#define SOC_AO_SCTRL_SC_PW_ISODIS0_pw_isodis0_1g3d_START           (1)
#define SOC_AO_SCTRL_SC_PW_ISODIS0_pw_isodis0_1g3d_END             (1)
#define SOC_AO_SCTRL_SC_PW_ISODIS0_pw_isodis0_2codecisp_START      (2)
#define SOC_AO_SCTRL_SC_PW_ISODIS0_pw_isodis0_2codecisp_END        (2)
#define SOC_AO_SCTRL_SC_PW_ISODIS0_pw_isodis0_3reserved_START      (3)
#define SOC_AO_SCTRL_SC_PW_ISODIS0_pw_isodis0_3reserved_END        (3)
#define SOC_AO_SCTRL_SC_PW_ISODIS0_pw_isodis0_4mcpu_START          (4)
#define SOC_AO_SCTRL_SC_PW_ISODIS0_pw_isodis0_4mcpu_END            (4)
#define SOC_AO_SCTRL_SC_PW_ISODIS0_pw_isodis0_5bbpharqmem_START    (5)
#define SOC_AO_SCTRL_SC_PW_ISODIS0_pw_isodis0_5bbpharqmem_END      (5)
#define SOC_AO_SCTRL_SC_PW_ISODIS0_pw_isodis0_6reserved_START      (6)
#define SOC_AO_SCTRL_SC_PW_ISODIS0_pw_isodis0_6reserved_END        (6)
#define SOC_AO_SCTRL_SC_PW_ISODIS0_pw_isodis0_7reserved_START      (7)
#define SOC_AO_SCTRL_SC_PW_ISODIS0_pw_isodis0_7reserved_END        (7)
#define SOC_AO_SCTRL_SC_PW_ISODIS0_pw_isodis0_8hifi_START          (8)
#define SOC_AO_SCTRL_SC_PW_ISODIS0_pw_isodis0_8hifi_END            (8)
#define SOC_AO_SCTRL_SC_PW_ISODIS0_pw_isodis0_9reserved_START      (9)
#define SOC_AO_SCTRL_SC_PW_ISODIS0_pw_isodis0_9reserved_END        (9)
#define SOC_AO_SCTRL_SC_PW_ISODIS0_pw_isodis0_10reserved_START     (10)
#define SOC_AO_SCTRL_SC_PW_ISODIS0_pw_isodis0_10reserved_END       (10)
#define SOC_AO_SCTRL_SC_PW_ISODIS0_pw_isodis0_11reserved_START     (11)
#define SOC_AO_SCTRL_SC_PW_ISODIS0_pw_isodis0_11reserved_END       (11)
#define SOC_AO_SCTRL_SC_PW_ISODIS0_pw_isodis0_12acpucluster_START  (12)
#define SOC_AO_SCTRL_SC_PW_ISODIS0_pw_isodis0_12acpucluster_END    (12)
#define SOC_AO_SCTRL_SC_PW_ISODIS0_pw_isodis0_13reserved_START     (13)
#define SOC_AO_SCTRL_SC_PW_ISODIS0_pw_isodis0_13reserved_END       (13)
#define SOC_AO_SCTRL_SC_PW_ISODIS0_pw_isodis0_14reserved_START     (14)
#define SOC_AO_SCTRL_SC_PW_ISODIS0_pw_isodis0_14reserved_END       (14)
#define SOC_AO_SCTRL_SC_PW_ISODIS0_pw_isodis0_15reserved_START     (15)
#define SOC_AO_SCTRL_SC_PW_ISODIS0_pw_isodis0_15reserved_END       (15)
#define SOC_AO_SCTRL_SC_PW_ISODIS0_pw_isodis0_31reserved_START     (16)
#define SOC_AO_SCTRL_SC_PW_ISODIS0_pw_isodis0_31reserved_END       (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_PW_ISO_STAT0_UNION
 �ṹ˵��  : SC_PW_ISO_STAT0 �Ĵ����ṹ���塣��ַƫ����:0x828����ֵ:0xFFFFCFFE�����:32
 �Ĵ���˵��: �µ���ISO״̬��ͨ��SC_PW_ISOEN0��SC_PW_ISODIS0�޸�״̬��
            ÿ��Bit���壺
            0��isolation��ʹ�ܣ�
            1��isolationʹ�ܡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pw_iso_stat0_0peri         : 1;  /* bit[0]    : [0] �����������͹��Ŀ����ź���Ӳ�����ƣ����������Ч����Դ���ⲿPMUֱ���ṩ����mtcmos timeoutָʾ�۲���Ч�� */
        unsigned int  pw_iso_stat0_1g3d          : 1;  /* bit[1]    : [1] ��G3D�µ����� */
        unsigned int  pw_iso_stat0_2codecisp     : 1;  /* bit[2]    : [2] ��CODEC+ISP�µ�����  */
        unsigned int  pw_iso_stat0_3reserved     : 1;  /* bit[3]    : [3] ��reserved */
        unsigned int  pw_iso_stat0_4mcpu         : 1;  /* bit[4]    : [4] ��MCPU�µ�����  */
        unsigned int  pw_iso_stat0_5bbpharqmem   : 1;  /* bit[5]    : [5] ��BBP Harq Memory�����µ������  */
        unsigned int  pw_iso_stat0_6reserved     : 1;  /* bit[6]    : [6] ��reserved  */
        unsigned int  pw_iso_stat0_7reserved     : 1;  /* bit[7]    : [7] ��reserved */
        unsigned int  pw_iso_stat0_8hifi         : 1;  /* bit[8]    : [8] ��HIFI�µ��� �� */
        unsigned int  pw_iso_stat0_9reserved     : 1;  /* bit[9]    : [9] ��reserved */
        unsigned int  pw_iso_stat0_10reserved    : 1;  /* bit[10]   : [10] ��reserved */
        unsigned int  pw_iso_stat0_11reserved    : 1;  /* bit[11]   : [11] ��reserved */
        unsigned int  pw_iso_stat0_12acpucluster : 1;  /* bit[12]   : [12] ��ACPU SCU��L2C�߼��µ�������MTCMOS��������Դͨ������PMU����ʵ�ֿ��أ��Ĵ�������pw_en0_12acpucluter�������õ�Դ�ȶ�ʱ�䣬��Դ�ȶ�ʱ��ɲ�ѯ����ACPU SCU��L2C����ISOͬʱ����ACPU L2����MEM�����źš� */
        unsigned int  pw_iso_stat0_13reserved    : 1;  /* bit[13]   : [13] ��reserved */
        unsigned int  pw_iso_stat0_14reserved    : 1;  /* bit[14]   : [14] ��reserved */
        unsigned int  pw_iso_stat0_15reserved    : 1;  /* bit[15]   : [15] ��reserved */
        unsigned int  pw_iso_stat0_31reserved    : 16; /* bit[16-31]: [31:16] ��reserved */
    } reg;
} SOC_AO_SCTRL_SC_PW_ISO_STAT0_UNION;
#endif
#define SOC_AO_SCTRL_SC_PW_ISO_STAT0_pw_iso_stat0_0peri_START          (0)
#define SOC_AO_SCTRL_SC_PW_ISO_STAT0_pw_iso_stat0_0peri_END            (0)
#define SOC_AO_SCTRL_SC_PW_ISO_STAT0_pw_iso_stat0_1g3d_START           (1)
#define SOC_AO_SCTRL_SC_PW_ISO_STAT0_pw_iso_stat0_1g3d_END             (1)
#define SOC_AO_SCTRL_SC_PW_ISO_STAT0_pw_iso_stat0_2codecisp_START      (2)
#define SOC_AO_SCTRL_SC_PW_ISO_STAT0_pw_iso_stat0_2codecisp_END        (2)
#define SOC_AO_SCTRL_SC_PW_ISO_STAT0_pw_iso_stat0_3reserved_START      (3)
#define SOC_AO_SCTRL_SC_PW_ISO_STAT0_pw_iso_stat0_3reserved_END        (3)
#define SOC_AO_SCTRL_SC_PW_ISO_STAT0_pw_iso_stat0_4mcpu_START          (4)
#define SOC_AO_SCTRL_SC_PW_ISO_STAT0_pw_iso_stat0_4mcpu_END            (4)
#define SOC_AO_SCTRL_SC_PW_ISO_STAT0_pw_iso_stat0_5bbpharqmem_START    (5)
#define SOC_AO_SCTRL_SC_PW_ISO_STAT0_pw_iso_stat0_5bbpharqmem_END      (5)
#define SOC_AO_SCTRL_SC_PW_ISO_STAT0_pw_iso_stat0_6reserved_START      (6)
#define SOC_AO_SCTRL_SC_PW_ISO_STAT0_pw_iso_stat0_6reserved_END        (6)
#define SOC_AO_SCTRL_SC_PW_ISO_STAT0_pw_iso_stat0_7reserved_START      (7)
#define SOC_AO_SCTRL_SC_PW_ISO_STAT0_pw_iso_stat0_7reserved_END        (7)
#define SOC_AO_SCTRL_SC_PW_ISO_STAT0_pw_iso_stat0_8hifi_START          (8)
#define SOC_AO_SCTRL_SC_PW_ISO_STAT0_pw_iso_stat0_8hifi_END            (8)
#define SOC_AO_SCTRL_SC_PW_ISO_STAT0_pw_iso_stat0_9reserved_START      (9)
#define SOC_AO_SCTRL_SC_PW_ISO_STAT0_pw_iso_stat0_9reserved_END        (9)
#define SOC_AO_SCTRL_SC_PW_ISO_STAT0_pw_iso_stat0_10reserved_START     (10)
#define SOC_AO_SCTRL_SC_PW_ISO_STAT0_pw_iso_stat0_10reserved_END       (10)
#define SOC_AO_SCTRL_SC_PW_ISO_STAT0_pw_iso_stat0_11reserved_START     (11)
#define SOC_AO_SCTRL_SC_PW_ISO_STAT0_pw_iso_stat0_11reserved_END       (11)
#define SOC_AO_SCTRL_SC_PW_ISO_STAT0_pw_iso_stat0_12acpucluster_START  (12)
#define SOC_AO_SCTRL_SC_PW_ISO_STAT0_pw_iso_stat0_12acpucluster_END    (12)
#define SOC_AO_SCTRL_SC_PW_ISO_STAT0_pw_iso_stat0_13reserved_START     (13)
#define SOC_AO_SCTRL_SC_PW_ISO_STAT0_pw_iso_stat0_13reserved_END       (13)
#define SOC_AO_SCTRL_SC_PW_ISO_STAT0_pw_iso_stat0_14reserved_START     (14)
#define SOC_AO_SCTRL_SC_PW_ISO_STAT0_pw_iso_stat0_14reserved_END       (14)
#define SOC_AO_SCTRL_SC_PW_ISO_STAT0_pw_iso_stat0_15reserved_START     (15)
#define SOC_AO_SCTRL_SC_PW_ISO_STAT0_pw_iso_stat0_15reserved_END       (15)
#define SOC_AO_SCTRL_SC_PW_ISO_STAT0_pw_iso_stat0_31reserved_START     (16)
#define SOC_AO_SCTRL_SC_PW_ISO_STAT0_pw_iso_stat0_31reserved_END       (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_PW_MTCMOS_EN0_UNION
 �ṹ˵��  : SC_PW_MTCMOS_EN0 �Ĵ����ṹ���塣��ַƫ����:0x830����ֵ:0x00000000�����:32
 �Ĵ���˵��: ��������Դʹ�ܼĴ��������ڿ��Ƹ��������ĵ�Դʹ�ܣ�����Ӧλд1��SC_PW_MTCMOS_STAT0��Ӧ��ѹ���Դ��д0��Ӱ�졣�üĴ�����ֻ���ϵ縴λʱ����λ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pw_en0_0peri         : 1;  /* bit[0]    : [0] �����������͹��Ŀ����ź���Ӳ�����ƣ����������Ч����Դ���ⲿPMUֱ���ṩ����mtcmos timeoutָʾ�۲���Ч�� */
        unsigned int  pw_en0_1g3d          : 1;  /* bit[1]    : [1] ��G3D�µ����� */
        unsigned int  pw_en0_2codecisp     : 1;  /* bit[2]    : [2] ��CODEC+ISP�µ�����  */
        unsigned int  pw_en0_3reserved     : 1;  /* bit[3]    : [3] ��reserved */
        unsigned int  pw_en0_4mcpu         : 1;  /* bit[4]    : [4] ��MCPU�µ�����  */
        unsigned int  pw_en0_5bbpharqmem   : 1;  /* bit[5]    : [5] ��BBP Harq Memory�����µ������  */
        unsigned int  pw_en0_6reserved     : 1;  /* bit[6]    : [6] ��reserved  */
        unsigned int  pw_en0_7reserved     : 1;  /* bit[7]    : [7] ��reserved */
        unsigned int  pw_en0_8hifi         : 1;  /* bit[8]    : [8] ��HIFI�µ��� �� */
        unsigned int  pw_en0_9reserved     : 1;  /* bit[9]    : [9] ��reserved */
        unsigned int  pw_en0_10reserved    : 1;  /* bit[10]   : [10] ��reserved */
        unsigned int  pw_en0_11reserved    : 1;  /* bit[11]   : [11] ��reserved */
        unsigned int  pw_en0_12acpucluster : 1;  /* bit[12]   : [12] ��ACPU SCU��L2C�߼��µ�������MTCMOS��������Դͨ������PMU����ʵ�ֿ��أ��Ĵ�������pw_en0_12acpucluter�������õ�Դ�ȶ�ʱ�䣬��Դ�ȶ�ʱ��ɲ�ѯ����ACPU SCU��L2C����ISOͬʱ����ACPU L2����MEM�����źš� */
        unsigned int  pw_en0_13reserved    : 1;  /* bit[13]   : [13] ��reserved */
        unsigned int  pw_en0_14reserved    : 1;  /* bit[14]   : [14] ��reserved */
        unsigned int  pw_en0_15reserved    : 1;  /* bit[15]   : [15] ��reserved */
        unsigned int  pw_en0_31reserved    : 16; /* bit[16-31]: [31:16] ��reserved */
    } reg;
} SOC_AO_SCTRL_SC_PW_MTCMOS_EN0_UNION;
#endif
#define SOC_AO_SCTRL_SC_PW_MTCMOS_EN0_pw_en0_0peri_START          (0)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_EN0_pw_en0_0peri_END            (0)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_EN0_pw_en0_1g3d_START           (1)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_EN0_pw_en0_1g3d_END             (1)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_EN0_pw_en0_2codecisp_START      (2)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_EN0_pw_en0_2codecisp_END        (2)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_EN0_pw_en0_3reserved_START      (3)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_EN0_pw_en0_3reserved_END        (3)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_EN0_pw_en0_4mcpu_START          (4)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_EN0_pw_en0_4mcpu_END            (4)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_EN0_pw_en0_5bbpharqmem_START    (5)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_EN0_pw_en0_5bbpharqmem_END      (5)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_EN0_pw_en0_6reserved_START      (6)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_EN0_pw_en0_6reserved_END        (6)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_EN0_pw_en0_7reserved_START      (7)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_EN0_pw_en0_7reserved_END        (7)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_EN0_pw_en0_8hifi_START          (8)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_EN0_pw_en0_8hifi_END            (8)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_EN0_pw_en0_9reserved_START      (9)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_EN0_pw_en0_9reserved_END        (9)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_EN0_pw_en0_10reserved_START     (10)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_EN0_pw_en0_10reserved_END       (10)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_EN0_pw_en0_11reserved_START     (11)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_EN0_pw_en0_11reserved_END       (11)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_EN0_pw_en0_12acpucluster_START  (12)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_EN0_pw_en0_12acpucluster_END    (12)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_EN0_pw_en0_13reserved_START     (13)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_EN0_pw_en0_13reserved_END       (13)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_EN0_pw_en0_14reserved_START     (14)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_EN0_pw_en0_14reserved_END       (14)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_EN0_pw_en0_15reserved_START     (15)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_EN0_pw_en0_15reserved_END       (15)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_EN0_pw_en0_31reserved_START     (16)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_EN0_pw_en0_31reserved_END       (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_PW_MTCMOS_DIS0_UNION
 �ṹ˵��  : SC_PW_MTCMOS_DIS0 �Ĵ����ṹ���塣��ַƫ����:0x834����ֵ:0x00000000�����:32
 �Ĵ���˵��: ��������Դ��ֹ�Ĵ��������ڿ��Ƹ��������ĵ�Դ��ֹ������Ӧλд1�ر�SC_PW_MTCMOS_STAT0��Ӧ��ѹ���Դ��д0��Ӱ�졣�üĴ�����ֻ���ϵ縴λʱ����λ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pw_dis0_0peri         : 1;  /* bit[0]    : [0] �����������͹��Ŀ����ź���Ӳ�����ƣ����������Ч����Դ���ⲿPMUֱ���ṩ����mtcmos timeoutָʾ�۲���Ч�� */
        unsigned int  pw_dis0_1g3d          : 1;  /* bit[1]    : [1] ��G3D�µ����� */
        unsigned int  pw_dis0_2codecisp     : 1;  /* bit[2]    : [2] ��CODEC+ISP�µ�����  */
        unsigned int  pw_dis0_3reserved     : 1;  /* bit[3]    : [3] ��reserved */
        unsigned int  pw_dis0_4mcpu         : 1;  /* bit[4]    : [4] ��MCPU�µ�����  */
        unsigned int  pw_dis0_5bbpharqmem   : 1;  /* bit[5]    : [5] ��BBP Harq Memory�����µ������  */
        unsigned int  pw_dis0_6reserved     : 1;  /* bit[6]    : [6] ��reserved  */
        unsigned int  pw_dis0_7reserved     : 1;  /* bit[7]    : [7] ��reserved */
        unsigned int  pw_dis0_8hifi         : 1;  /* bit[8]    : [8] ��HIFI�µ��� �� */
        unsigned int  pw_dis0_9reserved     : 1;  /* bit[9]    : [9] ��reserved */
        unsigned int  pw_dis0_10reserved    : 1;  /* bit[10]   : [10] ��reserved */
        unsigned int  pw_dis0_11reserved    : 1;  /* bit[11]   : [11] ��reserved */
        unsigned int  pw_dis0_12acpucluster : 1;  /* bit[12]   : [12] ��ACPU SCU��L2C�߼��µ�������MTCMOS��������Դͨ������PMU����ʵ�ֿ��أ��Ĵ�������pw_en0_12acpucluter�������õ�Դ�ȶ�ʱ�䣬��Դ�ȶ�ʱ��ɲ�ѯ����ACPU SCU��L2C����ISOͬʱ����ACPU L2����MEM�����źš� */
        unsigned int  pw_dis0_13reserved    : 1;  /* bit[13]   : [13] ��reserved */
        unsigned int  pw_dis0_14reserved    : 1;  /* bit[14]   : [14] ��reserved */
        unsigned int  pw_dis0_15reserved    : 1;  /* bit[15]   : [15] ��reserved */
        unsigned int  pw_dis0_31reserved    : 16; /* bit[16-31]: [31:16] ��reserved */
    } reg;
} SOC_AO_SCTRL_SC_PW_MTCMOS_DIS0_UNION;
#endif
#define SOC_AO_SCTRL_SC_PW_MTCMOS_DIS0_pw_dis0_0peri_START          (0)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_DIS0_pw_dis0_0peri_END            (0)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_DIS0_pw_dis0_1g3d_START           (1)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_DIS0_pw_dis0_1g3d_END             (1)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_DIS0_pw_dis0_2codecisp_START      (2)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_DIS0_pw_dis0_2codecisp_END        (2)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_DIS0_pw_dis0_3reserved_START      (3)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_DIS0_pw_dis0_3reserved_END        (3)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_DIS0_pw_dis0_4mcpu_START          (4)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_DIS0_pw_dis0_4mcpu_END            (4)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_DIS0_pw_dis0_5bbpharqmem_START    (5)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_DIS0_pw_dis0_5bbpharqmem_END      (5)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_DIS0_pw_dis0_6reserved_START      (6)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_DIS0_pw_dis0_6reserved_END        (6)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_DIS0_pw_dis0_7reserved_START      (7)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_DIS0_pw_dis0_7reserved_END        (7)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_DIS0_pw_dis0_8hifi_START          (8)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_DIS0_pw_dis0_8hifi_END            (8)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_DIS0_pw_dis0_9reserved_START      (9)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_DIS0_pw_dis0_9reserved_END        (9)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_DIS0_pw_dis0_10reserved_START     (10)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_DIS0_pw_dis0_10reserved_END       (10)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_DIS0_pw_dis0_11reserved_START     (11)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_DIS0_pw_dis0_11reserved_END       (11)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_DIS0_pw_dis0_12acpucluster_START  (12)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_DIS0_pw_dis0_12acpucluster_END    (12)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_DIS0_pw_dis0_13reserved_START     (13)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_DIS0_pw_dis0_13reserved_END       (13)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_DIS0_pw_dis0_14reserved_START     (14)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_DIS0_pw_dis0_14reserved_END       (14)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_DIS0_pw_dis0_15reserved_START     (15)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_DIS0_pw_dis0_15reserved_END       (15)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_DIS0_pw_dis0_31reserved_START     (16)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_DIS0_pw_dis0_31reserved_END       (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_PW_MTCMOS_STAT0_UNION
 �ṹ˵��  : SC_PW_MTCMOS_STAT0 �Ĵ����ṹ���塣��ַƫ����:0x838����ֵ:0xFFFFFFFF�����:32
 �Ĵ���˵��: �µ���MTCMOS����״̬��ͨ��SC_PW_EN0��SC_PW_DIS0�޸�MTCMOS����״̬��
            ÿ��Bit���壺
            0����Դ�رգ�
            1����Դ�򿪡�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pw_mtcmos_ack_stat0_0peri         : 1;  /* bit[0]    : [0] �����������͹��Ŀ����ź���Ӳ�����ƣ����������Ч����Դ���ⲿPMUֱ���ṩ����mtcmos timeoutָʾ�۲���Ч�� */
        unsigned int  pw_mtcmos_ack_stat0_1g3d          : 1;  /* bit[1]    : [1] ��G3D�µ����� */
        unsigned int  pw_mtcmos_ack_stat0_2codecisp     : 1;  /* bit[2]    : [2] ��CODEC+ISP�µ�����  */
        unsigned int  pw_mtcmos_ack_stat0_3reserved     : 1;  /* bit[3]    : [3] ��reserved */
        unsigned int  pw_mtcmos_ack_stat0_4mcpu         : 1;  /* bit[4]    : [4] ��MCPU�µ�����  */
        unsigned int  pw_mtcmos_ack_stat0_5bbpharqmem   : 1;  /* bit[5]    : [5] ��BBP Harq Memory�����µ������  */
        unsigned int  pw_mtcmos_ack_stat0_6reserved     : 1;  /* bit[6]    : [6] ��reserved  */
        unsigned int  pw_mtcmos_ack_stat0_7reserved     : 1;  /* bit[7]    : [7] ��reserved */
        unsigned int  pw_mtcmos_ack_stat0_8hifi         : 1;  /* bit[8]    : [8] ��HIFI�µ��� �� */
        unsigned int  pw_mtcmos_ack_stat0_9reserved     : 1;  /* bit[9]    : [9] ��reserved */
        unsigned int  pw_mtcmos_ack_stat0_10reserved    : 1;  /* bit[10]   : [10] ��reserved */
        unsigned int  pw_mtcmos_ack_stat0_11reserved    : 1;  /* bit[11]   : [11] ��reserved */
        unsigned int  pw_mtcmos_ack_stat0_12acpucluster : 1;  /* bit[12]   : [12] ��ACPU SCU��L2C�߼��µ�������MTCMOS��������Դͨ������PMU����ʵ�ֿ��أ��Ĵ�������pw_en0_12acpucluter�������õ�Դ�ȶ�ʱ�䣬��Դ�ȶ�ʱ��ɲ�ѯ����ACPU SCU��L2C����ISOͬʱ����ACPU L2����MEM�����źš� */
        unsigned int  pw_mtcmos_ack_stat0_13reserved    : 1;  /* bit[13]   : [13] ��reserved */
        unsigned int  pw_mtcmos_ack_stat0_14reserved    : 1;  /* bit[14]   : [14] ��reserved */
        unsigned int  pw_mtcmos_ack_stat0_15reserved    : 1;  /* bit[15]   : [15] ��reserved */
        unsigned int  pw_mtcmos_ack_stat0_31reserved    : 16; /* bit[16-31]: [31:16] ��reserved */
    } reg;
} SOC_AO_SCTRL_SC_PW_MTCMOS_STAT0_UNION;
#endif
#define SOC_AO_SCTRL_SC_PW_MTCMOS_STAT0_pw_mtcmos_ack_stat0_0peri_START          (0)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_STAT0_pw_mtcmos_ack_stat0_0peri_END            (0)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_STAT0_pw_mtcmos_ack_stat0_1g3d_START           (1)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_STAT0_pw_mtcmos_ack_stat0_1g3d_END             (1)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_STAT0_pw_mtcmos_ack_stat0_2codecisp_START      (2)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_STAT0_pw_mtcmos_ack_stat0_2codecisp_END        (2)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_STAT0_pw_mtcmos_ack_stat0_3reserved_START      (3)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_STAT0_pw_mtcmos_ack_stat0_3reserved_END        (3)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_STAT0_pw_mtcmos_ack_stat0_4mcpu_START          (4)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_STAT0_pw_mtcmos_ack_stat0_4mcpu_END            (4)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_STAT0_pw_mtcmos_ack_stat0_5bbpharqmem_START    (5)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_STAT0_pw_mtcmos_ack_stat0_5bbpharqmem_END      (5)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_STAT0_pw_mtcmos_ack_stat0_6reserved_START      (6)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_STAT0_pw_mtcmos_ack_stat0_6reserved_END        (6)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_STAT0_pw_mtcmos_ack_stat0_7reserved_START      (7)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_STAT0_pw_mtcmos_ack_stat0_7reserved_END        (7)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_STAT0_pw_mtcmos_ack_stat0_8hifi_START          (8)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_STAT0_pw_mtcmos_ack_stat0_8hifi_END            (8)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_STAT0_pw_mtcmos_ack_stat0_9reserved_START      (9)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_STAT0_pw_mtcmos_ack_stat0_9reserved_END        (9)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_STAT0_pw_mtcmos_ack_stat0_10reserved_START     (10)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_STAT0_pw_mtcmos_ack_stat0_10reserved_END       (10)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_STAT0_pw_mtcmos_ack_stat0_11reserved_START     (11)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_STAT0_pw_mtcmos_ack_stat0_11reserved_END       (11)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_STAT0_pw_mtcmos_ack_stat0_12acpucluster_START  (12)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_STAT0_pw_mtcmos_ack_stat0_12acpucluster_END    (12)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_STAT0_pw_mtcmos_ack_stat0_13reserved_START     (13)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_STAT0_pw_mtcmos_ack_stat0_13reserved_END       (13)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_STAT0_pw_mtcmos_ack_stat0_14reserved_START     (14)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_STAT0_pw_mtcmos_ack_stat0_14reserved_END       (14)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_STAT0_pw_mtcmos_ack_stat0_15reserved_START     (15)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_STAT0_pw_mtcmos_ack_stat0_15reserved_END       (15)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_STAT0_pw_mtcmos_ack_stat0_31reserved_START     (16)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_STAT0_pw_mtcmos_ack_stat0_31reserved_END       (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_PW_MTCMOS_ACK_STAT0_UNION
 �ṹ˵��  : SC_PW_MTCMOS_ACK_STAT0 �Ĵ����ṹ���塣��ַƫ����:0x83C����ֵ:0x0001FFFF�����:32
 �Ĵ���˵��: �µ���MTCMOS״̬��ͨ��SC_PW_EN0��SC_PW_DIS0�޸�MTCMOS����״̬���پ��������������������
            ÿ��Bit���壺
            0����Դ�رգ�
            1����Դ�򿪡�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pw_mtcmos_ack_stat0_0peri         : 1;  /* bit[0]    : [0] �����������͹��Ŀ����ź���Ӳ�����ƣ����������Ч����Դ���ⲿPMUֱ���ṩ����mtcmos timeoutָʾ�۲���Ч�� */
        unsigned int  pw_mtcmos_ack_stat0_1g3d          : 1;  /* bit[1]    : [1] ��G3D�µ����� */
        unsigned int  pw_mtcmos_ack_stat0_2codecisp     : 1;  /* bit[2]    : [2] ��CODEC+ISP�µ�����  */
        unsigned int  pw_mtcmos_ack_stat0_3reserved     : 1;  /* bit[3]    : [3] ��reserved */
        unsigned int  pw_mtcmos_ack_stat0_4mcpu         : 1;  /* bit[4]    : [4] ��MCPU�µ�����  */
        unsigned int  pw_mtcmos_ack_stat0_5bbpharqmem   : 1;  /* bit[5]    : [5] ��BBP Harq Memory�����µ������  */
        unsigned int  pw_mtcmos_ack_stat0_6reserved     : 1;  /* bit[6]    : [6] ��reserved  */
        unsigned int  pw_mtcmos_ack_stat0_7reserved     : 1;  /* bit[7]    : [7] ��reserved */
        unsigned int  pw_mtcmos_ack_stat0_8hifi         : 1;  /* bit[8]    : [8] ��HIFI�µ��� �� */
        unsigned int  pw_mtcmos_ack_stat0_9reserved     : 1;  /* bit[9]    : [9] ��reserved */
        unsigned int  pw_mtcmos_ack_stat0_10reserved    : 1;  /* bit[10]   : [10] ��reserved */
        unsigned int  pw_mtcmos_ack_stat0_11reserved    : 1;  /* bit[11]   : [11] ��reserved */
        unsigned int  pw_mtcmos_ack_stat0_12acpucluster : 1;  /* bit[12]   : [12] ��ACPU SCU��L2C�߼��µ�������MTCMOS��������Դͨ������PMU����ʵ�ֿ��أ��Ĵ�������pw_en0_12acpucluter�������õ�Դ�ȶ�ʱ�䣬��Դ�ȶ�ʱ��ɲ�ѯ����ACPU SCU��L2C����ISOͬʱ����ACPU L2����MEM�����źš� */
        unsigned int  pw_mtcmos_ack_stat0_13reserved    : 1;  /* bit[13]   : [13] ��reserved */
        unsigned int  pw_mtcmos_ack_stat0_14reserved    : 1;  /* bit[14]   : [14] ��reserved */
        unsigned int  pw_mtcmos_ack_stat0_15reserved    : 1;  /* bit[15]   : [15] ��reserved */
        unsigned int  pw_mtcmos_ack_stat0_31reserved    : 16; /* bit[16-31]: [31:16] ��reserved */
    } reg;
} SOC_AO_SCTRL_SC_PW_MTCMOS_ACK_STAT0_UNION;
#endif
#define SOC_AO_SCTRL_SC_PW_MTCMOS_ACK_STAT0_pw_mtcmos_ack_stat0_0peri_START          (0)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_ACK_STAT0_pw_mtcmos_ack_stat0_0peri_END            (0)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_ACK_STAT0_pw_mtcmos_ack_stat0_1g3d_START           (1)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_ACK_STAT0_pw_mtcmos_ack_stat0_1g3d_END             (1)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_ACK_STAT0_pw_mtcmos_ack_stat0_2codecisp_START      (2)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_ACK_STAT0_pw_mtcmos_ack_stat0_2codecisp_END        (2)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_ACK_STAT0_pw_mtcmos_ack_stat0_3reserved_START      (3)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_ACK_STAT0_pw_mtcmos_ack_stat0_3reserved_END        (3)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_ACK_STAT0_pw_mtcmos_ack_stat0_4mcpu_START          (4)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_ACK_STAT0_pw_mtcmos_ack_stat0_4mcpu_END            (4)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_ACK_STAT0_pw_mtcmos_ack_stat0_5bbpharqmem_START    (5)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_ACK_STAT0_pw_mtcmos_ack_stat0_5bbpharqmem_END      (5)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_ACK_STAT0_pw_mtcmos_ack_stat0_6reserved_START      (6)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_ACK_STAT0_pw_mtcmos_ack_stat0_6reserved_END        (6)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_ACK_STAT0_pw_mtcmos_ack_stat0_7reserved_START      (7)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_ACK_STAT0_pw_mtcmos_ack_stat0_7reserved_END        (7)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_ACK_STAT0_pw_mtcmos_ack_stat0_8hifi_START          (8)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_ACK_STAT0_pw_mtcmos_ack_stat0_8hifi_END            (8)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_ACK_STAT0_pw_mtcmos_ack_stat0_9reserved_START      (9)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_ACK_STAT0_pw_mtcmos_ack_stat0_9reserved_END        (9)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_ACK_STAT0_pw_mtcmos_ack_stat0_10reserved_START     (10)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_ACK_STAT0_pw_mtcmos_ack_stat0_10reserved_END       (10)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_ACK_STAT0_pw_mtcmos_ack_stat0_11reserved_START     (11)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_ACK_STAT0_pw_mtcmos_ack_stat0_11reserved_END       (11)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_ACK_STAT0_pw_mtcmos_ack_stat0_12acpucluster_START  (12)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_ACK_STAT0_pw_mtcmos_ack_stat0_12acpucluster_END    (12)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_ACK_STAT0_pw_mtcmos_ack_stat0_13reserved_START     (13)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_ACK_STAT0_pw_mtcmos_ack_stat0_13reserved_END       (13)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_ACK_STAT0_pw_mtcmos_ack_stat0_14reserved_START     (14)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_ACK_STAT0_pw_mtcmos_ack_stat0_14reserved_END       (14)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_ACK_STAT0_pw_mtcmos_ack_stat0_15reserved_START     (15)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_ACK_STAT0_pw_mtcmos_ack_stat0_15reserved_END       (15)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_ACK_STAT0_pw_mtcmos_ack_stat0_31reserved_START     (16)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_ACK_STAT0_pw_mtcmos_ack_stat0_31reserved_END       (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_PW_MTCMOS_TIMEOUT_STAT0_UNION
 �ṹ˵��  : SC_PW_MTCMOS_TIMEOUT_STAT0 �Ĵ����ṹ���塣��ַƫ����:0x840����ֵ:0x00000000�����:32
 �Ĵ���˵��: ϵͳPOWER״̬�Ĵ���1�����ڼ��ϵͳ������POWER״̬��
            0����Դ�ȶ�������δ�����
            1����Դ�ȶ���������MTCMOS���ⲿ��Դ�ȶ���״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pw_mtcmos_timeout_stat0_0peri         : 1;  /* bit[0]    : [0] �����������͹��Ŀ����ź���Ӳ�����ƣ����������Ч����Դ���ⲿPMUֱ���ṩ����mtcmos timeoutָʾ�۲���Ч�� */
        unsigned int  pw_mtcmos_timeout_stat0_1g3d          : 1;  /* bit[1]    : [1] ��G3D�µ����� */
        unsigned int  pw_mtcmos_timeout_stat0_2codecisp     : 1;  /* bit[2]    : [2] ��CODEC+ISP�µ�����  */
        unsigned int  pw_mtcmos_timeout_stat0_3reserved     : 1;  /* bit[3]    : [3] ��reserved */
        unsigned int  pw_mtcmos_timeout_stat0_4mcpu         : 1;  /* bit[4]    : [4] ��MCPU�µ�����  */
        unsigned int  pw_mtcmos_timeout_stat0_5bbpharqmem   : 1;  /* bit[5]    : [5] ��BBP Harq Memory�����µ������  */
        unsigned int  pw_mtcmos_timeout_stat0_6reserved     : 1;  /* bit[6]    : [6] ��reserved  */
        unsigned int  pw_mtcmos_timeout_stat0_7reserved     : 1;  /* bit[7]    : [7] ��reserved */
        unsigned int  pw_mtcmos_timeout_stat0_8hifi         : 1;  /* bit[8]    : [8] ��HIFI�µ��� �� */
        unsigned int  pw_mtcmos_timeout_stat0_9reserved     : 1;  /* bit[9]    : [9] ��reserved */
        unsigned int  pw_mtcmos_timeout_stat0_10reserved    : 1;  /* bit[10]   : [10] ��reserved */
        unsigned int  pw_mtcmos_timeout_stat0_11reserved    : 1;  /* bit[11]   : [11] ��reserved */
        unsigned int  pw_mtcmos_timeout_stat0_12acpucluster : 1;  /* bit[12]   : [12] ��ACPU SCU��L2C�߼��µ�������MTCMOS��������Դͨ������PMU����ʵ�ֿ��أ��Ĵ�������pw_en0_12acpucluter�������õ�Դ�ȶ�ʱ�䣬��Դ�ȶ�ʱ��ɲ�ѯ����ACPU SCU��L2C����ISOͬʱ����ACPU L2����MEM�����źš� */
        unsigned int  pw_mtcmos_timeout_stat0_13reserved    : 1;  /* bit[13]   : [13] ��reserved */
        unsigned int  pw_mtcmos_timeout_stat0_14reserved    : 1;  /* bit[14]   : [14] ��reserved */
        unsigned int  pw_mtcmos_timeout_stat0_15reserved    : 1;  /* bit[15]   : [15] ��reserved */
        unsigned int  pw_mtcmos_timeout_stat0_31reserved    : 16; /* bit[16-31]: [31:16] ��reserved */
    } reg;
} SOC_AO_SCTRL_SC_PW_MTCMOS_TIMEOUT_STAT0_UNION;
#endif
#define SOC_AO_SCTRL_SC_PW_MTCMOS_TIMEOUT_STAT0_pw_mtcmos_timeout_stat0_0peri_START          (0)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_TIMEOUT_STAT0_pw_mtcmos_timeout_stat0_0peri_END            (0)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_TIMEOUT_STAT0_pw_mtcmos_timeout_stat0_1g3d_START           (1)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_TIMEOUT_STAT0_pw_mtcmos_timeout_stat0_1g3d_END             (1)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_TIMEOUT_STAT0_pw_mtcmos_timeout_stat0_2codecisp_START      (2)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_TIMEOUT_STAT0_pw_mtcmos_timeout_stat0_2codecisp_END        (2)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_TIMEOUT_STAT0_pw_mtcmos_timeout_stat0_3reserved_START      (3)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_TIMEOUT_STAT0_pw_mtcmos_timeout_stat0_3reserved_END        (3)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_TIMEOUT_STAT0_pw_mtcmos_timeout_stat0_4mcpu_START          (4)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_TIMEOUT_STAT0_pw_mtcmos_timeout_stat0_4mcpu_END            (4)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_TIMEOUT_STAT0_pw_mtcmos_timeout_stat0_5bbpharqmem_START    (5)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_TIMEOUT_STAT0_pw_mtcmos_timeout_stat0_5bbpharqmem_END      (5)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_TIMEOUT_STAT0_pw_mtcmos_timeout_stat0_6reserved_START      (6)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_TIMEOUT_STAT0_pw_mtcmos_timeout_stat0_6reserved_END        (6)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_TIMEOUT_STAT0_pw_mtcmos_timeout_stat0_7reserved_START      (7)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_TIMEOUT_STAT0_pw_mtcmos_timeout_stat0_7reserved_END        (7)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_TIMEOUT_STAT0_pw_mtcmos_timeout_stat0_8hifi_START          (8)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_TIMEOUT_STAT0_pw_mtcmos_timeout_stat0_8hifi_END            (8)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_TIMEOUT_STAT0_pw_mtcmos_timeout_stat0_9reserved_START      (9)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_TIMEOUT_STAT0_pw_mtcmos_timeout_stat0_9reserved_END        (9)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_TIMEOUT_STAT0_pw_mtcmos_timeout_stat0_10reserved_START     (10)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_TIMEOUT_STAT0_pw_mtcmos_timeout_stat0_10reserved_END       (10)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_TIMEOUT_STAT0_pw_mtcmos_timeout_stat0_11reserved_START     (11)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_TIMEOUT_STAT0_pw_mtcmos_timeout_stat0_11reserved_END       (11)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_TIMEOUT_STAT0_pw_mtcmos_timeout_stat0_12acpucluster_START  (12)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_TIMEOUT_STAT0_pw_mtcmos_timeout_stat0_12acpucluster_END    (12)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_TIMEOUT_STAT0_pw_mtcmos_timeout_stat0_13reserved_START     (13)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_TIMEOUT_STAT0_pw_mtcmos_timeout_stat0_13reserved_END       (13)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_TIMEOUT_STAT0_pw_mtcmos_timeout_stat0_14reserved_START     (14)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_TIMEOUT_STAT0_pw_mtcmos_timeout_stat0_14reserved_END       (14)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_TIMEOUT_STAT0_pw_mtcmos_timeout_stat0_15reserved_START     (15)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_TIMEOUT_STAT0_pw_mtcmos_timeout_stat0_15reserved_END       (15)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_TIMEOUT_STAT0_pw_mtcmos_timeout_stat0_31reserved_START     (16)
#define SOC_AO_SCTRL_SC_PW_MTCMOS_TIMEOUT_STAT0_pw_mtcmos_timeout_stat0_31reserved_END       (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_PW_STAT0_UNION
 �ṹ˵��  : SC_PW_STAT0 �Ĵ����ṹ���塣��ַƫ����:0x850����ֵ:0x03008000�����:32
 �Ĵ���˵��: ϵͳPOWER״̬0�Ĵ��������ڼ��ϵͳ������POWER״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  buck3_rise_cnt          : 8;  /* bit[0-7]  : Buck3�����ؼ���������ʾ�������������ͳ�ƣ�������Χ0~255�� */
        unsigned int  hifi2mcu_wakeup_int_out : 1;  /* bit[8]    : HIFI�����ж�״̬�Ĵ�����
                                                                   0���޻����жϣ�
                                                                   1���л����жϡ� */
        unsigned int  mdm_wakeup_int          : 1;  /* bit[9]    : CCPU�����ж�״̬�Ĵ�����
                                                                   0���޻����жϣ�
                                                                   1���л����жϡ� */
        unsigned int  acpu2mcu_wakeup_int_out : 1;  /* bit[10]   : ACPU�����ж�״̬�Ĵ�����
                                                                   0���޻����жϣ�
                                                                   1���л����жϡ� */
        unsigned int  mcu_wakeup_int_out      : 1;  /* bit[11]   : SOCϵͳ�����ж�״̬�Ĵ���������ACPU��MCU��MDM��HiFi�����ж��ܺ͡�
                                                                   0���޻����жϣ�
                                                                   1���л����жϡ� */
        unsigned int  soc_pw_up_stat          : 1;  /* bit[12]   : ָʾ�����µ����Ƿ�Ϊ���������������
                                                                   0��ϵͳ�ϵ�������
                                                                   1����������������� */
        unsigned int  mcu2mcu_wakeup_int_out  : 1;  /* bit[13]   : MCU�����ж�״̬�Ĵ�����
                                                                   0���޻����жϣ�
                                                                   1���л����жϡ� */
        unsigned int  pll_sw_ok               : 1;  /* bit[14]   : pll_sw_ok״̬�Ĵ�����
                                                                   0���л�δ��ɣ�
                                                                   1���л���ɡ� */
        unsigned int  xtal_sw_ok              : 1;  /* bit[15]   : xtal_sw_ok״̬�Ĵ�����
                                                                   0���л�δ��ɣ�
                                                                   1���л���ɡ� */
        unsigned int  reserved_0              : 8;  /* bit[16-23]: reserved */
        unsigned int  SLEEPHOLDREQn           : 1;  /* bit[24]   : MCU SLEEPHOLDREQn
                                                                   0�� req extend the sleep state��
                                                                   1�� not req extend the sleep state�� */
        unsigned int  SLEEPHOLDACKn           : 1;  /* bit[25]   : MCU SLEEPHOLDACKn
                                                                   0�� ack extend the sleep state��
                                                                   1�� ack not extend the sleep state�� */
        unsigned int  reserved_1              : 2;  /* bit[26-27]: reserved */
        unsigned int  pw_stat                 : 4;  /* bit[28-31]: ϵͳ��ѹ����״̬����ǰ״ָ̬ʾ��
                                                                   0x0��PWON��
                                                                   0x1��PWDNCLK��
                                                                   0x2��PWDNISO��
                                                                   0x3��PWDNRST��
                                                                   0x4��MTCMOFF��
                                                                   0x5��PWOFF��
                                                                   0x6��MTCMON��
                                                                   0x7��PWONISO��
                                                                   0x8��PWONCLK��
                                                                   0x9��PWONRST��
                                                                   0xB��PWDNRET��
                                                                   0xD��PWONRET��
                                                                   0xF��RETSTB��
                                                                   ������reserved�� */
    } reg;
} SOC_AO_SCTRL_SC_PW_STAT0_UNION;
#endif
#define SOC_AO_SCTRL_SC_PW_STAT0_buck3_rise_cnt_START           (0)
#define SOC_AO_SCTRL_SC_PW_STAT0_buck3_rise_cnt_END             (7)
#define SOC_AO_SCTRL_SC_PW_STAT0_hifi2mcu_wakeup_int_out_START  (8)
#define SOC_AO_SCTRL_SC_PW_STAT0_hifi2mcu_wakeup_int_out_END    (8)
#define SOC_AO_SCTRL_SC_PW_STAT0_mdm_wakeup_int_START           (9)
#define SOC_AO_SCTRL_SC_PW_STAT0_mdm_wakeup_int_END             (9)
#define SOC_AO_SCTRL_SC_PW_STAT0_acpu2mcu_wakeup_int_out_START  (10)
#define SOC_AO_SCTRL_SC_PW_STAT0_acpu2mcu_wakeup_int_out_END    (10)
#define SOC_AO_SCTRL_SC_PW_STAT0_mcu_wakeup_int_out_START       (11)
#define SOC_AO_SCTRL_SC_PW_STAT0_mcu_wakeup_int_out_END         (11)
#define SOC_AO_SCTRL_SC_PW_STAT0_soc_pw_up_stat_START           (12)
#define SOC_AO_SCTRL_SC_PW_STAT0_soc_pw_up_stat_END             (12)
#define SOC_AO_SCTRL_SC_PW_STAT0_mcu2mcu_wakeup_int_out_START   (13)
#define SOC_AO_SCTRL_SC_PW_STAT0_mcu2mcu_wakeup_int_out_END     (13)
#define SOC_AO_SCTRL_SC_PW_STAT0_pll_sw_ok_START                (14)
#define SOC_AO_SCTRL_SC_PW_STAT0_pll_sw_ok_END                  (14)
#define SOC_AO_SCTRL_SC_PW_STAT0_xtal_sw_ok_START               (15)
#define SOC_AO_SCTRL_SC_PW_STAT0_xtal_sw_ok_END                 (15)
#define SOC_AO_SCTRL_SC_PW_STAT0_SLEEPHOLDREQn_START            (24)
#define SOC_AO_SCTRL_SC_PW_STAT0_SLEEPHOLDREQn_END              (24)
#define SOC_AO_SCTRL_SC_PW_STAT0_SLEEPHOLDACKn_START            (25)
#define SOC_AO_SCTRL_SC_PW_STAT0_SLEEPHOLDACKn_END              (25)
#define SOC_AO_SCTRL_SC_PW_STAT0_pw_stat_START                  (28)
#define SOC_AO_SCTRL_SC_PW_STAT0_pw_stat_END                    (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_PW_STAT1_UNION
 �ṹ˵��  : SC_PW_STAT1 �Ĵ����ṹ���塣��ַƫ����:0x854����ֵ:0x00000000�����:32
 �Ĵ���˵��: ϵͳPOWER״̬1�Ĵ�����POWER DOMAIN IDLEACK״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved_0             : 8;  /* bit[0-7]  : reserved */
        unsigned int  mdm_nsp_domain_idleack : 1;  /* bit[8]    : mdm_nsp_domain_idleack
                                                                  0�� idle req not ack��
                                                                  1�� idle req ack��
                                                                  when this domain pwdn or rst,it still can be accessed if idleack and idle both valid�� */
        unsigned int  mdm_nsp_domain_idle    : 1;  /* bit[9]    : mdm_nsp_domain_idle
                                                                  0�� domian not idle��
                                                                  1�� domain in idle��
                                                                  when this domain pwdn or rst,it still can be accessed if idleack and idle both valid�� */
        unsigned int  dma_domain_idleack     : 1;  /* bit[10]   : dma_domain_idleack
                                                                  0�� idle req not ack��
                                                                  1�� idle req ack��
                                                                  when this domain pwdn or rst,it still can be accessed if idleack and idle both valid�� */
        unsigned int  dma_domain_idle        : 1;  /* bit[11]   : dma_domain_idle
                                                                  0�� domian not idle��
                                                                  1�� domain in idle��
                                                                  when this domain pwdn or rst,it still can be accessed if idleack and idle both valid�� */
        unsigned int  ao_domain_idleack      : 1;  /* bit[12]   : ao_domain_idleack
                                                                  0�� idle req not ack��
                                                                  1�� idle req ack��
                                                                  when this domain pwdn or rst,it still can be accessed if idleack and idle both valid�� */
        unsigned int  ao_domain_idle         : 1;  /* bit[13]   : ao_domain_idle
                                                                  0�� domian not idle��
                                                                  1�� domain in idle��
                                                                  when this domain pwdn or rst,it still can be accessed if idleack and idle both valid�� */
        unsigned int  sysnoc_domain_idleack  : 1;  /* bit[14]   : sysnoc_domain_idleack
                                                                  0�� idle req not ack
                                                                  1�� idle req ack
                                                                  when this domain pwdn or rst,it still can be accessed if idleack and idle both valid */
        unsigned int  sysnoc_domain_idle     : 1;  /* bit[15]   : sysnoc_domain_idle
                                                                  0�� domian not idle��
                                                                  1�� domain in idle��
                                                                  when this domain pwdn or rst,it still can be accessed if idleack and idle both valid�� */
        unsigned int  g3d_domain_idleack     : 1;  /* bit[16]   : g3d_domain_idleack
                                                                  0�� idle req not ack��
                                                                  1�� idle req ack��
                                                                  when this domain pwdn or rst,it still can be accessed if idleack and idle both valid�� */
        unsigned int  g3d_domain_idle        : 1;  /* bit[17]   : g3d_domain_idle
                                                                  0�� domian not idle��
                                                                  1�� domain in idle��
                                                                  when this domain pwdn or rst,it still can be accessed if idleack and idle both valid�� */
        unsigned int  ccpu_domain_idleack    : 1;  /* bit[18]   : ccpu_domain_idleack
                                                                  0�� idle req not ack��
                                                                  1�� idle req ack��
                                                                  when this domain pwdn or rst,it still can be accessed if idleack and idle both valid�� */
        unsigned int  ccpu_domain_idle       : 1;  /* bit[19]   : ccpu_domain_idle
                                                                  0�� domian not idle
                                                                  1�� domain in idle
                                                                  when this domain pwdn or rst,it still can be accessed if idleack and idle both valid */
        unsigned int  mnoc_domain_idleack    : 1;  /* bit[20]   : mnoc_domain_idleack
                                                                  0�� idle req not ack��
                                                                  1�� idle req ack��
                                                                  when this domain pwdn or rst,it still can be accessed if idleack and idle both valid�� */
        unsigned int  mnoc_domain_idle       : 1;  /* bit[21]   : mnoc_domain_idle
                                                                  0�� domian not idle��
                                                                  1�� domain in idle��
                                                                  when this domain pwdn or rst,it still can be accessed if idleack and idle both valid�� */
        unsigned int  video_domain_idleack   : 1;  /* bit[22]   : video_domain_idleack
                                                                  0�� idle req not ack��
                                                                  1�� idle req ack��
                                                                  when this domain pwdn or rst,it still can be accessed if idleack and idle both valid�� */
        unsigned int  video_domain_idle      : 1;  /* bit[23]   : video_domain_idle
                                                                  0�� domian not idle��
                                                                  1�� domain in idle��
                                                                  when this domain pwdn or rst,it still can be accessed if idleack and idle both valid�� */
        unsigned int  ade_domain_idleack     : 1;  /* bit[24]   : ade_domain_idleack
                                                                  0�� idle req not ack��
                                                                  1�� idle req ack��
                                                                  when this domain pwdn or rst,it still can be accessed if idleack and idle both valid�� */
        unsigned int  ade_domain_idle        : 1;  /* bit[25]   : ade_domain_idle
                                                                  0�� domian not idle��
                                                                  1�� domain in idle��
                                                                  when this domain pwdn or rst,it still can be accessed if idleack and idle both valid�� */
        unsigned int  reserved_1             : 6;  /* bit[26-31]: reserved */
    } reg;
} SOC_AO_SCTRL_SC_PW_STAT1_UNION;
#endif
#define SOC_AO_SCTRL_SC_PW_STAT1_mdm_nsp_domain_idleack_START  (8)
#define SOC_AO_SCTRL_SC_PW_STAT1_mdm_nsp_domain_idleack_END    (8)
#define SOC_AO_SCTRL_SC_PW_STAT1_mdm_nsp_domain_idle_START     (9)
#define SOC_AO_SCTRL_SC_PW_STAT1_mdm_nsp_domain_idle_END       (9)
#define SOC_AO_SCTRL_SC_PW_STAT1_dma_domain_idleack_START      (10)
#define SOC_AO_SCTRL_SC_PW_STAT1_dma_domain_idleack_END        (10)
#define SOC_AO_SCTRL_SC_PW_STAT1_dma_domain_idle_START         (11)
#define SOC_AO_SCTRL_SC_PW_STAT1_dma_domain_idle_END           (11)
#define SOC_AO_SCTRL_SC_PW_STAT1_ao_domain_idleack_START       (12)
#define SOC_AO_SCTRL_SC_PW_STAT1_ao_domain_idleack_END         (12)
#define SOC_AO_SCTRL_SC_PW_STAT1_ao_domain_idle_START          (13)
#define SOC_AO_SCTRL_SC_PW_STAT1_ao_domain_idle_END            (13)
#define SOC_AO_SCTRL_SC_PW_STAT1_sysnoc_domain_idleack_START   (14)
#define SOC_AO_SCTRL_SC_PW_STAT1_sysnoc_domain_idleack_END     (14)
#define SOC_AO_SCTRL_SC_PW_STAT1_sysnoc_domain_idle_START      (15)
#define SOC_AO_SCTRL_SC_PW_STAT1_sysnoc_domain_idle_END        (15)
#define SOC_AO_SCTRL_SC_PW_STAT1_g3d_domain_idleack_START      (16)
#define SOC_AO_SCTRL_SC_PW_STAT1_g3d_domain_idleack_END        (16)
#define SOC_AO_SCTRL_SC_PW_STAT1_g3d_domain_idle_START         (17)
#define SOC_AO_SCTRL_SC_PW_STAT1_g3d_domain_idle_END           (17)
#define SOC_AO_SCTRL_SC_PW_STAT1_ccpu_domain_idleack_START     (18)
#define SOC_AO_SCTRL_SC_PW_STAT1_ccpu_domain_idleack_END       (18)
#define SOC_AO_SCTRL_SC_PW_STAT1_ccpu_domain_idle_START        (19)
#define SOC_AO_SCTRL_SC_PW_STAT1_ccpu_domain_idle_END          (19)
#define SOC_AO_SCTRL_SC_PW_STAT1_mnoc_domain_idleack_START     (20)
#define SOC_AO_SCTRL_SC_PW_STAT1_mnoc_domain_idleack_END       (20)
#define SOC_AO_SCTRL_SC_PW_STAT1_mnoc_domain_idle_START        (21)
#define SOC_AO_SCTRL_SC_PW_STAT1_mnoc_domain_idle_END          (21)
#define SOC_AO_SCTRL_SC_PW_STAT1_video_domain_idleack_START    (22)
#define SOC_AO_SCTRL_SC_PW_STAT1_video_domain_idleack_END      (22)
#define SOC_AO_SCTRL_SC_PW_STAT1_video_domain_idle_START       (23)
#define SOC_AO_SCTRL_SC_PW_STAT1_video_domain_idle_END         (23)
#define SOC_AO_SCTRL_SC_PW_STAT1_ade_domain_idleack_START      (24)
#define SOC_AO_SCTRL_SC_PW_STAT1_ade_domain_idleack_END        (24)
#define SOC_AO_SCTRL_SC_PW_STAT1_ade_domain_idle_START         (25)
#define SOC_AO_SCTRL_SC_PW_STAT1_ade_domain_idle_END           (25)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_SYSTEST_STAT_UNION
 �ṹ˵��  : SC_SYSTEST_STAT �Ĵ����ṹ���塣��ַƫ����:0x880����ֵ:0x00000009�����:32
 �Ĵ���˵��: ϵͳ״̬�Ĵ���1�����ڼ��ϵͳ��״̬������λ����JTAGģʽ��nand_boot_en��efuse_hw_rd_finish��usim_hpd_sta��ϵͳ״̬��ѯ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  efuse_hw_rd_finish          : 1;  /* bit[0]    : efuse���ݶ�ȡ���ָʾ�źš�
                                                                       0��δ����ϵ�ʱefuse���ݶ�ȡ��
                                                                       1��������ϵ�ʱefuse���ݶ�ȡ�� */
        unsigned int  nand_boot_en                : 1;  /* bit[1]    : ����ģʽ��ѯ
                                                                       0�� Ƭ��Onchiprom������
                                                                       1�� Ƭ��ָʾNAND������������ATE���ԣ�����boot_mode_lock[0]&amp;boot_sel_lockΪ1'b1��Ч�� */
        unsigned int  jtag_trst_n_pin             : 1;  /* bit[2]    : JTAG��λ״̬�Ĵ�����
                                                                       0����λ��
                                                                       1������λ�� */
        unsigned int  pmu_rstin_n_ff2             : 1;  /* bit[3]    : ϵͳ��λȥ��ǰָʾ������������
                                                                       0��ϵͳ��λ��
                                                                       1��ϵͳ�⸴λ��
                                                                       ע���˽ӿ�������ɼ�����ɾ�� */
        unsigned int  usim0_hpd_de_bounce_sel_ff3 : 1;  /* bit[4]    : usim0_hpd�ܽ�����ȥ����״̬
                                                                       0��IO����1'b0��
                                                                       1��IO����1'b1�� */
        unsigned int  usim1_hpd_de_bounce_sel_ff3 : 1;  /* bit[5]    : usim1_hpd�ܽ�����ȥ����״̬
                                                                       0��IO����1'b0��
                                                                       1��IO����1'b1�� */
        unsigned int  usim0_hpd_oen               : 1;  /* bit[6]    : usim0_hpd�ܽ�OEN���״̬
                                                                       0��OEN����1'b0��
                                                                       1��OEN����1'b1�� */
        unsigned int  usim1_hpd_oen               : 1;  /* bit[7]    : usim1_hpd�ܽ�OEN���״̬
                                                                       0��OEN����1'b0��
                                                                       1��OEN����1'b1�� */
        unsigned int  reserved_0                  : 8;  /* bit[8-15] : reserved */
        unsigned int  wdg_rst_req                 : 10; /* bit[16-25]: wdg reset req state
                                                                       [9]�� reserved��
                                                                       [8]�� reserved��
                                                                       [7]�� reserved��
                                                                       [6]�� reserved��
                                                                       [5]�� reserved��
                                                                       [4]�� reserved��
                                                                       [3]�� ����Watchdog��λ�����жϡ�
                                                                       [2]�� HIFI Watchdog��λ�����жϡ�
                                                                       [1]�� CM3 Watchdog0��λ�����жϡ�
                                                                       [0]�� ACPU �ⲿWatchdog��λ�����жϡ� */
        unsigned int  reserved_1                  : 6;  /* bit[26-31]: reserved */
    } reg;
} SOC_AO_SCTRL_SC_SYSTEST_STAT_UNION;
#endif
#define SOC_AO_SCTRL_SC_SYSTEST_STAT_efuse_hw_rd_finish_START           (0)
#define SOC_AO_SCTRL_SC_SYSTEST_STAT_efuse_hw_rd_finish_END             (0)
#define SOC_AO_SCTRL_SC_SYSTEST_STAT_nand_boot_en_START                 (1)
#define SOC_AO_SCTRL_SC_SYSTEST_STAT_nand_boot_en_END                   (1)
#define SOC_AO_SCTRL_SC_SYSTEST_STAT_jtag_trst_n_pin_START              (2)
#define SOC_AO_SCTRL_SC_SYSTEST_STAT_jtag_trst_n_pin_END                (2)
#define SOC_AO_SCTRL_SC_SYSTEST_STAT_pmu_rstin_n_ff2_START              (3)
#define SOC_AO_SCTRL_SC_SYSTEST_STAT_pmu_rstin_n_ff2_END                (3)
#define SOC_AO_SCTRL_SC_SYSTEST_STAT_usim0_hpd_de_bounce_sel_ff3_START  (4)
#define SOC_AO_SCTRL_SC_SYSTEST_STAT_usim0_hpd_de_bounce_sel_ff3_END    (4)
#define SOC_AO_SCTRL_SC_SYSTEST_STAT_usim1_hpd_de_bounce_sel_ff3_START  (5)
#define SOC_AO_SCTRL_SC_SYSTEST_STAT_usim1_hpd_de_bounce_sel_ff3_END    (5)
#define SOC_AO_SCTRL_SC_SYSTEST_STAT_usim0_hpd_oen_START                (6)
#define SOC_AO_SCTRL_SC_SYSTEST_STAT_usim0_hpd_oen_END                  (6)
#define SOC_AO_SCTRL_SC_SYSTEST_STAT_usim1_hpd_oen_START                (7)
#define SOC_AO_SCTRL_SC_SYSTEST_STAT_usim1_hpd_oen_END                  (7)
#define SOC_AO_SCTRL_SC_SYSTEST_STAT_wdg_rst_req_START                  (16)
#define SOC_AO_SCTRL_SC_SYSTEST_STAT_wdg_rst_req_END                    (25)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_SYSTEST_SLICER_CNT0_UNION
 �ṹ˵��  : SC_SYSTEST_SLICER_CNT0 �Ĵ����ṹ���塣��ַƫ����:0x890����ֵ:0x00000000�����:32
 �Ĵ���˵��: 64bit�����������ĵ�32bit��SLICERl_CNT[31:0]��32KHz�ο�ʱ�ӡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  slicer_cnt : 32; /* bit[0-31]: 64bit�����������ĵ�32bit��SLICERl_CNT[31:0]��32KHz�ο�ʱ�ӡ� */
    } reg;
} SOC_AO_SCTRL_SC_SYSTEST_SLICER_CNT0_UNION;
#endif
#define SOC_AO_SCTRL_SC_SYSTEST_SLICER_CNT0_slicer_cnt_START  (0)
#define SOC_AO_SCTRL_SC_SYSTEST_SLICER_CNT0_slicer_cnt_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_SYSTEST_SLICER_CNT1_UNION
 �ṹ˵��  : SC_SYSTEST_SLICER_CNT1 �Ĵ����ṹ���塣��ַƫ����:0x894����ֵ:0x00000000�����:32
 �Ĵ���˵��: 64bit�����������ĸ�32bit��SLICERl_CNT[63:32]��32KHz�ο�ʱ�ӡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  slicer_cnt_high : 32; /* bit[0-31]: 64bit�����������ĸ�32bit��SLICERl_CNT[63:32]��32KHz�ο�ʱ�ӡ� */
    } reg;
} SOC_AO_SCTRL_SC_SYSTEST_SLICER_CNT1_UNION;
#endif
#define SOC_AO_SCTRL_SC_SYSTEST_SLICER_CNT1_slicer_cnt_high_START  (0)
#define SOC_AO_SCTRL_SC_SYSTEST_SLICER_CNT1_slicer_cnt_high_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_PW_CTRL1_UNION
 �ṹ˵��  : SC_PW_CTRL1 �Ĵ����ṹ���塣��ַƫ����:0x8C8����ֵ:0x00000000�����:32
 �Ĵ���˵��: �͹��Ŀ��ƼĴ���1�����ܰ�����������������DOMAIN IDLE����
            [31:16]��ÿһbit˳���Ӧbit15��bit0������bit31��16��bitд1��ͬʱ������bit15��0������Ч����bit31��16��bitд0ʱ������bit15��0���ֲ��䣻
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  acpu_sft_fiq_req           : 1;  /* bit[0]    : acpu soft fiq req,when this bit changed from 1'b0 to 1'b1��ao sc internal int sc_int_en_sta_4acpu_sft_fiq occure�� */
        unsigned int  ccpu_sft_fiq_req           : 1;  /* bit[1]    : ccpu soft fiq req,when this bit changed from 1'b0 to 1'b1��ao sc internal int sc_int_en_sta_31ccpu_sft_fiq occure�� */
        unsigned int  reserved_0                 : 5;  /* bit[2-6]  : reserved */
        unsigned int  mdm_nsp_domain_idlereq     : 1;  /* bit[7]    : mdm_nsp_domain_idlereq
                                                                      0�� normal mode��
                                                                      1�� idle req when this domain idle,power down or rst�� */
        unsigned int  dma_domain_idlereq         : 1;  /* bit[8]    : dma_domain_idlereq
                                                                      0�� normal mode��
                                                                      1�� idle req when this domain idle,power down or rst�� */
        unsigned int  ao_domain_idlereq          : 1;  /* bit[9]    : ao_domain_idlereq (this bit is logic or with another idlreq from peri_sc)
                                                                      0�� normal mode��
                                                                      1�� hardware produce idle req when muc wdg0 rst req announce this domain abnormal�� */
        unsigned int  sysnoc_domain_idlereq      : 1;  /* bit[10]   : sysnoc_domain_idlereq
                                                                      0�� normal mode��
                                                                      1�� idle req when this domain idle,power down or rst�� */
        unsigned int  g3d_domain_idlereq         : 1;  /* bit[11]   : g3d_domain_idlereq
                                                                      0�� normal mode��
                                                                      1�� idle req when this domain idle,power down or rst�� */
        unsigned int  ccpu_domain_idlereq        : 1;  /* bit[12]   : ccpu_domain_idlereq
                                                                      0�� normal mode��
                                                                      1�� idle req when this domain idle,power down or rst�� */
        unsigned int  mnoc_domain_idlereq        : 1;  /* bit[13]   : mnoc_domain_idlereq
                                                                      0�� normal mode��
                                                                      1�� idle req when this domain idle,power down or rst�� */
        unsigned int  video_domain_idlereq       : 1;  /* bit[14]   : video_domain_idlereq
                                                                      0�� normal mode��
                                                                      1�� idle req when this domain idle,power down or rst�� */
        unsigned int  ade_domain_idlereq         : 1;  /* bit[15]   : ade_domain_idlereq
                                                                      0�� normal mode��
                                                                      1�� idle req when this domain idle,power down or rst�� */
        unsigned int  acpu_sft_fiq_req_msk       : 1;  /* bit[16]   : acpu_sft_fiq_req msk */
        unsigned int  ccpu_sft_fiq_req_msk       : 1;  /* bit[17]   : ccpu_sft_fiq_req msk */
        unsigned int  reserved_1                 : 5;  /* bit[18-22]: reserved */
        unsigned int  mdm_nsp_domain_idlereq_msk : 1;  /* bit[23]   : mdm_nsp_domain_idlereq msk */
        unsigned int  dma_domain_idlereq_msk     : 1;  /* bit[24]   : dma_domain_idlereq msk */
        unsigned int  ao_domain_idlereq_msk      : 1;  /* bit[25]   : ao_domain_idlereq msk */
        unsigned int  sysnoc_domain_idlereq_msk  : 1;  /* bit[26]   : sysnoc_domain_idlereq msk */
        unsigned int  g3d_domain_idlereq_msk     : 1;  /* bit[27]   : g3d_domain_idlereq msk */
        unsigned int  ccpu_domain_idlereq_msk    : 1;  /* bit[28]   : ccpu_domain_idlereq msk */
        unsigned int  mnoc_domain_idlereq_msk    : 1;  /* bit[29]   : mnoc_domain_idlereq msk */
        unsigned int  video_domain_idlereq_msk   : 1;  /* bit[30]   : video_domain_idlereq msk */
        unsigned int  ade_domain_idlereq_msk     : 1;  /* bit[31]   : [31]��ade_domain_idlereq msk */
    } reg;
} SOC_AO_SCTRL_SC_PW_CTRL1_UNION;
#endif
#define SOC_AO_SCTRL_SC_PW_CTRL1_acpu_sft_fiq_req_START            (0)
#define SOC_AO_SCTRL_SC_PW_CTRL1_acpu_sft_fiq_req_END              (0)
#define SOC_AO_SCTRL_SC_PW_CTRL1_ccpu_sft_fiq_req_START            (1)
#define SOC_AO_SCTRL_SC_PW_CTRL1_ccpu_sft_fiq_req_END              (1)
#define SOC_AO_SCTRL_SC_PW_CTRL1_mdm_nsp_domain_idlereq_START      (7)
#define SOC_AO_SCTRL_SC_PW_CTRL1_mdm_nsp_domain_idlereq_END        (7)
#define SOC_AO_SCTRL_SC_PW_CTRL1_dma_domain_idlereq_START          (8)
#define SOC_AO_SCTRL_SC_PW_CTRL1_dma_domain_idlereq_END            (8)
#define SOC_AO_SCTRL_SC_PW_CTRL1_ao_domain_idlereq_START           (9)
#define SOC_AO_SCTRL_SC_PW_CTRL1_ao_domain_idlereq_END             (9)
#define SOC_AO_SCTRL_SC_PW_CTRL1_sysnoc_domain_idlereq_START       (10)
#define SOC_AO_SCTRL_SC_PW_CTRL1_sysnoc_domain_idlereq_END         (10)
#define SOC_AO_SCTRL_SC_PW_CTRL1_g3d_domain_idlereq_START          (11)
#define SOC_AO_SCTRL_SC_PW_CTRL1_g3d_domain_idlereq_END            (11)
#define SOC_AO_SCTRL_SC_PW_CTRL1_ccpu_domain_idlereq_START         (12)
#define SOC_AO_SCTRL_SC_PW_CTRL1_ccpu_domain_idlereq_END           (12)
#define SOC_AO_SCTRL_SC_PW_CTRL1_mnoc_domain_idlereq_START         (13)
#define SOC_AO_SCTRL_SC_PW_CTRL1_mnoc_domain_idlereq_END           (13)
#define SOC_AO_SCTRL_SC_PW_CTRL1_video_domain_idlereq_START        (14)
#define SOC_AO_SCTRL_SC_PW_CTRL1_video_domain_idlereq_END          (14)
#define SOC_AO_SCTRL_SC_PW_CTRL1_ade_domain_idlereq_START          (15)
#define SOC_AO_SCTRL_SC_PW_CTRL1_ade_domain_idlereq_END            (15)
#define SOC_AO_SCTRL_SC_PW_CTRL1_acpu_sft_fiq_req_msk_START        (16)
#define SOC_AO_SCTRL_SC_PW_CTRL1_acpu_sft_fiq_req_msk_END          (16)
#define SOC_AO_SCTRL_SC_PW_CTRL1_ccpu_sft_fiq_req_msk_START        (17)
#define SOC_AO_SCTRL_SC_PW_CTRL1_ccpu_sft_fiq_req_msk_END          (17)
#define SOC_AO_SCTRL_SC_PW_CTRL1_mdm_nsp_domain_idlereq_msk_START  (23)
#define SOC_AO_SCTRL_SC_PW_CTRL1_mdm_nsp_domain_idlereq_msk_END    (23)
#define SOC_AO_SCTRL_SC_PW_CTRL1_dma_domain_idlereq_msk_START      (24)
#define SOC_AO_SCTRL_SC_PW_CTRL1_dma_domain_idlereq_msk_END        (24)
#define SOC_AO_SCTRL_SC_PW_CTRL1_ao_domain_idlereq_msk_START       (25)
#define SOC_AO_SCTRL_SC_PW_CTRL1_ao_domain_idlereq_msk_END         (25)
#define SOC_AO_SCTRL_SC_PW_CTRL1_sysnoc_domain_idlereq_msk_START   (26)
#define SOC_AO_SCTRL_SC_PW_CTRL1_sysnoc_domain_idlereq_msk_END     (26)
#define SOC_AO_SCTRL_SC_PW_CTRL1_g3d_domain_idlereq_msk_START      (27)
#define SOC_AO_SCTRL_SC_PW_CTRL1_g3d_domain_idlereq_msk_END        (27)
#define SOC_AO_SCTRL_SC_PW_CTRL1_ccpu_domain_idlereq_msk_START     (28)
#define SOC_AO_SCTRL_SC_PW_CTRL1_ccpu_domain_idlereq_msk_END       (28)
#define SOC_AO_SCTRL_SC_PW_CTRL1_mnoc_domain_idlereq_msk_START     (29)
#define SOC_AO_SCTRL_SC_PW_CTRL1_mnoc_domain_idlereq_msk_END       (29)
#define SOC_AO_SCTRL_SC_PW_CTRL1_video_domain_idlereq_msk_START    (30)
#define SOC_AO_SCTRL_SC_PW_CTRL1_video_domain_idlereq_msk_END      (30)
#define SOC_AO_SCTRL_SC_PW_CTRL1_ade_domain_idlereq_msk_START      (31)
#define SOC_AO_SCTRL_SC_PW_CTRL1_ade_domain_idlereq_msk_END        (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_PW_CTRL_UNION
 �ṹ˵��  : SC_PW_CTRL �Ĵ����ṹ���塣��ַƫ����:0x8CC����ֵ:0x000000F0�����:32
 �Ĵ���˵��: �͹��Ŀ��ƼĴ���0�����ܰ�������IO retention��ddr io retention�������ſأ�ipc_ns��ipc_s�Զ��ſأ�������������ơ�
            [31:16]��ÿһbit˳���Ӧbit15��bit0������bit31��16��bitд1��ͬʱ������bit15��0������Ч����bit31��16��bitд0ʱ������bit15��0���ֲ��䣻
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  soc_pw_dn_en                   : 1;  /* bit[0] : soc�����µ�������ʹ��
                                                                       0�������磻
                                                                       1�����硣 */
        unsigned int  ao_noc_timeout_en              : 1;  /* bit[1] : ao subsys noc bus timeout enable
                                                                       0�� disable��
                                                                       1�� enable�� */
        unsigned int  reserved_0                     : 1;  /* bit[2] : reserved */
        unsigned int  ddrphy0_ret_en_i               : 1;  /* bit[3] : ddrphy coreside ret_en_i data retention��cke retention�Ŀ����ź� 
                                                                       0�� data retention disable��
                                                                       1�� data retention enable�� */
        unsigned int  clk_en_sysnoc                  : 1;  /* bit[4] : sysnoc�ſ�ʹ��
                                                                       0��noc����ʱ�ӹرգ�
                                                                       1��noc����ʱ�Ӵ򿪡� */
        unsigned int  clk_en_modemnoc                : 1;  /* bit[5] : modemnoc�ſ�ʹ��
                                                                       0��noc����ʱ�ӹرգ�
                                                                       1��noc����ʱ�Ӵ򿪡� */
        unsigned int  ipc_ns_auto_clk_gate_en        : 1;  /* bit[6] : (ipc_ns)auto_clk_gate_en
                                                                       1'b0�� Ӳ���Զ��ſز�ʹ�ܣ�
                                                                       1'b1�� Ӳ���Զ��ſ�ʹ�ܡ� */
        unsigned int  ipc_s_auto_clk_gate_en         : 1;  /* bit[7] : (ipc_s)auto_clk_gate_en
                                                                       1'b0�� Ӳ���Զ��ſز�ʹ�ܣ�
                                                                       1'b1�� Ӳ���Զ��ſ�ʹ�ܡ� */
        unsigned int  reserved_1                     : 1;  /* bit[8] : reserved */
        unsigned int  m3_ram_ctrl_sftbypass          : 1;  /* bit[9] : m3_ram_ctrl_sftbypass��
                                                                       0��m3 ram ctrl by software config reg of &quot;m3_ramctrl_pgen/ret2n/ret1n&quot;��
                                                                       1��m3 ram ctrl by hardware�� */
        unsigned int  aarm_l2_ram_ctrl_sftbypass     : 1;  /* bit[10]: reserved */
        unsigned int  acpu0_pwctrl_lp_set            : 1;  /* bit[11]: acpu0 power ctrl
                                                                       0�� acpu cluster��acpu0ͬʱ�ϵ磻
                                                                       1�� acpu cluster�ϵ�ʱ��acpu0���ϵ硣
                                                                       ע��������acpu0_pwctrl_lp_set=1ǰ,��Ҫȷ��ACPU_SC ��acpu0������͹��Ŀ����ź�*_hotplug��*_cpuidle����״̬����һ�£������ں�������������ͬʱ���á� */
        unsigned int  dual_tcxo_en                   : 1;  /* bit[12]: dual tcxo enable
                                                                       0�� signle tcxo��
                                                                       1�� dual tcxo�� */
        unsigned int  bbpdrx_tcxo1_sel               : 1;  /* bit[13]: bbpdrx int open tcxo1 figure�� 
                                                                       0�� ch1 bbp drx int open tcxo1��
                                                                       1�� ch0 bbp drdx int open tcxo1�� */
        unsigned int  reserved_2                     : 1;  /* bit[14]: reserved */
        unsigned int  reserved_3                     : 1;  /* bit[15]: reserved */
        unsigned int  soc_pw_dn_en_msk               : 1;  /* bit[16]: ָʾsoc�����µ�������ʹ�� msk */
        unsigned int  ao_noc_timeout_en_msk          : 1;  /* bit[17]: ao subsys noc bus timeout enable mask */
        unsigned int  reserved_4                     : 1;  /* bit[18]: reserved */
        unsigned int  ddrphy0_ret_en_i_msk           : 1;  /* bit[19]: ddrphy coreside ret_en_i data retention��cke retention�Ŀ����ź� msk */
        unsigned int  clk_en_sysnoc_msk              : 1;  /* bit[20]: sysnoc�ſ�ʹ�� msk */
        unsigned int  clk_en_modemnoc_msk            : 1;  /* bit[21]: modemnoc�ſ�ʹ�� msk */
        unsigned int  ipc_ns_auto_clk_gate_en_msk    : 1;  /* bit[22]: (ipc_ns)auto_clk_gate_en msk */
        unsigned int  ipc_s_auto_clk_gate_en_msk     : 1;  /* bit[23]: (ipc_s)auto_clk_gate_en msk */
        unsigned int  reserved_5                     : 1;  /* bit[24]: reserved */
        unsigned int  m3_ram_ctrl_sftbypass_msk      : 1;  /* bit[25]: m3_ram_ctrl_sftbypass msk */
        unsigned int  aarm_l2_ram_ctrl_sftbypass_msk : 1;  /* bit[26]: reserved */
        unsigned int  acpu0_pwctrl_lp_set_msk        : 1;  /* bit[27]: acpu0_pwctrl_lp_set msk */
        unsigned int  dual_tcxo_en_msk               : 1;  /* bit[28]: dual_tcxo_en msk */
        unsigned int  bbpdrx_tcxo1_sel_msk           : 1;  /* bit[29]: bbpdrx_tcxo1_sel msk */
        unsigned int  reserved_6                     : 1;  /* bit[30]: reserved */
        unsigned int  reserved_7                     : 1;  /* bit[31]: reserved */
    } reg;
} SOC_AO_SCTRL_SC_PW_CTRL_UNION;
#endif
#define SOC_AO_SCTRL_SC_PW_CTRL_soc_pw_dn_en_START                    (0)
#define SOC_AO_SCTRL_SC_PW_CTRL_soc_pw_dn_en_END                      (0)
#define SOC_AO_SCTRL_SC_PW_CTRL_ao_noc_timeout_en_START               (1)
#define SOC_AO_SCTRL_SC_PW_CTRL_ao_noc_timeout_en_END                 (1)
#define SOC_AO_SCTRL_SC_PW_CTRL_ddrphy0_ret_en_i_START                (3)
#define SOC_AO_SCTRL_SC_PW_CTRL_ddrphy0_ret_en_i_END                  (3)
#define SOC_AO_SCTRL_SC_PW_CTRL_clk_en_sysnoc_START                   (4)
#define SOC_AO_SCTRL_SC_PW_CTRL_clk_en_sysnoc_END                     (4)
#define SOC_AO_SCTRL_SC_PW_CTRL_clk_en_modemnoc_START                 (5)
#define SOC_AO_SCTRL_SC_PW_CTRL_clk_en_modemnoc_END                   (5)
#define SOC_AO_SCTRL_SC_PW_CTRL_ipc_ns_auto_clk_gate_en_START         (6)
#define SOC_AO_SCTRL_SC_PW_CTRL_ipc_ns_auto_clk_gate_en_END           (6)
#define SOC_AO_SCTRL_SC_PW_CTRL_ipc_s_auto_clk_gate_en_START          (7)
#define SOC_AO_SCTRL_SC_PW_CTRL_ipc_s_auto_clk_gate_en_END            (7)
#define SOC_AO_SCTRL_SC_PW_CTRL_m3_ram_ctrl_sftbypass_START           (9)
#define SOC_AO_SCTRL_SC_PW_CTRL_m3_ram_ctrl_sftbypass_END             (9)
#define SOC_AO_SCTRL_SC_PW_CTRL_aarm_l2_ram_ctrl_sftbypass_START      (10)
#define SOC_AO_SCTRL_SC_PW_CTRL_aarm_l2_ram_ctrl_sftbypass_END        (10)
#define SOC_AO_SCTRL_SC_PW_CTRL_acpu0_pwctrl_lp_set_START             (11)
#define SOC_AO_SCTRL_SC_PW_CTRL_acpu0_pwctrl_lp_set_END               (11)
#define SOC_AO_SCTRL_SC_PW_CTRL_dual_tcxo_en_START                    (12)
#define SOC_AO_SCTRL_SC_PW_CTRL_dual_tcxo_en_END                      (12)
#define SOC_AO_SCTRL_SC_PW_CTRL_bbpdrx_tcxo1_sel_START                (13)
#define SOC_AO_SCTRL_SC_PW_CTRL_bbpdrx_tcxo1_sel_END                  (13)
#define SOC_AO_SCTRL_SC_PW_CTRL_soc_pw_dn_en_msk_START                (16)
#define SOC_AO_SCTRL_SC_PW_CTRL_soc_pw_dn_en_msk_END                  (16)
#define SOC_AO_SCTRL_SC_PW_CTRL_ao_noc_timeout_en_msk_START           (17)
#define SOC_AO_SCTRL_SC_PW_CTRL_ao_noc_timeout_en_msk_END             (17)
#define SOC_AO_SCTRL_SC_PW_CTRL_ddrphy0_ret_en_i_msk_START            (19)
#define SOC_AO_SCTRL_SC_PW_CTRL_ddrphy0_ret_en_i_msk_END              (19)
#define SOC_AO_SCTRL_SC_PW_CTRL_clk_en_sysnoc_msk_START               (20)
#define SOC_AO_SCTRL_SC_PW_CTRL_clk_en_sysnoc_msk_END                 (20)
#define SOC_AO_SCTRL_SC_PW_CTRL_clk_en_modemnoc_msk_START             (21)
#define SOC_AO_SCTRL_SC_PW_CTRL_clk_en_modemnoc_msk_END               (21)
#define SOC_AO_SCTRL_SC_PW_CTRL_ipc_ns_auto_clk_gate_en_msk_START     (22)
#define SOC_AO_SCTRL_SC_PW_CTRL_ipc_ns_auto_clk_gate_en_msk_END       (22)
#define SOC_AO_SCTRL_SC_PW_CTRL_ipc_s_auto_clk_gate_en_msk_START      (23)
#define SOC_AO_SCTRL_SC_PW_CTRL_ipc_s_auto_clk_gate_en_msk_END        (23)
#define SOC_AO_SCTRL_SC_PW_CTRL_m3_ram_ctrl_sftbypass_msk_START       (25)
#define SOC_AO_SCTRL_SC_PW_CTRL_m3_ram_ctrl_sftbypass_msk_END         (25)
#define SOC_AO_SCTRL_SC_PW_CTRL_aarm_l2_ram_ctrl_sftbypass_msk_START  (26)
#define SOC_AO_SCTRL_SC_PW_CTRL_aarm_l2_ram_ctrl_sftbypass_msk_END    (26)
#define SOC_AO_SCTRL_SC_PW_CTRL_acpu0_pwctrl_lp_set_msk_START         (27)
#define SOC_AO_SCTRL_SC_PW_CTRL_acpu0_pwctrl_lp_set_msk_END           (27)
#define SOC_AO_SCTRL_SC_PW_CTRL_dual_tcxo_en_msk_START                (28)
#define SOC_AO_SCTRL_SC_PW_CTRL_dual_tcxo_en_msk_END                  (28)
#define SOC_AO_SCTRL_SC_PW_CTRL_bbpdrx_tcxo1_sel_msk_START            (29)
#define SOC_AO_SCTRL_SC_PW_CTRL_bbpdrx_tcxo1_sel_msk_END              (29)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_MCPU_VOTEEN_UNION
 �ṹ˵��  : SC_MCPU_VOTEEN �Ĵ����ṹ���塣��ַƫ����:0x8D0����ֵ:0x00000000�����:32
 �Ĵ���˵��: MCPU˯�߻���ͶƱʹ�ܼĴ���0���Ա���д1������ͶƱ״̬��д0��Ӱ��ͶƱ״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_mcpusleep_vote_en0_7reserved : 8;  /* bit[0-7] : reserved */
        unsigned int  sc_mcpusleep_vote_en0           : 24; /* bit[8-31]: [31:8]��MCPU����ͶƱ�Ĵ���0�����ڲ�������ͶƱ���Ա���д1����������ͶƱ��д0��Ӱ��ͶƱ��״̬��
                                                                          [7:0]��Ӳ��״̬ͶƱʹ�á� */
    } reg;
} SOC_AO_SCTRL_SC_MCPU_VOTEEN_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCPU_VOTEEN_sc_mcpusleep_vote_en0_7reserved_START  (0)
#define SOC_AO_SCTRL_SC_MCPU_VOTEEN_sc_mcpusleep_vote_en0_7reserved_END    (7)
#define SOC_AO_SCTRL_SC_MCPU_VOTEEN_sc_mcpusleep_vote_en0_START            (8)
#define SOC_AO_SCTRL_SC_MCPU_VOTEEN_sc_mcpusleep_vote_en0_END              (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_MCPU_VOTEDIS_UNION
 �ṹ˵��  : SC_MCPU_VOTEDIS �Ĵ����ṹ���塣��ַƫ����:0x8D4����ֵ:0x00000000�����:32
 �Ĵ���˵��: MCPU˯�߻���ͶƱ��ֹ�Ĵ���0���Ա���д1�����ͶƱ״̬��д0��Ӱ��ͶƱʹ�ܵ�״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_mcpusleep_vote_dis0_7reserved : 8;  /* bit[0-7] : reserved */
        unsigned int  sc_mcpusleep_vote_dis0           : 24; /* bit[8-31]: [31:8]��MCPU˯��ͶƱʹ�ܽ�ֹ�Ĵ���0�����ڲ���˯��ͶƱ���Ա���д1������˯��ͶƱ��д0��Ӱ��ͶƱ��״̬��
                                                                           [7:0]��Ӳ��״̬ͶƱʹ�á� */
    } reg;
} SOC_AO_SCTRL_SC_MCPU_VOTEDIS_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCPU_VOTEDIS_sc_mcpusleep_vote_dis0_7reserved_START  (0)
#define SOC_AO_SCTRL_SC_MCPU_VOTEDIS_sc_mcpusleep_vote_dis0_7reserved_END    (7)
#define SOC_AO_SCTRL_SC_MCPU_VOTEDIS_sc_mcpusleep_vote_dis0_START            (8)
#define SOC_AO_SCTRL_SC_MCPU_VOTEDIS_sc_mcpusleep_vote_dis0_END              (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_MCPU_VOTESTAT_UNION
 �ṹ˵��  : SC_MCPU_VOTESTAT �Ĵ����ṹ���塣��ַƫ����:0x8D8����ֵ:0x00000000�����:32
 �Ĵ���˵��: MCPU˯�߻���ͶƱ״̬�Ĵ���0�����ڻض���ͶƱ��״̬��1Ϊ��ͶƱ״̬��0Ϊ��ͶƱ״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_mcpusleep_vote_stat0_7reserved : 8;  /* bit[0-7] : reserved */
        unsigned int  sc_mcpusleep_vote_stat0           : 24; /* bit[8-31]: [31:8]��MCPU˯��ͶƱ״̬�Ĵ���0�����ڻض���ͶƱ��״̬��1ΪͶƱ��0Ϊ��ͶƱ״̬��
                                                                            Ϊ0��ʾ����˯�ߣ�Ϊ1��ʾ������˯�ߣ���Ҫ����
                                                                            [7:0]��Ӳ��״̬ͶƱʹ�á� */
    } reg;
} SOC_AO_SCTRL_SC_MCPU_VOTESTAT_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCPU_VOTESTAT_sc_mcpusleep_vote_stat0_7reserved_START  (0)
#define SOC_AO_SCTRL_SC_MCPU_VOTESTAT_sc_mcpusleep_vote_stat0_7reserved_END    (7)
#define SOC_AO_SCTRL_SC_MCPU_VOTESTAT_sc_mcpusleep_vote_stat0_START            (8)
#define SOC_AO_SCTRL_SC_MCPU_VOTESTAT_sc_mcpusleep_vote_stat0_END              (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_MCPU_VOTE_MSK0_UNION
 �ṹ˵��  : SC_MCPU_VOTE_MSK0 �Ĵ����ṹ���塣��ַƫ����:0x8E0����ֵ:0x00000000�����:32
 �Ĵ���˵��: MCPU˯�߻���ͶƱ���μĴ���0���Ա���д1����Ӧȡ�����Σ�д0�����жϡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_mcpusleep_vote_msk0 : 32; /* bit[0-31]: �����͸�MCPU��˯��ͶƱ״̬�� */
    } reg;
} SOC_AO_SCTRL_SC_MCPU_VOTE_MSK0_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCPU_VOTE_MSK0_sc_mcpusleep_vote_msk0_START  (0)
#define SOC_AO_SCTRL_SC_MCPU_VOTE_MSK0_sc_mcpusleep_vote_msk0_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_MCPU_VOTE_MSK1_UNION
 �ṹ˵��  : SC_MCPU_VOTE_MSK1 �Ĵ����ṹ���塣��ַƫ����:0x8E4����ֵ:0x00000000�����:32
 �Ĵ���˵��: MCPU˯�߻���ͶƱ���μĴ���1���Ա���д1����Ӧȡ�����Σ�д0�����жϡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_mcpusleep_vote_msk1 : 32; /* bit[0-31]: �����͸�MCU�Ļ���ͶƱ״̬�� */
    } reg;
} SOC_AO_SCTRL_SC_MCPU_VOTE_MSK1_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCPU_VOTE_MSK1_sc_mcpusleep_vote_msk1_START  (0)
#define SOC_AO_SCTRL_SC_MCPU_VOTE_MSK1_sc_mcpusleep_vote_msk1_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_MCPU_VOTESTAT0_MSK_UNION
 �ṹ˵��  : SC_MCPU_VOTESTAT0_MSK �Ĵ����ṹ���塣��ַƫ����:0x8E8����ֵ:0x00000000�����:32
 �Ĵ���˵��: MCPU˯��ͶƱ���κ�״̬�Ĵ���0�����ڻض���ͶƱ��״̬��1ΪͶƱ��0Ϊ��ͶƱ״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_mcpusleep_vote_stat0_msk_0coresight : 1;  /* bit[0]   : [0]�� CoreSight��������csyspwupreq
                                                                                 Ϊ0��ʾ����˯�ߣ�Ϊ1��ʾ������˯�ߣ���Ҫ���ѡ� */
        unsigned int  sc_mcpusleep_vote_stat0_msk_1coresight : 1;  /* bit[1]   : [1]�� CoreSight��������cdbgpwupreq
                                                                                 Ϊ0��ʾ����˯�ߣ�Ϊ1��ʾ������˯�ߣ���Ҫ���ѡ� */
        unsigned int  sc_mcpusleep_vote_stat0_msk_2ipf       : 1;  /* bit[2]   : [2]�� IPF����״̬�źš� */
        unsigned int  sc_mcpusleep_vote_stat0_msk_3socp      : 1;  /* bit[3]   : [3]�� SOCP����״̬�źš� */
        unsigned int  sc_mcpusleep_vote_stat0_msk_7reserved  : 4;  /* bit[4-7] : [7:4]�� reserved */
        unsigned int  sc_mcpusleep_vote_stat0_msk            : 24; /* bit[8-31]: ���κ��͸�MCPU��˯��ͶƱ״̬״̬
                                                                                 ������1bitΪ1��ʾ������˯�ߣ�����bitΪ1'b0��ʾ����˯�ߣ���ͶƱ״̬�Ӳ�����MCPU˯��ת��Ϊ����MCPU˯��ʱ��ͶƱģ����MCPU����˯���жϡ� */
    } reg;
} SOC_AO_SCTRL_SC_MCPU_VOTESTAT0_MSK_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCPU_VOTESTAT0_MSK_sc_mcpusleep_vote_stat0_msk_0coresight_START  (0)
#define SOC_AO_SCTRL_SC_MCPU_VOTESTAT0_MSK_sc_mcpusleep_vote_stat0_msk_0coresight_END    (0)
#define SOC_AO_SCTRL_SC_MCPU_VOTESTAT0_MSK_sc_mcpusleep_vote_stat0_msk_1coresight_START  (1)
#define SOC_AO_SCTRL_SC_MCPU_VOTESTAT0_MSK_sc_mcpusleep_vote_stat0_msk_1coresight_END    (1)
#define SOC_AO_SCTRL_SC_MCPU_VOTESTAT0_MSK_sc_mcpusleep_vote_stat0_msk_2ipf_START        (2)
#define SOC_AO_SCTRL_SC_MCPU_VOTESTAT0_MSK_sc_mcpusleep_vote_stat0_msk_2ipf_END          (2)
#define SOC_AO_SCTRL_SC_MCPU_VOTESTAT0_MSK_sc_mcpusleep_vote_stat0_msk_3socp_START       (3)
#define SOC_AO_SCTRL_SC_MCPU_VOTESTAT0_MSK_sc_mcpusleep_vote_stat0_msk_3socp_END         (3)
#define SOC_AO_SCTRL_SC_MCPU_VOTESTAT0_MSK_sc_mcpusleep_vote_stat0_msk_7reserved_START   (4)
#define SOC_AO_SCTRL_SC_MCPU_VOTESTAT0_MSK_sc_mcpusleep_vote_stat0_msk_7reserved_END     (7)
#define SOC_AO_SCTRL_SC_MCPU_VOTESTAT0_MSK_sc_mcpusleep_vote_stat0_msk_START             (8)
#define SOC_AO_SCTRL_SC_MCPU_VOTESTAT0_MSK_sc_mcpusleep_vote_stat0_msk_END               (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_MCPU_VOTESTAT1_MSK_UNION
 �ṹ˵��  : SC_MCPU_VOTESTAT1_MSK �Ĵ����ṹ���塣��ַƫ����:0x8EC����ֵ:0x00000000�����:32
 �Ĵ���˵��: MCPU˯�߻���ͶƱ���κ�״̬�Ĵ���1�����ڻض���ͶƱ��״̬��1ΪͶƱ��0Ϊ��ͶƱ״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_mcpusleep_vote_stat1_msk_0coresight : 1;  /* bit[0]   : [0]�� CoreSight��������csyspwupreq
                                                                                 Ϊ0��ʾ����˯�ߣ�Ϊ1��ʾ������˯�ߣ���Ҫ���ѡ� */
        unsigned int  sc_mcpusleep_vote_stat1_msk_1coresight : 1;  /* bit[1]   : [1]�� CoreSight��������cdbgpwupreq
                                                                                 Ϊ0��ʾ����˯�ߣ�Ϊ1��ʾ������˯�ߣ���Ҫ���ѡ� */
        unsigned int  sc_mcpusleep_vote_stat1_msk_2ipf       : 1;  /* bit[2]   : [2]�� IPF����״̬�źš� */
        unsigned int  sc_mcpusleep_vote_stat1_msk_3socp      : 1;  /* bit[3]   : [3]�� SOCP����״̬�źš� */
        unsigned int  sc_mcpusleep_vote_stat1_msk_7reserved  : 4;  /* bit[4-7] : [7:4]��reserved */
        unsigned int  sc_mcpusleep_vote_stat1_msk            : 24; /* bit[8-31]: ���κ��͸�MCU�Ļ���ͶƱ״̬״̬
                                                                                 ������1bitΪ1��ʾ������˯�ߣ�����bitΪ1'b0��ʾ����˯�ߣ���ͶƱ״̬������MCPU˯��ת��Ϊ������MCPU˯��ʱ��ͶƱģ����MCU���������жϡ� */
    } reg;
} SOC_AO_SCTRL_SC_MCPU_VOTESTAT1_MSK_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCPU_VOTESTAT1_MSK_sc_mcpusleep_vote_stat1_msk_0coresight_START  (0)
#define SOC_AO_SCTRL_SC_MCPU_VOTESTAT1_MSK_sc_mcpusleep_vote_stat1_msk_0coresight_END    (0)
#define SOC_AO_SCTRL_SC_MCPU_VOTESTAT1_MSK_sc_mcpusleep_vote_stat1_msk_1coresight_START  (1)
#define SOC_AO_SCTRL_SC_MCPU_VOTESTAT1_MSK_sc_mcpusleep_vote_stat1_msk_1coresight_END    (1)
#define SOC_AO_SCTRL_SC_MCPU_VOTESTAT1_MSK_sc_mcpusleep_vote_stat1_msk_2ipf_START        (2)
#define SOC_AO_SCTRL_SC_MCPU_VOTESTAT1_MSK_sc_mcpusleep_vote_stat1_msk_2ipf_END          (2)
#define SOC_AO_SCTRL_SC_MCPU_VOTESTAT1_MSK_sc_mcpusleep_vote_stat1_msk_3socp_START       (3)
#define SOC_AO_SCTRL_SC_MCPU_VOTESTAT1_MSK_sc_mcpusleep_vote_stat1_msk_3socp_END         (3)
#define SOC_AO_SCTRL_SC_MCPU_VOTESTAT1_MSK_sc_mcpusleep_vote_stat1_msk_7reserved_START   (4)
#define SOC_AO_SCTRL_SC_MCPU_VOTESTAT1_MSK_sc_mcpusleep_vote_stat1_msk_7reserved_END     (7)
#define SOC_AO_SCTRL_SC_MCPU_VOTESTAT1_MSK_sc_mcpusleep_vote_stat1_msk_START             (8)
#define SOC_AO_SCTRL_SC_MCPU_VOTESTAT1_MSK_sc_mcpusleep_vote_stat1_msk_END               (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_PERI_VOTEEN_UNION
 �ṹ˵��  : SC_PERI_VOTEEN �Ĵ����ṹ���塣��ַƫ����:0x8F0����ֵ:0x00000000�����:32
 �Ĵ���˵��: PERI˯�߻���ͶƱʹ�ܼĴ���0���Ա���д1������ͶƱ״̬��д0��Ӱ��ͶƱ״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_perisleep_vote_en0_reserved : 8;  /* bit[0-7] : reserved */
        unsigned int  sc_perisleep_vote_en0          : 24; /* bit[8-31]: [31:8]��PERI����ͶƱ�Ĵ���0�����ڲ�������ͶƱ���Ա���д1����������ͶƱ��д0��Ӱ��ͶƱ��״̬��
                                                                         [7:0]��Ӳ��״̬ͶƱʹ�á� */
    } reg;
} SOC_AO_SCTRL_SC_PERI_VOTEEN_UNION;
#endif
#define SOC_AO_SCTRL_SC_PERI_VOTEEN_sc_perisleep_vote_en0_reserved_START  (0)
#define SOC_AO_SCTRL_SC_PERI_VOTEEN_sc_perisleep_vote_en0_reserved_END    (7)
#define SOC_AO_SCTRL_SC_PERI_VOTEEN_sc_perisleep_vote_en0_START           (8)
#define SOC_AO_SCTRL_SC_PERI_VOTEEN_sc_perisleep_vote_en0_END             (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_PERI_VOTEDIS_UNION
 �ṹ˵��  : SC_PERI_VOTEDIS �Ĵ����ṹ���塣��ַƫ����:0x8F4����ֵ:0x00000000�����:32
 �Ĵ���˵��: PERI˯�߻���ͶƱ��ֹ�Ĵ���0���Ա���д1�����ͶƱ״̬��д0��Ӱ��ͶƱʹ�ܵ�״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_perisleep_vote_dis0_reserved : 8;  /* bit[0-7] : reserved */
        unsigned int  sc_perisleep_vote_dis0          : 24; /* bit[8-31]: [31:8]��PERI˯��ͶƱʹ�ܽ�ֹ�Ĵ���0�����ڲ���˯��ͶƱ���Ա���д1������˯��ͶƱ��д0��Ӱ��ͶƱ��״̬��
                                                                          [7:0]��Ӳ��״̬ͶƱʹ�á� */
    } reg;
} SOC_AO_SCTRL_SC_PERI_VOTEDIS_UNION;
#endif
#define SOC_AO_SCTRL_SC_PERI_VOTEDIS_sc_perisleep_vote_dis0_reserved_START  (0)
#define SOC_AO_SCTRL_SC_PERI_VOTEDIS_sc_perisleep_vote_dis0_reserved_END    (7)
#define SOC_AO_SCTRL_SC_PERI_VOTEDIS_sc_perisleep_vote_dis0_START           (8)
#define SOC_AO_SCTRL_SC_PERI_VOTEDIS_sc_perisleep_vote_dis0_END             (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_PERI_VOTESTAT_UNION
 �ṹ˵��  : SC_PERI_VOTESTAT �Ĵ����ṹ���塣��ַƫ����:0x8F8����ֵ:0x00000000�����:32
 �Ĵ���˵��: PERI˯�߻���ͶƱ״̬�Ĵ���0�����ڻض���ͶƱ��״̬��1Ϊ��ͶƱ״̬��0Ϊ��ͶƱ״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_perisleep_vote_stat0_reserved : 8;  /* bit[0-7] : reserved */
        unsigned int  sc_perisleep_vote_stat0          : 24; /* bit[8-31]: [31:8]��PERI˯��ͶƱ״̬�Ĵ���0�����ڻض���ͶƱ��״̬��1ΪͶƱ��0Ϊ��ͶƱ״̬��
                                                                           Ϊ0��ʾ����˯�ߣ�Ϊ1��ʾ������˯�ߣ���Ҫ����
                                                                           [7:0]��Ӳ��״̬ͶƱʹ�á� */
    } reg;
} SOC_AO_SCTRL_SC_PERI_VOTESTAT_UNION;
#endif
#define SOC_AO_SCTRL_SC_PERI_VOTESTAT_sc_perisleep_vote_stat0_reserved_START  (0)
#define SOC_AO_SCTRL_SC_PERI_VOTESTAT_sc_perisleep_vote_stat0_reserved_END    (7)
#define SOC_AO_SCTRL_SC_PERI_VOTESTAT_sc_perisleep_vote_stat0_START           (8)
#define SOC_AO_SCTRL_SC_PERI_VOTESTAT_sc_perisleep_vote_stat0_END             (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_PERI_VOTE_MSK0_UNION
 �ṹ˵��  : SC_PERI_VOTE_MSK0 �Ĵ����ṹ���塣��ַƫ����:0x900����ֵ:0x00000000�����:32
 �Ĵ���˵��: PERI˯�߻���ͶƱ���μĴ���0���Ա���д1����Ӧȡ�����Σ�д0�����жϡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_perisleep_vote_msk0 : 32; /* bit[0-31]: �����͸�MCU��˯��ͶƱ״̬�� */
    } reg;
} SOC_AO_SCTRL_SC_PERI_VOTE_MSK0_UNION;
#endif
#define SOC_AO_SCTRL_SC_PERI_VOTE_MSK0_sc_perisleep_vote_msk0_START  (0)
#define SOC_AO_SCTRL_SC_PERI_VOTE_MSK0_sc_perisleep_vote_msk0_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_PERI_VOTE_MSK1_UNION
 �ṹ˵��  : SC_PERI_VOTE_MSK1 �Ĵ����ṹ���塣��ַƫ����:0x904����ֵ:0x00000000�����:32
 �Ĵ���˵��: PERI˯�߻���ͶƱ���μĴ���1���Ա���д1����Ӧȡ�����Σ�д0�����жϡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_perisleep_vote_msk1 : 32; /* bit[0-31]: �����͸�MCU�Ļ���ͶƱ״̬�� */
    } reg;
} SOC_AO_SCTRL_SC_PERI_VOTE_MSK1_UNION;
#endif
#define SOC_AO_SCTRL_SC_PERI_VOTE_MSK1_sc_perisleep_vote_msk1_START  (0)
#define SOC_AO_SCTRL_SC_PERI_VOTE_MSK1_sc_perisleep_vote_msk1_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_PERI_VOTESTAT0_MSK_UNION
 �ṹ˵��  : SC_PERI_VOTESTAT0_MSK �Ĵ����ṹ���塣��ַƫ����:0x908����ֵ:0x00000000�����:32
 �Ĵ���˵��: PERI˯��ͶƱ���κ�״̬�Ĵ���0�����ڻض���ͶƱ��״̬��1ΪͶƱ��0Ϊ��ͶƱ״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_mcpusleep_vote_stat0_msk_0coresight : 1;  /* bit[0]   : [0]�� CoreSight��������csyspwupreq
                                                                                 Ϊ0��ʾ����˯�ߣ�Ϊ1��ʾ������˯�ߣ���Ҫ���ѡ� */
        unsigned int  sc_mcpusleep_vote_stat0_msk_1coresight : 1;  /* bit[1]   : [1]�� CoreSight��������cdbgpwupreq
                                                                                 Ϊ0��ʾ����˯�ߣ�Ϊ1��ʾ������˯�ߣ���Ҫ���ѡ� */
        unsigned int  sc_perisleep_vote_stat0_msk_2ipf       : 1;  /* bit[2]   : [2]�� IPF����״̬�źš� */
        unsigned int  sc_perisleep_vote_stat0_msk_3socp      : 1;  /* bit[3]   : [3]�� SOCP����״̬�źš� */
        unsigned int  sc_perisleep_vote_stat0_msk_acpu0      : 1;  /* bit[4]   : [4]�� ACPU Cluster��������״̬�� */
        unsigned int  sc_perisleep_vote_stat0_msk_mcpu       : 1;  /* bit[5]   : [5]�� MCPU��������״̬�� */
        unsigned int  sc_perisleep_vote_stat0_msk_hifi       : 1;  /* bit[6]   : [6]�� HiFi��������״̬�� */
        unsigned int  sc_perisleep_vote_stat0_msk_codec      : 1;  /* bit[7]   : [7]�� CODEC+ISP��������״̬�� */
        unsigned int  sc_perisleep_vote_stat0_msk            : 24; /* bit[8-31]: ���κ��͸�PERI��˯��ͶƱ״̬״̬
                                                                                 ������1bitΪ1��ʾ������˯�ߣ�����bitΪ1'b0��ʾ����˯�ߣ���ͶƱ״̬�Ӳ�����PERI˯��ת��Ϊ����PERI˯��ʱ��ͶƱģ����MCU����˯���жϡ� */
    } reg;
} SOC_AO_SCTRL_SC_PERI_VOTESTAT0_MSK_UNION;
#endif
#define SOC_AO_SCTRL_SC_PERI_VOTESTAT0_MSK_sc_mcpusleep_vote_stat0_msk_0coresight_START  (0)
#define SOC_AO_SCTRL_SC_PERI_VOTESTAT0_MSK_sc_mcpusleep_vote_stat0_msk_0coresight_END    (0)
#define SOC_AO_SCTRL_SC_PERI_VOTESTAT0_MSK_sc_mcpusleep_vote_stat0_msk_1coresight_START  (1)
#define SOC_AO_SCTRL_SC_PERI_VOTESTAT0_MSK_sc_mcpusleep_vote_stat0_msk_1coresight_END    (1)
#define SOC_AO_SCTRL_SC_PERI_VOTESTAT0_MSK_sc_perisleep_vote_stat0_msk_2ipf_START        (2)
#define SOC_AO_SCTRL_SC_PERI_VOTESTAT0_MSK_sc_perisleep_vote_stat0_msk_2ipf_END          (2)
#define SOC_AO_SCTRL_SC_PERI_VOTESTAT0_MSK_sc_perisleep_vote_stat0_msk_3socp_START       (3)
#define SOC_AO_SCTRL_SC_PERI_VOTESTAT0_MSK_sc_perisleep_vote_stat0_msk_3socp_END         (3)
#define SOC_AO_SCTRL_SC_PERI_VOTESTAT0_MSK_sc_perisleep_vote_stat0_msk_acpu0_START       (4)
#define SOC_AO_SCTRL_SC_PERI_VOTESTAT0_MSK_sc_perisleep_vote_stat0_msk_acpu0_END         (4)
#define SOC_AO_SCTRL_SC_PERI_VOTESTAT0_MSK_sc_perisleep_vote_stat0_msk_mcpu_START        (5)
#define SOC_AO_SCTRL_SC_PERI_VOTESTAT0_MSK_sc_perisleep_vote_stat0_msk_mcpu_END          (5)
#define SOC_AO_SCTRL_SC_PERI_VOTESTAT0_MSK_sc_perisleep_vote_stat0_msk_hifi_START        (6)
#define SOC_AO_SCTRL_SC_PERI_VOTESTAT0_MSK_sc_perisleep_vote_stat0_msk_hifi_END          (6)
#define SOC_AO_SCTRL_SC_PERI_VOTESTAT0_MSK_sc_perisleep_vote_stat0_msk_codec_START       (7)
#define SOC_AO_SCTRL_SC_PERI_VOTESTAT0_MSK_sc_perisleep_vote_stat0_msk_codec_END         (7)
#define SOC_AO_SCTRL_SC_PERI_VOTESTAT0_MSK_sc_perisleep_vote_stat0_msk_START             (8)
#define SOC_AO_SCTRL_SC_PERI_VOTESTAT0_MSK_sc_perisleep_vote_stat0_msk_END               (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_PERI_VOTESTAT1_MSK_UNION
 �ṹ˵��  : SC_PERI_VOTESTAT1_MSK �Ĵ����ṹ���塣��ַƫ����:0x90C����ֵ:0x00000000�����:32
 �Ĵ���˵��: PERI˯�߻���ͶƱ���κ�״̬�Ĵ���1�����ڻض���ͶƱ��״̬��1ΪͶƱ��0Ϊ��ͶƱ״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_mcpusleep_vote_stat1_msk_0coresight : 1;  /* bit[0]   : [0]�� CoreSight��������csyspwupreq
                                                                                 Ϊ0��ʾ����˯�ߣ�Ϊ1��ʾ������˯�ߣ���Ҫ���ѡ� */
        unsigned int  sc_mcpusleep_vote_stat1_msk_1coresight : 1;  /* bit[1]   : [1]�� CoreSight��������cdbgpwupreq
                                                                                 Ϊ0��ʾ����˯�ߣ�Ϊ1��ʾ������˯�ߣ���Ҫ���ѡ� */
        unsigned int  sc_perisleep_vote_stat1_msk_2ipf       : 1;  /* bit[2]   : [2]�� IPF����״̬�źš� */
        unsigned int  sc_perisleep_vote_stat1_msk_3socp      : 1;  /* bit[3]   : [3]�� SOCP����״̬�źš� */
        unsigned int  sc_perisleep_vote_stat1_msk_acpu0      : 1;  /* bit[4]   : [4]�� ACPU Cluster��������״̬�� */
        unsigned int  sc_perisleep_vote_stat1_msk_mcpu       : 1;  /* bit[5]   : [5]�� MCPU��������״̬�� */
        unsigned int  sc_perisleep_vote_stat1_msk_hifi       : 1;  /* bit[6]   : [6]�� HiFi��������״̬�� */
        unsigned int  sc_perisleep_vote_stat1_msk_codec      : 1;  /* bit[7]   : [7]�� CODEC+ISP��������״̬�� */
        unsigned int  sc_perisleep_vote_stat1_msk            : 24; /* bit[8-31]: ���κ��͸�MCU�Ļ���ͶƱ״̬״̬
                                                                                 ������1bitΪ1��ʾ������˯�ߣ�����bitΪ1'b0��ʾ����˯�ߣ���ͶƱ״̬������PERI˯��ת��Ϊ������PERI˯��ʱ��ͶƱģ����MCU���������жϡ� */
    } reg;
} SOC_AO_SCTRL_SC_PERI_VOTESTAT1_MSK_UNION;
#endif
#define SOC_AO_SCTRL_SC_PERI_VOTESTAT1_MSK_sc_mcpusleep_vote_stat1_msk_0coresight_START  (0)
#define SOC_AO_SCTRL_SC_PERI_VOTESTAT1_MSK_sc_mcpusleep_vote_stat1_msk_0coresight_END    (0)
#define SOC_AO_SCTRL_SC_PERI_VOTESTAT1_MSK_sc_mcpusleep_vote_stat1_msk_1coresight_START  (1)
#define SOC_AO_SCTRL_SC_PERI_VOTESTAT1_MSK_sc_mcpusleep_vote_stat1_msk_1coresight_END    (1)
#define SOC_AO_SCTRL_SC_PERI_VOTESTAT1_MSK_sc_perisleep_vote_stat1_msk_2ipf_START        (2)
#define SOC_AO_SCTRL_SC_PERI_VOTESTAT1_MSK_sc_perisleep_vote_stat1_msk_2ipf_END          (2)
#define SOC_AO_SCTRL_SC_PERI_VOTESTAT1_MSK_sc_perisleep_vote_stat1_msk_3socp_START       (3)
#define SOC_AO_SCTRL_SC_PERI_VOTESTAT1_MSK_sc_perisleep_vote_stat1_msk_3socp_END         (3)
#define SOC_AO_SCTRL_SC_PERI_VOTESTAT1_MSK_sc_perisleep_vote_stat1_msk_acpu0_START       (4)
#define SOC_AO_SCTRL_SC_PERI_VOTESTAT1_MSK_sc_perisleep_vote_stat1_msk_acpu0_END         (4)
#define SOC_AO_SCTRL_SC_PERI_VOTESTAT1_MSK_sc_perisleep_vote_stat1_msk_mcpu_START        (5)
#define SOC_AO_SCTRL_SC_PERI_VOTESTAT1_MSK_sc_perisleep_vote_stat1_msk_mcpu_END          (5)
#define SOC_AO_SCTRL_SC_PERI_VOTESTAT1_MSK_sc_perisleep_vote_stat1_msk_hifi_START        (6)
#define SOC_AO_SCTRL_SC_PERI_VOTESTAT1_MSK_sc_perisleep_vote_stat1_msk_hifi_END          (6)
#define SOC_AO_SCTRL_SC_PERI_VOTESTAT1_MSK_sc_perisleep_vote_stat1_msk_codec_START       (7)
#define SOC_AO_SCTRL_SC_PERI_VOTESTAT1_MSK_sc_perisleep_vote_stat1_msk_codec_END         (7)
#define SOC_AO_SCTRL_SC_PERI_VOTESTAT1_MSK_sc_perisleep_vote_stat1_msk_START             (8)
#define SOC_AO_SCTRL_SC_PERI_VOTESTAT1_MSK_sc_perisleep_vote_stat1_msk_END               (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_ACPU_VOTEEN_UNION
 �ṹ˵��  : SC_ACPU_VOTEEN �Ĵ����ṹ���塣��ַƫ����:0x910����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU˯�߻���ͶƱʹ�ܼĴ���0���Ա���д1������ͶƱ״̬��д0��Ӱ��ͶƱ״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_acpusleep_vote_en0_7reserved : 8;  /* bit[0-7] : reserved */
        unsigned int  sc_acpusleep_vote_en0           : 24; /* bit[8-31]: [31:8]��ACPU����ͶƱ�Ĵ���0�����ڲ�������ͶƱ���Ա���д1����������ͶƱ��д0��Ӱ��ͶƱ��״̬��
                                                                          [7:0]��Ӳ��״̬ͶƱʹ�á� */
    } reg;
} SOC_AO_SCTRL_SC_ACPU_VOTEEN_UNION;
#endif
#define SOC_AO_SCTRL_SC_ACPU_VOTEEN_sc_acpusleep_vote_en0_7reserved_START  (0)
#define SOC_AO_SCTRL_SC_ACPU_VOTEEN_sc_acpusleep_vote_en0_7reserved_END    (7)
#define SOC_AO_SCTRL_SC_ACPU_VOTEEN_sc_acpusleep_vote_en0_START            (8)
#define SOC_AO_SCTRL_SC_ACPU_VOTEEN_sc_acpusleep_vote_en0_END              (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_ACPU_VOTEDIS_UNION
 �ṹ˵��  : SC_ACPU_VOTEDIS �Ĵ����ṹ���塣��ַƫ����:0x914����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU˯�߻���ͶƱ��ֹ�Ĵ���0���Ա���д1�����ͶƱ״̬��д0��Ӱ��ͶƱʹ�ܵ�״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_acpusleep_vote_dis0_7reserved : 8;  /* bit[0-7] : reserved */
        unsigned int  sc_acpusleep_vote_dis0           : 24; /* bit[8-31]: [31:8]�� ACPU˯��ͶƱʹ�ܽ�ֹ�Ĵ���0�����ڲ���˯��ͶƱ���Ա���д1������˯��ͶƱ��д0��Ӱ��ͶƱ��״̬��
                                                                           [7:0]�� Ӳ��״̬ͶƱʹ�á� */
    } reg;
} SOC_AO_SCTRL_SC_ACPU_VOTEDIS_UNION;
#endif
#define SOC_AO_SCTRL_SC_ACPU_VOTEDIS_sc_acpusleep_vote_dis0_7reserved_START  (0)
#define SOC_AO_SCTRL_SC_ACPU_VOTEDIS_sc_acpusleep_vote_dis0_7reserved_END    (7)
#define SOC_AO_SCTRL_SC_ACPU_VOTEDIS_sc_acpusleep_vote_dis0_START            (8)
#define SOC_AO_SCTRL_SC_ACPU_VOTEDIS_sc_acpusleep_vote_dis0_END              (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_ACPU_VOTESTAT_UNION
 �ṹ˵��  : SC_ACPU_VOTESTAT �Ĵ����ṹ���塣��ַƫ����:0x918����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU˯�߻���ͶƱ״̬�Ĵ���0�����ڻض���ͶƱ��״̬��1Ϊ��ͶƱ״̬��0Ϊ��ͶƱ״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_acpusleep_vote_stat0_7reserved : 8;  /* bit[0-7] : reserved */
        unsigned int  sc_acpusleep_vote_stat0           : 24; /* bit[8-31]: [31:8]�� ACPU˯��ͶƱ״̬�Ĵ���0�����ڻض���ͶƱ��״̬��1ΪͶƱ��0Ϊ��ͶƱ״̬��
                                                                            Ϊ0��ʾ����˯�ߣ�Ϊ1��ʾ������˯�ߣ���Ҫ����
                                                                            [7:0]�� Ӳ��״̬ͶƱʹ�á� */
    } reg;
} SOC_AO_SCTRL_SC_ACPU_VOTESTAT_UNION;
#endif
#define SOC_AO_SCTRL_SC_ACPU_VOTESTAT_sc_acpusleep_vote_stat0_7reserved_START  (0)
#define SOC_AO_SCTRL_SC_ACPU_VOTESTAT_sc_acpusleep_vote_stat0_7reserved_END    (7)
#define SOC_AO_SCTRL_SC_ACPU_VOTESTAT_sc_acpusleep_vote_stat0_START            (8)
#define SOC_AO_SCTRL_SC_ACPU_VOTESTAT_sc_acpusleep_vote_stat0_END              (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_ACPU_VOTE_MSK0_UNION
 �ṹ˵��  : SC_ACPU_VOTE_MSK0 �Ĵ����ṹ���塣��ַƫ����:0x920����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU˯�߻���ͶƱ���μĴ���0���Ա���д1����Ӧȡ�����Σ�д0�����жϡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_acpusleep_vote_msk0 : 32; /* bit[0-31]: �����͸�ACPU��˯��ͶƱ״̬�� */
    } reg;
} SOC_AO_SCTRL_SC_ACPU_VOTE_MSK0_UNION;
#endif
#define SOC_AO_SCTRL_SC_ACPU_VOTE_MSK0_sc_acpusleep_vote_msk0_START  (0)
#define SOC_AO_SCTRL_SC_ACPU_VOTE_MSK0_sc_acpusleep_vote_msk0_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_ACPU_VOTE_MSK1_UNION
 �ṹ˵��  : SC_ACPU_VOTE_MSK1 �Ĵ����ṹ���塣��ַƫ����:0x924����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU˯�߻���ͶƱ���μĴ���1���Ա���д1����Ӧȡ�����Σ�д0�����жϡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_acpusleep_vote_msk1 : 32; /* bit[0-31]: �����͸�MCU�Ļ���ͶƱ״̬�� */
    } reg;
} SOC_AO_SCTRL_SC_ACPU_VOTE_MSK1_UNION;
#endif
#define SOC_AO_SCTRL_SC_ACPU_VOTE_MSK1_sc_acpusleep_vote_msk1_START  (0)
#define SOC_AO_SCTRL_SC_ACPU_VOTE_MSK1_sc_acpusleep_vote_msk1_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_ACPU_VOTESTAT0_MSK_UNION
 �ṹ˵��  : SC_ACPU_VOTESTAT0_MSK �Ĵ����ṹ���塣��ַƫ����:0x928����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU˯��ͶƱ���κ�״̬�Ĵ���0�����ڻض���ͶƱ��״̬��1ΪͶƱ��0Ϊ��ͶƱ״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_acpusleep_vote_stat0_msk_0coresight : 1;  /* bit[0]   : [0]�� CoreSight��������csyspwupreq
                                                                                 Ϊ0��ʾ����˯�ߣ�Ϊ1��ʾ������˯�ߣ���Ҫ���ѡ� */
        unsigned int  sc_acpusleep_vote_stat0_msk_1coresight : 1;  /* bit[1]   : [1]�� CoreSight��������cdbgpwupreq
                                                                                 Ϊ0��ʾ����˯�ߣ�Ϊ1��ʾ������˯�ߣ���Ҫ���ѡ� */
        unsigned int  sc_acpusleep_vote_stat0_msk_2ipf       : 1;  /* bit[2]   : [2]�� IPF����״̬�źš� */
        unsigned int  sc_acpusleep_vote_stat0_msk_3socp      : 1;  /* bit[3]   : [3]�� SOCP����״̬�źš� */
        unsigned int  sc_acpusleep_vote_stat0_msk_7reserved  : 4;  /* bit[4-7] : [7:4]�� reserved */
        unsigned int  sc_acpusleep_vote_stat0_msk            : 24; /* bit[8-31]: ���κ��͸�ACPU��˯��ͶƱ״̬
                                                                                 ������1bitΪ1��ʾ������˯�ߣ�����bitΪ1'b0��ʾ����˯�ߣ���ͶƱ״̬�Ӳ�����ACPU˯��ת��Ϊ����ACPU˯��ʱ��ͶƱģ����ACPU����˯���жϡ� */
    } reg;
} SOC_AO_SCTRL_SC_ACPU_VOTESTAT0_MSK_UNION;
#endif
#define SOC_AO_SCTRL_SC_ACPU_VOTESTAT0_MSK_sc_acpusleep_vote_stat0_msk_0coresight_START  (0)
#define SOC_AO_SCTRL_SC_ACPU_VOTESTAT0_MSK_sc_acpusleep_vote_stat0_msk_0coresight_END    (0)
#define SOC_AO_SCTRL_SC_ACPU_VOTESTAT0_MSK_sc_acpusleep_vote_stat0_msk_1coresight_START  (1)
#define SOC_AO_SCTRL_SC_ACPU_VOTESTAT0_MSK_sc_acpusleep_vote_stat0_msk_1coresight_END    (1)
#define SOC_AO_SCTRL_SC_ACPU_VOTESTAT0_MSK_sc_acpusleep_vote_stat0_msk_2ipf_START        (2)
#define SOC_AO_SCTRL_SC_ACPU_VOTESTAT0_MSK_sc_acpusleep_vote_stat0_msk_2ipf_END          (2)
#define SOC_AO_SCTRL_SC_ACPU_VOTESTAT0_MSK_sc_acpusleep_vote_stat0_msk_3socp_START       (3)
#define SOC_AO_SCTRL_SC_ACPU_VOTESTAT0_MSK_sc_acpusleep_vote_stat0_msk_3socp_END         (3)
#define SOC_AO_SCTRL_SC_ACPU_VOTESTAT0_MSK_sc_acpusleep_vote_stat0_msk_7reserved_START   (4)
#define SOC_AO_SCTRL_SC_ACPU_VOTESTAT0_MSK_sc_acpusleep_vote_stat0_msk_7reserved_END     (7)
#define SOC_AO_SCTRL_SC_ACPU_VOTESTAT0_MSK_sc_acpusleep_vote_stat0_msk_START             (8)
#define SOC_AO_SCTRL_SC_ACPU_VOTESTAT0_MSK_sc_acpusleep_vote_stat0_msk_END               (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_ACPU_VOTESTAT1_MSK_UNION
 �ṹ˵��  : SC_ACPU_VOTESTAT1_MSK �Ĵ����ṹ���塣��ַƫ����:0x92C����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU˯�߻���ͶƱ���κ�״̬�Ĵ���1�����ڻض���ͶƱ��״̬��1ΪͶƱ��0Ϊ��ͶƱ״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_acpusleep_vote_stat1_msk_0coresight : 1;  /* bit[0]   : [0]�� CoreSight��������csyspwupreq
                                                                                 Ϊ0��ʾ����˯�ߣ�Ϊ1��ʾ������˯�ߣ���Ҫ���ѡ� */
        unsigned int  sc_acpusleep_vote_stat1_msk_1coresight : 1;  /* bit[1]   : [1]�� CoreSight��������cdbgpwupreq
                                                                                 Ϊ0��ʾ����˯�ߣ�Ϊ1��ʾ������˯�ߣ���Ҫ���ѡ� */
        unsigned int  sc_acpusleep_vote_stat1_msk_2ipf       : 1;  /* bit[2]   : [2]�� IPF����״̬�źš� */
        unsigned int  sc_acpusleep_vote_stat1_msk_3socp      : 1;  /* bit[3]   : [3]�� SOCP����״̬�źš� */
        unsigned int  sc_acpusleep_vote_stat1_msk_7reserved  : 4;  /* bit[4-7] : [7:4]�� reserved */
        unsigned int  sc_acpusleep_vote_stat1_msk            : 24; /* bit[8-31]: ���κ��͸�MCU�Ļ���ͶƱ״̬
                                                                                 ������1bitΪ1��ʾ������˯�ߣ�����bitΪ1'b0��ʾ����˯�ߣ���ͶƱ״̬������ACPU˯��ת��Ϊ������ACPU˯��ʱ��ͶƱģ����MCU���������жϡ� */
    } reg;
} SOC_AO_SCTRL_SC_ACPU_VOTESTAT1_MSK_UNION;
#endif
#define SOC_AO_SCTRL_SC_ACPU_VOTESTAT1_MSK_sc_acpusleep_vote_stat1_msk_0coresight_START  (0)
#define SOC_AO_SCTRL_SC_ACPU_VOTESTAT1_MSK_sc_acpusleep_vote_stat1_msk_0coresight_END    (0)
#define SOC_AO_SCTRL_SC_ACPU_VOTESTAT1_MSK_sc_acpusleep_vote_stat1_msk_1coresight_START  (1)
#define SOC_AO_SCTRL_SC_ACPU_VOTESTAT1_MSK_sc_acpusleep_vote_stat1_msk_1coresight_END    (1)
#define SOC_AO_SCTRL_SC_ACPU_VOTESTAT1_MSK_sc_acpusleep_vote_stat1_msk_2ipf_START        (2)
#define SOC_AO_SCTRL_SC_ACPU_VOTESTAT1_MSK_sc_acpusleep_vote_stat1_msk_2ipf_END          (2)
#define SOC_AO_SCTRL_SC_ACPU_VOTESTAT1_MSK_sc_acpusleep_vote_stat1_msk_3socp_START       (3)
#define SOC_AO_SCTRL_SC_ACPU_VOTESTAT1_MSK_sc_acpusleep_vote_stat1_msk_3socp_END         (3)
#define SOC_AO_SCTRL_SC_ACPU_VOTESTAT1_MSK_sc_acpusleep_vote_stat1_msk_7reserved_START   (4)
#define SOC_AO_SCTRL_SC_ACPU_VOTESTAT1_MSK_sc_acpusleep_vote_stat1_msk_7reserved_END     (7)
#define SOC_AO_SCTRL_SC_ACPU_VOTESTAT1_MSK_sc_acpusleep_vote_stat1_msk_START             (8)
#define SOC_AO_SCTRL_SC_ACPU_VOTESTAT1_MSK_sc_acpusleep_vote_stat1_msk_END               (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_MCU_VOTEEN_UNION
 �ṹ˵��  : SC_MCU_VOTEEN �Ĵ����ṹ���塣��ַƫ����:0x930����ֵ:0x00000000�����:32
 �Ĵ���˵��: MCUͶƱ�����Ĵ���0���Ա���д1����Ӧ����ͶƱ״̬��д0��Ӱ��ͶƱ״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_mcu_vote_en0 : 32; /* bit[0-31]: MCU/ACPU/CCPU/HiFiͶƱʹ�ܼĴ���0������ʹ��ͶƱ���Ա���д1��ͶƱ״̬��Ч��д0��Ӱ��ͶƱ״̬�� */
    } reg;
} SOC_AO_SCTRL_SC_MCU_VOTEEN_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_VOTEEN_sc_mcu_vote_en0_START  (0)
#define SOC_AO_SCTRL_SC_MCU_VOTEEN_sc_mcu_vote_en0_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_MCU_VOTEDIS_UNION
 �ṹ˵��  : SC_MCU_VOTEDIS �Ĵ����ṹ���塣��ַƫ����:0x934����ֵ:0x00000000�����:32
 �Ĵ���˵��: MCUͶƱ��ֹ�Ĵ���0���Ա���д1�����ͶƱ״̬��д0��Ӱ��ͶƱʹ�ܵ�״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_mcu_vote_dis0 : 32; /* bit[0-31]: MCU/ACPU/CCPU/HiFiͶƱ��ֹ�Ĵ���0�����ڽ�ֹͶƱ���Ա���д1�����ͶƱ״̬��д0��Ӱ��ͶƱʹ�ܵ�״̬�� */
    } reg;
} SOC_AO_SCTRL_SC_MCU_VOTEDIS_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_VOTEDIS_sc_mcu_vote_dis0_START  (0)
#define SOC_AO_SCTRL_SC_MCU_VOTEDIS_sc_mcu_vote_dis0_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_MCU_VOTESTAT_UNION
 �ṹ˵��  : SC_MCU_VOTESTAT �Ĵ����ṹ���塣��ַƫ����:0x938����ֵ:0x00000000�����:32
 �Ĵ���˵��: MCUͶƱ״̬�Ĵ���0�����ڻض���ͶƱ��״̬��1Ϊ��ͶƱ״̬��0Ϊ��ͶƱ״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_mcu_vote_stat0 : 32; /* bit[0-31]: MCU/ACPU/CCPU/HiFiͶƱͶƱ״̬�Ĵ���0�����ڻض���ͶƱ��״̬��1ΪͶƱ״̬��0Ϊ��ͶƱ״̬��
                                                            ������ò����жϣ�������1bitΪ1��ʾ����������bitΪ1'b0��ʾ����
                                                            1����ͶƱ״̬�Ӳ�����״̬ת��Ϊ����״̬ʱ��ͶƱģ���ѡ��MCU/ACPU/CCPU/HiFi�����ж�
                                                            2����ͶƱ״̬������ת��Ϊ������ʱ��ͶƱģ���ѡ��MCU/ACPU/CCPU/HiFi�����жϡ� */
    } reg;
} SOC_AO_SCTRL_SC_MCU_VOTESTAT_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_VOTESTAT_sc_mcu_vote_stat0_START  (0)
#define SOC_AO_SCTRL_SC_MCU_VOTESTAT_sc_mcu_vote_stat0_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_MCU_VOTE_MSK0_UNION
 �ṹ˵��  : SC_MCU_VOTE_MSK0 �Ĵ����ṹ���塣��ַƫ����:0x940����ֵ:0x00000000�����:32
 �Ĵ���˵��: MCUͶƱ�Ĵ���0�����μĴ���0���Ա���д1����Ӧȡ�����Σ�д0�����жϡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_mcu_vote_msk0 : 32; /* bit[0-31]: �����͸�MCU/ACPU/CCPU/HiFi������״̬(SC_MCU_VOTESTAT0�ɷ�ȫ0���ȫ0)�� */
    } reg;
} SOC_AO_SCTRL_SC_MCU_VOTE_MSK0_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_VOTE_MSK0_sc_mcu_vote_msk0_START  (0)
#define SOC_AO_SCTRL_SC_MCU_VOTE_MSK0_sc_mcu_vote_msk0_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_MCU_VOTE_MSK1_UNION
 �ṹ˵��  : SC_MCU_VOTE_MSK1 �Ĵ����ṹ���塣��ַƫ����:0x944����ֵ:0x00000000�����:32
 �Ĵ���˵��: MCUͶƱ�Ĵ���0�����μĴ���1���Ա���д1����Ӧȡ�����Σ�д0�����жϡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_mcu_vote_msk1 : 32; /* bit[0-31]: �����͸�MCU/ACPU/CCPU/HiFi�Ĳ�����״̬(SC_MCU_VOTESTAT0��ȫ0��ɷ�ȫ0)�� */
    } reg;
} SOC_AO_SCTRL_SC_MCU_VOTE_MSK1_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_VOTE_MSK1_sc_mcu_vote_msk1_START  (0)
#define SOC_AO_SCTRL_SC_MCU_VOTE_MSK1_sc_mcu_vote_msk1_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_MCU_VOTESTAT0_MSK_UNION
 �ṹ˵��  : SC_MCU_VOTESTAT0_MSK �Ĵ����ṹ���塣��ַƫ����:0x948����ֵ:0x00000000�����:32
 �Ĵ���˵��: MCUͶƱ�Ĵ���0���κ�״̬�Ĵ���0�����ڻض���ͶƱ��״̬��1Ϊ��ͶƱ״̬��0Ϊ��ͶƱ״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_mcu_vote_stat0_msk : 32; /* bit[0-31]: ���κ��͸�MCU/ACPU/CCPU/HiFi�������ж�״̬
                                                                ������1bitΪ1��ʾ������״̬������bitΪ1'b0��ʾ����״̬����ͶƱ״̬�Ӳ�����״̬ת��Ϊ����״̬ʱ��ͶƱģ����MCU/ACPU/CCPU/HiFi���������жϡ� */
    } reg;
} SOC_AO_SCTRL_SC_MCU_VOTESTAT0_MSK_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_VOTESTAT0_MSK_sc_mcu_vote_stat0_msk_START  (0)
#define SOC_AO_SCTRL_SC_MCU_VOTESTAT0_MSK_sc_mcu_vote_stat0_msk_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_MCU_VOTESTAT1_MSK_UNION
 �ṹ˵��  : SC_MCU_VOTESTAT1_MSK �Ĵ����ṹ���塣��ַƫ����:0x94C����ֵ:0x00000000�����:32
 �Ĵ���˵��: MCUͶƱ�Ĵ���0���κ�״̬�Ĵ���1�����ڻض���ͶƱ��״̬��1Ϊ��ͶƱ״̬��0Ϊ��ͶƱ״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_mcu_vote_stat1_msk : 32; /* bit[0-31]: ���κ��͸�MCU/ACPU/CCPU/HiFi�Ĳ������ж�״̬
                                                                ������1bitΪ1��ʾ����״̬������bitΪ1'b0��ʾ����״̬����ͶƱ״̬������״̬ת��Ϊ������״̬ʱ��ͶƱģ����MCU/ACPU/CCPU/HiFi���������жϡ� */
    } reg;
} SOC_AO_SCTRL_SC_MCU_VOTESTAT1_MSK_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_VOTESTAT1_MSK_sc_mcu_vote_stat1_msk_START  (0)
#define SOC_AO_SCTRL_SC_MCU_VOTESTAT1_MSK_sc_mcu_vote_stat1_msk_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_MCU_VOTE1EN_UNION
 �ṹ˵��  : SC_MCU_VOTE1EN �Ĵ����ṹ���塣��ַƫ����:0x960����ֵ:0x00000000�����:32
 �Ĵ���˵��: MCUͶƱ�����Ĵ���1���Ա���д1����Ӧ����ͶƱ״̬��д0��Ӱ��ͶƱ״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_mcu_vote1_en0 : 32; /* bit[0-31]: MCU/ACPU/CCPU/HiFiͶƱʹ�ܼĴ���1������ʹ��ͶƱ���Ա���д1��ͶƱ״̬��Ч��д0��Ӱ��ͶƱ״̬�� */
    } reg;
} SOC_AO_SCTRL_SC_MCU_VOTE1EN_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_VOTE1EN_sc_mcu_vote1_en0_START  (0)
#define SOC_AO_SCTRL_SC_MCU_VOTE1EN_sc_mcu_vote1_en0_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_MCU_VOTE1DIS_UNION
 �ṹ˵��  : SC_MCU_VOTE1DIS �Ĵ����ṹ���塣��ַƫ����:0x964����ֵ:0x00000000�����:32
 �Ĵ���˵��: MCUͶƱ��ֹ�Ĵ���1���Ա���д1�����ͶƱ״̬��д0��Ӱ��ͶƱʹ�ܵ�״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_mcu_vote1_dis0 : 32; /* bit[0-31]: MCU/ACPU/CCPU/HiFiͶƱ��ֹ�Ĵ���1�����ڽ�ֹͶƱ���Ա���д1�����ͶƱ״̬��д0��Ӱ��ͶƱʹ�ܵ�״̬�� */
    } reg;
} SOC_AO_SCTRL_SC_MCU_VOTE1DIS_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_VOTE1DIS_sc_mcu_vote1_dis0_START  (0)
#define SOC_AO_SCTRL_SC_MCU_VOTE1DIS_sc_mcu_vote1_dis0_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_MCU_VOTE1STAT_UNION
 �ṹ˵��  : SC_MCU_VOTE1STAT �Ĵ����ṹ���塣��ַƫ����:0x968����ֵ:0x00000000�����:32
 �Ĵ���˵��: MCUͶƱ״̬�Ĵ���1�����ڻض���ͶƱ��״̬��1Ϊ��ͶƱ״̬��0Ϊ��ͶƱ״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_mcu_vote1_stat0 : 32; /* bit[0-31]: MCU/ACPU/CCPU/HiFiͶƱͶƱ״̬�Ĵ���1�����ڻض���ͶƱ��״̬��1ΪͶƱ״̬��0Ϊ��ͶƱ״̬��
                                                             ������ò����жϣ�������1bitΪ1��ʾ����������bitΪ1'b0��ʾ����
                                                             1����ͶƱ״̬�Ӳ�����״̬ת��Ϊ����״̬ʱ��ͶƱģ���ѡ��MCU/ACPU/CCPU/HiFi�����ж�
                                                             2����ͶƱ״̬������ת��Ϊ������ʱ��ͶƱģ���ѡ��MCU/ACPU/CCPU/HiFi�����жϡ� */
    } reg;
} SOC_AO_SCTRL_SC_MCU_VOTE1STAT_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_VOTE1STAT_sc_mcu_vote1_stat0_START  (0)
#define SOC_AO_SCTRL_SC_MCU_VOTE1STAT_sc_mcu_vote1_stat0_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_MCU_VOTE1_MSK0_UNION
 �ṹ˵��  : SC_MCU_VOTE1_MSK0 �Ĵ����ṹ���塣��ַƫ����:0x970����ֵ:0x00000000�����:32
 �Ĵ���˵��: MCUͶƱ�Ĵ���1�����μĴ���0���Ա���д1����Ӧȡ�����Σ�д0�����жϡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_mcu_vote1_msk0 : 32; /* bit[0-31]: �����͸�MCU/ACPU/CCPU/HiFi������״̬
                                                            (SC_MCU_VOTE1STAT0�ɷ�ȫ0���ȫ0)�� */
    } reg;
} SOC_AO_SCTRL_SC_MCU_VOTE1_MSK0_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_VOTE1_MSK0_sc_mcu_vote1_msk0_START  (0)
#define SOC_AO_SCTRL_SC_MCU_VOTE1_MSK0_sc_mcu_vote1_msk0_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_MCU_VOTE1_MSK1_UNION
 �ṹ˵��  : SC_MCU_VOTE1_MSK1 �Ĵ����ṹ���塣��ַƫ����:0x974����ֵ:0x00000000�����:32
 �Ĵ���˵��: MCUͶƱ�Ĵ���1�����μĴ���1���Ա���д1����Ӧȡ�����Σ�д0�����жϡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_mcu_vote1_msk1 : 32; /* bit[0-31]: �����͸�MCU/ACPU/CCPU/HiFi�Ĳ�����״̬
                                                            (SC_MCU_VOTE1STAT0��ȫ0��ɷ�ȫ0)�� */
    } reg;
} SOC_AO_SCTRL_SC_MCU_VOTE1_MSK1_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_VOTE1_MSK1_sc_mcu_vote1_msk1_START  (0)
#define SOC_AO_SCTRL_SC_MCU_VOTE1_MSK1_sc_mcu_vote1_msk1_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_MCU_VOTE1STAT0_MSK_UNION
 �ṹ˵��  : SC_MCU_VOTE1STAT0_MSK �Ĵ����ṹ���塣��ַƫ����:0x978����ֵ:0x00000000�����:32
 �Ĵ���˵��: MCUͶƱ�Ĵ���1���κ�״̬�Ĵ���0��������SYSNOC 150MHz����DFS���ơ����ڻض���ͶƱ��״̬��1Ϊ��ͶƱ״̬��0Ϊ��ͶƱ״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_mcu_vote1_stat0_msk : 32; /* bit[0-31]: ���κ��͸�MCU/ACPU/CCPU/HiFi�������ж�״̬
                                                                 ������1bitΪ1��ʾ������״̬������bitΪ1'b0��ʾ����״̬����ͶƱ״̬�Ӳ�����״̬ת��Ϊ����״̬ʱ��ͶƱģ����MCU/ACPU/CCPU/HiFi���������жϡ� */
    } reg;
} SOC_AO_SCTRL_SC_MCU_VOTE1STAT0_MSK_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_VOTE1STAT0_MSK_sc_mcu_vote1_stat0_msk_START  (0)
#define SOC_AO_SCTRL_SC_MCU_VOTE1STAT0_MSK_sc_mcu_vote1_stat0_msk_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_MCU_VOTE1STAT1_MSK_UNION
 �ṹ˵��  : SC_MCU_VOTE1STAT1_MSK �Ĵ����ṹ���塣��ַƫ����:0x97C����ֵ:0x00000000�����:32
 �Ĵ���˵��: MCUͶƱ�Ĵ���1���κ�״̬�Ĵ���1�����ڻض���ͶƱ��״̬��1Ϊ��ͶƱ״̬��0Ϊ��ͶƱ״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_mcu_vote1_stat1_msk : 32; /* bit[0-31]: ���κ��͸�MCU/ACPU/CCPU/HiFi�Ĳ������ж�״̬
                                                                 ������1bitΪ1��ʾ����״̬������bitΪ1'b0��ʾ����״̬����ͶƱ״̬������״̬ת��Ϊ������״̬ʱ��ͶƱģ����MCU/ACPU/CCPU/HiFi���������жϡ� */
    } reg;
} SOC_AO_SCTRL_SC_MCU_VOTE1STAT1_MSK_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_VOTE1STAT1_MSK_sc_mcu_vote1_stat1_msk_START  (0)
#define SOC_AO_SCTRL_SC_MCU_VOTE1STAT1_MSK_sc_mcu_vote1_stat1_msk_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_MCU_VOTE2EN_UNION
 �ṹ˵��  : SC_MCU_VOTE2EN �Ĵ����ṹ���塣��ַƫ����:0x980����ֵ:0x00000000�����:32
 �Ĵ���˵��: MCUͶƱ�����Ĵ���2���Ա���д1����Ӧ����ͶƱ״̬��д0��Ӱ��ͶƱ״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_mcu_vote2_en0 : 32; /* bit[0-31]: MCU/ACPU/CCPU/HiFiͶƱʹ�ܼĴ���2������ʹ��ͶƱ���Ա���д1��ͶƱ״̬��Ч��д0��Ӱ��ͶƱ״̬�� */
    } reg;
} SOC_AO_SCTRL_SC_MCU_VOTE2EN_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_VOTE2EN_sc_mcu_vote2_en0_START  (0)
#define SOC_AO_SCTRL_SC_MCU_VOTE2EN_sc_mcu_vote2_en0_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_MCU_VOTE2DIS_UNION
 �ṹ˵��  : SC_MCU_VOTE2DIS �Ĵ����ṹ���塣��ַƫ����:0x984����ֵ:0x00000000�����:32
 �Ĵ���˵��: MCUͶƱ��ֹ�Ĵ���2���Ա���д1�����ͶƱ״̬��д0��Ӱ��ͶƱʹ�ܵ�״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_mcu_vote2_dis0 : 32; /* bit[0-31]: MCU/ACPU/CCPU/HiFiͶƱ��ֹ�Ĵ���2�����ڽ�ֹͶƱ���Ա���д1�����ͶƱ״̬��д0��Ӱ��ͶƱʹ�ܵ�״̬�� */
    } reg;
} SOC_AO_SCTRL_SC_MCU_VOTE2DIS_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_VOTE2DIS_sc_mcu_vote2_dis0_START  (0)
#define SOC_AO_SCTRL_SC_MCU_VOTE2DIS_sc_mcu_vote2_dis0_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_MCU_VOTE2STAT_UNION
 �ṹ˵��  : SC_MCU_VOTE2STAT �Ĵ����ṹ���塣��ַƫ����:0x988����ֵ:0x00000000�����:32
 �Ĵ���˵��: MCUͶƱ״̬�Ĵ���2�����ڻض���ͶƱ��״̬��1Ϊ��ͶƱ״̬��0Ϊ��ͶƱ״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_mcu_vote2_stat0 : 32; /* bit[0-31]: MCU/ACPU/CCPU/HiFiͶƱͶƱ״̬�Ĵ���2�����ڻض���ͶƱ��״̬��1ΪͶƱ״̬��0Ϊ��ͶƱ״̬��
                                                             ������ò����жϣ�������1bitΪ1��ʾ����������bitΪ1'b0��ʾ����
                                                             1����ͶƱ״̬�Ӳ�����״̬ת��Ϊ����״̬ʱ��ͶƱģ���ѡ��MCU/ACPU/CCPU/HiFi�����ж�
                                                             2����ͶƱ״̬������ת��Ϊ������ʱ��ͶƱģ���ѡ��MCU/ACPU/CCPU/HiFi�����жϡ� */
    } reg;
} SOC_AO_SCTRL_SC_MCU_VOTE2STAT_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_VOTE2STAT_sc_mcu_vote2_stat0_START  (0)
#define SOC_AO_SCTRL_SC_MCU_VOTE2STAT_sc_mcu_vote2_stat0_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_MCU_VOTE2_MSK0_UNION
 �ṹ˵��  : SC_MCU_VOTE2_MSK0 �Ĵ����ṹ���塣��ַƫ����:0x990����ֵ:0x00000000�����:32
 �Ĵ���˵��: MCUͶƱ�Ĵ���2�����μĴ���0���Ա���д1����Ӧȡ�����Σ�д0�����жϡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_mcu_vote2_msk0 : 32; /* bit[0-31]: �����͸�MCU/ACPU/CCPU/HiFi������״̬
                                                            (SC_MCU_VOTE2STAT0�ɷ�ȫ0���ȫ0)�� */
    } reg;
} SOC_AO_SCTRL_SC_MCU_VOTE2_MSK0_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_VOTE2_MSK0_sc_mcu_vote2_msk0_START  (0)
#define SOC_AO_SCTRL_SC_MCU_VOTE2_MSK0_sc_mcu_vote2_msk0_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_MCU_VOTE2_MSK1_UNION
 �ṹ˵��  : SC_MCU_VOTE2_MSK1 �Ĵ����ṹ���塣��ַƫ����:0x994����ֵ:0x00000000�����:32
 �Ĵ���˵��: MCUͶƱ�Ĵ���2�����μĴ���1���Ա���д1����Ӧȡ�����Σ�д0�����жϡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_mcu_vote2_msk1 : 32; /* bit[0-31]: �����͸�MCU/ACPU/CCPU/HiFi�Ĳ�����״̬
                                                            (SC_MCU_VOTE2STAT0��ȫ0��ɷ�ȫ0)�� */
    } reg;
} SOC_AO_SCTRL_SC_MCU_VOTE2_MSK1_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_VOTE2_MSK1_sc_mcu_vote2_msk1_START  (0)
#define SOC_AO_SCTRL_SC_MCU_VOTE2_MSK1_sc_mcu_vote2_msk1_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_MCU_VOTE2STAT0_MSK_UNION
 �ṹ˵��  : SC_MCU_VOTE2STAT0_MSK �Ĵ����ṹ���塣��ַƫ����:0x998����ֵ:0x00000000�����:32
 �Ĵ���˵��: MCUͶƱ�Ĵ���2���κ�״̬�Ĵ���0��������SYSNOC/CFGBUS/PERI_DMA BUS����100MHz����DFS���ơ����ڻض���ͶƱ��״̬��1Ϊ��ͶƱ״̬��0Ϊ��ͶƱ״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_mcu_vote2_stat0_msk : 32; /* bit[0-31]: ���κ��͸�MCU/ACPU/CCPU/HiFi�������ж�״̬
                                                                 ������ָʾ�Ƿ��������߽�Ƶģʽ��
                                                                 ������1bitΪ1��ʾ������״̬������bitΪ1'b0��ʾ����״̬����ͶƱ״̬�Ӳ�����״̬ת��Ϊ����״̬ʱ��ͶƱģ����MCU/ACPU/CCPU/HiFi���������жϡ� */
    } reg;
} SOC_AO_SCTRL_SC_MCU_VOTE2STAT0_MSK_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_VOTE2STAT0_MSK_sc_mcu_vote2_stat0_msk_START  (0)
#define SOC_AO_SCTRL_SC_MCU_VOTE2STAT0_MSK_sc_mcu_vote2_stat0_msk_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_MCU_VOTE2STAT1_MSK_UNION
 �ṹ˵��  : SC_MCU_VOTE2STAT1_MSK �Ĵ����ṹ���塣��ַƫ����:0x99C����ֵ:0x00000000�����:32
 �Ĵ���˵��: MCUͶƱ�Ĵ���2���κ�״̬�Ĵ���1�����ڻض���ͶƱ��״̬��1Ϊ��ͶƱ״̬��0Ϊ��ͶƱ״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_mcu_vote2_stat1_msk : 32; /* bit[0-31]: ���κ��͸�MCU/ACPU/CCPU/HiFi�Ĳ������ж�״̬
                                                                 ������1bitΪ1��ʾ����״̬������bitΪ1'b0��ʾ����״̬����ͶƱ״̬������״̬ת��Ϊ������״̬ʱ��ͶƱģ����MCU/ACPU/CCPU/HiFi���������жϡ� */
    } reg;
} SOC_AO_SCTRL_SC_MCU_VOTE2STAT1_MSK_UNION;
#endif
#define SOC_AO_SCTRL_SC_MCU_VOTE2STAT1_MSK_sc_mcu_vote2_stat1_msk_START  (0)
#define SOC_AO_SCTRL_SC_MCU_VOTE2STAT1_MSK_sc_mcu_vote2_stat1_msk_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_VOTE_CTRL_UNION
 �ṹ˵��  : SC_VOTE_CTRL �Ĵ����ṹ���塣��ַƫ����:0x9A0����ֵ:0x00000000�����:32
 �Ĵ���˵��: ͶƱ���ƼĴ��������ܰ���ͶƱ���ﻥ�⡣
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  vote0_reg_semphen_req : 1;  /* bit[0]   : ͶƱ�Ĵ���0��Ӧ�����ﻥ��Ĵ����������������ͶƱ״̬��CPU1��SC_MCU_VOTE0ͶƱ�Ĵ���Ϊȫ0ʱ��ͨ�����ô�bitռ��ϵͳĳ����Դ���������CPU��Ҫ�ͷŴ���Դ������Ҫ�ȴ�vote0_semphsta=1'b0���ҽ�SC_MCU_VOTE0ͶƱ�Ĵ�����Ϊ��ȫ0����ʵ�֡�
                                                                1'b0�� ������ռ����Դ��
                                                                1'b1�� ����ռ����Դ�� */
        unsigned int  vote1_reg_semphen_req : 1;  /* bit[1]   : ͶƱ�Ĵ���1��Ӧ�����ﻥ��Ĵ����������������ͶƱ״̬��CPU1��SC_MCU_VOTE1ͶƱ�Ĵ���Ϊȫ0ʱ��ͨ�����ô�bitռ��ϵͳĳ����Դ���������CPU��Ҫ�ͷŴ���Դ������Ҫ�ȴ�vote1_semphsta=1'b0���ҽ�SC_MCU_VOTE1ͶƱ�Ĵ�����Ϊ��ȫ0����ʵ�֡�
                                                                1'b0�� ������ռ����Դ��
                                                                1'b1�� ����ռ����Դ�� */
        unsigned int  vote2_reg_semphen_req : 1;  /* bit[2]   : ͶƱ�Ĵ���2��Ӧ�����ﻥ��Ĵ����������������ͶƱ״̬��CPU1��SC_MCU_VOTE2ͶƱ�Ĵ���Ϊȫ0ʱ��ͨ�����ô�bitռ��ϵͳĳ����Դ���������CPU��Ҫ�ͷŴ���Դ������Ҫ�ȴ�vote2_semphsta=1'b0���ҽ�SC_MCU_VOTE2ͶƱ�Ĵ�����Ϊ��ȫ0����ʵ�֡�
                                                                1'b0�� ������ռ����Դ��
                                                                1'b1�� ����ռ����Դ�� */
        unsigned int  reserved              : 29; /* bit[3-31]: reserved */
    } reg;
} SOC_AO_SCTRL_SC_VOTE_CTRL_UNION;
#endif
#define SOC_AO_SCTRL_SC_VOTE_CTRL_vote0_reg_semphen_req_START  (0)
#define SOC_AO_SCTRL_SC_VOTE_CTRL_vote0_reg_semphen_req_END    (0)
#define SOC_AO_SCTRL_SC_VOTE_CTRL_vote1_reg_semphen_req_START  (1)
#define SOC_AO_SCTRL_SC_VOTE_CTRL_vote1_reg_semphen_req_END    (1)
#define SOC_AO_SCTRL_SC_VOTE_CTRL_vote2_reg_semphen_req_START  (2)
#define SOC_AO_SCTRL_SC_VOTE_CTRL_vote2_reg_semphen_req_END    (2)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_VOTE_STAT_UNION
 �ṹ˵��  : SC_VOTE_STAT �Ĵ����ṹ���塣��ַƫ����:0x9A4����ֵ:0x00000000�����:32
 �Ĵ���˵��: ͶƱ���ƼĴ��������ܰ���ͶƱ���ﻥ��״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  vote0_semphsta      : 1;  /* bit[0]   : ͶƱ�Ĵ���0��Ӧ�����ﻥ��״̬�Ĵ�������������鿴ͶƱ״̬��CPU1��SC_MCU_VOTE0ͶƱ�Ĵ���Ϊȫ0ʱ��ͨ������vote0_reg_semphen_reqռ��ϵͳĳ����Դ������ɹ����bit��Ϊ1'1b���������CPU��Ҫ�ͷŴ���Դ������Ҫ�ȴ�vote0_semphsta=1'b0���ҽ�SC_MCU_VOTE0ͶƱ�Ĵ�����Ϊ��ȫ0����ʵ�֡�
                                                              1'b0�� ռ����Դ���ͷš�
                                                              1'b1�� ����������ռ����Դ�� */
        unsigned int  vote1_semphsta      : 1;  /* bit[1]   : ͶƱ�Ĵ���1��Ӧ�����ﻥ��״̬�Ĵ�������������鿴ͶƱ״̬����CPU1��SC_MCU_VOTE1ͶƱ�Ĵ���Ϊȫ0ʱ��ͨ������vote1_reg_semphen_reqռ��ϵͳĳ����Դ������ɹ����bit��Ϊ1'1b���������CPU��Ҫ�ͷŴ���Դ������Ҫ�ȴ�vote1_semphsta=1'b0���ҽ�SC_MCU_VOTE1ͶƱ�Ĵ�����Ϊ��ȫ0����ʵ�֡�
                                                              1'b0�� ռ����Դ���ͷţ�
                                                              1'b1�� ����������ռ����Դ�� */
        unsigned int  vote2_semphsta      : 1;  /* bit[2]   : ͶƱ�Ĵ���2��Ӧ�����ﻥ��״̬�Ĵ�������������鿴ͶƱ״̬��CPU1��SC_MCU_VOTE2ͶƱ�Ĵ���Ϊȫ0ʱ��ͨ������vote2_reg_semphen_reqռ��ϵͳĳ����Դ������ɹ����bit��Ϊ1'1b���������CPU��Ҫ�ͷŴ���Դ������Ҫ�ȴ�vote2_semphsta=1'b0���ҽ�SC_MCU_VOTE2ͶƱ�Ĵ�����Ϊ��ȫ0����ʵ�֡�
                                                              1'b0�� ռ����Դ���ͷţ�
                                                              1'b1�� ����������ռ����Դ�� */
        unsigned int  reserved_0          : 1;  /* bit[3]   : reserved */
        unsigned int  coresight_wakeup_en : 2;  /* bit[4-5] : coresight_wakeup_en[1]�� CoreSight��������cdbgpwupreq
                                                              Ϊ0��ʾ����˯�ߣ�Ϊ1��ʾ������˯�ߣ���Ҫ����
                                                              coresight_wakeup_en[0]�� CoreSight��������csyspwupreq
                                                              Ϊ0��ʾ����˯�ߣ�Ϊ1��ʾ������˯�ߣ���Ҫ���ѡ� */
        unsigned int  ipf_wakeup_en       : 1;  /* bit[6]   : IPF����״̬�źš� */
        unsigned int  socp_wakeup_en      : 1;  /* bit[7]   : SOCP����״̬�źš� */
        unsigned int  reserved_1          : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_AO_SCTRL_SC_VOTE_STAT_UNION;
#endif
#define SOC_AO_SCTRL_SC_VOTE_STAT_vote0_semphsta_START       (0)
#define SOC_AO_SCTRL_SC_VOTE_STAT_vote0_semphsta_END         (0)
#define SOC_AO_SCTRL_SC_VOTE_STAT_vote1_semphsta_START       (1)
#define SOC_AO_SCTRL_SC_VOTE_STAT_vote1_semphsta_END         (1)
#define SOC_AO_SCTRL_SC_VOTE_STAT_vote2_semphsta_START       (2)
#define SOC_AO_SCTRL_SC_VOTE_STAT_vote2_semphsta_END         (2)
#define SOC_AO_SCTRL_SC_VOTE_STAT_coresight_wakeup_en_START  (4)
#define SOC_AO_SCTRL_SC_VOTE_STAT_coresight_wakeup_en_END    (5)
#define SOC_AO_SCTRL_SC_VOTE_STAT_ipf_wakeup_en_START        (6)
#define SOC_AO_SCTRL_SC_VOTE_STAT_ipf_wakeup_en_END          (6)
#define SOC_AO_SCTRL_SC_VOTE_STAT_socp_wakeup_en_START       (7)
#define SOC_AO_SCTRL_SC_VOTE_STAT_socp_wakeup_en_END         (7)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_ECONUM_UNION
 �ṹ˵��  : SC_ECONUM �Ĵ����ṹ���塣��ַƫ����:0xF00����ֵ:0x00000000�����:32
 �Ĵ���˵��: ECO �汾�żĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_econum : 8;  /* bit[0-7] : ECO�汾�ţ�����ɶ�����д�� */
        unsigned int  reserved  : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_AO_SCTRL_SC_ECONUM_UNION;
#endif
#define SOC_AO_SCTRL_SC_ECONUM_sc_econum_START  (0)
#define SOC_AO_SCTRL_SC_ECONUM_sc_econum_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SCCHIPID_UNION
 �ṹ˵��  : SCCHIPID �Ĵ����ṹ���塣��ַƫ����:0xF10����ֵ:0x48696210�����:32
 �Ĵ���˵��: CHIPID�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  chip_id       : 16; /* bit[0-15] : 16'h6210�� */
        unsigned int  chip_designer : 16; /* bit[16-31]: 16'h4869,��H����ASCII����0x48����i����ASCII����0x69�� */
    } reg;
} SOC_AO_SCTRL_SCCHIPID_UNION;
#endif
#define SOC_AO_SCTRL_SCCHIPID_chip_id_START        (0)
#define SOC_AO_SCTRL_SCCHIPID_chip_id_END          (15)
#define SOC_AO_SCTRL_SCCHIPID_chip_designer_START  (16)
#define SOC_AO_SCTRL_SCCHIPID_chip_designer_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SCSOCID_UNION
 �ṹ˵��  : SCSOCID �Ĵ����ṹ���塣��ַƫ����:0xF1C����ֵ:0x48690010�����:32
 �Ĵ���˵��: SOCID�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  soc_id       : 16; /* bit[0-15] : 16'h0010�� */
        unsigned int  soc_designer : 16; /* bit[16-31]: 16'h4869,��H����ASCII����0x48����i����ASCII����0x69�� */
    } reg;
} SOC_AO_SCTRL_SCSOCID_UNION;
#endif
#define SOC_AO_SCTRL_SCSOCID_soc_id_START        (0)
#define SOC_AO_SCTRL_SCSOCID_soc_id_END          (15)
#define SOC_AO_SCTRL_SCSOCID_soc_designer_START  (16)
#define SOC_AO_SCTRL_SCSOCID_soc_designer_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_SOC_FPGA_RTL_DEF_UNION
 �ṹ˵��  : SC_SOC_FPGA_RTL_DEF �Ĵ����ṹ���塣��ַƫ����:0xFE0����ֵ:0x00000000�����:32
 �Ĵ���˵��: ����ID�Ĵ���0��FPGA�汾ʹ�ã��ɺ궨��ȷ����ֵ
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  soc_fpga_rtl_def : 32; /* bit[0-31]: reserved */
    } reg;
} SOC_AO_SCTRL_SC_SOC_FPGA_RTL_DEF_UNION;
#endif
#define SOC_AO_SCTRL_SC_SOC_FPGA_RTL_DEF_soc_fpga_rtl_def_START  (0)
#define SOC_AO_SCTRL_SC_SOC_FPGA_RTL_DEF_soc_fpga_rtl_def_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_SOC_FPGA_PR_DEF_UNION
 �ṹ˵��  : SC_SOC_FPGA_PR_DEF �Ĵ����ṹ���塣��ַƫ����:0xFE4����ֵ:0x00000000�����:32
 �Ĵ���˵��: ����ID�Ĵ���1��FPGA�汾ʹ�ã��ɺ궨��ȷ����ֵ
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  soc_fpga_pr_def : 32; /* bit[0-31]: reserved */
    } reg;
} SOC_AO_SCTRL_SC_SOC_FPGA_PR_DEF_UNION;
#endif
#define SOC_AO_SCTRL_SC_SOC_FPGA_PR_DEF_soc_fpga_pr_def_START  (0)
#define SOC_AO_SCTRL_SC_SOC_FPGA_PR_DEF_soc_fpga_pr_def_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_SOC_FPGA_RES_DEF0_UNION
 �ṹ˵��  : SC_SOC_FPGA_RES_DEF0 �Ĵ����ṹ���塣��ַƫ����:0xFE8����ֵ:0x00000000�����:32
 �Ĵ���˵��: ����ID�Ĵ���2��FPGA�汾ʹ�ã��ɺ궨��ȷ����ֵ
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  soc_fpga_res_def0 : 32; /* bit[0-31]: reserved */
    } reg;
} SOC_AO_SCTRL_SC_SOC_FPGA_RES_DEF0_UNION;
#endif
#define SOC_AO_SCTRL_SC_SOC_FPGA_RES_DEF0_soc_fpga_res_def0_START  (0)
#define SOC_AO_SCTRL_SC_SOC_FPGA_RES_DEF0_soc_fpga_res_def0_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_SOC_FPGA_RES_DEF1_UNION
 �ṹ˵��  : SC_SOC_FPGA_RES_DEF1 �Ĵ����ṹ���塣��ַƫ����:0xFEC����ֵ:0x00000000�����:32
 �Ĵ���˵��: ����ID�Ĵ���3��FPGA�汾ʹ�ã��ɺ궨��ȷ����ֵ
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  soc_fpga_res_def1 : 32; /* bit[0-31]: reserved */
    } reg;
} SOC_AO_SCTRL_SC_SOC_FPGA_RES_DEF1_UNION;
#endif
#define SOC_AO_SCTRL_SC_SOC_FPGA_RES_DEF1_soc_fpga_res_def1_START  (0)
#define SOC_AO_SCTRL_SC_SOC_FPGA_RES_DEF1_soc_fpga_res_def1_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_XTAL_CTRL0_UNION
 �ṹ˵��  : SC_XTAL_CTRL0 �Ĵ����ṹ���塣��ַƫ����:0x1028����ֵ:0x00000640�����:32
 �Ĵ���˵��: ������ƼĴ��������ڶ�tcxo0������п��ơ�ϵͳ��SLOW��NORMALģʽ�£�tcxo���뱻ʹ�ܡ�tcxo ABB�ȶ��ӳ����á�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  xtalover0  : 1;  /* bit[0]    : ABB������оƬ����ʹ������������ƻ�����ϵͳ״̬�����ơ����ڵ���ģʽ��ϵͳ����SLEEP��Ҫ��TCXO�ĳ���ʹ�ã�
                                                      0����״̬�����ƣ�
                                                      1�����������xtalen0ֱ�ӿ��ơ� */
        unsigned int  xtalen0    : 1;  /* bit[1]    : ABB�ྦྷ��ʹ�ܡ�
                                                      ��xtaloverΪ1ʱ��оƬ����ľ���ʹ��TCXO_EN���ɸñ���ֱ�����������ڵ���ģʽ��ϵͳ����SLEEP��Ҫ��TCXO�ĳ���ʹ�ã�
                                                      0���رվ���
                                                      1��ʹ�ܾ��� */
        unsigned int  reserved_0 : 2;  /* bit[2-3]  : reserved */
        unsigned int  xtal_time0 : 25; /* bit[4-28] : ����ABB��TCXO0���ȶ�ʱ�䣬��λΪ32Kʱ�����ڡ����õ���������ʽ��Ĭ��100�����ڣ�Լ3ms���� */
        unsigned int  reserved_1 : 3;  /* bit[29-31]: reserved */
    } reg;
} SOC_AO_SCTRL_SC_XTAL_CTRL0_UNION;
#endif
#define SOC_AO_SCTRL_SC_XTAL_CTRL0_xtalover0_START   (0)
#define SOC_AO_SCTRL_SC_XTAL_CTRL0_xtalover0_END     (0)
#define SOC_AO_SCTRL_SC_XTAL_CTRL0_xtalen0_START     (1)
#define SOC_AO_SCTRL_SC_XTAL_CTRL0_xtalen0_END       (1)
#define SOC_AO_SCTRL_SC_XTAL_CTRL0_xtal_time0_START  (4)
#define SOC_AO_SCTRL_SC_XTAL_CTRL0_xtal_time0_END    (28)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_XTAL_CTRL1_UNION
 �ṹ˵��  : SC_XTAL_CTRL1 �Ĵ����ṹ���塣��ַƫ����:0x102c����ֵ:0x00000640�����:32
 �Ĵ���˵��: ������ƼĴ��������ڶ�tcxo1������п��ơ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  xtalover1          : 1;  /* bit[0]    : ABB������оƬ����ʹ������������ƻ�����ϵͳ״̬�����ƣ����Թ��ܣ������ڵ���ģʽ��ϵͳ����SLEEP��Ҫ��TCXO�ĳ���ʹ�ã�
                                                              0����״̬�����ƣ�
                                                              1�����������xtalen1ֱ�ӿ��ơ� */
        unsigned int  xtalen1            : 1;  /* bit[1]    : ABB�ྦྷ��ʹ�ܣ����Թ��ܣ���
                                                              ��xtaloverΪ1ʱ��оƬ����ľ���ʹ��TCXO_EN���ɸñ���ֱ�����������ڵ���ģʽ��ϵͳ����SLEEP��Ҫ��TCXO�ĳ���ʹ�ã�
                                                              0���رվ���
                                                              1��ʹ�ܾ��� */
        unsigned int  tcxo1_hard_ctrl_en : 1;  /* bit[2]    : tcxo1��Ӳ�����ƿ���ѡ��
                                                              0��tcxo1֧������򿪺͹رգ�ͬʱ֧�ֻ��ѹ�����bbpdrx�����ж��Զ��򿪣�֧��˯�߹������Զ��رգ�
                                                              1��tcxo1ֻ֧�ֻ��Ѻ�˯�߹�������Ӳ�����д򿪺͹رա� */
        unsigned int  xtal1_sft_cfg      : 1;  /* bit[3]    : ABB�ྦྷ��ʹ�ܡ�
                                                              0���رվ���
                                                              1��ʹ�ܾ���
                                                              ע����������gbbp1�����ж�ǰ����Ҫ��֤���ʹ�������ʽ�򿪴�bit�� */
        unsigned int  xtal_time1         : 25; /* bit[4-28] : ����ABB��TCXO1���ȶ�ʱ�䣬��λΪ32Kʱ�����ڡ����õ���������ʽ��Ĭ��100�����ڣ�Լ3ms���������ʽ��ʱ��tcxo1��pmu���Դ������tcxo0�ģ���ϵͳ����ʱĬ�ϴ򿪣������Դ�ȴ��ȶ���ֻ��Ҫ���õȴ�1ms�Ϳ��ԡ� */
        unsigned int  reserved           : 3;  /* bit[29-31]: reserved */
    } reg;
} SOC_AO_SCTRL_SC_XTAL_CTRL1_UNION;
#endif
#define SOC_AO_SCTRL_SC_XTAL_CTRL1_xtalover1_START           (0)
#define SOC_AO_SCTRL_SC_XTAL_CTRL1_xtalover1_END             (0)
#define SOC_AO_SCTRL_SC_XTAL_CTRL1_xtalen1_START             (1)
#define SOC_AO_SCTRL_SC_XTAL_CTRL1_xtalen1_END               (1)
#define SOC_AO_SCTRL_SC_XTAL_CTRL1_tcxo1_hard_ctrl_en_START  (2)
#define SOC_AO_SCTRL_SC_XTAL_CTRL1_tcxo1_hard_ctrl_en_END    (2)
#define SOC_AO_SCTRL_SC_XTAL_CTRL1_xtal1_sft_cfg_START       (3)
#define SOC_AO_SCTRL_SC_XTAL_CTRL1_xtal1_sft_cfg_END         (3)
#define SOC_AO_SCTRL_SC_XTAL_CTRL1_xtal_time1_START          (4)
#define SOC_AO_SCTRL_SC_XTAL_CTRL1_xtal_time1_END            (28)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_XTAL_CTRL3_UNION
 �ṹ˵��  : SC_XTAL_CTRL3 �Ĵ����ṹ���塣��ַƫ����:0x1034����ֵ:0x00000000�����:32
 �Ĵ���˵��: ������ƼĴ�����tcxo0 PMU��ʹ�ܣ����ڵ���ģʽ��ϵͳ����SLEEP��Ҫ��tcxo�ĳ���ʹ�á�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  xtalover0_pmu_up : 1;  /* bit[0]   : TCXO���ϵ�����оƬ�����ԴTCXO_EN_PMU����������ƻ�����ϵͳ״̬�����ơ����ڵ���ģʽ��ϵͳ����SLEEP��Ҫ��TCXO�ĳ���ʹ�ã�
                                                           0����״̬�����ƣ�
                                                           1����������ơ� */
        unsigned int  xtalen0_pmu_up   : 1;  /* bit[1]   : TCXO���ϵ羧��ʹ�ܡ�
                                                           ��xtaloverΪ1ʱ��оƬ����ľ����ԴTCXO_EN_PMU���ɸñ���ֱ�����������ڵ���ģʽ��ϵͳ����SLEEP��Ҫ��TCXO�ĳ���ʹ�ã�
                                                           0���رվ���
                                                           1��ʹ�ܾ��� */
        unsigned int  reserved         : 30; /* bit[2-31]: reserved */
    } reg;
} SOC_AO_SCTRL_SC_XTAL_CTRL3_UNION;
#endif
#define SOC_AO_SCTRL_SC_XTAL_CTRL3_xtalover0_pmu_up_START  (0)
#define SOC_AO_SCTRL_SC_XTAL_CTRL3_xtalover0_pmu_up_END    (0)
#define SOC_AO_SCTRL_SC_XTAL_CTRL3_xtalen0_pmu_up_START    (1)
#define SOC_AO_SCTRL_SC_XTAL_CTRL3_xtalen0_pmu_up_END      (1)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_XTAL_CTRL5_UNION
 �ṹ˵��  : SC_XTAL_CTRL5 �Ĵ����ṹ���塣��ַƫ����:0x103C����ֵ:0x00000030�����:32
 �Ĵ���˵��: ������ƼĴ�����tcxo0�µ����̣�tcxo0��Դ�رյ�tcxo0 ABB��ʹ�ܹر��ӳ�ʱ�����á�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved_0        : 4;  /* bit[0-3]  : reserved */
        unsigned int  xtal0_time_pmu_dn : 25; /* bit[4-28] : ����TCXO���µ�ʱPMU��رյ�ABB Buffer�ر�֮�����ʱʱ�䣬��λΪ32Kʱ�����ڡ����õ���������ʽ��Ĭ��7�����ڣ��Ƽ�ֵ0x5=5�����ڣ�Լ150us��
                                                             ������=�������ֵ+2�� */
        unsigned int  reserved_1        : 3;  /* bit[29-31]: reserved */
    } reg;
} SOC_AO_SCTRL_SC_XTAL_CTRL5_UNION;
#endif
#define SOC_AO_SCTRL_SC_XTAL_CTRL5_xtal0_time_pmu_dn_START  (4)
#define SOC_AO_SCTRL_SC_XTAL_CTRL5_xtal0_time_pmu_dn_END    (28)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_XTAL_STAT0_UNION
 �ṹ˵��  : SC_XTAL_STAT0 �Ĵ����ṹ���塣��ַƫ����:0x1060����ֵ:0x33680000�����:32
 �Ĵ���˵��: ����tcxo0״̬�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved_0         : 19; /* bit[0-18] : reserved */
        unsigned int  tcxo0_abb_timeout  : 1;  /* bit[19]   : ABB��XTAL״ָ̬ʾ��
                                                              0��δ�ȶ���
                                                              1�����ȶ��� */
        unsigned int  tcxo0_pwdn_timeout : 1;  /* bit[20]   : TCXO���µ�״ָ̬ʾ��
                                                              0��δ�ȶ���
                                                              1�����ȶ��� */
        unsigned int  tcxo_en_hard       : 1;  /* bit[21]   : ϵͳģʽ�л�״̬���Ƶ�tcxoʹ��״̬�� */
        unsigned int  buck3_en_out       : 1;  /* bit[22]   : ״̬�������������Դʹ��״̬�� */
        unsigned int  reserved_1         : 1;  /* bit[23]   : reserved */
        unsigned int  tcxo0_curr_st      : 4;  /* bit[24-27]: tcxo0״̬��״̬
                                                              001�� TCXO_S_ON_PMU��
                                                              010�� TCXO_S_ON_ABB��
                                                              011�� TCXO_S_ON_STB��
                                                              100�� TCXO_S_OFF_STB��
                                                              110�� TCXO_S_OFF_PMU��
                                                              others�� reserved�� */
        unsigned int  xtal_en0_pmu       : 1;  /* bit[28]   : tcxo0״̬������������ۺ����pmu���ϵ�ʹ��״̬
                                                              0��tcxo0 pmu��ʹ���źŹرգ�
                                                              1��tcxo0 pmu��ʹ���źŴ򿪡� */
        unsigned int  xtal_en0_abb       : 1;  /* bit[29]   : tcxo0״̬������������ۺ����abb��ʹ�ܺ�״̬
                                                              0��tcxo0 abb��ʹ���źŹرգ�
                                                              1��tcxo0 abb��ʹ���źŴ򿪡� */
        unsigned int  reserved_2         : 2;  /* bit[30-31]: reserved */
    } reg;
} SOC_AO_SCTRL_SC_XTAL_STAT0_UNION;
#endif
#define SOC_AO_SCTRL_SC_XTAL_STAT0_tcxo0_abb_timeout_START   (19)
#define SOC_AO_SCTRL_SC_XTAL_STAT0_tcxo0_abb_timeout_END     (19)
#define SOC_AO_SCTRL_SC_XTAL_STAT0_tcxo0_pwdn_timeout_START  (20)
#define SOC_AO_SCTRL_SC_XTAL_STAT0_tcxo0_pwdn_timeout_END    (20)
#define SOC_AO_SCTRL_SC_XTAL_STAT0_tcxo_en_hard_START        (21)
#define SOC_AO_SCTRL_SC_XTAL_STAT0_tcxo_en_hard_END          (21)
#define SOC_AO_SCTRL_SC_XTAL_STAT0_buck3_en_out_START        (22)
#define SOC_AO_SCTRL_SC_XTAL_STAT0_buck3_en_out_END          (22)
#define SOC_AO_SCTRL_SC_XTAL_STAT0_tcxo0_curr_st_START       (24)
#define SOC_AO_SCTRL_SC_XTAL_STAT0_tcxo0_curr_st_END         (27)
#define SOC_AO_SCTRL_SC_XTAL_STAT0_xtal_en0_pmu_START        (28)
#define SOC_AO_SCTRL_SC_XTAL_STAT0_xtal_en0_pmu_END          (28)
#define SOC_AO_SCTRL_SC_XTAL_STAT0_xtal_en0_abb_START        (29)
#define SOC_AO_SCTRL_SC_XTAL_STAT0_xtal_en0_abb_END          (29)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_XTAL_STAT1_UNION
 �ṹ˵��  : SC_XTAL_STAT1 �Ĵ����ṹ���塣��ַƫ����:0x1070����ֵ:0x04000000�����:32
 �Ĵ���˵��: ����tcxo1״̬�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved_0         : 19; /* bit[0-18] : reserved */
        unsigned int  tcxo1_abb_timeout  : 1;  /* bit[19]   : ABB��XTAL״ָ̬ʾ��
                                                              0��δ�ȶ���
                                                              1�����ȶ��� */
        unsigned int  tcxo1_en_nosoc_drx : 1;  /* bit[20]   : ϵͳ���ѹ����У�gbb1�жϻ���ϵͳʱ���Զ�����tcxo1����
                                                              0��tcxo1 no open req����ϵͳ״̬����ʱ��gbbp1�жϣ����Ѻ����gbb1�жϣ���bit���㣻
                                                              1��tcxo1 open req����ϵͳ״̬����ʱ��gbbp1�ж�ʱ����bit��1�� */
        unsigned int  reserved_1         : 1;  /* bit[21]   : reserved */
        unsigned int  reserved_2         : 1;  /* bit[22]   : reserved */
        unsigned int  reserved_3         : 1;  /* bit[23]   : reserved */
        unsigned int  tcxo1_curr_st      : 4;  /* bit[24-27]: tcxo1״̬��״̬
                                                              001�� TCXO_S_ON_PMU��
                                                              010�� TCXO_S_ON_ABB��
                                                              011�� TCXO_S_ON_STB��
                                                              100�� TCXO_S_OFF_STB��
                                                              110�� TCXO_S_OFF_PMU��
                                                              others�� reserved�� */
        unsigned int  reserved_4         : 1;  /* bit[28]   : reserved */
        unsigned int  xtal_en1_abb       : 1;  /* bit[29]   : tcxo1״̬������������ۺ����abb��ʹ�ܺ�״̬
                                                              0��tcxo1 abb��ʹ���źŹرգ�
                                                              1��tcxo1 abb��ʹ���źŴ򿪡� */
        unsigned int  reserved_5         : 2;  /* bit[30-31]: reserved */
    } reg;
} SOC_AO_SCTRL_SC_XTAL_STAT1_UNION;
#endif
#define SOC_AO_SCTRL_SC_XTAL_STAT1_tcxo1_abb_timeout_START   (19)
#define SOC_AO_SCTRL_SC_XTAL_STAT1_tcxo1_abb_timeout_END     (19)
#define SOC_AO_SCTRL_SC_XTAL_STAT1_tcxo1_en_nosoc_drx_START  (20)
#define SOC_AO_SCTRL_SC_XTAL_STAT1_tcxo1_en_nosoc_drx_END    (20)
#define SOC_AO_SCTRL_SC_XTAL_STAT1_tcxo1_curr_st_START       (24)
#define SOC_AO_SCTRL_SC_XTAL_STAT1_tcxo1_curr_st_END         (27)
#define SOC_AO_SCTRL_SC_XTAL_STAT1_xtal_en1_abb_START        (29)
#define SOC_AO_SCTRL_SC_XTAL_STAT1_xtal_en1_abb_END          (29)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_EFUSE_CHIPID0_UNION
 �ṹ˵��  : SC_EFUSE_CHIPID0 �Ĵ����ṹ���塣��ַƫ����:0x1080����ֵ:0x00000000�����:32
 �Ĵ���˵��: EFUSE_CHIPID״̬�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  efuse_chipio0 : 32; /* bit[0-31]: EFUSE_CHIPID[31;0]�� */
    } reg;
} SOC_AO_SCTRL_SC_EFUSE_CHIPID0_UNION;
#endif
#define SOC_AO_SCTRL_SC_EFUSE_CHIPID0_efuse_chipio0_START  (0)
#define SOC_AO_SCTRL_SC_EFUSE_CHIPID0_efuse_chipio0_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_EFUSE_CHIPID1_UNION
 �ṹ˵��  : SC_EFUSE_CHIPID1 �Ĵ����ṹ���塣��ַƫ����:0x1084����ֵ:0x00000000�����:32
 �Ĵ���˵��: EFUSE_CHIPID״̬�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  efuse_chipio1 : 32; /* bit[0-31]: EFUSE_CHIPID[63;32]�� */
    } reg;
} SOC_AO_SCTRL_SC_EFUSE_CHIPID1_UNION;
#endif
#define SOC_AO_SCTRL_SC_EFUSE_CHIPID1_efuse_chipio1_START  (0)
#define SOC_AO_SCTRL_SC_EFUSE_CHIPID1_efuse_chipio1_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_EFUSE_SYS_CTRL_UNION
 �ṹ˵��  : SC_EFUSE_SYS_CTRL �Ĵ����ṹ���塣��ַƫ����:0x1088����ֵ:0x00000000�����:32
 �Ĵ���˵��: EFUSE_SYS_CTRL״̬�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  efuse_sys_ctrl : 32; /* bit[0-31]: EFUSE_SYS_CTRL
                                                         EFUSE������Ϣ��990~1023�� */
    } reg;
} SOC_AO_SCTRL_SC_EFUSE_SYS_CTRL_UNION;
#endif
#define SOC_AO_SCTRL_SC_EFUSE_SYS_CTRL_efuse_sys_ctrl_START  (0)
#define SOC_AO_SCTRL_SC_EFUSE_SYS_CTRL_efuse_sys_ctrl_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_DEBUG_CTRL1_UNION
 �ṹ˵��  : SC_DEBUG_CTRL1 �Ĵ����ṹ���塣��ַƫ����:0x1288����ֵ:0x00004400�����:32
 �Ĵ���˵��: ��ȫDEBUG���ƼĴ���1�����ڿ���ACPU��CCPU��MCU��CSSYS��HIFI��BBE���ԡ�DJTAG���ܣ���֤SC_DEBUG_CTRL1�Ĵ�����ֵ����DFT���ƣ����ͨ����ȫDFTʵ�֣����˼Ĵ���ֻ��д��1�Ρ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved_0      : 1;  /* bit[0] : reserved */
        unsigned int  reserved_1      : 1;  /* bit[1] : reserved */
        unsigned int  reserved_2      : 1;  /* bit[2] : reserved */
        unsigned int  reserved_3      : 1;  /* bit[3] : reserved */
        unsigned int  reserved_4      : 1;  /* bit[4] : reserved */
        unsigned int  reserved_5      : 1;  /* bit[5] : reserved */
        unsigned int  reserved_6      : 1;  /* bit[6] : reserved */
        unsigned int  reserved_7      : 1;  /* bit[7] : reserved */
        unsigned int  aarm_spniden    : 1;  /* bit[8] : ACPU Secure privileged noninvasive debugʹ�ܡ�
                                                        0����ʹ�ܣ�
                                                        1��ʹ�ܡ� */
        unsigned int  aarm_spiden     : 1;  /* bit[9] : ACPU Secure privileged invasive debug ʹ�ܡ�
                                                        0����ʹ�ܣ�
                                                        1��ʹ�ܡ� */
        unsigned int  aarm_niden      : 1;  /* bit[10]: ACPU Noninvasive debugʹ�ܡ�
                                                        0����ʹ�ܣ�
                                                        1��ʹ�ܡ� */
        unsigned int  aarm_dbgen      : 1;  /* bit[11]: ACPU Invasive debugʹ�ܡ�
                                                        0����ʹ�ܣ�
                                                        1��ʹ�ܡ� */
        unsigned int  carm_spniden    : 1;  /* bit[12]: Secure privileged noninvasive debugʹ�ܡ�
                                                        0����ʹ�ܣ�
                                                        1��ʹ�ܡ� */
        unsigned int  carm_spiden     : 1;  /* bit[13]: Secure privileged invasive debug ʹ�ܡ�
                                                        0����ʹ�ܣ�
                                                        1��ʹ�ܡ� */
        unsigned int  carm_niden      : 1;  /* bit[14]: Noninvasive debugʹ�ܡ�
                                                        0����ʹ�ܣ�
                                                        1��ʹ�ܡ� */
        unsigned int  carm_dbgen      : 1;  /* bit[15]: Invasive debugʹ�ܡ�
                                                        0����ʹ�ܣ�
                                                        1��ʹ�ܡ� */
        unsigned int  cssys_spniden   : 1;  /* bit[16]: cssys spniden 
                                                        0�� Secure Non-Invasive Debug Disable��
                                                        1�� Secure Non-Invasive Debug Enable�� */
        unsigned int  cssys_spiden    : 1;  /* bit[17]: cssys spiden 
                                                        0�� Secure Invasive Debug Disable��
                                                        1�� Secure Invasive Debug Enable�� */
        unsigned int  cssys_niden     : 1;  /* bit[18]: cssys niden 
                                                        0�� Non-Invasive Debug Disable��
                                                        1��Non-Invasive Debug Enable�� */
        unsigned int  cssys_dbgen     : 1;  /* bit[19]: cssys dbgen 
                                                        0�� Invasive Debug Disable��
                                                        1��Invasive Debug Enable�� */
        unsigned int  cssys_device_en : 1;  /* bit[20]: cssys device enable APB AP�ӿ�ʹ��
                                                        0�� cssys device disable��
                                                        1�� cssys device enable��
                                                        If APB-AP is connected to the Debug APB, that is, a bus connected only to
                                                        debug and trace components, it must be permanently enabled by tying
                                                        DEVICEEN HIGH. This ensures that trace components can still be
                                                        programmed when DBGEN is LOW. In practice, it is expected that the
                                                        APB-AP is almost always used in this way.
                                                        If APB-AP is connected to a system APB dedicated to the non-secure world,
                                                        DEVICEEN must be connected to DBGEN.
                                                        If APB-AP is connected to a system APB dedicated to the secure world,
                                                        DEVICEEN must be connected to SPIDEN�� */
        unsigned int  m3_dbgen        : 1;  /* bit[21]: m3 debug enable 
                                                        0����ʹ�ܣ�
                                                        1��ʹ�ܡ� */
        unsigned int  hifi_jtag_en    : 1;  /* bit[22]: hifi jtag enable
                                                        0�� jtag disable��
                                                        1�� jtag enable�� */
        unsigned int  bbe_jtag_en     : 1;  /* bit[23]: bbe jtag enable
                                                        0�� jtag disable��
                                                        1�� jtag enable�� */
        unsigned int  g3d_dbgen       : 1;  /* bit[24]: g3d ddr debug enable 
                                                        0����ʹ�ܣ�
                                                        1��ʹ�ܡ� */
        unsigned int  djtag_en        : 1;  /* bit[25]: debug_jtag enable
                                                        0�� jtag disable��
                                                        1�� jtag enable�� */
        unsigned int  cssys_jtag_en   : 1;  /* bit[26]: cssys_jtag enable
                                                        0�� jtag disable��
                                                        1�� jtag enable�� */
        unsigned int  reserved_8      : 1;  /* bit[27]: reserved */
        unsigned int  reserved_9      : 1;  /* bit[28]: reserved */
        unsigned int  reserved_10     : 1;  /* bit[29]: reserved */
        unsigned int  reserved_11     : 1;  /* bit[30]: reserved */
        unsigned int  reserved_12     : 1;  /* bit[31]: reserved */
    } reg;
} SOC_AO_SCTRL_SC_DEBUG_CTRL1_UNION;
#endif
#define SOC_AO_SCTRL_SC_DEBUG_CTRL1_aarm_spniden_START     (8)
#define SOC_AO_SCTRL_SC_DEBUG_CTRL1_aarm_spniden_END       (8)
#define SOC_AO_SCTRL_SC_DEBUG_CTRL1_aarm_spiden_START      (9)
#define SOC_AO_SCTRL_SC_DEBUG_CTRL1_aarm_spiden_END        (9)
#define SOC_AO_SCTRL_SC_DEBUG_CTRL1_aarm_niden_START       (10)
#define SOC_AO_SCTRL_SC_DEBUG_CTRL1_aarm_niden_END         (10)
#define SOC_AO_SCTRL_SC_DEBUG_CTRL1_aarm_dbgen_START       (11)
#define SOC_AO_SCTRL_SC_DEBUG_CTRL1_aarm_dbgen_END         (11)
#define SOC_AO_SCTRL_SC_DEBUG_CTRL1_carm_spniden_START     (12)
#define SOC_AO_SCTRL_SC_DEBUG_CTRL1_carm_spniden_END       (12)
#define SOC_AO_SCTRL_SC_DEBUG_CTRL1_carm_spiden_START      (13)
#define SOC_AO_SCTRL_SC_DEBUG_CTRL1_carm_spiden_END        (13)
#define SOC_AO_SCTRL_SC_DEBUG_CTRL1_carm_niden_START       (14)
#define SOC_AO_SCTRL_SC_DEBUG_CTRL1_carm_niden_END         (14)
#define SOC_AO_SCTRL_SC_DEBUG_CTRL1_carm_dbgen_START       (15)
#define SOC_AO_SCTRL_SC_DEBUG_CTRL1_carm_dbgen_END         (15)
#define SOC_AO_SCTRL_SC_DEBUG_CTRL1_cssys_spniden_START    (16)
#define SOC_AO_SCTRL_SC_DEBUG_CTRL1_cssys_spniden_END      (16)
#define SOC_AO_SCTRL_SC_DEBUG_CTRL1_cssys_spiden_START     (17)
#define SOC_AO_SCTRL_SC_DEBUG_CTRL1_cssys_spiden_END       (17)
#define SOC_AO_SCTRL_SC_DEBUG_CTRL1_cssys_niden_START      (18)
#define SOC_AO_SCTRL_SC_DEBUG_CTRL1_cssys_niden_END        (18)
#define SOC_AO_SCTRL_SC_DEBUG_CTRL1_cssys_dbgen_START      (19)
#define SOC_AO_SCTRL_SC_DEBUG_CTRL1_cssys_dbgen_END        (19)
#define SOC_AO_SCTRL_SC_DEBUG_CTRL1_cssys_device_en_START  (20)
#define SOC_AO_SCTRL_SC_DEBUG_CTRL1_cssys_device_en_END    (20)
#define SOC_AO_SCTRL_SC_DEBUG_CTRL1_m3_dbgen_START         (21)
#define SOC_AO_SCTRL_SC_DEBUG_CTRL1_m3_dbgen_END           (21)
#define SOC_AO_SCTRL_SC_DEBUG_CTRL1_hifi_jtag_en_START     (22)
#define SOC_AO_SCTRL_SC_DEBUG_CTRL1_hifi_jtag_en_END       (22)
#define SOC_AO_SCTRL_SC_DEBUG_CTRL1_bbe_jtag_en_START      (23)
#define SOC_AO_SCTRL_SC_DEBUG_CTRL1_bbe_jtag_en_END        (23)
#define SOC_AO_SCTRL_SC_DEBUG_CTRL1_g3d_dbgen_START        (24)
#define SOC_AO_SCTRL_SC_DEBUG_CTRL1_g3d_dbgen_END          (24)
#define SOC_AO_SCTRL_SC_DEBUG_CTRL1_djtag_en_START         (25)
#define SOC_AO_SCTRL_SC_DEBUG_CTRL1_djtag_en_END           (25)
#define SOC_AO_SCTRL_SC_DEBUG_CTRL1_cssys_jtag_en_START    (26)
#define SOC_AO_SCTRL_SC_DEBUG_CTRL1_cssys_jtag_en_END      (26)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_DBG_STAT_UNION
 �ṹ˵��  : SC_DBG_STAT �Ĵ����ṹ���塣��ַƫ����:0x12B4����ֵ:0x00000000�����:32
 �Ĵ���˵��: ��ȫDEBUG״̬�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_cfg_arm_dbg_wr_dis : 1;  /* bit[0]   : ��ȫdebug�Ĵ���SC_DEBUG_CTRL1�Ƿ�д��ָʾ
                                                                0��SC_DEBUG_CTRL1δд�룻
                                                                1��:SC_DEBUG_CTRL1��д��1�Σ����Ҳ��ٿ�д�� */
        unsigned int  sc_cfg_arm_dbg_wr     : 1;  /* bit[1]   : ��ȫdebug�Ĵ���SC_DEBUG_CTRL1��дָʾ
                                                                0����Ȩʧ�ܻ�SC_DEBUG_CTRL1��д��1�Σ���SC_DEBUG_CTRL1���ٿ�д�룻
                                                                1����Ȩͨ����SC_DEBUG_CTRL1δд��1�Σ���SC_DEBUG_CTRL1��д�롣 */
        unsigned int  reserved_0            : 1;  /* bit[2]   : reserved */
        unsigned int  sc_arm_dbg_key_wr_en0 : 1;  /* bit[3]   : ��ȫdebug�Ĵ���SC_ARM_DBG_KEY0��д��ָʾ
                                                                11��SC_ARM_DBG_KEY0����д�룻
                                                                others��SC_ARM_DBG_KEY0��д�롣 */
        unsigned int  reserved_1            : 2;  /* bit[4-5] : reserved */
        unsigned int  arm_dbg_key_cnt0      : 2;  /* bit[6-7] : ��ȫdebug�Ĵ���SC_ARM_DBG_KEY0д�����ָʾ�� */
        unsigned int  sec_dbg_key_pass      : 1;  /* bit[8]   : ��ȫ��Ȩָʾ
                                                                0����Ȩδͨ����
                                                                1�� ��Ȩͨ���� */
        unsigned int  reserved_2            : 23; /* bit[9-31]: reserved */
    } reg;
} SOC_AO_SCTRL_SC_DBG_STAT_UNION;
#endif
#define SOC_AO_SCTRL_SC_DBG_STAT_sc_cfg_arm_dbg_wr_dis_START  (0)
#define SOC_AO_SCTRL_SC_DBG_STAT_sc_cfg_arm_dbg_wr_dis_END    (0)
#define SOC_AO_SCTRL_SC_DBG_STAT_sc_cfg_arm_dbg_wr_START      (1)
#define SOC_AO_SCTRL_SC_DBG_STAT_sc_cfg_arm_dbg_wr_END        (1)
#define SOC_AO_SCTRL_SC_DBG_STAT_sc_arm_dbg_key_wr_en0_START  (3)
#define SOC_AO_SCTRL_SC_DBG_STAT_sc_arm_dbg_key_wr_en0_END    (3)
#define SOC_AO_SCTRL_SC_DBG_STAT_arm_dbg_key_cnt0_START       (6)
#define SOC_AO_SCTRL_SC_DBG_STAT_arm_dbg_key_cnt0_END         (7)
#define SOC_AO_SCTRL_SC_DBG_STAT_sec_dbg_key_pass_START       (8)
#define SOC_AO_SCTRL_SC_DBG_STAT_sec_dbg_key_pass_END         (8)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_ARM_DBG_KEY0_UNION
 �ṹ˵��  : SC_ARM_DBG_KEY0 �Ĵ����ṹ���塣��ַƫ����:0x12B8����ֵ:0x00000000�����:32
 �Ĵ���˵��: ��ȫDEBUG����Ĵ������˼Ĵ�����д��3�Σ��˼Ĵ������ɶ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_arm_dbg_key0 : 32; /* bit[0-31]: reserved */
    } reg;
} SOC_AO_SCTRL_SC_ARM_DBG_KEY0_UNION;
#endif
#define SOC_AO_SCTRL_SC_ARM_DBG_KEY0_sc_arm_dbg_key0_START  (0)
#define SOC_AO_SCTRL_SC_ARM_DBG_KEY0_sc_arm_dbg_key0_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_RESERVED31_UNION
 �ṹ˵��  : SC_RESERVED31 �Ĵ����ṹ���塣��ַƫ����:0x13A0����ֵ:0x00000000�����:32
 �Ĵ���˵��: �����Ĵ������ṩ������Ժ͵���ʹ�á��Ĵ�����ֵ����ϵͳ��λ��оƬ�ϵ�Ĭ��ֵΪx��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_reserved31 : 32; /* bit[0-31]: reserved */
    } reg;
} SOC_AO_SCTRL_SC_RESERVED31_UNION;
#endif
#define SOC_AO_SCTRL_SC_RESERVED31_sc_reserved31_START  (0)
#define SOC_AO_SCTRL_SC_RESERVED31_sc_reserved31_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_RESERVED32_UNION
 �ṹ˵��  : SC_RESERVED32 �Ĵ����ṹ���塣��ַƫ����:0x13A4����ֵ:0x00000000�����:32
 �Ĵ���˵��: �����Ĵ������ṩ������Ժ͵���ʹ�á��Ĵ�����ֵ����ϵͳ��λ��оƬ�ϵ�Ĭ��ֵΪx��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_reserved32 : 32; /* bit[0-31]: reserved */
    } reg;
} SOC_AO_SCTRL_SC_RESERVED32_UNION;
#endif
#define SOC_AO_SCTRL_SC_RESERVED32_sc_reserved32_START  (0)
#define SOC_AO_SCTRL_SC_RESERVED32_sc_reserved32_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_RESERVED33_UNION
 �ṹ˵��  : SC_RESERVED33 �Ĵ����ṹ���塣��ַƫ����:0x13A8����ֵ:0x00000000�����:32
 �Ĵ���˵��: �����Ĵ������ṩ������Ժ͵���ʹ�á��Ĵ�����ֵ����ϵͳ��λ��оƬ�ϵ�Ĭ��ֵΪx��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_reserved33 : 32; /* bit[0-31]: reserved */
    } reg;
} SOC_AO_SCTRL_SC_RESERVED33_UNION;
#endif
#define SOC_AO_SCTRL_SC_RESERVED33_sc_reserved33_START  (0)
#define SOC_AO_SCTRL_SC_RESERVED33_sc_reserved33_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_RESERVED34_UNION
 �ṹ˵��  : SC_RESERVED34 �Ĵ����ṹ���塣��ַƫ����:0x13AC����ֵ:0x00000000�����:32
 �Ĵ���˵��: �����Ĵ������ṩ������Ժ͵���ʹ�á��Ĵ�����ֵ����ϵͳ��λ��оƬ�ϵ�Ĭ��ֵΪx��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_reserved34 : 32; /* bit[0-31]: reserved */
    } reg;
} SOC_AO_SCTRL_SC_RESERVED34_UNION;
#endif
#define SOC_AO_SCTRL_SC_RESERVED34_sc_reserved34_START  (0)
#define SOC_AO_SCTRL_SC_RESERVED34_sc_reserved34_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_RESERVED35_UNION
 �ṹ˵��  : SC_RESERVED35 �Ĵ����ṹ���塣��ַƫ����:0x13B0����ֵ:0x00000000�����:32
 �Ĵ���˵��: �����Ĵ������ṩ������Ժ͵���ʹ�á��Ĵ�����ֵ����ϵͳ��λ��оƬ�ϵ�Ĭ��ֵΪx��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_reserved35 : 32; /* bit[0-31]: reserved */
    } reg;
} SOC_AO_SCTRL_SC_RESERVED35_UNION;
#endif
#define SOC_AO_SCTRL_SC_RESERVED35_sc_reserved35_START  (0)
#define SOC_AO_SCTRL_SC_RESERVED35_sc_reserved35_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_RESERVED36_UNION
 �ṹ˵��  : SC_RESERVED36 �Ĵ����ṹ���塣��ַƫ����:0x13B4����ֵ:0x00000000�����:32
 �Ĵ���˵��: �����Ĵ������ṩ������Ժ͵���ʹ�á��Ĵ�����ֵ����ϵͳ��λ��оƬ�ϵ�Ĭ��ֵΪx��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_reserved36 : 32; /* bit[0-31]: reserved */
    } reg;
} SOC_AO_SCTRL_SC_RESERVED36_UNION;
#endif
#define SOC_AO_SCTRL_SC_RESERVED36_sc_reserved36_START  (0)
#define SOC_AO_SCTRL_SC_RESERVED36_sc_reserved36_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_RESERVED37_UNION
 �ṹ˵��  : SC_RESERVED37 �Ĵ����ṹ���塣��ַƫ����:0x13B8����ֵ:0x00000000�����:32
 �Ĵ���˵��: �����Ĵ������ṩ������Ժ͵���ʹ�á��Ĵ�����ֵ����ϵͳ��λ��оƬ�ϵ�Ĭ��ֵΪx��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_reserved37 : 32; /* bit[0-31]: reserved */
    } reg;
} SOC_AO_SCTRL_SC_RESERVED37_UNION;
#endif
#define SOC_AO_SCTRL_SC_RESERVED37_sc_reserved37_START  (0)
#define SOC_AO_SCTRL_SC_RESERVED37_sc_reserved37_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_RESERVED38_UNION
 �ṹ˵��  : SC_RESERVED38 �Ĵ����ṹ���塣��ַƫ����:0x13BC����ֵ:0x00000000�����:32
 �Ĵ���˵��: �����Ĵ������ṩ������Ժ͵���ʹ�á��Ĵ�����ֵ����ϵͳ��λ��оƬ�ϵ�Ĭ��ֵΪx��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_reserved38 : 32; /* bit[0-31]: reserved */
    } reg;
} SOC_AO_SCTRL_SC_RESERVED38_UNION;
#endif
#define SOC_AO_SCTRL_SC_RESERVED38_sc_reserved38_START  (0)
#define SOC_AO_SCTRL_SC_RESERVED38_sc_reserved38_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL0_UNION
 �ṹ˵��  : SC_ALWAYSON_SYS_CTRL0 �Ĵ����ṹ���塣��ַƫ����:0x1480����ֵ:0x00000000�����:32
 �Ĵ���˵��: ALWAYSON���ƼĴ��������ܰ���CLKSYS_ON��Ƶ�����á�
            [31:16]��ÿһbit˳���Ӧbit15��bit0������bit31��16��bitд1��ͬʱ������bit15��0������Ч����bit31��16��bitд0ʱ������bit15��0���ֲ��䣻
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  clksys_on_div_cfg              : 3;  /* bit[0-2]  : clksys_on�ϵ���150MHzʱ�������Ƶ�����ã���mcu wfi=0��ʱ����Ч����Ƶ��Ϊ��ֵ+1�� */
        unsigned int  clksys_on_div_cfg_hard_en      : 1;  /* bit[3]    : clksys_on_div_cfg_hard_wfi����ʹ������
                                                                          0�� clksys_on_div_cfg_hard_wfi���ܹرգ�
                                                                          1�� clksys_on_div_cfg_hard_wfi����ʹ�ܣ�clksys_on_div_cfg_hard_wfi���ܷ�Ƶ����mcu wfi=1��ʱ����Ч�� */
        unsigned int  clksys_on_div_cfg_hard_wfi     : 3;  /* bit[4-6]  : clksys_on�ϵ���150MHzʱ��Ӳ����Ƶ�����ã���mcu wfi=1��ʱ����Ч����Ƶ��Ϊ��ֵ+1�� */
        unsigned int  reserved_0                     : 9;  /* bit[7-15] : reserved */
        unsigned int  clksys_on_div_cfg_msk          : 3;  /* bit[16-18]: clksys_on_div_cfg��mskλ */
        unsigned int  clksys_on_div_cfg_hard_en_msk  : 1;  /* bit[19]   : clksys_on_div_cfg_hard_en��mskλ */
        unsigned int  clksys_on_div_cfg_hard_wfi_msk : 3;  /* bit[20-22]: clksys_on_div_cfg_hard_wfi��mskλ */
        unsigned int  reserved_1                     : 9;  /* bit[23-31]: reserved  */
    } reg;
} SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL0_UNION;
#endif
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL0_clksys_on_div_cfg_START               (0)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL0_clksys_on_div_cfg_END                 (2)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL0_clksys_on_div_cfg_hard_en_START       (3)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL0_clksys_on_div_cfg_hard_en_END         (3)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL0_clksys_on_div_cfg_hard_wfi_START      (4)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL0_clksys_on_div_cfg_hard_wfi_END        (6)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL0_clksys_on_div_cfg_msk_START           (16)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL0_clksys_on_div_cfg_msk_END             (18)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL0_clksys_on_div_cfg_hard_en_msk_START   (19)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL0_clksys_on_div_cfg_hard_en_msk_END     (19)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL0_clksys_on_div_cfg_hard_wfi_msk_START  (20)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL0_clksys_on_div_cfg_hard_wfi_msk_END    (22)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL1_UNION
 �ṹ˵��  : SC_ALWAYSON_SYS_CTRL1 �Ĵ����ṹ���塣��ַƫ����:0x1484����ֵ:0x0000000A�����:32
 �Ĵ���˵��: ALWAYSON���ƼĴ��������ܰ���TCXOռ�ձ����ã�DCXO��Ƶ���ơ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pdm_width : 4;  /* bit[0-3]  : PDM����������λ��Ĵ�����������
                                                     4'b0000-����λ��Ϊ6��
                                                     4'b0001-����λ��Ϊ7��
                                                     4'b0010-����λ��Ϊ8��
                                                     4'b0011-����λ��Ϊ9��
                                                     4'b0100-����λ��Ϊ10��
                                                     4'b0101-����λ��Ϊ11��
                                                     4'b0110-����λ��Ϊ12��
                                                     4'b0111-����λ��Ϊ13��
                                                     4'b1000-����λ��Ϊ14��
                                                     4'b1001-����λ��Ϊ15��
                                                     4'b1010-����λ��Ϊ16��
                                                     4'b1011~4'b1111-����λ��Ϊ6�� */
        unsigned int  pdm_mode  : 1;  /* bit[4]    : PDM��Ч��ʽ��������
                                                     0�� reserved��
                                                     1�� ������Ч�� */
        unsigned int  pdm_en    : 1;  /* bit[5]    : PDMʹ����Ч��ʽ��������
                                                     0�� disable��
                                                     1�� enable�� */
        unsigned int  reserved  : 10; /* bit[6-15] : reserved */
        unsigned int  pdm_modu  : 16; /* bit[16-31]: PDM����������������üĴ���
                                                     �� */
    } reg;
} SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL1_UNION;
#endif
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL1_pdm_width_START  (0)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL1_pdm_width_END    (3)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL1_pdm_mode_START   (4)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL1_pdm_mode_END     (4)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL1_pdm_en_START     (5)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL1_pdm_en_END       (5)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL1_pdm_modu_START   (16)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL1_pdm_modu_END     (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL2_UNION
 �ṹ˵��  : SC_ALWAYSON_SYS_CTRL2 �Ĵ����ṹ���塣��ַƫ����:0x1488����ֵ:0x00000000�����:32
 �Ĵ���˵��: ALWAYSON���ƼĴ��������ܰ���PDM��Ƶ���á�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pdm_div1 : 16; /* bit[0-15] : PDM��Ƶ����1����Ƶ֮���ʱ��Ƶ��Ϊ��
                                                    div_clk=sys_clk/(pdm_div1+1)(pdm_div2+1)
                                                    sys_clk��ϵͳNormal״̬Ϊ150MHz����SLOW״̬Ϊ19.2MHz����SLEEP״̬Ϊ32KHz�� */
        unsigned int  pdm_div2 : 16; /* bit[16-31]: PDM��Ƶ����2����Ƶ֮���ʱ��Ƶ��Ϊ��
                                                    div_clk=sys_clk/(pdm_div1+1)(pdm_div2+1)
                                                    sys_clk��ϵͳNormal״̬Ϊ150MHz����SLOW״̬Ϊ19.2MHz����SLEEP״̬Ϊ32KHz�� */
    } reg;
} SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL2_UNION;
#endif
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL2_pdm_div1_START  (0)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL2_pdm_div1_END    (15)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL2_pdm_div2_START  (16)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL2_pdm_div2_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL3_UNION
 �ṹ˵��  : SC_ALWAYSON_SYS_CTRL3 �Ĵ����ṹ���塣��ַƫ����:0x148C����ֵ:0x0000FFFB�����:32
 �Ĵ���˵��: ALWAYSON���ƼĴ���������32Kʱ��ѡ���RTC��Ƶ���á�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  rtl_div_cfg   : 15; /* bit[0-14] : rtc��Ƶ���ã�rtcʱ����clk32k��Ƶ��ã���������ֵ����clk32k_sel_nv=0��ʱ����Ч��Ĭ��ֵΪ32764=0x7FFB+1��clk32k_sel_nv=1ʱ��ѡ��̶���Ƶ32768�� */
        unsigned int  clk32k_sel_nv : 1;  /* bit[15]   : clk32kѡ��
                                                         0��ѡ��pmu����32KHzʱ�ӣ�
                                                         1��ѡ��������32KHzʱ�ӡ� */
        unsigned int  reserved      : 16; /* bit[16-31]: reserved */
    } reg;
} SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL3_UNION;
#endif
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL3_rtl_div_cfg_START    (0)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL3_rtl_div_cfg_END      (14)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL3_clk32k_sel_nv_START  (15)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL3_clk32k_sel_nv_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL10_UNION
 �ṹ˵��  : SC_ALWAYSON_SYS_CTRL10 �Ĵ����ṹ���塣��ַƫ����:0x14A8����ֵ:0x00000000�����:32
 �Ĵ���˵��: ALWAYSON���ƼĴ��������ܰ���CLK MONITOR���ơ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  clk_monitor_cfg_cnt_periodcfg : 16; /* bit[0-15] : clk monitorʱ����������
                                                                         clk monitorʹ��19.2MHz�ο�ʱ��,��32.768KHzʱ�ӽ�������ͳ��,���ͳ�ƽ������clk_monitor_cfg_cnt_periodcfg,������жϡ� */
        unsigned int  reserved                      : 14; /* bit[16-29]: reserved */
        unsigned int  clk_monitor_cnt_update_en     : 1;  /* bit[30]   : clk monitor����ʹ�ܿ��ƣ�����bit��Чʱ��clk monitorʹ��19.2MHz�ο�ʱ��,��32.768KHzʱ�ӽ�������ͳ�ƣ���������浽�Ĵ���clk_monitor_clk_cnt�С�
                                                                         0�� disable��
                                                                         1�� enable�� */
        unsigned int  clk_monitor_cfg_cnt_en        : 1;  /* bit[31]   : clk monitor����ͳ�ƱȽϲ����ж�ʹ�ܿ���
                                                                         0�� disable��
                                                                         1�� enable��
                                                                         clk monitorʹ��19.2MHz�ο�ʱ��,��32.768KHzʱ�ӽ�������ͳ��,���ͳ�ƽ������clk_monitor_cfg_cnt_periodcfg,������жϡ� */
    } reg;
} SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL10_UNION;
#endif
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL10_clk_monitor_cfg_cnt_periodcfg_START  (0)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL10_clk_monitor_cfg_cnt_periodcfg_END    (15)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL10_clk_monitor_cnt_update_en_START      (30)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL10_clk_monitor_cnt_update_en_END        (30)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL10_clk_monitor_cfg_cnt_en_START         (31)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL10_clk_monitor_cfg_cnt_en_END           (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL11_UNION
 �ṹ˵��  : SC_ALWAYSON_SYS_CTRL11 �Ĵ����ṹ���塣��ַƫ����:0x14AC����ֵ:0x00000000�����:32
 �Ĵ���˵��: ALWAYSON���ƼĴ��������ܰ���CLK MONITOR����,IO RET��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  clk_monitor_int_mask           : 1;  /* bit[0]    : clk monitor�ж�����
                                                                          0�� int not mask��
                                                                          1�� int mask�� */
        unsigned int  clk_monitor_tcxo_en            : 1;  /* bit[1]    : clk monitor tcxo enable
                                                                          0�� disable��
                                                                          1�� enable��
                                                                          ע���˹�����ʱ��ʹ�á� */
        unsigned int  clk_monitor_int_clr            : 1;  /* bit[2]    : clk monitor�ж����
                                                                          0�� int not clear��
                                                                          1�� int clear��
                                                                          ע�� �ж��������Ҫ����bitд1'b0�������´��ж�����޷��յ��� */
        unsigned int  reserved                       : 13; /* bit[3-15] : reserved */
        unsigned int  io_ret_pret_0                  : 1;  /* bit[16]   : io retention for io domain pret0
                                                                          0�� not retention��
                                                                          1�� retention�� */
        unsigned int  io_ret_pret_1                  : 1;  /* bit[17]   : io retention for io domain pret1
                                                                          0�� not retention��
                                                                          1�� retention�� */
        unsigned int  io_ret_pret_2                  : 1;  /* bit[18]   : io retention for io domain pret2
                                                                          0�� not retention��
                                                                          1�� retention�� */
        unsigned int  io_ret_pret_3                  : 1;  /* bit[19]   : io retention for io domain pret3
                                                                          0�� not retention��
                                                                          1�� retention�� */
        unsigned int  io_ret_pret_4                  : 1;  /* bit[20]   : io retention for io domain pret4
                                                                          0�� not retention��
                                                                          1�� retention�� */
        unsigned int  io_ret_pret_sd                 : 1;  /* bit[21]   : io retention for io domain pret sd
                                                                          0�� not retention��
                                                                          1�� retention�� */
        unsigned int  io_ret_pret_usim0              : 1;  /* bit[22]   : io retention for io domain pret usim0
                                                                          0�� not retention��
                                                                          1�� retention�� */
        unsigned int  io_ret_pret_usim1              : 1;  /* bit[23]   : io retention for io domain pret usim1
                                                                          0�� not retention��
                                                                          1�� retention�� */
        unsigned int  alwayson_and_periph_sys_ctrl11 : 8;  /* bit[24-31]: reserved */
    } reg;
} SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL11_UNION;
#endif
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL11_clk_monitor_int_mask_START            (0)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL11_clk_monitor_int_mask_END              (0)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL11_clk_monitor_tcxo_en_START             (1)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL11_clk_monitor_tcxo_en_END               (1)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL11_clk_monitor_int_clr_START             (2)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL11_clk_monitor_int_clr_END               (2)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL11_io_ret_pret_0_START                   (16)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL11_io_ret_pret_0_END                     (16)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL11_io_ret_pret_1_START                   (17)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL11_io_ret_pret_1_END                     (17)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL11_io_ret_pret_2_START                   (18)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL11_io_ret_pret_2_END                     (18)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL11_io_ret_pret_3_START                   (19)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL11_io_ret_pret_3_END                     (19)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL11_io_ret_pret_4_START                   (20)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL11_io_ret_pret_4_END                     (20)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL11_io_ret_pret_sd_START                  (21)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL11_io_ret_pret_sd_END                    (21)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL11_io_ret_pret_usim0_START               (22)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL11_io_ret_pret_usim0_END                 (22)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL11_io_ret_pret_usim1_START               (23)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL11_io_ret_pret_usim1_END                 (23)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL11_alwayson_and_periph_sys_ctrl11_START  (24)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_CTRL11_alwayson_and_periph_sys_ctrl11_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT0_UNION
 �ṹ˵��  : SC_ALWAYSON_SYS_STAT0 �Ĵ����ṹ���塣��ַƫ����:0x14C0����ֵ:0x00000000�����:32
 �Ĵ���˵��: ALWAYSON״̬�Ĵ��������ܰ���CLK MONITOR���ơ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ipc_s_clk_state       : 3;  /* bit[0-2]  : ipc_s clk state
                                                                 000��START��
                                                                 001��WAIT��
                                                                 010��ACCESS��
                                                                 011��BUSY��
                                                                 100��IDLE��
                                                                 others��no meanings�� */
        unsigned int  ipc_ns_clk_state      : 3;  /* bit[3-5]  : ipc_ns clk state
                                                                 000��START��
                                                                 001��WAIT��
                                                                 010��ACCESS��
                                                                 011��BUSY��
                                                                 100��IDLE��
                                                                 others��no meanings�� */
        unsigned int  clk_monitor_mask_intr : 1;  /* bit[6]    : clk monitor mask int
                                                                 0�� ���жϣ�
                                                                 1�� ���жϡ� */
        unsigned int  clk_monitor_raw_intr  : 1;  /* bit[7]    : clk monitor raw int
                                                                 0�� ���жϣ�
                                                                 1�� ���жϡ� */
        unsigned int  ahb_rev_bit           : 1;  /* bit[8]    : cm3 hreadyin signal
                                                                 0�� not reversed��
                                                                 1�� reversed�� */
        unsigned int  reserved              : 7;  /* bit[9-15] : reserved */
        unsigned int  clk_monitor_clk_cnt   : 16; /* bit[16-31]: clk_monitor_clk_cnt�� */
    } reg;
} SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT0_UNION;
#endif
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT0_ipc_s_clk_state_START        (0)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT0_ipc_s_clk_state_END          (2)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT0_ipc_ns_clk_state_START       (3)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT0_ipc_ns_clk_state_END         (5)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT0_clk_monitor_mask_intr_START  (6)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT0_clk_monitor_mask_intr_END    (6)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT0_clk_monitor_raw_intr_START   (7)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT0_clk_monitor_raw_intr_END     (7)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT0_ahb_rev_bit_START            (8)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT0_ahb_rev_bit_END              (8)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT0_clk_monitor_clk_cnt_START    (16)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT0_clk_monitor_clk_cnt_END      (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT1_UNION
 �ṹ˵��  : SC_ALWAYSON_SYS_STAT1 �Ĵ����ṹ���塣��ַƫ����:0x14C4����ֵ:0x00000000�����:32
 �Ĵ���˵��: ALWAYSON״̬�Ĵ���������BBP DRX��ȡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  wdrx_depth_flag_1card          : 1;  /* bit[0]   : wdrx_depth_flag_1card
                                                                         WBBP�͸�ARM�Ŀ�һ����ָʾ��WDRX�ڻ���ǰ��ǰһ��ʱ���ARMָʾ��ʱ����ǰ��������, ARMʹ�ø��ź��ж��Ƿ������˯�ߣ�����Ч�� */
        unsigned int  g1_gdrx_depth_flag             : 1;  /* bit[1]   : g1_gdrx_depth_flag
                                                                         GBBP1�͸�ARM�Ļ���ָʾ��GDRX�ڻ���ǰ��ǰһ��ʱ���ARMָʾ��ʱ����ǰ��������, ARMʹ�ø��ź��ж��Ƿ������˯�ߣ�����Ч�� */
        unsigned int  g2_gdrx_depth_flag             : 1;  /* bit[2]   : g2_gdrx_depth_flag
                                                                         GBBP2�͸�ARM�Ļ���ָʾ��GDRX�ڻ���ǰ��ǰһ��ʱ���ARMָʾ��ʱ����ǰ��������, ARMʹ�ø��ź��ж��Ƿ������˯�ߣ�����Ч�� */
        unsigned int  cdma_evdo_gdrx_depth_flag      : 1;  /* bit[3]   : CDMA EVDO�͸�ARM�Ļ���ָʾ��GDRX�ڻ���ǰ��ǰһ��ʱ���ARMָʾ��ʱ����ǰ��������, ARMʹ�ø��ź��ж��Ƿ������˯�ߣ�����Ч�� */
        unsigned int  cdma_1x_gdrx_depth_flag        : 1;  /* bit[4]   : CDMA 1X�͸�ARM�Ļ���ָʾ��GDRX�ڻ���ǰ��ǰһ��ʱ���ARMָʾ��ʱ����ǰ��������, ARMʹ�ø��ź��ж��Ƿ������˯�ߣ�����Ч�� */
        unsigned int  alwayson_and_periph_sys_state1 : 27; /* bit[5-31]: reserved */
    } reg;
} SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT1_UNION;
#endif
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT1_wdrx_depth_flag_1card_START           (0)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT1_wdrx_depth_flag_1card_END             (0)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT1_g1_gdrx_depth_flag_START              (1)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT1_g1_gdrx_depth_flag_END                (1)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT1_g2_gdrx_depth_flag_START              (2)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT1_g2_gdrx_depth_flag_END                (2)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT1_cdma_evdo_gdrx_depth_flag_START       (3)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT1_cdma_evdo_gdrx_depth_flag_END         (3)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT1_cdma_1x_gdrx_depth_flag_START         (4)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT1_cdma_1x_gdrx_depth_flag_END           (4)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT1_alwayson_and_periph_sys_state1_START  (5)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT1_alwayson_and_periph_sys_state1_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT2_UNION
 �ṹ˵��  : SC_ALWAYSON_SYS_STAT2 �Ĵ����ṹ���塣��ַƫ����:0x14C8����ֵ:0x00000000�����:32
 �Ĵ���˵��: ALWAYSON״̬�Ĵ��������ܰ���usb chgdet_sts��datcondet_sts״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved_0    : 6;  /* bit[0-5] : reserved */
        unsigned int  datcondet_sts : 1;  /* bit[6]   : datcondet_sts
                                                        USB���ݹܽŽӴ���⣬��ʱ�ܳ���⹦��ʱ��Ч��
                                                        0�� �޹ܽ����ӣ�
                                                        1�� ��ʾ���ݹܽ����Ӽ�⵽�� */
        unsigned int  chgdet_sts    : 1;  /* bit[7]   : chgdet_sts
                                                        �������⣬���ź�Ϊ�ȶ�20ms����źš����ڳ������Чʱ��Ч
                                                        0��SDP��
                                                        1�� ��⵽�����ΪDCP��CDP�� */
        unsigned int  reserved_1    : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT2_UNION;
#endif
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT2_datcondet_sts_START  (6)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT2_datcondet_sts_END    (6)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT2_chgdet_sts_START     (7)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT2_chgdet_sts_END       (7)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT3_UNION
 �ṹ˵��  : SC_ALWAYSON_SYS_STAT3 �Ĵ����ṹ���塣��ַƫ����:0x14CC����ֵ:0x00000000�����:32
 �Ĵ���˵��: ALWAYSON״̬�Ĵ��������ܱ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sysnoc_cfpnoc_timeout  : 1;  /* bit[0]   : sysnoc cfgnoc bus tmieout figure
                                                                 0��normal��
                                                                 1��timeout�� */
        unsigned int  sysnoc_ddrc_timeout    : 1;  /* bit[1]   : sysnoc ddrc bus tmieout figure
                                                                 0��normal��
                                                                 1��timeout�� */
        unsigned int  sysnoc_xg2ram0_timeout : 1;  /* bit[2]   : sysnoc xg2ram0 bus tmieout figure
                                                                 0��normal��
                                                                 1��timeout�� */
        unsigned int  aonoc_modem_s_timeout  : 1;  /* bit[3]   : aonoc modem_s bus tmieout figure
                                                                 0��normal��
                                                                 1��timeout�� */
        unsigned int  aonoc_mcu_s_timeout    : 1;  /* bit[4]   : aonoc mcu_s bus tmieout figure
                                                                 0��normal��
                                                                 1��timeout�� */
        unsigned int  reserved               : 27; /* bit[5-31]: reserved */
    } reg;
} SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT3_UNION;
#endif
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT3_sysnoc_cfpnoc_timeout_START   (0)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT3_sysnoc_cfpnoc_timeout_END     (0)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT3_sysnoc_ddrc_timeout_START     (1)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT3_sysnoc_ddrc_timeout_END       (1)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT3_sysnoc_xg2ram0_timeout_START  (2)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT3_sysnoc_xg2ram0_timeout_END    (2)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT3_aonoc_modem_s_timeout_START   (3)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT3_aonoc_modem_s_timeout_END     (3)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT3_aonoc_mcu_s_timeout_START     (4)
#define SOC_AO_SCTRL_SC_ALWAYSON_SYS_STAT3_aonoc_mcu_s_timeout_END       (4)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_PWUP_TIME0_UNION
 �ṹ˵��  : SC_PWUP_TIME0 �Ĵ����ṹ���塣��ַƫ����:0x1880����ֵ:0x00FF0016�����:32
 �Ĵ���˵��: ��������Դ�ȶ�������0�Ĵ���������ָʾ����������Դ�������ѹ�ȶ������ʱ�䡣
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pw_up_time_0peri : 16; /* bit[0-15] : [0] �����������͹��Ŀ����ź���Ӳ�����ƣ����������Ч����Դ���ⲿPMUֱ���ṩ����mtcmos timeoutָʾ�۲���Ч��������Դ�ȶ�ʱ�䣬����32Kʱ�ӵݼ�������Ĭ��0x16=22�����ڡ� */
        unsigned int  pw_up_time_1g3d  : 16; /* bit[16-31]: [1] ��G3D�µ�����������Դ�ȶ�ʱ�䣬����TCXOʱ�ӵݼ������� */
    } reg;
} SOC_AO_SCTRL_SC_PWUP_TIME0_UNION;
#endif
#define SOC_AO_SCTRL_SC_PWUP_TIME0_pw_up_time_0peri_START  (0)
#define SOC_AO_SCTRL_SC_PWUP_TIME0_pw_up_time_0peri_END    (15)
#define SOC_AO_SCTRL_SC_PWUP_TIME0_pw_up_time_1g3d_START   (16)
#define SOC_AO_SCTRL_SC_PWUP_TIME0_pw_up_time_1g3d_END     (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_PWUP_TIME1_UNION
 �ṹ˵��  : SC_PWUP_TIME1 �Ĵ����ṹ���塣��ַƫ����:0x1884����ֵ:0x00FF00FF�����:32
 �Ĵ���˵��: ��������Դ�ȶ�������1�Ĵ���������ָʾ����������Դ�������ѹ�ȶ������ʱ�䡣
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pw_up_time_2codecisp : 16; /* bit[0-15] : [2] ��CODEC+ISP�µ����� ������Դ�ȶ�ʱ�䣬����TCXOʱ�ӵݼ������� */
        unsigned int  pw_up_time_3reserved : 16; /* bit[16-31]: [3] ��reserved������Դ�ȶ�ʱ�䣬����TCXOʱ�ӵݼ������� */
    } reg;
} SOC_AO_SCTRL_SC_PWUP_TIME1_UNION;
#endif
#define SOC_AO_SCTRL_SC_PWUP_TIME1_pw_up_time_2codecisp_START  (0)
#define SOC_AO_SCTRL_SC_PWUP_TIME1_pw_up_time_2codecisp_END    (15)
#define SOC_AO_SCTRL_SC_PWUP_TIME1_pw_up_time_3reserved_START  (16)
#define SOC_AO_SCTRL_SC_PWUP_TIME1_pw_up_time_3reserved_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_PWUP_TIME2_UNION
 �ṹ˵��  : SC_PWUP_TIME2 �Ĵ����ṹ���塣��ַƫ����:0x1888����ֵ:0x00FF00FF�����:32
 �Ĵ���˵��: ��������Դ�ȶ�������2�Ĵ���������ָʾ����������Դ�������ѹ�ȶ������ʱ�䡣
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pw_up_time_4mcpu       : 16; /* bit[0-15] : [4] ��MCPU�µ����� ������Դ�ȶ�ʱ�䣬����TCXOʱ�ӵݼ������� */
        unsigned int  pw_up_time_5bbpharqmem : 16; /* bit[16-31]: [5] ��BBP Harq Memory�����µ������ ������Դ�ȶ�ʱ�䣬����TCXOʱ�ӵݼ������� */
    } reg;
} SOC_AO_SCTRL_SC_PWUP_TIME2_UNION;
#endif
#define SOC_AO_SCTRL_SC_PWUP_TIME2_pw_up_time_4mcpu_START        (0)
#define SOC_AO_SCTRL_SC_PWUP_TIME2_pw_up_time_4mcpu_END          (15)
#define SOC_AO_SCTRL_SC_PWUP_TIME2_pw_up_time_5bbpharqmem_START  (16)
#define SOC_AO_SCTRL_SC_PWUP_TIME2_pw_up_time_5bbpharqmem_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_PWUP_TIME3_UNION
 �ṹ˵��  : SC_PWUP_TIME3 �Ĵ����ṹ���塣��ַƫ����:0x188C����ֵ:0x00FF00FF�����:32
 �Ĵ���˵��: ��������Դ�ȶ�������3�Ĵ���������ָʾ����������Դ�������ѹ�ȶ������ʱ�䡣
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pw_up_time_6reserved : 16; /* bit[0-15] : [6] ��reserved ������Դ�ȶ�ʱ�䣬����TCXOʱ�ӵݼ������� */
        unsigned int  pw_up_time_7reserved : 16; /* bit[16-31]: [7] ��reserved������Դ�ȶ�ʱ�䣬����TCXOʱ�ӵݼ������� */
    } reg;
} SOC_AO_SCTRL_SC_PWUP_TIME3_UNION;
#endif
#define SOC_AO_SCTRL_SC_PWUP_TIME3_pw_up_time_6reserved_START  (0)
#define SOC_AO_SCTRL_SC_PWUP_TIME3_pw_up_time_6reserved_END    (15)
#define SOC_AO_SCTRL_SC_PWUP_TIME3_pw_up_time_7reserved_START  (16)
#define SOC_AO_SCTRL_SC_PWUP_TIME3_pw_up_time_7reserved_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_PWUP_TIME4_UNION
 �ṹ˵��  : SC_PWUP_TIME4 �Ĵ����ṹ���塣��ַƫ����:0x1890����ֵ:0x00FF00FF�����:32
 �Ĵ���˵��: ��������Դ�ȶ�������4�Ĵ���������ָʾ����������Դ�������ѹ�ȶ������ʱ�䡣
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pw_up_time_8hifi     : 16; /* bit[0-15] : [8] ��HIFI�µ��� ��������Դ�ȶ�ʱ�䣬����TCXOʱ�ӵݼ������� */
        unsigned int  pw_up_time_9reserved : 16; /* bit[16-31]: [9] ��reserved������Դ�ȶ�ʱ�䣬����TCXOʱ�ӵݼ������� */
    } reg;
} SOC_AO_SCTRL_SC_PWUP_TIME4_UNION;
#endif
#define SOC_AO_SCTRL_SC_PWUP_TIME4_pw_up_time_8hifi_START      (0)
#define SOC_AO_SCTRL_SC_PWUP_TIME4_pw_up_time_8hifi_END        (15)
#define SOC_AO_SCTRL_SC_PWUP_TIME4_pw_up_time_9reserved_START  (16)
#define SOC_AO_SCTRL_SC_PWUP_TIME4_pw_up_time_9reserved_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_PWUP_TIME5_UNION
 �ṹ˵��  : SC_PWUP_TIME5 �Ĵ����ṹ���塣��ַƫ����:0x1894����ֵ:0x00FF00FF�����:32
 �Ĵ���˵��: ��������Դ�ȶ�������5�Ĵ���������ָʾ����������Դ�������ѹ�ȶ������ʱ�䡣
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pw_up_time_10reserved : 16; /* bit[0-15] : [10] ��reserved������Դ�ȶ�ʱ�䣬����TCXOʱ�ӵݼ������� */
        unsigned int  pw_up_time_11reserved : 16; /* bit[16-31]: [11] ��reserved������Դ�ȶ�ʱ�䣬����TCXOʱ�ӵݼ������� */
    } reg;
} SOC_AO_SCTRL_SC_PWUP_TIME5_UNION;
#endif
#define SOC_AO_SCTRL_SC_PWUP_TIME5_pw_up_time_10reserved_START  (0)
#define SOC_AO_SCTRL_SC_PWUP_TIME5_pw_up_time_10reserved_END    (15)
#define SOC_AO_SCTRL_SC_PWUP_TIME5_pw_up_time_11reserved_START  (16)
#define SOC_AO_SCTRL_SC_PWUP_TIME5_pw_up_time_11reserved_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_PWUP_TIME6_UNION
 �ṹ˵��  : SC_PWUP_TIME6 �Ĵ����ṹ���塣��ַƫ����:0x1898����ֵ:0x00FF00FF�����:32
 �Ĵ���˵��: ��������Դ�ȶ�������6�Ĵ���������ָʾ����������Դ�������ѹ�ȶ������ʱ�䡣
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pw_up_time_12acpucluster : 16; /* bit[0-15] : [12] ��ACPU SCU��L2C�߼��µ�������MTCMOS��������Դͨ������PMU����ʵ�ֿ��أ��Ĵ�������pw_en0_12acpucluter�������õ�Դ�ȶ�ʱ�䣬��Դ�ȶ�ʱ��ɲ�ѯ����ACPU SCU��L2C����ISOͬʱ����ACPU L2����MEM�����źš�������Դ�ȶ�ʱ�䣬����TCXOʱ�ӵݼ������� */
        unsigned int  pw_up_time_13reserved    : 16; /* bit[16-31]: [13] ��reserved������Դ�ȶ�ʱ�䣬����TCXOʱ�ӵݼ������� */
    } reg;
} SOC_AO_SCTRL_SC_PWUP_TIME6_UNION;
#endif
#define SOC_AO_SCTRL_SC_PWUP_TIME6_pw_up_time_12acpucluster_START  (0)
#define SOC_AO_SCTRL_SC_PWUP_TIME6_pw_up_time_12acpucluster_END    (15)
#define SOC_AO_SCTRL_SC_PWUP_TIME6_pw_up_time_13reserved_START     (16)
#define SOC_AO_SCTRL_SC_PWUP_TIME6_pw_up_time_13reserved_END       (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_PWUP_TIME7_UNION
 �ṹ˵��  : SC_PWUP_TIME7 �Ĵ����ṹ���塣��ַƫ����:0x189C����ֵ:0x00FF00FF�����:32
 �Ĵ���˵��: ��������Դ�ȶ�������7�Ĵ���������ָʾ����������Դ�������ѹ�ȶ������ʱ�䡣
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pw_up_time_14reserved : 16; /* bit[0-15] : [14] ��reserved������Դ�ȶ�ʱ�䣬����TCXOʱ�ӵݼ������� */
        unsigned int  pw_up_time_15reserved : 16; /* bit[16-31]: [15] ��reserved������Դ�ȶ�ʱ�䣬����TCXOʱ�ӵݼ������� */
    } reg;
} SOC_AO_SCTRL_SC_PWUP_TIME7_UNION;
#endif
#define SOC_AO_SCTRL_SC_PWUP_TIME7_pw_up_time_14reserved_START  (0)
#define SOC_AO_SCTRL_SC_PWUP_TIME7_pw_up_time_14reserved_END    (15)
#define SOC_AO_SCTRL_SC_PWUP_TIME7_pw_up_time_15reserved_START  (16)
#define SOC_AO_SCTRL_SC_PWUP_TIME7_pw_up_time_15reserved_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_AO_SCTRL_SC_SECURITY_CTRL1_UNION
 �ṹ˵��  : SC_SECURITY_CTRL1 �Ĵ����ṹ���塣��ַƫ����:0x1C04����ֵ:0x00000000�����:32
 �Ĵ���˵��: ��ȫ���ƼĴ���������AO_SC�ļĴ���BIT��ȫ���ʡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_secure_ctrl_bit_0rtc          : 1;  /* bit[0]    : [0] �� RTCʱ���ſغ���λ �漰�Ĵ���0x630,634,0x6F0,6F4��
                                                                            0���Ĵ�����ȫ/�ǰ�ȫ�������ɸ�д��
                                                                            1���Ĵ�������ȫ�����ſɸ�д�� */
        unsigned int  sc_secure_ctrl_bit_1timer0       : 1;  /* bit[1]    : [1] �� ACPU��DualTimer0 ʱ���ſء���λ�Ͳο�ʱ��ѡ��,�漰�Ĵ���0x630,634,1d0,0x6F0,6F4��
                                                                            0���Ĵ�����ȫ/�ǰ�ȫ�������ɸ�д��
                                                                            1���Ĵ�������ȫ�����ſɸ�д�� */
        unsigned int  sc_secure_ctrl_bit_2timer1       : 1;  /* bit[2]    : [2] �� ACPU��DualTimer1 ʱ���ſء���λ�Ͳο�ʱ��ѡ��,�漰�Ĵ���0x630,634,1d0,0x6F0,6F4��
                                                                            0���Ĵ�����ȫ/�ǰ�ȫ�������ɸ�д��
                                                                            1���Ĵ�������ȫ�����ſɸ�д�� */
        unsigned int  sc_secure_ctrl_bit_3timer2       : 1;  /* bit[3]    : [3] �� ACPU��DualTimer2 ʱ���ſء���λ�Ͳο�ʱ��ѡ��,�漰�Ĵ���0x630,634,1d0,0x6F0,6F4��
                                                                            0���Ĵ�����ȫ/�ǰ�ȫ�������ɸ�д��
                                                                            1���Ĵ�������ȫ�����ſɸ�д�� */
        unsigned int  sc_secure_ctrl_bit_4timer3       : 1;  /* bit[4]    : [4] �� ACPU��DualTimer3 ʱ���ſء���λ�Ͳο�ʱ��ѡ��,�漰�Ĵ���0x630,634,1d0,0x6F0,6F4��
                                                                            0���Ĵ�����ȫ/�ǰ�ȫ�������ɸ�д��
                                                                            1���Ĵ�������ȫ�����ſɸ�д�� */
        unsigned int  sc_secure_ctrl_bit_5timer4       : 1;  /* bit[5]    : [5] �� ACPU��DualTimer4 ʱ���ſء���λ�Ͳο�ʱ��ѡ��,�漰�Ĵ���0x630,634,1d4,0x6F0,6F4��
                                                                            0���Ĵ�����ȫ/�ǰ�ȫ�������ɸ�д��
                                                                            1���Ĵ�������ȫ�����ſɸ�д�� */
        unsigned int  sc_secure_ctrl_bit_6timer5       : 1;  /* bit[6]    : [6] �� ACPU��DualTimer5 ʱ���ſء���λ�Ͳο�ʱ��ѡ��,�漰�Ĵ���0x630,634,1d4,0x6F0,6F4��
                                                                            0���Ĵ�����ȫ/�ǰ�ȫ�������ɸ�д��
                                                                            1���Ĵ�������ȫ�����ſɸ�д�� */
        unsigned int  sc_secure_ctrl_bit_7timer6       : 1;  /* bit[7]    : [7] �� ACPU��DualTimer6 ʱ���ſء���λ�Ͳο�ʱ��ѡ��,�漰�Ĵ���0x630,634,1d4,0x6F0,6F4��
                                                                            0���Ĵ�����ȫ/�ǰ�ȫ�������ɸ�д��
                                                                            1���Ĵ�������ȫ�����ſɸ�д�� */
        unsigned int  sc_secure_ctrl_bit_8timer7       : 1;  /* bit[8]    : [8] �� ACPU��DualTimer7 ʱ���ſء���λ�Ͳο�ʱ��ѡ��,�漰�Ĵ���0x630,634,1d4,0x6F0,6F4��
                                                                            0���Ĵ�����ȫ/�ǰ�ȫ�������ɸ�д��
                                                                            1���Ĵ�������ȫ�����ſɸ�д�� */
        unsigned int  sc_secure_ctrl_bit_9timer8       : 1;  /* bit[9]    : [9] �� ACPU��DualTimer8 ʱ���ſء���λ�Ͳο�ʱ��ѡ��,�漰�Ĵ���0x630,634,1f4,0x6F0,6F4��
                                                                            0���Ĵ�����ȫ/�ǰ�ȫ�������ɸ�д��
                                                                            1���Ĵ�������ȫ�����ſɸ�д�� */
        unsigned int  sc_secure_ctrl_bit_10watchdog0   : 1;  /* bit[10]   : [10] �� ACPU�� Watchdog0 ʱ���ſغ���λ,�漰�Ĵ���0x630,634,0x6F0,6F4��
                                                                            0���Ĵ�����ȫ/�ǰ�ȫ�������ɸ�д��
                                                                            1���Ĵ�������ȫ�����ſɸ�д�� */
        unsigned int  sc_secure_ctrl_bit_11watchdog1   : 1;  /* bit[11]   : [11] �� ACPU�� Watchdog1 ʱ���ſغ���λ,�漰�Ĵ���0x630,634,0x6F0,6F4��
                                                                            0���Ĵ�����ȫ/�ǰ�ȫ�������ɸ�д��
                                                                            1���Ĵ�������ȫ�����ſɸ�д�� */
        unsigned int  sc_secure_ctrl_bit_12watchdog2   : 1;  /* bit[12]   : [12] �� ACPU�� Watchdog2 ʱ���ſغ���λ,�漰�Ĵ���0x630,634,0x6F0,6F4��
                                                                            0���Ĵ�����ȫ/�ǰ�ȫ�������ɸ�д��
                                                                            1���Ĵ�������ȫ�����ſɸ�д�� */
        unsigned int  sc_secure_ctrl_bit_13rtc1        : 1;  /* bit[13]   : [13] �� RTC1ʱ���ſغ���λ �漰�Ĵ���0x630,634,0x6F0,6F4��
                                                                            0���Ĵ�����ȫ/�ǰ�ȫ�������ɸ�д��
                                                                            1���Ĵ�������ȫ�����ſɸ�д�� */
        unsigned int  sc_secure_ctrl_bit_14tzpc        : 1;  /* bit[14]   : [14] �� TZPCʱ���ſذ�ȫ���ơ�
                                                                            0��TZPC�ſ����ͨ��SC_PERIPH_CLKEN/IDS4���ÿ��ƣ�
                                                                            1��TZPC�ſ����ͨ��sc_secure_ctrl_bit_16tzpc_clken���ÿ��ơ� */
        unsigned int  sc_secure_ctrl_bit_15ipc_s       : 1;  /* bit[15]   : [15] �� IPC_SCʱ���ſغ���λ��ȫ���ơ�
                                                                            0��IPC_SCʱ���ſغ���λ���ͨ��SC_PERIPH_CLKEN/IDS4��SC_PERIPH_CLKEN/IDS5��SC_PERIPH_RSTEN/IDS4���ÿ��ƣ�
                                                                            1��IPC_SCʱ���ſ�ͨ��sc_secure_ctrl_bit_17ipc_s_clken���ÿ��ƣ���λ����������á� */
        unsigned int  sc_secure_ctrl_bit_16tzpc_clken  : 1;  /* bit[16]   : [16] �� TZPCʱ���ſذ�ȫ���ƣ���bit���ý���sc_secure_ctrl_bit_14tzpcΪ1'b1ʱ��Ч��
                                                                            0��TZPCʱ���ſعرգ�
                                                                            1��TZPCʱ���ſش򿪡� */
        unsigned int  sc_secure_ctrl_bit_17ipc_s_clken : 1;  /* bit[17]   : [17] �� IPC_SCʱ���ſذ�ȫ���ƣ���bit���ý���sc_secure_ctrl_bit_15ipc_sΪ1'b1ʱ��Ч��
                                                                            0��IPC_SCʱ���ſعرգ�
                                                                            1��IPC_SCʱ���ſش򿪣� */
        unsigned int  sc_secure_ctrl_bit               : 14; /* bit[18-31]: reserved */
    } reg;
} SOC_AO_SCTRL_SC_SECURITY_CTRL1_UNION;
#endif
#define SOC_AO_SCTRL_SC_SECURITY_CTRL1_sc_secure_ctrl_bit_0rtc_START           (0)
#define SOC_AO_SCTRL_SC_SECURITY_CTRL1_sc_secure_ctrl_bit_0rtc_END             (0)
#define SOC_AO_SCTRL_SC_SECURITY_CTRL1_sc_secure_ctrl_bit_1timer0_START        (1)
#define SOC_AO_SCTRL_SC_SECURITY_CTRL1_sc_secure_ctrl_bit_1timer0_END          (1)
#define SOC_AO_SCTRL_SC_SECURITY_CTRL1_sc_secure_ctrl_bit_2timer1_START        (2)
#define SOC_AO_SCTRL_SC_SECURITY_CTRL1_sc_secure_ctrl_bit_2timer1_END          (2)
#define SOC_AO_SCTRL_SC_SECURITY_CTRL1_sc_secure_ctrl_bit_3timer2_START        (3)
#define SOC_AO_SCTRL_SC_SECURITY_CTRL1_sc_secure_ctrl_bit_3timer2_END          (3)
#define SOC_AO_SCTRL_SC_SECURITY_CTRL1_sc_secure_ctrl_bit_4timer3_START        (4)
#define SOC_AO_SCTRL_SC_SECURITY_CTRL1_sc_secure_ctrl_bit_4timer3_END          (4)
#define SOC_AO_SCTRL_SC_SECURITY_CTRL1_sc_secure_ctrl_bit_5timer4_START        (5)
#define SOC_AO_SCTRL_SC_SECURITY_CTRL1_sc_secure_ctrl_bit_5timer4_END          (5)
#define SOC_AO_SCTRL_SC_SECURITY_CTRL1_sc_secure_ctrl_bit_6timer5_START        (6)
#define SOC_AO_SCTRL_SC_SECURITY_CTRL1_sc_secure_ctrl_bit_6timer5_END          (6)
#define SOC_AO_SCTRL_SC_SECURITY_CTRL1_sc_secure_ctrl_bit_7timer6_START        (7)
#define SOC_AO_SCTRL_SC_SECURITY_CTRL1_sc_secure_ctrl_bit_7timer6_END          (7)
#define SOC_AO_SCTRL_SC_SECURITY_CTRL1_sc_secure_ctrl_bit_8timer7_START        (8)
#define SOC_AO_SCTRL_SC_SECURITY_CTRL1_sc_secure_ctrl_bit_8timer7_END          (8)
#define SOC_AO_SCTRL_SC_SECURITY_CTRL1_sc_secure_ctrl_bit_9timer8_START        (9)
#define SOC_AO_SCTRL_SC_SECURITY_CTRL1_sc_secure_ctrl_bit_9timer8_END          (9)
#define SOC_AO_SCTRL_SC_SECURITY_CTRL1_sc_secure_ctrl_bit_10watchdog0_START    (10)
#define SOC_AO_SCTRL_SC_SECURITY_CTRL1_sc_secure_ctrl_bit_10watchdog0_END      (10)
#define SOC_AO_SCTRL_SC_SECURITY_CTRL1_sc_secure_ctrl_bit_11watchdog1_START    (11)
#define SOC_AO_SCTRL_SC_SECURITY_CTRL1_sc_secure_ctrl_bit_11watchdog1_END      (11)
#define SOC_AO_SCTRL_SC_SECURITY_CTRL1_sc_secure_ctrl_bit_12watchdog2_START    (12)
#define SOC_AO_SCTRL_SC_SECURITY_CTRL1_sc_secure_ctrl_bit_12watchdog2_END      (12)
#define SOC_AO_SCTRL_SC_SECURITY_CTRL1_sc_secure_ctrl_bit_13rtc1_START         (13)
#define SOC_AO_SCTRL_SC_SECURITY_CTRL1_sc_secure_ctrl_bit_13rtc1_END           (13)
#define SOC_AO_SCTRL_SC_SECURITY_CTRL1_sc_secure_ctrl_bit_14tzpc_START         (14)
#define SOC_AO_SCTRL_SC_SECURITY_CTRL1_sc_secure_ctrl_bit_14tzpc_END           (14)
#define SOC_AO_SCTRL_SC_SECURITY_CTRL1_sc_secure_ctrl_bit_15ipc_s_START        (15)
#define SOC_AO_SCTRL_SC_SECURITY_CTRL1_sc_secure_ctrl_bit_15ipc_s_END          (15)
#define SOC_AO_SCTRL_SC_SECURITY_CTRL1_sc_secure_ctrl_bit_16tzpc_clken_START   (16)
#define SOC_AO_SCTRL_SC_SECURITY_CTRL1_sc_secure_ctrl_bit_16tzpc_clken_END     (16)
#define SOC_AO_SCTRL_SC_SECURITY_CTRL1_sc_secure_ctrl_bit_17ipc_s_clken_START  (17)
#define SOC_AO_SCTRL_SC_SECURITY_CTRL1_sc_secure_ctrl_bit_17ipc_s_clken_END    (17)
#define SOC_AO_SCTRL_SC_SECURITY_CTRL1_sc_secure_ctrl_bit_START                (18)
#define SOC_AO_SCTRL_SC_SECURITY_CTRL1_sc_secure_ctrl_bit_END                  (31)






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

#endif /* end of soc_ao_sctrl_interface.h */
