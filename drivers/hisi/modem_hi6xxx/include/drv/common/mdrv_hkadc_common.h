#ifndef __MDRV_HKADC_COMMON_H__
#define __MDRV_HKADC_COMMON_H__
#ifdef __cplusplus
extern "C"
{
#endif

/*HKADC��ʱת��ģʽ*/
typedef enum tagHKADC_CONV_MODE_E
{
    HKADC_CONV_DELAY =0,
    HKADC_CONV_NO_DELAY,
    HKADC_CONV_BUTT
}HKADC_CONV_MODE_E;

typedef enum HKADC_TEMP_PROTECT_E
{
    HKADC_TEMP_TOP = 0,
    HKADC_TEMP_BATTERY = HKADC_TEMP_TOP,     /*0*/
    HKADC_TEMP_PA0,                          /*1*/
    HKADC_TEMP_PA1,                          /*2*/
    HKADC_TEMP_XO0,                        /*3*/
    HKADC_TEMP_XO0_LOW,                    /*4*/
    HKADC_TEMP_XO1,                        /*5*/
    HKADC_TEMP_XO1_LOW,                    /*6*/
    HKADC_TEMP_LCD,                          /*7*/
    HKADC_TEMP_SIM_CARD,                     /*8*/
    HKADC_TEMP_SYSTEMH,                      /*9*/
    HKADC_TEMP_SYSTEML,                      /*10*/
    HKADC_TEMP_BATT_ID,                      /*11*/
    HKADC_TEMP_CAMERA0_ID,                   /*12*/
    HKADC_TEMP_CAMERA1_ID,                   /*13*/
    HKADC_TEMP_CODEC,                        /*14*/
    HKADC_TEMP_CHARGER_ID,                   /*15*/
    HKADC_TEMP_BUTT
}HKADC_TEMP_PROTECT_E;


/*****************************************************************************
     *  �� �� ��  : mdrv_hkadc_get_temp
     *  ��������  :  ��ȡHKADCͨ���ĵ�ѹ���¶�ֵ��
     *  �������  :
     *
     *  �������  : ��
     *  �� �� ֵ  :  0         �����ɹ���
        *                           ����    ����ʧ�ܡ�
         *
     ******************************************************************************/
int mdrv_hkadc_get_temp (HKADC_TEMP_PROTECT_E enMode, unsigned short* pusVolt, short* psTemp, HKADC_CONV_MODE_E ulMode);


#ifdef __cplusplus
}
#endif
#endif
