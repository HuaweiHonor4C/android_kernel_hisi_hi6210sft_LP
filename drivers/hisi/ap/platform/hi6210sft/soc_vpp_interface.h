

/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/

#ifndef __SOC_VPP_INTERFACE_H__
#define __SOC_VPP_INTERFACE_H__

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
/* �Ĵ���˵����VPP���ƼĴ�����surface���������ٲ�ģʽ��
   λ����UNION�ṹ:  SOC_VPP_VOCTRL_UNION */
#define SOC_VPP_VOCTRL_ADDR(base)                     ((base) + (0x0000))

/* �Ĵ���˵����VPP�ж�״̬��ֻ���Ĵ�����
   λ����UNION�ṹ:  SOC_VPP_VOINTSTA_UNION */
#define SOC_VPP_VOINTSTA_ADDR(base)                   ((base) + (0x0004))

/* �Ĵ���˵����VPP����Mask���ж�״̬�Ĵ�����д1���㡣
   λ����UNION�ṹ:  SOC_VPP_VOMSKINTSTA_UNION */
#define SOC_VPP_VOMSKINTSTA_ADDR(base)                ((base) + (0x0008))

/* �Ĵ���˵����VPP�ж����μĴ�������VOINTSTA��Ӧ����Ӧ����Ϊ1��ʾ�жϴ򿪣�Ϊ0��ʾ�ж����Ρ�
   λ����UNION�ṹ:  SOC_VPP_VOINTMSK_UNION */
#define SOC_VPP_VOINTMSK_ADDR(base)                   ((base) + (0x000C))

/* �Ĵ���˵����VPP�汾�Ĵ�����
   λ����UNION�ṹ:  SOC_VPP_VOUVERSION1_UNION */
#define SOC_VPP_VOUVERSION1_ADDR(base)                ((base) + (0x0010))

/* �Ĵ���˵����VPP�汾�Ĵ�����
   λ����UNION�ṹ:  SOC_VPP_VOUVERSION2_UNION */
#define SOC_VPP_VOUVERSION2_ADDR(base)                ((base) + (0x0014))

/* �Ĵ���˵��������������֤����
   λ����UNION�ṹ:  SOC_VPP_VODEBUG_UNION */
#define SOC_VPP_VODEBUG_ADDR(base)                    ((base) + (0x0020))

/* �Ĵ���˵����VPP������ƼĴ���
   λ����UNION�ṹ:  SOC_VPP_VOLNKLSTCTRL_UNION */
#define SOC_VPP_VOLNKLSTCTRL_ADDR(base)               ((base) + (0x0024))

/* �Ĵ���˵����VPP�����׵�ַ�Ĵ���
   λ����UNION�ṹ:  SOC_VPP_VOLNKLSTADDR_UNION */
#define SOC_VPP_VOLNKLSTADDR_ADDR(base)               ((base) + (0x0028))

/* �Ĵ���˵����VPP����ʼ�Ĵ���
   λ����UNION�ṹ:  SOC_VPP_VOLNKLSTSTRT_UNION */
#define SOC_VPP_VOLNKLSTSTRT_ADDR(base)               ((base) + (0x002C))

/* �Ĵ���˵����VPP����pending״̬�Ĵ���1
   λ����UNION�ṹ:  SOC_VPP_VOLNKLSTPENDINGSTA_UNION */
#define SOC_VPP_VOLNKLSTPENDINGSTA_ADDR(base)         ((base) + (0x0030))

/* �Ĵ���˵����VPP����Working״̬�Ĵ���1
   λ����UNION�ṹ:  SOC_VPP_VOLNKLSTWORKINGSTA_UNION */
#define SOC_VPP_VOLNKLSTWORKINGSTA_ADDR(base)         ((base) + (0x0034))

/* �Ĵ���˵����VPP����end״̬�Ĵ���1
   λ����UNION�ṹ:  SOC_VPP_VOLNKLSTENDSTA_UNION */
#define SOC_VPP_VOLNKLSTENDSTA_ADDR(base)             ((base) + (0x0038))

/* �Ĵ���˵����VPP����ڵ��״̬�Ĵ����Ĵ���
   λ����UNION�ṹ:  SOC_VPP_VOLNKLSTNUMSTA_UNION */
#define SOC_VPP_VOLNKLSTNUMSTA_ADDR(base)             ((base) + (0x003C))

/* �Ĵ���˵��������ϵ����LUT��صļĴ�������ʹ�ܼĴ�����VPP������ϵ����ͨ��AXI Master���õģ����ͨ��Slave������ʼ��ַ�Ͳ�����Ҫ���µı�־��
   λ����UNION�ṹ:  SOC_VPP_VOPARAUP_UNION */
#define SOC_VPP_VOPARAUP_ADDR(base)                   ((base) + (0x0040))

/* �Ĵ���˵����VHDˮƽ���ȡ�ˮƽɫ���˲�ϵ����ַ�Ĵ�����
   λ����UNION�ṹ:  SOC_VPP_VHDHCOEFAD_UNION */
#define SOC_VPP_VHDHCOEFAD_ADDR(base)                 ((base) + (0x0044))

/* �Ĵ���˵����VHD��ֱ���ȡ�ˮƽɫ���˲�ϵ����ַ�Ĵ�����
   λ����UNION�ṹ:  SOC_VPP_VHDVCOEFAD_UNION */
#define SOC_VPP_VHDVCOEFAD_ADDR(base)                 ((base) + (0x0048))

/* �Ĵ���˵����VADˮƽ���ȡ�ˮƽɫ���˲�ϵ����ַ�Ĵ�����
   λ����UNION�ṹ:  SOC_VPP_VADHCOEFAD_UNION */
#define SOC_VPP_VADHCOEFAD_ADDR(base)                 ((base) + (0x004C))

/* �Ĵ���˵����VAD��ֱ���ȡ�ˮƽɫ���˲�ϵ����ַ�Ĵ�����
   λ����UNION�ṹ:  SOC_VPP_VADVCOEFAD_UNION */
#define SOC_VPP_VADVCOEFAD_ADDR(base)                 ((base) + (0x0050))

/* �Ĵ���˵����videoͨ��ACCϵ�����ұ��ַ�Ĵ�����
   λ����UNION�ṹ:  SOC_VPP_ACCAD_UNION */
#define SOC_VPP_ACCAD_ADDR(base)                      ((base) + (0x0054))

/* �Ĵ���˵�����üĴ����������ò�������Ϣ��Ϊ�Ǽ�ʱ�Ĵ�����
   λ����UNION�ṹ:  SOC_VPP_VHDCTRL_UNION */
#define SOC_VPP_VHDCTRL_ADDR(base)                    ((base) + (0x0100))

/* �Ĵ���˵����VHDͨ������ʹ�ܼĴ�����
   λ����UNION�ṹ:  SOC_VPP_VHDUPD_UNION */
#define SOC_VPP_VHDUPD_ADDR(base)                     ((base) + (0x0104))

/* �Ĵ���˵������һ֡�ĵ�ַ�Ĵ���������deinterace������package���ظ�ʽ����֡buffer��ַ������semi-planar���ظ�ʽ������֡buffer��ַ��
   λ����UNION�ṹ:  SOC_VPP_VHDLADDR_UNION */
#define SOC_VPP_VHDLADDR_ADDR(base)                   ((base) + (0x0108))

/* �Ĵ���˵������һ֡��ɫ�ȵ�ַ�Ĵ���������deinterace������package���ظ�ʽ�õ�ַ��Ч������semi-planar���ظ�ʽ��ɫ��֡buffer��ַ��
   λ����UNION�ṹ:  SOC_VPP_VHDLCADDR_UNION */
#define SOC_VPP_VHDLCADDR_ADDR(base)                  ((base) + (0x010C))

/* �Ĵ���˵������ǰ֡�ĵ�ַ�Ĵ���������package���ظ�ʽ����֡buffer��ַ������semi-planar���ظ�ʽ������֡buffer��ַ��
   λ����UNION�ṹ:  SOC_VPP_VHDCADDR_UNION */
#define SOC_VPP_VHDCADDR_ADDR(base)                   ((base) + (0x0110))

/* �Ĵ���˵������ǰ֡��ɫ�ȵ�ַ�Ĵ���������package���ظ�ʽ�õ�ַ��Ч������semi-planar���ظ�ʽ��ɫ��֡buffer��ַ��DIE��ǰ֡�ĵ�ַ��
   λ����UNION�ṹ:  SOC_VPP_VHDCCADDR_UNION */
#define SOC_VPP_VHDCCADDR_ADDR(base)                  ((base) + (0x0114))

/* �Ĵ���˵������һ֡�ĵ�ַ�Ĵ���������deinterace������package���ظ�ʽ����֡buffer��ַ������semi-planar���ظ�ʽ������֡buffer��ַ��
   λ����UNION�ṹ:  SOC_VPP_VHDNADDR_UNION */
#define SOC_VPP_VHDNADDR_ADDR(base)                   ((base) + (0x0118))

/* �Ĵ���˵������һ֡��ɫ�ȵ�ַ�Ĵ���������deinterace������package���ظ�ʽ�õ�ַ��Ч������semi-planar���ظ�ʽ��ɫ��֡buffer��ַ��
   λ����UNION�ṹ:  SOC_VPP_VHDNCADDR_UNION */
#define SOC_VPP_VHDNCADDR_ADDR(base)                  ((base) + (0x011C))

/* �Ĵ���˵����surface��stride�Ĵ�����
   λ����UNION�ṹ:  SOC_VPP_VHDSTRIDE_UNION */
#define SOC_VPP_VHDSTRIDE_ADDR(base)                  ((base) + (0x0124))

/* �Ĵ���˵��������ֱ��ʼĴ�����Ϊ�Ǽ�ʱ�Ĵ�����
   λ����UNION�ṹ:  SOC_VPP_VHDIRESO_UNION */
#define SOC_VPP_VHDIRESO_ADDR(base)                   ((base) + (0x0128))

/* �Ĵ���˵����de-interlace��ʷ��Ϣbuffer��ַ��Ϊ�Ǽ�ʱ�Ĵ�����VDC_SDû�иüĴ�����
   λ����UNION�ṹ:  SOC_VPP_VHDDIEADDR_UNION */
#define SOC_VPP_VHDDIEADDR_ADDR(base)                 ((base) + (0x0138))

/* �Ĵ���˵����VHD�����ݻ�дbuffer��ַ��Ϊ�Ǽ�ʱ�Ĵ�����VDC_SDû�иüĴ�����
   λ����UNION�ṹ:  SOC_VPP_VHDWBC1ADDR_UNION */
#define SOC_VPP_VHDWBC1ADDR_ADDR(base)                ((base) + (0x013C))

/* �Ĵ���˵����VHD�����ݻ�д�м�࣬Ϊ�Ǽ�ʱ�Ĵ�����VDC_SDû�иüĴ�����
   λ����UNION�ṹ:  SOC_VPP_VHDWBC1STRD_UNION */
#define SOC_VPP_VHDWBC1STRD_ADDR(base)                ((base) + (0x0140))

/* �Ĵ���˵����de-interlace��ͳ����Ϣ��д��ַ��Ϊ�Ǽ�ʱ�Ĵ�����VDC_SDû�иüĴ�����
   λ����UNION�ṹ:  SOC_VPP_VHDDIESTADDR_UNION */
#define SOC_VPP_VHDDIESTADDR_ADDR(base)               ((base) + (0x0144))

/* �Ĵ���˵����Surface��ʵ��������ʾ���ڵ���ʼλ�ã�First POSition����������Ϊ��λ���Ǽ�ʱ�Ĵ�����
   λ����UNION�ṹ:  SOC_VPP_VHDVFPOS_UNION */
#define SOC_VPP_VHDVFPOS_ADDR(base)                   ((base) + (0x0168))

/* �Ĵ���˵����Surface��ʵ��������ʾ���ڵĽ���λ�ã�Last POSition����������Ϊ��λ���Ǽ�ʱ�Ĵ�����
   λ����UNION�ṹ:  SOC_VPP_VHDVLPOS_UNION */
#define SOC_VPP_VHDVLPOS_ADDR(base)                   ((base) + (0x016C))

/* �Ĵ���˵������Ƶ��ı���ɫ�Ĵ�����
   λ����UNION�ṹ:  SOC_VPP_VHDBK_UNION */
#define SOC_VPP_VHDBK_ADDR(base)                      ((base) + (0x0170))

/* �Ĵ���˵����ɫ�ʿռ�ת������ֱ�������Ĵ�����Ϊ��ʱ�Ĵ�����
   λ����UNION�ṹ:  SOC_VPP_VHDCSCIDC_UNION */
#define SOC_VPP_VHDCSCIDC_ADDR(base)                  ((base) + (0x0180))

/* �Ĵ���˵����ɫ�ʿռ�ת�����ֱ�������Ĵ�����Ϊ��ʱ�Ĵ�����
   λ����UNION�ṹ:  SOC_VPP_VHDCSCODC_UNION */
#define SOC_VPP_VHDCSCODC_ADDR(base)                  ((base) + (0x0184))

/* �Ĵ���˵����ɫ�ʿռ�ת������0��Ϊ��ʱ�Ĵ�����
   λ����UNION�ṹ:  SOC_VPP_VHDCSCP0_UNION */
#define SOC_VPP_VHDCSCP0_ADDR(base)                   ((base) + (0x0188))

/* �Ĵ���˵����ɫ�ʿռ�ת������1��Ϊ��ʱ�Ĵ�����
   λ����UNION�ṹ:  SOC_VPP_VHDCSCP1_UNION */
#define SOC_VPP_VHDCSCP1_ADDR(base)                   ((base) + (0x018C))

/* �Ĵ���˵����ɫ�ʿռ�ת������2��Ϊ��ʱ�Ĵ�����
   λ����UNION�ṹ:  SOC_VPP_VHDCSCP2_UNION */
#define SOC_VPP_VHDCSCP2_ADDR(base)                   ((base) + (0x0190))

/* �Ĵ���˵����ɫ�ʿռ�ת������3��Ϊ��ʱ�Ĵ�����
   λ����UNION�ṹ:  SOC_VPP_VHDCSCP3_UNION */
#define SOC_VPP_VHDCSCP3_ADDR(base)                   ((base) + (0x0194))

/* �Ĵ���˵����ɫ�ʿռ�ת������4��Ϊ��ʱ�Ĵ�����
   λ����UNION�ṹ:  SOC_VPP_VHDCSCP4_UNION */
#define SOC_VPP_VHDCSCP4_ADDR(base)                   ((base) + (0x0198))

/* �Ĵ���˵����ACM�Ŀ��ƼĴ�����
   λ����UNION�ṹ:  SOC_VPP_VHDACM0_UNION */
#define SOC_VPP_VHDACM0_ADDR(base)                    ((base) + (0x01A0))

/* �Ĵ���˵����ACM�Ĵ�����
   λ����UNION�ṹ:  SOC_VPP_VHDACM1_UNION */
#define SOC_VPP_VHDACM1_ADDR(base)                    ((base) + (0x01A4))

/* �Ĵ���˵����ACM�Ĵ�����
   λ����UNION�ṹ:  SOC_VPP_VHDACM2_UNION */
#define SOC_VPP_VHDACM2_ADDR(base)                    ((base) + (0x01A8))

/* �Ĵ���˵����ACM�Ĵ�����
   λ����UNION�ṹ:  SOC_VPP_VHDACM3_UNION */
#define SOC_VPP_VHDACM3_ADDR(base)                    ((base) + (0x01AC))

/* �Ĵ���˵����ACM�Ĵ�����
   λ����UNION�ṹ:  SOC_VPP_VHDACM4_UNION */
#define SOC_VPP_VHDACM4_ADDR(base)                    ((base) + (0x01B0))

/* �Ĵ���˵����ACM�Ĵ�����
   λ����UNION�ṹ:  SOC_VPP_VHDACM5_UNION */
#define SOC_VPP_VHDACM5_ADDR(base)                    ((base) + (0x01B4))

/* �Ĵ���˵����ACM�Ĵ�����
   λ����UNION�ṹ:  SOC_VPP_VHDACM6_UNION */
#define SOC_VPP_VHDACM6_ADDR(base)                    ((base) + (0x01B8))

/* �Ĵ���˵����ACM�Ĵ�����
   λ����UNION�ṹ:  SOC_VPP_VHDACM7_UNION */
#define SOC_VPP_VHDACM7_ADDR(base)                    ((base) + (0x01BC))

/* �Ĵ���˵����ˮƽ���Ų������ã�horizontal Scaling Parameter���Ĵ�����Ϊ�Ǽ�ʱ�Ĵ�����
            ���ű��ʣ�������/�����ȡ�
   λ����UNION�ṹ:  SOC_VPP_VHDHSP_UNION */
#define SOC_VPP_VHDHSP_ADDR(base)                     ((base) + (0x01C0))

/* �Ĵ���˵��������ˮƽλ��ƫ�ƼĴ���������pan-scan��Ϊ�Ǽ�ʱ�Ĵ�����
   λ����UNION�ṹ:  SOC_VPP_VHDHLOFFSET_UNION */
#define SOC_VPP_VHDHLOFFSET_ADDR(base)                ((base) + (0x01C4))

/* �Ĵ���˵����ɫ��ˮƽλ��ƫ�ƼĴ���������pan-scan��Ϊ�Ǽ�ʱ�Ĵ�����
   λ����UNION�ṹ:  SOC_VPP_VHDHCOFFSET_UNION */
#define SOC_VPP_VHDHCOFFSET_ADDR(base)                ((base) + (0x01C8))

/* �Ĵ���˵�������Ų��� (vertical Scaling Parameter)�Ĵ�����
   λ����UNION�ṹ:  SOC_VPP_VHDVSP_UNION */
#define SOC_VPP_VHDVSP_ADDR(base)                     ((base) + (0x01D8))

/* �Ĵ���˵������ֱ���ű��� (Luma Vertical Scaling Ratio)�Ĵ��������ű��ʣ�����߶�/����߶ȡ�Ϊ�Ǽ�ʱ�Ĵ�����
   λ����UNION�ṹ:  SOC_VPP_VHDVSR_UNION */
#define SOC_VPP_VHDVSR_ADDR(base)                     ((base) + (0x01DC))

/* �Ĵ���˵������ֱ����ƫ�ƣ�Vertical Luma Offset���Ĵ�������ֱ����ƫ������������Ӱ�죺pan-scan���ظ�֡ʱ�ĳ�ƫ�ơ���û�г�ƫ��ʱ��vluma_offsetΪoffset_pan-scan���������λ+С��λ����YCbCr422��ʽʱvchroma_offset��vluma_offset��ȣ���YCbCr420��ʽʱ��vchroma_offset = scaling_chroma/2-0.25������Ҫ��ƫ��ʱ���羲֡�����ظ�֡���������ظ��׳����򶥳����õ�vluma_offset��vchroma_offset��������ƫ��ʱ��ͬ���׳�������Ҫ���ǳ�ƫ�ơ�
   λ����UNION�ṹ:  SOC_VPP_VHDVOFFSET_UNION */
#define SOC_VPP_VHDVOFFSET_ADDR(base)                 ((base) + (0x01E0))

/* �Ĵ���˵�������ŵ�Ԫ������ֱ��ʼĴ�����Ϊ�Ǽ�ʱ�Ĵ�����
   λ����UNION�ṹ:  SOC_VPP_VHDZMEORESO_UNION */
#define SOC_VPP_VHDZMEORESO_ADDR(base)                ((base) + (0x01E4))

/* �Ĵ���˵�������ŵ�Ԫ���������ʼĴ�����Ϊ�Ǽ�ʱ�Ĵ�����
   λ����UNION�ṹ:  SOC_VPP_VHDZMEIRESO_UNION */
#define SOC_VPP_VHDZMEIRESO_ADDR(base)                ((base) + (0x01E8))

/* �Ĵ���˵����VHDͨ�� ACC��������1
   λ����UNION�ṹ:  SOC_VPP_VHDACCTHD1_UNION */
#define SOC_VPP_VHDACCTHD1_ADDR(base)                 ((base) + (0x0200))

/* �Ĵ���˵����VHDͨ�� ACC��������2
   λ����UNION�ṹ:  SOC_VPP_VHDACCTHD2_UNION */
#define SOC_VPP_VHDACCTHD2_ADDR(base)                 ((base) + (0x0204))

/* �Ĵ���˵����ACC���ұ����ȵȼ�Ϊlow��n=1~3
   λ����UNION�ṹ:  SOC_VPP_VHDACCLOWN_UNION */
#define SOC_VPP_VHDACCLOWN_ADDR(base)                 ((base) + (0x0210��0x0218))

/* �Ĵ���˵����ACC���ұ����ȵȼ�Ϊmiddle��n=1~3
   λ����UNION�ṹ:  SOC_VPP_VHDACCMEDN_UNION */
#define SOC_VPP_VHDACCMEDN_ADDR(base)                 ((base) + (0x0220��0x0228))

/* �Ĵ���˵����ACC���ұ����ȵȼ�Ϊhigh��n=1~3
   λ����UNION�ṹ:  SOC_VPP_VHDACCHIGHN_UNION */
#define SOC_VPP_VHDACCHIGHN_ADDR(base)                ((base) + (0x0230��0x0238))

/* �Ĵ���˵����ACC���ұ����ȵȼ�Ϊmiddle_low��n=1~3
   λ����UNION�ṹ:  SOC_VPP_VHDACCMLN_UNION */
#define SOC_VPP_VHDACCMLN_ADDR(base)                  ((base) + (0x0240��0x0248))

/* �Ĵ���˵����ACC���ұ����ȵȼ�Ϊmiddle_high��n=1~3
   λ����UNION�ṹ:  SOC_VPP_VHDACCMHN_UNION */
#define SOC_VPP_VHDACCMHN_ADDR(base)                  ((base) + (0x0250��0x0258))

/* �Ĵ���˵����ACC������ĵ���������ͳ��ֵ��Ϊֻ���Ĵ���
   λ����UNION�ṹ:  SOC_VPP_VHDACC3LOW_UNION */
#define SOC_VPP_VHDACC3LOW_ADDR(base)                 ((base) + (0x0260))

/* �Ĵ���˵����ACC�����������������ͳ��ֵ��Ϊֻ���Ĵ���
   λ����UNION�ṹ:  SOC_VPP_VHDACC3MED_UNION */
#define SOC_VPP_VHDACC3MED_ADDR(base)                 ((base) + (0x0264))

/* �Ĵ���˵����ACC������ĸ���������ͳ��ֵ��Ϊֻ���Ĵ���
   λ����UNION�ṹ:  SOC_VPP_VHDACC3HIGH_UNION */
#define SOC_VPP_VHDACC3HIGH_ADDR(base)                ((base) + (0x0268))

/* �Ĵ���˵����ACC�м�����ֳ�8�κ󣬵���������ͳ��ֵ��Ϊֻ���Ĵ���
   λ����UNION�ṹ:  SOC_VPP_VHDACC8MLOW_UNION */
#define SOC_VPP_VHDACC8MLOW_ADDR(base)                ((base) + (0x026C))

/* �Ĵ���˵����ACC�м�����ֳ�8�κ󣬸���������ͳ��ֵ��Ϊֻ���Ĵ���
   λ����UNION�ṹ:  SOC_VPP_VHDACC8MHIGH_UNION */
#define SOC_VPP_VHDACC8MHIGH_ADDR(base)               ((base) + (0x0270))

/* �Ĵ���˵����ACC����ͳ��ֵ��Ϊֻ���Ĵ���
   λ����UNION�ṹ:  SOC_VPP_VHDACCTOTAL_UNION */
#define SOC_VPP_VHDACCTOTAL_ADDR(base)                ((base) + (0x0274))

/* �Ĵ���˵����IFIR�˲�ϵ��0��1
   λ����UNION�ṹ:  SOC_VPP_VHDIFIRCOEF01_UNION */
#define SOC_VPP_VHDIFIRCOEF01_ADDR(base)              ((base) + (0x0280))

/* �Ĵ���˵����IFIR�˲�ϵ��2��3
   λ����UNION�ṹ:  SOC_VPP_VHDIFIRCOEF23_UNION */
#define SOC_VPP_VHDIFIRCOEF23_ADDR(base)              ((base) + (0x0284))

/* �Ĵ���˵����IFIR�˲�ϵ��4��5
   λ����UNION�ṹ:  SOC_VPP_VHDIFIRCOEF45_UNION */
#define SOC_VPP_VHDIFIRCOEF45_ADDR(base)              ((base) + (0x0288))

/* �Ĵ���˵����IFIR�˲�ϵ��6��7
   λ����UNION�ṹ:  SOC_VPP_VHDIFIRCOEF67_UNION */
#define SOC_VPP_VHDIFIRCOEF67_ADDR(base)              ((base) + (0x028C))

/* �Ĵ���˵����de-interlace������ƼĴ�����Ϊ�Ǽ�ʱ�Ĵ�����
   λ����UNION�ṹ:  SOC_VPP_VHDDIECTRL_UNION */
#define SOC_VPP_VHDDIECTRL_ADDR(base)                 ((base) + (0x0300))

/* �Ĵ���˵����de-interlace����������ƼĴ���0��
   λ����UNION�ṹ:  SOC_VPP_VHDDIELMA0_UNION */
#define SOC_VPP_VHDDIELMA0_ADDR(base)                 ((base) + (0x0308))

/* �Ĵ���˵����de-interlace����������ƼĴ���1��
   λ����UNION�ṹ:  SOC_VPP_VHDDIELMA1_UNION */
#define SOC_VPP_VHDDIELMA1_ADDR(base)                 ((base) + (0x030C))

/* �Ĵ���˵����de-interlace����������ƼĴ���2��
   λ����UNION�ṹ:  SOC_VPP_VHDDIELMA2_UNION */
#define SOC_VPP_VHDDIELMA2_ADDR(base)                 ((base) + (0x0310))

/* �Ĵ���˵����
   λ����UNION�ṹ:  SOC_VPP_VHDDIEINTEN_UNION */
#define SOC_VPP_VHDDIEINTEN_ADDR(base)                ((base) + (0x0314))

/* �Ĵ���˵����
   λ����UNION�ṹ:  SOC_VPP_VHDDIESCALE_UNION */
#define SOC_VPP_VHDDIESCALE_ADDR(base)                ((base) + (0x0318))

/* �Ĵ���˵����
   λ����UNION�ṹ:  SOC_VPP_VHDDIECHECK1_UNION */
#define SOC_VPP_VHDDIECHECK1_ADDR(base)               ((base) + (0x031C))

/* �Ĵ���˵����
   λ����UNION�ṹ:  SOC_VPP_VHDDIECHECK2_UNION */
#define SOC_VPP_VHDDIECHECK2_ADDR(base)               ((base) + (0x0320))

/* �Ĵ���˵��������0��3����
   λ����UNION�ṹ:  SOC_VPP_VHDDIEDIR0_3_UNION */
#define SOC_VPP_VHDDIEDIR0_3_ADDR(base)               ((base) + (0x324))

/* �Ĵ���˵��������4��7����
   λ����UNION�ṹ:  SOC_VPP_VHDDIEDIR4_7_UNION */
#define SOC_VPP_VHDDIEDIR4_7_ADDR(base)               ((base) + (0x328))

/* �Ĵ���˵��������8��11����
   λ����UNION�ṹ:  SOC_VPP_VHDDIEDIR8_11_UNION */
#define SOC_VPP_VHDDIEDIR8_11_ADDR(base)              ((base) + (0x32C))

/* �Ĵ���˵��������12��14����
   λ����UNION�ṹ:  SOC_VPP_VHDDIEDIR12_14_UNION */
#define SOC_VPP_VHDDIEDIR12_14_ADDR(base)             ((base) + (0x330))

/* �Ĵ���˵����
   λ����UNION�ṹ:  SOC_VPP_VHDDIESTA_UNION */
#define SOC_VPP_VHDDIESTA_ADDR(base)                  ((base) + (0x0338))

/* �Ĵ���˵����DIE��ʷ��Ϣ�Ĵ���
   λ����UNION�ṹ:  SOC_VPP_VHDDIESTKADDR_UNION */
#define SOC_VPP_VHDDIESTKADDR_ADDR(base)              ((base) + (0x03A4))

/* �Ĵ���˵����DIE��ʷ��Ϣ�Ĵ���
   λ����UNION�ṹ:  SOC_VPP_VHDDIESTLADDR_UNION */
#define SOC_VPP_VHDDIESTLADDR_ADDR(base)              ((base) + (0x03A8))

/* �Ĵ���˵����DIE��ʷ��Ϣ�Ĵ���
   λ����UNION�ṹ:  SOC_VPP_VHDDIESTMADDR_UNION */
#define SOC_VPP_VHDDIESTMADDR_ADDR(base)              ((base) + (0x03AC))

/* �Ĵ���˵����DIE��ʷ��Ϣ�Ĵ���
   λ����UNION�ṹ:  SOC_VPP_VHDDIESTNADDR_UNION */
#define SOC_VPP_VHDDIESTNADDR_ADDR(base)              ((base) + (0x03B0))

/* �Ĵ���˵����DIE��ʷ��Ϣ�Ĵ���
   λ����UNION�ṹ:  SOC_VPP_VHDDIESTSQTRADDR_UNION */
#define SOC_VPP_VHDDIESTSQTRADDR_ADDR(base)           ((base) + (0x03B4))

/* �Ĵ���˵����ɫ��crosscolor�Ĵ���0
   λ����UNION�ṹ:  SOC_VPP_VHDCCRSCLR0_UNION */
#define SOC_VPP_VHDCCRSCLR0_ADDR(base)                ((base) + (0x03B8))

/* �Ĵ���˵����ɫ��crosscolor�Ĵ���1
   λ����UNION�ṹ:  SOC_VPP_VHDCCRSCLR1_UNION */
#define SOC_VPP_VHDCCRSCLR1_ADDR(base)                ((base) + (0x03BC))

/* �Ĵ���˵����PullDown���ƼĴ���
   λ����UNION�ṹ:  SOC_VPP_VHDPDCTRL_UNION */
#define SOC_VPP_VHDPDCTRL_ADDR(base)                  ((base) + (0x0400))

/* �Ĵ���˵����PullDown��������0
   λ����UNION�ṹ:  SOC_VPP_VHDPDBLKPOS0_UNION */
#define SOC_VPP_VHDPDBLKPOS0_ADDR(base)               ((base) + (0x0404))

/* �Ĵ���˵����PullDown��������0
   λ����UNION�ṹ:  SOC_VPP_VHDPDBLKPOS1_UNION */
#define SOC_VPP_VHDPDBLKPOS1_ADDR(base)               ((base) + (0x0408))

/* �Ĵ���˵����PullDown��ֹ��������
   λ����UNION�ṹ:  SOC_VPP_VHDPDBLKTHD_UNION */
#define SOC_VPP_VHDPDBLKTHD_ADDR(base)                ((base) + (0x040C))

/* �Ĵ���˵����PullDownֱ��ͼͳ������
   λ����UNION�ṹ:  SOC_VPP_VHDPDHISTTHD_UNION */
#define SOC_VPP_VHDPDHISTTHD_ADDR(base)               ((base) + (0x0410))

/* �Ĵ���˵����PullDown�������˶�ͳ������
   λ����UNION�ṹ:  SOC_VPP_VHDPDUMTHD_UNION */
#define SOC_VPP_VHDPDUMTHD_ADDR(base)                 ((base) + (0x0414))

/* �Ĵ���˵����PullDown���Ըı����ͳ������
   λ����UNION�ṹ:  SOC_VPP_VHDPDPCCCORING_UNION */
#define SOC_VPP_VHDPDPCCCORING_ADDR(base)             ((base) + (0x0418))

/* �Ĵ���˵����PullDown���Ըı�ˮƽͳ������
   λ����UNION�ṹ:  SOC_VPP_VHDPDPCCHTHD_UNION */
#define SOC_VPP_VHDPDPCCHTHD_ADDR(base)               ((base) + (0x041C))

/* �Ĵ���˵����PullDown���Ըı䴹ֱͳ������
   λ����UNION�ṹ:  SOC_VPP_VHDPDPCCVTHD_UNION */
#define SOC_VPP_VHDPDPCCVTHD_ADDR(base)               ((base) + (0x0420))

/* �Ĵ���˵����Pulldown
   λ����UNION�ṹ:  SOC_VPP_VHDPDITDIFFVTHD_UNION */
#define SOC_VPP_VHDPDITDIFFVTHD_ADDR(base)            ((base) + (0x0424))

/* �Ĵ���˵����Pulldown��˿ͳ������
   λ����UNION�ṹ:  SOC_VPP_VHDPDLASITHD_UNION */
#define SOC_VPP_VHDPDLASITHD_ADDR(base)               ((base) + (0x0428))

/* �Ĵ���˵����Pulldown��ֹ����ͳ�ƽ��
   λ����UNION�ṹ:  SOC_VPP_VHDPDFRMITDIFF_UNION */
#define SOC_VPP_VHDPDFRMITDIFF_ADDR(base)             ((base) + (0x042C))

/* �Ĵ���˵����Pulldown��ֹ����SADͳ�ƽ��
   λ����UNION�ṹ:  SOC_VPP_VHDPDSTLBLKSAD_UNION */
#define SOC_VPP_VHDPDSTLBLKSAD_ADDR(base)             ((base) + (0x0430��0x046C))

/* �Ĵ���˵����Pulldownֱ��ͼͳ�ƽ��
   λ����UNION�ṹ:  SOC_VPP_VHDPDHISTBIN_UNION */
#define SOC_VPP_VHDPDHISTBIN_ADDR(base)               ((base) + (0x0470��0x47C))

/* �Ĵ���˵����PullDown
   λ����UNION�ṹ:  SOC_VPP_VHDPDUMMATCH0_UNION */
#define SOC_VPP_VHDPDUMMATCH0_ADDR(base)              ((base) + (0x0480))

/* �Ĵ���˵����PullDown
   λ����UNION�ṹ:  SOC_VPP_VHDPDUMNOMATCH0_UNION */
#define SOC_VPP_VHDPDUMNOMATCH0_ADDR(base)            ((base) + (0x0484))

/* �Ĵ���˵����PullDown
   λ����UNION�ṹ:  SOC_VPP_VHDPDUMMATCH1_UNION */
#define SOC_VPP_VHDPDUMMATCH1_ADDR(base)              ((base) + (0x0488))

/* �Ĵ���˵����PullDown
   λ����UNION�ṹ:  SOC_VPP_VHDPDUMNOMATCH1_UNION */
#define SOC_VPP_VHDPDUMNOMATCH1_ADDR(base)            ((base) + (0x048C))

/* �Ĵ���˵����PullDown
   λ����UNION�ṹ:  SOC_VPP_VHDPDPCCFFWD_UNION */
#define SOC_VPP_VHDPDPCCFFWD_ADDR(base)               ((base) + (0x0490))

/* �Ĵ���˵����PullDown
   λ����UNION�ṹ:  SOC_VPP_VHDPDPCCFWD_UNION */
#define SOC_VPP_VHDPDPCCFWD_ADDR(base)                ((base) + (0x0494))

/* �Ĵ���˵����PullDown
   λ����UNION�ṹ:  SOC_VPP_VHDPDPCCBWD_UNION */
#define SOC_VPP_VHDPDPCCBWD_ADDR(base)                ((base) + (0x0498))

/* �Ĵ���˵����PullDown
   λ����UNION�ṹ:  SOC_VPP_VHDPDPCCCRSS_UNION */
#define SOC_VPP_VHDPDPCCCRSS_ADDR(base)               ((base) + (0x49C))

/* �Ĵ���˵����PullDown
   λ����UNION�ṹ:  SOC_VPP_VHDPDPCCPW_UNION */
#define SOC_VPP_VHDPDPCCPW_ADDR(base)                 ((base) + (0x4A0))

/* �Ĵ���˵����PullDown
   λ����UNION�ṹ:  SOC_VPP_VHDPDPCCFWDTKR_UNION */
#define SOC_VPP_VHDPDPCCFWDTKR_ADDR(base)             ((base) + (0x4A4))

/* �Ĵ���˵����PullDown
   λ����UNION�ṹ:  SOC_VPP_VHDPDPCCBWDTKR_UNION */
#define SOC_VPP_VHDPDPCCBWDTKR_ADDR(base)             ((base) + (0x4A8))

/* �Ĵ���˵����PullDown
   λ����UNION�ṹ:  SOC_VPP_VHDPDPCCBLKFWD_UNION */
#define SOC_VPP_VHDPDPCCBLKFWD_ADDR(base)             ((base) + (0x04AC��0x4CC))

/* �Ĵ���˵����PullDown
   λ����UNION�ṹ:  SOC_VPP_VHDPDPCCBLKBWD_UNION */
#define SOC_VPP_VHDPDPCCBLKBWD_ADDR(base)             ((base) + (0x04D0��0x4F0))

/* �Ĵ���˵����PullDown
   λ����UNION�ṹ:  SOC_VPP_VHDPDLASICNT14_UNION */
#define SOC_VPP_VHDPDLASICNT14_ADDR(base)             ((base) + (0x4F4))

/* �Ĵ���˵����PullDown
   λ����UNION�ṹ:  SOC_VPP_VHDPDLASICNT32_UNION */
#define SOC_VPP_VHDPDLASICNT32_ADDR(base)             ((base) + (0x4F8))

/* �Ĵ���˵����PullDown
   λ����UNION�ṹ:  SOC_VPP_VHDPDLASICNT34_UNION */
#define SOC_VPP_VHDPDLASICNT34_ADDR(base)             ((base) + (0x4FC))

/* �Ĵ���˵����VHDˮƽ���������˲�ϵ���Ĵ�����
            ÿ���˲���ϵ��Ϊ10bit���ɷ���λ��С��λ��ɣ����λΪ����λ����9bitΪС��λ�ľ���ֵ������ϵ�������Ƭ��Memory�У����Ĭ��ֵΪ����̬��
            VHDˮƽ���������˲�Ϊ8��32��λ�����ڶԳƹ�ϵ�����洢17��ϵ������0��16��λ��8��ϵ����ÿ���Ĵ�����ַ����2��10����ϵ�������һ����λ��8��ϵ����Ҫ4��32���ؼĴ�����ַ��
   λ����UNION�ṹ:  SOC_VPP_VHDHLCOEF_UNION */
#define SOC_VPP_VHDHLCOEF_ADDR(base)                  ((base) + (0x2000��0x210C))

/* �Ĵ���˵����VHDˮƽɫ�������˲�ϵ���Ĵ������洢��ʽ�ο�VHDHLCOEF��VHDˮƽɫ�������˲�Ϊ4��32��λ�����ڶԳƹ�ϵ�����洢17��ϵ������0��16��λ��4��ϵ����ÿ���Ĵ�����ַ����2��10����ϵ�������һ����λ��4��ϵ����Ҫ2��32���ؼĴ�����ַ��
   λ����UNION�ṹ:  SOC_VPP_VHDHCCOEF_UNION */
#define SOC_VPP_VHDHCCOEF_ADDR(base)                  ((base) + (0x2200��0x2284))

/* �Ĵ���˵����VHD��ֱ���������˲�ϵ���Ĵ������洢��ʽ�ο�VHDHLCOEF��VHD��ֱ���������˲�Ϊ6��32��λ�����ڶԳƹ�ϵ�����洢17��ϵ������0��16��λ��4��ϵ����ÿ���Ĵ�����ַ����2��10����ϵ����һ����λ��6��ϵ����Ҫ4��32���ؼĴ�����ַ��
   λ����UNION�ṹ:  SOC_VPP_VHDVLCOEF_UNION */
#define SOC_VPP_VHDVLCOEF_ADDR(base)                  ((base) + (0x2400��0x250C))

/* �Ĵ���˵����VHD��ֱɫ�������˲�ϵ���Ĵ������洢��ʽ�ο�VHDHLCOEF��VHD��ֱɫ�������˲�Ϊ4��32��λ�����ڶԳƹ�ϵ�����洢17��ϵ������0��16��λ��4��ϵ����ÿ���Ĵ�����ַ����2��10����ϵ�������һ����λ��4��ϵ����Ҫ2��32���ؼĴ�����ַ��
   λ����UNION�ṹ:  SOC_VPP_VHDVCCOEF_UNION */
#define SOC_VPP_VHDVCCOEF_ADDR(base)                  ((base) + (0x2600��0x2684))





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
 �ṹ��    : SOC_VPP_VOCTRL_UNION
 �ṹ˵��  : VOCTRL �Ĵ����ṹ���塣��ַƫ����:0x0000����ֵ:0x00000000�����:32
 �Ĵ���˵��: VPP���ƼĴ�����surface���������ٲ�ģʽ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved_0  : 4;  /* bit[0-3]  : ������ */
        unsigned int  outstd_rid1 : 4;  /* bit[4-7]  : AXI���߶�ID1��outstanding�� */
        unsigned int  outstd_rid0 : 4;  /* bit[8-11] : AXI���߶�ID0��outstanding�� */
        unsigned int  vo_id_sel   : 1;  /* bit[12]   : VPP VHD IDѡ��
                                                       0��VHDѡ��ʵʱģʽID�ţ�0����&#13;1��VHDѡ������ģʽID�ţ�1���� */
        unsigned int  reserved_1  : 3;  /* bit[13-15]: ������ */
        unsigned int  outstd_wid0 : 4;  /* bit[16-19]: AXI����дID0��outstanding */
        unsigned int  bus_dbg_en  : 2;  /* bit[20-21]: ���߲���ʹ��
                                                       00��������������ģʽ��
                                                       &#13;01�����߲��Զ�д���ع���ģʽ��&#13;10�����߲���д���ع�����
                                                       &#13;������������ */
        unsigned int  reserved_2  : 9;  /* bit[22-30]: ������ */
        unsigned int  vo_ck_gt_en : 1;  /* bit[31]   : VPPʱ���ſ�ʹ�ܣ�
                                                       0��ʱ���ſعر�
                                                       1��VPP���ڲ�ʱ���ſش� */
    } reg;
} SOC_VPP_VOCTRL_UNION;
#endif
#define SOC_VPP_VOCTRL_outstd_rid1_START  (4)
#define SOC_VPP_VOCTRL_outstd_rid1_END    (7)
#define SOC_VPP_VOCTRL_outstd_rid0_START  (8)
#define SOC_VPP_VOCTRL_outstd_rid0_END    (11)
#define SOC_VPP_VOCTRL_vo_id_sel_START    (12)
#define SOC_VPP_VOCTRL_vo_id_sel_END      (12)
#define SOC_VPP_VOCTRL_outstd_wid0_START  (16)
#define SOC_VPP_VOCTRL_outstd_wid0_END    (19)
#define SOC_VPP_VOCTRL_bus_dbg_en_START   (20)
#define SOC_VPP_VOCTRL_bus_dbg_en_END     (21)
#define SOC_VPP_VOCTRL_vo_ck_gt_en_START  (31)
#define SOC_VPP_VOCTRL_vo_ck_gt_en_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VOINTSTA_UNION
 �ṹ˵��  : VOINTSTA �Ĵ����ṹ���塣��ַƫ����:0x0004����ֵ:0x00000000�����:32
 �Ĵ���˵��: VPP�ж�״̬��ֻ���Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved_0   : 9;  /* bit[0-8]  : ������ */
        unsigned int  vte_int      : 1;  /* bit[9]    : VHD��������жϡ�WBC1��������ж� */
        unsigned int  reserved_1   : 2;  /* bit[10-11]: ������ */
        unsigned int  lnk_tend_int : 1;  /* bit[12]   : ������������ж� */
        unsigned int  reserved_2   : 9;  /* bit[13-21]: ������ */
        unsigned int  vhdrr_int    : 1;  /* bit[22]   : VHD�Ĵ��������жϡ� */
        unsigned int  reserved_3   : 8;  /* bit[23-30]: ������ */
        unsigned int  be_int       : 1;  /* bit[31]   : ���ߴ����жϡ���AXI_Master�� */
    } reg;
} SOC_VPP_VOINTSTA_UNION;
#endif
#define SOC_VPP_VOINTSTA_vte_int_START       (9)
#define SOC_VPP_VOINTSTA_vte_int_END         (9)
#define SOC_VPP_VOINTSTA_lnk_tend_int_START  (12)
#define SOC_VPP_VOINTSTA_lnk_tend_int_END    (12)
#define SOC_VPP_VOINTSTA_vhdrr_int_START     (22)
#define SOC_VPP_VOINTSTA_vhdrr_int_END       (22)
#define SOC_VPP_VOINTSTA_be_int_START        (31)
#define SOC_VPP_VOINTSTA_be_int_END          (31)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VOMSKINTSTA_UNION
 �ṹ˵��  : VOMSKINTSTA �Ĵ����ṹ���塣��ַƫ����:0x0008����ֵ:0x00000000�����:32
 �Ĵ���˵��: VPP����Mask���ж�״̬�Ĵ�����д1���㡣
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved_0   : 9;  /* bit[0-8]  : ������ */
        unsigned int  vte_int      : 1;  /* bit[9]    : VHD��������жϡ� */
        unsigned int  reserved_1   : 2;  /* bit[10-11]: ������ */
        unsigned int  lnk_tend_int : 1;  /* bit[12]   : ������������ж� */
        unsigned int  reserved_2   : 9;  /* bit[13-21]: ������ */
        unsigned int  vhdrr_int    : 1;  /* bit[22]   : VHD�Ĵ��������жϡ� */
        unsigned int  reserved_3   : 8;  /* bit[23-30]: ������ */
        unsigned int  be_int       : 1;  /* bit[31]   : ���ߴ����жϡ���AXI_Master�� */
    } reg;
} SOC_VPP_VOMSKINTSTA_UNION;
#endif
#define SOC_VPP_VOMSKINTSTA_vte_int_START       (9)
#define SOC_VPP_VOMSKINTSTA_vte_int_END         (9)
#define SOC_VPP_VOMSKINTSTA_lnk_tend_int_START  (12)
#define SOC_VPP_VOMSKINTSTA_lnk_tend_int_END    (12)
#define SOC_VPP_VOMSKINTSTA_vhdrr_int_START     (22)
#define SOC_VPP_VOMSKINTSTA_vhdrr_int_END       (22)
#define SOC_VPP_VOMSKINTSTA_be_int_START        (31)
#define SOC_VPP_VOMSKINTSTA_be_int_END          (31)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VOINTMSK_UNION
 �ṹ˵��  : VOINTMSK �Ĵ����ṹ���塣��ַƫ����:0x000C����ֵ:0x00000000�����:32
 �Ĵ���˵��: VPP�ж����μĴ�������VOINTSTA��Ӧ����Ӧ����Ϊ1��ʾ�жϴ򿪣�Ϊ0��ʾ�ж����Ρ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved_0      : 9;  /* bit[0-8]  : ������ */
        unsigned int  vte_intmsk      : 1;  /* bit[9]    : VHD��������жϡ� */
        unsigned int  reserved_1      : 2;  /* bit[10-11]: ������ */
        unsigned int  lnk_tend_intmsk : 1;  /* bit[12]   : ������������ж� */
        unsigned int  reserved_2      : 9;  /* bit[13-21]: ������ */
        unsigned int  vhdrr_intmsk    : 1;  /* bit[22]   : VHD�Ĵ��������жϡ� */
        unsigned int  reserved_3      : 8;  /* bit[23-30]: ������ */
        unsigned int  be_intmsk       : 1;  /* bit[31]   : ���ߴ����жϡ���AXI_Master�� */
    } reg;
} SOC_VPP_VOINTMSK_UNION;
#endif
#define SOC_VPP_VOINTMSK_vte_intmsk_START       (9)
#define SOC_VPP_VOINTMSK_vte_intmsk_END         (9)
#define SOC_VPP_VOINTMSK_lnk_tend_intmsk_START  (12)
#define SOC_VPP_VOINTMSK_lnk_tend_intmsk_END    (12)
#define SOC_VPP_VOINTMSK_vhdrr_intmsk_START     (22)
#define SOC_VPP_VOINTMSK_vhdrr_intmsk_END       (22)
#define SOC_VPP_VOINTMSK_be_intmsk_START        (31)
#define SOC_VPP_VOINTMSK_be_intmsk_END          (31)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VOUVERSION1_UNION
 �ṹ˵��  : VOUVERSION1 �Ĵ����ṹ���塣��ַƫ����:0x0010����ֵ:0x76756F76�����:32
 �Ĵ���˵��: VPP�汾�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  vouversion0 : 32; /* bit[0-31]: VPP�汾�Ĵ����� */
    } reg;
} SOC_VPP_VOUVERSION1_UNION;
#endif
#define SOC_VPP_VOUVERSION1_vouversion0_START  (0)
#define SOC_VPP_VOUVERSION1_vouversion0_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VOUVERSION2_UNION
 �ṹ˵��  : VOUVERSION2 �Ĵ����ṹ���塣��ַƫ����:0x0014����ֵ:0x30303134�����:32
 �Ĵ���˵��: VPP�汾�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  vouversion1 : 32; /* bit[0-31]: VPP�汾�Ĵ����� */
    } reg;
} SOC_VPP_VOUVERSION2_UNION;
#endif
#define SOC_VPP_VOUVERSION2_vouversion1_START  (0)
#define SOC_VPP_VOUVERSION2_vouversion1_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VODEBUG_UNION
 �ṹ˵��  : VODEBUG �Ĵ����ṹ���塣��ַƫ����:0x0020����ֵ:0x00000000�����:32
 �Ĵ���˵��: ����������֤����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  rm_en_chn    : 4;  /* bit[0-3]  :  */
        unsigned int  dhd_ff_info  : 2;  /* bit[4-5]  :  */
        unsigned int  dsd_ff_info  : 2;  /* bit[6-7]  :  */
        unsigned int  wbc0_ff_info : 2;  /* bit[8-9]  :  */
        unsigned int  wbc1_ff_info : 2;  /* bit[10-11]:  */
        unsigned int  wbc2_ff_info : 2;  /* bit[12-13]:  */
        unsigned int  wbc_mode     : 4;  /* bit[14-17]:  */
        unsigned int  node_num     : 6;  /* bit[18-23]: ����֮�䴫�ݽڵ���� */
        unsigned int  reserved     : 8;  /* bit[24-31]:  */
    } reg;
} SOC_VPP_VODEBUG_UNION;
#endif
#define SOC_VPP_VODEBUG_rm_en_chn_START     (0)
#define SOC_VPP_VODEBUG_rm_en_chn_END       (3)
#define SOC_VPP_VODEBUG_dhd_ff_info_START   (4)
#define SOC_VPP_VODEBUG_dhd_ff_info_END     (5)
#define SOC_VPP_VODEBUG_dsd_ff_info_START   (6)
#define SOC_VPP_VODEBUG_dsd_ff_info_END     (7)
#define SOC_VPP_VODEBUG_wbc0_ff_info_START  (8)
#define SOC_VPP_VODEBUG_wbc0_ff_info_END    (9)
#define SOC_VPP_VODEBUG_wbc1_ff_info_START  (10)
#define SOC_VPP_VODEBUG_wbc1_ff_info_END    (11)
#define SOC_VPP_VODEBUG_wbc2_ff_info_START  (12)
#define SOC_VPP_VODEBUG_wbc2_ff_info_END    (13)
#define SOC_VPP_VODEBUG_wbc_mode_START      (14)
#define SOC_VPP_VODEBUG_wbc_mode_END        (17)
#define SOC_VPP_VODEBUG_node_num_START      (18)
#define SOC_VPP_VODEBUG_node_num_END        (23)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VOLNKLSTCTRL_UNION
 �ṹ˵��  : VOLNKLSTCTRL �Ĵ����ṹ���塣��ַƫ����:0x0024����ֵ:0x00000000�����:32
 �Ĵ���˵��: VPP������ƼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  lnk_fst_num      : 8;  /* bit[0-7]  : ��ʾ����ĵ�һ���ڵ����Ҫ���µ�WORD�������磬��Ҫ����10���Ĵ�������Ҫ4��WORD������1��WORD����һ���ڵ���Ϣ��ռ��һ��WORD����������5��WORD������ֵΪʵ��ֵ��1 */
        unsigned int  lnk_fst_node_num : 10; /* bit[8-17] : ����ĵ�һ���ڵ�Ľڵ�� */
        unsigned int  reserved         : 13; /* bit[18-30]:  */
        unsigned int  lnk_en           : 1;  /* bit[31]   : ����ʹ�ܣ���ʱ�Ĵ���
                                                            0����ֹ
                                                            1��ʹ�� */
    } reg;
} SOC_VPP_VOLNKLSTCTRL_UNION;
#endif
#define SOC_VPP_VOLNKLSTCTRL_lnk_fst_num_START       (0)
#define SOC_VPP_VOLNKLSTCTRL_lnk_fst_num_END         (7)
#define SOC_VPP_VOLNKLSTCTRL_lnk_fst_node_num_START  (8)
#define SOC_VPP_VOLNKLSTCTRL_lnk_fst_node_num_END    (17)
#define SOC_VPP_VOLNKLSTCTRL_lnk_en_START            (31)
#define SOC_VPP_VOLNKLSTCTRL_lnk_en_END              (31)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VOLNKLSTADDR_UNION
 �ṹ˵��  : VOLNKLSTADDR �Ĵ����ṹ���塣��ַƫ����:0x0028����ֵ:0x00000000�����:32
 �Ĵ���˵��: VPP�����׵�ַ�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  lnk_addr : 32; /* bit[0-31]: �����׵�ַbyteΪ��λ��word���� */
    } reg;
} SOC_VPP_VOLNKLSTADDR_UNION;
#endif
#define SOC_VPP_VOLNKLSTADDR_lnk_addr_START  (0)
#define SOC_VPP_VOLNKLSTADDR_lnk_addr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VOLNKLSTSTRT_UNION
 �ṹ˵��  : VOLNKLSTSTRT �Ĵ����ṹ���塣��ַƫ����:0x002C����ֵ:0x00000000�����:32
 �Ĵ���˵��: VPP����ʼ�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved  : 31; /* bit[0-30]: ������ */
        unsigned int  lnk_start : 1;  /* bit[31]  : ����ʼ
                                                    0����ֹ
                                                    1��ʹ�� */
    } reg;
} SOC_VPP_VOLNKLSTSTRT_UNION;
#endif
#define SOC_VPP_VOLNKLSTSTRT_lnk_start_START  (31)
#define SOC_VPP_VOLNKLSTSTRT_lnk_start_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VOLNKLSTPENDINGSTA_UNION
 �ṹ˵��  : VOLNKLSTPENDINGSTA �Ĵ����ṹ���塣��ַƫ����:0x0030����ֵ:0x00000000�����:32
 �Ĵ���˵��: VPP����pending״̬�Ĵ���1
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  addr_pendig : 32; /* bit[0-31]: �����Pending�ڵ���׵�ַ��
                                                      ֻ�� */
    } reg;
} SOC_VPP_VOLNKLSTPENDINGSTA_UNION;
#endif
#define SOC_VPP_VOLNKLSTPENDINGSTA_addr_pendig_START  (0)
#define SOC_VPP_VOLNKLSTPENDINGSTA_addr_pendig_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VOLNKLSTWORKINGSTA_UNION
 �ṹ˵��  : VOLNKLSTWORKINGSTA �Ĵ����ṹ���塣��ַƫ����:0x0034����ֵ:0x00000000�����:32
 �Ĵ���˵��: VPP����Working״̬�Ĵ���1
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  addr_working : 32; /* bit[0-31]: ��������ڹ����Ľڵ���׵�ַ��
                                                       ֻ�� */
    } reg;
} SOC_VPP_VOLNKLSTWORKINGSTA_UNION;
#endif
#define SOC_VPP_VOLNKLSTWORKINGSTA_addr_working_START  (0)
#define SOC_VPP_VOLNKLSTWORKINGSTA_addr_working_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VOLNKLSTENDSTA_UNION
 �ṹ˵��  : VOLNKLSTENDSTA �Ĵ����ṹ���塣��ַƫ����:0x0038����ֵ:0x00000000�����:32
 �Ĵ���˵��: VPP����end״̬�Ĵ���1
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  addr_end : 32; /* bit[0-31]: ����ĸչ�����ɽڵ���׵�ַ��
                                                   ֻ�� */
    } reg;
} SOC_VPP_VOLNKLSTENDSTA_UNION;
#endif
#define SOC_VPP_VOLNKLSTENDSTA_addr_end_START  (0)
#define SOC_VPP_VOLNKLSTENDSTA_addr_end_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VOLNKLSTNUMSTA_UNION
 �ṹ˵��  : VOLNKLSTNUMSTA �Ĵ����ṹ���塣��ַƫ����:0x003C����ֵ:0x00000000�����:32
 �Ĵ���˵��: VPP����ڵ��״̬�Ĵ����Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  node_num_pending : 8;  /* bit[0-7]  : ��һ��Ҫִ�е�����Ľڵ�� */
        unsigned int  node_num_working : 8;  /* bit[8-15] : ���ڹ���������Ľڵ�� */
        unsigned int  node_num_end     : 8;  /* bit[16-23]: ���������ɵĽڵ�� */
        unsigned int  reserved         : 8;  /* bit[24-31]: ������ */
    } reg;
} SOC_VPP_VOLNKLSTNUMSTA_UNION;
#endif
#define SOC_VPP_VOLNKLSTNUMSTA_node_num_pending_START  (0)
#define SOC_VPP_VOLNKLSTNUMSTA_node_num_pending_END    (7)
#define SOC_VPP_VOLNKLSTNUMSTA_node_num_working_START  (8)
#define SOC_VPP_VOLNKLSTNUMSTA_node_num_working_END    (15)
#define SOC_VPP_VOLNKLSTNUMSTA_node_num_end_START      (16)
#define SOC_VPP_VOLNKLSTNUMSTA_node_num_end_END        (23)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VOPARAUP_UNION
 �ṹ˵��  : VOPARAUP �Ĵ����ṹ���塣��ַƫ����:0x0040����ֵ:0x00000000�����:32
 �Ĵ���˵��: ����ϵ����LUT��صļĴ�������ʹ�ܼĴ�����VPP������ϵ����ͨ��AXI Master���õģ����ͨ��Slave������ʼ��ַ�Ͳ�����Ҫ���µı�־��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  vhd_hcoef_upd : 1;  /* bit[0]   : VHDˮƽ���ȡ�ˮƽɫ���˲�ϵ���Ƿ���Ҫ���¡�Ӳ�����º��Զ����㡣
                                                        0�������£�&#13;1�����¡� */
        unsigned int  vhd_vcoef_upd : 1;  /* bit[1]   : VHD��ֱ���ȡ���ֱɫ���˲�ϵ���Ƿ���Ҫ���¡�Ӳ�����º��Զ����㡣
                                                        0�������£�&#13;1�����¡� */
        unsigned int  reserved_0    : 2;  /* bit[2-3] : ������ */
        unsigned int  video_acc_upd : 1;  /* bit[4]   : Video�� ACC������ұ��Ƿ���Ҫ���¡�Ӳ�����º��Զ����㡣
                                                        0�������£�&#13;1�����¡� */
        unsigned int  reserved_1    : 27; /* bit[5-31]: ������ */
    } reg;
} SOC_VPP_VOPARAUP_UNION;
#endif
#define SOC_VPP_VOPARAUP_vhd_hcoef_upd_START  (0)
#define SOC_VPP_VOPARAUP_vhd_hcoef_upd_END    (0)
#define SOC_VPP_VOPARAUP_vhd_vcoef_upd_START  (1)
#define SOC_VPP_VOPARAUP_vhd_vcoef_upd_END    (1)
#define SOC_VPP_VOPARAUP_video_acc_upd_START  (4)
#define SOC_VPP_VOPARAUP_video_acc_upd_END    (4)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDHCOEFAD_UNION
 �ṹ˵��  : VHDHCOEFAD �Ĵ����ṹ���塣��ַƫ����:0x0044����ֵ:0x00000000�����:32
 �Ĵ���˵��: VHDˮƽ���ȡ�ˮƽɫ���˲�ϵ����ַ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  coef_addr : 32; /* bit[0-31]: ϵ������Local Memory����ʼ��ַ�� */
    } reg;
} SOC_VPP_VHDHCOEFAD_UNION;
#endif
#define SOC_VPP_VHDHCOEFAD_coef_addr_START  (0)
#define SOC_VPP_VHDHCOEFAD_coef_addr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDVCOEFAD_UNION
 �ṹ˵��  : VHDVCOEFAD �Ĵ����ṹ���塣��ַƫ����:0x0048����ֵ:0x00000000�����:32
 �Ĵ���˵��: VHD��ֱ���ȡ�ˮƽɫ���˲�ϵ����ַ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  coef_addr : 32; /* bit[0-31]: ϵ������Local Memory����ʼ��ַ�� */
    } reg;
} SOC_VPP_VHDVCOEFAD_UNION;
#endif
#define SOC_VPP_VHDVCOEFAD_coef_addr_START  (0)
#define SOC_VPP_VHDVCOEFAD_coef_addr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VADHCOEFAD_UNION
 �ṹ˵��  : VADHCOEFAD �Ĵ����ṹ���塣��ַƫ����:0x004C����ֵ:0x00000000�����:32
 �Ĵ���˵��: VADˮƽ���ȡ�ˮƽɫ���˲�ϵ����ַ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  coef_addr : 32; /* bit[0-31]: ϵ������Local Memory����ʼ��ַ�� */
    } reg;
} SOC_VPP_VADHCOEFAD_UNION;
#endif
#define SOC_VPP_VADHCOEFAD_coef_addr_START  (0)
#define SOC_VPP_VADHCOEFAD_coef_addr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VADVCOEFAD_UNION
 �ṹ˵��  : VADVCOEFAD �Ĵ����ṹ���塣��ַƫ����:0x0050����ֵ:0x00000000�����:32
 �Ĵ���˵��: VAD��ֱ���ȡ�ˮƽɫ���˲�ϵ����ַ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  coef_addr : 32; /* bit[0-31]: ϵ������Local Memory����ʼ��ַ�� */
    } reg;
} SOC_VPP_VADVCOEFAD_UNION;
#endif
#define SOC_VPP_VADVCOEFAD_coef_addr_START  (0)
#define SOC_VPP_VADVCOEFAD_coef_addr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_VPP_ACCAD_UNION
 �ṹ˵��  : ACCAD �Ĵ����ṹ���塣��ַƫ����:0x0054����ֵ:0x00000000�����:32
 �Ĵ���˵��: videoͨ��ACCϵ�����ұ��ַ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  coef_addr : 32; /* bit[0-31]: ϵ������Local Memory����ʼ��ַ�� */
    } reg;
} SOC_VPP_ACCAD_UNION;
#endif
#define SOC_VPP_ACCAD_coef_addr_START  (0)
#define SOC_VPP_ACCAD_coef_addr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDCTRL_UNION
 �ṹ˵��  : VHDCTRL �Ĵ����ṹ���塣��ַƫ����:0x0100����ֵ:0x00000000�����:32
 �Ĵ���˵��: �üĴ����������ò�������Ϣ��Ϊ�Ǽ�ʱ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ifmt          : 4;  /* bit[0-3]  : �������ݸ�ʽ��
                                                         0x1��SPYCbCr400��
                                                         &#13;0x2��������
                                                         0x3��SPYCbCr420��
                                                         &#13;0x4��SPYCbCr422��
                                                         &#13;0x5��SPYCbCr444��
                                                         0x9��PackageUYVY(Cb0Y0Cr0Y1)������VDC_HD��֧�֣���
                                                         0xA��PackageYUYV(Y0Cb0Y1Cr0)������VDC_HD��֧�֣���
                                                         0xB��PackageYVYU(Y0Cr0Y1Cb0)������VDC_HD��֧�֣��� */
        unsigned int  time_out      : 4;  /* bit[4-7]  :  */
        unsigned int  reserved_0    : 4;  /* bit[8-11] : ������ */
        unsigned int  chm_rmode     : 2;  /* bit[12-13]: ɫ������ж�ȡģʽ��
                                                         00��������&#13;01�����ж�ȡ֡buffer���ݣ�&#13;10�����ж�ȡʱ�����붥����dieʹ��ʱ��ʾΪ��ǰ������&#13;11�����ж�ȡʱ������׳���dieʹ��ʱ��ʾΪ��ǰ������ */
        unsigned int  lm_rmode      : 2;  /* bit[14-15]: ��������ж�ȡģʽ��
                                                         00��������&#13;01�����ж�ȡ֡buffer���ݣ�&#13;10�����ж�ȡʱ�����붥����dieʹ��ʱ��ʾΪ��ǰ������&#13;11�����ж�ȡʱ������׳���dieʹ��ʱ��ʾΪ��ǰ������ */
        unsigned int  bfield_first  : 1;  /* bit[16]   : �׳����ȣ�T��Top Field��B��Bottom Field) ��
                                                         0���������ȣ�T0B0T1B1...��T0B0Ϊһ֡����
                                                         1���׳����ȣ�B0T0B1T0...��B0T0Ϊһ֡���� */
        unsigned int  vup_mode      : 1;  /* bit[17]   : VHDϵ������ģʽ��
                                                         0��֡���£�
                                                         1�������£� */
        unsigned int  ifir_mode     : 2;  /* bit[18-19]: ˮƽɫ��IFIRģʽ��
                                                         00��������
                                                         01��ɫ��IFIR����ģʽ��
                                                         &#13;10��˫���Բ�ֵ��
                                                         11��6��FIR�� */
        unsigned int  reserved_1    : 3;  /* bit[20-22]: ������ */
        unsigned int  vhd_sta_wr_en : 1;  /* bit[23]   : vhd��ͳ����Ϣ(die and acc)��дDDRʹ�ܿ���
                                                         0����ֹ
                                                         1��ʹ�� */
        unsigned int  ofl_btm       : 1;  /* bit[24]   : VHD����ʱ��WBC1��VHD��������ȡ���ϸ������ʱ�Ķ��׳���Ϣ��
                                                         0����ʾ������&#13;1����ʾ�׳��� */
        unsigned int  ofl_inter     : 1;  /* bit[25]   : VHD����ʱ��WBC1��VHD��������ȡ�����������Ϣ��
                                                         0����ʾ���У�&#13;1����ʾ���С� */
        unsigned int  wbc1_int_en   : 1;  /* bit[26]   : WBC1�жϲ���ʹ�ܿ��� */
        unsigned int  wbc1_en       : 1;  /* bit[27]   : VHD�Ļ�дʹ�ܣ��Ǽ�ʱ�Ĵ�����
                                                         0����ֹ��&#13;1��ʹ�ܡ� */
        unsigned int  mute_en       : 1;  /* bit[28]   : VHD��muteʹ�ܣ��Ǽ�ʱ�Ĵ�����
                                                         0����ֹ��&#13;1��ʹ�ܡ� */
        unsigned int  reserved_2    : 1;  /* bit[29]   : ������ */
        unsigned int  resource_sel  : 1;  /* bit[30]   : VHD�����WBC0��ͨ��ģʽ���á�
                                                         0������ģʽ������ʾʱ��ͬ������ &#13;1������ģʽ������ʾʱ���޹أ���&#13;ע����bitΪ��ʹ�Ĵ����������øı�üĴ���ʱ��Ӧ����WBC��VHD���رպ�ſ��ԡ�&#13;VSD�Ĵ���ʱ��&#13;VSD���������ӿ��ƣ�dfp_zme����&#13;0��VSD���������ӵ�VSD�ϣ�&#13;1��VSD���������ӵ�WBC0�ϡ� */
        unsigned int  surface_en    : 1;  /* bit[31]   : surfaceʹ�ܡ��Ǽ�ʱ�Ĵ�����
                                                         0����ֹ��&#13;1��ʹ�ܡ� */
    } reg;
} SOC_VPP_VHDCTRL_UNION;
#endif
#define SOC_VPP_VHDCTRL_ifmt_START           (0)
#define SOC_VPP_VHDCTRL_ifmt_END             (3)
#define SOC_VPP_VHDCTRL_time_out_START       (4)
#define SOC_VPP_VHDCTRL_time_out_END         (7)
#define SOC_VPP_VHDCTRL_chm_rmode_START      (12)
#define SOC_VPP_VHDCTRL_chm_rmode_END        (13)
#define SOC_VPP_VHDCTRL_lm_rmode_START       (14)
#define SOC_VPP_VHDCTRL_lm_rmode_END         (15)
#define SOC_VPP_VHDCTRL_bfield_first_START   (16)
#define SOC_VPP_VHDCTRL_bfield_first_END     (16)
#define SOC_VPP_VHDCTRL_vup_mode_START       (17)
#define SOC_VPP_VHDCTRL_vup_mode_END         (17)
#define SOC_VPP_VHDCTRL_ifir_mode_START      (18)
#define SOC_VPP_VHDCTRL_ifir_mode_END        (19)
#define SOC_VPP_VHDCTRL_vhd_sta_wr_en_START  (23)
#define SOC_VPP_VHDCTRL_vhd_sta_wr_en_END    (23)
#define SOC_VPP_VHDCTRL_ofl_btm_START        (24)
#define SOC_VPP_VHDCTRL_ofl_btm_END          (24)
#define SOC_VPP_VHDCTRL_ofl_inter_START      (25)
#define SOC_VPP_VHDCTRL_ofl_inter_END        (25)
#define SOC_VPP_VHDCTRL_wbc1_int_en_START    (26)
#define SOC_VPP_VHDCTRL_wbc1_int_en_END      (26)
#define SOC_VPP_VHDCTRL_wbc1_en_START        (27)
#define SOC_VPP_VHDCTRL_wbc1_en_END          (27)
#define SOC_VPP_VHDCTRL_mute_en_START        (28)
#define SOC_VPP_VHDCTRL_mute_en_END          (28)
#define SOC_VPP_VHDCTRL_resource_sel_START   (30)
#define SOC_VPP_VHDCTRL_resource_sel_END     (30)
#define SOC_VPP_VHDCTRL_surface_en_START     (31)
#define SOC_VPP_VHDCTRL_surface_en_END       (31)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDUPD_UNION
 �ṹ˵��  : VHDUPD �Ĵ����ṹ���塣��ַƫ����:0x0104����ֵ:0x00000000�����:32
 �Ĵ���˵��: VHDͨ������ʹ�ܼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  regup    : 1;  /* bit[0]   : surface�ļĴ������¡������������ò�Ĵ�����д1���£�������ɺ�Ӳ���Զ����㡣 */
        unsigned int  reserved : 31; /* bit[1-31]: ������ */
    } reg;
} SOC_VPP_VHDUPD_UNION;
#endif
#define SOC_VPP_VHDUPD_regup_START     (0)
#define SOC_VPP_VHDUPD_regup_END       (0)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDLADDR_UNION
 �ṹ˵��  : VHDLADDR �Ĵ����ṹ���塣��ַƫ����:0x0108����ֵ:0x00000000�����:32
 �Ĵ���˵��: ��һ֡�ĵ�ַ�Ĵ���������deinterace������package���ظ�ʽ����֡buffer��ַ������semi-planar���ظ�ʽ������֡buffer��ַ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  surface_laddr : 32; /* bit[0-31]: DIE��һ֡�ĵ�ַ�� */
    } reg;
} SOC_VPP_VHDLADDR_UNION;
#endif
#define SOC_VPP_VHDLADDR_surface_laddr_START  (0)
#define SOC_VPP_VHDLADDR_surface_laddr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDLCADDR_UNION
 �ṹ˵��  : VHDLCADDR �Ĵ����ṹ���塣��ַƫ����:0x010C����ֵ:0x00000000�����:32
 �Ĵ���˵��: ��һ֡��ɫ�ȵ�ַ�Ĵ���������deinterace������package���ظ�ʽ�õ�ַ��Ч������semi-planar���ظ�ʽ��ɫ��֡buffer��ַ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  surface_lcaddr : 32; /* bit[0-31]: DIE��һ֡��ɫ�ȵ�ַ�� */
    } reg;
} SOC_VPP_VHDLCADDR_UNION;
#endif
#define SOC_VPP_VHDLCADDR_surface_lcaddr_START  (0)
#define SOC_VPP_VHDLCADDR_surface_lcaddr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDCADDR_UNION
 �ṹ˵��  : VHDCADDR �Ĵ����ṹ���塣��ַƫ����:0x0110����ֵ:0x00000000�����:32
 �Ĵ���˵��: ��ǰ֡�ĵ�ַ�Ĵ���������package���ظ�ʽ����֡buffer��ַ������semi-planar���ظ�ʽ������֡buffer��ַ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  surface_caddr : 32; /* bit[0-31]: DIE��ǰ֡�ĵ�ַ�� */
    } reg;
} SOC_VPP_VHDCADDR_UNION;
#endif
#define SOC_VPP_VHDCADDR_surface_caddr_START  (0)
#define SOC_VPP_VHDCADDR_surface_caddr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDCCADDR_UNION
 �ṹ˵��  : VHDCCADDR �Ĵ����ṹ���塣��ַƫ����:0x0114����ֵ:0x00000000�����:32
 �Ĵ���˵��: ��ǰ֡��ɫ�ȵ�ַ�Ĵ���������package���ظ�ʽ�õ�ַ��Ч������semi-planar���ظ�ʽ��ɫ��֡buffer��ַ��DIE��ǰ֡�ĵ�ַ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  surface_ccaddr : 32; /* bit[0-31]: DIE��ǰ֡��ɫ�ȵ�ַ�� */
    } reg;
} SOC_VPP_VHDCCADDR_UNION;
#endif
#define SOC_VPP_VHDCCADDR_surface_ccaddr_START  (0)
#define SOC_VPP_VHDCCADDR_surface_ccaddr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDNADDR_UNION
 �ṹ˵��  : VHDNADDR �Ĵ����ṹ���塣��ַƫ����:0x0118����ֵ:0x00000000�����:32
 �Ĵ���˵��: ��һ֡�ĵ�ַ�Ĵ���������deinterace������package���ظ�ʽ����֡buffer��ַ������semi-planar���ظ�ʽ������֡buffer��ַ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  surface_naddr : 32; /* bit[0-31]: DIE��һ֡�ĵ�ַ�� */
    } reg;
} SOC_VPP_VHDNADDR_UNION;
#endif
#define SOC_VPP_VHDNADDR_surface_naddr_START  (0)
#define SOC_VPP_VHDNADDR_surface_naddr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDNCADDR_UNION
 �ṹ˵��  : VHDNCADDR �Ĵ����ṹ���塣��ַƫ����:0x011C����ֵ:0x00000000�����:32
 �Ĵ���˵��: ��һ֡��ɫ�ȵ�ַ�Ĵ���������deinterace������package���ظ�ʽ�õ�ַ��Ч������semi-planar���ظ�ʽ��ɫ��֡buffer��ַ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  surface_ncaddr : 32; /* bit[0-31]: DIE��һ֡��ɫ�ȵ�ַ�� */
    } reg;
} SOC_VPP_VHDNCADDR_UNION;
#endif
#define SOC_VPP_VHDNCADDR_surface_ncaddr_START  (0)
#define SOC_VPP_VHDNCADDR_surface_ncaddr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDSTRIDE_UNION
 �ṹ˵��  : VHDSTRIDE �Ĵ����ṹ���塣��ַƫ����:0x0124����ֵ:0x00000000�����:32
 �Ĵ���˵��: surface��stride�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  surface_stride  : 16; /* bit[0-15] : ֡buffer��stride��������semi-planaer��ʽ��ָ���ȵ�stride����word��Ϊ��λ�� */
        unsigned int  surface_cstride : 16; /* bit[16-31]: ɫ��֡buffer��stride������semi-planaer��ʽ���ã���word��Ϊ��λ�� */
    } reg;
} SOC_VPP_VHDSTRIDE_UNION;
#endif
#define SOC_VPP_VHDSTRIDE_surface_stride_START   (0)
#define SOC_VPP_VHDSTRIDE_surface_stride_END     (15)
#define SOC_VPP_VHDSTRIDE_surface_cstride_START  (16)
#define SOC_VPP_VHDSTRIDE_surface_cstride_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDIRESO_UNION
 �ṹ˵��  : VHDIRESO �Ĵ����ṹ���塣��ַƫ����:0x0128����ֵ:0x00000000�����:32
 �Ĵ���˵��: ����ֱ��ʼĴ�����Ϊ�Ǽ�ʱ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  iw       : 12; /* bit[0-11] : ��ȣ����ص�λ��ʵ�ʿ�ȼ�1�� */
        unsigned int  ih       : 12; /* bit[12-23]: �߶ȣ���Ϊ��λ��ʵ�ʸ߶ȼ�1��
                                                    ��֡�߶�Ϊ�ο�������Ϊ��λ�� */
        unsigned int  reserved : 8;  /* bit[24-31]: ������ */
    } reg;
} SOC_VPP_VHDIRESO_UNION;
#endif
#define SOC_VPP_VHDIRESO_iw_START        (0)
#define SOC_VPP_VHDIRESO_iw_END          (11)
#define SOC_VPP_VHDIRESO_ih_START        (12)
#define SOC_VPP_VHDIRESO_ih_END          (23)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDDIEADDR_UNION
 �ṹ˵��  : VHDDIEADDR �Ĵ����ṹ���塣��ַƫ����:0x0138����ֵ:0x00000000�����:32
 �Ĵ���˵��: de-interlace��ʷ��Ϣbuffer��ַ��Ϊ�Ǽ�ʱ�Ĵ�����VDC_SDû�иüĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  dieaddr : 32; /* bit[0-31]: de-interlace��ʷ��Ϣbuffer��ַ�� */
    } reg;
} SOC_VPP_VHDDIEADDR_UNION;
#endif
#define SOC_VPP_VHDDIEADDR_dieaddr_START  (0)
#define SOC_VPP_VHDDIEADDR_dieaddr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDWBC1ADDR_UNION
 �ṹ˵��  : VHDWBC1ADDR �Ĵ����ṹ���塣��ַƫ����:0x013C����ֵ:0x00000000�����:32
 �Ĵ���˵��: VHD�����ݻ�дbuffer��ַ��Ϊ�Ǽ�ʱ�Ĵ�����VDC_SDû�иüĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  wbc1addr : 32; /* bit[0-31]: VHD�����ݻ�дbuffer��ַ�� */
    } reg;
} SOC_VPP_VHDWBC1ADDR_UNION;
#endif
#define SOC_VPP_VHDWBC1ADDR_wbc1addr_START  (0)
#define SOC_VPP_VHDWBC1ADDR_wbc1addr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDWBC1STRD_UNION
 �ṹ˵��  : VHDWBC1STRD �Ĵ����ṹ���塣��ַƫ����:0x0140����ֵ:0x00000000�����:32
 �Ĵ���˵��: VHD�����ݻ�д�м�࣬Ϊ�Ǽ�ʱ�Ĵ�����VDC_SDû�иüĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  wbc1strd     : 16; /* bit[0-15] : VHD�����ݻ�д�м�ࡣ */
        unsigned int  req_interval : 10; /* bit[16-25]: WBC0����������С�������ʾ��n�������������n+1������֮��ļ����req_interval��ʱ�����ڡ� */
        unsigned int  reserved     : 4;  /* bit[26-29]: ������ */
        unsigned int  wbc1_dft     : 2;  /* bit[30-31]: WBC1��������ݸ�ʽ��
                                                        00��PackageUYVY(Cb0Y0Cr0Y1)��&#13;01��PackageYUYV(Y0Cb0Y1Cr0)��&#13;10��PackageYVYU(Y0Cr0Y1Cb0)��&#13;˳��Ϊ0��31�� */
    } reg;
} SOC_VPP_VHDWBC1STRD_UNION;
#endif
#define SOC_VPP_VHDWBC1STRD_wbc1strd_START      (0)
#define SOC_VPP_VHDWBC1STRD_wbc1strd_END        (15)
#define SOC_VPP_VHDWBC1STRD_req_interval_START  (16)
#define SOC_VPP_VHDWBC1STRD_req_interval_END    (25)
#define SOC_VPP_VHDWBC1STRD_wbc1_dft_START      (30)
#define SOC_VPP_VHDWBC1STRD_wbc1_dft_END        (31)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDDIESTADDR_UNION
 �ṹ˵��  : VHDDIESTADDR �Ĵ����ṹ���塣��ַƫ����:0x0144����ֵ:0x00000000�����:32
 �Ĵ���˵��: de-interlace��ͳ����Ϣ��д��ַ��Ϊ�Ǽ�ʱ�Ĵ�����VDC_SDû�иüĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  diestaddr : 32; /* bit[0-31]: de-interlace��ʷ��Ϣbuffer��ַ�� */
    } reg;
} SOC_VPP_VHDDIESTADDR_UNION;
#endif
#define SOC_VPP_VHDDIESTADDR_diestaddr_START  (0)
#define SOC_VPP_VHDDIESTADDR_diestaddr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDVFPOS_UNION
 �ṹ˵��  : VHDVFPOS �Ĵ����ṹ���塣��ַƫ����:0x0168����ֵ:0x00000000�����:32
 �Ĵ���˵��: Surface��ʵ��������ʾ���ڵ���ʼλ�ã�First POSition����������Ϊ��λ���Ǽ�ʱ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  video_xfpos : 12; /* bit[0-11] : ��Ƶ��������ʼ���ꡣ */
        unsigned int  video_yfpos : 12; /* bit[12-23]: ��Ƶ��������ʼ���ꡣ
                                                       ��֡�߶�Ϊ�ο�������Ϊ��λ�� */
        unsigned int  reserved    : 8;  /* bit[24-31]: ������ */
    } reg;
} SOC_VPP_VHDVFPOS_UNION;
#endif
#define SOC_VPP_VHDVFPOS_video_xfpos_START  (0)
#define SOC_VPP_VHDVFPOS_video_xfpos_END    (11)
#define SOC_VPP_VHDVFPOS_video_yfpos_START  (12)
#define SOC_VPP_VHDVFPOS_video_yfpos_END    (23)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDVLPOS_UNION
 �ṹ˵��  : VHDVLPOS �Ĵ����ṹ���塣��ַƫ����:0x016C����ֵ:0x00000000�����:32
 �Ĵ���˵��: Surface��ʵ��������ʾ���ڵĽ���λ�ã�Last POSition����������Ϊ��λ���Ǽ�ʱ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  video_xlpos : 12; /* bit[0-11] : ��Ƶ�����н������ꡣ */
        unsigned int  video_ylpos : 12; /* bit[12-23]: ��Ƶ�����н������ꡣ
                                                       ��֡�߶�Ϊ�ο�������Ϊ��λ�� */
        unsigned int  reserved    : 8;  /* bit[24-31]: ������ */
    } reg;
} SOC_VPP_VHDVLPOS_UNION;
#endif
#define SOC_VPP_VHDVLPOS_video_xlpos_START  (0)
#define SOC_VPP_VHDVLPOS_video_xlpos_END    (11)
#define SOC_VPP_VHDVLPOS_video_ylpos_START  (12)
#define SOC_VPP_VHDVLPOS_video_ylpos_END    (23)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDBK_UNION
 �ṹ˵��  : VHDBK �Ĵ����ṹ���塣��ַƫ����:0x0170����ֵ:0x00000000�����:32
 �Ĵ���˵��: ��Ƶ��ı���ɫ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  vbk_cr    : 8;  /* bit[0-7]  : Cr������ */
        unsigned int  vbk_cb    : 8;  /* bit[8-15] : Cb������ */
        unsigned int  vbk_y     : 8;  /* bit[16-23]: Y������ */
        unsigned int  vbk_alpha : 8;  /* bit[24-31]: ��Ƶ��ı������ɫ0��128���� */
    } reg;
} SOC_VPP_VHDBK_UNION;
#endif
#define SOC_VPP_VHDBK_vbk_cr_START     (0)
#define SOC_VPP_VHDBK_vbk_cr_END       (7)
#define SOC_VPP_VHDBK_vbk_cb_START     (8)
#define SOC_VPP_VHDBK_vbk_cb_END       (15)
#define SOC_VPP_VHDBK_vbk_y_START      (16)
#define SOC_VPP_VHDBK_vbk_y_END        (23)
#define SOC_VPP_VHDBK_vbk_alpha_START  (24)
#define SOC_VPP_VHDBK_vbk_alpha_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDCSCIDC_UNION
 �ṹ˵��  : VHDCSCIDC �Ĵ����ṹ���塣��ַƫ����:0x0180����ֵ:0x00000000�����:32
 �Ĵ���˵��: ɫ�ʿռ�ת������ֱ�������Ĵ�����Ϊ��ʱ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cscidc0  : 9;  /* bit[0-8]  : �������0ֱ��������MSBΪ����λ�������ʾ�� */
        unsigned int  cscidc1  : 9;  /* bit[9-17] : �������1ֱ��������MSBΪ����λ�������ʾ�� */
        unsigned int  cscidc2  : 9;  /* bit[18-26]: �������2ֱ��������MSBΪ����λ�������ʾ�� */
        unsigned int  csc_en   : 1;  /* bit[27]   : CSCʹ�ܿ����źš�
                                                    0��CSC��ʹ�ܣ�&#13;1��CSCʹ�ܡ� */
        unsigned int  reserved : 4;  /* bit[28-31]: ������ */
    } reg;
} SOC_VPP_VHDCSCIDC_UNION;
#endif
#define SOC_VPP_VHDCSCIDC_cscidc0_START   (0)
#define SOC_VPP_VHDCSCIDC_cscidc0_END     (8)
#define SOC_VPP_VHDCSCIDC_cscidc1_START   (9)
#define SOC_VPP_VHDCSCIDC_cscidc1_END     (17)
#define SOC_VPP_VHDCSCIDC_cscidc2_START   (18)
#define SOC_VPP_VHDCSCIDC_cscidc2_END     (26)
#define SOC_VPP_VHDCSCIDC_csc_en_START    (27)
#define SOC_VPP_VHDCSCIDC_csc_en_END      (27)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDCSCODC_UNION
 �ṹ˵��  : VHDCSCODC �Ĵ����ṹ���塣��ַƫ����:0x0184����ֵ:0x00000000�����:32
 �Ĵ���˵��: ɫ�ʿռ�ת�����ֱ�������Ĵ�����Ϊ��ʱ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cscodc0  : 9;  /* bit[0-8]  : �������0ֱ��������MSBΪ����λ�������ʾ�� */
        unsigned int  cscodc1  : 9;  /* bit[9-17] : �������1ֱ��������MSBΪ����λ�������ʾ�� */
        unsigned int  cscodc2  : 9;  /* bit[18-26]: �������2ֱ��������MSBΪ����λ�������ʾ�� */
        unsigned int  reserved : 5;  /* bit[27-31]: ������ */
    } reg;
} SOC_VPP_VHDCSCODC_UNION;
#endif
#define SOC_VPP_VHDCSCODC_cscodc0_START   (0)
#define SOC_VPP_VHDCSCODC_cscodc0_END     (8)
#define SOC_VPP_VHDCSCODC_cscodc1_START   (9)
#define SOC_VPP_VHDCSCODC_cscodc1_END     (17)
#define SOC_VPP_VHDCSCODC_cscodc2_START   (18)
#define SOC_VPP_VHDCSCODC_cscodc2_END     (26)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDCSCP0_UNION
 �ṹ˵��  : VHDCSCP0 �Ĵ����ṹ���塣��ַƫ����:0x0188����ֵ:0x00000000�����:32
 �Ĵ���˵��: ɫ�ʿռ�ת������0��Ϊ��ʱ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cscp00   : 13; /* bit[0-12] : 5.8���ݸ�ʽ��1bit����λ��4bit����λ��8bitС��λ�������ʾ�� */
        unsigned int  reserved_0: 3;  /* bit[13-15]: ������ */
        unsigned int  cscp01   : 13; /* bit[16-28]: 5.8���ݸ�ʽ��1bit����λ��4bit����λ��8bitС��λ�������ʾ�� */
        unsigned int  reserved_1: 3;  /* bit[29-31]: ������ */
    } reg;
} SOC_VPP_VHDCSCP0_UNION;
#endif
#define SOC_VPP_VHDCSCP0_cscp00_START    (0)
#define SOC_VPP_VHDCSCP0_cscp00_END      (12)
#define SOC_VPP_VHDCSCP0_cscp01_START    (16)
#define SOC_VPP_VHDCSCP0_cscp01_END      (28)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDCSCP1_UNION
 �ṹ˵��  : VHDCSCP1 �Ĵ����ṹ���塣��ַƫ����:0x018C����ֵ:0x00000000�����:32
 �Ĵ���˵��: ɫ�ʿռ�ת������1��Ϊ��ʱ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cscp02   : 13; /* bit[0-12] : 5.8���ݸ�ʽ��1bit����λ��4bit����λ��8bitС��λ�������ʾ�� */
        unsigned int  reserved_0: 3;  /* bit[13-15]: ������ */
        unsigned int  cscp10   : 13; /* bit[16-28]: 5.8���ݸ�ʽ��1bit����λ��4bit����λ��8bitС��λ�������ʾ�� */
        unsigned int  reserved_1: 3;  /* bit[29-31]: ������ */
    } reg;
} SOC_VPP_VHDCSCP1_UNION;
#endif
#define SOC_VPP_VHDCSCP1_cscp02_START    (0)
#define SOC_VPP_VHDCSCP1_cscp02_END      (12)
#define SOC_VPP_VHDCSCP1_cscp10_START    (16)
#define SOC_VPP_VHDCSCP1_cscp10_END      (28)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDCSCP2_UNION
 �ṹ˵��  : VHDCSCP2 �Ĵ����ṹ���塣��ַƫ����:0x0190����ֵ:0x00000000�����:32
 �Ĵ���˵��: ɫ�ʿռ�ת������2��Ϊ��ʱ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cscp11   : 13; /* bit[0-12] : 5.8���ݸ�ʽ��1bit����λ��4bit����λ��8bitС��λ�������ʾ�� */
        unsigned int  reserved_0: 3;  /* bit[13-15]: ������ */
        unsigned int  cscp12   : 13; /* bit[16-28]: 5.8���ݸ�ʽ��1bit����λ��4bit����λ��8bitС��λ�������ʾ�� */
        unsigned int  reserved_1: 3;  /* bit[29-31]: ������ */
    } reg;
} SOC_VPP_VHDCSCP2_UNION;
#endif
#define SOC_VPP_VHDCSCP2_cscp11_START    (0)
#define SOC_VPP_VHDCSCP2_cscp11_END      (12)
#define SOC_VPP_VHDCSCP2_cscp12_START    (16)
#define SOC_VPP_VHDCSCP2_cscp12_END      (28)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDCSCP3_UNION
 �ṹ˵��  : VHDCSCP3 �Ĵ����ṹ���塣��ַƫ����:0x0194����ֵ:0x00000000�����:32
 �Ĵ���˵��: ɫ�ʿռ�ת������3��Ϊ��ʱ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cscp20   : 13; /* bit[0-12] : 5.8���ݸ�ʽ��1bit����λ��4bit����λ��8bitС��λ�������ʾ�� */
        unsigned int  reserved_0: 3;  /* bit[13-15]: ������ */
        unsigned int  cscp21   : 13; /* bit[16-28]: 5.8���ݸ�ʽ��1bit����λ��4bit����λ��8bitС��λ�������ʾ�� */
        unsigned int  reserved_1: 3;  /* bit[29-31]: ������ */
    } reg;
} SOC_VPP_VHDCSCP3_UNION;
#endif
#define SOC_VPP_VHDCSCP3_cscp20_START    (0)
#define SOC_VPP_VHDCSCP3_cscp20_END      (12)
#define SOC_VPP_VHDCSCP3_cscp21_START    (16)
#define SOC_VPP_VHDCSCP3_cscp21_END      (28)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDCSCP4_UNION
 �ṹ˵��  : VHDCSCP4 �Ĵ����ṹ���塣��ַƫ����:0x0198����ֵ:0x00000000�����:32
 �Ĵ���˵��: ɫ�ʿռ�ת������4��Ϊ��ʱ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cscp22   : 13; /* bit[0-12] : 5.8���ݸ�ʽ��1bit����λ��4bit����λ��8bitС��λ�������ʾ�� */
        unsigned int  reserved : 19; /* bit[13-31]: ������ */
    } reg;
} SOC_VPP_VHDCSCP4_UNION;
#endif
#define SOC_VPP_VHDCSCP4_cscp22_START    (0)
#define SOC_VPP_VHDCSCP4_cscp22_END      (12)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDACM0_UNION
 �ṹ˵��  : VHDACM0 �Ĵ����ṹ���塣��ַƫ����:0x01A0����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACM�Ŀ��ƼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  acm_a_u_off : 5;  /* bit[0-4]  :  */
        unsigned int  acm_b_u_off : 5;  /* bit[5-9]  :  */
        unsigned int  acm_c_u_off : 5;  /* bit[10-14]:  */
        unsigned int  acm_d_u_off : 5;  /* bit[15-19]:  */
        unsigned int  acm_fir_blk : 4;  /* bit[20-23]:  */
        unsigned int  acm_sec_blk : 4;  /* bit[24-27]:  */
        unsigned int  acm0_en     : 1;  /* bit[28]   : acm 0 ʹ�ܡ� */
        unsigned int  acm1_en     : 1;  /* bit[29]   : acm 1 ʹ�ܡ� */
        unsigned int  acm2_en     : 1;  /* bit[30]   : acm 2 ʹ�ܡ� */
        unsigned int  acm3_en     : 1;  /* bit[31]   : acm 3 ʹ�ܡ� */
    } reg;
} SOC_VPP_VHDACM0_UNION;
#endif
#define SOC_VPP_VHDACM0_acm_a_u_off_START  (0)
#define SOC_VPP_VHDACM0_acm_a_u_off_END    (4)
#define SOC_VPP_VHDACM0_acm_b_u_off_START  (5)
#define SOC_VPP_VHDACM0_acm_b_u_off_END    (9)
#define SOC_VPP_VHDACM0_acm_c_u_off_START  (10)
#define SOC_VPP_VHDACM0_acm_c_u_off_END    (14)
#define SOC_VPP_VHDACM0_acm_d_u_off_START  (15)
#define SOC_VPP_VHDACM0_acm_d_u_off_END    (19)
#define SOC_VPP_VHDACM0_acm_fir_blk_START  (20)
#define SOC_VPP_VHDACM0_acm_fir_blk_END    (23)
#define SOC_VPP_VHDACM0_acm_sec_blk_START  (24)
#define SOC_VPP_VHDACM0_acm_sec_blk_END    (27)
#define SOC_VPP_VHDACM0_acm0_en_START      (28)
#define SOC_VPP_VHDACM0_acm0_en_END        (28)
#define SOC_VPP_VHDACM0_acm1_en_START      (29)
#define SOC_VPP_VHDACM0_acm1_en_END        (29)
#define SOC_VPP_VHDACM0_acm2_en_START      (30)
#define SOC_VPP_VHDACM0_acm2_en_END        (30)
#define SOC_VPP_VHDACM0_acm3_en_START      (31)
#define SOC_VPP_VHDACM0_acm3_en_END        (31)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDACM1_UNION
 �ṹ˵��  : VHDACM1 �Ĵ����ṹ���塣��ַƫ����:0x01A4����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACM�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  acm_a_v_off : 5;  /* bit[0-4]  :  */
        unsigned int  acm_b_v_off : 5;  /* bit[5-9]  :  */
        unsigned int  acm_c_v_off : 5;  /* bit[10-14]:  */
        unsigned int  acm_d_v_off : 5;  /* bit[15-19]:  */
        unsigned int  acm_test_en : 1;  /* bit[20]   : ACM�ԱȲ���ʹ�ܡ�
                                                       1����߲������ұ���ACM��&#13;0���������� */
        unsigned int  reserved    : 11; /* bit[21-31]: ������ */
    } reg;
} SOC_VPP_VHDACM1_UNION;
#endif
#define SOC_VPP_VHDACM1_acm_a_v_off_START  (0)
#define SOC_VPP_VHDACM1_acm_a_v_off_END    (4)
#define SOC_VPP_VHDACM1_acm_b_v_off_START  (5)
#define SOC_VPP_VHDACM1_acm_b_v_off_END    (9)
#define SOC_VPP_VHDACM1_acm_c_v_off_START  (10)
#define SOC_VPP_VHDACM1_acm_c_v_off_END    (14)
#define SOC_VPP_VHDACM1_acm_d_v_off_START  (15)
#define SOC_VPP_VHDACM1_acm_d_v_off_END    (19)
#define SOC_VPP_VHDACM1_acm_test_en_START  (20)
#define SOC_VPP_VHDACM1_acm_test_en_END    (20)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDACM2_UNION
 �ṹ˵��  : VHDACM2 �Ĵ����ṹ���塣��ַƫ����:0x01A8����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACM�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  acm_a_u_off : 5;  /* bit[0-4]  :  */
        unsigned int  acm_b_u_off : 5;  /* bit[5-9]  :  */
        unsigned int  acm_c_u_off : 5;  /* bit[10-14]:  */
        unsigned int  acm_d_u_off : 5;  /* bit[15-19]:  */
        unsigned int  acm_fir_blk : 4;  /* bit[20-23]:  */
        unsigned int  acm_sec_blk : 4;  /* bit[24-27]:  */
        unsigned int  reserved    : 4;  /* bit[28-31]: ������ */
    } reg;
} SOC_VPP_VHDACM2_UNION;
#endif
#define SOC_VPP_VHDACM2_acm_a_u_off_START  (0)
#define SOC_VPP_VHDACM2_acm_a_u_off_END    (4)
#define SOC_VPP_VHDACM2_acm_b_u_off_START  (5)
#define SOC_VPP_VHDACM2_acm_b_u_off_END    (9)
#define SOC_VPP_VHDACM2_acm_c_u_off_START  (10)
#define SOC_VPP_VHDACM2_acm_c_u_off_END    (14)
#define SOC_VPP_VHDACM2_acm_d_u_off_START  (15)
#define SOC_VPP_VHDACM2_acm_d_u_off_END    (19)
#define SOC_VPP_VHDACM2_acm_fir_blk_START  (20)
#define SOC_VPP_VHDACM2_acm_fir_blk_END    (23)
#define SOC_VPP_VHDACM2_acm_sec_blk_START  (24)
#define SOC_VPP_VHDACM2_acm_sec_blk_END    (27)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDACM3_UNION
 �ṹ˵��  : VHDACM3 �Ĵ����ṹ���塣��ַƫ����:0x01AC����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACM�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  acm_a_v_off : 5;  /* bit[0-4]  :  */
        unsigned int  acm_b_v_off : 5;  /* bit[5-9]  :  */
        unsigned int  acm_c_v_off : 5;  /* bit[10-14]:  */
        unsigned int  acm_d_v_off : 5;  /* bit[15-19]:  */
        unsigned int  reserved    : 12; /* bit[20-31]: ������ */
    } reg;
} SOC_VPP_VHDACM3_UNION;
#endif
#define SOC_VPP_VHDACM3_acm_a_v_off_START  (0)
#define SOC_VPP_VHDACM3_acm_a_v_off_END    (4)
#define SOC_VPP_VHDACM3_acm_b_v_off_START  (5)
#define SOC_VPP_VHDACM3_acm_b_v_off_END    (9)
#define SOC_VPP_VHDACM3_acm_c_v_off_START  (10)
#define SOC_VPP_VHDACM3_acm_c_v_off_END    (14)
#define SOC_VPP_VHDACM3_acm_d_v_off_START  (15)
#define SOC_VPP_VHDACM3_acm_d_v_off_END    (19)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDACM4_UNION
 �ṹ˵��  : VHDACM4 �Ĵ����ṹ���塣��ַƫ����:0x01B0����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACM�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  acm_a_u_off : 5;  /* bit[0-4]  :  */
        unsigned int  acm_b_u_off : 5;  /* bit[5-9]  :  */
        unsigned int  acm_c_u_off : 5;  /* bit[10-14]:  */
        unsigned int  acm_d_u_off : 5;  /* bit[15-19]:  */
        unsigned int  acm_fir_blk : 4;  /* bit[20-23]:  */
        unsigned int  acm_sec_blk : 4;  /* bit[24-27]:  */
        unsigned int  reserved    : 4;  /* bit[28-31]: ������ */
    } reg;
} SOC_VPP_VHDACM4_UNION;
#endif
#define SOC_VPP_VHDACM4_acm_a_u_off_START  (0)
#define SOC_VPP_VHDACM4_acm_a_u_off_END    (4)
#define SOC_VPP_VHDACM4_acm_b_u_off_START  (5)
#define SOC_VPP_VHDACM4_acm_b_u_off_END    (9)
#define SOC_VPP_VHDACM4_acm_c_u_off_START  (10)
#define SOC_VPP_VHDACM4_acm_c_u_off_END    (14)
#define SOC_VPP_VHDACM4_acm_d_u_off_START  (15)
#define SOC_VPP_VHDACM4_acm_d_u_off_END    (19)
#define SOC_VPP_VHDACM4_acm_fir_blk_START  (20)
#define SOC_VPP_VHDACM4_acm_fir_blk_END    (23)
#define SOC_VPP_VHDACM4_acm_sec_blk_START  (24)
#define SOC_VPP_VHDACM4_acm_sec_blk_END    (27)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDACM5_UNION
 �ṹ˵��  : VHDACM5 �Ĵ����ṹ���塣��ַƫ����:0x01B4����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACM�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  acm_a_v_off : 5;  /* bit[0-4]  :  */
        unsigned int  acm_b_v_off : 5;  /* bit[5-9]  :  */
        unsigned int  acm_c_v_off : 5;  /* bit[10-14]:  */
        unsigned int  acm_d_v_off : 5;  /* bit[15-19]:  */
        unsigned int  reserved    : 12; /* bit[20-31]: ������ */
    } reg;
} SOC_VPP_VHDACM5_UNION;
#endif
#define SOC_VPP_VHDACM5_acm_a_v_off_START  (0)
#define SOC_VPP_VHDACM5_acm_a_v_off_END    (4)
#define SOC_VPP_VHDACM5_acm_b_v_off_START  (5)
#define SOC_VPP_VHDACM5_acm_b_v_off_END    (9)
#define SOC_VPP_VHDACM5_acm_c_v_off_START  (10)
#define SOC_VPP_VHDACM5_acm_c_v_off_END    (14)
#define SOC_VPP_VHDACM5_acm_d_v_off_START  (15)
#define SOC_VPP_VHDACM5_acm_d_v_off_END    (19)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDACM6_UNION
 �ṹ˵��  : VHDACM6 �Ĵ����ṹ���塣��ַƫ����:0x01B8����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACM�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  acm_a_u_off : 5;  /* bit[0-4]  :  */
        unsigned int  acm_b_u_off : 5;  /* bit[5-9]  :  */
        unsigned int  acm_c_u_off : 5;  /* bit[10-14]:  */
        unsigned int  acm_d_u_off : 5;  /* bit[15-19]:  */
        unsigned int  acm_fir_blk : 4;  /* bit[20-23]:  */
        unsigned int  acm_sec_blk : 4;  /* bit[24-27]:  */
        unsigned int  reserved    : 4;  /* bit[28-31]: ������ */
    } reg;
} SOC_VPP_VHDACM6_UNION;
#endif
#define SOC_VPP_VHDACM6_acm_a_u_off_START  (0)
#define SOC_VPP_VHDACM6_acm_a_u_off_END    (4)
#define SOC_VPP_VHDACM6_acm_b_u_off_START  (5)
#define SOC_VPP_VHDACM6_acm_b_u_off_END    (9)
#define SOC_VPP_VHDACM6_acm_c_u_off_START  (10)
#define SOC_VPP_VHDACM6_acm_c_u_off_END    (14)
#define SOC_VPP_VHDACM6_acm_d_u_off_START  (15)
#define SOC_VPP_VHDACM6_acm_d_u_off_END    (19)
#define SOC_VPP_VHDACM6_acm_fir_blk_START  (20)
#define SOC_VPP_VHDACM6_acm_fir_blk_END    (23)
#define SOC_VPP_VHDACM6_acm_sec_blk_START  (24)
#define SOC_VPP_VHDACM6_acm_sec_blk_END    (27)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDACM7_UNION
 �ṹ˵��  : VHDACM7 �Ĵ����ṹ���塣��ַƫ����:0x01BC����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACM�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  acm_a_v_off : 5;  /* bit[0-4]  :  */
        unsigned int  acm_b_v_off : 5;  /* bit[5-9]  :  */
        unsigned int  acm_c_v_off : 5;  /* bit[10-14]:  */
        unsigned int  acm_d_v_off : 5;  /* bit[15-19]:  */
        unsigned int  reserved    : 12; /* bit[20-31]: ������ */
    } reg;
} SOC_VPP_VHDACM7_UNION;
#endif
#define SOC_VPP_VHDACM7_acm_a_v_off_START  (0)
#define SOC_VPP_VHDACM7_acm_a_v_off_END    (4)
#define SOC_VPP_VHDACM7_acm_b_v_off_START  (5)
#define SOC_VPP_VHDACM7_acm_b_v_off_END    (9)
#define SOC_VPP_VHDACM7_acm_c_v_off_START  (10)
#define SOC_VPP_VHDACM7_acm_c_v_off_END    (14)
#define SOC_VPP_VHDACM7_acm_d_v_off_START  (15)
#define SOC_VPP_VHDACM7_acm_d_v_off_END    (19)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDHSP_UNION
 �ṹ˵��  : VHDHSP �Ĵ����ṹ���塣��ַƫ����:0x01C0����ֵ:0x00000000�����:32
 �Ĵ���˵��: ˮƽ���Ų������ã�horizontal Scaling Parameter���Ĵ�����Ϊ�Ǽ�ʱ�Ĵ�����
            ���ű��ʣ�������/�����ȡ�
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
                                                      0��ˮƽ�����ڴ�ֱ����ǰ�棻&#13;1��ˮƽ�����ڴ�ֱ���ź��档 */
        unsigned int  reserved_1 : 3;  /* bit[20-22]: ������ */
        unsigned int  hchfir_en  : 1;  /* bit[23]   : ˮƽɫ������ģʽ��
                                                      0������ģʽ���˲���ʹ�ܣ���&#13;1���˲�ģʽ���˲�ʹ�ܣ��� */
        unsigned int  hlfir_en   : 1;  /* bit[24]   : ˮƽ��������ģʽ��
                                                      0������ģʽ���˲���ʹ�ܣ���&#13;1���˲�ģʽ���˲�ʹ�ܣ��� */
        unsigned int  reserved_2 : 3;  /* bit[25-27]: ������ */
        unsigned int  hchmid_en  : 1;  /* bit[28]   : ˮƽɫ��������ֵ�˲�ʹ�ܣ���hchfir_en��Чʱ���ñ��ز������ã���
                                                      0����ֹ��&#13;1��ʹ�ܡ� */
        unsigned int  hlmid_en   : 1;  /* bit[29]   : ˮƽ����������ֵ�˲�ʹ�ܣ���hlfir_en��Чʱ���ñ��ز������ã���
                                                      0����ֹ��&#13;1��ʹ�ܡ� */
        unsigned int  hchmsc_en  : 1;  /* bit[30]   : ˮƽɫ������ʹ�ܡ�
                                                      0����ֹ��&#13;1��ʹ�ܡ� */
        unsigned int  hlmsc_en   : 1;  /* bit[31]   : ˮƽ��������ʹ�ܡ�
                                                      0����ֹ��&#13;1��ʹ�ܡ� */
    } reg;
} SOC_VPP_VHDHSP_UNION;
#endif
#define SOC_VPP_VHDHSP_hratio_START      (0)
#define SOC_VPP_VHDHSP_hratio_END        (15)
#define SOC_VPP_VHDHSP_hfir_order_START  (19)
#define SOC_VPP_VHDHSP_hfir_order_END    (19)
#define SOC_VPP_VHDHSP_hchfir_en_START   (23)
#define SOC_VPP_VHDHSP_hchfir_en_END     (23)
#define SOC_VPP_VHDHSP_hlfir_en_START    (24)
#define SOC_VPP_VHDHSP_hlfir_en_END      (24)
#define SOC_VPP_VHDHSP_hchmid_en_START   (28)
#define SOC_VPP_VHDHSP_hchmid_en_END     (28)
#define SOC_VPP_VHDHSP_hlmid_en_START    (29)
#define SOC_VPP_VHDHSP_hlmid_en_END      (29)
#define SOC_VPP_VHDHSP_hchmsc_en_START   (30)
#define SOC_VPP_VHDHSP_hchmsc_en_END     (30)
#define SOC_VPP_VHDHSP_hlmsc_en_START    (31)
#define SOC_VPP_VHDHSP_hlmsc_en_END      (31)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDHLOFFSET_UNION
 �ṹ˵��  : VHDHLOFFSET �Ĵ����ṹ���塣��ַƫ����:0x01C4����ֵ:0x00000000�����:32
 �Ĵ���˵��: ����ˮƽλ��ƫ�ƼĴ���������pan-scan��Ϊ�Ǽ�ʱ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  hor_loffset : 17; /* bit[0-16] : ˮƽ����λ��ƫ�ƣ�(s,5,12)��ʽ�������ʾ�� */
        unsigned int  reserved    : 15; /* bit[17-31]: ������ */
    } reg;
} SOC_VPP_VHDHLOFFSET_UNION;
#endif
#define SOC_VPP_VHDHLOFFSET_hor_loffset_START  (0)
#define SOC_VPP_VHDHLOFFSET_hor_loffset_END    (16)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDHCOFFSET_UNION
 �ṹ˵��  : VHDHCOFFSET �Ĵ����ṹ���塣��ַƫ����:0x01C8����ֵ:0x00000000�����:32
 �Ĵ���˵��: ɫ��ˮƽλ��ƫ�ƼĴ���������pan-scan��Ϊ�Ǽ�ʱ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  hor_coffset : 17; /* bit[0-16] : ˮƽɫ��λ��ƫ�ƣ�(s,5,12)��ʽ�������ʾ�� */
        unsigned int  reserved    : 15; /* bit[17-31]: ������ */
    } reg;
} SOC_VPP_VHDHCOFFSET_UNION;
#endif
#define SOC_VPP_VHDHCOFFSET_hor_coffset_START  (0)
#define SOC_VPP_VHDHCOFFSET_hor_coffset_END    (16)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDVSP_UNION
 �ṹ˵��  : VHDVSP �Ĵ����ṹ���塣��ַƫ����:0x01D8����ֵ:0x00000000�����:32
 �Ĵ���˵��: ���Ų��� (vertical Scaling Parameter)�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved       : 23; /* bit[0-22]: ������ */
        unsigned int  vchfir_en      : 1;  /* bit[23]  : ��ֱɫ������ģʽ��
                                                         0������ģʽ���˲���ʹ�ܣ���&#13;1���˲�ģʽ���˲�ʹ�ܣ��� */
        unsigned int  vlfir_en       : 1;  /* bit[24]  : ��ֱ��������ģʽ��
                                                         0������ģʽ���˲���ʹ�ܣ���&#13;1���˲�ģʽ���˲�ʹ�ܣ��� */
        unsigned int  chroma_type    : 1;  /* bit[25]  : ���Ⱥ�ɫ���ڴ�ֱ����ı�����
                                                         0��422��&#13;1��420�� */
        unsigned int  vsc_chroma_tap : 1;  /* bit[26]  : ��ֱɫ�����Ž�����
                                                         0��4��FIR��&#13;1��2��FIR�� */
        unsigned int  vsc_luma_tap   : 1;  /* bit[27]  : ��ֱ�������Ž�����
                                                         0��4��FIR��&#13;1��2��FIR�� */
        unsigned int  vchmid_en      : 1;  /* bit[28]  : ��ֱɫ��������ֵ�˲�ʹ�ܣ���vchfir_en��Чʱ���ñ��ز������ã���
                                                         0����ֹ��&#13;1��ʹ�ܡ� */
        unsigned int  vlmid_en       : 1;  /* bit[29]  : ��ֱ����������ֵ�˲�ʹ�ܣ���vlfir_en��Чʱ���ñ��ز������ã���
                                                         0����ֹ��&#13;1��ʹ�ܡ� */
        unsigned int  vchmsc_en      : 1;  /* bit[30]  : ��ֱɫ������ʹ�ܡ�
                                                         0����ֹ��&#13;1��ʹ�ܡ� */
        unsigned int  vlmsc_en       : 1;  /* bit[31]  : ��ֱ��������ʹ�ܡ�
                                                         0����ֹ��&#13;1��ʹ�ܡ� */
    } reg;
} SOC_VPP_VHDVSP_UNION;
#endif
#define SOC_VPP_VHDVSP_vchfir_en_START       (23)
#define SOC_VPP_VHDVSP_vchfir_en_END         (23)
#define SOC_VPP_VHDVSP_vlfir_en_START        (24)
#define SOC_VPP_VHDVSP_vlfir_en_END          (24)
#define SOC_VPP_VHDVSP_chroma_type_START     (25)
#define SOC_VPP_VHDVSP_chroma_type_END       (25)
#define SOC_VPP_VHDVSP_vsc_chroma_tap_START  (26)
#define SOC_VPP_VHDVSP_vsc_chroma_tap_END    (26)
#define SOC_VPP_VHDVSP_vsc_luma_tap_START    (27)
#define SOC_VPP_VHDVSP_vsc_luma_tap_END      (27)
#define SOC_VPP_VHDVSP_vchmid_en_START       (28)
#define SOC_VPP_VHDVSP_vchmid_en_END         (28)
#define SOC_VPP_VHDVSP_vlmid_en_START        (29)
#define SOC_VPP_VHDVSP_vlmid_en_END          (29)
#define SOC_VPP_VHDVSP_vchmsc_en_START       (30)
#define SOC_VPP_VHDVSP_vchmsc_en_END         (30)
#define SOC_VPP_VHDVSP_vlmsc_en_START        (31)
#define SOC_VPP_VHDVSP_vlmsc_en_END          (31)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDVSR_UNION
 �ṹ˵��  : VHDVSR �Ĵ����ṹ���塣��ַƫ����:0x01DC����ֵ:0x00001000�����:32
 �Ĵ���˵��: ��ֱ���ű��� (Luma Vertical Scaling Ratio)�Ĵ��������ű��ʣ�����߶�/����߶ȡ�Ϊ�Ǽ�ʱ�Ĵ�����
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
} SOC_VPP_VHDVSR_UNION;
#endif
#define SOC_VPP_VHDVSR_vratio_START    (0)
#define SOC_VPP_VHDVSR_vratio_END      (15)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDVOFFSET_UNION
 �ṹ˵��  : VHDVOFFSET �Ĵ����ṹ���塣��ַƫ����:0x01E0����ֵ:0x00000000�����:32
 �Ĵ���˵��: ��ֱ����ƫ�ƣ�Vertical Luma Offset���Ĵ�������ֱ����ƫ������������Ӱ�죺pan-scan���ظ�֡ʱ�ĳ�ƫ�ơ���û�г�ƫ��ʱ��vluma_offsetΪoffset_pan-scan���������λ+С��λ����YCbCr422��ʽʱvchroma_offset��vluma_offset��ȣ���YCbCr420��ʽʱ��vchroma_offset = scaling_chroma/2-0.25������Ҫ��ƫ��ʱ���羲֡�����ظ�֡���������ظ��׳����򶥳����õ�vluma_offset��vchroma_offset��������ƫ��ʱ��ͬ���׳�������Ҫ���ǳ�ƫ�ơ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  vchroma_offset : 16; /* bit[0-15] : ��ֱɫ��ƫ�ƣ������ʾ��(s,4,12)��ʽ�� */
        unsigned int  vluma_offset   : 16; /* bit[16-31]: ��ֱ����ƫ�ƣ������ʾ��(s,4,12)��ʽ�� */
    } reg;
} SOC_VPP_VHDVOFFSET_UNION;
#endif
#define SOC_VPP_VHDVOFFSET_vchroma_offset_START  (0)
#define SOC_VPP_VHDVOFFSET_vchroma_offset_END    (15)
#define SOC_VPP_VHDVOFFSET_vluma_offset_START    (16)
#define SOC_VPP_VHDVOFFSET_vluma_offset_END      (31)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDZMEORESO_UNION
 �ṹ˵��  : VHDZMEORESO �Ĵ����ṹ���塣��ַƫ����:0x01E4����ֵ:0x00000000�����:32
 �Ĵ���˵��: ���ŵ�Ԫ������ֱ��ʼĴ�����Ϊ�Ǽ�ʱ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ow       : 12; /* bit[0-11] : ��ȣ����ص�λ��ʵ�ʿ�ȼ�1��
                                                    ע�⣺���ʵ�ʿ�ȱ�����ż���� */
        unsigned int  oh       : 12; /* bit[12-23]: �߶ȣ���Ϊ��λ��ʵ�ʸ߶ȼ�1��
                                                    ����ʱ����֡�߶�Ϊ�ο�������Ϊ��λ��&#13;����ʱ���Գ��߶�Ϊ�ο�������Ϊ��λ�� */
        unsigned int  reserved : 8;  /* bit[24-31]: ������ */
    } reg;
} SOC_VPP_VHDZMEORESO_UNION;
#endif
#define SOC_VPP_VHDZMEORESO_ow_START        (0)
#define SOC_VPP_VHDZMEORESO_ow_END          (11)
#define SOC_VPP_VHDZMEORESO_oh_START        (12)
#define SOC_VPP_VHDZMEORESO_oh_END          (23)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDZMEIRESO_UNION
 �ṹ˵��  : VHDZMEIRESO �Ĵ����ṹ���塣��ַƫ����:0x01E8����ֵ:0x00000000�����:32
 �Ĵ���˵��: ���ŵ�Ԫ���������ʼĴ�����Ϊ�Ǽ�ʱ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  iw       : 12; /* bit[0-11] : ��ȣ����ص�λ��ʵ�ʿ�ȼ�1��
                                                    ע�⣺���ʵ�ʿ�ȱ�����ż���� */
        unsigned int  ih       : 12; /* bit[12-23]: �߶ȣ���Ϊ��λ��ʵ�ʸ߶ȼ�1��
                                                    ����ʱ����֡�߶�Ϊ�ο�������Ϊ��λ��&#13;����ʱ���Գ��߶�Ϊ�ο�������Ϊ��λ�� */
        unsigned int  reserved : 8;  /* bit[24-31]: ������ */
    } reg;
} SOC_VPP_VHDZMEIRESO_UNION;
#endif
#define SOC_VPP_VHDZMEIRESO_iw_START        (0)
#define SOC_VPP_VHDZMEIRESO_iw_END          (11)
#define SOC_VPP_VHDZMEIRESO_ih_START        (12)
#define SOC_VPP_VHDZMEIRESO_ih_END          (23)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDACCTHD1_UNION
 �ṹ˵��  : VHDACCTHD1 �Ĵ����ṹ���塣��ַƫ����:0x0200����ֵ:0x00000000�����:32
 �Ĵ���˵��: VHDͨ�� ACC��������1
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  thd_low     : 10; /* bit[0-9]  : ���ȵȼ�low����ֵ */
        unsigned int  thd_high    : 10; /* bit[10-19]: ���ȵȼ�high����ֵ�� */
        unsigned int  thd_med_low : 10; /* bit[20-29]: ���ȵȼ�med_low����ֵ�� */
        unsigned int  acc_mode    : 1;  /* bit[30]   : ���ACCУ��ģʽ����ʱ�Ĵ�����
                                                       0��ACC����Ӳ��������
                                                       1��ACC����������á� */
        unsigned int  acc_en      : 1;  /* bit[31]   : accʹ�ܡ��Ǽ�ʱ�Ĵ�����
                                                       0����ֹ��
                                                       1��ʹ�ܡ� */
    } reg;
} SOC_VPP_VHDACCTHD1_UNION;
#endif
#define SOC_VPP_VHDACCTHD1_thd_low_START      (0)
#define SOC_VPP_VHDACCTHD1_thd_low_END        (9)
#define SOC_VPP_VHDACCTHD1_thd_high_START     (10)
#define SOC_VPP_VHDACCTHD1_thd_high_END       (19)
#define SOC_VPP_VHDACCTHD1_thd_med_low_START  (20)
#define SOC_VPP_VHDACCTHD1_thd_med_low_END    (29)
#define SOC_VPP_VHDACCTHD1_acc_mode_START     (30)
#define SOC_VPP_VHDACCTHD1_acc_mode_END       (30)
#define SOC_VPP_VHDACCTHD1_acc_en_START       (31)
#define SOC_VPP_VHDACCTHD1_acc_en_END         (31)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDACCTHD2_UNION
 �ṹ˵��  : VHDACCTHD2 �Ĵ����ṹ���塣��ַƫ����:0x0204����ֵ:0x00000000�����:32
 �Ĵ���˵��: VHDͨ�� ACC��������2
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  thd_med_high : 10; /* bit[0-9]  : ���ȵȼ�med_high����ֵ */
        unsigned int  acc_multiple : 8;  /* bit[10-17]: ACC������� */
        unsigned int  acc_rst      : 1;  /* bit[18]   : ACC��λ�Ĵ��� */
        unsigned int  reserved     : 13; /* bit[19-31]: ������ */
    } reg;
} SOC_VPP_VHDACCTHD2_UNION;
#endif
#define SOC_VPP_VHDACCTHD2_thd_med_high_START  (0)
#define SOC_VPP_VHDACCTHD2_thd_med_high_END    (9)
#define SOC_VPP_VHDACCTHD2_acc_multiple_START  (10)
#define SOC_VPP_VHDACCTHD2_acc_multiple_END    (17)
#define SOC_VPP_VHDACCTHD2_acc_rst_START       (18)
#define SOC_VPP_VHDACCTHD2_acc_rst_END         (18)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDACCLOWN_UNION
 �ṹ˵��  : VHDACCLOWN �Ĵ����ṹ���塣��ַƫ����:0x0210��0x0218����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACC���ұ����ȵȼ�Ϊlow��n=1~3
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  table_data1n : 10; /* bit[0-9]  : ACC���ȵȼ�low�Ĳ��ұ�����1 */
        unsigned int  table_data2n : 10; /* bit[10-19]: ACC���ȵȼ�low�Ĳ��ұ�����2 */
        unsigned int  table_data3n : 10; /* bit[20-29]: ACC���ȵȼ�low�Ĳ��ұ�����3 */
        unsigned int  reserved     : 2;  /* bit[30-31]: ������ */
    } reg;
} SOC_VPP_VHDACCLOWN_UNION;
#endif
#define SOC_VPP_VHDACCLOWN_table_data1n_START  (0)
#define SOC_VPP_VHDACCLOWN_table_data1n_END    (9)
#define SOC_VPP_VHDACCLOWN_table_data2n_START  (10)
#define SOC_VPP_VHDACCLOWN_table_data2n_END    (19)
#define SOC_VPP_VHDACCLOWN_table_data3n_START  (20)
#define SOC_VPP_VHDACCLOWN_table_data3n_END    (29)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDACCMEDN_UNION
 �ṹ˵��  : VHDACCMEDN �Ĵ����ṹ���塣��ַƫ����:0x0220��0x0228����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACC���ұ����ȵȼ�Ϊmiddle��n=1~3
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  table_data1n : 10; /* bit[0-9]  : ACC���ȵȼ�middle�Ĳ��ұ�����1 */
        unsigned int  table_data2n : 10; /* bit[10-19]: ACC���ȵȼ�middle�Ĳ��ұ�����2 */
        unsigned int  table_data3n : 10; /* bit[20-29]: ACC���ȵȼ�middle�Ĳ��ұ�����3 */
        unsigned int  reserved     : 2;  /* bit[30-31]: ������ */
    } reg;
} SOC_VPP_VHDACCMEDN_UNION;
#endif
#define SOC_VPP_VHDACCMEDN_table_data1n_START  (0)
#define SOC_VPP_VHDACCMEDN_table_data1n_END    (9)
#define SOC_VPP_VHDACCMEDN_table_data2n_START  (10)
#define SOC_VPP_VHDACCMEDN_table_data2n_END    (19)
#define SOC_VPP_VHDACCMEDN_table_data3n_START  (20)
#define SOC_VPP_VHDACCMEDN_table_data3n_END    (29)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDACCHIGHN_UNION
 �ṹ˵��  : VHDACCHIGHN �Ĵ����ṹ���塣��ַƫ����:0x0230��0x0238����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACC���ұ����ȵȼ�Ϊhigh��n=1~3
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  table_data1n : 10; /* bit[0-9]  : ACC���ȵȼ�high�Ĳ��ұ�����1 */
        unsigned int  table_data2n : 10; /* bit[10-19]: ACC���ȵȼ�high�Ĳ��ұ�����2 */
        unsigned int  table_data3n : 10; /* bit[20-29]: ACC���ȵȼ�high�Ĳ��ұ�����3 */
        unsigned int  reserved     : 2;  /* bit[30-31]: ������ */
    } reg;
} SOC_VPP_VHDACCHIGHN_UNION;
#endif
#define SOC_VPP_VHDACCHIGHN_table_data1n_START  (0)
#define SOC_VPP_VHDACCHIGHN_table_data1n_END    (9)
#define SOC_VPP_VHDACCHIGHN_table_data2n_START  (10)
#define SOC_VPP_VHDACCHIGHN_table_data2n_END    (19)
#define SOC_VPP_VHDACCHIGHN_table_data3n_START  (20)
#define SOC_VPP_VHDACCHIGHN_table_data3n_END    (29)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDACCMLN_UNION
 �ṹ˵��  : VHDACCMLN �Ĵ����ṹ���塣��ַƫ����:0x0240��0x0248����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACC���ұ����ȵȼ�Ϊmiddle_low��n=1~3
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  table_data1n : 10; /* bit[0-9]  : ACC���ȵȼ�middle_low�Ĳ��ұ�����1 */
        unsigned int  table_data2n : 10; /* bit[10-19]: ACC���ȵȼ�middle_low�Ĳ��ұ�����2 */
        unsigned int  table_data3n : 10; /* bit[20-29]: ACC���ȵȼ�middle_low�Ĳ��ұ�����3 */
        unsigned int  reserved     : 2;  /* bit[30-31]: ������ */
    } reg;
} SOC_VPP_VHDACCMLN_UNION;
#endif
#define SOC_VPP_VHDACCMLN_table_data1n_START  (0)
#define SOC_VPP_VHDACCMLN_table_data1n_END    (9)
#define SOC_VPP_VHDACCMLN_table_data2n_START  (10)
#define SOC_VPP_VHDACCMLN_table_data2n_END    (19)
#define SOC_VPP_VHDACCMLN_table_data3n_START  (20)
#define SOC_VPP_VHDACCMLN_table_data3n_END    (29)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDACCMHN_UNION
 �ṹ˵��  : VHDACCMHN �Ĵ����ṹ���塣��ַƫ����:0x0250��0x0258����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACC���ұ����ȵȼ�Ϊmiddle_high��n=1~3
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  table_data1n : 10; /* bit[0-9]  : ACC���ȵȼ�middle_high�Ĳ��ұ�����1 */
        unsigned int  table_data2n : 10; /* bit[10-19]: ACC���ȵȼ�middle_high�Ĳ��ұ�����2 */
        unsigned int  table_data3n : 10; /* bit[20-29]: ACC���ȵȼ�middle_high�Ĳ��ұ�����3 */
        unsigned int  reserved     : 2;  /* bit[30-31]: ������ */
    } reg;
} SOC_VPP_VHDACCMHN_UNION;
#endif
#define SOC_VPP_VHDACCMHN_table_data1n_START  (0)
#define SOC_VPP_VHDACCMHN_table_data1n_END    (9)
#define SOC_VPP_VHDACCMHN_table_data2n_START  (10)
#define SOC_VPP_VHDACCMHN_table_data2n_END    (19)
#define SOC_VPP_VHDACCMHN_table_data3n_START  (20)
#define SOC_VPP_VHDACCMHN_table_data3n_END    (29)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDACC3LOW_UNION
 �ṹ˵��  : VHDACC3LOW �Ĵ����ṹ���塣��ַƫ����:0x0260����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACC������ĵ���������ͳ��ֵ��Ϊֻ���Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cnt3_low : 21; /* bit[0-20] : ������ĵ���������ͳ��ֵ */
        unsigned int  reserved : 11; /* bit[21-31]: ������ */
    } reg;
} SOC_VPP_VHDACC3LOW_UNION;
#endif
#define SOC_VPP_VHDACC3LOW_cnt3_low_START  (0)
#define SOC_VPP_VHDACC3LOW_cnt3_low_END    (20)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDACC3MED_UNION
 �ṹ˵��  : VHDACC3MED �Ĵ����ṹ���塣��ַƫ����:0x0264����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACC�����������������ͳ��ֵ��Ϊֻ���Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cnt3_med : 21; /* bit[0-20] : �����������������ͳ��ֵ */
        unsigned int  reserved : 11; /* bit[21-31]: ������ */
    } reg;
} SOC_VPP_VHDACC3MED_UNION;
#endif
#define SOC_VPP_VHDACC3MED_cnt3_med_START  (0)
#define SOC_VPP_VHDACC3MED_cnt3_med_END    (20)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDACC3HIGH_UNION
 �ṹ˵��  : VHDACC3HIGH �Ĵ����ṹ���塣��ַƫ����:0x0268����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACC������ĸ���������ͳ��ֵ��Ϊֻ���Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cnt3_high : 21; /* bit[0-20] : ������ĸ���������ͳ��ֵ */
        unsigned int  reserved  : 11; /* bit[21-31]: ������ */
    } reg;
} SOC_VPP_VHDACC3HIGH_UNION;
#endif
#define SOC_VPP_VHDACC3HIGH_cnt3_high_START  (0)
#define SOC_VPP_VHDACC3HIGH_cnt3_high_END    (20)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDACC8MLOW_UNION
 �ṹ˵��  : VHDACC8MLOW �Ĵ����ṹ���塣��ַƫ����:0x026C����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACC�м�����ֳ�8�κ󣬵���������ͳ��ֵ��Ϊֻ���Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cnt8_med_low : 21; /* bit[0-20] : �м�����ĵ���������ͳ��ֵ */
        unsigned int  reserved     : 11; /* bit[21-31]: ������ */
    } reg;
} SOC_VPP_VHDACC8MLOW_UNION;
#endif
#define SOC_VPP_VHDACC8MLOW_cnt8_med_low_START  (0)
#define SOC_VPP_VHDACC8MLOW_cnt8_med_low_END    (20)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDACC8MHIGH_UNION
 �ṹ˵��  : VHDACC8MHIGH �Ĵ����ṹ���塣��ַƫ����:0x0270����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACC�м�����ֳ�8�κ󣬸���������ͳ��ֵ��Ϊֻ���Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cnt8_med_high : 21; /* bit[0-20] : �м�����ĸ���������ͳ��ֵ */
        unsigned int  reserved      : 11; /* bit[21-31]: ������ */
    } reg;
} SOC_VPP_VHDACC8MHIGH_UNION;
#endif
#define SOC_VPP_VHDACC8MHIGH_cnt8_med_high_START  (0)
#define SOC_VPP_VHDACC8MHIGH_cnt8_med_high_END    (20)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDACCTOTAL_UNION
 �ṹ˵��  : VHDACCTOTAL �Ĵ����ṹ���塣��ַƫ����:0x0274����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACC����ͳ��ֵ��Ϊֻ���Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  acc_pix_total : 21; /* bit[0-20] : ACC������ͳ��ֵ */
        unsigned int  reserved      : 11; /* bit[21-31]: ������ */
    } reg;
} SOC_VPP_VHDACCTOTAL_UNION;
#endif
#define SOC_VPP_VHDACCTOTAL_acc_pix_total_START  (0)
#define SOC_VPP_VHDACCTOTAL_acc_pix_total_END    (20)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDIFIRCOEF01_UNION
 �ṹ˵��  : VHDIFIRCOEF01 �Ĵ����ṹ���塣��ַƫ����:0x0280����ֵ:0x00000000�����:32
 �Ĵ���˵��: IFIR�˲�ϵ��0��1
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  coef0    : 10; /* bit[0-9]  : IFIR�˲�ϵ��0��&#13; */
        unsigned int  reserved_0: 6;  /* bit[10-15]: ������ */
        unsigned int  coef1    : 10; /* bit[16-25]: IFIR�˲�ϵ��1��&#13; */
        unsigned int  reserved_1: 6;  /* bit[26-31]: ������ */
    } reg;
} SOC_VPP_VHDIFIRCOEF01_UNION;
#endif
#define SOC_VPP_VHDIFIRCOEF01_coef0_START     (0)
#define SOC_VPP_VHDIFIRCOEF01_coef0_END       (9)
#define SOC_VPP_VHDIFIRCOEF01_coef1_START     (16)
#define SOC_VPP_VHDIFIRCOEF01_coef1_END       (25)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDIFIRCOEF23_UNION
 �ṹ˵��  : VHDIFIRCOEF23 �Ĵ����ṹ���塣��ַƫ����:0x0284����ֵ:0x00000000�����:32
 �Ĵ���˵��: IFIR�˲�ϵ��2��3
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  coef2    : 10; /* bit[0-9]  : IFIR�˲�ϵ��2��&#13; */
        unsigned int  reserved_0: 6;  /* bit[10-15]: ������ */
        unsigned int  coef3    : 10; /* bit[16-25]: IFIR�˲�ϵ��3��&#13; */
        unsigned int  reserved_1: 6;  /* bit[26-31]: ������ */
    } reg;
} SOC_VPP_VHDIFIRCOEF23_UNION;
#endif
#define SOC_VPP_VHDIFIRCOEF23_coef2_START     (0)
#define SOC_VPP_VHDIFIRCOEF23_coef2_END       (9)
#define SOC_VPP_VHDIFIRCOEF23_coef3_START     (16)
#define SOC_VPP_VHDIFIRCOEF23_coef3_END       (25)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDIFIRCOEF45_UNION
 �ṹ˵��  : VHDIFIRCOEF45 �Ĵ����ṹ���塣��ַƫ����:0x0288����ֵ:0x00000000�����:32
 �Ĵ���˵��: IFIR�˲�ϵ��4��5
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  coef4    : 10; /* bit[0-9]  : IFIR�˲�ϵ��4��&#13; */
        unsigned int  reserved_0: 6;  /* bit[10-15]: ������ */
        unsigned int  coef5    : 10; /* bit[16-25]: IFIR�˲�ϵ��5��&#13; */
        unsigned int  reserved_1: 6;  /* bit[26-31]: ������ */
    } reg;
} SOC_VPP_VHDIFIRCOEF45_UNION;
#endif
#define SOC_VPP_VHDIFIRCOEF45_coef4_START     (0)
#define SOC_VPP_VHDIFIRCOEF45_coef4_END       (9)
#define SOC_VPP_VHDIFIRCOEF45_coef5_START     (16)
#define SOC_VPP_VHDIFIRCOEF45_coef5_END       (25)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDIFIRCOEF67_UNION
 �ṹ˵��  : VHDIFIRCOEF67 �Ĵ����ṹ���塣��ַƫ����:0x028C����ֵ:0x00000000�����:32
 �Ĵ���˵��: IFIR�˲�ϵ��6��7
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  coef6    : 10; /* bit[0-9]  : IFIR�˲�ϵ��6��&#13; */
        unsigned int  reserved_0: 6;  /* bit[10-15]: ������ */
        unsigned int  coef7    : 10; /* bit[16-25]: IFIR�˲�ϵ��7��&#13; */
        unsigned int  reserved_1: 6;  /* bit[26-31]: ������ */
    } reg;
} SOC_VPP_VHDIFIRCOEF67_UNION;
#endif
#define SOC_VPP_VHDIFIRCOEF67_coef6_START     (0)
#define SOC_VPP_VHDIFIRCOEF67_coef6_END       (9)
#define SOC_VPP_VHDIFIRCOEF67_coef7_START     (16)
#define SOC_VPP_VHDIFIRCOEF67_coef7_END       (25)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDDIECTRL_UNION
 �ṹ˵��  : VHDDIECTRL �Ĵ����ṹ���塣��ַƫ����:0x0300����ֵ:0x00000000�����:32
 �Ĵ���˵��: de-interlace������ƼĴ�����Ϊ�Ǽ�ʱ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved_0    : 16; /* bit[0-15] : ������ */
        unsigned int  stinfo_stop   : 1;  /* bit[16]   : ��ֹ����������ͣ
                                                         0����ֹ�����������£�
                                                         &#13;1����ֹ������ͣ���¡� */
        unsigned int  die_rst       : 1;  /* bit[17]   : De-interlace��λʹ�ܡ�
                                                         0��die��λ��Ч��
                                                         1��die��λ��Ч�� */
        unsigned int  reserved_1    : 6;  /* bit[18-23]: ������ */
        unsigned int  die_chmmode   : 2;  /* bit[24-25]: De-interlaceɫ������ģʽ��
                                                         00��5����ģʽ
                                                         &#13;01��4����ʽ��
                                                         10��3��ģʽ
                                                         11������ */
        unsigned int  die_lmmode    : 2;  /* bit[26-27]: De-interlace��������ģʽ��
                                                         00��5����ģʽ
                                                         &#13;01��4����ʽ��
                                                         10��3��ģʽ
                                                         11������ */
        unsigned int  die_out_sel_c : 1;  /* bit[28]   : DIEɫ�����ѡ��
                                                         0�������ֵģʽ���ݣ�
                                                         1��������ģʽ���ݡ� */
        unsigned int  die_out_sel_l : 1;  /* bit[29]   : DIE�������ѡ��
                                                         0�������ֵģʽ���ݣ�
                                                         1��������ģʽ���ݡ� */
        unsigned int  die_chroma_en : 1;  /* bit[30]   : De-interlaceɫ��ʹ�ܿ��ơ�
                                                         0����ֹ��&#13;1��ʹ�ܡ� */
        unsigned int  die_luma_en   : 1;  /* bit[31]   : De-interlace����ʹ�ܿ��ơ�
                                                         0����ֹ��
                                                         1��ʹ�ܡ� */
    } reg;
} SOC_VPP_VHDDIECTRL_UNION;
#endif
#define SOC_VPP_VHDDIECTRL_stinfo_stop_START    (16)
#define SOC_VPP_VHDDIECTRL_stinfo_stop_END      (16)
#define SOC_VPP_VHDDIECTRL_die_rst_START        (17)
#define SOC_VPP_VHDDIECTRL_die_rst_END          (17)
#define SOC_VPP_VHDDIECTRL_die_chmmode_START    (24)
#define SOC_VPP_VHDDIECTRL_die_chmmode_END      (25)
#define SOC_VPP_VHDDIECTRL_die_lmmode_START     (26)
#define SOC_VPP_VHDDIECTRL_die_lmmode_END       (27)
#define SOC_VPP_VHDDIECTRL_die_out_sel_c_START  (28)
#define SOC_VPP_VHDDIECTRL_die_out_sel_c_END    (28)
#define SOC_VPP_VHDDIECTRL_die_out_sel_l_START  (29)
#define SOC_VPP_VHDDIECTRL_die_out_sel_l_END    (29)
#define SOC_VPP_VHDDIECTRL_die_chroma_en_START  (30)
#define SOC_VPP_VHDDIECTRL_die_chroma_en_END    (30)
#define SOC_VPP_VHDDIECTRL_die_luma_en_START    (31)
#define SOC_VPP_VHDDIECTRL_die_luma_en_END      (31)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDDIELMA0_UNION
 �ṹ˵��  : VHDDIELMA0 �Ĵ����ṹ���塣��ַƫ����:0x0308����ֵ:0x00000000�����:32
 �Ĵ���˵��: de-interlace����������ƼĴ���0��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  luma_qtbl1      : 8;  /* bit[0-7]  : ����������1����ʾ������[0,luma_qtbl1)��Χ�ڱ�������00 */
        unsigned int  luma_qtbl2      : 8;  /* bit[8-15] : ����������2����ʾ������[luma_qtbl1,luma_qtbl2)��Χ�ڱ�������01 */
        unsigned int  luma_qtbl3      : 8;  /* bit[16-23]: ����������3����ʾ������[luma_qtbl2,luma_qtbl3)��Χ�ڱ�������10��
                                                           ��[luma_qtbl3,256)��Χ�ڱ�������11�� */
        unsigned int  scale_ratio_ppd : 6;  /* bit[24-29]: ���ȱ�����ϢȨ�أ�U6.4��ʽ */
        unsigned int  reserved        : 2;  /* bit[30-31]: ������ */
    } reg;
} SOC_VPP_VHDDIELMA0_UNION;
#endif
#define SOC_VPP_VHDDIELMA0_luma_qtbl1_START       (0)
#define SOC_VPP_VHDDIELMA0_luma_qtbl1_END         (7)
#define SOC_VPP_VHDDIELMA0_luma_qtbl2_START       (8)
#define SOC_VPP_VHDDIELMA0_luma_qtbl2_END         (15)
#define SOC_VPP_VHDDIELMA0_luma_qtbl3_START       (16)
#define SOC_VPP_VHDDIELMA0_luma_qtbl3_END         (23)
#define SOC_VPP_VHDDIELMA0_scale_ratio_ppd_START  (24)
#define SOC_VPP_VHDDIELMA0_scale_ratio_ppd_END    (29)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDDIELMA1_UNION
 �ṹ˵��  : VHDDIELMA1 �Ĵ����ṹ���塣��ַƫ����:0x030C����ֵ:0x00000000�����:32
 �Ĵ���˵��: de-interlace����������ƼĴ���1��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  luma_reqtbl0 : 8;  /* bit[0-7]  : ������ʷ��Ϣ����������mh��0ʱ����Ӧ��ֵ */
        unsigned int  luma_reqtbl1 : 8;  /* bit[8-15] : ������ʷ��Ϣ����������mh��1ʱ����Ӧ��ֵ */
        unsigned int  luma_reqtbl2 : 8;  /* bit[16-23]: ������ʷ��Ϣ����������mh��2ʱ����Ӧ��ֵ */
        unsigned int  luma_reqtbl3 : 8;  /* bit[24-31]: ������ʷ��Ϣ����������mh��3ʱ����Ӧ��ֵ */
    } reg;
} SOC_VPP_VHDDIELMA1_UNION;
#endif
#define SOC_VPP_VHDDIELMA1_luma_reqtbl0_START  (0)
#define SOC_VPP_VHDDIELMA1_luma_reqtbl0_END    (7)
#define SOC_VPP_VHDDIELMA1_luma_reqtbl1_START  (8)
#define SOC_VPP_VHDDIELMA1_luma_reqtbl1_END    (15)
#define SOC_VPP_VHDDIELMA1_luma_reqtbl2_START  (16)
#define SOC_VPP_VHDDIELMA1_luma_reqtbl2_END    (23)
#define SOC_VPP_VHDDIELMA1_luma_reqtbl3_START  (24)
#define SOC_VPP_VHDDIELMA1_luma_reqtbl3_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDDIELMA2_UNION
 �ṹ˵��  : VHDDIELMA2 �Ĵ����ṹ���塣��ַƫ����:0x0310����ֵ:0x00000000�����:32
 �Ĵ���˵��: de-interlace����������ƼĴ���2��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  luma_win_size   : 2;  /* bit[0-1]  : ����ma��ˮƽ���ڴ�С��
                                                           00�����㣨��λֵ��
                                                           01���뾶Ϊ1�Ĵ���
                                                           10���뾶Ϊ2�Ĵ���
                                                           11������ */
        unsigned int  luma_scesdf_max : 1;  /* bit[2]    : ����SADʱ��SCE��SDFѡ��
                                                           0����Сֵ
                                                           1�����ֵ */
        unsigned int  die_st_qrst_en  : 1;  /* bit[3]    : ������ʷ��Ϣqr��stʹ��
                                                           0����ֹ
                                                           1��ʹ�� */
        unsigned int  die_st_n_en     : 1;  /* bit[4]    : ������ʷ��ϢNʹ��
                                                           0����ֹ
                                                           1��ʹ�� */
        unsigned int  die_st_m_en     : 1;  /* bit[5]    : ������ʷ��ϢMʹ��
                                                           0����ֹ
                                                           1��ʹ�� */
        unsigned int  die_st_l_en     : 1;  /* bit[6]    : ������ʷ��ϢLʹ��
                                                           0����ֹ
                                                           1��ʹ�� */
        unsigned int  die_st_k_en     : 1;  /* bit[7]    : ��������ʷ��ϢKʹ��
                                                           0����ֹ
                                                           1��ʹ�� */
        unsigned int  luma_qrst_max   : 1;  /* bit[8]    : ������ʷ��ϢQR��ST�����ֵѡ��
                                                           0����ʾ��Сֵ
                                                           1����ʾ���ֵ */
        unsigned int  luma_mf_max     : 1;  /* bit[9]    : ���ȶ����о����
                                                           0������mfΪͳ��ֵ
                                                           1������mf�̶�Ϊ���ֵ */
        unsigned int  chroma_mf_max   : 1;  /* bit[10]   : ɫ�ȶ����о����
                                                           0��ɫ��mfΪͳ��ֵ
                                                           1��ɫ��mf�̶�Ϊ���ֵ */
        unsigned int  reserved        : 18; /* bit[11-28]: ������ */
        unsigned int  die_st_mode     : 3;  /* bit[29-31]: ��֤����ר�ã�stģʽ�Ĵ��� */
    } reg;
} SOC_VPP_VHDDIELMA2_UNION;
#endif
#define SOC_VPP_VHDDIELMA2_luma_win_size_START    (0)
#define SOC_VPP_VHDDIELMA2_luma_win_size_END      (1)
#define SOC_VPP_VHDDIELMA2_luma_scesdf_max_START  (2)
#define SOC_VPP_VHDDIELMA2_luma_scesdf_max_END    (2)
#define SOC_VPP_VHDDIELMA2_die_st_qrst_en_START   (3)
#define SOC_VPP_VHDDIELMA2_die_st_qrst_en_END     (3)
#define SOC_VPP_VHDDIELMA2_die_st_n_en_START      (4)
#define SOC_VPP_VHDDIELMA2_die_st_n_en_END        (4)
#define SOC_VPP_VHDDIELMA2_die_st_m_en_START      (5)
#define SOC_VPP_VHDDIELMA2_die_st_m_en_END        (5)
#define SOC_VPP_VHDDIELMA2_die_st_l_en_START      (6)
#define SOC_VPP_VHDDIELMA2_die_st_l_en_END        (6)
#define SOC_VPP_VHDDIELMA2_die_st_k_en_START      (7)
#define SOC_VPP_VHDDIELMA2_die_st_k_en_END        (7)
#define SOC_VPP_VHDDIELMA2_luma_qrst_max_START    (8)
#define SOC_VPP_VHDDIELMA2_luma_qrst_max_END      (8)
#define SOC_VPP_VHDDIELMA2_luma_mf_max_START      (9)
#define SOC_VPP_VHDDIELMA2_luma_mf_max_END        (9)
#define SOC_VPP_VHDDIELMA2_chroma_mf_max_START    (10)
#define SOC_VPP_VHDDIELMA2_chroma_mf_max_END      (10)
#define SOC_VPP_VHDDIELMA2_die_st_mode_START      (29)
#define SOC_VPP_VHDDIELMA2_die_st_mode_END        (31)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDDIEINTEN_UNION
 �ṹ˵��  : VHDDIEINTEN �Ĵ����ṹ���塣��ַƫ����:0x0314����ֵ:0x00000000�����:32
 �Ĵ���˵��: 
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  dir_inten     : 4;  /* bit[0-3]  :  */
        unsigned int  reserved_0    : 3;  /* bit[4-6]  :  */
        unsigned int  dir_ck_enh    : 1;  /* bit[7]    : �����ֵʱ��bound check��ǿʹ�ܡ�
                                                         0����ǿ��ʹ�ܣ�MPW�汾��ֵ��ʽ����
                                                         1����ǿʹ�ܣ�pilot�汾��ֵ��ʽ���� */
        unsigned int  dir_inten_ver : 4;  /* bit[8-11] :  */
        unsigned int  reserved_1    : 4;  /* bit[12-15]:  */
        unsigned int  ver_min_inten : 16; /* bit[16-31]:  */
    } reg;
} SOC_VPP_VHDDIEINTEN_UNION;
#endif
#define SOC_VPP_VHDDIEINTEN_dir_inten_START      (0)
#define SOC_VPP_VHDDIEINTEN_dir_inten_END        (3)
#define SOC_VPP_VHDDIEINTEN_dir_ck_enh_START     (7)
#define SOC_VPP_VHDDIEINTEN_dir_ck_enh_END       (7)
#define SOC_VPP_VHDDIEINTEN_dir_inten_ver_START  (8)
#define SOC_VPP_VHDDIEINTEN_dir_inten_ver_END    (11)
#define SOC_VPP_VHDDIEINTEN_ver_min_inten_START  (16)
#define SOC_VPP_VHDDIEINTEN_ver_min_inten_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDDIESCALE_UNION
 �ṹ˵��  : VHDDIESCALE �Ĵ����ṹ���塣��ַƫ����:0x0318����ֵ:0x00000000�����:32
 �Ĵ���˵��: 
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  range_scale : 8;  /* bit[0-7] :  */
        unsigned int  reserved    : 24; /* bit[8-31]:  */
    } reg;
} SOC_VPP_VHDDIESCALE_UNION;
#endif
#define SOC_VPP_VHDDIESCALE_range_scale_START  (0)
#define SOC_VPP_VHDDIESCALE_range_scale_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDDIECHECK1_UNION
 �ṹ˵��  : VHDDIECHECK1 �Ĵ����ṹ���塣��ַƫ����:0x031C����ֵ:0x00000000�����:32
 �Ĵ���˵��: 
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ck_max_range  : 6;  /* bit[0-5]  :  */
        unsigned int  reserved_0    : 2;  /* bit[6-7]  :  */
        unsigned int  ck_range_gain : 4;  /* bit[8-11] :  */
        unsigned int  reserved_1    : 4;  /* bit[12-15]:  */
        unsigned int  ck_gain       : 4;  /* bit[16-19]:  */
        unsigned int  reserved_2    : 12; /* bit[20-31]:  */
    } reg;
} SOC_VPP_VHDDIECHECK1_UNION;
#endif
#define SOC_VPP_VHDDIECHECK1_ck_max_range_START   (0)
#define SOC_VPP_VHDDIECHECK1_ck_max_range_END     (5)
#define SOC_VPP_VHDDIECHECK1_ck_range_gain_START  (8)
#define SOC_VPP_VHDDIECHECK1_ck_range_gain_END    (11)
#define SOC_VPP_VHDDIECHECK1_ck_gain_START        (16)
#define SOC_VPP_VHDDIECHECK1_ck_gain_END          (19)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDDIECHECK2_UNION
 �ṹ˵��  : VHDDIECHECK2 �Ĵ����ṹ���塣��ַƫ����:0x0320����ֵ:0x00000000�����:32
 �Ĵ���˵��: 
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ck_max_range  : 6;  /* bit[0-5]  :  */
        unsigned int  reserved_0    : 2;  /* bit[6-7]  :  */
        unsigned int  ck_range_gain : 4;  /* bit[8-11] :  */
        unsigned int  reserved_1    : 4;  /* bit[12-15]:  */
        unsigned int  ck_gain       : 4;  /* bit[16-19]:  */
        unsigned int  reserved_2    : 12; /* bit[20-31]:  */
    } reg;
} SOC_VPP_VHDDIECHECK2_UNION;
#endif
#define SOC_VPP_VHDDIECHECK2_ck_max_range_START   (0)
#define SOC_VPP_VHDDIECHECK2_ck_max_range_END     (5)
#define SOC_VPP_VHDDIECHECK2_ck_range_gain_START  (8)
#define SOC_VPP_VHDDIECHECK2_ck_range_gain_END    (11)
#define SOC_VPP_VHDDIECHECK2_ck_gain_START        (16)
#define SOC_VPP_VHDDIECHECK2_ck_gain_END          (19)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDDIEDIR0_3_UNION
 �ṹ˵��  : VHDDIEDIR0_3 �Ĵ����ṹ���塣��ַƫ����:0x324����ֵ:0x00000000�����:32
 �Ĵ���˵��: ����0��3����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  dir0_mult : 6;  /* bit[0-5]  : ����0���� */
        unsigned int  reserved_0: 2;  /* bit[6-7]  : ���� */
        unsigned int  dir1_mult : 6;  /* bit[8-13] : ����1���� */
        unsigned int  reserved_1: 2;  /* bit[14-15]: ���� */
        unsigned int  dir2_mult : 6;  /* bit[16-21]: ����2���� */
        unsigned int  reserved_2: 2;  /* bit[22-23]: ���� */
        unsigned int  dir3_mult : 6;  /* bit[24-29]: ����3���� */
        unsigned int  reserved_3: 2;  /* bit[30-31]: ���� */
    } reg;
} SOC_VPP_VHDDIEDIR0_3_UNION;
#endif
#define SOC_VPP_VHDDIEDIR0_3_dir0_mult_START  (0)
#define SOC_VPP_VHDDIEDIR0_3_dir0_mult_END    (5)
#define SOC_VPP_VHDDIEDIR0_3_dir1_mult_START  (8)
#define SOC_VPP_VHDDIEDIR0_3_dir1_mult_END    (13)
#define SOC_VPP_VHDDIEDIR0_3_dir2_mult_START  (16)
#define SOC_VPP_VHDDIEDIR0_3_dir2_mult_END    (21)
#define SOC_VPP_VHDDIEDIR0_3_dir3_mult_START  (24)
#define SOC_VPP_VHDDIEDIR0_3_dir3_mult_END    (29)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDDIEDIR4_7_UNION
 �ṹ˵��  : VHDDIEDIR4_7 �Ĵ����ṹ���塣��ַƫ����:0x328����ֵ:0x00000000�����:32
 �Ĵ���˵��: ����4��7����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  dir4_mult : 6;  /* bit[0-5]  : ����4���� */
        unsigned int  reserved_0: 2;  /* bit[6-7]  : ���� */
        unsigned int  dir5_mult : 6;  /* bit[8-13] : ����5���� */
        unsigned int  reserved_1: 2;  /* bit[14-15]: ���� */
        unsigned int  dir6_mult : 6;  /* bit[16-21]: ����6���� */
        unsigned int  reserved_2: 2;  /* bit[22-23]: ���� */
        unsigned int  dir7_mult : 6;  /* bit[24-29]: ����7���� */
        unsigned int  reserved_3: 2;  /* bit[30-31]: ���� */
    } reg;
} SOC_VPP_VHDDIEDIR4_7_UNION;
#endif
#define SOC_VPP_VHDDIEDIR4_7_dir4_mult_START  (0)
#define SOC_VPP_VHDDIEDIR4_7_dir4_mult_END    (5)
#define SOC_VPP_VHDDIEDIR4_7_dir5_mult_START  (8)
#define SOC_VPP_VHDDIEDIR4_7_dir5_mult_END    (13)
#define SOC_VPP_VHDDIEDIR4_7_dir6_mult_START  (16)
#define SOC_VPP_VHDDIEDIR4_7_dir6_mult_END    (21)
#define SOC_VPP_VHDDIEDIR4_7_dir7_mult_START  (24)
#define SOC_VPP_VHDDIEDIR4_7_dir7_mult_END    (29)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDDIEDIR8_11_UNION
 �ṹ˵��  : VHDDIEDIR8_11 �Ĵ����ṹ���塣��ַƫ����:0x32C����ֵ:0x00000000�����:32
 �Ĵ���˵��: ����8��11����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  dir8_mult  : 6;  /* bit[0-5]  : ����8���� */
        unsigned int  reserved_0 : 2;  /* bit[6-7]  : ���� */
        unsigned int  dir9_mult  : 6;  /* bit[8-13] : ����9���� */
        unsigned int  reserved_1 : 2;  /* bit[14-15]: ���� */
        unsigned int  dir10_mult : 6;  /* bit[16-21]: ����10���� */
        unsigned int  reserved_2 : 2;  /* bit[22-23]: ���� */
        unsigned int  dir11_mult : 6;  /* bit[24-29]: ����11���� */
        unsigned int  reserved_3 : 2;  /* bit[30-31]: ���� */
    } reg;
} SOC_VPP_VHDDIEDIR8_11_UNION;
#endif
#define SOC_VPP_VHDDIEDIR8_11_dir8_mult_START   (0)
#define SOC_VPP_VHDDIEDIR8_11_dir8_mult_END     (5)
#define SOC_VPP_VHDDIEDIR8_11_dir9_mult_START   (8)
#define SOC_VPP_VHDDIEDIR8_11_dir9_mult_END     (13)
#define SOC_VPP_VHDDIEDIR8_11_dir10_mult_START  (16)
#define SOC_VPP_VHDDIEDIR8_11_dir10_mult_END    (21)
#define SOC_VPP_VHDDIEDIR8_11_dir11_mult_START  (24)
#define SOC_VPP_VHDDIEDIR8_11_dir11_mult_END    (29)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDDIEDIR12_14_UNION
 �ṹ˵��  : VHDDIEDIR12_14 �Ĵ����ṹ���塣��ַƫ����:0x330����ֵ:0x00000000�����:32
 �Ĵ���˵��: ����12��14����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  dir12_mult : 6;  /* bit[0-5]  : ����12���� */
        unsigned int  reserved_0 : 2;  /* bit[6-7]  : ���� */
        unsigned int  dir13_mult : 6;  /* bit[8-13] : ����13���� */
        unsigned int  reserved_1 : 2;  /* bit[14-15]: ���� */
        unsigned int  dir14_mult : 6;  /* bit[16-21]: ����14���� */
        unsigned int  reserved_2 : 10; /* bit[22-31]: ���� */
    } reg;
} SOC_VPP_VHDDIEDIR12_14_UNION;
#endif
#define SOC_VPP_VHDDIEDIR12_14_dir12_mult_START  (0)
#define SOC_VPP_VHDDIEDIR12_14_dir12_mult_END    (5)
#define SOC_VPP_VHDDIEDIR12_14_dir13_mult_START  (8)
#define SOC_VPP_VHDDIEDIR12_14_dir13_mult_END    (13)
#define SOC_VPP_VHDDIEDIR12_14_dir14_mult_START  (16)
#define SOC_VPP_VHDDIEDIR12_14_dir14_mult_END    (21)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDDIESTA_UNION
 �ṹ˵��  : VHDDIESTA �Ĵ����ṹ���塣��ַƫ����:0x0338����ֵ:0x00000000�����:32
 �Ĵ���˵��: 
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  die_ref_field : 1;  /* bit[0]   :  */
        unsigned int  reserved      : 31; /* bit[1-31]:  */
    } reg;
} SOC_VPP_VHDDIESTA_UNION;
#endif
#define SOC_VPP_VHDDIESTA_die_ref_field_START  (0)
#define SOC_VPP_VHDDIESTA_die_ref_field_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDDIESTKADDR_UNION
 �ṹ˵��  : VHDDIESTKADDR �Ĵ����ṹ���塣��ַƫ����:0x03A4����ֵ:0x00000000�����:32
 �Ĵ���˵��: DIE��ʷ��Ϣ�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  die_k_addr : 32; /* bit[0-31]: k����ʷ��Ϣ��ʼ��ַ������ռ��С��ΧΪ(w+15)/16 * 1080(32bit) */
    } reg;
} SOC_VPP_VHDDIESTKADDR_UNION;
#endif
#define SOC_VPP_VHDDIESTKADDR_die_k_addr_START  (0)
#define SOC_VPP_VHDDIESTKADDR_die_k_addr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDDIESTLADDR_UNION
 �ṹ˵��  : VHDDIESTLADDR �Ĵ����ṹ���塣��ַƫ����:0x03A8����ֵ:0x00000000�����:32
 �Ĵ���˵��: DIE��ʷ��Ϣ�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  die_l_addr : 32; /* bit[0-31]: l����ʷ��Ϣ��ʼ��ַ������ռ��С��ΧΪ(w+15)/16 * 1080(32bit) */
    } reg;
} SOC_VPP_VHDDIESTLADDR_UNION;
#endif
#define SOC_VPP_VHDDIESTLADDR_die_l_addr_START  (0)
#define SOC_VPP_VHDDIESTLADDR_die_l_addr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDDIESTMADDR_UNION
 �ṹ˵��  : VHDDIESTMADDR �Ĵ����ṹ���塣��ַƫ����:0x03AC����ֵ:0x00000000�����:32
 �Ĵ���˵��: DIE��ʷ��Ϣ�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  die_m_addr : 32; /* bit[0-31]: m����ʷ��Ϣ��ʼ��ַ������ռ��С��ΧΪ(w+15)/16 * 1080(32bit) */
    } reg;
} SOC_VPP_VHDDIESTMADDR_UNION;
#endif
#define SOC_VPP_VHDDIESTMADDR_die_m_addr_START  (0)
#define SOC_VPP_VHDDIESTMADDR_die_m_addr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDDIESTNADDR_UNION
 �ṹ˵��  : VHDDIESTNADDR �Ĵ����ṹ���塣��ַƫ����:0x03B0����ֵ:0x00000000�����:32
 �Ĵ���˵��: DIE��ʷ��Ϣ�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  die_n_addr : 32; /* bit[0-31]: n����ʷ��Ϣ��ʼ��ַ������ռ��С��ΧΪ(w+15)/16 * 1080(32bit) */
    } reg;
} SOC_VPP_VHDDIESTNADDR_UNION;
#endif
#define SOC_VPP_VHDDIESTNADDR_die_n_addr_START  (0)
#define SOC_VPP_VHDDIESTNADDR_die_n_addr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDDIESTSQTRADDR_UNION
 �ṹ˵��  : VHDDIESTSQTRADDR �Ĵ����ṹ���塣��ַƫ����:0x03B4����ֵ:0x00000000�����:32
 �Ĵ���˵��: DIE��ʷ��Ϣ�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  die_sqtr_addr : 32; /* bit[0-31]: sqtr����ʷ��Ϣ��ʼ��ַ������ռ��С��ΧΪ(w+15)/16 * 1080(32bit) */
    } reg;
} SOC_VPP_VHDDIESTSQTRADDR_UNION;
#endif
#define SOC_VPP_VHDDIESTSQTRADDR_die_sqtr_addr_START  (0)
#define SOC_VPP_VHDDIESTSQTRADDR_die_sqtr_addr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDCCRSCLR0_UNION
 �ṹ˵��  : VHDCCRSCLR0 �Ĵ����ṹ���塣��ַƫ����:0x03B8����ֵ:0x00000000�����:32
 �Ĵ���˵��: ɫ��crosscolor�Ĵ���0
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  no_ccr_detect_thd : 8;  /* bit[0-7]  : ����ɫ������� */
        unsigned int  no_ccr_detect_max : 8;  /* bit[8-15] : ����ɫ������ֵ */
        unsigned int  chroma_ma_offset  : 8;  /* bit[16-23]: ɫ���˶���Ϣ��������˶�ƫ��ֵ */
        unsigned int  chroma_ccr_en     : 1;  /* bit[24]   : ȥ��ɫ����ʹ��
                                                             0����ֹ
                                                             1��ʹ�� */
        unsigned int  reserved          : 7;  /* bit[25-31]: ������ */
    } reg;
} SOC_VPP_VHDCCRSCLR0_UNION;
#endif
#define SOC_VPP_VHDCCRSCLR0_no_ccr_detect_thd_START  (0)
#define SOC_VPP_VHDCCRSCLR0_no_ccr_detect_thd_END    (7)
#define SOC_VPP_VHDCCRSCLR0_no_ccr_detect_max_START  (8)
#define SOC_VPP_VHDCCRSCLR0_no_ccr_detect_max_END    (15)
#define SOC_VPP_VHDCCRSCLR0_chroma_ma_offset_START   (16)
#define SOC_VPP_VHDCCRSCLR0_chroma_ma_offset_END     (23)
#define SOC_VPP_VHDCCRSCLR0_chroma_ccr_en_START      (24)
#define SOC_VPP_VHDCCRSCLR0_chroma_ccr_en_END        (24)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDCCRSCLR1_UNION
 �ṹ˵��  : VHDCCRSCLR1 �Ĵ����ṹ���塣��ַƫ����:0x03BC����ֵ:0x00000000�����:32
 �Ĵ���˵��: ɫ��crosscolor�Ĵ���1
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  max_xchroma         : 8;  /* bit[0-7]  : ɫ������ı����ֵ */
        unsigned int  no_ccr_detect_blend : 4;  /* bit[8-11] : ����ɫ����ϱ��� */
        unsigned int  reserved            : 4;  /* bit[12-15]: ������ */
        unsigned int  similar_thd         : 8;  /* bit[16-23]: ���ƶ����� */
        unsigned int  similar_max         : 8;  /* bit[24-31]: ���ƶ����ֵ */
    } reg;
} SOC_VPP_VHDCCRSCLR1_UNION;
#endif
#define SOC_VPP_VHDCCRSCLR1_max_xchroma_START          (0)
#define SOC_VPP_VHDCCRSCLR1_max_xchroma_END            (7)
#define SOC_VPP_VHDCCRSCLR1_no_ccr_detect_blend_START  (8)
#define SOC_VPP_VHDCCRSCLR1_no_ccr_detect_blend_END    (11)
#define SOC_VPP_VHDCCRSCLR1_similar_thd_START          (16)
#define SOC_VPP_VHDCCRSCLR1_similar_thd_END            (23)
#define SOC_VPP_VHDCCRSCLR1_similar_max_START          (24)
#define SOC_VPP_VHDCCRSCLR1_similar_max_END            (31)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDPDCTRL_UNION
 �ṹ˵��  : VHDPDCTRL �Ĵ����ṹ���塣��ַƫ����:0x0400����ֵ:0x00000000�����:32
 �Ĵ���˵��: PullDown���ƼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved_0        : 20; /* bit[0-19] : ������ */
        unsigned int  edge_smooth_ratio : 8;  /* bit[20-27]: ��Եƽ������ */
        unsigned int  reserved_1        : 1;  /* bit[28]   : ������ */
        unsigned int  dir_mch_c         : 1;  /* bit[29]   : ɫ��ƥ�䳡�������
                                                             0��ѡ��ο�����ǰһ��
                                                             1��ѡ��ο����ĺ�һ�� */
        unsigned int  edge_smooth_en    : 1;  /* bit[30]   : ��Եƽ��ʹ�ܣ���Pulldownʹ��ʱ��die_out_selѡ����ģʽ����Ч��
                                                             0����ʹ�ܣ�
                                                             1��ʹ�ܣ� */
        unsigned int  dir_mch_l         : 1;  /* bit[31]   : ����ƥ�䳡�������
                                                             0��ѡ��ο�����ǰһ��
                                                             1��ѡ��ο����ĺ�һ�� */
    } reg;
} SOC_VPP_VHDPDCTRL_UNION;
#endif
#define SOC_VPP_VHDPDCTRL_edge_smooth_ratio_START  (20)
#define SOC_VPP_VHDPDCTRL_edge_smooth_ratio_END    (27)
#define SOC_VPP_VHDPDCTRL_dir_mch_c_START          (29)
#define SOC_VPP_VHDPDCTRL_dir_mch_c_END            (29)
#define SOC_VPP_VHDPDCTRL_edge_smooth_en_START     (30)
#define SOC_VPP_VHDPDCTRL_edge_smooth_en_END       (30)
#define SOC_VPP_VHDPDCTRL_dir_mch_l_START          (31)
#define SOC_VPP_VHDPDCTRL_dir_mch_l_END            (31)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDPDBLKPOS0_UNION
 �ṹ˵��  : VHDPDBLKPOS0 �Ĵ����ṹ���塣��ַƫ����:0x0404����ֵ:0x00000000�����:32
 �Ĵ���˵��: PullDown��������0
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  blk_x    : 12; /* bit[0-11] :  */
        unsigned int  blk_y    : 12; /* bit[12-23]:  */
        unsigned int  reserved : 8;  /* bit[24-31]: ������ */
    } reg;
} SOC_VPP_VHDPDBLKPOS0_UNION;
#endif
#define SOC_VPP_VHDPDBLKPOS0_blk_x_START     (0)
#define SOC_VPP_VHDPDBLKPOS0_blk_x_END       (11)
#define SOC_VPP_VHDPDBLKPOS0_blk_y_START     (12)
#define SOC_VPP_VHDPDBLKPOS0_blk_y_END       (23)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDPDBLKPOS1_UNION
 �ṹ˵��  : VHDPDBLKPOS1 �Ĵ����ṹ���塣��ַƫ����:0x0408����ֵ:0x00000000�����:32
 �Ĵ���˵��: PullDown��������0
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  blk_x    : 12; /* bit[0-11] :  */
        unsigned int  blk_y    : 12; /* bit[12-23]:  */
        unsigned int  reserved : 8;  /* bit[24-31]: ������ */
    } reg;
} SOC_VPP_VHDPDBLKPOS1_UNION;
#endif
#define SOC_VPP_VHDPDBLKPOS1_blk_x_START     (0)
#define SOC_VPP_VHDPDBLKPOS1_blk_x_END       (11)
#define SOC_VPP_VHDPDBLKPOS1_blk_y_START     (12)
#define SOC_VPP_VHDPDBLKPOS1_blk_y_END       (23)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDPDBLKTHD_UNION
 �ṹ˵��  : VHDPDBLKTHD �Ĵ����ṹ���塣��ַƫ����:0x040C����ֵ:0x00000000�����:32
 �Ĵ���˵��: PullDown��ֹ��������
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  stillblk_thd    : 8;  /* bit[0-7]  :  */
        unsigned int  diff_movblk_thd : 8;  /* bit[8-15] :  */
        unsigned int  reserved        : 16; /* bit[16-31]: ������ */
    } reg;
} SOC_VPP_VHDPDBLKTHD_UNION;
#endif
#define SOC_VPP_VHDPDBLKTHD_stillblk_thd_START     (0)
#define SOC_VPP_VHDPDBLKTHD_stillblk_thd_END       (7)
#define SOC_VPP_VHDPDBLKTHD_diff_movblk_thd_START  (8)
#define SOC_VPP_VHDPDBLKTHD_diff_movblk_thd_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDPDHISTTHD_UNION
 �ṹ˵��  : VHDPDHISTTHD �Ĵ����ṹ���塣��ַƫ����:0x0410����ֵ:0x00000000�����:32
 �Ĵ���˵��: PullDownֱ��ͼͳ������
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  hist_thd0 : 8;  /* bit[0-7]  :  */
        unsigned int  hist_thd1 : 8;  /* bit[8-15] :  */
        unsigned int  hist_thd2 : 8;  /* bit[16-23]:  */
        unsigned int  hist_thd3 : 8;  /* bit[24-31]:  */
    } reg;
} SOC_VPP_VHDPDHISTTHD_UNION;
#endif
#define SOC_VPP_VHDPDHISTTHD_hist_thd0_START  (0)
#define SOC_VPP_VHDPDHISTTHD_hist_thd0_END    (7)
#define SOC_VPP_VHDPDHISTTHD_hist_thd1_START  (8)
#define SOC_VPP_VHDPDHISTTHD_hist_thd1_END    (15)
#define SOC_VPP_VHDPDHISTTHD_hist_thd2_START  (16)
#define SOC_VPP_VHDPDHISTTHD_hist_thd2_END    (23)
#define SOC_VPP_VHDPDHISTTHD_hist_thd3_START  (24)
#define SOC_VPP_VHDPDHISTTHD_hist_thd3_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDPDUMTHD_UNION
 �ṹ˵��  : VHDPDUMTHD �Ĵ����ṹ���塣��ַƫ����:0x0414����ֵ:0x00000000�����:32
 �Ĵ���˵��: PullDown�������˶�ͳ������
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  um_thd0  : 8;  /* bit[0-7]  :  */
        unsigned int  um_thd1  : 8;  /* bit[8-15] :  */
        unsigned int  um_thd2  : 8;  /* bit[16-23]:  */
        unsigned int  reserved : 8;  /* bit[24-31]: ������ */
    } reg;
} SOC_VPP_VHDPDUMTHD_UNION;
#endif
#define SOC_VPP_VHDPDUMTHD_um_thd0_START   (0)
#define SOC_VPP_VHDPDUMTHD_um_thd0_END     (7)
#define SOC_VPP_VHDPDUMTHD_um_thd1_START   (8)
#define SOC_VPP_VHDPDUMTHD_um_thd1_END     (15)
#define SOC_VPP_VHDPDUMTHD_um_thd2_START   (16)
#define SOC_VPP_VHDPDUMTHD_um_thd2_END     (23)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDPDPCCCORING_UNION
 �ṹ˵��  : VHDPDPCCCORING �Ĵ����ṹ���塣��ַƫ����:0x0418����ֵ:0x00000000�����:32
 �Ĵ���˵��: PullDown���Ըı����ͳ������
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  coring_tkr  : 8;  /* bit[0-7]  :  */
        unsigned int  coring_norm : 8;  /* bit[8-15] :  */
        unsigned int  coring_blk  : 8;  /* bit[16-23]:  */
        unsigned int  reserved    : 8;  /* bit[24-31]: ������ */
    } reg;
} SOC_VPP_VHDPDPCCCORING_UNION;
#endif
#define SOC_VPP_VHDPDPCCCORING_coring_tkr_START   (0)
#define SOC_VPP_VHDPDPCCCORING_coring_tkr_END     (7)
#define SOC_VPP_VHDPDPCCCORING_coring_norm_START  (8)
#define SOC_VPP_VHDPDPCCCORING_coring_norm_END    (15)
#define SOC_VPP_VHDPDPCCCORING_coring_blk_START   (16)
#define SOC_VPP_VHDPDPCCCORING_coring_blk_END     (23)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDPDPCCHTHD_UNION
 �ṹ˵��  : VHDPDPCCHTHD �Ĵ����ṹ���塣��ַƫ����:0x041C����ֵ:0x00000000�����:32
 �Ĵ���˵��: PullDown���Ըı�ˮƽͳ������
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pcc_hthd : 8;  /* bit[0-7] :  */
        unsigned int  reserved : 24; /* bit[8-31]: ������ */
    } reg;
} SOC_VPP_VHDPDPCCHTHD_UNION;
#endif
#define SOC_VPP_VHDPDPCCHTHD_pcc_hthd_START  (0)
#define SOC_VPP_VHDPDPCCHTHD_pcc_hthd_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDPDPCCVTHD_UNION
 �ṹ˵��  : VHDPDPCCVTHD �Ĵ����ṹ���塣��ַƫ����:0x0420����ֵ:0x00000000�����:32
 �Ĵ���˵��: PullDown���Ըı䴹ֱͳ������
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pcc_vthd0 : 8;  /* bit[0-7]  :  */
        unsigned int  pcc_vthd1 : 8;  /* bit[8-15] :  */
        unsigned int  pcc_vthd2 : 8;  /* bit[16-23]:  */
        unsigned int  pcc_vthd3 : 8;  /* bit[24-31]: ������ */
    } reg;
} SOC_VPP_VHDPDPCCVTHD_UNION;
#endif
#define SOC_VPP_VHDPDPCCVTHD_pcc_vthd0_START  (0)
#define SOC_VPP_VHDPDPCCVTHD_pcc_vthd0_END    (7)
#define SOC_VPP_VHDPDPCCVTHD_pcc_vthd1_START  (8)
#define SOC_VPP_VHDPDPCCVTHD_pcc_vthd1_END    (15)
#define SOC_VPP_VHDPDPCCVTHD_pcc_vthd2_START  (16)
#define SOC_VPP_VHDPDPCCVTHD_pcc_vthd2_END    (23)
#define SOC_VPP_VHDPDPCCVTHD_pcc_vthd3_START  (24)
#define SOC_VPP_VHDPDPCCVTHD_pcc_vthd3_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDPDITDIFFVTHD_UNION
 �ṹ˵��  : VHDPDITDIFFVTHD �Ĵ����ṹ���塣��ַƫ����:0x0424����ֵ:0x00000000�����:32
 �Ĵ���˵��: Pulldown
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  itdiff_vthd0 : 8;  /* bit[0-7]  :  */
        unsigned int  itdiff_vthd1 : 8;  /* bit[8-15] :  */
        unsigned int  itdiff_vthd2 : 8;  /* bit[16-23]:  */
        unsigned int  itdiff_vthd3 : 8;  /* bit[24-31]: ������ */
    } reg;
} SOC_VPP_VHDPDITDIFFVTHD_UNION;
#endif
#define SOC_VPP_VHDPDITDIFFVTHD_itdiff_vthd0_START  (0)
#define SOC_VPP_VHDPDITDIFFVTHD_itdiff_vthd0_END    (7)
#define SOC_VPP_VHDPDITDIFFVTHD_itdiff_vthd1_START  (8)
#define SOC_VPP_VHDPDITDIFFVTHD_itdiff_vthd1_END    (15)
#define SOC_VPP_VHDPDITDIFFVTHD_itdiff_vthd2_START  (16)
#define SOC_VPP_VHDPDITDIFFVTHD_itdiff_vthd2_END    (23)
#define SOC_VPP_VHDPDITDIFFVTHD_itdiff_vthd3_START  (24)
#define SOC_VPP_VHDPDITDIFFVTHD_itdiff_vthd3_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDPDLASITHD_UNION
 �ṹ˵��  : VHDPDLASITHD �Ĵ����ṹ���塣��ַƫ����:0x0428����ֵ:0x00000000�����:32
 �Ĵ���˵��: Pulldown��˿ͳ������
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  lasi_thd : 8;  /* bit[0-7]  :  */
        unsigned int  edge_thd : 8;  /* bit[8-15] :  */
        unsigned int  reserved : 16; /* bit[16-31]: ������ */
    } reg;
} SOC_VPP_VHDPDLASITHD_UNION;
#endif
#define SOC_VPP_VHDPDLASITHD_lasi_thd_START  (0)
#define SOC_VPP_VHDPDLASITHD_lasi_thd_END    (7)
#define SOC_VPP_VHDPDLASITHD_edge_thd_START  (8)
#define SOC_VPP_VHDPDLASITHD_edge_thd_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDPDFRMITDIFF_UNION
 �ṹ˵��  : VHDPDFRMITDIFF �Ĵ����ṹ���塣��ַƫ����:0x042C����ֵ:0x00000000�����:32
 �Ĵ���˵��: Pulldown��ֹ����ͳ�ƽ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  frm_it_diff : 32; /* bit[0-31]:  */
    } reg;
} SOC_VPP_VHDPDFRMITDIFF_UNION;
#endif
#define SOC_VPP_VHDPDFRMITDIFF_frm_it_diff_START  (0)
#define SOC_VPP_VHDPDFRMITDIFF_frm_it_diff_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDPDSTLBLKSAD_UNION
 �ṹ˵��  : VHDPDSTLBLKSAD �Ĵ����ṹ���塣��ַƫ����:0x0430��0x046C����ֵ:0x00000000�����:32
 �Ĵ���˵��: Pulldown��ֹ����SADͳ�ƽ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  stlblk_sad : 32; /* bit[0-31]:  */
    } reg;
} SOC_VPP_VHDPDSTLBLKSAD_UNION;
#endif
#define SOC_VPP_VHDPDSTLBLKSAD_stlblk_sad_START  (0)
#define SOC_VPP_VHDPDSTLBLKSAD_stlblk_sad_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDPDHISTBIN_UNION
 �ṹ˵��  : VHDPDHISTBIN �Ĵ����ṹ���塣��ַƫ����:0x0470��0x47C����ֵ:0x00000000�����:32
 �Ĵ���˵��: Pulldownֱ��ͼͳ�ƽ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  hsit_bin : 32; /* bit[0-31]:  */
    } reg;
} SOC_VPP_VHDPDHISTBIN_UNION;
#endif
#define SOC_VPP_VHDPDHISTBIN_hsit_bin_START  (0)
#define SOC_VPP_VHDPDHISTBIN_hsit_bin_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDPDUMMATCH0_UNION
 �ṹ˵��  : VHDPDUMMATCH0 �Ĵ����ṹ���塣��ַƫ����:0x0480����ֵ:0x00000000�����:32
 �Ĵ���˵��: PullDown
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  match_um : 32; /* bit[0-31]:  */
    } reg;
} SOC_VPP_VHDPDUMMATCH0_UNION;
#endif
#define SOC_VPP_VHDPDUMMATCH0_match_um_START  (0)
#define SOC_VPP_VHDPDUMMATCH0_match_um_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDPDUMNOMATCH0_UNION
 �ṹ˵��  : VHDPDUMNOMATCH0 �Ĵ����ṹ���塣��ַƫ����:0x0484����ֵ:0x00000000�����:32
 �Ĵ���˵��: PullDown
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  nomatch_um : 32; /* bit[0-31]:  */
    } reg;
} SOC_VPP_VHDPDUMNOMATCH0_UNION;
#endif
#define SOC_VPP_VHDPDUMNOMATCH0_nomatch_um_START  (0)
#define SOC_VPP_VHDPDUMNOMATCH0_nomatch_um_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDPDUMMATCH1_UNION
 �ṹ˵��  : VHDPDUMMATCH1 �Ĵ����ṹ���塣��ַƫ����:0x0488����ֵ:0x00000000�����:32
 �Ĵ���˵��: PullDown
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  match_um : 32; /* bit[0-31]:  */
    } reg;
} SOC_VPP_VHDPDUMMATCH1_UNION;
#endif
#define SOC_VPP_VHDPDUMMATCH1_match_um_START  (0)
#define SOC_VPP_VHDPDUMMATCH1_match_um_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDPDUMNOMATCH1_UNION
 �ṹ˵��  : VHDPDUMNOMATCH1 �Ĵ����ṹ���塣��ַƫ����:0x048C����ֵ:0x00000000�����:32
 �Ĵ���˵��: PullDown
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  nomatch_um : 32; /* bit[0-31]:  */
    } reg;
} SOC_VPP_VHDPDUMNOMATCH1_UNION;
#endif
#define SOC_VPP_VHDPDUMNOMATCH1_nomatch_um_START  (0)
#define SOC_VPP_VHDPDUMNOMATCH1_nomatch_um_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDPDPCCFFWD_UNION
 �ṹ˵��  : VHDPDPCCFFWD �Ĵ����ṹ���塣��ַƫ����:0x0490����ֵ:0x00000000�����:32
 �Ĵ���˵��: PullDown
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pcc_ffwd : 32; /* bit[0-31]:  */
    } reg;
} SOC_VPP_VHDPDPCCFFWD_UNION;
#endif
#define SOC_VPP_VHDPDPCCFFWD_pcc_ffwd_START  (0)
#define SOC_VPP_VHDPDPCCFFWD_pcc_ffwd_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDPDPCCFWD_UNION
 �ṹ˵��  : VHDPDPCCFWD �Ĵ����ṹ���塣��ַƫ����:0x0494����ֵ:0x00000000�����:32
 �Ĵ���˵��: PullDown
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pcc_fwd : 32; /* bit[0-31]:  */
    } reg;
} SOC_VPP_VHDPDPCCFWD_UNION;
#endif
#define SOC_VPP_VHDPDPCCFWD_pcc_fwd_START  (0)
#define SOC_VPP_VHDPDPCCFWD_pcc_fwd_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDPDPCCBWD_UNION
 �ṹ˵��  : VHDPDPCCBWD �Ĵ����ṹ���塣��ַƫ����:0x0498����ֵ:0x00000000�����:32
 �Ĵ���˵��: PullDown
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pcc_bwd : 32; /* bit[0-31]:  */
    } reg;
} SOC_VPP_VHDPDPCCBWD_UNION;
#endif
#define SOC_VPP_VHDPDPCCBWD_pcc_bwd_START  (0)
#define SOC_VPP_VHDPDPCCBWD_pcc_bwd_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDPDPCCCRSS_UNION
 �ṹ˵��  : VHDPDPCCCRSS �Ĵ����ṹ���塣��ַƫ����:0x49C����ֵ:0x00000000�����:32
 �Ĵ���˵��: PullDown
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pcc_crss : 32; /* bit[0-31]:  */
    } reg;
} SOC_VPP_VHDPDPCCCRSS_UNION;
#endif
#define SOC_VPP_VHDPDPCCCRSS_pcc_crss_START  (0)
#define SOC_VPP_VHDPDPCCCRSS_pcc_crss_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDPDPCCPW_UNION
 �ṹ˵��  : VHDPDPCCPW �Ĵ����ṹ���塣��ַƫ����:0x4A0����ֵ:0x00000000�����:32
 �Ĵ���˵��: PullDown
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pcc_pw : 32; /* bit[0-31]:  */
    } reg;
} SOC_VPP_VHDPDPCCPW_UNION;
#endif
#define SOC_VPP_VHDPDPCCPW_pcc_pw_START  (0)
#define SOC_VPP_VHDPDPCCPW_pcc_pw_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDPDPCCFWDTKR_UNION
 �ṹ˵��  : VHDPDPCCFWDTKR �Ĵ����ṹ���塣��ַƫ����:0x4A4����ֵ:0x00000000�����:32
 �Ĵ���˵��: PullDown
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pcc_fwd_tkr : 32; /* bit[0-31]:  */
    } reg;
} SOC_VPP_VHDPDPCCFWDTKR_UNION;
#endif
#define SOC_VPP_VHDPDPCCFWDTKR_pcc_fwd_tkr_START  (0)
#define SOC_VPP_VHDPDPCCFWDTKR_pcc_fwd_tkr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDPDPCCBWDTKR_UNION
 �ṹ˵��  : VHDPDPCCBWDTKR �Ĵ����ṹ���塣��ַƫ����:0x4A8����ֵ:0x00000000�����:32
 �Ĵ���˵��: PullDown
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pcc_bwd_tkr : 32; /* bit[0-31]:  */
    } reg;
} SOC_VPP_VHDPDPCCBWDTKR_UNION;
#endif
#define SOC_VPP_VHDPDPCCBWDTKR_pcc_bwd_tkr_START  (0)
#define SOC_VPP_VHDPDPCCBWDTKR_pcc_bwd_tkr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDPDPCCBLKFWD_UNION
 �ṹ˵��  : VHDPDPCCBLKFWD �Ĵ����ṹ���塣��ַƫ����:0x04AC��0x4CC����ֵ:0x00000000�����:32
 �Ĵ���˵��: PullDown
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pcc_blk_fwd : 32; /* bit[0-31]:  */
    } reg;
} SOC_VPP_VHDPDPCCBLKFWD_UNION;
#endif
#define SOC_VPP_VHDPDPCCBLKFWD_pcc_blk_fwd_START  (0)
#define SOC_VPP_VHDPDPCCBLKFWD_pcc_blk_fwd_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDPDPCCBLKBWD_UNION
 �ṹ˵��  : VHDPDPCCBLKBWD �Ĵ����ṹ���塣��ַƫ����:0x04D0��0x4F0����ֵ:0x00000000�����:32
 �Ĵ���˵��: PullDown
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pcc_blk_bwd : 32; /* bit[0-31]:  */
    } reg;
} SOC_VPP_VHDPDPCCBLKBWD_UNION;
#endif
#define SOC_VPP_VHDPDPCCBLKBWD_pcc_blk_bwd_START  (0)
#define SOC_VPP_VHDPDPCCBLKBWD_pcc_blk_bwd_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDPDLASICNT14_UNION
 �ṹ˵��  : VHDPDLASICNT14 �Ĵ����ṹ���塣��ַƫ����:0x4F4����ֵ:0x00000000�����:32
 �Ĵ���˵��: PullDown
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  lasi_cnt : 32; /* bit[0-31]:  */
    } reg;
} SOC_VPP_VHDPDLASICNT14_UNION;
#endif
#define SOC_VPP_VHDPDLASICNT14_lasi_cnt_START  (0)
#define SOC_VPP_VHDPDLASICNT14_lasi_cnt_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDPDLASICNT32_UNION
 �ṹ˵��  : VHDPDLASICNT32 �Ĵ����ṹ���塣��ַƫ����:0x4F8����ֵ:0x00000000�����:32
 �Ĵ���˵��: PullDown
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  lasi_cnt : 32; /* bit[0-31]:  */
    } reg;
} SOC_VPP_VHDPDLASICNT32_UNION;
#endif
#define SOC_VPP_VHDPDLASICNT32_lasi_cnt_START  (0)
#define SOC_VPP_VHDPDLASICNT32_lasi_cnt_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDPDLASICNT34_UNION
 �ṹ˵��  : VHDPDLASICNT34 �Ĵ����ṹ���塣��ַƫ����:0x4FC����ֵ:0x00000000�����:32
 �Ĵ���˵��: PullDown
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  lasi_cnt : 32; /* bit[0-31]:  */
    } reg;
} SOC_VPP_VHDPDLASICNT34_UNION;
#endif
#define SOC_VPP_VHDPDLASICNT34_lasi_cnt_START  (0)
#define SOC_VPP_VHDPDLASICNT34_lasi_cnt_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDHLCOEF_UNION
 �ṹ˵��  : VHDHLCOEF �Ĵ����ṹ���塣��ַƫ����:0x2000��0x210C����ֵ:0x00000000�����:32
 �Ĵ���˵��: VHDˮƽ���������˲�ϵ���Ĵ�����
            ÿ���˲���ϵ��Ϊ10bit���ɷ���λ��С��λ��ɣ����λΪ����λ����9bitΪС��λ�ľ���ֵ������ϵ�������Ƭ��Memory�У����Ĭ��ֵΪ����̬��
            VHDˮƽ���������˲�Ϊ8��32��λ�����ڶԳƹ�ϵ�����洢17��ϵ������0��16��λ��8��ϵ����ÿ���Ĵ�����ַ����2��10����ϵ�������һ����λ��8��ϵ����Ҫ4��32���ؼĴ�����ַ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  hlcoefn1 : 10; /* bit[0-9]  : ˮƽ���������˲�ϵ����
                                                    ���Ĵ�����ַ[3:0]����Ϊ0x0ʱ����ʾ��1��ϵ����&#13;���Ĵ�����ַ[3:0]����Ϊ0x4ʱ����ʾ��3��ϵ����&#13;���Ĵ�����ַ[3:0]����Ϊ0x8ʱ����ʾ��5��ϵ����&#13;���Ĵ�����ַ[3:0]����Ϊ0xCʱ����ʾ��7��ϵ���� */
        unsigned int  reserved_0: 6;  /* bit[10-15]: ������ */
        unsigned int  hlcoefn2 : 10; /* bit[16-25]: ˮƽ���������˲�ϵ����
                                                    ���Ĵ�����ַ[3:0]����Ϊ0x0ʱ����ʾ��2��ϵ����&#13;���Ĵ�����ַ[3:0]����Ϊ0x4ʱ����ʾ��4��ϵ����&#13;���Ĵ�����ַ[3:0]����Ϊ0x8ʱ����ʾ��6��ϵ����&#13;���Ĵ�����ַ[3:0]����Ϊ0xCʱ����ʾ��8��ϵ���� */
        unsigned int  reserved_1: 6;  /* bit[26-31]: ������ */
    } reg;
} SOC_VPP_VHDHLCOEF_UNION;
#endif
#define SOC_VPP_VHDHLCOEF_hlcoefn1_START  (0)
#define SOC_VPP_VHDHLCOEF_hlcoefn1_END    (9)
#define SOC_VPP_VHDHLCOEF_hlcoefn2_START  (16)
#define SOC_VPP_VHDHLCOEF_hlcoefn2_END    (25)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDHCCOEF_UNION
 �ṹ˵��  : VHDHCCOEF �Ĵ����ṹ���塣��ַƫ����:0x2200��0x2284����ֵ:0x00000000�����:32
 �Ĵ���˵��: VHDˮƽɫ�������˲�ϵ���Ĵ������洢��ʽ�ο�VHDHLCOEF��VHDˮƽɫ�������˲�Ϊ4��32��λ�����ڶԳƹ�ϵ�����洢17��ϵ������0��16��λ��4��ϵ����ÿ���Ĵ�����ַ����2��10����ϵ�������һ����λ��4��ϵ����Ҫ2��32���ؼĴ�����ַ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  hccoefn1 : 10; /* bit[0-9]  : ˮƽɫ�������˲�ϵ����
                                                    ���Ĵ�����ַ[3:0]����Ϊ0x0����0x8ʱ����ʾ��1��ϵ����&#13;���Ĵ�����ַ[3:0]����Ϊ0x4����0xCʱ����ʾ��3��ϵ���� */
        unsigned int  reserved_0: 6;  /* bit[10-15]: ���� */
        unsigned int  hccoefn2 : 10; /* bit[16-25]: ˮƽɫ�������˲�ϵ����
                                                    ���Ĵ�����ַ[3:0]����Ϊ0x0����0x8ʱ����ʾ��2��ϵ����&#13;���Ĵ�����ַ[3:0]����Ϊ0x4����0xCʱ����ʾ��4��ϵ���� */
        unsigned int  reserved_1: 6;  /* bit[26-31]: ���� */
    } reg;
} SOC_VPP_VHDHCCOEF_UNION;
#endif
#define SOC_VPP_VHDHCCOEF_hccoefn1_START  (0)
#define SOC_VPP_VHDHCCOEF_hccoefn1_END    (9)
#define SOC_VPP_VHDHCCOEF_hccoefn2_START  (16)
#define SOC_VPP_VHDHCCOEF_hccoefn2_END    (25)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDVLCOEF_UNION
 �ṹ˵��  : VHDVLCOEF �Ĵ����ṹ���塣��ַƫ����:0x2400��0x250C����ֵ:0x00000000�����:32
 �Ĵ���˵��: VHD��ֱ���������˲�ϵ���Ĵ������洢��ʽ�ο�VHDHLCOEF��VHD��ֱ���������˲�Ϊ6��32��λ�����ڶԳƹ�ϵ�����洢17��ϵ������0��16��λ��4��ϵ����ÿ���Ĵ�����ַ����2��10����ϵ����һ����λ��6��ϵ����Ҫ4��32���ؼĴ�����ַ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  vlcoefn1 : 10; /* bit[0-9]  : ��ֱ���������˲�ϵ����
                                                    ���Ĵ�����ַ[3:0]����Ϊ0x0ʱ����ʾ��1��ϵ����&#13;���Ĵ�����ַ[3:0]����Ϊ0x4ʱ����ʾ��3��ϵ����&#13;���Ĵ�����ַ[3:0]����Ϊ0x8ʱ����ʾ��5��ϵ����&#13;���Ĵ�����ַ[3:0]����Ϊ0xCʱ��Ϊ����λ�� */
        unsigned int  reserved_0: 6;  /* bit[10-15]: ������ */
        unsigned int  vlcoefn2 : 10; /* bit[16-25]: ��ֱ���������˲�ϵ����
                                                    ���Ĵ�����ַ[3:0]����Ϊ0x0ʱ����ʾ��2��ϵ����&#13;���Ĵ�����ַ[3:0]����Ϊ0x4ʱ����ʾ��4��ϵ����&#13;���Ĵ�����ַ[3:0]����Ϊ0x8ʱ����ʾ��6��ϵ����&#13;���Ĵ�����ַ[3:0]����Ϊ0xCʱ��Ϊ����λ�� */
        unsigned int  reserved_1: 6;  /* bit[26-31]: ������ */
    } reg;
} SOC_VPP_VHDVLCOEF_UNION;
#endif
#define SOC_VPP_VHDVLCOEF_vlcoefn1_START  (0)
#define SOC_VPP_VHDVLCOEF_vlcoefn1_END    (9)
#define SOC_VPP_VHDVLCOEF_vlcoefn2_START  (16)
#define SOC_VPP_VHDVLCOEF_vlcoefn2_END    (25)


/*****************************************************************************
 �ṹ��    : SOC_VPP_VHDVCCOEF_UNION
 �ṹ˵��  : VHDVCCOEF �Ĵ����ṹ���塣��ַƫ����:0x2600��0x2684����ֵ:0x00000000�����:32
 �Ĵ���˵��: VHD��ֱɫ�������˲�ϵ���Ĵ������洢��ʽ�ο�VHDHLCOEF��VHD��ֱɫ�������˲�Ϊ4��32��λ�����ڶԳƹ�ϵ�����洢17��ϵ������0��16��λ��4��ϵ����ÿ���Ĵ�����ַ����2��10����ϵ�������һ����λ��4��ϵ����Ҫ2��32���ؼĴ�����ַ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  vccoefn1 : 10; /* bit[0-9]  : ��ֱ���������˲�ϵ����
                                                    ���Ĵ�����ַ[3:0]����Ϊ0x0����0x8ʱ����ʾ��1��ϵ����&#13;���Ĵ�����ַ[3:0]����Ϊ0x4����0xCʱ����ʾ��3��ϵ���� */
        unsigned int  reserved_0: 6;  /* bit[10-15]: ������ */
        unsigned int  vccoefn2 : 10; /* bit[16-25]: ��ֱ���������˲�ϵ����
                                                    ���Ĵ�����ַ[3:0]����Ϊ0x0����0x8ʱ����ʾ��2��ϵ����&#13;���Ĵ�����ַ[3:0]����Ϊ0x4����0xCʱ����ʾ��4��ϵ���� */
        unsigned int  reserved_1: 6;  /* bit[26-31]: ������ */
    } reg;
} SOC_VPP_VHDVCCOEF_UNION;
#endif
#define SOC_VPP_VHDVCCOEF_vccoefn1_START  (0)
#define SOC_VPP_VHDVCCOEF_vccoefn1_END    (9)
#define SOC_VPP_VHDVCCOEF_vccoefn2_START  (16)
#define SOC_VPP_VHDVCCOEF_vccoefn2_END    (25)






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

#endif /* end of soc_vpp_interface.h */
