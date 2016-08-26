

/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/

#ifndef __SOC_USBOTG_INTERFACE_H__
#define __SOC_USBOTG_INTERFACE_H__

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
/* �Ĵ���˵����ȫ�ֿ��ƺ�״̬�Ĵ�����
   λ����UNION�ṹ:  SOC_USBOTG_GOTGCTL_UNION */
#define SOC_USBOTG_GOTGCTL_ADDR(base)                 ((base) + (0x0000))

/* �Ĵ���˵����ȫ��OTG�ж�״̬�Ĵ�����
   λ����UNION�ṹ:  SOC_USBOTG_GOTGINT_UNION */
#define SOC_USBOTG_GOTGINT_ADDR(base)                 ((base) + (0x0004))

/* �Ĵ���˵����ȫ��AHB���üĴ�����
   λ����UNION�ṹ:  SOC_USBOTG_GAHBCFG_UNION */
#define SOC_USBOTG_GAHBCFG_ADDR(base)                 ((base) + (0x0008))

/* �Ĵ���˵����ȫ��USB���üĴ�����
   λ����UNION�ṹ:  SOC_USBOTG_GUSBCFG_UNION */
#define SOC_USBOTG_GUSBCFG_ADDR(base)                 ((base) + (0x000C))

/* �Ĵ���˵����ȫ�ָ�λ���ƼĴ�����
   λ����UNION�ṹ:  SOC_USBOTG_GRSTCTL_UNION */
#define SOC_USBOTG_GRSTCTL_ADDR(base)                 ((base) + (0x0010))

/* �Ĵ���˵����ȫ���ж�״̬�Ĵ�����
   λ����UNION�ṹ:  SOC_USBOTG_GINTSTS_UNION */
#define SOC_USBOTG_GINTSTS_ADDR(base)                 ((base) + (0x0014))

/* �Ĵ���˵����ȫ���ж����μĴ�����
   λ����UNION�ṹ:  SOC_USBOTG_GINTMSK_UNION */
#define SOC_USBOTG_GINTMSK_ADDR(base)                 ((base) + (0x0018))

/* �Ĵ���˵����ȫ�ֽ���FIFO״̬�����Ĵ�����
   λ����UNION�ṹ:  SOC_USBOTG_GRXSTSR_UNION */
#define SOC_USBOTG_GRXSTSR_ADDR(base)                 ((base) + (0x001C))

/* �Ĵ���˵����ȫ�ֽ���FIFO״̬�����Ĵ�����
   λ����UNION�ṹ:  SOC_USBOTG_GRXSTSP_UNION */
#define SOC_USBOTG_GRXSTSP_ADDR(base)                 ((base) + (0x0020))

/* �Ĵ���˵����ȫ�ֽ���FIFO��С�Ĵ�����
   λ����UNION�ṹ:  SOC_USBOTG_GRXFSIZ_UNION */
#define SOC_USBOTG_GRXFSIZ_ADDR(base)                 ((base) + (0x0024))

/* �Ĵ���˵����ȫ�ַ����ڷ���FIFO��С�Ĵ�����
   λ����UNION�ṹ:  SOC_USBOTG_GNPTXFSIZ_UNION */
#define SOC_USBOTG_GNPTXFSIZ_ADDR(base)               ((base) + (0x0028))

/* �Ĵ���˵����ȫ�ַ����ڷ���FIFO״̬�Ĵ�����
   λ����UNION�ṹ:  SOC_USBOTG_GNPTXSTS_UNION */
#define SOC_USBOTG_GNPTXSTS_ADDR(base)                ((base) + (0x002C))

/* �Ĵ���˵����USB IP�汾�Ĵ�����
   λ����UNION�ṹ:  SOC_USBOTG_GSNPSID_UNION */
#define SOC_USBOTG_GSNPSID_ADDR(base)                 ((base) + (0x0040))

/* �Ĵ���˵����Ӳ�����üĴ���1��
   λ����UNION�ṹ:  SOC_USBOTG_GHWCFG1_UNION */
#define SOC_USBOTG_GHWCFG1_ADDR(base)                 ((base) + (0x0044))

/* �Ĵ���˵����Ӳ�����üĴ���2��
   λ����UNION�ṹ:  SOC_USBOTG_GHWCFG2_UNION */
#define SOC_USBOTG_GHWCFG2_ADDR(base)                 ((base) + (0x0048))

/* �Ĵ���˵����Ӳ�����üĴ���3��
   λ����UNION�ṹ:  SOC_USBOTG_GHWCFG3_UNION */
#define SOC_USBOTG_GHWCFG3_ADDR(base)                 ((base) + (0x004C))

/* �Ĵ���˵����Ӳ�����üĴ���4��
   λ����UNION�ṹ:  SOC_USBOTG_GHWCFG4_UNION */
#define SOC_USBOTG_GHWCFG4_ADDR(base)                 ((base) + (0x0050))

/* �Ĵ���˵����LPM���üĴ�����
   λ����UNION�ṹ:  SOC_USBOTG_GLPMCFG_UNION */
#define SOC_USBOTG_GLPMCFG_ADDR(base)                 ((base) + (0x0054))

/* �Ĵ���˵��������ģʽ������ƼĴ�����
   λ����UNION�ṹ:  SOC_USBOTG_GPWRDN_UNION */
#define SOC_USBOTG_GPWRDN_ADDR(base)                  ((base) + (0x0058))

/* �Ĵ���˵������̬FIFO���üĴ�����
   λ����UNION�ṹ:  SOC_USBOTG_GDFIFOCFG_UNION */
#define SOC_USBOTG_GDFIFOCFG_ADDR(base)               ((base) + (0x005C))

/* �Ĵ���˵����ADP���ƼĴ�����
   λ����UNION�ṹ:  SOC_USBOTG_GADPCTL_UNION */
#define SOC_USBOTG_GADPCTL_ADDR(base)                 ((base) + (0x0060))

/* �Ĵ���˵����Host���ڷ���FIFO���üĴ�����
   λ����UNION�ṹ:  SOC_USBOTG_HPTXFSIZ_UNION */
#define SOC_USBOTG_HPTXFSIZ_ADDR(base)                ((base) + (0x0100))

/* �Ĵ���˵����Device IN�˵�1����FIFO���üĴ�����
   λ����UNION�ṹ:  SOC_USBOTG_DIEPTXF1_UNION */
#define SOC_USBOTG_DIEPTXF1_ADDR(base)                ((base) + (0x0104))

/* �Ĵ���˵����Device IN�˵�2����FIFO���üĴ�����
   λ����UNION�ṹ:  SOC_USBOTG_DIEPTXF2_UNION */
#define SOC_USBOTG_DIEPTXF2_ADDR(base)                ((base) + (0x0108))

/* �Ĵ���˵����Device IN�˵�3����FIFO���üĴ�����
   λ����UNION�ṹ:  SOC_USBOTG_DIEPTXF3_UNION */
#define SOC_USBOTG_DIEPTXF3_ADDR(base)                ((base) + (0x010C))

/* �Ĵ���˵����Device IN�˵�4����FIFO���üĴ�����
   λ����UNION�ṹ:  SOC_USBOTG_DIEPTXF4_UNION */
#define SOC_USBOTG_DIEPTXF4_ADDR(base)                ((base) + (0x0110))

/* �Ĵ���˵����Device IN�˵�5����FIFO���üĴ�����
   λ����UNION�ṹ:  SOC_USBOTG_DIEPTXF5_UNION */
#define SOC_USBOTG_DIEPTXF5_ADDR(base)                ((base) + (0x0114))

/* �Ĵ���˵����Device IN�˵�6����FIFO���üĴ�����
   λ����UNION�ṹ:  SOC_USBOTG_DIEPTXF6_UNION */
#define SOC_USBOTG_DIEPTXF6_ADDR(base)                ((base) + (0x0118))

/* �Ĵ���˵����Device IN�˵�7����FIFO���üĴ�����
   λ����UNION�ṹ:  SOC_USBOTG_DIEPTXF7_UNION */
#define SOC_USBOTG_DIEPTXF7_ADDR(base)                ((base) + (0x011C))

/* �Ĵ���˵����Device IN�˵�8����FIFO���üĴ�����
   λ����UNION�ṹ:  SOC_USBOTG_DIEPTXF8_UNION */
#define SOC_USBOTG_DIEPTXF8_ADDR(base)                ((base) + (0x0120))

/* �Ĵ���˵����Device IN�˵�9����FIFO���üĴ�����
   λ����UNION�ṹ:  SOC_USBOTG_DIEPTXF9_UNION */
#define SOC_USBOTG_DIEPTXF9_ADDR(base)                ((base) + (0x0124))

/* �Ĵ���˵����Device IN�˵�10����FIFO���üĴ�����
   λ����UNION�ṹ:  SOC_USBOTG_DIEPTXF10_UNION */
#define SOC_USBOTG_DIEPTXF10_ADDR(base)               ((base) + (0x0128))

/* �Ĵ���˵����Device IN�˵�11����FIFO���üĴ�����
   λ����UNION�ṹ:  SOC_USBOTG_DIEPTXF11_UNION */
#define SOC_USBOTG_DIEPTXF11_ADDR(base)               ((base) + (0x012C))

/* �Ĵ���˵����Device IN�˵�12����FIFO���üĴ�����
   λ����UNION�ṹ:  SOC_USBOTG_DIEPTXF12_UNION */
#define SOC_USBOTG_DIEPTXF12_ADDR(base)               ((base) + (0x0130))

/* �Ĵ���˵����Device IN�˵�13����FIFO���üĴ�����
   λ����UNION�ṹ:  SOC_USBOTG_DIEPTXF13_UNION */
#define SOC_USBOTG_DIEPTXF13_ADDR(base)               ((base) + (0x0134))

/* �Ĵ���˵����Device IN�˵�14����FIFO���üĴ�����
   λ����UNION�ṹ:  SOC_USBOTG_DIEPTXF14_UNION */
#define SOC_USBOTG_DIEPTXF14_ADDR(base)               ((base) + (0x0138))

/* �Ĵ���˵����Device IN�˵�15����FIFO���üĴ�����
   λ����UNION�ṹ:  SOC_USBOTG_DIEPTXF15_UNION */
#define SOC_USBOTG_DIEPTXF15_ADDR(base)               ((base) + (0x013C))

/* �Ĵ���˵����Host���üĴ�����
   λ����UNION�ṹ:  SOC_USBOTG_HCFG_UNION */
#define SOC_USBOTG_HCFG_ADDR(base)                    ((base) + (0x0400))

/* �Ĵ���˵����Host֡����Ĵ�����
   λ����UNION�ṹ:  SOC_USBOTG_HFIR_UNION */
#define SOC_USBOTG_HFIR_ADDR(base)                    ((base) + (0x0404))

/* �Ĵ���˵����Host֡��żĴ�����
   λ����UNION�ṹ:  SOC_USBOTG_HFNUM_UNION */
#define SOC_USBOTG_HFNUM_ADDR(base)                   ((base) + (0x0408))

/* �Ĵ���˵����Host���ڷ���FIFO�Ͷ���״̬�Ĵ�����
   λ����UNION�ṹ:  SOC_USBOTG_HPTXSTS_UNION */
#define SOC_USBOTG_HPTXSTS_ADDR(base)                 ((base) + (0x0410))

/* �Ĵ���˵����Host����ͨ���ж�״̬�Ĵ�����
   λ����UNION�ṹ:  SOC_USBOTG_HAINT_UNION */
#define SOC_USBOTG_HAINT_ADDR(base)                   ((base) + (0x0414))

/* �Ĵ���˵����Host����ͨ���ж����μĴ�����
   λ����UNION�ṹ:  SOC_USBOTG_HAINTMSK_UNION */
#define SOC_USBOTG_HAINTMSK_ADDR(base)                ((base) + (0x0418))

/* �Ĵ���˵����֡�б����ַ�Ĵ�����
   λ����UNION�ṹ:  SOC_USBOTG_HFLBADDR_UNION */
#define SOC_USBOTG_HFLBADDR_ADDR(base)                ((base) + (0x041C))

/* �Ĵ���˵����Host�˿ڿ��ƺ�״̬�Ĵ�����
   λ����UNION�ṹ:  SOC_USBOTG_HPRT_UNION */
#define SOC_USBOTG_HPRT_ADDR(base)                    ((base) + (0x0440))

/* �Ĵ���˵����ͨ��p���ԼĴ�����
   λ����UNION�ṹ:  SOC_USBOTG_HCCHARP_UNION */
#define SOC_USBOTG_HCCHARP_ADDR(base)                 ((base) + (0x0500+(0x20*i)))

/* �Ĵ���˵����ͨ��p Split���ƼĴ�����
   λ����UNION�ṹ:  SOC_USBOTG_HCSPLTP_UNION */
#define SOC_USBOTG_HCSPLTP_ADDR(base)                 ((base) + (0x0504+(0x20*i)))

/* �Ĵ���˵����ͨ��p�ж�״̬�Ĵ�����
   λ����UNION�ṹ:  SOC_USBOTG_HCINTP_UNION */
#define SOC_USBOTG_HCINTP_ADDR(base)                  ((base) + (0x0508+(0x20*i)))

/* �Ĵ���˵����ͨ��p�ж����μĴ�����
   λ����UNION�ṹ:  SOC_USBOTG_HCINTMSKP_UNION */
#define SOC_USBOTG_HCINTMSKP_ADDR(base)               ((base) + (0x050C+(0x20*i)))

/* �Ĵ���˵����ͨ��p���䳤�ȼĴ�������scatter / gather DMAģʽ��
   λ����UNION�ṹ:  SOC_USBOTG_HCTSIZP_UNION */
#define SOC_USBOTG_HCTSIZP_ADDR(base)                 ((base) + (0x0510+(0x20*i)))

/* �Ĵ���˵����ͨ��p���䳤�ȼĴ���������scatter / gather DMAģʽ��
   λ����UNION�ṹ:  SOC_USBOTG_HCTSIZP_NON_SG_UNION */
#define SOC_USBOTG_HCTSIZP_NON_SG_ADDR(base)          ((base) + (0x0510+(0x20*i)))

/* �Ĵ���˵����ͨ��p DMA��ַ�Ĵ�����
   λ����UNION�ṹ:  SOC_USBOTG_HCDMAP_UNION */
#define SOC_USBOTG_HCDMAP_ADDR(base)                  ((base) + (0x0514+(0x20*i)))

/* �Ĵ���˵����ͨ��p DMA buffer��ַ�Ĵ�����
   λ����UNION�ṹ:  SOC_USBOTG_HCDMABP_UNION */
#define SOC_USBOTG_HCDMABP_ADDR(base)                 ((base) + (0x051C+(0x20*i)))

/* �Ĵ���˵����device���üĴ�����
   λ����UNION�ṹ:  SOC_USBOTG_DCFG_UNION */
#define SOC_USBOTG_DCFG_ADDR(base)                    ((base) + (0x0800))

/* �Ĵ���˵����device���ƼĴ�����
   λ����UNION�ṹ:  SOC_USBOTG_DCTL_UNION */
#define SOC_USBOTG_DCTL_ADDR(base)                    ((base) + (0x0804))

/* �Ĵ���˵����device״̬�Ĵ�����
   λ����UNION�ṹ:  SOC_USBOTG_DSTS_UNION */
#define SOC_USBOTG_DSTS_ADDR(base)                    ((base) + (0x0808))

/* �Ĵ���˵����IN�˵���ͨ�ж����μĴ�����
   λ����UNION�ṹ:  SOC_USBOTG_DIEPMSK_UNION */
#define SOC_USBOTG_DIEPMSK_ADDR(base)                 ((base) + (0x0810))

/* �Ĵ���˵����OUT�˵���ͨ�ж����μĴ�����
   λ����UNION�ṹ:  SOC_USBOTG_DOEPMSK_UNION */
#define SOC_USBOTG_DOEPMSK_ADDR(base)                 ((base) + (0x0814))

/* �Ĵ���˵�������ж˵��ж�״̬�Ĵ�����
   λ����UNION�ṹ:  SOC_USBOTG_DAINT_UNION */
#define SOC_USBOTG_DAINT_ADDR(base)                   ((base) + (0x0818))

/* �Ĵ���˵�������ж˵��ж����μĴ�����
   λ����UNION�ṹ:  SOC_USBOTG_DAINTMSK_UNION */
#define SOC_USBOTG_DAINTMSK_ADDR(base)                ((base) + (0x081C))

/* �Ĵ���˵����Vbus�ŵ�ʱ�����üĴ�����
   λ����UNION�ṹ:  SOC_USBOTG_DVBUSDIS_UNION */
#define SOC_USBOTG_DVBUSDIS_ADDR(base)                ((base) + (0x0828))

/* �Ĵ���˵����Vbus�������üĴ�����
   λ����UNION�ṹ:  SOC_USBOTG_DVBUSPULSE_UNION */
#define SOC_USBOTG_DVBUSPULSE_ADDR(base)              ((base) + (0x082C))

/* �Ĵ���˵����deviceˮ�߿��ƼĴ�����
   λ����UNION�ṹ:  SOC_USBOTG_DTHRCTL_UNION */
#define SOC_USBOTG_DTHRCTL_ADDR(base)                 ((base) + (0x0830))

/* �Ĵ���˵����IN�˵�FIFO���ж����μĴ�����
   λ����UNION�ṹ:  SOC_USBOTG_DIEPEMPMSK_UNION */
#define SOC_USBOTG_DIEPEMPMSK_ADDR(base)              ((base) + (0x0834))

/* �Ĵ���˵����IN�˵�0���ƼĴ�����
   λ����UNION�ṹ:  SOC_USBOTG_DIEPCTL0_UNION */
#define SOC_USBOTG_DIEPCTL0_ADDR(base)                ((base) + (0x0900))

/* �Ĵ���˵����IN�˵�n���ƼĴ�����
   λ����UNION�ṹ:  SOC_USBOTG_DIEPCTLN_UNION */
#define SOC_USBOTG_DIEPCTLN_ADDR(base, n)             ((base) + (0x0900+(0x20*(n))))

/* �Ĵ���˵����IN�˵�m�ж�״̬�Ĵ�����
   λ����UNION�ṹ:  SOC_USBOTG_DIEPINTM_UNION */
#define SOC_USBOTG_DIEPINTM_ADDR(base, m)             ((base) + (0x0908+(0x20*(m))))

/* �Ĵ���˵����IN�˵�0�����С�Ĵ�����
   λ����UNION�ṹ:  SOC_USBOTG_DIEPTSIZ0_UNION */
#define SOC_USBOTG_DIEPTSIZ0_ADDR(base)               ((base) + (0x0910))

/* �Ĵ���˵����IN�˵�n�����С�Ĵ�����
   λ����UNION�ṹ:  SOC_USBOTG_DIEPTSIZN_UNION */
#define SOC_USBOTG_DIEPTSIZN_ADDR(base, n)            ((base) + (0x0910+(0x20*(n))))

/* �Ĵ���˵����IN�˵�m DMA��ַ�Ĵ�����
   λ����UNION�ṹ:  SOC_USBOTG_DIEPDMAM_UNION */
#define SOC_USBOTG_DIEPDMAM_ADDR(base, m)             ((base) + (0x0914+(0x20*(m))))

/* �Ĵ���˵����IN�˵�m����FIFO״̬�Ĵ�����
   λ����UNION�ṹ:  SOC_USBOTG_DTXFSTSM_UNION */
#define SOC_USBOTG_DTXFSTSM_ADDR(base)                ((base) + (0x0918))

/* �Ĵ���˵����IN�˵�m DMA buffer��ַ�Ĵ�����
   λ����UNION�ṹ:  SOC_USBOTG_DIEPDMABN_UNION */
#define SOC_USBOTG_DIEPDMABN_ADDR(base, m)            ((base) + (0x091C+(0x20*(m))))

/* �Ĵ���˵����OUT�˵�0���ƼĴ�����
   λ����UNION�ṹ:  SOC_USBOTG_DOEPCTL0_UNION */
#define SOC_USBOTG_DOEPCTL0_ADDR(base)                ((base) + (0x0B00))

/* �Ĵ���˵����OUT�˵�n���ƼĴ�����
   λ����UNION�ṹ:  SOC_USBOTG_DOEPCTLN_UNION */
#define SOC_USBOTG_DOEPCTLN_ADDR(base, n)             ((base) + (0x0B00+(0x20*(n))))

/* �Ĵ���˵����OUT�˵�m�ж�״̬�Ĵ�����
   λ����UNION�ṹ:  SOC_USBOTG_DOEPINTM_UNION */
#define SOC_USBOTG_DOEPINTM_ADDR(base, m)             ((base) + (0x0B08+(0x20*(m))))

/* �Ĵ���˵����OUT�˵�0�����С�Ĵ�����
   λ����UNION�ṹ:  SOC_USBOTG_DOEPTSIZ0_UNION */
#define SOC_USBOTG_DOEPTSIZ0_ADDR(base)               ((base) + (0x0B10))

/* �Ĵ���˵����OUT�˵�n�����С�Ĵ�����
   λ����UNION�ṹ:  SOC_USBOTG_DOEPTSIZN_UNION */
#define SOC_USBOTG_DOEPTSIZN_ADDR(base, n)            ((base) + (0x0B10+(0x20*(n))))

/* �Ĵ���˵����OUT�˵�m DMA��ַ�Ĵ�����
   λ����UNION�ṹ:  SOC_USBOTG_DOEPDMAM_UNION */
#define SOC_USBOTG_DOEPDMAM_ADDR(base, m)             ((base) + (0x0B14+(0x20*(m))))

/* �Ĵ���˵����OUT�˵�m DMA buffer��ַ�Ĵ�����
   λ����UNION�ṹ:  SOC_USBOTG_DOEPDMABM_UNION */
#define SOC_USBOTG_DOEPDMABM_ADDR(base, m)            ((base) + (0x0B1C+(0x20*(m))))

/* �Ĵ���˵�������ĺ�ʱ���ſؿ��ƼĴ�����
   λ����UNION�ṹ:  SOC_USBOTG_PCGCCTL_UNION */
#define SOC_USBOTG_PCGCCTL_ADDR(base)                 ((base) + (0x0E00))





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
 �ṹ��    : SOC_USBOTG_GOTGCTL_UNION
 �ṹ˵��  : GOTGCTL �Ĵ����ṹ���塣��ַƫ����:0x0000����ֵ:0x00010000�����:32
 �Ĵ���˵��: ȫ�ֿ��ƺ�״̬�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sesreqscs    : 1;  /* bit[0]    : �Ự�����Ƿ�ɹ���
                                                        0��ʧ�ܣ�
                                                        1���ɹ��� */
        unsigned int  sesreq       : 1;  /* bit[1]    : �Ự����
                                                        0���޻Ự����
                                                        1���Ự���� */
        unsigned int  vbvalidoven  : 1;  /* bit[2]    : ����PHY������vbusvalid�ź�ʹ�ܡ�
                                                        0����ʹ�ܣ�
                                                        1��ʹ�ܡ� */
        unsigned int  vbvalidovval : 1;  /* bit[3]    : ��VbvalidOvEn��1ʱ����bit��������vbusvalidֵ������PHY������vbusvalid�źš�
                                                        0��vbusvalid��Ч��
                                                        1��vbusvalid��Ч�� */
        unsigned int  avalidoven   : 1;  /* bit[4]    : ����PHY������avalid�ź�ʹ�ܡ�
                                                        0����ʹ�ܣ�
                                                        1��ʹ�ܡ� */
        unsigned int  avalidovval  : 1;  /* bit[5]    : ��AvalidOvEn��1ʱ����bit��������avalidֵ������PHY������avalid�źš�
                                                        0��avalid��Ч��
                                                        1��avalid��Ч�� */
        unsigned int  bvalidoven   : 1;  /* bit[6]    : ����PHY������bvalid�ź�ʹ�ܡ�
                                                        0����ʹ�ܣ�
                                                        1��ʹ�ܡ� */
        unsigned int  bvalidovval  : 1;  /* bit[7]    : ��BvalidOvEn��1ʱ����bit��������bvalidֵ������PHY������bvalid�źš�
                                                        0��bvalid��Ч��
                                                        1��bvalid��Ч�� */
        unsigned int  hstnegscs    : 1;  /* bit[8]    : ����Э�̳ɹ�����deviceģʽ��Ч��
                                                        0��ʧ�ܣ�
                                                        1���ɹ��� */
        unsigned int  hnpreq       : 1;  /* bit[9]    : HNP���󣬶�deviceģʽ��Ч��������ø�bit����host����HNP�������ڽ��յ�GOTGINT.HstNegSucStsChng�ж�֮����������bit��
                                                        0��������
                                                        1�������� */
        unsigned int  hstsethnpen  : 1;  /* bit[10]   : HOST HNPʹ�ܣ���Hostģʽ��Ч��Host�ڷ���SetFeature.SetHNPEnabled����֮��������ø�bitΪ1��
                                                        0����ʹ�ܣ�
                                                        1��ʹ�ܡ� */
        unsigned int  devhnpen     : 1;  /* bit[11]   : device HNPʹ�ܣ���deviceģʽ��Ч�����յ�SetFeature.SetHNPEnabled����֮��������ø�bitΪ1��
                                                        0����ʹ�ܣ�
                                                        1��ʹ�ܡ� */
        unsigned int  reserved_0   : 4;  /* bit[12-15]: ������ */
        unsigned int  conidsts     : 1;  /* bit[16]   : ����ID״̬��
                                                        0��A�豸ģʽ��
                                                        1��B�豸ģʽ�� */
        unsigned int  dbnc_time    : 1;  /* bit[17]   : debounceʱ��ѡ��Debounceʱ��ָЭ���Ϲ涨�ļ�⵽device����״̬֮�󵽷��͸�λ�ź�֮����ӳ١�
                                                        0��100ms+2.5us�������������ӣ�
                                                        1��2.5us�����������ӡ� */
        unsigned int  asessvld     : 1;  /* bit[18]   : Hostģʽ�շ���״̬��
                                                        0��a_session��Ч��
                                                        1��a_session��Ч�� */
        unsigned int  bsesvld      : 1;  /* bit[19]   : �豸����״ָ̬ʾ��
                                                        0��δ���ӣ�
                                                        1�����ӡ� */
        unsigned int  otg_version  : 1;  /* bit[20]   : OTGЭ��汾��
                                                        0��1.3��֧�������ߺ�VBUS����ʵ��SRPЭ�飻
                                                        1��2.0��ֻ֧������������ʵ��SRPЭ�顣 */
        unsigned int  reserved_1   : 1;  /* bit[21]   : ������ */
        unsigned int  multvaldidbc : 5;  /* bit[22-26]: ACA ID�ܽ�״̬��
                                                        00001��rid_c��
                                                        00010��rid_b��
                                                        00100��rid_a��
                                                        01000��rid_gnd��
                                                        10000��rid_float��
                                                        others��reserved�� */
        unsigned int  chirpen      : 1;  /* bit[27]   : chirponʹ�ܡ�
                                                        ��bit����Ϊ1���������ڷ���chirp K֮ǰ��chirp_on�ź�Ϊ�ߵ�ƽ��
                                                        0����ʹ�ܣ�
                                                        1��ʹ�ܡ� */
        unsigned int  reserved_2   : 4;  /* bit[28-31]: ���� */
    } reg;
} SOC_USBOTG_GOTGCTL_UNION;
#endif
#define SOC_USBOTG_GOTGCTL_sesreqscs_START     (0)
#define SOC_USBOTG_GOTGCTL_sesreqscs_END       (0)
#define SOC_USBOTG_GOTGCTL_sesreq_START        (1)
#define SOC_USBOTG_GOTGCTL_sesreq_END          (1)
#define SOC_USBOTG_GOTGCTL_vbvalidoven_START   (2)
#define SOC_USBOTG_GOTGCTL_vbvalidoven_END     (2)
#define SOC_USBOTG_GOTGCTL_vbvalidovval_START  (3)
#define SOC_USBOTG_GOTGCTL_vbvalidovval_END    (3)
#define SOC_USBOTG_GOTGCTL_avalidoven_START    (4)
#define SOC_USBOTG_GOTGCTL_avalidoven_END      (4)
#define SOC_USBOTG_GOTGCTL_avalidovval_START   (5)
#define SOC_USBOTG_GOTGCTL_avalidovval_END     (5)
#define SOC_USBOTG_GOTGCTL_bvalidoven_START    (6)
#define SOC_USBOTG_GOTGCTL_bvalidoven_END      (6)
#define SOC_USBOTG_GOTGCTL_bvalidovval_START   (7)
#define SOC_USBOTG_GOTGCTL_bvalidovval_END     (7)
#define SOC_USBOTG_GOTGCTL_hstnegscs_START     (8)
#define SOC_USBOTG_GOTGCTL_hstnegscs_END       (8)
#define SOC_USBOTG_GOTGCTL_hnpreq_START        (9)
#define SOC_USBOTG_GOTGCTL_hnpreq_END          (9)
#define SOC_USBOTG_GOTGCTL_hstsethnpen_START   (10)
#define SOC_USBOTG_GOTGCTL_hstsethnpen_END     (10)
#define SOC_USBOTG_GOTGCTL_devhnpen_START      (11)
#define SOC_USBOTG_GOTGCTL_devhnpen_END        (11)
#define SOC_USBOTG_GOTGCTL_conidsts_START      (16)
#define SOC_USBOTG_GOTGCTL_conidsts_END        (16)
#define SOC_USBOTG_GOTGCTL_dbnc_time_START     (17)
#define SOC_USBOTG_GOTGCTL_dbnc_time_END       (17)
#define SOC_USBOTG_GOTGCTL_asessvld_START      (18)
#define SOC_USBOTG_GOTGCTL_asessvld_END        (18)
#define SOC_USBOTG_GOTGCTL_bsesvld_START       (19)
#define SOC_USBOTG_GOTGCTL_bsesvld_END         (19)
#define SOC_USBOTG_GOTGCTL_otg_version_START   (20)
#define SOC_USBOTG_GOTGCTL_otg_version_END     (20)
#define SOC_USBOTG_GOTGCTL_multvaldidbc_START  (22)
#define SOC_USBOTG_GOTGCTL_multvaldidbc_END    (26)
#define SOC_USBOTG_GOTGCTL_chirpen_START       (27)
#define SOC_USBOTG_GOTGCTL_chirpen_END         (27)


/*****************************************************************************
 �ṹ��    : SOC_USBOTG_GOTGINT_UNION
 �ṹ˵��  : GOTGINT �Ĵ����ṹ���塣��ַƫ����:0x0004����ֵ:0x00000000�����:32
 �Ĵ���˵��: ȫ��OTG�ж�״̬�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved_0       : 2;  /* bit[0-1]  : ������ */
        unsigned int  sesenddet        : 1;  /* bit[2]    : ��⵽�Ự�����������ָʾutmisrp_bvalid�źű�Ϊ�͵�ƽ��
                                                            0�����жϣ�
                                                            1�����жϡ� */
        unsigned int  reserved_1       : 5;  /* bit[3-7]  : ������ */
        unsigned int  sesreqsucstschng : 1;  /* bit[8]    : �Ự����״̬�仯�����Ự����ɹ�����ʧ��ʱ����bit��1���������ͨ����ѯ�Ĵ���GPTGCTL[SesReqScs]��ȷ���Ự�����ǳɹ�����ʧ�ܡ�
                                                            0�����жϣ�
                                                            1�����жϡ� */
        unsigned int  hstnegsucstschng : 1;  /* bit[9]    : ����Э�̳ɹ�״̬�仯��
                                                            0�����жϣ�
                                                            1�����жϡ� */
        unsigned int  reserved_2       : 7;  /* bit[10-16]: ������ */
        unsigned int  hstnegdet        : 1;  /* bit[17]   : ��⵽����Э������
                                                            0�����жϣ�
                                                            1�����жϡ� */
        unsigned int  adevtoutchg      : 1;  /* bit[18]   : A�豸�ȴ�B�豸���ӳ�ʱ��
                                                            0�����жϣ�
                                                            1�����жϡ� */
        unsigned int  dbncedone        : 1;  /* bit[19]   : debounce��ɣ���hostģʽ��Ч����⵽device����֮���ӳ�debounceʱ�䣬�������ø�bit��Ч������յ����ж�֮�󣬿������÷�����λ��������bit����GUSBCFG[HNPCap]����GUSBCFG[SRPCap]����֮����Ч��
                                                            0�����жϣ�
                                                            1�����жϡ� */
        unsigned int  multvalidchng    : 1;  /* bit[20]   : ����һ��ACA�ܽ�״̬�����仯��
                                                            0�����жϣ�
                                                            1�����жϡ� */
        unsigned int  reserved_3       : 11; /* bit[21-31]: ���� */
    } reg;
} SOC_USBOTG_GOTGINT_UNION;
#endif
#define SOC_USBOTG_GOTGINT_sesenddet_START         (2)
#define SOC_USBOTG_GOTGINT_sesenddet_END           (2)
#define SOC_USBOTG_GOTGINT_sesreqsucstschng_START  (8)
#define SOC_USBOTG_GOTGINT_sesreqsucstschng_END    (8)
#define SOC_USBOTG_GOTGINT_hstnegsucstschng_START  (9)
#define SOC_USBOTG_GOTGINT_hstnegsucstschng_END    (9)
#define SOC_USBOTG_GOTGINT_hstnegdet_START         (17)
#define SOC_USBOTG_GOTGINT_hstnegdet_END           (17)
#define SOC_USBOTG_GOTGINT_adevtoutchg_START       (18)
#define SOC_USBOTG_GOTGINT_adevtoutchg_END         (18)
#define SOC_USBOTG_GOTGINT_dbncedone_START         (19)
#define SOC_USBOTG_GOTGINT_dbncedone_END           (19)
#define SOC_USBOTG_GOTGINT_multvalidchng_START     (20)
#define SOC_USBOTG_GOTGINT_multvalidchng_END       (20)


/*****************************************************************************
 �ṹ��    : SOC_USBOTG_GAHBCFG_UNION
 �ṹ˵��  : GAHBCFG �Ĵ����ṹ���塣��ַƫ����:0x0008����ֵ:0x00000000�����:32
 �Ĵ���˵��: ȫ��AHB���üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  glblintrmsk       : 1;  /* bit[0]    : ȫ���ж�����λ���������������жϵ��ϱ���
                                                             0�����Σ�
                                                             1�������Ρ� */
        unsigned int  hbstlen           : 4;  /* bit[1-4]  : burst���Ϳ��ƣ�����DMA AHB���ߴ���burst���͡�
                                                             0000��single��
                                                             0001��incr��
                                                             0011��incr4��
                                                             0101��incr8��
                                                             0111��incr16��
                                                             others��reserved�� */
        unsigned int  dmaen             : 1;  /* bit[5]    : DMAʹ�ܡ�
                                                             0����ʹ�ܣ�
                                                             1��ʹ�ܡ� */
        unsigned int  reserved_0        : 1;  /* bit[6]    : ������ */
        unsigned int  nptxfemplvl       : 1;  /* bit[7]    : ����FIFO��ˮ�꣬���÷���FIFO���ж�GINTSTS[NPTxFEmp]�Ĵ���������
                                                             0������FIFO��գ�
                                                             1������FIFOȫ�ա� */
        unsigned int  reserved_1        : 13; /* bit[8-20] : ���� */
        unsigned int  remmemsupp        : 1;  /* bit[21]   : Զ���ڴ�֧�� */
        unsigned int  notialldmawrit    : 1;  /* bit[22]   : ֻ��DMA����״̬ */
        unsigned int  ahbsingle         : 1;  /* bit[23]   : AHB���ʴ���֧�� */
        unsigned int  invdescendianness : 1;  /* bit[24]   : �ı��������Ĵ��С������ */
        unsigned int  reserved_2        : 7;  /* bit[25-31]: ���� */
    } reg;
} SOC_USBOTG_GAHBCFG_UNION;
#endif
#define SOC_USBOTG_GAHBCFG_glblintrmsk_START        (0)
#define SOC_USBOTG_GAHBCFG_glblintrmsk_END          (0)
#define SOC_USBOTG_GAHBCFG_hbstlen_START            (1)
#define SOC_USBOTG_GAHBCFG_hbstlen_END              (4)
#define SOC_USBOTG_GAHBCFG_dmaen_START              (5)
#define SOC_USBOTG_GAHBCFG_dmaen_END                (5)
#define SOC_USBOTG_GAHBCFG_nptxfemplvl_START        (7)
#define SOC_USBOTG_GAHBCFG_nptxfemplvl_END          (7)
#define SOC_USBOTG_GAHBCFG_remmemsupp_START         (21)
#define SOC_USBOTG_GAHBCFG_remmemsupp_END           (21)
#define SOC_USBOTG_GAHBCFG_notialldmawrit_START     (22)
#define SOC_USBOTG_GAHBCFG_notialldmawrit_END       (22)
#define SOC_USBOTG_GAHBCFG_ahbsingle_START          (23)
#define SOC_USBOTG_GAHBCFG_ahbsingle_END            (23)
#define SOC_USBOTG_GAHBCFG_invdescendianness_START  (24)
#define SOC_USBOTG_GAHBCFG_invdescendianness_END    (24)


/*****************************************************************************
 �ṹ��    : SOC_USBOTG_GUSBCFG_UNION
 �ṹ˵��  : GUSBCFG �Ĵ����ṹ���塣��ַƫ����:0x000C����ֵ:0x00001400�����:32
 �Ĵ���˵��: ȫ��USB���üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  toutcal      : 3;  /* bit[0-2]  : ���ٺ�ȫ�ٳ�ʱʱ���������λΪPHYʱ�����ڣ����ڵ�����׼��ʱʱ�䡣 */
        unsigned int  phyif        : 1;  /* bit[3]    : PHY����λ��ѡ��
                                                        0��8bit��
                                                        1��16bit�� */
        unsigned int  reserved_0   : 4;  /* bit[4-7]  : ������ */
        unsigned int  srpcap       : 1;  /* bit[8]    : SRP����ʹ�ܡ�
                                                        0����ʹ�ܣ�
                                                        1��ʹ�ܡ� */
        unsigned int  hnpcap       : 1;  /* bit[9]    : HNP����ʹ�ܡ�
                                                        0����ʹ�ܣ�
                                                        1��ʹ�ܡ� */
        unsigned int  usbtrdtim    : 4;  /* bit[10-13]: USB��תʱ�䡣ָʾ��MAC�������󵽴�FIFO��ȡ�����ݵ�ʱ�䣬��λΪPHYʱ�����ڡ�
                                                        �������ó�����ֵ��
                                                        0101��PHY����λ����16bit��
                                                        1001��PHY����λ����8bit�� */
        unsigned int  reserved_1   : 1;  /* bit[14]   : ������ */
        unsigned int  phypwrclksel : 1;  /* bit[15]   : PHY�͹���ģʽʱ��ѡ��
                                                        0��480MHz�ڲ�ʱ�ӣ�
                                                        1��48MHz�ⲿʱ�ӡ� */
        unsigned int  reserved_2   : 12; /* bit[16-27]: ������ */
        unsigned int  txenddelay   : 1;  /* bit[28]   : ���ͽ����ӳ١����ø�bit������UTMI 1.05�汾ʹ�ܷ��ͽ���timer��
                                                        0����ʹ�ܣ�
                                                        1��ʹ�ܡ� */
        unsigned int  forcehstmode : 1;  /* bit[29]   : ǿ��ΪHostģʽ��
                                                        0������ģʽ��
                                                        1��hostģʽ�� */
        unsigned int  forcedevmode : 1;  /* bit[30]   : ǿ��Ϊdeviceģʽ��
                                                        0������ģʽ��
                                                        1��deviceģʽ�� */
        unsigned int  ctpttxpkt    : 1;  /* bit[31]   : �ƻ������ͣ�����debug������ʹ��ʱ�������ø�bitΪ1��
                                                        0���������ƻ�����
                                                        1�������ƻ����� */
    } reg;
} SOC_USBOTG_GUSBCFG_UNION;
#endif
#define SOC_USBOTG_GUSBCFG_toutcal_START       (0)
#define SOC_USBOTG_GUSBCFG_toutcal_END         (2)
#define SOC_USBOTG_GUSBCFG_phyif_START         (3)
#define SOC_USBOTG_GUSBCFG_phyif_END           (3)
#define SOC_USBOTG_GUSBCFG_srpcap_START        (8)
#define SOC_USBOTG_GUSBCFG_srpcap_END          (8)
#define SOC_USBOTG_GUSBCFG_hnpcap_START        (9)
#define SOC_USBOTG_GUSBCFG_hnpcap_END          (9)
#define SOC_USBOTG_GUSBCFG_usbtrdtim_START     (10)
#define SOC_USBOTG_GUSBCFG_usbtrdtim_END       (13)
#define SOC_USBOTG_GUSBCFG_phypwrclksel_START  (15)
#define SOC_USBOTG_GUSBCFG_phypwrclksel_END    (15)
#define SOC_USBOTG_GUSBCFG_txenddelay_START    (28)
#define SOC_USBOTG_GUSBCFG_txenddelay_END      (28)
#define SOC_USBOTG_GUSBCFG_forcehstmode_START  (29)
#define SOC_USBOTG_GUSBCFG_forcehstmode_END    (29)
#define SOC_USBOTG_GUSBCFG_forcedevmode_START  (30)
#define SOC_USBOTG_GUSBCFG_forcedevmode_END    (30)
#define SOC_USBOTG_GUSBCFG_ctpttxpkt_START     (31)
#define SOC_USBOTG_GUSBCFG_ctpttxpkt_END       (31)


/*****************************************************************************
 �ṹ��    : SOC_USBOTG_GRSTCTL_UNION
 �ṹ˵��  : GRSTCTL �Ĵ����ṹ���塣��ַƫ����:0x0010����ֵ:0x80000000�����:32
 �Ĵ���˵��: ȫ�ָ�λ���ƼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  csftrst    : 1;  /* bit[0]    : ��λ���󡣸�λ����ʱ�����phyʱ���򡣲�����ɸ�bit�Զ����㡣
                                                      0����λ��ɣ�
                                                      1��������λ�� */
        unsigned int  reserved_0 : 1;  /* bit[1]    : ������ */
        unsigned int  frmcntrrst : 1;  /* bit[2]    : ΢֡�ż�����λ��
                                                      0����λ��Ч��
                                                      1����λ��Ч�� */
        unsigned int  reserved_1 : 1;  /* bit[3]    : ������ */
        unsigned int  rxfflsh    : 1;  /* bit[4]    : ��ս���FIFO��������ɣ���bit�Զ����㡣���ø�bit֮ǰ�����뱣֤�Խ���FIFOû�ж�д������
                                                      0����ս���FIFO��ɣ�
                                                      1����ս���FIFO�� */
        unsigned int  txfflsh    : 1;  /* bit[5]    : ��շ���FIFO���������TxFNumָ���ķ���FIFO����շ���FIFO��ɣ���bit�Զ����㡣
                                                      0����շ���FIFO��ɣ�
                                                      1����շ���FIFO��
                                                      �����ø�λ֮ǰ�����뱣֤��TxFIFOû�ж�д�������ڽ��С�����ͨ�����¼Ĵ���״̬ȷ�ϣ�
                                                      DIEPINTn[INEPNakEff]�ж�Ϊ1��֤������û�ж�����FIFO��
                                                      GRST[AHBIdle]Ϊ1��֤������û��д����FIFO��
                                                      ������FIFO�������û��߶˵㲻ʹ��ʱ��շ���FIFO�� */
        unsigned int  txfnum     : 5;  /* bit[6-10] : ��շ���FIFO��š�ָʾ��TxFFlsh��������ķ���FIFO����TxFFlshλ����֮ǰ���ܸı�TxFNumֵ��
                                                      0x0��Hostģʽ����շ����ڷ���FIFO��Deviceģʽ����շ���FIFO 0��
                                                      0x1��Hostģʽ��������ڷ���FIFO��Deviceģʽ����շ���FIFO 1��
                                                      0x2��Deviceģʽ�£���շ���FIFO 2��
                                                      ����
                                                      0xF��Deviceģʽ�£���շ���FIFO 15��
                                                      0x10��������з���FIFO��
                                                      others��reserved�� */
        unsigned int  reserved_2 : 19; /* bit[11-29]: ������ */
        unsigned int  dmareq     : 1;  /* bit[30]   : DMA����״̬��ָʾ�Ƿ����ڴ���DMA��������debug��
                                                      0����DMA����
                                                      1��DMA�������ڴ��� */
        unsigned int  ahbidle    : 1;  /* bit[31]   : AHB����״̬��ָʾAHB master״̬�����ڿ���״̬��
                                                      0�������ڿ���״̬��
                                                      1�����ڿ���״̬�� */
    } reg;
} SOC_USBOTG_GRSTCTL_UNION;
#endif
#define SOC_USBOTG_GRSTCTL_csftrst_START     (0)
#define SOC_USBOTG_GRSTCTL_csftrst_END       (0)
#define SOC_USBOTG_GRSTCTL_frmcntrrst_START  (2)
#define SOC_USBOTG_GRSTCTL_frmcntrrst_END    (2)
#define SOC_USBOTG_GRSTCTL_rxfflsh_START     (4)
#define SOC_USBOTG_GRSTCTL_rxfflsh_END       (4)
#define SOC_USBOTG_GRSTCTL_txfflsh_START     (5)
#define SOC_USBOTG_GRSTCTL_txfflsh_END       (5)
#define SOC_USBOTG_GRSTCTL_txfnum_START      (6)
#define SOC_USBOTG_GRSTCTL_txfnum_END        (10)
#define SOC_USBOTG_GRSTCTL_dmareq_START      (30)
#define SOC_USBOTG_GRSTCTL_dmareq_END        (30)
#define SOC_USBOTG_GRSTCTL_ahbidle_START     (31)
#define SOC_USBOTG_GRSTCTL_ahbidle_END       (31)


/*****************************************************************************
 �ṹ��    : SOC_USBOTG_GINTSTS_UNION
 �ṹ˵��  : GINTSTS �Ĵ����ṹ���塣��ַƫ����:0x0014����ֵ:0x14000020�����:32
 �Ĵ���˵��: ȫ���ж�״̬�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  curmode      : 1;  /* bit[0]  : ��ǰģʽ��
                                                      0��deviceģʽ��
                                                      1��hostģʽ�� */
        unsigned int  modemis      : 1;  /* bit[1]  : ģʽ��ƥ���жϡ������ǰΪhostģʽ�������дdevice�Ĵ����������ǰΪdeviceģʽ�������дhost�Ĵ����ᴥ�����жϡ�
                                                      0�����жϣ�
                                                      1�����жϡ� */
        unsigned int  otgint       : 1;  /* bit[2]  : OTG�жϡ������Ҫ��ѯ�Ĵ���GOTGINTȷ���ж����͡�
                                                      0�����жϣ�
                                                      1�����жϡ� */
        unsigned int  sof          : 1;  /* bit[3]  : SOF(Start Of microFrame)�жϡ�ָʾ���յ�SOF���ư���
                                                      0�����жϣ�
                                                      1�����жϡ� */
        unsigned int  rxflvl       : 1;  /* bit[4]  : ����FIFO�ǿ��жϡ�ָʾ����FIFO������1���������ݡ�
                                                      0�����жϣ�
                                                      1�����жϡ� */
        unsigned int  nptxfemp     : 1;  /* bit[5]  : �����ڷ���FIFO���жϡ�
                                                      0�����жϣ�
                                                      1�����жϡ� */
        unsigned int  ginnakeff    : 1;  /* bit[6]  : ������IN�˵�NAK��Ч�жϡ�ָʾ�Ĵ���DCTL[SGNPInNak]������Ч�������е�IN������ӦNAK����bit����ͨ��дDCTL[CGNPInNak]�������
                                                      0�����жϣ�
                                                      1�����жϡ� */
        unsigned int  goutnakeff   : 1;  /* bit[7]  : OUT�˵�NAK��Ч�жϡ�ָʾ�Ĵ���DCTL[SGOUTNak]������Ч�������е�OUT���ư���ӦNAK����bit����ͨ��д�Ĵ���DCTL[CGOUTNak]�������
                                                      0�����жϣ�
                                                      1�����жϡ� */
        unsigned int  reserved_0   : 2;  /* bit[8-9]: ������ */
        unsigned int  erlysusp     : 1;  /* bit[10] : Early suspend�жϡ�����⵽USB����IDLE״̬����3ms�ᴥ�����жϡ�
                                                      0�����жϣ�
                                                      1�����жϡ� */
        unsigned int  usbsusp      : 1;  /* bit[11] : suspend�жϡ�ָʾ����suspend״̬��
                                                      0�����жϣ�
                                                      1�����жϡ� */
        unsigned int  usbrst       : 1;  /* bit[12] : USB��λ�жϡ�ָʾ��⵽USB��λ������
                                                      0�����жϣ�
                                                      1�����жϡ� */
        unsigned int  enumdone     : 1;  /* bit[13] : ö������жϡ�
                                                      0�����жϣ�
                                                      1�����жϡ� */
        unsigned int  isooutdrop   : 1;  /* bit[14] : Isochronous OUT�������жϡ����յ�Isochronous OUT�����������ڽ���FIFO�ռ䲻����USB�ᶪ���յ��İ�������λ���жϡ�
                                                      0�����жϣ�
                                                      1�����жϡ� */
        unsigned int  eopf         : 1;  /* bit[15] : EOPF��End of Period Frame���жϣ�ָʾ�ڵ�ǰ֡���ڴ��������
                                                      0�����жϣ�
                                                      1�����жϡ� */
        unsigned int  rstrdoneint  : 1;  /* bit[16] : �Ĵ����ָ��жϡ�ָʾ�˳�����ģʽ�󣬼Ĵ����ָ�������ɡ�
                                                      0�����жϣ�
                                                      1�����жϡ� */
        unsigned int  reserved_1   : 1;  /* bit[17] : ������ */
        unsigned int  iepint       : 1;  /* bit[18] : IN�˵��жϡ�ָʾIN�˵����жϲ����������Ҫ��ѯ�Ĵ���DAINTȷ���˵�ţ�Ȼ���ѯ��Ӧ�˵���ж�״̬�Ĵ���ȷ���ж����͡�
                                                      0�����жϣ�
                                                      1�����жϡ� */
        unsigned int  oepint       : 1;  /* bit[19] : OUT�˵��жϡ�ָʾOUT�˵����жϲ����������Ҫ��ѯ�Ĵ���DAINTȷ���˵�ţ�Ȼ���ѯ��Ӧ�˵���ж�״̬�Ĵ���ȷ���ж����͡�
                                                      0�����жϣ�
                                                      1�����жϡ� */
        unsigned int  incompisoin  : 1;  /* bit[20] : Isochronous IN����δ����жϡ�ָʾ������1��IN�˵��Isochronous�����ڵ�ǰ��΢֡δ��ɡ����ж���EOPF�ж�ͬʱ������
                                                      0�����ж�
                                                      1�����ж� */
        unsigned int  incompisoout : 1;  /* bit[21] : Isochronous OUT����δ����жϡ�ָʾ������1��OUT�˵��Isochronous�����ڵ�ǰ��΢֡δ��ɡ����ж���EOPF�ж�ͬʱ������
                                                      0�����жϣ�
                                                      1�����жϡ� */
        unsigned int  fetsusp      : 1;  /* bit[22] : ȡ�������жϡ�����DMAģʽʱ��Ч�����ж�ָʾ���ڷ���FIFOû�пռ��ԭ��DMAֹͣ��IN�˵��memory��ȡ���ݡ�
                                                      0�����жϣ�
                                                      1�����жϡ� */
        unsigned int  resetdet     : 1;  /* bit[23] : ��⵽��λ�жϡ����豸����suspend״̬�����ֵ���ʱ����⵽USB�������и�λ�������ᴥ�����жϡ�
                                                      0�����жϣ�
                                                      1�����жϡ� */
        unsigned int  hprtint      : 1;  /* bit[24] : Host�˿��жϡ������Ҫͨ��HPRT�Ĵ���ȷ�������жϡ�
                                                      0�����жϣ�
                                                      1�����жϡ� */
        unsigned int  hchint       : 1;  /* bit[25] : Hostͨ���жϡ�ָʾ�κ�һ��ͨ�����жϴ����������Ҫͨ��HCINTn�Ĵ���ȷ�������жϡ�
                                                      0�����жϣ�
                                                      1�����жϡ� */
        unsigned int  ptxfemp      : 1;  /* bit[26] : ���ڷ���FIFO���жϣ���hostģʽ��Ч��
                                                      0�����жϣ�
                                                      1�����жϡ� */
        unsigned int  lpm_int      : 1;  /* bit[27] : LPM�����жϡ���USB���յ�LPM��������host��Ӧ��ERROR�����жϻᴥ������λ����LPM����ʹ��ʱ��Ч��
                                                      0�����жϣ�
                                                      1�����жϡ� */
        unsigned int  conidstschg  : 1;  /* bit[28] : ID״̬�仯�жϡ�
                                                      0�����жϣ�
                                                      1�����жϡ� */
        unsigned int  disconnint   : 1;  /* bit[29] : �Ͽ������жϣ���hostģʽ��Ч��
                                                      0�����жϣ�
                                                      1�����жϡ� */
        unsigned int  sessreqint   : 1;  /* bit[30] : ��⵽�Ự�����жϡ���utmisrp_bvalid�ӵ͵�ƽ��ɸߵ�ƽ����������жϡ�
                                                      0�����жϣ�
                                                      1�����жϡ� */
        unsigned int  wkupint      : 1;  /* bit[31] : Resume/Remote Wakwup�жϡ���⵽host������resume���������ߴ�L1״̬���ѻᴥ�����жϡ�
                                                      0�����жϣ�
                                                      1�����жϡ� */
    } reg;
} SOC_USBOTG_GINTSTS_UNION;
#endif
#define SOC_USBOTG_GINTSTS_curmode_START       (0)
#define SOC_USBOTG_GINTSTS_curmode_END         (0)
#define SOC_USBOTG_GINTSTS_modemis_START       (1)
#define SOC_USBOTG_GINTSTS_modemis_END         (1)
#define SOC_USBOTG_GINTSTS_otgint_START        (2)
#define SOC_USBOTG_GINTSTS_otgint_END          (2)
#define SOC_USBOTG_GINTSTS_sof_START           (3)
#define SOC_USBOTG_GINTSTS_sof_END             (3)
#define SOC_USBOTG_GINTSTS_rxflvl_START        (4)
#define SOC_USBOTG_GINTSTS_rxflvl_END          (4)
#define SOC_USBOTG_GINTSTS_nptxfemp_START      (5)
#define SOC_USBOTG_GINTSTS_nptxfemp_END        (5)
#define SOC_USBOTG_GINTSTS_ginnakeff_START     (6)
#define SOC_USBOTG_GINTSTS_ginnakeff_END       (6)
#define SOC_USBOTG_GINTSTS_goutnakeff_START    (7)
#define SOC_USBOTG_GINTSTS_goutnakeff_END      (7)
#define SOC_USBOTG_GINTSTS_erlysusp_START      (10)
#define SOC_USBOTG_GINTSTS_erlysusp_END        (10)
#define SOC_USBOTG_GINTSTS_usbsusp_START       (11)
#define SOC_USBOTG_GINTSTS_usbsusp_END         (11)
#define SOC_USBOTG_GINTSTS_usbrst_START        (12)
#define SOC_USBOTG_GINTSTS_usbrst_END          (12)
#define SOC_USBOTG_GINTSTS_enumdone_START      (13)
#define SOC_USBOTG_GINTSTS_enumdone_END        (13)
#define SOC_USBOTG_GINTSTS_isooutdrop_START    (14)
#define SOC_USBOTG_GINTSTS_isooutdrop_END      (14)
#define SOC_USBOTG_GINTSTS_eopf_START          (15)
#define SOC_USBOTG_GINTSTS_eopf_END            (15)
#define SOC_USBOTG_GINTSTS_rstrdoneint_START   (16)
#define SOC_USBOTG_GINTSTS_rstrdoneint_END     (16)
#define SOC_USBOTG_GINTSTS_iepint_START        (18)
#define SOC_USBOTG_GINTSTS_iepint_END          (18)
#define SOC_USBOTG_GINTSTS_oepint_START        (19)
#define SOC_USBOTG_GINTSTS_oepint_END          (19)
#define SOC_USBOTG_GINTSTS_incompisoin_START   (20)
#define SOC_USBOTG_GINTSTS_incompisoin_END     (20)
#define SOC_USBOTG_GINTSTS_incompisoout_START  (21)
#define SOC_USBOTG_GINTSTS_incompisoout_END    (21)
#define SOC_USBOTG_GINTSTS_fetsusp_START       (22)
#define SOC_USBOTG_GINTSTS_fetsusp_END         (22)
#define SOC_USBOTG_GINTSTS_resetdet_START      (23)
#define SOC_USBOTG_GINTSTS_resetdet_END        (23)
#define SOC_USBOTG_GINTSTS_hprtint_START       (24)
#define SOC_USBOTG_GINTSTS_hprtint_END         (24)
#define SOC_USBOTG_GINTSTS_hchint_START        (25)
#define SOC_USBOTG_GINTSTS_hchint_END          (25)
#define SOC_USBOTG_GINTSTS_ptxfemp_START       (26)
#define SOC_USBOTG_GINTSTS_ptxfemp_END         (26)
#define SOC_USBOTG_GINTSTS_lpm_int_START       (27)
#define SOC_USBOTG_GINTSTS_lpm_int_END         (27)
#define SOC_USBOTG_GINTSTS_conidstschg_START   (28)
#define SOC_USBOTG_GINTSTS_conidstschg_END     (28)
#define SOC_USBOTG_GINTSTS_disconnint_START    (29)
#define SOC_USBOTG_GINTSTS_disconnint_END      (29)
#define SOC_USBOTG_GINTSTS_sessreqint_START    (30)
#define SOC_USBOTG_GINTSTS_sessreqint_END      (30)
#define SOC_USBOTG_GINTSTS_wkupint_START       (31)
#define SOC_USBOTG_GINTSTS_wkupint_END         (31)


/*****************************************************************************
 �ṹ��    : SOC_USBOTG_GINTMSK_UNION
 �ṹ˵��  : GINTMSK �Ĵ����ṹ���塣��ַƫ����:0x0018����ֵ:0x00000000�����:32
 �Ĵ���˵��: ȫ���ж����μĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved_0      : 2;  /* bit[0-1]: ������ */
        unsigned int  otgintmsk       : 1;  /* bit[2]  : OTG�ж�����λ��
                                                         0�����Σ�
                                                         1�������Ρ� */
        unsigned int  sofmsk          : 1;  /* bit[3]  : sof(Start Of microFrame)�ж�����λ��
                                                         0�����Σ�
                                                         1�������Ρ� */
        unsigned int  rxflvlmsk       : 1;  /* bit[4]  : ����FIFO�ǿ��ж�����λ��
                                                         0�����Σ�
                                                         1�������Ρ� */
        unsigned int  nptxfempmsk     : 1;  /* bit[5]  : �����ڷ���FIFO���ж�����λ��
                                                         0�����Σ�
                                                         1�������Ρ� */
        unsigned int  ginnakeffmsk    : 1;  /* bit[6]  : IN�˵�NAK��Ч�ж�����λ��
                                                         0�����Σ�
                                                         1�������Ρ� */
        unsigned int  goutnakeffmsk   : 1;  /* bit[7]  : OUT�˵�NAK��Ч�ж�����λ��
                                                         0�����Σ�
                                                         1�������Ρ� */
        unsigned int  reserved_1      : 2;  /* bit[8-9]: ���� */
        unsigned int  erlysuspmsk     : 1;  /* bit[10] : Early suspend�ж�����λ��
                                                         0�����Σ�
                                                         1�������Ρ� */
        unsigned int  usbsuspmsk      : 1;  /* bit[11] : suspend�ж�����λ��
                                                         0�����Σ�
                                                         1�������Ρ� */
        unsigned int  usbrstmsk       : 1;  /* bit[12] : USB��λ�ж�����λ��
                                                         0�����Σ�
                                                         1�������Ρ� */
        unsigned int  enumdonemsk     : 1;  /* bit[13] : ö������ж�����λ��
                                                         0�����Σ�
                                                         1�������Ρ� */
        unsigned int  isooutdropmsk   : 1;  /* bit[14] : Isochronous OUT�������ж�����λ��
                                                         0�����Σ�
                                                         1�������Ρ� */
        unsigned int  eopfmsk         : 1;  /* bit[15] : EOPF��End of Period Frame���ж�����λ��
                                                         0�����Σ�
                                                         1�������Ρ� */
        unsigned int  rstrdonemsk     : 1;  /* bit[16] : �Ĵ����ָ��ж�����λ��
                                                         0�����Σ�
                                                         1�������Ρ� */
        unsigned int  reserved_2      : 1;  /* bit[17] : ������ */
        unsigned int  iepintmsk       : 1;  /* bit[18] : IN�˵��ж�����λ��
                                                         0�����Σ�
                                                         1�������Ρ� */
        unsigned int  oepintmsk       : 1;  /* bit[19] : OUT�˵��ж�����λ��
                                                         0�����Σ�
                                                         1�������Ρ� */
        unsigned int  incompisoinmsk  : 1;  /* bit[20] : Isochronous IN����δ����ж�����λ��
                                                         0�����Σ�
                                                         1�������Ρ� */
        unsigned int  incompisooutmsk : 1;  /* bit[21] : Isochronous OUT����δ����ж�����λ��
                                                         0�����Σ�
                                                         1�������Ρ� */
        unsigned int  fetsuspmsk      : 1;  /* bit[22] : ȡ�������ж�����λ��
                                                         0�����Σ�
                                                         1�������Ρ� */
        unsigned int  resetdetmsk     : 1;  /* bit[23] : ��⵽��λ�ж�����λ��
                                                         0�����Σ�
                                                         1�������Ρ� */
        unsigned int  hprtintmsk      : 1;  /* bit[24] : Host�˿��ж�����λ��
                                                         0�����Σ�
                                                         1�������Ρ� */
        unsigned int  hchintmsk       : 1;  /* bit[25] : Hostͨ���ж�����λ��
                                                         0�����Σ�
                                                         1�������Ρ� */
        unsigned int  ptxfempmsk      : 1;  /* bit[26] : ���ڷ���FIFO���ж�����λ��
                                                         0�����Σ�
                                                         1�������Ρ� */
        unsigned int  lpm_intmsk      : 1;  /* bit[27] : LPM�����ж�����λ��
                                                         0�����Σ�
                                                         1�������Ρ� */
        unsigned int  conidstschngmsk : 1;  /* bit[28] : ID״̬�仯�ж�����λ��
                                                         0�����Σ�
                                                         1�������Ρ� */
        unsigned int  disconnintmsk   : 1;  /* bit[29] : �Ͽ������ж�����λ��
                                                         0�����Σ�
                                                         1�������Ρ� */
        unsigned int  sessreqintmsk   : 1;  /* bit[30] : ��⵽�Ự�����ж�����λ��
                                                         0�����Σ�
                                                         1�������Ρ� */
        unsigned int  wkupintmsk      : 1;  /* bit[31] : Resume/Remote Wakwup�ж�����λ��
                                                         0�����Σ�
                                                         1�������Ρ� */
    } reg;
} SOC_USBOTG_GINTMSK_UNION;
#endif
#define SOC_USBOTG_GINTMSK_otgintmsk_START        (2)
#define SOC_USBOTG_GINTMSK_otgintmsk_END          (2)
#define SOC_USBOTG_GINTMSK_sofmsk_START           (3)
#define SOC_USBOTG_GINTMSK_sofmsk_END             (3)
#define SOC_USBOTG_GINTMSK_rxflvlmsk_START        (4)
#define SOC_USBOTG_GINTMSK_rxflvlmsk_END          (4)
#define SOC_USBOTG_GINTMSK_nptxfempmsk_START      (5)
#define SOC_USBOTG_GINTMSK_nptxfempmsk_END        (5)
#define SOC_USBOTG_GINTMSK_ginnakeffmsk_START     (6)
#define SOC_USBOTG_GINTMSK_ginnakeffmsk_END       (6)
#define SOC_USBOTG_GINTMSK_goutnakeffmsk_START    (7)
#define SOC_USBOTG_GINTMSK_goutnakeffmsk_END      (7)
#define SOC_USBOTG_GINTMSK_erlysuspmsk_START      (10)
#define SOC_USBOTG_GINTMSK_erlysuspmsk_END        (10)
#define SOC_USBOTG_GINTMSK_usbsuspmsk_START       (11)
#define SOC_USBOTG_GINTMSK_usbsuspmsk_END         (11)
#define SOC_USBOTG_GINTMSK_usbrstmsk_START        (12)
#define SOC_USBOTG_GINTMSK_usbrstmsk_END          (12)
#define SOC_USBOTG_GINTMSK_enumdonemsk_START      (13)
#define SOC_USBOTG_GINTMSK_enumdonemsk_END        (13)
#define SOC_USBOTG_GINTMSK_isooutdropmsk_START    (14)
#define SOC_USBOTG_GINTMSK_isooutdropmsk_END      (14)
#define SOC_USBOTG_GINTMSK_eopfmsk_START          (15)
#define SOC_USBOTG_GINTMSK_eopfmsk_END            (15)
#define SOC_USBOTG_GINTMSK_rstrdonemsk_START      (16)
#define SOC_USBOTG_GINTMSK_rstrdonemsk_END        (16)
#define SOC_USBOTG_GINTMSK_iepintmsk_START        (18)
#define SOC_USBOTG_GINTMSK_iepintmsk_END          (18)
#define SOC_USBOTG_GINTMSK_oepintmsk_START        (19)
#define SOC_USBOTG_GINTMSK_oepintmsk_END          (19)
#define SOC_USBOTG_GINTMSK_incompisoinmsk_START   (20)
#define SOC_USBOTG_GINTMSK_incompisoinmsk_END     (20)
#define SOC_USBOTG_GINTMSK_incompisooutmsk_START  (21)
#define SOC_USBOTG_GINTMSK_incompisooutmsk_END    (21)
#define SOC_USBOTG_GINTMSK_fetsuspmsk_START       (22)
#define SOC_USBOTG_GINTMSK_fetsuspmsk_END         (22)
#define SOC_USBOTG_GINTMSK_resetdetmsk_START      (23)
#define SOC_USBOTG_GINTMSK_resetdetmsk_END        (23)
#define SOC_USBOTG_GINTMSK_hprtintmsk_START       (24)
#define SOC_USBOTG_GINTMSK_hprtintmsk_END         (24)
#define SOC_USBOTG_GINTMSK_hchintmsk_START        (25)
#define SOC_USBOTG_GINTMSK_hchintmsk_END          (25)
#define SOC_USBOTG_GINTMSK_ptxfempmsk_START       (26)
#define SOC_USBOTG_GINTMSK_ptxfempmsk_END         (26)
#define SOC_USBOTG_GINTMSK_lpm_intmsk_START       (27)
#define SOC_USBOTG_GINTMSK_lpm_intmsk_END         (27)
#define SOC_USBOTG_GINTMSK_conidstschngmsk_START  (28)
#define SOC_USBOTG_GINTMSK_conidstschngmsk_END    (28)
#define SOC_USBOTG_GINTMSK_disconnintmsk_START    (29)
#define SOC_USBOTG_GINTMSK_disconnintmsk_END      (29)
#define SOC_USBOTG_GINTMSK_sessreqintmsk_START    (30)
#define SOC_USBOTG_GINTMSK_sessreqintmsk_END      (30)
#define SOC_USBOTG_GINTMSK_wkupintmsk_START       (31)
#define SOC_USBOTG_GINTMSK_wkupintmsk_END         (31)


/*****************************************************************************
 �ṹ��    : SOC_USBOTG_GRXSTSR_UNION
 �ṹ˵��  : GRXSTSR �Ĵ����ṹ���塣��ַƫ����:0x001C����ֵ:0x00000000�����:32
 �Ĵ���˵��: ȫ�ֽ���FIFO״̬�����Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  epnum    : 4;  /* bit[0-3]  : Hostģʽ��ָʾͨ���ţ�deviceģʽ��ָʾ�˵�š� */
        unsigned int  bcnt     : 11; /* bit[4-14] : ���ݰ���С�����ֽ�Ϊ��λ�� */
        unsigned int  dpid     : 2;  /* bit[15-16]: ���ݰ�PID��
                                                    00��DATA0��
                                                    10��DATA1��
                                                    01��DATA2��
                                                    11��MDATA�� */
        unsigned int  pktsts   : 4;  /* bit[17-20]: ��״̬��ָʾ���յ������ݰ�״̬��
                                                    Hostģʽ�£�
                                                    0010�����յ�IN���ݰ���
                                                    0011��IN������ɣ�
                                                    0101�����ݰ�PID��ת����
                                                    0111��ͨ��ֹͣ��
                                                    others��reserved��
                                                    Deviceģʽ�£�
                                                    0001��OUT NAK��
                                                    0010�����յ�OUT���ݰ���
                                                    0011��OUT������ɣ�
                                                    0100��Setup������ɣ�
                                                    0110�����յ�Setup����
                                                    others��reserved�� */
        unsigned int  fn       : 4;  /* bit[21-24]: Hostģʽ�£���������
                                                    Deviceģʽ�£�֡��š�ָʾ֡��ŵĵ�4λ�����üĴ������ؽ���FIFO����״̬��������������FIFO���ݡ� */
        unsigned int  reserved : 7;  /* bit[25-31]: ������ */
    } reg;
} SOC_USBOTG_GRXSTSR_UNION;
#endif
#define SOC_USBOTG_GRXSTSR_epnum_START     (0)
#define SOC_USBOTG_GRXSTSR_epnum_END       (3)
#define SOC_USBOTG_GRXSTSR_bcnt_START      (4)
#define SOC_USBOTG_GRXSTSR_bcnt_END        (14)
#define SOC_USBOTG_GRXSTSR_dpid_START      (15)
#define SOC_USBOTG_GRXSTSR_dpid_END        (16)
#define SOC_USBOTG_GRXSTSR_pktsts_START    (17)
#define SOC_USBOTG_GRXSTSR_pktsts_END      (20)
#define SOC_USBOTG_GRXSTSR_fn_START        (21)
#define SOC_USBOTG_GRXSTSR_fn_END          (24)


/*****************************************************************************
 �ṹ��    : SOC_USBOTG_GRXSTSP_UNION
 �ṹ˵��  : GRXSTSP �Ĵ����ṹ���塣��ַƫ����:0x0020����ֵ:0x00000000�����:32
 �Ĵ���˵��: ȫ�ֽ���FIFO״̬�����Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  epnum    : 4;  /* bit[0-3]  : Hostģʽ��ָʾͨ���ţ�deviceģʽ��ָʾ�˵�š� */
        unsigned int  bcnt     : 11; /* bit[4-14] : ���ݰ���С�����ֽ�Ϊ��λ�� */
        unsigned int  dpid     : 2;  /* bit[15-16]: ���ݰ�PID��
                                                    00��DATA0��
                                                    10��DATA1��
                                                    01��DATA2��
                                                    11��MDATA�� */
        unsigned int  pktsts   : 4;  /* bit[17-20]: ��״̬��ָʾ���յ������ݰ�״̬��
                                                    Hostģʽ�£�
                                                    0010�����յ�IN���ݰ���
                                                    0011��IN������ɣ�
                                                    0101�����ݰ�PID��ת����
                                                    0111��ͨ��ֹͣ��
                                                    others��reserved��
                                                    Deviceģʽ�£�
                                                    0001��OUT NAK��
                                                    0010�����յ�OUT���ݰ���
                                                    0011��OUT������ɣ�
                                                    0100��Setup������ɣ�
                                                    0110�����յ�Setup����
                                                    others��reserved�� */
        unsigned int  fn       : 4;  /* bit[21-24]: Hostģʽ�£���������
                                                    Deviceģʽ�£�֡��š�ָʾ֡��ŵĵ�4λ�����üĴ������ؽ���FIFO����״̬��ͬʱ��������FIFO���ݡ� */
        unsigned int  reserved : 7;  /* bit[25-31]: ������ */
    } reg;
} SOC_USBOTG_GRXSTSP_UNION;
#endif
#define SOC_USBOTG_GRXSTSP_epnum_START     (0)
#define SOC_USBOTG_GRXSTSP_epnum_END       (3)
#define SOC_USBOTG_GRXSTSP_bcnt_START      (4)
#define SOC_USBOTG_GRXSTSP_bcnt_END        (14)
#define SOC_USBOTG_GRXSTSP_dpid_START      (15)
#define SOC_USBOTG_GRXSTSP_dpid_END        (16)
#define SOC_USBOTG_GRXSTSP_pktsts_START    (17)
#define SOC_USBOTG_GRXSTSP_pktsts_END      (20)
#define SOC_USBOTG_GRXSTSP_fn_START        (21)
#define SOC_USBOTG_GRXSTSP_fn_END          (24)


/*****************************************************************************
 �ṹ��    : SOC_USBOTG_GRXFSIZ_UNION
 �ṹ˵��  : GRXFSIZ �Ĵ����ṹ���塣��ַƫ����:0x0024����ֵ:0x00001000�����:32
 �Ĵ���˵��: ȫ�ֽ���FIFO��С�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  rxfdep   : 16; /* bit[0-15] : ����FIFO��ȡ���4�ֽ�Ϊ��λ�� */
        unsigned int  reserved : 16; /* bit[16-31]: ������ */
    } reg;
} SOC_USBOTG_GRXFSIZ_UNION;
#endif
#define SOC_USBOTG_GRXFSIZ_rxfdep_START    (0)
#define SOC_USBOTG_GRXFSIZ_rxfdep_END      (15)


/*****************************************************************************
 �ṹ��    : SOC_USBOTG_GNPTXFSIZ_UNION
 �ṹ˵��  : GNPTXFSIZ �Ĵ����ṹ���塣��ַƫ����:0x0028����ֵ:0x10001000�����:32
 �Ĵ���˵��: ȫ�ַ����ڷ���FIFO��С�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  nptxfstaddr : 16; /* bit[0-15] : �����ڷ���FIFO��ʼ��ַ����4�ֽ�Ϊ��λ�� */
        unsigned int  gnptxfsiz   : 16; /* bit[16-31]: �����ڷ���FIFO��ȡ���4�ֽ�Ϊ��λ�� */
    } reg;
} SOC_USBOTG_GNPTXFSIZ_UNION;
#endif
#define SOC_USBOTG_GNPTXFSIZ_nptxfstaddr_START  (0)
#define SOC_USBOTG_GNPTXFSIZ_nptxfstaddr_END    (15)
#define SOC_USBOTG_GNPTXFSIZ_gnptxfsiz_START    (16)
#define SOC_USBOTG_GNPTXFSIZ_gnptxfsiz_END      (31)


/*****************************************************************************
 �ṹ��    : SOC_USBOTG_GNPTXSTS_UNION
 �ṹ˵��  : GNPTXSTS �Ĵ����ṹ���塣��ַƫ����:0x002C����ֵ:0x00081000�����:32
 �Ĵ���˵��: ȫ�ַ����ڷ���FIFO״̬�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  nptxfspcavail : 16; /* bit[0-15] : �����ڷ���FIFOʣ��ռ䡣��4�ֽ�Ϊ��λ�� */
        unsigned int  nptxqspcavail : 8;  /* bit[16-23]: �����ڷ����������ʣ��ռ䡣
                                                         �����ڷ�������������Ϊ8������ָʾ����������л����Ի��漸���������� */
        unsigned int  nptxqtop      : 7;  /* bit[24-30]: �ȴ�����ķ����ڷ�������
                                                         Bit[30:27]:ͨ���ţ�
                                                         Bit[26:25]
                                                         00��OUT���ƣ�
                                                         01���㳤����
                                                         10��PING/CSPLIT���ƣ�
                                                         11��ͨ��ֹͣ���
                                                         Bit[24]:������־��ָʾ������Ϊ��ǰͨ�������һ������ */
        unsigned int  reserved      : 1;  /* bit[31]   : ������ */
    } reg;
} SOC_USBOTG_GNPTXSTS_UNION;
#endif
#define SOC_USBOTG_GNPTXSTS_nptxfspcavail_START  (0)
#define SOC_USBOTG_GNPTXSTS_nptxfspcavail_END    (15)
#define SOC_USBOTG_GNPTXSTS_nptxqspcavail_START  (16)
#define SOC_USBOTG_GNPTXSTS_nptxqspcavail_END    (23)
#define SOC_USBOTG_GNPTXSTS_nptxqtop_START       (24)
#define SOC_USBOTG_GNPTXSTS_nptxqtop_END         (30)


/*****************************************************************************
 �ṹ��    : SOC_USBOTG_GSNPSID_UNION
 �ṹ˵��  : GSNPSID �Ĵ����ṹ���塣��ַƫ����:0x0040����ֵ:0x4F54293A�����:32
 �Ĵ���˵��: USB IP�汾�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  userid : 32; /* bit[0-31]: USB IP�汾�Ĵ������汾Ϊ2.93a�� */
    } reg;
} SOC_USBOTG_GSNPSID_UNION;
#endif
#define SOC_USBOTG_GSNPSID_userid_START  (0)
#define SOC_USBOTG_GSNPSID_userid_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_USBOTG_GHWCFG1_UNION
 �ṹ˵��  : GHWCFG1 �Ĵ����ṹ���塣��ַƫ����:0x0044����ֵ:0x00000000�����:32
 �Ĵ���˵��: Ӳ�����üĴ���1��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  epdir : 32; /* bit[0-31]: �˵㷽��Ĵ�����
                                                Bit[31:30]���˵�15����
                                                bit[29:28]���˵�14����
                                                ����
                                                bit[1:0]���˵�0����
                                                �����˵�ֵ��
                                                00��˫��˵㣻
                                                01��IN�˵㣻
                                                10��OUT�˵㣻
                                                11�������� */
    } reg;
} SOC_USBOTG_GHWCFG1_UNION;
#endif
#define SOC_USBOTG_GHWCFG1_epdir_START  (0)
#define SOC_USBOTG_GHWCFG1_epdir_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_USBOTG_GHWCFG2_UNION
 �ṹ˵��  : GHWCFG2 �Ĵ����ṹ���塣��ַƫ����:0x0048����ֵ:0x22ACFC50�����:32
 �Ĵ���˵��: Ӳ�����üĴ���2��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  otgmode         : 3;  /* bit[0-2]  : OTGģʽ��
                                                           000��HNP��SRPʹ��OTG,����host��device��
                                                           001��SRPʹ��OTG,����host��device��
                                                           010��HNP��SRP��ʹ��OTG,����host��device��
                                                           011��SRPʹ��device��
                                                           100����OTG device��
                                                           101��SRPʹ��host��
                                                           110����OTG host��
                                                           111�������� */
        unsigned int  otgarch         : 2;  /* bit[3-4]  : DMAģʽ���á�
                                                           00����DMAģʽ��ֻ��1��AHB slave�ӿڣ�
                                                           01���ⲿDMA��
                                                           10���ڲ�DMA
                                                           11�������� */
        unsigned int  singpnt         : 1;  /* bit[5]    : Point-to-Potintģʽʹ�ܡ������ý����host��Ч��
                                                           0����ʹ�ܣ�
                                                           1��ʹ�ܡ� */
        unsigned int  hsphytype       : 2;  /* bit[6-7]  : ����PHY�ӿ�����ѡ��
                                                           00����֧�ָ���ģʽ��
                                                           01��UTMI+��
                                                           10��ULPI��
                                                           11��UTMI+��ULPI��֧�֣���������á� */
        unsigned int  fsphytype       : 2;  /* bit[8-9]  : ȫ��PHY�ӿ����͡�
                                                           00����֧��ȫ��PHY�ӿڣ�
                                                           01��ר��ȫ�ٽӿڣ�
                                                           10��ȫ�ٹܽ���UTMI+�ܽŸ��ã�
                                                           11��ȫ�ٹܽ���ULPI�ܽŸ��á� */
        unsigned int  numdeveps       : 4;  /* bit[10-13]: ���˵�0֮��֧�ֵĶ˵���Ŀ����ΧΪ1~15�� */
        unsigned int  numhstchnl      : 4;  /* bit[14-17]: Hostͨ����Ŀ����֧��host��Ч�� */
        unsigned int  periosupport    : 1;  /* bit[18]   : Hostģʽʱ���Ƿ�֧������OUTͨ����
                                                           0����֧�֣�
                                                           1��֧�֡� */
        unsigned int  dynfifosizing   : 1;  /* bit[19]   : �Ƿ�֧��FIFO��С��̬���á�
                                                           0����֧�֣�
                                                           1��֧�֡� */
        unsigned int  multiprocintrpt : 1;  /* bit[20]   : �Ƿ�֧�ֶ��ж��ϱ���
                                                           0����֧�֣�
                                                           1��֧�֡� */
        unsigned int  reserved        : 1;  /* bit[21]   : ������ */
        unsigned int  nptxqdepth      : 2;  /* bit[22-23]: ���������������ȡ�
                                                           00��2��
                                                           01��4��
                                                           10��8��
                                                           others��reserved�� */
        unsigned int  ptxqdepth       : 2;  /* bit[24-25]: hostģʽʱ���������������ȡ�
                                                           00��2��
                                                           01��4��
                                                           10��8��
                                                           others��reserved�� */
        unsigned int  tknqdepth       : 5;  /* bit[26-30]: deviceģʽʱ��IN����������ȡ� */
        unsigned int  otg_ic_usb      : 1;  /* bit[31]   : �Ƿ�֧��IC_USBģʽ��
                                                           0����֧�֣�
                                                           1��֧�֡� */
    } reg;
} SOC_USBOTG_GHWCFG2_UNION;
#endif
#define SOC_USBOTG_GHWCFG2_otgmode_START          (0)
#define SOC_USBOTG_GHWCFG2_otgmode_END            (2)
#define SOC_USBOTG_GHWCFG2_otgarch_START          (3)
#define SOC_USBOTG_GHWCFG2_otgarch_END            (4)
#define SOC_USBOTG_GHWCFG2_singpnt_START          (5)
#define SOC_USBOTG_GHWCFG2_singpnt_END            (5)
#define SOC_USBOTG_GHWCFG2_hsphytype_START        (6)
#define SOC_USBOTG_GHWCFG2_hsphytype_END          (7)
#define SOC_USBOTG_GHWCFG2_fsphytype_START        (8)
#define SOC_USBOTG_GHWCFG2_fsphytype_END          (9)
#define SOC_USBOTG_GHWCFG2_numdeveps_START        (10)
#define SOC_USBOTG_GHWCFG2_numdeveps_END          (13)
#define SOC_USBOTG_GHWCFG2_numhstchnl_START       (14)
#define SOC_USBOTG_GHWCFG2_numhstchnl_END         (17)
#define SOC_USBOTG_GHWCFG2_periosupport_START     (18)
#define SOC_USBOTG_GHWCFG2_periosupport_END       (18)
#define SOC_USBOTG_GHWCFG2_dynfifosizing_START    (19)
#define SOC_USBOTG_GHWCFG2_dynfifosizing_END      (19)
#define SOC_USBOTG_GHWCFG2_multiprocintrpt_START  (20)
#define SOC_USBOTG_GHWCFG2_multiprocintrpt_END    (20)
#define SOC_USBOTG_GHWCFG2_nptxqdepth_START       (22)
#define SOC_USBOTG_GHWCFG2_nptxqdepth_END         (23)
#define SOC_USBOTG_GHWCFG2_ptxqdepth_START        (24)
#define SOC_USBOTG_GHWCFG2_ptxqdepth_END          (25)
#define SOC_USBOTG_GHWCFG2_tknqdepth_START        (26)
#define SOC_USBOTG_GHWCFG2_tknqdepth_END          (30)
#define SOC_USBOTG_GHWCFG2_otg_ic_usb_START       (31)
#define SOC_USBOTG_GHWCFG2_otg_ic_usb_END         (31)


/*****************************************************************************
 �ṹ��    : SOC_USBOTG_GHWCFG3_UNION
 �ṹ˵��  : GHWCFG3 �Ĵ����ṹ���塣��ַƫ����:0x004C����ֵ:0x0F80D4E8�����:32
 �Ĵ���˵��: Ӳ�����üĴ���3��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  xfersizewidth   : 4;  /* bit[0-3]  : �����С��������ȡ�
                                                           0000��11bit��
                                                           0001��12bit��
                                                           ����
                                                           1000��19bit��
                                                           others��reserved�� */
        unsigned int  pktsizewidth    : 3;  /* bit[4-6]  : ����С��������ȡ�
                                                           000��4bit��
                                                           001��5bit��
                                                           010��6bit��
                                                           011��7bit��
                                                           100��8bit��
                                                           101��9bit��
                                                           110��10bit��
                                                           others��reserved�� */
        unsigned int  otgen           : 1;  /* bit[7]    : �Ƿ�ʹ��OTG���ܡ���bit��OTG_MODE������������OTG_MODE����Ϊ0��1��2ʱ��OtgEn=1��
                                                           0����ʹ�ܣ�
                                                           1��ʹ�ܡ� */
        unsigned int  i2cintsel       : 1;  /* bit[8]    : �Ƿ�֧��I2C�ӿڡ�
                                                           0����֧�֣�
                                                           1��֧�֡� */
        unsigned int  vndctlsupt      : 1;  /* bit[9]    : �Ƿ�֧��Vendor Control�ӿڡ�
                                                           0����֧�֣�
                                                           1��֧�֡� */
        unsigned int  optfeature      : 1;  /* bit[10]   : �Ƿ�֧��ȡ�������ԣ�User ID�Ĵ�����GPIO�ӿڣ�SOF��ת�źźͼ������ӿڡ�
                                                           0����֧�֣�
                                                           1��֧�֡� */
        unsigned int  rsttype         : 1;  /* bit[11]   : ��always����У���λ�����͡�
                                                           0���첽��λ��
                                                           1��ͬ����λ�� */
        unsigned int  otg_adp_support : 1;  /* bit[12]   : �Ƿ�֧��ADP��
                                                           0����֧�֣�
                                                           1��֧�֡� */
        unsigned int  otg_enable_hsic : 1;  /* bit[13]   : �Ƿ�֧��HSIC��
                                                           0����֧�֣�
                                                           1��֧�֡� */
        unsigned int  otg_bc_support  : 1;  /* bit[14]   : �Ƿ�֧��BC��
                                                           0����֧�֣�
                                                           1��֧�֡� */
        unsigned int  otg_enable_lpm  : 1;  /* bit[15]   : �Ƿ�֧��LPM��
                                                           0����֧�֣�
                                                           1��֧�֡� */
        unsigned int  dfifodepth      : 16; /* bit[16-31]: ����FIFO����ȣ���4�ֽ�Ϊ��λ������FIFO�ͽ���FIFO��С֮�Ͳ��ܴ��ڸ�ֵ�� */
    } reg;
} SOC_USBOTG_GHWCFG3_UNION;
#endif
#define SOC_USBOTG_GHWCFG3_xfersizewidth_START    (0)
#define SOC_USBOTG_GHWCFG3_xfersizewidth_END      (3)
#define SOC_USBOTG_GHWCFG3_pktsizewidth_START     (4)
#define SOC_USBOTG_GHWCFG3_pktsizewidth_END       (6)
#define SOC_USBOTG_GHWCFG3_otgen_START            (7)
#define SOC_USBOTG_GHWCFG3_otgen_END              (7)
#define SOC_USBOTG_GHWCFG3_i2cintsel_START        (8)
#define SOC_USBOTG_GHWCFG3_i2cintsel_END          (8)
#define SOC_USBOTG_GHWCFG3_vndctlsupt_START       (9)
#define SOC_USBOTG_GHWCFG3_vndctlsupt_END         (9)
#define SOC_USBOTG_GHWCFG3_optfeature_START       (10)
#define SOC_USBOTG_GHWCFG3_optfeature_END         (10)
#define SOC_USBOTG_GHWCFG3_rsttype_START          (11)
#define SOC_USBOTG_GHWCFG3_rsttype_END            (11)
#define SOC_USBOTG_GHWCFG3_otg_adp_support_START  (12)
#define SOC_USBOTG_GHWCFG3_otg_adp_support_END    (12)
#define SOC_USBOTG_GHWCFG3_otg_enable_hsic_START  (13)
#define SOC_USBOTG_GHWCFG3_otg_enable_hsic_END    (13)
#define SOC_USBOTG_GHWCFG3_otg_bc_support_START   (14)
#define SOC_USBOTG_GHWCFG3_otg_bc_support_END     (14)
#define SOC_USBOTG_GHWCFG3_otg_enable_lpm_START   (15)
#define SOC_USBOTG_GHWCFG3_otg_enable_lpm_END     (15)
#define SOC_USBOTG_GHWCFG3_dfifodepth_START       (16)
#define SOC_USBOTG_GHWCFG3_dfifodepth_END         (31)


/*****************************************************************************
 �ṹ��    : SOC_USBOTG_GHWCFG4_UNION
 �ṹ˵��  : GHWCFG4 �Ĵ����ṹ���塣��ַƫ����:0x0050����ֵ:0xFFF08060�����:32
 �Ĵ���˵��: Ӳ�����üĴ���4��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  numdeveps     : 4;  /* bit[0-3]  : ֧������IN�˵�������������DedFifoMode��0ʱ��Ч�� */
        unsigned int  enablepwropt  : 1;  /* bit[4]    : �Ƿ�ʹ�ܹ����Ż���ʹ�ܹ����Ż���USBģ��ֳɵ�����Ͳ������򣬲��Ҽ���ʱ���ſ��߼���
                                                         0����ʹ�ܣ�
                                                         1��ʹ�ܡ� */
        unsigned int  ahbfreq       : 1;  /* bit[5]    : ��СAHBƵ���Ƿ�С��60MHz��
                                                         0�����ǣ�
                                                         1���ǡ� */
        unsigned int  enbhiber      : 1;  /* bit[6]    : ʹ�ܶ��߹��ܡ�
                                                         0�����߹��ܲ�ʹ�ܣ�
                                                         1�����߹���ʹ�ܡ� */
        unsigned int  reserved_0    : 7;  /* bit[7-13] : ������ */
        unsigned int  phydatawidth  : 2;  /* bit[14-15]: PHY�����߿�ȡ�
                                                         00��8bit��
                                                         01��16bit��
                                                         10�����������Ϊ8bit����16bit��
                                                         others��reserved�� */
        unsigned int  numctleps     : 4;  /* bit[16-19]: ���˶˵�0֮��֧�ֵĿ��ƶ˵���Ŀ�� */
        unsigned int  iddigfltr     : 1;  /* bit[20]   : �Ƿ�֧���ź�iddig��ë�̡�
                                                         0����֧�֣�
                                                         1��֧�֡� */
        unsigned int  vbusvalidfltr : 1;  /* bit[21]   : �Ƿ�֧���ź�vbus_valid��ë�̡�
                                                         0����֧�֣�
                                                         1��֧�֡� */
        unsigned int  avalidfltr    : 1;  /* bit[22]   : �Ƿ�֧���ź�avalid��ë�̡�
                                                         0����֧�֣�
                                                         1��֧�֡� */
        unsigned int  bvalidfltr    : 1;  /* bit[23]   : �Ƿ�֧���ź�bvalid��ë�̡�
                                                         0����֧�֣�
                                                         1��֧�֡� */
        unsigned int  sessendfltr   : 1;  /* bit[24]   : �Ƿ�֧���ź�session_end��ë�̡�
                                                         0����֧�֣�
                                                         1��֧�֡� */
        unsigned int  dedfifomode   : 1;  /* bit[25]   : �Ƿ�֧��IN�˵�ר�з���FIFO���ܡ�
                                                         0����֧�֣�
                                                         1��֧�֡� */
        unsigned int  ineps         : 4;  /* bit[26-29]: �������ƶ˵����ڣ�IN�˵����Ŀ��
                                                         0000��1����
                                                         0001��2����
                                                         ����
                                                         1111��16���� */
        unsigned int  sgdma         : 1;  /* bit[30]   : �Ƿ�֧��Scatter/Gather DMA��
                                                         0����֧�֣�
                                                         1��֧�֡� */
        unsigned int  reserved_1    : 1;  /* bit[31]   : ������ */
    } reg;
} SOC_USBOTG_GHWCFG4_UNION;
#endif
#define SOC_USBOTG_GHWCFG4_numdeveps_START      (0)
#define SOC_USBOTG_GHWCFG4_numdeveps_END        (3)
#define SOC_USBOTG_GHWCFG4_enablepwropt_START   (4)
#define SOC_USBOTG_GHWCFG4_enablepwropt_END     (4)
#define SOC_USBOTG_GHWCFG4_ahbfreq_START        (5)
#define SOC_USBOTG_GHWCFG4_ahbfreq_END          (5)
#define SOC_USBOTG_GHWCFG4_enbhiber_START       (6)
#define SOC_USBOTG_GHWCFG4_enbhiber_END         (6)
#define SOC_USBOTG_GHWCFG4_phydatawidth_START   (14)
#define SOC_USBOTG_GHWCFG4_phydatawidth_END     (15)
#define SOC_USBOTG_GHWCFG4_numctleps_START      (16)
#define SOC_USBOTG_GHWCFG4_numctleps_END        (19)
#define SOC_USBOTG_GHWCFG4_iddigfltr_START      (20)
#define SOC_USBOTG_GHWCFG4_iddigfltr_END        (20)
#define SOC_USBOTG_GHWCFG4_vbusvalidfltr_START  (21)
#define SOC_USBOTG_GHWCFG4_vbusvalidfltr_END    (21)
#define SOC_USBOTG_GHWCFG4_avalidfltr_START     (22)
#define SOC_USBOTG_GHWCFG4_avalidfltr_END       (22)
#define SOC_USBOTG_GHWCFG4_bvalidfltr_START     (23)
#define SOC_USBOTG_GHWCFG4_bvalidfltr_END       (23)
#define SOC_USBOTG_GHWCFG4_sessendfltr_START    (24)
#define SOC_USBOTG_GHWCFG4_sessendfltr_END      (24)
#define SOC_USBOTG_GHWCFG4_dedfifomode_START    (25)
#define SOC_USBOTG_GHWCFG4_dedfifomode_END      (25)
#define SOC_USBOTG_GHWCFG4_ineps_START          (26)
#define SOC_USBOTG_GHWCFG4_ineps_END            (29)
#define SOC_USBOTG_GHWCFG4_sgdma_START          (30)
#define SOC_USBOTG_GHWCFG4_sgdma_END            (30)


/*****************************************************************************
 �ṹ��    : SOC_USBOTG_GLPMCFG_UNION
 �ṹ˵��  : GLPMCFG �Ĵ����ṹ���塣��ַƫ����:0x0054����ֵ:0x00000000�����:32
 �Ĵ���˵��: LPM���üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  lpmcap           : 1;  /* bit[0]    : LPMʹ�ܡ�
                                                            0����ʹ�ܣ�
                                                            1��ʹ�ܡ� */
        unsigned int  appl1res         : 1;  /* bit[1]    : LPM��Ӧ���ã�����deviceģʽ��Ч����LPM����ʹ�ܡ����LPM��ʹ�ܣ���һֱ����NYET��
                                                            0��NYET��
                                                            1��ACK�� */
        unsigned int  hird             : 4;  /* bit[2-5]  : Resume����ʱ�䡣
                                                            ����hostģʽ������ɶ�д���������ΪLPM�������HIRDֵ��
                                                            ����deviceģʽ������ֻ�����յ�LPM��֮����������¸���
                                                            0000��50us��
                                                            0001��125us��
                                                            0010��250us��
                                                            0011��275us��
                                                            0100��350us��
                                                            0101��425us��
                                                            0110��500us��
                                                            0111��575us��
                                                            1000��650us��
                                                            1001��725us��
                                                            1010��800us��
                                                            1011��875us��
                                                            1100��950us��
                                                            1101��1025us��
                                                            1110��1100us��
                                                            1111��1175us�� */
        unsigned int  bremotewake      : 1;  /* bit[6]    : Զ�̻���ʹ�ܡ���device�յ�bRemoteWake LPM��ʱ��������¡�
                                                            0����ʹ�ܣ�
                                                            1��ʹ�ܡ� */
        unsigned int  enblslpm         : 1;  /* bit[7]    : ʹ��utmi_sleep_n�����Ĵ���L1״̬ʱ��������ø�bit��ʹutmi_sleep_n�ź���Ϊ��Ч��
                                                            0����ʹ�ܣ�
                                                            1��ʹ�ܡ� */
        unsigned int  hird_thres       : 5;  /* bit[8-12] : HIRDˮ�ߡ����bitΪʹ��λ����4bitΪˮ��ֵ��
                                                            ����deviceģʽ����HIRDʱ�䳬��ˮ��ֵʱ����������λSuspendM�ź�ʹPHY����͹���ģʽ��
                                                            0000��60us��
                                                            0001��135us��
                                                            0010��210us��
                                                            0011��285us��
                                                            0100��360us��
                                                            0101��435us��
                                                            0110��510us��
                                                            0111��585us��
                                                            1000��660us��
                                                            1001��735us��
                                                            1010��810us��
                                                            1011��885us��
                                                            1100��960us��
                                                            others��reserved�� */
        unsigned int  corel1res        : 2;  /* bit[13-14]: LPM��Ӧ��
                                                            ����hostģʽ��ָʾ���յ������ְ�������deviceģʽ�����յ�LPM��֮���ո��������ְ���
                                                            00��ERROR��
                                                            01��STALL��
                                                            10��NYET��
                                                            11��ACK�� */
        unsigned int  slpsts           : 1;  /* bit[15]   : sleep״ָ̬ʾ��
                                                            0��û�н���sleep״̬��
                                                            1������sleep״̬�� */
        unsigned int  l1resumeok       : 1;  /* bit[16]   : ָʾ�Ƿ���Դ�sleep״̬���ѡ�����sleep״̬50us֮�󣬸ñ�����λ��
                                                            0�������Դ�sleep״̬���ѣ�
                                                            1�����Դ�sleep״̬���ѡ� */
        unsigned int  lpm_chnl_index   : 4;  /* bit[17-20]: ����LPM��ͨ���ţ���hostģʽ��Ч�� */
        unsigned int  lpm_retry_cnt    : 3;  /* bit[21-23]: LPM Retry�������ã���hostģʽ��Ч��ָʾ�յ���Ч����Ӧ֮ǰ��host�������·���LPM�Ĵ����� */
        unsigned int  sndlpm           : 1;  /* bit[24]   : ����LPM���񣬶�hostģʽ��Ч��
                                                            ������ø�bit�����Ʒ�����չ���ư���LPM���ư������յ���Ч����Ӧ(STALL��NYET����ACK)֮��Ӳ�������bit��
                                                            0����ʹ�ܣ�
                                                            1��ʹ�ܡ� */
        unsigned int  lpm_retrycnt_sts : 3;  /* bit[25-27]: LPM retry״̬����hostģʽ��Ч��ָʾ��ǰLPM����ʣ���retry���� */
        unsigned int  enbesl           : 1;  /* bit[28]   : ʹ��LPM��BESL���� */
        unsigned int  rstrslpsts       : 1;  /* bit[29]   : �����豸ģʽ��Ч������BESL��ֵ��ʹ��LPM�ڵ���֮��ĵ�״̬�ָ� */
        unsigned int  hsiccon          : 1;  /* bit[30]   : ���ڳ�ʼ��HSIC���������� */
        unsigned int  invselhsic       : 1;  /* bit[31]   : ����HSICʹ��/ȥʹ�ܣ��Ը��źŵ���˼ȡ�� */
    } reg;
} SOC_USBOTG_GLPMCFG_UNION;
#endif
#define SOC_USBOTG_GLPMCFG_lpmcap_START            (0)
#define SOC_USBOTG_GLPMCFG_lpmcap_END              (0)
#define SOC_USBOTG_GLPMCFG_appl1res_START          (1)
#define SOC_USBOTG_GLPMCFG_appl1res_END            (1)
#define SOC_USBOTG_GLPMCFG_hird_START              (2)
#define SOC_USBOTG_GLPMCFG_hird_END                (5)
#define SOC_USBOTG_GLPMCFG_bremotewake_START       (6)
#define SOC_USBOTG_GLPMCFG_bremotewake_END         (6)
#define SOC_USBOTG_GLPMCFG_enblslpm_START          (7)
#define SOC_USBOTG_GLPMCFG_enblslpm_END            (7)
#define SOC_USBOTG_GLPMCFG_hird_thres_START        (8)
#define SOC_USBOTG_GLPMCFG_hird_thres_END          (12)
#define SOC_USBOTG_GLPMCFG_corel1res_START         (13)
#define SOC_USBOTG_GLPMCFG_corel1res_END           (14)
#define SOC_USBOTG_GLPMCFG_slpsts_START            (15)
#define SOC_USBOTG_GLPMCFG_slpsts_END              (15)
#define SOC_USBOTG_GLPMCFG_l1resumeok_START        (16)
#define SOC_USBOTG_GLPMCFG_l1resumeok_END          (16)
#define SOC_USBOTG_GLPMCFG_lpm_chnl_index_START    (17)
#define SOC_USBOTG_GLPMCFG_lpm_chnl_index_END      (20)
#define SOC_USBOTG_GLPMCFG_lpm_retry_cnt_START     (21)
#define SOC_USBOTG_GLPMCFG_lpm_retry_cnt_END       (23)
#define SOC_USBOTG_GLPMCFG_sndlpm_START            (24)
#define SOC_USBOTG_GLPMCFG_sndlpm_END              (24)
#define SOC_USBOTG_GLPMCFG_lpm_retrycnt_sts_START  (25)
#define SOC_USBOTG_GLPMCFG_lpm_retrycnt_sts_END    (27)
#define SOC_USBOTG_GLPMCFG_enbesl_START            (28)
#define SOC_USBOTG_GLPMCFG_enbesl_END              (28)
#define SOC_USBOTG_GLPMCFG_rstrslpsts_START        (29)
#define SOC_USBOTG_GLPMCFG_rstrslpsts_END          (29)
#define SOC_USBOTG_GLPMCFG_hsiccon_START           (30)
#define SOC_USBOTG_GLPMCFG_hsiccon_END             (30)
#define SOC_USBOTG_GLPMCFG_invselhsic_START        (31)
#define SOC_USBOTG_GLPMCFG_invselhsic_END          (31)


/*****************************************************************************
 �ṹ��    : SOC_USBOTG_GPWRDN_UNION
 �ṹ˵��  : GPWRDN �Ĵ����ṹ���塣��ַƫ����:0x0058����ֵ:0x00200010�����:32
 �Ĵ���˵��: ����ģʽ������ƼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pmuintsel           : 1;  /* bit[0]    : PMU�ж�ѡ�񡣸�bit����Ϊ1����PMU�������ж��ϱ����������������ж����Ρ�
                                                               0��ѡ��������������жϣ�
                                                               1��ѡ��PMU�������жϡ� */
        unsigned int  pmuactv             : 1;  /* bit[1]    : ʹ��PMU���ܡ�
                                                               0����ʹ�ܣ�
                                                               1��ʹ�ܡ� */
        unsigned int  restore             : 1;  /* bit[2]    : �Ĵ����ָ����ơ�
                                                               0����ʹ�ܣ�
                                                               1��ʹ�ܡ� */
        unsigned int  pwrdnclmp           : 1;  /* bit[3]    : ������λ���ơ�������ø�bit�ǿ�����������źŹ̶���ȷ����״̬��
                                                               0����ʹ�ܣ�
                                                               1��ʹ�ܡ� */
        unsigned int  pwrdnrst_n          : 1;  /* bit[4]    : ���縴λ���ơ����˳�����ģʽ����ADP�ϵ�֮ǰ������������ø�bit�Կ��������и�λ��
                                                               0����λ��������
                                                               1������λ�������� */
        unsigned int  pwrdnswtch          : 1;  /* bit[5]    : ���翪�ء�ָʾ��������Դ�ض�״̬��
                                                               0��ON��
                                                               1��OFF��
                                                               ����������״̬�²������ø�bit�� */
        unsigned int  vbusoff             : 1;  /* bit[6]    : ��Hostģʽ�£��ڽ��붬��ģʽ֮ǰ��
                                                               0��HPRT[PrtPwr]����û������Ϊ0��
                                                               1��HPRT[Prtpwr]����Ϊ0��
                                                               ��Deviceģʽ�£��ڶԿ���������֮ǰ��
                                                               0��bvalid��Ч��
                                                               1��bvalid��Ч��
                                                               ��bit����PMUActv��1��Ч�� */
        unsigned int  lnstschng           : 1;  /* bit[7]    : ���LineState�仯�жϡ�
                                                               0�����жϣ�
                                                               1���жϡ� */
        unsigned int  lnstschngmsk        : 1;  /* bit[8]    : LnStsChng�ж�����λ��
                                                               0�����Σ�
                                                               1�������Ρ� */
        unsigned int  resetdetected       : 1;  /* bit[9]    : ��⵽��λ�����жϣ���deviceģʽ��Ч��
                                                               0�����жϣ�
                                                               1�����жϡ� */
        unsigned int  resetdetmsk         : 1;  /* bit[10]   : ResetDetcted�ж�����λ����deviceģʽ��Ч��
                                                               0�����Σ�
                                                               1�������Ρ� */
        unsigned int  disconnectdetect    : 1;  /* bit[11]   : �Ͽ������жϣ���hostģʽ��Ч��
                                                               0�����жϣ�
                                                               1�����жϡ� */
        unsigned int  disconnectdetectmsk : 1;  /* bit[12]   : DisconnectDetect�ж�����λ����hostģʽ��Ч��
                                                               0�����Σ�
                                                               1�������Ρ� */
        unsigned int  connectdet          : 1;  /* bit[13]   : ��⵽�����жϡ�
                                                               0�����жϣ�
                                                               1�����жϡ� */
        unsigned int  conndetmsk          : 1;  /* bit[14]   : ConnectDet�ж�����λ��
                                                               0�����Σ�
                                                               1�������Ρ� */
        unsigned int  srpdetect           : 1;  /* bit[15]   : ��⵽SRP�жϡ���hostģʽ��Ч��
                                                               0�����жϣ�
                                                               1�����жϡ� */
        unsigned int  srpdetectmsk        : 1;  /* bit[16]   : SRPDetect�ж�����λ����hostģʽ��Ч��
                                                               0�������Σ�
                                                               1�����Ρ� */
        unsigned int  stschngint          : 1;  /* bit[17]   : StsChng�жϡ�ָʾIDDIG����bvalid״̬�仯��
                                                               0�����жϣ�
                                                               1�����жϡ� */
        unsigned int  stschngmsk          : 1;  /* bit[18]   : StsChng�ж�����λ��
                                                               0�����Σ�
                                                               1�������Ρ� */
        unsigned int  linestate           : 2;  /* bit[19-20]: ��ǰlinestate��
                                                               00��DM=0��DP=0��
                                                               01��DM=0��DP=1��
                                                               10��DM=1��DP=0��
                                                               11��reserved�� */
        unsigned int  iddig               : 1;  /* bit[21]   : IDDIG״̬����PMUActv��1��Ч��
                                                               0���͵�ƽ��
                                                               1���ߵ�ƽ�� */
        unsigned int  bsessvld            : 1;  /* bit[22]   : bvalid��Ч״̬����PMUActv��1��Ч��
                                                               0����Ч��
                                                               1����Ч�� */
        unsigned int  adpint              : 1;  /* bit[23]   : ADP�ж�״̬��
                                                               0�����жϣ�
                                                               1�����жϡ� */
        unsigned int  multvalidbc         : 5;  /* bit[24-28]: ��Baterry Charging��ACAģʽ������ID������ֵ��Χ��
                                                               00001��rid_c��ֵ��Χ��
                                                               00010��rid_b��ֵ��Χ��
                                                               00100��rid_a��ֵ��Χ��
                                                               01000��rid_gnd��ֵ��Χ��
                                                               10000��rid_float��ֵ��Χ��
                                                               others��reserved�� */
        unsigned int  reserved            : 3;  /* bit[29-31]: ������ */
    } reg;
} SOC_USBOTG_GPWRDN_UNION;
#endif
#define SOC_USBOTG_GPWRDN_pmuintsel_START            (0)
#define SOC_USBOTG_GPWRDN_pmuintsel_END              (0)
#define SOC_USBOTG_GPWRDN_pmuactv_START              (1)
#define SOC_USBOTG_GPWRDN_pmuactv_END                (1)
#define SOC_USBOTG_GPWRDN_restore_START              (2)
#define SOC_USBOTG_GPWRDN_restore_END                (2)
#define SOC_USBOTG_GPWRDN_pwrdnclmp_START            (3)
#define SOC_USBOTG_GPWRDN_pwrdnclmp_END              (3)
#define SOC_USBOTG_GPWRDN_pwrdnrst_n_START           (4)
#define SOC_USBOTG_GPWRDN_pwrdnrst_n_END             (4)
#define SOC_USBOTG_GPWRDN_pwrdnswtch_START           (5)
#define SOC_USBOTG_GPWRDN_pwrdnswtch_END             (5)
#define SOC_USBOTG_GPWRDN_vbusoff_START              (6)
#define SOC_USBOTG_GPWRDN_vbusoff_END                (6)
#define SOC_USBOTG_GPWRDN_lnstschng_START            (7)
#define SOC_USBOTG_GPWRDN_lnstschng_END              (7)
#define SOC_USBOTG_GPWRDN_lnstschngmsk_START         (8)
#define SOC_USBOTG_GPWRDN_lnstschngmsk_END           (8)
#define SOC_USBOTG_GPWRDN_resetdetected_START        (9)
#define SOC_USBOTG_GPWRDN_resetdetected_END          (9)
#define SOC_USBOTG_GPWRDN_resetdetmsk_START          (10)
#define SOC_USBOTG_GPWRDN_resetdetmsk_END            (10)
#define SOC_USBOTG_GPWRDN_disconnectdetect_START     (11)
#define SOC_USBOTG_GPWRDN_disconnectdetect_END       (11)
#define SOC_USBOTG_GPWRDN_disconnectdetectmsk_START  (12)
#define SOC_USBOTG_GPWRDN_disconnectdetectmsk_END    (12)
#define SOC_USBOTG_GPWRDN_connectdet_START           (13)
#define SOC_USBOTG_GPWRDN_connectdet_END             (13)
#define SOC_USBOTG_GPWRDN_conndetmsk_START           (14)
#define SOC_USBOTG_GPWRDN_conndetmsk_END             (14)
#define SOC_USBOTG_GPWRDN_srpdetect_START            (15)
#define SOC_USBOTG_GPWRDN_srpdetect_END              (15)
#define SOC_USBOTG_GPWRDN_srpdetectmsk_START         (16)
#define SOC_USBOTG_GPWRDN_srpdetectmsk_END           (16)
#define SOC_USBOTG_GPWRDN_stschngint_START           (17)
#define SOC_USBOTG_GPWRDN_stschngint_END             (17)
#define SOC_USBOTG_GPWRDN_stschngmsk_START           (18)
#define SOC_USBOTG_GPWRDN_stschngmsk_END             (18)
#define SOC_USBOTG_GPWRDN_linestate_START            (19)
#define SOC_USBOTG_GPWRDN_linestate_END              (20)
#define SOC_USBOTG_GPWRDN_iddig_START                (21)
#define SOC_USBOTG_GPWRDN_iddig_END                  (21)
#define SOC_USBOTG_GPWRDN_bsessvld_START             (22)
#define SOC_USBOTG_GPWRDN_bsessvld_END               (22)
#define SOC_USBOTG_GPWRDN_adpint_START               (23)
#define SOC_USBOTG_GPWRDN_adpint_END                 (23)
#define SOC_USBOTG_GPWRDN_multvalidbc_START          (24)
#define SOC_USBOTG_GPWRDN_multvalidbc_END            (28)


/*****************************************************************************
 �ṹ��    : SOC_USBOTG_GDFIFOCFG_UNION
 �ṹ˵��  : GDFIFOCFG �Ĵ����ṹ���塣��ַƫ����:0x005C����ֵ:0x0F801000�����:32
 �Ĵ���˵��: ��̬FIFO���üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  gdfifocfg      : 16; /* bit[0-15] : �ڲ�RAM��ȣ���4�ֽ�Ϊ��λ�� */
        unsigned int  epinfobaseaddr : 16; /* bit[16-31]: �������ڲ�RAM��ļĴ�����ʼ��ַ����4�ֽ�Ϊ��λ��ע���ⲿ�ֵ�ַ�ռ䲻������FIFO�ռ䣬���߼�Ҳû���������� */
    } reg;
} SOC_USBOTG_GDFIFOCFG_UNION;
#endif
#define SOC_USBOTG_GDFIFOCFG_gdfifocfg_START       (0)
#define SOC_USBOTG_GDFIFOCFG_gdfifocfg_END         (15)
#define SOC_USBOTG_GDFIFOCFG_epinfobaseaddr_START  (16)
#define SOC_USBOTG_GDFIFOCFG_epinfobaseaddr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_USBOTG_GADPCTL_UNION
 �ṹ˵��  : GADPCTL �Ĵ����ṹ���塣��ַƫ����:0x0060����ֵ:0x00000000�����:32
 �Ĵ���˵��: ADP���ƼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  prbdschng    : 2;  /* bit[0-1]  : Probe�����ŵ�ʱ�䡣
                                                        00��4���룻
                                                        01��8���룻
                                                        10��16���룻
                                                        11��32���롣 */
        unsigned int  prbdelta     : 2;  /* bit[2-3]  : RTIMʱ��̶ȡ�
                                                        00��1��ʱ�����ڣ�
                                                        01��2��ʱ�����ڣ�
                                                        10��3��ʱ�����ڣ�
                                                        11��4��ʱ�����ڡ� */
        unsigned int  prbper       : 2;  /* bit[4-5]  : Probe���ڡ�
                                                        00��0.625�뵽0.925�루����ֵ0.775�룩��
                                                        01��1.25�뵽1.85�루����ֵ1.55�룩��
                                                        10��1.9�뵽2.6�루����ֵ2.275�룩��
                                                        11��reserved�� */
        unsigned int  rtim         : 11; /* bit[6-16] : VBUS��Vadp_sink������Vadp_prb��ʱ�䡣��PrbDelta��ʾ��32KHzʱ������Ϊ��λ�� */
        unsigned int  enaprb       : 1;  /* bit[17]   : AdpPrbʹ�ܡ�
                                                        0����ʹ�ܣ�
                                                        1��ʹ�ܡ� */
        unsigned int  enasns       : 1;  /* bit[18]   : AdpSnsʹ�ܡ�
                                                        0����ʹ�ܣ�
                                                        1��ʹ�ܡ� */
        unsigned int  adpres       : 1;  /* bit[19]   : ADP��λ���ơ�
                                                        0������λ��
                                                        1����λ�� */
        unsigned int  adpen        : 1;  /* bit[20]   : ADPʹ�ܡ�
                                                        0����ʹ�ܣ�
                                                        1��ʹ�ܡ� */
        unsigned int  adpprbint    : 1;  /* bit[21]   : AdpPrb�жϡ���VBUS��ѹ����Vadpprb�������жϡ�
                                                        0�����жϣ�
                                                        1�����жϡ� */
        unsigned int  adpsnsint    : 1;  /* bit[22]   : AdpSns�жϡ���VBUS��ѹ����Vadpsns�������жϡ�
                                                        0�����жϣ�
                                                        1�����жϡ� */
        unsigned int  adptmoutint  : 1;  /* bit[23]   : ADP��ʱ�жϡ�
                                                        0�����жϣ�
                                                        1�����жϡ� */
        unsigned int  adpprbintmsk : 1;  /* bit[24]   : AdpPrb�ж�����λ��
                                                        0�����Σ�
                                                        1�������Ρ� */
        unsigned int  adpsnsintmsk : 1;  /* bit[25]   : AdpSns�ж�����λ��
                                                        0�����Σ�
                                                        1�������Ρ� */
        unsigned int  adptmoutmsk  : 1;  /* bit[26]   : ADP��ʱ�ж�����λ��
                                                        0�����Σ�
                                                        1�������Ρ� */
        unsigned int  ar           : 2;  /* bit[27-28]: ��д����
                                                        00��������Ч���������Զ����£�
                                                        01����������
                                                        10��д������
                                                        11�������� */
        unsigned int  reserved     : 3;  /* bit[29-31]: ������ */
    } reg;
} SOC_USBOTG_GADPCTL_UNION;
#endif
#define SOC_USBOTG_GADPCTL_prbdschng_START     (0)
#define SOC_USBOTG_GADPCTL_prbdschng_END       (1)
#define SOC_USBOTG_GADPCTL_prbdelta_START      (2)
#define SOC_USBOTG_GADPCTL_prbdelta_END        (3)
#define SOC_USBOTG_GADPCTL_prbper_START        (4)
#define SOC_USBOTG_GADPCTL_prbper_END          (5)
#define SOC_USBOTG_GADPCTL_rtim_START          (6)
#define SOC_USBOTG_GADPCTL_rtim_END            (16)
#define SOC_USBOTG_GADPCTL_enaprb_START        (17)
#define SOC_USBOTG_GADPCTL_enaprb_END          (17)
#define SOC_USBOTG_GADPCTL_enasns_START        (18)
#define SOC_USBOTG_GADPCTL_enasns_END          (18)
#define SOC_USBOTG_GADPCTL_adpres_START        (19)
#define SOC_USBOTG_GADPCTL_adpres_END          (19)
#define SOC_USBOTG_GADPCTL_adpen_START         (20)
#define SOC_USBOTG_GADPCTL_adpen_END           (20)
#define SOC_USBOTG_GADPCTL_adpprbint_START     (21)
#define SOC_USBOTG_GADPCTL_adpprbint_END       (21)
#define SOC_USBOTG_GADPCTL_adpsnsint_START     (22)
#define SOC_USBOTG_GADPCTL_adpsnsint_END       (22)
#define SOC_USBOTG_GADPCTL_adptmoutint_START   (23)
#define SOC_USBOTG_GADPCTL_adptmoutint_END     (23)
#define SOC_USBOTG_GADPCTL_adpprbintmsk_START  (24)
#define SOC_USBOTG_GADPCTL_adpprbintmsk_END    (24)
#define SOC_USBOTG_GADPCTL_adpsnsintmsk_START  (25)
#define SOC_USBOTG_GADPCTL_adpsnsintmsk_END    (25)
#define SOC_USBOTG_GADPCTL_adptmoutmsk_START   (26)
#define SOC_USBOTG_GADPCTL_adptmoutmsk_END     (26)
#define SOC_USBOTG_GADPCTL_ar_START            (27)
#define SOC_USBOTG_GADPCTL_ar_END              (28)


/*****************************************************************************
 �ṹ��    : SOC_USBOTG_HPTXFSIZ_UNION
 �ṹ˵��  : HPTXFSIZ �Ĵ����ṹ���塣��ַƫ����:0x0100����ֵ:0x00000000�����:32
 �Ĵ���˵��: Host���ڷ���FIFO���üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ptxfstaddr : 16; /* bit[0-15] : Host���ڷ���FIFO��ʼ��ַ����4�ֽ�Ϊ��λ�� */
        unsigned int  ptxfsize   : 16; /* bit[16-31]: Host���ڷ���FIFO��ȣ���4�ֽ�Ϊ��λ�� */
    } reg;
} SOC_USBOTG_HPTXFSIZ_UNION;
#endif
#define SOC_USBOTG_HPTXFSIZ_ptxfstaddr_START  (0)
#define SOC_USBOTG_HPTXFSIZ_ptxfstaddr_END    (15)
#define SOC_USBOTG_HPTXFSIZ_ptxfsize_START    (16)
#define SOC_USBOTG_HPTXFSIZ_ptxfsize_END      (31)


/*****************************************************************************
 �ṹ��    : SOC_USBOTG_DIEPTXF1_UNION
 �ṹ˵��  : DIEPTXF1 �Ĵ����ṹ���塣��ַƫ����:0x0104����ֵ:0x10002000�����:32
 �Ĵ���˵��: Device IN�˵�1����FIFO���üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  inepntxfstaddr : 16; /* bit[0-15] : IN�˵㷢��FIFO��ʼ��ַ����4�ֽ�Ϊ��λ�� */
        unsigned int  inepntxfdep    : 16; /* bit[16-31]: IN�˵㷢��FIFO��ȣ���4�ֽ�Ϊ��λ�� */
    } reg;
} SOC_USBOTG_DIEPTXF1_UNION;
#endif
#define SOC_USBOTG_DIEPTXF1_inepntxfstaddr_START  (0)
#define SOC_USBOTG_DIEPTXF1_inepntxfstaddr_END    (15)
#define SOC_USBOTG_DIEPTXF1_inepntxfdep_START     (16)
#define SOC_USBOTG_DIEPTXF1_inepntxfdep_END       (31)


/*****************************************************************************
 �ṹ��    : SOC_USBOTG_DIEPTXF2_UNION
 �ṹ˵��  : DIEPTXF2 �Ĵ����ṹ���塣��ַƫ����:0x0108����ֵ:0x10003000�����:32
 �Ĵ���˵��: Device IN�˵�2����FIFO���üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  inepntxfstaddr : 16; /* bit[0-15] : IN�˵㷢��FIFO��ʼ��ַ����4�ֽ�Ϊ��λ�� */
        unsigned int  inepntxfdep    : 16; /* bit[16-31]: IN�˵㷢��FIFO��ȣ���4�ֽ�Ϊ��λ�� */
    } reg;
} SOC_USBOTG_DIEPTXF2_UNION;
#endif
#define SOC_USBOTG_DIEPTXF2_inepntxfstaddr_START  (0)
#define SOC_USBOTG_DIEPTXF2_inepntxfstaddr_END    (15)
#define SOC_USBOTG_DIEPTXF2_inepntxfdep_START     (16)
#define SOC_USBOTG_DIEPTXF2_inepntxfdep_END       (31)


/*****************************************************************************
 �ṹ��    : SOC_USBOTG_DIEPTXF3_UNION
 �ṹ˵��  : DIEPTXF3 �Ĵ����ṹ���塣��ַƫ����:0x010C����ֵ:0x10004000�����:32
 �Ĵ���˵��: Device IN�˵�3����FIFO���üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  inepntxfstaddr : 16; /* bit[0-15] : IN�˵㷢��FIFO��ʼ��ַ����4�ֽ�Ϊ��λ�� */
        unsigned int  inepntxfdep    : 16; /* bit[16-31]: IN�˵㷢��FIFO��ȣ���4�ֽ�Ϊ��λ�� */
    } reg;
} SOC_USBOTG_DIEPTXF3_UNION;
#endif
#define SOC_USBOTG_DIEPTXF3_inepntxfstaddr_START  (0)
#define SOC_USBOTG_DIEPTXF3_inepntxfstaddr_END    (15)
#define SOC_USBOTG_DIEPTXF3_inepntxfdep_START     (16)
#define SOC_USBOTG_DIEPTXF3_inepntxfdep_END       (31)


/*****************************************************************************
 �ṹ��    : SOC_USBOTG_DIEPTXF4_UNION
 �ṹ˵��  : DIEPTXF4 �Ĵ����ṹ���塣��ַƫ����:0x0110����ֵ:0x10005000�����:32
 �Ĵ���˵��: Device IN�˵�4����FIFO���üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  inepntxfstaddr : 16; /* bit[0-15] : IN�˵㷢��FIFO��ʼ��ַ����4�ֽ�Ϊ��λ�� */
        unsigned int  inepntxfdep    : 16; /* bit[16-31]: IN�˵㷢��FIFO��ȣ���4�ֽ�Ϊ��λ�� */
    } reg;
} SOC_USBOTG_DIEPTXF4_UNION;
#endif
#define SOC_USBOTG_DIEPTXF4_inepntxfstaddr_START  (0)
#define SOC_USBOTG_DIEPTXF4_inepntxfstaddr_END    (15)
#define SOC_USBOTG_DIEPTXF4_inepntxfdep_START     (16)
#define SOC_USBOTG_DIEPTXF4_inepntxfdep_END       (31)


/*****************************************************************************
 �ṹ��    : SOC_USBOTG_DIEPTXF5_UNION
 �ṹ˵��  : DIEPTXF5 �Ĵ����ṹ���塣��ַƫ����:0x0114����ֵ:0x10006000�����:32
 �Ĵ���˵��: Device IN�˵�5����FIFO���üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  inepntxfstaddr : 16; /* bit[0-15] : IN�˵㷢��FIFO��ʼ��ַ����4�ֽ�Ϊ��λ�� */
        unsigned int  inepntxfdep    : 16; /* bit[16-31]: IN�˵㷢��FIFO��ȣ���4�ֽ�Ϊ��λ�� */
    } reg;
} SOC_USBOTG_DIEPTXF5_UNION;
#endif
#define SOC_USBOTG_DIEPTXF5_inepntxfstaddr_START  (0)
#define SOC_USBOTG_DIEPTXF5_inepntxfstaddr_END    (15)
#define SOC_USBOTG_DIEPTXF5_inepntxfdep_START     (16)
#define SOC_USBOTG_DIEPTXF5_inepntxfdep_END       (31)


/*****************************************************************************
 �ṹ��    : SOC_USBOTG_DIEPTXF6_UNION
 �ṹ˵��  : DIEPTXF6 �Ĵ����ṹ���塣��ַƫ����:0x0118����ֵ:0x10007000�����:32
 �Ĵ���˵��: Device IN�˵�6����FIFO���üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  inepntxfstaddr : 16; /* bit[0-15] : IN�˵㷢��FIFO��ʼ��ַ����4�ֽ�Ϊ��λ�� */
        unsigned int  inepntxfdep    : 16; /* bit[16-31]: IN�˵㷢��FIFO��ȣ���4�ֽ�Ϊ��λ�� */
    } reg;
} SOC_USBOTG_DIEPTXF6_UNION;
#endif
#define SOC_USBOTG_DIEPTXF6_inepntxfstaddr_START  (0)
#define SOC_USBOTG_DIEPTXF6_inepntxfstaddr_END    (15)
#define SOC_USBOTG_DIEPTXF6_inepntxfdep_START     (16)
#define SOC_USBOTG_DIEPTXF6_inepntxfdep_END       (31)


/*****************************************************************************
 �ṹ��    : SOC_USBOTG_DIEPTXF7_UNION
 �ṹ˵��  : DIEPTXF7 �Ĵ����ṹ���塣��ַƫ����:0x011C����ֵ:0x10008000�����:32
 �Ĵ���˵��: Device IN�˵�7����FIFO���üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  inepntxfstaddr : 16; /* bit[0-15] : IN�˵㷢��FIFO��ʼ��ַ����4�ֽ�Ϊ��λ�� */
        unsigned int  inepntxfdep    : 16; /* bit[16-31]: IN�˵㷢��FIFO��ȣ���4�ֽ�Ϊ��λ�� */
    } reg;
} SOC_USBOTG_DIEPTXF7_UNION;
#endif
#define SOC_USBOTG_DIEPTXF7_inepntxfstaddr_START  (0)
#define SOC_USBOTG_DIEPTXF7_inepntxfstaddr_END    (15)
#define SOC_USBOTG_DIEPTXF7_inepntxfdep_START     (16)
#define SOC_USBOTG_DIEPTXF7_inepntxfdep_END       (31)


/*****************************************************************************
 �ṹ��    : SOC_USBOTG_DIEPTXF8_UNION
 �ṹ˵��  : DIEPTXF8 �Ĵ����ṹ���塣��ַƫ����:0x0120����ֵ:0x10009000�����:32
 �Ĵ���˵��: Device IN�˵�8����FIFO���üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  inepntxfstaddr : 16; /* bit[0-15] : IN�˵㷢��FIFO��ʼ��ַ����4�ֽ�Ϊ��λ�� */
        unsigned int  inepntxfdep    : 16; /* bit[16-31]: IN�˵㷢��FIFO��ȣ���4�ֽ�Ϊ��λ�� */
    } reg;
} SOC_USBOTG_DIEPTXF8_UNION;
#endif
#define SOC_USBOTG_DIEPTXF8_inepntxfstaddr_START  (0)
#define SOC_USBOTG_DIEPTXF8_inepntxfstaddr_END    (15)
#define SOC_USBOTG_DIEPTXF8_inepntxfdep_START     (16)
#define SOC_USBOTG_DIEPTXF8_inepntxfdep_END       (31)


/*****************************************************************************
 �ṹ��    : SOC_USBOTG_DIEPTXF9_UNION
 �ṹ˵��  : DIEPTXF9 �Ĵ����ṹ���塣��ַƫ����:0x0124����ֵ:0x1000A000�����:32
 �Ĵ���˵��: Device IN�˵�9����FIFO���üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  inepntxfstaddr : 16; /* bit[0-15] : IN�˵㷢��FIFO��ʼ��ַ����4�ֽ�Ϊ��λ�� */
        unsigned int  inepntxfdep    : 16; /* bit[16-31]: IN�˵㷢��FIFO��ȣ���4�ֽ�Ϊ��λ�� */
    } reg;
} SOC_USBOTG_DIEPTXF9_UNION;
#endif
#define SOC_USBOTG_DIEPTXF9_inepntxfstaddr_START  (0)
#define SOC_USBOTG_DIEPTXF9_inepntxfstaddr_END    (15)
#define SOC_USBOTG_DIEPTXF9_inepntxfdep_START     (16)
#define SOC_USBOTG_DIEPTXF9_inepntxfdep_END       (31)


/*****************************************************************************
 �ṹ��    : SOC_USBOTG_DIEPTXF10_UNION
 �ṹ˵��  : DIEPTXF10 �Ĵ����ṹ���塣��ַƫ����:0x0128����ֵ:0x1000B000�����:32
 �Ĵ���˵��: Device IN�˵�10����FIFO���üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  inepntxfstaddr : 16; /* bit[0-15] : IN�˵㷢��FIFO��ʼ��ַ����4�ֽ�Ϊ��λ�� */
        unsigned int  inepntxfdep    : 16; /* bit[16-31]: IN�˵㷢��FIFO��ȣ���4�ֽ�Ϊ��λ�� */
    } reg;
} SOC_USBOTG_DIEPTXF10_UNION;
#endif
#define SOC_USBOTG_DIEPTXF10_inepntxfstaddr_START  (0)
#define SOC_USBOTG_DIEPTXF10_inepntxfstaddr_END    (15)
#define SOC_USBOTG_DIEPTXF10_inepntxfdep_START     (16)
#define SOC_USBOTG_DIEPTXF10_inepntxfdep_END       (31)


/*****************************************************************************
 �ṹ��    : SOC_USBOTG_DIEPTXF11_UNION
 �ṹ˵��  : DIEPTXF11 �Ĵ����ṹ���塣��ַƫ����:0x012C����ֵ:0x1000C000�����:32
 �Ĵ���˵��: Device IN�˵�11����FIFO���üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  inepntxfstaddr : 16; /* bit[0-15] : IN�˵㷢��FIFO��ʼ��ַ����4�ֽ�Ϊ��λ�� */
        unsigned int  inepntxfdep    : 16; /* bit[16-31]: IN�˵㷢��FIFO��ȣ���4�ֽ�Ϊ��λ�� */
    } reg;
} SOC_USBOTG_DIEPTXF11_UNION;
#endif
#define SOC_USBOTG_DIEPTXF11_inepntxfstaddr_START  (0)
#define SOC_USBOTG_DIEPTXF11_inepntxfstaddr_END    (15)
#define SOC_USBOTG_DIEPTXF11_inepntxfdep_START     (16)
#define SOC_USBOTG_DIEPTXF11_inepntxfdep_END       (31)


/*****************************************************************************
 �ṹ��    : SOC_USBOTG_DIEPTXF12_UNION
 �ṹ˵��  : DIEPTXF12 �Ĵ����ṹ���塣��ַƫ����:0x0130����ֵ:0x1000D000�����:32
 �Ĵ���˵��: Device IN�˵�12����FIFO���üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  inepntxfstaddr : 16; /* bit[0-15] : IN�˵㷢��FIFO��ʼ��ַ����4�ֽ�Ϊ��λ�� */
        unsigned int  inepntxfdep    : 16; /* bit[16-31]: IN�˵㷢��FIFO��ȣ���4�ֽ�Ϊ��λ�� */
    } reg;
} SOC_USBOTG_DIEPTXF12_UNION;
#endif
#define SOC_USBOTG_DIEPTXF12_inepntxfstaddr_START  (0)
#define SOC_USBOTG_DIEPTXF12_inepntxfstaddr_END    (15)
#define SOC_USBOTG_DIEPTXF12_inepntxfdep_START     (16)
#define SOC_USBOTG_DIEPTXF12_inepntxfdep_END       (31)


/*****************************************************************************
 �ṹ��    : SOC_USBOTG_DIEPTXF13_UNION
 �ṹ˵��  : DIEPTXF13 �Ĵ����ṹ���塣��ַƫ����:0x0134����ֵ:0x1000E000�����:32
 �Ĵ���˵��: Device IN�˵�13����FIFO���üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  inepntxfstaddr : 16; /* bit[0-15] : IN�˵㷢��FIFO��ʼ��ַ����4�ֽ�Ϊ��λ�� */
        unsigned int  inepntxfdep    : 16; /* bit[16-31]: IN�˵㷢��FIFO��ȣ���4�ֽ�Ϊ��λ�� */
    } reg;
} SOC_USBOTG_DIEPTXF13_UNION;
#endif
#define SOC_USBOTG_DIEPTXF13_inepntxfstaddr_START  (0)
#define SOC_USBOTG_DIEPTXF13_inepntxfstaddr_END    (15)
#define SOC_USBOTG_DIEPTXF13_inepntxfdep_START     (16)
#define SOC_USBOTG_DIEPTXF13_inepntxfdep_END       (31)


/*****************************************************************************
 �ṹ��    : SOC_USBOTG_DIEPTXF14_UNION
 �ṹ˵��  : DIEPTXF14 �Ĵ����ṹ���塣��ַƫ����:0x0138����ֵ:0x1000F000�����:32
 �Ĵ���˵��: Device IN�˵�14����FIFO���üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  inepntxfstaddr : 16; /* bit[0-15] : IN�˵㷢��FIFO��ʼ��ַ����4�ֽ�Ϊ��λ�� */
        unsigned int  inepntxfdep    : 16; /* bit[16-31]: IN�˵㷢��FIFO��ȣ���4�ֽ�Ϊ��λ�� */
    } reg;
} SOC_USBOTG_DIEPTXF14_UNION;
#endif
#define SOC_USBOTG_DIEPTXF14_inepntxfstaddr_START  (0)
#define SOC_USBOTG_DIEPTXF14_inepntxfstaddr_END    (15)
#define SOC_USBOTG_DIEPTXF14_inepntxfdep_START     (16)
#define SOC_USBOTG_DIEPTXF14_inepntxfdep_END       (31)


/*****************************************************************************
 �ṹ��    : SOC_USBOTG_DIEPTXF15_UNION
 �ṹ˵��  : DIEPTXF15 �Ĵ����ṹ���塣��ַƫ����:0x013C����ֵ:0x10000000�����:32
 �Ĵ���˵��: Device IN�˵�15����FIFO���üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  inepntxfstaddr : 16; /* bit[0-15] : IN�˵㷢��FIFO��ʼ��ַ����4�ֽ�Ϊ��λ�� */
        unsigned int  inepntxfdep    : 16; /* bit[16-31]: IN�˵㷢��FIFO��ȣ���4�ֽ�Ϊ��λ�� */
    } reg;
} SOC_USBOTG_DIEPTXF15_UNION;
#endif
#define SOC_USBOTG_DIEPTXF15_inepntxfstaddr_START  (0)
#define SOC_USBOTG_DIEPTXF15_inepntxfstaddr_END    (15)
#define SOC_USBOTG_DIEPTXF15_inepntxfdep_START     (16)
#define SOC_USBOTG_DIEPTXF15_inepntxfdep_END       (31)


/*****************************************************************************
 �ṹ��    : SOC_USBOTG_HCFG_UNION
 �ṹ˵��  : HCFG �Ĵ����ṹ���塣��ַƫ����:0x0400����ֵ:0x00000200�����:32
 �Ĵ���˵��: Host���üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  fslspclksel : 2;  /* bit[0-1]  : FS/LS PHY�ӿ�ʱ��ѡ��
                                                       00��30/60MHz��
                                                       01��48MHz��
                                                       others��reserved�� */
        unsigned int  fslssupp    : 1;  /* bit[2]    : ��֧��FS��LSʹ�ܡ�
                                                       ����ö���ٶȡ���bitʹ�ܣ���ʹdevice֧��HS��������Ҳ��ö�ٳ�FS Host��
                                                       0����ʹ�ܣ�
                                                       1��ʹ�ܡ� */
        unsigned int  reserved_0  : 4;  /* bit[3-6]  : ������ */
        unsigned int  ena32khzs   : 1;  /* bit[7]    : ʹ��32KHz suspendģʽ����bit��������Ϊ0����֧��32KHz suspendģʽ��
                                                       0����ʹ�ܣ�
                                                       1��ʹ�ܡ� */
        unsigned int  resvalid    : 8;  /* bit[8-15] : Resume��Ч���ȡ�
                                                       ����HCFG[Ena32KHz]����Ϊ1��Ч�����������resume�źţ�����ResValid��ʱ��������Ϊresume��Ч�� */
        unsigned int  reserved_1  : 7;  /* bit[16-22]: ������ */
        unsigned int  descdma     : 1;  /* bit[23]   : ʹ��Scatter/Gather DMAģʽ��
                                                       0����ʹ�ܣ�
                                                       1��ʹ�ܡ� */
        unsigned int  frlisten    : 2;  /* bit[24-25]: ֡�б��С������Scatter/Gather DMAģʽ��Ч��
                                                       00��8��
                                                       01��16��
                                                       10��32��
                                                       11��64�� */
        unsigned int  perschedena : 1;  /* bit[26]   : ʹ�����ڴ��䡣����Scatter/Gather DMAģʽ��Ч��
                                                       0����ʹ�ܣ�
                                                       1��ʹ�ܡ� */
        unsigned int  resered     : 4;  /* bit[27-30]: ������ */
        unsigned int  modechtimen : 1;  /* bit[31]   : ģʽ�ı����ʹ�ܡ�
                                                       ʹ��Host��������Resume�����ȴ�200��PHYʱ�����ڣ�Ȼ��opmode�źŸı�Ϊ00��
                                                       0���ȴ�200��PHYʱ�����ڻ��ߵȴ�linestate���SE0��
                                                       1���ȴ�linestate���SE0�� */
    } reg;
} SOC_USBOTG_HCFG_UNION;
#endif
#define SOC_USBOTG_HCFG_fslspclksel_START  (0)
#define SOC_USBOTG_HCFG_fslspclksel_END    (1)
#define SOC_USBOTG_HCFG_fslssupp_START     (2)
#define SOC_USBOTG_HCFG_fslssupp_END       (2)
#define SOC_USBOTG_HCFG_ena32khzs_START    (7)
#define SOC_USBOTG_HCFG_ena32khzs_END      (7)
#define SOC_USBOTG_HCFG_resvalid_START     (8)
#define SOC_USBOTG_HCFG_resvalid_END       (15)
#define SOC_USBOTG_HCFG_descdma_START      (23)
#define SOC_USBOTG_HCFG_descdma_END        (23)
#define SOC_USBOTG_HCFG_frlisten_START     (24)
#define SOC_USBOTG_HCFG_frlisten_END       (25)
#define SOC_USBOTG_HCFG_perschedena_START  (26)
#define SOC_USBOTG_HCFG_perschedena_END    (26)
#define SOC_USBOTG_HCFG_resered_START      (27)
#define SOC_USBOTG_HCFG_resered_END        (30)
#define SOC_USBOTG_HCFG_modechtimen_START  (31)
#define SOC_USBOTG_HCFG_modechtimen_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_USBOTG_HFIR_UNION
 �ṹ˵��  : HFIR �Ĵ����ṹ���塣��ַƫ����:0x0404����ֵ:0x0000EA06�����:32
 �Ĵ���˵��: Host֡����Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  frint       : 16; /* bit[0-15] : ֡�������PHY�ӿ�ʱ������Ϊ��λ��Host���FrInt��ʱ�����ڷ���1��SOF������HS����Ҫ���õļ������Ϊ125us������FS/LS��Ҫ���õļ������Ϊ1ms���û������ڳ�ʼ��ʱ���á� */
        unsigned int  hfirrldctrl : 1;  /* bit[16]   : ���¼��ؼ��������������üĴ����ڳ�ʼ��ʱ���á�
                                                       0��FrInt�����������Զ����أ�
                                                       1��FrInt���������Զ����ء� */
        unsigned int  reserved    : 15; /* bit[17-31]: ������ */
    } reg;
} SOC_USBOTG_HFIR_UNION;
#endif
#define SOC_USBOTG_HFIR_frint_START        (0)
#define SOC_USBOTG_HFIR_frint_END          (15)
#define SOC_USBOTG_HFIR_hfirrldctrl_START  (16)
#define SOC_USBOTG_HFIR_hfirrldctrl_END    (16)


/*****************************************************************************
 �ṹ��    : SOC_USBOTG_HFNUM_UNION
 �ṹ˵��  : HFNUM �Ĵ����ṹ���塣��ַƫ����:0x0408����ֵ:0x00003FFF�����:32
 �Ĵ���˵��: Host֡��żĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  frnum : 16; /* bit[0-15] : ֡��š� */
        unsigned int  frrem : 16; /* bit[16-31]: ֡ʣ��ʱ�����������FrInt��ʼ��������һֱ��0���¿�ʼ������ */
    } reg;
} SOC_USBOTG_HFNUM_UNION;
#endif
#define SOC_USBOTG_HFNUM_frnum_START  (0)
#define SOC_USBOTG_HFNUM_frnum_END    (15)
#define SOC_USBOTG_HFNUM_frrem_START  (16)
#define SOC_USBOTG_HFNUM_frrem_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_USBOTG_HPTXSTS_UNION
 �ṹ˵��  : HPTXSTS �Ĵ����ṹ���塣��ַƫ����:0x0410����ֵ:0x00081000�����:32
 �Ĵ���˵��: Host���ڷ���FIFO�Ͷ���״̬�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ptxspcavail  : 16; /* bit[0-15] : ���ڷ���FIFOʣ��ռ䣬��4�ֽ�Ϊ��λ�� */
        unsigned int  ptxqspcavail : 8;  /* bit[16-23]: ���ڷ����������ʣ��ռ䡣
                                                        ���ڷ�������������Ϊ8������ָʾ����������л����Ի��漸���������� */
        unsigned int  ptxqtop      : 8;  /* bit[24-31]: ���ڷ���������е�ǰ��������debug�� */
    } reg;
} SOC_USBOTG_HPTXSTS_UNION;
#endif
#define SOC_USBOTG_HPTXSTS_ptxspcavail_START   (0)
#define SOC_USBOTG_HPTXSTS_ptxspcavail_END     (15)
#define SOC_USBOTG_HPTXSTS_ptxqspcavail_START  (16)
#define SOC_USBOTG_HPTXSTS_ptxqspcavail_END    (23)
#define SOC_USBOTG_HPTXSTS_ptxqtop_START       (24)
#define SOC_USBOTG_HPTXSTS_ptxqtop_END         (31)


/*****************************************************************************
 �ṹ��    : SOC_USBOTG_HAINT_UNION
 �ṹ˵��  : HAINT �Ĵ����ṹ���塣��ַƫ����:0x0414����ֵ:0x00000000�����:32
 �Ĵ���˵��: Host����ͨ���ж�״̬�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  haint    : 16; /* bit[0-15] : ͨ���ж�״̬��
                                                    Bit0��Ӧͨ��0��bit15��Ӧͨ��15��
                                                    0�����жϣ�
                                                    1�����жϡ� */
        unsigned int  reserved : 16; /* bit[16-31]: ������ */
    } reg;
} SOC_USBOTG_HAINT_UNION;
#endif
#define SOC_USBOTG_HAINT_haint_START     (0)
#define SOC_USBOTG_HAINT_haint_END       (15)


/*****************************************************************************
 �ṹ��    : SOC_USBOTG_HAINTMSK_UNION
 �ṹ˵��  : HAINTMSK �Ĵ����ṹ���塣��ַƫ����:0x0418����ֵ:0x00000000�����:32
 �Ĵ���˵��: Host����ͨ���ж����μĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  haintmsk : 16; /* bit[0-15] : ͨ���ж����Ρ�
                                                    Bit0��Ӧͨ��0��bit15��Ӧͨ��15��
                                                    0�����Ρ�
                                                    1�������Ρ� */
        unsigned int  reserved : 16; /* bit[16-31]: ������ */
    } reg;
} SOC_USBOTG_HAINTMSK_UNION;
#endif
#define SOC_USBOTG_HAINTMSK_haintmsk_START  (0)
#define SOC_USBOTG_HAINTMSK_haintmsk_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_USBOTG_HFLBADDR_UNION
 �ṹ˵��  : HFLBADDR �Ĵ����ṹ���塣��ַƫ����:0x041C����ֵ:0x00000000�����:32
 �Ĵ���˵��: ֡�б����ַ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  hflbaddr : 32; /* bit[0-31]: ֡�б����ַ����scatter/gather DMAģʽ��Ч�� */
    } reg;
} SOC_USBOTG_HFLBADDR_UNION;
#endif
#define SOC_USBOTG_HFLBADDR_hflbaddr_START  (0)
#define SOC_USBOTG_HFLBADDR_hflbaddr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_USBOTG_HPRT_UNION
 �ṹ˵��  : HPRT �Ĵ����ṹ���塣��ַƫ����:0x0440����ֵ:0x00000000�����:32
 �Ĵ���˵��: Host�˿ڿ��ƺ�״̬�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  prtconnsts     : 1;  /* bit[0]    : �˿�����״̬��
                                                          0��û��devie���ӵ��˿ڣ�
                                                          1����device���ӵ��˿ڡ� */
        unsigned int  prtconndet     : 1;  /* bit[1]    : ��⵽�˿������жϡ��������д1�����bit��
                                                          0�����жϣ�
                                                          1�����жϡ� */
        unsigned int  prtena         : 1;  /* bit[2]    : �˿�ʹ�ܡ�
                                                          ��λ���֮�󣬶˿ڱ�������ʹ�ܡ��������Ͽ����ӻ���������������bit��
                                                          0����ʹ�ܣ�
                                                          1��ʹ�ܡ� */
        unsigned int  prtenchng      : 1;  /* bit[3]    : �˿�ʹ��״̬�仯��
                                                          0���ޱ仯��
                                                          1���б仯�� */
        unsigned int  prtovrcurract  : 1;  /* bit[4]    : �˿ڹ���״ָ̬ʾ��
                                                          0����������
                                                          1�������� */
        unsigned int  prtovrcurrchng : 1;  /* bit[5]    : ����״̬�仯��ָʾPrtOvrCurrAct״̬�����仯��
                                                          0���ޱ仯��
                                                          1���б仯�� */
        unsigned int  prtres         : 1;  /* bit[6]    : �˿�resume���ơ������ڶ˿ڷ���resume�źš�
                                                          0����resumne��
                                                          1��resume�� */
        unsigned int  prtsusp        : 1;  /* bit[7]    : �˿�suspend���ơ����ƶ˿ڽ���suspend״̬��
                                                          0��������suspend״̬��
                                                          1������suspend״̬�� */
        unsigned int  prtrst         : 1;  /* bit[8]    : �˿ڸ�λ���ơ�
                                                          ���ø�bit���������ڶ˿��Ϸ�����λ���С����������㸴λʱ��ĳ��ȣ����ڸ�λ���֮�������bit������HighSpeed�豸����λ���뱣��50ms������FullSpeed��LowSpeed�豸����λ���뱣��10ms��
                                                          0������λ��
                                                          1����λ�� */
        unsigned int  reserved_0     : 1;  /* bit[9]    : ������ */
        unsigned int  prtlnsts       : 2;  /* bit[10-11]: USB����״̬��
                                                          bit[10]��D+���߼���ƽ��
                                                          bit[11]��D-���߼���ƽ�� */
        unsigned int  prtpwr         : 1;  /* bit[12]   : �˿ڹ��Ŀ��ơ����ֹ���������£��������Զ������bit��
                                                          0���ضϵ�Դ��
                                                          1���򿪵�Դ�� */
        unsigned int  prttstctl      : 4;  /* bit[13-16]: �˿ڲ���ģʽ���ơ�
                                                          0000������ģʽ��ʹ�ܣ�
                                                          0001��Test_Jģʽ��
                                                          0010��Test_Kģʽ��
                                                          0011��Test_SE0_NAKģʽ��
                                                          0100��Test_Packetģʽ��
                                                          0101��Test_Force_Enable��
                                                          others��reserved�� */
        unsigned int  prtspd         : 2;  /* bit[17-18]: �˿��ٶȡ�
                                                          ָʾ�����ڸö˿��ϵ�device�ٶȡ�
                                                          00��High Speed��
                                                          01��Full Speed��
                                                          10��Low Speed��
                                                          11��reserved�� */
        unsigned int  reserved_1     : 13; /* bit[19-31]: ������ */
    } reg;
} SOC_USBOTG_HPRT_UNION;
#endif
#define SOC_USBOTG_HPRT_prtconnsts_START      (0)
#define SOC_USBOTG_HPRT_prtconnsts_END        (0)
#define SOC_USBOTG_HPRT_prtconndet_START      (1)
#define SOC_USBOTG_HPRT_prtconndet_END        (1)
#define SOC_USBOTG_HPRT_prtena_START          (2)
#define SOC_USBOTG_HPRT_prtena_END            (2)
#define SOC_USBOTG_HPRT_prtenchng_START       (3)
#define SOC_USBOTG_HPRT_prtenchng_END         (3)
#define SOC_USBOTG_HPRT_prtovrcurract_START   (4)
#define SOC_USBOTG_HPRT_prtovrcurract_END     (4)
#define SOC_USBOTG_HPRT_prtovrcurrchng_START  (5)
#define SOC_USBOTG_HPRT_prtovrcurrchng_END    (5)
#define SOC_USBOTG_HPRT_prtres_START          (6)
#define SOC_USBOTG_HPRT_prtres_END            (6)
#define SOC_USBOTG_HPRT_prtsusp_START         (7)
#define SOC_USBOTG_HPRT_prtsusp_END           (7)
#define SOC_USBOTG_HPRT_prtrst_START          (8)
#define SOC_USBOTG_HPRT_prtrst_END            (8)
#define SOC_USBOTG_HPRT_prtlnsts_START        (10)
#define SOC_USBOTG_HPRT_prtlnsts_END          (11)
#define SOC_USBOTG_HPRT_prtpwr_START          (12)
#define SOC_USBOTG_HPRT_prtpwr_END            (12)
#define SOC_USBOTG_HPRT_prttstctl_START       (13)
#define SOC_USBOTG_HPRT_prttstctl_END         (16)
#define SOC_USBOTG_HPRT_prtspd_START          (17)
#define SOC_USBOTG_HPRT_prtspd_END            (18)


/*****************************************************************************
 �ṹ��    : SOC_USBOTG_HCCHARP_UNION
 �ṹ˵��  : HCCHARP �Ĵ����ṹ���塣��ַƫ����:0x0500+(0x20*i)����ֵ:0x00000000�����:32
 �Ĵ���˵��: ͨ��p���ԼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mps      : 11; /* bit[0-10] : �����������ֽ�Ϊ��λ�� */
        unsigned int  epnum    : 4;  /* bit[11-14]: �˵�š� */
        unsigned int  epdir    : 1;  /* bit[15]   : �˵㷽��
                                                    0��OUT��
                                                    1��IN�� */
        unsigned int  reserved : 1;  /* bit[16]   : ������ */
        unsigned int  lspddev  : 1;  /* bit[17]   : LowSpeed�豸ָʾ��
                                                    ������ã�ָʾ��ͨ����LowSpeed�豸ͨ�š�
                                                    0������LowSpeed�豸��
                                                    1����LowSpeed�豸�� */
        unsigned int  eptype   : 2;  /* bit[18-19]: �˵����͡�
                                                    00��control��
                                                    01��isochronous��
                                                    10��bulk��
                                                    11��interrupt�� */
        unsigned int  mc_ec    : 2;  /* bit[20-21]: ��split����ʹ�ܣ��������ڴ��䣬����ÿ��΢֡��������������ڷ����ڴ��䣬�����ڲ�DMA�����ٲ�֮ǰ��ͨ������İ�������
                                                    00��������
                                                    01��1��
                                                    10��2��
                                                    11��3��
                                                    ���������������Ϊ2'b01�� */
        unsigned int  devaddr  : 7;  /* bit[22-28]: Device��ַ�� */
        unsigned int  oddfrm   : 1;  /* bit[29]   : ��ż֡���ơ�
                                                    ������ø�bit��ָʾHost������֡����ż��֡�������ڴ��䡣
                                                    0��ż��֡��
                                                    1������֡�� */
        unsigned int  chdis    : 1;  /* bit[30]   : ͨ����ʹ�ܡ�
                                                    ������ø�bitֹͣ���ͻ��߽������ݡ� */
        unsigned int  chena    : 1;  /* bit[31]   : ͨ��ʹ�ܡ�
                                                    ��Scatter/Gather DMAʹ��ʱ��
                                                    0��ָʾ��������û��׼���ã�
                                                    1��ָʾ������������buffer׼���ã�ͨ�����Զ�ȡ��������
                                                    ��Scatter/Gather DMA��ʹ��ʱ��
                                                    0��ͨ����ʹ�ܣ�
                                                    1��ͨ��ʹ�ܡ� */
    } reg;
} SOC_USBOTG_HCCHARP_UNION;
#endif
#define SOC_USBOTG_HCCHARP_mps_START       (0)
#define SOC_USBOTG_HCCHARP_mps_END         (10)
#define SOC_USBOTG_HCCHARP_epnum_START     (11)
#define SOC_USBOTG_HCCHARP_epnum_END       (14)
#define SOC_USBOTG_HCCHARP_epdir_START     (15)
#define SOC_USBOTG_HCCHARP_epdir_END       (15)
#define SOC_USBOTG_HCCHARP_lspddev_START   (17)
#define SOC_USBOTG_HCCHARP_lspddev_END     (17)
#define SOC_USBOTG_HCCHARP_eptype_START    (18)
#define SOC_USBOTG_HCCHARP_eptype_END      (19)
#define SOC_USBOTG_HCCHARP_mc_ec_START     (20)
#define SOC_USBOTG_HCCHARP_mc_ec_END       (21)
#define SOC_USBOTG_HCCHARP_devaddr_START   (22)
#define SOC_USBOTG_HCCHARP_devaddr_END     (28)
#define SOC_USBOTG_HCCHARP_oddfrm_START    (29)
#define SOC_USBOTG_HCCHARP_oddfrm_END      (29)
#define SOC_USBOTG_HCCHARP_chdis_START     (30)
#define SOC_USBOTG_HCCHARP_chdis_END       (30)
#define SOC_USBOTG_HCCHARP_chena_START     (31)
#define SOC_USBOTG_HCCHARP_chena_END       (31)


/*****************************************************************************
 �ṹ��    : SOC_USBOTG_HCSPLTP_UNION
 �ṹ˵��  : HCSPLTP �Ĵ����ṹ���塣��ַƫ����:0x0504+(0x20*i)����ֵ:0x00000000�����:32
 �Ĵ���˵��: ͨ��p Split���ƼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  prtaddr  : 7;  /* bit[0-6]  : �˿ڵ�ַ�� */
        unsigned int  hubaddr  : 7;  /* bit[7-13] : Hub��ַ�� */
        unsigned int  xactpos  : 2;  /* bit[14-15]: ����λ�á�
                                                    ����OUT�����Ƿ���all��first��middle����last payload��
                                                    11��All���������е�payload��С�ڻ����188�ֽڣ���
                                                    10��Begin������First payload������188�ֽڣ���
                                                    01��End������last payload������188�ֽڣ���
                                                    00��Mid������middle payload������188�ֽڣ��� */
        unsigned int  compsplt : 1;  /* bit[16]   : Split��ɲ�������
                                                    ������ã��������������split��ɴ��䡣
                                                    0��������
                                                    1�������� */
        unsigned int  reserved : 14; /* bit[17-30]: ������ */
        unsigned int  spltena  : 1;  /* bit[31]   : Splitʹ�ܡ�
                                                    ʹ�ܸ�ͨ������split���䡣
                                                    0����ʹ�ܣ�
                                                    1��ʹ�ܡ� */
    } reg;
} SOC_USBOTG_HCSPLTP_UNION;
#endif
#define SOC_USBOTG_HCSPLTP_prtaddr_START   (0)
#define SOC_USBOTG_HCSPLTP_prtaddr_END     (6)
#define SOC_USBOTG_HCSPLTP_hubaddr_START   (7)
#define SOC_USBOTG_HCSPLTP_hubaddr_END     (13)
#define SOC_USBOTG_HCSPLTP_xactpos_START   (14)
#define SOC_USBOTG_HCSPLTP_xactpos_END     (15)
#define SOC_USBOTG_HCSPLTP_compsplt_START  (16)
#define SOC_USBOTG_HCSPLTP_compsplt_END    (16)
#define SOC_USBOTG_HCSPLTP_spltena_START   (31)
#define SOC_USBOTG_HCSPLTP_spltena_END     (31)


/*****************************************************************************
 �ṹ��    : SOC_USBOTG_HCINTP_UNION
 �ṹ˵��  : HCINTP �Ĵ����ṹ���塣��ַƫ����:0x0508+(0x20*i)����ֵ:0x00000000�����:32
 �Ĵ���˵��: ͨ��p�ж�״̬�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  xfercompl         : 1;  /* bit[0]    : ��������жϡ�
                                                             ����scatter/gather DMAģʽ��ָʾ������IOC��־��Ч����������
                                                             ���ڷ�scatter/gather DMAģʽ��ָʾ��������������
                                                             0�����жϣ�
                                                             1�����жϡ� */
        unsigned int  chhlted           : 1;  /* bit[1]    : ͨ��ֹͣ�жϡ�
                                                             ���ڷ�scatter/gather DMAģʽ��ָʾ�����쳣������
                                                             ����scatter/gather DMAģʽ��ָʾͨ����������ԭ���������������EOL��־��Ч��AHB���ߴ�����֤����������������ͨ����ʹ�ܣ�babble��stall��Ӧ��
                                                             0�����жϣ�
                                                             1�����жϡ� */
        unsigned int  ahberr            : 1;  /* bit[2]    : AHB���ߴ����жϡ�
                                                             0�����жϣ�
                                                             1�����жϡ� */
        unsigned int  stall             : 1;  /* bit[3]    : ���յ�STALL��Ӧ�жϡ�
                                                             ����scatter/gather DMAģʽ�����������θ��жϡ�
                                                             0�����жϣ�
                                                             1�����жϡ� */
        unsigned int  nak               : 1;  /* bit[4]    : ���յ�NAK��Ӧ�жϡ�
                                                             ����scatter/gather DMAģʽ�����������θ��жϡ�
                                                             0�����жϣ�
                                                             1�����жϡ� */
        unsigned int  ack               : 1;  /* bit[5]    : ���ջ��߷���ACK��Ӧ�жϡ�
                                                             ����scatter/gather DMAģʽ�����������θ��жϡ�
                                                             0�����жϣ�
                                                             1�����жϡ� */
        unsigned int  nyet              : 1;  /* bit[6]    : ���յ�NYET��Ӧ�жϡ�
                                                             ����scatter/gather DMAģʽ�����������θ��жϡ�
                                                             0�����жϣ�
                                                             1�����жϡ� */
        unsigned int  xacterr           : 1;  /* bit[7]    : ��������жϡ�
                                                             ָʾ�������¼��ִ������֮һ��
                                                             CRCУ����󣬳�ʱ��λ��������ٵ�EOP��
                                                             ����scatter/gather DMAģʽ�����������θ��жϡ�
                                                             0�����жϣ�
                                                             1�����жϡ� */
        unsigned int  bblerr            : 1;  /* bit[8]    : Babble�����жϡ�
                                                             ����scatter/gather DMAģʽ�����������θ��жϡ�
                                                             0�����жϣ�
                                                             1�����жϡ� */
        unsigned int  frmovrun          : 1;  /* bit[9]    : ֡������ת�жϡ�
                                                             ����scatter/gather DMAģʽ�����������θ��жϡ�
                                                             0�����жϣ�
                                                             1�����жϡ� */
        unsigned int  datatglerr        : 1;  /* bit[10]   : ����PID��ת�����жϡ�
                                                             ����scatter/gather DMAģʽ�����������θ��жϡ�
                                                             0�����жϣ�
                                                             1�����жϡ� */
        unsigned int  bnaintr           : 1;  /* bit[11]   : buffer��Ч�жϡ�
                                                             ��scatter/gather DMAģʽ��Ч��
                                                             0�����жϣ�
                                                             1�����жϡ� */
        unsigned int  xcs_xact_err      : 1;  /* bit[12]   : ���ص���������жϡ�
                                                             ��scatter/gather DMAģʽ��Ч��ָʾ����3������������
                                                             0�����жϣ�
                                                             1�����жϡ� */
        unsigned int  desc_lst_rollintr : 1;  /* bit[13]   : ��������ת�жϡ�
                                                             ��scatter/gather DMAģʽ��Ч��
                                                             0�����жϣ�
                                                             1�����жϡ� */
        unsigned int  reserved          : 18; /* bit[14-31]: ������ */
    } reg;
} SOC_USBOTG_HCINTP_UNION;
#endif
#define SOC_USBOTG_HCINTP_xfercompl_START          (0)
#define SOC_USBOTG_HCINTP_xfercompl_END            (0)
#define SOC_USBOTG_HCINTP_chhlted_START            (1)
#define SOC_USBOTG_HCINTP_chhlted_END              (1)
#define SOC_USBOTG_HCINTP_ahberr_START             (2)
#define SOC_USBOTG_HCINTP_ahberr_END               (2)
#define SOC_USBOTG_HCINTP_stall_START              (3)
#define SOC_USBOTG_HCINTP_stall_END                (3)
#define SOC_USBOTG_HCINTP_nak_START                (4)
#define SOC_USBOTG_HCINTP_nak_END                  (4)
#define SOC_USBOTG_HCINTP_ack_START                (5)
#define SOC_USBOTG_HCINTP_ack_END                  (5)
#define SOC_USBOTG_HCINTP_nyet_START               (6)
#define SOC_USBOTG_HCINTP_nyet_END                 (6)
#define SOC_USBOTG_HCINTP_xacterr_START            (7)
#define SOC_USBOTG_HCINTP_xacterr_END              (7)
#define SOC_USBOTG_HCINTP_bblerr_START             (8)
#define SOC_USBOTG_HCINTP_bblerr_END               (8)
#define SOC_USBOTG_HCINTP_frmovrun_START           (9)
#define SOC_USBOTG_HCINTP_frmovrun_END             (9)
#define SOC_USBOTG_HCINTP_datatglerr_START         (10)
#define SOC_USBOTG_HCINTP_datatglerr_END           (10)
#define SOC_USBOTG_HCINTP_bnaintr_START            (11)
#define SOC_USBOTG_HCINTP_bnaintr_END              (11)
#define SOC_USBOTG_HCINTP_xcs_xact_err_START       (12)
#define SOC_USBOTG_HCINTP_xcs_xact_err_END         (12)
#define SOC_USBOTG_HCINTP_desc_lst_rollintr_START  (13)
#define SOC_USBOTG_HCINTP_desc_lst_rollintr_END    (13)


/*****************************************************************************
 �ṹ��    : SOC_USBOTG_HCINTMSKP_UNION
 �ṹ˵��  : HCINTMSKP �Ĵ����ṹ���塣��ַƫ����:0x050C+(0x20*i)����ֵ:0x00000000�����:32
 �Ĵ���˵��: ͨ��p�ж����μĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  xfercompl         : 1;  /* bit[0]    : ��������ж�����λ��
                                                             0�����Σ�
                                                             1�������Ρ� */
        unsigned int  chhlted           : 1;  /* bit[1]    : ͨ��ֹͣ�ж�����λ��
                                                             0�����Σ�
                                                             1�������Ρ� */
        unsigned int  ahberr            : 1;  /* bit[2]    : AHB���ߴ����ж�����λ��
                                                             0�����Σ�
                                                             1�������Ρ� */
        unsigned int  stall             : 1;  /* bit[3]    : ���յ�STALL��Ӧ�ж�����λ��
                                                             0�����Σ�
                                                             1�������Ρ� */
        unsigned int  nak               : 1;  /* bit[4]    : ���յ�NAK��Ӧ�ж�����λ��
                                                             0�����Σ�
                                                             1�������Ρ� */
        unsigned int  ack               : 1;  /* bit[5]    : ���ջ��߷���ACK��Ӧ�ж�����λ��
                                                             0�����Σ�
                                                             1�������Ρ� */
        unsigned int  nyet              : 1;  /* bit[6]    : ���յ�NYET��Ӧ�ж�����λ��
                                                             0�����Σ�
                                                             1�������Ρ� */
        unsigned int  xacterr           : 1;  /* bit[7]    : ��������ж�����λ��
                                                             0�����Σ�
                                                             1�������Ρ� */
        unsigned int  bblerr            : 1;  /* bit[8]    : Babble�����ж�����λ��
                                                             0�����Σ�
                                                             1�������Ρ� */
        unsigned int  frmovrun          : 1;  /* bit[9]    : ֡������ת�ж�����λ��
                                                             0�����Σ�
                                                             1�������Ρ� */
        unsigned int  datatglerr        : 1;  /* bit[10]   : ����PID��ת�����ж�����λ��
                                                             0�����Σ�
                                                             1�������Ρ� */
        unsigned int  bnaintr           : 1;  /* bit[11]   : buffer��Ч�ж�����λ��
                                                             0�����Σ�
                                                             1�������Ρ� */
        unsigned int  xcs_xact_err      : 1;  /* bit[12]   : ���ص���������ж�����λ��
                                                             0�����Σ�
                                                             1�������Ρ� */
        unsigned int  desc_lst_rollintr : 1;  /* bit[13]   : ��������ת�ж�����λ��
                                                             0�����Σ�
                                                             1�������Ρ� */
        unsigned int  reserved          : 18; /* bit[14-31]: ������ */
    } reg;
} SOC_USBOTG_HCINTMSKP_UNION;
#endif
#define SOC_USBOTG_HCINTMSKP_xfercompl_START          (0)
#define SOC_USBOTG_HCINTMSKP_xfercompl_END            (0)
#define SOC_USBOTG_HCINTMSKP_chhlted_START            (1)
#define SOC_USBOTG_HCINTMSKP_chhlted_END              (1)
#define SOC_USBOTG_HCINTMSKP_ahberr_START             (2)
#define SOC_USBOTG_HCINTMSKP_ahberr_END               (2)
#define SOC_USBOTG_HCINTMSKP_stall_START              (3)
#define SOC_USBOTG_HCINTMSKP_stall_END                (3)
#define SOC_USBOTG_HCINTMSKP_nak_START                (4)
#define SOC_USBOTG_HCINTMSKP_nak_END                  (4)
#define SOC_USBOTG_HCINTMSKP_ack_START                (5)
#define SOC_USBOTG_HCINTMSKP_ack_END                  (5)
#define SOC_USBOTG_HCINTMSKP_nyet_START               (6)
#define SOC_USBOTG_HCINTMSKP_nyet_END                 (6)
#define SOC_USBOTG_HCINTMSKP_xacterr_START            (7)
#define SOC_USBOTG_HCINTMSKP_xacterr_END              (7)
#define SOC_USBOTG_HCINTMSKP_bblerr_START             (8)
#define SOC_USBOTG_HCINTMSKP_bblerr_END               (8)
#define SOC_USBOTG_HCINTMSKP_frmovrun_START           (9)
#define SOC_USBOTG_HCINTMSKP_frmovrun_END             (9)
#define SOC_USBOTG_HCINTMSKP_datatglerr_START         (10)
#define SOC_USBOTG_HCINTMSKP_datatglerr_END           (10)
#define SOC_USBOTG_HCINTMSKP_bnaintr_START            (11)
#define SOC_USBOTG_HCINTMSKP_bnaintr_END              (11)
#define SOC_USBOTG_HCINTMSKP_xcs_xact_err_START       (12)
#define SOC_USBOTG_HCINTMSKP_xcs_xact_err_END         (12)
#define SOC_USBOTG_HCINTMSKP_desc_lst_rollintr_START  (13)
#define SOC_USBOTG_HCINTMSKP_desc_lst_rollintr_END    (13)


/*****************************************************************************
 �ṹ��    : SOC_USBOTG_HCTSIZP_UNION
 �ṹ˵��  : HCTSIZP �Ĵ����ṹ���塣��ַƫ����:0x0510+(0x20*i)����ֵ:0x00000000�����:32
 �Ĵ���˵��: ͨ��p���䳤�ȼĴ�������scatter / gather DMAģʽ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sched_info : 8;  /* bit[0-7]  : ������Ϣ��
                                                      �������ڴ�����Ч��ÿbitָʾ��Ӧ��΢֡���ȿ��ơ�Bit[0]��Ӧ��1��΢֡��bit[7]��Ӧ��8��΢֡��
                                                      8'b11111111ָʾ�ڸ�֡�ڣ���ͨ��ÿ��΢֡����һ�Σ�������Ӧ�����ư���8'b10101010ָʾ��һ��΢֡����һ�Ρ� */
        unsigned int  ntd        : 8;  /* bit[8-15] : ����scatter/gather DMAģʽ��ָʾ������������ */
        unsigned int  reserved   : 13; /* bit[16-28]: ������ */
        unsigned int  pid        : 2;  /* bit[29-30]: PID���á�
                                                      ������ʼ�����PID��������ά������������PID��
                                                      00��DATA0��
                                                      01��DATA2��
                                                      10��DATA1��
                                                      11��MDATA�� */
        unsigned int  dopng      : 1;  /* bit[31]   : PING�������á�
                                                      ��Bit����OUT������Ч�����ø�bit��host����Э�����PING������
                                                      ��IN�������ø�bit���ᵼ��ͨ����ʹ�ܡ� */
    } reg;
} SOC_USBOTG_HCTSIZP_UNION;
#endif
#define SOC_USBOTG_HCTSIZP_sched_info_START  (0)
#define SOC_USBOTG_HCTSIZP_sched_info_END    (7)
#define SOC_USBOTG_HCTSIZP_ntd_START         (8)
#define SOC_USBOTG_HCTSIZP_ntd_END           (15)
#define SOC_USBOTG_HCTSIZP_pid_START         (29)
#define SOC_USBOTG_HCTSIZP_pid_END           (30)
#define SOC_USBOTG_HCTSIZP_dopng_START       (31)
#define SOC_USBOTG_HCTSIZP_dopng_END         (31)


/*****************************************************************************
 �ṹ��    : SOC_USBOTG_HCTSIZP_NON_SG_UNION
 �ṹ˵��  : HCTSIZP_NON_SG �Ĵ����ṹ���塣��ַƫ����:0x0510+(0x20*i)����ֵ:0x00000000�����:32
 �Ĵ���˵��: ͨ��p���䳤�ȼĴ���������scatter / gather DMAģʽ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  xfersize : 19; /* bit[0-18] : �����С�����ֽ�Ϊ��λ��
                                                    ����OUT���䣬��ʾHost����δ�����Ҫ������ֽ�����
                                                    ����IN���䣬��ʾ���������ʣ����ֽ����������Ҫ����������Ϊ��󱣻��������������� */
        unsigned int  pktcnt   : 10; /* bit[19-28]: ���������á� */
        unsigned int  pid      : 2;  /* bit[29-30]: PID���á�
                                                    ������ʼ�����PID��������ά������������PID��
                                                    00��DATA0��
                                                    01��DATA2��
                                                    10��DATA1��
                                                    11��MDATA���ǿ��ƶ˵㣩/setup�����ƶ˵㣩�� */
        unsigned int  dopng    : 1;  /* bit[31]   : PING�������á�
                                                    ��Bit����OUT������Ч�����ø�bit��host����Э�����PING������
                                                    ��IN�������ø�bit���ᵼ��ͨ����ʹ�ܡ� */
    } reg;
} SOC_USBOTG_HCTSIZP_NON_SG_UNION;
#endif
#define SOC_USBOTG_HCTSIZP_NON_SG_xfersize_START  (0)
#define SOC_USBOTG_HCTSIZP_NON_SG_xfersize_END    (18)
#define SOC_USBOTG_HCTSIZP_NON_SG_pktcnt_START    (19)
#define SOC_USBOTG_HCTSIZP_NON_SG_pktcnt_END      (28)
#define SOC_USBOTG_HCTSIZP_NON_SG_pid_START       (29)
#define SOC_USBOTG_HCTSIZP_NON_SG_pid_END         (30)
#define SOC_USBOTG_HCTSIZP_NON_SG_dopng_START     (31)
#define SOC_USBOTG_HCTSIZP_NON_SG_dopng_END       (31)


/*****************************************************************************
 �ṹ��    : SOC_USBOTG_HCDMAP_UNION
 �ṹ˵��  : HCDMAP �Ĵ����ṹ���塣��ַƫ����:0x0514+(0x20*i)����ֵ:0x00000000�����:32
 �Ĵ���˵��: ͨ��p DMA��ַ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  dmaaddr : 32; /* bit[0-31]: DMA��ʼ��ַ�� */
    } reg;
} SOC_USBOTG_HCDMAP_UNION;
#endif
#define SOC_USBOTG_HCDMAP_dmaaddr_START  (0)
#define SOC_USBOTG_HCDMAP_dmaaddr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_USBOTG_HCDMABP_UNION
 �ṹ˵��  : HCDMABP �Ĵ����ṹ���塣��ַƫ����:0x051C+(0x20*i)����ֵ:0x00000000�����:32
 �Ĵ���˵��: ͨ��p DMA buffer��ַ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  hcdma : 32; /* bit[0-31]: ��ǰbuffer��ַ����scatter/gather DMAģʽ��Ч�� */
    } reg;
} SOC_USBOTG_HCDMABP_UNION;
#endif
#define SOC_USBOTG_HCDMABP_hcdma_START  (0)
#define SOC_USBOTG_HCDMABP_hcdma_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_USBOTG_DCFG_UNION
 �ṹ˵��  : DCFG �Ĵ����ṹ���塣��ַƫ����:0x0800����ֵ:0x08200000�����:32
 �Ĵ���˵��: device���üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  devspd       : 2;  /* bit[0-1]  : Device�ٶ�ģʽ���á�
                                                        00��High-speed��
                                                        01��Full-speed��
                                                        others��reserved�� */
        unsigned int  nzstsouthshk : 1;  /* bit[2]    : ��0���ȵ�OUT���ֲ���ѡ���ڿ��ƴ����״̬�׶Σ����յ���0���ȵ����ݰ�ʱ����Ҫ����1�����ְ������ø�bitѡ���ͳ�ʲô���ְ���
                                                        0�����յ������ݰ��͸��������������Ӧ�˵���ƼĴ�����NAK��STALLλ�ͳ����ְ���
                                                        1���ͳ�STALL���ְ����������յ������ݰ��� */
        unsigned int  reserved_0   : 1;  /* bit[3]    : ������ */
        unsigned int  devaddr      : 7;  /* bit[4-10] : device��ַ��ÿ���յ�SetAddr�����������뽫device��ַд����� */
        unsigned int  perfrint     : 2;  /* bit[11-12]: ����֡�������1��΢֡�ڣ�������֡����ﵽ�����ֵ���ϱ�����֡�����жϡ�
                                                        00��΢֡���ȵ�80����
                                                        01��΢֡���ȵ�85����
                                                        10��΢֡���ȵ�90����
                                                        11��΢֡���ȵ�95���� */
        unsigned int  reserved_1   : 10; /* bit[13-22]: ������ */
        unsigned int  descdma      : 1;  /* bit[23]   : Scatter/Gather DMAʹ�ܡ�
                                                        0����ʹ�ܣ�
                                                        1��ʹ�ܡ� */
        unsigned int  perschintvl  : 2;  /* bit[24-25]: ���ڵ��ȼ��������DMA�������������IN�˵����ݵ�ʱ�䡣��������ڶ˵㱻���DMA�������������õ�ʱ�����ڰ��Ʒ�����IN�˵����ݣ�����DMAΪ�����ڶ˵���񡣸������õ�ʱ��֮��DMA��ʼ���Ʒ����ڶ˵����ݡ�
                                                        00��΢֡���ȵ�25%��
                                                        01��΢֡���ȵ�50%��
                                                        10��΢֡���ȵ�75%��
                                                        11�������� */
        unsigned int  reserved_2   : 6;  /* bit[26-31]: ������ */
    } reg;
} SOC_USBOTG_DCFG_UNION;
#endif
#define SOC_USBOTG_DCFG_devspd_START        (0)
#define SOC_USBOTG_DCFG_devspd_END          (1)
#define SOC_USBOTG_DCFG_nzstsouthshk_START  (2)
#define SOC_USBOTG_DCFG_nzstsouthshk_END    (2)
#define SOC_USBOTG_DCFG_devaddr_START       (4)
#define SOC_USBOTG_DCFG_devaddr_END         (10)
#define SOC_USBOTG_DCFG_perfrint_START      (11)
#define SOC_USBOTG_DCFG_perfrint_END        (12)
#define SOC_USBOTG_DCFG_descdma_START       (23)
#define SOC_USBOTG_DCFG_descdma_END         (23)
#define SOC_USBOTG_DCFG_perschintvl_START   (24)
#define SOC_USBOTG_DCFG_perschintvl_END     (25)


/*****************************************************************************
 �ṹ��    : SOC_USBOTG_DCTL_UNION
 �ṹ˵��  : DCTL �Ĵ����ṹ���塣��ַƫ����:0x0804����ֵ:0x00000000�����:32
 �Ĵ���˵��: device���ƼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  rmtwkupsig   : 1;  /* bit[0]    : Զ�̻��ѿ��ơ�
                                                        ���ø�bit��������Զ�̻���host�����ͨ�����ø�bit��ʹdevice�˳�suspend״̬������Э�飬������������ø�bit֮��1��15ms�������bit��
                                                        ��LPMʹ����device����L1(sleep)״̬�����ͨ�����ø�bit����host����ʹdevice�˳�L1״̬��Ӳ����50us֮���Զ������bit��
                                                        0��������Զ�̻��Ѳ�����
                                                        1������Զ�̻��Ѳ����� */
        unsigned int  sftdiscon    : 1;  /* bit[1]    : ����Ͽ����ӿ��ơ�
                                                        0������������
                                                        1������������UTMI+�ӿڵ�opmode�ź�Ϊ2'b01����USB host�˲���device�Ͽ������¼��� */
        unsigned int  gnpinnaksts  : 1;  /* bit[2]    : ȫ�ַ�����IN����NAK״̬��
                                                        0�����ݷ���FIFO�����ݷ������ְ���
                                                        1������NAK�� */
        unsigned int  goutnaksts   : 1;  /* bit[3]    : ȫ�ַ�����OUT����NAK״̬��
                                                        0�����ְ��Ѿ����ͣ�
                                                        1������NAK�������Խ��յ������ݡ� */
        unsigned int  tstctl       : 3;  /* bit[4-6]  : ����ģʽ���ơ�
                                                        000������ģʽ��ʹ�ܣ�
                                                        001������Jģʽ��
                                                        010������Kģʽ��
                                                        011������SE0_NAKģʽ��
                                                        100�����԰�ģʽ��
                                                        101������Force_Enableģʽ��
                                                        others�������� */
        unsigned int  sgnpinnak    : 1;  /* bit[7]    : ȫ�ַ�����IN����NAK���á�����Ը�bitд��1����device�����еķ�����IN������ӦNAK�����������GINTSTS[GINNakEff]�����������ø�bit��
                                                        0��������NAK��
                                                        1������NAK�� */
        unsigned int  cgnpinnak    : 1;  /* bit[8]    : ���ȫ�ַ�����IN����NAK���á��Ը�bit��д��1�����ȫ��IN NAK��
                                                        0���������
                                                        1������� */
        unsigned int  sgoutnak     : 1;  /* bit[9]    : ȫ�ַ�����OUT����NAK���á�����Ը�bitд��1����device�����еķ�����OUT������ӦNAK�����������GINTSTS[GOUTNakEff]�����������ø�bit��
                                                        0��������NAK��
                                                        1������NAK�� */
        unsigned int  cgoutnak     : 1;  /* bit[10]   : ���ȫ�ַ�����IN����NAK���á��Ը�bit��д��1�����ȫ��OUT NAK��
                                                        0���������
                                                        1������� */
        unsigned int  pwronprgdone : 1;  /* bit[11]   : �ϵ�����ϡ�������ø�bit��ָʾ�˳�Power Downģʽ��������üĴ�����ϡ�
                                                        0��δ��ɣ�
                                                        1����ɡ� */
        unsigned int  reserved_0   : 1;  /* bit[12]   : ������ */
        unsigned int  gmc          : 2;  /* bit[13-14]: ��Scatter/Gather DMAģʽ�£�����DMA������1���˵�֮ǰ�����񱾶˵�İ�����������Է����ڶ˵㡣
                                                        00��reserved��
                                                        01��1������
                                                        10��2������
                                                        11��3������ */
        unsigned int  ignrfrmnum   : 1;  /* bit[15]   : ��Scatter/Gather DMAģʽ�£�����ͬ���˵��֡��š���bitʹ�ܣ��������е�֡��űȵ�ǰ֡���С��Ҳ���������FIFO�е����ݡ�
                                                        0����ʹ�ܣ�
                                                        1��ʹ�ܡ� */
        unsigned int  nakonbble    : 1;  /* bit[16]   : �����յ�babble֮���Զ��ظ�NAK��
                                                        0����ʹ�ܣ�
                                                        1��ʹ�ܡ� */
        unsigned int  reserved_1   : 15; /* bit[17-31]: ������ */
    } reg;
} SOC_USBOTG_DCTL_UNION;
#endif
#define SOC_USBOTG_DCTL_rmtwkupsig_START    (0)
#define SOC_USBOTG_DCTL_rmtwkupsig_END      (0)
#define SOC_USBOTG_DCTL_sftdiscon_START     (1)
#define SOC_USBOTG_DCTL_sftdiscon_END       (1)
#define SOC_USBOTG_DCTL_gnpinnaksts_START   (2)
#define SOC_USBOTG_DCTL_gnpinnaksts_END     (2)
#define SOC_USBOTG_DCTL_goutnaksts_START    (3)
#define SOC_USBOTG_DCTL_goutnaksts_END      (3)
#define SOC_USBOTG_DCTL_tstctl_START        (4)
#define SOC_USBOTG_DCTL_tstctl_END          (6)
#define SOC_USBOTG_DCTL_sgnpinnak_START     (7)
#define SOC_USBOTG_DCTL_sgnpinnak_END       (7)
#define SOC_USBOTG_DCTL_cgnpinnak_START     (8)
#define SOC_USBOTG_DCTL_cgnpinnak_END       (8)
#define SOC_USBOTG_DCTL_sgoutnak_START      (9)
#define SOC_USBOTG_DCTL_sgoutnak_END        (9)
#define SOC_USBOTG_DCTL_cgoutnak_START      (10)
#define SOC_USBOTG_DCTL_cgoutnak_END        (10)
#define SOC_USBOTG_DCTL_pwronprgdone_START  (11)
#define SOC_USBOTG_DCTL_pwronprgdone_END    (11)
#define SOC_USBOTG_DCTL_gmc_START           (13)
#define SOC_USBOTG_DCTL_gmc_END             (14)
#define SOC_USBOTG_DCTL_ignrfrmnum_START    (15)
#define SOC_USBOTG_DCTL_ignrfrmnum_END      (15)
#define SOC_USBOTG_DCTL_nakonbble_START     (16)
#define SOC_USBOTG_DCTL_nakonbble_END       (16)


/*****************************************************************************
 �ṹ��    : SOC_USBOTG_DSTS_UNION
 �ṹ˵��  : DSTS �Ĵ����ṹ���塣��ַƫ����:0x0808����ֵ:0x0007FF02�����:32
 �Ĵ���˵��: device״̬�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  suspsts   : 1;  /* bit[0]    : suspend״ָ̬ʾ��
                                                     0��������suspend״̬��
                                                     1������suspend״̬�� */
        unsigned int  enumspd   : 2;  /* bit[1-2]  : ö���ٶȡ�
                                                     00�����٣�PHYʱ��Ϊ30��60MHz����
                                                     01��ȫ�٣�PHYʱ��Ϊ30��60MHz����
                                                     others�������� */
        unsigned int  errticerr : 1;  /* bit[3]    : ����ָʾ�κ�UTMI+�Ͻ��յ��Ĳ�ȷ���Ĵ��󡣲������ִ���ʱ������������suspend״̬�����ϱ��ж�GINTSTS[ErlySusp]��
                                                     0��û��UTMI+�ӿڴ���
                                                     1����UTMI+�ӿڴ��� */
        unsigned int  reserved_0: 4;  /* bit[4-7]  : ������ */
        unsigned int  soffn     : 14; /* bit[8-21] : ��ǰ֡����΢֡��֡��š� */
        unsigned int  devlnsts  : 2;  /* bit[22-23]: ֻ��linestatus��polarity */
        unsigned int  reserved_1: 8;  /* bit[24-31]: ������ */
    } reg;
} SOC_USBOTG_DSTS_UNION;
#endif
#define SOC_USBOTG_DSTS_suspsts_START    (0)
#define SOC_USBOTG_DSTS_suspsts_END      (0)
#define SOC_USBOTG_DSTS_enumspd_START    (1)
#define SOC_USBOTG_DSTS_enumspd_END      (2)
#define SOC_USBOTG_DSTS_errticerr_START  (3)
#define SOC_USBOTG_DSTS_errticerr_END    (3)
#define SOC_USBOTG_DSTS_soffn_START      (8)
#define SOC_USBOTG_DSTS_soffn_END        (21)
#define SOC_USBOTG_DSTS_devlnsts_START   (22)
#define SOC_USBOTG_DSTS_devlnsts_END     (23)


/*****************************************************************************
 �ṹ��    : SOC_USBOTG_DIEPMSK_UNION
 �ṹ˵��  : DIEPMSK �Ĵ����ṹ���塣��ַƫ����:0x0810����ֵ:0x00000000�����:32
 �Ĵ���˵��: IN�˵���ͨ�ж����μĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  xfercomplmsk   : 1;  /* bit[0]    : ��������ж����Ρ�
                                                          0�����Σ�
                                                          1�������Ρ� */
        unsigned int  epdisbldmsk    : 1;  /* bit[1]    : �˵㲻ʹ���ж����Ρ�
                                                          0�����Σ�
                                                          1�������Ρ� */
        unsigned int  ahberrmsk      : 1;  /* bit[2]    : AHB���ߴ����ж����Ρ�
                                                          0�����Σ�
                                                          1�������Ρ� */
        unsigned int  timeoutmsk     : 1;  /* bit[3]    : ��ʱ�ж����Ρ�
                                                          0�����Σ�
                                                          1�������Ρ� */
        unsigned int  intkntxfempmsk : 1;  /* bit[4]    : ���յ�IN���ƣ����Ƿ���FIFO���ж����Ρ�
                                                          0�����Σ�
                                                          1�������Ρ� */
        unsigned int  reserved_0     : 1;  /* bit[5]    : ������ */
        unsigned int  inepnakeffmsk  : 1;  /* bit[6]    : IN�˵�NAK��Ч���Ρ�
                                                          0�����Σ�
                                                          1�������Ρ� */
        unsigned int  reserved_1     : 1;  /* bit[7]    : ������ */
        unsigned int  txfifoundrnmsk : 1;  /* bit[8]    : ����FIFO�����ж����Ρ�
                                                          0�����Σ�
                                                          1�������Ρ� */
        unsigned int  bnainintrmsk   : 1;  /* bit[9]    : IN�˵�BNA�ж����Ρ�
                                                          0�����Σ�
                                                          1�������Ρ� */
        unsigned int  reserved_2     : 3;  /* bit[10-12]: ������ */
        unsigned int  nakmsk         : 1;  /* bit[13]   : IN�˵�NAK�ж�����λ��
                                                          0�����Σ�
                                                          1�������Ρ� */
        unsigned int  reserved_3     : 18; /* bit[14-31]: ������ */
    } reg;
} SOC_USBOTG_DIEPMSK_UNION;
#endif
#define SOC_USBOTG_DIEPMSK_xfercomplmsk_START    (0)
#define SOC_USBOTG_DIEPMSK_xfercomplmsk_END      (0)
#define SOC_USBOTG_DIEPMSK_epdisbldmsk_START     (1)
#define SOC_USBOTG_DIEPMSK_epdisbldmsk_END       (1)
#define SOC_USBOTG_DIEPMSK_ahberrmsk_START       (2)
#define SOC_USBOTG_DIEPMSK_ahberrmsk_END         (2)
#define SOC_USBOTG_DIEPMSK_timeoutmsk_START      (3)
#define SOC_USBOTG_DIEPMSK_timeoutmsk_END        (3)
#define SOC_USBOTG_DIEPMSK_intkntxfempmsk_START  (4)
#define SOC_USBOTG_DIEPMSK_intkntxfempmsk_END    (4)
#define SOC_USBOTG_DIEPMSK_inepnakeffmsk_START   (6)
#define SOC_USBOTG_DIEPMSK_inepnakeffmsk_END     (6)
#define SOC_USBOTG_DIEPMSK_txfifoundrnmsk_START  (8)
#define SOC_USBOTG_DIEPMSK_txfifoundrnmsk_END    (8)
#define SOC_USBOTG_DIEPMSK_bnainintrmsk_START    (9)
#define SOC_USBOTG_DIEPMSK_bnainintrmsk_END      (9)
#define SOC_USBOTG_DIEPMSK_nakmsk_START          (13)
#define SOC_USBOTG_DIEPMSK_nakmsk_END            (13)


/*****************************************************************************
 �ṹ��    : SOC_USBOTG_DOEPMSK_UNION
 �ṹ˵��  : DOEPMSK �Ĵ����ṹ���塣��ַƫ����:0x0814����ֵ:0x00000000�����:32
 �Ĵ���˵��: OUT�˵���ͨ�ж����μĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  xfercomplmsk   : 1;  /* bit[0]    : ��������ж����Ρ�
                                                          0�����Σ�
                                                          1�������Ρ� */
        unsigned int  epdisbldmsk    : 1;  /* bit[1]    : �˵㲻ʹ���ж����Ρ�
                                                          0�����Σ�
                                                          1�������Ρ� */
        unsigned int  ahberrmsk      : 1;  /* bit[2]    : AHB���ߴ����ж����Ρ�
                                                          0�����Σ�
                                                          1�������Ρ� */
        unsigned int  setupmsk       : 1;  /* bit[3]    : setup�׶�����ж����Ρ�
                                                          0�����Σ�
                                                          1�������Ρ� */
        unsigned int  outtknepdismsk : 1;  /* bit[4]    : ���յ�OUT���ƣ����˵�û��ʹ���ж����Ρ�
                                                          0�����Σ�
                                                          1�������Ρ� */
        unsigned int  reserved_0     : 1;  /* bit[5]    : ������ */
        unsigned int  back2backsetup : 1;  /* bit[6]    : ������SETUP�������жϡ�
                                                          0�����Σ�
                                                          1�������Ρ� */
        unsigned int  reserved_1     : 1;  /* bit[7]    : ������ */
        unsigned int  outpkterrmsk   : 1;  /* bit[8]    : OUT�������ж����Ρ�
                                                          0�����Σ�
                                                          1�������Ρ� */
        unsigned int  bnaoutintrmsk  : 1;  /* bit[9]    : OUT�˵�BNA�ж����Ρ�
                                                          0�����Σ�
                                                          1�������Ρ� */
        unsigned int  reserved_2     : 2;  /* bit[10-11]: ������ */
        unsigned int  bbleerrmsk     : 1;  /* bit[12]   : babble�����ж����Ρ�
                                                          0�����Σ�
                                                          1�������Ρ� */
        unsigned int  nakmsk         : 1;  /* bit[13]   : NAK�ж�����λ��
                                                          0������
                                                          1�������� */
        unsigned int  nyetmsk        : 1;  /* bit[14]   : NYET�ж����Ρ�
                                                          0�����Σ�
                                                          1�������Ρ� */
        unsigned int  reserved_3     : 17; /* bit[15-31]: ������ */
    } reg;
} SOC_USBOTG_DOEPMSK_UNION;
#endif
#define SOC_USBOTG_DOEPMSK_xfercomplmsk_START    (0)
#define SOC_USBOTG_DOEPMSK_xfercomplmsk_END      (0)
#define SOC_USBOTG_DOEPMSK_epdisbldmsk_START     (1)
#define SOC_USBOTG_DOEPMSK_epdisbldmsk_END       (1)
#define SOC_USBOTG_DOEPMSK_ahberrmsk_START       (2)
#define SOC_USBOTG_DOEPMSK_ahberrmsk_END         (2)
#define SOC_USBOTG_DOEPMSK_setupmsk_START        (3)
#define SOC_USBOTG_DOEPMSK_setupmsk_END          (3)
#define SOC_USBOTG_DOEPMSK_outtknepdismsk_START  (4)
#define SOC_USBOTG_DOEPMSK_outtknepdismsk_END    (4)
#define SOC_USBOTG_DOEPMSK_back2backsetup_START  (6)
#define SOC_USBOTG_DOEPMSK_back2backsetup_END    (6)
#define SOC_USBOTG_DOEPMSK_outpkterrmsk_START    (8)
#define SOC_USBOTG_DOEPMSK_outpkterrmsk_END      (8)
#define SOC_USBOTG_DOEPMSK_bnaoutintrmsk_START   (9)
#define SOC_USBOTG_DOEPMSK_bnaoutintrmsk_END     (9)
#define SOC_USBOTG_DOEPMSK_bbleerrmsk_START      (12)
#define SOC_USBOTG_DOEPMSK_bbleerrmsk_END        (12)
#define SOC_USBOTG_DOEPMSK_nakmsk_START          (13)
#define SOC_USBOTG_DOEPMSK_nakmsk_END            (13)
#define SOC_USBOTG_DOEPMSK_nyetmsk_START         (14)
#define SOC_USBOTG_DOEPMSK_nyetmsk_END           (14)


/*****************************************************************************
 �ṹ��    : SOC_USBOTG_DAINT_UNION
 �ṹ˵��  : DAINT �Ĵ����ṹ���塣��ַƫ����:0x0818����ֵ:0x00000000�����:32
 �Ĵ���˵��: ���ж˵��ж�״̬�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  inepint  : 16; /* bit[0-15] : IN�˵��жϡ�ÿbit��Ӧ1���˵㣬bit[0]��Ӧ�˵�0��bit[15]��Ӧ�˵�15�� */
        unsigned int  outepint : 16; /* bit[16-31]: OUT�˵��жϡ�ÿbit��Ӧ1���˵㣬bit[16��Ӧ�˵�0��bit[31]��Ӧ�˵�15�� */
    } reg;
} SOC_USBOTG_DAINT_UNION;
#endif
#define SOC_USBOTG_DAINT_inepint_START   (0)
#define SOC_USBOTG_DAINT_inepint_END     (15)
#define SOC_USBOTG_DAINT_outepint_START  (16)
#define SOC_USBOTG_DAINT_outepint_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_USBOTG_DAINTMSK_UNION
 �ṹ˵��  : DAINTMSK �Ĵ����ṹ���塣��ַƫ����:0x081C����ֵ:0x00000000�����:32
 �Ĵ���˵��: ���ж˵��ж����μĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  inepmsk  : 16; /* bit[0-15] : IN�˵���ж����Ρ�ÿbit��Ӧһ���˵㣬bit[0]��Ӧ�˵�0��bit[15]��Ӧ�˵�15��
                                                    0�����Σ�
                                                    1�������Ρ� */
        unsigned int  outepmsk : 16; /* bit[16-31]: OUT�˵���ж����Ρ�ÿbit��Ӧһ���˵㣬bit[16]��Ӧ�˵�0��bit[31]��Ӧ�˵�15��
                                                    0�����Σ�
                                                    1�������Ρ� */
    } reg;
} SOC_USBOTG_DAINTMSK_UNION;
#endif
#define SOC_USBOTG_DAINTMSK_inepmsk_START   (0)
#define SOC_USBOTG_DAINTMSK_inepmsk_END     (15)
#define SOC_USBOTG_DAINTMSK_outepmsk_START  (16)
#define SOC_USBOTG_DAINTMSK_outepmsk_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_USBOTG_DVBUSDIS_UNION
 �ṹ˵��  : DVBUSDIS �Ĵ����ṹ���塣��ַƫ����:0x0828����ֵ:0x000017D7�����:32
 �Ĵ���˵��: Vbus�ŵ�ʱ�����üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  dvbusdis : 16; /* bit[0-15] : Vbus�ŵ�ʱ�䡣������SRP������Vbus�ķŵ�ʱ�䡣�����ֵ����Vbus�ŵ�ʱ���PHYʱ��������/1024�� */
        unsigned int  reserved : 16; /* bit[16-31]: ������ */
    } reg;
} SOC_USBOTG_DVBUSDIS_UNION;
#endif
#define SOC_USBOTG_DVBUSDIS_dvbusdis_START  (0)
#define SOC_USBOTG_DVBUSDIS_dvbusdis_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_USBOTG_DVBUSPULSE_UNION
 �ṹ˵��  : DVBUSPULSE �Ĵ����ṹ���塣��ַƫ����:0x082C����ֵ:0x000005B8�����:32
 �Ĵ���˵��: Vbus�������üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  dvbuspulse : 16; /* bit[0-15] : Vbus����ʱ�䡣������SRP������Vbus����ʱ�䡣�����ֵ����Vbus����ʱ���PHYʱ��������/1024�� */
        unsigned int  reserved   : 16; /* bit[16-31]: ������ */
    } reg;
} SOC_USBOTG_DVBUSPULSE_UNION;
#endif
#define SOC_USBOTG_DVBUSPULSE_dvbuspulse_START  (0)
#define SOC_USBOTG_DVBUSPULSE_dvbuspulse_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_USBOTG_DTHRCTL_UNION
 �ṹ˵��  : DTHRCTL �Ĵ����ṹ���塣��ַƫ����:0x0830����ֵ:0x0C100020�����:32
 �Ĵ���˵��: deviceˮ�߿��ƼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  nonisothren : 1;  /* bit[0]    : ��Isochronous IN�˵�ˮ��ʹ�ܡ�
                                                       0����ʹ�ܣ�
                                                       1��ʹ�ܡ� */
        unsigned int  isothren    : 1;  /* bit[1]    : Isochronous IN�˵�ˮ��ʹ�ܡ�
                                                       0����ʹ�ܣ�
                                                       1��ʹ�ܡ� */
        unsigned int  txthrlen    : 9;  /* bit[2-10] : ����FIFOˮ�ߣ�����ͬʱҲ��MACˮ�ߡ���λΪ32bit��������FIFO�����ݴ���ˮ�ߣ���USB�������ݡ�
                                                       ��AHBThrRatio=2'b00ʱ��ˮ����������Ϊ8����AHBThrRation��Ϊ0ʱ���������õ�ֵ���뱣֤AHBˮ�߲�С��8��
                                                       �����isochronous�ͷ�isochronous���䶼��Ч��
                                                       ��������ֵ�����õ�AHB burst������ȡ� */
        unsigned int  ahbthrratio : 2;  /* bit[11-12]: ��������ʱ��AHBˮ����MACˮ�ߵı�����
                                                       00��AHBˮ�ߣ�MACˮ�ߣ�
                                                       01��AHBˮ�ߣ�MACˮ��/2;
                                                       10��AHBˮ�ߣ�MACˮ��/4��
                                                       11��AHBˮ�ߣ�MACˮ��/8 */
        unsigned int  reserved_0  : 3;  /* bit[13-15]: ������ */
        unsigned int  rxthren     : 1;  /* bit[16]   : ����ˮ��ʹ�ܡ�
                                                       0����ʹ�ܣ�
                                                       1��ʹ�ܡ� */
        unsigned int  rxthrlen    : 9;  /* bit[17-25]: ����FIFOˮ�ߡ���λΪ32bit������USB�����Ͻ��յ������ݴ��ڸ�������ֵʱ������AHB���䡣��������ֵ����С��8�������������ֵ����AHB burst���ȡ� */
        unsigned int  reserved_1  : 1;  /* bit[26]   : ������ */
        unsigned int  arbpken     : 1;  /* bit[27]   : DMA�ٲ����á���bit����IN�˵��DMA�ٲá�����bitʹ�ܣ����ĳIN�˵���յ�IN���ƣ���IN�˵��һֱ�õ�DMA���ٲá���bit���Է�ֹ����FIFO���硣
                                                       0����ʹ�ܣ�
                                                       1��ʹ�ܡ� */
        unsigned int  reserved_2  : 4;  /* bit[28-31]: ������ */
    } reg;
} SOC_USBOTG_DTHRCTL_UNION;
#endif
#define SOC_USBOTG_DTHRCTL_nonisothren_START  (0)
#define SOC_USBOTG_DTHRCTL_nonisothren_END    (0)
#define SOC_USBOTG_DTHRCTL_isothren_START     (1)
#define SOC_USBOTG_DTHRCTL_isothren_END       (1)
#define SOC_USBOTG_DTHRCTL_txthrlen_START     (2)
#define SOC_USBOTG_DTHRCTL_txthrlen_END       (10)
#define SOC_USBOTG_DTHRCTL_ahbthrratio_START  (11)
#define SOC_USBOTG_DTHRCTL_ahbthrratio_END    (12)
#define SOC_USBOTG_DTHRCTL_rxthren_START      (16)
#define SOC_USBOTG_DTHRCTL_rxthren_END        (16)
#define SOC_USBOTG_DTHRCTL_rxthrlen_START     (17)
#define SOC_USBOTG_DTHRCTL_rxthrlen_END       (25)
#define SOC_USBOTG_DTHRCTL_arbpken_START      (27)
#define SOC_USBOTG_DTHRCTL_arbpken_END        (27)


/*****************************************************************************
 �ṹ��    : SOC_USBOTG_DIEPEMPMSK_UNION
 �ṹ˵��  : DIEPEMPMSK �Ĵ����ṹ���塣��ַƫ����:0x0834����ֵ:0x00000000�����:32
 �Ĵ���˵��: IN�˵�FIFO���ж����μĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ineptxfempmsk : 16; /* bit[0-15] : IN�˵㷢��FIFO���ж����μĴ�����ÿbit��Ӧһ���˵㣬bit[0]��Ӧ�˵�0��bit[15]��Ӧ�˵�15��
                                                         ÿbit���壺
                                                         0�����Σ�
                                                         1�������Ρ� */
        unsigned int  reserved      : 16; /* bit[16-31]: ������ */
    } reg;
} SOC_USBOTG_DIEPEMPMSK_UNION;
#endif
#define SOC_USBOTG_DIEPEMPMSK_ineptxfempmsk_START  (0)
#define SOC_USBOTG_DIEPEMPMSK_ineptxfempmsk_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_USBOTG_DIEPCTL0_UNION
 �ṹ˵��  : DIEPCTL0 �Ĵ����ṹ���塣��ַƫ����:0x0900����ֵ:0x00008000�����:32
 �Ĵ���˵��: IN�˵�0���ƼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mps      : 2;  /* bit[0-1]  : ������С����IN�˵��OUT�˵㶼��Ч��
                                                    00��64�ֽڣ�
                                                    01��32�ֽڣ�
                                                    10��16�ֽڣ�
                                                    11��8�ֽڡ� */
        unsigned int  reserved_0: 13; /* bit[2-14] : ������ */
        unsigned int  usbactep : 1;  /* bit[15]   : �˵��Ƿ񼤻��bitһֱΪ1����ʾ�˵�0һֱ���ڼ���״̬�� */
        unsigned int  reserved_1: 1;  /* bit[16]   : ������ */
        unsigned int  naksts   : 1;  /* bit[17]   : NAK״̬��
                                                    0������FIFO״̬�������ְ���
                                                    1���Ըö˵�Ĵ�������һֱ����NAK���ְ��� */
        unsigned int  eptype   : 2;  /* bit[18-19]: �˵����͡�һֱΪ0����ʾ�˵�0�ǿ��ƶ˵㡣 */
        unsigned int  reserved_2: 1;  /* bit[20]   : ������ */
        unsigned int  stall    : 1;  /* bit[21]   : STALL�������á�������ø�bitʹ�ܣ�Ӳ���յ�setup���������bit����bitʹ�ܣ��Ըö˵������һֱ��ӦSTALL���֡���bit�����ȼ�����NAK���á�
                                                    0����ʹ�ܣ�
                                                    1��ʹ�ܡ� */
        unsigned int  txfnum   : 4;  /* bit[22-25]: �˵�0�ķ���FIFO��š� */
        unsigned int  cnak     : 1;  /* bit[26]   : ���NAK���á����bitд1���NAK���á�
                                                    0���������
                                                    1������� */
        unsigned int  snak     : 1;  /* bit[27]   : NAK���á����ø�bit�󣬼�ʹ����FIFO�����ݣ�Ӳ��Ҳ�����ⷢ�͡����Խ��յ���setup������NAK���֡�
                                                    0����ʹ�ܣ�
                                                    1��ʹ�ܡ� */
        unsigned int  reserved_3: 2;  /* bit[28-29]: ������ */
        unsigned int  epdis    : 1;  /* bit[30]   : �˵�ʹ�������
                                                    0���������
                                                    1������� */
        unsigned int  epena    : 1;  /* bit[31]   : �˵�ʹ�ܡ�
                                                    0����ʹ�ܣ�
                                                    1��ʹ�ܡ� */
    } reg;
} SOC_USBOTG_DIEPCTL0_UNION;
#endif
#define SOC_USBOTG_DIEPCTL0_mps_START       (0)
#define SOC_USBOTG_DIEPCTL0_mps_END         (1)
#define SOC_USBOTG_DIEPCTL0_usbactep_START  (15)
#define SOC_USBOTG_DIEPCTL0_usbactep_END    (15)
#define SOC_USBOTG_DIEPCTL0_naksts_START    (17)
#define SOC_USBOTG_DIEPCTL0_naksts_END      (17)
#define SOC_USBOTG_DIEPCTL0_eptype_START    (18)
#define SOC_USBOTG_DIEPCTL0_eptype_END      (19)
#define SOC_USBOTG_DIEPCTL0_stall_START     (21)
#define SOC_USBOTG_DIEPCTL0_stall_END       (21)
#define SOC_USBOTG_DIEPCTL0_txfnum_START    (22)
#define SOC_USBOTG_DIEPCTL0_txfnum_END      (25)
#define SOC_USBOTG_DIEPCTL0_cnak_START      (26)
#define SOC_USBOTG_DIEPCTL0_cnak_END        (26)
#define SOC_USBOTG_DIEPCTL0_snak_START      (27)
#define SOC_USBOTG_DIEPCTL0_snak_END        (27)
#define SOC_USBOTG_DIEPCTL0_epdis_START     (30)
#define SOC_USBOTG_DIEPCTL0_epdis_END       (30)
#define SOC_USBOTG_DIEPCTL0_epena_START     (31)
#define SOC_USBOTG_DIEPCTL0_epena_END       (31)


/*****************************************************************************
 �ṹ��    : SOC_USBOTG_DIEPCTLN_UNION
 �ṹ˵��  : DIEPCTLN �Ĵ����ṹ���塣��ַƫ����:0x0900+(0x20*(n))����ֵ:0x00000000�����:32
 �Ĵ���˵��: IN�˵�n���ƼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mps      : 11; /* bit[0-10] : ����������λΪ�ֽڡ� */
        unsigned int  reserved_0: 4;  /* bit[11-14]: ������ */
        unsigned int  usbactep : 1;  /* bit[15]   : �˵㼤�
                                                    0��û�м��
                                                    1����� */
        unsigned int  dpid     : 1;  /* bit[16]   : ���ݰ�PID״̬������interrupt��bulk������Ч��
                                                    0��DATA0��
                                                    1��DATA1�� */
        unsigned int  naksts   : 1;  /* bit[17]   : NAK״̬��
                                                    0������FIFO״̬�������ְ���
                                                    1���Ըö˵�Ĵ�������һֱ����NAK���ְ��� */
        unsigned int  eptype   : 2;  /* bit[18-19]: �˵����͡�
                                                    00��control��
                                                    01��isochronous��
                                                    10��bulk��
                                                    11��interrupt�� */
        unsigned int  reserved_1: 1;  /* bit[20]   : ������ */
        unsigned int  stall    : 1;  /* bit[21]   : Stall�������á�
                                                    ���ڷ�control�ͷ�isochronous�˵㣬ʹ�ܸ�bit�󣬶����еĴ������󷵻�stall���ְ������ȼ���NAK���øߡ�
                                                    0����ʹ�ܣ�
                                                    1��ʹ�ܡ� */
        unsigned int  txfnum   : 4;  /* bit[22-25]: ��Ӧ�ö˵�ķ���FIFO��š� */
        unsigned int  cnak     : 1;  /* bit[26]   : ���NAK���á����bitд1���NAK���á�
                                                    0���������
                                                    1������� */
        unsigned int  snak     : 1;  /* bit[27]   : NAK���á����ø�bit�󣬼�ʹ����FIFO�����ݣ�Ӳ��Ҳ�����ⷢ�͡����Խ��յ���setup������NAK���֡�
                                                    0������FIFO״̬�������ְ���
                                                    1���Ըö˵�Ĵ�������һֱ����NAK���ְ��� */
        unsigned int  setd0pid : 1;  /* bit[28]   : �������ݰ�PIDΪdata0��
                                                    0�������ã�
                                                    1�����á� */
        unsigned int  setd1pid : 1;  /* bit[29]   : �������ݰ�PIDΪdata1��
                                                    0�������ã�
                                                    1�����á� */
        unsigned int  epdis    : 1;  /* bit[30]   : ���ö˵㲻ʹ�ܡ�
                                                    0�������ã�
                                                    1�����á� */
        unsigned int  epena    : 1;  /* bit[31]   : ���ö˵�ʹ�ܡ�
                                                    0�������ã�
                                                    1�����á� */
    } reg;
} SOC_USBOTG_DIEPCTLN_UNION;
#endif
#define SOC_USBOTG_DIEPCTLN_mps_START       (0)
#define SOC_USBOTG_DIEPCTLN_mps_END         (10)
#define SOC_USBOTG_DIEPCTLN_usbactep_START  (15)
#define SOC_USBOTG_DIEPCTLN_usbactep_END    (15)
#define SOC_USBOTG_DIEPCTLN_dpid_START      (16)
#define SOC_USBOTG_DIEPCTLN_dpid_END        (16)
#define SOC_USBOTG_DIEPCTLN_naksts_START    (17)
#define SOC_USBOTG_DIEPCTLN_naksts_END      (17)
#define SOC_USBOTG_DIEPCTLN_eptype_START    (18)
#define SOC_USBOTG_DIEPCTLN_eptype_END      (19)
#define SOC_USBOTG_DIEPCTLN_stall_START     (21)
#define SOC_USBOTG_DIEPCTLN_stall_END       (21)
#define SOC_USBOTG_DIEPCTLN_txfnum_START    (22)
#define SOC_USBOTG_DIEPCTLN_txfnum_END      (25)
#define SOC_USBOTG_DIEPCTLN_cnak_START      (26)
#define SOC_USBOTG_DIEPCTLN_cnak_END        (26)
#define SOC_USBOTG_DIEPCTLN_snak_START      (27)
#define SOC_USBOTG_DIEPCTLN_snak_END        (27)
#define SOC_USBOTG_DIEPCTLN_setd0pid_START  (28)
#define SOC_USBOTG_DIEPCTLN_setd0pid_END    (28)
#define SOC_USBOTG_DIEPCTLN_setd1pid_START  (29)
#define SOC_USBOTG_DIEPCTLN_setd1pid_END    (29)
#define SOC_USBOTG_DIEPCTLN_epdis_START     (30)
#define SOC_USBOTG_DIEPCTLN_epdis_END       (30)
#define SOC_USBOTG_DIEPCTLN_epena_START     (31)
#define SOC_USBOTG_DIEPCTLN_epena_END       (31)


/*****************************************************************************
 �ṹ��    : SOC_USBOTG_DIEPINTM_UNION
 �ṹ˵��  : DIEPINTM �Ĵ����ṹ���塣��ַƫ����:0x0908+(0x20*(m))����ֵ:0x00000080�����:32
 �Ĵ���˵��: IN�˵�m�ж�״̬�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  xfercompl   : 1;  /* bit[0]    : ��������жϡ�
                                                       0�����жϣ�
                                                       1�����жϡ� */
        unsigned int  epdisbld    : 1;  /* bit[1]    : �˵�û��ʹ���жϡ�ָʾ������������󣬸ö˵�û�б�ʹ�ܡ�
                                                       0�����жϣ�
                                                       1�����жϡ� */
        unsigned int  ahberr      : 1;  /* bit[2]    : AHB�����жϡ�ָʾAHB���ߴ����������ͨ����Ӧ�˵��DMA��ַ�Ĵ������õ�����ĵ�ַ��
                                                       0�����жϣ�
                                                       1�����жϡ� */
        unsigned int  reserved_0  : 1;  /* bit[3]    : ������ */
        unsigned int  intkntxfemp : 1;  /* bit[4]    : ���յ�IN����ʱ������FIFO���жϡ�
                                                       0�����жϣ�
                                                       1�����жϡ� */
        unsigned int  reserved_1  : 1;  /* bit[5]    : ������ */
        unsigned int  inepnakeff  : 1;  /* bit[6]    : NAK������Чָʾ��
                                                       0�����жϣ�
                                                       1�����жϡ� */
        unsigned int  txfemp      : 1;  /* bit[7]    : ����FIFO���жϡ�ָʾ����FIFO��ջ���ȫ�ա���ָʾ��ջ���ȫ��״̬����GAHB[NPTxFEmpLvl]������ֵ������
                                                       0�����жϣ�
                                                       1�����жϡ� */
        unsigned int  txfifoundrn : 1;  /* bit[8]    : ����FIFO�����жϡ�
                                                       0�����жϣ�
                                                       1�����жϡ� */
        unsigned int  bnaintr     : 1;  /* bit[9]    : BNA(Buffer Not Available)�жϡ�����Scatter/Gather DMAʹ��ʱ��Ч��
                                                       0�����жϣ�
                                                       1�����жϡ� */
        unsigned int  reserved_2  : 2;  /* bit[10-11]: ������ */
        unsigned int  bbleerr     : 1;  /* bit[12]   : Bable�����жϡ� */
        unsigned int  nakintrpt   : 1;  /* bit[13]   : NAK�жϡ�ָʾ�˵���յ�NAK���ְ���
                                                       0�����жϣ�
                                                       1�����жϡ� */
        unsigned int  reserved_3  : 18; /* bit[14-31]: ������ */
    } reg;
} SOC_USBOTG_DIEPINTM_UNION;
#endif
#define SOC_USBOTG_DIEPINTM_xfercompl_START    (0)
#define SOC_USBOTG_DIEPINTM_xfercompl_END      (0)
#define SOC_USBOTG_DIEPINTM_epdisbld_START     (1)
#define SOC_USBOTG_DIEPINTM_epdisbld_END       (1)
#define SOC_USBOTG_DIEPINTM_ahberr_START       (2)
#define SOC_USBOTG_DIEPINTM_ahberr_END         (2)
#define SOC_USBOTG_DIEPINTM_intkntxfemp_START  (4)
#define SOC_USBOTG_DIEPINTM_intkntxfemp_END    (4)
#define SOC_USBOTG_DIEPINTM_inepnakeff_START   (6)
#define SOC_USBOTG_DIEPINTM_inepnakeff_END     (6)
#define SOC_USBOTG_DIEPINTM_txfemp_START       (7)
#define SOC_USBOTG_DIEPINTM_txfemp_END         (7)
#define SOC_USBOTG_DIEPINTM_txfifoundrn_START  (8)
#define SOC_USBOTG_DIEPINTM_txfifoundrn_END    (8)
#define SOC_USBOTG_DIEPINTM_bnaintr_START      (9)
#define SOC_USBOTG_DIEPINTM_bnaintr_END        (9)
#define SOC_USBOTG_DIEPINTM_bbleerr_START      (12)
#define SOC_USBOTG_DIEPINTM_bbleerr_END        (12)
#define SOC_USBOTG_DIEPINTM_nakintrpt_START    (13)
#define SOC_USBOTG_DIEPINTM_nakintrpt_END      (13)


/*****************************************************************************
 �ṹ��    : SOC_USBOTG_DIEPTSIZ0_UNION
 �ṹ˵��  : DIEPTSIZ0 �Ĵ����ṹ���塣��ַƫ����:0x0910����ֵ:0x00000000�����:32
 �Ĵ���˵��: IN�˵�0�����С�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  xfersize : 7;  /* bit[0-6]  : �����С����λΪbyte�����������0�ᴥ����������жϡ�ÿ��1����������д�뷢��FIFOʱ��������ȥ���������¡� */
        unsigned int  reserved_0: 12; /* bit[7-18] : ������ */
        unsigned int  pktcnt   : 2;  /* bit[19-20]: ��������ÿ��1�����ӷ���FIFO����ʱ��������еݼ��� */
        unsigned int  reserved_1: 11; /* bit[21-31]: ������ */
    } reg;
} SOC_USBOTG_DIEPTSIZ0_UNION;
#endif
#define SOC_USBOTG_DIEPTSIZ0_xfersize_START  (0)
#define SOC_USBOTG_DIEPTSIZ0_xfersize_END    (6)
#define SOC_USBOTG_DIEPTSIZ0_pktcnt_START    (19)
#define SOC_USBOTG_DIEPTSIZ0_pktcnt_END      (20)


/*****************************************************************************
 �ṹ��    : SOC_USBOTG_DIEPTSIZN_UNION
 �ṹ˵��  : DIEPTSIZN �Ĵ����ṹ���塣��ַƫ����:0x0910+(0x20*(n))����ֵ:0x00000000�����:32
 �Ĵ���˵��: IN�˵�n�����С�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  xfersize : 19; /* bit[0-18] : �����С����λΪbyte�����������0�ᴥ����������жϡ�ÿ��1����������д�뷢��FIFOʱ��������ȥ���������¡� */
        unsigned int  pktcnt   : 10; /* bit[19-28]: ��������ָʾ�ô�������ݰ�������ÿ��1�����ӷ���FIFO����ʱ��������еݼ��� */
        unsigned int  mc       : 2;  /* bit[29-30]: �������ڶ˵㣬����ָʾÿ��΢֡�ڱ��봫��İ�������Ӳ�����ݸ����ֵ����IN���ݰ���PID��
                                                    ���ڷ����ڴ��䣬����ָʾ�л�����1���˵�ǰ����ǰ�˵���봫��İ������� */
        unsigned int  reserved : 1;  /* bit[31]   : ������ */
    } reg;
} SOC_USBOTG_DIEPTSIZN_UNION;
#endif
#define SOC_USBOTG_DIEPTSIZN_xfersize_START  (0)
#define SOC_USBOTG_DIEPTSIZN_xfersize_END    (18)
#define SOC_USBOTG_DIEPTSIZN_pktcnt_START    (19)
#define SOC_USBOTG_DIEPTSIZN_pktcnt_END      (28)
#define SOC_USBOTG_DIEPTSIZN_mc_START        (29)
#define SOC_USBOTG_DIEPTSIZN_mc_END          (30)


/*****************************************************************************
 �ṹ��    : SOC_USBOTG_DIEPDMAM_UNION
 �ṹ˵��  : DIEPDMAM �Ĵ����ṹ���塣��ַƫ����:0x0914+(0x20*(m))����ֵ:0x00000000�����:32
 �Ĵ���˵��: IN�˵�m DMA��ַ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  dmaaddr : 32; /* bit[0-31]: DMA��ַ����Scatter/Gatherʹ��ʱ��������������ʼ��ַ������32bit���롣 */
    } reg;
} SOC_USBOTG_DIEPDMAM_UNION;
#endif
#define SOC_USBOTG_DIEPDMAM_dmaaddr_START  (0)
#define SOC_USBOTG_DIEPDMAM_dmaaddr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_USBOTG_DTXFSTSM_UNION
 �ṹ˵��  : DTXFSTSM �Ĵ����ṹ���塣��ַƫ����:0x0918����ֵ:0x00001000�����:32
 �Ĵ���˵��: IN�˵�m����FIFO״̬�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ineptxfspcavail : 16; /* bit[0-15] : ����FIFO���ÿռ䣬��λΪ32bit�� */
        unsigned int  reserved        : 16; /* bit[16-31]: ������ */
    } reg;
} SOC_USBOTG_DTXFSTSM_UNION;
#endif
#define SOC_USBOTG_DTXFSTSM_ineptxfspcavail_START  (0)
#define SOC_USBOTG_DTXFSTSM_ineptxfspcavail_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_USBOTG_DIEPDMABN_UNION
 �ṹ˵��  : DIEPDMABN �Ĵ����ṹ���塣��ַƫ����:0x091C+(0x20*(m))����ֵ:0x00000000�����:32
 �Ĵ���˵��: IN�˵�m DMA buffer��ַ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  dmabufferaddr : 32; /* bit[0-31]: DMA buffer��ַ������Scatter/Gatherʹ��ʱ��Ч��ָʾ��ǰbuffer�ĵ�ַ�� */
    } reg;
} SOC_USBOTG_DIEPDMABN_UNION;
#endif
#define SOC_USBOTG_DIEPDMABN_dmabufferaddr_START  (0)
#define SOC_USBOTG_DIEPDMABN_dmabufferaddr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_USBOTG_DOEPCTL0_UNION
 �ṹ˵��  : DOEPCTL0 �Ĵ����ṹ���塣��ַƫ����:0x0B00����ֵ:0x00008000�����:32
 �Ĵ���˵��: OUT�˵�0���ƼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mps      : 2;  /* bit[0-1]  : ������С����IN�˵�0������һ����
                                                    00��64�ֽڣ�
                                                    01��32�ֽڣ�
                                                    10��16�ֽڣ�
                                                    11��8�ֽڡ� */
        unsigned int  reserved_0: 13; /* bit[2-14] : ������ */
        unsigned int  usbactep : 1;  /* bit[15]   : �˵��Ƿ񼤻��bitһֱΪ1����ʾ�˵�0һֱ���ڼ���״̬�� */
        unsigned int  reserved_1: 1;  /* bit[16]   : ������ */
        unsigned int  naksts   : 1;  /* bit[17]   : NAK״̬��
                                                    0������FIFO״̬�������ְ���
                                                    1���Ըö˵�Ĵ�������һֱ����NAK���ְ��� */
        unsigned int  eptype   : 2;  /* bit[18-19]: �˵����͡�һֱΪ0����ʾ�˵�0�ǿ��ƶ˵㡣 */
        unsigned int  snp      : 1;  /* bit[20]   : ̽��ģʽ���á�ʹ�ܸ�ģʽ��Ӳ�������OUT����ֱ�ӽ����յ�������д��memory�С�
                                                    0����ʹ�ܣ�
                                                    1��ʹ�ܡ� */
        unsigned int  stall    : 1;  /* bit[21]   : STALL�������á�������ø�bitʹ�ܣ�Ӳ���յ�setup���������bit����bitʹ�ܣ��Ըö˵������һֱ��ӦSTALL���֡���bit�����ȼ�����NAK���á�
                                                    0����ʹ�ܣ�
                                                    1��ʹ�ܡ� */
        unsigned int  txfnum   : 4;  /* bit[22-25]: �˵�0�ķ���FIFO��š� */
        unsigned int  cnak     : 1;  /* bit[26]   : ���NAK���á����bitд1���NAK���á�
                                                    0���������
                                                    1������� */
        unsigned int  snak     : 1;  /* bit[27]   : NAK���á����ø�bit��Ӳ���ᶪ�����н��յ������ݣ���ʹ����FIFO�пռ䡣
                                                    0������FIFO״̬�������ְ���
                                                    1���Ըö˵�Ĵ�������һֱ����NAK���ְ��� */
        unsigned int  reserved_2: 2;  /* bit[28-29]: ������ */
        unsigned int  epdis    : 1;  /* bit[30]   : �˵�ʹ�������
                                                    0���������
                                                    1������� */
        unsigned int  epena    : 1;  /* bit[31]   : �˵�ʹ�ܡ���������������»������λ�����ƴ���setup�׶ν������˵�ʹ����������������
                                                    0����ʹ�ܣ�
                                                    1��ʹ�ܡ� */
    } reg;
} SOC_USBOTG_DOEPCTL0_UNION;
#endif
#define SOC_USBOTG_DOEPCTL0_mps_START       (0)
#define SOC_USBOTG_DOEPCTL0_mps_END         (1)
#define SOC_USBOTG_DOEPCTL0_usbactep_START  (15)
#define SOC_USBOTG_DOEPCTL0_usbactep_END    (15)
#define SOC_USBOTG_DOEPCTL0_naksts_START    (17)
#define SOC_USBOTG_DOEPCTL0_naksts_END      (17)
#define SOC_USBOTG_DOEPCTL0_eptype_START    (18)
#define SOC_USBOTG_DOEPCTL0_eptype_END      (19)
#define SOC_USBOTG_DOEPCTL0_snp_START       (20)
#define SOC_USBOTG_DOEPCTL0_snp_END         (20)
#define SOC_USBOTG_DOEPCTL0_stall_START     (21)
#define SOC_USBOTG_DOEPCTL0_stall_END       (21)
#define SOC_USBOTG_DOEPCTL0_txfnum_START    (22)
#define SOC_USBOTG_DOEPCTL0_txfnum_END      (25)
#define SOC_USBOTG_DOEPCTL0_cnak_START      (26)
#define SOC_USBOTG_DOEPCTL0_cnak_END        (26)
#define SOC_USBOTG_DOEPCTL0_snak_START      (27)
#define SOC_USBOTG_DOEPCTL0_snak_END        (27)
#define SOC_USBOTG_DOEPCTL0_epdis_START     (30)
#define SOC_USBOTG_DOEPCTL0_epdis_END       (30)
#define SOC_USBOTG_DOEPCTL0_epena_START     (31)
#define SOC_USBOTG_DOEPCTL0_epena_END       (31)


/*****************************************************************************
 �ṹ��    : SOC_USBOTG_DOEPCTLN_UNION
 �ṹ˵��  : DOEPCTLN �Ĵ����ṹ���塣��ַƫ����:0x0B00+(0x20*(n))����ֵ:0x00000000�����:32
 �Ĵ���˵��: OUT�˵�n���ƼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mps      : 11; /* bit[0-10] : ����������λΪ�ֽڡ� */
        unsigned int  reserved : 4;  /* bit[11-14]: ������ */
        unsigned int  usbactep : 1;  /* bit[15]   : �˵㼤�
                                                    1�����
                                                    0��û�м�� */
        unsigned int  dpid     : 1;  /* bit[16]   : ���ݰ�PID״̬������intterupt��bulk������Ч��
                                                    0��DATA0��
                                                    1��DATA1�� */
        unsigned int  naksts   : 1;  /* bit[17]   : NAK״̬��
                                                    0������FIFO״̬�������ְ���
                                                    1���Ըö˵�Ĵ�������һֱ����NAK���ְ��� */
        unsigned int  eptype   : 2;  /* bit[18-19]: �˵����͡�
                                                    00��control��
                                                    01��isochronous��
                                                    10��bulk��
                                                    11��interrupt�� */
        unsigned int  snp      : 1;  /* bit[20]   : ̽��ģʽ���á�ʹ�ܸ�ģʽ��Ӳ�������OUT����ֱ�ӽ����յ�������д��memory�С�
                                                    0����ʹ�ܣ�
                                                    1��ʹ�ܡ� */
        unsigned int  stall    : 1;  /* bit[21]   : Stall�������á�
                                                    ���ڷ�control�ͷ�isochronous�˵㣬ʹ�ܸ�bit�󣬶����еĴ������󷵻�stall���ְ������ȼ���NAK���øߡ�
                                                    0����ʹ�ܣ�
                                                    1��ʹ�ܡ� */
        unsigned int  txfnum   : 4;  /* bit[22-25]: ��Ӧ�ö˵�ķ���FIFO��š� */
        unsigned int  cnak     : 1;  /* bit[26]   : ���NAK���á����bitд1���NAK���á�
                                                    0���������
                                                    1������� */
        unsigned int  snak     : 1;  /* bit[27]   : NAK���á����ø�bit��Ӳ���ᶪ�����н��յ������ݣ���ʹ����FIFO�пռ䡣
                                                    0������FIFO״̬�������ְ���
                                                    1���Ըö˵�Ĵ�������һֱ����NAK���ְ��� */
        unsigned int  setd0pid : 1;  /* bit[28]   : �������ݰ�PIDΪdata0��
                                                    0�������ã�
                                                    1�����á� */
        unsigned int  setd1pid : 1;  /* bit[29]   : �������ݰ�PIDΪdata1��
                                                    0�������ã�
                                                    1�����á� */
        unsigned int  epdis    : 1;  /* bit[30]   : ���ö˵㲻ʹ�ܡ�
                                                    0�������ã�
                                                    1�����á� */
        unsigned int  epena    : 1;  /* bit[31]   : ���ö˵�ʹ�ܡ�
                                                    0�������ã�
                                                    1�����á� */
    } reg;
} SOC_USBOTG_DOEPCTLN_UNION;
#endif
#define SOC_USBOTG_DOEPCTLN_mps_START       (0)
#define SOC_USBOTG_DOEPCTLN_mps_END         (10)
#define SOC_USBOTG_DOEPCTLN_usbactep_START  (15)
#define SOC_USBOTG_DOEPCTLN_usbactep_END    (15)
#define SOC_USBOTG_DOEPCTLN_dpid_START      (16)
#define SOC_USBOTG_DOEPCTLN_dpid_END        (16)
#define SOC_USBOTG_DOEPCTLN_naksts_START    (17)
#define SOC_USBOTG_DOEPCTLN_naksts_END      (17)
#define SOC_USBOTG_DOEPCTLN_eptype_START    (18)
#define SOC_USBOTG_DOEPCTLN_eptype_END      (19)
#define SOC_USBOTG_DOEPCTLN_snp_START       (20)
#define SOC_USBOTG_DOEPCTLN_snp_END         (20)
#define SOC_USBOTG_DOEPCTLN_stall_START     (21)
#define SOC_USBOTG_DOEPCTLN_stall_END       (21)
#define SOC_USBOTG_DOEPCTLN_txfnum_START    (22)
#define SOC_USBOTG_DOEPCTLN_txfnum_END      (25)
#define SOC_USBOTG_DOEPCTLN_cnak_START      (26)
#define SOC_USBOTG_DOEPCTLN_cnak_END        (26)
#define SOC_USBOTG_DOEPCTLN_snak_START      (27)
#define SOC_USBOTG_DOEPCTLN_snak_END        (27)
#define SOC_USBOTG_DOEPCTLN_setd0pid_START  (28)
#define SOC_USBOTG_DOEPCTLN_setd0pid_END    (28)
#define SOC_USBOTG_DOEPCTLN_setd1pid_START  (29)
#define SOC_USBOTG_DOEPCTLN_setd1pid_END    (29)
#define SOC_USBOTG_DOEPCTLN_epdis_START     (30)
#define SOC_USBOTG_DOEPCTLN_epdis_END       (30)
#define SOC_USBOTG_DOEPCTLN_epena_START     (31)
#define SOC_USBOTG_DOEPCTLN_epena_END       (31)


/*****************************************************************************
 �ṹ��    : SOC_USBOTG_DOEPINTM_UNION
 �ṹ˵��  : DOEPINTM �Ĵ����ṹ���塣��ַƫ����:0x0B08+(0x20*(m))����ֵ:0x00000000�����:32
 �Ĵ���˵��: OUT�˵�m�ж�״̬�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  xfercompl   : 1;  /* bit[0]    : ��������жϡ�
                                                       0�����жϣ�
                                                       1�����жϡ� */
        unsigned int  epdisbld    : 1;  /* bit[1]    : �˵�û��ʹ���жϡ�ָʾ������������󣬸ö˵�û�б�ʹ�ܡ�
                                                       0�����жϣ�
                                                       1�����жϡ� */
        unsigned int  ahberr      : 1;  /* bit[2]    : AHB�����жϡ�ָʾAHB���ߴ����������ͨ����Ӧ�˵��DMA��ַ�Ĵ����õ�����ĵ�ַ��
                                                       0�����жϣ�
                                                       1�����жϡ� */
        unsigned int  reserved_0  : 1;  /* bit[3]    : ������ */
        unsigned int  intkntxfemp : 1;  /* bit[4]    : ���յ�IN����ʱ������FIFO���жϡ�
                                                       0�����жϣ�
                                                       1�����жϡ� */
        unsigned int  reserved_1  : 1;  /* bit[5]    : ������ */
        unsigned int  inepnakeff  : 1;  /* bit[6]    : NAK������Чָʾ��
                                                       0�����жϣ�
                                                       1�����жϡ� */
        unsigned int  reserved_2  : 1;  /* bit[7]    : ������ */
        unsigned int  outpkterr   : 1;  /* bit[8]    : OUT������ָʾ����FIFO�������OUT����CRC���󡣸�bit��ˮ��ʹ��ʱ��Ч��
                                                       0�����жϣ�
                                                       1�����жϡ� */
        unsigned int  bnaintr     : 1;  /* bit[9]    : BNA(Buffer Not Available)�жϡ�����Scatter/Gather DMAʹ��ʱ��Ч��
                                                       0�����жϣ�
                                                       1�����жϡ� */
        unsigned int  reserved_3  : 1;  /* bit[10]   : ������ */
        unsigned int  pktdrpsts   : 1;  /* bit[11]   : ������״̬��ָʾ��1��isochronous������������bitû������λ���Ҳ�������ж��ϱ�������Scatter/Gather DMAģʽ��ʹ��ʱ��Ч��
                                                       0�����жϣ�
                                                       1�����жϡ� */
        unsigned int  bbleerr     : 1;  /* bit[12]   : Bable�����жϡ�
                                                       0�����жϣ�
                                                       1�����жϡ� */
        unsigned int  nakintrpt   : 1;  /* bit[13]   : NAK�жϡ�ָʾ�˵���յ�NAK���ְ���
                                                       0�����жϣ�
                                                       1�����жϡ� */
        unsigned int  nyet        : 1;  /* bit[14]   : NYET�жϡ��ö˵���Ϊ��isochronous�˵�ʱ��NYET���ְ����ͻᴥ�����жϡ�
                                                       0�����жϣ�
                                                       1�����жϡ� */
        unsigned int  reserved_4  : 17; /* bit[15-31]: ������ */
    } reg;
} SOC_USBOTG_DOEPINTM_UNION;
#endif
#define SOC_USBOTG_DOEPINTM_xfercompl_START    (0)
#define SOC_USBOTG_DOEPINTM_xfercompl_END      (0)
#define SOC_USBOTG_DOEPINTM_epdisbld_START     (1)
#define SOC_USBOTG_DOEPINTM_epdisbld_END       (1)
#define SOC_USBOTG_DOEPINTM_ahberr_START       (2)
#define SOC_USBOTG_DOEPINTM_ahberr_END         (2)
#define SOC_USBOTG_DOEPINTM_intkntxfemp_START  (4)
#define SOC_USBOTG_DOEPINTM_intkntxfemp_END    (4)
#define SOC_USBOTG_DOEPINTM_inepnakeff_START   (6)
#define SOC_USBOTG_DOEPINTM_inepnakeff_END     (6)
#define SOC_USBOTG_DOEPINTM_outpkterr_START    (8)
#define SOC_USBOTG_DOEPINTM_outpkterr_END      (8)
#define SOC_USBOTG_DOEPINTM_bnaintr_START      (9)
#define SOC_USBOTG_DOEPINTM_bnaintr_END        (9)
#define SOC_USBOTG_DOEPINTM_pktdrpsts_START    (11)
#define SOC_USBOTG_DOEPINTM_pktdrpsts_END      (11)
#define SOC_USBOTG_DOEPINTM_bbleerr_START      (12)
#define SOC_USBOTG_DOEPINTM_bbleerr_END        (12)
#define SOC_USBOTG_DOEPINTM_nakintrpt_START    (13)
#define SOC_USBOTG_DOEPINTM_nakintrpt_END      (13)
#define SOC_USBOTG_DOEPINTM_nyet_START         (14)
#define SOC_USBOTG_DOEPINTM_nyet_END           (14)


/*****************************************************************************
 �ṹ��    : SOC_USBOTG_DOEPTSIZ0_UNION
 �ṹ˵��  : DOEPTSIZ0 �Ĵ����ṹ���塣��ַƫ����:0x0B10����ֵ:0x00000000�����:32
 �Ĵ���˵��: OUT�˵�0�����С�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  xfersize : 7;  /* bit[0-6]  : �����С����λΪbyte�����������0�ᴥ����������жϡ�ÿ��1���������ݴӽ���FIFO����д���ⲿmemory��ʱ��������ȥ���������¡� */
        unsigned int  reserved_0: 12; /* bit[7-18] : ������ */
        unsigned int  pktcnt   : 2;  /* bit[19-20]: ��������ÿ��1����д�����FIFO��ʱ��������еݼ��� */
        unsigned int  reserved_1: 8;  /* bit[21-28]: ������ */
        unsigned int  supcnt   : 2;  /* bit[29-30]: setup������������ָʾ���������յ�setup���������� */
        unsigned int  reserved_2: 1;  /* bit[31]   : ������ */
    } reg;
} SOC_USBOTG_DOEPTSIZ0_UNION;
#endif
#define SOC_USBOTG_DOEPTSIZ0_xfersize_START  (0)
#define SOC_USBOTG_DOEPTSIZ0_xfersize_END    (6)
#define SOC_USBOTG_DOEPTSIZ0_pktcnt_START    (19)
#define SOC_USBOTG_DOEPTSIZ0_pktcnt_END      (20)
#define SOC_USBOTG_DOEPTSIZ0_supcnt_START    (29)
#define SOC_USBOTG_DOEPTSIZ0_supcnt_END      (30)


/*****************************************************************************
 �ṹ��    : SOC_USBOTG_DOEPTSIZN_UNION
 �ṹ˵��  : DOEPTSIZN �Ĵ����ṹ���塣��ַƫ����:0x0B10+(0x20*(n))����ֵ:0x00000000�����:32
 �Ĵ���˵��: OUT�˵�n�����С�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  xfersize : 19; /* bit[0-18] : �����С����λΪbyte�����������0�ᴥ����������жϡ�ÿ��1���������ݴӽ���FIFO����д���ⲿmemory��ʱ��������ȥ���������¡� */
        unsigned int  pktcnt   : 10; /* bit[19-28]: ��������ÿ��1����д�����FIFO��ʱ��������еݼ��� */
        unsigned int  rxdpid   : 2;  /* bit[29-30]: ����isochronous�˵㣬ָʾ���յ������ݰ�PID��
                                                    00��DATA0��
                                                    01��DATA1��
                                                    10��DATA2��
                                                    11��MDATA��
                                                    ���ڿ��ƶ˵㣬ָʾ���Խ��յı�����setup��������
                                                    00��reserved��
                                                    01��1����
                                                    10��2����
                                                    11��3���� */
        unsigned int  reserved : 1;  /* bit[31]   : ������ */
    } reg;
} SOC_USBOTG_DOEPTSIZN_UNION;
#endif
#define SOC_USBOTG_DOEPTSIZN_xfersize_START  (0)
#define SOC_USBOTG_DOEPTSIZN_xfersize_END    (18)
#define SOC_USBOTG_DOEPTSIZN_pktcnt_START    (19)
#define SOC_USBOTG_DOEPTSIZN_pktcnt_END      (28)
#define SOC_USBOTG_DOEPTSIZN_rxdpid_START    (29)
#define SOC_USBOTG_DOEPTSIZN_rxdpid_END      (30)


/*****************************************************************************
 �ṹ��    : SOC_USBOTG_DOEPDMAM_UNION
 �ṹ˵��  : DOEPDMAM �Ĵ����ṹ���塣��ַƫ����:0x0B14+(0x20*(m))����ֵ:0x00000000�����:32
 �Ĵ���˵��: OUT�˵�m DMA��ַ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  dmaaddr : 32; /* bit[0-31]: DMA��ַ����Scatter/Gatherʹ��ʱ������Ϊ��������ʼ��ַ�� */
    } reg;
} SOC_USBOTG_DOEPDMAM_UNION;
#endif
#define SOC_USBOTG_DOEPDMAM_dmaaddr_START  (0)
#define SOC_USBOTG_DOEPDMAM_dmaaddr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_USBOTG_DOEPDMABM_UNION
 �ṹ˵��  : DOEPDMABM �Ĵ����ṹ���塣��ַƫ����:0x0B1C+(0x20*(m))����ֵ:0x00000000�����:32
 �Ĵ���˵��: OUT�˵�m DMA buffer��ַ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  dmabufferaddr : 32; /* bit[0-31]: DMA buffer��ַ������Scatter/Gatherʹ��ʱ��Ч��ָʾ��ǰbuffer�ĵ�ַ�� */
    } reg;
} SOC_USBOTG_DOEPDMABM_UNION;
#endif
#define SOC_USBOTG_DOEPDMABM_dmabufferaddr_START  (0)
#define SOC_USBOTG_DOEPDMABM_dmabufferaddr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_USBOTG_PCGCCTL_UNION
 �ṹ˵��  : PCGCCTL �Ĵ����ṹ���塣��ַƫ����:0x0E00����ֵ:0xA80A8000�����:32
 �Ĵ���˵��: ���ĺ�ʱ���ſؿ��ƼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved     : 14; /* bit[0-13] : ������ */
        unsigned int  restorevalue : 18; /* bit[14-31]: �ָ�ֵ��
                                                        Bit[31]��deviceģʽ��
                                                        0��hostģʽ��
                                                        1��deviceģʽ��
                                                        Bit[30:29]���˿��ٶȡ�
                                                        00�����٣�
                                                        01��ȫ�٣�
                                                        others��reserved��
                                                        Bit[26:20]��device��ַ��
                                                        Bit[19]��mac_termselect�� 
                                                        0��HS_TERM��
                                                        1��FS_TERM��
                                                        Bit[18:17]��mac_xcvrselect��
                                                        00��HS_XCVR��
                                                        01��FS_XCVR��
                                                        10��LS_XCVR��
                                                        11��LFS_XCVR��
                                                        Bit[16]���˿ڵ�Դ���ơ�
                                                        0���˿ڵ�Դ��ʹ�ܣ�
                                                        1���˿ڵ�Դʹ�ܡ�
                                                        bit[15:14]��prt_clk_sel�� */
    } reg;
} SOC_USBOTG_PCGCCTL_UNION;
#endif
#define SOC_USBOTG_PCGCCTL_restorevalue_START  (14)
#define SOC_USBOTG_PCGCCTL_restorevalue_END    (31)






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

#endif /* end of soc_usbotg_interface.h */
