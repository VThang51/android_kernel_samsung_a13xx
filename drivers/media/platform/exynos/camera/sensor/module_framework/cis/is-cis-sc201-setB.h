/*
 * Samsung Exynos5 SoC series Sensor driver
 *
 *
 * Copyright (c) 2022 Samsung Electronics Co., Ltd
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef IS_CIS_SC201_SET_B_H
#define IS_CIS_SC201_SET_B_H

#include "is-cis.h"
#include "is-cis-sc201.h"

/* 
 * Reference Version : SC201CS_setting_Samsung_V1.0.3_제품용_2022.06.10.xlsx
 */

const u32 sensor_sc201_setfile_B_Global[] = {
	0x0103,	0x01,	0x01,
	0x0100,	0x00,	0x01,
	0x36e9,	0x80,	0x01,
	0x3248,	0x02,	0x01,
	0x3253,	0x0a,	0x01,
	0x3301,	0xff,	0x01,
	0x3302,	0xff,	0x01,
	0x3303,	0x10,	0x01,
	0x3306,	0x28,	0x01,
	0x3307,	0x02,	0x01,
	0x330a,	0x00,	0x01,
	0x3318,	0x02,	0x01,
	0x3320,	0x06,	0x01,
	0x3321,	0x02,	0x01,
	0x3326,	0x12,	0x01,
	0x3327,	0x0e,	0x01,
	0x3328,	0x03,	0x01,
	0x3329,	0x0f,	0x01,
	0x3364,	0x4f,	0x01,
	0x33b3,	0x40,	0x01,
	0x33f9,	0x2c,	0x01,
	0x33fb,	0x38,	0x01,
	0x33fc,	0x0f,	0x01,
	0x33fd,	0x1f,	0x01,
	0x349f,	0x03,	0x01,
	0x34a6,	0x01,	0x01,
	0x34a7,	0x1f,	0x01,
	0x34a8,	0x40,	0x01,
	0x34a9,	0x30,	0x01,
	0x3622,	0x60,	0x01,
	0x3623,	0x40,	0x01,
	0x3624,	0x61,	0x01,
	0x3625,	0x08,	0x01,
	0x3626,	0x03,	0x01,
	0x3630,	0xa8,	0x01,
	0x3631,	0x84,	0x01,
	0x3632,	0x90,	0x01,
	0x3633,	0x43,	0x01,
	0x3634,	0x09,	0x01,
	0x3635,	0x82,	0x01,
	0x3636,	0x48,	0x01,
	0x3637,	0xe4,	0x01,
	0x3641,	0x22,	0x01,
	0x3670,	0x0f,	0x01,
	0x3674,	0xc0,	0x01,
	0x3675,	0xc0,	0x01,
	0x3676,	0xc0,	0x01,
	0x3677,	0x86,	0x01,
	0x3678,	0x88,	0x01,
	0x3679,	0x8c,	0x01,
	0x367c,	0x01,	0x01,
	0x367d,	0x0f,	0x01,
	0x367e,	0x01,	0x01,
	0x367f,	0x0f,	0x01,
	0x3690,	0x63,	0x01,
	0x3691,	0x63,	0x01,
	0x3692,	0x73,	0x01,
	0x369c,	0x01,	0x01,
	0x369d,	0x1f,	0x01,
	0x369e,	0x8a,	0x01,
	0x369f,	0x9e,	0x01,
	0x36a0,	0xda,	0x01,
	0x36a1,	0x01,	0x01,
	0x36a2,	0x03,	0x01,
	0x3900,	0x0d,	0x01,
	0x3905,	0x98,	0x01,
	0x391b,	0x81,	0x01,
	0x391c,	0x10,	0x01,
	0x391d,	0x19,	0x01,
	0x3944,	0x01,	0x01,
	0x3945,	0xf6,	0x01,
	0x3949,	0xc8,	0x01,
	0x394b,	0x64,	0x01,
	0x3952,	0x02,	0x01,
	0x4502,	0x34,	0x01,
	0x4509,	0x30,	0x01,
	0x450a,	0x71,	0x01,
};

const u32 sensor_sc201_setfile_B_1600x1200_30fps[] = {
	0x36ea,	0xcb,	0x01,
	0x36eb,	0x25,	0x01,
	0x36ec,	0x00,	0x01,
	0x36ed,	0x04,	0x01,
	0x36e9,	0x20,	0x01,
	0x301f,	0x10,	0x01,
	0x303f,	0x01,	0x01,
	0x3203,	0x00,	0x01,
	0x3206,	0x04,	0x01,
	0x3207,	0xb7,	0x01,
	0x3208,	0x06,	0x01,
	0x3209,	0x40,	0x01,
	0x320a,	0x04,	0x01,
	0x320b,	0xb0,	0x01,
	0x320c,	0x07,	0x01,
	0x320d,	0x80,	0x01,
	0x320e,	0x04,	0x01,
	0x320f,	0xd9,	0x01,
	0x3211,	0x04,	0x01,
	0x3212,	0x00,	0x01,
	0x3213,	0x04,	0x01,
	0x3215,	0x11,	0x01,
	0x3220,	0x13,	0x01,
	0x3221,	0x00,	0x01,
	0x3222,	0x00,	0x01,
	0x3230,	0x00,	0x01,
	0x3231,	0x04,	0x01,
	0x330b,	0xb0,	0x01,
	0x34ab,	0xa6,	0x01,
	0x34ad,	0xa6,	0x01,
	0x3904,	0x06,	0x01,
	0x3908,	0x40,	0x01,
	0x3021,	0x86,	0x01,
	0x3e00,	0x00,	0x01,
	0x3e01,	0x4d,	0x01,
	0x3e02,	0x50,	0x01,
	0x3e09,	0x00,	0x01,
	0x3e06,	0x00,	0x01,
	0x3e07,	0x80,	0x01,
	0x4819,	0x09,	0x01,
	0x481b,	0x05,	0x01,
	0x481d,	0x13,	0x01,
	0x481f,	0x04,	0x01,
	0x4821,	0x0a,	0x01,
	0x4823,	0x05,	0x01,
	0x4825,	0x04,	0x01,
	0x4827,	0x05,	0x01,
	0x4829,	0x08,	0x01,
	0x5000,	0x06,	0x01,
	0x5900,	0x01,	0x01,
	0x5901,	0x00,	0x01,
};

const u32 sensor_sc201_setfile_B_1600x900_30fps[] = {
	0x36ea,	0xcb,	0x01,
	0x36eb,	0x25,	0x01,
	0x36ec,	0x00,	0x01,
	0x36ed,	0x04,	0x01,
	0x36e9,	0x20,	0x01,
	0x301f,	0x20,	0x01,
	0x303f,	0x01,	0x01,
	0x3203,	0x96,	0x01,
	0x3206,	0x04,	0x01,
	0x3207,	0x21,	0x01,
	0x3208,	0x06,	0x01,
	0x3209,	0x40,	0x01,
	0x320a,	0x03,	0x01,
	0x320b,	0x84,	0x01,
	0x320c,	0x07,	0x01,
	0x320d,	0x80,	0x01,
	0x320e,	0x04,	0x01,
	0x320f,	0xd9,	0x01,
	0x3211,	0x04,	0x01,
	0x3212,	0x00,	0x01,
	0x3213,	0x04,	0x01,
	0x3215,	0x11,	0x01,
	0x3220,	0x13,	0x01,
	0x3221,	0x00,	0x01,
	0x3222,	0x00,	0x01,
	0x3230,	0x00,	0x01,
	0x3231,	0x04,	0x01,
	0x330b,	0xb0,	0x01,
	0x34ab,	0xa6,	0x01,
	0x34ad,	0xa6,	0x01,
	0x3904,	0x06,	0x01,
	0x3908,	0x40,	0x01,
	0x3021,	0x86,	0x01,
	0x3e00,	0x00,	0x01,
	0x3e01,	0x4d,	0x01,
	0x3e02,	0x50,	0x01,
	0x3e09,	0x00,	0x01,
	0x3e06,	0x00,	0x01,
	0x3e07,	0x80,	0x01,
	0x4819,	0x09,	0x01,
	0x481b,	0x05,	0x01,
	0x481d,	0x13,	0x01,
	0x481f,	0x04,	0x01,
	0x4821,	0x0a,	0x01,
	0x4823,	0x05,	0x01,
	0x4825,	0x04,	0x01,
	0x4827,	0x05,	0x01,
	0x4829,	0x08,	0x01,
	0x5000,	0x06,	0x01,
	0x5900,	0x01,	0x01,
	0x5901,	0x00,	0x01,
};

const u32 sensor_sc201_setfile_B_800x600_60fps[] = {
	0x36ea,	0xcb,	0x01,
	0x36eb,	0x24,	0x01,
	0x36ec,	0x00,	0x01,
	0x36ed,	0x14,	0x01,
	0x36e9,	0x20,	0x01,
	0x301f,	0x1d,	0x01,
	0x303f,	0x82,	0x01,
	0x3203,	0x00,	0x01,
	0x3206,	0x04,	0x01,
	0x3207,	0xb7,	0x01,
	0x3208,	0x03,	0x01,
	0x3209,	0x20,	0x01,
	0x320a,	0x02,	0x01,
	0x320b,	0x58,	0x01,
	0x320c,	0x07,	0x01,
	0x320d,	0x46,	0x01,
	0x320e,	0x02,	0x01,
	0x320f,	0x80,	0x01,
	0x3211,	0x02,	0x01,
	0x3212,	0x00,	0x01,
	0x3213,	0x02,	0x01,
	0x3215,	0x31,	0x01,
	0x3220,	0x01,	0x01,
	0x3221,	0x00,	0x01,
	0x3222,	0x00,	0x01,
	0x3230,	0x00,	0x01,
	0x3231,	0x04,	0x01,
	0x330b,	0xa0,	0x01,
	0x34ab,	0xa0,	0x01,
	0x34ad,	0xa4,	0x01,
	0x3904,	0x04,	0x01,
	0x3908,	0x40,	0x01,
	0x3021,	0x86,	0x01,
	0x3e00,	0x00,	0x01,
	0x3e01,	0x27,	0x01,
	0x3e02,	0xa0,	0x01,
	0x3e09,	0x00,	0x01,
	0x3e06,	0x00,	0x01,
	0x3e07,	0x80,	0x01,
	0x4819,	0x05,	0x01,
	0x481b,	0x03,	0x01,
	0x481d,	0x0a,	0x01,
	0x481f,	0x02,	0x01,
	0x4821,	0x08,	0x01,
	0x4823,	0x03,	0x01,
	0x4825,	0x02,	0x01,
	0x4827,	0x03,	0x01,
	0x4829,	0x04,	0x01,
	0x5000,	0x46,	0x01,
	0x5900,	0x01,	0x01,
	0x5901,	0x04,	0x01,
};

const u32 sensor_sc201_setfile_B_Fsync_Slave[] = {
	0x3222,	0x02,	0x01,
	0x3230,	0x00,	0x01,
	0x3231,	0x04,	0x01,
};

const u32 sensor_sc201_setfile_B_Fsync_Master[] = {
	0x3222,	0x00,	0x01,
	0x3230,	0x00,	0x01,
	0x3231,	0x04,	0x01,
};

const struct sensor_pll_info_compact sensor_sc201_pllinfo_B_1600x1200_30fps = {
	EXT_CLK_Mhz * 1000 * 1000,   /* ext_clk */
	715 * 1000 * 1000,           /* mipi_datarate = OPSYCK */
	715 * 100 * 1000,            /* pclk = VTPXCK*/
	1241,                        /* frame_length_lines */
	1920,                        /* line_length_pck */
};

const struct sensor_pll_info_compact sensor_sc201_pllinfo_B_1600x900_30fps = {
	EXT_CLK_Mhz * 1000 * 1000,   /* ext_clk */
	715 * 1000 * 1000,           /* mipi_datarate = OPSYCK */
	715 * 100 * 1000,            /* pclk = VTPXCK*/
	1241,                        /* frame_length_lines */
	1920,                        /* line_length_pck */
};

const struct sensor_pll_info_compact sensor_sc201_pllinfo_B_800x600_60fps = {
	EXT_CLK_Mhz * 1000 * 1000,   /* ext_clk */
	3575 * 100 * 1000,           /* mipi_datarate = OPSYCK */
	715 * 100 * 1000,            /* pclk = VTPXCK*/
	640,                         /* frame_length_lines */
	1862,                        /* line_length_pck */
};

static const u32 *sensor_sc201_setfiles_B[] = {
	sensor_sc201_setfile_B_1600x1200_30fps,
	sensor_sc201_setfile_B_1600x900_30fps,
	sensor_sc201_setfile_B_800x600_60fps,
};

static const u32 sensor_sc201_setfile_B_sizes[] = {
	ARRAY_SIZE(sensor_sc201_setfile_B_1600x1200_30fps),
	ARRAY_SIZE(sensor_sc201_setfile_B_1600x900_30fps),
	ARRAY_SIZE(sensor_sc201_setfile_B_800x600_60fps),
};

static const struct sensor_pll_info_compact *sensor_sc201_pllinfos_B[] = {
	&sensor_sc201_pllinfo_B_1600x1200_30fps,
	&sensor_sc201_pllinfo_B_1600x900_30fps,
	&sensor_sc201_pllinfo_B_800x600_60fps,
};

#endif
