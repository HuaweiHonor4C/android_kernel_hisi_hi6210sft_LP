

/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/

#ifndef __SOC_SYSNOC_INTERFACE_H__
#define __SOC_SYSNOC_INTERFACE_H__

#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif



/*****************************************************************************
  2 �궨��
*****************************************************************************/

/****************************************************************************
                     (1/3) SERVICE
 ****************************************************************************/
/* �Ĵ���˵����SYSNOC Err LOGGER ��ID
   λ����UNION�ṹ:  SOC_SYSNOC_ERR_LOGGER_ID_COREID_UNION */
#define SOC_SYSNOC_ERR_LOGGER_ID_COREID_ADDR(base)    ((base) + (0x0000))

/* �Ĵ���˵�������ߴ���汾�Ĵ���
   λ����UNION�ṹ:  SOC_SYSNOC_ERR_LOGGER_ID_REVISIONID_UNION */
#define SOC_SYSNOC_ERR_LOGGER_ID_REVISIONID_ADDR(base) ((base) + (0x0004))

/* �Ĵ���˵����SYSNOC Err LOGGER ʹ��
   λ����UNION�ṹ:  SOC_SYSNOC_ERR_LOGGER_FAULTEN_UNION */
#define SOC_SYSNOC_ERR_LOGGER_FAULTEN_ADDR(base)      ((base) + (0x0008))

/* �Ĵ���˵����Error LOGGER ��Чָʾ�Ĵ���
   λ����UNION�ṹ:  SOC_SYSNOC_ERR_LOGGER_ERRVLD_UNION */
#define SOC_SYSNOC_ERR_LOGGER_ERRVLD_ADDR(base)       ((base) + (0x000C))

/* �Ĵ���˵�����ж�����Ĵ���
   λ����UNION�ṹ:  SOC_SYSNOC_ERR_LOGGER_ERRCLR_UNION */
#define SOC_SYSNOC_ERR_LOGGER_ERRCLR_ADDR(base)       ((base) + (0x0010))

/* �Ĵ���˵����Error log0
   λ����UNION�ṹ:  SOC_SYSNOC_ERR_LOGGER_ERRLOG0_UNION */
#define SOC_SYSNOC_ERR_LOGGER_ERRLOG0_ADDR(base)      ((base) + (0x0014))

/* �Ĵ���˵����Error log1
   λ����UNION�ṹ:  SOC_SYSNOC_ERR_LOGGER_ERRLOG1_UNION */
#define SOC_SYSNOC_ERR_LOGGER_ERRLOG1_ADDR(base)      ((base) + (0x0018))

/* �Ĵ���˵����Error log3
   λ����UNION�ṹ:  SOC_SYSNOC_ERR_LOGGER_ERRLOG3_UNION */
#define SOC_SYSNOC_ERR_LOGGER_ERRLOG3_ADDR(base)      ((base) + (0x0020))

/* �Ĵ���˵����Error log7
   λ����UNION�ṹ:  SOC_SYSNOC_ERR_LOGGER_ERRLOG7_UNION */
#define SOC_SYSNOC_ERR_LOGGER_ERRLOG7_ADDR(base)      ((base) + (0x0030))

/* �Ĵ���˵����ACPU QoS Generator ����ID
   λ����UNION�ṹ:  SOC_SYSNOC_ACPU_QOSGENERATOR_ID_COREID_UNION */
#define SOC_SYSNOC_ACPU_QOSGENERATOR_ID_COREID_ADDR(base) ((base) + (0x0100))

/* �Ĵ���˵����ACPU QoS Generator ���ߴ���汾�Ĵ���
   λ����UNION�ṹ:  SOC_SYSNOC_ACPU_QOSGENERATOR_ID_REVISIONID_UNION */
#define SOC_SYSNOC_ACPU_QOSGENERATOR_ID_REVISIONID_ADDR(base) ((base) + (0x0104))

/* �Ĵ���˵����ACPU QoS Generator ���ȼ��Ĵ���
   λ����UNION�ṹ:  SOC_SYSNOC_ACPU_QOSGENERATOR_PRIORITY_UNION */
#define SOC_SYSNOC_ACPU_QOSGENERATOR_PRIORITY_ADDR(base) ((base) + (0x0108))

/* �Ĵ���˵����ACPU QoS Generator ģʽ�Ĵ���
   λ����UNION�ṹ:  SOC_SYSNOC_ACPU_QOSGENERATOR_MODE_UNION */
#define SOC_SYSNOC_ACPU_QOSGENERATOR_MODE_ADDR(base)  ((base) + (0x010C))

/* �Ĵ���˵����ACPU QoS Generator �ⲿ���ƼĴ���
   λ����UNION�ṹ:  SOC_SYSNOC_ACPU_QOSGENERATOR_EXTCONTROL_UNION */
#define SOC_SYSNOC_ACPU_QOSGENERATOR_EXTCONTROL_ADDR(base) ((base) + (0x0118))

/* �Ĵ���˵����HIFI QoS Generator ����ID
   λ����UNION�ṹ:  SOC_SYSNOC_HIFI_QOSGENERATOR_ID_COREID_UNION */
#define SOC_SYSNOC_HIFI_QOSGENERATOR_ID_COREID_ADDR(base) ((base) + (0x0200))

/* �Ĵ���˵����HIFI QoS Generator���ߴ���汾�Ĵ���
   λ����UNION�ṹ:  SOC_SYSNOC_HIFI_QOSGENERATOR_ID_REVISIONID_UNION */
#define SOC_SYSNOC_HIFI_QOSGENERATOR_ID_REVISIONID_ADDR(base) ((base) + (0x0204))

/* �Ĵ���˵����HIFI QoS Generator���ȼ��Ĵ���
   λ����UNION�ṹ:  SOC_SYSNOC_HIFI_QOSGENERATOR_PRIORITY_UNION */
#define SOC_SYSNOC_HIFI_QOSGENERATOR_PRIORITY_ADDR(base) ((base) + (0x0208))

/* �Ĵ���˵����HIFI QoS Generator ģʽ�Ĵ���
   λ����UNION�ṹ:  SOC_SYSNOC_HIFI_QOSGENERATOR_MODE_UNION */
#define SOC_SYSNOC_HIFI_QOSGENERATOR_MODE_ADDR(base)  ((base) + (0x020C))

/* �Ĵ���˵����HIFI QoS Generator ������ֵ�Ĵ���
   λ����UNION�ṹ:  SOC_SYSNOC_HIFI_QOSGENERATOR_BANDWIDTH_UNION */
#define SOC_SYSNOC_HIFI_QOSGENERATOR_BANDWIDTH_ADDR(base) ((base) + (0x0210))

/* �Ĵ���˵����HIFI QoS Generator �������Ĵ���
   λ����UNION�ṹ:  SOC_SYSNOC_HIFI_QOSGENERATOR_SATURATION_UNION */
#define SOC_SYSNOC_HIFI_QOSGENERATOR_SATURATION_ADDR(base) ((base) + (0x0214))

/* �Ĵ���˵����HIFI QoS Generator�ⲿ���ƼĴ���
   λ����UNION�ṹ:  SOC_SYSNOC_HIFI_QOSGENERATOR_EXTCONTROL_UNION */
#define SOC_SYSNOC_HIFI_QOSGENERATOR_EXTCONTROL_ADDR(base) ((base) + (0x0218))

/* �Ĵ���˵����MMC0 QoS Generator ����ID
   λ����UNION�ṹ:  SOC_SYSNOC_MMC0_QOSGENERATOR_ID_COREID_UNION */
#define SOC_SYSNOC_MMC0_QOSGENERATOR_ID_COREID_ADDR(base) ((base) + (0x0300))

/* �Ĵ���˵����MMC0  QoS Generator���ߴ���汾�Ĵ���
   λ����UNION�ṹ:  SOC_SYSNOC_MMC0_QOSGENERATOR_ID_REVISIONID_UNION */
#define SOC_SYSNOC_MMC0_QOSGENERATOR_ID_REVISIONID_ADDR(base) ((base) + (0x0304))

/* �Ĵ���˵����MMC0 QoS Generator���ȼ��Ĵ���
   λ����UNION�ṹ:  SOC_SYSNOC_MMC0_QOSGENERATOR_PRIORITY_UNION */
#define SOC_SYSNOC_MMC0_QOSGENERATOR_PRIORITY_ADDR(base) ((base) + (0x0308))

/* �Ĵ���˵����MMC0 QoS Generatorģʽ�Ĵ���
   λ����UNION�ṹ:  SOC_SYSNOC_MMC0_QOSGENERATOR_MODE_UNION */
#define SOC_SYSNOC_MMC0_QOSGENERATOR_MODE_ADDR(base)  ((base) + (0x030C))

/* �Ĵ���˵����MMC0 QoS Generator�ⲿ���ƼĴ���
   λ����UNION�ṹ:  SOC_SYSNOC_MMC0_QOSGENERATOR_EXTCONTROL_UNION */
#define SOC_SYSNOC_MMC0_QOSGENERATOR_EXTCONTROL_ADDR(base) ((base) + (0x0318))

/* �Ĵ���˵����MMC1 QoS Generator ����ID
   λ����UNION�ṹ:  SOC_SYSNOC_MMC1_QOSGENERATOR_ID_COREID_UNION */
#define SOC_SYSNOC_MMC1_QOSGENERATOR_ID_COREID_ADDR(base) ((base) + (0x0400))

/* �Ĵ���˵����MMC1  QoS Generator���ߴ���汾�Ĵ���
   λ����UNION�ṹ:  SOC_SYSNOC_MMC1_QOSGENERATOR_ID_REVISIONID_UNION */
#define SOC_SYSNOC_MMC1_QOSGENERATOR_ID_REVISIONID_ADDR(base) ((base) + (0x0404))

/* �Ĵ���˵����MMC1 QoS Generator���ȼ��Ĵ���
   λ����UNION�ṹ:  SOC_SYSNOC_MMC1_QOSGENERATOR_PRIORITY_UNION */
#define SOC_SYSNOC_MMC1_QOSGENERATOR_PRIORITY_ADDR(base) ((base) + (0x0408))

/* �Ĵ���˵����MMC1 QoS Generatorģʽ�Ĵ���
   λ����UNION�ṹ:  SOC_SYSNOC_MMC1_QOSGENERATOR_MODE_UNION */
#define SOC_SYSNOC_MMC1_QOSGENERATOR_MODE_ADDR(base)  ((base) + (0x040C))

/* �Ĵ���˵����MMC1 QoS Generator�ⲿ���ƼĴ���
   λ����UNION�ṹ:  SOC_SYSNOC_MMC1_QOSGENERATOR_EXTCONTROL_UNION */
#define SOC_SYSNOC_MMC1_QOSGENERATOR_EXTCONTROL_ADDR(base) ((base) + (0x0418))

/* �Ĵ���˵����MMC2 QoS Generator ����ID
   λ����UNION�ṹ:  SOC_SYSNOC_MMC2_QOSGENERATOR_ID_COREID_UNION */
#define SOC_SYSNOC_MMC2_QOSGENERATOR_ID_COREID_ADDR(base) ((base) + (0x0500))

/* �Ĵ���˵����MMC2  QoS Generator���ߴ���汾�Ĵ���
   λ����UNION�ṹ:  SOC_SYSNOC_MMC2_QOSGENERATOR_ID_REVISIONID_UNION */
#define SOC_SYSNOC_MMC2_QOSGENERATOR_ID_REVISIONID_ADDR(base) ((base) + (0x0504))

/* �Ĵ���˵����MMC2 QoS Generator���ȼ��Ĵ���
   λ����UNION�ṹ:  SOC_SYSNOC_MMC2_QOSGENERATOR_PRIORITY_UNION */
#define SOC_SYSNOC_MMC2_QOSGENERATOR_PRIORITY_ADDR(base) ((base) + (0x0508))

/* �Ĵ���˵����MMC2 QoS Generatorģʽ�Ĵ���
   λ����UNION�ṹ:  SOC_SYSNOC_MMC2_QOSGENERATOR_MODE_UNION */
#define SOC_SYSNOC_MMC2_QOSGENERATOR_MODE_ADDR(base)  ((base) + (0x050C))

/* �Ĵ���˵����MMC2 QoS Generator�ⲿ���ƼĴ���
   λ����UNION�ṹ:  SOC_SYSNOC_MMC2_QOSGENERATOR_EXTCONTROL_UNION */
#define SOC_SYSNOC_MMC2_QOSGENERATOR_EXTCONTROL_ADDR(base) ((base) + (0x0518))

/* �Ĵ���˵����USB QoS Generator ����ID
   λ����UNION�ṹ:  SOC_SYSNOC_USB_QOSGENERATOR_ID_COREID_UNION */
#define SOC_SYSNOC_USB_QOSGENERATOR_ID_COREID_ADDR(base) ((base) + (0x0600))

/* �Ĵ���˵����USB QoS Generator���ߴ���汾�Ĵ���
   λ����UNION�ṹ:  SOC_SYSNOC_USB_QOSGENERATOR_ID_REVISIONID_UNION */
#define SOC_SYSNOC_USB_QOSGENERATOR_ID_REVISIONID_ADDR(base) ((base) + (0x0604))

/* �Ĵ���˵����USB QoS Generator���ȼ��Ĵ���
   λ����UNION�ṹ:  SOC_SYSNOC_USB_QOSGENERATOR_PRIORITY_UNION */
#define SOC_SYSNOC_USB_QOSGENERATOR_PRIORITY_ADDR(base) ((base) + (0x0608))

/* �Ĵ���˵����USB QoS Generatorģʽ�Ĵ���
   λ����UNION�ṹ:  SOC_SYSNOC_USB_QOSGENERATOR_MODE_UNION */
#define SOC_SYSNOC_USB_QOSGENERATOR_MODE_ADDR(base)   ((base) + (0x060C))

/* �Ĵ���˵����USB QoS Generator�ⲿ���ƼĴ���
   λ����UNION�ṹ:  SOC_SYSNOC_USB_QOSGENERATOR_EXTCONTROL_UNION */
#define SOC_SYSNOC_USB_QOSGENERATOR_EXTCONTROL_ADDR(base) ((base) + (0x0618))

/* �Ĵ���˵����USB_MMC adapter��ID
   λ����UNION�ṹ:  SOC_SYSNOC_USB_MMC_ADAPTER_ID_COREID_UNION */
#define SOC_SYSNOC_USB_MMC_ADAPTER_ID_COREID_ADDR(base) ((base) + (0x1000))

/* �Ĵ���˵�������ߴ���汾�Ĵ���
   λ����UNION�ṹ:  SOC_SYSNOC_USB_MMC_ADAPTER_ID_REVISIONID_UNION */
#define SOC_SYSNOC_USB_MMC_ADAPTER_ID_REVISIONID_ADDR(base) ((base) + (0x1004))

/* �Ĵ���˵����USB_MMC Rate Adapter���üĴ���
   λ����UNION�ṹ:  SOC_SYSNOC_USB_MMC_ADAPTER_RATE_UNION */
#define SOC_SYSNOC_USB_MMC_ADAPTER_RATE_ADDR(base)    ((base) + (0x1008))

/* �Ĵ���˵����bypass USB_MMC Rate Adapter
   λ����UNION�ṹ:  SOC_SYSNOC_USB_MMC_ADAPTER_BYPASS_UNION */
#define SOC_SYSNOC_USB_MMC_ADAPTER_BYPASS_ADDR(base)  ((base) + (0x100C))

/* �Ĵ���˵����SYSNOC Packet probe��ID
   λ����UNION�ṹ:  SOC_SYSNOC_PACKET_ID_COREID_UNION */
#define SOC_SYSNOC_PACKET_ID_COREID_ADDR(base)        ((base) + (0x2000))

/* �Ĵ���˵�������ߴ���汾�Ĵ���
   λ����UNION�ṹ:  SOC_SYSNOC_PACKET_ID_REVISIONID_UNION */
#define SOC_SYSNOC_PACKET_ID_REVISIONID_ADDR(base)    ((base) + (0x2004))

/* �Ĵ���˵����Packet Probeȫ�ֿ��ƼĴ���
   λ����UNION�ṹ:  SOC_SYSNOC_PACKET_MAINCTL_UNION */
#define SOC_SYSNOC_PACKET_MAINCTL_ADDR(base)          ((base) + (0x2008))

/* �Ĵ���˵����Packet Probeʹ�ܼĴ���
   λ����UNION�ṹ:  SOC_SYSNOC_PACKET_CFGCTL_UNION */
#define SOC_SYSNOC_PACKET_CFGCTL_ADDR(base)           ((base) + (0x200C))

/* �Ĵ���˵���������������ұ�
   λ����UNION�ṹ:  SOC_SYSNOC_PACKET_FILTERLUT_UNION */
#define SOC_SYSNOC_PACKET_FILTERLUT_ADDR(base)        ((base) + (0x2014))

/* �Ĵ���˵����trace �澯ʹ�ܼĴ���
   λ����UNION�ṹ:  SOC_SYSNOC_PACKET_TRACEALARMEN_UNION */
#define SOC_SYSNOC_PACKET_TRACEALARMEN_ADDR(base)     ((base) + (0x2018))

/* �Ĵ���˵����trace �澯״̬�Ĵ���
   λ����UNION�ṹ:  SOC_SYSNOC_PACKET_TRACEALARMSTATUS_UNION */
#define SOC_SYSNOC_PACKET_TRACEALARMSTATUS_ADDR(base) ((base) + (0x201C))

/* �Ĵ���˵����trace �澯����Ĵ���
   λ����UNION�ṹ:  SOC_SYSNOC_PACKET_TRACEALARMCLR_UNION */
#define SOC_SYSNOC_PACKET_TRACEALARMCLR_ADDR(base)    ((base) + (0x2020))

/* �Ĵ���˵����ͳ���������üĴ���
   λ����UNION�ṹ:  SOC_SYSNOC_PACKET_STATPERIOD_UNION */
#define SOC_SYSNOC_PACKET_STATPERIOD_ADDR(base)       ((base) + (0x2024))

/* �Ĵ���˵�����ֶ�����ͳ�Ƽ�ʱ��ʼʹ��
   λ����UNION�ṹ:  SOC_SYSNOC_PACKET_STATGO_UNION */
#define SOC_SYSNOC_PACKET_STATGO_ADDR(base)           ((base) + (0x2028))

/* �Ĵ���˵����ͳ�Ƽ�����С�澯��ֵ
   λ����UNION�ṹ:  SOC_SYSNOC_PACKET_STATALARMMIN_UNION */
#define SOC_SYSNOC_PACKET_STATALARMMIN_ADDR(base)     ((base) + (0x202C))

/* �Ĵ���˵����ͳ�Ƽ��������澯��ֵ
   λ����UNION�ṹ:  SOC_SYSNOC_PACKET_STATALARMMAX_UNION */
#define SOC_SYSNOC_PACKET_STATALARMMAX_ADDR(base)     ((base) + (0x2030))

/* �Ĵ���˵����ͳ�Ƹ澯״̬�Ĵ���
   λ����UNION�ṹ:  SOC_SYSNOC_PACKET_STATALARMSTATUS_UNION */
#define SOC_SYSNOC_PACKET_STATALARMSTATUS_ADDR(base)  ((base) + (0x2034))

/* �Ĵ���˵����ͳ�Ƹ澯״̬����Ĵ���
   λ����UNION�ṹ:  SOC_SYSNOC_PACKET_STATALARMCLR_UNION */
#define SOC_SYSNOC_PACKET_STATALARMCLR_ADDR(base)     ((base) + (0x2038))

/* �Ĵ���˵����ͳ�Ƹ澯״̬ʹ�ܼĴ���
   λ����UNION�ṹ:  SOC_SYSNOC_PACKET_STATALARMEN_UNION */
#define SOC_SYSNOC_PACKET_STATALARMEN_ADDR(base)      ((base) + (0x203C))

/* �Ĵ���˵����F0��RouteId������������
   λ����UNION�ṹ:  SOC_SYSNOC_PACKET_F0_ROUTEIDBASE_UNION */
#define SOC_SYSNOC_PACKET_F0_ROUTEIDBASE_ADDR(base)   ((base) + (0x2044))

/* �Ĵ���˵����F0��RouteId��������Mask����
   λ����UNION�ṹ:  SOC_SYSNOC_PACKET_F0_ROUTEIDMASK_UNION */
#define SOC_SYSNOC_PACKET_F0_ROUTEIDMASK_ADDR(base)   ((base) + (0x2048))

/* �Ĵ���˵����F0�ĵ�ַ������������
   λ����UNION�ṹ:  SOC_SYSNOC_PACKET_F0_ADDRBASE_LOW_UNION */
#define SOC_SYSNOC_PACKET_F0_ADDRBASE_LOW_ADDR(base)  ((base) + (0x204C))

/* �Ĵ���˵����F0�ĵ�ַ���˵�Mask��ַ��С����
   λ����UNION�ṹ:  SOC_SYSNOC_PACKET_F0_WINDOWSIZE_UNION */
#define SOC_SYSNOC_PACKET_F0_WINDOWSIZE_ADDR(base)    ((base) + (0x2054))

/* �Ĵ���˵����F0�İ�ȫ������������
   λ����UNION�ṹ:  SOC_SYSNOC_PACKET_F0_SECURITYBASE_UNION */
#define SOC_SYSNOC_PACKET_F0_SECURITYBASE_ADDR(base)  ((base) + (0x2058))

/* �Ĵ���˵����F0�İ�ȫ����������Mask
   λ����UNION�ṹ:  SOC_SYSNOC_PACKET_F0_SECURITYMASK_UNION */
#define SOC_SYSNOC_PACKET_F0_SECURITYMASK_ADDR(base)  ((base) + (0x205C))

/* �Ĵ���˵����F0��Opcode������������
   λ����UNION�ṹ:  SOC_SYSNOC_PACKET_F0_OPCODE_UNION */
#define SOC_SYSNOC_PACKET_F0_OPCODE_ADDR(base)        ((base) + (0x2060))

/* �Ĵ���˵����F0��packet״̬��������
   λ����UNION�ṹ:  SOC_SYSNOC_PACKET_F0_STATUS_UNION */
#define SOC_SYSNOC_PACKET_F0_STATUS_ADDR(base)        ((base) + (0x2064))

/* �Ĵ���˵����F0�İ�����������
   λ����UNION�ṹ:  SOC_SYSNOC_PACKET_F0_LENGTH_UNION */
#define SOC_SYSNOC_PACKET_F0_LENGTH_ADDR(base)        ((base) + (0x2068))

/* �Ĵ���˵����F0��urgency��������
   λ����UNION�ṹ:  SOC_SYSNOC_PACKET_F0_URGENCY_UNION */
#define SOC_SYSNOC_PACKET_F0_URGENCY_ADDR(base)       ((base) + (0x206C))

/* �Ĵ���˵����F0��User��������
   λ����UNION�ṹ:  SOC_SYSNOC_PACKET_F0_USERBASE_UNION */
#define SOC_SYSNOC_PACKET_F0_USERBASE_ADDR(base)      ((base) + (0x2070))

/* �Ĵ���˵����F0��User��������Mask
   λ����UNION�ṹ:  SOC_SYSNOC_PACKET_F0_USERMASK_UNION */
#define SOC_SYSNOC_PACKET_F0_USERMASK_ADDR(base)      ((base) + (0x2074))

/* �Ĵ���˵����F1��RouteId������������
   λ����UNION�ṹ:  SOC_SYSNOC_PACKET_F1_ROUTEIDBASE_UNION */
#define SOC_SYSNOC_PACKET_F1_ROUTEIDBASE_ADDR(base)   ((base) + (0x2080))

/* �Ĵ���˵����F1��RouteId��������Mask����
   λ����UNION�ṹ:  SOC_SYSNOC_PACKET_F1_ROUTEIDMASK_UNION */
#define SOC_SYSNOC_PACKET_F1_ROUTEIDMASK_ADDR(base)   ((base) + (0x2084))

/* �Ĵ���˵����F1�ĵ�ַ������������
   λ����UNION�ṹ:  SOC_SYSNOC_PACKET_F1_ADDRBASE_LOW_UNION */
#define SOC_SYSNOC_PACKET_F1_ADDRBASE_LOW_ADDR(base)  ((base) + (0x2088))

/* �Ĵ���˵����F1�ĵ�ַ���˵�Mask��ַ��С����
   λ����UNION�ṹ:  SOC_SYSNOC_PACKET_F1_WINDOWSIZE_UNION */
#define SOC_SYSNOC_PACKET_F1_WINDOWSIZE_ADDR(base)    ((base) + (0x2090))

/* �Ĵ���˵����F1�İ�ȫ������������
   λ����UNION�ṹ:  SOC_SYSNOC_PACKET_F1_SECURITYBASE_UNION */
#define SOC_SYSNOC_PACKET_F1_SECURITYBASE_ADDR(base)  ((base) + (0x2094))

/* �Ĵ���˵����F1�İ�ȫ����������Mask
   λ����UNION�ṹ:  SOC_SYSNOC_PACKET_F1_SECURITYMASK_UNION */
#define SOC_SYSNOC_PACKET_F1_SECURITYMASK_ADDR(base)  ((base) + (0x2098))

/* �Ĵ���˵����F1��Opcode������������
   λ����UNION�ṹ:  SOC_SYSNOC_PACKET_F1_OPCODE_UNION */
#define SOC_SYSNOC_PACKET_F1_OPCODE_ADDR(base)        ((base) + (0x209C))

/* �Ĵ���˵����F1��packet״̬��������
   λ����UNION�ṹ:  SOC_SYSNOC_PACKET_F1_STATUS_UNION */
#define SOC_SYSNOC_PACKET_F1_STATUS_ADDR(base)        ((base) + (0x20A0))

/* �Ĵ���˵����F1�İ�����������
   λ����UNION�ṹ:  SOC_SYSNOC_PACKET_F1_LENGTH_UNION */
#define SOC_SYSNOC_PACKET_F1_LENGTH_ADDR(base)        ((base) + (0x20A4))

/* �Ĵ���˵����F1��urgency��������
   λ����UNION�ṹ:  SOC_SYSNOC_PACKET_F1_URGENCY_UNION */
#define SOC_SYSNOC_PACKET_F1_URGENCY_ADDR(base)       ((base) + (0x20A8))

/* �Ĵ���˵����F1��User��������
   λ����UNION�ṹ:  SOC_SYSNOC_PACKET_F1_USERBASE_UNION */
#define SOC_SYSNOC_PACKET_F1_USERBASE_ADDR(base)      ((base) + (0x20AC))

/* �Ĵ���˵����F1��User��������Mask
   λ����UNION�ṹ:  SOC_SYSNOC_PACKET_F1_USERMASK_UNION */
#define SOC_SYSNOC_PACKET_F1_USERMASK_ADDR(base)      ((base) + (0x20B0))

/* �Ĵ���˵����F2��RouteId������������
   λ����UNION�ṹ:  SOC_SYSNOC_PACKET_F2_ROUTEIDBASE_UNION */
#define SOC_SYSNOC_PACKET_F2_ROUTEIDBASE_ADDR(base)   ((base) + (0x20BC))

/* �Ĵ���˵����F2��RouteId��������Mask����
   λ����UNION�ṹ:  SOC_SYSNOC_PACKET_F2_ROUTEIDMASK_UNION */
#define SOC_SYSNOC_PACKET_F2_ROUTEIDMASK_ADDR(base)   ((base) + (0x20C0))

/* �Ĵ���˵����F2�ĵ�ַ������������
   λ����UNION�ṹ:  SOC_SYSNOC_PACKET_F2_ADDRBASE_LOW_UNION */
#define SOC_SYSNOC_PACKET_F2_ADDRBASE_LOW_ADDR(base)  ((base) + (0x20C4))

/* �Ĵ���˵����F2�ĵ�ַ���˵�Mask��ַ��С����
   λ����UNION�ṹ:  SOC_SYSNOC_PACKET_F2_WINDOWSIZE_UNION */
#define SOC_SYSNOC_PACKET_F2_WINDOWSIZE_ADDR(base)    ((base) + (0x20CC))

/* �Ĵ���˵����F2�İ�ȫ������������
   λ����UNION�ṹ:  SOC_SYSNOC_PACKET_F2_SECURITYBASE_UNION */
#define SOC_SYSNOC_PACKET_F2_SECURITYBASE_ADDR(base)  ((base) + (0x20D0))

/* �Ĵ���˵����F2�İ�ȫ����������Mask
   λ����UNION�ṹ:  SOC_SYSNOC_PACKET_F2_SECURITYMASK_UNION */
#define SOC_SYSNOC_PACKET_F2_SECURITYMASK_ADDR(base)  ((base) + (0x20D4))

/* �Ĵ���˵����F2��Opcode������������
   λ����UNION�ṹ:  SOC_SYSNOC_PACKET_F2_OPCODE_UNION */
#define SOC_SYSNOC_PACKET_F2_OPCODE_ADDR(base)        ((base) + (0x20D8))

/* �Ĵ���˵����F2��packet״̬��������
   λ����UNION�ṹ:  SOC_SYSNOC_PACKET_F2_STATUS_UNION */
#define SOC_SYSNOC_PACKET_F2_STATUS_ADDR(base)        ((base) + (0x20DC))

/* �Ĵ���˵����F2�İ�����������
   λ����UNION�ṹ:  SOC_SYSNOC_PACKET_F2_LENGTH_UNION */
#define SOC_SYSNOC_PACKET_F2_LENGTH_ADDR(base)        ((base) + (0x20E0))

/* �Ĵ���˵����F2��urgency��������
   λ����UNION�ṹ:  SOC_SYSNOC_PACKET_F2_URGENCY_UNION */
#define SOC_SYSNOC_PACKET_F2_URGENCY_ADDR(base)       ((base) + (0x20E4))

/* �Ĵ���˵����F2��User��������
   λ����UNION�ṹ:  SOC_SYSNOC_PACKET_F2_USERBASE_UNION */
#define SOC_SYSNOC_PACKET_F2_USERBASE_ADDR(base)      ((base) + (0x20E8))

/* �Ĵ���˵����F2��User��������Mask
   λ����UNION�ṹ:  SOC_SYSNOC_PACKET_F2_USERMASK_UNION */
#define SOC_SYSNOC_PACKET_F2_USERMASK_ADDR(base)      ((base) + (0x20EC))

/* �Ĵ���˵����F3��RouteId������������
   λ����UNION�ṹ:  SOC_SYSNOC_PACKET_F3_ROUTEIDBASE_UNION */
#define SOC_SYSNOC_PACKET_F3_ROUTEIDBASE_ADDR(base)   ((base) + (0x20F8))

/* �Ĵ���˵����F3��RouteId��������Mask����
   λ����UNION�ṹ:  SOC_SYSNOC_PACKET_F3_ROUTEIDMASK_UNION */
#define SOC_SYSNOC_PACKET_F3_ROUTEIDMASK_ADDR(base)   ((base) + (0x20FC))

/* �Ĵ���˵����F3�ĵ�ַ������������
   λ����UNION�ṹ:  SOC_SYSNOC_PACKET_F3_ADDRBASE_LOW_UNION */
#define SOC_SYSNOC_PACKET_F3_ADDRBASE_LOW_ADDR(base)  ((base) + (0x2100))

/* �Ĵ���˵����F3�ĵ�ַ���˵�Mask��ַ��С����
   λ����UNION�ṹ:  SOC_SYSNOC_PACKET_F3_WINDOWSIZE_UNION */
#define SOC_SYSNOC_PACKET_F3_WINDOWSIZE_ADDR(base)    ((base) + (0x2108))

/* �Ĵ���˵����F3�İ�ȫ������������
   λ����UNION�ṹ:  SOC_SYSNOC_PACKET_F3_SECURITYBASE_UNION */
#define SOC_SYSNOC_PACKET_F3_SECURITYBASE_ADDR(base)  ((base) + (0x210C))

/* �Ĵ���˵����F3�İ�ȫ����������Mask
   λ����UNION�ṹ:  SOC_SYSNOC_PACKET_F3_SECURITYMASK_UNION */
#define SOC_SYSNOC_PACKET_F3_SECURITYMASK_ADDR(base)  ((base) + (0x2110))

/* �Ĵ���˵����F3��Opcode������������
   λ����UNION�ṹ:  SOC_SYSNOC_PACKET_F3_OPCODE_UNION */
#define SOC_SYSNOC_PACKET_F3_OPCODE_ADDR(base)        ((base) + (0x2114))

/* �Ĵ���˵����F3��packet״̬��������
   λ����UNION�ṹ:  SOC_SYSNOC_PACKET_F3_STATUS_UNION */
#define SOC_SYSNOC_PACKET_F3_STATUS_ADDR(base)        ((base) + (0x2118))

/* �Ĵ���˵����F3�İ�����������
   λ����UNION�ṹ:  SOC_SYSNOC_PACKET_F3_LENGTH_UNION */
#define SOC_SYSNOC_PACKET_F3_LENGTH_ADDR(base)        ((base) + (0x211C))

/* �Ĵ���˵����F3��urgency��������
   λ����UNION�ṹ:  SOC_SYSNOC_PACKET_F3_URGENCY_UNION */
#define SOC_SYSNOC_PACKET_F3_URGENCY_ADDR(base)       ((base) + (0x2120))

/* �Ĵ���˵����F3��User��������
   λ����UNION�ṹ:  SOC_SYSNOC_PACKET_F3_USERBASE_UNION */
#define SOC_SYSNOC_PACKET_F3_USERBASE_ADDR(base)      ((base) + (0x2124))

/* �Ĵ���˵����F3��User��������Mask
   λ����UNION�ṹ:  SOC_SYSNOC_PACKET_F3_USERMASK_UNION */
#define SOC_SYSNOC_PACKET_F3_USERMASK_ADDR(base)      ((base) + (0x2128))

/* �Ĵ���˵����Counter��ͳ�����Ϳ��ƼĴ���
   λ����UNION�ṹ:  SOC_SYSNOC_PACKET_COUNTERS_0_SRC_UNION */
#define SOC_SYSNOC_PACKET_COUNTERS_0_SRC_ADDR(base)   ((base) + (0x2138))

/* �Ĵ���˵�����澯�жϲ������üĴ���
   λ����UNION�ṹ:  SOC_SYSNOC_PACKET_COUNTERS_0_ALARMMODE_UNION */
#define SOC_SYSNOC_PACKET_COUNTERS_0_ALARMMODE_ADDR(base) ((base) + (0x213C))

/* �Ĵ���˵����ͳ�Ƽ�������ͳ��ֵ
   λ����UNION�ṹ:  SOC_SYSNOC_PACKET_COUNTERS_0_VAL_UNION */
#define SOC_SYSNOC_PACKET_COUNTERS_0_VAL_ADDR(base)   ((base) + (0x2140))

/* �Ĵ���˵����Counter��ͳ�����Ϳ��ƼĴ���
   λ����UNION�ṹ:  SOC_SYSNOC_PACKET_COUNTERS_1_SRC_UNION */
#define SOC_SYSNOC_PACKET_COUNTERS_1_SRC_ADDR(base)   ((base) + (0x214C))

/* �Ĵ���˵�����澯�жϲ������üĴ���
   λ����UNION�ṹ:  SOC_SYSNOC_PACKET_COUNTERS_1_ALARMMODE_UNION */
#define SOC_SYSNOC_PACKET_COUNTERS_1_ALARMMODE_ADDR(base) ((base) + (0x2150))

/* �Ĵ���˵����ͳ�Ƽ�������ͳ��ֵ
   λ����UNION�ṹ:  SOC_SYSNOC_PACKET_COUNTERS_1_VAL_UNION */
#define SOC_SYSNOC_PACKET_COUNTERS_1_VAL_ADDR(base)   ((base) + (0x2154))

/* �Ĵ���˵����Counter��ͳ�����Ϳ��ƼĴ���
   λ����UNION�ṹ:  SOC_SYSNOC_PACKET_COUNTERS_2_SRC_UNION */
#define SOC_SYSNOC_PACKET_COUNTERS_2_SRC_ADDR(base)   ((base) + (0x2160))

/* �Ĵ���˵�����澯�жϲ������üĴ���
   λ����UNION�ṹ:  SOC_SYSNOC_PACKET_COUNTERS_2_ALARMMODE_UNION */
#define SOC_SYSNOC_PACKET_COUNTERS_2_ALARMMODE_ADDR(base) ((base) + (0x2164))

/* �Ĵ���˵����ͳ�Ƽ�������ͳ��ֵ
   λ����UNION�ṹ:  SOC_SYSNOC_PACKET_COUNTERS_2_VAL_UNION */
#define SOC_SYSNOC_PACKET_COUNTERS_2_VAL_ADDR(base)   ((base) + (0x2168))

/* �Ĵ���˵����Counter��ͳ�����Ϳ��ƼĴ���
   λ����UNION�ṹ:  SOC_SYSNOC_PACKET_COUNTERS_3_SRC_UNION */
#define SOC_SYSNOC_PACKET_COUNTERS_3_SRC_ADDR(base)   ((base) + (0x2174))

/* �Ĵ���˵�����澯�жϲ������üĴ���
   λ����UNION�ṹ:  SOC_SYSNOC_PACKET_COUNTERS_3_ALARMMODE_UNION */
#define SOC_SYSNOC_PACKET_COUNTERS_3_ALARMMODE_ADDR(base) ((base) + (0x2178))

/* �Ĵ���˵����ͳ�Ƽ�������ͳ��ֵ
   λ����UNION�ṹ:  SOC_SYSNOC_PACKET_COUNTERS_3_VAL_UNION */
#define SOC_SYSNOC_PACKET_COUNTERS_3_VAL_ADDR(base)   ((base) + (0x217C))



/****************************************************************************
                     (2/3) SERVICE_DMA
 ****************************************************************************/
/* �Ĵ���˵����DMAC QoS Generator ����ID
   λ����UNION�ṹ:  SOC_SYSNOC_DMAC_QOSGENERATOR_ID_COREID_UNION */
#define SOC_SYSNOC_DMAC_QOSGENERATOR_ID_COREID_ADDR(base) ((base) + (0x0100))

/* �Ĵ���˵����DMAC QoS Generator���ߴ���汾�Ĵ���
   λ����UNION�ṹ:  SOC_SYSNOC_DMAC_QOSGENERATOR_ID_REVISIONID_UNION */
#define SOC_SYSNOC_DMAC_QOSGENERATOR_ID_REVISIONID_ADDR(base) ((base) + (0x0104))

/* �Ĵ���˵����DMAC QoS Generator���ȼ��Ĵ���
   λ����UNION�ṹ:  SOC_SYSNOC_DMAC_QOSGENERATOR_PRIORITY_UNION */
#define SOC_SYSNOC_DMAC_QOSGENERATOR_PRIORITY_ADDR(base) ((base) + (0x0108))

/* �Ĵ���˵����DMAC QoS Generatorģʽ�Ĵ���
   λ����UNION�ṹ:  SOC_SYSNOC_DMAC_QOSGENERATOR_MODE_UNION */
#define SOC_SYSNOC_DMAC_QOSGENERATOR_MODE_ADDR(base)  ((base) + (0x010C))

/* �Ĵ���˵����DMAC QoS Generator�ⲿ���ƼĴ���
   λ����UNION�ṹ:  SOC_SYSNOC_DMAC_QOSGENERATOR_EXTCONTROL_UNION */
#define SOC_SYSNOC_DMAC_QOSGENERATOR_EXTCONTROL_ADDR(base) ((base) + (0x0118))

/* �Ĵ���˵����IPF QoS Generator ����ID
   λ����UNION�ṹ:  SOC_SYSNOC_IPF_QOSGENERATOR_ID_COREID_UNION */
#define SOC_SYSNOC_IPF_QOSGENERATOR_ID_COREID_ADDR(base) ((base) + (0x0200))

/* �Ĵ���˵����IPF QoS Generator���ߴ���汾�Ĵ���
   λ����UNION�ṹ:  SOC_SYSNOC_IPF_QOSGENERATOR_ID_REVISIONID_UNION */
#define SOC_SYSNOC_IPF_QOSGENERATOR_ID_REVISIONID_ADDR(base) ((base) + (0x0204))

/* �Ĵ���˵����IPF QoS Generator���ȼ��Ĵ���
   λ����UNION�ṹ:  SOC_SYSNOC_IPF_QOSGENERATOR_PRIORITY_UNION */
#define SOC_SYSNOC_IPF_QOSGENERATOR_PRIORITY_ADDR(base) ((base) + (0x0208))

/* �Ĵ���˵����IPF QoS Generatorģʽ�Ĵ���
   λ����UNION�ṹ:  SOC_SYSNOC_IPF_QOSGENERATOR_MODE_UNION */
#define SOC_SYSNOC_IPF_QOSGENERATOR_MODE_ADDR(base)   ((base) + (0x020C))

/* �Ĵ���˵����IPF QoS Generator�ⲿ���ƼĴ���
   λ����UNION�ṹ:  SOC_SYSNOC_IPF_QOSGENERATOR_EXTCONTROL_UNION */
#define SOC_SYSNOC_IPF_QOSGENERATOR_EXTCONTROL_ADDR(base) ((base) + (0x0218))

/* �Ĵ���˵����SECENG QoS Generator ����ID
   λ����UNION�ṹ:  SOC_SYSNOC_SECENG_QOSGENERATOR_ID_COREID_UNION */
#define SOC_SYSNOC_SECENG_QOSGENERATOR_ID_COREID_ADDR(base) ((base) + (0x0300))

/* �Ĵ���˵����SECENG QoS Generator���ߴ���汾�Ĵ���
   λ����UNION�ṹ:  SOC_SYSNOC_SECENG_QOSGENERATOR_ID_REVISIONID_UNION */
#define SOC_SYSNOC_SECENG_QOSGENERATOR_ID_REVISIONID_ADDR(base) ((base) + (0x0304))

/* �Ĵ���˵����SECENG QoS Generator���ȼ��Ĵ���
   λ����UNION�ṹ:  SOC_SYSNOC_SECENG_QOSGENERATOR_PRIORITY_UNION */
#define SOC_SYSNOC_SECENG_QOSGENERATOR_PRIORITY_ADDR(base) ((base) + (0x0308))

/* �Ĵ���˵����SECENG QoS Generatorģʽ�Ĵ���
   λ����UNION�ṹ:  SOC_SYSNOC_SECENG_QOSGENERATOR_MODE_UNION */
#define SOC_SYSNOC_SECENG_QOSGENERATOR_MODE_ADDR(base) ((base) + (0x030C))

/* �Ĵ���˵����SECENG QoS Generator�ⲿ���ƼĴ���
   λ����UNION�ṹ:  SOC_SYSNOC_SECENG_QOSGENERATOR_EXTCONTROL_UNION */
#define SOC_SYSNOC_SECENG_QOSGENERATOR_EXTCONTROL_ADDR(base) ((base) + (0x0318))

/* �Ĵ���˵����SOCP QoS Generator ����ID
   λ����UNION�ṹ:  SOC_SYSNOC_SOCP_QOSGENERATOR_ID_COREID_UNION */
#define SOC_SYSNOC_SOCP_QOSGENERATOR_ID_COREID_ADDR(base) ((base) + (0x0400))

/* �Ĵ���˵����SOCP QoS Generator���ߴ���汾�Ĵ���
   λ����UNION�ṹ:  SOC_SYSNOC_SOCP_QOSGENERATOR_ID_REVISIONID_UNION */
#define SOC_SYSNOC_SOCP_QOSGENERATOR_ID_REVISIONID_ADDR(base) ((base) + (0x0404))

/* �Ĵ���˵����SOCP QoS Generator���ȼ��Ĵ���
   λ����UNION�ṹ:  SOC_SYSNOC_SOCP_QOSGENERATOR_PRIORITY_UNION */
#define SOC_SYSNOC_SOCP_QOSGENERATOR_PRIORITY_ADDR(base) ((base) + (0x0408))

/* �Ĵ���˵����SOCP QoS Generatorģʽ�Ĵ���
   λ����UNION�ṹ:  SOC_SYSNOC_SOCP_QOSGENERATOR_MODE_UNION */
#define SOC_SYSNOC_SOCP_QOSGENERATOR_MODE_ADDR(base)  ((base) + (0x040C))

/* �Ĵ���˵����SOCP QoS Generator�ⲿ���ƼĴ���
   λ����UNION�ṹ:  SOC_SYSNOC_SOCP_QOSGENERATOR_EXTCONTROL_UNION */
#define SOC_SYSNOC_SOCP_QOSGENERATOR_EXTCONTROL_ADDR(base) ((base) + (0x0418))



/****************************************************************************
                     (3/3) SERVICE_AO
 ****************************************************************************/
/* �Ĵ���˵����MCU QoS Generator ����ID
   λ����UNION�ṹ:  SOC_SYSNOC_MCU_QOSGENERATOR_ID_COREID_UNION */
#define SOC_SYSNOC_MCU_QOSGENERATOR_ID_COREID_ADDR(base) ((base) + (0x0100))

/* �Ĵ���˵����MCU QoS Generator���ߴ���汾�Ĵ���
   λ����UNION�ṹ:  SOC_SYSNOC_MCU_QOSGENERATOR_ID_REVISIONID_UNION */
#define SOC_SYSNOC_MCU_QOSGENERATOR_ID_REVISIONID_ADDR(base) ((base) + (0x0104))

/* �Ĵ���˵����MCU QoS Generator���ȼ��Ĵ���
   λ����UNION�ṹ:  SOC_SYSNOC_MCU_QOSGENERATOR_PRIORITY_UNION */
#define SOC_SYSNOC_MCU_QOSGENERATOR_PRIORITY_ADDR(base) ((base) + (0x0108))

/* �Ĵ���˵����MCU QoS Generator ģʽ�Ĵ���
   λ����UNION�ṹ:  SOC_SYSNOC_MCU_QOSGENERATOR_MODE_UNION */
#define SOC_SYSNOC_MCU_QOSGENERATOR_MODE_ADDR(base)   ((base) + (0x010C))

/* �Ĵ���˵����MCU QoS Generator ������ֵ�Ĵ���
   λ����UNION�ṹ:  SOC_SYSNOC_MCU_QOSGENERATOR_BANDWIDTH_UNION */
#define SOC_SYSNOC_MCU_QOSGENERATOR_BANDWIDTH_ADDR(base) ((base) + (0x0110))

/* �Ĵ���˵����MCU QoS Generator �������Ĵ���
   λ����UNION�ṹ:  SOC_SYSNOC_MCU_QOSGENERATOR_SATURATION_UNION */
#define SOC_SYSNOC_MCU_QOSGENERATOR_SATURATION_ADDR(base) ((base) + (0x0114))

/* �Ĵ���˵����MCU QoS Generator�ⲿ���ƼĴ���
   λ����UNION�ṹ:  SOC_SYSNOC_MCU_QOSGENERATOR_EXTCONTROL_UNION */
#define SOC_SYSNOC_MCU_QOSGENERATOR_EXTCONTROL_ADDR(base) ((base) + (0x0118))

/* �Ĵ���˵����MODEM QoS Generator ����ID
   λ����UNION�ṹ:  SOC_SYSNOC_MODEM_QOSGENERATOR_ID_COREID_UNION */
#define SOC_SYSNOC_MODEM_QOSGENERATOR_ID_COREID_ADDR(base) ((base) + (0x0200))

/* �Ĵ���˵����MODEM QoS Generator���ߴ���汾�Ĵ���
   λ����UNION�ṹ:  SOC_SYSNOC_MODEM_QOSGENERATOR_ID_REVISIONID_UNION */
#define SOC_SYSNOC_MODEM_QOSGENERATOR_ID_REVISIONID_ADDR(base) ((base) + (0x0204))

/* �Ĵ���˵����MODEM QoS Generator���ȼ��Ĵ���
   λ����UNION�ṹ:  SOC_SYSNOC_MODEM_QOSGENERATOR_PRIORITY_UNION */
#define SOC_SYSNOC_MODEM_QOSGENERATOR_PRIORITY_ADDR(base) ((base) + (0x0208))

/* �Ĵ���˵����MODEM QoS Generator ģʽ�Ĵ���
   λ����UNION�ṹ:  SOC_SYSNOC_MODEM_QOSGENERATOR_MODE_UNION */
#define SOC_SYSNOC_MODEM_QOSGENERATOR_MODE_ADDR(base) ((base) + (0x020C))

/* �Ĵ���˵����MODEM QoS Generator ������ֵ�Ĵ���
   λ����UNION�ṹ:  SOC_SYSNOC_MODEM_QOSGENERATOR_BANDWIDTH_UNION */
#define SOC_SYSNOC_MODEM_QOSGENERATOR_BANDWIDTH_ADDR(base) ((base) + (0x0210))

/* �Ĵ���˵����MODEM QoS Generator �������Ĵ���
   λ����UNION�ṹ:  SOC_SYSNOC_MODEM_QOSGENERATOR_SATURATION_UNION */
#define SOC_SYSNOC_MODEM_QOSGENERATOR_SATURATION_ADDR(base) ((base) + (0x0214))

/* �Ĵ���˵����MODEM QoS Generator�ⲿ���ƼĴ���
   λ����UNION�ṹ:  SOC_SYSNOC_MODEM_QOSGENERATOR_EXTCONTROL_UNION */
#define SOC_SYSNOC_MODEM_QOSGENERATOR_EXTCONTROL_ADDR(base) ((base) + (0x0218))

/* �Ĵ���˵����MCU adapter��ID
   λ����UNION�ṹ:  SOC_SYSNOC_MCU_ADAPTER_ID_COREID_UNION */
#define SOC_SYSNOC_MCU_ADAPTER_ID_COREID_ADDR(base)   ((base) + (0x1000))

/* �Ĵ���˵�������ߴ���汾�Ĵ���
   λ����UNION�ṹ:  SOC_SYSNOC_MCU_ADAPTER_ID_REVISIONID_UNION */
#define SOC_SYSNOC_MCU_ADAPTER_ID_REVISIONID_ADDR(base) ((base) + (0x1004))

/* �Ĵ���˵����MCU Rate Adapter���üĴ���
   λ����UNION�ṹ:  SOC_SYSNOC_MCU_ADAPTER_RATE_UNION */
#define SOC_SYSNOC_MCU_ADAPTER_RATE_ADDR(base)        ((base) + (0x1008))

/* �Ĵ���˵����bypass MCU Rate Adapter
   λ����UNION�ṹ:  SOC_SYSNOC_MCU_ADAPTER_BYPASS_UNION */
#define SOC_SYSNOC_MCU_ADAPTER_BYPASS_ADDR(base)      ((base) + (0x100C))





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
                     (1/3) SERVICE
 ****************************************************************************/
/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_ERR_LOGGER_ID_COREID_UNION
 �ṹ˵��  : ERR_LOGGER_ID_COREID �Ĵ����ṹ���塣��ַƫ����:0x0000����ֵ:0x93D4740D�����:32
 �Ĵ���˵��: SYSNOC Err LOGGER ��ID
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  core_type_id   : 8;  /* bit[0-7] : SYSNOC ��error logger����ID */
        unsigned int  core_check_sum : 24; /* bit[8-31]: SYSNOC ERR LOGGER �Ĳ�������� */
    } reg;
} SOC_SYSNOC_ERR_LOGGER_ID_COREID_UNION;
#endif
#define SOC_SYSNOC_ERR_LOGGER_ID_COREID_core_type_id_START    (0)
#define SOC_SYSNOC_ERR_LOGGER_ID_COREID_core_type_id_END      (7)
#define SOC_SYSNOC_ERR_LOGGER_ID_COREID_core_check_sum_START  (8)
#define SOC_SYSNOC_ERR_LOGGER_ID_COREID_core_check_sum_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_ERR_LOGGER_ID_REVISIONID_UNION
 �ṹ˵��  : ERR_LOGGER_ID_REVISIONID �Ĵ����ṹ���塣��ַƫ����:0x0004����ֵ:0x012D5300�����:32
 �Ĵ���˵��: ���ߴ���汾�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  user_id    : 8;  /* bit[0-7] : �û��Զ���ֵ������ IP ��ʹ�� */
        unsigned int  flexnoc_id : 24; /* bit[8-31]: ���ߴ���汾�Ĵ��� */
    } reg;
} SOC_SYSNOC_ERR_LOGGER_ID_REVISIONID_UNION;
#endif
#define SOC_SYSNOC_ERR_LOGGER_ID_REVISIONID_user_id_START     (0)
#define SOC_SYSNOC_ERR_LOGGER_ID_REVISIONID_user_id_END       (7)
#define SOC_SYSNOC_ERR_LOGGER_ID_REVISIONID_flexnoc_id_START  (8)
#define SOC_SYSNOC_ERR_LOGGER_ID_REVISIONID_flexnoc_id_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_ERR_LOGGER_FAULTEN_UNION
 �ṹ˵��  : ERR_LOGGER_FAULTEN �Ĵ����ṹ���塣��ַƫ����:0x0008����ֵ:0x00000000�����:32
 �Ĵ���˵��: SYSNOC Err LOGGER ʹ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  fault_en : 1;  /* bit[0]   : ʹ������жϣ�����Ч������ź�sysnoc_observer_error_int���� */
        unsigned int  reserved : 31; /* bit[1-31]: ���� */
    } reg;
} SOC_SYSNOC_ERR_LOGGER_FAULTEN_UNION;
#endif
#define SOC_SYSNOC_ERR_LOGGER_FAULTEN_fault_en_START  (0)
#define SOC_SYSNOC_ERR_LOGGER_FAULTEN_fault_en_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_ERR_LOGGER_ERRVLD_UNION
 �ṹ˵��  : ERR_LOGGER_ERRVLD �Ĵ����ṹ���塣��ַƫ����:0x000C����ֵ:0x00000000�����:32
 �Ĵ���˵��: Error LOGGER ��Чָʾ�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  err_vld  : 1;  /* bit[0]   : Error log��Чָʾ״̬�Ĵ���������Ч�� */
        unsigned int  reserved : 31; /* bit[1-31]: ���� */
    } reg;
} SOC_SYSNOC_ERR_LOGGER_ERRVLD_UNION;
#endif
#define SOC_SYSNOC_ERR_LOGGER_ERRVLD_err_vld_START   (0)
#define SOC_SYSNOC_ERR_LOGGER_ERRVLD_err_vld_END     (0)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_ERR_LOGGER_ERRCLR_UNION
 �ṹ˵��  : ERR_LOGGER_ERRCLR �Ĵ����ṹ���塣��ַƫ����:0x0010����ֵ:0x00000000�����:32
 �Ĵ���˵��: �ж�����Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  err_clr  : 1;  /* bit[0-0] : 1.д1'b1����ErrVld�Ĵ���������ж�ʹ�ܣ�ͬʱҲ����жϣ���
                                                   2.д1'b1�����ܴ洢��ErrClr�Ĵ����У����üĴ�������������1'b0�� */
        unsigned int  reserved : 31; /* bit[1-31]: ���� */
    } reg;
} SOC_SYSNOC_ERR_LOGGER_ERRCLR_UNION;
#endif
#define SOC_SYSNOC_ERR_LOGGER_ERRCLR_err_clr_START   (0)
#define SOC_SYSNOC_ERR_LOGGER_ERRCLR_err_clr_END     (0)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_ERR_LOGGER_ERRLOG0_UNION
 �ṹ˵��  : ERR_LOGGER_ERRLOG0 �Ĵ����ṹ���塣��ַƫ����:0x0014����ֵ:0x80000000�����:32
 �Ĵ���˵��: Error log0
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  lock     : 1;  /* bit[0]    : ָʾTransaction�Ƿ�ΪLock����������Ч�� */
        unsigned int  opc      : 4;  /* bit[1-4]  : Transaction�������ͣ�
                                                    0&#45;->RD��INCR�Ķ�������
                                                    1&#45;->RDW��WRAP�Ķ�������
                                                    2&#45;->RDL��Exclusive ��������
                                                    3&#45;->RDX��Lock read��
                                                    4&#45;->WR��INCRд������
                                                    5&#45;->WRW��WRAPд������
                                                    6&#45;->WRC��Exclusiveд������
                                                    8&#45;->PRE��FIXED BURST��
                                                    9&#45;->URG��urgency packet��Error Probe�����⵽����packet��
                                                    ����&#45;->Reserveed���Ƿ������� */
        unsigned int  reserved_0: 3;  /* bit[5-7]  : ���� */
        unsigned int  err_code : 3;  /* bit[8-10] : �������ͣ�
                                                    0&#45;->������slave����Error Response��
                                                    1&#45;->master���������ߵ�Reserve��ַ�ռ䣻
                                                    2&#45;->master������slave��֧�ֵ�Burst���ͣ���ǰ���߲���������ֳ�������
                                                    3&#45;->master�����˵�������
                                                    4&#45;->����Ȩ�ޱ���
                                                    5&#45;->master����ʱ���յ�Firewall��Hide Error Response��
                                                    6&#45;->������slave TimeOut��������Error Response��
                                                    7&#45;->none�� */
        unsigned int  reserved_1: 5;  /* bit[11-15]: ���� */
        unsigned int  len1     : 7;  /* bit[16-22]: ��ʾ����Transaction�İ�������λΪByte */
        unsigned int  reserved_2: 8;  /* bit[23-30]: ���� */
        unsigned int  format   : 1;  /* bit[31]   : ���ڱ�ʾError log0�ĸ�ʽ��FlexNoC2.7�Ժ�汾�̶�Ϊ1'b1�� */
    } reg;
} SOC_SYSNOC_ERR_LOGGER_ERRLOG0_UNION;
#endif
#define SOC_SYSNOC_ERR_LOGGER_ERRLOG0_lock_START      (0)
#define SOC_SYSNOC_ERR_LOGGER_ERRLOG0_lock_END        (0)
#define SOC_SYSNOC_ERR_LOGGER_ERRLOG0_opc_START       (1)
#define SOC_SYSNOC_ERR_LOGGER_ERRLOG0_opc_END         (4)
#define SOC_SYSNOC_ERR_LOGGER_ERRLOG0_err_code_START  (8)
#define SOC_SYSNOC_ERR_LOGGER_ERRLOG0_err_code_END    (10)
#define SOC_SYSNOC_ERR_LOGGER_ERRLOG0_len1_START      (16)
#define SOC_SYSNOC_ERR_LOGGER_ERRLOG0_len1_END        (22)
#define SOC_SYSNOC_ERR_LOGGER_ERRLOG0_format_START    (31)
#define SOC_SYSNOC_ERR_LOGGER_ERRLOG0_format_END      (31)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_ERR_LOGGER_ERRLOG1_UNION
 �ṹ˵��  : ERR_LOGGER_ERRLOG1 �Ĵ����ṹ���塣��ַƫ����:0x0018����ֵ:0x00000000�����:32
 �Ĵ���˵��: Error log1
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  errlog1  : 18; /* bit[0-17] : RouteId��·����Ϣ����bit��������
                                                    [17:14]&#45;->Initiator Flow ID�����ڱ�ʾ������ʵ�master��
                                                    [13:10]&#45;->target Flow ID�����ڱ�ʾ�����ʵ�slave��
                                                    [9:7]&#45;->Target SubRange����ʾTarget NIU�Ĳ�ͬ�����ַ�Σ�
                                                    [6:0]&#45;->Seq ID��Transaction��ǣ� */
        unsigned int  reserved : 14; /* bit[18-31]: ���� */
    } reg;
} SOC_SYSNOC_ERR_LOGGER_ERRLOG1_UNION;
#endif
#define SOC_SYSNOC_ERR_LOGGER_ERRLOG1_errlog1_START   (0)
#define SOC_SYSNOC_ERR_LOGGER_ERRLOG1_errlog1_END     (17)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_ERR_LOGGER_ERRLOG3_UNION
 �ṹ˵��  : ERR_LOGGER_ERRLOG3 �Ĵ����ṹ���塣��ַƫ����:0x0020����ֵ:0x00000000�����:32
 �Ĵ���˵��: Error log3
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  errlog3 : 32; /* bit[0-31]: NTTP packet header ��ַ��Ϣ */
    } reg;
} SOC_SYSNOC_ERR_LOGGER_ERRLOG3_UNION;
#endif
#define SOC_SYSNOC_ERR_LOGGER_ERRLOG3_errlog3_START  (0)
#define SOC_SYSNOC_ERR_LOGGER_ERRLOG3_errlog3_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_ERR_LOGGER_ERRLOG7_UNION
 �ṹ˵��  : ERR_LOGGER_ERRLOG7 �Ĵ����ṹ���塣��ַƫ����:0x0030����ֵ:0x00000000�����:32
 �Ĵ���˵��: Error log7
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  errlog7  : 1;  /* bit[0]   : NTTP packet header ��ȫ�ź�ֵ */
        unsigned int  reserved : 31; /* bit[1-31]: ���� */
    } reg;
} SOC_SYSNOC_ERR_LOGGER_ERRLOG7_UNION;
#endif
#define SOC_SYSNOC_ERR_LOGGER_ERRLOG7_errlog7_START   (0)
#define SOC_SYSNOC_ERR_LOGGER_ERRLOG7_errlog7_END     (0)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_ACPU_QOSGENERATOR_ID_COREID_UNION
 �ṹ˵��  : ACPU_QOSGENERATOR_ID_COREID �Ĵ����ṹ���塣��ַƫ����:0x0100����ֵ:0x08B0A904�����:32
 �Ĵ���˵��: ACPU QoS Generator ����ID
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  core_type_id   : 8;  /* bit[0-7] : ACPU QoS Generator ����ID */
        unsigned int  core_check_sum : 24; /* bit[8-31]: ACPU QoS Generator �Ĳ�������� */
    } reg;
} SOC_SYSNOC_ACPU_QOSGENERATOR_ID_COREID_UNION;
#endif
#define SOC_SYSNOC_ACPU_QOSGENERATOR_ID_COREID_core_type_id_START    (0)
#define SOC_SYSNOC_ACPU_QOSGENERATOR_ID_COREID_core_type_id_END      (7)
#define SOC_SYSNOC_ACPU_QOSGENERATOR_ID_COREID_core_check_sum_START  (8)
#define SOC_SYSNOC_ACPU_QOSGENERATOR_ID_COREID_core_check_sum_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_ACPU_QOSGENERATOR_ID_REVISIONID_UNION
 �ṹ˵��  : ACPU_QOSGENERATOR_ID_REVISIONID �Ĵ����ṹ���塣��ַƫ����:0x0104����ֵ:0x012D5300�����:32
 �Ĵ���˵��: ACPU QoS Generator ���ߴ���汾�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  user_id    : 8;  /* bit[0-7] : �û��Զ���ֵ������ IP ��ʹ�� */
        unsigned int  flexnoc_id : 24; /* bit[8-31]: ���ߴ���汾�Ĵ��� */
    } reg;
} SOC_SYSNOC_ACPU_QOSGENERATOR_ID_REVISIONID_UNION;
#endif
#define SOC_SYSNOC_ACPU_QOSGENERATOR_ID_REVISIONID_user_id_START     (0)
#define SOC_SYSNOC_ACPU_QOSGENERATOR_ID_REVISIONID_user_id_END       (7)
#define SOC_SYSNOC_ACPU_QOSGENERATOR_ID_REVISIONID_flexnoc_id_START  (8)
#define SOC_SYSNOC_ACPU_QOSGENERATOR_ID_REVISIONID_flexnoc_id_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_ACPU_QOSGENERATOR_PRIORITY_UNION
 �ṹ˵��  : ACPU_QOSGENERATOR_PRIORITY �Ĵ����ṹ���塣��ַƫ����:0x0108����ֵ:0x80000000�����:32
 �Ĵ���˵��: ACPU QoS Generator ���ȼ��Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  p0       : 3;  /* bit[0-2]  : �� Regulator ģʽ�������˵� hurry ֵ���� Fixed/limiter ģʽ��������д urgency ֵ */
        unsigned int  reserved_0: 5;  /* bit[3-7]  : ���� */
        unsigned int  p1       : 3;  /* bit[8-10] : �� Regulator ģʽ�������˸� hurry ֵ���� Fixed/limiter ģʽ�������˶� urgency ֵ */
        unsigned int  reserved_1: 20; /* bit[11-30]: ���� */
        unsigned int  mark     : 1;  /* bit[31-31]: �����ݱ�־��Ϊ0ʱ�� */
    } reg;
} SOC_SYSNOC_ACPU_QOSGENERATOR_PRIORITY_UNION;
#endif
#define SOC_SYSNOC_ACPU_QOSGENERATOR_PRIORITY_p0_START        (0)
#define SOC_SYSNOC_ACPU_QOSGENERATOR_PRIORITY_p0_END          (2)
#define SOC_SYSNOC_ACPU_QOSGENERATOR_PRIORITY_p1_START        (8)
#define SOC_SYSNOC_ACPU_QOSGENERATOR_PRIORITY_p1_END          (10)
#define SOC_SYSNOC_ACPU_QOSGENERATOR_PRIORITY_mark_START      (31)
#define SOC_SYSNOC_ACPU_QOSGENERATOR_PRIORITY_mark_END        (31)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_ACPU_QOSGENERATOR_MODE_UNION
 �ṹ˵��  : ACPU_QOSGENERATOR_MODE �Ĵ����ṹ���塣��ַƫ����:0x010C����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU QoS Generator ģʽ�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mode     : 2;  /* bit[0-1] : ģʽѡ��0��Fixed��1��Limiter��2��Bypass��3��Regulator���˴�ֻ����Ϊ0��2�� */
        unsigned int  reserved : 30; /* bit[2-31]: ���� */
    } reg;
} SOC_SYSNOC_ACPU_QOSGENERATOR_MODE_UNION;
#endif
#define SOC_SYSNOC_ACPU_QOSGENERATOR_MODE_mode_START      (0)
#define SOC_SYSNOC_ACPU_QOSGENERATOR_MODE_mode_END        (1)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_ACPU_QOSGENERATOR_EXTCONTROL_UNION
 �ṹ˵��  : ACPU_QOSGENERATOR_EXTCONTROL �Ĵ����ṹ���塣��ַƫ����:0x0118����ֵ:0x00000000�����:32
 �Ĵ���˵��: ACPU QoS Generator �ⲿ���ƼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  socket_qos_en : 1;  /* bit[0-0] : �������� socket �� QoS ֵ���� QoS Generator �� QoS ֵ */
        unsigned int  ext_thr_en    : 1;  /* bit[1-1] : �ⲿ��ֵ�������Ĵ������õ���ֵ���Ƹߵ����ȼ� */
        unsigned int  int_clk_en    : 1;  /* bit[2-2] : ����ʱ�ӣ�NIUʱ�ӣ�����ο�ʱ�ӽ��д������ */
        unsigned int  reserved      : 29; /* bit[3-31]: ���� */
    } reg;
} SOC_SYSNOC_ACPU_QOSGENERATOR_EXTCONTROL_UNION;
#endif
#define SOC_SYSNOC_ACPU_QOSGENERATOR_EXTCONTROL_socket_qos_en_START  (0)
#define SOC_SYSNOC_ACPU_QOSGENERATOR_EXTCONTROL_socket_qos_en_END    (0)
#define SOC_SYSNOC_ACPU_QOSGENERATOR_EXTCONTROL_ext_thr_en_START     (1)
#define SOC_SYSNOC_ACPU_QOSGENERATOR_EXTCONTROL_ext_thr_en_END       (1)
#define SOC_SYSNOC_ACPU_QOSGENERATOR_EXTCONTROL_int_clk_en_START     (2)
#define SOC_SYSNOC_ACPU_QOSGENERATOR_EXTCONTROL_int_clk_en_END       (2)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_HIFI_QOSGENERATOR_ID_COREID_UNION
 �ṹ˵��  : HIFI_QOSGENERATOR_ID_COREID �Ĵ����ṹ���塣��ַƫ����:0x0200����ֵ:0x7A037A04�����:32
 �Ĵ���˵��: HIFI QoS Generator ����ID
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  core_type_id   : 8;  /* bit[0-7] : HIFI QoS Generator ����ID */
        unsigned int  core_check_sum : 24; /* bit[8-31]: HIFI QoS Generator �Ĳ�������� */
    } reg;
} SOC_SYSNOC_HIFI_QOSGENERATOR_ID_COREID_UNION;
#endif
#define SOC_SYSNOC_HIFI_QOSGENERATOR_ID_COREID_core_type_id_START    (0)
#define SOC_SYSNOC_HIFI_QOSGENERATOR_ID_COREID_core_type_id_END      (7)
#define SOC_SYSNOC_HIFI_QOSGENERATOR_ID_COREID_core_check_sum_START  (8)
#define SOC_SYSNOC_HIFI_QOSGENERATOR_ID_COREID_core_check_sum_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_HIFI_QOSGENERATOR_ID_REVISIONID_UNION
 �ṹ˵��  : HIFI_QOSGENERATOR_ID_REVISIONID �Ĵ����ṹ���塣��ַƫ����:0x0204����ֵ:0x012D5300�����:32
 �Ĵ���˵��: HIFI QoS Generator���ߴ���汾�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  user_id    : 8;  /* bit[0-7] : �û��Զ���ֵ������ IP ��ʹ�� */
        unsigned int  flexnoc_id : 24; /* bit[8-31]: ���ߴ���汾�Ĵ��� */
    } reg;
} SOC_SYSNOC_HIFI_QOSGENERATOR_ID_REVISIONID_UNION;
#endif
#define SOC_SYSNOC_HIFI_QOSGENERATOR_ID_REVISIONID_user_id_START     (0)
#define SOC_SYSNOC_HIFI_QOSGENERATOR_ID_REVISIONID_user_id_END       (7)
#define SOC_SYSNOC_HIFI_QOSGENERATOR_ID_REVISIONID_flexnoc_id_START  (8)
#define SOC_SYSNOC_HIFI_QOSGENERATOR_ID_REVISIONID_flexnoc_id_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_HIFI_QOSGENERATOR_PRIORITY_UNION
 �ṹ˵��  : HIFI_QOSGENERATOR_PRIORITY �Ĵ����ṹ���塣��ַƫ����:0x0208����ֵ:0x80000000�����:32
 �Ĵ���˵��: HIFI QoS Generator���ȼ��Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  p0       : 3;  /* bit[0-2]  : �� Regulator ģʽ�������˵� hurry ֵ���� Fixed/limiter ģʽ��������д urgency ֵ */
        unsigned int  reserved_0: 5;  /* bit[3-7]  : ���� */
        unsigned int  p1       : 3;  /* bit[8-10] : �� Regulator ģʽ�������˸� hurry ֵ���� Fixed/limiter ģʽ�������˶� urgency ֵ */
        unsigned int  reserved_1: 20; /* bit[11-30]: ���� */
        unsigned int  mark     : 1;  /* bit[31-31]: �����ݱ�־��Ϊ0ʱ�� */
    } reg;
} SOC_SYSNOC_HIFI_QOSGENERATOR_PRIORITY_UNION;
#endif
#define SOC_SYSNOC_HIFI_QOSGENERATOR_PRIORITY_p0_START        (0)
#define SOC_SYSNOC_HIFI_QOSGENERATOR_PRIORITY_p0_END          (2)
#define SOC_SYSNOC_HIFI_QOSGENERATOR_PRIORITY_p1_START        (8)
#define SOC_SYSNOC_HIFI_QOSGENERATOR_PRIORITY_p1_END          (10)
#define SOC_SYSNOC_HIFI_QOSGENERATOR_PRIORITY_mark_START      (31)
#define SOC_SYSNOC_HIFI_QOSGENERATOR_PRIORITY_mark_END        (31)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_HIFI_QOSGENERATOR_MODE_UNION
 �ṹ˵��  : HIFI_QOSGENERATOR_MODE �Ĵ����ṹ���塣��ַƫ����:0x020C����ֵ:0x00000000�����:32
 �Ĵ���˵��: HIFI QoS Generator ģʽ�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mode     : 2;  /* bit[0-1] : ģʽѡ��0��Fixed��1��Limiter��2��Bypass��3��Regulator */
        unsigned int  reserved : 30; /* bit[2-31]: ���� */
    } reg;
} SOC_SYSNOC_HIFI_QOSGENERATOR_MODE_UNION;
#endif
#define SOC_SYSNOC_HIFI_QOSGENERATOR_MODE_mode_START      (0)
#define SOC_SYSNOC_HIFI_QOSGENERATOR_MODE_mode_END        (1)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_HIFI_QOSGENERATOR_BANDWIDTH_UNION
 �ṹ˵��  : HIFI_QOSGENERATOR_BANDWIDTH �Ĵ����ṹ���塣��ַƫ����:0x0210����ֵ:0x000000D5�����:32
 �Ĵ���˵��: HIFI QoS Generator ������ֵ�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  bandwidth : 12; /* bit[0-11] : ������ֵ�����㹫ʽΪ������MB/s)/Ƶ��(MHz)*256���磺����Ϊ 300MB/s��HIFI Ƶ��Ϊ 360MHz�������ô˼Ĵ���Ϊ 0XD5 */
        unsigned int  reserved  : 20; /* bit[12-31]: ���� */
    } reg;
} SOC_SYSNOC_HIFI_QOSGENERATOR_BANDWIDTH_UNION;
#endif
#define SOC_SYSNOC_HIFI_QOSGENERATOR_BANDWIDTH_bandwidth_START  (0)
#define SOC_SYSNOC_HIFI_QOSGENERATOR_BANDWIDTH_bandwidth_END    (11)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_HIFI_QOSGENERATOR_SATURATION_UNION
 �ṹ˵��  : HIFI_QOSGENERATOR_SATURATION �Ĵ����ṹ���塣��ַƫ����:0x0214����ֵ:0x00000040�����:32
 �Ĵ���˵��: HIFI QoS Generator �������Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  saturation : 10; /* bit[0-9]  : �����������С�����㹫ʽΪ��������ֵ��Byte��/16���磺������СΪ1024 Bytes�������ô˼Ĵ���Ϊ 0X40 */
        unsigned int  reserved   : 22; /* bit[10-31]: ���� */
    } reg;
} SOC_SYSNOC_HIFI_QOSGENERATOR_SATURATION_UNION;
#endif
#define SOC_SYSNOC_HIFI_QOSGENERATOR_SATURATION_saturation_START  (0)
#define SOC_SYSNOC_HIFI_QOSGENERATOR_SATURATION_saturation_END    (9)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_HIFI_QOSGENERATOR_EXTCONTROL_UNION
 �ṹ˵��  : HIFI_QOSGENERATOR_EXTCONTROL �Ĵ����ṹ���塣��ַƫ����:0x0218����ֵ:0x00000000�����:32
 �Ĵ���˵��: HIFI QoS Generator�ⲿ���ƼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  socket_qos_en : 1;  /* bit[0-0] : �������� socket �� QoS ֵ���� QoS Generator �� QoS ֵ */
        unsigned int  ext_thr_en    : 1;  /* bit[1-1] : �ⲿ��ֵ�������Ĵ������õ���ֵ���Ƹߵ����ȼ� */
        unsigned int  int_clk_en    : 1;  /* bit[2-2] : ����ʱ�ӣ�NIUʱ�ӣ�����ο�ʱ�ӽ��д������ */
        unsigned int  reserved      : 29; /* bit[3-31]: ���� */
    } reg;
} SOC_SYSNOC_HIFI_QOSGENERATOR_EXTCONTROL_UNION;
#endif
#define SOC_SYSNOC_HIFI_QOSGENERATOR_EXTCONTROL_socket_qos_en_START  (0)
#define SOC_SYSNOC_HIFI_QOSGENERATOR_EXTCONTROL_socket_qos_en_END    (0)
#define SOC_SYSNOC_HIFI_QOSGENERATOR_EXTCONTROL_ext_thr_en_START     (1)
#define SOC_SYSNOC_HIFI_QOSGENERATOR_EXTCONTROL_ext_thr_en_END       (1)
#define SOC_SYSNOC_HIFI_QOSGENERATOR_EXTCONTROL_int_clk_en_START     (2)
#define SOC_SYSNOC_HIFI_QOSGENERATOR_EXTCONTROL_int_clk_en_END       (2)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_MMC0_QOSGENERATOR_ID_COREID_UNION
 �ṹ˵��  : MMC0_QOSGENERATOR_ID_COREID �Ĵ����ṹ���塣��ַƫ����:0x0300����ֵ:0x7BA5EA04�����:32
 �Ĵ���˵��: MMC0 QoS Generator ����ID
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  core_type_id   : 8;  /* bit[0-7] : MMC0 QoS Generator ����ID */
        unsigned int  core_check_sum : 24; /* bit[8-31]: MMC0 QoS Generator �Ĳ�������� */
    } reg;
} SOC_SYSNOC_MMC0_QOSGENERATOR_ID_COREID_UNION;
#endif
#define SOC_SYSNOC_MMC0_QOSGENERATOR_ID_COREID_core_type_id_START    (0)
#define SOC_SYSNOC_MMC0_QOSGENERATOR_ID_COREID_core_type_id_END      (7)
#define SOC_SYSNOC_MMC0_QOSGENERATOR_ID_COREID_core_check_sum_START  (8)
#define SOC_SYSNOC_MMC0_QOSGENERATOR_ID_COREID_core_check_sum_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_MMC0_QOSGENERATOR_ID_REVISIONID_UNION
 �ṹ˵��  : MMC0_QOSGENERATOR_ID_REVISIONID �Ĵ����ṹ���塣��ַƫ����:0x0304����ֵ:0x012D5300�����:32
 �Ĵ���˵��: MMC0  QoS Generator���ߴ���汾�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  user_id    : 8;  /* bit[0-7] : �û��Զ���ֵ������ IP ��ʹ�� */
        unsigned int  flexnoc_id : 24; /* bit[8-31]: ���ߴ���汾�Ĵ��� */
    } reg;
} SOC_SYSNOC_MMC0_QOSGENERATOR_ID_REVISIONID_UNION;
#endif
#define SOC_SYSNOC_MMC0_QOSGENERATOR_ID_REVISIONID_user_id_START     (0)
#define SOC_SYSNOC_MMC0_QOSGENERATOR_ID_REVISIONID_user_id_END       (7)
#define SOC_SYSNOC_MMC0_QOSGENERATOR_ID_REVISIONID_flexnoc_id_START  (8)
#define SOC_SYSNOC_MMC0_QOSGENERATOR_ID_REVISIONID_flexnoc_id_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_MMC0_QOSGENERATOR_PRIORITY_UNION
 �ṹ˵��  : MMC0_QOSGENERATOR_PRIORITY �Ĵ����ṹ���塣��ַƫ����:0x0308����ֵ:0x80000000�����:32
 �Ĵ���˵��: MMC0 QoS Generator���ȼ��Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  p0       : 3;  /* bit[0-2]  : �� Regulator ģʽ�������˵� hurry ֵ���� Fixed/limiter ģʽ��������д urgency ֵ */
        unsigned int  reserved_0: 5;  /* bit[3-7]  : ���� */
        unsigned int  p1       : 3;  /* bit[8-10] : �� Regulator ģʽ�������˸� hurry ֵ���� Fixed/limiter ģʽ�������˶� urgency ֵ */
        unsigned int  reserved_1: 20; /* bit[11-30]: ���� */
        unsigned int  mark     : 1;  /* bit[31-31]: �����ݱ�־��Ϊ0ʱ�� */
    } reg;
} SOC_SYSNOC_MMC0_QOSGENERATOR_PRIORITY_UNION;
#endif
#define SOC_SYSNOC_MMC0_QOSGENERATOR_PRIORITY_p0_START        (0)
#define SOC_SYSNOC_MMC0_QOSGENERATOR_PRIORITY_p0_END          (2)
#define SOC_SYSNOC_MMC0_QOSGENERATOR_PRIORITY_p1_START        (8)
#define SOC_SYSNOC_MMC0_QOSGENERATOR_PRIORITY_p1_END          (10)
#define SOC_SYSNOC_MMC0_QOSGENERATOR_PRIORITY_mark_START      (31)
#define SOC_SYSNOC_MMC0_QOSGENERATOR_PRIORITY_mark_END        (31)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_MMC0_QOSGENERATOR_MODE_UNION
 �ṹ˵��  : MMC0_QOSGENERATOR_MODE �Ĵ����ṹ���塣��ַƫ����:0x030C����ֵ:0x00000000�����:32
 �Ĵ���˵��: MMC0 QoS Generatorģʽ�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mode     : 2;  /* bit[0-1] : ģʽѡ��0��Fixed��1��Limiter��2��Bypass��3��Regulator���˴�ֻ����Ϊ0��2�� */
        unsigned int  reserved : 30; /* bit[2-31]: ���� */
    } reg;
} SOC_SYSNOC_MMC0_QOSGENERATOR_MODE_UNION;
#endif
#define SOC_SYSNOC_MMC0_QOSGENERATOR_MODE_mode_START      (0)
#define SOC_SYSNOC_MMC0_QOSGENERATOR_MODE_mode_END        (1)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_MMC0_QOSGENERATOR_EXTCONTROL_UNION
 �ṹ˵��  : MMC0_QOSGENERATOR_EXTCONTROL �Ĵ����ṹ���塣��ַƫ����:0x0318����ֵ:0x00000000�����:32
 �Ĵ���˵��: MMC0 QoS Generator�ⲿ���ƼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  socket_qos_en : 1;  /* bit[0-0] : �������� socket �� QoS ֵ���� QoS Generator �� QoS ֵ */
        unsigned int  ext_thr_en    : 1;  /* bit[1-1] : �ⲿ��ֵ�������Ĵ������õ���ֵ���Ƹߵ����ȼ� */
        unsigned int  int_clk_en    : 1;  /* bit[2-2] : ����ʱ�ӣ�NIUʱ�ӣ�����ο�ʱ�ӽ��д������ */
        unsigned int  reserved      : 29; /* bit[3-31]: ���� */
    } reg;
} SOC_SYSNOC_MMC0_QOSGENERATOR_EXTCONTROL_UNION;
#endif
#define SOC_SYSNOC_MMC0_QOSGENERATOR_EXTCONTROL_socket_qos_en_START  (0)
#define SOC_SYSNOC_MMC0_QOSGENERATOR_EXTCONTROL_socket_qos_en_END    (0)
#define SOC_SYSNOC_MMC0_QOSGENERATOR_EXTCONTROL_ext_thr_en_START     (1)
#define SOC_SYSNOC_MMC0_QOSGENERATOR_EXTCONTROL_ext_thr_en_END       (1)
#define SOC_SYSNOC_MMC0_QOSGENERATOR_EXTCONTROL_int_clk_en_START     (2)
#define SOC_SYSNOC_MMC0_QOSGENERATOR_EXTCONTROL_int_clk_en_END       (2)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_MMC1_QOSGENERATOR_ID_COREID_UNION
 �ṹ˵��  : MMC1_QOSGENERATOR_ID_COREID �Ĵ����ṹ���塣��ַƫ����:0x0400����ֵ:0xA23C5804�����:32
 �Ĵ���˵��: MMC1 QoS Generator ����ID
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  core_type_id   : 8;  /* bit[0-7] : MMC1 QoS Generator ����ID */
        unsigned int  core_check_sum : 24; /* bit[8-31]: MMC1 QoS Generator �Ĳ�������� */
    } reg;
} SOC_SYSNOC_MMC1_QOSGENERATOR_ID_COREID_UNION;
#endif
#define SOC_SYSNOC_MMC1_QOSGENERATOR_ID_COREID_core_type_id_START    (0)
#define SOC_SYSNOC_MMC1_QOSGENERATOR_ID_COREID_core_type_id_END      (7)
#define SOC_SYSNOC_MMC1_QOSGENERATOR_ID_COREID_core_check_sum_START  (8)
#define SOC_SYSNOC_MMC1_QOSGENERATOR_ID_COREID_core_check_sum_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_MMC1_QOSGENERATOR_ID_REVISIONID_UNION
 �ṹ˵��  : MMC1_QOSGENERATOR_ID_REVISIONID �Ĵ����ṹ���塣��ַƫ����:0x0404����ֵ:0x012D5300�����:32
 �Ĵ���˵��: MMC1  QoS Generator���ߴ���汾�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  user_id    : 8;  /* bit[0-7] : �û��Զ���ֵ������ IP ��ʹ�� */
        unsigned int  flexnoc_id : 24; /* bit[8-31]: ���ߴ���汾�Ĵ��� */
    } reg;
} SOC_SYSNOC_MMC1_QOSGENERATOR_ID_REVISIONID_UNION;
#endif
#define SOC_SYSNOC_MMC1_QOSGENERATOR_ID_REVISIONID_user_id_START     (0)
#define SOC_SYSNOC_MMC1_QOSGENERATOR_ID_REVISIONID_user_id_END       (7)
#define SOC_SYSNOC_MMC1_QOSGENERATOR_ID_REVISIONID_flexnoc_id_START  (8)
#define SOC_SYSNOC_MMC1_QOSGENERATOR_ID_REVISIONID_flexnoc_id_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_MMC1_QOSGENERATOR_PRIORITY_UNION
 �ṹ˵��  : MMC1_QOSGENERATOR_PRIORITY �Ĵ����ṹ���塣��ַƫ����:0x0408����ֵ:0x80000000�����:32
 �Ĵ���˵��: MMC1 QoS Generator���ȼ��Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  p0       : 3;  /* bit[0-2]  : �� Regulator ģʽ�������˵� hurry ֵ���� Fixed/limiter ģʽ��������д urgency ֵ */
        unsigned int  reserved_0: 5;  /* bit[3-7]  : ���� */
        unsigned int  p1       : 3;  /* bit[8-10] : �� Regulator ģʽ�������˸� hurry ֵ���� Fixed/limiter ģʽ�������˶� urgency ֵ */
        unsigned int  reserved_1: 20; /* bit[11-30]: ���� */
        unsigned int  mark     : 1;  /* bit[31-31]: �����ݱ�־ */
    } reg;
} SOC_SYSNOC_MMC1_QOSGENERATOR_PRIORITY_UNION;
#endif
#define SOC_SYSNOC_MMC1_QOSGENERATOR_PRIORITY_p0_START        (0)
#define SOC_SYSNOC_MMC1_QOSGENERATOR_PRIORITY_p0_END          (2)
#define SOC_SYSNOC_MMC1_QOSGENERATOR_PRIORITY_p1_START        (8)
#define SOC_SYSNOC_MMC1_QOSGENERATOR_PRIORITY_p1_END          (10)
#define SOC_SYSNOC_MMC1_QOSGENERATOR_PRIORITY_mark_START      (31)
#define SOC_SYSNOC_MMC1_QOSGENERATOR_PRIORITY_mark_END        (31)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_MMC1_QOSGENERATOR_MODE_UNION
 �ṹ˵��  : MMC1_QOSGENERATOR_MODE �Ĵ����ṹ���塣��ַƫ����:0x040C����ֵ:0x00000000�����:32
 �Ĵ���˵��: MMC1 QoS Generatorģʽ�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mode     : 2;  /* bit[0-1] : ģʽѡ��0��Fixed��1��Limiter��2��Bypass��3��Regulator���˴�ֻ����Ϊ0��2�� */
        unsigned int  reserved : 30; /* bit[2-31]: ���� */
    } reg;
} SOC_SYSNOC_MMC1_QOSGENERATOR_MODE_UNION;
#endif
#define SOC_SYSNOC_MMC1_QOSGENERATOR_MODE_mode_START      (0)
#define SOC_SYSNOC_MMC1_QOSGENERATOR_MODE_mode_END        (1)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_MMC1_QOSGENERATOR_EXTCONTROL_UNION
 �ṹ˵��  : MMC1_QOSGENERATOR_EXTCONTROL �Ĵ����ṹ���塣��ַƫ����:0x0418����ֵ:0x00000000�����:32
 �Ĵ���˵��: MMC1 QoS Generator�ⲿ���ƼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  socket_qos_en : 1;  /* bit[0-0] : �������� socket �� QoS ֵ���� QoS Generator �� QoS ֵ */
        unsigned int  ext_thr_en    : 1;  /* bit[1-1] : �ⲿ��ֵ�������Ĵ������õ���ֵ���Ƹߵ����ȼ� */
        unsigned int  int_clk_en    : 1;  /* bit[2-2] : ����ʱ�ӣ�NIUʱ�ӣ�����ο�ʱ�ӽ��д������ */
        unsigned int  reserved      : 29; /* bit[3-31]: ���� */
    } reg;
} SOC_SYSNOC_MMC1_QOSGENERATOR_EXTCONTROL_UNION;
#endif
#define SOC_SYSNOC_MMC1_QOSGENERATOR_EXTCONTROL_socket_qos_en_START  (0)
#define SOC_SYSNOC_MMC1_QOSGENERATOR_EXTCONTROL_socket_qos_en_END    (0)
#define SOC_SYSNOC_MMC1_QOSGENERATOR_EXTCONTROL_ext_thr_en_START     (1)
#define SOC_SYSNOC_MMC1_QOSGENERATOR_EXTCONTROL_ext_thr_en_END       (1)
#define SOC_SYSNOC_MMC1_QOSGENERATOR_EXTCONTROL_int_clk_en_START     (2)
#define SOC_SYSNOC_MMC1_QOSGENERATOR_EXTCONTROL_int_clk_en_END       (2)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_MMC2_QOSGENERATOR_ID_COREID_UNION
 �ṹ˵��  : MMC2_QOSGENERATOR_ID_COREID �Ĵ����ṹ���塣��ַƫ����:0x0500����ֵ:0x0F222804�����:32
 �Ĵ���˵��: MMC2 QoS Generator ����ID
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  core_type_id   : 8;  /* bit[0-7] : MMC2 QoS Generator ����ID */
        unsigned int  core_check_sum : 24; /* bit[8-31]: MMC2 QoS Generator �Ĳ�������� */
    } reg;
} SOC_SYSNOC_MMC2_QOSGENERATOR_ID_COREID_UNION;
#endif
#define SOC_SYSNOC_MMC2_QOSGENERATOR_ID_COREID_core_type_id_START    (0)
#define SOC_SYSNOC_MMC2_QOSGENERATOR_ID_COREID_core_type_id_END      (7)
#define SOC_SYSNOC_MMC2_QOSGENERATOR_ID_COREID_core_check_sum_START  (8)
#define SOC_SYSNOC_MMC2_QOSGENERATOR_ID_COREID_core_check_sum_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_MMC2_QOSGENERATOR_ID_REVISIONID_UNION
 �ṹ˵��  : MMC2_QOSGENERATOR_ID_REVISIONID �Ĵ����ṹ���塣��ַƫ����:0x0504����ֵ:0x012D5300�����:32
 �Ĵ���˵��: MMC2  QoS Generator���ߴ���汾�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  user_id    : 8;  /* bit[0-7] : �û��Զ���ֵ������ IP ��ʹ�� */
        unsigned int  flexnoc_id : 24; /* bit[8-31]: ���ߴ���汾�Ĵ��� */
    } reg;
} SOC_SYSNOC_MMC2_QOSGENERATOR_ID_REVISIONID_UNION;
#endif
#define SOC_SYSNOC_MMC2_QOSGENERATOR_ID_REVISIONID_user_id_START     (0)
#define SOC_SYSNOC_MMC2_QOSGENERATOR_ID_REVISIONID_user_id_END       (7)
#define SOC_SYSNOC_MMC2_QOSGENERATOR_ID_REVISIONID_flexnoc_id_START  (8)
#define SOC_SYSNOC_MMC2_QOSGENERATOR_ID_REVISIONID_flexnoc_id_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_MMC2_QOSGENERATOR_PRIORITY_UNION
 �ṹ˵��  : MMC2_QOSGENERATOR_PRIORITY �Ĵ����ṹ���塣��ַƫ����:0x0508����ֵ:0x80000000�����:32
 �Ĵ���˵��: MMC2 QoS Generator���ȼ��Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  p0       : 3;  /* bit[0-2]  : �� Regulator ģʽ�������˵� hurry ֵ���� Fixed/limiter ģʽ��������д urgency ֵ */
        unsigned int  reserved_0: 5;  /* bit[3-7]  : ���� */
        unsigned int  p1       : 3;  /* bit[8-10] : �� Regulator ģʽ�������˸� hurry ֵ���� Fixed/limiter ģʽ�������˶� urgency ֵ */
        unsigned int  reserved_1: 20; /* bit[11-30]: ���� */
        unsigned int  mark     : 1;  /* bit[31-31]: �����ݱ�־ */
    } reg;
} SOC_SYSNOC_MMC2_QOSGENERATOR_PRIORITY_UNION;
#endif
#define SOC_SYSNOC_MMC2_QOSGENERATOR_PRIORITY_p0_START        (0)
#define SOC_SYSNOC_MMC2_QOSGENERATOR_PRIORITY_p0_END          (2)
#define SOC_SYSNOC_MMC2_QOSGENERATOR_PRIORITY_p1_START        (8)
#define SOC_SYSNOC_MMC2_QOSGENERATOR_PRIORITY_p1_END          (10)
#define SOC_SYSNOC_MMC2_QOSGENERATOR_PRIORITY_mark_START      (31)
#define SOC_SYSNOC_MMC2_QOSGENERATOR_PRIORITY_mark_END        (31)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_MMC2_QOSGENERATOR_MODE_UNION
 �ṹ˵��  : MMC2_QOSGENERATOR_MODE �Ĵ����ṹ���塣��ַƫ����:0x050C����ֵ:0x00000000�����:32
 �Ĵ���˵��: MMC2 QoS Generatorģʽ�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mode     : 2;  /* bit[0-1] : ģʽѡ��0��Fixed��1��Limiter��2��Bypass��3��Regulator���˴�ֻ����Ϊ0��2�� */
        unsigned int  reserved : 30; /* bit[2-31]: ���� */
    } reg;
} SOC_SYSNOC_MMC2_QOSGENERATOR_MODE_UNION;
#endif
#define SOC_SYSNOC_MMC2_QOSGENERATOR_MODE_mode_START      (0)
#define SOC_SYSNOC_MMC2_QOSGENERATOR_MODE_mode_END        (1)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_MMC2_QOSGENERATOR_EXTCONTROL_UNION
 �ṹ˵��  : MMC2_QOSGENERATOR_EXTCONTROL �Ĵ����ṹ���塣��ַƫ����:0x0518����ֵ:0x00000000�����:32
 �Ĵ���˵��: MMC2 QoS Generator�ⲿ���ƼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  socket_qos_en : 1;  /* bit[0-0] : �������� socket �� QoS ֵ���� QoS Generator �� QoS ֵ */
        unsigned int  ext_thr_en    : 1;  /* bit[1-1] : �ⲿ��ֵ�������Ĵ������õ���ֵ���Ƹߵ����ȼ� */
        unsigned int  int_clk_en    : 1;  /* bit[2-2] : ����ʱ�ӣ�NIUʱ�ӣ�����ο�ʱ�ӽ��д������ */
        unsigned int  reserved      : 29; /* bit[3-31]: ���� */
    } reg;
} SOC_SYSNOC_MMC2_QOSGENERATOR_EXTCONTROL_UNION;
#endif
#define SOC_SYSNOC_MMC2_QOSGENERATOR_EXTCONTROL_socket_qos_en_START  (0)
#define SOC_SYSNOC_MMC2_QOSGENERATOR_EXTCONTROL_socket_qos_en_END    (0)
#define SOC_SYSNOC_MMC2_QOSGENERATOR_EXTCONTROL_ext_thr_en_START     (1)
#define SOC_SYSNOC_MMC2_QOSGENERATOR_EXTCONTROL_ext_thr_en_END       (1)
#define SOC_SYSNOC_MMC2_QOSGENERATOR_EXTCONTROL_int_clk_en_START     (2)
#define SOC_SYSNOC_MMC2_QOSGENERATOR_EXTCONTROL_int_clk_en_END       (2)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_USB_QOSGENERATOR_ID_COREID_UNION
 �ṹ˵��  : USB_QOSGENERATOR_ID_COREID �Ĵ����ṹ���塣��ַƫ����:0x0600����ֵ:0xC8857D04�����:32
 �Ĵ���˵��: USB QoS Generator ����ID
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  core_type_id   : 8;  /* bit[0-7] : USB QoS Generator ����ID */
        unsigned int  core_check_sum : 24; /* bit[8-31]: USB QoS Generator �Ĳ�������� */
    } reg;
} SOC_SYSNOC_USB_QOSGENERATOR_ID_COREID_UNION;
#endif
#define SOC_SYSNOC_USB_QOSGENERATOR_ID_COREID_core_type_id_START    (0)
#define SOC_SYSNOC_USB_QOSGENERATOR_ID_COREID_core_type_id_END      (7)
#define SOC_SYSNOC_USB_QOSGENERATOR_ID_COREID_core_check_sum_START  (8)
#define SOC_SYSNOC_USB_QOSGENERATOR_ID_COREID_core_check_sum_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_USB_QOSGENERATOR_ID_REVISIONID_UNION
 �ṹ˵��  : USB_QOSGENERATOR_ID_REVISIONID �Ĵ����ṹ���塣��ַƫ����:0x0604����ֵ:0x012D5300�����:32
 �Ĵ���˵��: USB QoS Generator���ߴ���汾�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  user_id    : 8;  /* bit[0-7] : �û��Զ���ֵ������ IP ��ʹ�� */
        unsigned int  flexnoc_id : 24; /* bit[8-31]: ���ߴ���汾�Ĵ��� */
    } reg;
} SOC_SYSNOC_USB_QOSGENERATOR_ID_REVISIONID_UNION;
#endif
#define SOC_SYSNOC_USB_QOSGENERATOR_ID_REVISIONID_user_id_START     (0)
#define SOC_SYSNOC_USB_QOSGENERATOR_ID_REVISIONID_user_id_END       (7)
#define SOC_SYSNOC_USB_QOSGENERATOR_ID_REVISIONID_flexnoc_id_START  (8)
#define SOC_SYSNOC_USB_QOSGENERATOR_ID_REVISIONID_flexnoc_id_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_USB_QOSGENERATOR_PRIORITY_UNION
 �ṹ˵��  : USB_QOSGENERATOR_PRIORITY �Ĵ����ṹ���塣��ַƫ����:0x0608����ֵ:0x80000000�����:32
 �Ĵ���˵��: USB QoS Generator���ȼ��Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  p0       : 3;  /* bit[0-2]  : �� Regulator ģʽ�������˵� hurry ֵ���� Fixed/limiter ģʽ��������д urgency ֵ */
        unsigned int  reserved_0: 5;  /* bit[3-7]  : ���� */
        unsigned int  p1       : 3;  /* bit[8-10] : �� Regulator ģʽ�������˸� hurry ֵ���� Fixed/limiter ģʽ�������˶� urgency ֵ */
        unsigned int  reserved_1: 20; /* bit[11-30]: ���� */
        unsigned int  mark     : 1;  /* bit[31-31]: �����ݱ�־ */
    } reg;
} SOC_SYSNOC_USB_QOSGENERATOR_PRIORITY_UNION;
#endif
#define SOC_SYSNOC_USB_QOSGENERATOR_PRIORITY_p0_START        (0)
#define SOC_SYSNOC_USB_QOSGENERATOR_PRIORITY_p0_END          (2)
#define SOC_SYSNOC_USB_QOSGENERATOR_PRIORITY_p1_START        (8)
#define SOC_SYSNOC_USB_QOSGENERATOR_PRIORITY_p1_END          (10)
#define SOC_SYSNOC_USB_QOSGENERATOR_PRIORITY_mark_START      (31)
#define SOC_SYSNOC_USB_QOSGENERATOR_PRIORITY_mark_END        (31)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_USB_QOSGENERATOR_MODE_UNION
 �ṹ˵��  : USB_QOSGENERATOR_MODE �Ĵ����ṹ���塣��ַƫ����:0x060C����ֵ:0x00000000�����:32
 �Ĵ���˵��: USB QoS Generatorģʽ�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mode     : 2;  /* bit[0-1] : ģʽѡ��0��Fixed��1��Limiter��2��Bypass��3��Regulator���˴�ֻ����Ϊ0��2�� */
        unsigned int  reserved : 30; /* bit[2-31]: ���� */
    } reg;
} SOC_SYSNOC_USB_QOSGENERATOR_MODE_UNION;
#endif
#define SOC_SYSNOC_USB_QOSGENERATOR_MODE_mode_START      (0)
#define SOC_SYSNOC_USB_QOSGENERATOR_MODE_mode_END        (1)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_USB_QOSGENERATOR_EXTCONTROL_UNION
 �ṹ˵��  : USB_QOSGENERATOR_EXTCONTROL �Ĵ����ṹ���塣��ַƫ����:0x0618����ֵ:0x00000000�����:32
 �Ĵ���˵��: USB QoS Generator�ⲿ���ƼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  socket_qos_en : 1;  /* bit[0-0] : �������� socket �� QoS ֵ���� QoS Generator �� QoS ֵ */
        unsigned int  ext_thr_en    : 1;  /* bit[1-1] : �ⲿ��ֵ�������Ĵ������õ���ֵ���Ƹߵ����ȼ� */
        unsigned int  int_clk_en    : 1;  /* bit[2-2] : ����ʱ�ӣ�NIUʱ�ӣ�����ο�ʱ�ӽ��д������ */
        unsigned int  reserved      : 29; /* bit[3-31]: ���� */
    } reg;
} SOC_SYSNOC_USB_QOSGENERATOR_EXTCONTROL_UNION;
#endif
#define SOC_SYSNOC_USB_QOSGENERATOR_EXTCONTROL_socket_qos_en_START  (0)
#define SOC_SYSNOC_USB_QOSGENERATOR_EXTCONTROL_socket_qos_en_END    (0)
#define SOC_SYSNOC_USB_QOSGENERATOR_EXTCONTROL_ext_thr_en_START     (1)
#define SOC_SYSNOC_USB_QOSGENERATOR_EXTCONTROL_ext_thr_en_END       (1)
#define SOC_SYSNOC_USB_QOSGENERATOR_EXTCONTROL_int_clk_en_START     (2)
#define SOC_SYSNOC_USB_QOSGENERATOR_EXTCONTROL_int_clk_en_END       (2)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_USB_MMC_ADAPTER_ID_COREID_UNION
 �ṹ˵��  : USB_MMC_ADAPTER_ID_COREID �Ĵ����ṹ���塣��ַƫ����:0x1000����ֵ:0xDAE52F01�����:32
 �Ĵ���˵��: USB_MMC adapter��ID
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  core_type_id   : 8;  /* bit[0-7] : USB_MMC����ͨ·��RateAdapter����ID */
        unsigned int  core_check_sum : 24; /* bit[8-31]: USB_MMC����ͨ·��RateAdapter�Ĳ�������� */
    } reg;
} SOC_SYSNOC_USB_MMC_ADAPTER_ID_COREID_UNION;
#endif
#define SOC_SYSNOC_USB_MMC_ADAPTER_ID_COREID_core_type_id_START    (0)
#define SOC_SYSNOC_USB_MMC_ADAPTER_ID_COREID_core_type_id_END      (7)
#define SOC_SYSNOC_USB_MMC_ADAPTER_ID_COREID_core_check_sum_START  (8)
#define SOC_SYSNOC_USB_MMC_ADAPTER_ID_COREID_core_check_sum_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_USB_MMC_ADAPTER_ID_REVISIONID_UNION
 �ṹ˵��  : USB_MMC_ADAPTER_ID_REVISIONID �Ĵ����ṹ���塣��ַƫ����:0x1004����ֵ:0x012D5300�����:32
 �Ĵ���˵��: ���ߴ���汾�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  user_id    : 8;  /* bit[0-7] : �û��Զ���ֵ������ IP ��ʹ�� */
        unsigned int  flexnoc_id : 24; /* bit[8-31]: ���ߴ���汾�Ĵ��� */
    } reg;
} SOC_SYSNOC_USB_MMC_ADAPTER_ID_REVISIONID_UNION;
#endif
#define SOC_SYSNOC_USB_MMC_ADAPTER_ID_REVISIONID_user_id_START     (0)
#define SOC_SYSNOC_USB_MMC_ADAPTER_ID_REVISIONID_user_id_END       (7)
#define SOC_SYSNOC_USB_MMC_ADAPTER_ID_REVISIONID_flexnoc_id_START  (8)
#define SOC_SYSNOC_USB_MMC_ADAPTER_ID_REVISIONID_flexnoc_id_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_USB_MMC_ADAPTER_RATE_UNION
 �ṹ˵��  : USB_MMC_ADAPTER_RATE �Ĵ����ṹ���塣��ַƫ����:0x1008����ֵ:0x00000000�����:32
 �Ĵ���˵��: USB_MMC Rate Adapter���üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  rate     : 10; /* bit[0-9]  : ����������⣺
                                                    [7��0]��С�����֣�
                                                    [9��8]���������֣�
                                                    ���㹫ʽ��Rate=1/��ratio-1����ratio=outgoing_throughput/incoming_throughput��
                                                    ���磺ratio=2����ôRate=1=0x1.00��ratio=11/3��Rate=3/8=0x0.60�� */
        unsigned int  reserved : 22; /* bit[10-31]: ���� */
    } reg;
} SOC_SYSNOC_USB_MMC_ADAPTER_RATE_UNION;
#endif
#define SOC_SYSNOC_USB_MMC_ADAPTER_RATE_rate_START      (0)
#define SOC_SYSNOC_USB_MMC_ADAPTER_RATE_rate_END        (9)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_USB_MMC_ADAPTER_BYPASS_UNION
 �ṹ˵��  : USB_MMC_ADAPTER_BYPASS �Ĵ����ṹ���塣��ַƫ����:0x100C����ֵ:0x00000000�����:32
 �Ĵ���˵��: bypass USB_MMC Rate Adapter
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  bypass   : 1;  /* bit[0]   : 1��bypass USB_MMC Rate Adapter */
        unsigned int  reserved : 31; /* bit[1-31]: ���� */
    } reg;
} SOC_SYSNOC_USB_MMC_ADAPTER_BYPASS_UNION;
#endif
#define SOC_SYSNOC_USB_MMC_ADAPTER_BYPASS_bypass_START    (0)
#define SOC_SYSNOC_USB_MMC_ADAPTER_BYPASS_bypass_END      (0)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_PACKET_ID_COREID_UNION
 �ṹ˵��  : PACKET_ID_COREID �Ĵ����ṹ���塣��ַƫ����:0x2000����ֵ:0x75524506�����:32
 �Ĵ���˵��: SYSNOC Packet probe��ID
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  id_core_id     : 8;  /* bit[0-7] : SYSNOC��Packet Probe����ID */
        unsigned int  core_check_sum : 24; /* bit[8-31]: SYSNOC��Packet Probe�Ĳ�������� */
    } reg;
} SOC_SYSNOC_PACKET_ID_COREID_UNION;
#endif
#define SOC_SYSNOC_PACKET_ID_COREID_id_core_id_START      (0)
#define SOC_SYSNOC_PACKET_ID_COREID_id_core_id_END        (7)
#define SOC_SYSNOC_PACKET_ID_COREID_core_check_sum_START  (8)
#define SOC_SYSNOC_PACKET_ID_COREID_core_check_sum_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_PACKET_ID_REVISIONID_UNION
 �ṹ˵��  : PACKET_ID_REVISIONID �Ĵ����ṹ���塣��ַƫ����:0x2004����ֵ:0x012D5300�����:32
 �Ĵ���˵��: ���ߴ���汾�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  user_id        : 8;  /* bit[0-7] :  */
        unsigned int  id_revision_id : 24; /* bit[8-31]: ��8bit�Զ��壬��24bit��NOC������HUSHֵ�� */
    } reg;
} SOC_SYSNOC_PACKET_ID_REVISIONID_UNION;
#endif
#define SOC_SYSNOC_PACKET_ID_REVISIONID_user_id_START         (0)
#define SOC_SYSNOC_PACKET_ID_REVISIONID_user_id_END           (7)
#define SOC_SYSNOC_PACKET_ID_REVISIONID_id_revision_id_START  (8)
#define SOC_SYSNOC_PACKET_ID_REVISIONID_id_revision_id_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_PACKET_MAINCTL_UNION
 �ṹ˵��  : PACKET_MAINCTL �Ĵ����ṹ���塣��ַƫ����:0x2008����ֵ:0x00000000�����:32
 �Ĵ���˵��: Packet Probeȫ�ֿ��ƼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  err_en                        : 1;  /* bit[0]   : ErrEn��ʹ��Packet Probe����⵽���κδ���״̬��Packet�ϱ���Observer�����ڱ����ߵ�Packet Probe��֧��trace���ܣ��ʴ�λ������(û�ж���Observer_Packet���� */
        unsigned int  trace_en                      : 1;  /* bit[1]   : TraceEn��ʹ��Packet Probe����⵽��Packet�ϱ���Observer�������߲�֧��Trace���ܣ��ʴ�λ�����塣 */
        unsigned int  payload_en                    : 1;  /* bit[2]   : PayloadEn������Ϊ1ʱ���ϱ���Packet�Ȱ���header���ְ���Payload������Ϊ0ʱ���ϱ���Packetֻ����Header�������߲�֧��Trace���ܣ��ʴ�λ�����塣 */
        unsigned int  stat_en                       : 1;  /* bit[3]   : StatEn��ͳ��ģ��ʹ�ܼĴ�������StatEn��0����Ϊ1ʱ��ͳ�Ƽ����������㣻��StatEn����Ϊ0ʱ��ͳ�Ƽ�������disabled�� */
        unsigned int  alarm_en                      : 1;  /* bit[4]   : AlarmEn���ж�ʹ�����á�
                                                                        0&#45;->�����жϣ�����ź�sysnoc_Packet_Probe_StatAlarmΪ0��
                                                                        1&#45;->ʹ���ж����������ź�sysnoc_Packet_Probe_StatAlarm�� */
        unsigned int  stat_cond_dump                : 1;  /* bit[5]   : 0&#45;->��ʾ������dumpͳ�����ݣ��Ĵ���counters_m_val��ֵ��ʵʱ��ӳͳ�Ƽ�������ֵ��
                                                                        1&#45;->��ʾ������dump���ݣ��ڸ�����ͳ�������ڷ���out of bounds �¼����ŻὫͳ�Ƽ�������ֵdump���Ĵ���counters_m_val�С� */
        unsigned int  intrusive_mode                : 1;  /* bit[6]   : IntrusiveMode����������modeΪSpy���ʴ�λhard_codeΪ0. */
        unsigned int  filt_byte_always_chainable_en : 1;  /* bit[7]   : FiltByteAlwaysChainableEn��������ż������������ʹ�ܵ�ȫ�����ã�
                                                                        0&#45;->��ʹ�ܣ���ʱ�����в�statistic counters�����Ա�Map��
                                                                        1&#45;->ʹ�ܣ�ֻ��ż��statistic counters�ſ��Ա�Map�� */
        unsigned int  reserved                      : 24; /* bit[8-31]: ���� */
    } reg;
} SOC_SYSNOC_PACKET_MAINCTL_UNION;
#endif
#define SOC_SYSNOC_PACKET_MAINCTL_err_en_START                         (0)
#define SOC_SYSNOC_PACKET_MAINCTL_err_en_END                           (0)
#define SOC_SYSNOC_PACKET_MAINCTL_trace_en_START                       (1)
#define SOC_SYSNOC_PACKET_MAINCTL_trace_en_END                         (1)
#define SOC_SYSNOC_PACKET_MAINCTL_payload_en_START                     (2)
#define SOC_SYSNOC_PACKET_MAINCTL_payload_en_END                       (2)
#define SOC_SYSNOC_PACKET_MAINCTL_stat_en_START                        (3)
#define SOC_SYSNOC_PACKET_MAINCTL_stat_en_END                          (3)
#define SOC_SYSNOC_PACKET_MAINCTL_alarm_en_START                       (4)
#define SOC_SYSNOC_PACKET_MAINCTL_alarm_en_END                         (4)
#define SOC_SYSNOC_PACKET_MAINCTL_stat_cond_dump_START                 (5)
#define SOC_SYSNOC_PACKET_MAINCTL_stat_cond_dump_END                   (5)
#define SOC_SYSNOC_PACKET_MAINCTL_intrusive_mode_START                 (6)
#define SOC_SYSNOC_PACKET_MAINCTL_intrusive_mode_END                   (6)
#define SOC_SYSNOC_PACKET_MAINCTL_filt_byte_always_chainable_en_START  (7)
#define SOC_SYSNOC_PACKET_MAINCTL_filt_byte_always_chainable_en_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_PACKET_CFGCTL_UNION
 �ṹ˵��  : PACKET_CFGCTL �Ĵ����ṹ���塣��ַƫ����:0x200C����ֵ:0x00000000�����:32
 �Ĵ���˵��: Packet Probeʹ�ܼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  global_en : 1;  /* bit[0]   : GlobalEn��Packet Probeʹ���źţ�����Ч�� */
        unsigned int  active    : 1;  /* bit[1]   : Active��Packet Probe�Ĺ���״ָ̬ʾ�źš�
                                                    0&#45;->��GlobalEn����Ϊ0�ļ���cycle��Active�����ͣ�
                                                    1&#45;->��GlobalEn����Ϊ1ʱ��Active�����ߣ���ʱ�������Packet Probe�������á� */
        unsigned int  reserved  : 30; /* bit[2-31]: ���� */
    } reg;
} SOC_SYSNOC_PACKET_CFGCTL_UNION;
#endif
#define SOC_SYSNOC_PACKET_CFGCTL_global_en_START  (0)
#define SOC_SYSNOC_PACKET_CFGCTL_global_en_END    (0)
#define SOC_SYSNOC_PACKET_CFGCTL_active_START     (1)
#define SOC_SYSNOC_PACKET_CFGCTL_active_END       (1)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_PACKET_FILTERLUT_UNION
 �ṹ˵��  : PACKET_FILTERLUT �Ĵ����ṹ���塣��ַƫ����:0x2014����ֵ:0x00000000�����:32
 �Ĵ���˵��: �����������ұ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  filter_lut : 16; /* bit[0-15] : ѡ�����������
                                                      0x5&#45;->~F0 ��������ΪF0ȡ����
                                                      0x6&#45;->F1 ^ F0 ��������ΪF1��F0���
                                                      0x8&#45;->F1 &amp; F0 ��������ΪF1��F0���룻
                                                      0xA&#45;->F0 ��������ΪF0��
                                                      0xC&#45;->F1 ��������ΪF1��
                                                      0xE&#45;->F1 | F0 ��������ΪF1��F0��
                                                      0xFFFF&#45;->F3 | F2 | F1 | F0 ��������ΪF3��F2��F1��F0�� */
        unsigned int  reserved   : 16; /* bit[16-31]: ���� */
    } reg;
} SOC_SYSNOC_PACKET_FILTERLUT_UNION;
#endif
#define SOC_SYSNOC_PACKET_FILTERLUT_filter_lut_START  (0)
#define SOC_SYSNOC_PACKET_FILTERLUT_filter_lut_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_PACKET_TRACEALARMEN_UNION
 �ṹ˵��  : PACKET_TRACEALARMEN �Ĵ����ṹ���塣��ַƫ����:0x2018����ֵ:0x00000000�����:32
 �Ĵ���˵��: trace �澯ʹ�ܼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  trace_alarm_en : 5;  /* bit[0-4] : ��֧�� trace ���� */
        unsigned int  reserved       : 27; /* bit[5-31]: ���� */
    } reg;
} SOC_SYSNOC_PACKET_TRACEALARMEN_UNION;
#endif
#define SOC_SYSNOC_PACKET_TRACEALARMEN_trace_alarm_en_START  (0)
#define SOC_SYSNOC_PACKET_TRACEALARMEN_trace_alarm_en_END    (4)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_PACKET_TRACEALARMSTATUS_UNION
 �ṹ˵��  : PACKET_TRACEALARMSTATUS �Ĵ����ṹ���塣��ַƫ����:0x201C����ֵ:0x00000000�����:32
 �Ĵ���˵��: trace �澯״̬�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  trace_alarm_status : 5;  /* bit[0-4] : ��֧�� trace ���� */
        unsigned int  reserved           : 27; /* bit[5-31]: ���� */
    } reg;
} SOC_SYSNOC_PACKET_TRACEALARMSTATUS_UNION;
#endif
#define SOC_SYSNOC_PACKET_TRACEALARMSTATUS_trace_alarm_status_START  (0)
#define SOC_SYSNOC_PACKET_TRACEALARMSTATUS_trace_alarm_status_END    (4)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_PACKET_TRACEALARMCLR_UNION
 �ṹ˵��  : PACKET_TRACEALARMCLR �Ĵ����ṹ���塣��ַƫ����:0x2020����ֵ:0x00000000�����:32
 �Ĵ���˵��: trace �澯����Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  trace_alarm_clr : 5;  /* bit[0-4] : ��֧�� trace ���� */
        unsigned int  reserved        : 27; /* bit[5-31]: ���� */
    } reg;
} SOC_SYSNOC_PACKET_TRACEALARMCLR_UNION;
#endif
#define SOC_SYSNOC_PACKET_TRACEALARMCLR_trace_alarm_clr_START  (0)
#define SOC_SYSNOC_PACKET_TRACEALARMCLR_trace_alarm_clr_END    (4)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_PACKET_STATPERIOD_UNION
 �ṹ˵��  : PACKET_STATPERIOD �Ĵ����ṹ���塣��ַƫ����:0x2024����ֵ:0x00000000�����:32
 �Ĵ���˵��: ͳ���������üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  stat_period : 5;  /* bit[0-4] : �Զ�ͳ��ģʽ�µ�ͳ�����ڣ�ͳ������= N_Cycle = 2^min(23,StatPeriod)�����Ϊ8 mega cycles����СΪ2 cycles��������Ϊ0ʱ���Զ�ͳ��ģʽ���رգ���Ҫ�����ֶ�ģʽ��Ҳ��������StatGo�Ĵ�����ʵ�ִ���ͳ�ơ� */
        unsigned int  reserved    : 27; /* bit[5-31]: ���� */
    } reg;
} SOC_SYSNOC_PACKET_STATPERIOD_UNION;
#endif
#define SOC_SYSNOC_PACKET_STATPERIOD_stat_period_START  (0)
#define SOC_SYSNOC_PACKET_STATPERIOD_stat_period_END    (4)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_PACKET_STATGO_UNION
 �ṹ˵��  : PACKET_STATGO �Ĵ����ṹ���塣��ַƫ����:0x2028����ֵ:0x00000000�����:32
 �Ĵ���˵��: �ֶ�����ͳ�Ƽ�ʱ��ʼʹ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  stat_go  : 1;  /* bit[0]   : ��StatPeriod=0ʱ����globalenΪ1����Ĵ���StatGoд1����Ὣcounter_m_val��ֵ��statalarmmax��statalarmmin��ֵ���бȽϣ����üĴ���ʼ�շ���0�� */
        unsigned int  reserved : 31; /* bit[1-31]: ���� */
    } reg;
} SOC_SYSNOC_PACKET_STATGO_UNION;
#endif
#define SOC_SYSNOC_PACKET_STATGO_stat_go_START   (0)
#define SOC_SYSNOC_PACKET_STATGO_stat_go_END     (0)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_PACKET_STATALARMMIN_UNION
 �ṹ˵��  : PACKET_STATALARMMIN �Ĵ����ṹ���塣��ַƫ����:0x202C����ֵ:0x00000000�����:32
 �Ĵ���˵��: ͳ�Ƽ�����С�澯��ֵ
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  stat_alarm_min : 32; /* bit[0-31]: �����澯�ĵ���ֵ��������һ��ͳ�Ƽ�������ֵС��StatAlarmMin��ֵ���ʹ����澯�Ĵ�����SYSNOC_PACKET_STATALARMSTATU ״̬�Ĵ�����1�� */
    } reg;
} SOC_SYSNOC_PACKET_STATALARMMIN_UNION;
#endif
#define SOC_SYSNOC_PACKET_STATALARMMIN_stat_alarm_min_START  (0)
#define SOC_SYSNOC_PACKET_STATALARMMIN_stat_alarm_min_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_PACKET_STATALARMMAX_UNION
 �ṹ˵��  : PACKET_STATALARMMAX �Ĵ����ṹ���塣��ַƫ����:0x2030����ֵ:0x00000000�����:32
 �Ĵ���˵��: ͳ�Ƽ��������澯��ֵ
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  stat_alarm_max : 32; /* bit[0-31]: �����澯�ĸ���ֵ��������һ��ͳ�Ƽ�������ֵ����StatAlarmMax��ֵ���ʹ����澯�Ĵ�����SYSNOC_PACKET_STATALARMSTATU ״̬�Ĵ�����1�� */
    } reg;
} SOC_SYSNOC_PACKET_STATALARMMAX_UNION;
#endif
#define SOC_SYSNOC_PACKET_STATALARMMAX_stat_alarm_max_START  (0)
#define SOC_SYSNOC_PACKET_STATALARMMAX_stat_alarm_max_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_PACKET_STATALARMSTATUS_UNION
 �ṹ˵��  : PACKET_STATALARMSTATUS �Ĵ����ṹ���塣��ַƫ����:0x2034����ֵ:0x00000000�����:32
 �Ĵ���˵��: ͳ�Ƹ澯״̬�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  stat_alarm_status : 1;  /* bit[0]   : ������һ��ͳ�Ƽ�������ֵ����StatAlarmMax��С��StatAlarmMin����üĴ�����λΪ1�� */
        unsigned int  reserved          : 31; /* bit[1-31]: ���� */
    } reg;
} SOC_SYSNOC_PACKET_STATALARMSTATUS_UNION;
#endif
#define SOC_SYSNOC_PACKET_STATALARMSTATUS_stat_alarm_status_START  (0)
#define SOC_SYSNOC_PACKET_STATALARMSTATUS_stat_alarm_status_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_PACKET_STATALARMCLR_UNION
 �ṹ˵��  : PACKET_STATALARMCLR �Ĵ����ṹ���塣��ַƫ����:0x2038����ֵ:0x00000000�����:32
 �Ĵ���˵��: ͳ�Ƹ澯״̬����Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  stat_alarm_clr : 1;  /* bit[0]   : д1������StatAlarmStatus�Ĵ��������˼Ĵ�����������0�� */
        unsigned int  reserved       : 31; /* bit[1-31]: ���� */
    } reg;
} SOC_SYSNOC_PACKET_STATALARMCLR_UNION;
#endif
#define SOC_SYSNOC_PACKET_STATALARMCLR_stat_alarm_clr_START  (0)
#define SOC_SYSNOC_PACKET_STATALARMCLR_stat_alarm_clr_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_PACKET_STATALARMEN_UNION
 �ṹ˵��  : PACKET_STATALARMEN �Ĵ����ṹ���塣��ַƫ����:0x203C����ֵ:0x00000001�����:32
 �Ĵ���˵��: ͳ�Ƹ澯״̬ʹ�ܼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  stat_alarm_en : 1;  /* bit[0]   : ��0�����θ澯���ж� */
        unsigned int  reserved      : 31; /* bit[1-31]: ���� */
    } reg;
} SOC_SYSNOC_PACKET_STATALARMEN_UNION;
#endif
#define SOC_SYSNOC_PACKET_STATALARMEN_stat_alarm_en_START  (0)
#define SOC_SYSNOC_PACKET_STATALARMEN_stat_alarm_en_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_PACKET_F0_ROUTEIDBASE_UNION
 �ṹ˵��  : PACKET_F0_ROUTEIDBASE �Ĵ����ṹ���塣��ַƫ����:0x2044����ֵ:0x00000000�����:32
 �Ĵ���˵��: F0��RouteId������������
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  filters_0_routeid_base : 18; /* bit[0-17] : ͨ������routeId���Թ���master��slave�ķ���ͨ·�ϵ�Packet��
                                                                  [17:14]&#45;->initiator flow�����ڱ�ʾmaster ID��
                                                                  [13:10]&#45;->target flow�����ڱ�ʾslave ID��
                                                                  [9:7]&#45;->target subrange�����ڱ�ʾͬһ����slave��ͬ��Mapping��ַ��
                                                                  [6:0]&#45;->SeqIds�����ڱ�ʾͬһ������ͨ·�Ĳ�ͬtransaction��ID�����鲻����7bit��Ϊ���������� */
        unsigned int  reserved               : 14; /* bit[18-31]: ���� */
    } reg;
} SOC_SYSNOC_PACKET_F0_ROUTEIDBASE_UNION;
#endif
#define SOC_SYSNOC_PACKET_F0_ROUTEIDBASE_filters_0_routeid_base_START  (0)
#define SOC_SYSNOC_PACKET_F0_ROUTEIDBASE_filters_0_routeid_base_END    (17)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_PACKET_F0_ROUTEIDMASK_UNION
 �ṹ˵��  : PACKET_F0_ROUTEIDMASK �Ĵ����ṹ���塣��ַƫ����:0x2048����ֵ:0x00000000�����:32
 �Ĵ���˵��: F0��RouteId��������Mask����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  filters_0_routeid_mask : 18; /* bit[0-17] : ��RouteIdBase����Mask�� */
        unsigned int  reserved               : 14; /* bit[18-31]: ���� */
    } reg;
} SOC_SYSNOC_PACKET_F0_ROUTEIDMASK_UNION;
#endif
#define SOC_SYSNOC_PACKET_F0_ROUTEIDMASK_filters_0_routeid_mask_START  (0)
#define SOC_SYSNOC_PACKET_F0_ROUTEIDMASK_filters_0_routeid_mask_END    (17)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_PACKET_F0_ADDRBASE_LOW_UNION
 �ṹ˵��  : PACKET_F0_ADDRBASE_LOW �Ĵ����ṹ���塣��ַƫ����:0x204C����ֵ:0x00000000�����:32
 �Ĵ���˵��: F0�ĵ�ַ������������
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  filters_0_addrbase_low : 32; /* bit[0-31]: ��ַ���������Ļ���ַ�� */
    } reg;
} SOC_SYSNOC_PACKET_F0_ADDRBASE_LOW_UNION;
#endif
#define SOC_SYSNOC_PACKET_F0_ADDRBASE_LOW_filters_0_addrbase_low_START  (0)
#define SOC_SYSNOC_PACKET_F0_ADDRBASE_LOW_filters_0_addrbase_low_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_PACKET_F0_WINDOWSIZE_UNION
 �ṹ˵��  : PACKET_F0_WINDOWSIZE �Ĵ����ṹ���塣��ַƫ����:0x2054����ֵ:0x00000000�����:32
 �Ĵ���˵��: F0�ĵ�ַ���˵�Mask��ַ��С����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  filters_0_window_size : 6;  /* bit[0-5] : ��ַ���˵�Mask���ڴ�С��
                                                                ���磺��ַ���˵�Mask���ڴ�СΪ64MB��WidowSize=log2(64MB)=26����ʱ��������filter_0_windowsize=0x1A��
                                                                Address Mask=~��2^max(WindowSize,packet.len)-1��=0xFC000000��packet.lenΪNOC�ڲ���ʾһ��packet����������λ����ֵΪ6~7����
                                                                ��������Ϊ��PacketAddress &amp; AddressMask = AddressBase &amp; AddressMask�� */
        unsigned int  reserved              : 26; /* bit[6-31]: ���� */
    } reg;
} SOC_SYSNOC_PACKET_F0_WINDOWSIZE_UNION;
#endif
#define SOC_SYSNOC_PACKET_F0_WINDOWSIZE_filters_0_window_size_START  (0)
#define SOC_SYSNOC_PACKET_F0_WINDOWSIZE_filters_0_window_size_END    (5)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_PACKET_F0_SECURITYBASE_UNION
 �ṹ˵��  : PACKET_F0_SECURITYBASE �Ĵ����ṹ���塣��ַƫ����:0x2058����ֵ:0x00000000�����:32
 �Ĵ���˵��: F0�İ�ȫ������������
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  filters_0_security_base : 1;  /* bit[0]   : 0&#45;->��ʾ��ȫ����������
                                                                  1&#45;->��ʾ�ǰ�ȫ���������� */
        unsigned int  reserved                : 31; /* bit[1-31]: ���� */
    } reg;
} SOC_SYSNOC_PACKET_F0_SECURITYBASE_UNION;
#endif
#define SOC_SYSNOC_PACKET_F0_SECURITYBASE_filters_0_security_base_START  (0)
#define SOC_SYSNOC_PACKET_F0_SECURITYBASE_filters_0_security_base_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_PACKET_F0_SECURITYMASK_UNION
 �ṹ˵��  : PACKET_F0_SECURITYMASK �Ĵ����ṹ���塣��ַƫ����:0x205C����ֵ:0x00000000�����:32
 �Ĵ���˵��: F0�İ�ȫ����������Mask
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  filters_0_security_mask : 1;  /* bit[0]   : ��ȫ����������packet.Security &amp; SecurityMask = SecurityBase &amp; SecurityMasks��
                                                                  Ҳ����˵��Filters_0_SecurityMask=1ʱ��ȫ��������Filters_0_SecurityBase��Ч�����Թ��˰�ȫ��ǰ�ȫpacket�����򣬲���������ã� */
        unsigned int  reserved                : 31; /* bit[1-31]: ���� */
    } reg;
} SOC_SYSNOC_PACKET_F0_SECURITYMASK_UNION;
#endif
#define SOC_SYSNOC_PACKET_F0_SECURITYMASK_filters_0_security_mask_START  (0)
#define SOC_SYSNOC_PACKET_F0_SECURITYMASK_filters_0_security_mask_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_PACKET_F0_OPCODE_UNION
 �ṹ˵��  : PACKET_F0_OPCODE �Ĵ����ṹ���塣��ַƫ����:0x2060����ֵ:0x00000000�����:32
 �Ĵ���˵��: F0��Opcode������������
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  rd_en    : 1;  /* bit[0]   : 0&#45;->��ѡ��ͳ�ƶ�����packet��
                                                   1&#45;->ѡ��ͳ�ƶ�����packet�� */
        unsigned int  wr_en    : 1;  /* bit[1]   : 0&#45;->��ѡ��ͳ��д����packet��
                                                   1&#45;->ѡ��ͳ��д����packet�� */
        unsigned int  lock_en  : 1;  /* bit[2]   : 0&#45;->��ѡ��ͳ��exclusive transaction��
                                                   1&#45;->ѡ��ͳ��exclusive transaction�� */
        unsigned int  urg_en   : 1;  /* bit[3]   : 0&#45;->��ѡ��ͳ�ƴ���urgency��packet��
                                                   1&#45;->ѡ��ͳ�ƴ���urgency��packet�� */
        unsigned int  reserved : 28; /* bit[4-31]: ���� */
    } reg;
} SOC_SYSNOC_PACKET_F0_OPCODE_UNION;
#endif
#define SOC_SYSNOC_PACKET_F0_OPCODE_rd_en_START     (0)
#define SOC_SYSNOC_PACKET_F0_OPCODE_rd_en_END       (0)
#define SOC_SYSNOC_PACKET_F0_OPCODE_wr_en_START     (1)
#define SOC_SYSNOC_PACKET_F0_OPCODE_wr_en_END       (1)
#define SOC_SYSNOC_PACKET_F0_OPCODE_lock_en_START   (2)
#define SOC_SYSNOC_PACKET_F0_OPCODE_lock_en_END     (2)
#define SOC_SYSNOC_PACKET_F0_OPCODE_urg_en_START    (3)
#define SOC_SYSNOC_PACKET_F0_OPCODE_urg_en_END      (3)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_PACKET_F0_STATUS_UNION
 �ṹ˵��  : PACKET_F0_STATUS �Ĵ����ṹ���塣��ַƫ����:0x2064����ֵ:0x00000000�����:32
 �Ĵ���˵��: F0��packet״̬��������
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  req_en   : 1;  /* bit[0]   : 0&#45;->��ѡ��ͳ��request packet��
                                                   1&#45;->ѡ��ͳ��request packet�� */
        unsigned int  rsp_en   : 1;  /* bit[1]   : 0&#45;->��ѡ��ͳ��response packet��
                                                   1&#45;->ѡ��ͳ��response packet �� FAIL_CONT status packet�� */
        unsigned int  reserved : 30; /* bit[2-31]: ���� */
    } reg;
} SOC_SYSNOC_PACKET_F0_STATUS_UNION;
#endif
#define SOC_SYSNOC_PACKET_F0_STATUS_req_en_START    (0)
#define SOC_SYSNOC_PACKET_F0_STATUS_req_en_END      (0)
#define SOC_SYSNOC_PACKET_F0_STATUS_rsp_en_START    (1)
#define SOC_SYSNOC_PACKET_F0_STATUS_rsp_en_END      (1)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_PACKET_F0_LENGTH_UNION
 �ṹ˵��  : PACKET_F0_LENGTH �Ĵ����ṹ���塣��ַƫ����:0x2068����ֵ:0x00000000�����:32
 �Ĵ���˵��: F0�İ�����������
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  filters_0_length : 4;  /* bit[0-3] : ѡ��ͳ�ư���С�ڵ���2^Filters_0_Length��packet��byteΪ��λ�� */
        unsigned int  reserved         : 28; /* bit[4-31]: ���� */
    } reg;
} SOC_SYSNOC_PACKET_F0_LENGTH_UNION;
#endif
#define SOC_SYSNOC_PACKET_F0_LENGTH_filters_0_length_START  (0)
#define SOC_SYSNOC_PACKET_F0_LENGTH_filters_0_length_END    (3)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_PACKET_F0_URGENCY_UNION
 �ṹ˵��  : PACKET_F0_URGENCY �Ĵ����ṹ���塣��ַƫ����:0x206C����ֵ:0x00000000�����:32
 �Ĵ���˵��: F0��urgency��������
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  filters_0_urgency : 3;  /* bit[0-2] : ѡ��ͳ��urgency ���ڵ���Filters_0_Urgency��packet��Eg.����Ϊ0�����������urgency�ȼ���packet�� */
        unsigned int  reserved          : 29; /* bit[3-31]: ���� */
    } reg;
} SOC_SYSNOC_PACKET_F0_URGENCY_UNION;
#endif
#define SOC_SYSNOC_PACKET_F0_URGENCY_filters_0_urgency_START  (0)
#define SOC_SYSNOC_PACKET_F0_URGENCY_filters_0_urgency_END    (2)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_PACKET_F0_USERBASE_UNION
 �ṹ˵��  : PACKET_F0_USERBASE �Ĵ����ṹ���塣��ַƫ����:0x2070����ֵ:0x00000000�����:32
 �Ĵ���˵��: F0��User��������
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  filters_0_user_base : 5;  /* bit[0-4] : User�źŹ������� */
        unsigned int  reserved            : 27; /* bit[5-31]: ���� */
    } reg;
} SOC_SYSNOC_PACKET_F0_USERBASE_UNION;
#endif
#define SOC_SYSNOC_PACKET_F0_USERBASE_filters_0_user_base_START  (0)
#define SOC_SYSNOC_PACKET_F0_USERBASE_filters_0_user_base_END    (4)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_PACKET_F0_USERMASK_UNION
 �ṹ˵��  : PACKET_F0_USERMASK �Ĵ����ṹ���塣��ַƫ����:0x2074����ֵ:0x00000000�����:32
 �Ĵ���˵��: F0��User��������Mask
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  filters_0_user_mask : 5;  /* bit[0-4] : ��UserBase����Mask��ѡ��UserBase�е����⼸bit User�ź���Ϊ����������
                                                              ����������packet.User &amp; UserMask = UserBase &amp; UserMask�� */
        unsigned int  reserved            : 27; /* bit[5-31]: ���� */
    } reg;
} SOC_SYSNOC_PACKET_F0_USERMASK_UNION;
#endif
#define SOC_SYSNOC_PACKET_F0_USERMASK_filters_0_user_mask_START  (0)
#define SOC_SYSNOC_PACKET_F0_USERMASK_filters_0_user_mask_END    (4)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_PACKET_F1_ROUTEIDBASE_UNION
 �ṹ˵��  : PACKET_F1_ROUTEIDBASE �Ĵ����ṹ���塣��ַƫ����:0x2080����ֵ:0x00000000�����:32
 �Ĵ���˵��: F1��RouteId������������
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  filters_1_routeid_base : 18; /* bit[0-17] : ͨ������routeId���Թ���master��slave�ķ���ͨ·�ϵ�Packet��
                                                                  [17:14]&#45;->initiator flow�����ڱ�ʾmaster ID��
                                                                  [13:10]&#45;->target flow�����ڱ�ʾslave ID��
                                                                  [9:7]&#45;->target subrange�����ڱ�ʾͬһ����slave��ͬ��Mapping��ַ��
                                                                  [6:0]&#45;->SeqIds�����ڱ�ʾͬһ������ͨ·�Ĳ�ͬtransaction��ID�����鲻����7bit��Ϊ���������� */
        unsigned int  reserved               : 14; /* bit[18-31]: ���� */
    } reg;
} SOC_SYSNOC_PACKET_F1_ROUTEIDBASE_UNION;
#endif
#define SOC_SYSNOC_PACKET_F1_ROUTEIDBASE_filters_1_routeid_base_START  (0)
#define SOC_SYSNOC_PACKET_F1_ROUTEIDBASE_filters_1_routeid_base_END    (17)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_PACKET_F1_ROUTEIDMASK_UNION
 �ṹ˵��  : PACKET_F1_ROUTEIDMASK �Ĵ����ṹ���塣��ַƫ����:0x2084����ֵ:0x00000000�����:32
 �Ĵ���˵��: F1��RouteId��������Mask����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  filters_1_routeid_mask : 18; /* bit[0-17] : ��RouteIdBase����Mask�� */
        unsigned int  reserved               : 14; /* bit[18-31]: ���� */
    } reg;
} SOC_SYSNOC_PACKET_F1_ROUTEIDMASK_UNION;
#endif
#define SOC_SYSNOC_PACKET_F1_ROUTEIDMASK_filters_1_routeid_mask_START  (0)
#define SOC_SYSNOC_PACKET_F1_ROUTEIDMASK_filters_1_routeid_mask_END    (17)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_PACKET_F1_ADDRBASE_LOW_UNION
 �ṹ˵��  : PACKET_F1_ADDRBASE_LOW �Ĵ����ṹ���塣��ַƫ����:0x2088����ֵ:0x00000000�����:32
 �Ĵ���˵��: F1�ĵ�ַ������������
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  filters_1_addrbase_low : 32; /* bit[0-31]: ��ַ������������ʵ��ַ�� */
    } reg;
} SOC_SYSNOC_PACKET_F1_ADDRBASE_LOW_UNION;
#endif
#define SOC_SYSNOC_PACKET_F1_ADDRBASE_LOW_filters_1_addrbase_low_START  (0)
#define SOC_SYSNOC_PACKET_F1_ADDRBASE_LOW_filters_1_addrbase_low_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_PACKET_F1_WINDOWSIZE_UNION
 �ṹ˵��  : PACKET_F1_WINDOWSIZE �Ĵ����ṹ���塣��ַƫ����:0x2090����ֵ:0x00000000�����:32
 �Ĵ���˵��: F1�ĵ�ַ���˵�Mask��ַ��С����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  filters_1_window_size : 6;  /* bit[0-5] : ��ַ���˵�Mask���ڴ�С��
                                                                ���磺��ַ���˵�Mask���ڴ�СΪ64MB��WidowSize=log2(64MB)=26����ʱ��������filter_0_windowsize=0x1A��
                                                                Address Mask=~��2^max(WindowSize,packet.len)-1��=0xFC000000��packet.lenΪNOC�ڲ���ʾһ��packet����������λ����ֵΪ6~7����
                                                                ��������Ϊ��PacketAddress &amp; AddressMask = AddressBase &amp; AddressMask�� */
        unsigned int  reserved              : 26; /* bit[6-31]: ���� */
    } reg;
} SOC_SYSNOC_PACKET_F1_WINDOWSIZE_UNION;
#endif
#define SOC_SYSNOC_PACKET_F1_WINDOWSIZE_filters_1_window_size_START  (0)
#define SOC_SYSNOC_PACKET_F1_WINDOWSIZE_filters_1_window_size_END    (5)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_PACKET_F1_SECURITYBASE_UNION
 �ṹ˵��  : PACKET_F1_SECURITYBASE �Ĵ����ṹ���塣��ַƫ����:0x2094����ֵ:0x00000000�����:32
 �Ĵ���˵��: F1�İ�ȫ������������
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  filters_1_security_base : 1;  /* bit[0]   : 0&#45;->��ʾ��ȫ����������
                                                                  1&#45;->��ʾ�ǰ�ȫ���������� */
        unsigned int  reserved                : 31; /* bit[1-31]: ���� */
    } reg;
} SOC_SYSNOC_PACKET_F1_SECURITYBASE_UNION;
#endif
#define SOC_SYSNOC_PACKET_F1_SECURITYBASE_filters_1_security_base_START  (0)
#define SOC_SYSNOC_PACKET_F1_SECURITYBASE_filters_1_security_base_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_PACKET_F1_SECURITYMASK_UNION
 �ṹ˵��  : PACKET_F1_SECURITYMASK �Ĵ����ṹ���塣��ַƫ����:0x2098����ֵ:0x00000000�����:32
 �Ĵ���˵��: F1�İ�ȫ����������Mask
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  filters_1_security_mask : 1;  /* bit[0]   : ��ȫ����������packet.Security &amp; SecurityMask = SecurityBase &amp; SecurityMasks��
                                                                  Ҳ����˵��Filters_1_SecurityMask=1ʱ��ȫ��������Filters_1_SecurityBase��Ч�����Թ��˰�ȫ��ǰ�ȫpacket�����򣬲���������ã� */
        unsigned int  reserved                : 31; /* bit[1-31]: ���� */
    } reg;
} SOC_SYSNOC_PACKET_F1_SECURITYMASK_UNION;
#endif
#define SOC_SYSNOC_PACKET_F1_SECURITYMASK_filters_1_security_mask_START  (0)
#define SOC_SYSNOC_PACKET_F1_SECURITYMASK_filters_1_security_mask_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_PACKET_F1_OPCODE_UNION
 �ṹ˵��  : PACKET_F1_OPCODE �Ĵ����ṹ���塣��ַƫ����:0x209C����ֵ:0x00000000�����:32
 �Ĵ���˵��: F1��Opcode������������
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  rd_en    : 1;  /* bit[0]   : 0&#45;->��ѡ��ͳ�ƶ�����packet��
                                                   1&#45;->ѡ��ͳ�ƶ�����packet�� */
        unsigned int  wr_en    : 1;  /* bit[1]   : 0&#45;->��ѡ��ͳ��д����packet��
                                                   1&#45;->ѡ��ͳ��д����packet�� */
        unsigned int  lock_en  : 1;  /* bit[2]   : 0&#45;->��ѡ��ͳ��exclusive transaction��
                                                   1&#45;->ѡ��ͳ��exclusive transaction�� */
        unsigned int  urg_en   : 1;  /* bit[3]   : 0&#45;->��ѡ��ͳ�ƴ���urgency��packet��
                                                   1&#45;->ѡ��ͳ�ƴ���urgency��packet�� */
        unsigned int  reserved : 28; /* bit[4-31]: ���� */
    } reg;
} SOC_SYSNOC_PACKET_F1_OPCODE_UNION;
#endif
#define SOC_SYSNOC_PACKET_F1_OPCODE_rd_en_START     (0)
#define SOC_SYSNOC_PACKET_F1_OPCODE_rd_en_END       (0)
#define SOC_SYSNOC_PACKET_F1_OPCODE_wr_en_START     (1)
#define SOC_SYSNOC_PACKET_F1_OPCODE_wr_en_END       (1)
#define SOC_SYSNOC_PACKET_F1_OPCODE_lock_en_START   (2)
#define SOC_SYSNOC_PACKET_F1_OPCODE_lock_en_END     (2)
#define SOC_SYSNOC_PACKET_F1_OPCODE_urg_en_START    (3)
#define SOC_SYSNOC_PACKET_F1_OPCODE_urg_en_END      (3)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_PACKET_F1_STATUS_UNION
 �ṹ˵��  : PACKET_F1_STATUS �Ĵ����ṹ���塣��ַƫ����:0x20A0����ֵ:0x00000000�����:32
 �Ĵ���˵��: F1��packet״̬��������
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  req_en   : 1;  /* bit[0]   : 0&#45;->��ѡ��ͳ��request packet��
                                                   1&#45;->ѡ��ͳ��request packet�� */
        unsigned int  rsp_en   : 1;  /* bit[1]   : 0&#45;->��ѡ��ͳ��response packet��
                                                   1&#45;->ѡ��ͳ��response packet�� */
        unsigned int  reserved : 30; /* bit[2-31]: ���� */
    } reg;
} SOC_SYSNOC_PACKET_F1_STATUS_UNION;
#endif
#define SOC_SYSNOC_PACKET_F1_STATUS_req_en_START    (0)
#define SOC_SYSNOC_PACKET_F1_STATUS_req_en_END      (0)
#define SOC_SYSNOC_PACKET_F1_STATUS_rsp_en_START    (1)
#define SOC_SYSNOC_PACKET_F1_STATUS_rsp_en_END      (1)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_PACKET_F1_LENGTH_UNION
 �ṹ˵��  : PACKET_F1_LENGTH �Ĵ����ṹ���塣��ַƫ����:0x20A4����ֵ:0x00000000�����:32
 �Ĵ���˵��: F1�İ�����������
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  filters_1_length : 4;  /* bit[0-3] : ѡ��ͳ�ư���С�ڵ���2^Filters_0_Length��packet */
        unsigned int  reserved         : 28; /* bit[4-31]: ���� */
    } reg;
} SOC_SYSNOC_PACKET_F1_LENGTH_UNION;
#endif
#define SOC_SYSNOC_PACKET_F1_LENGTH_filters_1_length_START  (0)
#define SOC_SYSNOC_PACKET_F1_LENGTH_filters_1_length_END    (3)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_PACKET_F1_URGENCY_UNION
 �ṹ˵��  : PACKET_F1_URGENCY �Ĵ����ṹ���塣��ַƫ����:0x20A8����ֵ:0x00000000�����:32
 �Ĵ���˵��: F1��urgency��������
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  filters_1_urgency : 3;  /* bit[0-2] : ѡ��ͳ��urgency ���ڵ���Filters_0_Urgency��packet��Eg.����Ϊ0�����������urgency�ȼ���packet�� */
        unsigned int  reserved          : 29; /* bit[3-31]: ���� */
    } reg;
} SOC_SYSNOC_PACKET_F1_URGENCY_UNION;
#endif
#define SOC_SYSNOC_PACKET_F1_URGENCY_filters_1_urgency_START  (0)
#define SOC_SYSNOC_PACKET_F1_URGENCY_filters_1_urgency_END    (2)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_PACKET_F1_USERBASE_UNION
 �ṹ˵��  : PACKET_F1_USERBASE �Ĵ����ṹ���塣��ַƫ����:0x20AC����ֵ:0x00000000�����:32
 �Ĵ���˵��: F1��User��������
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  filters_1_user_base : 5;  /* bit[0-4] : User�źŹ������� */
        unsigned int  reserved            : 27; /* bit[5-31]: ���� */
    } reg;
} SOC_SYSNOC_PACKET_F1_USERBASE_UNION;
#endif
#define SOC_SYSNOC_PACKET_F1_USERBASE_filters_1_user_base_START  (0)
#define SOC_SYSNOC_PACKET_F1_USERBASE_filters_1_user_base_END    (4)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_PACKET_F1_USERMASK_UNION
 �ṹ˵��  : PACKET_F1_USERMASK �Ĵ����ṹ���塣��ַƫ����:0x20B0����ֵ:0x00000000�����:32
 �Ĵ���˵��: F1��User��������Mask
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  filters_1_user_mask : 5;  /* bit[0-4] : ��UserBase����Mask��ѡ��UserBase�е����⼸bit User�ź���Ϊ����������
                                                              ����������packet.User &amp; UserMask = UserBase &amp; UserMask�� */
        unsigned int  reserved            : 27; /* bit[5-31]: ���� */
    } reg;
} SOC_SYSNOC_PACKET_F1_USERMASK_UNION;
#endif
#define SOC_SYSNOC_PACKET_F1_USERMASK_filters_1_user_mask_START  (0)
#define SOC_SYSNOC_PACKET_F1_USERMASK_filters_1_user_mask_END    (4)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_PACKET_F2_ROUTEIDBASE_UNION
 �ṹ˵��  : PACKET_F2_ROUTEIDBASE �Ĵ����ṹ���塣��ַƫ����:0x20BC����ֵ:0x00000000�����:32
 �Ĵ���˵��: F2��RouteId������������
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  filters_2_routeid_base : 18; /* bit[0-17] : ͨ������routeId���Թ���master��slave�ķ���ͨ·�ϵ�Packet��
                                                                  [17:14]&#45;->initiator flow�����ڱ�ʾmaster ID��
                                                                  [13:10]&#45;->target flow�����ڱ�ʾslave ID��
                                                                  [9:7]&#45;->target subrange�����ڱ�ʾͬһ����slave��ͬ��Mapping��ַ��
                                                                  [6:0]&#45;->SeqIds�����ڱ�ʾͬһ������ͨ·�Ĳ�ͬtransaction��ID�����鲻����7bit��Ϊ���������� */
        unsigned int  reserved               : 14; /* bit[18-31]: ���� */
    } reg;
} SOC_SYSNOC_PACKET_F2_ROUTEIDBASE_UNION;
#endif
#define SOC_SYSNOC_PACKET_F2_ROUTEIDBASE_filters_2_routeid_base_START  (0)
#define SOC_SYSNOC_PACKET_F2_ROUTEIDBASE_filters_2_routeid_base_END    (17)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_PACKET_F2_ROUTEIDMASK_UNION
 �ṹ˵��  : PACKET_F2_ROUTEIDMASK �Ĵ����ṹ���塣��ַƫ����:0x20C0����ֵ:0x00000000�����:32
 �Ĵ���˵��: F2��RouteId��������Mask����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  filters_2_routeid_mask : 18; /* bit[0-17] : ��RouteIdBase����Mask�� */
        unsigned int  reserved               : 14; /* bit[18-31]: ���� */
    } reg;
} SOC_SYSNOC_PACKET_F2_ROUTEIDMASK_UNION;
#endif
#define SOC_SYSNOC_PACKET_F2_ROUTEIDMASK_filters_2_routeid_mask_START  (0)
#define SOC_SYSNOC_PACKET_F2_ROUTEIDMASK_filters_2_routeid_mask_END    (17)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_PACKET_F2_ADDRBASE_LOW_UNION
 �ṹ˵��  : PACKET_F2_ADDRBASE_LOW �Ĵ����ṹ���塣��ַƫ����:0x20C4����ֵ:0x00000000�����:32
 �Ĵ���˵��: F2�ĵ�ַ������������
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  filters_2_addrbase_low : 32; /* bit[0-31]: ��ַ������������ʵ��ַ�� */
    } reg;
} SOC_SYSNOC_PACKET_F2_ADDRBASE_LOW_UNION;
#endif
#define SOC_SYSNOC_PACKET_F2_ADDRBASE_LOW_filters_2_addrbase_low_START  (0)
#define SOC_SYSNOC_PACKET_F2_ADDRBASE_LOW_filters_2_addrbase_low_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_PACKET_F2_WINDOWSIZE_UNION
 �ṹ˵��  : PACKET_F2_WINDOWSIZE �Ĵ����ṹ���塣��ַƫ����:0x20CC����ֵ:0x00000000�����:32
 �Ĵ���˵��: F2�ĵ�ַ���˵�Mask��ַ��С����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  filters_2_window_size : 6;  /* bit[0-5] : ��ַ���˵�Mask���ڴ�С��
                                                                ���磺��ַ���˵�Mask���ڴ�СΪ64MB��WidowSize=log2(64MB)=26����ʱ��������filter_0_windowsize=0x1A��
                                                                Address Mask=~��2^max(WindowSize,packet.len)-1��=0xFC000000��packet.lenΪNOC�ڲ���ʾһ��packet����������λ����ֵΪ6~7����
                                                                ��������Ϊ��PacketAddress &amp; AddressMask = AddressBase &amp; AddressMask�� */
        unsigned int  reserved              : 26; /* bit[6-31]: ���� */
    } reg;
} SOC_SYSNOC_PACKET_F2_WINDOWSIZE_UNION;
#endif
#define SOC_SYSNOC_PACKET_F2_WINDOWSIZE_filters_2_window_size_START  (0)
#define SOC_SYSNOC_PACKET_F2_WINDOWSIZE_filters_2_window_size_END    (5)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_PACKET_F2_SECURITYBASE_UNION
 �ṹ˵��  : PACKET_F2_SECURITYBASE �Ĵ����ṹ���塣��ַƫ����:0x20D0����ֵ:0x00000000�����:32
 �Ĵ���˵��: F2�İ�ȫ������������
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  filters_2_security_base : 1;  /* bit[0]   : 0&#45;->��ʾ��ȫ����������
                                                                  1&#45;->��ʾ�ǰ�ȫ���������� */
        unsigned int  reserved                : 31; /* bit[1-31]: ���� */
    } reg;
} SOC_SYSNOC_PACKET_F2_SECURITYBASE_UNION;
#endif
#define SOC_SYSNOC_PACKET_F2_SECURITYBASE_filters_2_security_base_START  (0)
#define SOC_SYSNOC_PACKET_F2_SECURITYBASE_filters_2_security_base_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_PACKET_F2_SECURITYMASK_UNION
 �ṹ˵��  : PACKET_F2_SECURITYMASK �Ĵ����ṹ���塣��ַƫ����:0x20D4����ֵ:0x00000000�����:32
 �Ĵ���˵��: F2�İ�ȫ����������Mask
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  filters_2_security_mask : 1;  /* bit[0]   : ��ȫ����������packet.Security &amp; SecurityMask = SecurityBase &amp; SecurityMasks��
                                                                  Ҳ����˵��Filters_1_SecurityMask=1ʱ��ȫ��������Filters_1_SecurityBase��Ч�����Թ��˰�ȫ��ǰ�ȫpacket�����򣬲���������ã� */
        unsigned int  reserved                : 31; /* bit[1-31]: ���� */
    } reg;
} SOC_SYSNOC_PACKET_F2_SECURITYMASK_UNION;
#endif
#define SOC_SYSNOC_PACKET_F2_SECURITYMASK_filters_2_security_mask_START  (0)
#define SOC_SYSNOC_PACKET_F2_SECURITYMASK_filters_2_security_mask_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_PACKET_F2_OPCODE_UNION
 �ṹ˵��  : PACKET_F2_OPCODE �Ĵ����ṹ���塣��ַƫ����:0x20D8����ֵ:0x00000000�����:32
 �Ĵ���˵��: F2��Opcode������������
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  rd_en    : 1;  /* bit[0]   : 0&#45;->��ѡ��ͳ�ƶ�����packet��
                                                   1&#45;->ѡ��ͳ�ƶ�����packet�� */
        unsigned int  wr_en    : 1;  /* bit[1]   : 0&#45;->��ѡ��ͳ��д����packet��
                                                   1&#45;->ѡ��ͳ��д����packet�� */
        unsigned int  lock_en  : 1;  /* bit[2]   : 0&#45;->��ѡ��ͳ��exclusive transaction��
                                                   1&#45;->ѡ��ͳ��exclusive transaction�� */
        unsigned int  urg_en   : 1;  /* bit[3]   : 0&#45;->��ѡ��ͳ�ƴ���urgency��packet��
                                                   1&#45;->ѡ��ͳ�ƴ���urgency��packet�� */
        unsigned int  reserved : 28; /* bit[4-31]: ���� */
    } reg;
} SOC_SYSNOC_PACKET_F2_OPCODE_UNION;
#endif
#define SOC_SYSNOC_PACKET_F2_OPCODE_rd_en_START     (0)
#define SOC_SYSNOC_PACKET_F2_OPCODE_rd_en_END       (0)
#define SOC_SYSNOC_PACKET_F2_OPCODE_wr_en_START     (1)
#define SOC_SYSNOC_PACKET_F2_OPCODE_wr_en_END       (1)
#define SOC_SYSNOC_PACKET_F2_OPCODE_lock_en_START   (2)
#define SOC_SYSNOC_PACKET_F2_OPCODE_lock_en_END     (2)
#define SOC_SYSNOC_PACKET_F2_OPCODE_urg_en_START    (3)
#define SOC_SYSNOC_PACKET_F2_OPCODE_urg_en_END      (3)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_PACKET_F2_STATUS_UNION
 �ṹ˵��  : PACKET_F2_STATUS �Ĵ����ṹ���塣��ַƫ����:0x20DC����ֵ:0x00000000�����:32
 �Ĵ���˵��: F2��packet״̬��������
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  req_en   : 1;  /* bit[0]   : 0&#45;->��ѡ��ͳ��request packet��
                                                   1&#45;->ѡ��ͳ��request packet�� */
        unsigned int  rsp_en   : 1;  /* bit[1]   : 0&#45;->��ѡ��ͳ��response packet��
                                                   1&#45;->ѡ��ͳ��response packet�� */
        unsigned int  reserved : 30; /* bit[2-31]: ���� */
    } reg;
} SOC_SYSNOC_PACKET_F2_STATUS_UNION;
#endif
#define SOC_SYSNOC_PACKET_F2_STATUS_req_en_START    (0)
#define SOC_SYSNOC_PACKET_F2_STATUS_req_en_END      (0)
#define SOC_SYSNOC_PACKET_F2_STATUS_rsp_en_START    (1)
#define SOC_SYSNOC_PACKET_F2_STATUS_rsp_en_END      (1)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_PACKET_F2_LENGTH_UNION
 �ṹ˵��  : PACKET_F2_LENGTH �Ĵ����ṹ���塣��ַƫ����:0x20E0����ֵ:0x00000000�����:32
 �Ĵ���˵��: F2�İ�����������
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  filters_2_length : 4;  /* bit[0-3] : ѡ��ͳ�ư���С�ڵ���2^Filters_0_Length��packet */
        unsigned int  reserved         : 28; /* bit[4-31]: ���� */
    } reg;
} SOC_SYSNOC_PACKET_F2_LENGTH_UNION;
#endif
#define SOC_SYSNOC_PACKET_F2_LENGTH_filters_2_length_START  (0)
#define SOC_SYSNOC_PACKET_F2_LENGTH_filters_2_length_END    (3)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_PACKET_F2_URGENCY_UNION
 �ṹ˵��  : PACKET_F2_URGENCY �Ĵ����ṹ���塣��ַƫ����:0x20E4����ֵ:0x00000000�����:32
 �Ĵ���˵��: F2��urgency��������
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  filters_2_urgency : 3;  /* bit[0-2] : ѡ��ͳ��urgency ���ڵ���Filters_0_Urgency��packet��Eg.����Ϊ0�����������urgency�ȼ���packet�� */
        unsigned int  reserved          : 29; /* bit[3-31]: ���� */
    } reg;
} SOC_SYSNOC_PACKET_F2_URGENCY_UNION;
#endif
#define SOC_SYSNOC_PACKET_F2_URGENCY_filters_2_urgency_START  (0)
#define SOC_SYSNOC_PACKET_F2_URGENCY_filters_2_urgency_END    (2)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_PACKET_F2_USERBASE_UNION
 �ṹ˵��  : PACKET_F2_USERBASE �Ĵ����ṹ���塣��ַƫ����:0x20E8����ֵ:0x00000000�����:32
 �Ĵ���˵��: F2��User��������
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  filters_2_user_base : 5;  /* bit[0-4] : User�źŹ������� */
        unsigned int  reserved            : 27; /* bit[5-31]: ���� */
    } reg;
} SOC_SYSNOC_PACKET_F2_USERBASE_UNION;
#endif
#define SOC_SYSNOC_PACKET_F2_USERBASE_filters_2_user_base_START  (0)
#define SOC_SYSNOC_PACKET_F2_USERBASE_filters_2_user_base_END    (4)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_PACKET_F2_USERMASK_UNION
 �ṹ˵��  : PACKET_F2_USERMASK �Ĵ����ṹ���塣��ַƫ����:0x20EC����ֵ:0x00000000�����:32
 �Ĵ���˵��: F2��User��������Mask
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  filters_2_user_mask : 5;  /* bit[0-4] : ��UserBase����Mask��ѡ��UserBase�е����⼸bit User�ź���Ϊ����������
                                                              ����������packet.User &amp; UserMask = UserBase &amp; UserMask�� */
        unsigned int  reserved            : 27; /* bit[5-31]: ���� */
    } reg;
} SOC_SYSNOC_PACKET_F2_USERMASK_UNION;
#endif
#define SOC_SYSNOC_PACKET_F2_USERMASK_filters_2_user_mask_START  (0)
#define SOC_SYSNOC_PACKET_F2_USERMASK_filters_2_user_mask_END    (4)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_PACKET_F3_ROUTEIDBASE_UNION
 �ṹ˵��  : PACKET_F3_ROUTEIDBASE �Ĵ����ṹ���塣��ַƫ����:0x20F8����ֵ:0x00000000�����:32
 �Ĵ���˵��: F3��RouteId������������
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  filters_3_routeid_base : 18; /* bit[0-17] : ͨ������routeId���Թ���master��slave�ķ���ͨ·�ϵ�Packet��
                                                                  [17:14]&#45;->initiator flow�����ڱ�ʾmaster ID��
                                                                  [13:10]&#45;->target flow�����ڱ�ʾslave ID��
                                                                  [9:7]&#45;->target subrange�����ڱ�ʾͬһ����slave��ͬ��Mapping��ַ��
                                                                  [6:0]&#45;->SeqIds�����ڱ�ʾͬһ������ͨ·�Ĳ�ͬtransaction��ID�����鲻����7bit��Ϊ���������� */
        unsigned int  reserved               : 14; /* bit[18-31]: ���� */
    } reg;
} SOC_SYSNOC_PACKET_F3_ROUTEIDBASE_UNION;
#endif
#define SOC_SYSNOC_PACKET_F3_ROUTEIDBASE_filters_3_routeid_base_START  (0)
#define SOC_SYSNOC_PACKET_F3_ROUTEIDBASE_filters_3_routeid_base_END    (17)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_PACKET_F3_ROUTEIDMASK_UNION
 �ṹ˵��  : PACKET_F3_ROUTEIDMASK �Ĵ����ṹ���塣��ַƫ����:0x20FC����ֵ:0x00000000�����:32
 �Ĵ���˵��: F3��RouteId��������Mask����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  filters_3_routeid_mask : 18; /* bit[0-17] : ��RouteIdBase����Mask�� */
        unsigned int  reserved               : 14; /* bit[18-31]: ���� */
    } reg;
} SOC_SYSNOC_PACKET_F3_ROUTEIDMASK_UNION;
#endif
#define SOC_SYSNOC_PACKET_F3_ROUTEIDMASK_filters_3_routeid_mask_START  (0)
#define SOC_SYSNOC_PACKET_F3_ROUTEIDMASK_filters_3_routeid_mask_END    (17)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_PACKET_F3_ADDRBASE_LOW_UNION
 �ṹ˵��  : PACKET_F3_ADDRBASE_LOW �Ĵ����ṹ���塣��ַƫ����:0x2100����ֵ:0x00000000�����:32
 �Ĵ���˵��: F3�ĵ�ַ������������
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  filters_3_addrbase_low : 32; /* bit[0-31]: ��ַ���������Ļ���ַ�� */
    } reg;
} SOC_SYSNOC_PACKET_F3_ADDRBASE_LOW_UNION;
#endif
#define SOC_SYSNOC_PACKET_F3_ADDRBASE_LOW_filters_3_addrbase_low_START  (0)
#define SOC_SYSNOC_PACKET_F3_ADDRBASE_LOW_filters_3_addrbase_low_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_PACKET_F3_WINDOWSIZE_UNION
 �ṹ˵��  : PACKET_F3_WINDOWSIZE �Ĵ����ṹ���塣��ַƫ����:0x2108����ֵ:0x00000000�����:32
 �Ĵ���˵��: F3�ĵ�ַ���˵�Mask��ַ��С����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  filters_3_window_size : 6;  /* bit[0-5] : ��ַ���˵�Mask���ڴ�С��
                                                                ���磺��ַ���˵�Mask���ڴ�СΪ64MB��WidowSize=log2(64MB)=26����ʱ��������filter_0_windowsize=0x1A��
                                                                Address Mask=~��2^max(WindowSize,packet.len)-1��=0xFC000000��packet.lenΪNOC�ڲ���ʾһ��packet����������λ����ֵΪ6~7����
                                                                ��������Ϊ��PacketAddress &amp; AddressMask = AddressBase &amp; AddressMask�� */
        unsigned int  reserved              : 26; /* bit[6-31]: ���� */
    } reg;
} SOC_SYSNOC_PACKET_F3_WINDOWSIZE_UNION;
#endif
#define SOC_SYSNOC_PACKET_F3_WINDOWSIZE_filters_3_window_size_START  (0)
#define SOC_SYSNOC_PACKET_F3_WINDOWSIZE_filters_3_window_size_END    (5)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_PACKET_F3_SECURITYBASE_UNION
 �ṹ˵��  : PACKET_F3_SECURITYBASE �Ĵ����ṹ���塣��ַƫ����:0x210C����ֵ:0x00000000�����:32
 �Ĵ���˵��: F3�İ�ȫ������������
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  filters_3_security_base : 1;  /* bit[0]   : 0&#45;->��ʾ��ȫ����������
                                                                  1&#45;->��ʾ�ǰ�ȫ���������� */
        unsigned int  reserved                : 31; /* bit[1-31]: ���� */
    } reg;
} SOC_SYSNOC_PACKET_F3_SECURITYBASE_UNION;
#endif
#define SOC_SYSNOC_PACKET_F3_SECURITYBASE_filters_3_security_base_START  (0)
#define SOC_SYSNOC_PACKET_F3_SECURITYBASE_filters_3_security_base_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_PACKET_F3_SECURITYMASK_UNION
 �ṹ˵��  : PACKET_F3_SECURITYMASK �Ĵ����ṹ���塣��ַƫ����:0x2110����ֵ:0x00000000�����:32
 �Ĵ���˵��: F3�İ�ȫ����������Mask
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  filters_3_security_mask : 1;  /* bit[0]   : ��ȫ����������packet.Security &amp; SecurityMask = SecurityBase &amp; SecurityMasks��
                                                                  Ҳ����˵��Filters_0_SecurityMask=1ʱ��ȫ��������Filters_0_SecurityBase��Ч�����Թ��˰�ȫ��ǰ�ȫpacket�����򣬲���������ã� */
        unsigned int  reserved                : 31; /* bit[1-31]: ���� */
    } reg;
} SOC_SYSNOC_PACKET_F3_SECURITYMASK_UNION;
#endif
#define SOC_SYSNOC_PACKET_F3_SECURITYMASK_filters_3_security_mask_START  (0)
#define SOC_SYSNOC_PACKET_F3_SECURITYMASK_filters_3_security_mask_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_PACKET_F3_OPCODE_UNION
 �ṹ˵��  : PACKET_F3_OPCODE �Ĵ����ṹ���塣��ַƫ����:0x2114����ֵ:0x00000000�����:32
 �Ĵ���˵��: F3��Opcode������������
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  rd_en    : 1;  /* bit[0]   : 0&#45;->��ѡ��ͳ�ƶ�����packet��
                                                   1&#45;->ѡ��ͳ�ƶ�����packet�� */
        unsigned int  wr_en    : 1;  /* bit[1]   : 0&#45;->��ѡ��ͳ��д����packet��
                                                   1&#45;->ѡ��ͳ��д����packet�� */
        unsigned int  lock_en  : 1;  /* bit[2]   : 0&#45;->��ѡ��ͳ��exclusive transaction��
                                                   1&#45;->ѡ��ͳ��exclusive transaction�� */
        unsigned int  urg_en   : 1;  /* bit[3]   : 0&#45;->��ѡ��ͳ�ƴ���urgency��packet��
                                                   1&#45;->ѡ��ͳ�ƴ���urgency��packet�� */
        unsigned int  reserved : 28; /* bit[4-31]: ���� */
    } reg;
} SOC_SYSNOC_PACKET_F3_OPCODE_UNION;
#endif
#define SOC_SYSNOC_PACKET_F3_OPCODE_rd_en_START     (0)
#define SOC_SYSNOC_PACKET_F3_OPCODE_rd_en_END       (0)
#define SOC_SYSNOC_PACKET_F3_OPCODE_wr_en_START     (1)
#define SOC_SYSNOC_PACKET_F3_OPCODE_wr_en_END       (1)
#define SOC_SYSNOC_PACKET_F3_OPCODE_lock_en_START   (2)
#define SOC_SYSNOC_PACKET_F3_OPCODE_lock_en_END     (2)
#define SOC_SYSNOC_PACKET_F3_OPCODE_urg_en_START    (3)
#define SOC_SYSNOC_PACKET_F3_OPCODE_urg_en_END      (3)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_PACKET_F3_STATUS_UNION
 �ṹ˵��  : PACKET_F3_STATUS �Ĵ����ṹ���塣��ַƫ����:0x2118����ֵ:0x00000000�����:32
 �Ĵ���˵��: F3��packet״̬��������
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  req_en   : 1;  /* bit[0]   : 0&#45;->��ѡ��ͳ��request packet��
                                                   1&#45;->ѡ��ͳ��request packet�� */
        unsigned int  rsp_en   : 1;  /* bit[1]   : 0&#45;->��ѡ��ͳ��response packet��
                                                   1&#45;->ѡ��ͳ��response packet�� */
        unsigned int  reserved : 30; /* bit[2-31]: ���� */
    } reg;
} SOC_SYSNOC_PACKET_F3_STATUS_UNION;
#endif
#define SOC_SYSNOC_PACKET_F3_STATUS_req_en_START    (0)
#define SOC_SYSNOC_PACKET_F3_STATUS_req_en_END      (0)
#define SOC_SYSNOC_PACKET_F3_STATUS_rsp_en_START    (1)
#define SOC_SYSNOC_PACKET_F3_STATUS_rsp_en_END      (1)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_PACKET_F3_LENGTH_UNION
 �ṹ˵��  : PACKET_F3_LENGTH �Ĵ����ṹ���塣��ַƫ����:0x211C����ֵ:0x00000000�����:32
 �Ĵ���˵��: F3�İ�����������
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  filters_3_length : 4;  /* bit[0-3] : ѡ��ͳ�ư���С�ڵ���2^Filters_0_Length��packet��byteΪ��λ�� */
        unsigned int  reserved         : 28; /* bit[4-31]: ���� */
    } reg;
} SOC_SYSNOC_PACKET_F3_LENGTH_UNION;
#endif
#define SOC_SYSNOC_PACKET_F3_LENGTH_filters_3_length_START  (0)
#define SOC_SYSNOC_PACKET_F3_LENGTH_filters_3_length_END    (3)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_PACKET_F3_URGENCY_UNION
 �ṹ˵��  : PACKET_F3_URGENCY �Ĵ����ṹ���塣��ַƫ����:0x2120����ֵ:0x00000000�����:32
 �Ĵ���˵��: F3��urgency��������
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  filters_3_urgency : 3;  /* bit[0-2] : ѡ��ͳ��urgency ���ڵ���Filters_0_Urgency��packet��Eg.����Ϊ0�����������urgency�ȼ���packet�� */
        unsigned int  reserved          : 29; /* bit[3-31]: ���� */
    } reg;
} SOC_SYSNOC_PACKET_F3_URGENCY_UNION;
#endif
#define SOC_SYSNOC_PACKET_F3_URGENCY_filters_3_urgency_START  (0)
#define SOC_SYSNOC_PACKET_F3_URGENCY_filters_3_urgency_END    (2)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_PACKET_F3_USERBASE_UNION
 �ṹ˵��  : PACKET_F3_USERBASE �Ĵ����ṹ���塣��ַƫ����:0x2124����ֵ:0x00000000�����:32
 �Ĵ���˵��: F3��User��������
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  filters_3_user_base : 5;  /* bit[0-4] : User�źŹ������� */
        unsigned int  reserved            : 27; /* bit[5-31]: ���� */
    } reg;
} SOC_SYSNOC_PACKET_F3_USERBASE_UNION;
#endif
#define SOC_SYSNOC_PACKET_F3_USERBASE_filters_3_user_base_START  (0)
#define SOC_SYSNOC_PACKET_F3_USERBASE_filters_3_user_base_END    (4)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_PACKET_F3_USERMASK_UNION
 �ṹ˵��  : PACKET_F3_USERMASK �Ĵ����ṹ���塣��ַƫ����:0x2128����ֵ:0x00000000�����:32
 �Ĵ���˵��: F3��User��������Mask
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  filters_3_user_mask : 5;  /* bit[0-4] : ��UserBase����Mask��ѡ��UserBase�е����⼸bit User�ź���Ϊ����������
                                                              ����������packet.User &amp; UserMask = UserBase &amp; UserMask�� */
        unsigned int  reserved            : 27; /* bit[5-31]: ���� */
    } reg;
} SOC_SYSNOC_PACKET_F3_USERMASK_UNION;
#endif
#define SOC_SYSNOC_PACKET_F3_USERMASK_filters_3_user_mask_START  (0)
#define SOC_SYSNOC_PACKET_F3_USERMASK_filters_3_user_mask_END    (4)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_PACKET_COUNTERS_0_SRC_UNION
 �ṹ˵��  : PACKET_COUNTERS_0_SRC �Ĵ����ṹ���塣��ַƫ����:0x2138����ֵ:0x00000000�����:32
 �Ĵ���˵��: Counter��ͳ�����Ϳ��ƼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  int_event : 5;  /* bit[0-4] : ��CfgCtl�Ĵ����е�Active=0ʱ���üĴ��������ã�����ʱ����������ã�
                                                    0x00&#45;->disabled��������
                                                    0x01&#45;->Clock cycles��
                                                    0x02&#45;->IDLE cycles��
                                                    0x03&#45;->Transfer cycles��
                                                    0x04&#45;->Busy cycles��
                                                    0x05&#45;->Wait cycles��
                                                    0x06&#45;->Packets����ͳ�ƣ�
                                                    0x07&#45;->��LUT����ѡ�е�Packet����ͳ�ƣ�
                                                    0x08&#45;->ͳ���ܵ�bytes������
                                                    0x09&#45;->ͳ��Pressure level>0��ʱ�����ڸ�����
                                                    0x0A&#45;->ͳ��Pressure level>1��ʱ�����ڸ�����
                                                    0x0B&#45;->ͳ��Pressure level>2��Press[2]=1����ʱ�����ڸ�����
                                                    0x0C&#45;->��F0��������ѡ�е�Packet������
                                                    0x0D&#45;->��F1��������ѡ�е�Packet������
                                                    0x0E&#45;->��F2��������ѡ�е�Packet������
                                                    0x0F&#45;->��F3��������ѡ�е�Packet������
                                                    0x10&#45;->��counter_2N��counter_2N+1����ͳ�Ƽ��������д�����ֻ�б��Ϊ����ͳ�Ƽ������ɱ���������ֻ�ܽ�����ͳ�Ƽ��������д�����
                                                    0x11&#45;->ͨ��LUT����ͳ��Packet�е���ЧByte������
                                                    0x12&#45;->ͨ��LUT����ͳ��Packet�е�Byte����������ЧByte�������ں�byteenable��д��������
                                                    0x13&#45;->ͨ��filtersx����counters_m_src�е�m������ʱ��filterx��ʾfilter0����counters_m_src�е�m��ż��ʱ��filterx��ʾfilter0������ͳ��Packet�е���ЧByte������
                                                    0x14&#45;->ͨ��filtersx����counters_m_src�е�m������ʱ��filterx��ʾfilter0����counters_m_src�е�m��ż��ʱ��filterx��ʾfilter0������ͳ��Packet�е�Byte����������ЧByte����
                                                    0x15~0x1F&#45;->������
                                                    0x20~0x3F&#45;->������ */
        unsigned int  reserved  : 27; /* bit[5-31]: ���� */
    } reg;
} SOC_SYSNOC_PACKET_COUNTERS_0_SRC_UNION;
#endif
#define SOC_SYSNOC_PACKET_COUNTERS_0_SRC_int_event_START  (0)
#define SOC_SYSNOC_PACKET_COUNTERS_0_SRC_int_event_END    (4)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_PACKET_COUNTERS_0_ALARMMODE_UNION
 �ṹ˵��  : PACKET_COUNTERS_0_ALARMMODE �Ĵ����ṹ���塣��ַƫ����:0x213C����ֵ:0x00000000�����:32
 �Ĵ���˵��: �澯�жϲ������üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  counters_0_alarmmode : 2;  /* bit[0-1] : ��CfgCtl�Ĵ����е�Active=0ʱ���üĴ��������ã�����ʱ����������ã�
                                                               0x0&#45;->OFF���澯ģʽ����disabled��
                                                               0x2&#45;->MIN����statperiod���õ�ͳ�����ڽ�����counter��ֵС��StatAlarmMin�Ĵ�����ֵ����StatAlarmStatusΪ1��
                                                               0x2&#45;->MAX����statperiod���õ�ͳ�����ڽ�����counter��ֵ����StatAlarmMax�Ĵ�����ֵ����StatAlarmStatusΪ1��
                                                               0x3&#45;->MIN_MAX����statperiod���õ�ͳ�����ڽ�����counter��ֵС��StatAlarmMin�Ĵ�����ֵ�����StatAlarmMax�Ĵ�����ֵ����StatAlarmStatusΪ1�� */
        unsigned int  reserved             : 30; /* bit[2-31]: ���� */
    } reg;
} SOC_SYSNOC_PACKET_COUNTERS_0_ALARMMODE_UNION;
#endif
#define SOC_SYSNOC_PACKET_COUNTERS_0_ALARMMODE_counters_0_alarmmode_START  (0)
#define SOC_SYSNOC_PACKET_COUNTERS_0_ALARMMODE_counters_0_alarmmode_END    (1)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_PACKET_COUNTERS_0_VAL_UNION
 �ṹ˵��  : PACKET_COUNTERS_0_VAL �Ĵ����ṹ���塣��ַƫ����:0x2140����ֵ:0x00000000�����:32
 �Ĵ���˵��: ͳ�Ƽ�������ͳ��ֵ
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  counters_0_val : 16; /* bit[0-15] : ��Counters_0_Val�ﵽ���֮�󣬻ᱣ�ֲ���ֱ����clear���������������⣩�� */
        unsigned int  reserved       : 16; /* bit[16-31]: ���� */
    } reg;
} SOC_SYSNOC_PACKET_COUNTERS_0_VAL_UNION;
#endif
#define SOC_SYSNOC_PACKET_COUNTERS_0_VAL_counters_0_val_START  (0)
#define SOC_SYSNOC_PACKET_COUNTERS_0_VAL_counters_0_val_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_PACKET_COUNTERS_1_SRC_UNION
 �ṹ˵��  : PACKET_COUNTERS_1_SRC �Ĵ����ṹ���塣��ַƫ����:0x214C����ֵ:0x00000000�����:32
 �Ĵ���˵��: Counter��ͳ�����Ϳ��ƼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  int_event : 5;  /* bit[0-4] : ��CfgCtl�Ĵ����е�Active=0ʱ���üĴ��������ã�����ʱ����������ã�
                                                    0x00&#45;->disabled��������
                                                    0x01&#45;->Clock cycles��
                                                    0x02&#45;->IDLE cycles��
                                                    0x03&#45;->Transfer cycles��
                                                    0x04&#45;->Busy cycles��
                                                    0x05&#45;->Wait cycles��
                                                    0x06&#45;->Packets����ͳ�ƣ�
                                                    0x07&#45;->��LUT����ѡ�е�Packet����ͳ�ƣ�
                                                    0x08&#45;->ͳ���ܵ�bytes������
                                                    0x09&#45;->ͳ��Pressure level>0��ʱ�����ڸ�����
                                                    0x0A&#45;->ͳ��Pressure level>1��ʱ�����ڸ�����
                                                    0x0B&#45;->ͳ��Pressure level>2��Press[2]=1����ʱ�����ڸ�����
                                                    0x0C&#45;->��F0��������ѡ�е�Packet������
                                                    0x0D&#45;->��F1��������ѡ�е�Packet������
                                                    0x0E&#45;->��F2��������ѡ�е�Packet������
                                                    0x0F&#45;->��F3��������ѡ�е�Packet������
                                                    0x10&#45;->��counter_2N��counter_2N+1����ͳ�Ƽ��������д�����ֻ�б��Ϊ����ͳ�Ƽ������ɱ���������ֻ�ܽ�����ͳ�Ƽ��������д�����
                                                    0x11&#45;->ͨ��LUT����ͳ��Packet�е���ЧByte������
                                                    0x12&#45;->ͨ��LUT����ͳ��Packet�е�Byte����������ЧByte�������ں�byteenable��д��������
                                                    0x13&#45;->ͨ��filtersx����counters_m_src�е�m������ʱ��filterx��ʾfilter0����counters_m_src�е�m��ż��ʱ��filterx��ʾfilter0������ͳ��Packet�е���ЧByte������
                                                    0x14&#45;->ͨ��filtersx����counters_m_src�е�m������ʱ��filterx��ʾfilter0����counters_m_src�е�m��ż��ʱ��filterx��ʾfilter0������ͳ��Packet�е�Byte����������ЧByte����
                                                    0x15~0x1F&#45;->������
                                                    0x20~0x3F&#45;->������ */
        unsigned int  reserved  : 27; /* bit[5-31]: ���� */
    } reg;
} SOC_SYSNOC_PACKET_COUNTERS_1_SRC_UNION;
#endif
#define SOC_SYSNOC_PACKET_COUNTERS_1_SRC_int_event_START  (0)
#define SOC_SYSNOC_PACKET_COUNTERS_1_SRC_int_event_END    (4)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_PACKET_COUNTERS_1_ALARMMODE_UNION
 �ṹ˵��  : PACKET_COUNTERS_1_ALARMMODE �Ĵ����ṹ���塣��ַƫ����:0x2150����ֵ:0x00000000�����:32
 �Ĵ���˵��: �澯�жϲ������üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  counters_1_alarmmode : 2;  /* bit[0-1] : ��CfgCtl�Ĵ����е�Active=0ʱ���üĴ��������ã�����ʱ����������ã�
                                                               0x0&#45;->OFF���澯ģʽ����disabled��
                                                               0x2&#45;->MIN����statperiod���õ�ͳ�����ڽ�����counter��ֵС��StatAlarmMin�Ĵ�����ֵ����StatAlarmStatusΪ1��
                                                               0x2&#45;->MAX����statperiod���õ�ͳ�����ڽ�����counter��ֵ����StatAlarmMax�Ĵ�����ֵ����StatAlarmStatusΪ1��
                                                               0x3&#45;->MIN_MAX����statperiod���õ�ͳ�����ڽ�����counter��ֵС��StatAlarmMin�Ĵ�����ֵ�����StatAlarmMax�Ĵ�����ֵ����StatAlarmStatusΪ1�� */
        unsigned int  reserved             : 30; /* bit[2-31]: ���� */
    } reg;
} SOC_SYSNOC_PACKET_COUNTERS_1_ALARMMODE_UNION;
#endif
#define SOC_SYSNOC_PACKET_COUNTERS_1_ALARMMODE_counters_1_alarmmode_START  (0)
#define SOC_SYSNOC_PACKET_COUNTERS_1_ALARMMODE_counters_1_alarmmode_END    (1)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_PACKET_COUNTERS_1_VAL_UNION
 �ṹ˵��  : PACKET_COUNTERS_1_VAL �Ĵ����ṹ���塣��ַƫ����:0x2154����ֵ:0x00000000�����:32
 �Ĵ���˵��: ͳ�Ƽ�������ͳ��ֵ
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  counters_1_val : 16; /* bit[0-15] : ��Counters_1_Val�ﵽ���֮�󣬻ᱣ�ֲ���ֱ����clear���������������⣩�� */
        unsigned int  reserved       : 16; /* bit[16-31]: ���� */
    } reg;
} SOC_SYSNOC_PACKET_COUNTERS_1_VAL_UNION;
#endif
#define SOC_SYSNOC_PACKET_COUNTERS_1_VAL_counters_1_val_START  (0)
#define SOC_SYSNOC_PACKET_COUNTERS_1_VAL_counters_1_val_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_PACKET_COUNTERS_2_SRC_UNION
 �ṹ˵��  : PACKET_COUNTERS_2_SRC �Ĵ����ṹ���塣��ַƫ����:0x2160����ֵ:0x00000000�����:32
 �Ĵ���˵��: Counter��ͳ�����Ϳ��ƼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  int_event : 5;  /* bit[0-4] : ��CfgCtl�Ĵ����е�Active=0ʱ���üĴ��������ã�����ʱ����������ã�
                                                    0x00&#45;->disabled��������
                                                    0x01&#45;->Clock cycles��
                                                    0x02&#45;->IDLE cycles��
                                                    0x03&#45;->Transfer cycles��
                                                    0x04&#45;->Busy cycles��
                                                    0x05&#45;->Wait cycles��
                                                    0x06&#45;->Packets����ͳ�ƣ�
                                                    0x07&#45;->��LUT����ѡ�е�Packet����ͳ�ƣ�
                                                    0x08&#45;->ͳ���ܵ�bytes������
                                                    0x09&#45;->ͳ��Pressure level>0��ʱ�����ڸ�����
                                                    0x0A&#45;->ͳ��Pressure level>1��ʱ�����ڸ�����
                                                    0x0B&#45;->ͳ��Pressure level>2��Press[2]=1����ʱ�����ڸ�����
                                                    0x0C&#45;->��F0��������ѡ�е�Packet������
                                                    0x0D&#45;->��F1��������ѡ�е�Packet������
                                                    0x0E&#45;->��F2��������ѡ�е�Packet������
                                                    0x0F&#45;->��F3��������ѡ�е�Packet������
                                                    0x10&#45;->��counter_2N��counter_2N+1����ͳ�Ƽ��������д�����ֻ�б��Ϊ����ͳ�Ƽ������ɱ���������ֻ�ܽ�����ͳ�Ƽ��������д�����
                                                    0x11&#45;->ͨ��LUT����ͳ��Packet�е���ЧByte������
                                                    0x12&#45;->ͨ��LUT����ͳ��Packet�е�Byte����������ЧByte�������ں�byteenable��д��������
                                                    0x13&#45;->ͨ��filtersx����counters_m_src�е�m������ʱ��filterx��ʾfilter0����counters_m_src�е�m��ż��ʱ��filterx��ʾfilter0������ͳ��Packet�е���ЧByte������
                                                    0x14&#45;->ͨ��filtersx����counters_m_src�е�m������ʱ��filterx��ʾfilter0����counters_m_src�е�m��ż��ʱ��filterx��ʾfilter0������ͳ��Packet�е�Byte����������ЧByte����
                                                    0x15~0x1F&#45;->������
                                                    0x20~0x3F&#45;->������ */
        unsigned int  reserved  : 27; /* bit[5-31]: ���� */
    } reg;
} SOC_SYSNOC_PACKET_COUNTERS_2_SRC_UNION;
#endif
#define SOC_SYSNOC_PACKET_COUNTERS_2_SRC_int_event_START  (0)
#define SOC_SYSNOC_PACKET_COUNTERS_2_SRC_int_event_END    (4)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_PACKET_COUNTERS_2_ALARMMODE_UNION
 �ṹ˵��  : PACKET_COUNTERS_2_ALARMMODE �Ĵ����ṹ���塣��ַƫ����:0x2164����ֵ:0x00000000�����:32
 �Ĵ���˵��: �澯�жϲ������üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  counters_2_alarmmode : 2;  /* bit[0-1] : ��CfgCtl�Ĵ����е�Active=0ʱ���üĴ��������ã�����ʱ����������ã�
                                                               0x0&#45;->OFF���澯ģʽ����disabled��
                                                               0x2&#45;->MIN����statperiod���õ�ͳ�����ڽ�����counter��ֵС��StatAlarmMin�Ĵ�����ֵ����StatAlarmStatusΪ1��
                                                               0x2&#45;->MAX����statperiod���õ�ͳ�����ڽ�����counter��ֵ����StatAlarmMax�Ĵ�����ֵ����StatAlarmStatusΪ1��
                                                               0x3&#45;->MIN_MAX����statperiod���õ�ͳ�����ڽ�����counter��ֵС��StatAlarmMin�Ĵ�����ֵ�����StatAlarmMax�Ĵ�����ֵ����StatAlarmStatusΪ1�� */
        unsigned int  reserved             : 30; /* bit[2-31]: ���� */
    } reg;
} SOC_SYSNOC_PACKET_COUNTERS_2_ALARMMODE_UNION;
#endif
#define SOC_SYSNOC_PACKET_COUNTERS_2_ALARMMODE_counters_2_alarmmode_START  (0)
#define SOC_SYSNOC_PACKET_COUNTERS_2_ALARMMODE_counters_2_alarmmode_END    (1)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_PACKET_COUNTERS_2_VAL_UNION
 �ṹ˵��  : PACKET_COUNTERS_2_VAL �Ĵ����ṹ���塣��ַƫ����:0x2168����ֵ:0x00000000�����:32
 �Ĵ���˵��: ͳ�Ƽ�������ͳ��ֵ
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  counters_2_val : 16; /* bit[0-15] : ��Counters_2_Val�ﵽ���֮�󣬻ᱣ�ֲ���ֱ����clear���������������⣩�� */
        unsigned int  reserved       : 16; /* bit[16-31]: ���� */
    } reg;
} SOC_SYSNOC_PACKET_COUNTERS_2_VAL_UNION;
#endif
#define SOC_SYSNOC_PACKET_COUNTERS_2_VAL_counters_2_val_START  (0)
#define SOC_SYSNOC_PACKET_COUNTERS_2_VAL_counters_2_val_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_PACKET_COUNTERS_3_SRC_UNION
 �ṹ˵��  : PACKET_COUNTERS_3_SRC �Ĵ����ṹ���塣��ַƫ����:0x2174����ֵ:0x00000000�����:32
 �Ĵ���˵��: Counter��ͳ�����Ϳ��ƼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  int_event : 5;  /* bit[0-4] : ��CfgCtl�Ĵ����е�Active=0ʱ���üĴ��������ã�����ʱ����������ã�
                                                    0x00&#45;->disabled��������
                                                    0x01&#45;->Clock cycles��
                                                    0x02&#45;->IDLE cycles��
                                                    0x03&#45;->Transfer cycles��
                                                    0x04&#45;->Busy cycles��
                                                    0x05&#45;->Wait cycles��
                                                    0x06&#45;->Packets����ͳ�ƣ�
                                                    0x07&#45;->��LUT����ѡ�е�Packet����ͳ�ƣ�
                                                    0x08&#45;->ͳ���ܵ�bytes������
                                                    0x09&#45;->ͳ��Pressure level>0��ʱ�����ڸ�����
                                                    0x0A&#45;->ͳ��Pressure level>1��ʱ�����ڸ�����
                                                    0x0B&#45;->ͳ��Pressure level>2��Press[2]=1����ʱ�����ڸ�����
                                                    0x0C&#45;->��F0��������ѡ�е�Packet������
                                                    0x0D&#45;->��F1��������ѡ�е�Packet������
                                                    0x0E&#45;->��F2��������ѡ�е�Packet������
                                                    0x0F&#45;->��F3��������ѡ�е�Packet������
                                                    0x10&#45;->��counter_2N��counter_2N+1����ͳ�Ƽ��������д�����ֻ�б��Ϊ����ͳ�Ƽ������ɱ���������ֻ�ܽ�����ͳ�Ƽ��������д�����
                                                    0x11&#45;->ͨ��LUT����ͳ��Packet�е���ЧByte������
                                                    0x12&#45;->ͨ��LUT����ͳ��Packet�е�Byte����������ЧByte�������ں�byteenable��д��������
                                                    0x13&#45;->ͨ��filtersx����counters_m_src�е�m������ʱ��filterx��ʾfilter0����counters_m_src�е�m��ż��ʱ��filterx��ʾfilter0������ͳ��Packet�е���ЧByte������
                                                    0x14&#45;->ͨ��filtersx����counters_m_src�е�m������ʱ��filterx��ʾfilter0����counters_m_src�е�m��ż��ʱ��filterx��ʾfilter0������ͳ��Packet�е�Byte����������ЧByte����
                                                    0x15~0x1F&#45;->������
                                                    0x20~0x3F&#45;->������ */
        unsigned int  reserved  : 27; /* bit[5-31]: ���� */
    } reg;
} SOC_SYSNOC_PACKET_COUNTERS_3_SRC_UNION;
#endif
#define SOC_SYSNOC_PACKET_COUNTERS_3_SRC_int_event_START  (0)
#define SOC_SYSNOC_PACKET_COUNTERS_3_SRC_int_event_END    (4)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_PACKET_COUNTERS_3_ALARMMODE_UNION
 �ṹ˵��  : PACKET_COUNTERS_3_ALARMMODE �Ĵ����ṹ���塣��ַƫ����:0x2178����ֵ:0x00000000�����:32
 �Ĵ���˵��: �澯�жϲ������üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  counters_3_alarmmode : 2;  /* bit[0-1] : ��CfgCtl�Ĵ����е�Active=0ʱ���üĴ��������ã�����ʱ����������ã�
                                                               0x0&#45;->OFF���澯ģʽ����disabled��
                                                               0x2&#45;->MIN����statperiod���õ�ͳ�����ڽ�����counter��ֵС��StatAlarmMin�Ĵ�����ֵ����StatAlarmStatusΪ1��
                                                               0x2&#45;->MAX����statperiod���õ�ͳ�����ڽ�����counter��ֵ����StatAlarmMax�Ĵ�����ֵ����StatAlarmStatusΪ1��
                                                               0x3&#45;->MIN_MAX����statperiod���õ�ͳ�����ڽ�����counter��ֵС��StatAlarmMin�Ĵ�����ֵ�����StatAlarmMax�Ĵ�����ֵ����StatAlarmStatusΪ1�� */
        unsigned int  reserved             : 30; /* bit[2-31]: ���� */
    } reg;
} SOC_SYSNOC_PACKET_COUNTERS_3_ALARMMODE_UNION;
#endif
#define SOC_SYSNOC_PACKET_COUNTERS_3_ALARMMODE_counters_3_alarmmode_START  (0)
#define SOC_SYSNOC_PACKET_COUNTERS_3_ALARMMODE_counters_3_alarmmode_END    (1)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_PACKET_COUNTERS_3_VAL_UNION
 �ṹ˵��  : PACKET_COUNTERS_3_VAL �Ĵ����ṹ���塣��ַƫ����:0x217C����ֵ:0x00000000�����:32
 �Ĵ���˵��: ͳ�Ƽ�������ͳ��ֵ
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  counters_3_val : 16; /* bit[0-15] : ��Counters_3_Val�ﵽ���֮�󣬻ᱣ�ֲ���ֱ����clear���������������⣩�� */
        unsigned int  reserved       : 16; /* bit[16-31]: ���� */
    } reg;
} SOC_SYSNOC_PACKET_COUNTERS_3_VAL_UNION;
#endif
#define SOC_SYSNOC_PACKET_COUNTERS_3_VAL_counters_3_val_START  (0)
#define SOC_SYSNOC_PACKET_COUNTERS_3_VAL_counters_3_val_END    (15)




/****************************************************************************
                     (2/3) SERVICE_DMA
 ****************************************************************************/
/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_DMAC_QOSGENERATOR_ID_COREID_UNION
 �ṹ˵��  : DMAC_QOSGENERATOR_ID_COREID �Ĵ����ṹ���塣��ַƫ����:0x0100����ֵ:0xD05BEB04�����:32
 �Ĵ���˵��: DMAC QoS Generator ����ID
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  core_type_id   : 8;  /* bit[0-7] : DMAC QoS Generator ����ID */
        unsigned int  core_check_sum : 24; /* bit[8-31]: DMAC QoS Generator �Ĳ�������� */
    } reg;
} SOC_SYSNOC_DMAC_QOSGENERATOR_ID_COREID_UNION;
#endif
#define SOC_SYSNOC_DMAC_QOSGENERATOR_ID_COREID_core_type_id_START    (0)
#define SOC_SYSNOC_DMAC_QOSGENERATOR_ID_COREID_core_type_id_END      (7)
#define SOC_SYSNOC_DMAC_QOSGENERATOR_ID_COREID_core_check_sum_START  (8)
#define SOC_SYSNOC_DMAC_QOSGENERATOR_ID_COREID_core_check_sum_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_DMAC_QOSGENERATOR_ID_REVISIONID_UNION
 �ṹ˵��  : DMAC_QOSGENERATOR_ID_REVISIONID �Ĵ����ṹ���塣��ַƫ����:0x0104����ֵ:0x012D5300�����:32
 �Ĵ���˵��: DMAC QoS Generator���ߴ���汾�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  user_id    : 8;  /* bit[0-7] : �û��Զ���ֵ������ IP ��ʹ�� */
        unsigned int  flexnoc_id : 24; /* bit[8-31]: ���ߴ���汾�Ĵ��� */
    } reg;
} SOC_SYSNOC_DMAC_QOSGENERATOR_ID_REVISIONID_UNION;
#endif
#define SOC_SYSNOC_DMAC_QOSGENERATOR_ID_REVISIONID_user_id_START     (0)
#define SOC_SYSNOC_DMAC_QOSGENERATOR_ID_REVISIONID_user_id_END       (7)
#define SOC_SYSNOC_DMAC_QOSGENERATOR_ID_REVISIONID_flexnoc_id_START  (8)
#define SOC_SYSNOC_DMAC_QOSGENERATOR_ID_REVISIONID_flexnoc_id_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_DMAC_QOSGENERATOR_PRIORITY_UNION
 �ṹ˵��  : DMAC_QOSGENERATOR_PRIORITY �Ĵ����ṹ���塣��ַƫ����:0x0108����ֵ:0x80000000�����:32
 �Ĵ���˵��: DMAC QoS Generator���ȼ��Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  p0       : 3;  /* bit[0-2]  : �� Regulator ģʽ�������˵� hurry ֵ���� Fixed/limiter ģʽ��������д urgency ֵ */
        unsigned int  reserved_0: 5;  /* bit[3-7]  : ���� */
        unsigned int  p1       : 3;  /* bit[8-10] : �� Regulator ģʽ�������˸� hurry ֵ���� Fixed/limiter ģʽ�������˶� urgency ֵ */
        unsigned int  reserved_1: 20; /* bit[11-30]: ���� */
        unsigned int  mark     : 1;  /* bit[31-31]: �����ݱ�־ */
    } reg;
} SOC_SYSNOC_DMAC_QOSGENERATOR_PRIORITY_UNION;
#endif
#define SOC_SYSNOC_DMAC_QOSGENERATOR_PRIORITY_p0_START        (0)
#define SOC_SYSNOC_DMAC_QOSGENERATOR_PRIORITY_p0_END          (2)
#define SOC_SYSNOC_DMAC_QOSGENERATOR_PRIORITY_p1_START        (8)
#define SOC_SYSNOC_DMAC_QOSGENERATOR_PRIORITY_p1_END          (10)
#define SOC_SYSNOC_DMAC_QOSGENERATOR_PRIORITY_mark_START      (31)
#define SOC_SYSNOC_DMAC_QOSGENERATOR_PRIORITY_mark_END        (31)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_DMAC_QOSGENERATOR_MODE_UNION
 �ṹ˵��  : DMAC_QOSGENERATOR_MODE �Ĵ����ṹ���塣��ַƫ����:0x010C����ֵ:0x00000000�����:32
 �Ĵ���˵��: DMAC QoS Generatorģʽ�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mode     : 2;  /* bit[0-1] : ģʽѡ��0��Fixed��1��Limiter��2��Bypass��3��Regulator���˴�ֻ����Ϊ0��2�� */
        unsigned int  reserved : 30; /* bit[2-31]: ���� */
    } reg;
} SOC_SYSNOC_DMAC_QOSGENERATOR_MODE_UNION;
#endif
#define SOC_SYSNOC_DMAC_QOSGENERATOR_MODE_mode_START      (0)
#define SOC_SYSNOC_DMAC_QOSGENERATOR_MODE_mode_END        (1)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_DMAC_QOSGENERATOR_EXTCONTROL_UNION
 �ṹ˵��  : DMAC_QOSGENERATOR_EXTCONTROL �Ĵ����ṹ���塣��ַƫ����:0x0118����ֵ:0x00000000�����:32
 �Ĵ���˵��: DMAC QoS Generator�ⲿ���ƼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  socket_qos_en : 1;  /* bit[0-0] : �������� socket �� QoS ֵ���� QoS Generator �� QoS ֵ */
        unsigned int  ext_thr_en    : 1;  /* bit[1-1] : �ⲿ��ֵ�������Ĵ������õ���ֵ���Ƹߵ����ȼ� */
        unsigned int  int_clk_en    : 1;  /* bit[2-2] : ����ʱ�ӣ�NIUʱ�ӣ�����ο�ʱ�ӽ��д������ */
        unsigned int  reserved      : 29; /* bit[3-31]: ���� */
    } reg;
} SOC_SYSNOC_DMAC_QOSGENERATOR_EXTCONTROL_UNION;
#endif
#define SOC_SYSNOC_DMAC_QOSGENERATOR_EXTCONTROL_socket_qos_en_START  (0)
#define SOC_SYSNOC_DMAC_QOSGENERATOR_EXTCONTROL_socket_qos_en_END    (0)
#define SOC_SYSNOC_DMAC_QOSGENERATOR_EXTCONTROL_ext_thr_en_START     (1)
#define SOC_SYSNOC_DMAC_QOSGENERATOR_EXTCONTROL_ext_thr_en_END       (1)
#define SOC_SYSNOC_DMAC_QOSGENERATOR_EXTCONTROL_int_clk_en_START     (2)
#define SOC_SYSNOC_DMAC_QOSGENERATOR_EXTCONTROL_int_clk_en_END       (2)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_IPF_QOSGENERATOR_ID_COREID_UNION
 �ṹ˵��  : IPF_QOSGENERATOR_ID_COREID �Ĵ����ṹ���塣��ַƫ����:0x0200����ֵ:0x3FCB4904�����:32
 �Ĵ���˵��: IPF QoS Generator ����ID
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  core_type_id   : 8;  /* bit[0-7] : IPF QoS Generator ����ID */
        unsigned int  core_check_sum : 24; /* bit[8-31]: IPF QoS Generator �Ĳ�������� */
    } reg;
} SOC_SYSNOC_IPF_QOSGENERATOR_ID_COREID_UNION;
#endif
#define SOC_SYSNOC_IPF_QOSGENERATOR_ID_COREID_core_type_id_START    (0)
#define SOC_SYSNOC_IPF_QOSGENERATOR_ID_COREID_core_type_id_END      (7)
#define SOC_SYSNOC_IPF_QOSGENERATOR_ID_COREID_core_check_sum_START  (8)
#define SOC_SYSNOC_IPF_QOSGENERATOR_ID_COREID_core_check_sum_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_IPF_QOSGENERATOR_ID_REVISIONID_UNION
 �ṹ˵��  : IPF_QOSGENERATOR_ID_REVISIONID �Ĵ����ṹ���塣��ַƫ����:0x0204����ֵ:0x012D5300�����:32
 �Ĵ���˵��: IPF QoS Generator���ߴ���汾�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  user_id    : 8;  /* bit[0-7] : �û��Զ���ֵ������ IP ��ʹ�� */
        unsigned int  flexnoc_id : 24; /* bit[8-31]: ���ߴ���汾�Ĵ��� */
    } reg;
} SOC_SYSNOC_IPF_QOSGENERATOR_ID_REVISIONID_UNION;
#endif
#define SOC_SYSNOC_IPF_QOSGENERATOR_ID_REVISIONID_user_id_START     (0)
#define SOC_SYSNOC_IPF_QOSGENERATOR_ID_REVISIONID_user_id_END       (7)
#define SOC_SYSNOC_IPF_QOSGENERATOR_ID_REVISIONID_flexnoc_id_START  (8)
#define SOC_SYSNOC_IPF_QOSGENERATOR_ID_REVISIONID_flexnoc_id_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_IPF_QOSGENERATOR_PRIORITY_UNION
 �ṹ˵��  : IPF_QOSGENERATOR_PRIORITY �Ĵ����ṹ���塣��ַƫ����:0x0208����ֵ:0x80000000�����:32
 �Ĵ���˵��: IPF QoS Generator���ȼ��Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  p0       : 3;  /* bit[0-2]  : �� Regulator ģʽ�������˵� hurry ֵ���� Fixed/limiter ģʽ��������д urgency ֵ */
        unsigned int  reserved_0: 5;  /* bit[3-7]  : ���� */
        unsigned int  p1       : 3;  /* bit[8-10] : �� Regulator ģʽ�������˸� hurry ֵ���� Fixed/limiter ģʽ�������˶� urgency ֵ */
        unsigned int  reserved_1: 20; /* bit[11-30]: ���� */
        unsigned int  mark     : 1;  /* bit[31-31]: �����ݱ�־ */
    } reg;
} SOC_SYSNOC_IPF_QOSGENERATOR_PRIORITY_UNION;
#endif
#define SOC_SYSNOC_IPF_QOSGENERATOR_PRIORITY_p0_START        (0)
#define SOC_SYSNOC_IPF_QOSGENERATOR_PRIORITY_p0_END          (2)
#define SOC_SYSNOC_IPF_QOSGENERATOR_PRIORITY_p1_START        (8)
#define SOC_SYSNOC_IPF_QOSGENERATOR_PRIORITY_p1_END          (10)
#define SOC_SYSNOC_IPF_QOSGENERATOR_PRIORITY_mark_START      (31)
#define SOC_SYSNOC_IPF_QOSGENERATOR_PRIORITY_mark_END        (31)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_IPF_QOSGENERATOR_MODE_UNION
 �ṹ˵��  : IPF_QOSGENERATOR_MODE �Ĵ����ṹ���塣��ַƫ����:0x020C����ֵ:0x00000000�����:32
 �Ĵ���˵��: IPF QoS Generatorģʽ�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mode     : 2;  /* bit[0-1] : ģʽѡ��0��Fixed��1��Limiter��2��Bypass��3��Regulator���˴�ֻ����Ϊ0��2�� */
        unsigned int  reserved : 30; /* bit[2-31]: ���� */
    } reg;
} SOC_SYSNOC_IPF_QOSGENERATOR_MODE_UNION;
#endif
#define SOC_SYSNOC_IPF_QOSGENERATOR_MODE_mode_START      (0)
#define SOC_SYSNOC_IPF_QOSGENERATOR_MODE_mode_END        (1)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_IPF_QOSGENERATOR_EXTCONTROL_UNION
 �ṹ˵��  : IPF_QOSGENERATOR_EXTCONTROL �Ĵ����ṹ���塣��ַƫ����:0x0218����ֵ:0x00000000�����:32
 �Ĵ���˵��: IPF QoS Generator�ⲿ���ƼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  socket_qos_en : 1;  /* bit[0-0] : �������� socket �� QoS ֵ���� QoS Generator �� QoS ֵ */
        unsigned int  ext_thr_en    : 1;  /* bit[1-1] : �ⲿ��ֵ�������Ĵ������õ���ֵ���Ƹߵ����ȼ� */
        unsigned int  int_clk_en    : 1;  /* bit[2-2] : ����ʱ�ӣ�NIUʱ�ӣ�����ο�ʱ�ӽ��д������ */
        unsigned int  reserved      : 29; /* bit[3-31]: ���� */
    } reg;
} SOC_SYSNOC_IPF_QOSGENERATOR_EXTCONTROL_UNION;
#endif
#define SOC_SYSNOC_IPF_QOSGENERATOR_EXTCONTROL_socket_qos_en_START  (0)
#define SOC_SYSNOC_IPF_QOSGENERATOR_EXTCONTROL_socket_qos_en_END    (0)
#define SOC_SYSNOC_IPF_QOSGENERATOR_EXTCONTROL_ext_thr_en_START     (1)
#define SOC_SYSNOC_IPF_QOSGENERATOR_EXTCONTROL_ext_thr_en_END       (1)
#define SOC_SYSNOC_IPF_QOSGENERATOR_EXTCONTROL_int_clk_en_START     (2)
#define SOC_SYSNOC_IPF_QOSGENERATOR_EXTCONTROL_int_clk_en_END       (2)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_SECENG_QOSGENERATOR_ID_COREID_UNION
 �ṹ˵��  : SECENG_QOSGENERATOR_ID_COREID �Ĵ����ṹ���塣��ַƫ����:0x0300����ֵ:0x2CADBA04�����:32
 �Ĵ���˵��: SECENG QoS Generator ����ID
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  core_type_id   : 8;  /* bit[0-7] : SECENG QoS Generator ����ID */
        unsigned int  core_check_sum : 24; /* bit[8-31]: SECENG QoS Generator �Ĳ�������� */
    } reg;
} SOC_SYSNOC_SECENG_QOSGENERATOR_ID_COREID_UNION;
#endif
#define SOC_SYSNOC_SECENG_QOSGENERATOR_ID_COREID_core_type_id_START    (0)
#define SOC_SYSNOC_SECENG_QOSGENERATOR_ID_COREID_core_type_id_END      (7)
#define SOC_SYSNOC_SECENG_QOSGENERATOR_ID_COREID_core_check_sum_START  (8)
#define SOC_SYSNOC_SECENG_QOSGENERATOR_ID_COREID_core_check_sum_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_SECENG_QOSGENERATOR_ID_REVISIONID_UNION
 �ṹ˵��  : SECENG_QOSGENERATOR_ID_REVISIONID �Ĵ����ṹ���塣��ַƫ����:0x0304����ֵ:0x012D5300�����:32
 �Ĵ���˵��: SECENG QoS Generator���ߴ���汾�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  user_id    : 8;  /* bit[0-7] : �û��Զ���ֵ������ IP ��ʹ�� */
        unsigned int  flexnoc_id : 24; /* bit[8-31]: ���ߴ���汾�Ĵ��� */
    } reg;
} SOC_SYSNOC_SECENG_QOSGENERATOR_ID_REVISIONID_UNION;
#endif
#define SOC_SYSNOC_SECENG_QOSGENERATOR_ID_REVISIONID_user_id_START     (0)
#define SOC_SYSNOC_SECENG_QOSGENERATOR_ID_REVISIONID_user_id_END       (7)
#define SOC_SYSNOC_SECENG_QOSGENERATOR_ID_REVISIONID_flexnoc_id_START  (8)
#define SOC_SYSNOC_SECENG_QOSGENERATOR_ID_REVISIONID_flexnoc_id_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_SECENG_QOSGENERATOR_PRIORITY_UNION
 �ṹ˵��  : SECENG_QOSGENERATOR_PRIORITY �Ĵ����ṹ���塣��ַƫ����:0x0308����ֵ:0x80000000�����:32
 �Ĵ���˵��: SECENG QoS Generator���ȼ��Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  p0       : 3;  /* bit[0-2]  : �� Regulator ģʽ�������˵� hurry ֵ���� Fixed/limiter ģʽ��������д urgency ֵ */
        unsigned int  reserved_0: 5;  /* bit[3-7]  : ���� */
        unsigned int  p1       : 3;  /* bit[8-10] : �� Regulator ģʽ�������˸� hurry ֵ���� Fixed/limiter ģʽ�������˶� urgency ֵ */
        unsigned int  reserved_1: 20; /* bit[11-30]: ���� */
        unsigned int  mark     : 1;  /* bit[31-31]: �����ݱ�־ */
    } reg;
} SOC_SYSNOC_SECENG_QOSGENERATOR_PRIORITY_UNION;
#endif
#define SOC_SYSNOC_SECENG_QOSGENERATOR_PRIORITY_p0_START        (0)
#define SOC_SYSNOC_SECENG_QOSGENERATOR_PRIORITY_p0_END          (2)
#define SOC_SYSNOC_SECENG_QOSGENERATOR_PRIORITY_p1_START        (8)
#define SOC_SYSNOC_SECENG_QOSGENERATOR_PRIORITY_p1_END          (10)
#define SOC_SYSNOC_SECENG_QOSGENERATOR_PRIORITY_mark_START      (31)
#define SOC_SYSNOC_SECENG_QOSGENERATOR_PRIORITY_mark_END        (31)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_SECENG_QOSGENERATOR_MODE_UNION
 �ṹ˵��  : SECENG_QOSGENERATOR_MODE �Ĵ����ṹ���塣��ַƫ����:0x030C����ֵ:0x00000000�����:32
 �Ĵ���˵��: SECENG QoS Generatorģʽ�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mode     : 2;  /* bit[0-1] : ģʽѡ��0��Fixed��1��Limiter��2��Bypass��3��Regulator */
        unsigned int  reserved : 30; /* bit[2-31]: ���� */
    } reg;
} SOC_SYSNOC_SECENG_QOSGENERATOR_MODE_UNION;
#endif
#define SOC_SYSNOC_SECENG_QOSGENERATOR_MODE_mode_START      (0)
#define SOC_SYSNOC_SECENG_QOSGENERATOR_MODE_mode_END        (1)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_SECENG_QOSGENERATOR_EXTCONTROL_UNION
 �ṹ˵��  : SECENG_QOSGENERATOR_EXTCONTROL �Ĵ����ṹ���塣��ַƫ����:0x0318����ֵ:0x00000000�����:32
 �Ĵ���˵��: SECENG QoS Generator�ⲿ���ƼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  socket_qos_en : 1;  /* bit[0]   : �������� socket �� QoS ֵ���� QoS Generator �� QoS ֵ */
        unsigned int  ext_thr_en    : 1;  /* bit[1-1] : �ⲿ��ֵ�������Ĵ������õ���ֵ���Ƹߵ����ȼ� */
        unsigned int  int_clk_en    : 1;  /* bit[2-2] : ����ʱ�ӣ�NIUʱ�ӣ�����ο�ʱ�ӽ��д������ */
        unsigned int  reserved      : 29; /* bit[3-31]: ���� */
    } reg;
} SOC_SYSNOC_SECENG_QOSGENERATOR_EXTCONTROL_UNION;
#endif
#define SOC_SYSNOC_SECENG_QOSGENERATOR_EXTCONTROL_socket_qos_en_START  (0)
#define SOC_SYSNOC_SECENG_QOSGENERATOR_EXTCONTROL_socket_qos_en_END    (0)
#define SOC_SYSNOC_SECENG_QOSGENERATOR_EXTCONTROL_ext_thr_en_START     (1)
#define SOC_SYSNOC_SECENG_QOSGENERATOR_EXTCONTROL_ext_thr_en_END       (1)
#define SOC_SYSNOC_SECENG_QOSGENERATOR_EXTCONTROL_int_clk_en_START     (2)
#define SOC_SYSNOC_SECENG_QOSGENERATOR_EXTCONTROL_int_clk_en_END       (2)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_SOCP_QOSGENERATOR_ID_COREID_UNION
 �ṹ˵��  : SOCP_QOSGENERATOR_ID_COREID �Ĵ����ṹ���塣��ַƫ����:0x0400����ֵ:0x43FB5404�����:32
 �Ĵ���˵��: SOCP QoS Generator ����ID
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  core_type_id   : 8;  /* bit[0-7] : SOCP QoS Generator ����ID */
        unsigned int  core_check_sum : 24; /* bit[8-31]: SOCP QoS Generator �Ĳ�������� */
    } reg;
} SOC_SYSNOC_SOCP_QOSGENERATOR_ID_COREID_UNION;
#endif
#define SOC_SYSNOC_SOCP_QOSGENERATOR_ID_COREID_core_type_id_START    (0)
#define SOC_SYSNOC_SOCP_QOSGENERATOR_ID_COREID_core_type_id_END      (7)
#define SOC_SYSNOC_SOCP_QOSGENERATOR_ID_COREID_core_check_sum_START  (8)
#define SOC_SYSNOC_SOCP_QOSGENERATOR_ID_COREID_core_check_sum_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_SOCP_QOSGENERATOR_ID_REVISIONID_UNION
 �ṹ˵��  : SOCP_QOSGENERATOR_ID_REVISIONID �Ĵ����ṹ���塣��ַƫ����:0x0404����ֵ:0x012D5300�����:32
 �Ĵ���˵��: SOCP QoS Generator���ߴ���汾�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  user_id    : 8;  /* bit[0-7] : �û��Զ���ֵ������ IP ��ʹ�� */
        unsigned int  flexnoc_id : 24; /* bit[8-31]: ���ߴ���汾�Ĵ��� */
    } reg;
} SOC_SYSNOC_SOCP_QOSGENERATOR_ID_REVISIONID_UNION;
#endif
#define SOC_SYSNOC_SOCP_QOSGENERATOR_ID_REVISIONID_user_id_START     (0)
#define SOC_SYSNOC_SOCP_QOSGENERATOR_ID_REVISIONID_user_id_END       (7)
#define SOC_SYSNOC_SOCP_QOSGENERATOR_ID_REVISIONID_flexnoc_id_START  (8)
#define SOC_SYSNOC_SOCP_QOSGENERATOR_ID_REVISIONID_flexnoc_id_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_SOCP_QOSGENERATOR_PRIORITY_UNION
 �ṹ˵��  : SOCP_QOSGENERATOR_PRIORITY �Ĵ����ṹ���塣��ַƫ����:0x0408����ֵ:0x80000000�����:32
 �Ĵ���˵��: SOCP QoS Generator���ȼ��Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  p0       : 3;  /* bit[0-2]  : �� Regulator ģʽ�������˵� hurry ֵ���� Fixed/limiter ģʽ��������д urgency ֵ */
        unsigned int  reserved_0: 5;  /* bit[3-7]  : ���� */
        unsigned int  p1       : 3;  /* bit[8-10] : �� Regulator ģʽ�������˸� hurry ֵ���� Fixed/limiter ģʽ�������˶� urgency ֵ */
        unsigned int  reserved_1: 20; /* bit[11-30]: ���� */
        unsigned int  mark     : 1;  /* bit[31-31]: �����ݱ�־ */
    } reg;
} SOC_SYSNOC_SOCP_QOSGENERATOR_PRIORITY_UNION;
#endif
#define SOC_SYSNOC_SOCP_QOSGENERATOR_PRIORITY_p0_START        (0)
#define SOC_SYSNOC_SOCP_QOSGENERATOR_PRIORITY_p0_END          (2)
#define SOC_SYSNOC_SOCP_QOSGENERATOR_PRIORITY_p1_START        (8)
#define SOC_SYSNOC_SOCP_QOSGENERATOR_PRIORITY_p1_END          (10)
#define SOC_SYSNOC_SOCP_QOSGENERATOR_PRIORITY_mark_START      (31)
#define SOC_SYSNOC_SOCP_QOSGENERATOR_PRIORITY_mark_END        (31)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_SOCP_QOSGENERATOR_MODE_UNION
 �ṹ˵��  : SOCP_QOSGENERATOR_MODE �Ĵ����ṹ���塣��ַƫ����:0x040C����ֵ:0x00000000�����:32
 �Ĵ���˵��: SOCP QoS Generatorģʽ�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mode     : 2;  /* bit[0-1] : ģʽѡ��0��Fixed��1��Limiter��2��Bypass��3��Regulator���˴�ֻ����Ϊ0��2�� */
        unsigned int  reserved : 30; /* bit[2-31]: ���� */
    } reg;
} SOC_SYSNOC_SOCP_QOSGENERATOR_MODE_UNION;
#endif
#define SOC_SYSNOC_SOCP_QOSGENERATOR_MODE_mode_START      (0)
#define SOC_SYSNOC_SOCP_QOSGENERATOR_MODE_mode_END        (1)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_SOCP_QOSGENERATOR_EXTCONTROL_UNION
 �ṹ˵��  : SOCP_QOSGENERATOR_EXTCONTROL �Ĵ����ṹ���塣��ַƫ����:0x0418����ֵ:0x00000000�����:32
 �Ĵ���˵��: SOCP QoS Generator�ⲿ���ƼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  socket_qos_en : 1;  /* bit[0-0] : �������� socket �� QoS ֵ���� QoS Generator �� QoS ֵ */
        unsigned int  ext_thr_en    : 1;  /* bit[1-1] : �ⲿ��ֵ�������Ĵ������õ���ֵ���Ƹߵ����ȼ� */
        unsigned int  int_clk_en    : 1;  /* bit[2-2] : ����ʱ�ӣ�NIUʱ�ӣ�����ο�ʱ�ӽ��д������ */
        unsigned int  reserved      : 29; /* bit[3-31]: ���� */
    } reg;
} SOC_SYSNOC_SOCP_QOSGENERATOR_EXTCONTROL_UNION;
#endif
#define SOC_SYSNOC_SOCP_QOSGENERATOR_EXTCONTROL_socket_qos_en_START  (0)
#define SOC_SYSNOC_SOCP_QOSGENERATOR_EXTCONTROL_socket_qos_en_END    (0)
#define SOC_SYSNOC_SOCP_QOSGENERATOR_EXTCONTROL_ext_thr_en_START     (1)
#define SOC_SYSNOC_SOCP_QOSGENERATOR_EXTCONTROL_ext_thr_en_END       (1)
#define SOC_SYSNOC_SOCP_QOSGENERATOR_EXTCONTROL_int_clk_en_START     (2)
#define SOC_SYSNOC_SOCP_QOSGENERATOR_EXTCONTROL_int_clk_en_END       (2)




/****************************************************************************
                     (3/3) SERVICE_AO
 ****************************************************************************/
/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_MCU_QOSGENERATOR_ID_COREID_UNION
 �ṹ˵��  : MCU_QOSGENERATOR_ID_COREID �Ĵ����ṹ���塣��ַƫ����:0x0100����ֵ:0xAF72AA04�����:32
 �Ĵ���˵��: MCU QoS Generator ����ID
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  core_type_id   : 8;  /* bit[0-7] : MCU QoS Generator ����ID */
        unsigned int  core_check_sum : 24; /* bit[8-31]: MCU QoS Generator �Ĳ�������� */
    } reg;
} SOC_SYSNOC_MCU_QOSGENERATOR_ID_COREID_UNION;
#endif
#define SOC_SYSNOC_MCU_QOSGENERATOR_ID_COREID_core_type_id_START    (0)
#define SOC_SYSNOC_MCU_QOSGENERATOR_ID_COREID_core_type_id_END      (7)
#define SOC_SYSNOC_MCU_QOSGENERATOR_ID_COREID_core_check_sum_START  (8)
#define SOC_SYSNOC_MCU_QOSGENERATOR_ID_COREID_core_check_sum_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_MCU_QOSGENERATOR_ID_REVISIONID_UNION
 �ṹ˵��  : MCU_QOSGENERATOR_ID_REVISIONID �Ĵ����ṹ���塣��ַƫ����:0x0104����ֵ:0x012D5300�����:32
 �Ĵ���˵��: MCU QoS Generator���ߴ���汾�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  user_id    : 8;  /* bit[0-7] : �û��Զ���ֵ������ IP ��ʹ�� */
        unsigned int  flexnoc_id : 24; /* bit[8-31]: ���ߴ���汾�Ĵ��� */
    } reg;
} SOC_SYSNOC_MCU_QOSGENERATOR_ID_REVISIONID_UNION;
#endif
#define SOC_SYSNOC_MCU_QOSGENERATOR_ID_REVISIONID_user_id_START     (0)
#define SOC_SYSNOC_MCU_QOSGENERATOR_ID_REVISIONID_user_id_END       (7)
#define SOC_SYSNOC_MCU_QOSGENERATOR_ID_REVISIONID_flexnoc_id_START  (8)
#define SOC_SYSNOC_MCU_QOSGENERATOR_ID_REVISIONID_flexnoc_id_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_MCU_QOSGENERATOR_PRIORITY_UNION
 �ṹ˵��  : MCU_QOSGENERATOR_PRIORITY �Ĵ����ṹ���塣��ַƫ����:0x0108����ֵ:0x80000000�����:32
 �Ĵ���˵��: MCU QoS Generator���ȼ��Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  p0       : 3;  /* bit[0-2]  : �� Regulator ģʽ�������˵� hurry ֵ���� Fixed/limiter ģʽ��������д urgency ֵ */
        unsigned int  reserved_0: 5;  /* bit[3-7]  : ���� */
        unsigned int  p1       : 3;  /* bit[8-10] : �� Regulator ģʽ�������˸� hurry ֵ���� Fixed/limiter ģʽ�������˶� urgency ֵ */
        unsigned int  reserved_1: 20; /* bit[11-30]: ���� */
        unsigned int  mark     : 1;  /* bit[31-31]: �����ݱ�־��Ϊ0ʱ�� */
    } reg;
} SOC_SYSNOC_MCU_QOSGENERATOR_PRIORITY_UNION;
#endif
#define SOC_SYSNOC_MCU_QOSGENERATOR_PRIORITY_p0_START        (0)
#define SOC_SYSNOC_MCU_QOSGENERATOR_PRIORITY_p0_END          (2)
#define SOC_SYSNOC_MCU_QOSGENERATOR_PRIORITY_p1_START        (8)
#define SOC_SYSNOC_MCU_QOSGENERATOR_PRIORITY_p1_END          (10)
#define SOC_SYSNOC_MCU_QOSGENERATOR_PRIORITY_mark_START      (31)
#define SOC_SYSNOC_MCU_QOSGENERATOR_PRIORITY_mark_END        (31)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_MCU_QOSGENERATOR_MODE_UNION
 �ṹ˵��  : MCU_QOSGENERATOR_MODE �Ĵ����ṹ���塣��ַƫ����:0x010C����ֵ:0x00000000�����:32
 �Ĵ���˵��: MCU QoS Generator ģʽ�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mode     : 2;  /* bit[0-1] : ģʽѡ��0��Fixed��1��Limiter��2��Bypass��3��Regulator */
        unsigned int  reserved : 30; /* bit[2-31]: ���� */
    } reg;
} SOC_SYSNOC_MCU_QOSGENERATOR_MODE_UNION;
#endif
#define SOC_SYSNOC_MCU_QOSGENERATOR_MODE_mode_START      (0)
#define SOC_SYSNOC_MCU_QOSGENERATOR_MODE_mode_END        (1)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_MCU_QOSGENERATOR_BANDWIDTH_UNION
 �ṹ˵��  : MCU_QOSGENERATOR_BANDWIDTH �Ĵ����ṹ���塣��ַƫ����:0x0110����ֵ:0x00000200�����:32
 �Ĵ���˵��: MCU QoS Generator ������ֵ�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  bandwidth : 12; /* bit[0-11] : ������ֵ�����㹫ʽΪ������MB/s)/Ƶ��(MHz)*256���磺����Ϊ 300MB/s��MCU Ƶ��Ϊ 150MHz�������ô˼Ĵ���Ϊ 0X200 */
        unsigned int  reserved  : 20; /* bit[12-31]: ���� */
    } reg;
} SOC_SYSNOC_MCU_QOSGENERATOR_BANDWIDTH_UNION;
#endif
#define SOC_SYSNOC_MCU_QOSGENERATOR_BANDWIDTH_bandwidth_START  (0)
#define SOC_SYSNOC_MCU_QOSGENERATOR_BANDWIDTH_bandwidth_END    (11)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_MCU_QOSGENERATOR_SATURATION_UNION
 �ṹ˵��  : MCU_QOSGENERATOR_SATURATION �Ĵ����ṹ���塣��ַƫ����:0x0114����ֵ:0x00000040�����:32
 �Ĵ���˵��: MCU QoS Generator �������Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  saturation : 10; /* bit[0-9]  : �����������С�����㹫ʽΪ��������ֵ��Byte��/16���磺������СΪ1024 Bytes�������ô˼Ĵ���Ϊ 0X40 */
        unsigned int  reserved   : 22; /* bit[10-31]: ���� */
    } reg;
} SOC_SYSNOC_MCU_QOSGENERATOR_SATURATION_UNION;
#endif
#define SOC_SYSNOC_MCU_QOSGENERATOR_SATURATION_saturation_START  (0)
#define SOC_SYSNOC_MCU_QOSGENERATOR_SATURATION_saturation_END    (9)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_MCU_QOSGENERATOR_EXTCONTROL_UNION
 �ṹ˵��  : MCU_QOSGENERATOR_EXTCONTROL �Ĵ����ṹ���塣��ַƫ����:0x0118����ֵ:0x00000000�����:32
 �Ĵ���˵��: MCU QoS Generator�ⲿ���ƼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  socket_qos_en : 1;  /* bit[0]   : �������� socket �� QoS ֵ���� QoS Generator �� QoS ֵ */
        unsigned int  ext_thr_en    : 1;  /* bit[1-1] : �ⲿ��ֵ�������Ĵ������õ���ֵ���Ƹߵ����ȼ� */
        unsigned int  int_clk_en    : 1;  /* bit[2-2] : ����ʱ�ӣ�NIUʱ�ӣ�����ο�ʱ�ӽ��д������ */
        unsigned int  reserved      : 29; /* bit[3-31]: ���� */
    } reg;
} SOC_SYSNOC_MCU_QOSGENERATOR_EXTCONTROL_UNION;
#endif
#define SOC_SYSNOC_MCU_QOSGENERATOR_EXTCONTROL_socket_qos_en_START  (0)
#define SOC_SYSNOC_MCU_QOSGENERATOR_EXTCONTROL_socket_qos_en_END    (0)
#define SOC_SYSNOC_MCU_QOSGENERATOR_EXTCONTROL_ext_thr_en_START     (1)
#define SOC_SYSNOC_MCU_QOSGENERATOR_EXTCONTROL_ext_thr_en_END       (1)
#define SOC_SYSNOC_MCU_QOSGENERATOR_EXTCONTROL_int_clk_en_START     (2)
#define SOC_SYSNOC_MCU_QOSGENERATOR_EXTCONTROL_int_clk_en_END       (2)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_MODEM_QOSGENERATOR_ID_COREID_UNION
 �ṹ˵��  : MODEM_QOSGENERATOR_ID_COREID �Ĵ����ṹ���塣��ַƫ����:0x0200����ֵ:0xA391AB04�����:32
 �Ĵ���˵��: MODEM QoS Generator ����ID
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  core_type_id   : 8;  /* bit[0-7] : MODEM QoS Generator ����ID */
        unsigned int  core_check_sum : 24; /* bit[8-31]: MODEM QoS Generator �Ĳ�������� */
    } reg;
} SOC_SYSNOC_MODEM_QOSGENERATOR_ID_COREID_UNION;
#endif
#define SOC_SYSNOC_MODEM_QOSGENERATOR_ID_COREID_core_type_id_START    (0)
#define SOC_SYSNOC_MODEM_QOSGENERATOR_ID_COREID_core_type_id_END      (7)
#define SOC_SYSNOC_MODEM_QOSGENERATOR_ID_COREID_core_check_sum_START  (8)
#define SOC_SYSNOC_MODEM_QOSGENERATOR_ID_COREID_core_check_sum_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_MODEM_QOSGENERATOR_ID_REVISIONID_UNION
 �ṹ˵��  : MODEM_QOSGENERATOR_ID_REVISIONID �Ĵ����ṹ���塣��ַƫ����:0x0204����ֵ:0x012D5300�����:32
 �Ĵ���˵��: MODEM QoS Generator���ߴ���汾�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  user_id    : 8;  /* bit[0-7] : �û��Զ���ֵ������ IP ��ʹ�� */
        unsigned int  flexnoc_id : 24; /* bit[8-31]: ���ߴ���汾�Ĵ��� */
    } reg;
} SOC_SYSNOC_MODEM_QOSGENERATOR_ID_REVISIONID_UNION;
#endif
#define SOC_SYSNOC_MODEM_QOSGENERATOR_ID_REVISIONID_user_id_START     (0)
#define SOC_SYSNOC_MODEM_QOSGENERATOR_ID_REVISIONID_user_id_END       (7)
#define SOC_SYSNOC_MODEM_QOSGENERATOR_ID_REVISIONID_flexnoc_id_START  (8)
#define SOC_SYSNOC_MODEM_QOSGENERATOR_ID_REVISIONID_flexnoc_id_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_MODEM_QOSGENERATOR_PRIORITY_UNION
 �ṹ˵��  : MODEM_QOSGENERATOR_PRIORITY �Ĵ����ṹ���塣��ַƫ����:0x0208����ֵ:0x80000000�����:32
 �Ĵ���˵��: MODEM QoS Generator���ȼ��Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  p0       : 3;  /* bit[0-2]  : �� Regulator ģʽ�������˵� hurry ֵ���� Fixed/limiter ģʽ��������д urgency ֵ */
        unsigned int  reserved_0: 5;  /* bit[3-7]  : ���� */
        unsigned int  p1       : 3;  /* bit[8-10] : �� Regulator ģʽ�������˸� hurry ֵ���� Fixed/limiter ģʽ�������˶� urgency ֵ */
        unsigned int  reserved_1: 20; /* bit[11-30]: ���� */
        unsigned int  mark     : 1;  /* bit[31-31]: �����ݱ�־��Ϊ0ʱ�� */
    } reg;
} SOC_SYSNOC_MODEM_QOSGENERATOR_PRIORITY_UNION;
#endif
#define SOC_SYSNOC_MODEM_QOSGENERATOR_PRIORITY_p0_START        (0)
#define SOC_SYSNOC_MODEM_QOSGENERATOR_PRIORITY_p0_END          (2)
#define SOC_SYSNOC_MODEM_QOSGENERATOR_PRIORITY_p1_START        (8)
#define SOC_SYSNOC_MODEM_QOSGENERATOR_PRIORITY_p1_END          (10)
#define SOC_SYSNOC_MODEM_QOSGENERATOR_PRIORITY_mark_START      (31)
#define SOC_SYSNOC_MODEM_QOSGENERATOR_PRIORITY_mark_END        (31)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_MODEM_QOSGENERATOR_MODE_UNION
 �ṹ˵��  : MODEM_QOSGENERATOR_MODE �Ĵ����ṹ���塣��ַƫ����:0x020C����ֵ:0x00000000�����:32
 �Ĵ���˵��: MODEM QoS Generator ģʽ�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mode     : 2;  /* bit[0-1] : ģʽѡ��0��Fixed��1��Limiter��2��Bypass��3��Regulator */
        unsigned int  reserved : 30; /* bit[2-31]: ���� */
    } reg;
} SOC_SYSNOC_MODEM_QOSGENERATOR_MODE_UNION;
#endif
#define SOC_SYSNOC_MODEM_QOSGENERATOR_MODE_mode_START      (0)
#define SOC_SYSNOC_MODEM_QOSGENERATOR_MODE_mode_END        (1)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_MODEM_QOSGENERATOR_BANDWIDTH_UNION
 �ṹ˵��  : MODEM_QOSGENERATOR_BANDWIDTH �Ĵ����ṹ���塣��ַƫ����:0x0210����ֵ:0x000002AA�����:32
 �Ĵ���˵��: MODEM QoS Generator ������ֵ�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  bandwidth : 12; /* bit[0-11] : ������ֵ�����㹫ʽΪ������MB/s)/Ƶ��(MHz)*256���磺����Ϊ 300MB/s��Modem Ƶ��Ϊ 150MHz�������ô˼Ĵ���Ϊ 0X200 */
        unsigned int  reserved  : 20; /* bit[12-31]: ���� */
    } reg;
} SOC_SYSNOC_MODEM_QOSGENERATOR_BANDWIDTH_UNION;
#endif
#define SOC_SYSNOC_MODEM_QOSGENERATOR_BANDWIDTH_bandwidth_START  (0)
#define SOC_SYSNOC_MODEM_QOSGENERATOR_BANDWIDTH_bandwidth_END    (11)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_MODEM_QOSGENERATOR_SATURATION_UNION
 �ṹ˵��  : MODEM_QOSGENERATOR_SATURATION �Ĵ����ṹ���塣��ַƫ����:0x0214����ֵ:0x00000040�����:32
 �Ĵ���˵��: MODEM QoS Generator �������Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  saturation : 10; /* bit[0-9]  : �����������С�����㹫ʽΪ��������ֵ��Byte��/16���磺������СΪ1024 Bytes�������ô˼Ĵ���Ϊ 0X40 */
        unsigned int  reserved   : 22; /* bit[10-31]: ���� */
    } reg;
} SOC_SYSNOC_MODEM_QOSGENERATOR_SATURATION_UNION;
#endif
#define SOC_SYSNOC_MODEM_QOSGENERATOR_SATURATION_saturation_START  (0)
#define SOC_SYSNOC_MODEM_QOSGENERATOR_SATURATION_saturation_END    (9)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_MODEM_QOSGENERATOR_EXTCONTROL_UNION
 �ṹ˵��  : MODEM_QOSGENERATOR_EXTCONTROL �Ĵ����ṹ���塣��ַƫ����:0x0218����ֵ:0x00000000�����:32
 �Ĵ���˵��: MODEM QoS Generator�ⲿ���ƼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  socket_qos_en : 1;  /* bit[0-0] : �������� socket �� QoS ֵ���� QoS Generator �� QoS ֵ */
        unsigned int  ext_thr_en    : 1;  /* bit[1-1] : �ⲿ��ֵ�������Ĵ������õ���ֵ���Ƹߵ����ȼ� */
        unsigned int  int_clk_en    : 1;  /* bit[2-2] : ����ʱ�ӣ�NIUʱ�ӣ�����ο�ʱ�ӽ��д������ */
        unsigned int  reserved      : 29; /* bit[3-31]: ���� */
    } reg;
} SOC_SYSNOC_MODEM_QOSGENERATOR_EXTCONTROL_UNION;
#endif
#define SOC_SYSNOC_MODEM_QOSGENERATOR_EXTCONTROL_socket_qos_en_START  (0)
#define SOC_SYSNOC_MODEM_QOSGENERATOR_EXTCONTROL_socket_qos_en_END    (0)
#define SOC_SYSNOC_MODEM_QOSGENERATOR_EXTCONTROL_ext_thr_en_START     (1)
#define SOC_SYSNOC_MODEM_QOSGENERATOR_EXTCONTROL_ext_thr_en_END       (1)
#define SOC_SYSNOC_MODEM_QOSGENERATOR_EXTCONTROL_int_clk_en_START     (2)
#define SOC_SYSNOC_MODEM_QOSGENERATOR_EXTCONTROL_int_clk_en_END       (2)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_MCU_ADAPTER_ID_COREID_UNION
 �ṹ˵��  : MCU_ADAPTER_ID_COREID �Ĵ����ṹ���塣��ַƫ����:0x1000����ֵ:0xD2732E01�����:32
 �Ĵ���˵��: MCU adapter��ID
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  core_type_id   : 8;  /* bit[0-7] : MCU����ͨ·��RateAdapter����ID */
        unsigned int  core_check_sum : 24; /* bit[8-31]: MCU����ͨ·��RateAdapter�Ĳ�������� */
    } reg;
} SOC_SYSNOC_MCU_ADAPTER_ID_COREID_UNION;
#endif
#define SOC_SYSNOC_MCU_ADAPTER_ID_COREID_core_type_id_START    (0)
#define SOC_SYSNOC_MCU_ADAPTER_ID_COREID_core_type_id_END      (7)
#define SOC_SYSNOC_MCU_ADAPTER_ID_COREID_core_check_sum_START  (8)
#define SOC_SYSNOC_MCU_ADAPTER_ID_COREID_core_check_sum_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_MCU_ADAPTER_ID_REVISIONID_UNION
 �ṹ˵��  : MCU_ADAPTER_ID_REVISIONID �Ĵ����ṹ���塣��ַƫ����:0x1004����ֵ:0x012D5300�����:32
 �Ĵ���˵��: ���ߴ���汾�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  user_id    : 8;  /* bit[0-7] : �û��Զ���ֵ������ IP ��ʹ�� */
        unsigned int  flexnoc_id : 24; /* bit[8-31]: ���ߴ���汾�Ĵ��� */
    } reg;
} SOC_SYSNOC_MCU_ADAPTER_ID_REVISIONID_UNION;
#endif
#define SOC_SYSNOC_MCU_ADAPTER_ID_REVISIONID_user_id_START     (0)
#define SOC_SYSNOC_MCU_ADAPTER_ID_REVISIONID_user_id_END       (7)
#define SOC_SYSNOC_MCU_ADAPTER_ID_REVISIONID_flexnoc_id_START  (8)
#define SOC_SYSNOC_MCU_ADAPTER_ID_REVISIONID_flexnoc_id_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_MCU_ADAPTER_RATE_UNION
 �ṹ˵��  : MCU_ADAPTER_RATE �Ĵ����ṹ���塣��ַƫ����:0x1008����ֵ:0x00000000�����:32
 �Ĵ���˵��: MCU Rate Adapter���üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  rate     : 10; /* bit[0-9]  : ����������⣺
                                                    [7��0]��С�����֣�
                                                    [9��8]���������֣�
                                                    ���㹫ʽ��Rate=1/��ratio-1����ratio=outgoing_throughput/incoming_throughput��
                                                    ���磺ratio=2����ôRate=1=0x1.00��ratio=11/3��Rate=3/8=0x0.60�� */
        unsigned int  reserved : 22; /* bit[10-31]: ���� */
    } reg;
} SOC_SYSNOC_MCU_ADAPTER_RATE_UNION;
#endif
#define SOC_SYSNOC_MCU_ADAPTER_RATE_rate_START      (0)
#define SOC_SYSNOC_MCU_ADAPTER_RATE_rate_END        (9)


/*****************************************************************************
 �ṹ��    : SOC_SYSNOC_MCU_ADAPTER_BYPASS_UNION
 �ṹ˵��  : MCU_ADAPTER_BYPASS �Ĵ����ṹ���塣��ַƫ����:0x100C����ֵ:0x00000000�����:32
 �Ĵ���˵��: bypass MCU Rate Adapter
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  bypass   : 1;  /* bit[0]   : bypass MCU Rate Adapter */
        unsigned int  reserved : 31; /* bit[1-31]: ���� */
    } reg;
} SOC_SYSNOC_MCU_ADAPTER_BYPASS_UNION;
#endif
#define SOC_SYSNOC_MCU_ADAPTER_BYPASS_bypass_START    (0)
#define SOC_SYSNOC_MCU_ADAPTER_BYPASS_bypass_END      (0)






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

#endif /* end of soc_sysnoc_interface.h */
