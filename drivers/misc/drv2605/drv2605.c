#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/slab.h>
#include <linux/types.h>
#include <linux/fs.h>
#include <linux/cdev.h>
#include <linux/i2c.h>
#include <linux/semaphore.h>
#include <linux/device.h>
#include <linux/syscalls.h>
#include <asm/uaccess.h>
#include <linux/gpio.h>
#include <linux/sched.h>
#include <linux/spinlock_types.h>
#include <linux/spinlock.h>
#include <linux/delay.h>
#include <linux/jiffies.h>
#include <linux/timer.h>
#include <linux/workqueue.h>
#include <../../../drivers/staging/android/timed_output.h>
#include <linux/hrtimer.h>
#include <linux/err.h>
#include <linux/mutex.h>
#include <linux/clk.h>
#include <linux/wakelock.h>
#include <linux/of.h>
#include <linux/of_gpio.h>
#include "drv2605.h"
#ifdef CONFIG_HUAWEI_HW_DEV_DCT
#include <linux/hw_dev_dec.h>
#endif

#define GPIO_LEVEL_LOW 0
#define GPIO_LEVEL_HIGH 1
/*
 * DRV2605 built-in effect bank/library
 */
#define EFFECT_LIBRARY LIBRARY_F

#define MAX_REVISION_STRING_SIZE 20
#define GUARANTEE_AUTOTUNE_BRAKE_TIME  1
static struct i2c_client* client_temp = NULL;
static bool g_bAmpEnabled = false;

#ifndef ACTUATOR_NAME
#define ACTUATOR_NAME "act???"
#endif

/*
 * Rated Voltage:
 * Calculated using the formula r = v * 255 / 5.6
 * where r is what will be written to the register
 * and v is the rated voltage of the actuator

 * Overdrive Clamp Voltage:
 * Calculated using the formula o = oc * 255 / 5.6
 * where o is what will be written to the register
 * and oc is the overdrive clamp voltage of the actuator
 */

#if (EFFECT_LIBRARY == LIBRARY_A)
#define ERM_RATED_VOLTAGE               0x3E
#define ERM_OVERDRIVE_CLAMP_VOLTAGE     0x90

#elif (EFFECT_LIBRARY == LIBRARY_B)
#define ERM_RATED_VOLTAGE               0x90
#define ERM_OVERDRIVE_CLAMP_VOLTAGE     0x90

#elif (EFFECT_LIBRARY == LIBRARY_C)
#define ERM_RATED_VOLTAGE               0x90
#define ERM_OVERDRIVE_CLAMP_VOLTAGE     0x90

#elif (EFFECT_LIBRARY == LIBRARY_D)
#define ERM_RATED_VOLTAGE               0x90
#define ERM_OVERDRIVE_CLAMP_VOLTAGE     0x90

#elif (EFFECT_LIBRARY == LIBRARY_E)
#define ERM_RATED_VOLTAGE               0x90
#define ERM_OVERDRIVE_CLAMP_VOLTAGE     0x90

#else
#define ERM_RATED_VOLTAGE               0x90
#define ERM_OVERDRIVE_CLAMP_VOLTAGE     0x90
#endif

#define LRA_RATED_VOLTAGE               0x45
#define LRA_OVERDRIVE_CLAMP_VOLTAGE     0x76

#define SKIP_LRA_AUTOCAL        1
#define GO_BIT_POLL_INTERVAL    15

#if EFFECT_LIBRARY == LIBRARY_A
#define REAL_TIME_PLAYBACK_STRENGTH 0x38 // ~44% of overdrive voltage (open loop)
#elif EFFECT_LIBRARY == LIBRARY_F
#define REAL_TIME_PLAYBACK_STRENGTH 0x7F // 100% of rated voltage (closed loop)
#else
#define REAL_TIME_PLAYBACK_STRENGTH 0x7F // 100% of overdrive voltage (open loop)
#endif

#define MAX_TIMEOUT 10000 /* 10s */
#define DEFAULT_NAME	("vibrator")

#define YES 1
#define NO  0

#define VB_NAME_LENGTH	(20)

struct drv2605_data {
	int gpio_enable;
	int gpio_pwm;
	int max_timeout_ms;
	volatile int should_stop;
	struct i2c_client *client;
	struct timed_output_dev dev;
	struct hrtimer timer;
	struct mutex lock;
	struct work_struct work;
	struct work_struct work_play_eff;
	unsigned char sequence[8];
};

struct drv2605_pdata {
	int gpio_enable;
	int gpio_pwm;
	int max_timeout_ms;
	char *name;
};

static struct drv2605_pdata *pdata = NULL;

static char g_effect_bank = EFFECT_LIBRARY;
static int device_id = -1;
static char read_val;
static int vibrator_is_playing = NO;

static const unsigned char ERM_autocal_sequence[] = {
    MODE_REG,                       AUTO_CALIBRATION,
    REAL_TIME_PLAYBACK_REG,         REAL_TIME_PLAYBACK_STRENGTH,
    LIBRARY_SELECTION_REG,          EFFECT_LIBRARY,
    WAVEFORM_SEQUENCER_REG,         WAVEFORM_SEQUENCER_DEFAULT,
    WAVEFORM_SEQUENCER_REG2,        WAVEFORM_SEQUENCER_DEFAULT,
    WAVEFORM_SEQUENCER_REG3,        WAVEFORM_SEQUENCER_DEFAULT,
    WAVEFORM_SEQUENCER_REG4,        WAVEFORM_SEQUENCER_DEFAULT,
    WAVEFORM_SEQUENCER_REG5,        WAVEFORM_SEQUENCER_DEFAULT,
    WAVEFORM_SEQUENCER_REG6,        WAVEFORM_SEQUENCER_DEFAULT,
    WAVEFORM_SEQUENCER_REG7,        WAVEFORM_SEQUENCER_DEFAULT,
    WAVEFORM_SEQUENCER_REG8,        WAVEFORM_SEQUENCER_DEFAULT,
    OVERDRIVE_TIME_OFFSET_REG,      0x00,
    SUSTAIN_TIME_OFFSET_POS_REG,    0x00,
    SUSTAIN_TIME_OFFSET_NEG_REG,    0x00,
    BRAKE_TIME_OFFSET_REG,          0x00,
    AUDIO_HAPTICS_CONTROL_REG,      AUDIO_HAPTICS_RECT_20MS | AUDIO_HAPTICS_FILTER_125HZ,
    AUDIO_HAPTICS_MIN_INPUT_REG,    AUDIO_HAPTICS_MIN_INPUT_VOLTAGE,
    AUDIO_HAPTICS_MAX_INPUT_REG,    AUDIO_HAPTICS_MAX_INPUT_VOLTAGE,
    AUDIO_HAPTICS_MIN_OUTPUT_REG,   AUDIO_HAPTICS_MIN_OUTPUT_VOLTAGE,
    AUDIO_HAPTICS_MAX_OUTPUT_REG,   AUDIO_HAPTICS_MAX_OUTPUT_VOLTAGE,
    RATED_VOLTAGE_REG,              ERM_RATED_VOLTAGE,
    OVERDRIVE_CLAMP_VOLTAGE_REG,    ERM_OVERDRIVE_CLAMP_VOLTAGE,
    AUTO_CALI_RESULT_REG,           DEFAULT_ERM_AUTOCAL_COMPENSATION,
    AUTO_CALI_BACK_EMF_RESULT_REG,  DEFAULT_ERM_AUTOCAL_BACKEMF,
    FEEDBACK_CONTROL_REG,           FB_BRAKE_FACTOR_3X | LOOP_RESPONSE_MEDIUM | FEEDBACK_CONTROL_BEMF_ERM_GAIN2,
    Control1_REG,                   STARTUP_BOOST_ENABLED | DEFAULT_DRIVE_TIME,
    Control2_REG,                   BIDIRECT_INPUT | AUTO_RES_GAIN_MEDIUM | BLANKING_TIME_SHORT | IDISS_TIME_SHORT,
    Control3_REG,                   ERM_OpenLoop_Enabled | NG_Thresh_2,
    AUTOCAL_MEM_INTERFACE_REG,      AUTOCAL_TIME_500MS,
    GO_REG,                         GO,
};

static const unsigned char LRA_autocal_sequence[] = {
    MODE_REG,                       AUTO_CALIBRATION,
	FEEDBACK_CONTROL_REG,         	FEEDBACK_CONTROL_MODE_LRA | FB_BRAKE_FACTOR_3X | LOOP_RESPONSE_MEDIUM,
    RATED_VOLTAGE_REG,              LRA_RATED_VOLTAGE,
    OVERDRIVE_CLAMP_VOLTAGE_REG,    LRA_OVERDRIVE_CLAMP_VOLTAGE,

    Control3_REG,                   NG_Thresh_1,
    GO_REG,                         GO,
};

#if SKIP_LRA_AUTOCAL == 1
static const unsigned char LRA_init_sequence[] = {
    MODE_REG,                       MODE_INTERNAL_TRIGGER,
    REAL_TIME_PLAYBACK_REG,         REAL_TIME_PLAYBACK_STRENGTH,
    LIBRARY_SELECTION_REG,          LIBRARY_F,
    WAVEFORM_SEQUENCER_REG,         WAVEFORM_SEQUENCER_DEFAULT,
    WAVEFORM_SEQUENCER_REG2,        WAVEFORM_SEQUENCER_DEFAULT,
    WAVEFORM_SEQUENCER_REG3,        WAVEFORM_SEQUENCER_DEFAULT,
    WAVEFORM_SEQUENCER_REG4,        WAVEFORM_SEQUENCER_DEFAULT,
    WAVEFORM_SEQUENCER_REG5,        WAVEFORM_SEQUENCER_DEFAULT,
    WAVEFORM_SEQUENCER_REG6,        WAVEFORM_SEQUENCER_DEFAULT,
    WAVEFORM_SEQUENCER_REG7,        WAVEFORM_SEQUENCER_DEFAULT,
    WAVEFORM_SEQUENCER_REG8,        WAVEFORM_SEQUENCER_DEFAULT,
    GO_REG,                         STOP,
    //OVERDRIVE_TIME_OFFSET_REG,      0x00,
    //SUSTAIN_TIME_OFFSET_POS_REG,    0x00,
    //SUSTAIN_TIME_OFFSET_NEG_REG,    0x00,
    //BRAKE_TIME_OFFSET_REG,          0x00,
    AUDIO_HAPTICS_CONTROL_REG,      AUDIO_HAPTICS_RECT_20MS | AUDIO_HAPTICS_FILTER_125HZ,
    AUDIO_HAPTICS_MIN_INPUT_REG,    AUDIO_HAPTICS_MIN_INPUT_VOLTAGE,
    AUDIO_HAPTICS_MAX_INPUT_REG,    AUDIO_HAPTICS_MAX_INPUT_VOLTAGE,
    AUDIO_HAPTICS_MIN_OUTPUT_REG,   AUDIO_HAPTICS_MIN_OUTPUT_VOLTAGE,
    AUDIO_HAPTICS_MAX_OUTPUT_REG,   AUDIO_HAPTICS_MIN_OUTPUT_VOLTAGE,
    RATED_VOLTAGE_REG,              LRA_RATED_VOLTAGE,
    OVERDRIVE_CLAMP_VOLTAGE_REG,    LRA_OVERDRIVE_CLAMP_VOLTAGE,
    AUTO_CALI_RESULT_REG,           0x06,   //DEFAULT_LRA_AUTOCAL_COMPENSATION,
    AUTO_CALI_BACK_EMF_RESULT_REG,  0xBB,	//DEFAULT_LRA_AUTOCAL_BACKEMF,
    FEEDBACK_CONTROL_REG,           0xA6,	//FEEDBACK_CONTROL_MODE_LRA | FB_BRAKE_FACTOR_2X | LOOP_RESPONSE_MEDIUM | FEEDBACK_CONTROL_BEMF_LRA_GAIN3,
    //Control1_REG,                   STARTUP_BOOST_ENABLED | DEFAULT_DRIVE_TIME,
    //Control2_REG,                   BIDIRECT_INPUT | AUTO_RES_GAIN_MEDIUM | BLANKING_TIME_SHORT | IDISS_TIME_SHORT,
    Control3_REG,                   NG_Thresh_1,	//NG_Thresh_2,
    //AUTOCAL_MEM_INTERFACE_REG,      AUTOCAL_TIME_500MS,
};
#endif

static void drv2605_write_reg_val(struct i2c_client *client, const unsigned char *data,
		unsigned int size)
{
	int i = 0;

	if (size % 2 != 0) {
		return;
	}

	while (i < size) {
		i2c_smbus_write_byte_data(client, data[i], data[i + 1]);
		i += 2;
	}
}

static void drv2605_set_go_bit(struct i2c_client *client, char val)
{
	char go[] = {
		GO_REG, val
	};

	drv2605_write_reg_val(client, go, sizeof(go));
}

static unsigned char drv2605_read_reg(struct i2c_client *client, unsigned char reg)
{
	return i2c_smbus_read_byte_data(client, reg);
}

static void drv2605_poll_go_bit(struct i2c_client *client)
{
	while (drv2605_read_reg(client, GO_REG) == GO) {
		schedule_timeout_interruptible(msecs_to_jiffies(GO_BIT_POLL_INTERVAL));
	}
}

static void drv2605_select_library(struct i2c_client *client, char lib)
{
	char library[] = {
		LIBRARY_SELECTION_REG, lib
	};
	drv2605_write_reg_val(client, library, sizeof(library));
}

static void drv2605_set_rtp_val(struct i2c_client *client, char value)
{
	char rtp_val[] = {
		REAL_TIME_PLAYBACK_REG, value
	};
	drv2605_write_reg_val(client, rtp_val, sizeof(rtp_val));

	dev_info(&client->dev, "Strength: %02X value: \n", value);
}

static void drv2605_set_waveform_sequence(struct i2c_client *client, unsigned char *seq,
		unsigned int size)
{
	unsigned char data[WAVEFORM_SEQUENCER_MAX + 1];

	if (size > WAVEFORM_SEQUENCER_MAX) {
		return;
	}

	memset(data, 0, sizeof(data));
	memcpy(&data[1], seq, size);
	data[0] = WAVEFORM_SEQUENCER_REG;

	i2c_master_send(client, data, sizeof(data));
}

static void drv2605_change_mode(struct i2c_client *client, char mode)
{
	unsigned char tmp[] = {
		MODE_REG, mode
	};

	drv2605_write_reg_val(client, tmp, sizeof(tmp));
}

static int vibrator_get_time(struct timed_output_dev *dev)
{
	struct drv2605_data *data;

	data = container_of(dev, struct drv2605_data, dev);

	if (hrtimer_active(&(data->timer))) {
		ktime_t r = hrtimer_get_remaining(&data->timer);
		return ktime_to_ms(r);
	}

	return 0;
}

static void vibrator_off(struct drv2605_data *data)
{
	if (vibrator_is_playing) {
		vibrator_is_playing = NO;

		drv2605_change_mode(data->client, MODE_STANDBY);
	}

	dev_info(&(data->client->dev), "drv2605 off!");
}

static void vibrator_enable(struct timed_output_dev *dev, int value)
{
	struct drv2605_data *data;

	data = container_of(dev, struct drv2605_data, dev);
	dev_info(&(data->client->dev), "drv2605 enable value: %d.\n", value);

	mutex_lock(&data->lock);
	hrtimer_cancel(&data->timer);
	cancel_work_sync(&data->work);

	if (value) {
		drv2605_change_mode(data->client, MODE_DEVICE_READY);
		udelay(1000);

		/* Only change the mode if not already in RTP mode; RTP input already set at init */
		if ((drv2605_read_reg(data->client, MODE_REG) & DRV260X_MODE_MASK)
			!= MODE_REAL_TIME_PLAYBACK) {
			drv2605_set_rtp_val(data->client, REAL_TIME_PLAYBACK_STRENGTH);
			drv2605_change_mode(data->client, MODE_REAL_TIME_PLAYBACK);
			vibrator_is_playing = YES;
		}

		if (value > 0) {
			if (value > data->max_timeout_ms) {
				value = data->max_timeout_ms;
			}

			hrtimer_start(&data->timer, ns_to_ktime((u64)value * NSEC_PER_MSEC),
			HRTIMER_MODE_REL);
		}
	} else {
		vibrator_off(data);
	}

	mutex_unlock(&data->lock);
}

static enum hrtimer_restart vibrator_timer_func(struct hrtimer *timer)
{
	struct drv2605_data *data;

	data = container_of(timer, struct drv2605_data, timer);
	schedule_work(&data->work);
	return HRTIMER_NORESTART;
}

static void vibrator_work(struct work_struct *work)
{
	struct drv2605_data *data;

	data = container_of(work, struct drv2605_data, work);
	vibrator_off(data);
}

static void play_effect(struct work_struct *work)
{
	struct drv2605_data *data;

	data = container_of(work, struct drv2605_data, work_play_eff);

	 /* device ready and Internal trigger*/
	drv2605_change_mode(data->client, MODE_DEVICE_READY);
	udelay(1000);
	drv2605_set_waveform_sequence(data->client, data->sequence, sizeof(data->sequence));
	drv2605_set_go_bit(data->client, GO);

	while((drv2605_read_reg(data->client, GO_REG) == GO) && (!data->should_stop)) {
		schedule_timeout_interruptible(msecs_to_jiffies(GO_BIT_POLL_INTERVAL));
	}

	drv2605_change_mode(data->client, MODE_STANDBY);
}

#if GUARANTEE_AUTOTUNE_BRAKE_TIME
#define AUTOTUNE_BRAKE_TIME 25
static VibeInt8 g_lastForce = 0;
static bool g_brake = false;

static void autotune_brake_complete(struct work_struct *work)
{
	/* new nForce value came in before workqueue terminated */
	if (g_lastForce > 0)
		return;

	/* Put hardware in standby */
	drv2605_change_mode(client_temp,MODE_STANDBY);
}

DECLARE_DELAYED_WORK(g_brake_complete, autotune_brake_complete);

static struct workqueue_struct *g_workqueue;

#endif

int ImmVibeSPI_ForceOut_AmpDisable(VibeUInt8 nActuatorIndex)
{
	if (g_bAmpEnabled)
	{
		printk(KERN_ERR "tspdrv:ImmVibeSPI_ForceOut_AmpDisable.\n");

		/* Set the force to 0 */
		drv2605_set_rtp_val(client_temp,0);

#if GUARANTEE_AUTOTUNE_BRAKE_TIME
		/* if a brake signal arrived from daemon, let the chip stay on
		* extra time to allow it to brake */
		if (g_brake && g_workqueue)
		{
			queue_delayed_work(g_workqueue,
	                           &g_brake_complete,
	                           msecs_to_jiffies(AUTOTUNE_BRAKE_TIME));
		}
		else /* disable immediately (smooth effect style) */
#endif
		{
			/* Put hardware in standby via i2c */
			drv2605_change_mode(client_temp,MODE_STANDBY);
		}

		g_bAmpEnabled = false;
	}
	return 0;
}

/*
** Called to enable amp (enable output force)
*/
int ImmVibeSPI_ForceOut_AmpEnable(VibeUInt8 nActuatorIndex)
{
	if (!g_bAmpEnabled)
	{
		printk(KERN_ERR "tspdrv:ImmVibeSPI_ForceOut_AmpEnable.\n");

#if GUARANTEE_AUTOTUNE_BRAKE_TIME
		cancel_delayed_work_sync(&g_brake_complete);
#endif

		drv2605_change_mode(client_temp,MODE_DEVICE_READY);
		udelay(1000);

		drv2605_change_mode(client_temp, MODE_REAL_TIME_PLAYBACK);
		g_bAmpEnabled = true;
	}
	return 0;
}

/*
** Called by the real-time loop to set the force
*/
int ImmVibeSPI_ForceOut_SetSamples(VibeUInt8 nActuatorIndex, VibeUInt16 nOutputSignalBitDepth, VibeUInt16 nBufferSizeInBytes, VibeInt8* pForceOutputBuffer)
{
#if GUARANTEE_AUTOTUNE_BRAKE_TIME
	VibeInt8 force = pForceOutputBuffer[0];
	if (force > 0 && g_lastForce <= 0)
	{
		g_brake = false;
		ImmVibeSPI_ForceOut_AmpEnable(nActuatorIndex);
	}
	else if (force <= 0 && g_lastForce > 0)
	{
		g_brake = force < 0;
		ImmVibeSPI_ForceOut_AmpDisable(nActuatorIndex);
	}

	if (g_lastForce != force)
	{
		/* AmpDisable sets force to zero, so need to here */
		if (force > 0)
			drv2605_set_rtp_val(client_temp, pForceOutputBuffer[0]);
		g_lastForce = force;
	}
#else
	drv2605_set_rtp_val(client_temp, pForceOutputBuffer[0]);
#endif
	return 0;
}

/*
** Called to set force output frequency parameters
*/
int ImmVibeSPI_ForceOut_SetFrequency(VibeUInt8 nActuatorIndex, VibeUInt16 nFrequencyParameterID, VibeUInt32 nFrequencyParameterValue)
{
	if (nActuatorIndex != 0)
		return 0;

	switch (nFrequencyParameterID)
	{
		case VIBE_KP_CFG_FREQUENCY_PARAM1:
			/* Update frequency parameter 1 */
			break;

		case VIBE_KP_CFG_FREQUENCY_PARAM2:
			/* Update frequency parameter 2 */
			break;

		case VIBE_KP_CFG_FREQUENCY_PARAM3:
			/* Update frequency parameter 3 */
			break;

		case VIBE_KP_CFG_FREQUENCY_PARAM4:
			/* Update frequency parameter 4 */
			break;

		case VIBE_KP_CFG_FREQUENCY_PARAM5:
			/* Update frequency parameter 5 */
			break;

		case VIBE_KP_CFG_FREQUENCY_PARAM6:
			/* Update frequency parameter 6 */
			break;
		default:
			printk(KERN_ERR "unknow nFrequencyParameterID.\n");
			break;
	}
	return 0;
}

/*
** Called to get the device name (device name must be returned as ANSI char)
*/
int ImmVibeSPI_Device_GetName(VibeUInt8 nActuatorIndex, char *szDevName, int nSize)
{
	char szRevision[MAX_REVISION_STRING_SIZE];

	if ((!szDevName) || (nSize < 1))
		return -1;

	dev_info(&client_temp->dev, "ImmVibeSPI_Device_GetName.\n");

	/* Append revision number to the device name */
	snprintf(szRevision, MAX_REVISION_STRING_SIZE, "r%d %s", (drv2605_read_reg(client_temp, SILICON_REVISION_REG) & SILICON_REVISION_MASK), ACTUATOR_NAME);
	if ((strlen(szRevision) + strlen(szDevName)) < nSize-1)
		strcat(szDevName, szRevision);

	szDevName[nSize - 1] = '\0'; /* make sure the string is NULL terminated */

	return 0;
}

static int drv2605_parse_dt(struct device *dev, struct drv2605_pdata *pdata)
{
	int rc, temp;
	enum of_gpio_flags flags;

	rc = of_property_read_string(dev->of_node, "ti,label", &pdata->name);
	/* set vibrator as default name */
	if (rc < 0) {
		pdata->name = kmalloc(sizeof(DEFAULT_NAME), GFP_KERNEL);
		strncpy(pdata->name, DEFAULT_NAME, sizeof(DEFAULT_NAME));
	}

	rc = of_property_read_u32(dev->of_node, "ti,max-timeout-ms", &temp);
	/* configure minimum idle timeout */
	if (rc < 0) {
		pdata->max_timeout_ms = MAX_TIMEOUT;
	} else {
		pdata->max_timeout_ms = (int )temp;
	}

	dev_info(dev, "max timedout_ms:%d.\n", pdata->max_timeout_ms);
	pdata->gpio_enable = of_get_named_gpio(dev->of_node, "gpio-enable", 0);
	pdata->gpio_pwm = of_get_named_gpio(dev->of_node, "gpio-pwm", 0);

	return 0;
}

static ssize_t vibrator_dbc_test_store(struct device *dev, struct device_attribute *attr, const char *buf, size_t count)
{
	struct i2c_client *client = NULL;
	unsigned char erm_mode = 0,erm_loop = 0;
	uint64_t value = 0;
	int error = 0;
	char device_ready[2]={0}, erm_select[2] = {0}, erm_openloop[2]={0}, overdriver_val[2] = {0};
	char rtp_out1[2]={0}, rtp_out2[2] = {0}, mode_open[2]={0}, mode_close[2] = {0};


	dev_info(dev, "start vibrator_dbc_test!\n");
	client = container_of(dev,struct i2c_client, dev);

	drv2605_change_mode(client, MODE_DEVICE_READY);
	udelay(1000);

	erm_mode = drv2605_read_reg(client, FEEDBACK_CONTROL_REG);
	erm_loop = drv2605_read_reg(client, Control3_REG);
	dev_info(dev, "ERM default erm_mode:%d,erm_loop:%d\n",erm_mode,erm_loop);
	erm_mode = 0x7f&erm_mode;
	erm_loop = 0x20|erm_loop;
	dev_info(dev, "ERM set erm_mode:%d,erm_loop:%d\n",erm_mode,erm_loop);

	device_ready[0] = MODE_REG;
	device_ready[1] = 0x00;

	erm_select[0] = FEEDBACK_CONTROL_REG;
	erm_select[1] = erm_mode;

	erm_openloop[0] = Control3_REG;
	erm_openloop[1] = erm_loop;

	overdriver_val[0] = OVERDRIVE_CLAMP_VOLTAGE_REG;
	overdriver_val[1] = 0xff;

	rtp_out1[0] = REAL_TIME_PLAYBACK_REG;
	rtp_out1[1] = 0x7f;

	rtp_out2[0] = REAL_TIME_PLAYBACK_REG;
	rtp_out2[1] = 0x81;

	mode_open[0] = MODE_REG;
	mode_open[1] = 0x05;

	mode_close[0] = MODE_REG;
	mode_close[1] = 0x00;

	//drv2605_write_reg_val(client, device_ready, sizeof(device_ready));
	drv2605_write_reg_val(client, erm_select, sizeof(erm_select));
	drv2605_write_reg_val(client, erm_openloop, sizeof(erm_openloop));
	drv2605_write_reg_val(client, overdriver_val, sizeof(overdriver_val));

	if (strict_strtoull(buf, 16, &value)){
		dev_info(dev, "vibrator dbc test read value error\n");
		error = -EINVAL;
		goto out;
	}

	if (value == 1) {
		dev_info(dev, "vibrator dbc test out+\n");
		drv2605_write_reg_val(client, rtp_out1, sizeof(rtp_out1));
		drv2605_write_reg_val(client, mode_open, sizeof(mode_open));
	}else if(value == 0){
		dev_info(dev, "vibrator dbc test close\n");
		drv2605_write_reg_val(client, mode_close, sizeof(mode_close));
		drv2605_change_mode(client, MODE_STANDBY);
	}else if(value == 2){
		dev_info(dev, "vibrator dbc test out-\n");
		drv2605_write_reg_val(client, rtp_out2, sizeof(rtp_out2));
		drv2605_write_reg_val(client, mode_open, sizeof(mode_open));
	}else{
		dev_info(dev, "vibrator dbc test value is invalid:%d\n",value);
	}
	error = count;
out:
	return error;
}

static DEVICE_ATTR(vibrator_dbc_test, S_IRUSR|S_IWUSR, NULL, vibrator_dbc_test_store);

static struct attribute *vb_attributes[] = {
	&dev_attr_vibrator_dbc_test.attr,
	NULL
};

static const struct attribute_group vb_attr_group = {
	.attrs = vb_attributes,
};

static int drv2605_probe(struct i2c_client *client, const struct i2c_device_id *id)
{
	char status = 0;
	int rc = 0,ret = 0;
	struct drv2605_data *data;


	if (!i2c_check_functionality(client->adapter, I2C_FUNC_I2C)) {
		dev_err(&client->dev, "i2c is not supported\n");
		return -EIO;
	}

       client_temp = client;
	if (client->dev.of_node) {
		pdata = devm_kzalloc(&client->dev, sizeof(struct drv2605_pdata), GFP_KERNEL);
		if (!pdata) {
			dev_err(&client->dev, "unable to allocate pdata\n");
			return -ENOMEM;
		}

		/* parse DT */
		rc = drv2605_parse_dt(&client->dev, pdata);
		if (rc) {
			devm_kfree(&client->dev, pdata);
			dev_err(&client->dev, "DT parsing failed\n");
			return -EIO;
		}
	} else {
		return -EINVAL;
	}

	data = devm_kzalloc(&client->dev, sizeof(struct drv2605_data), GFP_KERNEL);
	if (!data) {
		dev_err(&client->dev, "unable to allocate memory\n");
		devm_kfree(&client->dev, pdata);
		return -ENOMEM;
	}

	mutex_init(&data->lock);
	mutex_lock(&data->lock);

	data->gpio_enable = pdata->gpio_enable;
	data->gpio_pwm = pdata->gpio_pwm;
	data->max_timeout_ms = pdata->max_timeout_ms;

	i2c_set_clientdata(client, data);

	data->client = client;
	if (gpio_request(data->gpio_enable, "vibrator-en") < 0) {
		dev_err(&client->dev, "drv2605: error requesting enable gpio!\n");
		goto destroy_mutex;
	}

	if (gpio_request(data->gpio_pwm, "vibrator-pwm") < 0) {
		dev_err(&client->dev, "drv2605: error requesting pwm gpio!\n");
		goto free_gpio_enable;
	}

	ret = sysfs_create_group(&client->dev.kobj, &vb_attr_group);
	if (ret) {
		dev_err(&client->dev, "unable create vibrator's sysfs,DBC check IC fail\n");
	}

	hrtimer_init(&data->timer, CLOCK_MONOTONIC, HRTIMER_MODE_REL);
	data->timer.function = vibrator_timer_func;
	INIT_WORK(&data->work, vibrator_work);
	INIT_WORK(&data->work_play_eff, play_effect);

	data->dev.name = pdata->name;
	data->dev.get_time = vibrator_get_time;
	data->dev.enable = vibrator_enable;

	mutex_unlock(&data->lock);

	rc = timed_output_dev_register(&data->dev);
	if (rc) {
		dev_err(&client->dev, "unable to register with timed_output\n");
		goto unregister_timed_output_dev;
	}

	/* enable the drv2605 chip */
	gpio_direction_output(data->gpio_enable, GPIO_LEVEL_HIGH);
	udelay(30);

#if	SKIP_LRA_AUTOCAL ==	1
	if (g_effect_bank != LIBRARY_F) {
		drv2605_write_reg_val(data->client, ERM_autocal_sequence, sizeof(ERM_autocal_sequence));
	} else {
		drv2605_write_reg_val(data->client, LRA_init_sequence, sizeof(LRA_init_sequence));
	}
#else
	if (g_effect_bank == LIBRARY_F) {
		drv2605_write_reg_val(data->client, LRA_autocal_sequence,	sizeof(LRA_autocal_sequence));
	} else {
		drv2605_write_reg_val(data->client, ERM_autocal_sequence, sizeof(ERM_autocal_sequence));
	}
#endif

	/* Choose default effect library */
	drv2605_select_library(data->client, g_effect_bank);

	drv2605_change_mode(data->client, MODE_STANDBY);

#if GUARANTEE_AUTOTUNE_BRAKE_TIME
    g_workqueue = create_workqueue("tspdrv_workqueue");
#endif

#ifdef CONFIG_HUAWEI_HW_DEV_DCT
	set_hw_dev_flag(DEV_I2C_VIBRATOR_LRA);
#endif

	dev_info(&client->dev, "drv2605 probe succeeded.\n");

	return 0;

unregister_timed_output_dev:
	timed_output_dev_unregister(&data->dev);
	sysfs_remove_group(&client->dev.kobj, &vb_attr_group);
	hrtimer_cancel(&data->timer);
	gpio_free(data->gpio_pwm);
free_gpio_enable:
	gpio_free(data->gpio_enable);
destroy_mutex:
	mutex_destroy(&data->lock);
	devm_kfree(&client->dev, data);
	devm_kfree(&client->dev, pdata);

	return rc;
}

static int drv2605_remove(struct i2c_client *client)
{
	struct drv2605_data *data = i2c_get_clientdata(client);

#if GUARANTEE_AUTOTUNE_BRAKE_TIME
	if (g_workqueue)
	{
		destroy_workqueue(g_workqueue);
		g_workqueue = 0;
	}
#endif

	mutex_destroy(&data->lock);
	timed_output_dev_unregister(&data->dev);
	sysfs_remove_group(&client->dev.kobj, &vb_attr_group);
	hrtimer_cancel(&data->timer);
	cancel_work_sync(&data->work);
	cancel_work_sync(&data->work_play_eff);

	return 0;
}

static const struct i2c_device_id drv2605_id_table[] = {
		{"drv2605", 0},
		{ },
};
MODULE_DEVICE_TABLE(i2c, drv2605_id_table);

static const struct of_device_id drv2605_of_id_table[] = {
		{.compatible = "ti,drv2605"},
		{ },
};

static struct i2c_driver drv2605_i2c_driver = {
		.driver = {
			.name = "drv2605",
			.owner = THIS_MODULE,
			.of_match_table = drv2605_of_id_table,
		},
		.probe = drv2605_probe,
		.remove = drv2605_remove,
		.id_table = drv2605_id_table,
};

module_i2c_driver(drv2605_i2c_driver);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Huawei Corp.");
MODULE_DESCRIPTION("Driver for "DEVICE_NAME);
