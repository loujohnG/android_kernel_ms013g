/* Copyright (c) 2011-2013, The Linux Foundation. All rights reserved.
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

#include <linux/batterydata-lib.h>

static struct single_row_lut fcc_temp = {
	.x		= {-20, 0, 25, 40, 60},
	.y		= {2101, 2120, 2123, 2124, 2120},
	.cols	= 5
};

static struct single_row_lut fcc_sf = {
	.x		= {0},
	.y		= {100},
	.cols	= 1
};

static struct sf_lut rbatt_sf = {
	.rows		= 30,
	.cols		= 5,
	.row_entries		= {-20, 0, 25, 40, 60},
	.percent	= {100, 95, 90, 85, 80, 75, 70, 65, 60, 55, 50, 45, 40, 35, 30, 25, 20, 16, 13, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1},
	.sf		= {
				{1005, 203, 100, 88, 90},
				{1005, 203, 100, 88, 90},
				{946, 211, 102, 90, 92},
				{884, 219, 105, 92, 93},
				{844, 225, 109, 93, 94},
				{798, 225, 113, 96, 96},
				{780, 202, 118, 98, 98},
				{771, 194, 127, 103, 101},
				{768, 191, 131, 110, 105},
				{769, 191, 101, 92, 94},
				{778, 192, 101, 90, 93},
				{797, 195, 102, 92, 96},
				{828, 200, 104, 95, 98},
				{874, 209, 106, 97, 100},
				{934, 223, 110, 95, 99},
				{1016, 241, 112, 95, 95},
				{1131, 260, 110, 94, 96},
				{1256, 275, 111, 96, 96},
				{1464, 288, 113, 96, 97},
				{1596, 278, 114, 96, 98},
				{1421, 278, 119, 98, 100},
				{1700, 285, 126, 102, 100},
				{2084, 299, 128, 106, 102},
				{2652, 322, 129, 109, 103},
				{3636, 359, 130, 109, 105},
				{5669, 422, 131, 108, 105},
				{12056, 542, 128, 107, 105},
				{32452, 844, 134, 109, 107},
				{50330, 1746, 147, 119, 117},
				{67130, 3536, 236, 147, 123},
	}
};

static struct pc_temp_ocv_lut pc_temp_ocv = {
	.rows		= 31,
	.cols		= 5,
	.temp		= {-20, 0, 25, 40, 60},
	.percent	= {100, 95, 90, 85, 80, 75, 70, 65, 60, 55, 50, 45, 40, 35, 30, 25, 20, 16, 13, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0},
	.ocv		= {
				{4341, 4338, 4333, 4329, 4321},
				{4248, 4263, 4265, 4263, 4257},
				{4170, 4202, 4205, 4203, 4198},
				{4099, 4144, 4148, 4147, 4143},
				{4042, 4089, 4094, 4093, 4089},
				{3975, 4036, 4043, 4042, 4039},
				{3928, 3968, 3996, 3996, 3993},
				{3887, 3921, 3955, 3955, 3952},
				{3852, 3882, 3911, 3914, 3913},
				{3821, 3849, 3855, 3858, 3858},
				{3796, 3822, 3826, 3827, 3827},
				{3776, 3800, 3803, 3805, 3805},
				{3760, 3784, 3787, 3788, 3787},
				{3741, 3775, 3775, 3775, 3773},
				{3720, 3769, 3768, 3764, 3759},
				{3694, 3758, 3758, 3751, 3737},
				{3661, 3733, 3737, 3729, 3716},
				{3630, 3696, 3706, 3701, 3690},
				{3593, 3660, 3679, 3678, 3668},
				{3555, 3624, 3665, 3671, 3663},
				{3529, 3601, 3653, 3664, 3658},
				{3500, 3579, 3637, 3654, 3650},
				{3465, 3559, 3615, 3638, 3637},
				{3423, 3542, 3591, 3617, 3619},
				{3370, 3523, 3565, 3589, 3591},
				{3307, 3498, 3535, 3551, 3550},
				{3229, 3456, 3482, 3496, 3492},
				{3157, 3391, 3413, 3425, 3421},
				{3094, 3305, 3323, 3337, 3335},
				{3043, 3182, 3201, 3212, 3211},
				{3000, 3000, 3000, 3000, 3000}
	}
};

struct bms_battery_data Samsung_8x26_S3LITE_2100mAh_data = {
	.fcc				= 2100,
	.fcc_temp_lut			= &fcc_temp,
	.fcc_sf_lut				= &fcc_sf,
	.pc_temp_ocv_lut		= &pc_temp_ocv,
	.rbatt_sf_lut			= &rbatt_sf,
	.default_rbatt_mohm	= 176
};
