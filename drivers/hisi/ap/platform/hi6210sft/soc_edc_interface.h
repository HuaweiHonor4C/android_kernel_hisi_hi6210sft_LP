

/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/

#ifndef __SOC_EDC_INTERFACE_H__
#define __SOC_EDC_INTERFACE_H__

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
/* �Ĵ���˵����EDC�汾��Ϣ
   λ����UNION�ṹ:  SOC_EDC_ID_UNION */
#define SOC_EDC_ID_ADDR(base)                         ((base) + (0x000))

/* �Ĵ���˵����Channel1��ͨ����ַ
   λ����UNION�ṹ:  SOC_EDC_CH1L_ADDR_UNION */
#define SOC_EDC_CH1L_ADDR_ADDR(base)                  ((base) + (0x004))

/* �Ĵ���˵����Channel1��ͨ����ַ
   λ����UNION�ṹ:  SOC_EDC_CH1R_ADDR_UNION */
#define SOC_EDC_CH1R_ADDR_ADDR(base)                  ((base) + (0x008))

/* �Ĵ���˵����Channel1�е�ַƫ��
   λ����UNION�ṹ:  SOC_EDC_CH1_STRIDE_UNION */
#define SOC_EDC_CH1_STRIDE_ADDR(base)                 ((base) + (0x00C))

/* �Ĵ���˵����Channel1��ʾ����Ĵ���
   λ����UNION�ṹ:  SOC_EDC_CH1_XY_UNION */
#define SOC_EDC_CH1_XY_ADDR(base)                     ((base) + (0x010))

/* �Ĵ���˵����Channel1ͼ��ߴ�
   λ����UNION�ṹ:  SOC_EDC_CH1_SIZE_UNION */
#define SOC_EDC_CH1_SIZE_ADDR(base)                   ((base) + (0x014))

/* �Ĵ���˵����Channel1����
   λ����UNION�ṹ:  SOC_EDC_CH1_CTL_UNION */
#define SOC_EDC_CH1_CTL_ADDR(base)                    ((base) + (0x018))

/* �Ĵ���˵����Channel1�ؼ�ɫ����
   λ����UNION�ṹ:  SOC_EDC_CH1_COLORK_MIN_UNION */
#define SOC_EDC_CH1_COLORK_MIN_ADDR(base)             ((base) + (0x01C))

/* �Ĵ���˵����Channel1�ؼ�ɫ����
   λ����UNION�ṹ:  SOC_EDC_CH1_COLORK_MAX_UNION */
#define SOC_EDC_CH1_COLORK_MAX_ADDR(base)             ((base) + (0x020))

/* �Ĵ���˵����Channel2 Left��ַ
   λ����UNION�ṹ:  SOC_EDC_CH2L_ADDR_UNION */
#define SOC_EDC_CH2L_ADDR_ADDR(base)                  ((base) + (0x024))

/* �Ĵ���˵����Channel2 Right��ַ
   λ����UNION�ṹ:  SOC_EDC_CH2R_ADDR_UNION */
#define SOC_EDC_CH2R_ADDR_ADDR(base)                  ((base) + (0x028))

/* �Ĵ���˵����Channel2 Stride
   λ����UNION�ṹ:  SOC_EDC_CH2_STRIDE_UNION */
#define SOC_EDC_CH2_STRIDE_ADDR(base)                 ((base) + (0x02C))

/* �Ĵ���˵����Channel2����Ĵ���
   λ����UNION�ṹ:  SOC_EDC_CH2_XY_UNION */
#define SOC_EDC_CH2_XY_ADDR(base)                     ((base) + (0x030))

/* �Ĵ���˵����Channel2ͼ��ߴ�
   λ����UNION�ṹ:  SOC_EDC_CH2_SIZE_UNION */
#define SOC_EDC_CH2_SIZE_ADDR(base)                   ((base) + (0x034))

/* �Ĵ���˵����EDC_CH2_CTL
   λ����UNION�ṹ:  SOC_EDC_CH2_CTL_UNION */
#define SOC_EDC_CH2_CTL_ADDR(base)                    ((base) + (0x0038))

/* �Ĵ���˵����Channel2�ؼ�ɫ����
   λ����UNION�ṹ:  SOC_EDC_CH2_COLORK_MIN_UNION */
#define SOC_EDC_CH2_COLORK_MIN_ADDR(base)             ((base) + (0x003C))

/* �Ĵ���˵����Channel2�ؼ�ɫ����
   λ����UNION�ṹ:  SOC_EDC_CH2_COLORK_MAX_UNION */
#define SOC_EDC_CH2_COLORK_MAX_ADDR(base)             ((base) + (0x0040))

/* �Ĵ���˵�������ӿ���
   λ����UNION�ṹ:  SOC_EDC_CH12_OVLY_UNION */
#define SOC_EDC_CH12_OVLY_ADDR(base)                  ((base) + (0x0044))

/* �Ĵ���˵����Channe1��Channel2����Alpha Blendingʱ��ȫ��Alpha����ֵ
   λ����UNION�ṹ:  SOC_EDC_CH12_GLB_ALP_VAL_UNION */
#define SOC_EDC_CH12_GLB_ALP_VAL_ADDR(base)           ((base) + (0x0048))

/* �Ĵ���˵����Channel1��Channel2����Blendingʱ������ɫ0����
   λ����UNION�ṹ:  SOC_EDC_CH12_MSK_COLOR0_MIN_UNION */
#define SOC_EDC_CH12_MSK_COLOR0_MIN_ADDR(base)        ((base) + (0x004C))

/* �Ĵ���˵����Channel1��Channel2����Blendingʱ������ɫ0����
   λ����UNION�ṹ:  SOC_EDC_CH12_MSK_COLOR0_MAX_UNION */
#define SOC_EDC_CH12_MSK_COLOR0_MAX_ADDR(base)        ((base) + (0x0050))

/* �Ĵ���˵����Channel1��Channel2����Blendingʱ������ɫ1����
   λ����UNION�ṹ:  SOC_EDC_CH12_MSK_COLOR1_MIN_UNION */
#define SOC_EDC_CH12_MSK_COLOR1_MIN_ADDR(base)        ((base) + (0x0054))

/* �Ĵ���˵����Channel1��Channel2����Blendingʱ������ɫ1����
   λ����UNION�ṹ:  SOC_EDC_CH12_MSK_COLOR1_MAX_UNION */
#define SOC_EDC_CH12_MSK_COLOR1_MAX_ADDR(base)        ((base) + (0x0058))

/* �Ĵ���˵����Channel1��Channel2����Blendingʱ������ɫ2����
   λ����UNION�ṹ:  SOC_EDC_CH12_MSK_COLOR2_MIN_UNION */
#define SOC_EDC_CH12_MSK_COLOR2_MIN_ADDR(base)        ((base) + (0x005C))

/* �Ĵ���˵����Channel1��Channel2����Blendingʱ������ɫ2����
   λ����UNION�ṹ:  SOC_EDC_CH12_MSK_COLOR2_MAX_UNION */
#define SOC_EDC_CH12_MSK_COLOR2_MAX_ADDR(base)        ((base) + (0x0060))

/* �Ĵ���˵����Channel1��Channel2����Blendingʱ������ɫ3����
   λ����UNION�ṹ:  SOC_EDC_CH12_MSK_COLOR3_MIN_UNION */
#define SOC_EDC_CH12_MSK_COLOR3_MIN_ADDR(base)        ((base) + (0x0064))

/* �Ĵ���˵����Channel1��Channel2����Blendingʱ������ɫ3����
   λ����UNION�ṹ:  SOC_EDC_CH12_MSK_COLOR3_MAX_UNION */
#define SOC_EDC_CH12_MSK_COLOR3_MAX_ADDR(base)        ((base) + (0x0068))

/* �Ĵ���˵����Cursor��ͨ����ַ
   λ����UNION�ṹ:  SOC_EDC_CRSL_ADDR_UNION */
#define SOC_EDC_CRSL_ADDR_ADDR(base)                  ((base) + (0x006C))

/* �Ĵ���˵����Cursor��ͨ����ַ
   λ����UNION�ṹ:  SOC_EDC_CRSR_ADDR_UNION */
#define SOC_EDC_CRSR_ADDR_ADDR(base)                  ((base) + (0x0070))

/* �Ĵ���˵����Cursor Stride
   λ����UNION�ṹ:  SOC_EDC_CRS_STRIDE_UNION */
#define SOC_EDC_CRS_STRIDE_ADDR(base)                 ((base) + (0x0074))

/* �Ĵ���˵����Cursor����Ĵ���
   λ����UNION�ṹ:  SOC_EDC_CRS_XY_UNION */
#define SOC_EDC_CRS_XY_ADDR(base)                     ((base) + (0x0078))

/* �Ĵ���˵����Cursorͼ��ߴ�
   λ����UNION�ṹ:  SOC_EDC_CRS_SIZE_UNION */
#define SOC_EDC_CRS_SIZE_ADDR(base)                   ((base) + (0x07C))

/* �Ĵ���˵����Cursor����
   λ����UNION�ṹ:  SOC_EDC_CRS_CTL_UNION */
#define SOC_EDC_CRS_CTL_ADDR(base)                    ((base) + (0x0080))

/* �Ĵ���˵����Cursor�ؼ�ɫ����
   λ����UNION�ṹ:  SOC_EDC_CRS_COLORK_MIN_UNION */
#define SOC_EDC_CRS_COLORK_MIN_ADDR(base)             ((base) + (0x0084))

/* �Ĵ���˵����Cursor�ؼ�ɫ����
   λ����UNION�ṹ:  SOC_EDC_CRS_COLORK_MAX_UNION */
#define SOC_EDC_CRS_COLORK_MAX_ADDR(base)             ((base) + (0x0088))

/* �Ĵ���˵����Cursor���²����Alpha Blendingʱ��ȫ��Alpha����ֵ
   λ����UNION�ṹ:  SOC_EDC_CRS_GLB_ALP_VAL_UNION */
#define SOC_EDC_CRS_GLB_ALP_VAL_ADDR(base)            ((base) + (0x008C))

/* �Ĵ���˵������ʾ�ߴ�
   λ����UNION�ṹ:  SOC_EDC_DISP_SIZE_UNION */
#define SOC_EDC_DISP_SIZE_ADDR(base)                  ((base) + (0x090))

/* �Ĵ���˵������ʾ����
   λ����UNION�ṹ:  SOC_EDC_DISP_CTL_UNION */
#define SOC_EDC_DISP_CTL_ADDR(base)                   ((base) + (0x094))

/* �Ĵ���˵������ʾ����ɫ
   λ����UNION�ṹ:  SOC_EDC_DISP_DPD_UNION */
#define SOC_EDC_DISP_DPD_ADDR(base)                   ((base) + (0x098))

/* �Ĵ���˵������ʾ״̬
   λ����UNION�ṹ:  SOC_EDC_STS_UNION */
#define SOC_EDC_STS_ADDR(base)                        ((base) + (0x09C))

/* �Ĵ���˵�����ж�״̬
   λ����UNION�ṹ:  SOC_EDC_INTS_UNION */
#define SOC_EDC_INTS_ADDR(base)                       ((base) + (0x0A0))

/* �Ĵ���˵�����ж�ʹ��
   λ����UNION�ṹ:  SOC_EDC_INTE_UNION */
#define SOC_EDC_INTE_ADDR(base)                       ((base) + (0x0A4))

/* �Ĵ���˵����Gamma��������������
   λ����UNION�ṹ:  SOC_EDC_GAMCNT_CLR_UNION */
#define SOC_EDC_GAMCNT_CLR_ADDR(base)                 ((base) + (0x0A8))

/* �Ĵ���˵����Channel1 Tile�洢ͼ��Ĵ�ֱ�߶�
   λ����UNION�ṹ:  SOC_EDC_TILE_SIZE_VRT_UNION */
#define SOC_EDC_TILE_SIZE_VRT_ADDR(base)              ((base) + (0x0AC))

/* �Ĵ���˵����Channel1 Tile��ʽ�µ�Crop�������
   λ����UNION�ṹ:  SOC_EDC_TILE_CROP_UNION */
#define SOC_EDC_TILE_CROP_ADDR(base)                  ((base) + (0x0B0))

/* �Ĵ���˵����Tile Channel��ͨ��Engine0��ַ
   λ����UNION�ṹ:  SOC_EDC_TL_ENGIN0_ADDR_UNION */
#define SOC_EDC_TL_ENGIN0_ADDR_ADDR(base)             ((base) + (0x0B4))

/* �Ĵ���˵����Tile Channel��ͨ��Engine1��ַ
   λ����UNION�ṹ:  SOC_EDC_TL_ENGIN1_ADDR_UNION */
#define SOC_EDC_TL_ENGIN1_ADDR_ADDR(base)             ((base) + (0x0B8))

/* �Ĵ���˵����Tile Channel��ͨ��Engine0��ַ
   λ����UNION�ṹ:  SOC_EDC_TR_ENGIN0_ADDR_UNION */
#define SOC_EDC_TR_ENGIN0_ADDR_ADDR(base)             ((base) + (0x0BC))

/* �Ĵ���˵����Tile Channel��ͨ��Engine1��ַ
   λ����UNION�ṹ:  SOC_EDC_TR_ENGIN1_ADDR_UNION */
#define SOC_EDC_TR_ENGIN1_ADDR_ADDR(base)             ((base) + (0x0C0))

/* �Ĵ���˵������ȫ���ж�״̬�Ĵ���
   λ����UNION�ṹ:  SOC_EDC_TRUST_INTS_UNION */
#define SOC_EDC_TRUST_INTS_ADDR(base)                 ((base) + (0x0D0))

/* �Ĵ���˵������ȫ���ж����μĴ���
   λ����UNION�ṹ:  SOC_EDC_TRUST_MASK_UNION */
#define SOC_EDC_TRUST_MASK_ADDR(base)                 ((base) + (0x00D4))

/* �Ĵ���˵������ͼ�����߰�ȫλ���üĴ���
   λ����UNION�ṹ:  SOC_EDC_APROT_CFG_UNION */
#define SOC_EDC_APROT_CFG_ADDR(base)                  ((base) + (0x00D8))

/* �Ĵ���˵����Cursor��Clip���üĴ���
   λ����UNION�ṹ:  SOC_EDC_CRS_CLIP_UNION */
#define SOC_EDC_CRS_CLIP_ADDR(base)                   ((base) + (0x00DC))

/* �Ĵ���˵����Channel1ͼ��Clip���üĴ���
   λ����UNION�ṹ:  SOC_EDC_CH1_CLIP_UNION */
#define SOC_EDC_CH1_CLIP_ADDR(base)                   ((base) + (0x00F0))

/* �Ĵ���˵����Channel2ͼ��Clip���üĴ���
   λ����UNION�ṹ:  SOC_EDC_CH2_CLIP_UNION */
#define SOC_EDC_CH2_CLIP_ADDR(base)                   ((base) + (0x00F4))

/* �Ĵ���˵����Gamma�����Ĵ���(k=0~39)
   λ����UNION�ṹ:  SOC_EDC_GAMMA_UNION */
#define SOC_EDC_GAMMA_ADDR(base, k)                   ((base) + (0x100+(k)*0x4))

/* �Ĵ���˵����Channel1 CSC����ֱ��ƫ���Ĵ���
   λ����UNION�ṹ:  SOC_EDC_CH1_CSCIDC_UNION */
#define SOC_EDC_CH1_CSCIDC_ADDR(base)                 ((base) + (0x200))

/* �Ĵ���˵����Channel1 CSC���ֱ��ƫ���Ĵ���
   λ����UNION�ṹ:  SOC_EDC_CH1_CSCODC_UNION */
#define SOC_EDC_CH1_CSCODC_ADDR(base)                 ((base) + (0x204))

/* �Ĵ���˵����Channel1 CSC�����Ĵ���0
   λ����UNION�ṹ:  SOC_EDC_CH1_CSCP0_UNION */
#define SOC_EDC_CH1_CSCP0_ADDR(base)                  ((base) + (0x208))

/* �Ĵ���˵����Channel1 CSC�����Ĵ���1
   λ����UNION�ṹ:  SOC_EDC_CH1_CSCP1_UNION */
#define SOC_EDC_CH1_CSCP1_ADDR(base)                  ((base) + (0x20C))

/* �Ĵ���˵����Channel1 CSC�����Ĵ���2
   λ����UNION�ṹ:  SOC_EDC_CH1_CSCP2_UNION */
#define SOC_EDC_CH1_CSCP2_ADDR(base)                  ((base) + (0x210))

/* �Ĵ���˵����Channel1 CSC�����Ĵ���3
   λ����UNION�ṹ:  SOC_EDC_CH1_CSCP3_UNION */
#define SOC_EDC_CH1_CSCP3_ADDR(base)                  ((base) + (0x214))

/* �Ĵ���˵����Channel1 CSC�����Ĵ���4
   λ����UNION�ṹ:  SOC_EDC_CH1_CSCP4_UNION */
#define SOC_EDC_CH1_CSCP4_ADDR(base)                  ((base) + (0x218))

/* �Ĵ���˵����Channel2 CSC����ֱ��ƫ���Ĵ���
   λ����UNION�ṹ:  SOC_EDC_CH2_CSCIDC_UNION */
#define SOC_EDC_CH2_CSCIDC_ADDR(base)                 ((base) + (0x300))

/* �Ĵ���˵����Channel2 CSC���ֱ��ƫ���Ĵ���
   λ����UNION�ṹ:  SOC_EDC_CH2_CSCODC_UNION */
#define SOC_EDC_CH2_CSCODC_ADDR(base)                 ((base) + (0x304))

/* �Ĵ���˵����Channel2 CSC�����Ĵ���0
   λ����UNION�ṹ:  SOC_EDC_CH2_CSCP0_UNION */
#define SOC_EDC_CH2_CSCP0_ADDR(base)                  ((base) + (0x308))

/* �Ĵ���˵����Channel2 CSC�����Ĵ���1
   λ����UNION�ṹ:  SOC_EDC_CH2_CSCP1_UNION */
#define SOC_EDC_CH2_CSCP1_ADDR(base)                  ((base) + (0x30C))

/* �Ĵ���˵����Channel2 CSC�����Ĵ���2
   λ����UNION�ṹ:  SOC_EDC_CH2_CSCP2_UNION */
#define SOC_EDC_CH2_CSCP2_ADDR(base)                  ((base) + (0x310))

/* �Ĵ���˵����Channel2 CSC�����Ĵ���3
   λ����UNION�ṹ:  SOC_EDC_CH2_CSCP3_UNION */
#define SOC_EDC_CH2_CSCP3_ADDR(base)                  ((base) + (0x314))

/* �Ĵ���˵����Channel2 CSC�����Ĵ���4
   λ����UNION�ṹ:  SOC_EDC_CH2_CSCP4_UNION */
#define SOC_EDC_CH2_CSCP4_ADDR(base)                  ((base) + (0x318))

/* �Ĵ���˵�������CSC����ֱ��ƫ���Ĵ���
   λ����UNION�ṹ:  SOC_EDC_OUT_CSCIDC_UNION */
#define SOC_EDC_OUT_CSCIDC_ADDR(base)                 ((base) + (0x400))

/* �Ĵ���˵�������CSC���ֱ��ƫ���Ĵ���
   λ����UNION�ṹ:  SOC_EDC_OUT_CSCODC_UNION */
#define SOC_EDC_OUT_CSCODC_ADDR(base)                 ((base) + (0x404))

/* �Ĵ���˵�������CSC�����Ĵ���0
   λ����UNION�ṹ:  SOC_EDC_OUT_CSCP0_UNION */
#define SOC_EDC_OUT_CSCP0_ADDR(base)                  ((base) + (0x408))

/* �Ĵ���˵�������CSC�����Ĵ���1
   λ����UNION�ṹ:  SOC_EDC_OUT_CSCP1_UNION */
#define SOC_EDC_OUT_CSCP1_ADDR(base)                  ((base) + (0x40C))

/* �Ĵ���˵�������CSC�����Ĵ���2
   λ����UNION�ṹ:  SOC_EDC_OUT_CSCP2_UNION */
#define SOC_EDC_OUT_CSCP2_ADDR(base)                  ((base) + (0x410))

/* �Ĵ���˵�������CSC�����Ĵ���3
   λ����UNION�ṹ:  SOC_EDC_OUT_CSCP3_UNION */
#define SOC_EDC_OUT_CSCP3_ADDR(base)                  ((base) + (0x414))

/* �Ĵ���˵�������CSC�����Ĵ���4
   λ����UNION�ṹ:  SOC_EDC_OUT_CSCP4_UNION */
#define SOC_EDC_OUT_CSCP4_ADDR(base)                  ((base) + (0x418))

/* �Ĵ���˵����Scalerˮƽ���ſ��ƼĴ���
   λ����UNION�ṹ:  SOC_EDC_CH1_SCL_HSP_UNION */
#define SOC_EDC_CH1_SCL_HSP_ADDR(base)                ((base) + (0x500))

/* �Ĵ���˵����Scalerˮƽ��ʼ���ƼĴ���
   λ����UNION�ṹ:  SOC_EDC_CH1_SCL_HOFFSET_UNION */
#define SOC_EDC_CH1_SCL_HOFFSET_ADDR(base)            ((base) + (0x504))

/* �Ĵ���˵����Scaler��ֱ���ſ��ƼĴ���
   λ����UNION�ṹ:  SOC_EDC_CH1_SCL_VSP_UNION */
#define SOC_EDC_CH1_SCL_VSP_ADDR(base)                ((base) + (0x508))

/* �Ĵ���˵����Scaler��ֱ���ű����Ĵ���
   λ����UNION�ṹ:  SOC_EDC_CH1_SCL_VSR_UNION */
#define SOC_EDC_CH1_SCL_VSR_ADDR(base)                ((base) + (0x50C))

/* �Ĵ���˵����Scaler��ֱ��ʼ���ƼĴ���
   λ����UNION�ṹ:  SOC_EDC_CH1_SCL_VOFFSET_UNION */
#define SOC_EDC_CH1_SCL_VOFFSET_ADDR(base)            ((base) + (0x510))

/* �Ĵ���˵����Scaler���ͼ��ߴ�Ĵ���
   λ����UNION�ṹ:  SOC_EDC_CH1_SCL_ORES_UNION */
#define SOC_EDC_CH1_SCL_ORES_ADDR(base)               ((base) + (0x514))

/* �Ĵ���˵����Scaler����ͼ��ߴ�Ĵ���
   λ����UNION�ṹ:  SOC_EDC_CH1_SCL_IRES_UNION */
#define SOC_EDC_CH1_SCL_IRES_ADDR(base)               ((base) + (0x518))

/* �Ĵ���˵����Scalerˮƽ�˲������Ĵ�����m=1~8;i=1~4��
   λ����UNION�ṹ:  SOC_EDC_CH1_SCL_HPC_UNION */
#define SOC_EDC_CH1_SCL_HPC_ADDR(base, m, i)          ((base) + (0x600+((m)-1)*0x10+((i)-1)*0x4))

/* �Ĵ���˵����Scaler��ֱ�˲������Ĵ�����n=1~16;i=1~2��
   λ����UNION�ṹ:  SOC_EDC_CH1_SCL_VPC_UNION */
#define SOC_EDC_CH1_SCL_VPC_ADDR(base, n, j)          ((base) + (0x700+((n)-1)*0x8+((j)-1)*0x4))

/* �Ĵ���˵����LDIˮƽɨ����ƼĴ���0
   λ����UNION�ṹ:  SOC_EDC_LDI_HRZ_CTRL0_UNION */
#define SOC_EDC_LDI_HRZ_CTRL0_ADDR(base)              ((base) + (0x1000))

/* �Ĵ���˵����LDIˮƽɨ��Ĵ���1
   λ����UNION�ṹ:  SOC_EDC_LDI_HRZ_CTRL1_UNION */
#define SOC_EDC_LDI_HRZ_CTRL1_ADDR(base)              ((base) + (0x1004))

/* �Ĵ���˵����LDI��ֱɨ����ƼĴ���0
   λ����UNION�ṹ:  SOC_EDC_LDI_VRT_CTRL0_UNION */
#define SOC_EDC_LDI_VRT_CTRL0_ADDR(base)              ((base) + (0x1008))

/* �Ĵ���˵����LDI��ֱɨ����ƼĴ���1
   λ����UNION�ṹ:  SOC_EDC_LDI_VRT_CTRL1_UNION */
#define SOC_EDC_LDI_VRT_CTRL1_ADDR(base)              ((base) + (0x100C))

/* �Ĵ���˵����LDI�źż��Կ��ƼĴ���
   λ����UNION�ṹ:  SOC_EDC_LDI_PLR_CTRL_UNION */
#define SOC_EDC_LDI_PLR_CTRL_ADDR(base)               ((base) + (0x1010))

/* �Ĵ���˵����LDI��ʾ���ߴ�Ĵ���
   λ����UNION�ṹ:  SOC_EDC_LDI_DSP_SIZE_UNION */
#define SOC_EDC_LDI_DSP_SIZE_ADDR(base)               ((base) + (0x1014))

/* �Ĵ���˵����LDI 3D��ʾ���ƼĴ���
   λ����UNION�ṹ:  SOC_EDC_LDI_3D_CTRL_UNION */
#define SOC_EDC_LDI_3D_CTRL_ADDR(base)                ((base) + (0x1018))

/* �Ĵ���˵����LDI�ж����μĴ���
   λ����UNION�ṹ:  SOC_EDC_LDI_INT_EN_UNION */
#define SOC_EDC_LDI_INT_EN_ADDR(base)                 ((base) + (0x101C))

/* �Ĵ���˵����LDI���ƼĴ���
   λ����UNION�ṹ:  SOC_EDC_LDI_CTRL_UNION */
#define SOC_EDC_LDI_CTRL_ADDR(base)                   ((base) + (0x1020))

/* �Ĵ���˵����LDIԭʼ�ж�״̬�Ĵ���
   λ����UNION�ṹ:  SOC_EDC_LDI_ORG_INT_UNION */
#define SOC_EDC_LDI_ORG_INT_ADDR(base)                ((base) + (0x1024))

/* �Ĵ���˵����LDI���κ���ж�״̬�Ĵ���
   λ����UNION�ṹ:  SOC_EDC_LDI_MSK_INT_UNION */
#define SOC_EDC_LDI_MSK_INT_ADDR(base)                ((base) + (0x1028))

/* �Ĵ���˵����LDI�ж�����Ĵ���
   λ����UNION�ṹ:  SOC_EDC_LDI_INT_CLR_UNION */
#define SOC_EDC_LDI_INT_CLR_ADDR(base)                ((base) + (0x102C))

/* �Ĵ���˵����LDI��д���ƼĴ���
   λ����UNION�ṹ:  SOC_EDC_LDI_WORK_MODE_UNION */
#define SOC_EDC_LDI_WORK_MODE_ADDR(base)              ((base) + (0x1030))

/* �Ĵ���˵����HDMI/DSI����ʱ���ſؼĴ���
   λ����UNION�ṹ:  SOC_EDC_LDI_HDMI_DSI_GT_UNION */
#define SOC_EDC_LDI_HDMI_DSI_GT_ADDR(base)            ((base) + (0x1034))

/* �Ĵ���˵����3D frame by frame��ʽ��active space�׶�DE�ź���Ч���ƼĴ���
   λ����UNION�ṹ:  SOC_EDC_LDI_DE_SPACE_LOW_UNION */
#define SOC_EDC_LDI_DE_SPACE_LOW_ADDR(base)           ((base) + (0x1038))

/* �Ĵ���˵����DSI Command(CMD)ģʽ���ƼĴ���
   λ����UNION�ṹ:  SOC_EDC_DSI_CMD_MOD_CTRL_UNION */
#define SOC_EDC_DSI_CMD_MOD_CTRL_ADDR(base)           ((base) + (0x103C))

/* �Ĵ���˵����DSI Command(CMD)ģʽTE���ƼĴ���
   λ����UNION�ṹ:  SOC_EDC_DSI_TE_CTRL_UNION */
#define SOC_EDC_DSI_TE_CTRL_ADDR(base)                ((base) + (0x1040))

/* �Ĵ���˵����DSI��Ӧ�����üĴ������ƼĴ���
   λ����UNION�ṹ:  SOC_EDC_DSI_TE_HS_NUM_UNION */
#define SOC_EDC_DSI_TE_HS_NUM_ADDR(base)              ((base) + (0x1044))

/* �Ĵ���˵����DSI TE PINģʽ���Hsync��ȿ��ƼĴ���
   λ����UNION�ṹ:  SOC_EDC_DSI_TE_HS_WD_UNION */
#define SOC_EDC_DSI_TE_HS_WD_ADDR(base)               ((base) + (0x1048))

/* �Ĵ���˵����DSI TE PINģʽ���Vsync��ȿ��ƼĴ���
   λ����UNION�ṹ:  SOC_EDC_DSI_TE_VS_WD_UNION */
#define SOC_EDC_DSI_TE_VS_WD_ADDR(base)               ((base) + (0x104C))

/* �Ĵ���˵������MCU���ж�״̬�Ĵ���
   λ����UNION�ṹ:  SOC_EDC_LDI_MCU_INTS_UNION */
#define SOC_EDC_LDI_MCU_INTS_ADDR(base)               ((base) + (0x1050))

/* �Ĵ���˵������MCU���ж����μĴ���
   λ����UNION�ṹ:  SOC_EDC_LDI_MCU_INTE_UNION */
#define SOC_EDC_LDI_MCU_INTE_ADDR(base)               ((base) + (0x1054))

/* �Ĵ���˵������MCU���ж�����Ĵ���
   λ����UNION�ṹ:  SOC_EDC_LDI_MCU_INTC_UNION */
#define SOC_EDC_LDI_MCU_INTC_ADDR(base)               ((base) + (0x1058))

/* �Ĵ���˵����
   λ����UNION�ṹ:  SOC_EDC_CONTROL_REG0_UNION */
#define SOC_EDC_CONTROL_REG0_ADDR(base)               ((base) + (0x2000))

/* �Ĵ���˵����
   λ����UNION�ṹ:  SOC_EDC_CONTROL_REG1_UNION */
#define SOC_EDC_CONTROL_REG1_ADDR(base)               ((base) + (0x2004))

/* �Ĵ���˵����
   λ����UNION�ṹ:  SOC_EDC_HS_POS0_UNION */
#define SOC_EDC_HS_POS0_ADDR(base)                    ((base) + (0x2008))

/* �Ĵ���˵����
   λ����UNION�ṹ:  SOC_EDC_HS_POS1_UNION */
#define SOC_EDC_HS_POS1_ADDR(base)                    ((base) + (0x200C))

/* �Ĵ���˵����
   λ����UNION�ṹ:  SOC_EDC_FRAME_WIDTH0_UNION */
#define SOC_EDC_FRAME_WIDTH0_ADDR(base)               ((base) + (0x2010))

/* �Ĵ���˵����
   λ����UNION�ṹ:  SOC_EDC_FRAME_WIDTH1_UNION */
#define SOC_EDC_FRAME_WIDTH1_ADDR(base)               ((base) + (0x2014))

/* �Ĵ���˵����
   λ����UNION�ṹ:  SOC_EDC_FRAME_HEIGHT0_UNION */
#define SOC_EDC_FRAME_HEIGHT0_ADDR(base)              ((base) + (0x2018))

/* �Ĵ���˵����
   λ����UNION�ṹ:  SOC_EDC_FRAME_HEIGHT1_UNION */
#define SOC_EDC_FRAME_HEIGHT1_ADDR(base)              ((base) + (0x201C))

/* �Ĵ���˵����
   λ����UNION�ṹ:  SOC_EDC_VS_POS0_UNION */
#define SOC_EDC_VS_POS0_ADDR(base)                    ((base) + (0x2020))

/* �Ĵ���˵����
   λ����UNION�ṹ:  SOC_EDC_VS_POS1_UNION */
#define SOC_EDC_VS_POS1_ADDR(base)                    ((base) + (0x2024))

/* �Ĵ���˵����
   λ����UNION�ṹ:  SOC_EDC_IRIDIX_CONTROL_0_UNION */
#define SOC_EDC_IRIDIX_CONTROL_0_ADDR(base)           ((base) + (0x2400))

/* �Ĵ���˵����
   λ����UNION�ṹ:  SOC_EDC_VARIANCE_UNION */
#define SOC_EDC_VARIANCE_ADDR(base)                   ((base) + (0x240C))

/* �Ĵ���˵����
   λ����UNION�ṹ:  SOC_EDC_SLOPE_MAX_UNION */
#define SOC_EDC_SLOPE_MAX_ADDR(base)                  ((base) + (0x2410))

/* �Ĵ���˵����
   λ����UNION�ṹ:  SOC_EDC_SLOPE_MIN_UNION */
#define SOC_EDC_SLOPE_MIN_ADDR(base)                  ((base) + (0x2414))

/* �Ĵ���˵����
   λ����UNION�ṹ:  SOC_EDC_BLACK_LEVEL0_UNION */
#define SOC_EDC_BLACK_LEVEL0_ADDR(base)               ((base) + (0x2418))

/* �Ĵ���˵����
   λ����UNION�ṹ:  SOC_EDC_BLACK_LEVEL1_UNION */
#define SOC_EDC_BLACK_LEVEL1_ADDR(base)               ((base) + (0x241C))

/* �Ĵ���˵����
   λ����UNION�ṹ:  SOC_EDC_WHITE_LEVEL0_UNION */
#define SOC_EDC_WHITE_LEVEL0_ADDR(base)               ((base) + (0x2420))

/* �Ĵ���˵����
   λ����UNION�ṹ:  SOC_EDC_WHITE_LEVEL1_UNION */
#define SOC_EDC_WHITE_LEVEL1_ADDR(base)               ((base) + (0x2424))

/* �Ĵ���˵����
   λ����UNION�ṹ:  SOC_EDC_LIMIT_AMP_UNION */
#define SOC_EDC_LIMIT_AMP_ADDR(base)                  ((base) + (0x2428))

/* �Ĵ���˵����
   λ����UNION�ṹ:  SOC_EDC_DITHER_UNION */
#define SOC_EDC_DITHER_ADDR(base)                     ((base) + (0x242C))

/* �Ĵ���˵����
   λ����UNION�ṹ:  SOC_EDC_LOGO_LEFT_UNION */
#define SOC_EDC_LOGO_LEFT_ADDR(base)                  ((base) + (0x2800))

/* �Ĵ���˵����
   λ����UNION�ṹ:  SOC_EDC_LOGO_RIGHT_UNION */
#define SOC_EDC_LOGO_RIGHT_ADDR(base)                 ((base) + (0x2804))

/* �Ĵ���˵����
   λ����UNION�ṹ:  SOC_EDC_DITHER_CONTROL_UNION */
#define SOC_EDC_DITHER_CONTROL_ADDR(base)             ((base) + (0x2840))

/* �Ĵ���˵����
   λ����UNION�ṹ:  SOC_EDC_STRENGTH_SEL_UNION */
#define SOC_EDC_STRENGTH_SEL_ADDR(base)               ((base) + (0x2C00))

/* �Ĵ���˵����
   λ����UNION�ṹ:  SOC_EDC_STRENGTH_MANUAL_UNION */
#define SOC_EDC_STRENGTH_MANUAL_ADDR(base)            ((base) + (0x2C04))

/* �Ĵ���˵����
   λ����UNION�ṹ:  SOC_EDC_OPTION_SELECT_UNION */
#define SOC_EDC_OPTION_SELECT_ADDR(base)              ((base) + (0x2C08))

/* �Ĵ���˵����
   λ����UNION�ṹ:  SOC_EDC_AMBIENT_LIGHT0_UNION */
#define SOC_EDC_AMBIENT_LIGHT0_ADDR(base)             ((base) + (0x2C10))

/* �Ĵ���˵����
   λ����UNION�ṹ:  SOC_EDC_AMBIENT_LIGHT1_UNION */
#define SOC_EDC_AMBIENT_LIGHT1_ADDR(base)             ((base) + (0x2C14))

/* �Ĵ���˵����
   λ����UNION�ṹ:  SOC_EDC_BACKLIGHT_LEVEL0_UNION */
#define SOC_EDC_BACKLIGHT_LEVEL0_ADDR(base)           ((base) + (0x2C18))

/* �Ĵ���˵����
   λ����UNION�ṹ:  SOC_EDC_BACKLIGHT_LEVEL1_UNION */
#define SOC_EDC_BACKLIGHT_LEVEL1_ADDR(base)           ((base) + (0x2C1C))

/* �Ĵ���˵����
   λ����UNION�ṹ:  SOC_EDC_BACKLIGHT_MAX0_UNION */
#define SOC_EDC_BACKLIGHT_MAX0_ADDR(base)             ((base) + (0x2C20))

/* �Ĵ���˵����
   λ����UNION�ṹ:  SOC_EDC_BACKLIGHT_MAX1_UNION */
#define SOC_EDC_BACKLIGHT_MAX1_ADDR(base)             ((base) + (0x2C24))

/* �Ĵ���˵����
   λ����UNION�ṹ:  SOC_EDC_STRENGTH_LIMIT_UNION */
#define SOC_EDC_STRENGTH_LIMIT_ADDR(base)             ((base) + (0x2C28))

/* �Ĵ���˵����
   λ����UNION�ṹ:  SOC_EDC_CALIBRATION_A_UNION */
#define SOC_EDC_CALIBRATION_A_ADDR(base)              ((base) + (0x2C2C))

/* �Ĵ���˵����
   λ����UNION�ṹ:  SOC_EDC_CALIBRATION_B_UNION */
#define SOC_EDC_CALIBRATION_B_ADDR(base)              ((base) + (0x2C30))

/* �Ĵ���˵����
   λ����UNION�ṹ:  SOC_EDC_DRC_IN0_UNION */
#define SOC_EDC_DRC_IN0_ADDR(base)                    ((base) + (0x2C38))

/* �Ĵ���˵����
   λ����UNION�ṹ:  SOC_EDC_DRC_IN1_UNION */
#define SOC_EDC_DRC_IN1_ADDR(base)                    ((base) + (0x2C3C))

/* �Ĵ���˵����
   λ����UNION�ṹ:  SOC_EDC_T_FILT_CONTROL_UNION */
#define SOC_EDC_T_FILT_CONTROL_ADDR(base)             ((base) + (0x2C34))





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
 �ṹ��    : SOC_EDC_ID_UNION
 �ṹ˵��  : ID �Ĵ����ṹ���塣��ַƫ����:0x000����ֵ:0x00000300�����:32
 �Ĵ���˵��: EDC�汾��Ϣ
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  id : 32; /* bit[0-31]: ���� */
    } reg;
} SOC_EDC_ID_UNION;
#endif
#define SOC_EDC_ID_id_START  (0)
#define SOC_EDC_ID_id_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_EDC_CH1L_ADDR_UNION
 �ṹ˵��  : CH1L_ADDR �Ĵ����ṹ���塣��ַƫ����:0x004����ֵ:0x00000000�����:32
 �Ĵ���˵��: Channel1��ͨ����ַ
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ch1l_addr : 32; /* bit[0-31]: Channel1(����)ͼ�����ڴ��еĴ洢��ַ(128bit���룬���4λ��Ϊ0)��
                                                    0��90����ת�� ���������صĴ洢��ַ��
                                                    180��270����ת�� ͼ�����½����صĴ洢��ַ
                                                    ע����Channel1����2Dͼ��ʱ����ôֻ������CH1L_ADDR��
                                                    CH1R_ADDR�������� */
    } reg;
} SOC_EDC_CH1L_ADDR_UNION;
#endif
#define SOC_EDC_CH1L_ADDR_ch1l_addr_START  (0)
#define SOC_EDC_CH1L_ADDR_ch1l_addr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_EDC_CH1R_ADDR_UNION
 �ṹ˵��  : CH1R_ADDR �Ĵ����ṹ���塣��ַƫ����:0x008����ֵ:0x00000000�����:32
 �Ĵ���˵��: Channel1��ͨ����ַ
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ch1r_addr : 32; /* bit[0-31]: Channel1(����)ͼ�����ڴ��еĴ洢��ַ(128bit���룬���4λ��Ϊ0)��
                                                    0��90����ת�� ���������صĴ洢��ַ��
                                                    180��270����ת�� ͼ�����½����صĴ洢��ַ
                                                    ע����Channel1����2Dͼ��ʱ����ôֻ������CH1L_ADDR��
                                                    CH1R_ADDR�������� */
    } reg;
} SOC_EDC_CH1R_ADDR_UNION;
#endif
#define SOC_EDC_CH1R_ADDR_ch1r_addr_START  (0)
#define SOC_EDC_CH1R_ADDR_ch1r_addr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_EDC_CH1_STRIDE_UNION
 �ṹ˵��  : CH1_STRIDE �Ĵ����ṹ���塣��ַƫ����:0x00C����ֵ:0x00000000�����:32
 �Ĵ���˵��: Channel1�е�ַƫ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ch1_ln_stride : 14; /* bit[0-13] : Channel1�е�ַƫ����(128bit���룬���4λ��Ϊ0)��
                                                         �е�ַƫ����Ϊͼ�����ڴ����������������ش洢��ַ֮��,Stride�Ĳ���Ϊ8��������Ϊ��λ�� */
        unsigned int  reserved      : 18; /* bit[14-31]: ���� */
    } reg;
} SOC_EDC_CH1_STRIDE_UNION;
#endif
#define SOC_EDC_CH1_STRIDE_ch1_ln_stride_START  (0)
#define SOC_EDC_CH1_STRIDE_ch1_ln_stride_END    (13)


/*****************************************************************************
 �ṹ��    : SOC_EDC_CH1_XY_UNION
 �ṹ˵��  : CH1_XY �Ĵ����ṹ���塣��ַƫ����:0x010����ֵ:0x00000000�����:32
 �Ĵ���˵��: Channel1��ʾ����Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ch1_y    : 12; /* bit[0-11] : Channel1ͼ�����Ͻ����ص�Y���� (������Ϊ��λ)
                                                    ע�� Column By Column/Line By Line��ʽʱָ����ƴ�Ӻ�ͼ������Ͻ�,3D Top To Bottom��ʽʱָ������/��ͼ�����ϰ벿��/�°벿�ֵ����꣬3D Side By Side��ʽʱָ������/��ͼ������벿��/�Ұ벿�ֵ����� */
        unsigned int  reserved_0: 4;  /* bit[12-15]: ���� */
        unsigned int  ch1_x    : 12; /* bit[16-27]: Channel1ͼ�����Ͻ����ص�X���� (������Ϊ��λ)
                                                    ע��3D Column By Column/Line By Line��ʽʱָ����ƴ�Ӻ�ͼ������Ͻ�,3D Top To Bottom��ʽʱָ������/��ͼ�����ϰ벿��/�°벿�ֵ����꣬3D Side By Side��ʽʱָ������/��ͼ������벿��/�Ұ벿�ֵ����� */
        unsigned int  reserved_1: 4;  /* bit[28-31]: ���� */
    } reg;
} SOC_EDC_CH1_XY_UNION;
#endif
#define SOC_EDC_CH1_XY_ch1_y_START     (0)
#define SOC_EDC_CH1_XY_ch1_y_END       (11)
#define SOC_EDC_CH1_XY_ch1_x_START     (16)
#define SOC_EDC_CH1_XY_ch1_x_END       (27)


/*****************************************************************************
 �ṹ��    : SOC_EDC_CH1_SIZE_UNION
 �ṹ˵��  : CH1_SIZE �Ĵ����ṹ���塣��ַƫ����:0x014����ֵ:0x00000000�����:32
 �Ĵ���˵��: Channel1ͼ��ߴ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ch1_size_vrt : 12; /* bit[0-11] : Channel1������/����ͼ������ظ߶�(��ƽ����)-1(������Ϊ��λ)
                                                        ע�� 
                                                         1��CH1_SIZE_VRT�Ĳ���Ϊ2��
                                                         2��������ͼ�񳬳���ʾ�±߽��ʱ�򣬸��ֶ�Ӧ����Ϊ����ʾ�ֱ��ʸ߶�������ͼ�����Y����Ĳ�ֵ��2����ȡ��-1��
                                                         3����ת�¸�ֵ��Ӧ����Ϊ��תǰԭʼͼ��Ķ������ظ߶ȡ� */
        unsigned int  reserved_0   : 4;  /* bit[12-15]: ���� */
        unsigned int  ch1_size_hrz : 12; /* bit[16-27]: Channel1������/����ͼ������ؿ��(ˮƽ����)-1(������Ϊ��λ)
                                                        ע�� 
                                                         1��CH1_SIZE_HRZ�Ĳ���Ϊ8��
                                                         2��������ͼ�񳬳���ʾ�ұ߽��ʱ�򣬸��ֶ�Ӧ����Ϊ����ʾ�ֱ��ʿ��������ͼ�����X����Ĳ�ֵ��8����ȡ��-1��
                                                         3����ת�¸�ֵ��Ӧ����Ϊ��תǰԭʼͼ��Ķ������ؿ�ȡ� */
        unsigned int  reserved_1   : 4;  /* bit[28-31]: ���� */
    } reg;
} SOC_EDC_CH1_SIZE_UNION;
#endif
#define SOC_EDC_CH1_SIZE_ch1_size_vrt_START  (0)
#define SOC_EDC_CH1_SIZE_ch1_size_vrt_END    (11)
#define SOC_EDC_CH1_SIZE_ch1_size_hrz_START  (16)
#define SOC_EDC_CH1_SIZE_ch1_size_hrz_END    (27)


/*****************************************************************************
 �ṹ��    : SOC_EDC_CH1_CTL_UNION
 �ṹ˵��  : CH1_CTL �Ĵ����ṹ���塣��ַƫ����:0x018����ֵ:0x00000000�����:32
 �Ĵ���˵��: Channel1����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ch1_secu_line : 12; /* bit[0-11] : Channel1��ˢ�°�ȫ����ʼ�к�-1��
                                                         ��EDC��ʼ����üĴ���ָ�����У�����CH1_LINE_INT�ж� */
        unsigned int  ch1_y_flip    : 1;  /* bit[12]   : Y�����Ƿ�ת��(��Channel1ΪTile��ʽʱ��Ч)
                                                         0�� Y���겻��ת
                                                         1�� Y���귴ת */
        unsigned int  ch1_tile_fmt  : 2;  /* bit[13-14]: Channel1ͼ��Tile��ʽ���ͣ�
                                                         00�� tile
                                                         01�� super tile 
                                                         10�� multi tile
                                                         11�� super+multi tile */
        unsigned int  ch1_tile_en   : 1;  /* bit[15]   : Channel1����ͼ��洢��ʽ��
                                                         0�� Linear��ʽ
                                                         1�� Tile��ʽ */
        unsigned int  ch1_pix_fmt   : 3;  /* bit[16-18]: Channel1���������ظ�ʽ��
                                                         000�� ARGB1555
                                                         001�� RGB565
                                                         010�� RGB0888
                                                         011�� ARGB8888
                                                         100�� YUYV Packet
                                                         101�� UYVY Packet 
                                                         110�� YVYU Packet
                                                         111�� VYUY Packet */
        unsigned int  ch_bgr        : 1;  /* bit[19]   : 0�� Channel1��������ΪRGB��ʽ
                                                         1�� Channel1��������ΪBGR��ʽ */
        unsigned int  ch1_colork_en : 1;  /* bit[20]   : Channel1 Color Keyʹ��
                                                         0�� Channel1 Color Key�ر�
                                                         1�� Channel1 Color Keyʹ�� */
        unsigned int  ch1_rot       : 2;  /* bit[21-22]: Channel1��ת�Ƕȣ�
                                                         00�� ����ת��
                                                         01�� 180����ת��
                                                         10�� 90����ת��
                                                         11�� 270����ת�� */
        unsigned int  reserved_0    : 1;  /* bit[23]   : ���� */
        unsigned int  ch1_en        : 1;  /* bit[24]   : Channel1ʹ�ܣ�
                                                         0�� Channel1�ر�
                                                         1�� Channel1���� */
        unsigned int  reserved_1    : 1;  /* bit[25]   : ���� */
        unsigned int  ch1_clk_en    : 1;  /* bit[26]   : ͨ���л�Channel1 ʱ��ʹ�ܣ�
                                                         0�� Channel1ʱ�ӹر�
                                                         1�� Channel1ʱ�ӿ��� */
        unsigned int  reserved_2    : 5;  /* bit[27-31]: ���� */
    } reg;
} SOC_EDC_CH1_CTL_UNION;
#endif
#define SOC_EDC_CH1_CTL_ch1_secu_line_START  (0)
#define SOC_EDC_CH1_CTL_ch1_secu_line_END    (11)
#define SOC_EDC_CH1_CTL_ch1_y_flip_START     (12)
#define SOC_EDC_CH1_CTL_ch1_y_flip_END       (12)
#define SOC_EDC_CH1_CTL_ch1_tile_fmt_START   (13)
#define SOC_EDC_CH1_CTL_ch1_tile_fmt_END     (14)
#define SOC_EDC_CH1_CTL_ch1_tile_en_START    (15)
#define SOC_EDC_CH1_CTL_ch1_tile_en_END      (15)
#define SOC_EDC_CH1_CTL_ch1_pix_fmt_START    (16)
#define SOC_EDC_CH1_CTL_ch1_pix_fmt_END      (18)
#define SOC_EDC_CH1_CTL_ch_bgr_START         (19)
#define SOC_EDC_CH1_CTL_ch_bgr_END           (19)
#define SOC_EDC_CH1_CTL_ch1_colork_en_START  (20)
#define SOC_EDC_CH1_CTL_ch1_colork_en_END    (20)
#define SOC_EDC_CH1_CTL_ch1_rot_START        (21)
#define SOC_EDC_CH1_CTL_ch1_rot_END          (22)
#define SOC_EDC_CH1_CTL_ch1_en_START         (24)
#define SOC_EDC_CH1_CTL_ch1_en_END           (24)
#define SOC_EDC_CH1_CTL_ch1_clk_en_START     (26)
#define SOC_EDC_CH1_CTL_ch1_clk_en_END       (26)


/*****************************************************************************
 �ṹ��    : SOC_EDC_CH1_COLORK_MIN_UNION
 �ṹ˵��  : CH1_COLORK_MIN �Ĵ����ṹ���塣��ַƫ����:0x01C����ֵ:0x00000000�����:32
 �Ĵ���˵��: Channel1�ؼ�ɫ����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ch1_colork_min : 24; /* bit[0-23] : Channel1����ͼ��ؼ�ɫ�����ޣ����ֶε�RGB��ʽ��Channel1������RGB��ʽһ�� */
        unsigned int  reserved       : 8;  /* bit[24-31]: ���� */
    } reg;
} SOC_EDC_CH1_COLORK_MIN_UNION;
#endif
#define SOC_EDC_CH1_COLORK_MIN_ch1_colork_min_START  (0)
#define SOC_EDC_CH1_COLORK_MIN_ch1_colork_min_END    (23)


/*****************************************************************************
 �ṹ��    : SOC_EDC_CH1_COLORK_MAX_UNION
 �ṹ˵��  : CH1_COLORK_MAX �Ĵ����ṹ���塣��ַƫ����:0x020����ֵ:0x00000000�����:32
 �Ĵ���˵��: Channel1�ؼ�ɫ����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ch1_colork_max : 24; /* bit[0-23] : Channel1����ͼ��ؼ�ɫ�����ޣ����ֶε�RGB��ʽ��Channel1������RGB��ʽһ�� */
        unsigned int  reserved       : 8;  /* bit[24-31]: ���� */
    } reg;
} SOC_EDC_CH1_COLORK_MAX_UNION;
#endif
#define SOC_EDC_CH1_COLORK_MAX_ch1_colork_max_START  (0)
#define SOC_EDC_CH1_COLORK_MAX_ch1_colork_max_END    (23)


/*****************************************************************************
 �ṹ��    : SOC_EDC_CH2L_ADDR_UNION
 �ṹ˵��  : CH2L_ADDR �Ĵ����ṹ���塣��ַƫ����:0x024����ֵ:0x00000000�����:32
 �Ĵ���˵��: Channel2 Left��ַ
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ch2l_addr : 32; /* bit[0-31]: Channel2(����)ͼ�����ڴ��еĴ洢��ַ(128bit���룬���4λ��Ϊ0)��
                                                    ���������صĴ洢��ַ��
                                                    ע����Channel2����2Dͼ��ʱ����ôֻ������CH2L_ADDR��
                                                    CH2R_ADDR�������� */
    } reg;
} SOC_EDC_CH2L_ADDR_UNION;
#endif
#define SOC_EDC_CH2L_ADDR_ch2l_addr_START  (0)
#define SOC_EDC_CH2L_ADDR_ch2l_addr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_EDC_CH2R_ADDR_UNION
 �ṹ˵��  : CH2R_ADDR �Ĵ����ṹ���塣��ַƫ����:0x028����ֵ:0x00000000�����:32
 �Ĵ���˵��: Channel2 Right��ַ
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ch2r_addr : 32; /* bit[0-31]: Channel2(����)ͼ�����ڴ��еĴ洢��ַ(128bit���룬���4λ��Ϊ0)��
                                                    ���������صĴ洢��ַ��
                                                    ע����Channel2����2Dͼ��ʱ����ôֻ������CH2L_ADDR��
                                                    CH2R_ADDR�������� */
    } reg;
} SOC_EDC_CH2R_ADDR_UNION;
#endif
#define SOC_EDC_CH2R_ADDR_ch2r_addr_START  (0)
#define SOC_EDC_CH2R_ADDR_ch2r_addr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_EDC_CH2_STRIDE_UNION
 �ṹ˵��  : CH2_STRIDE �Ĵ����ṹ���塣��ַƫ����:0x02C����ֵ:0x00000000�����:32
 �Ĵ���˵��: Channel2 Stride
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ch2_ln_stride : 14; /* bit[0-13] : Channel2�е�ַƫ����(128bit���룬�����λ��Ϊ0)��
                                                         �е�ַƫ����Ϊͼ�����ڴ����������������ش洢��ַ֮��,Stride�Ĳ���Ϊ4��������Ϊ��λ�� */
        unsigned int  reserved      : 18; /* bit[14-31]: ���� */
    } reg;
} SOC_EDC_CH2_STRIDE_UNION;
#endif
#define SOC_EDC_CH2_STRIDE_ch2_ln_stride_START  (0)
#define SOC_EDC_CH2_STRIDE_ch2_ln_stride_END    (13)


/*****************************************************************************
 �ṹ��    : SOC_EDC_CH2_XY_UNION
 �ṹ˵��  : CH2_XY �Ĵ����ṹ���塣��ַƫ����:0x030����ֵ:0x00000000�����:32
 �Ĵ���˵��: Channel2����Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ch2_y    : 12; /* bit[0-11] : Channel2ͼ�����Ͻ����ص�Y���� (������Ϊ��λ)
                                                    ע�� Column By Column/Line By Line��ʽʱָ����ƴ�Ӻ�ͼ������Ͻ�,3D Top To Bottom��ʽʱָ������/��ͼ�����ϰ벿��/�°벿�ֵ����꣬3D Side By Side��ʽʱָ������/��ͼ������벿��/�Ұ벿�ֵ����� */
        unsigned int  reserved_0: 4;  /* bit[12-15]: ���� */
        unsigned int  ch2_x    : 12; /* bit[16-27]: Channel2ͼ�����Ͻ����ص�X���� (������Ϊ��λ)
                                                    ע��3D Column By Column/Line By Line��ʽʱָ����ƴ�Ӻ�ͼ������Ͻ�,3D Top To Bottom��ʽʱָ������/��ͼ�����ϰ벿��/�°벿�ֵ����꣬3D Side By Side��ʽʱָ������/��ͼ������벿��/�Ұ벿�ֵ����� */
        unsigned int  reserved_1: 4;  /* bit[28-31]: ���� */
    } reg;
} SOC_EDC_CH2_XY_UNION;
#endif
#define SOC_EDC_CH2_XY_ch2_y_START     (0)
#define SOC_EDC_CH2_XY_ch2_y_END       (11)
#define SOC_EDC_CH2_XY_ch2_x_START     (16)
#define SOC_EDC_CH2_XY_ch2_x_END       (27)


/*****************************************************************************
 �ṹ��    : SOC_EDC_CH2_SIZE_UNION
 �ṹ˵��  : CH2_SIZE �Ĵ����ṹ���塣��ַƫ����:0x034����ֵ:0x00000000�����:32
 �Ĵ���˵��: Channel2ͼ��ߴ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ch2_size_vrt : 12; /* bit[0-11] : Channel2������/����ͼ������ظ߶�(��ƽ����)-1(������Ϊ��λ)
                                                        ע�� 
                                                         1��CH2_SIZE_VRT�Ĳ���Ϊ2��
                                                         2��������ͼ�񳬳���ʾ�±߽��ʱ�򣬸��ֶ�Ӧ����Ϊ����ʾ�ֱ��ʸ߶�������ͼ�����Y����Ĳ�ֵ��2����ȡ��-1��
                                                         3����ת�¸�ֵ��Ӧ����Ϊ��תǰԭʼͼ��Ķ������ظ߶ȡ� */
        unsigned int  reserved_0   : 4;  /* bit[12-15]: ���� */
        unsigned int  ch2_size_hrz : 12; /* bit[16-27]: Channel2������/����ͼ������ؿ��(ˮƽ����)-1(������Ϊ��λ)
                                                        ע�� 
                                                         1��CH2_SIZE_HRZ�Ĳ���Ϊ4��
                                                         2��������ͼ�񳬳���ʾ�ұ߽��ʱ�򣬸��ֶ�Ӧ����Ϊ����ʾ�ֱ��ʿ��������ͼ�����X����Ĳ�ֵ��4����ȡ��-1��
                                                         3����ת�¸�ֵ��Ӧ����Ϊ��תǰԭʼͼ��Ķ������ؿ�ȡ� */
        unsigned int  reserved_1   : 4;  /* bit[28-31]: ���� */
    } reg;
} SOC_EDC_CH2_SIZE_UNION;
#endif
#define SOC_EDC_CH2_SIZE_ch2_size_vrt_START  (0)
#define SOC_EDC_CH2_SIZE_ch2_size_vrt_END    (11)
#define SOC_EDC_CH2_SIZE_ch2_size_hrz_START  (16)
#define SOC_EDC_CH2_SIZE_ch2_size_hrz_END    (27)


/*****************************************************************************
 �ṹ��    : SOC_EDC_CH2_CTL_UNION
 �ṹ˵��  : CH2_CTL �Ĵ����ṹ���塣��ַƫ����:0x0038����ֵ:0x00000000�����:32
 �Ĵ���˵��: EDC_CH2_CTL
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ch2_secu_line : 12; /* bit[0-11] : Channel2��ˢ�°�ȫ����ʼ�к�-1��
                                                         ��EDC��ʼ���ɸüĴ���ָ�����У�����CH2_LINE_INT�жϣ�֪ͨChannel2���½��̿���ˢ��һ֡���û��ƿɱ�����ʾ�������� */
        unsigned int  reserved_0    : 4;  /* bit[12-15]: ���� */
        unsigned int  ch2_fmtin     : 3;  /* bit[16-18]: Channel2���������ظ�ʽ��
                                                         000�� ARGB1555
                                                         001�� RGB565
                                                         010�� RGB0888
                                                         011�� ARGB8888
                                                         100�� YUYV Packet
                                                         101�� UYVY Packet 
                                                         110�� YVYU Packet
                                                         111�� VYUY Packet */
        unsigned int  ch2_bgr       : 1;  /* bit[19]   : 0�� Channel2��������ΪRGB��ʽ
                                                         1�� Channel2��������ΪBGR��ʽ */
        unsigned int  ch2_colork_en : 1;  /* bit[20]   : Channel2 Color Keyʹ�ܣ�
                                                         0�� Channel2 Color Key�ر�
                                                         1�� Channel2 Color Keyʹ�� */
        unsigned int  ch2_en        : 1;  /* bit[21]   : Channel2ʹ�ܣ�
                                                         0�� Channel2�ر�
                                                         1�� Channel2���� */
        unsigned int  reserved_1    : 10; /* bit[22-31]: ���� */
    } reg;
} SOC_EDC_CH2_CTL_UNION;
#endif
#define SOC_EDC_CH2_CTL_ch2_secu_line_START  (0)
#define SOC_EDC_CH2_CTL_ch2_secu_line_END    (11)
#define SOC_EDC_CH2_CTL_ch2_fmtin_START      (16)
#define SOC_EDC_CH2_CTL_ch2_fmtin_END        (18)
#define SOC_EDC_CH2_CTL_ch2_bgr_START        (19)
#define SOC_EDC_CH2_CTL_ch2_bgr_END          (19)
#define SOC_EDC_CH2_CTL_ch2_colork_en_START  (20)
#define SOC_EDC_CH2_CTL_ch2_colork_en_END    (20)
#define SOC_EDC_CH2_CTL_ch2_en_START         (21)
#define SOC_EDC_CH2_CTL_ch2_en_END           (21)


/*****************************************************************************
 �ṹ��    : SOC_EDC_CH2_COLORK_MIN_UNION
 �ṹ˵��  : CH2_COLORK_MIN �Ĵ����ṹ���塣��ַƫ����:0x003C����ֵ:0x00000000�����:32
 �Ĵ���˵��: Channel2�ؼ�ɫ����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ch2_colork_min : 24; /* bit[0-23] : Channel2����ͼ��ؼ�ɫ�����ޣ����ֶε�RGB��ʽ��Channel2������RGB��ʽһ�� */
        unsigned int  reserved       : 8;  /* bit[24-31]: ���� */
    } reg;
} SOC_EDC_CH2_COLORK_MIN_UNION;
#endif
#define SOC_EDC_CH2_COLORK_MIN_ch2_colork_min_START  (0)
#define SOC_EDC_CH2_COLORK_MIN_ch2_colork_min_END    (23)


/*****************************************************************************
 �ṹ��    : SOC_EDC_CH2_COLORK_MAX_UNION
 �ṹ˵��  : CH2_COLORK_MAX �Ĵ����ṹ���塣��ַƫ����:0x0040����ֵ:0x00000000�����:32
 �Ĵ���˵��: Channel2�ؼ�ɫ����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ch2_colork_max : 24; /* bit[0-23] : Channel2����ͼ��ؼ�ɫ�����ޣ����ֶε�RGB��ʽ��Channel2������RGB��ʽһ�� */
        unsigned int  reserved       : 8;  /* bit[24-31]: ���� */
    } reg;
} SOC_EDC_CH2_COLORK_MAX_UNION;
#endif
#define SOC_EDC_CH2_COLORK_MAX_ch2_colork_max_START  (0)
#define SOC_EDC_CH2_COLORK_MAX_ch2_colork_max_END    (23)


/*****************************************************************************
 �ṹ��    : SOC_EDC_CH12_OVLY_UNION
 �ṹ˵��  : CH12_OVLY �Ĵ����ṹ���塣��ַƫ����:0x0044����ֵ:0x00000000�����:32
 �Ĵ���˵��: ���ӿ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  blend_mskc3_en : 1;  /* bit[0]    : Alpha Blending Mask color3ʹ��
                                                          0�� �ر�
                                                          4�� ʹ�� */
        unsigned int  blend_mskc2_en : 1;  /* bit[1]    : Alpha Blending Mask color2ʹ��
                                                          0�� �ر�
                                                          3�� ʹ�� */
        unsigned int  blend_mskc1_en : 1;  /* bit[2]    : Alpha Blending Mask color1ʹ��
                                                          0�� �ر�
                                                          2�� ʹ�� */
        unsigned int  blend_mskc0_en : 1;  /* bit[3]    : Alpha Blending Mask color0ʹ��
                                                          0�� �ر�
                                                          1�� ʹ�� */
        unsigned int  blend_mskc_src : 1;  /* bit[4]    : Alpha Blending Mask Colorѡ��
                                                          0�� ��Channel1����Mask Color��
                                                          1�� ��Channel2����Mask Color�� */
        unsigned int  alp_ch2_sel    : 2;  /* bit[5-6]  : Channel1��Channel2����Alpha Blendingʱ��Channel2��ȡ�����ϵ����
                                                          00�� Alpha 
                                                          01�� 1-Alpha
                                                          10�� 0
                                                          11�� 1 */
        unsigned int  alp_ch1_sel    : 2;  /* bit[7-8]  : Channel1��Channel2����Alpha Blendingʱ��Channel1��ȡ�����ϵ����
                                                          00�� Alpha 
                                                          01�� 1-Alpha
                                                          10�� 0
                                                          11�� 1 */
        unsigned int  pix_alp_src    : 1;  /* bit[9]    : Pixel Alpha����Դ(��CH2_ALP_SRC==1ʱ��λ��Ч)��
                                                          0�� Pixel Alpha��Դ��Channel2�����ARGBͼ��
                                                          1�� Pixel Alpha��Դ��Channel1�����ARGBͼ�� */
        unsigned int  alp_mode       : 1;  /* bit[10]   : Alpha Sourceѡ��
                                                          0�� Global Alpha��Alpha����Global Alphaֵ�Ĵ���
                                                          1�� Pixel Alpha��Alpha����ARGB��ʽ������ */
        unsigned int  blend_en       : 1;  /* bit[11]   : Channel2ͼ���Source Alpha Blending����ʹ�ܣ�
                                                          0�� Channel2��Source Alpha Blending���ر�
                                                          1�� Channel2��Source Alpha Blending������ */
        unsigned int  ch2_top        : 1;  /* bit[12]   : Channel2ͼ��λ��ѡ��
                                                          0�� Channel2ͼ��λ��Channel1ͼ��֮��
                                                          1�� Channel2ͼ��λ��Channel1ͼ��֮�� */
        unsigned int  reserved       : 19; /* bit[13-31]: ���� */
    } reg;
} SOC_EDC_CH12_OVLY_UNION;
#endif
#define SOC_EDC_CH12_OVLY_blend_mskc3_en_START  (0)
#define SOC_EDC_CH12_OVLY_blend_mskc3_en_END    (0)
#define SOC_EDC_CH12_OVLY_blend_mskc2_en_START  (1)
#define SOC_EDC_CH12_OVLY_blend_mskc2_en_END    (1)
#define SOC_EDC_CH12_OVLY_blend_mskc1_en_START  (2)
#define SOC_EDC_CH12_OVLY_blend_mskc1_en_END    (2)
#define SOC_EDC_CH12_OVLY_blend_mskc0_en_START  (3)
#define SOC_EDC_CH12_OVLY_blend_mskc0_en_END    (3)
#define SOC_EDC_CH12_OVLY_blend_mskc_src_START  (4)
#define SOC_EDC_CH12_OVLY_blend_mskc_src_END    (4)
#define SOC_EDC_CH12_OVLY_alp_ch2_sel_START     (5)
#define SOC_EDC_CH12_OVLY_alp_ch2_sel_END       (6)
#define SOC_EDC_CH12_OVLY_alp_ch1_sel_START     (7)
#define SOC_EDC_CH12_OVLY_alp_ch1_sel_END       (8)
#define SOC_EDC_CH12_OVLY_pix_alp_src_START     (9)
#define SOC_EDC_CH12_OVLY_pix_alp_src_END       (9)
#define SOC_EDC_CH12_OVLY_alp_mode_START        (10)
#define SOC_EDC_CH12_OVLY_alp_mode_END          (10)
#define SOC_EDC_CH12_OVLY_blend_en_START        (11)
#define SOC_EDC_CH12_OVLY_blend_en_END          (11)
#define SOC_EDC_CH12_OVLY_ch2_top_START         (12)
#define SOC_EDC_CH12_OVLY_ch2_top_END           (12)


/*****************************************************************************
 �ṹ��    : SOC_EDC_CH12_GLB_ALP_VAL_UNION
 �ṹ˵��  : CH12_GLB_ALP_VAL �Ĵ����ṹ���塣��ַƫ����:0x0048����ֵ:0x00000000�����:32
 �Ĵ���˵��: Channe1��Channel2����Alpha Blendingʱ��ȫ��Alpha����ֵ
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ch12_alp_value0 : 8;  /* bit[0-7]  : 1����Alphaȡ��ARGB1555����ʱ�����ֶα�ʾA=0ʱ����Ӧ��Alpha
                                                           2����Alphaȡ��Global Alphaֵʱ�����ֶα�ʾGlobal Alpha */
        unsigned int  ch12_alp_value1 : 8;  /* bit[8-15] : ��Alphaȡ��ARGB1555����ʱ�����ֶα�ʾA=1ʱ����Ӧ��Alpha������������ֶ���Ч */
        unsigned int  reserved        : 16; /* bit[16-31]: ���� */
    } reg;
} SOC_EDC_CH12_GLB_ALP_VAL_UNION;
#endif
#define SOC_EDC_CH12_GLB_ALP_VAL_ch12_alp_value0_START  (0)
#define SOC_EDC_CH12_GLB_ALP_VAL_ch12_alp_value0_END    (7)
#define SOC_EDC_CH12_GLB_ALP_VAL_ch12_alp_value1_START  (8)
#define SOC_EDC_CH12_GLB_ALP_VAL_ch12_alp_value1_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_EDC_CH12_MSK_COLOR0_MIN_UNION
 �ṹ˵��  : CH12_MSK_COLOR0_MIN �Ĵ����ṹ���塣��ַƫ����:0x004C����ֵ:0x00000000�����:32
 �Ĵ���˵��: Channel1��Channel2����Blendingʱ������ɫ0����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ch2_msk_color0_min : 24; /* bit[0-23] : Alpha Blending Mask����ɫ��Χ0���ޣ�
                                                              Channel1��Channel2����Alpha Blendingʱ�����Channel2���������Mask��Χ����ô�Ͳ�����Alpha Blending����Channel2��RGB��ʽд�� */
        unsigned int  reserved           : 8;  /* bit[24-31]: ���� */
    } reg;
} SOC_EDC_CH12_MSK_COLOR0_MIN_UNION;
#endif
#define SOC_EDC_CH12_MSK_COLOR0_MIN_ch2_msk_color0_min_START  (0)
#define SOC_EDC_CH12_MSK_COLOR0_MIN_ch2_msk_color0_min_END    (23)


/*****************************************************************************
 �ṹ��    : SOC_EDC_CH12_MSK_COLOR0_MAX_UNION
 �ṹ˵��  : CH12_MSK_COLOR0_MAX �Ĵ����ṹ���塣��ַƫ����:0x0050����ֵ:0x00000000�����:32
 �Ĵ���˵��: Channel1��Channel2����Blendingʱ������ɫ0����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ch2_msk_color0_max : 24; /* bit[0-23] : Alpha Blending Mask����ɫ��Χ0���ޣ�
                                                              Channel1��Channel2����Alpha Blendingʱ�����Channel2���������Mask��Χ����ô�Ͳ�����Alpha Blending����Channel2��RGB��ʽд�� */
        unsigned int  reserved           : 8;  /* bit[24-31]: ���� */
    } reg;
} SOC_EDC_CH12_MSK_COLOR0_MAX_UNION;
#endif
#define SOC_EDC_CH12_MSK_COLOR0_MAX_ch2_msk_color0_max_START  (0)
#define SOC_EDC_CH12_MSK_COLOR0_MAX_ch2_msk_color0_max_END    (23)


/*****************************************************************************
 �ṹ��    : SOC_EDC_CH12_MSK_COLOR1_MIN_UNION
 �ṹ˵��  : CH12_MSK_COLOR1_MIN �Ĵ����ṹ���塣��ַƫ����:0x0054����ֵ:0x00000000�����:32
 �Ĵ���˵��: Channel1��Channel2����Blendingʱ������ɫ1����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ch2_msk_color1_min : 24; /* bit[0-23] : Alpha Blending Mask����ɫ��Χ1���ޣ�
                                                              Channel1��Channel2����Alpha Blendingʱ�����Channel2���������Mask��Χ����ô�Ͳ�����Alpha Blending����Channel2��RGB��ʽд�� */
        unsigned int  reserved           : 8;  /* bit[24-31]: ���� */
    } reg;
} SOC_EDC_CH12_MSK_COLOR1_MIN_UNION;
#endif
#define SOC_EDC_CH12_MSK_COLOR1_MIN_ch2_msk_color1_min_START  (0)
#define SOC_EDC_CH12_MSK_COLOR1_MIN_ch2_msk_color1_min_END    (23)


/*****************************************************************************
 �ṹ��    : SOC_EDC_CH12_MSK_COLOR1_MAX_UNION
 �ṹ˵��  : CH12_MSK_COLOR1_MAX �Ĵ����ṹ���塣��ַƫ����:0x0058����ֵ:0x00000000�����:32
 �Ĵ���˵��: Channel1��Channel2����Blendingʱ������ɫ1����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ch2_msk_color1_max : 24; /* bit[0-23] : Alpha Blending Mask����ɫ��Χ1���ޣ�
                                                              Channel1��Channel2����Alpha Blendingʱ�����Channel2���������Mask��Χ����ô�Ͳ�����Alpha Blending����Channel2��RGB��ʽд�� */
        unsigned int  reserved           : 8;  /* bit[24-31]: ���� */
    } reg;
} SOC_EDC_CH12_MSK_COLOR1_MAX_UNION;
#endif
#define SOC_EDC_CH12_MSK_COLOR1_MAX_ch2_msk_color1_max_START  (0)
#define SOC_EDC_CH12_MSK_COLOR1_MAX_ch2_msk_color1_max_END    (23)


/*****************************************************************************
 �ṹ��    : SOC_EDC_CH12_MSK_COLOR2_MIN_UNION
 �ṹ˵��  : CH12_MSK_COLOR2_MIN �Ĵ����ṹ���塣��ַƫ����:0x005C����ֵ:0x00000000�����:32
 �Ĵ���˵��: Channel1��Channel2����Blendingʱ������ɫ2����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ch2_msk_color2_min : 24; /* bit[0-23] : Alpha Blending Mask����ɫ��Χ2���ޣ�
                                                              Channel1��Channel2����Alpha Blendingʱ�����Channel2���������Mask��Χ����ô�Ͳ�����Alpha Blending����Channel2��RGB��ʽд�� */
        unsigned int  reserved           : 8;  /* bit[24-31]: ���� */
    } reg;
} SOC_EDC_CH12_MSK_COLOR2_MIN_UNION;
#endif
#define SOC_EDC_CH12_MSK_COLOR2_MIN_ch2_msk_color2_min_START  (0)
#define SOC_EDC_CH12_MSK_COLOR2_MIN_ch2_msk_color2_min_END    (23)


/*****************************************************************************
 �ṹ��    : SOC_EDC_CH12_MSK_COLOR2_MAX_UNION
 �ṹ˵��  : CH12_MSK_COLOR2_MAX �Ĵ����ṹ���塣��ַƫ����:0x0060����ֵ:0x00000000�����:32
 �Ĵ���˵��: Channel1��Channel2����Blendingʱ������ɫ2����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ch2_msk_color2_max : 24; /* bit[0-23] : Alpha Blending Mask����ɫ��Χ2���ޣ�
                                                              Channel1��Channel2����Alpha Blendingʱ�����Channel2���������Mask��Χ����ô�Ͳ�����Alpha Blending����Channel2��RGB��ʽд�� */
        unsigned int  reserved           : 8;  /* bit[24-31]: ���� */
    } reg;
} SOC_EDC_CH12_MSK_COLOR2_MAX_UNION;
#endif
#define SOC_EDC_CH12_MSK_COLOR2_MAX_ch2_msk_color2_max_START  (0)
#define SOC_EDC_CH12_MSK_COLOR2_MAX_ch2_msk_color2_max_END    (23)


/*****************************************************************************
 �ṹ��    : SOC_EDC_CH12_MSK_COLOR3_MIN_UNION
 �ṹ˵��  : CH12_MSK_COLOR3_MIN �Ĵ����ṹ���塣��ַƫ����:0x0064����ֵ:0x00000000�����:32
 �Ĵ���˵��: Channel1��Channel2����Blendingʱ������ɫ3����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ch2_msk_color3_min : 24; /* bit[0-23] : Alpha Blending Mask����ɫ��Χ3���ޣ�
                                                              Channel1��Channel2����Alpha Blendingʱ�����Channel2���������Mask��Χ����ô�Ͳ�����Alpha Blending����Channel2��RGB��ʽд�� */
        unsigned int  reserved           : 8;  /* bit[24-31]: ���� */
    } reg;
} SOC_EDC_CH12_MSK_COLOR3_MIN_UNION;
#endif
#define SOC_EDC_CH12_MSK_COLOR3_MIN_ch2_msk_color3_min_START  (0)
#define SOC_EDC_CH12_MSK_COLOR3_MIN_ch2_msk_color3_min_END    (23)


/*****************************************************************************
 �ṹ��    : SOC_EDC_CH12_MSK_COLOR3_MAX_UNION
 �ṹ˵��  : CH12_MSK_COLOR3_MAX �Ĵ����ṹ���塣��ַƫ����:0x0068����ֵ:0x00000000�����:32
 �Ĵ���˵��: Channel1��Channel2����Blendingʱ������ɫ3����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ch2_msk_color3_max : 24; /* bit[0-23] : Alpha Blending Mask����ɫ��Χ3���ޣ�
                                                              Channel1��Channel2����Alpha Blendingʱ�����Channel2���������Mask��Χ����ô�Ͳ�����Alpha Blending����Channel2��RGB��ʽд�� */
        unsigned int  reserved           : 8;  /* bit[24-31]: ���� */
    } reg;
} SOC_EDC_CH12_MSK_COLOR3_MAX_UNION;
#endif
#define SOC_EDC_CH12_MSK_COLOR3_MAX_ch2_msk_color3_max_START  (0)
#define SOC_EDC_CH12_MSK_COLOR3_MAX_ch2_msk_color3_max_END    (23)


/*****************************************************************************
 �ṹ��    : SOC_EDC_CRSL_ADDR_UNION
 �ṹ˵��  : CRSL_ADDR �Ĵ����ṹ���塣��ַƫ����:0x006C����ֵ:0x00000000�����:32
 �Ĵ���˵��: Cursor��ͨ����ַ
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  crsl_addr : 32; /* bit[0-31]: Cursor(����)ͼ�����ڴ��еĴ洢��ַ(128bit���룬���4λ��Ϊ0)��
                                                    ���������صĴ洢��ַ��
                                                    ע����Cursorͨ������2Dͼ��ʱ����ôֻ������CRSL_ADDR��
                                                    CRSR_ADDR�������� */
    } reg;
} SOC_EDC_CRSL_ADDR_UNION;
#endif
#define SOC_EDC_CRSL_ADDR_crsl_addr_START  (0)
#define SOC_EDC_CRSL_ADDR_crsl_addr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_EDC_CRSR_ADDR_UNION
 �ṹ˵��  : CRSR_ADDR �Ĵ����ṹ���塣��ַƫ����:0x0070����ֵ:0x00000000�����:32
 �Ĵ���˵��: Cursor��ͨ����ַ
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  crsr_addr : 32; /* bit[0-31]: Cursor(����)ͼ�����ڴ��еĴ洢��ַ(128bit���룬���4λ��Ϊ0)��
                                                    ���������صĴ洢��ַ��
                                                    ע����Cursorͨ������2Dͼ��ʱ����ôֻ������CRSL_ADDR��
                                                    CRSR_ADDR�������� */
    } reg;
} SOC_EDC_CRSR_ADDR_UNION;
#endif
#define SOC_EDC_CRSR_ADDR_crsr_addr_START  (0)
#define SOC_EDC_CRSR_ADDR_crsr_addr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_EDC_CRS_STRIDE_UNION
 �ṹ˵��  : CRS_STRIDE �Ĵ����ṹ���塣��ַƫ����:0x0074����ֵ:0x00000000�����:32
 �Ĵ���˵��: Cursor Stride
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  crs_ln_stride : 14; /* bit[0-13] : Cursor�е�ַƫ����(128bit���룬�����λ��Ϊ0)��
                                                         �е�ַƫ����Ϊͼ�����ڴ����������������ش洢��ַ֮��,Stride�Ĳ���Ϊ4��������Ϊ��λ�� */
        unsigned int  reserved      : 18; /* bit[14-31]: ���� */
    } reg;
} SOC_EDC_CRS_STRIDE_UNION;
#endif
#define SOC_EDC_CRS_STRIDE_crs_ln_stride_START  (0)
#define SOC_EDC_CRS_STRIDE_crs_ln_stride_END    (13)


/*****************************************************************************
 �ṹ��    : SOC_EDC_CRS_XY_UNION
 �ṹ˵��  : CRS_XY �Ĵ����ṹ���塣��ַƫ����:0x0078����ֵ:0x00000000�����:32
 �Ĵ���˵��: Cursor����Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  crs_y    : 12; /* bit[0-11] : Cursorͼ�����Ͻ����ص�Y���� (������Ϊ��λ)
                                                    ע�� Column By Column/Line By Line��ʽʱָ����ƴ�Ӻ�ͼ������Ͻ�,3D Top To Bottom��ʽʱָ������/��ͼ�����ϰ벿��/�°벿�ֵ����꣬3D Side By Side��ʽʱָ������/��ͼ������벿��/�Ұ벿�ֵ����� */
        unsigned int  reserved_0: 4;  /* bit[12-15]: ���� */
        unsigned int  crs_x    : 12; /* bit[16-27]: Cursorͼ�����Ͻ����ص�X���� (������Ϊ��λ)
                                                    ע��3D Column By Column/Line By Line��ʽʱָ����ƴ�Ӻ�ͼ������Ͻ�,3D Top To Bottom��ʽʱָ������/��ͼ�����ϰ벿��/�°벿�ֵ����꣬3D Side By Side��ʽʱָ������/��ͼ������벿��/�Ұ벿�ֵ����� */
        unsigned int  reserved_1: 4;  /* bit[28-31]: ���� */
    } reg;
} SOC_EDC_CRS_XY_UNION;
#endif
#define SOC_EDC_CRS_XY_crs_y_START     (0)
#define SOC_EDC_CRS_XY_crs_y_END       (11)
#define SOC_EDC_CRS_XY_crs_x_START     (16)
#define SOC_EDC_CRS_XY_crs_x_END       (27)


/*****************************************************************************
 �ṹ��    : SOC_EDC_CRS_SIZE_UNION
 �ṹ˵��  : CRS_SIZE �Ĵ����ṹ���塣��ַƫ����:0x07C����ֵ:0x00000000�����:32
 �Ĵ���˵��: Cursorͼ��ߴ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  crs_size_vrt : 12; /* bit[0-11] : Cursor������/����ͼ������ظ߶�(��ƽ����)-1(������Ϊ��λ)
                                                        ע�� 
                                                         1��CRS_SIZE_VRT�Ĳ���Ϊ2��
                                                         2��������ͼ�񳬳���ʾ�±߽��ʱ�򣬸��ֶ�Ӧ����Ϊ����ʾ�ֱ��ʸ߶�������ͼ�����Y����Ĳ�ֵ��2����ȡ��-1��
                                                         3����ת�¸�ֵ��Ӧ����Ϊ��תǰԭʼͼ��Ķ������ظ߶ȡ� */
        unsigned int  reserved_0   : 4;  /* bit[12-15]: ���� */
        unsigned int  crs_size_hrz : 12; /* bit[16-27]: Cursor������/����ͼ������ؿ��(ˮƽ����)-1(������Ϊ��λ)
                                                        ע�� 
                                                         1��CRS_SIZE_HRZ�Ĳ���Ϊ4��
                                                         2��������ͼ�񳬳���ʾ�ұ߽��ʱ�򣬸��ֶ�Ӧ����Ϊ����ʾ�ֱ��ʿ��������ͼ�����X����Ĳ�ֵ��4����ȡ��-1��
                                                         3����ת�¸�ֵ��Ӧ����Ϊ��תǰԭʼͼ��Ķ������ؿ�ȡ� */
        unsigned int  reserved_1   : 4;  /* bit[28-31]: ���� */
    } reg;
} SOC_EDC_CRS_SIZE_UNION;
#endif
#define SOC_EDC_CRS_SIZE_crs_size_vrt_START  (0)
#define SOC_EDC_CRS_SIZE_crs_size_vrt_END    (11)
#define SOC_EDC_CRS_SIZE_crs_size_hrz_START  (16)
#define SOC_EDC_CRS_SIZE_crs_size_hrz_END    (27)


/*****************************************************************************
 �ṹ��    : SOC_EDC_CRS_CTL_UNION
 �ṹ˵��  : CRS_CTL �Ĵ����ṹ���塣��ַƫ����:0x0080����ֵ:0x00000000�����:32
 �Ĵ���˵��: Cursor����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  crs_secu_line     : 12; /* bit[0-11] : Cursor��ˢ�°�ȫ����ʼ�к�-1��
                                                             ��EDC��ʼ���ɸüĴ���ָ�����У�����CRS_LINE_INT�жϣ�֪ͨCursor���½��̿���ˢ��һ֡Graphic���û��ƿɱ���Cursor��ʾ�������� */
        unsigned int  alp_crs_sel       : 2;  /* bit[12-13]: Underlayer��Cursor����Alpha Blendingʱ��Cursor��ȡ�����ϵ����
                                                             00�� Alpha 
                                                             01�� 1-Alpha
                                                             10�� 0
                                                             11�� 1
                                                             ע��UnderlayerΪBase,Channel1��Channel2���Ӻ��ͼ�� */
        unsigned int  alp_under_sel     : 2;  /* bit[14-15]: Underlayer��Cursor����Alpha Blendingʱ��Underlayer��ȡ�����ϵ����
                                                             00�� Alpha 
                                                             01�� 1-Alpha
                                                             10�� 0
                                                             11�� 1
                                                             ע��UnderlayerΪBase,Channel1��Channel2���Ӻ��ͼ�� */
        unsigned int  reserved_0        : 1;  /* bit[16]   : ���� */
        unsigned int  crs_fmtin         : 2;  /* bit[17-18]: Cursor���������ظ�ʽ��
                                                             000�� ARGB1555
                                                             001�� RGB565
                                                             010�� RGB0888
                                                             011�� ARGB8888 */
        unsigned int  crs_bgr           : 1;  /* bit[19]   : 0�� Cursor��������ΪRGB��ʽ
                                                             1�� Cursor��������ΪBGR��ʽ */
        unsigned int  crs_des_colork_en : 1;  /* bit[20]   : Cursor as Destination Color Keyʹ�ܣ�
                                                             0�� Cursor as Destination Color Key�ر�
                                                             1�� Cursor as Destination Color Keyʹ�� */
        unsigned int  reserved_1        : 1;  /* bit[21]   : ���� */
        unsigned int  crs_alp_mode      : 1;  /* bit[22]   : Alpha Sourceѡ��
                                                             0�� Global Alpha��Alpha����Global Alphaֵ�Ĵ���
                                                             1�� Pixel Alpha��Alpha����Cursor ARGB��ʽ������ */
        unsigned int  crs_src_blend_en  : 1;  /* bit[23]   : Cursorͼ���Source Alpha Blending����ʹ�ܣ�
                                                             0�� Cursor��Source Alpha Blending���ر�
                                                             1�� Cursor��Source Alpha Blending������ */
        unsigned int  reserved_2        : 3;  /* bit[24-26]: ���� */
        unsigned int  crs_en            : 1;  /* bit[27]   : Cursorʹ�ܣ�
                                                             0�� Cursor�ر�
                                                             1�� Cursor���� */
        unsigned int  crs_cfg_ok        : 1;  /* bit[28]   : ��crs_cfg_ok_selΪ1ʱ����λ��Ч����CPU����������Cursor�Ĵ������ø�λΪ1����EDC��⵽֡��ʼʱӲ���Զ����㡣 */
        unsigned int  crs_cfg_ok_sel    : 1;  /* bit[29]   : crs_cfg_ok��Դѡ��
                                                             0�� crs_cfg_ok����edc_cfg_ok(DISP_CTL.bit1)
                                                             1�� crs_cfg_ok����crs_cfg_ok(CRS_CTL.bit28) */
        unsigned int  reserved_3        : 2;  /* bit[30-31]: ������ */
    } reg;
} SOC_EDC_CRS_CTL_UNION;
#endif
#define SOC_EDC_CRS_CTL_crs_secu_line_START      (0)
#define SOC_EDC_CRS_CTL_crs_secu_line_END        (11)
#define SOC_EDC_CRS_CTL_alp_crs_sel_START        (12)
#define SOC_EDC_CRS_CTL_alp_crs_sel_END          (13)
#define SOC_EDC_CRS_CTL_alp_under_sel_START      (14)
#define SOC_EDC_CRS_CTL_alp_under_sel_END        (15)
#define SOC_EDC_CRS_CTL_crs_fmtin_START          (17)
#define SOC_EDC_CRS_CTL_crs_fmtin_END            (18)
#define SOC_EDC_CRS_CTL_crs_bgr_START            (19)
#define SOC_EDC_CRS_CTL_crs_bgr_END              (19)
#define SOC_EDC_CRS_CTL_crs_des_colork_en_START  (20)
#define SOC_EDC_CRS_CTL_crs_des_colork_en_END    (20)
#define SOC_EDC_CRS_CTL_crs_alp_mode_START       (22)
#define SOC_EDC_CRS_CTL_crs_alp_mode_END         (22)
#define SOC_EDC_CRS_CTL_crs_src_blend_en_START   (23)
#define SOC_EDC_CRS_CTL_crs_src_blend_en_END     (23)
#define SOC_EDC_CRS_CTL_crs_en_START             (27)
#define SOC_EDC_CRS_CTL_crs_en_END               (27)
#define SOC_EDC_CRS_CTL_crs_cfg_ok_START         (28)
#define SOC_EDC_CRS_CTL_crs_cfg_ok_END           (28)
#define SOC_EDC_CRS_CTL_crs_cfg_ok_sel_START     (29)
#define SOC_EDC_CRS_CTL_crs_cfg_ok_sel_END       (29)


/*****************************************************************************
 �ṹ��    : SOC_EDC_CRS_COLORK_MIN_UNION
 �ṹ˵��  : CRS_COLORK_MIN �Ĵ����ṹ���塣��ַƫ����:0x0084����ֵ:0x00000000�����:32
 �Ĵ���˵��: Cursor�ؼ�ɫ����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  crs_colork_min : 24; /* bit[0-23] : Cursor����ͼ��ؼ�ɫ�����ޣ����ֶε�RGB��ʽ��Cursor������RGB��ʽһ�� */
        unsigned int  reserved       : 8;  /* bit[24-31]: ���� */
    } reg;
} SOC_EDC_CRS_COLORK_MIN_UNION;
#endif
#define SOC_EDC_CRS_COLORK_MIN_crs_colork_min_START  (0)
#define SOC_EDC_CRS_COLORK_MIN_crs_colork_min_END    (23)


/*****************************************************************************
 �ṹ��    : SOC_EDC_CRS_COLORK_MAX_UNION
 �ṹ˵��  : CRS_COLORK_MAX �Ĵ����ṹ���塣��ַƫ����:0x0088����ֵ:0x00000000�����:32
 �Ĵ���˵��: Cursor�ؼ�ɫ����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  crs_colork_max : 24; /* bit[0-23] : Cursor����ͼ��ؼ�ɫ�����ޣ����ֶε�RGB��ʽ��Cursor������RGB��ʽһ�� */
        unsigned int  reserved       : 8;  /* bit[24-31]: ���� */
    } reg;
} SOC_EDC_CRS_COLORK_MAX_UNION;
#endif
#define SOC_EDC_CRS_COLORK_MAX_crs_colork_max_START  (0)
#define SOC_EDC_CRS_COLORK_MAX_crs_colork_max_END    (23)


/*****************************************************************************
 �ṹ��    : SOC_EDC_CRS_GLB_ALP_VAL_UNION
 �ṹ˵��  : CRS_GLB_ALP_VAL �Ĵ����ṹ���塣��ַƫ����:0x008C����ֵ:0x00000000�����:32
 �Ĵ���˵��: Cursor���²����Alpha Blendingʱ��ȫ��Alpha����ֵ
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  crs_alp_value0 : 8;  /* bit[0-7]  : 1����Alphaȡ��ARGB1555����ʱ�����ֶα�ʾA=0ʱ����Ӧ��Alpha
                                                          2����Alphaȡ��Global Alphaֵʱ�����ֶα�ʾGlobal Alpha */
        unsigned int  crs_alp_value1 : 8;  /* bit[8-15] : ��Alphaȡ��ARGB1555����ʱ�����ֶα�ʾA=1ʱ����Ӧ��Alpha������������ֶ���Ч */
        unsigned int  reserved       : 16; /* bit[16-31]: ���� */
    } reg;
} SOC_EDC_CRS_GLB_ALP_VAL_UNION;
#endif
#define SOC_EDC_CRS_GLB_ALP_VAL_crs_alp_value0_START  (0)
#define SOC_EDC_CRS_GLB_ALP_VAL_crs_alp_value0_END    (7)
#define SOC_EDC_CRS_GLB_ALP_VAL_crs_alp_value1_START  (8)
#define SOC_EDC_CRS_GLB_ALP_VAL_crs_alp_value1_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_EDC_DISP_SIZE_UNION
 �ṹ˵��  : DISP_SIZE �Ĵ����ṹ���塣��ַƫ����:0x090����ֵ:0x00000000�����:32
 �Ĵ���˵��: ��ʾ�ߴ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  disp_size_vrt : 12; /* bit[0-11] : ��ʾͼ��ĸ߶�-1 */
        unsigned int  reserved_0    : 4;  /* bit[12-15]: ���� */
        unsigned int  disp_size_hrz : 12; /* bit[16-27]: ��ʾͼ��Ŀ��-1 */
        unsigned int  reserved_1    : 4;  /* bit[28-31]: ���� */
    } reg;
} SOC_EDC_DISP_SIZE_UNION;
#endif
#define SOC_EDC_DISP_SIZE_disp_size_vrt_START  (0)
#define SOC_EDC_DISP_SIZE_disp_size_vrt_END    (11)
#define SOC_EDC_DISP_SIZE_disp_size_hrz_START  (16)
#define SOC_EDC_DISP_SIZE_disp_size_hrz_END    (27)


/*****************************************************************************
 �ṹ��    : SOC_EDC_DISP_CTL_UNION
 �ṹ˵��  : DISP_CTL �Ĵ����ṹ���塣��ַƫ����:0x094����ֵ:0x3C000000�����:32
 �Ĵ���˵��: ��ʾ����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  edc_cfg_ok_sel  : 1;  /* bit[0]    : EDC_CFG_OKѡ��
                                                           0�� ѡ��EDC(EDC2)��EDC_CFG_OK��Ϊ��EDC���������λ
                                                           1�� ѡ��EDC1��EDC_CFG_OK��Ϊ��EDC���������λ
                                                           ע����λֻ����EDC2����Ч��ʹ������ͬ�ֱ��ʵ�˫��������չ��ʾ�ĳ��Ϻ�ͨ������ĳ��ϡ� */
        unsigned int  edc_cfg_ok      : 1;  /* bit[1]    : EDC������ɣ�
                                                           ������������EDC�Ĵ�����Ӧ����λд1��д0�� */
        unsigned int  d3d_right_first : 1;  /* bit[2]    : 3D��Frame By Frame��ʽ��RIGHT��ǰ��־λ��
                                                           0�� Left��ǰ
                                                            Side by Side�� Left����Right����
                                                            Top to Bottom�� Left���ϣ�Right����
                                                            Column By Column�������ң��������
                                                            Line By Line�� ���ϵ��£��������
                                                            Quincunx�� ż���д����ң�������ң������д����ң� 
                                                            ���Һ���(������0����)
                                                           1�� Right��ǰ
                                                            Side by Side�� Right����Left����
                                                            Top to Bottom�� right���ϣ�Right����
                                                            Column By Column�������ң��������
                                                            Line By Line�� ���ϵ��£��������
                                                            Quincunx�� ż���д����ң�������ң������д����ң� 
                                                            ���Һ���(������0����) */
        unsigned int  disp_frm_fmt    : 3;  /* bit[3-5]  : ��ʾ֡��ʽ��
                                                           000�� 2D��ʽ
                                                           001�� 3D Side By Side��ʽ
                                                           010�� 3D Top To Bottom��ʽ
                                                           011�� 3D Column By Column��ʽ
                                                           100�� 3D Line By Line��ʽ
                                                           101�� 3D Quincunx��ʽ
                                                           110�� 3D Frame By Frame��ʽ */
        unsigned int  disp_pix_fmt    : 2;  /* bit[6-7]  : ������ظ�ʽ��
                                                           00�� RGB565
                                                           01�� RGB666
                                                           10�� RGB888 */
        unsigned int  dither_en       : 1;  /* bit[8]    : Ditheringʹ�ܣ�
                                                           0�� Dithering�رգ�EDC�����������뷨���������ͳһ�������ʽ
                                                           1�� Dithering������EDC����Dithering�㷨���������ͳһ�������ʽ */
        unsigned int  disp_endian     : 1;  /* bit[9]    : ͼ�������С�ˣ�
                                                           0�� С��ģʽ
                                                           1�� 64bit���ݰ�8bit���ģʽ  */
        unsigned int  edc_en          : 1;  /* bit[10]   : EDCʹ�ܿ��ƣ�
                                                           0�� EDC���ر�
                                                           1�� EDC������ */
        unsigned int  unflow_lev      : 12; /* bit[11-22]: DFS����Ԥ������ˮ�� */
        unsigned int  gamma_en        : 1;  /* bit[23]   : ���GAMMAʹ�ܣ�
                                                           0�� �ر�GAMMAУ��
                                                           1�� ʹ��GAMMAУ�� */
        unsigned int  ch_chg          : 1;  /* bit[24]   : EDC2��Channel1�滻EDC1��Channel2����λ��
                                                           0�� EDC2��Channel1���滻EDC1��Channel2 
                                                           1�� EDC2��Channel1�滻EDC1��Channel2
                                                           ע���üĴ���λֻ��EDC1�ڣ�ͬ����LDI1 */
        unsigned int  nrot_burst16    : 1;  /* bit[25]   : 0����ת��Burst���ȶ��壺
                                                           0�� Burst4
                                                           1�� Burst8 */
        unsigned int  outstding_dep   : 4;  /* bit[26-29]: outstanding������ã���Χ��1~15������������Ϊ0 */
        unsigned int  frm_end_start   : 1;  /* bit[30]   : EDC֡��ʼ����ʱ��ѡ��
                                                           0��EDC��֡ͬ���ź���Чʱ����ʼ��һ֡�Ĵ��䣻
                                                           1��EDC��֡�����󣬾Ϳ�ʼ��һ֡�Ĵ��� */
        unsigned int  crg_gt_en       : 1;  /* bit[31]   : ģ�鼶Clock�ſ�ʹ�� */
    } reg;
} SOC_EDC_DISP_CTL_UNION;
#endif
#define SOC_EDC_DISP_CTL_edc_cfg_ok_sel_START   (0)
#define SOC_EDC_DISP_CTL_edc_cfg_ok_sel_END     (0)
#define SOC_EDC_DISP_CTL_edc_cfg_ok_START       (1)
#define SOC_EDC_DISP_CTL_edc_cfg_ok_END         (1)
#define SOC_EDC_DISP_CTL_d3d_right_first_START  (2)
#define SOC_EDC_DISP_CTL_d3d_right_first_END    (2)
#define SOC_EDC_DISP_CTL_disp_frm_fmt_START     (3)
#define SOC_EDC_DISP_CTL_disp_frm_fmt_END       (5)
#define SOC_EDC_DISP_CTL_disp_pix_fmt_START     (6)
#define SOC_EDC_DISP_CTL_disp_pix_fmt_END       (7)
#define SOC_EDC_DISP_CTL_dither_en_START        (8)
#define SOC_EDC_DISP_CTL_dither_en_END          (8)
#define SOC_EDC_DISP_CTL_disp_endian_START      (9)
#define SOC_EDC_DISP_CTL_disp_endian_END        (9)
#define SOC_EDC_DISP_CTL_edc_en_START           (10)
#define SOC_EDC_DISP_CTL_edc_en_END             (10)
#define SOC_EDC_DISP_CTL_unflow_lev_START       (11)
#define SOC_EDC_DISP_CTL_unflow_lev_END         (22)
#define SOC_EDC_DISP_CTL_gamma_en_START         (23)
#define SOC_EDC_DISP_CTL_gamma_en_END           (23)
#define SOC_EDC_DISP_CTL_ch_chg_START           (24)
#define SOC_EDC_DISP_CTL_ch_chg_END             (24)
#define SOC_EDC_DISP_CTL_nrot_burst16_START     (25)
#define SOC_EDC_DISP_CTL_nrot_burst16_END       (25)
#define SOC_EDC_DISP_CTL_outstding_dep_START    (26)
#define SOC_EDC_DISP_CTL_outstding_dep_END      (29)
#define SOC_EDC_DISP_CTL_frm_end_start_START    (30)
#define SOC_EDC_DISP_CTL_frm_end_start_END      (30)
#define SOC_EDC_DISP_CTL_crg_gt_en_START        (31)
#define SOC_EDC_DISP_CTL_crg_gt_en_END          (31)


/*****************************************************************************
 �ṹ��    : SOC_EDC_DISP_DPD_UNION
 �ṹ˵��  : DISP_DPD �Ĵ����ṹ���塣��ַƫ����:0x098����ֵ:0x00000000�����:32
 �Ĵ���˵��: ��ʾ����ɫ
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  disp_dpd           : 24; /* bit[0-23] : Default Pixel Data(DPD)����������Base����ʾ��ɫ */
        unsigned int  reserved           : 4;  /* bit[24-27]: ���� */
        unsigned int  sbl_recover_bypass : 1;  /* bit[28]   : 0�� SBL underflow�Իָ����ܴ�
                                                              1�� SBL underflow�Իָ����ܹر� */
        unsigned int  sbl_clk_gt         : 1;  /* bit[29]   : SBLʱ���ſ�ʹ�ܣ�
                                                              0�� ���ſ�SBLʱ��
                                                              1�� �ſ�SBLʱ�� */
        unsigned int  sbl_en             : 1;  /* bit[30]   : SBLʹ�ܣ�
                                                              0�� ��ʹ��SBL
                                                              1�� ʹ��SBL */
        unsigned int  outstd_ctl_disable : 1;  /* bit[31]   : Outstanding��ȿ��ƹرգ�
                                                              0�� ��Outstanding��ȿ��ƣ�
                                                              1�� �ر�Outstanding��ȿ��� */
    } reg;
} SOC_EDC_DISP_DPD_UNION;
#endif
#define SOC_EDC_DISP_DPD_disp_dpd_START            (0)
#define SOC_EDC_DISP_DPD_disp_dpd_END              (23)
#define SOC_EDC_DISP_DPD_sbl_recover_bypass_START  (28)
#define SOC_EDC_DISP_DPD_sbl_recover_bypass_END    (28)
#define SOC_EDC_DISP_DPD_sbl_clk_gt_START          (29)
#define SOC_EDC_DISP_DPD_sbl_clk_gt_END            (29)
#define SOC_EDC_DISP_DPD_sbl_en_START              (30)
#define SOC_EDC_DISP_DPD_sbl_en_END                (30)
#define SOC_EDC_DISP_DPD_outstd_ctl_disable_START  (31)
#define SOC_EDC_DISP_DPD_outstd_ctl_disable_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_EDC_STS_UNION
 �ṹ˵��  : STS �Ĵ����ṹ���塣��ַƫ����:0x09C����ֵ:0x80000000�����:32
 �Ĵ���˵��: ��ʾ״̬
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ovly_fifo_fill_lev : 12; /* bit[0-11] : Overlay fifo���ˮ�� */
        unsigned int  reserved           : 18; /* bit[12-29]: ���� */
        unsigned int  bas_vsync          : 1;  /* bit[30]   : ֡������״̬λ��
                                                              0�� EDC������LCD��������ϴ���һ֡���ݣ�
                                                              1�� EDC�������LCD��������һ֡���ݵ���Ϻʹ��䣻
                                                              ��λ��֡��ʼʱ�Զ����㣬EDC���һ֡���ݵ���Ϻʹ�����Զ���λ */
        unsigned int  outstding_zero     : 1;  /* bit[31]   : Master�ӿڵ�outstanding������Ϊ0 */
    } reg;
} SOC_EDC_STS_UNION;
#endif
#define SOC_EDC_STS_ovly_fifo_fill_lev_START  (0)
#define SOC_EDC_STS_ovly_fifo_fill_lev_END    (11)
#define SOC_EDC_STS_bas_vsync_START           (30)
#define SOC_EDC_STS_bas_vsync_END             (30)
#define SOC_EDC_STS_outstding_zero_START      (31)
#define SOC_EDC_STS_outstding_zero_END        (31)


/*****************************************************************************
 �ṹ��    : SOC_EDC_INTS_UNION
 �ṹ˵��  : INTS �Ĵ����ṹ���塣��ַƫ����:0x0A0����ֵ:0x00000000�����:32
 �Ĵ���˵��: �ж�״̬
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  crsr_end_int : 1;  /* bit[0]    : Cursor Rightͨ����������ж�ָʾ��
                                                        Cursor Rightͨ��������ɺ��λ��1�����д0ʱ��λ������ */
        unsigned int  crsl_end_int : 1;  /* bit[1]    : Cursor Leftͨ����������ж�ָʾ��
                                                        Cursor Leftͨ��������ɺ��λ��1�����д0ʱ��λ������ */
        unsigned int  ch2r_end_int : 1;  /* bit[2]    : Channel2 Rightͨ����������ж�ָʾ��
                                                        Channel2 Rightͨ��������ɺ��λ��1�����д0ʱ��λ������ */
        unsigned int  ch2l_end_int : 1;  /* bit[3]    : Channel2 Leftͨ����������ж�ָʾ��
                                                        Channel2 Leftͨ��������ɺ��λ��1�����д0ʱ��λ������ */
        unsigned int  ch1r_end_int : 1;  /* bit[4]    : Channel1 Rightͨ����������ж�ָʾ��
                                                        Channel1 Rightͨ��������ɺ��λ��1�����д0ʱ��λ������ */
        unsigned int  ch1l_end_int : 1;  /* bit[5]    : Channel1 Leftͨ����������ж�ָʾ��
                                                        Channel1 Leftͨ��������ɺ��λ��1�����д0ʱ��λ������ */
        unsigned int  bas_end_int  : 1;  /* bit[6]    : ֡���½����ж�λָʾ��
                                                        ��EDC�����LCD��������һ֡ʱ������жϣ����д0ʱ��λ������ */
        unsigned int  bas_stat_int : 1;  /* bit[7]    : ֡��ʼ�����ж�λ��
                                                        ��EDC��ʼ��LCD��������һ֡ʱ������жϣ����д0ʱ��λ������ */
        unsigned int  crs_err_int  : 1;  /* bit[8]    : Cursor��ȫ����ʼ���ж�ָʾ��
                                                        EDC����Cursor��ȫ����ʼ�к��λ��1�����д0ʱ��λ������ */
        unsigned int  ch2_line_int : 1;  /* bit[9]    : Channel2��ȫ����ʼ���ж�ָʾ��
                                                        EDC����Channel2��ȫ����ʼ�к��λ��1�����д0ʱ��λ������ */
        unsigned int  ch1_line_int : 1;  /* bit[10]   : Channel1��ȫ����ʼ���ж�ָʾ��
                                                        EDC����Channel1��ȫ����ʼ�к��λ��1�����д0ʱ��λ������ */
        unsigned int  crsr_err_int : 1;  /* bit[11]   : Cursor Righttͨ������Bus Error�ж�ָʾ�����д0ʱ��λ������ */
        unsigned int  crsl_err_int : 1;  /* bit[12]   : Cursor Leftͨ������Bus Error�ж�ָʾ�����д0ʱ��λ������ */
        unsigned int  ch2r_err_int : 1;  /* bit[13]   : Channel2 Righttͨ������Bus Error�ж�ָʾ�����д0ʱ��λ������ */
        unsigned int  ch2l_err_int : 1;  /* bit[14]   : Channel2 Leftͨ������Bus Error�ж�ָʾ�����д0ʱ��λ������ */
        unsigned int  ch1r_err_int : 1;  /* bit[15]   : Channel1 Righttͨ������Bus Error�ж�ָʾ�����д0ʱ��λ������ */
        unsigned int  ch1l_err_int : 1;  /* bit[16]   : Channel1 Leftͨ������Bus Error�ж�ָʾ�����д0ʱ��λ������ */
        unsigned int  unflow_int   : 1;  /* bit[17]   : Overlay FIFO����Ԥ���ж�ָʾ�����д0ʱ��λ������ */
        unsigned int  reserved     : 14; /* bit[18-31]: ������ */
    } reg;
} SOC_EDC_INTS_UNION;
#endif
#define SOC_EDC_INTS_crsr_end_int_START  (0)
#define SOC_EDC_INTS_crsr_end_int_END    (0)
#define SOC_EDC_INTS_crsl_end_int_START  (1)
#define SOC_EDC_INTS_crsl_end_int_END    (1)
#define SOC_EDC_INTS_ch2r_end_int_START  (2)
#define SOC_EDC_INTS_ch2r_end_int_END    (2)
#define SOC_EDC_INTS_ch2l_end_int_START  (3)
#define SOC_EDC_INTS_ch2l_end_int_END    (3)
#define SOC_EDC_INTS_ch1r_end_int_START  (4)
#define SOC_EDC_INTS_ch1r_end_int_END    (4)
#define SOC_EDC_INTS_ch1l_end_int_START  (5)
#define SOC_EDC_INTS_ch1l_end_int_END    (5)
#define SOC_EDC_INTS_bas_end_int_START   (6)
#define SOC_EDC_INTS_bas_end_int_END     (6)
#define SOC_EDC_INTS_bas_stat_int_START  (7)
#define SOC_EDC_INTS_bas_stat_int_END    (7)
#define SOC_EDC_INTS_crs_err_int_START   (8)
#define SOC_EDC_INTS_crs_err_int_END     (8)
#define SOC_EDC_INTS_ch2_line_int_START  (9)
#define SOC_EDC_INTS_ch2_line_int_END    (9)
#define SOC_EDC_INTS_ch1_line_int_START  (10)
#define SOC_EDC_INTS_ch1_line_int_END    (10)
#define SOC_EDC_INTS_crsr_err_int_START  (11)
#define SOC_EDC_INTS_crsr_err_int_END    (11)
#define SOC_EDC_INTS_crsl_err_int_START  (12)
#define SOC_EDC_INTS_crsl_err_int_END    (12)
#define SOC_EDC_INTS_ch2r_err_int_START  (13)
#define SOC_EDC_INTS_ch2r_err_int_END    (13)
#define SOC_EDC_INTS_ch2l_err_int_START  (14)
#define SOC_EDC_INTS_ch2l_err_int_END    (14)
#define SOC_EDC_INTS_ch1r_err_int_START  (15)
#define SOC_EDC_INTS_ch1r_err_int_END    (15)
#define SOC_EDC_INTS_ch1l_err_int_START  (16)
#define SOC_EDC_INTS_ch1l_err_int_END    (16)
#define SOC_EDC_INTS_unflow_int_START    (17)
#define SOC_EDC_INTS_unflow_int_END      (17)


/*****************************************************************************
 �ṹ��    : SOC_EDC_INTE_UNION
 �ṹ˵��  : INTE �Ĵ����ṹ���塣��ַƫ����:0x0A4����ֵ:0x00000000�����:32
 �Ĵ���˵��: �ж�ʹ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  crsr_end_int_msk : 1;  /* bit[0]    : Cursor Rightͨ����������ж�����
                                                            0�� ʹ���ж�
                                                            1�� �����ж� */
        unsigned int  crsl_end_int_msk : 1;  /* bit[1]    : Cursor Leftͨ����������ж�����
                                                            0�� ʹ���ж�
                                                            1�� �����ж� */
        unsigned int  ch2r_end_int_msk : 1;  /* bit[2]    : Channel2 Rightͨ����������ж�����
                                                            0�� ʹ���ж�
                                                            1�� �����ж� */
        unsigned int  ch2l_end_int_msk : 1;  /* bit[3]    : Channel2 Leftͨ����������ж�����
                                                            0�� ʹ���ж�
                                                            1�� �����ж� */
        unsigned int  ch1r_end_int_msk : 1;  /* bit[4]    : Channel1 Rightͨ����������ж�����
                                                            0�� ʹ���ж�
                                                            1�� �����ж� */
        unsigned int  ch1l_end_int_msk : 1;  /* bit[5]    : Channel1 Leftͨ����������ж�����
                                                            0�� ʹ���ж�
                                                            1�� �����ж� */
        unsigned int  bas_end_int_msk  : 1;  /* bit[6]    : ֡���½����ж�����
                                                            0�� ʹ���ж�
                                                            1�� �����ж� */
        unsigned int  bas_stat_int_msk : 1;  /* bit[7]    : ֡��ʼ�����ж�����
                                                            0�� ʹ���ж�
                                                            1�� �����ж� */
        unsigned int  crs_err_int_msk  : 1;  /* bit[8]    : Cursor��ȫ����ʼ���ж�����
                                                            0�� ʹ���ж�
                                                            1�� �����ж� */
        unsigned int  ch2_line_int_msk : 1;  /* bit[9]    : Channel2��ȫ����ʼ���ж�����
                                                            0�� ʹ���ж�
                                                            1�� �����ж� */
        unsigned int  ch1_line_int_msk : 1;  /* bit[10]   : Channel1��ȫ����ʼ���ж�����
                                                            0�� ʹ���ж�
                                                            1�� �����ж� */
        unsigned int  crsr_err_int_msk : 1;  /* bit[11]   : Cursor Righttͨ������Bus Error�ж�����
                                                            0�� ʹ���ж�
                                                            1�� �����ж� */
        unsigned int  crsl_err_int_msk : 1;  /* bit[12]   : Cursor Leftͨ������Bus Error�ж�����
                                                            0�� ʹ���ж�
                                                            1�� �����ж� */
        unsigned int  ch2r_err_int_msk : 1;  /* bit[13]   : Channel2 Righttͨ������Bus Error�ж�����
                                                            0�� ʹ���ж�
                                                            1�� �����ж� */
        unsigned int  ch2l_err_int_msk : 1;  /* bit[14]   : Channel2 Leftͨ������Bus Error�ж�����
                                                            0�� ʹ���ж�
                                                            1�� �����ж� */
        unsigned int  ch1r_err_int_msk : 1;  /* bit[15]   : Channel1 Righttͨ������Bus Error�ж�����
                                                            0�� ʹ���ж�
                                                            1�� �����ж� */
        unsigned int  ch1l_err_int_msk : 1;  /* bit[16]   : Channel1 Leftͨ������Bus Error�ж�����
                                                            0�� ʹ���ж�
                                                            1�� �����ж� */
        unsigned int  unflow_int_msk   : 1;  /* bit[17]   : Overlay FIFO����Ԥ���ж�����
                                                            0�� ʹ���ж�
                                                            1�� �����ж� */
        unsigned int  reserved         : 14; /* bit[18-31]: ������ */
    } reg;
} SOC_EDC_INTE_UNION;
#endif
#define SOC_EDC_INTE_crsr_end_int_msk_START  (0)
#define SOC_EDC_INTE_crsr_end_int_msk_END    (0)
#define SOC_EDC_INTE_crsl_end_int_msk_START  (1)
#define SOC_EDC_INTE_crsl_end_int_msk_END    (1)
#define SOC_EDC_INTE_ch2r_end_int_msk_START  (2)
#define SOC_EDC_INTE_ch2r_end_int_msk_END    (2)
#define SOC_EDC_INTE_ch2l_end_int_msk_START  (3)
#define SOC_EDC_INTE_ch2l_end_int_msk_END    (3)
#define SOC_EDC_INTE_ch1r_end_int_msk_START  (4)
#define SOC_EDC_INTE_ch1r_end_int_msk_END    (4)
#define SOC_EDC_INTE_ch1l_end_int_msk_START  (5)
#define SOC_EDC_INTE_ch1l_end_int_msk_END    (5)
#define SOC_EDC_INTE_bas_end_int_msk_START   (6)
#define SOC_EDC_INTE_bas_end_int_msk_END     (6)
#define SOC_EDC_INTE_bas_stat_int_msk_START  (7)
#define SOC_EDC_INTE_bas_stat_int_msk_END    (7)
#define SOC_EDC_INTE_crs_err_int_msk_START   (8)
#define SOC_EDC_INTE_crs_err_int_msk_END     (8)
#define SOC_EDC_INTE_ch2_line_int_msk_START  (9)
#define SOC_EDC_INTE_ch2_line_int_msk_END    (9)
#define SOC_EDC_INTE_ch1_line_int_msk_START  (10)
#define SOC_EDC_INTE_ch1_line_int_msk_END    (10)
#define SOC_EDC_INTE_crsr_err_int_msk_START  (11)
#define SOC_EDC_INTE_crsr_err_int_msk_END    (11)
#define SOC_EDC_INTE_crsl_err_int_msk_START  (12)
#define SOC_EDC_INTE_crsl_err_int_msk_END    (12)
#define SOC_EDC_INTE_ch2r_err_int_msk_START  (13)
#define SOC_EDC_INTE_ch2r_err_int_msk_END    (13)
#define SOC_EDC_INTE_ch2l_err_int_msk_START  (14)
#define SOC_EDC_INTE_ch2l_err_int_msk_END    (14)
#define SOC_EDC_INTE_ch1r_err_int_msk_START  (15)
#define SOC_EDC_INTE_ch1r_err_int_msk_END    (15)
#define SOC_EDC_INTE_ch1l_err_int_msk_START  (16)
#define SOC_EDC_INTE_ch1l_err_int_msk_END    (16)
#define SOC_EDC_INTE_unflow_int_msk_START    (17)
#define SOC_EDC_INTE_unflow_int_msk_END      (17)


/*****************************************************************************
 �ṹ��    : SOC_EDC_GAMCNT_CLR_UNION
 �ṹ˵��  : GAMCNT_CLR �Ĵ����ṹ���塣��ַƫ����:0x0A8����ֵ:0x00000000�����:32
 �Ĵ���˵��: Gamma��������������
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  gamcnt_clr : 32; /* bit[0-31]: д1��Gammaϵ�������Ĵ������㡣��ÿ�ζ�EDC_GAMMA�������û����֮ǰ������λ��λ�� */
    } reg;
} SOC_EDC_GAMCNT_CLR_UNION;
#endif
#define SOC_EDC_GAMCNT_CLR_gamcnt_clr_START  (0)
#define SOC_EDC_GAMCNT_CLR_gamcnt_clr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_EDC_TILE_SIZE_VRT_UNION
 �ṹ˵��  : TILE_SIZE_VRT �Ĵ����ṹ���塣��ַƫ����:0x0AC����ֵ:0x00000000�����:32
 �Ĵ���˵��: Channel1 Tile�洢ͼ��Ĵ�ֱ�߶�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  tile_size_vrt : 14; /* bit[0-13] : Tileͼ�����Ч�ܸ߶�-1������ֵ�����λΪ0���������2'b11 */
        unsigned int  reserved      : 18; /* bit[14-31]: ������ */
    } reg;
} SOC_EDC_TILE_SIZE_VRT_UNION;
#endif
#define SOC_EDC_TILE_SIZE_VRT_tile_size_vrt_START  (0)
#define SOC_EDC_TILE_SIZE_VRT_tile_size_vrt_END    (13)


/*****************************************************************************
 �ṹ��    : SOC_EDC_TILE_CROP_UNION
 �ṹ˵��  : TILE_CROP �Ĵ����ṹ���塣��ַƫ����:0x0B0����ֵ:0x00000000�����:32
 �Ĵ���˵��: Channel1 Tile��ʽ�µ�Crop�������
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  tile_crop_x0 : 14; /* bit[0-13] : Tile��ʽChannel1ͼ��Crop���X���� */
        unsigned int  reserved_0   : 2;  /* bit[14-15]: ������ */
        unsigned int  tile_crop_y0 : 14; /* bit[16-29]: Tile��ʽChannel1ͼ��Crop���Y���� */
        unsigned int  reserved_1   : 2;  /* bit[30-31]: ������ */
    } reg;
} SOC_EDC_TILE_CROP_UNION;
#endif
#define SOC_EDC_TILE_CROP_tile_crop_x0_START  (0)
#define SOC_EDC_TILE_CROP_tile_crop_x0_END    (13)
#define SOC_EDC_TILE_CROP_tile_crop_y0_START  (16)
#define SOC_EDC_TILE_CROP_tile_crop_y0_END    (29)


/*****************************************************************************
 �ṹ��    : SOC_EDC_TL_ENGIN0_ADDR_UNION
 �ṹ˵��  : TL_ENGIN0_ADDR �Ĵ����ṹ���塣��ַƫ����:0x0B4����ֵ:0x00000000�����:32
 �Ĵ���˵��: Tile Channel��ͨ��Engine0��ַ
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  tl_engin0_addr : 32; /* bit[0-31]: Tile Channel��ͨ��Engine0��ַ����4λ�̶�Ϊ0��128bit���룩 */
    } reg;
} SOC_EDC_TL_ENGIN0_ADDR_UNION;
#endif
#define SOC_EDC_TL_ENGIN0_ADDR_tl_engin0_addr_START  (0)
#define SOC_EDC_TL_ENGIN0_ADDR_tl_engin0_addr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_EDC_TL_ENGIN1_ADDR_UNION
 �ṹ˵��  : TL_ENGIN1_ADDR �Ĵ����ṹ���塣��ַƫ����:0x0B8����ֵ:0x00000000�����:32
 �Ĵ���˵��: Tile Channel��ͨ��Engine1��ַ
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  tl_engin1_addr : 32; /* bit[0-31]: Tile Channel��ͨ��Engine1��ַ����4λ�̶�Ϊ0��128bit���룩 */
    } reg;
} SOC_EDC_TL_ENGIN1_ADDR_UNION;
#endif
#define SOC_EDC_TL_ENGIN1_ADDR_tl_engin1_addr_START  (0)
#define SOC_EDC_TL_ENGIN1_ADDR_tl_engin1_addr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_EDC_TR_ENGIN0_ADDR_UNION
 �ṹ˵��  : TR_ENGIN0_ADDR �Ĵ����ṹ���塣��ַƫ����:0x0BC����ֵ:0x00000000�����:32
 �Ĵ���˵��: Tile Channel��ͨ��Engine0��ַ
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  tr_engin0_addr : 32; /* bit[0-31]: Tile Channel��ͨ��Engine0��ַ����4λ�̶�Ϊ0��128bit���룩 */
    } reg;
} SOC_EDC_TR_ENGIN0_ADDR_UNION;
#endif
#define SOC_EDC_TR_ENGIN0_ADDR_tr_engin0_addr_START  (0)
#define SOC_EDC_TR_ENGIN0_ADDR_tr_engin0_addr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_EDC_TR_ENGIN1_ADDR_UNION
 �ṹ˵��  : TR_ENGIN1_ADDR �Ĵ����ṹ���塣��ַƫ����:0x0C0����ֵ:0x00000000�����:32
 �Ĵ���˵��: Tile Channel��ͨ��Engine1��ַ
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  tr_engin1_addr : 32; /* bit[0-31]: Tile Channel��ͨ��Engine0��ַ����4λ�̶�Ϊ0��128bit���룩 */
    } reg;
} SOC_EDC_TR_ENGIN1_ADDR_UNION;
#endif
#define SOC_EDC_TR_ENGIN1_ADDR_tr_engin1_addr_START  (0)
#define SOC_EDC_TR_ENGIN1_ADDR_tr_engin1_addr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_EDC_TRUST_INTS_UNION
 �ṹ˵��  : TRUST_INTS �Ĵ����ṹ���塣��ַƫ����:0x0D0����ֵ:0x00000000�����:32
 �Ĵ���˵��: ��ȫ���ж�״̬�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  trust_bas_start_int : 1;  /* bit[0]   : ֡��ʼ�ж�λ��
                                                              ��EDC��ʼ��LCD��������һ֡ʱ������жϣ����д0ʱ��λ������ */
        unsigned int  reserved            : 31; /* bit[1-31]: ���� */
    } reg;
} SOC_EDC_TRUST_INTS_UNION;
#endif
#define SOC_EDC_TRUST_INTS_trust_bas_start_int_START  (0)
#define SOC_EDC_TRUST_INTS_trust_bas_start_int_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_EDC_TRUST_MASK_UNION
 �ṹ˵��  : TRUST_MASK �Ĵ����ṹ���塣��ַƫ����:0x00D4����ֵ:0x00000001�����:32
 �Ĵ���˵��: ��ȫ���ж����μĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  trust_bas_start_int_msk : 1;  /* bit[0]   : ֡��ʼ�ж�����λ��
                                                                  0��ʹ��֡��ʼ�жϣ�
                                                                  1������֡��ʼ�ж� */
        unsigned int  reserved                : 31; /* bit[1-31]: ���� */
    } reg;
} SOC_EDC_TRUST_MASK_UNION;
#endif
#define SOC_EDC_TRUST_MASK_trust_bas_start_int_msk_START  (0)
#define SOC_EDC_TRUST_MASK_trust_bas_start_int_msk_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_EDC_APROT_CFG_UNION
 �ṹ˵��  : APROT_CFG �Ĵ����ṹ���塣��ַƫ����:0x00D8����ֵ:0x00000007�����:32
 �Ĵ���˵��: ��ͼ�����߰�ȫλ���üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  crs_aprot1 : 1;  /* bit[0]   : Cursor��AXI����APROT[1] */
        unsigned int  ch2_aprot1 : 1;  /* bit[1]   : Channel2��AXI����APROT[1] */
        unsigned int  ch1_aprot1 : 1;  /* bit[2]   : Channel1��AXI����APROT[1] */
        unsigned int  reserved   : 29; /* bit[3-31]: ���� */
    } reg;
} SOC_EDC_APROT_CFG_UNION;
#endif
#define SOC_EDC_APROT_CFG_crs_aprot1_START  (0)
#define SOC_EDC_APROT_CFG_crs_aprot1_END    (0)
#define SOC_EDC_APROT_CFG_ch2_aprot1_START  (1)
#define SOC_EDC_APROT_CFG_ch2_aprot1_END    (1)
#define SOC_EDC_APROT_CFG_ch1_aprot1_START  (2)
#define SOC_EDC_APROT_CFG_ch1_aprot1_END    (2)


/*****************************************************************************
 �ṹ��    : SOC_EDC_CRS_CLIP_UNION
 �ṹ˵��  : CRS_CLIP �Ĵ����ṹ���塣��ַƫ����:0x00DC����ֵ:0x00000000�����:32
 �Ĵ���˵��: Cursor��Clip���üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  crsr_bot_clip   : 4;  /* bit[0-3]  : cursor��ͨ������ͼ���±߽�Clip����������0~15��Ϊ0��ʾ������Clip */
        unsigned int  crsr_top_clip   : 4;  /* bit[4-7]  : cursor��ͨ������ͼ���ϱ߽�Clip����������0~15��Ϊ0��ʾ������Clip */
        unsigned int  crsr_right_clip : 4;  /* bit[8-11] : cursor��ͨ������ͼ���ұ߽�Clip����������0~15��Ϊ0��ʾ������Clip */
        unsigned int  crsr_left_clip  : 4;  /* bit[12-15]: cursor��ͨ������ͼ����߽�Clip����������0~15��Ϊ0��ʾ������Clip */
        unsigned int  crsl_bot_clip   : 4;  /* bit[16-19]: cursor��ͨ������ͼ���±߽�Clip����������0~15��Ϊ0��ʾ������Clip */
        unsigned int  crsl_top_clip   : 4;  /* bit[20-23]: cursor��ͨ������ͼ���ϱ߽�Clip����������0~15��Ϊ0��ʾ������Clip */
        unsigned int  crsl_right_clip : 4;  /* bit[24-27]: cursor��ͨ������ͼ���ұ߽�Clip����������0~15��Ϊ0��ʾ������Clip */
        unsigned int  crsl_left_clip  : 4;  /* bit[28-31]: cursor��ͨ������ͼ����߽�Clip����������0~15��Ϊ0��ʾ������Clip */
    } reg;
} SOC_EDC_CRS_CLIP_UNION;
#endif
#define SOC_EDC_CRS_CLIP_crsr_bot_clip_START    (0)
#define SOC_EDC_CRS_CLIP_crsr_bot_clip_END      (3)
#define SOC_EDC_CRS_CLIP_crsr_top_clip_START    (4)
#define SOC_EDC_CRS_CLIP_crsr_top_clip_END      (7)
#define SOC_EDC_CRS_CLIP_crsr_right_clip_START  (8)
#define SOC_EDC_CRS_CLIP_crsr_right_clip_END    (11)
#define SOC_EDC_CRS_CLIP_crsr_left_clip_START   (12)
#define SOC_EDC_CRS_CLIP_crsr_left_clip_END     (15)
#define SOC_EDC_CRS_CLIP_crsl_bot_clip_START    (16)
#define SOC_EDC_CRS_CLIP_crsl_bot_clip_END      (19)
#define SOC_EDC_CRS_CLIP_crsl_top_clip_START    (20)
#define SOC_EDC_CRS_CLIP_crsl_top_clip_END      (23)
#define SOC_EDC_CRS_CLIP_crsl_right_clip_START  (24)
#define SOC_EDC_CRS_CLIP_crsl_right_clip_END    (27)
#define SOC_EDC_CRS_CLIP_crsl_left_clip_START   (28)
#define SOC_EDC_CRS_CLIP_crsl_left_clip_END     (31)


/*****************************************************************************
 �ṹ��    : SOC_EDC_CH1_CLIP_UNION
 �ṹ˵��  : CH1_CLIP �Ĵ����ṹ���塣��ַƫ����:0x00F0����ֵ:0x00000000�����:32
 �Ĵ���˵��: Channel1ͼ��Clip���üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ch1r_bot_clip   : 4;  /* bit[0-3]  : CH1��ͨ������ͼ���±߽�Clip����������0~15��Ϊ0��ʾ������Clip */
        unsigned int  ch1r_top_clip   : 4;  /* bit[4-7]  : CH1��ͨ������ͼ���ϱ߽�Clip����������0~15��Ϊ0��ʾ������Clip */
        unsigned int  ch1r_right_clip : 4;  /* bit[8-11] : CH1��ͨ������ͼ���ұ߽�Clip����������0~15��Ϊ0��ʾ������Clip */
        unsigned int  ch1r_left_clip  : 4;  /* bit[12-15]: CH1��ͨ������ͼ����߽�Clip����������0~15��Ϊ0��ʾ������Clip */
        unsigned int  ch1l_bot_clip   : 4;  /* bit[16-19]: CH1��ͨ������ͼ���±߽�Clip����������0~15��Ϊ0��ʾ������Clip */
        unsigned int  ch1l_top_clip   : 4;  /* bit[20-23]: CH1��ͨ������ͼ���ϱ߽�Clip����������0~15��Ϊ0��ʾ������Clip */
        unsigned int  ch1l_right_clip : 4;  /* bit[24-27]: CH1��ͨ������ͼ���ұ߽�Clip����������0~15��Ϊ0��ʾ������Clip */
        unsigned int  ch1l_left_clip  : 4;  /* bit[28-31]: CH1��ͨ������ͼ����߽�Clip����������0~15��Ϊ0��ʾ������Clip */
    } reg;
} SOC_EDC_CH1_CLIP_UNION;
#endif
#define SOC_EDC_CH1_CLIP_ch1r_bot_clip_START    (0)
#define SOC_EDC_CH1_CLIP_ch1r_bot_clip_END      (3)
#define SOC_EDC_CH1_CLIP_ch1r_top_clip_START    (4)
#define SOC_EDC_CH1_CLIP_ch1r_top_clip_END      (7)
#define SOC_EDC_CH1_CLIP_ch1r_right_clip_START  (8)
#define SOC_EDC_CH1_CLIP_ch1r_right_clip_END    (11)
#define SOC_EDC_CH1_CLIP_ch1r_left_clip_START   (12)
#define SOC_EDC_CH1_CLIP_ch1r_left_clip_END     (15)
#define SOC_EDC_CH1_CLIP_ch1l_bot_clip_START    (16)
#define SOC_EDC_CH1_CLIP_ch1l_bot_clip_END      (19)
#define SOC_EDC_CH1_CLIP_ch1l_top_clip_START    (20)
#define SOC_EDC_CH1_CLIP_ch1l_top_clip_END      (23)
#define SOC_EDC_CH1_CLIP_ch1l_right_clip_START  (24)
#define SOC_EDC_CH1_CLIP_ch1l_right_clip_END    (27)
#define SOC_EDC_CH1_CLIP_ch1l_left_clip_START   (28)
#define SOC_EDC_CH1_CLIP_ch1l_left_clip_END     (31)


/*****************************************************************************
 �ṹ��    : SOC_EDC_CH2_CLIP_UNION
 �ṹ˵��  : CH2_CLIP �Ĵ����ṹ���塣��ַƫ����:0x00F4����ֵ:0x00000000�����:32
 �Ĵ���˵��: Channel2ͼ��Clip���üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ch2r_bot_clip   : 4;  /* bit[0-3]  : CH2��ͨ������ͼ���±߽�Clip����������0~15��Ϊ0��ʾ������Clip */
        unsigned int  ch2r_top_clip   : 4;  /* bit[4-7]  : CH2��ͨ������ͼ���ϱ߽�Clip����������0~15��Ϊ0��ʾ������Clip */
        unsigned int  ch2r_right_clip : 4;  /* bit[8-11] : CH2��ͨ������ͼ���ұ߽�Clip����������0~15��Ϊ0��ʾ������Clip */
        unsigned int  ch2r_left_clip  : 4;  /* bit[12-15]: CH2��ͨ������ͼ����߽�Clip����������0~15��Ϊ0��ʾ������Clip */
        unsigned int  ch2l_bot_clip   : 4;  /* bit[16-19]: CH2��ͨ������ͼ���±߽�Clip����������0~15��Ϊ0��ʾ������Clip */
        unsigned int  ch2l_top_clip   : 4;  /* bit[20-23]: CH2��ͨ������ͼ���ϱ߽�Clip����������0~15��Ϊ0��ʾ������Clip */
        unsigned int  ch2l_right_clip : 4;  /* bit[24-27]: CH2��ͨ������ͼ���ұ߽�Clip����������0~15��Ϊ0��ʾ������Clip */
        unsigned int  ch2l_left_clip  : 4;  /* bit[28-31]: CH2��ͨ������ͼ����߽�Clip����������0~15��Ϊ0��ʾ������Clip */
    } reg;
} SOC_EDC_CH2_CLIP_UNION;
#endif
#define SOC_EDC_CH2_CLIP_ch2r_bot_clip_START    (0)
#define SOC_EDC_CH2_CLIP_ch2r_bot_clip_END      (3)
#define SOC_EDC_CH2_CLIP_ch2r_top_clip_START    (4)
#define SOC_EDC_CH2_CLIP_ch2r_top_clip_END      (7)
#define SOC_EDC_CH2_CLIP_ch2r_right_clip_START  (8)
#define SOC_EDC_CH2_CLIP_ch2r_right_clip_END    (11)
#define SOC_EDC_CH2_CLIP_ch2r_left_clip_START   (12)
#define SOC_EDC_CH2_CLIP_ch2r_left_clip_END     (15)
#define SOC_EDC_CH2_CLIP_ch2l_bot_clip_START    (16)
#define SOC_EDC_CH2_CLIP_ch2l_bot_clip_END      (19)
#define SOC_EDC_CH2_CLIP_ch2l_top_clip_START    (20)
#define SOC_EDC_CH2_CLIP_ch2l_top_clip_END      (23)
#define SOC_EDC_CH2_CLIP_ch2l_right_clip_START  (24)
#define SOC_EDC_CH2_CLIP_ch2l_right_clip_END    (27)
#define SOC_EDC_CH2_CLIP_ch2l_left_clip_START   (28)
#define SOC_EDC_CH2_CLIP_ch2l_left_clip_END     (31)


/*****************************************************************************
 �ṹ��    : SOC_EDC_GAMMA_UNION
 �ṹ˵��  : GAMMA �Ĵ����ṹ���塣��ַƫ����:0x100+(k)*0x4����ֵ:0x00000000�����:32
 �Ĵ���˵��: Gamma�����Ĵ���(k=0~39)
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved_0: 2;  /* bit[0-1]  : ���� */
        unsigned int  gamma_b  : 8;  /* bit[2-9]  : Gamma B���ߵĵ�k�յ�ֵ(��8λ��Ч) */
        unsigned int  reserved_1: 2;  /* bit[10-11]: ���� */
        unsigned int  gamma_g  : 8;  /* bit[12-19]: Gamma G���ߵĵ�k�յ�ֵ(��8λ��Ч) */
        unsigned int  reserved_2: 2;  /* bit[20-21]: ���� */
        unsigned int  gamma_r  : 8;  /* bit[22-29]: Gamma R���ߵĵ�k�յ�ֵ */
        unsigned int  reserved_3: 2;  /* bit[30-31]: ���� */
    } reg;
} SOC_EDC_GAMMA_UNION;
#endif
#define SOC_EDC_GAMMA_gamma_b_START   (2)
#define SOC_EDC_GAMMA_gamma_b_END     (9)
#define SOC_EDC_GAMMA_gamma_g_START   (12)
#define SOC_EDC_GAMMA_gamma_g_END     (19)
#define SOC_EDC_GAMMA_gamma_r_START   (22)
#define SOC_EDC_GAMMA_gamma_r_END     (29)


/*****************************************************************************
 �ṹ��    : SOC_EDC_CH1_CSCIDC_UNION
 �ṹ˵��  : CH1_CSCIDC �Ĵ����ṹ���塣��ַƫ����:0x200����ֵ:0x00000000�����:32
 �Ĵ���˵��: Channel1 CSC����ֱ��ƫ���Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ch1_cscidc_v : 9;  /* bit[0-8]  : in_dc0 */
        unsigned int  ch1_cscidc_u : 9;  /* bit[9-17] : in_dc1 */
        unsigned int  ch1_cscidc_y : 9;  /* bit[18-26]: in_dc2��MSBΪ����λ�������ʾ */
        unsigned int  ch1_csc_en   : 1;  /* bit[27]   : Channel1 YUV2RGBʹ�� */
        unsigned int  reserved     : 4;  /* bit[28-31]: ���� */
    } reg;
} SOC_EDC_CH1_CSCIDC_UNION;
#endif
#define SOC_EDC_CH1_CSCIDC_ch1_cscidc_v_START  (0)
#define SOC_EDC_CH1_CSCIDC_ch1_cscidc_v_END    (8)
#define SOC_EDC_CH1_CSCIDC_ch1_cscidc_u_START  (9)
#define SOC_EDC_CH1_CSCIDC_ch1_cscidc_u_END    (17)
#define SOC_EDC_CH1_CSCIDC_ch1_cscidc_y_START  (18)
#define SOC_EDC_CH1_CSCIDC_ch1_cscidc_y_END    (26)
#define SOC_EDC_CH1_CSCIDC_ch1_csc_en_START    (27)
#define SOC_EDC_CH1_CSCIDC_ch1_csc_en_END      (27)


/*****************************************************************************
 �ṹ��    : SOC_EDC_CH1_CSCODC_UNION
 �ṹ˵��  : CH1_CSCODC �Ĵ����ṹ���塣��ַƫ����:0x204����ֵ:0x00000000�����:32
 �Ĵ���˵��: Channel1 CSC���ֱ��ƫ���Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ch1_cscodc_b : 9;  /* bit[0-8]  : out_dc0 */
        unsigned int  ch1_cscodc_g : 9;  /* bit[9-17] : out_dc1 */
        unsigned int  ch1_cscodc_r : 9;  /* bit[18-26]: out_dc2��MSBΪ����λ�������ʾ */
        unsigned int  reserved     : 5;  /* bit[27-31]: ���� */
    } reg;
} SOC_EDC_CH1_CSCODC_UNION;
#endif
#define SOC_EDC_CH1_CSCODC_ch1_cscodc_b_START  (0)
#define SOC_EDC_CH1_CSCODC_ch1_cscodc_b_END    (8)
#define SOC_EDC_CH1_CSCODC_ch1_cscodc_g_START  (9)
#define SOC_EDC_CH1_CSCODC_ch1_cscodc_g_END    (17)
#define SOC_EDC_CH1_CSCODC_ch1_cscodc_r_START  (18)
#define SOC_EDC_CH1_CSCODC_ch1_cscodc_r_END    (26)


/*****************************************************************************
 �ṹ��    : SOC_EDC_CH1_CSCP0_UNION
 �ṹ˵��  : CH1_CSCP0 �Ĵ����ṹ���塣��ַƫ����:0x208����ֵ:0x00000000�����:32
 �Ĵ���˵��: Channel1 CSC�����Ĵ���0
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ch1_csc_00p : 13; /* bit[0-12] : csc00 */
        unsigned int  reserved_0  : 3;  /* bit[13-15]: ���� */
        unsigned int  ch1_csc_01p : 13; /* bit[16-28]: csc01��1bit����λ��4bit����λ��8bitС��λ�������ʾ */
        unsigned int  reserved_1  : 3;  /* bit[29-31]: ���� */
    } reg;
} SOC_EDC_CH1_CSCP0_UNION;
#endif
#define SOC_EDC_CH1_CSCP0_ch1_csc_00p_START  (0)
#define SOC_EDC_CH1_CSCP0_ch1_csc_00p_END    (12)
#define SOC_EDC_CH1_CSCP0_ch1_csc_01p_START  (16)
#define SOC_EDC_CH1_CSCP0_ch1_csc_01p_END    (28)


/*****************************************************************************
 �ṹ��    : SOC_EDC_CH1_CSCP1_UNION
 �ṹ˵��  : CH1_CSCP1 �Ĵ����ṹ���塣��ַƫ����:0x20C����ֵ:0x00000000�����:32
 �Ĵ���˵��: Channel1 CSC�����Ĵ���1
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ch1_csc_02p : 13; /* bit[0-12] : csc02 */
        unsigned int  reserved_0  : 3;  /* bit[13-15]: ���� */
        unsigned int  ch1_csc_10p : 13; /* bit[16-28]: csc10��1bit����λ��4bit����λ��8bitС��λ�������ʾ */
        unsigned int  reserved_1  : 3;  /* bit[29-31]: ���� */
    } reg;
} SOC_EDC_CH1_CSCP1_UNION;
#endif
#define SOC_EDC_CH1_CSCP1_ch1_csc_02p_START  (0)
#define SOC_EDC_CH1_CSCP1_ch1_csc_02p_END    (12)
#define SOC_EDC_CH1_CSCP1_ch1_csc_10p_START  (16)
#define SOC_EDC_CH1_CSCP1_ch1_csc_10p_END    (28)


/*****************************************************************************
 �ṹ��    : SOC_EDC_CH1_CSCP2_UNION
 �ṹ˵��  : CH1_CSCP2 �Ĵ����ṹ���塣��ַƫ����:0x210����ֵ:0x00000000�����:32
 �Ĵ���˵��: Channel1 CSC�����Ĵ���2
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ch1_csc_11p : 13; /* bit[0-12] : csc11 */
        unsigned int  reserved_0  : 3;  /* bit[13-15]: ���� */
        unsigned int  ch1_csc_12p : 13; /* bit[16-28]: csc12��1bit����λ��4bit����λ��8bitС��λ�������ʾ */
        unsigned int  reserved_1  : 3;  /* bit[29-31]: ���� */
    } reg;
} SOC_EDC_CH1_CSCP2_UNION;
#endif
#define SOC_EDC_CH1_CSCP2_ch1_csc_11p_START  (0)
#define SOC_EDC_CH1_CSCP2_ch1_csc_11p_END    (12)
#define SOC_EDC_CH1_CSCP2_ch1_csc_12p_START  (16)
#define SOC_EDC_CH1_CSCP2_ch1_csc_12p_END    (28)


/*****************************************************************************
 �ṹ��    : SOC_EDC_CH1_CSCP3_UNION
 �ṹ˵��  : CH1_CSCP3 �Ĵ����ṹ���塣��ַƫ����:0x214����ֵ:0x00000000�����:32
 �Ĵ���˵��: Channel1 CSC�����Ĵ���3
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ch1_csc_20p : 13; /* bit[0-12] : csc20 */
        unsigned int  reserved_0  : 3;  /* bit[13-15]: ���� */
        unsigned int  ch1_csc_21p : 13; /* bit[16-28]: csc21��1bit����λ��4bit����λ��8bitС��λ�������ʾ */
        unsigned int  reserved_1  : 3;  /* bit[29-31]: ���� */
    } reg;
} SOC_EDC_CH1_CSCP3_UNION;
#endif
#define SOC_EDC_CH1_CSCP3_ch1_csc_20p_START  (0)
#define SOC_EDC_CH1_CSCP3_ch1_csc_20p_END    (12)
#define SOC_EDC_CH1_CSCP3_ch1_csc_21p_START  (16)
#define SOC_EDC_CH1_CSCP3_ch1_csc_21p_END    (28)


/*****************************************************************************
 �ṹ��    : SOC_EDC_CH1_CSCP4_UNION
 �ṹ˵��  : CH1_CSCP4 �Ĵ����ṹ���塣��ַƫ����:0x218����ֵ:0x00000000�����:32
 �Ĵ���˵��: Channel1 CSC�����Ĵ���4
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ch1_csc_22p : 13; /* bit[0-12] : csc22 */
        unsigned int  reserved    : 19; /* bit[13-31]: ���� */
    } reg;
} SOC_EDC_CH1_CSCP4_UNION;
#endif
#define SOC_EDC_CH1_CSCP4_ch1_csc_22p_START  (0)
#define SOC_EDC_CH1_CSCP4_ch1_csc_22p_END    (12)


/*****************************************************************************
 �ṹ��    : SOC_EDC_CH2_CSCIDC_UNION
 �ṹ˵��  : CH2_CSCIDC �Ĵ����ṹ���塣��ַƫ����:0x300����ֵ:0x00000000�����:32
 �Ĵ���˵��: Channel2 CSC����ֱ��ƫ���Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ch2_cscidc_v : 9;  /* bit[0-8]  : in_dc0 */
        unsigned int  ch2_cscidc_u : 9;  /* bit[9-17] : in_dc1 */
        unsigned int  ch2_cscidc_y : 9;  /* bit[18-26]: in_dc2��MSBΪ����λ�������ʾ */
        unsigned int  ch2_csc_en   : 1;  /* bit[27]   : Channel2 YUV2RGBʹ�� */
        unsigned int  reserved     : 4;  /* bit[28-31]: ���� */
    } reg;
} SOC_EDC_CH2_CSCIDC_UNION;
#endif
#define SOC_EDC_CH2_CSCIDC_ch2_cscidc_v_START  (0)
#define SOC_EDC_CH2_CSCIDC_ch2_cscidc_v_END    (8)
#define SOC_EDC_CH2_CSCIDC_ch2_cscidc_u_START  (9)
#define SOC_EDC_CH2_CSCIDC_ch2_cscidc_u_END    (17)
#define SOC_EDC_CH2_CSCIDC_ch2_cscidc_y_START  (18)
#define SOC_EDC_CH2_CSCIDC_ch2_cscidc_y_END    (26)
#define SOC_EDC_CH2_CSCIDC_ch2_csc_en_START    (27)
#define SOC_EDC_CH2_CSCIDC_ch2_csc_en_END      (27)


/*****************************************************************************
 �ṹ��    : SOC_EDC_CH2_CSCODC_UNION
 �ṹ˵��  : CH2_CSCODC �Ĵ����ṹ���塣��ַƫ����:0x304����ֵ:0x00000000�����:32
 �Ĵ���˵��: Channel2 CSC���ֱ��ƫ���Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ch2_cscodc_b : 9;  /* bit[0-8]  : out_dc0 */
        unsigned int  ch2_cscodc_g : 9;  /* bit[9-17] : out_dc1 */
        unsigned int  ch2_cscodc_r : 9;  /* bit[18-26]: out_dc2��MSBΪ����λ�������ʾ */
        unsigned int  reserved     : 5;  /* bit[27-31]: ���� */
    } reg;
} SOC_EDC_CH2_CSCODC_UNION;
#endif
#define SOC_EDC_CH2_CSCODC_ch2_cscodc_b_START  (0)
#define SOC_EDC_CH2_CSCODC_ch2_cscodc_b_END    (8)
#define SOC_EDC_CH2_CSCODC_ch2_cscodc_g_START  (9)
#define SOC_EDC_CH2_CSCODC_ch2_cscodc_g_END    (17)
#define SOC_EDC_CH2_CSCODC_ch2_cscodc_r_START  (18)
#define SOC_EDC_CH2_CSCODC_ch2_cscodc_r_END    (26)


/*****************************************************************************
 �ṹ��    : SOC_EDC_CH2_CSCP0_UNION
 �ṹ˵��  : CH2_CSCP0 �Ĵ����ṹ���塣��ַƫ����:0x308����ֵ:0x00000000�����:32
 �Ĵ���˵��: Channel2 CSC�����Ĵ���0
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ch2_csc_00p : 13; /* bit[0-12] : csc00 */
        unsigned int  reserved_0  : 3;  /* bit[13-15]: ���� */
        unsigned int  ch2_csc_01p : 13; /* bit[16-28]: csc01��1bit����λ��4bit����λ��8bitС��λ�������ʾ */
        unsigned int  reserved_1  : 3;  /* bit[29-31]: ���� */
    } reg;
} SOC_EDC_CH2_CSCP0_UNION;
#endif
#define SOC_EDC_CH2_CSCP0_ch2_csc_00p_START  (0)
#define SOC_EDC_CH2_CSCP0_ch2_csc_00p_END    (12)
#define SOC_EDC_CH2_CSCP0_ch2_csc_01p_START  (16)
#define SOC_EDC_CH2_CSCP0_ch2_csc_01p_END    (28)


/*****************************************************************************
 �ṹ��    : SOC_EDC_CH2_CSCP1_UNION
 �ṹ˵��  : CH2_CSCP1 �Ĵ����ṹ���塣��ַƫ����:0x30C����ֵ:0x00000000�����:32
 �Ĵ���˵��: Channel2 CSC�����Ĵ���1
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ch2_csc_02p : 13; /* bit[0-12] : csc02 */
        unsigned int  reserved_0  : 3;  /* bit[13-15]: ���� */
        unsigned int  ch2_csc_10p : 13; /* bit[16-28]: csc10��1bit����λ��4bit����λ��8bitС��λ�������ʾ */
        unsigned int  reserved_1  : 3;  /* bit[29-31]: ���� */
    } reg;
} SOC_EDC_CH2_CSCP1_UNION;
#endif
#define SOC_EDC_CH2_CSCP1_ch2_csc_02p_START  (0)
#define SOC_EDC_CH2_CSCP1_ch2_csc_02p_END    (12)
#define SOC_EDC_CH2_CSCP1_ch2_csc_10p_START  (16)
#define SOC_EDC_CH2_CSCP1_ch2_csc_10p_END    (28)


/*****************************************************************************
 �ṹ��    : SOC_EDC_CH2_CSCP2_UNION
 �ṹ˵��  : CH2_CSCP2 �Ĵ����ṹ���塣��ַƫ����:0x310����ֵ:0x00000000�����:32
 �Ĵ���˵��: Channel2 CSC�����Ĵ���2
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ch2_csc_11p : 13; /* bit[0-12] : csc11 */
        unsigned int  reserved_0  : 3;  /* bit[13-15]: ���� */
        unsigned int  ch2_csc_12p : 13; /* bit[16-28]: csc12��1bit����λ��4bit����λ��8bitС��λ�������ʾ */
        unsigned int  reserved_1  : 3;  /* bit[29-31]: ���� */
    } reg;
} SOC_EDC_CH2_CSCP2_UNION;
#endif
#define SOC_EDC_CH2_CSCP2_ch2_csc_11p_START  (0)
#define SOC_EDC_CH2_CSCP2_ch2_csc_11p_END    (12)
#define SOC_EDC_CH2_CSCP2_ch2_csc_12p_START  (16)
#define SOC_EDC_CH2_CSCP2_ch2_csc_12p_END    (28)


/*****************************************************************************
 �ṹ��    : SOC_EDC_CH2_CSCP3_UNION
 �ṹ˵��  : CH2_CSCP3 �Ĵ����ṹ���塣��ַƫ����:0x314����ֵ:0x00000000�����:32
 �Ĵ���˵��: Channel2 CSC�����Ĵ���3
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ch2_csc_20p : 13; /* bit[0-12] : csc20 */
        unsigned int  reserved_0  : 3;  /* bit[13-15]: ���� */
        unsigned int  ch2_csc_21p : 13; /* bit[16-28]: csc21��1bit����λ��4bit����λ��8bitС��λ�������ʾ */
        unsigned int  reserved_1  : 3;  /* bit[29-31]: ���� */
    } reg;
} SOC_EDC_CH2_CSCP3_UNION;
#endif
#define SOC_EDC_CH2_CSCP3_ch2_csc_20p_START  (0)
#define SOC_EDC_CH2_CSCP3_ch2_csc_20p_END    (12)
#define SOC_EDC_CH2_CSCP3_ch2_csc_21p_START  (16)
#define SOC_EDC_CH2_CSCP3_ch2_csc_21p_END    (28)


/*****************************************************************************
 �ṹ��    : SOC_EDC_CH2_CSCP4_UNION
 �ṹ˵��  : CH2_CSCP4 �Ĵ����ṹ���塣��ַƫ����:0x318����ֵ:0x00000000�����:32
 �Ĵ���˵��: Channel2 CSC�����Ĵ���4
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ch2_csc_22p : 13; /* bit[0-12] : csc22 */
        unsigned int  reserved    : 19; /* bit[13-31]: ���� */
    } reg;
} SOC_EDC_CH2_CSCP4_UNION;
#endif
#define SOC_EDC_CH2_CSCP4_ch2_csc_22p_START  (0)
#define SOC_EDC_CH2_CSCP4_ch2_csc_22p_END    (12)


/*****************************************************************************
 �ṹ��    : SOC_EDC_OUT_CSCIDC_UNION
 �ṹ˵��  : OUT_CSCIDC �Ĵ����ṹ���塣��ַƫ����:0x400����ֵ:0x00000000�����:32
 �Ĵ���˵��: ���CSC����ֱ��ƫ���Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  out_cscidc_v : 9;  /* bit[0-8]  : in_dc0 */
        unsigned int  out_cscidc_u : 9;  /* bit[9-17] : in_dc1 */
        unsigned int  out_cscidc_y : 9;  /* bit[18-26]: in_dc2��MSBΪ����λ�������ʾ */
        unsigned int  out_csc_en   : 1;  /* bit[27]   : Overlay���CSCʹ�� */
        unsigned int  reserved     : 4;  /* bit[28-31]: ���� */
    } reg;
} SOC_EDC_OUT_CSCIDC_UNION;
#endif
#define SOC_EDC_OUT_CSCIDC_out_cscidc_v_START  (0)
#define SOC_EDC_OUT_CSCIDC_out_cscidc_v_END    (8)
#define SOC_EDC_OUT_CSCIDC_out_cscidc_u_START  (9)
#define SOC_EDC_OUT_CSCIDC_out_cscidc_u_END    (17)
#define SOC_EDC_OUT_CSCIDC_out_cscidc_y_START  (18)
#define SOC_EDC_OUT_CSCIDC_out_cscidc_y_END    (26)
#define SOC_EDC_OUT_CSCIDC_out_csc_en_START    (27)
#define SOC_EDC_OUT_CSCIDC_out_csc_en_END      (27)


/*****************************************************************************
 �ṹ��    : SOC_EDC_OUT_CSCODC_UNION
 �ṹ˵��  : OUT_CSCODC �Ĵ����ṹ���塣��ַƫ����:0x404����ֵ:0x00000000�����:32
 �Ĵ���˵��: ���CSC���ֱ��ƫ���Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  out_cscodc_b : 9;  /* bit[0-8]  : out_dc0 */
        unsigned int  out_cscodc_g : 9;  /* bit[9-17] : out_dc1 */
        unsigned int  out_cscodc_r : 9;  /* bit[18-26]: out_dc2��MSBΪ����λ�������ʾ */
        unsigned int  reserved     : 5;  /* bit[27-31]: ���� */
    } reg;
} SOC_EDC_OUT_CSCODC_UNION;
#endif
#define SOC_EDC_OUT_CSCODC_out_cscodc_b_START  (0)
#define SOC_EDC_OUT_CSCODC_out_cscodc_b_END    (8)
#define SOC_EDC_OUT_CSCODC_out_cscodc_g_START  (9)
#define SOC_EDC_OUT_CSCODC_out_cscodc_g_END    (17)
#define SOC_EDC_OUT_CSCODC_out_cscodc_r_START  (18)
#define SOC_EDC_OUT_CSCODC_out_cscodc_r_END    (26)


/*****************************************************************************
 �ṹ��    : SOC_EDC_OUT_CSCP0_UNION
 �ṹ˵��  : OUT_CSCP0 �Ĵ����ṹ���塣��ַƫ����:0x408����ֵ:0x00000000�����:32
 �Ĵ���˵��: ���CSC�����Ĵ���0
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  out_csc_00p : 13; /* bit[0-12] : csc00 */
        unsigned int  reserved_0  : 3;  /* bit[13-15]: ���� */
        unsigned int  out_csc_01p : 13; /* bit[16-28]: csc01��1bit����λ��4bit����λ��8bitС��λ�������ʾ */
        unsigned int  reserved_1  : 3;  /* bit[29-31]: ���� */
    } reg;
} SOC_EDC_OUT_CSCP0_UNION;
#endif
#define SOC_EDC_OUT_CSCP0_out_csc_00p_START  (0)
#define SOC_EDC_OUT_CSCP0_out_csc_00p_END    (12)
#define SOC_EDC_OUT_CSCP0_out_csc_01p_START  (16)
#define SOC_EDC_OUT_CSCP0_out_csc_01p_END    (28)


/*****************************************************************************
 �ṹ��    : SOC_EDC_OUT_CSCP1_UNION
 �ṹ˵��  : OUT_CSCP1 �Ĵ����ṹ���塣��ַƫ����:0x40C����ֵ:0x00000000�����:32
 �Ĵ���˵��: ���CSC�����Ĵ���1
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  out_csc_02p : 13; /* bit[0-12] : csc02 */
        unsigned int  reserved_0  : 3;  /* bit[13-15]: ���� */
        unsigned int  out_csc_10p : 13; /* bit[16-28]: csc10��1bit����λ��4bit����λ��8bitС��λ�������ʾ */
        unsigned int  reserved_1  : 3;  /* bit[29-31]: ���� */
    } reg;
} SOC_EDC_OUT_CSCP1_UNION;
#endif
#define SOC_EDC_OUT_CSCP1_out_csc_02p_START  (0)
#define SOC_EDC_OUT_CSCP1_out_csc_02p_END    (12)
#define SOC_EDC_OUT_CSCP1_out_csc_10p_START  (16)
#define SOC_EDC_OUT_CSCP1_out_csc_10p_END    (28)


/*****************************************************************************
 �ṹ��    : SOC_EDC_OUT_CSCP2_UNION
 �ṹ˵��  : OUT_CSCP2 �Ĵ����ṹ���塣��ַƫ����:0x410����ֵ:0x00000000�����:32
 �Ĵ���˵��: ���CSC�����Ĵ���2
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  out_csc_11p : 13; /* bit[0-12] : csc11 */
        unsigned int  reserved_0  : 3;  /* bit[13-15]: ���� */
        unsigned int  out_csc_12p : 13; /* bit[16-28]: csc12��1bit����λ��4bit����λ��8bitС��λ�������ʾ */
        unsigned int  reserved_1  : 3;  /* bit[29-31]: ���� */
    } reg;
} SOC_EDC_OUT_CSCP2_UNION;
#endif
#define SOC_EDC_OUT_CSCP2_out_csc_11p_START  (0)
#define SOC_EDC_OUT_CSCP2_out_csc_11p_END    (12)
#define SOC_EDC_OUT_CSCP2_out_csc_12p_START  (16)
#define SOC_EDC_OUT_CSCP2_out_csc_12p_END    (28)


/*****************************************************************************
 �ṹ��    : SOC_EDC_OUT_CSCP3_UNION
 �ṹ˵��  : OUT_CSCP3 �Ĵ����ṹ���塣��ַƫ����:0x414����ֵ:0x00000000�����:32
 �Ĵ���˵��: ���CSC�����Ĵ���3
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  out_csc_20p : 13; /* bit[0-12] : csc20 */
        unsigned int  reserved_0  : 3;  /* bit[13-15]: ���� */
        unsigned int  out_csc_21p : 13; /* bit[16-28]: csc21��1bit����λ��4bit����λ��8bitС��λ�������ʾ */
        unsigned int  reserved_1  : 3;  /* bit[29-31]: ���� */
    } reg;
} SOC_EDC_OUT_CSCP3_UNION;
#endif
#define SOC_EDC_OUT_CSCP3_out_csc_20p_START  (0)
#define SOC_EDC_OUT_CSCP3_out_csc_20p_END    (12)
#define SOC_EDC_OUT_CSCP3_out_csc_21p_START  (16)
#define SOC_EDC_OUT_CSCP3_out_csc_21p_END    (28)


/*****************************************************************************
 �ṹ��    : SOC_EDC_OUT_CSCP4_UNION
 �ṹ˵��  : OUT_CSCP4 �Ĵ����ṹ���塣��ַƫ����:0x418����ֵ:0x00000000�����:32
 �Ĵ���˵��: ���CSC�����Ĵ���4
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  out_csc_22p : 13; /* bit[0-12] : csc22 */
        unsigned int  reserved    : 19; /* bit[13-31]: ���� */
    } reg;
} SOC_EDC_OUT_CSCP4_UNION;
#endif
#define SOC_EDC_OUT_CSCP4_out_csc_22p_START  (0)
#define SOC_EDC_OUT_CSCP4_out_csc_22p_END    (12)


/*****************************************************************************
 �ṹ��    : SOC_EDC_CH1_SCL_HSP_UNION
 �ṹ˵��  : CH1_SCL_HSP �Ĵ����ṹ���塣��ַƫ����:0x500����ֵ:0x00000000�����:32
 �Ĵ���˵��: Scalerˮƽ���ſ��ƼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  hratio     : 16; /* bit[0-15] : ˮƽ���ű�����(u,4,12)��ʽ�� */
        unsigned int  reserved_0 : 3;  /* bit[16-18]: ������ */
        unsigned int  hfir_order : 1;  /* bit[19]   : ˮƽ����λ�á�
                                                      
                                                      0��ˮƽ�����ڴ�ֱ����ǰ��
                                                      1��ˮƽ�����ڴ�ֱ���ź��� */
        unsigned int  reserved_1 : 3;  /* bit[20-22]: ������ */
        unsigned int  hafir_en   : 1;  /* bit[23]   : ˮƽ������ģʽ��
                                                      
                                                      0������ģʽ���˲���ʹ�ܣ���
                                                      1���˲�ģʽ���˲�ʹ�ܣ�����Y��������ͬһ�˲�ģʽ�� */
        unsigned int  hfir_en    : 1;  /* bit[24]   : ���Ⱥ�ɫ��ˮƽ����ģʽ��
                                                      
                                                      0������ģʽ���˲���ʹ�ܣ���
                                                      1���˲�ģʽ���˲�ʹ�ܣ��� */
        unsigned int  reserved_2 : 3;  /* bit[25-27]: ������ */
        unsigned int  hchmid_en  : 1;  /* bit[28]   : ˮƽ������ֵ�˲�ʹ�ܣ���hfir_en��Чʱ���ñ��ز������ã���
                                                      
                                                      0����ֹ��
                                                      1��ʹ�ܡ� */
        unsigned int  hlmid_en   : 1;  /* bit[29]   : ˮƽ������ֵ�˲�ʹ�ܣ���hfir_en��Чʱ���ñ��ز������ã���
                                                      
                                                      0����ֹ��
                                                      1��ʹ�ܡ� */
        unsigned int  hamid_en   : 1;  /* bit[30]   : ��ֵˮƽ������ֵ�˲�ʹ�ܣ���hfir_en��Чʱ���ñ��ز������ã���
                                                      
                                                      0����ֹ��
                                                      1��ʹ�� */
        unsigned int  hsc_en     : 1;  /* bit[31]   : ˮƽ����ʹ�ܡ�
                                                      0����ֹ��1��ʹ�� */
    } reg;
} SOC_EDC_CH1_SCL_HSP_UNION;
#endif
#define SOC_EDC_CH1_SCL_HSP_hratio_START      (0)
#define SOC_EDC_CH1_SCL_HSP_hratio_END        (15)
#define SOC_EDC_CH1_SCL_HSP_hfir_order_START  (19)
#define SOC_EDC_CH1_SCL_HSP_hfir_order_END    (19)
#define SOC_EDC_CH1_SCL_HSP_hafir_en_START    (23)
#define SOC_EDC_CH1_SCL_HSP_hafir_en_END      (23)
#define SOC_EDC_CH1_SCL_HSP_hfir_en_START     (24)
#define SOC_EDC_CH1_SCL_HSP_hfir_en_END       (24)
#define SOC_EDC_CH1_SCL_HSP_hchmid_en_START   (28)
#define SOC_EDC_CH1_SCL_HSP_hchmid_en_END     (28)
#define SOC_EDC_CH1_SCL_HSP_hlmid_en_START    (29)
#define SOC_EDC_CH1_SCL_HSP_hlmid_en_END      (29)
#define SOC_EDC_CH1_SCL_HSP_hamid_en_START    (30)
#define SOC_EDC_CH1_SCL_HSP_hamid_en_END      (30)
#define SOC_EDC_CH1_SCL_HSP_hsc_en_START      (31)
#define SOC_EDC_CH1_SCL_HSP_hsc_en_END        (31)


/*****************************************************************************
 �ṹ��    : SOC_EDC_CH1_SCL_HOFFSET_UNION
 �ṹ˵��  : CH1_SCL_HOFFSET �Ĵ����ṹ���塣��ַƫ����:0x504����ֵ:0x00000000�����:32
 �Ĵ���˵��: Scalerˮƽ��ʼ���ƼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  hor_coffset : 16; /* bit[0-15] : ˮƽɫ��λ��ƫ�ƣ�(s,4,12)��ʽ�������ʾ�� */
        unsigned int  hor_loffset : 16; /* bit[16-31]: ˮƽ����λ��ƫ�ƣ�(s,4,12)��ʽ�������ʾ�� */
    } reg;
} SOC_EDC_CH1_SCL_HOFFSET_UNION;
#endif
#define SOC_EDC_CH1_SCL_HOFFSET_hor_coffset_START  (0)
#define SOC_EDC_CH1_SCL_HOFFSET_hor_coffset_END    (15)
#define SOC_EDC_CH1_SCL_HOFFSET_hor_loffset_START  (16)
#define SOC_EDC_CH1_SCL_HOFFSET_hor_loffset_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_EDC_CH1_SCL_VSP_UNION
 �ṹ˵��  : CH1_SCL_VSP �Ĵ����ṹ���塣��ַƫ����:0x508����ֵ:0x00000000�����:32
 �Ĵ���˵��: Scaler��ֱ���ſ��ƼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved_0   : 23; /* bit[0-22] : ������ */
        unsigned int  vafir_en     : 1;  /* bit[23]   : ��ֱ������ģʽ��
                                                        
                                                        0������ģʽ���˲���ʹ�ܣ���
                                                        1���˲�ģʽ���˲�ʹ�ܣ��������ȷ���һ���˲��� */
        unsigned int  vfir_en      : 1;  /* bit[24]   : ���Ⱥ�ɫ�ȴ�ֱ����ģʽ��
                                                        
                                                        0������ģʽ���˲���ʹ�ܣ���
                                                        1���˲�ģʽ���˲�ʹ�ܣ��� */
        unsigned int  reserved_1   : 2;  /* bit[25-26]: ������ */
        unsigned int  vsc_luma_tap : 1;  /* bit[27]   : ��ֱ���Ž�����
                                                        
                                                        0��4��FIR��
                                                        1��2��FIR */
        unsigned int  vchmid_en    : 1;  /* bit[28]   : ��ֱɫ��������ֵ�˲�ʹ�ܣ���vlfir_en��Чʱ���ñ��ز������ã���
                                                        
                                                        0����ֹ��
                                                        1��ʹ�ܡ� */
        unsigned int  vlmid_en     : 1;  /* bit[29]   : ��ֱ����������ֵ�˲�ʹ�ܣ���vlfir_en��Чʱ���ñ��ز������ã���
                                                        
                                                        0����ֹ��
                                                        1��ʹ�ܡ� */
        unsigned int  vamid_en     : 1;  /* bit[30]   : ��ֱ��������ֵ�˲�ʹ�ܣ���vlfir_en��Чʱ���ñ��ز������ã���
                                                        
                                                        0����ֹ��
                                                        1��ʹ�ܡ� */
        unsigned int  vsc_en       : 1;  /* bit[31]   : ��ֱ����ʹ�ܡ�
                                                        0����ֹ��1��ʹ�� */
    } reg;
} SOC_EDC_CH1_SCL_VSP_UNION;
#endif
#define SOC_EDC_CH1_SCL_VSP_vafir_en_START      (23)
#define SOC_EDC_CH1_SCL_VSP_vafir_en_END        (23)
#define SOC_EDC_CH1_SCL_VSP_vfir_en_START       (24)
#define SOC_EDC_CH1_SCL_VSP_vfir_en_END         (24)
#define SOC_EDC_CH1_SCL_VSP_vsc_luma_tap_START  (27)
#define SOC_EDC_CH1_SCL_VSP_vsc_luma_tap_END    (27)
#define SOC_EDC_CH1_SCL_VSP_vchmid_en_START     (28)
#define SOC_EDC_CH1_SCL_VSP_vchmid_en_END       (28)
#define SOC_EDC_CH1_SCL_VSP_vlmid_en_START      (29)
#define SOC_EDC_CH1_SCL_VSP_vlmid_en_END        (29)
#define SOC_EDC_CH1_SCL_VSP_vamid_en_START      (30)
#define SOC_EDC_CH1_SCL_VSP_vamid_en_END        (30)
#define SOC_EDC_CH1_SCL_VSP_vsc_en_START        (31)
#define SOC_EDC_CH1_SCL_VSP_vsc_en_END          (31)


/*****************************************************************************
 �ṹ��    : SOC_EDC_CH1_SCL_VSR_UNION
 �ṹ˵��  : CH1_SCL_VSR �Ĵ����ṹ���塣��ַƫ����:0x50C����ֵ:0x00000000�����:32
 �Ĵ���˵��: Scaler��ֱ���ű����Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  vratio   : 16; /* bit[0-15] : ��ֱ���ű�����(u,4,12)��ʽ�� */
        unsigned int  reserved : 16; /* bit[16-31]: ������ */
    } reg;
} SOC_EDC_CH1_SCL_VSR_UNION;
#endif
#define SOC_EDC_CH1_SCL_VSR_vratio_START    (0)
#define SOC_EDC_CH1_SCL_VSR_vratio_END      (15)


/*****************************************************************************
 �ṹ��    : SOC_EDC_CH1_SCL_VOFFSET_UNION
 �ṹ˵��  : CH1_SCL_VOFFSET �Ĵ����ṹ���塣��ַƫ����:0x510����ֵ:0x00000000�����:32
 �Ĵ���˵��: Scaler��ֱ��ʼ���ƼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  vbtm_offset : 16; /* bit[0-15] : ��ֱ�׳�ƫ�ƣ������ʾ��(s,4,12)��ʽ�� */
        unsigned int  vtp_offset  : 16; /* bit[16-31]: ������Ƶ����ֱ����ƫ�ƣ������ʾ��(s,4,12)��ʽ�� */
    } reg;
} SOC_EDC_CH1_SCL_VOFFSET_UNION;
#endif
#define SOC_EDC_CH1_SCL_VOFFSET_vbtm_offset_START  (0)
#define SOC_EDC_CH1_SCL_VOFFSET_vbtm_offset_END    (15)
#define SOC_EDC_CH1_SCL_VOFFSET_vtp_offset_START   (16)
#define SOC_EDC_CH1_SCL_VOFFSET_vtp_offset_END     (31)


/*****************************************************************************
 �ṹ��    : SOC_EDC_CH1_SCL_ORES_UNION
 �ṹ˵��  : CH1_SCL_ORES �Ĵ����ṹ���塣��ַƫ����:0x514����ֵ:0x00000000�����:32
 �Ĵ���˵��: Scaler���ͼ��ߴ�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ow       : 12; /* bit[0-11] : ��ȣ����ص�λ��ʵ�ʿ�ȼ�1��
                                                    ע�⣺���ʵ�ʿ�ȱ�����ż����
                                                    ע�����������ʹ�����ţ��÷������������ߴ�Ҳ��Ҫ������ȷ�� */
        unsigned int  oh       : 12; /* bit[12-23]: �߶ȣ���Ϊ��λ��ʵ�ʸ߶ȼ�1��
                                                    ��֡�߶�Ϊ�ο���
                                                    ע�����������ʹ�����ţ��÷������������ߴ�Ҳ��Ҫ������ȷ�� */
        unsigned int  reserved : 8;  /* bit[24-31]: ������ */
    } reg;
} SOC_EDC_CH1_SCL_ORES_UNION;
#endif
#define SOC_EDC_CH1_SCL_ORES_ow_START        (0)
#define SOC_EDC_CH1_SCL_ORES_ow_END          (11)
#define SOC_EDC_CH1_SCL_ORES_oh_START        (12)
#define SOC_EDC_CH1_SCL_ORES_oh_END          (23)


/*****************************************************************************
 �ṹ��    : SOC_EDC_CH1_SCL_IRES_UNION
 �ṹ˵��  : CH1_SCL_IRES �Ĵ����ṹ���塣��ַƫ����:0x518����ֵ:0x00000000�����:32
 �Ĵ���˵��: Scaler����ͼ��ߴ�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  iw       : 12; /* bit[0-11] : ��ȣ����ص�λ��ʵ�ʿ�ȼ�1��
                                                    ע�⣺���ʵ�ʿ�ȱ�����ż����
                                                    ע�����������ʹ�����ţ��÷������������ߴ�Ҳ��Ҫ������ȷ�� */
        unsigned int  ih       : 12; /* bit[12-23]: �߶ȣ���Ϊ��λ��ʵ�ʸ߶ȼ�1��
                                                    ��֡�߶�Ϊ�ο���
                                                    ע�����������ʹ�����ţ��÷������������ߴ�Ҳ��Ҫ������ȷ�� */
        unsigned int  reserved : 8;  /* bit[24-31]: ������ */
    } reg;
} SOC_EDC_CH1_SCL_IRES_UNION;
#endif
#define SOC_EDC_CH1_SCL_IRES_iw_START        (0)
#define SOC_EDC_CH1_SCL_IRES_iw_END          (11)
#define SOC_EDC_CH1_SCL_IRES_ih_START        (12)
#define SOC_EDC_CH1_SCL_IRES_ih_END          (23)


/*****************************************************************************
 �ṹ��    : SOC_EDC_CH1_SCL_HPC_UNION
 �ṹ˵��  : CH1_SCL_HPC �Ĵ����ṹ���塣��ַƫ����:0x600+((m)-1)*0x10+((i)-1)*0x4����ֵ:0x00000000�����:32
 �Ĵ���˵��: Scalerˮƽ�˲������Ĵ�����m=1~8;i=1~4��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  hlcoefn1 : 10; /* bit[0-9]  : ��λmˮƽ���������˲���2i-1��ϵ����
                                                    
                                                    ÿ���˲���ϵ��Ϊ10bit���ɷ���λ��С��λ��ɣ����λΪ����λ����9bitΪС��λ�ľ���ֵ������ϵ�������Ƭ��Memory�У����Ĭ��ֵΪ����̬ */
        unsigned int  reserved_0: 6;  /* bit[10-15]: ������ */
        unsigned int  hlcoefn2 : 10; /* bit[16-25]: ��λmˮƽ���������˲���2i��ϵ����
                                                    
                                                    ÿ���˲���ϵ��Ϊ10bit���ɷ���λ��С��λ��ɣ����λΪ����λ����9bitΪС��λ�ľ���ֵ������ϵ�������Ƭ��Memory�У����Ĭ��ֵΪ����̬ */
        unsigned int  reserved_1: 6;  /* bit[26-31]: ������ */
    } reg;
} SOC_EDC_CH1_SCL_HPC_UNION;
#endif
#define SOC_EDC_CH1_SCL_HPC_hlcoefn1_START  (0)
#define SOC_EDC_CH1_SCL_HPC_hlcoefn1_END    (9)
#define SOC_EDC_CH1_SCL_HPC_hlcoefn2_START  (16)
#define SOC_EDC_CH1_SCL_HPC_hlcoefn2_END    (25)


/*****************************************************************************
 �ṹ��    : SOC_EDC_CH1_SCL_VPC_UNION
 �ṹ˵��  : CH1_SCL_VPC �Ĵ����ṹ���塣��ַƫ����:0x700+((n)-1)*0x8+((j)-1)*0x4����ֵ:0x00000000�����:32
 �Ĵ���˵��: Scaler��ֱ�˲������Ĵ�����n=1~16;i=1~2��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  vlcoefn1 : 10; /* bit[0-9]  : ��λn��ֱ���������˲���2j-1��ϵ����
                                                    
                                                    ÿ���˲���ϵ��Ϊ10bit���ɷ���λ��С��λ��ɣ����λΪ����λ����9bitΪС��λ�ľ���ֵ������ϵ�������Ƭ��Memory�У����Ĭ��ֵΪ����̬ */
        unsigned int  reserved_0: 6;  /* bit[10-15]: ������ */
        unsigned int  vlcoefn2 : 10; /* bit[16-25]: ��λn��ֱ���������˲���2j��ϵ����
                                                    
                                                    ÿ���˲���ϵ��Ϊ10bit���ɷ���λ��С��λ��ɣ����λΪ����λ����9bitΪС��λ�ľ���ֵ������ϵ�������Ƭ��Memory�У����Ĭ��ֵΪ����̬ */
        unsigned int  reserved_1: 6;  /* bit[26-31]: ������ */
    } reg;
} SOC_EDC_CH1_SCL_VPC_UNION;
#endif
#define SOC_EDC_CH1_SCL_VPC_vlcoefn1_START  (0)
#define SOC_EDC_CH1_SCL_VPC_vlcoefn1_END    (9)
#define SOC_EDC_CH1_SCL_VPC_vlcoefn2_START  (16)
#define SOC_EDC_CH1_SCL_VPC_vlcoefn2_END    (25)


/*****************************************************************************
 �ṹ��    : SOC_EDC_LDI_HRZ_CTRL0_UNION
 �ṹ˵��  : LDI_HRZ_CTRL0 �Ĵ����ṹ���塣��ַƫ����:0x1000����ֵ:0x00000000�����:32
 �Ĵ���˵��: LDIˮƽɨ����ƼĴ���0
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  hfp      : 12; /* bit[0-11] : ��ǰ����ʱ�����ã�д�����ʵ��ֵ���к�����ȡֵ��Χ0~4095;
                                                    �к�����Ϊһ����Ч���ݽ�����ˮƽͬ���ź�ldi_hsync��Ч���ʱ���ڵ�����ʱ�Ӹ��� */
        unsigned int  reserved : 8;  /* bit[12-19]:  */
        unsigned int  hbp      : 12; /* bit[20-31]: �к�����ʱ�����ã�д�����ʵ��ֵ���к�������ȡֵ��ΧΪ0~4095 */
    } reg;
} SOC_EDC_LDI_HRZ_CTRL0_UNION;
#endif
#define SOC_EDC_LDI_HRZ_CTRL0_hfp_START       (0)
#define SOC_EDC_LDI_HRZ_CTRL0_hfp_END         (11)
#define SOC_EDC_LDI_HRZ_CTRL0_hbp_START       (20)
#define SOC_EDC_LDI_HRZ_CTRL0_hbp_END         (31)


/*****************************************************************************
 �ṹ��    : SOC_EDC_LDI_HRZ_CTRL1_UNION
 �ṹ˵��  : LDI_HRZ_CTRL1 �Ĵ����ṹ���塣��ַƫ����:0x1004����ֵ:0x00000000�����:32
 �Ĵ���˵��: LDIˮƽɨ��Ĵ���1
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  hsw      : 12; /* bit[0-11] : ˮƽͬ���������ã�д���ֵΪʵ��ֵ��1��Ľ����ˮƽͬ������Ŀ��������ʱ��Ϊ��λ��ȡֵ��ΧΪ1~4096 */
        unsigned int  reserved : 20; /* bit[12-31]:  */
    } reg;
} SOC_EDC_LDI_HRZ_CTRL1_UNION;
#endif
#define SOC_EDC_LDI_HRZ_CTRL1_hsw_START       (0)
#define SOC_EDC_LDI_HRZ_CTRL1_hsw_END         (11)


/*****************************************************************************
 �ṹ��    : SOC_EDC_LDI_VRT_CTRL0_UNION
 �ṹ˵��  : LDI_VRT_CTRL0 �Ĵ����ṹ���塣��ַƫ����:0x1008����ֵ:0x00000000�����:32
 �Ĵ���˵��: LDI��ֱɨ����ƼĴ���0
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  vfp      : 12; /* bit[0-11] : ֡ǰ����ʱ�����ã�д�����ʵ��ֵ��ȡֵ��ΧΪ0~4095;
                                                    ֡ǰ����Ϊ��Ч���ݽ�����֡ͬ���ź�ldi_vsync��Ч���ʱ���ڵ�����ɨ������ */
        unsigned int  reserved : 8;  /* bit[12-19]:  */
        unsigned int  vbp      : 12; /* bit[20-31]: ֡������ʱ�����ã�д�����ʵ��ֵ��ȡֵ��ΧΪ0~4095.
                                                    ֡������Ϊ֡ͬ���ź�ldi_vsync��Ч��һ֡��Ч���ݿ�ʼ���ʱ���ڵ�����ɨ������. */
    } reg;
} SOC_EDC_LDI_VRT_CTRL0_UNION;
#endif
#define SOC_EDC_LDI_VRT_CTRL0_vfp_START       (0)
#define SOC_EDC_LDI_VRT_CTRL0_vfp_END         (11)
#define SOC_EDC_LDI_VRT_CTRL0_vbp_START       (20)
#define SOC_EDC_LDI_VRT_CTRL0_vbp_END         (31)


/*****************************************************************************
 �ṹ��    : SOC_EDC_LDI_VRT_CTRL1_UNION
 �ṹ˵��  : LDI_VRT_CTRL1 �Ĵ����ṹ���塣��ַƫ����:0x100C����ֵ:0x00000000�����:32
 �Ĵ���˵��: LDI��ֱɨ����ƼĴ���1
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  vsw      : 12; /* bit[0-11] : ֡ͬ�����������ã�д���ֵΪʵ��ֵ��1�Ľ����֡ͬ������������ɨ������Ϊ��λ,ȡֵ��ΧΪ1~4096 */
        unsigned int  reserved : 20; /* bit[12-31]:  */
    } reg;
} SOC_EDC_LDI_VRT_CTRL1_UNION;
#endif
#define SOC_EDC_LDI_VRT_CTRL1_vsw_START       (0)
#define SOC_EDC_LDI_VRT_CTRL1_vsw_END         (11)


/*****************************************************************************
 �ṹ��    : SOC_EDC_LDI_PLR_CTRL_UNION
 �ṹ˵��  : LDI_PLR_CTRL �Ĵ����ṹ���塣��ַƫ����:0x1010����ֵ:0x00000000�����:32
 �Ĵ���˵��: LDI�źż��Կ��ƼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  vsync_plr     : 1;  /* bit[0]   : ֡ͬ���ź�ldi_vsync_o��Ч���ԣ�
                                                        0��ldi_vsync_o����Ч��
                                                        1��ldi_hsync_o����Ч */
        unsigned int  hsync_plr     : 1;  /* bit[1]   : ��ͬ���ź�ldi_hsync_o��Ч���ԣ�
                                                        0��ldi_hsync_o����Ч��
                                                        1��ldi_hsync_o����Ч */
        unsigned int  pixel_clk_plr : 1;  /* bit[2]   : ����ʱ��ldi_pixel_clk��Ч���ԣ�
                                                        0��ldi_pixel_clk��������Ч��
                                                        1��ldi_pixel_clk�½�����Ч */
        unsigned int  data_en_plr   : 1;  /* bit[3]   : ������Ч�ź�ldi_data_en_o��Ч����:
                                                        0��ldi_data_en_o����Ч��
                                                        1��ldi_data_en_o����Ч */
        unsigned int  reserved      : 28; /* bit[4-31]:  */
    } reg;
} SOC_EDC_LDI_PLR_CTRL_UNION;
#endif
#define SOC_EDC_LDI_PLR_CTRL_vsync_plr_START      (0)
#define SOC_EDC_LDI_PLR_CTRL_vsync_plr_END        (0)
#define SOC_EDC_LDI_PLR_CTRL_hsync_plr_START      (1)
#define SOC_EDC_LDI_PLR_CTRL_hsync_plr_END        (1)
#define SOC_EDC_LDI_PLR_CTRL_pixel_clk_plr_START  (2)
#define SOC_EDC_LDI_PLR_CTRL_pixel_clk_plr_END    (2)
#define SOC_EDC_LDI_PLR_CTRL_data_en_plr_START    (3)
#define SOC_EDC_LDI_PLR_CTRL_data_en_plr_END      (3)


/*****************************************************************************
 �ṹ��    : SOC_EDC_LDI_DSP_SIZE_UNION
 �ṹ˵��  : LDI_DSP_SIZE �Ĵ����ṹ���塣��ַƫ����:0x1014����ֵ:0x00000000�����:32
 �Ĵ���˵��: LDI��ʾ���ߴ�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  hsize    : 12; /* bit[0-11] : ��ʾ��ˮƽ�������ظ�����д��ֵΪʵ��ֵ��1��ȡֵ��ΧΪ1~4096 */
        unsigned int  reserved : 8;  /* bit[12-19]:  */
        unsigned int  vsize    : 12; /* bit[20-31]: ��ʾ����ֱ�������ظ�����д��ֵΪʵ��ֵ��1��ȡֵ��ΧΪ1~4096 */
    } reg;
} SOC_EDC_LDI_DSP_SIZE_UNION;
#endif
#define SOC_EDC_LDI_DSP_SIZE_hsize_START     (0)
#define SOC_EDC_LDI_DSP_SIZE_hsize_END       (11)
#define SOC_EDC_LDI_DSP_SIZE_vsize_START     (20)
#define SOC_EDC_LDI_DSP_SIZE_vsize_END       (31)


/*****************************************************************************
 �ṹ��    : SOC_EDC_LDI_3D_CTRL_UNION
 �ṹ˵��  : LDI_3D_CTRL �Ĵ����ṹ���塣��ַƫ����:0x1018����ֵ:0x00000000�����:32
 �Ĵ���˵��: LDI 3D��ʾ���ƼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  active_space : 12; /* bit[0-11] : ֡��֮֡���active spaceʱ�����ã�д��Ϊʵ��ֵ��ȡֵ��ΧΪ0~4095����ֻ����3D ��ʾframe by frame��ʽ��;Active space����ɨ������Ϊ��λ */
        unsigned int  reserved     : 20; /* bit[12-31]:  */
    } reg;
} SOC_EDC_LDI_3D_CTRL_UNION;
#endif
#define SOC_EDC_LDI_3D_CTRL_active_space_START  (0)
#define SOC_EDC_LDI_3D_CTRL_active_space_END    (11)


/*****************************************************************************
 �ṹ��    : SOC_EDC_LDI_INT_EN_UNION
 �ṹ˵��  : LDI_INT_EN �Ĵ����ṹ���塣��ַƫ����:0x101C����ֵ:0x00000000�����:32
 �Ĵ���˵��: LDI�ж����μĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  frame_start_int_en         : 1;  /* bit[0]    : ֡��ʼ�ж�ʹ�ܣ�
                                                                      0���ж����Σ�
                                                                      1���ж�ʹ�ܣ� */
        unsigned int  frame_end_int_en           : 1;  /* bit[1]    : ֡�����ж�ʹ�ܣ�
                                                                      0���ж����Σ�
                                                                      1���ж�ʹ�ܣ� */
        unsigned int  edc_afifo_underflow_int_en : 1;  /* bit[2]    : �Ƚ��ж�ʹ�ܣ�
                                                                      0���ж����Σ�
                                                                      1���ж�ʹ�ܣ� */
        unsigned int  vsync_int_en               : 1;  /* bit[3]    : ֡ͬ����ʼ�ж�ʹ�ܣ�
                                                                      0���ж����Σ�
                                                                      1���ж�ʹ�ܣ� */
        unsigned int  vfrontporch_int_en         : 1;  /* bit[4]    : ֡ǰ������ʼ�ж�ʹ�ܣ�
                                                                      0���ж����Σ�
                                                                      1���ж�ʹ�ܣ� */
        unsigned int  vfp_last_int_en            : 1;  /* bit[5]    : ֡��������ʼ�ж�ʹ�ܣ�
                                                                      0���ж����Σ�
                                                                      1���ж�ʹ�ܣ� */
        unsigned int  vactive0_start_int_en      : 1;  /* bit[6]    : ֡��Ч���ݿ�ʼ�ж�ʹ�ܣ�2Dģʽ�£�����
                                                                      ����֡��Ч���ݿ�ʼ�ж�ʹ�ܣ�3Dģʽ�£���
                                                                      0���ж����Σ�
                                                                      1���ж�ʹ�ܣ� */
        unsigned int  vactive0_end_int_en        : 1;  /* bit[7]    : ֡��Ч���ݽ����ж�ʹ�ܣ�2Dģʽ�£�����
                                                                      ����֡��Ч���ݽ����ж�ʹ�ܣ�3Dģʽ�£���
                                                                      0���ж����Σ�
                                                                      1���ж�ʹ�ܣ� */
        unsigned int  vactive1_start_int_en      : 1;  /* bit[8]    : ����֡��Ч���ݿ�ʼ�ж�ʹ�ܣ���������3Dģʽ��
                                                                      0���ж����Σ�
                                                                      1���ж�ʹ�ܣ� */
        unsigned int  vactive1_end_int_en        : 1;  /* bit[9]    : ����֡��Ч���ݽ����ж�ʹ�ܣ���������3Dģʽ��
                                                                      0���ж����Σ�
                                                                      1���ж�ʹ�ܣ� */
        unsigned int  vfrontporch_end_int_en     : 1;  /* bit[10]   : ֡�����������ж�ʹ�ܣ�
                                                                      0���ж����Σ�
                                                                      1���ж�ʹ�ܣ� */
        unsigned int  dsi_te_tri_int_en          : 1;  /* bit[11]   : Tearing Effect Trigger�ж�ʹ�ܣ�
                                                                      0���ж����Σ�
                                                                      1���ж�ʹ�ܣ� */
        unsigned int  dsi_te0_pin_int_en         : 1;  /* bit[12]   : Tearing Effect�ܽ�TE0�ж�ʹ�ܣ�
                                                                      0���ж����Σ�
                                                                      1���ж�ʹ�ܣ� */
        unsigned int  dsi_te1_pin_int_en         : 1;  /* bit[13]   : Tearing Effect�ܽ�TE1�ж�ʹ�ܣ�
                                                                      0���ж����Σ�
                                                                      1���ж�ʹ�ܣ� */
        unsigned int  reserved                   : 18; /* bit[14-31]:  */
    } reg;
} SOC_EDC_LDI_INT_EN_UNION;
#endif
#define SOC_EDC_LDI_INT_EN_frame_start_int_en_START          (0)
#define SOC_EDC_LDI_INT_EN_frame_start_int_en_END            (0)
#define SOC_EDC_LDI_INT_EN_frame_end_int_en_START            (1)
#define SOC_EDC_LDI_INT_EN_frame_end_int_en_END              (1)
#define SOC_EDC_LDI_INT_EN_edc_afifo_underflow_int_en_START  (2)
#define SOC_EDC_LDI_INT_EN_edc_afifo_underflow_int_en_END    (2)
#define SOC_EDC_LDI_INT_EN_vsync_int_en_START                (3)
#define SOC_EDC_LDI_INT_EN_vsync_int_en_END                  (3)
#define SOC_EDC_LDI_INT_EN_vfrontporch_int_en_START          (4)
#define SOC_EDC_LDI_INT_EN_vfrontporch_int_en_END            (4)
#define SOC_EDC_LDI_INT_EN_vfp_last_int_en_START             (5)
#define SOC_EDC_LDI_INT_EN_vfp_last_int_en_END               (5)
#define SOC_EDC_LDI_INT_EN_vactive0_start_int_en_START       (6)
#define SOC_EDC_LDI_INT_EN_vactive0_start_int_en_END         (6)
#define SOC_EDC_LDI_INT_EN_vactive0_end_int_en_START         (7)
#define SOC_EDC_LDI_INT_EN_vactive0_end_int_en_END           (7)
#define SOC_EDC_LDI_INT_EN_vactive1_start_int_en_START       (8)
#define SOC_EDC_LDI_INT_EN_vactive1_start_int_en_END         (8)
#define SOC_EDC_LDI_INT_EN_vactive1_end_int_en_START         (9)
#define SOC_EDC_LDI_INT_EN_vactive1_end_int_en_END           (9)
#define SOC_EDC_LDI_INT_EN_vfrontporch_end_int_en_START      (10)
#define SOC_EDC_LDI_INT_EN_vfrontporch_end_int_en_END        (10)
#define SOC_EDC_LDI_INT_EN_dsi_te_tri_int_en_START           (11)
#define SOC_EDC_LDI_INT_EN_dsi_te_tri_int_en_END             (11)
#define SOC_EDC_LDI_INT_EN_dsi_te0_pin_int_en_START          (12)
#define SOC_EDC_LDI_INT_EN_dsi_te0_pin_int_en_END            (12)
#define SOC_EDC_LDI_INT_EN_dsi_te1_pin_int_en_START          (13)
#define SOC_EDC_LDI_INT_EN_dsi_te1_pin_int_en_END            (13)


/*****************************************************************************
 �ṹ��    : SOC_EDC_LDI_CTRL_UNION
 �ṹ˵��  : LDI_CTRL �Ĵ����ṹ���塣��ַƫ����:0x1020����ֵ:0x00000000�����:32
 �Ĵ���˵��: LDI���ƼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ldi_en          : 1;  /* bit[0]    : LDIʹ�� */
        unsigned int  disp_mode_buf   : 1;  /* bit[1]    : ��ʾģʽ��
                                                           0��2D ��ʾģʽ����3D��ʾʱ��frame by frameģʽ��Ĭ�����ã�
                                                           1��3D frame by frameģʽ�� */
        unsigned int  date_gate_en    : 1;  /* bit[2]    : ������Ч�ź��ſع���ʹ�ܡ�
                                                           0����ʹ�ܣ�
                                                           1��ʹ�ܣ� */
        unsigned int  bpp             : 2;  /* bit[3-4]  : ��������������á�
                                                           00������RGB565���ظ�ʽ��
                                                           01������RGB666���ظ�ʽ��
                                                           10������RGB888���ظ�ʽ��
                                                           11������ */
        unsigned int  wait_vsync_en   : 1;  /* bit[5]    : �ȴ�ldi_vsync_otherʹ�ܣ�
                                                           0����ʹ�ܣ�
                                                           1��ʹ�ܣ� */
        unsigned int  corlorbar_width : 7;  /* bit[6-12] : corlorbar RGB������ȣ�д��ֵΪʵ��ֵ��1��ȡֵ��ΧΪ1~128 */
        unsigned int  bgr             : 1;  /* bit[13]   : RGB�������:
                                                           0����ͨ��RGB�����ʽ��
                                                           1��BGR�����ʽ��Blue��Red�����Ե��� */
        unsigned int  color_mode      : 1;  /* bit[14]   : ��DSI DPI�ӿڵ�Color Mode�źţ�
                                                           0�� Full color Mode;
                                                           1�� Reduced Color Mode */
        unsigned int  shutdown        : 1;  /* bit[15]   : ��DSI DPI�ӿڵ�shutdown�źţ�
                                                           0�� LCD������ʾ;
                                                           1�� LCD����Sleepģʽ */
        unsigned int  reserved        : 16; /* bit[16-31]:  */
    } reg;
} SOC_EDC_LDI_CTRL_UNION;
#endif
#define SOC_EDC_LDI_CTRL_ldi_en_START           (0)
#define SOC_EDC_LDI_CTRL_ldi_en_END             (0)
#define SOC_EDC_LDI_CTRL_disp_mode_buf_START    (1)
#define SOC_EDC_LDI_CTRL_disp_mode_buf_END      (1)
#define SOC_EDC_LDI_CTRL_date_gate_en_START     (2)
#define SOC_EDC_LDI_CTRL_date_gate_en_END       (2)
#define SOC_EDC_LDI_CTRL_bpp_START              (3)
#define SOC_EDC_LDI_CTRL_bpp_END                (4)
#define SOC_EDC_LDI_CTRL_wait_vsync_en_START    (5)
#define SOC_EDC_LDI_CTRL_wait_vsync_en_END      (5)
#define SOC_EDC_LDI_CTRL_corlorbar_width_START  (6)
#define SOC_EDC_LDI_CTRL_corlorbar_width_END    (12)
#define SOC_EDC_LDI_CTRL_bgr_START              (13)
#define SOC_EDC_LDI_CTRL_bgr_END                (13)
#define SOC_EDC_LDI_CTRL_color_mode_START       (14)
#define SOC_EDC_LDI_CTRL_color_mode_END         (14)
#define SOC_EDC_LDI_CTRL_shutdown_START         (15)
#define SOC_EDC_LDI_CTRL_shutdown_END           (15)


/*****************************************************************************
 �ṹ��    : SOC_EDC_LDI_ORG_INT_UNION
 �ṹ˵��  : LDI_ORG_INT �Ĵ����ṹ���塣��ַƫ����:0x1024����ֵ:0x00000000�����:32
 �Ĵ���˵��: LDIԭʼ�ж�״̬�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  frame_start_int         : 1;  /* bit[0]    : ֡��ʼ�ж�ԭʼ״̬��
                                                                   ��λ�����ж�ʹ��λ���Σ���֡��ʼʱ��λ��1 */
        unsigned int  frame_end_int           : 1;  /* bit[1]    : ֡�����ж�ԭʼ״̬��
                                                                   ��λ�����ж�ʹ��λ���Σ���֡����ʱ��λ��1 */
        unsigned int  edc_afifo_underflow_int : 1;  /* bit[2]    : �첽FIFO������ж�ԭʼ״̬��
                                                                   ��λ�����ж�ʹ��λ���Σ����첽FIFO�����ʱ��λ��1�� */
        unsigned int  vsync_int               : 1;  /* bit[3]    : ֡ͬ����ʼ�ж�ԭʼ״̬��
                                                                   ��λ�����ж�ʹ��λ���Σ���֡ͬ����ʼʱ��λ��1�� */
        unsigned int  vfrontporch_int         : 1;  /* bit[4]    : ֡��������ʼ�ж�ԭʼ״̬��
                                                                   ��λ�����ж�ʹ��λ���Σ���֡��������ʼʱ��λ��1 */
        unsigned int  vbackporch_int          : 1;  /* bit[5]    : ֡ǰ��������п�ʼ�ж�ԭʼ״̬��
                                                                   ��λ�����ж�ʹ��λ���Σ���֡ǰ������ʼʱ��λ��1 */
        unsigned int  vactive0_start_int      : 1;  /* bit[6]    : ֡��Ч���ݿ�ʼ�ж�ԭʼ״̬��2Dģʽ�£�����֡����֡��Ч���ݿ�ʼ�ж�ԭʼ״̬��3Dģʽ�£�,
                                                                   ��λ�����ж�ʹ��λ���Σ���֡��Ч���ݿ�ʼʱ��λ��1 */
        unsigned int  vactive0_end_int        : 1;  /* bit[7]    : ֡��Ч���ݽ����ж�ԭʼ״̬��2Dģʽ�£�����֡����֡��Ч���ݽ����ж�ԭʼ״̬��3Dģʽ�£�;
                                                                   ��λ�����ж�ʹ��λ���Σ���֡��Ч���ݽ���ʱ��λ��1 */
        unsigned int  vactive1_start_int      : 1;  /* bit[8]    : ����֡��Ч���ݿ�ʼ�ж�ԭʼ״̬����������3Dģʽ
                                                                   ��λ�����ж�ʹ��λ���Σ�������֡��Ч���ݿ�ʼʱ��λ��1. */
        unsigned int  vactive1_end_int        : 1;  /* bit[9]    : ����֡��Ч���ݽ����ж�ԭʼ״̬����������3Dģʽ
                                                                   ��λ�����ж�ʹ��λ���Σ�������֡��Ч���ݽ���ʱ��λ��1. */
        unsigned int  vfrontporch_end_int     : 1;  /* bit[10]   : ֡�����������ж�ԭʼ״̬��
                                                                   ��λ�����ж�ʹ��λ���Σ���֡����������ʱ��λ��1 */
        unsigned int  dsi_te_tri_int          : 1;  /* bit[11]   : Tearing Effect Trigger�ж�ԭʼ״̬��
                                                                   ��λ�����ж�ʹ��λ���Σ���DSI Host�յ�Tearing Effect Trigger�ź�ʱ��LDIָʾ�ź�ʱ��λ��1 */
        unsigned int  dsi_te0_pin_int         : 1;  /* bit[12]   : Tearing Effect�ܽ�TE0�ж�ԭʼ״̬��
                                                                   ��λ�����ж�ʹ��λ���Σ����ܽ�TE0��⵽��ЧTearing Effect�ź�ʱ��λ��1 */
        unsigned int  dsi_te1_pin_int         : 1;  /* bit[13]   : Tearing Effect�ܽ�TE1�ж�ԭʼ״̬��
                                                                   ��λ�����ж�ʹ��λ���Σ����ܽ�TE1��⵽��ЧTearing Effect�ź�ʱ��λ��1 */
        unsigned int  reserved                : 18; /* bit[14-31]:  */
    } reg;
} SOC_EDC_LDI_ORG_INT_UNION;
#endif
#define SOC_EDC_LDI_ORG_INT_frame_start_int_START          (0)
#define SOC_EDC_LDI_ORG_INT_frame_start_int_END            (0)
#define SOC_EDC_LDI_ORG_INT_frame_end_int_START            (1)
#define SOC_EDC_LDI_ORG_INT_frame_end_int_END              (1)
#define SOC_EDC_LDI_ORG_INT_edc_afifo_underflow_int_START  (2)
#define SOC_EDC_LDI_ORG_INT_edc_afifo_underflow_int_END    (2)
#define SOC_EDC_LDI_ORG_INT_vsync_int_START                (3)
#define SOC_EDC_LDI_ORG_INT_vsync_int_END                  (3)
#define SOC_EDC_LDI_ORG_INT_vfrontporch_int_START          (4)
#define SOC_EDC_LDI_ORG_INT_vfrontporch_int_END            (4)
#define SOC_EDC_LDI_ORG_INT_vbackporch_int_START           (5)
#define SOC_EDC_LDI_ORG_INT_vbackporch_int_END             (5)
#define SOC_EDC_LDI_ORG_INT_vactive0_start_int_START       (6)
#define SOC_EDC_LDI_ORG_INT_vactive0_start_int_END         (6)
#define SOC_EDC_LDI_ORG_INT_vactive0_end_int_START         (7)
#define SOC_EDC_LDI_ORG_INT_vactive0_end_int_END           (7)
#define SOC_EDC_LDI_ORG_INT_vactive1_start_int_START       (8)
#define SOC_EDC_LDI_ORG_INT_vactive1_start_int_END         (8)
#define SOC_EDC_LDI_ORG_INT_vactive1_end_int_START         (9)
#define SOC_EDC_LDI_ORG_INT_vactive1_end_int_END           (9)
#define SOC_EDC_LDI_ORG_INT_vfrontporch_end_int_START      (10)
#define SOC_EDC_LDI_ORG_INT_vfrontporch_end_int_END        (10)
#define SOC_EDC_LDI_ORG_INT_dsi_te_tri_int_START           (11)
#define SOC_EDC_LDI_ORG_INT_dsi_te_tri_int_END             (11)
#define SOC_EDC_LDI_ORG_INT_dsi_te0_pin_int_START          (12)
#define SOC_EDC_LDI_ORG_INT_dsi_te0_pin_int_END            (12)
#define SOC_EDC_LDI_ORG_INT_dsi_te1_pin_int_START          (13)
#define SOC_EDC_LDI_ORG_INT_dsi_te1_pin_int_END            (13)


/*****************************************************************************
 �ṹ��    : SOC_EDC_LDI_MSK_INT_UNION
 �ṹ˵��  : LDI_MSK_INT �Ĵ����ṹ���塣��ַƫ����:0x1028����ֵ:0x00000000�����:32
 �Ĵ���˵��: LDI���κ���ж�״̬�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  frame_start_int         : 1;  /* bit[0]    : ֡��ʼ�ж����κ�״̬ */
        unsigned int  frame_end_int           : 1;  /* bit[1]    : ֡�����ж����κ�״̬ */
        unsigned int  edc_afifo_underflow_int : 1;  /* bit[2]    : edc�첽FIFO������ж����κ�״̬ */
        unsigned int  vsync_int               : 1;  /* bit[3]    : ֡ͬ����ʼ�ж����κ�״̬ */
        unsigned int  vfrontporch_int         : 1;  /* bit[4]    : ֡��������ʼ�ж����κ�״̬ */
        unsigned int  vbackport_int           : 1;  /* bit[5]    : ֡ǰ��������п�ʼ�ж����κ�״̬ */
        unsigned int  vactive0_start_int      : 1;  /* bit[6]    : ֡��Ч���ݿ�ʼ�ж����κ�״̬��2Dģʽ�£���������֡��Ч���ݿ�ʼ�ж����κ�״̬��3Dģʽ�£� */
        unsigned int  vactive0_end_int        : 1;  /* bit[7]    : ֡��Ч���ݽ����ж����κ�״̬��2Dģʽ�£���������֡��Ч���ݽ����ж����κ�״̬��3Dģʽ�£� */
        unsigned int  vactive1_start_int      : 1;  /* bit[8]    : ����֡��Ч���ݿ�ʼ�ж����κ�״̬����������3Dģʽ */
        unsigned int  vactive1_end_int        : 1;  /* bit[9]    : ����֡��Ч���ݽ����ж����κ�״̬����������3Dģʽ */
        unsigned int  vfrontporch_end_int     : 1;  /* bit[10]   : ֡�����������ж�ԭʼ״̬�� */
        unsigned int  dsi_te_tri_int          : 1;  /* bit[11]   : Tearing Effect Trigger�ж�ԭʼ״̬�� */
        unsigned int  dsi_te0_pin_int         : 1;  /* bit[12]   : Tearing Effect�ܽ�TE0�ж�ԭʼ״̬�� */
        unsigned int  dsi_te1_pin_int         : 1;  /* bit[13]   : Tearing Effect�ܽ�TE1�ж�ԭʼ״̬�� */
        unsigned int  reserved                : 18; /* bit[14-31]:  */
    } reg;
} SOC_EDC_LDI_MSK_INT_UNION;
#endif
#define SOC_EDC_LDI_MSK_INT_frame_start_int_START          (0)
#define SOC_EDC_LDI_MSK_INT_frame_start_int_END            (0)
#define SOC_EDC_LDI_MSK_INT_frame_end_int_START            (1)
#define SOC_EDC_LDI_MSK_INT_frame_end_int_END              (1)
#define SOC_EDC_LDI_MSK_INT_edc_afifo_underflow_int_START  (2)
#define SOC_EDC_LDI_MSK_INT_edc_afifo_underflow_int_END    (2)
#define SOC_EDC_LDI_MSK_INT_vsync_int_START                (3)
#define SOC_EDC_LDI_MSK_INT_vsync_int_END                  (3)
#define SOC_EDC_LDI_MSK_INT_vfrontporch_int_START          (4)
#define SOC_EDC_LDI_MSK_INT_vfrontporch_int_END            (4)
#define SOC_EDC_LDI_MSK_INT_vbackport_int_START            (5)
#define SOC_EDC_LDI_MSK_INT_vbackport_int_END              (5)
#define SOC_EDC_LDI_MSK_INT_vactive0_start_int_START       (6)
#define SOC_EDC_LDI_MSK_INT_vactive0_start_int_END         (6)
#define SOC_EDC_LDI_MSK_INT_vactive0_end_int_START         (7)
#define SOC_EDC_LDI_MSK_INT_vactive0_end_int_END           (7)
#define SOC_EDC_LDI_MSK_INT_vactive1_start_int_START       (8)
#define SOC_EDC_LDI_MSK_INT_vactive1_start_int_END         (8)
#define SOC_EDC_LDI_MSK_INT_vactive1_end_int_START         (9)
#define SOC_EDC_LDI_MSK_INT_vactive1_end_int_END           (9)
#define SOC_EDC_LDI_MSK_INT_vfrontporch_end_int_START      (10)
#define SOC_EDC_LDI_MSK_INT_vfrontporch_end_int_END        (10)
#define SOC_EDC_LDI_MSK_INT_dsi_te_tri_int_START           (11)
#define SOC_EDC_LDI_MSK_INT_dsi_te_tri_int_END             (11)
#define SOC_EDC_LDI_MSK_INT_dsi_te0_pin_int_START          (12)
#define SOC_EDC_LDI_MSK_INT_dsi_te0_pin_int_END            (12)
#define SOC_EDC_LDI_MSK_INT_dsi_te1_pin_int_START          (13)
#define SOC_EDC_LDI_MSK_INT_dsi_te1_pin_int_END            (13)


/*****************************************************************************
 �ṹ��    : SOC_EDC_LDI_INT_CLR_UNION
 �ṹ˵��  : LDI_INT_CLR �Ĵ����ṹ���塣��ַƫ����:0x102C����ֵ:0x00000000�����:32
 �Ĵ���˵��: LDI�ж�����Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  frame_start_int_clr         : 1;  /* bit[0]    : ֡��ʼ�ж������
                                                                       д1�����֡��ʼ�ж� */
        unsigned int  frame_end_int_clr           : 1;  /* bit[1]    : ֡�����ж������
                                                                       д1�����֡�����ж� */
        unsigned int  edc_afifo_underflow_int_clr : 1;  /* bit[2]    : edc�첽FIFO������ж������
                                                                       д1������첽FIFO������ж� */
        unsigned int  vsync_int_clr               : 1;  /* bit[3]    : ֡ͬ����ʼ�ж������
                                                                       д1�����֡ͬ����ʼ�ж� */
        unsigned int  vbackporch_int_clr          : 1;  /* bit[4]    : ֡��������ʼ�ж������
                                                                       д1�����֡��������ʼ�ж� */
        unsigned int  vfrontporch_int_clr         : 1;  /* bit[5]    : ֡ǰ������ʼ�ж������
                                                                       д1�����֡ǰ������ʼ�ж� */
        unsigned int  vactive0_start_int_clr      : 1;  /* bit[6]    : ֡��Ч���ݿ�ʼ�ж������2Dģʽ�£���������֡��Ч���ݿ�ʼ�ж������
                                                                       д1�����֡��Ч���ݿ�ʼ�жϣ�2Dģʽ�£�������֡���ݿ�ʼ�жϣ�3Dģʽ�£� */
        unsigned int  vactive0_end_int_clr        : 1;  /* bit[7]    : ֡��Ч���ݽ����ж������2Dģʽ�£���������֡��Ч���ݽ����ж������
                                                                       д1�����֡��Ч���ݽ����жϣ�2Dģʽ�£�������֡���ݽ����жϣ�3Dģʽ�£� */
        unsigned int  vactive1_start_int_clr      : 1;  /* bit[8]    : ����֡��Ч���ݿ�ʼ�ж������
                                                                       д1���������֡��Ч���ݿ�ʼ�ж� */
        unsigned int  vactive1_end_int_clr        : 1;  /* bit[9]    : ����֡��Ч���ݽ����ж������
                                                                       д1���������֡��Ч���ݽ����ж� */
        unsigned int  vfrontporch_end_int_clr     : 1;  /* bit[10]   : ֡�����������ж������
                                                                       д1���������֡��Ч���ݽ����ж� */
        unsigned int  dsi_te_tri_int_clr          : 1;  /* bit[11]   : Tearing Effect Trigger�ж������
                                                                       д1���������֡��Ч���ݽ����ж� */
        unsigned int  dsi_te0_pin_int_clr         : 1;  /* bit[12]   : Tearing Effect�ܽ�TE0�ж������
                                                                       д1���������֡��Ч���ݽ����ж� */
        unsigned int  dsi_te1_pin_int_clr         : 1;  /* bit[13]   : Tearing Effect�ܽ�TE1�ж������
                                                                       д1���������֡��Ч���ݽ����ж� */
        unsigned int  reserved                    : 18; /* bit[14-31]:  */
    } reg;
} SOC_EDC_LDI_INT_CLR_UNION;
#endif
#define SOC_EDC_LDI_INT_CLR_frame_start_int_clr_START          (0)
#define SOC_EDC_LDI_INT_CLR_frame_start_int_clr_END            (0)
#define SOC_EDC_LDI_INT_CLR_frame_end_int_clr_START            (1)
#define SOC_EDC_LDI_INT_CLR_frame_end_int_clr_END              (1)
#define SOC_EDC_LDI_INT_CLR_edc_afifo_underflow_int_clr_START  (2)
#define SOC_EDC_LDI_INT_CLR_edc_afifo_underflow_int_clr_END    (2)
#define SOC_EDC_LDI_INT_CLR_vsync_int_clr_START                (3)
#define SOC_EDC_LDI_INT_CLR_vsync_int_clr_END                  (3)
#define SOC_EDC_LDI_INT_CLR_vbackporch_int_clr_START           (4)
#define SOC_EDC_LDI_INT_CLR_vbackporch_int_clr_END             (4)
#define SOC_EDC_LDI_INT_CLR_vfrontporch_int_clr_START          (5)
#define SOC_EDC_LDI_INT_CLR_vfrontporch_int_clr_END            (5)
#define SOC_EDC_LDI_INT_CLR_vactive0_start_int_clr_START       (6)
#define SOC_EDC_LDI_INT_CLR_vactive0_start_int_clr_END         (6)
#define SOC_EDC_LDI_INT_CLR_vactive0_end_int_clr_START         (7)
#define SOC_EDC_LDI_INT_CLR_vactive0_end_int_clr_END           (7)
#define SOC_EDC_LDI_INT_CLR_vactive1_start_int_clr_START       (8)
#define SOC_EDC_LDI_INT_CLR_vactive1_start_int_clr_END         (8)
#define SOC_EDC_LDI_INT_CLR_vactive1_end_int_clr_START         (9)
#define SOC_EDC_LDI_INT_CLR_vactive1_end_int_clr_END           (9)
#define SOC_EDC_LDI_INT_CLR_vfrontporch_end_int_clr_START      (10)
#define SOC_EDC_LDI_INT_CLR_vfrontporch_end_int_clr_END        (10)
#define SOC_EDC_LDI_INT_CLR_dsi_te_tri_int_clr_START           (11)
#define SOC_EDC_LDI_INT_CLR_dsi_te_tri_int_clr_END             (11)
#define SOC_EDC_LDI_INT_CLR_dsi_te0_pin_int_clr_START          (12)
#define SOC_EDC_LDI_INT_CLR_dsi_te0_pin_int_clr_END            (12)
#define SOC_EDC_LDI_INT_CLR_dsi_te1_pin_int_clr_START          (13)
#define SOC_EDC_LDI_INT_CLR_dsi_te1_pin_int_clr_END            (13)


/*****************************************************************************
 �ṹ��    : SOC_EDC_LDI_WORK_MODE_UNION
 �ṹ˵��  : LDI_WORK_MODE �Ĵ����ṹ���塣��ַƫ����:0x1030����ֵ:0x00000000�����:32
 �Ĵ���˵��: LDI��д���ƼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  work_mode   : 1;  /* bit[0]   : ����ģʽ��
                                                      0������ģʽ��
                                                      1����������ģʽ */
        unsigned int  wback_en    : 1;  /* bit[1]   : ��дʹ�� */
        unsigned int  colorbar_en : 1;  /* bit[2]   : colorbarʹ���źš�Ϊ��ʱ��LDI�ڲ��Զ������졢�̡����ʴ��� ����LCD�����ԣ�
                                                      ֻ���ڲ���ģʽ����Ч */
        unsigned int  reserved    : 29; /* bit[3-31]:  */
    } reg;
} SOC_EDC_LDI_WORK_MODE_UNION;
#endif
#define SOC_EDC_LDI_WORK_MODE_work_mode_START    (0)
#define SOC_EDC_LDI_WORK_MODE_work_mode_END      (0)
#define SOC_EDC_LDI_WORK_MODE_wback_en_START     (1)
#define SOC_EDC_LDI_WORK_MODE_wback_en_END       (1)
#define SOC_EDC_LDI_WORK_MODE_colorbar_en_START  (2)
#define SOC_EDC_LDI_WORK_MODE_colorbar_en_END    (2)


/*****************************************************************************
 �ṹ��    : SOC_EDC_LDI_HDMI_DSI_GT_UNION
 �ṹ˵��  : LDI_HDMI_DSI_GT �Ĵ����ṹ���塣��ַƫ����:0x1034����ֵ:0x00000000�����:32
 �Ĵ���˵��: HDMI/DSI����ʱ���ſؼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  dsi_pclk_off  : 1;  /* bit[0]   : DSI����ʱ�ӹرգ�
                                                        0�� DSI����ʱ�Ӵ򿪣�
                                                        1�� DSI����ʱ�ӹر� */
        unsigned int  hdmi_pclk_off : 1;  /* bit[1]   : HDMI����ʱ�ӹرգ�
                                                        0�� HDMI����ʱ�Ӵ򿪣�
                                                        1�� HDMI����ʱ�ӹر� */
        unsigned int  reserved      : 30; /* bit[2-31]:  */
    } reg;
} SOC_EDC_LDI_HDMI_DSI_GT_UNION;
#endif
#define SOC_EDC_LDI_HDMI_DSI_GT_dsi_pclk_off_START   (0)
#define SOC_EDC_LDI_HDMI_DSI_GT_dsi_pclk_off_END     (0)
#define SOC_EDC_LDI_HDMI_DSI_GT_hdmi_pclk_off_START  (1)
#define SOC_EDC_LDI_HDMI_DSI_GT_hdmi_pclk_off_END    (1)


/*****************************************************************************
 �ṹ��    : SOC_EDC_LDI_DE_SPACE_LOW_UNION
 �ṹ˵��  : LDI_DE_SPACE_LOW �Ĵ����ṹ���塣��ַƫ����:0x1038����ֵ:0x00000000�����:32
 �Ĵ���˵��: 3D frame by frame��ʽ��active space�׶�DE�ź���Ч���ƼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  de_space_low      : 1;  /* bit[0]   : DE�ź���active space�׶��Ƿ���Ч��
                                                            0��DE�ź���active space�׶�Ϊ�ߣ�
                                                            1��DE�ź���active space�׶�Ϊ�ͣ�
                                                            �üĴ���ֻ��3D frame by frame��ʽ����Ч��2D��ʽ����Ч */
        unsigned int  clr_ldi_en_bypass : 1;  /* bit[1]   : Ӳ��������LDI_EN��·ʹ�ܣ�
                                                            0�� ʹ��Ӳ��������LDI_EN���ܣ���vfp_last_int_en��Ч����VFP��ʼʱ��LDI_EN�Զ����㣻
                                                            1�� �ر�Ӳ�������㹦�� */
        unsigned int  reserved          : 30; /* bit[2-31]:  */
    } reg;
} SOC_EDC_LDI_DE_SPACE_LOW_UNION;
#endif
#define SOC_EDC_LDI_DE_SPACE_LOW_de_space_low_START       (0)
#define SOC_EDC_LDI_DE_SPACE_LOW_de_space_low_END         (0)
#define SOC_EDC_LDI_DE_SPACE_LOW_clr_ldi_en_bypass_START  (1)
#define SOC_EDC_LDI_DE_SPACE_LOW_clr_ldi_en_bypass_END    (1)


/*****************************************************************************
 �ṹ��    : SOC_EDC_DSI_CMD_MOD_CTRL_UNION
 �ṹ˵��  : DSI_CMD_MOD_CTRL �Ĵ����ṹ���塣��ַƫ����:0x103C����ֵ:0x00000000�����:32
 �Ĵ���˵��: DSI Command(CMD)ģʽ���ƼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  dsi_halt_cmd_en   : 1;  /* bit[0]   : ��CMDģʽ��HALT�źŵ�ʹ��
                                                            0����ʹ��Halt�źţ����ڲ���������ź�
                                                            1��ʹ��Halt�ź� */
        unsigned int  dsi_halt_video_en : 1;  /* bit[1]   : ��Videoģʽ��HALT�źŵ�ʹ��,����last line����ʹ��
                                                            0����ʹ��Halt�źţ����ڲ���������ź�
                                                            1��ʹ��Halt�ź� */
        unsigned int  dsi_wms_3d_mode   : 1;  /* bit[2]   : ��3Dģʽ��WMS�źŵ�ģʽ��frame by frame��
                                                            0 ����WMSģʽ
                                                            1 ����WMSģʽ */
        unsigned int  reserved          : 29; /* bit[3-31]:  */
    } reg;
} SOC_EDC_DSI_CMD_MOD_CTRL_UNION;
#endif
#define SOC_EDC_DSI_CMD_MOD_CTRL_dsi_halt_cmd_en_START    (0)
#define SOC_EDC_DSI_CMD_MOD_CTRL_dsi_halt_cmd_en_END      (0)
#define SOC_EDC_DSI_CMD_MOD_CTRL_dsi_halt_video_en_START  (1)
#define SOC_EDC_DSI_CMD_MOD_CTRL_dsi_halt_video_en_END    (1)
#define SOC_EDC_DSI_CMD_MOD_CTRL_dsi_wms_3d_mode_START    (2)
#define SOC_EDC_DSI_CMD_MOD_CTRL_dsi_wms_3d_mode_END      (2)


/*****************************************************************************
 �ṹ��    : SOC_EDC_DSI_TE_CTRL_UNION
 �ṹ˵��  : DSI_TE_CTRL �Ĵ����ṹ���塣��ַƫ����:0x1040����ֵ:0x00000020�����:32
 �Ĵ���˵��: DSI Command(CMD)ģʽTE���ƼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  dsi_te_hard_en    : 1;  /* bit[0]    : TEӲ��ģʽʹ���ź�
                                                             0����ʹ��TEӲ��ģʽ
                                                             1��ʹ��TEӲ��ģʽ
                                                             ÿ����TE Maskģʽ�����ǰ�������FRC��֡���л�����ģʽ���͹�ʱ��Ҫ��Disable����Ĵ����� */
        unsigned int  dsi_te0_pin_p     : 1;  /* bit[1]    : TE0 ����ѡ��
                                                             0���������뼫��
                                                             1�����뼫��ȡ�� */
        unsigned int  dsi_te1_pin_p     : 1;  /* bit[2]    : TE1 ����ѡ��
                                                             0���������뼫��
                                                             1�����뼫��ȡ�� */
        unsigned int  dsi_te_hard_sel   : 1;  /* bit[3]    : TEӲ��ģʽԴѡ��
                                                             0���ӹܽ������TE PINԴ
                                                             1����MIPI�ӿ��϶���TE TriggerԴ */
        unsigned int  dsi_te_pin_hd_sel : 1;  /* bit[4]    : TEӲ��ģʽ�£�TE PINѡ��
                                                             0��TE0 PIN
                                                             1��TE1 PIN */
        unsigned int  dsi_te_mask_en    : 1;  /* bit[5]    : TE����ʹ�ܣ�ֻ����Hardģʽ��softģʽֻ������жϼ��ɣ�����˹��ܣ�
                                                             0������TE�źŹر�
                                                             1������TE�źŹ��ܴ� */
        unsigned int  dsi_te_mask_dis   : 4;  /* bit[6-9]  : TE����ʱ��ʾ��TE����
                                                             �������6ʱ����ʼ��6��TE�ź���ʾ���ݵ�����default 1 */
        unsigned int  dsi_te_mask_und   : 4;  /* bit[10-13]: TE����ʱ���ε�TE����
                                                             �������6ʱ��������ʾ��TE���������6��TE�źű���default 1 */
        unsigned int  dsi_te_pin_en     : 1;  /* bit[14]   : ��CMDģʽ����TE PIN���ܽţ����ʹ��
                                                             0 �ر�TE PIN����߼�������Videoģʽ��CMDģʽ����TE PIN����
                                                             1 ����TE PIN����߼�������CMDģʽ������TE PIN���� */
        unsigned int  reserved          : 17; /* bit[15-31]:  */
    } reg;
} SOC_EDC_DSI_TE_CTRL_UNION;
#endif
#define SOC_EDC_DSI_TE_CTRL_dsi_te_hard_en_START     (0)
#define SOC_EDC_DSI_TE_CTRL_dsi_te_hard_en_END       (0)
#define SOC_EDC_DSI_TE_CTRL_dsi_te0_pin_p_START      (1)
#define SOC_EDC_DSI_TE_CTRL_dsi_te0_pin_p_END        (1)
#define SOC_EDC_DSI_TE_CTRL_dsi_te1_pin_p_START      (2)
#define SOC_EDC_DSI_TE_CTRL_dsi_te1_pin_p_END        (2)
#define SOC_EDC_DSI_TE_CTRL_dsi_te_hard_sel_START    (3)
#define SOC_EDC_DSI_TE_CTRL_dsi_te_hard_sel_END      (3)
#define SOC_EDC_DSI_TE_CTRL_dsi_te_pin_hd_sel_START  (4)
#define SOC_EDC_DSI_TE_CTRL_dsi_te_pin_hd_sel_END    (4)
#define SOC_EDC_DSI_TE_CTRL_dsi_te_mask_en_START     (5)
#define SOC_EDC_DSI_TE_CTRL_dsi_te_mask_en_END       (5)
#define SOC_EDC_DSI_TE_CTRL_dsi_te_mask_dis_START    (6)
#define SOC_EDC_DSI_TE_CTRL_dsi_te_mask_dis_END      (9)
#define SOC_EDC_DSI_TE_CTRL_dsi_te_mask_und_START    (10)
#define SOC_EDC_DSI_TE_CTRL_dsi_te_mask_und_END      (13)
#define SOC_EDC_DSI_TE_CTRL_dsi_te_pin_en_START      (14)
#define SOC_EDC_DSI_TE_CTRL_dsi_te_pin_en_END        (14)


/*****************************************************************************
 �ṹ��    : SOC_EDC_DSI_TE_HS_NUM_UNION
 �ṹ˵��  : DSI_TE_HS_NUM �Ĵ����ṹ���塣��ַƫ����:0x1044����ֵ:0x00000000�����:32
 �Ĵ���˵��: DSI��Ӧ�����üĴ������ƼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  dsi_te0_hs_num : 13; /* bit[0-12] : ������TE0�ź���Mode2(VS+HS)ģʽ�£��������ĸ�HSʱ��ʼ�������ݡ�
                                                          ����Ϊ0�����⺬�壬����ģʽ��VS�������ݲ���HS��
                                                          ʵ�ʷ���ֵΪDSI_TE1_HS_NUM + 1�з��͡� */
        unsigned int  dsi_te1_hs_num : 13; /* bit[13-25]: ������TE1�ź���Mode2(VS+HS)ģʽ�£��������ĸ�HSʱ��ʼ�������ݡ�
                                                          ����Ϊ0�����⺬�壬����ģʽ��VS�������ݲ���HS��
                                                          ʵ�ʷ���ֵΪDSI_TE1_HS_NUM + 1�з��͡� */
        unsigned int  reserved       : 6;  /* bit[26-31]:  */
    } reg;
} SOC_EDC_DSI_TE_HS_NUM_UNION;
#endif
#define SOC_EDC_DSI_TE_HS_NUM_dsi_te0_hs_num_START  (0)
#define SOC_EDC_DSI_TE_HS_NUM_dsi_te0_hs_num_END    (12)
#define SOC_EDC_DSI_TE_HS_NUM_dsi_te1_hs_num_START  (13)
#define SOC_EDC_DSI_TE_HS_NUM_dsi_te1_hs_num_END    (25)


/*****************************************************************************
 �ṹ��    : SOC_EDC_DSI_TE_HS_WD_UNION
 �ṹ˵��  : DSI_TE_HS_WD �Ĵ����ṹ���塣��ַƫ����:0x1048����ֵ:0x00003003�����:32
 �Ĵ���˵��: DSI TE PINģʽ���Hsync��ȿ��ƼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  dsi_te0_hs_wd : 12; /* bit[0-11] : ���ڼ��TE0�ź���Mode2(VS+HS)ģʽ�£�HS�źŵ��б𣬵�������TE�ź���Ч�����������Ĵ�����������Ϊ���HS�źš�
                                                         ����Ĵ���������ֵ����С��DSI_TE1_VS_WD��ֵ�� */
        unsigned int  dsi_te1_hs_wd : 12; /* bit[12-23]: ���ڼ��TE1�ź���Mode2(VS+HS)ģʽ�£�HS�źŵ��б𣬵�������TE�ź���Ч�����������Ĵ�����������Ϊ���HS�źš�
                                                         ����Ĵ���������ֵ����С��DSI_TE0_VS_WD��ֵ�� */
        unsigned int  reserved      : 8;  /* bit[24-31]:  */
    } reg;
} SOC_EDC_DSI_TE_HS_WD_UNION;
#endif
#define SOC_EDC_DSI_TE_HS_WD_dsi_te0_hs_wd_START  (0)
#define SOC_EDC_DSI_TE_HS_WD_dsi_te0_hs_wd_END    (11)
#define SOC_EDC_DSI_TE_HS_WD_dsi_te1_hs_wd_START  (12)
#define SOC_EDC_DSI_TE_HS_WD_dsi_te1_hs_wd_END    (23)


/*****************************************************************************
 �ṹ��    : SOC_EDC_DSI_TE_VS_WD_UNION
 �ṹ˵��  : DSI_TE_VS_WD �Ĵ����ṹ���塣��ַƫ����:0x104C����ֵ:0x00080080�����:32
 �Ĵ���˵��: DSI TE PINģʽ���Vsync��ȿ��ƼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  dsi_te0_vs_wd : 12; /* bit[0-11] : ���ڼ��TE0�ź���Mode2(VS+HS)ģʽ�£�VS�źŵ��б𣬵�������TE�ź���Ч�����������Ĵ�����������Ϊ���VS�ź� */
        unsigned int  dsi_te1_vs_wd : 12; /* bit[12-23]: ���ڼ��TE1�ź���Mode2(VS+HS)ģʽ�£�VS�źŵ��б𣬵�������TE�ź���Ч�����������Ĵ�����������Ϊ���VS�źţ��˼Ĵ������ñ������DSI_TE1_HS_WD�� */
        unsigned int  reserved      : 8;  /* bit[24-31]:  */
    } reg;
} SOC_EDC_DSI_TE_VS_WD_UNION;
#endif
#define SOC_EDC_DSI_TE_VS_WD_dsi_te0_vs_wd_START  (0)
#define SOC_EDC_DSI_TE_VS_WD_dsi_te0_vs_wd_END    (11)
#define SOC_EDC_DSI_TE_VS_WD_dsi_te1_vs_wd_START  (12)
#define SOC_EDC_DSI_TE_VS_WD_dsi_te1_vs_wd_END    (23)


/*****************************************************************************
 �ṹ��    : SOC_EDC_LDI_MCU_INTS_UNION
 �ṹ˵��  : LDI_MCU_INTS �Ĵ����ṹ���塣��ַƫ����:0x1050����ֵ:0x00000000�����:32
 �Ĵ���˵��: ��MCU���ж�״̬�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mcu_frm_end_ints : 1;  /* bit[0]   : ֡�����ж�״̬λ */
        unsigned int  reserved         : 31; /* bit[1-31]:  */
    } reg;
} SOC_EDC_LDI_MCU_INTS_UNION;
#endif
#define SOC_EDC_LDI_MCU_INTS_mcu_frm_end_ints_START  (0)
#define SOC_EDC_LDI_MCU_INTS_mcu_frm_end_ints_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_EDC_LDI_MCU_INTE_UNION
 �ṹ˵��  : LDI_MCU_INTE �Ĵ����ṹ���塣��ַƫ����:0x1054����ֵ:0x00000000�����:32
 �Ĵ���˵��: ��MCU���ж����μĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mcu_frm_end_int_en : 1;  /* bit[0]   : ֡�����ж�ʹ�ܣ�
                                                             0���ж����Σ�
                                                             1���ж�ʹ�ܣ� */
        unsigned int  reserved           : 31; /* bit[1-31]:  */
    } reg;
} SOC_EDC_LDI_MCU_INTE_UNION;
#endif
#define SOC_EDC_LDI_MCU_INTE_mcu_frm_end_int_en_START  (0)
#define SOC_EDC_LDI_MCU_INTE_mcu_frm_end_int_en_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_EDC_LDI_MCU_INTC_UNION
 �ṹ˵��  : LDI_MCU_INTC �Ĵ����ṹ���塣��ַƫ����:0x1058����ֵ:0x00000000�����:32
 �Ĵ���˵��: ��MCU���ж�����Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mcu_frm_end_clr : 1;  /* bit[0]   : ֡�����ж����λ��д1���ж� */
        unsigned int  reserved        : 31; /* bit[1-31]:  */
    } reg;
} SOC_EDC_LDI_MCU_INTC_UNION;
#endif
#define SOC_EDC_LDI_MCU_INTC_mcu_frm_end_clr_START  (0)
#define SOC_EDC_LDI_MCU_INTC_mcu_frm_end_clr_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_EDC_CONTROL_REG0_UNION
 �ṹ˵��  : CONTROL_REG0 �Ĵ����ṹ���塣��ַƫ����:0x2000����ֵ:0x0000000B�����:32
 �Ĵ���˵��: 
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  data_format : 2;  /* bit[0-1] :  */
        unsigned int  reserved    : 30; /* bit[2-31]:  */
    } reg;
} SOC_EDC_CONTROL_REG0_UNION;
#endif
#define SOC_EDC_CONTROL_REG0_data_format_START  (0)
#define SOC_EDC_CONTROL_REG0_data_format_END    (1)


/*****************************************************************************
 �ṹ��    : SOC_EDC_CONTROL_REG1_UNION
 �ṹ˵��  : CONTROL_REG1 �Ĵ����ṹ���塣��ַƫ����:0x2004����ֵ:0x00000094�����:32
 �Ĵ���˵��: 
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved_0: 6;  /* bit[0-5] :  */
        unsigned int  auto_pos  : 1;  /* bit[6]   :  */
        unsigned int  auto_size : 1;  /* bit[7]   :  */
        unsigned int  reserved_1: 24; /* bit[8-31]:  */
    } reg;
} SOC_EDC_CONTROL_REG1_UNION;
#endif
#define SOC_EDC_CONTROL_REG1_auto_pos_START   (6)
#define SOC_EDC_CONTROL_REG1_auto_pos_END     (6)
#define SOC_EDC_CONTROL_REG1_auto_size_START  (7)
#define SOC_EDC_CONTROL_REG1_auto_size_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_EDC_HS_POS0_UNION
 �ṹ˵��  : HS_POS0 �Ĵ����ṹ���塣��ַƫ����:0x2008����ֵ:0x00000000�����:32
 �Ĵ���˵��: 
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pos_7_0_ : 8;  /* bit[0-7] :  */
        unsigned int  reserved : 24; /* bit[8-31]:  */
    } reg;
} SOC_EDC_HS_POS0_UNION;
#endif
#define SOC_EDC_HS_POS0_pos_7_0__START  (0)
#define SOC_EDC_HS_POS0_pos_7_0__END    (7)


/*****************************************************************************
 �ṹ��    : SOC_EDC_HS_POS1_UNION
 �ṹ˵��  : HS_POS1 �Ĵ����ṹ���塣��ַƫ����:0x200C����ֵ:0x00000000�����:32
 �Ĵ���˵��: 
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pos_15_8_ : 8;  /* bit[0-7] :  */
        unsigned int  reserved  : 24; /* bit[8-31]:  */
    } reg;
} SOC_EDC_HS_POS1_UNION;
#endif
#define SOC_EDC_HS_POS1_pos_15_8__START  (0)
#define SOC_EDC_HS_POS1_pos_15_8__END    (7)


/*****************************************************************************
 �ṹ��    : SOC_EDC_FRAME_WIDTH0_UNION
 �ṹ˵��  : FRAME_WIDTH0 �Ĵ����ṹ���塣��ַƫ����:0x2010����ֵ:0x00000000�����:32
 �Ĵ���˵��: 
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  width_7_0 : 8;  /* bit[0-7] :  */
        unsigned int  reserved  : 24; /* bit[8-31]:  */
    } reg;
} SOC_EDC_FRAME_WIDTH0_UNION;
#endif
#define SOC_EDC_FRAME_WIDTH0_width_7_0_START  (0)
#define SOC_EDC_FRAME_WIDTH0_width_7_0_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_EDC_FRAME_WIDTH1_UNION
 �ṹ˵��  : FRAME_WIDTH1 �Ĵ����ṹ���塣��ַƫ����:0x2014����ֵ:0x00000001�����:32
 �Ĵ���˵��: 
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  width_15_8 : 8;  /* bit[0-7] :  */
        unsigned int  reserved   : 24; /* bit[8-31]:  */
    } reg;
} SOC_EDC_FRAME_WIDTH1_UNION;
#endif
#define SOC_EDC_FRAME_WIDTH1_width_15_8_START  (0)
#define SOC_EDC_FRAME_WIDTH1_width_15_8_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_EDC_FRAME_HEIGHT0_UNION
 �ṹ˵��  : FRAME_HEIGHT0 �Ĵ����ṹ���塣��ַƫ����:0x2018����ֵ:0x00000001�����:32
 �Ĵ���˵��: 
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  height_7_0 : 8;  /* bit[0-7] :  */
        unsigned int  reserved   : 24; /* bit[8-31]:  */
    } reg;
} SOC_EDC_FRAME_HEIGHT0_UNION;
#endif
#define SOC_EDC_FRAME_HEIGHT0_height_7_0_START  (0)
#define SOC_EDC_FRAME_HEIGHT0_height_7_0_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_EDC_FRAME_HEIGHT1_UNION
 �ṹ˵��  : FRAME_HEIGHT1 �Ĵ����ṹ���塣��ַƫ����:0x201C����ֵ:0x00000001�����:32
 �Ĵ���˵��: 
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  height_15_8 : 8;  /* bit[0-7] :  */
        unsigned int  reserved    : 24; /* bit[8-31]:  */
    } reg;
} SOC_EDC_FRAME_HEIGHT1_UNION;
#endif
#define SOC_EDC_FRAME_HEIGHT1_height_15_8_START  (0)
#define SOC_EDC_FRAME_HEIGHT1_height_15_8_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_EDC_VS_POS0_UNION
 �ṹ˵��  : VS_POS0 �Ĵ����ṹ���塣��ַƫ����:0x2020����ֵ:0x00000000�����:32
 �Ĵ���˵��: 
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pos_7_0  : 8;  /* bit[0-7] :  */
        unsigned int  reserved : 24; /* bit[8-31]:  */
    } reg;
} SOC_EDC_VS_POS0_UNION;
#endif
#define SOC_EDC_VS_POS0_pos_7_0_START   (0)
#define SOC_EDC_VS_POS0_pos_7_0_END     (7)


/*****************************************************************************
 �ṹ��    : SOC_EDC_VS_POS1_UNION
 �ṹ˵��  : VS_POS1 �Ĵ����ṹ���塣��ַƫ����:0x2024����ֵ:0x00000000�����:32
 �Ĵ���˵��: 
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pos_15_8 : 8;  /* bit[0-7] :  */
        unsigned int  reserved : 24; /* bit[8-31]:  */
    } reg;
} SOC_EDC_VS_POS1_UNION;
#endif
#define SOC_EDC_VS_POS1_pos_15_8_START  (0)
#define SOC_EDC_VS_POS1_pos_15_8_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_EDC_IRIDIX_CONTROL_0_UNION
 �ṹ˵��  : IRIDIX_CONTROL_0 �Ĵ����ṹ���塣��ַƫ����:0x2400����ֵ:0x00000013�����:32
 �Ĵ���˵��: 
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  enable           : 1;  /* bit[0]   :  */
        unsigned int  local_contrast   : 2;  /* bit[1-2] :  */
        unsigned int  reserved_0       : 1;  /* bit[3]   :  */
        unsigned int  color_correction : 1;  /* bit[4]   :  */
        unsigned int  reserved_1       : 27; /* bit[5-31]:  */
    } reg;
} SOC_EDC_IRIDIX_CONTROL_0_UNION;
#endif
#define SOC_EDC_IRIDIX_CONTROL_0_enable_START            (0)
#define SOC_EDC_IRIDIX_CONTROL_0_enable_END              (0)
#define SOC_EDC_IRIDIX_CONTROL_0_local_contrast_START    (1)
#define SOC_EDC_IRIDIX_CONTROL_0_local_contrast_END      (2)
#define SOC_EDC_IRIDIX_CONTROL_0_color_correction_START  (4)
#define SOC_EDC_IRIDIX_CONTROL_0_color_correction_END    (4)


/*****************************************************************************
 �ṹ��    : SOC_EDC_VARIANCE_UNION
 �ṹ˵��  : VARIANCE �Ĵ����ṹ���塣��ַƫ����:0x240C����ֵ:0x00000022�����:32
 �Ĵ���˵��: 
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  variance_space     : 4;  /* bit[0-3] :  */
        unsigned int  variance_intensity : 4;  /* bit[4-7] :  */
        unsigned int  reserved           : 24; /* bit[8-31]:  */
    } reg;
} SOC_EDC_VARIANCE_UNION;
#endif
#define SOC_EDC_VARIANCE_variance_space_START      (0)
#define SOC_EDC_VARIANCE_variance_space_END        (3)
#define SOC_EDC_VARIANCE_variance_intensity_START  (4)
#define SOC_EDC_VARIANCE_variance_intensity_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_EDC_SLOPE_MAX_UNION
 �ṹ˵��  : SLOPE_MAX �Ĵ����ṹ���塣��ַƫ����:0x2410����ֵ:0x00000030�����:32
 �Ĵ���˵��: 
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  slope_max : 8;  /* bit[0-7] :  */
        unsigned int  reserved  : 24; /* bit[8-31]:  */
    } reg;
} SOC_EDC_SLOPE_MAX_UNION;
#endif
#define SOC_EDC_SLOPE_MAX_slope_max_START  (0)
#define SOC_EDC_SLOPE_MAX_slope_max_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_EDC_SLOPE_MIN_UNION
 �ṹ˵��  : SLOPE_MIN �Ĵ����ṹ���塣��ַƫ����:0x2414����ֵ:0x00000080�����:32
 �Ĵ���˵��: 
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  slope_min : 8;  /* bit[0-7] :  */
        unsigned int  reserved  : 24; /* bit[8-31]:  */
    } reg;
} SOC_EDC_SLOPE_MIN_UNION;
#endif
#define SOC_EDC_SLOPE_MIN_slope_min_START  (0)
#define SOC_EDC_SLOPE_MIN_slope_min_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_EDC_BLACK_LEVEL0_UNION
 �ṹ˵��  : BLACK_LEVEL0 �Ĵ����ṹ���塣��ַƫ����:0x2418����ֵ:0x00000000�����:32
 �Ĵ���˵��: 
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  black_level0 : 8;  /* bit[0-7] :  */
        unsigned int  reserved     : 24; /* bit[8-31]:  */
    } reg;
} SOC_EDC_BLACK_LEVEL0_UNION;
#endif
#define SOC_EDC_BLACK_LEVEL0_black_level0_START  (0)
#define SOC_EDC_BLACK_LEVEL0_black_level0_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_EDC_BLACK_LEVEL1_UNION
 �ṹ˵��  : BLACK_LEVEL1 �Ĵ����ṹ���塣��ַƫ����:0x241C����ֵ:0x000000FF�����:32
 �Ĵ���˵��: 
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  black_level1 : 8;  /* bit[0-7] :  */
        unsigned int  reserved     : 24; /* bit[8-31]:  */
    } reg;
} SOC_EDC_BLACK_LEVEL1_UNION;
#endif
#define SOC_EDC_BLACK_LEVEL1_black_level1_START  (0)
#define SOC_EDC_BLACK_LEVEL1_black_level1_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_EDC_WHITE_LEVEL0_UNION
 �ṹ˵��  : WHITE_LEVEL0 �Ĵ����ṹ���塣��ַƫ����:0x2420����ֵ:0x000000FF�����:32
 �Ĵ���˵��: 
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  white_level0 : 8;  /* bit[0-7] :  */
        unsigned int  reserved     : 24; /* bit[8-31]:  */
    } reg;
} SOC_EDC_WHITE_LEVEL0_UNION;
#endif
#define SOC_EDC_WHITE_LEVEL0_white_level0_START  (0)
#define SOC_EDC_WHITE_LEVEL0_white_level0_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_EDC_WHITE_LEVEL1_UNION
 �ṹ˵��  : WHITE_LEVEL1 �Ĵ����ṹ���塣��ַƫ����:0x2424����ֵ:0x000000FF�����:32
 �Ĵ���˵��: 
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  white_level1 : 8;  /* bit[0-7] :  */
        unsigned int  reserved     : 24; /* bit[8-31]:  */
    } reg;
} SOC_EDC_WHITE_LEVEL1_UNION;
#endif
#define SOC_EDC_WHITE_LEVEL1_white_level1_START  (0)
#define SOC_EDC_WHITE_LEVEL1_white_level1_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_EDC_LIMIT_AMP_UNION
 �ṹ˵��  : LIMIT_AMP �Ĵ����ṹ���塣��ַƫ����:0x2428����ֵ:0x00000000�����:32
 �Ĵ���˵��: 
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  drak_amp_light   : 4;  /* bit[0-3] :  */
        unsigned int  bright_amp_limit : 4;  /* bit[4-7] :  */
        unsigned int  reserved         : 24; /* bit[8-31]:  */
    } reg;
} SOC_EDC_LIMIT_AMP_UNION;
#endif
#define SOC_EDC_LIMIT_AMP_drak_amp_light_START    (0)
#define SOC_EDC_LIMIT_AMP_drak_amp_light_END      (3)
#define SOC_EDC_LIMIT_AMP_bright_amp_limit_START  (4)
#define SOC_EDC_LIMIT_AMP_bright_amp_limit_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_EDC_DITHER_UNION
 �ṹ˵��  : DITHER �Ĵ����ṹ���塣��ַƫ����:0x242C����ֵ:0x00000000�����:32
 �Ĵ���˵��: 
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  dither_mode : 3;  /* bit[0-2] :  */
        unsigned int  reserved    : 29; /* bit[3-31]:  */
    } reg;
} SOC_EDC_DITHER_UNION;
#endif
#define SOC_EDC_DITHER_dither_mode_START  (0)
#define SOC_EDC_DITHER_dither_mode_END    (2)


/*****************************************************************************
 �ṹ��    : SOC_EDC_LOGO_LEFT_UNION
 �ṹ˵��  : LOGO_LEFT �Ĵ����ṹ���塣��ַƫ����:0x2800����ֵ:0x00000002�����:32
 �Ĵ���˵��: 
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  logo_left : 8;  /* bit[0-7] :  */
        unsigned int  reserved  : 24; /* bit[8-31]:  */
    } reg;
} SOC_EDC_LOGO_LEFT_UNION;
#endif
#define SOC_EDC_LOGO_LEFT_logo_left_START  (0)
#define SOC_EDC_LOGO_LEFT_logo_left_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_EDC_LOGO_RIGHT_UNION
 �ṹ˵��  : LOGO_RIGHT �Ĵ����ṹ���塣��ַƫ����:0x2804����ֵ:0x00000002�����:32
 �Ĵ���˵��: 
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  logo_right : 8;  /* bit[0-7] :  */
        unsigned int  reserved   : 24; /* bit[8-31]:  */
    } reg;
} SOC_EDC_LOGO_RIGHT_UNION;
#endif
#define SOC_EDC_LOGO_RIGHT_logo_right_START  (0)
#define SOC_EDC_LOGO_RIGHT_logo_right_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_EDC_DITHER_CONTROL_UNION
 �ṹ˵��  : DITHER_CONTROL �Ĵ����ṹ���塣��ַƫ����:0x2840����ֵ:0x00000003�����:32
 �Ĵ���˵��: 
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  enable_dither : 1;  /* bit[0]   :  */
        unsigned int  dither_amount : 1;  /* bit[1]   :  */
        unsigned int  shift_mode    : 1;  /* bit[2]   :  */
        unsigned int  reserved_0    : 4;  /* bit[3-6] :  */
        unsigned int  dither_bypass : 1;  /* bit[7]   :  */
        unsigned int  reserved_1    : 24; /* bit[8-31]:  */
    } reg;
} SOC_EDC_DITHER_CONTROL_UNION;
#endif
#define SOC_EDC_DITHER_CONTROL_enable_dither_START  (0)
#define SOC_EDC_DITHER_CONTROL_enable_dither_END    (0)
#define SOC_EDC_DITHER_CONTROL_dither_amount_START  (1)
#define SOC_EDC_DITHER_CONTROL_dither_amount_END    (1)
#define SOC_EDC_DITHER_CONTROL_shift_mode_START     (2)
#define SOC_EDC_DITHER_CONTROL_shift_mode_END       (2)
#define SOC_EDC_DITHER_CONTROL_dither_bypass_START  (7)
#define SOC_EDC_DITHER_CONTROL_dither_bypass_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_EDC_STRENGTH_SEL_UNION
 �ṹ˵��  : STRENGTH_SEL �Ĵ����ṹ���塣��ַƫ����:0x2C00����ֵ:0x00000000�����:32
 �Ĵ���˵��: 
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  strength_sel : 1;  /* bit[0]   :  */
        unsigned int  reserved     : 31; /* bit[1-31]:  */
    } reg;
} SOC_EDC_STRENGTH_SEL_UNION;
#endif
#define SOC_EDC_STRENGTH_SEL_strength_sel_START  (0)
#define SOC_EDC_STRENGTH_SEL_strength_sel_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_EDC_STRENGTH_MANUAL_UNION
 �ṹ˵��  : STRENGTH_MANUAL �Ĵ����ṹ���塣��ַƫ����:0x2C04����ֵ:0x0000001F�����:32
 �Ĵ���˵��: 
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  strength_manual : 8;  /* bit[0-7] :  */
        unsigned int  reserved        : 24; /* bit[8-31]:  */
    } reg;
} SOC_EDC_STRENGTH_MANUAL_UNION;
#endif
#define SOC_EDC_STRENGTH_MANUAL_strength_manual_START  (0)
#define SOC_EDC_STRENGTH_MANUAL_strength_manual_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_EDC_OPTION_SELECT_UNION
 �ṹ˵��  : OPTION_SELECT �Ĵ����ṹ���塣��ַƫ����:0x2C08����ֵ:0x00000002�����:32
 �Ĵ���˵��: 
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  option_select : 2;  /* bit[0-1] :  */
        unsigned int  reserved      : 30; /* bit[2-31]:  */
    } reg;
} SOC_EDC_OPTION_SELECT_UNION;
#endif
#define SOC_EDC_OPTION_SELECT_option_select_START  (0)
#define SOC_EDC_OPTION_SELECT_option_select_END    (1)


/*****************************************************************************
 �ṹ��    : SOC_EDC_AMBIENT_LIGHT0_UNION
 �ṹ˵��  : AMBIENT_LIGHT0 �Ĵ����ṹ���塣��ַƫ����:0x2C10����ֵ:0x000000FF�����:32
 �Ĵ���˵��: 
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ambient_light_7_0_ : 8;  /* bit[0-7] :  */
        unsigned int  reserved           : 24; /* bit[8-31]:  */
    } reg;
} SOC_EDC_AMBIENT_LIGHT0_UNION;
#endif
#define SOC_EDC_AMBIENT_LIGHT0_ambient_light_7_0__START  (0)
#define SOC_EDC_AMBIENT_LIGHT0_ambient_light_7_0__END    (7)


/*****************************************************************************
 �ṹ��    : SOC_EDC_AMBIENT_LIGHT1_UNION
 �ṹ˵��  : AMBIENT_LIGHT1 �Ĵ����ṹ���塣��ַƫ����:0x2C14����ֵ:0x000000FF�����:32
 �Ĵ���˵��: 
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ambient_light_15_8_ : 8;  /* bit[0-7] :  */
        unsigned int  reserved            : 24; /* bit[8-31]:  */
    } reg;
} SOC_EDC_AMBIENT_LIGHT1_UNION;
#endif
#define SOC_EDC_AMBIENT_LIGHT1_ambient_light_15_8__START  (0)
#define SOC_EDC_AMBIENT_LIGHT1_ambient_light_15_8__END    (7)


/*****************************************************************************
 �ṹ��    : SOC_EDC_BACKLIGHT_LEVEL0_UNION
 �ṹ˵��  : BACKLIGHT_LEVEL0 �Ĵ����ṹ���塣��ַƫ����:0x2C18����ֵ:0x000000FF�����:32
 �Ĵ���˵��: 
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  backlight_level_7_0_ : 8;  /* bit[0-7] :  */
        unsigned int  reserved             : 24; /* bit[8-31]:  */
    } reg;
} SOC_EDC_BACKLIGHT_LEVEL0_UNION;
#endif
#define SOC_EDC_BACKLIGHT_LEVEL0_backlight_level_7_0__START  (0)
#define SOC_EDC_BACKLIGHT_LEVEL0_backlight_level_7_0__END    (7)


/*****************************************************************************
 �ṹ��    : SOC_EDC_BACKLIGHT_LEVEL1_UNION
 �ṹ˵��  : BACKLIGHT_LEVEL1 �Ĵ����ṹ���塣��ַƫ����:0x2C1C����ֵ:0x000000FF�����:32
 �Ĵ���˵��: 
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  backlight_level_15_8_ : 8;  /* bit[0-7] :  */
        unsigned int  reserved              : 24; /* bit[8-31]:  */
    } reg;
} SOC_EDC_BACKLIGHT_LEVEL1_UNION;
#endif
#define SOC_EDC_BACKLIGHT_LEVEL1_backlight_level_15_8__START  (0)
#define SOC_EDC_BACKLIGHT_LEVEL1_backlight_level_15_8__END    (7)


/*****************************************************************************
 �ṹ��    : SOC_EDC_BACKLIGHT_MAX0_UNION
 �ṹ˵��  : BACKLIGHT_MAX0 �Ĵ����ṹ���塣��ַƫ����:0x2C20����ֵ:0x000000FF�����:32
 �Ĵ���˵��: 
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  backlight_max_7_0_ : 8;  /* bit[0-7] :  */
        unsigned int  reserved           : 24; /* bit[8-31]:  */
    } reg;
} SOC_EDC_BACKLIGHT_MAX0_UNION;
#endif
#define SOC_EDC_BACKLIGHT_MAX0_backlight_max_7_0__START  (0)
#define SOC_EDC_BACKLIGHT_MAX0_backlight_max_7_0__END    (7)


/*****************************************************************************
 �ṹ��    : SOC_EDC_BACKLIGHT_MAX1_UNION
 �ṹ˵��  : BACKLIGHT_MAX1 �Ĵ����ṹ���塣��ַƫ����:0x2C24����ֵ:0x000000FF�����:32
 �Ĵ���˵��: 
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  backlight_max1_15_8_ : 8;  /* bit[0-7] :  */
        unsigned int  reserved             : 24; /* bit[8-31]:  */
    } reg;
} SOC_EDC_BACKLIGHT_MAX1_UNION;
#endif
#define SOC_EDC_BACKLIGHT_MAX1_backlight_max1_15_8__START  (0)
#define SOC_EDC_BACKLIGHT_MAX1_backlight_max1_15_8__END    (7)


/*****************************************************************************
 �ṹ��    : SOC_EDC_STRENGTH_LIMIT_UNION
 �ṹ˵��  : STRENGTH_LIMIT �Ĵ����ṹ���塣��ַƫ����:0x2C28����ֵ:0x000000FF�����:32
 �Ĵ���˵��: 
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  strength_limit : 8;  /* bit[0-7] :  */
        unsigned int  reserved       : 24; /* bit[8-31]:  */
    } reg;
} SOC_EDC_STRENGTH_LIMIT_UNION;
#endif
#define SOC_EDC_STRENGTH_LIMIT_strength_limit_START  (0)
#define SOC_EDC_STRENGTH_LIMIT_strength_limit_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_EDC_CALIBRATION_A_UNION
 �ṹ˵��  : CALIBRATION_A �Ĵ����ṹ���塣��ַƫ����:0x2C2C����ֵ:0x000000FF�����:32
 �Ĵ���˵��: 
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  calibration_a : 8;  /* bit[0-7] :  */
        unsigned int  reserved      : 24; /* bit[8-31]:  */
    } reg;
} SOC_EDC_CALIBRATION_A_UNION;
#endif
#define SOC_EDC_CALIBRATION_A_calibration_a_START  (0)
#define SOC_EDC_CALIBRATION_A_calibration_a_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_EDC_CALIBRATION_B_UNION
 �ṹ˵��  : CALIBRATION_B �Ĵ����ṹ���塣��ַƫ����:0x2C30����ֵ:0x000000FF�����:32
 �Ĵ���˵��: 
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  calibration_b : 8;  /* bit[0-7] :  */
        unsigned int  reserved      : 24; /* bit[8-31]:  */
    } reg;
} SOC_EDC_CALIBRATION_B_UNION;
#endif
#define SOC_EDC_CALIBRATION_B_calibration_b_START  (0)
#define SOC_EDC_CALIBRATION_B_calibration_b_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_EDC_DRC_IN0_UNION
 �ṹ˵��  : DRC_IN0 �Ĵ����ṹ���塣��ַƫ����:0x2C38����ֵ:0x000000FF�����:32
 �Ĵ���˵��: 
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  drc_in0  : 8;  /* bit[0-7] :  */
        unsigned int  reserved : 24; /* bit[8-31]:  */
    } reg;
} SOC_EDC_DRC_IN0_UNION;
#endif
#define SOC_EDC_DRC_IN0_drc_in0_START   (0)
#define SOC_EDC_DRC_IN0_drc_in0_END     (7)


/*****************************************************************************
 �ṹ��    : SOC_EDC_DRC_IN1_UNION
 �ṹ˵��  : DRC_IN1 �Ĵ����ṹ���塣��ַƫ����:0x2C3C����ֵ:0x000000FF�����:32
 �Ĵ���˵��: 
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  drc_in1  : 8;  /* bit[0-7] :  */
        unsigned int  reserved : 24; /* bit[8-31]:  */
    } reg;
} SOC_EDC_DRC_IN1_UNION;
#endif
#define SOC_EDC_DRC_IN1_drc_in1_START   (0)
#define SOC_EDC_DRC_IN1_drc_in1_END     (7)


/*****************************************************************************
 �ṹ��    : SOC_EDC_T_FILT_CONTROL_UNION
 �ṹ˵��  : T_FILT_CONTROL �Ĵ����ṹ���塣��ַƫ����:0x2C34����ֵ:0x000000FF�����:32
 �Ĵ���˵��: 
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  t_filt_control : 8;  /* bit[0-7] :  */
        unsigned int  reserved       : 24; /* bit[8-31]:  */
    } reg;
} SOC_EDC_T_FILT_CONTROL_UNION;
#endif
#define SOC_EDC_T_FILT_CONTROL_t_filt_control_START  (0)
#define SOC_EDC_T_FILT_CONTROL_t_filt_control_END    (7)






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

#endif /* end of soc_edc_interface.h */
