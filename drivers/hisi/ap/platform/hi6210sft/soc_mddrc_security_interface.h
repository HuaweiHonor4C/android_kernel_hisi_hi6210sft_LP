

/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/

#ifndef __SOC_MDDRC_SECURITY_INTERFACE_H__
#define __SOC_MDDRC_SECURITY_INTERFACE_H__

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
/* �Ĵ���˵��������������Ϣ
   λ����UNION�ṹ:  SOC_MDDRC_SECURITY_SEC_RTL_INF_UNION */
#define SOC_MDDRC_SECURITY_SEC_RTL_INF_ADDR(base)     ((base) + (0x000))

/* �Ĵ���˵������ȫ����ʹ��
   λ����UNION�ṹ:  SOC_MDDRC_SECURITY_SEC_BYPASS_UNION */
#define SOC_MDDRC_SECURITY_SEC_BYPASS_ADDR(base)      ((base) + (0x004))

/* �Ĵ���˵����������ȫ����������üĴ���
            ����secur_boot_lock�źű����߳���һ��ʱ������ʱ���˼Ĵ���������ѡ������ؼĴ���������Ϊֻ����ֻ��ͨ��ϵͳ��λ���������
   λ����UNION�ṹ:  SOC_MDDRC_SECURITY_SEC_LOCKDOWN_SELECT_UNION */
#define SOC_MDDRC_SECURITY_SEC_LOCKDOWN_SELECT_ADDR(base) ((base) + (0x010))

/* �Ĵ���˵�����ж�ʹ��
   λ����UNION�ṹ:  SOC_MDDRC_SECURITY_SEC_INT_EN_UNION */
#define SOC_MDDRC_SECURITY_SEC_INT_EN_ADDR(base)      ((base) + (0x020))

/* �Ĵ���˵�����ж�״̬
   λ����UNION�ṹ:  SOC_MDDRC_SECURITY_SEC_INT_STATUS_UNION */
#define SOC_MDDRC_SECURITY_SEC_INT_STATUS_ADDR(base)  ((base) + (0x024))

/* �Ĵ���˵�����ж����
   λ����UNION�ṹ:  SOC_MDDRC_SECURITY_SEC_INT_CLEAR_UNION */
#define SOC_MDDRC_SECURITY_SEC_INT_CLEAR_ADDR(base)   ((base) + (0x028))

/* �Ĵ���˵������¼�׸�ԽȨ�������Ϣ0
   λ����UNION�ṹ:  SOC_MDDRC_SECURITY_SEC_FAIL_CMD_INF_0_UNION */
#define SOC_MDDRC_SECURITY_SEC_FAIL_CMD_INF_0_ADDR(base) ((base) + (0x080))

/* �Ĵ���˵������¼�׸�ԽȨ�������Ϣ1
   λ����UNION�ṹ:  SOC_MDDRC_SECURITY_SEC_FAIL_CMD_INF_1_UNION */
#define SOC_MDDRC_SECURITY_SEC_FAIL_CMD_INF_1_ADDR(base) ((base) + (0x084))

/* �Ĵ���˵������¼�׸�ԽȨ�������Ϣ2
   λ����UNION�ṹ:  SOC_MDDRC_SECURITY_SEC_FAIL_CMD_INF_2_UNION */
#define SOC_MDDRC_SECURITY_SEC_FAIL_CMD_INF_2_ADDR(base) ((base) + (0x088))

/* �Ĵ���˵������ַ����ӳ��
            ��������������sucure_boot_lock�źű����߹�����ld_region_map����Ϊ1���Ҷ�Ӧregion��ld_regions��ѡ����Χ�ڡ���
   λ����UNION�ṹ:  SOC_MDDRC_SECURITY_SEC_RGN_MAP_UNION */
#define SOC_MDDRC_SECURITY_SEC_RGN_MAP_ADDR(base, regions)  ((base) + (0x100+0x10*(regions)))

/* �Ĵ���˵��������ַ�����Ȩ����������
            ��������������sucure_boot_lock�źű����߹�����ld_region_attrib����Ϊ1���Ҷ�Ӧregion��ld_regions��ѡ����Χ�ڡ���
   λ����UNION�ṹ:  SOC_MDDRC_SECURITY_SEC_RGN_ATTRIB_UNION */
#define SOC_MDDRC_SECURITY_SEC_RGN_ATTRIB_ADDR(base, regions)  ((base) + (0x104+0x10*(regions)))

/* �Ĵ���˵����������ƥ��MasterID��������
            ��������������sucure_boot_lock�źű����߹�����ld_mid_wr����Ϊ1���Ҷ�Ӧregion��ld_regions��ѡ����Χ�ڡ���
   λ����UNION�ṹ:  SOC_MDDRC_SECURITY_SEC_MID_WR_UNION */
#define SOC_MDDRC_SECURITY_SEC_MID_WR_ADDR(base, regions)  ((base) + (0x108+0x10*(regions)))

/* �Ĵ���˵����������ƥ��MasterID��������
            ��������������sucure_boot_lock�źű����߹�����ld_mid_rd����Ϊ1���Ҷ�Ӧregion��ld_regions��ѡ����Χ�ڡ���
   λ����UNION�ṹ:  SOC_MDDRC_SECURITY_SEC_MID_RD_UNION */
#define SOC_MDDRC_SECURITY_SEC_MID_RD_ADDR(base, regions)  ((base) + (0x10C+0x10*(regions)))

/* �Ĵ���˵�������ɲ��Կ��ƼĴ���
   λ����UNION�ṹ:  SOC_MDDRC_SECURITY_SEC_ITCRG_UNION */
#define SOC_MDDRC_SECURITY_SEC_ITCRG_ADDR(base)       ((base) + (0x3C0))

/* �Ĵ���˵�������ɲ�������Ĵ���
   λ����UNION�ṹ:  SOC_MDDRC_SECURITY_SEC_ITIP_UNION */
#define SOC_MDDRC_SECURITY_SEC_ITIP_ADDR(base)        ((base) + (0x3C4))

/* �Ĵ���˵�������ɲ�������Ĵ���
   λ����UNION�ṹ:  SOC_MDDRC_SECURITY_SEC_ITOP_UNION */
#define SOC_MDDRC_SECURITY_SEC_ITOP_ADDR(base)        ((base) + (0x3C8))





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
 �ṹ��    : SOC_MDDRC_SECURITY_SEC_RTL_INF_UNION
 �ṹ˵��  : SEC_RTL_INF �Ĵ����ṹ���塣��ַƫ����:0x000����ֵ:0x0000000F�����:32
 �Ĵ���˵��: ����������Ϣ
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  no_of_rgns : 8;  /* bit[0-7]  : ����궨���regions������
                                                      8'd0��reserved��
                                                      8'd1��reserved��
                                                      8'd2��2regions��
                                                      8'd3��3regions��
                                                      ���� */
        unsigned int  subrgn_en  : 1;  /* bit[8]    : ����궨���sub_region�����Ƿ�ʹ�ܡ�
                                                      0����sub_region���ܣ�
                                                      1����sub_region���ܡ� */
        unsigned int  reserved   : 19; /* bit[9-27] : ������ */
        unsigned int  version    : 4;  /* bit[28-31]: 4'b0010����ȫģ��ڶ��� */
    } reg;
} SOC_MDDRC_SECURITY_SEC_RTL_INF_UNION;
#endif
#define SOC_MDDRC_SECURITY_SEC_RTL_INF_no_of_rgns_START  (0)
#define SOC_MDDRC_SECURITY_SEC_RTL_INF_no_of_rgns_END    (7)
#define SOC_MDDRC_SECURITY_SEC_RTL_INF_subrgn_en_START   (8)
#define SOC_MDDRC_SECURITY_SEC_RTL_INF_subrgn_en_END     (8)
#define SOC_MDDRC_SECURITY_SEC_RTL_INF_version_START     (28)
#define SOC_MDDRC_SECURITY_SEC_RTL_INF_version_END       (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_SECURITY_SEC_BYPASS_UNION
 �ṹ˵��  : SEC_BYPASS �Ĵ����ṹ���塣��ַƫ����:0x004����ֵ:0x00000001�����:32
 �Ĵ���˵��: ��ȫ����ʹ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  bypass   : 1;  /* bit[0]   : ��ȫģ��bypass��
                                                   0����ȫģ��ʹ�ܣ�
                                                   1����ȫģ��bypass��
                                                   ������������sucure_boot_lock�źű����߹�����ld_bypass����Ϊ1�� */
        unsigned int  reserved : 31; /* bit[1-31]: ������ */
    } reg;
} SOC_MDDRC_SECURITY_SEC_BYPASS_UNION;
#endif
#define SOC_MDDRC_SECURITY_SEC_BYPASS_bypass_START    (0)
#define SOC_MDDRC_SECURITY_SEC_BYPASS_bypass_END      (0)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_SECURITY_SEC_LOCKDOWN_SELECT_UNION
 �ṹ˵��  : SEC_LOCKDOWN_SELECT �Ĵ����ṹ���塣��ַƫ����:0x010����ֵ:0x00000000�����:32
 �Ĵ���˵��: ������ȫ����������üĴ���
            ����secur_boot_lock�źű����߳���һ��ʱ������ʱ���˼Ĵ���������ѡ������ؼĴ���������Ϊֻ����ֻ��ͨ��ϵͳ��λ���������
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ld_rgn_map    : 1;  /* bit[0]    : ����ѡ��region��SEC_REGION_MAP�Ĵ���Ϊֻ����
                                                         0����������
                                                         1��������
                                                         ������������sucure_boot_lock�źű����߹��� */
        unsigned int  ld_rgn_attrib : 1;  /* bit[1]    : ����ѡ��region��SEC_REGION_ATTRIB�Ĵ���Ϊֻ����
                                                         0����������
                                                         1��������
                                                         ������������sucure_boot_lock�źű����߹��� */
        unsigned int  ld_mid_rd     : 1;  /* bit[2]    : ����ѡ��region��SEC_MID_RD�Ĵ���Ϊֻ����
                                                         0����������
                                                         1��������
                                                         ������������sucure_boot_lock�źű����߹��� */
        unsigned int  ld_mid_wr     : 1;  /* bit[3]    : ����ѡ��region��SEC_MID_WR�Ĵ���Ϊֻ����
                                                         0����������
                                                         1��������
                                                         ������������sucure_boot_lock�źű����߹��� */
        unsigned int  ld_bypass     : 1;  /* bit[4]    : ����SEC_BYPASS�Ĵ���Ϊֻ����
                                                         0����������
                                                         1��������
                                                         ������������sucure_boot_lock�źű����߹��� */
        unsigned int  reserved_0    : 11; /* bit[5-15] : ������ */
        unsigned int  ld_rgns_sel   : 8;  /* bit[16-23]: ѡ���轫������üĴ�������Ϊֻ����regions��Χ��
                                                         ld_rgns_sel=N�������λ��ѡ��������N+1��rgn��
                                                         ������
                                                         ld_rgns_sel=5��rgn15~rgn10����ؼĴ�����ѡ��������no_of_rgns=16����
                                                         ע�⣺
                                                         1.��ѡ����rgn��������ʵ��rgn����no_of_rgns����ѡ��ȫ��rgn��
                                                         2.��ĳrgn��ѡ�������rgn��Ӧ������������üĴ����Ա�ѡ����
                                                         ��1��SEC_rgn_MAP��
                                                         ��2��SEC_rgn_ATTRIB��
                                                         ��3��SEC_MID_WR��
                                                         ��4��SEC_MID_RD��
                                                         ������������sucure_boot_lock�źű����߹�����ld_rgn_register����Ϊ1�� */
        unsigned int  reserved_1    : 8;  /* bit[24-31]: ������ */
    } reg;
} SOC_MDDRC_SECURITY_SEC_LOCKDOWN_SELECT_UNION;
#endif
#define SOC_MDDRC_SECURITY_SEC_LOCKDOWN_SELECT_ld_rgn_map_START     (0)
#define SOC_MDDRC_SECURITY_SEC_LOCKDOWN_SELECT_ld_rgn_map_END       (0)
#define SOC_MDDRC_SECURITY_SEC_LOCKDOWN_SELECT_ld_rgn_attrib_START  (1)
#define SOC_MDDRC_SECURITY_SEC_LOCKDOWN_SELECT_ld_rgn_attrib_END    (1)
#define SOC_MDDRC_SECURITY_SEC_LOCKDOWN_SELECT_ld_mid_rd_START      (2)
#define SOC_MDDRC_SECURITY_SEC_LOCKDOWN_SELECT_ld_mid_rd_END        (2)
#define SOC_MDDRC_SECURITY_SEC_LOCKDOWN_SELECT_ld_mid_wr_START      (3)
#define SOC_MDDRC_SECURITY_SEC_LOCKDOWN_SELECT_ld_mid_wr_END        (3)
#define SOC_MDDRC_SECURITY_SEC_LOCKDOWN_SELECT_ld_bypass_START      (4)
#define SOC_MDDRC_SECURITY_SEC_LOCKDOWN_SELECT_ld_bypass_END        (4)
#define SOC_MDDRC_SECURITY_SEC_LOCKDOWN_SELECT_ld_rgns_sel_START    (16)
#define SOC_MDDRC_SECURITY_SEC_LOCKDOWN_SELECT_ld_rgns_sel_END      (23)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_SECURITY_SEC_INT_EN_UNION
 �ṹ˵��  : SEC_INT_EN �Ĵ����ṹ���塣��ַƫ����:0x020����ֵ:0x00000001�����:32
 �Ĵ���˵��: �ж�ʹ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  int_en   : 1;  /* bit[0]   : �ж�ʹ�ܡ�
                                                   0����ֹ��
                                                   1��ʹ�ܡ�
                                                   ע�⣺ֻ�ǽ�ֹ�ж����������ؼĴ������ǻ�������¼�ж�״̬��ԽȨ������Ϣ�� */
        unsigned int  reserved : 31; /* bit[1-31]: ������ */
    } reg;
} SOC_MDDRC_SECURITY_SEC_INT_EN_UNION;
#endif
#define SOC_MDDRC_SECURITY_SEC_INT_EN_int_en_START    (0)
#define SOC_MDDRC_SECURITY_SEC_INT_EN_int_en_END      (0)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_SECURITY_SEC_INT_STATUS_UNION
 �ṹ˵��  : SEC_INT_STATUS �Ĵ����ṹ���塣��ַƫ����:0x024����ֵ:0x00000000�����:32
 �Ĵ���˵��: �ж�״̬
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  status   : 1;  /* bit[0]   : �ж�״ָ̬ʾ
                                                   0���ж�δ������
                                                   1���ж��Ѳ�����
                                                   ע�⣺��AXI_IFģ���AXI_INT_STATUS�Ĵ����У���ʶ����ж��������ĸ�AXI�˿ڵ�SECģ�� */
        unsigned int  overrun  : 1;  /* bit[1]   : ����ж�ָʾ
                                                   0���ж�δ������ֻ������һ�Σ�
                                                   1���ж��Ѳ�����Ρ� */
        unsigned int  reserved : 30; /* bit[2-31]: ������ */
    } reg;
} SOC_MDDRC_SECURITY_SEC_INT_STATUS_UNION;
#endif
#define SOC_MDDRC_SECURITY_SEC_INT_STATUS_status_START    (0)
#define SOC_MDDRC_SECURITY_SEC_INT_STATUS_status_END      (0)
#define SOC_MDDRC_SECURITY_SEC_INT_STATUS_overrun_START   (1)
#define SOC_MDDRC_SECURITY_SEC_INT_STATUS_overrun_END     (1)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_SECURITY_SEC_INT_CLEAR_UNION
 �ṹ˵��  : SEC_INT_CLEAR �Ĵ����ṹ���塣��ַƫ����:0x028����ֵ:0x00000000�����:32
 �Ĵ���˵��: �ж����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  clear : 32; /* bit[0-31]: д������ֵ���������ж�״̬�Ĵ���int_status�� */
    } reg;
} SOC_MDDRC_SECURITY_SEC_INT_CLEAR_UNION;
#endif
#define SOC_MDDRC_SECURITY_SEC_INT_CLEAR_clear_START  (0)
#define SOC_MDDRC_SECURITY_SEC_INT_CLEAR_clear_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_SECURITY_SEC_FAIL_CMD_INF_0_UNION
 �ṹ˵��  : SEC_FAIL_CMD_INF_0 �Ĵ����ṹ���塣��ַƫ����:0x080����ֵ:0x00000000�����:32
 �Ĵ���˵��: ��¼�׸�ԽȨ�������Ϣ0
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  address_low : 32; /* bit[0-31]: �ж�״̬���ǰ���׸�ԽȨ����ĵ�32λ��ַ */
    } reg;
} SOC_MDDRC_SECURITY_SEC_FAIL_CMD_INF_0_UNION;
#endif
#define SOC_MDDRC_SECURITY_SEC_FAIL_CMD_INF_0_address_low_START  (0)
#define SOC_MDDRC_SECURITY_SEC_FAIL_CMD_INF_0_address_low_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_SECURITY_SEC_FAIL_CMD_INF_1_UNION
 �ṹ˵��  : SEC_FAIL_CMD_INF_1 �Ĵ����ṹ���塣��ַƫ����:0x084����ֵ:0x00000000�����:32
 �Ĵ���˵��: ��¼�׸�ԽȨ�������Ϣ1
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  address_high : 8;  /* bit[0-7]  : �ж�״̬���ǰ���׸�ԽȨ����ĸ�λ��ַ��������ڸ�λ��ַ�� */
        unsigned int  reserved_0   : 8;  /* bit[8-15] : ������ */
        unsigned int  privileged   : 1;  /* bit[16]   : �ж�״̬���ǰ�׸�ԽȨ�������Ȩģʽ��Ϣ
                                                        0��unprivileged���ʣ�
                                                        1��privileged���ʡ� */
        unsigned int  nonsecure    : 1;  /* bit[17]   : �ж�״̬���ǰ�׸�ԽȨ����İ�ȫģʽ��Ϣ
                                                        0��secure���ʣ�
                                                        1��non-secure���ʡ� */
        unsigned int  reserved_1   : 2;  /* bit[18-19]: ������ */
        unsigned int  access_type  : 1;  /* bit[20]   : �ж�״̬���ǰ�׸�ԽȨ����Ķ�дģʽ��Ϣ
                                                        0��read���ʣ�
                                                        1��write���ʡ� */
        unsigned int  reserved_2   : 11; /* bit[21-31]: ������ */
    } reg;
} SOC_MDDRC_SECURITY_SEC_FAIL_CMD_INF_1_UNION;
#endif
#define SOC_MDDRC_SECURITY_SEC_FAIL_CMD_INF_1_address_high_START  (0)
#define SOC_MDDRC_SECURITY_SEC_FAIL_CMD_INF_1_address_high_END    (7)
#define SOC_MDDRC_SECURITY_SEC_FAIL_CMD_INF_1_privileged_START    (16)
#define SOC_MDDRC_SECURITY_SEC_FAIL_CMD_INF_1_privileged_END      (16)
#define SOC_MDDRC_SECURITY_SEC_FAIL_CMD_INF_1_nonsecure_START     (17)
#define SOC_MDDRC_SECURITY_SEC_FAIL_CMD_INF_1_nonsecure_END       (17)
#define SOC_MDDRC_SECURITY_SEC_FAIL_CMD_INF_1_access_type_START   (20)
#define SOC_MDDRC_SECURITY_SEC_FAIL_CMD_INF_1_access_type_END     (20)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_SECURITY_SEC_FAIL_CMD_INF_2_UNION
 �ṹ˵��  : SEC_FAIL_CMD_INF_2 �Ĵ����ṹ���塣��ַƫ����:0x088����ֵ:0x00000000�����:32
 �Ĵ���˵��: ��¼�׸�ԽȨ�������Ϣ2
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  id  : 24; /* bit[0-23] : '�ж�״̬���ǰ���׸�ԽȨ���������ID */
        unsigned int  mid : 8;  /* bit[24-31]: �ж�״̬���ǰ���׸�ԽȨ���������MasterID */
    } reg;
} SOC_MDDRC_SECURITY_SEC_FAIL_CMD_INF_2_UNION;
#endif
#define SOC_MDDRC_SECURITY_SEC_FAIL_CMD_INF_2_id_START   (0)
#define SOC_MDDRC_SECURITY_SEC_FAIL_CMD_INF_2_id_END     (23)
#define SOC_MDDRC_SECURITY_SEC_FAIL_CMD_INF_2_mid_START  (24)
#define SOC_MDDRC_SECURITY_SEC_FAIL_CMD_INF_2_mid_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_SECURITY_SEC_RGN_MAP_UNION
 �ṹ˵��  : SEC_RGN_MAP �Ĵ����ṹ���塣��ַƫ����:0x100+0x10*(regions)����ֵ:0x00000000�����:32
 �Ĵ���˵��: ��ַ����ӳ��
            ��������������sucure_boot_lock�źű����߹�����ld_region_map����Ϊ1���Ҷ�Ӧregion��ld_regions��ѡ����Χ�ڡ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  rgn_base_addr : 24; /* bit[0-23] : �����������ʼ��ַ���ã���λ���֣�
                                                         ���õ�ַ��[39:16]λ��
                                                         ע�⣺
                                                         1.rgn0�������ã�Ĭ�ϸ���������ַ�ռ䣻
                                                         2.�豣֤exclusive������ʵĵ�ַ��������Ӧ�ķ���Ȩ�ޣ�����exclusive�����޷���������ء� */
        unsigned int  rgn_size      : 6;  /* bit[24-29]: ��ǰ����Ĵ�С��
                                                         6'd15�� 64KB��
                                                         6'd16��128KB����ʱrgn_base_addr[ 0]��������Ϊ�㣻
                                                         6'd17��256KB����ʱrgn_base_addr[ 1:0]��������Ϊ�㣻
                                                         6'd18��512KB����ʱrgn_base_addr[ 2:0]��������Ϊ�㣻
                                                         6'd19�� 1MB����ʱrgn_base_addr[ 3:0]��������Ϊ�㣻
                                                         6'd20�� 2MB����ʱrgn_base_addr[ 4:0]��������Ϊ�㣻
                                                         6'd21�� 4MB����ʱrgn_base_addr[ 5:0]��������Ϊ�㣻
                                                         6'd22�� 8MB����ʱrgn_base_addr[ 6:0]��������Ϊ�㣻
                                                         6'd23�� 16MB����ʱrgn_base_addr[ 7:0]��������Ϊ�㣻
                                                         6'd24�� 32MB����ʱrgn_base_addr[ 8:0]��������Ϊ�㣻
                                                         6'd25�� 64MB����ʱrgn_base_addr[ 9:0]��������Ϊ�㣻
                                                         6'd26��128MB����ʱrgn_base_addr[10:0]��������Ϊ�㣻
                                                         6'd27��256MB����ʱrgn_base_addr[11:0]��������Ϊ�㣻
                                                         6'd28��512MB����ʱrgn_base_addr[12:0]��������Ϊ�㣻
                                                         6'd29�� 1GB����ʱrgn_base_addr[13:0]��������Ϊ�㣻
                                                         6'd30�� 2GB����ʱrgn_base_addr[14:0]��������Ϊ�㣻
                                                         6'd31�� 4GB����ʱrgn_base_addr[15:0]��������Ϊ�㣻
                                                         6'd32�� 8GB����ʱrgn_base_addr[16:0]��������Ϊ�㣻
                                                         6'd33�� 16GB����ʱrgn_base_addr[17:0]��������Ϊ�㣻
                                                         6'd34�� 32GB����ʱrgn_base_addr[18:0]��������Ϊ�㣻
                                                         6'd35�� 64GB����ʱrgn_base_addr[19:0]��������Ϊ�㣻
                                                         6'd36��128GB����ʱrgn_base_addr[20:0]��������Ϊ�㣻
                                                         6'd37��256GB����ʱrgn_base_addr[21:0]��������Ϊ�㣻
                                                         6'd38��512GB����ʱrgn_base_addr[22:0]��������Ϊ�㣻
                                                         6'd39��1TB�� ��ʱrgn_base_addr[23:0]��������Ϊ�㡣
                                                         ע�⣺
                                                         1.rgn0�������ã�Ĭ�ϸ���������ַ�ռ䣻
                                                         2.Ϊÿ���������õ������С���ۼ�����������ʼ��ַ�󣬲��������ܵĵ�ַ�ռ��С�� */
        unsigned int  reserved      : 1;  /* bit[30]   : ������ */
        unsigned int  rgn_en        : 1;  /* bit[31]   : ���������ʹ�ܿ���
                                                         0����ʹ�ܣ�
                                                         1��ʹ�ܣ�
                                                         ע�⣺region0�������ã�Ĭ��ʹ�ܡ� */
    } reg;
} SOC_MDDRC_SECURITY_SEC_RGN_MAP_UNION;
#endif
#define SOC_MDDRC_SECURITY_SEC_RGN_MAP_rgn_base_addr_START  (0)
#define SOC_MDDRC_SECURITY_SEC_RGN_MAP_rgn_base_addr_END    (23)
#define SOC_MDDRC_SECURITY_SEC_RGN_MAP_rgn_size_START       (24)
#define SOC_MDDRC_SECURITY_SEC_RGN_MAP_rgn_size_END         (29)
#define SOC_MDDRC_SECURITY_SEC_RGN_MAP_rgn_en_START         (31)
#define SOC_MDDRC_SECURITY_SEC_RGN_MAP_rgn_en_END           (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_SECURITY_SEC_RGN_ATTRIB_UNION
 �ṹ˵��  : SEC_RGN_ATTRIB �Ĵ����ṹ���塣��ַƫ����:0x104+0x10*(regions)����ֵ:0x00000000�����:32
 �Ĵ���˵��: ����ַ�����Ȩ����������
            ��������������sucure_boot_lock�źű����߹�����ld_region_attrib����Ϊ1���Ҷ�Ӧregion��ld_regions��ѡ����Χ�ڡ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sp             : 4;  /* bit[0-3]  : ��ǰ����İ�ȫȨ�����ԡ�
                                                          sp[3]����ȫ�����ԣ�
                                                          sp[2]����ȫд���ԣ�
                                                          sp[1]���ǰ�ȫ�����ԣ�
                                                          sp[0]���ǰ�ȫд���ԣ�
                                                          sp[n]=0����ֹ���ʣ�
                                                          sp[n]=1��������ʡ� */
        unsigned int  security_inv   : 1;  /* bit[4]    : ��ȫȨ�޷�תʹ��
                                                          0����ֹ����ĳregion����ǰ�ȫ�Ķ�/д����Ҳ�ض�����ȫ�Ķ�/д��
                                                          1��ʹ�ܣ��ǰ�ȫ��/д�Ͱ�ȫ��/дȨ��֮����������ϵ��������趨�� */
        unsigned int  reserved_0     : 3;  /* bit[5-7]  : ������ */
        unsigned int  mid_en         : 1;  /* bit[8]    : MasterIDƥ�书��ʹ�ܡ�
                                                          0����ֹ��
                                                          1��ʹ�ܡ� */
        unsigned int  mid_inv        : 1;  /* bit[9]    : MasterIDƥ��Ȩ�޷�ת
                                                          0��MIDƥ��ɹ�������ſɻ�÷���Ȩ�ޣ�
                                                          1��MIDƥ��ʧ�ܵ�����ſɻ�÷���Ȩ�ޡ� */
        unsigned int  reserved_1     : 6;  /* bit[10-15]: ������ */
        unsigned int  subrgn_disable : 16; /* bit[16-31]: ��ǰ�����16���ȴ�����������Ρ�
                                                          subrgn_disable[n]=0��������nʹ�ܣ���ǰ�������ڵ�����Ȩ�ޣ�ȡ���ڵ�ǰrgn����
                                                          subrgn_disable[n]=1��������n���Σ���ǰ�������ڵ�����Ȩ�ޣ�ȡ���ڸ������ȼ�rgn����
                                                          ע�⣺
                                                          1.rgn0��������������Ĭ�ϸ���������ַ�ռ䣻
                                                          2.����������δʹ��subrgn���ܣ���˼Ĵ���������Ч�� */
    } reg;
} SOC_MDDRC_SECURITY_SEC_RGN_ATTRIB_UNION;
#endif
#define SOC_MDDRC_SECURITY_SEC_RGN_ATTRIB_sp_START              (0)
#define SOC_MDDRC_SECURITY_SEC_RGN_ATTRIB_sp_END                (3)
#define SOC_MDDRC_SECURITY_SEC_RGN_ATTRIB_security_inv_START    (4)
#define SOC_MDDRC_SECURITY_SEC_RGN_ATTRIB_security_inv_END      (4)
#define SOC_MDDRC_SECURITY_SEC_RGN_ATTRIB_mid_en_START          (8)
#define SOC_MDDRC_SECURITY_SEC_RGN_ATTRIB_mid_en_END            (8)
#define SOC_MDDRC_SECURITY_SEC_RGN_ATTRIB_mid_inv_START         (9)
#define SOC_MDDRC_SECURITY_SEC_RGN_ATTRIB_mid_inv_END           (9)
#define SOC_MDDRC_SECURITY_SEC_RGN_ATTRIB_subrgn_disable_START  (16)
#define SOC_MDDRC_SECURITY_SEC_RGN_ATTRIB_subrgn_disable_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_SECURITY_SEC_MID_WR_UNION
 �ṹ˵��  : SEC_MID_WR �Ĵ����ṹ���塣��ַƫ����:0x108+0x10*(regions)����ֵ:0xFFFFFFFF�����:32
 �Ĵ���˵��: ������ƥ��MasterID��������
            ��������������sucure_boot_lock�źű����߹�����ld_mid_wr����Ϊ1���Ҷ�Ӧregion��ld_regions��ѡ����Χ�ڡ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mid_sel_wr : 32; /* bit[0-31]: MID�ı���ƥ��ѡ��д�����
                                                     mid_sel_wr[n]=0��д����MID�ĵ���λΪnʱ��������ΪMIDƥ��ʧ�ܣ�
                                                     mid_sel_wr[n]=1��д����MID�ĵ���λΪnʱ��������ΪMIDƥ��ɹ��� */
    } reg;
} SOC_MDDRC_SECURITY_SEC_MID_WR_UNION;
#endif
#define SOC_MDDRC_SECURITY_SEC_MID_WR_mid_sel_wr_START  (0)
#define SOC_MDDRC_SECURITY_SEC_MID_WR_mid_sel_wr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_SECURITY_SEC_MID_RD_UNION
 �ṹ˵��  : SEC_MID_RD �Ĵ����ṹ���塣��ַƫ����:0x10C+0x10*(regions)����ֵ:0xFFFFFFFF�����:32
 �Ĵ���˵��: ������ƥ��MasterID��������
            ��������������sucure_boot_lock�źű����߹�����ld_mid_rd����Ϊ1���Ҷ�Ӧregion��ld_regions��ѡ����Χ�ڡ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mid_sel_rd : 32; /* bit[0-31]: MID�ı���ƥ��ѡ�񣨶������
                                                     mid_sel_wr[n]=0��������MID�ĵ���λΪnʱ��������ΪMIDƥ��ʧ�ܣ�
                                                     mid_sel_wr[n]=1��������MID�ĵ���λΪnʱ��������ΪMIDƥ��ɹ��� */
    } reg;
} SOC_MDDRC_SECURITY_SEC_MID_RD_UNION;
#endif
#define SOC_MDDRC_SECURITY_SEC_MID_RD_mid_sel_rd_START  (0)
#define SOC_MDDRC_SECURITY_SEC_MID_RD_mid_sel_rd_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_SECURITY_SEC_ITCRG_UNION
 �ṹ˵��  : SEC_ITCRG �Ĵ����ṹ���塣��ַƫ����:0x3C0����ֵ:0x00000000�����:32
 �Ĵ���˵��: ���ɲ��Կ��ƼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  int_test_en : 1;  /* bit[0]   : �жϲ���ʹ�ܡ�
                                                      0����ֹ��
                                                      1��ʹ�ܡ�
                                                      ע�⣺ʹ�ܴ˼Ĵ�����ģ����ж��������SEC_ITOP�Ĵ������þ����� */
        unsigned int  reserved    : 31; /* bit[1-31]: ������ */
    } reg;
} SOC_MDDRC_SECURITY_SEC_ITCRG_UNION;
#endif
#define SOC_MDDRC_SECURITY_SEC_ITCRG_int_test_en_START  (0)
#define SOC_MDDRC_SECURITY_SEC_ITCRG_int_test_en_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_SECURITY_SEC_ITIP_UNION
 �ṹ˵��  : SEC_ITIP �Ĵ����ṹ���塣��ַƫ����:0x3C4����ֵ:0x00000000�����:32
 �Ĵ���˵��: ���ɲ�������Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  itip_secure_boot_lock : 1;  /* bit[0]   : �Ĵ�������������״ָ̬ʾ��
                                                                0��δ������
                                                                1���������� */
        unsigned int  reserved              : 31; /* bit[1-31]: ������ */
    } reg;
} SOC_MDDRC_SECURITY_SEC_ITIP_UNION;
#endif
#define SOC_MDDRC_SECURITY_SEC_ITIP_itip_secure_boot_lock_START  (0)
#define SOC_MDDRC_SECURITY_SEC_ITIP_itip_secure_boot_lock_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_MDDRC_SECURITY_SEC_ITOP_UNION
 �ṹ˵��  : SEC_ITOP �Ĵ����ṹ���塣��ַƫ����:0x3C8����ֵ:0x00000000�����:32
 �Ĵ���˵��: ���ɲ�������Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  itop_int : 1;  /* bit[0]   : �ж�״̬���á�
                                                   0���͵�ƽ��
                                                   1���ߵ�ƽ��
                                                   ע�⣺ֻ�е��жϲ���ʹ��ʱ���˼Ĵ���������Ч����ʱ����ģ���ڲ������������жϡ� */
        unsigned int  reserved : 31; /* bit[1-31]: ������ */
    } reg;
} SOC_MDDRC_SECURITY_SEC_ITOP_UNION;
#endif
#define SOC_MDDRC_SECURITY_SEC_ITOP_itop_int_START  (0)
#define SOC_MDDRC_SECURITY_SEC_ITOP_itop_int_END    (0)






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

#endif /* end of soc_mddrc_security_interface.h */
