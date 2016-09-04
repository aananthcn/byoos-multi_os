/*
 * Author: Aananth C N
 * Date: 15 Oct 2014
 * License: GPLv2
 * Email: c.n.aananth@gmail.com
 *
 * Purpose: This file has definitions that are required to initialize the ARM
 * core required for "BYOOS" to run.
 *
 * Note -- the entry function byoos_setup() is placed in section ".setup"
 */
#include "byoos_config.h" /* soc_setup() declaration comes via this file */
#include "byoos.h"

extern int byoos_setup(void) __attribute__((section(".setup")));


int arm_setup(int core)
{
	/* disable SMP or set AMP for the core passed */
	return 0;
}


int byoos_setup(void)
{
	*((unsigned long *)(0x021F0040)) = '%';
	soc_setup();
	arm_setup(Core);
	/* boot_core(3); */

	return 0;
}
