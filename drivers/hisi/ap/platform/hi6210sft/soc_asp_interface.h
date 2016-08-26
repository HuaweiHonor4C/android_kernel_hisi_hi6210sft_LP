

/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/

#ifndef __SOC_ASP_INTERFACE_H__
#define __SOC_ASP_INTERFACE_H__

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
/* �Ĵ���˵��������ͨ��TX0���ƼĴ�����
   λ����UNION�ṹ:  SOC_ASP_TX0_UNION */
#define SOC_ASP_TX0_ADDR(base)                        ((base) + (0x000))

/* �Ĵ���˵��������ͨ��TX1���ƼĴ�����
   λ����UNION�ṹ:  SOC_ASP_TX1_UNION */
#define SOC_ASP_TX1_ADDR(base)                        ((base) + (0x004))

/* �Ĵ���˵��������ͨ��TX2���ƼĴ�����
   λ����UNION�ṹ:  SOC_ASP_TX2_UNION */
#define SOC_ASP_TX2_ADDR(base)                        ((base) + (0x008))

/* �Ĵ���˵��������ͨ��TX3���ƼĴ�����
   λ����UNION�ṹ:  SOC_ASP_TX3_UNION */
#define SOC_ASP_TX3_ADDR(base)                        ((base) + (0x00C))

/* �Ĵ���˵��������ͨ��RX���ƼĴ�����
   λ����UNION�ṹ:  SOC_ASP_RX_UNION */
#define SOC_ASP_RX_ADDR(base)                         ((base) + (0x010))

/* �Ĵ���˵����ASP DMAʹ�ܼĴ�����
   λ����UNION�ṹ:  SOC_ASP_DER_UNION */
#define SOC_ASP_DER_ADDR(base)                        ((base) + (0x014))

/* �Ĵ���˵����ASP DMAֹͣʹ�ܼĴ�����
   λ����UNION�ṹ:  SOC_ASP_DSTOP_UNION */
#define SOC_ASP_DSTOP_ADDR(base)                      ((base) + (0x018))

/* �Ĵ���˵����ASPȫ���ж�״̬�Ĵ�����
   λ����UNION�ṹ:  SOC_ASP_ASS_ISR_UNION */
#define SOC_ASP_ASS_ISR_ADDR(base)                    ((base) + (0x01C))

/* �Ĵ���˵����ASPԭʼ״̬�Ĵ�����
   λ����UNION�ṹ:  SOC_ASP_IRSR_UNION */
#define SOC_ASP_IRSR_ADDR(base)                       ((base) + (0x020))

/* �Ĵ���˵����ASP�ж�ʹ�ܼĴ�����
   λ����UNION�ṹ:  SOC_ASP_IER_UNION */
#define SOC_ASP_IER_ADDR(base)                        ((base) + (0x024))

/* �Ĵ���˵����ASP���κ�״̬�Ĵ�����
   λ����UNION�ṹ:  SOC_ASP_IMSR_UNION */
#define SOC_ASP_IMSR_ADDR(base)                       ((base) + (0x028))

/* �Ĵ���˵����ASP�ж�����Ĵ�����
   λ����UNION�ṹ:  SOC_ASP_ICR_UNION */
#define SOC_ASP_ICR_ADDR(base)                        ((base) + (0x02C))

/* �Ĵ���˵����ͨ���¸���ʼ�Ĵ�����
   λ����UNION�ṹ:  SOC_ASP_PCMNSSR_UNION */
#define SOC_ASP_PCMNSSR_ADDR(base)                    ((base) + (0x030))

/* �Ĵ���˵����TX0�ز����Ĵ�����
   λ����UNION�ṹ:  SOC_ASP_P0RSRR_UNION */
#define SOC_ASP_P0RSRR_ADDR(base)                     ((base) + (0x034))

/* �Ĵ���˵����TX1�ز����Ĵ�����
   λ����UNION�ṹ:  SOC_ASP_P1RSRR_UNION */
#define SOC_ASP_P1RSRR_ADDR(base)                     ((base) + (0x038))

/* �Ĵ���˵����TX2�ز����Ĵ�����
   λ����UNION�ṹ:  SOC_ASP_P2RSRR_UNION */
#define SOC_ASP_P2RSRR_ADDR(base)                     ((base) + (0x03C))

/* �Ĵ���˵����TX3�ز����Ĵ�����
   λ����UNION�ṹ:  SOC_ASP_P3RSRR_UNION */
#define SOC_ASP_P3RSRR_ADDR(base)                     ((base) + (0x040))

/* �Ĵ���˵����TX0����ʹ�ܼĴ�����
   λ����UNION�ṹ:  SOC_ASP_FADEINEN0_UNION */
#define SOC_ASP_FADEINEN0_ADDR(base)                  ((base) + (0x044))

/* �Ĵ���˵����TX0����ʹ�ܼĴ�����
   λ����UNION�ṹ:  SOC_ASP_FADEOUTEN0_UNION */
#define SOC_ASP_FADEOUTEN0_ADDR(base)                 ((base) + (0x048))

/* �Ĵ���˵����TX0���뵭�����ʡ�
   λ����UNION�ṹ:  SOC_ASP_FADERATE0_UNION */
#define SOC_ASP_FADERATE0_ADDR(base)                  ((base) + (0x04C))

/* �Ĵ���˵����TX1����ʹ�ܼĴ�����
   λ����UNION�ṹ:  SOC_ASP_FADEINEN1_UNION */
#define SOC_ASP_FADEINEN1_ADDR(base)                  ((base) + (0x050))

/* �Ĵ���˵����TX1����ʹ�ܼĴ�����
   λ����UNION�ṹ:  SOC_ASP_FADEOUTEN1_UNION */
#define SOC_ASP_FADEOUTEN1_ADDR(base)                 ((base) + (0x054))

/* �Ĵ���˵����TX1���뵭�����ʡ�
   λ����UNION�ṹ:  SOC_ASP_FADERATE1_UNION */
#define SOC_ASP_FADERATE1_ADDR(base)                  ((base) + (0x058))

/* �Ĵ���˵����TX2����ʹ�ܼĴ�����
   λ����UNION�ṹ:  SOC_ASP_FADEINEN2_UNION */
#define SOC_ASP_FADEINEN2_ADDR(base)                  ((base) + (0x05C))

/* �Ĵ���˵����TX2����ʹ�ܼĴ�����
   λ����UNION�ṹ:  SOC_ASP_FADEOUTEN2_UNION */
#define SOC_ASP_FADEOUTEN2_ADDR(base)                 ((base) + (0x060))

/* �Ĵ���˵����TX2���뵭�����ʡ�
   λ����UNION�ṹ:  SOC_ASP_FADERATE2_UNION */
#define SOC_ASP_FADERATE2_ADDR(base)                  ((base) + (0x064))

/* �Ĵ���˵����TX3����ʹ�ܼĴ�����
   λ����UNION�ṹ:  SOC_ASP_FADEINEN3_UNION */
#define SOC_ASP_FADEINEN3_ADDR(base)                  ((base) + (0x068))

/* �Ĵ���˵����TX3����ʹ�ܼĴ�����
   λ����UNION�ṹ:  SOC_ASP_FADEOUTEN3_UNION */
#define SOC_ASP_FADEOUTEN3_ADDR(base)                 ((base) + (0x06C))

/* �Ĵ���˵����TX3���뵭�����ʡ�
   λ����UNION�ṹ:  SOC_ASP_FADERATE3_UNION */
#define SOC_ASP_FADERATE3_ADDR(base)                  ((base) + (0x070))

/* �Ĵ���˵����PCM0ͨ������������Ĵ�����
   λ����UNION�ṹ:  SOC_ASP_P0LCGR_UNION */
#define SOC_ASP_P0LCGR_ADDR(base)                     ((base) + (0x074))

/* �Ĵ���˵����PCM0ͨ������������Ĵ�����
   λ����UNION�ṹ:  SOC_ASP_P0RCGR_UNION */
#define SOC_ASP_P0RCGR_ADDR(base)                     ((base) + (0x078))

/* �Ĵ���˵����PCM1ͨ������������Ĵ�����
   λ����UNION�ṹ:  SOC_ASP_P1LCGR_UNION */
#define SOC_ASP_P1LCGR_ADDR(base)                     ((base) + (0x07C))

/* �Ĵ���˵����PCM1ͨ������������Ĵ�����
   λ����UNION�ṹ:  SOC_ASP_P1RCGR_UNION */
#define SOC_ASP_P1RCGR_ADDR(base)                     ((base) + (0x080))

/* �Ĵ���˵����PCM2ͨ������������Ĵ�����
   λ����UNION�ṹ:  SOC_ASP_P2LCGR_UNION */
#define SOC_ASP_P2LCGR_ADDR(base)                     ((base) + (0x084))

/* �Ĵ���˵����PCM2ͨ������������Ĵ�����
   λ����UNION�ṹ:  SOC_ASP_P2RCGR_UNION */
#define SOC_ASP_P2RCGR_ADDR(base)                     ((base) + (0x088))

/* �Ĵ���˵����PCM3ͨ��0��������Ĵ�����
   λ����UNION�ṹ:  SOC_ASP_P30CGR_UNION */
#define SOC_ASP_P30CGR_ADDR(base)                     ((base) + (0x08C))

/* �Ĵ���˵����PCM3ͨ��1��������Ĵ�����
   λ����UNION�ṹ:  SOC_ASP_P31CGR_UNION */
#define SOC_ASP_P31CGR_ADDR(base)                     ((base) + (0x090))

/* �Ĵ���˵����PCM3ͨ��2��������Ĵ�����
   λ����UNION�ṹ:  SOC_ASP_P32CGR_UNION */
#define SOC_ASP_P32CGR_ADDR(base)                     ((base) + (0x094))

/* �Ĵ���˵����PCM3ͨ��3��������Ĵ�����
   λ����UNION�ṹ:  SOC_ASP_P33CGR_UNION */
#define SOC_ASP_P33CGR_ADDR(base)                     ((base) + (0x098))

/* �Ĵ���˵����PCM3ͨ��4��������Ĵ�����
   λ����UNION�ṹ:  SOC_ASP_P34CGR_UNION */
#define SOC_ASP_P34CGR_ADDR(base)                     ((base) + (0x09C))

/* �Ĵ���˵����PCM3ͨ��5��������Ĵ�����
   λ����UNION�ṹ:  SOC_ASP_P35CGR_UNION */
#define SOC_ASP_P35CGR_ADDR(base)                     ((base) + (0x0A0))

/* �Ĵ���˵����PCM3ͨ��6��������Ĵ�����
   λ����UNION�ṹ:  SOC_ASP_P36CGR_UNION */
#define SOC_ASP_P36CGR_ADDR(base)                     ((base) + (0x0A4))

/* �Ĵ���˵����PCM3ͨ��7��������Ĵ�����
   λ����UNION�ṹ:  SOC_ASP_P37CGR_UNION */
#define SOC_ASP_P37CGR_ADDR(base)                     ((base) + (0x0A8))

/* �Ĵ���˵�����������üĴ�����
   λ����UNION�ṹ:  SOC_ASP_MIXCTL_UNION */
#define SOC_ASP_MIXCTL_ADDR(base)                     ((base) + (0x0AC))

/* �Ĵ���˵����PCMRXAͨ��������ʼ��ַ�Ĵ�����
   λ����UNION�ṹ:  SOC_ASP_PRASAR_UNION */
#define SOC_ASP_PRASAR_ADDR(base)                     ((base) + (0x0B0))

/* �Ĵ���˵����PCMRXAͨ�����˳��ȼĴ�����
   λ����UNION�ṹ:  SOC_ASP_PRADLR_UNION */
#define SOC_ASP_PRADLR_ADDR(base)                     ((base) + (0x0B4))

/* �Ĵ���˵����PCMRXBͨ��������ʼ��ַ�Ĵ�����
   λ����UNION�ṹ:  SOC_ASP_PRBSAR_UNION */
#define SOC_ASP_PRBSAR_ADDR(base)                     ((base) + (0x0B8))

/* �Ĵ���˵����PCMRXBͨ�����˳��ȼĴ�����
   λ����UNION�ṹ:  SOC_ASP_PRBDLR_UNION */
#define SOC_ASP_PRBDLR_ADDR(base)                     ((base) + (0x0BC))

/* �Ĵ���˵����PCM0Aͨ��������ʼ��ַ�Ĵ�����
   λ����UNION�ṹ:  SOC_ASP_P0ASAR_UNION */
#define SOC_ASP_P0ASAR_ADDR(base)                     ((base) + (0x0C0))

/* �Ĵ���˵����PCM0Aͨ�����˳��ȼĴ�����
   λ����UNION�ṹ:  SOC_ASP_P0ADLR_UNION */
#define SOC_ASP_P0ADLR_ADDR(base)                     ((base) + (0x0C4))

/* �Ĵ���˵����PCM0Bͨ��������ʼ��ַ�Ĵ�����
   λ����UNION�ṹ:  SOC_ASP_P0BSAR_UNION */
#define SOC_ASP_P0BSAR_ADDR(base)                     ((base) + (0x0C8))

/* �Ĵ���˵����PCM0Bͨ�����˳��ȼĴ�����
   λ����UNION�ṹ:  SOC_ASP_P0BDLR_UNION */
#define SOC_ASP_P0BDLR_ADDR(base)                     ((base) + (0x0CC))

/* �Ĵ���˵����PCM1Aͨ��������ʼ��ַ�Ĵ�����
   λ����UNION�ṹ:  SOC_ASP_P1ASAR_UNION */
#define SOC_ASP_P1ASAR_ADDR(base)                     ((base) + (0x0D0))

/* �Ĵ���˵����PCM1Aͨ�����˳��ȼĴ�����
   λ����UNION�ṹ:  SOC_ASP_P1ADLR_UNION */
#define SOC_ASP_P1ADLR_ADDR(base)                     ((base) + (0x0D4))

/* �Ĵ���˵����PCM1Bͨ��������ʼ��ַ�Ĵ���
   λ����UNION�ṹ:  SOC_ASP_P1BSAR_UNION */
#define SOC_ASP_P1BSAR_ADDR(base)                     ((base) + (0x0D8))

/* �Ĵ���˵����PCM1Bͨ�����˳��ȼĴ�����
   λ����UNION�ṹ:  SOC_ASP_P1BDLR_UNION */
#define SOC_ASP_P1BDLR_ADDR(base)                     ((base) + (0x0DC))

/* �Ĵ���˵����PCM2Aͨ��������ʼ��ַ�Ĵ�����
   λ����UNION�ṹ:  SOC_ASP_P2ASAR_UNION */
#define SOC_ASP_P2ASAR_ADDR(base)                     ((base) + (0x0E0))

/* �Ĵ���˵����PCM2Aͨ�����˳��ȼĴ�����
   λ����UNION�ṹ:  SOC_ASP_P2ADLR_UNION */
#define SOC_ASP_P2ADLR_ADDR(base)                     ((base) + (0x0E4))

/* �Ĵ���˵����PCM2Bͨ��������ʼ��ַ�Ĵ�����
   λ����UNION�ṹ:  SOC_ASP_P2BSAR_UNION */
#define SOC_ASP_P2BSAR_ADDR(base)                     ((base) + (0x0E8))

/* �Ĵ���˵����PCM2Bͨ�����˳��ȼĴ�����
   λ����UNION�ṹ:  SOC_ASP_P2BDLR_UNION */
#define SOC_ASP_P2BDLR_ADDR(base)                     ((base) + (0x0EC))

/* �Ĵ���˵����PCM3Aͨ��������ʼ��ַ�Ĵ�����
   λ����UNION�ṹ:  SOC_ASP_P3ASAR_UNION */
#define SOC_ASP_P3ASAR_ADDR(base)                     ((base) + (0x0F0))

/* �Ĵ���˵����PCM3Aͨ�����˳��ȼĴ�����
   λ����UNION�ṹ:  SOC_ASP_P3ADLR_UNION */
#define SOC_ASP_P3ADLR_ADDR(base)                     ((base) + (0x0F4))

/* �Ĵ���˵����PCM3Bͨ��������ʼ��ַ�Ĵ�����
   λ����UNION�ṹ:  SOC_ASP_P3BSAR_UNION */
#define SOC_ASP_P3BSAR_ADDR(base)                     ((base) + (0x0F8))

/* �Ĵ���˵����PCM3Bͨ�����˳��ȼĴ�����
   λ����UNION�ṹ:  SOC_ASP_P3BDLR_UNION */
#define SOC_ASP_P3BDLR_ADDR(base)                     ((base) + (0x0FC))

/* �Ĵ���˵�����������ݲ��Žӿ�ѡ��Ĵ�����
   λ����UNION�ṹ:  SOC_ASP_SPDIFSEL_UNION */
#define SOC_ASP_SPDIFSEL_ADDR(base)                   ((base) + (0x100))

/* �Ĵ���˵����DMAֹͣʱPCM0Aͨ�����˳���״̬�Ĵ�����
   λ����UNION�ṹ:  SOC_ASP_P0ADLS_UNION */
#define SOC_ASP_P0ADLS_ADDR(base)                     ((base) + (0x104))

/* �Ĵ���˵����DMAֹͣʱPCM0Bͨ�����˳���״̬�Ĵ�����
   λ����UNION�ṹ:  SOC_ASP_P0BDLS_UNION */
#define SOC_ASP_P0BDLS_ADDR(base)                     ((base) + (0x108))

/* �Ĵ���˵����DMAֹͣʱPCM1Aͨ�����˳���״̬�Ĵ�����
   λ����UNION�ṹ:  SOC_ASP_P1ADLS_UNION */
#define SOC_ASP_P1ADLS_ADDR(base)                     ((base) + (0x10C))

/* �Ĵ���˵����DMAֹͣʱPCM1Bͨ�����˳���״̬�Ĵ�����
   λ����UNION�ṹ:  SOC_ASP_P1BDLS_UNION */
#define SOC_ASP_P1BDLS_ADDR(base)                     ((base) + (0x110))

/* �Ĵ���˵����DMAֹͣʱPCM2Aͨ�����˳���״̬�Ĵ�����
   λ����UNION�ṹ:  SOC_ASP_P2ADLS_UNION */
#define SOC_ASP_P2ADLS_ADDR(base)                     ((base) + (0x114))

/* �Ĵ���˵����DMAֹͣʱPCM2Bͨ�����˳���״̬�Ĵ�����
   λ����UNION�ṹ:  SOC_ASP_P2BDLS_UNION */
#define SOC_ASP_P2BDLS_ADDR(base)                     ((base) + (0x118))

/* �Ĵ���˵����DMAֹͣʱPCM3Aͨ�����˳���״̬�Ĵ�����
   λ����UNION�ṹ:  SOC_ASP_P3ADLS_UNION */
#define SOC_ASP_P3ADLS_ADDR(base)                     ((base) + (0x11C))

/* �Ĵ���˵����DMAֹͣʱPCM3Bͨ�����˳���״̬�Ĵ�����
   λ����UNION�ṹ:  SOC_ASP_P3BDLS_UNION */
#define SOC_ASP_P3BDLS_ADDR(base)                     ((base) + (0x120))

/* �Ĵ���˵����DMAֹͣʱPCMRXAͨ�����˳���״̬�Ĵ�����
   λ����UNION�ṹ:  SOC_ASP_PRADLS_UNION */
#define SOC_ASP_PRADLS_ADDR(base)                     ((base) + (0x124))

/* �Ĵ���˵����DMAֹͣʱPCMRXBͨ�����˳���״̬�Ĵ�����
   λ����UNION�ṹ:  SOC_ASP_PRBDLS_UNION */
#define SOC_ASP_PRBDLS_ADDR(base)                     ((base) + (0x128))

/* �Ĵ���˵����DMA�������ݻ���FIFO״̬�Ĵ�����
   λ����UNION�ṹ:  SOC_ASP_FDS_UNION */
#define SOC_ASP_FDS_ADDR(base)                        ((base) + (0x12C))

/* �Ĵ���˵����PCM0Aͨ��DMA����ʣ�೤��״̬�Ĵ�����
   λ����UNION�ṹ:  SOC_ASP_P0ADL_UNION */
#define SOC_ASP_P0ADL_ADDR(base)                      ((base) + (0x130))

/* �Ĵ���˵����PCM0Bͨ��DMA����ʣ�೤��״̬�Ĵ�����
   λ����UNION�ṹ:  SOC_ASP_P0BDL_UNION */
#define SOC_ASP_P0BDL_ADDR(base)                      ((base) + (0x134))

/* �Ĵ���˵����PCM1Aͨ��DMA����ʣ�೤��״̬�Ĵ�����
   λ����UNION�ṹ:  SOC_ASP_P1ADL_UNION */
#define SOC_ASP_P1ADL_ADDR(base)                      ((base) + (0x138))

/* �Ĵ���˵����PCM1Bͨ��DMA����ʣ�೤��״̬�Ĵ�����
   λ����UNION�ṹ:  SOC_ASP_P1BDL_UNION */
#define SOC_ASP_P1BDL_ADDR(base)                      ((base) + (0x13C))

/* �Ĵ���˵����PCM2Aͨ��DMA����ʣ�೤��״̬�Ĵ�����
   λ����UNION�ṹ:  SOC_ASP_P2ADL_UNION */
#define SOC_ASP_P2ADL_ADDR(base)                      ((base) + (0x140))

/* �Ĵ���˵����PCM2Bͨ��DMA����ʣ�೤��״̬�Ĵ�����
   λ����UNION�ṹ:  SOC_ASP_P2BDL_UNION */
#define SOC_ASP_P2BDL_ADDR(base)                      ((base) + (0x144))

/* �Ĵ���˵����PCM3Aͨ��DMA����ʣ�೤��״̬�Ĵ�����
   λ����UNION�ṹ:  SOC_ASP_P3ADL_UNION */
#define SOC_ASP_P3ADL_ADDR(base)                      ((base) + (0x148))

/* �Ĵ���˵����PCM3Bͨ��DMA����ʣ�೤��״̬�Ĵ�����
   λ����UNION�ṹ:  SOC_ASP_P3BDL_UNION */
#define SOC_ASP_P3BDL_ADDR(base)                      ((base) + (0x14C))

/* �Ĵ���˵����PCMRXAͨ��DMA����ʣ�೤��״̬�Ĵ�����
   λ����UNION�ṹ:  SOC_ASP_PRADL_UNION */
#define SOC_ASP_PRADL_ADDR(base)                      ((base) + (0x150))

/* �Ĵ���˵����PCMRXBͨ��DMA����ʣ�೤��״̬�Ĵ�����
   λ����UNION�ṹ:  SOC_ASP_PRBDL_UNION */
#define SOC_ASP_PRBDL_ADDR(base)                      ((base) + (0x154))





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
 �ṹ��    : SOC_ASP_TX0_UNION
 �ṹ˵��  : TX0 �Ĵ����ṹ���塣��ַƫ����:0x000����ֵ:0x00000000�����:32
 �Ĵ���˵��: ����ͨ��TX0���ƼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  p0dt     : 3;  /* bit[0-2] : TX0ͨ����Ƶ���ݸ�ʽѡ��
                                                   000��stereo 16bit��
                                                   001��mono 16bit��
                                                   010��stereo 8bit��
                                                   011��mono 8bit��
                                                   100- stereo 18bit��
                                                   101-stereo 20bit��
                                                   110������-stereo 24bit�� */
        unsigned int  p0rhp    : 1;  /* bit[3]   : TX0ͨ����Ƶ������������λ��ѡ��
                                                   0����λΪ���������ݣ�
                                                   1����λΪ���������ݡ� */
        unsigned int  p0bdian  : 1;  /* bit[4]   : TX0ͨ����Ƶ���ݴ�С��ѡ��
                                                   0��С�ˣ�
                                                   1����ˡ� */
        unsigned int  p08bit   : 1;  /* bit[5]   : TX0 8bit���ݵķ���֧�֡�
                                                   0���з�������
                                                   1���޷������� */
        unsigned int  pcm0en   : 1;  /* bit[6]   : TX0ͨ��ʹ�ܡ�
                                                   0����ʹ�ܣ�
                                                   1��ʹ�ܡ� */
        unsigned int  pcm0ge   : 1;  /* bit[7]   : PCM0ͨ������ʹ�ܡ�
                                                   0����ʹ�ܣ�
                                                   1��ʹ�ܡ� */
        unsigned int  odsr     : 1;  /* bit[8]   : Resampleģ��������ݲ�����ѡ��
                                                   0��48KHz��
                                                   1��96KHz�� */
        unsigned int  reserved : 23; /* bit[9-31]: ������ */
    } reg;
} SOC_ASP_TX0_UNION;
#endif
#define SOC_ASP_TX0_p0dt_START      (0)
#define SOC_ASP_TX0_p0dt_END        (2)
#define SOC_ASP_TX0_p0rhp_START     (3)
#define SOC_ASP_TX0_p0rhp_END       (3)
#define SOC_ASP_TX0_p0bdian_START   (4)
#define SOC_ASP_TX0_p0bdian_END     (4)
#define SOC_ASP_TX0_p08bit_START    (5)
#define SOC_ASP_TX0_p08bit_END      (5)
#define SOC_ASP_TX0_pcm0en_START    (6)
#define SOC_ASP_TX0_pcm0en_END      (6)
#define SOC_ASP_TX0_pcm0ge_START    (7)
#define SOC_ASP_TX0_pcm0ge_END      (7)
#define SOC_ASP_TX0_odsr_START      (8)
#define SOC_ASP_TX0_odsr_END        (8)


/*****************************************************************************
 �ṹ��    : SOC_ASP_TX1_UNION
 �ṹ˵��  : TX1 �Ĵ����ṹ���塣��ַƫ����:0x004����ֵ:0x00000000�����:32
 �Ĵ���˵��: ����ͨ��TX1���ƼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  p1dt     : 3;  /* bit[0-2]  : TX1ͨ����Ƶ���ݸ�ʽѡ��
                                                    000��stereo 16bit��
                                                    001��mono 16bit��
                                                    010��stereo 8bit��
                                                    011��mono 8bit��
                                                    100- stereo 18bit��
                                                    101-stereo 20bit��
                                                    110������-stereo 24bit�� */
        unsigned int  p1rhp    : 1;  /* bit[3]    : TX1ͨ����Ƶ������������λ��ѡ��
                                                    0����λΪ���������ݣ�
                                                    1����λΪ���������ݡ� */
        unsigned int  p1bdian  : 1;  /* bit[4]    : TX1ͨ����Ƶ���ݴ�С��ѡ��
                                                    0��С�ˣ�
                                                    1����ˡ� */
        unsigned int  p18bit   : 1;  /* bit[5]    : TX1 8bit���ݵķ���֧�֡�
                                                    0���з�������
                                                    1���޷������� */
        unsigned int  pcm1en   : 1;  /* bit[6]    : TX1ͨ��ʹ�ܡ�
                                                    0����ʹ�ܣ�
                                                    1��ʹ�ܡ� */
        unsigned int  pcm1ge   : 1;  /* bit[7]    : TX1ͨ������ʹ�ܡ�
                                                    0����ʹ�ܣ�
                                                    1��ʹ�ܡ� */
        unsigned int  mixrate  : 2;  /* bit[8-9]  : TX1/2/3������������ݲ�����ѡ��
                                                    00��48KHz��
                                                    01��96KHz��
                                                    10~11��192KHz�� */
        unsigned int  reserved : 22; /* bit[10-31]: ������ */
    } reg;
} SOC_ASP_TX1_UNION;
#endif
#define SOC_ASP_TX1_p1dt_START      (0)
#define SOC_ASP_TX1_p1dt_END        (2)
#define SOC_ASP_TX1_p1rhp_START     (3)
#define SOC_ASP_TX1_p1rhp_END       (3)
#define SOC_ASP_TX1_p1bdian_START   (4)
#define SOC_ASP_TX1_p1bdian_END     (4)
#define SOC_ASP_TX1_p18bit_START    (5)
#define SOC_ASP_TX1_p18bit_END      (5)
#define SOC_ASP_TX1_pcm1en_START    (6)
#define SOC_ASP_TX1_pcm1en_END      (6)
#define SOC_ASP_TX1_pcm1ge_START    (7)
#define SOC_ASP_TX1_pcm1ge_END      (7)
#define SOC_ASP_TX1_mixrate_START   (8)
#define SOC_ASP_TX1_mixrate_END     (9)


/*****************************************************************************
 �ṹ��    : SOC_ASP_TX2_UNION
 �ṹ˵��  : TX2 �Ĵ����ṹ���塣��ַƫ����:0x008����ֵ:0x00000000�����:32
 �Ĵ���˵��: ����ͨ��TX2���ƼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  p2dt     : 3;  /* bit[0-2] : TX2ͨ����Ƶ���ݸ�ʽѡ��
                                                   000��stereo 16bit��
                                                   001��mono 16bit��
                                                   010��stereo 8bit��
                                                   011��mono 8bit��
                                                   100- stereo 18bit��
                                                   101-stereo 20bit��
                                                   110������-stereo 24bit�� */
        unsigned int  p2rhp    : 1;  /* bit[3]   : TX2ͨ����Ƶ������������λ��ѡ��
                                                   0����λΪ���������ݣ�
                                                   1����λΪ���������ݡ� */
        unsigned int  p2bdian  : 1;  /* bit[4]   : TX2ͨ����Ƶ���ݴ�С��ѡ��
                                                   0��С�ˣ�
                                                   1����ˡ� */
        unsigned int  p28bit   : 1;  /* bit[5]   : TX2 8bit���ݵķ���֧�֡�
                                                   0���з�������
                                                   1���޷������� */
        unsigned int  pcm2en   : 1;  /* bit[6]   : TX2ͨ��ʹ�ܡ�
                                                   0����ʹ�ܣ�
                                                   1��ʹ�ܡ� */
        unsigned int  pcm2ge   : 1;  /* bit[7]   : TX2ͨ������ʹ�ܡ�
                                                   0����ʹ�ܣ�
                                                   1��ʹ�ܡ� */
        unsigned int  pcm2tsen : 1;  /* bit[8]   : TX2 ͸��ʹ�ܡ�
                                                   0����ʹ�ܣ�
                                                   1��ʹ�ܡ� */
        unsigned int  reserved : 23; /* bit[9-31]: ������ */
    } reg;
} SOC_ASP_TX2_UNION;
#endif
#define SOC_ASP_TX2_p2dt_START      (0)
#define SOC_ASP_TX2_p2dt_END        (2)
#define SOC_ASP_TX2_p2rhp_START     (3)
#define SOC_ASP_TX2_p2rhp_END       (3)
#define SOC_ASP_TX2_p2bdian_START   (4)
#define SOC_ASP_TX2_p2bdian_END     (4)
#define SOC_ASP_TX2_p28bit_START    (5)
#define SOC_ASP_TX2_p28bit_END      (5)
#define SOC_ASP_TX2_pcm2en_START    (6)
#define SOC_ASP_TX2_pcm2en_END      (6)
#define SOC_ASP_TX2_pcm2ge_START    (7)
#define SOC_ASP_TX2_pcm2ge_END      (7)
#define SOC_ASP_TX2_pcm2tsen_START  (8)
#define SOC_ASP_TX2_pcm2tsen_END    (8)


/*****************************************************************************
 �ṹ��    : SOC_ASP_TX3_UNION
 �ṹ˵��  : TX3 �Ĵ����ṹ���塣��ַƫ����:0x00C����ֵ:0x00000000�����:32
 �Ĵ���˵��: ����ͨ��TX3���ƼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  p3dt     : 2;  /* bit[0-1] : TX3ͨ����Ƶ���ݸ�ʽѡ��
                                                   00��stereo 16bit��
                                                   01��stereo 18bit��
                                                   10��stereo 20bit��
                                                   11��stereo 24bit�� */
        unsigned int  pcm3en   : 1;  /* bit[2]   : TX3ͨ��ʹ�ܡ�
                                                   0����ʹ�ܣ�
                                                   1��ʹ�ܡ� */
        unsigned int  pcm3ge   : 1;  /* bit[3]   : TX3ͨ������ʹ�ܡ�
                                                   0����ʹ�ܣ�
                                                   1��ʹ�ܡ� */
        unsigned int  pcm3tsen : 1;  /* bit[4]   : TX3 ͸��ʹ�ܡ�
                                                   0����ʹ�ܣ�
                                                   1��ʹ�ܡ� */
        unsigned int  reserved : 27; /* bit[5-31]: ������ */
    } reg;
} SOC_ASP_TX3_UNION;
#endif
#define SOC_ASP_TX3_p3dt_START      (0)
#define SOC_ASP_TX3_p3dt_END        (1)
#define SOC_ASP_TX3_pcm3en_START    (2)
#define SOC_ASP_TX3_pcm3en_END      (2)
#define SOC_ASP_TX3_pcm3ge_START    (3)
#define SOC_ASP_TX3_pcm3ge_END      (3)
#define SOC_ASP_TX3_pcm3tsen_START  (4)
#define SOC_ASP_TX3_pcm3tsen_END    (4)


/*****************************************************************************
 �ṹ��    : SOC_ASP_RX_UNION
 �ṹ˵��  : RX �Ĵ����ṹ���塣��ַƫ����:0x010����ֵ:0x00000000�����:32
 �Ĵ���˵��: ����ͨ��RX���ƼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  rxen     : 1;  /* bit[0]   : RXͨ��ʹ�ܡ�
                                                   0����ʹ�ܣ�
                                                   1��ʹ�ܡ� */
        unsigned int  reserved : 31; /* bit[1-31]: ������ */
    } reg;
} SOC_ASP_RX_UNION;
#endif
#define SOC_ASP_RX_rxen_START      (0)
#define SOC_ASP_RX_rxen_END        (0)


/*****************************************************************************
 �ṹ��    : SOC_ASP_DER_UNION
 �ṹ˵��  : DER �Ĵ����ṹ���塣��ַƫ����:0x014����ֵ:0x00000000�����:32
 �Ĵ���˵��: ASP DMAʹ�ܼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pcmrxade : 1;  /* bit[0]    : PCMRXͨ��A��DMAʹ�ܡ�
                                                    0��DMA��ʹ�ܣ�
                                                    1��DMAʹ�ܡ�
                                                    ע�⣺�üĴ������д��1����Ӳ�����㣬���д��0����Ч�� */
        unsigned int  pcmrxbde : 1;  /* bit[1]    : PCMRXͨ��B��DMAʹ�ܡ�
                                                    0��DMA��ʹ�ܣ�
                                                    1��DMAʹ�ܡ�
                                                    ע�⣺�üĴ������д��1����Ӳ�����㣬���д��0����Ч�� */
        unsigned int  pcm0ade  : 1;  /* bit[2]    : PCM0ͨ��A��DMAʹ�ܡ�
                                                    0��DMA��ʹ�ܣ�
                                                    1��DMAʹ�ܡ�
                                                    ע�⣺�üĴ������д��1����Ӳ�����㣬���д��0����Ч�� */
        unsigned int  pcm0bde  : 1;  /* bit[3]    : PCM0ͨ��B��DMAʹ�ܡ�
                                                    0��DMA��ʹ�ܣ�
                                                    1��DMAʹ�ܡ�
                                                    ע�⣺�üĴ������д��1����Ӳ�����㣬���д��0����Ч�� */
        unsigned int  pcm1ade  : 1;  /* bit[4]    : PCM1ͨ��A��DMAʹ�ܡ�
                                                    0��DMA��ʹ�ܣ�
                                                    1��DMAʹ�ܡ�
                                                    ע�⣺�üĴ������д��1����Ӳ�����㣬���д��0����Ч�� */
        unsigned int  pcm1bde  : 1;  /* bit[5]    : PCM1ͨ��B��DMAʹ�ܡ�
                                                    0��DMA��ʹ�ܣ�
                                                    1��DMAʹ�ܡ�
                                                    ע�⣺�üĴ������д��1����Ӳ�����㣬���д��0����Ч�� */
        unsigned int  pcm2ade  : 1;  /* bit[6]    : PCM2ͨ��A��DMAʹ�ܡ�
                                                    0��DMA��ʹ�ܣ�
                                                    1��DMAʹ�ܡ�
                                                    ע�⣺�üĴ������д��1����Ӳ�����㣬���д��0����Ч�� */
        unsigned int  pcm2bde  : 1;  /* bit[7]    : PCM2ͨ��B��DMAʹ�ܡ�
                                                    0��DMA��ʹ�ܣ�
                                                    1��DMAʹ�ܡ�
                                                    ע�⣺�üĴ������д��1����Ӳ�����㣬���д��0����Ч�� */
        unsigned int  pcm3ade  : 1;  /* bit[8]    : PCM3ͨ��A��DMAʹ�ܡ�
                                                    0��DMA��ʹ�ܣ�
                                                    1��DMAʹ�ܡ�
                                                    ע�⣺�üĴ������д��1����Ӳ�����㣬���д��0����Ч�� */
        unsigned int  pcm3bde  : 1;  /* bit[9]    : PCM3ͨ��B��DMAʹ�ܡ�
                                                    0��DMA��ʹ�ܣ�
                                                    1��DMAʹ�ܡ�
                                                    ע�⣺�üĴ������д��1����Ӳ�����㣬���д��0����Ч�� */
        unsigned int  reserved : 22; /* bit[10-31]: ������ */
    } reg;
} SOC_ASP_DER_UNION;
#endif
#define SOC_ASP_DER_pcmrxade_START  (0)
#define SOC_ASP_DER_pcmrxade_END    (0)
#define SOC_ASP_DER_pcmrxbde_START  (1)
#define SOC_ASP_DER_pcmrxbde_END    (1)
#define SOC_ASP_DER_pcm0ade_START   (2)
#define SOC_ASP_DER_pcm0ade_END     (2)
#define SOC_ASP_DER_pcm0bde_START   (3)
#define SOC_ASP_DER_pcm0bde_END     (3)
#define SOC_ASP_DER_pcm1ade_START   (4)
#define SOC_ASP_DER_pcm1ade_END     (4)
#define SOC_ASP_DER_pcm1bde_START   (5)
#define SOC_ASP_DER_pcm1bde_END     (5)
#define SOC_ASP_DER_pcm2ade_START   (6)
#define SOC_ASP_DER_pcm2ade_END     (6)
#define SOC_ASP_DER_pcm2bde_START   (7)
#define SOC_ASP_DER_pcm2bde_END     (7)
#define SOC_ASP_DER_pcm3ade_START   (8)
#define SOC_ASP_DER_pcm3ade_END     (8)
#define SOC_ASP_DER_pcm3bde_START   (9)
#define SOC_ASP_DER_pcm3bde_END     (9)


/*****************************************************************************
 �ṹ��    : SOC_ASP_DSTOP_UNION
 �ṹ˵��  : DSTOP �Ĵ����ṹ���塣��ַƫ����:0x018����ֵ:0x00000000�����:32
 �Ĵ���˵��: ASP DMAֹͣʹ�ܼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pcmrxads : 1;  /* bit[0]    : PCMRXͨ��A��DMAֹͣʹ�ܡ�
                                                    0��DMAֹͣ��ʹ�ܣ�
                                                    1��DMAֹͣ��
                                                    ע�⣺�üĴ������д��1����Ӳ�����㣬���д��0����Ч�� */
        unsigned int  pcmrxbds : 1;  /* bit[1]    : PCMRXͨ��B��DMAֹͣʹ�ܡ�
                                                    0��DMAֹͣ��ʹ�ܣ�
                                                    1��DMAֹͣ��
                                                    ע�⣺�üĴ������д��1����Ӳ�����㣬���д��0����Ч�� */
        unsigned int  pcm0ads  : 1;  /* bit[2]    : PCM0ͨ��A��DMAֹͣʹ�ܡ�
                                                    0��DMAֹͣ��ʹ�ܣ�
                                                    1��DMAֹͣ��
                                                    ע�⣺�üĴ������д��1����Ӳ�����㣬���д��0����Ч�� */
        unsigned int  pcm0bds  : 1;  /* bit[3]    : PCM0ͨ��B��DMAֹͣʹ�ܡ�
                                                    0��DMAֹͣ��ʹ�ܣ�
                                                    1��DMAֹͣ��
                                                    ע�⣺�üĴ������д��1����Ӳ�����㣬���д��0����Ч�� */
        unsigned int  pcm1ads  : 1;  /* bit[4]    : PCM1ͨ��A��DMAֹͣʹ�ܡ�
                                                    0��DMAֹͣ��ʹ�ܣ�
                                                    1��DMAֹͣ��
                                                    ע�⣺�üĴ������д��1����Ӳ�����㣬���д��0����Ч�� */
        unsigned int  pcm1bds  : 1;  /* bit[5]    : PCM1ͨ��B��DMAֹͣʹ�ܡ�
                                                    0��DMAֹͣ��ʹ�ܣ�
                                                    1��DMAֹͣ��
                                                    ע�⣺�üĴ������д��1����Ӳ�����㣬���д��0����Ч�� */
        unsigned int  pcm2ads  : 1;  /* bit[6]    : PCM2ͨ��A��DMAֹͣʹ�ܡ�
                                                    0��DMAֹͣ��ʹ�ܣ�
                                                    1��DMAֹͣ��
                                                    ע�⣺�üĴ������д��1����Ӳ�����㣬���д��0����Ч�� */
        unsigned int  pcm2bds  : 1;  /* bit[7]    : PCM2ͨ��B��DMAֹͣʹ�ܡ�
                                                    0��DMAֹͣ��ʹ�ܣ�
                                                    1��DMAֹͣ��
                                                    ע�⣺�üĴ������д��1����Ӳ�����㣬���д��0����Ч�� */
        unsigned int  pcm3ads  : 1;  /* bit[8]    : PCM3ͨ��A��DMAֹͣʹ�ܡ�
                                                    0��DMAֹͣ��ʹ�ܣ�
                                                    1��DMAֹͣ��
                                                    ע�⣺�üĴ������д��1����Ӳ�����㣬���д��0����Ч�� */
        unsigned int  pcm3bds  : 1;  /* bit[9]    : PCM3ͨ��B��DMAֹͣʹ�ܡ�
                                                    0��DMAֹͣ��ʹ�ܣ�
                                                    1��DMAֹͣ��
                                                    ע�⣺�üĴ������д��1����Ӳ�����㣬���д��0����Ч�� */
        unsigned int  reserved : 22; /* bit[10-31]: ������ */
    } reg;
} SOC_ASP_DSTOP_UNION;
#endif
#define SOC_ASP_DSTOP_pcmrxads_START  (0)
#define SOC_ASP_DSTOP_pcmrxads_END    (0)
#define SOC_ASP_DSTOP_pcmrxbds_START  (1)
#define SOC_ASP_DSTOP_pcmrxbds_END    (1)
#define SOC_ASP_DSTOP_pcm0ads_START   (2)
#define SOC_ASP_DSTOP_pcm0ads_END     (2)
#define SOC_ASP_DSTOP_pcm0bds_START   (3)
#define SOC_ASP_DSTOP_pcm0bds_END     (3)
#define SOC_ASP_DSTOP_pcm1ads_START   (4)
#define SOC_ASP_DSTOP_pcm1ads_END     (4)
#define SOC_ASP_DSTOP_pcm1bds_START   (5)
#define SOC_ASP_DSTOP_pcm1bds_END     (5)
#define SOC_ASP_DSTOP_pcm2ads_START   (6)
#define SOC_ASP_DSTOP_pcm2ads_END     (6)
#define SOC_ASP_DSTOP_pcm2bds_START   (7)
#define SOC_ASP_DSTOP_pcm2bds_END     (7)
#define SOC_ASP_DSTOP_pcm3ads_START   (8)
#define SOC_ASP_DSTOP_pcm3ads_END     (8)
#define SOC_ASP_DSTOP_pcm3bds_START   (9)
#define SOC_ASP_DSTOP_pcm3bds_END     (9)


/*****************************************************************************
 �ṹ��    : SOC_ASP_ASS_ISR_UNION
 �ṹ˵��  : ASS_ISR �Ĵ����ṹ���塣��ַƫ����:0x01C����ֵ:0x00000000�����:32
 �Ĵ���˵��: ASPȫ���ж�״̬�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sio0is   : 1;  /* bit[0]   : ��ƵSIO0�ӿڲ���ģ���ж�״̬��
                                                   0�����жϣ�
                                                   1�����жϡ� */
        unsigned int  sio1is   : 1;  /* bit[1]   : ��ƵSIO1�ӿڲ���ģ���ж�״̬��
                                                   0�����жϣ�
                                                   1�����жϡ� */
        unsigned int  spdifis  : 1;  /* bit[2]   : ��ƵSPDIF�ӿڲ���ģ���ж�״̬��
                                                   0�����жϣ�
                                                   1�����жϡ� */
        unsigned int  aspis    : 1;  /* bit[3]   : ASP����ģ���ж�״̬��
                                                   0�����жϣ�
                                                   1�����жϡ� */
        unsigned int  reserved : 28; /* bit[4-31]: ������ */
    } reg;
} SOC_ASP_ASS_ISR_UNION;
#endif
#define SOC_ASP_ASS_ISR_sio0is_START    (0)
#define SOC_ASP_ASS_ISR_sio0is_END      (0)
#define SOC_ASP_ASS_ISR_sio1is_START    (1)
#define SOC_ASP_ASS_ISR_sio1is_END      (1)
#define SOC_ASP_ASS_ISR_spdifis_START   (2)
#define SOC_ASP_ASS_ISR_spdifis_END     (2)
#define SOC_ASP_ASS_ISR_aspis_START     (3)
#define SOC_ASP_ASS_ISR_aspis_END       (3)


/*****************************************************************************
 �ṹ��    : SOC_ASP_IRSR_UNION
 �ṹ˵��  : IRSR �Ĵ����ṹ���塣��ַƫ����:0x020����ֵ:0x00000000�����:32
 �Ĵ���˵��: ASPԭʼ״̬�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pradfirs   : 1;  /* bit[0]    : PCMRXͨ��A��DMA����ԭʼ�жϡ�
                                                      0�����жϣ�
                                                      1�����жϡ� */
        unsigned int  prbdfirs   : 1;  /* bit[1]    : PCMRXͨ��B��DMA����ԭʼ�жϡ�
                                                      0�����жϣ�
                                                      1�����жϡ� */
        unsigned int  p0adfirs   : 1;  /* bit[2]    : PCM0ͨ��A��DMA����ԭʼ�жϡ�
                                                      0�����жϣ�
                                                      1�����жϡ� */
        unsigned int  p0bdfirs   : 1;  /* bit[3]    : PCM0ͨ��B��DMA����ԭʼ�жϡ�
                                                      0�����жϣ�
                                                      1�����жϡ� */
        unsigned int  p1adfirs   : 1;  /* bit[4]    : PCM1ͨ��A��DMA����ԭʼ�жϡ�
                                                      0�����жϣ�
                                                      1�����жϡ� */
        unsigned int  p1bdfirs   : 1;  /* bit[5]    : PCM1ͨ��B��DMA����ԭʼ�жϡ�
                                                      0�����жϣ�
                                                      1�����жϡ� */
        unsigned int  p2adfirs   : 1;  /* bit[6]    : PCM2ͨ��A��DMA����ԭʼ�жϡ�
                                                      0�����жϣ�
                                                      1�����жϡ� */
        unsigned int  p2bdfirs   : 1;  /* bit[7]    : PCM2ͨ��B��DMA����ԭʼ�жϡ�
                                                      0�����жϣ�
                                                      1�����жϡ� */
        unsigned int  p3adfirs   : 1;  /* bit[8]    : PCM3ͨ��A��DMA����ԭʼ�жϡ�
                                                      0�����жϣ�
                                                      1�����жϡ� */
        unsigned int  p3bdfirs   : 1;  /* bit[9]    : PCM3ͨ��B��DMA����ԭʼ�жϡ�
                                                      0�����жϣ�
                                                      1�����жϡ� */
        unsigned int  p0fadeins  : 1;  /* bit[10]   : TX0 fade in���ԭʼ�жϡ�
                                                      0�����жϣ�
                                                      1�����жϣ� */
        unsigned int  p1fadeins  : 1;  /* bit[11]   : TX1 fade in���ԭʼ�жϡ�
                                                      0�����жϣ�
                                                      1�����жϣ� */
        unsigned int  p2fadeins  : 1;  /* bit[12]   : TX2 fade in���ԭʼ�жϡ�
                                                      0�����жϣ�
                                                      1�����жϣ� */
        unsigned int  p3fadeins  : 1;  /* bit[13]   : TX3 fade in���ԭʼ�жϡ�
                                                      0�����жϣ�
                                                      1�����жϣ� */
        unsigned int  p0fadeouts : 1;  /* bit[14]   : TX0 fade out���ԭʼ�жϡ�
                                                      0�����жϣ�
                                                      1�����жϣ� */
        unsigned int  p1fadeouts : 1;  /* bit[15]   : TX1 fade out���ԭʼ�жϡ�
                                                      0�����жϣ�
                                                      1�����жϣ� */
        unsigned int  p2fadeouts : 1;  /* bit[16]   : TX2 fade out���ԭʼ�жϡ�
                                                      0�����жϣ�
                                                      1�����жϣ� */
        unsigned int  p3fadeouts : 1;  /* bit[17]   : TX3 fade out���ԭʼ�жϡ�
                                                      0�����жϣ�
                                                      1�����жϣ� */
        unsigned int  aberirs    : 1;  /* bit[18]   : ASPģ������error��Ӧԭʼ�жϡ�
                                                      0�����жϣ�
                                                      1�����жϡ�
                                                      ע�⣺ASP��AHB master�������߷������������ϵ�Slave����HRESP��Ӧ����ΪERRORʱ���������жϡ����磬��RO���͵�ַ��д�����ȡ� */
        unsigned int  reserved   : 13; /* bit[19-31]: ������ */
    } reg;
} SOC_ASP_IRSR_UNION;
#endif
#define SOC_ASP_IRSR_pradfirs_START    (0)
#define SOC_ASP_IRSR_pradfirs_END      (0)
#define SOC_ASP_IRSR_prbdfirs_START    (1)
#define SOC_ASP_IRSR_prbdfirs_END      (1)
#define SOC_ASP_IRSR_p0adfirs_START    (2)
#define SOC_ASP_IRSR_p0adfirs_END      (2)
#define SOC_ASP_IRSR_p0bdfirs_START    (3)
#define SOC_ASP_IRSR_p0bdfirs_END      (3)
#define SOC_ASP_IRSR_p1adfirs_START    (4)
#define SOC_ASP_IRSR_p1adfirs_END      (4)
#define SOC_ASP_IRSR_p1bdfirs_START    (5)
#define SOC_ASP_IRSR_p1bdfirs_END      (5)
#define SOC_ASP_IRSR_p2adfirs_START    (6)
#define SOC_ASP_IRSR_p2adfirs_END      (6)
#define SOC_ASP_IRSR_p2bdfirs_START    (7)
#define SOC_ASP_IRSR_p2bdfirs_END      (7)
#define SOC_ASP_IRSR_p3adfirs_START    (8)
#define SOC_ASP_IRSR_p3adfirs_END      (8)
#define SOC_ASP_IRSR_p3bdfirs_START    (9)
#define SOC_ASP_IRSR_p3bdfirs_END      (9)
#define SOC_ASP_IRSR_p0fadeins_START   (10)
#define SOC_ASP_IRSR_p0fadeins_END     (10)
#define SOC_ASP_IRSR_p1fadeins_START   (11)
#define SOC_ASP_IRSR_p1fadeins_END     (11)
#define SOC_ASP_IRSR_p2fadeins_START   (12)
#define SOC_ASP_IRSR_p2fadeins_END     (12)
#define SOC_ASP_IRSR_p3fadeins_START   (13)
#define SOC_ASP_IRSR_p3fadeins_END     (13)
#define SOC_ASP_IRSR_p0fadeouts_START  (14)
#define SOC_ASP_IRSR_p0fadeouts_END    (14)
#define SOC_ASP_IRSR_p1fadeouts_START  (15)
#define SOC_ASP_IRSR_p1fadeouts_END    (15)
#define SOC_ASP_IRSR_p2fadeouts_START  (16)
#define SOC_ASP_IRSR_p2fadeouts_END    (16)
#define SOC_ASP_IRSR_p3fadeouts_START  (17)
#define SOC_ASP_IRSR_p3fadeouts_END    (17)
#define SOC_ASP_IRSR_aberirs_START     (18)
#define SOC_ASP_IRSR_aberirs_END       (18)


/*****************************************************************************
 �ṹ��    : SOC_ASP_IER_UNION
 �ṹ˵��  : IER �Ĵ����ṹ���塣��ַƫ����:0x024����ֵ:0x00000000�����:32
 �Ĵ���˵��: ASP�ж�ʹ�ܼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pradfie     : 1;  /* bit[0]    : PCMRXͨ��A��DMA�����ж�ʹ�ܡ�
                                                       0����ʹ�ܣ�
                                                       1��ʹ�ܡ� */
        unsigned int  prbdfie     : 1;  /* bit[1]    : PCMRXͨ��B��DMA�����ж�ʹ�ܡ�
                                                       0����ʹ�ܣ�
                                                       1��ʹ�ܡ� */
        unsigned int  p0adfie     : 1;  /* bit[2]    : PCM0ͨ��A��DMA�����ж�ʹ�ܡ�
                                                       0����ʹ�ܣ�
                                                       1��ʹ�ܡ� */
        unsigned int  p0bdfie     : 1;  /* bit[3]    : PCM0ͨ��B��DMA�����ж�ʹ�ܡ�
                                                       0����ʹ�ܣ�
                                                       1��ʹ�ܡ� */
        unsigned int  p1adfie     : 1;  /* bit[4]    : PCM1ͨ��A��DMA�����ж�ʹ�ܡ�
                                                       0����ʹ�ܣ�
                                                       1��ʹ�ܡ� */
        unsigned int  p1bdfie     : 1;  /* bit[5]    : PCM1ͨ��B��DMA�����ж�ʹ�ܡ�
                                                       0����ʹ�ܣ�
                                                       1��ʹ�ܡ� */
        unsigned int  p2adfie     : 1;  /* bit[6]    : PCM2ͨ��A��DMA�����ж�ʹ�ܡ�
                                                       0����ʹ�ܣ�
                                                       1��ʹ�ܡ� */
        unsigned int  p2bdfie     : 1;  /* bit[7]    : PCM2ͨ��B��DMA�����ж�ʹ�ܡ�
                                                       0����ʹ�ܣ�
                                                       1��ʹ�ܡ� */
        unsigned int  p3adfie     : 1;  /* bit[8]    : PCM3ͨ��A��DMA�����ж�ʹ�ܡ�
                                                       0����ʹ�ܣ�
                                                       1��ʹ�ܡ� */
        unsigned int  p3bdfie     : 1;  /* bit[9]    : PCM3ͨ��B��DMA�����ж�ʹ�ܡ�
                                                       0����ʹ�ܣ�
                                                       1��ʹ�ܡ� */
        unsigned int  p0fadeinie  : 1;  /* bit[10]   : TX0 fade in����ж�ʹ�ܡ�
                                                       0����ʹ�ܣ�
                                                       1��ʹ�ܡ� */
        unsigned int  p1fadeinie  : 1;  /* bit[11]   : TX1 fade in����ж�ʹ�ܡ�
                                                       0����ʹ�ܣ�
                                                       1��ʹ�ܡ� */
        unsigned int  p2fadeinie  : 1;  /* bit[12]   : TX2 fade in����ж�ʹ�ܡ�
                                                       0����ʹ�ܣ�
                                                       1��ʹ�ܡ� */
        unsigned int  p3fadeinie  : 1;  /* bit[13]   : TX3 fade in����ж�ʹ�ܡ�
                                                       0����ʹ�ܣ�
                                                       1��ʹ�ܡ� */
        unsigned int  p0fadeoutie : 1;  /* bit[14]   : TX0 fade out����ж�ʹ�ܡ�
                                                       0����ʹ�ܣ�
                                                       1��ʹ�ܡ� */
        unsigned int  p1fadeoutie : 1;  /* bit[15]   : TX1 fade out����ж�ʹ�ܡ�
                                                       0����ʹ�ܣ�
                                                       1��ʹ�ܡ� */
        unsigned int  p2fadeoutie : 1;  /* bit[16]   : TX2 fade out����ж�ʹ�ܡ�
                                                       0����ʹ�ܣ�
                                                       1��ʹ�ܡ� */
        unsigned int  p3fadeoutie : 1;  /* bit[17]   : TX3 fade out����ж�ʹ�ܡ�
                                                       0����ʹ�ܣ�
                                                       1��ʹ�ܡ� */
        unsigned int  aberie      : 1;  /* bit[18]   : ASPģ������error��Ӧ�ж�ʹ�ܡ�
                                                       0����ʹ�ܣ�
                                                       1��ʹ�ܡ� */
        unsigned int  reserved    : 13; /* bit[19-31]: ������ */
    } reg;
} SOC_ASP_IER_UNION;
#endif
#define SOC_ASP_IER_pradfie_START      (0)
#define SOC_ASP_IER_pradfie_END        (0)
#define SOC_ASP_IER_prbdfie_START      (1)
#define SOC_ASP_IER_prbdfie_END        (1)
#define SOC_ASP_IER_p0adfie_START      (2)
#define SOC_ASP_IER_p0adfie_END        (2)
#define SOC_ASP_IER_p0bdfie_START      (3)
#define SOC_ASP_IER_p0bdfie_END        (3)
#define SOC_ASP_IER_p1adfie_START      (4)
#define SOC_ASP_IER_p1adfie_END        (4)
#define SOC_ASP_IER_p1bdfie_START      (5)
#define SOC_ASP_IER_p1bdfie_END        (5)
#define SOC_ASP_IER_p2adfie_START      (6)
#define SOC_ASP_IER_p2adfie_END        (6)
#define SOC_ASP_IER_p2bdfie_START      (7)
#define SOC_ASP_IER_p2bdfie_END        (7)
#define SOC_ASP_IER_p3adfie_START      (8)
#define SOC_ASP_IER_p3adfie_END        (8)
#define SOC_ASP_IER_p3bdfie_START      (9)
#define SOC_ASP_IER_p3bdfie_END        (9)
#define SOC_ASP_IER_p0fadeinie_START   (10)
#define SOC_ASP_IER_p0fadeinie_END     (10)
#define SOC_ASP_IER_p1fadeinie_START   (11)
#define SOC_ASP_IER_p1fadeinie_END     (11)
#define SOC_ASP_IER_p2fadeinie_START   (12)
#define SOC_ASP_IER_p2fadeinie_END     (12)
#define SOC_ASP_IER_p3fadeinie_START   (13)
#define SOC_ASP_IER_p3fadeinie_END     (13)
#define SOC_ASP_IER_p0fadeoutie_START  (14)
#define SOC_ASP_IER_p0fadeoutie_END    (14)
#define SOC_ASP_IER_p1fadeoutie_START  (15)
#define SOC_ASP_IER_p1fadeoutie_END    (15)
#define SOC_ASP_IER_p2fadeoutie_START  (16)
#define SOC_ASP_IER_p2fadeoutie_END    (16)
#define SOC_ASP_IER_p3fadeoutie_START  (17)
#define SOC_ASP_IER_p3fadeoutie_END    (17)
#define SOC_ASP_IER_aberie_START       (18)
#define SOC_ASP_IER_aberie_END         (18)


/*****************************************************************************
 �ṹ��    : SOC_ASP_IMSR_UNION
 �ṹ˵��  : IMSR �Ĵ����ṹ���塣��ַƫ����:0x028����ֵ:0x00000000�����:32
 �Ĵ���˵��: ASP���κ�״̬�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pradfims     : 1;  /* bit[0]    : PCMRXͨ��A��DMA�������κ��жϡ�
                                                        0�����жϣ�
                                                        1�����жϡ� */
        unsigned int  prbdfims     : 1;  /* bit[1]    : PCMRXͨ��B��DMA�������κ��жϡ�
                                                        0�����жϣ�
                                                        1�����жϡ� */
        unsigned int  p0adfims     : 1;  /* bit[2]    : PCM0ͨ��A��DMA�������κ��жϡ�
                                                        0�����жϣ�
                                                        1�����жϡ� */
        unsigned int  p0bdfims     : 1;  /* bit[3]    : PCM0ͨ��B��DMA�������κ��жϡ�
                                                        0�����жϣ�
                                                        1�����жϡ� */
        unsigned int  p1adfims     : 1;  /* bit[4]    : PCM1ͨ��A��DMA�������κ��жϡ�
                                                        0�����жϣ�
                                                        1�����жϡ� */
        unsigned int  p1bdfims     : 1;  /* bit[5]    : PCM1ͨ��B��DMA�������κ��жϡ�
                                                        0�����жϣ�
                                                        1�����жϡ� */
        unsigned int  p2adfims     : 1;  /* bit[6]    : PCM2ͨ��A��DMA�������κ��жϡ�
                                                        0�����жϣ�
                                                        1�����жϡ� */
        unsigned int  p2bdfims     : 1;  /* bit[7]    : PCM2ͨ��B��DMA�������κ��жϡ�
                                                        0�����жϣ�
                                                        1�����жϡ� */
        unsigned int  p3adfims     : 1;  /* bit[8]    : PCM3ͨ��A��DMA�������κ��жϡ�
                                                        0�����жϣ�
                                                        1�����жϡ� */
        unsigned int  p3bdfims     : 1;  /* bit[9]    : PCM3ͨ��B��DMA�������κ��жϡ�
                                                        0�����жϣ�
                                                        1�����жϡ� */
        unsigned int  p0fadeinims  : 1;  /* bit[10]   : TX0 fade in������κ��жϡ�
                                                        0�����жϣ�
                                                        1�����жϡ� */
        unsigned int  p1fadeinims  : 1;  /* bit[11]   : TX1 fade in������κ��жϡ�
                                                        0�����жϣ�
                                                        1�����жϡ� */
        unsigned int  p2fadeinims  : 1;  /* bit[12]   : TX2 fade in������κ��жϡ�
                                                        0�����жϣ�
                                                        1�����жϡ� */
        unsigned int  p3fadeinims  : 1;  /* bit[13]   : TX3 fade in������κ��жϡ�
                                                        0�����жϣ�
                                                        1�����жϡ� */
        unsigned int  p0fadeoutims : 1;  /* bit[14]   : TX0 fade out������κ��жϡ�
                                                        0�����жϣ�
                                                        1�����жϡ� */
        unsigned int  p1fadeoutims : 1;  /* bit[15]   : TX1 fade out������κ��жϡ�
                                                        0�����жϣ�
                                                        1�����жϡ� */
        unsigned int  p2fadeoutims : 1;  /* bit[16]   : TX2 fade out������κ��жϡ�
                                                        0�����жϣ�
                                                        1�����жϡ� */
        unsigned int  p3fadeoutims : 1;  /* bit[17]   : TX3 fade out������κ��жϡ�
                                                        0�����жϣ�
                                                        1�����жϡ� */
        unsigned int  aberims      : 1;  /* bit[18]   : ASPģ������error��Ӧ���κ��жϡ�
                                                        0�����жϣ�
                                                        1�����жϡ� */
        unsigned int  reserved     : 13; /* bit[19-31]: ������ */
    } reg;
} SOC_ASP_IMSR_UNION;
#endif
#define SOC_ASP_IMSR_pradfims_START      (0)
#define SOC_ASP_IMSR_pradfims_END        (0)
#define SOC_ASP_IMSR_prbdfims_START      (1)
#define SOC_ASP_IMSR_prbdfims_END        (1)
#define SOC_ASP_IMSR_p0adfims_START      (2)
#define SOC_ASP_IMSR_p0adfims_END        (2)
#define SOC_ASP_IMSR_p0bdfims_START      (3)
#define SOC_ASP_IMSR_p0bdfims_END        (3)
#define SOC_ASP_IMSR_p1adfims_START      (4)
#define SOC_ASP_IMSR_p1adfims_END        (4)
#define SOC_ASP_IMSR_p1bdfims_START      (5)
#define SOC_ASP_IMSR_p1bdfims_END        (5)
#define SOC_ASP_IMSR_p2adfims_START      (6)
#define SOC_ASP_IMSR_p2adfims_END        (6)
#define SOC_ASP_IMSR_p2bdfims_START      (7)
#define SOC_ASP_IMSR_p2bdfims_END        (7)
#define SOC_ASP_IMSR_p3adfims_START      (8)
#define SOC_ASP_IMSR_p3adfims_END        (8)
#define SOC_ASP_IMSR_p3bdfims_START      (9)
#define SOC_ASP_IMSR_p3bdfims_END        (9)
#define SOC_ASP_IMSR_p0fadeinims_START   (10)
#define SOC_ASP_IMSR_p0fadeinims_END     (10)
#define SOC_ASP_IMSR_p1fadeinims_START   (11)
#define SOC_ASP_IMSR_p1fadeinims_END     (11)
#define SOC_ASP_IMSR_p2fadeinims_START   (12)
#define SOC_ASP_IMSR_p2fadeinims_END     (12)
#define SOC_ASP_IMSR_p3fadeinims_START   (13)
#define SOC_ASP_IMSR_p3fadeinims_END     (13)
#define SOC_ASP_IMSR_p0fadeoutims_START  (14)
#define SOC_ASP_IMSR_p0fadeoutims_END    (14)
#define SOC_ASP_IMSR_p1fadeoutims_START  (15)
#define SOC_ASP_IMSR_p1fadeoutims_END    (15)
#define SOC_ASP_IMSR_p2fadeoutims_START  (16)
#define SOC_ASP_IMSR_p2fadeoutims_END    (16)
#define SOC_ASP_IMSR_p3fadeoutims_START  (17)
#define SOC_ASP_IMSR_p3fadeoutims_END    (17)
#define SOC_ASP_IMSR_aberims_START       (18)
#define SOC_ASP_IMSR_aberims_END         (18)


/*****************************************************************************
 �ṹ��    : SOC_ASP_ICR_UNION
 �ṹ˵��  : ICR �Ĵ����ṹ���塣��ַƫ����:0x02C����ֵ:0x00000000�����:32
 �Ĵ���˵��: ASP�ж�����Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pradficr     : 1;  /* bit[0]    : PCMRXͨ��A��DMA�����ж����㡣
                                                        0�������㣻
                                                        1�����㡣
                                                        ע�⣺�üĴ������д��1���������жϣ����д��0����Ч�� */
        unsigned int  prbdficr     : 1;  /* bit[1]    : PCMRXͨ��B��DMA�����ж����㡣
                                                        0�������㣻
                                                        1�����㡣
                                                        ע�⣺�üĴ������д��1���������жϣ����д��0����Ч�� */
        unsigned int  p0adficr     : 1;  /* bit[2]    : PCM0ͨ��A��DMA�����ж����㡣
                                                        0�������㣻
                                                        1�����㡣
                                                        ע�⣺�üĴ������д��1���������жϣ����д��0����Ч�� */
        unsigned int  p0bdficr     : 1;  /* bit[3]    : PCM0ͨ��B��DMA�����ж����㡣
                                                        0�������㣻
                                                        1�����㡣
                                                        ע�⣺�üĴ������д��1���������жϣ����д��0����Ч�� */
        unsigned int  p1adficr     : 1;  /* bit[4]    : PCM1ͨ��A��DMA�����ж����㡣
                                                        0�������㣻
                                                        1�����㡣
                                                        ע�⣺�üĴ������д��1���������жϣ����д��0����Ч�� */
        unsigned int  p1bdficr     : 1;  /* bit[5]    : PCM1ͨ��B��DMA�����ж����㡣
                                                        0�������㣻
                                                        1�����㡣
                                                        ע�⣺�üĴ������д��1���������жϣ����д��0����Ч�� */
        unsigned int  p2adficr     : 1;  /* bit[6]    : PCM2ͨ��A��DMA�����ж����㡣
                                                        0�������㣻
                                                        1�����㡣
                                                        ע�⣺�üĴ������д��1���������жϣ����д��0����Ч�� */
        unsigned int  p2bdficr     : 1;  /* bit[7]    : PCM2ͨ��B��DMA�����ж����㡣
                                                        0�������㣻
                                                        1�����㡣
                                                        ע�⣺�üĴ������д��1���������жϣ����д��0����Ч�� */
        unsigned int  p3adficr     : 1;  /* bit[8]    : PCM3ͨ��A��DMA�����ж����㡣
                                                        0�������㣻
                                                        1�����㡣
                                                        ע�⣺�üĴ������д��1���������жϣ����д��0����Ч�� */
        unsigned int  p3bdficr     : 1;  /* bit[9]    : PCM3ͨ��B��DMA�����ж����㡣
                                                        0�������㣻
                                                        1�����㡣
                                                        ע�⣺�üĴ������д��1���������жϣ����д��0����Ч�� */
        unsigned int  p0fadeinicr  : 1;  /* bit[10]   : TX0 fade in����ж����㡣
                                                        0�������㣻
                                                        1�����㡣
                                                        ע�⣺�üĴ������д��1���������жϣ����д��0����Ч�� */
        unsigned int  p1fadeinicr  : 1;  /* bit[11]   : TX1 fade in����ж����㡣
                                                        0�������㣻
                                                        1�����㡣
                                                        ע�⣺�üĴ������д��1���������жϣ����д��0����Ч�� */
        unsigned int  p2fadeinicr  : 1;  /* bit[12]   : TX2 fade in����ж����㡣
                                                        0�������㣻
                                                        1�����㡣
                                                        ע�⣺�üĴ������д��1���������жϣ����д��0����Ч�� */
        unsigned int  p3fadeinicr  : 1;  /* bit[13]   : TX3 fade in����ж����㡣
                                                        0�������㣻
                                                        1�����㡣
                                                        ע�⣺�üĴ������д��1���������жϣ����д��0����Ч�� */
        unsigned int  p0fadeouticr : 1;  /* bit[14]   : TX0 fade out����ж����㡣
                                                        0�������㣻
                                                        1�����㡣
                                                        ע�⣺�üĴ������д��1���������жϣ����д��0����Ч�� */
        unsigned int  p1fadeouticr : 1;  /* bit[15]   : TX1 fade out����ж����㡣
                                                        0�������㣻
                                                        1�����㡣
                                                        ע�⣺�üĴ������д��1���������жϣ����д��0����Ч�� */
        unsigned int  p2fadeouticr : 1;  /* bit[16]   : TX2 fade out����ж����㡣
                                                        0�������㣻
                                                        1�����㡣
                                                        ע�⣺�üĴ������д��1���������жϣ����д��0����Ч�� */
        unsigned int  p3fadeouticr : 1;  /* bit[17]   : TX3 fade out����ж����㡣
                                                        0�������㣻
                                                        1�����㡣
                                                        ע�⣺�üĴ������д��1���������жϣ����д��0����Ч�� */
        unsigned int  abericr      : 1;  /* bit[18]   : ASPģ������error��Ӧ�ж����㡣
                                                        0�������㣻
                                                        1�����㡣
                                                        ע�⣺�üĴ������д��1���������жϣ����д��0����Ч�� */
        unsigned int  reserved     : 13; /* bit[19-31]: ������ */
    } reg;
} SOC_ASP_ICR_UNION;
#endif
#define SOC_ASP_ICR_pradficr_START      (0)
#define SOC_ASP_ICR_pradficr_END        (0)
#define SOC_ASP_ICR_prbdficr_START      (1)
#define SOC_ASP_ICR_prbdficr_END        (1)
#define SOC_ASP_ICR_p0adficr_START      (2)
#define SOC_ASP_ICR_p0adficr_END        (2)
#define SOC_ASP_ICR_p0bdficr_START      (3)
#define SOC_ASP_ICR_p0bdficr_END        (3)
#define SOC_ASP_ICR_p1adficr_START      (4)
#define SOC_ASP_ICR_p1adficr_END        (4)
#define SOC_ASP_ICR_p1bdficr_START      (5)
#define SOC_ASP_ICR_p1bdficr_END        (5)
#define SOC_ASP_ICR_p2adficr_START      (6)
#define SOC_ASP_ICR_p2adficr_END        (6)
#define SOC_ASP_ICR_p2bdficr_START      (7)
#define SOC_ASP_ICR_p2bdficr_END        (7)
#define SOC_ASP_ICR_p3adficr_START      (8)
#define SOC_ASP_ICR_p3adficr_END        (8)
#define SOC_ASP_ICR_p3bdficr_START      (9)
#define SOC_ASP_ICR_p3bdficr_END        (9)
#define SOC_ASP_ICR_p0fadeinicr_START   (10)
#define SOC_ASP_ICR_p0fadeinicr_END     (10)
#define SOC_ASP_ICR_p1fadeinicr_START   (11)
#define SOC_ASP_ICR_p1fadeinicr_END     (11)
#define SOC_ASP_ICR_p2fadeinicr_START   (12)
#define SOC_ASP_ICR_p2fadeinicr_END     (12)
#define SOC_ASP_ICR_p3fadeinicr_START   (13)
#define SOC_ASP_ICR_p3fadeinicr_END     (13)
#define SOC_ASP_ICR_p0fadeouticr_START  (14)
#define SOC_ASP_ICR_p0fadeouticr_END    (14)
#define SOC_ASP_ICR_p1fadeouticr_START  (15)
#define SOC_ASP_ICR_p1fadeouticr_END    (15)
#define SOC_ASP_ICR_p2fadeouticr_START  (16)
#define SOC_ASP_ICR_p2fadeouticr_END    (16)
#define SOC_ASP_ICR_p3fadeouticr_START  (17)
#define SOC_ASP_ICR_p3fadeouticr_END    (17)
#define SOC_ASP_ICR_abericr_START       (18)
#define SOC_ASP_ICR_abericr_END         (18)


/*****************************************************************************
 �ṹ��    : SOC_ASP_PCMNSSR_UNION
 �ṹ˵��  : PCMNSSR �Ĵ����ṹ���塣��ַƫ����:0x030����ֵ:0x00000000�����:32
 �Ĵ���˵��: ͨ���¸���ʼ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  p0dsr    : 1;  /* bit[0]   : PCM0ͨ���¸���ʼ��
                                                   0����Ч��
                                                   1���¸���ʼ�� */
        unsigned int  p1dsr    : 1;  /* bit[1]   : PCM1ͨ���¸���ʼ��
                                                   0����Ч��
                                                   1���¸���ʼ�� */
        unsigned int  p2dsr    : 1;  /* bit[2]   : PCM2ͨ���¸���ʼ��
                                                   0����Ч��
                                                   1���¸���ʼ�� */
        unsigned int  p3dsr    : 1;  /* bit[3]   : PCM3ͨ���¸���ʼ��
                                                   0����Ч��
                                                   1���¸���ʼ�� */
        unsigned int  reserved : 28; /* bit[4-31]: ������ */
    } reg;
} SOC_ASP_PCMNSSR_UNION;
#endif
#define SOC_ASP_PCMNSSR_p0dsr_START     (0)
#define SOC_ASP_PCMNSSR_p0dsr_END       (0)
#define SOC_ASP_PCMNSSR_p1dsr_START     (1)
#define SOC_ASP_PCMNSSR_p1dsr_END       (1)
#define SOC_ASP_PCMNSSR_p2dsr_START     (2)
#define SOC_ASP_PCMNSSR_p2dsr_END       (2)
#define SOC_ASP_PCMNSSR_p3dsr_START     (3)
#define SOC_ASP_PCMNSSR_p3dsr_END       (3)


/*****************************************************************************
 �ṹ��    : SOC_ASP_P0RSRR_UNION
 �ṹ˵��  : P0RSRR �Ĵ����ṹ���塣��ַƫ����:0x034����ֵ:0x00000000�����:32
 �Ĵ���˵��: TX0�ز����Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  p0rsr    : 4;  /* bit[0-3] : PCM0ͨ���ز���Ƶ��ѡ��
                                                   0000��8kHz��
                                                   0001��11.025kHz��
                                                   0010��12kHz��
                                                   0011��16kHz��
                                                   0100��22.05kHz��
                                                   0101��24kHz��
                                                   0110��32kHz��
                                                   0111��44.1kHz��
                                                   1000-48KHz��
                                                   1001-88.2kHz��
                                                   1010 or others��96kHz�� */
        unsigned int  reserved : 28; /* bit[4-31]: ������ */
    } reg;
} SOC_ASP_P0RSRR_UNION;
#endif
#define SOC_ASP_P0RSRR_p0rsr_START     (0)
#define SOC_ASP_P0RSRR_p0rsr_END       (3)


/*****************************************************************************
 �ṹ��    : SOC_ASP_P1RSRR_UNION
 �ṹ˵��  : P1RSRR �Ĵ����ṹ���塣��ַƫ����:0x038����ֵ:0x00000000�����:32
 �Ĵ���˵��: TX1�ز����Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  p1rsr    : 4;  /* bit[0-3] : PCM1ͨ���ز���Ƶ��ѡ��
                                                   0000��8kHz��
                                                   0001��11.025kHz��
                                                   0010��12kHz��
                                                   0011��16kHz��
                                                   0100��22.05kHz��
                                                   0101��24kHz��
                                                   0110��32kHz��
                                                   0111��44.1kHz��
                                                   1000-48KHz��
                                                   1001-88.2kHz��
                                                   1010-96kHz��
                                                   1011-176.4kHz��
                                                   1100 or others��192kHz�� */
        unsigned int  reserved : 28; /* bit[4-31]: ������ */
    } reg;
} SOC_ASP_P1RSRR_UNION;
#endif
#define SOC_ASP_P1RSRR_p1rsr_START     (0)
#define SOC_ASP_P1RSRR_p1rsr_END       (3)


/*****************************************************************************
 �ṹ��    : SOC_ASP_P2RSRR_UNION
 �ṹ˵��  : P2RSRR �Ĵ����ṹ���塣��ַƫ����:0x03C����ֵ:0x00000000�����:32
 �Ĵ���˵��: TX2�ز����Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  p2rsr    : 4;  /* bit[0-3] : PCM2ͨ���ز���Ƶ��ѡ��
                                                   0000��8kHz��
                                                   0001��11.025kHz��
                                                   0010��12kHz��
                                                   0011��16kHz��
                                                   0100��22.05kHz��
                                                   0101��24kHz��
                                                   0110��32kHz��
                                                   0111��44.1kHz��
                                                   1000-48KHz��
                                                   1001-88.2kHz��
                                                   1010-96kHz��
                                                   1011-176.4kHz��
                                                   1100 or others��192kHz�� */
        unsigned int  reserved : 28; /* bit[4-31]: ������ */
    } reg;
} SOC_ASP_P2RSRR_UNION;
#endif
#define SOC_ASP_P2RSRR_p2rsr_START     (0)
#define SOC_ASP_P2RSRR_p2rsr_END       (3)


/*****************************************************************************
 �ṹ��    : SOC_ASP_P3RSRR_UNION
 �ṹ˵��  : P3RSRR �Ĵ����ṹ���塣��ַƫ����:0x040����ֵ:0x00000000�����:32
 �Ĵ���˵��: TX3�ز����Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  p3rsr    : 4;  /* bit[0-3] : PCM3ͨ���ز���Ƶ��ѡ��
                                                   0000��8kHz��
                                                   0001��11.025kHz��
                                                   0010��12kHz��
                                                   0011��16kHz��
                                                   0100��22.05kHz��
                                                   0101��24kHz��
                                                   0110��32kHz��
                                                   0111��44.1kHz��
                                                   1000-48KHz��
                                                   1001-88.2kHz��
                                                   1010-96kHz��
                                                   1011-176.4kHz��
                                                   1100 or others��192kHz�� */
        unsigned int  reserved : 28; /* bit[4-31]: ������ */
    } reg;
} SOC_ASP_P3RSRR_UNION;
#endif
#define SOC_ASP_P3RSRR_p3rsr_START     (0)
#define SOC_ASP_P3RSRR_p3rsr_END       (3)


/*****************************************************************************
 �ṹ��    : SOC_ASP_FADEINEN0_UNION
 �ṹ˵��  : FADEINEN0 �Ĵ����ṹ���塣��ַƫ����:0x044����ֵ:0x00000000�����:32
 �Ĵ���˵��: TX0����ʹ�ܼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  tx0_fadeien : 1;  /* bit[0]   : TX0ͨ������ʹ�ܡ�
                                                      0����ʹ�ܣ�
                                                      1��ʹ�ܡ�
                                                      ע�⣺�üĴ������д��1����Ӳ�����㣬���д��0����Ч�� */
        unsigned int  reserved    : 31; /* bit[1-31]: ������ */
    } reg;
} SOC_ASP_FADEINEN0_UNION;
#endif
#define SOC_ASP_FADEINEN0_tx0_fadeien_START  (0)
#define SOC_ASP_FADEINEN0_tx0_fadeien_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_ASP_FADEOUTEN0_UNION
 �ṹ˵��  : FADEOUTEN0 �Ĵ����ṹ���塣��ַƫ����:0x048����ֵ:0x00000000�����:32
 �Ĵ���˵��: TX0����ʹ�ܼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  tx0_fadeoen : 1;  /* bit[0]   : TX0ͨ������ʹ�ܡ�
                                                      0����ʹ�ܣ�
                                                      1��ʹ�ܡ�
                                                      ע�⣺�üĴ������д��1����Ӳ�����㣬���д��0����Ч�� */
        unsigned int  reserved    : 31; /* bit[1-31]: ������ */
    } reg;
} SOC_ASP_FADEOUTEN0_UNION;
#endif
#define SOC_ASP_FADEOUTEN0_tx0_fadeoen_START  (0)
#define SOC_ASP_FADEOUTEN0_tx0_fadeoen_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_ASP_FADERATE0_UNION
 �ṹ˵��  : FADERATE0 �Ĵ����ṹ���塣��ַƫ����:0x04C����ֵ:0x00000000�����:32
 �Ĵ���˵��: TX0���뵭�����ʡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  tx0_faderate : 16; /* bit[0-15] : TX0���뵭�����ʡ���ʾ���ٸ���Ƶ�������㽵�ͻ�����1��dB��ʵ��ֵΪ����ֵ+1�� */
        unsigned int  reserved     : 16; /* bit[16-31]: ������ */
    } reg;
} SOC_ASP_FADERATE0_UNION;
#endif
#define SOC_ASP_FADERATE0_tx0_faderate_START  (0)
#define SOC_ASP_FADERATE0_tx0_faderate_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_ASP_FADEINEN1_UNION
 �ṹ˵��  : FADEINEN1 �Ĵ����ṹ���塣��ַƫ����:0x050����ֵ:0x00000000�����:32
 �Ĵ���˵��: TX1����ʹ�ܼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  tx1_fadeien : 1;  /* bit[0]   : TX1ͨ������ʹ�ܡ�
                                                      0����ʹ�ܣ�
                                                      1��ʹ�ܡ�
                                                      ע�⣺�üĴ������д��1����Ӳ�����㣬���д��0����Ч�� */
        unsigned int  reserved    : 31; /* bit[1-31]: ������ */
    } reg;
} SOC_ASP_FADEINEN1_UNION;
#endif
#define SOC_ASP_FADEINEN1_tx1_fadeien_START  (0)
#define SOC_ASP_FADEINEN1_tx1_fadeien_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_ASP_FADEOUTEN1_UNION
 �ṹ˵��  : FADEOUTEN1 �Ĵ����ṹ���塣��ַƫ����:0x054����ֵ:0x00000000�����:32
 �Ĵ���˵��: TX1����ʹ�ܼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  tx1_fadeoen : 1;  /* bit[0]   : TX1ͨ������ʹ�ܡ�
                                                      0����ʹ�ܣ�
                                                      1��ʹ�ܡ�
                                                      ע�⣺�üĴ������д��1����Ӳ�����㣬���д��0����Ч�� */
        unsigned int  reserved    : 31; /* bit[1-31]: ������ */
    } reg;
} SOC_ASP_FADEOUTEN1_UNION;
#endif
#define SOC_ASP_FADEOUTEN1_tx1_fadeoen_START  (0)
#define SOC_ASP_FADEOUTEN1_tx1_fadeoen_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_ASP_FADERATE1_UNION
 �ṹ˵��  : FADERATE1 �Ĵ����ṹ���塣��ַƫ����:0x058����ֵ:0x00000000�����:32
 �Ĵ���˵��: TX1���뵭�����ʡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  tx1_faderate : 16; /* bit[0-15] : TX1���뵭�����ʡ���ʾ���ٸ���Ƶ�������㽵�ͻ�����1��dB��ʵ��ֵΪ����ֵ+1�� */
        unsigned int  reserved     : 16; /* bit[16-31]: ������ */
    } reg;
} SOC_ASP_FADERATE1_UNION;
#endif
#define SOC_ASP_FADERATE1_tx1_faderate_START  (0)
#define SOC_ASP_FADERATE1_tx1_faderate_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_ASP_FADEINEN2_UNION
 �ṹ˵��  : FADEINEN2 �Ĵ����ṹ���塣��ַƫ����:0x05C����ֵ:0x00000000�����:32
 �Ĵ���˵��: TX2����ʹ�ܼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  tx2_fadeien : 1;  /* bit[0]   : TX2ͨ������ʹ�ܡ�
                                                      0����ʹ�ܣ�
                                                      1��ʹ�ܡ�
                                                      ע�⣺�üĴ������д��1����Ӳ�����㣬���д��0����Ч�� */
        unsigned int  reserved    : 31; /* bit[1-31]: ������ */
    } reg;
} SOC_ASP_FADEINEN2_UNION;
#endif
#define SOC_ASP_FADEINEN2_tx2_fadeien_START  (0)
#define SOC_ASP_FADEINEN2_tx2_fadeien_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_ASP_FADEOUTEN2_UNION
 �ṹ˵��  : FADEOUTEN2 �Ĵ����ṹ���塣��ַƫ����:0x060����ֵ:0x00000000�����:32
 �Ĵ���˵��: TX2����ʹ�ܼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  tx2_fadeoen : 1;  /* bit[0]   : TX2ͨ������ʹ�ܡ�
                                                      0����ʹ�ܣ�
                                                      1��ʹ�ܡ�
                                                      ע�⣺�üĴ������д��1����Ӳ�����㣬���д��0����Ч�� */
        unsigned int  reserved    : 31; /* bit[1-31]: ������ */
    } reg;
} SOC_ASP_FADEOUTEN2_UNION;
#endif
#define SOC_ASP_FADEOUTEN2_tx2_fadeoen_START  (0)
#define SOC_ASP_FADEOUTEN2_tx2_fadeoen_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_ASP_FADERATE2_UNION
 �ṹ˵��  : FADERATE2 �Ĵ����ṹ���塣��ַƫ����:0x064����ֵ:0x00000000�����:32
 �Ĵ���˵��: TX2���뵭�����ʡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  tx2_faderate : 16; /* bit[0-15] : TX2���뵭�����ʡ���ʾ���ٸ���Ƶ�������㽵�ͻ�����1��dB��ʵ��ֵΪ����ֵ+1�� */
        unsigned int  reserved     : 16; /* bit[16-31]: ������ */
    } reg;
} SOC_ASP_FADERATE2_UNION;
#endif
#define SOC_ASP_FADERATE2_tx2_faderate_START  (0)
#define SOC_ASP_FADERATE2_tx2_faderate_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_ASP_FADEINEN3_UNION
 �ṹ˵��  : FADEINEN3 �Ĵ����ṹ���塣��ַƫ����:0x068����ֵ:0x00000000�����:32
 �Ĵ���˵��: TX3����ʹ�ܼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  tx3_fadeien : 1;  /* bit[0]   : TX3ͨ������ʹ�ܡ�
                                                      0����ʹ�ܣ�
                                                      1��ʹ�ܡ�
                                                      ע�⣺�üĴ������д��1����Ӳ�����㣬���д��0����Ч�� */
        unsigned int  reserved    : 31; /* bit[1-31]: ������ */
    } reg;
} SOC_ASP_FADEINEN3_UNION;
#endif
#define SOC_ASP_FADEINEN3_tx3_fadeien_START  (0)
#define SOC_ASP_FADEINEN3_tx3_fadeien_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_ASP_FADEOUTEN3_UNION
 �ṹ˵��  : FADEOUTEN3 �Ĵ����ṹ���塣��ַƫ����:0x06C����ֵ:0x00000000�����:32
 �Ĵ���˵��: TX3����ʹ�ܼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  tx3_fadeoen : 1;  /* bit[0]   : TX3ͨ������ʹ�ܡ�
                                                      0����ʹ�ܣ�
                                                      1��ʹ�ܡ�
                                                      ע�⣺�üĴ������д��1����Ӳ�����㣬���д��0����Ч�� */
        unsigned int  reserved    : 31; /* bit[1-31]: ������ */
    } reg;
} SOC_ASP_FADEOUTEN3_UNION;
#endif
#define SOC_ASP_FADEOUTEN3_tx3_fadeoen_START  (0)
#define SOC_ASP_FADEOUTEN3_tx3_fadeoen_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_ASP_FADERATE3_UNION
 �ṹ˵��  : FADERATE3 �Ĵ����ṹ���塣��ַƫ����:0x070����ֵ:0x00000000�����:32
 �Ĵ���˵��: TX3���뵭�����ʡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  tx3_faderate : 16; /* bit[0-15] : TX3���뵭�����ʡ���ʾ���ٸ���Ƶ�������㽵�ͻ�����1��dB��ʵ��ֵΪ����ֵ+1�� */
        unsigned int  reserved     : 16; /* bit[16-31]: ������ */
    } reg;
} SOC_ASP_FADERATE3_UNION;
#endif
#define SOC_ASP_FADERATE3_tx3_faderate_START  (0)
#define SOC_ASP_FADERATE3_tx3_faderate_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_ASP_P0LCGR_UNION
 �ṹ˵��  : P0LCGR �Ĵ����ṹ���塣��ַƫ����:0x074����ֵ:0x00000000�����:32
 �Ĵ���˵��: PCM0ͨ������������Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  p0lcgr   : 16; /* bit[0-15] : PCM0ͨ�������������С���á� */
        unsigned int  reserved : 16; /* bit[16-31]: ������ */
    } reg;
} SOC_ASP_P0LCGR_UNION;
#endif
#define SOC_ASP_P0LCGR_p0lcgr_START    (0)
#define SOC_ASP_P0LCGR_p0lcgr_END      (15)


/*****************************************************************************
 �ṹ��    : SOC_ASP_P0RCGR_UNION
 �ṹ˵��  : P0RCGR �Ĵ����ṹ���塣��ַƫ����:0x078����ֵ:0x00000000�����:32
 �Ĵ���˵��: PCM0ͨ������������Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  p0rcgr   : 16; /* bit[0-15] : PCM0ͨ�������������С���á� */
        unsigned int  reserved : 16; /* bit[16-31]: ������ */
    } reg;
} SOC_ASP_P0RCGR_UNION;
#endif
#define SOC_ASP_P0RCGR_p0rcgr_START    (0)
#define SOC_ASP_P0RCGR_p0rcgr_END      (15)


/*****************************************************************************
 �ṹ��    : SOC_ASP_P1LCGR_UNION
 �ṹ˵��  : P1LCGR �Ĵ����ṹ���塣��ַƫ����:0x07C����ֵ:0x00000000�����:32
 �Ĵ���˵��: PCM1ͨ������������Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  p1lcgr   : 16; /* bit[0-15] : PCM1ͨ�������������С���á� */
        unsigned int  reserved : 16; /* bit[16-31]: ������ */
    } reg;
} SOC_ASP_P1LCGR_UNION;
#endif
#define SOC_ASP_P1LCGR_p1lcgr_START    (0)
#define SOC_ASP_P1LCGR_p1lcgr_END      (15)


/*****************************************************************************
 �ṹ��    : SOC_ASP_P1RCGR_UNION
 �ṹ˵��  : P1RCGR �Ĵ����ṹ���塣��ַƫ����:0x080����ֵ:0x00000000�����:32
 �Ĵ���˵��: PCM1ͨ������������Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  p1rcgr   : 16; /* bit[0-15] : PCM1ͨ�������������С���á� */
        unsigned int  reserved : 16; /* bit[16-31]: ������ */
    } reg;
} SOC_ASP_P1RCGR_UNION;
#endif
#define SOC_ASP_P1RCGR_p1rcgr_START    (0)
#define SOC_ASP_P1RCGR_p1rcgr_END      (15)


/*****************************************************************************
 �ṹ��    : SOC_ASP_P2LCGR_UNION
 �ṹ˵��  : P2LCGR �Ĵ����ṹ���塣��ַƫ����:0x084����ֵ:0x00000000�����:32
 �Ĵ���˵��: PCM2ͨ������������Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  p2lcgr   : 16; /* bit[0-15] : PCM2ͨ�������������С���á� */
        unsigned int  reserved : 16; /* bit[16-31]: ������ */
    } reg;
} SOC_ASP_P2LCGR_UNION;
#endif
#define SOC_ASP_P2LCGR_p2lcgr_START    (0)
#define SOC_ASP_P2LCGR_p2lcgr_END      (15)


/*****************************************************************************
 �ṹ��    : SOC_ASP_P2RCGR_UNION
 �ṹ˵��  : P2RCGR �Ĵ����ṹ���塣��ַƫ����:0x088����ֵ:0x00000000�����:32
 �Ĵ���˵��: PCM2ͨ������������Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  p2rcgr   : 16; /* bit[0-15] : PCM2ͨ�������������С���á� */
        unsigned int  reserved : 16; /* bit[16-31]: ������ */
    } reg;
} SOC_ASP_P2RCGR_UNION;
#endif
#define SOC_ASP_P2RCGR_p2rcgr_START    (0)
#define SOC_ASP_P2RCGR_p2rcgr_END      (15)


/*****************************************************************************
 �ṹ��    : SOC_ASP_P30CGR_UNION
 �ṹ˵��  : P30CGR �Ĵ����ṹ���塣��ַƫ����:0x08C����ֵ:0x00000000�����:32
 �Ĵ���˵��: PCM3ͨ��0��������Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  p30cgr   : 16; /* bit[0-15] : PCM3ͨ��0���������С���á� */
        unsigned int  reserved : 16; /* bit[16-31]: ������ */
    } reg;
} SOC_ASP_P30CGR_UNION;
#endif
#define SOC_ASP_P30CGR_p30cgr_START    (0)
#define SOC_ASP_P30CGR_p30cgr_END      (15)


/*****************************************************************************
 �ṹ��    : SOC_ASP_P31CGR_UNION
 �ṹ˵��  : P31CGR �Ĵ����ṹ���塣��ַƫ����:0x090����ֵ:0x00000000�����:32
 �Ĵ���˵��: PCM3ͨ��1��������Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  p31cgr   : 16; /* bit[0-15] : PCM3ͨ��1���������С���á� */
        unsigned int  reserved : 16; /* bit[16-31]: ������ */
    } reg;
} SOC_ASP_P31CGR_UNION;
#endif
#define SOC_ASP_P31CGR_p31cgr_START    (0)
#define SOC_ASP_P31CGR_p31cgr_END      (15)


/*****************************************************************************
 �ṹ��    : SOC_ASP_P32CGR_UNION
 �ṹ˵��  : P32CGR �Ĵ����ṹ���塣��ַƫ����:0x094����ֵ:0x00000000�����:32
 �Ĵ���˵��: PCM3ͨ��2��������Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  p32cgr   : 16; /* bit[0-15] : PCM3ͨ��2���������С���á� */
        unsigned int  reserved : 16; /* bit[16-31]: ������ */
    } reg;
} SOC_ASP_P32CGR_UNION;
#endif
#define SOC_ASP_P32CGR_p32cgr_START    (0)
#define SOC_ASP_P32CGR_p32cgr_END      (15)


/*****************************************************************************
 �ṹ��    : SOC_ASP_P33CGR_UNION
 �ṹ˵��  : P33CGR �Ĵ����ṹ���塣��ַƫ����:0x098����ֵ:0x00000000�����:32
 �Ĵ���˵��: PCM3ͨ��3��������Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  p33cgr   : 16; /* bit[0-15] : PCM3ͨ��3���������С���á� */
        unsigned int  reserved : 16; /* bit[16-31]: ������ */
    } reg;
} SOC_ASP_P33CGR_UNION;
#endif
#define SOC_ASP_P33CGR_p33cgr_START    (0)
#define SOC_ASP_P33CGR_p33cgr_END      (15)


/*****************************************************************************
 �ṹ��    : SOC_ASP_P34CGR_UNION
 �ṹ˵��  : P34CGR �Ĵ����ṹ���塣��ַƫ����:0x09C����ֵ:0x00000000�����:32
 �Ĵ���˵��: PCM3ͨ��4��������Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  p34cgr   : 16; /* bit[0-15] : PCM3ͨ��4���������С���á� */
        unsigned int  reserved : 16; /* bit[16-31]: ������ */
    } reg;
} SOC_ASP_P34CGR_UNION;
#endif
#define SOC_ASP_P34CGR_p34cgr_START    (0)
#define SOC_ASP_P34CGR_p34cgr_END      (15)


/*****************************************************************************
 �ṹ��    : SOC_ASP_P35CGR_UNION
 �ṹ˵��  : P35CGR �Ĵ����ṹ���塣��ַƫ����:0x0A0����ֵ:0x00000000�����:32
 �Ĵ���˵��: PCM3ͨ��5��������Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  p35cgr   : 16; /* bit[0-15] : PCM3ͨ��5���������С���á� */
        unsigned int  reserved : 16; /* bit[16-31]: ������ */
    } reg;
} SOC_ASP_P35CGR_UNION;
#endif
#define SOC_ASP_P35CGR_p35cgr_START    (0)
#define SOC_ASP_P35CGR_p35cgr_END      (15)


/*****************************************************************************
 �ṹ��    : SOC_ASP_P36CGR_UNION
 �ṹ˵��  : P36CGR �Ĵ����ṹ���塣��ַƫ����:0x0A4����ֵ:0x00000000�����:32
 �Ĵ���˵��: PCM3ͨ��6��������Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  p36cgr   : 16; /* bit[0-15] : PCM3ͨ��6���������С���á� */
        unsigned int  reserved : 16; /* bit[16-31]: ������ */
    } reg;
} SOC_ASP_P36CGR_UNION;
#endif
#define SOC_ASP_P36CGR_p36cgr_START    (0)
#define SOC_ASP_P36CGR_p36cgr_END      (15)


/*****************************************************************************
 �ṹ��    : SOC_ASP_P37CGR_UNION
 �ṹ˵��  : P37CGR �Ĵ����ṹ���塣��ַƫ����:0x0A8����ֵ:0x00000000�����:32
 �Ĵ���˵��: PCM3ͨ��7��������Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  p37cgr   : 16; /* bit[0-15] : PCM3ͨ��7���������С���á� */
        unsigned int  reserved : 16; /* bit[16-31]: ������ */
    } reg;
} SOC_ASP_P37CGR_UNION;
#endif
#define SOC_ASP_P37CGR_p37cgr_START    (0)
#define SOC_ASP_P37CGR_p37cgr_END      (15)


/*****************************************************************************
 �ṹ��    : SOC_ASP_MIXCTL_UNION
 �ṹ˵��  : MIXCTL �Ĵ����ṹ���塣��ַƫ����:0x0AC����ֵ:0x00000000�����:32
 �Ĵ���˵��: �������üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mix_ctrl : 2;  /* bit[0-1] : TX3��TX1/TX2�������ƼĴ�����
                                                   00��TX3������0������1��TX1/TX2����������������������
                                                   01��TX3������2������3��TX1/TX2����������������������
                                                   10��TX3������4������5��TX1/TX2����������������������
                                                   11��TX3������6������7��TX1/TX2���������������������� */
        unsigned int  reserved : 30; /* bit[2-31]: ������ */
    } reg;
} SOC_ASP_MIXCTL_UNION;
#endif
#define SOC_ASP_MIXCTL_mix_ctrl_START  (0)
#define SOC_ASP_MIXCTL_mix_ctrl_END    (1)


/*****************************************************************************
 �ṹ��    : SOC_ASP_PRASAR_UNION
 �ṹ˵��  : PRASAR �Ĵ����ṹ���塣��ַƫ����:0x0B0����ֵ:0x00000000�����:32
 �Ĵ���˵��: PCMRXAͨ��������ʼ��ַ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  prasar : 32; /* bit[0-31]: PCMRXAͨ��DMA��ʼ��ַ��
                                                 ע�⣺bit[1:0]��������Ϊ2'b0���Ƽ�bit[3:0]����Ϊ4'h0�� */
    } reg;
} SOC_ASP_PRASAR_UNION;
#endif
#define SOC_ASP_PRASAR_prasar_START  (0)
#define SOC_ASP_PRASAR_prasar_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_ASP_PRADLR_UNION
 �ṹ˵��  : PRADLR �Ĵ����ṹ���塣��ַƫ����:0x0B4����ֵ:0x00000000�����:32
 �Ĵ���˵��: PCMRXAͨ�����˳��ȼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pradlr   : 20; /* bit[0-19] : PCMRXAͨ��A��DMA���ȣ����ֽ�Ϊ��λ��
                                                    ע�⣺bit[2:0]��������Ϊ3'b0�� */
        unsigned int  reserved : 12; /* bit[20-31]: ������ */
    } reg;
} SOC_ASP_PRADLR_UNION;
#endif
#define SOC_ASP_PRADLR_pradlr_START    (0)
#define SOC_ASP_PRADLR_pradlr_END      (19)


/*****************************************************************************
 �ṹ��    : SOC_ASP_PRBSAR_UNION
 �ṹ˵��  : PRBSAR �Ĵ����ṹ���塣��ַƫ����:0x0B8����ֵ:0x00000000�����:32
 �Ĵ���˵��: PCMRXBͨ��������ʼ��ַ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  prbsar : 32; /* bit[0-31]: PCMRXBͨ��DMA��ʼ��ַ��
                                                 ע�⣺bit[1:0]��������Ϊ2'b0���Ƽ�bit[3:0]����Ϊ4'h0�� */
    } reg;
} SOC_ASP_PRBSAR_UNION;
#endif
#define SOC_ASP_PRBSAR_prbsar_START  (0)
#define SOC_ASP_PRBSAR_prbsar_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_ASP_PRBDLR_UNION
 �ṹ˵��  : PRBDLR �Ĵ����ṹ���塣��ַƫ����:0x0BC����ֵ:0x00000000�����:32
 �Ĵ���˵��: PCMRXBͨ�����˳��ȼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  prbdlr   : 20; /* bit[0-19] : PCMXͨ��B��DMA���ȣ����ֽ�Ϊ��λ��
                                                    ע�⣺bit[2:0]��������Ϊ3'b0�� */
        unsigned int  reserved : 12; /* bit[20-31]: ������ */
    } reg;
} SOC_ASP_PRBDLR_UNION;
#endif
#define SOC_ASP_PRBDLR_prbdlr_START    (0)
#define SOC_ASP_PRBDLR_prbdlr_END      (19)


/*****************************************************************************
 �ṹ��    : SOC_ASP_P0ASAR_UNION
 �ṹ˵��  : P0ASAR �Ĵ����ṹ���塣��ַƫ����:0x0C0����ֵ:0x00000000�����:32
 �Ĵ���˵��: PCM0Aͨ��������ʼ��ַ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  p0asar : 32; /* bit[0-31]: PCM0ͨ��A��DMA��ʼ��ַ��
                                                 ע�⣺bit[1:0]��������Ϊ2'b0���Ƽ�bit[3:0]����Ϊ4'h0�� */
    } reg;
} SOC_ASP_P0ASAR_UNION;
#endif
#define SOC_ASP_P0ASAR_p0asar_START  (0)
#define SOC_ASP_P0ASAR_p0asar_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_ASP_P0ADLR_UNION
 �ṹ˵��  : P0ADLR �Ĵ����ṹ���塣��ַƫ����:0x0C4����ֵ:0x00000000�����:32
 �Ĵ���˵��: PCM0Aͨ�����˳��ȼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  p0adlr   : 20; /* bit[0-19] : PCM0ͨ��A��DMA���ȣ����ֽ�Ϊ��λ��
                                                    ע�⣺bit[2:0]��������Ϊ3'b0�� */
        unsigned int  reserved : 12; /* bit[20-31]: ������ */
    } reg;
} SOC_ASP_P0ADLR_UNION;
#endif
#define SOC_ASP_P0ADLR_p0adlr_START    (0)
#define SOC_ASP_P0ADLR_p0adlr_END      (19)


/*****************************************************************************
 �ṹ��    : SOC_ASP_P0BSAR_UNION
 �ṹ˵��  : P0BSAR �Ĵ����ṹ���塣��ַƫ����:0x0C8����ֵ:0x00000000�����:32
 �Ĵ���˵��: PCM0Bͨ��������ʼ��ַ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  p0bsar : 32; /* bit[0-31]: PCM0ͨ��B��DMA��ʼ��ַ��
                                                 ע�⣺bit[1:0]��������Ϊ2'b0���Ƽ�bit[3:0]����Ϊ4'h0�� */
    } reg;
} SOC_ASP_P0BSAR_UNION;
#endif
#define SOC_ASP_P0BSAR_p0bsar_START  (0)
#define SOC_ASP_P0BSAR_p0bsar_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_ASP_P0BDLR_UNION
 �ṹ˵��  : P0BDLR �Ĵ����ṹ���塣��ַƫ����:0x0CC����ֵ:0x00000000�����:32
 �Ĵ���˵��: PCM0Bͨ�����˳��ȼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  p0bdlr   : 20; /* bit[0-19] : PCM1ͨ��B��DMA���ȣ����ֽ�Ϊ��λ��
                                                    ע�⣺bit[2:0]��������Ϊ3'b0�� */
        unsigned int  reserved : 12; /* bit[20-31]: ������ */
    } reg;
} SOC_ASP_P0BDLR_UNION;
#endif
#define SOC_ASP_P0BDLR_p0bdlr_START    (0)
#define SOC_ASP_P0BDLR_p0bdlr_END      (19)


/*****************************************************************************
 �ṹ��    : SOC_ASP_P1ASAR_UNION
 �ṹ˵��  : P1ASAR �Ĵ����ṹ���塣��ַƫ����:0x0D0����ֵ:0x00000000�����:32
 �Ĵ���˵��: PCM1Aͨ��������ʼ��ַ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  p1asar : 32; /* bit[0-31]: PCM1ͨ��A��DMA��ʼ��ַ��
                                                 ע�⣺bit[1:0]��������Ϊ2'b0���Ƽ�bit[3:0]����Ϊ4'h0�� */
    } reg;
} SOC_ASP_P1ASAR_UNION;
#endif
#define SOC_ASP_P1ASAR_p1asar_START  (0)
#define SOC_ASP_P1ASAR_p1asar_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_ASP_P1ADLR_UNION
 �ṹ˵��  : P1ADLR �Ĵ����ṹ���塣��ַƫ����:0x0D4����ֵ:0x00000000�����:32
 �Ĵ���˵��: PCM1Aͨ�����˳��ȼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  p1adlr   : 20; /* bit[0-19] : PCM1ͨ��A��DMA���ȣ����ֽ�Ϊ��λ��
                                                    ע�⣺bit[2:0]��������Ϊ3'b0�� */
        unsigned int  reserved : 12; /* bit[20-31]: ������ */
    } reg;
} SOC_ASP_P1ADLR_UNION;
#endif
#define SOC_ASP_P1ADLR_p1adlr_START    (0)
#define SOC_ASP_P1ADLR_p1adlr_END      (19)


/*****************************************************************************
 �ṹ��    : SOC_ASP_P1BSAR_UNION
 �ṹ˵��  : P1BSAR �Ĵ����ṹ���塣��ַƫ����:0x0D8����ֵ:0x00000000�����:32
 �Ĵ���˵��: PCM1Bͨ��������ʼ��ַ�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  p1bsar : 32; /* bit[0-31]: PCM1ͨ��B��DMA��ʼ��ַ��
                                                 ע�⣺bit[1:0]��������Ϊ2'b0���Ƽ�bit[3:0]����Ϊ4'h0�� */
    } reg;
} SOC_ASP_P1BSAR_UNION;
#endif
#define SOC_ASP_P1BSAR_p1bsar_START  (0)
#define SOC_ASP_P1BSAR_p1bsar_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_ASP_P1BDLR_UNION
 �ṹ˵��  : P1BDLR �Ĵ����ṹ���塣��ַƫ����:0x0DC����ֵ:0x00000000�����:32
 �Ĵ���˵��: PCM1Bͨ�����˳��ȼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  p1bdlr   : 20; /* bit[0-19] : PCM1ͨ��B��DMA���ȣ����ֽ�Ϊ��λ��
                                                    ע�⣺bit[2:0]��������Ϊ3'b0�� */
        unsigned int  reserved : 12; /* bit[20-31]: ������ */
    } reg;
} SOC_ASP_P1BDLR_UNION;
#endif
#define SOC_ASP_P1BDLR_p1bdlr_START    (0)
#define SOC_ASP_P1BDLR_p1bdlr_END      (19)


/*****************************************************************************
 �ṹ��    : SOC_ASP_P2ASAR_UNION
 �ṹ˵��  : P2ASAR �Ĵ����ṹ���塣��ַƫ����:0x0E0����ֵ:0x00000000�����:32
 �Ĵ���˵��: PCM2Aͨ��������ʼ��ַ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  p2asar : 32; /* bit[0-31]: PCM2ͨ��A��DMA��ʼ��ַ��
                                                 ע�⣺bit[1:0]��������Ϊ2'b0���Ƽ�bit[3:0]����Ϊ4'h0�� */
    } reg;
} SOC_ASP_P2ASAR_UNION;
#endif
#define SOC_ASP_P2ASAR_p2asar_START  (0)
#define SOC_ASP_P2ASAR_p2asar_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_ASP_P2ADLR_UNION
 �ṹ˵��  : P2ADLR �Ĵ����ṹ���塣��ַƫ����:0x0E4����ֵ:0x00000000�����:32
 �Ĵ���˵��: PCM2Aͨ�����˳��ȼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  p2adlr   : 20; /* bit[0-19] : PCM2ͨ��A��DMA���ȣ����ֽ�Ϊ��λ��
                                                    ע�⣺bit[2:0]��������Ϊ3'b0�� */
        unsigned int  reserved : 12; /* bit[20-31]: ������ */
    } reg;
} SOC_ASP_P2ADLR_UNION;
#endif
#define SOC_ASP_P2ADLR_p2adlr_START    (0)
#define SOC_ASP_P2ADLR_p2adlr_END      (19)


/*****************************************************************************
 �ṹ��    : SOC_ASP_P2BSAR_UNION
 �ṹ˵��  : P2BSAR �Ĵ����ṹ���塣��ַƫ����:0x0E8����ֵ:0x00000000�����:32
 �Ĵ���˵��: PCM2Bͨ��������ʼ��ַ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  p2bsar : 32; /* bit[0-31]: PCM2ͨ��B��DMA��ʼ��ַ��
                                                 ע�⣺bit[1:0]��������Ϊ2'b0���Ƽ�bit[3:0]����Ϊ4'h0�� */
    } reg;
} SOC_ASP_P2BSAR_UNION;
#endif
#define SOC_ASP_P2BSAR_p2bsar_START  (0)
#define SOC_ASP_P2BSAR_p2bsar_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_ASP_P2BDLR_UNION
 �ṹ˵��  : P2BDLR �Ĵ����ṹ���塣��ַƫ����:0x0EC����ֵ:0x00000000�����:32
 �Ĵ���˵��: PCM2Bͨ�����˳��ȼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  p2bdlr   : 20; /* bit[0-19] : PCM2ͨ��B��DMA���ȣ����ֽ�Ϊ��λ��
                                                    ע�⣺bit[2:0]��������Ϊ3'b0�� */
        unsigned int  reserved : 12; /* bit[20-31]: ������ */
    } reg;
} SOC_ASP_P2BDLR_UNION;
#endif
#define SOC_ASP_P2BDLR_p2bdlr_START    (0)
#define SOC_ASP_P2BDLR_p2bdlr_END      (19)


/*****************************************************************************
 �ṹ��    : SOC_ASP_P3ASAR_UNION
 �ṹ˵��  : P3ASAR �Ĵ����ṹ���塣��ַƫ����:0x0F0����ֵ:0x00000000�����:32
 �Ĵ���˵��: PCM3Aͨ��������ʼ��ַ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  p3asar : 32; /* bit[0-31]: PCM3ͨ��A��DMA��ʼ��ַ��
                                                 ע�⣺bit[1:0]��������Ϊ2'b0���Ƽ�bit[3:0]����Ϊ4'h0�� */
    } reg;
} SOC_ASP_P3ASAR_UNION;
#endif
#define SOC_ASP_P3ASAR_p3asar_START  (0)
#define SOC_ASP_P3ASAR_p3asar_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_ASP_P3ADLR_UNION
 �ṹ˵��  : P3ADLR �Ĵ����ṹ���塣��ַƫ����:0x0F4����ֵ:0x00000000�����:32
 �Ĵ���˵��: PCM3Aͨ�����˳��ȼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  p3adlr   : 20; /* bit[0-19] : PCM3ͨ��A��DMA���ȣ����ֽ�Ϊ��λ��
                                                    ע�⣺bit[4:0]��������Ϊ5'b0�� */
        unsigned int  reserved : 12; /* bit[20-31]: ������ */
    } reg;
} SOC_ASP_P3ADLR_UNION;
#endif
#define SOC_ASP_P3ADLR_p3adlr_START    (0)
#define SOC_ASP_P3ADLR_p3adlr_END      (19)


/*****************************************************************************
 �ṹ��    : SOC_ASP_P3BSAR_UNION
 �ṹ˵��  : P3BSAR �Ĵ����ṹ���塣��ַƫ����:0x0F8����ֵ:0x00000000�����:32
 �Ĵ���˵��: PCM3Bͨ��������ʼ��ַ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  p3bsar : 32; /* bit[0-31]: PCM3ͨ��B��DMA��ʼ��ַ��
                                                 ע�⣺bit[1:0]��������Ϊ2'b0���Ƽ�bit[3:0]����Ϊ4'h0�� */
    } reg;
} SOC_ASP_P3BSAR_UNION;
#endif
#define SOC_ASP_P3BSAR_p3bsar_START  (0)
#define SOC_ASP_P3BSAR_p3bsar_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_ASP_P3BDLR_UNION
 �ṹ˵��  : P3BDLR �Ĵ����ṹ���塣��ַƫ����:0x0FC����ֵ:0x00000000�����:32
 �Ĵ���˵��: PCM3Bͨ�����˳��ȼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  p3bdlr   : 20; /* bit[0-19] : PCM3ͨ��B��DMA���ȣ����ֽ�Ϊ��λ��
                                                    ע�⣺bit[4:0]��������Ϊ5'b0�� */
        unsigned int  reserved : 12; /* bit[20-31]: ������ */
    } reg;
} SOC_ASP_P3BDLR_UNION;
#endif
#define SOC_ASP_P3BDLR_p3bdlr_START    (0)
#define SOC_ASP_P3BDLR_p3bdlr_END      (19)


/*****************************************************************************
 �ṹ��    : SOC_ASP_SPDIFSEL_UNION
 �ṹ˵��  : SPDIFSEL �Ĵ����ṹ���塣��ַƫ����:0x100����ֵ:0x00000000�����:32
 �Ĵ���˵��: �������ݲ��Žӿ�ѡ��Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  spdifsel : 1;  /* bit[0]   : �������Žӿ�ѡ��
                                                   0��HDMI�ӿڣ�
                                                   1��SPDIF�ӿڡ� */
        unsigned int  reserved : 31; /* bit[1-31]: ������ */
    } reg;
} SOC_ASP_SPDIFSEL_UNION;
#endif
#define SOC_ASP_SPDIFSEL_spdifsel_START  (0)
#define SOC_ASP_SPDIFSEL_spdifsel_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_ASP_P0ADLS_UNION
 �ṹ˵��  : P0ADLS �Ĵ����ṹ���塣��ַƫ����:0x104����ֵ:0x00000000�����:32
 �Ĵ���˵��: DMAֹͣʱPCM0Aͨ�����˳���״̬�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  p0adls   : 20; /* bit[0-19] : PCM0ͨ��A��DMAֹͣʹ��ʱ��ʣ��δ��ɰ��˵�DMA������Ϣ����λΪ�ֽڡ� */
        unsigned int  reserved : 12; /* bit[20-31]: ������ */
    } reg;
} SOC_ASP_P0ADLS_UNION;
#endif
#define SOC_ASP_P0ADLS_p0adls_START    (0)
#define SOC_ASP_P0ADLS_p0adls_END      (19)


/*****************************************************************************
 �ṹ��    : SOC_ASP_P0BDLS_UNION
 �ṹ˵��  : P0BDLS �Ĵ����ṹ���塣��ַƫ����:0x108����ֵ:0x00000000�����:32
 �Ĵ���˵��: DMAֹͣʱPCM0Bͨ�����˳���״̬�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  p0bdls   : 20; /* bit[0-19] : PCM0ͨ��B��DMAֹͣʹ��ʱ��ʣ��δ��ɰ��˵�DMA������Ϣ����λΪ�ֽڡ� */
        unsigned int  reserved : 12; /* bit[20-31]: ������ */
    } reg;
} SOC_ASP_P0BDLS_UNION;
#endif
#define SOC_ASP_P0BDLS_p0bdls_START    (0)
#define SOC_ASP_P0BDLS_p0bdls_END      (19)


/*****************************************************************************
 �ṹ��    : SOC_ASP_P1ADLS_UNION
 �ṹ˵��  : P1ADLS �Ĵ����ṹ���塣��ַƫ����:0x10C����ֵ:0x00000000�����:32
 �Ĵ���˵��: DMAֹͣʱPCM1Aͨ�����˳���״̬�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  p1adls   : 20; /* bit[0-19] : PCM1ͨ��A��DMAֹͣʹ��ʱ��ʣ��δ��ɰ��˵�DMA������Ϣ����λΪ�ֽڡ� */
        unsigned int  reserved : 12; /* bit[20-31]: ������ */
    } reg;
} SOC_ASP_P1ADLS_UNION;
#endif
#define SOC_ASP_P1ADLS_p1adls_START    (0)
#define SOC_ASP_P1ADLS_p1adls_END      (19)


/*****************************************************************************
 �ṹ��    : SOC_ASP_P1BDLS_UNION
 �ṹ˵��  : P1BDLS �Ĵ����ṹ���塣��ַƫ����:0x110����ֵ:0x00000000�����:32
 �Ĵ���˵��: DMAֹͣʱPCM1Bͨ�����˳���״̬�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  p1bdls   : 20; /* bit[0-19] : PCM1ͨ��B��DMAֹͣʹ��ʱ��ʣ��δ��ɰ��˵�DMA������Ϣ����λΪ�ֽڡ� */
        unsigned int  reserved : 12; /* bit[20-31]: ������ */
    } reg;
} SOC_ASP_P1BDLS_UNION;
#endif
#define SOC_ASP_P1BDLS_p1bdls_START    (0)
#define SOC_ASP_P1BDLS_p1bdls_END      (19)


/*****************************************************************************
 �ṹ��    : SOC_ASP_P2ADLS_UNION
 �ṹ˵��  : P2ADLS �Ĵ����ṹ���塣��ַƫ����:0x114����ֵ:0x00000000�����:32
 �Ĵ���˵��: DMAֹͣʱPCM2Aͨ�����˳���״̬�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  p2adls   : 20; /* bit[0-19] : PCM2ͨ��A��DMAֹͣʹ��ʱ��ʣ��δ��ɰ��˵�DMA������Ϣ����λΪ�ֽڡ� */
        unsigned int  reserved : 12; /* bit[20-31]: ������ */
    } reg;
} SOC_ASP_P2ADLS_UNION;
#endif
#define SOC_ASP_P2ADLS_p2adls_START    (0)
#define SOC_ASP_P2ADLS_p2adls_END      (19)


/*****************************************************************************
 �ṹ��    : SOC_ASP_P2BDLS_UNION
 �ṹ˵��  : P2BDLS �Ĵ����ṹ���塣��ַƫ����:0x118����ֵ:0x00000000�����:32
 �Ĵ���˵��: DMAֹͣʱPCM2Bͨ�����˳���״̬�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  p2bdls   : 20; /* bit[0-19] : PCM2ͨ��B��DMAֹͣʹ��ʱ��ʣ��δ��ɰ��˵�DMA������Ϣ����λΪ�ֽڡ� */
        unsigned int  reserved : 12; /* bit[20-31]: ������ */
    } reg;
} SOC_ASP_P2BDLS_UNION;
#endif
#define SOC_ASP_P2BDLS_p2bdls_START    (0)
#define SOC_ASP_P2BDLS_p2bdls_END      (19)


/*****************************************************************************
 �ṹ��    : SOC_ASP_P3ADLS_UNION
 �ṹ˵��  : P3ADLS �Ĵ����ṹ���塣��ַƫ����:0x11C����ֵ:0x00000000�����:32
 �Ĵ���˵��: DMAֹͣʱPCM3Aͨ�����˳���״̬�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  p3adls   : 20; /* bit[0-19] : PCM3ͨ��A��DMAֹͣʹ��ʱ��ʣ��δ��ɰ��˵�DMA������Ϣ����λΪ�ֽڡ� */
        unsigned int  reserved : 12; /* bit[20-31]: ������ */
    } reg;
} SOC_ASP_P3ADLS_UNION;
#endif
#define SOC_ASP_P3ADLS_p3adls_START    (0)
#define SOC_ASP_P3ADLS_p3adls_END      (19)


/*****************************************************************************
 �ṹ��    : SOC_ASP_P3BDLS_UNION
 �ṹ˵��  : P3BDLS �Ĵ����ṹ���塣��ַƫ����:0x120����ֵ:0x00000000�����:32
 �Ĵ���˵��: DMAֹͣʱPCM3Bͨ�����˳���״̬�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  p3bdls   : 20; /* bit[0-19] : PCM3ͨ��B��DMAֹͣʹ��ʱ��ʣ��δ��ɰ��˵�DMA������Ϣ����λΪ�ֽڡ� */
        unsigned int  reserved : 12; /* bit[20-31]: ������ */
    } reg;
} SOC_ASP_P3BDLS_UNION;
#endif
#define SOC_ASP_P3BDLS_p3bdls_START    (0)
#define SOC_ASP_P3BDLS_p3bdls_END      (19)


/*****************************************************************************
 �ṹ��    : SOC_ASP_PRADLS_UNION
 �ṹ˵��  : PRADLS �Ĵ����ṹ���塣��ַƫ����:0x124����ֵ:0x00000000�����:32
 �Ĵ���˵��: DMAֹͣʱPCMRXAͨ�����˳���״̬�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pradls   : 20; /* bit[0-19] : PCMRXͨ��A��DMAֹͣʹ��ʱ��ʣ��δ��ɰ��˵�DMA������Ϣ����λΪ�ֽڡ� */
        unsigned int  reserved : 12; /* bit[20-31]: ������ */
    } reg;
} SOC_ASP_PRADLS_UNION;
#endif
#define SOC_ASP_PRADLS_pradls_START    (0)
#define SOC_ASP_PRADLS_pradls_END      (19)


/*****************************************************************************
 �ṹ��    : SOC_ASP_PRBDLS_UNION
 �ṹ˵��  : PRBDLS �Ĵ����ṹ���塣��ַƫ����:0x128����ֵ:0x00000000�����:32
 �Ĵ���˵��: DMAֹͣʱPCMRXBͨ�����˳���״̬�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  prbdls   : 20; /* bit[0-19] : PCMRXͨ��B��DMAֹͣʹ��ʱ��ʣ��δ��ɰ��˵�DMA������Ϣ����λΪ�ֽڡ� */
        unsigned int  reserved : 12; /* bit[20-31]: ������ */
    } reg;
} SOC_ASP_PRBDLS_UNION;
#endif
#define SOC_ASP_PRBDLS_prbdls_START    (0)
#define SOC_ASP_PRBDLS_prbdls_END      (19)


/*****************************************************************************
 �ṹ��    : SOC_ASP_FDS_UNION
 �ṹ˵��  : FDS �Ĵ����ṹ���塣��ַƫ����:0x12C����ֵ:0x00000000�����:32
 �Ĵ���˵��: DMA�������ݻ���FIFO״̬�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pcm0_fds : 5;  /* bit[0-4]  : PCM0ͨ��DMA�������ݻ���FIFO���״̬��Ϣ�� */
        unsigned int  reserved_0: 3;  /* bit[5-7]  : ������ */
        unsigned int  pcm1_fds : 6;  /* bit[8-13] : PCM1ͨ��DMA�������ݻ���FIFO���״̬��Ϣ�� */
        unsigned int  reserved_1: 2;  /* bit[14-15]: ������ */
        unsigned int  pcm2_fds : 6;  /* bit[16-21]: PCM2ͨ��DMA�������ݻ���FIFO���״̬��Ϣ�� */
        unsigned int  reserved_2: 2;  /* bit[22-23]: ������ */
        unsigned int  pcm3_fds : 6;  /* bit[24-29]: PCM3ͨ��DMA�������ݻ���FIFO���״̬��Ϣ�� */
        unsigned int  reserved_3: 2;  /* bit[30-31]: ������ */
    } reg;
} SOC_ASP_FDS_UNION;
#endif
#define SOC_ASP_FDS_pcm0_fds_START  (0)
#define SOC_ASP_FDS_pcm0_fds_END    (4)
#define SOC_ASP_FDS_pcm1_fds_START  (8)
#define SOC_ASP_FDS_pcm1_fds_END    (13)
#define SOC_ASP_FDS_pcm2_fds_START  (16)
#define SOC_ASP_FDS_pcm2_fds_END    (21)
#define SOC_ASP_FDS_pcm3_fds_START  (24)
#define SOC_ASP_FDS_pcm3_fds_END    (29)


/*****************************************************************************
 �ṹ��    : SOC_ASP_P0ADL_UNION
 �ṹ˵��  : P0ADL �Ĵ����ṹ���塣��ַƫ����:0x130����ֵ:0x00000000�����:32
 �Ĵ���˵��: PCM0Aͨ��DMA����ʣ�೤��״̬�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  p0adl    : 20; /* bit[0-19] : PCM0ͨ��A��DMAʣ��δ���˵�DMA������Ϣ����λΪ�ֽڡ� */
        unsigned int  reserved : 12; /* bit[20-31]: ������ */
    } reg;
} SOC_ASP_P0ADL_UNION;
#endif
#define SOC_ASP_P0ADL_p0adl_START     (0)
#define SOC_ASP_P0ADL_p0adl_END       (19)


/*****************************************************************************
 �ṹ��    : SOC_ASP_P0BDL_UNION
 �ṹ˵��  : P0BDL �Ĵ����ṹ���塣��ַƫ����:0x134����ֵ:0x00000000�����:32
 �Ĵ���˵��: PCM0Bͨ��DMA����ʣ�೤��״̬�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  p0bdl    : 20; /* bit[0-19] : PCM0ͨ��B��DMAʣ��δ���˵�DMA������Ϣ����λΪ�ֽڡ� */
        unsigned int  reserved : 12; /* bit[20-31]: ������ */
    } reg;
} SOC_ASP_P0BDL_UNION;
#endif
#define SOC_ASP_P0BDL_p0bdl_START     (0)
#define SOC_ASP_P0BDL_p0bdl_END       (19)


/*****************************************************************************
 �ṹ��    : SOC_ASP_P1ADL_UNION
 �ṹ˵��  : P1ADL �Ĵ����ṹ���塣��ַƫ����:0x138����ֵ:0x00000000�����:32
 �Ĵ���˵��: PCM1Aͨ��DMA����ʣ�೤��״̬�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  p1adl    : 20; /* bit[0-19] : PCM1ͨ��A��DMAʣ��δ���˵�DMA������Ϣ����λΪ�ֽڡ� */
        unsigned int  reserved : 12; /* bit[20-31]: ������ */
    } reg;
} SOC_ASP_P1ADL_UNION;
#endif
#define SOC_ASP_P1ADL_p1adl_START     (0)
#define SOC_ASP_P1ADL_p1adl_END       (19)


/*****************************************************************************
 �ṹ��    : SOC_ASP_P1BDL_UNION
 �ṹ˵��  : P1BDL �Ĵ����ṹ���塣��ַƫ����:0x13C����ֵ:0x00000000�����:32
 �Ĵ���˵��: PCM1Bͨ��DMA����ʣ�೤��״̬�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  p1bdl    : 20; /* bit[0-19] : PCM1ͨ��B��DMAʣ��δ���˵�DMA������Ϣ����λΪ�ֽڡ� */
        unsigned int  reserved : 12; /* bit[20-31]: ������ */
    } reg;
} SOC_ASP_P1BDL_UNION;
#endif
#define SOC_ASP_P1BDL_p1bdl_START     (0)
#define SOC_ASP_P1BDL_p1bdl_END       (19)


/*****************************************************************************
 �ṹ��    : SOC_ASP_P2ADL_UNION
 �ṹ˵��  : P2ADL �Ĵ����ṹ���塣��ַƫ����:0x140����ֵ:0x00000000�����:32
 �Ĵ���˵��: PCM2Aͨ��DMA����ʣ�೤��״̬�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  p2adl    : 20; /* bit[0-19] : PCM2ͨ��A��DMAʣ��δ���˵�DMA������Ϣ����λΪ�ֽڡ� */
        unsigned int  reserved : 12; /* bit[20-31]: ������ */
    } reg;
} SOC_ASP_P2ADL_UNION;
#endif
#define SOC_ASP_P2ADL_p2adl_START     (0)
#define SOC_ASP_P2ADL_p2adl_END       (19)


/*****************************************************************************
 �ṹ��    : SOC_ASP_P2BDL_UNION
 �ṹ˵��  : P2BDL �Ĵ����ṹ���塣��ַƫ����:0x144����ֵ:0x00000000�����:32
 �Ĵ���˵��: PCM2Bͨ��DMA����ʣ�೤��״̬�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  p2bdl    : 20; /* bit[0-19] : PCM2ͨ��B��DMAʣ��δ���˵�DMA������Ϣ����λΪ�ֽڡ� */
        unsigned int  reserved : 12; /* bit[20-31]: ������ */
    } reg;
} SOC_ASP_P2BDL_UNION;
#endif
#define SOC_ASP_P2BDL_p2bdl_START     (0)
#define SOC_ASP_P2BDL_p2bdl_END       (19)


/*****************************************************************************
 �ṹ��    : SOC_ASP_P3ADL_UNION
 �ṹ˵��  : P3ADL �Ĵ����ṹ���塣��ַƫ����:0x148����ֵ:0x00000000�����:32
 �Ĵ���˵��: PCM3Aͨ��DMA����ʣ�೤��״̬�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  p3adl    : 20; /* bit[0-19] : PCM3ͨ��A��DMAʣ��δ���˵�DMA������Ϣ����λΪ�ֽڡ� */
        unsigned int  reserved : 12; /* bit[20-31]: ������ */
    } reg;
} SOC_ASP_P3ADL_UNION;
#endif
#define SOC_ASP_P3ADL_p3adl_START     (0)
#define SOC_ASP_P3ADL_p3adl_END       (19)


/*****************************************************************************
 �ṹ��    : SOC_ASP_P3BDL_UNION
 �ṹ˵��  : P3BDL �Ĵ����ṹ���塣��ַƫ����:0x14C����ֵ:0x00000000�����:32
 �Ĵ���˵��: PCM3Bͨ��DMA����ʣ�೤��״̬�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  p3bdl    : 20; /* bit[0-19] : PCM3ͨ��B��DMAʣ��δ���˵�DMA������Ϣ����λΪ�ֽڡ� */
        unsigned int  reserved : 12; /* bit[20-31]: ������ */
    } reg;
} SOC_ASP_P3BDL_UNION;
#endif
#define SOC_ASP_P3BDL_p3bdl_START     (0)
#define SOC_ASP_P3BDL_p3bdl_END       (19)


/*****************************************************************************
 �ṹ��    : SOC_ASP_PRADL_UNION
 �ṹ˵��  : PRADL �Ĵ����ṹ���塣��ַƫ����:0x150����ֵ:0x00000000�����:32
 �Ĵ���˵��: PCMRXAͨ��DMA����ʣ�೤��״̬�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pradl    : 20; /* bit[0-19] : PCMRXͨ��A��DMAʣ��δ���˵�DMA������Ϣ����λΪ�ֽڡ� */
        unsigned int  reserved : 12; /* bit[20-31]: ������ */
    } reg;
} SOC_ASP_PRADL_UNION;
#endif
#define SOC_ASP_PRADL_pradl_START     (0)
#define SOC_ASP_PRADL_pradl_END       (19)


/*****************************************************************************
 �ṹ��    : SOC_ASP_PRBDL_UNION
 �ṹ˵��  : PRBDL �Ĵ����ṹ���塣��ַƫ����:0x154����ֵ:0x00000000�����:32
 �Ĵ���˵��: PCMRXBͨ��DMA����ʣ�೤��״̬�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  prbdl    : 20; /* bit[0-19] : PCMRXͨ��B��DMAʣ��δ���˵�DMA������Ϣ����λΪ�ֽڡ� */
        unsigned int  reserved : 12; /* bit[20-31]: ������ */
    } reg;
} SOC_ASP_PRBDL_UNION;
#endif
#define SOC_ASP_PRBDL_prbdl_START     (0)
#define SOC_ASP_PRBDL_prbdl_END       (19)






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

#endif /* end of soc_asp_interface.h */
