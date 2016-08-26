



#ifndef __HWIFI_ROAM_FSM_H__
#define __HWIFI_ROAM_FSM_H__

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif

#ifdef __ROAM__

/*
 * 1 Other Header File Including
 */
#include <linux/spinlock.h>
#include <linux/timer.h>

#include "common.h"


/*
 * 2 Macro Definition
 */

struct roam_fsm_stru;
struct roam_candidate_ap_stru;
struct roam_all_stru;

typedef void (*FSM_HANDLER)(struct roam_fsm_stru *fsm, void *data);


/*
 * 3 Enum Type Definition
 */

/* roam sm state */
enum roam_fsm_enum
{
    ROAM_FSM_STATE_DISCONN = 0,             /*  */
    ROAM_FSM_STATE_CONNECT,                 /*  */
    ROAM_FSM_STATE_SCANNING,                /*  */
    ROAM_FSM_STATE_ROAMING,                 /*  */
    ROAM_FSM_STATE_ORIGIN,                  /* */

    ROAM_FSM_STATE_BUTT,
};

/* roam scanning subsm state*/
enum roam_scanning_subsm_enum
{
    ROAM_SCANNING_GO_FOREIGN = 0,
    ROAM_SCANNING_SEND_PROBEREQ,
    ROAM_SCANNING_GO_HOME,
    ROAM_SCANNING_GO_ROAMING
};


/* roam sm input event type */
enum roam_fsm_input_enum
{
    ROAM_FSM_INPUT_OFF = 0,
    ROAM_FSM_INPUT_TIMEOUT,
    ROAM_FSM_INPUT_CONNECT,
    ROAM_FSM_INPUT_DISCONNET,
    ROAM_FSM_INPUT_ADDKEY,
    ROAM_FSM_INPUT_TRIGGER,
    ROAM_FSM_INPUT_ROAMED,
    ROAM_FSM_INPUT_RETURN,

    ROAM_FSM_INPUT_BUTT
};

/* current connected AP's encryption type */
enum crypto_type_enum
{
    CONNECTED_OPEN = 0,
    CONNECTED_WEP,
    CONNECTED_TKIP,
    CONNECTED_CCMP,
    CONNECTED_WAPI
};

/*
 * 4 Global Variable Declaring
 */


/*
 * 5 Message Header Definition
 */


/*
 * 6 Message Definition
 */


/*
 * 7 STRUCT Type Definition
 */
#define ROAM_MATCH_REG_DOMAIN  1
#define ROAM_MATCH_BAND        2
#define ROAM_MATCH_ORTHOGONAL  4
#define ROAM_MATCH_ALL_MASK    7

#define ROAM_CLEAR_REG_DOMAIN       0xFE
#define ROAM_CLEAR_FLAG_BAND        0xFD
#define ROAM_CLEAR_FLAG_ORTHOGONAL  0xFB

struct roam_domain_channel_stru
{
    uint8 band;  /* roam_param_band_enum */
    uint8 channel;
    uint8 flag;
#if 0
   /*
   BIT0:0000 0001    ��ʾ�����Ϲ�����
   BIT1:0000 0010    ��ʾ������Ƶ��
   BIT2:0000 0100    ��ʾ����������
   */
#endif

};



struct roam_scan_channel_stru
{
    uint8 band;  /* roam_param_band_enum */
    uint8 channel;
};

struct roam_fsm_stru
{
    spinlock_t          lock;

    int32            is_roam_on;

    /* roaming state machine */
    enum roam_fsm_enum state;

    /* sm event process handlers */
    FSM_HANDLER         handler[ROAM_FSM_STATE_BUTT][ROAM_FSM_INPUT_BUTT];

    struct roam_domain_channel_stru domain_channels[HWIFI_MAX_CHANNEL_4_9G + 1];
    struct roam_scan_channel_stru scan_channels[HWIFI_ROAM_SCAN_CHANNEL_MAX_NUM];

    /* total count of roamming scan channels, and current scan channel index */
    uint8 domain_channel_updated;   /* 0:not be updated; 1: :be updated */
    int32 scan_channel_count;
    int32 scan_channel_index;

    /* total count of sending probe request per channel, and count of remainder*/
    int32 scan_probereq_count;
    int32 scan_probereq_remainder;

    enum roam_scanning_subsm_enum next_subsm;

    struct roam_candidate_ap_stru *candidate;

    enum crypto_type_enum connected_type;
    uint32 connected_band;
    uint32 connected_channel;
    unsigned long roamed_ts;

    uint32 roam_failed_count;     /* ��������ʧ�ܴ��� */

    uint32 roam_scan_miss_count;   /* ����û��ɨ�赽��ͬssid AP�Ĵ��� */
    unsigned long scan_ts;         /* ����ɨ��ʱ�� */
    uint32 roam_scan_interval_s;  /* ����ɨ����ʱ�� */

    int8 specify_ssid_scan_flag;  /* ����ɨ���Ƿ�ָ��ssidɨ�� */
    int8 bg_scan_effect_flag;     /* �˴α���ɨ���Ƿ���Ч */
    int8 find_roam_new_ap_flag;   /* ����ɨ���Ƿ�ɨ�赽��ͬssid�ͼ��ܷ�ʽ����AP */


    int32 min_diff_rssi_1;        /* ��Ӧ <= ROAM_RSSI_THRESHOLD_1 -80 ����rssiĬ�ϼ�� 4db */
    int32 min_diff_rssi_2;        /* ��Ӧ <= ROAM_RSSI_THRESHOLD_2 -75 ����rssiĬ�ϼ�� 6db */
    int32 min_diff_rssi_3;        /* ��Ӧ <= ROAM_RSSI_THRESHOLD_3 -70 ����rssiĬ�ϼ�� 8db */
    int32 min_diff_rssi_4;        /* ��Ӧ > ROAM_RSSI_THRESHOLD_3  -70 ����rssiĬ�ϼ�� 10db */

    int32 min_scan_interval_1;    /* ��Ӧ <= ROAM_RSSI_THRESHOLD_1 -80 ����ɨ��Ĭ�ϼ�� 10s */
    int32 min_scan_interval_2;    /* ��Ӧ <= ROAM_RSSI_THRESHOLD_2 -75 ����ɨ��Ĭ�ϼ�� 15s */
    int32 min_scan_interval_3;    /* ��Ӧ <= ROAM_RSSI_THRESHOLD_3 -70 ����ɨ��Ĭ�ϼ�� 20s */
    int32 min_scan_interval_4;    /* ��Ӧ > ROAM_RSSI_THRESHOLD_3  -70 ����ɨ��Ĭ�ϼ�� 60s */


    int32 target_ap_rssi;         /* ��¼����ʱѡ��Ŀ��AP��rssi,�����γɹ���,��AP��RSSI��Ϊ����RSSIʹ�� */

    int32 force_trigger_scan_flag;  /* device���ղ���beacon֡�������ǿ�ƴ�������ɨ���־ */

    struct timer_list timer;
};


/*
 * 8 UNION Type Definition
 */


/*
 * 9 OTHERS Definition
 */


/*
 * 10 Function Declare
 */


/*sm event process functions*/


void roam_process_on(struct roam_all_stru* roam);
void roam_process_off(struct roam_all_stru* roam);
void roam_process_connect(struct roam_all_stru* roam, enum crypto_type_enum crypto_type, uint32 band, uint32 channel);
void roam_process_disconnect(struct roam_all_stru* roam);
void roam_process_addkey(struct roam_all_stru* roam);
void roam_process_trigger(struct roam_all_stru* roam);
void roam_process_roamed(struct roam_all_stru* roam, uint32 band, uint32 channel);
void roam_process_return(struct roam_all_stru* roam);


/* sm init function */
extern int roam_fsm_init(struct roam_fsm_stru *fsm);
extern void roam_fsm_exit(struct roam_fsm_stru *fsm);


#endif /* __ROAM__ */

#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif /* end of hwifi_roam_fsm.h */
