/*
 * This file is part of the libopencm3 project.
 *
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

#ifndef LIBOPENCM3_PMC_H
#define LIBOPENCM3_PMC_H

#include <libopencm3/sam/memorymap.h>
#include <libopencm3/sam/common/pmc_common_all.h>
#include <libopencm3/sam/common/pmc_common_3a3s3x.h>

/* --- Power Management Controller (PMC) registers ----------------------- */


/* Oscillator Calibration Register */
#define PMC_OCR				MMIO32(PMC_BASE + 0x0110)

/* PLL Maximum Multiplier Value Register */
#define PMC_PMMR			MMIO32(PMC_BASE + 0x0130)

/* --- Register contents --------------------------------------------------- */


/* --- PMC Clock Generator Main Oscillator Register (CKGR_MOR) ------------- */

/* 32768 Hz Crystal Oscillator Frequency Monitoring Enable */
#define CKGR_MOR_XT32KFME		(0x01 << 26)

/* Wait Mode Command */
#define CKGR_MOR_WAITMODE		(0x01 << 2)

/* --- PMC Master Clock Register (PMC_MCKR) -------------------------------- */

/* Master Clock Source Selection */
#define PMC_MCKR_CSS_PLL_CLK		(2 << PMC_MCKR_CSS_SHIFT)


/* --- PMC Programmable Clock Register 0 (PMC_PCK0) ------------------------ */

/* Master Clock Source Selection */
#define PMC_PCK0_CSS_PLL_CLK		(2 << PMC_PCK0_CSS_SHIFT)


/* --- PMC Programmable Clock Register 1 (PMC_PCK1) ------------------------ */

/* Master Clock Source Selection */
#define PMC_PCK1_CSS_PLL_CLK		(2 << PMC_PCK1_CSS_SHIFT)


/* --- PMC Programmable Clock Register 2 (PMC_PCK2) ------------------------ */

/* Master Clock Source Selection */
#define PMC_PCK2_CSS_PLL_CLK		(2 << PMC_PCK2_CSS_SHIFT)


/* --- PMC Interrupt Enable Register (PMC_IER) ----------------------------- */

/* PLL Lock Interrupt Enable */
#define PMC_IER_LOCK			PMC_IER_LOCKA


/* --- PMC Interrupt Disable Register (PMC_IDR) ----------------------------- */

/* PLL Lock Interrupt Disable */
#define PMC_IDR_LOCK			PMC_IDR_LOCKA


/* --- PMC Status Register (PMC_SR) ---------------------------------------- */

/* PLL Lock Status */
#define PMC_SR_LOCK			PMC_SR_LOCKA


/* --- PMC Interrupt Mask Register (PMC_IMR) ----------------------------- */

/* PLL Lock Interrupt Mask */
#define PMC_IMR_LOCK			PMC_IMR_LOCKA


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

/* --- PMC PLL Maximum Multiplier Value Register (PMC_PMMR) ----------------------- */

/*  PLL Maximum Multiplier Value Register */
#define PMC_PMMR_PLLA_MMAX_SHIFT	0
#define PMC_PMMR_PLLA_MMAX_MASK		(0x07FF << PMC_PMMR_PLLA_MMAX_SHIFT)

#endif
