

/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/

#ifndef __SOC_MEDIA_SCTRL_INTERFACE_H__
#define __SOC_MEDIA_SCTRL_INTERFACE_H__

#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif



/*****************************************************************************
  2 �궨��
*****************************************************************************/

/****************************************************************************
                     (1/1) media_sc_reg
 ****************************************************************************/
/* �Ĵ���˵����MEDIA���ƼĴ��������ܰ���CODEC��RFS/RAS/RAD����memory ����
   λ����UNION�ṹ:  SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL0_UNION */
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL0_ADDR(base) ((base) + (0x00EC))

/* �Ĵ���˵����MEDIA���ƼĴ��������ܰ���G3D��RFS����memory����
   λ����UNION�ṹ:  SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL1_UNION */
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL1_ADDR(base) ((base) + (0x00F0))

/* �Ĵ���˵����MEDIA��ϵͳ���ƼĴ��������ܰ���ADE��SMMU��RAS/RFS����memory����
   λ����UNION�ṹ:  SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL2_UNION */
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL2_ADDR(base) ((base) + (0x518))

/* �Ĵ���˵����MEDIA��ϵͳ���ƼĴ��������ܰ���G3D�����Լ�RFD����memory����
   λ����UNION�ṹ:  SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL0_UNION */
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL0_ADDR(base) ((base) + (0x500))

/* �Ĵ���˵����MEDIA��ϵͳ���ƼĴ��������ܰ���ISP����(I2C0��I2C1)
   λ����UNION�ṹ:  SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL1_UNION */
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL1_ADDR(base) ((base) + (0x504))

/* �Ĵ���˵����MEDIA��ϵͳ���ƼĴ��������ܰ���CODEC_VPU�����Լ�CODEC��RFD����memory����
   λ����UNION�ṹ:  SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL2_UNION */
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL2_ADDR(base) ((base) + (0x508))

/* �Ĵ���˵����MEDIA��ϵͳ���ƼĴ��������ܰ���CODEC JPEG����
   λ����UNION�ṹ:  SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL3_UNION */
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL3_ADDR(base) ((base) + (0x50C))

/* �Ĵ���˵����MEDIA��ϵͳ���ƼĴ��������ܰ���ADE��RFD����memory����
   λ����UNION�ṹ:  SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL4_UNION */
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL4_ADDR(base) ((base) + (0x514))

/* �Ĵ���˵����MEDIA��ϵͳ���ƼĴ��������ܰ�����G3D��ADE,CODECʱ��Դ��ѡ�񣬼�MMU��ISP�Ŀ��ƣ�MEMORY SHAREѡ��
   λ����UNION�ṹ:  SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL5_UNION */
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL5_ADDR(base) ((base) + (0x51C))

/* �Ĵ���˵����MEDIA��ϵͳ״̬�Ĵ��������ܰ���G3D״̬
   λ����UNION�ṹ:  SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_STAT0_UNION */
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_STAT0_ADDR(base) ((base) + (0x540))

/* �Ĵ���˵����MEDIA��ϵͳ״̬�Ĵ��������ܰ���ISP״̬
   λ����UNION�ṹ:  SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_STAT1_UNION */
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_STAT1_ADDR(base) ((base) + (0x544))

/* �Ĵ���˵����MEDIA��ϵͳ״̬�Ĵ��������ܰ���CODEC VPU״̬
   λ����UNION�ṹ:  SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_STAT2_UNION */
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_STAT2_ADDR(base) ((base) + (0x548))

/* �Ĵ���˵����MEDIA��ϵͳ״̬�Ĵ��������ܰ���CODEC JPEG״̬
   λ����UNION�ṹ:  SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_STAT3_UNION */
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_STAT3_ADDR(base) ((base) + (0x54C))

/* �Ĵ���˵����MEDIA��ϵͳ״̬�Ĵ��������ܰ���ADE/NOC��״̬
   λ����UNION�ṹ:  SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_STAT4_UNION */
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_STAT4_ADDR(base) ((base) + (0x550))

/* �Ĵ���˵����MEDIA��ϵͳNOC�Զ���Ƶ�������üĴ���
   λ����UNION�ṹ:  SOC_MEDIA_SCTRL_SC_MEDIA_NOC_DFS_UNION */
#define SOC_MEDIA_SCTRL_SC_MEDIA_NOC_DFS_ADDR(base)   ((base) + (0x510))

/* �Ĵ���˵����MEDIAʱ�Ӳ������üĴ���0(ISP��NOC)
   λ����UNION�ṹ:  SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG0_UNION */
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG0_ADDR(base)   ((base) + (0xCBC))

/* �Ĵ���˵����MEDIAʱ�Ӳ������üĴ���1��ADE��
   λ����UNION�ṹ:  SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG1_UNION */
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG1_ADDR(base)   ((base) + (0xCC0))

/* �Ĵ���˵����MEDIAʱ�Ӳ������üĴ���2(CODEC��GPU)
   λ����UNION�ṹ:  SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG2_UNION */
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG2_ADDR(base)   ((base) + (0xCC4))

/* �Ĵ���˵����MEDIA��ϵͳʱ��ʹ�ܼĴ������Ա���д1��ʹ�ܶ�Ӧ��ʱ�ӣ�д0��Ӱ��ʱ��ʹ�ܵ�״̬��
   λ����UNION�ṹ:  SOC_MEDIA_SCTRL_SC_MEDIA_CLKEN_UNION */
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKEN_ADDR(base)     ((base) + (0x520))

/* �Ĵ���˵����MEDIA��ϵͳʱ�ӽ�ֹ�Ĵ������Ա���д1����ֹ��Ӧ��ʱ�ӣ�д0��Ӱ��ʱ��ʹ�ܵ�״̬��
   λ����UNION�ṹ:  SOC_MEDIA_SCTRL_SC_MEDIA_CLKDIS_UNION */
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKDIS_ADDR(base)    ((base) + (0x524))

/* �Ĵ���˵����MEDIA��ϵͳʱ��״̬�Ĵ�������SC_MEDIA_CLKEN��SC_MEDIA_CLKDIS���ý���״̬�޸ġ�
            ý��ʱ�ӿ����ź��辭����MEDIA_CRG�н���ͬ��������ˣ�����ļĴ���ֵ���ӳ���Ӧʱ����ļ������ں��������Ӧʱ��״̬��
            ÿ��Bit���壺
            0��ʱ�ӹرգ�
            1��ʱ�Ӵ򿪡�
   λ����UNION�ṹ:  SOC_MEDIA_SCTRL_SC_MEDIA_CLK_STAT_UNION */
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLK_STAT_ADDR(base)  ((base) + (0x528))

/* �Ĵ���˵����MEDIA��ϵͳ��λʹ�ܼĴ���������ʹ�ܸ�λ���Ա���д1����ӦIP���븴λ״̬��д0��Ӱ�츴λ״̬��
   λ����UNION�ṹ:  SOC_MEDIA_SCTRL_SC_MEDIA_RSTEN_UNION */
#define SOC_MEDIA_SCTRL_SC_MEDIA_RSTEN_ADDR(base)     ((base) + (0x52C))

/* �Ĵ���˵����MEDIA��ϵͳ�⸴λ�Ĵ��������ڽ�ֹ��λ���Ա���д1����ӦIP�����λ��д0��Ӱ�츴λʹ�ܵ�״̬��
   λ����UNION�ṹ:  SOC_MEDIA_SCTRL_SC_MEDIA_RSTDIS_UNION */
#define SOC_MEDIA_SCTRL_SC_MEDIA_RSTDIS_ADDR(base)    ((base) + (0x530))

/* �Ĵ���˵����MEDIA��ϵͳ��λʹ��״̬�Ĵ�������SC_MEDIA_RSTEN��SC_MEDIA_RSTDIS���ý���״̬�޸ġ��⸴λ�����ź��辭��ͬ��������ˣ�����ļĴ���ֵ���ӳ���Ӧʱ����ļ������ں��������Ӧ�⸴λ״̬��
            ÿ��Bit���壺
            0����λ��ʹ�ܣ�
            1����λʹ�ܡ�
   λ����UNION�ṹ:  SOC_MEDIA_SCTRL_SC_MEDIA_RST_STAT_UNION */
#define SOC_MEDIA_SCTRL_SC_MEDIA_RST_STAT_ADDR(base)  ((base) + (0x534))

/* �Ĵ���˵����MEDIA��ϵͳ���ƼĴ��������ܰ���TEST_MUX����
   λ����UNION�ṹ:  SOC_MEDIA_SCTRL_SC_MEDIA__SUBSYS_CTRL6_UNION */
#define SOC_MEDIA_SCTRL_SC_MEDIA__SUBSYS_CTRL6_ADDR(base) ((base) + (0x538))

/* �Ĵ���˵����MEDIA��ϵͳ���ƼĴ��������ܰ���hurry/press���ã���ϸ��μ�NOC���˵����
   λ����UNION�ṹ:  SOC_MEDIA_SCTRL_SC_MEDIA__SUBSYS_CTRL7_UNION */
#define SOC_MEDIA_SCTRL_SC_MEDIA__SUBSYS_CTRL7_ADDR(base) ((base) + (0x53C))

/* �Ĵ���˵����MEDIA��ϵͳ���ƼĴ��������ܰ���hurry/press/qos���ã���ϸ��μ�NOC���˵����
   λ����UNION�ṹ:  SOC_MEDIA_SCTRL_SC_MEDIA__SUBSYS_CTRL8_UNION */
#define SOC_MEDIA_SCTRL_SC_MEDIA__SUBSYS_CTRL8_ADDR(base) ((base) + (0x554))





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
                     (1/1) media_sc_reg
 ****************************************************************************/
/*****************************************************************************
 �ṹ��    : SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL0_UNION
 �ṹ˵��  : SC_MEDIA_PERIPH_CTRL0 �Ĵ����ṹ���塣��ַƫ����:0x00EC����ֵ:0x0C9B0C9B�����:32
 �Ĵ���˵��: MEDIA���ƼĴ��������ܰ���CODEC��RFS/RAS/RAD����memory ����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  codec_rad_ramctrl_ema      : 3;  /* bit[0-2]  : memory�����ʿ��ƣ����ֵ������memory����ʱ���� */
        unsigned int  reserved_0                 : 1;  /* bit[3]    : reserved */
        unsigned int  codec_rad_ramctrl_emaw     : 2;  /* bit[4-5]  : memoryд���ʿ��ƣ����ֵ������memoryд��ʱ���� */
        unsigned int  codec_rad_ramctrl_emas     : 1;  /* bit[6]    : ��HSmemory�����ã�
                                                                      ��HDmemoryΪ����bit�������壻 */
        unsigned int  codec_rad_ramctrl_colldisn : 1;  /* bit[7]    : ͬʱ��дһ����ַʱ��memory����Ϊ
                                                                      0����д������֤��ȷ
                                                                      1��д��֤��ȷ��������֤��ȷ */
        unsigned int  reserved_1                 : 2;  /* bit[8-9]  : reserved */
        unsigned int  codec_rad_ramctrl_s_ret1n  : 1;  /* bit[10]   : retention����1
                                                                      0��retentionģʽ1��
                                                                      1����������ģʽ�� */
        unsigned int  codec_rad_ramctrl_s_ret2n  : 1;  /* bit[11]   : ֻ�е���powergatingѡ��ʱ�д˹��ܣ���û��powergating���ܵ�memory���˶˿�Ϊ�����������塣
                                                                      retention����2
                                                                      0��retentionģʽ2��
                                                                      1����������ģʽ�� */
        unsigned int  codec_rad_ramctrl_s_pgen   : 1;  /* bit[12]   : ֻ�е���powergatingѡ��ʱ�д˹��ܣ���û��powergating���ܵ�memory���˶˿�Ϊ�����������塣
                                                                      0����������ģʽ��
                                                                      1�����ret1n/ret2n���retention�� */
        unsigned int  reserved_2                 : 3;  /* bit[13-15]: reserved */
        unsigned int  codec_rfs_ramctrl_ema      : 3;  /* bit[16-18]: memory�����ʿ��ƣ����ֵ������memory����ʱ����
                                                                      A�ں�B�ڹ�������á� */
        unsigned int  reserved_3                 : 1;  /* bit[19]   : reserved */
        unsigned int  codec_rfs_ramctrl_emaw     : 2;  /* bit[20-21]: memoryд���ʿ��ƣ����ֵ������memoryд��ʱ����
                                                                      A�ں�B�ڹ�������á� */
        unsigned int  codec_rfs_ramctrl_emas     : 1;  /* bit[22]   : A�ں�B�ڹ�������á�
                                                                      ��HSmemory�����ã�
                                                                      ��HDmemoryΪ����bit�������壻 */
        unsigned int  reserved_4                 : 3;  /* bit[23-25]: reserved */
        unsigned int  codec_rfs_ramctrl_s_ret1n  : 1;  /* bit[26]   : retention����1
                                                                      0��retentionģʽ1��
                                                                      1����������ģʽ�� */
        unsigned int  codec_rfs_ramctrl_s_ret2n  : 1;  /* bit[27]   : ֻ�е���powergatingѡ��ʱ�д˹��ܣ���û��powergating���ܵ�memory���˶˿�Ϊ�����������塣
                                                                      retention����2
                                                                      0��retentionģʽ2��
                                                                      1����������ģʽ�� */
        unsigned int  codec_rfs_ramctrl_s_pgen   : 1;  /* bit[28]   : ֻ�е���powergatingѡ��ʱ�д˹��ܣ���û��powergating���ܵ�memory���˶˿�Ϊ�����������塣
                                                                      0����������ģʽ��
                                                                      1�����ret1n/ret2n���retention�� */
        unsigned int  reserved_5                 : 3;  /* bit[29-31]: reserved */
    } reg;
} SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL0_UNION;
#endif
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL0_codec_rad_ramctrl_ema_START       (0)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL0_codec_rad_ramctrl_ema_END         (2)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL0_codec_rad_ramctrl_emaw_START      (4)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL0_codec_rad_ramctrl_emaw_END        (5)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL0_codec_rad_ramctrl_emas_START      (6)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL0_codec_rad_ramctrl_emas_END        (6)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL0_codec_rad_ramctrl_colldisn_START  (7)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL0_codec_rad_ramctrl_colldisn_END    (7)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL0_codec_rad_ramctrl_s_ret1n_START   (10)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL0_codec_rad_ramctrl_s_ret1n_END     (10)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL0_codec_rad_ramctrl_s_ret2n_START   (11)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL0_codec_rad_ramctrl_s_ret2n_END     (11)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL0_codec_rad_ramctrl_s_pgen_START    (12)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL0_codec_rad_ramctrl_s_pgen_END      (12)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL0_codec_rfs_ramctrl_ema_START       (16)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL0_codec_rfs_ramctrl_ema_END         (18)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL0_codec_rfs_ramctrl_emaw_START      (20)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL0_codec_rfs_ramctrl_emaw_END        (21)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL0_codec_rfs_ramctrl_emas_START      (22)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL0_codec_rfs_ramctrl_emas_END        (22)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL0_codec_rfs_ramctrl_s_ret1n_START   (26)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL0_codec_rfs_ramctrl_s_ret1n_END     (26)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL0_codec_rfs_ramctrl_s_ret2n_START   (27)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL0_codec_rfs_ramctrl_s_ret2n_END     (27)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL0_codec_rfs_ramctrl_s_pgen_START    (28)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL0_codec_rfs_ramctrl_s_pgen_END      (28)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL1_UNION
 �ṹ˵��  : SC_MEDIA_PERIPH_CTRL1 �Ĵ����ṹ���塣��ַƫ����:0x00F0����ֵ:0x0C9B0C9B�����:32
 �Ĵ���˵��: MEDIA���ƼĴ��������ܰ���G3D��RFS����memory����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved_0              : 16; /* bit[0-15] : ���� */
        unsigned int  g3d_rfs_ramctrl_ema     : 3;  /* bit[16-18]: memeryд���ʿ��ƣ����ֵ������memeryд��ʱ���� */
        unsigned int  reserved_1              : 1;  /* bit[19]   : ���� */
        unsigned int  g3d_rfs_ramctrl_emaw    : 2;  /* bit[20-21]: memeryд���ʿ��ƣ����ֵ������memeryд��ʱ���� */
        unsigned int  g3d_rfs_ramctrl_emas    : 1;  /* bit[22]   : ��HSmemory�����ã�
                                                                   ��HDmemoryΪ����bit�������壻 */
        unsigned int  reserved_2              : 3;  /* bit[23-25]: ���� */
        unsigned int  g3d_rfs_ramctrl_s_ret1n : 1;  /* bit[26]   : retention����1
                                                                   0��retentionģʽ1��
                                                                   1����������ģʽ�� */
        unsigned int  g3d_rfs_ramctrl_s_ret2n : 1;  /* bit[27]   : ֻ�е���powergatingѡ��ʱ�д˹��ܣ���û��powergating���ܵ�memory���˶˿�Ϊ�����������塣
                                                                   retention����2
                                                                   0��retentionģʽ2��
                                                                   1����������ģʽ�� */
        unsigned int  g3d_rfs_ramctrl_s_pgen  : 1;  /* bit[28]   : ֻ�е���powergatingѡ��ʱ�д˹��ܣ���û��powergating���ܵ�memory���˶˿�Ϊ�����������塣
                                                                   0����������ģʽ��
                                                                   1�����ret1n/ret2n���retention�� */
        unsigned int  reserved_3              : 3;  /* bit[29-31]: reserved */
    } reg;
} SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL1_UNION;
#endif
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL1_g3d_rfs_ramctrl_ema_START      (16)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL1_g3d_rfs_ramctrl_ema_END        (18)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL1_g3d_rfs_ramctrl_emaw_START     (20)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL1_g3d_rfs_ramctrl_emaw_END       (21)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL1_g3d_rfs_ramctrl_emas_START     (22)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL1_g3d_rfs_ramctrl_emas_END       (22)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL1_g3d_rfs_ramctrl_s_ret1n_START  (26)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL1_g3d_rfs_ramctrl_s_ret1n_END    (26)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL1_g3d_rfs_ramctrl_s_ret2n_START  (27)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL1_g3d_rfs_ramctrl_s_ret2n_END    (27)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL1_g3d_rfs_ramctrl_s_pgen_START   (28)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL1_g3d_rfs_ramctrl_s_pgen_END     (28)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL2_UNION
 �ṹ˵��  : SC_MEDIA_PERIPH_CTRL2 �Ĵ����ṹ���塣��ַƫ����:0x518����ֵ:0x0C9B0C9B�����:32
 �Ĵ���˵��: MEDIA��ϵͳ���ƼĴ��������ܰ���ADE��SMMU��RAS/RFS����memory����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  smmu_rfs_ramctrl_ema     : 3;  /* bit[0-2]  : memeryд���ʿ��ƣ����ֵ������memeryд��ʱ���� */
        unsigned int  reserved_0               : 1;  /* bit[3]    : ���� */
        unsigned int  smmu_rfs_ramctrl_emaw    : 2;  /* bit[4-5]  : memeryд���ʿ��ƣ����ֵ������memeryд��ʱ���� */
        unsigned int  smmu_rfs_ramctrl_emas    : 1;  /* bit[6]    : ��HSmemory�����ã�
                                                                    ��HDmemoryΪ����bit�������壻 */
        unsigned int  reserved_1               : 3;  /* bit[7-9]  : reserved */
        unsigned int  smmu_rfs_ramctrl_s_ret1n : 1;  /* bit[10]   : retention����1
                                                                    0��retentionģʽ1��
                                                                    1����������ģʽ�� */
        unsigned int  smmu_rfs_ramctrl_s_ret2n : 1;  /* bit[11]   : ֻ�е���powergatingѡ��ʱ�д˹��ܣ���û��powergating���ܵ�memory���˶˿�Ϊ�����������塣
                                                                    retention����2
                                                                    0��retentionģʽ2��
                                                                    1����������ģʽ�� */
        unsigned int  smmu_rfs_ramctrl_s_pgen  : 1;  /* bit[12]   : ֻ�е���powergatingѡ��ʱ�д˹��ܣ���û��powergating���ܵ�memory���˶˿�Ϊ�����������塣
                                                                    0����������ģʽ��
                                                                    1�����ret1n/ret2n���retention�� */
        unsigned int  reserved_2               : 3;  /* bit[13-15]: reserved */
        unsigned int  ade_rfs_ramctrl_ema      : 3;  /* bit[16-18]: memeryд���ʿ��ƣ����ֵ������memeryд��ʱ���� */
        unsigned int  reserved_3               : 1;  /* bit[19]   : ���� */
        unsigned int  ade_rfs_ramctrl_emaw     : 2;  /* bit[20-21]: memeryд���ʿ��ƣ����ֵ������memeryд��ʱ���� */
        unsigned int  ade_rfs_ramctrl_emas     : 1;  /* bit[22]   : ��HSmemory�����ã�
                                                                    ��HDmemoryΪ����bit�������壻 */
        unsigned int  reserved_4               : 3;  /* bit[23-25]: reserved */
        unsigned int  ade_rfs_ramctrl_s_ret1n  : 1;  /* bit[26]   : retention����1
                                                                    0��retentionģʽ1��
                                                                    1����������ģʽ�� */
        unsigned int  ade_rfs_ramctrl_s_ret2n  : 1;  /* bit[27]   : ֻ�е���powergatingѡ��ʱ�д˹��ܣ���û��powergating���ܵ�memory���˶˿�Ϊ�����������塣
                                                                    retention����2
                                                                    0��retentionģʽ2��
                                                                    1����������ģʽ�� */
        unsigned int  ade_rfs_ramctrl_s_pgen   : 1;  /* bit[28]   : ֻ�е���powergatingѡ��ʱ�д˹��ܣ���û��powergating���ܵ�memory���˶˿�Ϊ�����������塣
                                                                    0����������ģʽ��
                                                                    1�����ret1n/ret2n���retention�� */
        unsigned int  reserved_5               : 3;  /* bit[29-31]: reserved */
    } reg;
} SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL2_UNION;
#endif
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL2_smmu_rfs_ramctrl_ema_START      (0)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL2_smmu_rfs_ramctrl_ema_END        (2)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL2_smmu_rfs_ramctrl_emaw_START     (4)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL2_smmu_rfs_ramctrl_emaw_END       (5)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL2_smmu_rfs_ramctrl_emas_START     (6)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL2_smmu_rfs_ramctrl_emas_END       (6)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL2_smmu_rfs_ramctrl_s_ret1n_START  (10)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL2_smmu_rfs_ramctrl_s_ret1n_END    (10)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL2_smmu_rfs_ramctrl_s_ret2n_START  (11)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL2_smmu_rfs_ramctrl_s_ret2n_END    (11)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL2_smmu_rfs_ramctrl_s_pgen_START   (12)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL2_smmu_rfs_ramctrl_s_pgen_END     (12)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL2_ade_rfs_ramctrl_ema_START       (16)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL2_ade_rfs_ramctrl_ema_END         (18)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL2_ade_rfs_ramctrl_emaw_START      (20)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL2_ade_rfs_ramctrl_emaw_END        (21)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL2_ade_rfs_ramctrl_emas_START      (22)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL2_ade_rfs_ramctrl_emas_END        (22)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL2_ade_rfs_ramctrl_s_ret1n_START   (26)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL2_ade_rfs_ramctrl_s_ret1n_END     (26)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL2_ade_rfs_ramctrl_s_ret2n_START   (27)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL2_ade_rfs_ramctrl_s_ret2n_END     (27)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL2_ade_rfs_ramctrl_s_pgen_START    (28)
#define SOC_MEDIA_SCTRL_SC_MEDIA_PERIPH_CTRL2_ade_rfs_ramctrl_s_pgen_END      (28)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL0_UNION
 �ṹ˵��  : SC_MEDIA_SUBSYS_CTRL0 �Ĵ����ṹ���塣��ַƫ����:0x500����ֵ:0x00000000�����:32
 �Ĵ���˵��: MEDIA��ϵͳ���ƼĴ��������ܰ���G3D�����Լ�RFD����memory����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  reserved_0               : 16; /* bit[0-15] : ���� */
        unsigned int  g3d_rfd_ramctrl_emaa     : 3;  /* bit[16-18]: memory�����ʿ��ƣ����ֵ������memory����ʱ���� */
        unsigned int  g3d_rfd_ramctrl_emab     : 3;  /* bit[19-21]: ���岻��ȷ */
        unsigned int  g3d_rfd_ramctrl_emasa    : 1;  /* bit[22]   : ���岻��ȷ */
        unsigned int  g3d_rfd_ramctrl_colldisn : 1;  /* bit[23]   : ͬʱ��дһ����ַʱ��memory����Ϊ
                                                                    0����д������֤��ȷ
                                                                    1��д��֤��ȷ��������֤��ȷ */
        unsigned int  reserved_1               : 2;  /* bit[24-25]: reserved */
        unsigned int  g3d_rfd_ramctrl_s_ret1n  : 1;  /* bit[26]   : retention����1
                                                                    0��retentionģʽ1��
                                                                    1����������ģʽ�� */
        unsigned int  g3d_rfd_ramctrl_s_ret2n  : 1;  /* bit[27]   : ֻ�е���powergatingѡ��ʱ�д˹��ܣ���û��powergating���ܵ�memory���˶˿�Ϊ�����������塣
                                                                    retention����2
                                                                    0��retentionģʽ2��
                                                                    1����������ģʽ�� */
        unsigned int  g3d_rfd_ramctrl_s_pgen   : 1;  /* bit[28]   : ֻ�е���powergatingѡ��ʱ�д˹��ܣ���û��powergating���ܵ�memory���˶˿�Ϊ�����������塣
                                                                    0����������ģʽ��
                                                                    1�����ret1n/ret2n���retention�� */
        unsigned int  reserved_2               : 3;  /* bit[29-31]: reserved */
    } reg;
} SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL0_UNION;
#endif
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL0_g3d_rfd_ramctrl_emaa_START      (16)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL0_g3d_rfd_ramctrl_emaa_END        (18)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL0_g3d_rfd_ramctrl_emab_START      (19)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL0_g3d_rfd_ramctrl_emab_END        (21)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL0_g3d_rfd_ramctrl_emasa_START     (22)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL0_g3d_rfd_ramctrl_emasa_END       (22)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL0_g3d_rfd_ramctrl_colldisn_START  (23)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL0_g3d_rfd_ramctrl_colldisn_END    (23)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL0_g3d_rfd_ramctrl_s_ret1n_START   (26)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL0_g3d_rfd_ramctrl_s_ret1n_END     (26)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL0_g3d_rfd_ramctrl_s_ret2n_START   (27)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL0_g3d_rfd_ramctrl_s_ret2n_END     (27)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL0_g3d_rfd_ramctrl_s_pgen_START    (28)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL0_g3d_rfd_ramctrl_s_pgen_END      (28)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL1_UNION
 �ṹ˵��  : SC_MEDIA_SUBSYS_CTRL1 �Ĵ����ṹ���塣��ַƫ����:0x504����ֵ:0x0002B2B0�����:32
 �Ĵ���˵��: MEDIA��ϵͳ���ƼĴ��������ܰ���ISP����(I2C0��I2C1)
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  media_subsys_ctrl1_lp_ctrl       : 2;  /* bit[0-1]  : sc_ctrl_isp[1]:��ʾisp��shutdown���ƣ�����Ч
                                                                            sc_ctrl_isp[0]:��ʾ��isp��dfs���� */
        unsigned int  media_subsys_ctrl1_i2c0_oden     : 1;  /* bit[2]    : ISP��I2C0��OD�ͷ�ODģʽѡ��,
                                                                            1����ODģʽ
                                                                            0��ODģʽ */
        unsigned int  media_subsys_ctrl1_i2c0_dly_en   : 1;  /* bit[3]    : ISP��I2C0���ӳٹ���ʱ��,
                                                                            1����ʾʱ��
                                                                            0����ʾ��ֹ */
        unsigned int  media_subsys_ctrl1_i2c0_dly_time : 6;  /* bit[4-9]  : ��I2C0���ӳٹ���ʹ��ʱ���ӳ�ʱ������ */
        unsigned int  media_subsys_ctrl1_i2c1_oden     : 1;  /* bit[10]   : ISP��I2C1��OD�ͷ�ODģʽѡ��,
                                                                            1����ODģʽ
                                                                            0��ODģʽ */
        unsigned int  media_subsys_ctrl1_i2c1_dly_en   : 1;  /* bit[11]   : ISP��I2C1���ӳٹ���ʱ��,
                                                                            1����ʾʱ��
                                                                            0����ʾ��ֹ */
        unsigned int  media_subsys_ctrl1_i2c1_dly_time : 6;  /* bit[12-17]: ��I2C1���ӳٹ���ʹ��ʱ���ӳ�clock�� */
        unsigned int  media_subsys_ctrl1               : 14; /* bit[18-31]: reserved */
    } reg;
} SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL1_UNION;
#endif
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL1_media_subsys_ctrl1_lp_ctrl_START        (0)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL1_media_subsys_ctrl1_lp_ctrl_END          (1)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL1_media_subsys_ctrl1_i2c0_oden_START      (2)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL1_media_subsys_ctrl1_i2c0_oden_END        (2)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL1_media_subsys_ctrl1_i2c0_dly_en_START    (3)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL1_media_subsys_ctrl1_i2c0_dly_en_END      (3)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL1_media_subsys_ctrl1_i2c0_dly_time_START  (4)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL1_media_subsys_ctrl1_i2c0_dly_time_END    (9)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL1_media_subsys_ctrl1_i2c1_oden_START      (10)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL1_media_subsys_ctrl1_i2c1_oden_END        (10)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL1_media_subsys_ctrl1_i2c1_dly_en_START    (11)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL1_media_subsys_ctrl1_i2c1_dly_en_END      (11)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL1_media_subsys_ctrl1_i2c1_dly_time_START  (12)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL1_media_subsys_ctrl1_i2c1_dly_time_END    (17)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL1_media_subsys_ctrl1_START                (18)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL1_media_subsys_ctrl1_END                  (31)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL2_UNION
 �ṹ˵��  : SC_MEDIA_SUBSYS_CTRL2 �Ĵ����ṹ���塣��ַƫ����:0x508����ֵ:0x0C9B0000�����:32
 �Ĵ���˵��: MEDIA��ϵͳ���ƼĴ��������ܰ���CODEC_VPU�����Լ�CODEC��RFD����memory����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  auto_codec_vpu_clken       : 1;  /* bit[0]    : codec vpu��cclk���Զ���Ƶʹ���źţ�
                                                                      1����ʾʹ��codec��cclk���Զ�ʱ�ӵ�Ƶ
                                                                      0����ʾ��ֹcodec��cclk���Զ�ʱ�ӵ�Ƶ */
        unsigned int  reserved_0                 : 15; /* bit[1-15] : ���� */
        unsigned int  codec_rfd_ramctrl_emaa     : 3;  /* bit[16-18]: memory�����ʿ��ƣ����ֵ������memory����ʱ���� */
        unsigned int  codec_rfd_ramctrl_emab     : 3;  /* bit[19-21]: ���岻��ȷ */
        unsigned int  codec_rfd_ramctrl_emasa    : 1;  /* bit[22]   : ���岻��ȷ */
        unsigned int  codec_rfd_ramctrl_colldisn : 1;  /* bit[23]   : ͬʱ��дһ����ַʱ��memory����Ϊ
                                                                      0����д������֤��ȷ
                                                                      1��д��֤��ȷ��������֤��ȷ */
        unsigned int  reserved_1                 : 2;  /* bit[24-25]: reserved */
        unsigned int  codec_rfd_ramctrl_s_ret1n  : 1;  /* bit[26]   : retention����1
                                                                      0��retentionģʽ1��
                                                                      1����������ģʽ�� */
        unsigned int  codec_rfd_ramctrl_s_ret2n  : 1;  /* bit[27]   : ֻ�е���powergatingѡ��ʱ�д˹��ܣ���û��powergating���ܵ�memory���˶˿�Ϊ�����������塣
                                                                      retention����2
                                                                      0��retentionģʽ2��
                                                                      1����������ģʽ�� */
        unsigned int  codec_rfd_ramctrl_s_pgen   : 1;  /* bit[28]   : ֻ�е���powergatingѡ��ʱ�д˹��ܣ���û��powergating���ܵ�memory���˶˿�Ϊ�����������塣
                                                                      0����������ģʽ��
                                                                      1�����ret1n/ret2n���retention�� */
        unsigned int  reserved_2                 : 3;  /* bit[29-31]: reserved */
    } reg;
} SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL2_UNION;
#endif
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL2_auto_codec_vpu_clken_START        (0)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL2_auto_codec_vpu_clken_END          (0)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL2_codec_rfd_ramctrl_emaa_START      (16)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL2_codec_rfd_ramctrl_emaa_END        (18)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL2_codec_rfd_ramctrl_emab_START      (19)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL2_codec_rfd_ramctrl_emab_END        (21)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL2_codec_rfd_ramctrl_emasa_START     (22)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL2_codec_rfd_ramctrl_emasa_END       (22)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL2_codec_rfd_ramctrl_colldisn_START  (23)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL2_codec_rfd_ramctrl_colldisn_END    (23)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL2_codec_rfd_ramctrl_s_ret1n_START   (26)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL2_codec_rfd_ramctrl_s_ret1n_END     (26)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL2_codec_rfd_ramctrl_s_ret2n_START   (27)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL2_codec_rfd_ramctrl_s_ret2n_END     (27)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL2_codec_rfd_ramctrl_s_pgen_START    (28)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL2_codec_rfd_ramctrl_s_pgen_END      (28)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL3_UNION
 �ṹ˵��  : SC_MEDIA_SUBSYS_CTRL3 �Ĵ����ṹ���塣��ַƫ����:0x50C����ֵ:0x00000000�����:32
 �Ĵ���˵��: MEDIA��ϵͳ���ƼĴ��������ܰ���CODEC JPEG����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  media_subsys_ctrl3 : 32; /* bit[0-31]: codec_jpeg subsyscrtl[31:0] */
    } reg;
} SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL3_UNION;
#endif
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL3_media_subsys_ctrl3_START  (0)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL3_media_subsys_ctrl3_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL4_UNION
 �ṹ˵��  : SC_MEDIA_SUBSYS_CTRL4 �Ĵ����ṹ���塣��ַƫ����:0x514����ֵ:0x00000C9B�����:32
 �Ĵ���˵��: MEDIA��ϵͳ���ƼĴ��������ܰ���ADE��RFD����memory����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ade_rfd_ramctrl_ema      : 3;  /* bit[0-2]  : memeryд���ʿ��ƣ����ֵ������memeryд��ʱ���� */
        unsigned int  ade_rfd_ramctrl_emab     : 3;  /* bit[3-5]  : ���岻��ȷ */
        unsigned int  ade_rfd_ramctrl_emasa    : 1;  /* bit[6]    : ���岻��ȷ */
        unsigned int  ade_rfd_ramctrl_colldisn : 1;  /* bit[7]    : ͬʱ��дһ����ַʱ��memory����Ϊ
                                                                    0����д������֤��ȷ
                                                                    1��д��֤��ȷ��������֤��ȷ */
        unsigned int  reserved_0               : 2;  /* bit[8-9]  : reserved */
        unsigned int  ade_rfd_ramctrl_s_ret1n  : 1;  /* bit[10]   : retention����1
                                                                    0��retentionģʽ1��
                                                                    1����������ģʽ�� */
        unsigned int  ade_rfd_ramctrl_s_ret2n  : 1;  /* bit[11]   : ֻ�е���powergatingѡ��ʱ�д˹��ܣ���û��powergating���ܵ�memory���˶˿�Ϊ�����������塣
                                                                    retention����2
                                                                    0��retentionģʽ2��
                                                                    1����������ģʽ�� */
        unsigned int  ade_rfd_ramctrl_s_pgen   : 1;  /* bit[12]   : ֻ�е���powergatingѡ��ʱ�д˹��ܣ���û��powergating���ܵ�memory���˶˿�Ϊ�����������塣
                                                                    0����������ģʽ��
                                                                    1�����ret1n/ret2n���retention�� */
        unsigned int  reserved_1               : 3;  /* bit[13-15]: reserved */
        unsigned int  media_subsys_ctrl4       : 16; /* bit[16-31]: ade subsyscrtl[31:16] */
    } reg;
} SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL4_UNION;
#endif
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL4_ade_rfd_ramctrl_ema_START       (0)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL4_ade_rfd_ramctrl_ema_END         (2)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL4_ade_rfd_ramctrl_emab_START      (3)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL4_ade_rfd_ramctrl_emab_END        (5)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL4_ade_rfd_ramctrl_emasa_START     (6)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL4_ade_rfd_ramctrl_emasa_END       (6)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL4_ade_rfd_ramctrl_colldisn_START  (7)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL4_ade_rfd_ramctrl_colldisn_END    (7)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL4_ade_rfd_ramctrl_s_ret1n_START   (10)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL4_ade_rfd_ramctrl_s_ret1n_END     (10)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL4_ade_rfd_ramctrl_s_ret2n_START   (11)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL4_ade_rfd_ramctrl_s_ret2n_END     (11)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL4_ade_rfd_ramctrl_s_pgen_START    (12)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL4_ade_rfd_ramctrl_s_pgen_END      (12)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL4_media_subsys_ctrl4_START        (16)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL4_media_subsys_ctrl4_END          (31)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL5_UNION
 �ṹ˵��  : SC_MEDIA_SUBSYS_CTRL5 �Ĵ����ṹ���塣��ַƫ����:0x51C����ֵ:0x00000084�����:32
 �Ĵ���˵��: MEDIA��ϵͳ���ƼĴ��������ܰ�����G3D��ADE,CODECʱ��Դ��ѡ�񣬼�MMU��ISP�Ŀ��ƣ�MEMORY SHAREѡ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  media_clk_sel_ade     : 1;  /* bit[0]   : ADE PIXELʱ��Դ��ѡ��
                                                                1����ʾѡ��ý��PLL 1.44GHz
                                                                0����ʾѡ��ϵͳPLL 1.2GHz */
        unsigned int  media_clk_sel_g3d     : 1;  /* bit[1]   : G3D��ʱ��Դѡ��
                                                                1����ʾѡ��ϵͳPLL 1.2GHz
                                                                0����ʾѡ��G3D PLL 1.0GHz */
        unsigned int  media_mmu_sel         : 1;  /* bit[2]   : MMU bypass�ź�:
                                                                1:��ʾbypass MMU�߼���axi����ֱ�����
                                                                0:��ʾ��bypassģʽ */
        unsigned int  isp_fsin0_poen        : 1;  /* bit[3]   : ����isp��FSIN0
                                                                1��֡ͬ��1
                                                                0��֡ͬ��0 */
        unsigned int  isp_fsin1_poen        : 1;  /* bit[4]   : ����isp��FSIN1
                                                                1��֡ͬ��1
                                                                0��֡ͬ��0 */
        unsigned int  isp_dw_auto_clken     : 1;  /* bit[5]   : ISP��dw axi�������Զ��ſ�ʹ��
                                                                0���Զ��ſع���bypass
                                                                1���Զ��ſع��ܿ��� */
        unsigned int  media_clk_sel_vpu     : 1;  /* bit[6]   : VPU��ʱ��Դѡ��V8�����̶�ѡ��0����
                                                                1����ʾѡ��ý��PLL 1.44GHz
                                                                0����ʾѡ��G3D PLL 1.0GHz */
        unsigned int  media_noc_time_out_en : 1;  /* bit[7]   : MEDIA_NOC������time out����״̬�·���ERROR�źŵĹ��ܿ���
                                                                0���˹���bypass
                                                                1���˹��ܿ��� */
        unsigned int  vpu_mem_share_sel     : 1;  /* bit[8]   : CODEC VPU��MEMORY shareĿ��RAMѡ��
                                                                0��CODEC VPU����HARQ RAM
                                                                1��CODEC VPU����ADE RAM */
        unsigned int  reserved              : 23; /* bit[9-31]: reserved */
    } reg;
} SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL5_UNION;
#endif
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL5_media_clk_sel_ade_START      (0)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL5_media_clk_sel_ade_END        (0)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL5_media_clk_sel_g3d_START      (1)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL5_media_clk_sel_g3d_END        (1)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL5_media_mmu_sel_START          (2)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL5_media_mmu_sel_END            (2)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL5_isp_fsin0_poen_START         (3)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL5_isp_fsin0_poen_END           (3)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL5_isp_fsin1_poen_START         (4)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL5_isp_fsin1_poen_END           (4)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL5_isp_dw_auto_clken_START      (5)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL5_isp_dw_auto_clken_END        (5)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL5_media_clk_sel_vpu_START      (6)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL5_media_clk_sel_vpu_END        (6)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL5_media_noc_time_out_en_START  (7)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL5_media_noc_time_out_en_END    (7)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL5_vpu_mem_share_sel_START      (8)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_CTRL5_vpu_mem_share_sel_END        (8)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_STAT0_UNION
 �ṹ˵��  : SC_MEDIA_SUBSYS_STAT0 �Ĵ����ṹ���塣��ַƫ����:0x540����ֵ:0x00000000�����:32
 �Ĵ���˵��: MEDIA��ϵͳ״̬�Ĵ��������ܰ���G3D״̬
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  media_subsys_g3d_state0 : 7;  /* bit[0-6] : G3D�ڲ�����״̬�����
                                                                  sc_g3d_stat[6:0]={idle_pp0,idle_ppmmu0,idle_pp1,idle_ppmmu1,idle_gp,idle_gpmmu,idle_l2c}
                                                                  idle_pp0:pp0�Ĵ���IDLE
                                                                  idle_ppmmu0:ppmmu0����IDLE
                                                                  idle_pp1:pp1����IDLE
                                                                  idle_ppmmu1:ppmmu1����IDLE
                                                                  idle_gp:gp����IDLE
                                                                  idle_gpmmu:gpmmu����IDLE
                                                                  idle_l2c:L2C����IDLE */
        unsigned int  media_subsys_state0     : 25; /* bit[7-31]: g3dsubsysstat[31:0] */
    } reg;
} SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_STAT0_UNION;
#endif
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_STAT0_media_subsys_g3d_state0_START  (0)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_STAT0_media_subsys_g3d_state0_END    (6)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_STAT0_media_subsys_state0_START      (7)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_STAT0_media_subsys_state0_END        (31)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_STAT1_UNION
 �ṹ˵��  : SC_MEDIA_SUBSYS_STAT1 �Ĵ����ṹ���塣��ַƫ����:0x544����ֵ:0x00000000�����:32
 �Ĵ���˵��: MEDIA��ϵͳ״̬�Ĵ��������ܰ���ISP״̬
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  media_subsys_isp_state1 : 1;  /* bit[0]   : ISP��dfs��Ӧ״̬,Ϊ1��ʾ��Ӧ��dfs */
        unsigned int  media_subsys_state1     : 31; /* bit[1-31]: reserved */
    } reg;
} SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_STAT1_UNION;
#endif
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_STAT1_media_subsys_isp_state1_START  (0)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_STAT1_media_subsys_isp_state1_END    (0)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_STAT1_media_subsys_state1_START      (1)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_STAT1_media_subsys_state1_END        (31)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_STAT2_UNION
 �ṹ˵��  : SC_MEDIA_SUBSYS_STAT2 �Ĵ����ṹ���塣��ַƫ����:0x548����ֵ:0x00000001�����:32
 �Ĵ���˵��: MEDIA��ϵͳ״̬�Ĵ��������ܰ���CODEC VPU״̬
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  media_codec_vpu_idle          : 1;  /* bit[0]   : codec��vpu��IDLE�ź� */
        unsigned int  media_subsys_codec_vpu_state2 : 31; /* bit[1-31]: codec_vpusubsysstat[31:0] */
    } reg;
} SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_STAT2_UNION;
#endif
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_STAT2_media_codec_vpu_idle_START           (0)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_STAT2_media_codec_vpu_idle_END             (0)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_STAT2_media_subsys_codec_vpu_state2_START  (1)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_STAT2_media_subsys_codec_vpu_state2_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_STAT3_UNION
 �ṹ˵��  : SC_MEDIA_SUBSYS_STAT3 �Ĵ����ṹ���塣��ַƫ����:0x54C����ֵ:0x00000000�����:32
 �Ĵ���˵��: MEDIA��ϵͳ״̬�Ĵ��������ܰ���CODEC JPEG״̬
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  media_subsys_codec_jpeg_state3 : 32; /* bit[0-31]: codec_jpegsubsysstat[31:0] */
    } reg;
} SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_STAT3_UNION;
#endif
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_STAT3_media_subsys_codec_jpeg_state3_START  (0)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_STAT3_media_subsys_codec_jpeg_state3_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_STAT4_UNION
 �ṹ˵��  : SC_MEDIA_SUBSYS_STAT4 �Ĵ����ṹ���塣��ַƫ����:0x550����ֵ:0x00000000�����:32
 �Ĵ���˵��: MEDIA��ϵͳ״̬�Ĵ��������ܰ���ADE/NOC��״̬
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  smmu_timeout            : 1;  /* bit[0]   : smmu_ram_timeout״̬����ʾNOC��SMMUͨ·��Ӧ��ʱ����ʱ����Ϊ4096��32KHzʱ��cycle��ͨ��SC_MEDIA_SUBSYS_CTRL5[7]��bypass */
        unsigned int  harq_ram_timeout        : 1;  /* bit[1]   : harq_ram_timeout״̬����ʾNOC��XG2RAMͨ·��Ӧ��ʱ����ʱ����Ϊ4096��32KHzʱ��cycle��ͨ��SC_MEDIA_SUBSYS_CTRL5[7]��bypass */
        unsigned int  media_subsys_ade_state4 : 30; /* bit[2-31]: ade_subsysstat[31:0] */
    } reg;
} SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_STAT4_UNION;
#endif
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_STAT4_smmu_timeout_START             (0)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_STAT4_smmu_timeout_END               (0)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_STAT4_harq_ram_timeout_START         (1)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_STAT4_harq_ram_timeout_END           (1)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_STAT4_media_subsys_ade_state4_START  (2)
#define SOC_MEDIA_SCTRL_SC_MEDIA_SUBSYS_STAT4_media_subsys_ade_state4_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_SCTRL_SC_MEDIA_NOC_DFS_UNION
 �ṹ˵��  : SC_MEDIA_NOC_DFS �Ĵ����ṹ���塣��ַƫ����:0x510����ֵ:0x00040040�����:32
 �Ĵ���˵��: MEDIA��ϵͳNOC�Զ���Ƶ�������üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  media_noc_lp_value0  : 4;  /* bit[0-3]  : [3:1]:����
                                                                [0]:MEDIA NOC�����Զ���Ƶʹ��
                                                                 1����ʾʹ��NOC���Զ�ʱ�ӵ�Ƶ
                                                                 0����ʾ��ֹNOC���Զ�ʱ�ӵ�Ƶ */
        unsigned int  media_noc_lp_num_in  : 12; /* bit[4-15] : [15:14]:����
                                                                [13:4]:MEDIA NOC���߽����Ƶģʽ���������ֵ������ʱ������Ϊ19.2MHz */
        unsigned int  media_noc_lp_num_out : 12; /* bit[16-27]: [27:26]:����
                                                                [25:16]:MEDIA NOC�����˳���Ƶģʽ���������ֵ������ʱ������Ϊ19.2MHz */
        unsigned int  reserved             : 4;  /* bit[28-31]: reserved */
    } reg;
} SOC_MEDIA_SCTRL_SC_MEDIA_NOC_DFS_UNION;
#endif
#define SOC_MEDIA_SCTRL_SC_MEDIA_NOC_DFS_media_noc_lp_value0_START   (0)
#define SOC_MEDIA_SCTRL_SC_MEDIA_NOC_DFS_media_noc_lp_value0_END     (3)
#define SOC_MEDIA_SCTRL_SC_MEDIA_NOC_DFS_media_noc_lp_num_in_START   (4)
#define SOC_MEDIA_SCTRL_SC_MEDIA_NOC_DFS_media_noc_lp_num_in_END     (15)
#define SOC_MEDIA_SCTRL_SC_MEDIA_NOC_DFS_media_noc_lp_num_out_START  (16)
#define SOC_MEDIA_SCTRL_SC_MEDIA_NOC_DFS_media_noc_lp_num_out_END    (27)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG0_UNION
 �ṹ˵��  : SC_MEDIA_CLKCFG0 �Ĵ����ṹ���塣��ַƫ����:0xCBC����ֵ:0xFFFFFFFF�����:32
 �Ĵ���˵��: MEDIAʱ�Ӳ������üĴ���0(ISP��NOC)
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  media_clkcfg0_noc_value0       : 7;  /* bit[0-6]  : ʱ�Ӳ�����
                                                                          [6:4]:����
                                                                          [3:0]:NOC���߹���Դʱ�ӷ�Ƶ�������ã� */
        unsigned int  media_clkcfg0_noc_vld0         : 1;  /* bit[7]    : ʱ�Ӳ�����Чָʾ�� */
        unsigned int  media_clkcfg0_isp_sck_value1   : 7;  /* bit[8-14] : ʱ�Ӳ�����
                                                                          [14:12]:����
                                                                          [11:8]:ISP����Դʱ�ӷ�Ƶ�������ã� */
        unsigned int  media_clkcfg0_isp_sclk_vld1    : 1;  /* bit[15]   : ʱ�Ӳ�����Чָʾ�� */
        unsigned int  media_clkcfg0_noc_lp_value0    : 7;  /* bit[16-22]: ʱ�Ӳ�����
                                                                          [22:20]:����
                                                                          [19:16]:NOC���ߵ͹���״̬�µĵ�Ƶʱ�ӷ�Ƶ�������ã� */
        unsigned int  media_clkcfg0_noc_lp_vld0      : 1;  /* bit[23-23]: ʱ�Ӳ�����Чָʾ�� */
        unsigned int  media_clkcfg0_isp_sclk2_value3 : 7;  /* bit[24-30]: ʱ�Ӳ�����
                                                                          [30:28]:����
                                                                          [27:24]:ISP��SCLK2��MIPI��ʱ�ӷ�Ƶ�������ã� */
        unsigned int  media_clkcfg0_isp_sclk2_vld3   : 1;  /* bit[31]   : ʱ�Ӳ�����Чָʾ�� */
    } reg;
} SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG0_UNION;
#endif
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG0_media_clkcfg0_noc_value0_START        (0)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG0_media_clkcfg0_noc_value0_END          (6)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG0_media_clkcfg0_noc_vld0_START          (7)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG0_media_clkcfg0_noc_vld0_END            (7)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG0_media_clkcfg0_isp_sck_value1_START    (8)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG0_media_clkcfg0_isp_sck_value1_END      (14)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG0_media_clkcfg0_isp_sclk_vld1_START     (15)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG0_media_clkcfg0_isp_sclk_vld1_END       (15)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG0_media_clkcfg0_noc_lp_value0_START     (16)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG0_media_clkcfg0_noc_lp_value0_END       (22)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG0_media_clkcfg0_noc_lp_vld0_START       (23)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG0_media_clkcfg0_noc_lp_vld0_END         (23)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG0_media_clkcfg0_isp_sclk2_value3_START  (24)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG0_media_clkcfg0_isp_sclk2_value3_END    (30)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG0_media_clkcfg0_isp_sclk2_vld3_START    (31)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG0_media_clkcfg0_isp_sclk2_vld3_END      (31)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG1_UNION
 �ṹ˵��  : SC_MEDIA_CLKCFG1 �Ĵ����ṹ���塣��ַƫ����:0xCC0����ֵ:0xFFFFFFFF�����:32
 �Ĵ���˵��: MEDIAʱ�Ӳ������üĴ���1��ADE��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  media_clkcfg1_value0           : 7;  /* bit[0-6]  : ʱ�Ӳ�����
                                                                          ���� */
        unsigned int  media_clkcfg1_vld0             : 1;  /* bit[7]    : ʱ�Ӳ�����Чָʾ�� */
        unsigned int  media_clkcfg1_value1           : 7;  /* bit[8-14] : ʱ�Ӳ�����
                                                                          ���� */
        unsigned int  media_clkcfg1_cfg_vld1         : 1;  /* bit[15]   : ʱ�Ӳ�����Чָʾ�� */
        unsigned int  media_clkcfg1_ade_core_value2  : 7;  /* bit[16-22]: ʱ�Ӳ�����
                                                                          [22:19]:����
                                                                          [18:16]:ADE��coreʱ�ӷ�Ƶ�������ã� */
        unsigned int  media_clkcfg1_ade_core_vld2    : 1;  /* bit[23-23]: ʱ�Ӳ�����Чָʾ�� */
        unsigned int  media_clkcfg1_ade_pixel_value3 : 7;  /* bit[24-30]: ʱ�Ӳ�����
                                                                          [30]:����
                                                                          [29:24]:ADE��pixelʱ�ӷ�Ƶ�������ã� */
        unsigned int  media_clkcfg1_ade_pixel_vld3   : 1;  /* bit[31]   : ʱ�Ӳ�����Чָʾ�� */
    } reg;
} SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG1_UNION;
#endif
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG1_media_clkcfg1_value0_START            (0)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG1_media_clkcfg1_value0_END              (6)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG1_media_clkcfg1_vld0_START              (7)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG1_media_clkcfg1_vld0_END                (7)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG1_media_clkcfg1_value1_START            (8)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG1_media_clkcfg1_value1_END              (14)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG1_media_clkcfg1_cfg_vld1_START          (15)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG1_media_clkcfg1_cfg_vld1_END            (15)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG1_media_clkcfg1_ade_core_value2_START   (16)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG1_media_clkcfg1_ade_core_value2_END     (22)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG1_media_clkcfg1_ade_core_vld2_START     (23)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG1_media_clkcfg1_ade_core_vld2_END       (23)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG1_media_clkcfg1_ade_pixel_value3_START  (24)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG1_media_clkcfg1_ade_pixel_value3_END    (30)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG1_media_clkcfg1_ade_pixel_vld3_START    (31)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG1_media_clkcfg1_ade_pixel_vld3_END      (31)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG2_UNION
 �ṹ˵��  : SC_MEDIA_CLKCFG2 �Ĵ����ṹ���塣��ַƫ����:0xCC4����ֵ:0xFFFFFFFF�����:32
 �Ĵ���˵��: MEDIAʱ�Ӳ������üĴ���2(CODEC��GPU)
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  clk_8bit_cfg8_value0            : 7;  /* bit[0-6]  : ʱ�Ӳ��������� */
        unsigned int  clk_8bit_cfg8_vld0              : 1;  /* bit[7]    : ʱ�Ӳ�����Чָʾ�� */
        unsigned int  media_clkcfg2_g3d_value1        : 7;  /* bit[8-14] : ʱ�Ӳ�����
                                                                           [14:12]:����
                                                                           [11:8]:G3Dʱ�ӷ�Ƶ�������ã� */
        unsigned int  media_clkcfg2_g3d_vld1          : 1;  /* bit[15]   : ʱ�Ӳ�����Чָʾ�� */
        unsigned int  media_clkcfg2_codec_jpeg_value2 : 7;  /* bit[16-22]: ʱ�Ӳ�����
                                                                           [22:20]:����
                                                                           [19:16]:CODEC JPEGʱ�ӷ�Ƶ�������ã� */
        unsigned int  media_clkcfg2_codec_jpeg_vld2   : 1;  /* bit[23-23]: ʱ�Ӳ�����Чָʾ�� */
        unsigned int  media_clkcfg2_codec_vpu_value3  : 7;  /* bit[24-30]: ʱ�Ӳ�����
                                                                           [30:30]:����
                                                                           [29:24]:CODEC VPUʱ�ӷ�Ƶ�������ã� */
        unsigned int  media_clkcfg2_codec_vpu_vld3    : 1;  /* bit[31]   : ʱ�Ӳ�����Чָʾ�� */
    } reg;
} SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG2_UNION;
#endif
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG2_clk_8bit_cfg8_value0_START             (0)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG2_clk_8bit_cfg8_value0_END               (6)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG2_clk_8bit_cfg8_vld0_START               (7)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG2_clk_8bit_cfg8_vld0_END                 (7)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG2_media_clkcfg2_g3d_value1_START         (8)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG2_media_clkcfg2_g3d_value1_END           (14)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG2_media_clkcfg2_g3d_vld1_START           (15)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG2_media_clkcfg2_g3d_vld1_END             (15)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG2_media_clkcfg2_codec_jpeg_value2_START  (16)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG2_media_clkcfg2_codec_jpeg_value2_END    (22)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG2_media_clkcfg2_codec_jpeg_vld2_START    (23)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG2_media_clkcfg2_codec_jpeg_vld2_END      (23)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG2_media_clkcfg2_codec_vpu_value3_START   (24)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG2_media_clkcfg2_codec_vpu_value3_END     (30)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG2_media_clkcfg2_codec_vpu_vld3_START     (31)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG2_media_clkcfg2_codec_vpu_vld3_END       (31)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_SCTRL_SC_MEDIA_CLKEN_UNION
 �ṹ˵��  : SC_MEDIA_CLKEN �Ĵ����ṹ���塣��ַƫ����:0x520����ֵ:0x0003FE3A�����:32
 �Ĵ���˵��: MEDIA��ϵͳʱ��ʹ�ܼĴ������Ա���д1��ʹ�ܶ�Ӧ��ʱ�ӣ�д0��Ӱ��ʱ��ʹ�ܵ�״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  media_clken_dsi_clk        : 1;  /* bit[0]    : dsi��ʱ�����ſ��ź� */
        unsigned int  media_clken_g3d_clk        : 1;  /* bit[1]    : G3D��core����ʱ�����ſ��ź� */
        unsigned int  reserved_0                 : 1;  /* bit[2]    : reserved */
        unsigned int  media_clken_codec_vpu_clk  : 1;  /* bit[3]    : CODEC_VIDEO�ı����������ʱ�����ſ��ź� */
        unsigned int  media_clken_codec_jpeg_clk : 1;  /* bit[4]    : CODE_JPEG�ı����������ʱ�����ſ��ź� */
        unsigned int  media_clken_isp_clk        : 1;  /* bit[5]    : ISP��ʱ�����ſ��ź� */
        unsigned int  media_clken_ade_clk        : 1;  /* bit[6]    : ADE��ʱ�����ſ��ź� */
        unsigned int  media_clken_x2rm_hq_clk    : 1;  /* bit[7]    : ϵͳCRG�����xg2ramʱ�Ӷ�ӦHARQ MEMORY SHAREʱ�����ſ��ź� */
        unsigned int  media_clken_mmu            : 1;  /* bit[8]    : ϵͳCRG�����mmuʱ�����ſ��ź� */
        unsigned int  media_clken_csi4phy        : 1;  /* bit[9]    : 4lane csi phy����ʱ�����ſ��ź� */
        unsigned int  media_clken_csi2phy        : 1;  /* bit[10]   : 2lane csi phy����ʱ�����ſ��ź� */
        unsigned int  media_gating_sclk_isp      : 1;  /* bit[11]   : ISP SCLKʱ�ӷ�Ƶǰʱ�����ſ��ź� */
        unsigned int  media_gating_sclk2_isp     : 1;  /* bit[12]   : ISP SCLK2ʱ�ӷ�Ƶǰʱ�����ſ��ź� */
        unsigned int  reserved_1                 : 1;  /* bit[13]   : reserved */
        unsigned int  media_gating_ade_clk       : 1;  /* bit[14]   : adeʱ�ӷ�Ƶǰʱ�����ſ��ź� */
        unsigned int  media_gating_codec_vpu     : 1;  /* bit[15]   : codec video�����������ʱ�ӷ�Ƶǰʱ�����ſ��ź� */
        unsigned int  media_gating_codec_jpeg    : 1;  /* bit[16]   : codec jpeg�����������ʱ�ӷ�Ƶǰʱ�����ſ��ź� */
        unsigned int  media_gating_sys_dsp       : 1;  /* bit[17]   : g3d����ʱ�ӷ�Ƶǰ����system pll��ʱ�����ſ��ź� */
        unsigned int  reserved_2                 : 1;  /* bit[18]   : reserved */
        unsigned int  reserved_3                 : 1;  /* bit[19]   : reserved */
        unsigned int  reserved_4                 : 12; /* bit[20-31]: reserved */
    } reg;
} SOC_MEDIA_SCTRL_SC_MEDIA_CLKEN_UNION;
#endif
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKEN_media_clken_dsi_clk_START         (0)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKEN_media_clken_dsi_clk_END           (0)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKEN_media_clken_g3d_clk_START         (1)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKEN_media_clken_g3d_clk_END           (1)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKEN_media_clken_codec_vpu_clk_START   (3)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKEN_media_clken_codec_vpu_clk_END     (3)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKEN_media_clken_codec_jpeg_clk_START  (4)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKEN_media_clken_codec_jpeg_clk_END    (4)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKEN_media_clken_isp_clk_START         (5)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKEN_media_clken_isp_clk_END           (5)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKEN_media_clken_ade_clk_START         (6)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKEN_media_clken_ade_clk_END           (6)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKEN_media_clken_x2rm_hq_clk_START     (7)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKEN_media_clken_x2rm_hq_clk_END       (7)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKEN_media_clken_mmu_START             (8)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKEN_media_clken_mmu_END               (8)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKEN_media_clken_csi4phy_START         (9)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKEN_media_clken_csi4phy_END           (9)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKEN_media_clken_csi2phy_START         (10)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKEN_media_clken_csi2phy_END           (10)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKEN_media_gating_sclk_isp_START       (11)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKEN_media_gating_sclk_isp_END         (11)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKEN_media_gating_sclk2_isp_START      (12)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKEN_media_gating_sclk2_isp_END        (12)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKEN_media_gating_ade_clk_START        (14)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKEN_media_gating_ade_clk_END          (14)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKEN_media_gating_codec_vpu_START      (15)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKEN_media_gating_codec_vpu_END        (15)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKEN_media_gating_codec_jpeg_START     (16)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKEN_media_gating_codec_jpeg_END       (16)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKEN_media_gating_sys_dsp_START        (17)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKEN_media_gating_sys_dsp_END          (17)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_SCTRL_SC_MEDIA_CLKDIS_UNION
 �ṹ˵��  : SC_MEDIA_CLKDIS �Ĵ����ṹ���塣��ַƫ����:0x524����ֵ:0x000000�����:32
 �Ĵ���˵��: MEDIA��ϵͳʱ�ӽ�ֹ�Ĵ������Ա���д1����ֹ��Ӧ��ʱ�ӣ�д0��Ӱ��ʱ��ʹ�ܵ�״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  media_clken_dis_dsi_clk        : 1;  /* bit[0]    : dsi��ʱ�����ſ��ź� */
        unsigned int  media_clken_dis_g3d_clk        : 1;  /* bit[1]    : G3D��core����ʱ�����ſ��ź� */
        unsigned int  reserved_0                     : 1;  /* bit[2]    : reserved */
        unsigned int  media_clken_dis_codec_vpu_clk  : 1;  /* bit[3]    : CODEC_VIDEO�ı����������ʱ�����ſ��ź� */
        unsigned int  media_clken_dis_codec_jpeg_clk : 1;  /* bit[4]    : CODE_JPEG�ı����������ʱ�����ſ��ź� */
        unsigned int  media_clken_dis_isp_clk        : 1;  /* bit[5]    : ISP��ʱ�����ſ��ź� */
        unsigned int  media_clken_dis_ade_clk        : 1;  /* bit[6]    : ADE��ʱ�����ſ��ź� */
        unsigned int  media_clken_dis_x2rm_hq_clk    : 1;  /* bit[7]    : ϵͳCRG�����xg2ramʱ�Ӷ�ӦHARQ MEMORY SHAREʱ�����ſ��ź� */
        unsigned int  media_clken_dis_mmu            : 1;  /* bit[8]    : ϵͳCRG�����mmuʱ�����ſ��ź� */
        unsigned int  media_clken_dis_csi4phy        : 1;  /* bit[9]    : 4lane csi phy����ʱ�����ſ��ź� */
        unsigned int  media_clken_dis_csi2phy        : 1;  /* bit[10]   : 2lane csi phy����ʱ�����ſ��ź� */
        unsigned int  media_gating_dis_sclk_isp      : 1;  /* bit[11]   : ISP SCLKʱ�ӷ�Ƶǰʱ�����ſ��ź� */
        unsigned int  media_gating_dis_sclk2_isp     : 1;  /* bit[12]   : ISP SCLK2ʱ�ӷ�Ƶǰʱ�����ſ��ź� */
        unsigned int  reserved_1                     : 1;  /* bit[13]   : reserved */
        unsigned int  media_gating_dis_ade_clk       : 1;  /* bit[14]   : adeʱ�ӷ�Ƶǰʱ�����ſ��ź� */
        unsigned int  media_gating_dis_codec_vpu     : 1;  /* bit[15]   : codec video�����������ʱ�ӷ�Ƶǰʱ�����ſ��ź� */
        unsigned int  media_gating_dis_codec_jpeg    : 1;  /* bit[16]   : codec jpeg�����������ʱ�ӷ�Ƶǰʱ�����ſ��ź� */
        unsigned int  media_gating_dis_sys_dsp       : 1;  /* bit[17]   : g3d����ʱ�ӷ�Ƶǰ����system pll��ʱ�����ſ��ź� */
        unsigned int  reserved_2                     : 1;  /* bit[18]   : reserved */
        unsigned int  reserved_3                     : 1;  /* bit[19]   : reserved */
        unsigned int  reserved_4                     : 12; /* bit[20-31]: reserved */
    } reg;
} SOC_MEDIA_SCTRL_SC_MEDIA_CLKDIS_UNION;
#endif
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKDIS_media_clken_dis_dsi_clk_START         (0)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKDIS_media_clken_dis_dsi_clk_END           (0)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKDIS_media_clken_dis_g3d_clk_START         (1)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKDIS_media_clken_dis_g3d_clk_END           (1)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKDIS_media_clken_dis_codec_vpu_clk_START   (3)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKDIS_media_clken_dis_codec_vpu_clk_END     (3)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKDIS_media_clken_dis_codec_jpeg_clk_START  (4)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKDIS_media_clken_dis_codec_jpeg_clk_END    (4)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKDIS_media_clken_dis_isp_clk_START         (5)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKDIS_media_clken_dis_isp_clk_END           (5)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKDIS_media_clken_dis_ade_clk_START         (6)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKDIS_media_clken_dis_ade_clk_END           (6)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKDIS_media_clken_dis_x2rm_hq_clk_START     (7)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKDIS_media_clken_dis_x2rm_hq_clk_END       (7)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKDIS_media_clken_dis_mmu_START             (8)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKDIS_media_clken_dis_mmu_END               (8)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKDIS_media_clken_dis_csi4phy_START         (9)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKDIS_media_clken_dis_csi4phy_END           (9)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKDIS_media_clken_dis_csi2phy_START         (10)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKDIS_media_clken_dis_csi2phy_END           (10)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKDIS_media_gating_dis_sclk_isp_START       (11)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKDIS_media_gating_dis_sclk_isp_END         (11)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKDIS_media_gating_dis_sclk2_isp_START      (12)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKDIS_media_gating_dis_sclk2_isp_END        (12)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKDIS_media_gating_dis_ade_clk_START        (14)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKDIS_media_gating_dis_ade_clk_END          (14)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKDIS_media_gating_dis_codec_vpu_START      (15)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKDIS_media_gating_dis_codec_vpu_END        (15)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKDIS_media_gating_dis_codec_jpeg_START     (16)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKDIS_media_gating_dis_codec_jpeg_END       (16)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKDIS_media_gating_dis_sys_dsp_START        (17)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLKDIS_media_gating_dis_sys_dsp_END          (17)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_SCTRL_SC_MEDIA_CLK_STAT_UNION
 �ṹ˵��  : SC_MEDIA_CLK_STAT �Ĵ����ṹ���塣��ַƫ����:0x528����ֵ:0x0003F81A�����:32
 �Ĵ���˵��: MEDIA��ϵͳʱ��״̬�Ĵ�������SC_MEDIA_CLKEN��SC_MEDIA_CLKDIS���ý���״̬�޸ġ�
            ý��ʱ�ӿ����ź��辭����MEDIA_CRG�н���ͬ��������ˣ�����ļĴ���ֵ���ӳ���Ӧʱ����ļ������ں��������Ӧʱ��״̬��
            ÿ��Bit���壺
            0��ʱ�ӹرգ�
            1��ʱ�Ӵ򿪡�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  media_clken_dsi_clk_stat        : 1;  /* bit[0]    : dsi��ʱ�����ſ��ź� */
        unsigned int  media_clken_g3d_clk_stat        : 1;  /* bit[1]    : G3D��core����ʱ�����ſ��ź� */
        unsigned int  reserved_0                      : 1;  /* bit[2]    : reserved */
        unsigned int  media_clken_codec_vpu_clk_stat  : 1;  /* bit[3]    : CODEC_VIDEO�ı����������ʱ�����ſ��ź� */
        unsigned int  media_clken_codec_jpeg_clk_stat : 1;  /* bit[4]    : CODE_JPEG�ı����������ʱ�����ſ��ź� */
        unsigned int  media_clken_isp_clk_stat        : 1;  /* bit[5]    : ISP��ʱ�����ſ��ź� */
        unsigned int  media_clken_ade_clk_stat        : 1;  /* bit[6]    : ADE��ʱ�����ſ��ź� */
        unsigned int  media_clken_x2rm_hq_clk_stat    : 1;  /* bit[7]    : ϵͳCRG�����xg2ramʱ�Ӷ�ӦHARQ MEMORY SHAREʱ�����ſ��ź� */
        unsigned int  media_clken_mmu_stat            : 1;  /* bit[8]    : ϵͳCRG�����mmuʱ�����ſ��ź� */
        unsigned int  media_clken_csi4phy_stat        : 1;  /* bit[9]    : 4lane csi phy����ʱ�����ſ��ź� */
        unsigned int  media_clken_csi2phy_stat        : 1;  /* bit[10]   : 2lane csi phy����ʱ�����ſ��ź� */
        unsigned int  media_gating_sclk_isp_stat      : 1;  /* bit[11]   : ISP SCLKʱ�ӷ�Ƶǰʱ�����ſ��ź� */
        unsigned int  media_gating_sclk2_isp_stat     : 1;  /* bit[12]   : ISP SCLK2ʱ�ӷ�Ƶǰʱ�����ſ��ź� */
        unsigned int  reserved_1                      : 1;  /* bit[13]   : reserved */
        unsigned int  media_gating_ade_clk_stat       : 1;  /* bit[14]   : adeʱ�ӷ�Ƶǰʱ�����ſ��ź� */
        unsigned int  media_gating_codec_vpu_stat     : 1;  /* bit[15]   : codec video�����������ʱ�ӷ�Ƶǰʱ�����ſ��ź� */
        unsigned int  media_gating_codec_jpeg_stat    : 1;  /* bit[16]   : codec jpeg�����������ʱ�ӷ�Ƶǰʱ�����ſ��ź� */
        unsigned int  media_gating_sys_dsp_stat       : 1;  /* bit[17]   : g3d����ʱ�ӷ�Ƶǰ����system pll��ʱ�����ſ��ź� */
        unsigned int  reserved_2                      : 1;  /* bit[18]   : reserved */
        unsigned int  reserved_3                      : 1;  /* bit[19]   : reserved */
        unsigned int  reserved_4                      : 12; /* bit[20-31]: reserved */
    } reg;
} SOC_MEDIA_SCTRL_SC_MEDIA_CLK_STAT_UNION;
#endif
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLK_STAT_media_clken_dsi_clk_stat_START         (0)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLK_STAT_media_clken_dsi_clk_stat_END           (0)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLK_STAT_media_clken_g3d_clk_stat_START         (1)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLK_STAT_media_clken_g3d_clk_stat_END           (1)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLK_STAT_media_clken_codec_vpu_clk_stat_START   (3)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLK_STAT_media_clken_codec_vpu_clk_stat_END     (3)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLK_STAT_media_clken_codec_jpeg_clk_stat_START  (4)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLK_STAT_media_clken_codec_jpeg_clk_stat_END    (4)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLK_STAT_media_clken_isp_clk_stat_START         (5)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLK_STAT_media_clken_isp_clk_stat_END           (5)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLK_STAT_media_clken_ade_clk_stat_START         (6)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLK_STAT_media_clken_ade_clk_stat_END           (6)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLK_STAT_media_clken_x2rm_hq_clk_stat_START     (7)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLK_STAT_media_clken_x2rm_hq_clk_stat_END       (7)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLK_STAT_media_clken_mmu_stat_START             (8)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLK_STAT_media_clken_mmu_stat_END               (8)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLK_STAT_media_clken_csi4phy_stat_START         (9)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLK_STAT_media_clken_csi4phy_stat_END           (9)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLK_STAT_media_clken_csi2phy_stat_START         (10)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLK_STAT_media_clken_csi2phy_stat_END           (10)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLK_STAT_media_gating_sclk_isp_stat_START       (11)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLK_STAT_media_gating_sclk_isp_stat_END         (11)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLK_STAT_media_gating_sclk2_isp_stat_START      (12)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLK_STAT_media_gating_sclk2_isp_stat_END        (12)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLK_STAT_media_gating_ade_clk_stat_START        (14)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLK_STAT_media_gating_ade_clk_stat_END          (14)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLK_STAT_media_gating_codec_vpu_stat_START      (15)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLK_STAT_media_gating_codec_vpu_stat_END        (15)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLK_STAT_media_gating_codec_jpeg_stat_START     (16)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLK_STAT_media_gating_codec_jpeg_stat_END       (16)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLK_STAT_media_gating_sys_dsp_stat_START        (17)
#define SOC_MEDIA_SCTRL_SC_MEDIA_CLK_STAT_media_gating_sys_dsp_stat_END          (17)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_SCTRL_SC_MEDIA_RSTEN_UNION
 �ṹ˵��  : SC_MEDIA_RSTEN �Ĵ����ṹ���塣��ַƫ����:0x52C����ֵ:0x00000000�����:32
 �Ĵ���˵��: MEDIA��ϵͳ��λʹ�ܼĴ���������ʹ�ܸ�λ���Ա���д1����ӦIP���븴λ״̬��д0��Ӱ�츴λ״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  media_rsten_g3d        : 1;  /* bit[0] : G3D��core�����ÿ���λʹ�� */
        unsigned int  reserved_0             : 1;  /* bit[1] : reserved */
        unsigned int  media_rsten_codec_vpu  : 1;  /* bit[2] : CODEC VPU��λʹ�� */
        unsigned int  media_rsten_codec_jpeg : 1;  /* bit[3] : CODEC JPEG��λʹ�� */
        unsigned int  media_rsten_isp        : 1;  /* bit[4] : ISP����λʹ�� */
        unsigned int  media_rsten_ade        : 1;  /* bit[5] : ADE����λʹ�� */
        unsigned int  reset_med_mmu_en       : 1;  /* bit[6] : media mmu��λʹ�� */
        unsigned int  reset_med_x2rm_en      : 1;  /* bit[7] : media harq memory share xg2ram1��λʹ�� */
        unsigned int  reserved_1             : 1;  /* bit[8] : reserved */
        unsigned int  reserved_2             : 1;  /* bit[9] : reserved */
        unsigned int  reserved_3             : 1;  /* bit[10]: reserved */
        unsigned int  reserved_4             : 1;  /* bit[11]: reserved */
        unsigned int  reserved_5             : 1;  /* bit[12]: reserved */
        unsigned int  reserved_6             : 1;  /* bit[13]: reserved */
        unsigned int  reserved_7             : 1;  /* bit[14]: reserved */
        unsigned int  reserved_8             : 1;  /* bit[15]: reserved */
        unsigned int  reserved_9             : 1;  /* bit[16]: reserved */
        unsigned int  reserved_10            : 1;  /* bit[17]: reserved */
        unsigned int  reserved_11            : 1;  /* bit[18]: reserved */
        unsigned int  reserved_12            : 1;  /* bit[19]: reserved */
        unsigned int  reserved_13            : 1;  /* bit[20]: reserved */
        unsigned int  reserved_14            : 1;  /* bit[21]: reserved */
        unsigned int  reserved_15            : 1;  /* bit[22]: reserved */
        unsigned int  reserved_16            : 1;  /* bit[23]: reserved */
        unsigned int  reserved_17            : 1;  /* bit[24]: reserved */
        unsigned int  reserved_18            : 1;  /* bit[25]: reserved */
        unsigned int  reserved_19            : 1;  /* bit[26]: reserved */
        unsigned int  reserved_20            : 1;  /* bit[27]: reserved */
        unsigned int  reserved_21            : 1;  /* bit[28]: reserved */
        unsigned int  reserved_22            : 1;  /* bit[29]: reserved */
        unsigned int  reserved_23            : 1;  /* bit[30]: reserved */
        unsigned int  reserved_24            : 1;  /* bit[31]: reserved */
    } reg;
} SOC_MEDIA_SCTRL_SC_MEDIA_RSTEN_UNION;
#endif
#define SOC_MEDIA_SCTRL_SC_MEDIA_RSTEN_media_rsten_g3d_START         (0)
#define SOC_MEDIA_SCTRL_SC_MEDIA_RSTEN_media_rsten_g3d_END           (0)
#define SOC_MEDIA_SCTRL_SC_MEDIA_RSTEN_media_rsten_codec_vpu_START   (2)
#define SOC_MEDIA_SCTRL_SC_MEDIA_RSTEN_media_rsten_codec_vpu_END     (2)
#define SOC_MEDIA_SCTRL_SC_MEDIA_RSTEN_media_rsten_codec_jpeg_START  (3)
#define SOC_MEDIA_SCTRL_SC_MEDIA_RSTEN_media_rsten_codec_jpeg_END    (3)
#define SOC_MEDIA_SCTRL_SC_MEDIA_RSTEN_media_rsten_isp_START         (4)
#define SOC_MEDIA_SCTRL_SC_MEDIA_RSTEN_media_rsten_isp_END           (4)
#define SOC_MEDIA_SCTRL_SC_MEDIA_RSTEN_media_rsten_ade_START         (5)
#define SOC_MEDIA_SCTRL_SC_MEDIA_RSTEN_media_rsten_ade_END           (5)
#define SOC_MEDIA_SCTRL_SC_MEDIA_RSTEN_reset_med_mmu_en_START        (6)
#define SOC_MEDIA_SCTRL_SC_MEDIA_RSTEN_reset_med_mmu_en_END          (6)
#define SOC_MEDIA_SCTRL_SC_MEDIA_RSTEN_reset_med_x2rm_en_START       (7)
#define SOC_MEDIA_SCTRL_SC_MEDIA_RSTEN_reset_med_x2rm_en_END         (7)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_SCTRL_SC_MEDIA_RSTDIS_UNION
 �ṹ˵��  : SC_MEDIA_RSTDIS �Ĵ����ṹ���塣��ַƫ����:0x530����ֵ:0x00000000�����:32
 �Ĵ���˵��: MEDIA��ϵͳ�⸴λ�Ĵ��������ڽ�ֹ��λ���Ա���д1����ӦIP�����λ��д0��Ӱ�츴λʹ�ܵ�״̬��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  media_rstdis_g3d        : 1;  /* bit[0] : G3D��core�����ÿ���λ��ֹ */
        unsigned int  reserved_0              : 1;  /* bit[1] : reserved */
        unsigned int  media_rstdis_codec_vpu  : 1;  /* bit[2] : CODEC VPU��λ��ֹ */
        unsigned int  media_rstdis_codec_jpeg : 1;  /* bit[3] : CODEC JPEG��λ��ֹ */
        unsigned int  media_rstdis_isp        : 1;  /* bit[4] : ISP����λ��ֹ */
        unsigned int  media_rstdis_ade        : 1;  /* bit[5] : ADE����λ��ֹ */
        unsigned int  reset_med_mmu_dis       : 1;  /* bit[6] : media mmu��λ��ֹ */
        unsigned int  reset_med_x2rm_dis      : 1;  /* bit[7] : media harq memory share xg2ram1��λ��ֹ */
        unsigned int  reserved_1              : 1;  /* bit[8] : reserved */
        unsigned int  reserved_2              : 1;  /* bit[9] : reserved */
        unsigned int  reserved_3              : 1;  /* bit[10]: reserved */
        unsigned int  reserved_4              : 1;  /* bit[11]: reserved */
        unsigned int  reserved_5              : 1;  /* bit[12]: reserved */
        unsigned int  reserved_6              : 1;  /* bit[13]: reserved */
        unsigned int  reserved_7              : 1;  /* bit[14]: reserved */
        unsigned int  reserved_8              : 1;  /* bit[15]: reserved */
        unsigned int  reserved_9              : 1;  /* bit[16]: reserved */
        unsigned int  reserved_10             : 1;  /* bit[17]: reserved */
        unsigned int  reserved_11             : 1;  /* bit[18]: reserved */
        unsigned int  reserved_12             : 1;  /* bit[19]: reserved */
        unsigned int  reserved_13             : 1;  /* bit[20]: reserved */
        unsigned int  reserved_14             : 1;  /* bit[21]: reserved */
        unsigned int  reserved_15             : 1;  /* bit[22]: reserved */
        unsigned int  reserved_16             : 1;  /* bit[23]: reserved */
        unsigned int  reserved_17             : 1;  /* bit[24]: reserved */
        unsigned int  reserved_18             : 1;  /* bit[25]: reserved */
        unsigned int  reserved_19             : 1;  /* bit[26]: reserved */
        unsigned int  reserved_20             : 1;  /* bit[27]: reserved */
        unsigned int  reserved_21             : 1;  /* bit[28]: reserved */
        unsigned int  reserved_22             : 1;  /* bit[29]: reserved */
        unsigned int  reserved_23             : 1;  /* bit[30]: reserved */
        unsigned int  reserved_24             : 1;  /* bit[31]: reserved */
    } reg;
} SOC_MEDIA_SCTRL_SC_MEDIA_RSTDIS_UNION;
#endif
#define SOC_MEDIA_SCTRL_SC_MEDIA_RSTDIS_media_rstdis_g3d_START         (0)
#define SOC_MEDIA_SCTRL_SC_MEDIA_RSTDIS_media_rstdis_g3d_END           (0)
#define SOC_MEDIA_SCTRL_SC_MEDIA_RSTDIS_media_rstdis_codec_vpu_START   (2)
#define SOC_MEDIA_SCTRL_SC_MEDIA_RSTDIS_media_rstdis_codec_vpu_END     (2)
#define SOC_MEDIA_SCTRL_SC_MEDIA_RSTDIS_media_rstdis_codec_jpeg_START  (3)
#define SOC_MEDIA_SCTRL_SC_MEDIA_RSTDIS_media_rstdis_codec_jpeg_END    (3)
#define SOC_MEDIA_SCTRL_SC_MEDIA_RSTDIS_media_rstdis_isp_START         (4)
#define SOC_MEDIA_SCTRL_SC_MEDIA_RSTDIS_media_rstdis_isp_END           (4)
#define SOC_MEDIA_SCTRL_SC_MEDIA_RSTDIS_media_rstdis_ade_START         (5)
#define SOC_MEDIA_SCTRL_SC_MEDIA_RSTDIS_media_rstdis_ade_END           (5)
#define SOC_MEDIA_SCTRL_SC_MEDIA_RSTDIS_reset_med_mmu_dis_START        (6)
#define SOC_MEDIA_SCTRL_SC_MEDIA_RSTDIS_reset_med_mmu_dis_END          (6)
#define SOC_MEDIA_SCTRL_SC_MEDIA_RSTDIS_reset_med_x2rm_dis_START       (7)
#define SOC_MEDIA_SCTRL_SC_MEDIA_RSTDIS_reset_med_x2rm_dis_END         (7)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_SCTRL_SC_MEDIA_RST_STAT_UNION
 �ṹ˵��  : SC_MEDIA_RST_STAT �Ĵ����ṹ���塣��ַƫ����:0x534����ֵ:0x000000FD�����:32
 �Ĵ���˵��: MEDIA��ϵͳ��λʹ��״̬�Ĵ�������SC_MEDIA_RSTEN��SC_MEDIA_RSTDIS���ý���״̬�޸ġ��⸴λ�����ź��辭��ͬ��������ˣ�����ļĴ���ֵ���ӳ���Ӧʱ����ļ������ں��������Ӧ�⸴λ״̬��
            ÿ��Bit���壺
            0����λ��ʹ�ܣ�
            1����λʹ�ܡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  media_rst_stat_g3d        : 1;  /* bit[0] : G3D��core�����ÿ���λʹ��״̬ */
        unsigned int  reserved_0                : 1;  /* bit[1] : reserved */
        unsigned int  media_rst_stat_codec_vpu  : 1;  /* bit[2] : CODEC VPU��λʹ��״̬ */
        unsigned int  media_rst_stat_codec_jpeg : 1;  /* bit[3] : CODEC JPEG��λʹ��״̬ */
        unsigned int  media_rst_stat_isp        : 1;  /* bit[4] : ISP����λʹ��״̬ */
        unsigned int  media_rst_stat_ade        : 1;  /* bit[5] : ADE����λʹ��״̬ */
        unsigned int  reset_med_mmu_state       : 1;  /* bit[6] : media mmu��λʹ��״̬ */
        unsigned int  reset_med_x2rm_state      : 1;  /* bit[7] : media memory share xg2ram��λʹ��״̬ */
        unsigned int  reserved_1                : 1;  /* bit[8] : reserved */
        unsigned int  reserved_2                : 1;  /* bit[9] : reserved */
        unsigned int  reserved_3                : 1;  /* bit[10]: reserved */
        unsigned int  reserved_4                : 1;  /* bit[11]: reserved */
        unsigned int  reserved_5                : 1;  /* bit[12]: reserved */
        unsigned int  reserved_6                : 1;  /* bit[13]: reserved */
        unsigned int  reserved_7                : 1;  /* bit[14]: reserved */
        unsigned int  reserved_8                : 1;  /* bit[15]: reserved */
        unsigned int  reserved_9                : 1;  /* bit[16]: reserved */
        unsigned int  reserved_10               : 1;  /* bit[17]: reserved */
        unsigned int  reserved_11               : 1;  /* bit[18]: reserved */
        unsigned int  reserved_12               : 1;  /* bit[19]: reserved */
        unsigned int  reserved_13               : 1;  /* bit[20]: reserved */
        unsigned int  reserved_14               : 1;  /* bit[21]: reserved */
        unsigned int  reserved_15               : 1;  /* bit[22]: reserved */
        unsigned int  reserved_16               : 1;  /* bit[23]: reserved */
        unsigned int  reserved_17               : 1;  /* bit[24]: reserved */
        unsigned int  reserved_18               : 1;  /* bit[25]: reserved */
        unsigned int  reserved_19               : 1;  /* bit[26]: reserved */
        unsigned int  reserved_20               : 1;  /* bit[27]: reserved */
        unsigned int  reserved_21               : 1;  /* bit[28]: reserved */
        unsigned int  reserved_22               : 1;  /* bit[29]: reserved */
        unsigned int  reserved_23               : 1;  /* bit[30]: reserved */
        unsigned int  reserved_24               : 1;  /* bit[31]: reserved */
    } reg;
} SOC_MEDIA_SCTRL_SC_MEDIA_RST_STAT_UNION;
#endif
#define SOC_MEDIA_SCTRL_SC_MEDIA_RST_STAT_media_rst_stat_g3d_START         (0)
#define SOC_MEDIA_SCTRL_SC_MEDIA_RST_STAT_media_rst_stat_g3d_END           (0)
#define SOC_MEDIA_SCTRL_SC_MEDIA_RST_STAT_media_rst_stat_codec_vpu_START   (2)
#define SOC_MEDIA_SCTRL_SC_MEDIA_RST_STAT_media_rst_stat_codec_vpu_END     (2)
#define SOC_MEDIA_SCTRL_SC_MEDIA_RST_STAT_media_rst_stat_codec_jpeg_START  (3)
#define SOC_MEDIA_SCTRL_SC_MEDIA_RST_STAT_media_rst_stat_codec_jpeg_END    (3)
#define SOC_MEDIA_SCTRL_SC_MEDIA_RST_STAT_media_rst_stat_isp_START         (4)
#define SOC_MEDIA_SCTRL_SC_MEDIA_RST_STAT_media_rst_stat_isp_END           (4)
#define SOC_MEDIA_SCTRL_SC_MEDIA_RST_STAT_media_rst_stat_ade_START         (5)
#define SOC_MEDIA_SCTRL_SC_MEDIA_RST_STAT_media_rst_stat_ade_END           (5)
#define SOC_MEDIA_SCTRL_SC_MEDIA_RST_STAT_reset_med_mmu_state_START        (6)
#define SOC_MEDIA_SCTRL_SC_MEDIA_RST_STAT_reset_med_mmu_state_END          (6)
#define SOC_MEDIA_SCTRL_SC_MEDIA_RST_STAT_reset_med_x2rm_state_START       (7)
#define SOC_MEDIA_SCTRL_SC_MEDIA_RST_STAT_reset_med_x2rm_state_END         (7)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_SCTRL_SC_MEDIA__SUBSYS_CTRL6_UNION
 �ṹ˵��  : SC_MEDIA__SUBSYS_CTRL6 �Ĵ����ṹ���塣��ַƫ����:0x538����ֵ:0x00000000�����:32
 �Ĵ���˵��: MEDIA��ϵͳ���ƼĴ��������ܰ���TEST_MUX����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  testpin_grp_sel    : 16; /* bit[0-15] : ý���ģ���ڲ���test groupѡ���źš�
                                                              ��ϸ��μ�\TC_CHIPSET_DOC\Hi6210V100\03. SOC\03.Media\01.HLD\MEDIA TESTMUX·����ý���ģ��testmux˵���� */
        unsigned int  testpin_module_sel : 16; /* bit[16-31]: ѡ��ͨ��testmux�۲��ý��ģ�顣
                                                              0x0000:ѡ��g3d��test group
                                                              0x0001:ѡ��codec��test group
                                                              0x0002:ѡ��isp��test group
                                                              0x0003:ѡ��ade��test group
                                                              0x0004:ѡ��mipi tx phy��test group
                                                              0x0005:ѡ��mipi rx 4lane phy��test group
                                                              0x0006:ѡ��mipi rx 2lane phy��test group */
    } reg;
} SOC_MEDIA_SCTRL_SC_MEDIA__SUBSYS_CTRL6_UNION;
#endif
#define SOC_MEDIA_SCTRL_SC_MEDIA__SUBSYS_CTRL6_testpin_grp_sel_START     (0)
#define SOC_MEDIA_SCTRL_SC_MEDIA__SUBSYS_CTRL6_testpin_grp_sel_END       (15)
#define SOC_MEDIA_SCTRL_SC_MEDIA__SUBSYS_CTRL6_testpin_module_sel_START  (16)
#define SOC_MEDIA_SCTRL_SC_MEDIA__SUBSYS_CTRL6_testpin_module_sel_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_SCTRL_SC_MEDIA__SUBSYS_CTRL7_UNION
 �ṹ˵��  : SC_MEDIA__SUBSYS_CTRL7 �Ĵ����ṹ���塣��ַƫ����:0x53C����ֵ:0x00000000�����:32
 �Ĵ���˵��: MEDIA��ϵͳ���ƼĴ��������ܰ���hurry/press���ã���ϸ��μ�NOC���˵����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  vpu_m0_press : 3;  /* bit[0-2]  : VPU MASTER0��press���ã�pressֵӰ�촫��ͨ�����ȼ� */
        unsigned int  reserved_0   : 1;  /* bit[3]    : reserved */
        unsigned int  vpu_m0_hurry : 3;  /* bit[4-6]  : VPU MASTER0��hurry���ã�hurryֵӰ��pending transaction���ȼ� */
        unsigned int  reserved_1   : 1;  /* bit[7]    : reserved */
        unsigned int  vpu_m1_press : 3;  /* bit[8-10] : VPU MASTER1��press���ã�pressֵӰ�촫��ͨ�����ȼ� */
        unsigned int  reserved_2   : 1;  /* bit[11]   : reserved */
        unsigned int  vpu_m1_hurry : 3;  /* bit[12-14]: VPU MASTER1��hurry���ã�hurryֵӰ��pending transaction���ȼ� */
        unsigned int  reserved_3   : 1;  /* bit[15]   : reserved */
        unsigned int  jpu_m_press  : 3;  /* bit[16-18]: JPU MASTER��press���ã�pressֵӰ�촫��ͨ�����ȼ� */
        unsigned int  reserved_4   : 1;  /* bit[19]   : reserved */
        unsigned int  jpu_m_hurry  : 3;  /* bit[20-22]: JPU MASTER��hurry���ã�hurryֵӰ��pending transaction���ȼ� */
        unsigned int  reserved_5   : 1;  /* bit[23]   : reserved */
        unsigned int  isp_m_press  : 3;  /* bit[24-26]: ISP MASTER��press���ã�pressֵӰ�촫��ͨ�����ȼ� */
        unsigned int  reserved_6   : 1;  /* bit[27]   : reserved */
        unsigned int  isp_m_hurry  : 3;  /* bit[28-30]: ISP MASTER��hurry���ã�hurryֵӰ��pending transaction���ȼ� */
        unsigned int  reserved_7   : 1;  /* bit[31]   : reserved */
    } reg;
} SOC_MEDIA_SCTRL_SC_MEDIA__SUBSYS_CTRL7_UNION;
#endif
#define SOC_MEDIA_SCTRL_SC_MEDIA__SUBSYS_CTRL7_vpu_m0_press_START  (0)
#define SOC_MEDIA_SCTRL_SC_MEDIA__SUBSYS_CTRL7_vpu_m0_press_END    (2)
#define SOC_MEDIA_SCTRL_SC_MEDIA__SUBSYS_CTRL7_vpu_m0_hurry_START  (4)
#define SOC_MEDIA_SCTRL_SC_MEDIA__SUBSYS_CTRL7_vpu_m0_hurry_END    (6)
#define SOC_MEDIA_SCTRL_SC_MEDIA__SUBSYS_CTRL7_vpu_m1_press_START  (8)
#define SOC_MEDIA_SCTRL_SC_MEDIA__SUBSYS_CTRL7_vpu_m1_press_END    (10)
#define SOC_MEDIA_SCTRL_SC_MEDIA__SUBSYS_CTRL7_vpu_m1_hurry_START  (12)
#define SOC_MEDIA_SCTRL_SC_MEDIA__SUBSYS_CTRL7_vpu_m1_hurry_END    (14)
#define SOC_MEDIA_SCTRL_SC_MEDIA__SUBSYS_CTRL7_jpu_m_press_START   (16)
#define SOC_MEDIA_SCTRL_SC_MEDIA__SUBSYS_CTRL7_jpu_m_press_END     (18)
#define SOC_MEDIA_SCTRL_SC_MEDIA__SUBSYS_CTRL7_jpu_m_hurry_START   (20)
#define SOC_MEDIA_SCTRL_SC_MEDIA__SUBSYS_CTRL7_jpu_m_hurry_END     (22)
#define SOC_MEDIA_SCTRL_SC_MEDIA__SUBSYS_CTRL7_isp_m_press_START   (24)
#define SOC_MEDIA_SCTRL_SC_MEDIA__SUBSYS_CTRL7_isp_m_press_END     (26)
#define SOC_MEDIA_SCTRL_SC_MEDIA__SUBSYS_CTRL7_isp_m_hurry_START   (28)
#define SOC_MEDIA_SCTRL_SC_MEDIA__SUBSYS_CTRL7_isp_m_hurry_END     (30)


/*****************************************************************************
 �ṹ��    : SOC_MEDIA_SCTRL_SC_MEDIA__SUBSYS_CTRL8_UNION
 �ṹ˵��  : SC_MEDIA__SUBSYS_CTRL8 �Ĵ����ṹ���塣��ַƫ����:0x554����ֵ:0x00000000�����:32
 �Ĵ���˵��: MEDIA��ϵͳ���ƼĴ��������ܰ���hurry/press/qos���ã���ϸ��μ�NOC���˵����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ade_m0_press : 3;  /* bit[0-2]  : ADE MASTER0��press���ã�pressֵӰ�촫��ͨ�����ȼ� */
        unsigned int  reserved_0   : 1;  /* bit[3]    : reserved */
        unsigned int  ade_m0_hurry : 3;  /* bit[4-6]  : ADE MASTER0��hurry���ã�hurryֵӰ��pending transaction���ȼ� */
        unsigned int  reserved_1   : 1;  /* bit[7]    : reserved */
        unsigned int  ade_m1_press : 3;  /* bit[8-10] : ADE MASTER1��press���ã�pressֵӰ�촫��ͨ�����ȼ� */
        unsigned int  reserved_2   : 1;  /* bit[11]   : reserved */
        unsigned int  ade_m1_hurry : 3;  /* bit[12-14]: ADE MASTER1��hurry���ã�hurryֵӰ��pending transaction���ȼ� */
        unsigned int  reserved_3   : 1;  /* bit[15]   : reserved */
        unsigned int  g3d_m_press  : 3;  /* bit[16-18]: G3D MASTER��press���ã�pressֵӰ�촫��ͨ�����ȼ� */
        unsigned int  reserved_4   : 1;  /* bit[19]   : reserved */
        unsigned int  g3d_m_hurry  : 3;  /* bit[20-22]: G3D MASTER��hurry���ã�hurryֵӰ��pending transaction���ȼ� */
        unsigned int  reserved_5   : 1;  /* bit[23]   : reserved */
        unsigned int  g3d_m_wr_qos : 3;  /* bit[24-26]: G3D MASTER��дQOS���� */
        unsigned int  reserved_6   : 1;  /* bit[27]   : reserved */
        unsigned int  g3d_m_rd_qos : 3;  /* bit[28-30]: G3D MASTER�Ķ�QOS���� */
        unsigned int  reserved_7   : 1;  /* bit[31]   : reserved */
    } reg;
} SOC_MEDIA_SCTRL_SC_MEDIA__SUBSYS_CTRL8_UNION;
#endif
#define SOC_MEDIA_SCTRL_SC_MEDIA__SUBSYS_CTRL8_ade_m0_press_START  (0)
#define SOC_MEDIA_SCTRL_SC_MEDIA__SUBSYS_CTRL8_ade_m0_press_END    (2)
#define SOC_MEDIA_SCTRL_SC_MEDIA__SUBSYS_CTRL8_ade_m0_hurry_START  (4)
#define SOC_MEDIA_SCTRL_SC_MEDIA__SUBSYS_CTRL8_ade_m0_hurry_END    (6)
#define SOC_MEDIA_SCTRL_SC_MEDIA__SUBSYS_CTRL8_ade_m1_press_START  (8)
#define SOC_MEDIA_SCTRL_SC_MEDIA__SUBSYS_CTRL8_ade_m1_press_END    (10)
#define SOC_MEDIA_SCTRL_SC_MEDIA__SUBSYS_CTRL8_ade_m1_hurry_START  (12)
#define SOC_MEDIA_SCTRL_SC_MEDIA__SUBSYS_CTRL8_ade_m1_hurry_END    (14)
#define SOC_MEDIA_SCTRL_SC_MEDIA__SUBSYS_CTRL8_g3d_m_press_START   (16)
#define SOC_MEDIA_SCTRL_SC_MEDIA__SUBSYS_CTRL8_g3d_m_press_END     (18)
#define SOC_MEDIA_SCTRL_SC_MEDIA__SUBSYS_CTRL8_g3d_m_hurry_START   (20)
#define SOC_MEDIA_SCTRL_SC_MEDIA__SUBSYS_CTRL8_g3d_m_hurry_END     (22)
#define SOC_MEDIA_SCTRL_SC_MEDIA__SUBSYS_CTRL8_g3d_m_wr_qos_START  (24)
#define SOC_MEDIA_SCTRL_SC_MEDIA__SUBSYS_CTRL8_g3d_m_wr_qos_END    (26)
#define SOC_MEDIA_SCTRL_SC_MEDIA__SUBSYS_CTRL8_g3d_m_rd_qos_START  (28)
#define SOC_MEDIA_SCTRL_SC_MEDIA__SUBSYS_CTRL8_g3d_m_rd_qos_END    (30)






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

#endif /* end of soc_media_sctrl_interface.h */
