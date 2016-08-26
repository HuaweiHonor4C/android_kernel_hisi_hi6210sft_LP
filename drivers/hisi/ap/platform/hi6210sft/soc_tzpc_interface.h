

/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/

#ifndef __SOC_TZPC_INTERFACE_H__
#define __SOC_TZPC_INTERFACE_H__

#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif



/*****************************************************************************
  2 �궨��
*****************************************************************************/

/****************************************************************************
                     (1/1) TZPC
 ****************************************************************************/
/* �Ĵ���˵����TZMA��ȫsize����
   λ����UNION�ṹ:  SOC_TZPC_TZPCR0SIZE_UNION */
#define SOC_TZPC_TZPCR0SIZE_ADDR(base)                ((base) + (0x0000))

/* �Ĵ���˵������ȫ����״̬�Ĵ���
   λ����UNION�ṹ:  SOC_TZPC_TZPCDECPROT0STAT_UNION */
#define SOC_TZPC_TZPCDECPROT0STAT_ADDR(base)          ((base) + (0x0800))

/* �Ĵ���˵�����ǰ�ȫ���üĴ���
   λ����UNION�ṹ:  SOC_TZPC_TZPCDECPROT0SET_UNION */
#define SOC_TZPC_TZPCDECPROT0SET_ADDR(base)           ((base) + (0x0804))

/* �Ĵ���˵������ȫ���üĴ���
   λ����UNION�ṹ:  SOC_TZPC_TZPCDECPROT0CLR_UNION */
#define SOC_TZPC_TZPCDECPROT0CLR_ADDR(base)           ((base) + (0x0808))

/* �Ĵ���˵������ȫ����״̬�Ĵ���
   λ����UNION�ṹ:  SOC_TZPC_TZPCDECPROT1STAT_UNION */
#define SOC_TZPC_TZPCDECPROT1STAT_ADDR(base)          ((base) + (0x080C))

/* �Ĵ���˵�����ǰ�ȫ���üĴ���
   λ����UNION�ṹ:  SOC_TZPC_TZPCDECPROT1SET_UNION */
#define SOC_TZPC_TZPCDECPROT1SET_ADDR(base)           ((base) + (0x0810))

/* �Ĵ���˵������ȫ���üĴ���
   λ����UNION�ṹ:  SOC_TZPC_TZPCDECPROT1CLR_UNION */
#define SOC_TZPC_TZPCDECPROT1CLR_ADDR(base)           ((base) + (0x0814))

/* �Ĵ���˵������ȫ����״̬�Ĵ���
   λ����UNION�ṹ:  SOC_TZPC_TZPCDECPROT2STAT_UNION */
#define SOC_TZPC_TZPCDECPROT2STAT_ADDR(base)          ((base) + (0x0818))

/* �Ĵ���˵�����ǰ�ȫ���üĴ���
   λ����UNION�ṹ:  SOC_TZPC_TZPCDECPROT2SET_UNION */
#define SOC_TZPC_TZPCDECPROT2SET_ADDR(base)           ((base) + (0x081C))

/* �Ĵ���˵������ȫ���üĴ���
   λ����UNION�ṹ:  SOC_TZPC_TZPCDECPROT2CLR_UNION */
#define SOC_TZPC_TZPCDECPROT2CLR_ADDR(base)           ((base) + (0x0820))

/* �Ĵ���˵������ȫ����״̬�Ĵ���
   λ����UNION�ṹ:  SOC_TZPC_TZPCDECPROT3STAT_UNION */
#define SOC_TZPC_TZPCDECPROT3STAT_ADDR(base)          ((base) + (0x0824))

/* �Ĵ���˵�����ǰ�ȫ���üĴ���
   λ����UNION�ṹ:  SOC_TZPC_TZPCDECPROT3SET_UNION */
#define SOC_TZPC_TZPCDECPROT3SET_ADDR(base)           ((base) + (0x0828))

/* �Ĵ���˵������ȫ���üĴ���
   λ����UNION�ṹ:  SOC_TZPC_TZPCDECPROT3CLR_UNION */
#define SOC_TZPC_TZPCDECPROT3CLR_ADDR(base)           ((base) + (0x082C))





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
                     (1/1) TZPC
 ****************************************************************************/
/*****************************************************************************
 �ṹ��    : SOC_TZPC_TZPCR0SIZE_UNION
 �ṹ˵��  : TZPCR0SIZE �Ĵ����ṹ���塣��ַƫ����:0x0000����ֵ:0x00000000�����:32
 �Ĵ���˵��: TZMA��ȫsize����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  tzpcr0size : 10; /* bit[0-9]  : 0x00000000 = no secure region
                                                      0x00000001 = 4KB secure region
                                                      0x00000002 = 8KB secure region
                                                      ��
                                                      0x000001FF = 2044KB secure region.
                                                      0x00000200 or above sets the entire RAM to secure regardless of size */
        unsigned int  reserved   : 22; /* bit[10-31]: reserved */
    } reg;
} SOC_TZPC_TZPCR0SIZE_UNION;
#endif
#define SOC_TZPC_TZPCR0SIZE_tzpcr0size_START  (0)
#define SOC_TZPC_TZPCR0SIZE_tzpcr0size_END    (9)


/*****************************************************************************
 �ṹ��    : SOC_TZPC_TZPCDECPROT0STAT_UNION
 �ṹ˵��  : TZPCDECPROT0STAT �Ĵ����ṹ���塣��ַƫ����:0x0800����ֵ:0xFFFFFFFF�����:32
 �Ĵ���˵��: ��ȫ����״̬�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  g2d_cfg_port        : 1;  /* bit[0] : G2D���ýӿڰ�ȫ����״̬��
                                                            0����ȫ
                                                            1���ǰ�ȫ */
        unsigned int  sio0_cfg_port       : 1;  /* bit[1] : SIO0���ýӿڰ�ȫ����״̬��
                                                            0����ȫ
                                                            1���ǰ�ȫ */
        unsigned int  sio1_cfg_port       : 1;  /* bit[2] : SIO1���ýӿڰ�ȫ����״̬��
                                                            0����ȫ
                                                            1���ǰ�ȫ */
        unsigned int  sio2_cfg_port       : 1;  /* bit[3] : SIO2���ýӿڰ�ȫ����״̬��
                                                            0����ȫ
                                                            1���ǰ�ȫ */
        unsigned int  sio3_cfg_port       : 1;  /* bit[4] : SIO3���ýӿڰ�ȫ����״̬��
                                                            0����ȫ
                                                            1���ǰ�ȫ */
        unsigned int  mmc0_cfg_port       : 1;  /* bit[5] : MMC0���ýӿڰ�ȫ����״̬��
                                                            0����ȫ
                                                            1���ǰ�ȫ */
        unsigned int  mmc1_cfg_port       : 1;  /* bit[6] : MMC1���ýӿڰ�ȫ����״̬��
                                                            0����ȫ
                                                            1���ǰ�ȫ */
        unsigned int  mmc2_cfg_port       : 1;  /* bit[7] : MMC2���ýӿڰ�ȫ����״̬��
                                                            0����ȫ
                                                            1���ǰ�ȫ */
        unsigned int  dsi_cfg_port        : 1;  /* bit[8] : DSI���ýӿڰ�ȫ����״̬��
                                                            0����ȫ
                                                            1���ǰ�ȫ */
        unsigned int  vdec_cfg_port       : 1;  /* bit[9] : VDEC���ýӿڰ�ȫ����״̬��
                                                            0����ȫ
                                                            1���ǰ�ȫ */
        unsigned int  venc_cfg_port       : 1;  /* bit[10]: VENC���ýӿڰ�ȫ����״̬��
                                                            0����ȫ
                                                            1���ǰ�ȫ */
        unsigned int  vpp_cfg_port        : 1;  /* bit[11]: VPP���ýӿڰ�ȫ����״̬��
                                                            0����ȫ
                                                            1���ǰ�ȫ */
        unsigned int  g3d_cfg_port        : 1;  /* bit[12]: G3D���ýӿڰ�ȫ����״̬��
                                                            0����ȫ
                                                            1���ǰ�ȫ */
        unsigned int  pwm0_cfg_port       : 1;  /* bit[13]: PWM0���ýӿڰ�ȫ����״̬��
                                                            0����ȫ
                                                            1���ǰ�ȫ */
        unsigned int  pwm1_cfg_port       : 1;  /* bit[14]: PWM1���ýӿڰ�ȫ����״̬��
                                                            0����ȫ
                                                            1���ǰ�ȫ */
        unsigned int  gpio_off4_cfg_port  : 1;  /* bit[15]: GPIO_OFF4 ���ýӿڰ�ȫ����״̬��
                                                            0����ȫ
                                                            1���ǰ�ȫ */
        unsigned int  gpio_off5_cfg_port  : 1;  /* bit[16]: GPIO_OFF5 ���ýӿڰ�ȫ����״̬��
                                                            0����ȫ
                                                            1���ǰ�ȫ */
        unsigned int  gpio_off6_cfg_port  : 1;  /* bit[17]: GPIO_OFF6 ���ýӿڰ�ȫ����״̬��
                                                            0����ȫ
                                                            1���ǰ�ȫ */
        unsigned int  gpio_off7_cfg_port  : 1;  /* bit[18]: GPIO_OFF7 ���ýӿڰ�ȫ����״̬��
                                                            0����ȫ
                                                            1���ǰ�ȫ */
        unsigned int  gpio_off8_cfg_port  : 1;  /* bit[19]: GPIO_OFF8 ���ýӿڰ�ȫ����״̬��
                                                            0����ȫ
                                                            1���ǰ�ȫ */
        unsigned int  gpio_off9_cfg_port  : 1;  /* bit[20]: GPIO_OFF9 ���ýӿڰ�ȫ����״̬��
                                                            0����ȫ
                                                            1���ǰ�ȫ */
        unsigned int  gpio_off10_cfg_port : 1;  /* bit[21]: GPIO_OFF10 ���ýӿڰ�ȫ����״̬��
                                                            0����ȫ
                                                            1���ǰ�ȫ */
        unsigned int  gpio_off11_cfg_port : 1;  /* bit[22]: GPIO_OFF11 ���ýӿڰ�ȫ����״̬��
                                                            0����ȫ
                                                            1���ǰ�ȫ */
        unsigned int  gpio_off12_cfg_port : 1;  /* bit[23]: GPIO_OFF12 ���ýӿڰ�ȫ����״̬��
                                                            0����ȫ
                                                            1���ǰ�ȫ */
        unsigned int  gpio_off13_cfg_port : 1;  /* bit[24]: GPIO_OFF13 ���ýӿڰ�ȫ����״̬��
                                                            0����ȫ
                                                            1���ǰ�ȫ */
        unsigned int  gpio_off14_cfg_port : 1;  /* bit[25]: GPIO_OFF14 ���ýӿڰ�ȫ����״̬��
                                                            0����ȫ
                                                            1���ǰ�ȫ */
        unsigned int  gpio_off15_cfg_port : 1;  /* bit[26]: GPIO_OFF15 ���ýӿڰ�ȫ����״̬��
                                                            0����ȫ
                                                            1���ǰ�ȫ */
        unsigned int  gpio_off16_cfg_port : 1;  /* bit[27]: GPIO_OFF16 ���ýӿڰ�ȫ����״̬��
                                                            0����ȫ
                                                            1���ǰ�ȫ */
        unsigned int  gpio_off17_cfg_port : 1;  /* bit[28]: GPIO_OFF17 ���ýӿڰ�ȫ����״̬��
                                                            0����ȫ
                                                            1���ǰ�ȫ */
        unsigned int  gpio_off18_cfg_port : 1;  /* bit[29]: GPIO_OFF18 ���ýӿڰ�ȫ����״̬��
                                                            0����ȫ
                                                            1���ǰ�ȫ */
        unsigned int  gpio_off19_cfg_port : 1;  /* bit[30]: GPIO_OFF19 ���ýӿڰ�ȫ����״̬��
                                                            0����ȫ
                                                            1���ǰ�ȫ */
        unsigned int  ioc_off_cfg_port    : 1;  /* bit[31]: IOC OFF ���ýӿڰ�ȫ����״̬��
                                                            0����ȫ
                                                            1���ǰ�ȫ */
    } reg;
} SOC_TZPC_TZPCDECPROT0STAT_UNION;
#endif
#define SOC_TZPC_TZPCDECPROT0STAT_g2d_cfg_port_START         (0)
#define SOC_TZPC_TZPCDECPROT0STAT_g2d_cfg_port_END           (0)
#define SOC_TZPC_TZPCDECPROT0STAT_sio0_cfg_port_START        (1)
#define SOC_TZPC_TZPCDECPROT0STAT_sio0_cfg_port_END          (1)
#define SOC_TZPC_TZPCDECPROT0STAT_sio1_cfg_port_START        (2)
#define SOC_TZPC_TZPCDECPROT0STAT_sio1_cfg_port_END          (2)
#define SOC_TZPC_TZPCDECPROT0STAT_sio2_cfg_port_START        (3)
#define SOC_TZPC_TZPCDECPROT0STAT_sio2_cfg_port_END          (3)
#define SOC_TZPC_TZPCDECPROT0STAT_sio3_cfg_port_START        (4)
#define SOC_TZPC_TZPCDECPROT0STAT_sio3_cfg_port_END          (4)
#define SOC_TZPC_TZPCDECPROT0STAT_mmc0_cfg_port_START        (5)
#define SOC_TZPC_TZPCDECPROT0STAT_mmc0_cfg_port_END          (5)
#define SOC_TZPC_TZPCDECPROT0STAT_mmc1_cfg_port_START        (6)
#define SOC_TZPC_TZPCDECPROT0STAT_mmc1_cfg_port_END          (6)
#define SOC_TZPC_TZPCDECPROT0STAT_mmc2_cfg_port_START        (7)
#define SOC_TZPC_TZPCDECPROT0STAT_mmc2_cfg_port_END          (7)
#define SOC_TZPC_TZPCDECPROT0STAT_dsi_cfg_port_START         (8)
#define SOC_TZPC_TZPCDECPROT0STAT_dsi_cfg_port_END           (8)
#define SOC_TZPC_TZPCDECPROT0STAT_vdec_cfg_port_START        (9)
#define SOC_TZPC_TZPCDECPROT0STAT_vdec_cfg_port_END          (9)
#define SOC_TZPC_TZPCDECPROT0STAT_venc_cfg_port_START        (10)
#define SOC_TZPC_TZPCDECPROT0STAT_venc_cfg_port_END          (10)
#define SOC_TZPC_TZPCDECPROT0STAT_vpp_cfg_port_START         (11)
#define SOC_TZPC_TZPCDECPROT0STAT_vpp_cfg_port_END           (11)
#define SOC_TZPC_TZPCDECPROT0STAT_g3d_cfg_port_START         (12)
#define SOC_TZPC_TZPCDECPROT0STAT_g3d_cfg_port_END           (12)
#define SOC_TZPC_TZPCDECPROT0STAT_pwm0_cfg_port_START        (13)
#define SOC_TZPC_TZPCDECPROT0STAT_pwm0_cfg_port_END          (13)
#define SOC_TZPC_TZPCDECPROT0STAT_pwm1_cfg_port_START        (14)
#define SOC_TZPC_TZPCDECPROT0STAT_pwm1_cfg_port_END          (14)
#define SOC_TZPC_TZPCDECPROT0STAT_gpio_off4_cfg_port_START   (15)
#define SOC_TZPC_TZPCDECPROT0STAT_gpio_off4_cfg_port_END     (15)
#define SOC_TZPC_TZPCDECPROT0STAT_gpio_off5_cfg_port_START   (16)
#define SOC_TZPC_TZPCDECPROT0STAT_gpio_off5_cfg_port_END     (16)
#define SOC_TZPC_TZPCDECPROT0STAT_gpio_off6_cfg_port_START   (17)
#define SOC_TZPC_TZPCDECPROT0STAT_gpio_off6_cfg_port_END     (17)
#define SOC_TZPC_TZPCDECPROT0STAT_gpio_off7_cfg_port_START   (18)
#define SOC_TZPC_TZPCDECPROT0STAT_gpio_off7_cfg_port_END     (18)
#define SOC_TZPC_TZPCDECPROT0STAT_gpio_off8_cfg_port_START   (19)
#define SOC_TZPC_TZPCDECPROT0STAT_gpio_off8_cfg_port_END     (19)
#define SOC_TZPC_TZPCDECPROT0STAT_gpio_off9_cfg_port_START   (20)
#define SOC_TZPC_TZPCDECPROT0STAT_gpio_off9_cfg_port_END     (20)
#define SOC_TZPC_TZPCDECPROT0STAT_gpio_off10_cfg_port_START  (21)
#define SOC_TZPC_TZPCDECPROT0STAT_gpio_off10_cfg_port_END    (21)
#define SOC_TZPC_TZPCDECPROT0STAT_gpio_off11_cfg_port_START  (22)
#define SOC_TZPC_TZPCDECPROT0STAT_gpio_off11_cfg_port_END    (22)
#define SOC_TZPC_TZPCDECPROT0STAT_gpio_off12_cfg_port_START  (23)
#define SOC_TZPC_TZPCDECPROT0STAT_gpio_off12_cfg_port_END    (23)
#define SOC_TZPC_TZPCDECPROT0STAT_gpio_off13_cfg_port_START  (24)
#define SOC_TZPC_TZPCDECPROT0STAT_gpio_off13_cfg_port_END    (24)
#define SOC_TZPC_TZPCDECPROT0STAT_gpio_off14_cfg_port_START  (25)
#define SOC_TZPC_TZPCDECPROT0STAT_gpio_off14_cfg_port_END    (25)
#define SOC_TZPC_TZPCDECPROT0STAT_gpio_off15_cfg_port_START  (26)
#define SOC_TZPC_TZPCDECPROT0STAT_gpio_off15_cfg_port_END    (26)
#define SOC_TZPC_TZPCDECPROT0STAT_gpio_off16_cfg_port_START  (27)
#define SOC_TZPC_TZPCDECPROT0STAT_gpio_off16_cfg_port_END    (27)
#define SOC_TZPC_TZPCDECPROT0STAT_gpio_off17_cfg_port_START  (28)
#define SOC_TZPC_TZPCDECPROT0STAT_gpio_off17_cfg_port_END    (28)
#define SOC_TZPC_TZPCDECPROT0STAT_gpio_off18_cfg_port_START  (29)
#define SOC_TZPC_TZPCDECPROT0STAT_gpio_off18_cfg_port_END    (29)
#define SOC_TZPC_TZPCDECPROT0STAT_gpio_off19_cfg_port_START  (30)
#define SOC_TZPC_TZPCDECPROT0STAT_gpio_off19_cfg_port_END    (30)
#define SOC_TZPC_TZPCDECPROT0STAT_ioc_off_cfg_port_START     (31)
#define SOC_TZPC_TZPCDECPROT0STAT_ioc_off_cfg_port_END       (31)


/*****************************************************************************
 �ṹ��    : SOC_TZPC_TZPCDECPROT0SET_UNION
 �ṹ˵��  : TZPCDECPROT0SET �Ĵ����ṹ���塣��ַƫ����:0x0804����ֵ:0x00000000�����:32
 �Ĵ���˵��: �ǰ�ȫ���üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  g2d_cfg_port        : 1;  /* bit[0] : G2D���ýӿڷǰ�ȫ���ã�
                                                            0����Ч
                                                            1������Ϊ�ǰ�ȫ */
        unsigned int  sio0_cfg_port       : 1;  /* bit[1] : SIO0���ýӿڷǰ�ȫ���ã�
                                                            0����Ч
                                                            1������Ϊ�ǰ�ȫ */
        unsigned int  sio1_cfg_port       : 1;  /* bit[2] : SIO1���ýӿڷǰ�ȫ���ã�
                                                            0����Ч
                                                            1������Ϊ�ǰ�ȫ */
        unsigned int  sio2_cfg_port       : 1;  /* bit[3] : SIO2���ýӿڷǰ�ȫ���ã�
                                                            0����Ч
                                                            1������Ϊ�ǰ�ȫ */
        unsigned int  sio3_cfg_port       : 1;  /* bit[4] : SIO3���ýӿڷǰ�ȫ���ã�
                                                            0����Ч
                                                            1������Ϊ�ǰ�ȫ */
        unsigned int  mmc0_cfg_port       : 1;  /* bit[5] : MMC0���ýӿڷǰ�ȫ���ã�
                                                            0����Ч
                                                            1������Ϊ�ǰ�ȫ */
        unsigned int  mmc1_cfg_port       : 1;  /* bit[6] : MMC1���ýӿڷǰ�ȫ���ã�
                                                            0����Ч
                                                            1������Ϊ�ǰ�ȫ */
        unsigned int  mmc2_cfg_port       : 1;  /* bit[7] : MMC2���ýӿڷǰ�ȫ���ã�
                                                            0����Ч
                                                            1������Ϊ�ǰ�ȫ */
        unsigned int  dsi_cfg_port        : 1;  /* bit[8] : DSI���ýӿڷǰ�ȫ���ã�
                                                            0����Ч
                                                            1������Ϊ�ǰ�ȫ */
        unsigned int  vdec_cfg_port       : 1;  /* bit[9] : VDEC���ýӿڷǰ�ȫ���ã�
                                                            0����Ч
                                                            1������Ϊ�ǰ�ȫ */
        unsigned int  venc_cfg_port       : 1;  /* bit[10]: VENC���ýӿڷǰ�ȫ���ã�
                                                            0����Ч
                                                            1������Ϊ�ǰ�ȫ */
        unsigned int  vpp_cfg_port        : 1;  /* bit[11]: VPP���ýӿڷǰ�ȫ���ã�
                                                            0����Ч
                                                            1������Ϊ�ǰ�ȫ */
        unsigned int  g3d_cfg_port        : 1;  /* bit[12]: G3D���ýӿڷǰ�ȫ���ã�
                                                            0����Ч
                                                            1������Ϊ�ǰ�ȫ */
        unsigned int  pwm0_cfg_port       : 1;  /* bit[13]: PWM0���ýӿڷǰ�ȫ���ã�
                                                            0����Ч
                                                            1������Ϊ�ǰ�ȫ */
        unsigned int  pwm1_cfg_port       : 1;  /* bit[14]: PWM1���ýӿڷǰ�ȫ���ã�
                                                            0����Ч
                                                            1������Ϊ�ǰ�ȫ */
        unsigned int  gpio_off4_cfg_port  : 1;  /* bit[15]: GPIO_OFF4 ���ýӿڷǰ�ȫ���ã�
                                                            0����Ч
                                                            1������Ϊ�ǰ�ȫ */
        unsigned int  gpio_off5_cfg_port  : 1;  /* bit[16]: GPIO_OFF5 ���ýӿڷǰ�ȫ���ã�
                                                            0����Ч
                                                            1������Ϊ�ǰ�ȫ */
        unsigned int  gpio_off6_cfg_port  : 1;  /* bit[17]: GPIO_OFF6 ���ýӿڷǰ�ȫ���ã�
                                                            0����Ч
                                                            1������Ϊ�ǰ�ȫ */
        unsigned int  gpio_off7_cfg_port  : 1;  /* bit[18]: GPIO_OFF7 ���ýӿڷǰ�ȫ���ã�
                                                            0����Ч
                                                            1������Ϊ�ǰ�ȫ */
        unsigned int  gpio_off8_cfg_port  : 1;  /* bit[19]: GPIO_OFF8 ���ýӿڷǰ�ȫ���ã�
                                                            0����Ч
                                                            1������Ϊ�ǰ�ȫ */
        unsigned int  gpio_off9_cfg_port  : 1;  /* bit[20]: GPIO_OFF9 ���ýӿڷǰ�ȫ���ã�
                                                            0����Ч
                                                            1������Ϊ�ǰ�ȫ */
        unsigned int  gpio_off10_cfg_port : 1;  /* bit[21]: GPIO_OFF10 ���ýӿڷǰ�ȫ���ã�
                                                            0����Ч
                                                            1������Ϊ�ǰ�ȫ */
        unsigned int  gpio_off11_cfg_port : 1;  /* bit[22]: GPIO_OFF11 ���ýӿڷǰ�ȫ���ã�
                                                            0����Ч
                                                            1������Ϊ�ǰ�ȫ */
        unsigned int  gpio_off12_cfg_port : 1;  /* bit[23]: GPIO_OFF12 ���ýӿڷǰ�ȫ���ã�
                                                            0����Ч
                                                            1������Ϊ�ǰ�ȫ */
        unsigned int  gpio_off13_cfg_port : 1;  /* bit[24]: GPIO_OFF13 ���ýӿڷǰ�ȫ���ã�
                                                            0����Ч
                                                            1������Ϊ�ǰ�ȫ */
        unsigned int  gpio_off14_cfg_port : 1;  /* bit[25]: GPIO_OFF14 ���ýӿڷǰ�ȫ���ã�
                                                            0����Ч
                                                            1������Ϊ�ǰ�ȫ */
        unsigned int  gpio_off15_cfg_port : 1;  /* bit[26]: GPIO_OFF15 ���ýӿڷǰ�ȫ���ã�
                                                            0����Ч
                                                            1������Ϊ�ǰ�ȫ */
        unsigned int  gpio_off16_cfg_port : 1;  /* bit[27]: GPIO_OFF16 ���ýӿڷǰ�ȫ���ã�
                                                            0����Ч
                                                            1������Ϊ�ǰ�ȫ */
        unsigned int  gpio_off17_cfg_port : 1;  /* bit[28]: GPIO_OFF17 ���ýӿڷǰ�ȫ���ã�
                                                            0����Ч
                                                            1������Ϊ�ǰ�ȫ */
        unsigned int  gpio_off18_cfg_port : 1;  /* bit[29]: GPIO_OFF18 ���ýӿڷǰ�ȫ���ã�
                                                            0����Ч
                                                            1������Ϊ�ǰ�ȫ */
        unsigned int  gpio_off19_cfg_port : 1;  /* bit[30]: GPIO_OFF19 ���ýӿڷǰ�ȫ���ã�
                                                            0����Ч
                                                            1������Ϊ�ǰ�ȫ */
        unsigned int  ioc_off_cfg_port    : 1;  /* bit[31]: IOC OFF ���ýӿڷǰ�ȫ���ã�
                                                            0����Ч
                                                            1������Ϊ�ǰ�ȫ */
    } reg;
} SOC_TZPC_TZPCDECPROT0SET_UNION;
#endif
#define SOC_TZPC_TZPCDECPROT0SET_g2d_cfg_port_START         (0)
#define SOC_TZPC_TZPCDECPROT0SET_g2d_cfg_port_END           (0)
#define SOC_TZPC_TZPCDECPROT0SET_sio0_cfg_port_START        (1)
#define SOC_TZPC_TZPCDECPROT0SET_sio0_cfg_port_END          (1)
#define SOC_TZPC_TZPCDECPROT0SET_sio1_cfg_port_START        (2)
#define SOC_TZPC_TZPCDECPROT0SET_sio1_cfg_port_END          (2)
#define SOC_TZPC_TZPCDECPROT0SET_sio2_cfg_port_START        (3)
#define SOC_TZPC_TZPCDECPROT0SET_sio2_cfg_port_END          (3)
#define SOC_TZPC_TZPCDECPROT0SET_sio3_cfg_port_START        (4)
#define SOC_TZPC_TZPCDECPROT0SET_sio3_cfg_port_END          (4)
#define SOC_TZPC_TZPCDECPROT0SET_mmc0_cfg_port_START        (5)
#define SOC_TZPC_TZPCDECPROT0SET_mmc0_cfg_port_END          (5)
#define SOC_TZPC_TZPCDECPROT0SET_mmc1_cfg_port_START        (6)
#define SOC_TZPC_TZPCDECPROT0SET_mmc1_cfg_port_END          (6)
#define SOC_TZPC_TZPCDECPROT0SET_mmc2_cfg_port_START        (7)
#define SOC_TZPC_TZPCDECPROT0SET_mmc2_cfg_port_END          (7)
#define SOC_TZPC_TZPCDECPROT0SET_dsi_cfg_port_START         (8)
#define SOC_TZPC_TZPCDECPROT0SET_dsi_cfg_port_END           (8)
#define SOC_TZPC_TZPCDECPROT0SET_vdec_cfg_port_START        (9)
#define SOC_TZPC_TZPCDECPROT0SET_vdec_cfg_port_END          (9)
#define SOC_TZPC_TZPCDECPROT0SET_venc_cfg_port_START        (10)
#define SOC_TZPC_TZPCDECPROT0SET_venc_cfg_port_END          (10)
#define SOC_TZPC_TZPCDECPROT0SET_vpp_cfg_port_START         (11)
#define SOC_TZPC_TZPCDECPROT0SET_vpp_cfg_port_END           (11)
#define SOC_TZPC_TZPCDECPROT0SET_g3d_cfg_port_START         (12)
#define SOC_TZPC_TZPCDECPROT0SET_g3d_cfg_port_END           (12)
#define SOC_TZPC_TZPCDECPROT0SET_pwm0_cfg_port_START        (13)
#define SOC_TZPC_TZPCDECPROT0SET_pwm0_cfg_port_END          (13)
#define SOC_TZPC_TZPCDECPROT0SET_pwm1_cfg_port_START        (14)
#define SOC_TZPC_TZPCDECPROT0SET_pwm1_cfg_port_END          (14)
#define SOC_TZPC_TZPCDECPROT0SET_gpio_off4_cfg_port_START   (15)
#define SOC_TZPC_TZPCDECPROT0SET_gpio_off4_cfg_port_END     (15)
#define SOC_TZPC_TZPCDECPROT0SET_gpio_off5_cfg_port_START   (16)
#define SOC_TZPC_TZPCDECPROT0SET_gpio_off5_cfg_port_END     (16)
#define SOC_TZPC_TZPCDECPROT0SET_gpio_off6_cfg_port_START   (17)
#define SOC_TZPC_TZPCDECPROT0SET_gpio_off6_cfg_port_END     (17)
#define SOC_TZPC_TZPCDECPROT0SET_gpio_off7_cfg_port_START   (18)
#define SOC_TZPC_TZPCDECPROT0SET_gpio_off7_cfg_port_END     (18)
#define SOC_TZPC_TZPCDECPROT0SET_gpio_off8_cfg_port_START   (19)
#define SOC_TZPC_TZPCDECPROT0SET_gpio_off8_cfg_port_END     (19)
#define SOC_TZPC_TZPCDECPROT0SET_gpio_off9_cfg_port_START   (20)
#define SOC_TZPC_TZPCDECPROT0SET_gpio_off9_cfg_port_END     (20)
#define SOC_TZPC_TZPCDECPROT0SET_gpio_off10_cfg_port_START  (21)
#define SOC_TZPC_TZPCDECPROT0SET_gpio_off10_cfg_port_END    (21)
#define SOC_TZPC_TZPCDECPROT0SET_gpio_off11_cfg_port_START  (22)
#define SOC_TZPC_TZPCDECPROT0SET_gpio_off11_cfg_port_END    (22)
#define SOC_TZPC_TZPCDECPROT0SET_gpio_off12_cfg_port_START  (23)
#define SOC_TZPC_TZPCDECPROT0SET_gpio_off12_cfg_port_END    (23)
#define SOC_TZPC_TZPCDECPROT0SET_gpio_off13_cfg_port_START  (24)
#define SOC_TZPC_TZPCDECPROT0SET_gpio_off13_cfg_port_END    (24)
#define SOC_TZPC_TZPCDECPROT0SET_gpio_off14_cfg_port_START  (25)
#define SOC_TZPC_TZPCDECPROT0SET_gpio_off14_cfg_port_END    (25)
#define SOC_TZPC_TZPCDECPROT0SET_gpio_off15_cfg_port_START  (26)
#define SOC_TZPC_TZPCDECPROT0SET_gpio_off15_cfg_port_END    (26)
#define SOC_TZPC_TZPCDECPROT0SET_gpio_off16_cfg_port_START  (27)
#define SOC_TZPC_TZPCDECPROT0SET_gpio_off16_cfg_port_END    (27)
#define SOC_TZPC_TZPCDECPROT0SET_gpio_off17_cfg_port_START  (28)
#define SOC_TZPC_TZPCDECPROT0SET_gpio_off17_cfg_port_END    (28)
#define SOC_TZPC_TZPCDECPROT0SET_gpio_off18_cfg_port_START  (29)
#define SOC_TZPC_TZPCDECPROT0SET_gpio_off18_cfg_port_END    (29)
#define SOC_TZPC_TZPCDECPROT0SET_gpio_off19_cfg_port_START  (30)
#define SOC_TZPC_TZPCDECPROT0SET_gpio_off19_cfg_port_END    (30)
#define SOC_TZPC_TZPCDECPROT0SET_ioc_off_cfg_port_START     (31)
#define SOC_TZPC_TZPCDECPROT0SET_ioc_off_cfg_port_END       (31)


/*****************************************************************************
 �ṹ��    : SOC_TZPC_TZPCDECPROT0CLR_UNION
 �ṹ˵��  : TZPCDECPROT0CLR �Ĵ����ṹ���塣��ַƫ����:0x0808����ֵ:0x00000000�����:32
 �Ĵ���˵��: ��ȫ���üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  g2d_cfg_port        : 1;  /* bit[0] : G2D���ýӿڰ�ȫ���ã�
                                                            0����Ч
                                                            1������Ϊ��ȫ */
        unsigned int  sio0_cfg_port       : 1;  /* bit[1] : SIO0���ýӿڰ�ȫ���ã�
                                                            0����Ч
                                                            1������Ϊ��ȫ */
        unsigned int  sio1_cfg_port       : 1;  /* bit[2] : SIO1���ýӿڰ�ȫ���ã�
                                                            0����Ч
                                                            1������Ϊ��ȫ */
        unsigned int  sio2_cfg_port       : 1;  /* bit[3] : SIO2���ýӿڰ�ȫ���ã�
                                                            0����Ч
                                                            1������Ϊ��ȫ */
        unsigned int  sio3_cfg_port       : 1;  /* bit[4] : SIO3���ýӿڰ�ȫ���ã�
                                                            0����Ч
                                                            1������Ϊ��ȫ */
        unsigned int  mmc0_cfg_port       : 1;  /* bit[5] : MMC0���ýӿڰ�ȫ���ã�
                                                            0����Ч
                                                            1������Ϊ��ȫ */
        unsigned int  mmc1_cfg_port       : 1;  /* bit[6] : MMC1���ýӿڰ�ȫ���ã�
                                                            0����Ч
                                                            1������Ϊ��ȫ */
        unsigned int  mmc2_cfg_port       : 1;  /* bit[7] : MMC2���ýӿڰ�ȫ���ã�
                                                            0����Ч
                                                            1������Ϊ��ȫ */
        unsigned int  dsi_cfg_port        : 1;  /* bit[8] : DSI���ýӿڰ�ȫ���ã�
                                                            0����Ч
                                                            1������Ϊ��ȫ */
        unsigned int  vdec_cfg_port       : 1;  /* bit[9] : VDEC���ýӿڰ�ȫ���ã�
                                                            0����Ч
                                                            1������Ϊ��ȫ */
        unsigned int  venc_cfg_port       : 1;  /* bit[10]: VENC���ýӿڰ�ȫ���ã�
                                                            0����Ч
                                                            1������Ϊ��ȫ */
        unsigned int  vpp_cfg_port        : 1;  /* bit[11]: VPP���ýӿڰ�ȫ���ã�
                                                            0����Ч
                                                            1������Ϊ��ȫ */
        unsigned int  g3d_cfg_port        : 1;  /* bit[12]: G3D���ýӿڰ�ȫ���ã�
                                                            0����Ч
                                                            1������Ϊ��ȫ */
        unsigned int  pwm0_cfg_port       : 1;  /* bit[13]: PWM0���ýӿڰ�ȫ���ã�
                                                            0����Ч
                                                            1������Ϊ��ȫ */
        unsigned int  pwm1_cfg_port       : 1;  /* bit[14]: PWM1���ýӿڰ�ȫ���ã�
                                                            0����Ч
                                                            1������Ϊ��ȫ */
        unsigned int  gpio_off4_cfg_port  : 1;  /* bit[15]: GPIO_OFF4 ���ýӿڰ�ȫ���ã�
                                                            0����Ч
                                                            1������Ϊ��ȫ */
        unsigned int  gpio_off5_cfg_port  : 1;  /* bit[16]: GPIO_OFF5 ���ýӿڰ�ȫ���ã�
                                                            0����Ч
                                                            1������Ϊ��ȫ */
        unsigned int  gpio_off6_cfg_port  : 1;  /* bit[17]: GPIO_OFF6 ���ýӿڰ�ȫ���ã�
                                                            0����Ч
                                                            1������Ϊ��ȫ */
        unsigned int  gpio_off7_cfg_port  : 1;  /* bit[18]: GPIO_OFF7 ���ýӿڰ�ȫ���ã�
                                                            0����Ч
                                                            1������Ϊ��ȫ */
        unsigned int  gpio_off8_cfg_port  : 1;  /* bit[19]: GPIO_OFF8 ���ýӿڰ�ȫ���ã�
                                                            0����Ч
                                                            1������Ϊ��ȫ */
        unsigned int  gpio_off9_cfg_port  : 1;  /* bit[20]: GPIO_OFF9 ���ýӿڰ�ȫ���ã�
                                                            0����Ч
                                                            1������Ϊ��ȫ */
        unsigned int  gpio_off10_cfg_port : 1;  /* bit[21]: GPIO_OFF10 ���ýӿڰ�ȫ���ã�
                                                            0����Ч
                                                            1������Ϊ��ȫ */
        unsigned int  gpio_off11_cfg_port : 1;  /* bit[22]: GPIO_OFF11 ���ýӿڰ�ȫ���ã�
                                                            0����Ч
                                                            1������Ϊ��ȫ */
        unsigned int  gpio_off12_cfg_port : 1;  /* bit[23]: GPIO_OFF12 ���ýӿڰ�ȫ���ã�
                                                            0����Ч
                                                            1������Ϊ��ȫ */
        unsigned int  gpio_off13_cfg_port : 1;  /* bit[24]: GPIO_OFF13 ���ýӿڰ�ȫ���ã�
                                                            0����Ч
                                                            1������Ϊ��ȫ */
        unsigned int  gpio_off14_cfg_port : 1;  /* bit[25]: GPIO_OFF14 ���ýӿڰ�ȫ���ã�
                                                            0����Ч
                                                            1������Ϊ��ȫ */
        unsigned int  gpio_off15_cfg_port : 1;  /* bit[26]: GPIO_OFF15 ���ýӿڰ�ȫ���ã�
                                                            0����Ч
                                                            1������Ϊ��ȫ */
        unsigned int  gpio_off16_cfg_port : 1;  /* bit[27]: GPIO_OFF16 ���ýӿڰ�ȫ���ã�
                                                            0����Ч
                                                            1������Ϊ��ȫ */
        unsigned int  gpio_off17_cfg_port : 1;  /* bit[28]: GPIO_OFF17 ���ýӿڰ�ȫ���ã�
                                                            0����Ч
                                                            1������Ϊ��ȫ */
        unsigned int  gpio_off18_cfg_port : 1;  /* bit[29]: GPIO_OFF18 ���ýӿڰ�ȫ���ã�
                                                            0����Ч
                                                            1������Ϊ��ȫ */
        unsigned int  gpio_off19_cfg_port : 1;  /* bit[30]: GPIO_OFF19 ���ýӿڰ�ȫ���ã�
                                                            0����Ч
                                                            1������Ϊ��ȫ */
        unsigned int  ioc_off_cfg_port    : 1;  /* bit[31]: IOC OFF ���ýӿڰ�ȫ���ã�
                                                            0����Ч
                                                            1������Ϊ��ȫ */
    } reg;
} SOC_TZPC_TZPCDECPROT0CLR_UNION;
#endif
#define SOC_TZPC_TZPCDECPROT0CLR_g2d_cfg_port_START         (0)
#define SOC_TZPC_TZPCDECPROT0CLR_g2d_cfg_port_END           (0)
#define SOC_TZPC_TZPCDECPROT0CLR_sio0_cfg_port_START        (1)
#define SOC_TZPC_TZPCDECPROT0CLR_sio0_cfg_port_END          (1)
#define SOC_TZPC_TZPCDECPROT0CLR_sio1_cfg_port_START        (2)
#define SOC_TZPC_TZPCDECPROT0CLR_sio1_cfg_port_END          (2)
#define SOC_TZPC_TZPCDECPROT0CLR_sio2_cfg_port_START        (3)
#define SOC_TZPC_TZPCDECPROT0CLR_sio2_cfg_port_END          (3)
#define SOC_TZPC_TZPCDECPROT0CLR_sio3_cfg_port_START        (4)
#define SOC_TZPC_TZPCDECPROT0CLR_sio3_cfg_port_END          (4)
#define SOC_TZPC_TZPCDECPROT0CLR_mmc0_cfg_port_START        (5)
#define SOC_TZPC_TZPCDECPROT0CLR_mmc0_cfg_port_END          (5)
#define SOC_TZPC_TZPCDECPROT0CLR_mmc1_cfg_port_START        (6)
#define SOC_TZPC_TZPCDECPROT0CLR_mmc1_cfg_port_END          (6)
#define SOC_TZPC_TZPCDECPROT0CLR_mmc2_cfg_port_START        (7)
#define SOC_TZPC_TZPCDECPROT0CLR_mmc2_cfg_port_END          (7)
#define SOC_TZPC_TZPCDECPROT0CLR_dsi_cfg_port_START         (8)
#define SOC_TZPC_TZPCDECPROT0CLR_dsi_cfg_port_END           (8)
#define SOC_TZPC_TZPCDECPROT0CLR_vdec_cfg_port_START        (9)
#define SOC_TZPC_TZPCDECPROT0CLR_vdec_cfg_port_END          (9)
#define SOC_TZPC_TZPCDECPROT0CLR_venc_cfg_port_START        (10)
#define SOC_TZPC_TZPCDECPROT0CLR_venc_cfg_port_END          (10)
#define SOC_TZPC_TZPCDECPROT0CLR_vpp_cfg_port_START         (11)
#define SOC_TZPC_TZPCDECPROT0CLR_vpp_cfg_port_END           (11)
#define SOC_TZPC_TZPCDECPROT0CLR_g3d_cfg_port_START         (12)
#define SOC_TZPC_TZPCDECPROT0CLR_g3d_cfg_port_END           (12)
#define SOC_TZPC_TZPCDECPROT0CLR_pwm0_cfg_port_START        (13)
#define SOC_TZPC_TZPCDECPROT0CLR_pwm0_cfg_port_END          (13)
#define SOC_TZPC_TZPCDECPROT0CLR_pwm1_cfg_port_START        (14)
#define SOC_TZPC_TZPCDECPROT0CLR_pwm1_cfg_port_END          (14)
#define SOC_TZPC_TZPCDECPROT0CLR_gpio_off4_cfg_port_START   (15)
#define SOC_TZPC_TZPCDECPROT0CLR_gpio_off4_cfg_port_END     (15)
#define SOC_TZPC_TZPCDECPROT0CLR_gpio_off5_cfg_port_START   (16)
#define SOC_TZPC_TZPCDECPROT0CLR_gpio_off5_cfg_port_END     (16)
#define SOC_TZPC_TZPCDECPROT0CLR_gpio_off6_cfg_port_START   (17)
#define SOC_TZPC_TZPCDECPROT0CLR_gpio_off6_cfg_port_END     (17)
#define SOC_TZPC_TZPCDECPROT0CLR_gpio_off7_cfg_port_START   (18)
#define SOC_TZPC_TZPCDECPROT0CLR_gpio_off7_cfg_port_END     (18)
#define SOC_TZPC_TZPCDECPROT0CLR_gpio_off8_cfg_port_START   (19)
#define SOC_TZPC_TZPCDECPROT0CLR_gpio_off8_cfg_port_END     (19)
#define SOC_TZPC_TZPCDECPROT0CLR_gpio_off9_cfg_port_START   (20)
#define SOC_TZPC_TZPCDECPROT0CLR_gpio_off9_cfg_port_END     (20)
#define SOC_TZPC_TZPCDECPROT0CLR_gpio_off10_cfg_port_START  (21)
#define SOC_TZPC_TZPCDECPROT0CLR_gpio_off10_cfg_port_END    (21)
#define SOC_TZPC_TZPCDECPROT0CLR_gpio_off11_cfg_port_START  (22)
#define SOC_TZPC_TZPCDECPROT0CLR_gpio_off11_cfg_port_END    (22)
#define SOC_TZPC_TZPCDECPROT0CLR_gpio_off12_cfg_port_START  (23)
#define SOC_TZPC_TZPCDECPROT0CLR_gpio_off12_cfg_port_END    (23)
#define SOC_TZPC_TZPCDECPROT0CLR_gpio_off13_cfg_port_START  (24)
#define SOC_TZPC_TZPCDECPROT0CLR_gpio_off13_cfg_port_END    (24)
#define SOC_TZPC_TZPCDECPROT0CLR_gpio_off14_cfg_port_START  (25)
#define SOC_TZPC_TZPCDECPROT0CLR_gpio_off14_cfg_port_END    (25)
#define SOC_TZPC_TZPCDECPROT0CLR_gpio_off15_cfg_port_START  (26)
#define SOC_TZPC_TZPCDECPROT0CLR_gpio_off15_cfg_port_END    (26)
#define SOC_TZPC_TZPCDECPROT0CLR_gpio_off16_cfg_port_START  (27)
#define SOC_TZPC_TZPCDECPROT0CLR_gpio_off16_cfg_port_END    (27)
#define SOC_TZPC_TZPCDECPROT0CLR_gpio_off17_cfg_port_START  (28)
#define SOC_TZPC_TZPCDECPROT0CLR_gpio_off17_cfg_port_END    (28)
#define SOC_TZPC_TZPCDECPROT0CLR_gpio_off18_cfg_port_START  (29)
#define SOC_TZPC_TZPCDECPROT0CLR_gpio_off18_cfg_port_END    (29)
#define SOC_TZPC_TZPCDECPROT0CLR_gpio_off19_cfg_port_START  (30)
#define SOC_TZPC_TZPCDECPROT0CLR_gpio_off19_cfg_port_END    (30)
#define SOC_TZPC_TZPCDECPROT0CLR_ioc_off_cfg_port_START     (31)
#define SOC_TZPC_TZPCDECPROT0CLR_ioc_off_cfg_port_END       (31)


/*****************************************************************************
 �ṹ��    : SOC_TZPC_TZPCDECPROT1STAT_UNION
 �ṹ˵��  : TZPCDECPROT1STAT �Ĵ����ṹ���塣��ַƫ����:0x080C����ֵ:0x3FFFFFFF�����:32
 �Ĵ���˵��: ��ȫ����״̬�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  tzasc_cfg_port         : 1;  /* bit[0]    : TZASC ���ýӿڰ�ȫ����״̬��
                                                                  0����ȫ
                                                                  1���ǰ�ȫ */
        unsigned int  ddrc_cfg_port          : 1;  /* bit[1]    : DDRC ���ýӿڰ�ȫ����״̬��
                                                                  0����ȫ
                                                                  1���ǰ�ȫ */
        unsigned int  i2c0_cfg_port          : 1;  /* bit[2]    : I2C0 ���ýӿڰ�ȫ����״̬��
                                                                  0����ȫ
                                                                  1���ǰ�ȫ */
        unsigned int  i2c1_cfg_port          : 1;  /* bit[3]    : I2C1 ���ýӿڰ�ȫ����״̬��
                                                                  0����ȫ
                                                                  1���ǰ�ȫ */
        unsigned int  i2c2_cfg_port          : 1;  /* bit[4]    : I2C2 ���ýӿڰ�ȫ����״̬��
                                                                  0����ȫ
                                                                  1���ǰ�ȫ */
        unsigned int  i2c3_cfg_port          : 1;  /* bit[5]    : I2C3 ���ýӿڰ�ȫ����״̬��
                                                                  0����ȫ
                                                                  1���ǰ�ȫ */
        unsigned int  i2c4_cfg_port          : 1;  /* bit[6]    : I2C4 ���ýӿڰ�ȫ����״̬��
                                                                  0����ȫ
                                                                  1���ǰ�ȫ */
        unsigned int  i2c5_cfg_port          : 1;  /* bit[7]    : I2C5 ���ýӿڰ�ȫ����״̬��
                                                                  0����ȫ
                                                                  1���ǰ�ȫ */
        unsigned int  uart0_cfg_port         : 1;  /* bit[8]    : UART0 ���ýӿڰ�ȫ����״̬��
                                                                  0����ȫ
                                                                  1���ǰ�ȫ */
        unsigned int  uart1_cfg_port         : 1;  /* bit[9]    : UART1 ���ýӿڰ�ȫ����״̬��
                                                                  0����ȫ
                                                                  1���ǰ�ȫ */
        unsigned int  uart2_cfg_port         : 1;  /* bit[10]   : UART2 ���ýӿڰ�ȫ����״̬��
                                                                  0����ȫ
                                                                  1���ǰ�ȫ */
        unsigned int  uart3_cfg_port         : 1;  /* bit[11]   : UART3 ���ýӿڰ�ȫ����״̬��
                                                                  0����ȫ
                                                                  1���ǰ�ȫ */
        unsigned int  uart4_cfg_port         : 1;  /* bit[12]   : UART4 ���ýӿڰ�ȫ����״̬��
                                                                  0����ȫ
                                                                  1���ǰ�ȫ */
        unsigned int  uart5_cfg_port         : 1;  /* bit[13]   : UART5 ���ýӿڰ�ȫ����״̬��
                                                                  0����ȫ
                                                                  1���ǰ�ȫ */
        unsigned int  uart6_cfg_port         : 1;  /* bit[14]   : UART6 ���ýӿڰ�ȫ����״̬��
                                                                  0����ȫ
                                                                  1���ǰ�ȫ */
        unsigned int  ssp0_cfg_port          : 1;  /* bit[15]   : SSP0 ���ýӿڰ�ȫ����״̬��
                                                                  0����ȫ
                                                                  1���ǰ�ȫ */
        unsigned int  ssp1_cfg_port          : 1;  /* bit[16]   : SSP1 ���ýӿڰ�ȫ����״̬��
                                                                  0����ȫ
                                                                  1���ǰ�ȫ */
        unsigned int  asp_cfg_port           : 1;  /* bit[17]   : ASP ���ýӿڰ�ȫ����״̬��
                                                                  0����ȫ
                                                                  1���ǰ�ȫ */
        unsigned int  hifiitcm               : 1;  /* bit[18]   : HIFIITCM ���ýӿڰ�ȫ����״̬��
                                                                  0����ȫ
                                                                  1���ǰ�ȫ */
        unsigned int  hifidtcm               : 1;  /* bit[19]   : HIFIDTCM ���ýӿڰ�ȫ����״̬��
                                                                  0����ȫ
                                                                  1���ǰ�ȫ */
        unsigned int  pmctrl_cfg_port        : 1;  /* bit[20]   : PMCTRL��3K�ռ����ýӿڰ�ȫ����״̬��
                                                                  0����ȫ
                                                                  1���ǰ�ȫ
                                                                  ����1K�ռ�ʼ�շǰ�ȫ�� */
        unsigned int  scoff_sec_ctrl         : 1;  /* bit[21]   : SCOFF_SEC_CTRL ���ýӿڰ�ȫ����״̬��
                                                                  0����ȫ
                                                                  1���ǰ�ȫ */
        unsigned int  scoff_sec_ctrl_rd0     : 1;  /* bit[22]   : SCOFF_SEC_CTRL_RD0 ���ýӿڰ�ȫ����״̬��
                                                                  0����ȫ
                                                                  1���ǰ�ȫ */
        unsigned int  scoff_sec_ctrl_rd1     : 1;  /* bit[23]   : SCOFF_SEC_CTRL_RD1 ���ýӿڰ�ȫ����״̬��
                                                                  0����ȫ
                                                                  1���ǰ�ȫ */
        unsigned int  ap2mdm_tzasc_boot_lock : 1;  /* bit[24]   : AP2MDM_TZASC_BOOT_LOCK��ȫ����״̬��
                                                                  0��LOCK
                                                                  1����LOCK */
        unsigned int  ddrc_tzasc_boot_lock   : 1;  /* bit[25]   : DDRC_TZASC_BOOT_LOCK��ȫ����״̬��
                                                                  0��LOCK
                                                                  1����LOCK */
        unsigned int  seceng_cfg_port        : 2;  /* bit[26-27]: SECENG���ÿڰ�ȫ����״̬��
                                                                  2'b11�����ǰ�ȫתΪ��ȫ���ʣ�
                                                                  2'b10������͸������������
                                                                  2'b0x��ֻ�а�ȫ�ɷ��ʡ� */
        unsigned int  nandc_cfg_port         : 1;  /* bit[28]   : NANDC���ýӿڰ�ȫ����״̬��
                                                                  0����ȫ
                                                                  1���ǰ�ȫ */
        unsigned int  coresight_cfg_port     : 1;  /* bit[29]   : CoreSight���ýӿڰ�ȫ����״̬��
                                                                  0����ȫ
                                                                  1���ǰ�ȫ */
        unsigned int  reserved               : 2;  /* bit[30-31]: reserved */
    } reg;
} SOC_TZPC_TZPCDECPROT1STAT_UNION;
#endif
#define SOC_TZPC_TZPCDECPROT1STAT_tzasc_cfg_port_START          (0)
#define SOC_TZPC_TZPCDECPROT1STAT_tzasc_cfg_port_END            (0)
#define SOC_TZPC_TZPCDECPROT1STAT_ddrc_cfg_port_START           (1)
#define SOC_TZPC_TZPCDECPROT1STAT_ddrc_cfg_port_END             (1)
#define SOC_TZPC_TZPCDECPROT1STAT_i2c0_cfg_port_START           (2)
#define SOC_TZPC_TZPCDECPROT1STAT_i2c0_cfg_port_END             (2)
#define SOC_TZPC_TZPCDECPROT1STAT_i2c1_cfg_port_START           (3)
#define SOC_TZPC_TZPCDECPROT1STAT_i2c1_cfg_port_END             (3)
#define SOC_TZPC_TZPCDECPROT1STAT_i2c2_cfg_port_START           (4)
#define SOC_TZPC_TZPCDECPROT1STAT_i2c2_cfg_port_END             (4)
#define SOC_TZPC_TZPCDECPROT1STAT_i2c3_cfg_port_START           (5)
#define SOC_TZPC_TZPCDECPROT1STAT_i2c3_cfg_port_END             (5)
#define SOC_TZPC_TZPCDECPROT1STAT_i2c4_cfg_port_START           (6)
#define SOC_TZPC_TZPCDECPROT1STAT_i2c4_cfg_port_END             (6)
#define SOC_TZPC_TZPCDECPROT1STAT_i2c5_cfg_port_START           (7)
#define SOC_TZPC_TZPCDECPROT1STAT_i2c5_cfg_port_END             (7)
#define SOC_TZPC_TZPCDECPROT1STAT_uart0_cfg_port_START          (8)
#define SOC_TZPC_TZPCDECPROT1STAT_uart0_cfg_port_END            (8)
#define SOC_TZPC_TZPCDECPROT1STAT_uart1_cfg_port_START          (9)
#define SOC_TZPC_TZPCDECPROT1STAT_uart1_cfg_port_END            (9)
#define SOC_TZPC_TZPCDECPROT1STAT_uart2_cfg_port_START          (10)
#define SOC_TZPC_TZPCDECPROT1STAT_uart2_cfg_port_END            (10)
#define SOC_TZPC_TZPCDECPROT1STAT_uart3_cfg_port_START          (11)
#define SOC_TZPC_TZPCDECPROT1STAT_uart3_cfg_port_END            (11)
#define SOC_TZPC_TZPCDECPROT1STAT_uart4_cfg_port_START          (12)
#define SOC_TZPC_TZPCDECPROT1STAT_uart4_cfg_port_END            (12)
#define SOC_TZPC_TZPCDECPROT1STAT_uart5_cfg_port_START          (13)
#define SOC_TZPC_TZPCDECPROT1STAT_uart5_cfg_port_END            (13)
#define SOC_TZPC_TZPCDECPROT1STAT_uart6_cfg_port_START          (14)
#define SOC_TZPC_TZPCDECPROT1STAT_uart6_cfg_port_END            (14)
#define SOC_TZPC_TZPCDECPROT1STAT_ssp0_cfg_port_START           (15)
#define SOC_TZPC_TZPCDECPROT1STAT_ssp0_cfg_port_END             (15)
#define SOC_TZPC_TZPCDECPROT1STAT_ssp1_cfg_port_START           (16)
#define SOC_TZPC_TZPCDECPROT1STAT_ssp1_cfg_port_END             (16)
#define SOC_TZPC_TZPCDECPROT1STAT_asp_cfg_port_START            (17)
#define SOC_TZPC_TZPCDECPROT1STAT_asp_cfg_port_END              (17)
#define SOC_TZPC_TZPCDECPROT1STAT_hifiitcm_START                (18)
#define SOC_TZPC_TZPCDECPROT1STAT_hifiitcm_END                  (18)
#define SOC_TZPC_TZPCDECPROT1STAT_hifidtcm_START                (19)
#define SOC_TZPC_TZPCDECPROT1STAT_hifidtcm_END                  (19)
#define SOC_TZPC_TZPCDECPROT1STAT_pmctrl_cfg_port_START         (20)
#define SOC_TZPC_TZPCDECPROT1STAT_pmctrl_cfg_port_END           (20)
#define SOC_TZPC_TZPCDECPROT1STAT_scoff_sec_ctrl_START          (21)
#define SOC_TZPC_TZPCDECPROT1STAT_scoff_sec_ctrl_END            (21)
#define SOC_TZPC_TZPCDECPROT1STAT_scoff_sec_ctrl_rd0_START      (22)
#define SOC_TZPC_TZPCDECPROT1STAT_scoff_sec_ctrl_rd0_END        (22)
#define SOC_TZPC_TZPCDECPROT1STAT_scoff_sec_ctrl_rd1_START      (23)
#define SOC_TZPC_TZPCDECPROT1STAT_scoff_sec_ctrl_rd1_END        (23)
#define SOC_TZPC_TZPCDECPROT1STAT_ap2mdm_tzasc_boot_lock_START  (24)
#define SOC_TZPC_TZPCDECPROT1STAT_ap2mdm_tzasc_boot_lock_END    (24)
#define SOC_TZPC_TZPCDECPROT1STAT_ddrc_tzasc_boot_lock_START    (25)
#define SOC_TZPC_TZPCDECPROT1STAT_ddrc_tzasc_boot_lock_END      (25)
#define SOC_TZPC_TZPCDECPROT1STAT_seceng_cfg_port_START         (26)
#define SOC_TZPC_TZPCDECPROT1STAT_seceng_cfg_port_END           (27)
#define SOC_TZPC_TZPCDECPROT1STAT_nandc_cfg_port_START          (28)
#define SOC_TZPC_TZPCDECPROT1STAT_nandc_cfg_port_END            (28)
#define SOC_TZPC_TZPCDECPROT1STAT_coresight_cfg_port_START      (29)
#define SOC_TZPC_TZPCDECPROT1STAT_coresight_cfg_port_END        (29)


/*****************************************************************************
 �ṹ��    : SOC_TZPC_TZPCDECPROT1SET_UNION
 �ṹ˵��  : TZPCDECPROT1SET �Ĵ����ṹ���塣��ַƫ����:0x0810����ֵ:0x00000000�����:32
 �Ĵ���˵��: �ǰ�ȫ���üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  tzasc_cfg_port         : 1;  /* bit[0]    : TZASC ���ýӿڷǰ�ȫ���ã�
                                                                  0����Ч
                                                                  1���ǰ�ȫ */
        unsigned int  ddrc_cfg_port          : 1;  /* bit[1]    : DDRC ���ýӿڷǰ�ȫ���ã�
                                                                  0����Ч
                                                                  1���ǰ�ȫ */
        unsigned int  i2c0_cfg_port          : 1;  /* bit[2]    : I2C0 ���ýӿڷǰ�ȫ���ã�
                                                                  0����Ч
                                                                  1���ǰ�ȫ */
        unsigned int  i2c1_cfg_port          : 1;  /* bit[3]    : I2C1 ���ýӿڷǰ�ȫ���ã�
                                                                  0����Ч
                                                                  1���ǰ�ȫ */
        unsigned int  i2c2_cfg_port          : 1;  /* bit[4]    : I2C2 ���ýӿڷǰ�ȫ���ã�
                                                                  0����Ч
                                                                  1���ǰ�ȫ */
        unsigned int  i2c3_cfg_port          : 1;  /* bit[5]    : I2C3 ���ýӿڷǰ�ȫ���ã�
                                                                  0����Ч
                                                                  1���ǰ�ȫ */
        unsigned int  i2c4_cfg_port          : 1;  /* bit[6]    : I2C4 ���ýӿڷǰ�ȫ���ã�
                                                                  0����Ч
                                                                  1���ǰ�ȫ */
        unsigned int  i2c5_cfg_port          : 1;  /* bit[7]    : I2C5 ���ýӿڷǰ�ȫ���ã�
                                                                  0����Ч
                                                                  1���ǰ�ȫ */
        unsigned int  uart0_cfg_port         : 1;  /* bit[8]    : UART0 ���ýӿڷǰ�ȫ���ã�
                                                                  0����Ч
                                                                  1���ǰ�ȫ */
        unsigned int  uart1_cfg_port         : 1;  /* bit[9]    : UART1 ���ýӿڷǰ�ȫ���ã�
                                                                  0����Ч
                                                                  1���ǰ�ȫ */
        unsigned int  uart2_cfg_port         : 1;  /* bit[10]   : UART2 ���ýӿڷǰ�ȫ���ã�
                                                                  0����Ч
                                                                  1���ǰ�ȫ */
        unsigned int  uart3_cfg_port         : 1;  /* bit[11]   : UART3 ���ýӿڷǰ�ȫ���ã�
                                                                  0����Ч
                                                                  1���ǰ�ȫ */
        unsigned int  uart4_cfg_port         : 1;  /* bit[12]   : UART4 ���ýӿڷǰ�ȫ���ã�
                                                                  0����Ч
                                                                  1���ǰ�ȫ */
        unsigned int  uart5_cfg_port         : 1;  /* bit[13]   : UART5 ���ýӿڷǰ�ȫ���ã�
                                                                  0����Ч
                                                                  1���ǰ�ȫ */
        unsigned int  uart6_cfg_port         : 1;  /* bit[14]   : UART6 ���ýӿڷǰ�ȫ���ã�
                                                                  0����Ч
                                                                  1���ǰ�ȫ */
        unsigned int  ssp0_cfg_port          : 1;  /* bit[15]   : SSP0 ���ýӿڷǰ�ȫ���ã�
                                                                  0����Ч
                                                                  1���ǰ�ȫ */
        unsigned int  ssp1_cfg_port          : 1;  /* bit[16]   : SSP1 ���ýӿڷǰ�ȫ���ã�
                                                                  0����Ч
                                                                  1���ǰ�ȫ */
        unsigned int  asp_cfg_port           : 1;  /* bit[17]   : ASP ���ýӿڷǰ�ȫ���ã�
                                                                  0����Ч
                                                                  1���ǰ�ȫ */
        unsigned int  hifiitcm               : 1;  /* bit[18]   : HIFIITCM ���ýӿڷǰ�ȫ���ã�
                                                                  0����Ч
                                                                  1���ǰ�ȫ */
        unsigned int  hifidtcm               : 1;  /* bit[19]   : HIFIDTCM ���ýӿڷǰ�ȫ���ã�
                                                                  0����Ч
                                                                  1���ǰ�ȫ */
        unsigned int  pmctrl_cfg_port        : 1;  /* bit[20]   : PMCTRL��3K�ռ����ýӿڷǰ�ȫ���ã�
                                                                  0����Ч
                                                                  1���ǰ�ȫ
                                                                  ����1K�ռ�ʼ�շǰ�ȫ�� */
        unsigned int  scoff_sec_ctrl         : 1;  /* bit[21]   : SCOFF_SEC_CTRL ���ýӿڷǰ�ȫ���ã�
                                                                  0����Ч
                                                                  1���ǰ�ȫ */
        unsigned int  scoff_sec_ctrl_rd0     : 1;  /* bit[22]   : SCOFF_SEC_CTRL_RD0 ���ýӿڷǰ�ȫ���ã�
                                                                  0����Ч
                                                                  1���ǰ�ȫ */
        unsigned int  scoff_sec_ctrl_rd1     : 1;  /* bit[23]   : SCOFF_SEC_CTRL_RD1 ���ýӿڷǰ�ȫ���ã�
                                                                  0����Ч
                                                                  1���ǰ�ȫ */
        unsigned int  ap2mdm_tzasc_boot_lock : 1;  /* bit[24]   : AP2MDM_TZASC_BOOT_LOCK�ǰ�ȫ���ã�
                                                                  0����Ч
                                                                  1����LOCK */
        unsigned int  ddrc_tzasc_boot_lock   : 1;  /* bit[25]   : DDRC_TZASC_BOOT_LOCK�ǰ�ȫ���ã�
                                                                  0����Ч
                                                                  1����LOCK */
        unsigned int  seceng_cfg_port        : 2;  /* bit[26-27]: SECENG���ÿڷǰ�ȫ���ã�
                                                                  ��Ӧbitλ����1ʱ����Ӧ��ȫ����״̬�Ĵ����Ķ�Ӧbit��Ϊ1����Ӧ�������TZPCDECPROT1STAT[27:26]���� */
        unsigned int  nandc_cfg_port         : 1;  /* bit[28]   : NANDC���ýӿڷǰ�ȫ���ã�
                                                                  0����Ч
                                                                  1���ǰ�ȫ */
        unsigned int  coresight_cfg_port     : 1;  /* bit[29]   : CoreSight���ýӿڷǰ�ȫ���ã�
                                                                  0����Ч
                                                                  1���ǰ�ȫ */
        unsigned int  reserved               : 2;  /* bit[30-31]: reserved */
    } reg;
} SOC_TZPC_TZPCDECPROT1SET_UNION;
#endif
#define SOC_TZPC_TZPCDECPROT1SET_tzasc_cfg_port_START          (0)
#define SOC_TZPC_TZPCDECPROT1SET_tzasc_cfg_port_END            (0)
#define SOC_TZPC_TZPCDECPROT1SET_ddrc_cfg_port_START           (1)
#define SOC_TZPC_TZPCDECPROT1SET_ddrc_cfg_port_END             (1)
#define SOC_TZPC_TZPCDECPROT1SET_i2c0_cfg_port_START           (2)
#define SOC_TZPC_TZPCDECPROT1SET_i2c0_cfg_port_END             (2)
#define SOC_TZPC_TZPCDECPROT1SET_i2c1_cfg_port_START           (3)
#define SOC_TZPC_TZPCDECPROT1SET_i2c1_cfg_port_END             (3)
#define SOC_TZPC_TZPCDECPROT1SET_i2c2_cfg_port_START           (4)
#define SOC_TZPC_TZPCDECPROT1SET_i2c2_cfg_port_END             (4)
#define SOC_TZPC_TZPCDECPROT1SET_i2c3_cfg_port_START           (5)
#define SOC_TZPC_TZPCDECPROT1SET_i2c3_cfg_port_END             (5)
#define SOC_TZPC_TZPCDECPROT1SET_i2c4_cfg_port_START           (6)
#define SOC_TZPC_TZPCDECPROT1SET_i2c4_cfg_port_END             (6)
#define SOC_TZPC_TZPCDECPROT1SET_i2c5_cfg_port_START           (7)
#define SOC_TZPC_TZPCDECPROT1SET_i2c5_cfg_port_END             (7)
#define SOC_TZPC_TZPCDECPROT1SET_uart0_cfg_port_START          (8)
#define SOC_TZPC_TZPCDECPROT1SET_uart0_cfg_port_END            (8)
#define SOC_TZPC_TZPCDECPROT1SET_uart1_cfg_port_START          (9)
#define SOC_TZPC_TZPCDECPROT1SET_uart1_cfg_port_END            (9)
#define SOC_TZPC_TZPCDECPROT1SET_uart2_cfg_port_START          (10)
#define SOC_TZPC_TZPCDECPROT1SET_uart2_cfg_port_END            (10)
#define SOC_TZPC_TZPCDECPROT1SET_uart3_cfg_port_START          (11)
#define SOC_TZPC_TZPCDECPROT1SET_uart3_cfg_port_END            (11)
#define SOC_TZPC_TZPCDECPROT1SET_uart4_cfg_port_START          (12)
#define SOC_TZPC_TZPCDECPROT1SET_uart4_cfg_port_END            (12)
#define SOC_TZPC_TZPCDECPROT1SET_uart5_cfg_port_START          (13)
#define SOC_TZPC_TZPCDECPROT1SET_uart5_cfg_port_END            (13)
#define SOC_TZPC_TZPCDECPROT1SET_uart6_cfg_port_START          (14)
#define SOC_TZPC_TZPCDECPROT1SET_uart6_cfg_port_END            (14)
#define SOC_TZPC_TZPCDECPROT1SET_ssp0_cfg_port_START           (15)
#define SOC_TZPC_TZPCDECPROT1SET_ssp0_cfg_port_END             (15)
#define SOC_TZPC_TZPCDECPROT1SET_ssp1_cfg_port_START           (16)
#define SOC_TZPC_TZPCDECPROT1SET_ssp1_cfg_port_END             (16)
#define SOC_TZPC_TZPCDECPROT1SET_asp_cfg_port_START            (17)
#define SOC_TZPC_TZPCDECPROT1SET_asp_cfg_port_END              (17)
#define SOC_TZPC_TZPCDECPROT1SET_hifiitcm_START                (18)
#define SOC_TZPC_TZPCDECPROT1SET_hifiitcm_END                  (18)
#define SOC_TZPC_TZPCDECPROT1SET_hifidtcm_START                (19)
#define SOC_TZPC_TZPCDECPROT1SET_hifidtcm_END                  (19)
#define SOC_TZPC_TZPCDECPROT1SET_pmctrl_cfg_port_START         (20)
#define SOC_TZPC_TZPCDECPROT1SET_pmctrl_cfg_port_END           (20)
#define SOC_TZPC_TZPCDECPROT1SET_scoff_sec_ctrl_START          (21)
#define SOC_TZPC_TZPCDECPROT1SET_scoff_sec_ctrl_END            (21)
#define SOC_TZPC_TZPCDECPROT1SET_scoff_sec_ctrl_rd0_START      (22)
#define SOC_TZPC_TZPCDECPROT1SET_scoff_sec_ctrl_rd0_END        (22)
#define SOC_TZPC_TZPCDECPROT1SET_scoff_sec_ctrl_rd1_START      (23)
#define SOC_TZPC_TZPCDECPROT1SET_scoff_sec_ctrl_rd1_END        (23)
#define SOC_TZPC_TZPCDECPROT1SET_ap2mdm_tzasc_boot_lock_START  (24)
#define SOC_TZPC_TZPCDECPROT1SET_ap2mdm_tzasc_boot_lock_END    (24)
#define SOC_TZPC_TZPCDECPROT1SET_ddrc_tzasc_boot_lock_START    (25)
#define SOC_TZPC_TZPCDECPROT1SET_ddrc_tzasc_boot_lock_END      (25)
#define SOC_TZPC_TZPCDECPROT1SET_seceng_cfg_port_START         (26)
#define SOC_TZPC_TZPCDECPROT1SET_seceng_cfg_port_END           (27)
#define SOC_TZPC_TZPCDECPROT1SET_nandc_cfg_port_START          (28)
#define SOC_TZPC_TZPCDECPROT1SET_nandc_cfg_port_END            (28)
#define SOC_TZPC_TZPCDECPROT1SET_coresight_cfg_port_START      (29)
#define SOC_TZPC_TZPCDECPROT1SET_coresight_cfg_port_END        (29)


/*****************************************************************************
 �ṹ��    : SOC_TZPC_TZPCDECPROT1CLR_UNION
 �ṹ˵��  : TZPCDECPROT1CLR �Ĵ����ṹ���塣��ַƫ����:0x0814����ֵ:0x00000000�����:32
 �Ĵ���˵��: ��ȫ���üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  tzasc_cfg_port         : 1;  /* bit[0]    : TZASC ���ýӿڰ�ȫ���ã�
                                                                  0����Ч
                                                                  1����ȫ */
        unsigned int  ddrc_cfg_port          : 1;  /* bit[1]    : DDRC ���ýӿڰ�ȫ���ã�
                                                                  0����Ч
                                                                  1����ȫ */
        unsigned int  i2c0_cfg_port          : 1;  /* bit[2]    : I2C0 ���ýӿڰ�ȫ���ã�
                                                                  0����Ч
                                                                  1����ȫ */
        unsigned int  i2c1_cfg_port          : 1;  /* bit[3]    : I2C1 ���ýӿڰ�ȫ���ã�
                                                                  0����Ч
                                                                  1����ȫ */
        unsigned int  i2c2_cfg_port          : 1;  /* bit[4]    : I2C2 ���ýӿڰ�ȫ���ã�
                                                                  0����Ч
                                                                  1����ȫ */
        unsigned int  i2c3_cfg_port          : 1;  /* bit[5]    : I2C3 ���ýӿڰ�ȫ���ã�
                                                                  0����Ч
                                                                  1����ȫ */
        unsigned int  i2c4_cfg_port          : 1;  /* bit[6]    : I2C4 ���ýӿڰ�ȫ���ã�
                                                                  0����Ч
                                                                  1����ȫ */
        unsigned int  i2c5_cfg_port          : 1;  /* bit[7]    : I2C5 ���ýӿڰ�ȫ���ã�
                                                                  0����Ч
                                                                  1����ȫ */
        unsigned int  uart0_cfg_port         : 1;  /* bit[8]    : UART0 ���ýӿڰ�ȫ���ã�
                                                                  0����Ч
                                                                  1����ȫ */
        unsigned int  uart1_cfg_port         : 1;  /* bit[9]    : UART1 ���ýӿڰ�ȫ���ã�
                                                                  0����Ч
                                                                  1����ȫ */
        unsigned int  uart2_cfg_port         : 1;  /* bit[10]   : UART2 ���ýӿڰ�ȫ���ã�
                                                                  0����Ч
                                                                  1����ȫ */
        unsigned int  uart3_cfg_port         : 1;  /* bit[11]   : UART3 ���ýӿڰ�ȫ���ã�
                                                                  0����Ч
                                                                  1����ȫ */
        unsigned int  uart4_cfg_port         : 1;  /* bit[12]   : UART4 ���ýӿڰ�ȫ���ã�
                                                                  0����Ч
                                                                  1����ȫ */
        unsigned int  uart5_cfg_port         : 1;  /* bit[13]   : UART5 ���ýӿڰ�ȫ���ã�
                                                                  0����Ч
                                                                  1����ȫ */
        unsigned int  uart6_cfg_port         : 1;  /* bit[14]   : UART6 ���ýӿڰ�ȫ���ã�
                                                                  0����Ч
                                                                  1����ȫ */
        unsigned int  ssp0_cfg_port          : 1;  /* bit[15]   : SSP0 ���ýӿڰ�ȫ���ã�
                                                                  0����Ч
                                                                  1����ȫ */
        unsigned int  ssp1_cfg_port          : 1;  /* bit[16]   : SSP1 ���ýӿڰ�ȫ���ã�
                                                                  0����Ч
                                                                  1����ȫ */
        unsigned int  asp_cfg_port           : 1;  /* bit[17]   : ASP ���ýӿڰ�ȫ���ã�
                                                                  0����Ч
                                                                  1����ȫ */
        unsigned int  hifiitcm               : 1;  /* bit[18]   : HIFIITCM ���ýӿڰ�ȫ���ã�
                                                                  0����Ч
                                                                  1����ȫ */
        unsigned int  hifidtcm               : 1;  /* bit[19]   : HIFIDTCM ���ýӿڰ�ȫ���ã�
                                                                  0����Ч
                                                                  1����ȫ */
        unsigned int  pmctrl_cfg_port        : 1;  /* bit[20]   : PMCTRL��3K�ռ����ýӿڰ�ȫ���ã�
                                                                  0����Ч
                                                                  1����ȫ
                                                                  ����1K�ռ�ʼ�շǰ�ȫ�� */
        unsigned int  scoff_sec_ctrl         : 1;  /* bit[21]   : SCOFF_SEC_CTRL ���ýӿڰ�ȫ���ã�
                                                                  0����Ч
                                                                  1����ȫ */
        unsigned int  scoff_sec_ctrl_rd0     : 1;  /* bit[22]   : SCOFF_SEC_CTRL_RD0 ���ýӿڰ�ȫ���ã�
                                                                  0����Ч
                                                                  1����ȫ */
        unsigned int  scoff_sec_ctrl_rd1     : 1;  /* bit[23]   : SCOFF_SEC_CTRL_RD1 ���ýӿڰ�ȫ���ã�
                                                                  0����Ч
                                                                  1����ȫ */
        unsigned int  ap2mdm_tzasc_boot_lock : 1;  /* bit[24]   : AP2MDM_TZASC_BOOT_LOCK��ȫ���ã�
                                                                  0����Ч
                                                                  1��LOCK */
        unsigned int  ddrc_tzasc_boot_lock   : 1;  /* bit[25]   : DDRC_TZASC_BOOT_LOCK��ȫ���ã�
                                                                  0����Ч
                                                                  1��LOCK */
        unsigned int  seceng_cfg_port        : 2;  /* bit[26-27]: SECENG���ÿڰ�ȫ���ã�
                                                                  ��Ӧbitλ����1ʱ����Ӧ��ȫ����״̬�Ĵ����Ķ�Ӧbit��Ϊ0����Ӧ�������TZPCDECPROT1STAT[27:26]���� */
        unsigned int  nandc_cfg_port         : 1;  /* bit[28]   : NANDC���ýӿڰ�ȫ���ã�
                                                                  0����Ч
                                                                  1����ȫ */
        unsigned int  coresight_cfg_port     : 1;  /* bit[29]   : CoreSight���ýӿڰ�ȫ���ã�
                                                                  0����Ч
                                                                  1����ȫ */
        unsigned int  reserved               : 2;  /* bit[30-31]: reserved */
    } reg;
} SOC_TZPC_TZPCDECPROT1CLR_UNION;
#endif
#define SOC_TZPC_TZPCDECPROT1CLR_tzasc_cfg_port_START          (0)
#define SOC_TZPC_TZPCDECPROT1CLR_tzasc_cfg_port_END            (0)
#define SOC_TZPC_TZPCDECPROT1CLR_ddrc_cfg_port_START           (1)
#define SOC_TZPC_TZPCDECPROT1CLR_ddrc_cfg_port_END             (1)
#define SOC_TZPC_TZPCDECPROT1CLR_i2c0_cfg_port_START           (2)
#define SOC_TZPC_TZPCDECPROT1CLR_i2c0_cfg_port_END             (2)
#define SOC_TZPC_TZPCDECPROT1CLR_i2c1_cfg_port_START           (3)
#define SOC_TZPC_TZPCDECPROT1CLR_i2c1_cfg_port_END             (3)
#define SOC_TZPC_TZPCDECPROT1CLR_i2c2_cfg_port_START           (4)
#define SOC_TZPC_TZPCDECPROT1CLR_i2c2_cfg_port_END             (4)
#define SOC_TZPC_TZPCDECPROT1CLR_i2c3_cfg_port_START           (5)
#define SOC_TZPC_TZPCDECPROT1CLR_i2c3_cfg_port_END             (5)
#define SOC_TZPC_TZPCDECPROT1CLR_i2c4_cfg_port_START           (6)
#define SOC_TZPC_TZPCDECPROT1CLR_i2c4_cfg_port_END             (6)
#define SOC_TZPC_TZPCDECPROT1CLR_i2c5_cfg_port_START           (7)
#define SOC_TZPC_TZPCDECPROT1CLR_i2c5_cfg_port_END             (7)
#define SOC_TZPC_TZPCDECPROT1CLR_uart0_cfg_port_START          (8)
#define SOC_TZPC_TZPCDECPROT1CLR_uart0_cfg_port_END            (8)
#define SOC_TZPC_TZPCDECPROT1CLR_uart1_cfg_port_START          (9)
#define SOC_TZPC_TZPCDECPROT1CLR_uart1_cfg_port_END            (9)
#define SOC_TZPC_TZPCDECPROT1CLR_uart2_cfg_port_START          (10)
#define SOC_TZPC_TZPCDECPROT1CLR_uart2_cfg_port_END            (10)
#define SOC_TZPC_TZPCDECPROT1CLR_uart3_cfg_port_START          (11)
#define SOC_TZPC_TZPCDECPROT1CLR_uart3_cfg_port_END            (11)
#define SOC_TZPC_TZPCDECPROT1CLR_uart4_cfg_port_START          (12)
#define SOC_TZPC_TZPCDECPROT1CLR_uart4_cfg_port_END            (12)
#define SOC_TZPC_TZPCDECPROT1CLR_uart5_cfg_port_START          (13)
#define SOC_TZPC_TZPCDECPROT1CLR_uart5_cfg_port_END            (13)
#define SOC_TZPC_TZPCDECPROT1CLR_uart6_cfg_port_START          (14)
#define SOC_TZPC_TZPCDECPROT1CLR_uart6_cfg_port_END            (14)
#define SOC_TZPC_TZPCDECPROT1CLR_ssp0_cfg_port_START           (15)
#define SOC_TZPC_TZPCDECPROT1CLR_ssp0_cfg_port_END             (15)
#define SOC_TZPC_TZPCDECPROT1CLR_ssp1_cfg_port_START           (16)
#define SOC_TZPC_TZPCDECPROT1CLR_ssp1_cfg_port_END             (16)
#define SOC_TZPC_TZPCDECPROT1CLR_asp_cfg_port_START            (17)
#define SOC_TZPC_TZPCDECPROT1CLR_asp_cfg_port_END              (17)
#define SOC_TZPC_TZPCDECPROT1CLR_hifiitcm_START                (18)
#define SOC_TZPC_TZPCDECPROT1CLR_hifiitcm_END                  (18)
#define SOC_TZPC_TZPCDECPROT1CLR_hifidtcm_START                (19)
#define SOC_TZPC_TZPCDECPROT1CLR_hifidtcm_END                  (19)
#define SOC_TZPC_TZPCDECPROT1CLR_pmctrl_cfg_port_START         (20)
#define SOC_TZPC_TZPCDECPROT1CLR_pmctrl_cfg_port_END           (20)
#define SOC_TZPC_TZPCDECPROT1CLR_scoff_sec_ctrl_START          (21)
#define SOC_TZPC_TZPCDECPROT1CLR_scoff_sec_ctrl_END            (21)
#define SOC_TZPC_TZPCDECPROT1CLR_scoff_sec_ctrl_rd0_START      (22)
#define SOC_TZPC_TZPCDECPROT1CLR_scoff_sec_ctrl_rd0_END        (22)
#define SOC_TZPC_TZPCDECPROT1CLR_scoff_sec_ctrl_rd1_START      (23)
#define SOC_TZPC_TZPCDECPROT1CLR_scoff_sec_ctrl_rd1_END        (23)
#define SOC_TZPC_TZPCDECPROT1CLR_ap2mdm_tzasc_boot_lock_START  (24)
#define SOC_TZPC_TZPCDECPROT1CLR_ap2mdm_tzasc_boot_lock_END    (24)
#define SOC_TZPC_TZPCDECPROT1CLR_ddrc_tzasc_boot_lock_START    (25)
#define SOC_TZPC_TZPCDECPROT1CLR_ddrc_tzasc_boot_lock_END      (25)
#define SOC_TZPC_TZPCDECPROT1CLR_seceng_cfg_port_START         (26)
#define SOC_TZPC_TZPCDECPROT1CLR_seceng_cfg_port_END           (27)
#define SOC_TZPC_TZPCDECPROT1CLR_nandc_cfg_port_START          (28)
#define SOC_TZPC_TZPCDECPROT1CLR_nandc_cfg_port_END            (28)
#define SOC_TZPC_TZPCDECPROT1CLR_coresight_cfg_port_START      (29)
#define SOC_TZPC_TZPCDECPROT1CLR_coresight_cfg_port_END        (29)


/*****************************************************************************
 �ṹ��    : SOC_TZPC_TZPCDECPROT2STAT_UNION
 �ṹ˵��  : TZPCDECPROT2STAT �Ĵ����ṹ���塣��ַƫ����:0x0818����ֵ:0x00000000�����:32
 �Ĵ���˵��: ��ȫ����״̬�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  watch_dog_0_cfg_port : 1;  /* bit[0] : Watch_Dog_0_CFG_Port��ȫ״̬��
                                                             0����ȫ
                                                             1���ǰ�ȫ */
        unsigned int  watch_dog_1_cfg_port : 1;  /* bit[1] : Watch_Dog_1_CFG_Port��ȫ״̬��
                                                             0����ȫ
                                                             1���ǰ�ȫ */
        unsigned int  watch_dog_2_cfg_port : 1;  /* bit[2] : Watch_Dog_2_CFG_Port��ȫ״̬��
                                                             0����ȫ
                                                             1���ǰ�ȫ */
        unsigned int  watch_dog_3_cfg_port : 1;  /* bit[3] : Watch_Dog_3_CFG_Port��ȫ״̬��
                                                             0����ȫ
                                                             1���ǰ�ȫ */
        unsigned int  timer0_cfg_port      : 1;  /* bit[4] : Timer0_CFG_Port��ȫ״̬��
                                                             0����ȫ
                                                             1���ǰ�ȫ */
        unsigned int  timer1_cfg_port      : 1;  /* bit[5] : Timer1_CFG_Port��ȫ״̬��
                                                             0����ȫ
                                                             1���ǰ�ȫ */
        unsigned int  timer2_cfg_port      : 1;  /* bit[6] : Timer2_CFG_Port��ȫ״̬��
                                                             0����ȫ
                                                             1���ǰ�ȫ */
        unsigned int  timer3_cfg_port      : 1;  /* bit[7] : Timer3_CFG_Port��ȫ״̬��
                                                             0����ȫ
                                                             1���ǰ�ȫ */
        unsigned int  timer4_cfg_port      : 1;  /* bit[8] : Timer4_CFG_Port��ȫ״̬��
                                                             0����ȫ
                                                             1���ǰ�ȫ */
        unsigned int  timer5_cfg_port      : 1;  /* bit[9] : Timer5_CFG_Port��ȫ״̬��
                                                             0����ȫ
                                                             1���ǰ�ȫ */
        unsigned int  timer6_cfg_port      : 1;  /* bit[10]: Timer6_CFG_Port��ȫ״̬��
                                                             0����ȫ
                                                             1���ǰ�ȫ */
        unsigned int  timer7_cfg_port      : 1;  /* bit[11]: Timer7_CFG_Port��ȫ״̬��
                                                             0����ȫ
                                                             1���ǰ�ȫ */
        unsigned int  timer8_cfg_port      : 1;  /* bit[12]: Timer8_CFG_Port��ȫ״̬��
                                                             0����ȫ
                                                             1���ǰ�ȫ */
        unsigned int  rtc_cfg_port         : 1;  /* bit[13]: RTC_CFG_Port��ȫ״̬��
                                                             0����ȫ
                                                             1���ǰ�ȫ */
        unsigned int  bbp_on_cfg_port      : 1;  /* bit[14]: BBP_ON_CFG_Port��ȫ״̬��
                                                             0����ȫ
                                                             1���ǰ�ȫ */
        unsigned int  mtimer0_cfg_port     : 1;  /* bit[15]: Mtimer0_CFG_Port��ȫ״̬��
                                                             0����ȫ
                                                             1���ǰ�ȫ */
        unsigned int  mtimer1_cfg_port     : 1;  /* bit[16]: Mtimer1_CFG_Port��ȫ״̬��
                                                             0����ȫ
                                                             1���ǰ�ȫ */
        unsigned int  mtimer2_cfg_port     : 1;  /* bit[17]: Mtimer2_CFG_Port��ȫ״̬��
                                                             0����ȫ
                                                             1���ǰ�ȫ */
        unsigned int  mtimer3_cfg_port     : 1;  /* bit[18]: Mtimer3_CFG_Port��ȫ״̬��
                                                             0����ȫ
                                                             1���ǰ�ȫ */
        unsigned int  mtimer4_cfg_port     : 1;  /* bit[19]: Mtimer4_CFG_Port��ȫ״̬��
                                                             0����ȫ
                                                             1���ǰ�ȫ */
        unsigned int  mtimer5_cfg_port     : 1;  /* bit[20]: Mtimer5_CFG_Port��ȫ״̬��
                                                             0����ȫ
                                                             1���ǰ�ȫ */
        unsigned int  mtimer6_cfg_port     : 1;  /* bit[21]: Mtimer6_CFG_Port��ȫ״̬��
                                                             0����ȫ
                                                             1���ǰ�ȫ */
        unsigned int  mtimer7_cfg_port     : 1;  /* bit[22]: Mtimer7_CFG_Port��ȫ״̬��
                                                             0����ȫ
                                                             1���ǰ�ȫ */
        unsigned int  mtimer8_cfg_port     : 1;  /* bit[23]: Mtimer8_CFG_Port��ȫ״̬��
                                                             0����ȫ
                                                             1���ǰ�ȫ */
        unsigned int  mtimer9_cfg_port     : 1;  /* bit[24]: Mtimer9_CFG_Port��ȫ״̬��
                                                             0����ȫ
                                                             1���ǰ�ȫ */
        unsigned int  pmussi_cfg_port      : 1;  /* bit[25]: PMUSSI_CFG_Port��ȫ״̬��
                                                             0����ȫ
                                                             1���ǰ�ȫ */
        unsigned int  ioc_on_cfg_port      : 1;  /* bit[26]: IOC_ON_CFG_Port��ȫ״̬��
                                                             0����ȫ
                                                             1���ǰ�ȫ */
        unsigned int  gpio_on0_cfg_port    : 1;  /* bit[27]: GPIO_ON0_CFG_Port��ȫ״̬��
                                                             0����ȫ
                                                             1���ǰ�ȫ */
        unsigned int  gpio_on1_cfg_port    : 1;  /* bit[28]: GPIO_ON1_CFG_Port��ȫ״̬��
                                                             0����ȫ
                                                             1���ǰ�ȫ */
        unsigned int  gpio_on2_cfg_port    : 1;  /* bit[29]: GPIO_ON2_CFG_Port��ȫ״̬��
                                                             0����ȫ
                                                             1���ǰ�ȫ */
        unsigned int  gpio_on3_cfg_port    : 1;  /* bit[30]: GPIO_ON3_CFG_Port��ȫ״̬��
                                                             0����ȫ
                                                             1���ǰ�ȫ */
        unsigned int  mcu_subsys_cfg_port  : 1;  /* bit[31]: MCU_Subsys_CFG_Port��ȫ״̬��
                                                             0����ȫ
                                                             1���ǰ�ȫ */
    } reg;
} SOC_TZPC_TZPCDECPROT2STAT_UNION;
#endif
#define SOC_TZPC_TZPCDECPROT2STAT_watch_dog_0_cfg_port_START  (0)
#define SOC_TZPC_TZPCDECPROT2STAT_watch_dog_0_cfg_port_END    (0)
#define SOC_TZPC_TZPCDECPROT2STAT_watch_dog_1_cfg_port_START  (1)
#define SOC_TZPC_TZPCDECPROT2STAT_watch_dog_1_cfg_port_END    (1)
#define SOC_TZPC_TZPCDECPROT2STAT_watch_dog_2_cfg_port_START  (2)
#define SOC_TZPC_TZPCDECPROT2STAT_watch_dog_2_cfg_port_END    (2)
#define SOC_TZPC_TZPCDECPROT2STAT_watch_dog_3_cfg_port_START  (3)
#define SOC_TZPC_TZPCDECPROT2STAT_watch_dog_3_cfg_port_END    (3)
#define SOC_TZPC_TZPCDECPROT2STAT_timer0_cfg_port_START       (4)
#define SOC_TZPC_TZPCDECPROT2STAT_timer0_cfg_port_END         (4)
#define SOC_TZPC_TZPCDECPROT2STAT_timer1_cfg_port_START       (5)
#define SOC_TZPC_TZPCDECPROT2STAT_timer1_cfg_port_END         (5)
#define SOC_TZPC_TZPCDECPROT2STAT_timer2_cfg_port_START       (6)
#define SOC_TZPC_TZPCDECPROT2STAT_timer2_cfg_port_END         (6)
#define SOC_TZPC_TZPCDECPROT2STAT_timer3_cfg_port_START       (7)
#define SOC_TZPC_TZPCDECPROT2STAT_timer3_cfg_port_END         (7)
#define SOC_TZPC_TZPCDECPROT2STAT_timer4_cfg_port_START       (8)
#define SOC_TZPC_TZPCDECPROT2STAT_timer4_cfg_port_END         (8)
#define SOC_TZPC_TZPCDECPROT2STAT_timer5_cfg_port_START       (9)
#define SOC_TZPC_TZPCDECPROT2STAT_timer5_cfg_port_END         (9)
#define SOC_TZPC_TZPCDECPROT2STAT_timer6_cfg_port_START       (10)
#define SOC_TZPC_TZPCDECPROT2STAT_timer6_cfg_port_END         (10)
#define SOC_TZPC_TZPCDECPROT2STAT_timer7_cfg_port_START       (11)
#define SOC_TZPC_TZPCDECPROT2STAT_timer7_cfg_port_END         (11)
#define SOC_TZPC_TZPCDECPROT2STAT_timer8_cfg_port_START       (12)
#define SOC_TZPC_TZPCDECPROT2STAT_timer8_cfg_port_END         (12)
#define SOC_TZPC_TZPCDECPROT2STAT_rtc_cfg_port_START          (13)
#define SOC_TZPC_TZPCDECPROT2STAT_rtc_cfg_port_END            (13)
#define SOC_TZPC_TZPCDECPROT2STAT_bbp_on_cfg_port_START       (14)
#define SOC_TZPC_TZPCDECPROT2STAT_bbp_on_cfg_port_END         (14)
#define SOC_TZPC_TZPCDECPROT2STAT_mtimer0_cfg_port_START      (15)
#define SOC_TZPC_TZPCDECPROT2STAT_mtimer0_cfg_port_END        (15)
#define SOC_TZPC_TZPCDECPROT2STAT_mtimer1_cfg_port_START      (16)
#define SOC_TZPC_TZPCDECPROT2STAT_mtimer1_cfg_port_END        (16)
#define SOC_TZPC_TZPCDECPROT2STAT_mtimer2_cfg_port_START      (17)
#define SOC_TZPC_TZPCDECPROT2STAT_mtimer2_cfg_port_END        (17)
#define SOC_TZPC_TZPCDECPROT2STAT_mtimer3_cfg_port_START      (18)
#define SOC_TZPC_TZPCDECPROT2STAT_mtimer3_cfg_port_END        (18)
#define SOC_TZPC_TZPCDECPROT2STAT_mtimer4_cfg_port_START      (19)
#define SOC_TZPC_TZPCDECPROT2STAT_mtimer4_cfg_port_END        (19)
#define SOC_TZPC_TZPCDECPROT2STAT_mtimer5_cfg_port_START      (20)
#define SOC_TZPC_TZPCDECPROT2STAT_mtimer5_cfg_port_END        (20)
#define SOC_TZPC_TZPCDECPROT2STAT_mtimer6_cfg_port_START      (21)
#define SOC_TZPC_TZPCDECPROT2STAT_mtimer6_cfg_port_END        (21)
#define SOC_TZPC_TZPCDECPROT2STAT_mtimer7_cfg_port_START      (22)
#define SOC_TZPC_TZPCDECPROT2STAT_mtimer7_cfg_port_END        (22)
#define SOC_TZPC_TZPCDECPROT2STAT_mtimer8_cfg_port_START      (23)
#define SOC_TZPC_TZPCDECPROT2STAT_mtimer8_cfg_port_END        (23)
#define SOC_TZPC_TZPCDECPROT2STAT_mtimer9_cfg_port_START      (24)
#define SOC_TZPC_TZPCDECPROT2STAT_mtimer9_cfg_port_END        (24)
#define SOC_TZPC_TZPCDECPROT2STAT_pmussi_cfg_port_START       (25)
#define SOC_TZPC_TZPCDECPROT2STAT_pmussi_cfg_port_END         (25)
#define SOC_TZPC_TZPCDECPROT2STAT_ioc_on_cfg_port_START       (26)
#define SOC_TZPC_TZPCDECPROT2STAT_ioc_on_cfg_port_END         (26)
#define SOC_TZPC_TZPCDECPROT2STAT_gpio_on0_cfg_port_START     (27)
#define SOC_TZPC_TZPCDECPROT2STAT_gpio_on0_cfg_port_END       (27)
#define SOC_TZPC_TZPCDECPROT2STAT_gpio_on1_cfg_port_START     (28)
#define SOC_TZPC_TZPCDECPROT2STAT_gpio_on1_cfg_port_END       (28)
#define SOC_TZPC_TZPCDECPROT2STAT_gpio_on2_cfg_port_START     (29)
#define SOC_TZPC_TZPCDECPROT2STAT_gpio_on2_cfg_port_END       (29)
#define SOC_TZPC_TZPCDECPROT2STAT_gpio_on3_cfg_port_START     (30)
#define SOC_TZPC_TZPCDECPROT2STAT_gpio_on3_cfg_port_END       (30)
#define SOC_TZPC_TZPCDECPROT2STAT_mcu_subsys_cfg_port_START   (31)
#define SOC_TZPC_TZPCDECPROT2STAT_mcu_subsys_cfg_port_END     (31)


/*****************************************************************************
 �ṹ��    : SOC_TZPC_TZPCDECPROT2SET_UNION
 �ṹ˵��  : TZPCDECPROT2SET �Ĵ����ṹ���塣��ַƫ����:0x081C����ֵ:0x00000000�����:32
 �Ĵ���˵��: �ǰ�ȫ���üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  watch_dog_0_cfg_port : 1;  /* bit[0] : Watch_Dog_0_CFG_Port�ǰ�ȫ���ã�
                                                             0����Ч
                                                             1���ǰ�ȫ */
        unsigned int  watch_dog_1_cfg_port : 1;  /* bit[1] : Watch_Dog_1_CFG_Port�ǰ�ȫ���ã�
                                                             0����Ч
                                                             1���ǰ�ȫ */
        unsigned int  watch_dog_2_cfg_port : 1;  /* bit[2] : Watch_Dog_2_CFG_Port�ǰ�ȫ���ã�
                                                             0����Ч
                                                             1���ǰ�ȫ */
        unsigned int  watch_dog_3_cfg_port : 1;  /* bit[3] : Watch_Dog_3_CFG_Port�ǰ�ȫ���ã�
                                                             0����Ч
                                                             1���ǰ�ȫ */
        unsigned int  timer0_cfg_port      : 1;  /* bit[4] : Timer0_CFG_Port�ǰ�ȫ���ã�
                                                             0����Ч
                                                             1���ǰ�ȫ */
        unsigned int  timer1_cfg_port      : 1;  /* bit[5] : Timer1_CFG_Port�ǰ�ȫ���ã�
                                                             0����Ч
                                                             1���ǰ�ȫ */
        unsigned int  timer2_cfg_port      : 1;  /* bit[6] : Timer2_CFG_Port�ǰ�ȫ���ã�
                                                             0����Ч
                                                             1���ǰ�ȫ */
        unsigned int  timer3_cfg_port      : 1;  /* bit[7] : Timer3_CFG_Port�ǰ�ȫ���ã�
                                                             0����Ч
                                                             1���ǰ�ȫ */
        unsigned int  timer4_cfg_port      : 1;  /* bit[8] : Timer4_CFG_Port�ǰ�ȫ���ã�
                                                             0����Ч
                                                             1���ǰ�ȫ */
        unsigned int  timer5_cfg_port      : 1;  /* bit[9] : Timer5_CFG_Port�ǰ�ȫ���ã�
                                                             0����Ч
                                                             1���ǰ�ȫ */
        unsigned int  timer6_cfg_port      : 1;  /* bit[10]: Timer6_CFG_Port�ǰ�ȫ���ã�
                                                             0����Ч
                                                             1���ǰ�ȫ */
        unsigned int  timer7_cfg_port      : 1;  /* bit[11]: Timer7_CFG_Port�ǰ�ȫ���ã�
                                                             0����Ч
                                                             1���ǰ�ȫ */
        unsigned int  timer8_cfg_port      : 1;  /* bit[12]: Timer8_CFG_Port�ǰ�ȫ���ã�
                                                             0����Ч
                                                             1���ǰ�ȫ */
        unsigned int  rtc_cfg_port         : 1;  /* bit[13]: RTC_CFG_Port�ǰ�ȫ���ã�
                                                             0����Ч
                                                             1���ǰ�ȫ */
        unsigned int  bbp_on_cfg_port      : 1;  /* bit[14]: BBP_ON_CFG_Port�ǰ�ȫ���ã�
                                                             0����Ч
                                                             1���ǰ�ȫ */
        unsigned int  mtimer0_cfg_port     : 1;  /* bit[15]: Mtimer0_CFG_Port�ǰ�ȫ���ã�
                                                             0����Ч
                                                             1���ǰ�ȫ */
        unsigned int  mtimer1_cfg_port     : 1;  /* bit[16]: Mtimer1_CFG_Port�ǰ�ȫ���ã�
                                                             0����Ч
                                                             1���ǰ�ȫ */
        unsigned int  mtimer2_cfg_port     : 1;  /* bit[17]: Mtimer2_CFG_Port�ǰ�ȫ���ã�
                                                             0����Ч
                                                             1���ǰ�ȫ */
        unsigned int  mtimer3_cfg_port     : 1;  /* bit[18]: Mtimer3_CFG_Port�ǰ�ȫ���ã�
                                                             0����Ч
                                                             1���ǰ�ȫ */
        unsigned int  mtimer4_cfg_port     : 1;  /* bit[19]: Mtimer4_CFG_Port�ǰ�ȫ���ã�
                                                             0����Ч
                                                             1���ǰ�ȫ */
        unsigned int  mtimer5_cfg_port     : 1;  /* bit[20]: Mtimer5_CFG_Port�ǰ�ȫ���ã�
                                                             0����Ч
                                                             1���ǰ�ȫ */
        unsigned int  mtimer6_cfg_port     : 1;  /* bit[21]: Mtimer6_CFG_Port�ǰ�ȫ���ã�
                                                             0����Ч
                                                             1���ǰ�ȫ */
        unsigned int  mtimer7_cfg_port     : 1;  /* bit[22]: Mtimer7_CFG_Port�ǰ�ȫ���ã�
                                                             0����Ч
                                                             1���ǰ�ȫ */
        unsigned int  mtimer8_cfg_port     : 1;  /* bit[23]: Mtimer8_CFG_Port�ǰ�ȫ���ã�
                                                             0����Ч
                                                             1���ǰ�ȫ */
        unsigned int  mtimer9_cfg_port     : 1;  /* bit[24]: Mtimer9_CFG_Port�ǰ�ȫ���ã�
                                                             0����Ч
                                                             1���ǰ�ȫ */
        unsigned int  pmussi_cfg_port      : 1;  /* bit[25]: PMUSSI_CFG_Port�ǰ�ȫ���ã�
                                                             0����Ч
                                                             1���ǰ�ȫ */
        unsigned int  ioc_on_cfg_port      : 1;  /* bit[26]: IOC_ON_CFG_Port�ǰ�ȫ���ã�
                                                             0����Ч
                                                             1���ǰ�ȫ */
        unsigned int  gpio_on0_cfg_port    : 1;  /* bit[27]: GPIO_ON0_CFG_Port�ǰ�ȫ���ã�
                                                             0����Ч
                                                             1���ǰ�ȫ */
        unsigned int  gpio_on1_cfg_port    : 1;  /* bit[28]: GPIO_ON1_CFG_Port�ǰ�ȫ���ã�
                                                             0����Ч
                                                             1���ǰ�ȫ */
        unsigned int  gpio_on2_cfg_port    : 1;  /* bit[29]: GPIO_ON2_CFG_Port�ǰ�ȫ���ã�
                                                             0����Ч
                                                             1���ǰ�ȫ */
        unsigned int  gpio_on3_cfg_port    : 1;  /* bit[30]: GPIO_ON3_CFG_Port�ǰ�ȫ���ã�
                                                             0����Ч
                                                             1���ǰ�ȫ */
        unsigned int  mcu_subsys_cfg_port  : 1;  /* bit[31]: MCU_Subsys_CFG_Port�ǰ�ȫ���ã�
                                                             0����ȫ
                                                             1���ǰ�ȫ */
    } reg;
} SOC_TZPC_TZPCDECPROT2SET_UNION;
#endif
#define SOC_TZPC_TZPCDECPROT2SET_watch_dog_0_cfg_port_START  (0)
#define SOC_TZPC_TZPCDECPROT2SET_watch_dog_0_cfg_port_END    (0)
#define SOC_TZPC_TZPCDECPROT2SET_watch_dog_1_cfg_port_START  (1)
#define SOC_TZPC_TZPCDECPROT2SET_watch_dog_1_cfg_port_END    (1)
#define SOC_TZPC_TZPCDECPROT2SET_watch_dog_2_cfg_port_START  (2)
#define SOC_TZPC_TZPCDECPROT2SET_watch_dog_2_cfg_port_END    (2)
#define SOC_TZPC_TZPCDECPROT2SET_watch_dog_3_cfg_port_START  (3)
#define SOC_TZPC_TZPCDECPROT2SET_watch_dog_3_cfg_port_END    (3)
#define SOC_TZPC_TZPCDECPROT2SET_timer0_cfg_port_START       (4)
#define SOC_TZPC_TZPCDECPROT2SET_timer0_cfg_port_END         (4)
#define SOC_TZPC_TZPCDECPROT2SET_timer1_cfg_port_START       (5)
#define SOC_TZPC_TZPCDECPROT2SET_timer1_cfg_port_END         (5)
#define SOC_TZPC_TZPCDECPROT2SET_timer2_cfg_port_START       (6)
#define SOC_TZPC_TZPCDECPROT2SET_timer2_cfg_port_END         (6)
#define SOC_TZPC_TZPCDECPROT2SET_timer3_cfg_port_START       (7)
#define SOC_TZPC_TZPCDECPROT2SET_timer3_cfg_port_END         (7)
#define SOC_TZPC_TZPCDECPROT2SET_timer4_cfg_port_START       (8)
#define SOC_TZPC_TZPCDECPROT2SET_timer4_cfg_port_END         (8)
#define SOC_TZPC_TZPCDECPROT2SET_timer5_cfg_port_START       (9)
#define SOC_TZPC_TZPCDECPROT2SET_timer5_cfg_port_END         (9)
#define SOC_TZPC_TZPCDECPROT2SET_timer6_cfg_port_START       (10)
#define SOC_TZPC_TZPCDECPROT2SET_timer6_cfg_port_END         (10)
#define SOC_TZPC_TZPCDECPROT2SET_timer7_cfg_port_START       (11)
#define SOC_TZPC_TZPCDECPROT2SET_timer7_cfg_port_END         (11)
#define SOC_TZPC_TZPCDECPROT2SET_timer8_cfg_port_START       (12)
#define SOC_TZPC_TZPCDECPROT2SET_timer8_cfg_port_END         (12)
#define SOC_TZPC_TZPCDECPROT2SET_rtc_cfg_port_START          (13)
#define SOC_TZPC_TZPCDECPROT2SET_rtc_cfg_port_END            (13)
#define SOC_TZPC_TZPCDECPROT2SET_bbp_on_cfg_port_START       (14)
#define SOC_TZPC_TZPCDECPROT2SET_bbp_on_cfg_port_END         (14)
#define SOC_TZPC_TZPCDECPROT2SET_mtimer0_cfg_port_START      (15)
#define SOC_TZPC_TZPCDECPROT2SET_mtimer0_cfg_port_END        (15)
#define SOC_TZPC_TZPCDECPROT2SET_mtimer1_cfg_port_START      (16)
#define SOC_TZPC_TZPCDECPROT2SET_mtimer1_cfg_port_END        (16)
#define SOC_TZPC_TZPCDECPROT2SET_mtimer2_cfg_port_START      (17)
#define SOC_TZPC_TZPCDECPROT2SET_mtimer2_cfg_port_END        (17)
#define SOC_TZPC_TZPCDECPROT2SET_mtimer3_cfg_port_START      (18)
#define SOC_TZPC_TZPCDECPROT2SET_mtimer3_cfg_port_END        (18)
#define SOC_TZPC_TZPCDECPROT2SET_mtimer4_cfg_port_START      (19)
#define SOC_TZPC_TZPCDECPROT2SET_mtimer4_cfg_port_END        (19)
#define SOC_TZPC_TZPCDECPROT2SET_mtimer5_cfg_port_START      (20)
#define SOC_TZPC_TZPCDECPROT2SET_mtimer5_cfg_port_END        (20)
#define SOC_TZPC_TZPCDECPROT2SET_mtimer6_cfg_port_START      (21)
#define SOC_TZPC_TZPCDECPROT2SET_mtimer6_cfg_port_END        (21)
#define SOC_TZPC_TZPCDECPROT2SET_mtimer7_cfg_port_START      (22)
#define SOC_TZPC_TZPCDECPROT2SET_mtimer7_cfg_port_END        (22)
#define SOC_TZPC_TZPCDECPROT2SET_mtimer8_cfg_port_START      (23)
#define SOC_TZPC_TZPCDECPROT2SET_mtimer8_cfg_port_END        (23)
#define SOC_TZPC_TZPCDECPROT2SET_mtimer9_cfg_port_START      (24)
#define SOC_TZPC_TZPCDECPROT2SET_mtimer9_cfg_port_END        (24)
#define SOC_TZPC_TZPCDECPROT2SET_pmussi_cfg_port_START       (25)
#define SOC_TZPC_TZPCDECPROT2SET_pmussi_cfg_port_END         (25)
#define SOC_TZPC_TZPCDECPROT2SET_ioc_on_cfg_port_START       (26)
#define SOC_TZPC_TZPCDECPROT2SET_ioc_on_cfg_port_END         (26)
#define SOC_TZPC_TZPCDECPROT2SET_gpio_on0_cfg_port_START     (27)
#define SOC_TZPC_TZPCDECPROT2SET_gpio_on0_cfg_port_END       (27)
#define SOC_TZPC_TZPCDECPROT2SET_gpio_on1_cfg_port_START     (28)
#define SOC_TZPC_TZPCDECPROT2SET_gpio_on1_cfg_port_END       (28)
#define SOC_TZPC_TZPCDECPROT2SET_gpio_on2_cfg_port_START     (29)
#define SOC_TZPC_TZPCDECPROT2SET_gpio_on2_cfg_port_END       (29)
#define SOC_TZPC_TZPCDECPROT2SET_gpio_on3_cfg_port_START     (30)
#define SOC_TZPC_TZPCDECPROT2SET_gpio_on3_cfg_port_END       (30)
#define SOC_TZPC_TZPCDECPROT2SET_mcu_subsys_cfg_port_START   (31)
#define SOC_TZPC_TZPCDECPROT2SET_mcu_subsys_cfg_port_END     (31)


/*****************************************************************************
 �ṹ��    : SOC_TZPC_TZPCDECPROT2CLR_UNION
 �ṹ˵��  : TZPCDECPROT2CLR �Ĵ����ṹ���塣��ַƫ����:0x0820����ֵ:0x00000000�����:32
 �Ĵ���˵��: ��ȫ���üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  watch_dog_0_cfg_port : 1;  /* bit[0] : Watch_Dog_0_CFG_Port��ȫ���ã�
                                                             0����Ч
                                                             1����ȫ */
        unsigned int  watch_dog_1_cfg_port : 1;  /* bit[1] : Watch_Dog_1_CFG_Port��ȫ���ã�
                                                             0����Ч
                                                             1����ȫ */
        unsigned int  watch_dog_2_cfg_port : 1;  /* bit[2] : Watch_Dog_2_CFG_Port��ȫ���ã�
                                                             0����Ч
                                                             1����ȫ */
        unsigned int  watch_dog_3_cfg_port : 1;  /* bit[3] : Watch_Dog_3_CFG_Port��ȫ���ã�
                                                             0����Ч
                                                             1����ȫ */
        unsigned int  timer0_cfg_port      : 1;  /* bit[4] : Timer0_CFG_Port��ȫ���ã�
                                                             0����Ч
                                                             1����ȫ */
        unsigned int  timer1_cfg_port      : 1;  /* bit[5] : Timer1_CFG_Port��ȫ���ã�
                                                             0����Ч
                                                             1����ȫ */
        unsigned int  timer2_cfg_port      : 1;  /* bit[6] : Timer2_CFG_Port��ȫ���ã�
                                                             0����Ч
                                                             1����ȫ */
        unsigned int  timer3_cfg_port      : 1;  /* bit[7] : Timer3_CFG_Port��ȫ���ã�
                                                             0����Ч
                                                             1����ȫ */
        unsigned int  timer4_cfg_port      : 1;  /* bit[8] : Timer4_CFG_Port��ȫ���ã�
                                                             0����Ч
                                                             1����ȫ */
        unsigned int  timer5_cfg_port      : 1;  /* bit[9] : Timer5_CFG_Port��ȫ���ã�
                                                             0����Ч
                                                             1����ȫ */
        unsigned int  timer6_cfg_port      : 1;  /* bit[10]: Timer6_CFG_Port��ȫ���ã�
                                                             0����Ч
                                                             1����ȫ */
        unsigned int  timer7_cfg_port      : 1;  /* bit[11]: Timer7_CFG_Port��ȫ���ã�
                                                             0����Ч
                                                             1����ȫ */
        unsigned int  timer8_cfg_port      : 1;  /* bit[12]: Timer8_CFG_Port��ȫ���ã�
                                                             0����Ч
                                                             1����ȫ */
        unsigned int  rtc_cfg_port         : 1;  /* bit[13]: RTC_CFG_Port��ȫ���ã�
                                                             0����Ч
                                                             1����ȫ */
        unsigned int  bbp_on_cfg_port      : 1;  /* bit[14]: BBP_ON_CFG_Port��ȫ���ã�
                                                             0����Ч
                                                             1����ȫ */
        unsigned int  mtimer0_cfg_port     : 1;  /* bit[15]: Mtimer0_CFG_Port��ȫ���ã�
                                                             0����Ч
                                                             1����ȫ */
        unsigned int  mtimer1_cfg_port     : 1;  /* bit[16]: Mtimer1_CFG_Port��ȫ���ã�
                                                             0����Ч
                                                             1����ȫ */
        unsigned int  mtimer2_cfg_port     : 1;  /* bit[17]: Mtimer2_CFG_Port��ȫ���ã�
                                                             0����Ч
                                                             1����ȫ */
        unsigned int  mtimer3_cfg_port     : 1;  /* bit[18]: Mtimer3_CFG_Port��ȫ���ã�
                                                             0����Ч
                                                             1����ȫ */
        unsigned int  mtimer4_cfg_port     : 1;  /* bit[19]: Mtimer4_CFG_Port��ȫ���ã�
                                                             0����Ч
                                                             1����ȫ */
        unsigned int  mtimer5_cfg_port     : 1;  /* bit[20]: Mtimer5_CFG_Port��ȫ���ã�
                                                             0����Ч
                                                             1����ȫ */
        unsigned int  mtimer6_cfg_port     : 1;  /* bit[21]: Mtimer6_CFG_Port��ȫ���ã�
                                                             0����Ч
                                                             1����ȫ */
        unsigned int  mtimer7_cfg_port     : 1;  /* bit[22]: Mtimer7_CFG_Port��ȫ���ã�
                                                             0����Ч
                                                             1����ȫ */
        unsigned int  mtimer8_cfg_port     : 1;  /* bit[23]: Mtimer8_CFG_Port��ȫ���ã�
                                                             0����Ч
                                                             1����ȫ */
        unsigned int  mtimer9_cfg_port     : 1;  /* bit[24]: Mtimer9_CFG_Port��ȫ���ã�
                                                             0����Ч
                                                             1����ȫ */
        unsigned int  pmussi_cfg_port      : 1;  /* bit[25]: PMUSSI_CFG_Port��ȫ���ã�
                                                             0����Ч
                                                             1����ȫ */
        unsigned int  ioc_on_cfg_port      : 1;  /* bit[26]: IOC_ON_CFG_Port��ȫ���ã�
                                                             0����Ч
                                                             1����ȫ */
        unsigned int  gpio_on0_cfg_port    : 1;  /* bit[27]: GPIO_ON0_CFG_Port��ȫ���ã�
                                                             0����Ч
                                                             1����ȫ */
        unsigned int  gpio_on1_cfg_port    : 1;  /* bit[28]: GPIO_ON1_CFG_Port��ȫ���ã�
                                                             0����Ч
                                                             1����ȫ */
        unsigned int  gpio_on2_cfg_port    : 1;  /* bit[29]: GPIO_ON2_CFG_Port��ȫ���ã�
                                                             0����Ч
                                                             1����ȫ */
        unsigned int  gpio_on3_cfg_port    : 1;  /* bit[30]: GPIO_ON3_CFG_Port��ȫ���ã�
                                                             0����Ч
                                                             1����ȫ */
        unsigned int  mcu_subsys_cfg_port  : 1;  /* bit[31]: MCU_Subsys_CFG_Port��ȫ���ã�
                                                             0����ȫ
                                                             1����ȫ */
    } reg;
} SOC_TZPC_TZPCDECPROT2CLR_UNION;
#endif
#define SOC_TZPC_TZPCDECPROT2CLR_watch_dog_0_cfg_port_START  (0)
#define SOC_TZPC_TZPCDECPROT2CLR_watch_dog_0_cfg_port_END    (0)
#define SOC_TZPC_TZPCDECPROT2CLR_watch_dog_1_cfg_port_START  (1)
#define SOC_TZPC_TZPCDECPROT2CLR_watch_dog_1_cfg_port_END    (1)
#define SOC_TZPC_TZPCDECPROT2CLR_watch_dog_2_cfg_port_START  (2)
#define SOC_TZPC_TZPCDECPROT2CLR_watch_dog_2_cfg_port_END    (2)
#define SOC_TZPC_TZPCDECPROT2CLR_watch_dog_3_cfg_port_START  (3)
#define SOC_TZPC_TZPCDECPROT2CLR_watch_dog_3_cfg_port_END    (3)
#define SOC_TZPC_TZPCDECPROT2CLR_timer0_cfg_port_START       (4)
#define SOC_TZPC_TZPCDECPROT2CLR_timer0_cfg_port_END         (4)
#define SOC_TZPC_TZPCDECPROT2CLR_timer1_cfg_port_START       (5)
#define SOC_TZPC_TZPCDECPROT2CLR_timer1_cfg_port_END         (5)
#define SOC_TZPC_TZPCDECPROT2CLR_timer2_cfg_port_START       (6)
#define SOC_TZPC_TZPCDECPROT2CLR_timer2_cfg_port_END         (6)
#define SOC_TZPC_TZPCDECPROT2CLR_timer3_cfg_port_START       (7)
#define SOC_TZPC_TZPCDECPROT2CLR_timer3_cfg_port_END         (7)
#define SOC_TZPC_TZPCDECPROT2CLR_timer4_cfg_port_START       (8)
#define SOC_TZPC_TZPCDECPROT2CLR_timer4_cfg_port_END         (8)
#define SOC_TZPC_TZPCDECPROT2CLR_timer5_cfg_port_START       (9)
#define SOC_TZPC_TZPCDECPROT2CLR_timer5_cfg_port_END         (9)
#define SOC_TZPC_TZPCDECPROT2CLR_timer6_cfg_port_START       (10)
#define SOC_TZPC_TZPCDECPROT2CLR_timer6_cfg_port_END         (10)
#define SOC_TZPC_TZPCDECPROT2CLR_timer7_cfg_port_START       (11)
#define SOC_TZPC_TZPCDECPROT2CLR_timer7_cfg_port_END         (11)
#define SOC_TZPC_TZPCDECPROT2CLR_timer8_cfg_port_START       (12)
#define SOC_TZPC_TZPCDECPROT2CLR_timer8_cfg_port_END         (12)
#define SOC_TZPC_TZPCDECPROT2CLR_rtc_cfg_port_START          (13)
#define SOC_TZPC_TZPCDECPROT2CLR_rtc_cfg_port_END            (13)
#define SOC_TZPC_TZPCDECPROT2CLR_bbp_on_cfg_port_START       (14)
#define SOC_TZPC_TZPCDECPROT2CLR_bbp_on_cfg_port_END         (14)
#define SOC_TZPC_TZPCDECPROT2CLR_mtimer0_cfg_port_START      (15)
#define SOC_TZPC_TZPCDECPROT2CLR_mtimer0_cfg_port_END        (15)
#define SOC_TZPC_TZPCDECPROT2CLR_mtimer1_cfg_port_START      (16)
#define SOC_TZPC_TZPCDECPROT2CLR_mtimer1_cfg_port_END        (16)
#define SOC_TZPC_TZPCDECPROT2CLR_mtimer2_cfg_port_START      (17)
#define SOC_TZPC_TZPCDECPROT2CLR_mtimer2_cfg_port_END        (17)
#define SOC_TZPC_TZPCDECPROT2CLR_mtimer3_cfg_port_START      (18)
#define SOC_TZPC_TZPCDECPROT2CLR_mtimer3_cfg_port_END        (18)
#define SOC_TZPC_TZPCDECPROT2CLR_mtimer4_cfg_port_START      (19)
#define SOC_TZPC_TZPCDECPROT2CLR_mtimer4_cfg_port_END        (19)
#define SOC_TZPC_TZPCDECPROT2CLR_mtimer5_cfg_port_START      (20)
#define SOC_TZPC_TZPCDECPROT2CLR_mtimer5_cfg_port_END        (20)
#define SOC_TZPC_TZPCDECPROT2CLR_mtimer6_cfg_port_START      (21)
#define SOC_TZPC_TZPCDECPROT2CLR_mtimer6_cfg_port_END        (21)
#define SOC_TZPC_TZPCDECPROT2CLR_mtimer7_cfg_port_START      (22)
#define SOC_TZPC_TZPCDECPROT2CLR_mtimer7_cfg_port_END        (22)
#define SOC_TZPC_TZPCDECPROT2CLR_mtimer8_cfg_port_START      (23)
#define SOC_TZPC_TZPCDECPROT2CLR_mtimer8_cfg_port_END        (23)
#define SOC_TZPC_TZPCDECPROT2CLR_mtimer9_cfg_port_START      (24)
#define SOC_TZPC_TZPCDECPROT2CLR_mtimer9_cfg_port_END        (24)
#define SOC_TZPC_TZPCDECPROT2CLR_pmussi_cfg_port_START       (25)
#define SOC_TZPC_TZPCDECPROT2CLR_pmussi_cfg_port_END         (25)
#define SOC_TZPC_TZPCDECPROT2CLR_ioc_on_cfg_port_START       (26)
#define SOC_TZPC_TZPCDECPROT2CLR_ioc_on_cfg_port_END         (26)
#define SOC_TZPC_TZPCDECPROT2CLR_gpio_on0_cfg_port_START     (27)
#define SOC_TZPC_TZPCDECPROT2CLR_gpio_on0_cfg_port_END       (27)
#define SOC_TZPC_TZPCDECPROT2CLR_gpio_on1_cfg_port_START     (28)
#define SOC_TZPC_TZPCDECPROT2CLR_gpio_on1_cfg_port_END       (28)
#define SOC_TZPC_TZPCDECPROT2CLR_gpio_on2_cfg_port_START     (29)
#define SOC_TZPC_TZPCDECPROT2CLR_gpio_on2_cfg_port_END       (29)
#define SOC_TZPC_TZPCDECPROT2CLR_gpio_on3_cfg_port_START     (30)
#define SOC_TZPC_TZPCDECPROT2CLR_gpio_on3_cfg_port_END       (30)
#define SOC_TZPC_TZPCDECPROT2CLR_mcu_subsys_cfg_port_START   (31)
#define SOC_TZPC_TZPCDECPROT2CLR_mcu_subsys_cfg_port_END     (31)


/*****************************************************************************
 �ṹ��    : SOC_TZPC_TZPCDECPROT3STAT_UNION
 �ṹ˵��  : TZPCDECPROT3STAT �Ĵ����ṹ���塣��ַƫ����:0x0824����ֵ:0x0BFFFFFF�����:32
 �Ĵ���˵��: ��ȫ����״̬�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sci0_cfg_port      : 1;  /* bit[0]    : SCI0_CFG_Port��ȫ״̬��
                                                              0����ȫ
                                                              1���ǰ�ȫ */
        unsigned int  sci1_cfg_port      : 1;  /* bit[1]    : SCI1_CFG_Port��ȫ״̬��
                                                              0����ȫ
                                                              1���ǰ�ȫ */
        unsigned int  sram_on_slave_port : 1;  /* bit[2]    : SRAM_ON_Slave_Port��ȫ״̬��
                                                              0����ȫ
                                                              1���ǰ�ȫ */
        unsigned int  scon_sec_ctrl      : 1;  /* bit[3]    : SCON_SEC_CTRL��ȫ״̬��
                                                              0����ȫ
                                                              1���ǰ�ȫ */
        unsigned int  scon_sec_ctrl_rd0  : 1;  /* bit[4]    : SCON_SEC_CTRL_RD0��ȫ״̬��
                                                              0����ȫ
                                                              1���ǰ�ȫ */
        unsigned int  scon_sec_ctrl_rd1  : 1;  /* bit[5]    : SCON_SEC_CTRL_RD1��ȫ״̬��
                                                              0����ȫ
                                                              1���ǰ�ȫ */
        unsigned int  sec_cfg_edc0       : 8;  /* bit[6-13] : SEC_CFG_EDC0[7:0]��ȫ״̬��
                                                              0����ȫ
                                                              1���ǰ�ȫ
                                                              ���庬��ο�EDC0�ӿ�˵�� */
        unsigned int  sec_cfg_dsi        : 1;  /* bit[14]   : SEC_CFG_DSI��ȫ״̬��
                                                              0����ȫ
                                                              1���ǰ�ȫ
                                                              ���庬��ο�DSI�ӿ�˵�� */
        unsigned int  sec_cfg_hdmi       : 5;  /* bit[15-19]: SEC_CFG_HDMI[4:0]��ȫ״̬��
                                                              0����ȫ
                                                              1���ǰ�ȫ
                                                              ���庬��ο�HDMI�ӿ�˵�� */
        unsigned int  sec_cfg_edc1       : 7;  /* bit[20-26]: SEC_CFG_EDC1[6:0]��ȫ����״̬��
                                                              0����ȫ
                                                              1���ǰ�ȫ
                                                              ���庬��ο�EDC1�ӿ�˵�� */
        unsigned int  ipc_sec_cfg_port   : 1;  /* bit[27]   : IPC_SEC_CFG_Port��ȫ״̬��
                                                              0����ȫ
                                                              1���ǰ�ȫ */
        unsigned int  reserved           : 4;  /* bit[28-31]: reserved */
    } reg;
} SOC_TZPC_TZPCDECPROT3STAT_UNION;
#endif
#define SOC_TZPC_TZPCDECPROT3STAT_sci0_cfg_port_START       (0)
#define SOC_TZPC_TZPCDECPROT3STAT_sci0_cfg_port_END         (0)
#define SOC_TZPC_TZPCDECPROT3STAT_sci1_cfg_port_START       (1)
#define SOC_TZPC_TZPCDECPROT3STAT_sci1_cfg_port_END         (1)
#define SOC_TZPC_TZPCDECPROT3STAT_sram_on_slave_port_START  (2)
#define SOC_TZPC_TZPCDECPROT3STAT_sram_on_slave_port_END    (2)
#define SOC_TZPC_TZPCDECPROT3STAT_scon_sec_ctrl_START       (3)
#define SOC_TZPC_TZPCDECPROT3STAT_scon_sec_ctrl_END         (3)
#define SOC_TZPC_TZPCDECPROT3STAT_scon_sec_ctrl_rd0_START   (4)
#define SOC_TZPC_TZPCDECPROT3STAT_scon_sec_ctrl_rd0_END     (4)
#define SOC_TZPC_TZPCDECPROT3STAT_scon_sec_ctrl_rd1_START   (5)
#define SOC_TZPC_TZPCDECPROT3STAT_scon_sec_ctrl_rd1_END     (5)
#define SOC_TZPC_TZPCDECPROT3STAT_sec_cfg_edc0_START        (6)
#define SOC_TZPC_TZPCDECPROT3STAT_sec_cfg_edc0_END          (13)
#define SOC_TZPC_TZPCDECPROT3STAT_sec_cfg_dsi_START         (14)
#define SOC_TZPC_TZPCDECPROT3STAT_sec_cfg_dsi_END           (14)
#define SOC_TZPC_TZPCDECPROT3STAT_sec_cfg_hdmi_START        (15)
#define SOC_TZPC_TZPCDECPROT3STAT_sec_cfg_hdmi_END          (19)
#define SOC_TZPC_TZPCDECPROT3STAT_sec_cfg_edc1_START        (20)
#define SOC_TZPC_TZPCDECPROT3STAT_sec_cfg_edc1_END          (26)
#define SOC_TZPC_TZPCDECPROT3STAT_ipc_sec_cfg_port_START    (27)
#define SOC_TZPC_TZPCDECPROT3STAT_ipc_sec_cfg_port_END      (27)


/*****************************************************************************
 �ṹ��    : SOC_TZPC_TZPCDECPROT3SET_UNION
 �ṹ˵��  : TZPCDECPROT3SET �Ĵ����ṹ���塣��ַƫ����:0x0828����ֵ:0x00000000�����:32
 �Ĵ���˵��: �ǰ�ȫ���üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sci0_cfg_port      : 1;  /* bit[0]    : SCI0_CFG_Port�ǰ�ȫ���ã�
                                                              0����Ч
                                                              1���ǰ�ȫ */
        unsigned int  sci1_cfg_port      : 1;  /* bit[1]    : SCI1_CFG_Port�ǰ�ȫ���ã�
                                                              0����Ч
                                                              1���ǰ�ȫ */
        unsigned int  sram_on_slave_port : 1;  /* bit[2]    : SRAM_ON_Slave_Port�ǰ�ȫ���ã�
                                                              0����Ч
                                                              1���ǰ�ȫ */
        unsigned int  scon_sec_ctrl      : 1;  /* bit[3]    : SCON_SEC_CTRL�ǰ�ȫ���ã�
                                                              0����Ч
                                                              1���ǰ�ȫ */
        unsigned int  scon_sec_ctrl_rd0  : 1;  /* bit[4]    : SCON_SEC_CTRL_RD0�ǰ�ȫ���ã�
                                                              0����Ч
                                                              1���ǰ�ȫ */
        unsigned int  scon_sec_ctrl_rd1  : 1;  /* bit[5]    : SCON_SEC_CTRL_RD1�ǰ�ȫ���ã�
                                                              0����Ч
                                                              1���ǰ�ȫ */
        unsigned int  sec_cfg_edc0       : 8;  /* bit[6-13] : SEC_CFG_EDC0[7:0]�ǰ�ȫ���ã�
                                                              0����Ч
                                                              1���ǰ�ȫ
                                                              ���庬��ο�EDC0�ӿ�˵�� */
        unsigned int  sec_cfg_dsi        : 1;  /* bit[14]   : SEC_CFG_DSI�ǰ�ȫ���ã�
                                                              0����Ч
                                                              1���ǰ�ȫ
                                                              ���庬��ο�DSI�ӿ�˵�� */
        unsigned int  sec_cfg_hdmi       : 5;  /* bit[15-19]: SEC_CFG_HDMI[4:0]�ǰ�ȫ���ã�
                                                              0����Ч
                                                              1���ǰ�ȫ
                                                              ���庬��ο�HDMI�ӿ�˵�� */
        unsigned int  sec_cfg_edc1       : 7;  /* bit[20-26]: SEC_CFG_EDC1[6:0]�ǰ�ȫ���ã�
                                                              0����Ч
                                                              1���ǰ�ȫ
                                                              ���庬��ο�EDC1�ӿ�˵�� */
        unsigned int  ipc_sec_cfg_port   : 1;  /* bit[27]   : IPC_SEC_CFG_Port�ǰ�ȫ���ã�
                                                              0����Ч
                                                              1���ǰ�ȫ */
        unsigned int  reserved           : 4;  /* bit[28-31]: reserved */
    } reg;
} SOC_TZPC_TZPCDECPROT3SET_UNION;
#endif
#define SOC_TZPC_TZPCDECPROT3SET_sci0_cfg_port_START       (0)
#define SOC_TZPC_TZPCDECPROT3SET_sci0_cfg_port_END         (0)
#define SOC_TZPC_TZPCDECPROT3SET_sci1_cfg_port_START       (1)
#define SOC_TZPC_TZPCDECPROT3SET_sci1_cfg_port_END         (1)
#define SOC_TZPC_TZPCDECPROT3SET_sram_on_slave_port_START  (2)
#define SOC_TZPC_TZPCDECPROT3SET_sram_on_slave_port_END    (2)
#define SOC_TZPC_TZPCDECPROT3SET_scon_sec_ctrl_START       (3)
#define SOC_TZPC_TZPCDECPROT3SET_scon_sec_ctrl_END         (3)
#define SOC_TZPC_TZPCDECPROT3SET_scon_sec_ctrl_rd0_START   (4)
#define SOC_TZPC_TZPCDECPROT3SET_scon_sec_ctrl_rd0_END     (4)
#define SOC_TZPC_TZPCDECPROT3SET_scon_sec_ctrl_rd1_START   (5)
#define SOC_TZPC_TZPCDECPROT3SET_scon_sec_ctrl_rd1_END     (5)
#define SOC_TZPC_TZPCDECPROT3SET_sec_cfg_edc0_START        (6)
#define SOC_TZPC_TZPCDECPROT3SET_sec_cfg_edc0_END          (13)
#define SOC_TZPC_TZPCDECPROT3SET_sec_cfg_dsi_START         (14)
#define SOC_TZPC_TZPCDECPROT3SET_sec_cfg_dsi_END           (14)
#define SOC_TZPC_TZPCDECPROT3SET_sec_cfg_hdmi_START        (15)
#define SOC_TZPC_TZPCDECPROT3SET_sec_cfg_hdmi_END          (19)
#define SOC_TZPC_TZPCDECPROT3SET_sec_cfg_edc1_START        (20)
#define SOC_TZPC_TZPCDECPROT3SET_sec_cfg_edc1_END          (26)
#define SOC_TZPC_TZPCDECPROT3SET_ipc_sec_cfg_port_START    (27)
#define SOC_TZPC_TZPCDECPROT3SET_ipc_sec_cfg_port_END      (27)


/*****************************************************************************
 �ṹ��    : SOC_TZPC_TZPCDECPROT3CLR_UNION
 �ṹ˵��  : TZPCDECPROT3CLR �Ĵ����ṹ���塣��ַƫ����:0x082C����ֵ:0x00000000�����:32
 �Ĵ���˵��: ��ȫ���üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  sci0_cfg_port      : 1;  /* bit[0]    : SCI0_CFG_Port��ȫ���ã�
                                                              0����Ч
                                                              1����ȫ */
        unsigned int  sci1_cfg_port      : 1;  /* bit[1]    : SCI1_CFG_Port��ȫ���ã�
                                                              0����Ч
                                                              1����ȫ */
        unsigned int  sram_on_slave_port : 1;  /* bit[2]    : SRAM_ON_Slave_Port��ȫ���ã�
                                                              0����Ч
                                                              1����ȫ */
        unsigned int  scon_sec_ctrl      : 1;  /* bit[3]    : SCON_SEC_CTRL��ȫ���ã�
                                                              0����Ч
                                                              1����ȫ */
        unsigned int  scon_sec_ctrl_rd0  : 1;  /* bit[4]    : SCON_SEC_CTRL_RD0��ȫ���ã�
                                                              0����Ч
                                                              1����ȫ */
        unsigned int  scon_sec_ctrl_rd1  : 1;  /* bit[5]    : SCON_SEC_CTRL_RD1��ȫ���ã�
                                                              0����Ч
                                                              1����ȫ */
        unsigned int  sec_cfg_edc0       : 8;  /* bit[6-13] : SEC_CFG_EDC0[7:0]��ȫ���ã�
                                                              0����Ч
                                                              1����ȫ
                                                              ���庬��ο�EDC0�ӿ�˵�� */
        unsigned int  sec_cfg_dsi        : 1;  /* bit[14]   : SEC_CFG_DSI��ȫ���ã�
                                                              0����Ч
                                                              1����ȫ
                                                              ���庬��ο�DSI�ӿ�˵�� */
        unsigned int  sec_cfg_hdmi       : 5;  /* bit[15-19]: SEC_CFG_HDMI[4:0]��ȫ���ã�
                                                              0����Ч
                                                              1����ȫ
                                                              ���庬��ο�HDMI�ӿ�˵�� */
        unsigned int  sec_cfg_edc1       : 7;  /* bit[20-26]: SEC_CFG_EDC1[6:0]��ȫ���ã�
                                                              0����Ч
                                                              1����ȫ
                                                              ���庬��ο�EDC1�ӿ�˵�� */
        unsigned int  ipc_sec_cfg_port   : 1;  /* bit[27]   : IPC_SEC_CFG_Port��ȫ���ã�
                                                              0����Ч
                                                              1����ȫ */
        unsigned int  reserved           : 4;  /* bit[28-31]: reserved */
    } reg;
} SOC_TZPC_TZPCDECPROT3CLR_UNION;
#endif
#define SOC_TZPC_TZPCDECPROT3CLR_sci0_cfg_port_START       (0)
#define SOC_TZPC_TZPCDECPROT3CLR_sci0_cfg_port_END         (0)
#define SOC_TZPC_TZPCDECPROT3CLR_sci1_cfg_port_START       (1)
#define SOC_TZPC_TZPCDECPROT3CLR_sci1_cfg_port_END         (1)
#define SOC_TZPC_TZPCDECPROT3CLR_sram_on_slave_port_START  (2)
#define SOC_TZPC_TZPCDECPROT3CLR_sram_on_slave_port_END    (2)
#define SOC_TZPC_TZPCDECPROT3CLR_scon_sec_ctrl_START       (3)
#define SOC_TZPC_TZPCDECPROT3CLR_scon_sec_ctrl_END         (3)
#define SOC_TZPC_TZPCDECPROT3CLR_scon_sec_ctrl_rd0_START   (4)
#define SOC_TZPC_TZPCDECPROT3CLR_scon_sec_ctrl_rd0_END     (4)
#define SOC_TZPC_TZPCDECPROT3CLR_scon_sec_ctrl_rd1_START   (5)
#define SOC_TZPC_TZPCDECPROT3CLR_scon_sec_ctrl_rd1_END     (5)
#define SOC_TZPC_TZPCDECPROT3CLR_sec_cfg_edc0_START        (6)
#define SOC_TZPC_TZPCDECPROT3CLR_sec_cfg_edc0_END          (13)
#define SOC_TZPC_TZPCDECPROT3CLR_sec_cfg_dsi_START         (14)
#define SOC_TZPC_TZPCDECPROT3CLR_sec_cfg_dsi_END           (14)
#define SOC_TZPC_TZPCDECPROT3CLR_sec_cfg_hdmi_START        (15)
#define SOC_TZPC_TZPCDECPROT3CLR_sec_cfg_hdmi_END          (19)
#define SOC_TZPC_TZPCDECPROT3CLR_sec_cfg_edc1_START        (20)
#define SOC_TZPC_TZPCDECPROT3CLR_sec_cfg_edc1_END          (26)
#define SOC_TZPC_TZPCDECPROT3CLR_ipc_sec_cfg_port_START    (27)
#define SOC_TZPC_TZPCDECPROT3CLR_ipc_sec_cfg_port_END      (27)






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

#endif /* end of soc_tzpc_interface.h */
