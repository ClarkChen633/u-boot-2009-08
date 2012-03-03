/*
 * Copyright (C) 2010 Freescale Semiconductor, Inc.
 *
 * Configuration settings for the MX53-EVK Freescale board.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.	 See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston,
 * MA 02111-1307 USA
 */

#ifndef __NITROGEN53A_H
#define __NITROGEN53A_H

#include <configs/nitrogen53.h>
#undef CONFIG_MACH_TYPE
#define CONFIG_MACH_TYPE	MACH_TYPE_MX53_NITROGEN_K
#undef CONFIG_BOARD_NAME
#define CONFIG_BOARD_NAME	"MX53-Nitrogen_K"

#define CONFIG_LDO10_OFF
#undef CONFIG_TFP410_LDO10
#define CONFIG_W3

#undef CONFIG_PWM2_DUTY
#define CONFIG_PWM2_DUTY	230	/* 230 out of 256 */

#undef CONFIG_UART_BASE_ADDR

#define CONFIG_W3_SCL_PIN	MX53_PIN_EIM_A18
#define CONFIG_W3_SCL		MAKE_GP(2, 20)	/* EIM_A18 */
#define CONFIG_W3_SDA_PIN	MX53_PIN_EIM_A19
#define CONFIG_W3_SDA		MAKE_GP(2, 19)	/* EIM_A19 */

#define CONFIG_UART_BASE_ADDR	UART1_BASE_ADDR
#define CONFIG_W3_CS_PIN	MX53_PIN_EIM_D24
#define CONFIG_W3_CS		MAKE_GP(3, 24)	/* EIM_D24 */
#endif

//#define CONFIG_POWER_KEY
#define CONFIG_EMMC_DDR_MODE

/* Indicate to esdhc driver which ports support 8-bit data */
#define CONFIG_MMC_8BIT_PORTS           0x2   /* dev1 esdhc4 */

#define CONFIG_POWER_KEY

#endif
