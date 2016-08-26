

/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/

#ifndef __SOC_PMCTRL_INTERFACE_H__
#define __SOC_PMCTRL_INTERFACE_H__

#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif



/*****************************************************************************
  2 �궨��
*****************************************************************************/

/****************************************************************************
                     (1/1) register_define
 ****************************************************************************/
/* �Ĵ���˵����ACPU PLL���ƼĴ���
   λ����UNION�ṹ:  SOC_PMCTRL_ACPUPLLCTRL_UNION */
#define SOC_PMCTRL_ACPUPLLCTRL_ADDR(base)             ((base) + (0x000))

/* �Ĵ���˵����ACPU PLLƵ�ʼĴ���
   λ����UNION�ṹ:  SOC_PMCTRL_ACPUPLLFREQ_UNION */
#define SOC_PMCTRL_ACPUPLLFREQ_ADDR(base)             ((base) + (0x004))

/* �Ĵ���˵����GPU PLL���ƼĴ���
   λ����UNION�ṹ:  SOC_PMCTRL_GPUPLLCTRL_UNION */
#define SOC_PMCTRL_GPUPLLCTRL_ADDR(base)              ((base) + (0x008))

/* �Ĵ���˵����GPU PLLƵ�ʼĴ���
   λ����UNION�ṹ:  SOC_PMCTRL_GPUPLLFREQ_UNION */
#define SOC_PMCTRL_GPUPLLFREQ_ADDR(base)              ((base) + (0x00C))

/* �Ĵ���˵����DDR PLL1���ƼĴ���
   λ����UNION�ṹ:  SOC_PMCTRL_DDRPLL1CTRL_UNION */
#define SOC_PMCTRL_DDRPLL1CTRL_ADDR(base)             ((base) + (0x010))

/* �Ĵ���˵����DDR PLL1Ƶ�ʼĴ���
   λ����UNION�ṹ:  SOC_PMCTRL_DDRPLL1FREQ_UNION */
#define SOC_PMCTRL_DDRPLL1FREQ_ADDR(base)             ((base) + (0x014))

/* �Ĵ���˵����DDRPLL0����Ӱ�ӼĴ���
   λ����UNION�ṹ:  SOC_PMCTRL_DDRPLL0ALIAS_UNION */
#define SOC_PMCTRL_DDRPLL0ALIAS_ADDR(base)            ((base) + (0x018))

/* �Ĵ���˵����SYS PLL���ƼĴ���
   λ����UNION�ṹ:  SOC_PMCTRL_SYSPLLCTRL_UNION */
#define SOC_PMCTRL_SYSPLLCTRL_ADDR(base)              ((base) + (0x028))

/* �Ĵ���˵����SYS PLLƵ�ʼĴ���
   λ����UNION�ṹ:  SOC_PMCTRL_SYSPLLFREQ_UNION */
#define SOC_PMCTRL_SYSPLLFREQ_ADDR(base)              ((base) + (0x02C))

/* �Ĵ���˵����DDR PLL0���ƼĴ���
   λ����UNION�ṹ:  SOC_PMCTRL_DDRPLL0CTRL_UNION */
#define SOC_PMCTRL_DDRPLL0CTRL_ADDR(base)             ((base) + (0x030))

/* �Ĵ���˵����DDR PLL0Ƶ�ʼĴ���
   λ����UNION�ṹ:  SOC_PMCTRL_DDRPLL0FREQ_UNION */
#define SOC_PMCTRL_DDRPLL0FREQ_ADDR(base)             ((base) + (0x034))

/* �Ĵ���˵����MED PLL���ƼĴ���
   λ����UNION�ṹ:  SOC_PMCTRL_MEDPLLCTRL_UNION */
#define SOC_PMCTRL_MEDPLLCTRL_ADDR(base)              ((base) + (0x038))

/* �Ĵ���˵����MED PLLƵ�ʼĴ���
   λ����UNION�ṹ:  SOC_PMCTRL_MEDPLLFREQ_UNION */
#define SOC_PMCTRL_MEDPLLFREQ_ADDR(base)              ((base) + (0x03C))

/* �Ĵ���˵����MEDPLL����Ӱ�ӼĴ���
   λ����UNION�ṹ:  SOC_PMCTRL_MEDPLLALIAS_UNION */
#define SOC_PMCTRL_MEDPLLALIAS_ADDR(base)             ((base) + (0x040))

/* �Ĵ���˵����BBPPLL����Ӱ�ӼĴ���
   λ����UNION�ṹ:  SOC_PMCTRL_BBPPLLALIAS_UNION */
#define SOC_PMCTRL_BBPPLLALIAS_ADDR(base)             ((base) + (0x048))

/* �Ĵ���˵����DDRPLL0����ʹ�ܼĴ���
   λ����UNION�ṹ:  SOC_PMCTRL_DDRPLL0CFGEN_UNION */
#define SOC_PMCTRL_DDRPLL0CFGEN_ADDR(base)            ((base) + (0x04C))

/* �Ĵ���˵����SYS PLLС����Ƶ�Ĵ���
   λ����UNION�ṹ:  SOC_PMCTRL_SYSPLLFRAC_UNION */
#define SOC_PMCTRL_SYSPLLFRAC_ADDR(base)              ((base) + (0x050))

/* �Ĵ���˵����SYS PLL��Ƶ���ƼĴ���
   λ����UNION�ṹ:  SOC_PMCTRL_SYSPLLSSC_UNION */
#define SOC_PMCTRL_SYSPLLSSC_ADDR(base)               ((base) + (0x054))

/* �Ĵ���˵����DDR PLL0С����Ƶ�Ĵ���
   λ����UNION�ṹ:  SOC_PMCTRL_DDRPLL0FRAC_UNION */
#define SOC_PMCTRL_DDRPLL0FRAC_ADDR(base)             ((base) + (0x058))

/* �Ĵ���˵����DDR PLL0��Ƶ���ƼĴ���
   λ����UNION�ṹ:  SOC_PMCTRL_DDRPLL0SSC_UNION */
#define SOC_PMCTRL_DDRPLL0SSC_ADDR(base)              ((base) + (0x05C))

/* �Ĵ���˵����DDR PLL1С����Ƶ�Ĵ���
   λ����UNION�ṹ:  SOC_PMCTRL_DDRPLL1FRAC_UNION */
#define SOC_PMCTRL_DDRPLL1FRAC_ADDR(base)             ((base) + (0x074))

/* �Ĵ���˵����DDR PLL1��Ƶ���ƼĴ���
   λ����UNION�ṹ:  SOC_PMCTRL_DDRPLL1SSC_UNION */
#define SOC_PMCTRL_DDRPLL1SSC_ADDR(base)              ((base) + (0x078))

/* �Ĵ���˵����ʱ�Ӳ������üĴ���0
   λ����UNION�ṹ:  SOC_PMCTRL_CLKCFG4BIT0_UNION */
#define SOC_PMCTRL_CLKCFG4BIT0_ADDR(base)             ((base) + (0x080))

/* �Ĵ���˵����ʱ�Ӳ������üĴ���1
   λ����UNION�ṹ:  SOC_PMCTRL_CLKCFG4BIT1_UNION */
#define SOC_PMCTRL_CLKCFG4BIT1_ADDR(base)             ((base) + (0x084))

/* �Ĵ���˵����ʱ�Ӳ������üĴ���2
   λ����UNION�ṹ:  SOC_PMCTRL_CLKCFG4BIT2_UNION */
#define SOC_PMCTRL_CLKCFG4BIT2_ADDR(base)             ((base) + (0x088))

/* �Ĵ���˵����TIMER0���ƼĴ���
   λ����UNION�ṹ:  SOC_PMCTRL_TIMER0CTRL_UNION */
#define SOC_PMCTRL_TIMER0CTRL_ADDR(base)              ((base) + (0x0C0))

/* �Ĵ���˵����TIMER1���ƼĴ���
   λ����UNION�ṹ:  SOC_PMCTRL_TIMER1CTRL_UNION */
#define SOC_PMCTRL_TIMER1CTRL_ADDR(base)              ((base) + (0x0C4))

/* �Ĵ���˵����TIMER2���ƼĴ���
   λ����UNION�ṹ:  SOC_PMCTRL_TIMER2CTRL_UNION */
#define SOC_PMCTRL_TIMER2CTRL_ADDR(base)              ((base) + (0x0C8))

/* �Ĵ���˵����TIMER3���ƼĴ���
   λ����UNION�ṹ:  SOC_PMCTRL_TIMER3CTRL_UNION */
#define SOC_PMCTRL_TIMER3CTRL_ADDR(base)              ((base) + (0x0CC))

/* �Ĵ���˵����PMUSSIͨ��ʹ�ܼĴ���
   λ����UNION�ṹ:  SOC_PMCTRL_PMUSSICHNEN_UNION */
#define SOC_PMCTRL_PMUSSICHNEN_ADDR(base)             ((base) + (0x0FC))

/* �Ĵ���˵����ACPU PLLѡ��Ĵ���
   λ����UNION�ṹ:  SOC_PMCTRL_ACPUPLLSEL_UNION */
#define SOC_PMCTRL_ACPUPLLSEL_ADDR(base)              ((base) + (0x100))

/* �Ĵ���˵����ACPUʱ�ӷ�Ƶ�Ĵ���
   λ����UNION�ṹ:  SOC_PMCTRL_ACPUCLKDIV_UNION */
#define SOC_PMCTRL_ACPUCLKDIV_ADDR(base)              ((base) + (0x104))

/* �Ĵ���˵����ACPU�洢��RM�����Ĵ���
   λ����UNION�ṹ:  SOC_PMCTRL_ACPUMEMRM_UNION */
#define SOC_PMCTRL_ACPUMEMRM_ADDR(base)               ((base) + (0x108))

/* �Ĵ���˵����ACPU��ѹ���Ĵ���
   λ����UNION�ṹ:  SOC_PMCTRL_ACPUVOLDET_UNION */
#define SOC_PMCTRL_ACPUVOLDET_ADDR(base)              ((base) + (0x10C))

/* �Ĵ���˵����ACPU��SYSPLL�����üĴ���
   λ����UNION�ṹ:  SOC_PMCTRL_ACPUSYSPLLCFG_UNION */
#define SOC_PMCTRL_ACPUSYSPLLCFG_ADDR(base)           ((base) + (0x110))

/* �Ĵ���˵����ACPU DVFSʱ��ģʽ�Ĵ���
   λ����UNION�ṹ:  SOC_PMCTRL_ACPUCLKOFFCFG_UNION */
#define SOC_PMCTRL_ACPUCLKOFFCFG_ADDR(base)           ((base) + (0x114))

/* �Ĵ���˵����ACPU DVFSʹ�ܼĴ���
   λ����UNION�ṹ:  SOC_PMCTRL_ACPUDVFSEN_UNION */
#define SOC_PMCTRL_ACPUDVFSEN_ADDR(base)              ((base) + (0x118))

/* �Ĵ���˵����ACPUƵ��Profile�Ĵ���0
   λ����UNION�ṹ:  SOC_PMCTRL_ACPUCLKPROFILE0_UNION */
#define SOC_PMCTRL_ACPUCLKPROFILE0_ADDR(base)         ((base) + (0x11C))

/* �Ĵ���˵����ACPUƵ��Profile�Ĵ���1
   λ����UNION�ṹ:  SOC_PMCTRL_ACPUCLKPROFILE1_UNION */
#define SOC_PMCTRL_ACPUCLKPROFILE1_ADDR(base)         ((base) + (0x120))

/* �Ĵ���˵����ACPU��ѹProfile�Ĵ���
   λ����UNION�ṹ:  SOC_PMCTRL_ACPUVOLPROFILE_UNION */
#define SOC_PMCTRL_ACPUVOLPROFILE_ADDR(base)          ((base) + (0x124))

/* �Ĵ���˵����ACPU PLL��Ƶ״̬�Ĵ���
   λ����UNION�ṹ:  SOC_PMCTRL_ACPUPLLSTAT_UNION */
#define SOC_PMCTRL_ACPUPLLSTAT_ADDR(base)             ((base) + (0x128))

/* �Ĵ���˵����ACPUʱ�ӷ�Ƶ��ʱ�Ĵ���
   λ����UNION�ṹ:  SOC_PMCTRL_ACPUDIVTIMEOUT_UNION */
#define SOC_PMCTRL_ACPUDIVTIMEOUT_ADDR(base)          ((base) + (0x12C))

/* �Ĵ���˵����ACPU AVS�ٴ�������ʱ�Ĵ���
   λ����UNION�ṹ:  SOC_PMCTRL_ACPUAVSONTIMEOUT_UNION */
#define SOC_PMCTRL_ACPUAVSONTIMEOUT_ADDR(base)        ((base) + (0x130))

/* �Ĵ���˵����ACPU AVS�������¼Ĵ���
   λ����UNION�ṹ:  SOC_PMCTRL_ACPUAVSPARAUPD_UNION */
#define SOC_PMCTRL_ACPUAVSPARAUPD_ADDR(base)          ((base) + (0x180))

/* �Ĵ���˵����ACPU AVS�����Ĵ���0
   λ����UNION�ṹ:  SOC_PMCTRL_ACPUAVSPARA0_UNION */
#define SOC_PMCTRL_ACPUAVSPARA0_ADDR(base)            ((base) + (0x184))

/* �Ĵ���˵����ACPU AVS�����Ĵ���1
   λ����UNION�ṹ:  SOC_PMCTRL_ACPUAVSPARA1_UNION */
#define SOC_PMCTRL_ACPUAVSPARA1_ADDR(base)            ((base) + (0x188))

/* �Ĵ���˵����ACPU AVS�����Ĵ���2
   λ����UNION�ṹ:  SOC_PMCTRL_ACPUAVSPARA2_UNION */
#define SOC_PMCTRL_ACPUAVSPARA2_ADDR(base)            ((base) + (0x18C))

/* �Ĵ���˵����ACPU AVS�����Ĵ���3
   λ����UNION�ṹ:  SOC_PMCTRL_ACPUAVSPARA3_UNION */
#define SOC_PMCTRL_ACPUAVSPARA3_ADDR(base)            ((base) + (0x190))

/* �Ĵ���˵����ACPU AVS�����Ĵ���4
   λ����UNION�ṹ:  SOC_PMCTRL_ACPUAVSPARA4_UNION */
#define SOC_PMCTRL_ACPUAVSPARA4_ADDR(base)            ((base) + (0x194))

/* �Ĵ���˵����ACPU AVS�����Ĵ���5
   λ����UNION�ṹ:  SOC_PMCTRL_ACPUAVSPARA5_UNION */
#define SOC_PMCTRL_ACPUAVSPARA5_ADDR(base)            ((base) + (0x198))

/* �Ĵ���˵����ACPU AVS�����Ĵ���6
   λ����UNION�ṹ:  SOC_PMCTRL_ACPUAVSPARA6_UNION */
#define SOC_PMCTRL_ACPUAVSPARA6_ADDR(base)            ((base) + (0x19C))

/* �Ĵ���˵����ACPU AVS�����Ĵ���7
   λ����UNION�ṹ:  SOC_PMCTRL_ACPUAVSPARA7_UNION */
#define SOC_PMCTRL_ACPUAVSPARA7_ADDR(base)            ((base) + (0x1A0))

/* �Ĵ���˵����ACPU AVSʹ�ܼĴ���
   λ����UNION�ṹ:  SOC_PMCTRL_ACPUAVSEN_UNION */
#define SOC_PMCTRL_ACPUAVSEN_ADDR(base)               ((base) + (0x1E4))

/* �Ĵ���˵����ACPU AVS���ڼĴ���
   λ����UNION�ṹ:  SOC_PMCTRL_ACPUAVSPERIOD_UNION */
#define SOC_PMCTRL_ACPUAVSPERIOD_ADDR(base)           ((base) + (0x1E8))

/* �Ĵ���˵����ACPU AVS���������Ĵ���
   λ����UNION�ṹ:  SOC_PMCTRL_AACPUAVSRUNROUND_UNION */
#define SOC_PMCTRL_AACPUAVSRUNROUND_ADDR(base)        ((base) + (0x1EC))

/* �Ĵ���˵�������ռ��������¼Ĵ���
   λ����UNION�ṹ:  SOC_PMCTRL_PDPARAUDP_UNION */
#define SOC_PMCTRL_PDPARAUDP_ADDR(base)               ((base) + (0x280))

/* �Ĵ���˵�������ռ������Ĵ���0
   λ����UNION�ṹ:  SOC_PMCTRL_PDPARA0_UNION */
#define SOC_PMCTRL_PDPARA0_ADDR(base)                 ((base) + (0x284))

/* �Ĵ���˵�������ռ������Ĵ���1
   λ����UNION�ṹ:  SOC_PMCTRL_PDPARA1_UNION */
#define SOC_PMCTRL_PDPARA1_ADDR(base)                 ((base) + (0x288))

/* �Ĵ���˵�������ռ������Ĵ���2
   λ����UNION�ṹ:  SOC_PMCTRL_PDAVSPARA2_UNION */
#define SOC_PMCTRL_PDAVSPARA2_ADDR(base)              ((base) + (0x2A0))

/* �Ĵ���˵�������ռ��ʹ�ܼĴ���
   λ����UNION�ṹ:  SOC_PMCTRL_PDAVSEN_UNION */
#define SOC_PMCTRL_PDAVSEN_ADDR(base)                 ((base) + (0x2E0))

/* �Ĵ���˵����ACPU HPM���ƼĴ���
   λ����UNION�ṹ:  SOC_PMCTRL_ACPUHPMCTRL_UNION */
#define SOC_PMCTRL_ACPUHPMCTRL_ADDR(base)             ((base) + (0x300))

/* �Ĵ���˵����ACPU HPM OPC��Ч�Ĵ���
   λ����UNION�ṹ:  SOC_PMCTRL_ACPUHPMOPCVALID_UNION */
#define SOC_PMCTRL_ACPUHPMOPCVALID_ADDR(base)         ((base) + (0x314))

/* �Ĵ���˵����ACPU01 HPM OPC�Ĵ���
   λ����UNION�ṹ:  SOC_PMCTRL_ACPU01HPMOPC_UNION */
#define SOC_PMCTRL_ACPU01HPMOPC_ADDR(base)            ((base) + (0x318))

/* �Ĵ���˵����ACPU23 HPM OPC�Ĵ���
   λ����UNION�ṹ:  SOC_PMCTRL_ACPU23HPMOPC_UNION */
#define SOC_PMCTRL_ACPU23HPMOPC_ADDR(base)            ((base) + (0x31C))

/* �Ĵ���˵����ACPU01 HPM PC�Ĵ���
   λ����UNION�ṹ:  SOC_PMCTRL_ACPU01HPMPC_UNION */
#define SOC_PMCTRL_ACPU01HPMPC_ADDR(base)             ((base) + (0x330))

/* �Ĵ���˵����ACPU23 HPM PC�Ĵ���
   λ����UNION�ṹ:  SOC_PMCTRL_ACPU23HPMPC_UNION */
#define SOC_PMCTRL_ACPU23HPMPC_ADDR(base)             ((base) + (0x334))

/* �Ĵ���˵����ACPU HPM��·�Ĵ���
   λ����UNION�ṹ:  SOC_PMCTRL_ACPUHPMBYPASS_UNION */
#define SOC_PMCTRL_ACPUHPMBYPASS_ADDR(base)           ((base) + (0x33C))

/* �Ĵ���˵����ACPU��ѹ�����ȶ�ʱ��Ĵ���
   λ����UNION�ṹ:  SOC_PMCTRL_ACPUPMUVOLUPTIME_UNION */
#define SOC_PMCTRL_ACPUPMUVOLUPTIME_ADDR(base)        ((base) + (0x360))

/* �Ĵ���˵����ACPU��ѹ�½��ȶ�ʱ��Ĵ���
   λ����UNION�ṹ:  SOC_PMCTRL_ACPUPMUVOLDNTIME_UNION */
#define SOC_PMCTRL_ACPUPMUVOLDNTIME_ADDR(base)        ((base) + (0x364))

/* �Ĵ���˵����ACPU��ѹ���õ�ַ�Ĵ���
   λ����UNION�ṹ:  SOC_PMCTRL_ACPUVOLPMUADDR_UNION */
#define SOC_PMCTRL_ACPUVOLPMUADDR_ADDR(base)          ((base) + (0x368))

/* �Ĵ���˵����ACPU��ѹ���������Ĵ���
   λ����UNION�ṹ:  SOC_PMCTRL_ACPUVOLUPSTEP_UNION */
#define SOC_PMCTRL_ACPUVOLUPSTEP_ADDR(base)           ((base) + (0x36C))

/* �Ĵ���˵����ACPU��ѹ���Ͳ����Ĵ���
   λ����UNION�ṹ:  SOC_PMCTRL_ACPUVOLDNSTEP_UNION */
#define SOC_PMCTRL_ACPUVOLDNSTEP_ADDR(base)           ((base) + (0x370))

/* �Ĵ���˵����ACPUĬ�ϵ�ѹ���üĴ���
   λ����UNION�ṹ:  SOC_PMCTRL_ACPUDFTVOL_UNION */
#define SOC_PMCTRL_ACPUDFTVOL_ADDR(base)              ((base) + (0x374))

/* �Ĵ���˵����ACPUĿ���ѹ���üĴ���
   λ����UNION�ṹ:  SOC_PMCTRL_ACPUDESTVOL_UNION */
#define SOC_PMCTRL_ACPUDESTVOL_ADDR(base)             ((base) + (0x378))

/* �Ĵ���˵����ACPU��ѹ�ȶ�ָʾ�Ĵ���
   λ����UNION�ṹ:  SOC_PMCTRL_ACPUVOLTIMEOUT_UNION */
#define SOC_PMCTRL_ACPUVOLTIMEOUT_ADDR(base)          ((base) + (0x37C))

/* �Ĵ���˵�������ռ��HPM���ƼĴ���
   λ����UNION�ṹ:  SOC_PMCTRL_PDHPMCTRL_UNION */
#define SOC_PMCTRL_PDHPMCTRL_ADDR(base)               ((base) + (0x380))

/* �Ĵ���˵�������ռ��HPM OPC��Ч�Ĵ���
   λ����UNION�ṹ:  SOC_PMCTRL_PDHPMOPCVALID_UNION */
#define SOC_PMCTRL_PDHPMOPCVALID_ADDR(base)           ((base) + (0x394))

/* �Ĵ���˵�������ռ��HPM OPC�Ĵ���0
   λ����UNION�ṹ:  SOC_PMCTRL_PDHPMOPC0_UNION */
#define SOC_PMCTRL_PDHPMOPC0_ADDR(base)               ((base) + (0x398))

/* �Ĵ���˵�������ռ��HPM OPC�Ĵ���1
   λ����UNION�ṹ:  SOC_PMCTRL_PDHPMOPC1_UNION */
#define SOC_PMCTRL_PDHPMOPC1_ADDR(base)               ((base) + (0x39C))

/* �Ĵ���˵�������ռ��HPM PC�Ĵ���0
   λ����UNION�ṹ:  SOC_PMCTRL_PDHPMPC0_UNION */
#define SOC_PMCTRL_PDHPMPC0_ADDR(base)                ((base) + (0x3A8))

/* �Ĵ���˵�������ռ��HPM PC�Ĵ���1
   λ����UNION�ṹ:  SOC_PMCTRL_PDHPMPC1_UNION */
#define SOC_PMCTRL_PDHPMPC1_ADDR(base)                ((base) + (0x3AC))

/* �Ĵ���˵�������ռ���������Ĵ���
   λ����UNION�ṹ:  SOC_PMCTRL_PDHPMPC_UNION */
#define SOC_PMCTRL_PDHPMPC_ADDR(base)                 ((base) + (0x3B0))

/* �Ĵ���˵����PMC�ж�ԭʼ״̬�Ĵ���
   λ����UNION�ṹ:  SOC_PMCTRL_PMCINTRAW_UNION */
#define SOC_PMCTRL_PMCINTRAW_ADDR(base)               ((base) + (0x480))

/* �Ĵ���˵����PMC�ж�����Ĵ���
   λ����UNION�ṹ:  SOC_PMCTRL_PMCINTCLR_UNION */
#define SOC_PMCTRL_PMCINTCLR_ADDR(base)               ((base) + (0x484))

/* �Ĵ���˵����PMC��MCU�жϵ�����Ĵ���
   λ����UNION�ṹ:  SOC_PMCTRL_PMCINTENMCU_UNION */
#define SOC_PMCTRL_PMCINTENMCU_ADDR(base)             ((base) + (0x488))

/* �Ĵ���˵����PMC��MCU�жϵ������״̬�Ĵ���
   λ����UNION�ṹ:  SOC_PMCTRL_PMCINTSTATMCU_UNION */
#define SOC_PMCTRL_PMCINTSTATMCU_ADDR(base)           ((base) + (0x48C))

/* �Ĵ���˵����PMC��ACPU�жϵ�����Ĵ���
   λ����UNION�ṹ:  SOC_PMCTRL_PMCINTENACPU_UNION */
#define SOC_PMCTRL_PMCINTENACPU_ADDR(base)            ((base) + (0x490))

/* �Ĵ���˵����PMC��ACPU�жϵ������״̬�Ĵ���
   λ����UNION�ṹ:  SOC_PMCTRL_PMCINTSTATACPU_UNION */
#define SOC_PMCTRL_PMCINTSTATACPU_ADDR(base)          ((base) + (0x494))

/* �Ĵ���˵����PMC��MCPU�жϵ�����Ĵ���
   λ����UNION�ṹ:  SOC_PMCTRL_PMCINTENMCPU_UNION */
#define SOC_PMCTRL_PMCINTENMCPU_ADDR(base)            ((base) + (0x498))

/* �Ĵ���˵����PMC��MCPU�жϵ������״̬�Ĵ���
   λ����UNION�ṹ:  SOC_PMCTRL_PMCINTSTATMCPU_UNION */
#define SOC_PMCTRL_PMCINTSTATMCPU_ADDR(base)          ((base) + (0x49C))

/* �Ĵ���˵����PMC״̬�Ĵ���
   λ����UNION�ṹ:  SOC_PMCTRL_PMCSTATUS_UNION */
#define SOC_PMCTRL_PMCSTATUS_ADDR(base)               ((base) + (0x4A0))

/* �Ĵ���˵����DDRCʱ��ѡ��Ĵ���
   λ����UNION�ṹ:  SOC_PMCTRL_DDRCLKSEL_UNION */
#define SOC_PMCTRL_DDRCLKSEL_ADDR(base)               ((base) + (0x580))

/* �Ĵ���˵����DDRC LP���ƼĴ���
   λ����UNION�ṹ:  SOC_PMCTRL_DDRLPCTRL_UNION */
#define SOC_PMCTRL_DDRLPCTRL_ADDR(base)               ((base) + (0x588))

/* �Ĵ���˵����DDRC DFSʱ��ģʽ�Ĵ���
   λ����UNION�ṹ:  SOC_PMCTRL_DDRCCLKOFFCFG_UNION */
#define SOC_PMCTRL_DDRCCLKOFFCFG_ADDR(base)           ((base) + (0x590))

/* �Ĵ���˵����DDR DFSʱ�ӷ�Ƶ״̬�Ĵ���
   λ����UNION�ṹ:  SOC_PMCTRL_DDRCLKDIVSTAT_UNION */
#define SOC_PMCTRL_DDRCLKDIVSTAT_ADDR(base)           ((base) + (0x594))

/* �Ĵ���˵����DDR PLL�л�ʹ�ܼĴ���
   λ����UNION�ṹ:  SOC_PMCTRL_DDRPLLSWEN_UNION */
#define SOC_PMCTRL_DDRPLLSWEN_ADDR(base)              ((base) + (0x598))

/* �Ĵ���˵����DDR DFSʹ�ܼĴ���
   λ����UNION�ṹ:  SOC_PMCTRL_DDRDFSEN_UNION */
#define SOC_PMCTRL_DDRDFSEN_ADDR(base)                ((base) + (0x59C))

/* �Ĵ���˵����DDRPHYʱ�ӷ�Ƶ��ʱ�Ĵ���
   λ����UNION�ṹ:  SOC_PMCTRL_DDRDIVTIMEOUT_UNION */
#define SOC_PMCTRL_DDRDIVTIMEOUT_ADDR(base)           ((base) + (0x5A4))

/* �Ĵ���˵����DDR DFSʱ�ӷ�Ƶ���üĴ���
   λ����UNION�ṹ:  SOC_PMCTRL_DDRCLKDIVCFG_UNION */
#define SOC_PMCTRL_DDRCLKDIVCFG_ADDR(base)            ((base) + (0x5A8))

/* �Ĵ���˵����DDR DFSʱ�ӷ�Ƶprofile�Ĵ���
   λ����UNION�ṹ:  SOC_PMCTRL_DDRCLKPROFILE_UNION */
#define SOC_PMCTRL_DDRCLKPROFILE_ADDR(base)           ((base) + (0x5AC))

/* �Ĵ���˵����ACPU HPM����ʹ�ܼĴ���
   λ����UNION�ṹ:  SOC_PMCTRL_ACPUHPMMASKEN_UNION */
#define SOC_PMCTRL_ACPUHPMMASKEN_ADDR(base)           ((base) + (0xC00))

/* �Ĵ���˵����ACPU HPM����ȥʹ�ܼĴ���
   λ����UNION�ṹ:  SOC_PMCTRL_ACPUHPMMASKDIS_UNION */
#define SOC_PMCTRL_ACPUHPMMASKDIS_ADDR(base)          ((base) + (0xC04))

/* �Ĵ���˵����ACPU HPM����״̬�Ĵ���
   λ����UNION�ṹ:  SOC_PMCTRL_ACPUHPMMASKSTAT_UNION */
#define SOC_PMCTRL_ACPUHPMMASKSTAT_ADDR(base)         ((base) + (0xC08))

/* �Ĵ���˵�������ռ�� HPM����ʹ�ܼĴ���
   λ����UNION�ṹ:  SOC_PMCTRL_PDHPMMASKEN_UNION */
#define SOC_PMCTRL_PDHPMMASKEN_ADDR(base)             ((base) + (0xC10))

/* �Ĵ���˵�������ռ�� HPM����ȥʹ�ܼĴ���
   λ����UNION�ṹ:  SOC_PMCTRL_PDHPMMASKDIS_UNION */
#define SOC_PMCTRL_PDHPMMASKDIS_ADDR(base)            ((base) + (0xC14))

/* �Ĵ���˵�������ռ�� HPM����״̬�Ĵ���
   λ����UNION�ṹ:  SOC_PMCTRL_PDHPMMASKSTAT_UNION */
#define SOC_PMCTRL_PDHPMMASKSTAT_ADDR(base)           ((base) + (0xC18))

/* �Ĵ���˵����MEDPLL�����Ĵ���1
   λ����UNION�ṹ:  SOC_PMCTRL_MEDPLLRESERVED1_UNION */
#define SOC_PMCTRL_MEDPLLRESERVED1_ADDR(base)         ((base) + (0x904))

/* �Ĵ���˵����ACPUPLL�����Ĵ���1
   λ����UNION�ṹ:  SOC_PMCTRL_ACPUPLLRESERVED1_UNION */
#define SOC_PMCTRL_ACPUPLLRESERVED1_ADDR(base)        ((base) + (0x908))

/* �Ĵ���˵����GPUPLL�����Ĵ���1
   λ����UNION�ṹ:  SOC_PMCTRL_GPUPLLRESERVED1_UNION */
#define SOC_PMCTRL_GPUPLLRESERVED1_ADDR(base)         ((base) + (0x90C))





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
                     (1/1) register_define
 ****************************************************************************/
/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_ACPUPLLCTRL_UNION
 �ṹ˵��  : ACPUPLLCTRL �Ĵ����ṹ���塣��ַƫ����:0x000����ֵ:0x20007800�����:32
 �Ĵ���˵��: ACPU PLL���ƼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  acpupll_en_cfg  : 1;  /* bit[0-0]  : �������PLLʹ�ܡ�
                                                           1'b1��ʹ�ܣ�
                                                           1'b0���رա� */
        unsigned int  reserved_0      : 1;  /* bit[1-1]  : ���� */
        unsigned int  acpupll_rst     : 1;  /* bit[2-2]  : PLL RST����Ϊ��λ̬�� */
        unsigned int  reserved_1      : 1;  /* bit[3-3]  : ���� */
        unsigned int  acpupll_time    : 24; /* bit[4-27] : PLL�ȶ�ʱ�䣬����ʱ��Ϊ19.2M��Ĭ��Ϊ100us�� */
        unsigned int  acpupll_timeout : 1;  /* bit[28-28]: PLL�ȶ���ʱ��ʱ�� */
        unsigned int  acpupll_lock    : 1;  /* bit[29-29]: PLL����ָʾ��Ч�� */
        unsigned int  reserved_2      : 2;  /* bit[30-31]: ���� */
    } reg;
} SOC_PMCTRL_ACPUPLLCTRL_UNION;
#endif
#define SOC_PMCTRL_ACPUPLLCTRL_acpupll_en_cfg_START   (0)
#define SOC_PMCTRL_ACPUPLLCTRL_acpupll_en_cfg_END     (0)
#define SOC_PMCTRL_ACPUPLLCTRL_acpupll_rst_START      (2)
#define SOC_PMCTRL_ACPUPLLCTRL_acpupll_rst_END        (2)
#define SOC_PMCTRL_ACPUPLLCTRL_acpupll_time_START     (4)
#define SOC_PMCTRL_ACPUPLLCTRL_acpupll_time_END       (27)
#define SOC_PMCTRL_ACPUPLLCTRL_acpupll_timeout_START  (28)
#define SOC_PMCTRL_ACPUPLLCTRL_acpupll_timeout_END    (28)
#define SOC_PMCTRL_ACPUPLLCTRL_acpupll_lock_START     (29)
#define SOC_PMCTRL_ACPUPLLCTRL_acpupll_lock_END       (29)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_ACPUPLLFREQ_UNION
 �ṹ˵��  : ACPUPLLFREQ �Ĵ����ṹ���塣��ַƫ����:0x004����ֵ:0x000061E5�����:32
 �Ĵ���˵��: ACPU PLLƵ�ʼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  acpupll_freq_cfg : 32; /* bit[0-31]: [31:18] reserved
                                                           [17:12]��PLL���Ƶ����postdiv1��
                                                           [11:10]��reserved��
                                                           [9:4]��PLL FB programmable counter
                                                           [3:0]��PLL FB swallow counter��
                                                           PLL���ù�ʽ��Լ����PLLout Clock=Cref*(2*P[5:0]+S[3:0])/POSTDIV[5:0];
                                                           Լ����800Mhz <=Cref*(2*P[5:0]+S[3:0])<=2000Mhz */
    } reg;
} SOC_PMCTRL_ACPUPLLFREQ_UNION;
#endif
#define SOC_PMCTRL_ACPUPLLFREQ_acpupll_freq_cfg_START  (0)
#define SOC_PMCTRL_ACPUPLLFREQ_acpupll_freq_cfg_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_GPUPLLCTRL_UNION
 �ṹ˵��  : GPUPLLCTRL �Ĵ����ṹ���塣��ַƫ����:0x008����ֵ:0x20007800�����:32
 �Ĵ���˵��: GPU PLL���ƼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  gpupll_en      : 1;  /* bit[0-0]  : �������PLLʹ�ܡ�
                                                          1'b1��ʹ�ܣ�
                                                          1'b0���رա� */
        unsigned int  reserved_0     : 1;  /* bit[1-1]  : ���� */
        unsigned int  gpupll_rst     : 1;  /* bit[2-2]  : PLL RST����Ϊ��λ̬�� */
        unsigned int  reserved_1     : 1;  /* bit[3-3]  : ���� */
        unsigned int  gpupll_time    : 24; /* bit[4-27] : PLL�ȶ�ʱ�䣬����ʱ��Ϊ19.2M��Ĭ��Ϊ100us�� */
        unsigned int  gpupll_timeout : 1;  /* bit[28-28]: PLL�ȶ���ʱ��ʱ�� */
        unsigned int  gpupll_lock    : 1;  /* bit[29-29]: PLL����ָʾ��Ч�� */
        unsigned int  reserved_2     : 2;  /* bit[30-31]: ���� */
    } reg;
} SOC_PMCTRL_GPUPLLCTRL_UNION;
#endif
#define SOC_PMCTRL_GPUPLLCTRL_gpupll_en_START       (0)
#define SOC_PMCTRL_GPUPLLCTRL_gpupll_en_END         (0)
#define SOC_PMCTRL_GPUPLLCTRL_gpupll_rst_START      (2)
#define SOC_PMCTRL_GPUPLLCTRL_gpupll_rst_END        (2)
#define SOC_PMCTRL_GPUPLLCTRL_gpupll_time_START     (4)
#define SOC_PMCTRL_GPUPLLCTRL_gpupll_time_END       (27)
#define SOC_PMCTRL_GPUPLLCTRL_gpupll_timeout_START  (28)
#define SOC_PMCTRL_GPUPLLCTRL_gpupll_timeout_END    (28)
#define SOC_PMCTRL_GPUPLLCTRL_gpupll_lock_START     (29)
#define SOC_PMCTRL_GPUPLLCTRL_gpupll_lock_END       (29)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_GPUPLLFREQ_UNION
 �ṹ˵��  : GPUPLLFREQ �Ĵ����ṹ���塣��ַƫ����:0x00C����ֵ:0x00001192�����:32
 �Ĵ���˵��: GPU PLLƵ�ʼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  gpupll_freq : 32; /* bit[0-31]: [31:18] reserved
                                                      [17:12]��PLL���Ƶ����postdiv1��
                                                      [11:10]��reserved��
                                                      [9:4]��PLL FB programmable counter
                                                      [3:0]��PLL FB swallow counter�� */
    } reg;
} SOC_PMCTRL_GPUPLLFREQ_UNION;
#endif
#define SOC_PMCTRL_GPUPLLFREQ_gpupll_freq_START  (0)
#define SOC_PMCTRL_GPUPLLFREQ_gpupll_freq_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_DDRPLL1CTRL_UNION
 �ṹ˵��  : DDRPLL1CTRL �Ĵ����ṹ���塣��ַƫ����:0x010����ֵ:0x00007800�����:32
 �Ĵ���˵��: DDR PLL1���ƼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ddrpll1_en_cfg  : 1;  /* bit[0-0]  : �������PLLʹ�ܡ�
                                                           1'b1��ʹ�ܣ�
                                                           1'b0���رա� */
        unsigned int  reserved_0      : 2;  /* bit[1-2]  : ���� */
        unsigned int  ddrpll1_en      : 1;  /* bit[3-3]  : PLLʹ��״̬�� */
        unsigned int  ddrpll1_time    : 24; /* bit[4-27] : PLL�ȶ�ʱ�䣬����ʱ��Ϊ19.2M��Ĭ��Ϊ100us�� */
        unsigned int  ddrpll1_timeout : 1;  /* bit[28-28]: PLL�ȶ���ʱ��ʱ�� */
        unsigned int  ddrpll1_lock    : 1;  /* bit[29-29]: PLL����ָʾ��Ч�� */
        unsigned int  reserved_1      : 2;  /* bit[30-31]: ���� */
    } reg;
} SOC_PMCTRL_DDRPLL1CTRL_UNION;
#endif
#define SOC_PMCTRL_DDRPLL1CTRL_ddrpll1_en_cfg_START   (0)
#define SOC_PMCTRL_DDRPLL1CTRL_ddrpll1_en_cfg_END     (0)
#define SOC_PMCTRL_DDRPLL1CTRL_ddrpll1_en_START       (3)
#define SOC_PMCTRL_DDRPLL1CTRL_ddrpll1_en_END         (3)
#define SOC_PMCTRL_DDRPLL1CTRL_ddrpll1_time_START     (4)
#define SOC_PMCTRL_DDRPLL1CTRL_ddrpll1_time_END       (27)
#define SOC_PMCTRL_DDRPLL1CTRL_ddrpll1_timeout_START  (28)
#define SOC_PMCTRL_DDRPLL1CTRL_ddrpll1_timeout_END    (28)
#define SOC_PMCTRL_DDRPLL1CTRL_ddrpll1_lock_START     (29)
#define SOC_PMCTRL_DDRPLL1CTRL_ddrpll1_lock_END       (29)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_DDRPLL1FREQ_UNION
 �ṹ˵��  : DDRPLL1FREQ �Ĵ����ṹ���塣��ַƫ����:0x014����ֵ:0x51101037�����:32
 �Ĵ���˵��: DDR PLL1Ƶ�ʼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ddrpll1_freq : 32; /* bit[0-31]: [31]��PLL ��·���ƣ�����Ч��
                                                       [30]��PLL FOUT4PHASEPD���ƣ�����Ч��
                                                       [29]��PLL FOUTPOSTDIVPD���ơ�����Ч��
                                                       [28]��PLL FOUTVCOPD���ƣ�����Ч��
                                                       [27] reserved
                                                       [26:24]��PLL���Ƶ����postdiv2��
                                                       [23] reserved
                                                       [22:20]��PLL���Ƶ����postdiv1��
                                                       [19:18] reserved
                                                       [17:12]��PLL�����Ƶ���ӣ�
                                                       [11:0]��PLL������Ƶ���ӡ�
                                                       PLL���ù�ʽ��Լ����FOUTPOSTDIV= Cref*��FBDIV+FRAC/2^24��/(REFDIV*POSTDIV1*POSTDIV2)
                                                       Լ����400Mhz<=Cref*��FBDIV+FRAC/2^24��<=1600Mhz */
    } reg;
} SOC_PMCTRL_DDRPLL1FREQ_UNION;
#endif
#define SOC_PMCTRL_DDRPLL1FREQ_ddrpll1_freq_START  (0)
#define SOC_PMCTRL_DDRPLL1FREQ_ddrpll1_freq_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_DDRPLL0ALIAS_UNION
 �ṹ˵��  : DDRPLL0ALIAS �Ĵ����ṹ���塣��ַƫ����:0x018����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRPLL0����Ӱ�ӼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ddrpll0_en_alias : 1;  /* bit[0-0] : DDRPLL0ʹ��Ӱ�ӼĴ�������MMC��Ҫ�򿪸�PLLʱ���ø�Bit��
                                                           1'b1��ʹ�ܣ�
                                                           1'b0���رա� */
        unsigned int  reserved         : 31; /* bit[1-31]: ���� */
    } reg;
} SOC_PMCTRL_DDRPLL0ALIAS_UNION;
#endif
#define SOC_PMCTRL_DDRPLL0ALIAS_ddrpll0_en_alias_START  (0)
#define SOC_PMCTRL_DDRPLL0ALIAS_ddrpll0_en_alias_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_SYSPLLCTRL_UNION
 �ṹ˵��  : SYSPLLCTRL �Ĵ����ṹ���塣��ַƫ����:0x028����ֵ:0x00007800�����:32
 �Ĵ���˵��: SYS PLL���ƼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  syspll_en_cfg  : 1;  /* bit[0-0]  : �������PLLʹ�ܡ�
                                                          1'b1��ʹ�ܣ�
                                                          1'b0���رա� */
        unsigned int  syspll_en_mod  : 1;  /* bit[1-1]  : �������PLLʹ�ܷ�ʽ(Hi6210��Ŀ�üĴ�������������Ϊ0)��
                                                          0����״̬�����ƣ�
                                                          1����������ơ� */
        unsigned int  reserved_0     : 1;  /* bit[2-2]  : ���� */
        unsigned int  syspll_en      : 1;  /* bit[3-3]  : PLLʹ��״̬�� */
        unsigned int  syspll_time    : 24; /* bit[4-27] : PLL�ȶ�ʱ�䣬����ʱ��Ϊ19.2M��Ĭ��Ϊ100us�� */
        unsigned int  syspll_timeout : 1;  /* bit[28-28]: PLL�ȶ���ʱ��ʱ�� */
        unsigned int  syspll_lock    : 1;  /* bit[29-29]: PLL����ָʾ��Ч�� */
        unsigned int  reserved_1     : 2;  /* bit[30-31]: ���� */
    } reg;
} SOC_PMCTRL_SYSPLLCTRL_UNION;
#endif
#define SOC_PMCTRL_SYSPLLCTRL_syspll_en_cfg_START   (0)
#define SOC_PMCTRL_SYSPLLCTRL_syspll_en_cfg_END     (0)
#define SOC_PMCTRL_SYSPLLCTRL_syspll_en_mod_START   (1)
#define SOC_PMCTRL_SYSPLLCTRL_syspll_en_mod_END     (1)
#define SOC_PMCTRL_SYSPLLCTRL_syspll_en_START       (3)
#define SOC_PMCTRL_SYSPLLCTRL_syspll_en_END         (3)
#define SOC_PMCTRL_SYSPLLCTRL_syspll_time_START     (4)
#define SOC_PMCTRL_SYSPLLCTRL_syspll_time_END       (27)
#define SOC_PMCTRL_SYSPLLCTRL_syspll_timeout_START  (28)
#define SOC_PMCTRL_SYSPLLCTRL_syspll_timeout_END    (28)
#define SOC_PMCTRL_SYSPLLCTRL_syspll_lock_START     (29)
#define SOC_PMCTRL_SYSPLLCTRL_syspll_lock_END       (29)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_SYSPLLFREQ_UNION
 �ṹ˵��  : SYSPLLFREQ �Ĵ����ṹ���塣��ַƫ����:0x02C����ֵ:0x5110103E�����:32
 �Ĵ���˵��: SYS PLLƵ�ʼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  syspll_freq : 32; /* bit[0-31]: [31]��PLL ��·���ƣ�����Ч��
                                                      [30]��PLL FOUT4PHASEPD���ƣ�����Ч��
                                                      [29]��PLL FOUTPOSTDIVPD���ơ�����Ч��
                                                      [28]��PLL FOUTVCOPD���ƣ�����Ч��
                                                      [27] reserved
                                                      [26:24]��PLL���Ƶ����postdiv2��
                                                      [23] reserved
                                                      [22:20]��PLL���Ƶ����postdiv1��
                                                      [19:18] reserved
                                                      [17:12]��PLL�����Ƶ���ӣ�
                                                      [11:0]��PLL������Ƶ���ӡ� */
    } reg;
} SOC_PMCTRL_SYSPLLFREQ_UNION;
#endif
#define SOC_PMCTRL_SYSPLLFREQ_syspll_freq_START  (0)
#define SOC_PMCTRL_SYSPLLFREQ_syspll_freq_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_DDRPLL0CTRL_UNION
 �ṹ˵��  : DDRPLL0CTRL �Ĵ����ṹ���塣��ַƫ����:0x030����ֵ:0x00007800�����:32
 �Ĵ���˵��: DDR PLL0���ƼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ddrpll0_en_cfg  : 1;  /* bit[0-0]  : �������PLLʹ�ܡ���DDR DFSҪʹ�ô�PLLʱ�򿪴�bit��
                                                           1'b1��ʹ�ܣ�
                                                           1'b0���رա� */
        unsigned int  reserved_0      : 2;  /* bit[1-2]  : ���� */
        unsigned int  ddrpll0_en      : 1;  /* bit[3-3]  : PLLʹ��״̬�� */
        unsigned int  ddrpll0_time    : 24; /* bit[4-27] : PLL�ȶ�ʱ�䣬����ʱ��Ϊ19.2M��Ĭ��Ϊ100us�� */
        unsigned int  ddrpll0_timeout : 1;  /* bit[28-28]: PLL�ȶ���ʱ��ʱ�� */
        unsigned int  ddrpll0_lock    : 1;  /* bit[29-29]: PLL����ָʾ��Ч�� */
        unsigned int  reserved_1      : 2;  /* bit[30-31]: ���� */
    } reg;
} SOC_PMCTRL_DDRPLL0CTRL_UNION;
#endif
#define SOC_PMCTRL_DDRPLL0CTRL_ddrpll0_en_cfg_START   (0)
#define SOC_PMCTRL_DDRPLL0CTRL_ddrpll0_en_cfg_END     (0)
#define SOC_PMCTRL_DDRPLL0CTRL_ddrpll0_en_START       (3)
#define SOC_PMCTRL_DDRPLL0CTRL_ddrpll0_en_END         (3)
#define SOC_PMCTRL_DDRPLL0CTRL_ddrpll0_time_START     (4)
#define SOC_PMCTRL_DDRPLL0CTRL_ddrpll0_time_END       (27)
#define SOC_PMCTRL_DDRPLL0CTRL_ddrpll0_timeout_START  (28)
#define SOC_PMCTRL_DDRPLL0CTRL_ddrpll0_timeout_END    (28)
#define SOC_PMCTRL_DDRPLL0CTRL_ddrpll0_lock_START     (29)
#define SOC_PMCTRL_DDRPLL0CTRL_ddrpll0_lock_END       (29)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_DDRPLL0FREQ_UNION
 �ṹ˵��  : DDRPLL0FREQ �Ĵ����ṹ���塣��ַƫ����:0x034����ֵ:0x51101053�����:32
 �Ĵ���˵��: DDR PLL0Ƶ�ʼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ddrpll0_freq : 32; /* bit[0-31]: [31]��PLL ��·���ƣ�����Ч��
                                                       [30]��PLL FOUT4PHASEPD���ƣ�����Ч��
                                                       [29]��PLL FOUTPOSTDIVPD���ơ�����Ч��
                                                       [28]��PLL FOUTVCOPD���ƣ�����Ч��
                                                       [27] reserved
                                                       [26:24]��PLL���Ƶ����postdiv2��
                                                       [23] reserved
                                                       [22:20]��PLL���Ƶ����postdiv1��
                                                       [19:18] reserved
                                                       [17:12]��PLL�����Ƶ���ӣ�
                                                       [11:0]��PLL������Ƶ���ӡ� */
    } reg;
} SOC_PMCTRL_DDRPLL0FREQ_UNION;
#endif
#define SOC_PMCTRL_DDRPLL0FREQ_ddrpll0_freq_START  (0)
#define SOC_PMCTRL_DDRPLL0FREQ_ddrpll0_freq_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_MEDPLLCTRL_UNION
 �ṹ˵��  : MEDPLLCTRL �Ĵ����ṹ���塣��ַƫ����:0x038����ֵ:0x20007800�����:32
 �Ĵ���˵��: MED PLL���ƼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  medpll_en_cfg  : 1;  /* bit[0-0]  : �������PLLʹ�ܡ���ACPU��Ҫ�򿪸�PLLʱ���ø�Bit
                                                          1'b1��ʹ�ܣ�
                                                          1'b0���رա� */
        unsigned int  reserved_0     : 1;  /* bit[1-1]  : ���� */
        unsigned int  medpll_rst     : 1;  /* bit[2-2]  : PLL RST����Ϊ��λ̬�� */
        unsigned int  medpll_en      : 1;  /* bit[3-3]  : PLLʹ��״̬λ�� */
        unsigned int  medpll_time    : 24; /* bit[4-27] : PLL�ȶ�ʱ�䣬����ʱ��Ϊ19.2M��Ĭ��Ϊ100us�� */
        unsigned int  medpll_timeout : 1;  /* bit[28-28]: PLL�ȶ���ʱ��ʱ�� */
        unsigned int  medpll_lock    : 1;  /* bit[29-29]: PLL����ָʾ��Ч�� */
        unsigned int  reserved_1     : 2;  /* bit[30-31]: ���� */
    } reg;
} SOC_PMCTRL_MEDPLLCTRL_UNION;
#endif
#define SOC_PMCTRL_MEDPLLCTRL_medpll_en_cfg_START   (0)
#define SOC_PMCTRL_MEDPLLCTRL_medpll_en_cfg_END     (0)
#define SOC_PMCTRL_MEDPLLCTRL_medpll_rst_START      (2)
#define SOC_PMCTRL_MEDPLLCTRL_medpll_rst_END        (2)
#define SOC_PMCTRL_MEDPLLCTRL_medpll_en_START       (3)
#define SOC_PMCTRL_MEDPLLCTRL_medpll_en_END         (3)
#define SOC_PMCTRL_MEDPLLCTRL_medpll_time_START     (4)
#define SOC_PMCTRL_MEDPLLCTRL_medpll_time_END       (27)
#define SOC_PMCTRL_MEDPLLCTRL_medpll_timeout_START  (28)
#define SOC_PMCTRL_MEDPLLCTRL_medpll_timeout_END    (28)
#define SOC_PMCTRL_MEDPLLCTRL_medpll_lock_START     (29)
#define SOC_PMCTRL_MEDPLLCTRL_medpll_lock_END       (29)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_MEDPLLFREQ_UNION
 �ṹ˵��  : MEDPLLFREQ �Ĵ����ṹ���塣��ַƫ����:0x03C����ֵ:0x00001251�����:32
 �Ĵ���˵��: MED PLLƵ�ʼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  medpll_freq : 32; /* bit[0-31]: [31:18] reserved
                                                      [17:12]��PLL���Ƶ����postdiv1��
                                                      [11:10]��reserved��
                                                      [9:4]��PLL FB programmable counter
                                                      [3:0]��PLL FB swallow counter�� */
    } reg;
} SOC_PMCTRL_MEDPLLFREQ_UNION;
#endif
#define SOC_PMCTRL_MEDPLLFREQ_medpll_freq_START  (0)
#define SOC_PMCTRL_MEDPLLFREQ_medpll_freq_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_MEDPLLALIAS_UNION
 �ṹ˵��  : MEDPLLALIAS �Ĵ����ṹ���塣��ַƫ����:0x040����ֵ:0x00000000�����:32
 �Ĵ���˵��: MEDPLL����Ӱ�ӼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  medpll_en_alias : 1;  /* bit[0-0] : MED PLLʹ��Ӱ�ӼĴ�������CCPU��Ҫ�򿪸�PLLʱ���ø�Bit��
                                                          1'b1��ʹ�ܣ�
                                                          1'b0���رա� */
        unsigned int  reserved        : 31; /* bit[1-31]: ���� */
    } reg;
} SOC_PMCTRL_MEDPLLALIAS_UNION;
#endif
#define SOC_PMCTRL_MEDPLLALIAS_medpll_en_alias_START  (0)
#define SOC_PMCTRL_MEDPLLALIAS_medpll_en_alias_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_BBPPLLALIAS_UNION
 �ṹ˵��  : BBPPLLALIAS �Ĵ����ṹ���塣��ַƫ����:0x048����ֵ:0x00000000�����:32
 �Ĵ���˵��: BBPPLL����Ӱ�ӼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  bbppll_en_alias : 1;  /* bit[0-0] : BBP PLLʹ��Ӱ�ӼĴ�������ACPU��Ҫ�򿪸�PLLʱ���ø�Bit��
                                                          1'b1��ʹ�ܣ�
                                                          1'b0���رա� */
        unsigned int  reserved        : 31; /* bit[1-31]: ���� */
    } reg;
} SOC_PMCTRL_BBPPLLALIAS_UNION;
#endif
#define SOC_PMCTRL_BBPPLLALIAS_bbppll_en_alias_START  (0)
#define SOC_PMCTRL_BBPPLLALIAS_bbppll_en_alias_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_DDRPLL0CFGEN_UNION
 �ṹ˵��  : DDRPLL0CFGEN �Ĵ����ṹ���塣��ַƫ����:0x04C����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRPLL0����ʹ�ܼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ddrpll0_cfg_en : 1;  /* bit[0-0] : DDR PLL0��������ʹ�ܼĴ����������������ddrpll0_freq�������øüĴ���Ϊ1��Ӳ�����ݴ��źž�����ddrpll0_freq��ʱ�䡣��ʼ��Ϊ0�� */
        unsigned int  reserved       : 31; /* bit[1-31]: ���� */
    } reg;
} SOC_PMCTRL_DDRPLL0CFGEN_UNION;
#endif
#define SOC_PMCTRL_DDRPLL0CFGEN_ddrpll0_cfg_en_START  (0)
#define SOC_PMCTRL_DDRPLL0CFGEN_ddrpll0_cfg_en_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_SYSPLLFRAC_UNION
 �ṹ˵��  : SYSPLLFRAC �Ĵ����ṹ���塣��ַƫ����:0x050����ֵ:0x08000005�����:32
 �Ĵ���˵��: SYS PLLС����Ƶ�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sys_frac : 29; /* bit[0-28] : [28]��DSMPD��
                                                    [27:4]��FRAC��
                                                    [3:0]��DIVVAL����ֵ����������Ϊ0x0����0x1�� */
        unsigned int  reserved : 3;  /* bit[29-31]: ���� */
    } reg;
} SOC_PMCTRL_SYSPLLFRAC_UNION;
#endif
#define SOC_PMCTRL_SYSPLLFRAC_sys_frac_START  (0)
#define SOC_PMCTRL_SYSPLLFRAC_sys_frac_END    (28)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_SYSPLLSSC_UNION
 �ṹ˵��  : SYSPLLSSC �Ĵ����ṹ���塣��ַƫ����:0x054����ֵ:0x00000010�����:32
 �Ĵ���˵��: SYS PLL��Ƶ���ƼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sys_ssc  : 6;  /* bit[0-5] : [5]��RESET��
                                                   [4]��DISABLE_SSCG��
                                                   [3]��DOWNSPREAD��
                                                   [2:0]��SPREAD�� */
        unsigned int  reserved : 26; /* bit[6-31]: ���� */
    } reg;
} SOC_PMCTRL_SYSPLLSSC_UNION;
#endif
#define SOC_PMCTRL_SYSPLLSSC_sys_ssc_START   (0)
#define SOC_PMCTRL_SYSPLLSSC_sys_ssc_END     (5)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_DDRPLL0FRAC_UNION
 �ṹ˵��  : DDRPLL0FRAC �Ĵ����ṹ���塣��ַƫ����:0x058����ֵ:0x05555555�����:32
 �Ĵ���˵��: DDR PLL0С����Ƶ�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ddrpll0_frac : 29; /* bit[0-28] : [28]��DSMPD��
                                                        [27:4]��FRAC��
                                                        [3:0]��DIVVAL����ֵ����������Ϊ0x0����0x1�� */
        unsigned int  reserved     : 3;  /* bit[29-31]: ���� */
    } reg;
} SOC_PMCTRL_DDRPLL0FRAC_UNION;
#endif
#define SOC_PMCTRL_DDRPLL0FRAC_ddrpll0_frac_START  (0)
#define SOC_PMCTRL_DDRPLL0FRAC_ddrpll0_frac_END    (28)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_DDRPLL0SSC_UNION
 �ṹ˵��  : DDRPLL0SSC �Ĵ����ṹ���塣��ַƫ����:0x05C����ֵ:0x00000010�����:32
 �Ĵ���˵��: DDR PLL0��Ƶ���ƼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ddrpll0_ssc : 6;  /* bit[0-5] : [5]��RESET��
                                                      [4]��DISABLE_SSCG��
                                                      [3]��DOWNSPREAD��
                                                      [2:0]��SPREAD�� */
        unsigned int  reserved    : 26; /* bit[6-31]: ���� */
    } reg;
} SOC_PMCTRL_DDRPLL0SSC_UNION;
#endif
#define SOC_PMCTRL_DDRPLL0SSC_ddrpll0_ssc_START  (0)
#define SOC_PMCTRL_DDRPLL0SSC_ddrpll0_ssc_END    (5)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_DDRPLL1FRAC_UNION
 �ṹ˵��  : DDRPLL1FRAC �Ĵ����ṹ���塣��ַƫ����:0x074����ֵ:0x08555555�����:32
 �Ĵ���˵��: DDR PLL1С����Ƶ�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ddrpll1_frac : 29; /* bit[0-28] : [28]��DSMPD��
                                                        [27:4]��FRAC��
                                                        [3:0]��DIVVAL����ֵ����������Ϊ0x0����0x1�� */
        unsigned int  reserved     : 3;  /* bit[29-31]: ���� */
    } reg;
} SOC_PMCTRL_DDRPLL1FRAC_UNION;
#endif
#define SOC_PMCTRL_DDRPLL1FRAC_ddrpll1_frac_START  (0)
#define SOC_PMCTRL_DDRPLL1FRAC_ddrpll1_frac_END    (28)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_DDRPLL1SSC_UNION
 �ṹ˵��  : DDRPLL1SSC �Ĵ����ṹ���塣��ַƫ����:0x078����ֵ:0x00000010�����:32
 �Ĵ���˵��: DDR PLL1��Ƶ���ƼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ddrpll1_ssc : 6;  /* bit[0-5] : [5]��RESET��
                                                      [4]��DISABLE_SSCG��
                                                      [3]��DOWNSPREAD��
                                                      [2:0]��SPREAD�� */
        unsigned int  reserved    : 26; /* bit[6-31]: ���� */
    } reg;
} SOC_PMCTRL_DDRPLL1SSC_UNION;
#endif
#define SOC_PMCTRL_DDRPLL1SSC_ddrpll1_ssc_START  (0)
#define SOC_PMCTRL_DDRPLL1SSC_ddrpll1_ssc_END    (5)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_CLKCFG4BIT0_UNION
 �ṹ˵��  : CLKCFG4BIT0 �Ĵ����ṹ���塣��ַƫ����:0x080����ֵ:0x00000000�����:32
 �Ĵ���˵��: ʱ�Ӳ������üĴ���0
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  clk_4bit_cfg0_value0 : 3;  /* bit[0-2]  : ʱ�Ӳ��������� */
        unsigned int  clk_4bit_cfg0_vld0   : 1;  /* bit[3-3]  : ʱ�Ӳ�����Чָʾ�� */
        unsigned int  clk_4bit_cfg0_value1 : 3;  /* bit[4-6]  : ʱ�Ӳ��������� */
        unsigned int  clk_4bit_cfg0_vld1   : 1;  /* bit[7-7]  : ʱ�Ӳ�����Чָʾ�� */
        unsigned int  clk_4bit_cfg0_value2 : 3;  /* bit[8-10] : ʱ�Ӳ��������� */
        unsigned int  clk_4bit_cfg0_vld2   : 1;  /* bit[11-11]: ʱ�Ӳ�����Чָʾ�� */
        unsigned int  clk_4bit_cfg0_value3 : 3;  /* bit[12-14]: ʱ�Ӳ��������� */
        unsigned int  clk_4bit_cfg0_vld3   : 1;  /* bit[15-15]: ʱ�Ӳ�����Чָʾ�� */
        unsigned int  clk_4bit_cfg0_value4 : 3;  /* bit[16-18]: ʱ�Ӳ��������� */
        unsigned int  clk_4bit_cfg0_vld4   : 1;  /* bit[19-19]: ʱ�Ӳ�����Чָʾ�� */
        unsigned int  clk_4bit_cfg0_value5 : 3;  /* bit[20-22]: ʱ�Ӳ��������� */
        unsigned int  clk_4bit_cfg0_vld5   : 1;  /* bit[23-23]: ʱ�Ӳ�����Чָʾ�� */
        unsigned int  clk_4bit_cfg0_value6 : 3;  /* bit[24-26]: ʱ�Ӳ����������� */
        unsigned int  clk_4bit_cfg0_vld6   : 1;  /* bit[27-27]: ʱ�Ӳ�����Чָʾ�� */
        unsigned int  clk_4bit_cfg0_value7 : 3;  /* bit[28-30]: ʱ�Ӳ����������� */
        unsigned int  clk_4bit_cfg0_vld7   : 1;  /* bit[31-31]: ʱ�Ӳ�����Чָʾ�� */
    } reg;
} SOC_PMCTRL_CLKCFG4BIT0_UNION;
#endif
#define SOC_PMCTRL_CLKCFG4BIT0_clk_4bit_cfg0_value0_START  (0)
#define SOC_PMCTRL_CLKCFG4BIT0_clk_4bit_cfg0_value0_END    (2)
#define SOC_PMCTRL_CLKCFG4BIT0_clk_4bit_cfg0_vld0_START    (3)
#define SOC_PMCTRL_CLKCFG4BIT0_clk_4bit_cfg0_vld0_END      (3)
#define SOC_PMCTRL_CLKCFG4BIT0_clk_4bit_cfg0_value1_START  (4)
#define SOC_PMCTRL_CLKCFG4BIT0_clk_4bit_cfg0_value1_END    (6)
#define SOC_PMCTRL_CLKCFG4BIT0_clk_4bit_cfg0_vld1_START    (7)
#define SOC_PMCTRL_CLKCFG4BIT0_clk_4bit_cfg0_vld1_END      (7)
#define SOC_PMCTRL_CLKCFG4BIT0_clk_4bit_cfg0_value2_START  (8)
#define SOC_PMCTRL_CLKCFG4BIT0_clk_4bit_cfg0_value2_END    (10)
#define SOC_PMCTRL_CLKCFG4BIT0_clk_4bit_cfg0_vld2_START    (11)
#define SOC_PMCTRL_CLKCFG4BIT0_clk_4bit_cfg0_vld2_END      (11)
#define SOC_PMCTRL_CLKCFG4BIT0_clk_4bit_cfg0_value3_START  (12)
#define SOC_PMCTRL_CLKCFG4BIT0_clk_4bit_cfg0_value3_END    (14)
#define SOC_PMCTRL_CLKCFG4BIT0_clk_4bit_cfg0_vld3_START    (15)
#define SOC_PMCTRL_CLKCFG4BIT0_clk_4bit_cfg0_vld3_END      (15)
#define SOC_PMCTRL_CLKCFG4BIT0_clk_4bit_cfg0_value4_START  (16)
#define SOC_PMCTRL_CLKCFG4BIT0_clk_4bit_cfg0_value4_END    (18)
#define SOC_PMCTRL_CLKCFG4BIT0_clk_4bit_cfg0_vld4_START    (19)
#define SOC_PMCTRL_CLKCFG4BIT0_clk_4bit_cfg0_vld4_END      (19)
#define SOC_PMCTRL_CLKCFG4BIT0_clk_4bit_cfg0_value5_START  (20)
#define SOC_PMCTRL_CLKCFG4BIT0_clk_4bit_cfg0_value5_END    (22)
#define SOC_PMCTRL_CLKCFG4BIT0_clk_4bit_cfg0_vld5_START    (23)
#define SOC_PMCTRL_CLKCFG4BIT0_clk_4bit_cfg0_vld5_END      (23)
#define SOC_PMCTRL_CLKCFG4BIT0_clk_4bit_cfg0_value6_START  (24)
#define SOC_PMCTRL_CLKCFG4BIT0_clk_4bit_cfg0_value6_END    (26)
#define SOC_PMCTRL_CLKCFG4BIT0_clk_4bit_cfg0_vld6_START    (27)
#define SOC_PMCTRL_CLKCFG4BIT0_clk_4bit_cfg0_vld6_END      (27)
#define SOC_PMCTRL_CLKCFG4BIT0_clk_4bit_cfg0_value7_START  (28)
#define SOC_PMCTRL_CLKCFG4BIT0_clk_4bit_cfg0_value7_END    (30)
#define SOC_PMCTRL_CLKCFG4BIT0_clk_4bit_cfg0_vld7_START    (31)
#define SOC_PMCTRL_CLKCFG4BIT0_clk_4bit_cfg0_vld7_END      (31)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_CLKCFG4BIT1_UNION
 �ṹ˵��  : CLKCFG4BIT1 �Ĵ����ṹ���塣��ַƫ����:0x084����ֵ:0x00000000�����:32
 �Ĵ���˵��: ʱ�Ӳ������üĴ���1
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  clk_4bit_cfg1_value0 : 3;  /* bit[0-2]  : ʱ�Ӳ��������� */
        unsigned int  clk_4bit_cfg1_vld0   : 1;  /* bit[3-3]  : ʱ�Ӳ�����Чָʾ�� */
        unsigned int  clk_4bit_cfg1_value1 : 3;  /* bit[4-6]  : ʱ�Ӳ��������� */
        unsigned int  clk_4bit_cfg1_vld1   : 1;  /* bit[7-7]  : ʱ�Ӳ�����Чָʾ�� */
        unsigned int  clk_4bit_cfg1_value2 : 3;  /* bit[8-10] : ʱ�Ӳ��������� */
        unsigned int  clk_4bit_cfg1_vld2   : 1;  /* bit[11-11]: ʱ�Ӳ�����Чָʾ�� */
        unsigned int  clk_4bit_cfg1_value3 : 3;  /* bit[12-14]: ʱ�Ӳ��������� */
        unsigned int  clk_4bit_cfg1_vld3   : 1;  /* bit[15-15]: ʱ�Ӳ�����Чָʾ�� */
        unsigned int  clk_4bit_cfg1_value4 : 3;  /* bit[16-18]: ʱ�Ӳ��������� */
        unsigned int  clk_4bit_cfg1_vld4   : 1;  /* bit[19-19]: ʱ�Ӳ�����Чָʾ�� */
        unsigned int  clk_4bit_cfg1_value5 : 3;  /* bit[20-22]: ʱ�Ӳ��������� */
        unsigned int  clk_4bit_cfg1_vld5   : 1;  /* bit[23-23]: ʱ�Ӳ�����Чָʾ�� */
        unsigned int  clk_4bit_cfg1_value6 : 3;  /* bit[24-26]: ʱ�Ӳ��������� */
        unsigned int  clk_4bit_cfg1_vld6   : 1;  /* bit[27-27]: ʱ�Ӳ�����Чָʾ�� */
        unsigned int  clk_4bit_cfg1_value7 : 3;  /* bit[28-30]: ʱ�Ӳ��������� */
        unsigned int  clk_4bit_cfg1_vld7   : 1;  /* bit[31-31]: ʱ�Ӳ�����Чָʾ�� */
    } reg;
} SOC_PMCTRL_CLKCFG4BIT1_UNION;
#endif
#define SOC_PMCTRL_CLKCFG4BIT1_clk_4bit_cfg1_value0_START  (0)
#define SOC_PMCTRL_CLKCFG4BIT1_clk_4bit_cfg1_value0_END    (2)
#define SOC_PMCTRL_CLKCFG4BIT1_clk_4bit_cfg1_vld0_START    (3)
#define SOC_PMCTRL_CLKCFG4BIT1_clk_4bit_cfg1_vld0_END      (3)
#define SOC_PMCTRL_CLKCFG4BIT1_clk_4bit_cfg1_value1_START  (4)
#define SOC_PMCTRL_CLKCFG4BIT1_clk_4bit_cfg1_value1_END    (6)
#define SOC_PMCTRL_CLKCFG4BIT1_clk_4bit_cfg1_vld1_START    (7)
#define SOC_PMCTRL_CLKCFG4BIT1_clk_4bit_cfg1_vld1_END      (7)
#define SOC_PMCTRL_CLKCFG4BIT1_clk_4bit_cfg1_value2_START  (8)
#define SOC_PMCTRL_CLKCFG4BIT1_clk_4bit_cfg1_value2_END    (10)
#define SOC_PMCTRL_CLKCFG4BIT1_clk_4bit_cfg1_vld2_START    (11)
#define SOC_PMCTRL_CLKCFG4BIT1_clk_4bit_cfg1_vld2_END      (11)
#define SOC_PMCTRL_CLKCFG4BIT1_clk_4bit_cfg1_value3_START  (12)
#define SOC_PMCTRL_CLKCFG4BIT1_clk_4bit_cfg1_value3_END    (14)
#define SOC_PMCTRL_CLKCFG4BIT1_clk_4bit_cfg1_vld3_START    (15)
#define SOC_PMCTRL_CLKCFG4BIT1_clk_4bit_cfg1_vld3_END      (15)
#define SOC_PMCTRL_CLKCFG4BIT1_clk_4bit_cfg1_value4_START  (16)
#define SOC_PMCTRL_CLKCFG4BIT1_clk_4bit_cfg1_value4_END    (18)
#define SOC_PMCTRL_CLKCFG4BIT1_clk_4bit_cfg1_vld4_START    (19)
#define SOC_PMCTRL_CLKCFG4BIT1_clk_4bit_cfg1_vld4_END      (19)
#define SOC_PMCTRL_CLKCFG4BIT1_clk_4bit_cfg1_value5_START  (20)
#define SOC_PMCTRL_CLKCFG4BIT1_clk_4bit_cfg1_value5_END    (22)
#define SOC_PMCTRL_CLKCFG4BIT1_clk_4bit_cfg1_vld5_START    (23)
#define SOC_PMCTRL_CLKCFG4BIT1_clk_4bit_cfg1_vld5_END      (23)
#define SOC_PMCTRL_CLKCFG4BIT1_clk_4bit_cfg1_value6_START  (24)
#define SOC_PMCTRL_CLKCFG4BIT1_clk_4bit_cfg1_value6_END    (26)
#define SOC_PMCTRL_CLKCFG4BIT1_clk_4bit_cfg1_vld6_START    (27)
#define SOC_PMCTRL_CLKCFG4BIT1_clk_4bit_cfg1_vld6_END      (27)
#define SOC_PMCTRL_CLKCFG4BIT1_clk_4bit_cfg1_value7_START  (28)
#define SOC_PMCTRL_CLKCFG4BIT1_clk_4bit_cfg1_value7_END    (30)
#define SOC_PMCTRL_CLKCFG4BIT1_clk_4bit_cfg1_vld7_START    (31)
#define SOC_PMCTRL_CLKCFG4BIT1_clk_4bit_cfg1_vld7_END      (31)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_CLKCFG4BIT2_UNION
 �ṹ˵��  : CLKCFG4BIT2 �Ĵ����ṹ���塣��ַƫ����:0x088����ֵ:0x00000000�����:32
 �Ĵ���˵��: ʱ�Ӳ������üĴ���2
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  clk_4bit_cfg2_value0 : 3;  /* bit[0-2]  : ʱ�Ӳ��������� */
        unsigned int  clk_4bit_cfg2_vld0   : 1;  /* bit[3-3]  : ʱ�Ӳ�����Чָʾ�� */
        unsigned int  clk_4bit_cfg2_value1 : 3;  /* bit[4-6]  : ʱ�Ӳ��������� */
        unsigned int  clk_4bit_cfg2_vld1   : 1;  /* bit[7-7]  : ʱ�Ӳ�����Чָʾ�� */
        unsigned int  clk_4bit_cfg2_value2 : 3;  /* bit[8-10] : ʱ�Ӳ����������� */
        unsigned int  clk_4bit_cfg2_vld2   : 1;  /* bit[11-11]: ʱ�Ӳ�����Чָʾ�� */
        unsigned int  clk_4bit_cfg2_value3 : 3;  /* bit[12-14]: ʱ�Ӳ����������� */
        unsigned int  clk_4bit_cfg2_vld3   : 1;  /* bit[15-15]: ʱ�Ӳ�����Чָʾ�� */
        unsigned int  clk_4bit_cfg2_value4 : 3;  /* bit[16-18]: ʱ�Ӳ��������� */
        unsigned int  clk_4bit_cfg2_vld4   : 1;  /* bit[19-19]: ʱ�Ӳ�����Чָʾ�� */
        unsigned int  clk_4bit_cfg2_value5 : 3;  /* bit[20-22]: ʱ�Ӳ��������� */
        unsigned int  clk_4bit_cfg2_vld5   : 1;  /* bit[23-23]: ʱ�Ӳ�����Чָʾ�� */
        unsigned int  clk_4bit_cfg2_value6 : 3;  /* bit[24-26]: ʱ�Ӳ����������� */
        unsigned int  clk_4bit_cfg2_vld6   : 1;  /* bit[27-27]: ʱ�Ӳ�����Чָʾ�� */
        unsigned int  clk_4bit_cfg2_value7 : 3;  /* bit[28-30]: ʱ�Ӳ����������� */
        unsigned int  clk_4bit_cfg2_vld7   : 1;  /* bit[31-31]: ʱ�Ӳ�����Чָʾ�� */
    } reg;
} SOC_PMCTRL_CLKCFG4BIT2_UNION;
#endif
#define SOC_PMCTRL_CLKCFG4BIT2_clk_4bit_cfg2_value0_START  (0)
#define SOC_PMCTRL_CLKCFG4BIT2_clk_4bit_cfg2_value0_END    (2)
#define SOC_PMCTRL_CLKCFG4BIT2_clk_4bit_cfg2_vld0_START    (3)
#define SOC_PMCTRL_CLKCFG4BIT2_clk_4bit_cfg2_vld0_END      (3)
#define SOC_PMCTRL_CLKCFG4BIT2_clk_4bit_cfg2_value1_START  (4)
#define SOC_PMCTRL_CLKCFG4BIT2_clk_4bit_cfg2_value1_END    (6)
#define SOC_PMCTRL_CLKCFG4BIT2_clk_4bit_cfg2_vld1_START    (7)
#define SOC_PMCTRL_CLKCFG4BIT2_clk_4bit_cfg2_vld1_END      (7)
#define SOC_PMCTRL_CLKCFG4BIT2_clk_4bit_cfg2_value2_START  (8)
#define SOC_PMCTRL_CLKCFG4BIT2_clk_4bit_cfg2_value2_END    (10)
#define SOC_PMCTRL_CLKCFG4BIT2_clk_4bit_cfg2_vld2_START    (11)
#define SOC_PMCTRL_CLKCFG4BIT2_clk_4bit_cfg2_vld2_END      (11)
#define SOC_PMCTRL_CLKCFG4BIT2_clk_4bit_cfg2_value3_START  (12)
#define SOC_PMCTRL_CLKCFG4BIT2_clk_4bit_cfg2_value3_END    (14)
#define SOC_PMCTRL_CLKCFG4BIT2_clk_4bit_cfg2_vld3_START    (15)
#define SOC_PMCTRL_CLKCFG4BIT2_clk_4bit_cfg2_vld3_END      (15)
#define SOC_PMCTRL_CLKCFG4BIT2_clk_4bit_cfg2_value4_START  (16)
#define SOC_PMCTRL_CLKCFG4BIT2_clk_4bit_cfg2_value4_END    (18)
#define SOC_PMCTRL_CLKCFG4BIT2_clk_4bit_cfg2_vld4_START    (19)
#define SOC_PMCTRL_CLKCFG4BIT2_clk_4bit_cfg2_vld4_END      (19)
#define SOC_PMCTRL_CLKCFG4BIT2_clk_4bit_cfg2_value5_START  (20)
#define SOC_PMCTRL_CLKCFG4BIT2_clk_4bit_cfg2_value5_END    (22)
#define SOC_PMCTRL_CLKCFG4BIT2_clk_4bit_cfg2_vld5_START    (23)
#define SOC_PMCTRL_CLKCFG4BIT2_clk_4bit_cfg2_vld5_END      (23)
#define SOC_PMCTRL_CLKCFG4BIT2_clk_4bit_cfg2_value6_START  (24)
#define SOC_PMCTRL_CLKCFG4BIT2_clk_4bit_cfg2_value6_END    (26)
#define SOC_PMCTRL_CLKCFG4BIT2_clk_4bit_cfg2_vld6_START    (27)
#define SOC_PMCTRL_CLKCFG4BIT2_clk_4bit_cfg2_vld6_END      (27)
#define SOC_PMCTRL_CLKCFG4BIT2_clk_4bit_cfg2_value7_START  (28)
#define SOC_PMCTRL_CLKCFG4BIT2_clk_4bit_cfg2_value7_END    (30)
#define SOC_PMCTRL_CLKCFG4BIT2_clk_4bit_cfg2_vld7_START    (31)
#define SOC_PMCTRL_CLKCFG4BIT2_clk_4bit_cfg2_vld7_END      (31)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_TIMER0CTRL_UNION
 �ṹ˵��  : TIMER0CTRL �Ĵ����ṹ���塣��ַƫ����:0x0C0����ֵ:0x00000000�����:32
 �Ĵ���˵��: TIMER0���ƼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  timer0_en      : 1;  /* bit[0-0]  : ��ʱʹ�ܣ�����Ч�� */
        unsigned int  reserved_0     : 3;  /* bit[1-3]  : ���� */
        unsigned int  timer0_val     : 24; /* bit[4-27] : ��ʱʱ�䣬��λΪTCXO���ڡ� */
        unsigned int  timer0_timeout : 1;  /* bit[28-28]: ��ʱ����ʱ�� */
        unsigned int  reserved_1     : 3;  /* bit[29-31]: ���� */
    } reg;
} SOC_PMCTRL_TIMER0CTRL_UNION;
#endif
#define SOC_PMCTRL_TIMER0CTRL_timer0_en_START       (0)
#define SOC_PMCTRL_TIMER0CTRL_timer0_en_END         (0)
#define SOC_PMCTRL_TIMER0CTRL_timer0_val_START      (4)
#define SOC_PMCTRL_TIMER0CTRL_timer0_val_END        (27)
#define SOC_PMCTRL_TIMER0CTRL_timer0_timeout_START  (28)
#define SOC_PMCTRL_TIMER0CTRL_timer0_timeout_END    (28)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_TIMER1CTRL_UNION
 �ṹ˵��  : TIMER1CTRL �Ĵ����ṹ���塣��ַƫ����:0x0C4����ֵ:0x00000000�����:32
 �Ĵ���˵��: TIMER1���ƼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  timer1_en      : 1;  /* bit[0-0]  : ��ʱʹ�ܣ�����Ч�� */
        unsigned int  reserved_0     : 3;  /* bit[1-3]  : ���� */
        unsigned int  timer1_val     : 24; /* bit[4-27] : ��ʱʱ�䣬��λΪTCXO���ڡ� */
        unsigned int  timer1_timeout : 1;  /* bit[28-28]: ��ʱ����ʱ�� */
        unsigned int  reserved_1     : 3;  /* bit[29-31]: ���� */
    } reg;
} SOC_PMCTRL_TIMER1CTRL_UNION;
#endif
#define SOC_PMCTRL_TIMER1CTRL_timer1_en_START       (0)
#define SOC_PMCTRL_TIMER1CTRL_timer1_en_END         (0)
#define SOC_PMCTRL_TIMER1CTRL_timer1_val_START      (4)
#define SOC_PMCTRL_TIMER1CTRL_timer1_val_END        (27)
#define SOC_PMCTRL_TIMER1CTRL_timer1_timeout_START  (28)
#define SOC_PMCTRL_TIMER1CTRL_timer1_timeout_END    (28)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_TIMER2CTRL_UNION
 �ṹ˵��  : TIMER2CTRL �Ĵ����ṹ���塣��ַƫ����:0x0C8����ֵ:0x00000000�����:32
 �Ĵ���˵��: TIMER2���ƼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  timer2_en      : 1;  /* bit[0-0]  : ��ʱʹ�ܣ�����Ч�� */
        unsigned int  reserved_0     : 3;  /* bit[1-3]  : ���� */
        unsigned int  timer2_val     : 24; /* bit[4-27] : ��ʱʱ�䣬��λΪTCXO���ڡ� */
        unsigned int  timer2_timeout : 1;  /* bit[28-28]: ��ʱ����ʱ�� */
        unsigned int  reserved_1     : 3;  /* bit[29-31]: ���� */
    } reg;
} SOC_PMCTRL_TIMER2CTRL_UNION;
#endif
#define SOC_PMCTRL_TIMER2CTRL_timer2_en_START       (0)
#define SOC_PMCTRL_TIMER2CTRL_timer2_en_END         (0)
#define SOC_PMCTRL_TIMER2CTRL_timer2_val_START      (4)
#define SOC_PMCTRL_TIMER2CTRL_timer2_val_END        (27)
#define SOC_PMCTRL_TIMER2CTRL_timer2_timeout_START  (28)
#define SOC_PMCTRL_TIMER2CTRL_timer2_timeout_END    (28)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_TIMER3CTRL_UNION
 �ṹ˵��  : TIMER3CTRL �Ĵ����ṹ���塣��ַƫ����:0x0CC����ֵ:0x00000000�����:32
 �Ĵ���˵��: TIMER3���ƼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  timer3_en      : 1;  /* bit[0-0]  : ��ʱʹ�ܣ�����Ч�� */
        unsigned int  reserved_0     : 3;  /* bit[1-3]  : ���� */
        unsigned int  timer3_val     : 24; /* bit[4-27] : ��ʱʱ�䣬��λΪTCXO���ڡ� */
        unsigned int  timer3_timeout : 1;  /* bit[28-28]: ��ʱ����ʱ */
        unsigned int  reserved_1     : 3;  /* bit[29-31]: ���� */
    } reg;
} SOC_PMCTRL_TIMER3CTRL_UNION;
#endif
#define SOC_PMCTRL_TIMER3CTRL_timer3_en_START       (0)
#define SOC_PMCTRL_TIMER3CTRL_timer3_en_END         (0)
#define SOC_PMCTRL_TIMER3CTRL_timer3_val_START      (4)
#define SOC_PMCTRL_TIMER3CTRL_timer3_val_END        (27)
#define SOC_PMCTRL_TIMER3CTRL_timer3_timeout_START  (28)
#define SOC_PMCTRL_TIMER3CTRL_timer3_timeout_END    (28)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_PMUSSICHNEN_UNION
 �ṹ˵��  : PMUSSICHNEN �Ĵ����ṹ���塣��ַƫ����:0x0FC����ֵ:0x00000001�����:32
 �Ĵ���˵��: PMUSSIͨ��ʹ�ܼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pmussi_chn_en : 1;  /* bit[0-0] : PMUSSIͨ��ʹ���ܿؼĴ����� */
        unsigned int  reserved      : 31; /* bit[1-31]: ���� */
    } reg;
} SOC_PMCTRL_PMUSSICHNEN_UNION;
#endif
#define SOC_PMCTRL_PMUSSICHNEN_pmussi_chn_en_START  (0)
#define SOC_PMCTRL_PMUSSICHNEN_pmussi_chn_en_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_ACPUPLLSEL_UNION
 �ṹ˵��  : ACPUPLLSEL �Ĵ����ṹ���塣��ַƫ����:0x100����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU PLLѡ��Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  acpu_pllsw_cfg  : 1;  /* bit[0-0] : CPUʱ��ѡ���ĸ�PLL��
                                                          0��CPUʱ��ѡ��ACPUPLL��
                                                          1��CPUʱ��ѡ��SYSPLL�� */
        unsigned int  acpu_pllsw_stat : 1;  /* bit[1-1] : ��ǰCPUʱ��ѡ���ĸ�PLL��״ָ̬ʾ��
                                                          0��CPUʱ��δѡ��ACPUPLL��
                                                          1��CPUʱ��ѡ��ACPUPLL�� */
        unsigned int  syspll_sw_stat  : 1;  /* bit[2-2] : ��ǰCPUʱ��ѡ���ĸ�PLL��״ָ̬ʾ��
                                                          0��CPUʱ��δѡ��SYSPLL��
                                                          1��CPUʱ��ѡ��SYSPLL�� */
        unsigned int  reserved        : 29; /* bit[3-31]: ���� */
    } reg;
} SOC_PMCTRL_ACPUPLLSEL_UNION;
#endif
#define SOC_PMCTRL_ACPUPLLSEL_acpu_pllsw_cfg_START   (0)
#define SOC_PMCTRL_ACPUPLLSEL_acpu_pllsw_cfg_END     (0)
#define SOC_PMCTRL_ACPUPLLSEL_acpu_pllsw_stat_START  (1)
#define SOC_PMCTRL_ACPUPLLSEL_acpu_pllsw_stat_END    (1)
#define SOC_PMCTRL_ACPUPLLSEL_syspll_sw_stat_START   (2)
#define SOC_PMCTRL_ACPUPLLSEL_syspll_sw_stat_END     (2)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_ACPUCLKDIV_UNION
 �ṹ˵��  : ACPUCLKDIV �Ĵ����ṹ���塣��ַƫ����:0x104����ֵ:0x00010001�����:32
 �Ĵ���˵��: ACPUʱ�ӷ�Ƶ�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cpuext_clk_div_cfg    : 2;  /* bit[0-1]  : ������õ�ACPU bus�ӿ�ʱ�ӷ�Ƶ������ */
        unsigned int  reserved_0            : 6;  /* bit[2-7]  : ���� */
        unsigned int  acpu_ddr_clk_div_cfg  : 2;  /* bit[8-9]  : ACPU�͸�DDR�첽�ŵ�ʱ�ӷ�Ƶ������ */
        unsigned int  reserved_1            : 6;  /* bit[10-15]: ������ */
        unsigned int  cpuext_clk_div_stat   : 2;  /* bit[16-17]: ϵͳʹ�õ�ACPU bus�ӿ�ʱ�ӷ�Ƶ������ */
        unsigned int  reserved_2            : 6;  /* bit[18-23]: ���� */
        unsigned int  acpu_ddr_clk_div_stat : 2;  /* bit[24-25]: ACPU�͸�DDR�첽�ŵ�ʱ�ӷ�Ƶ������ */
        unsigned int  reserved_3            : 6;  /* bit[26-31]: ���� */
    } reg;
} SOC_PMCTRL_ACPUCLKDIV_UNION;
#endif
#define SOC_PMCTRL_ACPUCLKDIV_cpuext_clk_div_cfg_START     (0)
#define SOC_PMCTRL_ACPUCLKDIV_cpuext_clk_div_cfg_END       (1)
#define SOC_PMCTRL_ACPUCLKDIV_acpu_ddr_clk_div_cfg_START   (8)
#define SOC_PMCTRL_ACPUCLKDIV_acpu_ddr_clk_div_cfg_END     (9)
#define SOC_PMCTRL_ACPUCLKDIV_cpuext_clk_div_stat_START    (16)
#define SOC_PMCTRL_ACPUCLKDIV_cpuext_clk_div_stat_END      (17)
#define SOC_PMCTRL_ACPUCLKDIV_acpu_ddr_clk_div_stat_START  (24)
#define SOC_PMCTRL_ACPUCLKDIV_acpu_ddr_clk_div_stat_END    (25)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_ACPUMEMRM_UNION
 �ṹ˵��  : ACPUMEMRM �Ĵ����ṹ���塣��ַƫ����:0x108����ֵ:0x009B009B�����:32
 �Ĵ���˵��: ACPU�洢��RM�����Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  acpu_memrm_cfg  : 8;  /* bit[0-7]  : ������õ�ACPU�洢��RM������
                                                           [7]��δ���壻
                                                           [6]��EMAS��
                                                           [5:4]��EMAW��
                                                           [3]��δ���壻
                                                           [2:0]��EMA�� */
        unsigned int  reserved_0      : 8;  /* bit[8-15] : ���� */
        unsigned int  acpu_memrm_stat : 8;  /* bit[16-23]: ϵͳʹ�õ�ACPU�洢��RM������
                                                           [23]��δ���壻
                                                           [22]��EMAS��
                                                           [21:20]��EMAW��
                                                           [19]��δ���壻
                                                           [18:16]��EMA�� */
        unsigned int  reserved_1      : 8;  /* bit[24-31]: ���� */
    } reg;
} SOC_PMCTRL_ACPUMEMRM_UNION;
#endif
#define SOC_PMCTRL_ACPUMEMRM_acpu_memrm_cfg_START   (0)
#define SOC_PMCTRL_ACPUMEMRM_acpu_memrm_cfg_END     (7)
#define SOC_PMCTRL_ACPUMEMRM_acpu_memrm_stat_START  (16)
#define SOC_PMCTRL_ACPUMEMRM_acpu_memrm_stat_END    (23)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_ACPUVOLDET_UNION
 �ṹ˵��  : ACPUVOLDET �Ĵ����ṹ���塣��ַƫ����:0x10C����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ѹ���Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  acpu_tune_cfg    : 5;  /* bit[0-4] : ������õ�ACPU tuneֵ�� */
        unsigned int  reserved_0       : 3;  /* bit[5-7] : ���� */
        unsigned int  acpu_tune_en_cfg : 1;  /* bit[8-8] : ACPU��VOL DET����ʹ���ж��ϱ��� */
        unsigned int  reserved_1       : 23; /* bit[9-31]: ���� */
    } reg;
} SOC_PMCTRL_ACPUVOLDET_UNION;
#endif
#define SOC_PMCTRL_ACPUVOLDET_acpu_tune_cfg_START     (0)
#define SOC_PMCTRL_ACPUVOLDET_acpu_tune_cfg_END       (4)
#define SOC_PMCTRL_ACPUVOLDET_acpu_tune_en_cfg_START  (8)
#define SOC_PMCTRL_ACPUVOLDET_acpu_tune_en_cfg_END    (8)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_ACPUSYSPLLCFG_UNION
 �ṹ˵��  : ACPUSYSPLLCFG �Ĵ����ṹ���塣��ַƫ����:0x110����ֵ:0x00170117�����:32
 �Ĵ���˵��: ACPU��SYSPLL�����üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  acpu_syspll_div_cfg     : 3;  /* bit[0-2]  : ������õ�ACPU��ϵͳ��SYSPLLʱ�ӷ�Ƶ������ */
        unsigned int  reserved_0              : 1;  /* bit[3-3]  : ���� */
        unsigned int  acpu_syspll_clken_cfg   : 1;  /* bit[4-4]  : ������õ�ACPU��ϵͳ��SYSPLLʱ�ӷ�Ƶ����ſأ� */
        unsigned int  reserved_1              : 3;  /* bit[5-7]  : ���� */
        unsigned int  acpu_subsys_clk_div_cfg : 2;  /* bit[8-9]  : ACPU DVFSʱ��ACPU��ϵͳ��ʱ�ӷ�Ƶ������ */
        unsigned int  reserved_2              : 6;  /* bit[10-15]: ���� */
        unsigned int  acpu_syspll_div_stat    : 4;  /* bit[16-19]: ������õ�ACPU��ϵͳ��SYSPLLʱ�ӷ�Ƶ������ */
        unsigned int  acpu_syspll_clken_stat  : 1;  /* bit[20-20]: ������õ�ACPU��ϵͳ��SYSPLLʱ�ӷ�Ƶ����ſأ� */
        unsigned int  reserved_3              : 11; /* bit[21-31]: ���� */
    } reg;
} SOC_PMCTRL_ACPUSYSPLLCFG_UNION;
#endif
#define SOC_PMCTRL_ACPUSYSPLLCFG_acpu_syspll_div_cfg_START      (0)
#define SOC_PMCTRL_ACPUSYSPLLCFG_acpu_syspll_div_cfg_END        (2)
#define SOC_PMCTRL_ACPUSYSPLLCFG_acpu_syspll_clken_cfg_START    (4)
#define SOC_PMCTRL_ACPUSYSPLLCFG_acpu_syspll_clken_cfg_END      (4)
#define SOC_PMCTRL_ACPUSYSPLLCFG_acpu_subsys_clk_div_cfg_START  (8)
#define SOC_PMCTRL_ACPUSYSPLLCFG_acpu_subsys_clk_div_cfg_END    (9)
#define SOC_PMCTRL_ACPUSYSPLLCFG_acpu_syspll_div_stat_START     (16)
#define SOC_PMCTRL_ACPUSYSPLLCFG_acpu_syspll_div_stat_END       (19)
#define SOC_PMCTRL_ACPUSYSPLLCFG_acpu_syspll_clken_stat_START   (20)
#define SOC_PMCTRL_ACPUSYSPLLCFG_acpu_syspll_clken_stat_END     (20)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_ACPUCLKOFFCFG_UNION
 �ṹ˵��  : ACPUCLKOFFCFG �Ĵ����ṹ���塣��ַƫ����:0x114����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU DVFSʱ��ģʽ�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  acpu_clkoff_vol      : 1;  /* bit[0-0]  : ����CPU DVFS�����У���ѹ�仯ʱʱ�ӵ�״̬
                                                                1'b0��CPU ��ѹ�ı�ʱ��ʱ�Ӵ򿪣�
                                                                1'b1��CPU ��ѹ�ı�ʱ��ʱ�ӹرա� */
        unsigned int  acpu_clkoff_memrm    : 1;  /* bit[1-1]  : ����CPU DVFS�����У�RM�仯ʱʱ�ӵ�״̬
                                                                1'b0��CPU RM�ı�ʱ��ʱ�Ӵ򿪣�
                                                                1'b1��CPU RM�ı�ʱ��ʱ�ӹرա� */
        unsigned int  reserved_0           : 2;  /* bit[2-3]  : ���� */
        unsigned int  acpu_memrm_time      : 5;  /* bit[4-8]  : CPU DVFSʱ���ı�MEM RM���ȶ�ʱ�䡣 */
        unsigned int  reserved_1           : 3;  /* bit[9-11] : ���� */
        unsigned int  acpu_dvfs_pwrctrl_en : 1;  /* bit[12-12]: CPU DVFS��Ƶ��ѹʹ�ܡ�
                                                                0��CPU DVFS��Ƶ��ѹ���ܹرգ�
                                                                1��CPU DVFS��Ƶ��ѹ���ܿ����� */
        unsigned int  reserved_2           : 3;  /* bit[13-15]: ���� */
        unsigned int  acpu_dvfs_ko_avs_dis : 1;  /* bit[16-16]: AVS��ѹ����ǿ�ƴ�Ͻ�ֹ�Ĵ�����
                                                                0��AVS��ѹ���������У�����DVFS���룻
                                                                1��AVS��ѹ���������У�������DVFS���롣 */
        unsigned int  reserved_3           : 15; /* bit[17-31]: ���� */
    } reg;
} SOC_PMCTRL_ACPUCLKOFFCFG_UNION;
#endif
#define SOC_PMCTRL_ACPUCLKOFFCFG_acpu_clkoff_vol_START       (0)
#define SOC_PMCTRL_ACPUCLKOFFCFG_acpu_clkoff_vol_END         (0)
#define SOC_PMCTRL_ACPUCLKOFFCFG_acpu_clkoff_memrm_START     (1)
#define SOC_PMCTRL_ACPUCLKOFFCFG_acpu_clkoff_memrm_END       (1)
#define SOC_PMCTRL_ACPUCLKOFFCFG_acpu_memrm_time_START       (4)
#define SOC_PMCTRL_ACPUCLKOFFCFG_acpu_memrm_time_END         (8)
#define SOC_PMCTRL_ACPUCLKOFFCFG_acpu_dvfs_pwrctrl_en_START  (12)
#define SOC_PMCTRL_ACPUCLKOFFCFG_acpu_dvfs_pwrctrl_en_END    (12)
#define SOC_PMCTRL_ACPUCLKOFFCFG_acpu_dvfs_ko_avs_dis_START  (16)
#define SOC_PMCTRL_ACPUCLKOFFCFG_acpu_dvfs_ko_avs_dis_END    (16)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_ACPUDVFSEN_UNION
 �ṹ˵��  : ACPUDVFSEN �Ĵ����ṹ���塣��ַƫ����:0x118����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU DVFSʹ�ܼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  acpu_dvfs_start   : 1;  /* bit[0-0] : CPU DVFS����ʹ�ܣ����λд1'b1����1��DVFS��д0��Ч�� */
        unsigned int  acpu_profile_updn : 1;  /* bit[1-1] : CPU DVFS���ܸı�ָʾ��
                                                            0��CPU DVFS����Profile��
                                                            1��CPU DVFS����Profile�� */
        unsigned int  reserved          : 30; /* bit[2-31]: ���� */
    } reg;
} SOC_PMCTRL_ACPUDVFSEN_UNION;
#endif
#define SOC_PMCTRL_ACPUDVFSEN_acpu_dvfs_start_START    (0)
#define SOC_PMCTRL_ACPUDVFSEN_acpu_dvfs_start_END      (0)
#define SOC_PMCTRL_ACPUDVFSEN_acpu_profile_updn_START  (1)
#define SOC_PMCTRL_ACPUDVFSEN_acpu_profile_updn_END    (1)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_ACPUCLKPROFILE0_UNION
 �ṹ˵��  : ACPUCLKPROFILE0 �Ĵ����ṹ���塣��ַƫ����:0x11C����ֵ:0x000061E5�����:32
 �Ĵ���˵��: ACPUƵ��Profile�Ĵ���0
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  acpupll_freq_prof : 28; /* bit[0-27] : [27:18]��reserved
                                                             [17:12]��PLL���Ƶ����postdiv1��
                                                             [11:10]��reserved��
                                                             [9:4]��PLL FB programmable counter��
                                                             [3:0]��PLL FB swallow counter�� */
        unsigned int  reserved          : 4;  /* bit[28-31]: ���� */
    } reg;
} SOC_PMCTRL_ACPUCLKPROFILE0_UNION;
#endif
#define SOC_PMCTRL_ACPUCLKPROFILE0_acpupll_freq_prof_START  (0)
#define SOC_PMCTRL_ACPUCLKPROFILE0_acpupll_freq_prof_END    (27)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_ACPUCLKPROFILE1_UNION
 �ṹ˵��  : ACPUCLKPROFILE1 �Ĵ����ṹ���塣��ַƫ����:0x120����ֵ:0x00000107�����:32
 �Ĵ���˵��: ACPUƵ��Profile�Ĵ���1
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  acpu_sys_div_prof     : 3;  /* bit[0-2]  : ACPU��syspll��ʱ�ӷ�Ƶ������ */
        unsigned int  reserved_0            : 1;  /* bit[3-3]  : ���� */
        unsigned int  acpu_ddr_clk_div_prof : 2;  /* bit[4-5]  : ACPU�͸�DDR�첽�ŵ�ʱ�ӷ�Ƶ������
                                                                 ACPU��ѹΪ0.95Vʱ������Ϊ0x1��
                                                                 ACPU��ѹΪ1.05Vʱ������Ϊ0x0�� */
        unsigned int  reserved_1            : 2;  /* bit[6-7]  : ���� */
        unsigned int  cpuext_clk_div_prof   : 2;  /* bit[8-9]  : ACPU BUS�ӿ�ʱ�ӷ�Ƶ������ */
        unsigned int  reserved_2            : 22; /* bit[10-31]: ���� */
    } reg;
} SOC_PMCTRL_ACPUCLKPROFILE1_UNION;
#endif
#define SOC_PMCTRL_ACPUCLKPROFILE1_acpu_sys_div_prof_START      (0)
#define SOC_PMCTRL_ACPUCLKPROFILE1_acpu_sys_div_prof_END        (2)
#define SOC_PMCTRL_ACPUCLKPROFILE1_acpu_ddr_clk_div_prof_START  (4)
#define SOC_PMCTRL_ACPUCLKPROFILE1_acpu_ddr_clk_div_prof_END    (5)
#define SOC_PMCTRL_ACPUCLKPROFILE1_cpuext_clk_div_prof_START    (8)
#define SOC_PMCTRL_ACPUCLKPROFILE1_cpuext_clk_div_prof_END      (9)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_ACPUVOLPROFILE_UNION
 �ṹ˵��  : ACPUVOLPROFILE �Ĵ����ṹ���塣��ַƫ����:0x124����ֵ:0x00009B1F�����:32
 �Ĵ���˵��: ACPU��ѹProfile�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  acpu_vol_idx_prof : 7;  /* bit[0-6]  : CPU��ѹProfile������ */
        unsigned int  reserved_0        : 1;  /* bit[7-7]  : ���� */
        unsigned int  acpu_memrm_prof   : 8;  /* bit[8-15] : CPU MEM RM������ */
        unsigned int  reserved_1        : 4;  /* bit[16-19]: ���� */
        unsigned int  acpu_tune_en_prof : 1;  /* bit[20-20]: CPU voltage detect��·ʹ�ܲ�����
                                                             1'b1:voltage detect�����ж��ϱ�ʹ�ܣ�
                                                             1'b0:voltage detect�����ж��ϱ�ȥʹ�ܣ� */
        unsigned int  reserved_2        : 11; /* bit[21-31]: ���� */
    } reg;
} SOC_PMCTRL_ACPUVOLPROFILE_UNION;
#endif
#define SOC_PMCTRL_ACPUVOLPROFILE_acpu_vol_idx_prof_START  (0)
#define SOC_PMCTRL_ACPUVOLPROFILE_acpu_vol_idx_prof_END    (6)
#define SOC_PMCTRL_ACPUVOLPROFILE_acpu_memrm_prof_START    (8)
#define SOC_PMCTRL_ACPUVOLPROFILE_acpu_memrm_prof_END      (15)
#define SOC_PMCTRL_ACPUVOLPROFILE_acpu_tune_en_prof_START  (20)
#define SOC_PMCTRL_ACPUVOLPROFILE_acpu_tune_en_prof_END    (20)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_ACPUPLLSTAT_UNION
 �ṹ˵��  : ACPUPLLSTAT �Ĵ����ṹ���塣��ַƫ����:0x128����ֵ:0x000061E5�����:32
 �Ĵ���˵��: ACPU PLL��Ƶ״̬�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  acpupll_freq : 28; /* bit[0-27] : [27:18]��reserved
                                                        [17:12]��PLL���Ƶ����postdiv1��
                                                        [11:10]��reserved��
                                                        [9:4]��PLL FB programmable counter��
                                                        [3:0]��PLL FB swallow counter�� */
        unsigned int  acpupll_en   : 1;  /* bit[28-28]: PLLʹ�ܡ� */
        unsigned int  reserved     : 3;  /* bit[29-31]: ���� */
    } reg;
} SOC_PMCTRL_ACPUPLLSTAT_UNION;
#endif
#define SOC_PMCTRL_ACPUPLLSTAT_acpupll_freq_START  (0)
#define SOC_PMCTRL_ACPUPLLSTAT_acpupll_freq_END    (27)
#define SOC_PMCTRL_ACPUPLLSTAT_acpupll_en_START    (28)
#define SOC_PMCTRL_ACPUPLLSTAT_acpupll_en_END      (28)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_ACPUDIVTIMEOUT_UNION
 �ṹ˵��  : ACPUDIVTIMEOUT �Ĵ����ṹ���塣��ַƫ����:0x12C����ֵ:0x00000028�����:32
 �Ĵ���˵��: ACPUʱ�ӷ�Ƶ��ʱ�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  acpu_clkdiv_time : 6;  /* bit[0-5] : ACPUʱ�ӷ�Ƶ����ʱ�䡣 */
        unsigned int  reserved         : 26; /* bit[6-31]: ���� */
    } reg;
} SOC_PMCTRL_ACPUDIVTIMEOUT_UNION;
#endif
#define SOC_PMCTRL_ACPUDIVTIMEOUT_acpu_clkdiv_time_START  (0)
#define SOC_PMCTRL_ACPUDIVTIMEOUT_acpu_clkdiv_time_END    (5)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_ACPUAVSONTIMEOUT_UNION
 �ṹ˵��  : ACPUAVSONTIMEOUT �Ĵ����ṹ���塣��ַƫ����:0x130����ֵ:0x00000014�����:32
 �Ĵ���˵��: ACPU AVS�ٴ�������ʱ�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  avs_on_wait_time : 32; /* bit[0-31]: DVFS������AVS�������ӳ�ʱ�䡣 */
    } reg;
} SOC_PMCTRL_ACPUAVSONTIMEOUT_UNION;
#endif
#define SOC_PMCTRL_ACPUAVSONTIMEOUT_avs_on_wait_time_START  (0)
#define SOC_PMCTRL_ACPUAVSONTIMEOUT_avs_on_wait_time_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_ACPUAVSPARAUPD_UNION
 �ṹ˵��  : ACPUAVSPARAUPD �Ĵ����ṹ���塣��ַƫ����:0x180����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU AVS�������¼Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  acpu_avspara_update : 1;  /* bit[0-0] : CPU AVS����ʵʱ���¿��ơ�
                                                              ͨ����CPU AVS������CPU DVFS����֮����£����������Ĵ���д1��AVS�����������£����������Ĵ���д0����Ч�� */
        unsigned int  reserved            : 31; /* bit[1-31]: ���� */
    } reg;
} SOC_PMCTRL_ACPUAVSPARAUPD_UNION;
#endif
#define SOC_PMCTRL_ACPUAVSPARAUPD_acpu_avspara_update_START  (0)
#define SOC_PMCTRL_ACPUAVSPARAUPD_acpu_avspara_update_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_ACPUAVSPARA0_UNION
 �ṹ˵��  : ACPUAVSPARA0 �Ĵ����ṹ���塣��ַƫ����:0x184����ֵ:0x00510002�����:32
 �Ĵ���˵��: ACPU AVS�����Ĵ���0
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  acpu_hpm_clk_div : 6;  /* bit[0-5]  : ACPU HPMʱ�ӷ�Ƶ����
                                                            �üĴ�������������Ϊ6'h0��
                                                            ����Ϊ6'h1��������������ʱ��Ϊ2��ʱ�����ڣ�����Ϊ6'h2��������������ʱ��Ϊ3��ʱ�����ڣ�����Ϊ6'h3��������������ʱ��Ϊ4��ʱ�����ڣ��������ơ� */
        unsigned int  reserved_0       : 10; /* bit[6-15] : ���� */
        unsigned int  acpu_avs_opc_mod : 2;  /* bit[16-17]: CPU AVS��ͬһ��HPM OPCֵ�Ķ�β�����δ���
                                                            00��OPCȡ��ֵ��
                                                            01��OPCȡ��Сֵ��
                                                            10��OPCȡ���ֵ��
                                                            11�������� */
        unsigned int  reserved_1       : 2;  /* bit[18-19]: ���� */
        unsigned int  acpu_avs_hpm_sel : 3;  /* bit[20-22]: CPU AVS�ж��HPM��PCֵ��δ���
                                                            000��ȡCPU0 HPM��PCֵ��
                                                            001��ȡCPU1 HPM��PCֵ��
                                                            010��ȡCPU2 HPM��PCֵ��
                                                            011��ȡCPU3 HPM��PCֵ��
                                                            100��ȡSCU HPM��PCֵ��
                                                            101��ȡHPM�е���Сֵ��
                                                            110��ȡHPM�е����ֵ��
                                                            111�������� */
        unsigned int  reserved_2       : 9;  /* bit[23-31]: ���� */
    } reg;
} SOC_PMCTRL_ACPUAVSPARA0_UNION;
#endif
#define SOC_PMCTRL_ACPUAVSPARA0_acpu_hpm_clk_div_START  (0)
#define SOC_PMCTRL_ACPUAVSPARA0_acpu_hpm_clk_div_END    (5)
#define SOC_PMCTRL_ACPUAVSPARA0_acpu_avs_opc_mod_START  (16)
#define SOC_PMCTRL_ACPUAVSPARA0_acpu_avs_opc_mod_END    (17)
#define SOC_PMCTRL_ACPUAVSPARA0_acpu_avs_hpm_sel_START  (20)
#define SOC_PMCTRL_ACPUAVSPARA0_acpu_avs_hpm_sel_END    (22)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_ACPUAVSPARA1_UNION
 �ṹ˵��  : ACPUAVSPARA1 �Ĵ����ṹ���塣��ַƫ����:0x188����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU AVS�����Ĵ���1
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  acpu_avs_opc_offset : 10; /* bit[0-9]  : CPU AVSԭʼ������ƫ�ơ� */
        unsigned int  reserved_0          : 2;  /* bit[10-11]: ���� */
        unsigned int  acpu_avs_rcc        : 5;  /* bit[12-16]: CPU AVS�ο�У׼�롣 */
        unsigned int  reserved_1          : 3;  /* bit[17-19]: ���� */
        unsigned int  acpu_avs_irgap      : 5;  /* bit[20-24]: CPU AVS IRDropԣ���� */
        unsigned int  reserved_2          : 3;  /* bit[25-27]: ���� */
        unsigned int  acpu_avs_opc_shift  : 3;  /* bit[28-30]: CPU AVSԭʼ��������λ�� */
        unsigned int  reserved_3          : 1;  /* bit[31-31]: ���� */
    } reg;
} SOC_PMCTRL_ACPUAVSPARA1_UNION;
#endif
#define SOC_PMCTRL_ACPUAVSPARA1_acpu_avs_opc_offset_START  (0)
#define SOC_PMCTRL_ACPUAVSPARA1_acpu_avs_opc_offset_END    (9)
#define SOC_PMCTRL_ACPUAVSPARA1_acpu_avs_rcc_START         (12)
#define SOC_PMCTRL_ACPUAVSPARA1_acpu_avs_rcc_END           (16)
#define SOC_PMCTRL_ACPUAVSPARA1_acpu_avs_irgap_START       (20)
#define SOC_PMCTRL_ACPUAVSPARA1_acpu_avs_irgap_END         (24)
#define SOC_PMCTRL_ACPUAVSPARA1_acpu_avs_opc_shift_START   (28)
#define SOC_PMCTRL_ACPUAVSPARA1_acpu_avs_opc_shift_END     (30)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_ACPUAVSPARA2_UNION
 �ṹ˵��  : ACPUAVSPARA2 �Ĵ����ṹ���塣��ַƫ����:0x18C����ֵ:0x87654321�����:32
 �Ĵ���˵��: ACPU AVS�����Ĵ���2
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  acpu_avs_vol_up_gain1 : 4;  /* bit[0-3]  : CPU AVS��ѹ���档 */
        unsigned int  acpu_avs_vol_up_gain2 : 4;  /* bit[4-7]  : CPU AVS��ѹ���档 */
        unsigned int  acpu_avs_vol_up_gain3 : 4;  /* bit[8-11] : CPU AVS��ѹ���档 */
        unsigned int  acpu_avs_vol_up_gain4 : 4;  /* bit[12-15]: CPU AVS��ѹ���档 */
        unsigned int  acpu_avs_vol_up_gain5 : 4;  /* bit[16-19]: CPU AVS��ѹ���档 */
        unsigned int  acpu_avs_vol_up_gain6 : 4;  /* bit[20-23]: CPU AVS��ѹ���档 */
        unsigned int  acpu_avs_vol_up_gain7 : 4;  /* bit[24-27]: CPU AVS��ѹ���档 */
        unsigned int  acpu_avs_vol_up_gain8 : 4;  /* bit[28-31]: CPU AVS��ѹ���档 */
    } reg;
} SOC_PMCTRL_ACPUAVSPARA2_UNION;
#endif
#define SOC_PMCTRL_ACPUAVSPARA2_acpu_avs_vol_up_gain1_START  (0)
#define SOC_PMCTRL_ACPUAVSPARA2_acpu_avs_vol_up_gain1_END    (3)
#define SOC_PMCTRL_ACPUAVSPARA2_acpu_avs_vol_up_gain2_START  (4)
#define SOC_PMCTRL_ACPUAVSPARA2_acpu_avs_vol_up_gain2_END    (7)
#define SOC_PMCTRL_ACPUAVSPARA2_acpu_avs_vol_up_gain3_START  (8)
#define SOC_PMCTRL_ACPUAVSPARA2_acpu_avs_vol_up_gain3_END    (11)
#define SOC_PMCTRL_ACPUAVSPARA2_acpu_avs_vol_up_gain4_START  (12)
#define SOC_PMCTRL_ACPUAVSPARA2_acpu_avs_vol_up_gain4_END    (15)
#define SOC_PMCTRL_ACPUAVSPARA2_acpu_avs_vol_up_gain5_START  (16)
#define SOC_PMCTRL_ACPUAVSPARA2_acpu_avs_vol_up_gain5_END    (19)
#define SOC_PMCTRL_ACPUAVSPARA2_acpu_avs_vol_up_gain6_START  (20)
#define SOC_PMCTRL_ACPUAVSPARA2_acpu_avs_vol_up_gain6_END    (23)
#define SOC_PMCTRL_ACPUAVSPARA2_acpu_avs_vol_up_gain7_START  (24)
#define SOC_PMCTRL_ACPUAVSPARA2_acpu_avs_vol_up_gain7_END    (27)
#define SOC_PMCTRL_ACPUAVSPARA2_acpu_avs_vol_up_gain8_START  (28)
#define SOC_PMCTRL_ACPUAVSPARA2_acpu_avs_vol_up_gain8_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_ACPUAVSPARA3_UNION
 �ṹ˵��  : ACPUAVSPARA3 �Ĵ����ṹ���塣��ַƫ����:0x190����ֵ:0x0FEDCBA9�����:32
 �Ĵ���˵��: ACPU AVS�����Ĵ���3
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  acpu_avs_vol_up_gain9  : 4;  /* bit[0-3]  : CPU AVS��ѹ���档 */
        unsigned int  acpu_avs_vol_up_gain10 : 4;  /* bit[4-7]  : CPU AVS��ѹ���档 */
        unsigned int  acpu_avs_vol_up_gain11 : 4;  /* bit[8-11] : CPU AVS��ѹ���档 */
        unsigned int  acpu_avs_vol_up_gain12 : 4;  /* bit[12-15]: CPU AVS��ѹ���档 */
        unsigned int  acpu_avs_vol_up_gain13 : 4;  /* bit[16-19]: CPU AVS��ѹ���档 */
        unsigned int  acpu_avs_vol_up_gain14 : 4;  /* bit[20-23]: CPU AVS��ѹ���档 */
        unsigned int  acpu_avs_vol_up_gain15 : 7;  /* bit[24-30]: CPU AVS��ѹ���档 */
        unsigned int  reserved               : 1;  /* bit[31-31]: ���� */
    } reg;
} SOC_PMCTRL_ACPUAVSPARA3_UNION;
#endif
#define SOC_PMCTRL_ACPUAVSPARA3_acpu_avs_vol_up_gain9_START   (0)
#define SOC_PMCTRL_ACPUAVSPARA3_acpu_avs_vol_up_gain9_END     (3)
#define SOC_PMCTRL_ACPUAVSPARA3_acpu_avs_vol_up_gain10_START  (4)
#define SOC_PMCTRL_ACPUAVSPARA3_acpu_avs_vol_up_gain10_END    (7)
#define SOC_PMCTRL_ACPUAVSPARA3_acpu_avs_vol_up_gain11_START  (8)
#define SOC_PMCTRL_ACPUAVSPARA3_acpu_avs_vol_up_gain11_END    (11)
#define SOC_PMCTRL_ACPUAVSPARA3_acpu_avs_vol_up_gain12_START  (12)
#define SOC_PMCTRL_ACPUAVSPARA3_acpu_avs_vol_up_gain12_END    (15)
#define SOC_PMCTRL_ACPUAVSPARA3_acpu_avs_vol_up_gain13_START  (16)
#define SOC_PMCTRL_ACPUAVSPARA3_acpu_avs_vol_up_gain13_END    (19)
#define SOC_PMCTRL_ACPUAVSPARA3_acpu_avs_vol_up_gain14_START  (20)
#define SOC_PMCTRL_ACPUAVSPARA3_acpu_avs_vol_up_gain14_END    (23)
#define SOC_PMCTRL_ACPUAVSPARA3_acpu_avs_vol_up_gain15_START  (24)
#define SOC_PMCTRL_ACPUAVSPARA3_acpu_avs_vol_up_gain15_END    (30)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_ACPUAVSPARA4_UNION
 �ṹ˵��  : ACPUAVSPARA4 �Ĵ����ṹ���塣��ַƫ����:0x194����ֵ:0x87654321�����:32
 �Ĵ���˵��: ACPU AVS�����Ĵ���4
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  acpu_avs_vol_dn_gain1 : 4;  /* bit[0-3]  : CPU AVS��ѹ���档 */
        unsigned int  acpu_avs_vol_dn_gain2 : 4;  /* bit[4-7]  : CPU AVS��ѹ���档 */
        unsigned int  acpu_avs_vol_dn_gain3 : 4;  /* bit[8-11] : CPU AVS��ѹ���档 */
        unsigned int  acpu_avs_vol_dn_gain4 : 4;  /* bit[12-15]: CPU AVS��ѹ���档 */
        unsigned int  acpu_avs_vol_dn_gain5 : 4;  /* bit[16-19]: CPU AVS��ѹ���档 */
        unsigned int  acpu_avs_vol_dn_gain6 : 4;  /* bit[20-23]: CPU AVS��ѹ���档 */
        unsigned int  acpu_avs_vol_dn_gain7 : 4;  /* bit[24-27]: CPU AVS��ѹ���档 */
        unsigned int  acpu_avs_vol_dn_gain8 : 4;  /* bit[28-31]: CPU AVS��ѹ���档 */
    } reg;
} SOC_PMCTRL_ACPUAVSPARA4_UNION;
#endif
#define SOC_PMCTRL_ACPUAVSPARA4_acpu_avs_vol_dn_gain1_START  (0)
#define SOC_PMCTRL_ACPUAVSPARA4_acpu_avs_vol_dn_gain1_END    (3)
#define SOC_PMCTRL_ACPUAVSPARA4_acpu_avs_vol_dn_gain2_START  (4)
#define SOC_PMCTRL_ACPUAVSPARA4_acpu_avs_vol_dn_gain2_END    (7)
#define SOC_PMCTRL_ACPUAVSPARA4_acpu_avs_vol_dn_gain3_START  (8)
#define SOC_PMCTRL_ACPUAVSPARA4_acpu_avs_vol_dn_gain3_END    (11)
#define SOC_PMCTRL_ACPUAVSPARA4_acpu_avs_vol_dn_gain4_START  (12)
#define SOC_PMCTRL_ACPUAVSPARA4_acpu_avs_vol_dn_gain4_END    (15)
#define SOC_PMCTRL_ACPUAVSPARA4_acpu_avs_vol_dn_gain5_START  (16)
#define SOC_PMCTRL_ACPUAVSPARA4_acpu_avs_vol_dn_gain5_END    (19)
#define SOC_PMCTRL_ACPUAVSPARA4_acpu_avs_vol_dn_gain6_START  (20)
#define SOC_PMCTRL_ACPUAVSPARA4_acpu_avs_vol_dn_gain6_END    (23)
#define SOC_PMCTRL_ACPUAVSPARA4_acpu_avs_vol_dn_gain7_START  (24)
#define SOC_PMCTRL_ACPUAVSPARA4_acpu_avs_vol_dn_gain7_END    (27)
#define SOC_PMCTRL_ACPUAVSPARA4_acpu_avs_vol_dn_gain8_START  (28)
#define SOC_PMCTRL_ACPUAVSPARA4_acpu_avs_vol_dn_gain8_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_ACPUAVSPARA5_UNION
 �ṹ˵��  : ACPUAVSPARA5 �Ĵ����ṹ���塣��ַƫ����:0x198����ֵ:0x0FEDCBA9�����:32
 �Ĵ���˵��: ACPU AVS�����Ĵ���5
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  acpu_avs_vol_dn_gain9  : 4;  /* bit[0-3]  : CPU AVS��ѹ���档 */
        unsigned int  acpu_avs_vol_dn_gain10 : 4;  /* bit[4-7]  : CPU AVS��ѹ���档 */
        unsigned int  acpu_avs_vol_dn_gain11 : 4;  /* bit[8-11] : CPU AVS��ѹ���档 */
        unsigned int  acpu_avs_vol_dn_gain12 : 4;  /* bit[12-15]: CPU AVS��ѹ���档 */
        unsigned int  acpu_avs_vol_dn_gain13 : 4;  /* bit[16-19]: CPU AVS��ѹ���档 */
        unsigned int  acpu_avs_vol_dn_gain14 : 4;  /* bit[20-23]: CPU AVS��ѹ���档 */
        unsigned int  acpu_avs_vol_dn_gain15 : 7;  /* bit[24-30]: CPU AVS��ѹ���档 */
        unsigned int  reserved               : 1;  /* bit[31-31]: ���� */
    } reg;
} SOC_PMCTRL_ACPUAVSPARA5_UNION;
#endif
#define SOC_PMCTRL_ACPUAVSPARA5_acpu_avs_vol_dn_gain9_START   (0)
#define SOC_PMCTRL_ACPUAVSPARA5_acpu_avs_vol_dn_gain9_END     (3)
#define SOC_PMCTRL_ACPUAVSPARA5_acpu_avs_vol_dn_gain10_START  (4)
#define SOC_PMCTRL_ACPUAVSPARA5_acpu_avs_vol_dn_gain10_END    (7)
#define SOC_PMCTRL_ACPUAVSPARA5_acpu_avs_vol_dn_gain11_START  (8)
#define SOC_PMCTRL_ACPUAVSPARA5_acpu_avs_vol_dn_gain11_END    (11)
#define SOC_PMCTRL_ACPUAVSPARA5_acpu_avs_vol_dn_gain12_START  (12)
#define SOC_PMCTRL_ACPUAVSPARA5_acpu_avs_vol_dn_gain12_END    (15)
#define SOC_PMCTRL_ACPUAVSPARA5_acpu_avs_vol_dn_gain13_START  (16)
#define SOC_PMCTRL_ACPUAVSPARA5_acpu_avs_vol_dn_gain13_END    (19)
#define SOC_PMCTRL_ACPUAVSPARA5_acpu_avs_vol_dn_gain14_START  (20)
#define SOC_PMCTRL_ACPUAVSPARA5_acpu_avs_vol_dn_gain14_END    (23)
#define SOC_PMCTRL_ACPUAVSPARA5_acpu_avs_vol_dn_gain15_START  (24)
#define SOC_PMCTRL_ACPUAVSPARA5_acpu_avs_vol_dn_gain15_END    (30)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_ACPUAVSPARA6_UNION
 �ṹ˵��  : ACPUAVSPARA6 �Ĵ����ṹ���塣��ַƫ����:0x19C����ֵ:0x0000007F�����:32
 �Ĵ���˵��: ACPU AVS�����Ĵ���6
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  acpu_avs_max_vol : 7;  /* bit[0-6]  : CPU AVS����ѹ���ơ� */
        unsigned int  reserved_0       : 1;  /* bit[7-7]  : ���� */
        unsigned int  acpu_avs_min_vol : 7;  /* bit[8-14] : CPU AVS��С��ѹ���ơ� */
        unsigned int  reserved_1       : 17; /* bit[15-31]: ���� */
    } reg;
} SOC_PMCTRL_ACPUAVSPARA6_UNION;
#endif
#define SOC_PMCTRL_ACPUAVSPARA6_acpu_avs_max_vol_START  (0)
#define SOC_PMCTRL_ACPUAVSPARA6_acpu_avs_max_vol_END    (6)
#define SOC_PMCTRL_ACPUAVSPARA6_acpu_avs_min_vol_START  (8)
#define SOC_PMCTRL_ACPUAVSPARA6_acpu_avs_min_vol_END    (14)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_ACPUAVSPARA7_UNION
 �ṹ˵��  : ACPUAVSPARA7 �Ĵ����ṹ���塣��ַƫ����:0x1A0����ֵ:0x090001FF�����:32
 �Ĵ���˵��: ACPU AVS�����Ĵ���7
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  acpu_avs_sample_num   : 22; /* bit[0-21] : CPU AVS�����������������acpu_avs_opc_modΪ0x0ʱ��ֵ����Ϊ2��n�η���1�� */
        unsigned int  reserved_0            : 2;  /* bit[22-23]: ���� */
        unsigned int  acpu_avs_sample_shift : 5;  /* bit[24-28]: ACPU AVS�������ۼ�ֵ������λ����ͨ����ֵ����Ϊn��n����(2^n)-1=acpu_avs_sample_num�� */
        unsigned int  reserved_1            : 3;  /* bit[29-31]: ���� */
    } reg;
} SOC_PMCTRL_ACPUAVSPARA7_UNION;
#endif
#define SOC_PMCTRL_ACPUAVSPARA7_acpu_avs_sample_num_START    (0)
#define SOC_PMCTRL_ACPUAVSPARA7_acpu_avs_sample_num_END      (21)
#define SOC_PMCTRL_ACPUAVSPARA7_acpu_avs_sample_shift_START  (24)
#define SOC_PMCTRL_ACPUAVSPARA7_acpu_avs_sample_shift_END    (28)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_ACPUAVSEN_UNION
 �ṹ˵��  : ACPUAVSEN �Ĵ����ṹ���塣��ַƫ����:0x1E4����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU AVSʹ�ܼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  acpu_avs_en        : 1;  /* bit[0-0] : CPU AVSʹ�ܡ�
                                                             0��CPU AVS���ܹرգ�
                                                             1��CPU AVS���ܿ����� */
        unsigned int  acpu_avs_pwctrl_en : 1;  /* bit[1-1] : CPU AVS��ѹʹ�ܡ�
                                                             0��CPU AVS��ѹ���ܹرգ�
                                                             1��CPU AVS��ѹ���ܿ����� */
        unsigned int  reserved           : 30; /* bit[2-31]: ���� */
    } reg;
} SOC_PMCTRL_ACPUAVSEN_UNION;
#endif
#define SOC_PMCTRL_ACPUAVSEN_acpu_avs_en_START         (0)
#define SOC_PMCTRL_ACPUAVSEN_acpu_avs_en_END           (0)
#define SOC_PMCTRL_ACPUAVSEN_acpu_avs_pwctrl_en_START  (1)
#define SOC_PMCTRL_ACPUAVSEN_acpu_avs_pwctrl_en_END    (1)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_ACPUAVSPERIOD_UNION
 �ṹ˵��  : ACPUAVSPERIOD �Ĵ����ṹ���塣��ַƫ����:0x1E8����ֵ:0x00020000�����:32
 �Ĵ���˵��: ACPU AVS���ڼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  acpu_avs_period : 32; /* bit[0-31]: ACPU AVS�������ڡ� */
    } reg;
} SOC_PMCTRL_ACPUAVSPERIOD_UNION;
#endif
#define SOC_PMCTRL_ACPUAVSPERIOD_acpu_avs_period_START  (0)
#define SOC_PMCTRL_ACPUAVSPERIOD_acpu_avs_period_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_AACPUAVSRUNROUND_UNION
 �ṹ˵��  : AACPUAVSRUNROUND �Ĵ����ṹ���塣��ַƫ����:0x1EC����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU AVS���������Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  acpu_avs_round : 8;  /* bit[0-7] : CPU AVS����������
                                                         CPU AVSÿ����һ�֣��������1��
                                                         ��CPU AVS��ѹOK�ж���Чʱ������ά�ֲ��䣬�Ա������ȡ��
                                                         ��CPU AVS��ѹOK�ж����ʱ��������0�����¿�ʼ�� */
        unsigned int  reserved       : 24; /* bit[8-31]: ���� */
    } reg;
} SOC_PMCTRL_AACPUAVSRUNROUND_UNION;
#endif
#define SOC_PMCTRL_AACPUAVSRUNROUND_acpu_avs_round_START  (0)
#define SOC_PMCTRL_AACPUAVSRUNROUND_acpu_avs_round_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_PDPARAUDP_UNION
 �ṹ˵��  : PDPARAUDP �Ĵ����ṹ���塣��ַƫ����:0x280����ֵ:0x00000000�����:32
 �Ĵ���˵��: ���ռ��������¼Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pd_avspara_update : 1;  /* bit[0-0] : ���ռ�����ʵʱ���¿��ơ�
                                                            ���������Ĵ���д1�����ռ������������£����������Ĵ���д0����Ч�� */
        unsigned int  reserved          : 31; /* bit[1-31]: ���� */
    } reg;
} SOC_PMCTRL_PDPARAUDP_UNION;
#endif
#define SOC_PMCTRL_PDPARAUDP_pd_avspara_update_START  (0)
#define SOC_PMCTRL_PDPARAUDP_pd_avspara_update_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_PDPARA0_UNION
 �ṹ˵��  : PDPARA0 �Ĵ����ṹ���塣��ַƫ����:0x284����ֵ:0x00510002�����:32
 �Ĵ���˵��: ���ռ������Ĵ���0
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pd_hpm0_clk_div : 6;  /* bit[0-5]  : process detect���ܵ�HPM0ʱ�ӷ�Ƶ����
                                                           �üĴ�������������Ϊ6'h0��
                                                           ����Ϊ6'h1��������������ʱ��Ϊ2��ʱ�����ڣ�����Ϊ6'h2��������������ʱ��Ϊ3��ʱ�����ڣ�����Ϊ6'h3��������������ʱ��Ϊ4��ʱ�����ڣ��������ơ� */
        unsigned int  reserved_0      : 10; /* bit[6-15] : ���� */
        unsigned int  pd_avs_opc_mod  : 2;  /* bit[16-17]: process detec��ͬһ��HPM OPCֵ�Ķ�β�����δ���
                                                           00��OPCȡ��ֵ��
                                                           01��OPCȡ��Сֵ��
                                                           10��OPCȡ���ֵ��
                                                           11�������� */
        unsigned int  reserved_1      : 2;  /* bit[18-19]: ���� */
        unsigned int  pd_avs_hpm_sel  : 3;  /* bit[20-22]: process detect�ж��HPM��PCֵ��δ���
                                                           000��ȡPD HPM0��PCֵ��
                                                           001��ȡPD HPM1��PCֵ��
                                                           010��ȡPD HPM2��PCֵ��
                                                           011��ȡPD HPM3��PCֵ��
                                                           100��������
                                                           101��ȡHPM�е���Сֵ��
                                                           110��ȡHPM�е����ֵ��
                                                           111�������� */
        unsigned int  reserved_2      : 9;  /* bit[23-31]: ���� */
    } reg;
} SOC_PMCTRL_PDPARA0_UNION;
#endif
#define SOC_PMCTRL_PDPARA0_pd_hpm0_clk_div_START  (0)
#define SOC_PMCTRL_PDPARA0_pd_hpm0_clk_div_END    (5)
#define SOC_PMCTRL_PDPARA0_pd_avs_opc_mod_START   (16)
#define SOC_PMCTRL_PDPARA0_pd_avs_opc_mod_END     (17)
#define SOC_PMCTRL_PDPARA0_pd_avs_hpm_sel_START   (20)
#define SOC_PMCTRL_PDPARA0_pd_avs_hpm_sel_END     (22)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_PDPARA1_UNION
 �ṹ˵��  : PDPARA1 �Ĵ����ṹ���塣��ַƫ����:0x288����ֵ:0x00020202�����:32
 �Ĵ���˵��: ���ռ������Ĵ���1
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pd_hpm3_clk_div : 6;  /* bit[0-5]  : process detect���ܵ�HPM3ʱ�ӷ�Ƶ����
                                                           �üĴ�������������Ϊ6'h0��
                                                           ����Ϊ6'h1��������������ʱ��Ϊ2��ʱ�����ڣ�����Ϊ6'h2��������������ʱ��Ϊ3��ʱ�����ڣ�����Ϊ6'h3��������������ʱ��Ϊ4��ʱ�����ڣ��������ơ� */
        unsigned int  reserved_0      : 2;  /* bit[6-7]  : ���� */
        unsigned int  pd_hpm2_clk_div : 6;  /* bit[8-13] : process detect���ܵ�HPM2 ʱ�ӷ�Ƶ����
                                                           �üĴ�������������Ϊ6'h0��
                                                           ����Ϊ6'h1��������������ʱ��Ϊ2��ʱ�����ڣ�����Ϊ6'h2��������������ʱ��Ϊ3��ʱ�����ڣ�����Ϊ6'h3��������������ʱ��Ϊ4��ʱ�����ڣ��������ơ� */
        unsigned int  reserved_1      : 2;  /* bit[14-15]: ���� */
        unsigned int  pd_hpm1_clk_div : 6;  /* bit[16-21]: process detect���ܵ�HPM1ʱ�ӷ�Ƶ����
                                                           �üĴ�������������Ϊ6'h0��
                                                           ����Ϊ6'h1��������������ʱ��Ϊ2��ʱ�����ڣ�����Ϊ6'h2��������������ʱ��Ϊ3��ʱ�����ڣ�����Ϊ6'h3��������������ʱ��Ϊ4��ʱ�����ڣ��������ơ� */
        unsigned int  reserved_2      : 10; /* bit[22-31]: ���� */
    } reg;
} SOC_PMCTRL_PDPARA1_UNION;
#endif
#define SOC_PMCTRL_PDPARA1_pd_hpm3_clk_div_START  (0)
#define SOC_PMCTRL_PDPARA1_pd_hpm3_clk_div_END    (5)
#define SOC_PMCTRL_PDPARA1_pd_hpm2_clk_div_START  (8)
#define SOC_PMCTRL_PDPARA1_pd_hpm2_clk_div_END    (13)
#define SOC_PMCTRL_PDPARA1_pd_hpm1_clk_div_START  (16)
#define SOC_PMCTRL_PDPARA1_pd_hpm1_clk_div_END    (21)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_PDAVSPARA2_UNION
 �ṹ˵��  : PDAVSPARA2 �Ĵ����ṹ���塣��ַƫ����:0x2A0����ֵ:0x090001FF�����:32
 �Ĵ���˵��: ���ռ������Ĵ���2
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pd_avs_sample_num   : 22; /* bit[0-21] : ���ռ����HPM�����������������pd_avs_opc_modΪ0x0ʱ��ֵ����Ϊ2��n�η���1�� */
        unsigned int  reserved_0          : 2;  /* bit[22-23]: ���� */
        unsigned int  pd_avs_sample_shift : 5;  /* bit[24-28]: ���ռ����HPM���������ۼ�ֵ������λ����ͨ����ֵ����Ϊn��n����(2^n)-1=pd_avs_sample_num�� */
        unsigned int  reserved_1          : 3;  /* bit[29-31]: ���� */
    } reg;
} SOC_PMCTRL_PDAVSPARA2_UNION;
#endif
#define SOC_PMCTRL_PDAVSPARA2_pd_avs_sample_num_START    (0)
#define SOC_PMCTRL_PDAVSPARA2_pd_avs_sample_num_END      (21)
#define SOC_PMCTRL_PDAVSPARA2_pd_avs_sample_shift_START  (24)
#define SOC_PMCTRL_PDAVSPARA2_pd_avs_sample_shift_END    (28)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_PDAVSEN_UNION
 �ṹ˵��  : PDAVSEN �Ĵ����ṹ���塣��ַƫ����:0x2E0����ֵ:0x00000000�����:32
 �Ĵ���˵��: ���ռ��ʹ�ܼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pd_avs_en   : 1;  /* bit[0-0] : ���ռ��ʹ�ܡ�
                                                      1'b0�����ռ�⹦�ܹرգ�
                                                      1'b1�����ռ�⹦�ܿ����� */
        unsigned int  pd_avs_trig : 1;  /* bit[1-1] : 
                                                      ���������Ĵ���д1������Ĺ��ռ����������������㣻���������Ĵ���д0����Ч���ڽ��й��ռ�⹦��ʹ��ǰ��ҲҪ�Դ�bitд1�� */
        unsigned int  reserved    : 30; /* bit[2-31]: ���� */
    } reg;
} SOC_PMCTRL_PDAVSEN_UNION;
#endif
#define SOC_PMCTRL_PDAVSEN_pd_avs_en_START    (0)
#define SOC_PMCTRL_PDAVSEN_pd_avs_en_END      (0)
#define SOC_PMCTRL_PDAVSEN_pd_avs_trig_START  (1)
#define SOC_PMCTRL_PDAVSEN_pd_avs_trig_END    (1)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_ACPUHPMCTRL_UNION
 �ṹ˵��  : ACPUHPMCTRL �Ĵ����ṹ���塣��ַƫ����:0x300����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU HPM���ƼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  acpu_hpm_en : 5;  /* bit[0-4] : ACPU��ϵͳHPMʹ�ܡ�
                                                      1'b0��HPM��������
                                                      1'b1��HPM������
                                                      [4:0]���δ���ACPU cluster HPM��Core3 HPM��Core2 HPM��Core1 HPM��Core0 HPM */
        unsigned int  reserved    : 27; /* bit[5-31]: ���� */
    } reg;
} SOC_PMCTRL_ACPUHPMCTRL_UNION;
#endif
#define SOC_PMCTRL_ACPUHPMCTRL_acpu_hpm_en_START  (0)
#define SOC_PMCTRL_ACPUHPMCTRL_acpu_hpm_en_END    (4)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_ACPUHPMOPCVALID_UNION
 �ṹ˵��  : ACPUHPMOPCVALID �Ĵ����ṹ���塣��ַƫ����:0x314����ֵ:0x00001F00�����:32
 �Ĵ���˵��: ACPU HPM OPC��Ч�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  acpu_hpm_opc_vld  : 5;  /* bit[0-4]  : ACPU HPMԭʼ��������Ч��״ָ̬ʾ��
                                                             1'b0��HPM OPC��Ч��
                                                             1'b1��HPM OPC��Ч�� */
        unsigned int  reserved_0        : 3;  /* bit[5-7]  : ���� */
        unsigned int  acpu_hpmx_opc_vld : 5;  /* bit[8-12] : ACPU HPMXԭʼ��������Ч��״ָ̬ʾ��
                                                             1'b0��HPMX OPC��Ч��
                                                             1'b1��HPMX OPC��Ч�� */
        unsigned int  reserved_1        : 15; /* bit[13-27]: ���� */
        unsigned int  acpu_hpm_discard  : 1;  /* bit[28-28]: ���� */
        unsigned int  reserved_2        : 3;  /* bit[29-31]: ���� */
    } reg;
} SOC_PMCTRL_ACPUHPMOPCVALID_UNION;
#endif
#define SOC_PMCTRL_ACPUHPMOPCVALID_acpu_hpm_opc_vld_START   (0)
#define SOC_PMCTRL_ACPUHPMOPCVALID_acpu_hpm_opc_vld_END     (4)
#define SOC_PMCTRL_ACPUHPMOPCVALID_acpu_hpmx_opc_vld_START  (8)
#define SOC_PMCTRL_ACPUHPMOPCVALID_acpu_hpmx_opc_vld_END    (12)
#define SOC_PMCTRL_ACPUHPMOPCVALID_acpu_hpm_discard_START   (28)
#define SOC_PMCTRL_ACPUHPMOPCVALID_acpu_hpm_discard_END     (28)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_ACPU01HPMOPC_UNION
 �ṹ˵��  : ACPU01HPMOPC �Ĵ����ṹ���塣��ַƫ����:0x318����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU01 HPM OPC�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  acpu0_hpm_opc        : 10; /* bit[0-9]  : CPU0 HPMԭʼ�����롣 */
        unsigned int  acpu1_hpm_opc        : 10; /* bit[10-19]: CPU1 HPMԭʼ�����롣 */
        unsigned int  acpu_cluster_hpm_opc : 10; /* bit[20-29]: ACPU cluster HPMԭʼ�����롣 */
        unsigned int  reserved             : 2;  /* bit[30-31]: ���� */
    } reg;
} SOC_PMCTRL_ACPU01HPMOPC_UNION;
#endif
#define SOC_PMCTRL_ACPU01HPMOPC_acpu0_hpm_opc_START         (0)
#define SOC_PMCTRL_ACPU01HPMOPC_acpu0_hpm_opc_END           (9)
#define SOC_PMCTRL_ACPU01HPMOPC_acpu1_hpm_opc_START         (10)
#define SOC_PMCTRL_ACPU01HPMOPC_acpu1_hpm_opc_END           (19)
#define SOC_PMCTRL_ACPU01HPMOPC_acpu_cluster_hpm_opc_START  (20)
#define SOC_PMCTRL_ACPU01HPMOPC_acpu_cluster_hpm_opc_END    (29)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_ACPU23HPMOPC_UNION
 �ṹ˵��  : ACPU23HPMOPC �Ĵ����ṹ���塣��ַƫ����:0x31C����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU23 HPM OPC�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  acpu2_hpm_opc : 10; /* bit[0-9]  : ACPU2 HPMԭʼ�����롣 */
        unsigned int  acpu3_hpm_opc : 10; /* bit[10-19]: ACPU3 HPMԭʼ�����롣 */
        unsigned int  reserved      : 12; /* bit[20-31]: ���� */
    } reg;
} SOC_PMCTRL_ACPU23HPMOPC_UNION;
#endif
#define SOC_PMCTRL_ACPU23HPMOPC_acpu2_hpm_opc_START  (0)
#define SOC_PMCTRL_ACPU23HPMOPC_acpu2_hpm_opc_END    (9)
#define SOC_PMCTRL_ACPU23HPMOPC_acpu3_hpm_opc_START  (10)
#define SOC_PMCTRL_ACPU23HPMOPC_acpu3_hpm_opc_END    (19)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_ACPU01HPMPC_UNION
 �ṹ˵��  : ACPU01HPMPC �Ĵ����ṹ���塣��ַƫ����:0x330����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU01 HPM PC�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  acpu0_hpm_pc_avs        : 10; /* bit[0-9]  : CPU0 HPM�����롣 */
        unsigned int  acpu1_hpm_pc_avs        : 10; /* bit[10-19]: CPU1 HPM�����롣 */
        unsigned int  acpu_cluster_hpm_pc_avs : 10; /* bit[20-29]: ACPU cluster HPM�����롣 */
        unsigned int  reserved                : 2;  /* bit[30-31]: ���� */
    } reg;
} SOC_PMCTRL_ACPU01HPMPC_UNION;
#endif
#define SOC_PMCTRL_ACPU01HPMPC_acpu0_hpm_pc_avs_START         (0)
#define SOC_PMCTRL_ACPU01HPMPC_acpu0_hpm_pc_avs_END           (9)
#define SOC_PMCTRL_ACPU01HPMPC_acpu1_hpm_pc_avs_START         (10)
#define SOC_PMCTRL_ACPU01HPMPC_acpu1_hpm_pc_avs_END           (19)
#define SOC_PMCTRL_ACPU01HPMPC_acpu_cluster_hpm_pc_avs_START  (20)
#define SOC_PMCTRL_ACPU01HPMPC_acpu_cluster_hpm_pc_avs_END    (29)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_ACPU23HPMPC_UNION
 �ṹ˵��  : ACPU23HPMPC �Ĵ����ṹ���塣��ַƫ����:0x334����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU23 HPM PC�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  acpu2_hpm_pc_avs : 10; /* bit[0-9]  : CPU2 HPM�����롣 */
        unsigned int  acpu3_hpm_pc_avs : 10; /* bit[10-19]: CPU3 HPM�����롣 */
        unsigned int  reserved         : 12; /* bit[20-31]: ���� */
    } reg;
} SOC_PMCTRL_ACPU23HPMPC_UNION;
#endif
#define SOC_PMCTRL_ACPU23HPMPC_acpu2_hpm_pc_avs_START  (0)
#define SOC_PMCTRL_ACPU23HPMPC_acpu2_hpm_pc_avs_END    (9)
#define SOC_PMCTRL_ACPU23HPMPC_acpu3_hpm_pc_avs_START  (10)
#define SOC_PMCTRL_ACPU23HPMPC_acpu3_hpm_pc_avs_END    (19)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_ACPUHPMBYPASS_UNION
 �ṹ˵��  : ACPUHPMBYPASS �Ĵ����ṹ���塣��ַƫ����:0x33C����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU HPM��·�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  acpu_hpmclk_bypass : 5;  /* bit[0-4] : ACPU��ϵͳHPMʱ����·�Ĵ�����
                                                             [4:0]���δ���ACPU cluster HPM��Core3 HPM��Core2 HPM��Core1 HPM��Core0 HPM��
                                                             1'b0��Ӳ����⵽��ӦHPMʱ�ӹر�ʱ���Զ�ȥʹ��AVS�Ը�HPM�Ŀ��ƣ�
                                                             1'b1�����۶�ӦHPMʱ�ӹر����AVS�����Ƹ�HPM */
        unsigned int  reserved           : 27; /* bit[5-31]: ���� */
    } reg;
} SOC_PMCTRL_ACPUHPMBYPASS_UNION;
#endif
#define SOC_PMCTRL_ACPUHPMBYPASS_acpu_hpmclk_bypass_START  (0)
#define SOC_PMCTRL_ACPUHPMBYPASS_acpu_hpmclk_bypass_END    (4)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_ACPUPMUVOLUPTIME_UNION
 �ṹ˵��  : ACPUPMUVOLUPTIME �Ĵ����ṹ���塣��ַƫ����:0x360����ֵ:0x00000080�����:32
 �Ĵ���˵��: ACPU��ѹ�����ȶ�ʱ��Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  acpu_vol_up_time : 20; /* bit[0-19] : CPU��ѹ�����ȶ�ʱ�䡣 */
        unsigned int  reserved         : 12; /* bit[20-31]: ���� */
    } reg;
} SOC_PMCTRL_ACPUPMUVOLUPTIME_UNION;
#endif
#define SOC_PMCTRL_ACPUPMUVOLUPTIME_acpu_vol_up_time_START  (0)
#define SOC_PMCTRL_ACPUPMUVOLUPTIME_acpu_vol_up_time_END    (19)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_ACPUPMUVOLDNTIME_UNION
 �ṹ˵��  : ACPUPMUVOLDNTIME �Ĵ����ṹ���塣��ַƫ����:0x364����ֵ:0x00000080�����:32
 �Ĵ���˵��: ACPU��ѹ�½��ȶ�ʱ��Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  acpu_vol_dw_time : 20; /* bit[0-19] : CPU��ѹ�½��ȶ�ʱ�䡣 */
        unsigned int  reserved         : 12; /* bit[20-31]: ���� */
    } reg;
} SOC_PMCTRL_ACPUPMUVOLDNTIME_UNION;
#endif
#define SOC_PMCTRL_ACPUPMUVOLDNTIME_acpu_vol_dw_time_START  (0)
#define SOC_PMCTRL_ACPUPMUVOLDNTIME_acpu_vol_dw_time_END    (19)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_ACPUVOLPMUADDR_UNION
 �ṹ˵��  : ACPUVOLPMUADDR �Ĵ����ṹ���塣��ַƫ����:0x368����ֵ:0x0000006C�����:32
 �Ĵ���˵��: ACPU��ѹ���õ�ַ�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  acpu_vol_addr        : 9;  /* bit[0-8]  : ACPU��ѹ���üĴ�����ַ�� */
        unsigned int  reserved_0           : 7;  /* bit[9-15] : ���� */
        unsigned int  acpu_force_pmussi_en : 1;  /* bit[16-16]: ǿ�ƴ�PMUSSIģ���ѹ�ӿ�ͨ��ʹ�ܡ�
                                                                1'b0����ʹ�ܣ�
                                                                1'b1��ʹ�ܡ� */
        unsigned int  reserved_1           : 15; /* bit[17-31]: ���� */
    } reg;
} SOC_PMCTRL_ACPUVOLPMUADDR_UNION;
#endif
#define SOC_PMCTRL_ACPUVOLPMUADDR_acpu_vol_addr_START         (0)
#define SOC_PMCTRL_ACPUVOLPMUADDR_acpu_vol_addr_END           (8)
#define SOC_PMCTRL_ACPUVOLPMUADDR_acpu_force_pmussi_en_START  (16)
#define SOC_PMCTRL_ACPUVOLPMUADDR_acpu_force_pmussi_en_END    (16)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_ACPUVOLUPSTEP_UNION
 �ṹ˵��  : ACPUVOLUPSTEP �Ĵ����ṹ���塣��ַƫ����:0x36C����ֵ:0x00000001�����:32
 �Ĵ���˵��: ACPU��ѹ���������Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  acpu_vol_up_step : 7;  /* bit[0-6] : ACPU��ѹ���������Ĵ�����
                                                           �üĴ�������������Ϊ0�� */
        unsigned int  reserved         : 25; /* bit[7-31]: ���� */
    } reg;
} SOC_PMCTRL_ACPUVOLUPSTEP_UNION;
#endif
#define SOC_PMCTRL_ACPUVOLUPSTEP_acpu_vol_up_step_START  (0)
#define SOC_PMCTRL_ACPUVOLUPSTEP_acpu_vol_up_step_END    (6)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_ACPUVOLDNSTEP_UNION
 �ṹ˵��  : ACPUVOLDNSTEP �Ĵ����ṹ���塣��ַƫ����:0x370����ֵ:0x00000001�����:32
 �Ĵ���˵��: ACPU��ѹ���Ͳ����Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  acpu_vol_dn_step : 7;  /* bit[0-6] : ACPU��ѹ���Ͳ����Ĵ�����
                                                           �üĴ�������������Ϊ0�� */
        unsigned int  reserved         : 25; /* bit[7-31]: ���� */
    } reg;
} SOC_PMCTRL_ACPUVOLDNSTEP_UNION;
#endif
#define SOC_PMCTRL_ACPUVOLDNSTEP_acpu_vol_dn_step_START  (0)
#define SOC_PMCTRL_ACPUVOLDNSTEP_acpu_vol_dn_step_END    (6)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_ACPUDFTVOL_UNION
 �ṹ˵��  : ACPUDFTVOL �Ĵ����ṹ���塣��ַƫ����:0x374����ֵ:0x0000001F�����:32
 �Ĵ���˵��: ACPUĬ�ϵ�ѹ���üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  acpu_dft_vol : 7;  /* bit[0-6] : ACPUĬ�ϵ�ѹ���üĴ�����
                                                       �üĴ�����������ACPU��Ĭ�ϵ�ѹ��ģ����ΰ�����������ѹʱ��Ҫ�ڸüĴ������õ�ѹ�Ļ����Ͻ��С� */
        unsigned int  reserved     : 25; /* bit[7-31]: ���� */
    } reg;
} SOC_PMCTRL_ACPUDFTVOL_UNION;
#endif
#define SOC_PMCTRL_ACPUDFTVOL_acpu_dft_vol_START  (0)
#define SOC_PMCTRL_ACPUDFTVOL_acpu_dft_vol_END    (6)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_ACPUDESTVOL_UNION
 �ṹ˵��  : ACPUDESTVOL �Ĵ����ṹ���塣��ַƫ����:0x378����ֵ:0x00001F1F�����:32
 �Ĵ���˵��: ACPUĿ���ѹ���üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  acpu_dest_vol  : 7;  /* bit[0-6]  : ACPUĿ���ѹ���üĴ�����
                                                          �üĴ�����������ACPU��Ŀ���ѹ��������ɺ�ģ������PMU����ѹ�������üĴ�����Ӧֵ�� */
        unsigned int  reserved_0     : 1;  /* bit[7-7]  : ���� */
        unsigned int  acpu_vol_using : 7;  /* bit[8-14] : ACPU����ʹ�õĵ�ѹ�� */
        unsigned int  reserved_1     : 17; /* bit[15-31]: ���� */
    } reg;
} SOC_PMCTRL_ACPUDESTVOL_UNION;
#endif
#define SOC_PMCTRL_ACPUDESTVOL_acpu_dest_vol_START   (0)
#define SOC_PMCTRL_ACPUDESTVOL_acpu_dest_vol_END     (6)
#define SOC_PMCTRL_ACPUDESTVOL_acpu_vol_using_START  (8)
#define SOC_PMCTRL_ACPUDESTVOL_acpu_vol_using_END    (14)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_ACPUVOLTIMEOUT_UNION
 �ṹ˵��  : ACPUVOLTIMEOUT �Ĵ����ṹ���塣��ַƫ����:0x37C����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU��ѹ�ȶ�ָʾ�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  acpu_vol_timeout : 1;  /* bit[0-0] : ACPU��ѹ�ȶ�ָʾ��
                                                           1'b0����ѹδ�ȶ���
                                                           1'b1����ѹ���ȶ��� */
        unsigned int  reserved         : 31; /* bit[1-31]: ���� */
    } reg;
} SOC_PMCTRL_ACPUVOLTIMEOUT_UNION;
#endif
#define SOC_PMCTRL_ACPUVOLTIMEOUT_acpu_vol_timeout_START  (0)
#define SOC_PMCTRL_ACPUVOLTIMEOUT_acpu_vol_timeout_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_PDHPMCTRL_UNION
 �ṹ˵��  : PDHPMCTRL �Ĵ����ṹ���塣��ַƫ����:0x380����ֵ:0x00000000�����:32
 �Ĵ���˵��: ���ռ��HPM���ƼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pd_hpm_en : 4;  /* bit[0-3] : ���ռ����HPMʹ�ܡ�
                                                    1'b0��HPM��������
                                                    1'b1��HPM������
                                                    [3:0]���δ���HPM3��HPM2��HPM1��HPM0�� */
        unsigned int  reserved  : 28; /* bit[4-31]: ���� */
    } reg;
} SOC_PMCTRL_PDHPMCTRL_UNION;
#endif
#define SOC_PMCTRL_PDHPMCTRL_pd_hpm_en_START  (0)
#define SOC_PMCTRL_PDHPMCTRL_pd_hpm_en_END    (3)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_PDHPMOPCVALID_UNION
 �ṹ˵��  : PDHPMOPCVALID �Ĵ����ṹ���塣��ַƫ����:0x394����ֵ:0x00000F00�����:32
 �Ĵ���˵��: ���ռ��HPM OPC��Ч�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pd_hpm0_opc_vld  : 1;  /* bit[0-0]  : ���ռ���õ�HPM0ԭʼ��������Ч��״ָ̬ʾ��
                                                            1'b0��HPM OPC��Ч��
                                                            1'b1��HPM OPC��Ч�� */
        unsigned int  pd_hpm1_opc_vld  : 1;  /* bit[1-1]  : ���ռ���õ�HPM1ԭʼ��������Ч��״ָ̬ʾ��
                                                            1'b0��HPM OPC��Ч��
                                                            1'b1��HPM OPC��Ч�� */
        unsigned int  pd_hpm2_opc_vld  : 1;  /* bit[2-2]  : ���ռ���õ�HPM2ԭʼ��������Ч��״ָ̬ʾ��
                                                            1'b0��HPM OPC��Ч��
                                                            1'b1��HPM OPC��Ч�� */
        unsigned int  pd_hpm3_opc_vld  : 1;  /* bit[3-3]  : ���ռ���õ�HPM3ԭʼ��������Ч��״ָ̬ʾ��
                                                            1'b0��HPM OPC��Ч��
                                                            1'b1��HPM OPC��Ч�� */
        unsigned int  reserved_0       : 4;  /* bit[4-7]  : ���� */
        unsigned int  pd_hpmx0_opc_vld : 1;  /* bit[8-8]  : ���ռ���õ�HPMX0ԭʼ��������Ч��״ָ̬ʾ�� */
        unsigned int  pd_hpmx1_opc_vld : 1;  /* bit[9-9]  : ���ռ���õ�HPMX1ԭʼ��������Ч��״ָ̬ʾ�� */
        unsigned int  pd_hpmx2_opc_vld : 1;  /* bit[10-10]: ���ռ���õ�HPMX2ԭʼ��������Ч��״ָ̬ʾ�� */
        unsigned int  pd_hpmx3_opc_vld : 1;  /* bit[11-11]: ���ռ���õ�HPMX3ԭʼ��������Ч��״ָ̬ʾ�� */
        unsigned int  reserved_1       : 20; /* bit[12-31]: ���� */
    } reg;
} SOC_PMCTRL_PDHPMOPCVALID_UNION;
#endif
#define SOC_PMCTRL_PDHPMOPCVALID_pd_hpm0_opc_vld_START   (0)
#define SOC_PMCTRL_PDHPMOPCVALID_pd_hpm0_opc_vld_END     (0)
#define SOC_PMCTRL_PDHPMOPCVALID_pd_hpm1_opc_vld_START   (1)
#define SOC_PMCTRL_PDHPMOPCVALID_pd_hpm1_opc_vld_END     (1)
#define SOC_PMCTRL_PDHPMOPCVALID_pd_hpm2_opc_vld_START   (2)
#define SOC_PMCTRL_PDHPMOPCVALID_pd_hpm2_opc_vld_END     (2)
#define SOC_PMCTRL_PDHPMOPCVALID_pd_hpm3_opc_vld_START   (3)
#define SOC_PMCTRL_PDHPMOPCVALID_pd_hpm3_opc_vld_END     (3)
#define SOC_PMCTRL_PDHPMOPCVALID_pd_hpmx0_opc_vld_START  (8)
#define SOC_PMCTRL_PDHPMOPCVALID_pd_hpmx0_opc_vld_END    (8)
#define SOC_PMCTRL_PDHPMOPCVALID_pd_hpmx1_opc_vld_START  (9)
#define SOC_PMCTRL_PDHPMOPCVALID_pd_hpmx1_opc_vld_END    (9)
#define SOC_PMCTRL_PDHPMOPCVALID_pd_hpmx2_opc_vld_START  (10)
#define SOC_PMCTRL_PDHPMOPCVALID_pd_hpmx2_opc_vld_END    (10)
#define SOC_PMCTRL_PDHPMOPCVALID_pd_hpmx3_opc_vld_START  (11)
#define SOC_PMCTRL_PDHPMOPCVALID_pd_hpmx3_opc_vld_END    (11)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_PDHPMOPC0_UNION
 �ṹ˵��  : PDHPMOPC0 �Ĵ����ṹ���塣��ַƫ����:0x398����ֵ:0x00000000�����:32
 �Ĵ���˵��: ���ռ��HPM OPC�Ĵ���0
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pd_hpm0_opc : 10; /* bit[0-9]  : ���ռ�� HPM0ԭʼ�����롣 */
        unsigned int  pd_hpm1_opc : 10; /* bit[10-19]: ���ռ�� HPM1ԭʼ�����롣 */
        unsigned int  reserved    : 12; /* bit[20-31]: ���� */
    } reg;
} SOC_PMCTRL_PDHPMOPC0_UNION;
#endif
#define SOC_PMCTRL_PDHPMOPC0_pd_hpm0_opc_START  (0)
#define SOC_PMCTRL_PDHPMOPC0_pd_hpm0_opc_END    (9)
#define SOC_PMCTRL_PDHPMOPC0_pd_hpm1_opc_START  (10)
#define SOC_PMCTRL_PDHPMOPC0_pd_hpm1_opc_END    (19)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_PDHPMOPC1_UNION
 �ṹ˵��  : PDHPMOPC1 �Ĵ����ṹ���塣��ַƫ����:0x39C����ֵ:0x00000000�����:32
 �Ĵ���˵��: ���ռ��HPM OPC�Ĵ���1
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pd_hpm2_opc : 10; /* bit[0-9]  : ���ռ�� HPM1ԭʼ�����롣 */
        unsigned int  pd_hpm3_opc : 10; /* bit[10-19]: ���ռ�� HPM2ԭʼ�����롣 */
        unsigned int  reserved    : 12; /* bit[20-31]: ���� */
    } reg;
} SOC_PMCTRL_PDHPMOPC1_UNION;
#endif
#define SOC_PMCTRL_PDHPMOPC1_pd_hpm2_opc_START  (0)
#define SOC_PMCTRL_PDHPMOPC1_pd_hpm2_opc_END    (9)
#define SOC_PMCTRL_PDHPMOPC1_pd_hpm3_opc_START  (10)
#define SOC_PMCTRL_PDHPMOPC1_pd_hpm3_opc_END    (19)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_PDHPMPC0_UNION
 �ṹ˵��  : PDHPMPC0 �Ĵ����ṹ���塣��ַƫ����:0x3A8����ֵ:0x00000000�����:32
 �Ĵ���˵��: ���ռ��HPM PC�Ĵ���0
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pd_hpm0_pc_avs : 10; /* bit[0-9]  : ���ռ�� HPM0�����롣 */
        unsigned int  pd_hpm1_pc_avs : 10; /* bit[10-19]: ���ռ�� HPM1�����롣 */
        unsigned int  reserved       : 12; /* bit[20-31]: ���� */
    } reg;
} SOC_PMCTRL_PDHPMPC0_UNION;
#endif
#define SOC_PMCTRL_PDHPMPC0_pd_hpm0_pc_avs_START  (0)
#define SOC_PMCTRL_PDHPMPC0_pd_hpm0_pc_avs_END    (9)
#define SOC_PMCTRL_PDHPMPC0_pd_hpm1_pc_avs_START  (10)
#define SOC_PMCTRL_PDHPMPC0_pd_hpm1_pc_avs_END    (19)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_PDHPMPC1_UNION
 �ṹ˵��  : PDHPMPC1 �Ĵ����ṹ���塣��ַƫ����:0x3AC����ֵ:0x00000000�����:32
 �Ĵ���˵��: ���ռ��HPM PC�Ĵ���1
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pd_hpm2_pc_avs : 10; /* bit[0-9]  : ���ռ�� HPM2�����롣 */
        unsigned int  pd_hpm3_pc_avs : 10; /* bit[10-19]: ���ռ�� HPM3�����롣 */
        unsigned int  reserved       : 12; /* bit[20-31]: ���� */
    } reg;
} SOC_PMCTRL_PDHPMPC1_UNION;
#endif
#define SOC_PMCTRL_PDHPMPC1_pd_hpm2_pc_avs_START  (0)
#define SOC_PMCTRL_PDHPMPC1_pd_hpm2_pc_avs_END    (9)
#define SOC_PMCTRL_PDHPMPC1_pd_hpm3_pc_avs_START  (10)
#define SOC_PMCTRL_PDHPMPC1_pd_hpm3_pc_avs_END    (19)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_PDHPMPC_UNION
 �ṹ˵��  : PDHPMPC �Ĵ����ṹ���塣��ַƫ����:0x3B0����ֵ:0x00000000�����:32
 �Ĵ���˵��: ���ռ���������Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  hpm_opc_cmp : 10; /* bit[0-9]  : ���ڹ��ռ���4��HPM�������������롣 */
        unsigned int  reserved    : 22; /* bit[10-31]: ���� */
    } reg;
} SOC_PMCTRL_PDHPMPC_UNION;
#endif
#define SOC_PMCTRL_PDHPMPC_hpm_opc_cmp_START  (0)
#define SOC_PMCTRL_PDHPMPC_hpm_opc_cmp_END    (9)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_PMCINTRAW_UNION
 �ṹ˵��  : PMCINTRAW �Ĵ����ṹ���塣��ַƫ����:0x480����ֵ:0x00000000�����:32
 �Ĵ���˵��: PMC�ж�ԭʼ״̬�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  int_raw  : 10; /* bit[0-9]  : ԭʼ�жϼĴ���������Ч��
                                                    [9]��DDR DFS����жϣ�
                                                    [8]��DDR DFS����DDRC�����жϣ�
                                                    [7]�����ռ��HPM���PC�жϣ�
                                                    [6]��ACPU VDģ����������жϣ�
                                                    [5]��ACPU DVFS����жϣ�
                                                    [4]��ACPU AVS����жϣ�
                                                    [3]��ACPU AVS���PC�жϣ�
                                                    [2]��ACPU AVS���͵�ѹ�����жϣ�
                                                    [1]��ACPU AVS������ѹ�����жϣ�
                                                    [0]��ACPU AVS��ѹOK�жϡ� */
        unsigned int  reserved : 22; /* bit[10-31]: ���� */
    } reg;
} SOC_PMCTRL_PMCINTRAW_UNION;
#endif
#define SOC_PMCTRL_PMCINTRAW_int_raw_START   (0)
#define SOC_PMCTRL_PMCINTRAW_int_raw_END     (9)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_PMCINTCLR_UNION
 �ṹ˵��  : PMCINTCLR �Ĵ����ṹ���塣��ַƫ����:0x484����ֵ:0x00000000�����:32
 �Ĵ���˵��: PMC�ж�����Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  int_clr  : 10; /* bit[0-9]  : �ж������ÿ1Bit��ӦPMCINTRAW�Ĵ����Ķ�ӦBit��
                                                    д0����Ч��
                                                    д1������жϡ� */
        unsigned int  reserved : 22; /* bit[10-31]: ���� */
    } reg;
} SOC_PMCTRL_PMCINTCLR_UNION;
#endif
#define SOC_PMCTRL_PMCINTCLR_int_clr_START   (0)
#define SOC_PMCTRL_PMCINTCLR_int_clr_END     (9)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_PMCINTENMCU_UNION
 �ṹ˵��  : PMCINTENMCU �Ĵ����ṹ���塣��ַƫ����:0x488����ֵ:0x00000000�����:32
 �Ĵ���˵��: PMC��MCU�жϵ�����Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  int_mcu_en : 10; /* bit[0-9]  : �͸�MCU�жϵ��ж�ʹ�ܣ�ÿ1Bit��ӦPMCINTRAW�Ĵ����Ķ�ӦBit��
                                                      д0���ж����Σ�
                                                      д1���ж�ʹ�ܡ� */
        unsigned int  reserved   : 22; /* bit[10-31]: ���� */
    } reg;
} SOC_PMCTRL_PMCINTENMCU_UNION;
#endif
#define SOC_PMCTRL_PMCINTENMCU_int_mcu_en_START  (0)
#define SOC_PMCTRL_PMCINTENMCU_int_mcu_en_END    (9)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_PMCINTSTATMCU_UNION
 �ṹ˵��  : PMCINTSTATMCU �Ĵ����ṹ���塣��ַƫ����:0x48C����ֵ:0x00000000�����:32
 �Ĵ���˵��: PMC��MCU�жϵ������״̬�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  int_mcu_stat : 10; /* bit[0-9]  : �͸�MCU�жϵ����κ��ж�״̬��ÿ1Bit��ӦPMCINTRAW�Ĵ����Ķ�ӦBit��
                                                        0���ж���Ч��
                                                        1���ж���Ч�� */
        unsigned int  reserved     : 22; /* bit[10-31]: ���� */
    } reg;
} SOC_PMCTRL_PMCINTSTATMCU_UNION;
#endif
#define SOC_PMCTRL_PMCINTSTATMCU_int_mcu_stat_START  (0)
#define SOC_PMCTRL_PMCINTSTATMCU_int_mcu_stat_END    (9)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_PMCINTENACPU_UNION
 �ṹ˵��  : PMCINTENACPU �Ĵ����ṹ���塣��ַƫ����:0x490����ֵ:0x00000000�����:32
 �Ĵ���˵��: PMC��ACPU�жϵ�����Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  int_acpu_en : 10; /* bit[0-9]  : �͸�ACPU�жϵ��ж�ʹ�ܣ�ÿ1Bit��ӦPMCINTRAW�Ĵ����Ķ�ӦBit��
                                                       д0���ж����Σ�
                                                       д1���ж�ʹ�ܡ� */
        unsigned int  reserved    : 22; /* bit[10-31]: ���� */
    } reg;
} SOC_PMCTRL_PMCINTENACPU_UNION;
#endif
#define SOC_PMCTRL_PMCINTENACPU_int_acpu_en_START  (0)
#define SOC_PMCTRL_PMCINTENACPU_int_acpu_en_END    (9)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_PMCINTSTATACPU_UNION
 �ṹ˵��  : PMCINTSTATACPU �Ĵ����ṹ���塣��ַƫ����:0x494����ֵ:0x00000000�����:32
 �Ĵ���˵��: PMC��ACPU�жϵ������״̬�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  int_acpu_stat : 10; /* bit[0-9]  : �͸�ACPU�жϵ����κ��ж�״̬��ÿ1Bit��ӦPMCINTRAW�Ĵ����Ķ�ӦBit��
                                                         0���ж���Ч��
                                                         1���ж���Ч�� */
        unsigned int  reserved      : 22; /* bit[10-31]: ���� */
    } reg;
} SOC_PMCTRL_PMCINTSTATACPU_UNION;
#endif
#define SOC_PMCTRL_PMCINTSTATACPU_int_acpu_stat_START  (0)
#define SOC_PMCTRL_PMCINTSTATACPU_int_acpu_stat_END    (9)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_PMCINTENMCPU_UNION
 �ṹ˵��  : PMCINTENMCPU �Ĵ����ṹ���塣��ַƫ����:0x498����ֵ:0x00000000�����:32
 �Ĵ���˵��: PMC��MCPU�жϵ�����Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  int_mcpu_en : 10; /* bit[0-9]  : �͸�MCPU�жϵ��ж�ʹ�ܣ�ÿ1Bit��ӦPMCINTRAW�Ĵ����Ķ�ӦBit��
                                                       д0���ж����Σ�
                                                       д1���ж�ʹ�ܡ� */
        unsigned int  reserved    : 22; /* bit[10-31]: ���� */
    } reg;
} SOC_PMCTRL_PMCINTENMCPU_UNION;
#endif
#define SOC_PMCTRL_PMCINTENMCPU_int_mcpu_en_START  (0)
#define SOC_PMCTRL_PMCINTENMCPU_int_mcpu_en_END    (9)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_PMCINTSTATMCPU_UNION
 �ṹ˵��  : PMCINTSTATMCPU �Ĵ����ṹ���塣��ַƫ����:0x49C����ֵ:0x00000000�����:32
 �Ĵ���˵��: PMC��MCPU�жϵ������״̬�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  int_mcpu_stat : 10; /* bit[0-9]  : �͸�MCPU�жϵ����κ��ж�״̬��ÿ1Bit��ӦPMCINTRAW�Ĵ����Ķ�ӦBit��
                                                         0���ж���Ч��
                                                         1���ж���Ч�� */
        unsigned int  reserved      : 22; /* bit[10-31]: ���� */
    } reg;
} SOC_PMCTRL_PMCINTSTATMCPU_UNION;
#endif
#define SOC_PMCTRL_PMCINTSTATMCPU_int_mcpu_stat_START  (0)
#define SOC_PMCTRL_PMCINTSTATMCPU_int_mcpu_stat_END    (9)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_PMCSTATUS_UNION
 �ṹ˵��  : PMCSTATUS �Ĵ����ṹ���塣��ַƫ����:0x4A0����ֵ:0x00000000�����:32
 �Ĵ���˵��: PMC״̬�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  acpu_dvfs_stat      : 4;  /* bit[0-3]  : ACPU DVFS״̬����ǰ״̬�� */
        unsigned int  reserved_0          : 4;  /* bit[4-7]  : ���� */
        unsigned int  acpu_avs_stat       : 3;  /* bit[8-10] : ACPU AVS״̬����ǰ״̬�� */
        unsigned int  reserved_1          : 1;  /* bit[11-11]: ���� */
        unsigned int  ddr_pllsw_stat      : 3;  /* bit[12-14]: DDR PLLSW״̬����ǰ״̬�� */
        unsigned int  reserved_2          : 1;  /* bit[15-15]: ���� */
        unsigned int  process_detect_stat : 3;  /* bit[16-18]: ���ռ��״̬����ǰ״̬�� */
        unsigned int  reserved_3          : 9;  /* bit[19-27]: ���� */
        unsigned int  ddr_dfs_stat        : 3;  /* bit[28-30]: DDR DFS״̬����ǰ״̬�� */
        unsigned int  reserved_4          : 1;  /* bit[31-31]: ���� */
    } reg;
} SOC_PMCTRL_PMCSTATUS_UNION;
#endif
#define SOC_PMCTRL_PMCSTATUS_acpu_dvfs_stat_START       (0)
#define SOC_PMCTRL_PMCSTATUS_acpu_dvfs_stat_END         (3)
#define SOC_PMCTRL_PMCSTATUS_acpu_avs_stat_START        (8)
#define SOC_PMCTRL_PMCSTATUS_acpu_avs_stat_END          (10)
#define SOC_PMCTRL_PMCSTATUS_ddr_pllsw_stat_START       (12)
#define SOC_PMCTRL_PMCSTATUS_ddr_pllsw_stat_END         (14)
#define SOC_PMCTRL_PMCSTATUS_process_detect_stat_START  (16)
#define SOC_PMCTRL_PMCSTATUS_process_detect_stat_END    (18)
#define SOC_PMCTRL_PMCSTATUS_ddr_dfs_stat_START         (28)
#define SOC_PMCTRL_PMCSTATUS_ddr_dfs_stat_END           (30)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_DDRCLKSEL_UNION
 �ṹ˵��  : DDRCLKSEL �Ĵ����ṹ���塣��ַƫ����:0x580����ֵ:0x00000101�����:32
 �Ĵ���˵��: DDRCʱ��ѡ��Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ddr_pllsw_cfg      : 2;  /* bit[0-1]  : ��ǰDDRCʱ��ѡ���ĸ�ʱ�ӵ����á�
                                                              00��reserved��
                                                              01��DDRCʱ����Դ��SYS PLL��
                                                              10��DDRCʱ����Դ��DDR PLL0��
                                                              11��DDRCʱ����Դ��DDR PLL1�� */
        unsigned int  reserved_0         : 6;  /* bit[2-7]  : ������ */
        unsigned int  ddr_syspll_sw_ack  : 1;  /* bit[8-8]  : ��ǰDDRCʱ��ѡ���ĸ�ʱ�ӵ�״ָ̬ʾ��
                                                              1'b1:DDRCʱ����Դ��SYSPLL��
                                                              1'b0:DDRCʱ�Ӳ�����Դ��SYSPLL�� */
        unsigned int  ddr_ddrpll0_sw_ack : 1;  /* bit[9-9]  : ��ǰDDRCʱ��ѡ���ĸ�ʱ�ӵ�״ָ̬ʾ��
                                                              1'b1:DDRCʱ����Դ��DDRPLL0��
                                                              1'b0:DDRCʱ�Ӳ�����Դ��DDRPLL0�� */
        unsigned int  ddr_ddrpll1_sw_ack : 1;  /* bit[10-10]: ��ǰDDRCʱ��ѡ���ĸ�ʱ�ӵ�״ָ̬ʾ��
                                                              1'b1:DDRCʱ����Դ��DDRPLL1��
                                                              1'b0:DDRCʱ�Ӳ�����Դ��DDRPLL1�� */
        unsigned int  reserved_1         : 21; /* bit[11-31]: ���� */
    } reg;
} SOC_PMCTRL_DDRCLKSEL_UNION;
#endif
#define SOC_PMCTRL_DDRCLKSEL_ddr_pllsw_cfg_START       (0)
#define SOC_PMCTRL_DDRCLKSEL_ddr_pllsw_cfg_END         (1)
#define SOC_PMCTRL_DDRCLKSEL_ddr_syspll_sw_ack_START   (8)
#define SOC_PMCTRL_DDRCLKSEL_ddr_syspll_sw_ack_END     (8)
#define SOC_PMCTRL_DDRCLKSEL_ddr_ddrpll0_sw_ack_START  (9)
#define SOC_PMCTRL_DDRCLKSEL_ddr_ddrpll0_sw_ack_END    (9)
#define SOC_PMCTRL_DDRCLKSEL_ddr_ddrpll1_sw_ack_START  (10)
#define SOC_PMCTRL_DDRCLKSEL_ddr_ddrpll1_sw_ack_END    (10)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_DDRLPCTRL_UNION
 �ṹ˵��  : DDRLPCTRL �Ĵ����ṹ���塣��ַƫ����:0x588����ֵ:0x00000031�����:32
 �Ĵ���˵��: DDRC LP���ƼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ddrc_csysreq      : 1;  /* bit[0-0] : ����DDRͨ��0����͹���ģʽ��
                                                            0������DDR����͹���ģʽ��
                                                            1������DDR�˳��͹���ģʽ�� */
        unsigned int  reserved_0        : 3;  /* bit[1-3] : ������ */
        unsigned int  ddrc_csysreq_stat : 1;  /* bit[4-4] : DDR�ĵ͹�������ӿڵ�ǰֵ�� */
        unsigned int  ddrc_csysack      : 1;  /* bit[5-5] : DDR�ĵ͹���Ӧ��ӿڵ�ǰֵ�� */
        unsigned int  reserved_1        : 26; /* bit[6-31]: ���� */
    } reg;
} SOC_PMCTRL_DDRLPCTRL_UNION;
#endif
#define SOC_PMCTRL_DDRLPCTRL_ddrc_csysreq_START       (0)
#define SOC_PMCTRL_DDRLPCTRL_ddrc_csysreq_END         (0)
#define SOC_PMCTRL_DDRLPCTRL_ddrc_csysreq_stat_START  (4)
#define SOC_PMCTRL_DDRLPCTRL_ddrc_csysreq_stat_END    (4)
#define SOC_PMCTRL_DDRLPCTRL_ddrc_csysack_START       (5)
#define SOC_PMCTRL_DDRLPCTRL_ddrc_csysack_END         (5)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_DDRCCLKOFFCFG_UNION
 �ṹ˵��  : DDRCCLKOFFCFG �Ĵ����ṹ���塣��ַƫ����:0x590����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC DFSʱ��ģʽ�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ddrpll_on_idle : 1;  /* bit[0-0] : DDR PLL����ʱ���ؿ��ơ�
                                                         1'b0: DDR PLL��ʹ��ʱ�����رգ�
                                                         1'b1: DDR PLL��ʹ��ʱ��Ȼ�򿪡� */
        unsigned int  reserved       : 31; /* bit[1-31]: ���� */
    } reg;
} SOC_PMCTRL_DDRCCLKOFFCFG_UNION;
#endif
#define SOC_PMCTRL_DDRCCLKOFFCFG_ddrpll_on_idle_START  (0)
#define SOC_PMCTRL_DDRCCLKOFFCFG_ddrpll_on_idle_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_DDRCLKDIVSTAT_UNION
 �ṹ˵��  : DDRCLKDIVSTAT �Ĵ����ṹ���塣��ַƫ����:0x594����ֵ:0x00000007�����:32
 �Ĵ���˵��: DDR DFSʱ�ӷ�Ƶ״̬�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ddrpll_clk_div_stat     : 4;  /* bit[0-3]  : DDRPLLʱ�ӷ�Ƶ״̬�� */
        unsigned int  ddrc_axi_clk_div_stat   : 2;  /* bit[4-5]  : DDRC AXIʱ�ӷ�Ƶ״̬�� */
        unsigned int  reserved_0              : 2;  /* bit[6-7]  : ������ */
        unsigned int  ddr_mmu_clk_div_stat    : 2;  /* bit[8-9]  : mmu��ʱ�ӷ�Ƶ״̬�� */
        unsigned int  reserved_1              : 2;  /* bit[10-11]: ������ */
        unsigned int  ddr_harq_clk_div_stat   : 2;  /* bit[12-13]: harq��ʱ�ӷ�Ƶ״̬�� */
        unsigned int  reserved_2              : 2;  /* bit[14-15]: ������ */
        unsigned int  ddrphy_ref_clk_div_stat : 2;  /* bit[16-17]: DDRPHY refclk��ʱ�ӷ�Ƶ״̬�� */
        unsigned int  reserved_3              : 14; /* bit[18-31]: ���� */
    } reg;
} SOC_PMCTRL_DDRCLKDIVSTAT_UNION;
#endif
#define SOC_PMCTRL_DDRCLKDIVSTAT_ddrpll_clk_div_stat_START      (0)
#define SOC_PMCTRL_DDRCLKDIVSTAT_ddrpll_clk_div_stat_END        (3)
#define SOC_PMCTRL_DDRCLKDIVSTAT_ddrc_axi_clk_div_stat_START    (4)
#define SOC_PMCTRL_DDRCLKDIVSTAT_ddrc_axi_clk_div_stat_END      (5)
#define SOC_PMCTRL_DDRCLKDIVSTAT_ddr_mmu_clk_div_stat_START     (8)
#define SOC_PMCTRL_DDRCLKDIVSTAT_ddr_mmu_clk_div_stat_END       (9)
#define SOC_PMCTRL_DDRCLKDIVSTAT_ddr_harq_clk_div_stat_START    (12)
#define SOC_PMCTRL_DDRCLKDIVSTAT_ddr_harq_clk_div_stat_END      (13)
#define SOC_PMCTRL_DDRCLKDIVSTAT_ddrphy_ref_clk_div_stat_START  (16)
#define SOC_PMCTRL_DDRCLKDIVSTAT_ddrphy_ref_clk_div_stat_END    (17)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_DDRPLLSWEN_UNION
 �ṹ˵��  : DDRPLLSWEN �Ĵ����ṹ���塣��ַƫ����:0x598����ֵ:0x00000010�����:32
 �Ĵ���˵��: DDR PLL�л�ʹ�ܼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ddr_pllsw_start : 1;  /* bit[0-0] : DDRC Ƶ���л�����ʹ�ܣ����λд1'b1����1��Ƶ���л���д0��Ч�� */
        unsigned int  reserved_0      : 3;  /* bit[1-3] : ������ */
        unsigned int  ddr_fs_done     : 1;  /* bit[4-4] : DDRC Ƶ���л���ɼĴ�����ddr_pllsw_startд1����ȥ�жϡ�
                                                          1'b0��DDR Ƶ���л�δ��ɣ�
                                                          1'b1��DDR Ƶ���л�δ��ɣ� */
        unsigned int  reserved_1      : 27; /* bit[5-31]: ���� */
    } reg;
} SOC_PMCTRL_DDRPLLSWEN_UNION;
#endif
#define SOC_PMCTRL_DDRPLLSWEN_ddr_pllsw_start_START  (0)
#define SOC_PMCTRL_DDRPLLSWEN_ddr_pllsw_start_END    (0)
#define SOC_PMCTRL_DDRPLLSWEN_ddr_fs_done_START      (4)
#define SOC_PMCTRL_DDRPLLSWEN_ddr_fs_done_END        (4)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_DDRDFSEN_UNION
 �ṹ˵��  : DDRDFSEN �Ĵ����ṹ���塣��ַƫ����:0x59C����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDR DFSʹ�ܼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ddr_dfs_start : 1;  /* bit[0-0] : DDRC DFS����ʹ�ܣ����λд1'b1����1��DFS��д0��Ч�� */
        unsigned int  reserved      : 31; /* bit[1-31]: ���� */
    } reg;
} SOC_PMCTRL_DDRDFSEN_UNION;
#endif
#define SOC_PMCTRL_DDRDFSEN_ddr_dfs_start_START  (0)
#define SOC_PMCTRL_DDRDFSEN_ddr_dfs_start_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_DDRDIVTIMEOUT_UNION
 �ṹ˵��  : DDRDIVTIMEOUT �Ĵ����ṹ���塣��ַƫ����:0x5A4����ֵ:0x00000028�����:32
 �Ĵ���˵��: DDRPHYʱ�ӷ�Ƶ��ʱ�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ddr_clkdiv_time : 6;  /* bit[0-5] : DDRʱ�ӷ�Ƶ����ʱ�䡣��������Ϊ150Mhz�� */
        unsigned int  reserved        : 26; /* bit[6-31]: ���� */
    } reg;
} SOC_PMCTRL_DDRDIVTIMEOUT_UNION;
#endif
#define SOC_PMCTRL_DDRDIVTIMEOUT_ddr_clkdiv_time_START  (0)
#define SOC_PMCTRL_DDRDIVTIMEOUT_ddr_clkdiv_time_END    (5)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_DDRCLKDIVCFG_UNION
 �ṹ˵��  : DDRCLKDIVCFG �Ĵ����ṹ���塣��ַƫ����:0x5A8����ֵ:0x00000007�����:32
 �Ĵ���˵��: DDR DFSʱ�ӷ�Ƶ���üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ddrpll_clk_div_cfg     : 4;  /* bit[0-3]  : DDRPLLʱ�ӷ�Ƶ���á� */
        unsigned int  ddrc_axi_clk_div_cfg   : 2;  /* bit[4-5]  : DDRC AXIʱ�ӷ�Ƶ���ã�CCPU/SYS NOC x2x�ŷ�Ƶ��
                                                                  ��ddrpll_clk_div���ʱ���Ϸ�Ƶ�� */
        unsigned int  reserved_0             : 2;  /* bit[6-7]  : ������ */
        unsigned int  ddr_mmu_clk_div_cfg    : 2;  /* bit[8-9]  : mmu��rs2,rs3��ʱ�ӷ�Ƶ�����á�
                                                                  ��ddrpll_clk_div���ʱ���Ϸ�Ƶ�� */
        unsigned int  reserved_1             : 2;  /* bit[10-11]: ������ */
        unsigned int  ddr_harq_clk_div_cfg   : 2;  /* bit[12-13]: harq,ms1��ʱ�ӷ�Ƶ�����á�
                                                                  ��rs2/rs3���ʱ���Ϸ�Ƶ�� */
        unsigned int  reserved_2             : 2;  /* bit[14-15]: ������ */
        unsigned int  ddrphy_ref_clk_div_cfg : 2;  /* bit[16-17]: DDRPHY refclk��ʱ�ӷ�Ƶ���á�
                                                                  ��ddrpll_clk_div���ʱ���Ϸ�Ƶ�� */
        unsigned int  reserved_3             : 14; /* bit[18-31]: ���� */
    } reg;
} SOC_PMCTRL_DDRCLKDIVCFG_UNION;
#endif
#define SOC_PMCTRL_DDRCLKDIVCFG_ddrpll_clk_div_cfg_START      (0)
#define SOC_PMCTRL_DDRCLKDIVCFG_ddrpll_clk_div_cfg_END        (3)
#define SOC_PMCTRL_DDRCLKDIVCFG_ddrc_axi_clk_div_cfg_START    (4)
#define SOC_PMCTRL_DDRCLKDIVCFG_ddrc_axi_clk_div_cfg_END      (5)
#define SOC_PMCTRL_DDRCLKDIVCFG_ddr_mmu_clk_div_cfg_START     (8)
#define SOC_PMCTRL_DDRCLKDIVCFG_ddr_mmu_clk_div_cfg_END       (9)
#define SOC_PMCTRL_DDRCLKDIVCFG_ddr_harq_clk_div_cfg_START    (12)
#define SOC_PMCTRL_DDRCLKDIVCFG_ddr_harq_clk_div_cfg_END      (13)
#define SOC_PMCTRL_DDRCLKDIVCFG_ddrphy_ref_clk_div_cfg_START  (16)
#define SOC_PMCTRL_DDRCLKDIVCFG_ddrphy_ref_clk_div_cfg_END    (17)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_DDRCLKPROFILE_UNION
 �ṹ˵��  : DDRCLKPROFILE �Ĵ����ṹ���塣��ַƫ����:0x5AC����ֵ:0x00100007�����:32
 �Ĵ���˵��: DDR DFSʱ�ӷ�Ƶprofile�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ddrpll_clk_div_prof     : 4;  /* bit[0-3]  : DDR DFSʱ��DDRPLLʱ�ӷ�Ƶ�����á�����DDRCʱ��Ƶ�� */
        unsigned int  ddrc_axi_clk_div_prof   : 2;  /* bit[4-5]  : DDR DFSʱ��CCPU/SYS NOC x2x�ŷ�Ƶ������
                                                                   ��ddrpll_clk_div���ʱ���Ϸ�Ƶ��
                                                                   DDRC������533M��ʱ������Ϊ2��Ƶ������Ƶ��1��Ƶ */
        unsigned int  reserved_0              : 2;  /* bit[6-7]  : ������ */
        unsigned int  ddr_mmu_clk_div_prof    : 2;  /* bit[8-9]  : DDR DFSʱ��mmu��rs2,rs3��ʱ�ӷ�Ƶ�����á�
                                                                   ��ddrpll_clk_div���ʱ���Ϸ�Ƶ��
                                                                   DDRC������533M��ʱ������Ϊ2��Ƶ������Ƶ��1��Ƶ */
        unsigned int  reserved_1              : 2;  /* bit[10-11]: ������ */
        unsigned int  ddr_harq_clk_div_prof   : 2;  /* bit[12-13]: DDR DFSʱ��harq,ms1��ʱ�ӷ�Ƶ�����á�
                                                                   ��rs2/rs3���ʱ���Ϸ�Ƶ��
                                                                   Rs2/rs3����200M��ʱ������Ϊ2��Ƶ������1��Ƶ�� */
        unsigned int  reserved_2              : 2;  /* bit[14-15]: ������ */
        unsigned int  ddrphy_ref_clk_div_prof : 2;  /* bit[16-17]: DDR DFSʱ��DDRPHY refclk��ʱ�ӷ�Ƶ���á�
                                                                   ��ddrpll_clk_div���ʱ���Ϸ�Ƶ�� */
        unsigned int  reserved_3              : 2;  /* bit[18-19]: ������ */
        unsigned int  ddr_pllsw_prof          : 2;  /* bit[20-21]: ��ǰDDRCʱ��ѡ���ĸ�ʱ�ӵ�profile��
                                                                   00��reserved��
                                                                   01��DDRCʱ����Դ��SYS PLL��
                                                                   10��DDRCʱ����Դ��DDR PLL0��
                                                                   11��DDRCʱ����Դ��DDR PLL1�� */
        unsigned int  reserved_4              : 10; /* bit[22-31]: ���� */
    } reg;
} SOC_PMCTRL_DDRCLKPROFILE_UNION;
#endif
#define SOC_PMCTRL_DDRCLKPROFILE_ddrpll_clk_div_prof_START      (0)
#define SOC_PMCTRL_DDRCLKPROFILE_ddrpll_clk_div_prof_END        (3)
#define SOC_PMCTRL_DDRCLKPROFILE_ddrc_axi_clk_div_prof_START    (4)
#define SOC_PMCTRL_DDRCLKPROFILE_ddrc_axi_clk_div_prof_END      (5)
#define SOC_PMCTRL_DDRCLKPROFILE_ddr_mmu_clk_div_prof_START     (8)
#define SOC_PMCTRL_DDRCLKPROFILE_ddr_mmu_clk_div_prof_END       (9)
#define SOC_PMCTRL_DDRCLKPROFILE_ddr_harq_clk_div_prof_START    (12)
#define SOC_PMCTRL_DDRCLKPROFILE_ddr_harq_clk_div_prof_END      (13)
#define SOC_PMCTRL_DDRCLKPROFILE_ddrphy_ref_clk_div_prof_START  (16)
#define SOC_PMCTRL_DDRCLKPROFILE_ddrphy_ref_clk_div_prof_END    (17)
#define SOC_PMCTRL_DDRCLKPROFILE_ddr_pllsw_prof_START           (20)
#define SOC_PMCTRL_DDRCLKPROFILE_ddr_pllsw_prof_END             (21)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_ACPUHPMMASKEN_UNION
 �ṹ˵��  : ACPUHPMMASKEN �Ĵ����ṹ���塣��ַƫ����:0xC00����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU HPM����ʹ�ܼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  acpu_hpm_mask_en : 5;  /* bit[0-4] : AVS��������HPMʹ�ܣ�д1��Ч��д0��Ч��
                                                           [4:0]�ֱ����acpu cluster hpm��core3 hpm��core2 hpm��core1 hpm��core0 hpm�� */
        unsigned int  reserved         : 27; /* bit[5-31]: ���� */
    } reg;
} SOC_PMCTRL_ACPUHPMMASKEN_UNION;
#endif
#define SOC_PMCTRL_ACPUHPMMASKEN_acpu_hpm_mask_en_START  (0)
#define SOC_PMCTRL_ACPUHPMMASKEN_acpu_hpm_mask_en_END    (4)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_ACPUHPMMASKDIS_UNION
 �ṹ˵��  : ACPUHPMMASKDIS �Ĵ����ṹ���塣��ַƫ����:0xC04����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU HPM����ȥʹ�ܼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  acpu_hpm_mask_dis : 5;  /* bit[0-4] : AVS��������HPMȥʹ�ܣ�д1��Ч��д0��Ч��
                                                            [4:0]�ֱ����acpu cluster hpm��core3 hpm��core2 hpm��core1 hpm��core0 hpm�� */
        unsigned int  reserved          : 27; /* bit[5-31]: ���� */
    } reg;
} SOC_PMCTRL_ACPUHPMMASKDIS_UNION;
#endif
#define SOC_PMCTRL_ACPUHPMMASKDIS_acpu_hpm_mask_dis_START  (0)
#define SOC_PMCTRL_ACPUHPMMASKDIS_acpu_hpm_mask_dis_END    (4)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_ACPUHPMMASKSTAT_UNION
 �ṹ˵��  : ACPUHPMMASKSTAT �Ĵ����ṹ���塣��ַƫ����:0xC08����ֵ:0x0000001F�����:32
 �Ĵ���˵��: ACPU HPM����״̬�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  acpu_hpm_mask : 5;  /* bit[0-4] : AVS��������HPM״̬��
                                                        [4:0]�ֱ����acpu cluster hpm��core3 hpm��core2 hpm��core1 hpm��core0 hpm�� */
        unsigned int  reserved      : 27; /* bit[5-31]: ���� */
    } reg;
} SOC_PMCTRL_ACPUHPMMASKSTAT_UNION;
#endif
#define SOC_PMCTRL_ACPUHPMMASKSTAT_acpu_hpm_mask_START  (0)
#define SOC_PMCTRL_ACPUHPMMASKSTAT_acpu_hpm_mask_END    (4)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_PDHPMMASKEN_UNION
 �ṹ˵��  : PDHPMMASKEN �Ĵ����ṹ���塣��ַƫ����:0xC10����ֵ:0x00000000�����:32
 �Ĵ���˵��: ���ռ�� HPM����ʹ�ܼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pd_hpm_mask_en : 4;  /* bit[0-3] : ���ռ���������HPMʹ�ܡ�
                                                         [3:0]���δ���HPM3��HPM2��HPM1��HPM0�� */
        unsigned int  reserved       : 28; /* bit[4-31]: ���� */
    } reg;
} SOC_PMCTRL_PDHPMMASKEN_UNION;
#endif
#define SOC_PMCTRL_PDHPMMASKEN_pd_hpm_mask_en_START  (0)
#define SOC_PMCTRL_PDHPMMASKEN_pd_hpm_mask_en_END    (3)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_PDHPMMASKDIS_UNION
 �ṹ˵��  : PDHPMMASKDIS �Ĵ����ṹ���塣��ַƫ����:0xC14����ֵ:0x00000000�����:32
 �Ĵ���˵��: ���ռ�� HPM����ȥʹ�ܼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pd_hpm_mask_dis : 4;  /* bit[0-3] : ���ռ���������HPMȥʹ�ܡ�
                                                          [3:0]���δ���HPM3��HPM2��HPM1��HPM0�� */
        unsigned int  reserved        : 28; /* bit[4-31]: ���� */
    } reg;
} SOC_PMCTRL_PDHPMMASKDIS_UNION;
#endif
#define SOC_PMCTRL_PDHPMMASKDIS_pd_hpm_mask_dis_START  (0)
#define SOC_PMCTRL_PDHPMMASKDIS_pd_hpm_mask_dis_END    (3)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_PDHPMMASKSTAT_UNION
 �ṹ˵��  : PDHPMMASKSTAT �Ĵ����ṹ���塣��ַƫ����:0xC18����ֵ:0x0000000F�����:32
 �Ĵ���˵��: ���ռ�� HPM����״̬�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pd_hpm_mask : 4;  /* bit[0-3] : ���ռ���������HPMʹ��״̬��
                                                      1'b1:����HPM��
                                                      1'b0:ʹ��HPM��
                                                      [3:0]���δ���HPM3��HPM2��HPM1��HPM0�� */
        unsigned int  reserved    : 28; /* bit[4-31]: ���� */
    } reg;
} SOC_PMCTRL_PDHPMMASKSTAT_UNION;
#endif
#define SOC_PMCTRL_PDHPMMASKSTAT_pd_hpm_mask_START  (0)
#define SOC_PMCTRL_PDHPMMASKSTAT_pd_hpm_mask_END    (3)


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_MEDPLLRESERVED1_UNION
 �ṹ˵��  : MEDPLLRESERVED1 �Ĵ����ṹ���塣��ַƫ����:0x904����ֵ:0x00000800�����:32
 �Ĵ���˵��: MEDPLL�����Ĵ���1
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved : 32; /* bit[0-31]: ���� */
    } reg;
} SOC_PMCTRL_MEDPLLRESERVED1_UNION;
#endif


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_ACPUPLLRESERVED1_UNION
 �ṹ˵��  : ACPUPLLRESERVED1 �Ĵ����ṹ���塣��ַƫ����:0x908����ֵ:0x00000800�����:32
 �Ĵ���˵��: ACPUPLL�����Ĵ���1
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved : 32; /* bit[0-31]: ���� */
    } reg;
} SOC_PMCTRL_ACPUPLLRESERVED1_UNION;
#endif


/*****************************************************************************
 �ṹ��    : SOC_PMCTRL_GPUPLLRESERVED1_UNION
 �ṹ˵��  : GPUPLLRESERVED1 �Ĵ����ṹ���塣��ַƫ����:0x90C����ֵ:0x00000800�����:32
 �Ĵ���˵��: GPUPLL�����Ĵ���1
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved : 32; /* bit[0-31]: ���� */
    } reg;
} SOC_PMCTRL_GPUPLLRESERVED1_UNION;
#endif






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

#endif /* end of soc_pmctrl_interface.h */
