/**********************************************************
 * Filename:	dsm_pub.h
 *
 * Discription: Huawei device state monitor public head file
 *
 * Copyright: (C) 2014 huawei.
 *
 * Author: w00140597
 *
**********************************************************/

#ifndef _DSM_PUB_H
#define _DSM_PUB_H
#include <linux/version.h>
#include <linux/kernel.h>
#include <linux/workqueue.h>
#include <linux/wait.h>

#define CLIENT_NAME_LEN		(32) //max client name length
#define DSM_MAX_DEVICE_NAME_LEN	(32) //max device name length
#define DSM_MAX_MODULE_NAME_LEN (4)  //max module name length
#define DSM_MAX_IC_NAME_LEN		(4)  //max ic name length

/*dsm error no define*/
#define DSM_ERR_NO_ERROR					(0)
#define DSM_PMU_IRQ_ERROR_NO				(10000)
#define DSM_PMU_OCP_ERROR_NO_BASE			(10100)
#define DSM_CHARGER_ERROR_NO  				(10200)
#define DSM_PMU_COUL_ERROR_NO				(10300)
#define DSM_BATTERY_ERROR_NO				(10300)
#define DSM_BATTERY_DETECT_ERROR_NO			(10400)
#define DSM_TP_I2C_RW_ERROR_NO 				(20000)
#define DSM_TP_FWUPDATE_ERROR_NO 			(20001)
#define DSM_TP_RAWDATA_ERROR_NO 			(20002)
#define DSM_TP_FW_CRC_ERROR_NO 				(20003)
#define DSM_TP_DEV_STATUS_ERROR_NO 			(20004)
#define DSM_TP_CHANGE_REPORT_ERROR_NO 			(20006)
#define DSM_LCD_LDI_UNDERFLOW_ERROR_NO     	(20100)
#define DSM_LCD_TE_TIME_OUT_ERROR_NO		(20101)
#define DSM_LCD_STATUS_ERROR_NO				(20102)
#define DSM_LCD_VSP_ERROR_NO				(20103)
#define DSM_LCD_PWM_ERROR_NO				(20104)
#define DSM_LCD_BRIGHTNESS_ERROR_NO			(20105)
#define DSM_CODEC_ERROR_NO     	 			(20200)
#define DSM_HIFI_ERROR_NO					(20201)
#define ANC_HS_OPEN_BOOST_ERR               (20202)
#define ANC_HS_CANCEL_WORK_BLOCK            (20203)
#define ANC_HS_CLOSE_BOOST_ERR              (20204)
#define ANC_HS_ADCH_READ_ERR                (20205)
#define ANC_HS_ADC_FULL_ERR                 (20206)
#define ANC_HS_MIC_WITH_GPIO_ERR            (20207)
#define ANC_HS_QUEUE_WORK_ERR               (20208)
#define DSM_HI6401_PLL_PD                   (20209)
#define DSM_HI6401_PLL_UNLOCK               (20210)
#define DUMP_MESSAGE                        (20212)
#define DUMP_SMARTPA_RUN                    (20213)
#define DUMP_SMARTPA_REG                    (20214)
#define DUMP_SMARTPA_REG_PRESENT            (20215)
#define DUMP_SMARTPA_REG_DSPPATCH           (20216)
#define DUMP_SMARTPA_REG_COEFA              (20217)
#define DUMP_SMARTPA_REG_DSPMEM             (20218)
#define DUMP_SMARTPA_REG_TCOEF              (20219)
#define DUMP_SMARTPA_REG_R                  (20220)
#define DUMP_SMARTPA_REG_F0                 (20221)
#define DUMP_SMARTPA_REG_RESETMPT           (20222)
#define DUMP_SMARTPA_REG_READSPEAKER        (20223)
#define DUMP_SMARTPA_REG_CALIBRATION        (20224)
#define DUMP_SMARTPA_REG_MTBP               (20225)
#define DUMP_CODEC_SMARTPA_REG              (20226)
#define DUMP_CODEC_SMARTPA_REG_STATUS_ACS   (20227)
#define DUMP_CODEC_SMARTPA_REG_DSP_NOT_RUN  (20228)
#define DUMP_CODEC_SMARTPA_REG_STATUS_CLKS  (20229)
#define SMART_PA_I2C_READ                   (20232)
#define SMART_PA_I2C_WRITE                  (20233)

#define DSM_SDIO_EMMC_INIT_ERROR               (20300)
#define DSM_SDIO_EMMC_TUNING_ERROR               (20301)
#define DSM_SDIO_EMMC_READ_ERROR               (20302)
#define DSM_SDIO_EMMC_WRITE_ERROR               (20303)
#define DSM_SDIO_EMMC_DATA0_BUSY_ERROR               (20304)
#define DSM_SDIO_EMMC_PRE_EOL_INFO_ERROR               (20305)
#define DSM_SDIO_EMMC_DEVICE_LIFE_TIME_EST_ERROR               (20306)
#define DSM_SDIO_EMMC_THROUGHPUT_MONITOR_ERROR               (20307)
#define DSM_STORAGE_EXT4_ERROR_NO			(20308)

#define DSM_SHB_ERR_IPC_TIMEOUT				(20400)
#define DSM_SHB_ERR_IOM3_ACC				(20401)
#define DSM_SHB_ERR_IOM3_MAG				(20402)
#define DSM_SHB_ERR_IOM3_GYRO				(20403)
#define DSM_SHB_ERR_IOM3_LIGHT				(20404)
#define DSM_SHB_ERR_IOM3_OTHER				(20405)
#define DSM_SHB_ERR_IOM3_UNKNOW				(20406)
#define DSM_SHB_ERR_MAIN_INIT				(20407)
#define DSM_SHB_ERR_SERVER_INIT				(20408)
#define DSM_SHB_ERR_SERVER_UNINIT			(20409)
#define DSM_SHB_ERR_READ					(20410)
#define DSM_SHB_ERR_WRITE					(20411)
#define DSM_SHB_ERR_CMD						(20412)
#define DSM_SHB_ERR_CFG_DATA				(20413)
#define DSM_SHB_ERR_DYNLOAD					(20414)
#define DSM_SHB_ERR_I2C_DBG					(20415)
#define DSM_SHB_ERR_IOM3_STEP				(20416)
#define DSM_SHB_INVENSENSE_DMP_GET_FIFO_ALL (20417)
#define DSM_SHB_ERR_IOM3_ACC_EXCEED (20418)
#define DSM_SHB_ERR_INVENSENSE_DMP_FIFO_HANDLER_CONTROL_MUTEX (20419)
#define DSM_SHB_ERR_INVENSENSE_DMP_FIFO_HANDLER_DATA_MUTEX (20420)
#define DSM_SHB_ERR_INVENSENSE_DMP_ALL_ZERO_HEAD (20421)
#define DSM_KEY_ERROR_NO					(20500)
#define DSM_POWER_KEY_ERROR_NO				(20501)
#define DSM_POWER_KEY_LONG_PRESS_ERROR_NO	(20502)
#define DSM_EXTISP_LOAD_FW_ERROR_NO                 (20603)
#define DSM_FLASH_OPEN_SHOTR_ERROR_NO                 (20607)
#define DSM_FLASH_HOT_DIE_ERROR_NO                 (20608)
#define DSM_EXTISP_PQ_ERROR_NO                 (20609)
#define DSM_EXTISP_I2C_ERROR_NO                 (20610)
#define DSM_EXTISP_USPI_ERROR_NO                 (20611)
#define DSM_EXTISP_VCM_ERROR_NO                 (20612)
#define DSM_EXTISP_INTERRUPT_ERROR_NO                 (20613)
#define DSM_EXTISP_COMMONFUNC_ERROR_NO                 (20614)
#define DSM_EXTISP_A3_ERROR_NO                 (20615)
#define DSM_EXTISP_PIPE_ERROR_NO                 (20616)
#define DSM_EXTISP_RDN_ERROR_NO                 (20617)
#define DSM_EXTISP_TXLM_ERROR_NO                 (20618)
#define DSM_EXTISP_MTX_ERROR_NO                 (20619)
#define DSM_EXTISP_MRX_ERROR_NO                 (20620)
#define DSM_EXTISP_FEC0_ERROR_NO                 (20621)
#define DSM_EXTISP_SENSOR_ERROR_NO                 (20622)
#define DSM_EXTISP_FEC1_ERROR_NO                 (20623)
#define DSM_EXTISP_CAP_ERROR_NO                 (20624)
#define DSM_EXTISP_OTHER_ERROR_NO              (20625)
#define DSM_CSI_MIPI0_ERROR_NO                 (20626)
#define DSM_CSI_MIPI1_ERROR_NO                 (20627)

/************DMD NUMBER FOR WIFI BEGIN************/
#define DSM_WIFI_MODULE_INIT_ERROR          (20700)
#define DSM_WIFI_CMD52_ERROR                (20702)
#define DSM_WIFI_CMD53_ERROR                (20703)
/*wifi open*/
#define DSM_WIFI_SDIO_RESET_COMM_ERROR      (20704)
#define DSM_WIFI_SDIO_PROBE_ATTACH_ERROR    (20705)
#define DSM_WIFI_SDIO_FIRMWARE_DL_ERROR     (20706)
#define DSM_WIFI_DHD_DEV_INIT_IOCTL_ERROR   (20707)
/*wifi scan*/
#define DSM_WIFI_WLC_SET_PASSIVE_SCAN_ERROR (20708)
#define DSM_WIFI_WLC_SCAN_ERROR             (20709)
#define DSM_WIFI_WLC_SET_SCANSUPPRESS_ERROR (20710)
#define DSM_WIFI_WLC_GET_CHANNEL_ERROR      (20711)
#define DSM_WIFI_WLC_SCAN_RESULTS_ERROR     (20712)
/*wifi connect*/
#define DSM_WIFI_WLC_DISASSOC_ERROR         (20713)
#define DSM_WIFI_WLC_SET_SSID_ERROR         (20714)
#define DSM_WIFI_SET_CIPHER_ERROR           (20715)
#define DSM_WIFI_SET_KEY_MGMT_ERROR         (20716)
#define DSM_WIFI_SET_SHAREDKEY_ERROR        (20717)
#define DSM_WIFI_OPEN_ERROR                 (20718)
/************DMD NUMBER FOR WIFI END**************/
#define DSM_RECOVERY_ERROR_NO			(20900)
#define DSM_NFC_I2C_WRITE_ERROR_NO          (30300)
#define DSM_NFC_I2C_READ_ERROR_NO           (30301)
#define DSM_NFC_CLK_ENABLE_ERROR_NO         (30302)
#define DSM_NFC_I2C_WRITE_EOPNOTSUPP_ERROR_NO         (30303)
#define DSM_NFC_I2C_READ_EOPNOTSUPP_ERROR_NO           (30304)
#define DSM_NFC_I2C_WRITE_EREMOTEIO_ERROR_NO           (30305)
#define DSM_NFC_I2C_READ_EREMOTEIO_ERROR_NO             (30306)
#define DSM_NFC_RD_I2C_WRITE_ERROR_NO                         (30307)
#define DSM_NFC_RD_I2C_READ_ERROR_NO                           (30308)
#define DSM_NFC_RD_I2C_WRITE_EOPNOTSUPP_ERROR_NO   (30309)
#define DSM_NFC_RD_I2C_READ_EOPNOTSUPP_ERROR_NO     (30310)
#define DSM_NFC_RD_I2C_WRITE_EREMOTEIO_ERROR_NO      (30311)
#define DSM_NFC_RD_I2C_READ_EREMOTEIO_ERROR_NO        (30312)

#define DSM_FINGERPRINT_RESET_ERROR_NO         (21000)
#define DSM_FINGERPRINT_SPISYNC_ERROR_NO         (21001)
#define DSM_FINGERPRINT_IRQ_AFTER_CMD_ERROR_NO         (21002)
#define DSM_FINGERPRINT_TEST_DEADPIXELS_ERROR_NO         (21003)
#define DSM_FINGERPRINT_SPI_ESHUTDOWN_ERROR_NO        (21004)//-ESHUTDOWN
#define DSM_FINGERPRINT_SPI_EBUSY_ERROR_NO                  (21005)//-EBUSY
#define DSM_FINGERPRINT_SPI_EINVAL_ERROR_NO                 (21006)//-EINVAL
#define DSM_FINGERPRINT_SPI_EIO_ERROR_NO                       (21007)//-EIO
#define DSM_FINGERPRINT_SPI_EINPROGRESS_ERROR_NO      (21008)//-EINPROGRESS
#define DSM_FINGERPRINT_DIFF_DEADPIXELS_ERROR_NO      (21009)//FPC_1020_MIN_CHECKER_DIFF_ERROR
#define DSM_FINGERPRINT_MANY_DEADPIXELS_ERROR_NO     (21010)//FPC_1020_TOO_MANY_DEADPIXEL_ERROR

#define DSM_BT_INIT_ABNORMAL_ERROR_NO (30205)
#define DSM_BT_ELECTRIC_ABNORMAL_ERROR_NO (30206)
#define DSM_BT_SLEEP_WAKEUP_ERROR_NO (30207)
#define DSM_SPI_WRITE_ACK_ERROR_NO                   (21400)
#define DSM_SPI_READ_ACK_ERROR_NO                   (DSM_SPI_WRITE_ACK_ERROR_NO+1)
#define DSM_SPI_80_ACK_ERROR_NO                       (DSM_SPI_WRITE_ACK_ERROR_NO+2)
#define DSM_SPI_SYNC_ERROR_NO                           (DSM_SPI_WRITE_ACK_ERROR_NO + 3)
#define DSM_SPI_DOWN_ERROR_NO                          (DSM_SPI_WRITE_ACK_ERROR_NO + 4)
#define DSM_SPI_PORT_BUSY_NO                             (DSM_SPI_WRITE_ACK_ERROR_NO + 5)
#define DSM_SPI_DATA_READ_ERROR_NO                (DSM_SPI_WRITE_ACK_ERROR_NO + 6)
#define DSM_SPI_DATA_DROP_NO                            (DSM_SPI_WRITE_ACK_ERROR_NO + 7)
#define DSM_SPI_AUTO_READY_ERROR_NO              (DSM_SPI_WRITE_ACK_ERROR_NO + 8)
#define DSM_SPI_KZALLOC_FAILED_NO                    (DSM_SPI_WRITE_ACK_ERROR_NO + 9)
#define DSM_SPI_ALLOC_SKB_FAILED_NO                (DSM_SPI_WRITE_ACK_ERROR_NO + 10)
#define DSM_SPI_DOWN_RETRY_MAX_NO                 (DSM_SPI_WRITE_ACK_ERROR_NO + 11)
#define DSM_SPI_SYNC_ERR_MAX_NO                      (DSM_SPI_WRITE_ACK_ERROR_NO + 12)
#define DSM_SPI_ERROR_NO                   (21490)


struct dsm_client_ops{
	int (*poll_state) (void);
	int (*dump_func) (int type, void *buff, int size);
};

struct dsm_dev{
	const char *name;
	const char *device_name;
	const char *ic_name;
	const char *module_name;
	struct dsm_client_ops *fops;
	size_t buff_size;
};

struct dsm_client{
	char client_name[CLIENT_NAME_LEN];
	char device_name[DSM_MAX_DEVICE_NAME_LEN];
	char ic_name[DSM_MAX_IC_NAME_LEN];
	char module_name[DSM_MAX_MODULE_NAME_LEN];
	int client_id;
	int error_no;
	unsigned long buff_flag;
	struct dsm_client_ops *cops;
	wait_queue_head_t waitq;
	size_t read_size;
	size_t used_size;
	size_t buff_size;
	u8 dump_buff[];
};

#ifdef CONFIG_HUAWEI_DSM
struct dsm_client *dsm_register_client (struct dsm_dev *dev);
int dsm_client_ocuppy(struct dsm_client *client);
int dsm_client_unocuppy(struct dsm_client *client);
int dsm_client_record(struct dsm_client *client, const char *fmt, ...);
int dsm_client_copy(struct dsm_client *client, void *src, int sz);
void dsm_client_notify(struct dsm_client *client, int error_no);
#else
static inline struct dsm_client *dsm_register_client (struct dsm_dev *dev)
{
	return NULL;
}
static inline int dsm_client_ocuppy(struct dsm_client *client)
{
	return 1;
}
static inline int dsm_client_unocuppy(struct dsm_client *client)
{
	return 0;
}

static inline int dsm_client_record(struct dsm_client *client, const char *fmt, ...)
{
	return 0;
}
static inline int dsm_client_copy(struct dsm_client *client, void *src, int sz)
{
	return 0;
}
static inline void dsm_client_notify(struct dsm_client *client, int error_no)
{
	return;
}
#endif

#endif
