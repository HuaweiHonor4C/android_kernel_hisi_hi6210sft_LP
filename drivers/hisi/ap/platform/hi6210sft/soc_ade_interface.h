

/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/

#ifndef __SOC_ADE_INTERFACE_H__
#define __SOC_ADE_INTERFACE_H__

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
/* �Ĵ���˵����ADE�汾ָʾ�Ĵ�����
   λ����UNION�ṹ:  SOC_ADE_VERSION_UNION */
#define SOC_ADE_VERSION_ADDR(base)                    ((base) + (0x0000))

/* �Ĵ���˵����ADEȫ�ֿ��ƼĴ���0��
   λ����UNION�ṹ:  SOC_ADE_CTRL_UNION */
#define SOC_ADE_CTRL_ADDR(base)                       ((base) + (0x0004))

/* �Ĵ���˵����SCL3���ÿ��ƼĴ�����
   λ����UNION�ṹ:  SOC_ADE_SCL3_MUX_CFG_UNION */
#define SOC_ADE_SCL3_MUX_CFG_ADDR(base)               ((base) + (0x0008))

/* �Ĵ���˵����SCL1���ÿ��ƼĴ�����
   λ����UNION�ṹ:  SOC_ADE_SCL1_MUX_CFG_UNION */
#define SOC_ADE_SCL1_MUX_CFG_ADDR(base)               ((base) + (0x000C))

/* �Ĵ���˵����ROT����Դѡ��Ĵ�����
   λ����UNION�ṹ:  SOC_ADE_ROT_SRC_CFG_UNION */
#define SOC_ADE_ROT_SRC_CFG_ADDR(base)                ((base) + (0x0010))

/* �Ĵ���˵����SCL2����Դѡ��Ĵ�����
   λ����UNION�ṹ:  SOC_ADE_SCL2_SRC_CFG_UNION */
#define SOC_ADE_SCL2_SRC_CFG_ADDR(base)               ((base) + (0x0014))

/* �Ĵ���˵����������ʾͨ������Դѡ��Ĵ�����
   λ����UNION�ṹ:  SOC_ADE_DISP_SRC_CFG_UNION */
#define SOC_ADE_DISP_SRC_CFG_ADDR(base)               ((base) + (0x0018))

/* �Ĵ���˵����������ʾ��дͨ������Դѡ��Ĵ�����
   λ����UNION�ṹ:  SOC_ADE_WDMA2_SRC_CFG_UNION */
#define SOC_ADE_WDMA2_SRC_CFG_ADDR(base)              ((base) + (0x001C))

/* �Ĵ���˵�������ε���ͨ������Դѡ��Ĵ�����
   λ����UNION�ṹ:  SOC_ADE_SEC_OVLY_SRC_CFG_UNION */
#define SOC_ADE_SEC_OVLY_SRC_CFG_ADDR(base)           ((base) + (0x0020))

/* �Ĵ���˵����Wifi��ʾ��дͨ������Դѡ��Ĵ�����
   λ����UNION�ṹ:  SOC_ADE_WDMA3_SRC_CFG_UNION */
#define SOC_ADE_WDMA3_SRC_CFG_ADDR(base)              ((base) + (0x0024))

/* �Ĵ���˵����OVLY1�¼�ͨ�����ݴ���ʹ�����üĴ�����
   λ����UNION�ṹ:  SOC_ADE_OVLY1_TRANS_CFG_UNION */
#define SOC_ADE_OVLY1_TRANS_CFG_ADDR(base)            ((base) + (0x002C))

/* �Ĵ���˵����CTRAN5�¼�ͨ�����ݴ���ʹ�����üĴ�����
   λ����UNION�ṹ:  SOC_ADE_CTRAN5_TRANS_CFG_UNION */
#define SOC_ADE_CTRAN5_TRANS_CFG_ADDR(base)           ((base) + (0x0040))

/* �Ĵ���˵����DMAͨ��AXI������ƼĴ�����
   λ����UNION�ṹ:  SOC_ADE_DMA_AXI_MUX_UNION */
#define SOC_ADE_DMA_AXI_MUX_ADDR(base)                ((base) + (0x0050))

/* �Ĵ���˵����DMAͨ��AXI��ȫ���üĴ������˼Ĵ���ֻ��ͨ����ȫ��ʽ���á�
   λ����UNION�ṹ:  SOC_ADE_DMA_SEC_CFG_UNION */
#define SOC_ADE_DMA_SEC_CFG_ADDR(base)                ((base) + (0x0054))

/* �Ĵ���˵����DMA AXI�ӿ�Outstanding���üĴ�����
   λ����UNION�ṹ:  SOC_ADE_DMA_AXI_OSD_UNION */
#define SOC_ADE_DMA_AXI_OSD_ADDR(base)                ((base) + (0x0058))

/* �Ĵ���˵������ģ����λ�Ĵ�����
   λ����UNION�ṹ:  SOC_ADE_SOFT_RST0_UNION */
#define SOC_ADE_SOFT_RST0_ADDR(base)                  ((base) + (0x0070))

/* �Ĵ���˵������ģ����λ�Ĵ�����
   λ����UNION�ṹ:  SOC_ADE_SOFT_RST1_UNION */
#define SOC_ADE_SOFT_RST1_ADDR(base)                  ((base) + (0x0074))

/* �Ĵ���˵������ģ����λԴѡ��Ĵ�����
   λ����UNION�ṹ:  SOC_ADE_SOFT_RST_SEL0_UNION */
#define SOC_ADE_SOFT_RST_SEL0_ADDR(base)              ((base) + (0x0078))

/* �Ĵ���˵������ģ����λԴѡ��Ĵ�����
   λ����UNION�ṹ:  SOC_ADE_SOFT_RST_SEL1_UNION */
#define SOC_ADE_SOFT_RST_SEL1_ADDR(base)              ((base) + (0x007C))

/* �Ĵ���˵������ģ�鹤��״̬�Ĵ�����
   λ����UNION�ṹ:  SOC_ADE_STAT0_UNION */
#define SOC_ADE_STAT0_ADDR(base)                      ((base) + (0x0080))

/* �Ĵ���˵������ģ�鹤��״̬�Ĵ�����
   λ����UNION�ṹ:  SOC_ADE_STAT1_UNION */
#define SOC_ADE_STAT1_ADDR(base)                      ((base) + (0x0084))

/* �Ĵ���˵����DMA����״̬�Ĵ�����
   λ����UNION�ṹ:  SOC_ADE_DMA_ERR_STAT_UNION */
#define SOC_ADE_DMA_ERR_STAT_ADDR(base)               ((base) + (0x0088))

/* �Ĵ���˵����ADEȫ�ֿ��ƼĴ���1��
   λ����UNION�ṹ:  SOC_ADE_CTRL1_UNION */
#define SOC_ADE_CTRL1_ADDR(base)                      ((base) + (0x008C))

/* �Ĵ���˵����ADE��ȫ���üĴ���0���˼Ĵ������ڿ�����ģ��ļĴ����Ƿ�ȫ���䣬�Ĵ�������ֻ��ͨ����ȫ��ʽ���á�
   λ����UNION�ṹ:  SOC_ADE_SEC_CFG0_UNION */
#define SOC_ADE_SEC_CFG0_ADDR(base)                   ((base) + (0x0090))

/* �Ĵ���˵����ADE��ȫ���üĴ���1���˼Ĵ������ڿ�����ģ��ļĴ����Ƿ�ȫ���䣬�Ĵ�������ֻ��ͨ����ȫ��ʽ���á�
   λ����UNION�ṹ:  SOC_ADE_SEC_CFG1_UNION */
#define SOC_ADE_SEC_CFG1_ADDR(base)                   ((base) + (0x0094))

/* �Ĵ���˵����OVLYͨ�����ƼĴ��������ھ�̬���üĴ�������ֹ��ADE���������ж�̬���á�
   λ����UNION�ṹ:  SOC_ADE_OVLY_CTL_UNION */
#define SOC_ADE_OVLY_CTL_ADDR(base)                   ((base) + (0x0098))

/* �Ĵ���˵����ADE��ģ���Զ�ʱ���ſؿ��ƼĴ���0��
   λ����UNION�ṹ:  SOC_ADE_AUTO_CLK_GT_EN0_UNION */
#define SOC_ADE_AUTO_CLK_GT_EN0_ADDR(base)            ((base) + (0x009C))

/* �Ĵ���˵����ADE��ģ���Զ�ʱ���ſؿ��ƼĴ���1��
   λ����UNION�ṹ:  SOC_ADE_AUTO_CLK_GT_EN1_UNION */
#define SOC_ADE_AUTO_CLK_GT_EN1_ADDR(base)            ((base) + (0x00A0))

/* �Ĵ���˵����ADE��֡���ƼĴ�����
   λ����UNION�ṹ:  SOC_ADE_FRM_DISGARD_CTRL_UNION */
#define SOC_ADE_FRM_DISGARD_CTRL_ADDR(base)           ((base) + (0x00A4))

/* �Ĵ���˵����ADE��֡ͳ�Ƽ�������
   λ����UNION�ṹ:  SOC_ADE_FRM_DISGARD_CNT_UNION */
#define SOC_ADE_FRM_DISGARD_CNT_ADDR(base)            ((base) + (0x00A8))

/* �Ĵ���˵������ģ��Ӳ��ͬ�����μĴ���0��
   λ����UNION�ṹ:  SOC_ADE_RELOAD_DIS0_UNION */
#define SOC_ADE_RELOAD_DIS0_ADDR(base)                ((base) + (0x00AC))

/* �Ĵ���˵������ģ��Ӳ��ͬ�����μĴ���1��
   λ����UNION�ṹ:  SOC_ADE_RELOAD_DIS1_UNION */
#define SOC_ADE_RELOAD_DIS1_ADDR(base)                ((base) + (0x00B0))

/* �Ĵ���˵����ADEȫ��ʹ�ܼĴ�����
   λ����UNION�ṹ:  SOC_ADE_EN_UNION */
#define SOC_ADE_EN_ADDR(base)                         ((base) + (0x0100))





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
 �ṹ��    : SOC_ADE_VERSION_UNION
 �ṹ˵��  : VERSION �Ĵ����ṹ���塣��ַƫ����:0x0000����ֵ:0x00000100�����:32
 �Ĵ���˵��: ADE�汾ָʾ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  version : 32; /* bit[0-31]: ָʾADE�İ汾�� */
    } reg;
} SOC_ADE_VERSION_UNION;
#endif
#define SOC_ADE_VERSION_version_START  (0)
#define SOC_ADE_VERSION_version_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_ADE_CTRL_UNION
 �ṹ˵��  : CTRL �Ĵ����ṹ���塣��ַƫ����:0x0004����ֵ:0x4005000D�����:32
 �Ĵ���˵��: ADEȫ�ֿ��ƼĴ���0��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  frm_end_start       : 2;  /* bit[0-1]  : ADE֡��ʼʱ��ѡ�񣬱�ʾADE����Դ���䡢ͨ·���õȼĴ���ˢ�µ�ʱ�̣�
                                                               0��ÿһ֡Vsyncͬ���ź�ʱ��Ч��
                                                               1����һ֡������ade_en����Ч������֡֡��������Ч���Ƽ�����
                                                               2������ade_en�Ĵ���ʱ������Ч��
                                                               3����һ֡Vsyncͬ���ź���Ч������֡֡��������Ч�� */
        unsigned int  dfs_buf_cfg         : 1;  /* bit[2]    : DFS buffer������ƣ����ھ�̬���üĴ�������ֹ��ADE���������ж�̬���á�
                                                               0��DFS buffer���Ϊ6400����ʱSCL2�Ĵ�ֱ���Ź��ܲ����ã�
                                                               1��DFS buffer���Ϊ3840����ʱSCL2�Ĵ�ֱ���Ź��ܿ��ã�
                                                               ע�⣺DFS buffer����ˮ�ߵ����ò��ܳ��������buffer��ȡ� */
        unsigned int  rot_buf_cfg         : 3;  /* bit[3-5]  : ͨ��ROT buffer������ƣ����ھ�̬���üĴ�������ֹ��ADE���������ж�̬���á�
                                                               0��CH1=NA;CH5=NA;CH6=16KB;ROT=153.6KB��
                                                               1��CH1=16KB;CH5=NA;CH6=153.6KB;ROT=NA��
                                                               2��CH1=NA;CH5=153.6KB;CH6=16KB;ROT=NA��
                                                               3��CH1=16KB;CH5=76.8KB;CH6=76.8KB;ROT=NA��
                                                               4��CH1=16KB;CH5=NA;CH6=76.8KB;ROT=76.8KB��
                                                               5��������
                                                               ע�⣺
                                                               1��ROTδ����bufferʱ������disable��
                                                               2��Buffer��СΪƹ��buffer���ܺͣ����õ�RDMA��ͼ����С���ܳ�������ƹbuffer�Ĵ�С�� */
        unsigned int  rd_ch5_nv           : 1;  /* bit[6]    : ROT buffer������Ƹ������ԣ���Ҫ��rot_buf_cfg���ʹ�ã����ھ�̬���üĴ�������ֹ��ADE���������ж�̬���á�
                                                               0��Channel 5��ǰ����NV12/NV21��ʽ��
                                                               1��Channel 5��ǰ��NV12/NV21��ʽ�� */
        unsigned int  rd_ch6_nv           : 1;  /* bit[7]    : ROT buffer������Ƹ������ԣ���Ҫ��rot_buf_cfg���ʹ�ã����ھ�̬���üĴ�������ֹ��ADE���������ж�̬���á�
                                                               0��Channel 6��ǰ����NV12/NV21��ʽ��
                                                               1��Channel 6��ǰ��NV12/NV21��ʽ�� */
        unsigned int  dfs_buf_unflow_lev1 : 13; /* bit[8-20] : DFS buffer����Ԥ��ˮ�ߣ�Ĭ��ֵΪ1280����߲����������DFS buffer��С����DFS buffer�������ȵ��ڴ�ˮ��ʱ���ϱ�underflow�жϣ�������RDMA��QOS�� */
        unsigned int  dfs_buf_unflow_lev2 : 11; /* bit[21-31]: DFS buffer����Ԥ��ˮ��������Ĭ��ֵΪ512������Ԥ��ˮ��+������߲����������DFS buffer��С����DFS buffer�������ȵ���ˮ��+����ʱ������RDMA��QOS�� */
    } reg;
} SOC_ADE_CTRL_UNION;
#endif
#define SOC_ADE_CTRL_frm_end_start_START        (0)
#define SOC_ADE_CTRL_frm_end_start_END          (1)
#define SOC_ADE_CTRL_dfs_buf_cfg_START          (2)
#define SOC_ADE_CTRL_dfs_buf_cfg_END            (2)
#define SOC_ADE_CTRL_rot_buf_cfg_START          (3)
#define SOC_ADE_CTRL_rot_buf_cfg_END            (5)
#define SOC_ADE_CTRL_rd_ch5_nv_START            (6)
#define SOC_ADE_CTRL_rd_ch5_nv_END              (6)
#define SOC_ADE_CTRL_rd_ch6_nv_START            (7)
#define SOC_ADE_CTRL_rd_ch6_nv_END              (7)
#define SOC_ADE_CTRL_dfs_buf_unflow_lev1_START  (8)
#define SOC_ADE_CTRL_dfs_buf_unflow_lev1_END    (20)
#define SOC_ADE_CTRL_dfs_buf_unflow_lev2_START  (21)
#define SOC_ADE_CTRL_dfs_buf_unflow_lev2_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_ADE_SCL3_MUX_CFG_UNION
 �ṹ˵��  : SCL3_MUX_CFG �Ĵ����ṹ���塣��ַƫ����:0x0008����ֵ:0x00000000�����:32
 �Ĵ���˵��: SCL3���ÿ��ƼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  scl3_mux_cfg         : 1;  /* bit[0]   : SCL3���ÿ��ƣ����ھ�̬���üĴ�������ֹ��ADE���������ж�̬���á�
                                                               0��SCL3λ��CH5֮��
                                                               1��SCL3λ��Wifi��ʾ��дͨ����WDMA3��֮ǰ�� */
        unsigned int  clip6_wdma3_trans_en : 1;  /* bit[1]   : ����CH6��WDMA3֮���ֱͨͨ·�����ھ�̬���üĴ�������ֹ��ADE���������ж�̬���á�
                                                               0������ͨ·��
                                                               1������ͨ·����ʱSCL3���ܸ�����WDMA3ǰ��scl3_mux_cfg����=0����CLIP6��SCL1��CTRAN2֮���ͨ·Ҳ�Զ��Ͽ��� */
        unsigned int  reserved             : 30; /* bit[2-31]: ������ */
    } reg;
} SOC_ADE_SCL3_MUX_CFG_UNION;
#endif
#define SOC_ADE_SCL3_MUX_CFG_scl3_mux_cfg_START          (0)
#define SOC_ADE_SCL3_MUX_CFG_scl3_mux_cfg_END            (0)
#define SOC_ADE_SCL3_MUX_CFG_clip6_wdma3_trans_en_START  (1)
#define SOC_ADE_SCL3_MUX_CFG_clip6_wdma3_trans_en_END    (1)


/*****************************************************************************
 �ṹ��    : SOC_ADE_SCL1_MUX_CFG_UNION
 �ṹ˵��  : SCL1_MUX_CFG �Ĵ����ṹ���塣��ַƫ����:0x000C����ֵ:0x00000000�����:32
 �Ĵ���˵��: SCL1���ÿ��ƼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  scl1_mux_cfg : 2;  /* bit[0-1] : SCL1���ÿ��ƣ����ھ�̬���üĴ�������ֹ��ADE���������ж�̬���á�
                                                       0��SCL1λ��CH6֮��
                                                       1��SCL1λ��CH1֮��
                                                       2��SCL1λ��CH5֮��
                                                       3��δ���塣 */
        unsigned int  reserved     : 30; /* bit[2-31]: ������ */
    } reg;
} SOC_ADE_SCL1_MUX_CFG_UNION;
#endif
#define SOC_ADE_SCL1_MUX_CFG_scl1_mux_cfg_START  (0)
#define SOC_ADE_SCL1_MUX_CFG_scl1_mux_cfg_END    (1)


/*****************************************************************************
 �ṹ��    : SOC_ADE_ROT_SRC_CFG_UNION
 �ṹ˵��  : ROT_SRC_CFG �Ĵ����ṹ���塣��ַƫ����:0x0010����ֵ:0x00000000�����:32
 �Ĵ���˵��: ROT����Դѡ��Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  rot_src_cfg : 2;  /* bit[0-1] : Ovly���ROT����Դѡ�����ھ�̬���üĴ�������ֹ��ADE���������ж�̬���á�
                                                      0���Ͽ���
                                                      1��Ovly2��
                                                      2��Ovly3��
                                                      3����ˢ�»ض�ͨ����DISP_RDMA���� */
        unsigned int  reserved    : 30; /* bit[2-31]: ������ */
    } reg;
} SOC_ADE_ROT_SRC_CFG_UNION;
#endif
#define SOC_ADE_ROT_SRC_CFG_rot_src_cfg_START  (0)
#define SOC_ADE_ROT_SRC_CFG_rot_src_cfg_END    (1)


/*****************************************************************************
 �ṹ��    : SOC_ADE_SCL2_SRC_CFG_UNION
 �ṹ˵��  : SCL2_SRC_CFG �Ĵ����ṹ���塣��ַƫ����:0x0014����ֵ:0x00000000�����:32
 �Ĵ���˵��: SCL2����Դѡ��Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  scl2_src_cfg : 3;  /* bit[0-2] : Ovly��SCL2������Դѡ�����ھ�̬���üĴ�������ֹ��ADE���������ж�̬���á�
                                                       0���Ͽ���
                                                       1��Ovly2��
                                                       2��Ovly3��
                                                       3����ˢ�»ض�ͨ����DISP_RDMA����
                                                       4��Ovly���ROT��
                                                       5~7���Ͽ��� */
        unsigned int  reserved     : 29; /* bit[3-31]: ������ */
    } reg;
} SOC_ADE_SCL2_SRC_CFG_UNION;
#endif
#define SOC_ADE_SCL2_SRC_CFG_scl2_src_cfg_START  (0)
#define SOC_ADE_SCL2_SRC_CFG_scl2_src_cfg_END    (2)


/*****************************************************************************
 �ṹ��    : SOC_ADE_DISP_SRC_CFG_UNION
 �ṹ˵��  : DISP_SRC_CFG �Ĵ����ṹ���塣��ַƫ����:0x0018����ֵ:0x00000001�����:32
 �Ĵ���˵��: ������ʾͨ������Դѡ��Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  disp_src_cfg : 3;  /* bit[0-2] : ������ʾͨ��������Դѡ�����ھ�̬���üĴ�������ֹ��ADE���������ж�̬���á�
                                                       0���Ͽ���
                                                       1��Ovly2��
                                                       2����ˢ�»ض�ͨ����DISP_RDMA����
                                                       3��Ovly���ROT��
                                                       4��Ovly���SCL2��
                                                       5~7���Ͽ��� */
        unsigned int  reserved     : 29; /* bit[3-31]: ������ */
    } reg;
} SOC_ADE_DISP_SRC_CFG_UNION;
#endif
#define SOC_ADE_DISP_SRC_CFG_disp_src_cfg_START  (0)
#define SOC_ADE_DISP_SRC_CFG_disp_src_cfg_END    (2)


/*****************************************************************************
 �ṹ��    : SOC_ADE_WDMA2_SRC_CFG_UNION
 �ṹ˵��  : WDMA2_SRC_CFG �Ĵ����ṹ���塣��ַƫ����:0x001C����ֵ:0x00000000�����:32
 �Ĵ���˵��: ������ʾ��дͨ������Դѡ��Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  wdma2_src_cfg : 3;  /* bit[0-2] : ������ʾ��дͨ����WDMA2��������Դѡ�����ھ�̬���üĴ�������ֹ��ADE���������ж�̬���á�
                                                        0���Ͽ���
                                                        1����ˢ�»ض�ͨ����DISP_RDMA����
                                                        2��Ovly���ROT��
                                                        3��Ovly���SCL2��
                                                        4��Ovly2��
                                                        5��Ovly3��
                                                        6~7���Ͽ��� */
        unsigned int  reserved      : 29; /* bit[3-31]: ������ */
    } reg;
} SOC_ADE_WDMA2_SRC_CFG_UNION;
#endif
#define SOC_ADE_WDMA2_SRC_CFG_wdma2_src_cfg_START  (0)
#define SOC_ADE_WDMA2_SRC_CFG_wdma2_src_cfg_END    (2)


/*****************************************************************************
 �ṹ��    : SOC_ADE_SEC_OVLY_SRC_CFG_UNION
 �ṹ˵��  : SEC_OVLY_SRC_CFG �Ĵ����ṹ���塣��ַƫ����:0x0020����ֵ:0x00000000�����:32
 �Ĵ���˵��: ���ε���ͨ������Դѡ��Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sec_ovly_src_cfg : 2;  /* bit[0-1] : ���ε���ͨ��������Դѡ�����ھ�̬���üĴ�������ֹ��ADE���������ж�̬���á�
                                                           0���Ͽ���
                                                           1��Ovly3��
                                                           2��Ovly���ROT��
                                                           3��Ovly���SCL2�� */
        unsigned int  reserved         : 30; /* bit[2-31]: ������ */
    } reg;
} SOC_ADE_SEC_OVLY_SRC_CFG_UNION;
#endif
#define SOC_ADE_SEC_OVLY_SRC_CFG_sec_ovly_src_cfg_START  (0)
#define SOC_ADE_SEC_OVLY_SRC_CFG_sec_ovly_src_cfg_END    (1)


/*****************************************************************************
 �ṹ��    : SOC_ADE_WDMA3_SRC_CFG_UNION
 �ṹ˵��  : WDMA3_SRC_CFG �Ĵ����ṹ���塣��ַƫ����:0x0024����ֵ:0x00000000�����:32
 �Ĵ���˵��: Wifi��ʾ��дͨ������Դѡ��Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  wdma3_src_cfg : 3;  /* bit[0-2] : Wifi��ʾͨ����WDMA3��������Դѡ�����ھ�̬���üĴ�������ֹ��ADE���������ж�̬���á�
                                                        0���Ͽ���
                                                        1����ˢ�»ض�ͨ����DISP_RDMA����
                                                        2��Ovly���ROT��
                                                        3��Ovly���SCL2��
                                                        4��Ovly1��
                                                        5��Ovly2��
                                                        6~7���Ͽ��� */
        unsigned int  reserved      : 29; /* bit[3-31]: ������ */
    } reg;
} SOC_ADE_WDMA3_SRC_CFG_UNION;
#endif
#define SOC_ADE_WDMA3_SRC_CFG_wdma3_src_cfg_START  (0)
#define SOC_ADE_WDMA3_SRC_CFG_wdma3_src_cfg_END    (2)


/*****************************************************************************
 �ṹ��    : SOC_ADE_OVLY1_TRANS_CFG_UNION
 �ṹ˵��  : OVLY1_TRANS_CFG �Ĵ����ṹ���塣��ַƫ����:0x002C����ֵ:0x00000001�����:32
 �Ĵ���˵��: OVLY1�¼�ͨ�����ݴ���ʹ�����üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ovly1_wdma1_trans_en : 1;  /* bit[0]   : OVLY1�����߻�дͨ����WDMA1�����ݴ���ʹ�ܣ����ھ�̬���üĴ�������ֹ��ADE���������ж�̬���á�
                                                               0������رգ�
                                                               1������ʹ�ܣ� */
        unsigned int  reserved             : 31; /* bit[1-31]: ������ */
    } reg;
} SOC_ADE_OVLY1_TRANS_CFG_UNION;
#endif
#define SOC_ADE_OVLY1_TRANS_CFG_ovly1_wdma1_trans_en_START  (0)
#define SOC_ADE_OVLY1_TRANS_CFG_ovly1_wdma1_trans_en_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_ADE_CTRAN5_TRANS_CFG_UNION
 �ṹ˵��  : CTRAN5_TRANS_CFG �Ĵ����ṹ���塣��ַƫ����:0x0040����ֵ:0x00000000�����:32
 �Ĵ���˵��: CTRAN5�¼�ͨ�����ݴ���ʹ�����üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ctran5_ovly_trans_en : 1;  /* bit[0]   : CTRAN5��OVLY��OVLY1/OVLY2�����ݴ���ʹ�ܣ����ھ�̬���üĴ�������ֹ��ADE���������ж�̬���á�
                                                               0������رգ�
                                                               1������ʹ�ܣ� */
        unsigned int  reserved             : 31; /* bit[1-31]: ������ */
    } reg;
} SOC_ADE_CTRAN5_TRANS_CFG_UNION;
#endif
#define SOC_ADE_CTRAN5_TRANS_CFG_ctran5_ovly_trans_en_START  (0)
#define SOC_ADE_CTRAN5_TRANS_CFG_ctran5_ovly_trans_en_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_ADE_DMA_AXI_MUX_UNION
 �ṹ˵��  : DMA_AXI_MUX �Ĵ����ṹ���塣��ַƫ����:0x0050����ֵ:0x00007780�����:32
 �Ĵ���˵��: DMAͨ��AXI������ƼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  rd_dma_ch1_axi_cfg   : 1;  /* bit[0]    : dma��ͨ��1AXI�ӿ����ã�
                                                                0��ʹ��AXI0�ӿڣ�
                                                                1��ʹ��AXI1�ӿڡ� */
        unsigned int  rd_dma_ch2_axi_cfg   : 1;  /* bit[1]    : dma��ͨ��2AXI�ӿ����ã�
                                                                0��ʹ��AXI0�ӿڣ�
                                                                1��ʹ��AXI1�ӿڡ� */
        unsigned int  rd_dma_ch3_axi_cfg   : 1;  /* bit[2]    : dma��ͨ��3AXI�ӿ����ã�
                                                                0��ʹ��AXI0�ӿڣ�
                                                                1��ʹ��AXI1�ӿڡ� */
        unsigned int  rd_dma_ch4_axi_cfg   : 1;  /* bit[3]    : dma��ͨ��4AXI�ӿ����ã�
                                                                0��ʹ��AXI0�ӿڣ�
                                                                1��ʹ��AXI1�ӿڡ� */
        unsigned int  rd_dma_ch5_axi_cfg   : 1;  /* bit[4]    : dma��ͨ��5AXI�ӿ����ã�
                                                                0��ʹ��AXI0�ӿڣ�
                                                                1��ʹ��AXI1�ӿڡ� */
        unsigned int  rd_dma_ch6_axi_cfg   : 1;  /* bit[5]    : dma��ͨ��6AXI�ӿ����ã�
                                                                0��ʹ��AXI0�ӿڣ�
                                                                1��ʹ��AXI1�ӿڡ� */
        unsigned int  rd_dma_disp_axi_cfg  : 1;  /* bit[6]    : dma display��ͨ��AXI�ӿ����ã�
                                                                0��ʹ��AXI0�ӿڣ�
                                                                1��ʹ��AXI1�ӿڡ� */
        unsigned int  rd_dma_cmdq1_axi_cfg : 1;  /* bit[7]    : dma CMDQ1��ͨ��AXI�ӿ����ã�
                                                                0��ʹ��AXI0�ӿڣ�
                                                                1��ʹ��AXI1�ӿڡ� */
        unsigned int  rd_dma_cmdq2_axi_cfg : 1;  /* bit[8]    : dma CMDQ2��ͨ��AXI�ӿ����ã�
                                                                0��ʹ��AXI0�ӿڣ�
                                                                1��ʹ��AXI1�ӿڡ� */
        unsigned int  reserved_0           : 1;  /* bit[9]    : ������ */
        unsigned int  wr_dma_ch1_axi_cfg   : 1;  /* bit[10]   : dma дͨ��1AXI�ӿ����ã�
                                                                0��ʹ��AXI0�ӿڣ�
                                                                1��ʹ��AXI1�ӿڡ� */
        unsigned int  wr_dma_ch2_axi_cfg   : 1;  /* bit[11]   : dma дͨ��2AXI�ӿ����ã�
                                                                0��ʹ��AXI0�ӿڣ�
                                                                1��ʹ��AXI1�ӿڡ� */
        unsigned int  wr_dma_ch3_axi_cfg   : 1;  /* bit[12]   : dma дͨ��3AXI�ӿ����ã�
                                                                0��ʹ��AXI0�ӿڣ�
                                                                1��ʹ��AXI1�ӿڡ� */
        unsigned int  reserved_1           : 1;  /* bit[13]   : ������ */
        unsigned int  wr_dma_cmdq_axi_cfg  : 1;  /* bit[14]   : dma CMDQдͨ��AXI�ӿ����ã�
                                                                0��ʹ��AXI0�ӿڣ�
                                                                1��ʹ��AXI1�ӿڡ� */
        unsigned int  reserved_2           : 17; /* bit[15-31]: ������ */
    } reg;
} SOC_ADE_DMA_AXI_MUX_UNION;
#endif
#define SOC_ADE_DMA_AXI_MUX_rd_dma_ch1_axi_cfg_START    (0)
#define SOC_ADE_DMA_AXI_MUX_rd_dma_ch1_axi_cfg_END      (0)
#define SOC_ADE_DMA_AXI_MUX_rd_dma_ch2_axi_cfg_START    (1)
#define SOC_ADE_DMA_AXI_MUX_rd_dma_ch2_axi_cfg_END      (1)
#define SOC_ADE_DMA_AXI_MUX_rd_dma_ch3_axi_cfg_START    (2)
#define SOC_ADE_DMA_AXI_MUX_rd_dma_ch3_axi_cfg_END      (2)
#define SOC_ADE_DMA_AXI_MUX_rd_dma_ch4_axi_cfg_START    (3)
#define SOC_ADE_DMA_AXI_MUX_rd_dma_ch4_axi_cfg_END      (3)
#define SOC_ADE_DMA_AXI_MUX_rd_dma_ch5_axi_cfg_START    (4)
#define SOC_ADE_DMA_AXI_MUX_rd_dma_ch5_axi_cfg_END      (4)
#define SOC_ADE_DMA_AXI_MUX_rd_dma_ch6_axi_cfg_START    (5)
#define SOC_ADE_DMA_AXI_MUX_rd_dma_ch6_axi_cfg_END      (5)
#define SOC_ADE_DMA_AXI_MUX_rd_dma_disp_axi_cfg_START   (6)
#define SOC_ADE_DMA_AXI_MUX_rd_dma_disp_axi_cfg_END     (6)
#define SOC_ADE_DMA_AXI_MUX_rd_dma_cmdq1_axi_cfg_START  (7)
#define SOC_ADE_DMA_AXI_MUX_rd_dma_cmdq1_axi_cfg_END    (7)
#define SOC_ADE_DMA_AXI_MUX_rd_dma_cmdq2_axi_cfg_START  (8)
#define SOC_ADE_DMA_AXI_MUX_rd_dma_cmdq2_axi_cfg_END    (8)
#define SOC_ADE_DMA_AXI_MUX_wr_dma_ch1_axi_cfg_START    (10)
#define SOC_ADE_DMA_AXI_MUX_wr_dma_ch1_axi_cfg_END      (10)
#define SOC_ADE_DMA_AXI_MUX_wr_dma_ch2_axi_cfg_START    (11)
#define SOC_ADE_DMA_AXI_MUX_wr_dma_ch2_axi_cfg_END      (11)
#define SOC_ADE_DMA_AXI_MUX_wr_dma_ch3_axi_cfg_START    (12)
#define SOC_ADE_DMA_AXI_MUX_wr_dma_ch3_axi_cfg_END      (12)
#define SOC_ADE_DMA_AXI_MUX_wr_dma_cmdq_axi_cfg_START   (14)
#define SOC_ADE_DMA_AXI_MUX_wr_dma_cmdq_axi_cfg_END     (14)


/*****************************************************************************
 �ṹ��    : SOC_ADE_DMA_SEC_CFG_UNION
 �ṹ˵��  : DMA_SEC_CFG �Ĵ����ṹ���塣��ַƫ����:0x0054����ֵ:0x00007FFF�����:32
 �Ĵ���˵��: DMAͨ��AXI��ȫ���üĴ������˼Ĵ���ֻ��ͨ����ȫ��ʽ���á�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  rd_dma_ch1_sec   : 1;  /* bit[0]    : ͨ����ȫ���ã�����DMA������AX������PROT[1]���ԣ�
                                                            0����ȫͨ����
                                                            1���ǰ�ȫͨ���� */
        unsigned int  rd_dma_ch2_sec   : 1;  /* bit[1]    : ͨ����ȫ���ã�����DMA������AX������PROT[1]���ԣ�
                                                            0����ȫͨ����
                                                            1���ǰ�ȫͨ���� */
        unsigned int  rd_dma_ch3_sec   : 1;  /* bit[2]    : ͨ����ȫ���ã�����DMA������AX������PROT[1]���ԣ�
                                                            0����ȫͨ����
                                                            1���ǰ�ȫͨ���� */
        unsigned int  rd_dma_ch4_sec   : 1;  /* bit[3]    : ͨ����ȫ���ã�����DMA������AX������PROT[1]���ԣ�
                                                            0����ȫͨ����
                                                            1���ǰ�ȫͨ���� */
        unsigned int  rd_dma_ch5_sec   : 1;  /* bit[4]    : ͨ����ȫ���ã�����DMA������AX������PROT[1]���ԣ�
                                                            0����ȫͨ����
                                                            1���ǰ�ȫͨ���� */
        unsigned int  rd_dma_ch6_sec   : 1;  /* bit[5]    : ͨ����ȫ���ã�����DMA������AX������PROT[1]���ԣ�
                                                            0����ȫͨ����
                                                            1���ǰ�ȫͨ���� */
        unsigned int  rd_dma_disp_sec  : 1;  /* bit[6]    : ͨ����ȫ���ã�����DMA������AX������PROT[1]���ԣ�
                                                            0����ȫͨ����
                                                            1���ǰ�ȫͨ���� */
        unsigned int  rd_dma_cmdq1_sec : 1;  /* bit[7]    : ͨ����ȫ���ã�����DMA������AX������PROT[1]���ԣ�
                                                            0����ȫͨ����
                                                            1���ǰ�ȫͨ���� */
        unsigned int  rd_dma_cmdq2_sec : 1;  /* bit[8]    : ͨ����ȫ���ã�����DMA������AX������PROT[1]���ԣ�
                                                            0����ȫͨ����
                                                            1���ǰ�ȫͨ���� */
        unsigned int  reserved_0       : 1;  /* bit[9]    : ������ */
        unsigned int  wr_dma_ch1_sec   : 1;  /* bit[10]   : ͨ����ȫ���ã�����DMA������AX������PROT[1]���ԣ�
                                                            0����ȫͨ����
                                                            1���ǰ�ȫͨ���� */
        unsigned int  wr_dma_ch2_sec   : 1;  /* bit[11]   : ͨ����ȫ���ã�����DMA������AX������PROT[1]���ԣ�
                                                            0����ȫͨ����
                                                            1���ǰ�ȫͨ���� */
        unsigned int  wr_dma_ch3_sec   : 1;  /* bit[12]   : ͨ����ȫ���ã�����DMA������AX������PROT[1]���ԣ�
                                                            0����ȫͨ����
                                                            1���ǰ�ȫͨ���� */
        unsigned int  reserved_1       : 1;  /* bit[13]   : ������ */
        unsigned int  wr_dma_cmdq_sec  : 1;  /* bit[14]   : ͨ����ȫ���ã�����DMA������AX������PROT[1]���ԣ�
                                                            0����ȫͨ����
                                                            1���ǰ�ȫͨ���� */
        unsigned int  reserved_2       : 17; /* bit[15-31]: ������ */
    } reg;
} SOC_ADE_DMA_SEC_CFG_UNION;
#endif
#define SOC_ADE_DMA_SEC_CFG_rd_dma_ch1_sec_START    (0)
#define SOC_ADE_DMA_SEC_CFG_rd_dma_ch1_sec_END      (0)
#define SOC_ADE_DMA_SEC_CFG_rd_dma_ch2_sec_START    (1)
#define SOC_ADE_DMA_SEC_CFG_rd_dma_ch2_sec_END      (1)
#define SOC_ADE_DMA_SEC_CFG_rd_dma_ch3_sec_START    (2)
#define SOC_ADE_DMA_SEC_CFG_rd_dma_ch3_sec_END      (2)
#define SOC_ADE_DMA_SEC_CFG_rd_dma_ch4_sec_START    (3)
#define SOC_ADE_DMA_SEC_CFG_rd_dma_ch4_sec_END      (3)
#define SOC_ADE_DMA_SEC_CFG_rd_dma_ch5_sec_START    (4)
#define SOC_ADE_DMA_SEC_CFG_rd_dma_ch5_sec_END      (4)
#define SOC_ADE_DMA_SEC_CFG_rd_dma_ch6_sec_START    (5)
#define SOC_ADE_DMA_SEC_CFG_rd_dma_ch6_sec_END      (5)
#define SOC_ADE_DMA_SEC_CFG_rd_dma_disp_sec_START   (6)
#define SOC_ADE_DMA_SEC_CFG_rd_dma_disp_sec_END     (6)
#define SOC_ADE_DMA_SEC_CFG_rd_dma_cmdq1_sec_START  (7)
#define SOC_ADE_DMA_SEC_CFG_rd_dma_cmdq1_sec_END    (7)
#define SOC_ADE_DMA_SEC_CFG_rd_dma_cmdq2_sec_START  (8)
#define SOC_ADE_DMA_SEC_CFG_rd_dma_cmdq2_sec_END    (8)
#define SOC_ADE_DMA_SEC_CFG_wr_dma_ch1_sec_START    (10)
#define SOC_ADE_DMA_SEC_CFG_wr_dma_ch1_sec_END      (10)
#define SOC_ADE_DMA_SEC_CFG_wr_dma_ch2_sec_START    (11)
#define SOC_ADE_DMA_SEC_CFG_wr_dma_ch2_sec_END      (11)
#define SOC_ADE_DMA_SEC_CFG_wr_dma_ch3_sec_START    (12)
#define SOC_ADE_DMA_SEC_CFG_wr_dma_ch3_sec_END      (12)
#define SOC_ADE_DMA_SEC_CFG_wr_dma_cmdq_sec_START   (14)
#define SOC_ADE_DMA_SEC_CFG_wr_dma_cmdq_sec_END     (14)


/*****************************************************************************
 �ṹ��    : SOC_ADE_DMA_AXI_OSD_UNION
 �ṹ˵��  : DMA_AXI_OSD �Ĵ����ṹ���塣��ַƫ����:0x0058����ֵ:0x00BB00BB�����:32
 �Ĵ���˵��: DMA AXI�ӿ�Outstanding���üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ade_axi0_rd_os : 4;  /* bit[0-3]  : AXI0�ӿڶ�Outstanding����ȣ����ֵΪ11����������Ϊ0 */
        unsigned int  ade_axi0_wr_os : 4;  /* bit[4-7]  : AXI0�ӿ�дOutstanding����ȣ����ֵΪ11����������Ϊ0 */
        unsigned int  reserved_0     : 8;  /* bit[8-15] : ������ */
        unsigned int  ade_axi1_rd_os : 4;  /* bit[16-19]: AXI1�ӿڶ�Outstanding����ȣ����ֵΪ11����������Ϊ0 */
        unsigned int  ade_axi1_wr_os : 4;  /* bit[20-23]: AXI1�ӿ�дOutstanding����ȣ����ֵΪ11����������Ϊ0 */
        unsigned int  reserved_1     : 8;  /* bit[24-31]: ������ */
    } reg;
} SOC_ADE_DMA_AXI_OSD_UNION;
#endif
#define SOC_ADE_DMA_AXI_OSD_ade_axi0_rd_os_START  (0)
#define SOC_ADE_DMA_AXI_OSD_ade_axi0_rd_os_END    (3)
#define SOC_ADE_DMA_AXI_OSD_ade_axi0_wr_os_START  (4)
#define SOC_ADE_DMA_AXI_OSD_ade_axi0_wr_os_END    (7)
#define SOC_ADE_DMA_AXI_OSD_ade_axi1_rd_os_START  (16)
#define SOC_ADE_DMA_AXI_OSD_ade_axi1_rd_os_END    (19)
#define SOC_ADE_DMA_AXI_OSD_ade_axi1_wr_os_START  (20)
#define SOC_ADE_DMA_AXI_OSD_ade_axi1_wr_os_END    (23)


/*****************************************************************************
 �ṹ��    : SOC_ADE_SOFT_RST0_UNION
 �ṹ˵��  : SOFT_RST0 �Ĵ����ṹ���塣��ַƫ����:0x0070����ֵ:0x00000000�����:32
 �Ĵ���˵��: ��ģ����λ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ch1_rdma_srst   : 1;  /* bit[0] : ��ģ����λ��д0��Ч��д1������λ�����Զ����㡣 */
        unsigned int  ch2_rdma_srst   : 1;  /* bit[1] : ��ģ����λ��д0��Ч��д1������λ�����Զ����㡣 */
        unsigned int  ch3_rdma_srst   : 1;  /* bit[2] : ��ģ����λ��д0��Ч��д1������λ�����Զ����㡣 */
        unsigned int  ch4_rdma_srst   : 1;  /* bit[3] : ��ģ����λ��д0��Ч��д1������λ�����Զ����㡣 */
        unsigned int  ch5_rdma_srst   : 1;  /* bit[4] : ��ģ����λ��д0��Ч��д1������λ�����Զ����㡣 */
        unsigned int  ch6_rdma_srst   : 1;  /* bit[5] : ��ģ����λ��д0��Ч��д1������λ�����Զ����㡣 */
        unsigned int  disp_rdma_srst  : 1;  /* bit[6] : ��ģ����λ��д0��Ч��д1������λ�����Զ����㡣 */
        unsigned int  cmdq1_rdma_srst : 1;  /* bit[7] : ��ģ����λ��д0��Ч��д1������λ�����Զ����㡣 */
        unsigned int  cmdq2_rdma_srst : 1;  /* bit[8] : ��ģ����λ��д0��Ч��д1������λ�����Զ����㡣 */
        unsigned int  reserved_0      : 1;  /* bit[9] : ������ */
        unsigned int  ch1_wdma_srst   : 1;  /* bit[10]: ��ģ����λ��д0��Ч��д1������λ�����Զ����㡣 */
        unsigned int  ch2_wdma_srst   : 1;  /* bit[11]: ��ģ����λ��д0��Ч��д1������λ�����Զ����㡣 */
        unsigned int  ch3_wdma_srst   : 1;  /* bit[12]: ��ģ����λ��д0��Ч��д1������λ�����Զ����㡣 */
        unsigned int  reserved_1      : 1;  /* bit[13]: ������ */
        unsigned int  cmdq_wdma_srst  : 1;  /* bit[14]: ��ģ����λ��д0��Ч��д1������λ�����Զ����㡣 */
        unsigned int  clip1_srst      : 1;  /* bit[15]: ��ģ����λ��д0��Ч��д1������λ�����Զ����㡣 */
        unsigned int  clip2_srst      : 1;  /* bit[16]: ��ģ����λ��д0��Ч��д1������λ�����Զ����㡣 */
        unsigned int  clip3_srst      : 1;  /* bit[17]: ��ģ����λ��д0��Ч��д1������λ�����Զ����㡣 */
        unsigned int  clip4_srst      : 1;  /* bit[18]: ��ģ����λ��д0��Ч��д1������λ�����Զ����㡣 */
        unsigned int  clip5_srst      : 1;  /* bit[19]: ��ģ����λ��д0��Ч��д1������λ�����Զ����㡣 */
        unsigned int  clip6_srst      : 1;  /* bit[20]: ��ģ����λ��д0��Ч��д1������λ�����Զ����㡣 */
        unsigned int  scl1_srst       : 1;  /* bit[21]: ��ģ����λ��д0��Ч��д1������λ�����Զ����㡣 */
        unsigned int  scl2_srst       : 1;  /* bit[22]: ��ģ����λ��д0��Ч��д1������λ�����Զ����㡣 */
        unsigned int  scl3_srst       : 1;  /* bit[23]: ��ģ����λ��д0��Ч��д1������λ�����Զ����㡣 */
        unsigned int  ctran1_srst     : 1;  /* bit[24]: ��ģ����λ��д0��Ч��д1������λ�����Զ����㡣 */
        unsigned int  ctran2_srst     : 1;  /* bit[25]: ��ģ����λ��д0��Ч��д1������λ�����Զ����㡣 */
        unsigned int  ctran3_srst     : 1;  /* bit[26]: ��ģ����λ��д0��Ч��д1������λ�����Զ����㡣 */
        unsigned int  ctran4_srst     : 1;  /* bit[27]: ��ģ����λ��д0��Ч��д1������λ�����Զ����㡣 */
        unsigned int  ctran5_srst     : 1;  /* bit[28]: ��ģ����λ��д0��Ч��д1������λ�����Զ����㡣 */
        unsigned int  ctran6_srst     : 1;  /* bit[29]: ��ģ����λ��д0��Ч��д1������λ�����Զ����㡣 */
        unsigned int  rot_srst        : 1;  /* bit[30]: ��ģ����λ��д0��Ч��д1������λ�����Զ����㡣 */
        unsigned int  reserved_2      : 1;  /* bit[31]: ������ */
    } reg;
} SOC_ADE_SOFT_RST0_UNION;
#endif
#define SOC_ADE_SOFT_RST0_ch1_rdma_srst_START    (0)
#define SOC_ADE_SOFT_RST0_ch1_rdma_srst_END      (0)
#define SOC_ADE_SOFT_RST0_ch2_rdma_srst_START    (1)
#define SOC_ADE_SOFT_RST0_ch2_rdma_srst_END      (1)
#define SOC_ADE_SOFT_RST0_ch3_rdma_srst_START    (2)
#define SOC_ADE_SOFT_RST0_ch3_rdma_srst_END      (2)
#define SOC_ADE_SOFT_RST0_ch4_rdma_srst_START    (3)
#define SOC_ADE_SOFT_RST0_ch4_rdma_srst_END      (3)
#define SOC_ADE_SOFT_RST0_ch5_rdma_srst_START    (4)
#define SOC_ADE_SOFT_RST0_ch5_rdma_srst_END      (4)
#define SOC_ADE_SOFT_RST0_ch6_rdma_srst_START    (5)
#define SOC_ADE_SOFT_RST0_ch6_rdma_srst_END      (5)
#define SOC_ADE_SOFT_RST0_disp_rdma_srst_START   (6)
#define SOC_ADE_SOFT_RST0_disp_rdma_srst_END     (6)
#define SOC_ADE_SOFT_RST0_cmdq1_rdma_srst_START  (7)
#define SOC_ADE_SOFT_RST0_cmdq1_rdma_srst_END    (7)
#define SOC_ADE_SOFT_RST0_cmdq2_rdma_srst_START  (8)
#define SOC_ADE_SOFT_RST0_cmdq2_rdma_srst_END    (8)
#define SOC_ADE_SOFT_RST0_ch1_wdma_srst_START    (10)
#define SOC_ADE_SOFT_RST0_ch1_wdma_srst_END      (10)
#define SOC_ADE_SOFT_RST0_ch2_wdma_srst_START    (11)
#define SOC_ADE_SOFT_RST0_ch2_wdma_srst_END      (11)
#define SOC_ADE_SOFT_RST0_ch3_wdma_srst_START    (12)
#define SOC_ADE_SOFT_RST0_ch3_wdma_srst_END      (12)
#define SOC_ADE_SOFT_RST0_cmdq_wdma_srst_START   (14)
#define SOC_ADE_SOFT_RST0_cmdq_wdma_srst_END     (14)
#define SOC_ADE_SOFT_RST0_clip1_srst_START       (15)
#define SOC_ADE_SOFT_RST0_clip1_srst_END         (15)
#define SOC_ADE_SOFT_RST0_clip2_srst_START       (16)
#define SOC_ADE_SOFT_RST0_clip2_srst_END         (16)
#define SOC_ADE_SOFT_RST0_clip3_srst_START       (17)
#define SOC_ADE_SOFT_RST0_clip3_srst_END         (17)
#define SOC_ADE_SOFT_RST0_clip4_srst_START       (18)
#define SOC_ADE_SOFT_RST0_clip4_srst_END         (18)
#define SOC_ADE_SOFT_RST0_clip5_srst_START       (19)
#define SOC_ADE_SOFT_RST0_clip5_srst_END         (19)
#define SOC_ADE_SOFT_RST0_clip6_srst_START       (20)
#define SOC_ADE_SOFT_RST0_clip6_srst_END         (20)
#define SOC_ADE_SOFT_RST0_scl1_srst_START        (21)
#define SOC_ADE_SOFT_RST0_scl1_srst_END          (21)
#define SOC_ADE_SOFT_RST0_scl2_srst_START        (22)
#define SOC_ADE_SOFT_RST0_scl2_srst_END          (22)
#define SOC_ADE_SOFT_RST0_scl3_srst_START        (23)
#define SOC_ADE_SOFT_RST0_scl3_srst_END          (23)
#define SOC_ADE_SOFT_RST0_ctran1_srst_START      (24)
#define SOC_ADE_SOFT_RST0_ctran1_srst_END        (24)
#define SOC_ADE_SOFT_RST0_ctran2_srst_START      (25)
#define SOC_ADE_SOFT_RST0_ctran2_srst_END        (25)
#define SOC_ADE_SOFT_RST0_ctran3_srst_START      (26)
#define SOC_ADE_SOFT_RST0_ctran3_srst_END        (26)
#define SOC_ADE_SOFT_RST0_ctran4_srst_START      (27)
#define SOC_ADE_SOFT_RST0_ctran4_srst_END        (27)
#define SOC_ADE_SOFT_RST0_ctran5_srst_START      (28)
#define SOC_ADE_SOFT_RST0_ctran5_srst_END        (28)
#define SOC_ADE_SOFT_RST0_ctran6_srst_START      (29)
#define SOC_ADE_SOFT_RST0_ctran6_srst_END        (29)
#define SOC_ADE_SOFT_RST0_rot_srst_START         (30)
#define SOC_ADE_SOFT_RST0_rot_srst_END           (30)


/*****************************************************************************
 �ṹ��    : SOC_ADE_SOFT_RST1_UNION
 �ṹ˵��  : SOFT_RST1 �Ĵ����ṹ���塣��ַƫ����:0x0074����ֵ:0x00000000�����:32
 �Ĵ���˵��: ��ģ����λ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cmdq1_srst  : 1;  /* bit[0]   : ��ģ����λ��д0��Ч��д1������λ�����Զ����㡣 */
        unsigned int  cmdq2_srst  : 1;  /* bit[1]   : ��ģ����λ��д0��Ч��д1������λ�����Զ����㡣 */
        unsigned int  reserved_0  : 1;  /* bit[2]   : ������ */
        unsigned int  gamma_srst  : 1;  /* bit[3]   : ��ģ����λ��д0��Ч��д1������λ�����Զ����㡣 */
        unsigned int  dither_srst : 1;  /* bit[4]   : ��ģ����λ��д0��Ч��д1������λ�����Զ����㡣 */
        unsigned int  ovly1_srst  : 1;  /* bit[5]   : ��ģ����λ��д0��Ч��д1������λ�����Զ����㡣 */
        unsigned int  ovly2_srst  : 1;  /* bit[6]   : ��ģ����λ��д0��Ч��д1������λ�����Զ����㡣 */
        unsigned int  ovly3_srst  : 1;  /* bit[7]   : ��ģ����λ��д0��Ч��д1������λ�����Զ����㡣 */
        unsigned int  reserved_1  : 24; /* bit[8-31]: ������ */
    } reg;
} SOC_ADE_SOFT_RST1_UNION;
#endif
#define SOC_ADE_SOFT_RST1_cmdq1_srst_START   (0)
#define SOC_ADE_SOFT_RST1_cmdq1_srst_END     (0)
#define SOC_ADE_SOFT_RST1_cmdq2_srst_START   (1)
#define SOC_ADE_SOFT_RST1_cmdq2_srst_END     (1)
#define SOC_ADE_SOFT_RST1_gamma_srst_START   (3)
#define SOC_ADE_SOFT_RST1_gamma_srst_END     (3)
#define SOC_ADE_SOFT_RST1_dither_srst_START  (4)
#define SOC_ADE_SOFT_RST1_dither_srst_END    (4)
#define SOC_ADE_SOFT_RST1_ovly1_srst_START   (5)
#define SOC_ADE_SOFT_RST1_ovly1_srst_END     (5)
#define SOC_ADE_SOFT_RST1_ovly2_srst_START   (6)
#define SOC_ADE_SOFT_RST1_ovly2_srst_END     (6)
#define SOC_ADE_SOFT_RST1_ovly3_srst_START   (7)
#define SOC_ADE_SOFT_RST1_ovly3_srst_END     (7)


/*****************************************************************************
 �ṹ��    : SOC_ADE_SOFT_RST_SEL0_UNION
 �ṹ˵��  : SOFT_RST_SEL0 �Ĵ����ṹ���塣��ַƫ����:0x0078����ֵ:0x00000000�����:32
 �Ĵ���˵��: ��ģ����λԴѡ��Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ch1_rdma_srst_sel   : 1;  /* bit[0] : ��ģ����λԴѡ����Ҫ��frm_end_startѡ�����ʹ�ã�
                                                            0���������SOFT_RST�Ĵ�����Ӧ��bitλʱ������λ����ģ�鲻�����¿�ʼ������
                                                            1��Ӳ����Դͬ�������źŲ�����λ����ģ�鲻�����¿�ʼ������ */
        unsigned int  ch2_rdma_srst_sel   : 1;  /* bit[1] : ��ģ����λԴѡ����Ҫ��frm_end_startѡ�����ʹ�ã�
                                                            0���������SOFT_RST�Ĵ�����Ӧ��bitλʱ������λ����ģ�鲻�����¿�ʼ������
                                                            1��Ӳ����Դͬ�������źŲ�����λ����ģ�鲻�����¿�ʼ������ */
        unsigned int  ch3_rdma_srst_sel   : 1;  /* bit[2] : ��ģ����λԴѡ����Ҫ��frm_end_startѡ�����ʹ�ã�
                                                            0���������SOFT_RST�Ĵ�����Ӧ��bitλʱ������λ����ģ�鲻�����¿�ʼ������
                                                            1��Ӳ����Դͬ�������źŲ�����λ����ģ�鲻�����¿�ʼ������ */
        unsigned int  ch4_rdma_srst_sel   : 1;  /* bit[3] : ��ģ����λԴѡ����Ҫ��frm_end_startѡ�����ʹ�ã�
                                                            0���������SOFT_RST�Ĵ�����Ӧ��bitλʱ������λ����ģ�鲻�����¿�ʼ������
                                                            1��Ӳ����Դͬ�������źŲ�����λ����ģ�鲻�����¿�ʼ������ */
        unsigned int  ch5_rdma_srst_sel   : 1;  /* bit[4] : ��ģ����λԴѡ����Ҫ��frm_end_startѡ�����ʹ�ã�
                                                            0���������SOFT_RST�Ĵ�����Ӧ��bitλʱ������λ����ģ�鲻�����¿�ʼ������
                                                            1��Ӳ����Դͬ�������źŲ�����λ����ģ�鲻�����¿�ʼ������ */
        unsigned int  ch6_rdma_srst_sel   : 1;  /* bit[5] : ��ģ����λԴѡ����Ҫ��frm_end_startѡ�����ʹ�ã�
                                                            0���������SOFT_RST�Ĵ�����Ӧ��bitλʱ������λ����ģ�鲻�����¿�ʼ������
                                                            1��Ӳ����Դͬ�������źŲ�����λ����ģ�鲻�����¿�ʼ������ */
        unsigned int  disp_rdma_srst_sel  : 1;  /* bit[6] : ��ģ����λԴѡ����Ҫ��frm_end_startѡ�����ʹ�ã�
                                                            0���������SOFT_RST�Ĵ�����Ӧ��bitλʱ������λ����ģ�鲻�����¿�ʼ������
                                                            1��Ӳ����Դͬ�������źŲ�����λ����ģ�鲻�����¿�ʼ������ */
        unsigned int  cmdq1_rdma_srst_sel : 1;  /* bit[7] : ��ģ����λԴѡ����Ҫ��frm_end_startѡ�����ʹ�ã�
                                                            0���������SOFT_RST�Ĵ�����Ӧ��bitλʱ������λ����ģ�鲻�����¿�ʼ������
                                                            1��Ӳ����Դͬ�������źŲ�����λ����ģ�鲻�����¿�ʼ������ */
        unsigned int  cmdq2_rdma_srst_sel : 1;  /* bit[8] : ��ģ����λԴѡ����Ҫ��frm_end_startѡ�����ʹ�ã�
                                                            0���������SOFT_RST�Ĵ�����Ӧ��bitλʱ������λ����ģ�鲻�����¿�ʼ������
                                                            1��Ӳ����Դͬ�������źŲ�����λ����ģ�鲻�����¿�ʼ������ */
        unsigned int  reserved_0          : 1;  /* bit[9] : ������ */
        unsigned int  ch1_wdma_srst_sel   : 1;  /* bit[10]: ��ģ����λԴѡ����Ҫ��frm_end_startѡ�����ʹ�ã�
                                                            0���������SOFT_RST�Ĵ�����Ӧ��bitλʱ������λ����ģ�鲻�����¿�ʼ������
                                                            1��Ӳ����Դͬ�������źŲ�����λ����ģ�鲻�����¿�ʼ������ */
        unsigned int  ch2_wdma_srst_sel   : 1;  /* bit[11]: ��ģ����λԴѡ����Ҫ��frm_end_startѡ�����ʹ�ã�
                                                            0���������SOFT_RST�Ĵ�����Ӧ��bitλʱ������λ����ģ�鲻�����¿�ʼ������
                                                            1��Ӳ����Դͬ�������źŲ�����λ����ģ�鲻�����¿�ʼ������ */
        unsigned int  ch3_wdma_srst_sel   : 1;  /* bit[12]: ��ģ����λԴѡ����Ҫ��frm_end_startѡ�����ʹ�ã�
                                                            0���������SOFT_RST�Ĵ�����Ӧ��bitλʱ������λ����ģ�鲻�����¿�ʼ������
                                                            1��Ӳ����Դͬ�������źŲ�����λ����ģ�鲻�����¿�ʼ������ */
        unsigned int  reserved_1          : 1;  /* bit[13]: ������ */
        unsigned int  cmdq_wdma_srst_sel  : 1;  /* bit[14]: ��ģ����λԴѡ����Ҫ��frm_end_startѡ�����ʹ�ã�
                                                            0���������SOFT_RST�Ĵ�����Ӧ��bitλʱ������λ����ģ�鲻�����¿�ʼ������
                                                            1��Ӳ����Դͬ�������źŲ�����λ����ģ�鲻�����¿�ʼ������ */
        unsigned int  clip1_srst_sel      : 1;  /* bit[15]: ��ģ����λԴѡ����Ҫ��frm_end_startѡ�����ʹ�ã�
                                                            0���������SOFT_RST�Ĵ�����Ӧ��bitλʱ������λ����ģ�鲻�����¿�ʼ������
                                                            1��Ӳ����Դͬ�������źŲ�����λ����ģ�鲻�����¿�ʼ������ */
        unsigned int  clip2_srst_sel      : 1;  /* bit[16]: ��ģ����λԴѡ����Ҫ��frm_end_startѡ�����ʹ�ã�
                                                            0���������SOFT_RST�Ĵ�����Ӧ��bitλʱ������λ����ģ�鲻�����¿�ʼ������
                                                            1��Ӳ����Դͬ�������źŲ�����λ����ģ�鲻�����¿�ʼ������ */
        unsigned int  clip3_srst_sel      : 1;  /* bit[17]: ��ģ����λԴѡ����Ҫ��frm_end_startѡ�����ʹ�ã�
                                                            0���������SOFT_RST�Ĵ�����Ӧ��bitλʱ������λ����ģ�鲻�����¿�ʼ������
                                                            1��Ӳ����Դͬ�������źŲ�����λ����ģ�鲻�����¿�ʼ������ */
        unsigned int  clip4_srst_sel      : 1;  /* bit[18]: ��ģ����λԴѡ����Ҫ��frm_end_startѡ�����ʹ�ã�
                                                            0���������SOFT_RST�Ĵ�����Ӧ��bitλʱ������λ����ģ�鲻�����¿�ʼ������
                                                            1��Ӳ����Դͬ�������źŲ�����λ����ģ�鲻�����¿�ʼ������ */
        unsigned int  clip5_srst_sel      : 1;  /* bit[19]: ��ģ����λԴѡ����Ҫ��frm_end_startѡ�����ʹ�ã�
                                                            0���������SOFT_RST�Ĵ�����Ӧ��bitλʱ������λ����ģ�鲻�����¿�ʼ������
                                                            1��Ӳ����Դͬ�������źŲ�����λ����ģ�鲻�����¿�ʼ������ */
        unsigned int  clip6_srst_sel      : 1;  /* bit[20]: ��ģ����λԴѡ����Ҫ��frm_end_startѡ�����ʹ�ã�
                                                            0���������SOFT_RST�Ĵ�����Ӧ��bitλʱ������λ����ģ�鲻�����¿�ʼ������
                                                            1��Ӳ����Դͬ�������źŲ�����λ����ģ�鲻�����¿�ʼ������ */
        unsigned int  scl1_srst_sel       : 1;  /* bit[21]: ��ģ����λԴѡ����Ҫ��frm_end_startѡ�����ʹ�ã�
                                                            0���������SOFT_RST�Ĵ�����Ӧ��bitλʱ������λ����ģ�鲻�����¿�ʼ������
                                                            1��Ӳ����Դͬ�������źŲ�����λ����ģ�鲻�����¿�ʼ������ */
        unsigned int  scl2_srst_sel       : 1;  /* bit[22]: ��ģ����λԴѡ����Ҫ��frm_end_startѡ�����ʹ�ã�
                                                            0���������SOFT_RST�Ĵ�����Ӧ��bitλʱ������λ����ģ�鲻�����¿�ʼ������
                                                            1��Ӳ����Դͬ�������źŲ�����λ����ģ�鲻�����¿�ʼ������ */
        unsigned int  scl3_srst_sel       : 1;  /* bit[23]: ��ģ����λԴѡ����Ҫ��frm_end_startѡ�����ʹ�ã�
                                                            0���������SOFT_RST�Ĵ�����Ӧ��bitλʱ������λ����ģ�鲻�����¿�ʼ������
                                                            1��Ӳ����Դͬ�������źŲ�����λ����ģ�鲻�����¿�ʼ������ */
        unsigned int  ctran1_srst_sel     : 1;  /* bit[24]: ��ģ����λԴѡ����Ҫ��frm_end_startѡ�����ʹ�ã�
                                                            0���������SOFT_RST�Ĵ�����Ӧ��bitλʱ������λ����ģ�鲻�����¿�ʼ������
                                                            1��Ӳ����Դͬ�������źŲ�����λ����ģ�鲻�����¿�ʼ������ */
        unsigned int  ctran2_srst_sel     : 1;  /* bit[25]: ��ģ����λԴѡ����Ҫ��frm_end_startѡ�����ʹ�ã�
                                                            0���������SOFT_RST�Ĵ�����Ӧ��bitλʱ������λ����ģ�鲻�����¿�ʼ������
                                                            1��Ӳ����Դͬ�������źŲ�����λ����ģ�鲻�����¿�ʼ������ */
        unsigned int  ctran3_srst_sel     : 1;  /* bit[26]: ��ģ����λԴѡ����Ҫ��frm_end_startѡ�����ʹ�ã�
                                                            0���������SOFT_RST�Ĵ�����Ӧ��bitλʱ������λ����ģ�鲻�����¿�ʼ������
                                                            1��Ӳ����Դͬ�������źŲ�����λ����ģ�鲻�����¿�ʼ������ */
        unsigned int  ctran4_srst_sel     : 1;  /* bit[27]: ��ģ����λԴѡ����Ҫ��frm_end_startѡ�����ʹ�ã�
                                                            0���������SOFT_RST�Ĵ�����Ӧ��bitλʱ������λ����ģ�鲻�����¿�ʼ������
                                                            1��Ӳ����Դͬ�������źŲ�����λ����ģ�鲻�����¿�ʼ������ */
        unsigned int  ctran5_srst_sel     : 1;  /* bit[28]: ��ģ����λԴѡ����Ҫ��frm_end_startѡ�����ʹ�ã�
                                                            0���������SOFT_RST�Ĵ�����Ӧ��bitλʱ������λ����ģ�鲻�����¿�ʼ������
                                                            1��Ӳ����Դͬ�������źŲ�����λ����ģ�鲻�����¿�ʼ������ */
        unsigned int  ctran6_srst_sel     : 1;  /* bit[29]: ��ģ����λԴѡ����Ҫ��frm_end_startѡ�����ʹ�ã�
                                                            0���������SOFT_RST�Ĵ�����Ӧ��bitλʱ������λ����ģ�鲻�����¿�ʼ������
                                                            1��Ӳ����Դͬ�������źŲ�����λ����ģ�鲻�����¿�ʼ������ */
        unsigned int  rot_srst_sel        : 1;  /* bit[30]: ��ģ����λԴѡ����Ҫ��frm_end_startѡ�����ʹ�ã�
                                                            0���������SOFT_RST�Ĵ�����Ӧ��bitλʱ������λ����ģ�鲻�����¿�ʼ������
                                                            1��Ӳ����Դͬ�������źŲ�����λ����ģ�鲻�����¿�ʼ������ */
        unsigned int  reserved_2          : 1;  /* bit[31]: ������ */
    } reg;
} SOC_ADE_SOFT_RST_SEL0_UNION;
#endif
#define SOC_ADE_SOFT_RST_SEL0_ch1_rdma_srst_sel_START    (0)
#define SOC_ADE_SOFT_RST_SEL0_ch1_rdma_srst_sel_END      (0)
#define SOC_ADE_SOFT_RST_SEL0_ch2_rdma_srst_sel_START    (1)
#define SOC_ADE_SOFT_RST_SEL0_ch2_rdma_srst_sel_END      (1)
#define SOC_ADE_SOFT_RST_SEL0_ch3_rdma_srst_sel_START    (2)
#define SOC_ADE_SOFT_RST_SEL0_ch3_rdma_srst_sel_END      (2)
#define SOC_ADE_SOFT_RST_SEL0_ch4_rdma_srst_sel_START    (3)
#define SOC_ADE_SOFT_RST_SEL0_ch4_rdma_srst_sel_END      (3)
#define SOC_ADE_SOFT_RST_SEL0_ch5_rdma_srst_sel_START    (4)
#define SOC_ADE_SOFT_RST_SEL0_ch5_rdma_srst_sel_END      (4)
#define SOC_ADE_SOFT_RST_SEL0_ch6_rdma_srst_sel_START    (5)
#define SOC_ADE_SOFT_RST_SEL0_ch6_rdma_srst_sel_END      (5)
#define SOC_ADE_SOFT_RST_SEL0_disp_rdma_srst_sel_START   (6)
#define SOC_ADE_SOFT_RST_SEL0_disp_rdma_srst_sel_END     (6)
#define SOC_ADE_SOFT_RST_SEL0_cmdq1_rdma_srst_sel_START  (7)
#define SOC_ADE_SOFT_RST_SEL0_cmdq1_rdma_srst_sel_END    (7)
#define SOC_ADE_SOFT_RST_SEL0_cmdq2_rdma_srst_sel_START  (8)
#define SOC_ADE_SOFT_RST_SEL0_cmdq2_rdma_srst_sel_END    (8)
#define SOC_ADE_SOFT_RST_SEL0_ch1_wdma_srst_sel_START    (10)
#define SOC_ADE_SOFT_RST_SEL0_ch1_wdma_srst_sel_END      (10)
#define SOC_ADE_SOFT_RST_SEL0_ch2_wdma_srst_sel_START    (11)
#define SOC_ADE_SOFT_RST_SEL0_ch2_wdma_srst_sel_END      (11)
#define SOC_ADE_SOFT_RST_SEL0_ch3_wdma_srst_sel_START    (12)
#define SOC_ADE_SOFT_RST_SEL0_ch3_wdma_srst_sel_END      (12)
#define SOC_ADE_SOFT_RST_SEL0_cmdq_wdma_srst_sel_START   (14)
#define SOC_ADE_SOFT_RST_SEL0_cmdq_wdma_srst_sel_END     (14)
#define SOC_ADE_SOFT_RST_SEL0_clip1_srst_sel_START       (15)
#define SOC_ADE_SOFT_RST_SEL0_clip1_srst_sel_END         (15)
#define SOC_ADE_SOFT_RST_SEL0_clip2_srst_sel_START       (16)
#define SOC_ADE_SOFT_RST_SEL0_clip2_srst_sel_END         (16)
#define SOC_ADE_SOFT_RST_SEL0_clip3_srst_sel_START       (17)
#define SOC_ADE_SOFT_RST_SEL0_clip3_srst_sel_END         (17)
#define SOC_ADE_SOFT_RST_SEL0_clip4_srst_sel_START       (18)
#define SOC_ADE_SOFT_RST_SEL0_clip4_srst_sel_END         (18)
#define SOC_ADE_SOFT_RST_SEL0_clip5_srst_sel_START       (19)
#define SOC_ADE_SOFT_RST_SEL0_clip5_srst_sel_END         (19)
#define SOC_ADE_SOFT_RST_SEL0_clip6_srst_sel_START       (20)
#define SOC_ADE_SOFT_RST_SEL0_clip6_srst_sel_END         (20)
#define SOC_ADE_SOFT_RST_SEL0_scl1_srst_sel_START        (21)
#define SOC_ADE_SOFT_RST_SEL0_scl1_srst_sel_END          (21)
#define SOC_ADE_SOFT_RST_SEL0_scl2_srst_sel_START        (22)
#define SOC_ADE_SOFT_RST_SEL0_scl2_srst_sel_END          (22)
#define SOC_ADE_SOFT_RST_SEL0_scl3_srst_sel_START        (23)
#define SOC_ADE_SOFT_RST_SEL0_scl3_srst_sel_END          (23)
#define SOC_ADE_SOFT_RST_SEL0_ctran1_srst_sel_START      (24)
#define SOC_ADE_SOFT_RST_SEL0_ctran1_srst_sel_END        (24)
#define SOC_ADE_SOFT_RST_SEL0_ctran2_srst_sel_START      (25)
#define SOC_ADE_SOFT_RST_SEL0_ctran2_srst_sel_END        (25)
#define SOC_ADE_SOFT_RST_SEL0_ctran3_srst_sel_START      (26)
#define SOC_ADE_SOFT_RST_SEL0_ctran3_srst_sel_END        (26)
#define SOC_ADE_SOFT_RST_SEL0_ctran4_srst_sel_START      (27)
#define SOC_ADE_SOFT_RST_SEL0_ctran4_srst_sel_END        (27)
#define SOC_ADE_SOFT_RST_SEL0_ctran5_srst_sel_START      (28)
#define SOC_ADE_SOFT_RST_SEL0_ctran5_srst_sel_END        (28)
#define SOC_ADE_SOFT_RST_SEL0_ctran6_srst_sel_START      (29)
#define SOC_ADE_SOFT_RST_SEL0_ctran6_srst_sel_END        (29)
#define SOC_ADE_SOFT_RST_SEL0_rot_srst_sel_START         (30)
#define SOC_ADE_SOFT_RST_SEL0_rot_srst_sel_END           (30)


/*****************************************************************************
 �ṹ��    : SOC_ADE_SOFT_RST_SEL1_UNION
 �ṹ˵��  : SOFT_RST_SEL1 �Ĵ����ṹ���塣��ַƫ����:0x007C����ֵ:0x00000018�����:32
 �Ĵ���˵��: ��ģ����λԴѡ��Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cmdq1_srst_sel  : 1;  /* bit[0]   : ��ģ����λԴѡ����Ҫ��frm_end_startѡ�����ʹ�ã�
                                                          0���������SOFT_RST�Ĵ�����Ӧ��bitλʱ������λ����ģ�鲻�����¿�ʼ������
                                                          1��Ӳ����Դͬ�������źŲ�����λ����ģ�鲻�����¿�ʼ������ */
        unsigned int  cmdq2_srst_sel  : 1;  /* bit[1]   : ��ģ����λԴѡ����Ҫ��frm_end_startѡ�����ʹ�ã�
                                                          0���������SOFT_RST�Ĵ�����Ӧ��bitλʱ������λ����ģ�鲻�����¿�ʼ������
                                                          1��Ӳ����Դͬ�������źŲ�����λ����ģ�鲻�����¿�ʼ������ */
        unsigned int  reserved_0      : 1;  /* bit[2]   : ������ */
        unsigned int  gamma_srst_sel  : 1;  /* bit[3]   : ��ģ����λԴѡ����Ҫ��frm_end_startѡ�����ʹ�ã�
                                                          0���������SOFT_RST�Ĵ�����Ӧ��bitλʱ������λ����ģ�鲻�����¿�ʼ������
                                                          1��Ӳ����Դͬ�������źŲ�����λ����ģ�鲻�����¿�ʼ������ */
        unsigned int  dither_srst_sel : 1;  /* bit[4]   : ��ģ����λԴѡ����Ҫ��frm_end_startѡ�����ʹ�ã�
                                                          0���������SOFT_RST�Ĵ�����Ӧ��bitλʱ������λ����ģ�鲻�����¿�ʼ������
                                                          1��Ӳ����Դͬ�������źŲ�����λ����ģ�鲻�����¿�ʼ������ */
        unsigned int  ovly1_srst_sel  : 1;  /* bit[5]   : ��ģ����λԴѡ����Ҫ��frm_end_startѡ�����ʹ�ã�
                                                          0���������SOFT_RST�Ĵ�����Ӧ��bitλʱ������λ����ģ�鲻�����¿�ʼ������
                                                          1��Ӳ����Դͬ�������źŲ�����λ����ģ�鲻�����¿�ʼ������ */
        unsigned int  ovly2_srst_sel  : 1;  /* bit[6]   : ��ģ����λԴѡ����Ҫ��frm_end_startѡ�����ʹ�ã�
                                                          0���������SOFT_RST�Ĵ�����Ӧ��bitλʱ������λ����ģ�鲻�����¿�ʼ������
                                                          1��Ӳ����Դͬ�������źŲ�����λ����ģ�鲻�����¿�ʼ������ */
        unsigned int  ovly3_srst_sel  : 1;  /* bit[7]   : ��ģ����λԴѡ����Ҫ��frm_end_startѡ�����ʹ�ã�
                                                          0���������SOFT_RST�Ĵ�����Ӧ��bitλʱ������λ����ģ�鲻�����¿�ʼ������
                                                          1��Ӳ����Դͬ�������źŲ�����λ����ģ�鲻�����¿�ʼ������ */
        unsigned int  reserved_1      : 24; /* bit[8-31]: ������ */
    } reg;
} SOC_ADE_SOFT_RST_SEL1_UNION;
#endif
#define SOC_ADE_SOFT_RST_SEL1_cmdq1_srst_sel_START   (0)
#define SOC_ADE_SOFT_RST_SEL1_cmdq1_srst_sel_END     (0)
#define SOC_ADE_SOFT_RST_SEL1_cmdq2_srst_sel_START   (1)
#define SOC_ADE_SOFT_RST_SEL1_cmdq2_srst_sel_END     (1)
#define SOC_ADE_SOFT_RST_SEL1_gamma_srst_sel_START   (3)
#define SOC_ADE_SOFT_RST_SEL1_gamma_srst_sel_END     (3)
#define SOC_ADE_SOFT_RST_SEL1_dither_srst_sel_START  (4)
#define SOC_ADE_SOFT_RST_SEL1_dither_srst_sel_END    (4)
#define SOC_ADE_SOFT_RST_SEL1_ovly1_srst_sel_START   (5)
#define SOC_ADE_SOFT_RST_SEL1_ovly1_srst_sel_END     (5)
#define SOC_ADE_SOFT_RST_SEL1_ovly2_srst_sel_START   (6)
#define SOC_ADE_SOFT_RST_SEL1_ovly2_srst_sel_END     (6)
#define SOC_ADE_SOFT_RST_SEL1_ovly3_srst_sel_START   (7)
#define SOC_ADE_SOFT_RST_SEL1_ovly3_srst_sel_END     (7)


/*****************************************************************************
 �ṹ��    : SOC_ADE_STAT0_UNION
 �ṹ˵��  : STAT0 �Ĵ����ṹ���塣��ַƫ����:0x0080����ֵ:0x00000000�����:32
 �Ĵ���˵��: ��ģ�鹤��״̬�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ch1_rdma_status   : 1;  /* bit[0] : ��ģ�鹤��״̬��
                                                          0�����У�
                                                          1�������� */
        unsigned int  ch2_rdma_status   : 1;  /* bit[1] : ��ģ�鹤��״̬��
                                                          0�����У�
                                                          1�������� */
        unsigned int  ch3_rdma_status   : 1;  /* bit[2] : ��ģ�鹤��״̬��
                                                          0�����У�
                                                          1�������� */
        unsigned int  ch4_rdma_status   : 1;  /* bit[3] : ��ģ�鹤��״̬��
                                                          0�����У�
                                                          1�������� */
        unsigned int  ch5_rdma_status   : 1;  /* bit[4] : ��ģ�鹤��״̬��
                                                          0�����У�
                                                          1�������� */
        unsigned int  ch6_rdma_status   : 1;  /* bit[5] : ��ģ�鹤��״̬��
                                                          0�����У�
                                                          1�������� */
        unsigned int  disp_rdma_status  : 1;  /* bit[6] : ��ģ�鹤��״̬��
                                                          0�����У�
                                                          1�������� */
        unsigned int  cmdq1_rdma_status : 1;  /* bit[7] : ��ģ�鹤��״̬��
                                                          0�����У�
                                                          1�������� */
        unsigned int  cmdq2_rdma_status : 1;  /* bit[8] : ��ģ�鹤��״̬��
                                                          0�����У�
                                                          1�������� */
        unsigned int  reserved_0        : 1;  /* bit[9] : ������ */
        unsigned int  ch1_wdma_status   : 1;  /* bit[10]: ��ģ�鹤��״̬��
                                                          0�����У�
                                                          1�������� */
        unsigned int  ch2_wdma_status   : 1;  /* bit[11]: ��ģ�鹤��״̬��
                                                          0�����У�
                                                          1�������� */
        unsigned int  ch3_wdma_status   : 1;  /* bit[12]: ��ģ�鹤��״̬��
                                                          0�����У�
                                                          1�������� */
        unsigned int  reserved_1        : 1;  /* bit[13]: ������ */
        unsigned int  cmdq_wdma_status  : 1;  /* bit[14]: ��ģ�鹤��״̬��
                                                          0�����У�
                                                          1�������� */
        unsigned int  clip1_status      : 1;  /* bit[15]: ��ģ�鹤��״̬��
                                                          0�����У�
                                                          1�������� */
        unsigned int  clip2_status      : 1;  /* bit[16]: ��ģ�鹤��״̬��
                                                          0�����У�
                                                          1�������� */
        unsigned int  clip3_status      : 1;  /* bit[17]: ��ģ�鹤��״̬��
                                                          0�����У�
                                                          1�������� */
        unsigned int  clip4_status      : 1;  /* bit[18]: ��ģ�鹤��״̬��
                                                          0�����У�
                                                          1�������� */
        unsigned int  clip5_status      : 1;  /* bit[19]: ��ģ�鹤��״̬��
                                                          0�����У�
                                                          1�������� */
        unsigned int  clip6_status      : 1;  /* bit[20]: ��ģ�鹤��״̬��
                                                          0�����У�
                                                          1�������� */
        unsigned int  scl1_status       : 1;  /* bit[21]: ��ģ�鹤��״̬��
                                                          0�����У�
                                                          1�������� */
        unsigned int  scl2_status       : 1;  /* bit[22]: ��ģ�鹤��״̬��
                                                          0�����У�
                                                          1�������� */
        unsigned int  scl3_status       : 1;  /* bit[23]: ��ģ�鹤��״̬��
                                                          0�����У�
                                                          1�������� */
        unsigned int  ctran1_status     : 1;  /* bit[24]: ��ģ�鹤��״̬��
                                                          0�����У�
                                                          1�������� */
        unsigned int  ctran2_status     : 1;  /* bit[25]: ��ģ�鹤��״̬��
                                                          0�����У�
                                                          1�������� */
        unsigned int  ctran3_status     : 1;  /* bit[26]: ��ģ�鹤��״̬��
                                                          0�����У�
                                                          1�������� */
        unsigned int  ctran4_status     : 1;  /* bit[27]: ��ģ�鹤��״̬��
                                                          0�����У�
                                                          1�������� */
        unsigned int  ctran5_status     : 1;  /* bit[28]: ��ģ�鹤��״̬��
                                                          0�����У�
                                                          1�������� */
        unsigned int  ctran6_status     : 1;  /* bit[29]: ��ģ�鹤��״̬��
                                                          0�����У�
                                                          1�������� */
        unsigned int  rot_status        : 1;  /* bit[30]: ��ģ�鹤��״̬��
                                                          0�����У�
                                                          1�������� */
        unsigned int  reserved_2        : 1;  /* bit[31]: ������ */
    } reg;
} SOC_ADE_STAT0_UNION;
#endif
#define SOC_ADE_STAT0_ch1_rdma_status_START    (0)
#define SOC_ADE_STAT0_ch1_rdma_status_END      (0)
#define SOC_ADE_STAT0_ch2_rdma_status_START    (1)
#define SOC_ADE_STAT0_ch2_rdma_status_END      (1)
#define SOC_ADE_STAT0_ch3_rdma_status_START    (2)
#define SOC_ADE_STAT0_ch3_rdma_status_END      (2)
#define SOC_ADE_STAT0_ch4_rdma_status_START    (3)
#define SOC_ADE_STAT0_ch4_rdma_status_END      (3)
#define SOC_ADE_STAT0_ch5_rdma_status_START    (4)
#define SOC_ADE_STAT0_ch5_rdma_status_END      (4)
#define SOC_ADE_STAT0_ch6_rdma_status_START    (5)
#define SOC_ADE_STAT0_ch6_rdma_status_END      (5)
#define SOC_ADE_STAT0_disp_rdma_status_START   (6)
#define SOC_ADE_STAT0_disp_rdma_status_END     (6)
#define SOC_ADE_STAT0_cmdq1_rdma_status_START  (7)
#define SOC_ADE_STAT0_cmdq1_rdma_status_END    (7)
#define SOC_ADE_STAT0_cmdq2_rdma_status_START  (8)
#define SOC_ADE_STAT0_cmdq2_rdma_status_END    (8)
#define SOC_ADE_STAT0_ch1_wdma_status_START    (10)
#define SOC_ADE_STAT0_ch1_wdma_status_END      (10)
#define SOC_ADE_STAT0_ch2_wdma_status_START    (11)
#define SOC_ADE_STAT0_ch2_wdma_status_END      (11)
#define SOC_ADE_STAT0_ch3_wdma_status_START    (12)
#define SOC_ADE_STAT0_ch3_wdma_status_END      (12)
#define SOC_ADE_STAT0_cmdq_wdma_status_START   (14)
#define SOC_ADE_STAT0_cmdq_wdma_status_END     (14)
#define SOC_ADE_STAT0_clip1_status_START       (15)
#define SOC_ADE_STAT0_clip1_status_END         (15)
#define SOC_ADE_STAT0_clip2_status_START       (16)
#define SOC_ADE_STAT0_clip2_status_END         (16)
#define SOC_ADE_STAT0_clip3_status_START       (17)
#define SOC_ADE_STAT0_clip3_status_END         (17)
#define SOC_ADE_STAT0_clip4_status_START       (18)
#define SOC_ADE_STAT0_clip4_status_END         (18)
#define SOC_ADE_STAT0_clip5_status_START       (19)
#define SOC_ADE_STAT0_clip5_status_END         (19)
#define SOC_ADE_STAT0_clip6_status_START       (20)
#define SOC_ADE_STAT0_clip6_status_END         (20)
#define SOC_ADE_STAT0_scl1_status_START        (21)
#define SOC_ADE_STAT0_scl1_status_END          (21)
#define SOC_ADE_STAT0_scl2_status_START        (22)
#define SOC_ADE_STAT0_scl2_status_END          (22)
#define SOC_ADE_STAT0_scl3_status_START        (23)
#define SOC_ADE_STAT0_scl3_status_END          (23)
#define SOC_ADE_STAT0_ctran1_status_START      (24)
#define SOC_ADE_STAT0_ctran1_status_END        (24)
#define SOC_ADE_STAT0_ctran2_status_START      (25)
#define SOC_ADE_STAT0_ctran2_status_END        (25)
#define SOC_ADE_STAT0_ctran3_status_START      (26)
#define SOC_ADE_STAT0_ctran3_status_END        (26)
#define SOC_ADE_STAT0_ctran4_status_START      (27)
#define SOC_ADE_STAT0_ctran4_status_END        (27)
#define SOC_ADE_STAT0_ctran5_status_START      (28)
#define SOC_ADE_STAT0_ctran5_status_END        (28)
#define SOC_ADE_STAT0_ctran6_status_START      (29)
#define SOC_ADE_STAT0_ctran6_status_END        (29)
#define SOC_ADE_STAT0_rot_status_START         (30)
#define SOC_ADE_STAT0_rot_status_END           (30)


/*****************************************************************************
 �ṹ��    : SOC_ADE_STAT1_UNION
 �ṹ˵��  : STAT1 �Ĵ����ṹ���塣��ַƫ����:0x0084����ֵ:0x00000000�����:32
 �Ĵ���˵��: ��ģ�鹤��״̬�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cmdq1_status     : 1;  /* bit[0]    : ��ģ�鹤��״̬��
                                                            0�����У�
                                                            1�������� */
        unsigned int  cmdq2_status     : 1;  /* bit[1]    : ��ģ�鹤��״̬��
                                                            0�����У�
                                                            1�������� */
        unsigned int  reserved_0       : 1;  /* bit[2]    : ������ */
        unsigned int  gamma_status     : 1;  /* bit[3]    : ��ģ�鹤��״̬��
                                                            0�����У�
                                                            1�������� */
        unsigned int  dither_status    : 1;  /* bit[4]    : ��ģ�鹤��״̬��
                                                            0�����У�
                                                            1�������� */
        unsigned int  ovly1_status     : 1;  /* bit[5]    : ��ģ�鹤��״̬��
                                                            0�����У�
                                                            1�������� */
        unsigned int  ovly2_status     : 1;  /* bit[6]    : ��ģ�鹤��״̬��
                                                            0�����У�
                                                            1�������� */
        unsigned int  ovly3_status     : 1;  /* bit[7]    : ��ģ�鹤��״̬��
                                                            0�����У�
                                                            1�������� */
        unsigned int  reserved_1       : 8;  /* bit[8-15] : ������ */
        unsigned int  dfs_buf_fill_lev : 13; /* bit[16-28]: DFS buffer���ˮ�� */
        unsigned int  reserved_2       : 3;  /* bit[29-31]: ������ */
    } reg;
} SOC_ADE_STAT1_UNION;
#endif
#define SOC_ADE_STAT1_cmdq1_status_START      (0)
#define SOC_ADE_STAT1_cmdq1_status_END        (0)
#define SOC_ADE_STAT1_cmdq2_status_START      (1)
#define SOC_ADE_STAT1_cmdq2_status_END        (1)
#define SOC_ADE_STAT1_gamma_status_START      (3)
#define SOC_ADE_STAT1_gamma_status_END        (3)
#define SOC_ADE_STAT1_dither_status_START     (4)
#define SOC_ADE_STAT1_dither_status_END       (4)
#define SOC_ADE_STAT1_ovly1_status_START      (5)
#define SOC_ADE_STAT1_ovly1_status_END        (5)
#define SOC_ADE_STAT1_ovly2_status_START      (6)
#define SOC_ADE_STAT1_ovly2_status_END        (6)
#define SOC_ADE_STAT1_ovly3_status_START      (7)
#define SOC_ADE_STAT1_ovly3_status_END        (7)
#define SOC_ADE_STAT1_dfs_buf_fill_lev_START  (16)
#define SOC_ADE_STAT1_dfs_buf_fill_lev_END    (28)


/*****************************************************************************
 �ṹ��    : SOC_ADE_DMA_ERR_STAT_UNION
 �ṹ˵��  : DMA_ERR_STAT �Ĵ����ṹ���塣��ַƫ����:0x0088����ֵ:0x00000000�����:32
 �Ĵ���˵��: DMA����״̬�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ch1_rdma_err_status   : 1;  /* bit[0]    : DMA����ָʾ���������
                                                                 0���޴���
                                                                 1��AXI�������� */
        unsigned int  ch2_rdma_err_status   : 1;  /* bit[1]    : DMA����ָʾ���������
                                                                 0���޴���
                                                                 1��AXI�������� */
        unsigned int  ch3_rdma_err_status   : 1;  /* bit[2]    : DMA����ָʾ���������
                                                                 0���޴���
                                                                 1��AXI�������� */
        unsigned int  ch4_rdma_err_status   : 1;  /* bit[3]    : DMA����ָʾ���������
                                                                 0���޴���
                                                                 1��AXI�������� */
        unsigned int  ch5_rdma_err_status   : 1;  /* bit[4]    : DMA����ָʾ���������
                                                                 0���޴���
                                                                 1��AXI�������� */
        unsigned int  ch6_rdma_err_status   : 1;  /* bit[5]    : DMA����ָʾ���������
                                                                 0���޴���
                                                                 1��AXI�������� */
        unsigned int  disp_rdma_err_status  : 1;  /* bit[6]    : DMA����ָʾ���������
                                                                 0���޴���
                                                                 1��AXI�������� */
        unsigned int  cmdq1_rdma_err_status : 1;  /* bit[7]    : DMA����ָʾ���������
                                                                 0���޴���
                                                                 1��AXI�������� */
        unsigned int  cmdq2_rdma_err_status : 1;  /* bit[8]    : DMA����ָʾ���������
                                                                 0���޴���
                                                                 1��AXI�������� */
        unsigned int  reserved_0            : 1;  /* bit[9]    : ������ */
        unsigned int  ch1_wdma_err_status   : 1;  /* bit[10]   : DMA����ָʾ���������
                                                                 0���޴���
                                                                 1��AXI�������� */
        unsigned int  ch2_wdma_err_status   : 1;  /* bit[11]   : DMA����ָʾ���������
                                                                 0���޴���
                                                                 1��AXI�������� */
        unsigned int  ch3_wdma_err_status   : 1;  /* bit[12]   : DMA����ָʾ���������
                                                                 0���޴���
                                                                 1��AXI�������� */
        unsigned int  reserved_1            : 1;  /* bit[13]   : ������ */
        unsigned int  cmdq_wdma_err_status  : 1;  /* bit[14]   : DMA����ָʾ���������
                                                                 0���޴���
                                                                 1��AXI�������� */
        unsigned int  reserved_2            : 17; /* bit[15-31]: ������ */
    } reg;
} SOC_ADE_DMA_ERR_STAT_UNION;
#endif
#define SOC_ADE_DMA_ERR_STAT_ch1_rdma_err_status_START    (0)
#define SOC_ADE_DMA_ERR_STAT_ch1_rdma_err_status_END      (0)
#define SOC_ADE_DMA_ERR_STAT_ch2_rdma_err_status_START    (1)
#define SOC_ADE_DMA_ERR_STAT_ch2_rdma_err_status_END      (1)
#define SOC_ADE_DMA_ERR_STAT_ch3_rdma_err_status_START    (2)
#define SOC_ADE_DMA_ERR_STAT_ch3_rdma_err_status_END      (2)
#define SOC_ADE_DMA_ERR_STAT_ch4_rdma_err_status_START    (3)
#define SOC_ADE_DMA_ERR_STAT_ch4_rdma_err_status_END      (3)
#define SOC_ADE_DMA_ERR_STAT_ch5_rdma_err_status_START    (4)
#define SOC_ADE_DMA_ERR_STAT_ch5_rdma_err_status_END      (4)
#define SOC_ADE_DMA_ERR_STAT_ch6_rdma_err_status_START    (5)
#define SOC_ADE_DMA_ERR_STAT_ch6_rdma_err_status_END      (5)
#define SOC_ADE_DMA_ERR_STAT_disp_rdma_err_status_START   (6)
#define SOC_ADE_DMA_ERR_STAT_disp_rdma_err_status_END     (6)
#define SOC_ADE_DMA_ERR_STAT_cmdq1_rdma_err_status_START  (7)
#define SOC_ADE_DMA_ERR_STAT_cmdq1_rdma_err_status_END    (7)
#define SOC_ADE_DMA_ERR_STAT_cmdq2_rdma_err_status_START  (8)
#define SOC_ADE_DMA_ERR_STAT_cmdq2_rdma_err_status_END    (8)
#define SOC_ADE_DMA_ERR_STAT_ch1_wdma_err_status_START    (10)
#define SOC_ADE_DMA_ERR_STAT_ch1_wdma_err_status_END      (10)
#define SOC_ADE_DMA_ERR_STAT_ch2_wdma_err_status_START    (11)
#define SOC_ADE_DMA_ERR_STAT_ch2_wdma_err_status_END      (11)
#define SOC_ADE_DMA_ERR_STAT_ch3_wdma_err_status_START    (12)
#define SOC_ADE_DMA_ERR_STAT_ch3_wdma_err_status_END      (12)
#define SOC_ADE_DMA_ERR_STAT_cmdq_wdma_err_status_START   (14)
#define SOC_ADE_DMA_ERR_STAT_cmdq_wdma_err_status_END     (14)


/*****************************************************************************
 �ṹ��    : SOC_ADE_CTRL1_UNION
 �ṹ˵��  : CTRL1 �Ĵ����ṹ���塣��ַƫ����:0x008C����ֵ:0x00000001�����:32
 �Ĵ���˵��: ADEȫ�ֿ��ƼĴ���1��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  auto_clk_gate_en : 1;  /* bit[0]   : ADEȫ���Զ�ʱ���ſ�ʹ�ܡ�
                                                           0�����ã�
                                                           1��ʹ�ܡ� */
        unsigned int  rot_buf_shr_out  : 1;  /* bit[1]   : ��תbuffer�ⲿ����ʹ�ܣ����ڿ���channel5����תbuffer�Ƿ����codec���������ʹ�ܣ���rd_ch5_nv��������Ϊ0��rot_buf_cfg��������Ϊ2��3��
                                                           0�����ã�
                                                           1��ʹ�ܡ� */
        unsigned int  reserved         : 30; /* bit[2-31]: ������ */
    } reg;
} SOC_ADE_CTRL1_UNION;
#endif
#define SOC_ADE_CTRL1_auto_clk_gate_en_START  (0)
#define SOC_ADE_CTRL1_auto_clk_gate_en_END    (0)
#define SOC_ADE_CTRL1_rot_buf_shr_out_START   (1)
#define SOC_ADE_CTRL1_rot_buf_shr_out_END     (1)


/*****************************************************************************
 �ṹ��    : SOC_ADE_SEC_CFG0_UNION
 �ṹ˵��  : SEC_CFG0 �Ĵ����ṹ���塣��ַƫ����:0x0090����ֵ:0x00000000�����:32
 �Ĵ���˵��: ADE��ȫ���üĴ���0���˼Ĵ������ڿ�����ģ��ļĴ����Ƿ�ȫ���䣬�Ĵ�������ֻ��ͨ����ȫ��ʽ���á�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ch1_rdma_sec   : 1;  /* bit[0] : ��ģ�鰲ȫ���ԣ�
                                                       0����ȫ/�ǰ�ȫ���䣻
                                                       1��ֻ�а�ȫ���䣻 */
        unsigned int  ch2_rdma_sec   : 1;  /* bit[1] : ��ģ�鰲ȫ���ԣ�
                                                       0����ȫ/�ǰ�ȫ���䣻
                                                       1��ֻ�а�ȫ���䣻 */
        unsigned int  ch3_rdma_sec   : 1;  /* bit[2] : ��ģ�鰲ȫ���ԣ�
                                                       0����ȫ/�ǰ�ȫ���䣻
                                                       1��ֻ�а�ȫ���䣻 */
        unsigned int  ch4_rdma_sec   : 1;  /* bit[3] : ��ģ�鰲ȫ���ԣ�
                                                       0����ȫ/�ǰ�ȫ���䣻
                                                       1��ֻ�а�ȫ���䣻 */
        unsigned int  ch5_rdma_sec   : 1;  /* bit[4] : ��ģ�鰲ȫ���ԣ�
                                                       0����ȫ/�ǰ�ȫ���䣻
                                                       1��ֻ�а�ȫ���䣻 */
        unsigned int  ch6_rdma_sec   : 1;  /* bit[5] : ��ģ�鰲ȫ���ԣ�
                                                       0����ȫ/�ǰ�ȫ���䣻
                                                       1��ֻ�а�ȫ���䣻 */
        unsigned int  disp_rdma_sec  : 1;  /* bit[6] : ��ģ�鰲ȫ���ԣ�
                                                       0����ȫ/�ǰ�ȫ���䣻
                                                       1��ֻ�а�ȫ���䣻 */
        unsigned int  cmdq1_rdma_sec : 1;  /* bit[7] : ��ģ�鰲ȫ���ԣ�
                                                       0����ȫ/�ǰ�ȫ���䣻
                                                       1��ֻ�а�ȫ���䣻 */
        unsigned int  cmdq2_rdma_sec : 1;  /* bit[8] : ��ģ�鰲ȫ���ԣ�
                                                       0����ȫ/�ǰ�ȫ���䣻
                                                       1��ֻ�а�ȫ���䣻 */
        unsigned int  reserved_0     : 1;  /* bit[9] : ������ */
        unsigned int  ch1_wdma_sec   : 1;  /* bit[10]: ��ģ�鰲ȫ���ԣ�
                                                       0����ȫ/�ǰ�ȫ���䣻
                                                       1��ֻ�а�ȫ���䣻 */
        unsigned int  ch2_wdma_sec   : 1;  /* bit[11]: ��ģ�鰲ȫ���ԣ�
                                                       0����ȫ/�ǰ�ȫ���䣻
                                                       1��ֻ�а�ȫ���䣻 */
        unsigned int  ch3_wdma_sec   : 1;  /* bit[12]: ��ģ�鰲ȫ���ԣ�
                                                       0����ȫ/�ǰ�ȫ���䣻
                                                       1��ֻ�а�ȫ���䣻 */
        unsigned int  reserved_1     : 1;  /* bit[13]: ������ */
        unsigned int  cmdq_wdma_sec  : 1;  /* bit[14]: ��ģ�鰲ȫ���ԣ�
                                                       0����ȫ/�ǰ�ȫ���䣻
                                                       1��ֻ�а�ȫ���䣻 */
        unsigned int  clip1_sec      : 1;  /* bit[15]: ��ģ�鰲ȫ���ԣ�
                                                       0����ȫ/�ǰ�ȫ���䣻
                                                       1��ֻ�а�ȫ���䣻 */
        unsigned int  clip2_sec      : 1;  /* bit[16]: ��ģ�鰲ȫ���ԣ�
                                                       0����ȫ/�ǰ�ȫ���䣻
                                                       1��ֻ�а�ȫ���䣻 */
        unsigned int  clip3_sec      : 1;  /* bit[17]: ��ģ�鰲ȫ���ԣ�
                                                       0����ȫ/�ǰ�ȫ���䣻
                                                       1��ֻ�а�ȫ���䣻 */
        unsigned int  clip4_sec      : 1;  /* bit[18]: ��ģ�鰲ȫ���ԣ�
                                                       0����ȫ/�ǰ�ȫ���䣻
                                                       1��ֻ�а�ȫ���䣻 */
        unsigned int  clip5_sec      : 1;  /* bit[19]: ��ģ�鰲ȫ���ԣ�
                                                       0����ȫ/�ǰ�ȫ���䣻
                                                       1��ֻ�а�ȫ���䣻 */
        unsigned int  clip6_sec      : 1;  /* bit[20]: ��ģ�鰲ȫ���ԣ�
                                                       0����ȫ/�ǰ�ȫ���䣻
                                                       1��ֻ�а�ȫ���䣻 */
        unsigned int  scl1_sec       : 1;  /* bit[21]: ��ģ�鰲ȫ���ԣ�
                                                       0����ȫ/�ǰ�ȫ���䣻
                                                       1��ֻ�а�ȫ���䣻 */
        unsigned int  scl2_sec       : 1;  /* bit[22]: ��ģ�鰲ȫ���ԣ�
                                                       0����ȫ/�ǰ�ȫ���䣻
                                                       1��ֻ�а�ȫ���䣻 */
        unsigned int  scl3_sec       : 1;  /* bit[23]: ��ģ�鰲ȫ���ԣ�
                                                       0����ȫ/�ǰ�ȫ���䣻
                                                       1��ֻ�а�ȫ���䣻 */
        unsigned int  ctran1_sec     : 1;  /* bit[24]: ��ģ�鰲ȫ���ԣ�
                                                       0����ȫ/�ǰ�ȫ���䣻
                                                       1��ֻ�а�ȫ���䣻 */
        unsigned int  ctran2_sec     : 1;  /* bit[25]: ��ģ�鰲ȫ���ԣ�
                                                       0����ȫ/�ǰ�ȫ���䣻
                                                       1��ֻ�а�ȫ���䣻 */
        unsigned int  ctran3_sec     : 1;  /* bit[26]: ��ģ�鰲ȫ���ԣ�
                                                       0����ȫ/�ǰ�ȫ���䣻
                                                       1��ֻ�а�ȫ���䣻 */
        unsigned int  ctran4_sec     : 1;  /* bit[27]: ��ģ�鰲ȫ���ԣ�
                                                       0����ȫ/�ǰ�ȫ���䣻
                                                       1��ֻ�а�ȫ���䣻 */
        unsigned int  ctran5_sec     : 1;  /* bit[28]: ��ģ�鰲ȫ���ԣ�
                                                       0����ȫ/�ǰ�ȫ���䣻
                                                       1��ֻ�а�ȫ���䣻 */
        unsigned int  ctran6_sec     : 1;  /* bit[29]: ��ģ�鰲ȫ���ԣ�
                                                       0����ȫ/�ǰ�ȫ���䣻
                                                       1��ֻ�а�ȫ���䣻 */
        unsigned int  rot_sec        : 1;  /* bit[30]: ��ģ�鰲ȫ���ԣ�
                                                       0����ȫ/�ǰ�ȫ���䣻
                                                       1��ֻ�а�ȫ���䣻 */
        unsigned int  reserved_2     : 1;  /* bit[31]: ������ */
    } reg;
} SOC_ADE_SEC_CFG0_UNION;
#endif
#define SOC_ADE_SEC_CFG0_ch1_rdma_sec_START    (0)
#define SOC_ADE_SEC_CFG0_ch1_rdma_sec_END      (0)
#define SOC_ADE_SEC_CFG0_ch2_rdma_sec_START    (1)
#define SOC_ADE_SEC_CFG0_ch2_rdma_sec_END      (1)
#define SOC_ADE_SEC_CFG0_ch3_rdma_sec_START    (2)
#define SOC_ADE_SEC_CFG0_ch3_rdma_sec_END      (2)
#define SOC_ADE_SEC_CFG0_ch4_rdma_sec_START    (3)
#define SOC_ADE_SEC_CFG0_ch4_rdma_sec_END      (3)
#define SOC_ADE_SEC_CFG0_ch5_rdma_sec_START    (4)
#define SOC_ADE_SEC_CFG0_ch5_rdma_sec_END      (4)
#define SOC_ADE_SEC_CFG0_ch6_rdma_sec_START    (5)
#define SOC_ADE_SEC_CFG0_ch6_rdma_sec_END      (5)
#define SOC_ADE_SEC_CFG0_disp_rdma_sec_START   (6)
#define SOC_ADE_SEC_CFG0_disp_rdma_sec_END     (6)
#define SOC_ADE_SEC_CFG0_cmdq1_rdma_sec_START  (7)
#define SOC_ADE_SEC_CFG0_cmdq1_rdma_sec_END    (7)
#define SOC_ADE_SEC_CFG0_cmdq2_rdma_sec_START  (8)
#define SOC_ADE_SEC_CFG0_cmdq2_rdma_sec_END    (8)
#define SOC_ADE_SEC_CFG0_ch1_wdma_sec_START    (10)
#define SOC_ADE_SEC_CFG0_ch1_wdma_sec_END      (10)
#define SOC_ADE_SEC_CFG0_ch2_wdma_sec_START    (11)
#define SOC_ADE_SEC_CFG0_ch2_wdma_sec_END      (11)
#define SOC_ADE_SEC_CFG0_ch3_wdma_sec_START    (12)
#define SOC_ADE_SEC_CFG0_ch3_wdma_sec_END      (12)
#define SOC_ADE_SEC_CFG0_cmdq_wdma_sec_START   (14)
#define SOC_ADE_SEC_CFG0_cmdq_wdma_sec_END     (14)
#define SOC_ADE_SEC_CFG0_clip1_sec_START       (15)
#define SOC_ADE_SEC_CFG0_clip1_sec_END         (15)
#define SOC_ADE_SEC_CFG0_clip2_sec_START       (16)
#define SOC_ADE_SEC_CFG0_clip2_sec_END         (16)
#define SOC_ADE_SEC_CFG0_clip3_sec_START       (17)
#define SOC_ADE_SEC_CFG0_clip3_sec_END         (17)
#define SOC_ADE_SEC_CFG0_clip4_sec_START       (18)
#define SOC_ADE_SEC_CFG0_clip4_sec_END         (18)
#define SOC_ADE_SEC_CFG0_clip5_sec_START       (19)
#define SOC_ADE_SEC_CFG0_clip5_sec_END         (19)
#define SOC_ADE_SEC_CFG0_clip6_sec_START       (20)
#define SOC_ADE_SEC_CFG0_clip6_sec_END         (20)
#define SOC_ADE_SEC_CFG0_scl1_sec_START        (21)
#define SOC_ADE_SEC_CFG0_scl1_sec_END          (21)
#define SOC_ADE_SEC_CFG0_scl2_sec_START        (22)
#define SOC_ADE_SEC_CFG0_scl2_sec_END          (22)
#define SOC_ADE_SEC_CFG0_scl3_sec_START        (23)
#define SOC_ADE_SEC_CFG0_scl3_sec_END          (23)
#define SOC_ADE_SEC_CFG0_ctran1_sec_START      (24)
#define SOC_ADE_SEC_CFG0_ctran1_sec_END        (24)
#define SOC_ADE_SEC_CFG0_ctran2_sec_START      (25)
#define SOC_ADE_SEC_CFG0_ctran2_sec_END        (25)
#define SOC_ADE_SEC_CFG0_ctran3_sec_START      (26)
#define SOC_ADE_SEC_CFG0_ctran3_sec_END        (26)
#define SOC_ADE_SEC_CFG0_ctran4_sec_START      (27)
#define SOC_ADE_SEC_CFG0_ctran4_sec_END        (27)
#define SOC_ADE_SEC_CFG0_ctran5_sec_START      (28)
#define SOC_ADE_SEC_CFG0_ctran5_sec_END        (28)
#define SOC_ADE_SEC_CFG0_ctran6_sec_START      (29)
#define SOC_ADE_SEC_CFG0_ctran6_sec_END        (29)
#define SOC_ADE_SEC_CFG0_rot_sec_START         (30)
#define SOC_ADE_SEC_CFG0_rot_sec_END           (30)


/*****************************************************************************
 �ṹ��    : SOC_ADE_SEC_CFG1_UNION
 �ṹ˵��  : SEC_CFG1 �Ĵ����ṹ���塣��ַƫ����:0x0094����ֵ:0x00000000�����:32
 �Ĵ���˵��: ADE��ȫ���üĴ���1���˼Ĵ������ڿ�����ģ��ļĴ����Ƿ�ȫ���䣬�Ĵ�������ֻ��ͨ����ȫ��ʽ���á�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cmdq1_sec  : 1;  /* bit[0]   : ��ģ�鰲ȫ���ԣ�ֻ���ư�ȫ�ж���ؼĴ�����
                                                     0����ȫ/�ǰ�ȫ���䣻
                                                     1��ֻ�а�ȫ���䣻 */
        unsigned int  cmdq2_sec  : 1;  /* bit[1]   : ��ģ�鰲ȫ���ԣ�
                                                     0����ȫ/�ǰ�ȫ���䣻
                                                     1��ֻ�а�ȫ���䣻 */
        unsigned int  reserved_0 : 1;  /* bit[2]   : ������ */
        unsigned int  gamma_sec  : 1;  /* bit[3]   : ��ģ�鰲ȫ���ԣ�
                                                     0����ȫ/�ǰ�ȫ���䣻
                                                     1��ֻ�а�ȫ���䣻 */
        unsigned int  dither_sec : 1;  /* bit[4]   : ��ģ�鰲ȫ���ԣ�
                                                     0����ȫ/�ǰ�ȫ���䣻
                                                     1��ֻ�а�ȫ���䣻 */
        unsigned int  ovly1_sec  : 1;  /* bit[5]   : ��ģ�鰲ȫ���ԣ�
                                                     0����ȫ/�ǰ�ȫ���䣻
                                                     1��ֻ�а�ȫ���䣻 */
        unsigned int  ovly2_sec  : 1;  /* bit[6]   : ��ģ�鰲ȫ���ԣ�
                                                     0����ȫ/�ǰ�ȫ���䣻
                                                     1��ֻ�а�ȫ���䣻 */
        unsigned int  ovly3_sec  : 1;  /* bit[7]   : ��ģ�鰲ȫ���ԣ�
                                                     0����ȫ/�ǰ�ȫ���䣻
                                                     1��ֻ�а�ȫ���䣻 */
        unsigned int  top_sec    : 1;  /* bit[8]   : ��ģ�鰲ȫ���ԣ�
                                                     0����ȫ/�ǰ�ȫ���䣻
                                                     1��ֻ�а�ȫ���䣻 */
        unsigned int  reserved_1 : 23; /* bit[9-31]: ������ */
    } reg;
} SOC_ADE_SEC_CFG1_UNION;
#endif
#define SOC_ADE_SEC_CFG1_cmdq1_sec_START   (0)
#define SOC_ADE_SEC_CFG1_cmdq1_sec_END     (0)
#define SOC_ADE_SEC_CFG1_cmdq2_sec_START   (1)
#define SOC_ADE_SEC_CFG1_cmdq2_sec_END     (1)
#define SOC_ADE_SEC_CFG1_gamma_sec_START   (3)
#define SOC_ADE_SEC_CFG1_gamma_sec_END     (3)
#define SOC_ADE_SEC_CFG1_dither_sec_START  (4)
#define SOC_ADE_SEC_CFG1_dither_sec_END    (4)
#define SOC_ADE_SEC_CFG1_ovly1_sec_START   (5)
#define SOC_ADE_SEC_CFG1_ovly1_sec_END     (5)
#define SOC_ADE_SEC_CFG1_ovly2_sec_START   (6)
#define SOC_ADE_SEC_CFG1_ovly2_sec_END     (6)
#define SOC_ADE_SEC_CFG1_ovly3_sec_START   (7)
#define SOC_ADE_SEC_CFG1_ovly3_sec_END     (7)
#define SOC_ADE_SEC_CFG1_top_sec_START     (8)
#define SOC_ADE_SEC_CFG1_top_sec_END       (8)


/*****************************************************************************
 �ṹ��    : SOC_ADE_OVLY_CTL_UNION
 �ṹ˵��  : OVLY_CTL �Ĵ����ṹ���塣��ַƫ����:0x0098����ֵ:0x22222222�����:32
 �Ĵ���˵��: OVLYͨ�����ƼĴ��������ھ�̬���üĴ�������ֹ��ADE���������ж�̬���á�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ch1_ovly_sel : 2;  /* bit[0-1]  : 2'b00:��ͨ���������κ�OVLY
                                                        2'b01:��ͨ������OVLY1
                                                        2'b10:��ͨ������OVLY2
                                                        2'b11:��ͨ������OVLY3 */
        unsigned int  reserved_0   : 2;  /* bit[2-3]  :  */
        unsigned int  ch2_ovly_sel : 2;  /* bit[4-5]  : 2'b00:��ͨ���������κ�OVLY
                                                        2'b01:��ͨ������OVLY1
                                                        2'b10:��ͨ������OVLY2
                                                        2'b11:��ͨ������OVLY3 */
        unsigned int  reserved_1   : 2;  /* bit[6-7]  :  */
        unsigned int  ch3_ovly_sel : 2;  /* bit[8-9]  : 2'b00:��ͨ���������κ�OVLY
                                                        2'b01:��ͨ������OVLY
                                                        2'b10:��ͨ������OVLY2
                                                        2'b11:��ͨ������OVLY3 */
        unsigned int  reserved_2   : 2;  /* bit[10-11]:  */
        unsigned int  ch4_ovly_sel : 2;  /* bit[12-13]: 2'b00:��ͨ���������κ�OVLY
                                                        2'b01:��ͨ������OVLY1
                                                        2'b10:��ͨ������OVLY2
                                                        2'b11:��ͨ������OVLY3 */
        unsigned int  reserved_3   : 2;  /* bit[14-15]:  */
        unsigned int  ch5_ovly_sel : 2;  /* bit[16-17]: 2'b00:��ͨ���������κ�OVLY
                                                        2'b01:��ͨ������OVLY1
                                                        2'b10:��ͨ������OVLY2
                                                        2'b11:��ͨ������OVLY3 */
        unsigned int  reserved_4   : 2;  /* bit[18-19]:  */
        unsigned int  ch6_ovly_sel : 2;  /* bit[20-21]: 2'b00:��ͨ���������κ�OVLY
                                                        2'b01:��ͨ������OVLY1
                                                        2'b10:��ͨ������OVLY2
                                                        2'b11:��ͨ������OVLY3 */
        unsigned int  reserved_5   : 2;  /* bit[22-23]:  */
        unsigned int  ch7_ovly_sel : 2;  /* bit[24-25]: 2'b00:��ͨ���������κ�OVLY
                                                        2'b01:��ͨ������OVLY1
                                                        2'b10:��ͨ������OVLY2
                                                        2'b11:��ͨ������OVLY3 */
        unsigned int  reserved_6   : 2;  /* bit[26-27]:  */
        unsigned int  ch8_ovly_sel : 2;  /* bit[28-29]: 2'b00:��ͨ���������κ�OVLY
                                                        2'b01:��ͨ������OVLY1
                                                        2'b10:��ͨ������OVLY2
                                                        2'b11:��ͨ������OVLY3 */
        unsigned int  reserved_7   : 2;  /* bit[30-31]: ������ */
    } reg;
} SOC_ADE_OVLY_CTL_UNION;
#endif
#define SOC_ADE_OVLY_CTL_ch1_ovly_sel_START  (0)
#define SOC_ADE_OVLY_CTL_ch1_ovly_sel_END    (1)
#define SOC_ADE_OVLY_CTL_ch2_ovly_sel_START  (4)
#define SOC_ADE_OVLY_CTL_ch2_ovly_sel_END    (5)
#define SOC_ADE_OVLY_CTL_ch3_ovly_sel_START  (8)
#define SOC_ADE_OVLY_CTL_ch3_ovly_sel_END    (9)
#define SOC_ADE_OVLY_CTL_ch4_ovly_sel_START  (12)
#define SOC_ADE_OVLY_CTL_ch4_ovly_sel_END    (13)
#define SOC_ADE_OVLY_CTL_ch5_ovly_sel_START  (16)
#define SOC_ADE_OVLY_CTL_ch5_ovly_sel_END    (17)
#define SOC_ADE_OVLY_CTL_ch6_ovly_sel_START  (20)
#define SOC_ADE_OVLY_CTL_ch6_ovly_sel_END    (21)
#define SOC_ADE_OVLY_CTL_ch7_ovly_sel_START  (24)
#define SOC_ADE_OVLY_CTL_ch7_ovly_sel_END    (25)
#define SOC_ADE_OVLY_CTL_ch8_ovly_sel_START  (28)
#define SOC_ADE_OVLY_CTL_ch8_ovly_sel_END    (29)


/*****************************************************************************
 �ṹ��    : SOC_ADE_AUTO_CLK_GT_EN0_UNION
 �ṹ˵��  : AUTO_CLK_GT_EN0 �Ĵ����ṹ���塣��ַƫ����:0x009C����ֵ:0x7FFFFFFF�����:32
 �Ĵ���˵��: ADE��ģ���Զ�ʱ���ſؿ��ƼĴ���0��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ch1_rdma_auto_clk_gt_en   : 1;  /* bit[0] : ��ģ���Զ�ʱ���ſ�ʹ�ܣ�ֻ��ȫ���Զ�ʱ���ſ�ʹ��ʱ����Ч��
                                                                  0���Զ�ʱ���ſؽ��ã�
                                                                  1���Զ�ʱ���ſ�ʹ�ܣ� */
        unsigned int  ch2_rdma_auto_clk_gt_en   : 1;  /* bit[1] : ��ģ���Զ�ʱ���ſ�ʹ�ܣ�ֻ��ȫ���Զ�ʱ���ſ�ʹ��ʱ����Ч��
                                                                  0���Զ�ʱ���ſؽ��ã�
                                                                  1���Զ�ʱ���ſ�ʹ�ܣ� */
        unsigned int  ch3_rdma_auto_clk_gt_en   : 1;  /* bit[2] : ��ģ���Զ�ʱ���ſ�ʹ�ܣ�ֻ��ȫ���Զ�ʱ���ſ�ʹ��ʱ����Ч��
                                                                  0���Զ�ʱ���ſؽ��ã�
                                                                  1���Զ�ʱ���ſ�ʹ�ܣ� */
        unsigned int  ch4_rdma_auto_clk_gt_en   : 1;  /* bit[3] : ��ģ���Զ�ʱ���ſ�ʹ�ܣ�ֻ��ȫ���Զ�ʱ���ſ�ʹ��ʱ����Ч��
                                                                  0���Զ�ʱ���ſؽ��ã�
                                                                  1���Զ�ʱ���ſ�ʹ�ܣ� */
        unsigned int  ch5_rdma_auto_clk_gt_en   : 1;  /* bit[4] : ��ģ���Զ�ʱ���ſ�ʹ�ܣ�ֻ��ȫ���Զ�ʱ���ſ�ʹ��ʱ����Ч��
                                                                  0���Զ�ʱ���ſؽ��ã�
                                                                  1���Զ�ʱ���ſ�ʹ�ܣ� */
        unsigned int  ch6_rdma_auto_clk_gt_en   : 1;  /* bit[5] : ��ģ���Զ�ʱ���ſ�ʹ�ܣ�ֻ��ȫ���Զ�ʱ���ſ�ʹ��ʱ����Ч��
                                                                  0���Զ�ʱ���ſؽ��ã�
                                                                  1���Զ�ʱ���ſ�ʹ�ܣ� */
        unsigned int  disp_rdma_auto_clk_gt_en  : 1;  /* bit[6] : ��ģ���Զ�ʱ���ſ�ʹ�ܣ�ֻ��ȫ���Զ�ʱ���ſ�ʹ��ʱ����Ч��
                                                                  0���Զ�ʱ���ſؽ��ã�
                                                                  1���Զ�ʱ���ſ�ʹ�ܣ� */
        unsigned int  cmdq1_rdma_auto_clk_gt_en : 1;  /* bit[7] : ��ģ���Զ�ʱ���ſ�ʹ�ܣ�ֻ��ȫ���Զ�ʱ���ſ�ʹ��ʱ����Ч��
                                                                  0���Զ�ʱ���ſؽ��ã�
                                                                  1���Զ�ʱ���ſ�ʹ�ܣ� */
        unsigned int  cmdq2_rdma_auto_clk_gt_en : 1;  /* bit[8] : ��ģ���Զ�ʱ���ſ�ʹ�ܣ�ֻ��ȫ���Զ�ʱ���ſ�ʹ��ʱ����Ч��
                                                                  0���Զ�ʱ���ſؽ��ã�
                                                                  1���Զ�ʱ���ſ�ʹ�ܣ� */
        unsigned int  reserved_0                : 1;  /* bit[9] : ������ */
        unsigned int  ch1_wdma_auto_clk_gt_en   : 1;  /* bit[10]: ��ģ���Զ�ʱ���ſ�ʹ�ܣ�ֻ��ȫ���Զ�ʱ���ſ�ʹ��ʱ����Ч��
                                                                  0���Զ�ʱ���ſؽ��ã�
                                                                  1���Զ�ʱ���ſ�ʹ�ܣ� */
        unsigned int  ch2_wdma_auto_clk_gt_en   : 1;  /* bit[11]: ��ģ���Զ�ʱ���ſ�ʹ�ܣ�ֻ��ȫ���Զ�ʱ���ſ�ʹ��ʱ����Ч��
                                                                  0���Զ�ʱ���ſؽ��ã�
                                                                  1���Զ�ʱ���ſ�ʹ�ܣ� */
        unsigned int  ch3_wdma_auto_clk_gt_en   : 1;  /* bit[12]: ��ģ���Զ�ʱ���ſ�ʹ�ܣ�ֻ��ȫ���Զ�ʱ���ſ�ʹ��ʱ����Ч��
                                                                  0���Զ�ʱ���ſؽ��ã�
                                                                  1���Զ�ʱ���ſ�ʹ�ܣ� */
        unsigned int  reserved_1                : 1;  /* bit[13]: ������ */
        unsigned int  cmdq_wdma_auto_clk_gt_en  : 1;  /* bit[14]: ��ģ���Զ�ʱ���ſ�ʹ�ܣ�ֻ��ȫ���Զ�ʱ���ſ�ʹ��ʱ����Ч��
                                                                  0���Զ�ʱ���ſؽ��ã�
                                                                  1���Զ�ʱ���ſ�ʹ�ܣ� */
        unsigned int  clip1_auto_clk_gt_en      : 1;  /* bit[15]: ��ģ���Զ�ʱ���ſ�ʹ�ܣ�ֻ��ȫ���Զ�ʱ���ſ�ʹ��ʱ����Ч��
                                                                  0���Զ�ʱ���ſؽ��ã�
                                                                  1���Զ�ʱ���ſ�ʹ�ܣ� */
        unsigned int  clip2_auto_clk_gt_en      : 1;  /* bit[16]: ��ģ���Զ�ʱ���ſ�ʹ�ܣ�ֻ��ȫ���Զ�ʱ���ſ�ʹ��ʱ����Ч��
                                                                  0���Զ�ʱ���ſؽ��ã�
                                                                  1���Զ�ʱ���ſ�ʹ�ܣ� */
        unsigned int  clip3_auto_clk_gt_en      : 1;  /* bit[17]: ��ģ���Զ�ʱ���ſ�ʹ�ܣ�ֻ��ȫ���Զ�ʱ���ſ�ʹ��ʱ����Ч��
                                                                  0���Զ�ʱ���ſؽ��ã�
                                                                  1���Զ�ʱ���ſ�ʹ�ܣ� */
        unsigned int  clip4_auto_clk_gt_en      : 1;  /* bit[18]: ��ģ���Զ�ʱ���ſ�ʹ�ܣ�ֻ��ȫ���Զ�ʱ���ſ�ʹ��ʱ����Ч��
                                                                  0���Զ�ʱ���ſؽ��ã�
                                                                  1���Զ�ʱ���ſ�ʹ�ܣ� */
        unsigned int  clip5_auto_clk_gt_en      : 1;  /* bit[19]: ��ģ���Զ�ʱ���ſ�ʹ�ܣ�ֻ��ȫ���Զ�ʱ���ſ�ʹ��ʱ����Ч��
                                                                  0���Զ�ʱ���ſؽ��ã�
                                                                  1���Զ�ʱ���ſ�ʹ�ܣ� */
        unsigned int  clip6_auto_clk_gt_en      : 1;  /* bit[20]: ��ģ���Զ�ʱ���ſ�ʹ�ܣ�ֻ��ȫ���Զ�ʱ���ſ�ʹ��ʱ����Ч��
                                                                  0���Զ�ʱ���ſؽ��ã�
                                                                  1���Զ�ʱ���ſ�ʹ�ܣ� */
        unsigned int  scl1_auto_clk_gt_en       : 1;  /* bit[21]: ��ģ���Զ�ʱ���ſ�ʹ�ܣ�ֻ��ȫ���Զ�ʱ���ſ�ʹ��ʱ����Ч��
                                                                  0���Զ�ʱ���ſؽ��ã�
                                                                  1���Զ�ʱ���ſ�ʹ�ܣ� */
        unsigned int  scl2_auto_clk_gt_en       : 1;  /* bit[22]: ��ģ���Զ�ʱ���ſ�ʹ�ܣ�ֻ��ȫ���Զ�ʱ���ſ�ʹ��ʱ����Ч��
                                                                  0���Զ�ʱ���ſؽ��ã�
                                                                  1���Զ�ʱ���ſ�ʹ�ܣ� */
        unsigned int  scl3_auto_clk_gt_en       : 1;  /* bit[23]: ��ģ���Զ�ʱ���ſ�ʹ�ܣ�ֻ��ȫ���Զ�ʱ���ſ�ʹ��ʱ����Ч��
                                                                  0���Զ�ʱ���ſؽ��ã�
                                                                  1���Զ�ʱ���ſ�ʹ�ܣ� */
        unsigned int  ctran1_auto_clk_gt_en     : 1;  /* bit[24]: ��ģ���Զ�ʱ���ſ�ʹ�ܣ�ֻ��ȫ���Զ�ʱ���ſ�ʹ��ʱ����Ч��
                                                                  0���Զ�ʱ���ſؽ��ã�
                                                                  1���Զ�ʱ���ſ�ʹ�ܣ� */
        unsigned int  ctran2_auto_clk_gt_en     : 1;  /* bit[25]: ��ģ���Զ�ʱ���ſ�ʹ�ܣ�ֻ��ȫ���Զ�ʱ���ſ�ʹ��ʱ����Ч��
                                                                  0���Զ�ʱ���ſؽ��ã�
                                                                  1���Զ�ʱ���ſ�ʹ�ܣ� */
        unsigned int  ctran3_auto_clk_gt_en     : 1;  /* bit[26]: ��ģ���Զ�ʱ���ſ�ʹ�ܣ�ֻ��ȫ���Զ�ʱ���ſ�ʹ��ʱ����Ч��
                                                                  0���Զ�ʱ���ſؽ��ã�
                                                                  1���Զ�ʱ���ſ�ʹ�ܣ� */
        unsigned int  ctran4_auto_clk_gt_en     : 1;  /* bit[27]: ��ģ���Զ�ʱ���ſ�ʹ�ܣ�ֻ��ȫ���Զ�ʱ���ſ�ʹ��ʱ����Ч��
                                                                  0���Զ�ʱ���ſؽ��ã�
                                                                  1���Զ�ʱ���ſ�ʹ�ܣ� */
        unsigned int  ctran5_auto_clk_gt_en     : 1;  /* bit[28]: ��ģ���Զ�ʱ���ſ�ʹ�ܣ�ֻ��ȫ���Զ�ʱ���ſ�ʹ��ʱ����Ч��
                                                                  0���Զ�ʱ���ſؽ��ã�
                                                                  1���Զ�ʱ���ſ�ʹ�ܣ� */
        unsigned int  ctran6_auto_clk_gt_en     : 1;  /* bit[29]: ��ģ���Զ�ʱ���ſ�ʹ�ܣ�ֻ��ȫ���Զ�ʱ���ſ�ʹ��ʱ����Ч��
                                                                  0���Զ�ʱ���ſؽ��ã�
                                                                  1���Զ�ʱ���ſ�ʹ�ܣ� */
        unsigned int  rot_auto_clk_gt_en        : 1;  /* bit[30]: ��ģ���Զ�ʱ���ſ�ʹ�ܣ�ֻ��ȫ���Զ�ʱ���ſ�ʹ��ʱ����Ч��
                                                                  0���Զ�ʱ���ſؽ��ã�
                                                                  1���Զ�ʱ���ſ�ʹ�ܣ� */
        unsigned int  reserved_2                : 1;  /* bit[31]: ������ */
    } reg;
} SOC_ADE_AUTO_CLK_GT_EN0_UNION;
#endif
#define SOC_ADE_AUTO_CLK_GT_EN0_ch1_rdma_auto_clk_gt_en_START    (0)
#define SOC_ADE_AUTO_CLK_GT_EN0_ch1_rdma_auto_clk_gt_en_END      (0)
#define SOC_ADE_AUTO_CLK_GT_EN0_ch2_rdma_auto_clk_gt_en_START    (1)
#define SOC_ADE_AUTO_CLK_GT_EN0_ch2_rdma_auto_clk_gt_en_END      (1)
#define SOC_ADE_AUTO_CLK_GT_EN0_ch3_rdma_auto_clk_gt_en_START    (2)
#define SOC_ADE_AUTO_CLK_GT_EN0_ch3_rdma_auto_clk_gt_en_END      (2)
#define SOC_ADE_AUTO_CLK_GT_EN0_ch4_rdma_auto_clk_gt_en_START    (3)
#define SOC_ADE_AUTO_CLK_GT_EN0_ch4_rdma_auto_clk_gt_en_END      (3)
#define SOC_ADE_AUTO_CLK_GT_EN0_ch5_rdma_auto_clk_gt_en_START    (4)
#define SOC_ADE_AUTO_CLK_GT_EN0_ch5_rdma_auto_clk_gt_en_END      (4)
#define SOC_ADE_AUTO_CLK_GT_EN0_ch6_rdma_auto_clk_gt_en_START    (5)
#define SOC_ADE_AUTO_CLK_GT_EN0_ch6_rdma_auto_clk_gt_en_END      (5)
#define SOC_ADE_AUTO_CLK_GT_EN0_disp_rdma_auto_clk_gt_en_START   (6)
#define SOC_ADE_AUTO_CLK_GT_EN0_disp_rdma_auto_clk_gt_en_END     (6)
#define SOC_ADE_AUTO_CLK_GT_EN0_cmdq1_rdma_auto_clk_gt_en_START  (7)
#define SOC_ADE_AUTO_CLK_GT_EN0_cmdq1_rdma_auto_clk_gt_en_END    (7)
#define SOC_ADE_AUTO_CLK_GT_EN0_cmdq2_rdma_auto_clk_gt_en_START  (8)
#define SOC_ADE_AUTO_CLK_GT_EN0_cmdq2_rdma_auto_clk_gt_en_END    (8)
#define SOC_ADE_AUTO_CLK_GT_EN0_ch1_wdma_auto_clk_gt_en_START    (10)
#define SOC_ADE_AUTO_CLK_GT_EN0_ch1_wdma_auto_clk_gt_en_END      (10)
#define SOC_ADE_AUTO_CLK_GT_EN0_ch2_wdma_auto_clk_gt_en_START    (11)
#define SOC_ADE_AUTO_CLK_GT_EN0_ch2_wdma_auto_clk_gt_en_END      (11)
#define SOC_ADE_AUTO_CLK_GT_EN0_ch3_wdma_auto_clk_gt_en_START    (12)
#define SOC_ADE_AUTO_CLK_GT_EN0_ch3_wdma_auto_clk_gt_en_END      (12)
#define SOC_ADE_AUTO_CLK_GT_EN0_cmdq_wdma_auto_clk_gt_en_START   (14)
#define SOC_ADE_AUTO_CLK_GT_EN0_cmdq_wdma_auto_clk_gt_en_END     (14)
#define SOC_ADE_AUTO_CLK_GT_EN0_clip1_auto_clk_gt_en_START       (15)
#define SOC_ADE_AUTO_CLK_GT_EN0_clip1_auto_clk_gt_en_END         (15)
#define SOC_ADE_AUTO_CLK_GT_EN0_clip2_auto_clk_gt_en_START       (16)
#define SOC_ADE_AUTO_CLK_GT_EN0_clip2_auto_clk_gt_en_END         (16)
#define SOC_ADE_AUTO_CLK_GT_EN0_clip3_auto_clk_gt_en_START       (17)
#define SOC_ADE_AUTO_CLK_GT_EN0_clip3_auto_clk_gt_en_END         (17)
#define SOC_ADE_AUTO_CLK_GT_EN0_clip4_auto_clk_gt_en_START       (18)
#define SOC_ADE_AUTO_CLK_GT_EN0_clip4_auto_clk_gt_en_END         (18)
#define SOC_ADE_AUTO_CLK_GT_EN0_clip5_auto_clk_gt_en_START       (19)
#define SOC_ADE_AUTO_CLK_GT_EN0_clip5_auto_clk_gt_en_END         (19)
#define SOC_ADE_AUTO_CLK_GT_EN0_clip6_auto_clk_gt_en_START       (20)
#define SOC_ADE_AUTO_CLK_GT_EN0_clip6_auto_clk_gt_en_END         (20)
#define SOC_ADE_AUTO_CLK_GT_EN0_scl1_auto_clk_gt_en_START        (21)
#define SOC_ADE_AUTO_CLK_GT_EN0_scl1_auto_clk_gt_en_END          (21)
#define SOC_ADE_AUTO_CLK_GT_EN0_scl2_auto_clk_gt_en_START        (22)
#define SOC_ADE_AUTO_CLK_GT_EN0_scl2_auto_clk_gt_en_END          (22)
#define SOC_ADE_AUTO_CLK_GT_EN0_scl3_auto_clk_gt_en_START        (23)
#define SOC_ADE_AUTO_CLK_GT_EN0_scl3_auto_clk_gt_en_END          (23)
#define SOC_ADE_AUTO_CLK_GT_EN0_ctran1_auto_clk_gt_en_START      (24)
#define SOC_ADE_AUTO_CLK_GT_EN0_ctran1_auto_clk_gt_en_END        (24)
#define SOC_ADE_AUTO_CLK_GT_EN0_ctran2_auto_clk_gt_en_START      (25)
#define SOC_ADE_AUTO_CLK_GT_EN0_ctran2_auto_clk_gt_en_END        (25)
#define SOC_ADE_AUTO_CLK_GT_EN0_ctran3_auto_clk_gt_en_START      (26)
#define SOC_ADE_AUTO_CLK_GT_EN0_ctran3_auto_clk_gt_en_END        (26)
#define SOC_ADE_AUTO_CLK_GT_EN0_ctran4_auto_clk_gt_en_START      (27)
#define SOC_ADE_AUTO_CLK_GT_EN0_ctran4_auto_clk_gt_en_END        (27)
#define SOC_ADE_AUTO_CLK_GT_EN0_ctran5_auto_clk_gt_en_START      (28)
#define SOC_ADE_AUTO_CLK_GT_EN0_ctran5_auto_clk_gt_en_END        (28)
#define SOC_ADE_AUTO_CLK_GT_EN0_ctran6_auto_clk_gt_en_START      (29)
#define SOC_ADE_AUTO_CLK_GT_EN0_ctran6_auto_clk_gt_en_END        (29)
#define SOC_ADE_AUTO_CLK_GT_EN0_rot_auto_clk_gt_en_START         (30)
#define SOC_ADE_AUTO_CLK_GT_EN0_rot_auto_clk_gt_en_END           (30)


/*****************************************************************************
 �ṹ��    : SOC_ADE_AUTO_CLK_GT_EN1_UNION
 �ṹ˵��  : AUTO_CLK_GT_EN1 �Ĵ����ṹ���塣��ַƫ����:0x00A0����ֵ:0x000001FF�����:32
 �Ĵ���˵��: ADE��ģ���Զ�ʱ���ſؿ��ƼĴ���1��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cmdq1_auto_clk_gt_en  : 1;  /* bit[0]   : ��ģ���Զ�ʱ���ſ�ʹ�ܣ�ֻ��ȫ���Զ�ʱ���ſ�ʹ��ʱ����Ч��
                                                                0���Զ�ʱ���ſؽ��ã�
                                                                1���Զ�ʱ���ſ�ʹ�ܣ� */
        unsigned int  cmdq2_auto_clk_gt_en  : 1;  /* bit[1]   : ��ģ���Զ�ʱ���ſ�ʹ�ܣ�ֻ��ȫ���Զ�ʱ���ſ�ʹ��ʱ����Ч��
                                                                0���Զ�ʱ���ſؽ��ã�
                                                                1���Զ�ʱ���ſ�ʹ�ܣ� */
        unsigned int  reserved_0            : 1;  /* bit[2]   : ������ */
        unsigned int  gamma_auto_clk_gt_en  : 1;  /* bit[3]   : ��ģ���Զ�ʱ���ſ�ʹ�ܣ�ֻ��ȫ���Զ�ʱ���ſ�ʹ��ʱ����Ч��
                                                                0���Զ�ʱ���ſؽ��ã�
                                                                1���Զ�ʱ���ſ�ʹ�ܣ� */
        unsigned int  dither_auto_clk_gt_en : 1;  /* bit[4]   : ��ģ���Զ�ʱ���ſ�ʹ�ܣ�ֻ��ȫ���Զ�ʱ���ſ�ʹ��ʱ����Ч��
                                                                0���Զ�ʱ���ſؽ��ã�
                                                                1���Զ�ʱ���ſ�ʹ�ܣ� */
        unsigned int  ovly1_auto_clk_gt_en  : 1;  /* bit[5]   : ��ģ���Զ�ʱ���ſ�ʹ�ܣ�ֻ��ȫ���Զ�ʱ���ſ�ʹ��ʱ����Ч��
                                                                0���Զ�ʱ���ſؽ��ã�
                                                                1���Զ�ʱ���ſ�ʹ�ܣ� */
        unsigned int  ovly2_auto_clk_gt_en  : 1;  /* bit[6]   : ��ģ���Զ�ʱ���ſ�ʹ�ܣ�ֻ��ȫ���Զ�ʱ���ſ�ʹ��ʱ����Ч��
                                                                0���Զ�ʱ���ſؽ��ã�
                                                                1���Զ�ʱ���ſ�ʹ�ܣ� */
        unsigned int  ovly3_auto_clk_gt_en  : 1;  /* bit[7]   : ��ģ���Զ�ʱ���ſ�ʹ�ܣ�ֻ��ȫ���Զ�ʱ���ſ�ʹ��ʱ����Ч��
                                                                0���Զ�ʱ���ſؽ��ã�
                                                                1���Զ�ʱ���ſ�ʹ�ܣ� */
        unsigned int  top_auto_clk_gt_en    : 1;  /* bit[8]   : ��ģ���Զ�ʱ���ſ�ʹ�ܣ�ֻ��ȫ���Զ�ʱ���ſ�ʹ��ʱ����Ч��
                                                                0���Զ�ʱ���ſؽ��ã�
                                                                1���Զ�ʱ���ſ�ʹ�ܣ� */
        unsigned int  reserved_1            : 23; /* bit[9-31]: ������ */
    } reg;
} SOC_ADE_AUTO_CLK_GT_EN1_UNION;
#endif
#define SOC_ADE_AUTO_CLK_GT_EN1_cmdq1_auto_clk_gt_en_START   (0)
#define SOC_ADE_AUTO_CLK_GT_EN1_cmdq1_auto_clk_gt_en_END     (0)
#define SOC_ADE_AUTO_CLK_GT_EN1_cmdq2_auto_clk_gt_en_START   (1)
#define SOC_ADE_AUTO_CLK_GT_EN1_cmdq2_auto_clk_gt_en_END     (1)
#define SOC_ADE_AUTO_CLK_GT_EN1_gamma_auto_clk_gt_en_START   (3)
#define SOC_ADE_AUTO_CLK_GT_EN1_gamma_auto_clk_gt_en_END     (3)
#define SOC_ADE_AUTO_CLK_GT_EN1_dither_auto_clk_gt_en_START  (4)
#define SOC_ADE_AUTO_CLK_GT_EN1_dither_auto_clk_gt_en_END    (4)
#define SOC_ADE_AUTO_CLK_GT_EN1_ovly1_auto_clk_gt_en_START   (5)
#define SOC_ADE_AUTO_CLK_GT_EN1_ovly1_auto_clk_gt_en_END     (5)
#define SOC_ADE_AUTO_CLK_GT_EN1_ovly2_auto_clk_gt_en_START   (6)
#define SOC_ADE_AUTO_CLK_GT_EN1_ovly2_auto_clk_gt_en_END     (6)
#define SOC_ADE_AUTO_CLK_GT_EN1_ovly3_auto_clk_gt_en_START   (7)
#define SOC_ADE_AUTO_CLK_GT_EN1_ovly3_auto_clk_gt_en_END     (7)
#define SOC_ADE_AUTO_CLK_GT_EN1_top_auto_clk_gt_en_START     (8)
#define SOC_ADE_AUTO_CLK_GT_EN1_top_auto_clk_gt_en_END       (8)


/*****************************************************************************
 �ṹ��    : SOC_ADE_FRM_DISGARD_CTRL_UNION
 �ṹ˵��  : FRM_DISGARD_CTRL �Ĵ����ṹ���塣��ַƫ����:0x00A4����ֵ:0x00000040�����:32
 �Ĵ���˵��: ADE��֡���ƼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  dfs_buf_unflow_lev0 : 12; /* bit[0-11] : DFS buffer����Ԥ��ˮ��0��Ĭ��ֵΪ64����߲����������DFS buffer��С��������LCD��ʾ������ͬʱ��д��DDR����DFS buffer�������ȵ��ڴ�ˮ�ߣ���ָ��WDMA��FIFO��ʱ��Ϊ�˷�ֹWDMA������ʾ����Ҫ��֡�� */
        unsigned int  reserved_0          : 4;  /* bit[12-15]: ������ */
        unsigned int  wdma2_disgard_en    : 1;  /* bit[16]   : WDMA2��֡ʹ�ܣ�����ʾ����ͬʱͨ����WDMAд��DDRʱ����Ҫʹ�ܡ�
                                                               0�����ã�
                                                               1��ʹ�ܡ� */
        unsigned int  wdma3_disgard_en    : 1;  /* bit[17]   : WDMA3��֡ʹ�ܣ�����ʾ����ͬʱͨ����WDMAд��DDRʱ����Ҫʹ�ܡ�
                                                               0�����ã�
                                                               1��ʹ�ܡ� */
        unsigned int  reserved_1          : 14; /* bit[18-31]: ������ */
    } reg;
} SOC_ADE_FRM_DISGARD_CTRL_UNION;
#endif
#define SOC_ADE_FRM_DISGARD_CTRL_dfs_buf_unflow_lev0_START  (0)
#define SOC_ADE_FRM_DISGARD_CTRL_dfs_buf_unflow_lev0_END    (11)
#define SOC_ADE_FRM_DISGARD_CTRL_wdma2_disgard_en_START     (16)
#define SOC_ADE_FRM_DISGARD_CTRL_wdma2_disgard_en_END       (16)
#define SOC_ADE_FRM_DISGARD_CTRL_wdma3_disgard_en_START     (17)
#define SOC_ADE_FRM_DISGARD_CTRL_wdma3_disgard_en_END       (17)


/*****************************************************************************
 �ṹ��    : SOC_ADE_FRM_DISGARD_CNT_UNION
 �ṹ˵��  : FRM_DISGARD_CNT �Ĵ����ṹ���塣��ַƫ����:0x00A8����ֵ:0x00000000�����:32
 �Ĵ���˵��: ADE��֡ͳ�Ƽ�������
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  wdma2_disgard_cnt : 16; /* bit[0-15] : WDMA2��֡ͳ�Ƽ�������ÿ�η�����֡ʱ����������1�����д���㡣 */
        unsigned int  wdma3_disgard_cnt : 16; /* bit[16-31]: WDMA3��֡ͳ�Ƽ�������ÿ�η�����֡ʱ����������1�����д���㡣 */
    } reg;
} SOC_ADE_FRM_DISGARD_CNT_UNION;
#endif
#define SOC_ADE_FRM_DISGARD_CNT_wdma2_disgard_cnt_START  (0)
#define SOC_ADE_FRM_DISGARD_CNT_wdma2_disgard_cnt_END    (15)
#define SOC_ADE_FRM_DISGARD_CNT_wdma3_disgard_cnt_START  (16)
#define SOC_ADE_FRM_DISGARD_CNT_wdma3_disgard_cnt_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_ADE_RELOAD_DIS0_UNION
 �ṹ˵��  : RELOAD_DIS0 �Ĵ����ṹ���塣��ַƫ����:0x00AC����ֵ:0x00000000�����:32
 �Ĵ���˵��: ��ģ��Ӳ��ͬ�����μĴ���0��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ch1_rdma_reload_dis   : 1;  /* bit[0] : ��ģ��Ӳ��ͬ�����Σ���Ҫ��ADE_SOFT_RST_SELѡ�����ʹ�ã�
                                                              0��ADE_SOFT_RST_SEL��Ӧ��bit=1ʱ����ģ����λ�������reload����ʼ������
                                                              1��ADE_SOFT_RST_SEL��Ӧ��bit=1ʱ����ģ����λ�󲻻�����reload�Ϳ�ʼ������ */
        unsigned int  ch2_rdma_reload_dis   : 1;  /* bit[1] : ��ģ��Ӳ��ͬ�����Σ���Ҫ��ADE_SOFT_RST_SELѡ�����ʹ�ã�
                                                              0��ADE_SOFT_RST_SEL��Ӧ��bit=1ʱ����ģ����λ�������reload����ʼ������
                                                              1��ADE_SOFT_RST_SEL��Ӧ��bit=1ʱ����ģ����λ�󲻻�����reload�Ϳ�ʼ������ */
        unsigned int  ch3_rdma_reload_dis   : 1;  /* bit[2] : ��ģ��Ӳ��ͬ�����Σ���Ҫ��ADE_SOFT_RST_SELѡ�����ʹ�ã�
                                                              0��ADE_SOFT_RST_SEL��Ӧ��bit=1ʱ����ģ����λ�������reload����ʼ������
                                                              1��ADE_SOFT_RST_SEL��Ӧ��bit=1ʱ����ģ����λ�󲻻�����reload�Ϳ�ʼ������ */
        unsigned int  ch4_rdma_reload_dis   : 1;  /* bit[3] : ��ģ��Ӳ��ͬ�����Σ���Ҫ��ADE_SOFT_RST_SELѡ�����ʹ�ã�
                                                              0��ADE_SOFT_RST_SEL��Ӧ��bit=1ʱ����ģ����λ�������reload����ʼ������
                                                              1��ADE_SOFT_RST_SEL��Ӧ��bit=1ʱ����ģ����λ�󲻻�����reload�Ϳ�ʼ������ */
        unsigned int  ch5_rdma_reload_dis   : 1;  /* bit[4] : ��ģ��Ӳ��ͬ�����Σ���Ҫ��ADE_SOFT_RST_SELѡ�����ʹ�ã�
                                                              0��ADE_SOFT_RST_SEL��Ӧ��bit=1ʱ����ģ����λ�������reload����ʼ������
                                                              1��ADE_SOFT_RST_SEL��Ӧ��bit=1ʱ����ģ����λ�󲻻�����reload�Ϳ�ʼ������ */
        unsigned int  ch6_rdma_reload_dis   : 1;  /* bit[5] : ��ģ��Ӳ��ͬ�����Σ���Ҫ��ADE_SOFT_RST_SELѡ�����ʹ�ã�
                                                              0��ADE_SOFT_RST_SEL��Ӧ��bit=1ʱ����ģ����λ�������reload����ʼ������
                                                              1��ADE_SOFT_RST_SEL��Ӧ��bit=1ʱ����ģ����λ�󲻻�����reload�Ϳ�ʼ������ */
        unsigned int  disp_rdma_reload_dis  : 1;  /* bit[6] : ��ģ��Ӳ��ͬ�����Σ���Ҫ��ADE_SOFT_RST_SELѡ�����ʹ�ã�
                                                              0��ADE_SOFT_RST_SEL��Ӧ��bit=1ʱ����ģ����λ�������reload����ʼ������
                                                              1��ADE_SOFT_RST_SEL��Ӧ��bit=1ʱ����ģ����λ�󲻻�����reload�Ϳ�ʼ������ */
        unsigned int  cmdq1_rdma_reload_dis : 1;  /* bit[7] : ��ģ��Ӳ��ͬ�����Σ���Ҫ��ADE_SOFT_RST_SELѡ�����ʹ�ã�
                                                              0��ADE_SOFT_RST_SEL��Ӧ��bit=1ʱ����ģ����λ�������reload����ʼ������
                                                              1��ADE_SOFT_RST_SEL��Ӧ��bit=1ʱ����ģ����λ�󲻻�����reload�Ϳ�ʼ������ */
        unsigned int  cmdq2_rdma_reload_dis : 1;  /* bit[8] : ��ģ��Ӳ��ͬ�����Σ���Ҫ��ADE_SOFT_RST_SELѡ�����ʹ�ã�
                                                              0��ADE_SOFT_RST_SEL��Ӧ��bit=1ʱ����ģ����λ�������reload����ʼ������
                                                              1��ADE_SOFT_RST_SEL��Ӧ��bit=1ʱ����ģ����λ�󲻻�����reload�Ϳ�ʼ������ */
        unsigned int  reserved_0            : 1;  /* bit[9] : ������ */
        unsigned int  ch1_wdma_reload_dis   : 1;  /* bit[10]: ��ģ��Ӳ��ͬ�����Σ���Ҫ��ADE_SOFT_RST_SELѡ�����ʹ�ã�
                                                              0��ADE_SOFT_RST_SEL��Ӧ��bit=1ʱ����ģ����λ�������reload����ʼ������
                                                              1��ADE_SOFT_RST_SEL��Ӧ��bit=1ʱ����ģ����λ�󲻻�����reload�Ϳ�ʼ������ */
        unsigned int  ch2_wdma_reload_dis   : 1;  /* bit[11]: ��ģ��Ӳ��ͬ�����Σ���Ҫ��ADE_SOFT_RST_SELѡ�����ʹ�ã�
                                                              0��ADE_SOFT_RST_SEL��Ӧ��bit=1ʱ����ģ����λ�������reload����ʼ������
                                                              1��ADE_SOFT_RST_SEL��Ӧ��bit=1ʱ����ģ����λ�󲻻�����reload�Ϳ�ʼ������ */
        unsigned int  ch3_wdma_reload_dis   : 1;  /* bit[12]: ��ģ��Ӳ��ͬ�����Σ���Ҫ��ADE_SOFT_RST_SELѡ�����ʹ�ã�
                                                              0��ADE_SOFT_RST_SEL��Ӧ��bit=1ʱ����ģ����λ�������reload����ʼ������
                                                              1��ADE_SOFT_RST_SEL��Ӧ��bit=1ʱ����ģ����λ�󲻻�����reload�Ϳ�ʼ������ */
        unsigned int  reserved_1            : 1;  /* bit[13]: ������ */
        unsigned int  cmdq_wdma_reload_dis  : 1;  /* bit[14]: ��ģ��Ӳ��ͬ�����Σ���Ҫ��ADE_SOFT_RST_SELѡ�����ʹ�ã�
                                                              0��ADE_SOFT_RST_SEL��Ӧ��bit=1ʱ����ģ����λ�������reload����ʼ������
                                                              1��ADE_SOFT_RST_SEL��Ӧ��bit=1ʱ����ģ����λ�󲻻�����reload�Ϳ�ʼ������ */
        unsigned int  clip1_reload_dis      : 1;  /* bit[15]: ��ģ��Ӳ��ͬ�����Σ���Ҫ��ADE_SOFT_RST_SELѡ�����ʹ�ã�
                                                              0��ADE_SOFT_RST_SEL��Ӧ��bit=1ʱ����ģ����λ�������reload����ʼ������
                                                              1��ADE_SOFT_RST_SEL��Ӧ��bit=1ʱ����ģ����λ�󲻻�����reload�Ϳ�ʼ������ */
        unsigned int  clip2_reload_dis      : 1;  /* bit[16]: ��ģ��Ӳ��ͬ�����Σ���Ҫ��ADE_SOFT_RST_SELѡ�����ʹ�ã�
                                                              0��ADE_SOFT_RST_SEL��Ӧ��bit=1ʱ����ģ����λ�������reload����ʼ������
                                                              1��ADE_SOFT_RST_SEL��Ӧ��bit=1ʱ����ģ����λ�󲻻�����reload�Ϳ�ʼ������ */
        unsigned int  clip3_reload_dis      : 1;  /* bit[17]: ��ģ��Ӳ��ͬ�����Σ���Ҫ��ADE_SOFT_RST_SELѡ�����ʹ�ã�
                                                              0��ADE_SOFT_RST_SEL��Ӧ��bit=1ʱ����ģ����λ�������reload����ʼ������
                                                              1��ADE_SOFT_RST_SEL��Ӧ��bit=1ʱ����ģ����λ�󲻻�����reload�Ϳ�ʼ������ */
        unsigned int  clip4_reload_dis      : 1;  /* bit[18]: ��ģ��Ӳ��ͬ�����Σ���Ҫ��ADE_SOFT_RST_SELѡ�����ʹ�ã�
                                                              0��ADE_SOFT_RST_SEL��Ӧ��bit=1ʱ����ģ����λ�������reload����ʼ������
                                                              1��ADE_SOFT_RST_SEL��Ӧ��bit=1ʱ����ģ����λ�󲻻�����reload�Ϳ�ʼ������ */
        unsigned int  clip5_reload_dis      : 1;  /* bit[19]: ��ģ��Ӳ��ͬ�����Σ���Ҫ��ADE_SOFT_RST_SELѡ�����ʹ�ã�
                                                              0��ADE_SOFT_RST_SEL��Ӧ��bit=1ʱ����ģ����λ�������reload����ʼ������
                                                              1��ADE_SOFT_RST_SEL��Ӧ��bit=1ʱ����ģ����λ�󲻻�����reload�Ϳ�ʼ������ */
        unsigned int  clip6_reload_dis      : 1;  /* bit[20]: ��ģ��Ӳ��ͬ�����Σ���Ҫ��ADE_SOFT_RST_SELѡ�����ʹ�ã�
                                                              0��ADE_SOFT_RST_SEL��Ӧ��bit=1ʱ����ģ����λ�������reload����ʼ������
                                                              1��ADE_SOFT_RST_SEL��Ӧ��bit=1ʱ����ģ����λ�󲻻�����reload�Ϳ�ʼ������ */
        unsigned int  scl1_reload_dis       : 1;  /* bit[21]: ��ģ��Ӳ��ͬ�����Σ���Ҫ��ADE_SOFT_RST_SELѡ�����ʹ�ã�
                                                              0��ADE_SOFT_RST_SEL��Ӧ��bit=1ʱ����ģ����λ�������reload����ʼ������
                                                              1��ADE_SOFT_RST_SEL��Ӧ��bit=1ʱ����ģ����λ�󲻻�����reload�Ϳ�ʼ������ */
        unsigned int  scl2_reload_dis       : 1;  /* bit[22]: ��ģ��Ӳ��ͬ�����Σ���Ҫ��ADE_SOFT_RST_SELѡ�����ʹ�ã�
                                                              0��ADE_SOFT_RST_SEL��Ӧ��bit=1ʱ����ģ����λ�������reload����ʼ������
                                                              1��ADE_SOFT_RST_SEL��Ӧ��bit=1ʱ����ģ����λ�󲻻�����reload�Ϳ�ʼ������ */
        unsigned int  scl3_reload_dis       : 1;  /* bit[23]: ��ģ��Ӳ��ͬ�����Σ���Ҫ��ADE_SOFT_RST_SELѡ�����ʹ�ã�
                                                              0��ADE_SOFT_RST_SEL��Ӧ��bit=1ʱ����ģ����λ�������reload����ʼ������
                                                              1��ADE_SOFT_RST_SEL��Ӧ��bit=1ʱ����ģ����λ�󲻻�����reload�Ϳ�ʼ������ */
        unsigned int  ctran1_reload_dis     : 1;  /* bit[24]: ��ģ��Ӳ��ͬ�����Σ���Ҫ��ADE_SOFT_RST_SELѡ�����ʹ�ã�
                                                              0��ADE_SOFT_RST_SEL��Ӧ��bit=1ʱ����ģ����λ�������reload����ʼ������
                                                              1��ADE_SOFT_RST_SEL��Ӧ��bit=1ʱ����ģ����λ�󲻻�����reload�Ϳ�ʼ������ */
        unsigned int  ctran2_reload_dis     : 1;  /* bit[25]: ��ģ��Ӳ��ͬ�����Σ���Ҫ��ADE_SOFT_RST_SELѡ�����ʹ�ã�
                                                              0��ADE_SOFT_RST_SEL��Ӧ��bit=1ʱ����ģ����λ�������reload����ʼ������
                                                              1��ADE_SOFT_RST_SEL��Ӧ��bit=1ʱ����ģ����λ�󲻻�����reload�Ϳ�ʼ������ */
        unsigned int  ctran3_reload_dis     : 1;  /* bit[26]: ��ģ��Ӳ��ͬ�����Σ���Ҫ��ADE_SOFT_RST_SELѡ�����ʹ�ã�
                                                              0��ADE_SOFT_RST_SEL��Ӧ��bit=1ʱ����ģ����λ�������reload����ʼ������
                                                              1��ADE_SOFT_RST_SEL��Ӧ��bit=1ʱ����ģ����λ�󲻻�����reload�Ϳ�ʼ������ */
        unsigned int  ctran4_reload_dis     : 1;  /* bit[27]: ��ģ��Ӳ��ͬ�����Σ���Ҫ��ADE_SOFT_RST_SELѡ�����ʹ�ã�
                                                              0��ADE_SOFT_RST_SEL��Ӧ��bit=1ʱ����ģ����λ�������reload����ʼ������
                                                              1��ADE_SOFT_RST_SEL��Ӧ��bit=1ʱ����ģ����λ�󲻻�����reload�Ϳ�ʼ������ */
        unsigned int  ctran5_reload_dis     : 1;  /* bit[28]: ��ģ��Ӳ��ͬ�����Σ���Ҫ��ADE_SOFT_RST_SELѡ�����ʹ�ã�
                                                              0��ADE_SOFT_RST_SEL��Ӧ��bit=1ʱ����ģ����λ�������reload����ʼ������
                                                              1��ADE_SOFT_RST_SEL��Ӧ��bit=1ʱ����ģ����λ�󲻻�����reload�Ϳ�ʼ������ */
        unsigned int  ctran6_reload_dis     : 1;  /* bit[29]: ��ģ��Ӳ��ͬ�����Σ���Ҫ��ADE_SOFT_RST_SELѡ�����ʹ�ã�
                                                              0��ADE_SOFT_RST_SEL��Ӧ��bit=1ʱ����ģ����λ�������reload����ʼ������
                                                              1��ADE_SOFT_RST_SEL��Ӧ��bit=1ʱ����ģ����λ�󲻻�����reload�Ϳ�ʼ������ */
        unsigned int  rot_reload_dis        : 1;  /* bit[30]: ��ģ��Ӳ��ͬ�����Σ���Ҫ��ADE_SOFT_RST_SELѡ�����ʹ�ã�
                                                              0��ADE_SOFT_RST_SEL��Ӧ��bit=1ʱ����ģ����λ�������reload����ʼ������
                                                              1��ADE_SOFT_RST_SEL��Ӧ��bit=1ʱ����ģ����λ�󲻻�����reload�Ϳ�ʼ������ */
        unsigned int  reserved_2            : 1;  /* bit[31]: ������ */
    } reg;
} SOC_ADE_RELOAD_DIS0_UNION;
#endif
#define SOC_ADE_RELOAD_DIS0_ch1_rdma_reload_dis_START    (0)
#define SOC_ADE_RELOAD_DIS0_ch1_rdma_reload_dis_END      (0)
#define SOC_ADE_RELOAD_DIS0_ch2_rdma_reload_dis_START    (1)
#define SOC_ADE_RELOAD_DIS0_ch2_rdma_reload_dis_END      (1)
#define SOC_ADE_RELOAD_DIS0_ch3_rdma_reload_dis_START    (2)
#define SOC_ADE_RELOAD_DIS0_ch3_rdma_reload_dis_END      (2)
#define SOC_ADE_RELOAD_DIS0_ch4_rdma_reload_dis_START    (3)
#define SOC_ADE_RELOAD_DIS0_ch4_rdma_reload_dis_END      (3)
#define SOC_ADE_RELOAD_DIS0_ch5_rdma_reload_dis_START    (4)
#define SOC_ADE_RELOAD_DIS0_ch5_rdma_reload_dis_END      (4)
#define SOC_ADE_RELOAD_DIS0_ch6_rdma_reload_dis_START    (5)
#define SOC_ADE_RELOAD_DIS0_ch6_rdma_reload_dis_END      (5)
#define SOC_ADE_RELOAD_DIS0_disp_rdma_reload_dis_START   (6)
#define SOC_ADE_RELOAD_DIS0_disp_rdma_reload_dis_END     (6)
#define SOC_ADE_RELOAD_DIS0_cmdq1_rdma_reload_dis_START  (7)
#define SOC_ADE_RELOAD_DIS0_cmdq1_rdma_reload_dis_END    (7)
#define SOC_ADE_RELOAD_DIS0_cmdq2_rdma_reload_dis_START  (8)
#define SOC_ADE_RELOAD_DIS0_cmdq2_rdma_reload_dis_END    (8)
#define SOC_ADE_RELOAD_DIS0_ch1_wdma_reload_dis_START    (10)
#define SOC_ADE_RELOAD_DIS0_ch1_wdma_reload_dis_END      (10)
#define SOC_ADE_RELOAD_DIS0_ch2_wdma_reload_dis_START    (11)
#define SOC_ADE_RELOAD_DIS0_ch2_wdma_reload_dis_END      (11)
#define SOC_ADE_RELOAD_DIS0_ch3_wdma_reload_dis_START    (12)
#define SOC_ADE_RELOAD_DIS0_ch3_wdma_reload_dis_END      (12)
#define SOC_ADE_RELOAD_DIS0_cmdq_wdma_reload_dis_START   (14)
#define SOC_ADE_RELOAD_DIS0_cmdq_wdma_reload_dis_END     (14)
#define SOC_ADE_RELOAD_DIS0_clip1_reload_dis_START       (15)
#define SOC_ADE_RELOAD_DIS0_clip1_reload_dis_END         (15)
#define SOC_ADE_RELOAD_DIS0_clip2_reload_dis_START       (16)
#define SOC_ADE_RELOAD_DIS0_clip2_reload_dis_END         (16)
#define SOC_ADE_RELOAD_DIS0_clip3_reload_dis_START       (17)
#define SOC_ADE_RELOAD_DIS0_clip3_reload_dis_END         (17)
#define SOC_ADE_RELOAD_DIS0_clip4_reload_dis_START       (18)
#define SOC_ADE_RELOAD_DIS0_clip4_reload_dis_END         (18)
#define SOC_ADE_RELOAD_DIS0_clip5_reload_dis_START       (19)
#define SOC_ADE_RELOAD_DIS0_clip5_reload_dis_END         (19)
#define SOC_ADE_RELOAD_DIS0_clip6_reload_dis_START       (20)
#define SOC_ADE_RELOAD_DIS0_clip6_reload_dis_END         (20)
#define SOC_ADE_RELOAD_DIS0_scl1_reload_dis_START        (21)
#define SOC_ADE_RELOAD_DIS0_scl1_reload_dis_END          (21)
#define SOC_ADE_RELOAD_DIS0_scl2_reload_dis_START        (22)
#define SOC_ADE_RELOAD_DIS0_scl2_reload_dis_END          (22)
#define SOC_ADE_RELOAD_DIS0_scl3_reload_dis_START        (23)
#define SOC_ADE_RELOAD_DIS0_scl3_reload_dis_END          (23)
#define SOC_ADE_RELOAD_DIS0_ctran1_reload_dis_START      (24)
#define SOC_ADE_RELOAD_DIS0_ctran1_reload_dis_END        (24)
#define SOC_ADE_RELOAD_DIS0_ctran2_reload_dis_START      (25)
#define SOC_ADE_RELOAD_DIS0_ctran2_reload_dis_END        (25)
#define SOC_ADE_RELOAD_DIS0_ctran3_reload_dis_START      (26)
#define SOC_ADE_RELOAD_DIS0_ctran3_reload_dis_END        (26)
#define SOC_ADE_RELOAD_DIS0_ctran4_reload_dis_START      (27)
#define SOC_ADE_RELOAD_DIS0_ctran4_reload_dis_END        (27)
#define SOC_ADE_RELOAD_DIS0_ctran5_reload_dis_START      (28)
#define SOC_ADE_RELOAD_DIS0_ctran5_reload_dis_END        (28)
#define SOC_ADE_RELOAD_DIS0_ctran6_reload_dis_START      (29)
#define SOC_ADE_RELOAD_DIS0_ctran6_reload_dis_END        (29)
#define SOC_ADE_RELOAD_DIS0_rot_reload_dis_START         (30)
#define SOC_ADE_RELOAD_DIS0_rot_reload_dis_END           (30)


/*****************************************************************************
 �ṹ��    : SOC_ADE_RELOAD_DIS1_UNION
 �ṹ˵��  : RELOAD_DIS1 �Ĵ����ṹ���塣��ַƫ����:0x00B0����ֵ:0x00000000�����:32
 �Ĵ���˵��: ��ģ��Ӳ��ͬ�����μĴ���1��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  cmdq1_reload_dis  : 1;  /* bit[0]   : ��ģ��Ӳ��ͬ�����Σ���Ҫ��ADE_SOFT_RST_SELѡ�����ʹ�ã�
                                                            0��ADE_SOFT_RST_SEL��Ӧ��bit=1ʱ����ģ����λ�������reload����ʼ������
                                                            1��ADE_SOFT_RST_SEL��Ӧ��bit=1ʱ����ģ����λ�󲻻�����reload�Ϳ�ʼ������ */
        unsigned int  cmdq2_reload_dis  : 1;  /* bit[1]   : ��ģ��Ӳ��ͬ�����Σ���Ҫ��ADE_SOFT_RST_SELѡ�����ʹ�ã�
                                                            0��ADE_SOFT_RST_SEL��Ӧ��bit=1ʱ����ģ����λ�������reload����ʼ������
                                                            1��ADE_SOFT_RST_SEL��Ӧ��bit=1ʱ����ģ����λ�󲻻�����reload�Ϳ�ʼ������ */
        unsigned int  reserved_0        : 1;  /* bit[2]   : ������ */
        unsigned int  gamma_reload_dis  : 1;  /* bit[3]   : ��ģ��Ӳ��ͬ�����Σ���Ҫ��ADE_SOFT_RST_SELѡ�����ʹ�ã�
                                                            0��ADE_SOFT_RST_SEL��Ӧ��bit=1ʱ����ģ����λ�������reload����ʼ������
                                                            1��ADE_SOFT_RST_SEL��Ӧ��bit=1ʱ����ģ����λ�󲻻�����reload�Ϳ�ʼ������ */
        unsigned int  dither_reload_dis : 1;  /* bit[4]   : ��ģ��Ӳ��ͬ�����Σ���Ҫ��ADE_SOFT_RST_SELѡ�����ʹ�ã�
                                                            0��ADE_SOFT_RST_SEL��Ӧ��bit=1ʱ����ģ����λ�������reload����ʼ������
                                                            1��ADE_SOFT_RST_SEL��Ӧ��bit=1ʱ����ģ����λ�󲻻�����reload�Ϳ�ʼ������ */
        unsigned int  ovly1_reload_dis  : 1;  /* bit[5]   : ��ģ��Ӳ��ͬ�����Σ���Ҫ��ADE_SOFT_RST_SELѡ�����ʹ�ã�
                                                            0��ADE_SOFT_RST_SEL��Ӧ��bit=1ʱ����ģ����λ�������reload����ʼ������
                                                            1��ADE_SOFT_RST_SEL��Ӧ��bit=1ʱ����ģ����λ�󲻻�����reload�Ϳ�ʼ������ */
        unsigned int  ovly2_reload_dis  : 1;  /* bit[6]   : ��ģ��Ӳ��ͬ�����Σ���Ҫ��ADE_SOFT_RST_SELѡ�����ʹ�ã�
                                                            0��ADE_SOFT_RST_SEL��Ӧ��bit=1ʱ����ģ����λ�������reload����ʼ������
                                                            1��ADE_SOFT_RST_SEL��Ӧ��bit=1ʱ����ģ����λ�󲻻�����reload�Ϳ�ʼ������ */
        unsigned int  ovly3_reload_dis  : 1;  /* bit[7]   : ��ģ��Ӳ��ͬ�����Σ���Ҫ��ADE_SOFT_RST_SELѡ�����ʹ�ã�
                                                            0��ADE_SOFT_RST_SEL��Ӧ��bit=1ʱ����ģ����λ�������reload����ʼ������
                                                            1��ADE_SOFT_RST_SEL��Ӧ��bit=1ʱ����ģ����λ�󲻻�����reload�Ϳ�ʼ������ */
        unsigned int  reserved_1        : 24; /* bit[8-31]: ������ */
    } reg;
} SOC_ADE_RELOAD_DIS1_UNION;
#endif
#define SOC_ADE_RELOAD_DIS1_cmdq1_reload_dis_START   (0)
#define SOC_ADE_RELOAD_DIS1_cmdq1_reload_dis_END     (0)
#define SOC_ADE_RELOAD_DIS1_cmdq2_reload_dis_START   (1)
#define SOC_ADE_RELOAD_DIS1_cmdq2_reload_dis_END     (1)
#define SOC_ADE_RELOAD_DIS1_gamma_reload_dis_START   (3)
#define SOC_ADE_RELOAD_DIS1_gamma_reload_dis_END     (3)
#define SOC_ADE_RELOAD_DIS1_dither_reload_dis_START  (4)
#define SOC_ADE_RELOAD_DIS1_dither_reload_dis_END    (4)
#define SOC_ADE_RELOAD_DIS1_ovly1_reload_dis_START   (5)
#define SOC_ADE_RELOAD_DIS1_ovly1_reload_dis_END     (5)
#define SOC_ADE_RELOAD_DIS1_ovly2_reload_dis_START   (6)
#define SOC_ADE_RELOAD_DIS1_ovly2_reload_dis_END     (6)
#define SOC_ADE_RELOAD_DIS1_ovly3_reload_dis_START   (7)
#define SOC_ADE_RELOAD_DIS1_ovly3_reload_dis_END     (7)


/*****************************************************************************
 �ṹ��    : SOC_ADE_EN_UNION
 �ṹ˵��  : EN �Ĵ����ṹ���塣��ַƫ����:0x0100����ֵ:0x00000000�����:32
 �Ĵ���˵��: ADEȫ��ʹ�ܼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  ade_en   : 1;  /* bit[0]   : ADEȫ��ʹ�ܣ���˼Ĵ���д���κ�ֵ��������һ��Config OK��
                                                   0�����ã�
                                                   1��ʹ�ܡ� */
        unsigned int  reserved : 31; /* bit[1-31]: ������ */
    } reg;
} SOC_ADE_EN_UNION;
#endif
#define SOC_ADE_EN_ade_en_START    (0)
#define SOC_ADE_EN_ade_en_END      (0)






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

#endif /* end of soc_ade_interface.h */
