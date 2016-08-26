

/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/

#ifndef __SOC_PWM_INTERFACE_H__
#define __SOC_PWM_INTERFACE_H__

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
/* �Ĵ���˵����pwm lock�Ĵ���
   λ����UNION�ṹ:  SOC_PWM_LOCK_UNION */
#define SOC_PWM_LOCK_ADDR(base)                       ((base) + (0x000))

/* �Ĵ���˵����pwm���ƼĴ���
   λ����UNION�ṹ:  SOC_PWM_CTL_UNION */
#define SOC_PWM_CTL_ADDR(base)                        ((base) + (0x004))

/* �Ĵ���˵����PWM���üĴ�����
   λ����UNION�ṹ:  SOC_PWM_CFG_UNION */
#define SOC_PWM_CFG_ADDR(base)                        ((base) + (0x008))

/* �Ĵ���˵����PWM�͹���״̬���Ĵ���
   λ����UNION�ṹ:  SOC_PWM_LPIF_STATE_UNION */
#define SOC_PWM_LPIF_STATE_ADDR(base)                 ((base) + (0x020))

/* �Ĵ���˵����PWM����״̬�Ĵ���
   λ����UNION�ṹ:  SOC_PWM_STATUS_UNION */
#define SOC_PWM_STATUS_ADDR(base)                     ((base) + (0x0024))

/* �Ĵ���˵����PWMԤ��Ƶ0�Ĵ���
   λ����UNION�ṹ:  SOC_PWM_PR0_UNION */
#define SOC_PWM_PR0_ADDR(base)                        ((base) + (0x0100))

/* �Ĵ���˵����PWMԤ��Ƶ1�Ĵ���
   λ����UNION�ṹ:  SOC_PWM_PR1_UNION */
#define SOC_PWM_PR1_ADDR(base)                        ((base) + (0x0104))

/* �Ĵ���˵����PWMԤ��Ƶ0�����Ĵ���
   λ����UNION�ṹ:  SOC_PWM_PCNT0_UNION */
#define SOC_PWM_PCNT0_ADDR(base)                      ((base) + (0x0108))

/* �Ĵ���˵����PWMԤ��Ƶ1�����Ĵ���
   λ����UNION�ṹ:  SOC_PWM_PCNT1_UNION */
#define SOC_PWM_PCNT1_ADDR(base)                      ((base) + (0x010C))

/* �Ĵ���˵����PWMԭʼ�жϼĴ�����
   λ����UNION�ṹ:  SOC_PWM_RIS_UNION */
#define SOC_PWM_RIS_ADDR(base)                        ((base) + (0x200))

/* �Ĵ���˵����PWM�ж����μĴ�����
   λ����UNION�ṹ:  SOC_PWM_MSK_UNION */
#define SOC_PWM_MSK_ADDR(base)                        ((base) + (0x204))

/* �Ĵ���˵����PWM�ж�����Ĵ�����
   λ����UNION�ṹ:  SOC_PWM_EOI_UNION */
#define SOC_PWM_EOI_ADDR(base)                        ((base) + (0x208))

/* �Ĵ���˵����PWM���κ��жϼĴ�����
   λ����UNION�ṹ:  SOC_PWM_INT_UNION */
#define SOC_PWM_INT_ADDR(base)                        ((base) + (0x20C))

/* �Ĵ���˵����PWM����ƥ��Ĵ���
   λ����UNION�ṹ:  SOC_PWM_C0_MR_UNION */
#define SOC_PWM_C0_MR_ADDR(base)                      ((base) + (0x0300))

/* �Ĵ���˵����PWM����ƥ��Ĵ���
   λ����UNION�ṹ:  SOC_PWM_C1_MR_UNION */
#define SOC_PWM_C1_MR_ADDR(base)                      ((base) + (0x0400))

/* �Ĵ���˵����PWM����ƥ��Ĵ���
   λ����UNION�ṹ:  SOC_PWM_C0_MR0_UNION */
#define SOC_PWM_C0_MR0_ADDR(base)                     ((base) + (0x0304))

/* �Ĵ���˵����PWM����ƥ��Ĵ���
   λ����UNION�ṹ:  SOC_PWM_C1_MR0_UNION */
#define SOC_PWM_C1_MR0_ADDR(base)                     ((base) + (0x0404))

/* �Ĵ���˵����PWM����ƥ��Ĵ���
   λ����UNION�ṹ:  SOC_PWM_C0_MR1_UNION */
#define SOC_PWM_C0_MR1_ADDR(base)                     ((base) + (0x0308))

/* �Ĵ���˵����PWM����ƥ��Ĵ���
   λ����UNION�ṹ:  SOC_PWM_C1_MR1_UNION */
#define SOC_PWM_C1_MR1_ADDR(base)                     ((base) + (0x0408))

/* �Ĵ���˵����PWMͨ��0�Ķ�ʱ���Ĵ���
   λ����UNION�ṹ:  SOC_PWM_C0_TCNT_UNION */
#define SOC_PWM_C0_TCNT_ADDR(base)                    ((base) + (0x030C))

/* �Ĵ���˵����PWMͨ��1�Ķ�ʱ���Ĵ���
   λ����UNION�ṹ:  SOC_PWM_C1_TCNT_UNION */
#define SOC_PWM_C1_TCNT_ADDR(base)                    ((base) + (0x040C))

/* �Ĵ���˵����PWM������λ���üĴ���
   λ����UNION�ṹ:  SOC_PWM_C0_PHA_UNION */
#define SOC_PWM_C0_PHA_ADDR(base)                     ((base) + (0x0310))

/* �Ĵ���˵����PWM������λ���üĴ���
   λ����UNION�ṹ:  SOC_PWM_C1_PHA_UNION */
#define SOC_PWM_C1_PHA_ADDR(base)                     ((base) + (0x0410))





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
 �ṹ��    : SOC_PWM_LOCK_UNION
 �ṹ˵��  : LOCK �Ĵ����ṹ���塣��ַƫ����:0x000����ֵ:0x00000001�����:32
 �Ĵ���˵��: pwm lock�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pwm_lock : 32; /* bit[0-31]: pwm_lock�Ĵ���������õ�ַд��0x1ACC_E551(��ֵ�궨����䣬���÷�ΧΪ32'h00000000~32'hffffffff)ʱ��pwm_lockΪ1'b0,���������������мĴ���������üĴ���д������ֵʱ��pwm_lockΪ1'b1��ֻ������lock�Ĵ����� */
    } reg;
} SOC_PWM_LOCK_UNION;
#endif
#define SOC_PWM_LOCK_pwm_lock_START  (0)
#define SOC_PWM_LOCK_pwm_lock_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_PWM_CTL_UNION
 �ṹ˵��  : CTL �Ĵ����ṹ���塣��ַƫ����:0x004����ֵ:0x00000000�����:32
 �Ĵ���˵��: pwm���ƼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pwm_en   : 1;  /* bit[0]   : ģ��ʹ���źţ�����Ч��ʹ�ܺ�ģ����������йأ����pwm_out����Ϊ�ر�ʱ״̬��
                                                   0��PWMδʹ�ܣ�
                                                   1��PWMʹ�ܣ� */
        unsigned int  pwm_rst  : 1;  /* bit[1]   : ��λ������Ч
                                                   0����λ��Ч��
                                                   1����λ��Ч�� */
        unsigned int  reserved : 30; /* bit[2-31]: ������ */
    } reg;
} SOC_PWM_CTL_UNION;
#endif
#define SOC_PWM_CTL_pwm_en_START    (0)
#define SOC_PWM_CTL_pwm_en_END      (0)
#define SOC_PWM_CTL_pwm_rst_START   (1)
#define SOC_PWM_CTL_pwm_rst_END     (1)


/*****************************************************************************
 �ṹ��    : SOC_PWM_CFG_UNION
 �ṹ˵��  : CFG �Ĵ����ṹ���塣��ַƫ����:0x008����ֵ:0x00000000�����:32
 �Ĵ���˵��: PWM���üĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pwm_mode_0    : 1;  /* bit[0] : ͨ��0�ı��ط�ʽѡ���ź�
                                                      0�������ط�ʽ
                                                      1��˫���ط�ʽ */
        unsigned int  pwm_oen_0     : 1;  /* bit[1] : ͨ��0��PWM������������ź�
                                                      0�������̬
                                                      1�����PWM���� */
        unsigned int  pwm_mode_1    : 1;  /* bit[2] : ���ݺ궨��`PWM_CH_NUM�Լ�`PWM_CH1����,ͨ��1�ı��ط�ʽѡ���ź�
                                                      0�������ط�ʽ
                                                      1��˫���ط�ʽ */
        unsigned int  pwm_oen_1     : 1;  /* bit[3] : ���ݺ궨��`PWM_CH_NUM�Լ�`PWM_CH1����,ͨ��1��PWM������������ź�
                                                      0�������̬
                                                      1�����PWM���� */
        unsigned int  pwm_mode_2    : 1;  /* bit[4] : ���ݺ궨��`PWM_CH_NUM�Լ�`PWM_CH2����,ͨ��2�ı��ط�ʽѡ���ź�
                                                      0�������ط�ʽ
                                                      1��˫���ط�ʽ */
        unsigned int  pwm_oen_2     : 1;  /* bit[5] : ���ݺ궨��`PWM_CH_NUM�Լ�`PWM_CH2����,ͨ��2��PWM������������ź�
                                                      0�������̬
                                                      1�����PWM���� */
        unsigned int  pwm_mode_3    : 1;  /* bit[6] : ���ݺ궨��`PWM_CH_NUM�Լ�`PWM_CH3����,ͨ��3�ı��ط�ʽѡ���ź�
                                                      0�������ط�ʽ
                                                      1��˫���ط�ʽ */
        unsigned int  pwm_oen_3     : 1;  /* bit[7] : ���ݺ궨��`PWM_CH_NUM�Լ�`PWM_CH3����,ͨ��3��PWM������������ź�
                                                      0�������̬
                                                      1�����PWM���� */
        unsigned int  pwm_mode_4    : 1;  /* bit[8] : ���ݺ궨��`PWM_CH_NUM�Լ�`PWM_CH4����,ͨ��4�ı��ط�ʽѡ���ź�
                                                      0�������ط�ʽ
                                                      1��˫���ط�ʽ */
        unsigned int  pwm_oen_4     : 1;  /* bit[9] : ���ݺ궨��`PWM_CH_NUM�Լ�`PWM_CH4����,ͨ��4��PWM������������ź�
                                                      0�������̬
                                                      1�����PWM���� */
        unsigned int  pwm_mode_5    : 1;  /* bit[10]: ���ݺ궨��`PWM_CH_NUM�Լ�`PWM_CH5����,ͨ��5�ı��ط�ʽѡ���ź�
                                                      0�������ط�ʽ
                                                      1��˫���ط�ʽ */
        unsigned int  pwm_oen_5     : 1;  /* bit[11]: ���ݺ궨��`PWM_CH_NUM�Լ�`PWM_CH5����,ͨ��5��PWM������������ź�
                                                      0�������̬
                                                      1�����PWM���� */
        unsigned int  pwm_mode_6    : 1;  /* bit[12]: ���ݺ궨��`PWM_CH_NUM�Լ�`PWM_CH6����,ͨ��6�ı��ط�ʽѡ���ź�
                                                      0�������ط�ʽ
                                                      1��˫���ط�ʽ */
        unsigned int  pwm_oen_6     : 1;  /* bit[13]: ���ݺ궨��`PWM_CH_NUM�Լ�`PWM_CH6����,ͨ��6��PWM������������ź�
                                                      0�������̬
                                                      1�����PWM���� */
        unsigned int  pwm_mode_7    : 1;  /* bit[14]: ���ݺ궨��`PWM_CH_NUM�Լ�`PWM_CH7����,ͨ��7�ı��ط�ʽѡ���ź�
                                                      0�������ط�ʽ
                                                      1��˫���ط�ʽ */
        unsigned int  pwm_oen_7     : 1;  /* bit[15]: ���ݺ궨��`PWM_CH_NUM�Լ�`PWM_CH7����,ͨ��7��PWM������������ź�
                                                      0�������̬
                                                      1�����PWM���� */
        unsigned int  pwm_int_en_0  : 1;  /* bit[16]: ʹ��pwm_ris_0ԭʼ�ж��ź�
                                                      0��ʹ����Ч
                                                      1��ʹ����Ч
                                                      ͨ���궨��`PWM_INCLUDE_INT�ɹر� */
        unsigned int  pwm_int_en_1  : 1;  /* bit[17]: ʹ��pwm_ris_1ԭʼ�ж��ź�
                                                      0��ʹ����Ч
                                                      1��ʹ����Ч
                                                      ͨ���궨��`PWM_INCLUDE_INT�ɹر� */
        unsigned int  pwm_int_en_2  : 1;  /* bit[18]: ʹ��pwm_ris_2ԭʼ�ж��ź�
                                                      0��ʹ����Ч
                                                      1��ʹ����Ч
                                                      ͨ���궨��`PWM_INCLUDE_INT��`PWM_CH_NUM�ɹر� */
        unsigned int  pwm_int_en_3  : 1;  /* bit[19]: ʹ��pwm_ris_3ԭʼ�ж��ź�
                                                      0��ʹ����Ч
                                                      1��ʹ����Ч
                                                      ͨ���궨��`PWM_INCLUDE_INT��`PWM_CH_NUM�ɹر� */
        unsigned int  pwm_int_en_4  : 1;  /* bit[20]: ʹ��pwm_ris_4ԭʼ�ж��ź�
                                                      0��ʹ����Ч
                                                      1��ʹ����Ч
                                                      ͨ���궨��`PWM_INCLUDE_INT��`PWM_CH_NUM�ɹر� */
        unsigned int  pwm_int_en_5  : 1;  /* bit[21]: ʹ��pwm_ris_5ԭʼ�ж��ź�
                                                      0��ʹ����Ч
                                                      1��ʹ����Ч
                                                      ͨ���궨��`PWM_INCLUDE_INT��`PWM_CH_NUM�ɹر� */
        unsigned int  pwm_int_en_6  : 1;  /* bit[22]: ʹ��pwm_ris_6ԭʼ�ж��ź�
                                                      0��ʹ����Ч
                                                      1��ʹ����Ч
                                                      ͨ���궨��`PWM_INCLUDE_INT��`PWM_CH_NUM�ɹر� */
        unsigned int  pwm_int_en_7  : 1;  /* bit[23]: ʹ��pwm_ris_7ԭʼ�ж��ź�
                                                      0��ʹ����Ч
                                                      1��ʹ����Ч
                                                      ͨ���궨��`PWM_INCLUDE_INT��`PWM_CH_NUM�ɹر� */
        unsigned int  pwm_int_en_8  : 1;  /* bit[24]: ʹ��pwm_ris_8ԭʼ�ж��ź�
                                                      0��ʹ����Ч
                                                      1��ʹ����Ч
                                                      ͨ���궨��`PWM_INCLUDE_INT��`PWM_CH_NUM�ɹر� */
        unsigned int  pwm_int_en_9  : 1;  /* bit[25]: ʹ��pwm_ris_9ԭʼ�ж��ź�
                                                      0��ʹ����Ч
                                                      1��ʹ����Ч
                                                      ͨ���궨��`PWM_INCLUDE_INT��`PWM_CH_NUM�ɹر� */
        unsigned int  pwm_int_en_10 : 1;  /* bit[26]: ʹ��pwm_ris_10ԭʼ�ж��ź�
                                                      0��ʹ����Ч
                                                      1��ʹ����Ч
                                                      ͨ���궨��`PWM_INCLUDE_INT��`PWM_CH_NUM�ɹر� */
        unsigned int  pwm_int_en_11 : 1;  /* bit[27]: ʹ��pwm_ris_11ԭʼ�ж��ź�
                                                      0��ʹ����Ч
                                                      1��ʹ����Ч
                                                      ͨ���궨��`PWM_INCLUDE_INT��`PWM_CH_NUM�ɹر� */
        unsigned int  pwm_int_en_12 : 1;  /* bit[28]: ʹ��pwm_ris_12ԭʼ�ж��ź�
                                                      0��ʹ����Ч
                                                      1��ʹ����Ч
                                                      ͨ���궨��`PWM_INCLUDE_INT��`PWM_CH_NUM�ɹر� */
        unsigned int  pwm_int_en_13 : 1;  /* bit[29]: ʹ��pwm_ris_13ԭʼ�ж��ź�
                                                      0��ʹ����Ч
                                                      1��ʹ����Ч
                                                      ͨ���궨��`PWM_INCLUDE_INT��`PWM_CH_NUM�ɹر� */
        unsigned int  pwm_int_en_14 : 1;  /* bit[30]: ʹ��pwm_ris_14ԭʼ�ж��ź�
                                                      0��ʹ����Ч
                                                      1��ʹ����Ч
                                                      ͨ���궨��`PWM_INCLUDE_INT��`PWM_CH_NUM�ɹر� */
        unsigned int  pwm_int_en_15 : 1;  /* bit[31]: ʹ��pwm_ris_15ԭʼ�ж��ź�
                                                      0��ʹ����Ч
                                                      1��ʹ����Ч
                                                      ͨ���궨��`PWM_INCLUDE_INT��`PWM_CH_NUM�ɹر� */
    } reg;
} SOC_PWM_CFG_UNION;
#endif
#define SOC_PWM_CFG_pwm_mode_0_START     (0)
#define SOC_PWM_CFG_pwm_mode_0_END       (0)
#define SOC_PWM_CFG_pwm_oen_0_START      (1)
#define SOC_PWM_CFG_pwm_oen_0_END        (1)
#define SOC_PWM_CFG_pwm_mode_1_START     (2)
#define SOC_PWM_CFG_pwm_mode_1_END       (2)
#define SOC_PWM_CFG_pwm_oen_1_START      (3)
#define SOC_PWM_CFG_pwm_oen_1_END        (3)
#define SOC_PWM_CFG_pwm_mode_2_START     (4)
#define SOC_PWM_CFG_pwm_mode_2_END       (4)
#define SOC_PWM_CFG_pwm_oen_2_START      (5)
#define SOC_PWM_CFG_pwm_oen_2_END        (5)
#define SOC_PWM_CFG_pwm_mode_3_START     (6)
#define SOC_PWM_CFG_pwm_mode_3_END       (6)
#define SOC_PWM_CFG_pwm_oen_3_START      (7)
#define SOC_PWM_CFG_pwm_oen_3_END        (7)
#define SOC_PWM_CFG_pwm_mode_4_START     (8)
#define SOC_PWM_CFG_pwm_mode_4_END       (8)
#define SOC_PWM_CFG_pwm_oen_4_START      (9)
#define SOC_PWM_CFG_pwm_oen_4_END        (9)
#define SOC_PWM_CFG_pwm_mode_5_START     (10)
#define SOC_PWM_CFG_pwm_mode_5_END       (10)
#define SOC_PWM_CFG_pwm_oen_5_START      (11)
#define SOC_PWM_CFG_pwm_oen_5_END        (11)
#define SOC_PWM_CFG_pwm_mode_6_START     (12)
#define SOC_PWM_CFG_pwm_mode_6_END       (12)
#define SOC_PWM_CFG_pwm_oen_6_START      (13)
#define SOC_PWM_CFG_pwm_oen_6_END        (13)
#define SOC_PWM_CFG_pwm_mode_7_START     (14)
#define SOC_PWM_CFG_pwm_mode_7_END       (14)
#define SOC_PWM_CFG_pwm_oen_7_START      (15)
#define SOC_PWM_CFG_pwm_oen_7_END        (15)
#define SOC_PWM_CFG_pwm_int_en_0_START   (16)
#define SOC_PWM_CFG_pwm_int_en_0_END     (16)
#define SOC_PWM_CFG_pwm_int_en_1_START   (17)
#define SOC_PWM_CFG_pwm_int_en_1_END     (17)
#define SOC_PWM_CFG_pwm_int_en_2_START   (18)
#define SOC_PWM_CFG_pwm_int_en_2_END     (18)
#define SOC_PWM_CFG_pwm_int_en_3_START   (19)
#define SOC_PWM_CFG_pwm_int_en_3_END     (19)
#define SOC_PWM_CFG_pwm_int_en_4_START   (20)
#define SOC_PWM_CFG_pwm_int_en_4_END     (20)
#define SOC_PWM_CFG_pwm_int_en_5_START   (21)
#define SOC_PWM_CFG_pwm_int_en_5_END     (21)
#define SOC_PWM_CFG_pwm_int_en_6_START   (22)
#define SOC_PWM_CFG_pwm_int_en_6_END     (22)
#define SOC_PWM_CFG_pwm_int_en_7_START   (23)
#define SOC_PWM_CFG_pwm_int_en_7_END     (23)
#define SOC_PWM_CFG_pwm_int_en_8_START   (24)
#define SOC_PWM_CFG_pwm_int_en_8_END     (24)
#define SOC_PWM_CFG_pwm_int_en_9_START   (25)
#define SOC_PWM_CFG_pwm_int_en_9_END     (25)
#define SOC_PWM_CFG_pwm_int_en_10_START  (26)
#define SOC_PWM_CFG_pwm_int_en_10_END    (26)
#define SOC_PWM_CFG_pwm_int_en_11_START  (27)
#define SOC_PWM_CFG_pwm_int_en_11_END    (27)
#define SOC_PWM_CFG_pwm_int_en_12_START  (28)
#define SOC_PWM_CFG_pwm_int_en_12_END    (28)
#define SOC_PWM_CFG_pwm_int_en_13_START  (29)
#define SOC_PWM_CFG_pwm_int_en_13_END    (29)
#define SOC_PWM_CFG_pwm_int_en_14_START  (30)
#define SOC_PWM_CFG_pwm_int_en_14_END    (30)
#define SOC_PWM_CFG_pwm_int_en_15_START  (31)
#define SOC_PWM_CFG_pwm_int_en_15_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_PWM_LPIF_STATE_UNION
 �ṹ˵��  : LPIF_STATE �Ĵ����ṹ���塣��ַƫ����:0x020����ֵ:0x00000000�����:32
 �Ĵ���˵��: PWM�͹���״̬���Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pwm_lpif_state : 3;  /* bit[0-2] : �͹���״ָ̬ʾ��Ϣ
                                                         000��IDLE״̬��
                                                         001����������״̬��
                                                         010�����յ͹�������״̬��
                                                         011������͹���ȷ��״̬��
                                                         100���ܾ�����͹���״̬��
                                                         101���ȴ��˳��͹�������״̬��
                                                         110���ȴ�ȷ���˳��͹���״̬�� */
        unsigned int  reserved       : 29; /* bit[3-31]: ������ */
    } reg;
} SOC_PWM_LPIF_STATE_UNION;
#endif
#define SOC_PWM_LPIF_STATE_pwm_lpif_state_START  (0)
#define SOC_PWM_LPIF_STATE_pwm_lpif_state_END    (2)


/*****************************************************************************
 �ṹ��    : SOC_PWM_STATUS_UNION
 �ṹ˵��  : STATUS �Ĵ����ṹ���塣��ַƫ����:0x0024����ֵ:0x00000000�����:32
 �Ĵ���˵��: PWM����״̬�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pwm_status : 1;  /* bit[0]   : pwm����״̬�Ĵ���
                                                     0��pwm���У�
                                                     1��pwmæ�� */
        unsigned int  reserved   : 31; /* bit[1-31]: ������ */
    } reg;
} SOC_PWM_STATUS_UNION;
#endif
#define SOC_PWM_STATUS_pwm_status_START  (0)
#define SOC_PWM_STATUS_pwm_status_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_PWM_PR0_UNION
 �ṹ˵��  : PR0 �Ĵ����ṹ���塣��ַƫ����:0x0100����ֵ:0x00000000�����:32
 �Ĵ���˵��: PWMԤ��Ƶ0�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pwm_pr0  : 16; /* bit[0-15] : ������¼������Ƶ�Ԥ��Ƶ0ֵ�ô�С */
        unsigned int  reserved : 16; /* bit[16-31]: ������ */
    } reg;
} SOC_PWM_PR0_UNION;
#endif
#define SOC_PWM_PR0_pwm_pr0_START   (0)
#define SOC_PWM_PR0_pwm_pr0_END     (15)


/*****************************************************************************
 �ṹ��    : SOC_PWM_PR1_UNION
 �ṹ˵��  : PR1 �Ĵ����ṹ���塣��ַƫ����:0x0104����ֵ:0x00000000�����:32
 �Ĵ���˵��: PWMԤ��Ƶ1�Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pwm_pr1  : 16; /* bit[0-15] : ������¼������Ƶ�Ԥ��Ƶ1ֵ�ô�С */
        unsigned int  reserved : 16; /* bit[16-31]: ������ */
    } reg;
} SOC_PWM_PR1_UNION;
#endif
#define SOC_PWM_PR1_pwm_pr1_START   (0)
#define SOC_PWM_PR1_pwm_pr1_END     (15)


/*****************************************************************************
 �ṹ��    : SOC_PWM_PCNT0_UNION
 �ṹ˵��  : PCNT0 �Ĵ����ṹ���塣��ַƫ����:0x0108����ֵ:0x00000000�����:32
 �Ĵ���˵��: PWMԤ��Ƶ0�����Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pwm_pcnt1 : 16; /* bit[0-15] : ȫ�ָ�λ������λʱ���Ĵ�����ʼ������PWMģ��ʹ���ź���Чʱ���������Լ�1����������ƥ��Ԥ��Ƶ0ֵʱ����ֵ0���˼Ĵ���λ��1~32�궨��`PWM_PR_WIDTH���䣬��ͨ���궨��`PWM_INCLUDE_DE���йر� */
        unsigned int  reserved  : 16; /* bit[16-31]: ������ */
    } reg;
} SOC_PWM_PCNT0_UNION;
#endif
#define SOC_PWM_PCNT0_pwm_pcnt1_START  (0)
#define SOC_PWM_PCNT0_pwm_pcnt1_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_PWM_PCNT1_UNION
 �ṹ˵��  : PCNT1 �Ĵ����ṹ���塣��ַƫ����:0x010C����ֵ:0x00000000�����:32
 �Ĵ���˵��: PWMԤ��Ƶ1�����Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pwm_pcnt1 : 16; /* bit[0-15] : ȫ�ָ�λ������λʱ���Ĵ�����ʼ������PWMģ��ʹ���ź���Чʱ���������Լ�1����������ƥ��Ԥ��Ƶ0ֵʱ����ֵ0���˼Ĵ���λ��1~32�궨��`PWM_PR_WIDTH���䣬��ͨ���궨��`PWM_INCLUDE_DE���йر� */
        unsigned int  reserved  : 16; /* bit[16-31]: ������ */
    } reg;
} SOC_PWM_PCNT1_UNION;
#endif
#define SOC_PWM_PCNT1_pwm_pcnt1_START  (0)
#define SOC_PWM_PCNT1_pwm_pcnt1_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_PWM_RIS_UNION
 �ṹ˵��  : RIS �Ĵ����ṹ���塣��ַƫ����:0x200����ֵ:0x00000000�����:32
 �Ĵ���˵��: PWMԭʼ�жϼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pwm_ris_0  : 1;  /* bit[0]    : ��ͨ��0ƥ��Ĵ���0ƥ��ʱ�����ź���Ч
                                                      0�����ж�
                                                      1�������ж�
                                                      ���ݺ궨��`PWM_INCLUDE_INT���� */
        unsigned int  pwm_ris_1  : 1;  /* bit[1]    : ��ͨ��0ƥ��Ĵ���1ƥ��ʱ�����ź���Ч
                                                      0�����ж�
                                                      1�������ж�
                                                      ���ݺ궨��`PWM_INCLUDE_INT���� */
        unsigned int  pwm_ris_2  : 1;  /* bit[2]    : ��ͨ��1ƥ��Ĵ���0ƥ��ʱ�����ź���Ч
                                                      0�����ж�
                                                      1�������ж�
                                                      ���ݺ궨��`PWM_CH_NUM�Լ�`PWM_INCLUDE_INT���� */
        unsigned int  pwm_ris_3  : 1;  /* bit[3]    : ��ͨ��1ƥ��Ĵ���1ƥ��ʱ�����ź���Ч
                                                      0�����ж�
                                                      1�������ж�
                                                      ���ݺ궨��`PWM_CH_NUM�Լ�`PWM_INCLUDE_INT���� */
        unsigned int  pwm_ris_4  : 1;  /* bit[4]    : ��ͨ��2ƥ��Ĵ���0ƥ��ʱ�����ź���Ч
                                                      0�����ж�
                                                      1�������ж�
                                                      ���ݺ궨��`PWM_CH_NUM�Լ�`PWM_INCLUDE_INT���� */
        unsigned int  pwm_ris_5  : 1;  /* bit[5]    : ��ͨ��2ƥ��Ĵ���1ƥ��ʱ�����ź���Ч
                                                      0�����ж�
                                                      1�������ж�
                                                      ���ݺ궨��`PWM_CH_NUM�Լ�`PWM_INCLUDE_INT���� */
        unsigned int  pwm_ris_6  : 1;  /* bit[6]    : ��ͨ��3ƥ��Ĵ���0ƥ��ʱ�����ź���Ч
                                                      0�����ж�
                                                      1�������ж�
                                                      ���ݺ궨��`PWM_CH_NUM�Լ�`PWM_INCLUDE_INT���� */
        unsigned int  pwm_ris_7  : 1;  /* bit[7]    : ��ͨ��3ƥ��Ĵ���1ƥ��ʱ�����ź���Ч
                                                      0�����ж�
                                                      1�������ж�
                                                      ���ݺ궨��`PWM_CH_NUM�Լ�`PWM_INCLUDE_INT���� */
        unsigned int  pwm_ris_8  : 1;  /* bit[8]    : ��ͨ��4ƥ��Ĵ���0ƥ��ʱ�����ź���Ч
                                                      0�����ж�
                                                      1�������ж�
                                                      ���ݺ궨��`PWM_CH_NUM�Լ�`PWM_INCLUDE_INT���� */
        unsigned int  pwm_ris_9  : 1;  /* bit[9]    : ��ͨ��4ƥ��Ĵ���1ƥ��ʱ�����ź���Ч
                                                      0�����ж�
                                                      1�������ж�
                                                      ���ݺ궨��`PWM_CH_NUM�Լ�`PWM_INCLUDE_INT���� */
        unsigned int  pwm_ris_10 : 1;  /* bit[10]   : ��ͨ��5ƥ��Ĵ���0ƥ��ʱ�����ź���Ч
                                                      0�����ж�
                                                      1�������ж�
                                                      ���ݺ궨��`PWM_CH_NUM�Լ�`PWM_INCLUDE_INT���� */
        unsigned int  pwm_ris_11 : 1;  /* bit[11]   : ��ͨ��5ƥ��Ĵ���1ƥ��ʱ�����ź���Ч
                                                      0�����ж�
                                                      1�������ж�
                                                      ���ݺ궨��`PWM_CH_NUM�Լ�`PWM_INCLUDE_INT���� */
        unsigned int  pwm_ris_12 : 1;  /* bit[12]   : ��ͨ��6ƥ��Ĵ���0ƥ��ʱ�����ź���Ч
                                                      0�����ж�
                                                      1�������ж�
                                                      ���ݺ궨��`PWM_CH_NUM�Լ�`PWM_INCLUDE_INT���� */
        unsigned int  pwm_ris_13 : 1;  /* bit[13]   : ��ͨ��6ƥ��Ĵ���1ƥ��ʱ�����ź���Ч
                                                      0�����ж�
                                                      1�������ж�
                                                      ���ݺ궨��`PWM_CH_NUM�Լ�`PWM_INCLUDE_INT���� */
        unsigned int  pwm_ris_14 : 1;  /* bit[14]   : ��ͨ��7ƥ��Ĵ���0ƥ��ʱ�����ź���Ч
                                                      0�����ж�
                                                      1�������ж�
                                                      ���ݺ궨��`PWM_CH_NUM�Լ�`PWM_INCLUDE_INT���� */
        unsigned int  pwm_ris_15 : 1;  /* bit[15]   : ��ͨ��7ƥ��Ĵ���1ƥ��ʱ�����ź���Ч
                                                      0�����ж�
                                                      1�������ж�
                                                      ���ݺ궨��`PWM_CH_NUM�Լ�`PWM_INCLUDE_INT���� */
        unsigned int  reserved   : 16; /* bit[16-31]: ���� */
    } reg;
} SOC_PWM_RIS_UNION;
#endif
#define SOC_PWM_RIS_pwm_ris_0_START   (0)
#define SOC_PWM_RIS_pwm_ris_0_END     (0)
#define SOC_PWM_RIS_pwm_ris_1_START   (1)
#define SOC_PWM_RIS_pwm_ris_1_END     (1)
#define SOC_PWM_RIS_pwm_ris_2_START   (2)
#define SOC_PWM_RIS_pwm_ris_2_END     (2)
#define SOC_PWM_RIS_pwm_ris_3_START   (3)
#define SOC_PWM_RIS_pwm_ris_3_END     (3)
#define SOC_PWM_RIS_pwm_ris_4_START   (4)
#define SOC_PWM_RIS_pwm_ris_4_END     (4)
#define SOC_PWM_RIS_pwm_ris_5_START   (5)
#define SOC_PWM_RIS_pwm_ris_5_END     (5)
#define SOC_PWM_RIS_pwm_ris_6_START   (6)
#define SOC_PWM_RIS_pwm_ris_6_END     (6)
#define SOC_PWM_RIS_pwm_ris_7_START   (7)
#define SOC_PWM_RIS_pwm_ris_7_END     (7)
#define SOC_PWM_RIS_pwm_ris_8_START   (8)
#define SOC_PWM_RIS_pwm_ris_8_END     (8)
#define SOC_PWM_RIS_pwm_ris_9_START   (9)
#define SOC_PWM_RIS_pwm_ris_9_END     (9)
#define SOC_PWM_RIS_pwm_ris_10_START  (10)
#define SOC_PWM_RIS_pwm_ris_10_END    (10)
#define SOC_PWM_RIS_pwm_ris_11_START  (11)
#define SOC_PWM_RIS_pwm_ris_11_END    (11)
#define SOC_PWM_RIS_pwm_ris_12_START  (12)
#define SOC_PWM_RIS_pwm_ris_12_END    (12)
#define SOC_PWM_RIS_pwm_ris_13_START  (13)
#define SOC_PWM_RIS_pwm_ris_13_END    (13)
#define SOC_PWM_RIS_pwm_ris_14_START  (14)
#define SOC_PWM_RIS_pwm_ris_14_END    (14)
#define SOC_PWM_RIS_pwm_ris_15_START  (15)
#define SOC_PWM_RIS_pwm_ris_15_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_PWM_MSK_UNION
 �ṹ˵��  : MSK �Ĵ����ṹ���塣��ַƫ����:0x204����ֵ:0x00000000�����:32
 �Ĵ���˵��: PWM�ж����μĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pwm_msk0  : 1;  /* bit[0]    : ����pwm_ris_0ԭʼ�ж��ź�
                                                     1�������ж�
                                                     0��δ����
                                                     ͨ���궨��`PWM_INCLUDE_INT�ɹر� */
        unsigned int  pwm_msk1  : 1;  /* bit[1]    : ����pwm_ris_1ԭʼ�ж��ź�
                                                     1�������ж�
                                                     0��δ����
                                                     ͨ���궨��`PWM_INCLUDE_INT��`PWM_CH_NUM�ɹر� */
        unsigned int  pwm_msk2  : 1;  /* bit[2]    : ����pwm_ris_2ԭʼ�ж��ź�
                                                     1�������ж�
                                                     0��δ����
                                                     ͨ���궨��`PWM_INCLUDE_INT��`PWM_CH_NUM�ɹر� */
        unsigned int  pwm_msk3  : 1;  /* bit[3]    : ����pwm_ris_3ԭʼ�ж��ź�
                                                     1�������ж�
                                                     0��δ����
                                                     ͨ���궨��`PWM_INCLUDE_INT��`PWM_CH_NUM�ɹر� */
        unsigned int  pwm_msk4  : 1;  /* bit[4]    : ����pwm_ris_4ԭʼ�ж��ź�
                                                     1�������ж�
                                                     0��δ����
                                                     ͨ���궨��`PWM_INCLUDE_INT��`PWM_CH_NUM�ɹر� */
        unsigned int  pwm_msk5  : 1;  /* bit[5]    : ����pwm_ris_5ԭʼ�ж��ź�
                                                     1�������ж�
                                                     0��δ����
                                                     ͨ���궨��`PWM_INCLUDE_INT��`PWM_CH_NUM�ɹر� */
        unsigned int  pwm_msk6  : 1;  /* bit[6]    : ����pwm_ris_6ԭʼ�ж��ź�
                                                     1�������ж�
                                                     0��δ����
                                                     ͨ���궨��`PWM_INCLUDE_INT��`PWM_CH_NUM�ɹر� */
        unsigned int  pwm_msk7  : 1;  /* bit[7]    : ����pwm_ris_7ԭʼ�ж��ź�
                                                     1�������ж�
                                                     0��δ����
                                                     ͨ���궨��`PWM_INCLUDE_INT��`PWM_CH_NUM�ɹر� */
        unsigned int  pwm_msk8  : 1;  /* bit[8]    : ����pwm_ris_8ԭʼ�ж��ź�
                                                     1�������ж�
                                                     0��δ����
                                                     ͨ���궨��`PWM_INCLUDE_INT��`PWM_CH_NUM�ɹر� */
        unsigned int  pwm_msk9  : 1;  /* bit[9]    : ����pwm_ris_9ԭʼ�ж��ź�
                                                     1�������ж�
                                                     0��δ����
                                                     ͨ���궨��`PWM_INCLUDE_INT��`PWM_CH_NUM�ɹر� */
        unsigned int  pwm_msk10 : 1;  /* bit[10]   : ����pwm_ris_10ԭʼ�ж��ź�
                                                     1�������ж�
                                                     0��δ����
                                                     ͨ���궨��`PWM_INCLUDE_INT��`PWM_CH_NUM�ɹر� */
        unsigned int  pwm_msk11 : 1;  /* bit[11]   : ����pwm_ris_11ԭʼ�ж��ź�
                                                     1�������ж�
                                                     0��δ����
                                                     ͨ���궨��`PWM_INCLUDE_INT��`PWM_CH_NUM�ɹر� */
        unsigned int  pwm_msk12 : 1;  /* bit[12]   : ����pwm_ris_12ԭʼ�ж��ź�
                                                     1�������ж�
                                                     0��δ����
                                                     ͨ���궨��`PWM_INCLUDE_INT��`PWM_CH_NUM�ɹر� */
        unsigned int  pwm_msk13 : 1;  /* bit[13]   : ����pwm_ris_13ԭʼ�ж��ź�
                                                     1�������ж�
                                                     0��δ����
                                                     ͨ���궨��`PWM_INCLUDE_INT��`PWM_CH_NUM�ɹر� */
        unsigned int  pwm_msk14 : 1;  /* bit[14]   : ����pwm_ris_14ԭʼ�ж��ź�
                                                     1�������ж�
                                                     0��δ����
                                                     ͨ���궨��`PWM_INCLUDE_INT��`PWM_CH_NUM�ɹر� */
        unsigned int  pwm_msk15 : 1;  /* bit[15]   : ����pwm_ris_15ԭʼ�ж��ź�
                                                     1�������ж�
                                                     0��δ����
                                                     ͨ���궨��`PWM_INCLUDE_INT��`PWM_CH_NUM�ɹر� */
        unsigned int  reserved  : 16; /* bit[16-31]: ���� */
    } reg;
} SOC_PWM_MSK_UNION;
#endif
#define SOC_PWM_MSK_pwm_msk0_START   (0)
#define SOC_PWM_MSK_pwm_msk0_END     (0)
#define SOC_PWM_MSK_pwm_msk1_START   (1)
#define SOC_PWM_MSK_pwm_msk1_END     (1)
#define SOC_PWM_MSK_pwm_msk2_START   (2)
#define SOC_PWM_MSK_pwm_msk2_END     (2)
#define SOC_PWM_MSK_pwm_msk3_START   (3)
#define SOC_PWM_MSK_pwm_msk3_END     (3)
#define SOC_PWM_MSK_pwm_msk4_START   (4)
#define SOC_PWM_MSK_pwm_msk4_END     (4)
#define SOC_PWM_MSK_pwm_msk5_START   (5)
#define SOC_PWM_MSK_pwm_msk5_END     (5)
#define SOC_PWM_MSK_pwm_msk6_START   (6)
#define SOC_PWM_MSK_pwm_msk6_END     (6)
#define SOC_PWM_MSK_pwm_msk7_START   (7)
#define SOC_PWM_MSK_pwm_msk7_END     (7)
#define SOC_PWM_MSK_pwm_msk8_START   (8)
#define SOC_PWM_MSK_pwm_msk8_END     (8)
#define SOC_PWM_MSK_pwm_msk9_START   (9)
#define SOC_PWM_MSK_pwm_msk9_END     (9)
#define SOC_PWM_MSK_pwm_msk10_START  (10)
#define SOC_PWM_MSK_pwm_msk10_END    (10)
#define SOC_PWM_MSK_pwm_msk11_START  (11)
#define SOC_PWM_MSK_pwm_msk11_END    (11)
#define SOC_PWM_MSK_pwm_msk12_START  (12)
#define SOC_PWM_MSK_pwm_msk12_END    (12)
#define SOC_PWM_MSK_pwm_msk13_START  (13)
#define SOC_PWM_MSK_pwm_msk13_END    (13)
#define SOC_PWM_MSK_pwm_msk14_START  (14)
#define SOC_PWM_MSK_pwm_msk14_END    (14)
#define SOC_PWM_MSK_pwm_msk15_START  (15)
#define SOC_PWM_MSK_pwm_msk15_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_PWM_EOI_UNION
 �ṹ˵��  : EOI �Ĵ����ṹ���塣��ַƫ����:0x208����ֵ:0x00000000�����:32
 �Ĵ���˵��: PWM�ж�����Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pwm_eoi_0  : 1;  /* bit[0]    : ���pwm_ris_0ԭʼ�ж��ź�
                                                      0��δ����
                                                      1������ж�
                                                      ͨ���궨��`PWM_INCLUDE_INT�ɹر� */
        unsigned int  pwm_eoi_1  : 1;  /* bit[1]    : ���pwm_ris_1ԭʼ�ж��ź�
                                                      0��δ����
                                                      1������ж�
                                                      ͨ���궨��`PWM_INCLUDE_INT�ɹر� */
        unsigned int  pwm_eoi_2  : 1;  /* bit[2]    : ���pwm_ris_2ԭʼ�ж��ź�
                                                      0��δ����
                                                      1������ж�
                                                      ͨ���궨��`PWM_INCLUDE_INT��`PWM_CH_NUM�ɹر� */
        unsigned int  pwm_eoi_3  : 1;  /* bit[3]    : ���pwm_ris_3ԭʼ�ж��ź�
                                                      0��δ����
                                                      1������ж�
                                                      ͨ���궨��`PWM_INCLUDE_INT��`PWM_CH_NUM�ɹر� */
        unsigned int  pwm_eoi_4  : 1;  /* bit[4]    : ���pwm_ris_4ԭʼ�ж��ź�
                                                      0��δ����
                                                      1������ж�
                                                      ͨ���궨��`PWM_INCLUDE_INT��`PWM_CH_NUM�ɹر� */
        unsigned int  pwm_eoi_5  : 1;  /* bit[5]    : ���pwm_ris_5ԭʼ�ж��ź�
                                                      0��δ����
                                                      1������ж�
                                                      ͨ���궨��`PWM_INCLUDE_INT��`PWM_CH_NUM�ɹر� */
        unsigned int  pwm_eoi_6  : 1;  /* bit[6]    : ���pwm_ris_6ԭʼ�ж��ź�
                                                      0��δ����
                                                      1������ж�
                                                      ͨ���궨��`PWM_INCLUDE_INT��`PWM_CH_NUM�ɹر� */
        unsigned int  pwm_eoi_7  : 1;  /* bit[7]    : ���pwm_ris_7ԭʼ�ж��ź�
                                                      0��δ����
                                                      1������ж�
                                                      ͨ���궨��`PWM_INCLUDE_INT��`PWM_CH_NUM�ɹر� */
        unsigned int  pwm_eoi_8  : 1;  /* bit[8]    : ���pwm_ris_8ԭʼ�ж��ź�
                                                      0��δ����
                                                      1������ж�
                                                      ͨ���궨��`PWM_INCLUDE_INT��`PWM_CH_NUM�ɹر� */
        unsigned int  pwm_eoi_9  : 1;  /* bit[9]    : ���pwm_ris_9ԭʼ�ж��ź�
                                                      0��δ����
                                                      1������ж�
                                                      ͨ���궨��`PWM_INCLUDE_INT��`PWM_CH_NUM�ɹر� */
        unsigned int  pwm_eoi_10 : 1;  /* bit[10]   : ���pwm_ris_10ԭʼ�ж��ź�
                                                      0��δ����
                                                      1������ж�
                                                      ͨ���궨��`PWM_INCLUDE_INT��`PWM_CH_NUM�ɹر� */
        unsigned int  pwm_eoi_11 : 1;  /* bit[11]   : ���pwm_ris_11ԭʼ�ж��ź�
                                                      0��δ����
                                                      1������ж�
                                                      ͨ���궨��`PWM_INCLUDE_INT��`PWM_CH_NUM�ɹر� */
        unsigned int  pwm_eoi_12 : 1;  /* bit[12]   : ���pwm_ris_12ԭʼ�ж��ź�
                                                      0��δ����
                                                      1������ж�
                                                      ͨ���궨��`PWM_INCLUDE_INT��`PWM_CH_NUM�ɹر� */
        unsigned int  pwm_eoi_13 : 1;  /* bit[13]   : ���pwm_ris_13ԭʼ�ж��ź�
                                                      0��δ����
                                                      1������ж�
                                                      ͨ���궨��`PWM_INCLUDE_INT��`PWM_CH_NUM�ɹر� */
        unsigned int  pwm_eoi_14 : 1;  /* bit[14]   : ���pwm_ris_14ԭʼ�ж��ź�
                                                      0��δ����
                                                      1������ж�
                                                      ͨ���궨��`PWM_INCLUDE_INT��`PWM_CH_NUM�ɹر� */
        unsigned int  pwm_eoi_15 : 1;  /* bit[15]   : ���pwm_ris_15ԭʼ�ж��ź�
                                                      0��δ����
                                                      1������ж�
                                                      ͨ���궨��`PWM_INCLUDE_INT��`PWM_CH_NUM�ɹر� */
        unsigned int  reserved   : 16; /* bit[16-31]: ���� */
    } reg;
} SOC_PWM_EOI_UNION;
#endif
#define SOC_PWM_EOI_pwm_eoi_0_START   (0)
#define SOC_PWM_EOI_pwm_eoi_0_END     (0)
#define SOC_PWM_EOI_pwm_eoi_1_START   (1)
#define SOC_PWM_EOI_pwm_eoi_1_END     (1)
#define SOC_PWM_EOI_pwm_eoi_2_START   (2)
#define SOC_PWM_EOI_pwm_eoi_2_END     (2)
#define SOC_PWM_EOI_pwm_eoi_3_START   (3)
#define SOC_PWM_EOI_pwm_eoi_3_END     (3)
#define SOC_PWM_EOI_pwm_eoi_4_START   (4)
#define SOC_PWM_EOI_pwm_eoi_4_END     (4)
#define SOC_PWM_EOI_pwm_eoi_5_START   (5)
#define SOC_PWM_EOI_pwm_eoi_5_END     (5)
#define SOC_PWM_EOI_pwm_eoi_6_START   (6)
#define SOC_PWM_EOI_pwm_eoi_6_END     (6)
#define SOC_PWM_EOI_pwm_eoi_7_START   (7)
#define SOC_PWM_EOI_pwm_eoi_7_END     (7)
#define SOC_PWM_EOI_pwm_eoi_8_START   (8)
#define SOC_PWM_EOI_pwm_eoi_8_END     (8)
#define SOC_PWM_EOI_pwm_eoi_9_START   (9)
#define SOC_PWM_EOI_pwm_eoi_9_END     (9)
#define SOC_PWM_EOI_pwm_eoi_10_START  (10)
#define SOC_PWM_EOI_pwm_eoi_10_END    (10)
#define SOC_PWM_EOI_pwm_eoi_11_START  (11)
#define SOC_PWM_EOI_pwm_eoi_11_END    (11)
#define SOC_PWM_EOI_pwm_eoi_12_START  (12)
#define SOC_PWM_EOI_pwm_eoi_12_END    (12)
#define SOC_PWM_EOI_pwm_eoi_13_START  (13)
#define SOC_PWM_EOI_pwm_eoi_13_END    (13)
#define SOC_PWM_EOI_pwm_eoi_14_START  (14)
#define SOC_PWM_EOI_pwm_eoi_14_END    (14)
#define SOC_PWM_EOI_pwm_eoi_15_START  (15)
#define SOC_PWM_EOI_pwm_eoi_15_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_PWM_INT_UNION
 �ṹ˵��  : INT �Ĵ����ṹ���塣��ַƫ����:0x20C����ֵ:0x00000000�����:32
 �Ĵ���˵��: PWM���κ��жϼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pwm_imsk_0  : 1;  /* bit[0]    : ����pwm_imsk_0���κ��ж��ź�
                                                       1�������ж�
                                                       0��δ�����ж�
                                                       ͨ���궨��`PWM_INCLUDE_INT��`PWM_CH_NUM�ɹر� */
        unsigned int  pwm_imsk_1  : 1;  /* bit[1]    : ����pwm_imsk_1���κ��ж��ź�
                                                       1�������ж�
                                                       0��δ�����ж�
                                                       ͨ���궨��`PWM_INCLUDE_INT��`PWM_CH_NUM�ɹر� */
        unsigned int  pwm_imsk_2  : 1;  /* bit[2]    : ����pwm_imsk_2���κ��ж��ź�
                                                       1�������ж�
                                                       0��δ�����ж�
                                                       ͨ���궨��`PWM_INCLUDE_INT��`PWM_CH_NUM�ɹر� */
        unsigned int  pwm_imsk_3  : 1;  /* bit[3]    : ����pwm_imsk_3���κ��ж��ź�
                                                       1�������ж�
                                                       0��δ�����ж�
                                                       ͨ���궨��`PWM_INCLUDE_INT��`PWM_CH_NUM�ɹر� */
        unsigned int  pwm_imsk_4  : 1;  /* bit[4]    : ����pwm_imsk_4���κ��ж��ź�
                                                       1�������ж�
                                                       0��δ�����ж�
                                                       ͨ���궨��`PWM_INCLUDE_INT��`PWM_CH_NUM�ɹر� */
        unsigned int  pwm_imsk_5  : 1;  /* bit[5]    : ����pwm_imsk_5���κ��ж��ź�
                                                       1�������ж�
                                                       0��δ�����ж�
                                                       ͨ���궨��`PWM_INCLUDE_INT��`PWM_CH_NUM�ɹر� */
        unsigned int  pwm_imsk_6  : 1;  /* bit[6]    : ����pwm_imsk_6���κ��ж��ź�
                                                       1�������ж�
                                                       0��δ�����ж�
                                                       ͨ���궨��`PWM_INCLUDE_INT��`PWM_CH_NUM�ɹر� */
        unsigned int  pwm_imsk_7  : 1;  /* bit[7]    : ����pwm_imsk_7���κ��ж��ź�
                                                       1�������ж�
                                                       0��δ�����ж�
                                                       ͨ���궨��`PWM_INCLUDE_INT��`PWM_CH_NUM�ɹر� */
        unsigned int  pwm_imsk_8  : 1;  /* bit[8]    : ����pwm_imsk_8���κ��ж��ź�
                                                       1�������ж�
                                                       0��δ�����ж�
                                                       ͨ���궨��`PWM_INCLUDE_INT��`PWM_CH_NUM�ɹر� */
        unsigned int  pwm_imsk_9  : 1;  /* bit[9]    : ����pwm_imsk_9���κ��ж��ź�
                                                       1�������ж�
                                                       0��δ�����ж�
                                                       ͨ���궨��`PWM_INCLUDE_INT��`PWM_CH_NUM�ɹر� */
        unsigned int  pwm_imsk_10 : 1;  /* bit[10]   : ����pwm_imsk_10���κ��ж��ź�
                                                       1�������ж�
                                                       0��δ�����ж�
                                                       ͨ���궨��`PWM_INCLUDE_INT��`PWM_CH_NUM�ɹر� */
        unsigned int  pwm_imsk_11 : 1;  /* bit[11]   : ����pwm_imsk_11���κ��ж��ź�
                                                       1�������ж�
                                                       0��δ�����ж�
                                                       ͨ���궨��`PWM_INCLUDE_INT��`PWM_CH_NUM�ɹر� */
        unsigned int  pwm_imsk_12 : 1;  /* bit[12]   : ����pwm_imsk_12���κ��ж��ź�
                                                       1�������ж�
                                                       0��δ�����ж�
                                                       ͨ���궨��`PWM_INCLUDE_INT��`PWM_CH_NUM�ɹر� */
        unsigned int  pwm_imsk_13 : 1;  /* bit[13]   : ����pwm_imsk_13���κ��ж��ź�
                                                       1�������ж�
                                                       0��δ�����ж�
                                                       ͨ���궨��`PWM_INCLUDE_INT��`PWM_CH_NUM�ɹر� */
        unsigned int  pwm_imsk_14 : 1;  /* bit[14]   : ����pwm_imsk_14���κ��ж��ź�
                                                       1�������ж�
                                                       0��δ�����ж�
                                                       ͨ���궨��`PWM_INCLUDE_INT��`PWM_CH_NUM�ɹر� */
        unsigned int  pwm_imsk_15 : 1;  /* bit[15]   : ����pwm_imsk_15���κ��ж��ź�
                                                       1�������ж�
                                                       0��δ�����ж�
                                                       ͨ���궨��`PWM_INCLUDE_INT��`PWM_CH_NUM�ɹر� */
        unsigned int  reserved    : 16; /* bit[16-31]: ���� */
    } reg;
} SOC_PWM_INT_UNION;
#endif
#define SOC_PWM_INT_pwm_imsk_0_START   (0)
#define SOC_PWM_INT_pwm_imsk_0_END     (0)
#define SOC_PWM_INT_pwm_imsk_1_START   (1)
#define SOC_PWM_INT_pwm_imsk_1_END     (1)
#define SOC_PWM_INT_pwm_imsk_2_START   (2)
#define SOC_PWM_INT_pwm_imsk_2_END     (2)
#define SOC_PWM_INT_pwm_imsk_3_START   (3)
#define SOC_PWM_INT_pwm_imsk_3_END     (3)
#define SOC_PWM_INT_pwm_imsk_4_START   (4)
#define SOC_PWM_INT_pwm_imsk_4_END     (4)
#define SOC_PWM_INT_pwm_imsk_5_START   (5)
#define SOC_PWM_INT_pwm_imsk_5_END     (5)
#define SOC_PWM_INT_pwm_imsk_6_START   (6)
#define SOC_PWM_INT_pwm_imsk_6_END     (6)
#define SOC_PWM_INT_pwm_imsk_7_START   (7)
#define SOC_PWM_INT_pwm_imsk_7_END     (7)
#define SOC_PWM_INT_pwm_imsk_8_START   (8)
#define SOC_PWM_INT_pwm_imsk_8_END     (8)
#define SOC_PWM_INT_pwm_imsk_9_START   (9)
#define SOC_PWM_INT_pwm_imsk_9_END     (9)
#define SOC_PWM_INT_pwm_imsk_10_START  (10)
#define SOC_PWM_INT_pwm_imsk_10_END    (10)
#define SOC_PWM_INT_pwm_imsk_11_START  (11)
#define SOC_PWM_INT_pwm_imsk_11_END    (11)
#define SOC_PWM_INT_pwm_imsk_12_START  (12)
#define SOC_PWM_INT_pwm_imsk_12_END    (12)
#define SOC_PWM_INT_pwm_imsk_13_START  (13)
#define SOC_PWM_INT_pwm_imsk_13_END    (13)
#define SOC_PWM_INT_pwm_imsk_14_START  (14)
#define SOC_PWM_INT_pwm_imsk_14_END    (14)
#define SOC_PWM_INT_pwm_imsk_15_START  (15)
#define SOC_PWM_INT_pwm_imsk_15_END    (15)


/*****************************************************************************
 �ṹ��    : SOC_PWM_C0_MR_UNION
 �ṹ˵��  : C0_MR �Ĵ����ṹ���塣��ַƫ����:0x0300����ֵ:0x00000000�����:32
 �Ĵ���˵��: PWM����ƥ��Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pwm_c0_mr : 32; /* bit[0-31]: ������¼ͨ��0��ƥ��Ĵ�����ֵ�� */
    } reg;
} SOC_PWM_C0_MR_UNION;
#endif
#define SOC_PWM_C0_MR_pwm_c0_mr_START  (0)
#define SOC_PWM_C0_MR_pwm_c0_mr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_PWM_C1_MR_UNION
 �ṹ˵��  : C1_MR �Ĵ����ṹ���塣��ַƫ����:0x0400����ֵ:0x00000000�����:32
 �Ĵ���˵��: PWM����ƥ��Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pwm_c1_mr : 32; /* bit[0-31]: ������¼ͨ��1��ƥ��Ĵ�����ֵ�� */
    } reg;
} SOC_PWM_C1_MR_UNION;
#endif
#define SOC_PWM_C1_MR_pwm_c1_mr_START  (0)
#define SOC_PWM_C1_MR_pwm_c1_mr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_PWM_C0_MR0_UNION
 �ṹ˵��  : C0_MR0 �Ĵ����ṹ���塣��ַƫ����:0x0304����ֵ:0x00000000�����:32
 �Ĵ���˵��: PWM����ƥ��Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pwm_c0_mr0 : 32; /* bit[0-31]: ������¼ͨ��0��ƥ��Ĵ���0��ֵ�� */
    } reg;
} SOC_PWM_C0_MR0_UNION;
#endif
#define SOC_PWM_C0_MR0_pwm_c0_mr0_START  (0)
#define SOC_PWM_C0_MR0_pwm_c0_mr0_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_PWM_C1_MR0_UNION
 �ṹ˵��  : C1_MR0 �Ĵ����ṹ���塣��ַƫ����:0x0404����ֵ:0x00000000�����:32
 �Ĵ���˵��: PWM����ƥ��Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pwm_c1_mr0 : 32; /* bit[0-31]: ������¼ͨ��1��ƥ��Ĵ���0��ֵ�� */
    } reg;
} SOC_PWM_C1_MR0_UNION;
#endif
#define SOC_PWM_C1_MR0_pwm_c1_mr0_START  (0)
#define SOC_PWM_C1_MR0_pwm_c1_mr0_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_PWM_C0_MR1_UNION
 �ṹ˵��  : C0_MR1 �Ĵ����ṹ���塣��ַƫ����:0x0308����ֵ:0x00000000�����:32
 �Ĵ���˵��: PWM����ƥ��Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pwm_c0_mr1 : 32; /* bit[0-31]: ������¼ͨ��0��ƥ��Ĵ���1��ֵ�� */
    } reg;
} SOC_PWM_C0_MR1_UNION;
#endif
#define SOC_PWM_C0_MR1_pwm_c0_mr1_START  (0)
#define SOC_PWM_C0_MR1_pwm_c0_mr1_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_PWM_C1_MR1_UNION
 �ṹ˵��  : C1_MR1 �Ĵ����ṹ���塣��ַƫ����:0x0408����ֵ:0x00000000�����:32
 �Ĵ���˵��: PWM����ƥ��Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pwm_c1_mr1 : 32; /* bit[0-31]: ������¼ͨ��1��ƥ��Ĵ���1��ֵ�� */
    } reg;
} SOC_PWM_C1_MR1_UNION;
#endif
#define SOC_PWM_C1_MR1_pwm_c1_mr1_START  (0)
#define SOC_PWM_C1_MR1_pwm_c1_mr1_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_PWM_C0_TCNT_UNION
 �ṹ˵��  : C0_TCNT �Ĵ����ṹ���塣��ַƫ����:0x030C����ֵ:0x00000000�����:32
 �Ĵ���˵��: PWMͨ��0�Ķ�ʱ���Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pwm_c0_tcnt : 32; /* bit[0-31]: ȫ�ָ�λ������λʱ���Ĵ�����ʼ��������ʱ��ʹ���ź���Чʱ����ʱ���Լ�1��������ƥ��Ԥ��Ƶ0ֵʱ����ֵ0. */
    } reg;
} SOC_PWM_C0_TCNT_UNION;
#endif
#define SOC_PWM_C0_TCNT_pwm_c0_tcnt_START  (0)
#define SOC_PWM_C0_TCNT_pwm_c0_tcnt_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_PWM_C1_TCNT_UNION
 �ṹ˵��  : C1_TCNT �Ĵ����ṹ���塣��ַƫ����:0x040C����ֵ:0x00000000�����:32
 �Ĵ���˵��: PWMͨ��1�Ķ�ʱ���Ĵ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pwm_c1_tcnt : 32; /* bit[0-31]: ȫ�ָ�λ������λʱ���Ĵ�����ʼ��������ʱ��ʹ���ź���Чʱ����ʱ���Լ�1��������ƥ��Ԥ��Ƶ0ֵʱ����ֵ0. */
    } reg;
} SOC_PWM_C1_TCNT_UNION;
#endif
#define SOC_PWM_C1_TCNT_pwm_c1_tcnt_START  (0)
#define SOC_PWM_C1_TCNT_pwm_c1_tcnt_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_PWM_C0_PHA_UNION
 �ṹ˵��  : C0_PHA �Ĵ����ṹ���塣��ַƫ����:0x0310����ֵ:0x00000000�����:32
 �Ĵ���˵��: PWM������λ���üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pwm_ch0_pha : 32; /* bit[0-31]: ������¼ͨ��0����������λֵ�� */
    } reg;
} SOC_PWM_C0_PHA_UNION;
#endif
#define SOC_PWM_C0_PHA_pwm_ch0_pha_START  (0)
#define SOC_PWM_C0_PHA_pwm_ch0_pha_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_PWM_C1_PHA_UNION
 �ṹ˵��  : C1_PHA �Ĵ����ṹ���塣��ַƫ����:0x0410����ֵ:0x00000000�����:32
 �Ĵ���˵��: PWM������λ���üĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pwm_ch1_pha : 32; /* bit[0-31]: ������¼ͨ��1����������λֵ�� */
    } reg;
} SOC_PWM_C1_PHA_UNION;
#endif
#define SOC_PWM_C1_PHA_pwm_ch1_pha_START  (0)
#define SOC_PWM_C1_PHA_pwm_ch1_pha_END    (31)






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

#endif /* end of soc_pwm_interface.h */
