/* Copyright (c) 2012-2013, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#include <linux/of.h>
#include <linux/module.h>
#include <linux/workqueue.h>
#include <linux/delay.h>
#include <linux/types.h>
#include <linux/list.h>
#include <linux/ioctl.h>
#include <linux/spinlock.h>
#include <linux/proc_fs.h>
#include <linux/atomic.h>
#include <linux/wait.h>
#include <linux/poll.h>
#include <linux/videodev2.h>
#include <linux/iommu.h>
#include <linux/platform_device.h>
#include <media/v4l2-fh.h>
#include <linux/interrupt.h>
#include <linux/clk.h>
#include <linux/regulator/consumer.h>
#include <linux/regulator/driver.h>
#include <linux/regulator/machine.h>
#include <linux/pinctrl/consumer.h>


#include "hisi_camera.h"
#include "../hisi_cam_module.h"
#include "../io/hisi_isp_io.h"
#include "isp_ops.h"
#include "../sensor/hisi_sensor.h"
#include "../cci/hisi_cci.h"
#include "../flash/hisi_flash.h"

extern struct hisi_sensor_ctrl_t hisi_s_ctrl_0;
extern struct hisi_sensor_ctrl_t hisi_s_ctrl_1;

#define SENSOR_EXPO_EFFECT_DELAY 2

#define IRQ_TWO_TIME_BUGFIX 1
static isp_hw_data_t isp_hw_data;
static hisi_eg_ctrl_t hisi_eg_ctrl;


#define FIRMWARE_MEM_SIZE   (200*1024)
static u8 *isp_firmware_addr;
static u32 isp_firmware_size;

struct workqueue_struct *flash_eof_work_queue;
struct work_struct flash_eof_work;

static void aec_cmd_tasklet(unsigned long arg);
DECLARE_TASKLET(isr_aec_tasklet, aec_cmd_tasklet, (unsigned long) 0);
struct timeval tv[2];
struct timeval ts[2];
static void host_ae_tasklet(unsigned long data);
DECLARE_TASKLET(isr_host_ae_tasklet, host_ae_tasklet, (unsigned long) 0);

static void host_ae_tasklet(unsigned long data)
{
	struct hisi_sensor_t *sensor = hisi_eg_ctrl.sensor;
	struct expo_gain_seq *me_seq = &hisi_eg_ctrl.me_seq;
	int index = hisi_eg_ctrl.seq_index;

	if(!sensor) {
		cam_err("%s, sensor pointer is NULL!", __func__);
		return;
	}

	do_gettimeofday(&ts[0]);

	if (index < me_seq->seq_size) {
		if (0 == index) {
			sensor->func_tbl->sensor_set_hts(sensor, me_seq->hts);
			sensor->func_tbl->sensor_set_vts(sensor, me_seq->vts);

			if (sensor->func_tbl->sensor_set_expo_gain != NULL)
				sensor->func_tbl->sensor_set_expo_gain(sensor,
					me_seq->expo[index], me_seq->gain[index], true);

		} else {
			if (sensor->func_tbl->sensor_set_expo_gain != NULL)
				sensor->func_tbl->sensor_set_expo_gain(sensor,
					me_seq->expo[index], me_seq->gain[index], false);
		}
	}

	hisi_eg_ctrl.seq_index++;
	do_gettimeofday(&ts[1]);
	cam_info("tasklet used %dus",
		(int)((ts[1].tv_sec - ts[0].tv_sec)*1000000 + (ts[1].tv_usec - ts[0].tv_usec)));
}

static void flash_eof_turn_on(struct work_struct *work)
{
	hisi_flash_actual_turn_on();
}

int ispv3_flash_work_init(void)
{
	flash_eof_work_queue = create_singlethread_workqueue("flash_eof_work");
	if (!flash_eof_work_queue) {
		cam_err("create workqueue is failed in %s function at line#%d\n", __func__, __LINE__);
		return -1;
	}
	INIT_WORK(&flash_eof_work, flash_eof_turn_on);
	return 0;
}

int ispv3_flash_work_deinit(void)
{
	destroy_workqueue(flash_eof_work_queue);
	return 0;
}

static int wait_fw_load_timeout(int time_out)
{
	long jiffies = 0;

	jiffies = msecs_to_jiffies(time_out);

	if (down_timeout(&isp_hw_data.sem_cmd_done, jiffies)) {
		cam_err("MCU not respond when downloading firmware.\n");
		return -ETIME;
	} else if (GETREG8(COMMAND_FINISHED) != CMD_FIRMWARE_DOWNLOAD) {
		cam_err("COMMAND_FINISHED[%d] not is cmd firmware download.\n", GETREG8(COMMAND_FINISHED));
		return -EINVAL;
	} else {
		cam_info("firmware download successfully.\n");
	}

	return 0;
}

#if IRQ_TWO_TIME_BUGFIX

#define REG_SHIFT_WRITE_DONE	1

typedef  enum {
	PORT0_DONE = 0,
	PORT1_DONE,
	PORT2_DONE,
	PORT3_DONE,
	PORT_MAX,
}irq_port_done;

static long long int now_time[PORT_MAX], last_time[PORT_MAX];

void init_irq_done_time(void)
{
	memset(now_time, 0x0, sizeof(now_time));
	memset(last_time, 0x0, sizeof(last_time));
}

inline void check_done_time(u8 *val_mac, irq_port_done port_done)
{
	struct timeval time_val;
	long long int  time_gap;
	do_gettimeofday(&time_val);
	now_time[port_done]  = (long long)time_val.tv_sec * 1000000L + (long long)time_val.tv_usec;
	time_gap = now_time[port_done] - last_time[port_done];
	if( time_gap < 10000LL) {
		//cam_info("IRQ_PORT0_WRITE_DONE time between now and last: %lld us", time_gap);
		(*val_mac) &= ~(1 << REG_SHIFT_WRITE_DONE);
	}
	last_time[port_done] = now_time[port_done];
}
#endif

//#define AP_WRITE_AE_TIME_PRINT
static void aec_sensor_handle(int flow, struct hisi_sensor_t *sensor)
{
	int interrupt_type;
	u32 expo;
	u16 gain;

#ifdef AP_WRITE_AE_TIME_PRINT
	struct timeval tv_start, tv_end;
	do_gettimeofday(&tv_start);
#endif

	interrupt_type = GETREG8(REG_FW_AE_INT_TYPE(flow));

	expo = get_writeback_expo(flow);
	gain = get_writeback_gain(flow);

	cam_debug("enter %s ,expo 0x%x, gain 0x%x, sensor_name %s, interrupt_type 0x%x",
		__func__, expo, gain, sensor->sensor_info->name, interrupt_type);

	if (interrupt_type == CMD_WRITEBACK_EXPO_GAIN ||
		interrupt_type == CMD_WRITEBACK_EXPO ||
		interrupt_type == CMD_WRITEBACK_GAIN) {
			SETREG8(REG_HOST_HOLD_FLAG(flow), SCCB_HOST_UNHOLD_FLAG);
			SETREG8(REG_SCCB_BUS_MUTEX(flow), SCCB_MASTER_UNLOCK);
			if (GETREG8(REG_FW_AE_SWITCH(flow)) == 0x0 && sensor->func_tbl->sensor_set_expo_gain) {
				sensor->func_tbl->sensor_set_expo_gain(sensor, expo, gain, false);
			}
	}

	SETREG8(REG_FW_AE_INT_TYPE(flow), 0);

#ifdef AP_WRITE_AE_TIME_PRINT
	do_gettimeofday(&tv_end);
	cam_notice("expo 0x%x, gain 0x%x, cmdid 0x%x, used %dus",
		expo, gain, interrupt_type,
		(int)((tv_end.tv_sec - tv_start.tv_sec)*1000000 + (tv_end.tv_usec - tv_start.tv_usec)));
#endif

	return;
}

static void aec_cmd_tasklet(unsigned long arg)
{
	int flow;
	struct hisi_sensor_t *sensor = NULL;

	if (GETREG8(REG_FW_AE_INT_TYPE(0)) != 0) {
		flow = 0;
		sensor = hisi_s_ctrl_0.sensor;
		if (sensor != NULL) {
			aec_sensor_handle(flow, sensor);
		} else {
			SETREG8(REG_FW_AE_INT_TYPE(flow), 0);
		}
	}

	if (GETREG8(REG_FW_AE_INT_TYPE(1)) != 0) {
		flow = 1;
		sensor = hisi_s_ctrl_1.sensor;
		if (sensor != NULL) {
			aec_sensor_handle(flow, sensor);
		} else {
			SETREG8(REG_FW_AE_INT_TYPE(flow), 0);
		}
	}

	return;
}

static irqreturn_t isp_irq_handler(int irq, void *dev_id)
{
	unsigned long lock_flags;
	u8 val_level1[4];
	u8 val_mac1[4];
	u8 val_mac2[4];
	u8 val_mac3[4];
	u8 temp;
	int index;
	u8 cmd_result = 0;
	u8 cmd_done = 0;
	int eof_trigger;
	struct hisi_sensor_t *sensor = NULL;
	struct expo_gain_seq *me_seq = &hisi_eg_ctrl.me_seq;
	sensor = hisi_eg_ctrl.sensor;
	do_gettimeofday(&tv[0]);

	if (!isp_hw_data.poll_start) {
		val_level1[0] = GETREG8_ISPHW(REG_ISP_INT_STAT_1);
		up(&isp_hw_data.sem_cmd_done);
		return IRQ_HANDLED;
	}

	spin_lock_irqsave(&isp_hw_data.irq_status_lock, lock_flags);

	/* first read level1 interrupts */
	val_level1[0] = GETREG8_ISPHW(REG_ISP_INT_STAT_1);
	val_level1[1] = GETREG8_ISPHW(REG_ISP_INT_STAT_2);
	val_level1[2] = GETREG8_ISPHW(REG_ISP_INT_STAT_3);
	val_level1[3] = GETREG8_ISPHW(REG_ISP_INT_STAT_4);

	/*TO DO:access irq registers here, second class irq register should go first!*/
	val_mac1[0] = GETREG8_ISPHW(REG_ISP_MAC1_INT_STAT_H);
	val_mac1[1] = GETREG8_ISPHW(REG_ISP_MAC1_INT_STAT_S0);
	val_mac1[2] = GETREG8_ISPHW(REG_ISP_MAC1_INT_STAT_S1);
	val_mac1[3] = GETREG8_ISPHW(REG_ISP_MAC1_STREAM_SELECT);

	val_mac2[0] = GETREG8_ISPHW(REG_ISP_MAC2_INT_STAT_H);
	val_mac2[1] = GETREG8_ISPHW(REG_ISP_MAC2_INT_STAT_S0);
	val_mac2[2] = GETREG8_ISPHW(REG_ISP_MAC2_INT_STAT_S1);
	val_mac2[3] = GETREG8_ISPHW(REG_ISP_MAC2_STREAM_SELECT);

	val_mac3[0] = GETREG8_ISPHW(REG_ISP_MAC3_INT_STAT_H);
	val_mac3[1] = GETREG8_ISPHW(REG_ISP_MAC3_INT_STAT_S0);
	val_mac3[2] = GETREG8_ISPHW(REG_ISP_MAC3_INT_STAT_S1);
	val_mac3[3] = GETREG8_ISPHW(REG_ISP_MAC3_STREAM_SELECT);

#if IRQ_TWO_TIME_BUGFIX
	/* read status registers again to confirm read clear */
	/* re-read mac1 */
	if (val_mac1[1] != 0) {
		temp = GETREG8_ISPHW(REG_ISP_MAC1_INT_STAT_S0);
		if ((temp | val_mac1[1]) != val_mac1[1]) {
			val_mac1[1] |= temp;
			cam_info("re-read mac1[1] 0x%x exception", temp);
		}
		if (temp != 0)
			cam_info("re-read mac1[1] 0x%x helpful", temp);
	}
	if (val_mac1[2] != 0) {
		temp = GETREG8_ISPHW(REG_ISP_MAC1_INT_STAT_S1);
		if ((temp | val_mac1[2]) != val_mac1[2]) {
			val_mac1[2] |= temp;
			cam_info("re-read mac1[2] 0x%x exception", temp);
		}
		if (temp != 0)
			cam_info("re-read mac1[2] 0x%x helpful", temp);
	}

	/* re-read mac2 */
	if (val_mac2[1] != 0) {
		temp = GETREG8_ISPHW(REG_ISP_MAC2_INT_STAT_S0);
		if ((temp | val_mac2[1]) != val_mac2[1]) {
			val_mac2[1] |= temp;
			cam_info("re-read mac2[1] 0x%x exception", temp);
		}
		if (temp != 0)
			cam_info("re-read mac2[1] 0x%x helpful", temp);
	}
	if (val_mac2[2] != 0) {
		temp = GETREG8_ISPHW(REG_ISP_MAC2_INT_STAT_S1);
		if ((temp | val_mac2[2]) != val_mac2[2]) {
			val_mac2[2] |= temp;
			cam_info("re-read mac2[2] 0x%x exception", temp);
		}
		if (temp != 0)
			cam_info("re-read mac2[2] 0x%x helpful", temp);
	}

	/* re-read mac3 */
	if (val_mac3[1] != 0) {
		temp = GETREG8_ISPHW(REG_ISP_MAC3_INT_STAT_S0);
		if ((temp | val_mac3[1]) != val_mac3[1]) {
			val_mac3[1] |= temp;
			cam_info("re-read mac3[1] 0x%x exception", temp);
		}
		if (temp != 0)
			cam_info("re-read mac3[1] 0x%x helpful", temp);
	}
	if (val_mac3[2] != 0) {
		temp = GETREG8_ISPHW(REG_ISP_MAC3_INT_STAT_S1);
		if ((temp | val_mac3[2]) != val_mac3[2]) {
			val_mac3[2] |= temp;
			cam_info("re-read mac3[2] 0x%x exception", temp);
		}
		if (temp != 0)
			cam_info("re-read mac3[2] 0x%x helpful", temp);
	}
#endif

#if IRQ_TWO_TIME_BUGFIX
	/* PORT0 WRITE_DONE: calculater the time gap between this and  last  */
	if ((val_mac1[1] >> REG_SHIFT_WRITE_DONE) & 0x1) {
		check_done_time(&val_mac1[1], PORT0_DONE);
	}

	/* PORT1 WRITE_DONE: calculater the time gap between this and  last  */
	if ((val_mac1[2] >> REG_SHIFT_WRITE_DONE) & 0x1) {
		check_done_time(&val_mac1[2], PORT1_DONE);
	}

	/* PORT2 WRITE_DONE: calculater the time gap between this and  last  */
	if ((val_mac2[1] >> REG_SHIFT_WRITE_DONE) & 0x1) {
		check_done_time(&val_mac2[1], PORT2_DONE);
	}

	/* PORT3 WRITE_DONE: calculater the time gap between this and  last  */
	if ((val_mac2[2] >> REG_SHIFT_WRITE_DONE) & 0x1) {
		check_done_time(&val_mac2[2], PORT3_DONE);
	}
#endif

	if ((val_level1[0] & ISP_COMMAND_DONE_INT) != 0) {
		cmd_done = GETREG8(REG_FW_CMD_DONE_TYPE);

		if (cmd_done == 0) {
			val_level1[0] &= ~(1 << REG_SHIFT_CMD_DONE);
		} else {
			cmd_result = GETREG8(COMMAND_RESULT);

			/* clear cmd done type register */
			SETREG8(REG_FW_CMD_DONE_TYPE, 0);
		}

		if ((GETREG8(REG_FW_AE_INT_TYPE(0)) != 0)
			|| (GETREG8(REG_FW_AE_INT_TYPE(1)) != 0)) {
			tasklet_schedule(&isr_aec_tasklet);
		}
	}

	/* set flag in done interrupt */
	if ((val_mac1[1] >> REG_SHIFT_WRITE_DONE) & 0x1
		|| (val_mac1[2] >> REG_SHIFT_WRITE_DONE) & 0x1
		|| (val_mac2[1] >> REG_SHIFT_WRITE_DONE) & 0x1
		|| (val_mac2[2] >> REG_SHIFT_WRITE_DONE) & 0x1) {
		index = hisi_eg_ctrl.seq_index;
		if (index >= SENSOR_EXPO_EFFECT_DELAY
			&& index < (me_seq->seq_size + SENSOR_EXPO_EFFECT_DELAY)) {
			isp_hw_data.irq_val.host_ae_applied = MANUAL_AE_APPLIED;
			isp_hw_data.irq_val.expo = me_seq->expo[index - SENSOR_EXPO_EFFECT_DELAY];
			isp_hw_data.irq_val.gain = me_seq->gain[index - SENSOR_EXPO_EFFECT_DELAY + sensor->sensor_info->sensor_type];
			isp_hw_data.irq_val.hts = me_seq->hts;
			isp_hw_data.irq_val.vts = me_seq->vts;
		}
	}

	eof_trigger = hisi_eg_ctrl.eof_trigger;
	if (((eof_trigger == PIPE0_TRIG) && (val_level1[3] & ISP_PIPE0_EOF_IDI))
		|| ((eof_trigger == PIPE1_TRIG) && (val_level1[2] & ISP_PIPE1_EOF_IDI))) {
		tasklet_hi_schedule(&isr_host_ae_tasklet);
	}

	if ((hisi_flash_get_turn_on() == true) &&
		((val_level1[3] & ISP_PIPE0_EOF_IDI) || (val_level1[2] & ISP_PIPE1_EOF_IDI))) {
		queue_work(flash_eof_work_queue, &flash_eof_work);
	}

	if (((isp_hw_data.irq_val.mac3_irq_status_s0>>REG_SHIFT_WRITE_DONE) & 0x1) == 1 &&
	(val_mac3[1]>>REG_SHIFT_WRITE_DONE & 0x1) == 1) {
		cam_err("%s, process raw done handle delay, save it and report in next irq!!",__func__);
		isp_hw_data.irq_process_raw_done_count = 1;
	}
	/* save status later */
	isp_hw_data.irq_val.mac1_irq_status_h |= val_mac1[0];
	isp_hw_data.irq_val.mac1_irq_status_s0 |= val_mac1[1];
	isp_hw_data.irq_val.mac1_irq_status_s1 |= val_mac1[2];
	isp_hw_data.irq_val.mac1_irq_status_ss |= val_mac1[3];

	isp_hw_data.irq_val.mac2_irq_status_h |= val_mac2[0];
	isp_hw_data.irq_val.mac2_irq_status_s0 |= val_mac2[1];
	isp_hw_data.irq_val.mac2_irq_status_s1 |= val_mac2[2];
	isp_hw_data.irq_val.mac2_irq_status_ss |= val_mac2[3];

	isp_hw_data.irq_val.mac3_irq_status_h |= val_mac3[0];
	isp_hw_data.irq_val.mac3_irq_status_s0 |= val_mac3[1];
	isp_hw_data.irq_val.mac3_irq_status_s1 |= val_mac3[2];
	isp_hw_data.irq_val.mac3_irq_status_ss |= val_mac3[3];

	isp_hw_data.irq_val.irq_status_1 |= val_level1[0];
	isp_hw_data.irq_val.irq_status_2 |= val_level1[1];
	isp_hw_data.irq_val.irq_status_3 |= val_level1[2];
	isp_hw_data.irq_val.irq_status_4 |= val_level1[3];

	isp_hw_data.irq_val.cmd_done_id |= cmd_done;
	isp_hw_data.irq_val.cmd_result |= cmd_result;
	if ((((isp_hw_data.irq_val.mac3_irq_status_s0>>REG_SHIFT_WRITE_DONE) & 0x1) == 0) &&
	isp_hw_data.irq_process_raw_done_count == 1) {
		isp_hw_data.irq_process_raw_done_count = 0;
		isp_hw_data.irq_val.mac3_irq_status_s0 |= (0x1<<REG_SHIFT_WRITE_DONE);
	}

	isp_hw_data.irq_query_flag = true;
	spin_unlock_irqrestore(&isp_hw_data.irq_status_lock, lock_flags);

	wake_up_interruptible(&isp_hw_data.poll_queue_head);

	return IRQ_HANDLED;
}

static int load_firmware(char *filename)
{
	struct kstat stat;
	mm_segment_t fs;
	struct file *fp = NULL;
	int file_flag = O_RDONLY;
	int ret = 0;
	size_t size;

	if (NULL == filename ) {
		cam_err("%s param error", __func__);
		return -EINVAL;
	}


	/* must have the following 2 statement */
	fs = get_fs();
	set_fs(KERNEL_DS);

	fp = filp_open(filename, file_flag, 0666);
	if (IS_ERR_OR_NULL(fp)) {
		cam_err("open file error!\n");
		set_fs(fs);
		return -ENOENT;
	}

	if (0 != vfs_stat(filename, &stat)) {
		cam_err("failed to get file stat!");
		ret = -EIO;
		goto ERROR;
	}

	if (stat.size > FIRMWARE_MEM_SIZE) {
		cam_err("firmware size excceed memory size!");
		ret = -EIO;
		goto ERROR;
	}
	isp_firmware_size = stat.size;
	cam_notice("firmware %s, file size : %d", filename, isp_firmware_size);

	size = vfs_read(fp, (char *)isp_firmware_addr, isp_firmware_size, &fp->f_pos);
	if (size != isp_firmware_size) {
		cam_err("read file error!, %s , ret=%d\n", filename, ret);
		ret = -EIO;
	}
ERROR:
	/* must have the following 1 statement */
	set_fs(fs);
	filp_close(fp, 0);
	return ret;
}

static int isp_res_init(struct device *pdev)
{
	struct device_node *of_node = pdev->of_node;
	uint32_t base_array[2] = {0};
	uint32_t count = 0;
	int ret = 0;
	static int flag = 0;

	/* property(hisi,isp-base) = <address, size>, so count is 2 */
	count = 2;
	if (of_node) {
		ret = of_property_read_u32_array(of_node, "hisi,isp-base",
			base_array, count);
		if (ret < 0) {
			cam_err("%s failed line %d\n", __func__, __LINE__);
			return ret;
		}
	} else {
		cam_err("%s isp of_node is NULL.%d\n", __func__, __LINE__);
		return -ENXIO;
	}


	isp_hw_data.phyaddr = base_array[0];
	isp_hw_data.mem_size = base_array[1];

	isp_hw_data.viraddr = (u32)ioremap_nocache(isp_hw_data.phyaddr, isp_hw_data.mem_size);
	if (0 == isp_hw_data.viraddr) {
		cam_err("%s ioremap fail", __func__);
		return -ENXIO;
	}

	ret = of_property_read_u32(of_node, "hisi,isp-irq", &isp_hw_data.irq_no);
	if (ret < 0) {
		cam_err("%s failed line %d\n", __func__, __LINE__);
		goto fail;
	}

	cam_notice("%s isp-base address = 0x%x. isp-base size = 0x%x. isp-irq = %d.\n",
		__func__, isp_hw_data.phyaddr, isp_hw_data.mem_size, isp_hw_data.irq_no);

	spin_lock_init(&isp_hw_data.irq_status_lock);
	init_waitqueue_head(&isp_hw_data.poll_queue_head);
	sema_init(&isp_hw_data.sem_cmd_done, 0);
	ispv3_flash_work_init();
	isp_hw_data.irq_process_raw_done_count = 0;

	/*request irq*/
	ret = request_irq(isp_hw_data.irq_no, isp_irq_handler, 0, "isp_irq", 0);

#if IRQ_TWO_TIME_BUGFIX
	init_irq_done_time();
#endif

	if (ret != 0) {
		cam_err("fail to request irq [%d], error: %d", isp_hw_data.irq_no, ret);
		ret = -ENXIO;
		goto fail;
	}

	if (is_fpga_board()) {
		return ret;
	}

	/* get isp clock */
	isp_hw_data.isp_mclk = devm_clk_get(pdev, "clk_isp");
	if (IS_ERR_OR_NULL(isp_hw_data.isp_mclk)) {
		cam_err("failed to get isp clock");
		ret = -ENXIO;
		goto fail;
	}

	isp_hw_data.ispmipi_clk = devm_clk_get(pdev, "clk_ispmipi");
	if (IS_ERR_OR_NULL(isp_hw_data.ispmipi_clk)) {
		cam_err("failed to get isp mipi clock");
		ret = -ENXIO;
		goto fail;
	}

	isp_hw_data.isp_sclk = devm_clk_get(pdev, "clk_ispcore");
	if (IS_ERR_OR_NULL(isp_hw_data.isp_sclk)) {
		cam_err("failed to get isp core clock");
		ret = -ENXIO;
		goto fail;
	}

	if (flag == 0) {
		/* get isp regulator */
		isp_hw_data.inter_ldo.supply = "vcc_isp";
		ret = devm_regulator_bulk_get(pdev, 1, &isp_hw_data.inter_ldo);
		if (ret != 0) {
			cam_err("%s: Could not get regulator : %s\n", __func__, "vcc_isp");
			ret = -ENXIO;
			goto fail;
		}
		flag = 1;
	}

	/* pinctrl enable */
	isp_hw_data.isp_pinctrl = devm_pinctrl_get(pdev);
	if (IS_ERR_OR_NULL(isp_hw_data.isp_pinctrl)) {
		cam_err("could not get pinctrl\n");
		ret = -ENXIO;
		goto fail;
	}

	isp_hw_data.pinctrl_def = pinctrl_lookup_state(isp_hw_data.isp_pinctrl,PINCTRL_STATE_DEFAULT);
	if (IS_ERR_OR_NULL(isp_hw_data.pinctrl_def)) {
		cam_err("could not get defstate (%li)\n",
					PTR_ERR(isp_hw_data.pinctrl_def));
		ret = -ENXIO;
		goto fail;
	}

	isp_hw_data.pinctrl_idle = pinctrl_lookup_state(isp_hw_data.isp_pinctrl,PINCTRL_STATE_IDLE);
	if (IS_ERR_OR_NULL(isp_hw_data.pinctrl_idle)) {
		cam_err("could not get idlestate (%li)\n",
				PTR_ERR(isp_hw_data.pinctrl_idle));
		ret = -ENXIO;
		goto fail;
	}

	hisi_eg_ctrl.eof_trigger = NONE_TRIG;

	return 0;
fail:
	if (isp_hw_data.viraddr)
		iounmap((void*)isp_hw_data.viraddr);

	if (isp_hw_data.irq_no) {
		free_irq(isp_hw_data.irq_no, 0);
		isp_hw_data.irq_no = 0;
	}

	return ret;
}

static int isp_res_deinit(void)
{
	int ret = 0;
	cam_notice("enter %s", __func__);
	ispv3_flash_work_deinit();
	if (isp_hw_data.irq_no)
		free_irq(isp_hw_data.irq_no, 0);

	if (isp_hw_data.viraddr)
		iounmap((void*)isp_hw_data.viraddr);

	hisi_eg_ctrl.eof_trigger = NONE_TRIG;

	return ret;
}

/***************** external interface definition start *****************************************/

unsigned int k3_poll_irq(struct file * filp, struct poll_table_struct *wait)
{
	unsigned int mask = 0;
	unsigned long lock_flags;
	cam_debug("enter %s", __func__);

	if (!isp_hw_data.poll_start)
		isp_hw_data.poll_start = true;

	poll_wait(filp, &isp_hw_data.poll_queue_head, wait);

	spin_lock_irqsave(&isp_hw_data.irq_status_lock, lock_flags);
	if (isp_hw_data.irq_query_flag) {
		mask |= POLLPRI;
		isp_hw_data.irq_query_flag = false;
	}
	spin_unlock_irqrestore(&isp_hw_data.irq_status_lock, lock_flags);

	return mask;
}

void k3_query_irq(struct irq_reg_t *irq_info)
{
	unsigned long lock_flags;
	long long int  time_gap;

	cam_debug("enter %s", __func__);

	spin_lock_irqsave(&isp_hw_data.irq_status_lock, lock_flags);
	memcpy(irq_info, &isp_hw_data.irq_val, sizeof(struct irq_reg_t));
	memset(&isp_hw_data.irq_val, 0, offsetof(struct irq_reg_t, host_ae_applied));
	spin_unlock_irqrestore(&isp_hw_data.irq_status_lock, lock_flags);

	do_gettimeofday(&tv[1]);

	time_gap = (tv[1].tv_sec - tv[0].tv_sec) * 1000000 +
		(tv[1].tv_usec - tv[0].tv_usec);

	if (time_gap > 2000) {
		cam_info("ISP irq time interval %lldus", time_gap);
	}

	return;
}

int k3_isp_init(struct device *pdev)
{
	int ret = 0;
	cam_info("enter %s", __func__);

	/*init res */
	ret = isp_res_init(pdev);
	if (ret) {
		cam_err("failed init isp res!");
		return ret;
	}

	io_set_isp_base(isp_hw_data.viraddr);

	ret = load_firmware(FIRMWARE_FILE_PATH);

	return ret;
}

int k3_isp_deinit(void)
{
	int ret = 0;
	cam_info("enter %s", __func__);

	/*deinit res */
	ret = isp_res_deinit();
	if (ret) {
		cam_err("failed deinit isp res!");
		return ret;
	}

	io_set_isp_base(0x00);

	return ret;
}


int k3_isp_poweron(void)
{
	int ret = 0;
	int retry = 0;

	cam_info("enter %s", __func__);

	isp_hw_data.poll_start = false;

power_on_try:
	if (!is_fpga_board()) {
		ret = regulator_bulk_enable(1, &isp_hw_data.inter_ldo);
		if (ret)
			cam_err("%s, failed to enable regulators", __func__);
		ret = pinctrl_select_state(isp_hw_data.isp_pinctrl, isp_hw_data.pinctrl_def); //work mode
		if (ret)
			cam_err("%s, could not set pins to default state.", __func__);
		ret = clk_prepare_enable(isp_hw_data.isp_mclk);
		if (ret)
			cam_err("%s, could not enable isp_mclk", __func__);
		ret = clk_prepare_enable(isp_hw_data.isp_sclk);
		if (ret)
			cam_err("%s, could not enable isp_sclk.", __func__);
		ret = clk_prepare_enable(isp_hw_data.ispmipi_clk);
		if (ret)
			cam_err("%s, could not enable ispmipi_clk.", __func__);
	}

	/* Reset ISP */
	SETREG8(REG_ISP_SOFT_RST, DO_SOFT_RST);

	/* ISP dsiable stand by */
	SETREG8(REG_ISP_SOFT_STANDBY, DO_SOFTWARE_STAND_BY);
	udelay(1);
	/* MCU reset */
	SETREG8(REG_ISP_CLK_USED_BY_MCU, 0xf1);

	memcpy((void*)isp_hw_data.viraddr, (void*)isp_firmware_addr, isp_firmware_size);

	SETREG8(REG_ISP_INT_EN_1, 0x40);//enable cmd set done interrupt
	SETREG8(REG_ISP_INT_EN_2, 0x00);
	SETREG8(REG_ISP_INT_EN_3, 0x00);
	SETREG8(REG_ISP_INT_EN_4, 0x00);

	/* MCU enable */
	SETREG8(REG_ISP_CLK_USED_BY_MCU, 0xf0);

	ret = wait_fw_load_timeout(WAIT_FW_LOAD_TIMEOUT);
	if (ret) {
		cam_err("wait fw load timeout failed, retry %d.\n", retry);
		k3_isp_poweroff();
		if (retry++ < 4)
			goto power_on_try;

		return ret;
	}
	cam_notice("%s isp poweron success. viraddr %#x", __func__, isp_hw_data.viraddr);

	return ret;
}

int k3_isp_poweroff(void)
{
	int ret = 0;
	cam_notice("%s enter.\n", __func__);

	SETREG8(REG_ISP_SOFT_RST, DO_SOFT_RST);
	SETREG8(REG_ISP_INT_EN_4, 0x00);

	if (is_fpga_board())
		return 0;

	if (!regulator_is_enabled(isp_hw_data.inter_ldo.consumer))
		return 0;

	/* todo read dts file and config pin register */
	ret = pinctrl_select_state(isp_hw_data.isp_pinctrl, isp_hw_data.pinctrl_idle); /* power off mode */
	if (ret) {
		cam_err("%s, could not set pins to default state.", __func__);
		return ret;
	}

	/* disable isp inter clk */
	clk_disable_unprepare(isp_hw_data.isp_mclk);
	clk_disable_unprepare(isp_hw_data.isp_sclk);
	clk_disable_unprepare(isp_hw_data.ispmipi_clk);


	/* disable isp regualtor */
	ret = regulator_bulk_disable(1, &isp_hw_data.inter_ldo);
	if (ret) {
		cam_err("%s, failed to disable regulators", __func__);
	}


	return ret;
}

int k3_isp_clk_rate_set(int rate)
{
	int ret = 0;
	cam_notice("%s enter rate=%d(M).\n", __func__, rate);

	if (IS_ERR_OR_NULL(isp_hw_data.isp_sclk)) {
		return -1;
	}
	ret = clk_set_rate(isp_hw_data.isp_sclk, rate * 1000 * 1000);
	if (ret) {
		cam_err("isp sclk set rate error.\n");
	}
	return ret;
}

u32 k3_get_isp_base_addr(void)
{
	return isp_hw_data.phyaddr;
}

u32 k3_get_isp_mem_size(void)
{
	return isp_hw_data.mem_size;
}

int setup_eof_tasklet(struct hisi_sensor_t *sensor, struct expo_gain_seq *me_seq)
{
	unsigned long lock_flags;

	spin_lock_irqsave(&isp_hw_data.irq_status_lock, lock_flags);
	hisi_eg_ctrl.sensor = sensor;
	memcpy(&hisi_eg_ctrl.me_seq, me_seq, sizeof(struct expo_gain_seq));
	hisi_eg_ctrl.eof_trigger = me_seq->eof_trigger;
	spin_unlock_irqrestore(&isp_hw_data.irq_status_lock, lock_flags);

	return 0;
}

int teardown_eof_tasklet(struct hisi_sensor_t *sensor, struct expo_gain_seq *me_seq)
{
	int ret = 0;
	unsigned long lock_flags;

	sensor->func_tbl->sensor_set_hts(sensor, me_seq->hts);
	sensor->func_tbl->sensor_set_vts(sensor, me_seq->vts);

	if (sensor->func_tbl->sensor_set_expo_gain != NULL)
		sensor->func_tbl->sensor_set_expo_gain(sensor,
			me_seq->expo[0], me_seq->gain[0], false);

	tasklet_kill(&isr_host_ae_tasklet);
	spin_lock_irqsave(&isp_hw_data.irq_status_lock, lock_flags);
	hisi_eg_ctrl.eof_trigger = NONE_TRIG;
	hisi_eg_ctrl.sensor = NULL;
	hisi_eg_ctrl.seq_index = 0;
	memset(&hisi_eg_ctrl.me_seq, 0, sizeof(struct expo_gain_seq));
	isp_hw_data.irq_val.host_ae_applied = MANUAL_AE_NOT_APPLIED;
	spin_unlock_irqrestore(&isp_hw_data.irq_status_lock, lock_flags);

	return ret;
}

int k3_alloc_firmware_memory()
{
	isp_firmware_addr = kzalloc(FIRMWARE_MEM_SIZE, GFP_KERNEL);
	if (0 == isp_firmware_addr) {
		cam_err("%s kzalloc fail!", __func__);
		return -ENOMEM;
	} else {
		return 0;
	}
}
void k3_free_firmware_memory()
{
	kfree(isp_firmware_addr);
	isp_firmware_addr = NULL;
}

/***************** external interface definition end *****************************************/
