/*
 * Copyright (c) 2020 Antmicro <www.antmicro.com>
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <kernel.h>
#include <arch/cpu.h>
#include <init.h>
#include <device.h>
#include <soc.h>

extern void pl011_isr(void *arg);

void pl011_isr_wrapper(void *arg)
{
	pl011_isr(arg);
	EOSS3_ClearPendingIRQ(Uart_IRQn);
}

static int register_irq_wrappers(struct device *arg)
{
	IRQ_REPLACE_ISR(DT_PL011_PORT0_IRQ_RX,
			pl011_isr_wrapper);

	return 0;
}

SYS_INIT(register_irq_wrappers, PRE_KERNEL_1, 0);
