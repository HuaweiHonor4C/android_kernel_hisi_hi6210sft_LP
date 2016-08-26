

/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/

#ifndef __SOC_TIMER_INTERFACE_H__
#define __SOC_TIMER_INTERFACE_H__

#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif



/*****************************************************************************
  2 �궨��
*****************************************************************************/

/****************************************************************************
                     (1/1) register_TIMER
 ****************************************************************************/
/* �Ĵ���˵����TIMERn������ֵ�Ĵ����������Ŷ�ʱ���ļ�����ֵ��
            ����ʱ����������ģʽ�Ҽ���ֵ�ݼ���0ʱ����TIMERn_LOAD�Ĵ�����ֵ�����������������ֱ��д���Ĵ���ʱ���ڱ�TIMCLKENnʹ�ܵ���һ��TIMCLK�������أ���ʱ����ǰ�ļ�����������Ϊд��ֵ��
            TIMERn_LOAD����С��ЧֵΪ1�������TIMERn_LOAD�Ĵ���д0��������������ʱ�жϡ�
            ����TIMERn_BGLOAD�Ĵ���д��ֵʱ��TIMERn_LOAD�Ĵ�����ֵҲ�ᱻ���ǣ�����ʱ�������ĵ�ǰֵ�����ܵ�Ӱ�졣
            ���ڱ�TIMCLKENnʹ�ܵ�TIMCLK�źŵ������ص���֮ǰ����TIMERn_BGLOAD�Ĵ�����TIMERn_LOAD�Ĵ�����д��ֵ�����ڱ�TIMCLKENnʹ�ܵ�TIMCLK�źŵ���һ�������أ���ʱ��������ֵ���ȸ���ΪTIMERn_LOAD�Ĵ�����д��ֵ���˺�ÿ���������ݼ���0ʱ����ֵ����ΪTIMERn_BGLOAD�Ĵ�����TIMERn_LOAD�Ĵ��������д��ʱ��д��ֵ��
            �ڷֱ��TIMERn_BGLOAD�Ĵ�����TIMERn_LOAD�Ĵ�������������д��֮�󣬶�TIMERn_LOAD�Ĵ������ص�ֵΪTIMERn_BGLOAD�Ĵ�����д��ֵ����Ϊ����ģʽ�¼�������2�εݼ���0ʱ�������Чֵ��
   λ����UNION�ṹ:  SOC_TIMER_TIMERN_LOAD_UNION */
#define SOC_TIMER_TIMERN_LOAD_ADDR(base, n)           ((base) + (0x000+(0x20*(n))))

/* �Ĵ���˵����TIMERn��ǰ����ֵ�Ĵ�����
            ����TIMERn_LOAD�Ĵ�����д����������TIMERn_VALUE�Ĵ�����PCLKʱ�������̷�ӳ����������������ֵ������ȵ���һ����TIMCLKENnʹ�ܵ�TIMCLKʱ���ء�
   λ����UNION�ṹ:  SOC_TIMER_TIMERN_VALUE_UNION */
#define SOC_TIMER_TIMERN_VALUE_ADDR(base, n)          ((base) + (0x004+(0x20*(n))))

/* �Ĵ���˵������ʱ�����ƼĴ��������ڿ��ƶ�ʱ���Ĳ���ģʽ���жϵĲ�����
   λ����UNION�ṹ:  SOC_TIMER_TIMERN_CONTROL_UNION */
#define SOC_TIMER_TIMERN_CONTROL_ADDR(base, n)        ((base) + (0x008+(0x20*(n))))

/* �Ĵ���˵�����ж�����Ĵ������Ա��Ĵ������κ�д�����������Timer��ʱ�����жϡ�
   λ����UNION�ṹ:  SOC_TIMER_TIMERN_INTCLR_UNION */
#define SOC_TIMER_TIMERN_INTCLR_ADDR(base, n)         ((base) + (0x00C+(0x20*(n))))

/* �Ĵ���˵����ԭʼ�ж�״̬�Ĵ�����
   λ����UNION�ṹ:  SOC_TIMER_TIMERN_RIS_UNION */
#define SOC_TIMER_TIMERN_RIS_ADDR(base, n)            ((base) + (0x010+(0x20*(n))))

/* �Ĵ���˵�������κ��ж�״̬�Ĵ�����
   λ����UNION�ṹ:  SOC_TIMER_TIMERN_MIS_UNION */
#define SOC_TIMER_TIMERN_MIS_ADDR(base, n)            ((base) + (0x014+(0x20*(n))))

/* �Ĵ���˵��������ģʽ������ֵ�Ĵ�����
            ������ģʽ�£������Ĵ�����ֵ����ʱ��TIMERn_LOAD��ֵҲ��֮����Ϊ���Ĵ�����ֵ������Timer��ʱ���������¼��������ǵȵ��������ݼ�����֮�󣬽�TIMERn_LOAD�Ĵ�����ֵ�������Ĵ�����ֵ�����������������
            ���Ĵ����ṩ�˷���TIMERn_LOAD�Ĵ�������һ�ַ�������֮ͬ������д�뱾�Ĵ������ᵼ�¶�ʱ������װ��TIMERn_LOAD��ֵ�����¼�����
   λ����UNION�ṹ:  SOC_TIMER_TIMERN_BGLOAD_UNION */
#define SOC_TIMER_TIMERN_BGLOAD_ADDR(base)            ((base) + (0x018))





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
                     (1/1) register_TIMER
 ****************************************************************************/
/*****************************************************************************
 �ṹ��    : SOC_TIMER_TIMERN_LOAD_UNION
 �ṹ˵��  : TIMERN_LOAD �Ĵ����ṹ���塣��ַƫ����:0x000+(0x20*(n))����ֵ:0x00000000�����:32
 �Ĵ���˵��: TIMERn������ֵ�Ĵ����������Ŷ�ʱ���ļ�����ֵ��
            ����ʱ����������ģʽ�Ҽ���ֵ�ݼ���0ʱ����TIMERn_LOAD�Ĵ�����ֵ�����������������ֱ��д���Ĵ���ʱ���ڱ�TIMCLKENnʹ�ܵ���һ��TIMCLK�������أ���ʱ����ǰ�ļ�����������Ϊд��ֵ��
            TIMERn_LOAD����С��ЧֵΪ1�������TIMERn_LOAD�Ĵ���д0��������������ʱ�жϡ�
            ����TIMERn_BGLOAD�Ĵ���д��ֵʱ��TIMERn_LOAD�Ĵ�����ֵҲ�ᱻ���ǣ�����ʱ�������ĵ�ǰֵ�����ܵ�Ӱ�졣
            ���ڱ�TIMCLKENnʹ�ܵ�TIMCLK�źŵ������ص���֮ǰ����TIMERn_BGLOAD�Ĵ�����TIMERn_LOAD�Ĵ�����д��ֵ�����ڱ�TIMCLKENnʹ�ܵ�TIMCLK�źŵ���һ�������أ���ʱ��������ֵ���ȸ���ΪTIMERn_LOAD�Ĵ�����д��ֵ���˺�ÿ���������ݼ���0ʱ����ֵ����ΪTIMERn_BGLOAD�Ĵ�����TIMERn_LOAD�Ĵ��������д��ʱ��д��ֵ��
            �ڷֱ��TIMERn_BGLOAD�Ĵ�����TIMERn_LOAD�Ĵ�������������д��֮�󣬶�TIMERn_LOAD�Ĵ������ص�ֵΪTIMERn_BGLOAD�Ĵ�����д��ֵ����Ϊ����ģʽ�¼�������2�εݼ���0ʱ�������Чֵ��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  timer0_load : 32; /* bit[0-31]: Timern�ļ�����ֵ�� */
    } reg;
} SOC_TIMER_TIMERN_LOAD_UNION;
#endif
#define SOC_TIMER_TIMERN_LOAD_timer0_load_START  (0)
#define SOC_TIMER_TIMERN_LOAD_timer0_load_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_TIMER_TIMERN_VALUE_UNION
 �ṹ˵��  : TIMERN_VALUE �Ĵ����ṹ���塣��ַƫ����:0x004+(0x20*(n))����ֵ:0x00000000�����:32
 �Ĵ���˵��: TIMERn��ǰ����ֵ�Ĵ�����
            ����TIMERn_LOAD�Ĵ�����д����������TIMERn_VALUE�Ĵ�����PCLKʱ�������̷�ӳ����������������ֵ������ȵ���һ����TIMCLKENnʹ�ܵ�TIMCLKʱ���ء�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  timer0_value : 32; /* bit[0-31]: ���ڵݼ���TIMERn�ĵ�ǰֵ��
                                                       <B>ע�⣺����ʱ������16λģʽʱ��32λ��TIMERnValue�Ĵ����ĸ�16λ��δ���Զ���Ϊ0�����ö�ʱ��֮ǰ����32λģʽ�������Խ���16λģʽ��TIMERnLoad�Ĵ�����δ��д������TIMERnValue�Ĵ����ĸ�16λ���ܾ��з���ֵ��</B> */
    } reg;
} SOC_TIMER_TIMERN_VALUE_UNION;
#endif
#define SOC_TIMER_TIMERN_VALUE_timer0_value_START  (0)
#define SOC_TIMER_TIMERN_VALUE_timer0_value_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_TIMER_TIMERN_CONTROL_UNION
 �ṹ˵��  : TIMERN_CONTROL �Ĵ����ṹ���塣��ַƫ����:0x008+(0x20*(n))����ֵ:0x00000000�����:32
 �Ĵ���˵��: ��ʱ�����ƼĴ��������ڿ��ƶ�ʱ���Ĳ���ģʽ���жϵĲ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  oneshot   : 1;  /* bit[0]   : ѡ�����ģʽΪ���μ���ģʽ�������ڼ���ģʽ��
                                                    0�����ڼ���ģʽ����������ģʽ��
                                                    1�����μ���ģʽ�� */
        unsigned int  timersize : 1;  /* bit[1]   : ѡ��16bit/32bit����������ģʽ��
                                                    0��16bit��������
                                                    1��32bit�������� */
        unsigned int  timerpre  : 2;  /* bit[2-3] : ����Timer��Ԥ��Ƶ���ӡ�
                                                    00��������Ԥ��Ƶ��ʱ��Ƶ�ʳ���1��
                                                    01��4��Ԥ��Ƶ����Timerʱ��Ƶ�ʳ���16��
                                                    10��8��Ԥ��Ƶ����Timerʱ��Ƶ�ʳ���256��
                                                    11��δ���壬����Ϊ��ֵ���൱��8��Ԥ��Ƶ�� */
        unsigned int  reserved_0: 1;  /* bit[4]   : ������ */
        unsigned int  intenable : 1;  /* bit[5]   : TIMERx_RIS�ж����Ρ�
                                                    0�����Σ�
                                                    1�������Ρ� */
        unsigned int  timermode : 1;  /* bit[6]   : ��ʱ���ļ���ģʽ��
                                                    0����������ģʽ��
                                                    1������ģʽ�� */
        unsigned int  timeren   : 1;  /* bit[7]   : ��ʱ��ʹ�ܡ�
                                                    0����ֹ��
                                                    1��ʹ�ܡ� */
        unsigned int  reserved_1: 24; /* bit[8-31]: ������ */
    } reg;
} SOC_TIMER_TIMERN_CONTROL_UNION;
#endif
#define SOC_TIMER_TIMERN_CONTROL_oneshot_START    (0)
#define SOC_TIMER_TIMERN_CONTROL_oneshot_END      (0)
#define SOC_TIMER_TIMERN_CONTROL_timersize_START  (1)
#define SOC_TIMER_TIMERN_CONTROL_timersize_END    (1)
#define SOC_TIMER_TIMERN_CONTROL_timerpre_START   (2)
#define SOC_TIMER_TIMERN_CONTROL_timerpre_END     (3)
#define SOC_TIMER_TIMERN_CONTROL_intenable_START  (5)
#define SOC_TIMER_TIMERN_CONTROL_intenable_END    (5)
#define SOC_TIMER_TIMERN_CONTROL_timermode_START  (6)
#define SOC_TIMER_TIMERN_CONTROL_timermode_END    (6)
#define SOC_TIMER_TIMERN_CONTROL_timeren_START    (7)
#define SOC_TIMER_TIMERN_CONTROL_timeren_END      (7)


/*****************************************************************************
 �ṹ��    : SOC_TIMER_TIMERN_INTCLR_UNION
 �ṹ˵��  : TIMERN_INTCLR �Ĵ����ṹ���塣��ַƫ����:0x00C+(0x20*(n))����ֵ:0x00000000�����:32
 �Ĵ���˵��: �ж�����Ĵ������Ա��Ĵ������κ�д�����������Timer��ʱ�����жϡ�
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  timern_intclr : 1;  /* bit[0]   : �ж�����Ĵ���λ��
                                                        д1����жϣ�д0��Ӱ�졣 */
        unsigned int  timer0_intclr : 31; /* bit[1-31]: ������ */
    } reg;
} SOC_TIMER_TIMERN_INTCLR_UNION;
#endif
#define SOC_TIMER_TIMERN_INTCLR_timern_intclr_START  (0)
#define SOC_TIMER_TIMERN_INTCLR_timern_intclr_END    (0)
#define SOC_TIMER_TIMERN_INTCLR_timer0_intclr_START  (1)
#define SOC_TIMER_TIMERN_INTCLR_timer0_intclr_END    (31)


/*****************************************************************************
 �ṹ��    : SOC_TIMER_TIMERN_RIS_UNION
 �ṹ˵��  : TIMERN_RIS �Ĵ����ṹ���塣��ַƫ����:0x010+(0x20*(n))����ֵ:0x00000000�����:32
 �Ĵ���˵��: ԭʼ�ж�״̬�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  timernris : 1;  /* bit[0]   : ��ʱ���ؼ�������ԭʼ�ж�״̬��
                                                    0��δ����ԭʼ�жϣ�
                                                    1���Ѳ���ԭʼ�жϡ� */
        unsigned int  reserved  : 31; /* bit[1-31]: ������д����Ч����ʱ����0�� */
    } reg;
} SOC_TIMER_TIMERN_RIS_UNION;
#endif
#define SOC_TIMER_TIMERN_RIS_timernris_START  (0)
#define SOC_TIMER_TIMERN_RIS_timernris_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_TIMER_TIMERN_MIS_UNION
 �ṹ˵��  : TIMERN_MIS �Ĵ����ṹ���塣��ַƫ����:0x014+(0x20*(n))����ֵ:0x00000000�����:32
 �Ĵ���˵��: ���κ��ж�״̬�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  timernmis : 1;  /* bit[0]   : ��ʱ�������κ�ļ������ж�״̬��
                                                    0��δ�����жϣ�
                                                    1���Ѳ����жϡ� */
        unsigned int  reserved  : 31; /* bit[1-31]: ������ */
    } reg;
} SOC_TIMER_TIMERN_MIS_UNION;
#endif
#define SOC_TIMER_TIMERN_MIS_timernmis_START  (0)
#define SOC_TIMER_TIMERN_MIS_timernmis_END    (0)


/*****************************************************************************
 �ṹ��    : SOC_TIMER_TIMERN_BGLOAD_UNION
 �ṹ˵��  : TIMERN_BGLOAD �Ĵ����ṹ���塣��ַƫ����:0x018����ֵ:0x00000000�����:32
 �Ĵ���˵��: ����ģʽ������ֵ�Ĵ�����
            ������ģʽ�£������Ĵ�����ֵ����ʱ��TIMERn_LOAD��ֵҲ��֮����Ϊ���Ĵ�����ֵ������Timer��ʱ���������¼��������ǵȵ��������ݼ�����֮�󣬽�TIMERn_LOAD�Ĵ�����ֵ�������Ĵ�����ֵ�����������������
            ���Ĵ����ṩ�˷���TIMERn_LOAD�Ĵ�������һ�ַ�������֮ͬ������д�뱾�Ĵ������ᵼ�¶�ʱ������װ��TIMERn_LOAD��ֵ�����¼�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  timer0bgload : 32; /* bit[0-31]: TIMERn�ļ�����ֵ��
                                                       <B>ע�⣺��TIMERn_LOAD�Ĵ��������𣬾�����μ�TIMERn_LOAD�Ĵ�����������</B> */
    } reg;
} SOC_TIMER_TIMERN_BGLOAD_UNION;
#endif
#define SOC_TIMER_TIMERN_BGLOAD_timer0bgload_START  (0)
#define SOC_TIMER_TIMERN_BGLOAD_timer0bgload_END    (31)






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

#endif /* end of soc_timer_interface.h */
