/*
 * Author: Aananth C N
 * Date: 10 Oct 2014
 * License: GPLv2
 * Email: c.n.aananth@gmail.com
 *
 * Purpose: This file contains all definitions that are required to support the
 * debug requirements for BYOOS (Boot Your Own Operating System)
 */
#include <stdint.h>
#include "byoos_config.h"
#include "debug.h"

/*-----------------------------------------------------------------------------
 * Globals */

int Core = CFG_MYOS_CORE;


/*-----------------------------------------------------------------------------
 * Functions */

void low_level_init(void (*reset_addr)(), void (*return_addr)())
{
	/* nothing so far */
}

/* All BYOOS init are done here */
void byoos_init(void)
{
	debug_sys_init();
}

/* BYOOS main */
int byoos_main(void)
{
	static uint8_t count;

	*((unsigned long *)(0x021F0040)) = '#';
	byoos_init();
	*((unsigned long *)(0x021F0040)) = '@';
	debugp(INFO_MSG, "MYOS init complete, entering main loop \n");
	*((unsigned long *)(0x021F0040)) = '+';

	while(1) {
		count++;
		if(!count) {
			debugp(INFO_MSG, "DI Kernel is alive");
		}
	}

	return 0;
}
