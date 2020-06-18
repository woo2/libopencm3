/*
 * This file is part of the libopencm3 project.
 *
 * Copyright (C) 2012 Gareth McMullin <gareth@blacksphere.co.nz>
 * Copyright (C) 2015 Felix Held <felix-libopencm3@felixheld.de>
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

#if defined(LIBOPENCM3_PMC_H)

#ifndef LIBOPENCM3_PMC_COMMON_3A3N3X4E_H
#define LIBOPENCM3_PMC_COMMON_3A3N3X4E_H


/* --- Power Management Controller (PMC) registers ----------------------- */

/* Oscillator Calibration Register */
#define PMC_OCR				MMIO32(PMC_BASE + 0x0110)


/* --- PMC Oscillator Calibration Register (PMC_OCR) ----------------------- */

/* Selection of RC Oscillator Calibration bits for 12 Mhz */
#define PMC_OCR_SEL12			(0x01 << 23)

/* RC Oscillator Calibration bits for 12 Mhz */
#define PMC_OCR_CAL12_SHIFT		16
#define PMC_OCR_CAL12_MASK		(0x7F << PMC_OCR_CAL12_SHIFT)

/* Selection of RC Oscillator Calibration bits for 8 Mhz */
#define PMC_OCR_SEL8			(0x01 << 15)

/* RC Oscillator Calibration bits for 8 Mhz */
#define PMC_OCR_CAL8_SHIFT		8
#define PMC_OCR_CAL8_MASK		(0x7F << PMC_OCR_CAL8_SHIFT)

/* Selection of RC Oscillator Calibration bits for 4 Mhz */
#define PMC_OCR_SEL4			(0x01 << 7)

/* RC Oscillator Calibration bits for 4 Mhz */
#define PMC_OCR_CAL4_SHIFT		0
#define PMC_OCR_CAL4_MASK		(0x7F << PMC_OCR_CAL12_SHIFT)

#endif

#else
#warning "pmc_common_3a3n3x4e.h should not be included explicitly, only via pmc.h"
#endif
