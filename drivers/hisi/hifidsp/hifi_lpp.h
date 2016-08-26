/*
 * hifi misc driver.
 *
 * Copyright (c) 2013 Hisilicon Technologies CO., Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef __HIFI_LPP_H__
#define __HIFI_LPP_H__

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif

#define PAGE_MAX_SIZE		 0x1000

#ifndef OK
#define OK			 0
#endif

#define ERROR		(-1)
#define BUSY		(-2)
#define NOMEM		(-3)
#define INVAILD 	(-4)

/* IOCTL��κͳ��ε�SIZE���� */
#define SIZE_LIMIT_PARAM		(256)

#ifdef PLATFORM_HI3XXX
/* HIFIר���� */
/* |0x37700000~~~~~~~~|0x37c00000~~~~~|0x37c02000~~~~~|0x37c20000~~~~~~|0x37c60000~~~|0x37c75000~~~~~|0x37c75400~~~~~|0x37c75410~~~~~|0x37c80000~~~~~~~~~| */
/* |~~~~~Code run 5M~~|~~~socp 8K~~~~~|~~reserv1 120K~|~~~~~OCRAM 256K~|~~~~TCM 84K~~|~~~SEC HEAD 1K~|~WTD FLAG 16B~~|~~reserv2 43K~~|~~Code backup 3.5M~| */
/* |~~~~~~~~no sec~~~~|~~~~~~~no sec~~|~~~~~~~no sec~~|~~~~~~~nosec~~~~|~~~~~~nosec~~|~~~~~~~~nosec~~|~~~~~~~~nosec~~|~~~~~~~no sec~~|~~~~~~~~~sec~~~~~~~| */
/* |0x37bfffff~~~~~~~~|0x37c01fff~~~~~|0x37c1ffff~~~~~|0x37c5ffff~~~~~~|0x37c74fff~~~|0x37c753ff~~~~~|0x37c7540f~~~~~|0x37c7ffff~~~~~|0x37ffffff~~~~~~~~~| */

/* |~~0x2D600000 ~ 0x2DAFFFFF~~|~~0x2DB00000 ~ 0x2DBFFFFF~~| */
/* |~~~Music data 5M~~~~~~~~~~~|~~~~~~~~Pcm data 1M~~~~~~~~| */
/* |~~~~~no sec~~~~~~~~~~~~~~~~|~~~~~~~~~no sec~~~~~~~~~~~~| */

#define HIFI_RUN_SIZE					(0x500000)
#define HIFI_MUSIC_DATA_SIZE			(0x500000)
#define HIFI_PCM_DATA_SIZE              (0x100000)
#define HIFI_SOCP_SIZE					(0x2000)
#define HIFI_RESERVE1_SIZE				(0x1E000)
#define HIFI_IMAGE_OCRAMBAK_SIZE		(0x40000)
#define HIFI_IMAGE_TCMBAK_SIZE			(0x15000)
#define HIFI_RESERVE2_SIZE				(0xABF0)
#define HIFI_IMAGE_SIZE 				(0x380000)
#define HIFI_SIZE						(0x900000)
#define HIFI_SEC_HEAD_SIZE				(0x400)
#define HIFI_WTD_FLAG_SIZE				(0x10)

#define HIFI_BASE_ADDR					(0x37700000)
#define HIFI_RUN_LOCATION				(HIFI_BASE_ADDR)											/*Code run*/
#define HIFI_SYS_MEM_ADDR				(HIFI_BASE_ADDR)
#define HIFI_MUSIC_DATA_LOCATION		(0x2D600000)												/*Music Data*/
#define HIFI_PCM_PLAY_BUFF_LOCATION     (HIFI_MUSIC_DATA_LOCATION + HIFI_MUSIC_DATA_SIZE)           /*Pcm Data*/
#define HIFI_SOCP_LOCATION				(HIFI_RUN_LOCATION + HIFI_RUN_SIZE) 						/*SOCP*/
#define HIFI_RESERVE1_LOCATION			(HIFI_SOCP_LOCATION + HIFI_SOCP_SIZE)						/*reserv1*/
#define HIFI_IMAGE_OCRAMBAK_LOCATION	(HIFI_RESERVE1_LOCATION + HIFI_RESERVE1_SIZE)				/*OCRAM*/
#define HIFI_IMAGE_TCMBAK_LOCATION		(HIFI_IMAGE_OCRAMBAK_LOCATION + HIFI_IMAGE_OCRAMBAK_SIZE)	/*TCM*/
#define HIFI_SEC_HEAD_BACKUP			(HIFI_IMAGE_TCMBAK_LOCATION + HIFI_IMAGE_TCMBAK_SIZE)		/*SEC HEAD backup*/
#define HIFI_WTD_FLAG_BASE				(HIFI_SEC_HEAD_BACKUP + HIFI_SEC_HEAD_SIZE)					/*Watchdog flag*/
#define HIFI_RESERVE2_LOCATION			(HIFI_WTD_FLAG_BASE + HIFI_WTD_FLAG_SIZE)					/*reserv2*/
#define HIFI_IMAGE_LOCATION 			(HIFI_RESERVE2_LOCATION + HIFI_RESERVE2_SIZE)				/*Code backup*/

#define HIFI_WTD_FLAG_NMI			   (HIFI_WTD_FLAG_BASE + 0x8)

#define HIFI_OFFSET_MUSIC_DATA			(HIFI_RUN_SIZE)
#define HIFI_OFFSET_IMG 				(HIFI_SIZE - HIFI_IMAGE_SIZE)
#define HIFI_OFFSET_RUN 				(0x0)

#if 1 /*hifi define*/
#define DRV_HIFI_DDR_BASE_ADDR			(HIFI_BASE_ADDR)
#define DRV_HIFI_SOCP_DDR_BASE_ADDR 	(HIFI_SOCP_LOCATION)
#define DRV_DSP_PANIC_MARK				(HIFI_RESERVE1_LOCATION)
#define DRV_DSP_UART_LOG_LEVEL			(HIFI_RESERVE1_LOCATION + 4)
#define DRV_DSP_UART_TO_MEM_CUR_ADDR	(DRV_DSP_UART_LOG_LEVEL + 4)
#define DRV_DSP_EXCEPTION_NO			(DRV_DSP_UART_TO_MEM_CUR_ADDR + 4)
#define DRV_DSP_IDLE_COUNT_ADDR			(DRV_DSP_EXCEPTION_NO + 4)
#define DRV_DSP_LOADED_INDICATE			(DRV_DSP_IDLE_COUNT_ADDR + 4)
#define DRV_DSP_KILLME_ADDR 			(DRV_DSP_LOADED_INDICATE + 4)
#define DRV_DSP_WRITE_MEM_PRINT_ADDR	(DRV_DSP_KILLME_ADDR + 4)
#define DRV_DSP_POWER_STATUS_ADDR		(DRV_DSP_WRITE_MEM_PRINT_ADDR + 4)
#define DRV_DSP_DTS_HPX_PARM_ADDR		(DRV_DSP_POWER_STATUS_ADDR + 4)/*for dts hpx param*/
#define DRV_DSP_DTS_HPX_PARM_SIZE		(70*1024)
#define DRV_DSP_POWER_ON				(0x55AA55AA)
#define DRV_DSP_POWER_OFF				(0x55FF55FF)
#define DRV_DSP_KILLME_VALUE			(0xA5A55A5A)
#endif

#define HIFI_OCRAM_BASE_ADDR			(0xE8000000)
#define HIFI_TCM_BASE_ADDR				(0xE8058000)

#define DRV_DSP_STACK_TO_MEM_SIZE		(0x1000)
#define DRV_DSP_STACK_TO_MEM			(HIFI_BASE_ADDR+HIFI_RUN_SIZE-DRV_DSP_STACK_TO_MEM_SIZE)

#define DRV_DSP_UART_TO_MEM 			(0x3FE80000)
#define DRV_DSP_UART_TO_MEM_SIZE		(512*1024)
#define DRV_DSP_UART_TO_MEM_RESERVE_SIZE (10*1024)

#define HIFI_SIZE_MUSIC_DATA			(HIFI_MUSIC_DATA_SIZE)
#define SIZE_PARAM_PRIV 				(200 * 1024)

#define SYS_TIME_STAMP_REG				(0xFFF0A534)
#endif

#ifdef PLATFORM_HI6XXX
#define OFFSET_HIFI_PRIV		(0x00300000)
#define HIFI_MUSIC_DATA_SIZE	(0x100000) /* LowPowerPlayer.cpp:MEM_BUFF_SIZE */
#define HIFI_PRIV_ADDR			(HIFI_SYS_MEM_ADDR + OFFSET_HIFI_PRIV)
#define SIZE_PARAM_PRIV 		(200 * 1024)
#endif

/* ����HIFI��Ϣ��ǰ��cmd_idռ�õ��ֽ��� */
#define SIZE_CMD_ID 	   (8)

/* notice�����ϱ�һ�λ��� */
#define REV_MSG_NOTICE_ID_MAX		2

#define ACPU_TO_HIFI_ASYNC_CMD	  0xFFFFFFFF

#define BUFFER_NUM	8

/*****************************************************************************
  3 ö�ٶ���
*****************************************************************************/

typedef enum HIFI_MSG_ID_ {

	/*DTS command id from ap*/
	ID_AP_AUDIO_SET_DTS_ENABLE_CMD		= 0xDD36,
	ID_AP_AUDIO_SET_DTS_DEV_CMD			= 0xDD38,
	ID_AP_AUDIO_SET_DTS_GEQ_CMD			= 0xDD39,
	ID_AP_AUDIO_SET_DTS_GEQ_ENABLE_CMD	= 0xDD3B,

	/*HPX command id from ap*/
	ID_AP_AUDIO_CMD_PARAM_SYNC_CMD      = 0xDD3C,           /* AP֪ͨHifi ��ʼ����HPX����*/
	ID_AP_AUDIO_CMD_PARAM_SYNC_CNF      = 0xDD3D,           /* HIFI֪ͨAP ͬ�����*/
	ID_AP_AUDIO_CMD_PARAM_FINISH_CMD    = 0xDD3E,           /* AP֪ͨHifi �Ѿ��������HPX����*/
	ID_AP_AUDIO_CMD_PARAM_FINISH_CNF    = 0xDD3F,           /* HIFI֪ͨAP �����������*/

	/* Voice Record */
	ID_AP_HIFI_VOICE_RECORD_START_CMD	= 0xDD40,
	ID_AP_HIFI_VOICE_RECORD_STOP_CMD	= 0xDD41,

	/* voicePP MSG_ID */
	ID_AP_VOICEPP_START_REQ				= 0xDD42,						/* ����VOICEPPͨ�� */
	ID_VOICEPP_MSG_START				= ID_AP_VOICEPP_START_REQ,
	ID_VOICEPP_AP_START_CNF				= 0xDD43,
	ID_AP_VOICEPP_STOP_REQ				= 0xDD44,						/* ��ֹVOICEPPͨ�� */
	ID_VOICEPP_AP_STOP_CNF				= 0xDD45,
	ID_AP_VOICEPP_SET_DEVICE_REQ		= 0xDD46,						/* ������������豸 */
	ID_VOICEPP_AP_SET_DEVICE_CNF		= 0xDD47,
	ID_AP_VOICEPP_SET_WB_REQ			= 0xDD48,						/* ���ÿ�խ�� */
	ID_VOICEPP_AP_SET_WB_CNF			= 0xDD49,
	ID_VOICEPP_MSG_END					= 0xDD4A,

	ID_AP_AUDIO_PLAY_START_REQ			= 0xDD51,/* AP����Hifi audio player request���� */
	ID_AUDIO_AP_PLAY_START_CNF			= 0xDD52,/* Hifi����audio player��ظ�AP confirm���� */
	ID_AP_AUDIO_PLAY_PAUSE_REQ			= 0xDD53,/* APֹͣHifi audio player request���� */
	ID_AUDIO_AP_PLAY_PAUSE_CNF			= 0xDD54,/* Hifiֹͣaudio player��ظ�AP confirm���� */
	ID_AUDIO_AP_PLAY_DONE_IND			= 0xDD56,/* Hifi֪ͨAP audio playerһ�����ݲ�����ϻ��߲����ж�indication */
	ID_AP_AUDIO_PLAY_UPDATE_BUF_CMD 	= 0xDD57,/* AP֪ͨHifi�����ݿ����command */
	ID_AP_AUDIO_PLAY_QUERY_TIME_REQ 	= 0xDD59,/* AP��ѯHifi audio player���Ž���request���� */
	ID_AP_AUDIO_PLAY_WAKEUPTHREAD_REQ	= 0xDD5A,
	ID_AUDIO_AP_PLAY_QUERY_TIME_CNF 	= 0xDD60,/* Hifi�ظ�AP audio player���Ž���confirm���� */
	ID_AP_AUDIO_PLAY_QUERY_STATUS_REQ	= 0xDD61,/* AP��ѯHifi audio player����״̬request���� */
	ID_AUDIO_AP_PLAY_QUERY_STATUS_CNF	= 0xDD62,/* Hifi�ظ�AP audio player����״̬confirm���� */
	ID_AP_AUDIO_PLAY_SEEK_REQ			= 0xDD63,/* AP seek Hifi audio player��ĳһλ��request���� */
	ID_AUDIO_AP_PLAY_SEEK_CNF			= 0xDD64,/* Hifi�ظ�AP seek���confirm���� */
	ID_AP_AUDIO_PLAY_SET_VOL_CMD		= 0xDD70,/* AP������������ */
	ID_AP_AUDIO_RECORD_PCM_HOOK_CMD		= 0xDD7A,/* AP ֪ͨHIFI��ʼץȡPCM���� */
	/* enhance msgid between ap and hifi */
	ID_AP_HIFI_ENHANCE_START_REQ		= 0xDD81,
	ID_HIFI_AP_ENHANCE_START_CNF		= 0xDD82,
	ID_AP_HIFI_ENHANCE_STOP_REQ 		= 0xDD83,
	ID_HIFI_AP_ENHANCE_STOP_CNF 		= 0xDD84,
	ID_AP_HIFI_ENHANCE_SET_DEVICE_REQ	= 0xDD85,
	ID_HIFI_AP_ENHANCE_SET_DEVICE_CNF	= 0xDD86,

	/* audio enhance msgid between ap and hifi */
	ID_AP_AUDIO_ENHANCE_SET_DEVICE_IND	= 0xDD91,
	ID_AP_AUDIO_MLIB_SET_PARA_IND		= 0xDD92,
	ID_AP_AUDIO_CMD_SET_SOURCE_CMD		= 0xDD95,
	ID_AP_AUDIO_CMD_SET_DEVICE_CMD		= 0xDD96,
	ID_AP_AUDIO_CMD_SET_MODE_CMD		= 0xDD97,

	/* for 3mic */
	ID_AUDIO_AP_FADE_OUT_REQ			= 0xDDC0,
	ID_AP_AUDIO_FADE_OUT_IND			= 0xDDC1,

	ID_AP_AUDIO_ROUTING_COMPLETE_REQ	= 0xDDE5,/*AP ֪ͨHIFI 3Mic/4Mic ͨ·�ѽ�����ͬʱ�ر�Codec DP ʱ��*/
	ID_AUDIO_AP_DP_CLK_EN_IND			= 0xDDE7,/*HIFI ֪ͨA�˴򿪻�ر�Codec DPʱ�� */
	ID_AP_AUDIO_DP_CLK_STATE_IND		= 0xDDE8,/*A��֪ͨHIFI ��Codec DPʱ��״̬( �򿪻�ر�) */
	ID_AUDIO_AP_OM_DUMP_CMD 			= 0xDDE9,/* HIFI ֪ͨA��dump��־*/
} HIFI_MSG_ID;

typedef enum HI6402_DP_CLK_STATE_ {
	HI6402_DP_CLK_OFF = 0x0,
	HI6402_DP_CLK_ON = 0x1,
} HI6402_DP_CLK_STATE;


/*����hifi�ظ���Ϣ����¼cmd_id������*/
typedef struct {
	unsigned char *mail_buff;		/* �������ݽ��յ�buff */
	unsigned int mail_buff_len;
	unsigned int cmd_id;			/* �����������ǰ4���ֽ���cmd_id */
	unsigned char *out_buff_ptr;	/* ָ��mail_buff cmd_id���λ�� */
	unsigned int out_buff_len;
} rev_msg_buff;

struct recv_request {
	struct list_head recv_node;
	rev_msg_buff rev_msg;
};

struct misc_recmsg_param {
	unsigned short	msgID;
	unsigned short	playStatus;
};

struct common_hifi_cmd{
	unsigned short msg_id;
	unsigned short reserve;
	unsigned int   value;
};

struct dp_clk_request {
	struct list_head dp_clk_node;
	struct common_hifi_cmd dp_clk_msg;
};

#ifdef PLATFORM_HI3XXX
int hifi_send_msg(unsigned int mailcode, void *data, unsigned int length);
void hifi_get_log_signal(void);
void hifi_release_log_signal(void);
void sochifi_watchdog_send_event(void);
void notify_hifi_misc_watchdog_coming(void);
int hifi_misc_sync_msg(void * cmd_in, unsigned int cmd_in_size, void * cmd_out, unsigned int cmd_out_size);
#endif

#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif

#endif /* end of hifi_lpp.h */

