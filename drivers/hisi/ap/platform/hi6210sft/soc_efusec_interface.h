

/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/

#ifndef __SOC_EFUSEC_INTERFACE_H__
#define __SOC_EFUSEC_INTERFACE_H__

#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif



/*****************************************************************************
  2 �궨��
*****************************************************************************/

/****************************************************************************
                     (1/1) Sysctrl
 ****************************************************************************/
/* �Ĵ���˵�������üĴ���������ʹ�ܶ�/��д���̣��������ʱ���߼��Զ���RDn���Ϊ0������д���ʱ���߼��Զ���PGEn���Ϊ0��.
   λ����UNION�ṹ:  SOC_EFUSEC_A_EFUSEC_CFG_UNION */
#define SOC_EFUSEC_A_EFUSEC_CFG_ADDR(base)            ((base) + (0x000))

/* �Ĵ���˵����״̬�Ĵ��������ڱ�����/��д״̬
   λ����UNION�ṹ:  SOC_EFUSEC_A_EFUSEC_STATUS_UNION */
#define SOC_EFUSEC_A_EFUSEC_STATUS_ADDR(base)         ((base) + (0x004))

/* �Ĵ���˵������ȡ/��д��ַ�Ĵ�������eufse���飬ÿ��Ϊ32bit����efuse������д���߶�ȡ��ʱ����һ��groupΪ��λ
   λ����UNION�ṹ:  SOC_EFUSEC_A_GROUP_UNION */
#define SOC_EFUSEC_A_GROUP_ADDR(base)                 ((base) + (0x008))

/* �Ĵ���˵����ÿ�ε���дֵ�Ĵ���
   λ����UNION�ṹ:  SOC_EFUSEC_A_PG_VALUE_UNION */
#define SOC_EFUSEC_A_PG_VALUE_ADDR(base)              ((base) + (0x00C))

/* �Ĵ���˵����efuse�ڲ�״̬��ת������ֵ�Ĵ�����ͬʱ��ֵ����4��Ϊefuse�������ڼ�strobe�ź������ȼ���ֵ
   λ����UNION�ṹ:  SOC_EFUSEC_A_EFUSE_COUNT_UNION */
#define SOC_EFUSEC_A_EFUSE_COUNT_ADDR(base)           ((base) + (0x010))

/* �Ĵ���˵����һ����д�ڼ�strobe�ź�����ʱ�������
   λ����UNION�ṹ:  SOC_EFUSEC_A_PGM_COUNT_UNION */
#define SOC_EFUSEC_A_PGM_COUNT_ADDR(base)             ((base) + (0x014))

/* �Ĵ���˵������������efuse��ȡ�����ݼĴ���
   λ����UNION�ṹ:  SOC_EFUSEC_A_EFUSE_DATA_UNION */
#define SOC_EFUSEC_A_EFUSE_DATA_ADDR(base)            ((base) + (0x018))

/* �Ĵ���˵�������efuse�ϵ�⸴λ���efuse�õ��Ŀ�����Ϣ�����һ��group�Ĳ�������bitλ����ϸ��Ϣ��efuse�Ų���
   λ����UNION�ṹ:  SOC_EFUSEC_A_HW_CFG_UNION */
#define SOC_EFUSEC_A_HW_CFG_ADDR(base)                ((base) + (0x01C))

/* �Ĵ���˵�������üĴ���������ʹ�ܶ�/��д���̣��������ʱ���߼��Զ���RDn���Ϊ0������д���ʱ���߼��Զ���PGEn���Ϊ0��.��ֻCCPU���ɷ��ʣ�
   λ����UNION�ṹ:  SOC_EFUSEC_C_EFUSEC_CFG_UNION */
#define SOC_EFUSEC_C_EFUSEC_CFG_ADDR(base)            ((base) + (0x0800))

/* �Ĵ���˵����״̬�Ĵ��������ڱ�����/��д״̬��ֻCCPU�ɷ��ʣ�
   λ����UNION�ṹ:  SOC_EFUSEC_C_EFUSEC_STATUS_UNION */
#define SOC_EFUSEC_C_EFUSEC_STATUS_ADDR(base)         ((base) + (0x0804))

/* �Ĵ���˵������ȡ/��д��ַ�Ĵ�������eufse���飬ÿ��Ϊ32bit����efuse������д���߶�ȡ��ʱ����һ��groupΪ��λ
   λ����UNION�ṹ:  SOC_EFUSEC_C_GROUP_UNION */
#define SOC_EFUSEC_C_GROUP_ADDR(base)                 ((base) + (0x0808))

/* �Ĵ���˵����ÿ�ε���дֵ�Ĵ���
   λ����UNION�ṹ:  SOC_EFUSEC_C_PG_VALUE_UNION */
#define SOC_EFUSEC_C_PG_VALUE_ADDR(base)              ((base) + (0x080C))

/* �Ĵ���˵����efuse�ڲ�״̬��ת������ֵ�Ĵ�����ͬʱ��ֵ����2��Ϊefuse�������ڼ�strobe�ź������ȼ���ֵ
   λ����UNION�ṹ:  SOC_EFUSEC_C_EFUSE_COUNT_UNION */
#define SOC_EFUSEC_C_EFUSE_COUNT_ADDR(base)           ((base) + (0x0810))

/* �Ĵ���˵����һ����д�ڼ�strobe�ź�����ʱ�������
   λ����UNION�ṹ:  SOC_EFUSEC_C_PGM_COUNT_UNION */
#define SOC_EFUSEC_C_PGM_COUNT_ADDR(base)             ((base) + (0x0814))

/* �Ĵ���˵������������efuse��ȡ�����ݼĴ���
   λ����UNION�ṹ:  SOC_EFUSEC_C_EFUSE_DATA_UNION */
#define SOC_EFUSEC_C_EFUSE_DATA_ADDR(base)            ((base) + (0x0818))

/* �Ĵ���˵�������efuse�ϵ�⸴λ���efuse�õ��Ŀ�����Ϣ�����һ��group�Ĳ�������bitλ����ϸ��Ϣ��efuse�Ų���
   λ����UNION�ṹ:  SOC_EFUSEC_C_HW_CFG_UNION */
#define SOC_EFUSEC_C_HW_CFG_ADDR(base)                ((base) + (0x081C))





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
                     (1/1) Sysctrl
 ****************************************************************************/
/*****************************************************************************
 �ṹ��    : SOC_EFUSEC_A_EFUSEC_CFG_UNION
 �ṹ˵��  : A_EFUSEC_CFG �Ĵ����ṹ���塣��ַƫ����:0x000����ֵ:0x00000000�����:32
 �Ĵ���˵��: ���üĴ���������ʹ�ܶ�/��д���̣��������ʱ���߼��Զ���RDn���Ϊ0������д���ʱ���߼��Զ���PGEn���Ϊ0��.
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pgen      : 1;  /* bit[0]   : ��дʹ���źţ���һ����д��ɺ��߼�����Ϊ�Զ����㡣
                                                    0����ʹ��
                                                    1��ʹ�� */
        unsigned int  pre_pg    : 1;  /* bit[1]   : Ԥ��дʹ���źţ�ʹ�ܺ�Ӳ������PGENB�źš�
                                                    0����ʹ��
                                                    1��ʹ�� */
        unsigned int  rden      : 1;  /* bit[2]   : ��ʹ���źţ���һ�ζ���ɺ��߼�����Ϊ�Զ����㡣
                                                    0����ʹ��
                                                    1��ʹ�� */
        unsigned int  reserved_0: 1;  /* bit[3]   : reserved */
        unsigned int  reserved_1: 1;  /* bit[4]   : reserved */
        unsigned int  pd_en     : 1;  /* bit[5]   : efuse power-down���ơ�
                                                    0����ʹ��
                                                    1��ʹ�� */
        unsigned int  mr_en     : 1;  /* bit[6]   : efuse Margin��ģʽ���ơ�
                                                    0����ʹ��
                                                    1��ʹ�� */
        unsigned int  undefined : 25; /* bit[7-31]: undefined */
    } reg;
} SOC_EFUSEC_A_EFUSEC_CFG_UNION;
#endif
#define SOC_EFUSEC_A_EFUSEC_CFG_pgen_START       (0)
#define SOC_EFUSEC_A_EFUSEC_CFG_pgen_END         (0)
#define SOC_EFUSEC_A_EFUSEC_CFG_pre_pg_START     (1)
#define SOC_EFUSEC_A_EFUSEC_CFG_pre_pg_END       (1)
#define SOC_EFUSEC_A_EFUSEC_CFG_rden_START       (2)
#define SOC_EFUSEC_A_EFUSEC_CFG_rden_END         (2)
#define SOC_EFUSEC_A_EFUSEC_CFG_pd_en_START      (5)
#define SOC_EFUSEC_A_EFUSEC_CFG_pd_en_END        (5)
#define SOC_EFUSEC_A_EFUSEC_CFG_mr_en_START      (6)
#define SOC_EFUSEC_A_EFUSEC_CFG_mr_en_END        (6)
#define SOC_EFUSEC_A_EFUSEC_CFG_undefined_START  (7)
#define SOC_EFUSEC_A_EFUSEC_CFG_undefined_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_EFUSEC_A_EFUSEC_STATUS_UNION
 �ṹ˵��  : A_EFUSEC_STATUS �Ĵ����ṹ���塣��ַƫ����:0x004����ֵ:0x00000000�����:32
 �Ĵ���˵��: ״̬�Ĵ��������ڱ�����/��д״̬
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pg_status     : 1;  /* bit[0]   : ��д״̬��
                                                        0��δ���
                                                        1����� */
        unsigned int  rd_status     : 1;  /* bit[1]   : efuse��״̬
                                                        0��δ���
                                                        1�����һ�ζ����� */
        unsigned int  pgenab_status : 1;  /* bit[2]   : Ԥ��д��λ���״̬��
                                                        0��δ���
                                                        1�����Ԥ��д��λ״̬ */
        unsigned int  rd_error      : 1;  /* bit[3]   : efuse��ǰgroup��ַ�Ƿ��ǽ�ֹ�ġ�
                                                        0����
                                                        1���� */
        unsigned int  pd_status     : 1;  /* bit[4]   : power-down״̬��
                                                        0������״̬
                                                        1��power-down״̬ */
        unsigned int  undefined     : 27; /* bit[5-31]: undefined */
    } reg;
} SOC_EFUSEC_A_EFUSEC_STATUS_UNION;
#endif
#define SOC_EFUSEC_A_EFUSEC_STATUS_pg_status_START      (0)
#define SOC_EFUSEC_A_EFUSEC_STATUS_pg_status_END        (0)
#define SOC_EFUSEC_A_EFUSEC_STATUS_rd_status_START      (1)
#define SOC_EFUSEC_A_EFUSEC_STATUS_rd_status_END        (1)
#define SOC_EFUSEC_A_EFUSEC_STATUS_pgenab_status_START  (2)
#define SOC_EFUSEC_A_EFUSEC_STATUS_pgenab_status_END    (2)
#define SOC_EFUSEC_A_EFUSEC_STATUS_rd_error_START       (3)
#define SOC_EFUSEC_A_EFUSEC_STATUS_rd_error_END         (3)
#define SOC_EFUSEC_A_EFUSEC_STATUS_pd_status_START      (4)
#define SOC_EFUSEC_A_EFUSEC_STATUS_pd_status_END        (4)
#define SOC_EFUSEC_A_EFUSEC_STATUS_undefined_START      (5)
#define SOC_EFUSEC_A_EFUSEC_STATUS_undefined_END        (31)


/*****************************************************************************
 �ṹ��    : SOC_EFUSEC_A_GROUP_UNION
 �ṹ˵��  : A_GROUP �Ĵ����ṹ���塣��ַƫ����:0x008����ֵ:0x00000000�����:32
 �Ĵ���˵��: ��ȡ/��д��ַ�Ĵ�������eufse���飬ÿ��Ϊ32bit����efuse������д���߶�ȡ��ʱ����һ��groupΪ��λ
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  efuse_group : 6;  /* bit[0-5] : ��ȡ/��д��ַgroup */
        unsigned int  undefined   : 26; /* bit[6-31]: undefined */
    } reg;
} SOC_EFUSEC_A_GROUP_UNION;
#endif
#define SOC_EFUSEC_A_GROUP_efuse_group_START  (0)
#define SOC_EFUSEC_A_GROUP_efuse_group_END    (5)
#define SOC_EFUSEC_A_GROUP_undefined_START    (6)
#define SOC_EFUSEC_A_GROUP_undefined_END      (31)


/*****************************************************************************
 �ṹ��    : SOC_EFUSEC_A_PG_VALUE_UNION
 �ṹ˵��  : A_PG_VALUE �Ĵ����ṹ���塣��ַƫ����:0x00C����ֵ:0x00000000�����:32
 �Ĵ���˵��: ÿ�ε���дֵ�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pg_value : 32; /* bit[0-31]: һ��32bit����д��Ϣ
                                                   0������д��bit��
                                                   1����д��bit�� */
    } reg;
} SOC_EFUSEC_A_PG_VALUE_UNION;
#endif
#define SOC_EFUSEC_A_PG_VALUE_pg_value_START  (0)
#define SOC_EFUSEC_A_PG_VALUE_pg_value_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_EFUSEC_A_EFUSE_COUNT_UNION
 �ṹ˵��  : A_EFUSE_COUNT �Ĵ����ṹ���塣��ַƫ����:0x010����ֵ:0x00000000�����:32
 �Ĵ���˵��: efuse�ڲ�״̬��ת������ֵ�Ĵ�����ͬʱ��ֵ����4��Ϊefuse�������ڼ�strobe�ź������ȼ���ֵ
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  efuse_count : 8;  /* bit[0-7] : EFUSE�ڲ�״̬��תʹ�õļ���ֵ����COUNT*Trefclk > 60ns�� */
        unsigned int  undefined   : 24; /* bit[8-31]: undefined */
    } reg;
} SOC_EFUSEC_A_EFUSE_COUNT_UNION;
#endif
#define SOC_EFUSEC_A_EFUSE_COUNT_efuse_count_START  (0)
#define SOC_EFUSEC_A_EFUSE_COUNT_efuse_count_END    (7)
#define SOC_EFUSEC_A_EFUSE_COUNT_undefined_START    (8)
#define SOC_EFUSEC_A_EFUSE_COUNT_undefined_END      (31)


/*****************************************************************************
 �ṹ��    : SOC_EFUSEC_A_PGM_COUNT_UNION
 �ṹ˵��  : A_PGM_COUNT �Ĵ����ṹ���塣��ַƫ����:0x014����ֵ:0x00000000�����:32
 �Ĵ���˵��: һ����д�ڼ�strobe�ź�����ʱ�������
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pgm_count : 16; /* bit[0-15] : һ����д�ڼ�strobe�ź�����ʱ����������Բο�ʱ��Ϊ����ʱ�ӣ� */
        unsigned int  undefined : 16; /* bit[16-31]: undefined */
    } reg;
} SOC_EFUSEC_A_PGM_COUNT_UNION;
#endif
#define SOC_EFUSEC_A_PGM_COUNT_pgm_count_START  (0)
#define SOC_EFUSEC_A_PGM_COUNT_pgm_count_END    (15)
#define SOC_EFUSEC_A_PGM_COUNT_undefined_START  (16)
#define SOC_EFUSEC_A_PGM_COUNT_undefined_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_EFUSEC_A_EFUSE_DATA_UNION
 �ṹ˵��  : A_EFUSE_DATA �Ĵ����ṹ���塣��ַƫ����:0x018����ֵ:0x00000000�����:32
 �Ĵ���˵��: ��������efuse��ȡ�����ݼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  efuse_data : 32; /* bit[0-31]: ��������efuse��ȡ������ */
    } reg;
} SOC_EFUSEC_A_EFUSE_DATA_UNION;
#endif
#define SOC_EFUSEC_A_EFUSE_DATA_efuse_data_START  (0)
#define SOC_EFUSEC_A_EFUSE_DATA_efuse_data_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_EFUSEC_A_HW_CFG_UNION
 �ṹ˵��  : A_HW_CFG �Ĵ����ṹ���塣��ַƫ����:0x01C����ֵ:0x00000000�����:32
 �Ĵ���˵��: ���efuse�ϵ�⸴λ���efuse�õ��Ŀ�����Ϣ�����һ��group�Ĳ�������bitλ����ϸ��Ϣ��efuse�Ų���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  undefined : 32; /* bit[0-31]: ���efuse�ϵ�⸴λ���efuse�õ��Ŀ�����Ϣ�����һ��group�Ĳ�������bitλ����ϸ��Ϣ��efuse�Ų��� */
    } reg;
} SOC_EFUSEC_A_HW_CFG_UNION;
#endif
#define SOC_EFUSEC_A_HW_CFG_undefined_START  (0)
#define SOC_EFUSEC_A_HW_CFG_undefined_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_EFUSEC_C_EFUSEC_CFG_UNION
 �ṹ˵��  : C_EFUSEC_CFG �Ĵ����ṹ���塣��ַƫ����:0x0800����ֵ:0x0000�����:32
 �Ĵ���˵��: ���üĴ���������ʹ�ܶ�/��д���̣��������ʱ���߼��Զ���RDn���Ϊ0������д���ʱ���߼��Զ���PGEn���Ϊ0��.��ֻCCPU���ɷ��ʣ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pgen      : 1;  /* bit[0]   : ��дʹ���źţ���һ����д��ɺ��߼�����Ϊ�Զ����㡣
                                                    0����ʹ��
                                                    1��ʹ�� */
        unsigned int  pre_pg    : 1;  /* bit[1]   : Ԥ��дʹ���źţ�ʹ�ܺ�Ӳ������PGENB�źš�
                                                    0����ʹ��
                                                    1��ʹ�� */
        unsigned int  rden      : 1;  /* bit[2]   : ��ʹ���źţ���һ�ζ���ɺ��߼�����Ϊ�Զ����㡣
                                                    0����ʹ��
                                                    1��ʹ�� */
        unsigned int  reserved_0: 1;  /* bit[3]   : reserved */
        unsigned int  reserved_1: 1;  /* bit[4]   : reserved */
        unsigned int  pd_en     : 1;  /* bit[5]   : efuse power-down���ơ�
                                                    0����ʹ��
                                                    1��ʹ�� */
        unsigned int  mr_en     : 1;  /* bit[6]   : efuse Margin��ģʽ���ơ�
                                                    0����ʹ��
                                                    1��ʹ�� */
        unsigned int  undefined : 25; /* bit[7-31]: undefined */
    } reg;
} SOC_EFUSEC_C_EFUSEC_CFG_UNION;
#endif
#define SOC_EFUSEC_C_EFUSEC_CFG_pgen_START       (0)
#define SOC_EFUSEC_C_EFUSEC_CFG_pgen_END         (0)
#define SOC_EFUSEC_C_EFUSEC_CFG_pre_pg_START     (1)
#define SOC_EFUSEC_C_EFUSEC_CFG_pre_pg_END       (1)
#define SOC_EFUSEC_C_EFUSEC_CFG_rden_START       (2)
#define SOC_EFUSEC_C_EFUSEC_CFG_rden_END         (2)
#define SOC_EFUSEC_C_EFUSEC_CFG_pd_en_START      (5)
#define SOC_EFUSEC_C_EFUSEC_CFG_pd_en_END        (5)
#define SOC_EFUSEC_C_EFUSEC_CFG_mr_en_START      (6)
#define SOC_EFUSEC_C_EFUSEC_CFG_mr_en_END        (6)
#define SOC_EFUSEC_C_EFUSEC_CFG_undefined_START  (7)
#define SOC_EFUSEC_C_EFUSEC_CFG_undefined_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_EFUSEC_C_EFUSEC_STATUS_UNION
 �ṹ˵��  : C_EFUSEC_STATUS �Ĵ����ṹ���塣��ַƫ����:0x0804����ֵ:0x0000�����:32
 �Ĵ���˵��: ״̬�Ĵ��������ڱ�����/��д״̬��ֻCCPU�ɷ��ʣ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pg_status     : 1;  /* bit[0]   : ��д״̬��
                                                        0��δ���
                                                        1����� */
        unsigned int  rd_status     : 1;  /* bit[1]   : efuse��״̬
                                                        0��δ���
                                                        1�����һ�ζ����� */
        unsigned int  pgenab_status : 1;  /* bit[2]   : Ԥ��д��λ���״̬��
                                                        0��δ���
                                                        1�����Ԥ��д��λ״̬ */
        unsigned int  rd_error      : 1;  /* bit[3]   : efuse��ǰgroup��ַ�Ƿ��ǽ�ֹ�ġ�
                                                        0����
                                                        1���� */
        unsigned int  pd_status     : 1;  /* bit[4]   : power-down״̬��
                                                        0������״̬
                                                        1��power-down״̬ */
        unsigned int  undefined     : 27; /* bit[5-31]: undefined */
    } reg;
} SOC_EFUSEC_C_EFUSEC_STATUS_UNION;
#endif
#define SOC_EFUSEC_C_EFUSEC_STATUS_pg_status_START      (0)
#define SOC_EFUSEC_C_EFUSEC_STATUS_pg_status_END        (0)
#define SOC_EFUSEC_C_EFUSEC_STATUS_rd_status_START      (1)
#define SOC_EFUSEC_C_EFUSEC_STATUS_rd_status_END        (1)
#define SOC_EFUSEC_C_EFUSEC_STATUS_pgenab_status_START  (2)
#define SOC_EFUSEC_C_EFUSEC_STATUS_pgenab_status_END    (2)
#define SOC_EFUSEC_C_EFUSEC_STATUS_rd_error_START       (3)
#define SOC_EFUSEC_C_EFUSEC_STATUS_rd_error_END         (3)
#define SOC_EFUSEC_C_EFUSEC_STATUS_pd_status_START      (4)
#define SOC_EFUSEC_C_EFUSEC_STATUS_pd_status_END        (4)
#define SOC_EFUSEC_C_EFUSEC_STATUS_undefined_START      (5)
#define SOC_EFUSEC_C_EFUSEC_STATUS_undefined_END        (31)


/*****************************************************************************
 �ṹ��    : SOC_EFUSEC_C_GROUP_UNION
 �ṹ˵��  : C_GROUP �Ĵ����ṹ���塣��ַƫ����:0x0808����ֵ:0x0000�����:32
 �Ĵ���˵��: ��ȡ/��д��ַ�Ĵ�������eufse���飬ÿ��Ϊ32bit����efuse������д���߶�ȡ��ʱ����һ��groupΪ��λ
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  efuse_group : 6;  /* bit[0-5] : ��ȡ/��д��ַgroup */
        unsigned int  undefined   : 26; /* bit[6-31]: undefined */
    } reg;
} SOC_EFUSEC_C_GROUP_UNION;
#endif
#define SOC_EFUSEC_C_GROUP_efuse_group_START  (0)
#define SOC_EFUSEC_C_GROUP_efuse_group_END    (5)
#define SOC_EFUSEC_C_GROUP_undefined_START    (6)
#define SOC_EFUSEC_C_GROUP_undefined_END      (31)


/*****************************************************************************
 �ṹ��    : SOC_EFUSEC_C_PG_VALUE_UNION
 �ṹ˵��  : C_PG_VALUE �Ĵ����ṹ���塣��ַƫ����:0x080C����ֵ:0x0000�����:32
 �Ĵ���˵��: ÿ�ε���дֵ�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pg_value : 32; /* bit[0-31]: һ��32bit����д��Ϣ
                                                   0������д��bit��
                                                   1����д��bit�� */
    } reg;
} SOC_EFUSEC_C_PG_VALUE_UNION;
#endif
#define SOC_EFUSEC_C_PG_VALUE_pg_value_START  (0)
#define SOC_EFUSEC_C_PG_VALUE_pg_value_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_EFUSEC_C_EFUSE_COUNT_UNION
 �ṹ˵��  : C_EFUSE_COUNT �Ĵ����ṹ���塣��ַƫ����:0x0810����ֵ:0x0000�����:32
 �Ĵ���˵��: efuse�ڲ�״̬��ת������ֵ�Ĵ�����ͬʱ��ֵ����2��Ϊefuse�������ڼ�strobe�ź������ȼ���ֵ
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  efuse_count : 8;  /* bit[0-7] : EFUSE�ڲ�״̬��תʹ�õļ���ֵ����COUNT*Trefclk > 60ns�� */
        unsigned int  undefined   : 24; /* bit[8-31]: undefined */
    } reg;
} SOC_EFUSEC_C_EFUSE_COUNT_UNION;
#endif
#define SOC_EFUSEC_C_EFUSE_COUNT_efuse_count_START  (0)
#define SOC_EFUSEC_C_EFUSE_COUNT_efuse_count_END    (7)
#define SOC_EFUSEC_C_EFUSE_COUNT_undefined_START    (8)
#define SOC_EFUSEC_C_EFUSE_COUNT_undefined_END      (31)


/*****************************************************************************
 �ṹ��    : SOC_EFUSEC_C_PGM_COUNT_UNION
 �ṹ˵��  : C_PGM_COUNT �Ĵ����ṹ���塣��ַƫ����:0x0814����ֵ:0x0000�����:32
 �Ĵ���˵��: һ����д�ڼ�strobe�ź�����ʱ�������
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pgm_count : 16; /* bit[0-15] : һ����д�ڼ�strobe�ź�����ʱ����������Բο�ʱ��Ϊ����ʱ�ӣ� */
        unsigned int            : 16; /* bit[16-31]: undefined */
    } reg;
} SOC_EFUSEC_C_PGM_COUNT_UNION;
#endif
#define SOC_EFUSEC_C_PGM_COUNT_pgm_count_START  (0)
#define SOC_EFUSEC_C_PGM_COUNT_pgm_count_END    (15)
#define SOC_EFUSEC_C_PGM_COUNT__START           (16)
#define SOC_EFUSEC_C_PGM_COUNT__END             (31)


/*****************************************************************************
 �ṹ��    : SOC_EFUSEC_C_EFUSE_DATA_UNION
 �ṹ˵��  : C_EFUSE_DATA �Ĵ����ṹ���塣��ַƫ����:0x0818����ֵ:0x0000�����:32
 �Ĵ���˵��: ��������efuse��ȡ�����ݼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  efuse_data : 32; /* bit[0-31]: ��������efuse��ȡ������ */
    } reg;
} SOC_EFUSEC_C_EFUSE_DATA_UNION;
#endif
#define SOC_EFUSEC_C_EFUSE_DATA_efuse_data_START  (0)
#define SOC_EFUSEC_C_EFUSE_DATA_efuse_data_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_EFUSEC_C_HW_CFG_UNION
 �ṹ˵��  : C_HW_CFG �Ĵ����ṹ���塣��ַƫ����:0x081C����ֵ:0x0000�����:32
 �Ĵ���˵��: ���efuse�ϵ�⸴λ���efuse�õ��Ŀ�����Ϣ�����һ��group�Ĳ�������bitλ����ϸ��Ϣ��efuse�Ų���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  undefined : 32; /* bit[0-31]: ���efuse�ϵ�⸴λ���efuse�õ��Ŀ�����Ϣ�����һ��group�Ĳ�������bitλ����ϸ��Ϣ��efuse�Ų��� */
    } reg;
} SOC_EFUSEC_C_HW_CFG_UNION;
#endif
#define SOC_EFUSEC_C_HW_CFG_undefined_START  (0)
#define SOC_EFUSEC_C_HW_CFG_undefined_END    (31)






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

#endif /* end of soc_efusec_interface.h */
