

/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/

#ifndef __SOC_TZASC_INTERFACE_H__
#define __SOC_TZASC_INTERFACE_H__

#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif



/*****************************************************************************
  2 �궨��
*****************************************************************************/

/****************************************************************************
                     (1/1) TZASC
 ****************************************************************************/
/* �Ĵ���˵����������Ϣ�Ĵ���
   λ����UNION�ṹ:  SOC_TZASC_Configuration_UNION */
#define SOC_TZASC_Configuration_ADDR(base)            ((base) + (0x0000))

/* �Ĵ���˵����TZASC������Ϊ�Ĵ���
   λ����UNION�ṹ:  SOC_TZASC_ActionRegister_UNION */
#define SOC_TZASC_ActionRegister_ADDR(base)           ((base) + (0x0004))

/* �Ĵ���˵����Lockdown��Χ���ƼĴ���
   λ����UNION�ṹ:  SOC_TZASC_lockdown_range_UNION */
#define SOC_TZASC_lockdown_range_ADDR(base)           ((base) + (0x0008))

/* �Ĵ���˵����д������Ȩ�Ĵ���
   λ����UNION�ṹ:  SOC_TZASC_lockdown_select_UNION */
#define SOC_TZASC_lockdown_select_ADDR(base)          ((base) + (0x000C))

/* �Ĵ���˵�����ж�״̬�Ĵ���
   λ����UNION�ṹ:  SOC_TZASC_int_status_UNION */
#define SOC_TZASC_int_status_ADDR(base)               ((base) + (0x0010))

/* �Ĵ���˵�����ж�����Ĵ���
   λ����UNION�ṹ:  SOC_TZASC_int_clear_UNION */
#define SOC_TZASC_int_clear_ADDR(base)                ((base) + (0x0014))

/* �Ĵ���˵����ʧ�ܲ����͵�ַ��¼�Ĵ���
   λ����UNION�ṹ:  SOC_TZASC_fail_address_low_UNION */
#define SOC_TZASC_fail_address_low_ADDR(base)         ((base) + (0x0020))

/* �Ĵ���˵����ʧ�ܲ����ߵ�ַ��¼�Ĵ���
   λ����UNION�ṹ:  SOC_TZASC_fail_address_high_UNION */
#define SOC_TZASC_fail_address_high_ADDR(base)        ((base) + (0x0024))

/* �Ĵ���˵����ʧ�ܲ�������״̬�Ĵ���
   λ����UNION�ṹ:  SOC_TZASC_fail_control_UNION */
#define SOC_TZASC_fail_control_ADDR(base)             ((base) + (0x0028))

/* �Ĵ���˵����ʧ�ܲ���ID��¼�Ĵ�
   λ����UNION�ṹ:  SOC_TZASC_fail_id_UNION */
#define SOC_TZASC_fail_id_ADDR(base)                  ((base) + (0x002C))

/* �Ĵ���˵����Ԥ����ƼĴ���
   λ����UNION�ṹ:  SOC_TZASC_speculation_control_UNION */
#define SOC_TZASC_speculation_control_ADDR(base)      ((base) + (0x0030))

/* �Ĵ���˵������ȫת�üĴ���
   λ����UNION�ṹ:  SOC_TZASC_security_inversion_en_UNION */
#define SOC_TZASC_security_inversion_en_ADDR(base)    ((base) + (0x0034))

/* �Ĵ���˵��������0����ַ��λ
   λ����UNION�ṹ:  SOC_TZASC_region_setup_low_0_UNION */
#define SOC_TZASC_region_setup_low_0_ADDR(base)       ((base) + (0x0100))

/* �Ĵ���˵��������0����ַ��λ
   λ����UNION�ṹ:  SOC_TZASC_region_setup_high_0_UNION */
#define SOC_TZASC_region_setup_high_0_ADDR(base)      ((base) + (0x0104))

/* �Ĵ���˵��������0�������üĴ���
   λ����UNION�ṹ:  SOC_TZASC_region_attributes_0_UNION */
#define SOC_TZASC_region_attributes_0_ADDR(base)      ((base) + (0x0108))

/* �Ĵ���˵��������1����ַ��λ
   λ����UNION�ṹ:  SOC_TZASC_region_setup_low_1_UNION */
#define SOC_TZASC_region_setup_low_1_ADDR(base)       ((base) + (0x0110))

/* �Ĵ���˵��������1����ַ��λ
   λ����UNION�ṹ:  SOC_TZASC_region_setup_high_1_UNION */
#define SOC_TZASC_region_setup_high_1_ADDR(base)      ((base) + (0x0114))

/* �Ĵ���˵��������1�������üĴ���
   λ����UNION�ṹ:  SOC_TZASC_region_attributes_1_UNION */
#define SOC_TZASC_region_attributes_1_ADDR(base)      ((base) + (0x0118))

/* �Ĵ���˵��������2����ַ��λ
   λ����UNION�ṹ:  SOC_TZASC_region_setup_low_2_UNION */
#define SOC_TZASC_region_setup_low_2_ADDR(base)       ((base) + (0x0120))

/* �Ĵ���˵��������2����ַ��λ
   λ����UNION�ṹ:  SOC_TZASC_region_setup_high_2_UNION */
#define SOC_TZASC_region_setup_high_2_ADDR(base)      ((base) + (0x0124))

/* �Ĵ���˵��������2�������üĴ���
   λ����UNION�ṹ:  SOC_TZASC_region_attributes_2_UNION */
#define SOC_TZASC_region_attributes_2_ADDR(base)      ((base) + (0x0128))

/* �Ĵ���˵��������3����ַ��λ
   λ����UNION�ṹ:  SOC_TZASC_region_setup_low_3_UNION */
#define SOC_TZASC_region_setup_low_3_ADDR(base)       ((base) + (0x0130))

/* �Ĵ���˵��������3����ַ��λ
   λ����UNION�ṹ:  SOC_TZASC_region_setup_high_3_UNION */
#define SOC_TZASC_region_setup_high_3_ADDR(base)      ((base) + (0x0134))

/* �Ĵ���˵��������3�������üĴ���
   λ����UNION�ṹ:  SOC_TZASC_region_attributes_3_UNION */
#define SOC_TZASC_region_attributes_3_ADDR(base)      ((base) + (0x0138))

/* �Ĵ���˵��������4����ַ��λ
   λ����UNION�ṹ:  SOC_TZASC_region_setup_low_4_UNION */
#define SOC_TZASC_region_setup_low_4_ADDR(base)       ((base) + (0x0140))

/* �Ĵ���˵��������4����ַ��λ
   λ����UNION�ṹ:  SOC_TZASC_region_setup_high_4_UNION */
#define SOC_TZASC_region_setup_high_4_ADDR(base)      ((base) + (0x0144))

/* �Ĵ���˵��������4�������üĴ���
   λ����UNION�ṹ:  SOC_TZASC_region_attributes_4_UNION */
#define SOC_TZASC_region_attributes_4_ADDR(base)      ((base) + (0x0148))

/* �Ĵ���˵��������5����ַ��λ
   λ����UNION�ṹ:  SOC_TZASC_region_setup_low_5_UNION */
#define SOC_TZASC_region_setup_low_5_ADDR(base)       ((base) + (0x0150))

/* �Ĵ���˵��������5����ַ��λ
   λ����UNION�ṹ:  SOC_TZASC_region_setup_high_5_UNION */
#define SOC_TZASC_region_setup_high_5_ADDR(base)      ((base) + (0x0154))

/* �Ĵ���˵��������5�������üĴ���
   λ����UNION�ṹ:  SOC_TZASC_region_attributes_5_UNION */
#define SOC_TZASC_region_attributes_5_ADDR(base)      ((base) + (0x0158))

/* �Ĵ���˵��������6����ַ��λ
   λ����UNION�ṹ:  SOC_TZASC_region_setup_low_6_UNION */
#define SOC_TZASC_region_setup_low_6_ADDR(base)       ((base) + (0x0160))

/* �Ĵ���˵��������6����ַ��λ
   λ����UNION�ṹ:  SOC_TZASC_region_setup_high_6_UNION */
#define SOC_TZASC_region_setup_high_6_ADDR(base)      ((base) + (0x0164))

/* �Ĵ���˵��������6�������üĴ���
   λ����UNION�ṹ:  SOC_TZASC_region_attributes_6_UNION */
#define SOC_TZASC_region_attributes_6_ADDR(base)      ((base) + (0x0168))

/* �Ĵ���˵��������7����ַ��λ
   λ����UNION�ṹ:  SOC_TZASC_region_setup_low_7_UNION */
#define SOC_TZASC_region_setup_low_7_ADDR(base)       ((base) + (0x0170))

/* �Ĵ���˵��������7����ַ��λ
   λ����UNION�ṹ:  SOC_TZASC_region_setup_high_7_UNION */
#define SOC_TZASC_region_setup_high_7_ADDR(base)      ((base) + (0x0174))

/* �Ĵ���˵��������7�������üĴ���
   λ����UNION�ṹ:  SOC_TZASC_region_attributes_7_UNION */
#define SOC_TZASC_region_attributes_7_ADDR(base)      ((base) + (0x0178))

/* �Ĵ���˵���������߼�ʹ�ܼĴ���
   λ����UNION�ṹ:  SOC_TZASC_itcrg_UNION */
#define SOC_TZASC_itcrg_ADDR(base)                    ((base) + (0x0E00))

/* �Ĵ���˵����secure_boot_lock״̬�Ĵ���
   λ����UNION�ṹ:  SOC_TZASC_itid_UNION */
#define SOC_TZASC_itid_ADDR(base)                     ((base) + (0x0E04))

/* �Ĵ���˵����tzasc_int״̬���üĴ���
   λ����UNION�ṹ:  SOC_TZASC_itop_UNION */
#define SOC_TZASC_itop_ADDR(base)                     ((base) + (0x0E08))

/* �Ĵ���˵��������ID�Ĵ���4
   λ����UNION�ṹ:  SOC_TZASC_periph_id_4_UNION */
#define SOC_TZASC_periph_id_4_ADDR(base)              ((base) + (0x0FD0))

/* �Ĵ���˵��������ID�Ĵ���0
   λ����UNION�ṹ:  SOC_TZASC_periph_id_0_UNION */
#define SOC_TZASC_periph_id_0_ADDR(base)              ((base) + (0x0FE0))

/* �Ĵ���˵��������ID�Ĵ���1
   λ����UNION�ṹ:  SOC_TZASC_periph_id_1_UNION */
#define SOC_TZASC_periph_id_1_ADDR(base)              ((base) + (0x0FE4))

/* �Ĵ���˵��������ID�Ĵ���2
   λ����UNION�ṹ:  SOC_TZASC_periph_id_2_UNION */
#define SOC_TZASC_periph_id_2_ADDR(base)              ((base) + (0x0FE8))

/* �Ĵ���˵��������ID�Ĵ���3
   λ����UNION�ṹ:  SOC_TZASC_periph_id_3_UNION */
#define SOC_TZASC_periph_id_3_ADDR(base)              ((base) + (0x0FEC))





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
                     (1/1) TZASC
 ****************************************************************************/
/*****************************************************************************
 �ṹ��    : SOC_TZASC_Configuration_UNION
 �ṹ˵��  : Configuration �Ĵ����ṹ���塣��ַƫ����:0x0000����ֵ:0x00001F07�����:32
 �Ĵ���˵��: ������Ϣ�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  no_of_regions : 4;  /* bit[0-3]  : Returns the number of regions that the TZASC provides:
                                                         b0000 = reserved
                                                         b0001 = 2 regions
                                                         b0010 = 3 regions
                                                         b0011 = 4 regions
                                                         .
                                                         .
                                                         .
                                                         b1111 = 16 regions. */
        unsigned int  reserved_0    : 4;  /* bit[4-7]  : reserved */
        unsigned int  address_width : 6;  /* bit[8-13] : Returns the width of the AXI address bus. Read as:
                                                         b000000-b011110 = reserved
                                                         b011111 = 32-bit
                                                         b100000 = 33-bit
                                                         b100001 = 34-bit
                                                         .
                                                         .
                                                         .
                                                         b111110 = 63-bit
                                                         b111111 = 64-bit. */
        unsigned int  reserved_1    : 18; /* bit[14-31]: reserved */
    } reg;
} SOC_TZASC_Configuration_UNION;
#endif
#define SOC_TZASC_Configuration_no_of_regions_START  (0)
#define SOC_TZASC_Configuration_no_of_regions_END    (3)
#define SOC_TZASC_Configuration_address_width_START  (8)
#define SOC_TZASC_Configuration_address_width_END    (13)


/*****************************************************************************
 �ṹ��    : SOC_TZASC_ActionRegister_UNION
 �ṹ˵��  : ActionRegister �Ĵ����ṹ���塣��ַƫ����:0x0004����ֵ:0x00000001�����:32
 �Ĵ���˵��: TZASC������Ϊ�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reaction_value : 2;  /* bit[0-1] : Controls how the TZASC uses the bresps[1:0], rresps[1:0], and tzasc_int signals when a region
                                                         permission failure occurs:
                                                         00��sets tzasc_int LOW and issues an OKAY response
                                                         01��sets tzasc_int LOW and issues a DECERR response
                                                         10��sets tzasc_int HIGH and issues an OKAY response
                                                         11��sets tzasc_int HIGH and issues a DECERR response. */
        unsigned int  reserved       : 30; /* bit[2-31]: reserved */
    } reg;
} SOC_TZASC_ActionRegister_UNION;
#endif
#define SOC_TZASC_ActionRegister_reaction_value_START  (0)
#define SOC_TZASC_ActionRegister_reaction_value_END    (1)


/*****************************************************************************
 �ṹ��    : SOC_TZASC_lockdown_range_UNION
 �ṹ˵��  : lockdown_range �Ĵ����ṹ���塣��ַƫ����:0x0008����ֵ:0x00000000�����:32
 �Ĵ���˵��: Lockdown��Χ���ƼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  lockdown_regions : 4;  /* bit[0-3] : Controls the number of regions to lockdown when the enable bit is set to 1:
                                                           b0000 = region no_of_regions�C1 is locked
                                                           b0001 = region no_of_regions�C1 to region no_of_regions�C2 are locked
                                                           b0010 = region no_of_regions�C1 to region no_of_regions�C3 are locked
                                                           b0011 = region no_of_regions�C1 to region no_of_regions�C4 are locked
                                                           .
                                                           .
                                                           .
                                                           b1111 = region no_of_regions�C1 to region no_of_regions�C16 are locked.
                                                           
                                                           The value programmed in lockdown_range Register must not be greater than no_of_regions-1 else all regions are locked. */
        unsigned int  reserved         : 27; /* bit[4-30]: reserved */
        unsigned int  enable           : 1;  /* bit[31]  : When set to 1, it enables the lockdown_regions field to control the regions that are to be locked */
    } reg;
} SOC_TZASC_lockdown_range_UNION;
#endif
#define SOC_TZASC_lockdown_range_lockdown_regions_START  (0)
#define SOC_TZASC_lockdown_range_lockdown_regions_END    (3)
#define SOC_TZASC_lockdown_range_enable_START            (31)
#define SOC_TZASC_lockdown_range_enable_END              (31)


/*****************************************************************************
 �ṹ��    : SOC_TZASC_lockdown_select_UNION
 �ṹ˵��  : lockdown_select �Ĵ����ṹ���塣��ַƫ����:0x000C����ֵ:0x00000000�����:32
 �Ĵ���˵��: д������Ȩ�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  region_register      : 1;  /* bit[0]   : Modifies the access type of the lockdown_range Register:
                                                               0 = no effect. lockdown_range Register remains RW.
                                                               1 = lockdown_range Register is RO. */
        unsigned int  security_inv         : 1;  /* bit[1]   : Modifies the access type of the security_inversion_en Register:
                                                               0 = no effect. security_inversion_en Register remains RW.
                                                               1 = security_inversion_en Register is RO. */
        unsigned int  acc_speculation_cntl : 1;  /* bit[2]   : Modifies the access type of the speculation_control Register:
                                                               0 = no effect. speculation_control Register remains RW.
                                                               1 = speculation_control Register is RO. */
        unsigned int  reserved             : 29; /* bit[3-31]: reserved */
    } reg;
} SOC_TZASC_lockdown_select_UNION;
#endif
#define SOC_TZASC_lockdown_select_region_register_START       (0)
#define SOC_TZASC_lockdown_select_region_register_END         (0)
#define SOC_TZASC_lockdown_select_security_inv_START          (1)
#define SOC_TZASC_lockdown_select_security_inv_END            (1)
#define SOC_TZASC_lockdown_select_acc_speculation_cntl_START  (2)
#define SOC_TZASC_lockdown_select_acc_speculation_cntl_END    (2)


/*****************************************************************************
 �ṹ��    : SOC_TZASC_int_status_UNION
 �ṹ˵��  : int_status �Ĵ����ṹ���塣��ַƫ����:0x0010����ֵ:0x00000000�����:32
 �Ĵ���˵��: �ж�״̬�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  status   : 1;  /* bit[0]   : Returns the status of the interrupt:
                                                   0 = interrupt is inactive
                                                   1 = interrupt is active. */
        unsigned int  overrun  : 1;  /* bit[1]   : When set to 1, it indicates the occurrence of two or more region permission failures since the interrupt was last cleared */
        unsigned int  reserved : 30; /* bit[2-31]: reserved */
    } reg;
} SOC_TZASC_int_status_UNION;
#endif
#define SOC_TZASC_int_status_status_START    (0)
#define SOC_TZASC_int_status_status_END      (0)
#define SOC_TZASC_int_status_overrun_START   (1)
#define SOC_TZASC_int_status_overrun_END     (1)


/*****************************************************************************
 �ṹ��    : SOC_TZASC_int_clear_UNION
 �ṹ˵��  : int_clear �Ĵ����ṹ���塣��ַƫ����:0x0014����ֵ:0x00000000�����:32
 �Ĵ���˵��: �ж�����Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  clear : 32; /* bit[0-31]: Writing any value to the int_clear Register sets the:
                                                ? status bit to 0 in the int_status Register
                                                ? overrun bit to 0 in the int_status Register. */
    } reg;
} SOC_TZASC_int_clear_UNION;
#endif
#define SOC_TZASC_int_clear_clear_START  (0)
#define SOC_TZASC_int_clear_clear_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_TZASC_fail_address_low_UNION
 �ṹ˵��  : fail_address_low �Ĵ����ṹ���塣��ַƫ����:0x0020����ֵ:0x00000000�����:32
 �Ĵ���˵��: ʧ�ܲ����͵�ַ��¼�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  add_status_low : 32; /* bit[0-31]: Returns the AXI address bits [31:0] of the first access to fail a region permission check after the interrupt was cleared. */
    } reg;
} SOC_TZASC_fail_address_low_UNION;
#endif
#define SOC_TZASC_fail_address_low_add_status_low_START  (0)
#define SOC_TZASC_fail_address_low_add_status_low_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_TZASC_fail_address_high_UNION
 �ṹ˵��  : fail_address_high �Ĵ����ṹ���塣��ַƫ����:0x0024����ֵ:0x00000000�����:32
 �Ĵ���˵��: ʧ�ܲ����ߵ�ַ��¼�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  add_status_high : 32; /* bit[0-31]: Returns the address bits [AXI_ADDRESS_MSB:32] of the first access to fail a region permission check after the interrupt was cleared */
    } reg;
} SOC_TZASC_fail_address_high_UNION;
#endif
#define SOC_TZASC_fail_address_high_add_status_high_START  (0)
#define SOC_TZASC_fail_address_high_add_status_high_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_TZASC_fail_control_UNION
 �ṹ˵��  : fail_control �Ĵ����ṹ���塣��ַƫ����:0x0028����ֵ:0x00000000�����:32
 �Ĵ���˵��: ʧ�ܲ�������״̬�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved_0 : 20; /* bit[0-19] :  */
        unsigned int  privileged : 1;  /* bit[20]   : After clearing the interrupt status, this bit indicates whether the first access to fail a region
                                                      permission check was privileged. Read as:
                                                      0 = unprivileged access
                                                      1 = privileged access. */
        unsigned int  nonsecure  : 1;  /* bit[21]   : After clearing the interrupt status, this bit indicates whether the first access to fail a region
                                                      permission check was non-secure. Read as:
                                                      0 = secure access
                                                      1 = non-secure access. */
        unsigned int  reserved_1 : 2;  /* bit[22-23]:  */
        unsigned int  write      : 1;  /* bit[24]   : This bit indicates whether the first access to fail a region permission check was a write or read as:
                                                      0 = read access
                                                      1 = write access. */
        unsigned int  reserved_2 : 7;  /* bit[25-31]:  */
    } reg;
} SOC_TZASC_fail_control_UNION;
#endif
#define SOC_TZASC_fail_control_privileged_START  (20)
#define SOC_TZASC_fail_control_privileged_END    (20)
#define SOC_TZASC_fail_control_nonsecure_START   (21)
#define SOC_TZASC_fail_control_nonsecure_END     (21)
#define SOC_TZASC_fail_control_write_START       (24)
#define SOC_TZASC_fail_control_write_END         (24)


/*****************************************************************************
 �ṹ��    : SOC_TZASC_fail_id_UNION
 �ṹ˵��  : fail_id �Ĵ����ṹ���塣��ַƫ����:0x002C����ֵ:0x00000000�����:32
 �Ĵ���˵��: ʧ�ܲ���ID��¼�Ĵ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  fail_id : 32; /* bit[0-31]: Returns the master AXI ID of the first access to fail a region permission check after the interrupt was cleared */
    } reg;
} SOC_TZASC_fail_id_UNION;
#endif
#define SOC_TZASC_fail_id_fail_id_START  (0)
#define SOC_TZASC_fail_id_fail_id_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_TZASC_speculation_control_UNION
 �ṹ˵��  : speculation_control �Ĵ����ṹ���塣��ַƫ����:0x0030����ֵ:0x00000000�����:32
 �Ĵ���˵��: Ԥ����ƼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  read_speculation  : 1;  /* bit[0]   : Controls the read access speculation:
                                                            0 = read access speculation is enabled. This is the default.
                                                            1 = read access speculation is disabled. */
        unsigned int  write_speculation : 1;  /* bit[1]   : Controls the write access speculation:
                                                            0 = write access speculation is enabled. This is the default.
                                                            1 = write access speculation is disabled. */
        unsigned int  reserved          : 30; /* bit[2-31]:  */
    } reg;
} SOC_TZASC_speculation_control_UNION;
#endif
#define SOC_TZASC_speculation_control_read_speculation_START   (0)
#define SOC_TZASC_speculation_control_read_speculation_END     (0)
#define SOC_TZASC_speculation_control_write_speculation_START  (1)
#define SOC_TZASC_speculation_control_write_speculation_END    (1)


/*****************************************************************************
 �ṹ��    : SOC_TZASC_security_inversion_en_UNION
 �ṹ˵��  : security_inversion_en �Ĵ����ṹ���塣��ַƫ����:0x0034����ֵ:0x00000000�����:32
 �Ĵ���˵��: ��ȫת�üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  security_inversion_en : 1;  /* bit[0]   : Controls whether the TZASC permits security inversion to occur:
                                                                0 = security inversion is not permitted. This is the default.
                                                                1 = security inversion is permitted. This enables a region to be accessible to masters in Non-secure state but not accessible to masters in Secure state. */
        unsigned int  reserved              : 31; /* bit[1-31]:  */
    } reg;
} SOC_TZASC_security_inversion_en_UNION;
#endif
#define SOC_TZASC_security_inversion_en_security_inversion_en_START  (0)
#define SOC_TZASC_security_inversion_en_security_inversion_en_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_TZASC_region_setup_low_0_UNION
 �ṹ˵��  : region_setup_low_0 �Ĵ����ṹ���塣��ַƫ����:0x0100����ֵ:0x00000000�����:32
 �Ĵ���˵��: ����0����ַ��λ
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved         : 15; /* bit[0-14] : Base address [14:0] is always zero because the TZASC does not permit the
                                                            region size to be less than 32KB. */
        unsigned int  base_address_low : 17; /* bit[15-31]: The TZASC only permits a region to start at address 0x0, or at a multiple of its region size. For example, if the size of a region is 512MB, and it is not at address 0x0, the only valid settings for this field are:
                                                            b00100000000000000
                                                            b01000000000000000
                                                            b01100000000000000
                                                            b10000000000000000
                                                            b10100000000000000
                                                            b11000000000000000
                                                            b11100000000000000.
                                                            If you attempt to set an inappropriate base address for the size of the region, the TZASC ignores certain bits depending on the region size. */
    } reg;
} SOC_TZASC_region_setup_low_0_UNION;
#endif
#define SOC_TZASC_region_setup_low_0_base_address_low_START  (15)
#define SOC_TZASC_region_setup_low_0_base_address_low_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_TZASC_region_setup_high_0_UNION
 �ṹ˵��  : region_setup_high_0 �Ĵ����ṹ���塣��ַƫ����:0x0104����ֵ:0x00000000�����:32
 �Ĵ���˵��: ����0����ַ��λ
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  base_address_high : 32; /* bit[0-31]: Controls the base address [63:32] of region 0.
                                                            The TZASC only permits a region to start at address 0x0, or at a multiple of its region size. If you program a region size to be 8GB or more, then the TZASC might ignore certain bits depending on the region size.  */
    } reg;
} SOC_TZASC_region_setup_high_0_UNION;
#endif
#define SOC_TZASC_region_setup_high_0_base_address_high_START  (0)
#define SOC_TZASC_region_setup_high_0_base_address_high_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_TZASC_region_attributes_0_UNION
 �ṹ˵��  : region_attributes_0 �Ĵ����ṹ���塣��ַƫ����:0x0108����ֵ:0x00000000�����:32
 �Ĵ���˵��: ����0�������üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  en                : 1;  /* bit[0]    : Enable for region:
                                                             0 = region is disabled
                                                             1 = region is enabled. */
        unsigned int  size              : 6;  /* bit[1-6]  : Size of region */
        unsigned int  reserved_0        : 1;  /* bit[7]    :  */
        unsigned int  subregion_disable : 8;  /* bit[8-15] : Regions are split into eight equal-sized sub-regions, and each bit enables the corresponding
                                                             subregion to be disabled:
                                                             Bit [15] = 1 Subregion 7 is disabled.
                                                             Bit [14] = 1 Subregion 6 is disabled.
                                                             Bit [13] = 1 Subregion 5 is disabled.
                                                             Bit [12] = 1 Subregion 4 is disabled.
                                                             Bit [11] = 1 Subregion 3 is disabled.
                                                             Bit [10] = 1 Subregion 2 is disabled.
                                                             Bit [9] = 1 Subregion 1 is disabled.
                                                             Bit [8] = 1 Subregion 0 is disabled. */
        unsigned int  reserved_1        : 12; /* bit[16-27]:  */
        unsigned int  sp                : 4;  /* bit[28-31]: Permissions setting for region. If an AXI transaction occurs to region, the value in the sp field controls whether the TZASC permits the transaction to proceed.
                                                             sp Secure read Secure write Non-secure read Non-secure write
                                                             b0000 No No No No
                                                             b0100 No Yes No No
                                                             b0001, b0101 No Yes No Yes
                                                             b1000 Yes No No No
                                                             b0010, b1010 Yes No Yes No
                                                             b1100 Yes Yes No No
                                                             b1001, b1101 Yes Yes No Yes
                                                             b0110, b1110 Yes Yes Yes No
                                                             b0011, b0111, b1011, b1111 Yes Yes Yes Yes */
    } reg;
} SOC_TZASC_region_attributes_0_UNION;
#endif
#define SOC_TZASC_region_attributes_0_en_START                 (0)
#define SOC_TZASC_region_attributes_0_en_END                   (0)
#define SOC_TZASC_region_attributes_0_size_START               (1)
#define SOC_TZASC_region_attributes_0_size_END                 (6)
#define SOC_TZASC_region_attributes_0_subregion_disable_START  (8)
#define SOC_TZASC_region_attributes_0_subregion_disable_END    (15)
#define SOC_TZASC_region_attributes_0_sp_START                 (28)
#define SOC_TZASC_region_attributes_0_sp_END                   (31)


/*****************************************************************************
 �ṹ��    : SOC_TZASC_region_setup_low_1_UNION
 �ṹ˵��  : region_setup_low_1 �Ĵ����ṹ���塣��ַƫ����:0x0110����ֵ:0x00000000�����:32
 �Ĵ���˵��: ����1����ַ��λ
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved         : 15; /* bit[0-14] : Base address [14:0] is always zero because the TZASC does not permit the
                                                            region size to be less than 32KB. */
        unsigned int  base_address_low : 17; /* bit[15-31]: The TZASC only permits a region to start at address 0x0, or at a multiple of its region size. For example, if the size of a region is 512MB, and it is not at address 0x0, the only valid settings for this field are:
                                                            b00100000000000000
                                                            b01000000000000000
                                                            b01100000000000000
                                                            b10000000000000000
                                                            b10100000000000000
                                                            b11000000000000000
                                                            b11100000000000000.
                                                            If you attempt to set an inappropriate base address for the size of the region, the TZASC ignores certain bits depending on the region size. */
    } reg;
} SOC_TZASC_region_setup_low_1_UNION;
#endif
#define SOC_TZASC_region_setup_low_1_base_address_low_START  (15)
#define SOC_TZASC_region_setup_low_1_base_address_low_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_TZASC_region_setup_high_1_UNION
 �ṹ˵��  : region_setup_high_1 �Ĵ����ṹ���塣��ַƫ����:0x0114����ֵ:0x00000000�����:32
 �Ĵ���˵��: ����1����ַ��λ
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  base_address_high : 32; /* bit[0-31]: Controls the base address [63:32] of region.
                                                            The TZASC only permits a region to start at address 0x0, or at a multiple of its region size. If you program a region size to be 8GB or more, then the TZASC might ignore certain bits depending on the region size.  */
    } reg;
} SOC_TZASC_region_setup_high_1_UNION;
#endif
#define SOC_TZASC_region_setup_high_1_base_address_high_START  (0)
#define SOC_TZASC_region_setup_high_1_base_address_high_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_TZASC_region_attributes_1_UNION
 �ṹ˵��  : region_attributes_1 �Ĵ����ṹ���塣��ַƫ����:0x0118����ֵ:0x00000000�����:32
 �Ĵ���˵��: ����1�������üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  en                : 1;  /* bit[0]    : Enable for region 0:
                                                             0 = region is disabled
                                                             1 = region is enabled. */
        unsigned int  size              : 6;  /* bit[1-6]  : Size of region */
        unsigned int  reserved_0        : 1;  /* bit[7]    :  */
        unsigned int  subregion_disable : 8;  /* bit[8-15] : Regions are split into eight equal-sized sub-regions, and each bit enables the corresponding
                                                             subregion to be disabled:
                                                             Bit [15] = 1 Subregion 7 is disabled.
                                                             Bit [14] = 1 Subregion 6 is disabled.
                                                             Bit [13] = 1 Subregion 5 is disabled.
                                                             Bit [12] = 1 Subregion 4 is disabled.
                                                             Bit [11] = 1 Subregion 3 is disabled.
                                                             Bit [10] = 1 Subregion 2 is disabled.
                                                             Bit [9] = 1 Subregion 1 is disabled.
                                                             Bit [8] = 1 Subregion 0 is disabled. */
        unsigned int  reserved_1        : 12; /* bit[16-27]:  */
        unsigned int  sp                : 4;  /* bit[28-31]: Permissions setting for region. If an AXI transaction occurs to region, the value in the sp field controls whether the TZASC permits the transaction to proceed. */
    } reg;
} SOC_TZASC_region_attributes_1_UNION;
#endif
#define SOC_TZASC_region_attributes_1_en_START                 (0)
#define SOC_TZASC_region_attributes_1_en_END                   (0)
#define SOC_TZASC_region_attributes_1_size_START               (1)
#define SOC_TZASC_region_attributes_1_size_END                 (6)
#define SOC_TZASC_region_attributes_1_subregion_disable_START  (8)
#define SOC_TZASC_region_attributes_1_subregion_disable_END    (15)
#define SOC_TZASC_region_attributes_1_sp_START                 (28)
#define SOC_TZASC_region_attributes_1_sp_END                   (31)


/*****************************************************************************
 �ṹ��    : SOC_TZASC_region_setup_low_2_UNION
 �ṹ˵��  : region_setup_low_2 �Ĵ����ṹ���塣��ַƫ����:0x0120����ֵ:0x00000000�����:32
 �Ĵ���˵��: ����2����ַ��λ
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved         : 15; /* bit[0-14] : Base address [14:0] is always zero because the TZASC does not permit the
                                                            region size to be less than 32KB. */
        unsigned int  base_address_low : 17; /* bit[15-31]: The TZASC only permits a region to start at address 0x0, or at a multiple of its region size. For example, if the size of a region is 512MB, and it is not at address 0x0, the only valid settings for this field are:
                                                            b00100000000000000
                                                            b01000000000000000
                                                            b01100000000000000
                                                            b10000000000000000
                                                            b10100000000000000
                                                            b11000000000000000
                                                            b11100000000000000.
                                                            If you attempt to set an inappropriate base address for the size of the region, the TZASC ignores certain bits depending on the region size. */
    } reg;
} SOC_TZASC_region_setup_low_2_UNION;
#endif
#define SOC_TZASC_region_setup_low_2_base_address_low_START  (15)
#define SOC_TZASC_region_setup_low_2_base_address_low_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_TZASC_region_setup_high_2_UNION
 �ṹ˵��  : region_setup_high_2 �Ĵ����ṹ���塣��ַƫ����:0x0124����ֵ:0x00000000�����:32
 �Ĵ���˵��: ����2����ַ��λ
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  base_address_high : 32; /* bit[0-31]: Controls the base address [63:32] of region 0.
                                                            The TZASC only permits a region to start at address 0x0, or at a multiple of its region size. If you program a region size to be 8GB or more, then the TZASC might ignore certain bits depending on the region size.  */
    } reg;
} SOC_TZASC_region_setup_high_2_UNION;
#endif
#define SOC_TZASC_region_setup_high_2_base_address_high_START  (0)
#define SOC_TZASC_region_setup_high_2_base_address_high_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_TZASC_region_attributes_2_UNION
 �ṹ˵��  : region_attributes_2 �Ĵ����ṹ���塣��ַƫ����:0x0128����ֵ:0x00000000�����:32
 �Ĵ���˵��: ����2�������üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  en                : 1;  /* bit[0]    : Enable for region:
                                                             0 = region is disabled
                                                             1 = region is enabled. */
        unsigned int  size              : 6;  /* bit[1-6]  : Size of region */
        unsigned int  reserved_0        : 1;  /* bit[7]    :  */
        unsigned int  subregion_disable : 8;  /* bit[8-15] : Regions are split into eight equal-sized sub-regions, and each bit enables the corresponding
                                                             subregion to be disabled:
                                                             Bit [15] = 1 Subregion 7 is disabled.
                                                             Bit [14] = 1 Subregion 6 is disabled.
                                                             Bit [13] = 1 Subregion 5 is disabled.
                                                             Bit [12] = 1 Subregion 4 is disabled.
                                                             Bit [11] = 1 Subregion 3 is disabled.
                                                             Bit [10] = 1 Subregion 2 is disabled.
                                                             Bit [9] = 1 Subregion 1 is disabled.
                                                             Bit [8] = 1 Subregion 0 is disabled. */
        unsigned int  reserved_1        : 12; /* bit[16-27]:  */
        unsigned int  sp                : 4;  /* bit[28-31]: Permissions setting for region. If an AXI transaction occurs to region, the value in the sp field controls whether the TZASC permits the transaction to proceed. */
    } reg;
} SOC_TZASC_region_attributes_2_UNION;
#endif
#define SOC_TZASC_region_attributes_2_en_START                 (0)
#define SOC_TZASC_region_attributes_2_en_END                   (0)
#define SOC_TZASC_region_attributes_2_size_START               (1)
#define SOC_TZASC_region_attributes_2_size_END                 (6)
#define SOC_TZASC_region_attributes_2_subregion_disable_START  (8)
#define SOC_TZASC_region_attributes_2_subregion_disable_END    (15)
#define SOC_TZASC_region_attributes_2_sp_START                 (28)
#define SOC_TZASC_region_attributes_2_sp_END                   (31)


/*****************************************************************************
 �ṹ��    : SOC_TZASC_region_setup_low_3_UNION
 �ṹ˵��  : region_setup_low_3 �Ĵ����ṹ���塣��ַƫ����:0x0130����ֵ:0x00000000�����:32
 �Ĵ���˵��: ����3����ַ��λ
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved         : 15; /* bit[0-14] : Base address [14:0] is always zero because the TZASC does not permit the
                                                            region size to be less than 32KB. */
        unsigned int  base_address_low : 17; /* bit[15-31]: The TZASC only permits a region to start at address 0x0, or at a multiple of its region size. For example, if the size of a region is 512MB, and it is not at address 0x0, the only valid settings for this field are:
                                                            b00100000000000000
                                                            b01000000000000000
                                                            b01100000000000000
                                                            b10000000000000000
                                                            b10100000000000000
                                                            b11000000000000000
                                                            b11100000000000000.
                                                            If you attempt to set an inappropriate base address for the size of the region, the TZASC ignores certain bits depending on the region size. */
    } reg;
} SOC_TZASC_region_setup_low_3_UNION;
#endif
#define SOC_TZASC_region_setup_low_3_base_address_low_START  (15)
#define SOC_TZASC_region_setup_low_3_base_address_low_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_TZASC_region_setup_high_3_UNION
 �ṹ˵��  : region_setup_high_3 �Ĵ����ṹ���塣��ַƫ����:0x0134����ֵ:0x00000000�����:32
 �Ĵ���˵��: ����3����ַ��λ
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  base_address_high : 32; /* bit[0-31]: Controls the base address [63:32] of region 0.
                                                            The TZASC only permits a region to start at address 0x0, or at a multiple of its region size. If you program a region size to be 8GB or more, then the TZASC might ignore certain bits depending on the region size.  */
    } reg;
} SOC_TZASC_region_setup_high_3_UNION;
#endif
#define SOC_TZASC_region_setup_high_3_base_address_high_START  (0)
#define SOC_TZASC_region_setup_high_3_base_address_high_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_TZASC_region_attributes_3_UNION
 �ṹ˵��  : region_attributes_3 �Ĵ����ṹ���塣��ַƫ����:0x0138����ֵ:0x00000000�����:32
 �Ĵ���˵��: ����3�������üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  en                : 1;  /* bit[0]    : Enable for region:
                                                             0 = region is disabled
                                                             1 = region is enabled. */
        unsigned int  size              : 6;  /* bit[1-6]  : Size of region */
        unsigned int  reserved_0        : 1;  /* bit[7]    :  */
        unsigned int  subregion_disable : 8;  /* bit[8-15] : Regions are split into eight equal-sized sub-regions, and each bit enables the corresponding
                                                             subregion to be disabled:
                                                             Bit [15] = 1 Subregion 7 is disabled.
                                                             Bit [14] = 1 Subregion 6 is disabled.
                                                             Bit [13] = 1 Subregion 5 is disabled.
                                                             Bit [12] = 1 Subregion 4 is disabled.
                                                             Bit [11] = 1 Subregion 3 is disabled.
                                                             Bit [10] = 1 Subregion 2 is disabled.
                                                             Bit [9] = 1 Subregion 1 is disabled.
                                                             Bit [8] = 1 Subregion 0 is disabled. */
        unsigned int  reserved_1        : 12; /* bit[16-27]:  */
        unsigned int  sp                : 4;  /* bit[28-31]: Permissions setting for region. If an AXI transaction occurs to region, the value in the sp field controls whether the TZASC permits the transaction to proceed. */
    } reg;
} SOC_TZASC_region_attributes_3_UNION;
#endif
#define SOC_TZASC_region_attributes_3_en_START                 (0)
#define SOC_TZASC_region_attributes_3_en_END                   (0)
#define SOC_TZASC_region_attributes_3_size_START               (1)
#define SOC_TZASC_region_attributes_3_size_END                 (6)
#define SOC_TZASC_region_attributes_3_subregion_disable_START  (8)
#define SOC_TZASC_region_attributes_3_subregion_disable_END    (15)
#define SOC_TZASC_region_attributes_3_sp_START                 (28)
#define SOC_TZASC_region_attributes_3_sp_END                   (31)


/*****************************************************************************
 �ṹ��    : SOC_TZASC_region_setup_low_4_UNION
 �ṹ˵��  : region_setup_low_4 �Ĵ����ṹ���塣��ַƫ����:0x0140����ֵ:0x00000000�����:32
 �Ĵ���˵��: ����4����ַ��λ
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved         : 15; /* bit[0-14] : Base address [14:0] is always zero because the TZASC does not permit the
                                                            region size to be less than 32KB. */
        unsigned int  base_address_low : 17; /* bit[15-31]: The TZASC only permits a region to start at address 0x0, or at a multiple of its region size. For example, if the size of a region is 512MB, and it is not at address 0x0, the only valid settings for this field are:
                                                            b00100000000000000
                                                            b01000000000000000
                                                            b01100000000000000
                                                            b10000000000000000
                                                            b10100000000000000
                                                            b11000000000000000
                                                            b11100000000000000.
                                                            If you attempt to set an inappropriate base address for the size of the region, the TZASC ignores certain bits depending on the region size. */
    } reg;
} SOC_TZASC_region_setup_low_4_UNION;
#endif
#define SOC_TZASC_region_setup_low_4_base_address_low_START  (15)
#define SOC_TZASC_region_setup_low_4_base_address_low_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_TZASC_region_setup_high_4_UNION
 �ṹ˵��  : region_setup_high_4 �Ĵ����ṹ���塣��ַƫ����:0x0144����ֵ:0x00000000�����:32
 �Ĵ���˵��: ����4����ַ��λ
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  base_address_high : 32; /* bit[0-31]: Controls the base address [63:32] of region 0.
                                                            The TZASC only permits a region to start at address 0x0, or at a multiple of its region size. If you program a region size to be 8GB or more, then the TZASC might ignore certain bits depending on the region size.  */
    } reg;
} SOC_TZASC_region_setup_high_4_UNION;
#endif
#define SOC_TZASC_region_setup_high_4_base_address_high_START  (0)
#define SOC_TZASC_region_setup_high_4_base_address_high_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_TZASC_region_attributes_4_UNION
 �ṹ˵��  : region_attributes_4 �Ĵ����ṹ���塣��ַƫ����:0x0148����ֵ:0x00000000�����:32
 �Ĵ���˵��: ����4�������üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  en                : 1;  /* bit[0]    : Enable for region:
                                                             0 = region is disabled
                                                             1 = region is enabled. */
        unsigned int  size              : 6;  /* bit[1-6]  : Size of region */
        unsigned int  reserved_0        : 1;  /* bit[7]    :  */
        unsigned int  subregion_disable : 8;  /* bit[8-15] : Regions are split into eight equal-sized sub-regions, and each bit enables the corresponding
                                                             subregion to be disabled:
                                                             Bit [15] = 1 Subregion 7 is disabled.
                                                             Bit [14] = 1 Subregion 6 is disabled.
                                                             Bit [13] = 1 Subregion 5 is disabled.
                                                             Bit [12] = 1 Subregion 4 is disabled.
                                                             Bit [11] = 1 Subregion 3 is disabled.
                                                             Bit [10] = 1 Subregion 2 is disabled.
                                                             Bit [9] = 1 Subregion 1 is disabled.
                                                             Bit [8] = 1 Subregion 0 is disabled. */
        unsigned int  reserved_1        : 12; /* bit[16-27]:  */
        unsigned int  sp                : 4;  /* bit[28-31]: Permissions setting for region. If an AXI transaction occurs to region, the value in the sp field controls whether the TZASC permits the transaction to proceed. */
    } reg;
} SOC_TZASC_region_attributes_4_UNION;
#endif
#define SOC_TZASC_region_attributes_4_en_START                 (0)
#define SOC_TZASC_region_attributes_4_en_END                   (0)
#define SOC_TZASC_region_attributes_4_size_START               (1)
#define SOC_TZASC_region_attributes_4_size_END                 (6)
#define SOC_TZASC_region_attributes_4_subregion_disable_START  (8)
#define SOC_TZASC_region_attributes_4_subregion_disable_END    (15)
#define SOC_TZASC_region_attributes_4_sp_START                 (28)
#define SOC_TZASC_region_attributes_4_sp_END                   (31)


/*****************************************************************************
 �ṹ��    : SOC_TZASC_region_setup_low_5_UNION
 �ṹ˵��  : region_setup_low_5 �Ĵ����ṹ���塣��ַƫ����:0x0150����ֵ:0x00000000�����:32
 �Ĵ���˵��: ����5����ַ��λ
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved         : 15; /* bit[0-14] : Base address [14:0] is always zero because the TZASC does not permit the
                                                            region size to be less than 32KB. */
        unsigned int  base_address_low : 17; /* bit[15-31]: The TZASC only permits a region to start at address 0x0, or at a multiple of its region size. For example, if the size of a region is 512MB, and it is not at address 0x0, the only valid settings for this field are:
                                                            b00100000000000000
                                                            b01000000000000000
                                                            b01100000000000000
                                                            b10000000000000000
                                                            b10100000000000000
                                                            b11000000000000000
                                                            b11100000000000000.
                                                            If you attempt to set an inappropriate base address for the size of the region, the TZASC ignores certain bits depending on the region size. */
    } reg;
} SOC_TZASC_region_setup_low_5_UNION;
#endif
#define SOC_TZASC_region_setup_low_5_base_address_low_START  (15)
#define SOC_TZASC_region_setup_low_5_base_address_low_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_TZASC_region_setup_high_5_UNION
 �ṹ˵��  : region_setup_high_5 �Ĵ����ṹ���塣��ַƫ����:0x0154����ֵ:0x00000000�����:32
 �Ĵ���˵��: ����5����ַ��λ
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  base_address_high : 32; /* bit[0-31]: Controls the base address [63:32] of region 0.
                                                            The TZASC only permits a region to start at address 0x0, or at a multiple of its region size. If you program a region size to be 8GB or more, then the TZASC might ignore certain bits depending on the region size.  */
    } reg;
} SOC_TZASC_region_setup_high_5_UNION;
#endif
#define SOC_TZASC_region_setup_high_5_base_address_high_START  (0)
#define SOC_TZASC_region_setup_high_5_base_address_high_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_TZASC_region_attributes_5_UNION
 �ṹ˵��  : region_attributes_5 �Ĵ����ṹ���塣��ַƫ����:0x0158����ֵ:0x00000000�����:32
 �Ĵ���˵��: ����5�������üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  en                : 1;  /* bit[0]    : Enable for region:
                                                             0 = region is disabled
                                                             1 = region is enabled. */
        unsigned int  size              : 6;  /* bit[1-6]  : Size of region */
        unsigned int  reserved_0        : 1;  /* bit[7]    :  */
        unsigned int  subregion_disable : 8;  /* bit[8-15] : Regions are split into eight equal-sized sub-regions, and each bit enables the corresponding
                                                             subregion to be disabled:
                                                             Bit [15] = 1 Subregion 7 is disabled.
                                                             Bit [14] = 1 Subregion 6 is disabled.
                                                             Bit [13] = 1 Subregion 5 is disabled.
                                                             Bit [12] = 1 Subregion 4 is disabled.
                                                             Bit [11] = 1 Subregion 3 is disabled.
                                                             Bit [10] = 1 Subregion 2 is disabled.
                                                             Bit [9] = 1 Subregion 1 is disabled.
                                                             Bit [8] = 1 Subregion 0 is disabled. */
        unsigned int  reserved_1        : 12; /* bit[16-27]:  */
        unsigned int  sp                : 4;  /* bit[28-31]: Permissions setting for region. If an AXI transaction occurs to region, the value in the sp field controls whether the TZASC permits the transaction to proceed. */
    } reg;
} SOC_TZASC_region_attributes_5_UNION;
#endif
#define SOC_TZASC_region_attributes_5_en_START                 (0)
#define SOC_TZASC_region_attributes_5_en_END                   (0)
#define SOC_TZASC_region_attributes_5_size_START               (1)
#define SOC_TZASC_region_attributes_5_size_END                 (6)
#define SOC_TZASC_region_attributes_5_subregion_disable_START  (8)
#define SOC_TZASC_region_attributes_5_subregion_disable_END    (15)
#define SOC_TZASC_region_attributes_5_sp_START                 (28)
#define SOC_TZASC_region_attributes_5_sp_END                   (31)


/*****************************************************************************
 �ṹ��    : SOC_TZASC_region_setup_low_6_UNION
 �ṹ˵��  : region_setup_low_6 �Ĵ����ṹ���塣��ַƫ����:0x0160����ֵ:0x00000000�����:32
 �Ĵ���˵��: ����6����ַ��λ
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved         : 15; /* bit[0-14] : Base address [14:0] is always zero because the TZASC does not permit the
                                                            region size to be less than 32KB. */
        unsigned int  base_address_low : 17; /* bit[15-31]: The TZASC only permits a region to start at address 0x0, or at a multiple of its region size. For example, if the size of a region is 512MB, and it is not at address 0x0, the only valid settings for this field are:
                                                            b00100000000000000
                                                            b01000000000000000
                                                            b01100000000000000
                                                            b10000000000000000
                                                            b10100000000000000
                                                            b11000000000000000
                                                            b11100000000000000.
                                                            If you attempt to set an inappropriate base address for the size of the region, the TZASC ignores certain bits depending on the region size. */
    } reg;
} SOC_TZASC_region_setup_low_6_UNION;
#endif
#define SOC_TZASC_region_setup_low_6_base_address_low_START  (15)
#define SOC_TZASC_region_setup_low_6_base_address_low_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_TZASC_region_setup_high_6_UNION
 �ṹ˵��  : region_setup_high_6 �Ĵ����ṹ���塣��ַƫ����:0x0164����ֵ:0x00000000�����:32
 �Ĵ���˵��: ����6����ַ��λ
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  base_address_high : 32; /* bit[0-31]: Controls the base address [63:32] of region 0.
                                                            The TZASC only permits a region to start at address 0x0, or at a multiple of its region size. If you program a region size to be 8GB or more, then the TZASC might ignore certain bits depending on the region size.  */
    } reg;
} SOC_TZASC_region_setup_high_6_UNION;
#endif
#define SOC_TZASC_region_setup_high_6_base_address_high_START  (0)
#define SOC_TZASC_region_setup_high_6_base_address_high_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_TZASC_region_attributes_6_UNION
 �ṹ˵��  : region_attributes_6 �Ĵ����ṹ���塣��ַƫ����:0x0168����ֵ:0x00000000�����:32
 �Ĵ���˵��: ����6�������üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  en                : 1;  /* bit[0]    : Enable for region:
                                                             0 = region is disabled
                                                             1 = region is enabled. */
        unsigned int  size              : 6;  /* bit[1-6]  : Size of region */
        unsigned int  reserved_0        : 1;  /* bit[7]    :  */
        unsigned int  subregion_disable : 8;  /* bit[8-15] : Regions are split into eight equal-sized sub-regions, and each bit enables the corresponding
                                                             subregion to be disabled:
                                                             Bit [15] = 1 Subregion 7 is disabled.
                                                             Bit [14] = 1 Subregion 6 is disabled.
                                                             Bit [13] = 1 Subregion 5 is disabled.
                                                             Bit [12] = 1 Subregion 4 is disabled.
                                                             Bit [11] = 1 Subregion 3 is disabled.
                                                             Bit [10] = 1 Subregion 2 is disabled.
                                                             Bit [9] = 1 Subregion 1 is disabled.
                                                             Bit [8] = 1 Subregion 0 is disabled. */
        unsigned int  reserved_1        : 12; /* bit[16-27]:  */
        unsigned int  sp                : 4;  /* bit[28-31]: Permissions setting for region. If an AXI transaction occurs to region, the value in the sp field controls whether the TZASC permits the transaction to proceed. */
    } reg;
} SOC_TZASC_region_attributes_6_UNION;
#endif
#define SOC_TZASC_region_attributes_6_en_START                 (0)
#define SOC_TZASC_region_attributes_6_en_END                   (0)
#define SOC_TZASC_region_attributes_6_size_START               (1)
#define SOC_TZASC_region_attributes_6_size_END                 (6)
#define SOC_TZASC_region_attributes_6_subregion_disable_START  (8)
#define SOC_TZASC_region_attributes_6_subregion_disable_END    (15)
#define SOC_TZASC_region_attributes_6_sp_START                 (28)
#define SOC_TZASC_region_attributes_6_sp_END                   (31)


/*****************************************************************************
 �ṹ��    : SOC_TZASC_region_setup_low_7_UNION
 �ṹ˵��  : region_setup_low_7 �Ĵ����ṹ���塣��ַƫ����:0x0170����ֵ:0x00000000�����:32
 �Ĵ���˵��: ����7����ַ��λ
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved         : 15; /* bit[0-14] : Base address [14:0] is always zero because the TZASC does not permit the
                                                            region size to be less than 32KB. */
        unsigned int  base_address_low : 17; /* bit[15-31]: The TZASC only permits a region to start at address 0x0, or at a multiple of its region size. For example, if the size of a region is 512MB, and it is not at address 0x0, the only valid settings for this field are:
                                                            b00100000000000000
                                                            b01000000000000000
                                                            b01100000000000000
                                                            b10000000000000000
                                                            b10100000000000000
                                                            b11000000000000000
                                                            b11100000000000000.
                                                            If you attempt to set an inappropriate base address for the size of the region, the TZASC ignores certain bits depending on the region size. */
    } reg;
} SOC_TZASC_region_setup_low_7_UNION;
#endif
#define SOC_TZASC_region_setup_low_7_base_address_low_START  (15)
#define SOC_TZASC_region_setup_low_7_base_address_low_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_TZASC_region_setup_high_7_UNION
 �ṹ˵��  : region_setup_high_7 �Ĵ����ṹ���塣��ַƫ����:0x0174����ֵ:0x00000000�����:32
 �Ĵ���˵��: ����7����ַ��λ
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  base_address_high : 32; /* bit[0-31]: Controls the base address [63:32] of region 0.
                                                            The TZASC only permits a region to start at address 0x0, or at a multiple of its region size. If you program a region size to be 8GB or more, then the TZASC might ignore certain bits depending on the region size.  */
    } reg;
} SOC_TZASC_region_setup_high_7_UNION;
#endif
#define SOC_TZASC_region_setup_high_7_base_address_high_START  (0)
#define SOC_TZASC_region_setup_high_7_base_address_high_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_TZASC_region_attributes_7_UNION
 �ṹ˵��  : region_attributes_7 �Ĵ����ṹ���塣��ַƫ����:0x0178����ֵ:0x00000000�����:32
 �Ĵ���˵��: ����7�������üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  en                : 1;  /* bit[0]    : Enable for region:
                                                             0 = region is disabled
                                                             1 = region is enabled. */
        unsigned int  size              : 6;  /* bit[1-6]  : Size of region */
        unsigned int  reserved_0        : 1;  /* bit[7]    :  */
        unsigned int  subregion_disable : 8;  /* bit[8-15] : Regions are split into eight equal-sized sub-regions, and each bit enables the corresponding
                                                             subregion to be disabled:
                                                             Bit [15] = 1 Subregion 7 is disabled.
                                                             Bit [14] = 1 Subregion 6 is disabled.
                                                             Bit [13] = 1 Subregion 5 is disabled.
                                                             Bit [12] = 1 Subregion 4 is disabled.
                                                             Bit [11] = 1 Subregion 3 is disabled.
                                                             Bit [10] = 1 Subregion 2 is disabled.
                                                             Bit [9] = 1 Subregion 1 is disabled.
                                                             Bit [8] = 1 Subregion 0 is disabled. */
        unsigned int  reserved_1        : 12; /* bit[16-27]:  */
        unsigned int  sp                : 4;  /* bit[28-31]: Permissions setting for region. If an AXI transaction occurs to region, the value in the sp field controls whether the TZASC permits the transaction to proceed. */
    } reg;
} SOC_TZASC_region_attributes_7_UNION;
#endif
#define SOC_TZASC_region_attributes_7_en_START                 (0)
#define SOC_TZASC_region_attributes_7_en_END                   (0)
#define SOC_TZASC_region_attributes_7_size_START               (1)
#define SOC_TZASC_region_attributes_7_size_END                 (6)
#define SOC_TZASC_region_attributes_7_subregion_disable_START  (8)
#define SOC_TZASC_region_attributes_7_subregion_disable_END    (15)
#define SOC_TZASC_region_attributes_7_sp_START                 (28)
#define SOC_TZASC_region_attributes_7_sp_END                   (31)


/*****************************************************************************
 �ṹ��    : SOC_TZASC_itcrg_UNION
 �ṹ˵��  : itcrg �Ĵ����ṹ���塣��ַƫ����:0x0E00����ֵ:0x00000000�����:32
 �Ĵ���˵��: �����߼�ʹ�ܼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  int_test_en : 1;  /* bit[0]   : Controls the enabling of, or provides the status of, the integration test logic:
                                                      0 = integration test logic is disabled
                                                      1 = integration test logic is enabled. */
        unsigned int  reserved    : 31; /* bit[1-31]:  */
    } reg;
} SOC_TZASC_itcrg_UNION;
#endif
#define SOC_TZASC_itcrg_int_test_en_START  (0)
#define SOC_TZASC_itcrg_int_test_en_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_TZASC_itid_UNION
 �ṹ˵��  : itid �Ĵ����ṹ���塣��ַƫ����:0x0E04����ֵ:0x00000000�����:32
 �Ĵ���˵��: secure_boot_lock״̬�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  itip_secure_boot_lock : 1;  /* bit[0]   : Returns the status of secure_boot_lock:
                                                                0 = secure_boot_lock is LOW
                                                                1 = secure_boot_lock is HIGH. */
        unsigned int  reserved              : 31; /* bit[1-31]:  */
    } reg;
} SOC_TZASC_itid_UNION;
#endif
#define SOC_TZASC_itid_itip_secure_boot_lock_START  (0)
#define SOC_TZASC_itid_itip_secure_boot_lock_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_TZASC_itop_UNION
 �ṹ˵��  : itop �Ĵ����ṹ���塣��ַƫ����:0x0E08����ֵ:0x00000000�����:32
 �Ĵ���˵��: tzasc_int״̬���üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  itop_int : 1;  /* bit[0]   : Set or reset the value of tzasc_int port by writing 1 or 0 into itop_int bit. If you read, the written
                                                   value can be read back.
                                                   0 = tzasc_int is LOW
                                                   1 = tzasc_int is HIGH. */
        unsigned int  reserved : 31; /* bit[1-31]:  */
    } reg;
} SOC_TZASC_itop_UNION;
#endif
#define SOC_TZASC_itop_itop_int_START  (0)
#define SOC_TZASC_itop_itop_int_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_TZASC_periph_id_4_UNION
 �ṹ˵��  : periph_id_4 �Ĵ����ṹ���塣��ַƫ����:0x0FD0����ֵ:0x00000004�����:32
 �Ĵ���˵��: ����ID�Ĵ���4
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  jep106_c_code : 4;  /* bit[0-3] : The JEP106 continuation code value represents how many 0x7F continuation characters occur in
                                                        the manufacturer��s identity code. See JEP106, Standard Manufacturer��s Identification Code.
                                                        These bits read back as 0x4. */
        unsigned int  no_4KB_count  : 4;  /* bit[4-7] : The number of 4KB address blocks you require, to access the registers, expressed in powers of 2.
                                                        These bits read back as 0x0. */
        unsigned int  reserved      : 24; /* bit[8-31]:  */
    } reg;
} SOC_TZASC_periph_id_4_UNION;
#endif
#define SOC_TZASC_periph_id_4_jep106_c_code_START  (0)
#define SOC_TZASC_periph_id_4_jep106_c_code_END    (3)
#define SOC_TZASC_periph_id_4_no_4KB_count_START   (4)
#define SOC_TZASC_periph_id_4_no_4KB_count_END     (7)


/*****************************************************************************
 �ṹ��    : SOC_TZASC_periph_id_0_UNION
 �ṹ˵��  : periph_id_0 �Ĵ����ṹ���塣��ַƫ����:0x0FE0����ֵ:0x00000080�����:32
 �Ĵ���˵��: ����ID�Ĵ���0
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  part_number_0 : 8;  /* bit[0-7] : These bits read back as 0x80 */
        unsigned int  reserved      : 24; /* bit[8-31]:  */
    } reg;
} SOC_TZASC_periph_id_0_UNION;
#endif
#define SOC_TZASC_periph_id_0_part_number_0_START  (0)
#define SOC_TZASC_periph_id_0_part_number_0_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_TZASC_periph_id_1_UNION
 �ṹ˵��  : periph_id_1 �Ĵ����ṹ���塣��ַƫ����:0x0FE4����ֵ:0x000000B3�����:32
 �Ĵ���˵��: ����ID�Ĵ���1
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  part_number_1 : 4;  /* bit[0-3] : These bits read back as 0x3. */
        unsigned int  jep106_id_3_0 : 4;  /* bit[4-7] : JEP106 identity code [3:0]. See the JEP106, Standard Manufacturer��s Identification Code.
                                                        These bits read back as 0xB because ARM is the designer of the peripheral. */
        unsigned int  reserved      : 24; /* bit[8-31]:  */
    } reg;
} SOC_TZASC_periph_id_1_UNION;
#endif
#define SOC_TZASC_periph_id_1_part_number_1_START  (0)
#define SOC_TZASC_periph_id_1_part_number_1_END    (3)
#define SOC_TZASC_periph_id_1_jep106_id_3_0_START  (4)
#define SOC_TZASC_periph_id_1_jep106_id_3_0_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_TZASC_periph_id_2_UNION
 �ṹ˵��  : periph_id_2 �Ĵ����ṹ���塣��ַƫ����:0x0FE8����ֵ:0x0000001B�����:32
 �Ĵ���˵��: ����ID�Ĵ���2
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  jep106_id_6_4 : 3;  /* bit[0-2] : JEP106 identity code [6:4]. See the JEP106, Standard Manufacturer��s Identification Code. These
                                                        bits read back as b011 because ARM is the designer of the peripheral. */
        unsigned int  jedec_used    : 1;  /* bit[3]   : This indicates that the TZASC uses a manufacturer��s identity code that was allocated by JEDEC
                                                        according to JEP106. This bit always reads back as 0x1. */
        unsigned int  revision      : 4;  /* bit[4-7] : Identifies the revision of the TZASC. For revision r0p1, this field is set to 0x1. */
        unsigned int  reserved      : 24; /* bit[8-31]:  */
    } reg;
} SOC_TZASC_periph_id_2_UNION;
#endif
#define SOC_TZASC_periph_id_2_jep106_id_6_4_START  (0)
#define SOC_TZASC_periph_id_2_jep106_id_6_4_END    (2)
#define SOC_TZASC_periph_id_2_jedec_used_START     (3)
#define SOC_TZASC_periph_id_2_jedec_used_END       (3)
#define SOC_TZASC_periph_id_2_revision_START       (4)
#define SOC_TZASC_periph_id_2_revision_END         (7)


/*****************************************************************************
 �ṹ��    : SOC_TZASC_periph_id_3_UNION
 �ṹ˵��  : periph_id_3 �Ĵ����ṹ���塣��ַƫ����:0x0FEC����ֵ:0x00000000�����:32
 �Ĵ���˵��: ����ID�Ĵ���3
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mod_number : 4;  /* bit[0-3] : You can update this field by modifying the RTL of the TZASC. ARM sets this to 0x0. */
        unsigned int  RevAnd     : 4;  /* bit[4-7] : The top-level RTL provides four AND gates that are tied-off to provide an output value of 0x0.
                                                     When silicon is available, if metal fixes are necessary, the manufacturer can modify the tie-offs to indicate that a revision of the silicon has occurred. */
        unsigned int  reserved   : 24; /* bit[8-31]:  */
    } reg;
} SOC_TZASC_periph_id_3_UNION;
#endif
#define SOC_TZASC_periph_id_3_mod_number_START  (0)
#define SOC_TZASC_periph_id_3_mod_number_END    (3)
#define SOC_TZASC_periph_id_3_RevAnd_START      (4)
#define SOC_TZASC_periph_id_3_RevAnd_END        (7)






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

#endif /* end of soc_tzasc_interface.h */
