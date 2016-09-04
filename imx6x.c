/*
 * Author: Aananth C N
 * Date: 14 Oct 2014
 * License: GPLv2
 * Email: c.n.aananth@gmail.com
 *
 * Purpose: Contains definitions related to Freescale I.MX6Q
 * micro controller.
 */
#include "imx6x.h"


uint32_t *get_uart_tx_reg_addr(int num)
{
	int addr;

	switch (num) {
	case 0:
		addr = UART1_UTXD;
		break;
	case 1:
		addr = UART2_UTXD;
		break;
	case 2:
		addr = UART3_UTXD;
		break;
	case 3:
		addr = UART4_UTXD;
		break;
	case 4:
		addr = UART5_UTXD;
		break;
	default:
		addr = 0;
		break;
	}

	return (uint32_t *)addr;
}


int soc_setup(void)
{
	/* set up the entry points in SRC peripheral */
	return 0;
}
