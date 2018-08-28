/*
 * Copyright (c) 2018 Antmicro <www.antmicro.com>
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/* UART 0 */
#define CONFIG_LITEUART_UART_0_BASE_ADDR       DT_LITEX_UART0_E0001800_BASE_ADDRESS
#define CONFIG_LITEUART_UART_0_CURRENT_SPEED   DT_LITEX_UART0_E0001800_CURRENT_SPEED
#define CONFIG_LITEUART_UART_0_IRQ_0           DT_LITEX_UART0_E0001800_IRQ_0
#define CONFIG_LITEUART_UART_0_LABEL           DT_LITEX_UART0_E0001800_LABEL
#define CONFIG_LITEUART_UART_0_SIZE            DT_LITEX_UART0_E0001800_SIZE

/* TIMER 0 */
#define CONFIG_TIMER_0_BASE_ADDR    DT_LITEX_TIMER0_E0002800_BASE_ADDRESS
#define CONFIG_TIMER_0_IRQ_0        DT_LITEX_TIMER0_E0002800_IRQ_0

/* INTERRUPT CONTROLLER */
#define CONFIG_LITEX_VEXRISCV_INTC_0_IRQ_MASK       DT_VEXRISCV_INTC0_BC0_BASE_ADDRESS
#define CONFIG_LITEX_VEXRISCV_INTC_0_IRQ_PENDING    (DT_VEXRISCV_INTC0_BC0_BASE_ADDRESS + DT_VEXRISCV_INTC0_BC0_SIZE)

