/*
 * Copyright (C) STMicroelectronics 2012
 * Copyright (C) ST-Ericsson SA 2012
 *
 * Author: michel jaouen <michel.jaouen@stericsson.com>
 *
 * License Terms: GNU General Public License v2
 *
 * PRCM Unit registers
 */

#ifndef __DBX540_PRCMU_REGS_H
#define __DBX540_PRCMU_REGS_H

#include "dbx500-prcmu-regs.h"

#define PRCM_SDMMCHCLK_MGT	PRCM_CLK_MGT(0x008)
#define PRCM_CAMCLK_MGT		PRCM_CLK_MGT(0x028)
#define PRCM_SPARE1CLK_MGT	PRCM_CLK_MGT(0x048)
#define PRCM_C2CCLK_MGT		PRCM_CLK_MGT(0x108)
#define PRCM_G1CLK_MGT		PRCM_CLK_MGT(0x548)
#define PRCM_HVACLK_MGT		PRCM_CLK_MGT(0x54C)


#define PRCM_POWER_STATE_VAL_VAPE_STATE_OPP_MASK	BITS(1, 3)
#define PRCM_POWER_STATE_VAL_VAPE_STATE_OPP_SHIFT	1
#define PRCM_POWER_STATE_VAL_VARM_STATE_OPP_MASK	BITS(28, 30)
#define PRCM_POWER_STATE_VAL_VARM_STATE_OPP_SHIFT	28

#define PRCM_PLLDSITV_FREQ	(_PRCMU_BASE + 0x500)
#define PRCM_PLLDSITV_ENABLE	(_PRCMU_BASE + 0x504)
#define PRCM_PLLDSITV_LOCKP	(_PRCMU_BASE + 0x508)
#define PRCM_PLLDSILCD_FREQ	(_PRCMU_BASE + 0x290)
#define PRCM_PLLDSILCD_ENABLE	(_PRCMU_BASE + 0x294)
#define PRCM_PLLDSILCD_LOCKP	(_PRCMU_BASE + 0x298)

#define PRCM_DSI_PLLOUT_SEL_DSI0_PLLOUT_DIVSEL_SHIFT		0
#define U8500_PRCM_DSI_PLLOUT_SEL_DSI0_PLLOUT_DIVSEL_MASK	BITS(0, 2)
#define U9540_PRCM_DSI_PLLOUT_SEL_DSI0_PLLOUT_DIVSEL_MASK	BITS(0, 3)
#define PRCM_DSI_PLLOUT_SEL_DSI1_PLLOUT_DIVSEL_SHIFT		8
#define U8500_PRCM_DSI_PLLOUT_SEL_DSI1_PLLOUT_DIVSEL_MASK	BITS(8, 10)
#define U9540_PRCM_DSI_PLLOUT_SEL_DSI1_PLLOUT_DIVSEL_MASK	BITS(8, 11)

#define PRCM_APE_RESETN_DSIPLL_TV_RESETN		BIT(14)
#define PRCM_APE_RESETN_DSIPLL_LCD_RESETN		BIT(15)


#define PRCM_EPOD_C_CLR		(_PRCMU_BASE + 0x414)
#define PRCM_EPOD_C_VAL		(_PRCMU_BASE + 0x418)
#define PRCM_EPOD_VOK		(_PRCMU_BASE + 0x41C)

#define PRCM_DDR1_SUBSYS_APE_MINBW	(_PRCMU_BASE + 0x2438)
#define PRCM_DDR1SUBSYS_STATUS		(_PRCMU_BASE + 0x243C)


/* C2C related PRCM register */
#define PRCM_C2C_RESETN_SET	(_PRCMU_BASE + 0x2B0)
#define PRCM_C2C_RESETN_CLR	(_PRCMU_BASE + 0x2B4)
#define PRCM_C2C_RESETN_VAL	(_PRCMU_BASE + 0x2B8)

#define PRCM_C2C_RESETN_C2C_WRAPPER_PER		BIT(0)
#define PRCM_C2C_RESETN_C2C_CORE		BIT(1)
#define PRCM_C2C_RESETN_HVA_LOGIC		BIT(2)
#define PRCM_C2C_RESETN_HVA_MEM			BIT(3)
#define PRCM_C2C_RESETN_G1_LOGIC		BIT(4)
#define PRCM_C2C_RESETN_G1_MEM			BIT(5)

#define PRCM_C2C_CTL_SET	(_PRCMU_BASE + 0x4F4)
#define PRCM_C2C_CTL_CLR	(_PRCMU_BASE + 0x4F8)
#define PRCM_C2C_CTL_VAL	(_PRCMU_BASE + 0x4FC)

#define PRCM_C2CSUBSYS_STATUS		(_PRCMU_BASE + 0x2024)
#define PRCM_C2CSUBSYS_CONTROL_SET	(_PRCMU_BASE + 0x2048)
#define PRCM_C2CSUBSYS_CONTROL_CLR	(_PRCMU_BASE + 0x204C)
#define PRCM_C2CSUBSYS_CONTROL_VAL	(_PRCMU_BASE + 0x2050)
#define PRCM_C2C_SSCM_GENI_SET	(_PRCMU_BASE + 0x2054)
#define PRCM_C2C_SSCM_GENI_CLR	(_PRCMU_BASE + 0x2058)
#define PRCM_C2C_SSCM_GENI_VAL	(_PRCMU_BASE + 0x205C)
#define PRCM_C2C_SSCM_GENO	(_PRCMU_BASE + 0x2060)
#define PRCM_C2C_COMPCR		(_PRCMU_BASE + 0x2064)
#define PRCM_C2C_COMPSTA	(_PRCMU_BASE + 0x2068)
#define PRCM_C2C_IO_CTL_SET	(_PRCMU_BASE + 0x202C)
#define PRCM_C2C_IO_CTL_CLR	(_PRCMU_BASE + 0x2030)
#define PRCM_C2C_IO_CTL_VAL	(_PRCMU_BASE + 0x2034)
#define PRCM_A9_C2C_GENO_MASK_SET	(_PRCMU_BASE + 0x2078)
#define PRCM_A9_C2C_GENO_MASK_CLR	(_PRCMU_BASE + 0x207C)
#define PRCM_A9_C2C_GENO_MASK_VAL	(_PRCMU_BASE + 0x2080)
#define PRCM_C2C_MEM_REQ	(_PRCMU_BASE + 0x2038)
#define PRCM_C2C_MEM_ACK	(_PRCMU_BASE + 0x203C)
#define PRCM_C2C_MEM_LAT	(_PRCMU_BASE + 0x2040)
#define PRCM_C2C_MEM_MIN_BW	(_PRCMU_BASE + 0x2044)
#define PRCM_ITSTATUS7		(_PRCMU_BASE + 0x24B8)
#define PRCM_ITCLR7		(_PRCMU_BASE + 0x24BC)
#define PRCM_LINE_VALUE7	(_PRCMU_BASE + 0x24C0)
#define PRCM_HOLD_EVT7		(_PRCMU_BASE + 0x24C4)
#define PRCM_EDGE_SENS_L7	(_PRCMU_BASE + 0x24C8)
#define PRCM_EDGE_SENS_H7	(_PRCMU_BASE + 0x24CC)
#define PRCM_ITSTATUS8		(_PRCMU_BASE + 0x24D0)
#define PRCM_ITCLR8		(_PRCMU_BASE + 0x24D4)
#define PRCM_LINE_VALUE8	(_PRCMU_BASE + 0x24D8)
#define PRCM_HOLD_EVT8		(_PRCMU_BASE + 0x24DC)
#define PRCM_EDGE_SENS_L8	(_PRCMU_BASE + 0x24E0)
#define PRCM_EDGE_SENS_H8	(_PRCMU_BASE + 0x24E4)

#define PRCM_SPARE_OUT		(_PRCMU_BASE + 0x2070)
#define PRCM_SPARE_OUT_PSW_SDMMC	BIT(1)

/* XMIP related PRCM register */
#define PRCM_APE2_RESETN_SET			(_PRCMU_BASE + 0x2B0)
#define PRCM_APE2_RESETN_CLR			(_PRCMU_BASE + 0x2B4)
#define PRCM_APE2_RESETN_VAL			(_PRCMU_BASE + 0x2B8)
#define PRCM_APE2_XMIP_RESETN_BIT		BIT(0)
#define PRCM_APE2_SERVICE_N_BIT			BIT(1)

/* Modem control ressource */
#define PRCM_LINE_VALUE			(_PRCMU_BASE + 0x170)
#define PRCM_RESOUT0_N_BIT			BIT(20)
#define PRCM_RESOUT2_N_BIT			BIT(21)
#endif /* __DBX540_PRCMU_REGS_H */
