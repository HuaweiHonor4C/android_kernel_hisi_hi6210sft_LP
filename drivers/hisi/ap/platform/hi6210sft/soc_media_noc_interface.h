

/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/

#ifndef __SOC_MEDIA_NOC__INTERFACE_H__
#define __SOC_MEDIA_NOC__INTERFACE_H__

#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif



/*****************************************************************************
  2 �궨��
*****************************************************************************/

/****************************************************************************
                     (1/2) SERVICE
 ****************************************************************************/
/* �Ĵ���˵����IP ģ���ʶ�Ĵ���
   λ����UNION�ṹ:  SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ID_COREID_UNION */
#define SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ID_COREID_ADDR(base) ((base) + (0x0000))

/* �Ĵ���˵����IP �汾��ʶ�Ĵ���
   λ����UNION�ṹ:  SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ID_REVISIONID_UNION */
#define SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ID_REVISIONID_ADDR(base) ((base) + (0x0004))

/* �Ĵ���˵�������ߴ����ж��ϱ�ʹ�ܼĴ���
   λ����UNION�ṹ:  SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_FAULTEN_UNION */
#define SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_FAULTEN_ADDR(base) ((base) + (0x0008))

/* �Ĵ���˵�������ߴ���״ָ̬ʾ�Ĵ���
   λ����UNION�ṹ:  SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ERRVLD_UNION */
#define SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ERRVLD_ADDR(base) ((base) + (0x000C))

/* �Ĵ���˵�������ߴ����ж�����Ĵ���
   λ����UNION�ṹ:  SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ERRCLR_UNION */
#define SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ERRCLR_ADDR(base) ((base) + (0x0010))

/* �Ĵ���˵�������ߴ�����Ϣ�Ĵ���0
   λ����UNION�ṹ:  SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ERRLOG0_UNION */
#define SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ERRLOG0_ADDR(base) ((base) + (0x0014))

/* �Ĵ���˵�������ߴ�����Ϣ�Ĵ���1
   λ����UNION�ṹ:  SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ERRLOG1_UNION */
#define SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ERRLOG1_ADDR(base) ((base) + (0x0018))

/* �Ĵ���˵�������ߴ�����Ϣ�Ĵ���3
   λ����UNION�ṹ:  SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ERRLOG3_UNION */
#define SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ERRLOG3_ADDR(base) ((base) + (0x0020))

/* �Ĵ���˵�������ߴ�����Ϣ�Ĵ���5
   λ����UNION�ṹ:  SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ERRLOG5_UNION */
#define SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ERRLOG5_ADDR(base) ((base) + (0x0028))

/* �Ĵ���˵�������ߴ�����Ϣ�Ĵ���7
   λ����UNION�ṹ:  SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ERRLOG7_UNION */
#define SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ERRLOG7_ADDR(base) ((base) + (0x0030))

/* �Ĵ���˵����ADE0 QoS Generator ����ID
   λ����UNION�ṹ:  SOC_MEDIA_NOC_ADE0_QOSGENERATOR_ID_COREID_UNION */
#define SOC_MEDIA_NOC_ADE0_QOSGENERATOR_ID_COREID_ADDR(base) ((base) + (0x0100))

/* �Ĵ���˵����ADE0 QoS Generator ���ߴ���汾�Ĵ���
   λ����UNION�ṹ:  SOC_MEDIA_NOC_ADE0_QOSGENERATOR_ID_REVISIONID_UNION */
#define SOC_MEDIA_NOC_ADE0_QOSGENERATOR_ID_REVISIONID_ADDR(base) ((base) + (0x0104))

/* �Ĵ���˵����ADE0 QoS Generator ���ȼ��Ĵ���
   λ����UNION�ṹ:  SOC_MEDIA_NOC_ADE0_QOSGENERATOR_PRIORITY_UNION */
#define SOC_MEDIA_NOC_ADE0_QOSGENERATOR_PRIORITY_ADDR(base) ((base) + (0x0108))

/* �Ĵ���˵����ADE0 QoS Generator ģʽ�Ĵ���
   λ����UNION�ṹ:  SOC_MEDIA_NOC_ADE0_QOSGENERATOR_MODE_UNION */
#define SOC_MEDIA_NOC_ADE0_QOSGENERATOR_MODE_ADDR(base) ((base) + (0x010C))

/* �Ĵ���˵����ADE0 QoS Generator ������ֵ�Ĵ���
   λ����UNION�ṹ:  SOC_MEDIA_NOC_ADE0_QOSGENERATOR_BANDWIDTH_UNION */
#define SOC_MEDIA_NOC_ADE0_QOSGENERATOR_BANDWIDTH_ADDR(base) ((base) + (0x0110))

/* �Ĵ���˵����ADE0 QoS Generator �������Ĵ���
   λ����UNION�ṹ:  SOC_MEDIA_NOC_ADE0_QOSGENERATOR_SATURATION_UNION */
#define SOC_MEDIA_NOC_ADE0_QOSGENERATOR_SATURATION_ADDR(base) ((base) + (0x0114))

/* �Ĵ���˵����ADE0 QoS Generator �ⲿ���ƼĴ���
   λ����UNION�ṹ:  SOC_MEDIA_NOC_ADE0_QOSGENERATOR_EXTCONTROL_UNION */
#define SOC_MEDIA_NOC_ADE0_QOSGENERATOR_EXTCONTROL_ADDR(base) ((base) + (0x0118))

/* �Ĵ���˵����ADE1 QoS Generator ����ID
   λ����UNION�ṹ:  SOC_MEDIA_NOC_ADE1_QOSGENERATOR_ID_COREID_UNION */
#define SOC_MEDIA_NOC_ADE1_QOSGENERATOR_ID_COREID_ADDR(base) ((base) + (0x0200))

/* �Ĵ���˵����ADE1 QoS Generator���ߴ���汾�Ĵ���
   λ����UNION�ṹ:  SOC_MEDIA_NOC_ADE1_QOSGENERATOR_ID_REVISIONID_UNION */
#define SOC_MEDIA_NOC_ADE1_QOSGENERATOR_ID_REVISIONID_ADDR(base) ((base) + (0x0204))

/* �Ĵ���˵����ADE1 QoS Generator���ȼ��Ĵ���
   λ����UNION�ṹ:  SOC_MEDIA_NOC_ADE1_QOSGENERATOR_PRIORITY_UNION */
#define SOC_MEDIA_NOC_ADE1_QOSGENERATOR_PRIORITY_ADDR(base) ((base) + (0x0208))

/* �Ĵ���˵����ADE1 QoS Generator ģʽ�Ĵ���
   λ����UNION�ṹ:  SOC_MEDIA_NOC_ADE1_QOSGENERATOR_MODE_UNION */
#define SOC_MEDIA_NOC_ADE1_QOSGENERATOR_MODE_ADDR(base) ((base) + (0x020C))

/* �Ĵ���˵����ADE1 QoS Generator ������ֵ�Ĵ���
   λ����UNION�ṹ:  SOC_MEDIA_NOC_ADE1_QOSGENERATOR_BANDWIDTH_UNION */
#define SOC_MEDIA_NOC_ADE1_QOSGENERATOR_BANDWIDTH_ADDR(base) ((base) + (0x0210))

/* �Ĵ���˵����ADE1 QoS Generator �������Ĵ���
   λ����UNION�ṹ:  SOC_MEDIA_NOC_ADE1_QOSGENERATOR_SATURATION_UNION */
#define SOC_MEDIA_NOC_ADE1_QOSGENERATOR_SATURATION_ADDR(base) ((base) + (0x0214))

/* �Ĵ���˵����ADE1 QoS Generator�ⲿ���ƼĴ���
   λ����UNION�ṹ:  SOC_MEDIA_NOC_ADE1_QOSGENERATOR_EXTCONTROL_UNION */
#define SOC_MEDIA_NOC_ADE1_QOSGENERATOR_EXTCONTROL_ADDR(base) ((base) + (0x0218))

/* �Ĵ���˵����SMMU adapter��ID
   λ����UNION�ṹ:  SOC_MEDIA_NOC_SMMU_ADAPTER_ID_COREID_UNION */
#define SOC_MEDIA_NOC_SMMU_ADAPTER_ID_COREID_ADDR(base) ((base) + (0x1000))

/* �Ĵ���˵�������ߴ���汾�Ĵ���
   λ����UNION�ṹ:  SOC_MEDIA_NOC_SMMU_ADAPTER_ID_REVISIONID_UNION */
#define SOC_MEDIA_NOC_SMMU_ADAPTER_ID_REVISIONID_ADDR(base) ((base) + (0x1004))

/* �Ĵ���˵����SMMU Rate Adapter���üĴ���
   λ����UNION�ṹ:  SOC_MEDIA_NOC_SMMU_ADAPTER_RATE_UNION */
#define SOC_MEDIA_NOC_SMMU_ADAPTER_RATE_ADDR(base)   ((base) + (0x1008))

/* �Ĵ���˵����bypass SMMU Rate Adapter
   λ����UNION�ṹ:  SOC_MEDIA_NOC_SMMU_ADAPTER_BYPASS_UNION */
#define SOC_MEDIA_NOC_SMMU_ADAPTER_BYPASS_ADDR(base) ((base) + (0x100C))

/* �Ĵ���˵����MEDIA_BUS Packet probe��ID
   λ����UNION�ṹ:  SOC_MEDIA_NOC_MEDIA_BUS_PACKET_ID_COREID_UNION */
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_ID_COREID_ADDR(base) ((base) + (0x2000))

/* �Ĵ���˵�������ߴ���汾�Ĵ���
   λ����UNION�ṹ:  SOC_MEDIA_NOC_MEDIA_BUS_PACKET_ID_REVISIONID_UNION */
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_ID_REVISIONID_ADDR(base) ((base) + (0x2004))

/* �Ĵ���˵����Packet Probeȫ�ֿ��ƼĴ���
   λ����UNION�ṹ:  SOC_MEDIA_NOC_MEDIA_BUS_PACKET_MAINCTL_UNION */
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_MAINCTL_ADDR(base) ((base) + (0x2008))

/* �Ĵ���˵����Packet Probeʹ�ܼĴ���
   λ����UNION�ṹ:  SOC_MEDIA_NOC_MEDIA_BUS_PACKET_CFGCTL_UNION */
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_CFGCTL_ADDR(base) ((base) + (0x200C))

/* �Ĵ���˵������ض˿�ѡ��Ĵ���
   λ����UNION�ṹ:  SOC_MEDIA_NOC_MEDIA_BUS_PACKET_TRACEPORTSEL_UNION */
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_TRACEPORTSEL_ADDR(base) ((base) + (0x2010))

/* �Ĵ���˵���������������ұ�
   λ����UNION�ṹ:  SOC_MEDIA_NOC_MEDIA_BUS_PACKET_FILTERLUT_UNION */
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_FILTERLUT_ADDR(base) ((base) + (0x2014))

/* �Ĵ���˵����trace ʹ�ܼĴ���
   λ����UNION�ṹ:  SOC_MEDIA_NOC_MEDIA_BUS_PACKET_TRACEALARMEN_UNION */
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_TRACEALARMEN_ADDR(base) ((base) + (0x2018))

/* �Ĵ���˵����trace ״̬�Ĵ���
   λ����UNION�ṹ:  SOC_MEDIA_NOC_MEDIA_BUS_PACKET_TRACEALARMSTATUS_UNION */
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_TRACEALARMSTATUS_ADDR(base) ((base) + (0x201C))

/* �Ĵ���˵����trace ����Ĵ���
   λ����UNION�ṹ:  SOC_MEDIA_NOC_MEDIA_BUS_PACKET_TRACEALARMCLR_UNION */
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_TRACEALARMCLR_ADDR(base) ((base) + (0x2020))

/* �Ĵ���˵����ͳ���������üĴ���
   λ����UNION�ṹ:  SOC_MEDIA_NOC_MEDIA_BUS_PACKET_STATPERIOD_UNION */
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_STATPERIOD_ADDR(base) ((base) + (0x2024))

/* �Ĵ���˵�����ֶ�����ͳ�Ƽ�ʱ��ʼʹ��
   λ����UNION�ṹ:  SOC_MEDIA_NOC_MEDIA_BUS_PACKET_STATGO_UNION */
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_STATGO_ADDR(base) ((base) + (0x2028))

/* �Ĵ���˵����ͳ�Ƽ�����С�澯��ֵ
   λ����UNION�ṹ:  SOC_MEDIA_NOC_MEDIA_BUS_PACKET_STATALARMMIN_UNION */
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_STATALARMMIN_ADDR(base) ((base) + (0x202C))

/* �Ĵ���˵����ͳ�Ƽ��������澯��ֵ
   λ����UNION�ṹ:  SOC_MEDIA_NOC_MEDIA_BUS_PACKET_STATALARMMAX_UNION */
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_STATALARMMAX_ADDR(base) ((base) + (0x2030))

/* �Ĵ���˵�����澯״̬�Ĵ���
   λ����UNION�ṹ:  SOC_MEDIA_NOC_MEDIA_BUS_PACKET_STATALARMSTATUS_UNION */
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_STATALARMSTATUS_ADDR(base) ((base) + (0x2034))

/* �Ĵ���˵�����澯״̬����Ĵ���
   λ����UNION�ṹ:  SOC_MEDIA_NOC_MEDIA_BUS_PACKET_STATALARMCLR_UNION */
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_STATALARMCLR_ADDR(base) ((base) + (0x2038))

/* �Ĵ���˵�����澯״̬ʹ�ܼĴ���
   λ����UNION�ṹ:  SOC_MEDIA_NOC_MEDIA_BUS_PACKET_STATALARMEN_UNION */
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_STATALARMEN_ADDR(base) ((base) + (0x203C))

/* �Ĵ���˵����F0��RouteId������������
   λ����UNION�ṹ:  SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_ROUTEIDBASE_UNION */
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_ROUTEIDBASE_ADDR(base) ((base) + (0x2044))

/* �Ĵ���˵����F0��RouteId��������Mask����
   λ����UNION�ṹ:  SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_ROUTEIDMASK_UNION */
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_ROUTEIDMASK_ADDR(base) ((base) + (0x2048))

/* �Ĵ���˵����F0�ĵ�ַ������������
   λ����UNION�ṹ:  SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_ADDRBASE_LOW_UNION */
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_ADDRBASE_LOW_ADDR(base) ((base) + (0x204C))

/* �Ĵ���˵����F0�ĵ�ַ���˵�Mask��ַ��С����
   λ����UNION�ṹ:  SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_WINDOWSIZE_UNION */
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_WINDOWSIZE_ADDR(base) ((base) + (0x1054))

/* �Ĵ���˵����F0�İ�ȫ������������
   λ����UNION�ṹ:  SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_SECURITYBASE_UNION */
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_SECURITYBASE_ADDR(base) ((base) + (0x2058))

/* �Ĵ���˵����F0�İ�ȫ����������Mask
   λ����UNION�ṹ:  SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_SECURITYMASK_UNION */
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_SECURITYMASK_ADDR(base) ((base) + (0x205C))

/* �Ĵ���˵����F0��Opcode������������
   λ����UNION�ṹ:  SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_OPCODE_UNION */
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_OPCODE_ADDR(base) ((base) + (0x2060))

/* �Ĵ���˵����F0��packet״̬��������
   λ����UNION�ṹ:  SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_STATUS_UNION */
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_STATUS_ADDR(base) ((base) + (0x2064))

/* �Ĵ���˵����F0�İ�����������
   λ����UNION�ṹ:  SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_LENGTH_UNION */
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_LENGTH_ADDR(base) ((base) + (0x2068))

/* �Ĵ���˵����F0��urgency��������
   λ����UNION�ṹ:  SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_URGENCY_UNION */
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_URGENCY_ADDR(base) ((base) + (0x206C))

/* �Ĵ���˵����F0��User��������
   λ����UNION�ṹ:  SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_USERBASE_UNION */
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_USERBASE_ADDR(base) ((base) + (0x2070))

/* �Ĵ���˵����F0��User��������Mask
   λ����UNION�ṹ:  SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_USERMASK_UNION */
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_USERMASK_ADDR(base) ((base) + (0x2074))

/* �Ĵ���˵����F1��RouteId������������
   λ����UNION�ṹ:  SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_ROUTEIDBASE_UNION */
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_ROUTEIDBASE_ADDR(base) ((base) + (0x2080))

/* �Ĵ���˵����F1��RouteId��������Mask����
   λ����UNION�ṹ:  SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_ROUTEIDMASK_UNION */
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_ROUTEIDMASK_ADDR(base) ((base) + (0x2084))

/* �Ĵ���˵����F1�ĵ�ַ������������
   λ����UNION�ṹ:  SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_ADDRBASE_LOW_UNION */
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_ADDRBASE_LOW_ADDR(base) ((base) + (0x2088))

/* �Ĵ���˵����F1�ĵ�ַ���˵�Mask��ַ��С����
   λ����UNION�ṹ:  SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_WINDOWSIZE_UNION */
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_WINDOWSIZE_ADDR(base) ((base) + (0x2090))

/* �Ĵ���˵����F1�İ�ȫ������������
   λ����UNION�ṹ:  SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_SECURITYBASE_UNION */
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_SECURITYBASE_ADDR(base) ((base) + (0x2094))

/* �Ĵ���˵����F1�İ�ȫ����������Mask
   λ����UNION�ṹ:  SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_SECURITYMASK_UNION */
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_SECURITYMASK_ADDR(base) ((base) + (0x2098))

/* �Ĵ���˵����F1��Opcode������������
   λ����UNION�ṹ:  SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_OPCODE_UNION */
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_OPCODE_ADDR(base) ((base) + (0x209C))

/* �Ĵ���˵����F1��packet״̬��������
   λ����UNION�ṹ:  SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_STATUS_UNION */
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_STATUS_ADDR(base) ((base) + (0x20A0))

/* �Ĵ���˵����F1�İ�����������
   λ����UNION�ṹ:  SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_LENGTH_UNION */
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_LENGTH_ADDR(base) ((base) + (0x20A4))

/* �Ĵ���˵����F1��urgency��������
   λ����UNION�ṹ:  SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_URGENCY_UNION */
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_URGENCY_ADDR(base) ((base) + (0x20A8))

/* �Ĵ���˵����F1��User��������
   λ����UNION�ṹ:  SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_USERBASE_UNION */
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_USERBASE_ADDR(base) ((base) + (0x20AC))

/* �Ĵ���˵����F1��User��������Mask
   λ����UNION�ṹ:  SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_USERMASK_UNION */
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_USERMASK_ADDR(base) ((base) + (0x20B0))

/* �Ĵ���˵����F2��RouteId������������
   λ����UNION�ṹ:  SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_ROUTEIDBASE_UNION */
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_ROUTEIDBASE_ADDR(base) ((base) + (0x20BC))

/* �Ĵ���˵����F2��RouteId��������Mask����
   λ����UNION�ṹ:  SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_ROUTEIDMASK_UNION */
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_ROUTEIDMASK_ADDR(base) ((base) + (0x20C0))

/* �Ĵ���˵����F2�ĵ�ַ������������
   λ����UNION�ṹ:  SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_ADDRBASE_LOW_UNION */
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_ADDRBASE_LOW_ADDR(base) ((base) + (0x20C4))

/* �Ĵ���˵����F2�ĵ�ַ���˵�Mask��ַ��С����
   λ����UNION�ṹ:  SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_WINDOWSIZE_UNION */
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_WINDOWSIZE_ADDR(base) ((base) + (0x20CC))

/* �Ĵ���˵����F2�İ�ȫ������������
   λ����UNION�ṹ:  SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_SECURITYBASE_UNION */
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_SECURITYBASE_ADDR(base) ((base) + (0x20D0))

/* �Ĵ���˵����F2�İ�ȫ����������Mask
   λ����UNION�ṹ:  SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_SECURITYMASK_UNION */
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_SECURITYMASK_ADDR(base) ((base) + (0x20D4))

/* �Ĵ���˵����F2��Opcode������������
   λ����UNION�ṹ:  SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_OPCODE_UNION */
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_OPCODE_ADDR(base) ((base) + (0x20D8))

/* �Ĵ���˵����F2��packet״̬��������
   λ����UNION�ṹ:  SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_STATUS_UNION */
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_STATUS_ADDR(base) ((base) + (0x20DC))

/* �Ĵ���˵����F2�İ�����������
   λ����UNION�ṹ:  SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_LENGTH_UNION */
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_LENGTH_ADDR(base) ((base) + (0x20E0))

/* �Ĵ���˵����F2��urgency��������
   λ����UNION�ṹ:  SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_URGENCY_UNION */
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_URGENCY_ADDR(base) ((base) + (0x20E4))

/* �Ĵ���˵����F2��User��������
   λ����UNION�ṹ:  SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_USERBASE_UNION */
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_USERBASE_ADDR(base) ((base) + (0x20E8))

/* �Ĵ���˵����F2��User��������Mask
   λ����UNION�ṹ:  SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_USERMASK_UNION */
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_USERMASK_ADDR(base) ((base) + (0x20EC))

/* �Ĵ���˵����F3��RouteId������������
   λ����UNION�ṹ:  SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_ROUTEIDBASE_UNION */
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_ROUTEIDBASE_ADDR(base) ((base) + (0x20F8))

/* �Ĵ���˵����F3��RouteId��������Mask����
   λ����UNION�ṹ:  SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_ROUTEIDMASK_UNION */
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_ROUTEIDMASK_ADDR(base) ((base) + (0x20FC))

/* �Ĵ���˵����F3�ĵ�ַ������������
   λ����UNION�ṹ:  SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_ADDRBASE_LOW_UNION */
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_ADDRBASE_LOW_ADDR(base) ((base) + (0x2100))

/* �Ĵ���˵����F3�ĵ�ַ���˵�Mask��ַ��С����
   λ����UNION�ṹ:  SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_WINDOWSIZE_UNION */
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_WINDOWSIZE_ADDR(base) ((base) + (0x2108))

/* �Ĵ���˵����F3�İ�ȫ������������
   λ����UNION�ṹ:  SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_SECURITYBASE_UNION */
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_SECURITYBASE_ADDR(base) ((base) + (0x210C))

/* �Ĵ���˵����F3�İ�ȫ����������Mask
   λ����UNION�ṹ:  SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_SECURITYMASK_UNION */
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_SECURITYMASK_ADDR(base) ((base) + (0x2110))

/* �Ĵ���˵����F3��Opcode������������
   λ����UNION�ṹ:  SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_OPCODE_UNION */
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_OPCODE_ADDR(base) ((base) + (0x2114))

/* �Ĵ���˵����F3��packet״̬��������
   λ����UNION�ṹ:  SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_STATUS_UNION */
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_STATUS_ADDR(base) ((base) + (0x2118))

/* �Ĵ���˵����F3�İ�����������
   λ����UNION�ṹ:  SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_LENGTH_UNION */
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_LENGTH_ADDR(base) ((base) + (0x211C))

/* �Ĵ���˵����F3��urgency��������
   λ����UNION�ṹ:  SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_URGENCY_UNION */
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_URGENCY_ADDR(base) ((base) + (0x2120))

/* �Ĵ���˵����F3��User��������
   λ����UNION�ṹ:  SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_USERBASE_UNION */
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_USERBASE_ADDR(base) ((base) + (0x2124))

/* �Ĵ���˵����F3��User��������Mask
   λ����UNION�ṹ:  SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_USERMASK_UNION */
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_USERMASK_ADDR(base) ((base) + (0x2128))

/* �Ĵ���˵����Counter��ͳ�����Ϳ��ƼĴ���
   λ����UNION�ṹ:  SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_0_SRC_UNION */
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_0_SRC_ADDR(base) ((base) + (0x2138))

/* �Ĵ���˵�����澯�жϲ������üĴ���
   λ����UNION�ṹ:  SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_0_ALARMMODE_UNION */
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_0_ALARMMODE_ADDR(base) ((base) + (0x213C))

/* �Ĵ���˵����ͳ�Ƽ�������ͳ��ֵ
   λ����UNION�ṹ:  SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_0_VAL_UNION */
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_0_VAL_ADDR(base) ((base) + (0x2140))

/* �Ĵ���˵����Counter��ͳ�����Ϳ��ƼĴ���
   λ����UNION�ṹ:  SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_1_SRC_UNION */
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_1_SRC_ADDR(base) ((base) + (0x214C))

/* �Ĵ���˵�����澯�жϲ������üĴ���
   λ����UNION�ṹ:  SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_1_ALARMMODE_UNION */
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_1_ALARMMODE_ADDR(base) ((base) + (0x2150))

/* �Ĵ���˵����ͳ�Ƽ�������ͳ��ֵ
   λ����UNION�ṹ:  SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_1_VAL_UNION */
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_1_VAL_ADDR(base) ((base) + (0x2154))

/* �Ĵ���˵����Counter��ͳ�����Ϳ��ƼĴ���
   λ����UNION�ṹ:  SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_2_SRC_UNION */
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_2_SRC_ADDR(base) ((base) + (0x2160))

/* �Ĵ���˵�����澯�жϲ������üĴ���
   λ����UNION�ṹ:  SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_2_ALARMMODE_UNION */
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_2_ALARMMODE_ADDR(base) ((base) + (0x2164))

/* �Ĵ���˵����ͳ�Ƽ�������ͳ��ֵ
   λ����UNION�ṹ:  SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_2_VAL_UNION */
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_2_VAL_ADDR(base) ((base) + (0x2168))

/* �Ĵ���˵����Counter��ͳ�����Ϳ��ƼĴ���
   λ����UNION�ṹ:  SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_3_SRC_UNION */
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_3_SRC_ADDR(base) ((base) + (0x2174))

/* �Ĵ���˵�����澯�жϲ������üĴ���
   λ����UNION�ṹ:  SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_3_ALARMMODE_UNION */
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_3_ALARMMODE_ADDR(base) ((base) + (0x2178))

/* �Ĵ���˵����ͳ�Ƽ�������ͳ��ֵ
   λ����UNION�ṹ:  SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_3_VAL_UNION */
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_3_VAL_ADDR(base) ((base) + (0x217C))



/****************************************************************************
                     (2/2) SERVICE_VIDEO
 ****************************************************************************/
/* �Ĵ���˵����ISP QoS Generator ����ID
   λ����UNION�ṹ:  SOC_MEDIA_NOC_ISP_QOSGENERATOR_ID_COREID_UNION */
#define SOC_MEDIA_NOC_ISP_QOSGENERATOR_ID_COREID_ADDR(base) ((base) + (0x0100))

/* �Ĵ���˵����ISP QoS Generator���ߴ���汾�Ĵ���
   λ����UNION�ṹ:  SOC_MEDIA_NOC_ISP_QOSGENERATOR_ID_REVISIONID_UNION */
#define SOC_MEDIA_NOC_ISP_QOSGENERATOR_ID_REVISIONID_ADDR(base) ((base) + (0x0104))

/* �Ĵ���˵����ISP QoS Generator���ȼ��Ĵ���
   λ����UNION�ṹ:  SOC_MEDIA_NOC_ISP_QOSGENERATOR_PRIORITY_UNION */
#define SOC_MEDIA_NOC_ISP_QOSGENERATOR_PRIORITY_ADDR(base) ((base) + (0x0108))

/* �Ĵ���˵����ISP QoS Generator ģʽ�Ĵ���
   λ����UNION�ṹ:  SOC_MEDIA_NOC_ISP_QOSGENERATOR_MODE_UNION */
#define SOC_MEDIA_NOC_ISP_QOSGENERATOR_MODE_ADDR(base) ((base) + (0x010C))

/* �Ĵ���˵����ISP QoS Generator ������ֵ�Ĵ���
   λ����UNION�ṹ:  SOC_MEDIA_NOC_ISP_QOSGENERATOR_BANDWIDTH_UNION */
#define SOC_MEDIA_NOC_ISP_QOSGENERATOR_BANDWIDTH_ADDR(base) ((base) + (0x0110))

/* �Ĵ���˵����ISP QoS Generator �������Ĵ���
   λ����UNION�ṹ:  SOC_MEDIA_NOC_ISP_QOSGENERATOR_SATURATION_UNION */
#define SOC_MEDIA_NOC_ISP_QOSGENERATOR_SATURATION_ADDR(base) ((base) + (0x0114))

/* �Ĵ���˵����ISP QoS Generator�ⲿ���ƼĴ���
   λ����UNION�ṹ:  SOC_MEDIA_NOC_ISP_QOSGENERATOR_EXTCONTROL_UNION */
#define SOC_MEDIA_NOC_ISP_QOSGENERATOR_EXTCONTROL_ADDR(base) ((base) + (0x0118))

/* �Ĵ���˵����JPU QoS Generator ����ID
   λ����UNION�ṹ:  SOC_MEDIA_NOC_JPU_QOSGENERATOR_ID_COREID_UNION */
#define SOC_MEDIA_NOC_JPU_QOSGENERATOR_ID_COREID_ADDR(base) ((base) + (0x0200))

/* �Ĵ���˵����JPU QoS Generator���ߴ���汾�Ĵ���
   λ����UNION�ṹ:  SOC_MEDIA_NOC_JPU_QOSGENERATOR_ID_REVISIONID_UNION */
#define SOC_MEDIA_NOC_JPU_QOSGENERATOR_ID_REVISIONID_ADDR(base) ((base) + (0x0204))

/* �Ĵ���˵����JPU QoS Generator���ȼ��Ĵ���
   λ����UNION�ṹ:  SOC_MEDIA_NOC_JPU_QOSGENERATOR_PRIORITY_UNION */
#define SOC_MEDIA_NOC_JPU_QOSGENERATOR_PRIORITY_ADDR(base) ((base) + (0x0208))

/* �Ĵ���˵����JPU QoS Generator ģʽ�Ĵ���
   λ����UNION�ṹ:  SOC_MEDIA_NOC_JPU_QOSGENERATOR_MODE_UNION */
#define SOC_MEDIA_NOC_JPU_QOSGENERATOR_MODE_ADDR(base) ((base) + (0x020C))

/* �Ĵ���˵����JPU QoS Generator ������ֵ�Ĵ���
   λ����UNION�ṹ:  SOC_MEDIA_NOC_JPU_QOSGENERATOR_BANDWIDTH_UNION */
#define SOC_MEDIA_NOC_JPU_QOSGENERATOR_BANDWIDTH_ADDR(base) ((base) + (0x0210))

/* �Ĵ���˵����JPU QoS Generator �������Ĵ���
   λ����UNION�ṹ:  SOC_MEDIA_NOC_JPU_QOSGENERATOR_SATURATION_UNION */
#define SOC_MEDIA_NOC_JPU_QOSGENERATOR_SATURATION_ADDR(base) ((base) + (0x0214))

/* �Ĵ���˵����JPU QoS Generator�ⲿ���ƼĴ���
   λ����UNION�ṹ:  SOC_MEDIA_NOC_JPU_QOSGENERATOR_EXTCONTROL_UNION */
#define SOC_MEDIA_NOC_JPU_QOSGENERATOR_EXTCONTROL_ADDR(base) ((base) + (0x0218))

/* �Ĵ���˵����VPU QoS Generator ����ID
   λ����UNION�ṹ:  SOC_MEDIA_NOC_VPU_QOSGENERATOR_ID_COREID_UNION */
#define SOC_MEDIA_NOC_VPU_QOSGENERATOR_ID_COREID_ADDR(base) ((base) + (0x0300))

/* �Ĵ���˵����VPU QoS Generator���ߴ���汾�Ĵ���
   λ����UNION�ṹ:  SOC_MEDIA_NOC_VPU_QOSGENERATOR_ID_REVISIONID_UNION */
#define SOC_MEDIA_NOC_VPU_QOSGENERATOR_ID_REVISIONID_ADDR(base) ((base) + (0x0304))

/* �Ĵ���˵����VPU QoS Generator���ȼ��Ĵ���
   λ����UNION�ṹ:  SOC_MEDIA_NOC_VPU_QOSGENERATOR_PRIORITY_UNION */
#define SOC_MEDIA_NOC_VPU_QOSGENERATOR_PRIORITY_ADDR(base) ((base) + (0x0308))

/* �Ĵ���˵����VPU QoS Generator ģʽ�Ĵ���
   λ����UNION�ṹ:  SOC_MEDIA_NOC_VPU_QOSGENERATOR_MODE_UNION */
#define SOC_MEDIA_NOC_VPU_QOSGENERATOR_MODE_ADDR(base) ((base) + (0x030C))

/* �Ĵ���˵����VPU QoS Generator ������ֵ�Ĵ���
   λ����UNION�ṹ:  SOC_MEDIA_NOC_VPU_QOSGENERATOR_BANDWIDTH_UNION */
#define SOC_MEDIA_NOC_VPU_QOSGENERATOR_BANDWIDTH_ADDR(base) ((base) + (0x0310))

/* �Ĵ���˵����VPU QoS Generator �������Ĵ���
   λ����UNION�ṹ:  SOC_MEDIA_NOC_VPU_QOSGENERATOR_SATURATION_UNION */
#define SOC_MEDIA_NOC_VPU_QOSGENERATOR_SATURATION_ADDR(base) ((base) + (0x0314))

/* �Ĵ���˵����VPU QoS Generator�ⲿ���ƼĴ���
   λ����UNION�ṹ:  SOC_MEDIA_NOC_VPU_QOSGENERATOR_EXTCONTROL_UNION */
#define SOC_MEDIA_NOC_VPU_QOSGENERATOR_EXTCONTROL_ADDR(base) ((base) + (0x0318))

/* �Ĵ���˵����VPU_SEC QoS Generator ����ID
   λ����UNION�ṹ:  SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_ID_COREID_UNION */
#define SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_ID_COREID_ADDR(base) ((base) + (0x0400))

/* �Ĵ���˵����VPU_SEC QoS Generator���ߴ���汾�Ĵ���
   λ����UNION�ṹ:  SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_ID_REVISIONID_UNION */
#define SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_ID_REVISIONID_ADDR(base) ((base) + (0x0404))

/* �Ĵ���˵����VPU_SEC QoS Generator���ȼ��Ĵ���
   λ����UNION�ṹ:  SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_PRIORITY_UNION */
#define SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_PRIORITY_ADDR(base) ((base) + (0x0408))

/* �Ĵ���˵����VPU_SEC QoS Generator ģʽ�Ĵ���
   λ����UNION�ṹ:  SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_MODE_UNION */
#define SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_MODE_ADDR(base) ((base) + (0x040C))

/* �Ĵ���˵����VPU_SEC QoS Generator ������ֵ�Ĵ���
   λ����UNION�ṹ:  SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_BANDWIDTH_UNION */
#define SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_BANDWIDTH_ADDR(base) ((base) + (0x0410))

/* �Ĵ���˵����VPU_SEC QoS Generator �������Ĵ���
   λ����UNION�ṹ:  SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_SATURATION_UNION */
#define SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_SATURATION_ADDR(base) ((base) + (0x0414))

/* �Ĵ���˵����VPU_SEC QoS Generator�ⲿ���ƼĴ���
   λ����UNION�ṹ:  SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_EXTCONTROL_UNION */
#define SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_EXTCONTROL_ADDR(base) ((base) + (0x0418))

/* �Ĵ���˵����VIDEO adapter��ID
   λ����UNION�ṹ:  SOC_MEDIA_NOC_VIDEO_ADAPTER_ID_COREID_UNION */
#define SOC_MEDIA_NOC_VIDEO_ADAPTER_ID_COREID_ADDR(base) ((base) + (0x1000))

/* �Ĵ���˵�������ߴ���汾�Ĵ���
   λ����UNION�ṹ:  SOC_MEDIA_NOC_VIDEO_ADAPTER_ID_REVISIONID_UNION */
#define SOC_MEDIA_NOC_VIDEO_ADAPTER_ID_REVISIONID_ADDR(base) ((base) + (0x1004))

/* �Ĵ���˵����VIDEO Rate Adapter���üĴ���
   λ����UNION�ṹ:  SOC_MEDIA_NOC_VIDEO_ADAPTER_RATE_UNION */
#define SOC_MEDIA_NOC_VIDEO_ADAPTER_RATE_ADDR(base)  ((base) + (0x1008))

/* �Ĵ���˵����bypass VIDEO Rate Adapter
   λ����UNION�ṹ:  SOC_MEDIA_NOC_VIDEO_ADAPTER_BYPASS_UNION */
#define SOC_MEDIA_NOC_VIDEO_ADAPTER_BYPASS_ADDR(base) ((base) + (0x100C))





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
                     (1/2) SERVICE
 ****************************************************************************/
/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ID_COREID_UNION
 �ṹ˵��  : MEDIA_BUS_ERR_LOGGER_ID_COREID �Ĵ����ṹ���塣��ַƫ����:0x0000����ֵ:0x74B07D0D�����:32
 �Ĵ���˵��: IP ģ���ʶ�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  core_type_id   : 8;  /* bit[0-7] : MEDIA_BUS ��Error Logger����ID */
        unsigned int  core_check_sum : 24; /* bit[8-31]: MEDIA_BUS Error Logger �Ĳ�������� */
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ID_COREID_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ID_COREID_core_type_id_START    (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ID_COREID_core_type_id_END      (7)
#define SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ID_COREID_core_check_sum_START  (8)
#define SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ID_COREID_core_check_sum_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ID_REVISIONID_UNION
 �ṹ˵��  : MEDIA_BUS_ERR_LOGGER_ID_REVISIONID �Ĵ����ṹ���塣��ַƫ����:0x0004����ֵ:0x012D5300�����:32
 �Ĵ���˵��: IP �汾��ʶ�Ĵ���
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
} SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ID_REVISIONID_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ID_REVISIONID_user_id_START     (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ID_REVISIONID_user_id_END       (7)
#define SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ID_REVISIONID_flexnoc_id_START  (8)
#define SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ID_REVISIONID_flexnoc_id_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_FAULTEN_UNION
 �ṹ˵��  : MEDIA_BUS_ERR_LOGGER_FAULTEN �Ĵ����ṹ���塣��ַƫ����:0x0008����ֵ:0x00000000�����:32
 �Ĵ���˵��: ���ߴ����ж��ϱ�ʹ�ܼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  fault_en : 1;  /* bit[0]   : ��ص����߶�д���󣨼Ĵ���ErrVldΪ1��ʱ���ж��ϱ�ʹ�ܡ�
                                                   0����ֹ��
                                                   1��ʹ�ܡ� */
        unsigned int  reserved : 31; /* bit[1-31]: ���� */
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_FAULTEN_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_FAULTEN_fault_en_START  (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_FAULTEN_fault_en_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ERRVLD_UNION
 �ṹ˵��  : MEDIA_BUS_ERR_LOGGER_ERRVLD �Ĵ����ṹ���塣��ַƫ����:0x000C����ֵ:0x00000000�����:32
 �Ĵ���˵��: ���ߴ���״ָ̬ʾ�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  err_vld  : 1;  /* bit[0]   : ���ߴ���״ָ̬ʾ��
                                                   0����Ч��
                                                   1����Ч���� */
        unsigned int  reserved : 31; /* bit[1-31]: ���� */
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ERRVLD_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ERRVLD_err_vld_START   (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ERRVLD_err_vld_END     (0)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ERRCLR_UNION
 �ṹ˵��  : MEDIA_BUS_ERR_LOGGER_ERRCLR �Ĵ����ṹ���塣��ַƫ����:0x0010����ֵ:0x00000000�����:32
 �Ĵ���˵��: ���ߴ����ж�����Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  err_clr  : 1;  /* bit[0]   : 1.д1'b1����ErrVld�Ĵ���������ж�ʹ�ܣ�ͬʱҲ����жϣ���
                                                   2.д1'b1�����ܴ洢��ErrClr�Ĵ����У����üĴ�������������1'b0��
                                                   3.д1'b0��Ч�� */
        unsigned int  reserved : 31; /* bit[1-31]: ���� */
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ERRCLR_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ERRCLR_err_clr_START   (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ERRCLR_err_clr_END     (0)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ERRLOG0_UNION
 �ṹ˵��  : MEDIA_BUS_ERR_LOGGER_ERRLOG0 �Ĵ����ṹ���塣��ַƫ����:0x0014����ֵ:0x80000000�����:32
 �Ĵ���˵��: ���ߴ�����Ϣ�Ĵ���0
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
        unsigned int  len1     : 8;  /* bit[16-23]: ���ߴ�������İ��������������ݳ���Ϊ2len1 bytes�� */
        unsigned int  reserved_2: 7;  /* bit[24-30]: ���� */
        unsigned int  format   : 1;  /* bit[31]   : ���ߴ�������İ���ʽ�汾��
                                                    0��NTTP-3��
                                                    1��NTTP-3.5�� */
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ERRLOG0_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ERRLOG0_lock_START      (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ERRLOG0_lock_END        (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ERRLOG0_opc_START       (1)
#define SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ERRLOG0_opc_END         (4)
#define SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ERRLOG0_err_code_START  (8)
#define SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ERRLOG0_err_code_END    (10)
#define SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ERRLOG0_len1_START      (16)
#define SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ERRLOG0_len1_END        (23)
#define SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ERRLOG0_format_START    (31)
#define SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ERRLOG0_format_END      (31)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ERRLOG1_UNION
 �ṹ˵��  : MEDIA_BUS_ERR_LOGGER_ERRLOG1 �Ĵ����ṹ���塣��ַƫ����:0x0018����ֵ:0x00000000�����:32
 �Ĵ���˵��: ���ߴ�����Ϣ�Ĵ���1
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  errlog1  : 17; /* bit[0-16] : RouteId��·����Ϣ����bit��������
                                                    [16:14]&#45;->Initiator Flow ID�����ڱ�ʾ������ʵ�master��
                                                    0: ADE0, 1: ADE1, 2: CFG, 3: ISP, 4: JPU, 5: VPU, 6: VPU_SEC, 7: ������
                                                    
                                                    [13:10]&#45;->Target Flow ID�����ڱ�ʾ�����ʵ�slave��
                                                    0: APB_ISP, 1: APB_JPU, 2: APB_VPU, 3: AHB_ISP, 4: APB_ADE, 5: APB_G3D, 6: APB_MEDIA_SC, 7: APB_SMMU��8: AXI_SMMU, 9: XG2RAM_HARQ, 10: MEDIA_BUS_SERVICE, 11: MEDIA_BUS_SERVICE_VIDEO, Others: ������
                                                    
                                                    [9:7]&#45;->Target SubRange����ʾTarget NIU�Ĳ�ͬ�����ַ�Σ�
                                                    [6:0]&#45;->Seq ID��Transaction��ǣ� */
        unsigned int  reserved : 15; /* bit[17-31]: ���� */
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ERRLOG1_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ERRLOG1_errlog1_START   (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ERRLOG1_errlog1_END     (16)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ERRLOG3_UNION
 �ṹ˵��  : MEDIA_BUS_ERR_LOGGER_ERRLOG3 �Ĵ����ṹ���塣��ַƫ����:0x0020����ֵ:0x00000000�����:32
 �Ĵ���˵��: ���ߴ�����Ϣ�Ĵ���3
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  errlog3 : 32; /* bit[0-31]: ���ߴ�������ĵ�ַ */
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ERRLOG3_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ERRLOG3_errlog3_START  (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ERRLOG3_errlog3_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ERRLOG5_UNION
 �ṹ˵��  : MEDIA_BUS_ERR_LOGGER_ERRLOG5 �Ĵ����ṹ���塣��ַƫ����:0x0028����ֵ:0x00000000�����:32
 �Ĵ���˵��: ���ߴ�����Ϣ�Ĵ���5
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  errlog5  : 3;  /* bit[0-2] : ���ߴ��������User bit��Ϣ */
        unsigned int  reserved : 29; /* bit[3-31]: ���� */
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ERRLOG5_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ERRLOG5_errlog5_START   (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ERRLOG5_errlog5_END     (2)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ERRLOG7_UNION
 �ṹ˵��  : MEDIA_BUS_ERR_LOGGER_ERRLOG7 �Ĵ����ṹ���塣��ַƫ����:0x0030����ֵ:0x00000000�����:32
 �Ĵ���˵��: ���ߴ�����Ϣ�Ĵ���7
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  errlog7  : 1;  /* bit[0]   : ���ߴ��������Security bit��Ϣ */
        unsigned int  reserved : 31; /* bit[1-31]: ���� */
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ERRLOG7_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ERRLOG7_errlog7_START   (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_ERR_LOGGER_ERRLOG7_errlog7_END     (0)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_ADE0_QOSGENERATOR_ID_COREID_UNION
 �ṹ˵��  : ADE0_QOSGENERATOR_ID_COREID �Ĵ����ṹ���塣��ַƫ����:0x0100����ֵ:0xE6BE3104�����:32
 �Ĵ���˵��: ADE0 QoS Generator ����ID
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  core_type_id   : 8;  /* bit[0-7] : ADE0 QoS Generator ����ID */
        unsigned int  core_check_sum : 24; /* bit[8-31]: ADE0 QoS Generator �Ĳ�������� */
    } reg;
} SOC_MEDIA_NOC_ADE0_QOSGENERATOR_ID_COREID_UNION;
#endif
#define SOC_MEDIA_NOC_ADE0_QOSGENERATOR_ID_COREID_core_type_id_START    (0)
#define SOC_MEDIA_NOC_ADE0_QOSGENERATOR_ID_COREID_core_type_id_END      (7)
#define SOC_MEDIA_NOC_ADE0_QOSGENERATOR_ID_COREID_core_check_sum_START  (8)
#define SOC_MEDIA_NOC_ADE0_QOSGENERATOR_ID_COREID_core_check_sum_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_ADE0_QOSGENERATOR_ID_REVISIONID_UNION
 �ṹ˵��  : ADE0_QOSGENERATOR_ID_REVISIONID �Ĵ����ṹ���塣��ַƫ����:0x0104����ֵ:0x012D5300�����:32
 �Ĵ���˵��: ADE0 QoS Generator ���ߴ���汾�Ĵ���
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
} SOC_MEDIA_NOC_ADE0_QOSGENERATOR_ID_REVISIONID_UNION;
#endif
#define SOC_MEDIA_NOC_ADE0_QOSGENERATOR_ID_REVISIONID_user_id_START     (0)
#define SOC_MEDIA_NOC_ADE0_QOSGENERATOR_ID_REVISIONID_user_id_END       (7)
#define SOC_MEDIA_NOC_ADE0_QOSGENERATOR_ID_REVISIONID_flexnoc_id_START  (8)
#define SOC_MEDIA_NOC_ADE0_QOSGENERATOR_ID_REVISIONID_flexnoc_id_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_ADE0_QOSGENERATOR_PRIORITY_UNION
 �ṹ˵��  : ADE0_QOSGENERATOR_PRIORITY �Ĵ����ṹ���塣��ַƫ����:0x0108����ֵ:0x80000000�����:32
 �Ĵ���˵��: ADE0 QoS Generator ���ȼ��Ĵ���
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
} SOC_MEDIA_NOC_ADE0_QOSGENERATOR_PRIORITY_UNION;
#endif
#define SOC_MEDIA_NOC_ADE0_QOSGENERATOR_PRIORITY_p0_START        (0)
#define SOC_MEDIA_NOC_ADE0_QOSGENERATOR_PRIORITY_p0_END          (2)
#define SOC_MEDIA_NOC_ADE0_QOSGENERATOR_PRIORITY_p1_START        (8)
#define SOC_MEDIA_NOC_ADE0_QOSGENERATOR_PRIORITY_p1_END          (10)
#define SOC_MEDIA_NOC_ADE0_QOSGENERATOR_PRIORITY_mark_START      (31)
#define SOC_MEDIA_NOC_ADE0_QOSGENERATOR_PRIORITY_mark_END        (31)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_ADE0_QOSGENERATOR_MODE_UNION
 �ṹ˵��  : ADE0_QOSGENERATOR_MODE �Ĵ����ṹ���塣��ַƫ����:0x010C����ֵ:0x00000000�����:32
 �Ĵ���˵��: ADE0 QoS Generator ģʽ�Ĵ���
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
} SOC_MEDIA_NOC_ADE0_QOSGENERATOR_MODE_UNION;
#endif
#define SOC_MEDIA_NOC_ADE0_QOSGENERATOR_MODE_mode_START      (0)
#define SOC_MEDIA_NOC_ADE0_QOSGENERATOR_MODE_mode_END        (1)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_ADE0_QOSGENERATOR_BANDWIDTH_UNION
 �ṹ˵��  : ADE0_QOSGENERATOR_BANDWIDTH �Ĵ����ṹ���塣��ַƫ����:0x0110����ֵ:0x0000058E�����:32
 �Ĵ���˵��: ADE0 QoS Generator ������ֵ�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  bandwidth : 13; /* bit[0-12] : ������ֵ */
        unsigned int  reserved  : 19; /* bit[13-31]: ���� */
    } reg;
} SOC_MEDIA_NOC_ADE0_QOSGENERATOR_BANDWIDTH_UNION;
#endif
#define SOC_MEDIA_NOC_ADE0_QOSGENERATOR_BANDWIDTH_bandwidth_START  (0)
#define SOC_MEDIA_NOC_ADE0_QOSGENERATOR_BANDWIDTH_bandwidth_END    (12)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_ADE0_QOSGENERATOR_SATURATION_UNION
 �ṹ˵��  : ADE0_QOSGENERATOR_SATURATION �Ĵ����ṹ���塣��ַƫ����:0x0114����ֵ:0x00000100�����:32
 �Ĵ���˵��: ADE0 QoS Generator �������Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  saturation : 10; /* bit[0-9]  : �����������С */
        unsigned int  reserved   : 22; /* bit[10-31]: ���� */
    } reg;
} SOC_MEDIA_NOC_ADE0_QOSGENERATOR_SATURATION_UNION;
#endif
#define SOC_MEDIA_NOC_ADE0_QOSGENERATOR_SATURATION_saturation_START  (0)
#define SOC_MEDIA_NOC_ADE0_QOSGENERATOR_SATURATION_saturation_END    (9)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_ADE0_QOSGENERATOR_EXTCONTROL_UNION
 �ṹ˵��  : ADE0_QOSGENERATOR_EXTCONTROL �Ĵ����ṹ���塣��ַƫ����:0x0118����ֵ:0x00000000�����:32
 �Ĵ���˵��: ADE0 QoS Generator �ⲿ���ƼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  socket_qos_en : 1;  /* bit[0]   : �������� socket �� QoS ֵ���� QoS Generator �� QoS ֵ */
        unsigned int  ext_thr_en    : 1;  /* bit[1]   : �ⲿ��ֵ�������Ĵ������õ���ֵ���Ƹߵ����ȼ� */
        unsigned int  int_clk_en    : 1;  /* bit[2]   : ����ʱ�ӣ�NIUʱ�ӣ�����ο�ʱ�ӽ��д������ */
        unsigned int  reserved      : 29; /* bit[3-31]: ���� */
    } reg;
} SOC_MEDIA_NOC_ADE0_QOSGENERATOR_EXTCONTROL_UNION;
#endif
#define SOC_MEDIA_NOC_ADE0_QOSGENERATOR_EXTCONTROL_socket_qos_en_START  (0)
#define SOC_MEDIA_NOC_ADE0_QOSGENERATOR_EXTCONTROL_socket_qos_en_END    (0)
#define SOC_MEDIA_NOC_ADE0_QOSGENERATOR_EXTCONTROL_ext_thr_en_START     (1)
#define SOC_MEDIA_NOC_ADE0_QOSGENERATOR_EXTCONTROL_ext_thr_en_END       (1)
#define SOC_MEDIA_NOC_ADE0_QOSGENERATOR_EXTCONTROL_int_clk_en_START     (2)
#define SOC_MEDIA_NOC_ADE0_QOSGENERATOR_EXTCONTROL_int_clk_en_END       (2)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_ADE1_QOSGENERATOR_ID_COREID_UNION
 �ṹ˵��  : ADE1_QOSGENERATOR_ID_COREID �Ĵ����ṹ���塣��ַƫ����:0x0200����ֵ:0x7B96DE04�����:32
 �Ĵ���˵��: ADE1 QoS Generator ����ID
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  core_type_id   : 8;  /* bit[0-7] : ADE1 QoS Generator ����ID */
        unsigned int  core_check_sum : 24; /* bit[8-31]: ADE1 QoS Generator �Ĳ�������� */
    } reg;
} SOC_MEDIA_NOC_ADE1_QOSGENERATOR_ID_COREID_UNION;
#endif
#define SOC_MEDIA_NOC_ADE1_QOSGENERATOR_ID_COREID_core_type_id_START    (0)
#define SOC_MEDIA_NOC_ADE1_QOSGENERATOR_ID_COREID_core_type_id_END      (7)
#define SOC_MEDIA_NOC_ADE1_QOSGENERATOR_ID_COREID_core_check_sum_START  (8)
#define SOC_MEDIA_NOC_ADE1_QOSGENERATOR_ID_COREID_core_check_sum_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_ADE1_QOSGENERATOR_ID_REVISIONID_UNION
 �ṹ˵��  : ADE1_QOSGENERATOR_ID_REVISIONID �Ĵ����ṹ���塣��ַƫ����:0x0204����ֵ:0x012D5300�����:32
 �Ĵ���˵��: ADE1 QoS Generator���ߴ���汾�Ĵ���
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
} SOC_MEDIA_NOC_ADE1_QOSGENERATOR_ID_REVISIONID_UNION;
#endif
#define SOC_MEDIA_NOC_ADE1_QOSGENERATOR_ID_REVISIONID_user_id_START     (0)
#define SOC_MEDIA_NOC_ADE1_QOSGENERATOR_ID_REVISIONID_user_id_END       (7)
#define SOC_MEDIA_NOC_ADE1_QOSGENERATOR_ID_REVISIONID_flexnoc_id_START  (8)
#define SOC_MEDIA_NOC_ADE1_QOSGENERATOR_ID_REVISIONID_flexnoc_id_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_ADE1_QOSGENERATOR_PRIORITY_UNION
 �ṹ˵��  : ADE1_QOSGENERATOR_PRIORITY �Ĵ����ṹ���塣��ַƫ����:0x0208����ֵ:0x80000000�����:32
 �Ĵ���˵��: ADE1 QoS Generator���ȼ��Ĵ���
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
} SOC_MEDIA_NOC_ADE1_QOSGENERATOR_PRIORITY_UNION;
#endif
#define SOC_MEDIA_NOC_ADE1_QOSGENERATOR_PRIORITY_p0_START        (0)
#define SOC_MEDIA_NOC_ADE1_QOSGENERATOR_PRIORITY_p0_END          (2)
#define SOC_MEDIA_NOC_ADE1_QOSGENERATOR_PRIORITY_p1_START        (8)
#define SOC_MEDIA_NOC_ADE1_QOSGENERATOR_PRIORITY_p1_END          (10)
#define SOC_MEDIA_NOC_ADE1_QOSGENERATOR_PRIORITY_mark_START      (31)
#define SOC_MEDIA_NOC_ADE1_QOSGENERATOR_PRIORITY_mark_END        (31)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_ADE1_QOSGENERATOR_MODE_UNION
 �ṹ˵��  : ADE1_QOSGENERATOR_MODE �Ĵ����ṹ���塣��ַƫ����:0x020C����ֵ:0x00000000�����:32
 �Ĵ���˵��: ADE1 QoS Generator ģʽ�Ĵ���
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
} SOC_MEDIA_NOC_ADE1_QOSGENERATOR_MODE_UNION;
#endif
#define SOC_MEDIA_NOC_ADE1_QOSGENERATOR_MODE_mode_START      (0)
#define SOC_MEDIA_NOC_ADE1_QOSGENERATOR_MODE_mode_END        (1)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_ADE1_QOSGENERATOR_BANDWIDTH_UNION
 �ṹ˵��  : ADE1_QOSGENERATOR_BANDWIDTH �Ĵ����ṹ���塣��ַƫ����:0x0210����ֵ:0x0000058E�����:32
 �Ĵ���˵��: ADE1 QoS Generator ������ֵ�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  bandwidth : 13; /* bit[0-12] : ������ֵ */
        unsigned int  reserved  : 19; /* bit[13-31]: ���� */
    } reg;
} SOC_MEDIA_NOC_ADE1_QOSGENERATOR_BANDWIDTH_UNION;
#endif
#define SOC_MEDIA_NOC_ADE1_QOSGENERATOR_BANDWIDTH_bandwidth_START  (0)
#define SOC_MEDIA_NOC_ADE1_QOSGENERATOR_BANDWIDTH_bandwidth_END    (12)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_ADE1_QOSGENERATOR_SATURATION_UNION
 �ṹ˵��  : ADE1_QOSGENERATOR_SATURATION �Ĵ����ṹ���塣��ַƫ����:0x0214����ֵ:0x00000100�����:32
 �Ĵ���˵��: ADE1 QoS Generator �������Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  saturation : 10; /* bit[0-9]  : �����������С */
        unsigned int  reserved   : 22; /* bit[10-31]: ���� */
    } reg;
} SOC_MEDIA_NOC_ADE1_QOSGENERATOR_SATURATION_UNION;
#endif
#define SOC_MEDIA_NOC_ADE1_QOSGENERATOR_SATURATION_saturation_START  (0)
#define SOC_MEDIA_NOC_ADE1_QOSGENERATOR_SATURATION_saturation_END    (9)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_ADE1_QOSGENERATOR_EXTCONTROL_UNION
 �ṹ˵��  : ADE1_QOSGENERATOR_EXTCONTROL �Ĵ����ṹ���塣��ַƫ����:0x0218����ֵ:0x00000000�����:32
 �Ĵ���˵��: ADE1 QoS Generator�ⲿ���ƼĴ���
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
} SOC_MEDIA_NOC_ADE1_QOSGENERATOR_EXTCONTROL_UNION;
#endif
#define SOC_MEDIA_NOC_ADE1_QOSGENERATOR_EXTCONTROL_socket_qos_en_START  (0)
#define SOC_MEDIA_NOC_ADE1_QOSGENERATOR_EXTCONTROL_socket_qos_en_END    (0)
#define SOC_MEDIA_NOC_ADE1_QOSGENERATOR_EXTCONTROL_ext_thr_en_START     (1)
#define SOC_MEDIA_NOC_ADE1_QOSGENERATOR_EXTCONTROL_ext_thr_en_END       (1)
#define SOC_MEDIA_NOC_ADE1_QOSGENERATOR_EXTCONTROL_int_clk_en_START     (2)
#define SOC_MEDIA_NOC_ADE1_QOSGENERATOR_EXTCONTROL_int_clk_en_END       (2)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_SMMU_ADAPTER_ID_COREID_UNION
 �ṹ˵��  : SMMU_ADAPTER_ID_COREID �Ĵ����ṹ���塣��ַƫ����:0x1000����ֵ:0xF8859C01�����:32
 �Ĵ���˵��: SMMU adapter��ID
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  core_type_id   : 8;  /* bit[0-7] : ����SMMUͨ·��RateAdapter����ID */
        unsigned int  core_check_sum : 24; /* bit[8-31]: ����SMMUͨ·��RateAdapter�Ĳ�������� */
    } reg;
} SOC_MEDIA_NOC_SMMU_ADAPTER_ID_COREID_UNION;
#endif
#define SOC_MEDIA_NOC_SMMU_ADAPTER_ID_COREID_core_type_id_START    (0)
#define SOC_MEDIA_NOC_SMMU_ADAPTER_ID_COREID_core_type_id_END      (7)
#define SOC_MEDIA_NOC_SMMU_ADAPTER_ID_COREID_core_check_sum_START  (8)
#define SOC_MEDIA_NOC_SMMU_ADAPTER_ID_COREID_core_check_sum_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_SMMU_ADAPTER_ID_REVISIONID_UNION
 �ṹ˵��  : SMMU_ADAPTER_ID_REVISIONID �Ĵ����ṹ���塣��ַƫ����:0x1004����ֵ:0x012D5300�����:32
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
} SOC_MEDIA_NOC_SMMU_ADAPTER_ID_REVISIONID_UNION;
#endif
#define SOC_MEDIA_NOC_SMMU_ADAPTER_ID_REVISIONID_user_id_START     (0)
#define SOC_MEDIA_NOC_SMMU_ADAPTER_ID_REVISIONID_user_id_END       (7)
#define SOC_MEDIA_NOC_SMMU_ADAPTER_ID_REVISIONID_flexnoc_id_START  (8)
#define SOC_MEDIA_NOC_SMMU_ADAPTER_ID_REVISIONID_flexnoc_id_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_SMMU_ADAPTER_RATE_UNION
 �ṹ˵��  : SMMU_ADAPTER_RATE �Ĵ����ṹ���塣��ַƫ����:0x1008����ֵ:0x00000000�����:32
 �Ĵ���˵��: SMMU Rate Adapter���üĴ���
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
} SOC_MEDIA_NOC_SMMU_ADAPTER_RATE_UNION;
#endif
#define SOC_MEDIA_NOC_SMMU_ADAPTER_RATE_rate_START      (0)
#define SOC_MEDIA_NOC_SMMU_ADAPTER_RATE_rate_END        (9)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_SMMU_ADAPTER_BYPASS_UNION
 �ṹ˵��  : SMMU_ADAPTER_BYPASS �Ĵ����ṹ���塣��ַƫ����:0x100C����ֵ:0x00000000�����:32
 �Ĵ���˵��: bypass SMMU Rate Adapter
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  bypass   : 1;  /* bit[0]   : bypass SMMU Rate Adapter */
        unsigned int  reserved : 31; /* bit[1-31]: ���� */
    } reg;
} SOC_MEDIA_NOC_SMMU_ADAPTER_BYPASS_UNION;
#endif
#define SOC_MEDIA_NOC_SMMU_ADAPTER_BYPASS_bypass_START    (0)
#define SOC_MEDIA_NOC_SMMU_ADAPTER_BYPASS_bypass_END      (0)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_MEDIA_BUS_PACKET_ID_COREID_UNION
 �ṹ˵��  : MEDIA_BUS_PACKET_ID_COREID �Ĵ����ṹ���塣��ַƫ����:0x2000����ֵ:0x5B100906�����:32
 �Ĵ���˵��: MEDIA_BUS Packet probe��ID
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  id_core_id     : 8;  /* bit[0-7] : MEDIA_BUS��Packet Probe����ID */
        unsigned int  core_check_sum : 24; /* bit[8-31]: MEDIA_BUS��Packet Probe�Ĳ�������� */
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_ID_COREID_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_ID_COREID_id_core_id_START      (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_ID_COREID_id_core_id_END        (7)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_ID_COREID_core_check_sum_START  (8)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_ID_COREID_core_check_sum_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_MEDIA_BUS_PACKET_ID_REVISIONID_UNION
 �ṹ˵��  : MEDIA_BUS_PACKET_ID_REVISIONID �Ĵ����ṹ���塣��ַƫ����:0x2004����ֵ:0x012D5300�����:32
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
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_ID_REVISIONID_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_ID_REVISIONID_user_id_START         (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_ID_REVISIONID_user_id_END           (7)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_ID_REVISIONID_id_revision_id_START  (8)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_ID_REVISIONID_id_revision_id_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_MEDIA_BUS_PACKET_MAINCTL_UNION
 �ṹ˵��  : MEDIA_BUS_PACKET_MAINCTL �Ĵ����ṹ���塣��ַƫ����:0x2008����ֵ:0x00000000�����:32
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
                                                                        0&#45;->�����жϣ�����ź�MEDIA_BUS_Packet_Probe_StatAlarmΪ0��
                                                                        1&#45;->ʹ���ж����������ź�MEDIA_BUS_Packet_Probe_StatAlarm�� */
        unsigned int  stat_cond_dump                : 1;  /* bit[5]   : 0&#45;->��ʾ������dumpͳ�����ݣ��Ĵ���counters_m_val��ֵ��ʵʱ��ӳͳ�Ƽ�������ֵ��
                                                                        1&#45;->��ʾ������dump���ݣ��ڸ�����ͳ�������ڷ���out of bounds �¼����ŻὫͳ�Ƽ�������ֵdump���Ĵ���counters_m_val�С� */
        unsigned int  intrusive_mode                : 1;  /* bit[6]   : IntrusiveMode����������modeΪSpy���ʴ�λhard_codeΪ0. */
        unsigned int  filt_byte_always_chainable_en : 1;  /* bit[7]   : FiltByteAlwaysChainableEn��������ż������������ʹ�ܵ�ȫ�����ã�
                                                                        0&#45;->��ʹ�ܣ���ʱ�����в�statistic counters�����Ա�Map��
                                                                        1&#45;->ʹ�ܣ�ֻ��ż��statistic counters�ſ��Ա�Map�� */
        unsigned int  reserved                      : 24; /* bit[8-31]: ���� */
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_MAINCTL_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_MAINCTL_err_en_START                         (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_MAINCTL_err_en_END                           (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_MAINCTL_trace_en_START                       (1)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_MAINCTL_trace_en_END                         (1)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_MAINCTL_payload_en_START                     (2)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_MAINCTL_payload_en_END                       (2)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_MAINCTL_stat_en_START                        (3)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_MAINCTL_stat_en_END                          (3)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_MAINCTL_alarm_en_START                       (4)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_MAINCTL_alarm_en_END                         (4)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_MAINCTL_stat_cond_dump_START                 (5)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_MAINCTL_stat_cond_dump_END                   (5)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_MAINCTL_intrusive_mode_START                 (6)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_MAINCTL_intrusive_mode_END                   (6)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_MAINCTL_filt_byte_always_chainable_en_START  (7)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_MAINCTL_filt_byte_always_chainable_en_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_MEDIA_BUS_PACKET_CFGCTL_UNION
 �ṹ˵��  : MEDIA_BUS_PACKET_CFGCTL �Ĵ����ṹ���塣��ַƫ����:0x200C����ֵ:0x00000000�����:32
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
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_CFGCTL_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_CFGCTL_global_en_START  (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_CFGCTL_global_en_END    (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_CFGCTL_active_START     (1)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_CFGCTL_active_END       (1)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_MEDIA_BUS_PACKET_TRACEPORTSEL_UNION
 �ṹ˵��  : MEDIA_BUS_PACKET_TRACEPORTSEL �Ĵ����ṹ���塣��ַƫ����:0x2010����ֵ:0x00000000�����:32
 �Ĵ���˵��: ��ض˿�ѡ��Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  trace_port_sel : 1;  /* bit[0]   :  */
        unsigned int  reserved       : 31; /* bit[1-31]: ���� */
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_TRACEPORTSEL_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_TRACEPORTSEL_trace_port_sel_START  (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_TRACEPORTSEL_trace_port_sel_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_MEDIA_BUS_PACKET_FILTERLUT_UNION
 �ṹ˵��  : MEDIA_BUS_PACKET_FILTERLUT �Ĵ����ṹ���塣��ַƫ����:0x2014����ֵ:0x00000000�����:32
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
                                                      0xE&#45;->F1 | F0 ��������ΪF1��F0�� */
        unsigned int  reserved   : 16; /* bit[16-31]: ���� */
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_FILTERLUT_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_FILTERLUT_filter_lut_START  (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_FILTERLUT_filter_lut_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_MEDIA_BUS_PACKET_TRACEALARMEN_UNION
 �ṹ˵��  : MEDIA_BUS_PACKET_TRACEALARMEN �Ĵ����ṹ���塣��ַƫ����:0x2018����ֵ:0x00000000�����:32
 �Ĵ���˵��: trace ʹ�ܼĴ���
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
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_TRACEALARMEN_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_TRACEALARMEN_trace_alarm_en_START  (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_TRACEALARMEN_trace_alarm_en_END    (4)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_MEDIA_BUS_PACKET_TRACEALARMSTATUS_UNION
 �ṹ˵��  : MEDIA_BUS_PACKET_TRACEALARMSTATUS �Ĵ����ṹ���塣��ַƫ����:0x201C����ֵ:0x00000000�����:32
 �Ĵ���˵��: trace ״̬�Ĵ���
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
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_TRACEALARMSTATUS_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_TRACEALARMSTATUS_trace_alarm_status_START  (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_TRACEALARMSTATUS_trace_alarm_status_END    (4)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_MEDIA_BUS_PACKET_TRACEALARMCLR_UNION
 �ṹ˵��  : MEDIA_BUS_PACKET_TRACEALARMCLR �Ĵ����ṹ���塣��ַƫ����:0x2020����ֵ:0x00000000�����:32
 �Ĵ���˵��: trace ����Ĵ���
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
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_TRACEALARMCLR_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_TRACEALARMCLR_trace_alarm_clr_START  (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_TRACEALARMCLR_trace_alarm_clr_END    (4)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_MEDIA_BUS_PACKET_STATPERIOD_UNION
 �ṹ˵��  : MEDIA_BUS_PACKET_STATPERIOD �Ĵ����ṹ���塣��ַƫ����:0x2024����ֵ:0x00000000�����:32
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
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_STATPERIOD_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_STATPERIOD_stat_period_START  (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_STATPERIOD_stat_period_END    (4)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_MEDIA_BUS_PACKET_STATGO_UNION
 �ṹ˵��  : MEDIA_BUS_PACKET_STATGO �Ĵ����ṹ���塣��ַƫ����:0x2028����ֵ:0x00000000�����:32
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
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_STATGO_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_STATGO_stat_go_START   (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_STATGO_stat_go_END     (0)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_MEDIA_BUS_PACKET_STATALARMMIN_UNION
 �ṹ˵��  : MEDIA_BUS_PACKET_STATALARMMIN �Ĵ����ṹ���塣��ַƫ����:0x202C����ֵ:0x00000000�����:32
 �Ĵ���˵��: ͳ�Ƽ�����С�澯��ֵ
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  stat_alarm_min : 32; /* bit[0-31]: �����澯�ĵ���ֵ��������һ��ͳ�Ƽ�������ֵС��StatAlarmMin��ֵ���ʹ����澯�Ĵ�����MEDIA_BUS_PACKET_STATALARMSTATU ״̬�Ĵ�����1�� */
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_STATALARMMIN_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_STATALARMMIN_stat_alarm_min_START  (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_STATALARMMIN_stat_alarm_min_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_MEDIA_BUS_PACKET_STATALARMMAX_UNION
 �ṹ˵��  : MEDIA_BUS_PACKET_STATALARMMAX �Ĵ����ṹ���塣��ַƫ����:0x2030����ֵ:0x00000000�����:32
 �Ĵ���˵��: ͳ�Ƽ��������澯��ֵ
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  stat_alarm_max : 32; /* bit[0-31]: �����澯�ĸ���ֵ��������һ��ͳ�Ƽ�������ֵ����StatAlarmMax��ֵ���ʹ����澯�Ĵ�����MEDIA_BUS_PACKET_STATALARMSTATU ״̬�Ĵ�����1�� */
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_STATALARMMAX_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_STATALARMMAX_stat_alarm_max_START  (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_STATALARMMAX_stat_alarm_max_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_MEDIA_BUS_PACKET_STATALARMSTATUS_UNION
 �ṹ˵��  : MEDIA_BUS_PACKET_STATALARMSTATUS �Ĵ����ṹ���塣��ַƫ����:0x2034����ֵ:0x00000000�����:32
 �Ĵ���˵��: �澯״̬�Ĵ���
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
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_STATALARMSTATUS_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_STATALARMSTATUS_stat_alarm_status_START  (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_STATALARMSTATUS_stat_alarm_status_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_MEDIA_BUS_PACKET_STATALARMCLR_UNION
 �ṹ˵��  : MEDIA_BUS_PACKET_STATALARMCLR �Ĵ����ṹ���塣��ַƫ����:0x2038����ֵ:0x00000000�����:32
 �Ĵ���˵��: �澯״̬����Ĵ���
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
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_STATALARMCLR_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_STATALARMCLR_stat_alarm_clr_START  (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_STATALARMCLR_stat_alarm_clr_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_MEDIA_BUS_PACKET_STATALARMEN_UNION
 �ṹ˵��  : MEDIA_BUS_PACKET_STATALARMEN �Ĵ����ṹ���塣��ַƫ����:0x203C����ֵ:0x00000001�����:32
 �Ĵ���˵��: �澯״̬ʹ�ܼĴ���
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
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_STATALARMEN_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_STATALARMEN_stat_alarm_en_START  (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_STATALARMEN_stat_alarm_en_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_ROUTEIDBASE_UNION
 �ṹ˵��  : MEDIA_BUS_PACKET_F0_ROUTEIDBASE �Ĵ����ṹ���塣��ַƫ����:0x2044����ֵ:0x00000000�����:32
 �Ĵ���˵��: F0��RouteId������������
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  filters_0_routeid_base : 17; /* bit[0-16] : ͨ������routeId���Թ���master��slave�ķ���ͨ·�ϵ�Packet��
                                                                  [16:14]&#45;->Initiator Flow ID�����ڱ�ʾMaster ID��
                                                                  0: ADE0, 1: ADE1, 2: CFG, 3: ISP, 4: JPU, 5: VPU, 6: VPU_SEC, 7: ������
                                                                  
                                                                  [13:10]&#45;->Target Flow ID�����ڱ�ʾSlave ID��
                                                                  0: APB_ISP, 1: APB_JPU, 2: APB_VPU, 3: AHB_ISP, 4: APB_ADE, 5: APB_G3D, 6: APB_MEDIA_SC, 7: APB_SMMU��8: AX_SMMU, 9: XG2RAM_HARQ, 10: MEDIA_BUS_SERVICE, 11: MEDIA_BUS_SERVICE_VIDEO, Others: ������
                                                                  
                                                                  [9:7]&#45;->Target SubRange����ʾTarget NIU�Ĳ�ͬ�����ַ�Σ�
                                                                  [6:0]&#45;->SeqIds�����ڱ�ʾͬһ������ͨ·�Ĳ�ͬtransaction��ID�����鲻����7bit��Ϊ���������� */
        unsigned int  reserved               : 15; /* bit[17-31]: ���� */
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_ROUTEIDBASE_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_ROUTEIDBASE_filters_0_routeid_base_START  (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_ROUTEIDBASE_filters_0_routeid_base_END    (16)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_ROUTEIDMASK_UNION
 �ṹ˵��  : MEDIA_BUS_PACKET_F0_ROUTEIDMASK �Ĵ����ṹ���塣��ַƫ����:0x2048����ֵ:0x00000000�����:32
 �Ĵ���˵��: F0��RouteId��������Mask����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  filters_0_routeid_mask : 17; /* bit[0-16] : ��RouteIdBase����Mask��
                                                                  ���磺��������Ϊinitiator flow + target flow����ô���ô˼Ĵ�����ֵΪ0x1FC00�� */
        unsigned int  reserved               : 15; /* bit[17-31]: ���� */
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_ROUTEIDMASK_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_ROUTEIDMASK_filters_0_routeid_mask_START  (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_ROUTEIDMASK_filters_0_routeid_mask_END    (16)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_ADDRBASE_LOW_UNION
 �ṹ˵��  : MEDIA_BUS_PACKET_F0_ADDRBASE_LOW �Ĵ����ṹ���塣��ַƫ����:0x204C����ֵ:0x00000000�����:32
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
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_ADDRBASE_LOW_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_ADDRBASE_LOW_filters_0_addrbase_low_START  (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_ADDRBASE_LOW_filters_0_addrbase_low_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_WINDOWSIZE_UNION
 �ṹ˵��  : MEDIA_BUS_PACKET_F0_WINDOWSIZE �Ĵ����ṹ���塣��ַƫ����:0x1054����ֵ:0x00000000�����:32
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
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_WINDOWSIZE_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_WINDOWSIZE_filters_0_window_size_START  (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_WINDOWSIZE_filters_0_window_size_END    (5)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_SECURITYBASE_UNION
 �ṹ˵��  : MEDIA_BUS_PACKET_F0_SECURITYBASE �Ĵ����ṹ���塣��ַƫ����:0x2058����ֵ:0x00000000�����:32
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
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_SECURITYBASE_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_SECURITYBASE_filters_0_security_base_START  (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_SECURITYBASE_filters_0_security_base_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_SECURITYMASK_UNION
 �ṹ˵��  : MEDIA_BUS_PACKET_F0_SECURITYMASK �Ĵ����ṹ���塣��ַƫ����:0x205C����ֵ:0x00000000�����:32
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
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_SECURITYMASK_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_SECURITYMASK_filters_0_security_mask_START  (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_SECURITYMASK_filters_0_security_mask_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_OPCODE_UNION
 �ṹ˵��  : MEDIA_BUS_PACKET_F0_OPCODE �Ĵ����ṹ���塣��ַƫ����:0x2060����ֵ:0x00000000�����:32
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
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_OPCODE_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_OPCODE_rd_en_START     (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_OPCODE_rd_en_END       (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_OPCODE_wr_en_START     (1)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_OPCODE_wr_en_END       (1)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_OPCODE_lock_en_START   (2)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_OPCODE_lock_en_END     (2)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_OPCODE_urg_en_START    (3)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_OPCODE_urg_en_END      (3)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_STATUS_UNION
 �ṹ˵��  : MEDIA_BUS_PACKET_F0_STATUS �Ĵ����ṹ���塣��ַƫ����:0x2064����ֵ:0x00000000�����:32
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
                                                   1&#45;->ѡ��ͳ��response packet�� */
        unsigned int  reserved : 30; /* bit[2-31]: ���� */
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_STATUS_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_STATUS_req_en_START    (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_STATUS_req_en_END      (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_STATUS_rsp_en_START    (1)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_STATUS_rsp_en_END      (1)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_LENGTH_UNION
 �ṹ˵��  : MEDIA_BUS_PACKET_F0_LENGTH �Ĵ����ṹ���塣��ַƫ����:0x2068����ֵ:0x00000000�����:32
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
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_LENGTH_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_LENGTH_filters_0_length_START  (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_LENGTH_filters_0_length_END    (3)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_URGENCY_UNION
 �ṹ˵��  : MEDIA_BUS_PACKET_F0_URGENCY �Ĵ����ṹ���塣��ַƫ����:0x206C����ֵ:0x00000000�����:32
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
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_URGENCY_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_URGENCY_filters_0_urgency_START  (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_URGENCY_filters_0_urgency_END    (2)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_USERBASE_UNION
 �ṹ˵��  : MEDIA_BUS_PACKET_F0_USERBASE �Ĵ����ṹ���塣��ַƫ����:0x2070����ֵ:0x00000000�����:32
 �Ĵ���˵��: F0��User��������
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  filters_0_user_base : 3;  /* bit[0-2] : User�źŹ������� */
        unsigned int  reserved            : 29; /* bit[3-31]: ���� */
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_USERBASE_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_USERBASE_filters_0_user_base_START  (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_USERBASE_filters_0_user_base_END    (2)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_USERMASK_UNION
 �ṹ˵��  : MEDIA_BUS_PACKET_F0_USERMASK �Ĵ����ṹ���塣��ַƫ����:0x2074����ֵ:0x00000000�����:32
 �Ĵ���˵��: F0��User��������Mask
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  filters_0_user_mask : 3;  /* bit[0-2] : ��UserBase����Mask��ѡ��UserBase�е����⼸bit User�ź���Ϊ����������
                                                              ����������packet.User &amp; UserMask = UserBase &amp; UserMask�� */
        unsigned int  reserved            : 29; /* bit[3-31]: ���� */
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_USERMASK_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_USERMASK_filters_0_user_mask_START  (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F0_USERMASK_filters_0_user_mask_END    (2)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_ROUTEIDBASE_UNION
 �ṹ˵��  : MEDIA_BUS_PACKET_F1_ROUTEIDBASE �Ĵ����ṹ���塣��ַƫ����:0x2080����ֵ:0x00000000�����:32
 �Ĵ���˵��: F1��RouteId������������
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  filters_1_routeid_base : 17; /* bit[0-16] : ͨ������routeId���Թ���master��slave�ķ���ͨ·�ϵ�Packet��
                                                                  [16:14]&#45;->Initiator Flow ID�����ڱ�ʾMaster ID��
                                                                  0: ADE0, 1: ADE1, 2: CFG, 3: ISP, 4: JPU, 5: VPU, 6: VPU_SEC, 7: ������
                                                                  
                                                                  [13:10]&#45;->Target Flow ID�����ڱ�ʾSlave ID��
                                                                  0: APB_ISP, 1: APB_JPU, 2: APB_VPU, 3: AHB_ISP, 4: APB_ADE, 5: APB_G3D, 6: APB_MEDIA_SC, 7: APB_SMMU��8: AX_SMMU, 9: XG2RAM_HARQ, 10: MEDIA_BUS_SERVICE, 11: MEDIA_BUS_SERVICE_VIDEO, Others: ������
                                                                  
                                                                  [9:7]&#45;->Target SubRange����ʾTarget NIU�Ĳ�ͬ�����ַ�Σ�
                                                                  [6:0]&#45;->SeqIds�����ڱ�ʾͬһ������ͨ·�Ĳ�ͬtransaction��ID�����鲻����7bit��Ϊ���������� */
        unsigned int  reserved               : 15; /* bit[17-31]: ���� */
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_ROUTEIDBASE_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_ROUTEIDBASE_filters_1_routeid_base_START  (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_ROUTEIDBASE_filters_1_routeid_base_END    (16)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_ROUTEIDMASK_UNION
 �ṹ˵��  : MEDIA_BUS_PACKET_F1_ROUTEIDMASK �Ĵ����ṹ���塣��ַƫ����:0x2084����ֵ:0x00000000�����:32
 �Ĵ���˵��: F1��RouteId��������Mask����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  filters_1_routeid_mask : 17; /* bit[0-16] : ��RouteIdBase����Mask��
                                                                  ���磺��������Ϊinitiator flow + target flow����ô���ô˼Ĵ�����ֵΪ0x1FC00�� */
        unsigned int  reserved               : 15; /* bit[17-31]: ���� */
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_ROUTEIDMASK_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_ROUTEIDMASK_filters_1_routeid_mask_START  (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_ROUTEIDMASK_filters_1_routeid_mask_END    (16)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_ADDRBASE_LOW_UNION
 �ṹ˵��  : MEDIA_BUS_PACKET_F1_ADDRBASE_LOW �Ĵ����ṹ���塣��ַƫ����:0x2088����ֵ:0x00000000�����:32
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
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_ADDRBASE_LOW_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_ADDRBASE_LOW_filters_1_addrbase_low_START  (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_ADDRBASE_LOW_filters_1_addrbase_low_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_WINDOWSIZE_UNION
 �ṹ˵��  : MEDIA_BUS_PACKET_F1_WINDOWSIZE �Ĵ����ṹ���塣��ַƫ����:0x2090����ֵ:0x00000000�����:32
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
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_WINDOWSIZE_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_WINDOWSIZE_filters_1_window_size_START  (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_WINDOWSIZE_filters_1_window_size_END    (5)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_SECURITYBASE_UNION
 �ṹ˵��  : MEDIA_BUS_PACKET_F1_SECURITYBASE �Ĵ����ṹ���塣��ַƫ����:0x2094����ֵ:0x00000000�����:32
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
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_SECURITYBASE_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_SECURITYBASE_filters_1_security_base_START  (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_SECURITYBASE_filters_1_security_base_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_SECURITYMASK_UNION
 �ṹ˵��  : MEDIA_BUS_PACKET_F1_SECURITYMASK �Ĵ����ṹ���塣��ַƫ����:0x2098����ֵ:0x00000000�����:32
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
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_SECURITYMASK_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_SECURITYMASK_filters_1_security_mask_START  (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_SECURITYMASK_filters_1_security_mask_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_OPCODE_UNION
 �ṹ˵��  : MEDIA_BUS_PACKET_F1_OPCODE �Ĵ����ṹ���塣��ַƫ����:0x209C����ֵ:0x00000000�����:32
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
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_OPCODE_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_OPCODE_rd_en_START     (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_OPCODE_rd_en_END       (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_OPCODE_wr_en_START     (1)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_OPCODE_wr_en_END       (1)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_OPCODE_lock_en_START   (2)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_OPCODE_lock_en_END     (2)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_OPCODE_urg_en_START    (3)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_OPCODE_urg_en_END      (3)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_STATUS_UNION
 �ṹ˵��  : MEDIA_BUS_PACKET_F1_STATUS �Ĵ����ṹ���塣��ַƫ����:0x20A0����ֵ:0x00000000�����:32
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
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_STATUS_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_STATUS_req_en_START    (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_STATUS_req_en_END      (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_STATUS_rsp_en_START    (1)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_STATUS_rsp_en_END      (1)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_LENGTH_UNION
 �ṹ˵��  : MEDIA_BUS_PACKET_F1_LENGTH �Ĵ����ṹ���塣��ַƫ����:0x20A4����ֵ:0x00000000�����:32
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
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_LENGTH_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_LENGTH_filters_1_length_START  (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_LENGTH_filters_1_length_END    (3)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_URGENCY_UNION
 �ṹ˵��  : MEDIA_BUS_PACKET_F1_URGENCY �Ĵ����ṹ���塣��ַƫ����:0x20A8����ֵ:0x00000000�����:32
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
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_URGENCY_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_URGENCY_filters_1_urgency_START  (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_URGENCY_filters_1_urgency_END    (2)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_USERBASE_UNION
 �ṹ˵��  : MEDIA_BUS_PACKET_F1_USERBASE �Ĵ����ṹ���塣��ַƫ����:0x20AC����ֵ:0x00000000�����:32
 �Ĵ���˵��: F1��User��������
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  filters_1_userbase : 3;  /* bit[0-2] : User�źŹ������� */
        unsigned int  reserved           : 29; /* bit[3-31]: ���� */
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_USERBASE_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_USERBASE_filters_1_userbase_START  (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_USERBASE_filters_1_userbase_END    (2)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_USERMASK_UNION
 �ṹ˵��  : MEDIA_BUS_PACKET_F1_USERMASK �Ĵ����ṹ���塣��ַƫ����:0x20B0����ֵ:0x00000000�����:32
 �Ĵ���˵��: F1��User��������Mask
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  filters_1_usermask : 3;  /* bit[0-2] : ��UserBase����Mask��ѡ��UserBase�е����⼸bit User�ź���Ϊ����������
                                                             ����������packet.User &amp; UserMask = UserBase &amp; UserMask�� */
        unsigned int  reserved           : 29; /* bit[3-31]: ���� */
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_USERMASK_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_USERMASK_filters_1_usermask_START  (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F1_USERMASK_filters_1_usermask_END    (2)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_ROUTEIDBASE_UNION
 �ṹ˵��  : MEDIA_BUS_PACKET_F2_ROUTEIDBASE �Ĵ����ṹ���塣��ַƫ����:0x20BC����ֵ:0x00000000�����:32
 �Ĵ���˵��: F2��RouteId������������
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  filters_2_routeid_base : 17; /* bit[0-16] : ͨ������routeId���Թ���master��slave�ķ���ͨ·�ϵ�Packet��
                                                                  [16:14]&#45;->Initiator Flow ID�����ڱ�ʾMaster ID��
                                                                  0: ADE0, 1: ADE1, 2: CFG, 3: ISP, 4: JPU, 5: VPU, 6: VPU_SEC, 7: ������
                                                                  
                                                                  [13:10]&#45;->Target Flow ID�����ڱ�ʾSlave ID��
                                                                  0: APB_ISP, 1: APB_JPU, 2: APB_VPU, 3: AHB_ISP, 4: APB_ADE, 5: APB_G3D, 6: APB_MEDIA_SC, 7: APB_SMMU��8: AX_SMMU, 9: XG2RAM_HARQ, 10: MEDIA_BUS_SERVICE, 11: MEDIA_BUS_SERVICE_VIDEO, Others: ������
                                                                  
                                                                  [9:7]&#45;->Target SubRange����ʾTarget NIU�Ĳ�ͬ�����ַ�Σ�
                                                                  [6:0]&#45;->SeqIds�����ڱ�ʾͬһ������ͨ·�Ĳ�ͬtransaction��ID�����鲻����7bit��Ϊ���������� */
        unsigned int  reserved               : 15; /* bit[17-31]: ���� */
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_ROUTEIDBASE_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_ROUTEIDBASE_filters_2_routeid_base_START  (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_ROUTEIDBASE_filters_2_routeid_base_END    (16)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_ROUTEIDMASK_UNION
 �ṹ˵��  : MEDIA_BUS_PACKET_F2_ROUTEIDMASK �Ĵ����ṹ���塣��ַƫ����:0x20C0����ֵ:0x00000000�����:32
 �Ĵ���˵��: F2��RouteId��������Mask����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  filters_2_routeid_mask : 17; /* bit[0-16] : ��RouteIdBase����Mask��
                                                                  ���磺��������Ϊinitiator flow + target flow����ô���ô˼Ĵ�����ֵΪ0x1FC00�� */
        unsigned int  reserved               : 15; /* bit[17-31]: ���� */
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_ROUTEIDMASK_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_ROUTEIDMASK_filters_2_routeid_mask_START  (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_ROUTEIDMASK_filters_2_routeid_mask_END    (16)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_ADDRBASE_LOW_UNION
 �ṹ˵��  : MEDIA_BUS_PACKET_F2_ADDRBASE_LOW �Ĵ����ṹ���塣��ַƫ����:0x20C4����ֵ:0x00000000�����:32
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
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_ADDRBASE_LOW_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_ADDRBASE_LOW_filters_2_addrbase_low_START  (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_ADDRBASE_LOW_filters_2_addrbase_low_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_WINDOWSIZE_UNION
 �ṹ˵��  : MEDIA_BUS_PACKET_F2_WINDOWSIZE �Ĵ����ṹ���塣��ַƫ����:0x20CC����ֵ:0x00000000�����:32
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
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_WINDOWSIZE_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_WINDOWSIZE_filters_2_window_size_START  (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_WINDOWSIZE_filters_2_window_size_END    (5)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_SECURITYBASE_UNION
 �ṹ˵��  : MEDIA_BUS_PACKET_F2_SECURITYBASE �Ĵ����ṹ���塣��ַƫ����:0x20D0����ֵ:0x00000000�����:32
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
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_SECURITYBASE_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_SECURITYBASE_filters_2_security_base_START  (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_SECURITYBASE_filters_2_security_base_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_SECURITYMASK_UNION
 �ṹ˵��  : MEDIA_BUS_PACKET_F2_SECURITYMASK �Ĵ����ṹ���塣��ַƫ����:0x20D4����ֵ:0x00000000�����:32
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
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_SECURITYMASK_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_SECURITYMASK_filters_2_security_mask_START  (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_SECURITYMASK_filters_2_security_mask_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_OPCODE_UNION
 �ṹ˵��  : MEDIA_BUS_PACKET_F2_OPCODE �Ĵ����ṹ���塣��ַƫ����:0x20D8����ֵ:0x00000000�����:32
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
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_OPCODE_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_OPCODE_rd_en_START     (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_OPCODE_rd_en_END       (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_OPCODE_wr_en_START     (1)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_OPCODE_wr_en_END       (1)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_OPCODE_lock_en_START   (2)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_OPCODE_lock_en_END     (2)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_OPCODE_urg_en_START    (3)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_OPCODE_urg_en_END      (3)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_STATUS_UNION
 �ṹ˵��  : MEDIA_BUS_PACKET_F2_STATUS �Ĵ����ṹ���塣��ַƫ����:0x20DC����ֵ:0x00000000�����:32
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
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_STATUS_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_STATUS_req_en_START    (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_STATUS_req_en_END      (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_STATUS_rsp_en_START    (1)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_STATUS_rsp_en_END      (1)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_LENGTH_UNION
 �ṹ˵��  : MEDIA_BUS_PACKET_F2_LENGTH �Ĵ����ṹ���塣��ַƫ����:0x20E0����ֵ:0x00000000�����:32
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
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_LENGTH_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_LENGTH_filters_2_length_START  (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_LENGTH_filters_2_length_END    (3)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_URGENCY_UNION
 �ṹ˵��  : MEDIA_BUS_PACKET_F2_URGENCY �Ĵ����ṹ���塣��ַƫ����:0x20E4����ֵ:0x00000000�����:32
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
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_URGENCY_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_URGENCY_filters_2_urgency_START  (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_URGENCY_filters_2_urgency_END    (2)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_USERBASE_UNION
 �ṹ˵��  : MEDIA_BUS_PACKET_F2_USERBASE �Ĵ����ṹ���塣��ַƫ����:0x20E8����ֵ:0x00000000�����:32
 �Ĵ���˵��: F2��User��������
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  filters_2_userbase : 3;  /* bit[0-2] : User�źŹ������� */
        unsigned int  reserved           : 29; /* bit[3-31]: ���� */
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_USERBASE_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_USERBASE_filters_2_userbase_START  (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_USERBASE_filters_2_userbase_END    (2)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_USERMASK_UNION
 �ṹ˵��  : MEDIA_BUS_PACKET_F2_USERMASK �Ĵ����ṹ���塣��ַƫ����:0x20EC����ֵ:0x00000000�����:32
 �Ĵ���˵��: F2��User��������Mask
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  filters_2_usermask : 3;  /* bit[0-2] : ��UserBase����Mask��ѡ��UserBase�е����⼸bit User�ź���Ϊ����������
                                                             ����������packet.User &amp; UserMask = UserBase &amp; UserMask�� */
        unsigned int  reserved           : 29; /* bit[3-31]: ���� */
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_USERMASK_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_USERMASK_filters_2_usermask_START  (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F2_USERMASK_filters_2_usermask_END    (2)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_ROUTEIDBASE_UNION
 �ṹ˵��  : MEDIA_BUS_PACKET_F3_ROUTEIDBASE �Ĵ����ṹ���塣��ַƫ����:0x20F8����ֵ:0x00000000�����:32
 �Ĵ���˵��: F3��RouteId������������
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  filters_3_routeid_base : 17; /* bit[0-16] : ͨ������routeId���Թ���master��slave�ķ���ͨ·�ϵ�Packet��
                                                                  [16:14]&#45;->Initiator Flow ID�����ڱ�ʾMaster ID��
                                                                  0: ADE0, 1: ADE1, 2: CFG, 3: ISP, 4: JPU, 5: VPU, 6: VPU_SEC, 7: ������
                                                                  
                                                                  [13:10]&#45;->Target Flow ID�����ڱ�ʾSlave ID��
                                                                  0: APB_ISP, 1: APB_JPU, 2: APB_VPU, 3: AHB_ISP, 4: APB_ADE, 5: APB_G3D, 6: APB_MEDIA_SC, 7: APB_SMMU��8: AX_SMMU, 9: XG2RAM_HARQ, 10: MEDIA_BUS_SERVICE, 11: MEDIA_BUS_SERVICE_VIDEO, Others: ������
                                                                  
                                                                  [9:7]&#45;->Target SubRange����ʾTarget NIU�Ĳ�ͬ�����ַ�Σ�
                                                                  [6:0]&#45;->SeqIds�����ڱ�ʾͬһ������ͨ·�Ĳ�ͬtransaction��ID�����鲻����7bit��Ϊ���������� */
        unsigned int  reserved               : 15; /* bit[17-31]: ���� */
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_ROUTEIDBASE_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_ROUTEIDBASE_filters_3_routeid_base_START  (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_ROUTEIDBASE_filters_3_routeid_base_END    (16)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_ROUTEIDMASK_UNION
 �ṹ˵��  : MEDIA_BUS_PACKET_F3_ROUTEIDMASK �Ĵ����ṹ���塣��ַƫ����:0x20FC����ֵ:0x00000000�����:32
 �Ĵ���˵��: F3��RouteId��������Mask����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  filters_3_routeid_mask : 17; /* bit[0-16] : ��RouteIdBase����Mask��
                                                                  ���磺��������Ϊinitiator flow + target flow����ô���ô˼Ĵ�����ֵΪ0x1FC00�� */
        unsigned int  reserved               : 15; /* bit[17-31]: ���� */
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_ROUTEIDMASK_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_ROUTEIDMASK_filters_3_routeid_mask_START  (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_ROUTEIDMASK_filters_3_routeid_mask_END    (16)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_ADDRBASE_LOW_UNION
 �ṹ˵��  : MEDIA_BUS_PACKET_F3_ADDRBASE_LOW �Ĵ����ṹ���塣��ַƫ����:0x2100����ֵ:0x00000000�����:32
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
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_ADDRBASE_LOW_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_ADDRBASE_LOW_filters_3_addrbase_low_START  (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_ADDRBASE_LOW_filters_3_addrbase_low_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_WINDOWSIZE_UNION
 �ṹ˵��  : MEDIA_BUS_PACKET_F3_WINDOWSIZE �Ĵ����ṹ���塣��ַƫ����:0x2108����ֵ:0x00000000�����:32
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
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_WINDOWSIZE_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_WINDOWSIZE_filters_3_window_size_START  (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_WINDOWSIZE_filters_3_window_size_END    (5)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_SECURITYBASE_UNION
 �ṹ˵��  : MEDIA_BUS_PACKET_F3_SECURITYBASE �Ĵ����ṹ���塣��ַƫ����:0x210C����ֵ:0x00000000�����:32
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
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_SECURITYBASE_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_SECURITYBASE_filters_3_security_base_START  (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_SECURITYBASE_filters_3_security_base_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_SECURITYMASK_UNION
 �ṹ˵��  : MEDIA_BUS_PACKET_F3_SECURITYMASK �Ĵ����ṹ���塣��ַƫ����:0x2110����ֵ:0x00000000�����:32
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
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_SECURITYMASK_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_SECURITYMASK_filters_3_security_mask_START  (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_SECURITYMASK_filters_3_security_mask_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_OPCODE_UNION
 �ṹ˵��  : MEDIA_BUS_PACKET_F3_OPCODE �Ĵ����ṹ���塣��ַƫ����:0x2114����ֵ:0x00000000�����:32
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
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_OPCODE_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_OPCODE_rd_en_START     (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_OPCODE_rd_en_END       (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_OPCODE_wr_en_START     (1)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_OPCODE_wr_en_END       (1)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_OPCODE_lock_en_START   (2)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_OPCODE_lock_en_END     (2)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_OPCODE_urg_en_START    (3)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_OPCODE_urg_en_END      (3)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_STATUS_UNION
 �ṹ˵��  : MEDIA_BUS_PACKET_F3_STATUS �Ĵ����ṹ���塣��ַƫ����:0x2118����ֵ:0x00000000�����:32
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
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_STATUS_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_STATUS_req_en_START    (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_STATUS_req_en_END      (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_STATUS_rsp_en_START    (1)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_STATUS_rsp_en_END      (1)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_LENGTH_UNION
 �ṹ˵��  : MEDIA_BUS_PACKET_F3_LENGTH �Ĵ����ṹ���塣��ַƫ����:0x211C����ֵ:0x00000000�����:32
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
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_LENGTH_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_LENGTH_filters_3_length_START  (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_LENGTH_filters_3_length_END    (3)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_URGENCY_UNION
 �ṹ˵��  : MEDIA_BUS_PACKET_F3_URGENCY �Ĵ����ṹ���塣��ַƫ����:0x2120����ֵ:0x00000000�����:32
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
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_URGENCY_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_URGENCY_filters_3_urgency_START  (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_URGENCY_filters_3_urgency_END    (2)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_USERBASE_UNION
 �ṹ˵��  : MEDIA_BUS_PACKET_F3_USERBASE �Ĵ����ṹ���塣��ַƫ����:0x2124����ֵ:0x00000000�����:32
 �Ĵ���˵��: F3��User��������
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  filters_3_user_base : 3;  /* bit[0-2] : User�źŹ������� */
        unsigned int  reserved            : 29; /* bit[3-31]: ���� */
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_USERBASE_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_USERBASE_filters_3_user_base_START  (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_USERBASE_filters_3_user_base_END    (2)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_USERMASK_UNION
 �ṹ˵��  : MEDIA_BUS_PACKET_F3_USERMASK �Ĵ����ṹ���塣��ַƫ����:0x2128����ֵ:0x00000000�����:32
 �Ĵ���˵��: F3��User��������Mask
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  filters_3_user_mask : 3;  /* bit[0-2] : ��UserBase����Mask��ѡ��UserBase�е����⼸bit User�ź���Ϊ����������
                                                              ����������packet.User &amp; UserMask = UserBase &amp; UserMask�� */
        unsigned int  reserved            : 29; /* bit[3-31]: ���� */
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_USERMASK_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_USERMASK_filters_3_user_mask_START  (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_F3_USERMASK_filters_3_user_mask_END    (2)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_0_SRC_UNION
 �ṹ˵��  : MEDIA_BUS_PACKET_COUNTERS_0_SRC �Ĵ����ṹ���塣��ַƫ����:0x2138����ֵ:0x00000000�����:32
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
                                                    0x0E~0x0F&#45;->������
                                                    0x10&#45;->��counter_2N��counter_2N+1����ͳ�Ƽ��������д�����ֻ�б��Ϊ����ͳ�Ƽ������ɱ���������ֻ�ܽ�����ͳ�Ƽ��������д�����
                                                    0x11&#45;->ͨ��LUT����ͳ��Packet�е���ЧByte������
                                                    0x12&#45;->ͨ��LUT����ͳ��Packet�е�Byte����������ЧByte�������ں�byteenable��д��������
                                                    0x13&#45;->ͨ��filtersx����counters_m_src�е�m������ʱ��filterx��ʾfilter0����counters_m_src�е�m��ż��ʱ��filterx��ʾfilter0������ͳ��Packet�е���ЧByte������
                                                    0x14&#45;->ͨ��filtersx����counters_m_src�е�m������ʱ��filterx��ʾfilter0����counters_m_src�е�m��ż��ʱ��filterx��ʾfilter0������ͳ��Packet�е�Byte����������ЧByte����
                                                    0x15~0x1F&#45;->������
                                                    0x20~0x3F&#45;->������ */
        unsigned int  reserved  : 27; /* bit[5-31]: ���� */
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_0_SRC_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_0_SRC_int_event_START  (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_0_SRC_int_event_END    (4)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_0_ALARMMODE_UNION
 �ṹ˵��  : MEDIA_BUS_PACKET_COUNTERS_0_ALARMMODE �Ĵ����ṹ���塣��ַƫ����:0x213C����ֵ:0x00000000�����:32
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
                                                               0x1&#45;->MIN����statperiod���õ�ͳ�����ڽ�����counter��ֵС��StatAlarmMin�Ĵ�����ֵ����StatAlarmStatusΪ1��
                                                               0x2&#45;->MAX����statperiod���õ�ͳ�����ڽ�����counter��ֵ����StatAlarmMax�Ĵ�����ֵ����StatAlarmStatusΪ1��
                                                               0x3&#45;->MIN_MAX����statperiod���õ�ͳ�����ڽ�����counter��ֵС��StatAlarmMin�Ĵ�����ֵ�����StatAlarmMax�Ĵ�����ֵ����StatAlarmStatusΪ1�� */
        unsigned int  reserved             : 30; /* bit[2-31]: ���� */
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_0_ALARMMODE_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_0_ALARMMODE_counters_0_alarmmode_START  (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_0_ALARMMODE_counters_0_alarmmode_END    (1)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_0_VAL_UNION
 �ṹ˵��  : MEDIA_BUS_PACKET_COUNTERS_0_VAL �Ĵ����ṹ���塣��ַƫ����:0x2140����ֵ:0x00000000�����:32
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
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_0_VAL_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_0_VAL_counters_0_val_START  (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_0_VAL_counters_0_val_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_1_SRC_UNION
 �ṹ˵��  : MEDIA_BUS_PACKET_COUNTERS_1_SRC �Ĵ����ṹ���塣��ַƫ����:0x214C����ֵ:0x00000000�����:32
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
                                                    0x0E~0x0F&#45;->������
                                                    0x10&#45;->��counter_2N��counter_2N+1����ͳ�Ƽ��������д�����ֻ�б��Ϊ����ͳ�Ƽ������ɱ���������ֻ�ܽ�����ͳ�Ƽ��������д�����
                                                    0x11&#45;->ͨ��LUT����ͳ��Packet�е���ЧByte������
                                                    0x12&#45;->ͨ��LUT����ͳ��Packet�е�Byte����������ЧByte�������ں�byteenable��д��������
                                                    0x13&#45;->ͨ��filtersx����counters_m_src�е�m������ʱ��filterx��ʾfilter0����counters_m_src�е�m��ż��ʱ��filterx��ʾfilter0������ͳ��Packet�е���ЧByte������
                                                    0x14&#45;->ͨ��filtersx����counters_m_src�е�m������ʱ��filterx��ʾfilter0����counters_m_src�е�m��ż��ʱ��filterx��ʾfilter0������ͳ��Packet�е�Byte����������ЧByte����
                                                    0x15~0x1F&#45;->������
                                                    0x20~0x3F&#45;->������ */
        unsigned int  reserved  : 27; /* bit[5-31]: ���� */
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_1_SRC_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_1_SRC_int_event_START  (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_1_SRC_int_event_END    (4)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_1_ALARMMODE_UNION
 �ṹ˵��  : MEDIA_BUS_PACKET_COUNTERS_1_ALARMMODE �Ĵ����ṹ���塣��ַƫ����:0x2150����ֵ:0x00000000�����:32
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
                                                               0x1&#45;->MIN����statperiod���õ�ͳ�����ڽ�����counter��ֵС��StatAlarmMin�Ĵ�����ֵ����StatAlarmStatusΪ1��
                                                               0x2&#45;->MAX����statperiod���õ�ͳ�����ڽ�����counter��ֵ����StatAlarmMax�Ĵ�����ֵ����StatAlarmStatusΪ1��
                                                               0x3&#45;->MIN_MAX����statperiod���õ�ͳ�����ڽ�����counter��ֵС��StatAlarmMin�Ĵ�����ֵ�����StatAlarmMax�Ĵ�����ֵ����StatAlarmStatusΪ1�� */
        unsigned int  reserved             : 30; /* bit[2-31]: ���� */
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_1_ALARMMODE_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_1_ALARMMODE_counters_1_alarmmode_START  (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_1_ALARMMODE_counters_1_alarmmode_END    (1)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_1_VAL_UNION
 �ṹ˵��  : MEDIA_BUS_PACKET_COUNTERS_1_VAL �Ĵ����ṹ���塣��ַƫ����:0x2154����ֵ:0x00000000�����:32
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
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_1_VAL_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_1_VAL_counters_1_val_START  (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_1_VAL_counters_1_val_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_2_SRC_UNION
 �ṹ˵��  : MEDIA_BUS_PACKET_COUNTERS_2_SRC �Ĵ����ṹ���塣��ַƫ����:0x2160����ֵ:0x00000000�����:32
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
                                                    0x0E~0x0F&#45;->������
                                                    0x10&#45;->��counter_2N��counter_2N+1����ͳ�Ƽ��������д�����ֻ�б��Ϊ����ͳ�Ƽ������ɱ���������ֻ�ܽ�����ͳ�Ƽ��������д�����
                                                    0x11&#45;->ͨ��LUT����ͳ��Packet�е���ЧByte������
                                                    0x12&#45;->ͨ��LUT����ͳ��Packet�е�Byte����������ЧByte�������ں�byteenable��д��������
                                                    0x13&#45;->ͨ��filtersx����counters_m_src�е�m������ʱ��filterx��ʾfilter0����counters_m_src�е�m��ż��ʱ��filterx��ʾfilter0������ͳ��Packet�е���ЧByte������
                                                    0x14&#45;->ͨ��filtersx����counters_m_src�е�m������ʱ��filterx��ʾfilter0����counters_m_src�е�m��ż��ʱ��filterx��ʾfilter0������ͳ��Packet�е�Byte����������ЧByte����
                                                    0x15~0x1F&#45;->������
                                                    0x20~0x3F&#45;->������ */
        unsigned int  reserved  : 27; /* bit[5-31]: ���� */
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_2_SRC_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_2_SRC_int_event_START  (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_2_SRC_int_event_END    (4)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_2_ALARMMODE_UNION
 �ṹ˵��  : MEDIA_BUS_PACKET_COUNTERS_2_ALARMMODE �Ĵ����ṹ���塣��ַƫ����:0x2164����ֵ:0x00000000�����:32
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
                                                               0x1&#45;->MIN����statperiod���õ�ͳ�����ڽ�����counter��ֵС��StatAlarmMin�Ĵ�����ֵ����StatAlarmStatusΪ1��
                                                               0x2&#45;->MAX����statperiod���õ�ͳ�����ڽ�����counter��ֵ����StatAlarmMax�Ĵ�����ֵ����StatAlarmStatusΪ1��
                                                               0x3&#45;->MIN_MAX����statperiod���õ�ͳ�����ڽ�����counter��ֵС��StatAlarmMin�Ĵ�����ֵ�����StatAlarmMax�Ĵ�����ֵ����StatAlarmStatusΪ1�� */
        unsigned int  reserved             : 30; /* bit[2-31]: ���� */
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_2_ALARMMODE_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_2_ALARMMODE_counters_2_alarmmode_START  (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_2_ALARMMODE_counters_2_alarmmode_END    (1)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_2_VAL_UNION
 �ṹ˵��  : MEDIA_BUS_PACKET_COUNTERS_2_VAL �Ĵ����ṹ���塣��ַƫ����:0x2168����ֵ:0x00000000�����:32
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
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_2_VAL_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_2_VAL_counters_2_val_START  (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_2_VAL_counters_2_val_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_3_SRC_UNION
 �ṹ˵��  : MEDIA_BUS_PACKET_COUNTERS_3_SRC �Ĵ����ṹ���塣��ַƫ����:0x2174����ֵ:0x00000000�����:32
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
                                                    0x0E~0x0F&#45;->������
                                                    0x10&#45;->��counter_2N��counter_2N+1����ͳ�Ƽ��������д�����ֻ�б��Ϊ����ͳ�Ƽ������ɱ���������ֻ�ܽ�����ͳ�Ƽ��������д�����
                                                    0x11&#45;->ͨ��LUT����ͳ��Packet�е���ЧByte������
                                                    0x12&#45;->ͨ��LUT����ͳ��Packet�е�Byte����������ЧByte�������ں�byteenable��д��������
                                                    0x13&#45;->ͨ��filtersx����counters_m_src�е�m������ʱ��filterx��ʾfilter0����counters_m_src�е�m��ż��ʱ��filterx��ʾfilter0������ͳ��Packet�е���ЧByte������
                                                    0x14&#45;->ͨ��filtersx����counters_m_src�е�m������ʱ��filterx��ʾfilter0����counters_m_src�е�m��ż��ʱ��filterx��ʾfilter0������ͳ��Packet�е�Byte����������ЧByte����
                                                    0x15~0x1F&#45;->������
                                                    0x20~0x3F&#45;->������ */
        unsigned int  reserved  : 27; /* bit[5-31]: ���� */
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_3_SRC_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_3_SRC_int_event_START  (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_3_SRC_int_event_END    (4)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_3_ALARMMODE_UNION
 �ṹ˵��  : MEDIA_BUS_PACKET_COUNTERS_3_ALARMMODE �Ĵ����ṹ���塣��ַƫ����:0x2178����ֵ:0x00000000�����:32
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
                                                               0x1&#45;->MIN����statperiod���õ�ͳ�����ڽ�����counter��ֵС��StatAlarmMin�Ĵ�����ֵ����StatAlarmStatusΪ1��
                                                               0x2&#45;->MAX����statperiod���õ�ͳ�����ڽ�����counter��ֵ����StatAlarmMax�Ĵ�����ֵ����StatAlarmStatusΪ1��
                                                               0x3&#45;->MIN_MAX����statperiod���õ�ͳ�����ڽ�����counter��ֵС��StatAlarmMin�Ĵ�����ֵ�����StatAlarmMax�Ĵ�����ֵ����StatAlarmStatusΪ1�� */
        unsigned int  reserved             : 30; /* bit[2-31]: ���� */
    } reg;
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_3_ALARMMODE_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_3_ALARMMODE_counters_3_alarmmode_START  (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_3_ALARMMODE_counters_3_alarmmode_END    (1)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_3_VAL_UNION
 �ṹ˵��  : MEDIA_BUS_PACKET_COUNTERS_3_VAL �Ĵ����ṹ���塣��ַƫ����:0x217C����ֵ:0x00000000�����:32
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
} SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_3_VAL_UNION;
#endif
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_3_VAL_counters_3_val_START  (0)
#define SOC_MEDIA_NOC_MEDIA_BUS_PACKET_COUNTERS_3_VAL_counters_3_val_END    (15)




/****************************************************************************
                     (2/2) SERVICE_VIDEO
 ****************************************************************************/
/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_ISP_QOSGENERATOR_ID_COREID_UNION
 �ṹ˵��  : ISP_QOSGENERATOR_ID_COREID �Ĵ����ṹ���塣��ַƫ����:0x0100����ֵ:0xA1726704�����:32
 �Ĵ���˵��: ISP QoS Generator ����ID
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  core_type_id   : 8;  /* bit[0-7] : ISP QoS Generator ����ID */
        unsigned int  core_check_sum : 24; /* bit[8-31]: ISP QoS Generator �Ĳ�������� */
    } reg;
} SOC_MEDIA_NOC_ISP_QOSGENERATOR_ID_COREID_UNION;
#endif
#define SOC_MEDIA_NOC_ISP_QOSGENERATOR_ID_COREID_core_type_id_START    (0)
#define SOC_MEDIA_NOC_ISP_QOSGENERATOR_ID_COREID_core_type_id_END      (7)
#define SOC_MEDIA_NOC_ISP_QOSGENERATOR_ID_COREID_core_check_sum_START  (8)
#define SOC_MEDIA_NOC_ISP_QOSGENERATOR_ID_COREID_core_check_sum_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_ISP_QOSGENERATOR_ID_REVISIONID_UNION
 �ṹ˵��  : ISP_QOSGENERATOR_ID_REVISIONID �Ĵ����ṹ���塣��ַƫ����:0x0104����ֵ:0x012D5300�����:32
 �Ĵ���˵��: ISP QoS Generator���ߴ���汾�Ĵ���
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
} SOC_MEDIA_NOC_ISP_QOSGENERATOR_ID_REVISIONID_UNION;
#endif
#define SOC_MEDIA_NOC_ISP_QOSGENERATOR_ID_REVISIONID_user_id_START     (0)
#define SOC_MEDIA_NOC_ISP_QOSGENERATOR_ID_REVISIONID_user_id_END       (7)
#define SOC_MEDIA_NOC_ISP_QOSGENERATOR_ID_REVISIONID_flexnoc_id_START  (8)
#define SOC_MEDIA_NOC_ISP_QOSGENERATOR_ID_REVISIONID_flexnoc_id_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_ISP_QOSGENERATOR_PRIORITY_UNION
 �ṹ˵��  : ISP_QOSGENERATOR_PRIORITY �Ĵ����ṹ���塣��ַƫ����:0x0108����ֵ:0x80000000�����:32
 �Ĵ���˵��: ISP QoS Generator���ȼ��Ĵ���
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
} SOC_MEDIA_NOC_ISP_QOSGENERATOR_PRIORITY_UNION;
#endif
#define SOC_MEDIA_NOC_ISP_QOSGENERATOR_PRIORITY_p0_START        (0)
#define SOC_MEDIA_NOC_ISP_QOSGENERATOR_PRIORITY_p0_END          (2)
#define SOC_MEDIA_NOC_ISP_QOSGENERATOR_PRIORITY_p1_START        (8)
#define SOC_MEDIA_NOC_ISP_QOSGENERATOR_PRIORITY_p1_END          (10)
#define SOC_MEDIA_NOC_ISP_QOSGENERATOR_PRIORITY_mark_START      (31)
#define SOC_MEDIA_NOC_ISP_QOSGENERATOR_PRIORITY_mark_END        (31)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_ISP_QOSGENERATOR_MODE_UNION
 �ṹ˵��  : ISP_QOSGENERATOR_MODE �Ĵ����ṹ���塣��ַƫ����:0x010C����ֵ:0x00000000�����:32
 �Ĵ���˵��: ISP QoS Generator ģʽ�Ĵ���
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
} SOC_MEDIA_NOC_ISP_QOSGENERATOR_MODE_UNION;
#endif
#define SOC_MEDIA_NOC_ISP_QOSGENERATOR_MODE_mode_START      (0)
#define SOC_MEDIA_NOC_ISP_QOSGENERATOR_MODE_mode_END        (1)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_ISP_QOSGENERATOR_BANDWIDTH_UNION
 �ṹ˵��  : ISP_QOSGENERATOR_BANDWIDTH �Ĵ����ṹ���塣��ַƫ����:0x0110����ֵ:0x00000378�����:32
 �Ĵ���˵��: ISP QoS Generator ������ֵ�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  bandwidth : 13; /* bit[0-12] : ������ֵ */
        unsigned int  reserved  : 19; /* bit[13-31]: ���� */
    } reg;
} SOC_MEDIA_NOC_ISP_QOSGENERATOR_BANDWIDTH_UNION;
#endif
#define SOC_MEDIA_NOC_ISP_QOSGENERATOR_BANDWIDTH_bandwidth_START  (0)
#define SOC_MEDIA_NOC_ISP_QOSGENERATOR_BANDWIDTH_bandwidth_END    (12)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_ISP_QOSGENERATOR_SATURATION_UNION
 �ṹ˵��  : ISP_QOSGENERATOR_SATURATION �Ĵ����ṹ���塣��ַƫ����:0x0114����ֵ:0x00000100�����:32
 �Ĵ���˵��: ISP QoS Generator �������Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  saturation : 10; /* bit[0-9]  : �����������С */
        unsigned int  reserved   : 22; /* bit[10-31]: ���� */
    } reg;
} SOC_MEDIA_NOC_ISP_QOSGENERATOR_SATURATION_UNION;
#endif
#define SOC_MEDIA_NOC_ISP_QOSGENERATOR_SATURATION_saturation_START  (0)
#define SOC_MEDIA_NOC_ISP_QOSGENERATOR_SATURATION_saturation_END    (9)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_ISP_QOSGENERATOR_EXTCONTROL_UNION
 �ṹ˵��  : ISP_QOSGENERATOR_EXTCONTROL �Ĵ����ṹ���塣��ַƫ����:0x0118����ֵ:0x00000000�����:32
 �Ĵ���˵��: ISP QoS Generator�ⲿ���ƼĴ���
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
} SOC_MEDIA_NOC_ISP_QOSGENERATOR_EXTCONTROL_UNION;
#endif
#define SOC_MEDIA_NOC_ISP_QOSGENERATOR_EXTCONTROL_socket_qos_en_START  (0)
#define SOC_MEDIA_NOC_ISP_QOSGENERATOR_EXTCONTROL_socket_qos_en_END    (0)
#define SOC_MEDIA_NOC_ISP_QOSGENERATOR_EXTCONTROL_ext_thr_en_START     (1)
#define SOC_MEDIA_NOC_ISP_QOSGENERATOR_EXTCONTROL_ext_thr_en_END       (1)
#define SOC_MEDIA_NOC_ISP_QOSGENERATOR_EXTCONTROL_int_clk_en_START     (2)
#define SOC_MEDIA_NOC_ISP_QOSGENERATOR_EXTCONTROL_int_clk_en_END       (2)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_JPU_QOSGENERATOR_ID_COREID_UNION
 �ṹ˵��  : JPU_QOSGENERATOR_ID_COREID �Ĵ����ṹ���塣��ַƫ����:0x0200����ֵ:0xBF0A3D04�����:32
 �Ĵ���˵��: JPU QoS Generator ����ID
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  core_type_id   : 8;  /* bit[0-7] : JPU QoS Generator ����ID */
        unsigned int  core_check_sum : 24; /* bit[8-31]: JPU QoS Generator �Ĳ�������� */
    } reg;
} SOC_MEDIA_NOC_JPU_QOSGENERATOR_ID_COREID_UNION;
#endif
#define SOC_MEDIA_NOC_JPU_QOSGENERATOR_ID_COREID_core_type_id_START    (0)
#define SOC_MEDIA_NOC_JPU_QOSGENERATOR_ID_COREID_core_type_id_END      (7)
#define SOC_MEDIA_NOC_JPU_QOSGENERATOR_ID_COREID_core_check_sum_START  (8)
#define SOC_MEDIA_NOC_JPU_QOSGENERATOR_ID_COREID_core_check_sum_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_JPU_QOSGENERATOR_ID_REVISIONID_UNION
 �ṹ˵��  : JPU_QOSGENERATOR_ID_REVISIONID �Ĵ����ṹ���塣��ַƫ����:0x0204����ֵ:0x012D5300�����:32
 �Ĵ���˵��: JPU QoS Generator���ߴ���汾�Ĵ���
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
} SOC_MEDIA_NOC_JPU_QOSGENERATOR_ID_REVISIONID_UNION;
#endif
#define SOC_MEDIA_NOC_JPU_QOSGENERATOR_ID_REVISIONID_user_id_START     (0)
#define SOC_MEDIA_NOC_JPU_QOSGENERATOR_ID_REVISIONID_user_id_END       (7)
#define SOC_MEDIA_NOC_JPU_QOSGENERATOR_ID_REVISIONID_flexnoc_id_START  (8)
#define SOC_MEDIA_NOC_JPU_QOSGENERATOR_ID_REVISIONID_flexnoc_id_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_JPU_QOSGENERATOR_PRIORITY_UNION
 �ṹ˵��  : JPU_QOSGENERATOR_PRIORITY �Ĵ����ṹ���塣��ַƫ����:0x0208����ֵ:0x80000000�����:32
 �Ĵ���˵��: JPU QoS Generator���ȼ��Ĵ���
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
} SOC_MEDIA_NOC_JPU_QOSGENERATOR_PRIORITY_UNION;
#endif
#define SOC_MEDIA_NOC_JPU_QOSGENERATOR_PRIORITY_p0_START        (0)
#define SOC_MEDIA_NOC_JPU_QOSGENERATOR_PRIORITY_p0_END          (2)
#define SOC_MEDIA_NOC_JPU_QOSGENERATOR_PRIORITY_p1_START        (8)
#define SOC_MEDIA_NOC_JPU_QOSGENERATOR_PRIORITY_p1_END          (10)
#define SOC_MEDIA_NOC_JPU_QOSGENERATOR_PRIORITY_mark_START      (31)
#define SOC_MEDIA_NOC_JPU_QOSGENERATOR_PRIORITY_mark_END        (31)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_JPU_QOSGENERATOR_MODE_UNION
 �ṹ˵��  : JPU_QOSGENERATOR_MODE �Ĵ����ṹ���塣��ַƫ����:0x020C����ֵ:0x00000000�����:32
 �Ĵ���˵��: JPU QoS Generator ģʽ�Ĵ���
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
} SOC_MEDIA_NOC_JPU_QOSGENERATOR_MODE_UNION;
#endif
#define SOC_MEDIA_NOC_JPU_QOSGENERATOR_MODE_mode_START      (0)
#define SOC_MEDIA_NOC_JPU_QOSGENERATOR_MODE_mode_END        (1)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_JPU_QOSGENERATOR_BANDWIDTH_UNION
 �ṹ˵��  : JPU_QOSGENERATOR_BANDWIDTH �Ĵ����ṹ���塣��ַƫ����:0x0210����ֵ:0x000001C7�����:32
 �Ĵ���˵��: JPU QoS Generator ������ֵ�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  bandwidth : 12; /* bit[0-11] : ������ֵ */
        unsigned int  reserved  : 20; /* bit[12-31]: ���� */
    } reg;
} SOC_MEDIA_NOC_JPU_QOSGENERATOR_BANDWIDTH_UNION;
#endif
#define SOC_MEDIA_NOC_JPU_QOSGENERATOR_BANDWIDTH_bandwidth_START  (0)
#define SOC_MEDIA_NOC_JPU_QOSGENERATOR_BANDWIDTH_bandwidth_END    (11)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_JPU_QOSGENERATOR_SATURATION_UNION
 �ṹ˵��  : JPU_QOSGENERATOR_SATURATION �Ĵ����ṹ���塣��ַƫ����:0x0214����ֵ:0x00000080�����:32
 �Ĵ���˵��: JPU QoS Generator �������Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  saturation : 10; /* bit[0-9]  : �����������С */
        unsigned int  reserved   : 22; /* bit[10-31]: ���� */
    } reg;
} SOC_MEDIA_NOC_JPU_QOSGENERATOR_SATURATION_UNION;
#endif
#define SOC_MEDIA_NOC_JPU_QOSGENERATOR_SATURATION_saturation_START  (0)
#define SOC_MEDIA_NOC_JPU_QOSGENERATOR_SATURATION_saturation_END    (9)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_JPU_QOSGENERATOR_EXTCONTROL_UNION
 �ṹ˵��  : JPU_QOSGENERATOR_EXTCONTROL �Ĵ����ṹ���塣��ַƫ����:0x0218����ֵ:0x00000000�����:32
 �Ĵ���˵��: JPU QoS Generator�ⲿ���ƼĴ���
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
} SOC_MEDIA_NOC_JPU_QOSGENERATOR_EXTCONTROL_UNION;
#endif
#define SOC_MEDIA_NOC_JPU_QOSGENERATOR_EXTCONTROL_socket_qos_en_START  (0)
#define SOC_MEDIA_NOC_JPU_QOSGENERATOR_EXTCONTROL_socket_qos_en_END    (0)
#define SOC_MEDIA_NOC_JPU_QOSGENERATOR_EXTCONTROL_ext_thr_en_START     (1)
#define SOC_MEDIA_NOC_JPU_QOSGENERATOR_EXTCONTROL_ext_thr_en_END       (1)
#define SOC_MEDIA_NOC_JPU_QOSGENERATOR_EXTCONTROL_int_clk_en_START     (2)
#define SOC_MEDIA_NOC_JPU_QOSGENERATOR_EXTCONTROL_int_clk_en_END       (2)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_VPU_QOSGENERATOR_ID_COREID_UNION
 �ṹ˵��  : VPU_QOSGENERATOR_ID_COREID �Ĵ����ṹ���塣��ַƫ����:0x0300����ֵ:0xE71E5C04�����:32
 �Ĵ���˵��: VPU QoS Generator ����ID
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  core_type_id   : 8;  /* bit[0-7] : VPU QoS Generator ����ID */
        unsigned int  core_check_sum : 24; /* bit[8-31]: VPU QoS Generator �Ĳ�������� */
    } reg;
} SOC_MEDIA_NOC_VPU_QOSGENERATOR_ID_COREID_UNION;
#endif
#define SOC_MEDIA_NOC_VPU_QOSGENERATOR_ID_COREID_core_type_id_START    (0)
#define SOC_MEDIA_NOC_VPU_QOSGENERATOR_ID_COREID_core_type_id_END      (7)
#define SOC_MEDIA_NOC_VPU_QOSGENERATOR_ID_COREID_core_check_sum_START  (8)
#define SOC_MEDIA_NOC_VPU_QOSGENERATOR_ID_COREID_core_check_sum_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_VPU_QOSGENERATOR_ID_REVISIONID_UNION
 �ṹ˵��  : VPU_QOSGENERATOR_ID_REVISIONID �Ĵ����ṹ���塣��ַƫ����:0x0304����ֵ:0x012D5300�����:32
 �Ĵ���˵��: VPU QoS Generator���ߴ���汾�Ĵ���
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
} SOC_MEDIA_NOC_VPU_QOSGENERATOR_ID_REVISIONID_UNION;
#endif
#define SOC_MEDIA_NOC_VPU_QOSGENERATOR_ID_REVISIONID_user_id_START     (0)
#define SOC_MEDIA_NOC_VPU_QOSGENERATOR_ID_REVISIONID_user_id_END       (7)
#define SOC_MEDIA_NOC_VPU_QOSGENERATOR_ID_REVISIONID_flexnoc_id_START  (8)
#define SOC_MEDIA_NOC_VPU_QOSGENERATOR_ID_REVISIONID_flexnoc_id_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_VPU_QOSGENERATOR_PRIORITY_UNION
 �ṹ˵��  : VPU_QOSGENERATOR_PRIORITY �Ĵ����ṹ���塣��ַƫ����:0x0308����ֵ:0x80000000�����:32
 �Ĵ���˵��: VPU QoS Generator���ȼ��Ĵ���
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
} SOC_MEDIA_NOC_VPU_QOSGENERATOR_PRIORITY_UNION;
#endif
#define SOC_MEDIA_NOC_VPU_QOSGENERATOR_PRIORITY_p0_START        (0)
#define SOC_MEDIA_NOC_VPU_QOSGENERATOR_PRIORITY_p0_END          (2)
#define SOC_MEDIA_NOC_VPU_QOSGENERATOR_PRIORITY_p1_START        (8)
#define SOC_MEDIA_NOC_VPU_QOSGENERATOR_PRIORITY_p1_END          (10)
#define SOC_MEDIA_NOC_VPU_QOSGENERATOR_PRIORITY_mark_START      (31)
#define SOC_MEDIA_NOC_VPU_QOSGENERATOR_PRIORITY_mark_END        (31)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_VPU_QOSGENERATOR_MODE_UNION
 �ṹ˵��  : VPU_QOSGENERATOR_MODE �Ĵ����ṹ���塣��ַƫ����:0x030C����ֵ:0x00000000�����:32
 �Ĵ���˵��: VPU QoS Generator ģʽ�Ĵ���
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
} SOC_MEDIA_NOC_VPU_QOSGENERATOR_MODE_UNION;
#endif
#define SOC_MEDIA_NOC_VPU_QOSGENERATOR_MODE_mode_START      (0)
#define SOC_MEDIA_NOC_VPU_QOSGENERATOR_MODE_mode_END        (1)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_VPU_QOSGENERATOR_BANDWIDTH_UNION
 �ṹ˵��  : VPU_QOSGENERATOR_BANDWIDTH �Ĵ����ṹ���塣��ַƫ����:0x0310����ֵ:0x0000016C�����:32
 �Ĵ���˵��: VPU QoS Generator ������ֵ�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  bandwidth : 12; /* bit[0-11] : ������ֵ */
        unsigned int  reserved  : 20; /* bit[12-31]: ���� */
    } reg;
} SOC_MEDIA_NOC_VPU_QOSGENERATOR_BANDWIDTH_UNION;
#endif
#define SOC_MEDIA_NOC_VPU_QOSGENERATOR_BANDWIDTH_bandwidth_START  (0)
#define SOC_MEDIA_NOC_VPU_QOSGENERATOR_BANDWIDTH_bandwidth_END    (11)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_VPU_QOSGENERATOR_SATURATION_UNION
 �ṹ˵��  : VPU_QOSGENERATOR_SATURATION �Ĵ����ṹ���塣��ַƫ����:0x0314����ֵ:0x00000080�����:32
 �Ĵ���˵��: VPU QoS Generator �������Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  saturation : 10; /* bit[0-9]  : �����������С */
        unsigned int  reserved   : 22; /* bit[10-31]: ���� */
    } reg;
} SOC_MEDIA_NOC_VPU_QOSGENERATOR_SATURATION_UNION;
#endif
#define SOC_MEDIA_NOC_VPU_QOSGENERATOR_SATURATION_saturation_START  (0)
#define SOC_MEDIA_NOC_VPU_QOSGENERATOR_SATURATION_saturation_END    (9)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_VPU_QOSGENERATOR_EXTCONTROL_UNION
 �ṹ˵��  : VPU_QOSGENERATOR_EXTCONTROL �Ĵ����ṹ���塣��ַƫ����:0x0318����ֵ:0x00000000�����:32
 �Ĵ���˵��: VPU QoS Generator�ⲿ���ƼĴ���
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
} SOC_MEDIA_NOC_VPU_QOSGENERATOR_EXTCONTROL_UNION;
#endif
#define SOC_MEDIA_NOC_VPU_QOSGENERATOR_EXTCONTROL_socket_qos_en_START  (0)
#define SOC_MEDIA_NOC_VPU_QOSGENERATOR_EXTCONTROL_socket_qos_en_END    (0)
#define SOC_MEDIA_NOC_VPU_QOSGENERATOR_EXTCONTROL_ext_thr_en_START     (1)
#define SOC_MEDIA_NOC_VPU_QOSGENERATOR_EXTCONTROL_ext_thr_en_END       (1)
#define SOC_MEDIA_NOC_VPU_QOSGENERATOR_EXTCONTROL_int_clk_en_START     (2)
#define SOC_MEDIA_NOC_VPU_QOSGENERATOR_EXTCONTROL_int_clk_en_END       (2)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_ID_COREID_UNION
 �ṹ˵��  : VPU_SEC_QOSGENERATOR_ID_COREID �Ĵ����ṹ���塣��ַƫ����:0x0400����ֵ:0x3F31B604�����:32
 �Ĵ���˵��: VPU_SEC QoS Generator ����ID
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  core_type_id   : 8;  /* bit[0-7] : VPU_SEC QoS Generator ����ID */
        unsigned int  core_check_sum : 24; /* bit[8-31]: VPU_SEC QoS Generator �Ĳ�������� */
    } reg;
} SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_ID_COREID_UNION;
#endif
#define SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_ID_COREID_core_type_id_START    (0)
#define SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_ID_COREID_core_type_id_END      (7)
#define SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_ID_COREID_core_check_sum_START  (8)
#define SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_ID_COREID_core_check_sum_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_ID_REVISIONID_UNION
 �ṹ˵��  : VPU_SEC_QOSGENERATOR_ID_REVISIONID �Ĵ����ṹ���塣��ַƫ����:0x0404����ֵ:0x012D5300�����:32
 �Ĵ���˵��: VPU_SEC QoS Generator���ߴ���汾�Ĵ���
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
} SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_ID_REVISIONID_UNION;
#endif
#define SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_ID_REVISIONID_user_id_START     (0)
#define SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_ID_REVISIONID_user_id_END       (7)
#define SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_ID_REVISIONID_flexnoc_id_START  (8)
#define SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_ID_REVISIONID_flexnoc_id_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_PRIORITY_UNION
 �ṹ˵��  : VPU_SEC_QOSGENERATOR_PRIORITY �Ĵ����ṹ���塣��ַƫ����:0x0408����ֵ:0x80000000�����:32
 �Ĵ���˵��: VPU_SEC QoS Generator���ȼ��Ĵ���
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
} SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_PRIORITY_UNION;
#endif
#define SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_PRIORITY_p0_START        (0)
#define SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_PRIORITY_p0_END          (2)
#define SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_PRIORITY_p1_START        (8)
#define SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_PRIORITY_p1_END          (10)
#define SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_PRIORITY_mark_START      (31)
#define SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_PRIORITY_mark_END        (31)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_MODE_UNION
 �ṹ˵��  : VPU_SEC_QOSGENERATOR_MODE �Ĵ����ṹ���塣��ַƫ����:0x040C����ֵ:0x00000000�����:32
 �Ĵ���˵��: VPU_SEC QoS Generator ģʽ�Ĵ���
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
} SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_MODE_UNION;
#endif
#define SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_MODE_mode_START      (0)
#define SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_MODE_mode_END        (1)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_BANDWIDTH_UNION
 �ṹ˵��  : VPU_SEC_QOSGENERATOR_BANDWIDTH �Ĵ����ṹ���塣��ַƫ����:0x0410����ֵ:0x0000016C�����:32
 �Ĵ���˵��: VPU_SEC QoS Generator ������ֵ�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  bandwidth : 12; /* bit[0-11] : ������ֵ */
        unsigned int  reserved  : 20; /* bit[12-31]: ���� */
    } reg;
} SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_BANDWIDTH_UNION;
#endif
#define SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_BANDWIDTH_bandwidth_START  (0)
#define SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_BANDWIDTH_bandwidth_END    (11)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_SATURATION_UNION
 �ṹ˵��  : VPU_SEC_QOSGENERATOR_SATURATION �Ĵ����ṹ���塣��ַƫ����:0x0414����ֵ:0x00000080�����:32
 �Ĵ���˵��: VPU_SEC QoS Generator �������Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  saturation : 10; /* bit[0-9]  : �����������С */
        unsigned int  reserved   : 22; /* bit[10-31]: ���� */
    } reg;
} SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_SATURATION_UNION;
#endif
#define SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_SATURATION_saturation_START  (0)
#define SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_SATURATION_saturation_END    (9)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_EXTCONTROL_UNION
 �ṹ˵��  : VPU_SEC_QOSGENERATOR_EXTCONTROL �Ĵ����ṹ���塣��ַƫ����:0x0418����ֵ:0x00000000�����:32
 �Ĵ���˵��: VPU_SEC QoS Generator�ⲿ���ƼĴ���
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
} SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_EXTCONTROL_UNION;
#endif
#define SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_EXTCONTROL_socket_qos_en_START  (0)
#define SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_EXTCONTROL_socket_qos_en_END    (0)
#define SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_EXTCONTROL_ext_thr_en_START     (1)
#define SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_EXTCONTROL_ext_thr_en_END       (1)
#define SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_EXTCONTROL_int_clk_en_START     (2)
#define SOC_MEDIA_NOC_VPU_SEC_QOSGENERATOR_EXTCONTROL_int_clk_en_END       (2)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_VIDEO_ADAPTER_ID_COREID_UNION
 �ṹ˵��  : VIDEO_ADAPTER_ID_COREID �Ĵ����ṹ���塣��ַƫ����:0x1000����ֵ:0x7714BE01�����:32
 �Ĵ���˵��: VIDEO adapter��ID
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  core_type_id   : 8;  /* bit[0-7] : ����SMMUͨ·��RateAdapter����ID */
        unsigned int  core_check_sum : 24; /* bit[8-31]: ����SMMUͨ·��RateAdapter�Ĳ�������� */
    } reg;
} SOC_MEDIA_NOC_VIDEO_ADAPTER_ID_COREID_UNION;
#endif
#define SOC_MEDIA_NOC_VIDEO_ADAPTER_ID_COREID_core_type_id_START    (0)
#define SOC_MEDIA_NOC_VIDEO_ADAPTER_ID_COREID_core_type_id_END      (7)
#define SOC_MEDIA_NOC_VIDEO_ADAPTER_ID_COREID_core_check_sum_START  (8)
#define SOC_MEDIA_NOC_VIDEO_ADAPTER_ID_COREID_core_check_sum_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_VIDEO_ADAPTER_ID_REVISIONID_UNION
 �ṹ˵��  : VIDEO_ADAPTER_ID_REVISIONID �Ĵ����ṹ���塣��ַƫ����:0x1004����ֵ:0x012D5300�����:32
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
} SOC_MEDIA_NOC_VIDEO_ADAPTER_ID_REVISIONID_UNION;
#endif
#define SOC_MEDIA_NOC_VIDEO_ADAPTER_ID_REVISIONID_user_id_START     (0)
#define SOC_MEDIA_NOC_VIDEO_ADAPTER_ID_REVISIONID_user_id_END       (7)
#define SOC_MEDIA_NOC_VIDEO_ADAPTER_ID_REVISIONID_flexnoc_id_START  (8)
#define SOC_MEDIA_NOC_VIDEO_ADAPTER_ID_REVISIONID_flexnoc_id_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_VIDEO_ADAPTER_RATE_UNION
 �ṹ˵��  : VIDEO_ADAPTER_RATE �Ĵ����ṹ���塣��ַƫ����:0x1008����ֵ:0x00000000�����:32
 �Ĵ���˵��: VIDEO Rate Adapter���üĴ���
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
} SOC_MEDIA_NOC_VIDEO_ADAPTER_RATE_UNION;
#endif
#define SOC_MEDIA_NOC_VIDEO_ADAPTER_RATE_rate_START      (0)
#define SOC_MEDIA_NOC_VIDEO_ADAPTER_RATE_rate_END        (9)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_NOC_VIDEO_ADAPTER_BYPASS_UNION
 �ṹ˵��  : VIDEO_ADAPTER_BYPASS �Ĵ����ṹ���塣��ַƫ����:0x100C����ֵ:0x00000000�����:32
 �Ĵ���˵��: bypass VIDEO Rate Adapter
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  bypass   : 1;  /* bit[0]   : bypass VIDEO Rate Adapter */
        unsigned int  reserved : 31; /* bit[1-31]: ���� */
    } reg;
} SOC_MEDIA_NOC_VIDEO_ADAPTER_BYPASS_UNION;
#endif
#define SOC_MEDIA_NOC_VIDEO_ADAPTER_BYPASS_bypass_START    (0)
#define SOC_MEDIA_NOC_VIDEO_ADAPTER_BYPASS_bypass_END      (0)






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

#endif /* end of soc_media_noC_interface.h */
