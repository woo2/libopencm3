/*
 * This file is part of the libopencm3 project.
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

#ifndef SAM4E_MEMORYMAP_H
#define SAM4E_MEMORYMAP_H

#include <libopencm3/cm3/common.h>

/* --- SAM4E Peripheral Space -------------------------------------------- */
#define PWM_BASE			(0x40000000U)
#define AES_BASE			(0x40004000U)
#define CAN0_BASE			(0x40010000U)
#define CAN1_BASE			(0x40014000U)
#define GMAC_BASE			(0x40034000U)

/* --- MP Sys Controller --- */
#define SMC_BASE			(0x40060000)
#define UART1_BASE			(0x40060600)

/* --- Peripherals --- */
#define HSMCI_BASE			(0x40080000)
#define UDP_BASE			(0x40084000)
#define SPI_BASE			(0x40088000)

/* --- TC0 --- */
#define TC0_BASE			(0x40090000)
#define TC1_BASE			(TC0_BASE + 0x40)
#define TC2_BASE			(TC0_BASE + 0x80)

/* --- TC1 --- */
#define TC3_BASE			(0x40094000)
#define TC4_BASE			(TC3_BASE + 0x40)
#define TC5_BASE			(TC3_BASE + 0x80)

/* --- TC2 --- */
#define TC6_BASE			(0x40098000)
#define TC7_BASE			(TC3_BASE + 0x40)
#define TC8_BASE			(TC3_BASE + 0x80)

/* --- Peripherals --- */
#define USART0_BASE			(0x400A0000)
#define USART1_BASE			(0x400A4000)
#define TWI0_BASE			(0x400A8000)
#define TWI1_BASE			(0x400AC000)
#define AFEC0_BASE			(0x400B0000)
#define AFEC1_BASE			(0x400B4000)
#define DACC_BASE			(0x400B8000)
#define ACC_BASE			(0x400BC000)
#define DMAC_BASE			(0x400C0000)
#define CMCC_BASE			(0x400C4000)


/* --- SAM4E System Controller Space ------------------------------------- */
#define MATRIX_BASE			(0x400E0200)
#define PMC_BASE			(0x400E0400)
#define UART0_BASE			(0x400E0600)
#define CHIPID_BASE			(0x400E0740)
#define EEFC_BASE			(0x400E0A00)
#define PIOA_BASE			(0x400E0E00)
#define PIOB_BASE			(0x400E1000)
#define PIOC_BASE			(0x400E1200)
#define PIOD_BASE			(0x400E1400)
#define PIOE_BASE			(0x400E1600)

/* --- SYSC --- */
#define SYSC_BASE			(0x400E1800)
#define RSTC_BASE			(SYSC_BASE + 0x00)
#define SUPC_BASE			(SYSC_BASE + 0x10)
#define RTT_BASE			(SYSC_BASE + 0x30)
#define WDT_BASE			(SYSC_BASE + 0x50)
#define RTC_BASE			(SYSC_BASE + 0x60)
#define GPBR_BASE			(SYSC_BASE + 0x90)
#define RSWDT_BASE			(SYSC_BASE + 0x100)


#endif
