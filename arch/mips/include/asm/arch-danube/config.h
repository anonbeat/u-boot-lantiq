/*
 * Copyright (C) 2014 Daniel Schwierzeck, daniel.schwierzeck@gmail.com
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

#ifndef __ARCH_DANUBE_CONFIG_H
#define __ARCH_DANUBE_CONFIG_H

/* CPU */
#define CONFIG_SYS_MIPS_TIMER_FREQ	166666667

/* Caches */
#define CONFIG_SYS_MIPS_CACHE_MODE	CONF_CM_CACHABLE_NONCOHERENT
#define CONFIG_SYS_DCACHE_SIZE		(16 * 1024)
#define CONFIG_SYS_ICACHE_SIZE		(16 * 1024)
#define CONFIG_SYS_CACHELINE_SIZE	32
#define CONFIG_SYS_MIPS_CACHE_EXT_INIT

/* RAM */
#define CONFIG_NR_DRAM_BANKS		1
#define CONFIG_SYS_SDRAM_BASE		0x80000000
#define CONFIG_SYS_SDRAM_BASE_UC	0xa0000000
#define CONFIG_SYS_MEMTEST_START	0x81000000
#define CONFIG_SYS_MEMTEST_END		0x82000000
#define CONFIG_SYS_LOAD_ADDR		0x81000000

/* SRAM */
#define CONFIG_SYS_SRAM_BASE		0xbe220000
#define CONFIG_SYS_SRAM_SIZE		0x10000

/* U-Boot */
#if defined(CONFIG_LANTIQ_BOOT_RAM)
#define CONFIG_SYS_TEXT_BASE		0xa0100000
#define CONFIG_SYS_INIT_SP_ADDR		0xa0104000
#define CONFIG_SKIP_LOWLEVEL_INIT
#endif

#define	CONFIG_SYS_MONITOR_BASE		CONFIG_SYS_TEXT_BASE

#endif /* __ARCH_DANUBE_CONFIG_H */