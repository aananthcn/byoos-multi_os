/*
 * Author: Aananth C N
 * Date: 16 Oct 2014
 * License: GPLv2
 * Email: c.n.aananth@gmail.com
 *
 * Purpose: This file contains all definitions that are required to support the
 * debug requirements for BYOOS
 */
#include "debug.h"
#include "byoos_config.h"

static int system_dlevel;
static uint32_t *uart_tx_ptr;


void debug_sys_init(void)
{
	uart_tx_ptr = get_uart_tx_reg_addr(CFG_MYOS_UART);
}

void debugp(int dlevel, const char *str)
{
	int i;

	if((uart_tx_ptr) && (dlevel >= system_dlevel)) {
	//if(uart_tx_ptr) {
		for(i = 0; (i < CFG_DEBUG_CHAR_MAX) && str[i]; i++) {
			*uart_tx_ptr = str[i];
		}
	}
}
