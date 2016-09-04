/*
 * Author: 	Aananth C N
 * Date: 	14 Oct 2014
 * License: 	GPLv2
 * Email: 	c.n.aananth@gmail.com
 *
 * Purpose: 	Configuration file for BYOOS (Boot Your Own Operating System).
 */
#ifndef BYOOS_CONFIG_H
#define BYOOS_CONFIG_H

/*
 * Platform header - include the platform header file here
 */
#include "imx6x.h"

/* 
 * Core number - Choose the core on which you want BYOOS to host another OS or 
 * 		 scheduler
 *
 * Note: numbering starts from '0'
 * 	SabreAuto 	- 3
 * 	EagleUpdate 	- 1 (for dual core boards)
 */
#define CFG_MYOS_CORE	3

/* 
 * UART number - Choose the Debug UART peripheral number used for debugging
 *
 * Note: numbering starts from '0'
 * 	SabreAuto 	- 3 (ttymxc3 & UART4)
 * 	EagleUpdate 	- 4 (ttymxc4 & UART5)
 */
#define CFG_MYOS_UART	3


/* 
 * Debug char max - Choose the max allowed number of char per debug call 
 */
#define CFG_DEBUG_CHAR_MAX	64

#endif
