

/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/

#ifndef __SOC_L2C_INTERFACE_H__
#define __SOC_L2C_INTERFACE_H__

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
/* �Ĵ���˵����CACHE ID�Ĵ���
   λ����UNION�ṹ:  SOC_L2C_CACHE_ID_UNION */
#define SOC_L2C_CACHE_ID_ADDR(base)                   ((base) + (0x0))

/* �Ĵ���˵����CACHE���ͼĴ���
   λ����UNION�ṹ:  SOC_L2C_CACHE_TYPE_UNION */
#define SOC_L2C_CACHE_TYPE_ADDR(base)                 ((base) + (0x4))

/* �Ĵ���˵����CACHE���ƼĴ���
   λ����UNION�ṹ:  SOC_L2C_CONTROL_UNION */
#define SOC_L2C_CONTROL_ADDR(base)                    ((base) + (0x100))

/* �Ĵ���˵����CACHE�������ƼĴ���
   λ����UNION�ṹ:  SOC_L2C_AUXCONTROL_UNION */
#define SOC_L2C_AUXCONTROL_ADDR(base)                 ((base) + (0x104))

/* �Ĵ���˵����TAG RAM���ƼĴ���
   λ����UNION�ṹ:  SOC_L2C_TAGRAM_CONTROL_UNION */
#define SOC_L2C_TAGRAM_CONTROL_ADDR(base)             ((base) + (0x108))

/* �Ĵ���˵����DATA RAM�Ĵ���
   λ����UNION�ṹ:  SOC_L2C_DATARAM_CONTROL_UNION */
#define SOC_L2C_DATARAM_CONTROL_ADDR(base)            ((base) + (0x10C))

/* �Ĵ���˵����Event���������ƼĴ���
   λ����UNION�ṹ:  SOC_L2C_EV_COUNTER_CTRL_UNION */
#define SOC_L2C_EV_COUNTER_CTRL_ADDR(base)            ((base) + (0x200))

/* �Ĵ���˵����Event������1���üĴ���
   λ����UNION�ṹ:  SOC_L2C_EV_COUNTER1_CFG_UNION */
#define SOC_L2C_EV_COUNTER1_CFG_ADDR(base)            ((base) + (0x204))

/* �Ĵ���˵����Event������0���üĴ���
   λ����UNION�ṹ:  SOC_L2C_EV_COUNTER0_CFG_UNION */
#define SOC_L2C_EV_COUNTER0_CFG_ADDR(base)            ((base) + (0x208))

/* �Ĵ���˵����Event������1
   λ����UNION�ṹ:  SOC_L2C_EV_COUNTER1_UNION */
#define SOC_L2C_EV_COUNTER1_ADDR(base)                ((base) + (0x20C))

/* �Ĵ���˵����Event������0
   λ����UNION�ṹ:  SOC_L2C_EV_COUNTER0_UNION */
#define SOC_L2C_EV_COUNTER0_ADDR(base)                ((base) + (0x210))

/* �Ĵ���˵�����ж����μĴ���
   λ����UNION�ṹ:  SOC_L2C_INT_MASK_UNION */
#define SOC_L2C_INT_MASK_ADDR(base)                   ((base) + (0x214))

/* �Ĵ���˵�������κ��ж�״̬�Ĵ���
   λ����UNION�ṹ:  SOC_L2C_INT_MASK_STATUS_UNION */
#define SOC_L2C_INT_MASK_STATUS_ADDR(base)            ((base) + (0x218))

/* �Ĵ���˵��������ǰ�ж�״̬�Ĵ���
   λ����UNION�ṹ:  SOC_L2C_INT_RAW_STATUS_UNION */
#define SOC_L2C_INT_RAW_STATUS_ADDR(base)             ((base) + (0x21C))

/* �Ĵ���˵�����ж�����Ĵ���
   λ����UNION�ṹ:  SOC_L2C_INT_CLEAR_UNION */
#define SOC_L2C_INT_CLEAR_ADDR(base)                  ((base) + (0x220))

/* �Ĵ���˵����Cacheͬ���Ĵ���
   λ����UNION�ṹ:  SOC_L2C_CACHE_SYNC_UNION */
#define SOC_L2C_CACHE_SYNC_ADDR(base)                 ((base) + (0x730))

/* �Ĵ���˵����Invalidate Line by PA�Ĵ���
   λ����UNION�ṹ:  SOC_L2C_INV_PA_UNION */
#define SOC_L2C_INV_PA_ADDR(base)                     ((base) + (0x770))

/* �Ĵ���˵����Invalidate by Way�Ĵ���
   λ����UNION�ṹ:  SOC_L2C_INV_WAY_UNION */
#define SOC_L2C_INV_WAY_ADDR(base)                    ((base) + (0x77C))

/* �Ĵ���˵����Clean Line by PA�Ĵ���
   λ����UNION�ṹ:  SOC_L2C_CLEAN_PA_UNION */
#define SOC_L2C_CLEAN_PA_ADDR(base)                   ((base) + (0x7B0))

/* �Ĵ���˵����Clean Line by Set/Way�Ĵ���
   λ����UNION�ṹ:  SOC_L2C_CLEAN_INDEX_UNION */
#define SOC_L2C_CLEAN_INDEX_ADDR(base)                ((base) + (0x7B8))

/* �Ĵ���˵����Clean by Way�Ĵ���
   λ����UNION�ṹ:  SOC_L2C_CLEAN_WAY_UNION */
#define SOC_L2C_CLEAN_WAY_ADDR(base)                  ((base) + (0x7BC))

/* �Ĵ���˵����Clean&amp;Invalidate Line by PA�Ĵ���
   λ����UNION�ṹ:  SOC_L2C_CLEAN_INV_PA_UNION */
#define SOC_L2C_CLEAN_INV_PA_ADDR(base)               ((base) + (0x7F0))

/* �Ĵ���˵����Clean&amp;Invalidate Line by Set/Way�Ĵ���
   λ����UNION�ṹ:  SOC_L2C_CLEAN_INV_INDEX_UNION */
#define SOC_L2C_CLEAN_INV_INDEX_ADDR(base)            ((base) + (0x7F8))

/* �Ĵ���˵����Clean&amp;Invalidate by Way�Ĵ���
   λ����UNION�ṹ:  SOC_L2C_CLEAN_INV_WAY_UNION */
#define SOC_L2C_CLEAN_INV_WAY_ADDR(base)              ((base) + (0x7FC))

/* �Ĵ���˵����Data Lockdown0�Ĵ���
   λ����UNION�ṹ:  SOC_L2C_D_LOCKDOWN0_UNION */
#define SOC_L2C_D_LOCKDOWN0_ADDR(base)                ((base) + (0x900))

/* �Ĵ���˵����ָ��Lockdown�Ĵ���
   λ����UNION�ṹ:  SOC_L2C_I_LOCKDOWN0_UNION */
#define SOC_L2C_I_LOCKDOWN0_ADDR(base)                ((base) + (0x904))

/* �Ĵ���˵����Data Lockdown1�Ĵ���
   λ����UNION�ṹ:  SOC_L2C_D_LOCKDOWN1_UNION */
#define SOC_L2C_D_LOCKDOWN1_ADDR(base)                ((base) + (0x908))

/* �Ĵ���˵����ָ��Lockdown1�Ĵ���
   λ����UNION�ṹ:  SOC_L2C_I_LOCKDOWN1_UNION */
#define SOC_L2C_I_LOCKDOWN1_ADDR(base)                ((base) + (0x90C))

/* �Ĵ���˵����Data Lockdown2�Ĵ���
   λ����UNION�ṹ:  SOC_L2C_D_LOCKDOWN2_UNION */
#define SOC_L2C_D_LOCKDOWN2_ADDR(base)                ((base) + (0x910))

/* �Ĵ���˵����ָ��Lockdown2�Ĵ���
   λ����UNION�ṹ:  SOC_L2C_I_LOCKDOWN2_UNION */
#define SOC_L2C_I_LOCKDOWN2_ADDR(base)                ((base) + (0x914))

/* �Ĵ���˵����Data Lockdown3�Ĵ���
   λ����UNION�ṹ:  SOC_L2C_D_LOCKDOWN3_UNION */
#define SOC_L2C_D_LOCKDOWN3_ADDR(base)                ((base) + (0x918))

/* �Ĵ���˵����ָ��Lockdown3�Ĵ���
   λ����UNION�ṹ:  SOC_L2C_I_LOCKDOWN3_UNION */
#define SOC_L2C_I_LOCKDOWN3_ADDR(base)                ((base) + (0x91C))

/* �Ĵ���˵����Data Lockdown4�Ĵ���
   λ����UNION�ṹ:  SOC_L2C_D_LOCKDOWN4_UNION */
#define SOC_L2C_D_LOCKDOWN4_ADDR(base)                ((base) + (0x920))

/* �Ĵ���˵����ָ��Lockdown4�Ĵ���
   λ����UNION�ṹ:  SOC_L2C_I_LOCKDOWN4_UNION */
#define SOC_L2C_I_LOCKDOWN4_ADDR(base)                ((base) + (0x924))

/* �Ĵ���˵����Data Lockdown5�Ĵ���
   λ����UNION�ṹ:  SOC_L2C_D_LOCKDOWN5_UNION */
#define SOC_L2C_D_LOCKDOWN5_ADDR(base)                ((base) + (0x928))

/* �Ĵ���˵����ָ��Lockdown5�Ĵ���
   λ����UNION�ṹ:  SOC_L2C_I_LOCKDOWN5_UNION */
#define SOC_L2C_I_LOCKDOWN5_ADDR(base)                ((base) + (0x92C))

/* �Ĵ���˵����Data Lockdown6�Ĵ���
   λ����UNION�ṹ:  SOC_L2C_D_LOCKDOWN6_UNION */
#define SOC_L2C_D_LOCKDOWN6_ADDR(base)                ((base) + (0x930))

/* �Ĵ���˵����ָ��Lockdown6�Ĵ���
   λ����UNION�ṹ:  SOC_L2C_I_LOCKDOWN6_UNION */
#define SOC_L2C_I_LOCKDOWN6_ADDR(base)                ((base) + (0x934))

/* �Ĵ���˵����Data Lockdown7�Ĵ���
   λ����UNION�ṹ:  SOC_L2C_D_LOCKDOWN7_UNION */
#define SOC_L2C_D_LOCKDOWN7_ADDR(base)                ((base) + (0x938))

/* �Ĵ���˵����ָ��Lockdown7�Ĵ���
   λ����UNION�ṹ:  SOC_L2C_I_LOCKDOWN7_UNION */
#define SOC_L2C_I_LOCKDOWN7_ADDR(base)                ((base) + (0x93C))

/* �Ĵ���˵����Lockdown by lineʹ�ܼĴ���
   λ����UNION�ṹ:  SOC_L2C_LOCK_LINE_EN_UNION */
#define SOC_L2C_LOCK_LINE_EN_ADDR(base)               ((base) + (0x950))

/* �Ĵ���˵����unlock all lines by way�Ĵ���
   λ����UNION�ṹ:  SOC_L2C_UNLOCK_WAY_UNION */
#define SOC_L2C_UNLOCK_WAY_ADDR(base)                 ((base) + (0x954))

/* �Ĵ���˵������ַ������ʼ�Ĵ���
   λ����UNION�ṹ:  SOC_L2C_ADDR_FIL_START_UNION */
#define SOC_L2C_ADDR_FIL_START_ADDR(base)             ((base) + (0xC00))

/* �Ĵ���˵������ַ���˽����Ĵ���
   λ����UNION�ṹ:  SOC_L2C_ADDR_FIL_END_UNION */
#define SOC_L2C_ADDR_FIL_END_ADDR(base)               ((base) + (0xC04))

/* �Ĵ���˵����DEBUG���ƼĴ���
   λ����UNION�ṹ:  SOC_L2C_DEBUG_CTRL_UNION */
#define SOC_L2C_DEBUG_CTRL_ADDR(base)                 ((base) + (0xF40))

/* �Ĵ���˵����Prefetch���ƼĴ���
   λ����UNION�ṹ:  SOC_L2C_PREFETCH_CTRL_UNION */
#define SOC_L2C_PREFETCH_CTRL_ADDR(base)              ((base) + (0xF60))

/* �Ĵ���˵�������Ŀ��ƼĴ���
   λ����UNION�ṹ:  SOC_L2C_POWER_CTRL_UNION */
#define SOC_L2C_POWER_CTRL_ADDR(base)                 ((base) + (0xF80))





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
 �ṹ��    : SOC_L2C_CACHE_ID_UNION
 �ṹ˵��  : CACHE_ID �Ĵ����ṹ���塣��ַƫ����:0x0����ֵ:0x410000C8�����:32
 �Ĵ���˵��: CACHE ID�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  RTLRELEASE  : 6;  /* bit[0-5]  : ����汾r3p2 */
        unsigned int  PARTNUM     : 4;  /* bit[6-9]  : IP��CoreLink Level2 Cache Controller L2C-310 */
        unsigned int  CACHEID     : 6;  /* bit[10-15]: Cache ID��Ϊ0 */
        unsigned int  reserved    : 8;  /* bit[16-23]:  */
        unsigned int  Implementer : 8;  /* bit[24-31]: ������ARM */
    } reg;
} SOC_L2C_CACHE_ID_UNION;
#endif
#define SOC_L2C_CACHE_ID_RTLRELEASE_START   (0)
#define SOC_L2C_CACHE_ID_RTLRELEASE_END     (5)
#define SOC_L2C_CACHE_ID_PARTNUM_START      (6)
#define SOC_L2C_CACHE_ID_PARTNUM_END        (9)
#define SOC_L2C_CACHE_ID_CACHEID_START      (10)
#define SOC_L2C_CACHE_ID_CACHEID_END        (15)
#define SOC_L2C_CACHE_ID_Implementer_START  (24)
#define SOC_L2C_CACHE_ID_Implementer_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_L2C_CACHE_TYPE_UNION
 �ṹ˵��  : CACHE_TYPE �Ĵ����ṹ���塣��ַƫ����:0x4����ֵ:0x9E340340�����:32
 �Ĵ���˵��: CACHE���ͼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  CACHELINELEN : 2;  /* bit[0-1]  : Cache line length
                                                        2'b00: 32 bytes */
        unsigned int  reserved_0   : 4;  /* bit[2-5]  :  */
        unsigned int  ASSOCATIVITY : 1;  /* bit[6]    : 0: 8-way
                                                        1: 16-way */
        unsigned int  reserved_1   : 1;  /* bit[7]    :  */
        unsigned int  Isize        : 3;  /* bit[8-10] : Instruction Cache way size
                                                        3'b011: 64KB */
        unsigned int  reserved_2   : 1;  /* bit[11]   :  */
        unsigned int  CACHELINELEN : 2;  /* bit[12-13]: Cache line length
                                                        2'b00: 32 bytes */
        unsigned int  reserved_3   : 4;  /* bit[14-17]:  */
        unsigned int  ASSOCATIVITY : 1;  /* bit[18]   : 0: 8-way
                                                        1: 16-way */
        unsigned int  reserved_4   : 1;  /* bit[19]   :  */
        unsigned int  Dsize        : 3;  /* bit[20-22]: Data Cache way size
                                                        3'b011: 64KB */
        unsigned int  reserved_5   : 1;  /* bit[23]   :  */
        unsigned int  H            : 1;  /* bit[24]   : 0: Unified
                                                        1: Harvard */
        unsigned int  CTYPE        : 4;  /* bit[25-28]: 4'b11xy
                                                        x:���pl310_LOCKDOWN_BY_MASTER�궨��ʹ����Ϊ1������Ϊ0
                                                        y:���pl310_LOCKDOWN_BY_LINE�궨��ʹ����Ϊ1������Ϊ0 */
        unsigned int  reserved_6   : 2;  /* bit[29-30]:  */
        unsigned int  DataBanking  : 1;  /* bit[31]   : 0:��֧��data banking
                                                        1:֧��data banking */
    } reg;
} SOC_L2C_CACHE_TYPE_UNION;
#endif
#define SOC_L2C_CACHE_TYPE_CACHELINELEN_START  (0)
#define SOC_L2C_CACHE_TYPE_CACHELINELEN_END    (1)
#define SOC_L2C_CACHE_TYPE_ASSOCATIVITY_START  (6)
#define SOC_L2C_CACHE_TYPE_ASSOCATIVITY_END    (6)
#define SOC_L2C_CACHE_TYPE_Isize_START         (8)
#define SOC_L2C_CACHE_TYPE_Isize_END           (10)
#define SOC_L2C_CACHE_TYPE_CACHELINELEN_START  (12)
#define SOC_L2C_CACHE_TYPE_CACHELINELEN_END    (13)
#define SOC_L2C_CACHE_TYPE_ASSOCATIVITY_START  (18)
#define SOC_L2C_CACHE_TYPE_ASSOCATIVITY_END    (18)
#define SOC_L2C_CACHE_TYPE_Dsize_START         (20)
#define SOC_L2C_CACHE_TYPE_Dsize_END           (22)
#define SOC_L2C_CACHE_TYPE_H_START             (24)
#define SOC_L2C_CACHE_TYPE_H_END               (24)
#define SOC_L2C_CACHE_TYPE_CTYPE_START         (25)
#define SOC_L2C_CACHE_TYPE_CTYPE_END           (28)
#define SOC_L2C_CACHE_TYPE_DataBanking_START   (31)
#define SOC_L2C_CACHE_TYPE_DataBanking_END     (31)


/*****************************************************************************
 �ṹ��    : SOC_L2C_CONTROL_UNION
 �ṹ˵��  : CONTROL �Ĵ����ṹ���塣��ַƫ����:0x100����ֵ:0x00000000�����:32
 �Ĵ���˵��: CACHE���ƼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ENABLE   : 1;  /* bit[0]   : 0: L2 Cache disable
                                                   1: L2 Cache enable */
        unsigned int  reserved : 31; /* bit[1-31]: Reserved */
    } reg;
} SOC_L2C_CONTROL_UNION;
#endif
#define SOC_L2C_CONTROL_ENABLE_START    (0)
#define SOC_L2C_CONTROL_ENABLE_END      (0)


/*****************************************************************************
 �ṹ��    : SOC_L2C_AUXCONTROL_UNION
 �ṹ˵��  : AUXCONTROL �Ĵ����ṹ���塣��ַƫ����:0x104����ֵ:0x02020000�����:32
 �Ĵ���˵��: CACHE�������ƼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  LineOfZero    : 1;  /* bit[0]    : Full Line of Zero Enable
                                                         0: Full line of write zero behavior disable
                                                         1: Full line of write zero behavior enable */
        unsigned int  reserved_0    : 9;  /* bit[1-9]  :  */
        unsigned int  HPrioSOReadEn : 1;  /* bit[10]   : High Priority for Strong-Ordered and Device reads Enable
                                                         0: Master�˿���SO/Dev�������ȼ�����cacheable����
                                                         1: Master�˿���SO/Dev�������ȼ���� */
        unsigned int  StrBufLimEn   : 1;  /* bit[11]   : Store Buffer device limitation Enable
                                                         0: disable. Device write can take all slots in store buffer
                                                         1: enable. Device write cannot take all slots in store buffer when connected to the A9 MP-Core.There is always one available slot to service Normal Memory */
        unsigned int  ExcCacheCfg   : 1;  /* bit[12]   : Exclusive cache configuration
                                                         0: Disable
                                                         1: Enable */
        unsigned int  ShAttInvEn    : 1;  /* bit[13]   : Shared Attribute Invalidate Enable
                                                         0: Shared invalidate behavior disable
                                                         1: Shared invalidate behavior enable */
        unsigned int  reserved_1    : 2;  /* bit[14-15]:  */
        unsigned int  ASSOCATIVITY  : 1;  /* bit[16]   : 0: 8-way
                                                         1: 16-way */
        unsigned int  WAYSIZE       : 3;  /* bit[17-19]: 3'b000 Reserved, internally mapped to 16KB.
                                                         3'b001 16KB
                                                         3'b010 32KB
                                                         3'b011 64KB
                                                         3'b100 128KB
                                                         3'b101 256KB
                                                         3'b110 512KB
                                                         3'b111 Reserved, internally mapped to 512 KB. */
        unsigned int  EVMONEN       : 1;  /* bit[20]   : Event Monitor bus enable
                                                         0: disable
                                                         1: enable */
        unsigned int  ParityEnable  : 1;  /* bit[21]   : Parityʹ��
                                                         0: Diable
                                                         1: Enable
                                                         V9R1��֧��Parity�� */
        unsigned int  SharedAtt     : 1;  /* bit[22]   : Shared attribute override enable
                                                         0: Ĭ��֧��shared����
                                                         1: ����shared attribute */
        unsigned int  ForceWriteAll : 2;  /* bit[23-24]: ǿ�Ʒ���д
                                                         2'b00: ʹ��AWCACHE����Write Allocate
                                                         2'b01: ǿ��no allocate�� WA bitΪ0
                                                         2'b10: ����AWCACHE��WAʼ��Ϊ1������cacheable write missΪwrite allocate
                                                         2'b11: �ڲ�map��00 */
        unsigned int  CACHEPOLICY   : 1;  /* bit[25]   : Cache�滻����ѡ��
                                                         0: Pseudo-random
                                                         1: Round-robin */
        unsigned int  NSLOCKEN      : 1;  /* bit[26]   : Non-secure lockdown enable
                                                         0: Lockdown�Ĵ��������ڷǰ�ȫ�·���
                                                         1: Lockdown�Ĵ����ܹ��ڷǰ�ȫ�·��� */
        unsigned int  NSINTACCTRL   : 1;  /* bit[27]   : Non-secure interrupt access control
                                                         0: INT_CLEAR��INT_MASK�Ĵ���ֻ���ڰ�ȫ�²��ܷ���
                                                         1: INT_CLEAR��INT_MASK�Ĵ����ܹ��ڷǰ�ȫ��ȫ�·��� */
        unsigned int  DataPrefEn    : 1;  /* bit[28]   : 0: Data prefetching disable
                                                         1: Data prefetching enable
                                                         �ο�PREFETCH_CTRL�Ĵ��� */
        unsigned int  InstrPrefEn   : 1;  /* bit[29]   : 0: Instruction prefetching disable
                                                         1: Instruction prefetching enable
                                                         �ο�PREFETCH_CTRL�Ĵ��� */
        unsigned int  EarlyBREAPEN  : 1;  /* bit[30]   : L2C-310֧�ֶ���ĳЩд��������store buffer������д��ַ֮����������BRESP������AXIЭ�鲻���ݡ�����ʹ�ܺ�AWUSERSx[11]����Ϊ1����Ч��
                                                         0: Early BRESP disable
                                                         1: Early BRESP enable */
        unsigned int  reserved_2    : 1;  /* bit[31]   : Reserved */
    } reg;
} SOC_L2C_AUXCONTROL_UNION;
#endif
#define SOC_L2C_AUXCONTROL_LineOfZero_START     (0)
#define SOC_L2C_AUXCONTROL_LineOfZero_END       (0)
#define SOC_L2C_AUXCONTROL_HPrioSOReadEn_START  (10)
#define SOC_L2C_AUXCONTROL_HPrioSOReadEn_END    (10)
#define SOC_L2C_AUXCONTROL_StrBufLimEn_START    (11)
#define SOC_L2C_AUXCONTROL_StrBufLimEn_END      (11)
#define SOC_L2C_AUXCONTROL_ExcCacheCfg_START    (12)
#define SOC_L2C_AUXCONTROL_ExcCacheCfg_END      (12)
#define SOC_L2C_AUXCONTROL_ShAttInvEn_START     (13)
#define SOC_L2C_AUXCONTROL_ShAttInvEn_END       (13)
#define SOC_L2C_AUXCONTROL_ASSOCATIVITY_START   (16)
#define SOC_L2C_AUXCONTROL_ASSOCATIVITY_END     (16)
#define SOC_L2C_AUXCONTROL_WAYSIZE_START        (17)
#define SOC_L2C_AUXCONTROL_WAYSIZE_END          (19)
#define SOC_L2C_AUXCONTROL_EVMONEN_START        (20)
#define SOC_L2C_AUXCONTROL_EVMONEN_END          (20)
#define SOC_L2C_AUXCONTROL_ParityEnable_START   (21)
#define SOC_L2C_AUXCONTROL_ParityEnable_END     (21)
#define SOC_L2C_AUXCONTROL_SharedAtt_START      (22)
#define SOC_L2C_AUXCONTROL_SharedAtt_END        (22)
#define SOC_L2C_AUXCONTROL_ForceWriteAll_START  (23)
#define SOC_L2C_AUXCONTROL_ForceWriteAll_END    (24)
#define SOC_L2C_AUXCONTROL_CACHEPOLICY_START    (25)
#define SOC_L2C_AUXCONTROL_CACHEPOLICY_END      (25)
#define SOC_L2C_AUXCONTROL_NSLOCKEN_START       (26)
#define SOC_L2C_AUXCONTROL_NSLOCKEN_END         (26)
#define SOC_L2C_AUXCONTROL_NSINTACCTRL_START    (27)
#define SOC_L2C_AUXCONTROL_NSINTACCTRL_END      (27)
#define SOC_L2C_AUXCONTROL_DataPrefEn_START     (28)
#define SOC_L2C_AUXCONTROL_DataPrefEn_END       (28)
#define SOC_L2C_AUXCONTROL_InstrPrefEn_START    (29)
#define SOC_L2C_AUXCONTROL_InstrPrefEn_END      (29)
#define SOC_L2C_AUXCONTROL_EarlyBREAPEN_START   (30)
#define SOC_L2C_AUXCONTROL_EarlyBREAPEN_END     (30)


/*****************************************************************************
 �ṹ��    : SOC_L2C_TAGRAM_CONTROL_UNION
 �ṹ˵��  : TAGRAM_CONTROL �Ĵ����ṹ���塣��ַƫ����:0x108����ֵ:0x00000000�����:32
 �Ĵ���˵��: TAG RAM���ƼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  SETLATENCY : 3;  /* bit[0-2]  : setup latency��Ĭ�ϸ���pl310_TAG_SETUP_LAT�궨��
                                                      3'b000: 1cycle��û�ж����latency
                                                      3'b001: 2cycle
                                                      3'b010: 3cycle
                                                      3'b011: 4cycle
                                                      3'b100: 5cycle
                                                      3'b101: 6cycle
                                                      3'b110: 7cycle
                                                      3'b111: 8cycle */
        unsigned int  reserved_0 : 1;  /* bit[3]    :  */
        unsigned int  RDLATENCY  : 3;  /* bit[4-6]  : read access latency��Ĭ�ϸ���pl310_TAG_READ_LAT�궨��
                                                      3'b000: 1cycle��û�ж����latency
                                                      3'b001: 2cycle
                                                      3'b010: 3cycle
                                                      3'b011: 4cycle
                                                      3'b100: 5cycle
                                                      3'b101: 6cycle
                                                      3'b110: 7cycle
                                                      3'b111: 8cycle */
        unsigned int  reserved_1 : 1;  /* bit[7]    :  */
        unsigned int  WALATENCY  : 3;  /* bit[8-10] : write access latency��Ĭ�ϸ���pl310_TAG_WRITE_LAT�궨��
                                                      3'b000: 1cycle��û�ж����latency
                                                      3'b001: 2cycle
                                                      3'b010: 3cycle
                                                      3'b011: 4cycle
                                                      3'b100: 5cycle
                                                      3'b101: 6cycle
                                                      3'b110: 7cycle
                                                      3'b111: 8cycle */
        unsigned int  reserved_2 : 21; /* bit[11-31]: Reserved */
    } reg;
} SOC_L2C_TAGRAM_CONTROL_UNION;
#endif
#define SOC_L2C_TAGRAM_CONTROL_SETLATENCY_START  (0)
#define SOC_L2C_TAGRAM_CONTROL_SETLATENCY_END    (2)
#define SOC_L2C_TAGRAM_CONTROL_RDLATENCY_START   (4)
#define SOC_L2C_TAGRAM_CONTROL_RDLATENCY_END     (6)
#define SOC_L2C_TAGRAM_CONTROL_WALATENCY_START   (8)
#define SOC_L2C_TAGRAM_CONTROL_WALATENCY_END     (10)


/*****************************************************************************
 �ṹ��    : SOC_L2C_DATARAM_CONTROL_UNION
 �ṹ˵��  : DATARAM_CONTROL �Ĵ����ṹ���塣��ַƫ����:0x10C����ֵ:0x00000440�����:32
 �Ĵ���˵��: DATA RAM�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  SETLATENCY : 3;  /* bit[0-2]  : setup latency��Ĭ�ϸ���pl310_DATA_SETUP_LAT�궨��
                                                      3'b000: 1cycle��û�ж����latency
                                                      3'b001: 2cycle
                                                      3'b010: 3cycle
                                                      3'b011: 4cycle
                                                      3'b100: 5cycle
                                                      3'b101: 6cycle
                                                      3'b110: 7cycle
                                                      3'b111: 8cycle */
        unsigned int  reserved_0 : 1;  /* bit[3]    :  */
        unsigned int  RDLATENCY  : 3;  /* bit[4-6]  : read access latency��Ĭ�ϸ���pl310_DATA_READ_LAT�궨��
                                                      3'b000: 1cycle��û�ж����latency
                                                      3'b001: 2cycle
                                                      3'b010: 3cycle
                                                      3'b011: 4cycle
                                                      3'b100: 5cycle
                                                      3'b101: 6cycle
                                                      3'b110: 7cycle
                                                      3'b111: 8cycle */
        unsigned int  reserved_1 : 1;  /* bit[7]    :  */
        unsigned int  WALATENCY  : 3;  /* bit[8-10] : write access latency��Ĭ�ϸ���pl310_DATA_WRITE_LAT�궨��
                                                      3'b000: 1cycle��û�ж����latency
                                                      3'b001: 2cycle
                                                      3'b010: 3cycle
                                                      3'b011: 4cycle
                                                      3'b100: 5cycle
                                                      3'b101: 6cycle
                                                      3'b110: 7cycle
                                                      3'b111: 8cycle */
        unsigned int  reserved_2 : 21; /* bit[11-31]: Reserved */
    } reg;
} SOC_L2C_DATARAM_CONTROL_UNION;
#endif
#define SOC_L2C_DATARAM_CONTROL_SETLATENCY_START  (0)
#define SOC_L2C_DATARAM_CONTROL_SETLATENCY_END    (2)
#define SOC_L2C_DATARAM_CONTROL_RDLATENCY_START   (4)
#define SOC_L2C_DATARAM_CONTROL_RDLATENCY_END     (6)
#define SOC_L2C_DATARAM_CONTROL_WALATENCY_START   (8)
#define SOC_L2C_DATARAM_CONTROL_WALATENCY_END     (10)


/*****************************************************************************
 �ṹ��    : SOC_L2C_EV_COUNTER_CTRL_UNION
 �ṹ˵��  : EV_COUNTER_CTRL �Ĵ����ṹ���塣��ַƫ����:0x200����ֵ:0x00000000�����:32
 �Ĵ���˵��: Event���������ƼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  COUNTENABLE : 1;  /* bit[0]   : ������ʹ��
                                                      0: Disable
                                                      1: Enable */
        unsigned int  COUNTRESET  : 2;  /* bit[1-2] : ��������λ���ض�ֵʼ��Ϊ0��д1����Ӧ�ļ�������λ
                                                      bit1: Event counter0
                                                      bit2: Event counter1 */
        unsigned int  reserved    : 29; /* bit[3-31]: Reserved */
    } reg;
} SOC_L2C_EV_COUNTER_CTRL_UNION;
#endif
#define SOC_L2C_EV_COUNTER_CTRL_COUNTENABLE_START  (0)
#define SOC_L2C_EV_COUNTER_CTRL_COUNTENABLE_END    (0)
#define SOC_L2C_EV_COUNTER_CTRL_COUNTRESET_START   (1)
#define SOC_L2C_EV_COUNTER_CTRL_COUNTRESET_END     (2)


/*****************************************************************************
 �ṹ��    : SOC_L2C_EV_COUNTER1_CFG_UNION
 �ṹ˵��  : EV_COUNTER1_CFG �Ĵ����ṹ���塣��ַƫ����:0x204����ֵ:0x00000000�����:32
 �Ĵ���˵��: Event������1���üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  INTGEN   : 2;  /* bit[0-1] : Event�������ж�����
                                                   2'b00: disable
                                                   2'b01: enable: increment condition
                                                   2'b10: enable: overflow condition
                                                   2'b11: disable
                                                   ע�⣺��SPNIDENΪ�ͣ�event������ֻ��Էǰ�ȫevent����ȫeventֻ�е�SPNIDENΪ��ʱ���� */
        unsigned int  EVSOURCE : 4;  /* bit[2-5] : EventԴѡ��
                                                   4'b0000: Counter disable 4'b0001: CO
                                                   4'b0010: DRHIT 4'b0011: DRREQ 4'b0100: DWHIT
                                                   4'b0101: DWREQ 4'b0110: DWTREQ 4'b0111: IRHIT
                                                   4'b1000: IRREQ 4'b1001: WA 4'b1010: IPFALLOC
                                                   4'b1011: EPFHIT 4'b1100: EPFALLOC 4'b1101: SRRCVD
                                                   4'b1110: SRCONF 4'b1111: EPFRCVD */
        unsigned int  reserved : 26; /* bit[6-31]: Reserved */
    } reg;
} SOC_L2C_EV_COUNTER1_CFG_UNION;
#endif
#define SOC_L2C_EV_COUNTER1_CFG_INTGEN_START    (0)
#define SOC_L2C_EV_COUNTER1_CFG_INTGEN_END      (1)
#define SOC_L2C_EV_COUNTER1_CFG_EVSOURCE_START  (2)
#define SOC_L2C_EV_COUNTER1_CFG_EVSOURCE_END    (5)


/*****************************************************************************
 �ṹ��    : SOC_L2C_EV_COUNTER0_CFG_UNION
 �ṹ˵��  : EV_COUNTER0_CFG �Ĵ����ṹ���塣��ַƫ����:0x208����ֵ:0x00000000�����:32
 �Ĵ���˵��: Event������0���üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  INTGEN   : 2;  /* bit[0-1] : Event�������ж�����
                                                   2'b00: disable
                                                   2'b01: enable: increment condition
                                                   2'b10: enable: overflow condition
                                                   2'b11: disable
                                                   ע�⣺��SPNIDENΪ�ͣ�event������ֻ��Էǰ�ȫevent����ȫeventֻ�е�SPNIDENΪ��ʱ���� */
        unsigned int  EVSOURCE : 4;  /* bit[2-5] : EventԴѡ��
                                                   4'b0000: Counter disable 4'b0001: CO
                                                   4'b0010: DRHIT 4'b0011: DRREQ 4'b0100: DWHIT
                                                   4'b0101: DWREQ 4'b0110: DWTREQ 4'b0111: IRHIT
                                                   4'b1000: IRREQ 4'b1001: WA 4'b1010: IPFALLOC
                                                   4'b1011: EPFHIT 4'b1100: EPFALLOC 4'b1101: SRRCVD
                                                   4'b1110: SRCONF 4'b1111: EPFRCVD */
        unsigned int  reserved : 26; /* bit[6-31]: Reserved */
    } reg;
} SOC_L2C_EV_COUNTER0_CFG_UNION;
#endif
#define SOC_L2C_EV_COUNTER0_CFG_INTGEN_START    (0)
#define SOC_L2C_EV_COUNTER0_CFG_INTGEN_END      (1)
#define SOC_L2C_EV_COUNTER0_CFG_EVSOURCE_START  (2)
#define SOC_L2C_EV_COUNTER0_CFG_EVSOURCE_END    (5)


/*****************************************************************************
 �ṹ��    : SOC_L2C_EV_COUNTER1_UNION
 �ṹ˵��  : EV_COUNTER1 �Ĵ����ṹ���塣��ַƫ����:0x20C����ֵ:0x00000000�����:32
 �Ĵ���˵��: Event������1
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  VALUE : 32; /* bit[0-31]: Counter value
                                                ����������ֵ */
    } reg;
} SOC_L2C_EV_COUNTER1_UNION;
#endif
#define SOC_L2C_EV_COUNTER1_VALUE_START  (0)
#define SOC_L2C_EV_COUNTER1_VALUE_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_L2C_EV_COUNTER0_UNION
 �ṹ˵��  : EV_COUNTER0 �Ĵ����ṹ���塣��ַƫ����:0x210����ֵ:0x00000000�����:32
 �Ĵ���˵��: Event������0
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  VALUE : 32; /* bit[0-31]: Counter value
                                                ����������ֵ */
    } reg;
} SOC_L2C_EV_COUNTER0_UNION;
#endif
#define SOC_L2C_EV_COUNTER0_VALUE_START  (0)
#define SOC_L2C_EV_COUNTER0_VALUE_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_L2C_INT_MASK_UNION
 �ṹ˵��  : INT_MASK �Ĵ����ṹ���塣��ַƫ����:0x214����ֵ:0x0000�����:32
 �Ĵ���˵��: �ж����μĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ECNTR    : 1;  /* bit[0]   : Event Counter1 and Counter0 Overflow Increment
                                                   0: Masked
                                                   1: Enabled */
        unsigned int  PARRT    : 1;  /* bit[1]   : Parity Error on L2 tag RAM read
                                                   0: Masked
                                                   1: Enabled */
        unsigned int  PARRD    : 1;  /* bit[2]   : Parity Error on L2 data RAM read
                                                   0: Masked
                                                   1: Enabled */
        unsigned int  ERRWT    : 1;  /* bit[3]   : Error on L2 tag RAM write
                                                   0: Masked
                                                   1: Enabled */
        unsigned int  ERRWD    : 1;  /* bit[4]   : Error on L2 data RAM write
                                                   0: Masked
                                                   1: Enabled */
        unsigned int  ERRRT    : 1;  /* bit[5]   : Error on L2 tag RAM read
                                                   0: Masked
                                                   1: Enabled */
        unsigned int  ERRRD    : 1;  /* bit[6]   : Error on L2 data RAM read
                                                   0: Masked
                                                   1: Enabled */
        unsigned int  SLVERR   : 1;  /* bit[7]   : SLVERR from L3
                                                   0: Masked
                                                   1: Enabled */
        unsigned int  DECERR   : 1;  /* bit[8]   : DECERR from L3
                                                   0: Masked
                                                   1: Enabled */
        unsigned int  reserved : 23; /* bit[9-31]:  */
    } reg;
} SOC_L2C_INT_MASK_UNION;
#endif
#define SOC_L2C_INT_MASK_ECNTR_START     (0)
#define SOC_L2C_INT_MASK_ECNTR_END       (0)
#define SOC_L2C_INT_MASK_PARRT_START     (1)
#define SOC_L2C_INT_MASK_PARRT_END       (1)
#define SOC_L2C_INT_MASK_PARRD_START     (2)
#define SOC_L2C_INT_MASK_PARRD_END       (2)
#define SOC_L2C_INT_MASK_ERRWT_START     (3)
#define SOC_L2C_INT_MASK_ERRWT_END       (3)
#define SOC_L2C_INT_MASK_ERRWD_START     (4)
#define SOC_L2C_INT_MASK_ERRWD_END       (4)
#define SOC_L2C_INT_MASK_ERRRT_START     (5)
#define SOC_L2C_INT_MASK_ERRRT_END       (5)
#define SOC_L2C_INT_MASK_ERRRD_START     (6)
#define SOC_L2C_INT_MASK_ERRRD_END       (6)
#define SOC_L2C_INT_MASK_SLVERR_START    (7)
#define SOC_L2C_INT_MASK_SLVERR_END      (7)
#define SOC_L2C_INT_MASK_DECERR_START    (8)
#define SOC_L2C_INT_MASK_DECERR_END      (8)


/*****************************************************************************
 �ṹ��    : SOC_L2C_INT_MASK_STATUS_UNION
 �ṹ˵��  : INT_MASK_STATUS �Ĵ����ṹ���塣��ַƫ����:0x218����ֵ:0x0000�����:32
 �Ĵ���˵��: ���κ��ж�״̬�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ECNTR    : 1;  /* bit[0]   : Event Counter1 and Counter0 Overflow Increment
                                                   0: ���ж�
                                                   1: ���ж� */
        unsigned int  PARRT    : 1;  /* bit[1]   : Parity Error on L2 tag RAM read
                                                   0: ���ж�
                                                   1: ���ж� */
        unsigned int  PARRD    : 1;  /* bit[2]   : Parity Error on L2 data RAM read
                                                   0: ���ж�
                                                   1: ���ж� */
        unsigned int  ERRWT    : 1;  /* bit[3]   : Error on L2 tag RAM write
                                                   0: ���ж�
                                                   1: ���ж� */
        unsigned int  ERRWD    : 1;  /* bit[4]   : Error on L2 data RAM write
                                                   0: ���ж�
                                                   1: ���ж� */
        unsigned int  ERRRT    : 1;  /* bit[5]   : Error on L2 tag RAM read
                                                   0: ���ж�
                                                   1: ���ж� */
        unsigned int  ERRRD    : 1;  /* bit[6]   : Error on L2 data RAM read
                                                   0: ���ж�
                                                   1: ���ж� */
        unsigned int  SLVERR   : 1;  /* bit[7]   : SLVERR from L3
                                                   0: ���ж�
                                                   1: ���ж� */
        unsigned int  DECERR   : 1;  /* bit[8]   : DECERR from L3
                                                   0: ���ж�
                                                   1: ���ж� */
        unsigned int  reserved : 23; /* bit[9-31]:  */
    } reg;
} SOC_L2C_INT_MASK_STATUS_UNION;
#endif
#define SOC_L2C_INT_MASK_STATUS_ECNTR_START     (0)
#define SOC_L2C_INT_MASK_STATUS_ECNTR_END       (0)
#define SOC_L2C_INT_MASK_STATUS_PARRT_START     (1)
#define SOC_L2C_INT_MASK_STATUS_PARRT_END       (1)
#define SOC_L2C_INT_MASK_STATUS_PARRD_START     (2)
#define SOC_L2C_INT_MASK_STATUS_PARRD_END       (2)
#define SOC_L2C_INT_MASK_STATUS_ERRWT_START     (3)
#define SOC_L2C_INT_MASK_STATUS_ERRWT_END       (3)
#define SOC_L2C_INT_MASK_STATUS_ERRWD_START     (4)
#define SOC_L2C_INT_MASK_STATUS_ERRWD_END       (4)
#define SOC_L2C_INT_MASK_STATUS_ERRRT_START     (5)
#define SOC_L2C_INT_MASK_STATUS_ERRRT_END       (5)
#define SOC_L2C_INT_MASK_STATUS_ERRRD_START     (6)
#define SOC_L2C_INT_MASK_STATUS_ERRRD_END       (6)
#define SOC_L2C_INT_MASK_STATUS_SLVERR_START    (7)
#define SOC_L2C_INT_MASK_STATUS_SLVERR_END      (7)
#define SOC_L2C_INT_MASK_STATUS_DECERR_START    (8)
#define SOC_L2C_INT_MASK_STATUS_DECERR_END      (8)


/*****************************************************************************
 �ṹ��    : SOC_L2C_INT_RAW_STATUS_UNION
 �ṹ˵��  : INT_RAW_STATUS �Ĵ����ṹ���塣��ַƫ����:0x21C����ֵ:0x0000�����:32
 �Ĵ���˵��: ����ǰ�ж�״̬�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ECNTR    : 1;  /* bit[0]   : Event Counter1 and Counter0 Overflow Increment
                                                   0: ���ж�
                                                   1: ���ж� */
        unsigned int  PARRT    : 1;  /* bit[1]   : Parity Error on L2 tag RAM read
                                                   0: ���ж�
                                                   1: ���ж� */
        unsigned int  PARRD    : 1;  /* bit[2]   : Parity Error on L2 data RAM read
                                                   0: ���ж�
                                                   1: ���ж� */
        unsigned int  ERRWT    : 1;  /* bit[3]   : Error on L2 tag RAM write
                                                   0: ���ж�
                                                   1: ���ж� */
        unsigned int  ERRWD    : 1;  /* bit[4]   : Error on L2 data RAM write
                                                   0: ���ж�
                                                   1: ���ж� */
        unsigned int  ERRRT    : 1;  /* bit[5]   : Error on L2 tag RAM read
                                                   0: ���ж�
                                                   1: ���ж� */
        unsigned int  ERRRD    : 1;  /* bit[6]   : Error on L2 data RAM read
                                                   0: ���ж�
                                                   1: ���ж� */
        unsigned int  SLVERR   : 1;  /* bit[7]   : SLVERR from L3
                                                   0: ���ж�
                                                   1: ���ж� */
        unsigned int  DECERR   : 1;  /* bit[8]   : DECERR from L3
                                                   0: ���ж�
                                                   1: ���ж� */
        unsigned int  reserved : 23; /* bit[9-31]:  */
    } reg;
} SOC_L2C_INT_RAW_STATUS_UNION;
#endif
#define SOC_L2C_INT_RAW_STATUS_ECNTR_START     (0)
#define SOC_L2C_INT_RAW_STATUS_ECNTR_END       (0)
#define SOC_L2C_INT_RAW_STATUS_PARRT_START     (1)
#define SOC_L2C_INT_RAW_STATUS_PARRT_END       (1)
#define SOC_L2C_INT_RAW_STATUS_PARRD_START     (2)
#define SOC_L2C_INT_RAW_STATUS_PARRD_END       (2)
#define SOC_L2C_INT_RAW_STATUS_ERRWT_START     (3)
#define SOC_L2C_INT_RAW_STATUS_ERRWT_END       (3)
#define SOC_L2C_INT_RAW_STATUS_ERRWD_START     (4)
#define SOC_L2C_INT_RAW_STATUS_ERRWD_END       (4)
#define SOC_L2C_INT_RAW_STATUS_ERRRT_START     (5)
#define SOC_L2C_INT_RAW_STATUS_ERRRT_END       (5)
#define SOC_L2C_INT_RAW_STATUS_ERRRD_START     (6)
#define SOC_L2C_INT_RAW_STATUS_ERRRD_END       (6)
#define SOC_L2C_INT_RAW_STATUS_SLVERR_START    (7)
#define SOC_L2C_INT_RAW_STATUS_SLVERR_END      (7)
#define SOC_L2C_INT_RAW_STATUS_DECERR_START    (8)
#define SOC_L2C_INT_RAW_STATUS_DECERR_END      (8)


/*****************************************************************************
 �ṹ��    : SOC_L2C_INT_CLEAR_UNION
 �ṹ˵��  : INT_CLEAR �Ĵ����ṹ���塣��ַƫ����:0x220����ֵ:0x0000�����:32
 �Ĵ���˵��: �ж�����Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ECNTR    : 1;  /* bit[0]   : Event Counter1 and Counter0 Overflow Increment
                                                   0: ��Ч
                                                   1: ����ж� */
        unsigned int  PARRT    : 1;  /* bit[1]   : Parity Error on L2 tag RAM read
                                                   0: ��Ч
                                                   1: ����ж� */
        unsigned int  PARRD    : 1;  /* bit[2]   : Parity Error on L2 data RAM read
                                                   0: ��Ч
                                                   1: ����ж� */
        unsigned int  ERRWT    : 1;  /* bit[3]   : Error on L2 tag RAM write
                                                   0: ��Ч
                                                   1: ����ж� */
        unsigned int  ERRWD    : 1;  /* bit[4]   : Error on L2 data RAM write
                                                   0: ��Ч
                                                   1: ����ж� */
        unsigned int  ERRRT    : 1;  /* bit[5]   : Error on L2 tag RAM read
                                                   0: ��Ч
                                                   1: ����ж� */
        unsigned int  ERRRD    : 1;  /* bit[6]   : Error on L2 data RAM read
                                                   0: ��Ч
                                                   1: ����ж� */
        unsigned int  SLVERR   : 1;  /* bit[7]   : SLVERR from L3
                                                   0: ��Ч
                                                   1: ����ж� */
        unsigned int  DECERR   : 1;  /* bit[8]   : DECERR from L3
                                                   0: ��Ч
                                                   1: ����ж� */
        unsigned int  reserved : 23; /* bit[9-31]:  */
    } reg;
} SOC_L2C_INT_CLEAR_UNION;
#endif
#define SOC_L2C_INT_CLEAR_ECNTR_START     (0)
#define SOC_L2C_INT_CLEAR_ECNTR_END       (0)
#define SOC_L2C_INT_CLEAR_PARRT_START     (1)
#define SOC_L2C_INT_CLEAR_PARRT_END       (1)
#define SOC_L2C_INT_CLEAR_PARRD_START     (2)
#define SOC_L2C_INT_CLEAR_PARRD_END       (2)
#define SOC_L2C_INT_CLEAR_ERRWT_START     (3)
#define SOC_L2C_INT_CLEAR_ERRWT_END       (3)
#define SOC_L2C_INT_CLEAR_ERRWD_START     (4)
#define SOC_L2C_INT_CLEAR_ERRWD_END       (4)
#define SOC_L2C_INT_CLEAR_ERRRT_START     (5)
#define SOC_L2C_INT_CLEAR_ERRRT_END       (5)
#define SOC_L2C_INT_CLEAR_ERRRD_START     (6)
#define SOC_L2C_INT_CLEAR_ERRRD_END       (6)
#define SOC_L2C_INT_CLEAR_SLVERR_START    (7)
#define SOC_L2C_INT_CLEAR_SLVERR_END      (7)
#define SOC_L2C_INT_CLEAR_DECERR_START    (8)
#define SOC_L2C_INT_CLEAR_DECERR_END      (8)


/*****************************************************************************
 �ṹ��    : SOC_L2C_CACHE_SYNC_UNION
 �ṹ˵��  : CACHE_SYNC �Ĵ����ṹ���塣��ַƫ����:0x730����ֵ:0x0000�����:32
 �Ĵ���˵��: Cacheͬ���Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  C        : 1;  /* bit[0]   : �ſ�����Bufferʹ��
                                                   0: д��Ч
                                                   1: ʹ��
                                                   ע�⣺����ɲ����󣬸�bit������ */
        unsigned int  reserved : 31; /* bit[1-31]:  */
    } reg;
} SOC_L2C_CACHE_SYNC_UNION;
#endif
#define SOC_L2C_CACHE_SYNC_C_START         (0)
#define SOC_L2C_CACHE_SYNC_C_END           (0)


/*****************************************************************************
 �ṹ��    : SOC_L2C_INV_PA_UNION
 �ṹ˵��  : INV_PA �Ĵ����ṹ���塣��ַƫ����:0x770����ֵ:0x0000�����:32
 �Ĵ���˵��: Invalidate Line by PA�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  C        : 1;  /* bit[0]    : ʹ��
                                                    0: д��Ч
                                                    1: ʹ��
                                                    ע�⣺����ɲ����󣬸�bit������ */
        unsigned int  reserved : 4;  /* bit[1-4]  :  */
        unsigned int  INDEX    : 11; /* bit[5-15] : Index */
        unsigned int  TAG      : 16; /* bit[16-31]: TAG */
    } reg;
} SOC_L2C_INV_PA_UNION;
#endif
#define SOC_L2C_INV_PA_C_START         (0)
#define SOC_L2C_INV_PA_C_END           (0)
#define SOC_L2C_INV_PA_INDEX_START     (5)
#define SOC_L2C_INV_PA_INDEX_END       (15)
#define SOC_L2C_INV_PA_TAG_START       (16)
#define SOC_L2C_INV_PA_TAG_END         (31)


/*****************************************************************************
 �ṹ��    : SOC_L2C_INV_WAY_UNION
 �ṹ˵��  : INV_WAY �Ĵ����ṹ���塣��ַƫ����:0x77C����ֵ:0x0000�����:32
 �Ĵ���˵��: Invalidate by Way�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  WAY      : 16; /* bit[0-15] : ʹ�ܣ�ÿbit��Ӧһ��way
                                                    0: д��Ч
                                                    1: ʹ��
                                                    ע�⣺����ɲ����󣬸�bit������ */
        unsigned int  reserved : 16; /* bit[16-31]:  */
    } reg;
} SOC_L2C_INV_WAY_UNION;
#endif
#define SOC_L2C_INV_WAY_WAY_START       (0)
#define SOC_L2C_INV_WAY_WAY_END         (15)


/*****************************************************************************
 �ṹ��    : SOC_L2C_CLEAN_PA_UNION
 �ṹ˵��  : CLEAN_PA �Ĵ����ṹ���塣��ַƫ����:0x7B0����ֵ:0x0000�����:32
 �Ĵ���˵��: Clean Line by PA�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  C        : 1;  /* bit[0]    : ʹ��
                                                    0: д��Ч
                                                    1: ʹ��
                                                    ע�⣺����ɲ����󣬸�bit������ */
        unsigned int  reserved : 4;  /* bit[1-4]  :  */
        unsigned int  INDEX    : 11; /* bit[5-15] : Index */
        unsigned int  TAG      : 16; /* bit[16-31]: TAG */
    } reg;
} SOC_L2C_CLEAN_PA_UNION;
#endif
#define SOC_L2C_CLEAN_PA_C_START         (0)
#define SOC_L2C_CLEAN_PA_C_END           (0)
#define SOC_L2C_CLEAN_PA_INDEX_START     (5)
#define SOC_L2C_CLEAN_PA_INDEX_END       (15)
#define SOC_L2C_CLEAN_PA_TAG_START       (16)
#define SOC_L2C_CLEAN_PA_TAG_END         (31)


/*****************************************************************************
 �ṹ��    : SOC_L2C_CLEAN_INDEX_UNION
 �ṹ˵��  : CLEAN_INDEX �Ĵ����ṹ���塣��ַƫ����:0x7B8����ֵ:0x0000�����:32
 �Ĵ���˵��: Clean Line by Set/Way�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  C        : 1;  /* bit[0]    : ʹ��
                                                    0: д��Ч
                                                    1: ʹ��
                                                    ע�⣺����ɲ����󣬸�bit������ */
        unsigned int  reserved_0: 4;  /* bit[1-4]  :  */
        unsigned int  INDEX    : 11; /* bit[5-15] : Index */
        unsigned int  reserved_1: 12; /* bit[16-27]:  */
        unsigned int  WAY      : 4;  /* bit[28-31]: WAY */
    } reg;
} SOC_L2C_CLEAN_INDEX_UNION;
#endif
#define SOC_L2C_CLEAN_INDEX_C_START         (0)
#define SOC_L2C_CLEAN_INDEX_C_END           (0)
#define SOC_L2C_CLEAN_INDEX_INDEX_START     (5)
#define SOC_L2C_CLEAN_INDEX_INDEX_END       (15)
#define SOC_L2C_CLEAN_INDEX_WAY_START       (28)
#define SOC_L2C_CLEAN_INDEX_WAY_END         (31)


/*****************************************************************************
 �ṹ��    : SOC_L2C_CLEAN_WAY_UNION
 �ṹ˵��  : CLEAN_WAY �Ĵ����ṹ���塣��ַƫ����:0x7BC����ֵ:0x0000�����:32
 �Ĵ���˵��: Clean by Way�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  WAY      : 16; /* bit[0-15] : ʹ�ܣ�ÿbit��Ӧһ��way
                                                    0: д��Ч
                                                    1: ʹ��
                                                    ע�⣺����ɲ����󣬸�bit������ */
        unsigned int  reserved : 16; /* bit[16-31]:  */
    } reg;
} SOC_L2C_CLEAN_WAY_UNION;
#endif
#define SOC_L2C_CLEAN_WAY_WAY_START       (0)
#define SOC_L2C_CLEAN_WAY_WAY_END         (15)


/*****************************************************************************
 �ṹ��    : SOC_L2C_CLEAN_INV_PA_UNION
 �ṹ˵��  : CLEAN_INV_PA �Ĵ����ṹ���塣��ַƫ����:0x7F0����ֵ:0x0000�����:32
 �Ĵ���˵��: Clean&amp;Invalidate Line by PA�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  C        : 1;  /* bit[0]    : ʹ��
                                                    0: д��Ч
                                                    1: ʹ��
                                                    ע�⣺����ɲ����󣬸�bit������ */
        unsigned int  reserved : 4;  /* bit[1-4]  :  */
        unsigned int  INDEX    : 11; /* bit[5-15] : Index */
        unsigned int  TAG      : 16; /* bit[16-31]: TAG */
    } reg;
} SOC_L2C_CLEAN_INV_PA_UNION;
#endif
#define SOC_L2C_CLEAN_INV_PA_C_START         (0)
#define SOC_L2C_CLEAN_INV_PA_C_END           (0)
#define SOC_L2C_CLEAN_INV_PA_INDEX_START     (5)
#define SOC_L2C_CLEAN_INV_PA_INDEX_END       (15)
#define SOC_L2C_CLEAN_INV_PA_TAG_START       (16)
#define SOC_L2C_CLEAN_INV_PA_TAG_END         (31)


/*****************************************************************************
 �ṹ��    : SOC_L2C_CLEAN_INV_INDEX_UNION
 �ṹ˵��  : CLEAN_INV_INDEX �Ĵ����ṹ���塣��ַƫ����:0x7F8����ֵ:0x0000�����:32
 �Ĵ���˵��: Clean&amp;Invalidate Line by Set/Way�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  C        : 1;  /* bit[0]    : ʹ��
                                                    0: д��Ч
                                                    1: ʹ��
                                                    ע�⣺����ɲ����󣬸�bit������ */
        unsigned int  reserved_0: 4;  /* bit[1-4]  :  */
        unsigned int  INDEX    : 11; /* bit[5-15] : Index */
        unsigned int  reserved_1: 12; /* bit[16-27]:  */
        unsigned int  WAY      : 4;  /* bit[28-31]: WAY */
    } reg;
} SOC_L2C_CLEAN_INV_INDEX_UNION;
#endif
#define SOC_L2C_CLEAN_INV_INDEX_C_START         (0)
#define SOC_L2C_CLEAN_INV_INDEX_C_END           (0)
#define SOC_L2C_CLEAN_INV_INDEX_INDEX_START     (5)
#define SOC_L2C_CLEAN_INV_INDEX_INDEX_END       (15)
#define SOC_L2C_CLEAN_INV_INDEX_WAY_START       (28)
#define SOC_L2C_CLEAN_INV_INDEX_WAY_END         (31)


/*****************************************************************************
 �ṹ��    : SOC_L2C_CLEAN_INV_WAY_UNION
 �ṹ˵��  : CLEAN_INV_WAY �Ĵ����ṹ���塣��ַƫ����:0x7FC����ֵ:0x0000�����:32
 �Ĵ���˵��: Clean&amp;Invalidate by Way�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  WAY      : 16; /* bit[0-15] : ʹ�ܣ�ÿbit��Ӧһ��way
                                                    0: д��Ч
                                                    1: ʹ��
                                                    ע�⣺����ɲ����󣬸�bit������ */
        unsigned int  reserved : 16; /* bit[16-31]:  */
    } reg;
} SOC_L2C_CLEAN_INV_WAY_UNION;
#endif
#define SOC_L2C_CLEAN_INV_WAY_WAY_START       (0)
#define SOC_L2C_CLEAN_INV_WAY_WAY_END         (15)


/*****************************************************************************
 �ṹ��    : SOC_L2C_D_LOCKDOWN0_UNION
 �ṹ˵��  : D_LOCKDOWN0 �Ĵ����ṹ���塣��ַƫ����:0x900����ֵ:0x0000�����:32
 �Ĵ���˵��: Data Lockdown0�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  DATALOCK000 : 16; /* bit[0-15] : DATA Lockʹ�ܣ���AyUSERSx[7:5]=3'b000��ÿbit��Ӧÿ��way
                                                       0: ��Ӧ��way֧��allocate
                                                       1: ��Ӧ��way��֧��allocate */
        unsigned int  reserved    : 16; /* bit[16-31]:  */
    } reg;
} SOC_L2C_D_LOCKDOWN0_UNION;
#endif
#define SOC_L2C_D_LOCKDOWN0_DATALOCK000_START  (0)
#define SOC_L2C_D_LOCKDOWN0_DATALOCK000_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_L2C_I_LOCKDOWN0_UNION
 �ṹ˵��  : I_LOCKDOWN0 �Ĵ����ṹ���塣��ַƫ����:0x904����ֵ:0x0000�����:32
 �Ĵ���˵��: ָ��Lockdown�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  INSLOCK000 : 16; /* bit[0-15] : Istruction Lockʹ�ܣ���AyUSERSx[7:5]=3'b000��ÿbit��Ӧÿ��way
                                                      0: ��Ӧ��way֧��allocate
                                                      1: ��Ӧ��way��֧��allocate */
        unsigned int  reserved   : 16; /* bit[16-31]:  */
    } reg;
} SOC_L2C_I_LOCKDOWN0_UNION;
#endif
#define SOC_L2C_I_LOCKDOWN0_INSLOCK000_START  (0)
#define SOC_L2C_I_LOCKDOWN0_INSLOCK000_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_L2C_D_LOCKDOWN1_UNION
 �ṹ˵��  : D_LOCKDOWN1 �Ĵ����ṹ���塣��ַƫ����:0x908����ֵ:0x0000�����:32
 �Ĵ���˵��: Data Lockdown1�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  DATALOCK001 : 16; /* bit[0-15] : DATA Lockʹ�ܣ���AyUSERSx[7:5]=3'b001��ÿbit��Ӧÿ��way
                                                       0: ��Ӧ��way֧��allocate
                                                       1: ��Ӧ��way��֧��allocate */
        unsigned int  reserved    : 16; /* bit[16-31]:  */
    } reg;
} SOC_L2C_D_LOCKDOWN1_UNION;
#endif
#define SOC_L2C_D_LOCKDOWN1_DATALOCK001_START  (0)
#define SOC_L2C_D_LOCKDOWN1_DATALOCK001_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_L2C_I_LOCKDOWN1_UNION
 �ṹ˵��  : I_LOCKDOWN1 �Ĵ����ṹ���塣��ַƫ����:0x90C����ֵ:0x0000�����:32
 �Ĵ���˵��: ָ��Lockdown1�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  INSLOCK001 : 16; /* bit[0-15] : Istruction Lockʹ�ܣ���AyUSERSx[7:5]=3'b001��ÿbit��Ӧÿ��way
                                                      0: ��Ӧ��way֧��allocate
                                                      1: ��Ӧ��way��֧��allocate */
        unsigned int  reserved   : 16; /* bit[16-31]:  */
    } reg;
} SOC_L2C_I_LOCKDOWN1_UNION;
#endif
#define SOC_L2C_I_LOCKDOWN1_INSLOCK001_START  (0)
#define SOC_L2C_I_LOCKDOWN1_INSLOCK001_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_L2C_D_LOCKDOWN2_UNION
 �ṹ˵��  : D_LOCKDOWN2 �Ĵ����ṹ���塣��ַƫ����:0x910����ֵ:0x0000�����:32
 �Ĵ���˵��: Data Lockdown2�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  DATALOCK002 : 16; /* bit[0-15] : DATA Lockʹ�ܣ���AyUSERSx[7:5]=3'b010��ÿbit��Ӧÿ��way
                                                       0: ��Ӧ��way֧��allocate
                                                       1: ��Ӧ��way��֧��allocate */
        unsigned int  reserved    : 16; /* bit[16-31]:  */
    } reg;
} SOC_L2C_D_LOCKDOWN2_UNION;
#endif
#define SOC_L2C_D_LOCKDOWN2_DATALOCK002_START  (0)
#define SOC_L2C_D_LOCKDOWN2_DATALOCK002_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_L2C_I_LOCKDOWN2_UNION
 �ṹ˵��  : I_LOCKDOWN2 �Ĵ����ṹ���塣��ַƫ����:0x914����ֵ:0x0000�����:32
 �Ĵ���˵��: ָ��Lockdown2�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  INSLOCK002 : 16; /* bit[0-15] : Istruction Lockʹ�ܣ���AyUSERSx[7:5]=3'b010��ÿbit��Ӧÿ��way
                                                      0: ��Ӧ��way֧��allocate
                                                      1: ��Ӧ��way��֧��allocate */
        unsigned int  reserved   : 16; /* bit[16-31]:  */
    } reg;
} SOC_L2C_I_LOCKDOWN2_UNION;
#endif
#define SOC_L2C_I_LOCKDOWN2_INSLOCK002_START  (0)
#define SOC_L2C_I_LOCKDOWN2_INSLOCK002_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_L2C_D_LOCKDOWN3_UNION
 �ṹ˵��  : D_LOCKDOWN3 �Ĵ����ṹ���塣��ַƫ����:0x918����ֵ:0x0000�����:32
 �Ĵ���˵��: Data Lockdown3�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  DATALOCK003 : 16; /* bit[0-15] : DATA Lockʹ�ܣ���AyUSERSx[7:5]=3'b011��ÿbit��Ӧÿ��way
                                                       0: ��Ӧ��way֧��allocate
                                                       1: ��Ӧ��way��֧��allocate */
        unsigned int  reserved    : 16; /* bit[16-31]:  */
    } reg;
} SOC_L2C_D_LOCKDOWN3_UNION;
#endif
#define SOC_L2C_D_LOCKDOWN3_DATALOCK003_START  (0)
#define SOC_L2C_D_LOCKDOWN3_DATALOCK003_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_L2C_I_LOCKDOWN3_UNION
 �ṹ˵��  : I_LOCKDOWN3 �Ĵ����ṹ���塣��ַƫ����:0x91C����ֵ:0x0000�����:32
 �Ĵ���˵��: ָ��Lockdown3�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  INSLOCK003 : 16; /* bit[0-15] : Istruction Lockʹ�ܣ���AyUSERSx[7:5]=3'b011��ÿbit��Ӧÿ��way
                                                      0: ��Ӧ��way֧��allocate
                                                      1: ��Ӧ��way��֧��allocate */
        unsigned int  reserved   : 16; /* bit[16-31]:  */
    } reg;
} SOC_L2C_I_LOCKDOWN3_UNION;
#endif
#define SOC_L2C_I_LOCKDOWN3_INSLOCK003_START  (0)
#define SOC_L2C_I_LOCKDOWN3_INSLOCK003_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_L2C_D_LOCKDOWN4_UNION
 �ṹ˵��  : D_LOCKDOWN4 �Ĵ����ṹ���塣��ַƫ����:0x920����ֵ:0x0000�����:32
 �Ĵ���˵��: Data Lockdown4�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  DATALOCK004 : 16; /* bit[0-15] : DATA Lockʹ�ܣ���AyUSERSx[7:5]=3'b100��ÿbit��Ӧÿ��way
                                                       0: ��Ӧ��way֧��allocate
                                                       1: ��Ӧ��way��֧��allocate */
        unsigned int  reserved    : 16; /* bit[16-31]:  */
    } reg;
} SOC_L2C_D_LOCKDOWN4_UNION;
#endif
#define SOC_L2C_D_LOCKDOWN4_DATALOCK004_START  (0)
#define SOC_L2C_D_LOCKDOWN4_DATALOCK004_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_L2C_I_LOCKDOWN4_UNION
 �ṹ˵��  : I_LOCKDOWN4 �Ĵ����ṹ���塣��ַƫ����:0x924����ֵ:0x0000�����:32
 �Ĵ���˵��: ָ��Lockdown4�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  INSLOCK004 : 16; /* bit[0-15] : Istruction Lockʹ�ܣ���AyUSERSx[7:5]=3'b100��ÿbit��Ӧÿ��way
                                                      0: ��Ӧ��way֧��allocate
                                                      1: ��Ӧ��way��֧��allocate */
        unsigned int  reserved   : 16; /* bit[16-31]:  */
    } reg;
} SOC_L2C_I_LOCKDOWN4_UNION;
#endif
#define SOC_L2C_I_LOCKDOWN4_INSLOCK004_START  (0)
#define SOC_L2C_I_LOCKDOWN4_INSLOCK004_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_L2C_D_LOCKDOWN5_UNION
 �ṹ˵��  : D_LOCKDOWN5 �Ĵ����ṹ���塣��ַƫ����:0x928����ֵ:0x0000�����:32
 �Ĵ���˵��: Data Lockdown5�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  DATALOCK005 : 16; /* bit[0-15] : DATA Lockʹ�ܣ���AyUSERSx[7:5]=3'b101��ÿbit��Ӧÿ��way
                                                       0: ��Ӧ��way֧��allocate
                                                       1: ��Ӧ��way��֧��allocate */
        unsigned int  reserved    : 16; /* bit[16-31]:  */
    } reg;
} SOC_L2C_D_LOCKDOWN5_UNION;
#endif
#define SOC_L2C_D_LOCKDOWN5_DATALOCK005_START  (0)
#define SOC_L2C_D_LOCKDOWN5_DATALOCK005_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_L2C_I_LOCKDOWN5_UNION
 �ṹ˵��  : I_LOCKDOWN5 �Ĵ����ṹ���塣��ַƫ����:0x92C����ֵ:0x0000�����:32
 �Ĵ���˵��: ָ��Lockdown5�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  INSLOCK005 : 16; /* bit[0-15] : Istruction Lockʹ�ܣ���AyUSERSx[7:5]=3'b101��ÿbit��Ӧÿ��way
                                                      0: ��Ӧ��way֧��allocate
                                                      1: ��Ӧ��way��֧��allocate */
        unsigned int  reserved   : 16; /* bit[16-31]:  */
    } reg;
} SOC_L2C_I_LOCKDOWN5_UNION;
#endif
#define SOC_L2C_I_LOCKDOWN5_INSLOCK005_START  (0)
#define SOC_L2C_I_LOCKDOWN5_INSLOCK005_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_L2C_D_LOCKDOWN6_UNION
 �ṹ˵��  : D_LOCKDOWN6 �Ĵ����ṹ���塣��ַƫ����:0x930����ֵ:0x0000�����:32
 �Ĵ���˵��: Data Lockdown6�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  DATALOCK006 : 16; /* bit[0-15] : DATA Lockʹ�ܣ���AyUSERSx[7:5]=3'b110��ÿbit��Ӧÿ��way
                                                       0: ��Ӧ��way֧��allocate
                                                       1: ��Ӧ��way��֧��allocate */
        unsigned int  reserved    : 16; /* bit[16-31]:  */
    } reg;
} SOC_L2C_D_LOCKDOWN6_UNION;
#endif
#define SOC_L2C_D_LOCKDOWN6_DATALOCK006_START  (0)
#define SOC_L2C_D_LOCKDOWN6_DATALOCK006_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_L2C_I_LOCKDOWN6_UNION
 �ṹ˵��  : I_LOCKDOWN6 �Ĵ����ṹ���塣��ַƫ����:0x934����ֵ:0x0000�����:32
 �Ĵ���˵��: ָ��Lockdown6�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  INSLOCK006 : 16; /* bit[0-15] : Istruction Lockʹ�ܣ���AyUSERSx[7:5]=3'b110��ÿbit��Ӧÿ��way
                                                      0: ��Ӧ��way֧��allocate
                                                      1: ��Ӧ��way��֧��allocate */
        unsigned int  reserved   : 16; /* bit[16-31]:  */
    } reg;
} SOC_L2C_I_LOCKDOWN6_UNION;
#endif
#define SOC_L2C_I_LOCKDOWN6_INSLOCK006_START  (0)
#define SOC_L2C_I_LOCKDOWN6_INSLOCK006_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_L2C_D_LOCKDOWN7_UNION
 �ṹ˵��  : D_LOCKDOWN7 �Ĵ����ṹ���塣��ַƫ����:0x938����ֵ:0x0000�����:32
 �Ĵ���˵��: Data Lockdown7�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  DATALOCK007 : 16; /* bit[0-15] : DATA Lockʹ�ܣ���AyUSERSx[7:5]=3'b111��ÿbit��Ӧÿ��way
                                                       0: ��Ӧ��way֧��allocate
                                                       1: ��Ӧ��way��֧��allocate */
        unsigned int  reserved    : 16; /* bit[16-31]:  */
    } reg;
} SOC_L2C_D_LOCKDOWN7_UNION;
#endif
#define SOC_L2C_D_LOCKDOWN7_DATALOCK007_START  (0)
#define SOC_L2C_D_LOCKDOWN7_DATALOCK007_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_L2C_I_LOCKDOWN7_UNION
 �ṹ˵��  : I_LOCKDOWN7 �Ĵ����ṹ���塣��ַƫ����:0x93C����ֵ:0x0000�����:32
 �Ĵ���˵��: ָ��Lockdown7�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  INSLOCK007 : 16; /* bit[0-15] : Istruction Lockʹ�ܣ���AyUSERSx[7:5]=3'b111��ÿbit��Ӧÿ��way
                                                      0: ��Ӧ��way֧��allocate
                                                      1: ��Ӧ��way��֧��allocate */
        unsigned int  reserved   : 16; /* bit[16-31]:  */
    } reg;
} SOC_L2C_I_LOCKDOWN7_UNION;
#endif
#define SOC_L2C_I_LOCKDOWN7_INSLOCK007_START  (0)
#define SOC_L2C_I_LOCKDOWN7_INSLOCK007_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_L2C_LOCK_LINE_EN_UNION
 �ṹ˵��  : LOCK_LINE_EN �Ĵ����ṹ���塣��ַƫ����:0x950����ֵ:0x0000�����:32
 �Ĵ���˵��: Lockdown by lineʹ�ܼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ENABLE   : 1;  /* bit[0]   : Lockdown by line enable
                                                   0: diable
                                                   1: enable */
        unsigned int  reserved : 31; /* bit[1-31]:  */
    } reg;
} SOC_L2C_LOCK_LINE_EN_UNION;
#endif
#define SOC_L2C_LOCK_LINE_EN_ENABLE_START    (0)
#define SOC_L2C_LOCK_LINE_EN_ENABLE_END      (0)


/*****************************************************************************
 �ṹ��    : SOC_L2C_UNLOCK_WAY_UNION
 �ṹ˵��  : UNLOCK_WAY �Ĵ����ṹ���塣��ַƫ����:0x954����ֵ:0x0000�����:32
 �Ĵ���˵��: unlock all lines by way�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ENABLE   : 16; /* bit[0-15] : Unlock all lines by way operation��ÿbit���ÿ��way
                                                    0: disable
                                                    1: unlock����ʹ�� */
        unsigned int  reserved : 16; /* bit[16-31]:  */
    } reg;
} SOC_L2C_UNLOCK_WAY_UNION;
#endif
#define SOC_L2C_UNLOCK_WAY_ENABLE_START    (0)
#define SOC_L2C_UNLOCK_WAY_ENABLE_END      (15)


/*****************************************************************************
 �ṹ��    : SOC_L2C_ADDR_FIL_START_UNION
 �ṹ˵��  : ADDR_FIL_START �Ĵ����ṹ���塣��ַƫ����:0xC00����ֵ:0x0000�����:32
 �Ĵ���˵��: ��ַ������ʼ�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ENABLE   : 1;  /* bit[0]    : Address filteringʹ��
                                                    0: disable
                                                    1: enable */
        unsigned int  reserved : 19; /* bit[1-19] :  */
        unsigned int  ADDSTART : 12; /* bit[20-31]: Address filtering��ʼ��ַ�ĸ�λ
                                                    ע�⣺ARM����������END�Ĵ�����������START�Ĵ��� */
    } reg;
} SOC_L2C_ADDR_FIL_START_UNION;
#endif
#define SOC_L2C_ADDR_FIL_START_ENABLE_START    (0)
#define SOC_L2C_ADDR_FIL_START_ENABLE_END      (0)
#define SOC_L2C_ADDR_FIL_START_ADDSTART_START  (20)
#define SOC_L2C_ADDR_FIL_START_ADDSTART_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_L2C_ADDR_FIL_END_UNION
 �ṹ˵��  : ADDR_FIL_END �Ĵ����ṹ���塣��ַƫ����:0xC04����ֵ:0x0000�����:32
 �Ĵ���˵��: ��ַ���˽����Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved : 20; /* bit[0-19] :  */
        unsigned int  ADDEND   : 12; /* bit[20-31]: Address filtering������ַ��λ
                                                    ע�⣺ARM����������END�Ĵ�����������START�Ĵ��� */
    } reg;
} SOC_L2C_ADDR_FIL_END_UNION;
#endif
#define SOC_L2C_ADDR_FIL_END_ADDEND_START    (20)
#define SOC_L2C_ADDR_FIL_END_ADDEND_END      (31)


/*****************************************************************************
 �ṹ��    : SOC_L2C_DEBUG_CTRL_UNION
 �ṹ˵��  : DEBUG_CTRL �Ĵ����ṹ���塣��ַƫ����:0xF40����ֵ:0x0000�����:32
 �Ĵ���˵��: DEBUG���ƼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  DCL      : 1;  /* bit[0]   : Disable cache linefill
                                                   0: enable cache linefills
                                                   1: disable cache linefills */
        unsigned int  DWB      : 1;  /* bit[1]   : Disable write-back, force write through
                                                   0: Enable write-back
                                                   1: force write-through */
        unsigned int  SPNIDEN  : 1;  /* bit[2]   : ����SPNDIEN��ֵ */
        unsigned int  reserved : 29; /* bit[3-31]:  */
    } reg;
} SOC_L2C_DEBUG_CTRL_UNION;
#endif
#define SOC_L2C_DEBUG_CTRL_DCL_START       (0)
#define SOC_L2C_DEBUG_CTRL_DCL_END         (0)
#define SOC_L2C_DEBUG_CTRL_DWB_START       (1)
#define SOC_L2C_DEBUG_CTRL_DWB_END         (1)
#define SOC_L2C_DEBUG_CTRL_SPNIDEN_START   (2)
#define SOC_L2C_DEBUG_CTRL_SPNIDEN_END     (2)


/*****************************************************************************
 �ṹ��    : SOC_L2C_PREFETCH_CTRL_UNION
 �ṹ˵��  : PREFETCH_CTRL �Ĵ����ṹ���塣��ַƫ����:0xF60����ֵ:0x0000�����:32
 �Ĵ���˵��: Prefetch���ƼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  PO       : 5;  /* bit[0-4]  : Prefetch offset
                                                    ֻ��ʹ��0-7,15,23,31�⼸��ֵ��L2C-310��֧������ֵ */
        unsigned int  reserved_0: 16; /* bit[5-20] :  */
        unsigned int  NSIDESE  : 1;  /* bit[21]   : Not same ID on exclusive sequence enable
                                                    0: non-cacheable exclusive�Ķ�д������ͬһ��AXI ID
                                                    1: non-cacheable exclusive�Ķ�д�����в�ͬ��AXI ID */
        unsigned int  reserved_1: 1;  /* bit[22]   :  */
        unsigned int  IDLE     : 1;  /* bit[23]   : Increment double linefill enable
                                                    0: L2CC��֧��INCR8��64-bit read burst
                                                    1: L2CC֧��INCR8��64-bit read burst */
        unsigned int  PDE      : 1;  /* bit[24]   : Prefetch drop enable
                                                    0: L2CC������prefetch read
                                                    1: L2CC�ڷ�����Դ��ͻ��ʱ����prefetch���� */
        unsigned int  reserved_2: 2;  /* bit[25-26]:  */
        unsigned int  DLWRD    : 1;  /* bit[27]   : Double linefill on WRAP read disable
                                                    0: enable
                                                    1: disable */
        unsigned int  DPE      : 1;  /* bit[28]   : Data prefetch enable
                                                    0: disable
                                                    1: enable */
        unsigned int  IPE      : 1;  /* bit[29]   : Instruction prefetch enable
                                                    0: disable
                                                    1: enable */
        unsigned int  DLE      : 1;  /* bit[30]   : Double linefill enable
                                                    0: L2CCʼ����read miss��ʱ�򷢳�4��64-bit read burst
                                                    1: L2CC��read miss��ʱ�򷢳�8��64-bit read burst */
        unsigned int  reserved_3: 1;  /* bit[31]   :  */
    } reg;
} SOC_L2C_PREFETCH_CTRL_UNION;
#endif
#define SOC_L2C_PREFETCH_CTRL_PO_START        (0)
#define SOC_L2C_PREFETCH_CTRL_PO_END          (4)
#define SOC_L2C_PREFETCH_CTRL_NSIDESE_START   (21)
#define SOC_L2C_PREFETCH_CTRL_NSIDESE_END     (21)
#define SOC_L2C_PREFETCH_CTRL_IDLE_START      (23)
#define SOC_L2C_PREFETCH_CTRL_IDLE_END        (23)
#define SOC_L2C_PREFETCH_CTRL_PDE_START       (24)
#define SOC_L2C_PREFETCH_CTRL_PDE_END         (24)
#define SOC_L2C_PREFETCH_CTRL_DLWRD_START     (27)
#define SOC_L2C_PREFETCH_CTRL_DLWRD_END       (27)
#define SOC_L2C_PREFETCH_CTRL_DPE_START       (28)
#define SOC_L2C_PREFETCH_CTRL_DPE_END         (28)
#define SOC_L2C_PREFETCH_CTRL_IPE_START       (29)
#define SOC_L2C_PREFETCH_CTRL_IPE_END         (29)
#define SOC_L2C_PREFETCH_CTRL_DLE_START       (30)
#define SOC_L2C_PREFETCH_CTRL_DLE_END         (30)


/*****************************************************************************
 �ṹ��    : SOC_L2C_POWER_CTRL_UNION
 �ṹ˵��  : POWER_CTRL �Ĵ����ṹ���塣��ַƫ����:0xF80����ֵ:0x0000�����:32
 �Ĵ���˵��: ���Ŀ��ƼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  SDBMODEEN : 1;  /* bit[0]   : standby mode enable
                                                    0: disable
                                                    1: enable */
        unsigned int  DCGEN     : 1;  /* bit[1]   : dynamic clock gating enable
                                                    0: disable
                                                    1: enable */
        unsigned int  reserved  : 30; /* bit[2-31]:  */
    } reg;
} SOC_L2C_POWER_CTRL_UNION;
#endif
#define SOC_L2C_POWER_CTRL_SDBMODEEN_START  (0)
#define SOC_L2C_POWER_CTRL_SDBMODEEN_END    (0)
#define SOC_L2C_POWER_CTRL_DCGEN_START      (1)
#define SOC_L2C_POWER_CTRL_DCGEN_END        (1)






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

#endif /* end of soc_l2c_interface.h */
