/******************************************************************************

                 ��Ȩ���� (C), 2001-2012, ��Ϊ�������޹�˾

 ******************************************************************************
  �� �� ��   : soc_hdmi_interface.h
  �� �� ��   : ����
  ��    ��   : Excel2Code
  ��������   : 2012-11-27 10:51:36
  ����޸�   :
  ��������   : �ӿ�ͷ�ļ�
  �����б�   :
  �޸���ʷ   :
  1.��    ��   : 2012��11��27��
    ��    ��   : lKF77773
    �޸�����   : �ӡ�E:/register/Hi6620V100 SOC�Ĵ����ֲ�_HDMI.xml���Զ�����

******************************************************************************/

/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/

#ifndef __SOC_HDMI_INTERFACE_H__
#define __SOC_HDMI_INTERFACE_H__

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
/* �Ĵ���˵����Vendor ID Low Byte
   λ����UNION�ṹ:  SOC_HDMI_VND_IDL_UNION */
#define SOC_HDMI_VND_IDL_ADDR(base)                   ((base) + (0x000))

/* �Ĵ���˵����Vendor ID High Byte
   λ����UNION�ṹ:  SOC_HDMI_VND_IDH_UNION */
#define SOC_HDMI_VND_IDH_ADDR(base)                   ((base) + (0x004))

/* �Ĵ���˵����Device ID Low Byte
   λ����UNION�ṹ:  SOC_HDMI_DEV_IDL_UNION */
#define SOC_HDMI_DEV_IDL_ADDR(base)                   ((base) + (0x008))

/* �Ĵ���˵����Device ID High Byte
   λ����UNION�ṹ:  SOC_HDMI_DEV_IDH_UNION */
#define SOC_HDMI_DEV_IDH_ADDR(base)                   ((base) + (0x00C))

/* �Ĵ���˵����Device Revision Byte
   λ����UNION�ṹ:  SOC_HDMI_DEV_REV_UNION */
#define SOC_HDMI_DEV_REV_ADDR(base)                   ((base) + (0x010))

/* �Ĵ���˵����Software Reset Register
   λ����UNION�ṹ:  SOC_HDMI_SRST_UNION */
#define SOC_HDMI_SRST_ADDR(base)                      ((base) + (0x014))

/* �Ĵ���˵����System Control Register #1
   λ����UNION�ṹ:  SOC_HDMI_SYS_CTRL1_UNION */
#define SOC_HDMI_SYS_CTRL1_ADDR(base)                 ((base) + (0x020))

/* �Ĵ���˵����System Status Register
   λ����UNION�ṹ:  SOC_HDMI_SYS_STAT_UNION */
#define SOC_HDMI_SYS_STAT_ADDR(base)                  ((base) + (0x024))

/* �Ĵ���˵����System Control Register #3
   λ����UNION�ṹ:  SOC_HDMI_SYS_CTRL3_UNION */
#define SOC_HDMI_SYS_CTRL3_ADDR(base)                 ((base) + (0x028))

/* �Ĵ���˵����System Control Register #4
   λ����UNION�ṹ:  SOC_HDMI_SYS_CTRL4_UNION */
#define SOC_HDMI_SYS_CTRL4_ADDR(base)                 ((base) + (0x030))

/* �Ĵ���˵����Data Control Register
   λ����UNION�ṹ:  SOC_HDMI_DCTL_UNION */
#define SOC_HDMI_DCTL_ADDR(base)                      ((base) + (0x034))

/* �Ĵ���˵����HDCP Control Register
   λ����UNION�ṹ:  SOC_HDMI_HDCP_CTRL_UNION */
#define SOC_HDMI_HDCP_CTRL_ADDR(base)                 ((base) + (0x03C))

/* �Ĵ���˵����HDCP BKSV Register 1
   λ����UNION�ṹ:  SOC_HDMI_BKSV1_UNION */
#define SOC_HDMI_BKSV1_ADDR(base)                     ((base) + (0x040))

/* �Ĵ���˵����HDCP BKSV Register 2
   λ����UNION�ṹ:  SOC_HDMI_BKSV2_UNION */
#define SOC_HDMI_BKSV2_ADDR(base)                     ((base) + (0x044))

/* �Ĵ���˵����HDCP BKSV Register 3
   λ����UNION�ṹ:  SOC_HDMI_BKSV3_UNION */
#define SOC_HDMI_BKSV3_ADDR(base)                     ((base) + (0x048))

/* �Ĵ���˵����HDCP BKSV Register 4
   λ����UNION�ṹ:  SOC_HDMI_BKSV4_UNION */
#define SOC_HDMI_BKSV4_ADDR(base)                     ((base) + (0x04C))

/* �Ĵ���˵����HDCP BKSV Register 5
   λ����UNION�ṹ:  SOC_HDMI_BKSV5_UNION */
#define SOC_HDMI_BKSV5_ADDR(base)                     ((base) + (0x050))

/* �Ĵ���˵����HDCP AN Register1
   λ����UNION�ṹ:  SOC_HDMI_AN1_UNION */
#define SOC_HDMI_AN1_ADDR(base)                       ((base) + (0x054))

/* �Ĵ���˵����HDCP AN Register2
   λ����UNION�ṹ:  SOC_HDMI_AN2_UNION */
#define SOC_HDMI_AN2_ADDR(base)                       ((base) + (0x058))

/* �Ĵ���˵����HDCP AN Register3
   λ����UNION�ṹ:  SOC_HDMI_AN3_UNION */
#define SOC_HDMI_AN3_ADDR(base)                       ((base) + (0x05C))

/* �Ĵ���˵����HDCP AN Register4
   λ����UNION�ṹ:  SOC_HDMI_AN4_UNION */
#define SOC_HDMI_AN4_ADDR(base)                       ((base) + (0x060))

/* �Ĵ���˵����HDCP AN Register5
   λ����UNION�ṹ:  SOC_HDMI_AN5_UNION */
#define SOC_HDMI_AN5_ADDR(base)                       ((base) + (0x064))

/* �Ĵ���˵����HDCP AN Register6
   λ����UNION�ṹ:  SOC_HDMI_AN6_UNION */
#define SOC_HDMI_AN6_ADDR(base)                       ((base) + (0x068))

/* �Ĵ���˵����HDCP AN Register7
   λ����UNION�ṹ:  SOC_HDMI_AN7_UNION */
#define SOC_HDMI_AN7_ADDR(base)                       ((base) + (0x06C))

/* �Ĵ���˵����HDCP AN Register8
   λ����UNION�ṹ:  SOC_HDMI_AN8_UNION */
#define SOC_HDMI_AN8_ADDR(base)                       ((base) + (0x070))

/* �Ĵ���˵����HDCP AKSV Register1
   λ����UNION�ṹ:  SOC_HDMI_AKSV1_UNION */
#define SOC_HDMI_AKSV1_ADDR(base)                     ((base) + (0x074))

/* �Ĵ���˵����HDCP AKSV Register2
   λ����UNION�ṹ:  SOC_HDMI_AKSV2_UNION */
#define SOC_HDMI_AKSV2_ADDR(base)                     ((base) + (0x078))

/* �Ĵ���˵����HDCP AKSV Register3
   λ����UNION�ṹ:  SOC_HDMI_AKSV3_UNION */
#define SOC_HDMI_AKSV3_ADDR(base)                     ((base) + (0x07C))

/* �Ĵ���˵����HDCP AKSV Register4
   λ����UNION�ṹ:  SOC_HDMI_AKSV4_UNION */
#define SOC_HDMI_AKSV4_ADDR(base)                     ((base) + (0x080))

/* �Ĵ���˵����HDCP AKSV Register5
   λ����UNION�ṹ:  SOC_HDMI_AKSV5_UNION */
#define SOC_HDMI_AKSV5_ADDR(base)                     ((base) + (0x084))

/* �Ĵ���˵����HDCP Ri Register1
   λ����UNION�ṹ:  SOC_HDMI_RI1_UNION */
#define SOC_HDMI_RI1_ADDR(base)                       ((base) + (0x088))

/* �Ĵ���˵����HDCP Ri Register2
   λ����UNION�ṹ:  SOC_HDMI_RI2_UNION */
#define SOC_HDMI_RI2_ADDR(base)                       ((base) + (0x08C))

/* �Ĵ���˵����HDCP Ri 128 Compare Register
   λ����UNION�ṹ:  SOC_HDMI_RI_128_COMP_UNION */
#define SOC_HDMI_RI_128_COMP_ADDR(base)               ((base) + (0x090))

/* �Ĵ���˵����HDCP I Counter Register
   λ����UNION�ṹ:  SOC_HDMI_I_CNT_UNION */
#define SOC_HDMI_I_CNT_ADDR(base)                     ((base) + (0x094))

/* �Ĵ���˵����Ri Status Register
   λ����UNION�ṹ:  SOC_HDMI_RI_STAT_UNION */
#define SOC_HDMI_RI_STAT_ADDR(base)                   ((base) + (0x098))

/* �Ĵ���˵����Ri Command Register
   λ����UNION�ṹ:  SOC_HDMI_RI_CMD_UNION */
#define SOC_HDMI_RI_CMD_ADDR(base)                    ((base) + (0x09C))

/* �Ĵ���˵����Ri Line Start Register
   λ����UNION�ṹ:  SOC_HDMI_RI_LINE_START_UNION */
#define SOC_HDMI_RI_LINE_START_ADDR(base)             ((base) + (0x0A0))

/* �Ĵ���˵����Ri From RX Register1
   λ����UNION�ṹ:  SOC_HDMI_RI_RX_L_UNION */
#define SOC_HDMI_RI_RX_L_ADDR(base)                   ((base) + (0x0A4))

/* �Ĵ���˵����Ri From RX Register2
   λ����UNION�ṹ:  SOC_HDMI_RI_RX_H_UNION */
#define SOC_HDMI_RI_RX_H_ADDR(base)                   ((base) + (0x0A8))

/* �Ĵ���˵����Ri Debug Registers
   λ����UNION�ṹ:  SOC_HDMI_RI_DEBUG_UNION */
#define SOC_HDMI_RI_DEBUG_ADDR(base)                  ((base) + (0x0AC))

/* �Ĵ���˵����Video DE Delay Register
   λ����UNION�ṹ:  SOC_HDMI_DE_DLY_UNION */
#define SOC_HDMI_DE_DLY_ADDR(base)                    ((base) + (0x0C8))

/* �Ĵ���˵����Video DE Control Register
   λ����UNION�ṹ:  SOC_HDMI_DE_CTRL_UNION */
#define SOC_HDMI_DE_CTRL_ADDR(base)                   ((base) + (0x0CC))

/* �Ĵ���˵����Video DE Top Register
   λ����UNION�ṹ:  SOC_HDMI_DE_TOP_UNION */
#define SOC_HDMI_DE_TOP_ADDR(base)                    ((base) + (0x0D0))

/* �Ĵ���˵����Video DE Count Register1
   λ����UNION�ṹ:  SOC_HDMI_DE_CNTL_UNION */
#define SOC_HDMI_DE_CNTL_ADDR(base)                   ((base) + (0x0D8))

/* �Ĵ���˵����Video DE Count Register2
   λ����UNION�ṹ:  SOC_HDMI_DE_CNTH_UNION */
#define SOC_HDMI_DE_CNTH_ADDR(base)                   ((base) + (0x0DC))

/* �Ĵ���˵����Video DE Line Register1
   λ����UNION�ṹ:  SOC_HDMI_DE_LINL_UNION */
#define SOC_HDMI_DE_LINL_ADDR(base)                   ((base) + (0x0E0))

/* �Ĵ���˵����Video DE Line Register2
   λ����UNION�ṹ:  SOC_HDMI_DE_LINH_UNION */
#define SOC_HDMI_DE_LINH_ADDR(base)                   ((base) + (0x0E4))

/* �Ĵ���˵����Video H Resolution Register1
   λ����UNION�ṹ:  SOC_HDMI_HRES_L_UNION */
#define SOC_HDMI_HRES_L_ADDR(base)                    ((base) + (0x0E8))

/* �Ĵ���˵����Video H Resolution Register2
   λ����UNION�ṹ:  SOC_HDMI_HRES_H_UNION */
#define SOC_HDMI_HRES_H_ADDR(base)                    ((base) + (0x0EC))

/* �Ĵ���˵����Video V Refresh Register1
   λ����UNION�ṹ:  SOC_HDMI_VRES_L_UNION */
#define SOC_HDMI_VRES_L_ADDR(base)                    ((base) + (0x0F0))

/* �Ĵ���˵����Video V Refresh Register2
   λ����UNION�ṹ:  SOC_HDMI_VREL_H_UNION */
#define SOC_HDMI_VREL_H_ADDR(base)                    ((base) + (0x0F4))

/* �Ĵ���˵����Video Interlace Adjustment Register
   λ����UNION�ṹ:  SOC_HDMI_IADJUST_UNION */
#define SOC_HDMI_IADJUST_ADDR(base)                   ((base) + (0x0F8))

/* �Ĵ���˵����Video SYNC Polarity Detection Register
   λ����UNION�ṹ:  SOC_HDMI_POL_DETECT_UNION */
#define SOC_HDMI_POL_DETECT_ADDR(base)                ((base) + (0x0FC))

/* �Ĵ���˵����Video Hbit to HSYNC Register1
   λ����UNION�ṹ:  SOC_HDMI_HBIT_2HSYNC1_UNION */
#define SOC_HDMI_HBIT_2HSYNC1_ADDR(base)              ((base) + (0x100))

/* �Ĵ���˵����Video Hbit to HSYNC Register2
   λ����UNION�ṹ:  SOC_HDMI_HBIT_2HSYNC2_UNION */
#define SOC_HDMI_HBIT_2HSYNC2_ADDR(base)              ((base) + (0x104))

/* �Ĵ���˵����Video Field2 HSYNC Offset Register1
   λ����UNION�ṹ:  SOC_HDMI_FLD2_HS_OFSTL_UNION */
#define SOC_HDMI_FLD2_HS_OFSTL_ADDR(base)             ((base) + (0x108))

/* �Ĵ���˵����Video Field2 HSYNC Offset Register2
   λ����UNION�ṹ:  SOC_HDMI_FLD2_HS_OFSTH_UNION */
#define SOC_HDMI_FLD2_HS_OFSTH_ADDR(base)             ((base) + (0x10C))

/* �Ĵ���˵����Video HSYNC Length Register1
   λ����UNION�ṹ:  SOC_HDMI_HWIDTH1_UNION */
#define SOC_HDMI_HWIDTH1_ADDR(base)                   ((base) + (0x110))

/* �Ĵ���˵����Video HSYNC Length Register2
   λ����UNION�ṹ:  SOC_HDMI_HWIDTH2_UNION */
#define SOC_HDMI_HWIDTH2_ADDR(base)                   ((base) + (0x114))

/* �Ĵ���˵����Video Vbit to VSYNC Register
   λ����UNION�ṹ:  SOC_HDMI_VBIT_TO_VSYNC_UNION */
#define SOC_HDMI_VBIT_TO_VSYNC_ADDR(base)             ((base) + (0x118))

/* �Ĵ���˵����Video VSYNC Length Register
   λ����UNION�ṹ:  SOC_HDMI_VWIDTH_UNION */
#define SOC_HDMI_VWIDTH_ADDR(base)                    ((base) + (0x11C))

/* �Ĵ���˵����Video Control Register
   λ����UNION�ṹ:  SOC_HDMI_VID_CTRL_UNION */
#define SOC_HDMI_VID_CTRL_ADDR(base)                  ((base) + (0x120))

/* �Ĵ���˵����Video Action Enable Register
   λ����UNION�ṹ:  SOC_HDMI_VID_ACEN_UNION */
#define SOC_HDMI_VID_ACEN_ADDR(base)                  ((base) + (0x124))

/* �Ĵ���˵����Video Mode1 Register
   λ����UNION�ṹ:  SOC_HDMI_VID_MODE_UNION */
#define SOC_HDMI_VID_MODE_ADDR(base)                  ((base) + (0x128))

/* �Ĵ���˵����Video Blanking Register1
   λ����UNION�ṹ:  SOC_HDMI_VID_BLANK1_UNION */
#define SOC_HDMI_VID_BLANK1_ADDR(base)                ((base) + (0x12C))

/* �Ĵ���˵����Video Blanking Register2
   λ����UNION�ṹ:  SOC_HDMI_VID_BLANK2_UNION */
#define SOC_HDMI_VID_BLANK2_ADDR(base)                ((base) + (0x130))

/* �Ĵ���˵����Video Blanking Register3
   λ����UNION�ṹ:  SOC_HDMI_VID_BLANK3_UNION */
#define SOC_HDMI_VID_BLANK3_ADDR(base)                ((base) + (0x134))

/* �Ĵ���˵����Deep Color Header Register
   λ����UNION�ṹ:  SOC_HDMI_DC_HEADER_UNION */
#define SOC_HDMI_DC_HEADER_ADDR(base)                 ((base) + (0x138))

/* �Ĵ���˵����Video Mode2 Register
   λ����UNION�ṹ:  SOC_HDMI_VID_DITHER_UNION */
#define SOC_HDMI_VID_DITHER_ADDR(base)                ((base) + (0x13C))

/* �Ĵ���˵����RGB_2_xvYCC control Register
   λ����UNION�ṹ:  SOC_HDMI_RGB2XVYCC_CT_UNION */
#define SOC_HDMI_RGB2XVYCC_CT_ADDR(base)              ((base) + (0x140))

/* �Ĵ���˵����RGB_2_xvYCC Conversion R_2_Y Register1
   λ����UNION�ṹ:  SOC_HDMI_R2Y_COEFF_LOW_UNION */
#define SOC_HDMI_R2Y_COEFF_LOW_ADDR(base)             ((base) + (0x144))

/* �Ĵ���˵����RGB_2_xvYCC Conversion R_2_Y Register2
   λ����UNION�ṹ:  SOC_HDMI_R2Y_COEFF_UP_UNION */
#define SOC_HDMI_R2Y_COEFF_UP_ADDR(base)              ((base) + (0x148))

/* �Ĵ���˵����RGB_2_xvYCC Conversion G_2_Y Register1
   λ����UNION�ṹ:  SOC_HDMI_G2Y_COEFF_LOW_UNION */
#define SOC_HDMI_G2Y_COEFF_LOW_ADDR(base)             ((base) + (0x14C))

/* �Ĵ���˵����RGB_2_xvYCC Conversion G_2_Y Register2
   λ����UNION�ṹ:  SOC_HDMI_G2Y_COEFF_UP_UNION */
#define SOC_HDMI_G2Y_COEFF_UP_ADDR(base)              ((base) + (0x150))

/* �Ĵ���˵����RGB_2_xvYCC Conversion B_2_Y Register1
   λ����UNION�ṹ:  SOC_HDMI_B2Y_COEFF_LOW_UNION */
#define SOC_HDMI_B2Y_COEFF_LOW_ADDR(base)             ((base) + (0x154))

/* �Ĵ���˵����RGB_2_xvYCC Conversion B_2_Y Register2
   λ����UNION�ṹ:  SOC_HDMI_B2Y_COEFF_UP_UNION */
#define SOC_HDMI_B2Y_COEFF_UP_ADDR(base)              ((base) + (0x158))

/* �Ĵ���˵����RGB_2_xvYCC Conversion R_2_Cb Register1
   λ����UNION�ṹ:  SOC_HDMI_R2CB_COEFF_LOW_UNION */
#define SOC_HDMI_R2CB_COEFF_LOW_ADDR(base)            ((base) + (0x15C))

/* �Ĵ���˵����RGB_2_xvYCC Conversion R_2_Cb Register2
   λ����UNION�ṹ:  SOC_HDMI_R2CB_COEFF_UP_UNION */
#define SOC_HDMI_R2CB_COEFF_UP_ADDR(base)             ((base) + (0x160))

/* �Ĵ���˵����RGB_2_xvYCC Conversion G_2_Cb Register1
   λ����UNION�ṹ:  SOC_HDMI_G2CB_COEFF_LOW_UNION */
#define SOC_HDMI_G2CB_COEFF_LOW_ADDR(base)            ((base) + (0x164))

/* �Ĵ���˵����RGB_2_xvYCC Conversion G_2_Cb Register2
   λ����UNION�ṹ:  SOC_HDMI_G2CB_COEFF_UP_UNION */
#define SOC_HDMI_G2CB_COEFF_UP_ADDR(base)             ((base) + (0x168))

/* �Ĵ���˵����RGB_2_xvYCC Conversion B_2_Cb Register1
   λ����UNION�ṹ:  SOC_HDMI_B2CB_COEFF_LOW_UNION */
#define SOC_HDMI_B2CB_COEFF_LOW_ADDR(base)            ((base) + (0x16C))

/* �Ĵ���˵����RGB_2_xvYCC Conversion B_2_Cb Register2
   λ����UNION�ṹ:  SOC_HDMI_B2CB_COEFF_UP_UNION */
#define SOC_HDMI_B2CB_COEFF_UP_ADDR(base)             ((base) + (0x170))

/* �Ĵ���˵����RGB_2_xvYCC Conversion R_2_Cr Register1
   λ����UNION�ṹ:  SOC_HDMI_R2CR_COEFF_LOW_UNION */
#define SOC_HDMI_R2CR_COEFF_LOW_ADDR(base)            ((base) + (0x174))

/* �Ĵ���˵����RGB_2_xvYCC Conversion R_2_Cr Register2
   λ����UNION�ṹ:  SOC_HDMI_R2CR_COEFF_UP_UNION */
#define SOC_HDMI_R2CR_COEFF_UP_ADDR(base)             ((base) + (0x178))

/* �Ĵ���˵����RGB_2_xvYCC Conversion G_2_Cr Register1
   λ����UNION�ṹ:  SOC_HDMI_G2CR_COEFF_LOW_UNION */
#define SOC_HDMI_G2CR_COEFF_LOW_ADDR(base)            ((base) + (0x17C))

/* �Ĵ���˵����RGB_2_xvYCC Conversion G_2_Cr Register2
   λ����UNION�ṹ:  SOC_HDMI_G2CR_COEFF_UP_UNION */
#define SOC_HDMI_G2CR_COEFF_UP_ADDR(base)             ((base) + (0x180))

/* �Ĵ���˵����RGB_2_xvYCC Conversion B_2_Cr Register1
   λ����UNION�ṹ:  SOC_HDMI_B2CR_COEFF_LOW_UNION */
#define SOC_HDMI_B2CR_COEFF_LOW_ADDR(base)            ((base) + (0x184))

/* �Ĵ���˵����RGB_2_xvYCC Conversion B_2_Cr Register2
   λ����UNION�ṹ:  SOC_HDMI_B2CR_COEFF_UP_UNION */
#define SOC_HDMI_B2CR_COEFF_UP_ADDR(base)             ((base) + (0x188))

/* �Ĵ���˵����RGB_2_xvYCC RGB Input Offset Register1
   λ����UNION�ṹ:  SOC_HDMI_RGB_OFFSET_LOW_UNION */
#define SOC_HDMI_RGB_OFFSET_LOW_ADDR(base)            ((base) + (0x18C))

/* �Ĵ���˵����RGB_2_xvYCC RGB Input Offset Register2
   λ����UNION�ṹ:  SOC_HDMI_RGB_OFFSET_UP_UNION */
#define SOC_HDMI_RGB_OFFSET_UP_ADDR(base)             ((base) + (0x190))

/* �Ĵ���˵����RGB_2_xvYCC Conversion Y Output Offset Register1
   λ����UNION�ṹ:  SOC_HDMI_Y_OFFSET_LOW_UNION */
#define SOC_HDMI_Y_OFFSET_LOW_ADDR(base)              ((base) + (0x194))

/* �Ĵ���˵����RGB_2_xvYCC Conversion Y Output Offset Register2
   λ����UNION�ṹ:  SOC_HDMI_Y_OFFSET_UP_UNION */
#define SOC_HDMI_Y_OFFSET_UP_ADDR(base)               ((base) + (0x198))

/* �Ĵ���˵����RGB_2_xvYCC Conversion CbCr Output Offset Register1
   λ����UNION�ṹ:  SOC_HDMI_CBCR_OFFSET_LOW_UNION */
#define SOC_HDMI_CBCR_OFFSET_LOW_ADDR(base)           ((base) + (0x19C))

/* �Ĵ���˵����RGB_2_xvYCC Conversion CbCr Output Offset Register2
   λ����UNION�ṹ:  SOC_HDMI_CBCR_OFFSET_UP_UNION */
#define SOC_HDMI_CBCR_OFFSET_UP_ADDR(base)            ((base) + (0x1A0))

/* �Ĵ���˵����Interrupt State Register
   λ����UNION�ṹ:  SOC_HDMI_INTR_STATE_UNION */
#define SOC_HDMI_INTR_STATE_ADDR(base)                ((base) + (0x1C0))

/* �Ĵ���˵����Interrupt Source Register1
   λ����UNION�ṹ:  SOC_HDMI_INTR1_UNION */
#define SOC_HDMI_INTR1_ADDR(base)                     ((base) + (0x1C4))

/* �Ĵ���˵����Interrupt Source Register2
   λ����UNION�ṹ:  SOC_HDMI_INTR2_UNION */
#define SOC_HDMI_INTR2_ADDR(base)                     ((base) + (0x1C8))

/* �Ĵ���˵����Interrupt Source Register3
   λ����UNION�ṹ:  SOC_HDMI_INTR3_UNION */
#define SOC_HDMI_INTR3_ADDR(base)                     ((base) + (0x1CC))

/* �Ĵ���˵����Interrupt Source Register4
   λ����UNION�ṹ:  SOC_HDMI_INTR4_UNION */
#define SOC_HDMI_INTR4_ADDR(base)                     ((base) + (0x1D0))

/* �Ĵ���˵����Interrupt Unmask Register1
   λ����UNION�ṹ:  SOC_HDMI_INT_UNMASK1_UNION */
#define SOC_HDMI_INT_UNMASK1_ADDR(base)               ((base) + (0x1D4))

/* �Ĵ���˵����Interrupt Unmask Register2
   λ����UNION�ṹ:  SOC_HDMI_INT_UNMASK2_UNION */
#define SOC_HDMI_INT_UNMASK2_ADDR(base)               ((base) + (0x1D8))

/* �Ĵ���˵����Interrupt Unmask Register3
   λ����UNION�ṹ:  SOC_HDMI_INT_UNMASK3_UNION */
#define SOC_HDMI_INT_UNMASK3_ADDR(base)               ((base) + (0x1DC))

/* �Ĵ���˵����Interrupt Unmask Register4
   λ����UNION�ṹ:  SOC_HDMI_INT_UNMASK4_UNION */
#define SOC_HDMI_INT_UNMASK4_ADDR(base)               ((base) + (0x1E0))

/* �Ĵ���˵����Interrupt Control Register
   λ����UNION�ṹ:  SOC_HDMI_INT_CTRL_UNION */
#define SOC_HDMI_INT_CTRL_ADDR(base)                  ((base) + (0x1E4))

/* �Ĵ���˵����TMDS Control Registers
   λ����UNION�ṹ:  SOC_HDMI_TMDS_CCTRL_UNION */
#define SOC_HDMI_TMDS_CCTRL_ADDR(base)                ((base) + (0x200))

/* �Ĵ���˵����TMDS Control Register
   λ����UNION�ṹ:  SOC_HDMI_TMDS_CTRL_UNION */
#define SOC_HDMI_TMDS_CTRL_ADDR(base)                 ((base) + (0x208))

/* �Ĵ���˵����TMDS Control Register #2
   λ����UNION�ṹ:  SOC_HDMI_TMDS_CTRL2_UNION */
#define SOC_HDMI_TMDS_CTRL2_ADDR(base)                ((base) + (0x20C))

/* �Ĵ���˵����TMDS Control Register #3
   λ����UNION�ṹ:  SOC_HDMI_TMDS_CTRL3_UNION */
#define SOC_HDMI_TMDS_CTRL3_ADDR(base)                ((base) + (0x210))

/* �Ĵ���˵����TMDS Control Register #4
   λ����UNION�ṹ:  SOC_HDMI_TMDS_CTRL4_UNION */
#define SOC_HDMI_TMDS_CTRL4_ADDR(base)                ((base) + (0x214))

/* �Ĵ���˵����TMDS Control Register #5
   λ����UNION�ṹ:  SOC_HDMI_TMDS_CTRL5_UNION */
#define SOC_HDMI_TMDS_CTRL5_ADDR(base)                ((base) + (0x218))

/* �Ĵ���˵����xvYCC_2_RGB Control Register
   λ����UNION�ṹ:  SOC_HDMI_XVYCC2RGB_CTL_UNION */
#define SOC_HDMI_XVYCC2RGB_CTL_ADDR(base)             ((base) + (0x240))

/* �Ĵ���˵����xvYCC_2_RGB Conversion Y_2_R Register1
   λ����UNION�ṹ:  SOC_HDMI_Y2R_COEFF_LOW_UNION */
#define SOC_HDMI_Y2R_COEFF_LOW_ADDR(base)             ((base) + (0x244))

/* �Ĵ���˵����xvYCC_2_RGB Conversion Y_2_R Register2
   λ����UNION�ṹ:  SOC_HDMI_Y2R_COEFF_UP_UNION */
#define SOC_HDMI_Y2R_COEFF_UP_ADDR(base)              ((base) + (0x248))

/* �Ĵ���˵����xvYCC_2_RGB Conversion Cr_2_R Register1
   λ����UNION�ṹ:  SOC_HDMI_CR2R_COEFF_LOW_UNION */
#define SOC_HDMI_CR2R_COEFF_LOW_ADDR(base)            ((base) + (0x24C))

/* �Ĵ���˵����xvYCC_2_RGB Conversion Cr_2_R Register2
   λ����UNION�ṹ:  SOC_HDMI_CR2R_COEFF_UP_UNION */
#define SOC_HDMI_CR2R_COEFF_UP_ADDR(base)             ((base) + (0x250))

/* �Ĵ���˵����xvYCC_2_RGB Conversion Cb_2_B Register1
   λ����UNION�ṹ:  SOC_HDMI_CB2B_COEFF_LOW_UNION */
#define SOC_HDMI_CB2B_COEFF_LOW_ADDR(base)            ((base) + (0x254))

/* �Ĵ���˵����xvYCC_2_RGB Conversion Cb_2_B Register2
   λ����UNION�ṹ:  SOC_HDMI_CB2B_COEFF_UP_UNION */
#define SOC_HDMI_CB2B_COEFF_UP_ADDR(base)             ((base) + (0x258))

/* �Ĵ���˵����xvYCC_2_RGB Conversion Cr_2_G Register1
   λ����UNION�ṹ:  SOC_HDMI_CR2G_COEFF_LOW_UNION */
#define SOC_HDMI_CR2G_COEFF_LOW_ADDR(base)            ((base) + (0x25C))

/* �Ĵ���˵����xvYCC_2_RGB Conversion Cr_2_G Register2
   λ����UNION�ṹ:  SOC_HDMI_CR2G_COEFF_UP_UNION */
#define SOC_HDMI_CR2G_COEFF_UP_ADDR(base)             ((base) + (0x260))

/* �Ĵ���˵����xvYCC_2_RGB Conversion Cb_2_G Register1
   λ����UNION�ṹ:  SOC_HDMI_CB2G_COEFF_LOW_UNION */
#define SOC_HDMI_CB2G_COEFF_LOW_ADDR(base)            ((base) + (0x264))

/* �Ĵ���˵����xvYCC_2_RGB Conversion Cb_2_G Register2
   λ����UNION�ṹ:  SOC_HDMI_CB2G_COEFF_UP_UNION */
#define SOC_HDMI_CB2G_COEFF_UP_ADDR(base)             ((base) + (0x268))

/* �Ĵ���˵����xvYCC_2_RGB Conversion Y Offset Register1
   λ����UNION�ṹ:  SOC_HDMI_YOFFSET1_LOW_UNION */
#define SOC_HDMI_YOFFSET1_LOW_ADDR(base)              ((base) + (0x26C))

/* �Ĵ���˵����xvYCC_2_RGB Conversion Y Offset Register2
   λ����UNION�ṹ:  SOC_HDMI_YOFFSET1_UP_UNION */
#define SOC_HDMI_YOFFSET1_UP_ADDR(base)               ((base) + (0x270))

/* �Ĵ���˵����xvYCC_2_RGB Conversion Offset1 Register1
   λ����UNION�ṹ:  SOC_HDMI_OFFSET1_LOW_UNION */
#define SOC_HDMI_OFFSET1_LOW_ADDR(base)               ((base) + (0x274))

/* �Ĵ���˵����xvYCC_2_RGB Conversion Offset1 Register2
   λ����UNION�ṹ:  SOC_HDMI_OFFSET1_MID_UNION */
#define SOC_HDMI_OFFSET1_MID_ADDR(base)               ((base) + (0x278))

/* �Ĵ���˵����xvYCC_2_RGB Conversion Offset1 Register3
   λ����UNION�ṹ:  SOC_HDMI_OFFSET1_UP_UNION */
#define SOC_HDMI_OFFSET1_UP_ADDR(base)                ((base) + (0x27C))

/* �Ĵ���˵����xvYCC_2_RGB Conversion Offset2 Register1
   λ����UNION�ṹ:  SOC_HDMI_OFFSET2_LOW_UNION */
#define SOC_HDMI_OFFSET2_LOW_ADDR(base)               ((base) + (0x280))

/* �Ĵ���˵����xvYCC_2_RGB Conversion Offset2 Register2
   λ����UNION�ṹ:  SOC_HDMI_OFFSET2_UP_UNION */
#define SOC_HDMI_OFFSET2_UP_ADDR(base)                ((base) + (0x284))

/* �Ĵ���˵����xvYCC_2_RGB Conversion DC Level Register1
   λ����UNION�ṹ:  SOC_HDMI_DCLEVEL_LOW_UNION */
#define SOC_HDMI_DCLEVEL_LOW_ADDR(base)               ((base) + (0x288))

/* �Ĵ���˵����xvYCC_2_RGB Conversion DC Level Register2
   λ����UNION�ṹ:  SOC_HDMI_DCLEVEL_UP_UNION */
#define SOC_HDMI_DCLEVEL_UP_ADDR(base)                ((base) + (0x28C))

/* �Ĵ���˵����BIST Control Register
   λ����UNION�ṹ:  SOC_HDMI_BIST_CNTL_CORE_UNION */
#define SOC_HDMI_BIST_CNTL_CORE_ADDR(base)            ((base) + (0x2CC))

/* �Ĵ���˵����BIST Duration Register #0
   λ����UNION�ṹ:  SOC_HDMI_BIST_DURATION0_UNION */
#define SOC_HDMI_BIST_DURATION0_ADDR(base)            ((base) + (0x2D0))

/* �Ĵ���˵����BIST Duration Register #1
   λ����UNION�ṹ:  SOC_HDMI_BIST_DURATION1_UNION */
#define SOC_HDMI_BIST_DURATION1_ADDR(base)            ((base) + (0x2D4))

/* �Ĵ���˵����BIST Duration Register #2
   λ����UNION�ṹ:  SOC_HDMI_BIST_DURATION2_UNION */
#define SOC_HDMI_BIST_DURATION2_ADDR(base)            ((base) + (0x2D8))

/* �Ĵ���˵����BIST Test Select Register
   λ����UNION�ṹ:  SOC_HDMI_TX_BIST_TEST_SEL_UNION */
#define SOC_HDMI_TX_BIST_TEST_SEL_ADDR(base)          ((base) + (0x2DC))

/* �Ĵ���˵����BIST Video Mode Select Register
   λ����UNION�ṹ:  SOC_HDMI_TX_BIST_VIDEO_MODE_UNION */
#define SOC_HDMI_TX_BIST_VIDEO_MODE_ADDR(base)        ((base) + (0x2E0))

/* �Ĵ���˵����BIST 8bit Pattern Register
   λ����UNION�ṹ:  SOC_HDMI_TX_BIST_8BIT_PATTERN_UNION */
#define SOC_HDMI_TX_BIST_8BIT_PATTERN_ADDR(base)      ((base) + (0x2E4))

/* �Ĵ���˵����BIST 10bit Pattern Low Register
   λ����UNION�ṹ:  SOC_HDMI_TX_BIST_10BIT_PATTERN_L_UNION */
#define SOC_HDMI_TX_BIST_10BIT_PATTERN_L_ADDR(base)   ((base) + (0x2E8))

/* �Ĵ���˵����BIST 10bit Pattern Up Register
   λ����UNION�ṹ:  SOC_HDMI_TX_BIST_10BIT_PATTERN_U_UNION */
#define SOC_HDMI_TX_BIST_10BIT_PATTERN_U_ADDR(base)   ((base) + (0x2EC))

/* �Ĵ���˵����BIST Status Register
   λ����UNION�ṹ:  SOC_HDMI_TX_BIST_STATUS_UNION */
#define SOC_HDMI_TX_BIST_STATUS_ADDR(base)            ((base) + (0x2F0))

/* �Ĵ���˵����HDCP Repeater Control Register
   λ����UNION�ṹ:  SOC_HDMI_TXSHA_CTRL_UNION */
#define SOC_HDMI_TXSHA_CTRL_ADDR(base)                ((base) + (0x330))

/* �Ĵ���˵����HDCP SHA Repeater KSV FIFO Register
   λ����UNION�ṹ:  SOC_HDMI_TXKSV_FIFO_UNION */
#define SOC_HDMI_TXKSV_FIFO_ADDR(base)                ((base) + (0x334))

/* �Ĵ���˵����HDCP Repeater Down Stream BSTATUS Register #1
   λ����UNION�ṹ:  SOC_HDMI_TXDS_BSTATUS1_UNION */
#define SOC_HDMI_TXDS_BSTATUS1_ADDR(base)             ((base) + (0x338))

/* �Ĵ���˵����HDCP Repeater Down Stream BSTATUS Register #2
   λ����UNION�ṹ:  SOC_HDMI_TXDS_BSTATUS2_UNION */
#define SOC_HDMI_TXDS_BSTATUS2_ADDR(base)             ((base) + (0x33C))

/* �Ĵ���˵����HDCP SHA Repeater M0 Register #0
   λ����UNION�ṹ:  SOC_HDMI_TXDS_M0_0_UNION */
#define SOC_HDMI_TXDS_M0_0_ADDR(base)                 ((base) + (0x340))

/* �Ĵ���˵����HDCP SHA Repeater M0 Register #1
   λ����UNION�ṹ:  SOC_HDMI_TXDS_M0_1_UNION */
#define SOC_HDMI_TXDS_M0_1_ADDR(base)                 ((base) + (0x344))

/* �Ĵ���˵����HDCP SHA Repeater M0 Register #2
   λ����UNION�ṹ:  SOC_HDMI_TXDS_M0_2_UNION */
#define SOC_HDMI_TXDS_M0_2_ADDR(base)                 ((base) + (0x348))

/* �Ĵ���˵����HDCP SHA Repeater M0 Register #3
   λ����UNION�ṹ:  SOC_HDMI_TXDS_M0_3_UNION */
#define SOC_HDMI_TXDS_M0_3_ADDR(base)                 ((base) + (0x34C))

/* �Ĵ���˵����HDCP SHA Repeater M0 Register #4
   λ����UNION�ṹ:  SOC_HDMI_TXDS_M0_4_UNION */
#define SOC_HDMI_TXDS_M0_4_ADDR(base)                 ((base) + (0x350))

/* �Ĵ���˵����HDCP SHA Repeater M0 Register #5
   λ����UNION�ṹ:  SOC_HDMI_TXDS_M0_5_UNION */
#define SOC_HDMI_TXDS_M0_5_ADDR(base)                 ((base) + (0x354))

/* �Ĵ���˵����HDCP SHA Repeater M0 Register #6
   λ����UNION�ṹ:  SOC_HDMI_TXDS_M0_6_UNION */
#define SOC_HDMI_TXDS_M0_6_ADDR(base)                 ((base) + (0x358))

/* �Ĵ���˵����HDCP SHA Repeater M0 Register #7
   λ����UNION�ṹ:  SOC_HDMI_TXDS_M0_7_UNION */
#define SOC_HDMI_TXDS_M0_7_ADDR(base)                 ((base) + (0x35C))

/* �Ĵ���˵����HDCP SHA Repeater V.H0 Register #0
   λ����UNION�ṹ:  SOC_HDMI_TXVH0_0_UNION */
#define SOC_HDMI_TXVH0_0_ADDR(base)                   ((base) + (0x360))

/* �Ĵ���˵����HDCP SHA Repeater V.H0 Register #1
   λ����UNION�ṹ:  SOC_HDMI_TXVH0_1_UNION */
#define SOC_HDMI_TXVH0_1_ADDR(base)                   ((base) + (0x364))

/* �Ĵ���˵����HDCP SHA Repeater V.H0 Register #2
   λ����UNION�ṹ:  SOC_HDMI_TXVH0_2_UNION */
#define SOC_HDMI_TXVH0_2_ADDR(base)                   ((base) + (0x368))

/* �Ĵ���˵����HDCP SHA Repeater V.H0 Register #3
   λ����UNION�ṹ:  SOC_HDMI_TXVH0_3_UNION */
#define SOC_HDMI_TXVH0_3_ADDR(base)                   ((base) + (0x36C))

/* �Ĵ���˵����HDCP SHA Repeater V.H1 Register #0
   λ����UNION�ṹ:  SOC_HDMI_TXVH1_0_UNION */
#define SOC_HDMI_TXVH1_0_ADDR(base)                   ((base) + (0x370))

/* �Ĵ���˵����HDCP SHA Repeater V.H1 Register #1
   λ����UNION�ṹ:  SOC_HDMI_TXVH1_1_UNION */
#define SOC_HDMI_TXVH1_1_ADDR(base)                   ((base) + (0x374))

/* �Ĵ���˵����HDCP SHA Repeater V.H1 Register #2
   λ����UNION�ṹ:  SOC_HDMI_TXVH1_2_UNION */
#define SOC_HDMI_TXVH1_2_ADDR(base)                   ((base) + (0x378))

/* �Ĵ���˵����HDCP SHA Repeater V.H1 Register #3
   λ����UNION�ṹ:  SOC_HDMI_TXVH1_3_UNION */
#define SOC_HDMI_TXVH1_3_ADDR(base)                   ((base) + (0x37C))

/* �Ĵ���˵����HDCP SHA Repeater V.H2 Register #0
   λ����UNION�ṹ:  SOC_HDMI_TXVH2_0_UNION */
#define SOC_HDMI_TXVH2_0_ADDR(base)                   ((base) + (0x380))

/* �Ĵ���˵����HDCP SHA Repeater V.H2 Register #1
   λ����UNION�ṹ:  SOC_HDMI_TXVH2_1_UNION */
#define SOC_HDMI_TXVH2_1_ADDR(base)                   ((base) + (0x384))

/* �Ĵ���˵����HDCP SHA Repeater V.H2 Register #2
   λ����UNION�ṹ:  SOC_HDMI_TXVH2_2_UNION */
#define SOC_HDMI_TXVH2_2_ADDR(base)                   ((base) + (0x388))

/* �Ĵ���˵����HDCP SHA Repeater V.H2 Register #3
   λ����UNION�ṹ:  SOC_HDMI_TXVH2_3_UNION */
#define SOC_HDMI_TXVH2_3_ADDR(base)                   ((base) + (0x38C))

/* �Ĵ���˵����HDCP SHA Repeater V.H3 Register #0
   λ����UNION�ṹ:  SOC_HDMI_TXVH3_0_UNION */
#define SOC_HDMI_TXVH3_0_ADDR(base)                   ((base) + (0x390))

/* �Ĵ���˵����HDCP SHA Repeater V.H3 Register #1
   λ����UNION�ṹ:  SOC_HDMI_TXVH3_1_UNION */
#define SOC_HDMI_TXVH3_1_ADDR(base)                   ((base) + (0x394))

/* �Ĵ���˵����HDCP SHA Repeater V.H3 Register #2
   λ����UNION�ṹ:  SOC_HDMI_TXVH3_2_UNION */
#define SOC_HDMI_TXVH3_2_ADDR(base)                   ((base) + (0x398))

/* �Ĵ���˵����HDCP SHA Repeater V.H3 Register #3
   λ����UNION�ṹ:  SOC_HDMI_TXVH3_3_UNION */
#define SOC_HDMI_TXVH3_3_ADDR(base)                   ((base) + (0x39C))

/* �Ĵ���˵����HDCP SHA Repeater V.H4 Register #0
   λ����UNION�ṹ:  SOC_HDMI_TXVH4_0_UNION */
#define SOC_HDMI_TXVH4_0_ADDR(base)                   ((base) + (0x3A0))

/* �Ĵ���˵����HDCP SHA Repeater V.H4 Register #1
   λ����UNION�ṹ:  SOC_HDMI_TXVH4_1_UNION */
#define SOC_HDMI_TXVH4_1_ADDR(base)                   ((base) + (0x3A4))

/* �Ĵ���˵����HDCP SHA Repeater V.H4 Register #2
   λ����UNION�ṹ:  SOC_HDMI_TXVH4_2_UNION */
#define SOC_HDMI_TXVH4_2_ADDR(base)                   ((base) + (0x3A8))

/* �Ĵ���˵����HDCP SHA Repeater V.H4 Register #3
   λ����UNION�ṹ:  SOC_HDMI_TXVH4_3_UNION */
#define SOC_HDMI_TXVH4_3_ADDR(base)                   ((base) + (0x3AC))

/* �Ĵ���˵����DDC I2C Manual Register
   λ����UNION�ṹ:  SOC_HDMI_DDC_MAN_UNION */
#define SOC_HDMI_DDC_MAN_ADDR(base)                   ((base) + (0x3B0))

/* �Ĵ���˵����DDC I2C Target Slave Address Register
   λ����UNION�ṹ:  SOC_HDMI_DDC_ADDR_UNION */
#define SOC_HDMI_DDC_ADDR_ADDR(base)                  ((base) + (0x3B4))

/* �Ĵ���˵����DDC I2C Target Segment Address Register
   λ����UNION�ṹ:  SOC_HDMI_DDC_SEGM_UNION */
#define SOC_HDMI_DDC_SEGM_ADDR(base)                  ((base) + (0x3B8))

/* �Ĵ���˵����DDC I2C Target Offset Address Register
   λ����UNION�ṹ:  SOC_HDMI_DDC_OFFSET_UNION */
#define SOC_HDMI_DDC_OFFSET_ADDR(base)                ((base) + (0x3BC))

/* �Ĵ���˵����DDC I2C Data Count Register1
   λ����UNION�ṹ:  SOC_HDMI_DDC_COUNT1_UNION */
#define SOC_HDMI_DDC_COUNT1_ADDR(base)                ((base) + (0x3C0))

/* �Ĵ���˵����DDC I2C Data Count Register2
   λ����UNION�ṹ:  SOC_HDMI_DDC_COUNT2_UNION */
#define SOC_HDMI_DDC_COUNT2_ADDR(base)                ((base) + (0x3C4))

/* �Ĵ���˵����DDC I2C Status Register
   λ����UNION�ṹ:  SOC_HDMI_DDC_STATUS_UNION */
#define SOC_HDMI_DDC_STATUS_ADDR(base)                ((base) + (0x3C8))

/* �Ĵ���˵����DDC I2C Command Register
   λ����UNION�ṹ:  SOC_HDMI_DDC_CMD_UNION */
#define SOC_HDMI_DDC_CMD_ADDR(base)                   ((base) + (0x3CC))

/* �Ĵ���˵����DDC I2C Data Register
   λ����UNION�ṹ:  SOC_HDMI_DDC_DATA_UNION */
#define SOC_HDMI_DDC_DATA_ADDR(base)                  ((base) + (0x3D0))

/* �Ĵ���˵����DDC I2C FIFO Count Register
   λ����UNION�ṹ:  SOC_HDMI_DDC_FIFOCNT_UNION */
#define SOC_HDMI_DDC_FIFOCNT_ADDR(base)               ((base) + (0x3D4))

/* �Ĵ���˵����ROM Status Register
   λ����UNION�ṹ:  SOC_HDMI_EPST_UNION */
#define SOC_HDMI_EPST_ADDR(base)                      ((base) + (0x3E4))

/* �Ĵ���˵����ROM Command Register
   λ����UNION�ṹ:  SOC_HDMI_EPCM_UNION */
#define SOC_HDMI_EPCM_ADDR(base)                      ((base) + (0x3E8))

/* �Ĵ���˵����ACR Control Register
   λ����UNION�ṹ:  SOC_HDMI_ACR_CTRL_UNION */
#define SOC_HDMI_ACR_CTRL_ADDR(base)                  ((base) + (0x400+0x004))

/* �Ĵ���˵����ACR Audio Frequency Register
   λ����UNION�ṹ:  SOC_HDMI_FREQ_SVAL_UNION */
#define SOC_HDMI_FREQ_SVAL_ADDR(base)                 ((base) + (0x400+0x008))

/* �Ĵ���˵����ACR N Software Value Register1
   λ����UNION�ṹ:  SOC_HDMI_N_SVAL1_UNION */
#define SOC_HDMI_N_SVAL1_ADDR(base)                   ((base) + (0x400+0x00C))

/* �Ĵ���˵����ACR N Software Value Register2
   λ����UNION�ṹ:  SOC_HDMI_N_SVAL2_UNION */
#define SOC_HDMI_N_SVAL2_ADDR(base)                   ((base) + (0x400+0x010))

/* �Ĵ���˵����ACR N Software Value Register3
   λ����UNION�ṹ:  SOC_HDMI_N_SVAL3_UNION */
#define SOC_HDMI_N_SVAL3_ADDR(base)                   ((base) + (0x400+0x014))

/* �Ĵ���˵����ACR CTS Software Value Register1
   λ����UNION�ṹ:  SOC_HDMI_CTS_SVAL1_UNION */
#define SOC_HDMI_CTS_SVAL1_ADDR(base)                 ((base) + (0x400+0x018))

/* �Ĵ���˵����ACR CTS Software Value Register2
   λ����UNION�ṹ:  SOC_HDMI_CTS_SVAL2_UNION */
#define SOC_HDMI_CTS_SVAL2_ADDR(base)                 ((base) + (0x400+0x01C))

/* �Ĵ���˵����ACR CTS Software Value Register3
   λ����UNION�ṹ:  SOC_HDMI_CTS_SVAL3_UNION */
#define SOC_HDMI_CTS_SVAL3_ADDR(base)                 ((base) + (0x400+0x020))

/* �Ĵ���˵����ACR CTS Hardware Value Register1
   λ����UNION�ṹ:  SOC_HDMI_CTS_HVAL1_UNION */
#define SOC_HDMI_CTS_HVAL1_ADDR(base)                 ((base) + (0x400+0x024))

/* �Ĵ���˵����ACR CTS Hardware Value Register2
   λ����UNION�ṹ:  SOC_HDMI_CTS_HVAL2_UNION */
#define SOC_HDMI_CTS_HVAL2_ADDR(base)                 ((base) + (0x400+0x028))

/* �Ĵ���˵����ACR CTS Hardware Value Register3
   λ����UNION�ṹ:  SOC_HDMI_CTS_HVAL3_UNION */
#define SOC_HDMI_CTS_HVAL3_ADDR(base)                 ((base) + (0x400+0x02C))

/* �Ĵ���˵����Audio In Mode Register
   λ����UNION�ṹ:  SOC_HDMI_AUD_MODE_UNION */
#define SOC_HDMI_AUD_MODE_ADDR(base)                  ((base) + (0x400+0x050))

/* �Ĵ���˵����Audio In S/PDIF Control Register
   λ����UNION�ṹ:  SOC_HDMI_SPDIF_CTRL_UNION */
#define SOC_HDMI_SPDIF_CTRL_ADDR(base)                ((base) + (0x400+0x054))

/* �Ĵ���˵����Audio In S/PDIF Extracted Fs and Length Register
   λ����UNION�ṹ:  SOC_HDMI_HW_SPDIF_FS_UNION */
#define SOC_HDMI_HW_SPDIF_FS_ADDR(base)               ((base) + (0x400+0x060))

/* �Ĵ���˵����Audio In I2S Channel Swap Register
   λ����UNION�ṹ:  SOC_HDMI_SWAP_I2S_UNION */
#define SOC_HDMI_SWAP_I2S_ADDR(base)                  ((base) + (0x400+0x064))

/* �Ĵ���˵����Audio Error Threshold Register
   λ����UNION�ṹ:  SOC_HDMI_SPDIF_ERTH_UNION */
#define SOC_HDMI_SPDIF_ERTH_ADDR(base)                ((base) + (0x400+0x06C))

/* �Ĵ���˵����Audio In I2S Data In Map Register
   λ����UNION�ṹ:  SOC_HDMI_I2S_IN_MAP_UNION */
#define SOC_HDMI_I2S_IN_MAP_ADDR(base)                ((base) + (0x400+0x070))

/* �Ĵ���˵����Audio In I2S Control Register
   λ����UNION�ṹ:  SOC_HDMI_I2S_IN_CTRL_UNION */
#define SOC_HDMI_I2S_IN_CTRL_ADDR(base)               ((base) + (0x400+0x074))

/* �Ĵ���˵����Audio In I2S Channel Status Register1
   λ����UNION�ṹ:  SOC_HDMI_I2S_CHST0_UNION */
#define SOC_HDMI_I2S_CHST0_ADDR(base)                 ((base) + (0x400+0x078))

/* �Ĵ���˵����Audio In I2S Channel Status Register2
   λ����UNION�ṹ:  SOC_HDMI_I2S_CHST1_UNION */
#define SOC_HDMI_I2S_CHST1_ADDR(base)                 ((base) + (0x400+0x07C))

/* �Ĵ���˵����Audio In I2S Channel Status Register3
   λ����UNION�ṹ:  SOC_HDMI_I2S_CHST2_UNION */
#define SOC_HDMI_I2S_CHST2_ADDR(base)                 ((base) + (0x400+0x080))

/* �Ĵ���˵����Audio In I2S Channel Status Register4
   λ����UNION�ṹ:  SOC_HDMI_I2S_CHST4_UNION */
#define SOC_HDMI_I2S_CHST4_ADDR(base)                 ((base) + (0x400+0x084))

/* �Ĵ���˵����Audio In I2S Channel Status Register5
   λ����UNION�ṹ:  SOC_HDMI_I2S_CHST5_UNION */
#define SOC_HDMI_I2S_CHST5_ADDR(base)                 ((base) + (0x400+0x088))

/* �Ĵ���˵����Audio Sample Rate Conversion Register
   λ����UNION�ṹ:  SOC_HDMI_ASRC_UNION */
#define SOC_HDMI_ASRC_ADDR(base)                      ((base) + (0x400+0x08C))

/* �Ĵ���˵����Audio I2S Input Length Register
   λ����UNION�ṹ:  SOC_HDMI_I2S_IN_LEN_UNION */
#define SOC_HDMI_I2S_IN_LEN_ADDR(base)                ((base) + (0x400+0x090))

/* �Ĵ���˵����HDMI Control Register
   λ����UNION�ṹ:  SOC_HDMI_CTRL_UNION */
#define SOC_HDMI_CTRL_ADDR(base)                      ((base) + (0x400+0x0BC))

/* �Ĵ���˵����Audio Path Status Register
   λ����UNION�ṹ:  SOC_HDMI_AUDO_TXSTAT_UNION */
#define SOC_HDMI_AUDO_TXSTAT_ADDR(base)               ((base) + (0x400+0x0C0))

/* �Ĵ���˵����Test Control Register
   λ����UNION�ṹ:  SOC_HDMI_TEST_TXCTRL_UNION */
#define SOC_HDMI_TEST_TXCTRL_ADDR(base)               ((base) + (0x400+0x0F0))

/* �Ĵ���˵����Diagnostic Power Down Register
   λ����UNION�ṹ:  SOC_HDMI_DPD_UNION */
#define SOC_HDMI_DPD_ADDR(base)                       ((base) + (0x400+0x0F4))

/* �Ĵ���˵����Packet Buffer Control #1 Register
   λ����UNION�ṹ:  SOC_HDMI_PB_CTRL1_UNION */
#define SOC_HDMI_PB_CTRL1_ADDR(base)                  ((base) + (0x400+0x0F8))

/* �Ĵ���˵����Packet Buffer Control #2 Register
   λ����UNION�ṹ:  SOC_HDMI_PB_CTRL2_UNION */
#define SOC_HDMI_PB_CTRL2_ADDR(base)                  ((base) + (0x400+0x0FC))

/* �Ĵ���˵����AVI InfoFrame Type Code
   λ����UNION�ṹ:  SOC_HDMI_AVI_TYPE_UNION */
#define SOC_HDMI_AVI_TYPE_ADDR(base)                  ((base) + (0x400+0x100))

/* �Ĵ���˵����AVI InfoFrame Versin Code
   λ����UNION�ṹ:  SOC_HDMI_AVI_VERS_UNION */
#define SOC_HDMI_AVI_VERS_ADDR(base)                  ((base) + (0x400+0x104))

/* �Ĵ���˵����AVI InfoFrame Length
   λ����UNION�ṹ:  SOC_HDMI_AVI_LEN_UNION */
#define SOC_HDMI_AVI_LEN_ADDR(base)                   ((base) + (0x400+0x108))

/* �Ĵ���˵����AVI InfoFrame Checksum
   λ����UNION�ṹ:  SOC_HDMI_AVI_CHSUM_UNION */
#define SOC_HDMI_AVI_CHSUM_ADDR(base)                 ((base) + (0x400+0x10C))

/* �Ĵ���˵����AVI InfoFrame Data
   λ����UNION�ṹ:  SOC_HDMI_AVI_DBYTE_UNION */
#define SOC_HDMI_AVI_DBYTE_ADDR(base)                 ((base) + (0x400+0x110))

/* �Ĵ���˵����SPD InfoFrame Type Code
   λ����UNION�ṹ:  SOC_HDMI_SPD_TYPE_UNION */
#define SOC_HDMI_SPD_TYPE_ADDR(base)                  ((base) + (0x400+0x180))

/* �Ĵ���˵����SPD InfoFrame Versin Code
   λ����UNION�ṹ:  SOC_HDMI_SPD_VERS_UNION */
#define SOC_HDMI_SPD_VERS_ADDR(base)                  ((base) + (0x400+0x184))

/* �Ĵ���˵����SPD InfoFrame Length
   λ����UNION�ṹ:  SOC_HDMI_SPD_LEN_UNION */
#define SOC_HDMI_SPD_LEN_ADDR(base)                   ((base) + (0x400+0x188))

/* �Ĵ���˵����SPD InfoFrame Checksum
   λ����UNION�ṹ:  SOC_HDMI_SPD_CHSUM_UNION */
#define SOC_HDMI_SPD_CHSUM_ADDR(base)                 ((base) + (0x400+0x18C))

/* �Ĵ���˵����SPD InfoFrame Data
   λ����UNION�ṹ:  SOC_HDMI_SPD_DBYTE_UNION */
#define SOC_HDMI_SPD_DBYTE_ADDR(base)                 ((base) + (0x400+0x190))

/* �Ĵ���˵����AUDIO InfoFrame Type Code
   λ����UNION�ṹ:  SOC_HDMI_AUDIO_TYPE_UNION */
#define SOC_HDMI_AUDIO_TYPE_ADDR(base)                ((base) + (0x400+0x200))

/* �Ĵ���˵����AUDIO InfoFrame Versin Code
   λ����UNION�ṹ:  SOC_HDMI_AUDIO_VERS_UNION */
#define SOC_HDMI_AUDIO_VERS_ADDR(base)                ((base) + (0x400+0x204))

/* �Ĵ���˵����AUDIO InfoFrame Length
   λ����UNION�ṹ:  SOC_HDMI_AUDIO_LEN_UNION */
#define SOC_HDMI_AUDIO_LEN_ADDR(base)                 ((base) + (0x400+0x208))

/* �Ĵ���˵����AUDIO InfoFrame Checksum
   λ����UNION�ṹ:  SOC_HDMI_AUDIO_CHSUM_UNION */
#define SOC_HDMI_AUDIO_CHSUM_ADDR(base)               ((base) + (0x400+0x20C))

/* �Ĵ���˵����AUDIO InfoFrame Data
   λ����UNION�ṹ:  SOC_HDMI_AUDIO_DBYTE_UNION */
#define SOC_HDMI_AUDIO_DBYTE_ADDR(base)               ((base) + (0x400+0x210))

/* �Ĵ���˵����MPEG InfoFrame Type Code
   λ����UNION�ṹ:  SOC_HDMI_MPEG_TYPE_UNION */
#define SOC_HDMI_MPEG_TYPE_ADDR(base)                 ((base) + (0x400+0x280))

/* �Ĵ���˵����MPEG InfoFrame Versin Code
   λ����UNION�ṹ:  SOC_HDMI_MPEG_VERS_UNION */
#define SOC_HDMI_MPEG_VERS_ADDR(base)                 ((base) + (0x400+0x284))

/* �Ĵ���˵����MPEG InfoFrame Length
   λ����UNION�ṹ:  SOC_HDMI_MPEG_LEN_UNION */
#define SOC_HDMI_MPEG_LEN_ADDR(base)                  ((base) + (0x400+0x288))

/* �Ĵ���˵����MPEG InfoFrame Checksum
   λ����UNION�ṹ:  SOC_HDMI_MPEG_CHSUM_UNION */
#define SOC_HDMI_MPEG_CHSUM_ADDR(base)                ((base) + (0x400+0x28C))

/* �Ĵ���˵����MPEG InfoFrame Data
   λ����UNION�ṹ:  SOC_HDMI_MPEG_DBYTE_UNION */
#define SOC_HDMI_MPEG_DBYTE_ADDR(base)                ((base) + (0x400+0x290))

/* �Ĵ���˵����Generic Packet #1 Registers
   λ����UNION�ṹ:  SOC_HDMI_GEN_DBYTE_UNION */
#define SOC_HDMI_GEN_DBYTE_ADDR(base)                 ((base) + (0x400+0x300))

/* �Ĵ���˵����General Control Packet Register
   λ����UNION�ṹ:  SOC_HDMI_CP_BYTE1_UNION */
#define SOC_HDMI_CP_BYTE1_ADDR(base)                  ((base) + (0x400+0x37C))

/* �Ĵ���˵����Generic Packet #2 Registers
   λ����UNION�ṹ:  SOC_HDMI_GEN2_DBYTE_UNION */
#define SOC_HDMI_GEN2_DBYTE_ADDR(base)                ((base) + (0x400+0x380))

/* �Ĵ���˵����CEC Slave ID Register
   λ����UNION�ṹ:  SOC_HDMI_CEC_ADDR_ID_UNION */
#define SOC_HDMI_CEC_ADDR_ID_ADDR(base)               ((base) + (0x400+0x3FC))

/* �Ĵ���˵����TMDS CNTL1 Register
   λ����UNION�ṹ:  SOC_HDMI_TMDS_CTL1_UNION */
#define SOC_HDMI_TMDS_CTL1_ADDR(base)                 ((base) + (0x1800+'0x000))

/* �Ĵ���˵����TMDS CNTL2 Register
   λ����UNION�ṹ:  SOC_HDMI_TMDS_CTL2_UNION */
#define SOC_HDMI_TMDS_CTL2_ADDR(base)                 ((base) + (0x1800+'0x004))

/* �Ĵ���˵����TMDS CNTL3 Register
   λ����UNION�ṹ:  SOC_HDMI_TMDS_CTL3_UNION */
#define SOC_HDMI_TMDS_CTL3_ADDR(base)                 ((base) + (0x1800+'0x008))

/* �Ĵ���˵����BIST CNTL Register
   λ����UNION�ṹ:  SOC_HDMI_BIST_CNTL_UNION */
#define SOC_HDMI_BIST_CNTL_ADDR(base)                 ((base) + (0x1800+'0x00C))

/* �Ĵ���˵����BIST Pattern Register
   λ����UNION�ṹ:  SOC_HDMI_BIST_PATTERN_UNION */
#define SOC_HDMI_BIST_PATTERN_ADDR(base)              ((base) + (0x1800+'0x010))

/* �Ĵ���˵����BIST Instruction 0 Register
   λ����UNION�ṹ:  SOC_HDMI_BIST_INSTR0_UNION */
#define SOC_HDMI_BIST_INSTR0_ADDR(base)               ((base) + (0x1800+'0x014))

/* �Ĵ���˵����TMDS Control 7 Register
   λ����UNION�ṹ:  SOC_HDMI_BIST_INSTR1_UNION */
#define SOC_HDMI_BIST_INSTR1_ADDR(base)               ((base) + (0x1800+'0x018))

/* �Ĵ���˵����TMDS Control 8 Register
   λ����UNION�ṹ:  SOC_HDMI_BIST_CONF0_UNION */
#define SOC_HDMI_BIST_CONF0_ADDR(base)                ((base) + (0x1800+'0x01C))

/* �Ĵ���˵����TMDS Control 9 Register
   λ����UNION�ṹ:  SOC_HDMI_TMDS_CNTL9_UNION */
#define SOC_HDMI_TMDS_CNTL9_ADDR(base)                ((base) + (0x1800+'0x020))

/* �Ĵ���˵����Test Mux control register
   λ����UNION�ṹ:  SOC_HDMI_TEST_MUX_CTRL_UNION */
#define SOC_HDMI_TEST_MUX_CTRL_ADDR(base)             ((base) + (0x1800+'0x024))

/* �Ĵ���˵����Chip ID register
   λ����UNION�ṹ:  SOC_HDMI_CHIP_ID_UNION */
#define SOC_HDMI_CHIP_ID_ADDR(base)                   ((base) + (0x1800+'0x028))





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
 �ṹ��    : SOC_HDMI_VND_IDL_UNION
 �ṹ˵��  : VND_IDL �Ĵ����ṹ���塣��ַƫ����:0x000����ֵ:0x00000001�����:32
 �Ĵ���˵��: Vendor ID Low Byte
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  vnd_idl  : 8;  /* bit[0-7] : Provides unique vendor identification through I2C, Low Byte. */
        unsigned int  reserved : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_VND_IDL_UNION;
#define SOC_HDMI_VND_IDL_vnd_idl_START   (0)
#define SOC_HDMI_VND_IDL_vnd_idl_END     (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_VND_IDH_UNION
 �ṹ˵��  : VND_IDH �Ĵ����ṹ���塣��ַƫ����:0x004����ֵ:0x00000000�����:32
 �Ĵ���˵��: Vendor ID High Byte
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  vnd_idh  : 8;  /* bit[0-7] : Provides unique vendor identification through I2C, High Byte. */
        unsigned int  reserved : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_VND_IDH_UNION;
#define SOC_HDMI_VND_IDH_vnd_idh_START   (0)
#define SOC_HDMI_VND_IDH_vnd_idh_END     (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_DEV_IDL_UNION
 �ṹ˵��  : DEV_IDL �Ĵ����ṹ���塣��ַƫ����:0x008����ֵ:0x00000036�����:32
 �Ĵ���˵��: Device ID Low Byte
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  dev_idl  : 8;  /* bit[0-7] : Provides unique device type identification through I2C, Low Byte. */
        unsigned int  reserved : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_DEV_IDL_UNION;
#define SOC_HDMI_DEV_IDL_dev_idl_START   (0)
#define SOC_HDMI_DEV_IDL_dev_idl_END     (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_DEV_IDH_UNION
 �ṹ˵��  : DEV_IDH �Ĵ����ṹ���塣��ַƫ����:0x00C����ֵ:0x00000097�����:32
 �Ĵ���˵��: Device ID High Byte
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  dev_idh  : 8;  /* bit[0-7] : Provides unique device type identification through I2C, High Byte. */
        unsigned int  reserved : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_DEV_IDH_UNION;
#define SOC_HDMI_DEV_IDH_dev_idh_START   (0)
#define SOC_HDMI_DEV_IDH_dev_idh_END     (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_DEV_REV_UNION
 �ṹ˵��  : DEV_REV �Ĵ����ṹ���塣��ַƫ����:0x010����ֵ:0x00000000�����:32
 �Ĵ���˵��: Device Revision Byte
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  dev_rev  : 8;  /* bit[0-7] : Allows distinction between revisions of same device. */
        unsigned int  reserved : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_DEV_REV_UNION;
#define SOC_HDMI_DEV_REV_dev_rev_START   (0)
#define SOC_HDMI_DEV_REV_dev_rev_END     (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_SRST_UNION
 �ṹ˵��  : SRST �Ĵ����ṹ���塣��ַƫ����:0x014����ֵ:0x00000000�����:32
 �Ĵ���˵��: Software Reset Register
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  swrst    : 1;  /* bit[0-0] : Software reset:
                                                   0 = Normal Operation
                                                   1 = Reset all sections, including audio FIFO, but not writable registers
                                                   or HDCP */
        unsigned int  fiforst  : 1;  /* bit[1-1] : Audio FIFO reset:
                                                   0 = Normal operation
                                                   1 = Reset (flush) audio FIFO */
        unsigned int  reserved_0: 6;  /* bit[2-7] : reserved */
        unsigned int  reserved_1: 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_SRST_UNION;
#define SOC_HDMI_SRST_swrst_START     (0)
#define SOC_HDMI_SRST_swrst_END       (0)
#define SOC_HDMI_SRST_fiforst_START   (1)
#define SOC_HDMI_SRST_fiforst_END     (1)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_SYS_CTRL1_UNION
 �ṹ˵��  : SYS_CTRL1 �Ĵ����ṹ���塣��ַƫ����:0x020����ֵ:0x00000034�����:32
 �Ĵ���˵��: System Control Register #1
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pd       : 1;  /* bit[0-0] : Power down mode:
                                                   HIGH is normal operation.
                                                   When LOW, interrupts are in power-down mode. */
        unsigned int  edge     : 1;  /* bit[1-1] : Edge select:
                                                   0 = Latch Input on Falling Edge
                                                   1 = Latch Input on Rising Edge */
        unsigned int  bsel     : 1;  /* bit[2-2] : Input bus select:
                                                   0 = 12-bit
                                                   1 = 24-bit */
        unsigned int  reserved_0: 1;  /* bit[3-3] : reserved */
        unsigned int  hen      : 1;  /* bit[4-4] : HSYNC enable:
                                                   0 = Fixed LOW
                                                   1 = Follow HSYNC input */
        unsigned int  ven      : 1;  /* bit[5-5] : VSYNC enable:
                                                   0 = Fixed LOW
                                                   1 = Follow VSYNC input */
        unsigned int  vsync    : 1;  /* bit[6-6] : The current status of the VSYNC input pin. Refer to the INTR2 register (0x72:0x72), described on page 30, for an interrupt tied to VSYNC active edge. */
        unsigned int  reserved_1: 1;  /* bit[7-7] : reserved */
        unsigned int  reserved_2: 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_SYS_CTRL1_UNION;
#define SOC_HDMI_SYS_CTRL1_pd_START        (0)
#define SOC_HDMI_SYS_CTRL1_pd_END          (0)
#define SOC_HDMI_SYS_CTRL1_edge_START      (1)
#define SOC_HDMI_SYS_CTRL1_edge_END        (1)
#define SOC_HDMI_SYS_CTRL1_bsel_START      (2)
#define SOC_HDMI_SYS_CTRL1_bsel_END        (2)
#define SOC_HDMI_SYS_CTRL1_hen_START       (4)
#define SOC_HDMI_SYS_CTRL1_hen_END         (4)
#define SOC_HDMI_SYS_CTRL1_ven_START       (5)
#define SOC_HDMI_SYS_CTRL1_ven_END         (5)
#define SOC_HDMI_SYS_CTRL1_vsync_START     (6)
#define SOC_HDMI_SYS_CTRL1_vsync_END       (6)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_SYS_STAT_UNION
 �ṹ˵��  : SYS_STAT �Ĵ����ṹ���塣��ַƫ����:0x024����ֵ:0x00000080�����:32
 �Ĵ���˵��: System Status Register
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  p_stable : 1;  /* bit[0-0] : IDCK (io_pclkpin) to TMDS clock (v_ck2x) is stable and the Transmitter can send reliable data on the TMDS link. A change to the IDCK sets this bit LOW. After a subsequent LOW to HIGH
                                                   transition, indicating a stable input clock, a software reset is recommended. */
        unsigned int  hpd      : 1;  /* bit[1-1] : Hot Plug Detect: The state of the Hot Plug Detect pin can be read here. */
        unsigned int  rsen     : 1;  /* bit[2-2] : Receiver Sense (works in DC-coupled systems only):
                                                   0 = No Receiver connected
                                                   1 = Receiver is connected and powered on
                                                   RSEN is active when the TMDS link is terminated, usually into a powered-on TMDS Receiver chip. An active RSEN implies an active Hot Plug Detect, as the link must also be physically connected. */
        unsigned int  reserved_0: 4;  /* bit[3-6] : reserved */
        unsigned int  vlow     : 1;  /* bit[7-7] : VREF mode. Always HIGH. */
        unsigned int  reserved_1: 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_SYS_STAT_UNION;
#define SOC_HDMI_SYS_STAT_p_stable_START  (0)
#define SOC_HDMI_SYS_STAT_p_stable_END    (0)
#define SOC_HDMI_SYS_STAT_hpd_START       (1)
#define SOC_HDMI_SYS_STAT_hpd_END         (1)
#define SOC_HDMI_SYS_STAT_rsen_START      (2)
#define SOC_HDMI_SYS_STAT_rsen_END        (2)
#define SOC_HDMI_SYS_STAT_vlow_START      (7)
#define SOC_HDMI_SYS_STAT_vlow_END        (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_SYS_CTRL3_UNION
 �ṹ˵��  : SYS_CTRL3 �Ĵ����ṹ���塣��ַƫ����:0x028����ֵ:0x00000000�����:32
 �Ĵ���˵��: System Control Register #3
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved_0: 1;  /* bit[0-0] :  */
        unsigned int  ctl      : 2;  /* bit[1-2] : The states of these control bits are transmitted across the TMDS link during blanking times for DVI 1.0 mode only. */
        unsigned int  reserved_1: 5;  /* bit[3-7] : reserved */
        unsigned int  reserved_2: 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_SYS_CTRL3_UNION;
#define SOC_HDMI_SYS_CTRL3_ctl_START       (1)
#define SOC_HDMI_SYS_CTRL3_ctl_END         (2)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_SYS_CTRL4_UNION
 �ṹ˵��  : SYS_CTRL4 �Ĵ����ṹ���塣��ַƫ����:0x030����ֵ:0x00000083�����:32
 �Ĵ���˵��: System Control Register #4
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pfen     : 1;  /* bit[0-0] : Not used. Used only if SIMG Phy IP is getting integrated with Digital IP. Please contact SIMG if you are using Phy IP. */
        unsigned int  pllf     : 4;  /* bit[1-4] : Not used. Used only if SIMG Phy IP is getting integrated with Digital IP. Please contact SIMG if you are using Phy IP. */
        unsigned int  reserved_0: 2;  /* bit[5-6] : reserved */
        unsigned int  reserved_1: 1;  /* bit[7-7] : reserved */
        unsigned int  reserved_2: 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_SYS_CTRL4_UNION;
#define SOC_HDMI_SYS_CTRL4_pfen_START      (0)
#define SOC_HDMI_SYS_CTRL4_pfen_END        (0)
#define SOC_HDMI_SYS_CTRL4_pllf_START      (1)
#define SOC_HDMI_SYS_CTRL4_pllf_END        (4)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_DCTL_UNION
 �ṹ˵��  : DCTL �Ĵ����ṹ���塣��ַƫ����:0x034����ֵ:0x00000000�����:32
 �Ĵ���˵��: Data Control Register
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  hdcp_sel  : 1;  /* bit[0-0] : This register gets the value of the pin io_hdcp_sel.
                                                    When connected to 1��b0, enables firmware to take the decision whether to send unencrypted data or not. By connecting to 1��b1, HDMI Tx will be able to send ONLY encrypted data. */
        unsigned int  aud_mute  : 1;  /* bit[1-1] : 0 = Do not send zeros in audio packet
                                                    1 = Send zeros in audio packet */
        unsigned int  vid_blank : 1;  /* bit[2-2] : 0 = Normal operation (video output is not blanked)
                                                    1 = Video output is blanked and the colors sent are those specified in registers 0x72:0x4B-0x4D. */
        unsigned int  reserved_0: 5;  /* bit[3-7] : reserved */
        unsigned int  reserved_1: 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_DCTL_UNION;
#define SOC_HDMI_DCTL_hdcp_sel_START   (0)
#define SOC_HDMI_DCTL_hdcp_sel_END     (0)
#define SOC_HDMI_DCTL_aud_mute_START   (1)
#define SOC_HDMI_DCTL_aud_mute_END     (1)
#define SOC_HDMI_DCTL_vid_blank_START  (2)
#define SOC_HDMI_DCTL_vid_blank_END    (2)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_HDCP_CTRL_UNION
 �ṹ˵��  : HDCP_CTRL �Ĵ����ṹ���塣��ַƫ����:0x03C����ֵ:0x00000000�����:32
 �Ĵ���˵��: HDCP Control Register
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  enc_en    : 1;  /* bit[0-0] : 0 = Encryption disabled
                                                    1 = Encryption enabled
                                                    Note: See description of HDCP_SEL, Data Control Register (0x0D) */
        unsigned int  ri_rdy    : 1;  /* bit[1-1] : Ri Ready:
                                                    1 = Ri first value is ready in the HDMI Transmitter. Cleared by a hardware reset.
                                                    This bit is also cleared when the first byte of BKSV is written into the HDMI Transmitter (performed at the beginning of the next authentication process). */
        unsigned int  cp_restn  : 1;  /* bit[2-2] : Content protection reset:
                                                    0 = Reset
                                                    1 = Normal operation */
        unsigned int  tx_anstop : 1;  /* bit[3-3] : AN control:
                                                    When cleared, the cipher engine is allowed to free run and the AN registers cycle through pseudo-random values.
                                                    When set, the cipher engines stops and the AN register may be read and initialized in the HDCP-capable Receiver.
                                                    To clear this bit, toggle the RX_RPTR bit. This bit is also cleared when the hardware is reset or BKSV_ERR is set. */
        unsigned int  rx_rptr   : 1;  /* bit[4-4] : Repeater:
                                                    0 = Single HDMI Receiver.
                                                    1 = HDMI Receiver is a Repeater
                                                    If the HDMI Receiver is in a Repeater, write this bit to 1 before beginning the authentication process.
                                                    Note: This bit is written when the Source device detects an attached HDCP Repeater device. This is a necessary step in the computation of shared values in the HDCP protocol. */
        unsigned int  bksv_err  : 1;  /* bit[5-5] : BKSV error:
                                                    0 = No error in BKSV format
                                                    1 = Error in BKSV format
                                                    To clear BKSV_ERR, the firmware must first set the TX_ANSTOP bit, then perform an authentication twice with a valid BKSV value. */
        unsigned int  enc_on    : 1;  /* bit[6-6] : Encryption status:
                                                    1 = Encryption enabled and in progress
                                                    0 = Encryption disabled or not in progress */
        unsigned int  reserved_0: 1;  /* bit[7-7] : reserved */
        unsigned int  reserved_1: 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_HDCP_CTRL_UNION;
#define SOC_HDMI_HDCP_CTRL_enc_en_START     (0)
#define SOC_HDMI_HDCP_CTRL_enc_en_END       (0)
#define SOC_HDMI_HDCP_CTRL_ri_rdy_START     (1)
#define SOC_HDMI_HDCP_CTRL_ri_rdy_END       (1)
#define SOC_HDMI_HDCP_CTRL_cp_restn_START   (2)
#define SOC_HDMI_HDCP_CTRL_cp_restn_END     (2)
#define SOC_HDMI_HDCP_CTRL_tx_anstop_START  (3)
#define SOC_HDMI_HDCP_CTRL_tx_anstop_END    (3)
#define SOC_HDMI_HDCP_CTRL_rx_rptr_START    (4)
#define SOC_HDMI_HDCP_CTRL_rx_rptr_END      (4)
#define SOC_HDMI_HDCP_CTRL_bksv_err_START   (5)
#define SOC_HDMI_HDCP_CTRL_bksv_err_END     (5)
#define SOC_HDMI_HDCP_CTRL_enc_on_START     (6)
#define SOC_HDMI_HDCP_CTRL_enc_on_END       (6)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_BKSV1_UNION
 �ṹ˵��  : BKSV1 �Ĵ����ṹ���塣��ַƫ����:0x040����ֵ:0x00000000�����:32
 �Ĵ���˵��: HDCP BKSV Register 1
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  bksv1    : 8;  /* bit[0-7] : HDCP Receiver Key Selection Vector register value. */
        unsigned int  reserved : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_BKSV1_UNION;
#define SOC_HDMI_BKSV1_bksv1_START     (0)
#define SOC_HDMI_BKSV1_bksv1_END       (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_BKSV2_UNION
 �ṹ˵��  : BKSV2 �Ĵ����ṹ���塣��ַƫ����:0x044����ֵ:0x00000000�����:32
 �Ĵ���˵��: HDCP BKSV Register 2
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  bksv2    : 8;  /* bit[0-7] : HDCP Receiver Key Selection Vector register value. */
        unsigned int  reserved : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_BKSV2_UNION;
#define SOC_HDMI_BKSV2_bksv2_START     (0)
#define SOC_HDMI_BKSV2_bksv2_END       (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_BKSV3_UNION
 �ṹ˵��  : BKSV3 �Ĵ����ṹ���塣��ַƫ����:0x048����ֵ:0x00000000�����:32
 �Ĵ���˵��: HDCP BKSV Register 3
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  bksv3    : 8;  /* bit[0-7] : HDCP Receiver Key Selection Vector register value. */
        unsigned int  reserved : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_BKSV3_UNION;
#define SOC_HDMI_BKSV3_bksv3_START     (0)
#define SOC_HDMI_BKSV3_bksv3_END       (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_BKSV4_UNION
 �ṹ˵��  : BKSV4 �Ĵ����ṹ���塣��ַƫ����:0x04C����ֵ:0x00000000�����:32
 �Ĵ���˵��: HDCP BKSV Register 4
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  bksv4    : 8;  /* bit[0-7] : HDCP Receiver Key Selection Vector register value. */
        unsigned int  reserved : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_BKSV4_UNION;
#define SOC_HDMI_BKSV4_bksv4_START     (0)
#define SOC_HDMI_BKSV4_bksv4_END       (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_BKSV5_UNION
 �ṹ˵��  : BKSV5 �Ĵ����ṹ���塣��ַƫ����:0x050����ֵ:0x00000000�����:32
 �Ĵ���˵��: HDCP BKSV Register 5
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  bksv5    : 8;  /* bit[0-7] : HDCP Receiver Key Selection Vector register value.
                                                   Writing byte 5 triggers the authentication logic in the HDMI Transmitter. Write this byte last. */
        unsigned int  reserved : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_BKSV5_UNION;
#define SOC_HDMI_BKSV5_bksv5_START     (0)
#define SOC_HDMI_BKSV5_bksv5_END       (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_AN1_UNION
 �ṹ˵��  : AN1 �Ĵ����ṹ���塣��ַƫ����:0x054����ֵ:0x00000000�����:32
 �Ĵ���˵��: HDCP AN Register1
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  an1      : 8;  /* bit[0-7] : AN value is an HDCP 64-Bit pseudo-random value. */
        unsigned int  reserved : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_AN1_UNION;
#define SOC_HDMI_AN1_an1_START       (0)
#define SOC_HDMI_AN1_an1_END         (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_AN2_UNION
 �ṹ˵��  : AN2 �Ĵ����ṹ���塣��ַƫ����:0x058����ֵ:0x00000000�����:32
 �Ĵ���˵��: HDCP AN Register2
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  an2      : 8;  /* bit[0-7] : AN value is an HDCP 64-Bit pseudo-random value. */
        unsigned int  reserved : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_AN2_UNION;
#define SOC_HDMI_AN2_an2_START       (0)
#define SOC_HDMI_AN2_an2_END         (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_AN3_UNION
 �ṹ˵��  : AN3 �Ĵ����ṹ���塣��ַƫ����:0x05C����ֵ:0x00000000�����:32
 �Ĵ���˵��: HDCP AN Register3
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  an2      : 8;  /* bit[0-7] : AN value is an HDCP 64-Bit pseudo-random value. */
        unsigned int  reserved : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_AN3_UNION;
#define SOC_HDMI_AN3_an2_START       (0)
#define SOC_HDMI_AN3_an2_END         (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_AN4_UNION
 �ṹ˵��  : AN4 �Ĵ����ṹ���塣��ַƫ����:0x060����ֵ:0x00000000�����:32
 �Ĵ���˵��: HDCP AN Register4
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  an4      : 8;  /* bit[0-7] : AN value is an HDCP 64-Bit pseudo-random value. */
        unsigned int  reserved : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_AN4_UNION;
#define SOC_HDMI_AN4_an4_START       (0)
#define SOC_HDMI_AN4_an4_END         (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_AN5_UNION
 �ṹ˵��  : AN5 �Ĵ����ṹ���塣��ַƫ����:0x064����ֵ:0x00000000�����:32
 �Ĵ���˵��: HDCP AN Register5
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  an5      : 8;  /* bit[0-7] : AN value is an HDCP 64-Bit pseudo-random value. */
        unsigned int  reserved : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_AN5_UNION;
#define SOC_HDMI_AN5_an5_START       (0)
#define SOC_HDMI_AN5_an5_END         (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_AN6_UNION
 �ṹ˵��  : AN6 �Ĵ����ṹ���塣��ַƫ����:0x068����ֵ:0x00000000�����:32
 �Ĵ���˵��: HDCP AN Register6
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  an6      : 8;  /* bit[0-7] : AN value is an HDCP 64-Bit pseudo-random value. */
        unsigned int  reserved : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_AN6_UNION;
#define SOC_HDMI_AN6_an6_START       (0)
#define SOC_HDMI_AN6_an6_END         (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_AN7_UNION
 �ṹ˵��  : AN7 �Ĵ����ṹ���塣��ַƫ����:0x06C����ֵ:0x00000000�����:32
 �Ĵ���˵��: HDCP AN Register7
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  an7      : 8;  /* bit[0-7] : AN value is an HDCP 64-Bit pseudo-random value. */
        unsigned int  reserved : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_AN7_UNION;
#define SOC_HDMI_AN7_an7_START       (0)
#define SOC_HDMI_AN7_an7_END         (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_AN8_UNION
 �ṹ˵��  : AN8 �Ĵ����ṹ���塣��ַƫ����:0x070����ֵ:0x00000000�����:32
 �Ĵ���˵��: HDCP AN Register8
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  an8      : 8;  /* bit[0-7] : AN value is an HDCP 64-Bit pseudo-random value. */
        unsigned int  reserved : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_AN8_UNION;
#define SOC_HDMI_AN8_an8_START       (0)
#define SOC_HDMI_AN8_an8_END         (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_AKSV1_UNION
 �ṹ˵��  : AKSV1 �Ĵ����ṹ���塣��ַƫ����:0x074����ֵ:0x00000000�����:32
 �Ĵ���˵��: HDCP AKSV Register1
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  aksv1    : 8;  /* bit[0-7] : HDCP-capable Transmitter��s Key Selection Vector. Byte 5 triggers the authentication logic in the Receiver. Write this byte last. */
        unsigned int  reserved : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_AKSV1_UNION;
#define SOC_HDMI_AKSV1_aksv1_START     (0)
#define SOC_HDMI_AKSV1_aksv1_END       (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_AKSV2_UNION
 �ṹ˵��  : AKSV2 �Ĵ����ṹ���塣��ַƫ����:0x078����ֵ:0x00000000�����:32
 �Ĵ���˵��: HDCP AKSV Register2
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  aksv2    : 8;  /* bit[0-7] : HDCP-capable Transmitter��s Key Selection Vector. Byte 5 triggers the authentication logic in the Receiver. Write this byte last. */
        unsigned int  reserved : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_AKSV2_UNION;
#define SOC_HDMI_AKSV2_aksv2_START     (0)
#define SOC_HDMI_AKSV2_aksv2_END       (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_AKSV3_UNION
 �ṹ˵��  : AKSV3 �Ĵ����ṹ���塣��ַƫ����:0x07C����ֵ:0x00000000�����:32
 �Ĵ���˵��: HDCP AKSV Register3
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  aksv3    : 8;  /* bit[0-7] : HDCP-capable Transmitter��s Key Selection Vector. Byte 5 triggers the authentication logic in the Receiver. Write this byte last. */
        unsigned int  reserved : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_AKSV3_UNION;
#define SOC_HDMI_AKSV3_aksv3_START     (0)
#define SOC_HDMI_AKSV3_aksv3_END       (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_AKSV4_UNION
 �ṹ˵��  : AKSV4 �Ĵ����ṹ���塣��ַƫ����:0x080����ֵ:0x00000000�����:32
 �Ĵ���˵��: HDCP AKSV Register4
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  aksv4    : 8;  /* bit[0-7] : HDCP-capable Transmitter��s Key Selection Vector. Byte 5 triggers the authentication logic in the Receiver. Write this byte last. */
        unsigned int  reserved : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_AKSV4_UNION;
#define SOC_HDMI_AKSV4_aksv4_START     (0)
#define SOC_HDMI_AKSV4_aksv4_END       (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_AKSV5_UNION
 �ṹ˵��  : AKSV5 �Ĵ����ṹ���塣��ַƫ����:0x084����ֵ:0x00000000�����:32
 �Ĵ���˵��: HDCP AKSV Register5
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  aksv5    : 8;  /* bit[0-7] : HDCP-capable Transmitter��s Key Selection Vector. Byte 5 triggers the authentication logic in the Receiver. Write this byte last. */
        unsigned int  reserved : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_AKSV5_UNION;
#define SOC_HDMI_AKSV5_aksv5_START     (0)
#define SOC_HDMI_AKSV5_aksv5_END       (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_RI1_UNION
 �ṹ˵��  : RI1 �Ĵ����ṹ���塣��ַƫ����:0x088����ֵ:0x00000000�����:32
 �Ĵ���˵��: HDCP Ri Register1
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ri1      : 8;  /* bit[0-7] : Ri Register. The value of this register should be read and compared with the HDMI Receiver��s Ri�� value. */
        unsigned int  reserved : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_RI1_UNION;
#define SOC_HDMI_RI1_ri1_START       (0)
#define SOC_HDMI_RI1_ri1_END         (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_RI2_UNION
 �ṹ˵��  : RI2 �Ĵ����ṹ���塣��ַƫ����:0x08C����ֵ:0x00000000�����:32
 �Ĵ���˵��: HDCP Ri Register2
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ri2      : 8;  /* bit[0-7] : Ri Register. The value of this register should be read and compared with the HDMI Receiver��s Ri�� value. */
        unsigned int  reserved : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_RI2_UNION;
#define SOC_HDMI_RI2_ri2_START       (0)
#define SOC_HDMI_RI2_ri2_END         (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_RI_128_COMP_UNION
 �ṹ˵��  : RI_128_COMP �Ĵ����ṹ���塣��ַƫ����:0x090����ֵ:0x00000000�����:32
 �Ĵ���˵��: HDCP Ri 128 Compare Register
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ri_128_comp : 7;  /* bit[0-6] : Limit counter for Ri comparison.
                                                      When the frame counter (I_CNT) reaches the index set in this register, an RI_128 interrupt is generated. */
        unsigned int  reserved_0  : 1;  /* bit[7-7] : reserved */
        unsigned int  reserved_1  : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_RI_128_COMP_UNION;
#define SOC_HDMI_RI_128_COMP_ri_128_comp_START  (0)
#define SOC_HDMI_RI_128_COMP_ri_128_comp_END    (6)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_I_CNT_UNION
 �ṹ˵��  : I_CNT �Ĵ����ṹ���塣��ַƫ����:0x094����ֵ:0x00000000�����:32
 �Ĵ���˵��: HDCP I Counter Register
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  i_cnt    : 7;  /* bit[0-6] : Current value of I counter. This register counts frames from 0 to 127, then rolls over to zero. */
        unsigned int  reserved_0: 1;  /* bit[7-7] : reserved */
        unsigned int  reserved_1: 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_I_CNT_UNION;
#define SOC_HDMI_I_CNT_i_cnt_START     (0)
#define SOC_HDMI_I_CNT_i_cnt_END       (6)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_RI_STAT_UNION
 �ṹ˵��  : RI_STAT �Ĵ����ṹ���塣��ַƫ����:0x098����ֵ:0x00000000�����:32
 �Ĵ���˵��: Ri Status Register
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ri_started : 1;  /* bit[0-0] : Ri check started status.
                                                     This signal is used for handshaking between the firmware and the hardware. After the Ri check is enabled, the hardware waits for the
                                                     DDC master to finish the current transaction before taking control.
                                                     After this bit is set, the firmware loses the ability to use the DDC Master; unless it disables Ri Check and this bit resets to 0. */
        unsigned int  reserved_0 : 7;  /* bit[1-7] : reserved */
        unsigned int  reserved_1 : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_RI_STAT_UNION;
#define SOC_HDMI_RI_STAT_ri_started_START  (0)
#define SOC_HDMI_RI_STAT_ri_started_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_RI_CMD_UNION
 �ṹ˵��  : RI_CMD �Ĵ����ṹ���塣��ַƫ����:0x09C����ֵ:0x00000000�����:32
 �Ĵ���˵��: Ri Command Register
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ri_en    : 1;  /* bit[0-0] : Enable Ri check. Check bit 0 of the Ri_STAT register (0x72:0x26) for
                                                   firmware and hardware DDC control handshaking.
                                                   1 = Enabled
                                                   0 = Disabled */
        unsigned int  bcap_en  : 1;  /* bit[1-1] : Enable polling of the BCAP_DONE bit (0x72:0x72[7]):
                                                   0 = Disable
                                                   1 = Enable
                                                   Note: To poll the BCAP_DONE bit, the ENC_EN (0x72:0x0F[0]) bit and the Ri_EN bit must be enabled on the HDMI Transmitter. */
        unsigned int  _stst_en : 1;  /* bit[2-2] : Not used */
        unsigned int  reserved_0: 5;  /* bit[3-7] : reserved */
        unsigned int  reserved_1: 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_RI_CMD_UNION;
#define SOC_HDMI_RI_CMD_ri_en_START     (0)
#define SOC_HDMI_RI_CMD_ri_en_END       (0)
#define SOC_HDMI_RI_CMD_bcap_en_START   (1)
#define SOC_HDMI_RI_CMD_bcap_en_END     (1)
#define SOC_HDMI_RI_CMD__stst_en_START  (2)
#define SOC_HDMI_RI_CMD__stst_en_END    (2)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_RI_LINE_START_UNION
 �ṹ˵��  : RI_LINE_START �Ĵ����ṹ���塣��ַƫ����:0x0A0����ֵ:0x00000004�����:32
 �Ĵ���˵��: Ri Line Start Register
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ri_line_start : 8;  /* bit[0-7] : Indicates at what line within frame 127 or 0 to start the Ri Check.
                                                        Note: The value for this register bit represents the power of 2; 2 LSB is 0. */
        unsigned int  reserved      : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_RI_LINE_START_UNION;
#define SOC_HDMI_RI_LINE_START_ri_line_start_START  (0)
#define SOC_HDMI_RI_LINE_START_ri_line_start_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_RI_RX_L_UNION
 �ṹ˵��  : RI_RX_L �Ĵ����ṹ���塣��ַƫ����:0x0A4����ֵ:0x00000000�����:32
 �Ĵ���˵��: Ri From RX Register1
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ri_rx_7_0_ : 8;  /* bit[0-7] : Ri_RX[7:0]
                                                     This value represents the HDMI Receiver��s Ri value if any of the Ri Check errors occurred. */
        unsigned int  reserved   : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_RI_RX_L_UNION;
#define SOC_HDMI_RI_RX_L_ri_rx_7_0__START  (0)
#define SOC_HDMI_RI_RX_L_ri_rx_7_0__END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_RI_RX_H_UNION
 �ṹ˵��  : RI_RX_H �Ĵ����ṹ���塣��ַƫ����:0x0A8����ֵ:0x00000000�����:32
 �Ĵ���˵��: Ri From RX Register2
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ri_rx_15_8_ : 8;  /* bit[0-7] : Ri_RX[15:8]
                                                      This value represents the HDMI Receiver��s Ri value if any of the Ri Check errors occurred. */
        unsigned int  reserved    : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_RI_RX_H_UNION;
#define SOC_HDMI_RI_RX_H_ri_rx_15_8__START  (0)
#define SOC_HDMI_RI_RX_H_ri_rx_15_8__END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_RI_DEBUG_UNION
 �ṹ˵��  : RI_DEBUG �Ĵ����ṹ���塣��ַƫ����:0x0AC����ֵ:???�����:32
 �Ĵ���˵��: Ri Debug Registers
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  rsdvx        : 6;  /* bit[0-5] : reserved */
        unsigned int  ri_dbg_hold  : 1;  /* bit[6-6] : 1 = Hold the Ri value steady, stop updating
                                                       0 = Continue with regular updates to Ri */
        unsigned int  ri_dbg_trash : 1;  /* bit[7-7] : 1 = Force a corruption of the Ri values
                                                       0 = Continue with regular updates to Ri */
        unsigned int  reserved     : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_RI_DEBUG_UNION;
#define SOC_HDMI_RI_DEBUG_rsdvx_START         (0)
#define SOC_HDMI_RI_DEBUG_rsdvx_END           (5)
#define SOC_HDMI_RI_DEBUG_ri_dbg_hold_START   (6)
#define SOC_HDMI_RI_DEBUG_ri_dbg_hold_END     (6)
#define SOC_HDMI_RI_DEBUG_ri_dbg_trash_START  (7)
#define SOC_HDMI_RI_DEBUG_ri_dbg_trash_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_DE_DLY_UNION
 �ṹ˵��  : DE_DLY �Ĵ����ṹ���塣��ַƫ����:0x0C8����ֵ:0x00000000�����:32
 �Ĵ���˵��: Video DE Delay Register
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  de_dly   : 8;  /* bit[0-7] : Width of the area to the left of the active display. The unit of measure is pixels. This register should be set to the sum of (HSYNC width) + (horizontal back porch) + (horizontal
                                                   left border), and is used only for DE generation.
                                                   Note: This 12-bit value includes four bits from register 0x72:0x33.
                                                   The valid range is 1-4095. 0 is invalid. */
        unsigned int  reserved : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_DE_DLY_UNION;
#define SOC_HDMI_DE_DLY_de_dly_START    (0)
#define SOC_HDMI_DE_DLY_de_dly_END      (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_DE_CTRL_UNION
 �ṹ˵��  : DE_CTRL �Ĵ����ṹ���塣��ַƫ����:0x0CC����ֵ:0x00000000�����:32
 �Ĵ���˵��: Video DE Control Register
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  de_dly_11_8_ : 4;  /* bit[0-3] : Bits 11:8 of the DE_DLY value (see register 0x72:0x32). */
        unsigned int  hs_pol       : 1;  /* bit[4-4] : HSYNC polarity:
                                                       0 = Positive polarity (leading edge rises).
                                                       1 = Negative polarity (leading edge falls).
                                                       Set this bit to the input HSYNC polarity for the source that provides HSYNC. For embedded syncs, set this bit to the desired HSYNC polarity that is generated from the embedded sync codes. */
        unsigned int  vs_pol       : 1;  /* bit[5-5] : VSYNC polarity:
                                                       0 = Positive polarity (leading edge rises).
                                                       1 = Negative polarity (leading edge falls).
                                                       Set this bit to the input VSYNC polarity for the source that provides VSYNC. For embedded syncs, set this bit to the desired VSYNC polarity that is generated from the embedded sync codes. */
        unsigned int  de_gen       : 1;  /* bit[6-6] : Generate DE signal:
                                                       0 = Disabled
                                                       1 = Enabled */
        unsigned int  reserved_0   : 1;  /* bit[7-7] : reserved */
        unsigned int  reserved_1   : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_DE_CTRL_UNION;
#define SOC_HDMI_DE_CTRL_de_dly_11_8__START  (0)
#define SOC_HDMI_DE_CTRL_de_dly_11_8__END    (3)
#define SOC_HDMI_DE_CTRL_hs_pol_START        (4)
#define SOC_HDMI_DE_CTRL_hs_pol_END          (4)
#define SOC_HDMI_DE_CTRL_vs_pol_START        (5)
#define SOC_HDMI_DE_CTRL_vs_pol_END          (5)
#define SOC_HDMI_DE_CTRL_de_gen_START        (6)
#define SOC_HDMI_DE_CTRL_de_gen_END          (6)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_DE_TOP_UNION
 �ṹ˵��  : DE_TOP �Ĵ����ṹ���塣��ַƫ����:0x0D0����ֵ:0x00000000�����:32
 �Ĵ���˵��: Video DE Top Register
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  de_top   : 7;  /* bit[0-6] : Defines the height of the area above the active display. The
                                                   unit of measure is lines (HSYNC pulses). This register
                                                   should be set to the sum of (VSYNC width) + (vertical back
                                                   porch) + (vertical top border).
                                                   The valid range is 1-127. 0 is invalid. */
        unsigned int  reserved_0: 1;  /* bit[7-7] : reserved */
        unsigned int  reserved_1: 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_DE_TOP_UNION;
#define SOC_HDMI_DE_TOP_de_top_START    (0)
#define SOC_HDMI_DE_TOP_de_top_END      (6)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_DE_CNTL_UNION
 �ṹ˵��  : DE_CNTL �Ĵ����ṹ���塣��ַƫ����:0x0D8����ֵ:0x00000000�����:32
 �Ĵ���˵��: Video DE Count Register1
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  de_cnt_7_0_ : 8;  /* bit[0-7] : DE_CNT[7:0]
                                                      Defines the width of the active display. The unit of measure is pixels. This register should be set to the desired horizontal resolution.
                                                      The valid range is 1-4095. 0 is invalid. */
        unsigned int  reserved    : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_DE_CNTL_UNION;
#define SOC_HDMI_DE_CNTL_de_cnt_7_0__START  (0)
#define SOC_HDMI_DE_CNTL_de_cnt_7_0__END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_DE_CNTH_UNION
 �ṹ˵��  : DE_CNTH �Ĵ����ṹ���塣��ַƫ����:0x0DC����ֵ:0x00000000�����:32
 �Ĵ���˵��: Video DE Count Register2
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  de_cnt_11_8_ : 4;  /* bit[0-3] : DE_CNT[11:8]
                                                       Defines the width of the active display. The unit of measure is pixels. This register should be set to the desired horizontal resolution.
                                                       The valid range is 1-4095. 0 is invalid. */
        unsigned int  reserved_0   : 4;  /* bit[4-7] : reserved */
        unsigned int  reserved_1   : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_DE_CNTH_UNION;
#define SOC_HDMI_DE_CNTH_de_cnt_11_8__START  (0)
#define SOC_HDMI_DE_CNTH_de_cnt_11_8__END    (3)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_DE_LINL_UNION
 �ṹ˵��  : DE_LINL �Ĵ����ṹ���塣��ַƫ����:0x0E0����ֵ:0x00000000�����:32
 �Ĵ���˵��: Video DE Line Register1
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  de_lin_7_0_ : 8;  /* bit[0-7] : DE_LIN[7:0]
                                                      Defines the height of the active display. The unit of measure is lines (HSYNC pulses). Set this register to the desired vertical resolution. For interlaced modes, set this register to the number of lines per field, which is half the overall vertical resolution. */
        unsigned int  reserved    : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_DE_LINL_UNION;
#define SOC_HDMI_DE_LINL_de_lin_7_0__START  (0)
#define SOC_HDMI_DE_LINL_de_lin_7_0__END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_DE_LINH_UNION
 �ṹ˵��  : DE_LINH �Ĵ����ṹ���塣��ַƫ����:0x0E4����ֵ:0x00000000�����:32
 �Ĵ���˵��: Video DE Line Register2
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  de_lin_10_8_ : 3;  /* bit[0-2] : DE_LIN[10:8]
                                                       Defines the height of the active display. The unit of measure is lines (HSYNC pulses). Set this register to the desired vertical
                                                       resolution. For interlaced modes, set this register to the number of lines per field, which is half the overall vertical resolution. */
        unsigned int  reserved_0   : 5;  /* bit[3-7] : reserved */
        unsigned int  reserved_1   : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_DE_LINH_UNION;
#define SOC_HDMI_DE_LINH_de_lin_10_8__START  (0)
#define SOC_HDMI_DE_LINH_de_lin_10_8__END    (2)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_HRES_L_UNION
 �ṹ˵��  : HRES_L �Ĵ����ṹ���塣��ַƫ����:0x0E8����ֵ:0x00000000�����:32
 �Ĵ���˵��: Video H Resolution Register1
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  h_res_7_0_ : 8;  /* bit[0-7] : H_RES[7:0]
                                                     Measures the time between two HSYNC active edges. The unit of measure is pixels. */
        unsigned int  reserved   : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_HRES_L_UNION;
#define SOC_HDMI_HRES_L_h_res_7_0__START  (0)
#define SOC_HDMI_HRES_L_h_res_7_0__END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_HRES_H_UNION
 �ṹ˵��  : HRES_H �Ĵ����ṹ���塣��ַƫ����:0x0EC����ֵ:0x00000000�����:32
 �Ĵ���˵��: Video H Resolution Register2
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  h_res_12_8_ : 5;  /* bit[0-4] : H_RES[12:8]
                                                      Measures the time between two HSYNC active edges. The unit of measure is pixels. */
        unsigned int  reserved_0  : 3;  /* bit[5-7] : reserved */
        unsigned int  reserved_1  : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_HRES_H_UNION;
#define SOC_HDMI_HRES_H_h_res_12_8__START  (0)
#define SOC_HDMI_HRES_H_h_res_12_8__END    (4)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_VRES_L_UNION
 �ṹ˵��  : VRES_L �Ĵ����ṹ���塣��ַƫ����:0x0F0����ֵ:0x00000000�����:32
 �Ĵ���˵��: Video V Refresh Register1
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  v_res_7_0_ : 8;  /* bit[0-7] : V_RES[7:0]
                                                     Measures the time between two VSYNC active edges. The unit of measure is lines. */
        unsigned int  reserved   : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_VRES_L_UNION;
#define SOC_HDMI_VRES_L_v_res_7_0__START  (0)
#define SOC_HDMI_VRES_L_v_res_7_0__END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_VREL_H_UNION
 �ṹ˵��  : VREL_H �Ĵ����ṹ���塣��ַƫ����:0x0F4����ֵ:0x00000000�����:32
 �Ĵ���˵��: Video V Refresh Register2
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  v_res_10_8_ : 3;  /* bit[0-2] : V_RES[10:8]
                                                      Measures the time between two VSYNC active edges. The unit of measure is lines. */
        unsigned int  reserved_0  : 5;  /* bit[3-7] : reserved */
        unsigned int  reserved_1  : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_VREL_H_UNION;
#define SOC_HDMI_VREL_H_v_res_10_8__START  (0)
#define SOC_HDMI_VREL_H_v_res_10_8__END    (2)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_IADJUST_UNION
 �ṹ˵��  : IADJUST �Ĵ����ṹ���塣��ַƫ����:0x0F8����ֵ:0x00000000�����:32
 �Ĵ���˵��: Video Interlace Adjustment Register
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  f2vofst  : 1;  /* bit[0-0] : 0 = If F2VADJ and this bit is cleared, VBIT_TO_VSYNC (register 0x72:0x46) is decremented by one during field 2 of an interlace frame 1 = If F2VADJ and this bit is set, VBIT_TO_VSYNC is incremented by one during field 2 of an interlace frame. */
        unsigned int  f2vadj   : 1;  /* bit[1-1] : If this bit is set, the VBIT_TO_VSYNC value (register 0x72:0x46) is adjusted during field 2 of an interlace frame according to the setting of the F2VOFST bit.
                                                   This bit defaults to 0. */
        unsigned int  de_adj   : 1;  /* bit[2-2] : 0 = Enable VSYNC
                                                   1 = Disable VSYNC
                                                   Setting this bit HIGH disables VSYNC adjustments and sets the DE generator to be more compatible with the existing Transmitters. Clearing
                                                   this bit enables detection circuits to locate the position of VSYNC relative to HSYNC and only include HSYNC edges that are greater than ?lines
                                                   from VSYNC in the line count for DE_TOP. */
        unsigned int  reserved_0: 5;  /* bit[3-7] : reserved */
        unsigned int  reserved_1: 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_IADJUST_UNION;
#define SOC_HDMI_IADJUST_f2vofst_START   (0)
#define SOC_HDMI_IADJUST_f2vofst_END     (0)
#define SOC_HDMI_IADJUST_f2vadj_START    (1)
#define SOC_HDMI_IADJUST_f2vadj_END      (1)
#define SOC_HDMI_IADJUST_de_adj_START    (2)
#define SOC_HDMI_IADJUST_de_adj_END      (2)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_POL_DETECT_UNION
 �ṹ˵��  : POL_DETECT �Ĵ����ṹ���塣��ַƫ����:0x0FC����ֵ:0x00000000�����:32
 �Ĵ���˵��: Video SYNC Polarity Detection Register
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  hpol_det : 1;  /* bit[0-0] : Detected input HSYNC polarity, using internal circuit:
                                                   0 = Active HIGH (leading edge rises)
                                                   1 = Active LOW (leading edge falls) */
        unsigned int  vpol_det : 1;  /* bit[1-1] : Detected input VSYNC polarity, using internal circuit:
                                                   0 = Active high (leading edge rises)
                                                   1 = Active low (leading edge falls) */
        unsigned int  i_det    : 1;  /* bit[2-2] : Interlace detect:
                                                   0 = Non-interlaced video
                                                   1 = Interlaced video
                                                   This bit is set by checking for a varying VSYNC timing characteristic of interlaced modes. */
        unsigned int  reserved_0: 5;  /* bit[3-7] : reserved */
        unsigned int  reserved_1: 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_POL_DETECT_UNION;
#define SOC_HDMI_POL_DETECT_hpol_det_START  (0)
#define SOC_HDMI_POL_DETECT_hpol_det_END    (0)
#define SOC_HDMI_POL_DETECT_vpol_det_START  (1)
#define SOC_HDMI_POL_DETECT_vpol_det_END    (1)
#define SOC_HDMI_POL_DETECT_i_det_START     (2)
#define SOC_HDMI_POL_DETECT_i_det_END       (2)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_HBIT_2HSYNC1_UNION
 �ṹ˵��  : HBIT_2HSYNC1 �Ĵ����ṹ���塣��ַƫ����:0x100����ֵ:0x00000000�����:32
 �Ĵ���˵��: Video Hbit to HSYNC Register1
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  hbit_to_hsync_7_0_ : 8;  /* bit[0-7] : HBIT_TO_HSYNC[7:0]
                                                             Creates HSYNC pulses. Set this register to the delay from the detection of an EAV sequence (H bit change from 1 to 0) to the active edge of HSYNC. The unit of measure is pixels.
                                                             The valid range is 1-1023. 0 is invalid. */
        unsigned int  reserved           : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_HBIT_2HSYNC1_UNION;
#define SOC_HDMI_HBIT_2HSYNC1_hbit_to_hsync_7_0__START  (0)
#define SOC_HDMI_HBIT_2HSYNC1_hbit_to_hsync_7_0__END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_HBIT_2HSYNC2_UNION
 �ṹ˵��  : HBIT_2HSYNC2 �Ĵ����ṹ���塣��ַƫ����:0x104����ֵ:0x00000000�����:32
 �Ĵ���˵��: Video Hbit to HSYNC Register2
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  hbit_to_hsync9_8_ : 2;  /* bit[0-1] : HBIT_TO_HSYNC[9:8]
                                                            Creates HSYNC pulses. Set this register to the delay from the detection of an EAV sequence (H bit change from 1 to 0) to the active edge of HSYNC. The unit of measure is pixels.
                                                            The valid range is 1-1023. 0 is invalid. */
        unsigned int  reserved_0        : 6;  /* bit[2-7] : reserved */
        unsigned int  reserved_1        : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_HBIT_2HSYNC2_UNION;
#define SOC_HDMI_HBIT_2HSYNC2_hbit_to_hsync9_8__START  (0)
#define SOC_HDMI_HBIT_2HSYNC2_hbit_to_hsync9_8__END    (1)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_FLD2_HS_OFSTL_UNION
 �ṹ˵��  : FLD2_HS_OFSTL �Ĵ����ṹ���塣��ַƫ����:0x108����ֵ:0x00000000�����:32
 �Ĵ���˵��: Video Field2 HSYNC Offset Register1
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  field2_ofst_7_0_ : 8;  /* bit[0-7] : FIELD2_OFST[7:0]
                                                           Determines VSYNC pixel offset for the odd field of an interlaced source. Set this to half the number of pixels/line.
                                                           The valid range is 1-4095. 0 is invalid. */
        unsigned int  reserved         : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_FLD2_HS_OFSTL_UNION;
#define SOC_HDMI_FLD2_HS_OFSTL_field2_ofst_7_0__START  (0)
#define SOC_HDMI_FLD2_HS_OFSTL_field2_ofst_7_0__END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_FLD2_HS_OFSTH_UNION
 �ṹ˵��  : FLD2_HS_OFSTH �Ĵ����ṹ���塣��ַƫ����:0x10C����ֵ:0x00000000�����:32
 �Ĵ���˵��: Video Field2 HSYNC Offset Register2
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  field2_ofst_11_8_ : 4;  /* bit[0-3] : FIELD2_OFST[11:8]
                                                            Determines VSYNC pixel offset for the odd field of an interlaced source. Set this to half the number of pixels/line.
                                                            The valid range is 1-4095. 0 is invalid. */
        unsigned int  reserved_0        : 4;  /* bit[4-7] : reserved */
        unsigned int  reserved_1        : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_FLD2_HS_OFSTH_UNION;
#define SOC_HDMI_FLD2_HS_OFSTH_field2_ofst_11_8__START  (0)
#define SOC_HDMI_FLD2_HS_OFSTH_field2_ofst_11_8__END    (3)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_HWIDTH1_UNION
 �ṹ˵��  : HWIDTH1 �Ĵ����ṹ���塣��ַƫ����:0x110����ֵ:0x00000000�����:32
 �Ĵ���˵��: Video HSYNC Length Register1
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  hwidth_7_0_ : 8;  /* bit[0-7] : HWIDTH[7:0]
                                                      Sets the width of the HSYNC pulses. Set this register to the desired HSYNC pulse width. The unit of measure is pixels.
                                                      The valid range is 1-1023. 0 is invalid. */
        unsigned int  reserved    : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_HWIDTH1_UNION;
#define SOC_HDMI_HWIDTH1_hwidth_7_0__START  (0)
#define SOC_HDMI_HWIDTH1_hwidth_7_0__END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_HWIDTH2_UNION
 �ṹ˵��  : HWIDTH2 �Ĵ����ṹ���塣��ַƫ����:0x114����ֵ:0x00000000�����:32
 �Ĵ���˵��: Video HSYNC Length Register2
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  hwidth_9_8_ : 2;  /* bit[0-1] : HWIDTH[9:8]
                                                      Sets the width of the HSYNC pulses. Set this register to the desired HSYNC pulse width. The unit of measure is pixels.
                                                      The valid range is 1-1023. 0 is invalid. */
        unsigned int  reserved_0  : 6;  /* bit[2-7] : reserved */
        unsigned int  reserved_1  : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_HWIDTH2_UNION;
#define SOC_HDMI_HWIDTH2_hwidth_9_8__START  (0)
#define SOC_HDMI_HWIDTH2_hwidth_9_8__END    (1)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_VBIT_TO_VSYNC_UNION
 �ṹ˵��  : VBIT_TO_VSYNC �Ĵ����ṹ���塣��ַƫ����:0x118����ֵ:0x00000000�����:32
 �Ĵ���˵��: Video Vbit to VSYNC Register
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  vbit_to_vsync : 6;  /* bit[0-5] : Sets the delay from the detection of V bit changing from 1 to 0 in an EAV sequence, to the asserting edge of VSYNC. The unit of measure is lines.
                                                        The valid range is 1-63. 0 is invalid. */
        unsigned int  reserved_0    : 2;  /* bit[6-7] : reserved */
        unsigned int  reserved_1    : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_VBIT_TO_VSYNC_UNION;
#define SOC_HDMI_VBIT_TO_VSYNC_vbit_to_vsync_START  (0)
#define SOC_HDMI_VBIT_TO_VSYNC_vbit_to_vsync_END    (5)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_VWIDTH_UNION
 �ṹ˵��  : VWIDTH �Ĵ����ṹ���塣��ַƫ����:0x11C����ֵ:0x00000000�����:32
 �Ĵ���˵��: Video VSYNC Length Register
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  vwidth   : 6;  /* bit[0-5] : Sets the width of VSYNC pulse. The unit of measure is lines. The valid range is 1-63. 0 is invalid. */
        unsigned int  reserved_0: 2;  /* bit[6-7] : reserved */
        unsigned int  reserved_1: 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_VWIDTH_UNION;
#define SOC_HDMI_VWIDTH_vwidth_START    (0)
#define SOC_HDMI_VWIDTH_vwidth_END      (5)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_VID_CTRL_UNION
 �ṹ˵��  : VID_CTRL �Ĵ����ṹ���塣��ַƫ����:0x120����ֵ:0x00000000�����:32
 �Ĵ���˵��: Video Control Register
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  iclk     : 2;  /* bit[0-1] : Clock mode:
                                                   0b00 = Pixel data is not replicated
                                                   0b01 = Pixels are replicated once (each sent twice)
                                                   0b10 = reserved
                                                   0b11 = Pixels are replicated 4 times (each sent four times)
                                                   Note: If the DEMUX bit in the VID_MODE register
                                                   (0x72:0x4A[1]) is set to 0, set ICLK and the pixel replication field of the AVI v2 data byte 5 to the same value. If the DEMUX bit is set to 1, set the pixel replication field of the AVI
                                                   v2 data byte 5 to the next higher pixel replication rate. For example, if DEMUX = 1 and ICLK = 0b01, set the pixel replication field of AVI v2 data byte 5 to 0b11.
                                                   Refer to page 34 for examples on programming ICLK, TCLKSEL, and the pixel replication field of the AVI v2 data byte 5 for various video and audio modes. */
        unsigned int  reserved_0: 2;  /* bit[2-3] : reserved */
        unsigned int  cscsel   : 1;  /* bit[4-4] : Color Space Conversion Standard select:
                                                   0 = BT.601 conversion
                                                   1 = BT.709 conversion */
        unsigned int  extn     : 1;  /* bit[5-5] : Extended Bit mode:
                                                   0 = All 8-bit input modes
                                                   1 = All 12-bit 4:2:2 input modes
                                                   For 4:2:2 inputs wider than 8 bits but less than 12 bits, the unused bits should be set to 0. */
        unsigned int  reserved_1: 1;  /* bit[6-6] : Do not write this bit to 1. */
        unsigned int  ifpol    : 1;  /* bit[7-7] : Invert field polarity:
                                                   0 = Do not invert field bit
                                                   1 = Invert field bit
                                                   This bit is used when the 656 Flag bit is opposite the standard polarity for Field1 and Field2. Inverting the field polarity causes the sync extraction to format HSYNC and VSYNC
                                                   properly based on the F bit. In embedded sync mode, the HDMI Transmitter does not detect even from odd field, except based on the setting of the F bit. With explicit syncs, the HDMI Transmitter encodes HSYNC and VSYNC across the
                                                   HDMI/TMDS link regardless of field sequence. */
        unsigned int  reserved_2: 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_VID_CTRL_UNION;
#define SOC_HDMI_VID_CTRL_iclk_START      (0)
#define SOC_HDMI_VID_CTRL_iclk_END        (1)
#define SOC_HDMI_VID_CTRL_cscsel_START    (4)
#define SOC_HDMI_VID_CTRL_cscsel_END      (4)
#define SOC_HDMI_VID_CTRL_extn_START      (5)
#define SOC_HDMI_VID_CTRL_extn_END        (5)
#define SOC_HDMI_VID_CTRL_ifpol_START     (7)
#define SOC_HDMI_VID_CTRL_ifpol_END       (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_VID_ACEN_UNION
 �ṹ˵��  : VID_ACEN �Ĵ����ṹ���塣��ַƫ����:0x124����ֵ:0x00000000�����:32
 �Ĵ���˵��: Video Action Enable Register
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  down_smpl   : 1;  /* bit[0-0] : Enable down sampler 4:4:4 to 4:2:2:
                                                      0 = Disabled
                                                      1 = Enabled */
        unsigned int  range_cmps  : 1;  /* bit[1-1] : Enable Range Compress 0-255 to 16-234:
                                                      0 = Disabled
                                                      1 = Enabled */
        unsigned int  rgb_2_ycbcr : 1;  /* bit[2-2] : Enable RGB to YCbCr color-space converter:
                                                      0 = Disabled
                                                      1 = Enabled */
        unsigned int  range_clip  : 1;  /* bit[3-3] : Enable Range Clip from 16 to 235 (RGB and Y)/ 240 (CbCr):
                                                      0 = Disabled
                                                      1 = Enabled */
        unsigned int  clip_cs_id  : 1;  /* bit[4-4] : Identifies the output color space on the link - used by the Clipper block to determine which way to clip:
                                                      0 = Output color space is RGB
                                                      1 = Output color space is YCbCr */
        unsigned int  reserved_0  : 1;  /* bit[5-5] : reserved */
        unsigned int  wide_bus    : 2;  /* bit[6-7] : Identifies the number of bits per input video channel:
                                                      0b00 = 8 bits per channel or 24-bit bus mode
                                                      0b01 = 10 bits per channel or 30-bit bus mode
                                                      0b10 = 12 bits per channel or 36-bit bus mode
                                                      0b11 = Reserved */
        unsigned int  reserved_1  : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_VID_ACEN_UNION;
#define SOC_HDMI_VID_ACEN_down_smpl_START    (0)
#define SOC_HDMI_VID_ACEN_down_smpl_END      (0)
#define SOC_HDMI_VID_ACEN_range_cmps_START   (1)
#define SOC_HDMI_VID_ACEN_range_cmps_END     (1)
#define SOC_HDMI_VID_ACEN_rgb_2_ycbcr_START  (2)
#define SOC_HDMI_VID_ACEN_rgb_2_ycbcr_END    (2)
#define SOC_HDMI_VID_ACEN_range_clip_START   (3)
#define SOC_HDMI_VID_ACEN_range_clip_END     (3)
#define SOC_HDMI_VID_ACEN_clip_cs_id_START   (4)
#define SOC_HDMI_VID_ACEN_clip_cs_id_END     (4)
#define SOC_HDMI_VID_ACEN_wide_bus_START     (6)
#define SOC_HDMI_VID_ACEN_wide_bus_END       (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_VID_MODE_UNION
 �ṹ˵��  : VID_MODE �Ĵ����ṹ���塣��ַƫ����:0x128����ֵ:0x00000000�����:32
 �Ĵ���˵��: Video Mode1 Register
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  syncex      : 1;  /* bit[0-0] : Embedded Sync Extraction:
                                                      0 = Disabled
                                                      1 = Enabled */
        unsigned int  demux       : 1;  /* bit[1-1] : One- to Two-Data-Channel Demux:
                                                      0 = Disabled
                                                      1 = Enabled */
        unsigned int  upsmp       : 1;  /* bit[2-2] : Upsampling 4:2:2 to 4:4:4:
                                                      0 = Disabled
                                                      1 = Enabled */
        unsigned int  csc         : 1;  /* bit[3-3] : YcbCr to RGB Color Space Conversion:
                                                      0 = Disabled
                                                      1 = Enabled */
        unsigned int  range       : 1;  /* bit[4-4] : Data Range 16-to-235 to 0-to-255 expansion:
                                                      0 = Disabled
                                                      1 = Enabled
                                                      When this bit is set, the HDMI Transmitter expands the range of pixel data values from 16-235 into the full 8-bit range of 0-255. This is
                                                      suitable for translating input YCbCr data into output RGB data in PC modes that use the complete range. The HDMI Specification allows
                                                      one non-CEA-861D mode in the first and only 18-byte descriptor of the Sink��s EDID 1.3. This is the native resolution of the Sink, which
                                                      may be RGB. It may be a standard PC resolution (XGA, SXGA, WXGA, and so on), or a specific native resolution. In these cases (or for a Sink with the Type B HDMI connector, which allows multiple PC modes), when the HDMI Transmitter receives YCbCr data, the data must be expanded to full range for outputting RGB full-range modes. */
        unsigned int  dither      : 1;  /* bit[5-5] : 0 = Dither disabled; the video output is truncated to the output width specified in DITHER_MODE [7:6]
                                                      1 = Dither enabled; the video output is dithered to the output width specified in DITHER_MODE [7:6] */
        unsigned int  dither_mode : 2;  /* bit[6-7] : Identifies the number of bits per output video channel:
                                                      0b00 = Dither to 8 bits
                                                      0b01 = Dither to 10 bits
                                                      0b10 = Dither to 12 bits
                                                      0b11 = Reserved */
        unsigned int  reserved    : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_VID_MODE_UNION;
#define SOC_HDMI_VID_MODE_syncex_START       (0)
#define SOC_HDMI_VID_MODE_syncex_END         (0)
#define SOC_HDMI_VID_MODE_demux_START        (1)
#define SOC_HDMI_VID_MODE_demux_END          (1)
#define SOC_HDMI_VID_MODE_upsmp_START        (2)
#define SOC_HDMI_VID_MODE_upsmp_END          (2)
#define SOC_HDMI_VID_MODE_csc_START          (3)
#define SOC_HDMI_VID_MODE_csc_END            (3)
#define SOC_HDMI_VID_MODE_range_START        (4)
#define SOC_HDMI_VID_MODE_range_END          (4)
#define SOC_HDMI_VID_MODE_dither_START       (5)
#define SOC_HDMI_VID_MODE_dither_END         (5)
#define SOC_HDMI_VID_MODE_dither_mode_START  (6)
#define SOC_HDMI_VID_MODE_dither_mode_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_VID_BLANK1_UNION
 �ṹ˵��  : VID_BLANK1 �Ĵ����ṹ���塣��ַƫ����:0x12C����ֵ:0x00000000�����:32
 �Ĵ���˵��: Video Blanking Register1
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  vid_blank1 : 8;  /* bit[0-7] : Defines the video blanking value for Channel 1 (Blue). */
        unsigned int  reserved   : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_VID_BLANK1_UNION;
#define SOC_HDMI_VID_BLANK1_vid_blank1_START  (0)
#define SOC_HDMI_VID_BLANK1_vid_blank1_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_VID_BLANK2_UNION
 �ṹ˵��  : VID_BLANK2 �Ĵ����ṹ���塣��ַƫ����:0x130����ֵ:0x00000000�����:32
 �Ĵ���˵��: Video Blanking Register2
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  vid_blank2 : 8;  /* bit[0-7] : Defines the video blanking value for Channel 2 (Green). */
        unsigned int  reserved   : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_VID_BLANK2_UNION;
#define SOC_HDMI_VID_BLANK2_vid_blank2_START  (0)
#define SOC_HDMI_VID_BLANK2_vid_blank2_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_VID_BLANK3_UNION
 �ṹ˵��  : VID_BLANK3 �Ĵ����ṹ���塣��ַƫ����:0x134����ֵ:0x00000000�����:32
 �Ĵ���˵��: Video Blanking Register3
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  vid_blank3 : 8;  /* bit[0-7] : Defines the video blanking value for Channel 3 (Red). */
        unsigned int  reserved   : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_VID_BLANK3_UNION;
#define SOC_HDMI_VID_BLANK3_vid_blank3_START  (0)
#define SOC_HDMI_VID_BLANK3_vid_blank3_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_DC_HEADER_UNION
 �ṹ˵��  : DC_HEADER �Ĵ����ṹ���塣��ַƫ����:0x138����ֵ:0x00000003�����:32
 �Ĵ���˵��: Deep Color Header Register
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  dc_header : 8;  /* bit[0-7] : This is the least siginificant byte of the deep color header that sends the TMDS dynamic phase once per frame. */
        unsigned int  reserved  : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_DC_HEADER_UNION;
#define SOC_HDMI_DC_HEADER_dc_header_START  (0)
#define SOC_HDMI_DC_HEADER_dc_header_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_VID_DITHER_UNION
 �ṹ˵��  : VID_DITHER �Ĵ����ṹ���塣��ַƫ����:0x13C����ֵ:0x00000000�����:32
 �Ĵ���˵��: Video Mode2 Register
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  drd      : 1;  /* bit[0-0] : Dither round: Add random number + 2b10 then truncate the LSB 2-bit.
                                                   0 = disable the function
                                                   1 = enable the function */
        unsigned int  d_rc_en  : 1;  /* bit[1-1] : Enable adding random number on Red channel data.
                                                   0 = disable the function
                                                   1 = enable the function */
        unsigned int  d_gc_en  : 1;  /* bit[2-2] : Enable adding random number on Green channel data.
                                                   0 = disable the function
                                                   1 = enable the function */
        unsigned int  d_bc_en  : 1;  /* bit[3-3] : Enable adding random number on Blue channel data.
                                                   0 = disable the function
                                                   1 = enable the function */
        unsigned int  _422_en  : 1;  /* bit[4-4] : Enable Mode 4:2:2 for Dithering and Clipping
                                                   0 = disable the function
                                                   1 = enable the function */
        unsigned int  up2      : 1;  /* bit[5-5] : Dither + 2'b10 option
                                                   0 = disable the function
                                                   1 = enable the function */
        unsigned int  m_d2     : 1;  /* bit[6-6] : Dither + round option
                                                   0 = disable the function
                                                   1 = enable the function */
        unsigned int  reserved_0: 1;  /* bit[7-7] : reserved */
        unsigned int  reserved_1: 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_VID_DITHER_UNION;
#define SOC_HDMI_VID_DITHER_drd_START       (0)
#define SOC_HDMI_VID_DITHER_drd_END         (0)
#define SOC_HDMI_VID_DITHER_d_rc_en_START   (1)
#define SOC_HDMI_VID_DITHER_d_rc_en_END     (1)
#define SOC_HDMI_VID_DITHER_d_gc_en_START   (2)
#define SOC_HDMI_VID_DITHER_d_gc_en_END     (2)
#define SOC_HDMI_VID_DITHER_d_bc_en_START   (3)
#define SOC_HDMI_VID_DITHER_d_bc_en_END     (3)
#define SOC_HDMI_VID_DITHER__422_en_START   (4)
#define SOC_HDMI_VID_DITHER__422_en_END     (4)
#define SOC_HDMI_VID_DITHER_up2_START       (5)
#define SOC_HDMI_VID_DITHER_up2_END         (5)
#define SOC_HDMI_VID_DITHER_m_d2_START      (6)
#define SOC_HDMI_VID_DITHER_m_d2_END        (6)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_RGB2XVYCC_CT_UNION
 �ṹ˵��  : RGB2XVYCC_CT �Ĵ����ṹ���塣��ַƫ����:0x140����ֵ:0x00000000�����:32
 �Ĵ���˵��: RGB_2_xvYCC control Register
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  xv_en    : 1;  /* bit[0-0] : xvYCC Enable
                                                   0 = disable the function
                                                   1 = enable the function */
        unsigned int  xv_fus   : 1;  /* bit[1-1] : xvYCC Fullscale mode
                                                   0 = disable the function
                                                   1 = enable the function */
        unsigned int  xv_co_ov : 1;  /* bit[2-2] : Override internal CSC coefficients with register 51 to XX values
                                                   0 = disable the function
                                                   1 = enable the function */
        unsigned int  reserved_0: 5;  /* bit[3-7] : reserved */
        unsigned int  reserved_1: 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_RGB2XVYCC_CT_UNION;
#define SOC_HDMI_RGB2XVYCC_CT_xv_en_START     (0)
#define SOC_HDMI_RGB2XVYCC_CT_xv_en_END       (0)
#define SOC_HDMI_RGB2XVYCC_CT_xv_fus_START    (1)
#define SOC_HDMI_RGB2XVYCC_CT_xv_fus_END      (1)
#define SOC_HDMI_RGB2XVYCC_CT_xv_co_ov_START  (2)
#define SOC_HDMI_RGB2XVYCC_CT_xv_co_ov_END    (2)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_R2Y_COEFF_LOW_UNION
 �ṹ˵��  : R2Y_COEFF_LOW �Ĵ����ṹ���塣��ַƫ����:0x144����ֵ:0x00000000�����:32
 �Ĵ���˵��: RGB_2_xvYCC Conversion R_2_Y Register1
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  r2ycoeff_l : 8;  /* bit[0-7] : RGB to xvYCC conversion
                                                     R to Y coefficient lower byte (override internal CSC value when program reg 0x50[2] = 1) */
        unsigned int  reserved   : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_R2Y_COEFF_LOW_UNION;
#define SOC_HDMI_R2Y_COEFF_LOW_r2ycoeff_l_START  (0)
#define SOC_HDMI_R2Y_COEFF_LOW_r2ycoeff_l_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_R2Y_COEFF_UP_UNION
 �ṹ˵��  : R2Y_COEFF_UP �Ĵ����ṹ���塣��ַƫ����:0x148����ֵ:0x00000000�����:32
 �Ĵ���˵��: RGB_2_xvYCC Conversion R_2_Y Register2
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  r2ycoeff_h : 8;  /* bit[0-7] : RGB to xvYCC conversion
                                                     R to Y coefficient upper byte (override internal CSC value when program 0x50[2] = 1) */
        unsigned int  reserved   : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_R2Y_COEFF_UP_UNION;
#define SOC_HDMI_R2Y_COEFF_UP_r2ycoeff_h_START  (0)
#define SOC_HDMI_R2Y_COEFF_UP_r2ycoeff_h_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_G2Y_COEFF_LOW_UNION
 �ṹ˵��  : G2Y_COEFF_LOW �Ĵ����ṹ���塣��ַƫ����:0x14C����ֵ:0x00000000�����:32
 �Ĵ���˵��: RGB_2_xvYCC Conversion G_2_Y Register1
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  g2ycoeff_l : 8;  /* bit[0-7] : RGB to xvYCC conversion
                                                     G to Y coefficient lower byte (override internal CSC value when program reg 0x50[2] = 1) */
        unsigned int  reserved   : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_G2Y_COEFF_LOW_UNION;
#define SOC_HDMI_G2Y_COEFF_LOW_g2ycoeff_l_START  (0)
#define SOC_HDMI_G2Y_COEFF_LOW_g2ycoeff_l_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_G2Y_COEFF_UP_UNION
 �ṹ˵��  : G2Y_COEFF_UP �Ĵ����ṹ���塣��ַƫ����:0x150����ֵ:0x00000000�����:32
 �Ĵ���˵��: RGB_2_xvYCC Conversion G_2_Y Register2
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  g2ycoeff_h : 8;  /* bit[0-7] : RGB to xvYCC conversion
                                                     G to Y coefficient upper byte (override internal CSC value when program 0x50[2] = 1) */
        unsigned int  reserved   : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_G2Y_COEFF_UP_UNION;
#define SOC_HDMI_G2Y_COEFF_UP_g2ycoeff_h_START  (0)
#define SOC_HDMI_G2Y_COEFF_UP_g2ycoeff_h_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_B2Y_COEFF_LOW_UNION
 �ṹ˵��  : B2Y_COEFF_LOW �Ĵ����ṹ���塣��ַƫ����:0x154����ֵ:0x00000000�����:32
 �Ĵ���˵��: RGB_2_xvYCC Conversion B_2_Y Register1
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  b2ycoeff_l : 8;  /* bit[0-7] : RGB to xvYCC conversion
                                                     B to Y coefficient lower byte (override internal CSC value when program reg 0x50[2] = 1) */
        unsigned int  reserved   : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_B2Y_COEFF_LOW_UNION;
#define SOC_HDMI_B2Y_COEFF_LOW_b2ycoeff_l_START  (0)
#define SOC_HDMI_B2Y_COEFF_LOW_b2ycoeff_l_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_B2Y_COEFF_UP_UNION
 �ṹ˵��  : B2Y_COEFF_UP �Ĵ����ṹ���塣��ַƫ����:0x158����ֵ:0x00000000�����:32
 �Ĵ���˵��: RGB_2_xvYCC Conversion B_2_Y Register2
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  b2ycoeff_h : 8;  /* bit[0-7] : RGB to xvYCC conversion
                                                     B to Y coefficient upper byte (override internal CSC value when program 0x50[2] = 1) */
        unsigned int  reserved   : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_B2Y_COEFF_UP_UNION;
#define SOC_HDMI_B2Y_COEFF_UP_b2ycoeff_h_START  (0)
#define SOC_HDMI_B2Y_COEFF_UP_b2ycoeff_h_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_R2CB_COEFF_LOW_UNION
 �ṹ˵��  : R2CB_COEFF_LOW �Ĵ����ṹ���塣��ַƫ����:0x15C����ֵ:0x00000000�����:32
 �Ĵ���˵��: RGB_2_xvYCC Conversion R_2_Cb Register1
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  r2cbcoeff_l : 8;  /* bit[0-7] : RGB to xvYCC conversion
                                                      R to Cb coefficient lower byte (override internal CSC value when program reg 0x50[2] = 1) */
        unsigned int  reserved    : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_R2CB_COEFF_LOW_UNION;
#define SOC_HDMI_R2CB_COEFF_LOW_r2cbcoeff_l_START  (0)
#define SOC_HDMI_R2CB_COEFF_LOW_r2cbcoeff_l_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_R2CB_COEFF_UP_UNION
 �ṹ˵��  : R2CB_COEFF_UP �Ĵ����ṹ���塣��ַƫ����:0x160����ֵ:0x00000000�����:32
 �Ĵ���˵��: RGB_2_xvYCC Conversion R_2_Cb Register2
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  r2cbcoeff_h : 8;  /* bit[0-7] : RGB to xvYCC conversion
                                                      R to Cb coefficient upper byte (override internal CSC value when program 0x50[2] = 1) */
        unsigned int  reserved    : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_R2CB_COEFF_UP_UNION;
#define SOC_HDMI_R2CB_COEFF_UP_r2cbcoeff_h_START  (0)
#define SOC_HDMI_R2CB_COEFF_UP_r2cbcoeff_h_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_G2CB_COEFF_LOW_UNION
 �ṹ˵��  : G2CB_COEFF_LOW �Ĵ����ṹ���塣��ַƫ����:0x164����ֵ:0x00000000�����:32
 �Ĵ���˵��: RGB_2_xvYCC Conversion G_2_Cb Register1
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  g2cbcoeff_l : 8;  /* bit[0-7] : RGB to xvYCC conversion
                                                      G to Cb coefficient lower byte (override internal CSC value when program reg 0x50[2] = 1) */
        unsigned int  reserved    : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_G2CB_COEFF_LOW_UNION;
#define SOC_HDMI_G2CB_COEFF_LOW_g2cbcoeff_l_START  (0)
#define SOC_HDMI_G2CB_COEFF_LOW_g2cbcoeff_l_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_G2CB_COEFF_UP_UNION
 �ṹ˵��  : G2CB_COEFF_UP �Ĵ����ṹ���塣��ַƫ����:0x168����ֵ:0x00000000�����:32
 �Ĵ���˵��: RGB_2_xvYCC Conversion G_2_Cb Register2
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  g2cbcoeff_h : 8;  /* bit[0-7] : RGB to xvYCC conversion
                                                      G to Cb coefficient upper byte (override internal CSC value when program 0x50[2] = 1) */
        unsigned int  reserved    : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_G2CB_COEFF_UP_UNION;
#define SOC_HDMI_G2CB_COEFF_UP_g2cbcoeff_h_START  (0)
#define SOC_HDMI_G2CB_COEFF_UP_g2cbcoeff_h_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_B2CB_COEFF_LOW_UNION
 �ṹ˵��  : B2CB_COEFF_LOW �Ĵ����ṹ���塣��ַƫ����:0x16C����ֵ:0x00000000�����:32
 �Ĵ���˵��: RGB_2_xvYCC Conversion B_2_Cb Register1
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  b2cbcoeff_l : 8;  /* bit[0-7] : RGB to xvYCC conversion
                                                      B to Cb coefficient lower byte (override internal CSC value when program reg 0x50[2] = 1) */
        unsigned int  reserved    : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_B2CB_COEFF_LOW_UNION;
#define SOC_HDMI_B2CB_COEFF_LOW_b2cbcoeff_l_START  (0)
#define SOC_HDMI_B2CB_COEFF_LOW_b2cbcoeff_l_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_B2CB_COEFF_UP_UNION
 �ṹ˵��  : B2CB_COEFF_UP �Ĵ����ṹ���塣��ַƫ����:0x170����ֵ:0x00000000�����:32
 �Ĵ���˵��: RGB_2_xvYCC Conversion B_2_Cb Register2
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  b2cbcoeff_h : 8;  /* bit[0-7] : RGB to xvYCC conversion
                                                      B to Cb coefficient upper byte (override internal CSC value when program 0x50[2] = 1) */
        unsigned int  reserved    : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_B2CB_COEFF_UP_UNION;
#define SOC_HDMI_B2CB_COEFF_UP_b2cbcoeff_h_START  (0)
#define SOC_HDMI_B2CB_COEFF_UP_b2cbcoeff_h_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_R2CR_COEFF_LOW_UNION
 �ṹ˵��  : R2CR_COEFF_LOW �Ĵ����ṹ���塣��ַƫ����:0x174����ֵ:0x00000000�����:32
 �Ĵ���˵��: RGB_2_xvYCC Conversion R_2_Cr Register1
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  r2crcoeff_l : 8;  /* bit[0-7] : RGB to xvYCC conversion
                                                      R to Cr coefficient lower byte (override internal CSC value when program reg 0x50[2] = 1) */
        unsigned int  reserved    : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_R2CR_COEFF_LOW_UNION;
#define SOC_HDMI_R2CR_COEFF_LOW_r2crcoeff_l_START  (0)
#define SOC_HDMI_R2CR_COEFF_LOW_r2crcoeff_l_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_R2CR_COEFF_UP_UNION
 �ṹ˵��  : R2CR_COEFF_UP �Ĵ����ṹ���塣��ַƫ����:0x178����ֵ:0x00000000�����:32
 �Ĵ���˵��: RGB_2_xvYCC Conversion R_2_Cr Register2
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  r2crcoeff_h : 8;  /* bit[0-7] : RGB to xvYCC conversion
                                                      R to Cr coefficient upper byte (override internal CSC value when program 0x50[2] = 1) */
        unsigned int  reserved    : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_R2CR_COEFF_UP_UNION;
#define SOC_HDMI_R2CR_COEFF_UP_r2crcoeff_h_START  (0)
#define SOC_HDMI_R2CR_COEFF_UP_r2crcoeff_h_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_G2CR_COEFF_LOW_UNION
 �ṹ˵��  : G2CR_COEFF_LOW �Ĵ����ṹ���塣��ַƫ����:0x17C����ֵ:0x00000000�����:32
 �Ĵ���˵��: RGB_2_xvYCC Conversion G_2_Cr Register1
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  g2crcoeff_l : 8;  /* bit[0-7] : RGB to xvYCC conversion
                                                      G to Cr coefficient lower byte (override internal CSC value when program reg 0x50[2] = 1) */
        unsigned int  reserved    : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_G2CR_COEFF_LOW_UNION;
#define SOC_HDMI_G2CR_COEFF_LOW_g2crcoeff_l_START  (0)
#define SOC_HDMI_G2CR_COEFF_LOW_g2crcoeff_l_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_G2CR_COEFF_UP_UNION
 �ṹ˵��  : G2CR_COEFF_UP �Ĵ����ṹ���塣��ַƫ����:0x180����ֵ:0x00000000�����:32
 �Ĵ���˵��: RGB_2_xvYCC Conversion G_2_Cr Register2
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  g2crcoeff_h : 8;  /* bit[0-7] : RGB to xvYCC conversion
                                                      G to Cr coefficient upper byte (override internal CSC value when program 0x50[2] = 1) */
        unsigned int  reserved    : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_G2CR_COEFF_UP_UNION;
#define SOC_HDMI_G2CR_COEFF_UP_g2crcoeff_h_START  (0)
#define SOC_HDMI_G2CR_COEFF_UP_g2crcoeff_h_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_B2CR_COEFF_LOW_UNION
 �ṹ˵��  : B2CR_COEFF_LOW �Ĵ����ṹ���塣��ַƫ����:0x184����ֵ:0x00000000�����:32
 �Ĵ���˵��: RGB_2_xvYCC Conversion B_2_Cr Register1
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  b2crcoeff_l : 8;  /* bit[0-7] : RGB to xvYCC conversion
                                                      B to Cr coefficient lower byte (override internal CSC value when program reg 0x50[2] = 1) */
        unsigned int  reserved    : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_B2CR_COEFF_LOW_UNION;
#define SOC_HDMI_B2CR_COEFF_LOW_b2crcoeff_l_START  (0)
#define SOC_HDMI_B2CR_COEFF_LOW_b2crcoeff_l_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_B2CR_COEFF_UP_UNION
 �ṹ˵��  : B2CR_COEFF_UP �Ĵ����ṹ���塣��ַƫ����:0x188����ֵ:0x00000000�����:32
 �Ĵ���˵��: RGB_2_xvYCC Conversion B_2_Cr Register2
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  b2crcoeff_h : 8;  /* bit[0-7] : RGB to xvYCC conversion
                                                      B to Cr coefficient upper byte (override internal CSC value when program 0x50[2] = 1) */
        unsigned int  reserved    : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_B2CR_COEFF_UP_UNION;
#define SOC_HDMI_B2CR_COEFF_UP_b2crcoeff_h_START  (0)
#define SOC_HDMI_B2CR_COEFF_UP_b2crcoeff_h_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_RGB_OFFSET_LOW_UNION
 �ṹ˵��  : RGB_OFFSET_LOW �Ĵ����ṹ���塣��ַƫ����:0x18C����ֵ:0x00000000�����:32
 �Ĵ���˵��: RGB_2_xvYCC RGB Input Offset Register1
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  rgb_offs_l : 8;  /* bit[0-7] : Input RGB offset value lower byte (override internal CSC value when program reg 0x50[2] = 1) */
        unsigned int  reserved   : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_RGB_OFFSET_LOW_UNION;
#define SOC_HDMI_RGB_OFFSET_LOW_rgb_offs_l_START  (0)
#define SOC_HDMI_RGB_OFFSET_LOW_rgb_offs_l_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_RGB_OFFSET_UP_UNION
 �ṹ˵��  : RGB_OFFSET_UP �Ĵ����ṹ���塣��ַƫ����:0x190����ֵ:0x00000000�����:32
 �Ĵ���˵��: RGB_2_xvYCC RGB Input Offset Register2
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  rgb_offs_h : 8;  /* bit[0-7] : Input RGB offset value upper byte (override internal CSC value when program reg 0x50[2] = 1) */
        unsigned int  reserved   : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_RGB_OFFSET_UP_UNION;
#define SOC_HDMI_RGB_OFFSET_UP_rgb_offs_h_START  (0)
#define SOC_HDMI_RGB_OFFSET_UP_rgb_offs_h_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_Y_OFFSET_LOW_UNION
 �ṹ˵��  : Y_OFFSET_LOW �Ĵ����ṹ���塣��ַƫ����:0x194����ֵ:0x00000000�����:32
 �Ĵ���˵��: RGB_2_xvYCC Conversion Y Output Offset Register1
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  y_offs_l : 8;  /* bit[0-7] : [6:0]
                                                   Output Y offset value lower 8 bits (override internal CSC value when program reg 0x50[2] = 1) */
        unsigned int  reserved : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_Y_OFFSET_LOW_UNION;
#define SOC_HDMI_Y_OFFSET_LOW_y_offs_l_START  (0)
#define SOC_HDMI_Y_OFFSET_LOW_y_offs_l_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_Y_OFFSET_UP_UNION
 �ṹ˵��  : Y_OFFSET_UP �Ĵ����ṹ���塣��ַƫ����:0x198����ֵ:0x00000000�����:32
 �Ĵ���˵��: RGB_2_xvYCC Conversion Y Output Offset Register2
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  y_offs_h : 8;  /* bit[0-7] : [13:8]
                                                   Output Y offset value upper 8 bits (override internal CSC value when program reg 0x50[2] = 1) */
        unsigned int  reserved : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_Y_OFFSET_UP_UNION;
#define SOC_HDMI_Y_OFFSET_UP_y_offs_h_START  (0)
#define SOC_HDMI_Y_OFFSET_UP_y_offs_h_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_CBCR_OFFSET_LOW_UNION
 �ṹ˵��  : CBCR_OFFSET_LOW �Ĵ����ṹ���塣��ַƫ����:0x19C����ֵ:0x00000000�����:32
 �Ĵ���˵��: RGB_2_xvYCC Conversion CbCr Output Offset Register1
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cbcr_offs_l : 8;  /* bit[0-7] : Output CbCr offset value lower 8 bits (override
                                                      internal CSC value when program reg 0x50[2] = 1) */
        unsigned int  reserved    : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_CBCR_OFFSET_LOW_UNION;
#define SOC_HDMI_CBCR_OFFSET_LOW_cbcr_offs_l_START  (0)
#define SOC_HDMI_CBCR_OFFSET_LOW_cbcr_offs_l_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_CBCR_OFFSET_UP_UNION
 �ṹ˵��  : CBCR_OFFSET_UP �Ĵ����ṹ���塣��ַƫ����:0x1A0����ֵ:0x00000000�����:32
 �Ĵ���˵��: RGB_2_xvYCC Conversion CbCr Output Offset Register2
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cbcr_offs_h : 8;  /* bit[0-7] : Output CbCr offset value upper 8 bits (override
                                                      internal CSC value when program 0x50[2] = 1) */
        unsigned int  reserved    : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_CBCR_OFFSET_UP_UNION;
#define SOC_HDMI_CBCR_OFFSET_UP_cbcr_offs_h_START  (0)
#define SOC_HDMI_CBCR_OFFSET_UP_cbcr_offs_h_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_INTR_STATE_UNION
 �ṹ˵��  : INTR_STATE �Ĵ����ṹ���塣��ַƫ����:0x1C0����ֵ:0x00000000�����:32
 �Ĵ���˵��: Interrupt State Register
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  intr     : 1;  /* bit[0-0] : Interrupt State. When an interrupt is asserted, this bit is set to 1.
                                                   The polarity of the INT output signal is set using this bit and the POLARITY# bit in the INT_CTRL register (0x72:0x79). Only INTR1,
                                                   INTR2, INTR3, and INTR4 bits with matching set bits in INT_UNMASK can contribute to setting the INTR bit. */
        unsigned int  reserved_0: 7;  /* bit[1-7] : reserved */
        unsigned int  reserved_1: 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_INTR_STATE_UNION;
#define SOC_HDMI_INTR_STATE_intr_START      (0)
#define SOC_HDMI_INTR_STATE_intr_END        (0)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_INTR1_UNION
 �ṹ˵��  : INTR1 �Ĵ����ṹ���塣��ַƫ����:0x1C4����ֵ:0x00000000�����:32
 �Ĵ���˵��: Interrupt Source Register1
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  under_run    : 1;  /* bit[0-0] : Audio FIFO Underflow.
                                                       Similar to OVER_RUN. This interrupt occurs when the audio FIFO empties. */
        unsigned int  over_run     : 1;  /* bit[1-1] : Audio FIFO Overflow.
                                                       This interrupt occurs if the audio FIFO overflows when more samples are written into it than are drawn out across the HDMI link. Such a
                                                       condition can occur from a transient change in the Fs or pixel clock rate. */
        unsigned int  ri_128       : 1;  /* bit[2-2] : Input counted past frame count threshold set in RI_128_COMP register.
                                                       This interrupt occurs when the count written to register 0x72:0x24 is matched by the VSYNC (frame) counter in the HDMI Transmitter. It
                                                       should trigger the firmware to perform a link integrity check. Such a match occurs every 128 frames. */
        unsigned int  bip_hase_err : 1;  /* bit[3-3] : Input S/PDIF stream has bi-phase error. This can occur when there is noise or an Fs rate change on the S/PDIF input. */
        unsigned int  drop_sample  : 1;  /* bit[4-4] : New preamble forced to drop sample (S/PDIF input only).
                                                       If the HDMI Transmitter detects an 8-bit preamble in the S/PDIF input stream before the subframe has been captured, this interrupt is set. A S/PDIF input that stops signaling or a flat line condition can create such a premature preamble. */
        unsigned int  rsen         : 1;  /* bit[5-5] : Receiver Sense Interrupt asserted if RSEN has changed.
                                                       This interrupt is set whenever VCC is applied to, or removed from, the attached HDMI Receiver chip. A Receiver with multiple input ports can also disconnect the TMDS termination to the unused port, which triggers this RSEN interrupt. */
        unsigned int  hpd          : 1;  /* bit[6-6] : Monitor Detect Interrupt - asserted if Hot Plug Detect has changed state.
                                                       The HDMI Transmitter signals a change in the connectivity to a Sink, either unplug or plug. HDMI specifies that Hot Plug be active only
                                                       when the Sink��s EDID is ready to be read and that Hot Plug be toggled any time there is a change in connectivity downstream of an attached Repeater. */
        unsigned int  soft         : 1;  /* bit[7-7] : Software Induced Interrupt - allows the firmware to generate an interrupt directly. */
        unsigned int  reserved     : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_INTR1_UNION;
#define SOC_HDMI_INTR1_under_run_START     (0)
#define SOC_HDMI_INTR1_under_run_END       (0)
#define SOC_HDMI_INTR1_over_run_START      (1)
#define SOC_HDMI_INTR1_over_run_END        (1)
#define SOC_HDMI_INTR1_ri_128_START        (2)
#define SOC_HDMI_INTR1_ri_128_END          (2)
#define SOC_HDMI_INTR1_bip_hase_err_START  (3)
#define SOC_HDMI_INTR1_bip_hase_err_END    (3)
#define SOC_HDMI_INTR1_drop_sample_START   (4)
#define SOC_HDMI_INTR1_drop_sample_END     (4)
#define SOC_HDMI_INTR1_rsen_START          (5)
#define SOC_HDMI_INTR1_rsen_END            (5)
#define SOC_HDMI_INTR1_hpd_START           (6)
#define SOC_HDMI_INTR1_hpd_END             (6)
#define SOC_HDMI_INTR1_soft_START          (7)
#define SOC_HDMI_INTR1_soft_END            (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_INTR2_UNION
 �ṹ˵��  : INTR2 �Ĵ����ṹ���塣��ַƫ����:0x1C8����ֵ:0x00000000�����:32
 �Ĵ���˵��: Interrupt Source Register2
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  vsync_rec : 1;  /* bit[0-0] : Asserted when VSYNC active edge is recognized. It is useful for triggering firmware actions that occur during vertical blanking. */
        unsigned int  tclk_stbl : 1;  /* bit[1-1] : TCLK_STABLE (register 0x72:0x09[0]) changes state.
                                                    Whenever IDCK changes, there is a temporary instability in the internal clocking. This interrupt is set when the internal clocking has
                                                    stabilized. */
        unsigned int  acr_ovr   : 1;  /* bit[2-2] : ACR Packet Overwrite.
                                                    This interrupt occurs if the HDMI Transmitter puts a NCTS packet into the queue before the previous NCTS packet has been sent. This
                                                    can happen if very long active data times do not allow for sufficient NCTS packet bandwidth. For all CEA-861D modes, no ACR_OVR interrupt should occur. */
        unsigned int  cts_chg   : 1;  /* bit[3-3] : Change in ACR CTS Value.
                                                    This interrupt occurs when the change is of an unexpected magnitude. Such an interrupt should be expected when changing Fs or pixel clock frequency. */
        unsigned int  pream_err : 1;  /* bit[4-4] : This condition is the opposite of the condition that causes
                                                    DROP_SAMPLE (0x72:0x71[4]). This interrupt occurs if a preamble is expected but not found when decoding the S/PDIF stream. */
        unsigned int  enc_dis   : 1;  /* bit[5-5] : The ENC_EN bit (0x72.0x0F[0]) changed from 1 to 0.
                                                    This interrupt occurs if encryption is turned off. */
        unsigned int  spdif_par : 1;  /* bit[6-6] : S/PDIF Parity Error.
                                                    The S/PDIF stream includes a parity (P) bit at the end of each subframe.
                                                    An interrupt occurs if the calculated parity does not match the state of this bit. */
        unsigned int  bcap_done : 1;  /* bit[7-7] : If set, this interrupt detected that the FIFORDY bit (0x74:0x40[5]) is set to 1. */
        unsigned int  reserved  : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_INTR2_UNION;
#define SOC_HDMI_INTR2_vsync_rec_START  (0)
#define SOC_HDMI_INTR2_vsync_rec_END    (0)
#define SOC_HDMI_INTR2_tclk_stbl_START  (1)
#define SOC_HDMI_INTR2_tclk_stbl_END    (1)
#define SOC_HDMI_INTR2_acr_ovr_START    (2)
#define SOC_HDMI_INTR2_acr_ovr_END      (2)
#define SOC_HDMI_INTR2_cts_chg_START    (3)
#define SOC_HDMI_INTR2_cts_chg_END      (3)
#define SOC_HDMI_INTR2_pream_err_START  (4)
#define SOC_HDMI_INTR2_pream_err_END    (4)
#define SOC_HDMI_INTR2_enc_dis_START    (5)
#define SOC_HDMI_INTR2_enc_dis_END      (5)
#define SOC_HDMI_INTR2_spdif_par_START  (6)
#define SOC_HDMI_INTR2_spdif_par_END    (6)
#define SOC_HDMI_INTR2_bcap_done_START  (7)
#define SOC_HDMI_INTR2_bcap_done_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_INTR3_UNION
 �ṹ˵��  : INTR3 �Ĵ����ṹ���塣��ַƫ����:0x1CC����ֵ:0x00000000�����:32
 �Ĵ���˵��: Interrupt Source Register3
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ddc_fifo_empty : 1;  /* bit[0-0] : DDC FIFO is empty. */
        unsigned int  ddc_fifo_full  : 1;  /* bit[1-1] : DDC FIFO is full. */
        unsigned int  ddc_fifo_half  : 1;  /* bit[2-2] : DDC FIFO is half full. */
        unsigned int  ddc_cmd_done   : 1;  /* bit[3-3] : DDC command is complete. */
        unsigned int  ri_err_0       : 1;  /* bit[4-4] : Ri and Ri�� do not match during frame #127 (ICNT �C1). */
        unsigned int  ri_err_1       : 1;  /* bit[5-5] : Ri and Ri�� do not match during frame #0 (ICNT). */
        unsigned int  ri_err_2       : 1;  /* bit[6-6] : Ri did not change between frame #127 and #0. */
        unsigned int  ri_err_3       : 1;  /* bit[7-7] : Ri not read within one frame. */
        unsigned int  reserved       : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_INTR3_UNION;
#define SOC_HDMI_INTR3_ddc_fifo_empty_START  (0)
#define SOC_HDMI_INTR3_ddc_fifo_empty_END    (0)
#define SOC_HDMI_INTR3_ddc_fifo_full_START   (1)
#define SOC_HDMI_INTR3_ddc_fifo_full_END     (1)
#define SOC_HDMI_INTR3_ddc_fifo_half_START   (2)
#define SOC_HDMI_INTR3_ddc_fifo_half_END     (2)
#define SOC_HDMI_INTR3_ddc_cmd_done_START    (3)
#define SOC_HDMI_INTR3_ddc_cmd_done_END      (3)
#define SOC_HDMI_INTR3_ri_err_0_START        (4)
#define SOC_HDMI_INTR3_ri_err_0_END          (4)
#define SOC_HDMI_INTR3_ri_err_1_START        (5)
#define SOC_HDMI_INTR3_ri_err_1_END          (5)
#define SOC_HDMI_INTR3_ri_err_2_START        (6)
#define SOC_HDMI_INTR3_ri_err_2_END          (6)
#define SOC_HDMI_INTR3_ri_err_3_START        (7)
#define SOC_HDMI_INTR3_ri_err_3_END          (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_INTR4_UNION
 �ṹ˵��  : INTR4 �Ĵ����ṹ���塣��ַƫ����:0x1D0����ֵ:0x00000000�����:32
 �Ĵ���˵��: Interrupt Source Register4
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  dsd_invalid     : 1;  /* bit[0-0] : DSD stream got invalid sequence: more then 24 bits of the same value. Asserted if set to 1. Write 1 to clear */
        unsigned int  reg_intr4_stat1 : 1;  /* bit[1-1] :  */
        unsigned int  reg_intr4_stat2 : 1;  /* bit[2-2] :  */
        unsigned int  reg_intr4_stat3 : 1;  /* bit[3-3] : CEC interrupt */
        unsigned int  reserved_0      : 4;  /* bit[4-7] : reserved */
        unsigned int  reserved_1      : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_INTR4_UNION;
#define SOC_HDMI_INTR4_dsd_invalid_START      (0)
#define SOC_HDMI_INTR4_dsd_invalid_END        (0)
#define SOC_HDMI_INTR4_reg_intr4_stat1_START  (1)
#define SOC_HDMI_INTR4_reg_intr4_stat1_END    (1)
#define SOC_HDMI_INTR4_reg_intr4_stat2_START  (2)
#define SOC_HDMI_INTR4_reg_intr4_stat2_END    (2)
#define SOC_HDMI_INTR4_reg_intr4_stat3_START  (3)
#define SOC_HDMI_INTR4_reg_intr4_stat3_END    (3)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_INT_UNMASK1_UNION
 �ṹ˵��  : INT_UNMASK1 �Ĵ����ṹ���塣��ַƫ����:0x1D4����ֵ:0x00000000�����:32
 �Ĵ���˵��: Interrupt Unmask Register1
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  int_unmask1 : 8;  /* bit[0-7] : Each bit corresponds to one bit in INTR1, INTR2, INTR3, or INTR4:
                                                      0 = Disable corresponding interrupt from INT output
                                                      1 = Enable corresponding interrupt to INT output */
        unsigned int  reserved    : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_INT_UNMASK1_UNION;
#define SOC_HDMI_INT_UNMASK1_int_unmask1_START  (0)
#define SOC_HDMI_INT_UNMASK1_int_unmask1_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_INT_UNMASK2_UNION
 �ṹ˵��  : INT_UNMASK2 �Ĵ����ṹ���塣��ַƫ����:0x1D8����ֵ:0x00000000�����:32
 �Ĵ���˵��: Interrupt Unmask Register2
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  int_unmask2 : 8;  /* bit[0-7] : Each bit corresponds to one bit in INTR1, INTR2, INTR3, or INTR4:
                                                      0 = Disable corresponding interrupt from INT output
                                                      1 = Enable corresponding interrupt to INT output */
        unsigned int  reserved    : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_INT_UNMASK2_UNION;
#define SOC_HDMI_INT_UNMASK2_int_unmask2_START  (0)
#define SOC_HDMI_INT_UNMASK2_int_unmask2_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_INT_UNMASK3_UNION
 �ṹ˵��  : INT_UNMASK3 �Ĵ����ṹ���塣��ַƫ����:0x1DC����ֵ:0x00000000�����:32
 �Ĵ���˵��: Interrupt Unmask Register3
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  int_unmask3 : 8;  /* bit[0-7] : Each bit corresponds to one bit in INTR1, INTR2, INTR3, or INTR4:
                                                      0 = Disable corresponding interrupt from INT output
                                                      1 = Enable corresponding interrupt to INT output */
        unsigned int  reserved    : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_INT_UNMASK3_UNION;
#define SOC_HDMI_INT_UNMASK3_int_unmask3_START  (0)
#define SOC_HDMI_INT_UNMASK3_int_unmask3_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_INT_UNMASK4_UNION
 �ṹ˵��  : INT_UNMASK4 �Ĵ����ṹ���塣��ַƫ����:0x1E0����ֵ:0x00000000�����:32
 �Ĵ���˵��: Interrupt Unmask Register4
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  int_unmask4 : 4;  /* bit[0-3] : Each bit corresponds to one bit in INTR1, INTR2, INTR3, or INTR4:
                                                      0 = Disable corresponding interrupt from INT output
                                                      1 = Enable corresponding interrupt to INT output */
        unsigned int  reserved_0  : 4;  /* bit[4-7] : reserved */
        unsigned int  reserved_1  : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_INT_UNMASK4_UNION;
#define SOC_HDMI_INT_UNMASK4_int_unmask4_START  (0)
#define SOC_HDMI_INT_UNMASK4_int_unmask4_END    (3)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_INT_CTRL_UNION
 �ṹ˵��  : INT_CTRL �Ĵ����ṹ���塣��ַƫ����:0x1E4����ֵ:0x00000002�����:32
 �Ĵ���˵��: Interrupt Control Register
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved_0 : 1;  /* bit[0-0] : reserved */
        unsigned int  polarity   : 1;  /* bit[1-1] : INT pin assertion level:
                                                     0 = Assert HIGH
                                                     1 = Assert LOW */
        unsigned int  open_drain : 1;  /* bit[2-2] : INT pin output type:
                                                     0 = Push/Pull
                                                     1 = Open Drain pin */
        unsigned int  soft_intr  : 1;  /* bit[3-3] : Set software interrupt:
                                                     0 = Clear interrupt
                                                     1 = Set interrupt */
        unsigned int  reserved_1 : 4;  /* bit[4-7] : reserved */
        unsigned int  reserved_2 : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_INT_CTRL_UNION;
#define SOC_HDMI_INT_CTRL_polarity_START    (1)
#define SOC_HDMI_INT_CTRL_polarity_END      (1)
#define SOC_HDMI_INT_CTRL_open_drain_START  (2)
#define SOC_HDMI_INT_CTRL_open_drain_END    (2)
#define SOC_HDMI_INT_CTRL_soft_intr_START   (3)
#define SOC_HDMI_INT_CTRL_soft_intr_END     (3)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_TMDS_CCTRL_UNION
 �ṹ˵��  : TMDS_CCTRL �Ĵ����ṹ���塣��ַƫ����:0x200����ֵ:0x00000001�����:32
 �Ĵ���˵��: TMDS Control Registers
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  clkdetect_en : 1;  /* bit[0-0] : Clock detector enable
                                                       0 �C loss of pixel clock does not shut down the PHY anymore */
        unsigned int  half_clk_en  : 1;  /* bit[1-1] : half clock enable (needed only if clkmult_ctl[1:0]=2'b00)
                                                       0: no further clock division (default)
                                                       1: clock division of 2 for audio clock */
        unsigned int  reserved_0   : 3;  /* bit[2-4] : reserved */
        unsigned int  fapostcount  : 1;  /* bit[5-5] : Filter PLL post counter setting for the audio clock:
                                                       0 = Divided by 1
                                                       1 = Divided by 2
                                                       Note: Set this bit to 0b001 whenever the voltage control oscillator is higher than 165MHz. */
        unsigned int  reserved_1   : 1;  /* bit[6-6] : reserved */
        unsigned int  slew_ctrl    : 1;  /* bit[7-7] :  */
        unsigned int  reserved_2   : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_TMDS_CCTRL_UNION;
#define SOC_HDMI_TMDS_CCTRL_clkdetect_en_START  (0)
#define SOC_HDMI_TMDS_CCTRL_clkdetect_en_END    (0)
#define SOC_HDMI_TMDS_CCTRL_half_clk_en_START   (1)
#define SOC_HDMI_TMDS_CCTRL_half_clk_en_END     (1)
#define SOC_HDMI_TMDS_CCTRL_fapostcount_START   (5)
#define SOC_HDMI_TMDS_CCTRL_fapostcount_END     (5)
#define SOC_HDMI_TMDS_CCTRL_slew_ctrl_START     (7)
#define SOC_HDMI_TMDS_CCTRL_slew_ctrl_END       (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_TMDS_CTRL_UNION
 �ṹ˵��  : TMDS_CTRL �Ĵ����ṹ���塣��ַƫ����:0x208����ֵ:0x00000024�����:32
 �Ĵ���˵��: TMDS Control Register
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sterm    : 1;  /* bit[0-0] : Internal source termination:
                                                   0 = Disable
                                                   1 = Enable
                                                   Note: Silicon Image recommends that you enable source termination. */
        unsigned int  bgr_test : 1;  /* bit[1-1] : 1: BGR output is connected to ext_swing pin */
        unsigned int  sw_ctl   : 2;  /* bit[2-3] : Output Swing Control
                                                   11: -18%
                                                   10: -9%
                                                   01: 0%
                                                   00: +9% */
        unsigned int  reserved_0: 1;  /* bit[4-4] : reserved */
        unsigned int  tclk_sel : 2;  /* bit[5-6] : Selects FPLL multiple of the IDCK:
                                                   0b00 = FPLL is 0.5*IDCK
                                                   0b01 = FPLL is 1.0*IDCK
                                                   0b10 = FPLL is 2.0*IDCK
                                                   0b11 = FPLL is 4.0*IDCK */
        unsigned int  reserved_1: 1;  /* bit[7-7] : reserved */
        unsigned int  reserved_2: 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_TMDS_CTRL_UNION;
#define SOC_HDMI_TMDS_CTRL_sterm_START     (0)
#define SOC_HDMI_TMDS_CTRL_sterm_END       (0)
#define SOC_HDMI_TMDS_CTRL_bgr_test_START  (1)
#define SOC_HDMI_TMDS_CTRL_bgr_test_END    (1)
#define SOC_HDMI_TMDS_CTRL_sw_ctl_START    (2)
#define SOC_HDMI_TMDS_CTRL_sw_ctl_END      (3)
#define SOC_HDMI_TMDS_CTRL_tclk_sel_START  (5)
#define SOC_HDMI_TMDS_CTRL_tclk_sel_END    (6)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_TMDS_CTRL2_UNION
 �ṹ˵��  : TMDS_CTRL2 �Ĵ����ṹ���塣��ַƫ����:0x20C����ֵ:0x0000001B�����:32
 �Ĵ���˵��: TMDS Control Register #2
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ffr_count   : 3;  /* bit[0-2] : Sets the divider ratio for the PLL filter front counter:
                                                      0b000 = Divide by 1
                                                      0b001 = Divide by 2
                                                      0b011 = Divide by 4
                                                      0b111 = Divide by 8 */
        unsigned int  ffb_count   : 3;  /* bit[3-5] : Sets the divider ratio for the PLL filter feedback counter:
                                                      0b000 = Divide by 1
                                                      0b001 = Divide by 2
                                                      0b010 = Divide by 3
                                                      0b011 = Divide by 4
                                                      0b101 = Divide by 6
                                                      0b110 = Divide by 7 */
        unsigned int  tpost_count : 2;  /* bit[6-7] : Sets the divider ratio for the HDMI Transmitter PLL post counter:
                                                      0b00 = Divide by 1
                                                      0b01 = Divide by 2
                                                      0b10 = Divide by 4
                                                      0b11 = Invalid */
        unsigned int  reserved    : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_TMDS_CTRL2_UNION;
#define SOC_HDMI_TMDS_CTRL2_ffr_count_START    (0)
#define SOC_HDMI_TMDS_CTRL2_ffr_count_END      (2)
#define SOC_HDMI_TMDS_CTRL2_ffb_count_START    (3)
#define SOC_HDMI_TMDS_CTRL2_ffb_count_END      (5)
#define SOC_HDMI_TMDS_CTRL2_tpost_count_START  (6)
#define SOC_HDMI_TMDS_CTRL2_tpost_count_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_TMDS_CTRL3_UNION
 �ṹ˵��  : TMDS_CTRL3 �Ĵ����ṹ���塣��ַƫ����:0x210����ֵ:0x00000060�����:32
 �Ĵ���˵��: TMDS Control Register #3
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  fpost_count : 3;  /* bit[0-2] : Sets the divider ratio for the PLL filter post counter:
                                                      0b000 = Divide by 1
                                                      0b001 = Divide by 2
                                                      0b011 = Divide by 4
                                                      0b111 = Divide by 8 */
        unsigned int  bgr_ctrl    : 3;  /* bit[3-5] : BGR output voltrage adjust */
        unsigned int  bw_ctrl     : 2;  /* bit[6-7] : PLL bandwidth control
                                                      11: ~1,5x
                                                      10: ~1.25x
                                                      01: 1x
                                                      00: ~0.75x */
        unsigned int  reserved    : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_TMDS_CTRL3_UNION;
#define SOC_HDMI_TMDS_CTRL3_fpost_count_START  (0)
#define SOC_HDMI_TMDS_CTRL3_fpost_count_END    (2)
#define SOC_HDMI_TMDS_CTRL3_bgr_ctrl_START     (3)
#define SOC_HDMI_TMDS_CTRL3_bgr_ctrl_END       (5)
#define SOC_HDMI_TMDS_CTRL3_bw_ctrl_START      (6)
#define SOC_HDMI_TMDS_CTRL3_bw_ctrl_END        (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_TMDS_CTRL4_UNION
 �ṹ˵��  : TMDS_CTRL4 �Ĵ����ṹ���塣��ַƫ����:0x214����ֵ:0x00000091�����:32
 �Ĵ���˵��: TMDS Control Register #4
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  tfrcount    : 2;  /* bit[0-1] : HDMI Transmitter PLL front counter setting:
                                                      0b00 = Divide by 1
                                                      0b01 = Divide by 2
                                                      0b10 = Divide by 4
                                                      0b11 = Invalid */
        unsigned int  dpcolor_ctl : 2;  /* bit[2-3] : Deep color mode control
                                                      11: invalid
                                                      10: 12b
                                                      01: 10b
                                                      00: 8b */
        unsigned int  tmds_oe     : 1;  /* bit[4-4] : Output enable control */
        unsigned int  sel_bgr     : 1;  /* bit[5-5] : 1: BGR selected for swing control voltage ref
                                                      0: 1:2 resistor voltage divider of AVCC pin voltage is used */
        unsigned int  reserved_0  : 1;  /* bit[6-6] : reserved */
        unsigned int  no_osclkout : 1;  /* bit[7-7] : oscillator clock output disable
                                                      0: osclkout is active if osclk_en pin (at Phy) = 1'b1
                                                      1: osclkout is not active */
        unsigned int  reserved_1  : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_TMDS_CTRL4_UNION;
#define SOC_HDMI_TMDS_CTRL4_tfrcount_START     (0)
#define SOC_HDMI_TMDS_CTRL4_tfrcount_END       (1)
#define SOC_HDMI_TMDS_CTRL4_dpcolor_ctl_START  (2)
#define SOC_HDMI_TMDS_CTRL4_dpcolor_ctl_END    (3)
#define SOC_HDMI_TMDS_CTRL4_tmds_oe_START      (4)
#define SOC_HDMI_TMDS_CTRL4_tmds_oe_END        (4)
#define SOC_HDMI_TMDS_CTRL4_sel_bgr_START      (5)
#define SOC_HDMI_TMDS_CTRL4_sel_bgr_END        (5)
#define SOC_HDMI_TMDS_CTRL4_no_osclkout_START  (7)
#define SOC_HDMI_TMDS_CTRL4_no_osclkout_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_TMDS_CTRL5_UNION
 �ṹ˵��  : TMDS_CTRL5 �Ĵ����ṹ���塣��ַƫ����:0x218����ֵ:0x00000000�����:32
 �Ĵ���˵��: TMDS Control Register #5
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  aclkcount : 3;  /* bit[0-2] : audio clock counter control
                                                    000: faclock = fout */
        unsigned int  reserved_0: 5;  /* bit[3-7] : reserved */
        unsigned int  reserved_1: 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_TMDS_CTRL5_UNION;
#define SOC_HDMI_TMDS_CTRL5_aclkcount_START  (0)
#define SOC_HDMI_TMDS_CTRL5_aclkcount_END    (2)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_XVYCC2RGB_CTL_UNION
 �ṹ˵��  : XVYCC2RGB_CTL �Ĵ����ṹ���塣��ַƫ����:0x240����ֵ:0x00000000�����:32
 �Ĵ���˵��: xvYCC_2_RGB Control Register
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  xvyccsel  : 1;  /* bit[0-0] : This bit indicates the source is xvYCC when 1; YcbCr when 0. It can be configured by firmware. Under Auto Video Configure (AVC) mode; this control comes from HDMI packet decoding. */
        unsigned int  fullrange : 1;  /* bit[1-1] : xvYCC full-range expansion enable */
        unsigned int  sw_ovr    : 1;  /* bit[2-2] : Software Over Ride. When turned on; all coefficients and offsets are coming from registers not internal hardware decision. */
        unsigned int  byp_all   : 1;  /* bit[3-3] : This bit indicates all the functions will be bypassed when 1. */
        unsigned int  exp_only  : 1;  /* bit[4-4] : This bit high indicates the internal CSC will be bypassed and only range expansion is on. */
        unsigned int  reserved_0: 3;  /* bit[5-7] : reserved */
        unsigned int  reserved_1: 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_XVYCC2RGB_CTL_UNION;
#define SOC_HDMI_XVYCC2RGB_CTL_xvyccsel_START   (0)
#define SOC_HDMI_XVYCC2RGB_CTL_xvyccsel_END     (0)
#define SOC_HDMI_XVYCC2RGB_CTL_fullrange_START  (1)
#define SOC_HDMI_XVYCC2RGB_CTL_fullrange_END    (1)
#define SOC_HDMI_XVYCC2RGB_CTL_sw_ovr_START     (2)
#define SOC_HDMI_XVYCC2RGB_CTL_sw_ovr_END       (2)
#define SOC_HDMI_XVYCC2RGB_CTL_byp_all_START    (3)
#define SOC_HDMI_XVYCC2RGB_CTL_byp_all_END      (3)
#define SOC_HDMI_XVYCC2RGB_CTL_exp_only_START   (4)
#define SOC_HDMI_XVYCC2RGB_CTL_exp_only_END     (4)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_Y2R_COEFF_LOW_UNION
 �ṹ˵��  : Y2R_COEFF_LOW �Ĵ����ṹ���塣��ַƫ����:0x244����ֵ:0x00000000�����:32
 �Ĵ���˵��: xvYCC_2_RGB Conversion Y_2_R Register1
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  y2rcoeff_l : 8;  /* bit[0-7] : xvYCC to RGB conversion
                                                     Y to R coefficient lower byte (override internal CSC value when program 0x90[2] = 1) */
        unsigned int  reserved   : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_Y2R_COEFF_LOW_UNION;
#define SOC_HDMI_Y2R_COEFF_LOW_y2rcoeff_l_START  (0)
#define SOC_HDMI_Y2R_COEFF_LOW_y2rcoeff_l_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_Y2R_COEFF_UP_UNION
 �ṹ˵��  : Y2R_COEFF_UP �Ĵ����ṹ���塣��ַƫ����:0x248����ֵ:0x00000000�����:32
 �Ĵ���˵��: xvYCC_2_RGB Conversion Y_2_R Register2
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  y2rcoeff_h : 5;  /* bit[0-4] : xvYCC to RGB conversion
                                                     Y to R coefficient upper byte (override internal CSC value when program 0x90[2] = 1) */
        unsigned int  reserved_0 : 3;  /* bit[5-7] : reserved */
        unsigned int  reserved_1 : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_Y2R_COEFF_UP_UNION;
#define SOC_HDMI_Y2R_COEFF_UP_y2rcoeff_h_START  (0)
#define SOC_HDMI_Y2R_COEFF_UP_y2rcoeff_h_END    (4)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_CR2R_COEFF_LOW_UNION
 �ṹ˵��  : CR2R_COEFF_LOW �Ĵ����ṹ���塣��ַƫ����:0x24C����ֵ:0x00000000�����:32
 �Ĵ���˵��: xvYCC_2_RGB Conversion Cr_2_R Register1
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cr2rcoeff_l : 8;  /* bit[0-7] : xvYCC to RGB conversion
                                                      Cr to R coefficient lower byte (override internal CSC value when program reg 0x90[2] = 1) */
        unsigned int  reserved    : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_CR2R_COEFF_LOW_UNION;
#define SOC_HDMI_CR2R_COEFF_LOW_cr2rcoeff_l_START  (0)
#define SOC_HDMI_CR2R_COEFF_LOW_cr2rcoeff_l_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_CR2R_COEFF_UP_UNION
 �ṹ˵��  : CR2R_COEFF_UP �Ĵ����ṹ���塣��ַƫ����:0x250����ֵ:0x00000000�����:32
 �Ĵ���˵��: xvYCC_2_RGB Conversion Cr_2_R Register2
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cr2rcoeff_h : 5;  /* bit[0-4] : xvYCC to RGB conversion
                                                      Cr to R coefficient upper byte (override internal CSC value when program 0x90[2] = 1) */
        unsigned int  reserved_0  : 3;  /* bit[5-7] : reserved */
        unsigned int  reserved_1  : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_CR2R_COEFF_UP_UNION;
#define SOC_HDMI_CR2R_COEFF_UP_cr2rcoeff_h_START  (0)
#define SOC_HDMI_CR2R_COEFF_UP_cr2rcoeff_h_END    (4)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_CB2B_COEFF_LOW_UNION
 �ṹ˵��  : CB2B_COEFF_LOW �Ĵ����ṹ���塣��ַƫ����:0x254����ֵ:0x00000000�����:32
 �Ĵ���˵��: xvYCC_2_RGB Conversion Cb_2_B Register1
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cb2bcoeff_l : 8;  /* bit[0-7] : xvYCC to RGB conversion
                                                      Cb to B coefficient lower byte (override internal CSC value when program reg 0x90[2] = 1) */
        unsigned int  reserved    : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_CB2B_COEFF_LOW_UNION;
#define SOC_HDMI_CB2B_COEFF_LOW_cb2bcoeff_l_START  (0)
#define SOC_HDMI_CB2B_COEFF_LOW_cb2bcoeff_l_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_CB2B_COEFF_UP_UNION
 �ṹ˵��  : CB2B_COEFF_UP �Ĵ����ṹ���塣��ַƫ����:0x258����ֵ:0x00000000�����:32
 �Ĵ���˵��: xvYCC_2_RGB Conversion Cb_2_B Register2
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cb2bcoeff_h : 5;  /* bit[0-4] : xvYCC to RGB conversion
                                                      Cb to B coefficient upper byte (override internal CSC value when program 0x90[2] = 1) */
        unsigned int  reserved_0  : 3;  /* bit[5-7] : reserved */
        unsigned int  reserved_1  : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_CB2B_COEFF_UP_UNION;
#define SOC_HDMI_CB2B_COEFF_UP_cb2bcoeff_h_START  (0)
#define SOC_HDMI_CB2B_COEFF_UP_cb2bcoeff_h_END    (4)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_CR2G_COEFF_LOW_UNION
 �ṹ˵��  : CR2G_COEFF_LOW �Ĵ����ṹ���塣��ַƫ����:0x25C����ֵ:0x00000000�����:32
 �Ĵ���˵��: xvYCC_2_RGB Conversion Cr_2_G Register1
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cr2gcoeff_l : 8;  /* bit[0-7] : xvYCC to RGB conversion
                                                      Cr to G coefficient lower byte (override internal CSC value when program reg 0x90[2] = 1) */
        unsigned int  reserved    : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_CR2G_COEFF_LOW_UNION;
#define SOC_HDMI_CR2G_COEFF_LOW_cr2gcoeff_l_START  (0)
#define SOC_HDMI_CR2G_COEFF_LOW_cr2gcoeff_l_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_CR2G_COEFF_UP_UNION
 �ṹ˵��  : CR2G_COEFF_UP �Ĵ����ṹ���塣��ַƫ����:0x260����ֵ:0x00000000�����:32
 �Ĵ���˵��: xvYCC_2_RGB Conversion Cr_2_G Register2
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cr2gcoeff_h : 5;  /* bit[0-4] : xvYCC to RGB conversion
                                                      Cr to G coefficient upper byte (override internal CSC value when program 0x90[2] = 1) */
        unsigned int  reserved_0  : 3;  /* bit[5-7] : reserved */
        unsigned int  reserved_1  : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_CR2G_COEFF_UP_UNION;
#define SOC_HDMI_CR2G_COEFF_UP_cr2gcoeff_h_START  (0)
#define SOC_HDMI_CR2G_COEFF_UP_cr2gcoeff_h_END    (4)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_CB2G_COEFF_LOW_UNION
 �ṹ˵��  : CB2G_COEFF_LOW �Ĵ����ṹ���塣��ַƫ����:0x264����ֵ:0x00000000�����:32
 �Ĵ���˵��: xvYCC_2_RGB Conversion Cb_2_G Register1
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cb2gcoeff_l : 8;  /* bit[0-7] : xvYCC to RGB conversion
                                                      Cb to G coefficient lower byte (override internal CSC value when program reg 0x90[2] = 1) */
        unsigned int  reserved    : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_CB2G_COEFF_LOW_UNION;
#define SOC_HDMI_CB2G_COEFF_LOW_cb2gcoeff_l_START  (0)
#define SOC_HDMI_CB2G_COEFF_LOW_cb2gcoeff_l_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_CB2G_COEFF_UP_UNION
 �ṹ˵��  : CB2G_COEFF_UP �Ĵ����ṹ���塣��ַƫ����:0x268����ֵ:0x00000000�����:32
 �Ĵ���˵��: xvYCC_2_RGB Conversion Cb_2_G Register2
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cb2gcoeff_h : 5;  /* bit[0-4] : xvYCC to RGB conversion
                                                      Cb to G coefficient upper byte (override internal CSC value when program reg 0x90[2] = 1) */
        unsigned int  reserved_0  : 3;  /* bit[5-7] : reserved */
        unsigned int  reserved_1  : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_CB2G_COEFF_UP_UNION;
#define SOC_HDMI_CB2G_COEFF_UP_cb2gcoeff_h_START  (0)
#define SOC_HDMI_CB2G_COEFF_UP_cb2gcoeff_h_END    (4)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_YOFFSET1_LOW_UNION
 �ṹ˵��  : YOFFSET1_LOW �Ĵ����ṹ���塣��ַƫ����:0x26C����ֵ:0x00000000�����:32
 �Ĵ���˵��: xvYCC_2_RGB Conversion Y Offset Register1
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  yoffs1_l : 8;  /* bit[0-7] : xvYCC2RGB Y Offset Coefficient lower byte (override internal CSC value when program reg90[2] = 1) */
        unsigned int  reserved : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_YOFFSET1_LOW_UNION;
#define SOC_HDMI_YOFFSET1_LOW_yoffs1_l_START  (0)
#define SOC_HDMI_YOFFSET1_LOW_yoffs1_l_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_YOFFSET1_UP_UNION
 �ṹ˵��  : YOFFSET1_UP �Ĵ����ṹ���塣��ַƫ����:0x270����ֵ:0x00000000�����:32
 �Ĵ���˵��: xvYCC_2_RGB Conversion Y Offset Register2
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  yoffs1_h : 4;  /* bit[0-3] : xvYCC2RGB Y Offset Coefficient upper byte (override internal CSC value when program reg90[2] = 1) */
        unsigned int  reserved_0: 4;  /* bit[4-7] : reserved */
        unsigned int  reserved_1: 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_YOFFSET1_UP_UNION;
#define SOC_HDMI_YOFFSET1_UP_yoffs1_h_START  (0)
#define SOC_HDMI_YOFFSET1_UP_yoffs1_h_END    (3)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_OFFSET1_LOW_UNION
 �ṹ˵��  : OFFSET1_LOW �Ĵ����ṹ���塣��ַƫ����:0x274����ֵ:0x00000000�����:32
 �Ĵ���˵��: xvYCC_2_RGB Conversion Offset1 Register1
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  offs1_l  : 8;  /* bit[0-7] : xvYCC2RGB Offset1 Coefficient lower byte Offset for RGB channel before right shifting which is subtractive if software override is on.
                                                   (override internal CSC value when program reg90[2] = 1) */
        unsigned int  reserved : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_OFFSET1_LOW_UNION;
#define SOC_HDMI_OFFSET1_LOW_offs1_l_START   (0)
#define SOC_HDMI_OFFSET1_LOW_offs1_l_END     (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_OFFSET1_MID_UNION
 �ṹ˵��  : OFFSET1_MID �Ĵ����ṹ���塣��ַƫ����:0x278����ֵ:0x00000000�����:32
 �Ĵ���˵��: xvYCC_2_RGB Conversion Offset1 Register2
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  offs1_m  : 8;  /* bit[0-7] : xvYCC2RGB Offset1 Coefficient mid byte
                                                   See above */
        unsigned int  reserved : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_OFFSET1_MID_UNION;
#define SOC_HDMI_OFFSET1_MID_offs1_m_START   (0)
#define SOC_HDMI_OFFSET1_MID_offs1_m_END     (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_OFFSET1_UP_UNION
 �ṹ˵��  : OFFSET1_UP �Ĵ����ṹ���塣��ַƫ����:0x27C����ֵ:0x00000000�����:32
 �Ĵ���˵��: xvYCC_2_RGB Conversion Offset1 Register3
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  offs1_h  : 8;  /* bit[0-7] : xvYCC2RGB Offset1 Coefficient upper byte
                                                   See above */
        unsigned int  reserved : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_OFFSET1_UP_UNION;
#define SOC_HDMI_OFFSET1_UP_offs1_h_START   (0)
#define SOC_HDMI_OFFSET1_UP_offs1_h_END     (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_OFFSET2_LOW_UNION
 �ṹ˵��  : OFFSET2_LOW �Ĵ����ṹ���塣��ַƫ����:0x280����ֵ:0x00000000�����:32
 �Ĵ���˵��: xvYCC_2_RGB Conversion Offset2 Register1
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  offs2_l  : 8;  /* bit[0-7] : xvYCC2RGB Offset2 Coefficient lower byte Offset for RGB channel after right shifting which is additive if software override is on.
                                                   (override internal CSC value when program reg90[2] = 1) */
        unsigned int  reserved : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_OFFSET2_LOW_UNION;
#define SOC_HDMI_OFFSET2_LOW_offs2_l_START   (0)
#define SOC_HDMI_OFFSET2_LOW_offs2_l_END     (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_OFFSET2_UP_UNION
 �ṹ˵��  : OFFSET2_UP �Ĵ����ṹ���塣��ַƫ����:0x284����ֵ:0x00000000�����:32
 �Ĵ���˵��: xvYCC_2_RGB Conversion Offset2 Register2
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  offs2_h  : 4;  /* bit[0-3] : xvYCC2RGB Offset1 Coefficient uper byte
                                                   See above */
        unsigned int  reserved_0: 4;  /* bit[4-7] : reserved */
        unsigned int  reserved_1: 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_OFFSET2_UP_UNION;
#define SOC_HDMI_OFFSET2_UP_offs2_h_START   (0)
#define SOC_HDMI_OFFSET2_UP_offs2_h_END     (3)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_DCLEVEL_LOW_UNION
 �ṹ˵��  : DCLEVEL_LOW �Ĵ����ṹ���塣��ַƫ����:0x288����ֵ:0x00000000�����:32
 �Ĵ���˵��: xvYCC_2_RGB Conversion DC Level Register1
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  dc_lev_l : 8;  /* bit[0-7] : xvYCC2RGB DC lelvel coefficient lower byte
                                                   (override internal CSC value when program reg90[2] = 1) */
        unsigned int  reserved : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_DCLEVEL_LOW_UNION;
#define SOC_HDMI_DCLEVEL_LOW_dc_lev_l_START  (0)
#define SOC_HDMI_DCLEVEL_LOW_dc_lev_l_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_DCLEVEL_UP_UNION
 �ṹ˵��  : DCLEVEL_UP �Ĵ����ṹ���塣��ַƫ����:0x28C����ֵ:0x00000000�����:32
 �Ĵ���˵��: xvYCC_2_RGB Conversion DC Level Register2
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  dc_lev_h : 6;  /* bit[0-5] : xvYCC2RGB DC lelvel coefficient upper byte
                                                   (override internal CSC value when program reg90[2] = 1) */
        unsigned int  reserved_0: 2;  /* bit[6-7] : reserved */
        unsigned int  reserved_1: 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_DCLEVEL_UP_UNION;
#define SOC_HDMI_DCLEVEL_UP_dc_lev_h_START  (0)
#define SOC_HDMI_DCLEVEL_UP_dc_lev_h_END    (5)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_BIST_CNTL_CORE_UNION
 �ṹ˵��  : BIST_CNTL_CORE �Ĵ����ṹ���塣��ַƫ����:0x2CC����ֵ:0x00000060�����:32
 �Ĵ���˵��: BIST Control Register
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  bist_enable    : 1;  /* bit[0-0] : Whenever BIST is enabled, normal operation of the chip ceases and the chip goes into bist mode.
                                                         0 �C bist is disabled
                                                         1 - bist is enabled */
        unsigned int  bist_reset     : 1;  /* bit[1-1] : Reset TMDS BIST. Active high. */
        unsigned int  reserved_0     : 1;  /* bit[2-2] : reserved */
        unsigned int  bist_cont_prog : 1;  /* bit[3-3] : 1��b 0 �C The BIST module runs the pattern check or pattern transmit for programmed number of frames.
                                                         1��b 1 �C The BIST module runs continuously till the BIST is disabled. */
        unsigned int  bist_start     : 1;  /* bit[4-4] : BIST start register. To start write 1 - it will generate 1 clock pulse;
                                                         which means that the clock needs to run before writing into this register. It will return a value of 0 if read back. All BIST control logic
                                                         gets reset at the start of a bist including the read only status registers. Other configuration registers do not get reset. */
        unsigned int  bist_duration  : 3;  /* bit[5-7] : Lower 3 bits of the 23 bit BIST duration register.
                                                         See the description for the BIST duration registers below. */
        unsigned int  reserved_1     : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_BIST_CNTL_CORE_UNION;
#define SOC_HDMI_BIST_CNTL_CORE_bist_enable_START     (0)
#define SOC_HDMI_BIST_CNTL_CORE_bist_enable_END       (0)
#define SOC_HDMI_BIST_CNTL_CORE_bist_reset_START      (1)
#define SOC_HDMI_BIST_CNTL_CORE_bist_reset_END        (1)
#define SOC_HDMI_BIST_CNTL_CORE_bist_cont_prog_START  (3)
#define SOC_HDMI_BIST_CNTL_CORE_bist_cont_prog_END    (3)
#define SOC_HDMI_BIST_CNTL_CORE_bist_start_START      (4)
#define SOC_HDMI_BIST_CNTL_CORE_bist_start_END        (4)
#define SOC_HDMI_BIST_CNTL_CORE_bist_duration_START   (5)
#define SOC_HDMI_BIST_CNTL_CORE_bist_duration_END     (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_BIST_DURATION0_UNION
 �ṹ˵��  : BIST_DURATION0 �Ĵ����ṹ���塣��ַƫ����:0x2D0����ֵ:0x00000000�����:32
 �Ĵ���˵��: BIST Duration Register #0
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  bist_duration0 : 8;  /* bit[0-7] : BIST_DURATION[10:3]
                                                         BIST Duration register is used to specify the duration of a test in frames. Counting of frames starts with the first vsync falling edge detected after the BIST has been enabled. Also a programmed value of n results in n+1 frames. (If zero is programmed; the bist/tx is active for 1 frame) */
        unsigned int  reserved       : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_BIST_DURATION0_UNION;
#define SOC_HDMI_BIST_DURATION0_bist_duration0_START  (0)
#define SOC_HDMI_BIST_DURATION0_bist_duration0_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_BIST_DURATION1_UNION
 �ṹ˵��  : BIST_DURATION1 �Ĵ����ṹ���塣��ַƫ����:0x2D4����ֵ:0x00000000�����:32
 �Ĵ���˵��: BIST Duration Register #1
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  bist_duration1 : 8;  /* bit[0-7] : BIST_DURATION[18:11]
                                                         BIST Duration register is used to specify the duration of a test in frames. Counting of frames starts with the first vsync falling edge detected after the BIST has been enabled. Also a programmed value of n results in n+1 frames. (If zero is programmed; the bist/tx is active for 1 frame) */
        unsigned int  reserved       : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_BIST_DURATION1_UNION;
#define SOC_HDMI_BIST_DURATION1_bist_duration1_START  (0)
#define SOC_HDMI_BIST_DURATION1_bist_duration1_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_BIST_DURATION2_UNION
 �ṹ˵��  : BIST_DURATION2 �Ĵ����ṹ���塣��ַƫ����:0x2D8����ֵ:0x00000000�����:32
 �Ĵ���˵��: BIST Duration Register #2
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  bist_duration2 : 4;  /* bit[0-3] : BIST_DURATION[22:19]
                                                         BIST Duration register is used to specify the duration of a test in frames. Counting of frames starts with the first vsync falling edge detected after the BIST has been enabled. Also a programmed value of n results in n+1 frames. (If zero is programmed; the bist/tx is active for 1 frame) */
        unsigned int  reserved_0     : 4;  /* bit[4-7] : reserved */
        unsigned int  reserved_1     : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_BIST_DURATION2_UNION;
#define SOC_HDMI_BIST_DURATION2_bist_duration2_START  (0)
#define SOC_HDMI_BIST_DURATION2_bist_duration2_END    (3)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_TX_BIST_TEST_SEL_UNION
 �ṹ˵��  : TX_BIST_TEST_SEL �Ĵ����ṹ���塣��ַƫ����:0x2DC����ֵ:0x00000022�����:32
 �Ĵ���˵��: BIST Test Select Register
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reg_bist_pattern_select : 4;  /* bit[0-3] : 4��b 0000 �C Walking one pattern
                                                                  4��b 0001 �C Ramping pattern
                                                                  4��b 0010 �C LFSR pattern1
                                                                  4��b 0011 �C LFSR pattern 2
                                                                  4��b 0100 �C Static pattern 1
                                                                  4��b 0101 �C Static pattern 2
                                                                  4��b 0110 �C Max switching pattern
                                                                  4��b 0111 �C Two column max- switching pattern
                                                                  4��b 1000 �C SDVO/TMDS half clock pattern
                                                                  4��b 1001 �C SDVO/TMDS 8 bit static pattern
                                                                  4��b 1010 �C TMDS 10 bit static pattern.
                                                                  4'b 1011 - Mix of patterns
                                                                  The pattern corresponding to 4��h 10 is applicable only to TMDS transmit and are not applicable for SDVO receive test. */
        unsigned int  cntl_pattern_select     : 2;  /* bit[4-5] : Control pattern select:
                                                                  00-CTL lines[3:0] are static (00);
                                                                  01-CTL lines[3:0] follow a ramp pattern where each count is valid for 2 clocks;
                                                                  10-CTL line[3:0] follow a random pattern where each pattern is valid for 2 clocks;
                                                                  11-reserved (do not use) */
        unsigned int  reserved_0              : 2;  /* bit[6-7] : reserved */
        unsigned int  reserved_1              : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_TX_BIST_TEST_SEL_UNION;
#define SOC_HDMI_TX_BIST_TEST_SEL_reg_bist_pattern_select_START  (0)
#define SOC_HDMI_TX_BIST_TEST_SEL_reg_bist_pattern_select_END    (3)
#define SOC_HDMI_TX_BIST_TEST_SEL_cntl_pattern_select_START      (4)
#define SOC_HDMI_TX_BIST_TEST_SEL_cntl_pattern_select_END        (5)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_TX_BIST_VIDEO_MODE_UNION
 �ṹ˵��  : TX_BIST_VIDEO_MODE �Ĵ����ṹ���塣��ַƫ����:0x2E0����ֵ:0x00000005�����:32
 �Ĵ���˵��: BIST Video Mode Select Register
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  bist_video_mode : 3;  /* bit[0-2] : BIST video mode selects the video mode. In the SDVO receive mode; the video mode information is used to check the duration of DE for each line and the number of lines received in a frame. In the TMDS transmit test; this information is used to generate hsync, vsync, and DE.
                                                          3��b 000 �C (paris_test)
                                                          3��b 001 �C SXGA (1280x1024)
                                                          3��b 010 �C WSXGAP (1680x1050)
                                                          3��b 011 �C WUXGA (1920x1200)
                                                          3��b 100 �C UXGA (1600x1200)
                                                          3��b 101 �C WXGAP (1440x900)
                                                          others �C 64x48 */
        unsigned int  bist_force_de   : 1;  /* bit[3-3] : Setting this bit 1 forces the DE going to the TMDS core to be forced to be 1. */
        unsigned int  reserved_0      : 4;  /* bit[4-7] : reserved */
        unsigned int  reserved_1      : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_TX_BIST_VIDEO_MODE_UNION;
#define SOC_HDMI_TX_BIST_VIDEO_MODE_bist_video_mode_START  (0)
#define SOC_HDMI_TX_BIST_VIDEO_MODE_bist_video_mode_END    (2)
#define SOC_HDMI_TX_BIST_VIDEO_MODE_bist_force_de_START    (3)
#define SOC_HDMI_TX_BIST_VIDEO_MODE_bist_force_de_END      (3)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_TX_BIST_8BIT_PATTERN_UNION
 �ṹ˵��  : TX_BIST_8BIT_PATTERN �Ĵ����ṹ���塣��ַƫ����:0x2E4����ֵ:0x00000055�����:32
 �Ĵ���˵��: BIST 8bit Pattern Register
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  bist_8bit_pattern : 8;  /* bit[0-7] : In receive/transmit mode; the 8-bit static pattern which needs ot be provided to the TMDS encoder or checked against. */
        unsigned int  reserved          : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_TX_BIST_8BIT_PATTERN_UNION;
#define SOC_HDMI_TX_BIST_8BIT_PATTERN_bist_8bit_pattern_START  (0)
#define SOC_HDMI_TX_BIST_8BIT_PATTERN_bist_8bit_pattern_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_TX_BIST_10BIT_PATTERN_L_UNION
 �ṹ˵��  : TX_BIST_10BIT_PATTERN_L �Ĵ����ṹ���塣��ַƫ����:0x2E8����ֵ:0x00000000�����:32
 �Ĵ���˵��: BIST 10bit Pattern Low Register
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  bist_10bit_pattern_l : 8;  /* bit[0-7] : Lower 8 bits of the static 10-bit pattern to be provided to the TMDS transmitter */
        unsigned int  reserved             : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_TX_BIST_10BIT_PATTERN_L_UNION;
#define SOC_HDMI_TX_BIST_10BIT_PATTERN_L_bist_10bit_pattern_l_START  (0)
#define SOC_HDMI_TX_BIST_10BIT_PATTERN_L_bist_10bit_pattern_l_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_TX_BIST_10BIT_PATTERN_U_UNION
 �ṹ˵��  : TX_BIST_10BIT_PATTERN_U �Ĵ����ṹ���塣��ַƫ����:0x2EC����ֵ:0x00000000�����:32
 �Ĵ���˵��: BIST 10bit Pattern Up Register
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  bist_10bit_pattern_u : 2;  /* bit[0-1] : Upper 2 bits of the static 10-bit pattern to be provided to the TMDS transmitter */
        unsigned int  reserved_0           : 6;  /* bit[2-7] : reserved */
        unsigned int  reserved_1           : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_TX_BIST_10BIT_PATTERN_U_UNION;
#define SOC_HDMI_TX_BIST_10BIT_PATTERN_U_bist_10bit_pattern_u_START  (0)
#define SOC_HDMI_TX_BIST_10BIT_PATTERN_U_bist_10bit_pattern_u_END    (1)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_TX_BIST_STATUS_UNION
 �ṹ˵��  : TX_BIST_STATUS �Ĵ����ṹ���塣��ַƫ����:0x2F0����ֵ:0x00000000�����:32
 �Ĵ���˵��: BIST Status Register
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  bist_config_status : 2;  /* bit[0-1] : BIST Status register provides the status of the bist module.
                                                             Bist idle/busy/complete bits [1:0]
                                                             00 �C BIST is idle
                                                             01 �C BIST is busy (test in progress)
                                                             10 �C BIST is complete and the result is ready in the BIST_RESULT register */
        unsigned int  reserved_0         : 6;  /* bit[2-7] : reserved */
        unsigned int  reserved_1         : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_TX_BIST_STATUS_UNION;
#define SOC_HDMI_TX_BIST_STATUS_bist_config_status_START  (0)
#define SOC_HDMI_TX_BIST_STATUS_bist_config_status_END    (1)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_TXSHA_CTRL_UNION
 �ṹ˵��  : TXSHA_CTRL �Ĵ����ṹ���塣��ַƫ����:0x330����ֵ:0xX�����:32
 �Ĵ���˵��: HDCP Repeater Control Register
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sha_go_stat   : 1;  /* bit[0-0] : Firmware starts the SHA generation by writing ��1��; which generates 1 clock strobe.
                                                        If ��1�� is written, the state is inverted. */
        unsigned int  shactrl_stat1 : 1;  /* bit[1-1] : If &quot;1&quot;, means that SHA picked up the &quot;SHA go stat&quot;command&quot;. */
        unsigned int  sha_mode      : 1;  /* bit[2-2] : Selects SHA mode:
                                                        &quot;1&quot; - select SHA debug mode when firmware can
                                                        overwrite the M0.
                                                        &quot;0&quot; - regular mode */
        unsigned int  m0_rd_en      : 1;  /* bit[3-3] : M0 mode:
                                                        1 = M0 external mode (M0 readable over I2C)
                                                        0 = M0 internal mode (M0 non-reable over I2C) */
        unsigned int  reserved_0    : 4;  /* bit[4-7] : reserved */
        unsigned int  reserved_1    : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_TXSHA_CTRL_UNION;
#define SOC_HDMI_TXSHA_CTRL_sha_go_stat_START    (0)
#define SOC_HDMI_TXSHA_CTRL_sha_go_stat_END      (0)
#define SOC_HDMI_TXSHA_CTRL_shactrl_stat1_START  (1)
#define SOC_HDMI_TXSHA_CTRL_shactrl_stat1_END    (1)
#define SOC_HDMI_TXSHA_CTRL_sha_mode_START       (2)
#define SOC_HDMI_TXSHA_CTRL_sha_mode_END         (2)
#define SOC_HDMI_TXSHA_CTRL_m0_rd_en_START       (3)
#define SOC_HDMI_TXSHA_CTRL_m0_rd_en_END         (3)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_TXKSV_FIFO_UNION
 �ṹ˵��  : TXKSV_FIFO �Ĵ����ṹ���塣��ַƫ����:0x334����ֵ:0x00000000�����:32
 �Ĵ���˵��: HDCP SHA Repeater KSV FIFO Register
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ksv_fifo_out : 8;  /* bit[0-7] : This Address is a port for access to the KSV
                                                       FIFO. When the firmware starts a I2C transaction
                                                       with the offset address set at 38h the access
                                                       control will be transferred to the KSV FIFO. The
                                                       address located inside the &quot;KSV Start Address&quot;
                                                       register acts as the start offset within the KSV
                                                       FIFO space. Consecutive I2C transactions to
                                                       address 38h will be auto-incremented in the KSV
                                                       FIFO Address space */
        unsigned int  reserved     : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_TXKSV_FIFO_UNION;
#define SOC_HDMI_TXKSV_FIFO_ksv_fifo_out_START  (0)
#define SOC_HDMI_TXKSV_FIFO_ksv_fifo_out_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_TXDS_BSTATUS1_UNION
 �ṹ˵��  : TXDS_BSTATUS1 �Ĵ����ṹ���塣��ַƫ����:0x338����ֵ:0x00000000�����:32
 �Ĵ���˵��: HDCP Repeater Down Stream BSTATUS Register #1
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ds_dev_cnt    : 7;  /* bit[0-6] : Number of attached devices */
        unsigned int  ds_dev_exceed : 1;  /* bit[7-7] : Maximum number (of allowed) attached devices
                                                        exceeded */
        unsigned int  reserved      : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_TXDS_BSTATUS1_UNION;
#define SOC_HDMI_TXDS_BSTATUS1_ds_dev_cnt_START     (0)
#define SOC_HDMI_TXDS_BSTATUS1_ds_dev_cnt_END       (6)
#define SOC_HDMI_TXDS_BSTATUS1_ds_dev_exceed_START  (7)
#define SOC_HDMI_TXDS_BSTATUS1_ds_dev_exceed_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_TXDS_BSTATUS2_UNION
 �ṹ˵��  : TXDS_BSTATUS2 �Ĵ����ṹ���塣��ַƫ����:0x33C����ֵ:0x00000010�����:32
 �Ĵ���˵��: HDCP Repeater Down Stream BSTATUS Register #2
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ds_depth       : 3;  /* bit[0-2] : Depth - number of attached repeaters */
        unsigned int  ds_casc_exceed : 1;  /* bit[3-3] : Max cascade exceeded - number (of allowed) attached repeaters exceeded */
        unsigned int  ds_hdmi_mode   : 1;  /* bit[4-4] : HDMI Mode. (controlled through the I2C local side)
                                                         1 - receiver is in HDMI Mode;
                                                         0 - receiver is in DVI mode. */
        unsigned int  ds_bstatus     : 3;  /* bit[5-7] : Bstatus bits */
        unsigned int  reserved       : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_TXDS_BSTATUS2_UNION;
#define SOC_HDMI_TXDS_BSTATUS2_ds_depth_START        (0)
#define SOC_HDMI_TXDS_BSTATUS2_ds_depth_END          (2)
#define SOC_HDMI_TXDS_BSTATUS2_ds_casc_exceed_START  (3)
#define SOC_HDMI_TXDS_BSTATUS2_ds_casc_exceed_END    (3)
#define SOC_HDMI_TXDS_BSTATUS2_ds_hdmi_mode_START    (4)
#define SOC_HDMI_TXDS_BSTATUS2_ds_hdmi_mode_END      (4)
#define SOC_HDMI_TXDS_BSTATUS2_ds_bstatus_START      (5)
#define SOC_HDMI_TXDS_BSTATUS2_ds_bstatus_END        (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_TXDS_M0_0_UNION
 �ṹ˵��  : TXDS_M0_0 �Ĵ����ṹ���塣��ַƫ����:0x340����ֵ:0x00000000�����:32
 �Ĵ���˵��: HDCP SHA Repeater M0 Register #0
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  m0_7_0_  : 8;  /* bit[0-7] : M0[7:0] */
        unsigned int  reserved : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_TXDS_M0_0_UNION;
#define SOC_HDMI_TXDS_M0_0_m0_7_0__START   (0)
#define SOC_HDMI_TXDS_M0_0_m0_7_0__END     (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_TXDS_M0_1_UNION
 �ṹ˵��  : TXDS_M0_1 �Ĵ����ṹ���塣��ַƫ����:0x344����ֵ:0x00000000�����:32
 �Ĵ���˵��: HDCP SHA Repeater M0 Register #1
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  m0_15_8_ : 8;  /* bit[0-7] : M0[15:8] */
        unsigned int  reserved : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_TXDS_M0_1_UNION;
#define SOC_HDMI_TXDS_M0_1_m0_15_8__START  (0)
#define SOC_HDMI_TXDS_M0_1_m0_15_8__END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_TXDS_M0_2_UNION
 �ṹ˵��  : TXDS_M0_2 �Ĵ����ṹ���塣��ַƫ����:0x348����ֵ:0x00000000�����:32
 �Ĵ���˵��: HDCP SHA Repeater M0 Register #2
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  m0_23_16_ : 8;  /* bit[0-7] : M0[23:16] */
        unsigned int  reserved  : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_TXDS_M0_2_UNION;
#define SOC_HDMI_TXDS_M0_2_m0_23_16__START  (0)
#define SOC_HDMI_TXDS_M0_2_m0_23_16__END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_TXDS_M0_3_UNION
 �ṹ˵��  : TXDS_M0_3 �Ĵ����ṹ���塣��ַƫ����:0x34C����ֵ:0x00000000�����:32
 �Ĵ���˵��: HDCP SHA Repeater M0 Register #3
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  m0_31_24_ : 8;  /* bit[0-7] : M0[31:24] */
        unsigned int  reserved  : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_TXDS_M0_3_UNION;
#define SOC_HDMI_TXDS_M0_3_m0_31_24__START  (0)
#define SOC_HDMI_TXDS_M0_3_m0_31_24__END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_TXDS_M0_4_UNION
 �ṹ˵��  : TXDS_M0_4 �Ĵ����ṹ���塣��ַƫ����:0x350����ֵ:0x00000000�����:32
 �Ĵ���˵��: HDCP SHA Repeater M0 Register #4
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  m0_39_32_ : 8;  /* bit[0-7] : M0[39:32] */
        unsigned int  reserved  : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_TXDS_M0_4_UNION;
#define SOC_HDMI_TXDS_M0_4_m0_39_32__START  (0)
#define SOC_HDMI_TXDS_M0_4_m0_39_32__END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_TXDS_M0_5_UNION
 �ṹ˵��  : TXDS_M0_5 �Ĵ����ṹ���塣��ַƫ����:0x354����ֵ:0x00000000�����:32
 �Ĵ���˵��: HDCP SHA Repeater M0 Register #5
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  m0_47_40_ : 8;  /* bit[0-7] : M0[47:40] */
        unsigned int  reserved  : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_TXDS_M0_5_UNION;
#define SOC_HDMI_TXDS_M0_5_m0_47_40__START  (0)
#define SOC_HDMI_TXDS_M0_5_m0_47_40__END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_TXDS_M0_6_UNION
 �ṹ˵��  : TXDS_M0_6 �Ĵ����ṹ���塣��ַƫ����:0x358����ֵ:0x00000000�����:32
 �Ĵ���˵��: HDCP SHA Repeater M0 Register #6
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  m0_55_48_ : 8;  /* bit[0-7] : M0[55:48] */
        unsigned int  reserved  : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_TXDS_M0_6_UNION;
#define SOC_HDMI_TXDS_M0_6_m0_55_48__START  (0)
#define SOC_HDMI_TXDS_M0_6_m0_55_48__END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_TXDS_M0_7_UNION
 �ṹ˵��  : TXDS_M0_7 �Ĵ����ṹ���塣��ַƫ����:0x35C����ֵ:0x00000000�����:32
 �Ĵ���˵��: HDCP SHA Repeater M0 Register #7
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  m0_63_56_ : 8;  /* bit[0-7] : M0[63:56] */
        unsigned int  reserved  : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_TXDS_M0_7_UNION;
#define SOC_HDMI_TXDS_M0_7_m0_63_56__START  (0)
#define SOC_HDMI_TXDS_M0_7_m0_63_56__END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_TXVH0_0_UNION
 �ṹ˵��  : TXVH0_0 �Ĵ����ṹ���塣��ַƫ����:0x360����ֵ:0x00000000�����:32
 �Ĵ���˵��: HDCP SHA Repeater V.H0 Register #0
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  v_h0_7_0_ : 8;  /* bit[0-7] : V_H0[7:0] */
        unsigned int  reserved  : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_TXVH0_0_UNION;
#define SOC_HDMI_TXVH0_0_v_h0_7_0__START  (0)
#define SOC_HDMI_TXVH0_0_v_h0_7_0__END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_TXVH0_1_UNION
 �ṹ˵��  : TXVH0_1 �Ĵ����ṹ���塣��ַƫ����:0x364����ֵ:0x00000000�����:32
 �Ĵ���˵��: HDCP SHA Repeater V.H0 Register #1
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  v_h0_15_8_ : 8;  /* bit[0-7] : V.H0[15:8] */
        unsigned int  reserved   : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_TXVH0_1_UNION;
#define SOC_HDMI_TXVH0_1_v_h0_15_8__START  (0)
#define SOC_HDMI_TXVH0_1_v_h0_15_8__END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_TXVH0_2_UNION
 �ṹ˵��  : TXVH0_2 �Ĵ����ṹ���塣��ַƫ����:0x368����ֵ:0x00000000�����:32
 �Ĵ���˵��: HDCP SHA Repeater V.H0 Register #2
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  v_h0_23_16_ : 8;  /* bit[0-7] : V.H0[23:16] */
        unsigned int  reserved    : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_TXVH0_2_UNION;
#define SOC_HDMI_TXVH0_2_v_h0_23_16__START  (0)
#define SOC_HDMI_TXVH0_2_v_h0_23_16__END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_TXVH0_3_UNION
 �ṹ˵��  : TXVH0_3 �Ĵ����ṹ���塣��ַƫ����:0x36C����ֵ:0x00000000�����:32
 �Ĵ���˵��: HDCP SHA Repeater V.H0 Register #3
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  v_h0_23_16_ : 8;  /* bit[0-7] : V.H0[23:16] */
        unsigned int  reserved    : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_TXVH0_3_UNION;
#define SOC_HDMI_TXVH0_3_v_h0_23_16__START  (0)
#define SOC_HDMI_TXVH0_3_v_h0_23_16__END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_TXVH1_0_UNION
 �ṹ˵��  : TXVH1_0 �Ĵ����ṹ���塣��ַƫ����:0x370����ֵ:0x00000000�����:32
 �Ĵ���˵��: HDCP SHA Repeater V.H1 Register #0
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  v_h1_7_0_ : 8;  /* bit[0-7] : V.H1[7:0] */
        unsigned int  reserved  : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_TXVH1_0_UNION;
#define SOC_HDMI_TXVH1_0_v_h1_7_0__START  (0)
#define SOC_HDMI_TXVH1_0_v_h1_7_0__END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_TXVH1_1_UNION
 �ṹ˵��  : TXVH1_1 �Ĵ����ṹ���塣��ַƫ����:0x374����ֵ:0x00000000�����:32
 �Ĵ���˵��: HDCP SHA Repeater V.H1 Register #1
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  v_h1_15_8_ : 8;  /* bit[0-7] : V.H1[15:8] */
        unsigned int  reserved   : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_TXVH1_1_UNION;
#define SOC_HDMI_TXVH1_1_v_h1_15_8__START  (0)
#define SOC_HDMI_TXVH1_1_v_h1_15_8__END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_TXVH1_2_UNION
 �ṹ˵��  : TXVH1_2 �Ĵ����ṹ���塣��ַƫ����:0x378����ֵ:0x00000000�����:32
 �Ĵ���˵��: HDCP SHA Repeater V.H1 Register #2
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  v_h1_23_16_ : 8;  /* bit[0-7] : V_H1[23:16] */
        unsigned int  reserved    : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_TXVH1_2_UNION;
#define SOC_HDMI_TXVH1_2_v_h1_23_16__START  (0)
#define SOC_HDMI_TXVH1_2_v_h1_23_16__END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_TXVH1_3_UNION
 �ṹ˵��  : TXVH1_3 �Ĵ����ṹ���塣��ַƫ����:0x37C����ֵ:0x00000000�����:32
 �Ĵ���˵��: HDCP SHA Repeater V.H1 Register #3
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  v_h1_31_24_ : 8;  /* bit[0-7] : V_H1[31:24] */
        unsigned int  reserved    : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_TXVH1_3_UNION;
#define SOC_HDMI_TXVH1_3_v_h1_31_24__START  (0)
#define SOC_HDMI_TXVH1_3_v_h1_31_24__END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_TXVH2_0_UNION
 �ṹ˵��  : TXVH2_0 �Ĵ����ṹ���塣��ַƫ����:0x380����ֵ:0x00000000�����:32
 �Ĵ���˵��: HDCP SHA Repeater V.H2 Register #0
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  v_h2_7_0_ : 8;  /* bit[0-7] : V.H2[7:0] */
        unsigned int  reserved  : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_TXVH2_0_UNION;
#define SOC_HDMI_TXVH2_0_v_h2_7_0__START  (0)
#define SOC_HDMI_TXVH2_0_v_h2_7_0__END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_TXVH2_1_UNION
 �ṹ˵��  : TXVH2_1 �Ĵ����ṹ���塣��ַƫ����:0x384����ֵ:0x00000000�����:32
 �Ĵ���˵��: HDCP SHA Repeater V.H2 Register #1
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  v_h2_15_8_ : 8;  /* bit[0-7] : V.H2[15:8] */
        unsigned int  reserved   : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_TXVH2_1_UNION;
#define SOC_HDMI_TXVH2_1_v_h2_15_8__START  (0)
#define SOC_HDMI_TXVH2_1_v_h2_15_8__END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_TXVH2_2_UNION
 �ṹ˵��  : TXVH2_2 �Ĵ����ṹ���塣��ַƫ����:0x388����ֵ:0x00000000�����:32
 �Ĵ���˵��: HDCP SHA Repeater V.H2 Register #2
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  v_h2_23_16_ : 8;  /* bit[0-7] : V.H2[23:16] */
        unsigned int  reserved    : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_TXVH2_2_UNION;
#define SOC_HDMI_TXVH2_2_v_h2_23_16__START  (0)
#define SOC_HDMI_TXVH2_2_v_h2_23_16__END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_TXVH2_3_UNION
 �ṹ˵��  : TXVH2_3 �Ĵ����ṹ���塣��ַƫ����:0x38C����ֵ:0x00000000�����:32
 �Ĵ���˵��: HDCP SHA Repeater V.H2 Register #3
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  v_h2_31_24_ : 8;  /* bit[0-7] : V.H2[31:24] */
        unsigned int  reserved    : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_TXVH2_3_UNION;
#define SOC_HDMI_TXVH2_3_v_h2_31_24__START  (0)
#define SOC_HDMI_TXVH2_3_v_h2_31_24__END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_TXVH3_0_UNION
 �ṹ˵��  : TXVH3_0 �Ĵ����ṹ���塣��ַƫ����:0x390����ֵ:0x00000000�����:32
 �Ĵ���˵��: HDCP SHA Repeater V.H3 Register #0
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  v_h3_7_0_ : 8;  /* bit[0-7] : V.H3[7:0] */
        unsigned int  reserved  : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_TXVH3_0_UNION;
#define SOC_HDMI_TXVH3_0_v_h3_7_0__START  (0)
#define SOC_HDMI_TXVH3_0_v_h3_7_0__END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_TXVH3_1_UNION
 �ṹ˵��  : TXVH3_1 �Ĵ����ṹ���塣��ַƫ����:0x394����ֵ:0x00000000�����:32
 �Ĵ���˵��: HDCP SHA Repeater V.H3 Register #1
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  v_h3_15_8_ : 8;  /* bit[0-7] : V.H3[15:8] */
        unsigned int  reserved   : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_TXVH3_1_UNION;
#define SOC_HDMI_TXVH3_1_v_h3_15_8__START  (0)
#define SOC_HDMI_TXVH3_1_v_h3_15_8__END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_TXVH3_2_UNION
 �ṹ˵��  : TXVH3_2 �Ĵ����ṹ���塣��ַƫ����:0x398����ֵ:0x00000000�����:32
 �Ĵ���˵��: HDCP SHA Repeater V.H3 Register #2
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  v_h3_23_16_ : 8;  /* bit[0-7] : V_H3[23:16] */
        unsigned int  reserved    : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_TXVH3_2_UNION;
#define SOC_HDMI_TXVH3_2_v_h3_23_16__START  (0)
#define SOC_HDMI_TXVH3_2_v_h3_23_16__END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_TXVH3_3_UNION
 �ṹ˵��  : TXVH3_3 �Ĵ����ṹ���塣��ַƫ����:0x39C����ֵ:0x00000000�����:32
 �Ĵ���˵��: HDCP SHA Repeater V.H3 Register #3
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  v_h3_31_24_ : 8;  /* bit[0-7] : V_H3[31:24] */
        unsigned int  reserved    : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_TXVH3_3_UNION;
#define SOC_HDMI_TXVH3_3_v_h3_31_24__START  (0)
#define SOC_HDMI_TXVH3_3_v_h3_31_24__END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_TXVH4_0_UNION
 �ṹ˵��  : TXVH4_0 �Ĵ����ṹ���塣��ַƫ����:0x3A0����ֵ:0x00000000�����:32
 �Ĵ���˵��: HDCP SHA Repeater V.H4 Register #0
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  v_h4_7_0_ : 8;  /* bit[0-7] : V.H4[7:0] */
        unsigned int  reserved  : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_TXVH4_0_UNION;
#define SOC_HDMI_TXVH4_0_v_h4_7_0__START  (0)
#define SOC_HDMI_TXVH4_0_v_h4_7_0__END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_TXVH4_1_UNION
 �ṹ˵��  : TXVH4_1 �Ĵ����ṹ���塣��ַƫ����:0x3A4����ֵ:0x00000000�����:32
 �Ĵ���˵��: HDCP SHA Repeater V.H4 Register #1
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  v_h4_15_8_ : 8;  /* bit[0-7] : V.H4[15:8] */
        unsigned int  reserved   : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_TXVH4_1_UNION;
#define SOC_HDMI_TXVH4_1_v_h4_15_8__START  (0)
#define SOC_HDMI_TXVH4_1_v_h4_15_8__END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_TXVH4_2_UNION
 �ṹ˵��  : TXVH4_2 �Ĵ����ṹ���塣��ַƫ����:0x3A8����ֵ:0x00000000�����:32
 �Ĵ���˵��: HDCP SHA Repeater V.H4 Register #2
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  v_h4_23_16_ : 8;  /* bit[0-7] : V.H4[23:16] */
        unsigned int  reserved    : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_TXVH4_2_UNION;
#define SOC_HDMI_TXVH4_2_v_h4_23_16__START  (0)
#define SOC_HDMI_TXVH4_2_v_h4_23_16__END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_TXVH4_3_UNION
 �ṹ˵��  : TXVH4_3 �Ĵ����ṹ���塣��ַƫ����:0x3AC����ֵ:0x00000000�����:32
 �Ĵ���˵��: HDCP SHA Repeater V.H4 Register #3
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  v_h4_31_24_ : 8;  /* bit[0-7] : V.H4[31:24] */
        unsigned int  reserved    : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_TXVH4_3_UNION;
#define SOC_HDMI_TXVH4_3_v_h4_31_24__START  (0)
#define SOC_HDMI_TXVH4_3_v_h4_31_24__END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_DDC_MAN_UNION
 �ṹ˵��  : DDC_MAN �Ĵ����ṹ���塣��ַƫ����:0x3B0����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDC I2C Manual Register
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  io_scl   : 1;  /* bit[0-0] : DDC SCL input state. */
        unsigned int  io_sda   : 1;  /* bit[1-1] : DDC SDA input state. */
        unsigned int  reserved_0: 2;  /* bit[2-3] : reserved */
        unsigned int  man_scl  : 1;  /* bit[4-4] : Manual SCL output. */
        unsigned int  man_sda  : 1;  /* bit[5-5] : Manual SDA output. */
        unsigned int  reserved_1: 1;  /* bit[6-6] : reserved */
        unsigned int  man_ovr  : 1;  /* bit[7-7] : Manual Override of SCL and SDA output:
                                                   0 = Normal operation
                                                   1 = Override port with MAN_SCL and MAN_SDA states */
        unsigned int  reserved_2: 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_DDC_MAN_UNION;
#define SOC_HDMI_DDC_MAN_io_scl_START    (0)
#define SOC_HDMI_DDC_MAN_io_scl_END      (0)
#define SOC_HDMI_DDC_MAN_io_sda_START    (1)
#define SOC_HDMI_DDC_MAN_io_sda_END      (1)
#define SOC_HDMI_DDC_MAN_man_scl_START   (4)
#define SOC_HDMI_DDC_MAN_man_scl_END     (4)
#define SOC_HDMI_DDC_MAN_man_sda_START   (5)
#define SOC_HDMI_DDC_MAN_man_sda_END     (5)
#define SOC_HDMI_DDC_MAN_man_ovr_START   (7)
#define SOC_HDMI_DDC_MAN_man_ovr_END     (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_DDC_ADDR_UNION
 �ṹ˵��  : DDC_ADDR �Ĵ����ṹ���塣��ַƫ����:0x3B4����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDC I2C Target Slave Address Register
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved_0: 1;  /* bit[0-0] :  */
        unsigned int  ddc_addr : 7;  /* bit[1-7] : DDC device address */
        unsigned int  reserved_1: 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_DDC_ADDR_UNION;
#define SOC_HDMI_DDC_ADDR_ddc_addr_START  (1)
#define SOC_HDMI_DDC_ADDR_ddc_addr_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_DDC_SEGM_UNION
 �ṹ˵��  : DDC_SEGM �Ĵ����ṹ���塣��ַƫ����:0x3B8����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDC I2C Target Segment Address Register
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ddc_segm : 8;  /* bit[0-7] : DDC segment address */
        unsigned int  reserved : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_DDC_SEGM_UNION;
#define SOC_HDMI_DDC_SEGM_ddc_segm_START  (0)
#define SOC_HDMI_DDC_SEGM_ddc_segm_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_DDC_OFFSET_UNION
 �ṹ˵��  : DDC_OFFSET �Ĵ����ṹ���塣��ַƫ����:0x3BC����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDC I2C Target Offset Address Register
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ddc_offset : 8;  /* bit[0-7] : DDC offset address */
        unsigned int  reserved   : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_DDC_OFFSET_UNION;
#define SOC_HDMI_DDC_OFFSET_ddc_offset_START  (0)
#define SOC_HDMI_DDC_OFFSET_ddc_offset_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_DDC_COUNT1_UNION
 �ṹ˵��  : DDC_COUNT1 �Ĵ����ṹ���塣��ַƫ����:0x3C0����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDC I2C Data Count Register1
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ddc_count_7_0_ : 8;  /* bit[0-7] : DDC_COUNT[7:0] */
        unsigned int  reserved       : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_DDC_COUNT1_UNION;
#define SOC_HDMI_DDC_COUNT1_ddc_count_7_0__START  (0)
#define SOC_HDMI_DDC_COUNT1_ddc_count_7_0__END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_DDC_COUNT2_UNION
 �ṹ˵��  : DDC_COUNT2 �Ĵ����ṹ���塣��ַƫ����:0x3C4����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDC I2C Data Count Register2
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ddc_count_9_8_ : 2;  /* bit[0-1] : DDC_COUNT[9:8]
                                                         The total number of bytes to be read from the slave or written to the slave before a Stop bit is sent on the DDC bus. For example, if the HDCP KSV FIFO length is 635 bytes (127 devices x 5 bytes/KSV), the DDC_COUNT must be 0x27B. */
        unsigned int  reserved_0     : 6;  /* bit[2-7] : reserved */
        unsigned int  reserved_1     : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_DDC_COUNT2_UNION;
#define SOC_HDMI_DDC_COUNT2_ddc_count_9_8__START  (0)
#define SOC_HDMI_DDC_COUNT2_ddc_count_9_8__END    (1)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_DDC_STATUS_UNION
 �ṹ˵��  : DDC_STATUS �Ĵ����ṹ���塣��ַƫ����:0x3C8����ֵ:0x00000004�����:32
 �Ĵ���˵��: DDC I2C Status Register
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  fwt_use    : 1;  /* bit[0-0] : 1 = DDC FIFO Write In Use */
        unsigned int  frd_use    : 1;  /* bit[1-1] : 1 = DDC FIFO Read In Use */
        unsigned int  fifo_emp   : 1;  /* bit[2-2] : 1 = DDC FIFO Empty */
        unsigned int  fifo_full  : 1;  /* bit[3-3] : 1 = DDC FIFO Full */
        unsigned int  in_prog    : 1;  /* bit[4-4] : 1 = DDC operation in progress */
        unsigned int  no_ack     : 1;  /* bit[5-5] : 1 = HDMI Transmitter did not receive an ACK from slave device during address or data write */
        unsigned int  bus_low    : 1;  /* bit[6-6] : 1 = I2C transaction did not start because I2C bus is pulled LOW by an external device */
        unsigned int  reserved_0 : 1;  /* bit[7-7] : reserved */
        unsigned int  reserved_1 : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_DDC_STATUS_UNION;
#define SOC_HDMI_DDC_STATUS_fwt_use_START     (0)
#define SOC_HDMI_DDC_STATUS_fwt_use_END       (0)
#define SOC_HDMI_DDC_STATUS_frd_use_START     (1)
#define SOC_HDMI_DDC_STATUS_frd_use_END       (1)
#define SOC_HDMI_DDC_STATUS_fifo_emp_START    (2)
#define SOC_HDMI_DDC_STATUS_fifo_emp_END      (2)
#define SOC_HDMI_DDC_STATUS_fifo_full_START   (3)
#define SOC_HDMI_DDC_STATUS_fifo_full_END     (3)
#define SOC_HDMI_DDC_STATUS_in_prog_START     (4)
#define SOC_HDMI_DDC_STATUS_in_prog_END       (4)
#define SOC_HDMI_DDC_STATUS_no_ack_START      (5)
#define SOC_HDMI_DDC_STATUS_no_ack_END        (5)
#define SOC_HDMI_DDC_STATUS_bus_low_START     (6)
#define SOC_HDMI_DDC_STATUS_bus_low_END       (6)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_DDC_CMD_UNION
 �ṹ˵��  : DDC_CMD �Ĵ����ṹ���塣��ַƫ����:0x3CC����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDC I2C Command Register
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ddc_cmd    : 4;  /* bit[0-3] : DDC command:
                                                     0b1111 = Abort Transaction
                                                     0b1001 = Clear FIFO
                                                     0b1010 = Clock SCL
                                                     0b0000 = Current Address Read with no ACK on last byte
                                                     0b0010 = Sequential Read with no ACK on last byte
                                                     0b0100 = Enhanced DDC Read with no ACK on last byte
                                                     0b0110 = Sequential Write ignoring ACK on last byte
                                                     0b0111 = Sequential Write requiring ACK on last byte
                                                     Writing to this register immediately initiates the I2C transaction on the DDC bus.
                                                     Note: The Clear FIFO command resets the FIFO read and write pointers to zero. Data formerly loaded into the FIFO cannot be re-read after a
                                                     Clear FIFO, as the FIFO will be empty. Other command codes are reserved and may cause the DDC bus to hang if used.
                                                     The Clock SCL command resets any I2C devices on the DDC lines. This should be initiated once before initiating the DDC commands. */
        unsigned int  sda_del_en : 1;  /* bit[4-4] : Enable 3ns glitch filtering on the DDC clock and data line:
                                                     0 = Enabled
                                                     1 = Disabled
                                                     Filtering is done using a Ring Oscillator. */
        unsigned int  ddc_flt_en : 1;  /* bit[5-5] : Enable the DDC delay:
                                                     0 = Enabled
                                                     1 = Disabled
                                                     A DDC delay is inserted into the SDA line to create a 300ns delay for the falling edge of the DDC SDA signal to avoid an erroneous I2C START
                                                     condition. The real start condition must have a setup time of 600ns so that this delay of 300ns does not remove the real START condition.
                                                     Filtering is done using a Ring Oscillator. */
        unsigned int  reserved_0 : 2;  /* bit[6-7] : reserved */
        unsigned int  reserved_1 : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_DDC_CMD_UNION;
#define SOC_HDMI_DDC_CMD_ddc_cmd_START     (0)
#define SOC_HDMI_DDC_CMD_ddc_cmd_END       (3)
#define SOC_HDMI_DDC_CMD_sda_del_en_START  (4)
#define SOC_HDMI_DDC_CMD_sda_del_en_END    (4)
#define SOC_HDMI_DDC_CMD_ddc_flt_en_START  (5)
#define SOC_HDMI_DDC_CMD_ddc_flt_en_END    (5)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_DDC_DATA_UNION
 �ṹ˵��  : DDC_DATA �Ĵ����ṹ���塣��ַƫ����:0x3D0����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDC I2C Data Register
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ddc_data : 8;  /* bit[0-7] : DDC data input. */
        unsigned int  reserved : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_DDC_DATA_UNION;
#define SOC_HDMI_DDC_DATA_ddc_data_START  (0)
#define SOC_HDMI_DDC_DATA_ddc_data_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_DDC_FIFOCNT_UNION
 �ṹ˵��  : DDC_FIFOCNT �Ĵ����ṹ���塣��ַƫ����:0x3D4����ֵ:0x00000000�����:32
 �Ĵ���˵��: DDC I2C FIFO Count Register
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ddc_fifocnt : 5;  /* bit[0-4] : FIFO data byte count (the number of bytes in the FIFO).
                                                      The DDC FIFO size is 16. The maximum value for
                                                      DDC_FIFOCNT is 0x10. */
        unsigned int  reserved_0  : 3;  /* bit[5-7] : reserved */
        unsigned int  reserved_1  : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_DDC_FIFOCNT_UNION;
#define SOC_HDMI_DDC_FIFOCNT_ddc_fifocnt_START  (0)
#define SOC_HDMI_DDC_FIFOCNT_ddc_fifocnt_END    (4)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_EPST_UNION
 �ṹ˵��  : EPST �Ĵ����ṹ���塣��ַƫ����:0x3E4����ֵ:0xX�����:32
 �Ĵ���˵��: ROM Status Register
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cmdd      : 1;  /* bit[0-0] : 1 = Command Done (last operation completed) */
        unsigned int  crc_err   : 1;  /* bit[1-1] : 1 = CRC error */
        unsigned int  reserved_0: 3;  /* bit[2-4] : reserved */
        unsigned int  bist1_err : 1;  /* bit[5-5] : 1 = BIST self authentication test 1 error */
        unsigned int  bist2_err : 1;  /* bit[6-6] : 1 = BIST self authentication test 2 error */
        unsigned int  reserved_1: 1;  /* bit[7-7] : reserved */
        unsigned int  reserved_2: 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_EPST_UNION;
#define SOC_HDMI_EPST_cmdd_START       (0)
#define SOC_HDMI_EPST_cmdd_END         (0)
#define SOC_HDMI_EPST_crc_err_START    (1)
#define SOC_HDMI_EPST_crc_err_END      (1)
#define SOC_HDMI_EPST_bist1_err_START  (5)
#define SOC_HDMI_EPST_bist1_err_END    (5)
#define SOC_HDMI_EPST_bist2_err_START  (6)
#define SOC_HDMI_EPST_bist2_err_END    (6)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_EPCM_UNION
 �ṹ˵��  : EPCM �Ĵ����ṹ���塣��ַƫ����:0x3E8����ֵ:0xX�����:32
 �Ĵ���˵��: ROM Command Register
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  epcm     : 5;  /* bit[0-4] : Command:
                                                   0b00011 = Run all BIST tests
                                                   0b00100 = Run only CRC test
                                                   0b01000 = Run only BIST self authentication test 1
                                                   0b10000 = Run only BIST self authentication test 2
                                                   All other values are reserved.
                                                   Before writing a new value into this register, verify that the previous command is complete by checking the 0x72.0xF9[0] register. */
        unsigned int  ld_ksv   : 1;  /* bit[5-5] : 1 = Enable loading of KSV from OTP
                                                   Write 0 before enabling again. */
        unsigned int  reserved_0: 2;  /* bit[6-7] : reserved */
        unsigned int  reserved_1: 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_EPCM_UNION;
#define SOC_HDMI_EPCM_epcm_START      (0)
#define SOC_HDMI_EPCM_epcm_END        (4)
#define SOC_HDMI_EPCM_ld_ksv_START    (5)
#define SOC_HDMI_EPCM_ld_ksv_END      (5)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_ACR_CTRL_UNION
 �ṹ˵��  : ACR_CTRL �Ĵ����ṹ���塣��ַƫ����:0x400+0x004����ֵ:0x00000006�����:32
 �Ĵ���˵��: ACR Control Register
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cts_sel    : 1;  /* bit[0-0] : CTS Source Select:
                                                     0 = Send HW-updated CTS value in N/CTS packet (recommended)
                                                     1 = Send SW-updated CTS value in N/CTS packet (for diagnostic use)
                                                     This bit must also be set if MCLK is disabled when using the parallel audio I/F.
                                                     Silicon Image recommends the utilization of a MCLK and not set this bit to 1. */
        unsigned int  nctspkt_en : 1;  /* bit[1-1] : CTS Request Enable:
                                                     0 = N/CTS packet disabled
                                                     1 = N/CTS packet enabled */
        unsigned int  mclk_en    : 1;  /* bit[2-2] : 1: Enable the MCLK input
                                                     0: Disable the MCLK input
                                                     In case of parallel audio I/F, the audio path can be operated without MCLK. Data rate adjustment is then done via TCLK and ACR at the Rx via programmed CTS values. TCLK must be stable enough to ensure audio output quality according to HDMI 1.3 Specification.
                                                     SIMG disclaims any responsibility on audio output quality at the Rx if MCLK is disabled. */
        unsigned int  reserved_0 : 5;  /* bit[3-7] : reserved */
        unsigned int  reserved_1 : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_ACR_CTRL_UNION;
#define SOC_HDMI_ACR_CTRL_cts_sel_START     (0)
#define SOC_HDMI_ACR_CTRL_cts_sel_END       (0)
#define SOC_HDMI_ACR_CTRL_nctspkt_en_START  (1)
#define SOC_HDMI_ACR_CTRL_nctspkt_en_END    (1)
#define SOC_HDMI_ACR_CTRL_mclk_en_START     (2)
#define SOC_HDMI_ACR_CTRL_mclk_en_END       (2)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_FREQ_SVAL_UNION
 �ṹ˵��  : FREQ_SVAL �Ĵ����ṹ���塣��ַƫ����:0x400+0x008����ֵ:0x00000001�����:32
 �Ĵ���˵��: ACR Audio Frequency Register
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mclk_conf : 3;  /* bit[0-2] : MCLK input mode:
                                                    0b000 = MCLK is 128*Fs
                                                    0b001 = MCLK is 256*Fs
                                                    0b010 = MCLK is 384*Fs
                                                    0b011 = MCLK is 512*Fs
                                                    0b100 = MCLK is 768*Fs
                                                    0b101 = MCLK is 1024*Fs
                                                    0b110 = MCLK is 1152*Fs
                                                    0b111 = MCLK is 192*Fs
                                                    The HDMI Transmitter uses these bits to divide the MCLK input to produce CTS values according to the 128*Fs formula. The MCLK to Fs ratio is for the input Fs, not the down-sampled output Fs (see the ASRC register (0x7A:0x23), on page 64). */
        unsigned int  reserved_0: 5;  /* bit[3-7] : reserved */
        unsigned int  reserved_1: 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_FREQ_SVAL_UNION;
#define SOC_HDMI_FREQ_SVAL_mclk_conf_START  (0)
#define SOC_HDMI_FREQ_SVAL_mclk_conf_END    (2)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_N_SVAL1_UNION
 �ṹ˵��  : N_SVAL1 �Ĵ����ṹ���塣��ַƫ����:0x400+0x00C����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACR N Software Value Register1
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  n_sval_7_0_ : 8;  /* bit[0-7] : N_SVAL[7:0]
                                                      N Value for audio clock regeneration method; a 20-bit value.
                                                      This must be written to the registers to create the correct divisor for audio clock regeneration. Only values greater than 0 are valid. This register must be written after a
                                                      hardware reset. */
        unsigned int  reserved    : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_N_SVAL1_UNION;
#define SOC_HDMI_N_SVAL1_n_sval_7_0__START  (0)
#define SOC_HDMI_N_SVAL1_n_sval_7_0__END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_N_SVAL2_UNION
 �ṹ˵��  : N_SVAL2 �Ĵ����ṹ���塣��ַƫ����:0x400+0x010����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACR N Software Value Register2
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  n_sval_15_8_ : 8;  /* bit[0-7] : N_SVAL[15:8] */
        unsigned int  reserved     : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_N_SVAL2_UNION;
#define SOC_HDMI_N_SVAL2_n_sval_15_8__START  (0)
#define SOC_HDMI_N_SVAL2_n_sval_15_8__END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_N_SVAL3_UNION
 �ṹ˵��  : N_SVAL3 �Ĵ����ṹ���塣��ַƫ����:0x400+0x014����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACR N Software Value Register3
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  n_sval_19_16_ : 4;  /* bit[0-3] : N_SVAL[19:16] */
        unsigned int  reserved_0    : 4;  /* bit[4-7] : reserved */
        unsigned int  reserved_1    : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_N_SVAL3_UNION;
#define SOC_HDMI_N_SVAL3_n_sval_19_16__START  (0)
#define SOC_HDMI_N_SVAL3_n_sval_19_16__END    (3)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_CTS_SVAL1_UNION
 �ṹ˵��  : CTS_SVAL1 �Ĵ����ṹ���塣��ַƫ����:0x400+0x018����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACR CTS Software Value Register1
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cts_sval_7_0_ : 8;  /* bit[0-7] : CTS_SVAL[7:0]
                                                        CTS Value for audio clock regeneration method; a 20-bit value. For diagnostic use and applied only when the CTS_SEL bit (0x7A:0x01[0]) is set to 1.
                                                        In case of parallel audio I/F, the audio path can be operated without MCLK. Data rate adjustment is then done via TCLK and ACR at the
                                                        Rx via programmed CTS values. TCLK must be stable enough to ensure audio output quality according to HDMI 1.3 Specification.
                                                        SIMG disclaims any responsibility on audio output quality at the Rx if MCLK is disabled. */
        unsigned int  reserved      : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_CTS_SVAL1_UNION;
#define SOC_HDMI_CTS_SVAL1_cts_sval_7_0__START  (0)
#define SOC_HDMI_CTS_SVAL1_cts_sval_7_0__END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_CTS_SVAL2_UNION
 �ṹ˵��  : CTS_SVAL2 �Ĵ����ṹ���塣��ַƫ����:0x400+0x01C����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACR CTS Software Value Register2
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cts_sval_15_8_ : 8;  /* bit[0-7] : CTS_SVAL[15:8] */
        unsigned int  reserved       : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_CTS_SVAL2_UNION;
#define SOC_HDMI_CTS_SVAL2_cts_sval_15_8__START  (0)
#define SOC_HDMI_CTS_SVAL2_cts_sval_15_8__END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_CTS_SVAL3_UNION
 �ṹ˵��  : CTS_SVAL3 �Ĵ����ṹ���塣��ַƫ����:0x400+0x020����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACR CTS Software Value Register3
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cts_sval_19_16_ : 4;  /* bit[0-3] : CTS_SVAL[19:16] */
        unsigned int  reserved_0      : 4;  /* bit[4-7] : reserved */
        unsigned int  reserved_1      : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_CTS_SVAL3_UNION;
#define SOC_HDMI_CTS_SVAL3_cts_sval_19_16__START  (0)
#define SOC_HDMI_CTS_SVAL3_cts_sval_19_16__END    (3)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_CTS_HVAL1_UNION
 �ṹ˵��  : CTS_HVAL1 �Ĵ����ṹ���塣��ַƫ����:0x400+0x024����ֵ:0xX�����:32
 �Ĵ���˵��: ACR CTS Hardware Value Register1
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cts_hval_7_0_ : 8;  /* bit[0-7] : CTS_HVAL[7:0]
                                                        CTS Value for audio clock regeneration method; a 20-bit value. This value is measured and stored here by the hardware when MCLK is active and N is valid, after 128Fs/N cycles of MCLK. */
        unsigned int  reserved      : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_CTS_HVAL1_UNION;
#define SOC_HDMI_CTS_HVAL1_cts_hval_7_0__START  (0)
#define SOC_HDMI_CTS_HVAL1_cts_hval_7_0__END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_CTS_HVAL2_UNION
 �ṹ˵��  : CTS_HVAL2 �Ĵ����ṹ���塣��ַƫ����:0x400+0x028����ֵ:0xX�����:32
 �Ĵ���˵��: ACR CTS Hardware Value Register2
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cts_hval_15_8_ : 8;  /* bit[0-7] : CTS_HVAL[15:8] */
        unsigned int  reserved       : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_CTS_HVAL2_UNION;
#define SOC_HDMI_CTS_HVAL2_cts_hval_15_8__START  (0)
#define SOC_HDMI_CTS_HVAL2_cts_hval_15_8__END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_CTS_HVAL3_UNION
 �ṹ˵��  : CTS_HVAL3 �Ĵ����ṹ���塣��ַƫ����:0x400+0x02C����ֵ:0xX�����:32
 �Ĵ���˵��: ACR CTS Hardware Value Register3
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cts_hval_19_16_ : 4;  /* bit[0-3] : CTS_HVAL[19:16] */
        unsigned int  reserved_0      : 4;  /* bit[4-7] : reserved */
        unsigned int  reserved_1      : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_CTS_HVAL3_UNION;
#define SOC_HDMI_CTS_HVAL3_cts_hval_19_16__START  (0)
#define SOC_HDMI_CTS_HVAL3_cts_hval_19_16__END    (3)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_AUD_MODE_UNION
 �ṹ˵��  : AUD_MODE �Ĵ����ṹ���塣��ַƫ����:0x400+0x050����ֵ:0x00000000�����:32
 �Ĵ���˵��: Audio In Mode Register
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  aud_en     : 1;  /* bit[0-0] : Audio input stream enable:
                                                     0 = Disabled
                                                     1 = Enabled */
        unsigned int  spdif_en   : 1;  /* bit[1-1] : S/PDIF input stream enable:
                                                     0 = Disabled
                                                     1 = Enabled */
        unsigned int  aud_par_en : 1;  /* bit[2-2] : 0: Parallel audio input disabled
                                                     1: Parallel audio input enabled */
        unsigned int  dsd_en     : 1;  /* bit[3-3] : Direct Stream Digital Audio enable:
                                                     0 = Disable
                                                     1 = Enable */
        unsigned int  sd0_en     : 1;  /* bit[4-4] : I2S input channel #0:
                                                     0 = Disable
                                                     1 = Enable */
        unsigned int  sd1_en     : 1;  /* bit[5-5] : I2S input channel #1:
                                                     0 = Disable
                                                     1 = Enable */
        unsigned int  sd2_en     : 1;  /* bit[6-6] : I2S input channel #2:
                                                     0 = Disable
                                                     1 = Enable */
        unsigned int  sd3_en     : 1;  /* bit[7-7] : I2S input channel #3:
                                                     0 = Disable
                                                     1 = Enable */
        unsigned int  reserved   : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_AUD_MODE_UNION;
#define SOC_HDMI_AUD_MODE_aud_en_START      (0)
#define SOC_HDMI_AUD_MODE_aud_en_END        (0)
#define SOC_HDMI_AUD_MODE_spdif_en_START    (1)
#define SOC_HDMI_AUD_MODE_spdif_en_END      (1)
#define SOC_HDMI_AUD_MODE_aud_par_en_START  (2)
#define SOC_HDMI_AUD_MODE_aud_par_en_END    (2)
#define SOC_HDMI_AUD_MODE_dsd_en_START      (3)
#define SOC_HDMI_AUD_MODE_dsd_en_END        (3)
#define SOC_HDMI_AUD_MODE_sd0_en_START      (4)
#define SOC_HDMI_AUD_MODE_sd0_en_END        (4)
#define SOC_HDMI_AUD_MODE_sd1_en_START      (5)
#define SOC_HDMI_AUD_MODE_sd1_en_END        (5)
#define SOC_HDMI_AUD_MODE_sd2_en_START      (6)
#define SOC_HDMI_AUD_MODE_sd2_en_END        (6)
#define SOC_HDMI_AUD_MODE_sd3_en_START      (7)
#define SOC_HDMI_AUD_MODE_sd3_en_END        (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_SPDIF_CTRL_UNION
 �ṹ˵��  : SPDIF_CTRL �Ĵ����ṹ���塣��ַƫ����:0x400+0x054����ֵ:0x00000000�����:32
 �Ĵ���˵��: Audio In S/PDIF Control Register
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved_0  : 1;  /* bit[0-0] : reserved */
        unsigned int  fs_override : 1;  /* bit[1-1] : S/PDIF input stream override:
                                                      0 = Use input S/PDIF stream��s detected FS
                                                      1 = Use software FS in I2S_CHST4 register (0x7A:0x21)
                                                      NOTE: Set this register always if software FS shall be used (e.g. for I2S). If the parallel audio I/F is enabled, this register must always be set. */
        unsigned int  reserved_1  : 1;  /* bit[2-2] : reserved */
        unsigned int  noaudio     : 1;  /* bit[3-3] : No S/PDIF audio:
                                                      1 = No change detected on the S/PDIF input
                                                      0 = Detected change on the S/PDIF input */
        unsigned int  reserved_2  : 4;  /* bit[4-7] : reserved */
        unsigned int  reserved_3  : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_SPDIF_CTRL_UNION;
#define SOC_HDMI_SPDIF_CTRL_fs_override_START  (1)
#define SOC_HDMI_SPDIF_CTRL_fs_override_END    (1)
#define SOC_HDMI_SPDIF_CTRL_noaudio_START      (3)
#define SOC_HDMI_SPDIF_CTRL_noaudio_END        (3)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_HW_SPDIF_FS_UNION
 �ṹ˵��  : HW_SPDIF_FS �Ĵ����ṹ���塣��ַƫ����:0x400+0x060����ֵ:0x00000000�����:32
 �Ĵ���˵��: Audio In S/PDIF Extracted Fs and Length Register
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  hw_spdif_fs  : 4;  /* bit[0-3] : Set to the FS extracted from the S/PDIF input channel status bits 24-27. */
        unsigned int  hw_maxlen    : 1;  /* bit[4-4] : Maximum sample length (channel status bit 32):
                                                       1 = Maximum sample length is 24 bits
                                                       0 = Maximum sample length is 20 bits */
        unsigned int  hw_spdif_len : 3;  /* bit[5-7] : Channel status bits 33 to 35 (bit 33=LSB, bit 35=MSB) */
        unsigned int  reserved     : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_HW_SPDIF_FS_UNION;
#define SOC_HDMI_HW_SPDIF_FS_hw_spdif_fs_START   (0)
#define SOC_HDMI_HW_SPDIF_FS_hw_spdif_fs_END     (3)
#define SOC_HDMI_HW_SPDIF_FS_hw_maxlen_START     (4)
#define SOC_HDMI_HW_SPDIF_FS_hw_maxlen_END       (4)
#define SOC_HDMI_HW_SPDIF_FS_hw_spdif_len_START  (5)
#define SOC_HDMI_HW_SPDIF_FS_hw_spdif_len_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_SWAP_I2S_UNION
 �ṹ˵��  : SWAP_I2S �Ĵ����ṹ���塣��ַƫ����:0x400+0x064����ֵ:0x00000009�����:32
 �Ĵ���˵��: Audio In I2S Channel Swap Register
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved_0: 4;  /* bit[0-3] : reserved */
        unsigned int  swch0    : 1;  /* bit[4-4] : Swap left-right channels for I2S Channel 0. */
        unsigned int  swch1    : 1;  /* bit[5-5] : Swap left-right channels for I2S Channel 1. */
        unsigned int  swch2    : 1;  /* bit[6-6] : Swap left-right channels for I2S Channel 2. */
        unsigned int  swch3    : 1;  /* bit[7-7] : Swap left-right channels for I2S Channel 3:
                                                   0 = Do not swap left and right
                                                   1 = Swap left and right */
        unsigned int  reserved_1: 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_SWAP_I2S_UNION;
#define SOC_HDMI_SWAP_I2S_swch0_START     (4)
#define SOC_HDMI_SWAP_I2S_swch0_END       (4)
#define SOC_HDMI_SWAP_I2S_swch1_START     (5)
#define SOC_HDMI_SWAP_I2S_swch1_END       (5)
#define SOC_HDMI_SWAP_I2S_swch2_START     (6)
#define SOC_HDMI_SWAP_I2S_swch2_END       (6)
#define SOC_HDMI_SWAP_I2S_swch3_START     (7)
#define SOC_HDMI_SWAP_I2S_swch3_END       (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_SPDIF_ERTH_UNION
 �ṹ˵��  : SPDIF_ERTH �Ĵ����ṹ���塣��ַƫ����:0x400+0x06C����ֵ:0x00000008�����:32
 �Ĵ���˵��: Audio Error Threshold Register
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  aud_err_thresh : 6;  /* bit[0-5] : Specifies the error threshold level. The frame is marked as invalid if the number of bi-phase mark encoding errors in the audio stream exceeds this threshold level during frame decoding. */
        unsigned int  reserved_0     : 1;  /* bit[6-6] : reserved */
        unsigned int  reserved_1     : 1;  /* bit[7-7] : reserved */
        unsigned int  reserved_2     : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_SPDIF_ERTH_UNION;
#define SOC_HDMI_SPDIF_ERTH_aud_err_thresh_START  (0)
#define SOC_HDMI_SPDIF_ERTH_aud_err_thresh_END    (5)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_I2S_IN_MAP_UNION
 �ṹ˵��  : I2S_IN_MAP �Ĵ����ṹ���塣��ַƫ����:0x400+0x070����ֵ:0x000000E4�����:32
 �Ĵ���˵��: Audio In I2S Data In Map Register
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  fifo0_map : 2;  /* bit[0-1] : Channel map to FIFO #0 (for HDMI Layout 0 or 1):
                                                    0b00 = Map SD0 to FIFO #0
                                                    0b01 = Map SD1 to FIFO #0
                                                    0b10 = Map SD2 to FIFO #0
                                                    0b11 = Map SD3 to FIFO #0 */
        unsigned int  fifo1_map : 2;  /* bit[2-3] : Channel map to FIFO #1 (for HDMI Layout 1):
                                                    0b00 = Map SD0 to FIFO #1
                                                    0b01 = Map SD1 to FIFO #1
                                                    0b10 = Map SD2 to FIFO #1
                                                    0b11 = Map SD3 to FIFO #1 */
        unsigned int  fifo2_map : 2;  /* bit[4-5] : Channel map to FIFO #2 (for HDMI Layout 1):
                                                    0b00 = Map SD0 to FIFO #2
                                                    0b01 = Map SD1 to FIFO #2
                                                    0b10 = Map SD2 to FIFO #2
                                                    0b11 = Map SD3 to FIFO #2 */
        unsigned int  fifo3_map : 2;  /* bit[6-7] : Channel map to FIFO #3 (for HDMI Layout 1):
                                                    0b00 = Map SD0 to FIFO #3
                                                    0b01 = Map SD1 to FIFO #3
                                                    0b10 = Map SD2 to FIFO #3
                                                    0b11 = Map SD3 to FIFO #3 */
        unsigned int  reserved  : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_I2S_IN_MAP_UNION;
#define SOC_HDMI_I2S_IN_MAP_fifo0_map_START  (0)
#define SOC_HDMI_I2S_IN_MAP_fifo0_map_END    (1)
#define SOC_HDMI_I2S_IN_MAP_fifo1_map_START  (2)
#define SOC_HDMI_I2S_IN_MAP_fifo1_map_END    (3)
#define SOC_HDMI_I2S_IN_MAP_fifo2_map_START  (4)
#define SOC_HDMI_I2S_IN_MAP_fifo2_map_END    (5)
#define SOC_HDMI_I2S_IN_MAP_fifo3_map_START  (6)
#define SOC_HDMI_I2S_IN_MAP_fifo3_map_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_I2S_IN_CTRL_UNION
 �ṹ˵��  : I2S_IN_CTRL �Ĵ����ṹ���塣��ַƫ����:0x400+0x074����ֵ:0x00000045�����:32
 �Ĵ���˵��: Audio In I2S Control Register
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  i2s_shift  : 1;  /* bit[0-0] : WS to SD first bit shift:
                                                     0 = First bit shift (refer to the Philips Specification)
                                                     1 = No shift */
        unsigned int  i2s_dir    : 1;  /* bit[1-1] : SD direction:
                                                     0 = MSB shifted first
                                                     1 = LSB shifted first */
        unsigned int  i2s_just   : 1;  /* bit[2-2] : SD justify:
                                                     0 = Data is left-justified
                                                     1 = Data is right-justified */
        unsigned int  i2s_ws     : 1;  /* bit[3-3] : WS polarity:
                                                     0 = Left polarity when WS is LOW
                                                     1 = Left polarity when WS is HIGH */
        unsigned int  vbit       : 1;  /* bit[4-4] : V bit value
                                                     0 = PCM
                                                     1 = Compressed */
        unsigned int  cbit_order : 1;  /* bit[5-5] : This bit should be set to 1 for High Bit Rate Audio */
        unsigned int  sck_edge   : 1;  /* bit[6-6] : SCK sample edge:
                                                     0 = Sample edge is falling; SD3-SD0 and WS source should change state on the rising edge of SCK
                                                     1 = Sample clock is rising; SD3-SD0 and WS source should change state on the falling edge of SCK */
        unsigned int  hbra_on    : 1;  /* bit[7-7] : High Bit Rate Audio On
                                                     0 = Input stream is not high bit rate
                                                     1 = Input stream is high bit rate. All of the I2S control bits will apply to the control of the High Bit Rate Audio. */
        unsigned int  reserved   : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_I2S_IN_CTRL_UNION;
#define SOC_HDMI_I2S_IN_CTRL_i2s_shift_START   (0)
#define SOC_HDMI_I2S_IN_CTRL_i2s_shift_END     (0)
#define SOC_HDMI_I2S_IN_CTRL_i2s_dir_START     (1)
#define SOC_HDMI_I2S_IN_CTRL_i2s_dir_END       (1)
#define SOC_HDMI_I2S_IN_CTRL_i2s_just_START    (2)
#define SOC_HDMI_I2S_IN_CTRL_i2s_just_END      (2)
#define SOC_HDMI_I2S_IN_CTRL_i2s_ws_START      (3)
#define SOC_HDMI_I2S_IN_CTRL_i2s_ws_END        (3)
#define SOC_HDMI_I2S_IN_CTRL_vbit_START        (4)
#define SOC_HDMI_I2S_IN_CTRL_vbit_END          (4)
#define SOC_HDMI_I2S_IN_CTRL_cbit_order_START  (5)
#define SOC_HDMI_I2S_IN_CTRL_cbit_order_END    (5)
#define SOC_HDMI_I2S_IN_CTRL_sck_edge_START    (6)
#define SOC_HDMI_I2S_IN_CTRL_sck_edge_END      (6)
#define SOC_HDMI_I2S_IN_CTRL_hbra_on_START     (7)
#define SOC_HDMI_I2S_IN_CTRL_hbra_on_END       (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_I2S_CHST0_UNION
 �ṹ˵��  : I2S_CHST0 �Ĵ����ṹ���塣��ַƫ����:0x400+0x078����ֵ:0x00000000�����:32
 �Ĵ���˵��: Audio In I2S Channel Status Register1
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cbit0    : 1;  /* bit[0-0] :  */
        unsigned int  cbit1    : 1;  /* bit[1-1] :  */
        unsigned int  cbit2    : 1;  /* bit[2-2] :  */
        unsigned int  cbit3    : 1;  /* bit[3-3] :  */
        unsigned int  cbit4    : 1;  /* bit[4-4] :  */
        unsigned int  cbit5    : 1;  /* bit[5-5] :  */
        unsigned int  cbit6    : 1;  /* bit[6-6] :  */
        unsigned int  cbit7    : 1;  /* bit[7-7] :  */
        unsigned int  reserved : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_I2S_CHST0_UNION;
#define SOC_HDMI_I2S_CHST0_cbit0_START     (0)
#define SOC_HDMI_I2S_CHST0_cbit0_END       (0)
#define SOC_HDMI_I2S_CHST0_cbit1_START     (1)
#define SOC_HDMI_I2S_CHST0_cbit1_END       (1)
#define SOC_HDMI_I2S_CHST0_cbit2_START     (2)
#define SOC_HDMI_I2S_CHST0_cbit2_END       (2)
#define SOC_HDMI_I2S_CHST0_cbit3_START     (3)
#define SOC_HDMI_I2S_CHST0_cbit3_END       (3)
#define SOC_HDMI_I2S_CHST0_cbit4_START     (4)
#define SOC_HDMI_I2S_CHST0_cbit4_END       (4)
#define SOC_HDMI_I2S_CHST0_cbit5_START     (5)
#define SOC_HDMI_I2S_CHST0_cbit5_END       (5)
#define SOC_HDMI_I2S_CHST0_cbit6_START     (6)
#define SOC_HDMI_I2S_CHST0_cbit6_END       (6)
#define SOC_HDMI_I2S_CHST0_cbit7_START     (7)
#define SOC_HDMI_I2S_CHST0_cbit7_END       (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_I2S_CHST1_UNION
 �ṹ˵��  : I2S_CHST1 �Ĵ����ṹ���塣��ַƫ����:0x400+0x07C����ֵ:0x00000000�����:32
 �Ĵ���˵��: Audio In I2S Channel Status Register2
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cbit8    : 1;  /* bit[0-0] :  */
        unsigned int  cbit9    : 1;  /* bit[1-1] :  */
        unsigned int  cbit10   : 1;  /* bit[2-2] :  */
        unsigned int  cbit11   : 1;  /* bit[3-3] :  */
        unsigned int  cbit12   : 1;  /* bit[4-4] :  */
        unsigned int  cbit13   : 1;  /* bit[5-5] :  */
        unsigned int  cbit14   : 1;  /* bit[6-6] :  */
        unsigned int  cbit15   : 1;  /* bit[7-7] :  */
        unsigned int  reserved : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_I2S_CHST1_UNION;
#define SOC_HDMI_I2S_CHST1_cbit8_START     (0)
#define SOC_HDMI_I2S_CHST1_cbit8_END       (0)
#define SOC_HDMI_I2S_CHST1_cbit9_START     (1)
#define SOC_HDMI_I2S_CHST1_cbit9_END       (1)
#define SOC_HDMI_I2S_CHST1_cbit10_START    (2)
#define SOC_HDMI_I2S_CHST1_cbit10_END      (2)
#define SOC_HDMI_I2S_CHST1_cbit11_START    (3)
#define SOC_HDMI_I2S_CHST1_cbit11_END      (3)
#define SOC_HDMI_I2S_CHST1_cbit12_START    (4)
#define SOC_HDMI_I2S_CHST1_cbit12_END      (4)
#define SOC_HDMI_I2S_CHST1_cbit13_START    (5)
#define SOC_HDMI_I2S_CHST1_cbit13_END      (5)
#define SOC_HDMI_I2S_CHST1_cbit14_START    (6)
#define SOC_HDMI_I2S_CHST1_cbit14_END      (6)
#define SOC_HDMI_I2S_CHST1_cbit15_START    (7)
#define SOC_HDMI_I2S_CHST1_cbit15_END      (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_I2S_CHST2_UNION
 �ṹ˵��  : I2S_CHST2 �Ĵ����ṹ���塣��ַƫ����:0x400+0x080����ֵ:0x00000000�����:32
 �Ĵ���˵��: Audio In I2S Channel Status Register3
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  i2s_src_num  : 4;  /* bit[0-3] : Channel Status Byte #2: Source Number */
        unsigned int  i2s_chan_num : 4;  /* bit[4-7] : Channel Status Byte #2: Source Number */
        unsigned int  reserved     : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_I2S_CHST2_UNION;
#define SOC_HDMI_I2S_CHST2_i2s_src_num_START   (0)
#define SOC_HDMI_I2S_CHST2_i2s_src_num_END     (3)
#define SOC_HDMI_I2S_CHST2_i2s_chan_num_START  (4)
#define SOC_HDMI_I2S_CHST2_i2s_chan_num_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_I2S_CHST4_UNION
 �ṹ˵��  : I2S_CHST4 �Ĵ����ṹ���塣��ַƫ����:0x400+0x084����ֵ:0x0000000F�����:32
 �Ĵ���˵��: Audio In I2S Channel Status Register4
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sw_spdif_fs : 4;  /* bit[0-3] : Sampling frequency as set by software, which is inserted into the HDMI audio stream if FS_OVERRIDE (0x7A:0x15[1]) is enabled. */
        unsigned int  clk_accur   : 4;  /* bit[4-7] : Clock Accuracy. */
        unsigned int  reserved    : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_I2S_CHST4_UNION;
#define SOC_HDMI_I2S_CHST4_sw_spdif_fs_START  (0)
#define SOC_HDMI_I2S_CHST4_sw_spdif_fs_END    (3)
#define SOC_HDMI_I2S_CHST4_clk_accur_START    (4)
#define SOC_HDMI_I2S_CHST4_clk_accur_END      (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_I2S_CHST5_UNION
 �ṹ˵��  : I2S_CHST5 �Ĵ����ṹ���塣��ַƫ����:0x400+0x088����ֵ:0x00000001�����:32
 �Ĵ���˵��: Audio In I2S Channel Status Register5
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  i2s_maxlen : 1;  /* bit[0-0] : Maximum audio sample word length:
                                                     0 = 20 bits
                                                     1 = 24 bits */
        unsigned int  i2s_len    : 3;  /* bit[1-3] : Audio sample word length: Defined in bits with I2S_MAXLEN */
        unsigned int  fs_orig    : 4;  /* bit[4-7] : Original Fs. */
        unsigned int  reserved   : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_I2S_CHST5_UNION;
#define SOC_HDMI_I2S_CHST5_i2s_maxlen_START  (0)
#define SOC_HDMI_I2S_CHST5_i2s_maxlen_END    (0)
#define SOC_HDMI_I2S_CHST5_i2s_len_START     (1)
#define SOC_HDMI_I2S_CHST5_i2s_len_END       (3)
#define SOC_HDMI_I2S_CHST5_fs_orig_START     (4)
#define SOC_HDMI_I2S_CHST5_fs_orig_END       (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_ASRC_UNION
 �ṹ˵��  : ASRC �Ĵ����ṹ���塣��ַƫ����:0x400+0x08C����ֵ:0x00000010�����:32
 �Ĵ���˵��: Audio Sample Rate Conversion Register
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  src_en       : 1;  /* bit[0-0] : Audio sample rate conversion:
                                                       0 = Disabled
                                                       1 = Enabled */
        unsigned int  ratio        : 1;  /* bit[1-1] : Sample rate down-conversion ratio:
                                                       0 = Down-sample 2-to-1 when SRC_EN is set to 1
                                                       1 = Down-sample 4-to-1 when SRC_EN is set to 1 */
        unsigned int  reserved_0   : 2;  /* bit[2-3] : reserved */
        unsigned int  hbr_spr_mask : 4;  /* bit[4-7] : Mask for the sample present and flat bit of the High Bit Rate Audio header. Each bit masks out one of the subpacket sample present bits.
                                                       0 = Mask out.
                                                       1 = Unmask
                                                       Bits 7:4 must be programmed to 0b0000 when HBRA mode is selected. */
        unsigned int  reserved_1   : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_ASRC_UNION;
#define SOC_HDMI_ASRC_src_en_START        (0)
#define SOC_HDMI_ASRC_src_en_END          (0)
#define SOC_HDMI_ASRC_ratio_START         (1)
#define SOC_HDMI_ASRC_ratio_END           (1)
#define SOC_HDMI_ASRC_hbr_spr_mask_START  (4)
#define SOC_HDMI_ASRC_hbr_spr_mask_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_I2S_IN_LEN_UNION
 �ṹ˵��  : I2S_IN_LEN �Ĵ����ṹ���塣��ַƫ����:0x400+0x090����ֵ:0x0000009B�����:32
 �Ĵ���˵��: Audio I2S Input Length Register
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  in_length  : 4;  /* bit[0-3] : Number of valid bits in the input I2S stream. Used for the extraction of the I2S data from the input stream.
                                                     0b1111 �C 0b1110 = N/A
                                                     0b1101 = 21 bit
                                                     0b1100 = 17 bit
                                                     0b1011 = 24 bit
                                                     0b1010 = 20 bit
                                                     0b1001 = 23 bit
                                                     0b1000 = 19 bit
                                                     0b0111 �C 0b0110 = N/A
                                                     0b0101 = 22 bit
                                                     0b0100 = 18 bit
                                                     0b0011 = N/A
                                                     0b0010 = 16 bit
                                                     0b0001 �C 0b0000 = N/A */
        unsigned int  hbr_pkt_id : 4;  /* bit[4-7] : The ID of the High Bit Rate Audio packet header. */
        unsigned int  reserved   : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_I2S_IN_LEN_UNION;
#define SOC_HDMI_I2S_IN_LEN_in_length_START   (0)
#define SOC_HDMI_I2S_IN_LEN_in_length_END     (3)
#define SOC_HDMI_I2S_IN_LEN_hbr_pkt_id_START  (4)
#define SOC_HDMI_I2S_IN_LEN_hbr_pkt_id_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_CTRL_UNION
 �ṹ˵��  : CTRL �Ĵ����ṹ���塣��ַƫ����:0x400+0x0BC����ֵ:0x00000000�����:32
 �Ĵ���˵��: HDMI Control Register
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  hdmi_mode   : 1;  /* bit[0-0] : HDMI mode:
                                                      0 = Disabled
                                                      1 = Enabled
                                                      Note: This register bit is only useable if hdmi_mode_bond pin is
                                                      tight high. Otherwise, the device stays in DVI mode. */
        unsigned int  layout      : 2;  /* bit[1-2] : Audio packet header layout indicator:
                                                      0b00 = Layout 0 (2-channel)
                                                      0b01 = Layout 1 (up to 8 channels)
                                                      0b1x = Reserved */
        unsigned int  packet_mode : 3;  /* bit[3-5] : Specifies the number of bits per pixel sent to the paketizer:
                                                      0b000 = Reserved
                                                      0b001 = Reserved
                                                      0b010 = Reserved
                                                      0b011 = Reserved
                                                      0b100 = 24 bits per pixel (8 bits per pixel; no packing)
                                                      0b101 = 30 bits per pixel (10 bits per pixel pack to 8 bits)
                                                      0b110 = 36 bits per pixel (12 bits per pixel pack to 8 bits)
                                                      0b111 = 48 bits per pixel (16 bits per pixel; no packing)
                                                      Note: The firmware must program 24 bits per pixel (8 bits per pixel; no packing) for initialization. */
        unsigned int  dc_en       : 1;  /* bit[6-6] : Deep-color packet enable:
                                                      0 = Do not send deep-color related information in the packet to the HDMI Receiver.
                                                      1 = Send deep-color related information in the packet to the HDMI Receiver. */
        unsigned int  reserved_0  : 1;  /* bit[7-7] : reserved */
        unsigned int  reserved_1  : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_CTRL_UNION;
#define SOC_HDMI_CTRL_hdmi_mode_START    (0)
#define SOC_HDMI_CTRL_hdmi_mode_END      (0)
#define SOC_HDMI_CTRL_layout_START       (1)
#define SOC_HDMI_CTRL_layout_END         (2)
#define SOC_HDMI_CTRL_packet_mode_START  (3)
#define SOC_HDMI_CTRL_packet_mode_END    (5)
#define SOC_HDMI_CTRL_dc_en_START        (6)
#define SOC_HDMI_CTRL_dc_en_END          (6)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_AUDO_TXSTAT_UNION
 �ṹ˵��  : AUDO_TXSTAT �Ĵ����ṹ���塣��ַƫ����:0x400+0x0C0����ֵ:0x00000000�����:32
 �Ĵ���˵��: Audio Path Status Register
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  npacket_en        : 1;  /* bit[0-0] : Enables null packet flooding all the time. */
        unsigned int  npacket_envs_high : 1;  /* bit[1-1] : Enables null packet flooding only when VSync is
                                                            high. */
        unsigned int  mute              : 1;  /* bit[2-2] : General Control Packet mute status:
                                                            0 = No packet with SETAVM=1 has been sent
                                                            1 = A packet with SETAVM=1 has been sent
                                                            The MUTE bit is equal to the SETAVM bit in
                                                            register 0x7A:0xDF, described on page 77. MUTE
                                                            is not set immediately when the SETAVM bit in
                                                            register 0xDF is written. After writing SETAVM to1, MUTE is set after the Control Packet is
                                                            transmitted in HDMI mode. In DVI mode, MUTE
                                                            is set at the start of VSYNC. MUTE is cleared
                                                            when a Control Packet with CLRAVM=1 is sent, or
                                                            (in DVI mode) at the start of VSYNC after
                                                            CLRAVM has been written to 1. */
        unsigned int  reserved_0        : 5;  /* bit[3-7] : reserved */
        unsigned int  reserved_1        : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_AUDO_TXSTAT_UNION;
#define SOC_HDMI_AUDO_TXSTAT_npacket_en_START         (0)
#define SOC_HDMI_AUDO_TXSTAT_npacket_en_END           (0)
#define SOC_HDMI_AUDO_TXSTAT_npacket_envs_high_START  (1)
#define SOC_HDMI_AUDO_TXSTAT_npacket_envs_high_END    (1)
#define SOC_HDMI_AUDO_TXSTAT_mute_START               (2)
#define SOC_HDMI_AUDO_TXSTAT_mute_END                 (2)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_TEST_TXCTRL_UNION
 �ṹ˵��  : TEST_TXCTRL �Ĵ����ṹ���塣��ַƫ����:0x400+0x0F0����ֵ:0x00000000�����:32
 �Ĵ���˵��: Test Control Register
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved_0  : 2;  /* bit[0-1] : reserved */
        unsigned int  core_iso_en : 1;  /* bit[2-2] : TMDS Core Isolation Enable
                                                      0 - normal operation (default)
                                                      1 - Input pins muxed to TMDS Tx core; to emulate discrete Tx. */
        unsigned int  dvi_enc_byp : 1;  /* bit[3-3] : DVI encoder bypass
                                                      0 - normal operation (default).
                                                      1 - bypass DVI encoder logic. */
        unsigned int  reserved_1  : 4;  /* bit[4-7] :  */
        unsigned int  reserved_2  : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_TEST_TXCTRL_UNION;
#define SOC_HDMI_TEST_TXCTRL_core_iso_en_START  (2)
#define SOC_HDMI_TEST_TXCTRL_core_iso_en_END    (2)
#define SOC_HDMI_TEST_TXCTRL_dvi_enc_byp_START  (3)
#define SOC_HDMI_TEST_TXCTRL_dvi_enc_byp_END    (3)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_DPD_UNION
 �ṹ˵��  : DPD �Ĵ����ṹ���塣��ַƫ����:0x400+0x0F4����ֵ:0xXXX�����:32
 �Ĵ���˵��: Diagnostic Power Down Register
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pdtot      : 1;  /* bit[0-0] : Pown down total:
                                                     a = Power down everything; INT source is RSEN.
                                                     b = Normal operation
                                                     Active high or low depends on used Phy */
        unsigned int  pdosc      : 1;  /* bit[1-1] : Power down Internal Oscillator. This disables the I2C port to the internal ROM (disabling loading), halts all interrupt updates, and disables the Master DDC block.
                                                     a = Power down
                                                     b = Normal operation
                                                     Active high or low depends on used Phy */
        unsigned int  pdidck     : 1;  /* bit[2-2] : Power down IDCK input:
                                                     0 = Power down; gate off IDCK signal to disable all IDCK-based logic
                                                     1 = Normal operation */
        unsigned int  tclkphz    : 1;  /* bit[3-3] : Selects the TCLK phase:
                                                     a = Default phase; the same as TMDS core
                                                     b = Invert TCLK; change the phase 180 degrees
                                                     Active high or low depends on used Phy */
        unsigned int  reserved_0 : 3;  /* bit[4-6] : reserved */
        unsigned int  vid_byp_en : 1;  /* bit[7-7] : Enable bypath of the video path.
                                                     0: Disable
                                                     1: Enable
                                                     The core_iso_en bit in (reg. 0x13C[1]) must be set and the HDCP cypher must be disabled (reg. 0x72:=x0F[0] == 0) */
        unsigned int  reserved_1 : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_DPD_UNION;
#define SOC_HDMI_DPD_pdtot_START       (0)
#define SOC_HDMI_DPD_pdtot_END         (0)
#define SOC_HDMI_DPD_pdosc_START       (1)
#define SOC_HDMI_DPD_pdosc_END         (1)
#define SOC_HDMI_DPD_pdidck_START      (2)
#define SOC_HDMI_DPD_pdidck_END        (2)
#define SOC_HDMI_DPD_tclkphz_START     (3)
#define SOC_HDMI_DPD_tclkphz_END       (3)
#define SOC_HDMI_DPD_vid_byp_en_START  (7)
#define SOC_HDMI_DPD_vid_byp_en_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_PB_CTRL1_UNION
 �ṹ˵��  : PB_CTRL1 �Ĵ����ṹ���塣��ַƫ����:0x400+0x0F8����ֵ:0x00000000�����:32
 �Ĵ���˵��: Packet Buffer Control #1 Register
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  avi_rpt  : 1;  /* bit[0-0] : Repeat AVI InfoFrame transmission:
                                                   0 = Disabled (send once after enable bit is set)
                                                   1 = Enabled (send in every VBLANK period) */
        unsigned int  avi_en   : 1;  /* bit[1-1] : Enable AVI InfoFrame transmission:
                                                   0 = Disabled
                                                   1 = Enabled */
        unsigned int  spd_rpt  : 1;  /* bit[2-2] : Repeat SPD InfoFrame transmission:
                                                   0 = Disabled (send once after enable bit is set)
                                                   1 = Enabled (send in every VBLANK period) */
        unsigned int  spd_en   : 1;  /* bit[3-3] : Enable SPD InfoFrame transmission:
                                                   0 = Disabled
                                                   1 = Enabled */
        unsigned int  aud_rpt  : 1;  /* bit[4-4] : Repeat Audio InfoFrame transmission:
                                                   0 = Disabled (send once after enable bit is set)
                                                   1 = Enabled (send in every VBLANK period) */
        unsigned int  aud_en   : 1;  /* bit[5-5] : Enable Audio InfoFrame transmission:
                                                   0 = Disabled
                                                   1 = Enabled */
        unsigned int  mpeg_rpt : 1;  /* bit[6-6] : Repeat MPEG InfoFrame transmission:
                                                   0 = Disabled (send once after enable bit is set)
                                                   1 = Enabled (send in every VBLANK period) */
        unsigned int  mpeg_en  : 1;  /* bit[7-7] : Enable MPEG InfoFrame transmission:
                                                   0 = Disabled
                                                   1 = Enabled */
        unsigned int  reserved : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_PB_CTRL1_UNION;
#define SOC_HDMI_PB_CTRL1_avi_rpt_START   (0)
#define SOC_HDMI_PB_CTRL1_avi_rpt_END     (0)
#define SOC_HDMI_PB_CTRL1_avi_en_START    (1)
#define SOC_HDMI_PB_CTRL1_avi_en_END      (1)
#define SOC_HDMI_PB_CTRL1_spd_rpt_START   (2)
#define SOC_HDMI_PB_CTRL1_spd_rpt_END     (2)
#define SOC_HDMI_PB_CTRL1_spd_en_START    (3)
#define SOC_HDMI_PB_CTRL1_spd_en_END      (3)
#define SOC_HDMI_PB_CTRL1_aud_rpt_START   (4)
#define SOC_HDMI_PB_CTRL1_aud_rpt_END     (4)
#define SOC_HDMI_PB_CTRL1_aud_en_START    (5)
#define SOC_HDMI_PB_CTRL1_aud_en_END      (5)
#define SOC_HDMI_PB_CTRL1_mpeg_rpt_START  (6)
#define SOC_HDMI_PB_CTRL1_mpeg_rpt_END    (6)
#define SOC_HDMI_PB_CTRL1_mpeg_en_START   (7)
#define SOC_HDMI_PB_CTRL1_mpeg_en_END     (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_PB_CTRL2_UNION
 �ṹ˵��  : PB_CTRL2 �Ĵ����ṹ���塣��ַƫ����:0x400+0x0FC����ֵ:0x00000000�����:32
 �Ĵ���˵��: Packet Buffer Control #2 Register
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  gen_rpt  : 1;  /* bit[0-0] : Repeat Generic Packet transmission:
                                                   0 = Disable (send once after enable bit is set)
                                                   1= Enable (send in every VBLANK period) */
        unsigned int  gen_en   : 1;  /* bit[1-1] : Enable Generic Packet transmission:
                                                   0 = Disabled
                                                   1 = Enabled */
        unsigned int  cp_rpt   : 1;  /* bit[2-2] : Repeat General Control Packet transmission:
                                                   0 = Disabled (send once after enable bit is set)
                                                   1 = Enabled (send in every VBLANK period) */
        unsigned int  cp_en    : 1;  /* bit[3-3] : Enable General Control Packet transmission:
                                                   0 = Disabled
                                                   1 = Enabled */
        unsigned int  gen2_rpt : 1;  /* bit[4-4] : Repeat Generic #2 Packet transmission:
                                                   0 = Disabled (send once after enable bit is set)
                                                   1 = Enabled (send in every VBLANK period) */
        unsigned int  gen2_en  : 1;  /* bit[5-5] : Enable Generic #2 Packet transmission:
                                                   0 = Disabled
                                                   1 = Enabled */
        unsigned int  gam_rpt  : 1;  /* bit[6-6] : Repeat Gamut Metadata InfoFrame Packet data each frame.
                                                   0 - Disabled
                                                   1 - Enabled */
        unsigned int  gam_en   : 1;  /* bit[7-7] : Enable Gamut Metadata InfoFrame transmission on HDMI.
                                                   0 - Disabled
                                                   1 �C Enabled */
        unsigned int  reserved : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_PB_CTRL2_UNION;
#define SOC_HDMI_PB_CTRL2_gen_rpt_START   (0)
#define SOC_HDMI_PB_CTRL2_gen_rpt_END     (0)
#define SOC_HDMI_PB_CTRL2_gen_en_START    (1)
#define SOC_HDMI_PB_CTRL2_gen_en_END      (1)
#define SOC_HDMI_PB_CTRL2_cp_rpt_START    (2)
#define SOC_HDMI_PB_CTRL2_cp_rpt_END      (2)
#define SOC_HDMI_PB_CTRL2_cp_en_START     (3)
#define SOC_HDMI_PB_CTRL2_cp_en_END       (3)
#define SOC_HDMI_PB_CTRL2_gen2_rpt_START  (4)
#define SOC_HDMI_PB_CTRL2_gen2_rpt_END    (4)
#define SOC_HDMI_PB_CTRL2_gen2_en_START   (5)
#define SOC_HDMI_PB_CTRL2_gen2_en_END     (5)
#define SOC_HDMI_PB_CTRL2_gam_rpt_START   (6)
#define SOC_HDMI_PB_CTRL2_gam_rpt_END     (6)
#define SOC_HDMI_PB_CTRL2_gam_en_START    (7)
#define SOC_HDMI_PB_CTRL2_gam_en_END      (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_AVI_TYPE_UNION
 �ṹ˵��  : AVI_TYPE �Ĵ����ṹ���塣��ַƫ����:0x400+0x100����ֵ:0x00000000�����:32
 �Ĵ���˵��: AVI InfoFrame Type Code
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  avi_hdr_7_0_ : 8;  /* bit[0-7] : AVI_HDR[7:0] */
        unsigned int  reserved     : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_AVI_TYPE_UNION;
#define SOC_HDMI_AVI_TYPE_avi_hdr_7_0__START  (0)
#define SOC_HDMI_AVI_TYPE_avi_hdr_7_0__END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_AVI_VERS_UNION
 �ṹ˵��  : AVI_VERS �Ĵ����ṹ���塣��ַƫ����:0x400+0x104����ֵ:0x00000000�����:32
 �Ĵ���˵��: AVI InfoFrame Versin Code
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  avi_hdr_15_8_ : 8;  /* bit[0-7] : AVI_HDR[15:8] */
        unsigned int  reserved      : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_AVI_VERS_UNION;
#define SOC_HDMI_AVI_VERS_avi_hdr_15_8__START  (0)
#define SOC_HDMI_AVI_VERS_avi_hdr_15_8__END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_AVI_LEN_UNION
 �ṹ˵��  : AVI_LEN �Ĵ����ṹ���塣��ַƫ����:0x400+0x108����ֵ:0x00000000�����:32
 �Ĵ���˵��: AVI InfoFrame Length
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  avi_hdr_23_16_ : 8;  /* bit[0-7] : AVI_HDR[23:16] */
        unsigned int  reserved       : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_AVI_LEN_UNION;
#define SOC_HDMI_AVI_LEN_avi_hdr_23_16__START  (0)
#define SOC_HDMI_AVI_LEN_avi_hdr_23_16__END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_AVI_CHSUM_UNION
 �ṹ˵��  : AVI_CHSUM �Ĵ����ṹ���塣��ַƫ����:0x400+0x10C����ֵ:0x00000000�����:32
 �Ĵ���˵��: AVI InfoFrame Checksum
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  avi_hdr_31_24_ : 8;  /* bit[0-7] : AVI_HDR[31:24] */
        unsigned int  reserved       : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_AVI_CHSUM_UNION;
#define SOC_HDMI_AVI_CHSUM_avi_hdr_31_24__START  (0)
#define SOC_HDMI_AVI_CHSUM_avi_hdr_31_24__END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_AVI_DBYTE_UNION
 �ṹ˵��  : AVI_DBYTE �Ĵ����ṹ���塣��ַƫ����:0x400+0x110����ֵ:0x00000000�����:32
 �Ĵ���˵��: AVI InfoFrame Data
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  avi_data : 8;  /* bit[0-7] : data1~data15 */
        unsigned int  reserved : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_AVI_DBYTE_UNION;
#define SOC_HDMI_AVI_DBYTE_avi_data_START  (0)
#define SOC_HDMI_AVI_DBYTE_avi_data_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_SPD_TYPE_UNION
 �ṹ˵��  : SPD_TYPE �Ĵ����ṹ���塣��ַƫ����:0x400+0x180����ֵ:0x00000000�����:32
 �Ĵ���˵��: SPD InfoFrame Type Code
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  spd_hdr_7_0_ : 8;  /* bit[0-7] : SPD_HDR[7:0] */
        unsigned int  reserved     : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_SPD_TYPE_UNION;
#define SOC_HDMI_SPD_TYPE_spd_hdr_7_0__START  (0)
#define SOC_HDMI_SPD_TYPE_spd_hdr_7_0__END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_SPD_VERS_UNION
 �ṹ˵��  : SPD_VERS �Ĵ����ṹ���塣��ַƫ����:0x400+0x184����ֵ:0x00000000�����:32
 �Ĵ���˵��: SPD InfoFrame Versin Code
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  spd_hdr_15_8_ : 8;  /* bit[0-7] : SPD_HDR[15:8] */
        unsigned int  reserved      : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_SPD_VERS_UNION;
#define SOC_HDMI_SPD_VERS_spd_hdr_15_8__START  (0)
#define SOC_HDMI_SPD_VERS_spd_hdr_15_8__END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_SPD_LEN_UNION
 �ṹ˵��  : SPD_LEN �Ĵ����ṹ���塣��ַƫ����:0x400+0x188����ֵ:0x00000000�����:32
 �Ĵ���˵��: SPD InfoFrame Length
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  spd_hdr_23_16_ : 8;  /* bit[0-7] : SPD_HDR[23:16] */
        unsigned int  reserved       : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_SPD_LEN_UNION;
#define SOC_HDMI_SPD_LEN_spd_hdr_23_16__START  (0)
#define SOC_HDMI_SPD_LEN_spd_hdr_23_16__END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_SPD_CHSUM_UNION
 �ṹ˵��  : SPD_CHSUM �Ĵ����ṹ���塣��ַƫ����:0x400+0x18C����ֵ:0x00000000�����:32
 �Ĵ���˵��: SPD InfoFrame Checksum
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  spd_hdr_31_24_ : 8;  /* bit[0-7] : SPD_HDR[31:24] */
        unsigned int  reserved       : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_SPD_CHSUM_UNION;
#define SOC_HDMI_SPD_CHSUM_spd_hdr_31_24__START  (0)
#define SOC_HDMI_SPD_CHSUM_spd_hdr_31_24__END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_SPD_DBYTE_UNION
 �ṹ˵��  : SPD_DBYTE �Ĵ����ṹ���塣��ַƫ����:0x400+0x190����ֵ:0x00000000�����:32
 �Ĵ���˵��: SPD InfoFrame Data
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  spd_data : 8;  /* bit[0-7] : data1~data27 */
        unsigned int  reserved : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_SPD_DBYTE_UNION;
#define SOC_HDMI_SPD_DBYTE_spd_data_START  (0)
#define SOC_HDMI_SPD_DBYTE_spd_data_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_AUDIO_TYPE_UNION
 �ṹ˵��  : AUDIO_TYPE �Ĵ����ṹ���塣��ַƫ����:0x400+0x200����ֵ:0x00000000�����:32
 �Ĵ���˵��: AUDIO InfoFrame Type Code
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  audio_hdr_7_0_ : 8;  /* bit[0-7] : AUDIO_HDR[7:0] */
        unsigned int  reserved       : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_AUDIO_TYPE_UNION;
#define SOC_HDMI_AUDIO_TYPE_audio_hdr_7_0__START  (0)
#define SOC_HDMI_AUDIO_TYPE_audio_hdr_7_0__END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_AUDIO_VERS_UNION
 �ṹ˵��  : AUDIO_VERS �Ĵ����ṹ���塣��ַƫ����:0x400+0x204����ֵ:0x00000000�����:32
 �Ĵ���˵��: AUDIO InfoFrame Versin Code
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  audio_hdr_15_8_ : 8;  /* bit[0-7] : AUDIO_HDR[15:8] */
        unsigned int  reserved        : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_AUDIO_VERS_UNION;
#define SOC_HDMI_AUDIO_VERS_audio_hdr_15_8__START  (0)
#define SOC_HDMI_AUDIO_VERS_audio_hdr_15_8__END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_AUDIO_LEN_UNION
 �ṹ˵��  : AUDIO_LEN �Ĵ����ṹ���塣��ַƫ����:0x400+0x208����ֵ:0x00000000�����:32
 �Ĵ���˵��: AUDIO InfoFrame Length
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  audio_hdr_23_16_ : 8;  /* bit[0-7] : AUDIO_HDR[23:16] */
        unsigned int  reserved         : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_AUDIO_LEN_UNION;
#define SOC_HDMI_AUDIO_LEN_audio_hdr_23_16__START  (0)
#define SOC_HDMI_AUDIO_LEN_audio_hdr_23_16__END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_AUDIO_CHSUM_UNION
 �ṹ˵��  : AUDIO_CHSUM �Ĵ����ṹ���塣��ַƫ����:0x400+0x20C����ֵ:0x00000000�����:32
 �Ĵ���˵��: AUDIO InfoFrame Checksum
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  audio_hdr_31_24_ : 8;  /* bit[0-7] : AUDIO_HDR[31:24] */
        unsigned int  reserved         : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_AUDIO_CHSUM_UNION;
#define SOC_HDMI_AUDIO_CHSUM_audio_hdr_31_24__START  (0)
#define SOC_HDMI_AUDIO_CHSUM_audio_hdr_31_24__END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_AUDIO_DBYTE_UNION
 �ṹ˵��  : AUDIO_DBYTE �Ĵ����ṹ���塣��ַƫ����:0x400+0x210����ֵ:0x00000000�����:32
 �Ĵ���˵��: AUDIO InfoFrame Data
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  audio_data : 8;  /* bit[0-7] : data1~data10 */
        unsigned int  reserved   : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_AUDIO_DBYTE_UNION;
#define SOC_HDMI_AUDIO_DBYTE_audio_data_START  (0)
#define SOC_HDMI_AUDIO_DBYTE_audio_data_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_MPEG_TYPE_UNION
 �ṹ˵��  : MPEG_TYPE �Ĵ����ṹ���塣��ַƫ����:0x400+0x280����ֵ:0x00000000�����:32
 �Ĵ���˵��: MPEG InfoFrame Type Code
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mpeg_hdr_7_0_ : 8;  /* bit[0-7] : MPEG_HDR[7:0] */
        unsigned int  reserved      : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_MPEG_TYPE_UNION;
#define SOC_HDMI_MPEG_TYPE_mpeg_hdr_7_0__START  (0)
#define SOC_HDMI_MPEG_TYPE_mpeg_hdr_7_0__END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_MPEG_VERS_UNION
 �ṹ˵��  : MPEG_VERS �Ĵ����ṹ���塣��ַƫ����:0x400+0x284����ֵ:0x00000000�����:32
 �Ĵ���˵��: MPEG InfoFrame Versin Code
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mpeg_hdr_15_8_ : 8;  /* bit[0-7] : MPEG_HDR[15:8] */
        unsigned int  reserved       : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_MPEG_VERS_UNION;
#define SOC_HDMI_MPEG_VERS_mpeg_hdr_15_8__START  (0)
#define SOC_HDMI_MPEG_VERS_mpeg_hdr_15_8__END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_MPEG_LEN_UNION
 �ṹ˵��  : MPEG_LEN �Ĵ����ṹ���塣��ַƫ����:0x400+0x288����ֵ:0x00000000�����:32
 �Ĵ���˵��: MPEG InfoFrame Length
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mpeg_hdr_23_16_ : 8;  /* bit[0-7] : MPEG_HDR[23:16] */
        unsigned int  reserved        : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_MPEG_LEN_UNION;
#define SOC_HDMI_MPEG_LEN_mpeg_hdr_23_16__START  (0)
#define SOC_HDMI_MPEG_LEN_mpeg_hdr_23_16__END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_MPEG_CHSUM_UNION
 �ṹ˵��  : MPEG_CHSUM �Ĵ����ṹ���塣��ַƫ����:0x400+0x28C����ֵ:0x00000000�����:32
 �Ĵ���˵��: MPEG InfoFrame Checksum
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mpeg_hdr_31_24_ : 8;  /* bit[0-7] : MPEG_HDR[31:24] */
        unsigned int  reserved        : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_MPEG_CHSUM_UNION;
#define SOC_HDMI_MPEG_CHSUM_mpeg_hdr_31_24__START  (0)
#define SOC_HDMI_MPEG_CHSUM_mpeg_hdr_31_24__END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_MPEG_DBYTE_UNION
 �ṹ˵��  : MPEG_DBYTE �Ĵ����ṹ���塣��ַƫ����:0x400+0x290����ֵ:0x00000000�����:32
 �Ĵ���˵��: MPEG InfoFrame Data
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mpeg_data : 8;  /* bit[0-7] : data1~data27 */
        unsigned int  reserved  : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_MPEG_DBYTE_UNION;
#define SOC_HDMI_MPEG_DBYTE_mpeg_data_START  (0)
#define SOC_HDMI_MPEG_DBYTE_mpeg_data_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_GEN_DBYTE_UNION
 �ṹ˵��  : GEN_DBYTE �Ĵ����ṹ���塣��ַƫ����:0x400+0x300����ֵ:0x00000000�����:32
 �Ĵ���˵��: Generic Packet #1 Registers
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  gen_data : 8;  /* bit[0-7] : data1~data31 */
        unsigned int  reserved : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_GEN_DBYTE_UNION;
#define SOC_HDMI_GEN_DBYTE_gen_data_START  (0)
#define SOC_HDMI_GEN_DBYTE_gen_data_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_CP_BYTE1_UNION
 �ṹ˵��  : CP_BYTE1 �Ĵ����ṹ���塣��ַƫ����:0x400+0x37C����ֵ:0x00000000�����:32
 �Ĵ���˵��: General Control Packet Register
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  setavm   : 1;  /* bit[0-0] : Set AV Mute flag.
                                                   When the AVMUTE flag is set, the HDMI Transmitter sends a General Control Packet on the TMDS link to inform the Sink that the data may be incorrect. The HDMI Transmitter sends blank-level data for all video packets and 0x00 for all audio packet data.
                                                   When the AVMUTE flag is set, the Sink assumes that no valid data is being received. Optionally, the Sink can apply a mute function to the audio data and/or a blank function to the video data. */
        unsigned int  reserved_0: 3;  /* bit[1-3] : reserved */
        unsigned int  clravm   : 1;  /* bit[4-4] : Clear AV Mute flag. */
        unsigned int  reserved_1: 3;  /* bit[5-7] : reserved */
        unsigned int  reserved_2: 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_CP_BYTE1_UNION;
#define SOC_HDMI_CP_BYTE1_setavm_START    (0)
#define SOC_HDMI_CP_BYTE1_setavm_END      (0)
#define SOC_HDMI_CP_BYTE1_clravm_START    (4)
#define SOC_HDMI_CP_BYTE1_clravm_END      (4)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_GEN2_DBYTE_UNION
 �ṹ˵��  : GEN2_DBYTE �Ĵ����ṹ���塣��ַƫ����:0x400+0x380����ֵ:0x00000000�����:32
 �Ĵ���˵��: Generic Packet #2 Registers
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  gen2_data : 8;  /* bit[0-7] : data1~data31 */
        unsigned int  reserved  : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_GEN2_DBYTE_UNION;
#define SOC_HDMI_GEN2_DBYTE_gen2_data_START  (0)
#define SOC_HDMI_GEN2_DBYTE_gen2_data_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_CEC_ADDR_ID_UNION
 �ṹ˵��  : CEC_ADDR_ID �Ĵ����ṹ���塣��ַƫ����:0x400+0x3FC����ֵ:0x000000C0�����:32
 �Ĵ���˵��: CEC Slave ID Register
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cec_id   : 8;  /* bit[0-7] : CEC I2C slave address ID */
        unsigned int  reserved : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_CEC_ADDR_ID_UNION;
#define SOC_HDMI_CEC_ADDR_ID_cec_id_START    (0)
#define SOC_HDMI_CEC_ADDR_ID_cec_id_END      (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_TMDS_CTL1_UNION
 �ṹ˵��  : TMDS_CTL1 �Ĵ����ṹ���塣��ַƫ����:0x1800+'0x000����ֵ:0x00000054�����:32
 �Ĵ���˵��: TMDS CNTL1 Register
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  bgr_ctl  : 3;  /* bit[0-2] : default = 100, This bit is for Shrek analog. Change this value to 3��b001 during initialization. */
        unsigned int  bgr_test : 1;  /* bit[3-3] : default = 0, This bit is for Shrek analog. Do not change this value. */
        unsigned int  sw_ctl   : 2;  /* bit[4-5] : default = 01, This bit is for Shrek analog. Change this value to 2��b00 during initialization. */
        unsigned int  bw_ctl   : 2;  /* bit[6-7] : default = 01, This bit is for Shrek analog. Change this value to 2��b11 during initialization. */
        unsigned int  reserved : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_TMDS_CTL1_UNION;
#define SOC_HDMI_TMDS_CTL1_bgr_ctl_START   (0)
#define SOC_HDMI_TMDS_CTL1_bgr_ctl_END     (2)
#define SOC_HDMI_TMDS_CTL1_bgr_test_START  (3)
#define SOC_HDMI_TMDS_CTL1_bgr_test_END    (3)
#define SOC_HDMI_TMDS_CTL1_sw_ctl_START    (4)
#define SOC_HDMI_TMDS_CTL1_sw_ctl_END      (5)
#define SOC_HDMI_TMDS_CTL1_bw_ctl_START    (6)
#define SOC_HDMI_TMDS_CTL1_bw_ctl_END      (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_TMDS_CTL2_UNION
 �ṹ˵��  : TMDS_CTL2 �Ĵ����ṹ���塣��ַƫ����:0x1800+'0x004����ֵ:0x00000001�����:32
 �Ĵ���˵��: TMDS CNTL2 Register
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  clkdetect_en : 1;  /* bit[0-0] : default = 1 Clock detector enable */
        unsigned int  rsen         : 1;  /* bit[1-1] : Receiver sense output
                                                       1��b1: When receiver is connected
                                                       1��b0: When receiver is dis-connected.
                                                       default = 0 */
        unsigned int  clkdetect    : 1;  /* bit[2-2] : Clock detector output (also requires pdb =1, TMDS_CTL3[0]) 
                                                       clkdetect=1��b1 if clock > 2.5MHz (typ)
                                                       clkdetect=1��b0 if clock < 2.5MHz (typ)
                                                       default = 0 */
        unsigned int  sel_bgr      : 1;  /* bit[3-3] : default = 0. Change this value to 1��b1 during initialization. */
        unsigned int  term_en      : 1;  /* bit[4-4] : Source termination enable control
                                                       1��b0 (Default): Source termination disabled.
                                                       1��b1 : Source termination enabled. Output Driver must be enabled else bus termination is switched off.
                                                       Source termination enable is required at higher frequency greater than 165Mhz of TMDS clock. */
        unsigned int  oe           : 1;  /* bit[5-5] : default = 0
                                                       Outputs enable control. Output drivers of TMDS outputs are switched off by default (1��b0).
                                                       When made to 1��b1 they are switched on. */
        unsigned int  cap_ctl      : 2;  /* bit[6-7] : default = 00
                                                       This bit is for Shrek analog. Do not change these values. */
        unsigned int  reserved     : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_TMDS_CTL2_UNION;
#define SOC_HDMI_TMDS_CTL2_clkdetect_en_START  (0)
#define SOC_HDMI_TMDS_CTL2_clkdetect_en_END    (0)
#define SOC_HDMI_TMDS_CTL2_rsen_START          (1)
#define SOC_HDMI_TMDS_CTL2_rsen_END            (1)
#define SOC_HDMI_TMDS_CTL2_clkdetect_START     (2)
#define SOC_HDMI_TMDS_CTL2_clkdetect_END       (2)
#define SOC_HDMI_TMDS_CTL2_sel_bgr_START       (3)
#define SOC_HDMI_TMDS_CTL2_sel_bgr_END         (3)
#define SOC_HDMI_TMDS_CTL2_term_en_START       (4)
#define SOC_HDMI_TMDS_CTL2_term_en_END         (4)
#define SOC_HDMI_TMDS_CTL2_oe_START            (5)
#define SOC_HDMI_TMDS_CTL2_oe_END              (5)
#define SOC_HDMI_TMDS_CTL2_cap_ctl_START       (6)
#define SOC_HDMI_TMDS_CTL2_cap_ctl_END         (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_TMDS_CTL3_UNION
 �ṹ˵��  : TMDS_CTL3 �Ĵ����ṹ���塣��ַƫ����:0x1800+'0x008����ֵ:0x000000A9�����:32
 �Ĵ���˵��: TMDS CNTL3 Register
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pdb          : 1;  /* bit[0-0] : Powerdown Control
                                                       default = 1��b1; No power down
                                                       1��b0 : Phy will be power down */
        unsigned int  dpcolor_ctl  : 2;  /* bit[1-2] : default = 00
                                                       Deep color mode control. When dpcolor_ctl[1:0]
                                                       11: invalid
                                                       10: 12 bit/channel, multiplies the input clock by 1.5
                                                       01: 10 bit/channel, multiplies the input clock by 1
                                                       00: 8 bit/channel, multiplies the input clock by 1 (default) */
        unsigned int  clkmult_ctl  : 2;  /* bit[3-4] : default = 01
                                                       Clock multiplication factor control. When clkmult_ctl[1:0] =
                                                       11: 4x
                                                       10: 2x
                                                       01: 1x (default)
                                                       00: 0.5x
                                                       Use this setting when pixel repetition is needed. */
        unsigned int  fifo_byp     : 1;  /* bit[5-5] : default = 1. Do not change this setting. */
        unsigned int  bist_sel     : 1;  /* bit[6-6] : default = 0
                                                       1��b0: BIST pattern generator is disabled
                                                       1��b1: BIST pattern generator is enabled. Use this setting to send BIST pattern data over the TMDS signals. */
        unsigned int  p_clk_select : 1;  /* bit[7-7] : default = 1: NOT USED */
        unsigned int  reserved     : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_TMDS_CTL3_UNION;
#define SOC_HDMI_TMDS_CTL3_pdb_START           (0)
#define SOC_HDMI_TMDS_CTL3_pdb_END             (0)
#define SOC_HDMI_TMDS_CTL3_dpcolor_ctl_START   (1)
#define SOC_HDMI_TMDS_CTL3_dpcolor_ctl_END     (2)
#define SOC_HDMI_TMDS_CTL3_clkmult_ctl_START   (3)
#define SOC_HDMI_TMDS_CTL3_clkmult_ctl_END     (4)
#define SOC_HDMI_TMDS_CTL3_fifo_byp_START      (5)
#define SOC_HDMI_TMDS_CTL3_fifo_byp_END        (5)
#define SOC_HDMI_TMDS_CTL3_bist_sel_START      (6)
#define SOC_HDMI_TMDS_CTL3_bist_sel_END        (6)
#define SOC_HDMI_TMDS_CTL3_p_clk_select_START  (7)
#define SOC_HDMI_TMDS_CTL3_p_clk_select_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_BIST_CNTL_UNION
 �ṹ˵��  : BIST_CNTL �Ĵ����ṹ���塣��ַƫ����:0x1800+'0x00C����ֵ:0xX�����:32
 �Ĵ���˵��: BIST CNTL Register
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  bist_en        : 1;  /* bit[0-0] : 0 �C bist is disabled
                                                         1 - bist is enabled
                                                         Whenever bist is enabled normal operation of the chip ceases and the chip goes into bist mode. */
        unsigned int  bist_on        : 1;  /* bit[1-1] : output to bist mux before serializer, selects output mux bist path
                                                         1 = bist path selected
                                                         0 = tmds path selected */
        unsigned int  enc_byp        : 1;  /* bit[2-2] : 1 = Bypass the DVI encoder.
                                                         0 = Data goes through the DVI encoder */
        unsigned int  scan_mode      : 1;  /* bit[3-3] : Default 1'b0.
                                                         Internal scan_mode signal (not used) */
        unsigned int  bist_done      : 1;  /* bit[4-4] : Result of BIST
                                                         1 = bist done
                                                         0 = bist running or bist off */
        unsigned int  aclkcount_2_   : 1;  /* bit[5-5] : Default 1'b0. This bit with other aclkcount[1:0] bits will determine the frequency of the audio clock. */
        unsigned int  bgr_ext_res_en : 1;  /* bit[6-6] : Default 1'b0. This bit is for Shrek analog. Change this value to 1��b1 during initialization. */
        unsigned int  pll_ibg_en     : 1;  /* bit[7-7] : Default 1'b0. This bit is for Shrek analog. Change this value to 1��b1 during initialization. */
        unsigned int  reserved       : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_BIST_CNTL_UNION;
#define SOC_HDMI_BIST_CNTL_bist_en_START         (0)
#define SOC_HDMI_BIST_CNTL_bist_en_END           (0)
#define SOC_HDMI_BIST_CNTL_bist_on_START         (1)
#define SOC_HDMI_BIST_CNTL_bist_on_END           (1)
#define SOC_HDMI_BIST_CNTL_enc_byp_START         (2)
#define SOC_HDMI_BIST_CNTL_enc_byp_END           (2)
#define SOC_HDMI_BIST_CNTL_scan_mode_START       (3)
#define SOC_HDMI_BIST_CNTL_scan_mode_END         (3)
#define SOC_HDMI_BIST_CNTL_bist_done_START       (4)
#define SOC_HDMI_BIST_CNTL_bist_done_END         (4)
#define SOC_HDMI_BIST_CNTL_aclkcount_2__START    (5)
#define SOC_HDMI_BIST_CNTL_aclkcount_2__END      (5)
#define SOC_HDMI_BIST_CNTL_bgr_ext_res_en_START  (6)
#define SOC_HDMI_BIST_CNTL_bgr_ext_res_en_END    (6)
#define SOC_HDMI_BIST_CNTL_pll_ibg_en_START      (7)
#define SOC_HDMI_BIST_CNTL_pll_ibg_en_END        (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_BIST_PATTERN_UNION
 �ṹ˵��  : BIST_PATTERN �Ĵ����ṹ���塣��ַƫ����:0x1800+'0x010����ֵ:0x00000000�����:32
 �Ĵ���˵��: BIST Pattern Register
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pat_7_0_ : 8;  /* bit[0-7] : Bist pattern. Refer to BIST document for more details. */
        unsigned int  reserved : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_BIST_PATTERN_UNION;
#define SOC_HDMI_BIST_PATTERN_pat_7_0__START  (0)
#define SOC_HDMI_BIST_PATTERN_pat_7_0__END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_BIST_INSTR0_UNION
 �ṹ˵��  : BIST_INSTR0 �Ĵ����ṹ���塣��ַƫ����:0x1800+'0x014����ֵ:0x00000000�����:32
 �Ĵ���˵��: BIST Instruction 0 Register
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  instruct_7_0_ : 8;  /* bit[0-7] : instruct[7:0].Refer to BIST document for more details. */
        unsigned int  reserved      : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_BIST_INSTR0_UNION;
#define SOC_HDMI_BIST_INSTR0_instruct_7_0__START  (0)
#define SOC_HDMI_BIST_INSTR0_instruct_7_0__END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_BIST_INSTR1_UNION
 �ṹ˵��  : BIST_INSTR1 �Ĵ����ṹ���塣��ַƫ����:0x1800+'0x018����ֵ:0x00000000�����:32
 �Ĵ���˵��: TMDS Control 7 Register
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pat_9_8_       : 2;  /* bit[0-1] : MSB bits of pat[9:0]. Refer to BIST document for more details. */
        unsigned int  conf_9_8_      : 2;  /* bit[2-3] : MSB bits of conf[9:0]. Refer to BIST document for more details. */
        unsigned int  cec_osc_en     : 1;  /* bit[4-4] : Default 1'b0.
                                                         1��b0: osc_clk_dig clock is disabled
                                                         1��b1: osc_clk_dig clock is enabled */
        unsigned int  instruct_10_8_ : 3;  /* bit[5-7] : MSB bits of instruct[10:0]. Refer to BIST document for more details. */
        unsigned int  reserved       : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_BIST_INSTR1_UNION;
#define SOC_HDMI_BIST_INSTR1_pat_9_8__START        (0)
#define SOC_HDMI_BIST_INSTR1_pat_9_8__END          (1)
#define SOC_HDMI_BIST_INSTR1_conf_9_8__START       (2)
#define SOC_HDMI_BIST_INSTR1_conf_9_8__END         (3)
#define SOC_HDMI_BIST_INSTR1_cec_osc_en_START      (4)
#define SOC_HDMI_BIST_INSTR1_cec_osc_en_END        (4)
#define SOC_HDMI_BIST_INSTR1_instruct_10_8__START  (5)
#define SOC_HDMI_BIST_INSTR1_instruct_10_8__END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_BIST_CONF0_UNION
 �ṹ˵��  : BIST_CONF0 �Ĵ����ṹ���塣��ַƫ����:0x1800+'0x01C����ֵ:0x00000055�����:32
 �Ĵ���˵��: TMDS Control 8 Register
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  conf_7_0_ : 8;  /* bit[0-7] : MSB bits of conf[9:0]. Refer to BIST document for more details. */
        unsigned int  reserved  : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_BIST_CONF0_UNION;
#define SOC_HDMI_BIST_CONF0_conf_7_0__START  (0)
#define SOC_HDMI_BIST_CONF0_conf_7_0__END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_TMDS_CNTL9_UNION
 �ṹ˵��  : TMDS_CNTL9 �Ĵ����ṹ���塣��ַƫ����:0x1800+'0x020����ֵ:0x00000000�����:32
 �Ĵ���˵��: TMDS Control 9 Register
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  testmode       : 1;  /* bit[0-0] : default = 0. internal testmode signal (not used) */
        unsigned int  cec_osc_ctl    : 4;  /* bit[1-4] : default = 0000. This value determines the frequency of osc_clk_out. Change this value to 4��b1001 during initialization to get a frequency of 50 to 60Mhz across PVT corner. */
        unsigned int  aclkcount_1_0_ : 2;  /* bit[5-6] : default = 00. This value along with aclkcount[2] bit, will determine the frequency of the audio clock ��aclk_dig��. */
        unsigned int  ten_bit_bypass : 1;  /* bit[7-7] : default = 0.
                                                         Set to 1��b1, if DVI encoder needs to be bypassed in the Phy and enable the DVI encoder in digital link layer.
                                                         Set to 1��b0, if DVI encoder needs to be enabled
                                                         in the Phy and disable the DVI encoder in digital link layer. */
        unsigned int  reserved       : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_TMDS_CNTL9_UNION;
#define SOC_HDMI_TMDS_CNTL9_testmode_START        (0)
#define SOC_HDMI_TMDS_CNTL9_testmode_END          (0)
#define SOC_HDMI_TMDS_CNTL9_cec_osc_ctl_START     (1)
#define SOC_HDMI_TMDS_CNTL9_cec_osc_ctl_END       (4)
#define SOC_HDMI_TMDS_CNTL9_aclkcount_1_0__START  (5)
#define SOC_HDMI_TMDS_CNTL9_aclkcount_1_0__END    (6)
#define SOC_HDMI_TMDS_CNTL9_ten_bit_bypass_START  (7)
#define SOC_HDMI_TMDS_CNTL9_ten_bit_bypass_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_TEST_MUX_CTRL_UNION
 �ṹ˵��  : TEST_MUX_CTRL �Ĵ����ṹ���塣��ַƫ����:0x1800+'0x024����ֵ:0x00000000�����:32
 �Ĵ���˵��: Test Mux control register
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  test_mux_ctrl_7_0_ : 8;  /* bit[0-7] : default = 0000 0000
                                                             test_mux_ctrl[3:0] are used. Other bits are not used. */
        unsigned int  reserved           : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_TEST_MUX_CTRL_UNION;
#define SOC_HDMI_TEST_MUX_CTRL_test_mux_ctrl_7_0__START  (0)
#define SOC_HDMI_TEST_MUX_CTRL_test_mux_ctrl_7_0__END    (7)


/*****************************************************************************
 �ṹ��    : SOC_HDMI_CHIP_ID_UNION
 �ṹ˵��  : CHIP_ID �Ĵ����ṹ���塣��ַƫ����:0x1800+'0x028����ֵ:0x000000A0�����:32
 �Ĵ���˵��: Chip ID register
*****************************************************************************/
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  chipid   : 8;  /* bit[0-7] : CHIP ID */
        unsigned int  reserved : 24; /* bit[8-31]: reserved */
    } reg;
} SOC_HDMI_CHIP_ID_UNION;
#define SOC_HDMI_CHIP_ID_chipid_START    (0)
#define SOC_HDMI_CHIP_ID_chipid_END      (7)






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

#endif /* end of soc_hdmi_interface.h */
