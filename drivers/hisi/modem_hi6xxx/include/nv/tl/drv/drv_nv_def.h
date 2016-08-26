/******************************************************************************

    Copyright(C)2008,Hisilicon Co. LTD.

 ******************************************************************************
  File Name       :   drv_nv_def.h
  Description     :   DRV�����NV �ṹ�嶨��
  History         :
******************************************************************************/

#ifndef __DRV_NV_DEF_H__
#define __DRV_NV_DEF_H__

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


#define LDO_GPIO_MAX 2

#ifndef s8
typedef signed char s8;
#endif
#ifndef u8
typedef unsigned char u8;
#endif
#ifndef s16
typedef signed short s16;
#endif
#ifndef u16
typedef unsigned short u16;
#endif
#ifndef s32
typedef signed int s32;
#endif
#ifndef u32
typedef unsigned int u32;
#endif
#ifndef s64
typedef signed long long s64;
#endif
#ifndef u64
typedef unsigned long long u64;
#endif
/*******************************************************************/

/*****************************************************************************
 �ṹ��    : nv_protocol_base_type
 �ṹ˵��  : nv_protocol_base_type�ṹ ID= en_NV_Item_Modem_Log_Path 148
 			MBB��̬ modem log·��������������������̬��modem log·����
*****************************************************************************/
/*NV ID = 50018*/
#pragma pack(push)
#pragma pack(1)
	typedef struct
	{
		s32 	   nvStatus;
		s8		   nv_version_info[30];
	}NV_SW_VER_STRU;
#pragma pack(pop)	
/*END NV ID = 50018*/

typedef struct
{
   char  ucModemLogPath[32];
   char  modemLogRsv[4];
}NV_MODEM_LOG_PATH;



/*NV ID = 0xd109*/
/*ֵΪ1��Ϊ�򿪣�ֵΪ0��Ϊ�ر�*/
typedef struct
{
	s32 buck2_switch;    /*[0, 1]*/
}NV_PASTAR_BUCK2_SWITCH_STRU;
/*end NV ID = 0xd109*/

/*NV ID  = 0xd10b*/

typedef struct ST_PWC_SWITCH_STRU_S {

	/*����NV���ڵ͹��ĵ�������ƣ�������ЩBIT��ʱδ�ã�������ʱ�������Ϊ׼ȷ������*/
 	u32 deepsleep  :1; /*bit0*/
    u32 lightsleep :1; /*bit1*/
    u32 dfs        :1; /*bit2*/
    u32 hifi       :1; /*bit3*/
    u32 drxAbb     :1; /*bit4*/
    u32 drxZspCore :1; /*bit5*/
    u32 drxZspPll  :1; /*bit6*/
    u32 drxWLBbpPll  :1; /*bit7*/
    u32 drxGBbpPll   :1; /*bit8*/
    u32 drxRf      :1; /*bit9*/
    u32 drxPa      :1; /*bit10*/
    u32 drxGuBbpPd   :1; /*bit11*/
    u32 drxDspPd     :1; /*bit12*/
    u32 drxLBbpPd    :1; /*bit13*/
    u32 drxPmuEco    :1; /*bit14*/
    u32 drxPeriPd    :1; /*bit15*/
    u32 l2cache_mntn  :1; /*bit16*/
    u32 bugChk     :1; /*bit17*/
    u32 pmuSwitch     :1; /*bit18*/
    u32 drxLdsp      :1;  /*bit 19*/
    u32 matserTDSpd  :1; /*bit20*/
    u32 tdsClk    :1;  /*bit21*/
    u32 slaveTDSpd   :1; /*bit22*/
    u32 slow	     :1;/*bit23*/
    u32 reserved    :8; /*bit24-31*/

	/*����NV����DEBUG���µ�Ϳ�����*/
	u32 drx_pa0_pd       :1; /*bit0 ���ڿ���PA0�����µ�*/
    u32 drx_pa1_pd       :1; /*bit1 ���ڿ���PA1�����µ�*/
    u32 drx_rfic0_pd     :1; /*bit2 ���ڿ���RFIC0�����µ�*/
    u32 drx_rfic1_pd     :1; /*bit3 ���ڿ���RFIC1�����µ�*/
    u32 drx_irm_pd       :1; /*bit4 ���ڿ���BBP_IRM�����µ�*/
    u32 drx_bbe16_pd     :1; /*bit5 ���ڿ���BBE16�����µ�*/
    u32 drx_abb_pd       :1; /*bit6 ���ڿ���ABB�����µ�*/
    u32 drx_g1bbp_pd     :1; /*bit7 ���ڿ���G1_BBP�����µ�*/
    u32 drx_g2bbp_pd     :1; /*bit8 ���ڿ���G2_BBP�����µ�*/
    u32 drx_wbbp_pd      :1; /*bit9 ���ڿ���WBBP�����µ�*/
    u32 drx_bbpcommon_pd :1; /*bit10 ���ڿ���BBP_COMMON�����µ�*/
    u32 drx_twbbp_pd     :1; /*bit11 ���ڿ���TWBBP�����µ�*/
    u32 drx_bbe16_pll    :1; /*bit12 ���ڿ���BBE16_PLL�Ŀ�����*/
    u32 drx_bbp_pll      :1; /*bit13 ���ڿ���BBP_PLL�Ŀ�����*/
    u32 drx_abb0_wpll    :1; /*bit14 ���ڿ���ABB_CH0_WPLL�Ŀ�����*/
    u32 drx_abb0_gpll    :1; /*bit15 ���ڿ���ABB_CH0_GPLL�Ŀ�����*/
    u32 drx_abb1_wpll    :1; /*bit16 ���ڿ���ABB_CH1_WPLL�Ŀ�����*/
    u32 drx_abb1_gpll    :1; /*bit17 ���ڿ���ABB_CH1_GPLL�Ŀ�����*/
    u32 reserved2        :14; /*bit18-31 δ��*/
}ST_PWC_SWITCH_STRU;


/*NV ID = 0xd10c*/
typedef struct ST_PWC_DFS_STRU_S {
    u32 CcpuUpLimit;
	u32 CcpuDownLimit;
	u32 CcpuUpNum;
	u32 CcpuDownNum;
	u32 AcpuUpLimit;
	u32 AcpuDownLimit;
	u32 AcpuUpNum;
	u32 AcpuDownNum;
	u32 DFSTimerLen;
	u32 DFSHifiLoad;
 	u32 Strategy;/*ʹ�ú��ֲ���bit0:1->200ms���ؼ��,bit0:0->4s���ؼ��;bit1:1/0��/�رո���DDR��Ƶ*/
 	u32 DFSDdrUpLimit;
 	u32 DFSDdrDownLimit;
 	u32 DFSDdrprofile;
 	u32 reserved;
}ST_PWC_DFS_STRU;

/*NV ID = 0xd10f begin������PMU�����쳣ʱ�Ĵ�������*/
typedef struct
{
    u8  VoltId;         /*��Ҫ�������õĵ�ѹԴ��id��*/
    u8  VoltOcpIsOff;   /*���õ�ѹԴ�����Ļ��Ƿ�رո�·��ѹԴ*/
    u8  VoltOcpIsRst;   /*���õ�ѹԴ�����Ļ��Ƿ�����ϵͳ*/
    u8  VoltOtpIsOff;   /*��PMU������Ҫ�رշǺ��ĵ�Դ�Ļ����Ƿ��ܹرո�·��ѹԴ*/
} PMU_VOLT_PRO_STRU;
typedef struct
{
    u8    ulOcpIsOn;        /*�����ĵ�Դ�ܷ����´�:0:���ܱ����´򿪣�1:�ܱ����´򿪣�Ĭ��Ϊ���ܴ�--0*/
    u8    ulOcpIsOff;       /*�����ĵ�Դ�Ƿ�ر�:0:���رգ�1:�رգ�Ĭ��Ϊ�ر�--1*/
    u8    ulOtpCurIsOff;    /*����(�����¶�Ԥ��ֵ)ʱ�Ƿ�رշǺ��ĵ�Դ:0:���رշǺ��ģ�1:�رշǺ��ĵ�Դ��Ĭ��Ϊ�رշǺ��ĵ�Դ--1*/
    u8    ulOtpIsRst;       /*����(�����¶�Ԥ��ֵ)ʱ�Ƿ�����ϵͳ:0:��������1:����ϵͳ��Ĭ��Ϊ������ϵͳ--0*/

    u8    ulOtpIsOff;       /*PMUоƬ���³���150��ʱPMU�Ƿ��µ�(����ʱ������):0:PMU���µ磬1:PMU�µ硣Ĭ��ΪPMU�µ�--1*/
    u8    ulUvpIsRst;       /*ǷѹԤ��ʱ�Ƿ�����ϵͳ��Ĭ��Ϊ0:������*/
    u16   reserved2;

    u16   ulOtpLimit;       /*�¶�Ԥ����ֵ����:105:105�棬115:115�棬125:125�� ��135:135�� (HI6559����֧��135)��Ĭ��Ϊ125��--125 */
    u16   ulUvpLimit;       /*ǷѹԤ����ֵ���ã���λmv:3000:3v; 2700:2.7v(2850:2.85v.HI6559֧��2.85,HI6551֧��2.7) ��Ĭ��Ϊ3v--3000*/

    PMU_VOLT_PRO_STRU VoltProConfig[50];/*ÿ·��ѹԴ���쳣�����������ã���ͬ��Ʒ��̬��Ҫ�������õĵ�ѹԴ����*/
} PMU_EXC_PRO_NV_STRU;

/*NV ID = 0xd10f end*/

/*ID=0xd110*/
typedef struct
{
    u32    u32CalcTime;        /* ����ʱ������(10ms) */
    u32    u32PktNum;          /* �ۼư����� */
    u32    u32SwichFlag;       /* netif���������俪�� */
} NETIF_INIT_PARM_T;

/*ID=0xd111 begin */
typedef struct
{
    u32 dump_switch    : 2; /* 00: excdump, 01: usbdump, 1x: no dump */
    u32 ARMexc         : 1; /* 2 ARM�쳣��⿪��*/
    u32 stackFlow      : 1; /* 3 ��ջ�����⿪��*/
    u32 taskSwitch     : 1; /* 4 �����л���¼����*/
    u32 intSwitch      : 1; /* 5 �жϼ�¼����*/
    u32 intLock        : 1; /* 6 ���жϼ�¼����*/
    u32 appRegSave1    : 1; /* 7 �Ĵ�����1��¼���� */
    u32 appRegSave2    : 1; /* 8 �Ĵ�����2��¼����*/
    u32 appRegSave3    : 1; /* 9 �Ĵ�����3��¼����*/
    u32 commRegSave1   : 1; /* 10 �Ĵ�����1��¼���� */
    u32 commRegSave2   : 1; /* 11 �Ĵ�����2��¼����*/
    u32 commRegSave3   : 1; /* 12 �Ĵ�����3��¼����*/
    u32 sysErrReboot   : 1; /* 13 systemError��λ����*/
    u32 reset_log      : 1; /* 14 ǿ�Ƽ�¼���أ���δʹ��*/
    u32 fetal_err      : 1; /* 15 ǿ�Ƽ�¼���أ���δʹ��*/
	u32 log_ctrl       : 2; /* bsp_trsce �������*/
    u32 reserved1      : 14;
} DUMP_CFG_STRU;

typedef struct
{
    union
    {
        u32         uintValue;
        DUMP_CFG_STRU   cfg;
    } dumpCfg;

    u32 appRegAddr1;	/* ACORE����Ĵ������ַ1*/
    u32 appRegSize1;	/* ACORE����Ĵ����鳤��1*/
    u32 appRegAddr2;	/* ACORE����Ĵ������ַ2*/
    u32 appRegSize2;	/* ACORE����Ĵ����鳤��2*/
    u32 appRegAddr3;	/* ACORE����Ĵ������ַ3*/
    u32 appRegSize3;	/* ACORE����Ĵ����鳤��3*/

    u32 commRegAddr1;	/* CCORE����Ĵ������ַ1*/
    u32 commRegSize1;	/* CCORE����Ĵ����鳤��1*/
    u32 commRegAddr2;	/* CCORE����Ĵ������ַ2*/
    u32 commRegSize2;	/* CCORE����Ĵ����鳤��2*/
    u32 commRegAddr3;	/* CCORE����Ĵ������ַ3*/
    u32 commRegSize3;	/* CCORE����Ĵ����鳤��3*/

    u32 traceOnstartFlag;           /* 0:��������Trace, ��0:����������Trace */
    u32 traceCoreSet;               /* 0:�ɼ�A��Trace, 1:�ɼ�C��Trace, 2:�ɼ�˫��Trace */
    u32 BusErrorFlagSet;             /* 0:���������������߹�������, ��0:�������������߹������� */
} NV_DUMP_STRU;
/*ID=0xd111 end */

/*NV ID = 0xd114 begin,����PMU��ʼ��ʱӦ�������ʵ�ֵĻ�������*/
#define NUM_OF_PMU_NV  50
typedef struct
{
    u8  VoltId;     /*��Դid��*/
    u8  IsNeedSet;  /*�Ƿ���Ҫ�������:0:����Ҫ��1:��Ҫ*/
    u8  IsOnSet;    /*Ĭ���Ƿ���Ҫ������ѹԴ:0:����Ҫ��1:��Ҫ*/
    u8  IsOffSet;   /*Ĭ���Ƿ���Ҫ�رյ�ѹԴ:0:����Ҫ��1:��Ҫ*/

    u8  IsVoltSet;  /*�Ƿ���Ҫ���õ�ѹ:0:����Ҫ��1:��Ҫ*/
    u8  IsEcoSet;   /*�Ƿ���Ҫ����ECOģʽ:0:����Ҫ��1:��Ҫ*/
    u8  EcoMod;     /*��Ҫ���õ�ecoģʽ:0:normal;2:force_eco;3:follow_eco*/
    u8  reserved3;  /*Ĭ��*/

    u32 Voltage;    /*��Ҫ���õ�Ĭ�ϵ�ѹ*/
} PMU_INIT_CON_STRU;
typedef struct
{
    PMU_INIT_CON_STRU InitConfig[NUM_OF_PMU_NV];
} PMU_INIT_NV_STRU;
/*NV ID = 0xd114 end*/

/*NV ID = 0xd115 start*/

typedef struct {
    u32	index;           /*Ӳ���汾����ֵ(��汾��1+��汾��2)�����ֲ�ͬ��Ʒ*/
    u32	hwIdSub;        /*Ӳ���Ӱ汾�ţ����ֲ�Ʒ�Ĳ�ͬ�İ汾*/
	char  name[32];           /*�ڲ���Ʒ��*/
    char	namePlus[32];       /*�ڲ���Ʒ��PLUS*/
    char	hwVer[32];          /*Ӳ���汾����*/
    char	dloadId[32];        /*������ʹ�õ�����*/
    char	productId[32];      /*�ⲿ��Ʒ��*/
}PRODUCT_INFO_NV_STRU;

/*NV ID =0xd115 end*/

/*NV ID =0xd116 start,mipi0_chn*/
typedef struct{
	u32 mipi_chn;
}MIPI0_CHN_STRU;
/*NV ID =0xd116 end,mipi0_chn*/

/*NV ID =0xd117 start,mipi1_chn*/
typedef struct{
	u32 mipi_chn;
}MIPI1_CHN_STRU;
/*NV ID =0xd117 end,mipi1_chn*/

/*NV ID =0xd12e start, rf power control, pastar config*/
typedef struct{
	u32 rfpower_m0;/*[0, 1,2]*//*modem0,����ͨ��0�Ĺ��絥Ԫ,valueΪ0��ʾ���򿪵�Դ��Ϊ1��ʾΪpastar���磬Ϊ2��ʾLDO����*/
	u32 rfpower_m1;/*[0, 1,2]*//*modem1,����ͨ��1�Ĺ��絥Ԫ,valueΪ0��ʾ���򿪵�Դ��Ϊ1��ʾΪpastar���磬Ϊ2��ʾLDO����*/
}NV_RFPOWER_UNIT_STRU;
/*NV ID =0xd12e start, pastar config*/

/* NV ID =0xd13A start, pa power control, pastar config */
typedef struct{
	u32 papower_m0;/*[0,1,2]*//*modem0,����ͨ��0�Ĺ��絥Ԫ,valueΪ0��ʾ���򿪵�Դ��Ϊ1��ʾΪpastar���磬Ϊ2��ʾ��ع���*/
	u32 papower_m1;/*[0,1,2]*//*modem1,����ͨ��1�Ĺ��絥Ԫ,valueΪ0��ʾ���򿪵�Դ��Ϊ1��ʾΪpastar���磬Ϊ2��ʾ��ع���*/
}NV_PAPOWER_UNIT_STRU;
/* NV ID =0xd13A start, pastar config */

typedef struct
{
    u32   nvSysTimeValue;   /* ��õ���ϵͳ����ʱ�� */
}SYS_TIME;

typedef struct
{
    u32  ulIsEnable;				/*�¶ȱ���ʹ��*/
    u32    lCloseAdcThreshold;
    u32  ulTempOverCount;
}CHG_BATTERY_HIGH_TEMP_PROT_NV;

typedef struct
{
    u32  ulIsEnable;			/*�¶ȱ���ʹ��*/
    u32    lCloseAdcThreshold;
    u32  ulTempLowCount;
}CHG_BATTERY_LOW_TEMP_PROTE_NV;

/* ����ģʽnv��,0 : �ǹ���ģʽ 1: ����ģʽ**/
typedef struct
{
    u32 ulFactoryMode;
}FACTORY_MODE_TYPE;

/* �����������Դ��� */
typedef struct
{
    u32 ulTryTimes;
}BOOT_TRY_TIMES_STRU;

/* ������������ʱ�� */
typedef struct
{
    u32 ulPowKeyTime;
}POWER_KEY_TIME_STRU;

typedef struct
{
    u16 temperature;
    u16 voltage;
}CHG_TEMP_ADC_TYPE;

typedef struct
{
    CHG_TEMP_ADC_TYPE g_adc_batt_therm_map[31];
}NV_BATTERY_TEMP_ADC;


/*Ӳ��汾nv��,1 : Ӳ��汾 0: ��Ӳ��汾*/
typedef struct
{
    u32 ulHwVer;
}E5_HW_TEST_TYPE;

/*�Ƿ�֧��APT����nv��,1 : ֧�� 0: ��֧��*/
typedef struct
{
    u32 ulIsSupportApt;
}NV_SUPPORT_APT_TYPE;

/*PMU�쳣����nv��*/
typedef struct
{
    u8 TemppmuLimit;  /*PMU�¶���ֵ:0:105��;1:115��;2:125��;3:135��*/
	u8 ulCurIsOff;  /*����ʱ����Դ�Ƿ��µ磺0���µ磻1�����µ�*/
	u8 ulOcpIsRst;  /*����ʱ�Ƿ������λ: 0:����λ 1:��λ*/
	u8 PmuproIsOn;  /*PMU�쳣���������Ƿ�����0����������1������*/
}PMU_PRO_NV;

typedef struct
{
    u32 u32SciGcfStubFlag;   /* 1: GCF����ʹ�ܣ�0��GCF���Բ�ʹ�� */
}SCI_NV_GCF_STUB_FLAG;

/*���ٿ��ػ������Ƿ�ʹ��NV��*/
typedef struct
{
    u32 ulEnable;   /*���ٿ��ػ��Ƿ�ʹ�ܣ�0����ʹ�ܣ�1��ʹ��*/
}NV_SHORT_ONOFF_ENABLE_TYPE;

/*���ٿ��ػ�����������ϢNV��*/
typedef struct NV_SHORT_ONOFF_TYPE_S
{
    u32 ulPowerOffMaxTimes;   /*֧�ֵ����ٹػ�����*/
	u32 ulMaxTime;            /*�ٹػ���ʷ�ۼ�ʱ����ڵ��ڴ�ʱ���Զ���ػ�����λСʱ*/
	u32 ulVoltLevel1;         /*���ű�����һ����ѹ����*/
	u32 ulVoltLevel2;         /*���ű����ڶ�����ѹ����*/
	u32 ulRTCLevel1;          /*С�ڵ�һ����ѹ��Ӧ��RTC����ʱ��*/
	u32 ulRTCLevel2;          /*��һ���͵ڶ���֮���ѹ��Ӧ��RTC����ʱ��*/
	u32 ulRTCLevel3;          /*���ڵ��ڵڶ�����ѹ��Ӧ��RTC����ʱ��*/
}NV_SHORT_ONOFF_TYPE;

/*ʡ��ģʽ���ã���ʶ�������Ƿ�ʹ��NV��*/
typedef struct
{
        u32 ulLEDEnable;   /*������LED �Ƿ�ʹ�ܣ�0����ʹ�ܣ�1��ʹ��*/
        u32 ulReserved1;   /*����Ԥ��  �Ƿ�ʹ�ܣ�0����ʹ�ܣ�1��ʹ��*/
        u32 ulReserved2;   /*����Ԥ��  �Ƿ�ʹ�ܣ�0����ʹ�ܣ�1��ʹ��*/
}NV_POWER_SAVE_TYPE;

/*���ؼƵ�ѹ������У׼����*/
typedef struct
{
    u32 v_offset_a;         /* ��ѹУ׼���Բ��� */
    s32 v_offset_b;         /* ��ѹУ׼����ƫ��*/
    u32 c_offset_a;         /* ����У׼���Բ��� */
    s32 c_offset_b;         /* ����У׼����ƫ�� */
}COUL_CALI_NV_TYPE;

/*�¶ȱ���HKADC����ͨ�������� NV_ID_DRV_TEMP_HKADC_CONFIG            = 0xd120 */

typedef struct
{
    u32 out_config;         /* bit0-bit1 0:����� 1:������� 2:ѭ����� */
                                /* bit2 1:������� 0:�ǻ������ */
                                /* bit3: 0:ֻ�����ѹ 1:��ѹ�¶Ⱦ���� */
                                /* bit8: A����� */
                                /* bit9: C����� */
    u32 have_config;
    u16 out_period;         /* ѭ�����ʱ��ѭ�����ڣ���λ:�� */
    u16 convert_list_len;   /* �¶�ת������ */
    u16 convert_list_id;    /* �¶�ת����NV��־��ʵ�ʳ��Ȳμ�usTempDataLen */
    u16 reserved;
}TEMP_HKADC_CHAN_CONFIG;

typedef struct
{
    TEMP_HKADC_CHAN_CONFIG chan_config[16];

}TEMP_HKADC_CHAN_CONFIG_ARRAY;

/*�¶ȱ���HKADC����ͨ�������� NV_ID_DRV_TEMP_TSENS_CONFIG            = 0xd121 */
typedef struct
{
    u16 enable;         /* bit0:���±���ʹ�� bit1:���±���ʹ�� 1 ʹ�� 0 �ر�*/
    u16 high_thres;     /* оƬ���±����ĵ�ѹ��ֵ  */
    u16 high_count;     /* оƬ���±����������ޣ�ϵͳ�ػ� */
    u16 reserved;
    /*u32 low_thres;*/  /* оƬ���±����ĵ�ѹ��ֵ */
    /*u32 low_count;*/  /* оƬ���±����������ޣ�ϵͳ�ػ� */

}TEMP_TSENS_REGION_CONFIG;

typedef struct
{
    TEMP_TSENS_REGION_CONFIG region_config[3];

}TEMP_TSENS_REGION_CONFIG_ARRAY;



/*�¶ȱ�����ظߵ��±���  NV_ID_DRV_TEMP_BATTERY_CONFIG          = 0xd122 */
typedef struct
{
    u16 enable;        /* bit0:���±���ʹ�� bit1:���±���ʹ�� 1 ʹ�� 0 �ر�*/
    u16 hkadc_id;      /* ϵͳ�ŵ��¶ȱ�����hkadcͨ��ID */
    u16 high_thres;    /* ϵͳ�ŵ���±������¶ȷ�ֵ */
    u16 high_count;    /* ϵͳ�ŵ���±����������� */
    s16 low_thres;     /* ϵͳ�ŵ���±������¶ȷ�ֵ */
    u16 low_count;     /* ϵͳ�ŵ���±������� */

    u32 reserved[2];   /*����*/
} DRV_SYS_TEMP_STRU;

/*�¶ȱ��������߼�ת����  NV_ID_DRV_TEMP_CHAN_MAP          = 0xd126 */
typedef struct
{
    u8 chan_map[32];

}TEMP_HKADC_PHY_LOGIC_ARRAY;

/* WIN7 Feature for usb id:50075 */
typedef struct
{
    u8 wwan_flag;
    u8 reserved1;
    u8 reserved2;
    u8 reserved3;
    u8 reserved4;
    u8 reserved5;
    u8 reserved6;
    u8 reserved7;
} NV_WIN7_FEATURE;

typedef struct
{
    u32 sci_dsda_select;        /* 0: sim0, 1:sim1*/
} DRV_SCI_DSDA_SELECT;
/* SIM gcf test flage*/
typedef struct
{
    u32 sci_gcf_sub_flag;        /* 0: open, 1:close */
} DRV_SCI_GCF_STUB_FLAG;

/*E5���ڸ���*/
typedef struct
{
	u32 wait_usr_sele_uart : 1;//[bit 0-0]1: await user's command for a moment; 0: do not wait
	u32 a_core_uart_num    : 2;//[bit 1-2]the number of uart used by a core
	u32 c_core_uart_num    : 2;//[bit 3-4]the number of uart used by c core
	u32 m_core_uart_num    : 2;//[bit 5-6]the number of uart used by m core
	u32 a_shell            : 1;//[bit 7-7]0:ashell is not used; 1:ashell is used
	u32 c_shell            : 1;//[bit 8-8]0:cshell is not used; 1:cshell is used
	u32 uart_at            : 1;//[bit 9-9]uart at control
	u32 extendedbits       : 22;//[b00]1:open cshell_auart; 0:close
}DRV_UART_SHELL_FLAG;

/* product support module nv define */
typedef struct
{
	u32 sdcard 		: 1;//1: support; 0: not support
	u32 charge 		: 1;
	u32 wifi    	: 1;
	u32 oled    	: 1;
	u32 hifi        : 1;
	u32 onoff       : 1;
	u32 hsic        : 1;
	u32 localflash  : 1;
	u32 reserved    : 24;
} DRV_MODULE_SUPPORT_STRU;

typedef struct
{
	u8 normalwfi_flag;
	u8 deepsleep_flag;
	u8 buck3off_flag;
	u8 peridown_flag;
	u32 deepsleep_Tth;
	u32 TLbbp_Tth;
}DRV_NV_PM_TYPE;

/* NV_ID_DRV_TSENS_TABLE = 0xd129*/
typedef struct
{
    s16 temp[256];

}DRV_TSENS_TEMP_TABLE;

typedef struct
{
    u8 ucABBSwitch; /*��Ӧģʽʹ�õ�ABB����ͨ����0 ͨ��0, 1: ͨ��1, 2: ͬʱʹ������ͨ��*/
    u8 ucRFSwitch;  /*��Ӧģʽʹ�õ�RF����ͨ����0 ͨ��0, 1: ͨ��1, 2: ͬʱʹ������ͨ��*/
    u8 ucTCXOSwitch; /*��Ӧģʽʹ�õ�TCXO ID 0 TCXO0, 1: TCXO1*/
    u8 reserve;
}NV_TLMODE_BASIC_PARA_STRU;

typedef struct
{
    NV_TLMODE_BASIC_PARA_STRU stModeBasicParam[2];/*�±�Ϊ0:LTE, 1:TDS*/
}NV_TLMODE_CHAN_PARA_STRU;

typedef struct
{
    u32 clkdis1; /*��ʼ�ر�ʱ�ӼĴ�������Ӧcrg clk dis1*/
    u32 clkdis2; /*��ʼ�ر�ʱ�ӼĴ�������Ӧcrg clk dis2*/
    u32 clkdis3; /*��ʼ�ر�ʱ�ӼĴ�������Ӧcrg clk dis3*/
    u32 clkdis4;  /*��ʼ�ر�ʱ�ӼĴ�������Ӧcrg clk dis4*/
	u32 clkdis5;  /*��ʼ�ر�ʱ�ӼĴ�������Ӧcrg clk dis5*/
    u32 mtcmosdis; /*��ʼ�ر�MTCMOS�Ĵ�������Ӧcrg mtcmosdis*/
}DRV_NV_PM_CLKINIT_STRU;

typedef struct
{
    u32 ucBBPCh0TcxoSel:1; 	    /* bit 0,CH0 19.2Mʹ�õ�TCXOԴ��0 TCXO0, 1: TCXO1; ��Ӧ�Ĵ��� 0x90000148 */
    u32 ucBBPCh1TcxoSel:1;  	/* bit 1,CH1 19.2Mʹ�õ�TCXOԴ��0 TCXO0, 1: TCXO1; ��Ӧ�Ĵ��� 0x90000148 */
    u32 ucABBCh0TcxoSel:1; 		/* bit 2,ABB Ch0 ʹ�õ�TCXOԴ��0 TCXO0, 1: TCXO1; ��ӦABB�Ĵ��� 0x94 */
    u32 ucABBCh1TcxoSel:1; 		/* bit 3,ABB Ch1 ʹ�õ�TCXOԴ��0 TCXO0, 1: TCXO1; ��Ӧ�Ĵ��� 0x94 */
	u32 ucBbpPllTcxoSel:1; 		/* bit 4,BBP PLL ʹ�õ�TCXOԴ��0 TCXO0, 1: TCXO1;*/
	u32 ucG1bp104mTcxoSel:1; 	/* bit 5,G1BBP 104M ʹ�õ�ABBͨ����0��ͨ��0, 1: ͨ��1;*/
	u32 ucG2bp104mTcxoSel:1; 	/* bit 6,G1BBP 104M ʹ�õ�ABBͨ����0��ͨ��0, 1: ͨ��1;*/
	u32 reserve:25;             /* bit 7-31*/
}DRV_TCXO_SEL_PARA_STRU;

typedef struct
{
    u32 u32UsbDbg;   /* usbģ�������Ϣ���� */
}DRV_USB_DBG_STRU;

typedef struct
{
	u32 wdt_enable;
	u32 wdt_timeout;
	u32 wdt_keepalive_ctime;
	u32 wdt_suspend_timerout;
	u32 wdt_reserve;
}DRV_WDT_INIT_PARA_STRU;


/*�¶ȱ��������߼�ת����  NV_ID_DRV_TSENSOR_TRIM          = 0xd12f */
typedef struct
{
    u16 tsensor_trim[16];

}DRV_TSENSOR_TRIM_STRU;

/* axi monitor���ID���� */
typedef struct
{
    u32 reset_flag;     /* ��λ��־��ƥ�䵽��������Ƿ�λ */
    u32 opt_type;       /* ������ͣ�01:����10:д��11:��д������ֵ:����� */
    u32 port;           /* ��ض˿� */
    u32 master_id;      /* ���masterid */
    u32 start_addr;     /* �����ʼ��ַ */
    u32 end_addr;       /* ��ؽ�����ַ */
} AMON_CONFIG_T;

/* axi monitor����NV�� NV_ID_DRV_AMON = 0xd130 */
typedef struct
{
    u32         en_flag;            /* ʹ�ܱ�־��00:ȥʹ�ܣ�01:SOC��10:CPUFAST��11:SOC,CPUFAST */
    AMON_CONFIG_T   soc_config[8];      /* SOC���ã�8�����ID */
    AMON_CONFIG_T   cpufast_config[8];  /* CPUFAST���ã�8�����ID */
} DRV_AMON_CONFIG_STRU;

/*****************************************************************************
 �ṹ��    : NV_RF_GPIO_CFG_STRU
 �ṹ˵��  : RF_GPIO�������ɿ��Ը���ΪDRV_GPIO
             ��һЩ��Ƶ���ܳ�����Ҫ�ı���ЩRF_GPIO���ŵĸ��ù��ܼ����״̬
             ͨ����NV���� ID=10047
*****************************************************************************/
typedef struct
{
    u16 is_used;    /*Range:[0,1]*/
	u16 gpio_level; /*Range:[0,1]*/
}RF_MODEM_CONTROL;

typedef struct
{
    u32 rf_gpio_num;
    RF_MODEM_CONTROL modem_inside;	/*����modem*/
    RF_MODEM_CONTROL modem_outside; /*����modem*/
}RF_GPIO_CFG;

typedef struct
{
    RF_GPIO_CFG rf_switch_cfg[16];
}NV_RF_SWITCH_CFG_STRU;

/* SOCP���迪����������NV�� = 0xd132 */
typedef struct
{
    u32         en_flag;            /* ʹ�ܱ�־��00:ȥʹ�ܣ�01:ʹ�� */
} DRV_SOCP_ON_DEMAND_STRU;

/* drx delay flag */
typedef struct
{
    u8         lpm3_flag;         /* 0x11 ����lpm3 */
    u8         lpm3_0;            /* 1��delay,�����ر�delay */
    u8         lpm3_1;
    u8         lpm3_2;
    u8         lpm3_3;
    u8         lpm3_4;
    u8         drv_flag;          /* 0x22 ����drv */
    u8         drv_0;             /* 1��delay,�����ر�delay */
    u8         drv_1;
    u8         drv_2;
    u8         drv_3;
    u8         drv_4;
    u8         msp_flag;          /* 0x33 ����msp */
    u8         msp_0;             /* 1��delay,�����ر�delay */
    u8         msp_1;
    u8         msp_2;
    u8         msp_3;
    u8         msp_4;
}DRV_DRX_DELAY_STRU;

/* C�˵�����λ���迪����������NV�� = 0xd134 */
typedef struct
{
    u32 is_feature_on:1;         /* bit0, ����C�˵�����λ�����Ƿ�� */
    u32 is_connected_ril:1;      /* bit1, �Ƿ��RIL�Խ� */
	u32 reserve:30;              /* bit 2-31*/
} DRV_CCORE_RESET_STRU;

/* NV ID = 0xd135 */
/* ���ڱ�ʾÿ·LDO��BUCK�Ƿ�� */
typedef struct
{
	u32 ldo1_switch     :1;         /* ��0bit��ֵΪ1��Ϊ�򿪣�ֵΪ0��Ϊ�ر� */
	u32 ldo2_switch     :1;         /* ��1bit��ֵΪ1��Ϊ�򿪣�ֵΪ0��Ϊ�ر� */
	u32 buckpa_switch   :1;         /* ��2bit��ֵΪ1��Ϊ�򿪣�ֵΪ0��Ϊ�ر� */
	u32 buck1_switch    :1;         /* ��3bit��ֵΪ1��Ϊ�򿪣�ֵΪ0��Ϊ�ر� */
	u32 buck2_switch    :1;         /* ��4bit��ֵΪ1��Ϊ�򿪣�ֵΪ0��Ϊ�ر� */
	u32 reserved        :27;        /* ��5~31bit��Ԥ����Ĭ��ֵΪ0 */
}NV_PASTAR_SWITCH_STRU_BITS;

typedef struct
{
    union
    {
        u32 u32;
        NV_PASTAR_SWITCH_STRU_BITS bits;
    }cont;
}NV_PASTAR_SWITCH_STRU;
/* end NV ID = 0xd135 */


/* log2.0 2014-03-19 Begin:*/
typedef struct
{
    u32 ulSocpDelayWriteFlg;/* SOCP�ӳ�д�빦��������� */
    u32 ulGuSocpLevel;      /* GU SOCPĿ��BUFFER����ˮ�� */
    u32 ulLSocpLevel;       /* L SOCPĿ��BUFFER����ˮ�� */
    u32 ulTimeOutValue;     /* SOCPĿ��BUFFER�ĳ�ʱʱ�� */
}DRV_NV_SOCP_LOG_CFG_STRU;
/* log2.0 2014-03-19 End*/
typedef struct
{
    u32  enUartEnableCfg;
	u32  AwaitReplyTimer;
	u32  AwakeTmer;
	u32  DoSleepTimer;
}DRV_DUAL_MODEM_STR;

/* GPIO����LDO���� NV�� = 0xd137 */
typedef struct
{
    u32 gpio;      /* LDO��ӦGPIO��� */
    u32 used;      /* GPIO�Ƿ�ʹ�� */
} DRV_DRV_LDO_GPIO_CFG;

typedef struct
{
    DRV_DRV_LDO_GPIO_CFG ldo_gpio[2];
}DRV_DRV_LDO_GPIO_STRU;


/* GPIO����LDO���� NV�� = 0xd138 */
typedef struct
{
    u32 modem_id;      /* modem idĬ�ϴ�0��ʼ�������� */
    u32 gpio;          /* ANTEN��ӦGPIO��� */
    u32 used;          /* GPIO�Ƿ�ʹ�� */
} DRV_DRV_ANTEN_GPIO_CFG;

typedef struct
{
    DRV_DRV_ANTEN_GPIO_CFG anten_gpio[LDO_GPIO_MAX];
}DRV_DRV_ANTEN_GPIO_STRU;

/* RSE POWER GPIO���� NV�� = 0xd139 */
typedef struct
{
    u32 ulRsePowerOnIds;
    u32 ulFemCtrlInfo;
    u32 ulRfGpioBitMask;
    u32 ulRfGpioOutValue;
    u16 usFemMipiCmdAddr;
    u16 usFemMipiCmdData;
}RF_NV_RSE_CFG_STRU;


typedef struct
{
	u32 DialupEnableCFG;
	u32 DialupACShellCFG; 
}DRV_DIALUP_HSUART_STRU;


/*
*nvid = 0xd13d
*for mmc support or not
*/
typedef struct
{
	u32 support;
}DRV_MMC_SUPPORT_STRU;

/* PA/RF����ʵ���Ƿ�ʹ�ÿ��أ�������EM_MODEM_CONSUMER_IDö���е�˳�򱣳�һ�� */
/*ͨ��ģ�鹩��� CONSUMER��idö��
typedef enum EM_MODEM_CONSUMER_ID_E
{
    MODEM_PA0,
    MODEM_RFIC0_ANALOG0,
    MODEM_RFIC0_ANALOG1,
    MODEM_FEM0,
    MODEM_PA_VBIAS0,
    MODEM_PA1,
    MODEM_RFIC1_ANALOG0,
    MODEM_RFIC1_ANALOG1,
    MODEM_FEM1,
    MODEM_PA_VBIAS1,
    MODEM_CONSUMER_ID_BUTT
}EM_MODEM_CONSUMER_ID;
*/
typedef struct
{
	u32 pa0 				: 1;	//1: Ӳ����ʵ�ʹ�������; 0: Ӳ����ʵ�ʹ�������
	u32 rfic0_analog0 		: 1;
	u32 rfic0_analog1    	: 1;
	u32 fem0    			: 1;
	u32 pa_vbias0       	: 1;
	u32 pa1 				: 1;
	u32 rfic1_analog0 		: 1;
	u32 rfic1_analog1    	: 1;
	u32 fem1    			: 1;
	u32 pa_vbias1       	: 1;
	u32 reserved    : 22;
}PARF_SWITCH_BITS;

typedef struct
{
    union
    {
        u32 u32;
        PARF_SWITCH_BITS bits;
    }cont;
} NV_DRV_PARF_SWITCH_STRU;

/* NVID=0xd140 begin */
typedef struct
{
    u32 mdm_dump    :1;     /* modem_dump.bin */
    u32 mdm_sram    :1;     /* modem_sram.bin */
    u32 mdm_share   :1;     /* modem_share.bin */
    u32 mdm_ddr     :1;     /* modem_ddr.bin */
    u32 lphy_tcm    :1;     /* lphy_tcm.bin */
    u32 lpm3_tcm    :1;     /* lpm3_tcm.bin */
    u32 ap_etb      :1;     /* ap_etb.bin */
    u32 mdm_etb     :1;     /* modem_etb.bin */
    u32 reserved2   :24;
}DUMP_FILE_BITS;

typedef struct
{   
    union
    {
        u32         file_value;
        DUMP_FILE_BITS  file_bits;
    } file_list;
    u32             file_cnt; /* ��¼�쳣�ļ����� */
}DUMP_FILE_CFG_STRU;

/* pm om���� NV�� = 0xd145 */
typedef struct
{
	u8  log_threshold[4];    /* acore/ccore/mcore����д�ļ��ķ�ֵ, ��ֵ��ʾ�ٷֱ� */
    u8  mod_sw[8];           /* ����ģ��log���ܿ��ƿ��� */
}DRV_PM_OM_CFG_STRU;
/* NVID=0xd13d end */

#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif

#endif

