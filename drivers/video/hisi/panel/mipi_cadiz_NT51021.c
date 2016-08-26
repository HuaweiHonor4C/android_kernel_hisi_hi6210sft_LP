/* Copyright (c) 2008-2014, Hisilicon Tech. Co., Ltd. All rights reserved.
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
#include <linux/huawei/hisi_adc.h>
#include <linux/hisi/hw_cmdline_parse.h>
#include <linux/i2c.h>
#include <linux/clk.h>
#include <linux/sysfs.h>
#include <linux/device.h>

#define DTS_COMP_LISZT_NT51021 "hisilicon,mipi_liszt_NT51021"
#define LCD_VDDIO_TYPE_NAME	"lcd-vddio-type"

#define CABC_OFF 0
#define CABC_UI_MODE 1
#define CABC_STILL_MODE 2
#define CABC_MOVING_MODE 3
#define CHECKSUM_SIZE 8

#define CADIZ_DEV_NAME "sony,cadiz_i2c_adapter"

#define IPC_SYSTEM_CLK_FREQ_19M   (19200000L)
#define LCD_ID_TYPE_BOE 0
#define LCD_ID_TYPE_INX 1

static struct hisi_fb_panel_data liszt_panel_data;

static int g_lcd_type = 2; //g_lcd_type = 1(AUO);  g_lcd_type = 0(truly)  else unkown;

static int hkadc_buf = 0;
static bool checksum_enable_ctl = false;
static struct i2c_client *g_sony_client = NULL;

extern int fastboot_set_needed;

#define VCC_LCDIO_NAME		"lcdio-vcc"
#define VCC_LCDANALOG_NAME	"lcdanalog-vcc"

//static struct regulator *vcc_lcdio;
static struct regulator *vcc_lcdanalog;

static struct vcc_desc liszt_lcd_vcc_init_cmds[] = {
	/* vcc get */
    {DTYPE_VCC_GET, VCC_LCDANALOG_NAME, &vcc_lcdanalog, 0, 0, WAIT_TYPE_MS, 0},
	/* vcc set voltage */
};
static struct vcc_desc liszt_lcd_vcc_finit_cmds[] = {
	/* vcc put */
   {DTYPE_VCC_PUT, VCC_LCDANALOG_NAME, &vcc_lcdanalog, 0, 0, WAIT_TYPE_MS, 0},
};
static struct vcc_desc liszt_lcd_vcc_enable_cmds[] = {
	/* vcc enable */
    {DTYPE_VCC_ENABLE, VCC_LCDANALOG_NAME, &vcc_lcdanalog, 0, 0, WAIT_TYPE_MS, 20},
};
static struct vcc_desc liszt_lcd_vcc_disable_cmds[] = {
	/* vcc disable */
    {DTYPE_VCC_DISABLE, VCC_LCDANALOG_NAME, &vcc_lcdanalog, 0, 0, WAIT_TYPE_MS, 3},
};

/*******************************************************************************
** LCD IOMUX
*/
static struct pinctrl_data pctrl;
static struct clk* systemclk = NULL;
static struct pinctrl_cmd_desc liszt_lcd_pinctrl_init_cmds[] = {
	{DTYPE_PINCTRL_GET, &pctrl, 0},
	{DTYPE_PINCTRL_STATE_GET, &pctrl, DTYPE_PINCTRL_STATE_DEFAULT},
	{DTYPE_PINCTRL_STATE_GET, &pctrl, DTYPE_PINCTRL_STATE_IDLE},
};

static struct pinctrl_cmd_desc liszt_lcd_pinctrl_normal_cmds[] = {
	{DTYPE_PINCTRL_SET, &pctrl, DTYPE_PINCTRL_STATE_DEFAULT},
};

static struct pinctrl_cmd_desc liszt_lcd_pinctrl_lowpower_cmds[] = {
	{DTYPE_PINCTRL_SET, &pctrl, DTYPE_PINCTRL_STATE_IDLE},
};

static struct pinctrl_cmd_desc liszt_lcd_pinctrl_finit_cmds[] = {
	{DTYPE_PINCTRL_PUT, &pctrl, 0},
};

/*******************************************************************************
** LCD GPIO
*/
#define GPIO_LCD_BL_ENABLE_NAME	    "gpio_lcd_bl_enable"
#define GPIO_IPC_1V2_ENABLE_NAME	"gpio_ipc_1v2_enable"
#define GPIO_LCD_ID0_NAME	        "gpio_lcd_id0"
#define GPIO_LCD_BIAS_ENABLE_NAME	"gpio_lcd_bias_enable"
#define GPIO_LCD_VCC_NAME	        "gpio_lcd_vcc"
#define GPIO_IPC_1V8_ENABLE_NAME	"gpio_ipc_1v8_enable"
#define GPIO_IPC_RESET_NAME	        "gpio_ipc_reset"

static uint32_t gpio_lcd_bl_enable;  /*gpio_4_3,  gpio_035*/
static uint32_t gpio_ipc_1v2_enable; /*gpio_4_5,  gpio_037*/
static uint32_t gpio_lcd_id0;        /*gpio_4_6,  gpio_038*/
static uint32_t gpio_lcd_bias_enable;/*gpio_5_1,  gpio_041*/
static uint32_t gpio_lcd_vcc;        /*gpio_13_3, gpio_107*/
static uint32_t gpio_ipc_1v8_enable; /*gpio_15_1, gpio_121*/
static uint32_t gpio_ipc_reset;      /*gpio_24_2, gpio_194*/
static u8  sony_ipc_reg_value = 0;
static u16 sony_ipc_reg_addr = 0;

static uint32_t g_vddio_type = 0;


static char select_page1_step0[] = {
	0x83,0xAA,
};

static char select_page1_step1[] = {
	0x84,0x11,
};

static char mipi_rx[] = {
	0xA9,0x4B,
};

static char display_on[] = {
	0x29,
};

//stbyb low
static char exit_sleep[] = {
	0x89,0x01,
};

static char sleep_in[] = {
	0x89,0x03
};

static char sel_page_step0[] = {
	0x83, 0x00,
};

static char sel_page_step1[] = {
	0x84, 0x00,
};

static char sel_mipi_mode[] = {
	0x8F,0xA5,
};

static char op_adjust[] = {
	0xA9,0x4B,
};

static char innolux_global_reset[] = {
	0x01,0x00,
};

static struct dsi_cmd_desc sleep_in_cmds[] = {
    {DTYPE_GEN_WRITE2, 0, 100, WAIT_TYPE_US,sizeof(sel_page_step0), sel_page_step0},
    {DTYPE_GEN_WRITE2, 0, 100, WAIT_TYPE_US,sizeof(sel_page_step1), sel_page_step1},
    {DTYPE_GEN_WRITE2, 0, 120, WAIT_TYPE_MS,sizeof(sleep_in), sleep_in},
};

static struct dsi_cmd_desc shift_to_mipi_cmd[] = {
	{DTYPE_GEN_WRITE2, 0,10, WAIT_TYPE_US, sizeof(sel_mipi_mode), sel_mipi_mode},
	{DTYPE_GEN_WRITE2, 0,20, WAIT_TYPE_MS, sizeof(innolux_global_reset), innolux_global_reset},
	{DTYPE_GEN_WRITE2, 0,10, WAIT_TYPE_US, sizeof(sel_mipi_mode), sel_mipi_mode},
	{DTYPE_GEN_WRITE2, 0,10, WAIT_TYPE_US, sizeof(select_page1_step0), select_page1_step0},
	{DTYPE_GEN_WRITE2, 0,10, WAIT_TYPE_US, sizeof(select_page1_step1), select_page1_step1},
	{DTYPE_GEN_WRITE2, 0,10, WAIT_TYPE_US, sizeof(op_adjust), op_adjust},
	{DTYPE_GEN_WRITE2, 0,10, WAIT_TYPE_US, sizeof(sel_page_step0), sel_page_step0},
	{DTYPE_GEN_WRITE2, 0,10, WAIT_TYPE_US, sizeof(sel_page_step1), sel_page_step1},
};

static struct dsi_cmd_desc innolux_display_on_cmds[] = {
	{DTYPE_GEN_WRITE2, 0,10, WAIT_TYPE_US, sizeof(sel_page_step0), sel_page_step0},
	{DTYPE_GEN_WRITE2, 0,10, WAIT_TYPE_US, sizeof(sel_page_step1), sel_page_step1},
	{DTYPE_GEN_WRITE2, 0, 180, WAIT_TYPE_MS,sizeof(exit_sleep), exit_sleep},
	{DTYPE_GEN_WRITE2, 0, 100, WAIT_TYPE_MS,sizeof(display_on), display_on},
};

struct cadiz_register_data
{
    u16 reg;
    u8 value;
};

static struct cadiz_register_data cadiz_boot1[]={
    {0x0830,0x00},
    {0x0200,0x00},
    {0x0201,0x00},
    {0x0202,0x00},
    {0x0203,0x00},
    {0x0274,0x00},
    {0x0275,0x00},
    {0x0276,0x00},
    {0x0277,0x00},
    {0x0600,0x00},
    {0x0601,0x00},
    {0x0602,0x00},
    {0x0603,0x00},
    {0x0820,0x32},
    {0x0821,0x04},
    {0x0822,0x33},
    {0x0823,0x33},
    {0x0824,0x33},
    {0x0825,0x03},
    {0x0826,0x00},
    {0x0827,0x00},
    {0x0840,0x40},
    {0x0841,0x7F},
    {0x0842,0x14},
    {0x0843,0x00},
    {0x0900,0x06},
    {0x0901,0x01},
    {0x0902,0xB0},
    {0x0903,0x04},
    {0x0904,0x80},
    {0x0905,0x07},
    {0x0906,0x26},
    {0x0907,0x00},
    {0x0908,0x00},
    {0x0909,0x00},
    {0x090A,0x20},
    {0x090B,0x25},
    {0x090C,0x00},
    {0x090D,0x00},
    {0x090E,0x00},
    {0x090F,0x00},
    {0x0914,0x01},
    {0x0915,0x10},
    {0x0916,0x2C},
    {0x0917,0x0A},
    {0x0940,0x05},
    {0x0941,0x00},
    {0x0942,0x06},
    {0x0943,0x00},
    {0x020C,0x00},
    {0x020D,0x62},
    {0x020E,0x00},
    {0x020F,0x00},
    {0x0220,0xB0},
    {0x0221,0x04},
    {0x0222,0x80},
    {0x0223,0x07},
    {0x0228,0x03},
    {0x0229,0x00},
    {0x022A,0x00},
    {0x022B,0x00},
    {0x022C,0x19},
    {0x022D,0x00},
    {0x022E,0x00},
    {0x022F,0x00},
    {0x0230,0x30},
    {0x0231,0x00},
    {0x0232,0x00},
    {0x0233,0x00},
    {0x0234,0x84},
    {0x0235,0x03},
    {0x0236,0x00},
    {0x0237,0x00},
    {0x0238,0x03},
    {0x0239,0x00},
    {0x023A,0x00},
    {0x023B,0x00},
    {0x023C,0x17},
    {0x023D,0x00},
    {0x023E,0x00},
    {0x023F,0x00},
    {0x0240,0x68},
    {0x0241,0x00},
    {0x0242,0x00},
    {0x0243,0x00},
    {0x0244,0x36},
    {0x0245,0x00},
    {0x0246,0x00},
    {0x0247,0x00},
    {0x0258,0x02},
    {0x0259,0x00},
    {0x025A,0x00},
    {0x025B,0x00},
    {0x025C,0x05},
    {0x025D,0x00},
    {0x025E,0x00},
    {0x025F,0x00},
    {0x0260,0x0C},
    {0x0261,0x00},
    {0x0262,0x00},
    {0x0263,0x00},
    {0x0264,0x1F},
    {0x0265,0x00},
    {0x0266,0x4C},
    {0x0267,0x00},
    {0x0268,0x06},
    {0x0269,0x00},
    {0x026A,0x00},
    {0x026B,0x00},
    {0x026C,0x01},
    {0x026D,0x19},
    {0x026E,0x0A},
    {0x026F,0x12},
    {0x0270,0x02},
    {0x0271,0x2D},
    {0x0272,0x0A},
    {0x0273,0x12},
    {0x0278,0x1A},
    {0x0279,0x04},
    {0x027A,0x84},
    {0x027B,0x3B},
    {0x027C,0x10},
    {0x027D,0x38},
    {0x027E,0x32},
    {0x027F,0xB5},
    {0x0280,0x00},
    {0x0281,0x00},
    {0x0282,0x40},
    {0x0283,0x10},
    {0x0284,0x00},
    {0x0285,0x40},
    {0x0286,0x44},
    {0x0287,0x02},
    {0x02A8,0x01},
    {0x02A9,0x00},
    {0x02AA,0x00},
    {0x02AB,0x00},
    {0x000C,0x60},
    {0x000D,0x00},
    {0x000E,0x00},
    {0x000F,0x00},
    {0x0024,0x01},
    {0x0025,0x00},
    {0x0026,0x00},
    {0x0027,0x00},
    {0x002C,0x0D},
    {0x002D,0xFF},
    {0x002E,0x00},
    {0x002F,0x00},
    {0x0034,0x1A},
    {0x0035,0x84},
    {0x0036,0x04},
    {0x0037,0x3A},
    {0x0038,0x10},
    {0x0039,0x38},
    {0x003A,0x32},
    {0x003B,0xB5},
    {0x003C,0x1C},
    {0x003D,0x04},
    {0x003E,0x00},
    {0x003F,0x00},
    {0x0040,0x00},
    {0x0041,0x00},
    {0x0042,0x44},
    {0x0043,0x02},
    {0x0058,0x04},
    {0x0059,0x00},
    {0x005A,0x03},
    {0x005B,0x00},
    {0x090C,0x00},
    {0x090D,0x00},
    {0x090E,0x4C},
    {0x090F,0x0A},
};

struct cadiz_register_data cadiz_boot2[]={
    {0x0274,0x01},
    {0x0200,0x01},
    {0x001C,0x05},
    {0x001D,0x00},
    {0x001E,0x00},
    {0x001F,0x00},
    {0x0000,0x01},
    {0x0001,0x00},
    {0x0002,0x00},
    {0x0003,0x00},
};

struct cadiz_register_data cadiz_default_ipc_config[] = {
    {0x0C14,0x00},
    {0x0C15,0x02},
    {0x0C16,0x00},
    {0x0C17,0x02},
    {0x0C20,0x00},
    {0x0C21,0x02},
    {0x0C22,0x11},
    {0x0C23,0x01},
    {0x0C34,0x10},
    {0x0C35,0x82},
    {0x0C36,0x06},
    {0x0C37,0x51},
    {0x0C28,0x80},
    {0x0C29,0x00},
    {0x0C2A,0x32},
    {0x0C2B,0x00},
    {0x0C2C,0x54},
    {0x0C2D,0x05},
    {0x0C2E,0x00},
    {0x0C2F,0x00},
    {0x0C30,0x00},
    {0x0C31,0x00},
    {0x0C32,0x50},
    {0x0C33,0x15},
    {0x0A00,0x80},
    {0x0A01,0x00},
    {0x0A02,0x04},
    {0x0A03,0x00},
    {0x0A04,0xB0},
    {0x0A05,0x04},
    {0x0A06,0x00},
    {0x0A07,0x00},
    {0x0A08,0x80},
    {0x0A09,0x07},
    {0x0A0A,0x00},
    {0x0A0B,0x00},
    {0x0A0C,0x00},
    {0x0A0D,0x00},
    {0x0A0E,0x00},
    {0x0A0F,0x00},
    {0x0A10,0x00},
    {0x0A11,0x00},
    {0x0A12,0x00},
    {0x0A13,0x88},
    {0x0A14,0x01},
    {0x0A15,0x00},
    {0x0A16,0x00},
    {0x0A17,0x00},
    {0x0A18,0x80},
    {0x0A19,0x80},
    {0x0A1A,0x96},
    {0x0A1B,0x80},
    {0x0A1C,0x00},
    {0x0A1D,0x01},
    {0x0A1E,0x02},
    {0x0A1F,0x06},
    {0x0A20,0x08},
    {0x0A21,0x04},
    {0x0A22,0x1F},
    {0x0A23,0x3F},
    {0x0A24,0x10},
    {0x0A25,0x10},
    {0x0A26,0x02},
    {0x0A27,0x04},
    {0x0A28,0x0A},
    {0x0A29,0x00},
    {0x0A2A,0x04},
    {0x0A2B,0x04},
    {0x0A2C,0x04},
    {0x0A2D,0x04},
    {0x0A2E,0x01},
    {0x0A2F,0x04},
    {0x0A30,0x04},
    {0x0A31,0x01},
    {0x0A32,0x34},
    {0x0A33,0xFF},
    {0x0A34,0x80},
    {0x0A35,0x34},
    {0x0A36,0x37},
    {0x0A37,0x00},
    {0x0A38,0x00},
    {0x0A39,0x00},
    {0x0A3A,0x9A},
    {0x0A3B,0x00},
    {0x0A3C,0x20},
    {0x0A3D,0x03},
    {0x0A3E,0xF0},
    {0x0A3F,0x00},
    {0x0A40,0xA0},
    {0x0A41,0x05},
    {0x0A42,0x04},
    {0x0A43,0x00},
    {0x0A44,0xC8},
    {0x0A45,0x00},
    {0x0A46,0x00},
    {0x0A47,0x00},
    {0x0A48,0x40},
    {0x0A49,0x01},
    {0x0A4A,0x1A},
    {0x0A4B,0x00},
    {0x0A4C,0x06},
    {0x0A4D,0x02},
    {0x0A4E,0x47},
    {0x0A4F,0x01},
    {0x0A50,0xCC},
    {0x0A51,0x00},
    {0x0A52,0x78},
    {0x0A53,0x68},
    {0x0A54,0x50},
    {0x0A55,0x70},
    {0x0A56,0x0A},
    {0x0A57,0x00},
    {0x0A58,0x24},
    {0x0A59,0x00},
    {0x0A5A,0x00},
    {0x0A5B,0x6C},
    {0x0A5C,0xF0},
    {0x0A5D,0x38},
    {0x0A5E,0xB6},
    {0x0A5F,0xFF},
    {0x0A60,0x00},
    {0x0A61,0x0F},
    {0x0A62,0xF0},
    {0x0A63,0x88},
    {0x0A64,0x22},
    {0x0A65,0x3A},
    {0x0A66,0xD6},
    {0x0A67,0xC5},
    {0x0A68,0x30},
    {0x0A69,0xC5},
    {0x0A6A,0xD0},
    {0x0A6B,0x20},
    {0x0A6C,0xCC},
    {0x0A6D,0x8E},
    {0x0A6E,0x89},
    {0x0A6F,0x85},
    {0x0A70,0x86},
    {0x0A71,0x88},
    {0x0A72,0x8D},
    {0x0A73,0x85},
    {0x0A74,0x95},
    {0x0A75,0x8B},
    {0x0A76,0x01},
    {0x0A77,0x00},
    {0x0A80,0x00},
    {0x0A81,0x00},
    {0x0A82,0x04},
    {0x0A83,0x00},
    {0x0A84,0xB0},
    {0x0A85,0x04},
    {0x0A86,0x05},
    {0x0A87,0x22},
    {0x0A88,0x12},
    {0x0A89,0x65},
    {0x0A8A,0x60},
    {0x0A8B,0x00},
    {0x0A8C,0x65},
    {0x0A8D,0x04},
    {0x0A8E,0x42},
    {0x0A8F,0x00},
    {0x0A90,0x09},
    {0x0A91,0x3D},
    {0x0A92,0x44},
    {0x0A93,0x00},
    {0x0A94,0x0E},
    {0x0A95,0x00},
    {0x0A96,0x96},
    {0x0A97,0x00},
    {0x0A98,0xF0},
    {0x0A99,0x00},
    {0x0A9A,0x00},
    {0x0A9B,0x10},
    {0x0A9C,0x00},
    {0x0A9D,0x04},
    {0x0A9E,0x01},
    {0x0A9F,0x00},
    {0x0AA0,0xF5},
    {0x0AA1,0x04},
    {0x0AA2,0x08},
    {0x0AA3,0x00},
    {0x0AA8,0x00},
    {0x0AA9,0x00},
    {0x0AAA,0xB4},
    {0x0AAB,0x00},
    {0x0AAC,0x48},
    {0x0AAD,0x03},
    {0x0AAE,0x39},
    {0x0AAF,0x00},
    {0x0AB0,0xC0},
    {0x0AB1,0x06},
    {0x0AB2,0x00},
    {0x0AB3,0x00},
    {0x0AB4,0x80},
    {0x0AB5,0x5E},
    {0x0AB6,0x00},
    {0x0AB7,0x00},
    {0x0AB8,0x23},
    {0x0AB9,0x0C},
    {0x0ABA,0x00},
    {0x0ABB,0x01},
    {0x0ABC,0x0F},
    {0x0ABD,0x80},
    {0x0ABE,0xD9},
    {0x0ABF,0x1F},
    {0x0AC0,0xC0},
    {0x0AC1,0x6E},
    {0x0AC2,0x10},
    {0x0AC3,0xD0},
    {0x0AC4,0x2D},
    {0x0AC5,0x00},
    {0x0AC6,0x88},
    {0x0AC7,0x20},
    {0x0AC8,0x00},
    {0x0AC9,0xA0},
    {0x0ACA,0x00},
    {0x0ACB,0x3F},
    {0x0ACC,0x00},
    {0x0ACD,0x43},
    {0x0ACE,0x00},
    {0x0ACF,0x4A},
    {0x0AD0,0x20},
    {0x0AD1,0x33},
    {0x0AD2,0xB0},
    {0x0AD3,0x80},
    {0x0AD4,0x12},
    {0x0AD5,0x0F},
    {0x0AD6,0x21},
    {0x0AD7,0x28},
    {0x0AD8,0x2C},
    {0x0AD9,0x44},
    {0x0ADA,0xA8},
    {0x0ADB,0x70},
    {0x0ADC,0x0F},
    {0x0ADD,0x19},
    {0x0ADE,0x28},
    {0x0ADF,0x2C},
    {0x0AE0,0x00},
    {0x0AE1,0x00},
    {0x0AE2,0x00},
    {0x0AE3,0x00},
    {0x0AFC,0x00},
    {0x0AFD,0x00},
    {0x0AFE,0x00},
    {0x0AFF,0x00},
};

struct cadiz_register_data cadiz_game_switch_config[]={

};

struct cadiz_register_data cadiz_normal_switch_config[]={

};
static int cadiz_i2c_write_u16(u32 addr,u8 val)
{
    int ret = 0;
    u8 write_buf[3];
    struct i2c_client *client = g_sony_client;
    struct i2c_msg msgs[] = {
        {
            .addr = client->addr,
            .flags = client->flags & I2C_M_TEN,
            .len = sizeof(write_buf),
            .buf = write_buf,
        },
    };

    write_buf[0] = addr >> 8;
    write_buf[1] = (u8)(addr & 0xFF);
    write_buf[2] = val;

    ret = i2c_transfer(client->adapter, msgs, 1);
    if(ret != 1){
        HISI_FB_ERR("write transfer error\n");
        ret = -EIO;
    } else {
        ret = 0;
    }
    return ret;
}


static int cadiz_i2c_read_u16(u32 addr,u8* val)
{
    int ret = 0;
    u8 read_buf[2];
    struct i2c_client *client = g_sony_client;
	struct i2c_msg  msgs[] = {
	    {
			.addr = client->addr,
			.flags = client->flags & I2C_M_TEN,
			.len = sizeof(read_buf),
			.buf = read_buf,
	    },
	    {
			.addr = client->addr,
			.flags = (client->flags & I2C_M_TEN) | I2C_M_RD,
			.len = 1,
			.buf = val,
	    },
	};

    read_buf[0] = addr >> 8;
    read_buf[1] = (u8)(addr & 0xFF);

	ret = i2c_transfer(client->adapter, msgs, 2);
	if (ret != 2) {
		HISI_FB_ERR("read transfer error\n");
		ret = -EIO;
	} else {
		ret = 0;
	}
    return ret;
}


static int sony_cadiz_init_boot1(void)
{
    int ret = 0;
    int length,i;
    length = sizeof(cadiz_boot1)/sizeof(struct cadiz_register_data);
    for(i = 0;i< length;i++){
        ret = cadiz_i2c_write_u16(cadiz_boot1[i].reg,cadiz_boot1[i].value);
        if(ret < 0){
            HISI_FB_ERR("[ERR] :register[%d] = 0x%x,value = 0x%x.\n",i,cadiz_boot1[i].reg, cadiz_boot1[i].value);
            break;
        }else{
            HISI_FB_DEBUG("[OK] :register[%d] = 0x%x,value = 0x%x.\n",i,cadiz_boot1[i].reg, cadiz_boot1[i].value);
        }
    }

    length = sizeof(cadiz_default_ipc_config)/sizeof(struct cadiz_register_data);
    for(i = 0;i < length;i++){
        ret = cadiz_i2c_write_u16(cadiz_default_ipc_config[i].reg,cadiz_default_ipc_config[i].value);
        if(ret < 0){
            HISI_FB_ERR("[ERR] :register[%d] = 0x%x,value = 0x%x.\n",i,cadiz_default_ipc_config[i].reg, cadiz_default_ipc_config[i].value);
            break;
        }else{
            HISI_FB_DEBUG("[OK] :register[%d] = 0x%x,value = 0x%x.\n",i,cadiz_default_ipc_config[i].reg, cadiz_default_ipc_config[i].value);
        }
    }
}


static int sony_cadiz_init_boot2()
{
    int ret=0;
    u8 value=0;
    int length,i;
    length = sizeof(cadiz_boot2)/sizeof(struct cadiz_register_data);
    for(i = 0;i<length;i++){
        ret = cadiz_i2c_write_u16(cadiz_boot2[i].reg,cadiz_boot2[i].value);
        if(ret < 0){
            HISI_FB_ERR("[ERR] :register[%d] = 0x%x,value = 0x%x.\n",i,cadiz_boot2[i].reg, cadiz_boot2[i].value);
            break;
        }else{
            HISI_FB_DEBUG("[OK] :register[%d] = 0x%x,value = 0x%x.\n",i,cadiz_boot2[i].reg, cadiz_boot2[i].value);
        }
    }

    udelay(200);

    for(i = 0;i < 3;i++){
        ret = cadiz_i2c_read_u16(0x0207,&value);
        if (ret <0 || value != 0x40){
            HISI_FB_INFO("[ERR]:ret = %d,value = 0x%x,i = %d.\n",ret,value,i);
            continue;
        }else{
            break;
        }
    }
    return ret;
}



static int sony_cadiz_check_reset_status(void)
{
    int ret = 0;
    u8 value = 0;
    int i = 0;
    ret = cadiz_i2c_write_u16(0x0830,0x00);
    //check reg 0x0207 is 0x0040.
    for(i = 0;i < 3; i++){
        ret = cadiz_i2c_read_u16(0x0207,&value);
        if(ret < 0 || value != 0x40){
            HISI_FB_INFO("[%s]:ret = 0x%x,value = 0x%x,i = %d\n", __FUNCTION__, ret, value,i);
            mdelay(100);
            continue;
        }else{
            break;
        }
    }
    return ret;
}

static int Sony_cadiz_check_mipi_status(void)
{
    int ret = 0;
    u8 value = 0;
    int i = 0;
    //check reg 0x0404 is 0x38.
    for(i = 0;i < 10; i++){
        ret = cadiz_i2c_read_u16(0x0404,&value);
        if(ret < 0 || value != 0x38){
            HISI_FB_INFO("[%s]:ret = 0x%x,value = 0x%x,i = %d\n", __FUNCTION__, ret, value,i);
            mdelay(10);
            continue;
        }else{
            break;
        }
    }
    return ret;
}


static struct gpio_desc liszt_lcd_gpio_request_cmds[] = {
	/* backlight enable */
	{DTYPE_GPIO_REQUEST, WAIT_TYPE_MS, 0,GPIO_LCD_BL_ENABLE_NAME, &gpio_lcd_bl_enable, 0},
	/* lcd id */
	{DTYPE_GPIO_REQUEST, WAIT_TYPE_MS, 0,GPIO_LCD_ID0_NAME, &gpio_lcd_id0, 0},
	/* AVDD  */
	{DTYPE_GPIO_REQUEST, WAIT_TYPE_MS, 0,GPIO_LCD_BIAS_ENABLE_NAME, &gpio_lcd_bias_enable, 0},
    /*sony ipc 1v2 enable*/
    {DTYPE_GPIO_REQUEST, WAIT_TYPE_MS, 0,GPIO_IPC_1V2_ENABLE_NAME, &gpio_ipc_1v2_enable, 0},
    /*sony ipc 1v8 enable*/
    {DTYPE_GPIO_REQUEST, WAIT_TYPE_MS, 0,GPIO_IPC_1V8_ENABLE_NAME, &gpio_ipc_1v8_enable, 0},
    /*sony ipc reset*/
    {DTYPE_GPIO_REQUEST, WAIT_TYPE_MS, 0,GPIO_IPC_RESET_NAME, &gpio_ipc_reset, 0},
};

static struct gpio_desc liszt_lcd_gpio_free_cmds[] = {
	/* backlight enable */
	{DTYPE_GPIO_FREE, WAIT_TYPE_MS, 0,GPIO_LCD_BL_ENABLE_NAME, &gpio_lcd_bl_enable, 0},
	/* lcd id */
	{DTYPE_GPIO_FREE, WAIT_TYPE_MS, 0,GPIO_LCD_ID0_NAME, &gpio_lcd_id0, 0},
	/* AVDD */
	{DTYPE_GPIO_FREE, WAIT_TYPE_MS, 0,GPIO_LCD_BIAS_ENABLE_NAME, &gpio_lcd_bias_enable, 0},
    /*sony ipc reset*/
    {DTYPE_GPIO_FREE, WAIT_TYPE_MS, 0,GPIO_IPC_RESET_NAME, &gpio_ipc_reset, 0},
    /*sony ipc 1v2 enable*/
    {DTYPE_GPIO_FREE, WAIT_TYPE_MS, 0,GPIO_IPC_1V2_ENABLE_NAME, &gpio_ipc_1v2_enable, 0},
    /*sony ipc 1v8 enable*/
    {DTYPE_GPIO_FREE, WAIT_TYPE_MS, 0,GPIO_IPC_1V8_ENABLE_NAME, &gpio_ipc_1v8_enable, 0},
};

static struct gpio_desc liszt_lcd_gpio_normal_cmds[] = {
	/* AVDD*/
	{DTYPE_GPIO_OUTPUT, WAIT_TYPE_MS, 5,GPIO_LCD_BIAS_ENABLE_NAME, &gpio_lcd_bias_enable, 1},
	/* lcd id */
	{DTYPE_GPIO_INPUT, WAIT_TYPE_MS, 1,GPIO_LCD_ID0_NAME, &gpio_lcd_id0, 0},
};


static struct gpio_desc liszt_cadiz_power_on_cmds[] = {
    /*sony ipc 1v2 enable*/
    {DTYPE_GPIO_OUTPUT, WAIT_TYPE_US, 200,GPIO_IPC_1V2_ENABLE_NAME, &gpio_ipc_1v2_enable, 1},
    /*sony ipc 1v8 enable*/
    {DTYPE_GPIO_OUTPUT, WAIT_TYPE_MS, 1,GPIO_IPC_1V8_ENABLE_NAME, &gpio_ipc_1v8_enable, 1},
};

static struct gpio_desc liszt_cadiz_power_off_cmds[] = {
    /*sony ipc 1v8 disable*/
    {DTYPE_GPIO_OUTPUT, WAIT_TYPE_MS, 1,GPIO_IPC_1V8_ENABLE_NAME, &gpio_ipc_1v8_enable, 0},
    /*sony ipc 1v2 disable*/
    {DTYPE_GPIO_OUTPUT, WAIT_TYPE_MS, 0,GPIO_IPC_1V2_ENABLE_NAME, &gpio_ipc_1v2_enable, 0},
};


static struct gpio_desc liszt_cadiz_reset_low_cmds[] = {
    /*sony ipc reset low*/
    {DTYPE_GPIO_OUTPUT, WAIT_TYPE_MS, 1,GPIO_IPC_RESET_NAME, &gpio_ipc_reset, 0},
};

static struct gpio_desc liszt_cadiz_reset_high_cmds[] = {
    /*sony ipc reset high*/
    {DTYPE_GPIO_OUTPUT, WAIT_TYPE_MS, 1,GPIO_IPC_RESET_NAME, &gpio_ipc_reset, 1},
};


static struct gpio_desc liszt_lcd_enable_bl_cmds[] = {
	/* backlight enable */
	{DTYPE_GPIO_OUTPUT, WAIT_TYPE_MS, 1,GPIO_LCD_BL_ENABLE_NAME, &gpio_lcd_bl_enable, 1},
};

static struct gpio_desc liszt_lcd_disable_bl_cmds[] = {
	/* backlight enable */
	{DTYPE_GPIO_OUTPUT, WAIT_TYPE_MS, 5,GPIO_LCD_BL_ENABLE_NAME, &gpio_lcd_bl_enable, 0},
};

static struct gpio_desc liszt_lcd_gpio_lowpower_cmds[] = {
	/* AVDDV*/
	{DTYPE_GPIO_OUTPUT, WAIT_TYPE_MS, 5,GPIO_LCD_BIAS_ENABLE_NAME, &gpio_lcd_bias_enable, 0},
	/* backlight enable input */
	{DTYPE_GPIO_INPUT, WAIT_TYPE_US, 100,GPIO_LCD_BL_ENABLE_NAME, &gpio_lcd_bl_enable, 0},
	/* AVDD input */
	{DTYPE_GPIO_INPUT, WAIT_TYPE_MS, 5,	GPIO_LCD_BIAS_ENABLE_NAME, &gpio_lcd_bias_enable, 0},
};

/*******************************************************************************
**
*/
static int mipi_liszt_panel_set_fastboot(struct platform_device *pdev)
{
	struct hisi_fb_data_type *hisifd = NULL;

	BUG_ON(pdev == NULL);
	hisifd = platform_get_drvdata(pdev);
	BUG_ON(hisifd == NULL);

	HISI_FB_INFO("%s,fb%d, +.\n", __func__,hisifd->index);

	/* lcd pinctrl normal */
	pinctrl_cmds_tx(pdev, liszt_lcd_pinctrl_normal_cmds,ARRAY_SIZE(liszt_lcd_pinctrl_normal_cmds));

	/* lcd gpio request */
	gpio_cmds_tx(liszt_lcd_gpio_request_cmds,ARRAY_SIZE(liszt_lcd_gpio_request_cmds));
    vcc_cmds_tx(pdev, liszt_lcd_vcc_enable_cmds,ARRAY_SIZE(liszt_lcd_vcc_enable_cmds));

	/* backlight on */
	hisi_lcd_backlight_on(pdev);

	HISI_FB_INFO("%s,fb%d, -.\n", __func__,hisifd->index);

	return 0;
}

static int mipi_liszt_panel_on(struct platform_device *pdev)
{
	struct hisi_fb_data_type *hisifd = NULL;
	struct hisi_panel_info *pinfo = NULL;
    int ret = -1;

	BUG_ON(pdev == NULL);
	hisifd = platform_get_drvdata(pdev);
	BUG_ON(hisifd == NULL);

	HISI_FB_INFO("fb%d, +!\n", hisifd->index);

	pinfo = &(hisifd->panel_info);

    HISI_FB_INFO("pinfo->lcd_init_step = %d.\n",pinfo->lcd_init_step);

	if (pinfo->lcd_init_step == LCD_INIT_POWER_ON) {
		/* lcd pinctrl normal */
		pinctrl_cmds_tx(pdev, liszt_lcd_pinctrl_normal_cmds,ARRAY_SIZE(liszt_lcd_pinctrl_normal_cmds));
		/* lcd gpio request */
		gpio_cmds_tx(liszt_lcd_gpio_request_cmds,ARRAY_SIZE(liszt_lcd_gpio_request_cmds));

        gpio_cmds_tx(liszt_cadiz_reset_low_cmds,ARRAY_SIZE(liszt_cadiz_reset_low_cmds));
        gpio_cmds_tx(liszt_cadiz_power_on_cmds,ARRAY_SIZE(liszt_cadiz_power_on_cmds));
        ret = clk_prepare_enable(systemclk);
        if (ret) {
            HISI_FB_ERR("clk_out0 enable is failed\n");
        }
        udelay(500);
        /* lcd gpio normal */
		gpio_cmds_tx(liszt_lcd_gpio_normal_cmds,ARRAY_SIZE(liszt_lcd_gpio_normal_cmds));
		vcc_cmds_tx(pdev, liszt_lcd_vcc_enable_cmds,ARRAY_SIZE(liszt_lcd_vcc_enable_cmds));
        gpio_cmds_tx(liszt_cadiz_reset_high_cmds,ARRAY_SIZE(liszt_cadiz_reset_high_cmds));
		pinfo->lcd_init_step = LCD_INIT_MIPI_LP_SEND_SEQUENCE;
	} else if (pinfo->lcd_init_step == LCD_INIT_MIPI_LP_SEND_SEQUENCE) {
        sony_cadiz_check_reset_status();

		//MIPI LP mode, IC noise for MIPI
		mipi_dsi_cmds_tx(shift_to_mipi_cmd,ARRAY_SIZE(shift_to_mipi_cmd), hisifd->mipi_dsi0_base);
        mipi_dsi_cmds_tx(innolux_display_on_cmds,ARRAY_SIZE(innolux_display_on_cmds), hisifd->mipi_dsi0_base);

		/*g_lcd_type = 01(BOE);  g_lcd_type = 00(innolux);*/
		if (LCD_ID_TYPE_BOE == g_lcd_type){
            HISI_FB_INFO("g_lcd_type = %d,this panel is BOE.\n",g_lcd_type);
			//mipi_dsi_cmds_tx(innolux_display_on_cmds,ARRAY_SIZE(innolux_display_on_cmds), hisifd->mipi_dsi0_base);
		}else if(LCD_ID_TYPE_INX == g_lcd_type){
		    HISI_FB_INFO("g_lcd_type = %d,this panel is BOE.\n",g_lcd_type);
            //mipi_dsi_cmds_tx(innolux_display_on_cmds,ARRAY_SIZE(innolux_display_on_cmds), hisifd->mipi_dsi0_base);
        }else{
            HISI_FB_ERR("g_lcd_type = %d is error.\n",g_lcd_type);
        }

        Sony_cadiz_check_mipi_status();
        sony_cadiz_init_boot1();

		pinfo->lcd_init_step = LCD_INIT_MIPI_HS_SEND_SEQUENCE;
	} else if (pinfo->lcd_init_step == LCD_INIT_MIPI_HS_SEND_SEQUENCE) {
		/* backlight on */
        sony_cadiz_init_boot2();
		hisi_lcd_backlight_on(pdev);

	} else {
		HISI_FB_ERR("failed to init lcd!\n");
	}

	HISI_FB_INFO("fb%d, -!\n", hisifd->index);

	return 0;
}

static int mipi_liszt_panel_off(struct platform_device *pdev)
{
	struct hisi_fb_data_type *hisifd = NULL;
    int ret = -1;

	BUG_ON(pdev == NULL);
	hisifd = platform_get_drvdata(pdev);
	BUG_ON(hisifd == NULL);

	HISI_FB_INFO("fb%d, +!\n", hisifd->index);

	/* backlight off */
	hisi_lcd_backlight_off(pdev);
	gpio_cmds_tx(liszt_lcd_disable_bl_cmds,ARRAY_SIZE(liszt_lcd_disable_bl_cmds));
	mdelay(200);

	/* lcd display off sequence */
    mipi_dsi_cmds_tx(sleep_in_cmds,ARRAY_SIZE(sleep_in_cmds), hisifd->mipi_dsi0_base);
	/* lcd gpio lowpower */
	gpio_cmds_tx(liszt_lcd_gpio_lowpower_cmds,ARRAY_SIZE(liszt_lcd_gpio_lowpower_cmds));
    /* lcd vcc disable */
	vcc_cmds_tx(pdev, liszt_lcd_vcc_disable_cmds,ARRAY_SIZE(liszt_lcd_vcc_disable_cmds));

    clk_disable_unprepare(systemclk);
    gpio_cmds_tx(liszt_cadiz_reset_low_cmds,ARRAY_SIZE(liszt_cadiz_reset_low_cmds));
    gpio_cmds_tx(liszt_cadiz_power_off_cmds,ARRAY_SIZE(liszt_cadiz_power_off_cmds));
	/* lcd gpio free */
	gpio_cmds_tx(liszt_lcd_gpio_free_cmds,ARRAY_SIZE(liszt_lcd_gpio_free_cmds));
	/* lcd pinctrl lowpower */
	pinctrl_cmds_tx(pdev, liszt_lcd_pinctrl_lowpower_cmds,ARRAY_SIZE(liszt_lcd_pinctrl_lowpower_cmds));
	mdelay(500);

	checksum_enable_ctl = false;

	HISI_FB_INFO("fb%d, -!\n", hisifd->index);

	return 0;
}

static int mipi_liszt_panel_remove(struct platform_device *pdev)
{
	struct hisi_fb_data_type *hisifd = NULL;

	BUG_ON(pdev == NULL);
	hisifd = platform_get_drvdata(pdev);

	if (!hisifd) {
		return 0;
	}

	HISI_FB_DEBUG("fb%d, +.\n", hisifd->index);

	/* lcd vcc finit */
	vcc_cmds_tx(pdev, liszt_lcd_vcc_finit_cmds,	ARRAY_SIZE(liszt_lcd_vcc_finit_cmds));

	/* lcd pinctrl finit */
	pinctrl_cmds_tx(pdev, liszt_lcd_pinctrl_finit_cmds,	ARRAY_SIZE(liszt_lcd_pinctrl_finit_cmds));

#if AUO_CE_TEST
	jdi_sysfs_deinit(pdev);
#endif

	HISI_FB_DEBUG("fb%d, -.\n", hisifd->index);

	return 0;
}

static int mipi_liszt_panel_set_backlight(struct platform_device *pdev)
{
    struct hisi_fb_data_type *hisifd = NULL;
    u8 level = 0;
    int ret = 0;
    int bl_gpio_status = 0;

    BUG_ON(pdev == NULL);
    hisifd = platform_get_drvdata(pdev);
    BUG_ON(hisifd == NULL);

    HISI_FB_INFO("fb%d, +.\n", hisifd->index);

    level = (u8)(hisifd->bl_level / 2);

    HISI_FB_INFO("%s, level = %d.\n", __func__,level);

    cadiz_i2c_write_u16(0x0C28,level);

    bl_gpio_status = gpio_get_value(gpio_lcd_bl_enable);
    if (0 == bl_gpio_status){
        gpio_cmds_tx(liszt_lcd_enable_bl_cmds, ARRAY_SIZE(liszt_lcd_enable_bl_cmds));
    }

    HISI_FB_INFO("fb%d, -.\n", hisifd->index);

    return ret;
}


/******************************************************************************/
static ssize_t mipi_liszt_panel_lcd_model_show(struct platform_device *pdev,
	char *buf)
{
	struct hisi_fb_data_type *hisifd = NULL;
	ssize_t ret = 0;

	BUG_ON(pdev == NULL);
	hisifd = platform_get_drvdata(pdev);
	BUG_ON(hisifd == NULL);

	HISI_FB_DEBUG("fb%d, +.\n", hisifd->index);

	if (LCD_ID_TYPE_BOE == g_lcd_type){
		ret = snprintf(buf, PAGE_SIZE, "BOE_NT51021 10.1' VIDEO TFT 1200 x 1920\n");
	}else if (LCD_ID_TYPE_INX == g_lcd_type){
		ret = snprintf(buf, PAGE_SIZE, "INX_NT51021 10.1' VIDEO TFT 1200 x 1920\n");
	}else{
		ret = snprintf(buf, PAGE_SIZE, "error, no this panel, check the panel !\n");
	}

	HISI_FB_DEBUG("fb%d, -.\n", hisifd->index);

	return ret;
}

static ssize_t mipi_liszt_panel_lcd_check_reg_show(struct platform_device *pdev, char *buf)
{
	ssize_t ret = 0;
	return ret;
}

static ssize_t mipi_liszt_panel_lcd_mipi_detect_show(struct platform_device *pdev, char *buf)
{
	ssize_t ret = 0;
	struct hisi_fb_data_type *hisifd = NULL;
	char __iomem *mipi_dsi0_base = NULL;
	u32 read_value[2] = {0};
	u32 expected_value[2] = {0x80, 0x00};
	u32 read_mask[2] = {0xFF, 0xFF};
	char* reg_name[2] = {"signal mode", "dsi error number"};
	char lcd_reg_0e[] = {0x0e};
	char lcd_reg_05[] = {0x05};

	struct dsi_cmd_desc lcd_check_reg[] = {
		{DTYPE_DCS_READ, 0, 10, WAIT_TYPE_US,sizeof(lcd_reg_0e), lcd_reg_0e},
		{DTYPE_DCS_READ, 0, 10, WAIT_TYPE_US,sizeof(lcd_reg_05), lcd_reg_05},
	};

	struct mipi_dsi_read_compare_data data = {
		.read_value = read_value,
		.expected_value = expected_value,
		.read_mask = read_mask,
		.reg_name = reg_name,
		.log_on = 1,
		.cmds = lcd_check_reg,
		.cnt = ARRAY_SIZE(lcd_check_reg),
	};

	BUG_ON(pdev == NULL);
	hisifd = platform_get_drvdata(pdev);
	BUG_ON(hisifd == NULL);

	mipi_dsi0_base = hisifd->mipi_dsi0_base;

	HISI_FB_DEBUG("fb%d, +.\n", hisifd->index);

	ret = snprintf(buf, PAGE_SIZE, "OK\n");
	HISI_FB_DEBUG("fb%d, -.\n", hisifd->index);

	return ret;
}

static ssize_t mipi_liszt_panel_lcd_hkadc_debug_show(struct platform_device *pdev, char *buf)
{
	ssize_t ret = 0;
	struct hisi_fb_data_type *hisifd = NULL;

	BUG_ON(pdev == NULL);
	hisifd = platform_get_drvdata(pdev);
	BUG_ON(hisifd == NULL);

	HISI_FB_DEBUG("fb%d, +.\n", hisifd->index);
	ret = snprintf(buf, PAGE_SIZE, "%d\n", hkadc_buf*4);
	HISI_FB_DEBUG("fb%d, -.\n", hisifd->index);

	return ret;
}

static ssize_t mipi_liszt_panel_lcd_hkadc_debug_store(struct platform_device *pdev,
	const char *buf, size_t count)
{
	int ret = 0;
	int channel = 0;
	struct hisi_fb_data_type *hisifd = NULL;

	BUG_ON(pdev == NULL);
	hisifd = platform_get_drvdata(pdev);
	BUG_ON(hisifd == NULL);

	HISI_FB_DEBUG("fb%d, +.\n", hisifd->index);

	ret = sscanf(buf, "%u", &channel);
	if(ret <= 0) {
		HISI_FB_ERR("Sscanf return invalid, ret = %d\n", ret);
		return count;
	}

	hkadc_buf = hisi_adc_get_value(channel);
	HISI_FB_INFO("channel[%d] value is %d\n", channel, hkadc_buf);

	HISI_FB_DEBUG("fb%d, -.\n", hisifd->index);

	return count;
}

static struct hisi_panel_info liszt_panel_info = {0};
static struct hisi_fb_panel_data liszt_panel_data = {
	.panel_info = &liszt_panel_info,
	.set_fastboot = mipi_liszt_panel_set_fastboot,
	.on = mipi_liszt_panel_on,
	.off = mipi_liszt_panel_off,
	.remove = mipi_liszt_panel_remove,
	.set_backlight = mipi_liszt_panel_set_backlight,
	.lcd_model_show = mipi_liszt_panel_lcd_model_show,
	.lcd_cabc_mode_show = NULL,
	.lcd_cabc_mode_store = NULL,
	.lcd_check_reg = mipi_liszt_panel_lcd_check_reg_show,
	.lcd_mipi_detect = mipi_liszt_panel_lcd_mipi_detect_show,
	.lcd_hkadc_debug_show = mipi_liszt_panel_lcd_hkadc_debug_show,
	.lcd_hkadc_debug_store = mipi_liszt_panel_lcd_hkadc_debug_store,
	.lcd_gram_check_show = NULL,
	.lcd_gram_check_store = NULL,
	.lcd_bist_check = NULL,
	.set_display_region = NULL,
	.set_display_resolution = NULL,
};

struct module_enable_define {
	u8 p_crg_clk_pix_grc_gate_en;
	u8 p_crg_clk_pix_spc_gate_en;
	u8 p_crg_clk_pix_com_gate_en;
	u8 p_crg_clk_pix_ice_gate_en;
	u8 p_crg_clk_pix_ace_gate_en;
	u8 p_crg_clk_pix_gty_gate_en;

	u8 P_GRC_BYPASS;
	u8 P_SPC_BYPASS;
	u8 P_COM_BYPASS;
	u8 P_ICE_BYPASS;
	u8 P_ACE_BYPASS;
	u8 P_GTY_BYPASS;
	u8 P_IPC_BYPASS;
	u8 P_SPCON;
	u8 p_bdc_ice_ctrl_en;
	u8 p_vin_share_en;
	u16 p_vin_hdelay_ipc;
};

static  struct module_enable_define module_enable_define_table[] = {
	{1,1,1,1,1,1,0,0,0,0,0,0,0,0xff,1,0,0},
	{0,1,1,1,1,1,1,0,0,0,0,0,0,0xff,1,1,6644},
	{0,0,1,1,1,1,1,1,0,0,0,0,0,0xff,1,1,9302},
	{0,1,0,1,1,1,1,0,1,0,0,0,0,0xff,1,1,6770},
	{0,1,1,0,1,1,1,0,0,1,0,0,0,0xff,0,1,6678},
	{0,0,0,1,1,1,1,1,1,0,0,0,0,0xff,1,1,9428},
	{0,0,1,0,1,1,1,1,0,1,0,0,0,0xff,0,1,9336},
	{0,1,0,0,1,1,1,0,1,1,0,0,0,0xff,0,1,6804},
	{0,0,0,0,1,1,1,1,1,1,0,0,0,0xff,0,1,9462},
	{0,0,0,0,0,0,1,1,1,1,1,1,1,0xff,0,1,9487},
	{1,1,0,1,1,1,0,0,1,0,0,0,0,1,1,0,0},
	{1,1,0,1,1,1,0,0,1,0,0,0,0,0,1,0,0},
	{0,0,0,1,1,1,1,1,1,0,0,0,0,0,1,1,9302},
	{0,0,0,0,0,0,1,1,1,1,1,1,1,0,0,1,9361},
};

static ssize_t mipi_sony_ipc_debug_store(struct device *dev,
                struct device_attribute *attr, const char *buf, size_t size)
{
    int ret  = -1;
    unsigned long value = 0xFF;
    int length,i;
    int offset = 0;
    u8 module_clock_enable=0x40;
    u8 module_bypass=0;
    u8 p_vin_hdelay_ipc_low8;
    u8 p_vin_hdelay_ipc_u8;
    u8 data=0;
    struct cadiz_register_data *effect_area = NULL;

    value = simple_strtoul(buf,NULL,10);
    if (value >= 10){
        HISI_FB_ERR("%s: input value is error.\n",__func__);
        return -EINVAL;
    }

    HISI_FB_INFO("input value  =%d.\n",value);
    HISI_FB_INFO("module_enable_define= %d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,0x%x,%d,%d,%d\n",
                 module_enable_define_table[value].p_crg_clk_pix_grc_gate_en,
                 module_enable_define_table[value].p_crg_clk_pix_spc_gate_en,
                 module_enable_define_table[value].p_crg_clk_pix_com_gate_en,
                 module_enable_define_table[value].p_crg_clk_pix_ice_gate_en,
                 module_enable_define_table[value].p_crg_clk_pix_ace_gate_en,
                 module_enable_define_table[value].p_crg_clk_pix_gty_gate_en,
                 module_enable_define_table[value].P_GRC_BYPASS,
                 module_enable_define_table[value].P_SPC_BYPASS,
                 module_enable_define_table[value].P_COM_BYPASS,
                 module_enable_define_table[value].P_ICE_BYPASS,
                 module_enable_define_table[value].P_ACE_BYPASS,
                 module_enable_define_table[value].P_GTY_BYPASS,
                 module_enable_define_table[value].P_IPC_BYPASS,
                 module_enable_define_table[value].P_SPCON,
                 module_enable_define_table[value].p_bdc_ice_ctrl_en,
                 module_enable_define_table[value].p_vin_share_en,
                 module_enable_define_table[value].p_vin_hdelay_ipc
    );

    module_clock_enable=module_clock_enable
                        |(module_enable_define_table[value].p_crg_clk_pix_gty_gate_en<<5)
                        |(module_enable_define_table[value].p_crg_clk_pix_grc_gate_en<<4)
                        |(module_enable_define_table[value].p_crg_clk_pix_spc_gate_en<<3)
                        |(module_enable_define_table[value].p_crg_clk_pix_com_gate_en<<2)
                        |(module_enable_define_table[value].p_crg_clk_pix_ice_gate_en<<1)
                        |(module_enable_define_table[value].p_crg_clk_pix_ace_gate_en);

    HISI_FB_INFO("[OK] :register module_clock_enable,value = 0x%01x.\n",module_clock_enable);

    module_bypass=(module_enable_define_table[value].P_GTY_BYPASS)
                 |(module_enable_define_table[value].P_GRC_BYPASS<<1)
                 |(module_enable_define_table[value].P_SPC_BYPASS<<2)
                 |(module_enable_define_table[value].P_COM_BYPASS<<3)
                 |(module_enable_define_table[value].P_ICE_BYPASS<<4)
                 |(module_enable_define_table[value].P_ACE_BYPASS<<5)
                 |(module_enable_define_table[value].P_IPC_BYPASS<<7);

    HISI_FB_INFO("[OK] :register module_bypass,value = 0x%01x.\n",module_bypass);

    p_vin_hdelay_ipc_low8 =(module_enable_define_table[value].p_vin_hdelay_ipc)&0xff;
    p_vin_hdelay_ipc_u8   =(module_enable_define_table[value].p_vin_hdelay_ipc>>8)&0xff;
    HISI_FB_INFO("[OK] :register p_vin_hdelay_ipc_u8,value = 0x%01x.\n",p_vin_hdelay_ipc_u8);
    HISI_FB_INFO("[OK] :register p_vin_hdelay_ipc_low8,value = 0x%01x.\n",p_vin_hdelay_ipc_low8);
    //Step1:enable modules clock
    cadiz_i2c_write_u16(0x0841,0x7f);

    //Step2:set module register
    cadiz_i2c_write_u16(0x0908,p_vin_hdelay_ipc_low8);
    cadiz_i2c_write_u16(0x0909,p_vin_hdelay_ipc_u8);
    cadiz_i2c_write_u16(0x090e,0xac);
    cadiz_i2c_write_u16(0x090f,0x0a); //p_vin_bypass_change_tim=2732(0x0aac)
    cadiz_i2c_write_u16(0x0901,0x00);

    cadiz_i2c_write_u16(0x0aff,module_bypass);
    if(module_enable_define_table[value].P_SPCON!=0xff){
        cadiz_i2c_read_u16(0x0ABE,&data);
        data=(data&0xf8)|module_enable_define_table[value].P_SPCON;
        cadiz_i2c_write_u16(0x0ABE,data);
    }
    cadiz_i2c_read_u16(0x0C37,&data);
    data=(data&0xBF)|(module_enable_define_table[value].p_bdc_ice_ctrl_en<<6);
    cadiz_i2c_write_u16(0x0C37,data);
    cadiz_i2c_read_u16(0x0901,&data);
    data=(data&0xfd)|(module_enable_define_table[value].p_vin_share_en<<1);
    cadiz_i2c_write_u16(0x0901,data);

    cadiz_i2c_write_u16(0x0901,data|0x01);
    //Step3: delay
    //udelay(16600);
    mdelay(17);
    //Step4:
    cadiz_i2c_write_u16(0x0841,module_clock_enable);
    //checking for modules status
    ret = cadiz_i2c_read_u16(0xaff,&data);
    if(ret < 0){
        HISI_FB_ERR("[ERR] :register 0x0aff,value = 0x%x.\n",data);
    }else{
        HISI_FB_INFO("[OK] :register 0x0aff,value = 0x%x.\n",data);
    }
    ret = cadiz_i2c_read_u16(0x841,&data);
    if(ret < 0){
        HISI_FB_ERR("[ERR] :register 0x0841,value = 0x%x.\n",data);
    }else{
        HISI_FB_INFO("[OK] :register 0x0841,value = 0x%x.\n",data);
    }
    return size;
}

static ssize_t mipi_sony_ipc_read_show(struct device *dev,
        struct device_attribute *attr, char *buf)
{
    return snprintf(buf, PAGE_SIZE,"reg:0x%04x = 0x%02x\n",sony_ipc_reg_addr,sony_ipc_reg_value);
}

static ssize_t mipi_sony_ipc_write_store(struct device *dev,
                struct device_attribute *attr, const char *buf, size_t size)
{
    int ret  = -1;
    unsigned long flag = 0xFF;
    u8 value = 0;
    ret = sscanf(buf,"%d", &flag);
    if(ret != 1) {
        HISI_FB_ERR("%s: input value is error, ret = %d.\n",ret);
        return -EINVAL;
    }

    if(0 == flag){//read
        sscanf(buf,"%d %x", &flag,&sony_ipc_reg_addr);
        cadiz_i2c_read_u16(sony_ipc_reg_addr,&sony_ipc_reg_value);
    }else if(1 == flag){ //write
        sscanf(buf,"%d %x %x", &flag,&sony_ipc_reg_addr,&value);
        cadiz_i2c_write_u16(sony_ipc_reg_addr,value);
    }else{
        HISI_FB_ERR("%s: input value is error, flag = %d.\n",flag);
    }
    return size;
}

static struct device_attribute attributes[] = {
    __ATTR(ipc_debug, 0220, NULL, mipi_sony_ipc_debug_store),
    __ATTR(ipc_i2c_read_write, 0664, mipi_sony_ipc_read_show, mipi_sony_ipc_write_store),
};

static int add_sysfs_interfaces(struct device *dev)
{
    int i = 0;

    for (i = 0; i < ARRAY_SIZE(attributes); i++) {
        if (device_create_file(dev, attributes + i)) {
            HISI_FB_ERR("%s: %s create fail\n", __func__,attributes[i].attr.name);
            goto undo;
        }
    }

    return 0;
undo:
    for (i--; i >= 0; i--)
        device_remove_file(dev, attributes + i);
    HISI_FB_ERR("%s: failed to create sysfs interface\n", __func__);
    return -ENODEV;
}



/*******************************************************************************
**
*/
static int mipi_liszt_probe(struct platform_device *pdev)
{
	int ret = 0;
	struct hisi_panel_info *pinfo = NULL;
	struct device_node *np = NULL;
	uint32_t bl_type = 0;
#if AUO_CE_TEST
	struct platform_device *this_dev = NULL;
#endif
	int id0 = -1;
    struct device *dev = &pdev->dev;

	if (hisi_fb_device_probe_defer(PANEL_MIPI_CMD))
		goto err_probe_defer;

	HISI_FB_DEBUG("+.\n");

	np = of_find_compatible_node(NULL, NULL, DTS_COMP_LISZT_NT51021);
	if (!np) {
		HISI_FB_ERR("NOT FOUND device node %s!\n", DTS_COMP_LISZT_NT51021);
		goto err_return;
	}

	gpio_lcd_bl_enable   = of_get_named_gpio(np, "gpios", 0);  /*gpio_4_3,  gpio_035*/
	gpio_ipc_1v2_enable  = of_get_named_gpio(np, "gpios", 1);  /*gpio_4_5,  gpio_037*/
	gpio_lcd_id0         = of_get_named_gpio(np, "gpios", 2);  /*gpio_4_6,  gpio_038*/
	gpio_lcd_bias_enable = of_get_named_gpio(np, "gpios", 3);  /*gpio_5_1,  gpio_041*/
	gpio_ipc_1v8_enable  = of_get_named_gpio(np, "gpios", 4);  /*gpio_15_1, gpio_121*/
    gpio_ipc_reset       = of_get_named_gpio(np, "gpios", 5);  /*gpio_24_2, gpio_194*/

    gpio_cmds_tx(liszt_lcd_gpio_request_cmds,ARRAY_SIZE(liszt_lcd_gpio_request_cmds));

	HISI_FB_INFO("gpio bl_enable : %d\n",gpio_lcd_bl_enable);
    HISI_FB_INFO("gpio ipc_1v2_enable : %d\n",gpio_ipc_1v2_enable);
    HISI_FB_INFO("gpio id0 : %d\n",gpio_lcd_id0);
    HISI_FB_INFO("gpio bias_enable : %d\n",gpio_lcd_bias_enable);
    HISI_FB_INFO("gpio ipc_1v8_enable : %d\n",gpio_ipc_1v8_enable);
    HISI_FB_INFO("gpio ipc_reset  : %d\n",gpio_ipc_reset);


    systemclk = of_clk_get_by_name(np, "clk_out0");
    if(IS_ERR(systemclk)){
       HISI_FB_ERR("get clk_out0 failed!\n");
       goto err_return;
    }
    ret = clk_set_rate(systemclk, IPC_SYSTEM_CLK_FREQ_19M);
    if (ret < 0){
        HISI_FB_INFO("set clk_out0 rate failed.\n");
        goto err_return;
    }
    ret = clk_prepare_enable(systemclk);
    if (ret) {
        HISI_FB_ERR("clk_out0 enable is failed\n");
    }

    HISI_FB_INFO("clk_out0 get/set/enable is finished.\n");

	ret = of_property_read_u32(np, LCD_BL_TYPE_NAME, &bl_type);
	if (ret) {
		HISI_FB_ERR("get lcd_bl_type failed!\n");
		bl_type = BL_SET_BY_MIPI;
	}

	ret = of_property_read_u32(np, LCD_VDDIO_TYPE_NAME, &g_vddio_type);
	if (ret) {
		HISI_FB_ERR("get lcd_vddio_type failed!\n");
		g_vddio_type = 0;
	}
	HISI_FB_INFO("get lcd_vddio_type: %d\n", g_vddio_type);

	pdev->id = 1;
	/* init lcd panel info */
	pinfo = liszt_panel_data.panel_info;
	memset(pinfo, 0, sizeof(struct hisi_panel_info));
	pinfo->xres = 1200;
	pinfo->yres = 1920;
	pinfo->width  = 135;  //mm
	pinfo->height = 217; //mm
	pinfo->type = PANEL_MIPI_VIDEO;
	pinfo->orientation = LCD_PORTRAIT;
	pinfo->bpp = LCD_RGB888;
	pinfo->bgr_fmt = LCD_RGB;
	pinfo->bl_set_type = bl_type;

	pinfo->bl_min = 1;
	pinfo->bl_max = 255;
	pinfo->vsync_ctrl_type = 0;

	pinfo->frc_enable = 0;
	pinfo->esd_enable = 0;
	pinfo->dirty_region_updt_support = 0;

	if(runmode_is_factory()) {
		HISI_FB_INFO("sbl_support = 0\n");
		pinfo->sbl_support = 0;
	} else {
		HISI_FB_INFO("sbl_support = 1\n");
		pinfo->sbl_support = 1;
	}

	pinfo->color_temperature_support = 1;
	pinfo->comform_mode_support = 1;
	pinfo->starlight_mode_support = 1;
	pinfo->smart_bl.strength_limit = 128;
	pinfo->smart_bl.calibration_a = 60;
	pinfo->smart_bl.calibration_b = 95;
	pinfo->smart_bl.calibration_c = 5;
	pinfo->smart_bl.calibration_d = 1;
	pinfo->smart_bl.t_filter_control = 5;
	pinfo->smart_bl.backlight_min = 480;
	pinfo->smart_bl.backlight_max = 4096;
	pinfo->smart_bl.backlight_scale = 0xff;
	pinfo->smart_bl.ambient_light_min = 14;
	pinfo->smart_bl.filter_a = 1738;
	pinfo->smart_bl.filter_b = 6;
	pinfo->smart_bl.logo_left = 0;
	pinfo->smart_bl.logo_top = 0;

	pinfo->ifbc_type = IFBC_TYPE_NON;

	pinfo->ldi.h_back_porch = 36;
	pinfo->ldi.h_front_porch = 62;
	pinfo->ldi.h_pulse_width = 2;
	pinfo->ldi.v_back_porch = 24;
	pinfo->ldi.v_front_porch = 104;
	pinfo->ldi.v_pulse_width = 2;

	pinfo->mipi.lane_nums = DSI_4_LANES;
	pinfo->mipi.color_mode = DSI_24BITS_1;
	pinfo->mipi.vc = 0;
	pinfo->mipi.dsi_bit_clk = 481;
	pinfo->pxl_clk_rate = 160*1000000UL;

	/* lcd vcc init */
	ret = vcc_cmds_tx(pdev, liszt_lcd_vcc_init_cmds,ARRAY_SIZE(liszt_lcd_vcc_init_cmds));
	if (ret != 0) {
		HISI_FB_ERR("LCD vcc init failed!\n");
		goto err_return;
	}

	if (fastboot_set_needed) {
		vcc_cmds_tx(pdev, liszt_lcd_vcc_enable_cmds,ARRAY_SIZE(liszt_lcd_vcc_enable_cmds));
	}

	/* lcd pinctrl init */
	ret = pinctrl_cmds_tx(pdev, liszt_lcd_pinctrl_init_cmds,ARRAY_SIZE(liszt_lcd_pinctrl_init_cmds));
	if (ret != 0) {
	        HISI_FB_ERR("Init pinctrl failed, defer\n");
		goto err_return;
	}

	/* alloc panel device data */
	ret = platform_device_add_data(pdev, &liszt_panel_data,	sizeof(struct hisi_fb_panel_data));
	if (ret) {
		HISI_FB_ERR("platform_device_add_data failed!\n");
		goto err_device_put;
	}

	hisi_fb_add_device(pdev);

	if (gpio_request(gpio_lcd_id0, GPIO_LCD_ID0_NAME) != 0) {
		HISI_FB_ERR("failed to gpio_request, lable=%s, gpio=%d!\n",	GPIO_LCD_ID0_NAME, gpio_lcd_id0);
	}

	id0 = gpio_get_value(gpio_lcd_id0);

	/*id0: = 00(BOE);  id0: = 1(innolux);*/
	if (LCD_ID_TYPE_BOE == id0){
		g_lcd_type  = 0; //BOE
		HISI_FB_INFO("BOE_NT51021 10.1' VIDEO TFT 1200 x 1920\n");
	}else if (LCD_ID_TYPE_INX == id0){
		g_lcd_type  = 1; //innolux
		HISI_FB_INFO("innolux_NT51021 10.1' VIDEO TFT 1200 x 1920\n");
	}else{
		g_lcd_type = 2;
		HISI_FB_INFO("error, no this panel, check the panel !\n");
	}

    add_sysfs_interfaces(dev);

    ret = sysfs_create_link(NULL,&dev->kobj,"sony_ipc");
    if (ret) {
        HISI_FB_INFO("%s: Fail create link rc=%d\n",ret);
    }

	HISI_FB_DEBUG("-.\n");

	return 0;

err_device_put:
	platform_device_put(pdev);
err_return:
	return ret;
err_probe_defer:
	return -EPROBE_DEFER;
}


static int cadiz_i2c_probe(struct i2c_client *client,
    const struct i2c_device_id *i2c_id)
{
    struct device_node *np = NULL;
    int ret = 0;

    HISI_FB_INFO("+.\n");
    if (!i2c_check_functionality(client->adapter, I2C_FUNC_I2C)) {
        HISI_FB_ERR("%s: I2C functionality not Supported.\n", __func__);
        return -EIO;
    }

    np = of_find_compatible_node(NULL, NULL, CADIZ_DEV_NAME);
	if (!np) {
		HISI_FB_ERR("NOT FOUND device node %s!\n", CADIZ_DEV_NAME);
        ret = -1;
		goto err_return;
	}
    g_sony_client = client;
err_return:

    HISI_FB_INFO("-.\n");
    return ret;
}

static const struct of_device_id hisi_panel_match_table[] = {
    {
        .compatible = DTS_COMP_LISZT_NT51021,
        .data = NULL,
    },
    {},
};
MODULE_DEVICE_TABLE(of, hisi_panel_match_table);

static struct platform_driver this_driver = {
	.probe = mipi_liszt_probe,
	.remove = NULL,
	.suspend = NULL,
	.resume = NULL,
	.shutdown = NULL,
	.driver = {
		.name = "mipi_liszt_NT51021",
		.owner = THIS_MODULE,
		.of_match_table = of_match_ptr(hisi_panel_match_table),
	},
};

#define CADIZ_I2C_NAME "cadiz_i2c_ipc"
static const struct i2c_device_id cadiz_i2c_id[] = {
    { CADIZ_I2C_NAME, 0, },
    { }
};

static struct of_device_id cadiz_i2c_of_match[] = {
    { .compatible = "sony,cadiz_i2c_adapter", },
    { }
};
MODULE_DEVICE_TABLE(of, cadiz_i2c_of_match);

static struct i2c_driver cadiz_i2c_driver = {
    .driver = {
        .name = CADIZ_I2C_NAME,
        .owner = THIS_MODULE,
        .of_match_table = cadiz_i2c_of_match,
    },
    .probe = cadiz_i2c_probe,
    .id_table = cadiz_i2c_id,
};

static int __init mipi_liszt_panel_init(void)
{
	int ret = 0;

	ret = platform_driver_register(&this_driver);
	if (ret) {
		HISI_FB_ERR("platform_driver_register failed, error=%d!\n", ret);
		return ret;
	}

    ret = i2c_add_driver(&cadiz_i2c_driver);
    if (ret) {
        HISI_FB_ERR("cadiz I2C Driver add fail, rc = %d.\n",ret);
    }

	return ret;
}

module_init(mipi_liszt_panel_init);

