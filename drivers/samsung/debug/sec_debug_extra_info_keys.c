/*
 * Samsung debugging features for Samsung's SoC's.
 *
 * Copyright (c) 2014-2019 Samsung Electronics Co., Ltd.
 *      http://www.samsung.com
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 */

/* keys are grouped by size */
static char key32[][MAX_ITEM_KEY_LEN] = {
	"ID", "KTIME", "BIN", "RR",
	"DPM", "SMP", "MER", "PCB", "SMD",
	"CHI", "LPI", "CDI", "LEV", "DCN",
	"WAK", "ASB", "PSITE", "DDRID", "RST",
	"INFO2", "INFO3", "RBASE", "MAGIC", "RSTCNT",
};

static char key64[][MAX_ITEM_KEY_LEN] = {
	"ETC", "BAT", "FAULT", "PINFO", "HINT",
	"EPD", "PWR", "PWROFF", "PINT", "PSTAT",
	"PWROFFS", "PINTS", "PSTATS",
};

static char key256[][MAX_ITEM_KEY_LEN] = {
	"KLG", "BUS", "PANIC", "PC", "LR",
	"BUG", "ESR", "SMU", "FREQ", "ODR",
	"AUD", "UNFZ", "UP", "DOWN",
};

static char key1024[][MAX_ITEM_KEY_LEN] = {
	"CPU0", "CPU1", "CPU2", "CPU3", "CPU4",
	"CPU5", "CPU6", "CPU7", "MFC", "STACK",
	"FPMU",
};

/* keys are grouped by sysfs node */
static char akeys[][MAX_ITEM_KEY_LEN] = {
	"ID", "KTIME", "BIN", "FAULT",
	"BUG", "PC", "LR", "STACK", "RR",
	"RSTCNT", "PINFO", "SMU", "BUS", "DPM",
	"ETC", "ESR", "MER", "PCB", "SMD",
	"CHI", "LPI", "CDI", "KLG", "PANIC",
	"LEV", "DCN", "WAK", "BAT", "SMP",
};

static char bkeys[][MAX_ITEM_KEY_LEN] = {
	"ID", "RR", "ASB", "PSITE", "DDRID",
	"RST", "INFO2", "INFO3", "RBASE", "MAGIC",
	"PWR", "PWROFF", "PINT", "PSTAT",
	"PWROFFS", "PINTS", "PSTATS", "FREQ", "EPD",
	"UNFZ",
};

static char ckeys[][MAX_ITEM_KEY_LEN] = {
	"ID", "RR", "CPU0", "CPU1", "CPU2",
	"CPU3", "CPU4", "CPU5", "CPU6", "CPU7",
};

static char fkeys[][MAX_ITEM_KEY_LEN] = {
	"ID", "RR", "UP", "DOWN", "FPMU",
};

static char mkeys[][MAX_ITEM_KEY_LEN] = {
	"ID", "RR", "MFC", "ODR", "AUD",
	"HINT",
};

