/*
 * Author: Aananth C N
 * Date: 14 Oct 2014
 * License: GPLv2
 * Email: c.n.aananth@gmail.com
 *
 * Purpose: Contains definitions and declarations related to Freescale I.MX6Q
 * micro controller.
 */
#ifndef BYOOS_IMX6QDQ_H
#define BYOOS_IMX6QDQ_H

#include <stdint.h>

/* System Reset Controller */
#define SRC_BASE	0x020D8000
#define SRC_GPR1	(SRC_BASE+0x20)

#define ENTRY_VECTOR_CORE(x)	(SRC_GPR1 + (4 * 2 * x))
#define ENTRY_ARGREG_CORE(x)	(ENTRY_VECT_CORE(x) + 4)

/* UART Registers */
#define UART1_URXD	0x02020000
#define UART1_UTXD	0x02020040
#define UART2_URXD	0x021E8000
#define UART2_UTXD	0x021E8040
#define UART3_URXD	0x021EC000
#define UART3_UTXD	0x021EC040
#define UART4_URXD	0x021F0000
#define UART4_UTXD	0x021F0040
#define UART5_URXD	0x021F4000
#define UART5_UTXD	0x021F4040




uint32_t *get_uart_tx_reg_addr(int num);
int soc_setup(void);



#endif
