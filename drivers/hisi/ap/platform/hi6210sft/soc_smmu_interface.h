

/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/

#ifndef __SOC_SMMU_INTERFACE_H__
#define __SOC_SMMU_INTERFACE_H__

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
/* �Ĵ���˵����SMMU���ƼĴ���
   λ����UNION�ṹ:  SOC_SMMU_CTRL_UNION */
#define SOC_SMMU_CTRL_ADDR(base)                      ((base) + (0x0000))

/* �Ĵ���˵����SMMUʹ�ܼĴ���
   λ����UNION�ṹ:  SOC_SMMU_ENABLE_UNION */
#define SOC_SMMU_ENABLE_ADDR(base)                    ((base) + (0x0004))

/* �Ĵ���˵����SMMUҳ���ַ�Ĵ���
   λ����UNION�ṹ:  SOC_SMMU_PTBR_UNION */
#define SOC_SMMU_PTBR_ADDR(base)                      ((base) + (0x0008))

/* �Ĵ���˵����SMMU Preload /Invalid��ʼ��ַ�Ĵ���
   λ����UNION�ṹ:  SOC_SMMU_START_UNION */
#define SOC_SMMU_START_ADDR(base)                     ((base) + (0x000C))

/* �Ĵ���˵����SMMU Preload /Invalid������ַ�Ĵ���
   λ����UNION�ṹ:  SOC_SMMU_END_UNION */
#define SOC_SMMU_END_ADDR(base)                       ((base) + (0x0010))

/* �Ĵ���˵����SMMU�ж����μĴ���
   λ����UNION�ṹ:  SOC_SMMU_INTMASK_UNION */
#define SOC_SMMU_INTMASK_ADDR(base)                   ((base) + (0x0014))

/* �Ĵ���˵����SMMUԭʼ�ж�״̬�Ĵ���
   λ����UNION�ṹ:  SOC_SMMU_RINTSTS_UNION */
#define SOC_SMMU_RINTSTS_ADDR(base)                   ((base) + (0x0018))

/* �Ĵ���˵����SMMU���κ��ж�״̬�Ĵ���
   λ����UNION�ṹ:  SOC_SMMU_MINTSTS_UNION */
#define SOC_SMMU_MINTSTS_ADDR(base)                   ((base) + (0x001C))

/* �Ĵ���˵����SMMU�ж�����Ĵ���
   λ����UNION�ṹ:  SOC_SMMU_INTCLR_UNION */
#define SOC_SMMU_INTCLR_ADDR(base)                    ((base) + (0x0020))

/* �Ĵ���˵����SMMU״̬�Ĵ���
   λ����UNION�ṹ:  SOC_SMMU_STATUS_UNION */
#define SOC_SMMU_STATUS_ADDR(base)                    ((base) + (0x0024))

/* �Ĵ���˵����SMMU�滻����AXI ID�Ĵ���
   λ����UNION�ṹ:  SOC_SMMU_AXIID_UNION */
#define SOC_SMMU_AXIID_ADDR(base)                     ((base) + (0x0028))

/* �Ĵ���˵����SMMU���������ƼĴ���
   λ����UNION�ṹ:  SOC_SMMU_CNTCTRL_UNION */
#define SOC_SMMU_CNTCTRL_ADDR(base)                   ((base) + (0x002C))

/* �Ĵ���˵����SMMU AXI����������
   λ����UNION�ṹ:  SOC_SMMU_TRANSCNT_UNION */
#define SOC_SMMU_TRANSCNT_ADDR(base)                  ((base) + (0x0030))

/* �Ĵ���˵����SMMU L0 TLB���м�����
   λ����UNION�ṹ:  SOC_SMMU_L0TLBHITCNT_UNION */
#define SOC_SMMU_L0TLBHITCNT_ADDR(base)               ((base) + (0x0034))

/* �Ĵ���˵����SMMU L1 TLB���м�����
   λ����UNION�ṹ:  SOC_SMMU_L1TLBHITCNT_UNION */
#define SOC_SMMU_L1TLBHITCNT_ADDR(base)               ((base) + (0x0038))

/* �Ĵ���˵����SMMU ��������ؼĴ���
   λ����UNION�ṹ:  SOC_SMMU_WRAPCNT_UNION */
#define SOC_SMMU_WRAPCNT_ADDR(base)                   ((base) + (0x003C))

/* �Ĵ���˵����SMMU��ȫ������ʼ��ַ�Ĵ���
   λ����UNION�ṹ:  SOC_SMMU_SEC_START_UNION */
#define SOC_SMMU_SEC_START_ADDR(base)                 ((base) + (0x0040))

/* �Ĵ���˵����SMMU��ȫ���������ַ�Ĵ���
   λ����UNION�ṹ:  SOC_SMMU_SEC_END_UNION */
#define SOC_SMMU_SEC_END_ADDR(base)                   ((base) + (0x0044))

/* �Ĵ���˵����SMMU�汾�Ĵ���
   λ����UNION�ṹ:  SOC_SMMU_VERSION_UNION */
#define SOC_SMMU_VERSION_ADDR(base)                   ((base) + (0x0048))

/* �Ĵ���˵����SMMU Invalidҳ�����ַ�Ĵ���
   λ����UNION�ṹ:  SOC_SMMU_IPTSRC_UNION */
#define SOC_SMMU_IPTSRC_ADDR(base)                    ((base) + (0x004C))

/* �Ĵ���˵����SMMU Invalidҳ�����Ӧ�����ַ
   λ����UNION�ṹ:  SOC_SMMU_IPTPA_UNION */
#define SOC_SMMU_IPTPA_ADDR(base)                     ((base) + (0x0050))

/* �Ĵ���˵����SMMU TAG RAM����ַ
   λ����UNION�ṹ:  SOC_SMMU_TRBA_UNION */
#define SOC_SMMU_TRBA_ADDR(base)                      ((base) + (0x0054))

/* �Ĵ���˵����SMMU bypass�ռ���ʼ��ַ
   λ����UNION�ṹ:  SOC_SMMU_BYS_START_UNION */
#define SOC_SMMU_BYS_START_ADDR(base)                 ((base) + (0x0058))

/* �Ĵ���˵����SMMU bypass�ռ������ַ
   λ����UNION�ṹ:  SOC_SMMU_BYS_END_UNION */
#define SOC_SMMU_BYS_END_ADDR(base)                   ((base) + (0x005C))





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
 �ṹ��    : SOC_SMMU_CTRL_UNION
 �ṹ˵��  : CTRL �Ĵ����ṹ���塣��ַƫ����:0x0000����ֵ:0x00000000�����:32
 �Ĵ���˵��: SMMU���ƼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  smmu_rst        : 1;  /* bit[0]    : SMMU�߼���λʹ�ܡ�д1��λSMMU�ڲ������߼���L1 TLB�ָ�invalid״̬��״̬������IDLE̬�����м��������㡢��������ж�״̬����ɸ�λ�������㡣 */
        unsigned int  page_size       : 1;  /* bit[1]    : SMMUҳ���С����cfg_lockΪ��ʱ�޷��޸ġ�
                                                           1'b0: 4KB
                                                           1'b1: 8KB
                                                           ע�⣺page_size/L1 TLB_size/ddr_size/ va_size�����й̶��Ķ�Ӧ��ϵ��������Ӧ��ϵ�Ĳ������ϱ�cfg_error_int��SMMU�޷���������������Ķ�Ӧ��ϵ��ο��û��ֲᡣ */
        unsigned int  ddr_size        : 2;  /* bit[2-3]  : SMMU��Ӧ�����DDR��������cfg_lockΪ��ʱ�޷��޸ġ�
                                                           2'b00: 512MB
                                                           2'b01: 1GB
                                                           2'b10: 2GB
                                                           2'b11: reserved */
        unsigned int  l1tlb_size      : 2;  /* bit[4-5]  : SMMU L1 TLB��С����cfg_lockΪ��ʱ�޷��޸ġ�
                                                           2'b00: reserved
                                                           2'b01: 64KB
                                                           2'b10: 128KB
                                                           2'b11: reserved
                                                           ע�⣺��mem_selΪ1'b0ʱ���̶�Ϊ64KB�� */
        unsigned int  ion_size        : 2;  /* bit[6-7]  : SMMU��Ӧ�������ַ�ռ��С��ֻ�е�va_ratioΪ��ʱ��Ч����cfg_lockΪ��ʱ�޷��޸ġ�
                                                           2'b00: 128KB
                                                           2'b01: 256KB
                                                           2'b10: 512KB
                                                           2'b11: reserved */
        unsigned int  ion_partial_en  : 1;  /* bit[8]    : SMMU��Ӧ�������ַ�ռ��Ƿ��������ַ�ռ�һ�µ�ѡ��
                                                           1'b0: �����ַ�ռ��������ַ�ռ�һ�£�va_sizeλ��Ч��
                                                           1'b1: �����ַ�ռ�С�������ַ�ռ䣬ͨ��va_size����ѡ�� */
        unsigned int  preload_en      : 1;  /* bit[9]    : SMMU Preloadʹ�ܡ�����SMMU_START��SMMU_END�Ĵ������õ���ʼ/������ַ���ѵ�ַ��Χ�ڵ�ҳ��load��L1 TLB�С���ɺ������㡣 */
        unsigned int  invalid_en      : 1;  /* bit[10]   : SMMU Invalidʹ�ܡ�����SMMU_START��SMMU_END�Ĵ������õ���ʼ/������ַ���ͷŷ�Χ�ڵ�entry������validλΪ0����ɺ������㡣 */
        unsigned int  auto_invalid_en : 1;  /* bit[11]   : L1 TLB�Զ�invalid����ʹ�ܡ���ʹ���Զ�invalidʱ��һ��ʹ��L1 TLB����Ӳ���Զ�����SMMU_START/SMMU_END�Ĵ����ṩ�ĵ�ַ��Χ����L1 TLB��valid bit���㣬���������L1 TLB�����á�
                                                           1'b0: ��ʹ��
                                                           1'b1: ʹ�� */
        unsigned int  reserved_0      : 1;  /* bit[12]   : ������ */
        unsigned int  tag_bit_sel     : 2;  /* bit[13-14]: L1 TLB tag bitѡ�񡣽���USE_TAG_RAM����Чʱ��Ч������ѡ��ͬ�ĵ�ַ�Ρ���tag bitλ��Ϊ1bitʱ������λ��Ч����λ��Ч��������ʹ��tag bitʱ������Ϊ2'b0�� */
        unsigned int  reserved_1      : 17; /* bit[15-31]: ������ */
    } reg;
} SOC_SMMU_CTRL_UNION;
#endif
#define SOC_SMMU_CTRL_smmu_rst_START         (0)
#define SOC_SMMU_CTRL_smmu_rst_END           (0)
#define SOC_SMMU_CTRL_page_size_START        (1)
#define SOC_SMMU_CTRL_page_size_END          (1)
#define SOC_SMMU_CTRL_ddr_size_START         (2)
#define SOC_SMMU_CTRL_ddr_size_END           (3)
#define SOC_SMMU_CTRL_l1tlb_size_START       (4)
#define SOC_SMMU_CTRL_l1tlb_size_END         (5)
#define SOC_SMMU_CTRL_ion_size_START         (6)
#define SOC_SMMU_CTRL_ion_size_END           (7)
#define SOC_SMMU_CTRL_ion_partial_en_START   (8)
#define SOC_SMMU_CTRL_ion_partial_en_END     (8)
#define SOC_SMMU_CTRL_preload_en_START       (9)
#define SOC_SMMU_CTRL_preload_en_END         (9)
#define SOC_SMMU_CTRL_invalid_en_START       (10)
#define SOC_SMMU_CTRL_invalid_en_END         (10)
#define SOC_SMMU_CTRL_auto_invalid_en_START  (11)
#define SOC_SMMU_CTRL_auto_invalid_en_END    (11)
#define SOC_SMMU_CTRL_tag_bit_sel_START      (13)
#define SOC_SMMU_CTRL_tag_bit_sel_END        (14)


/*****************************************************************************
 �ṹ��    : SOC_SMMU_ENABLE_UNION
 �ṹ˵��  : ENABLE �Ĵ����ṹ���塣��ַƫ����:0x0004����ֵ:0x00000000�����:32
 �Ĵ���˵��: SMMUʹ�ܼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  smmu_enable : 1;  /* bit[0]   : SMMU����ʹ�ܿ��ơ��ߵ�ƽ��ʾSMMUʹ�ܣ��͵�ƽ��ʾSMMU��ʹ�ܣ����в�����bypassͨ���� */
        unsigned int  ch0_enable  : 1;  /* bit[1]   : AXIͨ��0ʹ�ܡ��ߵ�ƽ��ʾAXIͨ��0ʹ�ܣ��͵�ƽ��ʾAXIͨ��0��ʹ�ܣ�����ͨ��AXIͨ��0�Ĳ�����bypassͨ������smmu_enableΪ�͵�ƽʱ���̶�Ϊ0�� */
        unsigned int  reserved    : 30; /* bit[2-31]: ������ */
    } reg;
} SOC_SMMU_ENABLE_UNION;
#endif
#define SOC_SMMU_ENABLE_smmu_enable_START  (0)
#define SOC_SMMU_ENABLE_smmu_enable_END    (0)
#define SOC_SMMU_ENABLE_ch0_enable_START   (1)
#define SOC_SMMU_ENABLE_ch0_enable_END     (1)


/*****************************************************************************
 �ṹ��    : SOC_SMMU_PTBR_UNION
 �ṹ˵��  : PTBR �Ĵ����ṹ���塣��ַƫ����:0x0008����ֵ:0x00000000�����:32
 �Ĵ���˵��: SMMUҳ���ַ�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  trans_base_addr : 32; /* bit[0-31]: SMMUҳ�����ַ�� */
    } reg;
} SOC_SMMU_PTBR_UNION;
#endif
#define SOC_SMMU_PTBR_trans_base_addr_START  (0)
#define SOC_SMMU_PTBR_trans_base_addr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_SMMU_START_UNION
 �ṹ˵��  : START �Ĵ����ṹ���塣��ַƫ����:0x000C����ֵ:0x00000000�����:32
 �Ĵ���˵��: SMMU Preload /Invalid��ʼ��ַ�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  addr_start : 32; /* bit[0-31]: SMMU��ҪPreload��invalid������entry����ʼ��ַ������preload_en��invalid_enʵ�ֶ�Ӧ������ */
    } reg;
} SOC_SMMU_START_UNION;
#endif
#define SOC_SMMU_START_addr_start_START  (0)
#define SOC_SMMU_START_addr_start_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_SMMU_END_UNION
 �ṹ˵��  : END �Ĵ����ṹ���塣��ַƫ����:0x0010����ֵ:0x00000000�����:32
 �Ĵ���˵��: SMMU Preload /Invalid������ַ�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  addr_end : 32; /* bit[0-31]: SMMU��ҪPreload��invalid������entry�Ľ�����ַ������preload_en��invalid_enʵ�ֶ�Ӧ������
                                                   ע���õ�ַ�����ڲ�����Χ�� */
    } reg;
} SOC_SMMU_END_UNION;
#endif
#define SOC_SMMU_END_addr_end_START  (0)
#define SOC_SMMU_END_addr_end_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_SMMU_INTMASK_UNION
 �ṹ˵��  : INTMASK �Ĵ����ṹ���塣��ַƫ����:0x0014����ֵ:0x00000000�����:32
 �Ĵ���˵��: SMMU�ж����μĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cfg_error_int       : 1;  /* bit[0]   : ���ô����жϡ�ָʾpage_size/L1 TLB_size/ddr_size��������û�а��ն�Ӧ��ϵ���á� */
        unsigned int  pt_invalid_int      : 1;  /* bit[1]   : ҳ��invalid�жϡ�ָʾ��Ӧ��ҳ��Ϊinvalid״̬�� */
        unsigned int  master0_err_int     : 1;  /* bit[2]   : AXI Master0�ӿڽ��յ�error response��������жϡ� */
        unsigned int  master1_err_int     : 1;  /* bit[3]   : AXI Master1�ӿڽ��յ�error response��������жϡ� */
        unsigned int  master0_timeout_int : 1;  /* bit[4]   : AXI Master0�ӿڲ�����ʱ�жϡ�δ���յ��Զ˷��ص������źš� */
        unsigned int  master1_timeout_int : 1;  /* bit[5]   : AXI Master1�ӿڲ�����ʱ�жϡ�δ���յ��Զ˷��ص������źš�
                                                              
                                                              �ж�����λ����ͬ����
                                                              1'b0: �������ж�
                                                              1'b1: �����ж� */
        unsigned int  reserved            : 26; /* bit[6-31]: ������ */
    } reg;
} SOC_SMMU_INTMASK_UNION;
#endif
#define SOC_SMMU_INTMASK_cfg_error_int_START        (0)
#define SOC_SMMU_INTMASK_cfg_error_int_END          (0)
#define SOC_SMMU_INTMASK_pt_invalid_int_START       (1)
#define SOC_SMMU_INTMASK_pt_invalid_int_END         (1)
#define SOC_SMMU_INTMASK_master0_err_int_START      (2)
#define SOC_SMMU_INTMASK_master0_err_int_END        (2)
#define SOC_SMMU_INTMASK_master1_err_int_START      (3)
#define SOC_SMMU_INTMASK_master1_err_int_END        (3)
#define SOC_SMMU_INTMASK_master0_timeout_int_START  (4)
#define SOC_SMMU_INTMASK_master0_timeout_int_END    (4)
#define SOC_SMMU_INTMASK_master1_timeout_int_START  (5)
#define SOC_SMMU_INTMASK_master1_timeout_int_END    (5)


/*****************************************************************************
 �ṹ��    : SOC_SMMU_RINTSTS_UNION
 �ṹ˵��  : RINTSTS �Ĵ����ṹ���塣��ַƫ����:0x0018����ֵ:0x00000000�����:32
 �Ĵ���˵��: SMMUԭʼ�ж�״̬�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cfg_error_int       : 1;  /* bit[0]   : ���ô����жϡ�ָʾpage_size/L1 TLB_size/ddr_size��������û�а��ն�Ӧ��ϵ���á� */
        unsigned int  pt_invalid_int      : 1;  /* bit[1]   : ҳ��invalid�жϡ�ָʾ��Ӧ��ҳ��Ϊinvalid״̬�� */
        unsigned int  master0_err_int     : 1;  /* bit[2]   : AXI Master0�ӿڽ��յ�error response��������жϡ� */
        unsigned int  master1_err_int     : 1;  /* bit[3]   : AXI Master1�ӿڽ��յ�error response��������жϡ� */
        unsigned int  master0_timeout_int : 1;  /* bit[4]   : AXI Master0�ӿڲ�����ʱ�жϡ�δ���յ��Զ˷��ص������źš� */
        unsigned int  master1_timeout_int : 1;  /* bit[5]   : AXI Master1�ӿڲ�����ʱ�жϡ�δ���յ��Զ˷��ص������źš�
                                                              
                                                              ����ǰԭʼ�ж�״̬����ͬ����
                                                              1'b0: û���ж�
                                                              1'b1: ���ж� */
        unsigned int  reserved            : 26; /* bit[6-31]: ������ */
    } reg;
} SOC_SMMU_RINTSTS_UNION;
#endif
#define SOC_SMMU_RINTSTS_cfg_error_int_START        (0)
#define SOC_SMMU_RINTSTS_cfg_error_int_END          (0)
#define SOC_SMMU_RINTSTS_pt_invalid_int_START       (1)
#define SOC_SMMU_RINTSTS_pt_invalid_int_END         (1)
#define SOC_SMMU_RINTSTS_master0_err_int_START      (2)
#define SOC_SMMU_RINTSTS_master0_err_int_END        (2)
#define SOC_SMMU_RINTSTS_master1_err_int_START      (3)
#define SOC_SMMU_RINTSTS_master1_err_int_END        (3)
#define SOC_SMMU_RINTSTS_master0_timeout_int_START  (4)
#define SOC_SMMU_RINTSTS_master0_timeout_int_END    (4)
#define SOC_SMMU_RINTSTS_master1_timeout_int_START  (5)
#define SOC_SMMU_RINTSTS_master1_timeout_int_END    (5)


/*****************************************************************************
 �ṹ��    : SOC_SMMU_MINTSTS_UNION
 �ṹ˵��  : MINTSTS �Ĵ����ṹ���塣��ַƫ����:0x001C����ֵ:0x00000000�����:32
 �Ĵ���˵��: SMMU���κ��ж�״̬�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cfg_error_int       : 1;  /* bit[0]   : ���ô����жϡ�ָʾpage_size/L1 TLB_size/ddr_size��������û�а��ն�Ӧ��ϵ���á� */
        unsigned int  pt_invalid_int      : 1;  /* bit[1]   : ҳ��invalid�жϡ�ָʾ��Ӧ��ҳ��Ϊinvalid״̬�� */
        unsigned int  master0_err_int     : 1;  /* bit[2]   : AXI Master0�ӿڽ��յ�error response��������жϡ� */
        unsigned int  master1_err_int     : 1;  /* bit[3]   : AXI Master1�ӿڽ��յ�error response��������жϡ� */
        unsigned int  master0_timeout_int : 1;  /* bit[4]   : AXI Master0�ӿڲ�����ʱ�жϡ�δ���յ��Զ˷��ص������źš� */
        unsigned int  master1_timeout_int : 1;  /* bit[5]   : AXI Master1�ӿڲ�����ʱ�жϡ�δ���յ��Զ˷��ص������źš�
                                                              
                                                              ���κ��ж�״̬����ͬ����
                                                              1'b0: û���ж�
                                                              1'b1: ���ж� */
        unsigned int  reserved            : 26; /* bit[6-31]: ������ */
    } reg;
} SOC_SMMU_MINTSTS_UNION;
#endif
#define SOC_SMMU_MINTSTS_cfg_error_int_START        (0)
#define SOC_SMMU_MINTSTS_cfg_error_int_END          (0)
#define SOC_SMMU_MINTSTS_pt_invalid_int_START       (1)
#define SOC_SMMU_MINTSTS_pt_invalid_int_END         (1)
#define SOC_SMMU_MINTSTS_master0_err_int_START      (2)
#define SOC_SMMU_MINTSTS_master0_err_int_END        (2)
#define SOC_SMMU_MINTSTS_master1_err_int_START      (3)
#define SOC_SMMU_MINTSTS_master1_err_int_END        (3)
#define SOC_SMMU_MINTSTS_master0_timeout_int_START  (4)
#define SOC_SMMU_MINTSTS_master0_timeout_int_END    (4)
#define SOC_SMMU_MINTSTS_master1_timeout_int_START  (5)
#define SOC_SMMU_MINTSTS_master1_timeout_int_END    (5)


/*****************************************************************************
 �ṹ��    : SOC_SMMU_INTCLR_UNION
 �ṹ˵��  : INTCLR �Ĵ����ṹ���塣��ַƫ����:0x0020����ֵ:0x00000000�����:32
 �Ĵ���˵��: SMMU�ж�����Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cfg_error_int       : 1;  /* bit[0]   : ���ô����жϡ�ָʾpage_size/L1 TLB_size/ddr_size��������û�а��ն�Ӧ��ϵ���á� */
        unsigned int  pt_invalid_int      : 1;  /* bit[1]   : ҳ��invalid�жϡ�ָʾ��Ӧ��ҳ��Ϊinvalid״̬�� */
        unsigned int  master0_err_int     : 1;  /* bit[2]   : AXI Master0�ӿڽ��յ�error response��������жϡ� */
        unsigned int  master1_err_int     : 1;  /* bit[3]   : AXI Master1�ӿڽ��յ�error response��������жϡ� */
        unsigned int  master0_timeout_int : 1;  /* bit[4]   : AXI Master0�ӿڲ�����ʱ�жϡ�δ���յ��Զ˷��ص������źš� */
        unsigned int  master1_timeout_int : 1;  /* bit[5]   : AXI Master1�ӿڲ�����ʱ�жϡ�δ���յ��Զ˷��ص������źš�
                                                              
                                                              д1����жϣ�����������㡣 */
        unsigned int  reserved            : 26; /* bit[6-31]: ������ */
    } reg;
} SOC_SMMU_INTCLR_UNION;
#endif
#define SOC_SMMU_INTCLR_cfg_error_int_START        (0)
#define SOC_SMMU_INTCLR_cfg_error_int_END          (0)
#define SOC_SMMU_INTCLR_pt_invalid_int_START       (1)
#define SOC_SMMU_INTCLR_pt_invalid_int_END         (1)
#define SOC_SMMU_INTCLR_master0_err_int_START      (2)
#define SOC_SMMU_INTCLR_master0_err_int_END        (2)
#define SOC_SMMU_INTCLR_master1_err_int_START      (3)
#define SOC_SMMU_INTCLR_master1_err_int_END        (3)
#define SOC_SMMU_INTCLR_master0_timeout_int_START  (4)
#define SOC_SMMU_INTCLR_master0_timeout_int_END    (4)
#define SOC_SMMU_INTCLR_master1_timeout_int_START  (5)
#define SOC_SMMU_INTCLR_master1_timeout_int_END    (5)


/*****************************************************************************
 �ṹ��    : SOC_SMMU_STATUS_UNION
 �ṹ˵��  : STATUS �Ĵ����ṹ���塣��ַƫ����:0x0024����ֵ:0x00000080�����:32
 �Ĵ���˵��: SMMU״̬�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  l0tlb_fsm        : 3;  /* bit[0-2]  : L0 TLB״̬��״̬��
                                                            3'b000: IDLE
                                                            3'b001: JUDGE
                                                            3'b010: HIT
                                                            3'b011: REPLACE_REQ
                                                            3'b100: REPLACE_WAIT */
        unsigned int  axi_fifo_full    : 1;  /* bit[3]    : ��ַת����������FIFO��״ָ̬ʾ�� */
        unsigned int  rpl_fifo_full    : 1;  /* bit[4]    : �滻�������صĶ�����FIFO��״ָ̬ʾ�� */
        unsigned int  master0_buf_full : 1;  /* bit[5]    : Master0����Buf��״ָ̬ʾ�� */
        unsigned int  master1_buf_full : 1;  /* bit[6]    : Master1����Buf��״ָ̬ʾ�� */
        unsigned int  bypass           : 1;  /* bit[7]    : SMMU bypass״̬
                                                            0: SMMU enable
                                                            1: SMMU bypass */
        unsigned int  cfg_error        : 1;  /* bit[8]    : Ϊ1��ʾpage size/ddr size/L1 TLB size��������û�а��ն�Ӧ��ϵ���á� */
        unsigned int  cfg_lock         : 1;  /* bit[9]    : Ϊ1��ʾpage size/ddr size/L1 TLB size/ ram_latency���������Ĵ�������������L0 TLB/L1 TLB��״̬����һ����ת��ʼ�������lock״̬�����ֻ������SMMU_rst��cfg_lock��0�����������������á� */
        unsigned int  reserved         : 22; /* bit[10-31]: ������ */
    } reg;
} SOC_SMMU_STATUS_UNION;
#endif
#define SOC_SMMU_STATUS_l0tlb_fsm_START         (0)
#define SOC_SMMU_STATUS_l0tlb_fsm_END           (2)
#define SOC_SMMU_STATUS_axi_fifo_full_START     (3)
#define SOC_SMMU_STATUS_axi_fifo_full_END       (3)
#define SOC_SMMU_STATUS_rpl_fifo_full_START     (4)
#define SOC_SMMU_STATUS_rpl_fifo_full_END       (4)
#define SOC_SMMU_STATUS_master0_buf_full_START  (5)
#define SOC_SMMU_STATUS_master0_buf_full_END    (5)
#define SOC_SMMU_STATUS_master1_buf_full_START  (6)
#define SOC_SMMU_STATUS_master1_buf_full_END    (6)
#define SOC_SMMU_STATUS_bypass_START            (7)
#define SOC_SMMU_STATUS_bypass_END              (7)
#define SOC_SMMU_STATUS_cfg_error_START         (8)
#define SOC_SMMU_STATUS_cfg_error_END           (8)
#define SOC_SMMU_STATUS_cfg_lock_START          (9)
#define SOC_SMMU_STATUS_cfg_lock_END            (9)


/*****************************************************************************
 �ṹ��    : SOC_SMMU_AXIID_UNION
 �ṹ˵��  : AXIID �Ĵ����ṹ���塣��ַƫ����:0x0028����ֵ:0x00000000�����:32
 �Ĵ���˵��: SMMU�滻����AXI ID�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  smmu_axiid   : 12; /* bit[0-11] : �������滻����ʱAXI���߷�����ID�ţ�����������Master ID���֣�����ᷢ���������� */
        unsigned int  rpl_sideband : 18; /* bit[12-29]: SMMU�滻������sideband��Ϣ�����������滻������master id��QoS����DDR�������ȼ���ص����ݡ� */
        unsigned int  l0_bypass    : 1;  /* bit[30]   : L0 TLB bypassѡ��
                                                        1'b0����bypass
                                                        1'b1��bypass */
        unsigned int  s128_bypass  : 1;  /* bit[31]   : Replace same page 128����bypassѡ��
                                                        1'b0����bypass
                                                        1'b1��bypass */
    } reg;
} SOC_SMMU_AXIID_UNION;
#endif
#define SOC_SMMU_AXIID_smmu_axiid_START    (0)
#define SOC_SMMU_AXIID_smmu_axiid_END      (11)
#define SOC_SMMU_AXIID_rpl_sideband_START  (12)
#define SOC_SMMU_AXIID_rpl_sideband_END    (29)
#define SOC_SMMU_AXIID_l0_bypass_START     (30)
#define SOC_SMMU_AXIID_l0_bypass_END       (30)
#define SOC_SMMU_AXIID_s128_bypass_START   (31)
#define SOC_SMMU_AXIID_s128_bypass_END     (31)


/*****************************************************************************
 �ṹ��    : SOC_SMMU_CNTCTRL_UNION
 �ṹ˵��  : CNTCTRL �Ĵ����ṹ���塣��ַƫ����:0x002C����ֵ:0x00000000�����:32
 �Ĵ���˵��: SMMU���������ƼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  count_enable : 1;  /* bit[0]   : SMMUͳ��ʹ�ܡ�д1������SMMU_TRANSCNT /L0TLBHITCNT/L1TLBHITCNT����������������ͳ�������ʡ�д0�رռ������� */
        unsigned int  count_clear  : 1;  /* bit[1]   : SMMU�����������д1��������м����������ݣ����������㡣�������������㡣 */
        unsigned int  reserved     : 30; /* bit[2-31]: ������ */
    } reg;
} SOC_SMMU_CNTCTRL_UNION;
#endif
#define SOC_SMMU_CNTCTRL_count_enable_START  (0)
#define SOC_SMMU_CNTCTRL_count_enable_END    (0)
#define SOC_SMMU_CNTCTRL_count_clear_START   (1)
#define SOC_SMMU_CNTCTRL_count_clear_END     (1)


/*****************************************************************************
 �ṹ��    : SOC_SMMU_TRANSCNT_UNION
 �ṹ˵��  : TRANSCNT �Ĵ����ṹ���塣��ַƫ����:0x0030����ֵ:0x00000000�����:32
 �Ĵ���˵��: SMMU AXI����������
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  axi_trans_count : 32; /* bit[0-31]: AXI����������������ͳ�ƾ���AXI Slave�������Ч�Ĳ�������������ҳ��Χ�ڵĲ�ͳ�ơ� */
    } reg;
} SOC_SMMU_TRANSCNT_UNION;
#endif
#define SOC_SMMU_TRANSCNT_axi_trans_count_START  (0)
#define SOC_SMMU_TRANSCNT_axi_trans_count_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_SMMU_L0TLBHITCNT_UNION
 �ṹ˵��  : L0TLBHITCNT �Ĵ����ṹ���塣��ַƫ����:0x0034����ֵ:0x00000000�����:32
 �Ĵ���˵��: SMMU L0 TLB���м�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  l0tlb_hit_count : 32; /* bit[0-31]: L0 TLB���м�����������ͳ��L0 TLB���еĴ����� */
    } reg;
} SOC_SMMU_L0TLBHITCNT_UNION;
#endif
#define SOC_SMMU_L0TLBHITCNT_l0tlb_hit_count_START  (0)
#define SOC_SMMU_L0TLBHITCNT_l0tlb_hit_count_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_SMMU_L1TLBHITCNT_UNION
 �ṹ˵��  : L1TLBHITCNT �Ĵ����ṹ���塣��ַƫ����:0x0038����ֵ:0x00000000�����:32
 �Ĵ���˵��: SMMU L1 TLB���м�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  l1tlb_hit_count : 32; /* bit[0-31]: L1 TLB���м�����������ͳ��L1 TLB���еĴ����� */
    } reg;
} SOC_SMMU_L1TLBHITCNT_UNION;
#endif
#define SOC_SMMU_L1TLBHITCNT_l1tlb_hit_count_START  (0)
#define SOC_SMMU_L1TLBHITCNT_l1tlb_hit_count_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_SMMU_WRAPCNT_UNION
 �ṹ˵��  : WRAPCNT �Ĵ����ṹ���塣��ַƫ����:0x003C����ֵ:0x00000000�����:32
 �Ĵ���˵��: SMMU ��������ؼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  axi_trans_count_wrap : 4;  /* bit[0-3]  : AXI�����������ľ��ͳ�� */
        unsigned int  l0tlb_hit_count_wrap : 4;  /* bit[4-7]  : L0 TLB���м������ľ��ͳ�� */
        unsigned int  l1tlb_hit_count_wrap : 4;  /* bit[8-11] : L1 TLB���м������ľ��ͳ�� */
        unsigned int  reserved             : 20; /* bit[12-31]: ������ */
    } reg;
} SOC_SMMU_WRAPCNT_UNION;
#endif
#define SOC_SMMU_WRAPCNT_axi_trans_count_wrap_START  (0)
#define SOC_SMMU_WRAPCNT_axi_trans_count_wrap_END    (3)
#define SOC_SMMU_WRAPCNT_l0tlb_hit_count_wrap_START  (4)
#define SOC_SMMU_WRAPCNT_l0tlb_hit_count_wrap_END    (7)
#define SOC_SMMU_WRAPCNT_l1tlb_hit_count_wrap_START  (8)
#define SOC_SMMU_WRAPCNT_l1tlb_hit_count_wrap_END    (11)


/*****************************************************************************
 �ṹ��    : SOC_SMMU_SEC_START_UNION
 �ṹ˵��  : SEC_START �Ĵ����ṹ���塣��ַƫ����:0x0040����ֵ:0x00000000�����:32
 �Ĵ���˵��: SMMU��ȫ������ʼ��ַ�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sec_addr_start : 32; /* bit[0-31]: DDR�а�ȫ�������ʼ��ַ�����ʸ�����Ĳ���������SMMU��ַת�����üĴ������ڰ�ȫ�����¿ɼ����ǰ�ȫ���ʷ���0�� */
    } reg;
} SOC_SMMU_SEC_START_UNION;
#endif
#define SOC_SMMU_SEC_START_sec_addr_start_START  (0)
#define SOC_SMMU_SEC_START_sec_addr_start_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_SMMU_SEC_END_UNION
 �ṹ˵��  : SEC_END �Ĵ����ṹ���塣��ַƫ����:0x0044����ֵ:0x00000000�����:32
 �Ĵ���˵��: SMMU��ȫ���������ַ�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sec_addr_end : 32; /* bit[0-31]: DDR�а�ȫ����Ľ�����ַ�����ʸ�����Ĳ���������SMMU��ַת�����üĴ������ڰ�ȫ�����¿ɼ����ǰ�ȫ���ʷ���0��
                                                       ע���õ�ַ�����ڲ�����Χ�� */
    } reg;
} SOC_SMMU_SEC_END_UNION;
#endif
#define SOC_SMMU_SEC_END_sec_addr_end_START  (0)
#define SOC_SMMU_SEC_END_sec_addr_end_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_SMMU_VERSION_UNION
 �ṹ˵��  : VERSION �Ĵ����ṹ���塣��ַƫ����:0x0048����ֵ:0x48690100�����:32
 �Ĵ���˵��: SMMU�汾�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  smmu_version : 32; /* bit[0-31]: SMMU IP�汾�Ĵ����� */
    } reg;
} SOC_SMMU_VERSION_UNION;
#endif
#define SOC_SMMU_VERSION_smmu_version_START  (0)
#define SOC_SMMU_VERSION_smmu_version_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_SMMU_IPTSRC_UNION
 �ṹ˵��  : IPTSRC �Ĵ����ṹ���塣��ַƫ����:0x004C����ֵ:0x00000000�����:32
 �Ĵ���˵��: SMMU Invalidҳ�����ַ�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  smmu_ipt_src : 32; /* bit[0-31]: ��pt_invalid_int�жϲ���ʱ�����뵱ǰ��invalidҳ����ĵ�ַ�� */
    } reg;
} SOC_SMMU_IPTSRC_UNION;
#endif
#define SOC_SMMU_IPTSRC_smmu_ipt_src_START  (0)
#define SOC_SMMU_IPTSRC_smmu_ipt_src_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_SMMU_IPTPA_UNION
 �ṹ˵��  : IPTPA �Ĵ����ṹ���塣��ַƫ����:0x0050����ֵ:0xFFFFF000�����:32
 �Ĵ���˵��: SMMU Invalidҳ�����Ӧ�����ַ
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  smmu_ipt_pa : 32; /* bit[0-31]: �ṩ��pt_invalid_int�жϲ���ʱ��Ӧ�������ַ��SMMU�ᶪ��invalidҳ�������øõ�ַ�������߲����� */
    } reg;
} SOC_SMMU_IPTPA_UNION;
#endif
#define SOC_SMMU_IPTPA_smmu_ipt_pa_START  (0)
#define SOC_SMMU_IPTPA_smmu_ipt_pa_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_SMMU_TRBA_UNION
 �ṹ˵��  : TRBA �Ĵ����ṹ���塣��ַƫ����:0x0054����ֵ:0x00000000�����:32
 �Ĵ���˵��: SMMU TAG RAM����ַ
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  smmu_tagram_baseaddr : 32; /* bit[0-31]: SMMU L1 TLB TAG RAM����ַ��SMMU�ڲ����ݸõ�ַ��ӳ��RAM���ַ�� */
    } reg;
} SOC_SMMU_TRBA_UNION;
#endif
#define SOC_SMMU_TRBA_smmu_tagram_baseaddr_START  (0)
#define SOC_SMMU_TRBA_smmu_tagram_baseaddr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_SMMU_BYS_START_UNION
 �ṹ˵��  : BYS_START �Ĵ����ṹ���塣��ַƫ����:0x0058����ֵ:0x00000000�����:32
 �Ĵ���˵��: SMMU bypass�ռ���ʼ��ַ
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  bypass_start_addr : 32; /* bit[0-31]: SMMU bypass�ռ���ʼ��ַ�����ʸ�����Ĳ���������SMMU��ַת���� */
    } reg;
} SOC_SMMU_BYS_START_UNION;
#endif
#define SOC_SMMU_BYS_START_bypass_start_addr_START  (0)
#define SOC_SMMU_BYS_START_bypass_start_addr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_SMMU_BYS_END_UNION
 �ṹ˵��  : BYS_END �Ĵ����ṹ���塣��ַƫ����:0x005C����ֵ:0x00000000�����:32
 �Ĵ���˵��: SMMU bypass�ռ������ַ
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  bypass_end_addr : 32; /* bit[0-31]: SMMU bypass�ռ������ַ�����ʸ�����Ĳ���������SMMU��ַת����
                                                          ע���õ�ַ�����ڲ�����Χ�� */
    } reg;
} SOC_SMMU_BYS_END_UNION;
#endif
#define SOC_SMMU_BYS_END_bypass_end_addr_START  (0)
#define SOC_SMMU_BYS_END_bypass_end_addr_END    (31)






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

#endif /* end of soc_smmu_interface.h */
