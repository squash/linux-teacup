/*
 * IRQ number in T31 INTC definition.
 *   Only support T31 now. 2019-7-6
 *
 * Copyright (C) 2019 Ingenic Semiconductor Co., Ltd.
 */

#ifndef __INTC_IRQ_H__
#define __INTC_IRQ_H__

#include <irq.h>

enum {
/* interrupt controller interrupts */
/*ISR0*/
	IRQ_IRQ_RESERVED0=IRQ_INTC_BASE,
	IRQ_AIC0,
	IRQ_RESERVED2,
    IRQ_SYS_OST,/*TODO*/
    //IRQ_RESERVED3,
	IRQ_RISCV,
	IRQ_MIPI,
	IRQ_IPU,
	IRQ_SFC,
	IRQ_SSI1,
	IRQ_SSI0,
	IRQ_PDMA,
	IRQ_SSISLV,
	IRQ_DMIC,
	IRQ_RESERVED13,
	IRQ_RESERVED14,
	IRQ_GPIO2,
	IRQ_GPIO1,
	IRQ_GPIO0,
#define IRQ_GPIO_PORT(N) (IRQ_GPIO0 - (N))
	IRQ_SADC,
	IRQ_RESERVED19,
	IRQ_RESERVED20,
	IRQ_OTG,
	IRQ_HASH,
	IRQ_AES,
	IRQ_RSA,
	IRQ_TCU2,
	IRQ_TCU1,
	IRQ_TCU0,
	IRQ_RESERVED28,
	IRQ_ISP,
	IRQ_VIC,
	IRQ_LCDC,

/*ISR1*/
	IRQ_RTC,
	IRQ_RESERVED33,
	IRQ_DTRNG,
	IRQ_RESERVED35,
	IRQ_MSC1,
	IRQ_MSC0,
	IRQ_RESERVED38,
	IRQ_RESERVED39,
	IRQ_RESERVED40,
	IRQ_RESERVED41,
	IRQ_RESERVED42,
	IRQ_RESERVED43,
	IRQ_HARB2,
	IRQ_RESERVED45,
	IRQ_RESERVED46,
	IRQ_CPM,
	IRQ_RESERVED48,
	IRQ_UART2,
	IRQ_UART1,
	IRQ_UART0,
	IRQ_DDR,
	IRQ_MON,
	IRQ_EFUSE,
	IRQ_GMAC,
	IRQ_RESERVED56,
	IRQ_RESERVED57,
	IRQ_RESERVED58,
	IRQ_I2C1,
	IRQ_I2C0,
	IRQ_PDMAM,
	IRQ_HELIX0,
	IRQ_RESERVED63,
#define IRQ_MCU_GPIO_PORT(N) (IRQ_MCU_GPIO0 + (N))
	IRQ_MCU_GPIO0,
	IRQ_MCU_GPIO1,
	IRQ_MCU_GPIO2,
	IRQ_MCU_GPIO3,
	IRQ_MCU_GPIO4,
	IRQ_MCU_GPIO5,
};

enum {
	IRQ_OST = IRQ_OST_BASE,
};

enum {
	IRQ_MCU = IRQ_MCU_BASE,
};

#endif
