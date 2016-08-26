

/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/

#ifndef __SOC_PERI_SCTRL_INTERFACE_H__
#define __SOC_PERI_SCTRL_INTERFACE_H__

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
/* �Ĵ���˵����������ƼĴ���1�����ܰ���etr�µ�ǰ�ſգ���hifi�ж�����λ
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_PERIPH_CTRL1_UNION */
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL1_ADDR(base)     ((base) + (0x000))

/* �Ĵ���˵����������ƼĴ���2��MMC CLK PHASE BYPASS���ƣ�func_testѡ��cssysʱ���ʹ�ܣ�ddrt,g3d muxѡ��testpin ѡ��hifi memory����
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_PERIPH_CTRL2_UNION */
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL2_ADDR(base)     ((base) + (0x004))

/* �Ĵ���˵����������ƼĴ���3��Ҫ����memory share��ؿ���
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_PERIPH_CTRL3_UNION */
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL3_ADDR(base)     ((base) + (0x008))

/* �Ĵ���˵��������ϵͳ���ƼĴ��������ܰ���USBOGT��PICOPHY����
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_PERIPH_CTRL4_UNION */
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_ADDR(base)     ((base) + (0x00c))

/* �Ĵ���˵��������ϵͳ���ƼĴ���5�����ܰ���PICOPHY����
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_PERIPH_CTRL5_UNION */
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL5_ADDR(base)     ((base) + (0x010))

/* �Ĵ���˵����������ƼĴ���6�����ܰ���CSSYS OFF��memroy����
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_PERIPH_CTRL6_UNION */
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL6_ADDR(base)     ((base) + (0x014))

/* �Ĵ���˵����������ƼĴ���8�����ܰ���PICOPHY����
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_PERIPH_CTRL8_UNION */
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL8_ADDR(base)     ((base) + (0x018))

/* �Ĵ���˵����������ƼĴ���9�����ܰ���PICOPHY����
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_PERIPH_CTRL9_UNION */
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL9_ADDR(base)     ((base) + (0x01C))

/* �Ĵ���˵����������ƼĴ���10��
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_PERIPH_CTRL10_UNION */
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL10_ADDR(base)    ((base) + (0x020))

/* �Ĵ���˵����������ƼĴ���12�����ܰ���PERISYS��memroy����
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_PERIPH_CTRL12_UNION */
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL12_ADDR(base)    ((base) + (0x024))

/* �Ĵ���˵����������ƼĴ���13������acpu��ccpu��hifiʱ���л�ʹ�ܣ�mmc����ʱ���ſ�ʹ��
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_PERIPH_CTRL13_UNION */
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL13_ADDR(base)    ((base) + (0x028))

/* �Ĵ���˵����������ƼĴ���14��ʱ��Ƶ�ʼ��
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_PERIPH_CTRL14_UNION */
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL14_ADDR(base)    ((base) + (0x02C))

/* �Ĵ���˵����aarm��ϵͳ���ƼĴ��������ܰ���sram_ap_off/ipf/seceng_cc/seceng_c2/seceng_rc4/socp��rom��memory����
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_MEM_CTRL0_UNION */
#define SOC_PERI_SCTRL_SC_MEM_CTRL0_ADDR(base)        ((base) + (0x030))

/* �Ĵ���˵����ʱ���Զ��ſ�ʹ�ܼĴ�����
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_AUTO_CLK_GATE0_UNION */
#define SOC_PERI_SCTRL_SC_AUTO_CLK_GATE0_ADDR(base)   ((base) + (0x034))

/* �Ĵ���˵����ʱ���Զ��ſ�ʹ�ܼĴ���������NOC100M����ʱ���Զ���Ƶ�����Ƿ�ʹ�ܵ�ͶƱ
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_AUTO_CLK_GATE1_UNION */
#define SOC_PERI_SCTRL_SC_AUTO_CLK_GATE1_ADDR(base)   ((base) + (0x038))

/* �Ĵ���˵����ʱ���Զ��ſ�ʹ�ܼĴ���������NOC150M����ʱ���Զ���Ƶ�����Ƿ�ʹ�ܵ�ͶƱ
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_AUTO_CLK_GATE2_UNION */
#define SOC_PERI_SCTRL_SC_AUTO_CLK_GATE2_ADDR(base)   ((base) + (0x03c))

/* �Ĵ���˵����DDR���üĴ���0
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_DDR_CTRL0_UNION */
#define SOC_PERI_SCTRL_SC_DDR_CTRL0_ADDR(base)        ((base) + (0x050))

/* �Ĵ���˵����DDR ���üĴ���1
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_DDR_CTRL1_UNION */
#define SOC_PERI_SCTRL_SC_DDR_CTRL1_ADDR(base)        ((base) + (0x054))

/* �Ĵ���˵����DDR ���üĴ���2�����ܰ���DDR qos����
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_DDR_CTRL2_UNION */
#define SOC_PERI_SCTRL_SC_DDR_CTRL2_ADDR(base)        ((base) + (0x058))

/* �Ĵ���˵����DDR ���üĴ��������ܰ���DDR qos����
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_DDR_CTRL3_UNION */
#define SOC_PERI_SCTRL_SC_DDR_CTRL3_ADDR(base)        ((base) + (0x060))

/* �Ĵ���˵����DDR ״̬�Ĵ���4��
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_DDR_CTRL4_UNION */
#define SOC_PERI_SCTRL_SC_DDR_CTRL4_ADDR(base)        ((base) + (0x064))

/* �Ĵ���˵����NOC ״̬�Ĵ���0������sysnoc timeout ʹ��
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_NOC_CTRL0_UNION */
#define SOC_PERI_SCTRL_SC_NOC_CTRL0_ADDR(base)        ((base) + (0x070))

/* �Ĵ���˵����NOC ״̬�Ĵ���1������clkbus_lowʱ��ѡ��ʹ�ܺ���ë�̼Ĵ�������
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_NOC_CTRL1_UNION */
#define SOC_PERI_SCTRL_SC_NOC_CTRL1_ADDR(base)        ((base) + (0x074))

/* �Ĵ���˵����NOC ״̬�Ĵ���2������clkbus_highʱ��ѡ��ʹ�ܺ���ë�̼Ĵ�������
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_NOC_CTRL2_UNION */
#define SOC_PERI_SCTRL_SC_NOC_CTRL2_ADDR(base)        ((base) + (0x078))

/* �Ĵ���˵��������״̬�Ĵ���0�����ܰ���CSSYS ETR��SOCP��IPF��hifi״̬��noc nopending�źŵ�
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_PERIPH_STAT0_UNION */
#define SOC_PERI_SCTRL_SC_PERIPH_STAT0_ADDR(base)     ((base) + (0x090))

/* �Ĵ���˵����periph stat1
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_PERIPH_STAT1_UNION */
#define SOC_PERI_SCTRL_SC_PERIPH_STAT1_ADDR(base)     ((base) + (0x094))

/* �Ĵ���˵����usb״̬�Ĵ���2��
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_PERIPH_STAT2_UNION */
#define SOC_PERI_SCTRL_SC_PERIPH_STAT2_ADDR(base)     ((base) + (0x098))

/* �Ĵ���˵����hifi����ж�״̬�Ĵ���
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_PERIPH_STAT3_UNION */
#define SOC_PERI_SCTRL_SC_PERIPH_STAT3_ADDR(base)     ((base) + (0x09C))

/* �Ĵ���˵��������״̬�Ĵ���4��
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_PERIPH_STAT4_UNION */
#define SOC_PERI_SCTRL_SC_PERIPH_STAT4_ADDR(base)     ((base) + (0x0A0))

/* �Ĵ���˵��������״̬�Ĵ���6��
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_PERIPH_STAT6_UNION */
#define SOC_PERI_SCTRL_SC_PERIPH_STAT6_ADDR(base)     ((base) + (0x0A4))

/* �Ĵ���˵����
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_HIFI_INT_STATR0_UNION */
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATR0_ADDR(base)  ((base) + (0x0B0))

/* �Ĵ���˵����
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_HIFI_INT_STATM0_UNION */
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATM0_ADDR(base)  ((base) + (0x0B4))

/* �Ĵ���˵����ACPU�����ж϶����ж�ʹ���ź�
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_UNION */
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_ADDR(base) ((base) + (0x100))

/* �Ĵ���˵����ACPU�����ж϶����ж�ԭʼ�ж�״̬
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_UNION */
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_ADDR(base) ((base) + (0x104))

/* �Ĵ���˵����ACPU�����ж϶����ж����κ��ж�״̬
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_UNION */
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_ADDR(base) ((base) + (0x108))

/* �Ĵ���˵����MCU�ж϶����ж�ʹ���ź�
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_UNION */
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_ADDR(base) ((base) + (0x110))

/* �Ĵ���˵����MCU�ж϶����ж�ԭʼ�ж�״̬
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_UNION */
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_ADDR(base) ((base) + (0x114))

/* �Ĵ���˵����MCU�ж϶����ж����κ��ж�״̬
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_UNION */
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_ADDR(base) ((base) + (0x118))

/* �Ĵ���˵��������ʱ��ʹ�ܼĴ���0������ʹ������ʱ�ӡ��Ա���д1��ʹ�ܶ�Ӧ��ʱ�ӣ�д0��Ӱ��ʱ��ʹ�ܵ�״̬��
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_PERIPH_CLKEN0_UNION */
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN0_ADDR(base)    ((base) + (0x200))

/* �Ĵ���˵��������ʱ�ӽ�ֹ�Ĵ���0�����ڽ�ֹ����ʱ�ӡ��Ա���д1����ֹ��Ӧ��ʱ�ӣ�д0��Ӱ��ʱ��ʹ�ܵ�״̬��
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_PERIPH_CLKDIS0_UNION */
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS0_ADDR(base)   ((base) + (0x204))

/* �Ĵ���˵��������ʱ��״̬�Ĵ���0�����ڻض�������ʱ�ӵ�״̬������ʱ�ӿ����ź��辭����CRG�н���ͬ��������ˣ�����ļĴ���ֵ���ӳ���Ӧʱ����ļ������ں��������Ӧʱ��״̬��
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT0_UNION */
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT0_ADDR(base)  ((base) + (0x208))

/* �Ĵ���˵��������ʱ��ʹ�ܼĴ���1������ʹ������ʱ�ӡ��Ա���д1��ʹ�ܶ�Ӧ��ʱ�ӣ�д0��Ӱ��ʱ��ʹ�ܵ�״̬��
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_PERIPH_CLKEN1_UNION */
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN1_ADDR(base)    ((base) + (0x210))

/* �Ĵ���˵��������ʱ�ӽ�ֹ�Ĵ���1�����ڽ�ֹ����ʱ�ӡ��Ա���д1����ֹ��Ӧ��ʱ�ӣ�д0��Ӱ��ʱ��ʹ�ܵ�״̬��
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_PERIPH_CLKDIS1_UNION */
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS1_ADDR(base)   ((base) + (0x214))

/* �Ĵ���˵��������ʱ��״̬�Ĵ���1�����ڻض�������ʱ�ӵ�״̬������ʱ�ӿ����ź��辭����CRG�н���ͬ��������ˣ�����ļĴ���ֵ���ӳ���Ӧʱ����ļ������ں��������Ӧʱ��״̬��
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT1_UNION */
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT1_ADDR(base)  ((base) + (0x218))

/* �Ĵ���˵��������ʱ��ʹ�ܼĴ���2������ʹ������ʱ�ӡ��Ա���д1��ʹ�ܶ�Ӧ��ʱ�ӣ�д0��Ӱ��ʱ��ʹ�ܵ�״̬��
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_PERIPH_CLKEN2_UNION */
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN2_ADDR(base)    ((base) + (0x220))

/* �Ĵ���˵��������ʱ�ӽ�ֹ�Ĵ���2�����ڽ�ֹ����ʱ�ӡ��Ա���д1����ֹ��Ӧ��ʱ�ӣ�д0��Ӱ��ʱ��ʹ�ܵ�״̬��
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_PERIPH_CLKDIS2_UNION */
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS2_ADDR(base)   ((base) + (0x224))

/* �Ĵ���˵��������ʱ��״̬�Ĵ���2�����ڻض�������ʱ�ӵ�״̬������ʱ�ӿ����ź��辭����CRG�н���ͬ��������ˣ�����ļĴ���ֵ���ӳ���Ӧʱ����ļ������ں��������Ӧʱ��״̬��
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT2_UNION */
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT2_ADDR(base)  ((base) + (0x228))

/* �Ĵ���˵��������ʱ��ʹ�ܼĴ���3������ʹ������ʱ�ӡ��Ա���д1��ʹ�ܶ�Ӧ��ʱ�ӣ�д0��Ӱ��ʱ��ʹ�ܵ�״̬��
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_PERIPH_CLKEN3_UNION */
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN3_ADDR(base)    ((base) + (0x230))

/* �Ĵ���˵��������ʱ�ӽ�ֹ�Ĵ���3�����ڽ�ֹ����ʱ�ӡ��Ա���д1����ֹ��Ӧ��ʱ�ӣ�д0��Ӱ��ʱ��ʹ�ܵ�״̬��
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_PERIPH_CLKDIS3_UNION */
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS3_ADDR(base)   ((base) + (0x234))

/* �Ĵ���˵��������ʱ��״̬�Ĵ���3�����ڻض�������ʱ�ӵ�״̬������ʱ�ӿ����ź��辭����CRG�н���ͬ��������ˣ�����ļĴ���ֵ���ӳ���Ӧʱ����ļ������ں��������Ӧʱ��״̬��
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT3_UNION */
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT3_ADDR(base)  ((base) + (0x238))

/* �Ĵ���˵��������ʱ��ʹ�ܼĴ���8������ʹ������ʱ�ӡ��Ա���д1��ʹ�ܶ�Ӧ��ʱ�ӣ�д0��Ӱ��ʱ��ʹ�ܵ�״̬��
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_PERIPH_CLKEN8_UNION */
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN8_ADDR(base)    ((base) + (0x240))

/* �Ĵ���˵��������ʱ�ӽ�ֹ�Ĵ���8�����ڽ�ֹ����ʱ�ӡ��Ա���д1����ֹ��Ӧ��ʱ�ӣ�д0��Ӱ��ʱ��ʹ�ܵ�״̬��
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_PERIPH_CLKDIS8_UNION */
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS8_ADDR(base)   ((base) + (0x244))

/* �Ĵ���˵��������ʱ��״̬�Ĵ���8�����ڻض�������ʱ�ӵ�״̬������ʱ�ӿ����ź��辭����CRG�н���ͬ��������ˣ�����ļĴ���ֵ���ӳ���Ӧʱ����ļ������ں��������Ӧʱ��״̬��
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT8_UNION */
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT8_ADDR(base)  ((base) + (0x248))

/* �Ĵ���˵��������ʱ��ʹ�ܼĴ���9������ʹ������ʱ�ӡ��Ա���д1��ʹ�ܶ�Ӧ��ʱ�ӣ�д0��Ӱ��ʱ��ʹ�ܵ�״̬��
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_PERIPH_CLKEN9_UNION */
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN9_ADDR(base)    ((base) + (0x250))

/* �Ĵ���˵��������ʱ�ӽ�ֹ�Ĵ���9�����ڽ�ֹ����ʱ�ӡ��Ա���д1����ֹ��Ӧ��ʱ�ӣ�д0��Ӱ��ʱ��ʹ�ܵ�״̬��
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_PERIPH_CLKDIS9_UNION */
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS9_ADDR(base)   ((base) + (0x254))

/* �Ĵ���˵��������ʱ��״̬�Ĵ���9�����ڻض�������ʱ�ӵ�״̬������ʱ�ӿ����ź��辭����CRG�н���ͬ��������ˣ�����ļĴ���ֵ���ӳ���Ӧʱ����ļ������ں��������Ӧʱ��״̬��
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT9_UNION */
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT9_ADDR(base)  ((base) + (0x258))

/* �Ĵ���˵��������ʱ��ʹ�ܼĴ���10������ʹ������ʱ�ӡ��Ա���д1��ʹ�ܶ�Ӧ��ʱ�ӣ�д0��Ӱ��ʱ��ʹ�ܵ�״̬��
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_PERIPH_CLKEN10_UNION */
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN10_ADDR(base)   ((base) + (0x260))

/* �Ĵ���˵��������ʱ�ӽ�ֹ�Ĵ���10�����ڽ�ֹ����ʱ�ӡ��Ա���д1����ֹ��Ӧ��ʱ�ӣ�д0��Ӱ��ʱ��ʹ�ܵ�״̬��
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_PERIPH_CLKDIS10_UNION */
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS10_ADDR(base)  ((base) + (0x264))

/* �Ĵ���˵��������ʱ��״̬�Ĵ���10�����ڻض�������ʱ�ӵ�״̬������ʱ�ӿ����ź��辭����CRG�н���ͬ��������ˣ�����ļĴ���ֵ���ӳ���Ӧʱ����ļ������ں��������Ӧʱ��״̬��
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT10_UNION */
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT10_ADDR(base) ((base) + (0x268))

/* �Ĵ���˵��������ʱ��ʹ�ܼĴ���12������ʹ������ʱ�ӡ��Ա���д1��ʹ�ܶ�Ӧ��ʱ�ӣ�д0��Ӱ��ʱ��ʹ�ܵ�״̬��
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_PERIPH_CLKEN12_UNION */
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN12_ADDR(base)   ((base) + (0x270))

/* �Ĵ���˵��������ʱ�ӽ�ֹ�Ĵ���12�����ڽ�ֹ����ʱ�ӡ��Ա���д1����ֹ��Ӧ��ʱ�ӣ�д0��Ӱ��ʱ��ʹ�ܵ�״̬��
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_PERIPH_CLKDIS12_UNION */
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS12_ADDR(base)  ((base) + (0x274))

/* �Ĵ���˵��������ʱ��״̬�Ĵ���12�����ڻض�������ʱ�ӵ�״̬������ʱ�ӿ����ź��辭����CRG�н���ͬ��������ˣ�����ļĴ���ֵ���ӳ���Ӧʱ����ļ������ں��������Ӧʱ��״̬��
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT12_UNION */
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT12_ADDR(base) ((base) + (0x278))

/* �Ĵ���˵��������ʱ��ʹ�ܼĴ���14������ʹ������ʱ�ӡ��Ա���д1��ʹ�ܶ�Ӧ��ʱ�ӣ�д0��Ӱ��ʱ��ʹ�ܵ�״̬��
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_PERIPH_CLKEN14_UNION */
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN14_ADDR(base)   ((base) + (0x280))

/* �Ĵ���˵��������ʱ�ӽ�ֹ�Ĵ���14�����ڽ�ֹ����ʱ�ӡ��Ա���д1����ֹ��Ӧ��ʱ�ӣ�д0��Ӱ��ʱ��ʹ�ܵ�״̬��
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_PERIPH_CLKDIS14_UNION */
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS14_ADDR(base)  ((base) + (0x284))

/* �Ĵ���˵��������ʱ��״̬�Ĵ���14�����ڻض�������ʱ�ӵ�״̬������ʱ�ӿ����ź��辭����CRG�н���ͬ��������ˣ�����ļĴ���ֵ���ӳ���Ӧʱ����ļ������ں��������Ӧʱ��״̬��
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT14_UNION */
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT14_ADDR(base) ((base) + (0x288))

/* �Ĵ���˵�����踴λʹ�ܼĴ���0������ʹ�����踴λ���Ա���д1����ӦIP���븴λ״̬��д0��Ӱ�츴λ״̬��
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_PERIPH_RSTEN0_UNION */
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN0_ADDR(base)    ((base) + (0x300))

/* �Ĵ���˵�������踴λ��ֹ�Ĵ���0�����ڽ�ֹ���踴λ���Ա���д1����Ӧ��������λ��д0��Ӱ�츴λʹ�ܵ�״̬��
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_PERIPH_RSTDIS0_UNION */
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS0_ADDR(base)   ((base) + (0x304))

/* �Ĵ���˵�������踴λ״̬�Ĵ���0�����ڻض������踴λ��״̬�����踴λ�����ź��辭��ͬ��������ˣ�����ļĴ���ֵ���ӳ���Ӧʱ����ļ������ں��������Ӧ�⸴λ״̬��1Ϊ��λ��0Ϊ�Ǹ�λ״̬��Ĭ��CARM��ϵͳ���ڽ⸴λ״̬��AARM��ZSP��HIFI��BBP��ϵͳ���ڸ�λ״̬��
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT0_UNION */
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT0_ADDR(base)  ((base) + (0x308))

/* �Ĵ���˵�����踴λʹ�ܼĴ���1������ʹ�����踴λ���Ա���д1����ӦIP���븴λ״̬��д0��Ӱ�츴λ״̬��
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_PERIPH_RSTEN1_UNION */
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN1_ADDR(base)    ((base) + (0x310))

/* �Ĵ���˵�������踴λ��ֹ�Ĵ���1�����ڽ�ֹ���踴λ���Ա���д1����Ӧ��������λ��д0��Ӱ�츴λʹ�ܵ�״̬��
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_PERIPH_RSTDIS1_UNION */
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS1_ADDR(base)   ((base) + (0x314))

/* �Ĵ���˵�������踴λ״̬�Ĵ���1�����ڻض������踴λ��״̬�����踴λ�����ź��辭��ͬ��������ˣ�����ļĴ���ֵ���ӳ���Ӧʱ����ļ������ں��������Ӧ�⸴λ״̬��1Ϊ��λ��0Ϊ�Ǹ�λ״̬��
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT1_UNION */
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT1_ADDR(base)  ((base) + (0x318))

/* �Ĵ���˵�����踴λʹ�ܼĴ���2������ʹ�����踴λ���Ա���д1����ӦIP���븴λ״̬��д0��Ӱ�츴λ״̬��
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_PERIPH_RSTEN2_UNION */
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN2_ADDR(base)    ((base) + (0x320))

/* �Ĵ���˵�������踴λ��ֹ�Ĵ���2�����ڽ�ֹ���踴λ���Ա���д1����Ӧ��������λ��д0��Ӱ�츴λʹ�ܵ�״̬��
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_PERIPH_RSTDIS2_UNION */
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS2_ADDR(base)   ((base) + (0x324))

/* �Ĵ���˵�������踴λ״̬�Ĵ���2�����ڻض������踴λ��״̬�����踴λ�����ź��辭��ͬ��������ˣ�����ļĴ���ֵ���ӳ���Ӧʱ����ļ������ں��������Ӧ�⸴λ״̬��1Ϊ��λ��0Ϊ�Ǹ�λ״̬��Ĭ��CARM��ϵͳ���ڽ⸴λ״̬��AARM��ZSP��HIFI��BBP��ϵͳ���ڸ�λ״̬��
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT2_UNION */
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT2_ADDR(base)  ((base) + (0x328))

/* �Ĵ���˵�����踴λʹ�ܼĴ���3������ʹ�����踴λ���Ա���д1����ӦIP���븴λ״̬��д0��Ӱ�츴λ״̬��
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_PERIPH_RSTEN3_UNION */
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN3_ADDR(base)    ((base) + (0x330))

/* �Ĵ���˵�������踴λ��ֹ�Ĵ���3�����ڽ�ֹ���踴λ���Ա���д1����Ӧ��������λ��д0��Ӱ�츴λʹ�ܵ�״̬��
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_PERIPH_RSTDIS3_UNION */
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS3_ADDR(base)   ((base) + (0x334))

/* �Ĵ���˵�������踴λ״̬�Ĵ���3�����ڻض������踴λ��״̬�����踴λ�����ź��辭��ͬ��������ˣ�����ļĴ���ֵ���ӳ���Ӧʱ����ļ������ں��������Ӧ�⸴λ״̬��1Ϊ��λ��0Ϊ�Ǹ�λ״̬��
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT3_UNION */
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT3_ADDR(base)  ((base) + (0x338))

/* �Ĵ���˵�����踴λʹ�ܼĴ���6������ʹ�����踴λ���Ա���д1����ӦIP���븴λ״̬��д0��Ӱ�츴λ״̬��
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_PERIPH_RSTEN8_UNION */
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN8_ADDR(base)    ((base) + (0x340))

/* �Ĵ���˵�������踴λ��ֹ�Ĵ���6�����ڽ�ֹ���踴λ���Ա���д1����Ӧ��������λ��д0��Ӱ�츴λʹ�ܵ�״̬��
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_PERIPH_RSTDIS8_UNION */
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS8_ADDR(base)   ((base) + (0x344))

/* �Ĵ���˵�������踴λ״̬�Ĵ���6�����ڻض������踴λ��״̬�����踴λ�����ź��辭��ͬ��������ˣ�����ļĴ���ֵ���ӳ���Ӧʱ����ļ������ں��������Ӧ�⸴λ״̬��
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT8_UNION */
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT8_ADDR(base)  ((base) + (0x348))

/* �Ĵ���˵�����踴λʹ�ܼĴ���6������ʹ�����踴λ���Ա���д1����ӦIP���븴λ״̬��д0��Ӱ�츴λ״̬��
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_PERIPH_RSTEN9_UNION */
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN9_ADDR(base)    ((base) + (0x350))

/* �Ĵ���˵�������踴λ��ֹ�Ĵ���6�����ڽ�ֹ���踴λ���Ա���д1����Ӧ��������λ��д0��Ӱ�츴λʹ�ܵ�״̬��
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_PERIPH_RSTDIS9_UNION */
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS9_ADDR(base)   ((base) + (0x354))

/* �Ĵ���˵�������踴λ״̬�Ĵ���6�����ڻض������踴λ��״̬�����踴λ�����ź��辭��ͬ��������ˣ�����ļĴ���ֵ���ӳ���Ӧʱ����ļ������ں��������Ӧ�⸴λ״̬��
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT9_UNION */
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT9_ADDR(base)  ((base) + (0x358))

/* �Ĵ���˵�����踴λʹ�ܼĴ���6������ʹ�����踴λ���Ա���д1����ӦIP���븴λ״̬��д0��Ӱ�츴λ״̬��
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_PERIPH_RSTEN10_UNION */
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN10_ADDR(base)   ((base) + (0x360))

/* �Ĵ���˵�������踴λ��ֹ�Ĵ���6�����ڽ�ֹ���踴λ���Ա���д1����Ӧ��������λ��д0��Ӱ�츴λʹ�ܵ�״̬��
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_PERIPH_RSTDIS10_UNION */
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS10_ADDR(base)  ((base) + (0x364))

/* �Ĵ���˵�������踴λ״̬�Ĵ���6�����ڻض������踴λ��״̬�����踴λ�����ź��辭��ͬ��������ˣ�����ļĴ���ֵ���ӳ���Ӧʱ����ļ������ں��������Ӧ�⸴λ״̬��
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT10_UNION */
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT10_ADDR(base) ((base) + (0x368))

/* �Ĵ���˵����ʱ��ѡ��Ĵ���0
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_CLK_SEL0_UNION */
#define SOC_PERI_SCTRL_SC_CLK_SEL0_ADDR(base)         ((base) + (0x400))

/* �Ĵ���˵����ʱ��ѡ��Ĵ���1
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_CLK_SEL1_UNION */
#define SOC_PERI_SCTRL_SC_CLK_SEL1_ADDR(base)         ((base) + (0x404))

/* �Ĵ���˵����ʱ�Ӳ������üĴ���0
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_CLKCFGALL0_UNION */
#define SOC_PERI_SCTRL_SC_CLKCFGALL0_ADDR(base)       ((base) + (0x450))

/* �Ĵ���˵����ʱ�Ӳ������üĴ���1
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_CLKCFGALL1_UNION */
#define SOC_PERI_SCTRL_SC_CLKCFGALL1_ADDR(base)       ((base) + (0x454))

/* �Ĵ���˵����ʱ�Ӳ������üĴ���2
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_CLKCFGALL2_UNION */
#define SOC_PERI_SCTRL_SC_CLKCFGALL2_ADDR(base)       ((base) + (0x458))

/* �Ĵ���˵����ʱ�Ӳ������üĴ���3
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_CLKCFGALL3_UNION */
#define SOC_PERI_SCTRL_SC_CLKCFGALL3_ADDR(base)       ((base) + (0x45C))

/* �Ĵ���˵����ʱ�Ӳ������üĴ���4
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_CLKCFGALL4_UNION */
#define SOC_PERI_SCTRL_SC_CLKCFGALL4_ADDR(base)       ((base) + (0x460))

/* �Ĵ���˵����ʱ�Ӳ������üĴ���5
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_CLKCFGALL5_UNION */
#define SOC_PERI_SCTRL_SC_CLKCFGALL5_ADDR(base)       ((base) + (0x464))

/* �Ĵ���˵����ʱ�Ӳ������üĴ���7
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_CLKCFG8BIT0_UNION */
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT0_ADDR(base)      ((base) + (0x490))

/* �Ĵ���˵����mmc0ʱ�Ӳ������üĴ���
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_CLKCFG8BIT1_UNION */
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT1_ADDR(base)      ((base) + (0x494))

/* �Ĵ���˵����mmc1ʱ�Ӳ������üĴ���
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_CLKCFG8BIT2_UNION */
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT2_ADDR(base)      ((base) + (0x498))

/* �Ĵ���˵����mmc2ʱ�Ӳ������üĴ���
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_CLKCFG8BIT3_UNION */
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT3_ADDR(base)      ((base) + (0x49C))

/* �Ĵ���˵����ʱ�Ӳ������üĴ���4
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_CLKCFG8BIT4_UNION */
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT4_ADDR(base)      ((base) + (0x4A0))

/* �Ĵ���˵����ʱ�Ӳ������üĴ���5
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_CLKCFG8BIT5_UNION */
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT5_ADDR(base)      ((base) + (0x4A4))

/* �Ĵ���˵����ʱ�Ӳ������üĴ���6
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_CLKCFG8BIT6_UNION */
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT6_ADDR(base)      ((base) + (0x4A8))

/* �Ĵ���˵����ʱ�Ӳ������üĴ���7
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_CLKCFG8BIT7_UNION */
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT7_ADDR(base)      ((base) + (0x4AC))

/* �Ĵ���˵����ʱ�Ӳ������üĴ���8
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_CLKCFG8BIT8_UNION */
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT8_ADDR(base)      ((base) + (0x4B0))

/* �Ĵ���˵����ʱ�Ӳ������üĴ���16
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_CLKCFG8BIT9_UNION */
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT9_ADDR(base)      ((base) + (0x4B4))

/* �Ĵ���˵����ʱ�Ӳ������üĴ���17
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_CLKCFG8BIT10_UNION */
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT10_ADDR(base)     ((base) + (0x4B8))

/* �Ĵ���˵����CARM���ƼĴ���0��CARM DEBUG�ȿ���
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_CARM_CTRL0_UNION */
#define SOC_PERI_SCTRL_SC_CARM_CTRL0_ADDR(base)       ((base) + (0x500))

/* �Ĵ���˵����CARM���ƼĴ���1�����ڿ���CARM filterģʽʹ�ܼ���ʼ�ͽ�����ַ��
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_CARM_CTRL1_UNION */
#define SOC_PERI_SCTRL_SC_CARM_CTRL1_ADDR(base)       ((base) + (0x504))

/* �Ĵ���˵����CARM״̬�Ĵ���0��
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_CARM_STAT0_UNION */
#define SOC_PERI_SCTRL_SC_CARM_STAT0_ADDR(base)       ((base) + (0x508))

/* �Ĵ���˵����HIFI���ƼĴ�������������HIFI�����źţ�ͬʱҲ���ڼĴ�HIFI��״̬�źš�
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_DSP_SUBSYS_CTRL0_UNION */
#define SOC_PERI_SCTRL_SC_DSP_SUBSYS_CTRL0_ADDR(base) ((base) + (0x600))

/* �Ĵ���˵����HIFI NMI�жϿ���
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_HIFI_CTRL1_UNION */
#define SOC_PERI_SCTRL_SC_HIFI_CTRL1_ADDR(base)       ((base) + (0x604))

/* �Ĵ���˵����hifi instruction space remap
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_HIFI_CTRL0_UNION */
#define SOC_PERI_SCTRL_SC_HIFI_CTRL0_ADDR(base)       ((base) + (0x608))

/* �Ĵ���˵����hifi boot addr��ȫ�Ĵ�����
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_HIFI_CTRL2_UNION */
#define SOC_PERI_SCTRL_SC_HIFI_CTRL2_ADDR(base)       ((base) + (0x60C))

/* �Ĵ���˵����hifi��������ڴ��ַ��Χ���ƼĴ���
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_HIFI_CTRL3_UNION */
#define SOC_PERI_SCTRL_SC_HIFI_CTRL3_ADDR(base)       ((base) + (0x0610))

/* �Ĵ���˵����hifi��������ڴ��ַ��Χ���ƼĴ���
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_HIFI_CTRL4_UNION */
#define SOC_PERI_SCTRL_SC_HIFI_CTRL4_ADDR(base)       ((base) + (0x0614))

/* �Ĵ���˵����Tsensor0�¶ȱȽ��ͻط�Χ�Ĵ�����
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_TEMP0_LAG_UNION */
#define SOC_PERI_SCTRL_SC_TEMP0_LAG_ADDR(base)        ((base) + (0x700))

/* �Ĵ���˵����Tsensor0�¶���ֵ�Ĵ�����
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_TEMP0_TH_UNION */
#define SOC_PERI_SCTRL_SC_TEMP0_TH_ADDR(base)         ((base) + (0x704))

/* �Ĵ���˵����Tsensor0��λ��ֵ�Ĵ�����
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_TEMP0_RST_TH_UNION */
#define SOC_PERI_SCTRL_SC_TEMP0_RST_TH_ADDR(base)     ((base) + (0x708))

/* �Ĵ���˵����Tsensor0�������üĴ�����
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_TEMP0_CFG_UNION */
#define SOC_PERI_SCTRL_SC_TEMP0_CFG_ADDR(base)        ((base) + (0x70C))

/* �Ĵ���˵����Tsensor0�¶ȼ��ģ��ʹ�ܼĴ�����
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_TEMP0_EN_UNION */
#define SOC_PERI_SCTRL_SC_TEMP0_EN_ADDR(base)         ((base) + (0x710))

/* �Ĵ���˵����Tsensor0�¶ȼ���ж����μĴ�����
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_TEMP0_INT_EN_UNION */
#define SOC_PERI_SCTRL_SC_TEMP0_INT_EN_ADDR(base)     ((base) + (0x714))

/* �Ĵ���˵����Tsensor0�¶ȼ���ж�����Ĵ�����
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_TEMP0_INT_CLR_UNION */
#define SOC_PERI_SCTRL_SC_TEMP0_INT_CLR_ADDR(base)    ((base) + (0x718))

/* �Ĵ���˵����Tsensor0�¶ȼ�⸴λ���μĴ�����
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_TEMP0_RST_MSK_UNION */
#define SOC_PERI_SCTRL_SC_TEMP0_RST_MSK_ADDR(base)    ((base) + (0x71C))

/* �Ĵ���˵����Tsensor0�¶ȼ��Raw�жϼĴ�����
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_TEMP0_RAW_INT_UNION */
#define SOC_PERI_SCTRL_SC_TEMP0_RAW_INT_ADDR(base)    ((base) + (0x720))

/* �Ĵ���˵����Tsensor0�¶ȼ��Mask�жϼĴ�����
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_TEMP0_MSK_INT_UNION */
#define SOC_PERI_SCTRL_SC_TEMP0_MSK_INT_ADDR(base)    ((base) + (0x724))

/* �Ĵ���˵����Tsensor0�¶ȼ��ֵ�Ĵ�����
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_TEMP0_VALUE_UNION */
#define SOC_PERI_SCTRL_SC_TEMP0_VALUE_ADDR(base)      ((base) + (0x728))

/* �Ĵ���˵���������Ĵ�����
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_RESERVED7_UNION */
#define SOC_PERI_SCTRL_SC_RESERVED7_ADDR(base)        ((base) + (0xD00))

/* �Ĵ���˵���������Ĵ�����
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_RESERVED8_UNION */
#define SOC_PERI_SCTRL_SC_RESERVED8_ADDR(base)        ((base) + (0xD04))

/* �Ĵ���˵���������Ĵ�����
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_RESERVED11_UNION */
#define SOC_PERI_SCTRL_SC_RESERVED11_ADDR(base)       ((base) + (0xD08))

/* �Ĵ���˵���������Ĵ�����
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_RESERVED12_UNION */
#define SOC_PERI_SCTRL_SC_RESERVED12_ADDR(base)       ((base) + (0xD0C))

/* �Ĵ���˵���������Ĵ�����
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_RESERVED13_UNION */
#define SOC_PERI_SCTRL_SC_RESERVED13_ADDR(base)       ((base) + (0xD10))

/* �Ĵ���˵���������Ĵ�����
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_RESERVED14_UNION */
#define SOC_PERI_SCTRL_SC_RESERVED14_ADDR(base)       ((base) + (0xD14))

/* �Ĵ���˵���������Ĵ�����
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_RESERVED15_UNION */
#define SOC_PERI_SCTRL_SC_RESERVED15_ADDR(base)       ((base) + (0xD18))

/* �Ĵ���˵���������Ĵ�����
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_RESERVED16_UNION */
#define SOC_PERI_SCTRL_SC_RESERVED16_ADDR(base)       ((base) + (0xD1C))

/* �Ĵ���˵���������Ĵ�����
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_RESERVED17_UNION */
#define SOC_PERI_SCTRL_SC_RESERVED17_ADDR(base)       ((base) + (0xD20))

/* �Ĵ���˵���������Ĵ�����
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_RESERVED18_UNION */
#define SOC_PERI_SCTRL_SC_RESERVED18_ADDR(base)       ((base) + (0xD24))

/* �Ĵ���˵���������Ĵ�����
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_RESERVED21_UNION */
#define SOC_PERI_SCTRL_SC_RESERVED21_ADDR(base)       ((base) + (0xD28))

/* �Ĵ���˵���������Ĵ�����
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_RESERVED22_UNION */
#define SOC_PERI_SCTRL_SC_RESERVED22_ADDR(base)       ((base) + (0xD2C))

/* �Ĵ���˵���������Ĵ�����
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_RESERVED23_UNION */
#define SOC_PERI_SCTRL_SC_RESERVED23_ADDR(base)       ((base) + (0xD30))

/* �Ĵ���˵���������Ĵ�����
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_RESERVED24_UNION */
#define SOC_PERI_SCTRL_SC_RESERVED24_ADDR(base)       ((base) + (0xD34))

/* �Ĵ���˵���������Ĵ�����
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_RESERVED25_UNION */
#define SOC_PERI_SCTRL_SC_RESERVED25_ADDR(base)       ((base) + (0xD38))

/* �Ĵ���˵���������Ĵ�����
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_RESERVED26_UNION */
#define SOC_PERI_SCTRL_SC_RESERVED26_ADDR(base)       ((base) + (0xD3C))

/* �Ĵ���˵���������Ĵ�����
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_RESERVED27_UNION */
#define SOC_PERI_SCTRL_SC_RESERVED27_ADDR(base)       ((base) + (0xD40))

/* �Ĵ���˵���������Ĵ�����
   λ����UNION�ṹ:  SOC_PERI_SCTRL_SC_RESERVED28_UNION */
#define SOC_PERI_SCTRL_SC_RESERVED28_ADDR(base)       ((base) + (0xD44))





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
 �ṹ��    : SOC_PERI_SCTRL_SC_PERIPH_CTRL1_UNION
 �ṹ˵��  : SC_PERIPH_CTRL1 �Ĵ����ṹ���塣��ַƫ����:0x000����ֵ:0x00000005�����:32
 �Ĵ���˵��: ������ƼĴ���1�����ܰ���etr�µ�ǰ�ſգ���hifi�ж�����λ
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  etr_axi_csysreq_n     : 1;  /* bit[0]    : ETR��axi�ӿڵ�csysreq/csysack���µ�ǰ�ſղ���
                                                                 1'b0�������ſղ���
                                                                 1'b1���������ſղ��� */
        unsigned int  hifi_int_mask         : 1;  /* bit[1]    : �͸�hifi�ж�����λ��ֻ��[25:1]�������Σ�[0]Ϊnmi��[25]Ϊbbe16_gpio5�жϣ������Ÿ����ʹ�� */
        unsigned int  hifi_all_int_mask     : 1;  /* bit[2]    : �͸�mcu��hifi����ж�����λ */
        unsigned int  reserved_0            : 13; /* bit[3-15] : ������������ */
        unsigned int  etr_axi_csysreq_n_msk : 1;  /* bit[16]   : ETR��axi�ӿڵ�csysreq/csysack���µ�ǰ�ſղ��� */
        unsigned int  hifi_int_mask_msk     : 1;  /* bit[17]   : �͸�hifi�ж�����λ */
        unsigned int  hifi_all_int_mask_msk : 1;  /* bit[18]   : �͸�mcu��hifi����ж�����λ */
        unsigned int  reserved_1            : 13; /* bit[19-31]: [31��16]��ÿһbit˳���Ӧbit15��bit0������bit31��16��bitд1��ͬʱ������bit15��0������Ч����bit31��16��bitд0ʱ������bit15��0���ֲ��䣻
                                                                 [31��28]�������� */
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_CTRL1_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL1_etr_axi_csysreq_n_START      (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL1_etr_axi_csysreq_n_END        (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL1_hifi_int_mask_START          (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL1_hifi_int_mask_END            (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL1_hifi_all_int_mask_START      (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL1_hifi_all_int_mask_END        (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL1_etr_axi_csysreq_n_msk_START  (16)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL1_etr_axi_csysreq_n_msk_END    (16)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL1_hifi_int_mask_msk_START      (17)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL1_hifi_int_mask_msk_END        (17)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL1_hifi_all_int_mask_msk_START  (18)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL1_hifi_all_int_mask_msk_END    (18)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_PERIPH_CTRL2_UNION
 �ṹ˵��  : SC_PERIPH_CTRL2 �Ĵ����ṹ���塣��ַƫ����:0x004����ֵ:0x0C9B020F�����:32
 �Ĵ���˵��: ������ƼĴ���2��MMC CLK PHASE BYPASS���ƣ�func_testѡ��cssysʱ���ʹ�ܣ�ddrt,g3d muxѡ��testpin ѡ��hifi memory����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mmc_clk_phase_bypass_en_mmc0 : 2;  /* bit[0-1]  : MMC0 [0]sample��[1]drv��
                                                                        0��clkphaseused
                                                                        1;clkphasebypass */
        unsigned int  mmc_clk_phase_bypass_en_mmc1 : 2;  /* bit[2-3]  : MMC1 [0]sample��[1]drv��
                                                                        0��clkphaseused
                                                                        1;clkphasebypass */
        unsigned int  reserved_0                   : 2;  /* bit[4-5]  : reserved */
        unsigned int  nand_sys_mem_sel             : 1;  /* bit[6]    : nand memӳ��muxѡ��(ֻ�е�ATE nandc����ʱ����Ϊ0�����������������Ϊ1��
                                                                        0��nand
                                                                        1��sram */
        unsigned int  g3d_ddrt_axi_sel             : 1;  /* bit[7]    : ddrt��g3d��ddr axi4�ڵ�muxѡ��
                                                                        0��g3d
                                                                        1��ddrt */
        unsigned int  gu_mdm_bbp_testpin_sel       : 1;  /* bit[8]    : testpinѡ���źţ�
                                                                        0��gubbp
                                                                        1��mdmbbp */
        unsigned int  codec_ssi_master_check       : 3;  /* bit[9-11] : codec ssi master check
                                                                        �ӳ�ʱ��=1.5+0.5*master_check */
        unsigned int  func_test_soft               : 3;  /* bit[12-14]: func_test_soft���ѡ�����,�ܹ�ѡ��8������
                                                                        000��soctest h3
                                                                        001��soctest s1
                                                                        010��soctest s2
                                                                        011��soctest s3
                                                                        100��soctest s4
                                                                        101��soctest s5
                                                                        110��soctest s6
                                                                        111��soctest s7 */
        unsigned int  cssys_ts_enable              : 1;  /* bit[15]   : cssys TS enable��Ĭ��0
                                                                        1'b0��timestampe������ʹ��
                                                                        1'b1��timestampe����ʹ�� */
        unsigned int  hifi_ramctrl_s_ema           : 3;  /* bit[16-18]: memory�����ʿ��ƣ����ֵ������memory����ʱ���� */
        unsigned int  reserved_1                   : 1;  /* bit[19]   : reserved */
        unsigned int  hifi_ramctrl_s_emaw          : 2;  /* bit[20-21]: memoryд���ʿ��ƣ����ֵ������memoryд��ʱ�����ĵ���������������LIB�����ֲ��ǣ����������ĵ��� */
        unsigned int  hifi_ramctrl_s_emas          : 1;  /* bit[22]   : ��HSmemory�����ã�
                                                                        ��HDmemoryΪ����bit�������壻 */
        unsigned int  reserved_2                   : 3;  /* bit[23-25]: reserved */
        unsigned int  hifi_ramctrl_s_ret1n         : 1;  /* bit[26]   : retention����1
                                                                        0��retentionģʽ1��
                                                                        1����������ģʽ�� */
        unsigned int  hifi_ramctrl_s_ret2n         : 1;  /* bit[27]   : ֻ�е���powergatingѡ��ʱ�д˹��ܣ���û��powergating���ܵ�memory���˶˿�Ϊ�����������塣
                                                                        retention����2
                                                                        0��retentionģʽ2��
                                                                        1����������ģʽ�� */
        unsigned int  hifi_ramctrl_s_pgen          : 1;  /* bit[28]   : ֻ�е���powergatingѡ��ʱ�д˹��ܣ���û��powergating���ܵ�memory���˶˿�Ϊ�����������塣
                                                                        0����������ģʽ��
                                                                        1�����ret1n/ret2n���retention�� */
        unsigned int  reserved_3                   : 3;  /* bit[29-31]: reserved */
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_CTRL2_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL2_mmc_clk_phase_bypass_en_mmc0_START  (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL2_mmc_clk_phase_bypass_en_mmc0_END    (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL2_mmc_clk_phase_bypass_en_mmc1_START  (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL2_mmc_clk_phase_bypass_en_mmc1_END    (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL2_nand_sys_mem_sel_START              (6)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL2_nand_sys_mem_sel_END                (6)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL2_g3d_ddrt_axi_sel_START              (7)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL2_g3d_ddrt_axi_sel_END                (7)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL2_gu_mdm_bbp_testpin_sel_START        (8)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL2_gu_mdm_bbp_testpin_sel_END          (8)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL2_codec_ssi_master_check_START        (9)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL2_codec_ssi_master_check_END          (11)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL2_func_test_soft_START                (12)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL2_func_test_soft_END                  (14)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL2_cssys_ts_enable_START               (15)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL2_cssys_ts_enable_END                 (15)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL2_hifi_ramctrl_s_ema_START            (16)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL2_hifi_ramctrl_s_ema_END              (18)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL2_hifi_ramctrl_s_emaw_START           (20)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL2_hifi_ramctrl_s_emaw_END             (21)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL2_hifi_ramctrl_s_emas_START           (22)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL2_hifi_ramctrl_s_emas_END             (22)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL2_hifi_ramctrl_s_ret1n_START          (26)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL2_hifi_ramctrl_s_ret1n_END            (26)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL2_hifi_ramctrl_s_ret2n_START          (27)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL2_hifi_ramctrl_s_ret2n_END            (27)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL2_hifi_ramctrl_s_pgen_START           (28)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL2_hifi_ramctrl_s_pgen_END             (28)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_PERIPH_CTRL3_UNION
 �ṹ˵��  : SC_PERIPH_CTRL3 �Ĵ����ṹ���塣��ַƫ����:0x008����ֵ:0x0FFFC000�����:32
 �Ĵ���˵��: ������ƼĴ���3��Ҫ����memory share��ؿ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  hifi_ddr_harqmem_addr : 12; /* bit[0-11] : hifiӳ�䵽harq memory�ĵ�ַ */
        unsigned int  hifi_harqmemrmp_en    : 1;  /* bit[12]   : 0��������ӳ��
                                                                 1������ӳ�� */
        unsigned int  harqmem_sys_med_sel   : 1;  /* bit[13]   : harq mem 64bit muxѡ��
                                                                 0��sysnoc
                                                                 1��mednoc */
        unsigned int  soc_ap_occupy_grp1    : 2;  /* bit[14-15]: 2��b10��group1��SOC ram1��MMU��ռ��
                                                                 2��b11��group 1��SOC ram2��MDE��SysNoC��ռ��
                                                                 2��b0X��group 1��BBPռ�� */
        unsigned int  soc_ap_occupy_grp2    : 2;  /* bit[16-17]: 2��b10��group 2��SOC ram1��MMU��ռ��
                                                                 2��b11��group 2��SOC ram2��MDE��SysNoC��ռ��
                                                                 2��b0X��group 2��BBPռ�� */
        unsigned int  soc_ap_occupy_grp3    : 2;  /* bit[18-19]: 2��b10��group 3��SOC ram1��MMU��ռ��
                                                                 2��b11��group 3��SOC ram2��MDE��SysNoC��ռ��
                                                                 2��b0X��group 3��BBPռ�� */
        unsigned int  soc_ap_occupy_grp4    : 2;  /* bit[20-21]: 2��b10��group 4��SOC ram1��MMU��ռ��
                                                                 2��b11��group 4��SOC ram2��MDE��SysNoC��ռ��
                                                                 2��b0X��group 4��BBPռ�� */
        unsigned int  soc_ap_occupy_grp5    : 2;  /* bit[22-23]: 2��b10��group 5��SOC ram1��MMU��ռ��
                                                                 2��b11��group 5��SOC ram2��MDE��SysNoC��ռ��
                                                                 2��b0X��group 5��BBPռ�� */
        unsigned int  soc_ap_occupy_grp6    : 2;  /* bit[24-25]: 2��b10��group 6��SOC ram1��MMU��ռ��
                                                                 2��b11��group 6��SOC ram2��MDE��SysNoC��ռ��
                                                                 2��b0X��group 6��BBPռ�� */
        unsigned int  reserved_0            : 2;  /* bit[26-27]: reserved */
        unsigned int  reserved_1            : 4;  /* bit[28-31]: reserved */
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_CTRL3_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL3_hifi_ddr_harqmem_addr_START  (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL3_hifi_ddr_harqmem_addr_END    (11)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL3_hifi_harqmemrmp_en_START     (12)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL3_hifi_harqmemrmp_en_END       (12)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL3_harqmem_sys_med_sel_START    (13)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL3_harqmem_sys_med_sel_END      (13)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL3_soc_ap_occupy_grp1_START     (14)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL3_soc_ap_occupy_grp1_END       (15)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL3_soc_ap_occupy_grp2_START     (16)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL3_soc_ap_occupy_grp2_END       (17)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL3_soc_ap_occupy_grp3_START     (18)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL3_soc_ap_occupy_grp3_END       (19)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL3_soc_ap_occupy_grp4_START     (20)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL3_soc_ap_occupy_grp4_END       (21)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL3_soc_ap_occupy_grp5_START     (22)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL3_soc_ap_occupy_grp5_END       (23)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL3_soc_ap_occupy_grp6_START     (24)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL3_soc_ap_occupy_grp6_END       (25)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_PERIPH_CTRL4_UNION
 �ṹ˵��  : SC_PERIPH_CTRL4 �Ĵ����ṹ���塣��ַƫ����:0x00c����ֵ:0xE0130363�����:32
 �Ĵ���˵��: ����ϵͳ���ƼĴ��������ܰ���USBOGT��PICOPHY����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pico_fselv                : 3;  /* bit[0-2]  : [2��0]��PICOPHY��fselv�����ź� */
        unsigned int  fpga_ext_phy_sel          : 1;  /* bit[3]    : [3]��fpga��ʹ���ⲿphy�����ڲ�phy
                                                                     0��ʹ���ڲ�phy
                                                                     1��ʹ���ⲿphy */
        unsigned int  pico_refclksel            : 2;  /* bit[4-5]  : [5��4]��PICOPHY��refclksel���� */
        unsigned int  pico_siddq                : 1;  /* bit[6]    : [6]siddq���ã�
                                                                     1��ʹ��iddq
                                                                     0����ʹ�� */
        unsigned int  pico_suspendm_sleepm      : 1;  /* bit[7]    : [7]���������ʹ��PICOPHY������˳�suspendm��sleepmģʽ�Ƿ���Ч��
                                                                     1��Ϊ�ߣ���Ч��
                                                                     0��Ϊ�ͣ�����suspendmģʽ�� */
        unsigned int  pico_ogdisable            : 1;  /* bit[8]    : [8]��PICOPHY��otgdisable���� */
        unsigned int  pico_commononn            : 1;  /* bit[9]    : [9]��PICOPHY��commononn���� */
        unsigned int  pico_vbusvldext           : 1;  /* bit[10]   : [10]��PICOPHY��vbusvldext���� */
        unsigned int  pico_vbusvldextsel        : 1;  /* bit[11]   : [11]��PICOPHY��vbusvldextsel���� */
        unsigned int  pico_vatestenb            : 2;  /* bit[12-13]: [13��12]��PICOPHY��vatestenb���� */
        unsigned int  pico_suspendm             : 1;  /* bit[14]   : [14]������PICOPHY������˳�suspendmģʽ������sc_periph_ctrl4[7]��Чʱ����λ�������á�
                                                                     1��Ϊ�ߣ��˳�suspendmģʽ��
                                                                     0��Ϊ�ͣ�����suspendmģʽ�� */
        unsigned int  pico_sleepm               : 1;  /* bit[15]   : [15]������PICOPHY������˳�sleepmģʽ������sc_periph_ctrl4[7]��Чʱ����λ�������á�
                                                                     1��Ϊ�ߣ��˳�sleepmģʽ��
                                                                     0��Ϊ�ͣ�����sleepmģʽ�� */
        unsigned int  bc11_c                    : 1;  /* bit[16]   : [16]������USB BC1.1 c�ź���Ч����Device_only��Ҫ�����Ч,��Host_only��Ҫ�����Ч������sc_periph_ctrl5[3]��sc_periph_ctrl5[10]��Ϊ��Чʱ����λ�������á�
                                                                     1��Ϊ�ߣ���Ч��
                                                                     0��Ϊ�ͣ���Ч�� */
        unsigned int  bc11_b                    : 1;  /* bit[17]   : [17]������USB BC1.1 b�ź���Ч����Device_only��Ҫ�����Ч,��Host_only��Ҫ�����Ч������sc_periph_ctrl5[3]��sc_periph_ctrl5[10]��Ϊ��Чʱ����λ�������á�
                                                                     1��Ϊ�ߣ���Ч��
                                                                     0��Ϊ�ͣ���Ч�� */
        unsigned int  bc11_a                    : 1;  /* bit[18]   : [18]������USB BC1.1 a�ź���Ч����Host_only��Ҫ�����Ч,��Device_only��Ҫ�����Ч������sc_periph_ctrl5[3]��sc_periph_ctrl5[10]��Ϊ��Чʱ����λ�������á�
                                                                     1��Ϊ�ߣ���Ч��
                                                                     0��Ϊ�ͣ���Ч�� */
        unsigned int  bc11_gnd                  : 1;  /* bit[19]   : [19]������USB BC1.1 gnd�ź���Ч����Host_only��Ҫ�����Ч,��Device_only��Ҫ�����Ч������sc_periph_ctrl5[3]��sc_periph_ctrl5[10]��Ϊ��Чʱ����λ�������á�
                                                                     1��Ϊ�ߣ���Ч��
                                                                     0��Ϊ�ͣ���Ч�� */
        unsigned int  bc11_float                : 1;  /* bit[20]   : [20]������USB BC1.1 float�ź���Ч����Device_only��Ҫ�����Ч,��Host_only��Ҫ�����Ч������sc_periph_ctrl5[3]��sc_periph_ctrl5[10]��Ϊ��Чʱ����λ�������á�
                                                                     1��Ϊ�ߣ���Ч��
                                                                     0��Ϊ�ͣ���Ч�� */
        unsigned int  otg_phy_sel               : 1;  /* bit[21]   : ѡ���Ƿ�ʹ��otg��phy��
                                                                     1��ѡ��
                                                                     0����ѡ�� */
        unsigned int  usb_otg_ss_scaledown_mode : 2;  /* bit[22-23]: otg���ڷ���ģʽ��ʹ��
                                                                     00��ʹ��ʵ��ʱ�����
                                                                     01�����ٷ���ʱ�䣨�����豸����ͻ���ʱ�䣩
                                                                     10��ֻ�����豸����ͻ��ѵ�ʱ��
                                                                     11�������� */
        unsigned int  otg_dm_pulldown           : 1;  /* bit[24]   : [24]������USBOTG��dm_pulldown�ź���Ч����Host_only��Ҫ�����Ч����OTGģʽ�´�λ�������á�
                                                                     1��dm_pulldownΪ�ߣ���Ч��
                                                                     0��dm_pulldownΪ�ͣ���Ч�� */
        unsigned int  otg_dp_pulldown           : 1;  /* bit[25]   : [25]������USBOTG��dp_pulldown�ź���Ч����Host_only��Ҫ�����Ч����OTGģʽ�´�λ�������á�
                                                                     1��dp_pulldownΪ�ߣ���Ч��
                                                                     0��dp_pulldownΪ�ͣ���Ч�� */
        unsigned int  otg_idpullup              : 1;  /* bit[26]   : [26]�� ����USBOTG��idpullup�ź���Ч���ڲ�ʹ��ACA���ܣ���ʹ��OTG����ʱ����Ҫ�����Ч��
                                                                     1��idpullupΪ�ߣ���Ч��
                                                                     0��idpullupΪ�ͣ���Ч�� */
        unsigned int  otg_drvbus                : 1;  /* bit[27]   : [27]������USBOTG��drvvbus�ź���Ч����Host_only��Ҫ�����Ч����OTGģʽ�´�λ�������á�
                                                                     1��drvvbusΪ�ߣ���Ч��
                                                                     0��drvvbusΪ�ͣ���Ч�� */
        unsigned int  otg_sessend               : 1;  /* bit[28]   : [28]������USBOTG��sessend�ź���Ч����Device_only��Host_only��Ҫ�����Ч����OTGģʽ�´�λ�������á�
                                                                     1��sessendΪ�ߣ���Ч��0��sessendΪ�ͣ���Ч�� */
        unsigned int  otg_bvalid                : 1;  /* bit[29]   : [29]������USBOTG��bvalid�ź���Ч����Device_only��Host_only��Ҫ�����Ч����OTGģʽ�´�λ�������á�
                                                                     1��bvalidΪ�ߣ���Ч��0��bvalidΪ�ͣ���Ч�� */
        unsigned int  otg_avalid                : 1;  /* bit[30]   : [30]������USBOTG��avalid�ź���Ч����Device_only��Host_only��Ҫ�����Ч����OTGģʽ�´�λ�������á�
                                                                     1��avalidΪ�ߣ���Ч��0��avalidΪ�ͣ���Ч�� */
        unsigned int  otg_vbusvalid             : 1;  /* bit[31]   : [31]������USBOTG��vbusvalid�ź���Ч����Device_only��Host_only��Ҫ�����Ч����OTGģʽ�´�λ�������á�
                                                                     1��vbusvalidΪ�ߣ���Ч��0��vbusvalidΪ�ͣ���Ч�� */
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_CTRL4_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_pico_fselv_START                 (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_pico_fselv_END                   (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_fpga_ext_phy_sel_START           (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_fpga_ext_phy_sel_END             (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_pico_refclksel_START             (4)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_pico_refclksel_END               (5)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_pico_siddq_START                 (6)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_pico_siddq_END                   (6)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_pico_suspendm_sleepm_START       (7)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_pico_suspendm_sleepm_END         (7)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_pico_ogdisable_START             (8)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_pico_ogdisable_END               (8)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_pico_commononn_START             (9)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_pico_commononn_END               (9)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_pico_vbusvldext_START            (10)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_pico_vbusvldext_END              (10)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_pico_vbusvldextsel_START         (11)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_pico_vbusvldextsel_END           (11)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_pico_vatestenb_START             (12)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_pico_vatestenb_END               (13)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_pico_suspendm_START              (14)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_pico_suspendm_END                (14)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_pico_sleepm_START                (15)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_pico_sleepm_END                  (15)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_bc11_c_START                     (16)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_bc11_c_END                       (16)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_bc11_b_START                     (17)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_bc11_b_END                       (17)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_bc11_a_START                     (18)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_bc11_a_END                       (18)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_bc11_gnd_START                   (19)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_bc11_gnd_END                     (19)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_bc11_float_START                 (20)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_bc11_float_END                   (20)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_otg_phy_sel_START                (21)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_otg_phy_sel_END                  (21)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_usb_otg_ss_scaledown_mode_START  (22)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_usb_otg_ss_scaledown_mode_END    (23)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_otg_dm_pulldown_START            (24)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_otg_dm_pulldown_END              (24)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_otg_dp_pulldown_START            (25)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_otg_dp_pulldown_END              (25)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_otg_idpullup_START               (26)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_otg_idpullup_END                 (26)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_otg_drvbus_START                 (27)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_otg_drvbus_END                   (27)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_otg_sessend_START                (28)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_otg_sessend_END                  (28)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_otg_bvalid_START                 (29)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_otg_bvalid_END                   (29)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_otg_avalid_START                 (30)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_otg_avalid_END                   (30)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_otg_vbusvalid_START              (31)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL4_otg_vbusvalid_END                (31)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_PERIPH_CTRL5_UNION
 �ṹ˵��  : SC_PERIPH_CTRL5 �Ĵ����ṹ���塣��ַƫ����:0x010����ֵ:0x000000A0�����:32
 �Ĵ���˵��: ����ϵͳ���ƼĴ���5�����ܰ���PICOPHY����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved_0         : 3;  /* bit[0-2]  : [2��0]�������� */
        unsigned int  usbotg_res_sel     : 1;  /* bit[3]    : [3]��USBOTG�ĵ���ѡ�����
                                                              1��ѡ��PICOPHY�����aca���裻
                                                              0��ѡ��sc_periph_ctrl4��[20��16]���õĵ���ֵ�� */
        unsigned int  picophy_acaenb     : 1;  /* bit[4]    : [4]��PICOPHY��acaenb���� */
        unsigned int  picophy_bc_mode    : 1;  /* bit[5]    : [5]��PICOPHY��bc_mode���� */
        unsigned int  picophy_chrgsel    : 1;  /* bit[6]    : [6]��PICOPHY��chrgsel���� */
        unsigned int  picophy_vdatsrcend : 1;  /* bit[7]    : [7]��PICOPHY��vdatsrcend���� */
        unsigned int  picophy_vdatdetenb : 1;  /* bit[8]    : [8]��PICOPHY��vdatdetenb���� */
        unsigned int  picophy_dcdenb     : 1;  /* bit[9]    : [9]��PICOPHY��dcdenb���� */
        unsigned int  picophy_iddig      : 1;  /* bit[10]   : [10]��PICOPHY��iddigʹ������ */
        unsigned int  dbg_mux            : 2;  /* bit[11-12]: debug�ź����muxѡ��
                                                              00��ѡ��usb_state_internal
                                                              01��debug״̬�ź�1
                                                              10��debug״̬�ź�2
                                                              11����ʹ�� */
        unsigned int  reserved_1         : 19; /* bit[13-31]: [31��11]�������� */
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_CTRL5_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL5_usbotg_res_sel_START      (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL5_usbotg_res_sel_END        (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL5_picophy_acaenb_START      (4)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL5_picophy_acaenb_END        (4)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL5_picophy_bc_mode_START     (5)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL5_picophy_bc_mode_END       (5)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL5_picophy_chrgsel_START     (6)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL5_picophy_chrgsel_END       (6)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL5_picophy_vdatsrcend_START  (7)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL5_picophy_vdatsrcend_END    (7)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL5_picophy_vdatdetenb_START  (8)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL5_picophy_vdatdetenb_END    (8)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL5_picophy_dcdenb_START      (9)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL5_picophy_dcdenb_END        (9)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL5_picophy_iddig_START       (10)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL5_picophy_iddig_END         (10)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL5_dbg_mux_START             (11)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL5_dbg_mux_END               (12)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_PERIPH_CTRL6_UNION
 �ṹ˵��  : SC_PERIPH_CTRL6 �Ĵ����ṹ���塣��ַƫ����:0x014����ֵ:0x00000C9B�����:32
 �Ĵ���˵��: ������ƼĴ���6�����ܰ���CSSYS OFF��memroy����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cssysoff_ramctrl_s_ema   : 3;  /* bit[0-2]  : memory�����ʿ��ƣ����ֵ������memory����ʱ���� */
        unsigned int  reserved_0               : 1;  /* bit[3]    : reserved */
        unsigned int  cssysoff_ramctrl_s_emaw  : 2;  /* bit[4-5]  : memoryд���ʿ��ƣ����ֵ������memoryд��ʱ�����ĵ���������������LIB�����ֲ��ǣ����������ĵ��� */
        unsigned int  cssysoff_ramctrl_s_emas  : 1;  /* bit[6]    : ��HSmemory�����ã�
                                                                    ��HDmemoryΪ����bit�������壻 */
        unsigned int  reserved_1               : 3;  /* bit[7-9]  : reserved */
        unsigned int  cssysoff_ramctrl_s_ret1n : 1;  /* bit[10]   : retention����1
                                                                    0��retentionģʽ1��
                                                                    1����������ģʽ�� */
        unsigned int  cssysoff_ramctrl_s_ret2n : 1;  /* bit[11]   : ֻ�е���powergatingѡ��ʱ�д˹��ܣ���û��powergating���ܵ�memory���˶˿�Ϊ�����������塣
                                                                    retention����2
                                                                    0��retentionģʽ2��
                                                                    1����������ģʽ�� */
        unsigned int  cssysoff_ramctrl_s_pgen  : 1;  /* bit[12]   : ֻ�е���powergatingѡ��ʱ�д˹��ܣ���û��powergating���ܵ�memory���˶˿�Ϊ�����������塣
                                                                    0����������ģʽ��
                                                                    1�����ret1n/ret2n���retention�� */
        unsigned int  reserved_2               : 3;  /* bit[13-15]: reserved */
        unsigned int  reserved_3               : 16; /* bit[16-31]: ������������ */
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_CTRL6_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL6_cssysoff_ramctrl_s_ema_START    (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL6_cssysoff_ramctrl_s_ema_END      (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL6_cssysoff_ramctrl_s_emaw_START   (4)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL6_cssysoff_ramctrl_s_emaw_END     (5)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL6_cssysoff_ramctrl_s_emas_START   (6)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL6_cssysoff_ramctrl_s_emas_END     (6)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL6_cssysoff_ramctrl_s_ret1n_START  (10)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL6_cssysoff_ramctrl_s_ret1n_END    (10)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL6_cssysoff_ramctrl_s_ret2n_START  (11)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL6_cssysoff_ramctrl_s_ret2n_END    (11)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL6_cssysoff_ramctrl_s_pgen_START   (12)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL6_cssysoff_ramctrl_s_pgen_END     (12)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_PERIPH_CTRL8_UNION
 �ṹ˵��  : SC_PERIPH_CTRL8 �Ĵ����ṹ���塣��ַƫ����:0x018����ֵ:0x303344D1�����:32
 �Ĵ���˵��: ������ƼĴ���8�����ܰ���PICOPHY����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  periph_ctrl8_picophy_txrisetune0        : 2;  /* bit[0-1]  : PICOPHY��txrisetune0���� */
        unsigned int  periph_ctrl8_picophy_txpreempamptune0   : 2;  /* bit[2-3]  : PICOPHY��txpreempamptune0���� */
        unsigned int  periph_ctrl8_picophy_txrestune0         : 2;  /* bit[4-5]  : PICOPHY��txrestune0���� */
        unsigned int  periph_ctrl8_picophy_txhssvtune0        : 2;  /* bit[6-7]  : PICOPHY��txhssvtune0���� */
        unsigned int  periph_ctrl8_picophy_compdistune0       : 3;  /* bit[8-10] : PICOPHY��compdistune0���� */
        unsigned int  periph_ctrl8_picophy_txpreemppulsetune0 : 1;  /* bit[11]   : PICOPHY��txpreemppulsetune0���� */
        unsigned int  periph_ctrl8_picophy_otgtune0           : 3;  /* bit[12-14]: PICOPHY��otgtune0���� */
        unsigned int  reserved_0                              : 1;  /* bit[15]   : ������ */
        unsigned int  periph_ctrl8_picophy_sqrxtune0          : 3;  /* bit[16-18]: PICOPHY��sqrxtune0���� */
        unsigned int  reserved_1                              : 1;  /* bit[19]   : ������ */
        unsigned int  periph_ctrl8_picophy_txvreftune0        : 4;  /* bit[20-23]: PICOPHY��txvreftune0���� */
        unsigned int  reserved_2                              : 4;  /* bit[24-27]: ������ */
        unsigned int  periph_ctrl8_picophy_txfslstune0        : 4;  /* bit[28-31]: PICOPHY��txfslstune0���� */
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_CTRL8_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL8_periph_ctrl8_picophy_txrisetune0_START         (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL8_periph_ctrl8_picophy_txrisetune0_END           (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL8_periph_ctrl8_picophy_txpreempamptune0_START    (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL8_periph_ctrl8_picophy_txpreempamptune0_END      (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL8_periph_ctrl8_picophy_txrestune0_START          (4)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL8_periph_ctrl8_picophy_txrestune0_END            (5)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL8_periph_ctrl8_picophy_txhssvtune0_START         (6)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL8_periph_ctrl8_picophy_txhssvtune0_END           (7)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL8_periph_ctrl8_picophy_compdistune0_START        (8)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL8_periph_ctrl8_picophy_compdistune0_END          (10)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL8_periph_ctrl8_picophy_txpreemppulsetune0_START  (11)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL8_periph_ctrl8_picophy_txpreemppulsetune0_END    (11)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL8_periph_ctrl8_picophy_otgtune0_START            (12)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL8_periph_ctrl8_picophy_otgtune0_END              (14)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL8_periph_ctrl8_picophy_sqrxtune0_START           (16)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL8_periph_ctrl8_picophy_sqrxtune0_END             (18)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL8_periph_ctrl8_picophy_txvreftune0_START         (20)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL8_periph_ctrl8_picophy_txvreftune0_END           (23)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL8_periph_ctrl8_picophy_txfslstune0_START         (28)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL8_periph_ctrl8_picophy_txfslstune0_END           (31)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_PERIPH_CTRL9_UNION
 �ṹ˵��  : SC_PERIPH_CTRL9 �Ĵ����ṹ���塣��ַƫ����:0x01C����ֵ:0x00000000�����:32
 �Ĵ���˵��: ������ƼĴ���9�����ܰ���PICOPHY����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  periph_ctrl9_picoply_testclken      : 1;  /* bit[0]    : PICOPHY��testclken */
        unsigned int  periph_ctrl9_picoply_testdataoutsel : 1;  /* bit[1]    : PICOPHY��testdataoutsel���� */
        unsigned int  reserved_0                          : 2;  /* bit[2-3]  : ���� */
        unsigned int  periph_ctrl9_picoply_testaddr       : 4;  /* bit[4-7]  : PICOPHY��testaddr���� */
        unsigned int  periph_ctrl9_picoply_testdatain     : 8;  /* bit[8-15] : PICOPHY��testdatain���� */
        unsigned int  reserved_1                          : 16; /* bit[16-31]: reserved */
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_CTRL9_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL9_periph_ctrl9_picoply_testclken_START       (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL9_periph_ctrl9_picoply_testclken_END         (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL9_periph_ctrl9_picoply_testdataoutsel_START  (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL9_periph_ctrl9_picoply_testdataoutsel_END    (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL9_periph_ctrl9_picoply_testaddr_START        (4)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL9_periph_ctrl9_picoply_testaddr_END          (7)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL9_periph_ctrl9_picoply_testdatain_START      (8)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL9_periph_ctrl9_picoply_testdatain_END        (15)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_PERIPH_CTRL10_UNION
 �ṹ˵��  : SC_PERIPH_CTRL10 �Ĵ����ṹ���塣��ַƫ����:0x020����ֵ:0x00000000�����:32
 �Ĵ���˵��: ������ƼĴ���10��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved : 32; /* bit[0-31]: reserved */
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_CTRL10_UNION;
#endif


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_PERIPH_CTRL12_UNION
 �ṹ˵��  : SC_PERIPH_CTRL12 �Ĵ����ṹ���塣��ַƫ����:0x024����ֵ:0x0C9B0C9B�����:32
 �Ĵ���˵��: ������ƼĴ���12�����ܰ���PERISYS��memroy����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  perisys_ramctrl_d1w2r_emaa       : 3;  /* bit[0-2]  : memory�����ʿ��ƣ����ֵ������memory����ʱ���� */
        unsigned int  perisys_ramctrl_d1w2r_emab       : 3;  /* bit[3-5]  : ���廹���Ǻ�ȷ�� */
        unsigned int  perisys_ramctrl_d1w2r_emasa      : 1;  /* bit[6]    : ���廹���Ǻ�ȷ�� */
        unsigned int  perisys_ramctrl_d1w2r_colldisn   : 1;  /* bit[7]    : ͬʱ��дһ����ַʱ��memory����Ϊ
                                                                            0����д������֤��ȷ��
                                                                            1��д��֤��ȷ��������֤ */
        unsigned int  reserved_0                       : 2;  /* bit[8-9]  : reserved */
        unsigned int  perisys_ramctrl_d1w2r_ret1n      : 1;  /* bit[10]   : retention����1
                                                                            0��retentionģʽ1��
                                                                            1����������ģʽ�� */
        unsigned int  perisys_ramctrl_d1w2r_ret2n      : 1;  /* bit[11]   : ֻ�е���powergatingѡ��ʱ�д˹��ܣ���û��powergating���ܵ�memory���˶˿�Ϊ�����������塣
                                                                            retention����2
                                                                            0��retentionģʽ2��
                                                                            1����������ģʽ�� */
        unsigned int  perisys_ramctrl_d1w2r_pgen       : 1;  /* bit[12]   : ֻ�е���powergatingѡ��ʱ�д˹��ܣ���û��powergating���ܵ�memory���˶˿�Ϊ�����������塣
                                                                            0����������ģʽ��
                                                                            1�����ret1n/ret2n���retention�� */
        unsigned int  reserved_1                       : 3;  /* bit[13-15]: reserved */
        unsigned int  perisys_ramctrl_d1rw2rw_ema      : 3;  /* bit[16-18]: memory�����ʿ��ƣ����ֵ������memory����ʱ����memoryA�ں�B�ڹ�������á� */
        unsigned int  reserved_2                       : 1;  /* bit[19]   : reserved */
        unsigned int  perisys_ramctrl_d1rw2rw_emaw     : 2;  /* bit[20-21]: memoryд���ʿ��ƣ����ֵ������memoryд��ʱ�����ĵ���������������LIB�����ֲ��ǣ����������ĵ�����memoryA�ں�B�ڹ�������á� */
        unsigned int  perisys_ramctrl_d1rw2rw_emas     : 1;  /* bit[22]   : memoryA�ں�B�ڹ�������á�
                                                                            ��HSmemory�����ã�
                                                                            ��HDmemory��ȷ�������޴����ã��������崦�� */
        unsigned int  perisys_ramctrl_d1rw2rw_colldisn : 1;  /* bit[23]   : ͬʱ��дһ����ַʱ��memory����Ϊ
                                                                            0����д������֤��ȷ��
                                                                            1��д��֤��ȷ��������֤ */
        unsigned int  reserved_3                       : 2;  /* bit[24-25]: reserved */
        unsigned int  perisys_ramctrl_d1rw2rw_ret1n    : 1;  /* bit[26]   : retention����1
                                                                            0��retentionģʽ1��
                                                                            1����������ģʽ�� */
        unsigned int  perisys_ramctrl_d1rw2rw_ret2n    : 1;  /* bit[27]   : ֻ�е���powergatingѡ��ʱ�д˹��ܣ���û��powergating���ܵ�memory���˶˿�Ϊ�����������塣
                                                                            retention����2
                                                                            0��retentionģʽ2��
                                                                            1����������ģʽ�� */
        unsigned int  perisys_ramctrl_d1rw2rw_pgen     : 1;  /* bit[28]   : ֻ�е���powergatingѡ��ʱ�д˹��ܣ���û��powergating���ܵ�memory���˶˿�Ϊ�����������塣
                                                                            0����������ģʽ��
                                                                            1�����ret1n/ret2n���retention�� */
        unsigned int  perisys_ramctrl_d1rw2rw          : 3;  /* bit[29-31]: perisys_ramctrl_d1rw2rw */
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_CTRL12_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL12_perisys_ramctrl_d1w2r_emaa_START        (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL12_perisys_ramctrl_d1w2r_emaa_END          (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL12_perisys_ramctrl_d1w2r_emab_START        (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL12_perisys_ramctrl_d1w2r_emab_END          (5)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL12_perisys_ramctrl_d1w2r_emasa_START       (6)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL12_perisys_ramctrl_d1w2r_emasa_END         (6)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL12_perisys_ramctrl_d1w2r_colldisn_START    (7)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL12_perisys_ramctrl_d1w2r_colldisn_END      (7)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL12_perisys_ramctrl_d1w2r_ret1n_START       (10)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL12_perisys_ramctrl_d1w2r_ret1n_END         (10)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL12_perisys_ramctrl_d1w2r_ret2n_START       (11)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL12_perisys_ramctrl_d1w2r_ret2n_END         (11)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL12_perisys_ramctrl_d1w2r_pgen_START        (12)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL12_perisys_ramctrl_d1w2r_pgen_END          (12)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL12_perisys_ramctrl_d1rw2rw_ema_START       (16)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL12_perisys_ramctrl_d1rw2rw_ema_END         (18)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL12_perisys_ramctrl_d1rw2rw_emaw_START      (20)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL12_perisys_ramctrl_d1rw2rw_emaw_END        (21)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL12_perisys_ramctrl_d1rw2rw_emas_START      (22)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL12_perisys_ramctrl_d1rw2rw_emas_END        (22)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL12_perisys_ramctrl_d1rw2rw_colldisn_START  (23)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL12_perisys_ramctrl_d1rw2rw_colldisn_END    (23)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL12_perisys_ramctrl_d1rw2rw_ret1n_START     (26)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL12_perisys_ramctrl_d1rw2rw_ret1n_END       (26)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL12_perisys_ramctrl_d1rw2rw_ret2n_START     (27)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL12_perisys_ramctrl_d1rw2rw_ret2n_END       (27)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL12_perisys_ramctrl_d1rw2rw_pgen_START      (28)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL12_perisys_ramctrl_d1rw2rw_pgen_END        (28)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL12_perisys_ramctrl_d1rw2rw_START           (29)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL12_perisys_ramctrl_d1rw2rw_END             (31)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_PERIPH_CTRL13_UNION
 �ṹ˵��  : SC_PERIPH_CTRL13 �Ĵ����ṹ���塣��ַƫ����:0x028����ֵ:0x000007F8�����:32
 �Ĵ���˵��: ������ƼĴ���13������acpu��ccpu��hifiʱ���л�ʹ�ܣ�mmc����ʱ���ſ�ʹ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  periph_ctrl13_acpu_clk_sel_bypass_en : 1;  /* bit[0]    : acpu ʹ��״̬�ź���Ϊʱ���л����� ʹ�ܣ�
                                                                                0��ʹ��
                                                                                1����ʹ�� */
        unsigned int  periph_ctrl13_ccpu_clk_sel_bypass_en : 1;  /* bit[1]    : ccpu ʹ��״̬�ź���Ϊʱ���л����� ʹ�ܣ�
                                                                                0��ʹ��
                                                                                1����ʹ�� */
        unsigned int  periph_ctrl13_hifi_clk_sel_bypass_en : 1;  /* bit[2]    : hifi ʹ��״̬�ź���Ϊʱ���л����� ʹ�ܣ�
                                                                                0��ʹ��
                                                                                1����ʹ�� */
        unsigned int  periph_ctrl13_mmc0_ckg_bypass_en     : 1;  /* bit[3]    : mmc0 ͨ��mmc0������stop_clk�źŹ��ӹ���
                                                                                1������bypass
                                                                                0������ʹ�� */
        unsigned int  periph_ctrl13_mmc1_ckg_bypass_en     : 1;  /* bit[4]    : mmc1 ͨ��mmc1������stop_clk�źŹ��ӹ���
                                                                                1������bypass
                                                                                0������ʹ�� */
        unsigned int  periph_ctrl13_mmc2_ckg_bypass_en     : 1;  /* bit[5]    : mmc2 ͨ��mmc2������stop_clk�źŹ��ӹ���
                                                                                1������bypass
                                                                                0������ʹ�� */
        unsigned int  periph_ctrl13_ssi_pad_ckg_bypass_en  : 1;  /* bit[6]    : ssi padͨ��pumssi��codecssi idle�ź��Զ��ſ�����padʱ�ӹ��ܣ�
                                                                                1������bypass
                                                                                0������ʹ�� */
        unsigned int  periph_ctrl13_hprot2_usb             : 1;  /* bit[7]    : usb hprot2���ã�ǿ������Ϊbufferable������������������¿�������Ϊ0�� */
        unsigned int  periph_ctrl13_hprot2_mmc0            : 1;  /* bit[8]    : mmc0 hprot2���ã�ǿ������Ϊbufferable������������������¿�������Ϊ0�� */
        unsigned int  periph_ctrl13_hprot2_mmc1            : 1;  /* bit[9]    : mmc1 hprot2���ã�ǿ������Ϊbufferable������������������¿�������Ϊ0�� */
        unsigned int  periph_ctrl13_hprot2_mmc2            : 1;  /* bit[10]   : mmc2 hprot2���ã�ǿ������Ϊbufferable������������������¿�������Ϊ0�� */
        unsigned int  reserved                             : 21; /* bit[11-31]: ������ */
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_CTRL13_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL13_periph_ctrl13_acpu_clk_sel_bypass_en_START  (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL13_periph_ctrl13_acpu_clk_sel_bypass_en_END    (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL13_periph_ctrl13_ccpu_clk_sel_bypass_en_START  (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL13_periph_ctrl13_ccpu_clk_sel_bypass_en_END    (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL13_periph_ctrl13_hifi_clk_sel_bypass_en_START  (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL13_periph_ctrl13_hifi_clk_sel_bypass_en_END    (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL13_periph_ctrl13_mmc0_ckg_bypass_en_START      (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL13_periph_ctrl13_mmc0_ckg_bypass_en_END        (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL13_periph_ctrl13_mmc1_ckg_bypass_en_START      (4)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL13_periph_ctrl13_mmc1_ckg_bypass_en_END        (4)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL13_periph_ctrl13_mmc2_ckg_bypass_en_START      (5)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL13_periph_ctrl13_mmc2_ckg_bypass_en_END        (5)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL13_periph_ctrl13_ssi_pad_ckg_bypass_en_START   (6)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL13_periph_ctrl13_ssi_pad_ckg_bypass_en_END     (6)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL13_periph_ctrl13_hprot2_usb_START              (7)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL13_periph_ctrl13_hprot2_usb_END                (7)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL13_periph_ctrl13_hprot2_mmc0_START             (8)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL13_periph_ctrl13_hprot2_mmc0_END               (8)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL13_periph_ctrl13_hprot2_mmc1_START             (9)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL13_periph_ctrl13_hprot2_mmc1_END               (9)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL13_periph_ctrl13_hprot2_mmc2_START             (10)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL13_periph_ctrl13_hprot2_mmc2_END               (10)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_PERIPH_CTRL14_UNION
 �ṹ˵��  : SC_PERIPH_CTRL14 �Ĵ����ṹ���塣��ַƫ����:0x02C����ֵ:0x00000000�����:32
 �Ĵ���˵��: ������ƼĴ���14��ʱ��Ƶ�ʼ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  periph_ctrl14_fm_en      : 1;  /* bit[0]    : ʱ�Ӽ��Ƶ��ʹ�ܣ�
                                                                    1��ʹ��
                                                                    0����ʹ�� */
        unsigned int  reserved_0               : 7;  /* bit[1-7]  :  */
        unsigned int  periph_ctrl14_fm_clk_sel : 8;  /* bit[8-15] : ���ʱ��ѡ��
                                                                    00_0000�� clk_syspll_div2_src
                                                                    00_0001�� clk_300m_src
                                                                    00_0010�� clk_syspll_div_src
                                                                    00_0011�� clk_bbppll0_div5_src
                                                                    00_0100�� clk_syspll_div8_src
                                                                    00_0101�� clk_acpu_div_src
                                                                    00_0110�� clk_ddrphy_ref_src
                                                                    00_0111�� clk_mmc0_src
                                                                    00_1000�� clk_mmc1_src
                                                                    00_1001�� clk_mmc2_src
                                                                    00_1010�� clk_picophy_test_src
                                                                    00_1011�� clk_hifi_src
                                                                    00_1100�� clk_cs_tpiu_src
                                                                    00_1101�� clk_tsensor_src
                                                                    00_1110�� clk_150m_src
                                                                    00_1111�� clk_bus_src
                                                                    01_0000�� clk_ddrc_axi1_src
                                                                    01_0001�� clk_ddrc_axi3_src
                                                                    01_0010�� clk_ddrc_axi_src
                                                                    01_0011�� clk_sys_noc_150m_src
                                                                    01_0100�� clk_harq_src
                                                                    01_0101�� clk_cs_dapb_src
                                                                    01_0110�� clk_sys_sel_src
                                                                    01_0111�� clk_ddr_sel_src
                                                                    01_1000�� clk_slow_off_src
                                                                    01_1001�� clk_ccpu_sel_src
                                                                    01_1010�� clk_uart1_src
                                                                    01_1011�� clk_uart2_src
                                                                    01_1100�� clk_uart3_src
                                                                    01_1101�� clk_uart4_src
                                                                    01_1110�� clk_acpupll_src
                                                                    01_1111�� clk_gpupll_src
                                                                    10_0000�� clk_medpll_src
                                                                    10_0001�� clk_syspll_src
                                                                    10_0010�� clk_ddrpll_src
                                                                    10_0011�� clk_ddrpll1_src
                                                                    10_0100�� clk_bbppll0_src
                                                                    10_0101�� clk_sys_on
                                                                    10_0110�� clk_tcxo
                                                                    10_0111�� jtag_tck
                                                                    default�� clk_bus_src */
        unsigned int  reserved_1               : 16; /* bit[16-31]: reserved */
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_CTRL14_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL14_periph_ctrl14_fm_en_START       (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL14_periph_ctrl14_fm_en_END         (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL14_periph_ctrl14_fm_clk_sel_START  (8)
#define SOC_PERI_SCTRL_SC_PERIPH_CTRL14_periph_ctrl14_fm_clk_sel_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_MEM_CTRL0_UNION
 �ṹ˵��  : SC_MEM_CTRL0 �Ĵ����ṹ���塣��ַƫ����:0x030����ֵ:0x00230C9B�����:32
 �Ĵ���˵��: aarm��ϵͳ���ƼĴ��������ܰ���sram_ap_off/ipf/seceng_cc/seceng_c2/seceng_rc4/socp��rom��memory����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  perisys_ramctrl_s_ema   : 3;  /* bit[0-2]  : memory�����ʿ��ƣ����ֵ������memory����ʱ���� */
        unsigned int  reserved_0              : 1;  /* bit[3]    : reserved */
        unsigned int  perisys_ramctrl_s_emaw  : 2;  /* bit[4-5]  : memoryд���ʿ��ƣ����ֵ������memoryд��ʱ�����ĵ���������������LIB�����ֲ��ǣ����������ĵ��� */
        unsigned int  perisys_ramctrl_s_emas  : 1;  /* bit[6]    : ��HSmemory�����ã�
                                                                   ��HDmemoryΪ����bit�������壻 */
        unsigned int  reserved_1              : 3;  /* bit[7-9]  : reserved */
        unsigned int  perisys_ramctrl_s_ret1n : 1;  /* bit[10]   : retention����1
                                                                   0��retentionģʽ1��
                                                                   1����������ģʽ�� */
        unsigned int  perisys_ramctrl_s_ret2n : 1;  /* bit[11]   : ֻ�е���powergatingѡ��ʱ�д˹��ܣ���û��powergating���ܵ�memory���˶˿�Ϊ�����������塣
                                                                   retention����2
                                                                   0��retentionģʽ2��
                                                                   1����������ģʽ�� */
        unsigned int  perisys_ramctrl_s_pgen  : 1;  /* bit[12]   : ֻ�е���powergatingѡ��ʱ�д˹��ܣ���û��powergating���ܵ�memory���˶˿�Ϊ�����������塣
                                                                   0����������ģʽ��
                                                                   1�����ret1n/ret2n���retention�� */
        unsigned int  reserved_2              : 3;  /* bit[13-15]: reserved */
        unsigned int  rom_ctrl_ema            : 3;  /* bit[16-18]: memory�����ʿ��ƣ����ֵ������memory����ʱ����memoryA�ں�B�ڹ�������á� */
        unsigned int  reserved_3              : 1;  /* bit[19]   : reserved */
        unsigned int  rom_ctrl_pgen           : 1;  /* bit[20]   : 0����������ģʽ��
                                                                   1������retention���� */
        unsigned int  rom_ctrl_ken            : 1;  /* bit[21]   : keeperenable
                                                                   0��keepfunctionstateofthebitlinesbyholdingthebitlinevalues,saveleakagebutshowdowntheaccesstimeby1~2%
                                                                   1��keeperdisable */
        unsigned int  reserved_4              : 2;  /* bit[22-23]: reserved */
        unsigned int  reserved_5              : 8;  /* bit[24-31]: reserved */
    } reg;
} SOC_PERI_SCTRL_SC_MEM_CTRL0_UNION;
#endif
#define SOC_PERI_SCTRL_SC_MEM_CTRL0_perisys_ramctrl_s_ema_START    (0)
#define SOC_PERI_SCTRL_SC_MEM_CTRL0_perisys_ramctrl_s_ema_END      (2)
#define SOC_PERI_SCTRL_SC_MEM_CTRL0_perisys_ramctrl_s_emaw_START   (4)
#define SOC_PERI_SCTRL_SC_MEM_CTRL0_perisys_ramctrl_s_emaw_END     (5)
#define SOC_PERI_SCTRL_SC_MEM_CTRL0_perisys_ramctrl_s_emas_START   (6)
#define SOC_PERI_SCTRL_SC_MEM_CTRL0_perisys_ramctrl_s_emas_END     (6)
#define SOC_PERI_SCTRL_SC_MEM_CTRL0_perisys_ramctrl_s_ret1n_START  (10)
#define SOC_PERI_SCTRL_SC_MEM_CTRL0_perisys_ramctrl_s_ret1n_END    (10)
#define SOC_PERI_SCTRL_SC_MEM_CTRL0_perisys_ramctrl_s_ret2n_START  (11)
#define SOC_PERI_SCTRL_SC_MEM_CTRL0_perisys_ramctrl_s_ret2n_END    (11)
#define SOC_PERI_SCTRL_SC_MEM_CTRL0_perisys_ramctrl_s_pgen_START   (12)
#define SOC_PERI_SCTRL_SC_MEM_CTRL0_perisys_ramctrl_s_pgen_END     (12)
#define SOC_PERI_SCTRL_SC_MEM_CTRL0_rom_ctrl_ema_START             (16)
#define SOC_PERI_SCTRL_SC_MEM_CTRL0_rom_ctrl_ema_END               (18)
#define SOC_PERI_SCTRL_SC_MEM_CTRL0_rom_ctrl_pgen_START            (20)
#define SOC_PERI_SCTRL_SC_MEM_CTRL0_rom_ctrl_pgen_END              (20)
#define SOC_PERI_SCTRL_SC_MEM_CTRL0_rom_ctrl_ken_START             (21)
#define SOC_PERI_SCTRL_SC_MEM_CTRL0_rom_ctrl_ken_END               (21)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_AUTO_CLK_GATE0_UNION
 �ṹ˵��  : SC_AUTO_CLK_GATE0 �Ĵ����ṹ���塣��ַƫ����:0x034����ֵ:0x00000003�����:32
 �Ĵ���˵��: ʱ���Զ��ſ�ʹ�ܼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  apdmac_auto_clken0_sel     : 1;  /* bit[0]    : apdmac_auto_clken0_selPERIPH_MISC
                                                                      0��autoclkgatedisable
                                                                      1��autoclkgageenable */
        unsigned int  apdmac_auto_clken1_sel     : 1;  /* bit[1]    : apdmac_auto_clken1_selPERIPH_MISC
                                                                      0��autoclkgatedisable
                                                                      1��autoclkgageenable */
        unsigned int  reserved_0                 : 1;  /* bit[2]    : reserved */
        unsigned int  reserved_1                 : 1;  /* bit[3]    : reserved */
        unsigned int  reserved_2                 : 12; /* bit[4-15] : reserved */
        unsigned int  apdmac_auto_clken0_sel_msk : 1;  /* bit[16]   : apdmac_auto_clken0_selPERIPH_MISC */
        unsigned int  apdmac_auto_clken1_sel_msk : 1;  /* bit[17]   : apdmac_auto_clken1_selPERIPH_MISC */
        unsigned int  reserved_3                 : 1;  /* bit[18]   : reserved */
        unsigned int  reserved_4                 : 1;  /* bit[19]   : reserved */
        unsigned int  reserved_5                 : 12; /* bit[20-31]: [31��16]��ÿһbit˳���Ӧbit15��bit0������bit31��16��bitд1��ͬʱ������bit15��0������Ч����bit31��16��bitд0ʱ������bit15��0���ֲ��䣻
                                                                      [31��28]�������� */
    } reg;
} SOC_PERI_SCTRL_SC_AUTO_CLK_GATE0_UNION;
#endif
#define SOC_PERI_SCTRL_SC_AUTO_CLK_GATE0_apdmac_auto_clken0_sel_START      (0)
#define SOC_PERI_SCTRL_SC_AUTO_CLK_GATE0_apdmac_auto_clken0_sel_END        (0)
#define SOC_PERI_SCTRL_SC_AUTO_CLK_GATE0_apdmac_auto_clken1_sel_START      (1)
#define SOC_PERI_SCTRL_SC_AUTO_CLK_GATE0_apdmac_auto_clken1_sel_END        (1)
#define SOC_PERI_SCTRL_SC_AUTO_CLK_GATE0_apdmac_auto_clken0_sel_msk_START  (16)
#define SOC_PERI_SCTRL_SC_AUTO_CLK_GATE0_apdmac_auto_clken0_sel_msk_END    (16)
#define SOC_PERI_SCTRL_SC_AUTO_CLK_GATE0_apdmac_auto_clken1_sel_msk_START  (17)
#define SOC_PERI_SCTRL_SC_AUTO_CLK_GATE0_apdmac_auto_clken1_sel_msk_END    (17)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_AUTO_CLK_GATE1_UNION
 �ṹ˵��  : SC_AUTO_CLK_GATE1 �Ĵ����ṹ���塣��ַƫ����:0x038����ֵ:0x00000000�����:32
 �Ĵ���˵��: ʱ���Զ��ſ�ʹ�ܼĴ���������NOC100M����ʱ���Զ���Ƶ�����Ƿ�ʹ�ܵ�ͶƱ
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  noc_freq_switch_100m_vote     : 16; /* bit[0-15] : NOC100M����ʱ��ͨ��nopending�ź��Զ���Ƶ�����Ƿ�ʹ�ܣ�����ǿ������Ƶ��Ϊ100M��ͶƱ
                                                                         1��ͶƱ��ʹ�øù���
                                                                         0��ͶƱʹ�øù��� */
        unsigned int  noc_freq_switch_100m_vote_msk : 16; /* bit[16-31]: ������ */
    } reg;
} SOC_PERI_SCTRL_SC_AUTO_CLK_GATE1_UNION;
#endif
#define SOC_PERI_SCTRL_SC_AUTO_CLK_GATE1_noc_freq_switch_100m_vote_START      (0)
#define SOC_PERI_SCTRL_SC_AUTO_CLK_GATE1_noc_freq_switch_100m_vote_END        (15)
#define SOC_PERI_SCTRL_SC_AUTO_CLK_GATE1_noc_freq_switch_100m_vote_msk_START  (16)
#define SOC_PERI_SCTRL_SC_AUTO_CLK_GATE1_noc_freq_switch_100m_vote_msk_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_AUTO_CLK_GATE2_UNION
 �ṹ˵��  : SC_AUTO_CLK_GATE2 �Ĵ����ṹ���塣��ַƫ����:0x03c����ֵ:0x00000000�����:32
 �Ĵ���˵��: ʱ���Զ��ſ�ʹ�ܼĴ���������NOC150M����ʱ���Զ���Ƶ�����Ƿ�ʹ�ܵ�ͶƱ
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  noc_freq_switch_150m_vote     : 16; /* bit[0-15] : NOC150M����ʱ��ͨ��nopending�ź��Զ���Ƶ�����Ƿ�ʹ�ܣ�����ǿ������Ƶ��Ϊ150M��ͶƱ
                                                                         1��ͶƱ��ʹ�øù���
                                                                         0��ͶƱʹ�øù��� */
        unsigned int  noc_freq_switch_150m_vote_msk : 16; /* bit[16-31]:  */
    } reg;
} SOC_PERI_SCTRL_SC_AUTO_CLK_GATE2_UNION;
#endif
#define SOC_PERI_SCTRL_SC_AUTO_CLK_GATE2_noc_freq_switch_150m_vote_START      (0)
#define SOC_PERI_SCTRL_SC_AUTO_CLK_GATE2_noc_freq_switch_150m_vote_END        (15)
#define SOC_PERI_SCTRL_SC_AUTO_CLK_GATE2_noc_freq_switch_150m_vote_msk_START  (16)
#define SOC_PERI_SCTRL_SC_AUTO_CLK_GATE2_noc_freq_switch_150m_vote_msk_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_DDR_CTRL0_UNION
 �ṹ˵��  : SC_DDR_CTRL0 �Ĵ����ṹ���塣��ַƫ����:0x050����ֵ:0x00000005�����:32
 �Ĵ���˵��: DDR���üĴ���0
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  byp_mode                : 1;  /* bit[0]    : phy��pll����ģʽ
                                                                   0��mission mode
                                                                   1��bypass mode */
        unsigned int  reserved_0              : 1;  /* bit[1]    : reserved */
        unsigned int  reserved_1              : 1;  /* bit[2]    : reserved */
        unsigned int  byp_mode_clk_sel        : 1;  /* bit[3]    : ��·ʱ��ѡ���źţ�������ɼ�����
                                                                   0��ǿ��ѡ��ddr_clka·ʱ�ӡ�
                                                                   1������byp_modeֵ��ѡ��ddr_clka����ddr_clkbʱ�ӡ� */
        unsigned int  ddr_axi2_sysnoc_mid_sel : 1;  /* bit[4]    : ddr axi2 sysnoc�� awid��arid[11��7]ѡ��
                                                                   0��ԭ����awid��arid[11��7]
                                                                   1��userbit[5��1] */
        unsigned int  ddr_axi1_smmu_mid_sel   : 1;  /* bit[5]    : ddr axi1 smmu �� awid��arid[11��9]ѡ��
                                                                   0��ѡ��ԭ��awid��arid[11��9]
                                                                   1��userbit[3��1]
                                                                   ��ע�⡿��
                                                                   ����SMMU��һ�����Լ��: SMMU������Replace�������arid��awid���ӵ�4-bit������1111��SMMU����Replace������Ӧ��userbit[3:1]������111������SMMU��master ID�� */
        unsigned int  reserved_2              : 8;  /* bit[6-13] : hifimaster */
        unsigned int  reserved_3              : 2;  /* bit[14-15]: mcumaster */
        unsigned int  reserved_4              : 2;  /* bit[16-17]: dmaaximaster */
        unsigned int  reserved_5              : 2;  /* bit[18-19]: acpumaster */
        unsigned int  reserved_6              : 2;  /* bit[20-21]: modemmaster */
        unsigned int  reserved_7              : 2;  /* bit[22-23]: cssysmaster */
        unsigned int  reserved_8              : 1;  /* bit[24]   : systemnoc_timeout_en
                                                                   0��disable timeout
                                                                   1��enable timeout */
        unsigned int  reserved_9              : 7;  /* bit[25-31]: ����
                                                                   NOC����QOS���ȼ����ã�������ֵΪ0��3 */
    } reg;
} SOC_PERI_SCTRL_SC_DDR_CTRL0_UNION;
#endif
#define SOC_PERI_SCTRL_SC_DDR_CTRL0_byp_mode_START                 (0)
#define SOC_PERI_SCTRL_SC_DDR_CTRL0_byp_mode_END                   (0)
#define SOC_PERI_SCTRL_SC_DDR_CTRL0_byp_mode_clk_sel_START         (3)
#define SOC_PERI_SCTRL_SC_DDR_CTRL0_byp_mode_clk_sel_END           (3)
#define SOC_PERI_SCTRL_SC_DDR_CTRL0_ddr_axi2_sysnoc_mid_sel_START  (4)
#define SOC_PERI_SCTRL_SC_DDR_CTRL0_ddr_axi2_sysnoc_mid_sel_END    (4)
#define SOC_PERI_SCTRL_SC_DDR_CTRL0_ddr_axi1_smmu_mid_sel_START    (5)
#define SOC_PERI_SCTRL_SC_DDR_CTRL0_ddr_axi1_smmu_mid_sel_END      (5)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_DDR_CTRL1_UNION
 �ṹ˵��  : SC_DDR_CTRL1 �Ĵ����ṹ���塣��ַƫ����:0x054����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDR ���üĴ���1
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ddr_qos_ar_acpu : 4;  /* bit[0-3]  : acpu��qos */
        unsigned int  ddr_qos_aw_acpu : 4;  /* bit[4-7]  : acpuдqos */
        unsigned int  reserved_0      : 4;  /* bit[8-11] : g3d��qos */
        unsigned int  reserved_1      : 4;  /* bit[12-15]: g3dдqos */
        unsigned int  ddr_qos_ar_ccpu : 4;  /* bit[16-19]: ccpu��qos */
        unsigned int  ddr_qos_aw_ccpu : 4;  /* bit[20-23]: ccpuдqos */
        unsigned int  reserved_2      : 4;  /* bit[24-27]: reserved */
        unsigned int  reserved_3      : 4;  /* bit[28-31]: DDR����QOS���ȼ����ã�������ֵΪ0��15���������ȼ��ߵ���DDR�Ĵ���AXI_QOSCFG����
                                                           socp��qos */
    } reg;
} SOC_PERI_SCTRL_SC_DDR_CTRL1_UNION;
#endif
#define SOC_PERI_SCTRL_SC_DDR_CTRL1_ddr_qos_ar_acpu_START  (0)
#define SOC_PERI_SCTRL_SC_DDR_CTRL1_ddr_qos_ar_acpu_END    (3)
#define SOC_PERI_SCTRL_SC_DDR_CTRL1_ddr_qos_aw_acpu_START  (4)
#define SOC_PERI_SCTRL_SC_DDR_CTRL1_ddr_qos_aw_acpu_END    (7)
#define SOC_PERI_SCTRL_SC_DDR_CTRL1_ddr_qos_ar_ccpu_START  (16)
#define SOC_PERI_SCTRL_SC_DDR_CTRL1_ddr_qos_ar_ccpu_END    (19)
#define SOC_PERI_SCTRL_SC_DDR_CTRL1_ddr_qos_aw_ccpu_START  (20)
#define SOC_PERI_SCTRL_SC_DDR_CTRL1_ddr_qos_aw_ccpu_END    (23)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_DDR_CTRL2_UNION
 �ṹ˵��  : SC_DDR_CTRL2 �Ĵ����ṹ���塣��ַƫ����:0x058����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDR ���üĴ���2�����ܰ���DDR qos����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved_0: 4;  /* bit[0-3]  : acpu��hurry */
        unsigned int  reserved_1: 4;  /* bit[4-7]  : acpu��press */
        unsigned int  reserved_2: 4;  /* bit[8-11] : g3d��press */
        unsigned int  reserved_3: 4;  /* bit[12-15]: g3d��press */
        unsigned int  reserved_4: 4;  /* bit[16-19]: ccpu��hurry */
        unsigned int  reserved_5: 4;  /* bit[20-23]: ccpu��press */
        unsigned int  reserved_6: 8;  /* bit[24-31]: DDR����QOS���ȼ����ã�������ֵΪ0��15���������ȼ��ߵ���DDR�Ĵ���AXI_QOSCFG���� */
    } reg;
} SOC_PERI_SCTRL_SC_DDR_CTRL2_UNION;
#endif


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_DDR_CTRL3_UNION
 �ṹ˵��  : SC_DDR_CTRL3 �Ĵ����ṹ���塣��ַƫ����:0x060����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDR ���üĴ��������ܰ���DDR qos����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved_0: 4;  /* bit[0-3]  : acpuдhurry */
        unsigned int  reserved_1: 4;  /* bit[4-7]  : acpuдpress */
        unsigned int  reserved_2: 4;  /* bit[8-11] : g3dдpress */
        unsigned int  reserved_3: 4;  /* bit[12-15]: g3dдpress */
        unsigned int  reserved_4: 4;  /* bit[16-19]: ccpuдhurry */
        unsigned int  reserved_5: 4;  /* bit[20-23]: ccpuдpress */
        unsigned int  reserved_6: 4;  /* bit[24-27]: ipfдqos */
        unsigned int  reserved_7: 4;  /* bit[28-31]: DDR����QOS���ȼ����ã�������ֵΪ0��15���������ȼ��ߵ���DDR�Ĵ���AXI_QOSCFG����
                                                     socpдqos */
    } reg;
} SOC_PERI_SCTRL_SC_DDR_CTRL3_UNION;
#endif


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_DDR_CTRL4_UNION
 �ṹ˵��  : SC_DDR_CTRL4 �Ĵ����ṹ���塣��ַƫ����:0x064����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDR ״̬�Ĵ���4��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved_0: 4;  /* bit[0-3]  : reserved */
        unsigned int  reserved_1: 4;  /* bit[4-7]  : reserved */
        unsigned int  reserved_2: 4;  /* bit[8-11] : reserved */
        unsigned int  reserved_3: 20; /* bit[12-31]: DDR����QOS���ȼ����ã�������ֵΪ0��15���������ȼ��ߵ���DDR�Ĵ���AXI_QOSCFG���� */
    } reg;
} SOC_PERI_SCTRL_SC_DDR_CTRL4_UNION;
#endif


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_NOC_CTRL0_UNION
 �ṹ˵��  : SC_NOC_CTRL0 �Ĵ����ṹ���塣��ַƫ����:0x070����ֵ:0x00000001�����:32
 �Ĵ���˵��: NOC ״̬�Ĵ���0������sysnoc timeout ʹ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sysnoc_timeout_en : 1;  /* bit[0]   : systemnoc_timeout_en
                                                            0��disable timeout
                                                            1��enable timeout */
        unsigned int  reserved          : 31; /* bit[1-31]: reserved */
    } reg;
} SOC_PERI_SCTRL_SC_NOC_CTRL0_UNION;
#endif
#define SOC_PERI_SCTRL_SC_NOC_CTRL0_sysnoc_timeout_en_START  (0)
#define SOC_PERI_SCTRL_SC_NOC_CTRL0_sysnoc_timeout_en_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_NOC_CTRL1_UNION
 �ṹ˵��  : SC_NOC_CTRL1 �Ĵ����ṹ���塣��ַƫ����:0x074����ֵ:0x00000000�����:32
 �Ĵ���˵��: NOC ״̬�Ĵ���1������clkbus_lowʱ��ѡ��ʹ�ܺ���ë�̼Ĵ�������
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  clkbus_low_nopending_en      : 1;  /* bit[0]    : NOC nopending�ź���Ϊʱ��ѡ����ʹ�ܣ�
                                                                        0����ʹ�ܸù���
                                                                        1��ʹ�ܸù��� */
        unsigned int  reserved_0                   : 3;  /* bit[1-3]  : reserved */
        unsigned int  clkbus_low_debounce_num_high : 10; /* bit[4-13] : nopending�ź��ڸߵ�ƽʱ�˳��͵�ƽë�̼������ã�num+1=�����ë����������(ʱ��Ϊ100M�� */
        unsigned int  reserved_1                   : 2;  /* bit[14-15]: reserved */
        unsigned int  clkbus_low_debounce_num_low  : 10; /* bit[16-25]: nopending�ź��ڵ͵�ƽʱ�˳��ߵ�ƽë�̼������ã�num+1=�����ë����������(ʱ��Ϊ100M�� */
        unsigned int  reserved_2                   : 6;  /* bit[26-31]: reserved */
    } reg;
} SOC_PERI_SCTRL_SC_NOC_CTRL1_UNION;
#endif
#define SOC_PERI_SCTRL_SC_NOC_CTRL1_clkbus_low_nopending_en_START       (0)
#define SOC_PERI_SCTRL_SC_NOC_CTRL1_clkbus_low_nopending_en_END         (0)
#define SOC_PERI_SCTRL_SC_NOC_CTRL1_clkbus_low_debounce_num_high_START  (4)
#define SOC_PERI_SCTRL_SC_NOC_CTRL1_clkbus_low_debounce_num_high_END    (13)
#define SOC_PERI_SCTRL_SC_NOC_CTRL1_clkbus_low_debounce_num_low_START   (16)
#define SOC_PERI_SCTRL_SC_NOC_CTRL1_clkbus_low_debounce_num_low_END     (25)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_NOC_CTRL2_UNION
 �ṹ˵��  : SC_NOC_CTRL2 �Ĵ����ṹ���塣��ַƫ����:0x078����ֵ:0x00000000�����:32
 �Ĵ���˵��: NOC ״̬�Ĵ���2������clkbus_highʱ��ѡ��ʹ�ܺ���ë�̼Ĵ�������
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  clkbus_high_nopending_en      : 1;  /* bit[0]    : NOC nopending�ź���Ϊʱ��ѡ����ʹ�ܣ�
                                                                         0����ʹ�ܸù���
                                                                         1��ʹ�ܸù��� */
        unsigned int  reserved_0                    : 3;  /* bit[1-3]  : reserved */
        unsigned int  clkbus_high_debounce_num_high : 10; /* bit[4-13] : nopending�ź��ڸߵ�ƽʱ�˳��͵�ƽë�̼������ã�num+1=�����ë����������(ʱ��Ϊ150M�� */
        unsigned int  reserved_1                    : 2;  /* bit[14-15]: reserved */
        unsigned int  clkbus_high_debounce_num_low  : 10; /* bit[16-25]: nopending�ź��ڵ͵�ƽʱ�˳��ߵ�ƽë�̼������ã�num+1=�����ë����������(ʱ��Ϊ150M�� */
        unsigned int  reserved_2                    : 6;  /* bit[26-31]: reserved */
    } reg;
} SOC_PERI_SCTRL_SC_NOC_CTRL2_UNION;
#endif
#define SOC_PERI_SCTRL_SC_NOC_CTRL2_clkbus_high_nopending_en_START       (0)
#define SOC_PERI_SCTRL_SC_NOC_CTRL2_clkbus_high_nopending_en_END         (0)
#define SOC_PERI_SCTRL_SC_NOC_CTRL2_clkbus_high_debounce_num_high_START  (4)
#define SOC_PERI_SCTRL_SC_NOC_CTRL2_clkbus_high_debounce_num_high_END    (13)
#define SOC_PERI_SCTRL_SC_NOC_CTRL2_clkbus_high_debounce_num_low_START   (16)
#define SOC_PERI_SCTRL_SC_NOC_CTRL2_clkbus_high_debounce_num_low_END     (25)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_PERIPH_STAT0_UNION
 �ṹ˵��  : SC_PERIPH_STAT0 �Ĵ����ṹ���塣��ַƫ����:0x090����ֵ:0x00000000�����:32
 �Ĵ���˵��: ����״̬�Ĵ���0�����ܰ���CSSYS ETR��SOCP��IPF��hifi״̬��noc nopending�źŵ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  periph_state0_ipf_idle   : 1;  /* bit[0]   : ipf_idle
                                                                   0������״̬��
                                                                   1������״̬�� */
        unsigned int  periph_state0_socp_idle  : 1;  /* bit[1]   : socp_idle
                                                                   0������״̬��
                                                                   1������״̬�� */
        unsigned int  etr_axi_csysack_n        : 1;  /* bit[2]   : ETR��axi�ӿڵ�csysreq/csysack���µ�ǰ�ſղ���
                                                                   1'b0�������ſղ���
                                                                   1'b1���������ſղ��� */
        unsigned int  hifi_xocdmode            : 1;  /* bit[3]   : ������OCDhaltmode״ָ̬ʾ�źţ�����Ч��
                                                                   0��δ����haltmode��
                                                                   1������haltmode�� */
        unsigned int  hifi_pwaitmode           : 1;  /* bit[4]   : ������sleepmode״ָ̬ʾ�źţ�����Ч��ָʾ��ǰ������ͨ��ִ��WAITIָ�����sleepmode��clockgating�����ȴ�δ�����жϻ��ѡ�
                                                                   0��δ����sleepmode��
                                                                   1������sleepmode�� */
        unsigned int  noc_nopending_raw        : 1;  /* bit[5]   : ԭʼnoc nopending �ź�ָʾ */
        unsigned int  clkbus_low_debounce_aft  : 1;  /* bit[6]   : clkbus low nopendingȥ���ź� */
        unsigned int  clkbus_high_debounce_aft : 1;  /* bit[7]   : clkbus high nopendingȥ���ź� */
        unsigned int  reserved                 : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_STAT0_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_STAT0_periph_state0_ipf_idle_START    (0)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT0_periph_state0_ipf_idle_END      (0)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT0_periph_state0_socp_idle_START   (1)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT0_periph_state0_socp_idle_END     (1)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT0_etr_axi_csysack_n_START         (2)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT0_etr_axi_csysack_n_END           (2)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT0_hifi_xocdmode_START             (3)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT0_hifi_xocdmode_END               (3)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT0_hifi_pwaitmode_START            (4)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT0_hifi_pwaitmode_END              (4)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT0_noc_nopending_raw_START         (5)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT0_noc_nopending_raw_END           (5)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT0_clkbus_low_debounce_aft_START   (6)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT0_clkbus_low_debounce_aft_END     (6)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT0_clkbus_high_debounce_aft_START  (7)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT0_clkbus_high_debounce_aft_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_PERIPH_STAT1_UNION
 �ṹ˵��  : SC_PERIPH_STAT1 �Ĵ����ṹ���塣��ַƫ����:0x094����ֵ:0x00000000�����:32
 �Ĵ���˵��: periph stat1
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  fm_state : 32; /* bit[0-31]: ʱ��Ƶ�ʼ��ֵ ����λ��Hz) */
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_STAT1_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_STAT1_fm_state_START  (0)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT1_fm_state_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_PERIPH_STAT2_UNION
 �ṹ˵��  : SC_PERIPH_STAT2 �Ĵ����ṹ���塣��ַƫ����:0x098����ֵ:0x00000000�����:32
 �Ĵ���˵��: usb״̬�Ĵ���2��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  testdataout_picophy : 4;  /* bit[0-3]  : testdataout_picophy���ڲ��Խӿ������õ�����£���ֵ����sc_periph_ctrl9[1]Ϊ0������£�ȡ����sc_periph_ctrl9[7��4]��ֵ��
                                                               periph_ctrl9[7��4]= 4'h1000 and periph_ctrl9[1] = 1'b0 
                                                               testdataout[3] BIST Enable Single-Ended Rx D�C Output
                                                               testdataout[2] HS BIST Single-Ended Rx D+ Output
                                                               testdataout[1] FS BIST HS Differential Rx Data
                                                               testdataout[0] LS BIST FS Differential Rx  */
        unsigned int  otg_wkp_sts         : 1;  /* bit[4]    : otg_wkp_sts
                                                               �жϻ���״̬����ʾϵͳ�յ������ж�
                                                               0���޻����ж�
                                                               1���յ������ж� */
        unsigned int  chargedet_picophy   : 1;  /* bit[5]    : �����ָʾ��
                                                               1��״̬��Ч
                                                               0����Ч */
        unsigned int  datcondet_sts       : 1;  /* bit[6]    : datcondet_sts
                                                               USB���ݹܽŽӴ���⣬��ʱ�ܳ���⹦��ʱ��Ч��
                                                               0���޹ܽ�����
                                                               1����ʾ���ݹܽ����Ӽ�⵽�� */
        unsigned int  chgdet_sts          : 1;  /* bit[7]    : chgdet_sts
                                                               �������⣬���ź�Ϊ�ȶ�20ms����źš����ڳ������Чʱ��Ч
                                                               0��SDP
                                                               1����⵽�����ΪDCP��CDP */
        unsigned int  chgdet_async        : 1;  /* bit[8]    : chgdet_async
                                                               �������⡣Ϊ�첽�źţ���chg_detͬԴ����û�о���20ms��ʱ�Լ�32KHzʼ�յ����档����ͬchgdet_sts */
        unsigned int  fsvplus0_picophy    : 1;  /* bit[9]    : D+��ƽ״ָ̬ʾ��
                                                               1����ƽΪ��
                                                               0����ƽΪ�� */
        unsigned int  fsvminus0_picophy   : 1;  /* bit[10]   : D-��ƽ״ָ̬ʾ��
                                                               1����ƽΪ��
                                                               0����ƽΪ�� */
        unsigned int  reserved            : 21; /* bit[11-31]: [31��11]������ */
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_STAT2_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_STAT2_testdataout_picophy_START  (0)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT2_testdataout_picophy_END    (3)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT2_otg_wkp_sts_START          (4)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT2_otg_wkp_sts_END            (4)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT2_chargedet_picophy_START    (5)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT2_chargedet_picophy_END      (5)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT2_datcondet_sts_START        (6)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT2_datcondet_sts_END          (6)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT2_chgdet_sts_START           (7)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT2_chgdet_sts_END             (7)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT2_chgdet_async_START         (8)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT2_chgdet_async_END           (8)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT2_fsvplus0_picophy_START     (9)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT2_fsvplus0_picophy_END       (9)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT2_fsvminus0_picophy_START    (10)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT2_fsvminus0_picophy_END      (10)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_PERIPH_STAT3_UNION
 �ṹ˵��  : SC_PERIPH_STAT3 �Ĵ����ṹ���塣��ַƫ����:0x09C����ֵ:0x00000000�����:32
 �Ĵ���˵��: hifi����ж�״̬�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  hifi_all_raw_int : 1;  /* bit[0]   : �͸�mcu hifi���ԭʼ�ж� */
        unsigned int  hifi_all_msk_int : 1;  /* bit[1]   : �͸�mcu hifi������κ��ж� */
        unsigned int  reserved         : 30; /* bit[2-31]: reserved */
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_STAT3_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_STAT3_hifi_all_raw_int_START  (0)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT3_hifi_all_raw_int_END    (0)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT3_hifi_all_msk_int_START  (1)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT3_hifi_all_msk_int_END    (1)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_PERIPH_STAT4_UNION
 �ṹ˵��  : SC_PERIPH_STAT4 �Ĵ����ṹ���塣��ַƫ����:0x0A0����ֵ:0x00000000�����:32
 �Ĵ���˵��: ����״̬�Ĵ���4��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  usb_nopendingtrans         : 1;  /* bit[0]    : noc usb no pending״̬ */
        unsigned int  socp_nopendingtrans        : 1;  /* bit[1]    : noc socp no pending״̬ */
        unsigned int  service_nopendingtrans     : 1;  /* bit[2]    : service no pending״̬ */
        unsigned int  service_dma_nopendingtrans : 1;  /* bit[3]    : service_dma no pending״̬ */
        unsigned int  service_ao_nopendingtrans  : 1;  /* bit[4]    : service ao no pending״̬ */
        unsigned int  seceng_nopendingtrans      : 1;  /* bit[5]    : seceng no pending״̬ */
        unsigned int  modem_nopendingtrans       : 1;  /* bit[6]    : modem no pending״̬ */
        unsigned int  mmc2_nopendingtrans        : 1;  /* bit[7]    : mmc2 no pending״̬ */
        unsigned int  mmc1_nopendingtrans        : 1;  /* bit[8]    : mmc1 no pending״̬ */
        unsigned int  mmc0_nopendingtrans        : 1;  /* bit[9]    : mmc0 no pending״̬ */
        unsigned int  mcu_nopendingtrans         : 1;  /* bit[10]   : mcu no pending״̬ */
        unsigned int  ipf_nopendingtrans         : 1;  /* bit[11]   : ipf no pending״̬ */
        unsigned int  hifi_nopendingtrans        : 1;  /* bit[12]   : hifi no pending״̬ */
        unsigned int  dmac_nopendingtrans        : 1;  /* bit[13]   : dmac no pending״̬ */
        unsigned int  dap_nopendingtrans         : 1;  /* bit[14]   : dap no pending״̬ */
        unsigned int  dap_apb_nopendingtrans     : 1;  /* bit[15]   : dap_apb no pending״̬ */
        unsigned int  cssys_nopendingtrans       : 1;  /* bit[16]   : cssys no pending״̬ */
        unsigned int  acpu_nopendingtrans        : 1;  /* bit[17]   : acpu no pending״̬ */
        unsigned int  reserved                   : 14; /* bit[18-31]: 
                                                                      ���� */
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_STAT4_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_STAT4_usb_nopendingtrans_START          (0)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT4_usb_nopendingtrans_END            (0)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT4_socp_nopendingtrans_START         (1)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT4_socp_nopendingtrans_END           (1)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT4_service_nopendingtrans_START      (2)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT4_service_nopendingtrans_END        (2)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT4_service_dma_nopendingtrans_START  (3)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT4_service_dma_nopendingtrans_END    (3)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT4_service_ao_nopendingtrans_START   (4)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT4_service_ao_nopendingtrans_END     (4)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT4_seceng_nopendingtrans_START       (5)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT4_seceng_nopendingtrans_END         (5)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT4_modem_nopendingtrans_START        (6)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT4_modem_nopendingtrans_END          (6)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT4_mmc2_nopendingtrans_START         (7)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT4_mmc2_nopendingtrans_END           (7)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT4_mmc1_nopendingtrans_START         (8)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT4_mmc1_nopendingtrans_END           (8)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT4_mmc0_nopendingtrans_START         (9)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT4_mmc0_nopendingtrans_END           (9)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT4_mcu_nopendingtrans_START          (10)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT4_mcu_nopendingtrans_END            (10)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT4_ipf_nopendingtrans_START          (11)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT4_ipf_nopendingtrans_END            (11)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT4_hifi_nopendingtrans_START         (12)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT4_hifi_nopendingtrans_END           (12)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT4_dmac_nopendingtrans_START         (13)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT4_dmac_nopendingtrans_END           (13)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT4_dap_nopendingtrans_START          (14)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT4_dap_nopendingtrans_END            (14)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT4_dap_apb_nopendingtrans_START      (15)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT4_dap_apb_nopendingtrans_END        (15)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT4_cssys_nopendingtrans_START        (16)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT4_cssys_nopendingtrans_END          (16)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT4_acpu_nopendingtrans_START         (17)
#define SOC_PERI_SCTRL_SC_PERIPH_STAT4_acpu_nopendingtrans_END           (17)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_PERIPH_STAT6_UNION
 �ṹ˵��  : SC_PERIPH_STAT6 �Ĵ����ṹ���塣��ַƫ����:0x0A4����ֵ:0x00000000�����:32
 �Ĵ���˵��: ����״̬�Ĵ���6��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved : 32; /* bit[0-31]: ���� */
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_STAT6_UNION;
#endif


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_HIFI_INT_STATR0_UNION
 �ṹ˵��  : SC_HIFI_INT_STATR0 �Ĵ����ṹ���塣��ַƫ����:0x0B0����ֵ:0x00000000�����:32
 �Ĵ���˵��: 
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_hifi_int_statr0_ns_ipc2hifi_intr0   : 1;  /* bit[0]    : ns_ipc2hifi_intr0�ж� */
        unsigned int  sc_hifi_int_statr0_ns_ipc2hifi_intr1   : 1;  /* bit[1]    : ns_ipc2hifi_intr1�ж� */
        unsigned int  sc_hifi_int_statr0_s_ipc2hifi_intr0    : 1;  /* bit[2]    : s_ipc2hifi_intr0�ж� */
        unsigned int  sc_hifi_int_statr0_s_ipc2hifi_intr1    : 1;  /* bit[3]    : s_ipc2hifi_intr1�ж� */
        unsigned int  sc_hifi_int_statr0_timer10_intr        : 1;  /* bit[4]    : timer10_intr�ж� */
        unsigned int  sc_hifi_int_statr0_timer11_intr        : 1;  /* bit[5]    : timer11_intr�ж� */
        unsigned int  sc_hifi_int_statr0_timer12_intr        : 1;  /* bit[6]    : timer12_intr�ж� */
        unsigned int  sc_hifi_int_statr0_timer13_intr        : 1;  /* bit[7]    : timer13_intr�ж� */
        unsigned int  reserved_0                             : 1;  /* bit[8]    : reserved */
        unsigned int  reserved_1                             : 1;  /* bit[9]    : reserved */
        unsigned int  reserved_2                             : 1;  /* bit[10]   : reserved */
        unsigned int  reserved_3                             : 1;  /* bit[11]   : reserved */
        unsigned int  sc_hifi_int_statr0_digacodec_intr      : 1;  /* bit[12]   : digacodec_intr�ж� */
        unsigned int  sc_hifi_int_statr0_aedmac3_s_intr      : 1;  /* bit[13]   : aedmac3_s_intr�ж� */
        unsigned int  sc_hifi_int_statr0_aedmac3_ns_intr     : 1;  /* bit[14]   : aedmac3_ns_intr�ж� */
        unsigned int  reserved_4                             : 1;  /* bit[15]   : reserved */
        unsigned int  sc_hifi_int_statr0_uart0_2_4_comb_intr : 1;  /* bit[16]   : uart0_2_4_comb_intr�ж� */
        unsigned int  sc_hifi_int_statr0_wdog1_intr          : 1;  /* bit[17]   : wdog1_intr�ж� */
        unsigned int  reserved_5                             : 1;  /* bit[18]   : reserved */
        unsigned int  sc_hifi_int_statr0_seceng3_intr        : 1;  /* bit[19]   : seceng3_intr�ж� */
        unsigned int  sc_hifi_int_statr0_ctu_lte2dsp_intr    : 1;  /* bit[20]   : ctu_lte2dsp_intr�ж� */
        unsigned int  sc_hifi_int_statr0_ctu_tds2dsp_intr    : 1;  /* bit[21]   : ctu_tds2dsp_intr�ж� */
        unsigned int  sc_hifi_int_statr0_hifi_vote_intr      : 1;  /* bit[22]   : hifi_vote_intr�ж� */
        unsigned int  sc_hifi_int_statr0_gpio11_intr0        : 1;  /* bit[23]   : gpio11_intr0�ж� */
        unsigned int  sc_hifi_int_statr0_tds_stu_hifi_int    : 1;  /* bit[24]   : tds_stu_hifi_int�ж� */
        unsigned int  reserved_6                             : 7;  /* bit[25-31]: reserved */
    } reg;
} SOC_PERI_SCTRL_SC_HIFI_INT_STATR0_UNION;
#endif
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATR0_sc_hifi_int_statr0_ns_ipc2hifi_intr0_START    (0)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATR0_sc_hifi_int_statr0_ns_ipc2hifi_intr0_END      (0)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATR0_sc_hifi_int_statr0_ns_ipc2hifi_intr1_START    (1)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATR0_sc_hifi_int_statr0_ns_ipc2hifi_intr1_END      (1)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATR0_sc_hifi_int_statr0_s_ipc2hifi_intr0_START     (2)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATR0_sc_hifi_int_statr0_s_ipc2hifi_intr0_END       (2)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATR0_sc_hifi_int_statr0_s_ipc2hifi_intr1_START     (3)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATR0_sc_hifi_int_statr0_s_ipc2hifi_intr1_END       (3)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATR0_sc_hifi_int_statr0_timer10_intr_START         (4)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATR0_sc_hifi_int_statr0_timer10_intr_END           (4)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATR0_sc_hifi_int_statr0_timer11_intr_START         (5)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATR0_sc_hifi_int_statr0_timer11_intr_END           (5)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATR0_sc_hifi_int_statr0_timer12_intr_START         (6)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATR0_sc_hifi_int_statr0_timer12_intr_END           (6)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATR0_sc_hifi_int_statr0_timer13_intr_START         (7)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATR0_sc_hifi_int_statr0_timer13_intr_END           (7)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATR0_sc_hifi_int_statr0_digacodec_intr_START       (12)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATR0_sc_hifi_int_statr0_digacodec_intr_END         (12)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATR0_sc_hifi_int_statr0_aedmac3_s_intr_START       (13)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATR0_sc_hifi_int_statr0_aedmac3_s_intr_END         (13)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATR0_sc_hifi_int_statr0_aedmac3_ns_intr_START      (14)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATR0_sc_hifi_int_statr0_aedmac3_ns_intr_END        (14)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATR0_sc_hifi_int_statr0_uart0_2_4_comb_intr_START  (16)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATR0_sc_hifi_int_statr0_uart0_2_4_comb_intr_END    (16)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATR0_sc_hifi_int_statr0_wdog1_intr_START           (17)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATR0_sc_hifi_int_statr0_wdog1_intr_END             (17)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATR0_sc_hifi_int_statr0_seceng3_intr_START         (19)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATR0_sc_hifi_int_statr0_seceng3_intr_END           (19)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATR0_sc_hifi_int_statr0_ctu_lte2dsp_intr_START     (20)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATR0_sc_hifi_int_statr0_ctu_lte2dsp_intr_END       (20)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATR0_sc_hifi_int_statr0_ctu_tds2dsp_intr_START     (21)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATR0_sc_hifi_int_statr0_ctu_tds2dsp_intr_END       (21)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATR0_sc_hifi_int_statr0_hifi_vote_intr_START       (22)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATR0_sc_hifi_int_statr0_hifi_vote_intr_END         (22)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATR0_sc_hifi_int_statr0_gpio11_intr0_START         (23)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATR0_sc_hifi_int_statr0_gpio11_intr0_END           (23)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATR0_sc_hifi_int_statr0_tds_stu_hifi_int_START     (24)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATR0_sc_hifi_int_statr0_tds_stu_hifi_int_END       (24)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_HIFI_INT_STATM0_UNION
 �ṹ˵��  : SC_HIFI_INT_STATM0 �Ĵ����ṹ���塣��ַƫ����:0x0B4����ֵ:0x00000000�����:32
 �Ĵ���˵��: 
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_hifi_int_statm0_ns_ipc2hifi_intr0   : 1;  /* bit[0]    : ns_ipc2hifi_intr0�ж� */
        unsigned int  sc_hifi_int_statm0_ns_ipc2hifi_intr1   : 1;  /* bit[1]    : ns_ipc2hifi_intr1�ж� */
        unsigned int  sc_hifi_int_statm0_s_ipc2hifi_intr0    : 1;  /* bit[2]    : s_ipc2hifi_intr0�ж� */
        unsigned int  sc_hifi_int_statm0_s_ipc2hifi_intr1    : 1;  /* bit[3]    : s_ipc2hifi_intr1�ж� */
        unsigned int  sc_hifi_int_statm0_timer10_intr        : 1;  /* bit[4]    : timer10_intr�ж� */
        unsigned int  sc_hifi_int_statm0_timer11_intr        : 1;  /* bit[5]    : timer11_intr�ж� */
        unsigned int  sc_hifi_int_statm0_timer12_intr        : 1;  /* bit[6]    : timer12_intr�ж� */
        unsigned int  sc_hifi_int_statm0_timer13_intr        : 1;  /* bit[7]    : timer13_intr�ж� */
        unsigned int  reserved_0                             : 1;  /* bit[8]    : reserved */
        unsigned int  reserved_1                             : 1;  /* bit[9]    : reserved */
        unsigned int  reserved_2                             : 1;  /* bit[10]   : reserved */
        unsigned int  reserved_3                             : 1;  /* bit[11]   : reserved */
        unsigned int  sc_hifi_int_statm0_digacodec_intr      : 1;  /* bit[12]   : digacodec_intr�ж� */
        unsigned int  sc_hifi_int_statm0_aedmac3_s_intr      : 1;  /* bit[13]   : aedmac3_s_intr�ж� */
        unsigned int  sc_hifi_int_statm0_aedmac3_ns_intr     : 1;  /* bit[14]   : aedmac3_ns_intr�ж� */
        unsigned int  reserved_4                             : 1;  /* bit[15]   : reserved */
        unsigned int  sc_hifi_int_statm0_uart0_2_4_comb_intr : 1;  /* bit[16]   : uart0_2_4_comb_intr�ж� */
        unsigned int  sc_hifi_int_statm0_wdog1_intr          : 1;  /* bit[17]   : wdog1_intr�ж� */
        unsigned int  reserved_5                             : 1;  /* bit[18]   : reserved */
        unsigned int  sc_hifi_int_statm0_seceng3_intr        : 1;  /* bit[19]   : seceng3_intr�ж� */
        unsigned int  sc_hifi_int_statm0_ctu_lte2dsp_intr    : 1;  /* bit[20]   : ctu_lte2dsp_intr�ж� */
        unsigned int  sc_hifi_int_statm0_ctu_tds2dsp_intr    : 1;  /* bit[21]   : ctu_tds2dsp_intr�ж� */
        unsigned int  sc_hifi_int_statm0_hifi_vote_intr      : 1;  /* bit[22]   : hifi_vote_intr�ж� */
        unsigned int  sc_hifi_int_statm0_gpio11_intr0        : 1;  /* bit[23]   : gpio11_intr0�ж� */
        unsigned int  sc_hifi_int_statm0_tds_stu_hifi_int    : 1;  /* bit[24]   : tds_stu_hifi_int�ж� */
        unsigned int  reserved_6                             : 7;  /* bit[25-31]: reserved */
    } reg;
} SOC_PERI_SCTRL_SC_HIFI_INT_STATM0_UNION;
#endif
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATM0_sc_hifi_int_statm0_ns_ipc2hifi_intr0_START    (0)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATM0_sc_hifi_int_statm0_ns_ipc2hifi_intr0_END      (0)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATM0_sc_hifi_int_statm0_ns_ipc2hifi_intr1_START    (1)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATM0_sc_hifi_int_statm0_ns_ipc2hifi_intr1_END      (1)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATM0_sc_hifi_int_statm0_s_ipc2hifi_intr0_START     (2)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATM0_sc_hifi_int_statm0_s_ipc2hifi_intr0_END       (2)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATM0_sc_hifi_int_statm0_s_ipc2hifi_intr1_START     (3)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATM0_sc_hifi_int_statm0_s_ipc2hifi_intr1_END       (3)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATM0_sc_hifi_int_statm0_timer10_intr_START         (4)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATM0_sc_hifi_int_statm0_timer10_intr_END           (4)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATM0_sc_hifi_int_statm0_timer11_intr_START         (5)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATM0_sc_hifi_int_statm0_timer11_intr_END           (5)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATM0_sc_hifi_int_statm0_timer12_intr_START         (6)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATM0_sc_hifi_int_statm0_timer12_intr_END           (6)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATM0_sc_hifi_int_statm0_timer13_intr_START         (7)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATM0_sc_hifi_int_statm0_timer13_intr_END           (7)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATM0_sc_hifi_int_statm0_digacodec_intr_START       (12)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATM0_sc_hifi_int_statm0_digacodec_intr_END         (12)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATM0_sc_hifi_int_statm0_aedmac3_s_intr_START       (13)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATM0_sc_hifi_int_statm0_aedmac3_s_intr_END         (13)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATM0_sc_hifi_int_statm0_aedmac3_ns_intr_START      (14)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATM0_sc_hifi_int_statm0_aedmac3_ns_intr_END        (14)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATM0_sc_hifi_int_statm0_uart0_2_4_comb_intr_START  (16)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATM0_sc_hifi_int_statm0_uart0_2_4_comb_intr_END    (16)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATM0_sc_hifi_int_statm0_wdog1_intr_START           (17)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATM0_sc_hifi_int_statm0_wdog1_intr_END             (17)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATM0_sc_hifi_int_statm0_seceng3_intr_START         (19)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATM0_sc_hifi_int_statm0_seceng3_intr_END           (19)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATM0_sc_hifi_int_statm0_ctu_lte2dsp_intr_START     (20)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATM0_sc_hifi_int_statm0_ctu_lte2dsp_intr_END       (20)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATM0_sc_hifi_int_statm0_ctu_tds2dsp_intr_START     (21)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATM0_sc_hifi_int_statm0_ctu_tds2dsp_intr_END       (21)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATM0_sc_hifi_int_statm0_hifi_vote_intr_START       (22)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATM0_sc_hifi_int_statm0_hifi_vote_intr_END         (22)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATM0_sc_hifi_int_statm0_gpio11_intr0_START         (23)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATM0_sc_hifi_int_statm0_gpio11_intr0_END           (23)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATM0_sc_hifi_int_statm0_tds_stu_hifi_int_START     (24)
#define SOC_PERI_SCTRL_SC_HIFI_INT_STATM0_sc_hifi_int_statm0_tds_stu_hifi_int_END       (24)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_UNION
 �ṹ˵��  : SC_PERI_2ND_INT_EN0 �Ĵ����ṹ���塣��ַƫ����:0x100����ֵ:0xFFFFFFFF�����:32
 �Ĵ���˵��: ACPU�����ж϶����ж�ʹ���ź�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_peri_2nd_int_en0_gpio4_intr0        : 1;  /* bit[0]    : gpio4 �ж� */
        unsigned int  sc_peri_2nd_int_en0_gpio5_intr0        : 1;  /* bit[1]    : gpio5 �ж� */
        unsigned int  sc_peri_2nd_int_en0_gpio6_intr0        : 1;  /* bit[2]    : gpio6 �ж� */
        unsigned int  sc_peri_2nd_int_en0_gpio7_intr0        : 1;  /* bit[3]    : gpio7 �ж� */
        unsigned int  sc_peri_2nd_int_en0_gpio8_intr0        : 1;  /* bit[4]    : gpio8 �ж� */
        unsigned int  sc_peri_2nd_int_en0_gpio9_intr0        : 1;  /* bit[5]    : gpio9 �ж� */
        unsigned int  sc_peri_2nd_int_en0_gpio10_intr0       : 1;  /* bit[6]    : gpio10 �ж� */
        unsigned int  sc_peri_2nd_int_en0_gpio11_intr0       : 1;  /* bit[7]    : gpio11 �ж� */
        unsigned int  sc_peri_2nd_int_en0_gpio12_intr0       : 1;  /* bit[8]    : gpio12 �ж� */
        unsigned int  sc_peri_2nd_int_en0_gpio13_intr0       : 1;  /* bit[9]    : gpio13 �ж� */
        unsigned int  sc_peri_2nd_int_en0_ipf_intr0          : 1;  /* bit[10]   : ipf �ж�0 */
        unsigned int  sc_peri_2nd_int_en0_ipf_intr1          : 1;  /* bit[11]   : ipf �ж�1 */
        unsigned int  sc_peri_2nd_int_en0_socp_intr0         : 1;  /* bit[12]   : socp �ж�0 */
        unsigned int  sc_peri_2nd_int_en0_socp_intr1         : 1;  /* bit[13]   : socp �ж�1 */
        unsigned int  sc_peri_2nd_int_en0_gpio14_intr0       : 1;  /* bit[14]   : gpio14 �ж� */
        unsigned int  sc_peri_2nd_int_en0_gpio15_intr0       : 1;  /* bit[15]   : gpio15 �ж� */
        unsigned int  sc_peri_2nd_int_en0_gpio16_intr0       : 1;  /* bit[16]   : gpio16 �ж� */
        unsigned int  sc_peri_2nd_int_en0_gpio17_intr0       : 1;  /* bit[17]   : gpio17 �ж� */
        unsigned int  sc_peri_2nd_int_en0_gpio18_intr0       : 1;  /* bit[18]   : gpio18 �ж� */
        unsigned int  sc_peri_2nd_int_en0_gpio19_intr0       : 1;  /* bit[19]   : gpio19 �ж� */
        unsigned int  sc_peri_2nd_int_en0_sys_noc_err_intr   : 1;  /* bit[20]   : sysnoc �����ϱ��ж� */
        unsigned int  sc_peri_2nd_int_en0_media_noc_err_intr : 1;  /* bit[21]   : medianoc �����ϱ��ж� */
        unsigned int  sc_peri_2nd_int_en0_ddrc_sec_intr      : 1;  /* bit[22]   : ddrc��ȫ�ж� */
        unsigned int  sc_peri_2nd_int_en0_acpu_soft_fiq_intr : 1;  /* bit[23]   : acpu��fiq */
        unsigned int  reserved                               : 8;  /* bit[24-31]: reserved */
    } reg;
} SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_gpio4_intr0_START         (0)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_gpio4_intr0_END           (0)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_gpio5_intr0_START         (1)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_gpio5_intr0_END           (1)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_gpio6_intr0_START         (2)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_gpio6_intr0_END           (2)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_gpio7_intr0_START         (3)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_gpio7_intr0_END           (3)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_gpio8_intr0_START         (4)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_gpio8_intr0_END           (4)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_gpio9_intr0_START         (5)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_gpio9_intr0_END           (5)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_gpio10_intr0_START        (6)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_gpio10_intr0_END          (6)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_gpio11_intr0_START        (7)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_gpio11_intr0_END          (7)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_gpio12_intr0_START        (8)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_gpio12_intr0_END          (8)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_gpio13_intr0_START        (9)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_gpio13_intr0_END          (9)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_ipf_intr0_START           (10)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_ipf_intr0_END             (10)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_ipf_intr1_START           (11)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_ipf_intr1_END             (11)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_socp_intr0_START          (12)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_socp_intr0_END            (12)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_socp_intr1_START          (13)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_socp_intr1_END            (13)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_gpio14_intr0_START        (14)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_gpio14_intr0_END          (14)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_gpio15_intr0_START        (15)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_gpio15_intr0_END          (15)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_gpio16_intr0_START        (16)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_gpio16_intr0_END          (16)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_gpio17_intr0_START        (17)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_gpio17_intr0_END          (17)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_gpio18_intr0_START        (18)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_gpio18_intr0_END          (18)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_gpio19_intr0_START        (19)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_gpio19_intr0_END          (19)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_sys_noc_err_intr_START    (20)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_sys_noc_err_intr_END      (20)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_media_noc_err_intr_START  (21)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_media_noc_err_intr_END    (21)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_ddrc_sec_intr_START       (22)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_ddrc_sec_intr_END         (22)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_acpu_soft_fiq_intr_START  (23)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN0_sc_peri_2nd_int_en0_acpu_soft_fiq_intr_END    (23)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_UNION
 �ṹ˵��  : SC_PERI_2ND_INT_STATR0 �Ĵ����ṹ���塣��ַƫ����:0x104����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU�����ж϶����ж�ԭʼ�ж�״̬
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_peri_2nd_int_statr0_gpio4_intr0        : 1;  /* bit[0]    : gpio4 �ж� */
        unsigned int  sc_peri_2nd_int_statr0_gpio5_intr0        : 1;  /* bit[1]    : gpio5 �ж� */
        unsigned int  sc_peri_2nd_int_statr0_gpio6_intr0        : 1;  /* bit[2]    : gpio6 �ж� */
        unsigned int  sc_peri_2nd_int_statr0_gpio7_intr0        : 1;  /* bit[3]    : gpio7 �ж� */
        unsigned int  sc_peri_2nd_int_statr0_gpio8_intr0        : 1;  /* bit[4]    : gpio8 �ж� */
        unsigned int  sc_peri_2nd_int_statr0_gpio9_intr0        : 1;  /* bit[5]    : gpio9 �ж� */
        unsigned int  sc_peri_2nd_int_statr0_gpio10_intr0       : 1;  /* bit[6]    : gpio10 �ж� */
        unsigned int  sc_peri_2nd_int_statr0_gpio11_intr0       : 1;  /* bit[7]    : gpio11 �ж� */
        unsigned int  sc_peri_2nd_int_statr0_gpio12_intr0       : 1;  /* bit[8]    : gpio12 �ж� */
        unsigned int  sc_peri_2nd_int_statr0_gpio13_intr0       : 1;  /* bit[9]    : gpio13 �ж� */
        unsigned int  sc_peri_2nd_int_statr0_ipf_intr0          : 1;  /* bit[10]   : ipf �ж�0 */
        unsigned int  sc_peri_2nd_int_statr0_ipf_intr1          : 1;  /* bit[11]   : ipf �ж�1 */
        unsigned int  sc_peri_2nd_int_statr0_socp_intr0         : 1;  /* bit[12]   : socp �ж�0 */
        unsigned int  sc_peri_2nd_int_statr0_socp_intr1         : 1;  /* bit[13]   : socp �ж�1 */
        unsigned int  sc_peri_2nd_int_statr0_gpio14_intr0       : 1;  /* bit[14]   : gpio14 �ж� */
        unsigned int  sc_peri_2nd_int_statr0_gpio15_intr0       : 1;  /* bit[15]   : gpio15 �ж� */
        unsigned int  sc_peri_2nd_int_statr0_gpio16_intr0       : 1;  /* bit[16]   : gpio16 �ж� */
        unsigned int  sc_peri_2nd_int_statr0_gpio17_intr0       : 1;  /* bit[17]   : gpio17 �ж� */
        unsigned int  sc_peri_2nd_int_statr0_gpio18_intr0       : 1;  /* bit[18]   : gpio18 �ж� */
        unsigned int  sc_peri_2nd_int_statr0_gpio19_intr0       : 1;  /* bit[19]   : gpio19 �ж� */
        unsigned int  sc_peri_2nd_int_statr0_sys_noc_err_intr   : 1;  /* bit[20]   : sysnoc �����ϱ��ж� */
        unsigned int  sc_peri_2nd_int_statr0_media_noc_err_intr : 1;  /* bit[21]   : medianoc �����ϱ��ж� */
        unsigned int  sc_peri_2nd_int_statr0_ddrc_sec_intr      : 1;  /* bit[22]   : ddrc��ȫ�ж� */
        unsigned int  sc_peri_2nd_int_statr0_acpu_soft_fiq_intr : 1;  /* bit[23]   : acpu��fiq */
        unsigned int  reserved                                  : 8;  /* bit[24-31]: reserved */
    } reg;
} SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_gpio4_intr0_START         (0)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_gpio4_intr0_END           (0)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_gpio5_intr0_START         (1)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_gpio5_intr0_END           (1)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_gpio6_intr0_START         (2)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_gpio6_intr0_END           (2)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_gpio7_intr0_START         (3)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_gpio7_intr0_END           (3)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_gpio8_intr0_START         (4)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_gpio8_intr0_END           (4)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_gpio9_intr0_START         (5)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_gpio9_intr0_END           (5)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_gpio10_intr0_START        (6)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_gpio10_intr0_END          (6)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_gpio11_intr0_START        (7)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_gpio11_intr0_END          (7)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_gpio12_intr0_START        (8)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_gpio12_intr0_END          (8)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_gpio13_intr0_START        (9)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_gpio13_intr0_END          (9)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_ipf_intr0_START           (10)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_ipf_intr0_END             (10)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_ipf_intr1_START           (11)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_ipf_intr1_END             (11)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_socp_intr0_START          (12)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_socp_intr0_END            (12)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_socp_intr1_START          (13)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_socp_intr1_END            (13)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_gpio14_intr0_START        (14)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_gpio14_intr0_END          (14)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_gpio15_intr0_START        (15)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_gpio15_intr0_END          (15)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_gpio16_intr0_START        (16)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_gpio16_intr0_END          (16)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_gpio17_intr0_START        (17)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_gpio17_intr0_END          (17)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_gpio18_intr0_START        (18)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_gpio18_intr0_END          (18)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_gpio19_intr0_START        (19)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_gpio19_intr0_END          (19)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_sys_noc_err_intr_START    (20)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_sys_noc_err_intr_END      (20)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_media_noc_err_intr_START  (21)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_media_noc_err_intr_END    (21)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_ddrc_sec_intr_START       (22)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_ddrc_sec_intr_END         (22)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_acpu_soft_fiq_intr_START  (23)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR0_sc_peri_2nd_int_statr0_acpu_soft_fiq_intr_END    (23)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_UNION
 �ṹ˵��  : SC_PERI_2ND_INT_STATM0 �Ĵ����ṹ���塣��ַƫ����:0x108����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU�����ж϶����ж����κ��ж�״̬
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_peri_2nd_int_statm0_gpio4_intr0        : 1;  /* bit[0]    : gpio4 �ж� */
        unsigned int  sc_peri_2nd_int_statm0_gpio5_intr0        : 1;  /* bit[1]    : gpio5 �ж� */
        unsigned int  sc_peri_2nd_int_statm0_gpio6_intr0        : 1;  /* bit[2]    : gpio6 �ж� */
        unsigned int  sc_peri_2nd_int_statm0_gpio7_intr0        : 1;  /* bit[3]    : gpio7 �ж� */
        unsigned int  sc_peri_2nd_int_statm0_gpio8_intr0        : 1;  /* bit[4]    : gpio8 �ж� */
        unsigned int  sc_peri_2nd_int_statm0_gpio9_intr0        : 1;  /* bit[5]    : gpio9 �ж� */
        unsigned int  sc_peri_2nd_int_statm0_gpio10_intr0       : 1;  /* bit[6]    : gpio10 �ж� */
        unsigned int  sc_peri_2nd_int_statm0_gpio11_intr0       : 1;  /* bit[7]    : gpio11 �ж� */
        unsigned int  sc_peri_2nd_int_statm0_gpio12_intr0       : 1;  /* bit[8]    : gpio12 �ж� */
        unsigned int  sc_peri_2nd_int_statm0_gpio13_intr0       : 1;  /* bit[9]    : gpio13 �ж� */
        unsigned int  sc_peri_2nd_int_statm0_ipf_intr0          : 1;  /* bit[10]   : ipf �ж�0 */
        unsigned int  sc_peri_2nd_int_statm0_ipf_intr1          : 1;  /* bit[11]   : ipf �ж�1 */
        unsigned int  sc_peri_2nd_int_statm0_socp_intr0         : 1;  /* bit[12]   : socp �ж�0 */
        unsigned int  sc_peri_2nd_int_statm0_socp_intr1         : 1;  /* bit[13]   : socp �ж�1 */
        unsigned int  sc_peri_2nd_int_statm0_gpio14_intr0       : 1;  /* bit[14]   : gpio14 �ж� */
        unsigned int  sc_peri_2nd_int_statm0_gpio15_intr0       : 1;  /* bit[15]   : gpio15 �ж� */
        unsigned int  sc_peri_2nd_int_statm0_gpio16_intr0       : 1;  /* bit[16]   : gpio16 �ж� */
        unsigned int  sc_peri_2nd_int_statm0_gpio17_intr0       : 1;  /* bit[17]   : gpio17 �ж� */
        unsigned int  sc_peri_2nd_int_statm0_gpio18_intr0       : 1;  /* bit[18]   : gpio18 �ж� */
        unsigned int  sc_peri_2nd_int_statm0_gpio19_intr0       : 1;  /* bit[19]   : gpio19 �ж� */
        unsigned int  sc_peri_2nd_int_statm0_sys_noc_err_intr   : 1;  /* bit[20]   : sysnoc �����ϱ��ж� */
        unsigned int  sc_peri_2nd_int_statm0_media_noc_err_intr : 1;  /* bit[21]   : medianoc �����ϱ��ж� */
        unsigned int  sc_peri_2nd_int_statm0_ddrc_sec_intr      : 1;  /* bit[22]   : ddrc��ȫ�ж� */
        unsigned int  sc_peri_2nd_int_statm0_acpu_soft_fiq_intr : 1;  /* bit[23]   : acpu��fiq */
        unsigned int  reserved                                  : 8;  /* bit[24-31]: reserved */
    } reg;
} SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_gpio4_intr0_START         (0)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_gpio4_intr0_END           (0)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_gpio5_intr0_START         (1)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_gpio5_intr0_END           (1)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_gpio6_intr0_START         (2)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_gpio6_intr0_END           (2)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_gpio7_intr0_START         (3)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_gpio7_intr0_END           (3)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_gpio8_intr0_START         (4)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_gpio8_intr0_END           (4)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_gpio9_intr0_START         (5)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_gpio9_intr0_END           (5)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_gpio10_intr0_START        (6)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_gpio10_intr0_END          (6)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_gpio11_intr0_START        (7)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_gpio11_intr0_END          (7)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_gpio12_intr0_START        (8)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_gpio12_intr0_END          (8)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_gpio13_intr0_START        (9)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_gpio13_intr0_END          (9)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_ipf_intr0_START           (10)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_ipf_intr0_END             (10)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_ipf_intr1_START           (11)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_ipf_intr1_END             (11)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_socp_intr0_START          (12)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_socp_intr0_END            (12)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_socp_intr1_START          (13)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_socp_intr1_END            (13)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_gpio14_intr0_START        (14)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_gpio14_intr0_END          (14)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_gpio15_intr0_START        (15)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_gpio15_intr0_END          (15)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_gpio16_intr0_START        (16)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_gpio16_intr0_END          (16)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_gpio17_intr0_START        (17)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_gpio17_intr0_END          (17)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_gpio18_intr0_START        (18)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_gpio18_intr0_END          (18)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_gpio19_intr0_START        (19)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_gpio19_intr0_END          (19)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_sys_noc_err_intr_START    (20)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_sys_noc_err_intr_END      (20)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_media_noc_err_intr_START  (21)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_media_noc_err_intr_END    (21)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_ddrc_sec_intr_START       (22)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_ddrc_sec_intr_END         (22)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_acpu_soft_fiq_intr_START  (23)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM0_sc_peri_2nd_int_statm0_acpu_soft_fiq_intr_END    (23)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_UNION
 �ṹ˵��  : SC_PERI_2ND_INT_EN1 �Ĵ����ṹ���塣��ַƫ����:0x110����ֵ:0xFFFFFFFF�����:32
 �Ĵ���˵��: MCU�ж϶����ж�ʹ���ź�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_peri_2nd_int_en1_ddr_dfs_intr      : 1;  /* bit[0]    : ddr_dfs�ж� */
        unsigned int  sc_peri_2nd_int_en1_g3d_lp_intr       : 1;  /* bit[1]    : g3d_lp�ж� */
        unsigned int  sc_peri_2nd_int_en1_acpu_lp_intr      : 1;  /* bit[2]    : acpu_lp�ж� */
        unsigned int  sc_peri_2nd_int_en1_ccpu_pmuirq_intr  : 1;  /* bit[3]    : ccpu_pumirq�ж� */
        unsigned int  sc_peri_2nd_int_en1_acpu_pmuirq3_intr : 1;  /* bit[4]    : acpu_pmuirq3�ж� */
        unsigned int  sc_peri_2nd_int_en1_acpu_pmuirq2_intr : 1;  /* bit[5]    : acpu_pmuirq2�ж� */
        unsigned int  sc_peri_2nd_int_en1_acpu_pmuirq1_intr : 1;  /* bit[6]    : acpu_pmuirq1�ж� */
        unsigned int  sc_peri_2nd_int_en1_acpu_pmuirq0_intr : 1;  /* bit[7]    : acpu_pmuirq0�ж� */
        unsigned int  sc_peri_2nd_int_en1_sdiommc_intr      : 1;  /* bit[8]    : sdiommc�ж� */
        unsigned int  sc_peri_2nd_int_en1_sdmmc_intr        : 1;  /* bit[9]    : sdmmc�ж� */
        unsigned int  sc_peri_2nd_int_en1_emmc_intr         : 1;  /* bit[10]   : emmc�ж� */
        unsigned int  sc_peri_2nd_int_en1_usb2otg_intr      : 1;  /* bit[11]   : usb2otg�ж� */
        unsigned int  sc_peri_2nd_int_en1_g3d_intr          : 1;  /* bit[12]   : g3d�ж� */
        unsigned int  sc_peri_2nd_int_en1_mipi_dsi_intr     : 1;  /* bit[13]   : mipi_dsi�ж� */
        unsigned int  sc_peri_2nd_int_en1_ade_ldi_intr      : 1;  /* bit[14]   : ade_ldi�ж� */
        unsigned int  sc_peri_2nd_int_en1_ade_intr          : 1;  /* bit[15]   : ade�ж� */
        unsigned int  sc_peri_2nd_int_en1_mmu_intr          : 1;  /* bit[16]   : mmu�ж� */
        unsigned int  sc_peri_2nd_int_en1_jpeg_intr         : 1;  /* bit[17]   : jpeg�ж� */
        unsigned int  sc_peri_2nd_int_en1_vcodec_intr       : 1;  /* bit[18]   : vcodec�ж� */
        unsigned int  sc_peri_2nd_int_en1_mipi_cs1_intr     : 1;  /* bit[19]   : mipi_cs1�ж� */
        unsigned int  sc_peri_2nd_int_en1_mipi_cs0_intr     : 1;  /* bit[20]   : mipi_cs0�ж� */
        unsigned int  sc_peri_2nd_int_en1_isp_intr          : 1;  /* bit[21]   : isp�ж� */
        unsigned int  reserved                              : 10; /* bit[22-31]: reserved */
    } reg;
} SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_sc_peri_2nd_int_en1_ddr_dfs_intr_START       (0)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_sc_peri_2nd_int_en1_ddr_dfs_intr_END         (0)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_sc_peri_2nd_int_en1_g3d_lp_intr_START        (1)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_sc_peri_2nd_int_en1_g3d_lp_intr_END          (1)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_sc_peri_2nd_int_en1_acpu_lp_intr_START       (2)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_sc_peri_2nd_int_en1_acpu_lp_intr_END         (2)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_sc_peri_2nd_int_en1_ccpu_pmuirq_intr_START   (3)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_sc_peri_2nd_int_en1_ccpu_pmuirq_intr_END     (3)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_sc_peri_2nd_int_en1_acpu_pmuirq3_intr_START  (4)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_sc_peri_2nd_int_en1_acpu_pmuirq3_intr_END    (4)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_sc_peri_2nd_int_en1_acpu_pmuirq2_intr_START  (5)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_sc_peri_2nd_int_en1_acpu_pmuirq2_intr_END    (5)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_sc_peri_2nd_int_en1_acpu_pmuirq1_intr_START  (6)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_sc_peri_2nd_int_en1_acpu_pmuirq1_intr_END    (6)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_sc_peri_2nd_int_en1_acpu_pmuirq0_intr_START  (7)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_sc_peri_2nd_int_en1_acpu_pmuirq0_intr_END    (7)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_sc_peri_2nd_int_en1_sdiommc_intr_START       (8)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_sc_peri_2nd_int_en1_sdiommc_intr_END         (8)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_sc_peri_2nd_int_en1_sdmmc_intr_START         (9)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_sc_peri_2nd_int_en1_sdmmc_intr_END           (9)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_sc_peri_2nd_int_en1_emmc_intr_START          (10)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_sc_peri_2nd_int_en1_emmc_intr_END            (10)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_sc_peri_2nd_int_en1_usb2otg_intr_START       (11)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_sc_peri_2nd_int_en1_usb2otg_intr_END         (11)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_sc_peri_2nd_int_en1_g3d_intr_START           (12)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_sc_peri_2nd_int_en1_g3d_intr_END             (12)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_sc_peri_2nd_int_en1_mipi_dsi_intr_START      (13)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_sc_peri_2nd_int_en1_mipi_dsi_intr_END        (13)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_sc_peri_2nd_int_en1_ade_ldi_intr_START       (14)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_sc_peri_2nd_int_en1_ade_ldi_intr_END         (14)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_sc_peri_2nd_int_en1_ade_intr_START           (15)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_sc_peri_2nd_int_en1_ade_intr_END             (15)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_sc_peri_2nd_int_en1_mmu_intr_START           (16)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_sc_peri_2nd_int_en1_mmu_intr_END             (16)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_sc_peri_2nd_int_en1_jpeg_intr_START          (17)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_sc_peri_2nd_int_en1_jpeg_intr_END            (17)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_sc_peri_2nd_int_en1_vcodec_intr_START        (18)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_sc_peri_2nd_int_en1_vcodec_intr_END          (18)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_sc_peri_2nd_int_en1_mipi_cs1_intr_START      (19)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_sc_peri_2nd_int_en1_mipi_cs1_intr_END        (19)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_sc_peri_2nd_int_en1_mipi_cs0_intr_START      (20)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_sc_peri_2nd_int_en1_mipi_cs0_intr_END        (20)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_sc_peri_2nd_int_en1_isp_intr_START           (21)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_EN1_sc_peri_2nd_int_en1_isp_intr_END             (21)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_UNION
 �ṹ˵��  : SC_PERI_2ND_INT_STATR1 �Ĵ����ṹ���塣��ַƫ����:0x114����ֵ:0x00000000�����:32
 �Ĵ���˵��: MCU�ж϶����ж�ԭʼ�ж�״̬
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_peri_2nd_int_statr1_ddr_dfs_intr      : 1;  /* bit[0]    : ddr_dfs�ж� */
        unsigned int  sc_peri_2nd_int_statr1_g3d_lp_intr       : 1;  /* bit[1]    : g3d_lp�ж� */
        unsigned int  sc_peri_2nd_int_statr1_acpu_lp_intr      : 1;  /* bit[2]    : acpu_lp�ж� */
        unsigned int  sc_peri_2nd_int_statr1_ccpu_pmuirq_intr  : 1;  /* bit[3]    : ccpu_pumirq�ж� */
        unsigned int  sc_peri_2nd_int_statr1_acpu_pmuirq3_intr : 1;  /* bit[4]    : acpu_pmuirq3�ж� */
        unsigned int  sc_peri_2nd_int_statr1_acpu_pmuirq2_intr : 1;  /* bit[5]    : acpu_pmuirq2�ж� */
        unsigned int  sc_peri_2nd_int_statr1_acpu_pmuirq1_intr : 1;  /* bit[6]    : acpu_pmuirq1�ж� */
        unsigned int  sc_peri_2nd_int_statr1_acpu_pmuirq0_intr : 1;  /* bit[7]    : acpu_pmuirq0�ж� */
        unsigned int  sc_peri_2nd_int_statr1_sdiommc_intr      : 1;  /* bit[8]    : sdiommc�ж� */
        unsigned int  sc_peri_2nd_int_statr1_sdmmc_intr        : 1;  /* bit[9]    : sdmmc�ж� */
        unsigned int  sc_peri_2nd_int_statr1_emmc_intr         : 1;  /* bit[10]   : emmc�ж� */
        unsigned int  sc_peri_2nd_int_statr1_usb2otg_intr      : 1;  /* bit[11]   : usb2otg�ж� */
        unsigned int  sc_peri_2nd_int_statr1_g3d_intr          : 1;  /* bit[12]   : g3d�ж� */
        unsigned int  sc_peri_2nd_int_statr1_mipi_dsi_intr     : 1;  /* bit[13]   : mipi_dsi�ж� */
        unsigned int  sc_peri_2nd_int_statr1_ade_ldi_intr      : 1;  /* bit[14]   : ade_ldi�ж� */
        unsigned int  sc_peri_2nd_int_statr1_ade_intr          : 1;  /* bit[15]   : ade�ж� */
        unsigned int  sc_peri_2nd_int_statr1_mmu_intr          : 1;  /* bit[16]   : mmu�ж� */
        unsigned int  sc_peri_2nd_int_statr1_jpeg_intr         : 1;  /* bit[17]   : jpeg�ж� */
        unsigned int  sc_peri_2nd_int_statr1_vcodec_intr       : 1;  /* bit[18]   : vcodec�ж� */
        unsigned int  sc_peri_2nd_int_statr1_mipi_cs1_intr     : 1;  /* bit[19]   : mipi_cs1�ж� */
        unsigned int  sc_peri_2nd_int_statr1_mipi_cs0_intr     : 1;  /* bit[20]   : mipi_cs0�ж� */
        unsigned int  sc_peri_2nd_int_statr1_isp_intr          : 1;  /* bit[21]   : isp�ж� */
        unsigned int  reserved                                 : 10; /* bit[22-31]: reserved */
    } reg;
} SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_sc_peri_2nd_int_statr1_ddr_dfs_intr_START       (0)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_sc_peri_2nd_int_statr1_ddr_dfs_intr_END         (0)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_sc_peri_2nd_int_statr1_g3d_lp_intr_START        (1)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_sc_peri_2nd_int_statr1_g3d_lp_intr_END          (1)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_sc_peri_2nd_int_statr1_acpu_lp_intr_START       (2)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_sc_peri_2nd_int_statr1_acpu_lp_intr_END         (2)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_sc_peri_2nd_int_statr1_ccpu_pmuirq_intr_START   (3)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_sc_peri_2nd_int_statr1_ccpu_pmuirq_intr_END     (3)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_sc_peri_2nd_int_statr1_acpu_pmuirq3_intr_START  (4)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_sc_peri_2nd_int_statr1_acpu_pmuirq3_intr_END    (4)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_sc_peri_2nd_int_statr1_acpu_pmuirq2_intr_START  (5)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_sc_peri_2nd_int_statr1_acpu_pmuirq2_intr_END    (5)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_sc_peri_2nd_int_statr1_acpu_pmuirq1_intr_START  (6)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_sc_peri_2nd_int_statr1_acpu_pmuirq1_intr_END    (6)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_sc_peri_2nd_int_statr1_acpu_pmuirq0_intr_START  (7)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_sc_peri_2nd_int_statr1_acpu_pmuirq0_intr_END    (7)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_sc_peri_2nd_int_statr1_sdiommc_intr_START       (8)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_sc_peri_2nd_int_statr1_sdiommc_intr_END         (8)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_sc_peri_2nd_int_statr1_sdmmc_intr_START         (9)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_sc_peri_2nd_int_statr1_sdmmc_intr_END           (9)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_sc_peri_2nd_int_statr1_emmc_intr_START          (10)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_sc_peri_2nd_int_statr1_emmc_intr_END            (10)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_sc_peri_2nd_int_statr1_usb2otg_intr_START       (11)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_sc_peri_2nd_int_statr1_usb2otg_intr_END         (11)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_sc_peri_2nd_int_statr1_g3d_intr_START           (12)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_sc_peri_2nd_int_statr1_g3d_intr_END             (12)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_sc_peri_2nd_int_statr1_mipi_dsi_intr_START      (13)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_sc_peri_2nd_int_statr1_mipi_dsi_intr_END        (13)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_sc_peri_2nd_int_statr1_ade_ldi_intr_START       (14)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_sc_peri_2nd_int_statr1_ade_ldi_intr_END         (14)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_sc_peri_2nd_int_statr1_ade_intr_START           (15)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_sc_peri_2nd_int_statr1_ade_intr_END             (15)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_sc_peri_2nd_int_statr1_mmu_intr_START           (16)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_sc_peri_2nd_int_statr1_mmu_intr_END             (16)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_sc_peri_2nd_int_statr1_jpeg_intr_START          (17)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_sc_peri_2nd_int_statr1_jpeg_intr_END            (17)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_sc_peri_2nd_int_statr1_vcodec_intr_START        (18)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_sc_peri_2nd_int_statr1_vcodec_intr_END          (18)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_sc_peri_2nd_int_statr1_mipi_cs1_intr_START      (19)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_sc_peri_2nd_int_statr1_mipi_cs1_intr_END        (19)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_sc_peri_2nd_int_statr1_mipi_cs0_intr_START      (20)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_sc_peri_2nd_int_statr1_mipi_cs0_intr_END        (20)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_sc_peri_2nd_int_statr1_isp_intr_START           (21)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATR1_sc_peri_2nd_int_statr1_isp_intr_END             (21)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_UNION
 �ṹ˵��  : SC_PERI_2ND_INT_STATM1 �Ĵ����ṹ���塣��ַƫ����:0x118����ֵ:0x00000000�����:32
 �Ĵ���˵��: MCU�ж϶����ж����κ��ж�״̬
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_peri_2nd_int_statm1_ddr_dfs_intr      : 1;  /* bit[0]    : ddr_dfs�ж� */
        unsigned int  sc_peri_2nd_int_statm1_g3d_lp_intr       : 1;  /* bit[1]    : g3d_lp�ж� */
        unsigned int  sc_peri_2nd_int_statm1_acpu_lp_intr      : 1;  /* bit[2]    : acpu_lp�ж� */
        unsigned int  sc_peri_2nd_int_statm1_ccpu_pmuirq_intr  : 1;  /* bit[3]    : ccpu_pumirq�ж� */
        unsigned int  sc_peri_2nd_int_statm1_acpu_pmuirq3_intr : 1;  /* bit[4]    : acpu_pmuirq3�ж� */
        unsigned int  sc_peri_2nd_int_statm1_acpu_pmuirq2_intr : 1;  /* bit[5]    : acpu_pmuirq2�ж� */
        unsigned int  sc_peri_2nd_int_statm1_acpu_pmuirq1_intr : 1;  /* bit[6]    : acpu_pmuirq1�ж� */
        unsigned int  sc_peri_2nd_int_statm1_acpu_pmuirq0_intr : 1;  /* bit[7]    : acpu_pmuirq0�ж� */
        unsigned int  sc_peri_2nd_int_statm1_sdiommc_intr      : 1;  /* bit[8]    : sdiommc�ж� */
        unsigned int  sc_peri_2nd_int_statm1_sdmmc_intr        : 1;  /* bit[9]    : sdmmc�ж� */
        unsigned int  sc_peri_2nd_int_statm1_emmc_intr         : 1;  /* bit[10]   : emmc�ж� */
        unsigned int  sc_peri_2nd_int_statm1_usb2otg_intr      : 1;  /* bit[11]   : usb2otg�ж� */
        unsigned int  sc_peri_2nd_int_statm1_g3d_intr          : 1;  /* bit[12]   : g3d�ж� */
        unsigned int  sc_peri_2nd_int_statm1_mipi_dsi_intr     : 1;  /* bit[13]   : mipi_dsi�ж� */
        unsigned int  sc_peri_2nd_int_statm1_ade_ldi_intr      : 1;  /* bit[14]   : ade_ldi�ж� */
        unsigned int  sc_peri_2nd_int_statm1_ade_intr          : 1;  /* bit[15]   : ade�ж� */
        unsigned int  sc_peri_2nd_int_statm1_mmu_intr          : 1;  /* bit[16]   : mmu�ж� */
        unsigned int  sc_peri_2nd_int_statm1_jpeg_intr         : 1;  /* bit[17]   : jpeg�ж� */
        unsigned int  sc_peri_2nd_int_statm1_vcodec_intr       : 1;  /* bit[18]   : vcodec�ж� */
        unsigned int  sc_peri_2nd_int_statm1_mipi_cs1_intr     : 1;  /* bit[19]   : mipi_cs1�ж� */
        unsigned int  sc_peri_2nd_int_statm1_mipi_cs0_intr     : 1;  /* bit[20]   : mipi_cs0�ж� */
        unsigned int  sc_peri_2nd_int_statm1_isp_intr          : 1;  /* bit[21]   : isp�ж� */
        unsigned int  reserved                                 : 10; /* bit[22-31]: reserved */
    } reg;
} SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_sc_peri_2nd_int_statm1_ddr_dfs_intr_START       (0)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_sc_peri_2nd_int_statm1_ddr_dfs_intr_END         (0)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_sc_peri_2nd_int_statm1_g3d_lp_intr_START        (1)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_sc_peri_2nd_int_statm1_g3d_lp_intr_END          (1)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_sc_peri_2nd_int_statm1_acpu_lp_intr_START       (2)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_sc_peri_2nd_int_statm1_acpu_lp_intr_END         (2)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_sc_peri_2nd_int_statm1_ccpu_pmuirq_intr_START   (3)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_sc_peri_2nd_int_statm1_ccpu_pmuirq_intr_END     (3)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_sc_peri_2nd_int_statm1_acpu_pmuirq3_intr_START  (4)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_sc_peri_2nd_int_statm1_acpu_pmuirq3_intr_END    (4)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_sc_peri_2nd_int_statm1_acpu_pmuirq2_intr_START  (5)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_sc_peri_2nd_int_statm1_acpu_pmuirq2_intr_END    (5)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_sc_peri_2nd_int_statm1_acpu_pmuirq1_intr_START  (6)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_sc_peri_2nd_int_statm1_acpu_pmuirq1_intr_END    (6)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_sc_peri_2nd_int_statm1_acpu_pmuirq0_intr_START  (7)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_sc_peri_2nd_int_statm1_acpu_pmuirq0_intr_END    (7)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_sc_peri_2nd_int_statm1_sdiommc_intr_START       (8)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_sc_peri_2nd_int_statm1_sdiommc_intr_END         (8)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_sc_peri_2nd_int_statm1_sdmmc_intr_START         (9)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_sc_peri_2nd_int_statm1_sdmmc_intr_END           (9)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_sc_peri_2nd_int_statm1_emmc_intr_START          (10)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_sc_peri_2nd_int_statm1_emmc_intr_END            (10)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_sc_peri_2nd_int_statm1_usb2otg_intr_START       (11)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_sc_peri_2nd_int_statm1_usb2otg_intr_END         (11)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_sc_peri_2nd_int_statm1_g3d_intr_START           (12)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_sc_peri_2nd_int_statm1_g3d_intr_END             (12)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_sc_peri_2nd_int_statm1_mipi_dsi_intr_START      (13)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_sc_peri_2nd_int_statm1_mipi_dsi_intr_END        (13)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_sc_peri_2nd_int_statm1_ade_ldi_intr_START       (14)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_sc_peri_2nd_int_statm1_ade_ldi_intr_END         (14)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_sc_peri_2nd_int_statm1_ade_intr_START           (15)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_sc_peri_2nd_int_statm1_ade_intr_END             (15)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_sc_peri_2nd_int_statm1_mmu_intr_START           (16)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_sc_peri_2nd_int_statm1_mmu_intr_END             (16)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_sc_peri_2nd_int_statm1_jpeg_intr_START          (17)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_sc_peri_2nd_int_statm1_jpeg_intr_END            (17)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_sc_peri_2nd_int_statm1_vcodec_intr_START        (18)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_sc_peri_2nd_int_statm1_vcodec_intr_END          (18)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_sc_peri_2nd_int_statm1_mipi_cs1_intr_START      (19)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_sc_peri_2nd_int_statm1_mipi_cs1_intr_END        (19)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_sc_peri_2nd_int_statm1_mipi_cs0_intr_START      (20)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_sc_peri_2nd_int_statm1_mipi_cs0_intr_END        (20)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_sc_peri_2nd_int_statm1_isp_intr_START           (21)
#define SOC_PERI_SCTRL_SC_PERI_2ND_INT_STATM1_sc_peri_2nd_int_statm1_isp_intr_END             (21)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_PERIPH_CLKEN0_UNION
 �ṹ˵��  : SC_PERIPH_CLKEN0 �Ĵ����ṹ���塣��ַƫ����:0x200����ֵ:0x00000000�����:32
 �Ĵ���˵��: ����ʱ��ʹ�ܼĴ���0������ʹ������ʱ�ӡ��Ա���д1��ʹ�ܶ�Ӧ��ʱ�ӣ�д0��Ӱ��ʱ��ʹ�ܵ�״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  periph_clken0_mmc0         : 1;  /* bit[0]   : mmc0ʱ�� */
        unsigned int  periph_clken0_mmc1         : 1;  /* bit[1]   : mmc1ʱ�� */
        unsigned int  periph_clken0_mmc2         : 1;  /* bit[2]   : mmc2ʱ�� */
        unsigned int  periph_clken0_nandc        : 1;  /* bit[3]   : nandcʱ�� */
        unsigned int  periph_clken0_usbotg       : 1;  /* bit[4]   : usbotgʱ�� */
        unsigned int  periph_clken0_picophy_test : 1;  /* bit[5]   : picophy ����ʱ�� */
        unsigned int  periph_clken0_pll_test     : 1;  /* bit[6]   : pll_testʱ�� */
        unsigned int  reserved                   : 25; /* bit[7-31]: ʱ��ʹ�ܶ������£�д1ʱ�Ӵ򿪣��� */
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_CLKEN0_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN0_periph_clken0_mmc0_START          (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN0_periph_clken0_mmc0_END            (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN0_periph_clken0_mmc1_START          (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN0_periph_clken0_mmc1_END            (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN0_periph_clken0_mmc2_START          (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN0_periph_clken0_mmc2_END            (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN0_periph_clken0_nandc_START         (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN0_periph_clken0_nandc_END           (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN0_periph_clken0_usbotg_START        (4)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN0_periph_clken0_usbotg_END          (4)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN0_periph_clken0_picophy_test_START  (5)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN0_periph_clken0_picophy_test_END    (5)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN0_periph_clken0_pll_test_START      (6)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN0_periph_clken0_pll_test_END        (6)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_PERIPH_CLKDIS0_UNION
 �ṹ˵��  : SC_PERIPH_CLKDIS0 �Ĵ����ṹ���塣��ַƫ����:0x204����ֵ:0x00000000�����:32
 �Ĵ���˵��: ����ʱ�ӽ�ֹ�Ĵ���0�����ڽ�ֹ����ʱ�ӡ��Ա���д1����ֹ��Ӧ��ʱ�ӣ�д0��Ӱ��ʱ��ʹ�ܵ�״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  periph_clkdis0_mmc0         : 1;  /* bit[0]   : mmc0ʱ�� */
        unsigned int  periph_clkdis0_mmc1         : 1;  /* bit[1]   : mmc1ʱ�� */
        unsigned int  periph_clkdis0_mmc2         : 1;  /* bit[2]   : mmc2ʱ�� */
        unsigned int  periph_clkdis0_nandc        : 1;  /* bit[3]   : nandcʱ�� */
        unsigned int  periph_clkdis0_usbotg       : 1;  /* bit[4]   : usbotgʱ�� */
        unsigned int  periph_clkdis0_picophy_test : 1;  /* bit[5]   : picophy ����ʱ�� */
        unsigned int  periph_clkdis0_pll_test     : 1;  /* bit[6]   : pll_testʱ�� */
        unsigned int  reserved                    : 25; /* bit[7-31]: ʱ�ӽ�ֹ�������£�д1ʱ�ӹرգ��� */
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_CLKDIS0_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS0_periph_clkdis0_mmc0_START          (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS0_periph_clkdis0_mmc0_END            (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS0_periph_clkdis0_mmc1_START          (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS0_periph_clkdis0_mmc1_END            (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS0_periph_clkdis0_mmc2_START          (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS0_periph_clkdis0_mmc2_END            (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS0_periph_clkdis0_nandc_START         (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS0_periph_clkdis0_nandc_END           (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS0_periph_clkdis0_usbotg_START        (4)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS0_periph_clkdis0_usbotg_END          (4)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS0_periph_clkdis0_picophy_test_START  (5)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS0_periph_clkdis0_picophy_test_END    (5)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS0_periph_clkdis0_pll_test_START      (6)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS0_periph_clkdis0_pll_test_END        (6)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT0_UNION
 �ṹ˵��  : SC_PERIPH_CLKSTAT0 �Ĵ����ṹ���塣��ַƫ����:0x208����ֵ:0x00000008�����:32
 �Ĵ���˵��: ����ʱ��״̬�Ĵ���0�����ڻض�������ʱ�ӵ�״̬������ʱ�ӿ����ź��辭����CRG�н���ͬ��������ˣ�����ļĴ���ֵ���ӳ���Ӧʱ����ļ������ں��������Ӧʱ��״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  periph_clkstat0_mmc0         : 1;  /* bit[0]   : mmc0ʱ�� */
        unsigned int  periph_clkstat0_mmc1         : 1;  /* bit[1]   : mmc1ʱ�� */
        unsigned int  periph_clkstat0_mmc2         : 1;  /* bit[2]   : mmc2ʱ�� */
        unsigned int  periph_clkstat0_nandc        : 1;  /* bit[3]   : nandcʱ�� */
        unsigned int  periph_clkstat0_usbotg       : 1;  /* bit[4]   : usbotgʱ�� */
        unsigned int  periph_clkstat0_picophy_test : 1;  /* bit[5]   : picophy ����ʱ�� */
        unsigned int  periph_clkstat0_pll_test     : 1;  /* bit[6]   : pll_testʱ�� */
        unsigned int  reserved                     : 25; /* bit[7-31]: ʱ��״̬�������£��ߵ�ƽ��ʾʱ�Ӵ򿪣��� */
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT0_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT0_periph_clkstat0_mmc0_START          (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT0_periph_clkstat0_mmc0_END            (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT0_periph_clkstat0_mmc1_START          (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT0_periph_clkstat0_mmc1_END            (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT0_periph_clkstat0_mmc2_START          (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT0_periph_clkstat0_mmc2_END            (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT0_periph_clkstat0_nandc_START         (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT0_periph_clkstat0_nandc_END           (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT0_periph_clkstat0_usbotg_START        (4)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT0_periph_clkstat0_usbotg_END          (4)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT0_periph_clkstat0_picophy_test_START  (5)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT0_periph_clkstat0_picophy_test_END    (5)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT0_periph_clkstat0_pll_test_START      (6)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT0_periph_clkstat0_pll_test_END        (6)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_PERIPH_CLKEN1_UNION
 �ṹ˵��  : SC_PERIPH_CLKEN1 �Ĵ����ṹ���塣��ַƫ����:0x210����ֵ:0x00000000�����:32
 �Ĵ���˵��: ����ʱ��ʹ�ܼĴ���1������ʹ������ʱ�ӡ��Ա���д1��ʹ�ܶ�Ӧ��ʱ�ӣ�д0��Ӱ��ʱ��ʹ�ܵ�״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  periph_clken1_hifi      : 1;  /* bit[0]   : hifiʱ�� */
        unsigned int  reserved_0              : 1;  /* bit[1]   : sio0ʱ�� */
        unsigned int  reserved_1              : 1;  /* bit[2]   : sio1ʱ�� */
        unsigned int  reserved_2              : 1;  /* bit[3]   : sio2ʱ�� */
        unsigned int  reserved_3              : 1;  /* bit[4]   : sio3ʱ�� */
        unsigned int  periph_clken1_digacodec : 1;  /* bit[5]   : digital codecʱ�� */
        unsigned int  reserved_4              : 26; /* bit[6-31]: ʱ��ʹ�ܶ������£�д1ʱ�Ӵ򿪣��� */
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_CLKEN1_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN1_periph_clken1_hifi_START       (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN1_periph_clken1_hifi_END         (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN1_periph_clken1_digacodec_START  (5)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN1_periph_clken1_digacodec_END    (5)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_PERIPH_CLKDIS1_UNION
 �ṹ˵��  : SC_PERIPH_CLKDIS1 �Ĵ����ṹ���塣��ַƫ����:0x214����ֵ:0x00000000�����:32
 �Ĵ���˵��: ����ʱ�ӽ�ֹ�Ĵ���1�����ڽ�ֹ����ʱ�ӡ��Ա���д1����ֹ��Ӧ��ʱ�ӣ�д0��Ӱ��ʱ��ʹ�ܵ�״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  periph_clkdis1_hifi      : 1;  /* bit[0]   : hifiʱ�� */
        unsigned int  reserved_0               : 1;  /* bit[1]   : sio0ʱ�� */
        unsigned int  reserved_1               : 1;  /* bit[2]   : sio1ʱ�� */
        unsigned int  reserved_2               : 1;  /* bit[3]   : sio2ʱ�� */
        unsigned int  reserved_3               : 1;  /* bit[4]   : sio3ʱ�� */
        unsigned int  periph_clkdis1_digacodec : 1;  /* bit[5]   : digital codecʱ�� */
        unsigned int  reserved_4               : 26; /* bit[6-31]: ʱ�ӽ�ֹ�������£�д1ʱ�ӹرգ��� */
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_CLKDIS1_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS1_periph_clkdis1_hifi_START       (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS1_periph_clkdis1_hifi_END         (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS1_periph_clkdis1_digacodec_START  (5)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS1_periph_clkdis1_digacodec_END    (5)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT1_UNION
 �ṹ˵��  : SC_PERIPH_CLKSTAT1 �Ĵ����ṹ���塣��ַƫ����:0x218����ֵ:0x00000000�����:32
 �Ĵ���˵��: ����ʱ��״̬�Ĵ���1�����ڻض�������ʱ�ӵ�״̬������ʱ�ӿ����ź��辭����CRG�н���ͬ��������ˣ�����ļĴ���ֵ���ӳ���Ӧʱ����ļ������ں��������Ӧʱ��״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  periph_clkstat1_hifi      : 1;  /* bit[0]   : hifiʱ�� */
        unsigned int  reserved_0                : 1;  /* bit[1]   : sio0ʱ�� */
        unsigned int  reserved_1                : 1;  /* bit[2]   : sio1ʱ�� */
        unsigned int  reserved_2                : 1;  /* bit[3]   : sio2ʱ�� */
        unsigned int  reserved_3                : 1;  /* bit[4]   : sio3ʱ�� */
        unsigned int  periph_clkstat1_digacodec : 1;  /* bit[5]   : digital codecʱ�� */
        unsigned int  reserved_4                : 26; /* bit[6-31]: ʱ��״̬�������£��ߵ�ƽ��ʾʱ�Ӵ򿪣��� */
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT1_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT1_periph_clkstat1_hifi_START       (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT1_periph_clkstat1_hifi_END         (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT1_periph_clkstat1_digacodec_START  (5)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT1_periph_clkstat1_digacodec_END    (5)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_PERIPH_CLKEN2_UNION
 �ṹ˵��  : SC_PERIPH_CLKEN2 �Ĵ����ṹ���塣��ַƫ����:0x220����ֵ:0x00000000�����:32
 �Ĵ���˵��: ����ʱ��ʹ�ܼĴ���2������ʹ������ʱ�ӡ��Ա���д1��ʹ�ܶ�Ӧ��ʱ�ӣ�д0��Ӱ��ʱ��ʹ�ܵ�״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  periph_clken2_ipf_acpu    : 1;  /* bit[0]   : acpu���Ƶ�ipfʱ�� */
        unsigned int  periph_clken2_socp_acpu   : 1;  /* bit[1]   : acpu���Ƶ�socpʱ�� */
        unsigned int  periph_clken2_dmac        : 1;  /* bit[2]   : dmacʱ�� */
        unsigned int  periph_clken2_seceng_acpu : 1;  /* bit[3]   : acpu���Ƶ�secengʱ�� */
        unsigned int  reserved_0                : 1;  /* bit[4]   : reserved */
        unsigned int  periph_clken2_hpm0        : 1;  /* bit[5]   : hpm0ʱ�� */
        unsigned int  periph_clken2_hpm1        : 1;  /* bit[6]   : hpm1ʱ�� */
        unsigned int  periph_clken2_hpm2        : 1;  /* bit[7]   : hpm2ʱ�� */
        unsigned int  periph_clken2_hpm3        : 1;  /* bit[8]   : hpm3ʱ�� */
        unsigned int  reserved_1                : 23; /* bit[9-31]: ʱ��ʹ�ܶ������£�д1ʱ�Ӵ򿪣��� */
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_CLKEN2_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN2_periph_clken2_ipf_acpu_START     (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN2_periph_clken2_ipf_acpu_END       (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN2_periph_clken2_socp_acpu_START    (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN2_periph_clken2_socp_acpu_END      (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN2_periph_clken2_dmac_START         (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN2_periph_clken2_dmac_END           (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN2_periph_clken2_seceng_acpu_START  (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN2_periph_clken2_seceng_acpu_END    (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN2_periph_clken2_hpm0_START         (5)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN2_periph_clken2_hpm0_END           (5)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN2_periph_clken2_hpm1_START         (6)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN2_periph_clken2_hpm1_END           (6)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN2_periph_clken2_hpm2_START         (7)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN2_periph_clken2_hpm2_END           (7)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN2_periph_clken2_hpm3_START         (8)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN2_periph_clken2_hpm3_END           (8)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_PERIPH_CLKDIS2_UNION
 �ṹ˵��  : SC_PERIPH_CLKDIS2 �Ĵ����ṹ���塣��ַƫ����:0x224����ֵ:0x00000000�����:32
 �Ĵ���˵��: ����ʱ�ӽ�ֹ�Ĵ���2�����ڽ�ֹ����ʱ�ӡ��Ա���д1����ֹ��Ӧ��ʱ�ӣ�д0��Ӱ��ʱ��ʹ�ܵ�״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  periph_clkdis2_ipf_acpu    : 1;  /* bit[0]   : acpu���Ƶ�ipfʱ�� */
        unsigned int  periph_clkdis2_socp_acpu   : 1;  /* bit[1]   : acpu���Ƶ�socpʱ�� */
        unsigned int  periph_clkdis2_dmac        : 1;  /* bit[2]   : dmacʱ�� */
        unsigned int  periph_clkdis2_seceng_acpu : 1;  /* bit[3]   : acpu���Ƶ�secengʱ�� */
        unsigned int  reserved_0                 : 1;  /* bit[4]   : reserved */
        unsigned int  periph_clkdis2_hpm0        : 1;  /* bit[5]   : hpm0ʱ�� */
        unsigned int  periph_clkdis2_hpm1        : 1;  /* bit[6]   : hpm1ʱ�� */
        unsigned int  periph_clkdis2_hpm2        : 1;  /* bit[7]   : hpm2ʱ�� */
        unsigned int  periph_clkdis2_hpm3        : 1;  /* bit[8]   : hpm3ʱ�� */
        unsigned int  reserved_1                 : 23; /* bit[9-31]: ʱ�ӽ�ֹ�������£�д1ʱ�ӹرգ��� */
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_CLKDIS2_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS2_periph_clkdis2_ipf_acpu_START     (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS2_periph_clkdis2_ipf_acpu_END       (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS2_periph_clkdis2_socp_acpu_START    (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS2_periph_clkdis2_socp_acpu_END      (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS2_periph_clkdis2_dmac_START         (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS2_periph_clkdis2_dmac_END           (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS2_periph_clkdis2_seceng_acpu_START  (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS2_periph_clkdis2_seceng_acpu_END    (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS2_periph_clkdis2_hpm0_START         (5)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS2_periph_clkdis2_hpm0_END           (5)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS2_periph_clkdis2_hpm1_START         (6)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS2_periph_clkdis2_hpm1_END           (6)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS2_periph_clkdis2_hpm2_START         (7)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS2_periph_clkdis2_hpm2_END           (7)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS2_periph_clkdis2_hpm3_START         (8)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS2_periph_clkdis2_hpm3_END           (8)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT2_UNION
 �ṹ˵��  : SC_PERIPH_CLKSTAT2 �Ĵ����ṹ���塣��ַƫ����:0x228����ֵ:0x00000008�����:32
 �Ĵ���˵��: ����ʱ��״̬�Ĵ���2�����ڻض�������ʱ�ӵ�״̬������ʱ�ӿ����ź��辭����CRG�н���ͬ��������ˣ�����ļĴ���ֵ���ӳ���Ӧʱ����ļ������ں��������Ӧʱ��״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  periph_clkstat2_ipf_acpu    : 1;  /* bit[0]   : acpu���Ƶ�ipfʱ�� */
        unsigned int  periph_clkstat2_socp_acpu   : 1;  /* bit[1]   : acpu���Ƶ�socpʱ�� */
        unsigned int  periph_clkstat2_dmac        : 1;  /* bit[2]   : dmacʱ�� */
        unsigned int  periph_clkstat2_seceng_acpu : 1;  /* bit[3]   : acpu���Ƶ�secengʱ�� */
        unsigned int  reserved_0                  : 1;  /* bit[4]   : reserved */
        unsigned int  periph_clkstat2_hpm0        : 1;  /* bit[5]   : hpm0ʱ�� */
        unsigned int  periph_clkstat2_hpm1        : 1;  /* bit[6]   : hpm1ʱ�� */
        unsigned int  periph_clkstat2_hpm2        : 1;  /* bit[7]   : hpm2ʱ�� */
        unsigned int  periph_clkstat2_hpm3        : 1;  /* bit[8]   : hpm3ʱ�� */
        unsigned int  reserved_1                  : 23; /* bit[9-31]: ʱ��״̬�������£��ߵ�ƽ��ʾʱ�Ӵ򿪣��� */
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT2_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT2_periph_clkstat2_ipf_acpu_START     (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT2_periph_clkstat2_ipf_acpu_END       (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT2_periph_clkstat2_socp_acpu_START    (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT2_periph_clkstat2_socp_acpu_END      (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT2_periph_clkstat2_dmac_START         (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT2_periph_clkstat2_dmac_END           (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT2_periph_clkstat2_seceng_acpu_START  (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT2_periph_clkstat2_seceng_acpu_END    (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT2_periph_clkstat2_hpm0_START         (5)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT2_periph_clkstat2_hpm0_END           (5)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT2_periph_clkstat2_hpm1_START         (6)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT2_periph_clkstat2_hpm1_END           (6)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT2_periph_clkstat2_hpm2_START         (7)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT2_periph_clkstat2_hpm2_END           (7)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT2_periph_clkstat2_hpm3_START         (8)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT2_periph_clkstat2_hpm3_END           (8)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_PERIPH_CLKEN3_UNION
 �ṹ˵��  : SC_PERIPH_CLKEN3 �Ĵ����ṹ���塣��ַƫ����:0x230����ֵ:0x00000000�����:32
 �Ĵ���˵��: ����ʱ��ʹ�ܼĴ���3������ʹ������ʱ�ӡ��Ա���д1��ʹ�ܶ�Ӧ��ʱ�ӣ�д0��Ӱ��ʱ��ʹ�ܵ�״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  periph_clken3_cssys     : 1;  /* bit[0]    : coresight atb tpiu ʱ��  */
        unsigned int  periph_clken3_i2c0      : 1;  /* bit[1]    : i2c0ʱ�� */
        unsigned int  periph_clken3_i2c1      : 1;  /* bit[2]    : i2c1ʱ�� */
        unsigned int  periph_clken3_i2c2      : 1;  /* bit[3]    : i2c2ʱ�� */
        unsigned int  periph_clken3_i2c3      : 1;  /* bit[4]    : i2c3ʱ�� */
        unsigned int  periph_clken3_uart1     : 1;  /* bit[5]    : uart1ʱ�� */
        unsigned int  periph_clken3_uart2     : 1;  /* bit[6]    : uart2ʱ�� */
        unsigned int  periph_clken3_uart3     : 1;  /* bit[7]    : uart3ʱ�� */
        unsigned int  periph_clken3_uart4     : 1;  /* bit[8]    : uart4ʱ�� */
        unsigned int  periph_clken3_ssp       : 1;  /* bit[9]    : sspʱ�� */
        unsigned int  periph_clken3_pwm       : 1;  /* bit[10]   : pwmʱ�� */
        unsigned int  periph_clken3_blpwm     : 1;  /* bit[11]   : backlight pwmʱ�� */
        unsigned int  periph_clken3_tsensor   : 1;  /* bit[12]   : tsensorʱ�� */
        unsigned int  reserved_0              : 1;  /* bit[13]   : DJTAG PMCʱ�� */
        unsigned int  reserved_1              : 1;  /* bit[14]   : DJTAG IOCʱ�� */
        unsigned int  periph_clken3_gps       : 1;  /* bit[15]   : gpsʱ�� */
        unsigned int  periph_clken3_tcxo_pad0 : 1;  /* bit[16]   : tcxo pad0ʱ�� */
        unsigned int  periph_clken3_tcxo_pad1 : 1;  /* bit[17]   : tcxo pad1ʱ�� */
        unsigned int  periph_clken3_dapb      : 1;  /* bit[18]   : dapb ��sapbʱ�� */
        unsigned int  periph_clken3_hkadc     : 1;  /* bit[19]   : hkadcʱ�� */
        unsigned int  periph_clken3_codec_ssi : 1;  /* bit[20]   : codec ssiʱ�� */
        unsigned int  periph_clken3_tzpc_dep  : 1;  /* bit[21]   : tzpc_depʱ�� */
        unsigned int  reserved_2              : 10; /* bit[22-31]: ʱ��ʹ�ܶ������£�д1ʱ�Ӵ򿪣��� */
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_CLKEN3_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN3_periph_clken3_cssys_START      (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN3_periph_clken3_cssys_END        (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN3_periph_clken3_i2c0_START       (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN3_periph_clken3_i2c0_END         (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN3_periph_clken3_i2c1_START       (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN3_periph_clken3_i2c1_END         (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN3_periph_clken3_i2c2_START       (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN3_periph_clken3_i2c2_END         (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN3_periph_clken3_i2c3_START       (4)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN3_periph_clken3_i2c3_END         (4)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN3_periph_clken3_uart1_START      (5)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN3_periph_clken3_uart1_END        (5)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN3_periph_clken3_uart2_START      (6)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN3_periph_clken3_uart2_END        (6)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN3_periph_clken3_uart3_START      (7)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN3_periph_clken3_uart3_END        (7)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN3_periph_clken3_uart4_START      (8)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN3_periph_clken3_uart4_END        (8)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN3_periph_clken3_ssp_START        (9)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN3_periph_clken3_ssp_END          (9)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN3_periph_clken3_pwm_START        (10)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN3_periph_clken3_pwm_END          (10)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN3_periph_clken3_blpwm_START      (11)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN3_periph_clken3_blpwm_END        (11)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN3_periph_clken3_tsensor_START    (12)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN3_periph_clken3_tsensor_END      (12)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN3_periph_clken3_gps_START        (15)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN3_periph_clken3_gps_END          (15)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN3_periph_clken3_tcxo_pad0_START  (16)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN3_periph_clken3_tcxo_pad0_END    (16)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN3_periph_clken3_tcxo_pad1_START  (17)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN3_periph_clken3_tcxo_pad1_END    (17)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN3_periph_clken3_dapb_START       (18)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN3_periph_clken3_dapb_END         (18)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN3_periph_clken3_hkadc_START      (19)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN3_periph_clken3_hkadc_END        (19)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN3_periph_clken3_codec_ssi_START  (20)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN3_periph_clken3_codec_ssi_END    (20)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN3_periph_clken3_tzpc_dep_START   (21)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN3_periph_clken3_tzpc_dep_END     (21)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_PERIPH_CLKDIS3_UNION
 �ṹ˵��  : SC_PERIPH_CLKDIS3 �Ĵ����ṹ���塣��ַƫ����:0x234����ֵ:0x00000000�����:32
 �Ĵ���˵��: ����ʱ�ӽ�ֹ�Ĵ���3�����ڽ�ֹ����ʱ�ӡ��Ա���д1����ֹ��Ӧ��ʱ�ӣ�д0��Ӱ��ʱ��ʹ�ܵ�״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  periph_clkdis3_cssys     : 1;  /* bit[0]    : coresight sysʱ�� */
        unsigned int  periph_clkdis3_i2c0      : 1;  /* bit[1]    : i2c0ʱ�� */
        unsigned int  periph_clkdis3_i2c1      : 1;  /* bit[2]    : i2c1ʱ�� */
        unsigned int  periph_clkdis3_i2c2      : 1;  /* bit[3]    : i2c2ʱ�� */
        unsigned int  periph_clkdis3_i2c3      : 1;  /* bit[4]    : i2c3ʱ�� */
        unsigned int  periph_clkdis3_uart1     : 1;  /* bit[5]    : uart1ʱ�� */
        unsigned int  periph_clkdis3_uart2     : 1;  /* bit[6]    : uart2ʱ�� */
        unsigned int  periph_clkdis3_uart3     : 1;  /* bit[7]    : uart3ʱ�� */
        unsigned int  periph_clkdis3_uart4     : 1;  /* bit[8]    : uart4ʱ�� */
        unsigned int  periph_clkdis3_ssp       : 1;  /* bit[9]    : sspʱ�� */
        unsigned int  periph_clkdis3_pwm       : 1;  /* bit[10]   : pwmʱ�� */
        unsigned int  periph_clkdis3_blpwm     : 1;  /* bit[11]   : backlight pwmʱ�� */
        unsigned int  periph_clkdis3_tsensor   : 1;  /* bit[12]   : tsensorʱ�� */
        unsigned int  reserved_0               : 1;  /* bit[13]   : DJTAG PMCʱ�� */
        unsigned int  reserved_1               : 1;  /* bit[14]   : DJTAG IOCʱ�� */
        unsigned int  periph_clkdis3_gps       : 1;  /* bit[15]   : gpsʱ�� */
        unsigned int  periph_clkdis3_tcxo_pad0 : 1;  /* bit[16]   : tcxo pad0ʱ�� */
        unsigned int  periph_clkdis3_tcxo_pad1 : 1;  /* bit[17]   : tcxo pad1ʱ�� */
        unsigned int  periph_clkdis3_dapb      : 1;  /* bit[18]   : dapb ��sapbʱ�� */
        unsigned int  periph_clkdis3_hkadc     : 1;  /* bit[19]   : hkadcʱ�� */
        unsigned int  periph_clkdis3_codec_ssi : 1;  /* bit[20]   : codec ssiʱ�� */
        unsigned int  periph_clkdis3_tzpc_dep  : 1;  /* bit[21]   : tzpc_depʱ�� */
        unsigned int  reserved_2               : 10; /* bit[22-31]: ʱ�ӽ�ֹ�������£�д1ʱ�ӹرգ��� */
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_CLKDIS3_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS3_periph_clkdis3_cssys_START      (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS3_periph_clkdis3_cssys_END        (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS3_periph_clkdis3_i2c0_START       (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS3_periph_clkdis3_i2c0_END         (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS3_periph_clkdis3_i2c1_START       (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS3_periph_clkdis3_i2c1_END         (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS3_periph_clkdis3_i2c2_START       (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS3_periph_clkdis3_i2c2_END         (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS3_periph_clkdis3_i2c3_START       (4)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS3_periph_clkdis3_i2c3_END         (4)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS3_periph_clkdis3_uart1_START      (5)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS3_periph_clkdis3_uart1_END        (5)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS3_periph_clkdis3_uart2_START      (6)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS3_periph_clkdis3_uart2_END        (6)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS3_periph_clkdis3_uart3_START      (7)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS3_periph_clkdis3_uart3_END        (7)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS3_periph_clkdis3_uart4_START      (8)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS3_periph_clkdis3_uart4_END        (8)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS3_periph_clkdis3_ssp_START        (9)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS3_periph_clkdis3_ssp_END          (9)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS3_periph_clkdis3_pwm_START        (10)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS3_periph_clkdis3_pwm_END          (10)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS3_periph_clkdis3_blpwm_START      (11)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS3_periph_clkdis3_blpwm_END        (11)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS3_periph_clkdis3_tsensor_START    (12)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS3_periph_clkdis3_tsensor_END      (12)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS3_periph_clkdis3_gps_START        (15)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS3_periph_clkdis3_gps_END          (15)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS3_periph_clkdis3_tcxo_pad0_START  (16)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS3_periph_clkdis3_tcxo_pad0_END    (16)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS3_periph_clkdis3_tcxo_pad1_START  (17)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS3_periph_clkdis3_tcxo_pad1_END    (17)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS3_periph_clkdis3_dapb_START       (18)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS3_periph_clkdis3_dapb_END         (18)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS3_periph_clkdis3_hkadc_START      (19)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS3_periph_clkdis3_hkadc_END        (19)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS3_periph_clkdis3_codec_ssi_START  (20)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS3_periph_clkdis3_codec_ssi_END    (20)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS3_periph_clkdis3_tzpc_dep_START   (21)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS3_periph_clkdis3_tzpc_dep_END     (21)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT3_UNION
 �ṹ˵��  : SC_PERIPH_CLKSTAT3 �Ĵ����ṹ���塣��ַƫ����:0x238����ֵ:0x00240001�����:32
 �Ĵ���˵��: ����ʱ��״̬�Ĵ���3�����ڻض�������ʱ�ӵ�״̬������ʱ�ӿ����ź��辭����CRG�н���ͬ��������ˣ�����ļĴ���ֵ���ӳ���Ӧʱ����ļ������ں��������Ӧʱ��״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  periph_clkstat3_cssys     : 1;  /* bit[0]    : coresight sysʱ�� */
        unsigned int  periph_clkstat3_i2c0      : 1;  /* bit[1]    : i2c0ʱ�� */
        unsigned int  periph_clkstat3_i2c1      : 1;  /* bit[2]    : i2c1ʱ�� */
        unsigned int  periph_clkstat3_i2c2      : 1;  /* bit[3]    : i2c2ʱ�� */
        unsigned int  periph_clkstat3_i2c3      : 1;  /* bit[4]    : i2c3ʱ�� */
        unsigned int  periph_clkstat3_uart1     : 1;  /* bit[5]    : uart1ʱ�� */
        unsigned int  periph_clkstat3_uart2     : 1;  /* bit[6]    : uart2ʱ�� */
        unsigned int  periph_clkstat3_uart3     : 1;  /* bit[7]    : uart3ʱ�� */
        unsigned int  periph_clkstat3_uart4     : 1;  /* bit[8]    : uart4ʱ�� */
        unsigned int  periph_clkstat3_ssp       : 1;  /* bit[9]    : sspʱ�� */
        unsigned int  periph_clkstat3_pwm       : 1;  /* bit[10]   : pwmʱ�� */
        unsigned int  periph_clkstat3_blpwm     : 1;  /* bit[11]   : backlight pwmʱ�� */
        unsigned int  periph_clkstat3_tsensor   : 1;  /* bit[12]   : tsensorʱ�� */
        unsigned int  reserved_0                : 1;  /* bit[13]   : DJTAG PMCʱ�� */
        unsigned int  reserved_1                : 1;  /* bit[14]   : DJTAG IOCʱ�� */
        unsigned int  periph_clkstat3_gps       : 1;  /* bit[15]   : gpsʱ�� */
        unsigned int  periph_clkstat3_tcxo_pad0 : 1;  /* bit[16]   : tcxo pad0ʱ�� */
        unsigned int  periph_clkstat3_tcxo_pad1 : 1;  /* bit[17]   : tcxo pad1ʱ�� */
        unsigned int  periph_clkstat3_dapb      : 1;  /* bit[18]   : dapb ��sapbʱ�� */
        unsigned int  periph_clkstat3_hkadc     : 1;  /* bit[19]   : hkadcʱ�� */
        unsigned int  periph_clkstat3_codec_ssi : 1;  /* bit[20]   : codec ssiʱ�� */
        unsigned int  periph_clkstat3_tzpc_dep  : 1;  /* bit[21]   : tzpc_depʱ�� */
        unsigned int  reserved_2                : 10; /* bit[22-31]: ʱ��״̬�������£��ߵ�ƽ��ʾʱ�Ӵ򿪣��� */
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT3_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT3_periph_clkstat3_cssys_START      (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT3_periph_clkstat3_cssys_END        (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT3_periph_clkstat3_i2c0_START       (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT3_periph_clkstat3_i2c0_END         (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT3_periph_clkstat3_i2c1_START       (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT3_periph_clkstat3_i2c1_END         (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT3_periph_clkstat3_i2c2_START       (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT3_periph_clkstat3_i2c2_END         (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT3_periph_clkstat3_i2c3_START       (4)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT3_periph_clkstat3_i2c3_END         (4)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT3_periph_clkstat3_uart1_START      (5)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT3_periph_clkstat3_uart1_END        (5)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT3_periph_clkstat3_uart2_START      (6)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT3_periph_clkstat3_uart2_END        (6)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT3_periph_clkstat3_uart3_START      (7)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT3_periph_clkstat3_uart3_END        (7)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT3_periph_clkstat3_uart4_START      (8)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT3_periph_clkstat3_uart4_END        (8)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT3_periph_clkstat3_ssp_START        (9)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT3_periph_clkstat3_ssp_END          (9)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT3_periph_clkstat3_pwm_START        (10)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT3_periph_clkstat3_pwm_END          (10)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT3_periph_clkstat3_blpwm_START      (11)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT3_periph_clkstat3_blpwm_END        (11)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT3_periph_clkstat3_tsensor_START    (12)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT3_periph_clkstat3_tsensor_END      (12)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT3_periph_clkstat3_gps_START        (15)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT3_periph_clkstat3_gps_END          (15)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT3_periph_clkstat3_tcxo_pad0_START  (16)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT3_periph_clkstat3_tcxo_pad0_END    (16)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT3_periph_clkstat3_tcxo_pad1_START  (17)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT3_periph_clkstat3_tcxo_pad1_END    (17)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT3_periph_clkstat3_dapb_START       (18)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT3_periph_clkstat3_dapb_END         (18)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT3_periph_clkstat3_hkadc_START      (19)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT3_periph_clkstat3_hkadc_END        (19)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT3_periph_clkstat3_codec_ssi_START  (20)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT3_periph_clkstat3_codec_ssi_END    (20)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT3_periph_clkstat3_tzpc_dep_START   (21)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT3_periph_clkstat3_tzpc_dep_END     (21)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_PERIPH_CLKEN8_UNION
 �ṹ˵��  : SC_PERIPH_CLKEN8 �Ĵ����ṹ���塣��ַƫ����:0x240����ֵ:0x00000000�����:32
 �Ĵ���˵��: ����ʱ��ʹ�ܼĴ���8������ʹ������ʱ�ӡ��Ա���д1��ʹ�ܶ�Ӧ��ʱ�ӣ�д0��Ӱ��ʱ��ʹ�ܵ�״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  periph_clken8_rs0         : 1;  /* bit[0]    : rs0ʱ�� */
        unsigned int  periph_clken8_rs2         : 1;  /* bit[1]    : rs2ʱ�� */
        unsigned int  periph_clken8_rs3         : 1;  /* bit[2]    : rs3ʱ�� */
        unsigned int  periph_clken8_ms0         : 1;  /* bit[3]    : ms0ʱ�� */
        unsigned int  reserved_0                : 1;  /* bit[4]    : ms1ʱ�� */
        unsigned int  periph_clken8_ms2         : 1;  /* bit[5]    : ms2ʱ�� */
        unsigned int  periph_clken8_xg2ram0     : 1;  /* bit[6]    : xg2ram0ʱ�� */
        unsigned int  periph_clken8_x2sram_tzma : 1;  /* bit[7]    : x2sram��tzmaʱ�� */
        unsigned int  periph_clken8_sram        : 1;  /* bit[8]    : sramʱ�� */
        unsigned int  periph_clken8_rom         : 1;  /* bit[9]    : romʱ�� */
        unsigned int  periph_clken8_harq        : 1;  /* bit[10]   : harqʱ�� */
        unsigned int  periph_clken8_mmu         : 1;  /* bit[11]   : mmuʱ�� */
        unsigned int  periph_clken8_ddrc        : 1;  /* bit[12]   : ddrʱ�� */
        unsigned int  periph_clken8_ddrphy      : 1;  /* bit[13]   : ddrphy0��λ 90��λʱ�� */
        unsigned int  periph_clken8_ddrphy_ref  : 1;  /* bit[14]   : ddrphy refʱ�� */
        unsigned int  periph_clken8_x2x_sysnoc  : 1;  /* bit[15]   : sysnoc x2x�첽��ʱ�� */
        unsigned int  periph_clken8_x2x_ccpu    : 1;  /* bit[16]   : ccpu x2x�첽��ʱ�� */
        unsigned int  periph_clken8_ddrt        : 1;  /* bit[17]   : ddrtʱ�� */
        unsigned int  periph_clken8_ddrpack_rs  : 1;  /* bit[18]   : ddrpack��rsʱ�� */
        unsigned int  reserved_1                : 13; /* bit[19-31]: ʱ��ʹ�ܶ������£�д1ʱ�Ӵ򿪣��� */
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_CLKEN8_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN8_periph_clken8_rs0_START          (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN8_periph_clken8_rs0_END            (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN8_periph_clken8_rs2_START          (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN8_periph_clken8_rs2_END            (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN8_periph_clken8_rs3_START          (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN8_periph_clken8_rs3_END            (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN8_periph_clken8_ms0_START          (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN8_periph_clken8_ms0_END            (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN8_periph_clken8_ms2_START          (5)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN8_periph_clken8_ms2_END            (5)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN8_periph_clken8_xg2ram0_START      (6)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN8_periph_clken8_xg2ram0_END        (6)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN8_periph_clken8_x2sram_tzma_START  (7)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN8_periph_clken8_x2sram_tzma_END    (7)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN8_periph_clken8_sram_START         (8)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN8_periph_clken8_sram_END           (8)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN8_periph_clken8_rom_START          (9)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN8_periph_clken8_rom_END            (9)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN8_periph_clken8_harq_START         (10)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN8_periph_clken8_harq_END           (10)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN8_periph_clken8_mmu_START          (11)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN8_periph_clken8_mmu_END            (11)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN8_periph_clken8_ddrc_START         (12)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN8_periph_clken8_ddrc_END           (12)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN8_periph_clken8_ddrphy_START       (13)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN8_periph_clken8_ddrphy_END         (13)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN8_periph_clken8_ddrphy_ref_START   (14)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN8_periph_clken8_ddrphy_ref_END     (14)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN8_periph_clken8_x2x_sysnoc_START   (15)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN8_periph_clken8_x2x_sysnoc_END     (15)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN8_periph_clken8_x2x_ccpu_START     (16)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN8_periph_clken8_x2x_ccpu_END       (16)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN8_periph_clken8_ddrt_START         (17)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN8_periph_clken8_ddrt_END           (17)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN8_periph_clken8_ddrpack_rs_START   (18)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN8_periph_clken8_ddrpack_rs_END     (18)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_PERIPH_CLKDIS8_UNION
 �ṹ˵��  : SC_PERIPH_CLKDIS8 �Ĵ����ṹ���塣��ַƫ����:0x244����ֵ:0x00000000�����:32
 �Ĵ���˵��: ����ʱ�ӽ�ֹ�Ĵ���8�����ڽ�ֹ����ʱ�ӡ��Ա���д1����ֹ��Ӧ��ʱ�ӣ�д0��Ӱ��ʱ��ʹ�ܵ�״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  periph_clkdis8_rs0         : 1;  /* bit[0]    : rs0ʱ�� */
        unsigned int  periph_clkdis8_rs2         : 1;  /* bit[1]    : rs2ʱ�� */
        unsigned int  periph_clkdis8_rs3         : 1;  /* bit[2]    : rs3ʱ�� */
        unsigned int  periph_clkdis8_ms0         : 1;  /* bit[3]    : ms0ʱ�� */
        unsigned int  reserved_0                 : 1;  /* bit[4]    : ms1ʱ�� */
        unsigned int  periph_clkdis8_ms2         : 1;  /* bit[5]    : ms2ʱ�� */
        unsigned int  periph_clkdis8_xg2ram0     : 1;  /* bit[6]    : xg2ram0ʱ�� */
        unsigned int  periph_clkdis8_x2sram_tzma : 1;  /* bit[7]    : x2sram��tzmaʱ�� */
        unsigned int  periph_clkdis8_sram        : 1;  /* bit[8]    : sramʱ�� */
        unsigned int  periph_clkdis8_rom         : 1;  /* bit[9]    : romʱ�� */
        unsigned int  periph_clkdis8_harq        : 1;  /* bit[10]   : harqʱ�� */
        unsigned int  periph_clkdis8_mmu         : 1;  /* bit[11]   : mmuʱ�� */
        unsigned int  periph_clkdis8_ddrc        : 1;  /* bit[12]   : ddrʱ�� */
        unsigned int  periph_clkdis8_ddrphy      : 1;  /* bit[13]   : ddrphy0��λ 90��λʱ�� */
        unsigned int  periph_clkdis8_ddrphy_ref  : 1;  /* bit[14]   : ddrphy refʱ�� */
        unsigned int  periph_clkdis8_x2x_sysnoc  : 1;  /* bit[15]   : sysnoc x2x�첽��ʱ�� */
        unsigned int  periph_clkdis8_x2x_ccpu    : 1;  /* bit[16]   : ccpu x2x�첽��ʱ�� */
        unsigned int  periph_clkdis8_ddrt        : 1;  /* bit[17]   : ddrtʱ�� */
        unsigned int  periph_clkdis8_ddrpack_rs  : 1;  /* bit[18]   : ddrpack��rsʱ�� */
        unsigned int  reserved_1                 : 13; /* bit[19-31]: ʱ�ӽ�ֹ�������£�д1ʱ�ӹرգ��� */
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_CLKDIS8_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS8_periph_clkdis8_rs0_START          (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS8_periph_clkdis8_rs0_END            (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS8_periph_clkdis8_rs2_START          (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS8_periph_clkdis8_rs2_END            (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS8_periph_clkdis8_rs3_START          (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS8_periph_clkdis8_rs3_END            (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS8_periph_clkdis8_ms0_START          (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS8_periph_clkdis8_ms0_END            (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS8_periph_clkdis8_ms2_START          (5)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS8_periph_clkdis8_ms2_END            (5)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS8_periph_clkdis8_xg2ram0_START      (6)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS8_periph_clkdis8_xg2ram0_END        (6)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS8_periph_clkdis8_x2sram_tzma_START  (7)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS8_periph_clkdis8_x2sram_tzma_END    (7)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS8_periph_clkdis8_sram_START         (8)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS8_periph_clkdis8_sram_END           (8)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS8_periph_clkdis8_rom_START          (9)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS8_periph_clkdis8_rom_END            (9)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS8_periph_clkdis8_harq_START         (10)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS8_periph_clkdis8_harq_END           (10)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS8_periph_clkdis8_mmu_START          (11)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS8_periph_clkdis8_mmu_END            (11)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS8_periph_clkdis8_ddrc_START         (12)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS8_periph_clkdis8_ddrc_END           (12)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS8_periph_clkdis8_ddrphy_START       (13)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS8_periph_clkdis8_ddrphy_END         (13)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS8_periph_clkdis8_ddrphy_ref_START   (14)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS8_periph_clkdis8_ddrphy_ref_END     (14)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS8_periph_clkdis8_x2x_sysnoc_START   (15)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS8_periph_clkdis8_x2x_sysnoc_END     (15)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS8_periph_clkdis8_x2x_ccpu_START     (16)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS8_periph_clkdis8_x2x_ccpu_END       (16)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS8_periph_clkdis8_ddrt_START         (17)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS8_periph_clkdis8_ddrt_END           (17)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS8_periph_clkdis8_ddrpack_rs_START   (18)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS8_periph_clkdis8_ddrpack_rs_END     (18)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT8_UNION
 �ṹ˵��  : SC_PERIPH_CLKSTAT8 �Ĵ����ṹ���塣��ַƫ����:0x248����ֵ:0x000007C8�����:32
 �Ĵ���˵��: ����ʱ��״̬�Ĵ���8�����ڻض�������ʱ�ӵ�״̬������ʱ�ӿ����ź��辭����CRG�н���ͬ��������ˣ�����ļĴ���ֵ���ӳ���Ӧʱ����ļ������ں��������Ӧʱ��״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  periph_clkstat8_rs0         : 1;  /* bit[0]    : rs0ʱ�� */
        unsigned int  periph_clkstat8_rs2         : 1;  /* bit[1]    : rs2ʱ�� */
        unsigned int  periph_clkstat8_rs3         : 1;  /* bit[2]    : rs3ʱ�� */
        unsigned int  periph_clkstat8_ms0         : 1;  /* bit[3]    : ms0ʱ�� */
        unsigned int  reserved_0                  : 1;  /* bit[4]    : ms1ʱ�� */
        unsigned int  periph_clkstat8_ms2         : 1;  /* bit[5]    : ms2ʱ�� */
        unsigned int  periph_clkstat8_xg2ram0     : 1;  /* bit[6]    : xg2ram0ʱ�� */
        unsigned int  periph_clkstat8_x2sram_tzma : 1;  /* bit[7]    : x2sram��tzmaʱ�� */
        unsigned int  periph_clkstat8_sram        : 1;  /* bit[8]    : sramʱ�� */
        unsigned int  periph_clkstat8_rom         : 1;  /* bit[9]    : romʱ�� */
        unsigned int  periph_clkstat8_harq        : 1;  /* bit[10]   : harqʱ�� */
        unsigned int  periph_clkstat8_mmu         : 1;  /* bit[11]   : mmuʱ�� */
        unsigned int  periph_clkstat8_ddrc        : 1;  /* bit[12]   : ddrʱ�� */
        unsigned int  periph_clkstat8_ddrphy      : 1;  /* bit[13]   : ddrphy0��λ 90��λʱ�� */
        unsigned int  periph_clkstat8_ddrphy_ref  : 1;  /* bit[14]   : ddrphy refʱ�� */
        unsigned int  periph_clkstat8_x2x_sysnoc  : 1;  /* bit[15]   : sysnoc x2x�첽��ʱ�� */
        unsigned int  periph_clkstat8_x2x_ccpu    : 1;  /* bit[16]   : ccpu x2x�첽��ʱ�� */
        unsigned int  periph_clkstat8_ddrt        : 1;  /* bit[17]   : ddrtʱ�� */
        unsigned int  periph_clkstat8_ddrpack_rs  : 1;  /* bit[18]   : ddrpack��rsʱ�� */
        unsigned int  reserved_1                  : 13; /* bit[19-31]: ʱ��״̬�������£��ߵ�ƽ��ʾʱ�Ӵ򿪣��� */
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT8_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT8_periph_clkstat8_rs0_START          (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT8_periph_clkstat8_rs0_END            (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT8_periph_clkstat8_rs2_START          (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT8_periph_clkstat8_rs2_END            (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT8_periph_clkstat8_rs3_START          (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT8_periph_clkstat8_rs3_END            (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT8_periph_clkstat8_ms0_START          (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT8_periph_clkstat8_ms0_END            (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT8_periph_clkstat8_ms2_START          (5)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT8_periph_clkstat8_ms2_END            (5)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT8_periph_clkstat8_xg2ram0_START      (6)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT8_periph_clkstat8_xg2ram0_END        (6)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT8_periph_clkstat8_x2sram_tzma_START  (7)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT8_periph_clkstat8_x2sram_tzma_END    (7)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT8_periph_clkstat8_sram_START         (8)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT8_periph_clkstat8_sram_END           (8)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT8_periph_clkstat8_rom_START          (9)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT8_periph_clkstat8_rom_END            (9)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT8_periph_clkstat8_harq_START         (10)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT8_periph_clkstat8_harq_END           (10)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT8_periph_clkstat8_mmu_START          (11)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT8_periph_clkstat8_mmu_END            (11)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT8_periph_clkstat8_ddrc_START         (12)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT8_periph_clkstat8_ddrc_END           (12)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT8_periph_clkstat8_ddrphy_START       (13)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT8_periph_clkstat8_ddrphy_END         (13)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT8_periph_clkstat8_ddrphy_ref_START   (14)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT8_periph_clkstat8_ddrphy_ref_END     (14)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT8_periph_clkstat8_x2x_sysnoc_START   (15)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT8_periph_clkstat8_x2x_sysnoc_END     (15)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT8_periph_clkstat8_x2x_ccpu_START     (16)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT8_periph_clkstat8_x2x_ccpu_END       (16)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT8_periph_clkstat8_ddrt_START         (17)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT8_periph_clkstat8_ddrt_END           (17)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT8_periph_clkstat8_ddrpack_rs_START   (18)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT8_periph_clkstat8_ddrpack_rs_END     (18)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_PERIPH_CLKEN9_UNION
 �ṹ˵��  : SC_PERIPH_CLKEN9 �Ĵ����ṹ���塣��ַƫ����:0x250����ֵ:0x00000000�����:32
 �Ĵ���˵��: ����ʱ��ʹ�ܼĴ���9������ʹ������ʱ�ӡ��Ա���д1��ʹ�ܶ�Ӧ��ʱ�ӣ�д0��Ӱ��ʱ��ʹ�ܵ�״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  periph_clken9_carm_dap    : 1;  /* bit[0]   : carm debug apbʱ�� */
        unsigned int  periph_clken9_carm_atb    : 1;  /* bit[1]   : carm atbʱ�� */
        unsigned int  periph_clken9_carm_lbus   : 1;  /* bit[2]   : carm localbusʱ�� */
        unsigned int  periph_clken9_carm_kernel : 1;  /* bit[3]   : carm�ں�ʱ�� */
        unsigned int  reserved                  : 28; /* bit[4-31]: ʱ��ʹ�ܶ������£�д1ʱ�Ӵ򿪣��� */
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_CLKEN9_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN9_periph_clken9_carm_dap_START     (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN9_periph_clken9_carm_dap_END       (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN9_periph_clken9_carm_atb_START     (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN9_periph_clken9_carm_atb_END       (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN9_periph_clken9_carm_lbus_START    (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN9_periph_clken9_carm_lbus_END      (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN9_periph_clken9_carm_kernel_START  (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN9_periph_clken9_carm_kernel_END    (3)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_PERIPH_CLKDIS9_UNION
 �ṹ˵��  : SC_PERIPH_CLKDIS9 �Ĵ����ṹ���塣��ַƫ����:0x254����ֵ:0x00000000�����:32
 �Ĵ���˵��: ����ʱ�ӽ�ֹ�Ĵ���9�����ڽ�ֹ����ʱ�ӡ��Ա���д1����ֹ��Ӧ��ʱ�ӣ�д0��Ӱ��ʱ��ʹ�ܵ�״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  periph_clkdis9_carm_dap    : 1;  /* bit[0]   : carm debug apbʱ�� */
        unsigned int  periph_clkdis9_carm_atb    : 1;  /* bit[1]   : carm atbʱ�� */
        unsigned int  periph_clkdis9_carm_lbus   : 1;  /* bit[2]   : carm localbusʱ�� */
        unsigned int  periph_clkdis9_carm_kernel : 1;  /* bit[3]   : carm�ں�ʱ�� */
        unsigned int  reserved                   : 28; /* bit[4-31]: ʱ�ӽ�ֹ�������£�д1ʱ�ӹرգ��� */
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_CLKDIS9_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS9_periph_clkdis9_carm_dap_START     (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS9_periph_clkdis9_carm_dap_END       (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS9_periph_clkdis9_carm_atb_START     (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS9_periph_clkdis9_carm_atb_END       (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS9_periph_clkdis9_carm_lbus_START    (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS9_periph_clkdis9_carm_lbus_END      (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS9_periph_clkdis9_carm_kernel_START  (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS9_periph_clkdis9_carm_kernel_END    (3)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT9_UNION
 �ṹ˵��  : SC_PERIPH_CLKSTAT9 �Ĵ����ṹ���塣��ַƫ����:0x258����ֵ:0x00000000�����:32
 �Ĵ���˵��: ����ʱ��״̬�Ĵ���9�����ڻض�������ʱ�ӵ�״̬������ʱ�ӿ����ź��辭����CRG�н���ͬ��������ˣ�����ļĴ���ֵ���ӳ���Ӧʱ����ļ������ں��������Ӧʱ��״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  periph_clkstat9_carm_dap    : 1;  /* bit[0]   : carm debug apbʱ�� */
        unsigned int  periph_clkstat9_carm_atb    : 1;  /* bit[1]   : carm atbʱ�� */
        unsigned int  periph_clkstat9_carm_lbus   : 1;  /* bit[2]   : carm localbusʱ�� */
        unsigned int  periph_clkstat9_carm_kernel : 1;  /* bit[3]   : carm�ں�ʱ�� */
        unsigned int  reserved                    : 28; /* bit[4-31]: ʱ��״̬�������£��ߵ�ƽ��ʾʱ�Ӵ򿪣��� */
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT9_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT9_periph_clkstat9_carm_dap_START     (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT9_periph_clkstat9_carm_dap_END       (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT9_periph_clkstat9_carm_atb_START     (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT9_periph_clkstat9_carm_atb_END       (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT9_periph_clkstat9_carm_lbus_START    (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT9_periph_clkstat9_carm_lbus_END      (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT9_periph_clkstat9_carm_kernel_START  (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT9_periph_clkstat9_carm_kernel_END    (3)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_PERIPH_CLKEN10_UNION
 �ṹ˵��  : SC_PERIPH_CLKEN10 �Ĵ����ṹ���塣��ַƫ����:0x260����ֵ:0x00000000�����:32
 �Ĵ���˵��: ����ʱ��ʹ�ܼĴ���10������ʹ������ʱ�ӡ��Ա���д1��ʹ�ܶ�Ӧ��ʱ�ӣ�д0��Ӱ��ʱ��ʹ�ܵ�״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  periph_clken10_ipf_ccpu    : 1;  /* bit[0]    : ccpu���Ƶ�ipf���ſ� */
        unsigned int  periph_clken10_socp_ccpu   : 1;  /* bit[1]    : ccpu���Ƶ�socp���ſ� */
        unsigned int  periph_clken10_seceng_ccpu : 1;  /* bit[2]    : ccpu���Ƶ�seceng���ſ� */
        unsigned int  periph_clken10_harq_ccpu   : 1;  /* bit[3]    : ccpu���Ƶ�harq���ſ� */
        unsigned int  reserved_0                 : 12; /* bit[4-15] : reserved */
        unsigned int  periph_clken10_ipf_mcu     : 1;  /* bit[16]   : mcu���Ƶ�ipf���ſ� */
        unsigned int  periph_clken10_socp_mcu    : 1;  /* bit[17]   : mcu���Ƶ�socp���ſ� */
        unsigned int  periph_clken10_seceng_mcu  : 1;  /* bit[18]   : mcu���Ƶ�seceng���ſ� */
        unsigned int  periph_clken10_harq_mcu    : 1;  /* bit[19]   : mcu���Ƶ�harq���ſ� */
        unsigned int  reserved_1                 : 12; /* bit[20-31]: reserved */
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_CLKEN10_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN10_periph_clken10_ipf_ccpu_START     (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN10_periph_clken10_ipf_ccpu_END       (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN10_periph_clken10_socp_ccpu_START    (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN10_periph_clken10_socp_ccpu_END      (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN10_periph_clken10_seceng_ccpu_START  (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN10_periph_clken10_seceng_ccpu_END    (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN10_periph_clken10_harq_ccpu_START    (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN10_periph_clken10_harq_ccpu_END      (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN10_periph_clken10_ipf_mcu_START      (16)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN10_periph_clken10_ipf_mcu_END        (16)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN10_periph_clken10_socp_mcu_START     (17)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN10_periph_clken10_socp_mcu_END       (17)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN10_periph_clken10_seceng_mcu_START   (18)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN10_periph_clken10_seceng_mcu_END     (18)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN10_periph_clken10_harq_mcu_START     (19)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN10_periph_clken10_harq_mcu_END       (19)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_PERIPH_CLKDIS10_UNION
 �ṹ˵��  : SC_PERIPH_CLKDIS10 �Ĵ����ṹ���塣��ַƫ����:0x264����ֵ:0x00000000�����:32
 �Ĵ���˵��: ����ʱ�ӽ�ֹ�Ĵ���10�����ڽ�ֹ����ʱ�ӡ��Ա���д1����ֹ��Ӧ��ʱ�ӣ�д0��Ӱ��ʱ��ʹ�ܵ�״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  periph_clkdis10_ipf_ccpu    : 1;  /* bit[0]    : ccpu���Ƶ�ipf���ſ� */
        unsigned int  periph_clkdis10_socp_ccpu   : 1;  /* bit[1]    : ccpu���Ƶ�socp���ſ� */
        unsigned int  periph_clkdis10_seceng_ccpu : 1;  /* bit[2]    : ccpu���Ƶ�seceng���ſ� */
        unsigned int  periph_clkdis10_harq_ccpu   : 1;  /* bit[3]    : ccpu���Ƶ�harq���ſ� */
        unsigned int  reserved_0                  : 12; /* bit[4-15] : reserved */
        unsigned int  periph_clkdis10_ipf_mcu     : 1;  /* bit[16]   : mcu���Ƶ�ipf���ſ� */
        unsigned int  periph_clkdis10_socp_mcu    : 1;  /* bit[17]   : mcu���Ƶ�socp���ſ� */
        unsigned int  periph_clkdis10_seceng_mcu  : 1;  /* bit[18]   : mcu���Ƶ�seceng���ſ� */
        unsigned int  periph_clkdis10_harq_mcu    : 1;  /* bit[19]   : mcu���Ƶ�harq���ſ� */
        unsigned int  reserved_1                  : 12; /* bit[20-31]: reserved */
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_CLKDIS10_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS10_periph_clkdis10_ipf_ccpu_START     (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS10_periph_clkdis10_ipf_ccpu_END       (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS10_periph_clkdis10_socp_ccpu_START    (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS10_periph_clkdis10_socp_ccpu_END      (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS10_periph_clkdis10_seceng_ccpu_START  (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS10_periph_clkdis10_seceng_ccpu_END    (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS10_periph_clkdis10_harq_ccpu_START    (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS10_periph_clkdis10_harq_ccpu_END      (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS10_periph_clkdis10_ipf_mcu_START      (16)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS10_periph_clkdis10_ipf_mcu_END        (16)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS10_periph_clkdis10_socp_mcu_START     (17)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS10_periph_clkdis10_socp_mcu_END       (17)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS10_periph_clkdis10_seceng_mcu_START   (18)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS10_periph_clkdis10_seceng_mcu_END     (18)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS10_periph_clkdis10_harq_mcu_START     (19)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS10_periph_clkdis10_harq_mcu_END       (19)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT10_UNION
 �ṹ˵��  : SC_PERIPH_CLKSTAT10 �Ĵ����ṹ���塣��ַƫ����:0x268����ֵ:0x00040004�����:32
 �Ĵ���˵��: ����ʱ��״̬�Ĵ���10�����ڻض�������ʱ�ӵ�״̬������ʱ�ӿ����ź��辭����CRG�н���ͬ��������ˣ�����ļĴ���ֵ���ӳ���Ӧʱ����ļ������ں��������Ӧʱ��״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  periph_clkstat10_ipf_ccpu    : 1;  /* bit[0]    : ccpu���Ƶ�ipf���ſ� */
        unsigned int  periph_clkstat10_socp_ccpu   : 1;  /* bit[1]    : ccpu���Ƶ�socp���ſ� */
        unsigned int  periph_clkstat10_seceng_ccpu : 1;  /* bit[2]    : ccpu���Ƶ�seceng���ſ� */
        unsigned int  periph_clkstat10_harq_ccpu   : 1;  /* bit[3]    : ccpu���Ƶ�harq���ſ� */
        unsigned int  reserved_0                   : 12; /* bit[4-15] : reserved */
        unsigned int  periph_clkstat10_ipf_mcu     : 1;  /* bit[16]   : mcu���Ƶ�ipf���ſ� */
        unsigned int  periph_clkstat10_socp_mcu    : 1;  /* bit[17]   : mcu���Ƶ�socp���ſ� */
        unsigned int  periph_clkstat10_seceng_mcu  : 1;  /* bit[18]   : mcu���Ƶ�seceng���ſ� */
        unsigned int  periph_clkstat10_harq_mcu    : 1;  /* bit[19]   : mcu���Ƶ�harq���ſ� */
        unsigned int  reserved_1                   : 12; /* bit[20-31]: reserved */
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT10_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT10_periph_clkstat10_ipf_ccpu_START     (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT10_periph_clkstat10_ipf_ccpu_END       (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT10_periph_clkstat10_socp_ccpu_START    (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT10_periph_clkstat10_socp_ccpu_END      (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT10_periph_clkstat10_seceng_ccpu_START  (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT10_periph_clkstat10_seceng_ccpu_END    (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT10_periph_clkstat10_harq_ccpu_START    (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT10_periph_clkstat10_harq_ccpu_END      (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT10_periph_clkstat10_ipf_mcu_START      (16)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT10_periph_clkstat10_ipf_mcu_END        (16)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT10_periph_clkstat10_socp_mcu_START     (17)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT10_periph_clkstat10_socp_mcu_END       (17)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT10_periph_clkstat10_seceng_mcu_START   (18)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT10_periph_clkstat10_seceng_mcu_END     (18)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT10_periph_clkstat10_harq_mcu_START     (19)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT10_periph_clkstat10_harq_mcu_END       (19)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_PERIPH_CLKEN12_UNION
 �ṹ˵��  : SC_PERIPH_CLKEN12 �Ĵ����ṹ���塣��ַƫ����:0x270����ֵ:0x00000000�����:32
 �Ĵ���˵��: ����ʱ��ʹ�ܼĴ���12������ʹ������ʱ�ӡ��Ա���д1��ʹ�ܶ�Ӧ��ʱ�ӣ�д0��Ӱ��ʱ��ʹ�ܵ�״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  periph_clken12_hifi_src       : 1;  /* bit[0]    : hifi ��Ƶǰsrcʱ���ſ� */
        unsigned int  periph_clken12_mmc0_src       : 1;  /* bit[1]    : mmc0 ��Ƶǰsrcʱ���ſ� */
        unsigned int  periph_clken12_mmc1_src       : 1;  /* bit[2]    : mmc1 ��Ƶǰsrcʱ���ſ� */
        unsigned int  periph_clken12_mmc2_src       : 1;  /* bit[3]    : mmc2 ��Ƶǰsrcʱ���ſ� */
        unsigned int  periph_clken12_syspll_div_src : 1;  /* bit[4]    : syspll div ��Ƶǰsrcʱ���ſ� */
        unsigned int  periph_clken12_tpiu_src       : 1;  /* bit[5]    : tpiu ��Ƶǰsrcʱ���ſ� */
        unsigned int  periph_clken12_mmc0_hf        : 1;  /* bit[6]    : mmc0 �����Ƶʱ���ſ� */
        unsigned int  periph_clken12_mmc1_hf        : 1;  /* bit[7]    : mmc1 �����Ƶʱ���ſ� */
        unsigned int  periph_clken12_pll_test_src   : 1;  /* bit[8]    : pll test��Ƶǰʱ���ſ� */
        unsigned int  periph_clken12_codec_soc      : 1;  /* bit[9]    : codecʱ��soc��ʱ���ſ� */
        unsigned int  periph_clken12_media          : 1;  /* bit[10]   : media��ϵͳʱ��ǰ���ſ� */
        unsigned int  reserved                      : 21; /* bit[11-31]: ʱ��ʹ�ܶ������£�д1ʱ�Ӵ򿪣���
                                                                         dsppll_48m_gatedʱ�� */
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_CLKEN12_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN12_periph_clken12_hifi_src_START        (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN12_periph_clken12_hifi_src_END          (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN12_periph_clken12_mmc0_src_START        (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN12_periph_clken12_mmc0_src_END          (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN12_periph_clken12_mmc1_src_START        (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN12_periph_clken12_mmc1_src_END          (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN12_periph_clken12_mmc2_src_START        (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN12_periph_clken12_mmc2_src_END          (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN12_periph_clken12_syspll_div_src_START  (4)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN12_periph_clken12_syspll_div_src_END    (4)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN12_periph_clken12_tpiu_src_START        (5)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN12_periph_clken12_tpiu_src_END          (5)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN12_periph_clken12_mmc0_hf_START         (6)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN12_periph_clken12_mmc0_hf_END           (6)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN12_periph_clken12_mmc1_hf_START         (7)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN12_periph_clken12_mmc1_hf_END           (7)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN12_periph_clken12_pll_test_src_START    (8)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN12_periph_clken12_pll_test_src_END      (8)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN12_periph_clken12_codec_soc_START       (9)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN12_periph_clken12_codec_soc_END         (9)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN12_periph_clken12_media_START           (10)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN12_periph_clken12_media_END             (10)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_PERIPH_CLKDIS12_UNION
 �ṹ˵��  : SC_PERIPH_CLKDIS12 �Ĵ����ṹ���塣��ַƫ����:0x274����ֵ:0x00000000�����:32
 �Ĵ���˵��: ����ʱ�ӽ�ֹ�Ĵ���12�����ڽ�ֹ����ʱ�ӡ��Ա���д1����ֹ��Ӧ��ʱ�ӣ�д0��Ӱ��ʱ��ʹ�ܵ�״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  periph_clkdis12_hifi_src       : 1;  /* bit[0]    : hifi ��Ƶǰsrcʱ���ſ� */
        unsigned int  periph_clkdis12_mmc0_src       : 1;  /* bit[1]    : mmc0 ��Ƶǰsrcʱ���ſ� */
        unsigned int  periph_clkdis12_mmc1_src       : 1;  /* bit[2]    : mmc1 ��Ƶǰsrcʱ���ſ� */
        unsigned int  periph_clkdis12_mmc2_src       : 1;  /* bit[3]    : mmc2 ��Ƶǰsrcʱ���ſ� */
        unsigned int  periph_clkdis12_syspll_div_src : 1;  /* bit[4]    : syspll div ��Ƶǰsrcʱ���ſ� */
        unsigned int  periph_clkdis12_tpiu_src       : 1;  /* bit[5]    : tpiu ��Ƶǰsrcʱ���ſ� */
        unsigned int  periph_clkdis12_mmc0_hf        : 1;  /* bit[6]    : mmc0 �����Ƶʱ���ſ� */
        unsigned int  periph_clkdis12_mmc1_hf        : 1;  /* bit[7]    : mmc1 �����Ƶʱ���ſ� */
        unsigned int  periph_clkdis12_pll_test_src   : 1;  /* bit[8]    : pll test��Ƶǰʱ���ſ� */
        unsigned int  periph_clkdis12_codec_soc      : 1;  /* bit[9]    : codecʱ��soc��ʱ���ſ� */
        unsigned int  periph_clkdis12_media          : 1;  /* bit[10]   : media��ϵͳʱ��ǰ���ſ� */
        unsigned int  reserved                       : 21; /* bit[11-31]: ʱ�ӽ�ֹ�������£�д1ʱ�ӹرգ���
                                                                          dsppll_48m_gatedʱ�� */
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_CLKDIS12_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS12_periph_clkdis12_hifi_src_START        (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS12_periph_clkdis12_hifi_src_END          (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS12_periph_clkdis12_mmc0_src_START        (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS12_periph_clkdis12_mmc0_src_END          (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS12_periph_clkdis12_mmc1_src_START        (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS12_periph_clkdis12_mmc1_src_END          (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS12_periph_clkdis12_mmc2_src_START        (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS12_periph_clkdis12_mmc2_src_END          (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS12_periph_clkdis12_syspll_div_src_START  (4)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS12_periph_clkdis12_syspll_div_src_END    (4)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS12_periph_clkdis12_tpiu_src_START        (5)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS12_periph_clkdis12_tpiu_src_END          (5)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS12_periph_clkdis12_mmc0_hf_START         (6)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS12_periph_clkdis12_mmc0_hf_END           (6)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS12_periph_clkdis12_mmc1_hf_START         (7)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS12_periph_clkdis12_mmc1_hf_END           (7)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS12_periph_clkdis12_pll_test_src_START    (8)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS12_periph_clkdis12_pll_test_src_END      (8)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS12_periph_clkdis12_codec_soc_START       (9)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS12_periph_clkdis12_codec_soc_END         (9)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS12_periph_clkdis12_media_START           (10)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS12_periph_clkdis12_media_END             (10)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT12_UNION
 �ṹ˵��  : SC_PERIPH_CLKSTAT12 �Ĵ����ṹ���塣��ַƫ����:0x278����ֵ:0x0000003F�����:32
 �Ĵ���˵��: ����ʱ��״̬�Ĵ���12�����ڻض�������ʱ�ӵ�״̬������ʱ�ӿ����ź��辭����CRG�н���ͬ��������ˣ�����ļĴ���ֵ���ӳ���Ӧʱ����ļ������ں��������Ӧʱ��״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  periph_clkstat12_hifi_src       : 1;  /* bit[0]    : hifi ��Ƶǰsrcʱ���ſ� */
        unsigned int  periph_clkstat12_mmc0_src       : 1;  /* bit[1]    : mmc0 ��Ƶǰsrcʱ���ſ� */
        unsigned int  periph_clkstat12_mmc1_src       : 1;  /* bit[2]    : mmc1 ��Ƶǰsrcʱ���ſ� */
        unsigned int  periph_clkstat12_mmc2_src       : 1;  /* bit[3]    : mmc2 ��Ƶǰsrcʱ���ſ� */
        unsigned int  periph_clkstat12_syspll_div_src : 1;  /* bit[4]    : syspll div ��Ƶǰsrcʱ���ſ� */
        unsigned int  periph_clkstat12_tpiu_src       : 1;  /* bit[5]    : tpiu ��Ƶǰsrcʱ���ſ� */
        unsigned int  periph_clkstat12_mmc0_hf        : 1;  /* bit[6]    : mmc0 �����Ƶʱ���ſ� */
        unsigned int  periph_clkstat12_mmc1_hf        : 1;  /* bit[7]    : mmc1 �����Ƶʱ���ſ� */
        unsigned int  periph_clkstat12_pll_test_src   : 1;  /* bit[8]    : pll test��Ƶǰʱ���ſ� */
        unsigned int  periph_clkstat12_codec_soc      : 1;  /* bit[9]    : codecʱ��soc��ʱ���ſ� */
        unsigned int  periph_clkstat12_media          : 1;  /* bit[10]   : media��ϵͳʱ��ǰ���ſ� */
        unsigned int  reserved                        : 21; /* bit[11-31]: ʱ��״̬�������£��ߵ�ƽ��ʾʱ�Ӵ򿪣���
                                                                           dsppll_48m_gatedʱ�� */
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT12_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT12_periph_clkstat12_hifi_src_START        (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT12_periph_clkstat12_hifi_src_END          (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT12_periph_clkstat12_mmc0_src_START        (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT12_periph_clkstat12_mmc0_src_END          (1)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT12_periph_clkstat12_mmc1_src_START        (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT12_periph_clkstat12_mmc1_src_END          (2)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT12_periph_clkstat12_mmc2_src_START        (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT12_periph_clkstat12_mmc2_src_END          (3)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT12_periph_clkstat12_syspll_div_src_START  (4)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT12_periph_clkstat12_syspll_div_src_END    (4)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT12_periph_clkstat12_tpiu_src_START        (5)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT12_periph_clkstat12_tpiu_src_END          (5)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT12_periph_clkstat12_mmc0_hf_START         (6)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT12_periph_clkstat12_mmc0_hf_END           (6)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT12_periph_clkstat12_mmc1_hf_START         (7)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT12_periph_clkstat12_mmc1_hf_END           (7)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT12_periph_clkstat12_pll_test_src_START    (8)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT12_periph_clkstat12_pll_test_src_END      (8)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT12_periph_clkstat12_codec_soc_START       (9)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT12_periph_clkstat12_codec_soc_END         (9)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT12_periph_clkstat12_media_START           (10)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT12_periph_clkstat12_media_END             (10)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_PERIPH_CLKEN14_UNION
 �ṹ˵��  : SC_PERIPH_CLKEN14 �Ĵ����ṹ���塣��ַƫ����:0x280����ֵ:0x00000000�����:32
 �Ĵ���˵��: ����ʱ��ʹ�ܼĴ���14������ʹ������ʱ�ӡ��Ա���д1��ʹ�ܶ�Ӧ��ʱ�ӣ�д0��Ӱ��ʱ��ʹ�ܵ�״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  periph_clken14_reserved : 32; /* bit[0-31]: reserved */
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_CLKEN14_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN14_periph_clken14_reserved_START  (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKEN14_periph_clken14_reserved_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_PERIPH_CLKDIS14_UNION
 �ṹ˵��  : SC_PERIPH_CLKDIS14 �Ĵ����ṹ���塣��ַƫ����:0x284����ֵ:0x00000000�����:32
 �Ĵ���˵��: ����ʱ�ӽ�ֹ�Ĵ���14�����ڽ�ֹ����ʱ�ӡ��Ա���д1����ֹ��Ӧ��ʱ�ӣ�д0��Ӱ��ʱ��ʹ�ܵ�״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  periph_clkdis14_reserved : 32; /* bit[0-31]: reserved */
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_CLKDIS14_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS14_periph_clkdis14_reserved_START  (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKDIS14_periph_clkdis14_reserved_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT14_UNION
 �ṹ˵��  : SC_PERIPH_CLKSTAT14 �Ĵ����ṹ���塣��ַƫ����:0x288����ֵ:0x00000000�����:32
 �Ĵ���˵��: ����ʱ��״̬�Ĵ���14�����ڻض�������ʱ�ӵ�״̬������ʱ�ӿ����ź��辭����CRG�н���ͬ��������ˣ�����ļĴ���ֵ���ӳ���Ӧʱ����ļ������ں��������Ӧʱ��״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  periph_clkstat14_reserved : 32; /* bit[0-31]: reserved */
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT14_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT14_periph_clkstat14_reserved_START  (0)
#define SOC_PERI_SCTRL_SC_PERIPH_CLKSTAT14_periph_clkstat14_reserved_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_PERIPH_RSTEN0_UNION
 �ṹ˵��  : SC_PERIPH_RSTEN0 �Ĵ����ṹ���塣��ַƫ����:0x300����ֵ:0x00000000�����:32
 �Ĵ���˵��: �踴λʹ�ܼĴ���0������ʹ�����踴λ���Ա���д1����ӦIP���븴λ״̬��д0��Ӱ�츴λ״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  periph_rsten0_mmc0        : 1;  /* bit[0]   : mmc0��λ */
        unsigned int  periph_rsten0_mmc1        : 1;  /* bit[1]   : mmc1��λ */
        unsigned int  periph_rsten0_mmc2        : 1;  /* bit[2]   : mmc2��λ */
        unsigned int  periph_rsten0_nandc       : 1;  /* bit[3]   : nandc��λ */
        unsigned int  periph_rsten0_usbotg_bus  : 1;  /* bit[4]   : usbotg���߸�λ */
        unsigned int  periph_rsten0_por_picophy : 1;  /* bit[5]   : picophy �ϵ縴λ */
        unsigned int  periph_rsten0_usbotg      : 1;  /* bit[6]   : usbotg����ʱ�� */
        unsigned int  periph_rsten0_usbotg_32k  : 1;  /* bit[7]   : usbotg 32kʱ�Ӹ�λ */
        unsigned int  reserved                  : 24; /* bit[8-31]: ��λʹ�ܶ������£�д1��λʹ�ܣ���
                                                                    ���� */
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_RSTEN0_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN0_periph_rsten0_mmc0_START         (0)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN0_periph_rsten0_mmc0_END           (0)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN0_periph_rsten0_mmc1_START         (1)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN0_periph_rsten0_mmc1_END           (1)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN0_periph_rsten0_mmc2_START         (2)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN0_periph_rsten0_mmc2_END           (2)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN0_periph_rsten0_nandc_START        (3)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN0_periph_rsten0_nandc_END          (3)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN0_periph_rsten0_usbotg_bus_START   (4)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN0_periph_rsten0_usbotg_bus_END     (4)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN0_periph_rsten0_por_picophy_START  (5)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN0_periph_rsten0_por_picophy_END    (5)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN0_periph_rsten0_usbotg_START       (6)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN0_periph_rsten0_usbotg_END         (6)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN0_periph_rsten0_usbotg_32k_START   (7)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN0_periph_rsten0_usbotg_32k_END     (7)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_PERIPH_RSTDIS0_UNION
 �ṹ˵��  : SC_PERIPH_RSTDIS0 �Ĵ����ṹ���塣��ַƫ����:0x304����ֵ:0x00000000�����:32
 �Ĵ���˵��: ���踴λ��ֹ�Ĵ���0�����ڽ�ֹ���踴λ���Ա���д1����Ӧ��������λ��д0��Ӱ�츴λʹ�ܵ�״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  periph_rstdis0_mmc0        : 1;  /* bit[0]   : mmc0��λ */
        unsigned int  periph_rstdis0_mmc1        : 1;  /* bit[1]   : mmc1��λ */
        unsigned int  periph_rstdis0_mmc2        : 1;  /* bit[2]   : mmc2��λ */
        unsigned int  periph_rstdis0_nandc       : 1;  /* bit[3]   : nandc��λ */
        unsigned int  periph_rstdis0_usbotg_bus  : 1;  /* bit[4]   : usbotg���߸�λ */
        unsigned int  periph_rstdis0_por_picophy : 1;  /* bit[5]   : picophy �ϵ縴λ */
        unsigned int  periph_rstdis0_usbotg      : 1;  /* bit[6]   : usbotg����ʱ�� */
        unsigned int  periph_rstdis0_usbotg_32k  : 1;  /* bit[7]   : usbotg 32kʱ�Ӹ�λ */
        unsigned int  reserved                   : 24; /* bit[8-31]: ��λ��ֹ�������£�д1��λ�������
                                                                     ���� */
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_RSTDIS0_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS0_periph_rstdis0_mmc0_START         (0)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS0_periph_rstdis0_mmc0_END           (0)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS0_periph_rstdis0_mmc1_START         (1)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS0_periph_rstdis0_mmc1_END           (1)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS0_periph_rstdis0_mmc2_START         (2)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS0_periph_rstdis0_mmc2_END           (2)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS0_periph_rstdis0_nandc_START        (3)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS0_periph_rstdis0_nandc_END          (3)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS0_periph_rstdis0_usbotg_bus_START   (4)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS0_periph_rstdis0_usbotg_bus_END     (4)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS0_periph_rstdis0_por_picophy_START  (5)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS0_periph_rstdis0_por_picophy_END    (5)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS0_periph_rstdis0_usbotg_START       (6)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS0_periph_rstdis0_usbotg_END         (6)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS0_periph_rstdis0_usbotg_32k_START   (7)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS0_periph_rstdis0_usbotg_32k_END     (7)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT0_UNION
 �ṹ˵��  : SC_PERIPH_RSTSTAT0 �Ĵ����ṹ���塣��ַƫ����:0x308����ֵ:0xFFFFFFF7�����:32
 �Ĵ���˵��: ���踴λ״̬�Ĵ���0�����ڻض������踴λ��״̬�����踴λ�����ź��辭��ͬ��������ˣ�����ļĴ���ֵ���ӳ���Ӧʱ����ļ������ں��������Ӧ�⸴λ״̬��1Ϊ��λ��0Ϊ�Ǹ�λ״̬��Ĭ��CARM��ϵͳ���ڽ⸴λ״̬��AARM��ZSP��HIFI��BBP��ϵͳ���ڸ�λ״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  periph_rststat0_mmc0        : 1;  /* bit[0]   : mmc0��λ */
        unsigned int  periph_rststat0_mmc1        : 1;  /* bit[1]   : mmc1��λ */
        unsigned int  periph_rststat0_mmc2        : 1;  /* bit[2]   : mmc2��λ */
        unsigned int  periph_rststat0_nandc       : 1;  /* bit[3]   : nandc��λ */
        unsigned int  periph_rststat0_usbotg_bus  : 1;  /* bit[4]   : usbotg���߸�λ */
        unsigned int  periph_rststat0_por_picophy : 1;  /* bit[5]   : picophy �ϵ縴λ */
        unsigned int  periph_rststat0_usbotg      : 1;  /* bit[6]   : usbotg����ʱ�� */
        unsigned int  periph_rststat0_usbotg_32k  : 1;  /* bit[7]   : usbotg 32kʱ�Ӹ�λ */
        unsigned int  reserved                    : 24; /* bit[8-31]: ��λ״̬�������£��ߵ�ƽ��ʾ���ڸ�λ��
                                                                      ���� */
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT0_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT0_periph_rststat0_mmc0_START         (0)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT0_periph_rststat0_mmc0_END           (0)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT0_periph_rststat0_mmc1_START         (1)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT0_periph_rststat0_mmc1_END           (1)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT0_periph_rststat0_mmc2_START         (2)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT0_periph_rststat0_mmc2_END           (2)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT0_periph_rststat0_nandc_START        (3)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT0_periph_rststat0_nandc_END          (3)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT0_periph_rststat0_usbotg_bus_START   (4)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT0_periph_rststat0_usbotg_bus_END     (4)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT0_periph_rststat0_por_picophy_START  (5)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT0_periph_rststat0_por_picophy_END    (5)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT0_periph_rststat0_usbotg_START       (6)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT0_periph_rststat0_usbotg_END         (6)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT0_periph_rststat0_usbotg_32k_START   (7)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT0_periph_rststat0_usbotg_32k_END     (7)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_PERIPH_RSTEN1_UNION
 �ṹ˵��  : SC_PERIPH_RSTEN1 �Ĵ����ṹ���塣��ַƫ����:0x310����ֵ:0x00000000�����:32
 �Ĵ���˵��: �踴λʹ�ܼĴ���1������ʹ�����踴λ���Ա���д1����ӦIP���븴λ״̬��д0��Ӱ�츴λ״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  periph_rsten1_hifi      : 1;  /* bit[0]   : hifi��λ */
        unsigned int  reserved_0              : 1;  /* bit[1]   : reserved */
        unsigned int  reserved_1              : 1;  /* bit[2]   : reserved */
        unsigned int  reserved_2              : 1;  /* bit[3]   : reserved */
        unsigned int  reserved_3              : 1;  /* bit[4]   : reserved */
        unsigned int  periph_rsten1_digacodec : 1;  /* bit[5]   : digital codec��λ */
        unsigned int  reserved_4              : 26; /* bit[6-31]: ��λʹ�ܶ������£�д1��λʹ�ܣ���
                                                                  ���� */
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_RSTEN1_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN1_periph_rsten1_hifi_START       (0)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN1_periph_rsten1_hifi_END         (0)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN1_periph_rsten1_digacodec_START  (5)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN1_periph_rsten1_digacodec_END    (5)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_PERIPH_RSTDIS1_UNION
 �ṹ˵��  : SC_PERIPH_RSTDIS1 �Ĵ����ṹ���塣��ַƫ����:0x314����ֵ:0x00000000�����:32
 �Ĵ���˵��: ���踴λ��ֹ�Ĵ���1�����ڽ�ֹ���踴λ���Ա���д1����Ӧ��������λ��д0��Ӱ�츴λʹ�ܵ�״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  periph_rstdis1_hifi      : 1;  /* bit[0]   : hifi��λ */
        unsigned int  reserved_0               : 1;  /* bit[1]   : reserved */
        unsigned int  reserved_1               : 1;  /* bit[2]   : reserved */
        unsigned int  reserved_2               : 1;  /* bit[3]   : reserved */
        unsigned int  reserved_3               : 1;  /* bit[4]   : reserved */
        unsigned int  periph_rstdis1_digacodec : 1;  /* bit[5]   : digital codec��λ */
        unsigned int  reserved_4               : 26; /* bit[6-31]: ��λ��ֹ�������£�д1��λ�������
                                                                   ���� */
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_RSTDIS1_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS1_periph_rstdis1_hifi_START       (0)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS1_periph_rstdis1_hifi_END         (0)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS1_periph_rstdis1_digacodec_START  (5)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS1_periph_rstdis1_digacodec_END    (5)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT1_UNION
 �ṹ˵��  : SC_PERIPH_RSTSTAT1 �Ĵ����ṹ���塣��ַƫ����:0x318����ֵ:0xFFFFFFFF�����:32
 �Ĵ���˵��: ���踴λ״̬�Ĵ���1�����ڻض������踴λ��״̬�����踴λ�����ź��辭��ͬ��������ˣ�����ļĴ���ֵ���ӳ���Ӧʱ����ļ������ں��������Ӧ�⸴λ״̬��1Ϊ��λ��0Ϊ�Ǹ�λ״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  periph_rststat1_hifi      : 1;  /* bit[0]   : hifi��λ */
        unsigned int  reserved_0                : 1;  /* bit[1]   : reserved */
        unsigned int  reserved_1                : 1;  /* bit[2]   : reserved */
        unsigned int  reserved_2                : 1;  /* bit[3]   : reserved */
        unsigned int  reserved_3                : 1;  /* bit[4]   : reserved */
        unsigned int  periph_rststat1_digacodec : 1;  /* bit[5]   : digital codec��λ */
        unsigned int  reserved_4                : 26; /* bit[6-31]: ��λ״̬�������£��ߵ�ƽ��ʾ���ڸ�λ��
                                                                    ���� */
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT1_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT1_periph_rststat1_hifi_START       (0)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT1_periph_rststat1_hifi_END         (0)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT1_periph_rststat1_digacodec_START  (5)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT1_periph_rststat1_digacodec_END    (5)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_PERIPH_RSTEN2_UNION
 �ṹ˵��  : SC_PERIPH_RSTEN2 �Ĵ����ṹ���塣��ַƫ����:0x320����ֵ:0x00000000�����:32
 �Ĵ���˵��: �踴λʹ�ܼĴ���2������ʹ�����踴λ���Ա���д1����ӦIP���븴λ״̬��д0��Ӱ�츴λ״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  periph_rsten2_ipf    : 1;  /* bit[0]   : ipf��λ */
        unsigned int  periph_rsten2_socp   : 1;  /* bit[1]   : socp��λ */
        unsigned int  periph_rsten2_dmac   : 1;  /* bit[2]   : dmac��λ */
        unsigned int  periph_rsten2_seceng : 1;  /* bit[3]   : seceng��λ */
        unsigned int  periph_rsten2_abb    : 1;  /* bit[4]   : abb��λ */
        unsigned int  periph_rsten2_hpm0   : 1;  /* bit[5]   : hpm0��λ */
        unsigned int  periph_rsten2_hpm1   : 1;  /* bit[6]   : hpm1��λ */
        unsigned int  periph_rsten2_hpm2   : 1;  /* bit[7]   : hpm2��λ */
        unsigned int  periph_rsten2_hpm3   : 1;  /* bit[8]   : hpm3��λ */
        unsigned int  reserved             : 23; /* bit[9-31]: ��λʹ�ܶ������£�д1��λʹ�ܣ���
                                                               ���� */
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_RSTEN2_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN2_periph_rsten2_ipf_START     (0)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN2_periph_rsten2_ipf_END       (0)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN2_periph_rsten2_socp_START    (1)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN2_periph_rsten2_socp_END      (1)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN2_periph_rsten2_dmac_START    (2)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN2_periph_rsten2_dmac_END      (2)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN2_periph_rsten2_seceng_START  (3)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN2_periph_rsten2_seceng_END    (3)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN2_periph_rsten2_abb_START     (4)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN2_periph_rsten2_abb_END       (4)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN2_periph_rsten2_hpm0_START    (5)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN2_periph_rsten2_hpm0_END      (5)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN2_periph_rsten2_hpm1_START    (6)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN2_periph_rsten2_hpm1_END      (6)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN2_periph_rsten2_hpm2_START    (7)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN2_periph_rsten2_hpm2_END      (7)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN2_periph_rsten2_hpm3_START    (8)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN2_periph_rsten2_hpm3_END      (8)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_PERIPH_RSTDIS2_UNION
 �ṹ˵��  : SC_PERIPH_RSTDIS2 �Ĵ����ṹ���塣��ַƫ����:0x324����ֵ:0x00000000�����:32
 �Ĵ���˵��: ���踴λ��ֹ�Ĵ���2�����ڽ�ֹ���踴λ���Ա���д1����Ӧ��������λ��д0��Ӱ�츴λʹ�ܵ�״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  periph_rstdis2_ipf    : 1;  /* bit[0]   : ipf��λ */
        unsigned int  periph_rstdis2_socp   : 1;  /* bit[1]   : socp��λ */
        unsigned int  periph_rstdis2_dmac   : 1;  /* bit[2]   : dmac��λ */
        unsigned int  periph_rstdis2_seceng : 1;  /* bit[3]   : seceng��λ */
        unsigned int  periph_rstdis2_abb    : 1;  /* bit[4]   : abb��λ */
        unsigned int  periph_rstdis2_hpm0   : 1;  /* bit[5]   : hpm0��λ */
        unsigned int  periph_rstdis2_hpm1   : 1;  /* bit[6]   : hpm1��λ */
        unsigned int  periph_rstdis2_hpm2   : 1;  /* bit[7]   : hpm2��λ */
        unsigned int  periph_rstdis2_hpm3   : 1;  /* bit[8]   : hpm3��λ */
        unsigned int  reserved              : 23; /* bit[9-31]: ��λʹ�ܶ������£�д1��λ�������
                                                                ���� */
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_RSTDIS2_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS2_periph_rstdis2_ipf_START     (0)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS2_periph_rstdis2_ipf_END       (0)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS2_periph_rstdis2_socp_START    (1)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS2_periph_rstdis2_socp_END      (1)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS2_periph_rstdis2_dmac_START    (2)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS2_periph_rstdis2_dmac_END      (2)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS2_periph_rstdis2_seceng_START  (3)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS2_periph_rstdis2_seceng_END    (3)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS2_periph_rstdis2_abb_START     (4)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS2_periph_rstdis2_abb_END       (4)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS2_periph_rstdis2_hpm0_START    (5)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS2_periph_rstdis2_hpm0_END      (5)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS2_periph_rstdis2_hpm1_START    (6)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS2_periph_rstdis2_hpm1_END      (6)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS2_periph_rstdis2_hpm2_START    (7)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS2_periph_rstdis2_hpm2_END      (7)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS2_periph_rstdis2_hpm3_START    (8)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS2_periph_rstdis2_hpm3_END      (8)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT2_UNION
 �ṹ˵��  : SC_PERIPH_RSTSTAT2 �Ĵ����ṹ���塣��ַƫ����:0x328����ֵ:0xFFFFFFF7�����:32
 �Ĵ���˵��: ���踴λ״̬�Ĵ���2�����ڻض������踴λ��״̬�����踴λ�����ź��辭��ͬ��������ˣ�����ļĴ���ֵ���ӳ���Ӧʱ����ļ������ں��������Ӧ�⸴λ״̬��1Ϊ��λ��0Ϊ�Ǹ�λ״̬��Ĭ��CARM��ϵͳ���ڽ⸴λ״̬��AARM��ZSP��HIFI��BBP��ϵͳ���ڸ�λ״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  periph_rststat2_ipf    : 1;  /* bit[0]   : ipf��λ */
        unsigned int  periph_rststat2_socp   : 1;  /* bit[1]   : socp��λ */
        unsigned int  periph_rststat2_dmac   : 1;  /* bit[2]   : dmac��λ */
        unsigned int  periph_rststat2_seceng : 1;  /* bit[3]   : seceng��λ */
        unsigned int  periph_rststat2_abb    : 1;  /* bit[4]   : abb��λ */
        unsigned int  periph_rststat2_hpm0   : 1;  /* bit[5]   : hpm0��λ */
        unsigned int  periph_rststat2_hpm1   : 1;  /* bit[6]   : hpm1��λ */
        unsigned int  periph_rststat2_hpm2   : 1;  /* bit[7]   : hpm2��λ */
        unsigned int  periph_rststat2_hpm3   : 1;  /* bit[8]   : hpm3��λ */
        unsigned int  reserved               : 23; /* bit[9-31]: ��λ״̬�������£��ߵ�ƽ��ʾ���ڸ�λ��
                                                                 ���� */
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT2_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT2_periph_rststat2_ipf_START     (0)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT2_periph_rststat2_ipf_END       (0)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT2_periph_rststat2_socp_START    (1)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT2_periph_rststat2_socp_END      (1)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT2_periph_rststat2_dmac_START    (2)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT2_periph_rststat2_dmac_END      (2)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT2_periph_rststat2_seceng_START  (3)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT2_periph_rststat2_seceng_END    (3)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT2_periph_rststat2_abb_START     (4)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT2_periph_rststat2_abb_END       (4)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT2_periph_rststat2_hpm0_START    (5)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT2_periph_rststat2_hpm0_END      (5)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT2_periph_rststat2_hpm1_START    (6)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT2_periph_rststat2_hpm1_END      (6)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT2_periph_rststat2_hpm2_START    (7)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT2_periph_rststat2_hpm2_END      (7)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT2_periph_rststat2_hpm3_START    (8)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT2_periph_rststat2_hpm3_END      (8)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_PERIPH_RSTEN3_UNION
 �ṹ˵��  : SC_PERIPH_RSTEN3 �Ĵ����ṹ���塣��ַƫ����:0x330����ֵ:0x00000000�����:32
 �Ĵ���˵��: �踴λʹ�ܼĴ���3������ʹ�����踴λ���Ա���д1����ӦIP���븴λ״̬��д0��Ӱ�츴λ״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  periph_rsten3_cssys     : 1;  /* bit[0]    : coresight atb tpiu��λ */
        unsigned int  periph_rsten3_i2c0      : 1;  /* bit[1]    : i2c0��λ */
        unsigned int  periph_rsten3_i2c1      : 1;  /* bit[2]    : i2c1��λ */
        unsigned int  periph_rsten3_i2c2      : 1;  /* bit[3]    : i2c2��λ */
        unsigned int  periph_rsten3_i2c3      : 1;  /* bit[4]    : i2c3��λ */
        unsigned int  periph_rsten3_uart1     : 1;  /* bit[5]    : uart1��λ */
        unsigned int  periph_rsten3_uart2     : 1;  /* bit[6]    : uart2��λ */
        unsigned int  periph_rsten3_uart3     : 1;  /* bit[7]    : uart3��λ */
        unsigned int  periph_rsten3_uart4     : 1;  /* bit[8]    : uart4��λ */
        unsigned int  periph_rsten3_ssp       : 1;  /* bit[9]    : ssp��λ */
        unsigned int  periph_rsten3_pwm       : 1;  /* bit[10]   : pwm��λ */
        unsigned int  periph_rsten3_blpwm     : 1;  /* bit[11]   : ����pwm��λ */
        unsigned int  periph_rsten3_tsensor   : 1;  /* bit[12]   : tsensor��λ */
        unsigned int  reserved_0              : 1;  /* bit[13]   : reserved */
        unsigned int  reserved_1              : 1;  /* bit[14]   : reserved */
        unsigned int  reserved_2              : 1;  /* bit[15]   : reserved */
        unsigned int  reserved_3              : 1;  /* bit[16]   : reserved */
        unsigned int  reserved_4              : 1;  /* bit[17]   : reserved */
        unsigned int  periph_rsten3_dapb      : 1;  /* bit[18]   : dapb��λ */
        unsigned int  periph_rsten3_hkadc     : 1;  /* bit[19]   : hkadc��λ */
        unsigned int  periph_rsten3_codec_ssi : 1;  /* bit[20]   : codec ssi ��λ */
        unsigned int  reserved_5              : 11; /* bit[21-31]: ��λ��ֹ�������£�д1��λ�������
                                                                   ���� */
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_RSTEN3_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN3_periph_rsten3_cssys_START      (0)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN3_periph_rsten3_cssys_END        (0)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN3_periph_rsten3_i2c0_START       (1)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN3_periph_rsten3_i2c0_END         (1)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN3_periph_rsten3_i2c1_START       (2)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN3_periph_rsten3_i2c1_END         (2)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN3_periph_rsten3_i2c2_START       (3)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN3_periph_rsten3_i2c2_END         (3)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN3_periph_rsten3_i2c3_START       (4)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN3_periph_rsten3_i2c3_END         (4)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN3_periph_rsten3_uart1_START      (5)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN3_periph_rsten3_uart1_END        (5)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN3_periph_rsten3_uart2_START      (6)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN3_periph_rsten3_uart2_END        (6)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN3_periph_rsten3_uart3_START      (7)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN3_periph_rsten3_uart3_END        (7)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN3_periph_rsten3_uart4_START      (8)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN3_periph_rsten3_uart4_END        (8)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN3_periph_rsten3_ssp_START        (9)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN3_periph_rsten3_ssp_END          (9)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN3_periph_rsten3_pwm_START        (10)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN3_periph_rsten3_pwm_END          (10)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN3_periph_rsten3_blpwm_START      (11)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN3_periph_rsten3_blpwm_END        (11)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN3_periph_rsten3_tsensor_START    (12)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN3_periph_rsten3_tsensor_END      (12)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN3_periph_rsten3_dapb_START       (18)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN3_periph_rsten3_dapb_END         (18)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN3_periph_rsten3_hkadc_START      (19)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN3_periph_rsten3_hkadc_END        (19)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN3_periph_rsten3_codec_ssi_START  (20)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN3_periph_rsten3_codec_ssi_END    (20)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_PERIPH_RSTDIS3_UNION
 �ṹ˵��  : SC_PERIPH_RSTDIS3 �Ĵ����ṹ���塣��ַƫ����:0x334����ֵ:0x00000000�����:32
 �Ĵ���˵��: ���踴λ��ֹ�Ĵ���3�����ڽ�ֹ���踴λ���Ա���д1����Ӧ��������λ��д0��Ӱ�츴λʹ�ܵ�״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  periph_rstdis3_cssys     : 1;  /* bit[0]    : coresight sys��λ */
        unsigned int  periph_rstdis3_i2c0      : 1;  /* bit[1]    : i2c0��λ */
        unsigned int  periph_rstdis3_i2c1      : 1;  /* bit[2]    : i2c1��λ */
        unsigned int  periph_rstdis3_i2c2      : 1;  /* bit[3]    : i2c2��λ */
        unsigned int  periph_rstdis3_i2c3      : 1;  /* bit[4]    : i2c3��λ */
        unsigned int  periph_rstdis3_uart1     : 1;  /* bit[5]    : uart1��λ */
        unsigned int  periph_rstdis3_uart2     : 1;  /* bit[6]    : uart2��λ */
        unsigned int  periph_rstdis3_uart3     : 1;  /* bit[7]    : uart3��λ */
        unsigned int  periph_rstdis3_uart4     : 1;  /* bit[8]    : uart4��λ */
        unsigned int  periph_rstdis3_ssp       : 1;  /* bit[9]    : ssp��λ */
        unsigned int  periph_rstdis3_pwm       : 1;  /* bit[10]   : pwm��λ */
        unsigned int  periph_rstdis3_blpwm     : 1;  /* bit[11]   : ����pwm��λ */
        unsigned int  periph_rstdis3_tsensor   : 1;  /* bit[12]   : tsensor��λ */
        unsigned int  reserved_0               : 1;  /* bit[13]   : reserved */
        unsigned int  reserved_1               : 1;  /* bit[14]   : reserved */
        unsigned int  reserved_2               : 1;  /* bit[15]   : reserved */
        unsigned int  reserved_3               : 1;  /* bit[16]   : reserved */
        unsigned int  reserved_4               : 1;  /* bit[17]   : reserved */
        unsigned int  periph_rstdis3_dapb      : 1;  /* bit[18]   : dapb��λ */
        unsigned int  periph_rstdis3_hkadc     : 1;  /* bit[19]   : hkadc��λ */
        unsigned int  periph_rstdis3_codec_ssi : 1;  /* bit[20]   : codec ssi ��λ */
        unsigned int  reserved_5               : 11; /* bit[21-31]: ��λ��ֹ�������£�д1��λ�������
                                                                    ���� */
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_RSTDIS3_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS3_periph_rstdis3_cssys_START      (0)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS3_periph_rstdis3_cssys_END        (0)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS3_periph_rstdis3_i2c0_START       (1)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS3_periph_rstdis3_i2c0_END         (1)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS3_periph_rstdis3_i2c1_START       (2)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS3_periph_rstdis3_i2c1_END         (2)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS3_periph_rstdis3_i2c2_START       (3)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS3_periph_rstdis3_i2c2_END         (3)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS3_periph_rstdis3_i2c3_START       (4)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS3_periph_rstdis3_i2c3_END         (4)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS3_periph_rstdis3_uart1_START      (5)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS3_periph_rstdis3_uart1_END        (5)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS3_periph_rstdis3_uart2_START      (6)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS3_periph_rstdis3_uart2_END        (6)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS3_periph_rstdis3_uart3_START      (7)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS3_periph_rstdis3_uart3_END        (7)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS3_periph_rstdis3_uart4_START      (8)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS3_periph_rstdis3_uart4_END        (8)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS3_periph_rstdis3_ssp_START        (9)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS3_periph_rstdis3_ssp_END          (9)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS3_periph_rstdis3_pwm_START        (10)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS3_periph_rstdis3_pwm_END          (10)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS3_periph_rstdis3_blpwm_START      (11)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS3_periph_rstdis3_blpwm_END        (11)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS3_periph_rstdis3_tsensor_START    (12)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS3_periph_rstdis3_tsensor_END      (12)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS3_periph_rstdis3_dapb_START       (18)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS3_periph_rstdis3_dapb_END         (18)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS3_periph_rstdis3_hkadc_START      (19)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS3_periph_rstdis3_hkadc_END        (19)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS3_periph_rstdis3_codec_ssi_START  (20)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS3_periph_rstdis3_codec_ssi_END    (20)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT3_UNION
 �ṹ˵��  : SC_PERIPH_RSTSTAT3 �Ĵ����ṹ���塣��ַƫ����:0x338����ֵ:0xFFFBFFFE�����:32
 �Ĵ���˵��: ���踴λ״̬�Ĵ���3�����ڻض������踴λ��״̬�����踴λ�����ź��辭��ͬ��������ˣ�����ļĴ���ֵ���ӳ���Ӧʱ����ļ������ں��������Ӧ�⸴λ״̬��1Ϊ��λ��0Ϊ�Ǹ�λ״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  periph_rststat3_cssys     : 1;  /* bit[0]    : coresight sys��λ */
        unsigned int  periph_rststat3_i2c0      : 1;  /* bit[1]    : i2c0��λ */
        unsigned int  periph_rststat3_i2c1      : 1;  /* bit[2]    : i2c1��λ */
        unsigned int  periph_rststat3_i2c2      : 1;  /* bit[3]    : i2c2��λ */
        unsigned int  periph_rststat3_i2c3      : 1;  /* bit[4]    : i2c3��λ */
        unsigned int  periph_rststat3_uart1     : 1;  /* bit[5]    : uart1��λ */
        unsigned int  periph_rststat3_uart2     : 1;  /* bit[6]    : uart2��λ */
        unsigned int  periph_rststat3_uart3     : 1;  /* bit[7]    : uart3��λ */
        unsigned int  periph_rststat3_uart4     : 1;  /* bit[8]    : uart4��λ */
        unsigned int  periph_rststat3_ssp       : 1;  /* bit[9]    : ssp��λ */
        unsigned int  periph_rststat3_pwm       : 1;  /* bit[10]   : pwm��λ */
        unsigned int  periph_rststat3_blpwm     : 1;  /* bit[11]   : ����pwm��λ */
        unsigned int  periph_rststat3_tsensor   : 1;  /* bit[12]   : tsensor��λ */
        unsigned int  reserved_0                : 1;  /* bit[13]   : reserved */
        unsigned int  reserved_1                : 1;  /* bit[14]   : reserved */
        unsigned int  reserved_2                : 1;  /* bit[15]   : reserved */
        unsigned int  reserved_3                : 1;  /* bit[16]   : reserved */
        unsigned int  reserved_4                : 1;  /* bit[17]   : reserved */
        unsigned int  periph_rststat3_dapb      : 1;  /* bit[18]   : dapb��λ */
        unsigned int  periph_rststat3_hkadc     : 1;  /* bit[19]   : hkadc��λ */
        unsigned int  periph_rststat3_codec_ssi : 1;  /* bit[20]   : codec ssi ��λ */
        unsigned int  reserved_5                : 11; /* bit[21-31]: ��λ״̬�������£��ߵ�ƽ��ʾ���ڸ�λ��
                                                                     ���� */
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT3_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT3_periph_rststat3_cssys_START      (0)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT3_periph_rststat3_cssys_END        (0)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT3_periph_rststat3_i2c0_START       (1)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT3_periph_rststat3_i2c0_END         (1)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT3_periph_rststat3_i2c1_START       (2)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT3_periph_rststat3_i2c1_END         (2)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT3_periph_rststat3_i2c2_START       (3)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT3_periph_rststat3_i2c2_END         (3)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT3_periph_rststat3_i2c3_START       (4)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT3_periph_rststat3_i2c3_END         (4)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT3_periph_rststat3_uart1_START      (5)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT3_periph_rststat3_uart1_END        (5)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT3_periph_rststat3_uart2_START      (6)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT3_periph_rststat3_uart2_END        (6)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT3_periph_rststat3_uart3_START      (7)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT3_periph_rststat3_uart3_END        (7)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT3_periph_rststat3_uart4_START      (8)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT3_periph_rststat3_uart4_END        (8)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT3_periph_rststat3_ssp_START        (9)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT3_periph_rststat3_ssp_END          (9)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT3_periph_rststat3_pwm_START        (10)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT3_periph_rststat3_pwm_END          (10)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT3_periph_rststat3_blpwm_START      (11)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT3_periph_rststat3_blpwm_END        (11)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT3_periph_rststat3_tsensor_START    (12)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT3_periph_rststat3_tsensor_END      (12)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT3_periph_rststat3_dapb_START       (18)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT3_periph_rststat3_dapb_END         (18)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT3_periph_rststat3_hkadc_START      (19)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT3_periph_rststat3_hkadc_END        (19)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT3_periph_rststat3_codec_ssi_START  (20)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT3_periph_rststat3_codec_ssi_END    (20)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_PERIPH_RSTEN8_UNION
 �ṹ˵��  : SC_PERIPH_RSTEN8 �Ĵ����ṹ���塣��ַƫ����:0x340����ֵ:0x00000000�����:32
 �Ĵ���˵��: �踴λʹ�ܼĴ���6������ʹ�����踴λ���Ա���д1����ӦIP���븴λ״̬��д0��Ӱ�츴λ״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  periph_rsten8_rs0         : 1;  /* bit[0]    : rs0��λ */
        unsigned int  periph_rsten8_rs2         : 1;  /* bit[1]    : rs2��λ */
        unsigned int  periph_rsten8_rs3         : 1;  /* bit[2]    : rs3��λ */
        unsigned int  periph_rsten8_ms0         : 1;  /* bit[3]    : ms0��λ */
        unsigned int  reserved_0                : 1;  /* bit[4]    : reserved */
        unsigned int  periph_rsten8_ms2         : 1;  /* bit[5]    : ms2��λ */
        unsigned int  periph_rsten8_xg2ram0     : 1;  /* bit[6]    : xg2ram0��λ */
        unsigned int  periph_rsten8_x2sram_tzma : 1;  /* bit[7]    : x2sram��tzma��λ */
        unsigned int  periph_rsten8_sram        : 1;  /* bit[8]    : sram��λ */
        unsigned int  reserved_1                : 1;  /* bit[9]    : reserved */
        unsigned int  periph_rsten8_harq        : 1;  /* bit[10]   : harq��λ */
        unsigned int  reserved_2                : 1;  /* bit[11]   : reserved */
        unsigned int  periph_rsten8_ddrc        : 1;  /* bit[12]   : ddr��λ */
        unsigned int  periph_rsten8_ddrc_apb    : 1;  /* bit[13]   : ddrc apb���߸�λ */
        unsigned int  periph_rsten8_ddrpack_apb : 1;  /* bit[14]   : ddrpack apb���߸�λ */
        unsigned int  reserved_3                : 1;  /* bit[15]   : reserved */
        unsigned int  reserved_4                : 1;  /* bit[16]   : reserved */
        unsigned int  periph_rsten8_ddrt        : 1;  /* bit[17]   : ddrt��λ */
        unsigned int  reserved_5                : 14; /* bit[18-31]: ��λʹ�ܶ������£�д1��λʹ�ܣ���
                                                                     MDM��ϵͳ�е�AXI���߸�λ */
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_RSTEN8_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN8_periph_rsten8_rs0_START          (0)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN8_periph_rsten8_rs0_END            (0)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN8_periph_rsten8_rs2_START          (1)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN8_periph_rsten8_rs2_END            (1)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN8_periph_rsten8_rs3_START          (2)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN8_periph_rsten8_rs3_END            (2)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN8_periph_rsten8_ms0_START          (3)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN8_periph_rsten8_ms0_END            (3)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN8_periph_rsten8_ms2_START          (5)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN8_periph_rsten8_ms2_END            (5)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN8_periph_rsten8_xg2ram0_START      (6)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN8_periph_rsten8_xg2ram0_END        (6)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN8_periph_rsten8_x2sram_tzma_START  (7)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN8_periph_rsten8_x2sram_tzma_END    (7)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN8_periph_rsten8_sram_START         (8)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN8_periph_rsten8_sram_END           (8)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN8_periph_rsten8_harq_START         (10)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN8_periph_rsten8_harq_END           (10)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN8_periph_rsten8_ddrc_START         (12)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN8_periph_rsten8_ddrc_END           (12)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN8_periph_rsten8_ddrc_apb_START     (13)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN8_periph_rsten8_ddrc_apb_END       (13)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN8_periph_rsten8_ddrpack_apb_START  (14)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN8_periph_rsten8_ddrpack_apb_END    (14)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN8_periph_rsten8_ddrt_START         (17)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN8_periph_rsten8_ddrt_END           (17)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_PERIPH_RSTDIS8_UNION
 �ṹ˵��  : SC_PERIPH_RSTDIS8 �Ĵ����ṹ���塣��ַƫ����:0x344����ֵ:0x00000000�����:32
 �Ĵ���˵��: ���踴λ��ֹ�Ĵ���6�����ڽ�ֹ���踴λ���Ա���д1����Ӧ��������λ��д0��Ӱ�츴λʹ�ܵ�״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  periph_rstdis8_rs0         : 1;  /* bit[0]    : rs0��λ */
        unsigned int  periph_rstdis8_rs2         : 1;  /* bit[1]    : rs2��λ */
        unsigned int  periph_rstdis8_rs3         : 1;  /* bit[2]    : rs3��λ */
        unsigned int  periph_rstdis8_ms0         : 1;  /* bit[3]    : ms0��λ */
        unsigned int  reserved_0                 : 1;  /* bit[4]    : reserved */
        unsigned int  periph_rstdis8_ms2         : 1;  /* bit[5]    : ms2��λ */
        unsigned int  periph_rstdis8_xg2ram0     : 1;  /* bit[6]    : xg2ram0��λ */
        unsigned int  periph_rstdis8_x2sram_tzma : 1;  /* bit[7]    : x2sram��tzma��λ */
        unsigned int  periph_rstdis8_sram        : 1;  /* bit[8]    : sram��λ */
        unsigned int  reserved_1                 : 1;  /* bit[9]    : reserved */
        unsigned int  periph_rstdis8_harq        : 1;  /* bit[10]   : harq��λ */
        unsigned int  reserved_2                 : 1;  /* bit[11]   : reserved */
        unsigned int  periph_rstdis8_ddrc        : 1;  /* bit[12]   : ddr��λ */
        unsigned int  periph_rstdis8_ddrc_apb    : 1;  /* bit[13]   : ddrc apb���߸�λ */
        unsigned int  periph_rstdis8_ddrpack_apb : 1;  /* bit[14]   : ddrpack apb���߸�λ */
        unsigned int  reserved_3                 : 1;  /* bit[15]   : reserved */
        unsigned int  reserved_4                 : 1;  /* bit[16]   : reserved */
        unsigned int  periph_rstdis8_ddrt        : 1;  /* bit[17]   : ddrt��λ */
        unsigned int  reserved_5                 : 14; /* bit[18-31]: ��λ��ֹ�������£�д1��λ�������
                                                                      MDM��ϵͳ�е�AXI���߸�λ */
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_RSTDIS8_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS8_periph_rstdis8_rs0_START          (0)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS8_periph_rstdis8_rs0_END            (0)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS8_periph_rstdis8_rs2_START          (1)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS8_periph_rstdis8_rs2_END            (1)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS8_periph_rstdis8_rs3_START          (2)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS8_periph_rstdis8_rs3_END            (2)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS8_periph_rstdis8_ms0_START          (3)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS8_periph_rstdis8_ms0_END            (3)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS8_periph_rstdis8_ms2_START          (5)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS8_periph_rstdis8_ms2_END            (5)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS8_periph_rstdis8_xg2ram0_START      (6)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS8_periph_rstdis8_xg2ram0_END        (6)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS8_periph_rstdis8_x2sram_tzma_START  (7)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS8_periph_rstdis8_x2sram_tzma_END    (7)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS8_periph_rstdis8_sram_START         (8)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS8_periph_rstdis8_sram_END           (8)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS8_periph_rstdis8_harq_START         (10)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS8_periph_rstdis8_harq_END           (10)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS8_periph_rstdis8_ddrc_START         (12)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS8_periph_rstdis8_ddrc_END           (12)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS8_periph_rstdis8_ddrc_apb_START     (13)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS8_periph_rstdis8_ddrc_apb_END       (13)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS8_periph_rstdis8_ddrpack_apb_START  (14)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS8_periph_rstdis8_ddrpack_apb_END    (14)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS8_periph_rstdis8_ddrt_START         (17)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS8_periph_rstdis8_ddrt_END           (17)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT8_UNION
 �ṹ˵��  : SC_PERIPH_RSTSTAT8 �Ĵ����ṹ���塣��ַƫ����:0x348����ֵ:0xFFFFFA37�����:32
 �Ĵ���˵��: ���踴λ״̬�Ĵ���6�����ڻض������踴λ��״̬�����踴λ�����ź��辭��ͬ��������ˣ�����ļĴ���ֵ���ӳ���Ӧʱ����ļ������ں��������Ӧ�⸴λ״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  periph_rststat8_rs0         : 1;  /* bit[0]    : rs0��λ */
        unsigned int  periph_rststat8_rs2         : 1;  /* bit[1]    : rs2��λ */
        unsigned int  periph_rststat8_rs3         : 1;  /* bit[2]    : rs3��λ */
        unsigned int  periph_rststat8_ms0         : 1;  /* bit[3]    : ms0��λ */
        unsigned int  reserved_0                  : 1;  /* bit[4]    : reserved */
        unsigned int  periph_rststat8_ms2         : 1;  /* bit[5]    : ms2��λ */
        unsigned int  periph_rststat8_xg2ram0     : 1;  /* bit[6]    : xg2ram0��λ */
        unsigned int  periph_rststat8_x2sram_tzma : 1;  /* bit[7]    : x2sram��tzma��λ */
        unsigned int  periph_rststat8_sram        : 1;  /* bit[8]    : sram��λ */
        unsigned int  reserved_1                  : 1;  /* bit[9]    : reserved */
        unsigned int  periph_rststat8_harq        : 1;  /* bit[10]   : harq��λ */
        unsigned int  reserved_2                  : 1;  /* bit[11]   : reserved */
        unsigned int  periph_rststat8_ddrc        : 1;  /* bit[12]   : ddr��λ */
        unsigned int  periph_rststat8_ddrc_apb    : 1;  /* bit[13]   : ddrc apb���߸�λ */
        unsigned int  periph_rststat8_ddrpack_apb : 1;  /* bit[14]   : ddrpack apb���߸�λ */
        unsigned int  reserved_3                  : 1;  /* bit[15]   : reserved */
        unsigned int  reserved_4                  : 1;  /* bit[16]   : reserved */
        unsigned int  periph_rststat8_ddrt        : 1;  /* bit[17]   : ddrt��λ */
        unsigned int  reserved_5                  : 14; /* bit[18-31]: ��λ״̬�������£��ߵ�ƽ��ʾ���ڸ�λ��
                                                                       MDM��ϵͳ�е�AXI���߸�λ */
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT8_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT8_periph_rststat8_rs0_START          (0)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT8_periph_rststat8_rs0_END            (0)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT8_periph_rststat8_rs2_START          (1)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT8_periph_rststat8_rs2_END            (1)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT8_periph_rststat8_rs3_START          (2)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT8_periph_rststat8_rs3_END            (2)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT8_periph_rststat8_ms0_START          (3)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT8_periph_rststat8_ms0_END            (3)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT8_periph_rststat8_ms2_START          (5)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT8_periph_rststat8_ms2_END            (5)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT8_periph_rststat8_xg2ram0_START      (6)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT8_periph_rststat8_xg2ram0_END        (6)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT8_periph_rststat8_x2sram_tzma_START  (7)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT8_periph_rststat8_x2sram_tzma_END    (7)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT8_periph_rststat8_sram_START         (8)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT8_periph_rststat8_sram_END           (8)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT8_periph_rststat8_harq_START         (10)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT8_periph_rststat8_harq_END           (10)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT8_periph_rststat8_ddrc_START         (12)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT8_periph_rststat8_ddrc_END           (12)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT8_periph_rststat8_ddrc_apb_START     (13)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT8_periph_rststat8_ddrc_apb_END       (13)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT8_periph_rststat8_ddrpack_apb_START  (14)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT8_periph_rststat8_ddrpack_apb_END    (14)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT8_periph_rststat8_ddrt_START         (17)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT8_periph_rststat8_ddrt_END           (17)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_PERIPH_RSTEN9_UNION
 �ṹ˵��  : SC_PERIPH_RSTEN9 �Ĵ����ṹ���塣��ַƫ����:0x350����ֵ:0x00000000�����:32
 �Ĵ���˵��: �踴λʹ�ܼĴ���6������ʹ�����踴λ���Ա���д1����ӦIP���븴λ״̬��д0��Ӱ�츴λ״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  periph_rsten9_carm_dap    : 1;  /* bit[0]   : carm debug apb��λ */
        unsigned int  periph_rsten9_carm_atb    : 1;  /* bit[1]   : carm atb��λ */
        unsigned int  periph_rsten9_carm_lbus   : 1;  /* bit[2]   : carm local bus��λ */
        unsigned int  periph_rsten9_carm_por    : 1;  /* bit[3]   : carm ȫ�ָ�λ */
        unsigned int  periph_rsten9_carm_core   : 1;  /* bit[4]   : carm �ں˸�λ */
        unsigned int  periph_rsten9_carm_dbg    : 1;  /* bit[5]   : carm dbg��λ */
        unsigned int  periph_rsten9_carm_l2     : 1;  /* bit[6]   : carm scu��λ */
        unsigned int  periph_rsten9_carm_socdbg : 1;  /* bit[7]   : carm socdbg��λ */
        unsigned int  periph_rsten9_carm_etm    : 1;  /* bit[8]   : carm etm��λ */
        unsigned int  reserved                  : 23; /* bit[9-31]: reserved */
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_RSTEN9_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN9_periph_rsten9_carm_dap_START     (0)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN9_periph_rsten9_carm_dap_END       (0)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN9_periph_rsten9_carm_atb_START     (1)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN9_periph_rsten9_carm_atb_END       (1)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN9_periph_rsten9_carm_lbus_START    (2)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN9_periph_rsten9_carm_lbus_END      (2)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN9_periph_rsten9_carm_por_START     (3)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN9_periph_rsten9_carm_por_END       (3)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN9_periph_rsten9_carm_core_START    (4)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN9_periph_rsten9_carm_core_END      (4)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN9_periph_rsten9_carm_dbg_START     (5)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN9_periph_rsten9_carm_dbg_END       (5)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN9_periph_rsten9_carm_l2_START      (6)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN9_periph_rsten9_carm_l2_END        (6)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN9_periph_rsten9_carm_socdbg_START  (7)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN9_periph_rsten9_carm_socdbg_END    (7)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN9_periph_rsten9_carm_etm_START     (8)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTEN9_periph_rsten9_carm_etm_END       (8)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_PERIPH_RSTDIS9_UNION
 �ṹ˵��  : SC_PERIPH_RSTDIS9 �Ĵ����ṹ���塣��ַƫ����:0x354����ֵ:0x00000000�����:32
 �Ĵ���˵��: ���踴λ��ֹ�Ĵ���6�����ڽ�ֹ���踴λ���Ա���д1����Ӧ��������λ��д0��Ӱ�츴λʹ�ܵ�״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  periph_rsdist9_carm_dap    : 1;  /* bit[0]   : carm debug apb��λ */
        unsigned int  periph_rsdist9_carm_atb    : 1;  /* bit[1]   : carm atb��λ */
        unsigned int  periph_rsdist9_carm_lbus   : 1;  /* bit[2]   : carm local bus��λ */
        unsigned int  periph_rsdist9_carm_por    : 1;  /* bit[3]   : carm ȫ�ָ�λ */
        unsigned int  periph_rsdist9_carm_core   : 1;  /* bit[4]   : carm �ں˸�λ */
        unsigned int  periph_rsdist9_carm_dbg    : 1;  /* bit[5]   : carm dbg��λ */
        unsigned int  periph_rsdist9_carm_l2     : 1;  /* bit[6]   : carm scu��λ */
        unsigned int  periph_rsdist9_carm_socdbg : 1;  /* bit[7]   : carm socdbg��λ */
        unsigned int  periph_rsdist9_carm_etm    : 1;  /* bit[8]   : carm etm��λ */
        unsigned int  reserved                   : 23; /* bit[9-31]: reserved */
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_RSTDIS9_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS9_periph_rsdist9_carm_dap_START     (0)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS9_periph_rsdist9_carm_dap_END       (0)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS9_periph_rsdist9_carm_atb_START     (1)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS9_periph_rsdist9_carm_atb_END       (1)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS9_periph_rsdist9_carm_lbus_START    (2)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS9_periph_rsdist9_carm_lbus_END      (2)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS9_periph_rsdist9_carm_por_START     (3)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS9_periph_rsdist9_carm_por_END       (3)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS9_periph_rsdist9_carm_core_START    (4)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS9_periph_rsdist9_carm_core_END      (4)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS9_periph_rsdist9_carm_dbg_START     (5)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS9_periph_rsdist9_carm_dbg_END       (5)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS9_periph_rsdist9_carm_l2_START      (6)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS9_periph_rsdist9_carm_l2_END        (6)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS9_periph_rsdist9_carm_socdbg_START  (7)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS9_periph_rsdist9_carm_socdbg_END    (7)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS9_periph_rsdist9_carm_etm_START     (8)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTDIS9_periph_rsdist9_carm_etm_END       (8)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT9_UNION
 �ṹ˵��  : SC_PERIPH_RSTSTAT9 �Ĵ����ṹ���塣��ַƫ����:0x358����ֵ:0xFFFFFFFF�����:32
 �Ĵ���˵��: ���踴λ״̬�Ĵ���6�����ڻض������踴λ��״̬�����踴λ�����ź��辭��ͬ��������ˣ�����ļĴ���ֵ���ӳ���Ӧʱ����ļ������ں��������Ӧ�⸴λ״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  periph_rststat9_carm_dap    : 1;  /* bit[0]   : carm debug apb��λ */
        unsigned int  periph_rststat9_carm_atb    : 1;  /* bit[1]   : carm atb��λ */
        unsigned int  periph_rststat9_carm_lbus   : 1;  /* bit[2]   : carm local bus��λ */
        unsigned int  periph_rststat9_carm_por    : 1;  /* bit[3]   : carm ȫ�ָ�λ */
        unsigned int  periph_rststat9_carm_core   : 1;  /* bit[4]   : carm �ں˸�λ */
        unsigned int  periph_rststat9_carm_dbg    : 1;  /* bit[5]   : carm dbg��λ */
        unsigned int  periph_rststat9_carm_l2     : 1;  /* bit[6]   : carm scu��λ */
        unsigned int  periph_rststat9_carm_socdbg : 1;  /* bit[7]   : carm socdbg��λ */
        unsigned int  periph_rststat9_carm_etm    : 1;  /* bit[8]   : carm etm��λ */
        unsigned int  reserved                    : 23; /* bit[9-31]: reserved */
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT9_UNION;
#endif
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT9_periph_rststat9_carm_dap_START     (0)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT9_periph_rststat9_carm_dap_END       (0)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT9_periph_rststat9_carm_atb_START     (1)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT9_periph_rststat9_carm_atb_END       (1)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT9_periph_rststat9_carm_lbus_START    (2)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT9_periph_rststat9_carm_lbus_END      (2)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT9_periph_rststat9_carm_por_START     (3)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT9_periph_rststat9_carm_por_END       (3)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT9_periph_rststat9_carm_core_START    (4)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT9_periph_rststat9_carm_core_END      (4)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT9_periph_rststat9_carm_dbg_START     (5)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT9_periph_rststat9_carm_dbg_END       (5)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT9_periph_rststat9_carm_l2_START      (6)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT9_periph_rststat9_carm_l2_END        (6)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT9_periph_rststat9_carm_socdbg_START  (7)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT9_periph_rststat9_carm_socdbg_END    (7)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT9_periph_rststat9_carm_etm_START     (8)
#define SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT9_periph_rststat9_carm_etm_END       (8)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_PERIPH_RSTEN10_UNION
 �ṹ˵��  : SC_PERIPH_RSTEN10 �Ĵ����ṹ���塣��ַƫ����:0x360����ֵ:0x00000000�����:32
 �Ĵ���˵��: �踴λʹ�ܼĴ���6������ʹ�����踴λ���Ա���д1����ӦIP���븴λ״̬��д0��Ӱ�츴λ״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved : 32; /* bit[0-31]: reserved */
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_RSTEN10_UNION;
#endif


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_PERIPH_RSTDIS10_UNION
 �ṹ˵��  : SC_PERIPH_RSTDIS10 �Ĵ����ṹ���塣��ַƫ����:0x364����ֵ:0x00000000�����:32
 �Ĵ���˵��: ���踴λ��ֹ�Ĵ���6�����ڽ�ֹ���踴λ���Ա���д1����Ӧ��������λ��д0��Ӱ�츴λʹ�ܵ�״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved : 32; /* bit[0-31]: reserved */
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_RSTDIS10_UNION;
#endif


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT10_UNION
 �ṹ˵��  : SC_PERIPH_RSTSTAT10 �Ĵ����ṹ���塣��ַƫ����:0x368����ֵ:0x00000000�����:32
 �Ĵ���˵��: ���踴λ״̬�Ĵ���6�����ڻض������踴λ��״̬�����踴λ�����ź��辭��ͬ��������ˣ�����ļĴ���ֵ���ӳ���Ӧʱ����ļ������ں��������Ӧ�⸴λ״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved : 32; /* bit[0-31]: reserved */
    } reg;
} SOC_PERI_SCTRL_SC_PERIPH_RSTSTAT10_UNION;
#endif


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_CLK_SEL0_UNION
 �ṹ˵��  : SC_CLK_SEL0 �Ĵ����ṹ���塣��ַƫ����:0x400����ֵ:0x00000401�����:32
 �Ĵ���˵��: ʱ��ѡ��Ĵ���0
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sel_clk_hifi      : 1;  /* bit[0]    : HIFIԴʱ��ѡ��
                                                             0��ѡ��syspllʱ��
                                                             1��ѡ��mediapllʱ�� */
        unsigned int  sel_clk_uart1     : 1;  /* bit[1]    : UART1Դʱ��ѡ��
                                                             0��ѡ��TCXOʱ�ӣ�
                                                             1��ѡ��SYSʱ�ӡ� */
        unsigned int  sel_clk_uart2     : 1;  /* bit[2]    : UART2Դʱ��ѡ��
                                                             0��ѡ��TCXOʱ�ӣ�
                                                             1��ѡ��SYSʱ�ӡ� */
        unsigned int  sel_clk_uart3     : 1;  /* bit[3]    : UART3Դʱ��ѡ��
                                                             0��ѡ��TCXOʱ�ӣ�
                                                             1��ѡ��SYSʱ�ӡ� */
        unsigned int  sel_clk_uart4     : 1;  /* bit[4]    : UART4Դʱ��ѡ��
                                                             0��ѡ��TCXOʱ�ӣ�
                                                             1��ѡ��SYSʱ�ӡ� */
        unsigned int  sel_clk_mmc       : 1;  /* bit[5]    : mmc����ʱ��Դѡ��
                                                             0��DDRPLL��
                                                             1��SYSPLL�� */
        unsigned int  sel_pll_test      : 3;  /* bit[6-8]  : pll_testʱ��ѡ��
                                                             000��clk_acpu_src
                                                             001��clk_ddrpll1_src
                                                             010��clk_hifi_src
                                                             011��clk_bbppll0_src
                                                             100��clk_mmc0_sel_src
                                                             101��clk_gpupll_src */
        unsigned int  sel_codec_ssi     : 1;  /* bit[9]    : codec Ϊ�˼���V9 12.288MHz codec������ʱ��ѡ��
                                                             0��clk_slow 19.2MHz
                                                             1��clk_bbppll0_div5_src 12.288MHz */
        unsigned int  sel_clk_ccpu      : 1;  /* bit[10]   : �͸�ccpuʱ��Դͷѡ��
                                                             1��syspll
                                                             0��mediapll */
        unsigned int  reserved_0        : 5;  /* bit[11-15]: ������ */
        unsigned int  sel_clk_hifi_msk  : 1;  /* bit[16]   : HIFIԴʱ��ѡ�� */
        unsigned int  sel_clk_uart1_msk : 1;  /* bit[17]   : UART1Դʱ��ѡ�� */
        unsigned int  sel_clk_uart2_msk : 1;  /* bit[18]   : UART2Դʱ��ѡ�� */
        unsigned int  sel_clk_uart3_msk : 1;  /* bit[19]   : UART3Դʱ��ѡ�� */
        unsigned int  sel_clk_uart4_msk : 1;  /* bit[20]   : UART4Դʱ��ѡ�� */
        unsigned int  sel_clk_mmc_msk   : 1;  /* bit[21]   : mmcʱ��ѡ�� */
        unsigned int  sel_pll_test_msk  : 3;  /* bit[22-24]: pll_testѡ�� */
        unsigned int  sel_codec_ssi_msk : 1;  /* bit[25]   : codec Ϊ�˼���V9 12.288MHz codec������ʱ��ѡ�� */
        unsigned int  sel_clk_ccpu_msk  : 1;  /* bit[26]   : �͸�ccpuʱ��Դͷѡ�� */
        unsigned int  reserved_1        : 5;  /* bit[27-31]: ����
                                                             [31��16]��ÿһbit˳���Ӧbit15��bit0������bit31��16��bitд1��ͬʱ������bit15��0������Ч����bit31��16��bitд0ʱ������bit15��0���ֲ��䣻 */
    } reg;
} SOC_PERI_SCTRL_SC_CLK_SEL0_UNION;
#endif
#define SOC_PERI_SCTRL_SC_CLK_SEL0_sel_clk_hifi_START       (0)
#define SOC_PERI_SCTRL_SC_CLK_SEL0_sel_clk_hifi_END         (0)
#define SOC_PERI_SCTRL_SC_CLK_SEL0_sel_clk_uart1_START      (1)
#define SOC_PERI_SCTRL_SC_CLK_SEL0_sel_clk_uart1_END        (1)
#define SOC_PERI_SCTRL_SC_CLK_SEL0_sel_clk_uart2_START      (2)
#define SOC_PERI_SCTRL_SC_CLK_SEL0_sel_clk_uart2_END        (2)
#define SOC_PERI_SCTRL_SC_CLK_SEL0_sel_clk_uart3_START      (3)
#define SOC_PERI_SCTRL_SC_CLK_SEL0_sel_clk_uart3_END        (3)
#define SOC_PERI_SCTRL_SC_CLK_SEL0_sel_clk_uart4_START      (4)
#define SOC_PERI_SCTRL_SC_CLK_SEL0_sel_clk_uart4_END        (4)
#define SOC_PERI_SCTRL_SC_CLK_SEL0_sel_clk_mmc_START        (5)
#define SOC_PERI_SCTRL_SC_CLK_SEL0_sel_clk_mmc_END          (5)
#define SOC_PERI_SCTRL_SC_CLK_SEL0_sel_pll_test_START       (6)
#define SOC_PERI_SCTRL_SC_CLK_SEL0_sel_pll_test_END         (8)
#define SOC_PERI_SCTRL_SC_CLK_SEL0_sel_codec_ssi_START      (9)
#define SOC_PERI_SCTRL_SC_CLK_SEL0_sel_codec_ssi_END        (9)
#define SOC_PERI_SCTRL_SC_CLK_SEL0_sel_clk_ccpu_START       (10)
#define SOC_PERI_SCTRL_SC_CLK_SEL0_sel_clk_ccpu_END         (10)
#define SOC_PERI_SCTRL_SC_CLK_SEL0_sel_clk_hifi_msk_START   (16)
#define SOC_PERI_SCTRL_SC_CLK_SEL0_sel_clk_hifi_msk_END     (16)
#define SOC_PERI_SCTRL_SC_CLK_SEL0_sel_clk_uart1_msk_START  (17)
#define SOC_PERI_SCTRL_SC_CLK_SEL0_sel_clk_uart1_msk_END    (17)
#define SOC_PERI_SCTRL_SC_CLK_SEL0_sel_clk_uart2_msk_START  (18)
#define SOC_PERI_SCTRL_SC_CLK_SEL0_sel_clk_uart2_msk_END    (18)
#define SOC_PERI_SCTRL_SC_CLK_SEL0_sel_clk_uart3_msk_START  (19)
#define SOC_PERI_SCTRL_SC_CLK_SEL0_sel_clk_uart3_msk_END    (19)
#define SOC_PERI_SCTRL_SC_CLK_SEL0_sel_clk_uart4_msk_START  (20)
#define SOC_PERI_SCTRL_SC_CLK_SEL0_sel_clk_uart4_msk_END    (20)
#define SOC_PERI_SCTRL_SC_CLK_SEL0_sel_clk_mmc_msk_START    (21)
#define SOC_PERI_SCTRL_SC_CLK_SEL0_sel_clk_mmc_msk_END      (21)
#define SOC_PERI_SCTRL_SC_CLK_SEL0_sel_pll_test_msk_START   (22)
#define SOC_PERI_SCTRL_SC_CLK_SEL0_sel_pll_test_msk_END     (24)
#define SOC_PERI_SCTRL_SC_CLK_SEL0_sel_codec_ssi_msk_START  (25)
#define SOC_PERI_SCTRL_SC_CLK_SEL0_sel_codec_ssi_msk_END    (25)
#define SOC_PERI_SCTRL_SC_CLK_SEL0_sel_clk_ccpu_msk_START   (26)
#define SOC_PERI_SCTRL_SC_CLK_SEL0_sel_clk_ccpu_msk_END     (26)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_CLK_SEL1_UNION
 �ṹ˵��  : SC_CLK_SEL1 �Ĵ����ṹ���塣��ַƫ����:0x404����ֵ:0x00000000�����:32
 �Ĵ���˵��: ʱ��ѡ��Ĵ���1
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved_0: 16; /* bit[0-15] : reserved */
        unsigned int  reserved_1: 16; /* bit[16-31]: ����PLL���Ե�ѡ��
                                                     [31��16]��ÿһbit˳���Ӧbit15��bit0������bit31��16��bitд1��ͬʱ������bit15��0������Ч����bit31��16��bitд0ʱ������bit15��0���ֲ��䣻 */
    } reg;
} SOC_PERI_SCTRL_SC_CLK_SEL1_UNION;
#endif


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_CLKCFGALL0_UNION
 �ṹ˵��  : SC_CLKCFGALL0 �Ĵ����ṹ���塣��ַƫ����:0x450����ֵ:0x0000001F�����:32
 �Ĵ���˵��: ʱ�Ӳ������üĴ���0
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved : 32; /* bit[0-31]: [32��31]��reserved
                                                   [30��24]�� clk_hifi_src��Ƶ������ */
    } reg;
} SOC_PERI_SCTRL_SC_CLKCFGALL0_UNION;
#endif


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_CLKCFGALL1_UNION
 �ṹ˵��  : SC_CLKCFGALL1 �Ĵ����ṹ���塣��ַƫ����:0x454����ֵ:0x0000001F�����:32
 �Ĵ���˵��: ʱ�Ӳ������üĴ���1
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved : 32; /* bit[0-31]: ʱ�Ӳ������üĴ�����
                                                   [31��24]��reserved */
    } reg;
} SOC_PERI_SCTRL_SC_CLKCFGALL1_UNION;
#endif


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_CLKCFGALL2_UNION
 �ṹ˵��  : SC_CLKCFGALL2 �Ĵ����ṹ���塣��ַƫ����:0x458����ֵ:0x0003071F�����:32
 �Ĵ���˵��: ʱ�Ӳ������üĴ���2
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved_0: 6;  /* bit[0-5]  : [5��0]��SIO2XFS��Ƶ�������ã� */
        unsigned int  reserved_1: 2;  /* bit[6-7]  : reserved */
        unsigned int  reserved_2: 8;  /* bit[8-15] : [15��8]��SIO2ʱ�ӷ�Ƶ�������ã� */
        unsigned int  reserved_3: 1;  /* bit[16]   : [16]��SIO2Masterģʽ��I2S����PCMģʽѡ��
                                                     0��I2S��ʽ��
                                                     1��PCM��ʽ�� */
        unsigned int  reserved_4: 1;  /* bit[17]   : [17]��SIO2Masterģʽѡ��
                                                     0��Masterģʽ��
                                                     1��Slaveģʽ�� */
        unsigned int  reserved_5: 14; /* bit[18-31]: ʱ�Ӳ������üĴ�����
                                                     [31��18]��reserved */
    } reg;
} SOC_PERI_SCTRL_SC_CLKCFGALL2_UNION;
#endif


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_CLKCFGALL3_UNION
 �ṹ˵��  : SC_CLKCFGALL3 �Ĵ����ṹ���塣��ַƫ����:0x45C����ֵ:0x0003071F�����:32
 �Ĵ���˵��: ʱ�Ӳ������üĴ���3
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved_0: 6;  /* bit[0-5]  : [5��0]��SIO3XFS��Ƶ�������ã� */
        unsigned int  reserved_1: 2;  /* bit[6-7]  : reserved */
        unsigned int  reserved_2: 8;  /* bit[8-15] : [15��8]��SIO3ʱ�ӷ�Ƶ�������ã� */
        unsigned int  reserved_3: 1;  /* bit[16]   : [16]��SIO2Masterģʽ��I2S����PCMģʽѡ��
                                                     0��I2S��ʽ��
                                                     1��PCM��ʽ�� */
        unsigned int  reserved_4: 1;  /* bit[17]   : [17]��SIO2Masterģʽѡ��
                                                     0��Masterģʽ��
                                                     1��Slaveģʽ�� */
        unsigned int  reserved_5: 14; /* bit[18-31]: ʱ�Ӳ������üĴ�����
                                                     [31��18]�������� */
    } reg;
} SOC_PERI_SCTRL_SC_CLKCFGALL3_UNION;
#endif


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_CLKCFGALL4_UNION
 �ṹ˵��  : SC_CLKCFGALL4 �Ĵ����ṹ���塣��ַƫ����:0x460����ֵ:0x00000000�����:32
 �Ĵ���˵��: ʱ�Ӳ������üĴ���4
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved : 32; /* bit[0-31]: reserved */
    } reg;
} SOC_PERI_SCTRL_SC_CLKCFGALL4_UNION;
#endif


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_CLKCFGALL5_UNION
 �ṹ˵��  : SC_CLKCFGALL5 �Ĵ����ṹ���塣��ַƫ����:0x464����ֵ:0x00000000�����:32
 �Ĵ���˵��: ʱ�Ӳ������üĴ���5
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved : 32; /* bit[0-31]: reserved */
    } reg;
} SOC_PERI_SCTRL_SC_CLKCFGALL5_UNION;
#endif


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_CLKCFG8BIT0_UNION
 �ṹ˵��  : SC_CLKCFG8BIT0 �Ĵ����ṹ���塣��ַƫ����:0x490����ֵ:0x01020102�����:32
 �Ĵ���˵��: ʱ�Ӳ������üĴ���7
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  clk_8bit_cfg0_value0_clkbus_low       : 7;  /* bit[0-6]  : ʱ�Ӳ�������ԴͷΪ300MHzʱ�ӣ�
                                                                                 [6��4]������
                                                                                 [3��0]��CLKBUS_lowʱ�ӵķ�Ƶ��������;������ο�PMCTRL�û��ֲ��sysnoc dfs�½ڣ� */
        unsigned int  clk_8bit_cfg0_vld0_clkbus_low         : 1;  /* bit[7-7]  : ʱ�Ӳ�����Чָʾ�� */
        unsigned int  clk_8bit_cfg0_value0_clkbus_high      : 7;  /* bit[8-14] : ʱ�Ӳ�������ԴͷΪ300MHzʱ�ӣ�
                                                                                 [14��12]������
                                                                                 [11��8]��CLKBUS_highʱ�ӵķ�Ƶ��������;������ο�PMCTRL�û��ֲ��sysnoc dfs�½ڣ� */
        unsigned int  clk_8bit_cfg0_vld0_clkbus_high        : 1;  /* bit[15-15]: ʱ�Ӳ�����Чָʾ�� */
        unsigned int  clk_8bit_cfg0_value0_clkbus_idle_low  : 7;  /* bit[16-22]: ʱ�Ӳ�������ԴͷΪ300MHzʱ�ӣ�
                                                                                 [22��20]������
                                                                                 [19��16]��noc idle��CLKBUS_lowʱ�ӵķ�Ƶ��������;������ο�PMCTRL�û��ֲ��sysnoc dfs�½ڣ� */
        unsigned int  clk_8bit_cfg0_vld0_clkbus_idle_low    : 1;  /* bit[23-23]: ʱ�Ӳ�����Чָʾ�� */
        unsigned int  clk_8bit_cfg0_value0_clkbus_idle_high : 7;  /* bit[24-30]: ʱ�Ӳ�������ԴͷΪ300MHzʱ�ӣ�
                                                                                 [30��28]������
                                                                                 [27��24]��noc idle��CLKBUS_highʱ�ӵķ�Ƶ��������;������ο�PMCTRL�û��ֲ��sysnoc dfs�½ڣ� */
        unsigned int  clk_8bit_cfg0_vld0_clkbus_idle_high   : 1;  /* bit[31-31]: ʱ�Ӳ�����Чָʾ�� */
    } reg;
} SOC_PERI_SCTRL_SC_CLKCFG8BIT0_UNION;
#endif
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT0_clk_8bit_cfg0_value0_clkbus_low_START        (0)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT0_clk_8bit_cfg0_value0_clkbus_low_END          (6)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT0_clk_8bit_cfg0_vld0_clkbus_low_START          (7)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT0_clk_8bit_cfg0_vld0_clkbus_low_END            (7)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT0_clk_8bit_cfg0_value0_clkbus_high_START       (8)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT0_clk_8bit_cfg0_value0_clkbus_high_END         (14)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT0_clk_8bit_cfg0_vld0_clkbus_high_START         (15)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT0_clk_8bit_cfg0_vld0_clkbus_high_END           (15)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT0_clk_8bit_cfg0_value0_clkbus_idle_low_START   (16)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT0_clk_8bit_cfg0_value0_clkbus_idle_low_END     (22)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT0_clk_8bit_cfg0_vld0_clkbus_idle_low_START     (23)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT0_clk_8bit_cfg0_vld0_clkbus_idle_low_END       (23)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT0_clk_8bit_cfg0_value0_clkbus_idle_high_START  (24)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT0_clk_8bit_cfg0_value0_clkbus_idle_high_END    (30)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT0_clk_8bit_cfg0_vld0_clkbus_idle_high_START    (31)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT0_clk_8bit_cfg0_vld0_clkbus_idle_high_END      (31)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_CLKCFG8BIT1_UNION
 �ṹ˵��  : SC_CLKCFG8BIT1 �Ĵ����ṹ���塣��ַƫ����:0x494����ֵ:0x0000007F�����:32
 �Ĵ���˵��: mmc0ʱ�Ӳ������üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  clk_8bit_cfg1_value0_mmc0 : 7;  /* bit[0-6]  : ʱ�Ӳ�����
                                                                     [6��6]������
                                                                     [5��0]��CLK MMC0 ʱ�ӵķ�Ƶ��������; */
        unsigned int  clk_8bit_cfg1_vld0_mmc0   : 1;  /* bit[7-7]  : ʱ�Ӳ�����Чָʾ�� */
        unsigned int  reserved_0                : 7;  /* bit[8-14] : ʱ�Ӳ����� */
        unsigned int  reserved_1                : 1;  /* bit[15-15]: ʱ�Ӳ�����Чָʾ�� */
        unsigned int  reserved_2                : 7;  /* bit[16-22]: ʱ�Ӳ����������� */
        unsigned int  reserved_3                : 1;  /* bit[23-23]: ʱ�Ӳ�����Чָʾ�� */
        unsigned int  reserved_4                : 7;  /* bit[24-30]: ʱ�Ӳ����������� */
        unsigned int  reserved_5                : 1;  /* bit[31-31]: ʱ�Ӳ�����Чָʾ�� */
    } reg;
} SOC_PERI_SCTRL_SC_CLKCFG8BIT1_UNION;
#endif
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT1_clk_8bit_cfg1_value0_mmc0_START  (0)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT1_clk_8bit_cfg1_value0_mmc0_END    (6)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT1_clk_8bit_cfg1_vld0_mmc0_START    (7)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT1_clk_8bit_cfg1_vld0_mmc0_END      (7)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_CLKCFG8BIT2_UNION
 �ṹ˵��  : SC_CLKCFG8BIT2 �Ĵ����ṹ���塣��ַƫ����:0x498����ֵ:0x0000007F�����:32
 �Ĵ���˵��: mmc1ʱ�Ӳ������üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  clk_8bit_cfg2_value0_mmc1 : 7;  /* bit[0-6]  : ʱ�Ӳ�����
                                                                     [6��6]������
                                                                     [5��0]��CLK MMC1 LOWʱ�ӵķ�Ƶ��������; */
        unsigned int  clk_8bit_cfg2_vld0_mmc1   : 1;  /* bit[7-7]  : ʱ�Ӳ�����Чָʾ�� */
        unsigned int  reserved_0                : 7;  /* bit[8-14] : ʱ�Ӳ�����
                                                                     [14��12]������
                                                                     [11��8]��CLK MMC1 HIGHʱ�ӵķ�Ƶ��������; */
        unsigned int  reserved_1                : 1;  /* bit[15-15]: ʱ�Ӳ�����Чָʾ�� */
        unsigned int  reserved_2                : 7;  /* bit[16-22]: ʱ�Ӳ����������� */
        unsigned int  reserved_3                : 1;  /* bit[23-23]: ʱ�Ӳ�����Чָʾ�� */
        unsigned int  reserved_4                : 7;  /* bit[24-30]: ʱ�Ӳ����������� */
        unsigned int  reserved_5                : 1;  /* bit[31-31]: ʱ�Ӳ�����Чָʾ�� */
    } reg;
} SOC_PERI_SCTRL_SC_CLKCFG8BIT2_UNION;
#endif
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT2_clk_8bit_cfg2_value0_mmc1_START  (0)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT2_clk_8bit_cfg2_value0_mmc1_END    (6)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT2_clk_8bit_cfg2_vld0_mmc1_START    (7)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT2_clk_8bit_cfg2_vld0_mmc1_END      (7)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_CLKCFG8BIT3_UNION
 �ṹ˵��  : SC_CLKCFG8BIT3 �Ĵ����ṹ���塣��ַƫ����:0x49C����ֵ:0x0000007F�����:32
 �Ĵ���˵��: mmc2ʱ�Ӳ������üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  clk_8bit_cfg3_value0_mmc2 : 7;  /* bit[0-6]  : ʱ�Ӳ�����
                                                                     [6��6]������
                                                                     [5��0]��CLK MMC2 LOWʱ�ӵķ�Ƶ��������; */
        unsigned int  clk_8bit_cfg3_vld0_mmc2   : 1;  /* bit[7-7]  : ʱ�Ӳ�����Чָʾ�� */
        unsigned int  reserved_0                : 7;  /* bit[8-14] : ʱ�Ӳ�����
                                                                     [14��12]������
                                                                     [11��8]��CLK MMC2 HIGHʱ�ӵķ�Ƶ��������; */
        unsigned int  reserved_1                : 1;  /* bit[15-15]: ʱ�Ӳ�����Чָʾ�� */
        unsigned int  reserved_2                : 7;  /* bit[16-22]: ʱ�Ӳ����������� */
        unsigned int  reserved_3                : 1;  /* bit[23-23]: ʱ�Ӳ�����Чָʾ�� */
        unsigned int  reserved_4                : 7;  /* bit[24-30]: ʱ�Ӳ����������� */
        unsigned int  reserved_5                : 1;  /* bit[31-31]: ʱ�Ӳ�����Чָʾ�� */
    } reg;
} SOC_PERI_SCTRL_SC_CLKCFG8BIT3_UNION;
#endif
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT3_clk_8bit_cfg3_value0_mmc2_START  (0)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT3_clk_8bit_cfg3_value0_mmc2_END    (6)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT3_clk_8bit_cfg3_vld0_mmc2_START    (7)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT3_clk_8bit_cfg3_vld0_mmc2_END      (7)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_CLKCFG8BIT4_UNION
 �ṹ˵��  : SC_CLKCFG8BIT4 �Ĵ����ṹ���塣��ַƫ����:0x4A0����ֵ:0x017F0403�����:32
 �Ĵ���˵��: ʱ�Ӳ������üĴ���4
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  clk_8bit_cfg4_value0_hifi     : 7;  /* bit[0-6]  : ʱ�Ӳ�����
                                                                         [6��4]������
                                                                         [3��0]��HIFIʱ�ӵķ�Ƶ��������; */
        unsigned int  clk_8bit_cfg4_vld0_hifi       : 1;  /* bit[7-7]  : ʱ�Ӳ�����Чָʾ�� */
        unsigned int  clk_8bit_cfg4_value1_dacodec  : 7;  /* bit[8-14] : ʱ�Ӳ�����
                                                                         [14��14]������
                                                                         [13��8]��digacodec ��Ƶ��
                                                                         FPGA��1��Ƶ
                                                                         ASIC��5��Ƶ */
        unsigned int  clk_8bit_cfg4_vld1_dacodec    : 1;  /* bit[15-15]: ʱ�Ӳ�����Чָʾ�� */
        unsigned int  clk_8bit_cfg4_value2_pll_test : 7;  /* bit[16-22]: ʱ�Ӳ�����
                                                                         [22��22]������
                                                                         [21��16]��pll_test��Ƶ������ */
        unsigned int  clk_8bit_cfg4_vld2_pll_test   : 1;  /* bit[23-23]: ʱ�Ӳ�����Чָʾ�� */
        unsigned int  clk_8bit_cfg4_value3_dapb     : 7;  /* bit[24-30]: [31��26]����
                                                                         [25��24]clk_dapbʱ�ӷ�Ƶ */
        unsigned int  clk_8bit_cfg4_vld3_dapb       : 1;  /* bit[31]   : ʱ�Ӳ�����Чָʾ�� */
    } reg;
} SOC_PERI_SCTRL_SC_CLKCFG8BIT4_UNION;
#endif
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT4_clk_8bit_cfg4_value0_hifi_START      (0)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT4_clk_8bit_cfg4_value0_hifi_END        (6)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT4_clk_8bit_cfg4_vld0_hifi_START        (7)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT4_clk_8bit_cfg4_vld0_hifi_END          (7)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT4_clk_8bit_cfg4_value1_dacodec_START   (8)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT4_clk_8bit_cfg4_value1_dacodec_END     (14)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT4_clk_8bit_cfg4_vld1_dacodec_START     (15)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT4_clk_8bit_cfg4_vld1_dacodec_END       (15)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT4_clk_8bit_cfg4_value2_pll_test_START  (16)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT4_clk_8bit_cfg4_value2_pll_test_END    (22)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT4_clk_8bit_cfg4_vld2_pll_test_START    (23)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT4_clk_8bit_cfg4_vld2_pll_test_END      (23)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT4_clk_8bit_cfg4_value3_dapb_START      (24)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT4_clk_8bit_cfg4_value3_dapb_END        (30)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT4_clk_8bit_cfg4_vld3_dapb_START        (31)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT4_clk_8bit_cfg4_vld3_dapb_END          (31)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_CLKCFG8BIT5_UNION
 �ṹ˵��  : SC_CLKCFG8BIT5 �Ĵ����ṹ���塣��ַƫ����:0x4A4����ֵ:0x7F7F7F7F�����:32
 �Ĵ���˵��: ʱ�Ӳ������üĴ���5
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  clk_8bit_cfg5_value0 : 7;  /* bit[0-6]  : ʱ�Ӳ��������� */
        unsigned int  clk_8bit_cfg5_vld0   : 1;  /* bit[7-7]  : ʱ�Ӳ�����Чָʾ�� */
        unsigned int  clk_8bit_cfg5_value1 : 7;  /* bit[8-14] : ʱ�Ӳ����������� */
        unsigned int  clk_8bit_cfg5_vld1   : 1;  /* bit[15-15]: ʱ�Ӳ�����Чָʾ�� */
        unsigned int  clk_8bit_cfg5_value2 : 7;  /* bit[16-22]: ʱ�Ӳ�����
                                                                [22]������
                                                                [21��16]��CLK_PLL_0����ʱ�ӵķ�Ƶ��������; */
        unsigned int  clk_8bit_cfg5_vld2   : 1;  /* bit[23-23]: ʱ�Ӳ�����Чָʾ�� */
        unsigned int  clk_8bit_cfg5_value3 : 7;  /* bit[24-30]: ʱ�Ӳ�����
                                                                [30]������
                                                                [29��24]��CLK_PLL_1����ʱ�ӵķ�Ƶ��������; */
        unsigned int  clk_8bit_cfg5_vld3   : 1;  /* bit[31-31]: ʱ�Ӳ�����Чָʾ�� */
    } reg;
} SOC_PERI_SCTRL_SC_CLKCFG8BIT5_UNION;
#endif
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT5_clk_8bit_cfg5_value0_START  (0)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT5_clk_8bit_cfg5_value0_END    (6)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT5_clk_8bit_cfg5_vld0_START    (7)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT5_clk_8bit_cfg5_vld0_END      (7)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT5_clk_8bit_cfg5_value1_START  (8)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT5_clk_8bit_cfg5_value1_END    (14)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT5_clk_8bit_cfg5_vld1_START    (15)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT5_clk_8bit_cfg5_vld1_END      (15)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT5_clk_8bit_cfg5_value2_START  (16)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT5_clk_8bit_cfg5_value2_END    (22)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT5_clk_8bit_cfg5_vld2_START    (23)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT5_clk_8bit_cfg5_vld2_END      (23)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT5_clk_8bit_cfg5_value3_START  (24)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT5_clk_8bit_cfg5_value3_END    (30)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT5_clk_8bit_cfg5_vld3_START    (31)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT5_clk_8bit_cfg5_vld3_END      (31)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_CLKCFG8BIT6_UNION
 �ṹ˵��  : SC_CLKCFG8BIT6 �Ĵ����ṹ���塣��ַƫ����:0x4A8����ֵ:0x00000000�����:32
 �Ĵ���˵��: ʱ�Ӳ������üĴ���6
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  clk_8bit_cfg6_value0 : 7;  /* bit[0-6]  : ʱ�Ӳ��������� */
        unsigned int  clk_8bit_cfg6_vld0   : 1;  /* bit[7-7]  : ʱ�Ӳ�����Чָʾ�� */
        unsigned int  clk_8bit_cfg6_value1 : 7;  /* bit[8-14] : ʱ�Ӳ��������� */
        unsigned int  clk_8bit_cfg6_vld1   : 1;  /* bit[15-15]: ʱ�Ӳ�����Чָʾ�� */
        unsigned int  clk_8bit_cfg6_value2 : 7;  /* bit[16-22]: ʱ�Ӳ��������� */
        unsigned int  clk_8bit_cfg6_vld2   : 1;  /* bit[23-23]: ʱ�Ӳ�����Чָʾ�� */
        unsigned int  clk_8bit_cfg6_value3 : 7;  /* bit[24-30]: ʱ�Ӳ��������� */
        unsigned int  clk_8bit_cfg6_vld3   : 1;  /* bit[31-31]: ʱ�Ӳ�����Чָʾ�� */
    } reg;
} SOC_PERI_SCTRL_SC_CLKCFG8BIT6_UNION;
#endif
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT6_clk_8bit_cfg6_value0_START  (0)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT6_clk_8bit_cfg6_value0_END    (6)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT6_clk_8bit_cfg6_vld0_START    (7)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT6_clk_8bit_cfg6_vld0_END      (7)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT6_clk_8bit_cfg6_value1_START  (8)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT6_clk_8bit_cfg6_value1_END    (14)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT6_clk_8bit_cfg6_vld1_START    (15)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT6_clk_8bit_cfg6_vld1_END      (15)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT6_clk_8bit_cfg6_value2_START  (16)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT6_clk_8bit_cfg6_value2_END    (22)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT6_clk_8bit_cfg6_vld2_START    (23)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT6_clk_8bit_cfg6_vld2_END      (23)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT6_clk_8bit_cfg6_value3_START  (24)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT6_clk_8bit_cfg6_value3_END    (30)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT6_clk_8bit_cfg6_vld3_START    (31)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT6_clk_8bit_cfg6_vld3_END      (31)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_CLKCFG8BIT7_UNION
 �ṹ˵��  : SC_CLKCFG8BIT7 �Ĵ����ṹ���塣��ַƫ����:0x4AC����ֵ:0x00000000�����:32
 �Ĵ���˵��: ʱ�Ӳ������üĴ���7
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  clk_8bit_cfg7_value0 : 7;  /* bit[0-6]  : ʱ�Ӳ��������� */
        unsigned int  clk_8bit_cfg7_vld0   : 1;  /* bit[7-7]  : ʱ�Ӳ�����Чָʾ�� */
        unsigned int  clk_8bit_cfg7_value1 : 7;  /* bit[8-14] : ʱ�Ӳ��������� */
        unsigned int  clk_8bit_cfg7_vld1   : 1;  /* bit[15-15]: ʱ�Ӳ�����Чָʾ�� */
        unsigned int  clk_8bit_cfg7_value2 : 7;  /* bit[16-22]: ʱ�Ӳ��������� */
        unsigned int  clk_8bit_cfg7_vld2   : 1;  /* bit[23-23]: ʱ�Ӳ�����Чָʾ�� */
        unsigned int  clk_8bit_cfg7_value3 : 7;  /* bit[24-30]: ʱ�Ӳ��������� */
        unsigned int  clk_8bit_cfg7_vld3   : 1;  /* bit[31-31]: ʱ�Ӳ�����Чָʾ�� */
    } reg;
} SOC_PERI_SCTRL_SC_CLKCFG8BIT7_UNION;
#endif
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT7_clk_8bit_cfg7_value0_START  (0)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT7_clk_8bit_cfg7_value0_END    (6)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT7_clk_8bit_cfg7_vld0_START    (7)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT7_clk_8bit_cfg7_vld0_END      (7)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT7_clk_8bit_cfg7_value1_START  (8)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT7_clk_8bit_cfg7_value1_END    (14)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT7_clk_8bit_cfg7_vld1_START    (15)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT7_clk_8bit_cfg7_vld1_END      (15)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT7_clk_8bit_cfg7_value2_START  (16)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT7_clk_8bit_cfg7_value2_END    (22)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT7_clk_8bit_cfg7_vld2_START    (23)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT7_clk_8bit_cfg7_vld2_END      (23)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT7_clk_8bit_cfg7_value3_START  (24)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT7_clk_8bit_cfg7_value3_END    (30)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT7_clk_8bit_cfg7_vld3_START    (31)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT7_clk_8bit_cfg7_vld3_END      (31)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_CLKCFG8BIT8_UNION
 �ṹ˵��  : SC_CLKCFG8BIT8 �Ĵ����ṹ���塣��ַƫ����:0x4B0����ֵ:0x00000000�����:32
 �Ĵ���˵��: ʱ�Ӳ������üĴ���8
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  clk_8bit_cfg8_value0 : 7;  /* bit[0-6]  : ʱ�Ӳ��������� */
        unsigned int  clk_8bit_cfg8_vld0   : 1;  /* bit[7-7]  : ʱ�Ӳ�����Чָʾ�� */
        unsigned int  clk_8bit_cfg8_value1 : 7;  /* bit[8-14] : ʱ�Ӳ��������� */
        unsigned int  clk_8bit_cfg8_vld1   : 1;  /* bit[15-15]: ʱ�Ӳ�����Чָʾ�� */
        unsigned int  clk_8bit_cfg8_value2 : 7;  /* bit[16-22]: ʱ�Ӳ��������� */
        unsigned int  clk_8bit_cfg8_vld2   : 1;  /* bit[23-23]: ʱ�Ӳ�����Чָʾ�� */
        unsigned int  clk_8bit_cfg8_value3 : 7;  /* bit[24-30]: ʱ�Ӳ��������� */
        unsigned int  clk_8bit_cfg8_vld3   : 1;  /* bit[31-31]: ʱ�Ӳ�����Чָʾ�� */
    } reg;
} SOC_PERI_SCTRL_SC_CLKCFG8BIT8_UNION;
#endif
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT8_clk_8bit_cfg8_value0_START  (0)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT8_clk_8bit_cfg8_value0_END    (6)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT8_clk_8bit_cfg8_vld0_START    (7)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT8_clk_8bit_cfg8_vld0_END      (7)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT8_clk_8bit_cfg8_value1_START  (8)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT8_clk_8bit_cfg8_value1_END    (14)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT8_clk_8bit_cfg8_vld1_START    (15)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT8_clk_8bit_cfg8_vld1_END      (15)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT8_clk_8bit_cfg8_value2_START  (16)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT8_clk_8bit_cfg8_value2_END    (22)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT8_clk_8bit_cfg8_vld2_START    (23)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT8_clk_8bit_cfg8_vld2_END      (23)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT8_clk_8bit_cfg8_value3_START  (24)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT8_clk_8bit_cfg8_value3_END    (30)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT8_clk_8bit_cfg8_vld3_START    (31)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT8_clk_8bit_cfg8_vld3_END      (31)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_CLKCFG8BIT9_UNION
 �ṹ˵��  : SC_CLKCFG8BIT9 �Ĵ����ṹ���塣��ַƫ����:0x4B4����ֵ:0x7F7F7F7F�����:32
 �Ĵ���˵��: ʱ�Ӳ������üĴ���16
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  clk_8bit_cfg9_value0 : 7;  /* bit[0-6]  : ʱ�Ӳ��������� */
        unsigned int  clk_8bit_cfg9_vld0   : 1;  /* bit[7-7]  : ʱ�Ӳ�����Чָʾ�� */
        unsigned int  clk_8bit_cfg9_value1 : 7;  /* bit[8-14] : ʱ�Ӳ��������� */
        unsigned int  clk_8bit_cfg9_vld1   : 1;  /* bit[15-15]: ʱ�Ӳ�����Чָʾ�� */
        unsigned int  clk_8bit_cfg9_value2 : 7;  /* bit[16-22]: ʱ�Ӳ��������� */
        unsigned int  clk_8bit_cfg9_vld2   : 1;  /* bit[23-23]: ʱ�Ӳ�����Чָʾ�� */
        unsigned int  clk_8bit_cfg9_value3 : 7;  /* bit[24-30]: ʱ�Ӳ��������� */
        unsigned int  clk_8bit_cfg9_vld3   : 1;  /* bit[31-31]: ʱ�Ӳ�����Чָʾ�� */
    } reg;
} SOC_PERI_SCTRL_SC_CLKCFG8BIT9_UNION;
#endif
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT9_clk_8bit_cfg9_value0_START  (0)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT9_clk_8bit_cfg9_value0_END    (6)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT9_clk_8bit_cfg9_vld0_START    (7)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT9_clk_8bit_cfg9_vld0_END      (7)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT9_clk_8bit_cfg9_value1_START  (8)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT9_clk_8bit_cfg9_value1_END    (14)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT9_clk_8bit_cfg9_vld1_START    (15)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT9_clk_8bit_cfg9_vld1_END      (15)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT9_clk_8bit_cfg9_value2_START  (16)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT9_clk_8bit_cfg9_value2_END    (22)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT9_clk_8bit_cfg9_vld2_START    (23)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT9_clk_8bit_cfg9_vld2_END      (23)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT9_clk_8bit_cfg9_value3_START  (24)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT9_clk_8bit_cfg9_value3_END    (30)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT9_clk_8bit_cfg9_vld3_START    (31)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT9_clk_8bit_cfg9_vld3_END      (31)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_CLKCFG8BIT10_UNION
 �ṹ˵��  : SC_CLKCFG8BIT10 �Ĵ����ṹ���塣��ַƫ����:0x4B8����ֵ:0x7F7F7F7F�����:32
 �Ĵ���˵��: ʱ�Ӳ������üĴ���17
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  clk_8bit_cfg10_value0 : 7;  /* bit[0-6]  : ʱ�Ӳ��������� */
        unsigned int  clk_8bit_cfg10_vld0   : 1;  /* bit[7-7]  : ʱ�Ӳ�����Чָʾ�� */
        unsigned int  clk_8bit_cfg10_value1 : 7;  /* bit[8-14] : ʱ�Ӳ��������� */
        unsigned int  clk_8bit_cfg10_vld1   : 1;  /* bit[15-15]: ʱ�Ӳ�����Чָʾ�� */
        unsigned int  clk_8bit_cfg10_value2 : 7;  /* bit[16-22]: ʱ�Ӳ��������� */
        unsigned int  clk_8bit_cfg10_vld2   : 1;  /* bit[23-23]: ʱ�Ӳ�����Чָʾ�� */
        unsigned int  clk_8bit_cfg10_value3 : 7;  /* bit[24-30]: ʱ�Ӳ��������� */
        unsigned int  clk_8bit_cfg10_vld3   : 1;  /* bit[31-31]: ʱ�Ӳ�����Чָʾ�� */
    } reg;
} SOC_PERI_SCTRL_SC_CLKCFG8BIT10_UNION;
#endif
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT10_clk_8bit_cfg10_value0_START  (0)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT10_clk_8bit_cfg10_value0_END    (6)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT10_clk_8bit_cfg10_vld0_START    (7)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT10_clk_8bit_cfg10_vld0_END      (7)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT10_clk_8bit_cfg10_value1_START  (8)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT10_clk_8bit_cfg10_value1_END    (14)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT10_clk_8bit_cfg10_vld1_START    (15)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT10_clk_8bit_cfg10_vld1_END      (15)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT10_clk_8bit_cfg10_value2_START  (16)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT10_clk_8bit_cfg10_value2_END    (22)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT10_clk_8bit_cfg10_vld2_START    (23)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT10_clk_8bit_cfg10_vld2_END      (23)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT10_clk_8bit_cfg10_value3_START  (24)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT10_clk_8bit_cfg10_value3_END    (30)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT10_clk_8bit_cfg10_vld3_START    (31)
#define SOC_PERI_SCTRL_SC_CLKCFG8BIT10_clk_8bit_cfg10_vld3_END      (31)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_CARM_CTRL0_UNION
 �ṹ˵��  : SC_CARM_CTRL0 �Ĵ����ṹ���塣��ַƫ����:0x500����ֵ:0x00000C9B�����:32
 �Ĵ���˵��: CARM���ƼĴ���0��CARM DEBUG�ȿ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  carm_ramctrl_s_ema   : 3;  /* bit[0-2]  : memory�����ʿ��ƣ����ֵ������memory����ʱ���� */
        unsigned int  reserved_0           : 1;  /* bit[3]    : reserved */
        unsigned int  carm_ramctrl_s_emaw  : 2;  /* bit[4-5]  : memoryд���ʿ��ƣ����ֵ������memoryд��ʱ�����ĵ���������������LIB�����ֲ��ǣ����������ĵ��� */
        unsigned int  carm_ramctrl_s_emas  : 1;  /* bit[6]    : ��HSmemory�����ã�
                                                                ��HDmemoryΪ����bit�������壻 */
        unsigned int  reserved_1           : 3;  /* bit[7-9]  : reserved */
        unsigned int  carm_ramctrl_s_ret1n : 1;  /* bit[10]   : retention����1
                                                                0��retentionģʽ1��
                                                                1����������ģʽ�� */
        unsigned int  carm_ramctrl_s_ret2n : 1;  /* bit[11]   : ֻ�е���powergatingѡ��ʱ�д˹��ܣ���û��powergating���ܵ�memory���˶˿�Ϊ�����������塣
                                                                retention����2
                                                                0��retentionģʽ2��
                                                                1����������ģʽ�� */
        unsigned int  carm_ramctrl_s_pgen  : 1;  /* bit[12]   : ֻ�е���powergatingѡ��ʱ�д˹��ܣ���û��powergating���ܵ�memory���˶˿�Ϊ�����������塣
                                                                0����������ģʽ��
                                                                1�����ret1n/ret2n���retention�� */
        unsigned int  reserved_2           : 3;  /* bit[13-15]: reserved */
        unsigned int  carm_cp15disable     : 1;  /* bit[16]   : Э������CP15�Ĵ�����д������
                                                                0����ʹ��д������
                                                                1��ʹ��д������ */
        unsigned int  carm_cfgdisable      : 1;  /* bit[17]   : ARM�ڲ����ƼĴ�����д������
                                                                0����ʹ��д������
                                                                1��ʹ��д������ */
        unsigned int  carm_l2rstdisable    : 1;  /* bit[18]   : CARM l2cache��λ���������Ƿ�ʹ��Ч
                                                                0����
                                                                1���ǡ� */
        unsigned int  carm_l1rstdisable    : 1;  /* bit[19]   : CARM l1cache��λ���������Ƿ�ʹ��Ч
                                                                0����
                                                                1���ǡ� */
        unsigned int  carm_dbgrestart      : 1;  /* bit[20]   : External restart requests */
        unsigned int  carm_debug_req       : 1;  /* bit[21]   : carmdebugrequest�źš�
                                                                0����ʹ������
                                                                1��ʹ������ */
        unsigned int  carm_dbgpwrup        : 1;  /* bit[22]   : carm debug�ϵ��ź� */
        unsigned int  reserved_3           : 3;  /* bit[23-25]: reserved */
        unsigned int  secure_cfg_tzpc_dep  : 1;  /* bit[26]   : ��ȫ���ã�����tzpc_dep���ſ��Ƿ�ɱ�������ƣ�
                                                                0��tzpc_dep����ſؿɱ�������ơ�
                                                                1��tzpc_dep����ſز��ɱ�������ƣ�Ϊ������ */
        unsigned int  secure_cfg_seceng    : 1;  /* bit[27]   : ��ȫ���ã�����seceng���ſ��Ƿ�ɱ�������ƣ�
                                                                0��seceng����ſؿɱ�������ơ�
                                                                1��seceng����ſز��ɱ�������ƣ�Ϊ������ */
        unsigned int  secure_cfg_i2c0      : 1;  /* bit[28]   : ��ȫ���ã�����i2c0���ſ��Ƿ�ɱ�������ƣ�
                                                                0��i2c0����ſؿɱ�������ơ�
                                                                1��i2c0����ſز��ɱ�������ƣ�Ϊ������ */
        unsigned int  secure_cfg_i2c1      : 1;  /* bit[29]   : ��ȫ���ã�����i2c1���ſ��Ƿ�ɱ�������ƣ�
                                                                0��i2c1����ſؿɱ�������ơ�
                                                                1��i2c1����ſز��ɱ�������ƣ�Ϊ������ */
        unsigned int  secure_cfg_i2c2      : 1;  /* bit[30]   : ��ȫ���ã�����i2c2���ſ��Ƿ�ɱ�������ƣ�
                                                                0��i2c2����ſؿɱ�������ơ�
                                                                1��i2c2����ſز��ɱ�������ƣ�Ϊ������ */
        unsigned int  secure_cfg_i2c3      : 1;  /* bit[31]   : ��ȫ���ã�����i2c3���ſ��Ƿ�ɱ�������ƣ�
                                                                0��i2c3����ſؿɱ�������ơ�
                                                                1��i2c3����ſز��ɱ�������ƣ�Ϊ������ */
    } reg;
} SOC_PERI_SCTRL_SC_CARM_CTRL0_UNION;
#endif
#define SOC_PERI_SCTRL_SC_CARM_CTRL0_carm_ramctrl_s_ema_START    (0)
#define SOC_PERI_SCTRL_SC_CARM_CTRL0_carm_ramctrl_s_ema_END      (2)
#define SOC_PERI_SCTRL_SC_CARM_CTRL0_carm_ramctrl_s_emaw_START   (4)
#define SOC_PERI_SCTRL_SC_CARM_CTRL0_carm_ramctrl_s_emaw_END     (5)
#define SOC_PERI_SCTRL_SC_CARM_CTRL0_carm_ramctrl_s_emas_START   (6)
#define SOC_PERI_SCTRL_SC_CARM_CTRL0_carm_ramctrl_s_emas_END     (6)
#define SOC_PERI_SCTRL_SC_CARM_CTRL0_carm_ramctrl_s_ret1n_START  (10)
#define SOC_PERI_SCTRL_SC_CARM_CTRL0_carm_ramctrl_s_ret1n_END    (10)
#define SOC_PERI_SCTRL_SC_CARM_CTRL0_carm_ramctrl_s_ret2n_START  (11)
#define SOC_PERI_SCTRL_SC_CARM_CTRL0_carm_ramctrl_s_ret2n_END    (11)
#define SOC_PERI_SCTRL_SC_CARM_CTRL0_carm_ramctrl_s_pgen_START   (12)
#define SOC_PERI_SCTRL_SC_CARM_CTRL0_carm_ramctrl_s_pgen_END     (12)
#define SOC_PERI_SCTRL_SC_CARM_CTRL0_carm_cp15disable_START      (16)
#define SOC_PERI_SCTRL_SC_CARM_CTRL0_carm_cp15disable_END        (16)
#define SOC_PERI_SCTRL_SC_CARM_CTRL0_carm_cfgdisable_START       (17)
#define SOC_PERI_SCTRL_SC_CARM_CTRL0_carm_cfgdisable_END         (17)
#define SOC_PERI_SCTRL_SC_CARM_CTRL0_carm_l2rstdisable_START     (18)
#define SOC_PERI_SCTRL_SC_CARM_CTRL0_carm_l2rstdisable_END       (18)
#define SOC_PERI_SCTRL_SC_CARM_CTRL0_carm_l1rstdisable_START     (19)
#define SOC_PERI_SCTRL_SC_CARM_CTRL0_carm_l1rstdisable_END       (19)
#define SOC_PERI_SCTRL_SC_CARM_CTRL0_carm_dbgrestart_START       (20)
#define SOC_PERI_SCTRL_SC_CARM_CTRL0_carm_dbgrestart_END         (20)
#define SOC_PERI_SCTRL_SC_CARM_CTRL0_carm_debug_req_START        (21)
#define SOC_PERI_SCTRL_SC_CARM_CTRL0_carm_debug_req_END          (21)
#define SOC_PERI_SCTRL_SC_CARM_CTRL0_carm_dbgpwrup_START         (22)
#define SOC_PERI_SCTRL_SC_CARM_CTRL0_carm_dbgpwrup_END           (22)
#define SOC_PERI_SCTRL_SC_CARM_CTRL0_secure_cfg_tzpc_dep_START   (26)
#define SOC_PERI_SCTRL_SC_CARM_CTRL0_secure_cfg_tzpc_dep_END     (26)
#define SOC_PERI_SCTRL_SC_CARM_CTRL0_secure_cfg_seceng_START     (27)
#define SOC_PERI_SCTRL_SC_CARM_CTRL0_secure_cfg_seceng_END       (27)
#define SOC_PERI_SCTRL_SC_CARM_CTRL0_secure_cfg_i2c0_START       (28)
#define SOC_PERI_SCTRL_SC_CARM_CTRL0_secure_cfg_i2c0_END         (28)
#define SOC_PERI_SCTRL_SC_CARM_CTRL0_secure_cfg_i2c1_START       (29)
#define SOC_PERI_SCTRL_SC_CARM_CTRL0_secure_cfg_i2c1_END         (29)
#define SOC_PERI_SCTRL_SC_CARM_CTRL0_secure_cfg_i2c2_START       (30)
#define SOC_PERI_SCTRL_SC_CARM_CTRL0_secure_cfg_i2c2_END         (30)
#define SOC_PERI_SCTRL_SC_CARM_CTRL0_secure_cfg_i2c3_START       (31)
#define SOC_PERI_SCTRL_SC_CARM_CTRL0_secure_cfg_i2c3_END         (31)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_CARM_CTRL1_UNION
 �ṹ˵��  : SC_CARM_CTRL1 �Ĵ����ṹ���塣��ַƫ����:0x504����ֵ:0x00000000�����:32
 �Ĵ���˵��: CARM���ƼĴ���1�����ڿ���CARM filterģʽʹ�ܼ���ʼ�ͽ�����ַ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ccpu_cfgte   : 1;  /* bit[0]   : Thumb��չָ��ѡ�񡣸��źų�ʼ��CP15�ڲ�SCTLR�Ĵ���TEλֵ������λʱ���ں˻�ȡ��
                                                       0��ARMָ��
                                                       1��Thumbָ�� */
        unsigned int  carm_cfgend  : 1;  /* bit[1]   : ��С��ѡ�񡣸��źų�ʼ��CP15�ڲ�SCTLR�Ĵ�����EEλֵ����λʱ���ں˻�ȡ��
                                                       0��С��ģʽ��
                                                       1�����ģʽ�� */
        unsigned int  carm_vinithi : 1;  /* bit[2]   : ָʾCARM���ַ��
                                                       0��ָʾ���ַ��0x00000000,��ddr��
                                                       1��ָʾ���ַ��0xffff0000,��bootrom�� */
        unsigned int  reserved     : 29; /* bit[3-31]: ������ */
    } reg;
} SOC_PERI_SCTRL_SC_CARM_CTRL1_UNION;
#endif
#define SOC_PERI_SCTRL_SC_CARM_CTRL1_ccpu_cfgte_START    (0)
#define SOC_PERI_SCTRL_SC_CARM_CTRL1_ccpu_cfgte_END      (0)
#define SOC_PERI_SCTRL_SC_CARM_CTRL1_carm_cfgend_START   (1)
#define SOC_PERI_SCTRL_SC_CARM_CTRL1_carm_cfgend_END     (1)
#define SOC_PERI_SCTRL_SC_CARM_CTRL1_carm_vinithi_START  (2)
#define SOC_PERI_SCTRL_SC_CARM_CTRL1_carm_vinithi_END    (2)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_CARM_STAT0_UNION
 �ṹ˵��  : SC_CARM_STAT0 �Ĵ����ṹ���塣��ַƫ����:0x508����ֵ:0x00000000�����:32
 �Ĵ���˵��: CARM״̬�Ĵ���0��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  carm_dbgtrigger   : 1;  /* bit[0]   : Debug external request taken */
        unsigned int  carm_dbgrestarted : 1;  /* bit[1]   : Handshake for DBGRESTART */
        unsigned int  carm_dbgnopwrdwn  : 1;  /* bit[2]   : ���µ�����
                                                            0���µ�����ʱ���������µ�
                                                            1���µ�����ʱ�����������µ� */
        unsigned int  carm_dbgpwrupreq  : 1;  /* bit[3]   : �ϵ�����
                                                            0���µ�����
                                                            1���ϵ����� */
        unsigned int  carm_smp_amp      : 1;  /* bit[4]   : CARM��AMP����SMPģʽָʾλ��
                                                            0��AMPģʽ��
                                                            1��SMPģʽ�� */
        unsigned int  carm_standby_wfi  : 1;  /* bit[5]   : CARMWFI״ָ̬ʾ������Ч��
                                                            0��������standbywfi״̬��
                                                            1������standbywfi״̬�� */
        unsigned int  carm_standby_wfe  : 1;  /* bit[6]   : CARMWFE״ָ̬ʾ������Ч��
                                                            0=processornotinWFEStandbymode
                                                            1=processorinWFEStandbymode. */
        unsigned int  carm_dbgack       : 1;  /* bit[7]   : carm_dbgack��carm��debugacknowledge״ָ̬ʾ�źţ�
                                                            0=notacknowledged
                                                            1=acknowledged. */
        unsigned int  carm_standbywfil2 : 1;  /* bit[8]   : L2 memory system WFI standby״ָ̬ʾ����������������ʱ����ߣ�
                                                             ���д���������WFI
                                                             ACINACTMΪ��
                                                             L2 memory system����IDLE */
        unsigned int  reserved          : 23; /* bit[9-31]: ������ */
    } reg;
} SOC_PERI_SCTRL_SC_CARM_STAT0_UNION;
#endif
#define SOC_PERI_SCTRL_SC_CARM_STAT0_carm_dbgtrigger_START    (0)
#define SOC_PERI_SCTRL_SC_CARM_STAT0_carm_dbgtrigger_END      (0)
#define SOC_PERI_SCTRL_SC_CARM_STAT0_carm_dbgrestarted_START  (1)
#define SOC_PERI_SCTRL_SC_CARM_STAT0_carm_dbgrestarted_END    (1)
#define SOC_PERI_SCTRL_SC_CARM_STAT0_carm_dbgnopwrdwn_START   (2)
#define SOC_PERI_SCTRL_SC_CARM_STAT0_carm_dbgnopwrdwn_END     (2)
#define SOC_PERI_SCTRL_SC_CARM_STAT0_carm_dbgpwrupreq_START   (3)
#define SOC_PERI_SCTRL_SC_CARM_STAT0_carm_dbgpwrupreq_END     (3)
#define SOC_PERI_SCTRL_SC_CARM_STAT0_carm_smp_amp_START       (4)
#define SOC_PERI_SCTRL_SC_CARM_STAT0_carm_smp_amp_END         (4)
#define SOC_PERI_SCTRL_SC_CARM_STAT0_carm_standby_wfi_START   (5)
#define SOC_PERI_SCTRL_SC_CARM_STAT0_carm_standby_wfi_END     (5)
#define SOC_PERI_SCTRL_SC_CARM_STAT0_carm_standby_wfe_START   (6)
#define SOC_PERI_SCTRL_SC_CARM_STAT0_carm_standby_wfe_END     (6)
#define SOC_PERI_SCTRL_SC_CARM_STAT0_carm_dbgack_START        (7)
#define SOC_PERI_SCTRL_SC_CARM_STAT0_carm_dbgack_END          (7)
#define SOC_PERI_SCTRL_SC_CARM_STAT0_carm_standbywfil2_START  (8)
#define SOC_PERI_SCTRL_SC_CARM_STAT0_carm_standbywfil2_END    (8)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_DSP_SUBSYS_CTRL0_UNION
 �ṹ˵��  : SC_DSP_SUBSYS_CTRL0 �Ĵ����ṹ���塣��ַƫ����:0x600����ֵ:0x00000004�����:32
 �Ĵ���˵��: HIFI���ƼĴ�������������HIFI�����źţ�ͬʱҲ���ڼĴ�HIFI��״̬�źš�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  hifi_stat_vector_sel  : 1;  /* bit[0]   : ���������ַ�л��ⲿӲ�������źš�
                                                                0��ѡ��Ĭ�����������ַ��
                                                                1��ѡ���û���������������ַ��
                                                                Boot������Ҫ�źţ�����reset��TCM���������ⲿ������Ĭ��ΪTCM������Ĭ��̬Ϊ0������ϵͳ����������������á�
                                                                ��λ��BReset���ͷ�ǰ�����ȶ�6���ں����ڣ�Breset�ͷź󱣳�����10�ں����ڡ� */
        unsigned int  hifi_ocd_halton_reset : 1;  /* bit[1]   : ��λ����Ӳ��ָʾ���롣HIFI��������λʱ���ź�Ϊ1�������λ������������OCDhaltmode������ϵͳ��������������䣬Ĭ��̬Ϊ0��
                                                                0������λ��
                                                                1�����븴λ�� */
        unsigned int  hifi_runstall         : 1;  /* bit[2]   : ��������ˮ����ͣ��stall�������źš�
                                                                0����������ˮ��������
                                                                1����������ˮ����ͣ��
                                                                ��Ҫ����������Ӧ�ã�
                                                                ��1������ʱ���ڸ�λǰ����2��������Ч���ͷŸ�λ���ⲿload��������ݣ�load��ɺ��ͷŸ��ź�ʹ��������ʼȡָ��ִ�У�
                                                                ��2��������ʱ�������ⲿ���ƽ�����˳��͹��ģ�sleep��ģʽ�� */
        unsigned int  reserved_0            : 27; /* bit[3-29]: ������ */
        unsigned int  reserved_1            : 1;  /* bit[30]  : ������OCDhaltmode״ָ̬ʾ�źţ�����Ч��
                                                                0��δ����haltmode��
                                                                1������haltmode�� */
        unsigned int  reserved_2            : 1;  /* bit[31]  : ������sleepmode״ָ̬ʾ�źţ�����Ч��ָʾ��ǰ������ͨ��ִ��WAITIָ�����sleepmode��clockgating�����ȴ�δ�����жϻ��ѡ�
                                                                0��δ����sleepmode��
                                                                1������sleepmode�� */
    } reg;
} SOC_PERI_SCTRL_SC_DSP_SUBSYS_CTRL0_UNION;
#endif
#define SOC_PERI_SCTRL_SC_DSP_SUBSYS_CTRL0_hifi_stat_vector_sel_START   (0)
#define SOC_PERI_SCTRL_SC_DSP_SUBSYS_CTRL0_hifi_stat_vector_sel_END     (0)
#define SOC_PERI_SCTRL_SC_DSP_SUBSYS_CTRL0_hifi_ocd_halton_reset_START  (1)
#define SOC_PERI_SCTRL_SC_DSP_SUBSYS_CTRL0_hifi_ocd_halton_reset_END    (1)
#define SOC_PERI_SCTRL_SC_DSP_SUBSYS_CTRL0_hifi_runstall_START          (2)
#define SOC_PERI_SCTRL_SC_DSP_SUBSYS_CTRL0_hifi_runstall_END            (2)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_HIFI_CTRL1_UNION
 �ṹ˵��  : SC_HIFI_CTRL1 �Ĵ����ṹ���塣��ַƫ����:0x604����ֵ:0x00000000�����:32
 �Ĵ���˵��: HIFI NMI�жϿ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  hifi_nmi : 16; /* bit[0-15] : hifi nmi�жϲ���
                                                    0�������ж�
                                                    1�������ж� */
        unsigned int  reserved : 16; /* bit[16-31]: reserved */
    } reg;
} SOC_PERI_SCTRL_SC_HIFI_CTRL1_UNION;
#endif
#define SOC_PERI_SCTRL_SC_HIFI_CTRL1_hifi_nmi_START  (0)
#define SOC_PERI_SCTRL_SC_HIFI_CTRL1_hifi_nmi_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_HIFI_CTRL0_UNION
 �ṹ˵��  : SC_HIFI_CTRL0 �Ĵ����ṹ���塣��ַƫ����:0x608����ֵ:0x00000000�����:32
 �Ĵ���˵��: hifi instruction space remap
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  hifi_instruction_remap_addr : 16; /* bit[0-15] : hifiָ��ռ�remap��ַ */
        unsigned int  reserved                    : 16; /* bit[16-31]:  */
    } reg;
} SOC_PERI_SCTRL_SC_HIFI_CTRL0_UNION;
#endif
#define SOC_PERI_SCTRL_SC_HIFI_CTRL0_hifi_instruction_remap_addr_START  (0)
#define SOC_PERI_SCTRL_SC_HIFI_CTRL0_hifi_instruction_remap_addr_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_HIFI_CTRL2_UNION
 �ṹ˵��  : SC_HIFI_CTRL2 �Ĵ����ṹ���塣��ַƫ����:0x60C����ֵ:0x00003000�����:32
 �Ĵ���˵��: hifi boot addr��ȫ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  hifi_boot_addr : 16; /* bit[0-15] : HIFIƬ��������ַ���ã���λֵΪ0x3000�� */
        unsigned int  reserved       : 16; /* bit[16-31]: reserved */
    } reg;
} SOC_PERI_SCTRL_SC_HIFI_CTRL2_UNION;
#endif
#define SOC_PERI_SCTRL_SC_HIFI_CTRL2_hifi_boot_addr_START  (0)
#define SOC_PERI_SCTRL_SC_HIFI_CTRL2_hifi_boot_addr_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_HIFI_CTRL3_UNION
 �ṹ˵��  : SC_HIFI_CTRL3 �Ĵ����ṹ���塣��ַƫ����:0x0610����ֵ:0x00000000�����:32
 �Ĵ���˵��: hifi��������ڴ��ַ��Χ���ƼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  hifi_access_start_addr0 : 12; /* bit[0-11] : hifi ���ʵ�ַ�ε�һ����ʼ��ַ����1MBΪ��λ�� */
        unsigned int  hifi_access_end_addr0   : 12; /* bit[12-23]: hifi ���ʵ�ַ�ε�һ�ν�����ַ����1MBΪ��λ�� */
        unsigned int  hifi_access_permit      : 1;  /* bit[24]   : hifi��ʼ������ַ����������ʻ������η��ʣ�
                                                                   0���������
                                                                   1�����η��� */
        unsigned int  reserved_0              : 3;  /* bit[25-27]: reserved */
        unsigned int  hifi_access_en          : 1;  /* bit[28]   : hifi��ַ�����η��ʹ���ʹ���źţ���������������ú�������ø�bit��
                                                                   0����ʹ��
                                                                   1��ʹ�� */
        unsigned int  reserved_1              : 3;  /* bit[29-31]: reserved */
    } reg;
} SOC_PERI_SCTRL_SC_HIFI_CTRL3_UNION;
#endif
#define SOC_PERI_SCTRL_SC_HIFI_CTRL3_hifi_access_start_addr0_START  (0)
#define SOC_PERI_SCTRL_SC_HIFI_CTRL3_hifi_access_start_addr0_END    (11)
#define SOC_PERI_SCTRL_SC_HIFI_CTRL3_hifi_access_end_addr0_START    (12)
#define SOC_PERI_SCTRL_SC_HIFI_CTRL3_hifi_access_end_addr0_END      (23)
#define SOC_PERI_SCTRL_SC_HIFI_CTRL3_hifi_access_permit_START       (24)
#define SOC_PERI_SCTRL_SC_HIFI_CTRL3_hifi_access_permit_END         (24)
#define SOC_PERI_SCTRL_SC_HIFI_CTRL3_hifi_access_en_START           (28)
#define SOC_PERI_SCTRL_SC_HIFI_CTRL3_hifi_access_en_END             (28)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_HIFI_CTRL4_UNION
 �ṹ˵��  : SC_HIFI_CTRL4 �Ĵ����ṹ���塣��ַƫ����:0x0614����ֵ:0x00000000�����:32
 �Ĵ���˵��: hifi��������ڴ��ַ��Χ���ƼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  hifi_access_start_addr1 : 12; /* bit[0-11] : hifi ���ʵ�ַ�εڶ�����ʼ��ַ����1MBΪ��λ�� */
        unsigned int  hifi_access_end_addr1   : 12; /* bit[12-23]: hifi ���ʵ�ַ�εڶ��ν�����ַ����1MBΪ��λ�� */
        unsigned int  reserved                : 8;  /* bit[24-31]: reserved */
    } reg;
} SOC_PERI_SCTRL_SC_HIFI_CTRL4_UNION;
#endif
#define SOC_PERI_SCTRL_SC_HIFI_CTRL4_hifi_access_start_addr1_START  (0)
#define SOC_PERI_SCTRL_SC_HIFI_CTRL4_hifi_access_start_addr1_END    (11)
#define SOC_PERI_SCTRL_SC_HIFI_CTRL4_hifi_access_end_addr1_START    (12)
#define SOC_PERI_SCTRL_SC_HIFI_CTRL4_hifi_access_end_addr1_END      (23)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_TEMP0_LAG_UNION
 �ṹ˵��  : SC_TEMP0_LAG �Ĵ����ṹ���塣��ַƫ����:0x700����ֵ:0x00000000�����:32
 �Ĵ���˵��: Tsensor0�¶ȱȽ��ͻط�Χ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  temp0_lag : 5;  /* bit[0-4] : Tsensor0�¶ȱȽ��ͻط�Χ����λ����ֵ��Ӧ���¶�ֵΪ200/255=0.7843�棬���÷�Χ0~24.3�棬����ֵ���ܴ����κ�һ���¶���ֵ���üĴ�����
                                                    ˵���������¶�ֵ���¶���ֵ�Ƚϲ����ж�ʱ�������¶�ֵ����ֵ����Ƶ��������Ƶ�������жϣ�ʵ���ж��˶������¶�����������ֵʱ��ֱ�Ӳ����жϣ��¶��½�������ֵ�������½�������ֵʱ���Ų����жϡ� */
        unsigned int  reserved  : 27; /* bit[5-31]: ������ */
    } reg;
} SOC_PERI_SCTRL_SC_TEMP0_LAG_UNION;
#endif
#define SOC_PERI_SCTRL_SC_TEMP0_LAG_temp0_lag_START  (0)
#define SOC_PERI_SCTRL_SC_TEMP0_LAG_temp0_lag_END    (4)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_TEMP0_TH_UNION
 �ṹ˵��  : SC_TEMP0_TH �Ĵ����ṹ���塣��ַƫ����:0x704����ֵ:0x00000000�����:32
 �Ĵ���˵��: Tsensor0�¶���ֵ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  temp0_0th : 8;  /* bit[0-7]  : Tsensor0�¶���ֵ0��
                                                     0x00��С��-60�棻
                                                     0x01��-60~-59.21569�棻
                                                     0x02��-59.21569~-58.43137�棻
                                                     ......
                                                     0xfd��+138.43137~+139.21569�棻
                                                     0xfe��+139.21569~+140�棻
                                                     0xff������+140�档
                                                     ˵����8Bits����������������¶����������磬�¶ȵ���-60��ʱ����ֵΪ0x00�����¶���-60���&#45;-59.21569��֮�䣬��ֵΪ0x01�����¶���139.21569���140��֮�䣬��ֵΪ0xfe�����¶ȸ���140�棬����ֵΪ0xff��������ֵ֮��ļ��Ϊ200/255=0.7843�档 */
        unsigned int  temp0_1th : 8;  /* bit[8-15] : Tsensor0�¶���ֵ1��
                                                     ����ͬTsensor0�¶���ֵ0�� */
        unsigned int  temp0_2th : 8;  /* bit[16-23]: Tsensor0�¶���ֵ2��
                                                     ����ͬTsensor0�¶���ֵ0�� */
        unsigned int  temp0_3th : 8;  /* bit[24-31]: Tsensor0�¶���ֵ3��
                                                     ����ͬTsensor0�¶���ֵ0�� */
    } reg;
} SOC_PERI_SCTRL_SC_TEMP0_TH_UNION;
#endif
#define SOC_PERI_SCTRL_SC_TEMP0_TH_temp0_0th_START  (0)
#define SOC_PERI_SCTRL_SC_TEMP0_TH_temp0_0th_END    (7)
#define SOC_PERI_SCTRL_SC_TEMP0_TH_temp0_1th_START  (8)
#define SOC_PERI_SCTRL_SC_TEMP0_TH_temp0_1th_END    (15)
#define SOC_PERI_SCTRL_SC_TEMP0_TH_temp0_2th_START  (16)
#define SOC_PERI_SCTRL_SC_TEMP0_TH_temp0_2th_END    (23)
#define SOC_PERI_SCTRL_SC_TEMP0_TH_temp0_3th_START  (24)
#define SOC_PERI_SCTRL_SC_TEMP0_TH_temp0_3th_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_TEMP0_RST_TH_UNION
 �ṹ˵��  : SC_TEMP0_RST_TH �Ĵ����ṹ���塣��ַƫ����:0x708����ֵ:0x00000000�����:32
 �Ĵ���˵��: Tsensor0��λ��ֵ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  temp0_rst_th : 8;  /* bit[0-7] : Tsensor0��λ��ֵ��
                                                       ����ͬTsensor0�¶���ֵ0��
                                                       ˵����������ֵ����0xffʱ���޷�������λ����������С��0xff */
        unsigned int  reserved     : 24; /* bit[8-31]: ������ */
    } reg;
} SOC_PERI_SCTRL_SC_TEMP0_RST_TH_UNION;
#endif
#define SOC_PERI_SCTRL_SC_TEMP0_RST_TH_temp0_rst_th_START  (0)
#define SOC_PERI_SCTRL_SC_TEMP0_RST_TH_temp0_rst_th_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_TEMP0_CFG_UNION
 �ṹ˵��  : SC_TEMP0_CFG �Ĵ����ṹ���塣��ַƫ����:0x70C����ֵ:0x00000000�����:32
 �Ĵ���˵��: Tsensor0�������üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  temp0_trim_raw   : 4;  /* bit[0-3]  : reserved */
        unsigned int  temp0_ct_sel_raw : 2;  /* bit[4-5]  : Tsensor0HKADCת��ʱ��ѡ��
                                                            00��0.768ms��
                                                            01��6.144ms��
                                                            10��49.152ms��
                                                            11��393.216ms�� */
        unsigned int  reserved_0       : 6;  /* bit[6-11] : ������ */
        unsigned int  temp0_test_raw   : 8;  /* bit[12-19]: Tsensor0����ģʽ���á�����Tsensor0���ԡ�
                                                            000��local sensor ��default��
                                                            001��remote sensor1
                                                            010��remote sensor2
                                                            others��reserved */
        unsigned int  reserved_1       : 12; /* bit[20-31]: ������ */
    } reg;
} SOC_PERI_SCTRL_SC_TEMP0_CFG_UNION;
#endif
#define SOC_PERI_SCTRL_SC_TEMP0_CFG_temp0_trim_raw_START    (0)
#define SOC_PERI_SCTRL_SC_TEMP0_CFG_temp0_trim_raw_END      (3)
#define SOC_PERI_SCTRL_SC_TEMP0_CFG_temp0_ct_sel_raw_START  (4)
#define SOC_PERI_SCTRL_SC_TEMP0_CFG_temp0_ct_sel_raw_END    (5)
#define SOC_PERI_SCTRL_SC_TEMP0_CFG_temp0_test_raw_START    (12)
#define SOC_PERI_SCTRL_SC_TEMP0_CFG_temp0_test_raw_END      (19)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_TEMP0_EN_UNION
 �ṹ˵��  : SC_TEMP0_EN �Ĵ����ṹ���塣��ַƫ����:0x710����ֵ:0x00000000�����:32
 �Ĵ���˵��: Tsensor0�¶ȼ��ģ��ʹ�ܼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  temp0_en_raw : 1;  /* bit[0-0] : Tsensor0�¶ȼ��ģ��ʹ�ܡ�
                                                       0����ʹ�ܣ�
                                                       1��ʹ�ܡ� */
        unsigned int  reserved     : 31; /* bit[1-31]: ������ */
    } reg;
} SOC_PERI_SCTRL_SC_TEMP0_EN_UNION;
#endif
#define SOC_PERI_SCTRL_SC_TEMP0_EN_temp0_en_raw_START  (0)
#define SOC_PERI_SCTRL_SC_TEMP0_EN_temp0_en_raw_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_TEMP0_INT_EN_UNION
 �ṹ˵��  : SC_TEMP0_INT_EN �Ĵ����ṹ���塣��ַƫ����:0x714����ֵ:0x00000000�����:32
 �Ĵ���˵��: Tsensor0�¶ȼ���ж����μĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  temp0_int_en : 1;  /* bit[0-0] : Tsensor0�¶ȼ���ж����Ρ�
                                                       0�������жϣ�
                                                       1��ʹ���жϡ� */
        unsigned int  reserved     : 31; /* bit[1-31]: ������ */
    } reg;
} SOC_PERI_SCTRL_SC_TEMP0_INT_EN_UNION;
#endif
#define SOC_PERI_SCTRL_SC_TEMP0_INT_EN_temp0_int_en_START  (0)
#define SOC_PERI_SCTRL_SC_TEMP0_INT_EN_temp0_int_en_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_TEMP0_INT_CLR_UNION
 �ṹ˵��  : SC_TEMP0_INT_CLR �Ĵ����ṹ���塣��ַƫ����:0x718����ֵ:0x00000000�����:32
 �Ĵ���˵��: Tsensor0�¶ȼ���ж�����Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  temp0_int_clr : 1;  /* bit[0-0] : Tsensor0�¶ȼ���ж����㡣
                                                        0����Ч��
                                                        1�����Raw�жϺ�Mask�жϡ� */
        unsigned int  reserved      : 31; /* bit[1-31]: ������ */
    } reg;
} SOC_PERI_SCTRL_SC_TEMP0_INT_CLR_UNION;
#endif
#define SOC_PERI_SCTRL_SC_TEMP0_INT_CLR_temp0_int_clr_START  (0)
#define SOC_PERI_SCTRL_SC_TEMP0_INT_CLR_temp0_int_clr_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_TEMP0_RST_MSK_UNION
 �ṹ˵��  : SC_TEMP0_RST_MSK �Ĵ����ṹ���塣��ַƫ����:0x71C����ֵ:0x00000000�����:32
 �Ĵ���˵��: Tsensor0�¶ȼ�⸴λ���μĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  temp0_rst_msk : 1;  /* bit[0-0] : Tsensor0�¶ȼ�⸴λ���Ρ�
                                                        0�����θ�λ��
                                                        1��ʹ�ܸ�λ�� */
        unsigned int  reserved      : 31; /* bit[1-31]: ������ */
    } reg;
} SOC_PERI_SCTRL_SC_TEMP0_RST_MSK_UNION;
#endif
#define SOC_PERI_SCTRL_SC_TEMP0_RST_MSK_temp0_rst_msk_START  (0)
#define SOC_PERI_SCTRL_SC_TEMP0_RST_MSK_temp0_rst_msk_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_TEMP0_RAW_INT_UNION
 �ṹ˵��  : SC_TEMP0_RAW_INT �Ĵ����ṹ���塣��ַƫ����:0x720����ֵ:0x00000000�����:32
 �Ĵ���˵��: Tsensor0�¶ȼ��Raw�жϼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  temp0_rawint : 1;  /* bit[0-0] : Tsensor0�¶ȼ��Raw�жϡ�
                                                       0����Ч��
                                                       1����Ч�� */
        unsigned int  reserved     : 31; /* bit[1-31]: ������ */
    } reg;
} SOC_PERI_SCTRL_SC_TEMP0_RAW_INT_UNION;
#endif
#define SOC_PERI_SCTRL_SC_TEMP0_RAW_INT_temp0_rawint_START  (0)
#define SOC_PERI_SCTRL_SC_TEMP0_RAW_INT_temp0_rawint_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_TEMP0_MSK_INT_UNION
 �ṹ˵��  : SC_TEMP0_MSK_INT �Ĵ����ṹ���塣��ַƫ����:0x724����ֵ:0x00000000�����:32
 �Ĵ���˵��: Tsensor0�¶ȼ��Mask�жϼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  temp0_mskint : 1;  /* bit[0-0] : Tsensor0�¶ȼ��Mask�жϡ�
                                                       0����Ч��
                                                       1����Ч�� */
        unsigned int  reserved     : 31; /* bit[1-31]: ������ */
    } reg;
} SOC_PERI_SCTRL_SC_TEMP0_MSK_INT_UNION;
#endif
#define SOC_PERI_SCTRL_SC_TEMP0_MSK_INT_temp0_mskint_START  (0)
#define SOC_PERI_SCTRL_SC_TEMP0_MSK_INT_temp0_mskint_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_TEMP0_VALUE_UNION
 �ṹ˵��  : SC_TEMP0_VALUE �Ĵ����ṹ���塣��ַƫ����:0x728����ֵ:0x00000000�����:32
 �Ĵ���˵��: Tsensor0�¶ȼ��ֵ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  temp0_out_s : 8;  /* bit[0-7] : Tsensor0�¶ȼ��ֵ���������£�
                                                      00000000�����ڻ����-60�棻
                                                      ��
                                                      00110011��-20�棻
                                                      ��
                                                      01100110��20�棻
                                                      ��
                                                      10011001��60�棻
                                                      ��
                                                      11001100��100�棻
                                                      ��
                                                      11111111�����ڻ����140�棻
                                                      ˵����8Bits����������������¶������������¶���֮��ļ��Ϊ200/255=0.7843�档 */
        unsigned int  reserved    : 24; /* bit[8-31]: ������ */
    } reg;
} SOC_PERI_SCTRL_SC_TEMP0_VALUE_UNION;
#endif
#define SOC_PERI_SCTRL_SC_TEMP0_VALUE_temp0_out_s_START  (0)
#define SOC_PERI_SCTRL_SC_TEMP0_VALUE_temp0_out_s_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_RESERVED7_UNION
 �ṹ˵��  : SC_RESERVED7 �Ĵ����ṹ���塣��ַƫ����:0xD00����ֵ:0x00000000�����:32
 �Ĵ���˵��: �����Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_reserved7 : 32; /* bit[0-31]: �������Ĵ�����ֵ��ϵͳ��λ */
    } reg;
} SOC_PERI_SCTRL_SC_RESERVED7_UNION;
#endif
#define SOC_PERI_SCTRL_SC_RESERVED7_sc_reserved7_START  (0)
#define SOC_PERI_SCTRL_SC_RESERVED7_sc_reserved7_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_RESERVED8_UNION
 �ṹ˵��  : SC_RESERVED8 �Ĵ����ṹ���塣��ַƫ����:0xD04����ֵ:0x00000000�����:32
 �Ĵ���˵��: �����Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_reserved8 : 32; /* bit[0-31]: �������Ĵ�����ֵ��ϵͳ��λ */
    } reg;
} SOC_PERI_SCTRL_SC_RESERVED8_UNION;
#endif
#define SOC_PERI_SCTRL_SC_RESERVED8_sc_reserved8_START  (0)
#define SOC_PERI_SCTRL_SC_RESERVED8_sc_reserved8_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_RESERVED11_UNION
 �ṹ˵��  : SC_RESERVED11 �Ĵ����ṹ���塣��ַƫ����:0xD08����ֵ:0x00000000�����:32
 �Ĵ���˵��: �����Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_reserved11 : 32; /* bit[0-31]: �������Ĵ�����ֵ��ϵͳ��λ */
    } reg;
} SOC_PERI_SCTRL_SC_RESERVED11_UNION;
#endif
#define SOC_PERI_SCTRL_SC_RESERVED11_sc_reserved11_START  (0)
#define SOC_PERI_SCTRL_SC_RESERVED11_sc_reserved11_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_RESERVED12_UNION
 �ṹ˵��  : SC_RESERVED12 �Ĵ����ṹ���塣��ַƫ����:0xD0C����ֵ:0x00000000�����:32
 �Ĵ���˵��: �����Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_reserved12 : 32; /* bit[0-31]: �������Ĵ�����ֵ��ϵͳ��λ */
    } reg;
} SOC_PERI_SCTRL_SC_RESERVED12_UNION;
#endif
#define SOC_PERI_SCTRL_SC_RESERVED12_sc_reserved12_START  (0)
#define SOC_PERI_SCTRL_SC_RESERVED12_sc_reserved12_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_RESERVED13_UNION
 �ṹ˵��  : SC_RESERVED13 �Ĵ����ṹ���塣��ַƫ����:0xD10����ֵ:0x00000000�����:32
 �Ĵ���˵��: �����Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_reserved13 : 32; /* bit[0-31]: �������Ĵ�����ֵ��ϵͳ��λ */
    } reg;
} SOC_PERI_SCTRL_SC_RESERVED13_UNION;
#endif
#define SOC_PERI_SCTRL_SC_RESERVED13_sc_reserved13_START  (0)
#define SOC_PERI_SCTRL_SC_RESERVED13_sc_reserved13_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_RESERVED14_UNION
 �ṹ˵��  : SC_RESERVED14 �Ĵ����ṹ���塣��ַƫ����:0xD14����ֵ:0x00000000�����:32
 �Ĵ���˵��: �����Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_reserved14 : 32; /* bit[0-31]: �������Ĵ�����ֵ��ϵͳ��λ */
    } reg;
} SOC_PERI_SCTRL_SC_RESERVED14_UNION;
#endif
#define SOC_PERI_SCTRL_SC_RESERVED14_sc_reserved14_START  (0)
#define SOC_PERI_SCTRL_SC_RESERVED14_sc_reserved14_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_RESERVED15_UNION
 �ṹ˵��  : SC_RESERVED15 �Ĵ����ṹ���塣��ַƫ����:0xD18����ֵ:0x00000000�����:32
 �Ĵ���˵��: �����Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_reserved15 : 32; /* bit[0-31]: �������Ĵ�����ֵ��ϵͳ��λ */
    } reg;
} SOC_PERI_SCTRL_SC_RESERVED15_UNION;
#endif
#define SOC_PERI_SCTRL_SC_RESERVED15_sc_reserved15_START  (0)
#define SOC_PERI_SCTRL_SC_RESERVED15_sc_reserved15_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_RESERVED16_UNION
 �ṹ˵��  : SC_RESERVED16 �Ĵ����ṹ���塣��ַƫ����:0xD1C����ֵ:0x00000000�����:32
 �Ĵ���˵��: �����Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_reserved16 : 32; /* bit[0-31]: �������Ĵ�����ֵ��ϵͳ��λ */
    } reg;
} SOC_PERI_SCTRL_SC_RESERVED16_UNION;
#endif
#define SOC_PERI_SCTRL_SC_RESERVED16_sc_reserved16_START  (0)
#define SOC_PERI_SCTRL_SC_RESERVED16_sc_reserved16_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_RESERVED17_UNION
 �ṹ˵��  : SC_RESERVED17 �Ĵ����ṹ���塣��ַƫ����:0xD20����ֵ:0x00000000�����:32
 �Ĵ���˵��: �����Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_reserved17 : 32; /* bit[0-31]: �������Ĵ�����ֵ��ϵͳ��λ */
    } reg;
} SOC_PERI_SCTRL_SC_RESERVED17_UNION;
#endif
#define SOC_PERI_SCTRL_SC_RESERVED17_sc_reserved17_START  (0)
#define SOC_PERI_SCTRL_SC_RESERVED17_sc_reserved17_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_RESERVED18_UNION
 �ṹ˵��  : SC_RESERVED18 �Ĵ����ṹ���塣��ַƫ����:0xD24����ֵ:0x00000000�����:32
 �Ĵ���˵��: �����Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_reserved18 : 32; /* bit[0-31]: �������Ĵ�����ֵ��ϵͳ��λ */
    } reg;
} SOC_PERI_SCTRL_SC_RESERVED18_UNION;
#endif
#define SOC_PERI_SCTRL_SC_RESERVED18_sc_reserved18_START  (0)
#define SOC_PERI_SCTRL_SC_RESERVED18_sc_reserved18_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_RESERVED21_UNION
 �ṹ˵��  : SC_RESERVED21 �Ĵ����ṹ���塣��ַƫ����:0xD28����ֵ:0x00000000�����:32
 �Ĵ���˵��: �����Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_reserved21 : 32; /* bit[0-31]: �������Ĵ�����ֵ����ϵͳ��λ */
    } reg;
} SOC_PERI_SCTRL_SC_RESERVED21_UNION;
#endif
#define SOC_PERI_SCTRL_SC_RESERVED21_sc_reserved21_START  (0)
#define SOC_PERI_SCTRL_SC_RESERVED21_sc_reserved21_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_RESERVED22_UNION
 �ṹ˵��  : SC_RESERVED22 �Ĵ����ṹ���塣��ַƫ����:0xD2C����ֵ:0x00000000�����:32
 �Ĵ���˵��: �����Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_reserved22 : 32; /* bit[0-31]: �������Ĵ�����ֵ����ϵͳ��λ */
    } reg;
} SOC_PERI_SCTRL_SC_RESERVED22_UNION;
#endif
#define SOC_PERI_SCTRL_SC_RESERVED22_sc_reserved22_START  (0)
#define SOC_PERI_SCTRL_SC_RESERVED22_sc_reserved22_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_RESERVED23_UNION
 �ṹ˵��  : SC_RESERVED23 �Ĵ����ṹ���塣��ַƫ����:0xD30����ֵ:0x00000000�����:32
 �Ĵ���˵��: �����Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_reserved23 : 32; /* bit[0-31]: �������Ĵ�����ֵ����ϵͳ��λ */
    } reg;
} SOC_PERI_SCTRL_SC_RESERVED23_UNION;
#endif
#define SOC_PERI_SCTRL_SC_RESERVED23_sc_reserved23_START  (0)
#define SOC_PERI_SCTRL_SC_RESERVED23_sc_reserved23_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_RESERVED24_UNION
 �ṹ˵��  : SC_RESERVED24 �Ĵ����ṹ���塣��ַƫ����:0xD34����ֵ:0x00000000�����:32
 �Ĵ���˵��: �����Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_reserved24 : 32; /* bit[0-31]: �������Ĵ�����ֵ����ϵͳ��λ */
    } reg;
} SOC_PERI_SCTRL_SC_RESERVED24_UNION;
#endif
#define SOC_PERI_SCTRL_SC_RESERVED24_sc_reserved24_START  (0)
#define SOC_PERI_SCTRL_SC_RESERVED24_sc_reserved24_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_RESERVED25_UNION
 �ṹ˵��  : SC_RESERVED25 �Ĵ����ṹ���塣��ַƫ����:0xD38����ֵ:0x00000000�����:32
 �Ĵ���˵��: �����Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_reserved25 : 32; /* bit[0-31]: �������Ĵ�����ֵ����ϵͳ��λ */
    } reg;
} SOC_PERI_SCTRL_SC_RESERVED25_UNION;
#endif
#define SOC_PERI_SCTRL_SC_RESERVED25_sc_reserved25_START  (0)
#define SOC_PERI_SCTRL_SC_RESERVED25_sc_reserved25_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_RESERVED26_UNION
 �ṹ˵��  : SC_RESERVED26 �Ĵ����ṹ���塣��ַƫ����:0xD3C����ֵ:0x00000000�����:32
 �Ĵ���˵��: �����Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_reserved26 : 32; /* bit[0-31]: �������Ĵ�����ֵ����ϵͳ��λ */
    } reg;
} SOC_PERI_SCTRL_SC_RESERVED26_UNION;
#endif
#define SOC_PERI_SCTRL_SC_RESERVED26_sc_reserved26_START  (0)
#define SOC_PERI_SCTRL_SC_RESERVED26_sc_reserved26_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_RESERVED27_UNION
 �ṹ˵��  : SC_RESERVED27 �Ĵ����ṹ���塣��ַƫ����:0xD40����ֵ:0x00000000�����:32
 �Ĵ���˵��: �����Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_reserved27 : 32; /* bit[0-31]: �������Ĵ�����ֵ����ϵͳ��λ */
    } reg;
} SOC_PERI_SCTRL_SC_RESERVED27_UNION;
#endif
#define SOC_PERI_SCTRL_SC_RESERVED27_sc_reserved27_START  (0)
#define SOC_PERI_SCTRL_SC_RESERVED27_sc_reserved27_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_PERI_SCTRL_SC_RESERVED28_UNION
 �ṹ˵��  : SC_RESERVED28 �Ĵ����ṹ���塣��ַƫ����:0xD44����ֵ:0x00000000�����:32
 �Ĵ���˵��: �����Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sc_reserved28 : 32; /* bit[0-31]: �������Ĵ�����ֵ����ϵͳ��λ */
    } reg;
} SOC_PERI_SCTRL_SC_RESERVED28_UNION;
#endif
#define SOC_PERI_SCTRL_SC_RESERVED28_sc_reserved28_START  (0)
#define SOC_PERI_SCTRL_SC_RESERVED28_sc_reserved28_END    (31)






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

#endif /* end of soc_peri_sctrl_interface.h */
