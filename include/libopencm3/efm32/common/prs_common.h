/** @addtogroup prs_defines
 */
/*
 * This file is part of the libopencm3 project.
 *
 * Copyright (C) 2015 Kuldeep Singh Dhaka <kuldeepdhaka9@gmail.com>
 *
 * This library is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this library.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include <libopencm3/cm3/common.h>
#include <libopencm3/efm32/memorymap.h>

/**@{*/

#define PRS_SWPULSE		MMIO32(PRS_BASE + 0x000)
#define PRS_SWLEVEL		MMIO32(PRS_BASE + 0x004)
#define PRS_ROUTE		MMIO32(PRS_BASE + 0x008)
#define PRS_CHx_CTRL(x)		MMIO32(PRS_BASE + 0x010 + (0x004 * (x)))
#define PRS_CH0_CTRL		PRS_CHx_CTRL(0)
#define PRS_CH1_CTRL		PRS_CHx_CTRL(1)
#define PRS_CH2_CTRL		PRS_CHx_CTRL(2)
#define PRS_CH3_CTRL		PRS_CHx_CTRL(3)
#define PRS_CH4_CTRL		PRS_CHx_CTRL(4)
#define PRS_CH5_CTRL		PRS_CHx_CTRL(5)
#define PRS_CH6_CTRL		PRS_CHx_CTRL(6)
#define PRS_CH7_CTRL		PRS_CHx_CTRL(71)
#define PRS_CH8_CTRL		PRS_CHx_CTRL(8)
#define PRS_CH9_CTRL		PRS_CHx_CTRL(9)
#define PRS_CH10_CTRL		PRS_CHx_CTRL(10)
#define PRS_CH11_CTRL		PRS_CHx_CTRL(11)

/* PRS_SWPULSE */
#define PRS_SWPULSE_CHxPULSE(x)	(1 << (x))
#define PRS_SWPULSE_CH0PULSE	PRS_SWPULSE_CHxPULSE(0)
#define PRS_SWPULSE_CH1PULSE	PRS_SWPULSE_CHxPULSE(1)
#define PRS_SWPULSE_CH2PULSE	PRS_SWPULSE_CHxPULSE(2)
#define PRS_SWPULSE_CH3PULSE	PRS_SWPULSE_CHxPULSE(3)
#define PRS_SWPULSE_CH4PULSE	PRS_SWPULSE_CHxPULSE(4)
#define PRS_SWPULSE_CH5PULSE	PRS_SWPULSE_CHxPULSE(5)
#define PRS_SWPULSE_CH6PULSE	PRS_SWPULSE_CHxPULSE(6)
#define PRS_SWPULSE_CH7PULSE	PRS_SWPULSE_CHxPULSE(7)
#define PRS_SWPULSE_CH8PULSE	PRS_SWPULSE_CHxPULSE(8)
#define PRS_SWPULSE_CH9PULSE	PRS_SWPULSE_CHxPULSE(9)
#define PRS_SWPULSE_CH10PULSE	PRS_SWPULSE_CHxPULSE(10)
#define PRS_SWPULSE_CH11PULSE	PRS_SWPULSE_CHxPULSE(11)

/* PRS_SWLEVEL */
#define PRS_SWLEVEL_CHxLEVEL(x)	(1 << (x))
#define PRS_SWLEVEL_CH0LEVEL	PRS_SWLEVEL_CHxLEVEL(0)
#define PRS_SWLEVEL_CH1LEVEL	PRS_SWLEVEL_CHxLEVEL(1)
#define PRS_SWLEVEL_CH2LEVEL	PRS_SWLEVEL_CHxLEVEL(2)
#define PRS_SWLEVEL_CH3LEVEL	PRS_SWLEVEL_CHxLEVEL(3)
#define PRS_SWLEVEL_CH4LEVEL	PRS_SWLEVEL_CHxLEVEL(4)
#define PRS_SWLEVEL_CH5LEVEL	PRS_SWLEVEL_CHxLEVEL(5)
#define PRS_SWLEVEL_CH6LEVEL	PRS_SWLEVEL_CHxLEVEL(6)
#define PRS_SWLEVEL_CH7LEVEL	PRS_SWLEVEL_CHxLEVEL(7)
#define PRS_SWLEVEL_CH8LEVEL	PRS_SWLEVEL_CHxLEVEL(8)
#define PRS_SWLEVEL_CH9LEVEL	PRS_SWLEVEL_CHxLEVEL(9)
#define PRS_SWLEVEL_CH10LEVEL	PRS_SWLEVEL_CHxLEVEL(10)
#define PRS_SWLEVEL_CH11LEVEL	PRS_SWLEVEL_CHxLEVEL(11)

/* PRS_ROUTE */
#define PRS_ROUTE_LOCATION_SHIFT	(8)
#define PRS_ROUTE_LOCATION_MASK		(0x7 << PRS_ROUTE_LOCATION_SHIFT)
#define PRS_ROUTE_LOCATION(v)		\
	(((v) << PRS_ROUTE_LOCATION_SHIFT) & PRS_ROUTE_LOCATION_MASK)
#define PRS_ROUTE_LOCATION_LOCx(x)	PRS_ROUTE_LOCATION(x)
#define PRS_ROUTE_LOCATION_LOC0		0
#define PRS_ROUTE_LOCATION_LOC1		1

#define PRS_ROUTE_CHxPEN(x)		(1 << (x))
#define PRS_ROUTE_CH3PEN		PRS_ROUTE_CHxPEN(3)
#define PRS_ROUTE_CH2PEN		PRS_ROUTE_CHxPEN(2)
#define PRS_ROUTE_CH1PEN		PRS_ROUTE_CHxPEN(1)
#define PRS_ROUTE_CH0PEN		PRS_ROUTE_CHxPEN(0)

/* PRS_CHx_CTRL */
#define PRS_CH_CTRL_ASYNC		(1 << 28)

#define PRS_CH_CTRL_EDSEL_SHIFT		(24)
#define PRS_CH_CTRL_EDSEL_MASK		(0x3 << PRS_CH_CTRL_EDSEL_SHIFT)
#define PRS_CH_CTRL_EDSEL_OFF		(0 << PRS_CH_CTRL_EDSEL_SHIFT)
#define PRS_CH_CTRL_EDSEL_POSEDGE	(1 << PRS_CH_CTRL_EDSEL_SHIFT)
#define PRS_CH_CTRL_EDSEL_NEGEDGE	(2 << PRS_CH_CTRL_EDSEL_SHIFT)
#define PRS_CH_CTRL_EDSEL_BOTHEDGES	(3 << PRS_CH_CTRL_EDSEL_SHIFT)

#define PRS_CH_CTRL_SOURCESEL_SHIFT	(16)
#define PRS_CH_CTRL_SOURCESEL_MASK	(0x3F << PRS_CH_CTRL_SOURCESEL_SHIFT)
#define PRS_CH_CTRL_SOURCESEL(v)	\
	(((v) << PRS_CH_CTRL_SOURCESEL_SHIFT) & PRS_CH_CTRL_SOURCESEL_MASK)
#define PRS_CH_CTRL_SOURCESEL_NONE	0b000000
#define PRS_CH_CTRL_SOURCESEL_VCMP	0b000001
#define PRS_CH_CTRL_SOURCESEL_ACMP0	0b000010
#define PRS_CH_CTRL_SOURCESEL_ACMP1	0b000011
#define PRS_CH_CTRL_SOURCESEL_DAC0	0b000110
#define PRS_CH_CTRL_SOURCESEL_ADC0	0b001000
#define PRS_CH_CTRL_SOURCESEL_USART0	0b010000
#define PRS_CH_CTRL_SOURCESEL_USART1	0b010001
#define PRS_CH_CTRL_SOURCESEL_USART2	0b010010
#define PRS_CH_CTRL_SOURCESEL_TIMER0	0b011100
#define PRS_CH_CTRL_SOURCESEL_TIMER1	0b011101
#define PRS_CH_CTRL_SOURCESEL_TIMER2	0b011110
#define PRS_CH_CTRL_SOURCESEL_TIMER3	0b011111
#define PRS_CH_CTRL_SOURCESEL_USB	0b100100
#define PRS_CH_CTRL_SOURCESEL_RTC	0b101000
#define PRS_CH_CTRL_SOURCESEL_UART0	0b101001
#define PRS_CH_CTRL_SOURCESEL_UART1	0b101010
#define PRS_CH_CTRL_SOURCESEL_GPIOL	0b110000
#define PRS_CH_CTRL_SOURCESEL_GPIOH	0b110001
#define PRS_CH_CTRL_SOURCESEL_LETIMER0	0b110100
#define PRS_CH_CTRL_SOURCESEL_BURTC	0b110111
#define PRS_CH_CTRL_SOURCESEL_LESENSEL	0b111001
#define PRS_CH_CTRL_SOURCESEL_LESENSEH	0b111010
#define PRS_CH_CTRL_SOURCESEL_LESENSED	0b111011

#define PRS_CH_CTRL_SIGSEL_SHIFT	(0)
#define PRS_CH_CTRL_SIGSEL_MASK		(0x7 << PRS_CH_CTRL_SIGSEL_SHIFT)
#define PRS_CH_CTRL_SIGSEL(v)		\
	(((v) << PRS_CH_CTRL_SIGSEL_SHIFT) & PRS_CH_CTRL_SIGSEL_MASK)
#define PRS_CH_CTRL_SIGSEL_OFF			0
#define PRS_CH_CTRL_SIGSEL_VCMPOUT		0
#define PRS_CH_CTRL_SIGSEL_ACMP0OUT		0
#define PRS_CH_CTRL_SIGSEL_ACMP1OUT		0
#define PRS_CH_CTRL_SIGSEL_DAC0CH0		0
#define PRS_CH_CTRL_SIGSEL_DAC0CH1		1
#define PRS_CH_CTRL_SIGSEL_ADCSINGLE		0
#define PRS_CH_CTRL_SIGSEL_ADCSCAN		1
#define PRS_CH_CTRL_SIGSEL_USART0IRTX		0
#define PRS_CH_CTRL_SIGSEL_USART0TXC		1
#define PRS_CH_CTRL_SIGSEL_USART0RXDATA		2
#define PRS_CH_CTRL_SIGSEL_USART1TXC		1
#define PRS_CH_CTRL_SIGSEL_USART1RXDATAV	2
#define PRS_CH_CTRL_SIGSEL_USART2TXC		1
#define PRS_CH_CTRL_SIGSEL_USART2RXDATAV	2
#define PRS_CH_CTRL_SIGSEL_TIMER0UF		0
#define PRS_CH_CTRL_SIGSEL_TIMER0OF		1
#define PRS_CH_CTRL_SIGSEL_TIMER0CC0		2
#define PRS_CH_CTRL_SIGSEL_TIMER0CC1		3
#define PRS_CH_CTRL_SIGSEL_TIMER0CC2		4
#define PRS_CH_CTRL_SIGSEL_TIMER1UF		0
#define PRS_CH_CTRL_SIGSEL_TIMER1OF		1
#define PRS_CH_CTRL_SIGSEL_TIMER1CC0		2
#define PRS_CH_CTRL_SIGSEL_TIMER1CC1		3
#define PRS_CH_CTRL_SIGSEL_TIMER1CC2		4
#define PRS_CH_CTRL_SIGSEL_TIMER2UF		0
#define PRS_CH_CTRL_SIGSEL_TIMER2OF		1
#define PRS_CH_CTRL_SIGSEL_TIMER2CC0		2
#define PRS_CH_CTRL_SIGSEL_TIMER2CC1		3
#define PRS_CH_CTRL_SIGSEL_TIMER2CC2		4
#define PRS_CH_CTRL_SIGSEL_TIMER3UF		0
#define PRS_CH_CTRL_SIGSEL_TIMER3OF		1
#define PRS_CH_CTRL_SIGSEL_TIMER3CC0		2
#define PRS_CH_CTRL_SIGSEL_TIMER3CC1		3
#define PRS_CH_CTRL_SIGSEL_TIMER3CC2		4
#define PRS_CH_CTRL_SIGSEL_USBSOF		0
#define PRS_CH_CTRL_SIGSEL_USBSOFSR		1
#define PRS_CH_CTRL_SIGSEL_RTCOF		0
#define PRS_CH_CTRL_SIGSEL_RTCCOMP0		1
#define PRS_CH_CTRL_SIGSEL_RTCCOMP1		2
#define PRS_CH_CTRL_SIGSEL_UART0TXC		1
#define PRS_CH_CTRL_SIGSEL_UART0RXDATAV		2
#define PRS_CH_CTRL_SIGSEL_UART1TXC		1
#define PRS_CH_CTRL_SIGSEL_UART1RXDATAV		2
#define PRS_CH_CTRL_SIGSEL_GPIOPIN0		0
#define PRS_CH_CTRL_SIGSEL_GPIOPIN1		1
#define PRS_CH_CTRL_SIGSEL_GPIOPIN2		2
#define PRS_CH_CTRL_SIGSEL_GPIOPIN3		3
#define PRS_CH_CTRL_SIGSEL_GPIOPIN4		4
#define PRS_CH_CTRL_SIGSEL_GPIOPIN5		5
#define PRS_CH_CTRL_SIGSEL_GPIOPIN6		6
#define PRS_CH_CTRL_SIGSEL_GPIOPIN7		7
#define PRS_CH_CTRL_SIGSEL_GPIOPIN8		0
#define PRS_CH_CTRL_SIGSEL_GPIOPIN9		1
#define PRS_CH_CTRL_SIGSEL_GPIOPIN10		2
#define PRS_CH_CTRL_SIGSEL_GPIOPIN11		3
#define PRS_CH_CTRL_SIGSEL_GPIOPIN12		4
#define PRS_CH_CTRL_SIGSEL_GPIOPIN13		5
#define PRS_CH_CTRL_SIGSEL_GPIOPIN14		6
#define PRS_CH_CTRL_SIGSEL_GPIOPIN15		7
#define PRS_CH_CTRL_SIGSEL_LETIMER0CH0		0
#define PRS_CH_CTRL_SIGSEL_LETIMER0CH1		1
#define PRS_CH_CTRL_SIGSEL_BURTCOF		0
#define PRS_CH_CTRL_SIGSEL_BURTCCOMP0		1
#define PRS_CH_CTRL_SIGSEL_LESENSESCANRES0	0
#define PRS_CH_CTRL_SIGSEL_LESENSESCANRES1	1
#define PRS_CH_CTRL_SIGSEL_LESENSESCANRES2	2
#define PRS_CH_CTRL_SIGSEL_LESENSESCANRES3	3
#define PRS_CH_CTRL_SIGSEL_LESENSESCANRES4	4
#define PRS_CH_CTRL_SIGSEL_LESENSESCANRES5	5
#define PRS_CH_CTRL_SIGSEL_LESENSESCANRES6	6
#define PRS_CH_CTRL_SIGSEL_LESENSESCANRES7	7
#define PRS_CH_CTRL_SIGSEL_LESENSESCANRES8	0
#define PRS_CH_CTRL_SIGSEL_LESENSESCANRES9	1
#define PRS_CH_CTRL_SIGSEL_LESENSESCANRES10	2
#define PRS_CH_CTRL_SIGSEL_LESENSESCANRES11	3
#define PRS_CH_CTRL_SIGSEL_LESENSESCANRES12	4
#define PRS_CH_CTRL_SIGSEL_LESENSESCANRES13	5
#define PRS_CH_CTRL_SIGSEL_LESENSESCANRES14	6
#define PRS_CH_CTRL_SIGSEL_LESENSESCANRES15	7
#define PRS_CH_CTRL_SIGSEL_LESENSEDEC0		0
#define PRS_CH_CTRL_SIGSEL_LESENSEDEC1		1
#define PRS_CH_CTRL_SIGSEL_LESENSEDEC2		2

/* generic of above */
#define PRS_CH_CTRL_SIGSEL_VCMP_OUT		0
#define PRS_CH_CTRL_SIGSEL_ACMP_OUT		0
#define PRS_CH_CTRL_SIGSEL_DAC_CHx(x)		PRS_CH_CTRL_SIGSEL(x)
#define PRS_CH_CTRL_SIGSEL_DAC_CH0		0
#define PRS_CH_CTRL_SIGSEL_DAC_CH1		1
#define PRS_CH_CTRL_SIGSEL_ADC_SINGLE		0
#define PRS_CH_CTRL_SIGSEL_ADC_SCAN		1
#define PRS_CH_CTRL_SIGSEL_USART_IRTX		0
#define PRS_CH_CTRL_SIGSEL_USART_TXC		1
#define PRS_CH_CTRL_SIGSEL_USART_RXDATAV	2
#define PRS_CH_CTRL_SIGSEL_TIMER_UF		0
#define PRS_CH_CTRL_SIGSEL_TIMER_OF		1
#define PRS_CH_CTRL_SIGSEL_TIMER_CCx(x)		PRS_CH_CTRL_SIGSEL((x) + 2)
#define PRS_CH_CTRL_SIGSEL_TIMER_CC0		PRS_CH_CTRL_SIGSEL_TIMER_CCx(0)
#define PRS_CH_CTRL_SIGSEL_TIMER_CC1		PRS_CH_CTRL_SIGSEL_TIMER_CCx(1)
#define PRS_CH_CTRL_SIGSEL_TIMER_CC2		PRS_CH_CTRL_SIGSEL_TIMER_CCx(2)
#define PRS_CH_CTRL_SIGSEL_USB_SOF		0
#define PRS_CH_CTRL_SIGSEL_USB_SOFSR		1
#define PRS_CH_CTRL_SIGSEL_RTC_OF		0
#define PRS_CH_CTRL_SIGSEL_RTC_COMPx(x)		PRS_CH_CTRL_SIGSEL((x) + 1)
#define PRS_CH_CTRL_SIGSEL_RTC_COMP0		PRS_CH_CTRL_SIGSEL_RTC_COMPx(0)
#define PRS_CH_CTRL_SIGSEL_RTC_COMP1		PRS_CH_CTRL_SIGSEL_RTC_COMPx(1)
#define PRS_CH_CTRL_SIGSEL_UART_TXC		1
#define PRS_CH_CTRL_SIGSEL_UART_RXDATAV		2
#define PRS_CH_CTRL_SIGSEL_GPIOL_PINx(x)	PRS_CH_CTRL_SIGSEL(x)
#define PRS_CH_CTRL_SIGSEL_GPIO_PIN0	\
	0
#define PRS_CH_CTRL_SIGSEL_GPIO_PIN1	\
	1
#define PRS_CH_CTRL_SIGSEL_GPIO_PIN2	\
	2
#define PRS_CH_CTRL_SIGSEL_GPIO_PIN3	\
	3
#define PRS_CH_CTRL_SIGSEL_GPIO_PIN4	\
	4
#define PRS_CH_CTRL_SIGSEL_GPIO_PIN5	\
	5
#define PRS_CH_CTRL_SIGSEL_GPIO_PIN6	\
	6
#define PRS_CH_CTRL_SIGSEL_GPIO_PIN7	\
	7
#define PRS_CH_CTRL_SIGSEL_GPIOH_PINx(x)	PRS_CH_CTRL_SIGSEL((x) - 8)
#define PRS_CH_CTRL_SIGSEL_GPIO_PIN8	\
	PRS_CH_CTRL_SIGSEL_GPIOH_PINx(8)
#define PRS_CH_CTRL_SIGSEL_GPIO_PIN9	\
	PRS_CH_CTRL_SIGSEL_GPIOH_PINx(9)
#define PRS_CH_CTRL_SIGSEL_GPIO_PIN10	\
	PRS_CH_CTRL_SIGSEL_GPIOH_PINx(10)
#define PRS_CH_CTRL_SIGSEL_GPIO_PIN11	\
	PRS_CH_CTRL_SIGSEL_GPIOH_PINx(11)
#define PRS_CH_CTRL_SIGSEL_GPIO_PIN12	\
	PRS_CH_CTRL_SIGSEL_GPIOH_PINx(12)
#define PRS_CH_CTRL_SIGSEL_GPIO_PIN13	\
	PRS_CH_CTRL_SIGSEL_GPIOH_PINx(13)
#define PRS_CH_CTRL_SIGSEL_GPIO_PIN14	\
	PRS_CH_CTRL_SIGSEL_GPIOH_PINx(14)
#define PRS_CH_CTRL_SIGSEL_GPIO_PIN15	\
	PRS_CH_CTRL_SIGSEL_GPIOH_PINx(15)
#define PRS_CH_CTRL_SIGSEL_LETIMER_CHx(x)	PRS_CH_CTRL_SIGSEL(x)
#define PRS_CH_CTRL_SIGSEL_LETIMER_CH0	\
	0
#define PRS_CH_CTRL_SIGSEL_LETIMER_CH1	\
	1
#define PRS_CH_CTRL_SIGSEL_BURTC_OF		0
#define PRS_CH_CTRL_SIGSEL_BURTC_COMP0		1
#define PRS_CH_CTRL_SIGSEL_LESENSEL_SCANRESx(x)		PRS_CH_CTRL_SIGSEL(x)
#define PRS_CH_CTRL_SIGSEL_LESENSE_SCANRES0	\
	0
#define PRS_CH_CTRL_SIGSEL_LESENSE_SCANRES1	\
	1
#define PRS_CH_CTRL_SIGSEL_LESENSE_SCANRES2	\
	2
#define PRS_CH_CTRL_SIGSEL_LESENSE_SCANRES3	\
	3
#define PRS_CH_CTRL_SIGSEL_LESENSE_SCANRES4	\
	4
#define PRS_CH_CTRL_SIGSEL_LESENSE_SCANRES5	\
	5
#define PRS_CH_CTRL_SIGSEL_LESENSE_SCANRES6	\
	6
#define PRS_CH_CTRL_SIGSEL_LESENSE_SCANRES7	\
	7
#define PRS_CH_CTRL_SIGSEL_LESENSEH_SCANRESx(x)	\
	PRS_CH_CTRL_SIGSEL((x) - 8)
#define PRS_CH_CTRL_SIGSEL_LESENSE_SCANRES8	\
	PRS_CH_CTRL_SIGSEL_LESENSEH_SCANRESx(8)
#define PRS_CH_CTRL_SIGSEL_LESENSE_SCANRES9	\
	PRS_CH_CTRL_SIGSEL_LESENSEH_SCANRESx(9)
#define PRS_CH_CTRL_SIGSEL_LESENSE_SCANRES10	\
	PRS_CH_CTRL_SIGSEL_LESENSEH_SCANRESx(10)
#define PRS_CH_CTRL_SIGSEL_LESENSE_SCANRES11	\
	PRS_CH_CTRL_SIGSEL_LESENSEH_SCANRESx(11)
#define PRS_CH_CTRL_SIGSEL_LESENSE_SCANRES12	\
	PRS_CH_CTRL_SIGSEL_LESENSEH_SCANRESx(12)
#define PRS_CH_CTRL_SIGSEL_LESENSE_SCANRES13	\
	PRS_CH_CTRL_SIGSEL_LESENSEH_SCANRESx(13)
#define PRS_CH_CTRL_SIGSEL_LESENSE_SCANRES14	\
	PRS_CH_CTRL_SIGSEL_LESENSEH_SCANRESx(14)
#define PRS_CH_CTRL_SIGSEL_LESENSE_SCANRES15	\
	PRS_CH_CTRL_SIGSEL_LESENSEH_SCANRESx(15)
#define PRS_CH_CTRL_SIGSEL_LESENSED_DECx(x)	PRS_CH_CTRL_SIGSEL(x)
#define PRS_CH_CTRL_SIGSEL_LESENSE_DEC0	\
	0
#define PRS_CH_CTRL_SIGSEL_LESENSE_DEC1	\
	1
#define PRS_CH_CTRL_SIGSEL_LESENSE_DEC2	\
	2

/** @defgroup prs_ch PRS Channel Number
@ingroup prs_defines

@{*/
enum prs_ch {
	PRS_CH0 = 0,
	PRS_CH1,
	PRS_CH2,
	PRS_CH3,
	PRS_CH4,
	PRS_CH5,
	PRS_CH6,
	PRS_CH7,
	PRS_CH8,
	PRS_CH9,
	PRS_CH10,
	PRS_CH11
};
/**@}*/

BEGIN_DECLS

void prs_enable_gpio_output(enum prs_ch ch);
void prs_disable_gpio_output(enum prs_ch ch);
void prs_set_output_loc(uint32_t loc);

void prs_software_pulse(enum prs_ch ch);
void prs_software_level_high(enum prs_ch ch);
void prs_software_level_low(enum prs_ch ch);

void prs_enable_async(enum prs_ch ch);
void prs_disable_async(enum prs_ch ch);
void prs_set_edge(enum prs_ch ch, uint32_t edge);
void prs_set_source(enum prs_ch ch, uint32_t source);
void prs_set_signal(enum prs_ch ch, uint32_t sig);

END_DECLS

/**@}*/