

/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/

#ifndef __SOC_MDDRC_DMC_INTERFACE_H__
#define __SOC_MDDRC_DMC_INTERFACE_H__

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
/* �Ĵ���˵����DDRC_CTRL_SREF��DDRC��ˢ�¿��ƼĴ���
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CTRL_SREF_UNION */
#define SOC_MDDRC_DMC_DDRC_CTRL_SREF_ADDR(base)       ((base) + (0x000))

/* �Ĵ���˵����DDRC_CTRL_INIT��DDRC��ʼ�����ƼĴ���
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CTRL_INIT_UNION */
#define SOC_MDDRC_DMC_DDRC_CTRL_INIT_ADDR(base)       ((base) + (0x004))

/* �Ĵ���˵����DDRC_CTRL_DDRRST��DDR3 ��λ���ƼĴ���
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CTRL_DDRRST_UNION */
#define SOC_MDDRC_DMC_DDRC_CTRL_DDRRST_ADDR(base)     ((base) + (0x008))

/* �Ĵ���˵����DDRC_CTRL_SFC��DDRC�������DDR���������Ĵ�����
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CTRL_SFC_UNION */
#define SOC_MDDRC_DMC_DDRC_CTRL_SFC_ADDR(base)        ((base) + (0x00C))

/* �Ĵ���˵����DDRC_CTRL_PERF��DDRC����ͳ��ʹ�ܼĴ�����
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CTRL_PERF_UNION */
#define SOC_MDDRC_DMC_DDRC_CTRL_PERF_ADDR(base)       ((base) + (0x010))

/* �Ĵ���˵����DDRC_CTRL_MTEST��DDRC�������MEMTEST�����Ĵ���
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CTRL_MTEST_UNION */
#define SOC_MDDRC_DMC_DDRC_CTRL_MTEST_ADDR(base)      ((base) + (0x014))

/* �Ĵ���˵����DDRC_CTRL_MCLR��DDRC�������MEMCLR�����Ĵ���
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CTRL_MCLR_UNION */
#define SOC_MDDRC_DMC_DDRC_CTRL_MCLR_ADDR(base)       ((base) + (0x018))

/* �Ĵ���˵����DDRC_CFG_LP��dfi��lp�ӿڵ�������üĴ���
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CFG_LP_UNION */
#define SOC_MDDRC_DMC_DDRC_CFG_LP_ADDR(base)          ((base) + (0x01C))

/* �Ĵ���˵����DDRC_CFG_SREF��DDR��ˢ�����üĴ�����
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CFG_SREF_UNION */
#define SOC_MDDRC_DMC_DDRC_CFG_SREF_ADDR(base)        ((base) + (0x020))

/* �Ĵ���˵����DDRC_CFG_INIT��DDR��ʼ�����üĴ�����
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CFG_INIT_UNION */
#define SOC_MDDRC_DMC_DDRC_CFG_INIT_ADDR(base)        ((base) + (0x024))

/* �Ĵ���˵����DDRC_CFG_PD��DDR�͹���PowerDown״̬���üĴ�����
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CFG_PD_UNION */
#define SOC_MDDRC_DMC_DDRC_CFG_PD_ADDR(base)          ((base) + (0x028))

/* �Ĵ���˵����DDRC_CFG_AREF��DDRC�Զ�ˢ��ģʽ���üĴ�����
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CFG_AREF_UNION */
#define SOC_MDDRC_DMC_DDRC_CFG_AREF_ADDR(base)        ((base) + (0x02C))

/* �Ĵ���˵����DDRC_CFG_ECC��DDRC ECC���üĴ�����
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CFG_ECC_UNION */
#define SOC_MDDRC_DMC_DDRC_CFG_ECC_ADDR(base)         ((base) + (0x030))

/* �Ĵ���˵����DDRC_CFG_ERRINJ��DDRC ECC����ע�����üĴ�����
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CFG_ERRINJ_UNION */
#define SOC_MDDRC_DMC_DDRC_CFG_ERRINJ_ADDR(base)      ((base) + (0x034))

/* �Ĵ���˵����DDRC_CFG_FIFO_ERRINJ
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CFG_FIFO_ERRINJ_UNION */
#define SOC_MDDRC_DMC_DDRC_CFG_FIFO_ERRINJ_ADDR(base) ((base) + (0x038))

/* �Ĵ���˵����DDRC_CFG_WORKMODE��DDRC����ģʽ���üĴ���
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CFG_WORKMODE_UNION */
#define SOC_MDDRC_DMC_DDRC_CFG_WORKMODE_ADDR(base)    ((base) + (0x040))

/* �Ĵ���˵����DDRC_CFG_WORKMODE2��DDRC����ģʽ���üĴ���
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CFG_WORKMODE2_UNION */
#define SOC_MDDRC_DMC_DDRC_CFG_WORKMODE2_ADDR(base)   ((base) + (0x044))

/* �Ĵ���˵����DDRC_CFG_WORKMODE3��DDRC����ģʽ���üĴ���
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CFG_WORKMODE3_UNION */
#define SOC_MDDRC_DMC_DDRC_CFG_WORKMODE3_ADDR(base)   ((base) + (0x048))

/* �Ĵ���˵����DDRC_CFG_DDRMODE��DDR����ģʽ���üĴ���
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CFG_DDRMODE_UNION */
#define SOC_MDDRC_DMC_DDRC_CFG_DDRMODE_ADDR(base)     ((base) + (0x050))

/* �Ĵ���˵����DDRC_CFG_DIMM�ǶԽ�DIMMʱ����ģʽ���üĴ�����
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CFG_DIMM_UNION */
#define SOC_MDDRC_DMC_DDRC_CFG_DIMM_ADDR(base)        ((base) + (0x054))

/* �Ĵ���˵����DDRC_CFG_SCRAMB��DDR���ݼ������üĴ�����
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CFG_SCRAMB_UNION */
#define SOC_MDDRC_DMC_DDRC_CFG_SCRAMB_ADDR(base)      ((base) + (0x058))

/* �Ĵ���˵����DDRC_CFG_RNKVOL��DDRC���Ƶ�ÿ��RANK��DDR�������üĴ�����
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CFG_RNKVOL_UNION */
#define SOC_MDDRC_DMC_DDRC_CFG_RNKVOL_ADDR(base, rnks)  ((base) + (0x060+0x4*(rnks)))

/* �Ĵ���˵����DDRC_CFG_ODT��DDR��ODT�������üĴ�����
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CFG_ODT_UNION */
#define SOC_MDDRC_DMC_DDRC_CFG_ODT_ADDR(base, rnks)   ((base) + (0x0A0+0x4*(rnks)))

/* �Ĵ���˵����DDRC_CFG_EMRS01��DDR��ģʽ�Ĵ���0��ģʽ�Ĵ���1�����üĴ�����
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CFG_EMRS01_UNION */
#define SOC_MDDRC_DMC_DDRC_CFG_EMRS01_ADDR(base)      ((base) + (0x0F0))

/* �Ĵ���˵����DDRC_CFG_EMRS23��DDR��ģʽ�Ĵ���2��ģʽ�Ĵ���3�����üĴ�����
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CFG_EMRS23_UNION */
#define SOC_MDDRC_DMC_DDRC_CFG_EMRS23_ADDR(base)      ((base) + (0x0F4))

/* �Ĵ���˵����DDRC_CFG_EMRS23��DDR��ģʽ�Ĵ���2��ģʽ�Ĵ���3�����üĴ�����
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CFG_EMRS45_UNION */
#define SOC_MDDRC_DMC_DDRC_CFG_EMRS45_ADDR(base)      ((base) + (0x0F8))

/* �Ĵ���˵����DDRC_CFG_EMRS23��DDR��ģʽ�Ĵ���2��ģʽ�Ĵ���3�����üĴ�����
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CFG_EMRS67_UNION */
#define SOC_MDDRC_DMC_DDRC_CFG_EMRS67_ADDR(base)      ((base) + (0x0FC))

/* �Ĵ���˵����DDRC_CFG_TIMING0��DDRC��ʱ������Ĵ���0
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CFG_TIMING0_UNION */
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING0_ADDR(base)     ((base) + (0x100))

/* �Ĵ���˵����DDRC_CFG_TIMING1��DDRC��ʱ������Ĵ���1
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CFG_TIMING1_UNION */
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING1_ADDR(base)     ((base) + (0x104))

/* �Ĵ���˵����DDRC_CFG_TIMING2��DDRC��ʱ������Ĵ���2
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CFG_TIMING2_UNION */
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING2_ADDR(base)     ((base) + (0x108))

/* �Ĵ���˵����DDRC_CFG_TIMING3��DDRC��ʱ������Ĵ���3
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CFG_TIMING3_UNION */
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING3_ADDR(base)     ((base) + (0x10C))

/* �Ĵ���˵����DDRC_CFG_TIMING4��DDRC��ʱ������Ĵ���4
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CFG_TIMING4_UNION */
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING4_ADDR(base)     ((base) + (0x110))

/* �Ĵ���˵����DDRC_CFG_TIMING5��DDRC��ʱ������Ĵ���5
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CFG_TIMING5_UNION */
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING5_ADDR(base)     ((base) + (0x114))

/* �Ĵ���˵����DDRC_CFG_TIMING6��DDRC��ʱ������Ĵ���6
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CFG_TIMING6_UNION */
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING6_ADDR(base)     ((base) + (0x118))

/* �Ĵ���˵����DDRC_CFG_TIMING7��DDRC��ʱ������Ĵ���7
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CFG_TIMING7_UNION */
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING7_ADDR(base)     ((base) + (0x11C))

/* �Ĵ���˵����DDRC_CFG_NXT_TIMING0������Ƶ���л�DDRC��ʱ������Ĵ���0
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING0_UNION */
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING0_ADDR(base) ((base) + (0x120))

/* �Ĵ���˵����DDRC_CFG_NXT_TIMING1������Ƶ���л���DDRC��ʱ������Ĵ���1
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING1_UNION */
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING1_ADDR(base) ((base) + (0x124))

/* �Ĵ���˵����DDRC_CFG_NXT_TIMING2������Ƶ���л���DDRC��ʱ������Ĵ���2
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING2_UNION */
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING2_ADDR(base) ((base) + (0x128))

/* �Ĵ���˵����DDRC_CFG_TIMING3������Ƶ���л���DDRC��ʱ������Ĵ���3
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING3_UNION */
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING3_ADDR(base) ((base) + (0x12C))

/* �Ĵ���˵����DDRC_CFG_NXT_TIMING4������Ƶ���л���DDRC��ʱ������Ĵ���4
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING4_UNION */
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING4_ADDR(base) ((base) + (0x130))

/* �Ĵ���˵����DDRC_CFG_NXT_TIMING5������Ƶ���л���DDRC��ʱ������Ĵ���5
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING5_UNION */
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING5_ADDR(base) ((base) + (0x134))

/* �Ĵ���˵����DDRC_CFG_NXT_TIMING6������Ƶ���л���DDRC��ʱ������Ĵ���6
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING6_UNION */
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING6_ADDR(base) ((base) + (0x138))

/* �Ĵ���˵����DDRC_CFG_NXT_TIMING7������Ƶ���л���DDRC��ʱ������Ĵ���7
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING7_UNION */
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING7_ADDR(base) ((base) + (0x13C))

/* �Ĵ���˵����DDRC_CFG_BLDATA��DDRCд����Ԥ����д�������üĴ�����
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CFG_BLDATA_UNION */
#define SOC_MDDRC_DMC_DDRC_CFG_BLDATA_ADDR(base)      ((base) + (0x140))

/* �Ĵ���˵����DDRC_CFG_DMCLVL��DDR����������������ˮ�����üĴ�����
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CFG_DMCLVL_UNION */
#define SOC_MDDRC_DMC_DDRC_CFG_DMCLVL_ADDR(base)      ((base) + (0x144))

/* �Ĵ���˵����DDRC_CFG_TIMEOUT������TIMEOUT���üĴ�����
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CFG_TIMEOUT_UNION */
#define SOC_MDDRC_DMC_DDRC_CFG_TIMEOUT_ADDR(base)     ((base) + (0x150))

/* �Ĵ���˵����DDRC_CFG_QOS������QOS���üĴ�����
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CFG_QOS_UNION */
#define SOC_MDDRC_DMC_DDRC_CFG_QOS_ADDR(base)         ((base) + (0x154))

/* �Ĵ���˵����DDRC_CFG_MBIST��MBIST����ߵ�ַ���üĴ���
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CFG_MBIST_UNION */
#define SOC_MDDRC_DMC_DDRC_CFG_MBIST_ADDR(base)       ((base) + (0x160))

/* �Ĵ���˵����DDRC_CFG_MCLR_PATTEN0��Memory��ʽ����������ʽ�Ĵ���0
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CFG_MCLR_PATTERN0_UNION */
#define SOC_MDDRC_DMC_DDRC_CFG_MCLR_PATTERN0_ADDR(base) ((base) + (0x164))

/* �Ĵ���˵����DDRC_CFG_MCLR_PATTEN0��Memory��ʽ����������ʽ�Ĵ���1
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CFG_MCLR_PATTERN1_UNION */
#define SOC_MDDRC_DMC_DDRC_CFG_MCLR_PATTERN1_ADDR(base) ((base) + (0x168))

/* �Ĵ���˵����DDRC_CFG_MCLR_PATTEN0��Memory��ʽ����������ʽ�Ĵ���2
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CFG_MCLR_PATTERN2_UNION */
#define SOC_MDDRC_DMC_DDRC_CFG_MCLR_PATTERN2_ADDR(base) ((base) + (0x16C))

/* �Ĵ���˵����DDRC_CFG_MCLR_PATTEN0��Memory��ʽ����������ʽ�Ĵ���3
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CFG_MCLR_PATTERN3_UNION */
#define SOC_MDDRC_DMC_DDRC_CFG_MCLR_PATTERN3_ADDR(base) ((base) + (0x170))

/* �Ĵ���˵����DDRC_CFG_MCLR_PATTEN0��Memory��ʽ����������ʽ�Ĵ���4
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CFG_MCLR_PATTERN4_UNION */
#define SOC_MDDRC_DMC_DDRC_CFG_MCLR_PATTERN4_ADDR(base) ((base) + (0x174))

/* �Ĵ���˵����DDRC_CFG_TRAIN��ѵ��
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CFG_TRAIN_UNION */
#define SOC_MDDRC_DMC_DDRC_CFG_TRAIN_ADDR(base)       ((base) + (0x180))

/* �Ĵ���˵����DDRC_CFG_DFI_LAT0��dfi�ӿ�ʱ�����üĴ���
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CFG_DFI_LAT0_UNION */
#define SOC_MDDRC_DMC_DDRC_CFG_DFI_LAT0_ADDR(base)    ((base) + (0x184))

/* �Ĵ���˵����DDRC_CFG_DFI_LAT1��dfi�ӿ�ʱ�����üĴ���
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CFG_DFI_LAT1_UNION */
#define SOC_MDDRC_DMC_DDRC_CFG_DFI_LAT1_ADDR(base)    ((base) + (0x188))

/* �Ĵ���˵����DDRC_CFG_REC0��DDR4����ָ����üĴ���0��
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CFG_REC0_UNION */
#define SOC_MDDRC_DMC_DDRC_CFG_REC0_ADDR(base)        ((base) + (0x190))

/* �Ĵ���˵����DDRC_CFG_REC1��DDR4����ָ����üĴ���1��
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CFG_REC1_UNION */
#define SOC_MDDRC_DMC_DDRC_CFG_REC1_ADDR(base)        ((base) + (0x194))

/* �Ĵ���˵����DDRC_CFG_CRC��DDR4 CRC���üĴ���
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CFG_CRC_UNION */
#define SOC_MDDRC_DMC_DDRC_CFG_CRC_ADDR(base)         ((base) + (0x198))

/* �Ĵ���˵����DDRC_CFG_CRC_ERRINJ0
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CFG_CRC_ERRINJ0_UNION */
#define SOC_MDDRC_DMC_DDRC_CFG_CRC_ERRINJ0_ADDR(base) ((base) + (0x1A0))

/* �Ĵ���˵����DDRC_CFG_CRC_ERRINJ1
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CFG_CRC_ERRINJ1_UNION */
#define SOC_MDDRC_DMC_DDRC_CFG_CRC_ERRINJ1_ADDR(base) ((base) + (0x1A4))

/* �Ĵ���˵����DDRC_CFG_PAR_ERRINJ0
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CFG_PAR_ERRINJ0_UNION */
#define SOC_MDDRC_DMC_DDRC_CFG_PAR_ERRINJ0_ADDR(base) ((base) + (0x1A8))

/* �Ĵ���˵����DDRC_CFG_PAR_ERRINJ1
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CFG_PAR_ERRINJ1_UNION */
#define SOC_MDDRC_DMC_DDRC_CFG_PAR_ERRINJ1_ADDR(base) ((base) + (0x1AC))

/* �Ĵ���˵����DDRC_CFG_DDRIO��DDR IO���üĴ�����
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CFG_DDRPHY_UNION */
#define SOC_MDDRC_DMC_DDRC_CFG_DDRPHY_ADDR(base)      ((base) + (0x200))

/* �Ĵ���˵����DDRC_CFG_SFC_TIM��DDRC�������DDR�����ʱ��Ĵ�����
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CFG_SFC_TIM_UNION */
#define SOC_MDDRC_DMC_DDRC_CFG_SFC_TIM_ADDR(base)     ((base) + (0x20C))

/* �Ĵ���˵����DDRC_CTRL_SFC��DDRC�������DDR�����������
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CFG_SFC_UNION */
#define SOC_MDDRC_DMC_DDRC_CFG_SFC_ADDR(base)         ((base) + (0x210))

/* �Ĵ���˵����DDRC_CFG_SFC_ADDR0��SFC��дmemory��ַ���üĴ���0
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CFG_SFC_ADDR0_UNION */
#define SOC_MDDRC_DMC_DDRC_CFG_SFC_ADDR0_ADDR(base)   ((base) + (0x214))

/* �Ĵ���˵����DDRC_CFG_SFC_ADDR1��SFC��дmemory��ַ���üĴ���
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CFG_SFC_ADDR1_UNION */
#define SOC_MDDRC_DMC_DDRC_CFG_SFC_ADDR1_ADDR(base)   ((base) + (0x218))

/* �Ĵ���˵����DDRC_CFG_SFC_WDATA0��SFCд�������üĴ���
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CFG_SFC_WDATA0_UNION */
#define SOC_MDDRC_DMC_DDRC_CFG_SFC_WDATA0_ADDR(base)  ((base) + (0x21C))

/* �Ĵ���˵����DDRC_CFG_SFC_WDATA1��SFCд�������üĴ���
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CFG_SFC_WDATA1_UNION */
#define SOC_MDDRC_DMC_DDRC_CFG_SFC_WDATA1_ADDR(base)  ((base) + (0x220))

/* �Ĵ���˵����DDRC_CFG_SFC_WDATA2��SFCд�������üĴ���
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CFG_SFC_WDATA2_UNION */
#define SOC_MDDRC_DMC_DDRC_CFG_SFC_WDATA2_ADDR(base)  ((base) + (0x224))

/* �Ĵ���˵����DDRC_CFG_SFC_WDATA3��SFCд�������üĴ���
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CFG_SFC_WDATA3_UNION */
#define SOC_MDDRC_DMC_DDRC_CFG_SFC_WDATA3_ADDR(base)  ((base) + (0x228))

/* �Ĵ���˵����DDRC_CFG_SFC_WDATA4��SFCд�������üĴ���
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CFG_SFC_WDATA4_UNION */
#define SOC_MDDRC_DMC_DDRC_CFG_SFC_WDATA4_ADDR(base)  ((base) + (0x22C))

/* �Ĵ���˵����DDRC_CFG_SFC_WDATA5��SFCд�������üĴ���
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CFG_SFC_WDATA5_UNION */
#define SOC_MDDRC_DMC_DDRC_CFG_SFC_WDATA5_ADDR(base)  ((base) + (0x230))

/* �Ĵ���˵����DDRC_CFG_SFC_WDATA6��SFCд�������üĴ���
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CFG_SFC_WDATA6_UNION */
#define SOC_MDDRC_DMC_DDRC_CFG_SFC_WDATA6_ADDR(base)  ((base) + (0x234))

/* �Ĵ���˵����DDRC_CFG_SFC_WDATA7��SFCд�������üĴ���
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CFG_SFC_WDATA7_UNION */
#define SOC_MDDRC_DMC_DDRC_CFG_SFC_WDATA7_ADDR(base)  ((base) + (0x238))

/* �Ĵ���˵����DDRC_CFG_SFC_WDATA_ECC��SFCдECC�������üĴ���
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CFG_SFC_WDATA_ECC_UNION */
#define SOC_MDDRC_DMC_DDRC_CFG_SFC_WDATA_ECC_ADDR(base) ((base) + (0x23C))

/* �Ĵ���˵����DDRC_CFG_TMON��LPDDR2/LPDDR3�����¶ȼ���������üĴ���
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CFG_TMON_UNION */
#define SOC_MDDRC_DMC_DDRC_CFG_TMON_ADDR(base)        ((base) + (0x240))

/* �Ĵ���˵����DDRC_CFG_TMON��LPDDR2/LPDDR3�����¶ȼ��RANK���üĴ���
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CFG_TMON_RANK_UNION */
#define SOC_MDDRC_DMC_DDRC_CFG_TMON_RANK_ADDR(base)   ((base) + (0x244))

/* �Ĵ���˵����DDRC_CFG_TMON��LPDDR2/LPDDR3�����¶ȼ��ˢ�����üĴ���
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CFG_TMON_AREF_UNION */
#define SOC_MDDRC_DMC_DDRC_CFG_TMON_AREF_ADDR(base)   ((base) + (0x248))

/* �Ĵ���˵����DDRC_CFG_MRR_MAP�ǵ���������ӳ�����üĴ���
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CFG_MRR_MAP_UNION */
#define SOC_MDDRC_DMC_DDRC_CFG_MRR_MAP_ADDR(base)     ((base) + (0x250))

/* �Ĵ���˵����DDRC_CFG_STACMD��DDRC����ͳ��ʹ�ܼĴ�����
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CFG_STACMD_UNION */
#define SOC_MDDRC_DMC_DDRC_CFG_STACMD_ADDR(base)      ((base) + (0x260))

/* �Ĵ���˵����DDRC_CFG_CMDMIN��DMC�����������С��ֵ�Ĵ���
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CFG_CMDMIN_UNION */
#define SOC_MDDRC_DMC_DDRC_CFG_CMDMIN_ADDR(base)      ((base) + (0x264))

/* �Ĵ���˵����DDRC_CFG_CMDMAX��DMC������������ֵ�Ĵ���
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CFG_CMDMAX_UNION */
#define SOC_MDDRC_DMC_DDRC_CFG_CMDMAX_ADDR(base)      ((base) + (0x268))

/* �Ĵ���˵����DDRC_CFG_PERF��DDR����ͳ�Ƶ�ģʽ���üĴ�����
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CFG_PERF_UNION */
#define SOC_MDDRC_DMC_DDRC_CFG_PERF_ADDR(base)        ((base) + (0x270))

/* �Ĵ���˵����DDRC_CFG_STAID��DDR����ͳ�Ƶ�����ID���üĴ�����
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CFG_STAID_UNION */
#define SOC_MDDRC_DMC_DDRC_CFG_STAID_ADDR(base)       ((base) + (0x274))

/* �Ĵ���˵����DDRC_CFG_STAID��DDR����ͳ�Ƶ�����ID MASK���üĴ�����
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CFG_STAIDMSK_UNION */
#define SOC_MDDRC_DMC_DDRC_CFG_STAIDMSK_ADDR(base)    ((base) + (0x278))

/* �Ĵ���˵����DDRC_INTMSK��DDRC�ж����μĴ�����
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_INTMSK_UNION */
#define SOC_MDDRC_DMC_DDRC_INTMSK_ADDR(base)          ((base) + (0x280))

/* �Ĵ���˵����DDRC_RINT��DDRCԭʼ�жϼĴ�����
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_RINT_UNION */
#define SOC_MDDRC_DMC_DDRC_RINT_ADDR(base)            ((base) + (0x284))

/* �Ĵ���˵����DDRC_INTSTS��DDRC�ж�״̬�Ĵ�����
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_INTSTS_UNION */
#define SOC_MDDRC_DMC_DDRC_INTSTS_ADDR(base)          ((base) + (0x288))

/* �Ĵ���˵����DDRC_CURR_STATUS��DDRC״̬�Ĵ�����
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CURR_STATUS_UNION */
#define SOC_MDDRC_DMC_DDRC_CURR_STATUS_ADDR(base)     ((base) + (0x290))

/* �Ĵ���˵����DDRC_CURR_FUNC��DDRC FUNCģ��״̬�Ĵ�����
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CURR_FUNC_UNION */
#define SOC_MDDRC_DMC_DDRC_CURR_FUNC_ADDR(base)       ((base) + (0x294))

/* �Ĵ���˵����DDRC_CURR_FUNC2��DDRC FUNCģ��״̬�Ĵ�����
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CURR_FUNC2_UNION */
#define SOC_MDDRC_DMC_DDRC_CURR_FUNC2_ADDR(base)      ((base) + (0x298))

/* �Ĵ���˵����DDRC_CURR_EXECST��DDRC����״̬��״̬��
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CURR_EXECST_UNION */
#define SOC_MDDRC_DMC_DDRC_CURR_EXECST_ADDR(base)     ((base) + (0x2A0))

/* �Ĵ���˵����DDRC_CURR_WGFIFOST��DDRCдFIFO����״̬�Ĵ�����
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_CURR_WGFIFOST_UNION */
#define SOC_MDDRC_DMC_DDRC_CURR_WGFIFOST_ADDR(base)   ((base) + (0x2A4))

/* �Ĵ���˵����DDRC_HIS_SERRADR0��DDRC ECC�����ش����λ��ַ״̬�Ĵ�����
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_SERR_ADR0_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_SERR_ADR0_ADDR(base)   ((base) + (0x2D0))

/* �Ĵ���˵����DDRC_HIS_SERRADR1��DDRC ECC�����ش����λ��ַ״̬�Ĵ�����
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_SERR_ADR1_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_SERR_ADR1_ADDR(base)   ((base) + (0x2D4))

/* �Ĵ���˵����DDRC_HIS_SERR_RDATA0��DDR ECC�����ش��������0
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_SERR_RDATA0_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_SERR_RDATA0_ADDR(base) ((base) + (0x2D8))

/* �Ĵ���˵����DDRC_HIS_SERR_RDATA1��DDR ECC�����ش��������1
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_SERR_RDATA1_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_SERR_RDATA1_ADDR(base) ((base) + (0x2DC))

/* �Ĵ���˵����DDRC_HIS_SERR_RDATA2��DDR ECC�����ش��������2
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_SERR_RDATA2_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_SERR_RDATA2_ADDR(base) ((base) + (0x2E0))

/* �Ĵ���˵����DDRC_HIS_SERR_RDATA3��DDR ECC�����ش��������3
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_SERR_RDATA3_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_SERR_RDATA3_ADDR(base) ((base) + (0x2E4))

/* �Ĵ���˵����DDRC_HIS_SERR_RDATA4��DDR ECC�����ش��������4
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_SERR_RDATA4_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_SERR_RDATA4_ADDR(base) ((base) + (0x2E8))

/* �Ĵ���˵����DDRC_HIS_SERR_RDATA5��DDR ECC�����ش��������5
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_SERR_RDATA5_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_SERR_RDATA5_ADDR(base) ((base) + (0x2EC))

/* �Ĵ���˵����DDRC_HIS_SERR_RDATA6��DDR ECC�����ش��������6
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_SERR_RDATA6_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_SERR_RDATA6_ADDR(base) ((base) + (0x2F0))

/* �Ĵ���˵����DDRC_HIS_SERR_RDATA7��DDR ECC�����ش��������7
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_SERR_RDATA7_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_SERR_RDATA7_ADDR(base) ((base) + (0x2F4))

/* �Ĵ���˵����DDRC_HIS_SERR_RDATA8��DDR ECC�����ش��������8
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_SERR_RDATA8_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_SERR_RDATA8_ADDR(base) ((base) + (0x2F8))

/* �Ĵ���˵����DDRC_HIS_SERR_EXPDATA0��DDR ECC�����ش���ʱ��������ȷ������0
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_SERR_EXPDATA0_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_SERR_EXPDATA0_ADDR(base) ((base) + (0x2FC))

/* �Ĵ���˵����DDRC_HIS_SERR_EXPDATA1��DDR ECC�����ش���ʱ��������ȷ������1
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_SERR_EXPDATA1_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_SERR_EXPDATA1_ADDR(base) ((base) + (0x300))

/* �Ĵ���˵����DDRC_HIS_SERR_EXPDATA2��DDR ECC�����ش���ʱ��������ȷ������2
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_SERR_EXPDATA2_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_SERR_EXPDATA2_ADDR(base) ((base) + (0x304))

/* �Ĵ���˵����DDRC_HIS_SERR_EXPDATA3��DDR ECC�����ش���ʱ��������ȷ������3
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_SERR_EXPDATA3_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_SERR_EXPDATA3_ADDR(base) ((base) + (0x308))

/* �Ĵ���˵����DDRC_HIS_SERR_EXPDATA4��DDR ECC�����ش���ʱ��������ȷ������4
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_SERR_EXPDATA4_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_SERR_EXPDATA4_ADDR(base) ((base) + (0x30C))

/* �Ĵ���˵����DDRC_HIS_SERR_EXPDATA5��DDR ECC�����ش���ʱ��������ȷ������5
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_SERR_EXPDATA5_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_SERR_EXPDATA5_ADDR(base) ((base) + (0x310))

/* �Ĵ���˵����DDRC_HIS_SERR_EXPDATA6��DDR ECC�����ش���ʱ��������ȷ������6
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_SERR_EXPDATA6_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_SERR_EXPDATA6_ADDR(base) ((base) + (0x314))

/* �Ĵ���˵����DDRC_HIS_SERR_EXPDATA7��DDR ECC�����ش���ʱ��������ȷ������7
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_SERR_EXPDATA7_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_SERR_EXPDATA7_ADDR(base) ((base) + (0x318))

/* �Ĵ���˵����DDRC_HIS_SERR_EXPDATA8��DDR ECC�����ش���ʱ��������ȷ������8
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_SERR_EXPDATA8_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_SERR_EXPDATA8_ADDR(base) ((base) + (0x31C))

/* �Ĵ���˵����DDRC_HIS_MERRADR0��DDRC ECC����ش����λ��ַ״̬�Ĵ�����
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_MERR_ADR0_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_MERR_ADR0_ADDR(base)   ((base) + (0x320))

/* �Ĵ���˵����DDRC_HIS_MERRADR1��DDRC ECC����ش����λ��ַ״̬�Ĵ�����
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_MERR_ADR1_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_MERR_ADR1_ADDR(base)   ((base) + (0x324))

/* �Ĵ���˵����DDRC_HIS_MERRADR1��DDRC ECC����ش���ID�Ĵ���
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_MERR_ID_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_MERR_ID_ADDR(base)     ((base) + (0x328))

/* �Ĵ���˵����DDRC_HIS_MERR_RDATA0��DDR ECC����ش��������0
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_MERR_RDATA0_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_MERR_RDATA0_ADDR(base) ((base) + (0x330))

/* �Ĵ���˵����DDRC_HIS_MERR_RDATA1��DDR ECC����ش��������1
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_MERR_RDATA1_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_MERR_RDATA1_ADDR(base) ((base) + (0x334))

/* �Ĵ���˵����DDRC_HIS_MERR_RDATA2��DDR ECC����ش��������2
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_MERR_RDATA2_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_MERR_RDATA2_ADDR(base) ((base) + (0x338))

/* �Ĵ���˵����DDRC_HIS_MERR_RDATA3��DDR ECC����ش��������3
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_MERR_RDATA3_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_MERR_RDATA3_ADDR(base) ((base) + (0x33C))

/* �Ĵ���˵����DDRC_HIS_MERR_RDATA4��DDR ECC����ش��������4
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_MERR_RDATA4_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_MERR_RDATA4_ADDR(base) ((base) + (0x340))

/* �Ĵ���˵����DDRC_HIS_MERR_RDATA5��DDR ECC����ش��������5
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_MERR_RDATA5_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_MERR_RDATA5_ADDR(base) ((base) + (0x344))

/* �Ĵ���˵����DDRC_HIS_MERR_RDATA6��DDR ECC����ش��������6
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_MERR_RDATA6_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_MERR_RDATA6_ADDR(base) ((base) + (0x348))

/* �Ĵ���˵����DDRC_HIS_MERR_RDATA7��DDR ECC����ش��������7
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_MERR_RDATA7_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_MERR_RDATA7_ADDR(base) ((base) + (0x34C))

/* �Ĵ���˵����DDRC_HIS_MERR_RDATA8��DDR ECC����ش��������8
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_MERR_RDATA8_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_MERR_RDATA8_ADDR(base) ((base) + (0x350))

/* �Ĵ���˵����DDRC_HIS_MERR_EXPDATA0��DDR ECC����ش���ʱ��������ȷ������0
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_MERR_EXPDATA0_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_MERR_EXPDATA0_ADDR(base) ((base) + (0x354))

/* �Ĵ���˵����DDRC_HIS_MERR_EXPDATA1��DDR ECC����ش���ʱ��������ȷ������1
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_MERR_EXPDATA1_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_MERR_EXPDATA1_ADDR(base) ((base) + (0x358))

/* �Ĵ���˵����DDRC_HIS_MERR_EXPDATA2��DDR ECC����ش���ʱ��������ȷ������2
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_MERR_EXPDATA2_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_MERR_EXPDATA2_ADDR(base) ((base) + (0x35C))

/* �Ĵ���˵����DDRC_HIS_MERR_EXPDATA3��DDR ECC����ش���ʱ��������ȷ������3
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_MERR_EXPDATA3_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_MERR_EXPDATA3_ADDR(base) ((base) + (0x360))

/* �Ĵ���˵����DDRC_HIS_MERR_EXPDATA4��DDR ECC����ش���ʱ��������ȷ������4
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_MERR_EXPDATA4_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_MERR_EXPDATA4_ADDR(base) ((base) + (0x364))

/* �Ĵ���˵����DDRC_HIS_MERR_EXPDATA5��DDR ECC����ش���ʱ��������ȷ������5
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_MERR_EXPDATA5_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_MERR_EXPDATA5_ADDR(base) ((base) + (0x368))

/* �Ĵ���˵����DDRC_HIS_MERR_EXPDATA6��DDR ECC����ش���ʱ��������ȷ������6
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_MERR_EXPDATA6_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_MERR_EXPDATA6_ADDR(base) ((base) + (0x36C))

/* �Ĵ���˵����DDRC_HIS_MERR_EXPDATA7��DDR ECC����ش���ʱ��������ȷ������7
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_MERR_EXPDATA7_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_MERR_EXPDATA7_ADDR(base) ((base) + (0x370))

/* �Ĵ���˵����DDRC_HIS_MERR_EXPDATA8��DDR ECC����ش���ʱ��������ȷ������8
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_MERR_EXPDATA8_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_MERR_EXPDATA8_ADDR(base) ((base) + (0x374))

/* �Ĵ���˵����DDRC_HIS_SERRCNT��DDRC��ECC����ͳ�ƼĴ�����
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_SERRCNT_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_SERRCNT_ADDR(base)     ((base) + (0x378))

/* �Ĵ���˵����DDRC_HIS_SERRCNT��DDRC��ECC����ͳ�ƼĴ�����
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_MERRCNT_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_MERRCNT_ADDR(base)     ((base) + (0x37C))

/* �Ĵ���˵����DDRC_HIS_FLUX_WR��DDRC����д��������ͳ�ƼĴ���
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_FLUX_WR_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_FLUX_WR_ADDR(base)     ((base) + (0x380))

/* �Ĵ���˵����DDRC_HIS_FLUX_RD��DDRC���ж���������ͳ�ƼĴ���
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_FLUX_RD_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_FLUX_RD_ADDR(base)     ((base) + (0x384))

/* �Ĵ���˵����DDRC_HIS_FLUX_WCMD��DDRC����д������Ŀ
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_FLUX_WCMD_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_FLUX_WCMD_ADDR(base)   ((base) + (0x0388))

/* �Ĵ���˵����DDRC_HIS_FLUX_RCMD��DDRC���ж�������Ŀ
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_FLUX_RCMD_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_FLUX_RCMD_ADDR(base)   ((base) + (0x038C))

/* �Ĵ���˵����DDRC_HIS_FLUXID_WR��DDRCָ��IDд����ͳ�ƼĴ���
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_FLUXID_WR_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_FLUXID_WR_ADDR(base)   ((base) + (0x390))

/* �Ĵ���˵����DDRC_HIS_FLUXID_RD��DDRCָ��ID������ͳ�ƼĴ���
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_FLUXID_RD_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_FLUXID_RD_ADDR(base)   ((base) + (0x394))

/* �Ĵ���˵����DDRC_HIS_FLUXID_WCMD��DDRC����д������Ŀ
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_FLUXID_WCMD_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_FLUXID_WCMD_ADDR(base) ((base) + (0x0398))

/* �Ĵ���˵����DDRC_HIS_FLUX_RCMD��DDRC���ж�������Ŀ
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_FLUXID_RCMD_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_FLUXID_RCMD_ADDR(base) ((base) + (0x039C))

/* �Ĵ���˵����DDRC_HIS_WLATCNT0��DDRCָ��ID��д����Latencyͳ�ƼĴ���0��
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_WLATCNT0_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_WLATCNT0_ADDR(base)    ((base) + (0x3A0))

/* �Ĵ���˵����DDRC_HIS_WLATCNT1��DDRCָ��ID��д����Latencyͳ�ƼĴ���1
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_WLATCNT1_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_WLATCNT1_ADDR(base)    ((base) + (0x3A4))

/* �Ĵ���˵����DDRC_HIS_RLATCNT0��DDRCָ��ID�Ķ�����Latencyͳ�ƼĴ���0��
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_RLATCNT0_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_RLATCNT0_ADDR(base)    ((base) + (0x3A8))

/* �Ĵ���˵����DDRC_HIS_RLATCNT1��DDRCָ��ID�Ķ�����Latencyͳ�ƼĴ���1��
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_RLATCNT1_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_RLATCNT1_ADDR(base)    ((base) + (0x3AC))

/* �Ĵ���˵����DDRC_HIS_INHERE_RLAT_CNT�Ƕ�ͨ��������ʱ�Ĵ���
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_INHERE_RLAT_CNT_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_INHERE_RLAT_CNT_ADDR(base) ((base) + (0x3B0))

/* �Ĵ���˵����DDRC_STACMD_RPT��DMC����������ۻ��Ĵ����Ķ�ָ��
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_STACMD_RPT_UNION */
#define SOC_MDDRC_DMC_DDRC_STACMD_RPT_ADDR(base)      ((base) + (0x3B8))

/* �Ĵ���˵����DDRC_HIS_CMD_SUM��DMC����������ۻ��Ĵ���
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_CMD_SUM_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_CMD_SUM_ADDR(base)     ((base) + (0x3BC))

/* �Ĵ���˵����DDRC_HIS_PRE_CMD��DDRC����ͳ�Ƶ�PRECHARGE�������
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_PRE_CMD_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_PRE_CMD_ADDR(base)     ((base) + (0x3C0))

/* �Ĵ���˵����DDRC_HIS_ACT_CMD��DDRC����ͳ�Ƶ�ACTIVE�������
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_ACT_CMD_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_ACT_CMD_ADDR(base)     ((base) + (0x3C4))

/* �Ĵ���˵����DDRC_HIS_BNK_CHG��DDRC����ͳ�Ƶ�BANK�л�����
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_BNK_CHG_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_BNK_CHG_ADDR(base)     ((base) + (0x3C8))

/* �Ĵ���˵����DDRC_HIS_RNK_CHG��DDRC����ͳ�ƵĶ�д����Ƭѡ�л�����
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_RNK_CHG_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_RNK_CHG_ADDR(base)     ((base) + (0x3CC))

/* �Ĵ���˵����DDRC_HIS_RW_CHG��DDRC����ͳ�ƵĶ�д�����л�����
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_RW_CHG_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_RW_CHG_ADDR(base)      ((base) + (0x3D0))

/* �Ĵ���˵����DDRC_HIS_TMON_ERR��DMCѭ����ȡLPDDR2/LPDDR3�¶ȵĴ���״̬�Ĵ���
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_TMON_ERR_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_TMON_ERR_ADDR(base)    ((base) + (0x3E0))

/* �Ĵ���˵����DDRC_HIS_RERR_ADDRL�Ƿ���DMC��ֹ��RANK�����ַ�Ĵ���
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_RERR_ADDRL_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_RERR_ADDRL_ADDR(base)  ((base) + (0x3F0))

/* �Ĵ���˵����DDRC_HIS_RERR_ADDRH�Ƿ���DMC��ֹ��RANK�����ַ�Ĵ���
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_RERR_ADDRH_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_RERR_ADDRH_ADDR(base)  ((base) + (0x3F4))

/* �Ĵ���˵����DDRC_HIS_RERR_ID�Ƿ���DMC��ֹ��RANK����ID�Ĵ���
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_RERR_ID_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_RERR_ID_ADDR(base)     ((base) + (0x3F8))

/* �Ĵ���˵����DDRC_HIS_RERR_CNT�Ƿ���DMC��ֹ��RANK�ۻ���������Ĵ���
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_RERR_CNT_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_RERR_CNT_ADDR(base)    ((base) + (0x3FC))

/* �Ĵ���˵����DDRC_HIS_REC_ERR0��DMC����ָ������д�����Ϣ�Ĵ���0
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_REC_ERR0_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_REC_ERR0_ADDR(base)    ((base) + (0x400))

/* �Ĵ���˵����DDRC_HIS_REC_ERR0��DMC����ָ������д�����Ϣ�Ĵ���1
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_REC_ERR1_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_REC_ERR1_ADDR(base)    ((base) + (0x404))

/* �Ĵ���˵����DDRC_HIS_MTEST_ERR_INFO��MTEST����ָʾ�Ĵ���
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERR_INFO_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERR_INFO_ADDR(base) ((base) + (0x410))

/* �Ĵ���˵����DDRC_HIS_RLATCNT0��Memory Test����ĵ�ַ
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRADDR_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRADDR_ADDR(base) ((base) + (0x414))

/* �Ĵ���˵����DDRC_HIS_MTEST_EXPDATA0��DDR MTEST����ʱ��������ȷ������0
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA0_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA0_ADDR(base) ((base) + (0x418))

/* �Ĵ���˵����DDRC_HIS_MTEST_EXPDATA1��DDR MTEST����ش���ʱ��������ȷ������1
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA1_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA1_ADDR(base) ((base) + (0x41C))

/* �Ĵ���˵����DDRC_HIS_MTEST_EXPDATA2��DDR MTEST����ʱ��������ȷ������2
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA2_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA2_ADDR(base) ((base) + (0x420))

/* �Ĵ���˵����DDRC_HIS_MTEST_EXPDATA3��DDR MTEST����ش���ʱ��������ȷ������3
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA3_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA3_ADDR(base) ((base) + (0x424))

/* �Ĵ���˵����DDRC_HIS_MTEST_EXPDATA4��DDR MTEST����ʱ��������ȷ������4
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA4_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA4_ADDR(base) ((base) + (0x428))

/* �Ĵ���˵����DDRC_HIS_MTEST_EXPDATA5��DDR MTEST����ش���ʱ��������ȷ������5
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA5_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA5_ADDR(base) ((base) + (0x42C))

/* �Ĵ���˵����DDRC_HIS_MTEST_EXPDATA6��DDR MTEST����ʱ��������ȷ������6
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA6_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA6_ADDR(base) ((base) + (0x430))

/* �Ĵ���˵����DDRC_HIS_MTEST_EXPDATA7��DDR MTEST����ش���ʱ��������ȷ������7
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA7_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA7_ADDR(base) ((base) + (0x434))

/* �Ĵ���˵����DDRC_HIS_MTEST_EXPDATA8��DDR MTEST����ʱ��������ȷ������8
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA8_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA8_ADDR(base) ((base) + (0x438))

/* �Ĵ���˵����DDRC_HIS_MTEST_EXPDATA9��DDR MTEST����ش���ʱ��������ȷ������9
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA9_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA9_ADDR(base) ((base) + (0x43C))

/* �Ĵ���˵����DDRC_HIS_MTEST_EXPDATA10��DDR MTEST����ʱ��������ȷ������10
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA10_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA10_ADDR(base) ((base) + (0x440))

/* �Ĵ���˵����DDRC_HIS_MTEST_EXPDATA11��DDR MTEST����ش���ʱ��������ȷ������11
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA11_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA11_ADDR(base) ((base) + (0x444))

/* �Ĵ���˵����DDRC_HIS_MTEST_EXPDATA12��DDR MTEST����ʱ��������ȷ������12
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA12_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA12_ADDR(base) ((base) + (0x448))

/* �Ĵ���˵����DDRC_HIS_MTEST_EXPDATA13��DDR MTEST����ش���ʱ��������ȷ������13
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA13_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA13_ADDR(base) ((base) + (0x44C))

/* �Ĵ���˵����DDRC_HIS_MTEST_EXPDATA14��DDR MTEST����ʱ��������ȷ������14
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA14_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA14_ADDR(base) ((base) + (0x450))

/* �Ĵ���˵����DDRC_HIS_MTEST_EXPDATA15��DDR MTEST����ش���ʱ��������ȷ������15
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA15_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA15_ADDR(base) ((base) + (0x454))

/* �Ĵ���˵����DDRC_HIS_MTEST_EXPDATA16��DDR MTEST����ʱ��������ȷ������16
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA16_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA16_ADDR(base) ((base) + (0x458))

/* �Ĵ���˵����DDRC_HIS_MTEST_EXPDATA17��DDR MTEST����ش���ʱ��������ȷ������17
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA17_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA17_ADDR(base) ((base) + (0x45C))

/* �Ĵ���˵����DDRC_HIS_MTEST_ERRDATA0��DDR MTEST����ʱ������0
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA0_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA0_ADDR(base) ((base) + (0x460))

/* �Ĵ���˵����DDRC_HIS_MTEST_ERRDATA1��DDR MTEST����ʱ������1
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA1_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA1_ADDR(base) ((base) + (0x464))

/* �Ĵ���˵����DDRC_HIS_MTEST_ERRDATA2��DDR MTEST����ʱ������2
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA2_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA2_ADDR(base) ((base) + (0x468))

/* �Ĵ���˵����DDRC_HIS_MTEST_ERRDATA3��DDR MTEST����ʱ������3
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA3_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA3_ADDR(base) ((base) + (0x46C))

/* �Ĵ���˵����DDRC_HIS_MTEST_ERRDATA4��DDR MTEST����ʱ������4
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA4_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA4_ADDR(base) ((base) + (0x470))

/* �Ĵ���˵����DDRC_HIS_MTEST_ERRDATA5��DDR MTEST����ʱ������5
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA5_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA5_ADDR(base) ((base) + (0x474))

/* �Ĵ���˵����DDRC_HIS_MTEST_ERRDATA6��DDR MTEST����ʱ������6
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA6_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA6_ADDR(base) ((base) + (0x478))

/* �Ĵ���˵����DDRC_HIS_MTEST_ERRDATA7��DDR MTEST����ʱ������7
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA7_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA7_ADDR(base) ((base) + (0x47C))

/* �Ĵ���˵����DDRC_HIS_MTEST_ERRDATA8��DDR MTEST����ʱ������8
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA8_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA8_ADDR(base) ((base) + (0x480))

/* �Ĵ���˵����DDRC_HIS_MTEST_ERRDATA9��DDR MTEST����ʱ������9
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA9_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA9_ADDR(base) ((base) + (0x484))

/* �Ĵ���˵����DDRC_HIS_MTEST_ERRDATA10��DDR MTEST����ʱ������10
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA10_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA10_ADDR(base) ((base) + (0x488))

/* �Ĵ���˵����DDRC_HIS_MTEST_ERRDATA11��DDR MTEST����ʱ������11
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA11_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA11_ADDR(base) ((base) + (0x48C))

/* �Ĵ���˵����DDRC_HIS_MTEST_ERRDATA12��DDR MTEST����ʱ������12
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA12_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA12_ADDR(base) ((base) + (0x490))

/* �Ĵ���˵����DDRC_HIS_MTEST_ERRDATA13��DDR MTEST����ʱ������13
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA13_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA13_ADDR(base) ((base) + (0x494))

/* �Ĵ���˵����DDRC_HIS_MTEST_ERRDATA14��DDR MTEST����ʱ������14
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA14_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA14_ADDR(base) ((base) + (0x498))

/* �Ĵ���˵����DDRC_HIS_MTEST_ERRDATA15��DDR MTEST����ʱ������15
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA15_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA15_ADDR(base) ((base) + (0x49C))

/* �Ĵ���˵����DDRC_HIS_MTEST_ERRDATA16��DDR MTEST����ʱ������16
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA16_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA16_ADDR(base) ((base) + (0x4A0))

/* �Ĵ���˵����DDRC_HIS_MTEST_ERRDATA16��DDR MTEST����ʱ������16
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA17_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA17_ADDR(base) ((base) + (0x4A4))

/* �Ĵ���˵����DDRC_HIS_SFC_RDATA0��SFC�����ݼĴ���
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_SFC_RDATA0_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_SFC_RDATA0_ADDR(base)  ((base) + (0x4A8))

/* �Ĵ���˵����DDRC_HIS_SFC_RDATA1��SFC�����ݼĴ���
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_SFC_RDATA1_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_SFC_RDATA1_ADDR(base)  ((base) + (0x4AC))

/* �Ĵ���˵����DDRC_HIS_SFC_RDATA2��SFC�����ݼĴ���
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_SFC_RDATA2_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_SFC_RDATA2_ADDR(base)  ((base) + (0x4B0))

/* �Ĵ���˵����DDRC_HIS_SFC_RDATA3��SFC�����ݼĴ���
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_SFC_RDATA3_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_SFC_RDATA3_ADDR(base)  ((base) + (0x4B4))

/* �Ĵ���˵����DDRC_HIS_SFC_RDATA4��SFC�����ݼĴ���
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_SFC_RDATA4_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_SFC_RDATA4_ADDR(base)  ((base) + (0x4B8))

/* �Ĵ���˵����DDRC_HIS_SFC_RDATA5��SFC�����ݼĴ���
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_SFC_RDATA5_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_SFC_RDATA5_ADDR(base)  ((base) + (0x4BC))

/* �Ĵ���˵����DDRC_HIS_SFC_RDATA6��SFC�����ݼĴ���
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_SFC_RDATA6_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_SFC_RDATA6_ADDR(base)  ((base) + (0x4C0))

/* �Ĵ���˵����DDRC_HIS_SFC_RDATA7��SFC�����ݼĴ���
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_SFC_RDATA7_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_SFC_RDATA7_ADDR(base)  ((base) + (0x4C4))

/* �Ĵ���˵����DDRC_HIS_SFC_RDATA_ECC��SFC������ECC�Ĵ���
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_HIS_SFC_RDATA_ECC_UNION */
#define SOC_MDDRC_DMC_DDRC_HIS_SFC_RDATA_ECC_ADDR(base) ((base) + (0x4C8))

/* �Ĵ���˵����DDRC_TEST_GENPOSE0�Ǳ����Ĵ���
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_TEST_GENPOSE0_UNION */
#define SOC_MDDRC_DMC_DDRC_TEST_GENPOSE0_ADDR(base)   ((base) + (0x4CC))

/* �Ĵ���˵����DDRC_TEST_GENPOSE1�Ǳ����Ĵ���
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_TEST_GENPOSE1_UNION */
#define SOC_MDDRC_DMC_DDRC_TEST_GENPOSE1_ADDR(base)   ((base) + (0x4D0))

/* �Ĵ���˵����DDRC_TEST_GENPOSE2�Ǳ����Ĵ���
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_TEST_GENPOSE2_UNION */
#define SOC_MDDRC_DMC_DDRC_TEST_GENPOSE2_ADDR(base)   ((base) + (0x4D4))

/* �Ĵ���˵����DDRC_TEST_GENPOSE0_ST0�Ǳ����Ĵ���
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_TEST_GENPOSE0_ST_UNION */
#define SOC_MDDRC_DMC_DDRC_TEST_GENPOSE0_ST_ADDR(base) ((base) + (0x4D8))

/* �Ĵ���˵����DDRC_TEST_GENPOSE_ST1�Ǳ����Ĵ���
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_TEST_GENPOSE1_ST_UNION */
#define SOC_MDDRC_DMC_DDRC_TEST_GENPOSE1_ST_ADDR(base) ((base) + (0x4DC))

/* �Ĵ���˵����DDRC_TEST_GENPOSE_ST0�Ǳ����Ĵ���
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_TEST_GENPOSE2_ST_UNION */
#define SOC_MDDRC_DMC_DDRC_TEST_GENPOSE2_ST_ADDR(base) ((base) + (0x4E0))

/* �Ĵ���˵����DDRC_TEST_TMOD��DDR ��RAM�Ĳ���ģʽ���üĴ���
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_TEST_RAM_TMOD_UNION */
#define SOC_MDDRC_DMC_DDRC_TEST_RAM_TMOD_ADDR(base)   ((base) + (0x500))

/* �Ĵ���˵����DDRC_TEST_RTL_CFG0��DDRC RTL������Ϣ�Ĵ���0
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_TEST_RTL_CFG0_UNION */
#define SOC_MDDRC_DMC_DDRC_TEST_RTL_CFG0_ADDR(base)   ((base) + (0x510))

/* �Ĵ���˵����DDRC_TEST_RTL_CFG1��DDRC RTL������Ϣ�Ĵ���1
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_TEST_RTL_CFG1_UNION */
#define SOC_MDDRC_DMC_DDRC_TEST_RTL_CFG1_ADDR(base)   ((base) + (0x514))

/* �Ĵ���˵����DDRC_TEST_RTL_CFG2��DDRC RTL������Ϣ�Ĵ���2
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_TEST_RTL_CFG2_UNION */
#define SOC_MDDRC_DMC_DDRC_TEST_RTL_CFG2_ADDR(base)   ((base) + (0x518))

/* �Ĵ���˵����DDRC_EDXN_DQMAP��ż��rank��DQ MAP�Ĵ���
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_EDXN_DQMAP_UNION */
#define SOC_MDDRC_DMC_DDRC_EDXN_DQMAP_ADDR(base, blanes)  ((base) + (0x580+0x8*(blanes)))

/* �Ĵ���˵����DDRC_ODXN_DQMAP������rank��DQ MAP�Ĵ���
   λ����UNION�ṹ:  SOC_MDDRC_DMC_DDRC_ODXN_DQMAP_UNION */
#define SOC_MDDRC_DMC_DDRC_ODXN_DQMAP_ADDR(base, blanes)  ((base) + (0x584+0x8*(blanes)))





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
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CTRL_SREF_UNION
 �ṹ˵��  : DDRC_CTRL_SREF �Ĵ����ṹ���塣��ַƫ����:0x000����ֵ:0x00000001�����:32
 �Ĵ���˵��: DDRC_CTRL_SREF��DDRC��ˢ�¿��ƼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sref_req  : 1;  /* bit[0]   : SDRAM��ˢ������
                                                    1��������ˢ��״̬��
                                                    0���˳���ˢ��״̬�� */
        unsigned int  sref_done : 1;  /* bit[1]   : DDRPHY��ˢ�²�����ɡ�
                                                    1:���ô�0��1�������ʾDDRPHY���������ˢ���˳������Ĳ�����DMC���Խ����µ����� */
        unsigned int  reserved  : 30; /* bit[2-31]: ������ */
    } reg;
} SOC_MDDRC_DMC_DDRC_CTRL_SREF_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CTRL_SREF_sref_req_START   (0)
#define SOC_MDDRC_DMC_DDRC_CTRL_SREF_sref_req_END     (0)
#define SOC_MDDRC_DMC_DDRC_CTRL_SREF_sref_done_START  (1)
#define SOC_MDDRC_DMC_DDRC_CTRL_SREF_sref_done_END    (1)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CTRL_INIT_UNION
 �ṹ˵��  : DDRC_CTRL_INIT �Ĵ����ṹ���塣��ַƫ����:0x004����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_CTRL_INIT��DDRC��ʼ�����ƼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  init_req       : 1;  /* bit[0]   : ��ʼ��������
                                                         1������SDRAM��ʼ��������
                                                         0����ɳ�ʼ��������������״̬�� */
        unsigned int  dfi_init_start : 1;  /* bit[1]   : DFI��ʼ��������
                                                         1������DFI�ӿڳ�ʼ��������PHY������صĿ������̡�
                                                         0������״̬��
                                                         ע�⣺���bit�ڳ�ʼ������Ժ�Ӳ���Զ����㡣 */
        unsigned int  reserved       : 30; /* bit[2-31]: ������ */
    } reg;
} SOC_MDDRC_DMC_DDRC_CTRL_INIT_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CTRL_INIT_init_req_START        (0)
#define SOC_MDDRC_DMC_DDRC_CTRL_INIT_init_req_END          (0)
#define SOC_MDDRC_DMC_DDRC_CTRL_INIT_dfi_init_start_START  (1)
#define SOC_MDDRC_DMC_DDRC_CTRL_INIT_dfi_init_start_END    (1)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CTRL_DDRRST_UNION
 �ṹ˵��  : DDRC_CTRL_DDRRST �Ĵ����ṹ���塣��ַƫ����:0x008����ֵ:0x00000001�����:32
 �Ĵ���˵��: DDRC_CTRL_DDRRST��DDR3 ��λ���ƼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ddr3_rst_n : 1;  /* bit[0]   : DDR3 SDRAM��λ��
                                                     1����λ��Ч��
                                                     0����λ��Ч��
                                                     ע�⣺����DDR3 SDRAM��Ч��Ĭ������Ϊ1�� */
        unsigned int  reserved   : 31; /* bit[1-31]: ������ */
    } reg;
} SOC_MDDRC_DMC_DDRC_CTRL_DDRRST_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CTRL_DDRRST_ddr3_rst_n_START  (0)
#define SOC_MDDRC_DMC_DDRC_CTRL_DDRRST_ddr3_rst_n_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CTRL_SFC_UNION
 �ṹ˵��  : DDRC_CTRL_SFC �Ĵ����ṹ���塣��ַƫ����:0x00C����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_CTRL_SFC��DDRC�������DDR���������Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cmd_req  : 1;  /* bit[0]   : ��������������ִ������
                                                   1������ִ�����
                                                   0����ִ��������ߵ�����ִ����ɺ��Զ����ò������㡣��ʱ�ٴ�дһ���������Ч */
        unsigned int  reserved : 31; /* bit[1-31]: ������ */
    } reg;
} SOC_MDDRC_DMC_DDRC_CTRL_SFC_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CTRL_SFC_cmd_req_START   (0)
#define SOC_MDDRC_DMC_DDRC_CTRL_SFC_cmd_req_END     (0)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CTRL_PERF_UNION
 �ṹ˵��  : DDRC_CTRL_PERF �Ĵ����ṹ���塣��ַƫ����:0x010����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_CTRL_PERF��DDRC����ͳ��ʹ�ܼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  perf_en  : 1;  /* bit[0]   : ����ͳ��ʹ�ܡ�
                                                   1��ʹ�ܣ�
                                                   0����ֹ��
                                                    ע�⣺��perf_mode=0ʱ����λʹ�ܱ�ʾ����ͳ�ƼĴ�������ʼѭ����������perf_mode=1ʱ�����һ��ͳ��֮�󣬸�λ�Զ����� */
        unsigned int  reserved : 31; /* bit[1-31]: ������ */
    } reg;
} SOC_MDDRC_DMC_DDRC_CTRL_PERF_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CTRL_PERF_perf_en_START   (0)
#define SOC_MDDRC_DMC_DDRC_CTRL_PERF_perf_en_END     (0)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CTRL_MTEST_UNION
 �ṹ˵��  : DDRC_CTRL_MTEST �Ĵ����ṹ���塣��ַƫ����:0x014����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_CTRL_MTEST��DDRC�������MEMTEST�����Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mtest_start : 1;  /* bit[0]   : ��������������ִ������
                                                      1������ִ�����
                                                      0����ִ��������ߵ�����ִ����ɺ��Զ����ò������㡣 */
        unsigned int  reserved    : 31; /* bit[1-31]: ������ */
    } reg;
} SOC_MDDRC_DMC_DDRC_CTRL_MTEST_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CTRL_MTEST_mtest_start_START  (0)
#define SOC_MDDRC_DMC_DDRC_CTRL_MTEST_mtest_start_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CTRL_MCLR_UNION
 �ṹ˵��  : DDRC_CTRL_MCLR �Ĵ����ṹ���塣��ַƫ����:0x018����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_CTRL_MCLR��DDRC�������MEMCLR�����Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mclr_start : 1;  /* bit[0]   : ��������������ִ������
                                                     1������ִ�����
                                                     0����ִ��������ߵ�����ִ����ɺ��Զ����ò������㡣 */
        unsigned int  reserved   : 31; /* bit[1-31]: ������ */
    } reg;
} SOC_MDDRC_DMC_DDRC_CTRL_MCLR_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CTRL_MCLR_mclr_start_START  (0)
#define SOC_MDDRC_DMC_DDRC_CTRL_MCLR_mclr_start_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CFG_LP_UNION
 �ṹ˵��  : DDRC_CFG_LP �Ĵ����ṹ���塣��ַƫ����:0x01C����ֵ:0x000AF000�����:32
 �Ĵ���˵��: DDRC_CFG_LP��dfi��lp�ӿڵ�������üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  lp_en      : 1;  /* bit[0]    : Ӳ��ʹ��dfi��lp�ӿڡ�
                                                      1��ʹ��Ӳ���Զ�����LP�ӿڣ�
                                                      0�����������LP�ӿ� */
        unsigned int  reserved_0 : 3;  /* bit[1-3]  : ������ */
        unsigned int  lp_soft_en : 1;  /* bit[4]    : �������PHY����LP״̬
                                                      1���������PHY����LP״̬��
                                                      0����������˳�LP״̬��
                                                      ע�⣬��lp_enΪ0ʱ��LP�ӿ���ȫ��������ƣ�Ĭ��״̬��������ƣ����������δ�������״̬�� */
        unsigned int  lp_ack     : 1;  /* bit[5]    : lp�ӿڵ�ack״̬��
                                                      1����ʾPHY����Power down״̬��
                                                      0����ʾPHY���ڷ�Power down״̬�� */
        unsigned int  reserved_1 : 2;  /* bit[6-7]  : ������ */
        unsigned int  tlp_wakeup : 4;  /* bit[8-11] : LP�ӿڵ�tlp_wakeʱ��
                                                      0x0��0x1��1��ʱ�����ڣ�
                                                      0x2��0xF��n��ʱ�����ڡ� */
        unsigned int  tlp_resp   : 4;  /* bit[12-15]: LP�ӿڵ�tlp_respʱ��
                                                      0x0��0x1��1��ʱ�����ڣ�
                                                      0x2��0xF��n��ʱ�����ڡ� */
        unsigned int  t_wcke     : 4;  /* bit[16-19]: ��cke���͵�phy����͹�������ȴ�ʱ�䡣
                                                      0x0��0x1��1��ʱ�����ڣ�
                                                      0x2��0xF��n��ʱ�����ڡ�
                                                      ��Ϊ��dmc�ཫcke���ͺ�cke��Ҫ����pub��phy�����ղ��ܵ���ddr���������յ���ddr֮ǰ�����ܽ�iopowerdown��clk gating���� �ò������ݲ�ͬ��PHY��������ͬ�����G2 MultiPHY,��control SDRģʽ�¸�ֵ��Ҫʹ��0xa�����pd_prd���õ�ֵ����(bl/2+tcl+2)�����ֵ�������ó�0xa-(pd_prd-(bl/2+tcl+2)).����control HDRģʽ������ֵ���ÿɼ��롣 */
        unsigned int  reserved_2 : 12; /* bit[20-31]: ������ */
    } reg;
} SOC_MDDRC_DMC_DDRC_CFG_LP_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CFG_LP_lp_en_START       (0)
#define SOC_MDDRC_DMC_DDRC_CFG_LP_lp_en_END         (0)
#define SOC_MDDRC_DMC_DDRC_CFG_LP_lp_soft_en_START  (4)
#define SOC_MDDRC_DMC_DDRC_CFG_LP_lp_soft_en_END    (4)
#define SOC_MDDRC_DMC_DDRC_CFG_LP_lp_ack_START      (5)
#define SOC_MDDRC_DMC_DDRC_CFG_LP_lp_ack_END        (5)
#define SOC_MDDRC_DMC_DDRC_CFG_LP_tlp_wakeup_START  (8)
#define SOC_MDDRC_DMC_DDRC_CFG_LP_tlp_wakeup_END    (11)
#define SOC_MDDRC_DMC_DDRC_CFG_LP_tlp_resp_START    (12)
#define SOC_MDDRC_DMC_DDRC_CFG_LP_tlp_resp_END      (15)
#define SOC_MDDRC_DMC_DDRC_CFG_LP_t_wcke_START      (16)
#define SOC_MDDRC_DMC_DDRC_CFG_LP_t_wcke_END        (19)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CFG_SREF_UNION
 �ṹ˵��  : DDRC_CFG_SREF �Ĵ����ṹ���塣��ַƫ����:0x020����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_CFG_SREF��DDR��ˢ�����üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sref_cc           : 1;  /* bit[0]    : ��ˢ��ģʽ��SDRAMʱ�ӿ��ơ�
                                                             1���ض�SDRAMʱ�ӣ�
                                                             0�����ض�SDRAMʱ�ӡ� */
        unsigned int  asref_fast_wakeup : 1;  /* bit[1]    : AUTO SELFREFRESH���ٻ���ʹ�ܡ�
                                                             1��ʹ�ܣ�
                                                             0����ֹ�� */
        unsigned int  reserved_0        : 2;  /* bit[2-3]  : ������ */
        unsigned int  sref_odis         : 1;  /* bit[4]    : ��ˢ��ģʽ��DDR���������IO������ض����á�
                                                             1���ضϹܽ������
                                                             0�����ضϹܽ������
                                                             ע�⣺������Ϊ��̬���á����鵱����DDR����self_refresh�󣬿�����Ϊ1���ض�DDR���������IO�������������DDR�˳�self_refreshǰ������Ϊ0����DDR���������IO������� */
        unsigned int  reserved_1        : 3;  /* bit[5-7]  : ������ */
        unsigned int  clk_switch        : 1;  /* bit[8]    : DDRC�͹���ʱ���л����ơ�DDRC����͹���״̬��DDR Self Refresh��״̬�Ƿ�ѹAXI�ӿ����
                                                             1����ѹ�ӿ����ʱ���л���ɺ󣬼���ִ��ԭ�����
                                                             0������ѹ���ֱ�ӷ���ERROR��Ӧ�� */
        unsigned int  reserved_2        : 3;  /* bit[9-11] : ������ */
        unsigned int  sref_arefnum      : 4;  /* bit[12-15]: DDRn SDRAM��DFS�����У��˳���ˢ�º󷢳����Զ�ˢ�²���������
                                                             0x0���������Զ�ˢ�²�����
                                                             0x1��0xF��n�Ρ� */
        unsigned int  asref_en          : 16; /* bit[16-31]: SDRAM�Զ�����SELFREFRESHʹ�ܡ�
                                                             1��ʹ�ܣ�
                                                             0����ֹ��
                                                             ע�⣬ÿ��RANK��Ӧһ������λ����DDRC_CFG_PD[PD_EN]��Ч����RANK��Ӧ��asref_en��Чʱ�����RANK�����Զ�����SELF REFRESH�� */
    } reg;
} SOC_MDDRC_DMC_DDRC_CFG_SREF_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CFG_SREF_sref_cc_START            (0)
#define SOC_MDDRC_DMC_DDRC_CFG_SREF_sref_cc_END              (0)
#define SOC_MDDRC_DMC_DDRC_CFG_SREF_asref_fast_wakeup_START  (1)
#define SOC_MDDRC_DMC_DDRC_CFG_SREF_asref_fast_wakeup_END    (1)
#define SOC_MDDRC_DMC_DDRC_CFG_SREF_sref_odis_START          (4)
#define SOC_MDDRC_DMC_DDRC_CFG_SREF_sref_odis_END            (4)
#define SOC_MDDRC_DMC_DDRC_CFG_SREF_clk_switch_START         (8)
#define SOC_MDDRC_DMC_DDRC_CFG_SREF_clk_switch_END           (8)
#define SOC_MDDRC_DMC_DDRC_CFG_SREF_sref_arefnum_START       (12)
#define SOC_MDDRC_DMC_DDRC_CFG_SREF_sref_arefnum_END         (15)
#define SOC_MDDRC_DMC_DDRC_CFG_SREF_asref_en_START           (16)
#define SOC_MDDRC_DMC_DDRC_CFG_SREF_asref_en_END             (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CFG_INIT_UNION
 �ṹ˵��  : DDRC_CFG_INIT �Ĵ����ṹ���塣��ַƫ����:0x024����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_CFG_INIT��DDR��ʼ�����üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  init_arefnum : 8;  /* bit[0-7] : DDRn SDRAM��ʼ�������з������Զ�ˢ�²���������
                                                       0x0��0x2��2�Σ�
                                                       0x3��0xF��n�Ρ� */
        unsigned int  wrlvl_en     : 1;  /* bit[8]   : DDR3��ʼ��ʱ��Write LevelingӲ���Զ�����ʹ�ܡ�
                                                       1��ʹ�ܣ�
                                                       0����ֹ��
                                                       ע�⣺�����DDR3��Ч��ʹ�ܴ����ú󣬻������DDR3��ʼ��������Write leveling���̡� */
        unsigned int  reserved     : 23; /* bit[9-31]: ������ */
    } reg;
} SOC_MDDRC_DMC_DDRC_CFG_INIT_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CFG_INIT_init_arefnum_START  (0)
#define SOC_MDDRC_DMC_DDRC_CFG_INIT_init_arefnum_END    (7)
#define SOC_MDDRC_DMC_DDRC_CFG_INIT_wrlvl_en_START      (8)
#define SOC_MDDRC_DMC_DDRC_CFG_INIT_wrlvl_en_END        (8)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CFG_PD_UNION
 �ṹ˵��  : DDRC_CFG_PD �Ĵ����ṹ���塣��ַƫ����:0x028����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_CFG_PD��DDR�͹���PowerDown״̬���üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pd_en     : 1;  /* bit[0]    : SDRAM�Զ��͹���ʹ�ܡ�
                                                     1��ʹ�ܣ�
                                                     0����ֹ�� */
        unsigned int  pd_ac     : 1;  /* bit[1]    : �͹���ģʽ��PowerDown����SDRAM ��ַ���̬�ضϿ��ơ�
                                                     1���ضϹܽ������
                                                     0�����ضϹܽ������
                                                     ע�⣺��pd_enʹ������Ч�����ƹܽŲ�����CKE��ODT��CSN��RESET_N�� */
        unsigned int  pd_cc     : 1;  /* bit[2]    : �͹���ģʽ��PowerDown����SDRAMʱ�ӿ��ơ�
                                                     1���ض�SDRAMʱ�ӣ�
                                                     0�����ض�SDRAMʱ�ӡ�
                                                     ע�⣺�ò����������DDRΪLPDDR/LPDDR2 SDRAMʱ��Ч�� */
        unsigned int  reserved  : 1;  /* bit[3]    : ������ */
        unsigned int  pd_prd    : 12; /* bit[4-15] : SDRAM�͹��ģ�Power Down���������á���DDRC��������pd_prd��������û�н��ܵ���������SDRAM���뵽�͹���״̬������������������SDRAM�˳��͹���״̬��
                                                     0x00��������power down״̬��
                                                     0x01��0xFFF��n��ʱ�����ڡ�
                                                     ע�⣺�ò�������pd_enΪ1ʱ��Ч�� */
        unsigned int  t_clk_cke : 4;  /* bit[16-19]: CLK��CKE��ϵ���á�
                                                     0x0~0x7��PHY�ر�ʱ�����CKE����ʱ���������DDRPHY��ء�
                                                     ����SNPS G2 MULTIPHY����Ϊ5��
                                                     SNPS 32PHY����Ϊ0�� */
        unsigned int  asref_prd : 12; /* bit[20-31]: SDRAM�͹��ģ�Auto Selfrefresh���������á���DDRC��������asref_prd��������û�н��ܵ���������SDRAM���뵽��ˢ��״̬������������������SDRAM�˳��͹���״̬��
                                                     0x0��0xFFF��nx1024��ʱ�����ڡ�
                                                     ע�⣺�ò�������asref_enΪ1ʱ��Ч�� */
    } reg;
} SOC_MDDRC_DMC_DDRC_CFG_PD_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CFG_PD_pd_en_START      (0)
#define SOC_MDDRC_DMC_DDRC_CFG_PD_pd_en_END        (0)
#define SOC_MDDRC_DMC_DDRC_CFG_PD_pd_ac_START      (1)
#define SOC_MDDRC_DMC_DDRC_CFG_PD_pd_ac_END        (1)
#define SOC_MDDRC_DMC_DDRC_CFG_PD_pd_cc_START      (2)
#define SOC_MDDRC_DMC_DDRC_CFG_PD_pd_cc_END        (2)
#define SOC_MDDRC_DMC_DDRC_CFG_PD_pd_prd_START     (4)
#define SOC_MDDRC_DMC_DDRC_CFG_PD_pd_prd_END       (15)
#define SOC_MDDRC_DMC_DDRC_CFG_PD_t_clk_cke_START  (16)
#define SOC_MDDRC_DMC_DDRC_CFG_PD_t_clk_cke_END    (19)
#define SOC_MDDRC_DMC_DDRC_CFG_PD_asref_prd_START  (20)
#define SOC_MDDRC_DMC_DDRC_CFG_PD_asref_prd_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CFG_AREF_UNION
 �ṹ˵��  : DDRC_CFG_AREF �Ĵ����ṹ���塣��ַƫ����:0x02C����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_CFG_AREF��DDRC�Զ�ˢ��ģʽ���üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  aref_mode      : 2;  /* bit[0-1]  : ���Ż��Զ�ˢ��ģʽѡ��
                                                          11��ÿ9��tREFI����ִ��8���Զ�ˢ�²�����
                                                          10��ÿ5��tREFI����ִ��4���Զ�ˢ�²���
                                                          01: ÿ3��tRFI����ִ��3���Զ�ˢ�²���
                                                          00��ÿ1��tREFI����ִ��1���Զ�ˢ�²�����
                                                          
                                                          �Ż��Զ�ˢ��ģʽ��
                                                          11��postponed����ˮ��Ϊ8��
                                                          10��postponed����ˮ��Ϊ4��
                                                          01��postponed����ˮ��Ϊ2��
                                                          00��postponed����ˮ��Ϊ1�� */
        unsigned int  aref_opt       : 1;  /* bit[2]    : auto refresh�Ż�ʹ�ܡ�
                                                          1��ʹ���Զ�ˢ���Ż���
                                                          0����ֹ�Զ�ˢ���Ż���
                                                          ʹ�ܸù���ʱ��aref_mode��������Ϊ11��DMC����ÿ��auto refreshiʱ��̬���DDR�Ƿ���У�������У�����AREF������򽫵ȴ���ֱ��AREF�����ۻ���9��AREF����ʱ��ǿ����ֹDDR���ʣ�����AREF��� */
        unsigned int  aref_dual_rank : 1;  /* bit[3]    : AREFģ�鷢��REF�����ģʽѡ��
                                                          0��ÿ��ֻ��һ��rank����REF����
                                                          1��ÿ�λ�������rank����REF��� */
        unsigned int  aref_alarm_en  : 1;  /* bit[4]    : ����AREF�����ж�auto refresh�ı���ʹ�ܣ�
                                                          1��ʹ�ܣ�
                                                          0����ʹ�ܡ� */
        unsigned int  reserved_0     : 3;  /* bit[5-7]  : ������ */
        unsigned int  aref_alarm_num : 8;  /* bit[8-15] : ���õ��޷������ɸ�auto refresh�����ǿ�Ʒ���self refresh���
                                                          0x0~0xFF��ȱ��n+1��auto refresh��(ע�⣬��n=255ʱ�����ڼ�����Ϊ8λ�����λ���λ��ʧ���൱��1��
                                                          
                                                          ��Ϊ�Ż�ģʽʱ��ȡaref_opt=1����postponed�ĸ���������15ʱ�ͻᱨ���� */
        unsigned int  reserved_1     : 16; /* bit[16-31]:  */
    } reg;
} SOC_MDDRC_DMC_DDRC_CFG_AREF_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CFG_AREF_aref_mode_START       (0)
#define SOC_MDDRC_DMC_DDRC_CFG_AREF_aref_mode_END         (1)
#define SOC_MDDRC_DMC_DDRC_CFG_AREF_aref_opt_START        (2)
#define SOC_MDDRC_DMC_DDRC_CFG_AREF_aref_opt_END          (2)
#define SOC_MDDRC_DMC_DDRC_CFG_AREF_aref_dual_rank_START  (3)
#define SOC_MDDRC_DMC_DDRC_CFG_AREF_aref_dual_rank_END    (3)
#define SOC_MDDRC_DMC_DDRC_CFG_AREF_aref_alarm_en_START   (4)
#define SOC_MDDRC_DMC_DDRC_CFG_AREF_aref_alarm_en_END     (4)
#define SOC_MDDRC_DMC_DDRC_CFG_AREF_aref_alarm_num_START  (8)
#define SOC_MDDRC_DMC_DDRC_CFG_AREF_aref_alarm_num_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CFG_ECC_UNION
 �ṹ˵��  : DDRC_CFG_ECC �Ĵ����ṹ���塣��ַƫ����:0x030����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_CFG_ECC��DDRC ECC���üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ecc_en   : 1;  /* bit[0]    : ��ʾ�ⲿ�Ƿ�����ECC������
                                                    1��ʹ�ܣ�
                                                    0����ֹ�� */
        unsigned int  reserved_0: 3;  /* bit[1-3]  : ������ */
        unsigned int  eccwb_en : 1;  /* bit[4]    : ECC��дʹ�ܡ�
                                                    1��ʹ�ܣ�
                                                    0����ֹ��
                                                    ��ʹ��eccwb_en�󣬵�����ECC�����ش���ʱ��DDRC���Զ���дECCУ������ֵ����DDR�д洢�Ĵ������ݾ����� */
        unsigned int  reserved_1: 3;  /* bit[5-7]  : ������ */
        unsigned int  ecc_byp  : 1;  /* bit[8]    : DDRC ECC Bypass ʹ�����á�
                                                    1��ECC Bypassʹ�ܣ�
                                                    0��ECC Bypass��ֹ��
                                                    ����ģʽʱ������Ϊ0��У��ECC���ݣ�����Ϊ������У��ECC���ݡ���ecc_enΪ0ʱ���˼Ĵ�����Ҫ����Ϊ1�� */
        unsigned int  ecc_msk  : 1;  /* bit[9]    : DDRPHY ECC ����maskʹ�ܡ�
                                                    1��ʹ�ܣ�
                                                    0����ֹ��
                                                    ��ʹ��ʱ��ecc���ݲ���д���ڴ棬�����������ע����� */
        unsigned int  reserved_2: 22; /* bit[10-31]: ������ */
    } reg;
} SOC_MDDRC_DMC_DDRC_CFG_ECC_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CFG_ECC_ecc_en_START    (0)
#define SOC_MDDRC_DMC_DDRC_CFG_ECC_ecc_en_END      (0)
#define SOC_MDDRC_DMC_DDRC_CFG_ECC_eccwb_en_START  (4)
#define SOC_MDDRC_DMC_DDRC_CFG_ECC_eccwb_en_END    (4)
#define SOC_MDDRC_DMC_DDRC_CFG_ECC_ecc_byp_START   (8)
#define SOC_MDDRC_DMC_DDRC_CFG_ECC_ecc_byp_END     (8)
#define SOC_MDDRC_DMC_DDRC_CFG_ECC_ecc_msk_START   (9)
#define SOC_MDDRC_DMC_DDRC_CFG_ECC_ecc_msk_END     (9)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CFG_ERRINJ_UNION
 �ṹ˵��  : DDRC_CFG_ERRINJ �Ĵ����ṹ���塣��ַƫ����:0x034����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_CFG_ERRINJ��DDRC ECC����ע�����üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  err_inject_mode : 2;  /* bit[0-1]  : ECC����ע��ģʽ��
                                                           00����������ģʽ��
                                                           01������ע�룬ͨ����0bit��0->1���䴥����
                                                           10������ע�롣 */
        unsigned int  reserved_0      : 2;  /* bit[2-3]  : ������ */
        unsigned int  err_inject_bl0  : 5;  /* bit[4-8]  : ECC����ע���Bytelane0�� */
        unsigned int  err_inject_bl1  : 5;  /* bit[9-13] : ECC����ע���Bytelane1�� */
        unsigned int  reserved_1      : 2;  /* bit[14-15]: ������ */
        unsigned int  err_inject_mask : 16; /* bit[16-31]: ÿ��Bytelane�ڣ�ECC����ע���λ��(��9��bytelane����
                                                           1���Ըñ������ݴ���ע�룻
                                                           0�������� */
    } reg;
} SOC_MDDRC_DMC_DDRC_CFG_ERRINJ_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CFG_ERRINJ_err_inject_mode_START  (0)
#define SOC_MDDRC_DMC_DDRC_CFG_ERRINJ_err_inject_mode_END    (1)
#define SOC_MDDRC_DMC_DDRC_CFG_ERRINJ_err_inject_bl0_START   (4)
#define SOC_MDDRC_DMC_DDRC_CFG_ERRINJ_err_inject_bl0_END     (8)
#define SOC_MDDRC_DMC_DDRC_CFG_ERRINJ_err_inject_bl1_START   (9)
#define SOC_MDDRC_DMC_DDRC_CFG_ERRINJ_err_inject_bl1_END     (13)
#define SOC_MDDRC_DMC_DDRC_CFG_ERRINJ_err_inject_mask_START  (16)
#define SOC_MDDRC_DMC_DDRC_CFG_ERRINJ_err_inject_mask_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CFG_FIFO_ERRINJ_UNION
 �ṹ˵��  : DDRC_CFG_FIFO_ERRINJ �Ĵ����ṹ���塣��ַƫ����:0x038����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_CFG_FIFO_ERRINJ
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sbram_err_inj  : 2;  /* bit[0-1]  : SBRAM ECCע��ģʽ��
                                                          00������ģʽ��
                                                          01��1bit����ע�룻
                                                          10��1bit����ע�룻
                                                          11��2bit����ע�롣
                                                          �˼Ĵ������ú������ע�������Ҫ������㡣 */
        unsigned int  reserved_0     : 2;  /* bit[2-3]  : ������ */
        unsigned int  rpram_err_inj  : 2;  /* bit[4-5]  : RPRAM ECCע��ģʽ��
                                                          00������ģʽ��
                                                          01��1bit����ע�룻
                                                          10��1bit����ע�룻
                                                          11��2bit����ע�롣
                                                          �˼Ĵ������ú������ע�������Ҫ������㡣 */
        unsigned int  reserved_1     : 2;  /* bit[6-7]  : ������ */
        unsigned int  recram_err_inj : 2;  /* bit[8-9]  : RECRAM ECCע��ģʽ��
                                                          00������ģʽ��
                                                          01��1bit����ע�룻
                                                          10��1bit����ע�룻
                                                          11��2bit����ע�롣
                                                          �˼Ĵ������ú������ע�������Ҫ������㡣 */
        unsigned int  reserved_2     : 22; /* bit[10-31]: ������ */
    } reg;
} SOC_MDDRC_DMC_DDRC_CFG_FIFO_ERRINJ_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CFG_FIFO_ERRINJ_sbram_err_inj_START   (0)
#define SOC_MDDRC_DMC_DDRC_CFG_FIFO_ERRINJ_sbram_err_inj_END     (1)
#define SOC_MDDRC_DMC_DDRC_CFG_FIFO_ERRINJ_rpram_err_inj_START   (4)
#define SOC_MDDRC_DMC_DDRC_CFG_FIFO_ERRINJ_rpram_err_inj_END     (5)
#define SOC_MDDRC_DMC_DDRC_CFG_FIFO_ERRINJ_recram_err_inj_START  (8)
#define SOC_MDDRC_DMC_DDRC_CFG_FIFO_ERRINJ_recram_err_inj_END    (9)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CFG_WORKMODE_UNION
 �ṹ˵��  : DDRC_CFG_WORKMODE �Ĵ����ṹ���塣��ַƫ����:0x040����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_CFG_WORKMODE��DDRC����ģʽ���üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  clk_ratio   : 1;  /* bit[0]    : ����������ģʽ��
                                                       ��clk_ratio2����Ϊ0ʱ��
                                                       1��DDRC��PHYƵ�ʱ�Ϊ1��2��
                                                       0��DDRC��PHYƵ�ʱ�Ϊ1��1��
                                                       
                                                       ��clk_ratio2����Ϊ1ʱ��
                                                       1��������
                                                       0��DDRC��PHYƵ�ʱ�Ϊ1��4�� */
        unsigned int  cmd_clkon   : 1;  /* bit[1]    : ����ͨ��ʱ�ӿ��أ�
                                                       1��ǿ�ƴ�ʱ�ӣ�
                                                       0���ڲ��Զ�����ʱ�ӡ� */
        unsigned int  data_clkon  : 1;  /* bit[2]    : ����ͨ��ʱ�ӿ��أ�
                                                       1��ǿ�ƴ�ʱ�ӣ�
                                                       0���ڲ��Զ�����ʱ�ӡ� */
        unsigned int  func_clkon  : 1;  /* bit[3]    : ����ģ��ʱ�ӿ��أ�
                                                       1��ǿ�ƴ�ʱ�ӣ�
                                                       0���ڲ��Զ�����ʱ�ӡ� */
        unsigned int  apre_en     : 1;  /* bit[4]    : Auto Precharge����ʹ�ܣ�
                                                       1��ʹ�ܣ�
                                                       0����ֹ�� */
        unsigned int  reserved_0  : 3;  /* bit[5-7]  : ������ */
        unsigned int  wrap_en     : 1;  /* bit[8]    : WRAP�����Ż�����ʹ�ܡ�
                                                       1��ʹ�ܣ�
                                                       0����ֹ�� */
        unsigned int  intlv_en    : 1;  /* bit[9]    : DMC BURST���ʹ�ܡ�
                                                       0����ֹ��
                                                       1��ʹ�ܡ�
                                                       ��DDR4ģʽ�£�����Ϊ1���Ի��������ܣ�����ģʽ��������Ϊ0�� */
        unsigned int  addr_mode   : 2;  /* bit[10-11]: DDR��ַ�߷�תģʽѡ��
                                                       00��IDLEʱ�ص�1״̬��
                                                       01��IDLEʱ����ǰһ�������״̬��
                                                       10��IDLEʱ��ǰһ��״̬ȡ����
                                                       11�������� */
        unsigned int  read_mode   : 1;  /* bit[12]   : ��������ģʽѡ��
                                                       0����·��ģʽ��
                                                       1���ӳٶ�ģʽ��
                                                       ��·��ģʽ����ָ����������PHY�ͳ���������Ч�ź�������ݲ�����
                                                       �ӳٶ�ģʽ����ָ�������ڲ��ӳٵȴ���ɶ�PHY�ͳ����ݵĲ�����
                                                       ע�⣺��ֵ��DDRC_DTRCTRL[train_mode]����Ϊ0ʱ����������Ϊ0�� */
        unsigned int  hdr_mode    : 1;  /* bit[13]   : DFI�ӿ�ģʽѡ��
                                                       0��SDRģʽ��
                                                       1��HDRģʽ��
                                                       �Ĳ�����Ҫʱ�ӺͶ�Ӧ��DDRPHY����ģʽ��ϡ� */
        unsigned int  reserved_1  : 1;  /* bit[14]   : ������ */
        unsigned int  clk_ratio2  : 1;  /* bit[15]   : ��������DDR����ʱ��Ƶ�ʱ������á�
                                                       ��clk_ratio��ͬ���á�
                                                       0������ģʽ��
                                                       1����չģʽ�� */
        unsigned int  dual_ch     : 1;  /* bit[16]   : ������˫ͨ��ʹ�ܡ�
                                                       1��ʹ�ܣ�
                                                       0����ֹ��
                                                       �ò�������DDRC����Ϊ˫ͨ������ʱ����Ч�� */
        unsigned int  reserved_2  : 3;  /* bit[17-19]: ������ */
        unsigned int  reorder_en  : 1;  /* bit[20]   : ˫ͨ��������ʹ�ܣ�
                                                       1��ʹ�ܣ�
                                                       0����ֹ�� */
        unsigned int  reserved_3  : 3;  /* bit[21-23]: ������ */
        unsigned int  exclu_en    : 1;  /* bit[24]   : ��������ʹ�ܡ�
                                                       1��ʹ�ܣ�
                                                       0����ֹ�� */
        unsigned int  reserved_4  : 3;  /* bit[25-27]: ������ */
        unsigned int  wr_rcv_mode : 1;  /* bit[28]   : DDRC AXI�˿�д�������ģʽѡ��
                                                       0��д����ֱ�ӽ���ģʽ��
                                                       1��д������Ҫ�ȴ������Ӧ��д���ݵ����󣬲ű����ա� */
        unsigned int  reserved_5  : 3;  /* bit[29-31]: ������ */
    } reg;
} SOC_MDDRC_DMC_DDRC_CFG_WORKMODE_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CFG_WORKMODE_clk_ratio_START    (0)
#define SOC_MDDRC_DMC_DDRC_CFG_WORKMODE_clk_ratio_END      (0)
#define SOC_MDDRC_DMC_DDRC_CFG_WORKMODE_cmd_clkon_START    (1)
#define SOC_MDDRC_DMC_DDRC_CFG_WORKMODE_cmd_clkon_END      (1)
#define SOC_MDDRC_DMC_DDRC_CFG_WORKMODE_data_clkon_START   (2)
#define SOC_MDDRC_DMC_DDRC_CFG_WORKMODE_data_clkon_END     (2)
#define SOC_MDDRC_DMC_DDRC_CFG_WORKMODE_func_clkon_START   (3)
#define SOC_MDDRC_DMC_DDRC_CFG_WORKMODE_func_clkon_END     (3)
#define SOC_MDDRC_DMC_DDRC_CFG_WORKMODE_apre_en_START      (4)
#define SOC_MDDRC_DMC_DDRC_CFG_WORKMODE_apre_en_END        (4)
#define SOC_MDDRC_DMC_DDRC_CFG_WORKMODE_wrap_en_START      (8)
#define SOC_MDDRC_DMC_DDRC_CFG_WORKMODE_wrap_en_END        (8)
#define SOC_MDDRC_DMC_DDRC_CFG_WORKMODE_intlv_en_START     (9)
#define SOC_MDDRC_DMC_DDRC_CFG_WORKMODE_intlv_en_END       (9)
#define SOC_MDDRC_DMC_DDRC_CFG_WORKMODE_addr_mode_START    (10)
#define SOC_MDDRC_DMC_DDRC_CFG_WORKMODE_addr_mode_END      (11)
#define SOC_MDDRC_DMC_DDRC_CFG_WORKMODE_read_mode_START    (12)
#define SOC_MDDRC_DMC_DDRC_CFG_WORKMODE_read_mode_END      (12)
#define SOC_MDDRC_DMC_DDRC_CFG_WORKMODE_hdr_mode_START     (13)
#define SOC_MDDRC_DMC_DDRC_CFG_WORKMODE_hdr_mode_END       (13)
#define SOC_MDDRC_DMC_DDRC_CFG_WORKMODE_clk_ratio2_START   (15)
#define SOC_MDDRC_DMC_DDRC_CFG_WORKMODE_clk_ratio2_END     (15)
#define SOC_MDDRC_DMC_DDRC_CFG_WORKMODE_dual_ch_START      (16)
#define SOC_MDDRC_DMC_DDRC_CFG_WORKMODE_dual_ch_END        (16)
#define SOC_MDDRC_DMC_DDRC_CFG_WORKMODE_reorder_en_START   (20)
#define SOC_MDDRC_DMC_DDRC_CFG_WORKMODE_reorder_en_END     (20)
#define SOC_MDDRC_DMC_DDRC_CFG_WORKMODE_exclu_en_START     (24)
#define SOC_MDDRC_DMC_DDRC_CFG_WORKMODE_exclu_en_END       (24)
#define SOC_MDDRC_DMC_DDRC_CFG_WORKMODE_wr_rcv_mode_START  (28)
#define SOC_MDDRC_DMC_DDRC_CFG_WORKMODE_wr_rcv_mode_END    (28)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CFG_WORKMODE2_UNION
 �ṹ˵��  : DDRC_CFG_WORKMODE2 �Ĵ����ṹ���塣��ַƫ����:0x044����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_CFG_WORKMODE2��DDRC����ģʽ���üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  rank_disable  : 16; /* bit[0-15] : RANK��ֹ���أ�
                                                         1����ֹĳ��RANK��AUTO REFRESH/POWER DOWN/SELFREFRESH����
                                                         0����������ģʽ�� */
        unsigned int  openpage_time : 14; /* bit[16-29]: OPEN PAGE��ʱ���ƣ�
                                                         0x0~0x1����ֹOPEN PAGE���ܣ�
                                                         0x2~0x3fff��OPEN PAGE��ʱʱ�䡣
                                                         ע�⣺DDRC_CFG_WORKMODE.apre_enʹ��ʱ��OPEN PAGE����ʧЧ */
        unsigned int  reserved      : 2;  /* bit[30-31]: ������ */
    } reg;
} SOC_MDDRC_DMC_DDRC_CFG_WORKMODE2_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CFG_WORKMODE2_rank_disable_START   (0)
#define SOC_MDDRC_DMC_DDRC_CFG_WORKMODE2_rank_disable_END     (15)
#define SOC_MDDRC_DMC_DDRC_CFG_WORKMODE2_openpage_time_START  (16)
#define SOC_MDDRC_DMC_DDRC_CFG_WORKMODE2_openpage_time_END    (29)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CFG_WORKMODE3_UNION
 �ṹ˵��  : DDRC_CFG_WORKMODE3 �Ĵ����ṹ���塣��ַƫ����:0x048����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_CFG_WORKMODE3��DDRC����ģʽ���üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  tdbi     : 4;  /* bit[0-3]  : DBI����ʹ��ʱ�������Ķ����ݷ�����ʱ����DDRʱ�������á� */
        unsigned int  tpl      : 4;  /* bit[4-7]  : DDR4ģʽ�£�ʹ��CA PARITY�Ժ�������parity latency����DDRʱ�������á� */
        unsigned int  tcal     : 4;  /* bit[8-11] : DDR4ģʽ�£�ʹ��CAL����ʱ��������command address latency��������DDRʱ�������á� */
        unsigned int  twrcslat : 4;  /* bit[12-15]: DFI�ӿ�WDATA_CS��RDATA_CS�����wdata_en��ǰ����������DDRʱ�������á� */
        unsigned int  trdcslat : 4;  /* bit[16-19]: DFI�ӿ�WDATA_CS��RDATA_CS�����rdata_en��ǰ����������DDRʱ�������á� */
        unsigned int  reserved : 12; /* bit[20-31]: ������ */
    } reg;
} SOC_MDDRC_DMC_DDRC_CFG_WORKMODE3_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CFG_WORKMODE3_tdbi_START      (0)
#define SOC_MDDRC_DMC_DDRC_CFG_WORKMODE3_tdbi_END        (3)
#define SOC_MDDRC_DMC_DDRC_CFG_WORKMODE3_tpl_START       (4)
#define SOC_MDDRC_DMC_DDRC_CFG_WORKMODE3_tpl_END         (7)
#define SOC_MDDRC_DMC_DDRC_CFG_WORKMODE3_tcal_START      (8)
#define SOC_MDDRC_DMC_DDRC_CFG_WORKMODE3_tcal_END        (11)
#define SOC_MDDRC_DMC_DDRC_CFG_WORKMODE3_twrcslat_START  (12)
#define SOC_MDDRC_DMC_DDRC_CFG_WORKMODE3_twrcslat_END    (15)
#define SOC_MDDRC_DMC_DDRC_CFG_WORKMODE3_trdcslat_START  (16)
#define SOC_MDDRC_DMC_DDRC_CFG_WORKMODE3_trdcslat_END    (19)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CFG_DDRMODE_UNION
 �ṹ˵��  : DDRC_CFG_DDRMODE �Ĵ����ṹ���塣��ַƫ����:0x050����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_CFG_DDRMODE��DDR����ģʽ���üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  dram_type : 4;  /* bit[0-3]  : �ⲿ�洢�����͡�
                                                     000��������
                                                     001��LPDDR��
                                                     010��LPDDR2�� 
                                                     011��LPDDR3��
                                                     100��DDR��
                                                     101��DDR2��
                                                     110��DDR3��
                                                     111��DDR4��
                                                     ������������ */
        unsigned int  mem_width : 2;  /* bit[4-5]  : �洢��������λ��
                                                     00�� 8bit��
                                                     01�� 16bit��
                                                     10�� 32bit��
                                                     11�� 64bit�� */
        unsigned int  reserved_0: 1;  /* bit[6]    : ������ */
        unsigned int  brstlen2  : 1;  /* bit[7]    : ������Burst Length2���á�
                                                     1����չģʽ��
                                                     0������ģʽ��
                                                     ��brstlen��ͬ���á� */
        unsigned int  brstlen   : 1;  /* bit[8]    : ������Burst Length���á�
                                                     ��brstlen2����Ϊ0ʱ��
                                                     1��BL8��
                                                     0��BL4��
                                                     ��brstlen2����Ϊ1ʱ��
                                                     1��BL32��
                                                     0��BL16��
                                                     
                                                     DDR2������ΪBurst4��Burst8��
                                                     DDR3/4ֻ������ΪBurst8ģʽ��
                                                     LPDDR4������ΪBurst16��Burst32��
                                                     
                                                     ע�⣺�����burst len��dmc��phy��clk ratio�й�ϵ��������ֵӦ����BLx/n(����x��ʾ4/8/16/32�⼸��burst���ͣ�n��ʾdmc��phy��ʱ�ӹ�ϵΪ1:n��. ��clk ratio=1��2Ϊ�������Ҫ����ddr bl32,ֻ��Ҫ����brstlen=0;brstlen2=1���ɡ� */
        unsigned int  wr_2t_pre : 1;  /* bit[9]    : DDR4д����2T PREAMBLEʹ�ܡ�
                                                     1��ʹ�ܣ�
                                                     0����ֹ�� */
        unsigned int  rd_2t_pre : 1;  /* bit[10]   : DDR4������2T PREAMBLEʹ�ܡ�
                                                     1��ʹ�ܣ�
                                                     0����ֹ�� */
        unsigned int  cmd_2t_en : 1;  /* bit[11]   : DDR ������2T TIMING ģʽ��
                                                     1��ʹ�ܣ�
                                                     0����ֹ��
                                                     ע�⣬ֻ��DDR2/DDR3/DDR4��Ч������ģʽ�±�������Ϊ0������Ϊ1ʱ��������ʱ������1�ġ�
                                                     ��MDDRC��������ΪSDRģʽʱ������Ҫ��ϵͳ�в������ʵ�tdm_en�źţ�����˹��ܲ���ʹ�ã�����������ΪHDRģʽʱ������ʹ�á� */
        unsigned int  bc_en     : 1;  /* bit[12]   : DDR3 Burst Chopģʽʹ�ܡ�
                                                     1��ʹ�ܣ�
                                                     0����ֹ��
                                                     ע�⣺ֻ���DDR3��Ч�� */
        unsigned int  dbi_en    : 1;  /* bit[13]   : DDR4 DBI����ʹ�ܡ�
                                                     1��ʹ�ܣ�
                                                     0����ֹ�� */
        unsigned int  scramb_en : 1;  /* bit[14]   : ��ַ���ݼ���ʹ�ܡ�
                                                     1��ʹ�ܣ�
                                                     0����ֹ�� */
        unsigned int  crc_en    : 1;  /* bit[15]   : DDR4д����CRCʹ�ܡ�
                                                     1��ʹ�ܣ�
                                                     0����ֹ�� */
        unsigned int  zqc_en    : 1;  /* bit[16]   : DDR3 SDRAM ZQʹ�ܡ�
                                                     1��ʹ�ܣ�
                                                     0����ֹ��
                                                     ע�⣺����DDR4/DDR3/LPDDR3/LPDDR2 SDRAM��Ч��Ĭ������Ϊ0����ע�⣺���������˳���ˢ�µĹ����ж�̬���á� */
        unsigned int  odt_on    : 1;  /* bit[17]   : �����SDRAM��ODT�ź�Ϊ�̶�ֵ��
                                                     0����DDRC�Զ����ƣ�
                                                     1���̶����Ϊrank0��wodt���á� */
        unsigned int  rank_mode : 2;  /* bit[18-19]: RANK��֯ģʽ��
                                                     00����RANKģʽ��
                                                     01����RANKģʽ��
                                                     10��˫RANK��֯��
                                                     11����RANK��֯�� */
        unsigned int  rank      : 2;  /* bit[20-21]: ������Rank���á�
                                                     00��1��rank��
                                                     01��2��rank��
                                                     10��3��rank��
                                                     11��4��rank��
                                                     ע�⣺�����DDR��������4��RANKʱ���˿���λͬʱ����0-3,4-7,8-11,12-16����RANK�Ŀ��� */
        unsigned int  reserved_1: 2;  /* bit[22-23]: ������ */
        unsigned int  bank_xor  : 2;  /* bit[24-25]: BANK��ַ��ROW��ַ����ʹ�ܡ�
                                                     0����ֹ��
                                                     1��BANK��ƫ�Ƶ�ַ0���ţ�
                                                     2��BANK��ƫ�Ƶ�ַ1���ţ�
                                                     3��BANK��ƫ�Ƶ�ַ2���ţ� */
        unsigned int  reserved_2: 2;  /* bit[26-27]: ������ */
        unsigned int  bank_mode : 3;  /* bit[28-30]: BANK��֯ģʽ��
                                                     �洢����λ��Ϊ8bitʱ��
                                                     000:8byte��֯��
                                                     001:16byte��֯��
                                                     ��
                                                     111:1kbyte��֯��
                                                     �洢����λ��Ϊ16bitʱ��
                                                     000:16byte��֯��
                                                     001:32byte��֯��
                                                     ��
                                                     111:2kbyte��֯��
                                                     �洢����λ��Ϊ32bitʱ��
                                                     000:32byte��֯��
                                                     001:64byte��֯��
                                                     ��
                                                     111:4kbyte��֯��
                                                     �洢����λ��Ϊ64bitʱ��
                                                     000:64byte��֯��
                                                     001:128byte��֯��
                                                     ��
                                                     111:8kbyte��֯��
                                                     ע�⣺��AXI������Ϊ����ʱ��������������Ϊ000,��AXI����ģʽ��������AXI����Ϊ000ʱ����DMC����ģʽ������ */
        unsigned int  reserved_3: 1;  /* bit[31]   : ������ */
    } reg;
} SOC_MDDRC_DMC_DDRC_CFG_DDRMODE_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CFG_DDRMODE_dram_type_START  (0)
#define SOC_MDDRC_DMC_DDRC_CFG_DDRMODE_dram_type_END    (3)
#define SOC_MDDRC_DMC_DDRC_CFG_DDRMODE_mem_width_START  (4)
#define SOC_MDDRC_DMC_DDRC_CFG_DDRMODE_mem_width_END    (5)
#define SOC_MDDRC_DMC_DDRC_CFG_DDRMODE_brstlen2_START   (7)
#define SOC_MDDRC_DMC_DDRC_CFG_DDRMODE_brstlen2_END     (7)
#define SOC_MDDRC_DMC_DDRC_CFG_DDRMODE_brstlen_START    (8)
#define SOC_MDDRC_DMC_DDRC_CFG_DDRMODE_brstlen_END      (8)
#define SOC_MDDRC_DMC_DDRC_CFG_DDRMODE_wr_2t_pre_START  (9)
#define SOC_MDDRC_DMC_DDRC_CFG_DDRMODE_wr_2t_pre_END    (9)
#define SOC_MDDRC_DMC_DDRC_CFG_DDRMODE_rd_2t_pre_START  (10)
#define SOC_MDDRC_DMC_DDRC_CFG_DDRMODE_rd_2t_pre_END    (10)
#define SOC_MDDRC_DMC_DDRC_CFG_DDRMODE_cmd_2t_en_START  (11)
#define SOC_MDDRC_DMC_DDRC_CFG_DDRMODE_cmd_2t_en_END    (11)
#define SOC_MDDRC_DMC_DDRC_CFG_DDRMODE_bc_en_START      (12)
#define SOC_MDDRC_DMC_DDRC_CFG_DDRMODE_bc_en_END        (12)
#define SOC_MDDRC_DMC_DDRC_CFG_DDRMODE_dbi_en_START     (13)
#define SOC_MDDRC_DMC_DDRC_CFG_DDRMODE_dbi_en_END       (13)
#define SOC_MDDRC_DMC_DDRC_CFG_DDRMODE_scramb_en_START  (14)
#define SOC_MDDRC_DMC_DDRC_CFG_DDRMODE_scramb_en_END    (14)
#define SOC_MDDRC_DMC_DDRC_CFG_DDRMODE_crc_en_START     (15)
#define SOC_MDDRC_DMC_DDRC_CFG_DDRMODE_crc_en_END       (15)
#define SOC_MDDRC_DMC_DDRC_CFG_DDRMODE_zqc_en_START     (16)
#define SOC_MDDRC_DMC_DDRC_CFG_DDRMODE_zqc_en_END       (16)
#define SOC_MDDRC_DMC_DDRC_CFG_DDRMODE_odt_on_START     (17)
#define SOC_MDDRC_DMC_DDRC_CFG_DDRMODE_odt_on_END       (17)
#define SOC_MDDRC_DMC_DDRC_CFG_DDRMODE_rank_mode_START  (18)
#define SOC_MDDRC_DMC_DDRC_CFG_DDRMODE_rank_mode_END    (19)
#define SOC_MDDRC_DMC_DDRC_CFG_DDRMODE_rank_START       (20)
#define SOC_MDDRC_DMC_DDRC_CFG_DDRMODE_rank_END         (21)
#define SOC_MDDRC_DMC_DDRC_CFG_DDRMODE_bank_xor_START   (24)
#define SOC_MDDRC_DMC_DDRC_CFG_DDRMODE_bank_xor_END     (25)
#define SOC_MDDRC_DMC_DDRC_CFG_DDRMODE_bank_mode_START  (28)
#define SOC_MDDRC_DMC_DDRC_CFG_DDRMODE_bank_mode_END    (30)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CFG_DIMM_UNION
 �ṹ˵��  : DDRC_CFG_DIMM �Ĵ����ṹ���塣��ַƫ����:0x054����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_CFG_DIMM�ǶԽ�DIMMʱ����ģʽ���üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  addr_mirror   : 1;  /* bit[0]    : DDR3 DIMM�ĵ�ַ����ʹ�ܡ�
                                                         1��ʹ�ܣ�
                                                         0����ֹ�� */
        unsigned int  reserved_0    : 3;  /* bit[1-3]  : ������ */
        unsigned int  parity_en     : 1;  /* bit[4]    : DIMM��żУ��ʹ�ܡ�
                                                         1��ʹ�ܣ�
                                                         0����ֹ�� */
        unsigned int  reserved_1    : 3;  /* bit[5-7]  : ������ */
        unsigned int  cke_share_map : 2;  /* bit[8-9]  : DIMM��RANK����ģʽ��
                                                         11:RANK0,3����1��CKE�ܽţ�
                                                         RANK1,2����1��CKE�ܽţ�
                                                         10��RANK0,2����1��CKE�ܽţ�RANK1,3����1��CKE�ܽţ�
                                                         01��RANK0,1����1��CKE�ܽţ�RANK2,3����1��CKE�ܽţ�
                                                         00��ÿ��RANK����1��CKE�ܽţ�
                                                         ���������� */
        unsigned int  reserved_2    : 2;  /* bit[10-11]: ������ */
        unsigned int  par_dly       : 1;  /* bit[12]   : ����DIMM��Ҫ�������Ƿ�Ҫ��һ��cycel.
                                                         0:��ʾparity_in�źŲ���ʱ��
                                                         1:��ʾparity_in�ź���ʱһ��cycle */
        unsigned int  reserved_3    : 19; /* bit[13-31]: ������ */
    } reg;
} SOC_MDDRC_DMC_DDRC_CFG_DIMM_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CFG_DIMM_addr_mirror_START    (0)
#define SOC_MDDRC_DMC_DDRC_CFG_DIMM_addr_mirror_END      (0)
#define SOC_MDDRC_DMC_DDRC_CFG_DIMM_parity_en_START      (4)
#define SOC_MDDRC_DMC_DDRC_CFG_DIMM_parity_en_END        (4)
#define SOC_MDDRC_DMC_DDRC_CFG_DIMM_cke_share_map_START  (8)
#define SOC_MDDRC_DMC_DDRC_CFG_DIMM_cke_share_map_END    (9)
#define SOC_MDDRC_DMC_DDRC_CFG_DIMM_par_dly_START        (12)
#define SOC_MDDRC_DMC_DDRC_CFG_DIMM_par_dly_END          (12)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CFG_SCRAMB_UNION
 �ṹ˵��  : DDRC_CFG_SCRAMB �Ĵ����ṹ���塣��ַƫ����:0x058����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_CFG_SCRAMB��DDR���ݼ������üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  scramb_seed_sort : 3;  /* bit[0-2]  : ���ڼ��ŵĵ�ַ���з�ʽ��
                                                            000��CS_BA_COL���У�
                                                            001��CS_COL_BA���У�
                                                            010��COL_CS_BA���У�
                                                            011��COL_BA_CS���У�
                                                            100��BA_CS_COL���У�
                                                            101��BA_COL_CS���У�
                                                            ������������ */
        unsigned int  reserved_0       : 1;  /* bit[3]    : ������ */
        unsigned int  scramb_seed_type : 1;  /* bit[4]    : ���ڼ��ŵĵ�ַģʽ��
                                                            0����Ƭѡ��BA���ţ�
                                                            1����Ƭѡ��BA���͵�λ�е�ַ���š� */
        unsigned int  reserved_1       : 11; /* bit[5-15] : ������ */
        unsigned int  wr_dbi_en        : 1;  /* bit[16]   : д����DBIʹ�ܡ�
                                                            0����ֹ��
                                                            1��ʹ�ܡ� */
        unsigned int  rd_dbi_en        : 1;  /* bit[17]   : ������DBIʹ�ܡ�
                                                            0����ֹ��
                                                            1��ʹ�ܡ� */
        unsigned int  dbi_low_act      : 1;  /* bit[18]   : DBI��Ч��ƽ��
                                                            0������Ч��
                                                            1������Ч�� */
        unsigned int  reserved_2       : 13; /* bit[19-31]: ������ */
    } reg;
} SOC_MDDRC_DMC_DDRC_CFG_SCRAMB_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CFG_SCRAMB_scramb_seed_sort_START  (0)
#define SOC_MDDRC_DMC_DDRC_CFG_SCRAMB_scramb_seed_sort_END    (2)
#define SOC_MDDRC_DMC_DDRC_CFG_SCRAMB_scramb_seed_type_START  (4)
#define SOC_MDDRC_DMC_DDRC_CFG_SCRAMB_scramb_seed_type_END    (4)
#define SOC_MDDRC_DMC_DDRC_CFG_SCRAMB_wr_dbi_en_START         (16)
#define SOC_MDDRC_DMC_DDRC_CFG_SCRAMB_wr_dbi_en_END           (16)
#define SOC_MDDRC_DMC_DDRC_CFG_SCRAMB_rd_dbi_en_START         (17)
#define SOC_MDDRC_DMC_DDRC_CFG_SCRAMB_rd_dbi_en_END           (17)
#define SOC_MDDRC_DMC_DDRC_CFG_SCRAMB_dbi_low_act_START       (18)
#define SOC_MDDRC_DMC_DDRC_CFG_SCRAMB_dbi_low_act_END         (18)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CFG_RNKVOL_UNION
 �ṹ˵��  : DDRC_CFG_RNKVOL �Ĵ����ṹ���塣��ַƫ����:0x060+0x4*(rnks)����ֵ:0x00000022�����:32
 �Ĵ���˵��: DDRC_CFG_RNKVOL��DDRC���Ƶ�ÿ��RANK��DDR�������üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mem_col       : 3;  /* bit[0-2]  : ��ƬSDRAM�е�ַλ�����á�
                                                         000��8 bit��
                                                         001��9 bit��
                                                         010��10 bit��
                                                         011��11 bit��
                                                         100��12 bit��
                                                         ����������
                                                         ע�⣺DDRC��֧��col��ַС��8����������32bitλ��������64Mbit��LPDDR2�������� */
        unsigned int  reserved_0    : 1;  /* bit[3]    : ������ */
        unsigned int  mem_row       : 3;  /* bit[4-6]  : ��ƬSDRAM�е�ַλ�����á�
                                                         000��11 bit��
                                                         001��12 bit��
                                                         010��13 bit��
                                                         011��14 bit��
                                                         100��15 bit��
                                                         101��16 bit��
                                                         ���������� */
        unsigned int  reserved_1    : 1;  /* bit[7]    : ������ */
        unsigned int  mem_bank      : 2;  /* bit[8-9]  : ��ƬSDRAM Bank����
                                                         0��4 Bank��
                                                         1��8 Bank��
                                                         2��16 BANK��
                                                         3�������� */
        unsigned int  mem_bankgroup : 2;  /* bit[10-11]: ��ƬSDRAM Bank Group����
                                                         0��1��Bank Group��
                                                         1��2��Bank Group��
                                                         2��4��Bank Group��
                                                         3��������
                                                         ע�⣺ֻ����DDR4ģʽ����Ч�� */
        unsigned int  mem_map       : 2;  /* bit[12-13]: SDRAM ��ַ����ģʽ��
                                                         00��{Rank,Row,Ba,Col,DW}= AXI_Address��
                                                         01��{Rank,Ba,Row,Col,DW}= AXI_Address��
                                                         10��{Rank,Row,Ba,Col,cs,Col,DW}= AXI_Address��
                                                         11��{Rank,Ba,Row,Col,cs,Col,DW}= AXI_Address��
                                                         �ò�������Ҫ��DDRC_CONFIG1[dual_ch]��Чʱ����������Ϊ'b10����'b11��
                                                         ���ж��rankʱ������rank����ʹ����ͬ�����á� */
        unsigned int  reserved_2    : 2;  /* bit[14-15]: ������ */
        unsigned int  mem_x4        : 1;  /* bit[16]   : �������Ϊ4bit����ƴ��ģʽ��
                                                         0���ⲿ��8/16/32bit����ƴ����ɣ�
                                                         1���ⲿ��4bit����ƴ����ɡ� */
        unsigned int  reserved_3    : 15; /* bit[17-31]: ������ */
    } reg;
} SOC_MDDRC_DMC_DDRC_CFG_RNKVOL_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CFG_RNKVOL_mem_col_START        (0)
#define SOC_MDDRC_DMC_DDRC_CFG_RNKVOL_mem_col_END          (2)
#define SOC_MDDRC_DMC_DDRC_CFG_RNKVOL_mem_row_START        (4)
#define SOC_MDDRC_DMC_DDRC_CFG_RNKVOL_mem_row_END          (6)
#define SOC_MDDRC_DMC_DDRC_CFG_RNKVOL_mem_bank_START       (8)
#define SOC_MDDRC_DMC_DDRC_CFG_RNKVOL_mem_bank_END         (9)
#define SOC_MDDRC_DMC_DDRC_CFG_RNKVOL_mem_bankgroup_START  (10)
#define SOC_MDDRC_DMC_DDRC_CFG_RNKVOL_mem_bankgroup_END    (11)
#define SOC_MDDRC_DMC_DDRC_CFG_RNKVOL_mem_map_START        (12)
#define SOC_MDDRC_DMC_DDRC_CFG_RNKVOL_mem_map_END          (13)
#define SOC_MDDRC_DMC_DDRC_CFG_RNKVOL_mem_x4_START         (16)
#define SOC_MDDRC_DMC_DDRC_CFG_RNKVOL_mem_x4_END           (16)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CFG_ODT_UNION
 �ṹ˵��  : DDRC_CFG_ODT �Ĵ����ṹ���塣��ַƫ����:0x0A0+0x4*(rnks)����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_CFG_ODT��DDR��ODT�������üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  wodt : 16; /* bit[0-15] : ��ǰRANK����д����ʱ������RANK��ODT���á�
                                                1��ʹ��дODT��
                                                0����ֹдODT�� */
        unsigned int  rodt : 16; /* bit[16-31]: ��ǰRANK���Ͷ�����ʱ������RANK��ODT���á�
                                                1��ʹ�ܶ�ODT��
                                                0����ֹ��ODT�� */
    } reg;
} SOC_MDDRC_DMC_DDRC_CFG_ODT_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CFG_ODT_wodt_START  (0)
#define SOC_MDDRC_DMC_DDRC_CFG_ODT_wodt_END    (15)
#define SOC_MDDRC_DMC_DDRC_CFG_ODT_rodt_START  (16)
#define SOC_MDDRC_DMC_DDRC_CFG_ODT_rodt_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CFG_EMRS01_UNION
 �ṹ˵��  : DDRC_CFG_EMRS01 �Ĵ����ṹ���塣��ַƫ����:0x0F0����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_CFG_EMRS01��DDR��ģʽ�Ĵ���0��ģʽ�Ĵ���1�����üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mrs   : 16; /* bit[0-15] : DDRn SDRAMģʽ�Ĵ����� */
        unsigned int  emrs1 : 16; /* bit[16-31]: DDRn SDRAM��չģʽ�Ĵ���1�� */
    } reg;
} SOC_MDDRC_DMC_DDRC_CFG_EMRS01_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CFG_EMRS01_mrs_START    (0)
#define SOC_MDDRC_DMC_DDRC_CFG_EMRS01_mrs_END      (15)
#define SOC_MDDRC_DMC_DDRC_CFG_EMRS01_emrs1_START  (16)
#define SOC_MDDRC_DMC_DDRC_CFG_EMRS01_emrs1_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CFG_EMRS23_UNION
 �ṹ˵��  : DDRC_CFG_EMRS23 �Ĵ����ṹ���塣��ַƫ����:0x0F4����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_CFG_EMRS23��DDR��ģʽ�Ĵ���2��ģʽ�Ĵ���3�����üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  emrs2 : 16; /* bit[0-15] : DDRn SDRAM��չģʽ�Ĵ���2�� */
        unsigned int  emrs3 : 16; /* bit[16-31]: DDRn SDRAM��չģʽ�Ĵ���3�� */
    } reg;
} SOC_MDDRC_DMC_DDRC_CFG_EMRS23_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CFG_EMRS23_emrs2_START  (0)
#define SOC_MDDRC_DMC_DDRC_CFG_EMRS23_emrs2_END    (15)
#define SOC_MDDRC_DMC_DDRC_CFG_EMRS23_emrs3_START  (16)
#define SOC_MDDRC_DMC_DDRC_CFG_EMRS23_emrs3_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CFG_EMRS45_UNION
 �ṹ˵��  : DDRC_CFG_EMRS45 �Ĵ����ṹ���塣��ַƫ����:0x0F8����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_CFG_EMRS23��DDR��ģʽ�Ĵ���2��ģʽ�Ĵ���3�����üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  emrs4 : 16; /* bit[0-15] : DDRn SDRAM��չģʽ�Ĵ���4�� */
        unsigned int  emrs5 : 16; /* bit[16-31]: DDRn SDRAM��չģʽ�Ĵ���5�� */
    } reg;
} SOC_MDDRC_DMC_DDRC_CFG_EMRS45_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CFG_EMRS45_emrs4_START  (0)
#define SOC_MDDRC_DMC_DDRC_CFG_EMRS45_emrs4_END    (15)
#define SOC_MDDRC_DMC_DDRC_CFG_EMRS45_emrs5_START  (16)
#define SOC_MDDRC_DMC_DDRC_CFG_EMRS45_emrs5_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CFG_EMRS67_UNION
 �ṹ˵��  : DDRC_CFG_EMRS67 �Ĵ����ṹ���塣��ַƫ����:0x0FC����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_CFG_EMRS23��DDR��ģʽ�Ĵ���2��ģʽ�Ĵ���3�����üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  emrs6 : 16; /* bit[0-15] : DDRn SDRAM��չģʽ�Ĵ���6�� */
        unsigned int  emrs7 : 16; /* bit[16-31]: DDRn SDRAM��չģʽ�Ĵ���7�� */
    } reg;
} SOC_MDDRC_DMC_DDRC_CFG_EMRS67_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CFG_EMRS67_emrs6_START  (0)
#define SOC_MDDRC_DMC_DDRC_CFG_EMRS67_emrs6_END    (15)
#define SOC_MDDRC_DMC_DDRC_CFG_EMRS67_emrs7_START  (16)
#define SOC_MDDRC_DMC_DDRC_CFG_EMRS67_emrs7_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CFG_TIMING0_UNION
 �ṹ˵��  : DDRC_CFG_TIMING0 �Ĵ����ṹ���塣��ַƫ����:0x100����ֵ:0xFFFFFF3F�����:32
 �Ĵ���˵��: DDRC_CFG_TIMING0��DDRC��ʱ������Ĵ���0
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  tras     : 6;  /* bit[0-5]  : ͬBANK�ļ���������ر����ACT to PRE���ĵȴ����ڡ�
                                                    0x00��0x01��1��ʱ�����ڣ�
                                                    0x02��0x0F��n��ʱ�����ڡ� */
        unsigned int  reserved : 2;  /* bit[6-7]  : ������ */
        unsigned int  trc      : 6;  /* bit[8-13] : ͬBANK�ļ�������������active a bank to active a bank���ĵȴ����ڡ�
                                                    0x00��0x01��1��ʱ�����ڣ�
                                                    0x02��0x3F��n��ʱ�����ڡ� */
        unsigned int  trcd     : 5;  /* bit[14-18]: ͬBANK�������д��ACT to READ or WRITE������ĵȴ����ڡ�
                                                    0x0��0x3��3ʱ�����ڣ�
                                                    0x4��0xF��nʱ�����ڡ� */
        unsigned int  trp      : 5;  /* bit[19-23]: �رգ�PRE period������ĵȴ����ڡ�
                                                    0x0��0x1��1��ʱ�����ڣ�
                                                    0x2��0xF��n��ʱ�����ڡ� */
        unsigned int  trrd     : 4;  /* bit[24-27]: ��BANK A ����BANK B�ģ�ACT bank a to ACT bank b���ȴ����ڡ�
                                                    0x0��0x1��1��ʱ�����ڣ�
                                                    0x2��0xF��n��ʱ�����ڡ� */
        unsigned int  tmrd     : 4;  /* bit[28-31]: ģʽ�Ĵ������أ�LMR������ĵȴ�����(��DDR2��LPDDR2ʱ������ֵΪtMOD��tMRD�����ֵ����DDR3ʱ����ΪtMRD����
                                                    0x0��0x1��1��ʱ�����ڣ�
                                                    0x2��0xF��n��ʱ�����ڡ� */
    } reg;
} SOC_MDDRC_DMC_DDRC_CFG_TIMING0_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING0_tras_START      (0)
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING0_tras_END        (5)
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING0_trc_START       (8)
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING0_trc_END         (13)
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING0_trcd_START      (14)
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING0_trcd_END        (18)
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING0_trp_START       (19)
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING0_trp_END         (23)
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING0_trrd_START      (24)
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING0_trrd_END        (27)
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING0_tmrd_START      (28)
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING0_tmrd_END        (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CFG_TIMING1_UNION
 �ṹ˵��  : DDRC_CFG_TIMING1 �Ĵ����ṹ���塣��ַƫ����:0x104����ֵ:0xFF2215FF�����:32
 �Ĵ���˵��: DDRC_CFG_TIMING1��DDRC��ʱ������Ĵ���1
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  trfc     : 9;  /* bit[0-8]  : �Զ�ˢ���������ں��Զ�ˢ�µ����AREF period or AREF to ACT������ĵȴ����ڡ��üĴ���ѡ������max{trfc,tzqcs}�Ĵ�ֵ��
                                                    0x00��������
                                                    0x01��0x1FF��n��ʱ�����ڡ� */
        unsigned int  reserved : 1;  /* bit[9]    :  */
        unsigned int  tcl      : 5;  /* bit[10-14]: DDR�Ķ���������ݵ��ӳ٣�CAS Latency����
                                                    0x0��0x1�� 1��ʱ�����ڣ�
                                                    0x2��0xF�� n��ʱ�����ڡ�
                                                    �����RDIMMģʽCLӦ������Ϊ����CL+1�� */
        unsigned int  twl      : 5;  /* bit[15-19]: д���д���ݵĵȴ����ڡ�
                                                    0x0��0x1��1��ʱ�����ڣ�
                                                    0x2��0xF��n��ʱ�����ڡ�
                                                    �磺0x3��3��ʱ�����ڡ�
                                                    ע�⣺DDR2ģʽ��twl����Ϊtcl-1��twl����ʱӦ����twl �Ctaond >��1��
                                                    �����RDIMMģʽWLӦ����Ϊ����WL+1��
                                                    ע�⣺��LPDDR2/LPDDR3ģʽ�£�����Э�鶨���WL��ʵ�ʵ���ʱС1cycle��������Ҫ����Ϊģʽ�Ĵ�����ֵ+1�� */
        unsigned int  trtw     : 4;  /* bit[20-23]: ���һ�������ݵ���һ��д�����ӳ١�
                                                    0x0��0x1��1��ʱ�����ڣ�
                                                    0x2��0xF��n+1��ʱ�����ڡ�
                                                    ע�⣺��DDR2/DDR3ģʽ�£�trtw������Ҫ���ǵ��塢��װ��IO����ʱ����LPDDR/LPDDR2/LPDDR3ģʽ�£����˵��塢��װ��IO����ʱ������Ҫ����tdqsckmax�� */
        unsigned int  tsre     : 8;  /* bit[24-31]: �˳���ˢ�£�Self-Refresh����������ĵȴ����ڡ�
                                                    0x0�� ������
                                                    0x01��0xFF��n��4��ʱ�����ڡ�
                                                    DDR3 SDRAMʱ����ֵ����tXSDLL��tXS�����ֵ�� */
    } reg;
} SOC_MDDRC_DMC_DDRC_CFG_TIMING1_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING1_trfc_START      (0)
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING1_trfc_END        (8)
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING1_tcl_START       (10)
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING1_tcl_END         (14)
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING1_twl_START       (15)
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING1_twl_END         (19)
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING1_trtw_START      (20)
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING1_trtw_END        (23)
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING1_tsre_START      (24)
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING1_tsre_END        (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CFG_TIMING2_UNION
 �ṹ˵��  : DDRC_CFG_TIMING2 �Ĵ����ṹ���塣��ַƫ����:0x108����ֵ:0xF303F000�����:32
 �Ĵ���˵��: DDRC_CFG_TIMING2��DDRC��ʱ������Ĵ���2
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  taref    : 11; /* bit[0-10] : �Զ�ˢ�����ڡ�
                                                    0x000���Զ�ˢ�½�ֹ��
                                                    0x001��0x7FF��SDRAMˢ������ʱ��Ϊ16��nʱ�����ڡ�
                                                    ��0x008��128��ʱ�����ڣ�16��8����
                                                    ���ü��ʱ��ΪtREFI = 7800/16/tclk��TclkΪDMC��ʱ�ӵ��������ڣ�ע�⣬ֻ����clk ratioΪ1��1ʱ������sdram��ʱ��������ͬ���� */
        unsigned int  reserved_0: 1;  /* bit[11]   : ������ */
        unsigned int  tfaw     : 6;  /* bit[12-17]: ����4�������������ڡ�
                                                    0x00��0x3F��n��ʱ�����ڣ�
                                                    �磺0x14��20��ʱ�����ڡ� */
        unsigned int  reserved_1: 6;  /* bit[18-23]: ������ */
        unsigned int  twtr     : 4;  /* bit[24-27]: д�������һ��д���ݵ������write to read���ĵȴ����ڡ�
                                                    0x0��0x1��1��ʱ�����ڣ�
                                                    0x2��0xf��n��ʱ�����ڡ�
                                                    ��0x3��3��ʱ�����ڡ� */
        unsigned int  tcke     : 4;  /* bit[28-31]: �͹���״̬ά�ֵ����ʱ�䡣
                                                    0x0��������
                                                    0x1��0xF��n��ʱ�����ڡ�
                                                    ��ֵ��Ҫ����tCKESR, tCKSRE, tCKSRX, tCKE��tCPDED����ֵ�е����ֵ�� */
    } reg;
} SOC_MDDRC_DMC_DDRC_CFG_TIMING2_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING2_taref_START     (0)
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING2_taref_END       (10)
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING2_tfaw_START      (12)
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING2_tfaw_END        (17)
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING2_twtr_START      (24)
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING2_twtr_END        (27)
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING2_tcke_START      (28)
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING2_tcke_END        (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CFG_TIMING3_UNION
 �ṹ˵��  : DDRC_CFG_TIMING3 �Ĵ����ṹ���塣��ַƫ����:0x10C����ֵ:0xFFFFE0F2�����:32
 �Ĵ���˵��: DDRC_CFG_TIMING3��DDRC��ʱ������Ĵ���3
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  trtp    : 4;  /* bit[0-3]  : ������ر�����ĵȴ��ӳ١�
                                                   000��010��2��ʱ�����ڣ�
                                                   011��111��n��ʱ�����ڡ�
                                                   Trtp�ļ��㹫ʽ��AL+BL/2+Max(trtp,2)-2�� ע�⣺DDR2��Ҫ����:Trtp>=2; DDR3��Ҫ����Trtp>=4 */
        unsigned int  txard   : 4;  /* bit[4-7]  : �˳�DDR�͹���״̬�ȴ����ڡ�
                                                   0x0��0xF��n��ʱ�����ڣ�n����ʮ��������
                                                   �磺0x7��Ϊ7��ʱ�����ڡ�
                                                   ȡ{tXP,tXARD,tXARDS,tXS}�е����ֵ��
                                                   ��DDR3ģʽ�£�ȡ��tXP��tCKE�����ֵ���� */
        unsigned int  taond   : 5;  /* bit[8-12] : ODT��On-die termination���򿪺͹ر����ڡ�
                                                   DDR2ģʽ�£�taond/taofd����
                                                   0x0��2/2.5��
                                                   0x1��3/3.5��
                                                   0x2��4/4.5��
                                                   0x3��5/5.5��
                                                   ������ ������
                                                   ��DDR3ģʽ�£���ֵ����ΪtWL-1�������1��2ģʽ������Ҫ���tWL-2������̨�е�phy�Ѿ�����������Ȼ����tWL-1�����á�
                                                   ��LPDDR3ģʽ�£���ֵ����ΪtODTon(max)/tCK�� */
        unsigned int  tzqinit : 9;  /* bit[13-21]: ZQ��ʼ���ӳ����ڡ�
                                                   0x0��0x1ff��nx4��ʱ�����ڡ�
                                                   ��ֵ����tZQINIT��tDLLK�����ֵ�� */
        unsigned int  tzq_prd : 10; /* bit[22-31]: ZQCS�������ڡ�
                                                   0x000��ZQCS�����ֹ��
                                                   0x001��0x3FF�� n��128��AREF���ڡ�
                                                   ZQCS��������ʱ��Ϊn��128��tarefʱ�����ڡ� */
    } reg;
} SOC_MDDRC_DMC_DDRC_CFG_TIMING3_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING3_trtp_START     (0)
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING3_trtp_END       (3)
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING3_txard_START    (4)
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING3_txard_END      (7)
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING3_taond_START    (8)
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING3_taond_END      (12)
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING3_tzqinit_START  (13)
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING3_tzqinit_END    (21)
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING3_tzq_prd_START  (22)
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING3_tzq_prd_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CFG_TIMING4_UNION
 �ṹ˵��  : DDRC_CFG_TIMING4 �Ĵ����ṹ���塣��ַƫ����:0x110����ֵ:0x01FF2000�����:32
 �Ĵ���˵��: DDRC_CFG_TIMING4��DDRC��ʱ������Ĵ���4
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  twlmrd    : 6;  /* bit[0-5]  : DDR3 WriteLevel�׸�DQS��Ч�ӳٲ�����
                                                     0x0��0x1��1��ʱ�����ڣ�
                                                     0x2��0x3F�� n��ʱ�����ڡ� */
        unsigned int  reserved_0: 2;  /* bit[6-7]  : ������ */
        unsigned int  twldqsen  : 6;  /* bit[8-13] : DDR3 WriteLevel�����ӳٲ�����
                                                     0x0��0x1��1��ʱ�����ڣ�
                                                     0x2��0x3F�� n��ʱ�����ڡ� */
        unsigned int  reserved_1: 2;  /* bit[14-15]: ������ */
        unsigned int  twlo      : 4;  /* bit[16-19]: DDR3 WriteLevel״̬�ӳٲ�����
                                                     0x0��0x1��1��ʱ�����ڣ�
                                                     0x2��0xF��n��ʱ�����ڡ�
                                                     �ò���Ϊtwlo+twloe֮�͡� */
        unsigned int  tmod      : 5;  /* bit[20-24]: MRS���ODT��ZQCL��Ч����ʱ������
                                                     0x0~0x1:1��ʱ�����ڣ�
                                                     02~0x1F:n��ʱ�����ڡ� */
        unsigned int  reserved_2: 3;  /* bit[25-27]: ������ */
        unsigned int  trodt_ext : 3;  /* bit[28-30]: LPDDR3ģʽ��trodt_ext����twodt������ͬ��
                                                     ��DDR4���ԣ������ڶ�����ʱ��ʹ������rank��odt�������ڴ�crc_enʱ��odt�Ĵ򿪻���ǰһ�ģ������ڶ�odt��˵����û����Ϊcrc��ʹ�ܴ򿪶��Զ���չ������Ҫ�ڸüĴ���������չ�� */
        unsigned int  reserved_3: 1;  /* bit[31]   : ������ */
    } reg;
} SOC_MDDRC_DMC_DDRC_CFG_TIMING4_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING4_twlmrd_START     (0)
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING4_twlmrd_END       (5)
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING4_twldqsen_START   (8)
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING4_twldqsen_END     (13)
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING4_twlo_START       (16)
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING4_twlo_END         (19)
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING4_tmod_START       (20)
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING4_tmod_END         (24)
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING4_trodt_ext_START  (28)
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING4_trodt_ext_END    (30)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CFG_TIMING5_UNION
 �ṹ˵��  : DDRC_CFG_TIMING5 �Ĵ����ṹ���塣��ַƫ����:0x114����ֵ:0x1113FF1F�����:32
 �Ĵ���˵��: DDRC_CFG_TIMING5��DDRC��ʱ������Ĵ���5
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  twr       : 5;  /* bit[0-4]  : д�ָ���write recovery���ȴ����ڡ�
                                                     0x0��0x1��1��ʱ�����ڣ�
                                                     0x2��0x1f��n��ʱ�����ڡ�
                                                     ע�⣺����DFS�������£�tWR������Ҫ����DFS��оƬ����ʹ�����Ƶ�����á����Ҳ�����DDR��Ƶ�ʱ仯�޸�tWR�����á� */
        unsigned int  reserved_0: 3;  /* bit[5-7]  : ������ */
        unsigned int  tzqcs     : 8;  /* bit[8-15] : ZQCSУ׼�ӳ����ڡ�
                                                     0x0��0xff��nx2��ʱ�����ڡ�
                                                     ����dmc����ƣ���ֵ��ҪԼ��Ϊ���ڵ���10 */
        unsigned int  trnk2rnk  : 4;  /* bit[16-19]: RANK��RANK�����ʱ������
                                                     0000~1111:n��ʱ�����ڡ�
                                                     ע�⣺��DDR2/DDR3ģʽ�£�trtw������Ҫ���ǵ��塢��װ��IO����ʱ����LPDDR/LPDDR2/LPDDR3ģʽ�£����˵��塢��װ��IO����ʱ������Ҫ����tdqsckmax�� */
        unsigned int  tdqsck    : 3;  /* bit[20-22]: DQS�����CK���������ʱ�䣬�����LPDDR2/3����ֵ���ڼ���Read latency����LPDDR2/3ģʽ�»��Զ����ӵ�RL�ϡ� */
        unsigned int  reserved_1: 1;  /* bit[23]   : ������ */
        unsigned int  tdqsckmax : 3;  /* bit[24-26]: DQS�����CK������������ʱ�䣬�����LPDDR2/3���ò�����LPDDR2/3ģʽ�»��Զ����ӵ����ж�����������Ĳ����ϡ� */
        unsigned int  reserved_2: 1;  /* bit[27]   :  */
        unsigned int  twodt_ext : 3;  /* bit[28-30]: ����LPDDR3��Ч�����첽ODT����Ҫչ��ODT�ŹܵĴ򿪴��ڡ�չ��ĳ���Ϊ(tODTon/off(max)-tODTon/off(min))/tCK��
                                                     0x0��0x1��1��ʱ�����ڣ�
                                                     0x2��0x7��n��ʱ�����ڡ� */
        unsigned int  reserved_3: 1;  /* bit[31]   : ������ */
    } reg;
} SOC_MDDRC_DMC_DDRC_CFG_TIMING5_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING5_twr_START        (0)
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING5_twr_END          (4)
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING5_tzqcs_START      (8)
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING5_tzqcs_END        (15)
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING5_trnk2rnk_START   (16)
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING5_trnk2rnk_END     (19)
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING5_tdqsck_START     (20)
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING5_tdqsck_END       (22)
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING5_tdqsckmax_START  (24)
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING5_tdqsckmax_END    (26)
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING5_twodt_ext_START  (28)
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING5_twodt_ext_END    (30)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CFG_TIMING6_UNION
 �ṹ˵��  : DDRC_CFG_TIMING6 �Ĵ����ṹ���塣��ַƫ����:0x118����ֵ:0x000000FF�����:32
 �Ĵ���˵��: DDRC_CFG_TIMING6��DDRC��ʱ������Ĵ���6
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  tcksre   : 4;  /* bit[0-3]  : ddr3��ddr4��tCKSRE�������ڽ�����ˢ�º�ʱ����Ҫ���ֵ�������
                                                    0x0��0x1��1��ʱ�����ڣ�
                                                    0x2��0xF�� n��ʱ�����ڡ� */
        unsigned int  tcksrx   : 4;  /* bit[4-7]  : ddr3��ddr4��tCKSRX���������˳���ˢ��֮ǰʱ����Ҫ��ǰ����Ч������
                                                    0x0��0x1��1��ʱ�����ڣ�
                                                    0x2��0xF�� n��ʱ�����ڡ� */
        unsigned int  todt_sft : 4;  /* bit[8-11] : LPDDR3ģʽODT��ʱ���ƣ���Ҫ���ڲ���POP LPDDR3��ODT IO��DDRPHY����ʱ��
                                                    0x0~0xF: n��ʱ�����ڡ�
                                                    ODT����ʱ=tWL-taond+todt_sft��ע��ODT�������ʱ���ܳ���0xF */
        unsigned int  tccd_l   : 4;  /* bit[12-15]: Bank Group֮�ڵ�tccd�ȴ����ڡ�
                                                    0x0~0x1��1��ʱ������
                                                    0x2~0xf��n��ʱ�����ڡ� */
        unsigned int  twtr_l   : 4;  /* bit[16-19]: Bank Group֮�ڵ�twtr�ȴ����ڡ�
                                                    0x0~0x1��1��ʱ������
                                                    0x2~0xf��n��ʱ�����ڡ� */
        unsigned int  trrd_l   : 4;  /* bit[20-23]: Bank Group֮�ڵ�trrd�ȴ����ڡ�
                                                    0x0~0x1��1��ʱ������
                                                    0x2~0xf��n��ʱ�����ڡ� */
        unsigned int  tccd_nsr : 4;  /* bit[24-27]: ��ʹ��2T preamble����2T postamble������£������������Ķ�����֮�����С�����
                                                    0x0~0x1:1��ʱ�����ڣ�
                                                    0x2~0xf:n��ʱ�����ڡ� */
        unsigned int  tccd_nsw : 4;  /* bit[28-31]: ��ʹ��2T preamble����2T postamble������£�������������д����֮�����С�����
                                                    0x0~0x1:1��ʱ�����ڣ�
                                                    0x2~0xf:n��ʱ�����ڡ� */
    } reg;
} SOC_MDDRC_DMC_DDRC_CFG_TIMING6_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING6_tcksre_START    (0)
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING6_tcksre_END      (3)
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING6_tcksrx_START    (4)
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING6_tcksrx_END      (7)
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING6_todt_sft_START  (8)
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING6_todt_sft_END    (11)
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING6_tccd_l_START    (12)
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING6_tccd_l_END      (15)
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING6_twtr_l_START    (16)
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING6_twtr_l_END      (19)
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING6_trrd_l_START    (20)
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING6_trrd_l_END      (23)
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING6_tccd_nsr_START  (24)
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING6_tccd_nsr_END    (27)
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING6_tccd_nsw_START  (28)
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING6_tccd_nsw_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CFG_TIMING7_UNION
 �ṹ˵��  : DDRC_CFG_TIMING7 �Ĵ����ṹ���塣��ַƫ����:0x11C����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_CFG_TIMING7��DDRC��ʱ������Ĵ���7
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  rnk_twtr : 4;  /* bit[0-3]  : RANK��д��������ʱ�� */
        unsigned int  rnk_trtw : 4;  /* bit[4-7]  : RANK�����д����ʱ�� */
        unsigned int  rnk_twtw : 4;  /* bit[8-11] : RANK��д��д����ʱ�� */
        unsigned int  rnk_trtr : 4;  /* bit[12-15]: RANK�����������ʱ�� */
        unsigned int  reserved : 16; /* bit[16-31]: ������ */
    } reg;
} SOC_MDDRC_DMC_DDRC_CFG_TIMING7_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING7_rnk_twtr_START  (0)
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING7_rnk_twtr_END    (3)
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING7_rnk_trtw_START  (4)
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING7_rnk_trtw_END    (7)
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING7_rnk_twtw_START  (8)
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING7_rnk_twtw_END    (11)
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING7_rnk_trtr_START  (12)
#define SOC_MDDRC_DMC_DDRC_CFG_TIMING7_rnk_trtr_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING0_UNION
 �ṹ˵��  : DDRC_CFG_NXT_TIMING0 �Ĵ����ṹ���塣��ַƫ����:0x120����ֵ:0xFFFFFF3F�����:32
 �Ĵ���˵��: DDRC_CFG_NXT_TIMING0������Ƶ���л�DDRC��ʱ������Ĵ���0
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  tras     : 6;  /* bit[0-5]  : ͬBANK�ļ���������ر����ACT to PRE���ĵȴ����ڡ�
                                                    0x00��0x01��1��ʱ�����ڣ�
                                                    0x02��0x3F��n��ʱ�����ڡ� */
        unsigned int  reserved : 2;  /* bit[6-7]  : ������ */
        unsigned int  trc      : 6;  /* bit[8-13] : ͬBANK�ļ�������������active a bank to active a bank���ĵȴ����ڡ�
                                                    0x00��0x01��1��ʱ�����ڣ�
                                                    0x02��0x3F��n��ʱ�����ڡ� */
        unsigned int  trcd     : 5;  /* bit[14-18]: ͬBANK�������д��ACT to READ or WRITE������ĵȴ����ڡ�
                                                    0x0��0x3��3ʱ�����ڣ�
                                                    0x4��0xF��nʱ�����ڡ� */
        unsigned int  trp      : 5;  /* bit[19-23]: �رգ�PRE period������ĵȴ����ڡ�
                                                    0x0��0x1��1��ʱ�����ڣ�
                                                    0x2��0xF��n��ʱ�����ڡ� */
        unsigned int  trrd     : 4;  /* bit[24-27]: ��BANK A ����BANK B�ģ�ACT bank a to ACT bank b���ȴ����ڡ�
                                                    0x0��0x1��1��ʱ�����ڣ�
                                                    0x2��0xF��n��ʱ�����ڡ� */
        unsigned int  tmrd     : 4;  /* bit[28-31]: ģʽ�Ĵ������أ�LMR������ĵȴ����ڡ�
                                                    0x0��0x1��1��ʱ�����ڣ�
                                                    0x2��0xF��n��ʱ�����ڡ� */
    } reg;
} SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING0_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING0_tras_START      (0)
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING0_tras_END        (5)
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING0_trc_START       (8)
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING0_trc_END         (13)
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING0_trcd_START      (14)
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING0_trcd_END        (18)
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING0_trp_START       (19)
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING0_trp_END         (23)
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING0_trrd_START      (24)
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING0_trrd_END        (27)
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING0_tmrd_START      (28)
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING0_tmrd_END        (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING1_UNION
 �ṹ˵��  : DDRC_CFG_NXT_TIMING1 �Ĵ����ṹ���塣��ַƫ����:0x124����ֵ:0xFF2215FF�����:32
 �Ĵ���˵��: DDRC_CFG_NXT_TIMING1������Ƶ���л���DDRC��ʱ������Ĵ���1
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  trfc     : 9;  /* bit[0-8]  : �Զ�ˢ���������ں��Զ�ˢ�µ����AREF period or AREF to ACT������ĵȴ����ڡ��üĴ���ѡ������max{trfc,tzqcs}�Ĵ�ֵ��
                                                    0x00��0x01��1��ʱ�����ڣ�
                                                    0x02��0xFF��n��ʱ�����ڡ� */
        unsigned int  reserved : 1;  /* bit[9]    : ������ */
        unsigned int  tcl      : 5;  /* bit[10-14]: DDR�Ķ���������ݵ��ӳ٣�CAS Latency����
                                                    0x0��0x1�� 1��ʱ�����ڣ�
                                                    0x2��0xF�� n��ʱ�����ڡ� */
        unsigned int  twl      : 5;  /* bit[15-19]: д���д���ݵĵȴ����ڡ�
                                                    0x0��0x1��1��ʱ�����ڣ�
                                                    0x2��0xF��n��ʱ�����ڡ�
                                                    �磺0x3��3��ʱ�����ڡ�
                                                    ע�⣺DDR2ģʽ��twl����Ϊtcl-1��twl����ʱӦ����twl �Ctaond >��1�� */
        unsigned int  trtw     : 4;  /* bit[20-23]: ���һ�������ݵ���һ��д�����ӳ١�
                                                    0x0��0x1��1��ʱ�����ڣ�
                                                    0x2��0xF��n+1��ʱ�����ڡ� */
        unsigned int  tsre     : 8;  /* bit[24-31]: �˳���ˢ�£�Self-Refresh����������ĵȴ����ڡ�
                                                    0x0�� 1 ��ʱ�����ڣ�
                                                    0x01��0xFF��n��4��ʱ�����ڡ�
                                                    DDR3 SDRAMʱ����ֵ����tXSDLLֵ�� */
    } reg;
} SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING1_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING1_trfc_START      (0)
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING1_trfc_END        (8)
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING1_tcl_START       (10)
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING1_tcl_END         (14)
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING1_twl_START       (15)
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING1_twl_END         (19)
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING1_trtw_START      (20)
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING1_trtw_END        (23)
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING1_tsre_START      (24)
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING1_tsre_END        (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING2_UNION
 �ṹ˵��  : DDRC_CFG_NXT_TIMING2 �Ĵ����ṹ���塣��ַƫ����:0x128����ֵ:0xF303F000�����:32
 �Ĵ���˵��: DDRC_CFG_NXT_TIMING2������Ƶ���л���DDRC��ʱ������Ĵ���2
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  taref    : 11; /* bit[0-10] : �Զ�ˢ�����ڡ�
                                                    0x000���Զ�ˢ�½�ֹ��
                                                    0x001��0x7FF��SDRAMˢ������ʱ��Ϊ16��nʱ�����ڡ�
                                                    ��0x008��128��ʱ�����ڣ�16��8����
                                                    ���ü��ʱ��Ϊtaref = 7800/16/tclk��TclkΪDMC��ʱ�ӵ��������ڣ�ע�⣬ֻ����clk ratioΪ1��1ʱ������sdram��ʱ��������ͬ���� */
        unsigned int  reserved_0: 1;  /* bit[11]   : ������ */
        unsigned int  tfaw     : 6;  /* bit[12-17]: ����4�������������ڡ�
                                                    0x00��0x3F��n��ʱ�����ڣ�
                                                    �磺0x14��20��ʱ�����ڡ� */
        unsigned int  reserved_1: 6;  /* bit[18-23]: ������ */
        unsigned int  twtr     : 4;  /* bit[24-27]: д�������һ��д���ݵ������write to read���ĵȴ����ڡ�
                                                    0x0��0x1��1��ʱ�����ڣ�
                                                    0x2��0xf��n��ʱ�����ڡ�
                                                    ��0x3��3��ʱ�����ڡ� */
        unsigned int  tcke     : 4;  /* bit[28-31]: �͹���״̬ά�ֵ����ʱ�䡣
                                                    0x0��0x1��1��ʱ�����ڣ�
                                                    0x2��0xF��n��ʱ�����ڡ�
                                                    ��ֵ��Ҫ����tCKESR, tCKSRE, tCKSRX, tCKE��tCPDED����ֵ�е����ֵ�� */
    } reg;
} SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING2_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING2_taref_START     (0)
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING2_taref_END       (10)
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING2_tfaw_START      (12)
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING2_tfaw_END        (17)
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING2_twtr_START      (24)
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING2_twtr_END        (27)
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING2_tcke_START      (28)
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING2_tcke_END        (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING3_UNION
 �ṹ˵��  : DDRC_CFG_NXT_TIMING3 �Ĵ����ṹ���塣��ַƫ����:0x12C����ֵ:0xFFFFE0F2�����:32
 �Ĵ���˵��: DDRC_CFG_TIMING3������Ƶ���л���DDRC��ʱ������Ĵ���3
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  trtp    : 4;  /* bit[0-3]  : ������ر�����ĵȴ��ӳ١�
                                                   0000��0010��2��ʱ�����ڣ�
                                                   0011��1111��n��ʱ�����ڡ�
                                                   Trtp�ļ��㹫ʽ��AL+BL/2+Max(trtp,2)-2 */
        unsigned int  txard   : 4;  /* bit[4-7]  : �˳�DDR�͹���״̬�ȴ����ڡ�
                                                   0x0��0xF��n x 2��ʱ�����ڣ�n����ʮ��������
                                                   �磺0x7��Ϊ14��ʱ�����ڡ�
                                                   ȡ{tXP,tXARD,tXARDS,tXS}�е����ֵ��
                                                   ��DDR3ģʽ�£��üĴ�����ΪtXS����ʱ��txardֻ��Ҫ����Ϊ10ns�ĵȼ�ʱ�����ڼ��ɡ� */
        unsigned int  taond   : 5;  /* bit[8-12] : ODT��On-die termination���򿪺͹ر����ڡ�
                                                   DDR2ģʽ�£�taond/taofd����
                                                   0x0��2/2.5��
                                                   0x1��3/3.5��
                                                   0x2��4/4.5��
                                                   0x3��5/5.5��
                                                   ������ ������
                                                   ��DDR3ģʽ�£���ֵ����ΪtWL-1�������1��2ģʽ������Ҫ���tWL-2������̨�е�phy�Ѿ�����������Ȼ����tWL-1�����á�
                                                   ��LPDDR3ģʽ�£���ֵ����ΪtODTon(max)/tCK�� */
        unsigned int  tzqinit : 9;  /* bit[13-21]: ZQ��ʼ���ӳ����ڡ�
                                                   0x0��0x1ff��nx4��ʱ�����ڡ�
                                                   ��ֵ����tZQINIT��tDLLK�����ֵ�� */
        unsigned int  tzq_prd : 10; /* bit[22-31]: ZQCS�������ڡ�
                                                   0x000��ZQCS�����ֹ��
                                                   0x001��0x3FF�� n��128��AREF���ڡ�
                                                   ZQCS��������ʱ��Ϊn��128��tarefʱ�����ڡ� */
    } reg;
} SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING3_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING3_trtp_START     (0)
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING3_trtp_END       (3)
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING3_txard_START    (4)
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING3_txard_END      (7)
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING3_taond_START    (8)
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING3_taond_END      (12)
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING3_tzqinit_START  (13)
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING3_tzqinit_END    (21)
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING3_tzq_prd_START  (22)
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING3_tzq_prd_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING4_UNION
 �ṹ˵��  : DDRC_CFG_NXT_TIMING4 �Ĵ����ṹ���塣��ַƫ����:0x130����ֵ:0x01FF2000�����:32
 �Ĵ���˵��: DDRC_CFG_NXT_TIMING4������Ƶ���л���DDRC��ʱ������Ĵ���4
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  twlmrd    : 6;  /* bit[0-5]  : DDR3 WriteLevel�׸�DQS��Ч�ӳٲ�����
                                                     0x0��0x1��1��ʱ�����ڣ�
                                                     0x2��0x3F�� n��ʱ�����ڡ� */
        unsigned int  reserved_0: 2;  /* bit[6-7]  : ������ */
        unsigned int  twldqsen  : 6;  /* bit[8-13] : DDR3 WriteLevel�����ӳٲ�����
                                                     0x0��0x1��1��ʱ�����ڣ�
                                                     0x2��0x3F�� n��ʱ�����ڡ� */
        unsigned int  reserved_1: 2;  /* bit[14-15]: ������ */
        unsigned int  twlo      : 4;  /* bit[16-19]: DDR3 WriteLevel״̬�ӳٲ�����
                                                     0x0��0x1��1��ʱ�����ڣ�
                                                     0x2��0xF��n��ʱ�����ڡ�
                                                     �ò���Ϊtwlo+twloe֮�͡� */
        unsigned int  tmod      : 5;  /* bit[20-24]: MRS���ODT��Ч����ʱ������
                                                     0x0~0x1:1��ʱ�����ڣ�
                                                     02~0x1F:n��ʱ�����ڡ� */
        unsigned int  reserved_2: 3;  /* bit[25-27]: ������ */
        unsigned int  trodt_ext : 3;  /* bit[28-30]: LPDDR3ģʽ��trodt_ext����twodt������ͬ��
                                                     ��DDR4���ԣ������ڶ�����ʱ��ʹ������rank��odt�������ڴ�crc_enʱ��odt�Ĵ򿪻���ǰһ�ģ������ڶ�odt��˵����û����Ϊcrc��ʹ�ܴ򿪶��Զ���չ������Ҫ�ڸüĴ���������չ�� */
        unsigned int  reserved_3: 1;  /* bit[31]   : ������ */
    } reg;
} SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING4_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING4_twlmrd_START     (0)
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING4_twlmrd_END       (5)
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING4_twldqsen_START   (8)
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING4_twldqsen_END     (13)
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING4_twlo_START       (16)
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING4_twlo_END         (19)
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING4_tmod_START       (20)
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING4_tmod_END         (24)
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING4_trodt_ext_START  (28)
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING4_trodt_ext_END    (30)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING5_UNION
 �ṹ˵��  : DDRC_CFG_NXT_TIMING5 �Ĵ����ṹ���塣��ַƫ����:0x134����ֵ:0x1113FF1F�����:32
 �Ĵ���˵��: DDRC_CFG_NXT_TIMING5������Ƶ���л���DDRC��ʱ������Ĵ���5
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  twr       : 5;  /* bit[0-4]  : д�ָ���write recovery���ȴ����ڡ�
                                                     0x0��0x1��1��ʱ�����ڣ�
                                                     0x2��0x1f��n��ʱ�����ڡ�
                                                     ע�⣺����DFS�������£�tWR������Ҫ����DFS��оƬ����ʹ�����Ƶ�����á����Ҳ�����DDR��Ƶ�ʱ仯�޸�tWR�����á� */
        unsigned int  reserved_0: 3;  /* bit[5-7]  : ������ */
        unsigned int  tzqcs     : 8;  /* bit[8-15] : ZQCSУ׼�ӳ����ڡ�
                                                     0x0��0xff��nx2��ʱ�����ڡ� */
        unsigned int  trnk2rnk  : 4;  /* bit[16-19]: RANK��RANK�����ʱ������
                                                     0000~1111:n��ʱ�����ڡ� */
        unsigned int  tdqsck    : 3;  /* bit[20-22]: DQS�����CK���������ʱ�䣬�����LPDDR2/3����ֵ���ڼ���Read latency����LPDDR2/3ģʽ�»��Զ����ӵ�RL�ϡ� */
        unsigned int  reserved_1: 1;  /* bit[23]   : ������ */
        unsigned int  tdqsckmax : 3;  /* bit[24-26]: DQS�����CK������������ʱ�䣬�����LPDDR2/3���ò�����LPDDR2/3ģʽ�»��Զ����ӵ����ж�����������Ĳ����ϡ� */
        unsigned int  reserved_2: 1;  /* bit[27]   :  */
        unsigned int  twodt_ext : 3;  /* bit[28-30]: ����LPDDR3��Ч�����첽ODT����Ҫչ��ODT�ŹܵĴ򿪴��ڡ�չ��ĳ���Ϊ(tODTon/off(max)-tODTon/off(min))/tCK��
                                                     0x0��0x1��1��ʱ�����ڣ�
                                                     0x2��0x7��n��ʱ�����ڡ� */
        unsigned int  reserved_3: 1;  /* bit[31]   : ������ */
    } reg;
} SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING5_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING5_twr_START        (0)
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING5_twr_END          (4)
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING5_tzqcs_START      (8)
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING5_tzqcs_END        (15)
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING5_trnk2rnk_START   (16)
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING5_trnk2rnk_END     (19)
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING5_tdqsck_START     (20)
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING5_tdqsck_END       (22)
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING5_tdqsckmax_START  (24)
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING5_tdqsckmax_END    (26)
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING5_twodt_ext_START  (28)
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING5_twodt_ext_END    (30)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING6_UNION
 �ṹ˵��  : DDRC_CFG_NXT_TIMING6 �Ĵ����ṹ���塣��ַƫ����:0x138����ֵ:0x000000FF�����:32
 �Ĵ���˵��: DDRC_CFG_NXT_TIMING6������Ƶ���л���DDRC��ʱ������Ĵ���6
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  tcksre   : 4;  /* bit[0-3]  : ddr3��ddr4��tCKSRE�������ڽ�����ˢ�º�ʱ����Ҫ���ֵ�������
                                                    0x0��0x1��1��ʱ�����ڣ�
                                                    0x2��0xF�� n��ʱ�����ڡ� */
        unsigned int  tcksrx   : 4;  /* bit[4-7]  : ddr3��ddr4��tCKSRX���������˳���ˢ��֮ǰʱ����Ҫ��ǰ��Ч������
                                                    0x0��0x1��1��ʱ�����ڣ�
                                                    0x2��0xF�� n��ʱ�����ڡ� */
        unsigned int  todt_sft : 4;  /* bit[8-11] : LPDDR3ģʽODT��ʱ���ƣ���Ҫ���ڲ���POP LPDDR3��ODT IO��DDRPHY����ʱ��
                                                    0x0~0xF: n��ʱ�����ڡ�
                                                    ODT����ʱ=tWL-taond+todt_sft��ע��ODT�������ʱ���ܳ���0xF */
        unsigned int  tccd_l   : 4;  /* bit[12-15]: Bank Group֮�ڵ�tccd�ȴ����ڡ�
                                                    0x0~0x1��1��ʱ������
                                                    0x2~0xf��n��ʱ�����ڡ�
                                                    ע�⣺�˲�������ΪDDRʱ������������� */
        unsigned int  twtr_l   : 4;  /* bit[16-19]: Bank Group֮�ڵ�twtr�ȴ����ڡ�
                                                    0x0~0x1��1��ʱ������
                                                    0x2~0xf��n��ʱ�����ڡ� */
        unsigned int  trrd_l   : 4;  /* bit[20-23]: Bank Group֮�ڵ�trrd�ȴ����ڡ�
                                                    0x0~0x1��1��ʱ������
                                                    0x2~0xf��n��ʱ�����ڡ� */
        unsigned int  tccd_nsr : 4;  /* bit[24-27]: ��ʹ��2T preamble����2T postamble������£������������Ķ�����֮�����С�����
                                                    0x0~0x1:1��ʱ�����ڣ�
                                                    0x2~0xf:n��ʱ�����ڡ� */
        unsigned int  tccd_nsw : 4;  /* bit[28-31]: ��ʹ��2T preamble����2T postamble������£�������������д����֮�����С�����
                                                    0x0~0x1:1��ʱ�����ڣ�
                                                    0x2~0xf:n��ʱ�����ڡ� */
    } reg;
} SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING6_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING6_tcksre_START    (0)
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING6_tcksre_END      (3)
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING6_tcksrx_START    (4)
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING6_tcksrx_END      (7)
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING6_todt_sft_START  (8)
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING6_todt_sft_END    (11)
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING6_tccd_l_START    (12)
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING6_tccd_l_END      (15)
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING6_twtr_l_START    (16)
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING6_twtr_l_END      (19)
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING6_trrd_l_START    (20)
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING6_trrd_l_END      (23)
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING6_tccd_nsr_START  (24)
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING6_tccd_nsr_END    (27)
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING6_tccd_nsw_START  (28)
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING6_tccd_nsw_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING7_UNION
 �ṹ˵��  : DDRC_CFG_NXT_TIMING7 �Ĵ����ṹ���塣��ַƫ����:0x13C����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_CFG_NXT_TIMING7������Ƶ���л���DDRC��ʱ������Ĵ���7
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  rnk_twtr : 4;  /* bit[0-3]  : RANK��д��������ʱ��
                                                    ��HDRģʽ�£�ʹ��CRCʱ�����Ҫ�õ�RODT��rnk_twtr����>=2�� */
        unsigned int  rnk_trtw : 4;  /* bit[4-7]  : RANK�����д����ʱ�� */
        unsigned int  rnk_twtw : 4;  /* bit[8-11] : RANK��д��д����ʱ�� */
        unsigned int  rnk_trtr : 4;  /* bit[12-15]: RANK�����������ʱ�� */
        unsigned int  reserved : 16; /* bit[16-31]: ������ */
    } reg;
} SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING7_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING7_rnk_twtr_START  (0)
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING7_rnk_twtr_END    (3)
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING7_rnk_trtw_START  (4)
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING7_rnk_trtw_END    (7)
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING7_rnk_twtw_START  (8)
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING7_rnk_twtw_END    (11)
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING7_rnk_trtr_START  (12)
#define SOC_MDDRC_DMC_DDRC_CFG_NXT_TIMING7_rnk_trtr_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CFG_BLDATA_UNION
 �ṹ˵��  : DDRC_CFG_BLDATA �Ĵ����ṹ���塣��ַƫ����:0x140����ֵ:0x00000002�����:32
 �Ĵ���˵��: DDRC_CFG_BLDATA��DDRCд����Ԥ����д�������üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  bl_data  : 4;  /* bit[0-3] : ��ǰģʽ�£�ÿ��DDR�����Ӧ��DMC����������
                                                   0x0~0xF��n�ġ� */
        unsigned int  reserved : 28; /* bit[4-31]: ������ */
    } reg;
} SOC_MDDRC_DMC_DDRC_CFG_BLDATA_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CFG_BLDATA_bl_data_START   (0)
#define SOC_MDDRC_DMC_DDRC_CFG_BLDATA_bl_data_END     (3)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CFG_DMCLVL_UNION
 �ṹ˵��  : DDRC_CFG_DMCLVL �Ĵ����ṹ���塣��ַƫ����:0x144����ֵ:0x00000008�����:32
 �Ĵ���˵��: DDRC_CFG_DMCLVL��DDR����������������ˮ�����üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  que_level       : 5;  /* bit[0-4]  : DMC��que��ˮ�����ã���que�������������ˮ�ߺ�ᷴѹ����
                                                           ��ʼֵΪQUE����� */
        unsigned int  reserved_0      : 3;  /* bit[5-7]  : ������ */
        unsigned int  mbist_que_level : 5;  /* bit[8-12] : MTEST����MCLR����ʱ��DMC����������BUFFER������
                                                           0x0��1����
                                                           0x1~0x10:1~16�������ֵ�����������йء� */
        unsigned int  reserved_1      : 19; /* bit[13-31]: ������ */
    } reg;
} SOC_MDDRC_DMC_DDRC_CFG_DMCLVL_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CFG_DMCLVL_que_level_START        (0)
#define SOC_MDDRC_DMC_DDRC_CFG_DMCLVL_que_level_END          (4)
#define SOC_MDDRC_DMC_DDRC_CFG_DMCLVL_mbist_que_level_START  (8)
#define SOC_MDDRC_DMC_DDRC_CFG_DMCLVL_mbist_que_level_END    (12)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CFG_TIMEOUT_UNION
 �ṹ˵��  : DDRC_CFG_TIMEOUT �Ĵ����ṹ���塣��ַƫ����:0x150����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_CFG_TIMEOUT������TIMEOUT���üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  timeout_en    : 1;  /* bit[0]    : DDRC timeoutʹ�����á�
                                                         1��ʹ�ܣ�
                                                         0����ֹ�� */
        unsigned int  reserved_0    : 3;  /* bit[1-3]  : ������ */
        unsigned int  timeout_level : 4;  /* bit[4-7]  : DDRC timeout ˮ�����á�
                                                         ��������ȼ����ڵ���timeout_level�Ĳ���timeout0��ֵ��С��timeout_level�Ĳ���timeout1������ֵ�� */
        unsigned int  timeout0      : 10; /* bit[8-17] : ����timeout0���á�
                                                         0x1��0x3FF��n��ʱ�����ڣ�
                                                         ������������ */
        unsigned int  reserved_1    : 2;  /* bit[18-19]: ������ */
        unsigned int  timeout1      : 10; /* bit[20-29]: ����timeout1���á�
                                                         0x1��0x3FF��n��ʱ�����ڣ�
                                                         ������������ */
        unsigned int  reserved_2    : 2;  /* bit[30-31]: ������ */
    } reg;
} SOC_MDDRC_DMC_DDRC_CFG_TIMEOUT_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CFG_TIMEOUT_timeout_en_START     (0)
#define SOC_MDDRC_DMC_DDRC_CFG_TIMEOUT_timeout_en_END       (0)
#define SOC_MDDRC_DMC_DDRC_CFG_TIMEOUT_timeout_level_START  (4)
#define SOC_MDDRC_DMC_DDRC_CFG_TIMEOUT_timeout_level_END    (7)
#define SOC_MDDRC_DMC_DDRC_CFG_TIMEOUT_timeout0_START       (8)
#define SOC_MDDRC_DMC_DDRC_CFG_TIMEOUT_timeout0_END         (17)
#define SOC_MDDRC_DMC_DDRC_CFG_TIMEOUT_timeout1_START       (20)
#define SOC_MDDRC_DMC_DDRC_CFG_TIMEOUT_timeout1_END         (29)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CFG_QOS_UNION
 �ṹ˵��  : DDRC_CFG_QOS �Ĵ����ṹ���塣��ַƫ����:0x154����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_CFG_QOS������QOS���üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ageprd   : 4;  /* bit[0-3] : �����ϻ�ʱ�����á�
                                                   0x1��0xF��N��16��ʱ�����ڣ�
                                                   0x0����ֹAging���ܡ� */
        unsigned int  priadpt  : 4;  /* bit[4-7] : �������ȼ�����Ӧ���á�
                                                   0x1��0xF��N��16��ʱ�����ڣ�
                                                   0x0����ֹ���ȼ�����Ӧ���ܡ� */
        unsigned int  reserved : 24; /* bit[8-31]: ������ */
    } reg;
} SOC_MDDRC_DMC_DDRC_CFG_QOS_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CFG_QOS_ageprd_START    (0)
#define SOC_MDDRC_DMC_DDRC_CFG_QOS_ageprd_END      (3)
#define SOC_MDDRC_DMC_DDRC_CFG_QOS_priadpt_START   (4)
#define SOC_MDDRC_DMC_DDRC_CFG_QOS_priadpt_END     (7)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CFG_MBIST_UNION
 �ṹ˵��  : DDRC_CFG_MBIST �Ĵ����ṹ���塣��ַƫ����:0x160����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_CFG_MBIST��MBIST����ߵ�ַ���üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mbist_top_addr : 28; /* bit[0-27] : MTEST����MCLR����ɨ���RANK��ߵ�ַ����������DMC��λ��HDR��SDRģʽ�йء�
                                                          
                                                          ���DMC�궨���HDRģʽ�����ַ�ռ�Ϊ��
                                                          DMCλ��256: N*64;
                                                          DMCλ��128: N*32;
                                                          DMCλ��128: N*16;
                                                          
                                                          ���DMC�궨��ΪSDRģʽ�����ַ�ռ�Ϊ��
                                                          DMCλ��256: N*128;
                                                          DMCλ��128: N*64;
                                                          DMCλ��128: N*32;
                                                          
                                                          ��Balongv8r1Ϊ����DMC=128bit���궨�����ó���HDRģʽ�������������¡�
                                                          0x2��64Byte��ַ�ռ䣻
                                                          ��
                                                          0xN��N*32Byte��ַ�ռ䡣
                                                          ע���ڽ���MTESTʱ����ߵ�ַ����Ϊ2��n�η������⣬�����㷨�����ƣ�N�����2��ʼ�� */
        unsigned int  mbist_rank     : 4;  /* bit[28-31]: MTEST����MCLR����ɨ���RANKѡ��
                                                          0��RANK0��
                                                          1��RANK1��
                                                          2��RANK2��
                                                          3��RANK3�� */
    } reg;
} SOC_MDDRC_DMC_DDRC_CFG_MBIST_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CFG_MBIST_mbist_top_addr_START  (0)
#define SOC_MDDRC_DMC_DDRC_CFG_MBIST_mbist_top_addr_END    (27)
#define SOC_MDDRC_DMC_DDRC_CFG_MBIST_mbist_rank_START      (28)
#define SOC_MDDRC_DMC_DDRC_CFG_MBIST_mbist_rank_END        (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CFG_MCLR_PATTERN0_UNION
 �ṹ˵��  : DDRC_CFG_MCLR_PATTERN0 �Ĵ����ṹ���塣��ַƫ����:0x164����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_CFG_MCLR_PATTEN0��Memory��ʽ����������ʽ�Ĵ���0
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mclr_pattern0 : 32; /* bit[0-31]: Memory Clean������ʽ��0bit~31bit */
    } reg;
} SOC_MDDRC_DMC_DDRC_CFG_MCLR_PATTERN0_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CFG_MCLR_PATTERN0_mclr_pattern0_START  (0)
#define SOC_MDDRC_DMC_DDRC_CFG_MCLR_PATTERN0_mclr_pattern0_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CFG_MCLR_PATTERN1_UNION
 �ṹ˵��  : DDRC_CFG_MCLR_PATTERN1 �Ĵ����ṹ���塣��ַƫ����:0x168����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_CFG_MCLR_PATTEN0��Memory��ʽ����������ʽ�Ĵ���1
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mclr_pattern1 : 32; /* bit[0-31]: Memory Clean������ʽ��32bit~63bit */
    } reg;
} SOC_MDDRC_DMC_DDRC_CFG_MCLR_PATTERN1_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CFG_MCLR_PATTERN1_mclr_pattern1_START  (0)
#define SOC_MDDRC_DMC_DDRC_CFG_MCLR_PATTERN1_mclr_pattern1_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CFG_MCLR_PATTERN2_UNION
 �ṹ˵��  : DDRC_CFG_MCLR_PATTERN2 �Ĵ����ṹ���塣��ַƫ����:0x16C����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_CFG_MCLR_PATTEN0��Memory��ʽ����������ʽ�Ĵ���2
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mclr_pattern2 : 32; /* bit[0-31]: Memory Clean������ʽ��64bit~95bit */
    } reg;
} SOC_MDDRC_DMC_DDRC_CFG_MCLR_PATTERN2_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CFG_MCLR_PATTERN2_mclr_pattern2_START  (0)
#define SOC_MDDRC_DMC_DDRC_CFG_MCLR_PATTERN2_mclr_pattern2_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CFG_MCLR_PATTERN3_UNION
 �ṹ˵��  : DDRC_CFG_MCLR_PATTERN3 �Ĵ����ṹ���塣��ַƫ����:0x170����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_CFG_MCLR_PATTEN0��Memory��ʽ����������ʽ�Ĵ���3
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mclr_pattern3 : 32; /* bit[0-31]: Memory Clean������ʽ��96bit~127bit */
    } reg;
} SOC_MDDRC_DMC_DDRC_CFG_MCLR_PATTERN3_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CFG_MCLR_PATTERN3_mclr_pattern3_START  (0)
#define SOC_MDDRC_DMC_DDRC_CFG_MCLR_PATTERN3_mclr_pattern3_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CFG_MCLR_PATTERN4_UNION
 �ṹ˵��  : DDRC_CFG_MCLR_PATTERN4 �Ĵ����ṹ���塣��ַƫ����:0x174����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_CFG_MCLR_PATTEN0��Memory��ʽ����������ʽ�Ĵ���4
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mclr_pattern4 : 32; /* bit[0-31]: Memory Clean������ʽ��128bit~144bit */
    } reg;
} SOC_MDDRC_DMC_DDRC_CFG_MCLR_PATTERN4_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CFG_MCLR_PATTERN4_mclr_pattern4_START  (0)
#define SOC_MDDRC_DMC_DDRC_CFG_MCLR_PATTERN4_mclr_pattern4_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CFG_TRAIN_UNION
 �ṹ˵��  : DDRC_CFG_TRAIN �Ĵ����ṹ���塣��ַƫ����:0x180����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_CFG_TRAIN��ѵ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  train_en : 1;  /* bit[0]   : DDRCѵ��ʹ�ܡ�
                                                   1��ѵ��ʹ�ܣ�
                                                   0��ѵ����ֹ�� */
        unsigned int  reserved : 31; /* bit[1-31]: ������ */
    } reg;
} SOC_MDDRC_DMC_DDRC_CFG_TRAIN_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CFG_TRAIN_train_en_START  (0)
#define SOC_MDDRC_DMC_DDRC_CFG_TRAIN_train_en_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CFG_DFI_LAT0_UNION
 �ṹ˵��  : DDRC_CFG_DFI_LAT0 �Ĵ����ṹ���塣��ַƫ����:0x184����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_CFG_DFI_LAT0��dfi�ӿ�ʱ�����üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  phyif_tim_oven : 1;  /* bit[0]    : dfi�ӿ�ʱ��ӿ�over rideģʽ��
                                                          0����ʾ����ÿ��phyĬ�ϵ�ʱ��
                                                          1������over rideģʽ�� */
        unsigned int  reserved       : 7;  /* bit[1-7]  : ������ */
        unsigned int  phyif_tim_wodt : 8;  /* bit[8-15] : wodt��ʱ������
                                                          ע�⣺��ǰֻ��[12:8]λ��Ч�� */
        unsigned int  phyif_tim_rodt : 8;  /* bit[16-23]: rodt��ʱ������
                                                          ע�⣺��ǰֻ��[20:16]λ��Ч�� */
        unsigned int  phyif_tim_wden : 8;  /* bit[24-31]: dfi_wdata_en��ʱ������
                                                          
                                                          ע�⣺��ǰֻ��[28:24]λ��Ч�� */
    } reg;
} SOC_MDDRC_DMC_DDRC_CFG_DFI_LAT0_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CFG_DFI_LAT0_phyif_tim_oven_START  (0)
#define SOC_MDDRC_DMC_DDRC_CFG_DFI_LAT0_phyif_tim_oven_END    (0)
#define SOC_MDDRC_DMC_DDRC_CFG_DFI_LAT0_phyif_tim_wodt_START  (8)
#define SOC_MDDRC_DMC_DDRC_CFG_DFI_LAT0_phyif_tim_wodt_END    (15)
#define SOC_MDDRC_DMC_DDRC_CFG_DFI_LAT0_phyif_tim_rodt_START  (16)
#define SOC_MDDRC_DMC_DDRC_CFG_DFI_LAT0_phyif_tim_rodt_END    (23)
#define SOC_MDDRC_DMC_DDRC_CFG_DFI_LAT0_phyif_tim_wden_START  (24)
#define SOC_MDDRC_DMC_DDRC_CFG_DFI_LAT0_phyif_tim_wden_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CFG_DFI_LAT1_UNION
 �ṹ˵��  : DDRC_CFG_DFI_LAT1 �Ĵ����ṹ���塣��ַƫ����:0x188����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_CFG_DFI_LAT1��dfi�ӿ�ʱ�����üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  phyif_tim_wdcs : 8;  /* bit[0-7]  : dfi_wrdata_cs_n��ʱ������
                                                          ע�⣺��ǰֻ��[4:0]λ��Ч�� */
        unsigned int  phyif_tim_wdda : 8;  /* bit[8-15] : dfi_wrdata��ʱ������
                                                          ע�⣺��ǰֻ��[12:8]λ��Ч�� */
        unsigned int  phyif_tim_rden : 8;  /* bit[16-23]: dfi_rddata_en��ʱ������
                                                          ע�⣺��ǰֻ��[21:16]λ��Ч�� */
        unsigned int  phyif_tim_rdcs : 8;  /* bit[24-31]: dfi_rddata_cs_n��ʱ������
                                                          ע�⣺��ǰֻ��[29:24]λ��Ч�� */
    } reg;
} SOC_MDDRC_DMC_DDRC_CFG_DFI_LAT1_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CFG_DFI_LAT1_phyif_tim_wdcs_START  (0)
#define SOC_MDDRC_DMC_DDRC_CFG_DFI_LAT1_phyif_tim_wdcs_END    (7)
#define SOC_MDDRC_DMC_DDRC_CFG_DFI_LAT1_phyif_tim_wdda_START  (8)
#define SOC_MDDRC_DMC_DDRC_CFG_DFI_LAT1_phyif_tim_wdda_END    (15)
#define SOC_MDDRC_DMC_DDRC_CFG_DFI_LAT1_phyif_tim_rden_START  (16)
#define SOC_MDDRC_DMC_DDRC_CFG_DFI_LAT1_phyif_tim_rden_END    (23)
#define SOC_MDDRC_DMC_DDRC_CFG_DFI_LAT1_phyif_tim_rdcs_START  (24)
#define SOC_MDDRC_DMC_DDRC_CFG_DFI_LAT1_phyif_tim_rdcs_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CFG_REC0_UNION
 �ṹ˵��  : DDRC_CFG_REC0 �Ĵ����ṹ���塣��ַƫ����:0x190����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_CFG_REC0��DDR4����ָ����üĴ���0��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  rec_en      : 1;  /* bit[0]    : Error recovery�Ƿ�ʹ��
                                                       0����ֹ��
                                                       1��ʹ�ܡ� */
        unsigned int  rec_ref_en  : 1;  /* bit[1]    : ����ָ�ǰ�Ƿ���auto refresh����
                                                       0����ֹ��
                                                       1��ʹ�ܡ� */
        unsigned int  rec_upd_en  : 1;  /* bit[2]    : RECģ���Ƿ���upd�����ź�
                                                       0����ֹ��
                                                       1��ʹ�ܡ� */
        unsigned int  reserved_0  : 1;  /* bit[3]    : ������ */
        unsigned int  rec_ref_num : 4;  /* bit[4-7]  : ����ָ�ǰ����auto refresh�Ĵ���
                                                       0~15��n+1 */
        unsigned int  rec_max_num : 4;  /* bit[8-11] : ��һ�ξ������������������������������������rec��ֹͣ���ʹ���ָ�����ϱ������ж� */
        unsigned int  crc_liminal : 6;  /* bit[12-17]: CRC����Alert_n������������ֵ����ͬʱʹ��CRC�����CA Parity����ʱAlert_n����������������ֵ���ж�ΪCA Parity����С�ڸ���ֵ���ж�ΪCRC ���� */
        unsigned int  reserved_1  : 14; /* bit[18-31]: ������ */
    } reg;
} SOC_MDDRC_DMC_DDRC_CFG_REC0_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CFG_REC0_rec_en_START       (0)
#define SOC_MDDRC_DMC_DDRC_CFG_REC0_rec_en_END         (0)
#define SOC_MDDRC_DMC_DDRC_CFG_REC0_rec_ref_en_START   (1)
#define SOC_MDDRC_DMC_DDRC_CFG_REC0_rec_ref_en_END     (1)
#define SOC_MDDRC_DMC_DDRC_CFG_REC0_rec_upd_en_START   (2)
#define SOC_MDDRC_DMC_DDRC_CFG_REC0_rec_upd_en_END     (2)
#define SOC_MDDRC_DMC_DDRC_CFG_REC0_rec_ref_num_START  (4)
#define SOC_MDDRC_DMC_DDRC_CFG_REC0_rec_ref_num_END    (7)
#define SOC_MDDRC_DMC_DDRC_CFG_REC0_rec_max_num_START  (8)
#define SOC_MDDRC_DMC_DDRC_CFG_REC0_rec_max_num_END    (11)
#define SOC_MDDRC_DMC_DDRC_CFG_REC0_crc_liminal_START  (12)
#define SOC_MDDRC_DMC_DDRC_CFG_REC0_crc_liminal_END    (17)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CFG_REC1_UNION
 �ṹ˵��  : DDRC_CFG_REC1 �Ĵ����ṹ���塣��ַƫ����:0x194����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_CFG_REC1��DDR4����ָ����üĴ���1��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  talert_syn  : 4;  /* bit[0-3]  : Alert_n�ź�ͬ���߼��ӳ�ʱ�� */
        unsigned int  tio2phy_dly : 5;  /* bit[4-8]  : �����ݴ�IO��phy dfi�ӿ�����ӳ�ʱ�� */
        unsigned int  reserved_0  : 3;  /* bit[9-11] : ������ */
        unsigned int  tpar_alert  : 5;  /* bit[12-16]: CA Parity����Alert_n����ʱ�䣬���������ֲ���tPAR_UNKNOWN��tPAR_ALERT_ON���� */
        unsigned int  reserved_1  : 3;  /* bit[17-19]: ������ */
        unsigned int  tcrc_alert  : 5;  /* bit[20-24]: CRC����Alert_n����ʱ�䣬���������ֲ���tCRC_ALERT���� */
        unsigned int  tphy2io_dly : 5;  /* bit[25-29]: �����phyģ�鵽IO����ӳ�ʱ�� */
        unsigned int  reserved_2  : 2;  /* bit[30-31]: ������ */
    } reg;
} SOC_MDDRC_DMC_DDRC_CFG_REC1_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CFG_REC1_talert_syn_START   (0)
#define SOC_MDDRC_DMC_DDRC_CFG_REC1_talert_syn_END     (3)
#define SOC_MDDRC_DMC_DDRC_CFG_REC1_tio2phy_dly_START  (4)
#define SOC_MDDRC_DMC_DDRC_CFG_REC1_tio2phy_dly_END    (8)
#define SOC_MDDRC_DMC_DDRC_CFG_REC1_tpar_alert_START   (12)
#define SOC_MDDRC_DMC_DDRC_CFG_REC1_tpar_alert_END     (16)
#define SOC_MDDRC_DMC_DDRC_CFG_REC1_tcrc_alert_START   (20)
#define SOC_MDDRC_DMC_DDRC_CFG_REC1_tcrc_alert_END     (24)
#define SOC_MDDRC_DMC_DDRC_CFG_REC1_tphy2io_dly_START  (25)
#define SOC_MDDRC_DMC_DDRC_CFG_REC1_tphy2io_dly_END    (29)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CFG_CRC_UNION
 �ṹ˵��  : DDRC_CFG_CRC �Ĵ����ṹ���塣��ַƫ����:0x198����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_CFG_CRC��DDR4 CRC���üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  device_x8_x4 : 18; /* bit[0-17] : ��ǰBytelane���������ͣ�ÿ��Bytelane���Ե�������
                                                        0�� X8��X16����
                                                        1�� X4���� */
        unsigned int  reserved     : 14; /* bit[18-31]: ������ */
    } reg;
} SOC_MDDRC_DMC_DDRC_CFG_CRC_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CFG_CRC_device_x8_x4_START  (0)
#define SOC_MDDRC_DMC_DDRC_CFG_CRC_device_x8_x4_END    (17)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CFG_CRC_ERRINJ0_UNION
 �ṹ˵��  : DDRC_CFG_CRC_ERRINJ0 �Ĵ����ṹ���塣��ַƫ����:0x1A0����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_CFG_CRC_ERRINJ0
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  crc_err_inj     : 1;  /* bit[0]    : CRC����ע��ģʽ��
                                                           0����������ģʽ��
                                                           1��ע��ģʽ��д1����һ��ע�����壬һ��ע��������Դ����������ע�� */
        unsigned int  crc_inject_mask : 1;  /* bit[1]    : �Ƿ����rec_mode�µ�д����ע����
                                                           0�� ������rec_mode��д����ע��
                                                           1�� ����rec_mode��д����ע�� */
        unsigned int  reserved_0      : 2;  /* bit[2-3]  : ������ */
        unsigned int  crc_inject_dm   : 1;  /* bit[4]    : ����ע�뵽DM�� */
        unsigned int  reserved_1      : 3;  /* bit[5-7]  : ������ */
        unsigned int  crc_inject_pat  : 8;  /* bit[8-15] : ע�����pattern������ͬʱע���bit���󣬵�ΪX4����ʱ����4bit�͵�4bit�ֱ�ע�뵽�ߵ�X4 */
        unsigned int  crc_inject_num  : 5;  /* bit[16-20]: ע�������� */
        unsigned int  reserved_2      : 11; /* bit[21-31]: ������ */
    } reg;
} SOC_MDDRC_DMC_DDRC_CFG_CRC_ERRINJ0_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CFG_CRC_ERRINJ0_crc_err_inj_START      (0)
#define SOC_MDDRC_DMC_DDRC_CFG_CRC_ERRINJ0_crc_err_inj_END        (0)
#define SOC_MDDRC_DMC_DDRC_CFG_CRC_ERRINJ0_crc_inject_mask_START  (1)
#define SOC_MDDRC_DMC_DDRC_CFG_CRC_ERRINJ0_crc_inject_mask_END    (1)
#define SOC_MDDRC_DMC_DDRC_CFG_CRC_ERRINJ0_crc_inject_dm_START    (4)
#define SOC_MDDRC_DMC_DDRC_CFG_CRC_ERRINJ0_crc_inject_dm_END      (4)
#define SOC_MDDRC_DMC_DDRC_CFG_CRC_ERRINJ0_crc_inject_pat_START   (8)
#define SOC_MDDRC_DMC_DDRC_CFG_CRC_ERRINJ0_crc_inject_pat_END     (15)
#define SOC_MDDRC_DMC_DDRC_CFG_CRC_ERRINJ0_crc_inject_num_START   (16)
#define SOC_MDDRC_DMC_DDRC_CFG_CRC_ERRINJ0_crc_inject_num_END     (20)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CFG_CRC_ERRINJ1_UNION
 �ṹ˵��  : DDRC_CFG_CRC_ERRINJ1 �Ĵ����ṹ���塣��ַƫ����:0x1A4����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_CFG_CRC_ERRINJ1
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  crc_inject_burst : 4;  /* bit[0-3]  : ����ע�뵽Burst�е�λ��
                                                            0-7�� Burst�ĵ�1��7���ֽ�
                                                            8�� Burst��CRCУ����λ��
                                                            9-15�������� */
        unsigned int  crc_inject_bl    : 18; /* bit[4-21] : ����ע���Bytelane�����Զ��Bytelaneͬʱע�� */
        unsigned int  reserved         : 10; /* bit[22-31]: ������ */
    } reg;
} SOC_MDDRC_DMC_DDRC_CFG_CRC_ERRINJ1_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CFG_CRC_ERRINJ1_crc_inject_burst_START  (0)
#define SOC_MDDRC_DMC_DDRC_CFG_CRC_ERRINJ1_crc_inject_burst_END    (3)
#define SOC_MDDRC_DMC_DDRC_CFG_CRC_ERRINJ1_crc_inject_bl_START     (4)
#define SOC_MDDRC_DMC_DDRC_CFG_CRC_ERRINJ1_crc_inject_bl_END       (21)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CFG_PAR_ERRINJ0_UNION
 �ṹ˵��  : DDRC_CFG_PAR_ERRINJ0 �Ĵ����ṹ���塣��ַƫ����:0x1A8����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_CFG_PAR_ERRINJ0
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  par_err_inj     : 1;  /* bit[0]    : PAR����ע��ģʽ��
                                                           0����������ģʽ��
                                                           1��ע��ģʽ��д1����һ��ע�����壬һ��������Դ����������ע�� */
        unsigned int  par_inject_mask : 1;  /* bit[1]    : �Ƿ����rec_mode�µ�ע����
                                                           0�� ������rec_mode�µľ�ע��
                                                           1�� ����rec_mode�µ�ע�� */
        unsigned int  reserved_0      : 2;  /* bit[2-3]  : ������ */
        unsigned int  par_inject_num  : 5;  /* bit[4-8]  : ����ע��������
                                                           0-31: N�� */
        unsigned int  reserved_1      : 3;  /* bit[9-11] : ������ */
        unsigned int  par_inject_cmd  : 8;  /* bit[12-19]: ����Щ���͵�����ע��
                                                           bit[19] 0: ��ʹ�ܶ�ZQ����ע�� 1��ʹ�ܶ�ZQ����ע��
                                                           bit[18] 0: ��ʹ�ܶ�Read����ע�� 1��ʹ�ܶ�Read����ע��
                                                           bit[17] 0: ��ʹ�ܶ�Write����ע�� 1��ʹ�ܶ�Write����ע��
                                                           bit[16] 0: ��ʹ�ܶ�ACT����ע�� 1��ʹ�ܶ�ACT����ע��
                                                           bit[15] 0: ��ʹ�ܶ�PRE/PREA����ע�� 1��ʹ�ܶ�PRE/PREA����ע��
                                                           bit[14] 0: ��ʹ�ܶ�SRE����ע�� 1��ʹ�ܶ�SRE����ע��
                                                           bit[13] 0: ��ʹ�ܶ�AREF����ע�� 1��ʹ�ܶ�AREF����ע��
                                                           bit[12] 0����ʹ�ܶ�MRS����ע�� 1��ʹ�ܶ�MRS����ע�� */
        unsigned int  reserved_2      : 12; /* bit[20-31]: ������ */
    } reg;
} SOC_MDDRC_DMC_DDRC_CFG_PAR_ERRINJ0_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CFG_PAR_ERRINJ0_par_err_inj_START      (0)
#define SOC_MDDRC_DMC_DDRC_CFG_PAR_ERRINJ0_par_err_inj_END        (0)
#define SOC_MDDRC_DMC_DDRC_CFG_PAR_ERRINJ0_par_inject_mask_START  (1)
#define SOC_MDDRC_DMC_DDRC_CFG_PAR_ERRINJ0_par_inject_mask_END    (1)
#define SOC_MDDRC_DMC_DDRC_CFG_PAR_ERRINJ0_par_inject_num_START   (4)
#define SOC_MDDRC_DMC_DDRC_CFG_PAR_ERRINJ0_par_inject_num_END     (8)
#define SOC_MDDRC_DMC_DDRC_CFG_PAR_ERRINJ0_par_inject_cmd_START   (12)
#define SOC_MDDRC_DMC_DDRC_CFG_PAR_ERRINJ0_par_inject_cmd_END     (19)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CFG_PAR_ERRINJ1_UNION
 �ṹ˵��  : DDRC_CFG_PAR_ERRINJ1 �Ĵ����ṹ���塣��ַƫ����:0x1AC����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_CFG_PAR_ERRINJ1
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  par_inject_pos : 6;  /* bit[0-5] : ����ע��λ��
                                                         0�� ����ע�뵽parity
                                                         1: ����ע�뵽act_n
                                                         2: ����ע�뵽ras_n
                                                         3: ����ע�뵽cas_n
                                                         4: ����ע�뵽we_n
                                                         8:5 ע�뵽Bank ������bank����λ�������
                                                         10:9 ע�뵽Bank group (����Bank�� Bank Group����λ�������
                                                         28:11 ע�뵽addr������Bank, Bank Group, Addr����λ������� */
        unsigned int  reserved       : 26; /* bit[6-31]: ������ */
    } reg;
} SOC_MDDRC_DMC_DDRC_CFG_PAR_ERRINJ1_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CFG_PAR_ERRINJ1_par_inject_pos_START  (0)
#define SOC_MDDRC_DMC_DDRC_CFG_PAR_ERRINJ1_par_inject_pos_END    (5)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CFG_DDRPHY_UNION
 �ṹ˵��  : DDRC_CFG_DDRPHY �Ĵ����ṹ���塣��ַƫ����:0x200����ֵ:0x001F1000�����:32
 �Ĵ���˵��: DDRC_CFG_DDRIO��DDR IO���üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  rcv_pdr     : 1;  /* bit[0]    : DDR����IO��̬Power Down����ʹ�ܡ�ʹ��ʱDDRC���ڷǶ�״̬�ض�DDR����IO�Ľ���Buffer��
                                                       1��ʹ�ܣ�
                                                       0����ֹ��
                                                       ��Ҫ��trdlat���ʹ�� */
        unsigned int  reserved_0  : 3;  /* bit[1-3]  : ������ */
        unsigned int  phy_zqen    : 1;  /* bit[4]    : ����������DDRPHY dfi_ctrlupd_req��
                                                       0����ֹ��
                                                       1��ʹ�ܡ� */
        unsigned int  reserved_1  : 3;  /* bit[5-7]  : ������ */
        unsigned int  trdlat      : 4;  /* bit[8-11] : DDRPHY�����ӳ١�
                                                       0x0��0xF��n+1�����ڡ�
                                                       ʹ��synopsys3/2phyʱ��Ҫ����Ϊ8�� */
        unsigned int  phy_upden   : 1;  /* bit[12]   : ��������ӦDDRPHY����dfi_phyupd_en��
                                                       0����ֹ��
                                                       1��ʹ�ܡ� */
        unsigned int  reserved_2  : 3;  /* bit[13-15]: ������ */
        unsigned int  wr_busy_dly : 5;  /* bit[16-20]: PHY�ڲ��������ݴ��ĵ��ſ��źš�
                                                       �������ô���WL+2��
                                                       �Թ��Ĳ����еĳ�����������Ϊ0x1F�� */
        unsigned int  reserved_3  : 11; /* bit[21-31]: ������ */
    } reg;
} SOC_MDDRC_DMC_DDRC_CFG_DDRPHY_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CFG_DDRPHY_rcv_pdr_START      (0)
#define SOC_MDDRC_DMC_DDRC_CFG_DDRPHY_rcv_pdr_END        (0)
#define SOC_MDDRC_DMC_DDRC_CFG_DDRPHY_phy_zqen_START     (4)
#define SOC_MDDRC_DMC_DDRC_CFG_DDRPHY_phy_zqen_END       (4)
#define SOC_MDDRC_DMC_DDRC_CFG_DDRPHY_trdlat_START       (8)
#define SOC_MDDRC_DMC_DDRC_CFG_DDRPHY_trdlat_END         (11)
#define SOC_MDDRC_DMC_DDRC_CFG_DDRPHY_phy_upden_START    (12)
#define SOC_MDDRC_DMC_DDRC_CFG_DDRPHY_phy_upden_END      (12)
#define SOC_MDDRC_DMC_DDRC_CFG_DDRPHY_wr_busy_dly_START  (16)
#define SOC_MDDRC_DMC_DDRC_CFG_DDRPHY_wr_busy_dly_END    (20)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CFG_SFC_TIM_UNION
 �ṹ˵��  : DDRC_CFG_SFC_TIM �Ĵ����ṹ���塣��ַƫ����:0x20C����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_CFG_SFC_TIM��DDRC�������DDR�����ʱ��Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  wait_time : 16; /* bit[0-15] : ��ִ����SFC���õ�DDR�����Ժ󣬵ȴ���ʱ�䡣��DDRC_CFG_SFC[wait_en]Ϊ1ʱ��Ч�� */
        unsigned int  reserved  : 16; /* bit[16-31]: ������ */
    } reg;
} SOC_MDDRC_DMC_DDRC_CFG_SFC_TIM_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CFG_SFC_TIM_wait_time_START  (0)
#define SOC_MDDRC_DMC_DDRC_CFG_SFC_TIM_wait_time_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CFG_SFC_UNION
 �ṹ˵��  : DDRC_CFG_SFC �Ĵ����ṹ���塣��ַƫ����:0x210����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_CTRL_SFC��DDRC�������DDR�����������
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cmd_type : 4;  /* bit[0-3]  : DDR�������á�
                                                    0000��Deep Power Down ���룻
                                                    0001��Deep Power Down �˳���
                                                    0010��Load Mode Reigser��LMR�����
                                                    0011��ZQCL �����LPDDRXģʽ�£�����ͨ��cmd_mrs������ZQ�����ͣ�0xFF��ʾZQINIT��0x56��ʾZQCS��0xC3��ʾZQRESET������ֵ��ʾZQCL��
                                                    0100��WRITE ���
                                                    0101��READ ���
                                                    0110��PRECHARGE ALL���
                                                    0111��READ MRS���
                                                    1000��AREF ���
                                                    1001��SELF REFRESH���룻
                                                    1010��SELF REFRESH�˳���
                                                    1011��DDR4 PDA������ʹ�����ʱ����ر�data scrambling���ܣ�
                                                    1111��DFI_CTRL_UPD_REQ/ACK���֣�����PHY����ˢ��ģʽ�� */
        unsigned int  cmd_ma   : 8;  /* bit[4-11] : ��LPDDRģʽ�£�����LMR����ʱ������ָʾ��Ҫ���õ�ģʽ�Ĵ�����ַ�� */
        unsigned int  cmd_mrs  : 18; /* bit[12-29]: ����LMR����ʱ��DDRģʽ�Ĵ�������ֵ����LP DDR2��8bit��Ч��
                                                    ��RDMRS����RD����ʱ������������Ҫ���ص����������� */
        unsigned int  pre_dis  : 1;  /* bit[30]   : ��ֹ����PRECHARGE���
                                                    0����ÿ��SFC����֮ǰ����precharge��
                                                    1����ÿ��SFC����֮ǰ������precharge��ֱ�ӷ��Ͷ�Ӧ����� */
        unsigned int  wait_en  : 1;  /* bit[31]   : ��ִ���������Ժ�ȴ�һ��ʱ�����˳���
                                                    0����ֹ��
                                                    1��ʹ�ܡ�
                                                    �ȴ���ʱ����DDRC_CFG_SFC_TIM�Ĵ������á� */
    } reg;
} SOC_MDDRC_DMC_DDRC_CFG_SFC_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CFG_SFC_cmd_type_START  (0)
#define SOC_MDDRC_DMC_DDRC_CFG_SFC_cmd_type_END    (3)
#define SOC_MDDRC_DMC_DDRC_CFG_SFC_cmd_ma_START    (4)
#define SOC_MDDRC_DMC_DDRC_CFG_SFC_cmd_ma_END      (11)
#define SOC_MDDRC_DMC_DDRC_CFG_SFC_cmd_mrs_START   (12)
#define SOC_MDDRC_DMC_DDRC_CFG_SFC_cmd_mrs_END     (29)
#define SOC_MDDRC_DMC_DDRC_CFG_SFC_pre_dis_START   (30)
#define SOC_MDDRC_DMC_DDRC_CFG_SFC_pre_dis_END     (30)
#define SOC_MDDRC_DMC_DDRC_CFG_SFC_wait_en_START   (31)
#define SOC_MDDRC_DMC_DDRC_CFG_SFC_wait_en_END     (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CFG_SFC_ADDR0_UNION
 �ṹ˵��  : DDRC_CFG_SFC_ADDR0 �Ĵ����ṹ���塣��ַƫ����:0x214����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_CFG_SFC_ADDR0��SFC��дmemory��ַ���üĴ���0
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sfc_col : 12; /* bit[0-11] : SFC��д����memory���е�ַ��
                                                   ע��DDRC�ķ������ݵ�ַ��Ҫ�뵱ǰDMC��λ����룬����ĿǰDMCλ��Ϊ128bit��
                                                   ���64/72bitDDR.DMC�����е�ַ����{sfc_col[15:1],1'b0}���з���
                                                   ���32/36bitDDR.DMC�����е�ַ����{sfc_col[15:2],2'b0}���з���
                                                   
                                                   ע�⣺����DDR4��������2bit����ѡ��MPR�����ĸ�Page��
                                                   
                                                   Sfc_col[1:0] = 2'b00, ѡ��page0;
                                                   Sfc_col[1:0] = 2'b01, ѡ��page1;
                                                   Sfc_col[1:0] = 2'b10, ѡ��page2;
                                                   Sfc_col[1:0] = 2'b11, ѡ��page3; */
        unsigned int  sfc_row : 20; /* bit[12-31]: SFC��д����memory���е�ַ��
                                                   ����ַλ�����ø�ʵ�����ӵ���������й�ϵ��
                                                   
                                                   ע�⣺����DDR4��˵��sfc_row[12:11]���ڿ���MPR Read format.
                                                   
                                                   Sfc_row[12:11]=2'b00: Serial;
                                                   Sfc_row[12:11]=2'b01: Parallel;
                                                   Sfc_row[12:11]=2'b10: Staggered;
                                                   Sfc_row[12:11]=2'b11: RFU; */
    } reg;
} SOC_MDDRC_DMC_DDRC_CFG_SFC_ADDR0_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CFG_SFC_ADDR0_sfc_col_START  (0)
#define SOC_MDDRC_DMC_DDRC_CFG_SFC_ADDR0_sfc_col_END    (11)
#define SOC_MDDRC_DMC_DDRC_CFG_SFC_ADDR0_sfc_row_START  (12)
#define SOC_MDDRC_DMC_DDRC_CFG_SFC_ADDR0_sfc_row_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CFG_SFC_ADDR1_UNION
 �ṹ˵��  : DDRC_CFG_SFC_ADDR1 �Ĵ����ṹ���塣��ַƫ����:0x218����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_CFG_SFC_ADDR1��SFC��дmemory��ַ���üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sfc_bank : 4;  /* bit[0-3]  : SFC��д����memory��bank��ַ��
                                                    
                                                    ע�⣺����DDR4��˵����λ��ʾbank group.�������4��bank group����������sfc_bank[1:0]��ʾbank group������2��bank group����������sfc_bank[0]��ʾbank group��ַ�� */
        unsigned int  reserved : 12; /* bit[4-15] : ������ */
        unsigned int  sfc_rank : 16; /* bit[16-31]: ִ�������DDR RANK��
                                                    0����ִ���������
                                                    1��ִ���������
                                                    ע�⣺ÿ���ض�Ӧһ��RANK�Ŀ��ơ����磬cmd_rank[0]����DDR RANK0 */
    } reg;
} SOC_MDDRC_DMC_DDRC_CFG_SFC_ADDR1_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CFG_SFC_ADDR1_sfc_bank_START  (0)
#define SOC_MDDRC_DMC_DDRC_CFG_SFC_ADDR1_sfc_bank_END    (3)
#define SOC_MDDRC_DMC_DDRC_CFG_SFC_ADDR1_sfc_rank_START  (16)
#define SOC_MDDRC_DMC_DDRC_CFG_SFC_ADDR1_sfc_rank_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CFG_SFC_WDATA0_UNION
 �ṹ˵��  : DDRC_CFG_SFC_WDATA0 �Ĵ����ṹ���塣��ַƫ����:0x21C����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_CFG_SFC_WDATA0��SFCд�������üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  wdata0 : 32; /* bit[0-31]: SFCд����[31:0]�� */
    } reg;
} SOC_MDDRC_DMC_DDRC_CFG_SFC_WDATA0_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CFG_SFC_WDATA0_wdata0_START  (0)
#define SOC_MDDRC_DMC_DDRC_CFG_SFC_WDATA0_wdata0_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CFG_SFC_WDATA1_UNION
 �ṹ˵��  : DDRC_CFG_SFC_WDATA1 �Ĵ����ṹ���塣��ַƫ����:0x220����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_CFG_SFC_WDATA1��SFCд�������üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  wdata1 : 32; /* bit[0-31]: SFCд����[63:32]�� */
    } reg;
} SOC_MDDRC_DMC_DDRC_CFG_SFC_WDATA1_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CFG_SFC_WDATA1_wdata1_START  (0)
#define SOC_MDDRC_DMC_DDRC_CFG_SFC_WDATA1_wdata1_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CFG_SFC_WDATA2_UNION
 �ṹ˵��  : DDRC_CFG_SFC_WDATA2 �Ĵ����ṹ���塣��ַƫ����:0x224����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_CFG_SFC_WDATA2��SFCд�������üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  wdata2 : 32; /* bit[0-31]: SFCд����[95:64]�� */
    } reg;
} SOC_MDDRC_DMC_DDRC_CFG_SFC_WDATA2_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CFG_SFC_WDATA2_wdata2_START  (0)
#define SOC_MDDRC_DMC_DDRC_CFG_SFC_WDATA2_wdata2_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CFG_SFC_WDATA3_UNION
 �ṹ˵��  : DDRC_CFG_SFC_WDATA3 �Ĵ����ṹ���塣��ַƫ����:0x228����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_CFG_SFC_WDATA3��SFCд�������üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  wdata3 : 32; /* bit[0-31]: SFCд����[127:96]�� */
    } reg;
} SOC_MDDRC_DMC_DDRC_CFG_SFC_WDATA3_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CFG_SFC_WDATA3_wdata3_START  (0)
#define SOC_MDDRC_DMC_DDRC_CFG_SFC_WDATA3_wdata3_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CFG_SFC_WDATA4_UNION
 �ṹ˵��  : DDRC_CFG_SFC_WDATA4 �Ĵ����ṹ���塣��ַƫ����:0x22C����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_CFG_SFC_WDATA4��SFCд�������üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  wdata4 : 32; /* bit[0-31]: SFCд����[159:128]�� */
    } reg;
} SOC_MDDRC_DMC_DDRC_CFG_SFC_WDATA4_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CFG_SFC_WDATA4_wdata4_START  (0)
#define SOC_MDDRC_DMC_DDRC_CFG_SFC_WDATA4_wdata4_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CFG_SFC_WDATA5_UNION
 �ṹ˵��  : DDRC_CFG_SFC_WDATA5 �Ĵ����ṹ���塣��ַƫ����:0x230����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_CFG_SFC_WDATA5��SFCд�������üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  wdata5 : 32; /* bit[0-31]: SFCд����[191:160]�� */
    } reg;
} SOC_MDDRC_DMC_DDRC_CFG_SFC_WDATA5_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CFG_SFC_WDATA5_wdata5_START  (0)
#define SOC_MDDRC_DMC_DDRC_CFG_SFC_WDATA5_wdata5_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CFG_SFC_WDATA6_UNION
 �ṹ˵��  : DDRC_CFG_SFC_WDATA6 �Ĵ����ṹ���塣��ַƫ����:0x234����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_CFG_SFC_WDATA6��SFCд�������üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  wdata6 : 32; /* bit[0-31]: SFCд����[223:192]�� */
    } reg;
} SOC_MDDRC_DMC_DDRC_CFG_SFC_WDATA6_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CFG_SFC_WDATA6_wdata6_START  (0)
#define SOC_MDDRC_DMC_DDRC_CFG_SFC_WDATA6_wdata6_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CFG_SFC_WDATA7_UNION
 �ṹ˵��  : DDRC_CFG_SFC_WDATA7 �Ĵ����ṹ���塣��ַƫ����:0x238����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_CFG_SFC_WDATA7��SFCд�������üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  wdata7 : 32; /* bit[0-31]: SFCд����[255:224]�� */
    } reg;
} SOC_MDDRC_DMC_DDRC_CFG_SFC_WDATA7_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CFG_SFC_WDATA7_wdata7_START  (0)
#define SOC_MDDRC_DMC_DDRC_CFG_SFC_WDATA7_wdata7_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CFG_SFC_WDATA_ECC_UNION
 �ṹ˵��  : DDRC_CFG_SFC_WDATA_ECC �Ĵ����ṹ���塣��ַƫ����:0x23C����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_CFG_SFC_WDATA_ECC��SFCдECC�������üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  wdata_ecc0 : 8;  /* bit[0-7]  : SFCд����[63:0]��8bit ECC���ݡ� */
        unsigned int  wdata_ecc1 : 8;  /* bit[8-15] : SFCд����[127:64]��8bit ECC���ݡ� */
        unsigned int  wdata_ecc2 : 8;  /* bit[16-23]: SFCд����[191:128]��8bit ECC���ݡ� */
        unsigned int  wdata_ecc3 : 8;  /* bit[24-31]: SFCд����[255:192]��8bit ECC���ݡ� */
    } reg;
} SOC_MDDRC_DMC_DDRC_CFG_SFC_WDATA_ECC_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CFG_SFC_WDATA_ECC_wdata_ecc0_START  (0)
#define SOC_MDDRC_DMC_DDRC_CFG_SFC_WDATA_ECC_wdata_ecc0_END    (7)
#define SOC_MDDRC_DMC_DDRC_CFG_SFC_WDATA_ECC_wdata_ecc1_START  (8)
#define SOC_MDDRC_DMC_DDRC_CFG_SFC_WDATA_ECC_wdata_ecc1_END    (15)
#define SOC_MDDRC_DMC_DDRC_CFG_SFC_WDATA_ECC_wdata_ecc2_START  (16)
#define SOC_MDDRC_DMC_DDRC_CFG_SFC_WDATA_ECC_wdata_ecc2_END    (23)
#define SOC_MDDRC_DMC_DDRC_CFG_SFC_WDATA_ECC_wdata_ecc3_START  (24)
#define SOC_MDDRC_DMC_DDRC_CFG_SFC_WDATA_ECC_wdata_ecc3_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CFG_TMON_UNION
 �ṹ˵��  : DDRC_CFG_TMON �Ĵ����ṹ���塣��ַƫ����:0x240����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_CFG_TMON��LPDDR2/LPDDR3�����¶ȼ���������üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  tmon_prd : 32; /* bit[0-31]: ��ȡ�����¶ȵ����ڡ�
                                                   0x0����ֹѭ����ȡ�����¶ȣ�
                                                   0x1~0xffffffff����n x 1024cycleΪ���ڶ�ȡ�����¶ȣ�ÿ�ζ�ȡһ��RANK�� */
    } reg;
} SOC_MDDRC_DMC_DDRC_CFG_TMON_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CFG_TMON_tmon_prd_START  (0)
#define SOC_MDDRC_DMC_DDRC_CFG_TMON_tmon_prd_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CFG_TMON_RANK_UNION
 �ṹ˵��  : DDRC_CFG_TMON_RANK �Ĵ����ṹ���塣��ַƫ����:0x244����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_CFG_TMON��LPDDR2/LPDDR3�����¶ȼ��RANK���üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  tmon_rank : 16; /* bit[0-15] : ��ȡ��ӦRANK���¶ȡ�
                                                     ÿ��bit��Ӧһ��RANK�� */
        unsigned int  reserved  : 16; /* bit[16-31]: ������ */
    } reg;
} SOC_MDDRC_DMC_DDRC_CFG_TMON_RANK_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CFG_TMON_RANK_tmon_rank_START  (0)
#define SOC_MDDRC_DMC_DDRC_CFG_TMON_RANK_tmon_rank_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CFG_TMON_AREF_UNION
 �ṹ˵��  : DDRC_CFG_TMON_AREF �Ĵ����ṹ���塣��ַƫ����:0x248����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_CFG_TMON��LPDDR2/LPDDR3�����¶ȼ��ˢ�����üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  aref_rate : 32; /* bit[0-31]: ÿ��RANK��Ӧ��AREF���ڡ�
                                                    00��1xtREFI
                                                    01��2xtREFI
                                                    10��4xtREFI
                                                    11������
                                                    ÿ2bit��Ӧһ��RANK�� */
    } reg;
} SOC_MDDRC_DMC_DDRC_CFG_TMON_AREF_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CFG_TMON_AREF_aref_rate_START  (0)
#define SOC_MDDRC_DMC_DDRC_CFG_TMON_AREF_aref_rate_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CFG_MRR_MAP_UNION
 �ṹ˵��  : DDRC_CFG_MRR_MAP �Ĵ����ṹ���塣��ַƫ����:0x250����ֵ:0x00FAC688�����:32
 �Ĵ���˵��: DDRC_CFG_MRR_MAP�ǵ���������ӳ�����üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mrr_map  : 24; /* bit[0-23] : ģʽ�Ĵ���BYTE0��Ӧ������bitλ�á�
                                                    Bit[2:0]��ӦPHY DQ[0]��
                                                    000��PHY���ӵ�DQ[0]��ӦDDR DQ[0]
                                                    001��PHY���ӵ�DQ[0]��ӦDDR DQ[1]
                                                    ��
                                                    111��PHY���ӵ�DQ[0]��ӦDDR DQ[7]
                                                    Bit[5:3]��ӦPHY DQ[1]��
                                                    ��
                                                    Bit[23:21]��ӦPHY DQ[7]�� */
        unsigned int  mrr_byte : 5;  /* bit[24-28]: ģʽ�Ĵ���BYTE0��Ӧ������byteλ�á�
                                                    Ĭ��BYTE0�Ƕ�Ӧ����������BYTE0��������������BYTE�����ʱ����Ҫ����ӳ�䡣
                                                    ע�⣺������������BYTE0����DQ�ǲ��ܻ����ġ� */
        unsigned int  reserved : 3;  /* bit[29-31]:  */
    } reg;
} SOC_MDDRC_DMC_DDRC_CFG_MRR_MAP_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CFG_MRR_MAP_mrr_map_START   (0)
#define SOC_MDDRC_DMC_DDRC_CFG_MRR_MAP_mrr_map_END     (23)
#define SOC_MDDRC_DMC_DDRC_CFG_MRR_MAP_mrr_byte_START  (24)
#define SOC_MDDRC_DMC_DDRC_CFG_MRR_MAP_mrr_byte_END    (28)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CFG_STACMD_UNION
 �ṹ˵��  : DDRC_CFG_STACMD �Ĵ����ṹ���塣��ַƫ����:0x260����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_CFG_STACMD��DDRC����ͳ��ʹ�ܼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  load_stat_prd  : 28; /* bit[0-27] : ����ͳ�����ڡ�
                                                          0x0~0x1����Ч���á�
                                                          0x2��0xFFFFFFF��ͳ�����ڡ�
                                                          ʵ��ͳ������Ϊload_stat_prd*16*tclk��TclkΪDDRC����ʱ�����ڣ���
                                                          ע�⣺������ֻ��load_stat_mode=2'b01��2'b10ʱ��Ч����load_stat_mode=0������ͳ��ģʽ�£�����ͳ����ؼ�������һֱ������ */
        unsigned int  load_stat_mode : 2;  /* bit[28-29]: ����ͳ��ģʽ��
                                                          2'b00����������ģʽ������ͳ����ؼ����������������ɱ�֤����ͳ��ģʽ�£�1s��ͳ�Ʋ������1GHZMHz����
                                                          2'b01�����δ���ģʽ������ͳ��ʱ�����perf_prd��ͳ�ƽ�����֣���ֹͣͳ�ơ�ͳ�����ڵ����ϱ��жϡ�
                                                          2'b10�����ڷ�ֵ��������ͳ�����ڵ��������ڹ涨�ķ�ֵ��Χ�ڣ����ϱ��жϣ�ͬʱ��������һ��ͳ�ƣ�ֱ�������涨�ķ�ֵ��Χ�����ϱ��жϡ�������ֵ��Χ��ֹͣ������
                                                          ע�⣺��ͳ��ֵ����󱣳֡� */
        unsigned int  load_stat_en   : 1;  /* bit[30]   : ddr����ͳ��ʹ�ܡ�
                                                          1��ʹ�ܣ�
                                                          0����ֹ��
                                                           ע�⣺��stat_mode=0ʱ����λʹ�ܱ�ʾ����ͳ�ƼĴ�������ʼѭ����������load_stat_mode=1ʱ�����һ��ͳ��֮�󣬸�λ�Զ����� */
        unsigned int  reserved       : 1;  /* bit[31]   : ������ */
    } reg;
} SOC_MDDRC_DMC_DDRC_CFG_STACMD_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CFG_STACMD_load_stat_prd_START   (0)
#define SOC_MDDRC_DMC_DDRC_CFG_STACMD_load_stat_prd_END     (27)
#define SOC_MDDRC_DMC_DDRC_CFG_STACMD_load_stat_mode_START  (28)
#define SOC_MDDRC_DMC_DDRC_CFG_STACMD_load_stat_mode_END    (29)
#define SOC_MDDRC_DMC_DDRC_CFG_STACMD_load_stat_en_START    (30)
#define SOC_MDDRC_DMC_DDRC_CFG_STACMD_load_stat_en_END      (30)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CFG_CMDMIN_UNION
 �ṹ˵��  : DDRC_CFG_CMDMIN �Ĵ����ṹ���塣��ַƫ����:0x264����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_CFG_CMDMIN��DMC�����������С��ֵ�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  dmc_cmd_min : 28; /* bit[0-27] : ����ͳ�Ʒ�ֵ�Ĵ�����������С�ڻ���ڸ÷�ֵʱ���ϱ��жϡ�
                                                       
                                                       ע�⣺���﷧ֵ��32Ϊ��λ�����������Ϊn�������շ�ֵΪn*32. */
        unsigned int  reserved    : 4;  /* bit[28-31]: ������ */
    } reg;
} SOC_MDDRC_DMC_DDRC_CFG_CMDMIN_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CFG_CMDMIN_dmc_cmd_min_START  (0)
#define SOC_MDDRC_DMC_DDRC_CFG_CMDMIN_dmc_cmd_min_END    (27)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CFG_CMDMAX_UNION
 �ṹ˵��  : DDRC_CFG_CMDMAX �Ĵ����ṹ���塣��ַƫ����:0x268����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_CFG_CMDMAX��DMC������������ֵ�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  dmc_cmd_max : 28; /* bit[0-27] : ����ͳ�Ʒ�ֵ�Ĵ������������ڴ��ڻ���ڸ÷�ֵʱ���ϱ��жϡ�
                                                       
                                                       ע�⣺���﷧ֵ��32Ϊ��λ�����������Ϊn�������շ�ֵΪn*32. */
        unsigned int  reserved    : 4;  /* bit[28-31]: ������ */
    } reg;
} SOC_MDDRC_DMC_DDRC_CFG_CMDMAX_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CFG_CMDMAX_dmc_cmd_max_START  (0)
#define SOC_MDDRC_DMC_DDRC_CFG_CMDMAX_dmc_cmd_max_END    (27)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CFG_PERF_UNION
 �ṹ˵��  : DDRC_CFG_PERF �Ĵ����ṹ���塣��ַƫ����:0x270����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_CFG_PERF��DDR����ͳ�Ƶ�ģʽ���üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  perf_prd  : 28; /* bit[0-27] : ����ͳ�����ڡ�
                                                     0x0~0x1����Ч���á�
                                                     0x2��0xFFFFFFF��ͳ�����ڡ�
                                                     ʵ��ͳ������Ϊperf_prd*16*tclk��TclkΪDDRC����ʱ�����ڣ���
                                                     ע�⣺������ֻ��perf_mode=1ʱ��Ч����perf_mode=0������ͳ��ģʽ�£�����ͳ����ؼ�������һֱ������ */
        unsigned int  perf_mode : 1;  /* bit[28]   : ����ͳ��ģʽ��
                                                     0����������ģʽ������ͳ����ؼ����������������ɱ�֤������ͳ��ģʽ�£�1s��ͳ�Ʋ������1GHZMHz����
                                                     1�����δ���ģʽ������ͳ��ʱ�����perf_prd��ͳ�ƽ�����֣���ֹͣͳ�ơ�
                                                     ע�⣺��ͳ��ֵ����󱣳֡� */
        unsigned int  flux_en   : 1;  /* bit[29]   : DMC�������ʹ�ܡ�
                                                     0���������رա�
                                                     1���������ʹ�ܡ�
                                                     ʹ���������ʱ��ͳ��ģ��ὫDDR�ӿ�ռ�õ���������ID�ŷ�����������˿ڡ���϶˿ڵ��������ÿ��Խ����������ơ� */
        unsigned int  reserved  : 2;  /* bit[30-31]: ������ */
    } reg;
} SOC_MDDRC_DMC_DDRC_CFG_PERF_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CFG_PERF_perf_prd_START   (0)
#define SOC_MDDRC_DMC_DDRC_CFG_PERF_perf_prd_END     (27)
#define SOC_MDDRC_DMC_DDRC_CFG_PERF_perf_mode_START  (28)
#define SOC_MDDRC_DMC_DDRC_CFG_PERF_perf_mode_END    (28)
#define SOC_MDDRC_DMC_DDRC_CFG_PERF_flux_en_START    (29)
#define SOC_MDDRC_DMC_DDRC_CFG_PERF_flux_en_END      (29)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CFG_STAID_UNION
 �ṹ˵��  : DDRC_CFG_STAID �Ĵ����ṹ���塣��ַƫ����:0x274����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_CFG_STAID��DDR����ͳ�Ƶ�����ID���üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sta_id   : 21; /* bit[0-20] : ���ö�ָ����ID����������ͳ�ơ���sta_idmask���ʹ�á� */
        unsigned int  reserved : 11; /* bit[21-31]: ������ */
    } reg;
} SOC_MDDRC_DMC_DDRC_CFG_STAID_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CFG_STAID_sta_id_START    (0)
#define SOC_MDDRC_DMC_DDRC_CFG_STAID_sta_id_END      (20)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CFG_STAIDMSK_UNION
 �ṹ˵��  : DDRC_CFG_STAIDMSK �Ĵ����ṹ���塣��ַƫ����:0x278����ֵ:0x000FFFFF�����:32
 �Ĵ���˵��: DDRC_CFG_STAID��DDR����ͳ�Ƶ�����ID MASK���üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sta_idmask : 21; /* bit[0-20] : ���ö�ָ����ID�����źš�
                                                      DDRC�е�����ͳ����ؼĴ����������ض�ID���������ͳ�ơ�Cmd_id&amp;sta_idmask=sta_id�� */
        unsigned int  reserved   : 11; /* bit[21-31]: ������ */
    } reg;
} SOC_MDDRC_DMC_DDRC_CFG_STAIDMSK_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CFG_STAIDMSK_sta_idmask_START  (0)
#define SOC_MDDRC_DMC_DDRC_CFG_STAIDMSK_sta_idmask_END    (20)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_INTMSK_UNION
 �ṹ˵��  : DDRC_INTMSK �Ĵ����ṹ���塣��ַƫ����:0x280����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_INTMSK��DDRC�ж����μĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  serr_int_mask        : 1;  /* bit[0]    : DDR ECC���ȴ������ж�����ʹ�ܡ�
                                                                1�������жϣ�
                                                                0��ʹ���жϡ� */
        unsigned int  flux_int_mask        : 1;  /* bit[1]    : DDR FLUXͳ�����ڵ����ж�����ʹ��
                                                                1�������жϣ�
                                                                0��ʹ���жϣ� */
        unsigned int  rec_int_mask         : 1;  /* bit[2]    : DDR REC����ָ�����ж�����ʹ��
                                                                1�������жϣ�
                                                                0��ʹ���жϡ� */
        unsigned int  rec_err_int_mask     : 1;  /* bit[3]    : DDR REC�쳣�ж�����ʹ��
                                                                1�������жϣ�
                                                                0��ʹ���жϡ� */
        unsigned int  merr_int_mask        : 1;  /* bit[4]    : DDR ECC����ش����ж�����ʹ�ܡ�
                                                                1�������жϣ�
                                                                0��ʹ���жϡ� */
        unsigned int  sref_err_int_mask    : 1;  /* bit[5]    : DDR ��ˢ��ʱ�ӿ���������ʴ���
                                                                1�������жϣ�
                                                                0��ʹ���жϡ� */
        unsigned int  tmon_err_int_mask    : 1;  /* bit[6]    : LP DDR �����¶���ѯ�쳣�ж�����ʹ�ܡ�
                                                                1�������жϣ�
                                                                0��ʹ���жϡ� */
        unsigned int  tmon_upd_int_mask    : 1;  /* bit[7]    : LP DDR �����¶���ѯ�����ж�����ʹ�ܡ�
                                                                1�������жϣ�
                                                                0��ʹ���жϡ� */
        unsigned int  dimm_parity_int_mask : 1;  /* bit[8]    : DDR DIMM��żУ������ж�����ʹ�ܡ�
                                                                1�������жϣ�
                                                                0��ʹ���жϡ� */
        unsigned int  load_int_mask        : 1;  /* bit[9]    : DDR LOADͳ�����ڵ����жϱ�ʹ��
                                                                1�������жϣ�
                                                                0��ʹ���жϣ� */
        unsigned int  dat_min_int_mask     : 1;  /* bit[10]   : ����ͳ�������ж�
                                                                1�������жϣ�
                                                                0��ʹ���жϣ� */
        unsigned int  dat_max_int_mask     : 1;  /* bit[11]   : ����ͳ�������ж�
                                                                1�������жϣ�
                                                                0��ʹ���жϣ� */
        unsigned int  rdtimeout_int_mask   : 1;  /* bit[12]   : DDRPHY �����ݳ�ʱ�ж�����ʹ�ܡ�
                                                                1�������жϣ�
                                                                0��ʹ���жϡ� */
        unsigned int  reserved_0           : 3;  /* bit[13-15]: ������ */
        unsigned int  aref_alarm_int_mask  : 1;  /* bit[16]   : DDR AREF��������ж�����ʹ�ܡ�
                                                                1�������жϣ�
                                                                0��ʹ���жϡ� */
        unsigned int  reserved_1           : 3;  /* bit[17-19]: ������ */
        unsigned int  sbram_serr_int_mask  : 1;  /* bit[20]   : SBRAM�����ش����ж�����ʹ�ܡ�
                                                                1�������жϣ�
                                                                0��ʹ���жϡ� */
        unsigned int  reserved_2           : 3;  /* bit[21-23]: ������ */
        unsigned int  sbram_merr_int_mask  : 1;  /* bit[24]   : SBRAM����ش����ж�����ʹ�ܡ�
                                                                1�������жϣ�
                                                                0��ʹ���жϡ� */
        unsigned int  reserved_3           : 3;  /* bit[25-27]: ������ */
        unsigned int  rpram_serr_int_mask  : 1;  /* bit[28]   : RPRAM�����ش����ж�����ʹ�ܡ�
                                                                1�������жϣ�
                                                                0��ʹ���жϡ� */
        unsigned int  recram_serr_int_mask : 1;  /* bit[29]   : RECRAM�����ش����ж�����ʹ�ܡ�
                                                                1�������жϣ�
                                                                0��ʹ���жϡ� */
        unsigned int  recram_merr_int_mask : 1;  /* bit[30]   : RECRAM����ش����ж�����ʹ�ܡ�
                                                                1�������жϣ�
                                                                0��ʹ���жϡ� */
        unsigned int  rpram_merr_int_mask  : 1;  /* bit[31]   : RPRAM����ش����ж�����ʹ�ܡ�
                                                                1�������жϣ�
                                                                0��ʹ���жϡ� */
    } reg;
} SOC_MDDRC_DMC_DDRC_INTMSK_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_INTMSK_serr_int_mask_START         (0)
#define SOC_MDDRC_DMC_DDRC_INTMSK_serr_int_mask_END           (0)
#define SOC_MDDRC_DMC_DDRC_INTMSK_flux_int_mask_START         (1)
#define SOC_MDDRC_DMC_DDRC_INTMSK_flux_int_mask_END           (1)
#define SOC_MDDRC_DMC_DDRC_INTMSK_rec_int_mask_START          (2)
#define SOC_MDDRC_DMC_DDRC_INTMSK_rec_int_mask_END            (2)
#define SOC_MDDRC_DMC_DDRC_INTMSK_rec_err_int_mask_START      (3)
#define SOC_MDDRC_DMC_DDRC_INTMSK_rec_err_int_mask_END        (3)
#define SOC_MDDRC_DMC_DDRC_INTMSK_merr_int_mask_START         (4)
#define SOC_MDDRC_DMC_DDRC_INTMSK_merr_int_mask_END           (4)
#define SOC_MDDRC_DMC_DDRC_INTMSK_sref_err_int_mask_START     (5)
#define SOC_MDDRC_DMC_DDRC_INTMSK_sref_err_int_mask_END       (5)
#define SOC_MDDRC_DMC_DDRC_INTMSK_tmon_err_int_mask_START     (6)
#define SOC_MDDRC_DMC_DDRC_INTMSK_tmon_err_int_mask_END       (6)
#define SOC_MDDRC_DMC_DDRC_INTMSK_tmon_upd_int_mask_START     (7)
#define SOC_MDDRC_DMC_DDRC_INTMSK_tmon_upd_int_mask_END       (7)
#define SOC_MDDRC_DMC_DDRC_INTMSK_dimm_parity_int_mask_START  (8)
#define SOC_MDDRC_DMC_DDRC_INTMSK_dimm_parity_int_mask_END    (8)
#define SOC_MDDRC_DMC_DDRC_INTMSK_load_int_mask_START         (9)
#define SOC_MDDRC_DMC_DDRC_INTMSK_load_int_mask_END           (9)
#define SOC_MDDRC_DMC_DDRC_INTMSK_dat_min_int_mask_START      (10)
#define SOC_MDDRC_DMC_DDRC_INTMSK_dat_min_int_mask_END        (10)
#define SOC_MDDRC_DMC_DDRC_INTMSK_dat_max_int_mask_START      (11)
#define SOC_MDDRC_DMC_DDRC_INTMSK_dat_max_int_mask_END        (11)
#define SOC_MDDRC_DMC_DDRC_INTMSK_rdtimeout_int_mask_START    (12)
#define SOC_MDDRC_DMC_DDRC_INTMSK_rdtimeout_int_mask_END      (12)
#define SOC_MDDRC_DMC_DDRC_INTMSK_aref_alarm_int_mask_START   (16)
#define SOC_MDDRC_DMC_DDRC_INTMSK_aref_alarm_int_mask_END     (16)
#define SOC_MDDRC_DMC_DDRC_INTMSK_sbram_serr_int_mask_START   (20)
#define SOC_MDDRC_DMC_DDRC_INTMSK_sbram_serr_int_mask_END     (20)
#define SOC_MDDRC_DMC_DDRC_INTMSK_sbram_merr_int_mask_START   (24)
#define SOC_MDDRC_DMC_DDRC_INTMSK_sbram_merr_int_mask_END     (24)
#define SOC_MDDRC_DMC_DDRC_INTMSK_rpram_serr_int_mask_START   (28)
#define SOC_MDDRC_DMC_DDRC_INTMSK_rpram_serr_int_mask_END     (28)
#define SOC_MDDRC_DMC_DDRC_INTMSK_recram_serr_int_mask_START  (29)
#define SOC_MDDRC_DMC_DDRC_INTMSK_recram_serr_int_mask_END    (29)
#define SOC_MDDRC_DMC_DDRC_INTMSK_recram_merr_int_mask_START  (30)
#define SOC_MDDRC_DMC_DDRC_INTMSK_recram_merr_int_mask_END    (30)
#define SOC_MDDRC_DMC_DDRC_INTMSK_rpram_merr_int_mask_START   (31)
#define SOC_MDDRC_DMC_DDRC_INTMSK_rpram_merr_int_mask_END     (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_RINT_UNION
 �ṹ˵��  : DDRC_RINT �Ĵ����ṹ���塣��ַƫ����:0x284����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_RINT��DDRCԭʼ�жϼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  serr_rint        : 1;  /* bit[0]    : DDR ECC���ȴ�����ԭʼ�жϡ�д1�ж���� */
        unsigned int  flux_rint        : 1;  /* bit[1]    : DDR FLUXͳ�����ڵ����жϡ�д1�ж������ */
        unsigned int  rec_rint         : 1;  /* bit[2]    : DDR REC����ָ�����жϡ�д1�ж���� */
        unsigned int  rec_err_rint     : 1;  /* bit[3]    : DDR REC�쳣�����жϡ�д1�ж���� */
        unsigned int  merr_rint        : 1;  /* bit[4]    : DDR ECC����ش���ԭʼ�жϡ�д1�ж���� */
        unsigned int  sref_err_rint    : 1;  /* bit[5]    : ��ˢ�½ӿ�����������жϡ�д1�ж������ */
        unsigned int  tmon_err_rint    : 1;  /* bit[6]    : LP DDR �����¶���ѯ�쳣�жϡ�д1�ж������ */
        unsigned int  tmon_upd_rint    : 1;  /* bit[7]    : LP DDR �����¶���ѯ�����жϡ�д1�ж������ */
        unsigned int  dimm_parity_rint : 1;  /* bit[8]    : DDR DIMM��żУ�����ԭʼ�жϡ�д1�ж������ */
        unsigned int  load_rint        : 1;  /* bit[9]    : DDR LOADͳ�����ڵ����жϻ��߸��ز�����ֵ��Χ֮�ڡ�д1�ж���� */
        unsigned int  dat_min_rint     : 1;  /* bit[10]   : ����ͳ�������жϡ�д1�ж���� */
        unsigned int  dat_max_rint     : 1;  /* bit[11]   : ����ͳ�������жϡ�д1�ж���� */
        unsigned int  rdtimeout_rint   : 1;  /* bit[12]   : DDRPHY �����ݳ�ʱԭʼ�жϡ�д1�ж���� */
        unsigned int  reserved_0       : 3;  /* bit[13-15]: ������ */
        unsigned int  aref_alarm_rint  : 1;  /* bit[16]   : DDR AREF�������ԭʼ�жϡ�д1�ж���� */
        unsigned int  reserved_1       : 3;  /* bit[17-19]: ������ */
        unsigned int  sbram_serr_rint  : 1;  /* bit[20]   : SBRAM�����ش����жϡ�д1�ж������ */
        unsigned int  reserved_2       : 3;  /* bit[21-23]: ������ */
        unsigned int  sbram_merr_rint  : 1;  /* bit[24]   : SBRAM����ش����жϡ�д1�ж������ */
        unsigned int  reserved_3       : 3;  /* bit[25-27]: ������ */
        unsigned int  rpram_serr_rint  : 1;  /* bit[28]   : RPRAM�����ش����жϡ�д1�ж������ */
        unsigned int  recram_serr_rint : 1;  /* bit[29]   : RECRAM�����ش����жϡ�д1�ж������ */
        unsigned int  recram_merr_rint : 1;  /* bit[30]   : RECRAM����ش����жϡ�д1�ж������ */
        unsigned int  rpram_merr_rint  : 1;  /* bit[31]   : RPRAM����ش����жϡ�д1�ж������ */
    } reg;
} SOC_MDDRC_DMC_DDRC_RINT_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_RINT_serr_rint_START         (0)
#define SOC_MDDRC_DMC_DDRC_RINT_serr_rint_END           (0)
#define SOC_MDDRC_DMC_DDRC_RINT_flux_rint_START         (1)
#define SOC_MDDRC_DMC_DDRC_RINT_flux_rint_END           (1)
#define SOC_MDDRC_DMC_DDRC_RINT_rec_rint_START          (2)
#define SOC_MDDRC_DMC_DDRC_RINT_rec_rint_END            (2)
#define SOC_MDDRC_DMC_DDRC_RINT_rec_err_rint_START      (3)
#define SOC_MDDRC_DMC_DDRC_RINT_rec_err_rint_END        (3)
#define SOC_MDDRC_DMC_DDRC_RINT_merr_rint_START         (4)
#define SOC_MDDRC_DMC_DDRC_RINT_merr_rint_END           (4)
#define SOC_MDDRC_DMC_DDRC_RINT_sref_err_rint_START     (5)
#define SOC_MDDRC_DMC_DDRC_RINT_sref_err_rint_END       (5)
#define SOC_MDDRC_DMC_DDRC_RINT_tmon_err_rint_START     (6)
#define SOC_MDDRC_DMC_DDRC_RINT_tmon_err_rint_END       (6)
#define SOC_MDDRC_DMC_DDRC_RINT_tmon_upd_rint_START     (7)
#define SOC_MDDRC_DMC_DDRC_RINT_tmon_upd_rint_END       (7)
#define SOC_MDDRC_DMC_DDRC_RINT_dimm_parity_rint_START  (8)
#define SOC_MDDRC_DMC_DDRC_RINT_dimm_parity_rint_END    (8)
#define SOC_MDDRC_DMC_DDRC_RINT_load_rint_START         (9)
#define SOC_MDDRC_DMC_DDRC_RINT_load_rint_END           (9)
#define SOC_MDDRC_DMC_DDRC_RINT_dat_min_rint_START      (10)
#define SOC_MDDRC_DMC_DDRC_RINT_dat_min_rint_END        (10)
#define SOC_MDDRC_DMC_DDRC_RINT_dat_max_rint_START      (11)
#define SOC_MDDRC_DMC_DDRC_RINT_dat_max_rint_END        (11)
#define SOC_MDDRC_DMC_DDRC_RINT_rdtimeout_rint_START    (12)
#define SOC_MDDRC_DMC_DDRC_RINT_rdtimeout_rint_END      (12)
#define SOC_MDDRC_DMC_DDRC_RINT_aref_alarm_rint_START   (16)
#define SOC_MDDRC_DMC_DDRC_RINT_aref_alarm_rint_END     (16)
#define SOC_MDDRC_DMC_DDRC_RINT_sbram_serr_rint_START   (20)
#define SOC_MDDRC_DMC_DDRC_RINT_sbram_serr_rint_END     (20)
#define SOC_MDDRC_DMC_DDRC_RINT_sbram_merr_rint_START   (24)
#define SOC_MDDRC_DMC_DDRC_RINT_sbram_merr_rint_END     (24)
#define SOC_MDDRC_DMC_DDRC_RINT_rpram_serr_rint_START   (28)
#define SOC_MDDRC_DMC_DDRC_RINT_rpram_serr_rint_END     (28)
#define SOC_MDDRC_DMC_DDRC_RINT_recram_serr_rint_START  (29)
#define SOC_MDDRC_DMC_DDRC_RINT_recram_serr_rint_END    (29)
#define SOC_MDDRC_DMC_DDRC_RINT_recram_merr_rint_START  (30)
#define SOC_MDDRC_DMC_DDRC_RINT_recram_merr_rint_END    (30)
#define SOC_MDDRC_DMC_DDRC_RINT_rpram_merr_rint_START   (31)
#define SOC_MDDRC_DMC_DDRC_RINT_rpram_merr_rint_END     (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_INTSTS_UNION
 �ṹ˵��  : DDRC_INTSTS �Ĵ����ṹ���塣��ַƫ����:0x288����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_INTSTS��DDRC�ж�״̬�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  serr_intsts        : 1;  /* bit[0]    : DDR ECC���ȴ������жϡ� */
        unsigned int  flux_intsts        : 1;  /* bit[1]    : DDR FLUXͳ�����ڵ����ж� */
        unsigned int  rec_intsts         : 1;  /* bit[2]    : DDR REC����ָ�����ж� */
        unsigned int  rec_err_intsts     : 1;  /* bit[3]    : DDR REC�쳣�ж� */
        unsigned int  merr_intsts        : 1;  /* bit[4]    : DDR ECC����ش����жϡ� */
        unsigned int  sref_err_intsts    : 1;  /* bit[5]    : ��ˢ�½ӿ�����������жϡ� */
        unsigned int  tmon_err_intsts    : 1;  /* bit[6]    : LP DDR �����¶���ѯ�쳣�жϡ� */
        unsigned int  tmon_upd_intsts    : 1;  /* bit[7]    : LP DDR �����¶���ѯ�����жϡ� */
        unsigned int  dimm_parity_intsts : 1;  /* bit[8]    : DDR DIMM��żУ������жϡ� */
        unsigned int  load_intsts        : 1;  /* bit[9]    : DDR LOADͳ�����ڵ����жϻ��߸��ز�����ֵ��Χ֮�ڡ� */
        unsigned int  dat_min_intsts     : 1;  /* bit[10]   : DDR����ͳ�������жϡ�
                                                              
                                                              ע�⣺���dat_stat_mode��Ϊ2ʱ�����bit���Ǽ�����������жϡ� */
        unsigned int  dat_max_intsts     : 1;  /* bit[11]   : DDR����ͳ�������жϡ� */
        unsigned int  rdtimeout_intsts   : 1;  /* bit[12]   : DDRPHY �����ݳ�ʱ�жϡ� */
        unsigned int  reserved_0         : 3;  /* bit[13-15]: ������ */
        unsigned int  aref_alarm_intsts  : 1;  /* bit[16]   : DDR AREF��������жϡ� */
        unsigned int  reserved_1         : 3;  /* bit[17-19]: ������ */
        unsigned int  sbram_serr_intsts  : 1;  /* bit[20]   : SBRAM�����ش����жϡ� */
        unsigned int  reserved_2         : 3;  /* bit[21-23]: ������ */
        unsigned int  sbram_merr_intsts  : 1;  /* bit[24]   : SBRAM����ش����жϡ� */
        unsigned int  reserved_3         : 3;  /* bit[25-27]: ������ */
        unsigned int  rpram_serr_intsts  : 1;  /* bit[28]   : RPRAM�����ش����жϡ� */
        unsigned int  recram_serr_intsts : 1;  /* bit[29]   : RECRAM�����ش����жϡ� */
        unsigned int  recram_merr_intsts : 1;  /* bit[30]   : RECRAM����ش����жϡ� */
        unsigned int  rpram_merr_intsts  : 1;  /* bit[31]   : RPRAM����ش����жϡ� */
    } reg;
} SOC_MDDRC_DMC_DDRC_INTSTS_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_INTSTS_serr_intsts_START         (0)
#define SOC_MDDRC_DMC_DDRC_INTSTS_serr_intsts_END           (0)
#define SOC_MDDRC_DMC_DDRC_INTSTS_flux_intsts_START         (1)
#define SOC_MDDRC_DMC_DDRC_INTSTS_flux_intsts_END           (1)
#define SOC_MDDRC_DMC_DDRC_INTSTS_rec_intsts_START          (2)
#define SOC_MDDRC_DMC_DDRC_INTSTS_rec_intsts_END            (2)
#define SOC_MDDRC_DMC_DDRC_INTSTS_rec_err_intsts_START      (3)
#define SOC_MDDRC_DMC_DDRC_INTSTS_rec_err_intsts_END        (3)
#define SOC_MDDRC_DMC_DDRC_INTSTS_merr_intsts_START         (4)
#define SOC_MDDRC_DMC_DDRC_INTSTS_merr_intsts_END           (4)
#define SOC_MDDRC_DMC_DDRC_INTSTS_sref_err_intsts_START     (5)
#define SOC_MDDRC_DMC_DDRC_INTSTS_sref_err_intsts_END       (5)
#define SOC_MDDRC_DMC_DDRC_INTSTS_tmon_err_intsts_START     (6)
#define SOC_MDDRC_DMC_DDRC_INTSTS_tmon_err_intsts_END       (6)
#define SOC_MDDRC_DMC_DDRC_INTSTS_tmon_upd_intsts_START     (7)
#define SOC_MDDRC_DMC_DDRC_INTSTS_tmon_upd_intsts_END       (7)
#define SOC_MDDRC_DMC_DDRC_INTSTS_dimm_parity_intsts_START  (8)
#define SOC_MDDRC_DMC_DDRC_INTSTS_dimm_parity_intsts_END    (8)
#define SOC_MDDRC_DMC_DDRC_INTSTS_load_intsts_START         (9)
#define SOC_MDDRC_DMC_DDRC_INTSTS_load_intsts_END           (9)
#define SOC_MDDRC_DMC_DDRC_INTSTS_dat_min_intsts_START      (10)
#define SOC_MDDRC_DMC_DDRC_INTSTS_dat_min_intsts_END        (10)
#define SOC_MDDRC_DMC_DDRC_INTSTS_dat_max_intsts_START      (11)
#define SOC_MDDRC_DMC_DDRC_INTSTS_dat_max_intsts_END        (11)
#define SOC_MDDRC_DMC_DDRC_INTSTS_rdtimeout_intsts_START    (12)
#define SOC_MDDRC_DMC_DDRC_INTSTS_rdtimeout_intsts_END      (12)
#define SOC_MDDRC_DMC_DDRC_INTSTS_aref_alarm_intsts_START   (16)
#define SOC_MDDRC_DMC_DDRC_INTSTS_aref_alarm_intsts_END     (16)
#define SOC_MDDRC_DMC_DDRC_INTSTS_sbram_serr_intsts_START   (20)
#define SOC_MDDRC_DMC_DDRC_INTSTS_sbram_serr_intsts_END     (20)
#define SOC_MDDRC_DMC_DDRC_INTSTS_sbram_merr_intsts_START   (24)
#define SOC_MDDRC_DMC_DDRC_INTSTS_sbram_merr_intsts_END     (24)
#define SOC_MDDRC_DMC_DDRC_INTSTS_rpram_serr_intsts_START   (28)
#define SOC_MDDRC_DMC_DDRC_INTSTS_rpram_serr_intsts_END     (28)
#define SOC_MDDRC_DMC_DDRC_INTSTS_recram_serr_intsts_START  (29)
#define SOC_MDDRC_DMC_DDRC_INTSTS_recram_serr_intsts_END    (29)
#define SOC_MDDRC_DMC_DDRC_INTSTS_recram_merr_intsts_START  (30)
#define SOC_MDDRC_DMC_DDRC_INTSTS_recram_merr_intsts_END    (30)
#define SOC_MDDRC_DMC_DDRC_INTSTS_rpram_merr_intsts_START   (31)
#define SOC_MDDRC_DMC_DDRC_INTSTS_rpram_merr_intsts_END     (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CURR_STATUS_UNION
 �ṹ˵��  : DDRC_CURR_STATUS �Ĵ����ṹ���塣��ַƫ����:0x290����ֵ:0x00000101�����:32
 �Ĵ���˵��: DDRC_CURR_STATUS��DDRC״̬�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  busy      : 1;  /* bit[0]   : DDRC����æ״̬�Ĵ�����
                                                    1��������У�
                                                    0�����С� */
        unsigned int  reserved_0: 3;  /* bit[1-3] : ������ */
        unsigned int  busy_dmc  : 1;  /* bit[4]   : DDRC DMCģ���æ״̬�Ĵ�����
                                                    1��������У�
                                                    0�����С� */
        unsigned int  reserved_1: 3;  /* bit[5-7] : ������ */
        unsigned int  busy_func : 1;  /* bit[8]   : DDRC FUNCģ���æ״̬�Ĵ���������λ����sref״̬��
                                                    1��������У�
                                                    0�����С� */
        unsigned int  reserved_2: 23; /* bit[9-31]: ������ */
    } reg;
} SOC_MDDRC_DMC_DDRC_CURR_STATUS_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CURR_STATUS_busy_START       (0)
#define SOC_MDDRC_DMC_DDRC_CURR_STATUS_busy_END         (0)
#define SOC_MDDRC_DMC_DDRC_CURR_STATUS_busy_dmc_START   (4)
#define SOC_MDDRC_DMC_DDRC_CURR_STATUS_busy_dmc_END     (4)
#define SOC_MDDRC_DMC_DDRC_CURR_STATUS_busy_func_START  (8)
#define SOC_MDDRC_DMC_DDRC_CURR_STATUS_busy_func_END    (8)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CURR_FUNC_UNION
 �ṹ˵��  : DDRC_CURR_FUNC �Ĵ����ṹ���塣��ַƫ����:0x294����ֵ:0x00000001�����:32
 �Ĵ���˵��: DDRC_CURR_FUNC��DDRC FUNCģ��״̬�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  in_sref           : 1;  /* bit[0]    : DDRC��ˢ��״̬��
                                                             1����ˢ��״̬��
                                                             0������״̬�� */
        unsigned int  reserved_0        : 3;  /* bit[1-3]  : ������ */
        unsigned int  in_init           : 1;  /* bit[4]    : DDRC��ʼ��״̬��
                                                             1����ʼ��״̬��
                                                             0������״̬�� */
        unsigned int  dfi_init_complete : 1;  /* bit[5]    : DFI��ʼ��״̬��
                                                             1����������״̬��
                                                             0��DFI��ʼ�������С� */
        unsigned int  reserved_1        : 2;  /* bit[6-7]  : ������ */
        unsigned int  aref_opt_stat     : 1;  /* bit[8]    : �Զ�ˢ���Ż�ģʽ״ָ̬ʾ��
                                                             1����ʾ�����Ż�ģʽ��
                                                             0����ʾ�Ѿ��˳��Ż�ģʽ��
                                                             
                                                             ע�⣺��������û�ͨ��csysreq�ӿ����������ˢ��ǰ����Ҫȷ���Ѿ��˳��Զ�ˢ���Ż�ģʽ����Ϊ������ˢ���Ż�ģʽʱ�����ܻ���δ���͵�postponed��� */
        unsigned int  reserved_2        : 3;  /* bit[9-11] : ������ */
        unsigned int  in_sfc            : 1;  /* bit[12]   : DDRC SFC״̬�Ĵ�����
                                                             1��SFC������У�
                                                             0�����С� */
        unsigned int  reserved_3        : 3;  /* bit[13-15]: ������ */
        unsigned int  in_eccwb          : 1;  /* bit[16]   : DDRC ECC Write Back״̬�Ĵ�����
                                                             1��ECC Write Back������У�
                                                             0�����С� */
        unsigned int  reserved_4        : 3;  /* bit[17-19]: ������ */
        unsigned int  in_mtest          : 1;  /* bit[20]   : DDRC Memory Test״̬�Ĵ�����
                                                             1��Memory Test�����У�
                                                             0�����С� */
        unsigned int  reserved_5        : 3;  /* bit[21-23]: ������ */
        unsigned int  in_mclr           : 1;  /* bit[24]   : DDRC Memory Clean״̬�Ĵ�����
                                                             1��Memory Clean�����У�
                                                             0�����С� */
        unsigned int  in_rec            : 1;  /* bit[25]   : DDRC REC״̬�Ĵ���
                                                             1�� Error Recovery�����У�
                                                             0�� ���С� */
        unsigned int  reserved_6        : 2;  /* bit[26-27]: ������ */
        unsigned int  in_phyupd         : 1;  /* bit[28]   : DDRC PHYUPD״̬�Ĵ�����
                                                             1��PHY����Update��
                                                             0�����С� */
        unsigned int  reserved_7        : 3;  /* bit[29-31]: ������ */
    } reg;
} SOC_MDDRC_DMC_DDRC_CURR_FUNC_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CURR_FUNC_in_sref_START            (0)
#define SOC_MDDRC_DMC_DDRC_CURR_FUNC_in_sref_END              (0)
#define SOC_MDDRC_DMC_DDRC_CURR_FUNC_in_init_START            (4)
#define SOC_MDDRC_DMC_DDRC_CURR_FUNC_in_init_END              (4)
#define SOC_MDDRC_DMC_DDRC_CURR_FUNC_dfi_init_complete_START  (5)
#define SOC_MDDRC_DMC_DDRC_CURR_FUNC_dfi_init_complete_END    (5)
#define SOC_MDDRC_DMC_DDRC_CURR_FUNC_aref_opt_stat_START      (8)
#define SOC_MDDRC_DMC_DDRC_CURR_FUNC_aref_opt_stat_END        (8)
#define SOC_MDDRC_DMC_DDRC_CURR_FUNC_in_sfc_START             (12)
#define SOC_MDDRC_DMC_DDRC_CURR_FUNC_in_sfc_END               (12)
#define SOC_MDDRC_DMC_DDRC_CURR_FUNC_in_eccwb_START           (16)
#define SOC_MDDRC_DMC_DDRC_CURR_FUNC_in_eccwb_END             (16)
#define SOC_MDDRC_DMC_DDRC_CURR_FUNC_in_mtest_START           (20)
#define SOC_MDDRC_DMC_DDRC_CURR_FUNC_in_mtest_END             (20)
#define SOC_MDDRC_DMC_DDRC_CURR_FUNC_in_mclr_START            (24)
#define SOC_MDDRC_DMC_DDRC_CURR_FUNC_in_mclr_END              (24)
#define SOC_MDDRC_DMC_DDRC_CURR_FUNC_in_rec_START             (25)
#define SOC_MDDRC_DMC_DDRC_CURR_FUNC_in_rec_END               (25)
#define SOC_MDDRC_DMC_DDRC_CURR_FUNC_in_phyupd_START          (28)
#define SOC_MDDRC_DMC_DDRC_CURR_FUNC_in_phyupd_END            (28)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CURR_FUNC2_UNION
 �ṹ˵��  : DDRC_CURR_FUNC2 �Ĵ����ṹ���塣��ַƫ����:0x298����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_CURR_FUNC2��DDRC FUNCģ��״̬�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  in_pd    : 16; /* bit[0-15] : DDRC PowerDown״̬��
                                                    1��PowerDown״̬��
                                                    0������״̬��
                                                    ÿһ���ش���1��Rank�� */
        unsigned int  in_asref : 16; /* bit[16-31]: DDRC Auto Selfrefresh״̬��
                                                    1��Auto Selfrefresh״̬��
                                                    0������״̬��
                                                    ÿһ���ش���1��Rank�� */
    } reg;
} SOC_MDDRC_DMC_DDRC_CURR_FUNC2_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CURR_FUNC2_in_pd_START     (0)
#define SOC_MDDRC_DMC_DDRC_CURR_FUNC2_in_pd_END       (15)
#define SOC_MDDRC_DMC_DDRC_CURR_FUNC2_in_asref_START  (16)
#define SOC_MDDRC_DMC_DDRC_CURR_FUNC2_in_asref_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CURR_EXECST_UNION
 �ṹ˵��  : DDRC_CURR_EXECST �Ĵ����ṹ���塣��ַƫ����:0x2A0����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_CURR_EXECST��DDRC����״̬��״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  dmc_cv : 16; /* bit[0-15] : �������������͡�
                                                  0����ʾ�����
                                                  1����ʾд��� */
        unsigned int  dmc_ct : 16; /* bit[16-31]: �������������͡�
                                                  0:��ʾ�����
                                                  1����ʾд��� */
    } reg;
} SOC_MDDRC_DMC_DDRC_CURR_EXECST_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CURR_EXECST_dmc_cv_START  (0)
#define SOC_MDDRC_DMC_DDRC_CURR_EXECST_dmc_cv_END    (15)
#define SOC_MDDRC_DMC_DDRC_CURR_EXECST_dmc_ct_START  (16)
#define SOC_MDDRC_DMC_DDRC_CURR_EXECST_dmc_ct_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_CURR_WGFIFOST_UNION
 �ṹ˵��  : DDRC_CURR_WGFIFOST �Ĵ����ṹ���塣��ַƫ����:0x2A4����ֵ:0x00000001�����:32
 �Ĵ���˵��: DDRC_CURR_WGFIFOST��DDRCдFIFO����״̬�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  wgntfifo_e : 1;  /* bit[0]   : WGNT_FIFO����״̬���ձ�ʾ����д�����Ѿ�������ϣ��ǿձ�ʾд����û�н�����ɡ�
                                                     1��FIFO�գ�
                                                     0��FIFO�ǿա� */
        unsigned int  reserved   : 31; /* bit[1-31]: ������ */
    } reg;
} SOC_MDDRC_DMC_DDRC_CURR_WGFIFOST_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_CURR_WGFIFOST_wgntfifo_e_START  (0)
#define SOC_MDDRC_DMC_DDRC_CURR_WGFIFOST_wgntfifo_e_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_SERR_ADR0_UNION
 �ṹ˵��  : DDRC_HIS_SERR_ADR0 �Ĵ����ṹ���塣��ַƫ����:0x2D0����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_SERRADR0��DDRC ECC�����ش����λ��ַ״̬�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  serr_adr0 : 32; /* bit[0-31]: DDRC ECC�����ش����λ��ַ�Ĵ�����
                                                    ע�⣺�˼Ĵ�����¼��һ�η��������ش�������ݵ�λ��ַ���������Ӧ�ĵ����ش����ж�ʱ�����������
                                                    [17��0]Ϊ�е�ַ��
                                                    [31��18]Ϊ�е�ַ�� */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_SERR_ADR0_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_SERR_ADR0_serr_adr0_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_SERR_ADR0_serr_adr0_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_SERR_ADR1_UNION
 �ṹ˵��  : DDRC_HIS_SERR_ADR1 �Ĵ����ṹ���塣��ַƫ����:0x2D4����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_SERRADR1��DDRC ECC�����ش����λ��ַ״̬�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  serr_adr1 : 12; /* bit[0-11] : DDRC ECC�����ش����λ��ַ�Ĵ�����
                                                     ע�⣺�˼Ĵ�����¼��һ�η��������ش�������ݵ�λ��ַ���������Ӧ�ĵ����ش����ж�ʱ�����������
                                                     [3��0]Ϊ�е�ַ
                                                     [7:4]Ϊbank��ַ
                                                     [11��8]ΪƬѡ�� */
        unsigned int  reserved  : 20; /* bit[12-31]: ������ */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_SERR_ADR1_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_SERR_ADR1_serr_adr1_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_SERR_ADR1_serr_adr1_END    (11)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_SERR_RDATA0_UNION
 �ṹ˵��  : DDRC_HIS_SERR_RDATA0 �Ĵ����ṹ���塣��ַƫ����:0x2D8����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_SERR_RDATA0��DDR ECC�����ش��������0
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  serr_rdata0 : 32; /* bit[0-31]: DDRC ECC�����ش��������31~0bit�Ĵ�����
                                                      ע�⣺�˼Ĵ�����¼��һ�η��������ش�������ݵ�λ��ַ���������Ӧ�ĵ����ش����ж�ʱ����������� */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_SERR_RDATA0_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_SERR_RDATA0_serr_rdata0_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_SERR_RDATA0_serr_rdata0_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_SERR_RDATA1_UNION
 �ṹ˵��  : DDRC_HIS_SERR_RDATA1 �Ĵ����ṹ���塣��ַƫ����:0x2DC����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_SERR_RDATA1��DDR ECC�����ش��������1
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  serr_rdata1 : 32; /* bit[0-31]: DDRC ECC�����ش��������63~32bit�Ĵ�����
                                                      ע�⣺�˼Ĵ�����¼��һ�η��������ش�������ݵ�λ��ַ���������Ӧ�ĵ����ش����ж�ʱ����������� */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_SERR_RDATA1_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_SERR_RDATA1_serr_rdata1_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_SERR_RDATA1_serr_rdata1_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_SERR_RDATA2_UNION
 �ṹ˵��  : DDRC_HIS_SERR_RDATA2 �Ĵ����ṹ���塣��ַƫ����:0x2E0����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_SERR_RDATA2��DDR ECC�����ش��������2
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  serr_rdata2 : 32; /* bit[0-31]: DDRC ECC�����ش��������95~64bit�Ĵ�����
                                                      ע�⣺�˼Ĵ�����¼��һ�η��������ش�������ݵ�λ��ַ���������Ӧ�ĵ����ش����ж�ʱ����������� */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_SERR_RDATA2_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_SERR_RDATA2_serr_rdata2_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_SERR_RDATA2_serr_rdata2_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_SERR_RDATA3_UNION
 �ṹ˵��  : DDRC_HIS_SERR_RDATA3 �Ĵ����ṹ���塣��ַƫ����:0x2E4����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_SERR_RDATA3��DDR ECC�����ش��������3
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  serr_rdata3 : 32; /* bit[0-31]: DDRC ECC�����ش��������127~96bit�Ĵ�����
                                                      ע�⣺�˼Ĵ�����¼��һ�η��������ش�������ݵ�λ��ַ���������Ӧ�ĵ������ж�ʱ����������� */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_SERR_RDATA3_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_SERR_RDATA3_serr_rdata3_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_SERR_RDATA3_serr_rdata3_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_SERR_RDATA4_UNION
 �ṹ˵��  : DDRC_HIS_SERR_RDATA4 �Ĵ����ṹ���塣��ַƫ����:0x2E8����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_SERR_RDATA4��DDR ECC�����ش��������4
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  serr_rdata4 : 32; /* bit[0-31]: DDRC ECC�����ش��������159~128bit�Ĵ�����
                                                      ע�⣺�˼Ĵ�����¼��һ�η��������ش�������ݵ�λ��ַ���������Ӧ�ĵ����ش����ж�ʱ����������� */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_SERR_RDATA4_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_SERR_RDATA4_serr_rdata4_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_SERR_RDATA4_serr_rdata4_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_SERR_RDATA5_UNION
 �ṹ˵��  : DDRC_HIS_SERR_RDATA5 �Ĵ����ṹ���塣��ַƫ����:0x2EC����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_SERR_RDATA5��DDR ECC�����ش��������5
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  serr_rdata5 : 32; /* bit[0-31]: DDRC ECC�����ش��������191~160bit�Ĵ�����
                                                      ע�⣺�˼Ĵ�����¼��һ�η��������ش�������ݵ�λ��ַ���������Ӧ�ĵ����ش����ж�ʱ����������� */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_SERR_RDATA5_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_SERR_RDATA5_serr_rdata5_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_SERR_RDATA5_serr_rdata5_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_SERR_RDATA6_UNION
 �ṹ˵��  : DDRC_HIS_SERR_RDATA6 �Ĵ����ṹ���塣��ַƫ����:0x2F0����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_SERR_RDATA6��DDR ECC�����ش��������6
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  serr_rdata6 : 32; /* bit[0-31]: DDRC ECC�����ش��������223~192bit�Ĵ�����
                                                      ע�⣺�˼Ĵ�����¼��һ�η��������ش�������ݵ�λ��ַ���������Ӧ�ĵ����ش����ж�ʱ����������� */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_SERR_RDATA6_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_SERR_RDATA6_serr_rdata6_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_SERR_RDATA6_serr_rdata6_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_SERR_RDATA7_UNION
 �ṹ˵��  : DDRC_HIS_SERR_RDATA7 �Ĵ����ṹ���塣��ַƫ����:0x2F4����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_SERR_RDATA7��DDR ECC�����ش��������7
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  serr_rdata7 : 32; /* bit[0-31]: DDRC ECC�����ش��������255~224bit�Ĵ�����
                                                      ע�⣺�˼Ĵ�����¼��һ�η��������ش�������ݵ�λ��ַ���������Ӧ�ĵ������ж�ʱ����������� */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_SERR_RDATA7_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_SERR_RDATA7_serr_rdata7_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_SERR_RDATA7_serr_rdata7_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_SERR_RDATA8_UNION
 �ṹ˵��  : DDRC_HIS_SERR_RDATA8 �Ĵ����ṹ���塣��ַƫ����:0x2F8����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_SERR_RDATA8��DDR ECC�����ش��������8
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  serr_rdata8 : 32; /* bit[0-31]: DDRC ECC�����ش��������287~256bit�Ĵ�����ECCУ��λ����
                                                      ע�⣺�˼Ĵ�����¼��һ�η��������ش�������ݵ�λ��ַ���������Ӧ�ĵ����ش����ж�ʱ����������� */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_SERR_RDATA8_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_SERR_RDATA8_serr_rdata8_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_SERR_RDATA8_serr_rdata8_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_SERR_EXPDATA0_UNION
 �ṹ˵��  : DDRC_HIS_SERR_EXPDATA0 �Ĵ����ṹ���塣��ַƫ����:0x2FC����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_SERR_EXPDATA0��DDR ECC�����ش���ʱ��������ȷ������0
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  serr_expdata0 : 32; /* bit[0-31]: DDRC ECC�����ش���ʱ��������ȷ������31~0bit�Ĵ�����
                                                        ע�⣺�˼Ĵ�����¼��һ�η��������ش�������ݵ�λ��ַ���������Ӧ�ĵ����ش����ж�ʱ����������� */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_SERR_EXPDATA0_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_SERR_EXPDATA0_serr_expdata0_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_SERR_EXPDATA0_serr_expdata0_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_SERR_EXPDATA1_UNION
 �ṹ˵��  : DDRC_HIS_SERR_EXPDATA1 �Ĵ����ṹ���塣��ַƫ����:0x300����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_SERR_EXPDATA1��DDR ECC�����ش���ʱ��������ȷ������1
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  serr_expdata1 : 32; /* bit[0-31]: DDRC ECC�����ش���ʱ��������ȷ������63~32bit�Ĵ�����
                                                        ע�⣺�˼Ĵ�����¼��һ�η��������ش�������ݵ�λ��ַ���������Ӧ�ĵ����ش����ж�ʱ����������� */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_SERR_EXPDATA1_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_SERR_EXPDATA1_serr_expdata1_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_SERR_EXPDATA1_serr_expdata1_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_SERR_EXPDATA2_UNION
 �ṹ˵��  : DDRC_HIS_SERR_EXPDATA2 �Ĵ����ṹ���塣��ַƫ����:0x304����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_SERR_EXPDATA2��DDR ECC�����ش���ʱ��������ȷ������2
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  serr_expdata2 : 32; /* bit[0-31]: DDRC ECC�����ش���ʱ��������ȷ������95~64bit�Ĵ�����
                                                        ע�⣺�˼Ĵ�����¼��һ�η��������ش�������ݵ�λ��ַ���������Ӧ�ĵ����ش����ж�ʱ����������� */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_SERR_EXPDATA2_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_SERR_EXPDATA2_serr_expdata2_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_SERR_EXPDATA2_serr_expdata2_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_SERR_EXPDATA3_UNION
 �ṹ˵��  : DDRC_HIS_SERR_EXPDATA3 �Ĵ����ṹ���塣��ַƫ����:0x308����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_SERR_EXPDATA3��DDR ECC�����ش���ʱ��������ȷ������3
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  serr_expdata3 : 32; /* bit[0-31]: DDRC ECC�����ش���ʱ��������ȷ������127~96bit�Ĵ�����
                                                        ע�⣺�˼Ĵ�����¼��һ�η��������ش�������ݵ�λ��ַ���������Ӧ�ĵ����ش����ж�ʱ����������� */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_SERR_EXPDATA3_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_SERR_EXPDATA3_serr_expdata3_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_SERR_EXPDATA3_serr_expdata3_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_SERR_EXPDATA4_UNION
 �ṹ˵��  : DDRC_HIS_SERR_EXPDATA4 �Ĵ����ṹ���塣��ַƫ����:0x30C����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_SERR_EXPDATA4��DDR ECC�����ش���ʱ��������ȷ������4
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  serr_expdata4 : 32; /* bit[0-31]: DDRC ECC�����ش���ʱ��������ȷ������159~128bit�Ĵ�����
                                                        ע�⣺�˼Ĵ�����¼��һ�η��������ش�������ݵ�λ��ַ���������Ӧ�ĵ����ش����ж�ʱ����������� */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_SERR_EXPDATA4_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_SERR_EXPDATA4_serr_expdata4_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_SERR_EXPDATA4_serr_expdata4_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_SERR_EXPDATA5_UNION
 �ṹ˵��  : DDRC_HIS_SERR_EXPDATA5 �Ĵ����ṹ���塣��ַƫ����:0x310����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_SERR_EXPDATA5��DDR ECC�����ش���ʱ��������ȷ������5
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  serr_expdata5 : 32; /* bit[0-31]: DDRC ECC�����ش���ʱ��������ȷ������191~160bit�Ĵ�����
                                                        ע�⣺�˼Ĵ�����¼��һ�η��������ش�������ݵ�λ��ַ���������Ӧ�ĵ����ش����ж�ʱ����������� */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_SERR_EXPDATA5_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_SERR_EXPDATA5_serr_expdata5_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_SERR_EXPDATA5_serr_expdata5_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_SERR_EXPDATA6_UNION
 �ṹ˵��  : DDRC_HIS_SERR_EXPDATA6 �Ĵ����ṹ���塣��ַƫ����:0x314����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_SERR_EXPDATA6��DDR ECC�����ش���ʱ��������ȷ������6
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  serr_expdata6 : 32; /* bit[0-31]: DDRC ECC�����ش���ʱ��������ȷ������223~192bit�Ĵ�����
                                                        ע�⣺�˼Ĵ�����¼��һ�η��������ش�������ݵ�λ��ַ���������Ӧ�ĵ����ش����ж�ʱ����������� */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_SERR_EXPDATA6_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_SERR_EXPDATA6_serr_expdata6_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_SERR_EXPDATA6_serr_expdata6_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_SERR_EXPDATA7_UNION
 �ṹ˵��  : DDRC_HIS_SERR_EXPDATA7 �Ĵ����ṹ���塣��ַƫ����:0x318����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_SERR_EXPDATA7��DDR ECC�����ش���ʱ��������ȷ������7
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  serr_expdata7 : 32; /* bit[0-31]: DDRC ECC�����ش���ʱ��������ȷ������255~224bit�Ĵ�����
                                                        ע�⣺�˼Ĵ�����¼��һ�η��������ش�������ݵ�λ��ַ���������Ӧ�ĵ����ش����ж�ʱ����������� */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_SERR_EXPDATA7_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_SERR_EXPDATA7_serr_expdata7_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_SERR_EXPDATA7_serr_expdata7_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_SERR_EXPDATA8_UNION
 �ṹ˵��  : DDRC_HIS_SERR_EXPDATA8 �Ĵ����ṹ���塣��ַƫ����:0x31C����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_SERR_EXPDATA8��DDR ECC�����ش���ʱ��������ȷ������8
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  serr_expdata8 : 32; /* bit[0-31]: DDRC ECC�����ش���ʱ��������ȷ������287~256bit�Ĵ�����ECCУ��λ����
                                                        ע�⣺�˼Ĵ�����¼��һ�η��������ش�������ݵ�λ��ַ���������Ӧ�ĵ����ش����ж�ʱ����������� */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_SERR_EXPDATA8_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_SERR_EXPDATA8_serr_expdata8_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_SERR_EXPDATA8_serr_expdata8_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_MERR_ADR0_UNION
 �ṹ˵��  : DDRC_HIS_MERR_ADR0 �Ĵ����ṹ���塣��ַƫ����:0x320����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_MERRADR0��DDRC ECC����ش����λ��ַ״̬�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  merr_adr0 : 32; /* bit[0-31]: DDRC ECC����ش���͵͵�ַ�Ĵ�����
                                                    ע�⣺�˼Ĵ�����¼��һ�η�������ش�������ݵ�λ��ַ���������Ӧ�Ķ���ش����ж�ʱ����������� */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_MERR_ADR0_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_MERR_ADR0_merr_adr0_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_MERR_ADR0_merr_adr0_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_MERR_ADR1_UNION
 �ṹ˵��  : DDRC_HIS_MERR_ADR1 �Ĵ����ṹ���塣��ַƫ����:0x324����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_MERRADR1��DDRC ECC����ش����λ��ַ״̬�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  merr_adr1 : 12; /* bit[0-11] : DDRC ECC����ش����λ��ַ�Ĵ�����
                                                     ע�⣺�˼Ĵ�����¼��һ�η�������ش�������ݸ�λ��ַ���������Ӧ�Ķ���ش����ж�ʱ����������� */
        unsigned int  reserved  : 20; /* bit[12-31]: ������ */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_MERR_ADR1_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_MERR_ADR1_merr_adr1_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_MERR_ADR1_merr_adr1_END    (11)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_MERR_ID_UNION
 �ṹ˵��  : DDRC_HIS_MERR_ID �Ĵ����ṹ���塣��ַƫ����:0x328����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_MERRADR1��DDRC ECC����ش���ID�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  merr_id : 32; /* bit[0-31]: DDRC ECC����ش���ID�Ĵ�����
                                                  ע�⣺�˼Ĵ�����¼��һ�η�������ش����ID�����������ش����ж�ʱ����������� */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_MERR_ID_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_MERR_ID_merr_id_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_MERR_ID_merr_id_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_MERR_RDATA0_UNION
 �ṹ˵��  : DDRC_HIS_MERR_RDATA0 �Ĵ����ṹ���塣��ַƫ����:0x330����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_MERR_RDATA0��DDR ECC����ش��������0
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  merr_rdata0 : 32; /* bit[0-31]: DDRC ECC����ش��������31~0bit�Ĵ�����
                                                      ע�⣺�˼Ĵ�����¼��һ�η�������ش�������ݵ�λ��ַ���������Ӧ�Ķ���ش����ж�ʱ����������� */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_MERR_RDATA0_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_MERR_RDATA0_merr_rdata0_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_MERR_RDATA0_merr_rdata0_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_MERR_RDATA1_UNION
 �ṹ˵��  : DDRC_HIS_MERR_RDATA1 �Ĵ����ṹ���塣��ַƫ����:0x334����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_MERR_RDATA1��DDR ECC����ش��������1
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  merr_rdata1 : 32; /* bit[0-31]: DDRC ECC����ش��������63~32bit�Ĵ�����
                                                      ע�⣺�˼Ĵ�����¼��һ�η�������ش�������ݵ�λ��ַ���������Ӧ�Ķ���ش����ж�ʱ����������� */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_MERR_RDATA1_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_MERR_RDATA1_merr_rdata1_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_MERR_RDATA1_merr_rdata1_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_MERR_RDATA2_UNION
 �ṹ˵��  : DDRC_HIS_MERR_RDATA2 �Ĵ����ṹ���塣��ַƫ����:0x338����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_MERR_RDATA2��DDR ECC����ش��������2
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  merr_rdata2 : 32; /* bit[0-31]: DDRC ECC����ش��������95~64bit�Ĵ�����
                                                      ע�⣺�˼Ĵ�����¼��һ�η�������ش�������ݵ�λ��ַ���������Ӧ�Ķ���ش����ж�ʱ����������� */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_MERR_RDATA2_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_MERR_RDATA2_merr_rdata2_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_MERR_RDATA2_merr_rdata2_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_MERR_RDATA3_UNION
 �ṹ˵��  : DDRC_HIS_MERR_RDATA3 �Ĵ����ṹ���塣��ַƫ����:0x33C����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_MERR_RDATA3��DDR ECC����ش��������3
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  merr_rdata3 : 32; /* bit[0-31]: DDRC ECC����ش��������127~96bit�Ĵ�����
                                                      ע�⣺�˼Ĵ�����¼��һ�η�������ش�������ݵ�λ��ַ���������Ӧ�Ķ���ش����ж�ʱ����������� */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_MERR_RDATA3_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_MERR_RDATA3_merr_rdata3_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_MERR_RDATA3_merr_rdata3_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_MERR_RDATA4_UNION
 �ṹ˵��  : DDRC_HIS_MERR_RDATA4 �Ĵ����ṹ���塣��ַƫ����:0x340����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_MERR_RDATA4��DDR ECC����ش��������4
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  merr_rdata4 : 32; /* bit[0-31]: DDRC ECC����ش��������159~128bit�Ĵ�����
                                                      ע�⣺�˼Ĵ�����¼��һ�η�������ش�������ݵ�λ��ַ���������Ӧ�Ķ���ش����ж�ʱ����������� */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_MERR_RDATA4_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_MERR_RDATA4_merr_rdata4_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_MERR_RDATA4_merr_rdata4_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_MERR_RDATA5_UNION
 �ṹ˵��  : DDRC_HIS_MERR_RDATA5 �Ĵ����ṹ���塣��ַƫ����:0x344����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_MERR_RDATA5��DDR ECC����ش��������5
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  merr_rdata5 : 32; /* bit[0-31]: DDRC ECC����ش��������191~160bit�Ĵ�����
                                                      ע�⣺�˼Ĵ�����¼��һ�η�������ش�������ݵ�λ��ַ���������Ӧ�Ķ���ش����ж�ʱ����������� */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_MERR_RDATA5_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_MERR_RDATA5_merr_rdata5_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_MERR_RDATA5_merr_rdata5_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_MERR_RDATA6_UNION
 �ṹ˵��  : DDRC_HIS_MERR_RDATA6 �Ĵ����ṹ���塣��ַƫ����:0x348����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_MERR_RDATA6��DDR ECC����ش��������6
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  merr_rdata6 : 32; /* bit[0-31]: DDRC ECC����ش��������223~192bit�Ĵ�����
                                                      ע�⣺�˼Ĵ�����¼��һ�η�������ش�������ݵ�λ��ַ���������Ӧ�Ķ���ش����ж�ʱ����������� */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_MERR_RDATA6_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_MERR_RDATA6_merr_rdata6_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_MERR_RDATA6_merr_rdata6_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_MERR_RDATA7_UNION
 �ṹ˵��  : DDRC_HIS_MERR_RDATA7 �Ĵ����ṹ���塣��ַƫ����:0x34C����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_MERR_RDATA7��DDR ECC����ش��������7
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  merr_rdata7 : 32; /* bit[0-31]: DDRC ECC����ش��������255~224bit�Ĵ�����
                                                      ע�⣺�˼Ĵ�����¼��һ�η�������ش�������ݵ�λ��ַ���������Ӧ�Ķ���ش����ж�ʱ����������� */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_MERR_RDATA7_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_MERR_RDATA7_merr_rdata7_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_MERR_RDATA7_merr_rdata7_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_MERR_RDATA8_UNION
 �ṹ˵��  : DDRC_HIS_MERR_RDATA8 �Ĵ����ṹ���塣��ַƫ����:0x350����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_MERR_RDATA8��DDR ECC����ش��������8
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  merr_rdata8 : 32; /* bit[0-31]: DDRC ECC����ش��������287~256bit�Ĵ�����ECCУ��λ����
                                                      ע�⣺�˼Ĵ�����¼��һ�η�������ش�������ݵ�λ��ַ���������Ӧ�Ķ���ش����ж�ʱ����������� */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_MERR_RDATA8_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_MERR_RDATA8_merr_rdata8_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_MERR_RDATA8_merr_rdata8_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_MERR_EXPDATA0_UNION
 �ṹ˵��  : DDRC_HIS_MERR_EXPDATA0 �Ĵ����ṹ���塣��ַƫ����:0x354����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_MERR_EXPDATA0��DDR ECC����ش���ʱ��������ȷ������0
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  merr_expdata0 : 32; /* bit[0-31]: DDRC ECC����ش���ʱ��������ȷ������31~0bit�Ĵ�����
                                                        ע�⣺�˼Ĵ�����¼��һ�η�������ش�������ݵ�λ��ַ���������Ӧ�Ķ���ش����ж�ʱ����������� */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_MERR_EXPDATA0_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_MERR_EXPDATA0_merr_expdata0_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_MERR_EXPDATA0_merr_expdata0_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_MERR_EXPDATA1_UNION
 �ṹ˵��  : DDRC_HIS_MERR_EXPDATA1 �Ĵ����ṹ���塣��ַƫ����:0x358����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_MERR_EXPDATA1��DDR ECC����ش���ʱ��������ȷ������1
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  merr_expdata1 : 32; /* bit[0-31]: DDRC ECC����ش���ʱ��������ȷ������63~32bit�Ĵ�����
                                                        ע�⣺�˼Ĵ�����¼��һ�η�������ش�������ݵ�λ��ַ���������Ӧ�Ķ���ش����ж�ʱ����������� */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_MERR_EXPDATA1_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_MERR_EXPDATA1_merr_expdata1_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_MERR_EXPDATA1_merr_expdata1_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_MERR_EXPDATA2_UNION
 �ṹ˵��  : DDRC_HIS_MERR_EXPDATA2 �Ĵ����ṹ���塣��ַƫ����:0x35C����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_MERR_EXPDATA2��DDR ECC����ش���ʱ��������ȷ������2
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  merr_expdata2 : 32; /* bit[0-31]: DDRC ECC����ش���ʱ��������ȷ������95~64bit�Ĵ�����
                                                        ע�⣺�˼Ĵ�����¼��һ�η�������ش�������ݵ�λ��ַ���������Ӧ�Ķ���ش����ж�ʱ����������� */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_MERR_EXPDATA2_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_MERR_EXPDATA2_merr_expdata2_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_MERR_EXPDATA2_merr_expdata2_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_MERR_EXPDATA3_UNION
 �ṹ˵��  : DDRC_HIS_MERR_EXPDATA3 �Ĵ����ṹ���塣��ַƫ����:0x360����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_MERR_EXPDATA3��DDR ECC����ش���ʱ��������ȷ������3
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  merr_expdata3 : 32; /* bit[0-31]: DDRC ECC����ش���ʱ��������ȷ������127~96bit�Ĵ�����
                                                        ע�⣺�˼Ĵ�����¼��һ�η�������ش�������ݵ�λ��ַ���������Ӧ�Ķ���ش����ж�ʱ����������� */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_MERR_EXPDATA3_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_MERR_EXPDATA3_merr_expdata3_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_MERR_EXPDATA3_merr_expdata3_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_MERR_EXPDATA4_UNION
 �ṹ˵��  : DDRC_HIS_MERR_EXPDATA4 �Ĵ����ṹ���塣��ַƫ����:0x364����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_MERR_EXPDATA4��DDR ECC����ش���ʱ��������ȷ������4
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  merr_expdata4 : 32; /* bit[0-31]: DDRC ECC����ش���ʱ��������ȷ������159~128bit�Ĵ�����
                                                        ע�⣺�˼Ĵ�����¼��һ�η�������ش�������ݵ�λ��ַ���������Ӧ�Ķ���ش����ж�ʱ����������� */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_MERR_EXPDATA4_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_MERR_EXPDATA4_merr_expdata4_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_MERR_EXPDATA4_merr_expdata4_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_MERR_EXPDATA5_UNION
 �ṹ˵��  : DDRC_HIS_MERR_EXPDATA5 �Ĵ����ṹ���塣��ַƫ����:0x368����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_MERR_EXPDATA5��DDR ECC����ش���ʱ��������ȷ������5
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  merr_expdata5 : 32; /* bit[0-31]: DDRC ECC����ش���ʱ��������ȷ������191~160bit�Ĵ�����
                                                        ע�⣺�˼Ĵ�����¼��һ�η�������ش�������ݵ�λ��ַ���������Ӧ�Ķ���ش����ж�ʱ����������� */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_MERR_EXPDATA5_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_MERR_EXPDATA5_merr_expdata5_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_MERR_EXPDATA5_merr_expdata5_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_MERR_EXPDATA6_UNION
 �ṹ˵��  : DDRC_HIS_MERR_EXPDATA6 �Ĵ����ṹ���塣��ַƫ����:0x36C����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_MERR_EXPDATA6��DDR ECC����ش���ʱ��������ȷ������6
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  merr_expdata6 : 32; /* bit[0-31]: DDRC ECC����ش���ʱ��������ȷ������223~192bit�Ĵ�����
                                                        ע�⣺�˼Ĵ�����¼��һ�η�������ش�������ݵ�λ��ַ���������Ӧ�Ķ���ش����ж�ʱ����������� */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_MERR_EXPDATA6_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_MERR_EXPDATA6_merr_expdata6_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_MERR_EXPDATA6_merr_expdata6_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_MERR_EXPDATA7_UNION
 �ṹ˵��  : DDRC_HIS_MERR_EXPDATA7 �Ĵ����ṹ���塣��ַƫ����:0x370����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_MERR_EXPDATA7��DDR ECC����ش���ʱ��������ȷ������7
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  merr_expdata7 : 32; /* bit[0-31]: DDRC ECC����ش���ʱ��������ȷ������255~224bit�Ĵ�����
                                                        ע�⣺�˼Ĵ�����¼��һ�η�������ش�������ݵ�λ��ַ���������Ӧ�Ķ���ش����ж�ʱ����������� */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_MERR_EXPDATA7_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_MERR_EXPDATA7_merr_expdata7_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_MERR_EXPDATA7_merr_expdata7_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_MERR_EXPDATA8_UNION
 �ṹ˵��  : DDRC_HIS_MERR_EXPDATA8 �Ĵ����ṹ���塣��ַƫ����:0x374����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_MERR_EXPDATA8��DDR ECC����ش���ʱ��������ȷ������8
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  merr_expdata8 : 32; /* bit[0-31]: DDRC ECC����ش���ʱ��������ȷ������287~256bit�Ĵ�����ECCУ��λ����
                                                        ע�⣺�˼Ĵ�����¼��һ�η�������ش�������ݵ�λ��ַ���������Ӧ�Ķ���ش����ж�ʱ����������� */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_MERR_EXPDATA8_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_MERR_EXPDATA8_merr_expdata8_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_MERR_EXPDATA8_merr_expdata8_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_SERRCNT_UNION
 �ṹ˵��  : DDRC_HIS_SERRCNT �Ĵ����ṹ���塣��ַƫ����:0x378����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_SERRCNT��DDRC��ECC����ͳ�ƼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  serr_cnt : 32; /* bit[0-31]: ������ECC���ݴ���ͳ��ֵ���ͼ��� ��
                                                   ע�⣺�˼Ĵ���Ϊ���塣 */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_SERRCNT_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_SERRCNT_serr_cnt_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_SERRCNT_serr_cnt_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_MERRCNT_UNION
 �ṹ˵��  : DDRC_HIS_MERRCNT �Ĵ����ṹ���塣��ַƫ����:0x37C����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_SERRCNT��DDRC��ECC����ͳ�ƼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  merr_cnt : 32; /* bit[0-31]: ��������ݴ���ͳ��ֵ���ͼ��� ��
                                                   ע�⣺�˼Ĵ���Ϊ���塣 */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_MERRCNT_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_MERRCNT_merr_cnt_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_MERRCNT_merr_cnt_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_FLUX_WR_UNION
 �ṹ˵��  : DDRC_HIS_FLUX_WR �Ĵ����ṹ���塣��ַƫ����:0x380����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_FLUX_WR��DDRC����д��������ͳ�ƼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  flux_wr : 32; /* bit[0-31]: DDRC����ID��MASTERд����ͳ�ơ�����Чͳ�������ڼ�����
                                                  ��λΪDMCλ��
                                                  ��perf_mode=1 ʱ�����ά�֡�
                                                  ��perf_mode=0 ʱ�������ơ�
                                                  ����һ��ͳ�ƿ�ʼʱ�����㡣 */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_FLUX_WR_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_FLUX_WR_flux_wr_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_FLUX_WR_flux_wr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_FLUX_RD_UNION
 �ṹ˵��  : DDRC_HIS_FLUX_RD �Ĵ����ṹ���塣��ַƫ����:0x384����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_FLUX_RD��DDRC���ж���������ͳ�ƼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  flux_rd : 32; /* bit[0-31]: DDRC����ID��MASTER������ͳ�ơ�����Чͳ�������ڼ�����
                                                  ��λΪDMCλ��
                                                  ��perf_mode=1 ʱ�����ά�֡�
                                                  ��perf_mode=0 ʱ�������ơ�
                                                  ����һ��ͳ�ƿ�ʼʱ�����㡣 */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_FLUX_RD_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_FLUX_RD_flux_rd_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_FLUX_RD_flux_rd_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_FLUX_WCMD_UNION
 �ṹ˵��  : DDRC_HIS_FLUX_WCMD �Ĵ����ṹ���塣��ַƫ����:0x0388����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_FLUX_WCMD��DDRC����д������Ŀ
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  flux_wr_cmd : 32; /* bit[0-31]: DDRC����ID��MASTERд�������ͳ�ơ�����Чͳ�������ڼ�����
                                                      ��perf_mode=1 ʱ�����ά�֡�
                                                      ��perf_mode=0 ʱ�������ơ�
                                                      ����һ��ͳ�ƿ�ʼʱ�����㡣 */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_FLUX_WCMD_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_FLUX_WCMD_flux_wr_cmd_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_FLUX_WCMD_flux_wr_cmd_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_FLUX_RCMD_UNION
 �ṹ˵��  : DDRC_HIS_FLUX_RCMD �Ĵ����ṹ���塣��ַƫ����:0x038C����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_FLUX_RCMD��DDRC���ж�������Ŀ
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  flux_rd_cmd : 32; /* bit[0-31]: DDRC����ID��MASTER���������ͳ�ơ�����Чͳ�������ڼ�����
                                                      ��perf_mode=1 ʱ�����ά�֡�
                                                      ��perf_mode=0 ʱ�������ơ�
                                                      ����һ��ͳ�ƿ�ʼʱ�����㡣 */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_FLUX_RCMD_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_FLUX_RCMD_flux_rd_cmd_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_FLUX_RCMD_flux_rd_cmd_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_FLUXID_WR_UNION
 �ṹ˵��  : DDRC_HIS_FLUXID_WR �Ĵ����ṹ���塣��ַƫ����:0x390����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_FLUXID_WR��DDRCָ��IDд����ͳ�ƼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  fluxid_wr : 32; /* bit[0-31]: DDRCָ��ID��MASTERд����ͳ�ơ�����Чͳ�������ڼ�����
                                                    ��λΪDMCλ��
                                                    ��perf_mode=1 ʱ�����ά�֡�
                                                    ��perf_mode=0 ʱ�������ơ�
                                                    ����һ��ͳ�ƿ�ʼʱ�����㡣 */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_FLUXID_WR_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_FLUXID_WR_fluxid_wr_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_FLUXID_WR_fluxid_wr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_FLUXID_RD_UNION
 �ṹ˵��  : DDRC_HIS_FLUXID_RD �Ĵ����ṹ���塣��ַƫ����:0x394����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_FLUXID_RD��DDRCָ��ID������ͳ�ƼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  fluxid_rd : 32; /* bit[0-31]: DDRCָ��ID��MASTER������ͳ�ơ�����Чͳ�������ڼ�����
                                                    ��λΪDMCλ��
                                                    ��perf_mode=1 ʱ�����ά�֡�
                                                    ��perf_mode=0 ʱ�������ơ�
                                                    ����һ��ͳ�ƿ�ʼʱ�����㡣 */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_FLUXID_RD_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_FLUXID_RD_fluxid_rd_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_FLUXID_RD_fluxid_rd_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_FLUXID_WCMD_UNION
 �ṹ˵��  : DDRC_HIS_FLUXID_WCMD �Ĵ����ṹ���塣��ַƫ����:0x0398����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_FLUXID_WCMD��DDRC����д������Ŀ
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  fluxid_wr_cmd : 32; /* bit[0-31]: DDRCָ��ID��MASTERд�������ͳ�ơ�����Чͳ�������ڼ�����
                                                        ��λΪDMCλ��
                                                        ��perf_mode=1 ʱ�����ά�֡�
                                                        ��perf_mode=0 ʱ�������ơ�
                                                        ����һ��ͳ�ƿ�ʼʱ�����㡣 */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_FLUXID_WCMD_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_FLUXID_WCMD_fluxid_wr_cmd_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_FLUXID_WCMD_fluxid_wr_cmd_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_FLUXID_RCMD_UNION
 �ṹ˵��  : DDRC_HIS_FLUXID_RCMD �Ĵ����ṹ���塣��ַƫ����:0x039C����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_FLUX_RCMD��DDRC���ж�������Ŀ
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  fluxid_rd_cmd : 32; /* bit[0-31]: DDRCָ��ID��MASTER���������ͳ�ơ�����Чͳ�������ڼ�����
                                                        ��perf_mode=1 ʱ�����ά�֡�
                                                        ��perf_mode=0 ʱ�������ơ�
                                                        ����һ��ͳ�ƿ�ʼʱ�����㡣 */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_FLUXID_RCMD_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_FLUXID_RCMD_fluxid_rd_cmd_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_FLUXID_RCMD_fluxid_rd_cmd_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_WLATCNT0_UNION
 �ṹ˵��  : DDRC_HIS_WLATCNT0 �Ĵ����ṹ���塣��ַƫ����:0x3A0����ֵ:0x0000FFFF�����:32
 �Ĵ���˵��: DDRC_HIS_WLATCNT0��DDRCָ��ID��д����Latencyͳ�ƼĴ���0��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  wlatcnt_min : 16; /* bit[0-15] : DDRCָ��ID��д������СLatencyͳ�ơ�������ά�����ֵ������һ��ͳ�ƿ�ʼʱ�����㡣 */
        unsigned int  wlatcnt_max : 16; /* bit[16-31]: DDRCָ��ID��д�������Latencyͳ�ơ�
                                                       ��һ��ͳ�ƿ�ʼʱ�����㡣 */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_WLATCNT0_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_WLATCNT0_wlatcnt_min_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_WLATCNT0_wlatcnt_min_END    (15)
#define SOC_MDDRC_DMC_DDRC_HIS_WLATCNT0_wlatcnt_max_START  (16)
#define SOC_MDDRC_DMC_DDRC_HIS_WLATCNT0_wlatcnt_max_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_WLATCNT1_UNION
 �ṹ˵��  : DDRC_HIS_WLATCNT1 �Ĵ����ṹ���塣��ַƫ����:0x3A4����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_WLATCNT1��DDRCָ��ID��д����Latencyͳ�ƼĴ���1
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  wlatcnt_all : 32; /* bit[0-31]: ��ͳ�������ڣ�ָ��ID��д�����Latency�ۼ�ֵ�����Ե�4λ�Ľ������
                                                      ��perf_mode=1 ʱ�����ά�֡�
                                                      ��perf_mode=0 ʱ�������ơ�
                                                      ��һ�´�ͳ�ƿ�ʼʱ�����㡣
                                                      ע�⣺���������(wlatcnt_all)/fluxid_wr_cmd�õ�ָ��ID��д�����ƽ��latency�� */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_WLATCNT1_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_WLATCNT1_wlatcnt_all_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_WLATCNT1_wlatcnt_all_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_RLATCNT0_UNION
 �ṹ˵��  : DDRC_HIS_RLATCNT0 �Ĵ����ṹ���塣��ַƫ����:0x3A8����ֵ:0x0000FFFF�����:32
 �Ĵ���˵��: DDRC_HIS_RLATCNT0��DDRCָ��ID�Ķ�����Latencyͳ�ƼĴ���0��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  rlatcnt_min : 16; /* bit[0-15] : DDRCָ��ID�Ķ�������СLatencyͳ��
                                                       ��
                                                       ע�⣺��������С��ʱΪrlatcnt_min+
                                                       inhere_rlatcnt.
                                                       ������ά�����ֵ������һ��ͳ�ƿ�ʼʱ�����㡣 */
        unsigned int  rlatcnt_max : 16; /* bit[16-31]: DDRCָ��ID�Ķ��������Latencyͳ�ơ�
                                                       �����������ʱΪrlatcnt_max+
                                                       inhere_rlatcnt.
                                                       
                                                       ������ά�����ֵ������һ��ͳ�ƿ�ʼʱ�����㡣 */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_RLATCNT0_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_RLATCNT0_rlatcnt_min_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_RLATCNT0_rlatcnt_min_END    (15)
#define SOC_MDDRC_DMC_DDRC_HIS_RLATCNT0_rlatcnt_max_START  (16)
#define SOC_MDDRC_DMC_DDRC_HIS_RLATCNT0_rlatcnt_max_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_RLATCNT1_UNION
 �ṹ˵��  : DDRC_HIS_RLATCNT1 �Ĵ����ṹ���塣��ַƫ����:0x3AC����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_RLATCNT1��DDRCָ��ID�Ķ�����Latencyͳ�ƼĴ���1��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  rlatcnt_all : 32; /* bit[0-31]: ��ͳ�������ڣ�ָ��ID�Ķ������Latency�ۼ�ֵ�����Ե�4λ�Ľ������
                                                      ��perf_mode=1 ʱ�����ά�֡�
                                                      ��perf_mode=0 ʱ�������ơ�һ�´�ͳ�ƿ�ʼʱ�����㡣
                                                      ע�⣺���������(rlatcnt_all/fluxid_rd_cmd+inhere_rlatcnt�õ�ָ��ID�Ķ������ƽ��latency�� */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_RLATCNT1_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_RLATCNT1_rlatcnt_all_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_RLATCNT1_rlatcnt_all_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_INHERE_RLAT_CNT_UNION
 �ṹ˵��  : DDRC_HIS_INHERE_RLAT_CNT �Ĵ����ṹ���塣��ַƫ����:0x3B0����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_INHERE_RLAT_CNT�Ƕ�ͨ��������ʱ�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  inhere_rlatcnt : 16; /* bit[0-15] : ��ʾDDRC��PHY�Զ�����ͨ���Ĺ�����ʱ;�˼Ĵ���Ҫ��rlatcnt_min,rlatcnt_max,rlatcnt_all,fluxid_rd_cmd���ʹ�õõ�������latency�� */
        unsigned int  reserved       : 16; /* bit[16-31]: ������ */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_INHERE_RLAT_CNT_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_INHERE_RLAT_CNT_inhere_rlatcnt_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_INHERE_RLAT_CNT_inhere_rlatcnt_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_STACMD_RPT_UNION
 �ṹ˵��  : DDRC_STACMD_RPT �Ĵ����ṹ���塣��ַƫ����:0x3B8����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_STACMD_RPT��DMC����������ۻ��Ĵ����Ķ�ָ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  stacmd_rpt : 3;  /* bit[0-2] : ������ͳ�ƴ��ڻ��ڷ�ֵͳ��ʱ�ᱣ�������8��ͳ�ƽ������ָ������ָʾDDRC_HIS_CMD_SUM���Ľ��ָ��ڼ���ͳ�ƽ����
                                                     3'b000:���һ�Σ�
                                                     3'b001:�ν�һ�Σ�
                                                      ������
                                                     3'b111:�����7��ͳ�ƽ���� */
        unsigned int  reserved   : 29; /* bit[3-31]: ������ */
    } reg;
} SOC_MDDRC_DMC_DDRC_STACMD_RPT_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_STACMD_RPT_stacmd_rpt_START  (0)
#define SOC_MDDRC_DMC_DDRC_STACMD_RPT_stacmd_rpt_END    (2)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_CMD_SUM_UNION
 �ṹ˵��  : DDRC_HIS_CMD_SUM �Ĵ����ṹ���塣��ַƫ����:0x3BC����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_CMD_SUM��DMC����������ۻ��Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  dmc_cmd_sum : 16; /* bit[0-15] : �洢����ͳ�ƽ��[27:12]bit
                                                       �ڷ���ֵ����ģʽ�£���ֵ�����������ͳ�ƽ��
                                                       ����ֵ����ģʽ�£���ֵ����stacmd_rpt��ֵ�ֱ��ʾ����˸�����ĳ��ͳ�����ڵ�ͳ��ֵ */
        unsigned int  dmc_dat_sum : 16; /* bit[16-31]: �洢����ͳ�ƽ��[23:8]bit
                                                       �ڷ���ֵ����ģʽ�£���ֵ�����������ͳ�ƽ��
                                                       ����ֵ����ģʽ�£���ֵ����stacmd_rpt��ֵ�ֱ��ʾ����˸�����ĳ��ͳ�����ڵ�ͳ��ֵ
                                                       ע��Ҫ���ȡ����ͳ������˴εĽ����load_stat_modeһ��Ҫ����2������������ͳ�ƽ������DMC��λ��Ϊ��λ�� */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_CMD_SUM_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_CMD_SUM_dmc_cmd_sum_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_CMD_SUM_dmc_cmd_sum_END    (15)
#define SOC_MDDRC_DMC_DDRC_HIS_CMD_SUM_dmc_dat_sum_START  (16)
#define SOC_MDDRC_DMC_DDRC_HIS_CMD_SUM_dmc_dat_sum_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_PRE_CMD_UNION
 �ṹ˵��  : DDRC_HIS_PRE_CMD �Ĵ����ṹ���塣��ַƫ����:0x3C0����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_PRE_CMD��DDRC����ͳ�Ƶ�PRECHARGE�������
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  dmc_pre_cmd : 32; /* bit[0-31]: DDRC����ID��MASTER PRECHARGE�������ͳ�ơ�����Чͳ�������ڼ�����
                                                      ��perf_mode=1 ʱ�����ά�֡�
                                                      ��perf_mode=0 ʱ�������ơ�
                                                      ����һ��ͳ�ƿ�ʼʱ�����㡣 */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_PRE_CMD_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_PRE_CMD_dmc_pre_cmd_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_PRE_CMD_dmc_pre_cmd_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_ACT_CMD_UNION
 �ṹ˵��  : DDRC_HIS_ACT_CMD �Ĵ����ṹ���塣��ַƫ����:0x3C4����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_ACT_CMD��DDRC����ͳ�Ƶ�ACTIVE�������
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  dmc_act_cmd : 32; /* bit[0-31]: DDRC����ID��MASTER ACTIVE�������ͳ�ơ�����Чͳ�������ڼ�����
                                                      ��perf_mode=1 ʱ�����ά�֡�
                                                      ��perf_mode=0 ʱ�������ơ�
                                                      ����һ��ͳ�ƿ�ʼʱ�����㡣 */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_ACT_CMD_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_ACT_CMD_dmc_act_cmd_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_ACT_CMD_dmc_act_cmd_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_BNK_CHG_UNION
 �ṹ˵��  : DDRC_HIS_BNK_CHG �Ĵ����ṹ���塣��ַƫ����:0x3C8����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_BNK_CHG��DDRC����ͳ�Ƶ�BANK�л�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  dmc_bnk_chg : 32; /* bit[0-31]: DDRC����ID��MASTER BANK�л����������ͳ�ơ�����Чͳ�������ڼ�����
                                                      ��perf_mode=1 ʱ�����ά�֡�
                                                      ��perf_mode=0 ʱ�������ơ�
                                                      ����һ��ͳ�ƿ�ʼʱ�����㡣 */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_BNK_CHG_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_BNK_CHG_dmc_bnk_chg_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_BNK_CHG_dmc_bnk_chg_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_RNK_CHG_UNION
 �ṹ˵��  : DDRC_HIS_RNK_CHG �Ĵ����ṹ���塣��ַƫ����:0x3CC����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_RNK_CHG��DDRC����ͳ�ƵĶ�д����Ƭѡ�л�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  dmc_rnk_chg : 32; /* bit[0-31]: DDRC����ID��MASTER ��д����RANK�л�����ͳ�ơ�����Чͳ�������ڼ�����
                                                      ��perf_mode=1 ʱ�����ά�֡�
                                                      ��perf_mode=0 ʱ�������ơ�
                                                      ����һ��ͳ�ƿ�ʼʱ�����㡣 */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_RNK_CHG_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_RNK_CHG_dmc_rnk_chg_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_RNK_CHG_dmc_rnk_chg_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_RW_CHG_UNION
 �ṹ˵��  : DDRC_HIS_RW_CHG �Ĵ����ṹ���塣��ַƫ����:0x3D0����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_RW_CHG��DDRC����ͳ�ƵĶ�д�����л�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  dmc_rw_chg : 32; /* bit[0-31]: DDRC����ID��MASTER ��дE�����л�����ͳ�ơ�����Чͳ�������ڼ�����
                                                     ��perf_mode=1 ʱ�����ά�֡�
                                                     ��perf_mode=0 ʱ�������ơ�
                                                     ����һ��ͳ�ƿ�ʼʱ�����㡣 */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_RW_CHG_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_RW_CHG_dmc_rw_chg_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_RW_CHG_dmc_rw_chg_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_TMON_ERR_UNION
 �ṹ˵��  : DDRC_HIS_TMON_ERR �Ĵ����ṹ���塣��ַƫ����:0x3E0����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_TMON_ERR��DMCѭ����ȡLPDDR2/LPDDR3�¶ȵĴ���״̬�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  tmon_err      : 8;  /* bit[0-7]  : ��LPDDR2/LPDDR3��ȡ���쳣�¶�ֵ��
                                                         ��¼��һ�δ����ֵ�����¶ȴ����ն�����Ժ����¼�¼��һ���쳣ֵ�� */
        unsigned int  reserved      : 8;  /* bit[8-15] : ������ */
        unsigned int  tmon_err_rank : 16; /* bit[16-31]: ��LPDDR2/LPDDR3��ȡ���쳣���ݶ�Ӧ��RANK�� */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_TMON_ERR_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_TMON_ERR_tmon_err_START       (0)
#define SOC_MDDRC_DMC_DDRC_HIS_TMON_ERR_tmon_err_END         (7)
#define SOC_MDDRC_DMC_DDRC_HIS_TMON_ERR_tmon_err_rank_START  (16)
#define SOC_MDDRC_DMC_DDRC_HIS_TMON_ERR_tmon_err_rank_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_RERR_ADDRL_UNION
 �ṹ˵��  : DDRC_HIS_RERR_ADDRL �Ĵ����ṹ���塣��ַƫ����:0x3F0����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_RERR_ADDRL�Ƿ���DMC��ֹ��RANK�����ַ�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  rerr_addrl : 32; /* bit[0-31]: ��ϵͳ���ʵĵ�ַָ���ֹ��rankʱ��ͨ��disable_rankָ��������¼�����ַ�ĵ�32bit��
                                                     �üĴ���������λ�ˣ�дDDRC_HIS_RERR_CNT�Ĵ������㡣 */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_RERR_ADDRL_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_RERR_ADDRL_rerr_addrl_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_RERR_ADDRL_rerr_addrl_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_RERR_ADDRH_UNION
 �ṹ˵��  : DDRC_HIS_RERR_ADDRH �Ĵ����ṹ���塣��ַƫ����:0x3F4����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_RERR_ADDRH�Ƿ���DMC��ֹ��RANK�����ַ�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  rerr_addrh : 32; /* bit[0-31]: ��ϵͳ���ʵĵ�ַָ���ֹ��rankʱ��ͨ��disable_rankָ��������¼�����ַ�ĸ�λ��ַ��
                                                     �üĴ���������λ�ˣ�дDDRC_HIS_RERR_CNT�Ĵ������㡣 */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_RERR_ADDRH_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_RERR_ADDRH_rerr_addrh_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_RERR_ADDRH_rerr_addrh_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_RERR_ID_UNION
 �ṹ˵��  : DDRC_HIS_RERR_ID �Ĵ����ṹ���塣��ַƫ����:0x3F8����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_RERR_ID�Ƿ���DMC��ֹ��RANK����ID�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  rerr_id   : 31; /* bit[0-30]: ��ϵͳ���ʵĵ�ַָ���ֹ��rankʱ��ͨ��disable_rankָ��������¼���������ID��
                                                    �üĴ���������λ�ˣ�дDDRC_HIS_RERR_CNT�Ĵ������㡣 */
        unsigned int  rerr_type : 1;  /* bit[31]  : ��ϵͳ���ʵĵ�ַָ���ֹ��rankʱ��ͨ��disable_rankָ��������¼���������burst���͡�
                                                    0����������
                                                    1��д������
                                                    �üĴ���������λ�ˣ�дDDRC_HIS_RERR_CNT�Ĵ������㡣 */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_RERR_ID_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_RERR_ID_rerr_id_START    (0)
#define SOC_MDDRC_DMC_DDRC_HIS_RERR_ID_rerr_id_END      (30)
#define SOC_MDDRC_DMC_DDRC_HIS_RERR_ID_rerr_type_START  (31)
#define SOC_MDDRC_DMC_DDRC_HIS_RERR_ID_rerr_type_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_RERR_CNT_UNION
 �ṹ˵��  : DDRC_HIS_RERR_CNT �Ĵ����ṹ���塣��ַƫ����:0x3FC����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_RERR_CNT�Ƿ���DMC��ֹ��RANK�ۻ���������Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  rerr_cnt : 32; /* bit[0-31]: ��ϵͳ���ʵĵ�ַָ���ֹ��rankʱ��ͨ��disable_rankָ��������¼����������ۻ�������
                                                   �üĴ���������λ�ˣ�дDDRC_HIS_RERR_CNT�Ĵ������㡣 */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_RERR_CNT_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_RERR_CNT_rerr_cnt_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_RERR_CNT_rerr_cnt_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_REC_ERR0_UNION
 �ṹ˵��  : DDRC_HIS_REC_ERR0 �Ĵ����ṹ���塣��ַƫ����:0x400����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_REC_ERR0��DMC����ָ������д�����Ϣ�Ĵ���0
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  crcerr_cnt : 16; /* bit[0-15] : ������CRC����Ĵ�������crc_enʹ��ʱ��Alert_n����һ�ε�ʱ��С���趨����ֵ���ж�Ϊһ��CRC����,дDDRC_HIS_REC_ERR0�Ĵ������� */
        unsigned int  parerr_cnt : 16; /* bit[16-31]: ������CA Parity����Ĵ�������parity_enʹ��ʱ��Alert_n����һ�ε�ʱ�䳬���趨����ֵ���ж�Ϊһ��CA Parity����,дDDRC_HIS_REC_ERR0�Ĵ������� */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_REC_ERR0_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_REC_ERR0_crcerr_cnt_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_REC_ERR0_crcerr_cnt_END    (15)
#define SOC_MDDRC_DMC_DDRC_HIS_REC_ERR0_parerr_cnt_START  (16)
#define SOC_MDDRC_DMC_DDRC_HIS_REC_ERR0_parerr_cnt_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_REC_ERR1_UNION
 �ṹ˵��  : DDRC_HIS_REC_ERR1 �Ĵ����ṹ���塣��ַƫ����:0x404����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_REC_ERR0��DMC����ָ������д�����Ϣ�Ĵ���1
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  overnum_cnt   : 8;  /* bit[0-7]  : �ж�ΪCRC�����Ǵ��󴰿���û��д�������Ĵ���,дDDRC_HIS_REC_ERR1�Ĵ������� */
        unsigned int  crc_no_wr_cnt : 8;  /* bit[8-15] : �ж�ΪCRC�����Ǵ��󴰿���û��д�������Ĵ���,дDDRC_HIS_REC_ERR1�Ĵ������� */
        unsigned int  rec_cnt       : 4;  /* bit[16-19]: ��ǰ�ָ������й�������Ƕ�״������ */
        unsigned int  overnum_err   : 1;  /* bit[20]   : ��ǰ�ָ��������Ƿ���Ƕ�״�����������趨ֵ��Ƕ�״���ָ�ָ�����������ֳ����˴���ֱ���ָ�������ɣ� */
        unsigned int  crc_no_wr     : 1;  /* bit[21]   : ��ǰ�ָ������з������ж�ΪCRC�����Ǵ��󴰿���û��д������� */
        unsigned int  reseverd      : 10; /* bit[22-31]: ������ */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_REC_ERR1_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_REC_ERR1_overnum_cnt_START    (0)
#define SOC_MDDRC_DMC_DDRC_HIS_REC_ERR1_overnum_cnt_END      (7)
#define SOC_MDDRC_DMC_DDRC_HIS_REC_ERR1_crc_no_wr_cnt_START  (8)
#define SOC_MDDRC_DMC_DDRC_HIS_REC_ERR1_crc_no_wr_cnt_END    (15)
#define SOC_MDDRC_DMC_DDRC_HIS_REC_ERR1_rec_cnt_START        (16)
#define SOC_MDDRC_DMC_DDRC_HIS_REC_ERR1_rec_cnt_END          (19)
#define SOC_MDDRC_DMC_DDRC_HIS_REC_ERR1_overnum_err_START    (20)
#define SOC_MDDRC_DMC_DDRC_HIS_REC_ERR1_overnum_err_END      (20)
#define SOC_MDDRC_DMC_DDRC_HIS_REC_ERR1_crc_no_wr_START      (21)
#define SOC_MDDRC_DMC_DDRC_HIS_REC_ERR1_crc_no_wr_END        (21)
#define SOC_MDDRC_DMC_DDRC_HIS_REC_ERR1_reseverd_START       (22)
#define SOC_MDDRC_DMC_DDRC_HIS_REC_ERR1_reseverd_END         (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERR_INFO_UNION
 �ṹ˵��  : DDRC_HIS_MTEST_ERR_INFO �Ĵ����ṹ���塣��ַƫ����:0x410����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_MTEST_ERR_INFO��MTEST����ָʾ�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mtest_err     : 1;  /* bit[0]    : mtest����ָʾ��
                                                         0��û�д���
                                                         1���д��� */
        unsigned int  reserved_0    : 3;  /* bit[1-3]  : ������ */
        unsigned int  mtest_bg_cnt  : 4;  /* bit[4-7]  : ��mtest_errΪ��ʱ�������ʾ��������ʱ�����ڲ��Եڼ��鱳������
                                                         0����һ�鱳������
                                                         1����һ�鱳������
                                                         N����N�鱳������ */
        unsigned int  mtest_element : 3;  /* bit[8-10] : ��mtest_errΪ��ʱ�������ʾ��������ʱ�����ڲ��Եĵڼ�����
                                                         1����һ����
                                                         2���ڶ�����
                                                         N����N����
                                                         0�������� */
        unsigned int  reserved_1    : 21; /* bit[11-31]: ������ */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERR_INFO_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERR_INFO_mtest_err_START      (0)
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERR_INFO_mtest_err_END        (0)
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERR_INFO_mtest_bg_cnt_START   (4)
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERR_INFO_mtest_bg_cnt_END     (7)
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERR_INFO_mtest_element_START  (8)
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERR_INFO_mtest_element_END    (10)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRADDR_UNION
 �ṹ˵��  : DDRC_HIS_MTEST_ERRADDR �Ĵ����ṹ���塣��ַƫ����:0x414����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_RLATCNT0��Memory Test����ĵ�ַ
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mtest_err_addr : 28; /* bit[0-27] : mtest�����ַ����mtest Errorʱ����Ч��
                                                          ʵ�ʱ�ʾ{mtest_err_addr,6'b0}��ַ��ʼ��64byte�������д��� */
        unsigned int  reserved       : 4;  /* bit[28-31]: ������ */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRADDR_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRADDR_mtest_err_addr_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRADDR_mtest_err_addr_END    (27)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA0_UNION
 �ṹ˵��  : DDRC_HIS_MTEST_EXPDATA0 �Ĵ����ṹ���塣��ַƫ����:0x418����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_MTEST_EXPDATA0��DDR MTEST����ʱ��������ȷ������0
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mtest_exp_data0 : 32; /* bit[0-31]: mtest�����������ݡ�31��0��bit�� */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA0_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA0_mtest_exp_data0_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA0_mtest_exp_data0_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA1_UNION
 �ṹ˵��  : DDRC_HIS_MTEST_EXPDATA1 �Ĵ����ṹ���塣��ַƫ����:0x41C����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_MTEST_EXPDATA1��DDR MTEST����ش���ʱ��������ȷ������1
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mtest_exp_data1 : 32; /* bit[0-31]: mtest�����������ݡ�63��32��bit�� */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA1_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA1_mtest_exp_data1_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA1_mtest_exp_data1_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA2_UNION
 �ṹ˵��  : DDRC_HIS_MTEST_EXPDATA2 �Ĵ����ṹ���塣��ַƫ����:0x420����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_MTEST_EXPDATA2��DDR MTEST����ʱ��������ȷ������2
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mtest_exp_data2 : 32; /* bit[0-31]: mtest�����������ݡ�95��64��bit�� */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA2_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA2_mtest_exp_data2_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA2_mtest_exp_data2_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA3_UNION
 �ṹ˵��  : DDRC_HIS_MTEST_EXPDATA3 �Ĵ����ṹ���塣��ַƫ����:0x424����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_MTEST_EXPDATA3��DDR MTEST����ش���ʱ��������ȷ������3
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mtest_exp_data3 : 32; /* bit[0-31]: mtest�����������ݡ�127��96��bit�� */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA3_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA3_mtest_exp_data3_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA3_mtest_exp_data3_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA4_UNION
 �ṹ˵��  : DDRC_HIS_MTEST_EXPDATA4 �Ĵ����ṹ���塣��ַƫ����:0x428����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_MTEST_EXPDATA4��DDR MTEST����ʱ��������ȷ������4
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mtest_exp_data4 : 32; /* bit[0-31]: mtest�����������ݡ�159��128��bit�� */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA4_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA4_mtest_exp_data4_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA4_mtest_exp_data4_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA5_UNION
 �ṹ˵��  : DDRC_HIS_MTEST_EXPDATA5 �Ĵ����ṹ���塣��ַƫ����:0x42C����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_MTEST_EXPDATA5��DDR MTEST����ش���ʱ��������ȷ������5
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mtest_exp_data5 : 32; /* bit[0-31]: mtest�����������ݡ�191��160��bit�� */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA5_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA5_mtest_exp_data5_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA5_mtest_exp_data5_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA6_UNION
 �ṹ˵��  : DDRC_HIS_MTEST_EXPDATA6 �Ĵ����ṹ���塣��ַƫ����:0x430����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_MTEST_EXPDATA6��DDR MTEST����ʱ��������ȷ������6
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mtest_exp_data6 : 32; /* bit[0-31]: mtest�����������ݡ�223��192��bit�� */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA6_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA6_mtest_exp_data6_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA6_mtest_exp_data6_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA7_UNION
 �ṹ˵��  : DDRC_HIS_MTEST_EXPDATA7 �Ĵ����ṹ���塣��ַƫ����:0x434����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_MTEST_EXPDATA7��DDR MTEST����ش���ʱ��������ȷ������7
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mtest_exp_data7 : 32; /* bit[0-31]: mtest�����������ݡ�255��224��bit�� */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA7_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA7_mtest_exp_data7_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA7_mtest_exp_data7_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA8_UNION
 �ṹ˵��  : DDRC_HIS_MTEST_EXPDATA8 �Ĵ����ṹ���塣��ַƫ����:0x438����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_MTEST_EXPDATA8��DDR MTEST����ʱ��������ȷ������8
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mtest_exp_data8 : 32; /* bit[0-31]: mtest�����������ݡ�287��256��bit�� */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA8_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA8_mtest_exp_data8_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA8_mtest_exp_data8_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA9_UNION
 �ṹ˵��  : DDRC_HIS_MTEST_EXPDATA9 �Ĵ����ṹ���塣��ַƫ����:0x43C����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_MTEST_EXPDATA9��DDR MTEST����ش���ʱ��������ȷ������9
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mtest_exp_data9 : 32; /* bit[0-31]: mtest�����������ݡ�319��288��bit�� */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA9_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA9_mtest_exp_data9_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA9_mtest_exp_data9_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA10_UNION
 �ṹ˵��  : DDRC_HIS_MTEST_EXPDATA10 �Ĵ����ṹ���塣��ַƫ����:0x440����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_MTEST_EXPDATA10��DDR MTEST����ʱ��������ȷ������10
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mtest_exp_data10 : 32; /* bit[0-31]: mtest�����������ݡ�351��320��bit�� */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA10_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA10_mtest_exp_data10_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA10_mtest_exp_data10_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA11_UNION
 �ṹ˵��  : DDRC_HIS_MTEST_EXPDATA11 �Ĵ����ṹ���塣��ַƫ����:0x444����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_MTEST_EXPDATA11��DDR MTEST����ش���ʱ��������ȷ������11
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mtest_exp_data11 : 32; /* bit[0-31]: mtest�����������ݡ�383��352��bit�� */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA11_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA11_mtest_exp_data11_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA11_mtest_exp_data11_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA12_UNION
 �ṹ˵��  : DDRC_HIS_MTEST_EXPDATA12 �Ĵ����ṹ���塣��ַƫ����:0x448����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_MTEST_EXPDATA12��DDR MTEST����ʱ��������ȷ������12
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mtest_exp_data12 : 32; /* bit[0-31]: mtest�����������ݡ�415��384��bit�� */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA12_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA12_mtest_exp_data12_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA12_mtest_exp_data12_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA13_UNION
 �ṹ˵��  : DDRC_HIS_MTEST_EXPDATA13 �Ĵ����ṹ���塣��ַƫ����:0x44C����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_MTEST_EXPDATA13��DDR MTEST����ش���ʱ��������ȷ������13
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mtest_exp_data13 : 32; /* bit[0-31]: mtest�����������ݡ�447��416��bit�� */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA13_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA13_mtest_exp_data13_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA13_mtest_exp_data13_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA14_UNION
 �ṹ˵��  : DDRC_HIS_MTEST_EXPDATA14 �Ĵ����ṹ���塣��ַƫ����:0x450����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_MTEST_EXPDATA14��DDR MTEST����ʱ��������ȷ������14
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mtest_exp_data14 : 32; /* bit[0-31]: mtest�����������ݡ�479��448��bit�� */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA14_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA14_mtest_exp_data14_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA14_mtest_exp_data14_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA15_UNION
 �ṹ˵��  : DDRC_HIS_MTEST_EXPDATA15 �Ĵ����ṹ���塣��ַƫ����:0x454����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_MTEST_EXPDATA15��DDR MTEST����ش���ʱ��������ȷ������15
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mtest_exp_data15 : 32; /* bit[0-31]: mtest�����������ݡ�511��480��bit�� */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA15_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA15_mtest_exp_data15_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA15_mtest_exp_data15_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA16_UNION
 �ṹ˵��  : DDRC_HIS_MTEST_EXPDATA16 �Ĵ����ṹ���塣��ַƫ����:0x458����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_MTEST_EXPDATA16��DDR MTEST����ʱ��������ȷ������16
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mtest_exp_data16 : 32; /* bit[0-31]: mtest�����������ݡ�543��512��bit�� */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA16_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA16_mtest_exp_data16_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA16_mtest_exp_data16_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA17_UNION
 �ṹ˵��  : DDRC_HIS_MTEST_EXPDATA17 �Ĵ����ṹ���塣��ַƫ����:0x45C����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_MTEST_EXPDATA17��DDR MTEST����ش���ʱ��������ȷ������17
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mtest_exp_data17 : 32; /* bit[0-31]: mtest�����������ݡ�575��544��bit�� */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA17_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA17_mtest_exp_data17_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_EXPDATA17_mtest_exp_data17_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA0_UNION
 �ṹ˵��  : DDRC_HIS_MTEST_ERRDATA0 �Ĵ����ṹ���塣��ַƫ����:0x460����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_MTEST_ERRDATA0��DDR MTEST����ʱ������0
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mtest_err_data0 : 32; /* bit[0-31]: mtest���Դ������ݡ�31��0��bit�� */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA0_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA0_mtest_err_data0_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA0_mtest_err_data0_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA1_UNION
 �ṹ˵��  : DDRC_HIS_MTEST_ERRDATA1 �Ĵ����ṹ���塣��ַƫ����:0x464����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_MTEST_ERRDATA1��DDR MTEST����ʱ������1
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mtest_err_data1 : 32; /* bit[0-31]: mtest���Դ������ݡ�63��32��bit�� */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA1_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA1_mtest_err_data1_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA1_mtest_err_data1_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA2_UNION
 �ṹ˵��  : DDRC_HIS_MTEST_ERRDATA2 �Ĵ����ṹ���塣��ַƫ����:0x468����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_MTEST_ERRDATA2��DDR MTEST����ʱ������2
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mtest_err_data2 : 32; /* bit[0-31]: mtest���Դ������ݡ�95��64��bit�� */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA2_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA2_mtest_err_data2_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA2_mtest_err_data2_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA3_UNION
 �ṹ˵��  : DDRC_HIS_MTEST_ERRDATA3 �Ĵ����ṹ���塣��ַƫ����:0x46C����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_MTEST_ERRDATA3��DDR MTEST����ʱ������3
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mtest_err_data3 : 32; /* bit[0-31]: mtest���Դ������ݡ�127��96��bit�� */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA3_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA3_mtest_err_data3_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA3_mtest_err_data3_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA4_UNION
 �ṹ˵��  : DDRC_HIS_MTEST_ERRDATA4 �Ĵ����ṹ���塣��ַƫ����:0x470����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_MTEST_ERRDATA4��DDR MTEST����ʱ������4
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mtest_err_data4 : 32; /* bit[0-31]: mtest���Դ������ݡ�159��128��bit�� */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA4_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA4_mtest_err_data4_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA4_mtest_err_data4_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA5_UNION
 �ṹ˵��  : DDRC_HIS_MTEST_ERRDATA5 �Ĵ����ṹ���塣��ַƫ����:0x474����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_MTEST_ERRDATA5��DDR MTEST����ʱ������5
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mtest_err_data5 : 32; /* bit[0-31]: mtest���Դ������ݡ�191��160��bit�� */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA5_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA5_mtest_err_data5_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA5_mtest_err_data5_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA6_UNION
 �ṹ˵��  : DDRC_HIS_MTEST_ERRDATA6 �Ĵ����ṹ���塣��ַƫ����:0x478����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_MTEST_ERRDATA6��DDR MTEST����ʱ������6
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mtest_err_data6 : 32; /* bit[0-31]: mtest���Դ������ݡ�223��192��bit�� */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA6_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA6_mtest_err_data6_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA6_mtest_err_data6_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA7_UNION
 �ṹ˵��  : DDRC_HIS_MTEST_ERRDATA7 �Ĵ����ṹ���塣��ַƫ����:0x47C����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_MTEST_ERRDATA7��DDR MTEST����ʱ������7
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mtest_err_data7 : 32; /* bit[0-31]: mtest���Դ������ݡ�255��224��bit�� */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA7_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA7_mtest_err_data7_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA7_mtest_err_data7_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA8_UNION
 �ṹ˵��  : DDRC_HIS_MTEST_ERRDATA8 �Ĵ����ṹ���塣��ַƫ����:0x480����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_MTEST_ERRDATA8��DDR MTEST����ʱ������8
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mtest_err_data8 : 32; /* bit[0-31]: mtest���Դ������ݡ�287��256��bit�� */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA8_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA8_mtest_err_data8_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA8_mtest_err_data8_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA9_UNION
 �ṹ˵��  : DDRC_HIS_MTEST_ERRDATA9 �Ĵ����ṹ���塣��ַƫ����:0x484����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_MTEST_ERRDATA9��DDR MTEST����ʱ������9
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mtest_err_data9 : 32; /* bit[0-31]: mtest���Դ������ݡ�319��288��bit�� */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA9_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA9_mtest_err_data9_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA9_mtest_err_data9_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA10_UNION
 �ṹ˵��  : DDRC_HIS_MTEST_ERRDATA10 �Ĵ����ṹ���塣��ַƫ����:0x488����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_MTEST_ERRDATA10��DDR MTEST����ʱ������10
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mtest_err_data10 : 32; /* bit[0-31]: mtest���Դ������ݡ�351��320��bit�� */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA10_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA10_mtest_err_data10_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA10_mtest_err_data10_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA11_UNION
 �ṹ˵��  : DDRC_HIS_MTEST_ERRDATA11 �Ĵ����ṹ���塣��ַƫ����:0x48C����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_MTEST_ERRDATA11��DDR MTEST����ʱ������11
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mtest_err_data11 : 32; /* bit[0-31]: mtest���Դ������ݡ�383��352��bit�� */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA11_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA11_mtest_err_data11_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA11_mtest_err_data11_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA12_UNION
 �ṹ˵��  : DDRC_HIS_MTEST_ERRDATA12 �Ĵ����ṹ���塣��ַƫ����:0x490����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_MTEST_ERRDATA12��DDR MTEST����ʱ������12
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mtest_err_data12 : 32; /* bit[0-31]: mtest���Դ������ݡ�415��384��bit�� */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA12_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA12_mtest_err_data12_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA12_mtest_err_data12_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA13_UNION
 �ṹ˵��  : DDRC_HIS_MTEST_ERRDATA13 �Ĵ����ṹ���塣��ַƫ����:0x494����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_MTEST_ERRDATA13��DDR MTEST����ʱ������13
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mtest_err_data13 : 32; /* bit[0-31]: mtest���Դ������ݡ�447��416��bit�� */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA13_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA13_mtest_err_data13_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA13_mtest_err_data13_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA14_UNION
 �ṹ˵��  : DDRC_HIS_MTEST_ERRDATA14 �Ĵ����ṹ���塣��ַƫ����:0x498����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_MTEST_ERRDATA14��DDR MTEST����ʱ������14
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mtest_err_data14 : 32; /* bit[0-31]: mtest���Դ������ݡ�479��448��bit�� */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA14_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA14_mtest_err_data14_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA14_mtest_err_data14_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA15_UNION
 �ṹ˵��  : DDRC_HIS_MTEST_ERRDATA15 �Ĵ����ṹ���塣��ַƫ����:0x49C����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_MTEST_ERRDATA15��DDR MTEST����ʱ������15
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mtest_err_data15 : 32; /* bit[0-31]: mtest���Դ������ݡ�511��480��bit�� */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA15_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA15_mtest_err_data15_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA15_mtest_err_data15_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA16_UNION
 �ṹ˵��  : DDRC_HIS_MTEST_ERRDATA16 �Ĵ����ṹ���塣��ַƫ����:0x4A0����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_MTEST_ERRDATA16��DDR MTEST����ʱ������16
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mtest_err_data16 : 32; /* bit[0-31]: mtest���Դ������ݡ�543��512��bit�� */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA16_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA16_mtest_err_data16_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA16_mtest_err_data16_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA17_UNION
 �ṹ˵��  : DDRC_HIS_MTEST_ERRDATA17 �Ĵ����ṹ���塣��ַƫ����:0x4A4����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_MTEST_ERRDATA16��DDR MTEST����ʱ������16
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mtest_err_data17 : 32; /* bit[0-31]: mtest���Դ������ݡ�575��544��bit�� */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA17_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA17_mtest_err_data17_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_MTEST_ERRDATA17_mtest_err_data17_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_SFC_RDATA0_UNION
 �ṹ˵��  : DDRC_HIS_SFC_RDATA0 �Ĵ����ṹ���塣��ַƫ����:0x4A8����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_SFC_RDATA0��SFC�����ݼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  rdata0 : 32; /* bit[0-31]: SFC������[31:0]��
                                                 ����[7:0]��RD_MRSģʽ��Ϊ�ض�LP DDR2 MRS�ļĴ���ֵ */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_SFC_RDATA0_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_SFC_RDATA0_rdata0_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_SFC_RDATA0_rdata0_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_SFC_RDATA1_UNION
 �ṹ˵��  : DDRC_HIS_SFC_RDATA1 �Ĵ����ṹ���塣��ַƫ����:0x4AC����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_SFC_RDATA1��SFC�����ݼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  rdata1 : 32; /* bit[0-31]: SFC������[63:32]�� */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_SFC_RDATA1_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_SFC_RDATA1_rdata1_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_SFC_RDATA1_rdata1_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_SFC_RDATA2_UNION
 �ṹ˵��  : DDRC_HIS_SFC_RDATA2 �Ĵ����ṹ���塣��ַƫ����:0x4B0����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_SFC_RDATA2��SFC�����ݼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  rdata2 : 32; /* bit[0-31]: SFC������[95:64]�� */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_SFC_RDATA2_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_SFC_RDATA2_rdata2_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_SFC_RDATA2_rdata2_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_SFC_RDATA3_UNION
 �ṹ˵��  : DDRC_HIS_SFC_RDATA3 �Ĵ����ṹ���塣��ַƫ����:0x4B4����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_SFC_RDATA3��SFC�����ݼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  rdata3 : 32; /* bit[0-31]: SFC������[127:96]�� */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_SFC_RDATA3_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_SFC_RDATA3_rdata3_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_SFC_RDATA3_rdata3_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_SFC_RDATA4_UNION
 �ṹ˵��  : DDRC_HIS_SFC_RDATA4 �Ĵ����ṹ���塣��ַƫ����:0x4B8����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_SFC_RDATA4��SFC�����ݼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  rdata4 : 32; /* bit[0-31]: SFC������[159:128]�� */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_SFC_RDATA4_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_SFC_RDATA4_rdata4_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_SFC_RDATA4_rdata4_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_SFC_RDATA5_UNION
 �ṹ˵��  : DDRC_HIS_SFC_RDATA5 �Ĵ����ṹ���塣��ַƫ����:0x4BC����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_SFC_RDATA5��SFC�����ݼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  rdata5 : 32; /* bit[0-31]: SFC������[191:160]�� */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_SFC_RDATA5_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_SFC_RDATA5_rdata5_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_SFC_RDATA5_rdata5_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_SFC_RDATA6_UNION
 �ṹ˵��  : DDRC_HIS_SFC_RDATA6 �Ĵ����ṹ���塣��ַƫ����:0x4C0����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_SFC_RDATA6��SFC�����ݼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  rdata6 : 32; /* bit[0-31]: SFC������[223:192]�� */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_SFC_RDATA6_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_SFC_RDATA6_rdata6_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_SFC_RDATA6_rdata6_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_SFC_RDATA7_UNION
 �ṹ˵��  : DDRC_HIS_SFC_RDATA7 �Ĵ����ṹ���塣��ַƫ����:0x4C4����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_SFC_RDATA7��SFC�����ݼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  rdata7 : 32; /* bit[0-31]: SFC������[255:224]�� */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_SFC_RDATA7_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_SFC_RDATA7_rdata7_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_SFC_RDATA7_rdata7_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_HIS_SFC_RDATA_ECC_UNION
 �ṹ˵��  : DDRC_HIS_SFC_RDATA_ECC �Ĵ����ṹ���塣��ַƫ����:0x4C8����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_HIS_SFC_RDATA_ECC��SFC������ECC�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  rdata_ecc0 : 8;  /* bit[0-7]  : SFC������[63:0]��8bit ECC���� */
        unsigned int  rdata_ecc1 : 8;  /* bit[8-15] : SFC������[127:64]��8bit ECC���� */
        unsigned int  rdata_ecc2 : 8;  /* bit[16-23]: SFC������[191:128]��8bit ECC���� */
        unsigned int  rdata_ecc3 : 8;  /* bit[24-31]: SFC������[255:192]��8bit ECC���� */
    } reg;
} SOC_MDDRC_DMC_DDRC_HIS_SFC_RDATA_ECC_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_HIS_SFC_RDATA_ECC_rdata_ecc0_START  (0)
#define SOC_MDDRC_DMC_DDRC_HIS_SFC_RDATA_ECC_rdata_ecc0_END    (7)
#define SOC_MDDRC_DMC_DDRC_HIS_SFC_RDATA_ECC_rdata_ecc1_START  (8)
#define SOC_MDDRC_DMC_DDRC_HIS_SFC_RDATA_ECC_rdata_ecc1_END    (15)
#define SOC_MDDRC_DMC_DDRC_HIS_SFC_RDATA_ECC_rdata_ecc2_START  (16)
#define SOC_MDDRC_DMC_DDRC_HIS_SFC_RDATA_ECC_rdata_ecc2_END    (23)
#define SOC_MDDRC_DMC_DDRC_HIS_SFC_RDATA_ECC_rdata_ecc3_START  (24)
#define SOC_MDDRC_DMC_DDRC_HIS_SFC_RDATA_ECC_rdata_ecc3_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_TEST_GENPOSE0_UNION
 �ṹ˵��  : DDRC_TEST_GENPOSE0 �Ĵ����ṹ���塣��ַƫ����:0x4CC����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_TEST_GENPOSE0�Ǳ����Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  dat_cmd_min : 28; /* bit[0-27] : ����ͳ�Ʒ�ֵ�Ĵ�����������С�ڻ���ڸ÷�ֵʱ���ϱ��жϡ�
                                                       
                                                       ע�⣺���﷧ֵ��32Ϊ��λ�����������Ϊn�������շ�ֵΪn*32*128(DMC_WIDTH)bit. */
        unsigned int  reserved    : 4;  /* bit[28-31]: ������ */
    } reg;
} SOC_MDDRC_DMC_DDRC_TEST_GENPOSE0_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_TEST_GENPOSE0_dat_cmd_min_START  (0)
#define SOC_MDDRC_DMC_DDRC_TEST_GENPOSE0_dat_cmd_min_END    (27)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_TEST_GENPOSE1_UNION
 �ṹ˵��  : DDRC_TEST_GENPOSE1 �Ĵ����ṹ���塣��ַƫ����:0x4D0����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_TEST_GENPOSE1�Ǳ����Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  dat_cmd_max : 28; /* bit[0-27] : ����ͳ�Ʒ�ֵ�Ĵ������������ڴ��ڻ���ڸ÷�ֵʱ���ϱ��жϡ�
                                                       
                                                       ע�⣺���﷧ֵ��32Ϊ��λ�����������Ϊn�������շ�ֵΪn*32*128(DMC_WIDHT)bit. */
        unsigned int  reserved    : 4;  /* bit[28-31]: ������ */
    } reg;
} SOC_MDDRC_DMC_DDRC_TEST_GENPOSE1_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_TEST_GENPOSE1_dat_cmd_max_START  (0)
#define SOC_MDDRC_DMC_DDRC_TEST_GENPOSE1_dat_cmd_max_END    (27)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_TEST_GENPOSE2_UNION
 �ṹ˵��  : DDRC_TEST_GENPOSE2 �Ĵ����ṹ���塣��ַƫ����:0x4D4����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_TEST_GENPOSE2�Ǳ����Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  dat_stat_prd    : 28; /* bit[0-27] : ����ͳ�����ڡ�
                                                           0x0~0x1����Ч���á�
                                                           0x2��0xFFFFFFF��ͳ�����ڡ�
                                                           ʵ��ͳ������Ϊload_stat_prd*16*tclk��TclkΪDDRC����ʱ�����ڣ���
                                                           ע�⣺������ֻ��load_stat_mode=2'b01��2'b10ʱ��Ч����load_stat_mode=0������ͳ��ģʽ�£�����ͳ����ؼ�������һֱ������ */
        unsigned int  dat_stat_mode   : 2;  /* bit[28-29]: ����ͳ��ģʽ��
                                                           2'b00����������ģʽ������ͳ����ؼ����������������ɱ�֤����ͳ��ģʽ�£�1s��ͳ�Ʋ������1GHZMHz����
                                                           2'b01�����δ���ģʽ������ͳ��ʱ�����perf_prd��ͳ�ƽ�����֣���ֹͣͳ�ơ�ͳ�����ڵ����ϱ��жϡ�
                                                           2'b10�����ڷ�ֵ��������ͳ�����ڵ��������ڹ涨�ķ�ֵ��Χ�ڣ����ϱ��жϣ�ͬʱ��������һ��ͳ�ƣ�ֱ�������涨�ķ�ֵ��Χ�����ϱ��жϡ�������ֵ��Χ��ֹͣ������
                                                           ע�⣺��ͳ��ֵ����󱣳֡� */
        unsigned int  dat_stat_en     : 1;  /* bit[30]   : ddr����ͳ��ʹ�ܡ�
                                                           1��ʹ�ܣ�
                                                           0����ֹ��
                                                            ע�⣺��stat_mode=0ʱ����λʹ�ܱ�ʾ����ͳ�ƼĴ�������ʼѭ����������load_stat_mode��0ʱ�����һ��ͳ��֮�󣬸�λ�Զ����� */
        unsigned int  cmd_dat_stat_en : 1;  /* bit[31]   : ͬʱʹ��cmd��dat��ͳ�ơ� */
    } reg;
} SOC_MDDRC_DMC_DDRC_TEST_GENPOSE2_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_TEST_GENPOSE2_dat_stat_prd_START     (0)
#define SOC_MDDRC_DMC_DDRC_TEST_GENPOSE2_dat_stat_prd_END       (27)
#define SOC_MDDRC_DMC_DDRC_TEST_GENPOSE2_dat_stat_mode_START    (28)
#define SOC_MDDRC_DMC_DDRC_TEST_GENPOSE2_dat_stat_mode_END      (29)
#define SOC_MDDRC_DMC_DDRC_TEST_GENPOSE2_dat_stat_en_START      (30)
#define SOC_MDDRC_DMC_DDRC_TEST_GENPOSE2_dat_stat_en_END        (30)
#define SOC_MDDRC_DMC_DDRC_TEST_GENPOSE2_cmd_dat_stat_en_START  (31)
#define SOC_MDDRC_DMC_DDRC_TEST_GENPOSE2_cmd_dat_stat_en_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_TEST_GENPOSE0_ST_UNION
 �ṹ˵��  : DDRC_TEST_GENPOSE0_ST �Ĵ����ṹ���塣��ַƫ����:0x4D8����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_TEST_GENPOSE0_ST0�Ǳ����Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved : 32; /* bit[0-31]: ������ */
    } reg;
} SOC_MDDRC_DMC_DDRC_TEST_GENPOSE0_ST_UNION;
#endif


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_TEST_GENPOSE1_ST_UNION
 �ṹ˵��  : DDRC_TEST_GENPOSE1_ST �Ĵ����ṹ���塣��ַƫ����:0x4DC����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_TEST_GENPOSE_ST1�Ǳ����Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved : 32; /* bit[0-31]: ������ */
    } reg;
} SOC_MDDRC_DMC_DDRC_TEST_GENPOSE1_ST_UNION;
#endif


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_TEST_GENPOSE2_ST_UNION
 �ṹ˵��  : DDRC_TEST_GENPOSE2_ST �Ĵ����ṹ���塣��ַƫ����:0x4E0����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDRC_TEST_GENPOSE_ST0�Ǳ����Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved : 32; /* bit[0-31]: ������ */
    } reg;
} SOC_MDDRC_DMC_DDRC_TEST_GENPOSE2_ST_UNION;
#endif


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_TEST_RAM_TMOD_UNION
 �ṹ˵��  : DDRC_TEST_RAM_TMOD �Ĵ����ṹ���塣��ַƫ����:0x500����ֵ:0x00000033�����:32
 �Ĵ���˵��: DDRC_TEST_TMOD��DDR ��RAM�Ĳ���ģʽ���üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ram_tmod : 32; /* bit[0-31]: [2:0] EMAA;
                                                   [3] EMASA;
                                                   [6:4] EMAB; */
    } reg;
} SOC_MDDRC_DMC_DDRC_TEST_RAM_TMOD_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_TEST_RAM_TMOD_ram_tmod_START  (0)
#define SOC_MDDRC_DMC_DDRC_TEST_RAM_TMOD_ram_tmod_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_TEST_RTL_CFG0_UNION
 �ṹ˵��  : DDRC_TEST_RTL_CFG0 �Ĵ����ṹ���塣��ַƫ����:0x510����ֵ:0x0000�����:32
 �Ĵ���˵��: DDRC_TEST_RTL_CFG0��DDRC RTL������Ϣ�Ĵ���0
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mddrc_dmc_version : 16; /* bit[0-15] : DMC�汾�š�
                                                             'h0510����ʾHiMDDRCV510�汾 */
        unsigned int  mddrc_dmc_width   : 4;  /* bit[16-19]: DMC����ͨ·λ��
                                                             0:1λ��
                                                             1:2λ��
                                                             2:4λ��
                                                             3:8λ��
                                                             4:16λ��
                                                             5:32λ��
                                                             6:64λ��
                                                             7:128λ��
                                                             8:256λ��
                                                             9:512λ��
                                                             ������������ */
        unsigned int  mddrc_ecc_width   : 4;  /* bit[20-23]: DMC ECC����λ��
                                                             0:1λ��
                                                             1:2λ��
                                                             2:4λ��
                                                             3:8λ��
                                                             4:16λ��
                                                             5:32λ��
                                                             6:64λ��
                                                             ������������ */
        unsigned int  mddrc_cfifo_num   : 8;  /* bit[24-31]: DMC����BUF������ */
    } reg;
} SOC_MDDRC_DMC_DDRC_TEST_RTL_CFG0_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_TEST_RTL_CFG0_mddrc_dmc_version_START  (0)
#define SOC_MDDRC_DMC_DDRC_TEST_RTL_CFG0_mddrc_dmc_version_END    (15)
#define SOC_MDDRC_DMC_DDRC_TEST_RTL_CFG0_mddrc_dmc_width_START    (16)
#define SOC_MDDRC_DMC_DDRC_TEST_RTL_CFG0_mddrc_dmc_width_END      (19)
#define SOC_MDDRC_DMC_DDRC_TEST_RTL_CFG0_mddrc_ecc_width_START    (20)
#define SOC_MDDRC_DMC_DDRC_TEST_RTL_CFG0_mddrc_ecc_width_END      (23)
#define SOC_MDDRC_DMC_DDRC_TEST_RTL_CFG0_mddrc_cfifo_num_START    (24)
#define SOC_MDDRC_DMC_DDRC_TEST_RTL_CFG0_mddrc_cfifo_num_END      (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_TEST_RTL_CFG1_UNION
 �ṹ˵��  : DDRC_TEST_RTL_CFG1 �Ĵ����ṹ���塣��ַƫ����:0x514����ֵ:0x0000�����:32
 �Ĵ���˵��: DDRC_TEST_RTL_CFG1��DDRC RTL������Ϣ�Ĵ���1
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mddrc_rank_num     : 4;  /* bit[0-3]  : DMC֧�ֵ����RANK����
                                                              0~0xf��n+1��RANK�� */
        unsigned int  mddrc_addr_width   : 4;  /* bit[4-7]  : DMC��ַ����λ��
                                                              0~0xf��n+32λ�� */
        unsigned int  mddrc_phy_type     : 8;  /* bit[8-15] : �Խӵ�DDRPHY���͡�
                                                              0��������
                                                              1��SNPS 40LP multiPHY��
                                                              2��SNPS 40LP/28HPM 32PHY/G2 MULTIPHY��
                                                              3��HISI S40LL TWPHY��
                                                              4��������
                                                              5��IBM 45GS 21GPHY��
                                                              6��HISI 28HPM TWPHY��
                                                              7��CDNS 28HPM HSPHY��
                                                              8��SNPS 28HPM DDR4 multiPHY��
                                                              ������������ */
        unsigned int  mddrc_bank_xor_pos : 5;  /* bit[16-20]: BANK������ʼ��ַ�� */
        unsigned int  reserved_0         : 3;  /* bit[21-23]: ������ */
        unsigned int  mddrc_mbist_type   : 2;  /* bit[24-25]: DMC�ڲ����ɵ�MBISTģ�����͡�
                                                              0����MBIST��
                                                              1��MarchIC MBIST��
                                                              2��OLMBIST �ɱ��MBISTģ�飻
                                                              ������������ */
        unsigned int  reserved_1         : 6;  /* bit[26-31]: ������ */
    } reg;
} SOC_MDDRC_DMC_DDRC_TEST_RTL_CFG1_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_TEST_RTL_CFG1_mddrc_rank_num_START      (0)
#define SOC_MDDRC_DMC_DDRC_TEST_RTL_CFG1_mddrc_rank_num_END        (3)
#define SOC_MDDRC_DMC_DDRC_TEST_RTL_CFG1_mddrc_addr_width_START    (4)
#define SOC_MDDRC_DMC_DDRC_TEST_RTL_CFG1_mddrc_addr_width_END      (7)
#define SOC_MDDRC_DMC_DDRC_TEST_RTL_CFG1_mddrc_phy_type_START      (8)
#define SOC_MDDRC_DMC_DDRC_TEST_RTL_CFG1_mddrc_phy_type_END        (15)
#define SOC_MDDRC_DMC_DDRC_TEST_RTL_CFG1_mddrc_bank_xor_pos_START  (16)
#define SOC_MDDRC_DMC_DDRC_TEST_RTL_CFG1_mddrc_bank_xor_pos_END    (20)
#define SOC_MDDRC_DMC_DDRC_TEST_RTL_CFG1_mddrc_mbist_type_START    (24)
#define SOC_MDDRC_DMC_DDRC_TEST_RTL_CFG1_mddrc_mbist_type_END      (25)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_TEST_RTL_CFG2_UNION
 �ṹ˵��  : DDRC_TEST_RTL_CFG2 �Ĵ����ṹ���塣��ַƫ����:0x518����ֵ:0x0000�����:32
 �Ĵ���˵��: DDRC_TEST_RTL_CFG2��DDRC RTL������Ϣ�Ĵ���2
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mddrc_rlast_en     : 1;  /* bit[0]    : DMC RLAST_ENʹ�ܡ�
                                                              0����ֹ��
                                                              1��ʹ�ܡ� */
        unsigned int  mddrc_ffbyp_en     : 1;  /* bit[1]    : DMC FFBYP_ENʹ�ܡ�
                                                              0����ֹ��
                                                              1��ʹ�ܡ� */
        unsigned int  mddrc_phy_in_flop  : 1;  /* bit[2]    : DMC PHY_IN_FLOPʹ�ܡ�
                                                              0����ֹ��
                                                              1��ʹ�ܡ� */
        unsigned int  mddrc_ecc_en       : 1;  /* bit[3]    : DMC ECC_ENʹ�ܡ�
                                                              0����ֹ��
                                                              1��ʹ�ܡ� */
        unsigned int  mddrc_debug_bus    : 1;  /* bit[4]    : DMC DEBUG_BUSʹ�ܡ�
                                                              0����ֹ��
                                                              1��ʹ�ܡ� */
        unsigned int  mddrc_crc_pipe_en  : 1;  /* bit[5]    : DMC CRC_PIPE_ENʹ�ܡ�
                                                              0����ֹ��
                                                              1��ʹ�ܡ� */
        unsigned int  mddrc_ram_ecc_en   : 1;  /* bit[6]    : DMC RAM_ECC_ENʹ�ܡ�
                                                              0����ֹ��
                                                              1��ʹ�ܡ� */
        unsigned int  mddrc_rec_en       : 1;  /* bit[7]    : DMC REC_ENʹ�ܡ�
                                                              0����ֹ��
                                                              1��ʹ�ܡ� */
        unsigned int  mddrc_hdr_mode     : 2;  /* bit[8-9]  : DMC DFI�ӿ�ģʽ��
                                                              0��SDRģʽ��
                                                              1��SDR/HDRģʽ��
                                                              ������������ */
        unsigned int  mddrc_dasw_pipe_en : 1;  /* bit[10]   : DMC DASW_PIPE_ENʹ�ܡ�
                                                              0����ֹ��
                                                              1��ʹ�ܡ� */
        unsigned int  reserved           : 21; /* bit[11-31]: ������ */
    } reg;
} SOC_MDDRC_DMC_DDRC_TEST_RTL_CFG2_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_TEST_RTL_CFG2_mddrc_rlast_en_START      (0)
#define SOC_MDDRC_DMC_DDRC_TEST_RTL_CFG2_mddrc_rlast_en_END        (0)
#define SOC_MDDRC_DMC_DDRC_TEST_RTL_CFG2_mddrc_ffbyp_en_START      (1)
#define SOC_MDDRC_DMC_DDRC_TEST_RTL_CFG2_mddrc_ffbyp_en_END        (1)
#define SOC_MDDRC_DMC_DDRC_TEST_RTL_CFG2_mddrc_phy_in_flop_START   (2)
#define SOC_MDDRC_DMC_DDRC_TEST_RTL_CFG2_mddrc_phy_in_flop_END     (2)
#define SOC_MDDRC_DMC_DDRC_TEST_RTL_CFG2_mddrc_ecc_en_START        (3)
#define SOC_MDDRC_DMC_DDRC_TEST_RTL_CFG2_mddrc_ecc_en_END          (3)
#define SOC_MDDRC_DMC_DDRC_TEST_RTL_CFG2_mddrc_debug_bus_START     (4)
#define SOC_MDDRC_DMC_DDRC_TEST_RTL_CFG2_mddrc_debug_bus_END       (4)
#define SOC_MDDRC_DMC_DDRC_TEST_RTL_CFG2_mddrc_crc_pipe_en_START   (5)
#define SOC_MDDRC_DMC_DDRC_TEST_RTL_CFG2_mddrc_crc_pipe_en_END     (5)
#define SOC_MDDRC_DMC_DDRC_TEST_RTL_CFG2_mddrc_ram_ecc_en_START    (6)
#define SOC_MDDRC_DMC_DDRC_TEST_RTL_CFG2_mddrc_ram_ecc_en_END      (6)
#define SOC_MDDRC_DMC_DDRC_TEST_RTL_CFG2_mddrc_rec_en_START        (7)
#define SOC_MDDRC_DMC_DDRC_TEST_RTL_CFG2_mddrc_rec_en_END          (7)
#define SOC_MDDRC_DMC_DDRC_TEST_RTL_CFG2_mddrc_hdr_mode_START      (8)
#define SOC_MDDRC_DMC_DDRC_TEST_RTL_CFG2_mddrc_hdr_mode_END        (9)
#define SOC_MDDRC_DMC_DDRC_TEST_RTL_CFG2_mddrc_dasw_pipe_en_START  (10)
#define SOC_MDDRC_DMC_DDRC_TEST_RTL_CFG2_mddrc_dasw_pipe_en_END    (10)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_EDXN_DQMAP_UNION
 �ṹ˵��  : DDRC_EDXN_DQMAP �Ĵ����ṹ���塣��ַƫ����:0x580+0x8*(blanes)����ֵ:0x0000�����:32
 �Ĵ���˵��: DDRC_EDXN_DQMAP��ż��rank��DQ MAP�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  edxn_dq0_map : 3;  /* bit[0-2]  : ����DQ��Ӧ��������λ�ã�ע�⣺ʹ��CRCʱ���밴��ʵ�ʵ�ӳ���ϵ���ã�����ʱ��������Ϊ��׼
                                                        0�� dq0
                                                        1�� dq1
                                                        2: dq2
                                                        3: dq3
                                                        4: dq4
                                                        5: dq5
                                                        6�� dq6
                                                        7�� dq7 */
        unsigned int  reserved_0   : 1;  /* bit[3]    : ������ */
        unsigned int  edxn_dq1_map : 3;  /* bit[4-6]  : ����DQ��Ӧ��������λ�ã�ע�⣺ʹ��CRCʱ���밴��ʵ�ʵ�ӳ���ϵ���ã�����ʱ��������Ϊ��׼
                                                        0�� dq0
                                                        1�� dq1
                                                        2: dq2
                                                        3: dq3
                                                        4: dq4
                                                        5: dq5
                                                        6�� dq6
                                                        7�� dq7 */
        unsigned int  reserved_1   : 1;  /* bit[7]    : ������ */
        unsigned int  edxn_dq2_map : 3;  /* bit[8-10] : ����DQ��Ӧ��������λ�ã�ע�⣺ʹ��CRCʱ���밴��ʵ�ʵ�ӳ���ϵ���ã�����ʱ��������Ϊ��׼
                                                        0�� dq0
                                                        1�� dq1
                                                        2: dq2
                                                        3: dq3
                                                        4: dq4
                                                        5: dq5
                                                        6�� dq6
                                                        7�� dq7 */
        unsigned int  reserved_2   : 1;  /* bit[11]   : ������ */
        unsigned int  edxn_dq3_map : 3;  /* bit[12-14]: ����DQ��Ӧ��������λ�ã�ע�⣺ʹ��CRCʱ���밴��ʵ�ʵ�ӳ���ϵ���ã�����ʱ��������Ϊ��׼
                                                        0�� dq0
                                                        1�� dq1
                                                        2: dq2
                                                        3: dq3
                                                        4: dq4
                                                        5: dq5
                                                        6�� dq6
                                                        7�� dq7 */
        unsigned int  reserved_3   : 1;  /* bit[15]   : ������ */
        unsigned int  edxn_dq4_map : 3;  /* bit[16-18]: ����DQ��Ӧ��������λ�ã�ע�⣺ʹ��CRCʱ���밴��ʵ�ʵ�ӳ���ϵ���ã�����ʱ��������Ϊ��׼
                                                        0�� dq0
                                                        1�� dq1
                                                        2: dq2
                                                        3: dq3
                                                        4: dq4
                                                        5: dq5
                                                        6�� dq6
                                                        7�� dq7 */
        unsigned int  reserved_4   : 1;  /* bit[19]   : ������ */
        unsigned int  edxn_dq5_map : 3;  /* bit[20-22]: ����DQ��Ӧ��������λ�ã�ע�⣺ʹ��CRCʱ���밴��ʵ�ʵ�ӳ���ϵ���ã�����ʱ��������Ϊ��׼
                                                        0�� dq0
                                                        1�� dq1
                                                        2: dq2
                                                        3: dq3
                                                        4: dq4
                                                        5: dq5
                                                        6�� dq6
                                                        7�� dq7 */
        unsigned int  reserved_5   : 1;  /* bit[23]   : ������ */
        unsigned int  edxn_dq6_map : 3;  /* bit[24-26]: ����DQ��Ӧ��������λ�ã�ע�⣺ʹ��CRCʱ���밴��ʵ�ʵ�ӳ���ϵ���ã�����ʱ��������Ϊ��׼
                                                        0�� dq0
                                                        1�� dq1
                                                        2: dq2
                                                        3: dq3
                                                        4: dq4
                                                        5: dq5
                                                        6�� dq6
                                                        7�� dq7 */
        unsigned int  reserved_6   : 1;  /* bit[27]   : ������ */
        unsigned int  edxn_dq7_map : 3;  /* bit[28-30]: ����DQ��Ӧ��������λ�ã�ע�⣺ʹ��CRCʱ���밴��ʵ�ʵ�ӳ���ϵ���ã�����ʱ��������Ϊ��׼
                                                        0�� dq0
                                                        1�� dq1
                                                        2: dq2
                                                        3: dq3
                                                        4: dq4
                                                        5: dq5
                                                        6�� dq6
                                                        7�� dq7 */
        unsigned int  reserved_7   : 1;  /* bit[31]   : ������ */
    } reg;
} SOC_MDDRC_DMC_DDRC_EDXN_DQMAP_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_EDXN_DQMAP_edxn_dq0_map_START  (0)
#define SOC_MDDRC_DMC_DDRC_EDXN_DQMAP_edxn_dq0_map_END    (2)
#define SOC_MDDRC_DMC_DDRC_EDXN_DQMAP_edxn_dq1_map_START  (4)
#define SOC_MDDRC_DMC_DDRC_EDXN_DQMAP_edxn_dq1_map_END    (6)
#define SOC_MDDRC_DMC_DDRC_EDXN_DQMAP_edxn_dq2_map_START  (8)
#define SOC_MDDRC_DMC_DDRC_EDXN_DQMAP_edxn_dq2_map_END    (10)
#define SOC_MDDRC_DMC_DDRC_EDXN_DQMAP_edxn_dq3_map_START  (12)
#define SOC_MDDRC_DMC_DDRC_EDXN_DQMAP_edxn_dq3_map_END    (14)
#define SOC_MDDRC_DMC_DDRC_EDXN_DQMAP_edxn_dq4_map_START  (16)
#define SOC_MDDRC_DMC_DDRC_EDXN_DQMAP_edxn_dq4_map_END    (18)
#define SOC_MDDRC_DMC_DDRC_EDXN_DQMAP_edxn_dq5_map_START  (20)
#define SOC_MDDRC_DMC_DDRC_EDXN_DQMAP_edxn_dq5_map_END    (22)
#define SOC_MDDRC_DMC_DDRC_EDXN_DQMAP_edxn_dq6_map_START  (24)
#define SOC_MDDRC_DMC_DDRC_EDXN_DQMAP_edxn_dq6_map_END    (26)
#define SOC_MDDRC_DMC_DDRC_EDXN_DQMAP_edxn_dq7_map_START  (28)
#define SOC_MDDRC_DMC_DDRC_EDXN_DQMAP_edxn_dq7_map_END    (30)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_DMC_DDRC_ODXN_DQMAP_UNION
 �ṹ˵��  : DDRC_ODXN_DQMAP �Ĵ����ṹ���塣��ַƫ����:0x584+0x8*(blanes)����ֵ:0x0000�����:32
 �Ĵ���˵��: DDRC_ODXN_DQMAP������rank��DQ MAP�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  odxn_dq0_map : 3;  /* bit[0-2]  : ����DQ��Ӧ��������λ�ã�ע�⣺ʹ��CRCʱ���밴��ʵ�ʵ�ӳ���ϵ���ã�����ʱ��������Ϊ��׼
                                                        0�� dq0
                                                        1�� dq1
                                                        2: dq2
                                                        3: dq3
                                                        4: dq4
                                                        5: dq5
                                                        6�� dq6
                                                        7�� dq7 */
        unsigned int  reserved_0   : 1;  /* bit[3]    : ������ */
        unsigned int  odxn_dq1_map : 3;  /* bit[4-6]  : ����DQ��Ӧ��������λ�ã�ע�⣺ʹ��CRCʱ���밴��ʵ�ʵ�ӳ���ϵ���ã�����ʱ��������Ϊ��׼
                                                        0�� dq0
                                                        1�� dq1
                                                        2: dq2
                                                        3: dq3
                                                        4: dq4
                                                        5: dq5
                                                        6�� dq6
                                                        7�� dq7 */
        unsigned int  reserved_1   : 1;  /* bit[7]    : ������ */
        unsigned int  odxn_dq2_map : 3;  /* bit[8-10] : ����DQ��Ӧ��������λ�ã�ע�⣺ʹ��CRCʱ���밴��ʵ�ʵ�ӳ���ϵ���ã�����ʱ��������Ϊ��׼
                                                        0�� dq0
                                                        1�� dq1
                                                        2: dq2
                                                        3: dq3
                                                        4: dq4
                                                        5: dq5
                                                        6�� dq6
                                                        7�� dq7 */
        unsigned int  reserved_2   : 1;  /* bit[11]   : ������ */
        unsigned int  odxn_dq3_map : 3;  /* bit[12-14]: ����DQ��Ӧ��������λ�ã�ע�⣺ʹ��CRCʱ���밴��ʵ�ʵ�ӳ���ϵ���ã�����ʱ��������Ϊ��׼
                                                        0�� dq0
                                                        1�� dq1
                                                        2: dq2
                                                        3: dq3
                                                        4: dq4
                                                        5: dq5
                                                        6�� dq6
                                                        7�� dq7 */
        unsigned int  reserved_3   : 1;  /* bit[15]   : ������ */
        unsigned int  odxn_dq4_map : 3;  /* bit[16-18]: ����DQ��Ӧ��������λ�ã�ע�⣺ʹ��CRCʱ���밴��ʵ�ʵ�ӳ���ϵ���ã�����ʱ��������Ϊ��׼
                                                        0�� dq0
                                                        1�� dq1
                                                        2: dq2
                                                        3: dq3
                                                        4: dq4
                                                        5: dq5
                                                        6�� dq6
                                                        7�� dq7 */
        unsigned int  reserved_4   : 1;  /* bit[19]   : ������ */
        unsigned int  odxn_dq5_map : 3;  /* bit[20-22]: ����DQ��Ӧ��������λ�ã�ע�⣺ʹ��CRCʱ���밴��ʵ�ʵ�ӳ���ϵ���ã�����ʱ��������Ϊ��׼
                                                        0�� dq0
                                                        1�� dq1
                                                        2: dq2
                                                        3: dq3
                                                        4: dq4
                                                        5: dq5
                                                        6�� dq6
                                                        7�� dq7 */
        unsigned int  reserved_5   : 1;  /* bit[23]   : ������ */
        unsigned int  odxn_dq6_map : 3;  /* bit[24-26]: ����DQ��Ӧ��������λ�ã�ע�⣺ʹ��CRCʱ���밴��ʵ�ʵ�ӳ���ϵ���ã�����ʱ��������Ϊ��׼
                                                        0�� dq0
                                                        1�� dq1
                                                        2: dq2
                                                        3: dq3
                                                        4: dq4
                                                        5: dq5
                                                        6�� dq6
                                                        7�� dq7 */
        unsigned int  reserved_6   : 1;  /* bit[27]   : ������ */
        unsigned int  odxn_dq7_map : 3;  /* bit[28-30]: ����DQ��Ӧ��������λ�ã�ע�⣺ʹ��CRCʱ���밴��ʵ�ʵ�ӳ���ϵ���ã�����ʱ��������Ϊ��׼
                                                        0�� dq0
                                                        1�� dq1
                                                        2: dq2
                                                        3: dq3
                                                        4: dq4
                                                        5: dq5
                                                        6�� dq6
                                                        7�� dq7 */
        unsigned int  reserved_7   : 1;  /* bit[31]   : ������ */
    } reg;
} SOC_MDDRC_DMC_DDRC_ODXN_DQMAP_UNION;
#endif
#define SOC_MDDRC_DMC_DDRC_ODXN_DQMAP_odxn_dq0_map_START  (0)
#define SOC_MDDRC_DMC_DDRC_ODXN_DQMAP_odxn_dq0_map_END    (2)
#define SOC_MDDRC_DMC_DDRC_ODXN_DQMAP_odxn_dq1_map_START  (4)
#define SOC_MDDRC_DMC_DDRC_ODXN_DQMAP_odxn_dq1_map_END    (6)
#define SOC_MDDRC_DMC_DDRC_ODXN_DQMAP_odxn_dq2_map_START  (8)
#define SOC_MDDRC_DMC_DDRC_ODXN_DQMAP_odxn_dq2_map_END    (10)
#define SOC_MDDRC_DMC_DDRC_ODXN_DQMAP_odxn_dq3_map_START  (12)
#define SOC_MDDRC_DMC_DDRC_ODXN_DQMAP_odxn_dq3_map_END    (14)
#define SOC_MDDRC_DMC_DDRC_ODXN_DQMAP_odxn_dq4_map_START  (16)
#define SOC_MDDRC_DMC_DDRC_ODXN_DQMAP_odxn_dq4_map_END    (18)
#define SOC_MDDRC_DMC_DDRC_ODXN_DQMAP_odxn_dq5_map_START  (20)
#define SOC_MDDRC_DMC_DDRC_ODXN_DQMAP_odxn_dq5_map_END    (22)
#define SOC_MDDRC_DMC_DDRC_ODXN_DQMAP_odxn_dq6_map_START  (24)
#define SOC_MDDRC_DMC_DDRC_ODXN_DQMAP_odxn_dq6_map_END    (26)
#define SOC_MDDRC_DMC_DDRC_ODXN_DQMAP_odxn_dq7_map_START  (28)
#define SOC_MDDRC_DMC_DDRC_ODXN_DQMAP_odxn_dq7_map_END    (30)






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

#endif /* end of soc_mddrc_dmc_interface.h */
