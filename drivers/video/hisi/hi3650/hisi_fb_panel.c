/* Copyright (c) 2013-2014, Hisilicon Tech. Co., Ltd. All rights reserved.
*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License version 2 and
* only version 2 as published by the Free Software Foundation.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.	See the
* GNU General Public License for more details.
*
*/

#include "hisi_fb.h"
#include "hisi_fb_panel.h"


DEFINE_SEMAPHORE(hisi_fb_dts_resource_sem);

int gpio_cmds_tx(struct gpio_desc *cmds, int cnt)
{
	int ret = 0;
	struct gpio_desc *cm = NULL;
	int i = 0;

	cm = cmds;

	for (i = 0; i < cnt; i++) {
		if ((cm == NULL) || (cm->label == NULL)) {
			HISI_FB_ERR("cm or cm->label is null! index=%d\n", i);
			ret = -1;
			goto error;
		}

		if (!gpio_is_valid(*(cm->gpio))) {
			HISI_FB_ERR("gpio invalid, dtype=%d, lable=%s, gpio=%d!\n",
				cm->dtype, cm->label, *(cm->gpio));
			ret = -1;
			goto error;
		}

		if (cm->dtype == DTYPE_GPIO_INPUT) {
			if (gpio_direction_input(*(cm->gpio)) != 0) {
				HISI_FB_ERR("failed to gpio_direction_input, lable=%s, gpio=%d!\n",
					cm->label, *(cm->gpio));
				ret = -1;
				goto error;
			}
		} else if (cm->dtype == DTYPE_GPIO_OUTPUT) {
			if (gpio_direction_output(*(cm->gpio), cm->value) != 0) {
				HISI_FB_ERR("failed to gpio_direction_output, label%s, gpio=%d!\n",
					cm->label, *(cm->gpio));
				ret = -1;
				goto error;
			}
		} else if (cm->dtype == DTYPE_GPIO_REQUEST) {
			if (gpio_request(*(cm->gpio), cm->label) != 0) {
				HISI_FB_ERR("failed to gpio_request, lable=%s, gpio=%d!\n",
					cm->label, *(cm->gpio));
				ret = -1;
				goto error;
			}
		} else if (cm->dtype == DTYPE_GPIO_FREE) {
			gpio_free(*(cm->gpio));
		} else {
			HISI_FB_ERR("dtype=%x NOT supported\n", cm->dtype);
			ret = -1;
			goto error;
		}

		if (cm->wait) {
			if (cm->waittype == WAIT_TYPE_US)
				udelay(cm->wait);
			else if (cm->waittype == WAIT_TYPE_MS)
				mdelay(cm->wait);
			else
				mdelay(cm->wait * 1000);
		}

		cm++;
	}

	return 0;

error:
	return ret;
}

int resource_cmds_tx(struct platform_device *pdev,
	struct resource_desc *cmds, int cnt)
{
	int ret = 0;
	struct resource *res = NULL;
	struct resource_desc *cm = NULL;
	int i = 0;

	BUG_ON(pdev == NULL);
	cm = cmds;

	for (i = 0; i < cnt; i++) {
		if ((cm == NULL) || (cm->name == NULL)) {
			HISI_FB_ERR("cm or cm->name is null! index=%d\n", i);
			ret = -1;
			goto error;
		}

		res = platform_get_resource_byname(pdev, cm->flag, cm->name);
		if (!res) {
			HISI_FB_ERR("failed to get %s resource!\n", cm->name);
			ret = -1;
			goto error;
		}

		*(cm->value) = res->start;

		cm++;
	}

	return 0;

error:
	return cnt;
}

#if defined(CONFIG_ARCH_HI3630FPGA) || defined(CONFIG_HISI_3635_FPGA) \
	|| defined(CONFIG_HISI_3650_FPGA)
int spi_cmds_tx(struct spi_device *spi, struct spi_cmd_desc *cmds, int cnt)
{
	struct spi_cmd_desc *cm = NULL;

	int i = 0;

	BUG_ON(spi == NULL);
	BUG_ON(cmds == NULL);

	cm = cmds;

	for (i = 0; i < cnt; i++) {
		spi_write(spi, cm->reg, cm->reg_len);
		spi_write(spi, cm->val, cm->val_len);

		if (cm->wait) {
			if (cm->waittype == WAIT_TYPE_US)
				udelay(cm->wait);
			else if (cm->waittype == WAIT_TYPE_MS)
				mdelay(cm->wait);
			else
				mdelay(cm->wait * 1000);
		}

		cm++;
	}

	return 0;
}

int vcc_cmds_tx(struct platform_device *pdev, struct vcc_desc *cmds, int cnt)
{
	return 0;
}

int pinctrl_cmds_tx(struct platform_device *pdev, struct pinctrl_cmd_desc *cmds, int cnt)
{
	return 0;
}
#else
int vcc_cmds_tx(struct platform_device *pdev, struct vcc_desc *cmds, int cnt)
{
	int ret = 0;
	struct vcc_desc *cm = NULL;
	int i = 0;

	cm = cmds;

	for (i = 0; i < cnt; i++) {
		if ((cm == NULL) || (cm->id == NULL)) {
			HISI_FB_ERR("cm or cm->id is null! index=%d\n", i);
			ret = -1;
			goto error;
		}

		if (cm->dtype == DTYPE_VCC_GET) {
			BUG_ON(pdev == NULL);

			*(cm->regulator) = devm_regulator_get(&pdev->dev, cm->id);
			if (IS_ERR(*(cm->regulator))) {
				HISI_FB_ERR("failed to get %s regulator!\n", cm->id);
				ret = -1;
				goto error;
			}
		} else if (cm->dtype == DTYPE_VCC_PUT) {
			if (!IS_ERR(*(cm->regulator))) {
				devm_regulator_put(*(cm->regulator));
			}
		} else if (cm->dtype == DTYPE_VCC_ENABLE) {
			if (!IS_ERR(*(cm->regulator))) {
				if (regulator_enable(*(cm->regulator)) != 0) {
					HISI_FB_ERR("failed to enable %s regulator!\n", cm->id);
					ret = -1;
					goto error;
				}
			}
			mdelay(3);
		} else if (cm->dtype == DTYPE_VCC_DISABLE) {
			if (!IS_ERR(*(cm->regulator))) {
				if (regulator_disable(*(cm->regulator)) != 0) {
					HISI_FB_ERR("failed to disable %s regulator!\n", cm->id);
					ret = -1;
					goto error;
				}
			}
			mdelay(3);
		} else if (cm->dtype == DTYPE_VCC_SET_VOLTAGE) {
			if (!IS_ERR(*(cm->regulator))) {
				if (regulator_set_voltage(*(cm->regulator), cm->min_uV, cm->max_uV) != 0) {
					HISI_FB_ERR("failed to set %s regulator voltage!\n", cm->id);
					ret = -1;
					goto error;
				}
			}
		} else {
			HISI_FB_ERR("dtype=%x NOT supported\n", cm->dtype);
			ret = -1;
			goto error;
		}

		cm++;
	}

	return 0;

error:
	return ret;
}

int pinctrl_cmds_tx(struct platform_device *pdev, struct pinctrl_cmd_desc *cmds, int cnt)
{
	int ret = 0;

	int i = 0;
	struct pinctrl_cmd_desc *cm = NULL;

	cm = cmds;

	for(i = 0; i < cnt; i++) {
		if(cm == NULL) {
			HISI_FB_ERR("command %d is null!\n", i);
			continue;
		}

		if(cm->dtype == DTYPE_PINCTRL_GET) {
			cm->pctrl_data->p = devm_pinctrl_get(&pdev->dev);
		} else if(cm->dtype == DTYPE_PINCTRL_STATE_GET) {
			/* check pinctrl pointer*/
			// TO BE DONE
			if(cm ->mode == DTYPE_PINCTRL_STATE_DEFAULT) {
				cm->pctrl_data->pinctrl_def = pinctrl_lookup_state(cm->pctrl_data->p,PINCTRL_STATE_DEFAULT);
			} else if(cm ->mode == DTYPE_PINCTRL_STATE_IDLE) {
				cm->pctrl_data->pinctrl_idle = pinctrl_lookup_state(cm->pctrl_data->p,PINCTRL_STATE_IDLE);
			} else {
				ret = -1;
				HISI_FB_ERR("unknown pinctrl type to get!\n");
				goto err;
			}
		} else if(cm->dtype == DTYPE_PINCTRL_SET) {
			/* check pinctrl pointer*/
			// TO BE DONE
			if(cm ->mode == DTYPE_PINCTRL_STATE_DEFAULT) {
				/* check pinctrl_def pointer*/
				// TO BE DONE
				ret = pinctrl_select_state(cm->pctrl_data->p, cm->pctrl_data->pinctrl_def);
				if(ret) {
					HISI_FB_ERR("could not set this pin to default state!\n");
					ret = -1;
					goto err;
				}

			} else if(cm ->mode == DTYPE_PINCTRL_STATE_IDLE) {
				/* check pinctrl_def pointer*/
				// TO BE DONE
				ret = pinctrl_select_state(cm->pctrl_data->p, cm->pctrl_data->pinctrl_idle);
				if(ret) {
					HISI_FB_ERR("could not set this pin to idle state!\n");
					ret = -1;
					goto err;
				}
			} else {
				ret = -1;
				HISI_FB_ERR("unknown pinctrl type to set!\n");
				goto err;
			}
		} else if(cm->dtype == DTYPE_PINCTRL_PUT) {
			pinctrl_put(cm->pctrl_data->p);
		} else {
			HISI_FB_ERR("not supported command type!\n");
			ret = -1;
			goto err;
		}

		cm++;

	}

	return ret;
err:

	return ret;
}
#endif

int panel_next_set_fastboot(struct platform_device *pdev)
{
	int ret = 0;
	struct hisi_fb_panel_data *pdata = NULL;
	struct hisi_fb_panel_data *next_pdata = NULL;
	struct platform_device *next_pdev = NULL;

	BUG_ON(pdev == NULL);

	pdata = (struct hisi_fb_panel_data *)pdev->dev.platform_data;
	if (pdata) {
		next_pdev = pdata->next;
		if (next_pdev) {
			next_pdata = (struct hisi_fb_panel_data *)next_pdev->dev.platform_data;
			if ((next_pdata) && (next_pdata->set_fastboot))
				ret = next_pdata->set_fastboot(next_pdev);
		}
	}

	return ret;
}

int panel_next_on(struct platform_device *pdev)
{
	int ret = 0;
	struct hisi_fb_panel_data *pdata = NULL;
	struct hisi_fb_panel_data *next_pdata = NULL;
	struct platform_device *next_pdev = NULL;

	BUG_ON(pdev == NULL);
	pdata = dev_get_platdata(&pdev->dev);
	BUG_ON(pdata == NULL);

	next_pdev = pdata->next;
	if (next_pdev) {
		next_pdata = dev_get_platdata(&next_pdev->dev);
		if ((next_pdata) && (next_pdata->on))
			ret = next_pdata->on(next_pdev);
	}

	return ret;
}

int panel_next_off(struct platform_device *pdev)
{
	int ret = 0;
	struct hisi_fb_panel_data *pdata = NULL;
	struct hisi_fb_panel_data *next_pdata = NULL;
	struct platform_device *next_pdev = NULL;

	BUG_ON(pdev == NULL);
	pdata = dev_get_platdata(&pdev->dev);
	BUG_ON(pdata == NULL);

	next_pdev = pdata->next;
	if (next_pdev) {
		next_pdata = dev_get_platdata(&next_pdev->dev);
		if ((next_pdata) && (next_pdata->off))
			ret = next_pdata->off(next_pdev);
	}

	return ret;
}

int panel_next_remove(struct platform_device *pdev)
{
	int ret = 0;
	struct hisi_fb_panel_data *pdata = NULL;
	struct hisi_fb_panel_data *next_pdata = NULL;
	struct platform_device *next_pdev = NULL;

	BUG_ON(pdev == NULL);
	pdata = dev_get_platdata(&pdev->dev);
	BUG_ON(pdata == NULL);

	next_pdev = pdata->next;
	if (next_pdev) {
		next_pdata = dev_get_platdata(&next_pdev->dev);
		if ((next_pdata) && (next_pdata->remove))
			ret = next_pdata->remove(next_pdev);
	}

	return ret;
}

int panel_next_set_backlight(struct platform_device *pdev)
{
	int ret = 0;
	struct hisi_fb_panel_data *pdata = NULL;
	struct hisi_fb_panel_data *next_pdata = NULL;
	struct platform_device *next_pdev = NULL;

	BUG_ON(pdev == NULL);
	pdata = dev_get_platdata(&pdev->dev);
	BUG_ON(pdata == NULL);

	next_pdev = pdata->next;
	if (next_pdev) {
		next_pdata = dev_get_platdata(&next_pdev->dev);
		if ((next_pdata) && (next_pdata->set_backlight))
			ret = next_pdata->set_backlight(next_pdev);
	}

	return ret;
}

int panel_next_sbl_ctrl(struct platform_device *pdev, int enable)
{
	int ret = 0;
	struct hisi_fb_panel_data *pdata = NULL;
	struct hisi_fb_panel_data *next_pdata = NULL;
	struct platform_device *next_pdev = NULL;

	BUG_ON(pdev == NULL);
	pdata = dev_get_platdata(&pdev->dev);
	BUG_ON(pdata == NULL);

	next_pdev = pdata->next;
	if (next_pdev) {
		next_pdata = dev_get_platdata(&next_pdev->dev);
		if ((next_pdata) && (next_pdata->sbl_ctrl))
			ret = next_pdata->sbl_ctrl(next_pdev, enable);
	}

	return ret;
}

int panel_next_vsync_ctrl(struct platform_device *pdev, int enable)
{
	int ret = 0;
	struct hisi_fb_panel_data *pdata = NULL;
	struct hisi_fb_panel_data *next_pdata = NULL;
	struct platform_device *next_pdev = NULL;

	BUG_ON(pdev == NULL);
	pdata = dev_get_platdata(&pdev->dev);
	BUG_ON(pdata == NULL);

	next_pdev = pdata->next;
	if (next_pdev) {
		next_pdata = dev_get_platdata(&next_pdev->dev);
		if ((next_pdata) && (next_pdata->vsync_ctrl))
			ret = next_pdata->vsync_ctrl(next_pdev, enable);
	}

	return ret;
}

int panel_next_frc_handle(struct platform_device *pdev, int fps)
{
	int ret = 0;
	struct hisi_fb_panel_data *pdata = NULL;
	struct hisi_fb_panel_data *next_pdata = NULL;
	struct platform_device *next_pdev = NULL;

	BUG_ON(pdev == NULL);
	pdata = dev_get_platdata(&pdev->dev);
	BUG_ON(pdata == NULL);

	next_pdev = pdata->next;
	if (next_pdev) {
		next_pdata = dev_get_platdata(&next_pdev->dev);
		if ((next_pdata) && (next_pdata->frc_handle))
			ret = next_pdata->frc_handle(next_pdev, fps);
	}

	return ret;
}

int panel_next_esd_handle(struct platform_device *pdev)
{
	int ret = 0;
	struct hisi_fb_panel_data *pdata = NULL;
	struct hisi_fb_panel_data *next_pdata = NULL;
	struct platform_device *next_pdev = NULL;

	BUG_ON(pdev == NULL);
	pdata = dev_get_platdata(&pdev->dev);
	BUG_ON(pdata == NULL);

	next_pdev = pdata->next;
	if (next_pdev) {
		next_pdata = dev_get_platdata(&next_pdev->dev);
		if ((next_pdata) && (next_pdata->esd_handle))
			ret = next_pdata->esd_handle(next_pdev);
	}

	return ret;
}

int panel_next_set_display_region(struct platform_device *pdev, struct dss_rect *dirty)
{
	int ret = 0;
	struct hisi_fb_panel_data *pdata = NULL;
	struct hisi_fb_panel_data *next_pdata = NULL;
	struct platform_device *next_pdev = NULL;

	BUG_ON(pdev == NULL || dirty == NULL);
	pdata = dev_get_platdata(&pdev->dev);
	BUG_ON(pdata == NULL);

	next_pdev = pdata->next;
	if (next_pdev) {
		next_pdata = dev_get_platdata(&next_pdev->dev);
		if ((next_pdata) && (next_pdata->set_display_region))
			ret = next_pdata->set_display_region(next_pdev, dirty);
	}

	return ret;
}

int panel_next_lcd_check_reg(struct platform_device *pdev)
{
	int ret = LCD_CHECK_REG_FAIL;
	struct hisi_fb_panel_data *pdata = NULL;
	struct hisi_fb_panel_data *next_pdata = NULL;
	struct platform_device *next_pdev = NULL;

	BUG_ON(pdev == NULL);
	pdata = dev_get_platdata(&pdev->dev);
	BUG_ON(pdata == NULL);

	next_pdev = pdata->next;
	if (next_pdev) {
		next_pdata = dev_get_platdata(&next_pdev->dev);
		if ((next_pdata) && (next_pdata->lcd_check_reg))
			ret = next_pdata->lcd_check_reg(next_pdev);
	}

	return ret;
}

int panel_next_lcd_mipi_detect(struct platform_device *pdev)
{
	int ret = LCD_MIPI_DETECT_FAIL;
	struct hisi_fb_panel_data *pdata = NULL;
	struct hisi_fb_panel_data *next_pdata = NULL;
	struct platform_device *next_pdev = NULL;

	BUG_ON(pdev == NULL);
	pdata = dev_get_platdata(&pdev->dev);
	BUG_ON(pdata == NULL);

	next_pdev = pdata->next;
	if (next_pdev) {
		next_pdata = dev_get_platdata(&next_pdev->dev);
		if ((next_pdata) && (next_pdata->lcd_mipi_detect))
			ret = next_pdata->lcd_mipi_detect(next_pdev);
	}

	return ret;
}

bool is_ldi_panel(struct hisi_fb_data_type *hisifd)
{
	BUG_ON(hisifd == NULL);
	if (hisifd->panel_info.type & PANEL_LCDC)
		return true;

	return false;
}

bool is_mipi_cmd_panel(struct hisi_fb_data_type *hisifd)
{
	BUG_ON(hisifd == NULL);

	if (hisifd->panel_info.type & (PANEL_MIPI_CMD | PANEL_DUAL_MIPI_CMD))
		return true;

	return false;
}

bool is_mipi_video_panel(struct hisi_fb_data_type *hisifd)
{
	BUG_ON(hisifd == NULL);

	if (hisifd->panel_info.type & (PANEL_MIPI_VIDEO| PANEL_DUAL_MIPI_VIDEO))
		return true;

	return false;
}

bool is_mipi_panel(struct hisi_fb_data_type *hisifd)
{
	BUG_ON(hisifd == NULL);

	if (hisifd->panel_info.type & (PANEL_MIPI_VIDEO | PANEL_MIPI_CMD |
		PANEL_DUAL_MIPI_VIDEO | PANEL_DUAL_MIPI_CMD))
		return true;

	return false;
}

bool is_dual_mipi_panel(struct hisi_fb_data_type *hisifd)
{
	BUG_ON(hisifd == NULL);

	if (hisifd->panel_info.type & (PANEL_DUAL_MIPI_VIDEO | PANEL_DUAL_MIPI_CMD))
		return true;

	return false;
}

bool is_hisi_writeback_panel(struct hisi_fb_data_type *hisifd)
{
	BUG_ON(hisifd == NULL);

	if (hisifd->panel_info.type & PANEL_WRITEBACK)
		return true;

	return false;
}

bool is_ifbc_panel(struct hisi_fb_data_type *hisifd)
{
	BUG_ON(hisifd == NULL);

	if (hisifd->panel_info.ifbc_type != IFBC_TYPE_NON)
		return true;

	return false;
}

bool hisi_fb_device_probe_defer(uint32_t panel_type)
{
	bool flag = true;

	down(&hisi_fb_dts_resource_sem);

	switch (panel_type) {
	case PANEL_NO:
		if(g_dts_resouce_ready & DTS_FB_RESOURCE_INIT_READY) {
			flag = false;
		}
		break;
	case PANEL_LCDC:
	case PANEL_MIPI2RGB:
	case PANEL_RGB2MIPI:
		if ((g_dts_resouce_ready & DTS_FB_RESOURCE_INIT_READY) &&
			(g_dts_resouce_ready & DTS_PWM_READY) &&
			(g_dts_resouce_ready & DTS_SPI_READY)) {
			flag = false;
		}
		break;
	case PANEL_MIPI_VIDEO:
	case PANEL_MIPI_CMD:
	case PANEL_DUAL_MIPI_VIDEO:
	case PANEL_DUAL_MIPI_CMD:
	case PANEL_EDP:
		if ((g_dts_resouce_ready & DTS_FB_RESOURCE_INIT_READY) &&
			(g_dts_resouce_ready & DTS_PWM_READY)) {
			flag = false;
		}
		break;
	case PANEL_HDMI:
		if (g_dts_resouce_ready & DTS_PANEL_PRIMARY_READY)
			flag = false;
		break;
	case PANEL_OFFLINECOMPOSER:
		if (g_dts_resouce_ready & DTS_PANEL_EXTERNAL_READY)
			flag = false;
		break;
	case PANEL_WRITEBACK:
		if (g_dts_resouce_ready & DTS_PANEL_OFFLINECOMPOSER_READY)
			flag = false;
		break;
	default:
		HISI_FB_ERR("not support this panel type(%d).\n", panel_type);
		break;
	}

	up(&hisi_fb_dts_resource_sem);

	return flag;
}

void hisi_fb_device_set_status0(uint32_t status)
{
	down(&hisi_fb_dts_resource_sem);
	g_dts_resouce_ready |= status;
	up(&hisi_fb_dts_resource_sem);
}

int hisi_fb_device_set_status1(struct hisi_fb_data_type *hisifd)
{
	int ret = 0;

	BUG_ON(hisifd == NULL);

	down(&hisi_fb_dts_resource_sem);

	switch (hisifd->panel_info.type) {
	case PANEL_LCDC:
	case PANEL_MIPI_VIDEO:
	case PANEL_MIPI_CMD:
	case PANEL_DUAL_MIPI_VIDEO:
	case PANEL_DUAL_MIPI_CMD:
	case PANEL_EDP:
	case PANEL_MIPI2RGB:
	case PANEL_RGB2MIPI:
		g_dts_resouce_ready |= DTS_PANEL_PRIMARY_READY;
		break;
	case PANEL_HDMI:
		g_dts_resouce_ready |= DTS_PANEL_EXTERNAL_READY;
		break;
	case PANEL_OFFLINECOMPOSER:
		g_dts_resouce_ready |= DTS_PANEL_OFFLINECOMPOSER_READY;
		break;
	case PANEL_WRITEBACK:
		g_dts_resouce_ready |= DTS_PANEL_WRITEBACK_READY;
		break;
	default:
		HISI_FB_ERR("not support this panel type(%d).\n", hisifd->panel_info.type);
		ret = -1;
		break;
	}

	up(&hisi_fb_dts_resource_sem);

	return ret;
}

struct platform_device *hisi_fb_device_alloc(struct hisi_fb_panel_data *pdata,
	uint32_t type, uint32_t id)
{
	struct platform_device *this_dev = NULL;
	char dev_name[32] = {0};

	BUG_ON(pdata == NULL);

	switch (type) {
	case PANEL_MIPI_VIDEO:
	case PANEL_MIPI_CMD:
		snprintf(dev_name, sizeof(dev_name), DEV_NAME_MIPIDSI);
		break;
	case PANEL_EDP:
		snprintf(dev_name, sizeof(dev_name), DEV_NAME_EDP);
		break;
	case PANEL_NO:
	case PANEL_LCDC:
	case PANEL_HDMI:
	case PANEL_OFFLINECOMPOSER:
	case PANEL_WRITEBACK:
		snprintf(dev_name, sizeof(dev_name), DEV_NAME_DSS_DPE);
		break;
	case PANEL_RGB2MIPI:
		snprintf(dev_name, sizeof(dev_name), DEV_NAME_RGB2MIPI);
		break;
	default:
		HISI_FB_ERR("invalid panel type = %d!\n", type);
		return NULL;
	}

	if (pdata != NULL)
		pdata->next = NULL;
	else
		return NULL;

	this_dev = platform_device_alloc(dev_name, (((uint32_t)type << 16) | (uint32_t)id));
	if (this_dev) {
		if (platform_device_add_data(this_dev, pdata, sizeof(struct hisi_fb_panel_data))) {
			HISI_FB_ERR("failed to platform_device_add_data!\n");
			platform_device_put(this_dev);
			return NULL;
		}
	}

	return this_dev;
}
