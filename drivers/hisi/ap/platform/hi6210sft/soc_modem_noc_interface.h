

/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/

#ifndef __SOC_MODEM_NOC_INTERFACE_H__
#define __SOC_MODEM_NOC_INTERFACE_H__

#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif



/*****************************************************************************
  2 �궨��
*****************************************************************************/

/****************************************************************************
                     (1/1) SERVICE
 ****************************************************************************/
/* �Ĵ���˵����MDMNOC Err probe��ID
   λ����UNION�ṹ:  SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ID_COREID_UNION */
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ID_COREID_ADDR(base) ((base) + (0x0000))

/* �Ĵ���˵�������ߴ���汾�Ĵ���
   λ����UNION�ṹ:  SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ID_REVISIONID_UNION */
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ID_REVISIONID_ADDR(base) ((base) + (0x0004))

/* �Ĵ���˵����MDMNOC Err probeʹ��
   λ����UNION�ṹ:  SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_FAULTEN_UNION */
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_FAULTEN_ADDR(base) ((base) + (0x0008))

/* �Ĵ���˵����Error log��Чָʾ�Ĵ���
   λ����UNION�ṹ:  SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ERRVLD_UNION */
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ERRVLD_ADDR(base) ((base) + (0x000C))

/* �Ĵ���˵�����ж�����Ĵ���
   λ����UNION�ṹ:  SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ERRCLR_UNION */
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ERRCLR_ADDR(base) ((base) + (0x0010))

/* �Ĵ���˵����Error log0
   λ����UNION�ṹ:  SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ERRLOG0_UNION */
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ERRLOG0_ADDR(base) ((base) + (0x0014))

/* �Ĵ���˵����Error log1
   λ����UNION�ṹ:  SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ERRLOG1_UNION */
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ERRLOG1_ADDR(base) ((base) + (0x0018))

/* �Ĵ���˵����Error log3
   λ����UNION�ṹ:  SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ERRLOG3_UNION */
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ERRLOG3_ADDR(base) ((base) + (0x0020))

/* �Ĵ���˵����Error log7
   λ����UNION�ṹ:  SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ERRLOG7_UNION */
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ERRLOG7_ADDR(base) ((base) + (0x0030))

/* �Ĵ���˵����MDMNOC Err probe��ID
   λ����UNION�ṹ:  SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ID_COREID_UNION */
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ID_COREID_ADDR(base) ((base) + (0x0080))

/* �Ĵ���˵�������ߴ���汾�Ĵ���
   λ����UNION�ṹ:  SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ID_REVISIONID_UNION */
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ID_REVISIONID_ADDR(base) ((base) + (0x0084))

/* �Ĵ���˵����MDMNOC Err probeʹ��
   λ����UNION�ṹ:  SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_FAULTEN_UNION */
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_FAULTEN_ADDR(base) ((base) + (0x0088))

/* �Ĵ���˵����Error log��Чָʾ�Ĵ���
   λ����UNION�ṹ:  SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ERRVLD_UNION */
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ERRVLD_ADDR(base) ((base) + (0x008C))

/* �Ĵ���˵�����ж�����Ĵ���
   λ����UNION�ṹ:  SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ERRCLR_UNION */
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ERRCLR_ADDR(base) ((base) + (0x0090))

/* �Ĵ���˵����Error log0
   λ����UNION�ṹ:  SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ERRLOG0_UNION */
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ERRLOG0_ADDR(base) ((base) + (0x0094))

/* �Ĵ���˵����Error log1
   λ����UNION�ṹ:  SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ERRLOG1_UNION */
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ERRLOG1_ADDR(base) ((base) + (0x0098))

/* �Ĵ���˵����Error log3
   λ����UNION�ṹ:  SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ERRLOG3_UNION */
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ERRLOG3_ADDR(base) ((base) + (0x00A0))

/* �Ĵ���˵����Error log7
   λ����UNION�ṹ:  SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ERRLOG7_UNION */
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ERRLOG7_ADDR(base) ((base) + (0x00B0))

/* �Ĵ���˵����BBE16 QoS Generator ����ID
   λ����UNION�ṹ:  SOC_MODEM_NOC_BBE16_QOSGENERATOR_ID_COREID_UNION */
#define SOC_MODEM_NOC_BBE16_QOSGENERATOR_ID_COREID_ADDR(base) ((base) + (0x0100))

/* �Ĵ���˵����BBE16 QoS Generator ���ߴ���汾�Ĵ���
   λ����UNION�ṹ:  SOC_MODEM_NOC_BBE16_QOSGENERATOR_ID_REVISIONID_UNION */
#define SOC_MODEM_NOC_BBE16_QOSGENERATOR_ID_REVISIONID_ADDR(base) ((base) + (0x0104))

/* �Ĵ���˵����BBE16 QoS Generator ���ȼ��Ĵ���
   λ����UNION�ṹ:  SOC_MODEM_NOC_BBE16_QOSGENERATOR_PRIORITY_UNION */
#define SOC_MODEM_NOC_BBE16_QOSGENERATOR_PRIORITY_ADDR(base) ((base) + (0x0108))

/* �Ĵ���˵����BBE16 QoS Generator ģʽ�Ĵ���
   λ����UNION�ṹ:  SOC_MODEM_NOC_BBE16_QOSGENERATOR_MODE_UNION */
#define SOC_MODEM_NOC_BBE16_QOSGENERATOR_MODE_ADDR(base) ((base) + (0x010C))

/* �Ĵ���˵����BBE16 QoS Generator �ⲿ���ƼĴ���
   λ����UNION�ṹ:  SOC_MODEM_NOC_BBE16_QOSGENERATOR_EXTCONTROL_UNION */
#define SOC_MODEM_NOC_BBE16_QOSGENERATOR_EXTCONTROL_ADDR(base) ((base) + (0x0118))





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
                     (1/1) SERVICE
 ****************************************************************************/
/*****************************************************************************
 �ṹ��    : SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ID_COREID_UNION
 �ṹ˵��  : MDMNOC_ERR_PROBE0_ID_COREID �Ĵ����ṹ���塣��ַƫ����:0x0000����ֵ:0xC3DE650D�����:32
 �Ĵ���˵��: MDMNOC Err probe��ID
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  core_type_id_logger0   : 8;  /* bit[0-7] : MDMNOC Err probe����ID */
        unsigned int  core_check_sum_logger0 : 24; /* bit[8-31]: MDMNOC Err probe�Ĳ�������� */
    } reg;
} SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ID_COREID_UNION;
#endif
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ID_COREID_core_type_id_logger0_START    (0)
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ID_COREID_core_type_id_logger0_END      (7)
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ID_COREID_core_check_sum_logger0_START  (8)
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ID_COREID_core_check_sum_logger0_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ID_REVISIONID_UNION
 �ṹ˵��  : MDMNOC_ERR_PROBE0_ID_REVISIONID �Ĵ����ṹ���塣��ַƫ����:0x0004����ֵ:0x012D5300�����:32
 �Ĵ���˵��: ���ߴ���汾�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  user_id_logger0    : 8;  /* bit[0-7] : �û��Զ���ֵ������ IP ��ʹ�� */
        unsigned int  flexnoc_id_logger0 : 24; /* bit[8-31]: ���ߴ���汾�Ĵ��� */
    } reg;
} SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ID_REVISIONID_UNION;
#endif
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ID_REVISIONID_user_id_logger0_START     (0)
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ID_REVISIONID_user_id_logger0_END       (7)
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ID_REVISIONID_flexnoc_id_logger0_START  (8)
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ID_REVISIONID_flexnoc_id_logger0_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_FAULTEN_UNION
 �ṹ˵��  : MDMNOC_ERR_PROBE0_FAULTEN �Ĵ����ṹ���塣��ַƫ����:0x0008����ֵ:0x00000000�����:32
 �Ĵ���˵��: MDMNOC Err probeʹ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  faulten_logger0 : 1;  /* bit[0]   : ʹ������жϣ�����Ч�� */
        unsigned int  reserved        : 31; /* bit[1-31]: ���� */
    } reg;
} SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_FAULTEN_UNION;
#endif
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_FAULTEN_faulten_logger0_START  (0)
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_FAULTEN_faulten_logger0_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ERRVLD_UNION
 �ṹ˵��  : MDMNOC_ERR_PROBE0_ERRVLD �Ĵ����ṹ���塣��ַƫ����:0x000C����ֵ:0x00000000�����:32
 �Ĵ���˵��: Error log��Чָʾ�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  errvld_logger0 : 1;  /* bit[0]   : Error log��Чָʾ״̬�Ĵ���������Ч�� */
        unsigned int  reserved       : 31; /* bit[1-31]: ���� */
    } reg;
} SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ERRVLD_UNION;
#endif
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ERRVLD_errvld_logger0_START  (0)
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ERRVLD_errvld_logger0_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ERRCLR_UNION
 �ṹ˵��  : MDMNOC_ERR_PROBE0_ERRCLR �Ĵ����ṹ���塣��ַƫ����:0x0010����ֵ:0x00000000�����:32
 �Ĵ���˵��: �ж�����Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  errclr_logger0 : 1;  /* bit[0]   : 1.д1'b1����ErrVld�Ĵ���������ж�ʹ�ܣ�ͬʱҲ����жϣ���
                                                         2.д1'b1�����ܴ洢��ErrClr�Ĵ����У����üĴ�������������1'b0�� */
        unsigned int  reserved       : 31; /* bit[1-31]: ���� */
    } reg;
} SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ERRCLR_UNION;
#endif
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ERRCLR_errclr_logger0_START  (0)
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ERRCLR_errclr_logger0_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ERRLOG0_UNION
 �ṹ˵��  : MDMNOC_ERR_PROBE0_ERRLOG0 �Ĵ����ṹ���塣��ַƫ����:0x0014����ֵ:0x80000000�����:32
 �Ĵ���˵��: Error log0
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  lock_logger0    : 1;  /* bit[0]    : ָʾTransaction�Ƿ�ΪLock����������Ч�� */
        unsigned int  opc_logger0     : 4;  /* bit[1-4]  : Transaction�������ͣ�
                                                           0&#45;->RD��INCR��������
                                                           1&#45;->RDW��WRAP��������
                                                           2&#45;->RDL��Exclusive��������
                                                           3&#45;->RDX��Lock��������
                                                           4&#45;->WR��INCRд������
                                                           5&#45;->WRW��WRAPд������
                                                           6&#45;->WRC��Exclusiveд������
                                                           8&#45;->PRE��FIXED BURST��
                                                           9&#45;->URG��urgency packet��Error Probe�����⵽����packet��
                                                           ����&#45;->Reserveed���Ƿ������� */
        unsigned int  reserved_0      : 3;  /* bit[5-7]  : ���� */
        unsigned int  errcode_logger0 : 3;  /* bit[8-10] : �������ͣ�
                                                           0&#45;->������slave����Error Response��
                                                           1&#45;->master���������ߵ�Reserve��ַ�ռ䣻
                                                           2&#45;->master������slave��֧�ֵ�Burst���ͣ���ǰ���߲���������ֳ�������
                                                           3&#45;->master�����˵�������
                                                           4&#45;->����Ȩ�ޱ���
                                                           5&#45;->master����ʱ���յ�Firewall��Hide Error Response��
                                                           6&#45;->������slave TimeOut��������Error Response��
                                                           7&#45;->none�� */
        unsigned int  reserved_1      : 5;  /* bit[11-15]: ���� */
        unsigned int  len1_logger0    : 8;  /* bit[16-23]: ��ʾ����Transaction�İ�������λΪByte */
        unsigned int  reserved_2      : 7;  /* bit[24-30]: ���� */
        unsigned int  format_logger0  : 1;  /* bit[31]   : ���ڱ�ʾError log0�ĸ�ʽ��FlexNoC2.7�Ժ�汾�̶�Ϊ1'b1�� */
    } reg;
} SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ERRLOG0_UNION;
#endif
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ERRLOG0_lock_logger0_START     (0)
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ERRLOG0_lock_logger0_END       (0)
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ERRLOG0_opc_logger0_START      (1)
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ERRLOG0_opc_logger0_END        (4)
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ERRLOG0_errcode_logger0_START  (8)
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ERRLOG0_errcode_logger0_END    (10)
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ERRLOG0_len1_logger0_START     (16)
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ERRLOG0_len1_logger0_END       (23)
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ERRLOG0_format_logger0_START   (31)
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ERRLOG0_format_logger0_END     (31)


/*****************************************************************************
 �ṹ��    : SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ERRLOG1_UNION
 �ṹ˵��  : MDMNOC_ERR_PROBE0_ERRLOG1 �Ĵ����ṹ���塣��ַƫ����:0x0018����ֵ:0x00000000�����:32
 �Ĵ���˵��: Error log1
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  errlog1_logger0 : 17; /* bit[0-16] : NTTP packet header RouteId��·����Ϣ����bit��������
                                                           [16:13]&#45;->Initiator Flow ID�����ڱ�ʾ������ʵ�master��
                                                           [12:9]&#45;->target Flow ID�����ڱ�ʾ�����ʵ�slave��
                                                           [8:5]&#45;->Target SubRange����ʾTarget NIU�Ĳ�ͬ�����ַ�Σ�
                                                           [4:0]&#45;->Seq ID��Transaction��ǣ� */
        unsigned int  reserved        : 15; /* bit[17-31]: ���� */
    } reg;
} SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ERRLOG1_UNION;
#endif
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ERRLOG1_errlog1_logger0_START  (0)
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ERRLOG1_errlog1_logger0_END    (16)


/*****************************************************************************
 �ṹ��    : SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ERRLOG3_UNION
 �ṹ˵��  : MDMNOC_ERR_PROBE0_ERRLOG3 �Ĵ����ṹ���塣��ַƫ����:0x0020����ֵ:0x00000000�����:32
 �Ĵ���˵��: Error log3
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  errlog3_logger0 : 32; /* bit[0-31]: NTTP packet header ��ַ��Ϣ��ƫ�Ƶ�ַ�� */
    } reg;
} SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ERRLOG3_UNION;
#endif
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ERRLOG3_errlog3_logger0_START  (0)
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ERRLOG3_errlog3_logger0_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ERRLOG7_UNION
 �ṹ˵��  : MDMNOC_ERR_PROBE0_ERRLOG7 �Ĵ����ṹ���塣��ַƫ����:0x0030����ֵ:0x00000000�����:32
 �Ĵ���˵��: Error log7
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  errlog7_logger0 : 1;  /* bit[0]   : NTTP packet header ��ȫ�ź�ֵ */
        unsigned int  reserved        : 31; /* bit[1-31]: ���� */
    } reg;
} SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ERRLOG7_UNION;
#endif
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ERRLOG7_errlog7_logger0_START  (0)
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE0_ERRLOG7_errlog7_logger0_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ID_COREID_UNION
 �ṹ˵��  : MDMNOC_ERR_PROBE1_ID_COREID �Ĵ����ṹ���塣��ַƫ����:0x0080����ֵ:0x1A5D840D�����:32
 �Ĵ���˵��: MDMNOC Err probe��ID
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  core_type_id_logger1   : 8;  /* bit[0-7] : MDMNOC Err probe����ID */
        unsigned int  core_check_sum_logger1 : 24; /* bit[8-31]: MDMNOC Err probe�Ĳ�������� */
    } reg;
} SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ID_COREID_UNION;
#endif
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ID_COREID_core_type_id_logger1_START    (0)
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ID_COREID_core_type_id_logger1_END      (7)
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ID_COREID_core_check_sum_logger1_START  (8)
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ID_COREID_core_check_sum_logger1_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ID_REVISIONID_UNION
 �ṹ˵��  : MDMNOC_ERR_PROBE1_ID_REVISIONID �Ĵ����ṹ���塣��ַƫ����:0x0084����ֵ:0x012D5300�����:32
 �Ĵ���˵��: ���ߴ���汾�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  user_id_logger1    : 8;  /* bit[0-7] : �û��Զ���ֵ������ IP ��ʹ�� */
        unsigned int  flexnoc_id_logger1 : 24; /* bit[8-31]: ���ߴ���汾�Ĵ��� */
    } reg;
} SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ID_REVISIONID_UNION;
#endif
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ID_REVISIONID_user_id_logger1_START     (0)
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ID_REVISIONID_user_id_logger1_END       (7)
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ID_REVISIONID_flexnoc_id_logger1_START  (8)
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ID_REVISIONID_flexnoc_id_logger1_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_FAULTEN_UNION
 �ṹ˵��  : MDMNOC_ERR_PROBE1_FAULTEN �Ĵ����ṹ���塣��ַƫ����:0x0088����ֵ:0x00000000�����:32
 �Ĵ���˵��: MDMNOC Err probeʹ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  faulten_logger1 : 1;  /* bit[0]   : ʹ������жϣ�����Ч�� */
        unsigned int  reserved        : 31; /* bit[1-31]: ���� */
    } reg;
} SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_FAULTEN_UNION;
#endif
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_FAULTEN_faulten_logger1_START  (0)
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_FAULTEN_faulten_logger1_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ERRVLD_UNION
 �ṹ˵��  : MDMNOC_ERR_PROBE1_ERRVLD �Ĵ����ṹ���塣��ַƫ����:0x008C����ֵ:0x00000000�����:32
 �Ĵ���˵��: Error log��Чָʾ�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  errvld_logger1 : 1;  /* bit[0]   : Error log��Чָʾ״̬�Ĵ���������Ч�� */
        unsigned int  reserved       : 31; /* bit[1-31]: ���� */
    } reg;
} SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ERRVLD_UNION;
#endif
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ERRVLD_errvld_logger1_START  (0)
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ERRVLD_errvld_logger1_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ERRCLR_UNION
 �ṹ˵��  : MDMNOC_ERR_PROBE1_ERRCLR �Ĵ����ṹ���塣��ַƫ����:0x0090����ֵ:0x00000000�����:32
 �Ĵ���˵��: �ж�����Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  errclr_logger1 : 1;  /* bit[0-0] : 1.д1'b1����ErrVld�Ĵ���������ж�ʹ�ܣ�ͬʱҲ����жϣ���
                                                         2.д1'b1�����ܴ洢��ErrClr�Ĵ����У����üĴ�������������1'b0�� */
        unsigned int  reserved       : 31; /* bit[1-31]: ���� */
    } reg;
} SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ERRCLR_UNION;
#endif
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ERRCLR_errclr_logger1_START  (0)
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ERRCLR_errclr_logger1_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ERRLOG0_UNION
 �ṹ˵��  : MDMNOC_ERR_PROBE1_ERRLOG0 �Ĵ����ṹ���塣��ַƫ����:0x0094����ֵ:0x80000000�����:32
 �Ĵ���˵��: Error log0
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  lock_logger1    : 1;  /* bit[0]    : ָʾTransaction�Ƿ�ΪLock����������Ч�� */
        unsigned int  opc_logger1     : 4;  /* bit[1-4]  : Transaction�������ͣ�
                                                           0&#45;->RD��INCR��������
                                                           1&#45;->RDW��WRAP��������
                                                           2&#45;->RDL��Exclusive��������
                                                           3&#45;->RDX��Lock��������
                                                           4&#45;->WR��INCRд������
                                                           5&#45;->WRW��WRAPд������
                                                           6&#45;->WRC��Exclusiveд������
                                                           8&#45;->PRE��FIXED BURST��
                                                           9&#45;->URG��urgency packet��Error Probe�����⵽����packet��
                                                           ����&#45;->Reserveed���Ƿ������� */
        unsigned int  reserved_0      : 3;  /* bit[5-7]  : ���� */
        unsigned int  errcode_logger1 : 3;  /* bit[8-10] : �������ͣ�
                                                           0&#45;->������slave����Error Response��
                                                           1&#45;->master���������ߵ�Reserve��ַ�ռ䣻
                                                           2&#45;->master������slave��֧�ֵ�Burst���ͣ���ǰ���߲���������ֳ�������
                                                           3&#45;->master�����˵�������
                                                           4&#45;->����Ȩ�ޱ���
                                                           5&#45;->master����ʱ���յ�Firewall��Hide Error Response��
                                                           6&#45;->������slave TimeOut��������Error Response��
                                                           7&#45;->none�� */
        unsigned int  reserved_1      : 5;  /* bit[11-15]: ���� */
        unsigned int  len1_logger1    : 8;  /* bit[16-23]: ��ʾ����Transaction�İ�������λΪByte */
        unsigned int  reserved_2      : 7;  /* bit[24-30]: ���� */
        unsigned int  format_logger1  : 1;  /* bit[31]   : ���ڱ�ʾError log0�ĸ�ʽ��FlexNoC2.7�Ժ�汾�̶�Ϊ1'b1�� */
    } reg;
} SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ERRLOG0_UNION;
#endif
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ERRLOG0_lock_logger1_START     (0)
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ERRLOG0_lock_logger1_END       (0)
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ERRLOG0_opc_logger1_START      (1)
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ERRLOG0_opc_logger1_END        (4)
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ERRLOG0_errcode_logger1_START  (8)
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ERRLOG0_errcode_logger1_END    (10)
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ERRLOG0_len1_logger1_START     (16)
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ERRLOG0_len1_logger1_END       (23)
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ERRLOG0_format_logger1_START   (31)
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ERRLOG0_format_logger1_END     (31)


/*****************************************************************************
 �ṹ��    : SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ERRLOG1_UNION
 �ṹ˵��  : MDMNOC_ERR_PROBE1_ERRLOG1 �Ĵ����ṹ���塣��ַƫ����:0x0098����ֵ:0x00000000�����:32
 �Ĵ���˵��: Error log1
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  errlog1_logger1 : 17; /* bit[0-16] : NTTP packet header RouteId��·����Ϣ����bit��������
                                                           [16:13]&#45;->Initiator Flow ID�����ڱ�ʾ������ʵ�master��
                                                           [12:9]&#45;->target Flow ID�����ڱ�ʾ�����ʵ�slave��
                                                           [8:5]&#45;->Target SubRange����ʾTarget NIU�Ĳ�ͬ�����ַ�Σ�
                                                           [4:0]&#45;->Seq ID��Transaction��ǣ� */
        unsigned int  reserved        : 15; /* bit[17-31]: ���� */
    } reg;
} SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ERRLOG1_UNION;
#endif
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ERRLOG1_errlog1_logger1_START  (0)
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ERRLOG1_errlog1_logger1_END    (16)


/*****************************************************************************
 �ṹ��    : SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ERRLOG3_UNION
 �ṹ˵��  : MDMNOC_ERR_PROBE1_ERRLOG3 �Ĵ����ṹ���塣��ַƫ����:0x00A0����ֵ:0x00000000�����:32
 �Ĵ���˵��: Error log3
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  errlog3_logger1 : 32; /* bit[0-31]: NTTP packet header ��ַ��Ϣ */
    } reg;
} SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ERRLOG3_UNION;
#endif
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ERRLOG3_errlog3_logger1_START  (0)
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ERRLOG3_errlog3_logger1_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ERRLOG7_UNION
 �ṹ˵��  : MDMNOC_ERR_PROBE1_ERRLOG7 �Ĵ����ṹ���塣��ַƫ����:0x00B0����ֵ:0x00000000�����:32
 �Ĵ���˵��: Error log7
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  errlog7_logger1 : 1;  /* bit[0]   : NTTP packet header ��ȫ�ź�ֵ */
        unsigned int  reserved        : 31; /* bit[1-31]: ���� */
    } reg;
} SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ERRLOG7_UNION;
#endif
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ERRLOG7_errlog7_logger1_START  (0)
#define SOC_MODEM_NOC_MDMNOC_ERR_PROBE1_ERRLOG7_errlog7_logger1_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_MODEM_NOC_BBE16_QOSGENERATOR_ID_COREID_UNION
 �ṹ˵��  : BBE16_QOSGENERATOR_ID_COREID �Ĵ����ṹ���塣��ַƫ����:0x0100����ֵ:0x10B8DD04�����:32
 �Ĵ���˵��: BBE16 QoS Generator ����ID
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  core_type_id   : 8;  /* bit[0-7] : BBE16 QoS Generator ����ID */
        unsigned int  core_check_sum : 24; /* bit[8-31]: BBE16 QoS Generator �Ĳ�������� */
    } reg;
} SOC_MODEM_NOC_BBE16_QOSGENERATOR_ID_COREID_UNION;
#endif
#define SOC_MODEM_NOC_BBE16_QOSGENERATOR_ID_COREID_core_type_id_START    (0)
#define SOC_MODEM_NOC_BBE16_QOSGENERATOR_ID_COREID_core_type_id_END      (7)
#define SOC_MODEM_NOC_BBE16_QOSGENERATOR_ID_COREID_core_check_sum_START  (8)
#define SOC_MODEM_NOC_BBE16_QOSGENERATOR_ID_COREID_core_check_sum_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MODEM_NOC_BBE16_QOSGENERATOR_ID_REVISIONID_UNION
 �ṹ˵��  : BBE16_QOSGENERATOR_ID_REVISIONID �Ĵ����ṹ���塣��ַƫ����:0x0104����ֵ:0x012D5300�����:32
 �Ĵ���˵��: BBE16 QoS Generator ���ߴ���汾�Ĵ���
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
} SOC_MODEM_NOC_BBE16_QOSGENERATOR_ID_REVISIONID_UNION;
#endif
#define SOC_MODEM_NOC_BBE16_QOSGENERATOR_ID_REVISIONID_user_id_START     (0)
#define SOC_MODEM_NOC_BBE16_QOSGENERATOR_ID_REVISIONID_user_id_END       (7)
#define SOC_MODEM_NOC_BBE16_QOSGENERATOR_ID_REVISIONID_flexnoc_id_START  (8)
#define SOC_MODEM_NOC_BBE16_QOSGENERATOR_ID_REVISIONID_flexnoc_id_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MODEM_NOC_BBE16_QOSGENERATOR_PRIORITY_UNION
 �ṹ˵��  : BBE16_QOSGENERATOR_PRIORITY �Ĵ����ṹ���塣��ַƫ����:0x0108����ֵ:0x80000000�����:32
 �Ĵ���˵��: BBE16 QoS Generator ���ȼ��Ĵ���
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
        unsigned int  mark     : 1;  /* bit[31]   : �����ݱ�־��Ϊ0ʱ�� */
    } reg;
} SOC_MODEM_NOC_BBE16_QOSGENERATOR_PRIORITY_UNION;
#endif
#define SOC_MODEM_NOC_BBE16_QOSGENERATOR_PRIORITY_p0_START        (0)
#define SOC_MODEM_NOC_BBE16_QOSGENERATOR_PRIORITY_p0_END          (2)
#define SOC_MODEM_NOC_BBE16_QOSGENERATOR_PRIORITY_p1_START        (8)
#define SOC_MODEM_NOC_BBE16_QOSGENERATOR_PRIORITY_p1_END          (10)
#define SOC_MODEM_NOC_BBE16_QOSGENERATOR_PRIORITY_mark_START      (31)
#define SOC_MODEM_NOC_BBE16_QOSGENERATOR_PRIORITY_mark_END        (31)


/*****************************************************************************
 �ṹ��    : SOC_MODEM_NOC_BBE16_QOSGENERATOR_MODE_UNION
 �ṹ˵��  : BBE16_QOSGENERATOR_MODE �Ĵ����ṹ���塣��ַƫ����:0x010C����ֵ:0x00000000�����:32
 �Ĵ���˵��: BBE16 QoS Generator ģʽ�Ĵ���
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
} SOC_MODEM_NOC_BBE16_QOSGENERATOR_MODE_UNION;
#endif
#define SOC_MODEM_NOC_BBE16_QOSGENERATOR_MODE_mode_START      (0)
#define SOC_MODEM_NOC_BBE16_QOSGENERATOR_MODE_mode_END        (1)


/*****************************************************************************
 �ṹ��    : SOC_MODEM_NOC_BBE16_QOSGENERATOR_EXTCONTROL_UNION
 �ṹ˵��  : BBE16_QOSGENERATOR_EXTCONTROL �Ĵ����ṹ���塣��ַƫ����:0x0118����ֵ:0x00000000�����:32
 �Ĵ���˵��: BBE16 QoS Generator �ⲿ���ƼĴ���
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
} SOC_MODEM_NOC_BBE16_QOSGENERATOR_EXTCONTROL_UNION;
#endif
#define SOC_MODEM_NOC_BBE16_QOSGENERATOR_EXTCONTROL_socket_qos_en_START  (0)
#define SOC_MODEM_NOC_BBE16_QOSGENERATOR_EXTCONTROL_socket_qos_en_END    (0)
#define SOC_MODEM_NOC_BBE16_QOSGENERATOR_EXTCONTROL_ext_thr_en_START     (1)
#define SOC_MODEM_NOC_BBE16_QOSGENERATOR_EXTCONTROL_ext_thr_en_END       (1)
#define SOC_MODEM_NOC_BBE16_QOSGENERATOR_EXTCONTROL_int_clk_en_START     (2)
#define SOC_MODEM_NOC_BBE16_QOSGENERATOR_EXTCONTROL_int_clk_en_END       (2)






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

#endif /* end of soc_modem_noc_interface.h */
