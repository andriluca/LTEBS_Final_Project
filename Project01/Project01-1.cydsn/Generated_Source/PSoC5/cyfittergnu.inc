/*******************************************************************************
* File Name: cyfittergnu.inc
* 
* PSoC Creator  4.4
*
* Description:
* 
* This file is automatically generated by PSoC Creator.
*
********************************************************************************
* Copyright (c) 2007-2020 Cypress Semiconductor.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/

.ifndef INCLUDED_CYFITTERGNU_INC
.set INCLUDED_CYFITTERGNU_INC, 1
.include "cydevicegnu.inc"
.include "cydevicegnu_trm.inc"

/* Rx */
.set Rx__0__INTTYPE, CYREG_PICU12_INTTYPE6
.set Rx__0__MASK, 0x40
.set Rx__0__PC, CYREG_PRT12_PC6
.set Rx__0__PORT, 12
.set Rx__0__SHIFT, 6
.set Rx__AG, CYREG_PRT12_AG
.set Rx__BIE, CYREG_PRT12_BIE
.set Rx__BIT_MASK, CYREG_PRT12_BIT_MASK
.set Rx__BYP, CYREG_PRT12_BYP
.set Rx__DM0, CYREG_PRT12_DM0
.set Rx__DM1, CYREG_PRT12_DM1
.set Rx__DM2, CYREG_PRT12_DM2
.set Rx__DR, CYREG_PRT12_DR
.set Rx__INP_DIS, CYREG_PRT12_INP_DIS
.set Rx__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU12_BASE
.set Rx__MASK, 0x40
.set Rx__PORT, 12
.set Rx__PRT, CYREG_PRT12_PRT
.set Rx__PRTDSI__DBL_SYNC_IN, CYREG_PRT12_DBL_SYNC_IN
.set Rx__PRTDSI__OE_SEL0, CYREG_PRT12_OE_SEL0
.set Rx__PRTDSI__OE_SEL1, CYREG_PRT12_OE_SEL1
.set Rx__PRTDSI__OUT_SEL0, CYREG_PRT12_OUT_SEL0
.set Rx__PRTDSI__OUT_SEL1, CYREG_PRT12_OUT_SEL1
.set Rx__PRTDSI__SYNC_OUT, CYREG_PRT12_SYNC_OUT
.set Rx__PS, CYREG_PRT12_PS
.set Rx__SHIFT, 6
.set Rx__SIO_CFG, CYREG_PRT12_SIO_CFG
.set Rx__SIO_DIFF, CYREG_PRT12_SIO_DIFF
.set Rx__SIO_HYST_EN, CYREG_PRT12_SIO_HYST_EN
.set Rx__SIO_REG_HIFREQ, CYREG_PRT12_SIO_REG_HIFREQ
.set Rx__SLW, CYREG_PRT12_SLW

/* SW */
.set SW__0__INTTYPE, CYREG_PICU2_INTTYPE2
.set SW__0__MASK, 0x04
.set SW__0__PC, CYREG_PRT2_PC2
.set SW__0__PORT, 2
.set SW__0__SHIFT, 2
.set SW__AG, CYREG_PRT2_AG
.set SW__AMUX, CYREG_PRT2_AMUX
.set SW__BIE, CYREG_PRT2_BIE
.set SW__BIT_MASK, CYREG_PRT2_BIT_MASK
.set SW__BYP, CYREG_PRT2_BYP
.set SW__CTL, CYREG_PRT2_CTL
.set SW__DM0, CYREG_PRT2_DM0
.set SW__DM1, CYREG_PRT2_DM1
.set SW__DM2, CYREG_PRT2_DM2
.set SW__DR, CYREG_PRT2_DR
.set SW__INP_DIS, CYREG_PRT2_INP_DIS
.set SW__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU2_BASE
.set SW__LCD_COM_SEG, CYREG_PRT2_LCD_COM_SEG
.set SW__LCD_EN, CYREG_PRT2_LCD_EN
.set SW__MASK, 0x04
.set SW__PORT, 2
.set SW__PRT, CYREG_PRT2_PRT
.set SW__PRTDSI__CAPS_SEL, CYREG_PRT2_CAPS_SEL
.set SW__PRTDSI__DBL_SYNC_IN, CYREG_PRT2_DBL_SYNC_IN
.set SW__PRTDSI__OE_SEL0, CYREG_PRT2_OE_SEL0
.set SW__PRTDSI__OE_SEL1, CYREG_PRT2_OE_SEL1
.set SW__PRTDSI__OUT_SEL0, CYREG_PRT2_OUT_SEL0
.set SW__PRTDSI__OUT_SEL1, CYREG_PRT2_OUT_SEL1
.set SW__PRTDSI__SYNC_OUT, CYREG_PRT2_SYNC_OUT
.set SW__PS, CYREG_PRT2_PS
.set SW__SHIFT, 2
.set SW__SLW, CYREG_PRT2_SLW

/* Tx */
.set Tx__0__INTTYPE, CYREG_PICU12_INTTYPE7
.set Tx__0__MASK, 0x80
.set Tx__0__PC, CYREG_PRT12_PC7
.set Tx__0__PORT, 12
.set Tx__0__SHIFT, 7
.set Tx__AG, CYREG_PRT12_AG
.set Tx__BIE, CYREG_PRT12_BIE
.set Tx__BIT_MASK, CYREG_PRT12_BIT_MASK
.set Tx__BYP, CYREG_PRT12_BYP
.set Tx__DM0, CYREG_PRT12_DM0
.set Tx__DM1, CYREG_PRT12_DM1
.set Tx__DM2, CYREG_PRT12_DM2
.set Tx__DR, CYREG_PRT12_DR
.set Tx__INP_DIS, CYREG_PRT12_INP_DIS
.set Tx__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU12_BASE
.set Tx__MASK, 0x80
.set Tx__PORT, 12
.set Tx__PRT, CYREG_PRT12_PRT
.set Tx__PRTDSI__DBL_SYNC_IN, CYREG_PRT12_DBL_SYNC_IN
.set Tx__PRTDSI__OE_SEL0, CYREG_PRT12_OE_SEL0
.set Tx__PRTDSI__OE_SEL1, CYREG_PRT12_OE_SEL1
.set Tx__PRTDSI__OUT_SEL0, CYREG_PRT12_OUT_SEL0
.set Tx__PRTDSI__OUT_SEL1, CYREG_PRT12_OUT_SEL1
.set Tx__PRTDSI__SYNC_OUT, CYREG_PRT12_SYNC_OUT
.set Tx__PS, CYREG_PRT12_PS
.set Tx__SHIFT, 7
.set Tx__SIO_CFG, CYREG_PRT12_SIO_CFG
.set Tx__SIO_DIFF, CYREG_PRT12_SIO_DIFF
.set Tx__SIO_HYST_EN, CYREG_PRT12_SIO_HYST_EN
.set Tx__SIO_REG_HIFREQ, CYREG_PRT12_SIO_REG_HIFREQ
.set Tx__SLW, CYREG_PRT12_SLW

/* SCL */
.set SCL__0__INTTYPE, CYREG_PICU12_INTTYPE0
.set SCL__0__MASK, 0x01
.set SCL__0__PC, CYREG_PRT12_PC0
.set SCL__0__PORT, 12
.set SCL__0__SHIFT, 0
.set SCL__AG, CYREG_PRT12_AG
.set SCL__BIE, CYREG_PRT12_BIE
.set SCL__BIT_MASK, CYREG_PRT12_BIT_MASK
.set SCL__BYP, CYREG_PRT12_BYP
.set SCL__DM0, CYREG_PRT12_DM0
.set SCL__DM1, CYREG_PRT12_DM1
.set SCL__DM2, CYREG_PRT12_DM2
.set SCL__DR, CYREG_PRT12_DR
.set SCL__INP_DIS, CYREG_PRT12_INP_DIS
.set SCL__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU12_BASE
.set SCL__MASK, 0x01
.set SCL__PORT, 12
.set SCL__PRT, CYREG_PRT12_PRT
.set SCL__PRTDSI__DBL_SYNC_IN, CYREG_PRT12_DBL_SYNC_IN
.set SCL__PRTDSI__OE_SEL0, CYREG_PRT12_OE_SEL0
.set SCL__PRTDSI__OE_SEL1, CYREG_PRT12_OE_SEL1
.set SCL__PRTDSI__OUT_SEL0, CYREG_PRT12_OUT_SEL0
.set SCL__PRTDSI__OUT_SEL1, CYREG_PRT12_OUT_SEL1
.set SCL__PRTDSI__SYNC_OUT, CYREG_PRT12_SYNC_OUT
.set SCL__PS, CYREG_PRT12_PS
.set SCL__SHIFT, 0
.set SCL__SIO_CFG, CYREG_PRT12_SIO_CFG
.set SCL__SIO_DIFF, CYREG_PRT12_SIO_DIFF
.set SCL__SIO_HYST_EN, CYREG_PRT12_SIO_HYST_EN
.set SCL__SIO_REG_HIFREQ, CYREG_PRT12_SIO_REG_HIFREQ
.set SCL__SLW, CYREG_PRT12_SLW

/* SDA */
.set SDA__0__INTTYPE, CYREG_PICU12_INTTYPE1
.set SDA__0__MASK, 0x02
.set SDA__0__PC, CYREG_PRT12_PC1
.set SDA__0__PORT, 12
.set SDA__0__SHIFT, 1
.set SDA__AG, CYREG_PRT12_AG
.set SDA__BIE, CYREG_PRT12_BIE
.set SDA__BIT_MASK, CYREG_PRT12_BIT_MASK
.set SDA__BYP, CYREG_PRT12_BYP
.set SDA__DM0, CYREG_PRT12_DM0
.set SDA__DM1, CYREG_PRT12_DM1
.set SDA__DM2, CYREG_PRT12_DM2
.set SDA__DR, CYREG_PRT12_DR
.set SDA__INP_DIS, CYREG_PRT12_INP_DIS
.set SDA__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU12_BASE
.set SDA__MASK, 0x02
.set SDA__PORT, 12
.set SDA__PRT, CYREG_PRT12_PRT
.set SDA__PRTDSI__DBL_SYNC_IN, CYREG_PRT12_DBL_SYNC_IN
.set SDA__PRTDSI__OE_SEL0, CYREG_PRT12_OE_SEL0
.set SDA__PRTDSI__OE_SEL1, CYREG_PRT12_OE_SEL1
.set SDA__PRTDSI__OUT_SEL0, CYREG_PRT12_OUT_SEL0
.set SDA__PRTDSI__OUT_SEL1, CYREG_PRT12_OUT_SEL1
.set SDA__PRTDSI__SYNC_OUT, CYREG_PRT12_SYNC_OUT
.set SDA__PS, CYREG_PRT12_PS
.set SDA__SHIFT, 1
.set SDA__SIO_CFG, CYREG_PRT12_SIO_CFG
.set SDA__SIO_DIFF, CYREG_PRT12_SIO_DIFF
.set SDA__SIO_HYST_EN, CYREG_PRT12_SIO_HYST_EN
.set SDA__SIO_REG_HIFREQ, CYREG_PRT12_SIO_REG_HIFREQ
.set SDA__SLW, CYREG_PRT12_SLW

/* TEMP */
.set TEMP__0__INTTYPE, CYREG_PICU2_INTTYPE3
.set TEMP__0__MASK, 0x08
.set TEMP__0__PC, CYREG_PRT2_PC3
.set TEMP__0__PORT, 2
.set TEMP__0__SHIFT, 3
.set TEMP__AG, CYREG_PRT2_AG
.set TEMP__AMUX, CYREG_PRT2_AMUX
.set TEMP__BIE, CYREG_PRT2_BIE
.set TEMP__BIT_MASK, CYREG_PRT2_BIT_MASK
.set TEMP__BYP, CYREG_PRT2_BYP
.set TEMP__CTL, CYREG_PRT2_CTL
.set TEMP__DM0, CYREG_PRT2_DM0
.set TEMP__DM1, CYREG_PRT2_DM1
.set TEMP__DM2, CYREG_PRT2_DM2
.set TEMP__DR, CYREG_PRT2_DR
.set TEMP__INP_DIS, CYREG_PRT2_INP_DIS
.set TEMP__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU2_BASE
.set TEMP__LCD_COM_SEG, CYREG_PRT2_LCD_COM_SEG
.set TEMP__LCD_EN, CYREG_PRT2_LCD_EN
.set TEMP__MASK, 0x08
.set TEMP__PORT, 2
.set TEMP__PRT, CYREG_PRT2_PRT
.set TEMP__PRTDSI__CAPS_SEL, CYREG_PRT2_CAPS_SEL
.set TEMP__PRTDSI__DBL_SYNC_IN, CYREG_PRT2_DBL_SYNC_IN
.set TEMP__PRTDSI__OE_SEL0, CYREG_PRT2_OE_SEL0
.set TEMP__PRTDSI__OE_SEL1, CYREG_PRT2_OE_SEL1
.set TEMP__PRTDSI__OUT_SEL0, CYREG_PRT2_OUT_SEL0
.set TEMP__PRTDSI__OUT_SEL1, CYREG_PRT2_OUT_SEL1
.set TEMP__PRTDSI__SYNC_OUT, CYREG_PRT2_SYNC_OUT
.set TEMP__PS, CYREG_PRT2_PS
.set TEMP__SHIFT, 3
.set TEMP__SLW, CYREG_PRT2_SLW

/* UART */
.set UART_BUART_sRX_RxBitCounter__16BIT_CONTROL_AUX_CTL_REG, CYREG_B1_UDB09_10_ACTL
.set UART_BUART_sRX_RxBitCounter__16BIT_CONTROL_CONTROL_REG, CYREG_B1_UDB09_10_CTL
.set UART_BUART_sRX_RxBitCounter__16BIT_CONTROL_COUNT_REG, CYREG_B1_UDB09_10_CTL
.set UART_BUART_sRX_RxBitCounter__16BIT_COUNT_CONTROL_REG, CYREG_B1_UDB09_10_CTL
.set UART_BUART_sRX_RxBitCounter__16BIT_COUNT_COUNT_REG, CYREG_B1_UDB09_10_CTL
.set UART_BUART_sRX_RxBitCounter__16BIT_MASK_MASK_REG, CYREG_B1_UDB09_10_MSK
.set UART_BUART_sRX_RxBitCounter__16BIT_MASK_PERIOD_REG, CYREG_B1_UDB09_10_MSK
.set UART_BUART_sRX_RxBitCounter__16BIT_PERIOD_MASK_REG, CYREG_B1_UDB09_10_MSK
.set UART_BUART_sRX_RxBitCounter__16BIT_PERIOD_PERIOD_REG, CYREG_B1_UDB09_10_MSK
.set UART_BUART_sRX_RxBitCounter__CONTROL_AUX_CTL_REG, CYREG_B1_UDB09_ACTL
.set UART_BUART_sRX_RxBitCounter__CONTROL_REG, CYREG_B1_UDB09_CTL
.set UART_BUART_sRX_RxBitCounter__CONTROL_ST_REG, CYREG_B1_UDB09_ST_CTL
.set UART_BUART_sRX_RxBitCounter__COUNT_REG, CYREG_B1_UDB09_CTL
.set UART_BUART_sRX_RxBitCounter__COUNT_ST_REG, CYREG_B1_UDB09_ST_CTL
.set UART_BUART_sRX_RxBitCounter__MASK_CTL_AUX_CTL_REG, CYREG_B1_UDB09_MSK_ACTL
.set UART_BUART_sRX_RxBitCounter__PER_CTL_AUX_CTL_REG, CYREG_B1_UDB09_MSK_ACTL
.set UART_BUART_sRX_RxBitCounter__PERIOD_REG, CYREG_B1_UDB09_MSK
.set UART_BUART_sRX_RxBitCounter_ST__16BIT_STATUS_AUX_CTL_REG, CYREG_B1_UDB09_10_ACTL
.set UART_BUART_sRX_RxBitCounter_ST__16BIT_STATUS_REG, CYREG_B1_UDB09_10_ST
.set UART_BUART_sRX_RxBitCounter_ST__MASK_REG, CYREG_B1_UDB09_MSK
.set UART_BUART_sRX_RxBitCounter_ST__MASK_ST_AUX_CTL_REG, CYREG_B1_UDB09_MSK_ACTL
.set UART_BUART_sRX_RxBitCounter_ST__PER_ST_AUX_CTL_REG, CYREG_B1_UDB09_MSK_ACTL
.set UART_BUART_sRX_RxBitCounter_ST__STATUS_AUX_CTL_REG, CYREG_B1_UDB09_ACTL
.set UART_BUART_sRX_RxBitCounter_ST__STATUS_CNT_REG, CYREG_B1_UDB09_ST_CTL
.set UART_BUART_sRX_RxBitCounter_ST__STATUS_CONTROL_REG, CYREG_B1_UDB09_ST_CTL
.set UART_BUART_sRX_RxBitCounter_ST__STATUS_REG, CYREG_B1_UDB09_ST
.set UART_BUART_sRX_RxShifter_u0__16BIT_A0_REG, CYREG_B1_UDB09_10_A0
.set UART_BUART_sRX_RxShifter_u0__16BIT_A1_REG, CYREG_B1_UDB09_10_A1
.set UART_BUART_sRX_RxShifter_u0__16BIT_D0_REG, CYREG_B1_UDB09_10_D0
.set UART_BUART_sRX_RxShifter_u0__16BIT_D1_REG, CYREG_B1_UDB09_10_D1
.set UART_BUART_sRX_RxShifter_u0__16BIT_DP_AUX_CTL_REG, CYREG_B1_UDB09_10_ACTL
.set UART_BUART_sRX_RxShifter_u0__16BIT_F0_REG, CYREG_B1_UDB09_10_F0
.set UART_BUART_sRX_RxShifter_u0__16BIT_F1_REG, CYREG_B1_UDB09_10_F1
.set UART_BUART_sRX_RxShifter_u0__A0_A1_REG, CYREG_B1_UDB09_A0_A1
.set UART_BUART_sRX_RxShifter_u0__A0_REG, CYREG_B1_UDB09_A0
.set UART_BUART_sRX_RxShifter_u0__A1_REG, CYREG_B1_UDB09_A1
.set UART_BUART_sRX_RxShifter_u0__D0_D1_REG, CYREG_B1_UDB09_D0_D1
.set UART_BUART_sRX_RxShifter_u0__D0_REG, CYREG_B1_UDB09_D0
.set UART_BUART_sRX_RxShifter_u0__D1_REG, CYREG_B1_UDB09_D1
.set UART_BUART_sRX_RxShifter_u0__DP_AUX_CTL_REG, CYREG_B1_UDB09_ACTL
.set UART_BUART_sRX_RxShifter_u0__F0_F1_REG, CYREG_B1_UDB09_F0_F1
.set UART_BUART_sRX_RxShifter_u0__F0_REG, CYREG_B1_UDB09_F0
.set UART_BUART_sRX_RxShifter_u0__F1_REG, CYREG_B1_UDB09_F1
.set UART_BUART_sRX_RxShifter_u0__MSK_DP_AUX_CTL_REG, CYREG_B1_UDB09_MSK_ACTL
.set UART_BUART_sRX_RxShifter_u0__PER_DP_AUX_CTL_REG, CYREG_B1_UDB09_MSK_ACTL
.set UART_BUART_sRX_RxSts__16BIT_STATUS_AUX_CTL_REG, CYREG_B1_UDB08_09_ACTL
.set UART_BUART_sRX_RxSts__16BIT_STATUS_REG, CYREG_B1_UDB08_09_ST
.set UART_BUART_sRX_RxSts__3__MASK, 0x08
.set UART_BUART_sRX_RxSts__3__POS, 3
.set UART_BUART_sRX_RxSts__4__MASK, 0x10
.set UART_BUART_sRX_RxSts__4__POS, 4
.set UART_BUART_sRX_RxSts__5__MASK, 0x20
.set UART_BUART_sRX_RxSts__5__POS, 5
.set UART_BUART_sRX_RxSts__MASK, 0x38
.set UART_BUART_sRX_RxSts__MASK_REG, CYREG_B1_UDB08_MSK
.set UART_BUART_sRX_RxSts__STATUS_AUX_CTL_REG, CYREG_B1_UDB08_ACTL
.set UART_BUART_sRX_RxSts__STATUS_REG, CYREG_B1_UDB08_ST
.set UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_A0_REG, CYREG_B1_UDB08_09_A0
.set UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_A1_REG, CYREG_B1_UDB08_09_A1
.set UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_D0_REG, CYREG_B1_UDB08_09_D0
.set UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_D1_REG, CYREG_B1_UDB08_09_D1
.set UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_DP_AUX_CTL_REG, CYREG_B1_UDB08_09_ACTL
.set UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_F0_REG, CYREG_B1_UDB08_09_F0
.set UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_F1_REG, CYREG_B1_UDB08_09_F1
.set UART_BUART_sTX_sCLOCK_TxBitClkGen__A0_A1_REG, CYREG_B1_UDB08_A0_A1
.set UART_BUART_sTX_sCLOCK_TxBitClkGen__A0_REG, CYREG_B1_UDB08_A0
.set UART_BUART_sTX_sCLOCK_TxBitClkGen__A1_REG, CYREG_B1_UDB08_A1
.set UART_BUART_sTX_sCLOCK_TxBitClkGen__D0_D1_REG, CYREG_B1_UDB08_D0_D1
.set UART_BUART_sTX_sCLOCK_TxBitClkGen__D0_REG, CYREG_B1_UDB08_D0
.set UART_BUART_sTX_sCLOCK_TxBitClkGen__D1_REG, CYREG_B1_UDB08_D1
.set UART_BUART_sTX_sCLOCK_TxBitClkGen__DP_AUX_CTL_REG, CYREG_B1_UDB08_ACTL
.set UART_BUART_sTX_sCLOCK_TxBitClkGen__F0_F1_REG, CYREG_B1_UDB08_F0_F1
.set UART_BUART_sTX_sCLOCK_TxBitClkGen__F0_REG, CYREG_B1_UDB08_F0
.set UART_BUART_sTX_sCLOCK_TxBitClkGen__F1_REG, CYREG_B1_UDB08_F1
.set UART_BUART_sTX_TxShifter_u0__16BIT_A0_REG, CYREG_B0_UDB08_09_A0
.set UART_BUART_sTX_TxShifter_u0__16BIT_A1_REG, CYREG_B0_UDB08_09_A1
.set UART_BUART_sTX_TxShifter_u0__16BIT_D0_REG, CYREG_B0_UDB08_09_D0
.set UART_BUART_sTX_TxShifter_u0__16BIT_D1_REG, CYREG_B0_UDB08_09_D1
.set UART_BUART_sTX_TxShifter_u0__16BIT_DP_AUX_CTL_REG, CYREG_B0_UDB08_09_ACTL
.set UART_BUART_sTX_TxShifter_u0__16BIT_F0_REG, CYREG_B0_UDB08_09_F0
.set UART_BUART_sTX_TxShifter_u0__16BIT_F1_REG, CYREG_B0_UDB08_09_F1
.set UART_BUART_sTX_TxShifter_u0__A0_A1_REG, CYREG_B0_UDB08_A0_A1
.set UART_BUART_sTX_TxShifter_u0__A0_REG, CYREG_B0_UDB08_A0
.set UART_BUART_sTX_TxShifter_u0__A1_REG, CYREG_B0_UDB08_A1
.set UART_BUART_sTX_TxShifter_u0__D0_D1_REG, CYREG_B0_UDB08_D0_D1
.set UART_BUART_sTX_TxShifter_u0__D0_REG, CYREG_B0_UDB08_D0
.set UART_BUART_sTX_TxShifter_u0__D1_REG, CYREG_B0_UDB08_D1
.set UART_BUART_sTX_TxShifter_u0__DP_AUX_CTL_REG, CYREG_B0_UDB08_ACTL
.set UART_BUART_sTX_TxShifter_u0__F0_F1_REG, CYREG_B0_UDB08_F0_F1
.set UART_BUART_sTX_TxShifter_u0__F0_REG, CYREG_B0_UDB08_F0
.set UART_BUART_sTX_TxShifter_u0__F1_REG, CYREG_B0_UDB08_F1
.set UART_BUART_sTX_TxSts__0__MASK, 0x01
.set UART_BUART_sTX_TxSts__0__POS, 0
.set UART_BUART_sTX_TxSts__1__MASK, 0x02
.set UART_BUART_sTX_TxSts__1__POS, 1
.set UART_BUART_sTX_TxSts__2__MASK, 0x04
.set UART_BUART_sTX_TxSts__2__POS, 2
.set UART_BUART_sTX_TxSts__3__MASK, 0x08
.set UART_BUART_sTX_TxSts__3__POS, 3
.set UART_BUART_sTX_TxSts__MASK, 0x0F
.set UART_BUART_sTX_TxSts__MASK_REG, CYREG_B1_UDB11_MSK
.set UART_BUART_sTX_TxSts__STATUS_AUX_CTL_REG, CYREG_B1_UDB11_ACTL
.set UART_BUART_sTX_TxSts__STATUS_REG, CYREG_B1_UDB11_ST
.set UART_IntClock__CFG0, CYREG_CLKDIST_DCFG1_CFG0
.set UART_IntClock__CFG1, CYREG_CLKDIST_DCFG1_CFG1
.set UART_IntClock__CFG2, CYREG_CLKDIST_DCFG1_CFG2
.set UART_IntClock__CFG2_SRC_SEL_MASK, 0x07
.set UART_IntClock__INDEX, 0x01
.set UART_IntClock__PM_ACT_CFG, CYREG_PM_ACT_CFG2
.set UART_IntClock__PM_ACT_MSK, 0x02
.set UART_IntClock__PM_STBY_CFG, CYREG_PM_STBY_CFG2
.set UART_IntClock__PM_STBY_MSK, 0x02

/* ISR_RX */
.set ISR_RX__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set ISR_RX__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set ISR_RX__INTC_MASK, 0x04
.set ISR_RX__INTC_NUMBER, 2
.set ISR_RX__INTC_PRIOR_NUM, 7
.set ISR_RX__INTC_PRIOR_REG, CYREG_NVIC_PRI_2
.set ISR_RX__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set ISR_RX__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0

/* ISR_TX */
.set ISR_TX__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set ISR_TX__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set ISR_TX__INTC_MASK, 0x08
.set ISR_TX__INTC_NUMBER, 3
.set ISR_TX__INTC_PRIOR_NUM, 7
.set ISR_TX__INTC_PRIOR_REG, CYREG_NVIC_PRI_3
.set ISR_TX__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set ISR_TX__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0

/* EXT_LED */
.set EXT_LED__0__INTTYPE, CYREG_PICU2_INTTYPE5
.set EXT_LED__0__MASK, 0x20
.set EXT_LED__0__PC, CYREG_PRT2_PC5
.set EXT_LED__0__PORT, 2
.set EXT_LED__0__SHIFT, 5
.set EXT_LED__AG, CYREG_PRT2_AG
.set EXT_LED__AMUX, CYREG_PRT2_AMUX
.set EXT_LED__BIE, CYREG_PRT2_BIE
.set EXT_LED__BIT_MASK, CYREG_PRT2_BIT_MASK
.set EXT_LED__BYP, CYREG_PRT2_BYP
.set EXT_LED__CTL, CYREG_PRT2_CTL
.set EXT_LED__DM0, CYREG_PRT2_DM0
.set EXT_LED__DM1, CYREG_PRT2_DM1
.set EXT_LED__DM2, CYREG_PRT2_DM2
.set EXT_LED__DR, CYREG_PRT2_DR
.set EXT_LED__INP_DIS, CYREG_PRT2_INP_DIS
.set EXT_LED__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU2_BASE
.set EXT_LED__LCD_COM_SEG, CYREG_PRT2_LCD_COM_SEG
.set EXT_LED__LCD_EN, CYREG_PRT2_LCD_EN
.set EXT_LED__MASK, 0x20
.set EXT_LED__PORT, 2
.set EXT_LED__PRT, CYREG_PRT2_PRT
.set EXT_LED__PRTDSI__CAPS_SEL, CYREG_PRT2_CAPS_SEL
.set EXT_LED__PRTDSI__DBL_SYNC_IN, CYREG_PRT2_DBL_SYNC_IN
.set EXT_LED__PRTDSI__OE_SEL0, CYREG_PRT2_OE_SEL0
.set EXT_LED__PRTDSI__OE_SEL1, CYREG_PRT2_OE_SEL1
.set EXT_LED__PRTDSI__OUT_SEL0, CYREG_PRT2_OUT_SEL0
.set EXT_LED__PRTDSI__OUT_SEL1, CYREG_PRT2_OUT_SEL1
.set EXT_LED__PRTDSI__SYNC_OUT, CYREG_PRT2_SYNC_OUT
.set EXT_LED__PS, CYREG_PRT2_PS
.set EXT_LED__SHIFT, 5
.set EXT_LED__SLW, CYREG_PRT2_SLW

/* INT_ACC */
.set INT_ACC__0__INTTYPE, CYREG_PICU12_INTTYPE4
.set INT_ACC__0__MASK, 0x10
.set INT_ACC__0__PC, CYREG_PRT12_PC4
.set INT_ACC__0__PORT, 12
.set INT_ACC__0__SHIFT, 4
.set INT_ACC__AG, CYREG_PRT12_AG
.set INT_ACC__BIE, CYREG_PRT12_BIE
.set INT_ACC__BIT_MASK, CYREG_PRT12_BIT_MASK
.set INT_ACC__BYP, CYREG_PRT12_BYP
.set INT_ACC__DM0, CYREG_PRT12_DM0
.set INT_ACC__DM1, CYREG_PRT12_DM1
.set INT_ACC__DM2, CYREG_PRT12_DM2
.set INT_ACC__DR, CYREG_PRT12_DR
.set INT_ACC__INP_DIS, CYREG_PRT12_INP_DIS
.set INT_ACC__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU12_BASE
.set INT_ACC__MASK, 0x10
.set INT_ACC__PORT, 12
.set INT_ACC__PRT, CYREG_PRT12_PRT
.set INT_ACC__PRTDSI__DBL_SYNC_IN, CYREG_PRT12_DBL_SYNC_IN
.set INT_ACC__PRTDSI__OE_SEL0, CYREG_PRT12_OE_SEL0
.set INT_ACC__PRTDSI__OE_SEL1, CYREG_PRT12_OE_SEL1
.set INT_ACC__PRTDSI__OUT_SEL0, CYREG_PRT12_OUT_SEL0
.set INT_ACC__PRTDSI__OUT_SEL1, CYREG_PRT12_OUT_SEL1
.set INT_ACC__PRTDSI__SYNC_OUT, CYREG_PRT12_SYNC_OUT
.set INT_ACC__PS, CYREG_PRT12_PS
.set INT_ACC__SHIFT, 4
.set INT_ACC__SIO_CFG, CYREG_PRT12_SIO_CFG
.set INT_ACC__SIO_DIFF, CYREG_PRT12_SIO_DIFF
.set INT_ACC__SIO_HYST_EN, CYREG_PRT12_SIO_HYST_EN
.set INT_ACC__SIO_REG_HIFREQ, CYREG_PRT12_SIO_REG_HIFREQ
.set INT_ACC__SLW, CYREG_PRT12_SLW

/* ISR_ACC */
.set ISR_ACC__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set ISR_ACC__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set ISR_ACC__INTC_MASK, 0x01
.set ISR_ACC__INTC_NUMBER, 0
.set ISR_ACC__INTC_PRIOR_NUM, 7
.set ISR_ACC__INTC_PRIOR_REG, CYREG_NVIC_PRI_0
.set ISR_ACC__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set ISR_ACC__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0

/* ISR_DEB */
.set ISR_DEB__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set ISR_DEB__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set ISR_DEB__INTC_MASK, 0x02
.set ISR_DEB__INTC_NUMBER, 1
.set ISR_DEB__INTC_PRIOR_NUM, 7
.set ISR_DEB__INTC_PRIOR_REG, CYREG_NVIC_PRI_1
.set ISR_DEB__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set ISR_DEB__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0

/* Clock_DEB */
.set Clock_DEB__CFG0, CYREG_CLKDIST_DCFG2_CFG0
.set Clock_DEB__CFG1, CYREG_CLKDIST_DCFG2_CFG1
.set Clock_DEB__CFG2, CYREG_CLKDIST_DCFG2_CFG2
.set Clock_DEB__CFG2_SRC_SEL_MASK, 0x07
.set Clock_DEB__INDEX, 0x02
.set Clock_DEB__PM_ACT_CFG, CYREG_PM_ACT_CFG2
.set Clock_DEB__PM_ACT_MSK, 0x04
.set Clock_DEB__PM_STBY_CFG, CYREG_PM_STBY_CFG2
.set Clock_DEB__PM_STBY_MSK, 0x04

/* I2C_Master */
.set I2C_Master_I2C_FF__ADR, CYREG_I2C_ADR
.set I2C_Master_I2C_FF__CFG, CYREG_I2C_CFG
.set I2C_Master_I2C_FF__CLK_DIV1, CYREG_I2C_CLK_DIV1
.set I2C_Master_I2C_FF__CLK_DIV2, CYREG_I2C_CLK_DIV2
.set I2C_Master_I2C_FF__CSR, CYREG_I2C_CSR
.set I2C_Master_I2C_FF__D, CYREG_I2C_D
.set I2C_Master_I2C_FF__MCSR, CYREG_I2C_MCSR
.set I2C_Master_I2C_FF__PM_ACT_CFG, CYREG_PM_ACT_CFG5
.set I2C_Master_I2C_FF__PM_ACT_MSK, 0x04
.set I2C_Master_I2C_FF__PM_STBY_CFG, CYREG_PM_STBY_CFG5
.set I2C_Master_I2C_FF__PM_STBY_MSK, 0x04
.set I2C_Master_I2C_FF__TMOUT_CFG0, CYREG_I2C_TMOUT_CFG0
.set I2C_Master_I2C_FF__TMOUT_CFG1, CYREG_I2C_TMOUT_CFG1
.set I2C_Master_I2C_FF__TMOUT_CSR, CYREG_I2C_TMOUT_CSR
.set I2C_Master_I2C_FF__TMOUT_SR, CYREG_I2C_TMOUT_SR
.set I2C_Master_I2C_FF__XCFG, CYREG_I2C_XCFG
.set I2C_Master_I2C_IRQ__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set I2C_Master_I2C_IRQ__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set I2C_Master_I2C_IRQ__INTC_MASK, 0x8000
.set I2C_Master_I2C_IRQ__INTC_NUMBER, 15
.set I2C_Master_I2C_IRQ__INTC_PRIOR_NUM, 7
.set I2C_Master_I2C_IRQ__INTC_PRIOR_REG, CYREG_NVIC_PRI_15
.set I2C_Master_I2C_IRQ__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set I2C_Master_I2C_IRQ__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0

/* ADC_DelSig_1 */
.set ADC_DelSig_1_DEC__COHER, CYREG_DEC_COHER
.set ADC_DelSig_1_DEC__CR, CYREG_DEC_CR
.set ADC_DelSig_1_DEC__DR1, CYREG_DEC_DR1
.set ADC_DelSig_1_DEC__DR2, CYREG_DEC_DR2
.set ADC_DelSig_1_DEC__DR2H, CYREG_DEC_DR2H
.set ADC_DelSig_1_DEC__GCOR, CYREG_DEC_GCOR
.set ADC_DelSig_1_DEC__GCORH, CYREG_DEC_GCORH
.set ADC_DelSig_1_DEC__GVAL, CYREG_DEC_GVAL
.set ADC_DelSig_1_DEC__OCOR, CYREG_DEC_OCOR
.set ADC_DelSig_1_DEC__OCORH, CYREG_DEC_OCORH
.set ADC_DelSig_1_DEC__OCORM, CYREG_DEC_OCORM
.set ADC_DelSig_1_DEC__OUTSAMP, CYREG_DEC_OUTSAMP
.set ADC_DelSig_1_DEC__OUTSAMPH, CYREG_DEC_OUTSAMPH
.set ADC_DelSig_1_DEC__OUTSAMPM, CYREG_DEC_OUTSAMPM
.set ADC_DelSig_1_DEC__OUTSAMPS, CYREG_DEC_OUTSAMPS
.set ADC_DelSig_1_DEC__PM_ACT_CFG, CYREG_PM_ACT_CFG10
.set ADC_DelSig_1_DEC__PM_ACT_MSK, 0x01
.set ADC_DelSig_1_DEC__PM_STBY_CFG, CYREG_PM_STBY_CFG10
.set ADC_DelSig_1_DEC__PM_STBY_MSK, 0x01
.set ADC_DelSig_1_DEC__SHIFT1, CYREG_DEC_SHIFT1
.set ADC_DelSig_1_DEC__SHIFT2, CYREG_DEC_SHIFT2
.set ADC_DelSig_1_DEC__SR, CYREG_DEC_SR
.set ADC_DelSig_1_DEC__TRIM__M1, CYREG_FLSHID_CUST_TABLES_DEC_M1
.set ADC_DelSig_1_DEC__TRIM__M2, CYREG_FLSHID_CUST_TABLES_DEC_M2
.set ADC_DelSig_1_DEC__TRIM__M3, CYREG_FLSHID_CUST_TABLES_DEC_M3
.set ADC_DelSig_1_DEC__TRIM__M4, CYREG_FLSHID_CUST_TABLES_DEC_M4
.set ADC_DelSig_1_DEC__TRIM__M5, CYREG_FLSHID_CUST_TABLES_DEC_M5
.set ADC_DelSig_1_DEC__TRIM__M6, CYREG_FLSHID_CUST_TABLES_DEC_M6
.set ADC_DelSig_1_DEC__TRIM__M7, CYREG_FLSHID_CUST_TABLES_DEC_M7
.set ADC_DelSig_1_DEC__TRIM__M8, CYREG_FLSHID_CUST_TABLES_DEC_M8
.set ADC_DelSig_1_DSM__BUF0, CYREG_DSM0_BUF0
.set ADC_DelSig_1_DSM__BUF1, CYREG_DSM0_BUF1
.set ADC_DelSig_1_DSM__BUF2, CYREG_DSM0_BUF2
.set ADC_DelSig_1_DSM__BUF3, CYREG_DSM0_BUF3
.set ADC_DelSig_1_DSM__CLK, CYREG_DSM0_CLK
.set ADC_DelSig_1_DSM__CR0, CYREG_DSM0_CR0
.set ADC_DelSig_1_DSM__CR1, CYREG_DSM0_CR1
.set ADC_DelSig_1_DSM__CR10, CYREG_DSM0_CR10
.set ADC_DelSig_1_DSM__CR11, CYREG_DSM0_CR11
.set ADC_DelSig_1_DSM__CR12, CYREG_DSM0_CR12
.set ADC_DelSig_1_DSM__CR13, CYREG_DSM0_CR13
.set ADC_DelSig_1_DSM__CR14, CYREG_DSM0_CR14
.set ADC_DelSig_1_DSM__CR15, CYREG_DSM0_CR15
.set ADC_DelSig_1_DSM__CR16, CYREG_DSM0_CR16
.set ADC_DelSig_1_DSM__CR17, CYREG_DSM0_CR17
.set ADC_DelSig_1_DSM__CR2, CYREG_DSM0_CR2
.set ADC_DelSig_1_DSM__CR3, CYREG_DSM0_CR3
.set ADC_DelSig_1_DSM__CR4, CYREG_DSM0_CR4
.set ADC_DelSig_1_DSM__CR5, CYREG_DSM0_CR5
.set ADC_DelSig_1_DSM__CR6, CYREG_DSM0_CR6
.set ADC_DelSig_1_DSM__CR7, CYREG_DSM0_CR7
.set ADC_DelSig_1_DSM__CR8, CYREG_DSM0_CR8
.set ADC_DelSig_1_DSM__CR9, CYREG_DSM0_CR9
.set ADC_DelSig_1_DSM__DEM0, CYREG_DSM0_DEM0
.set ADC_DelSig_1_DSM__DEM1, CYREG_DSM0_DEM1
.set ADC_DelSig_1_DSM__MISC, CYREG_DSM0_MISC
.set ADC_DelSig_1_DSM__OUT0, CYREG_DSM0_OUT0
.set ADC_DelSig_1_DSM__OUT1, CYREG_DSM0_OUT1
.set ADC_DelSig_1_DSM__REF0, CYREG_DSM0_REF0
.set ADC_DelSig_1_DSM__REF1, CYREG_DSM0_REF1
.set ADC_DelSig_1_DSM__REF2, CYREG_DSM0_REF2
.set ADC_DelSig_1_DSM__REF3, CYREG_DSM0_REF3
.set ADC_DelSig_1_DSM__RSVD1, CYREG_DSM0_RSVD1
.set ADC_DelSig_1_DSM__SW0, CYREG_DSM0_SW0
.set ADC_DelSig_1_DSM__SW2, CYREG_DSM0_SW2
.set ADC_DelSig_1_DSM__SW3, CYREG_DSM0_SW3
.set ADC_DelSig_1_DSM__SW4, CYREG_DSM0_SW4
.set ADC_DelSig_1_DSM__SW6, CYREG_DSM0_SW6
.set ADC_DelSig_1_DSM__TR0, CYREG_NPUMP_DSM_TR0
.set ADC_DelSig_1_DSM__TST0, CYREG_DSM0_TST0
.set ADC_DelSig_1_DSM__TST1, CYREG_DSM0_TST1
.set ADC_DelSig_1_Ext_CP_Clk__CFG0, CYREG_CLKDIST_DCFG0_CFG0
.set ADC_DelSig_1_Ext_CP_Clk__CFG1, CYREG_CLKDIST_DCFG0_CFG1
.set ADC_DelSig_1_Ext_CP_Clk__CFG2, CYREG_CLKDIST_DCFG0_CFG2
.set ADC_DelSig_1_Ext_CP_Clk__CFG2_SRC_SEL_MASK, 0x07
.set ADC_DelSig_1_Ext_CP_Clk__INDEX, 0x00
.set ADC_DelSig_1_Ext_CP_Clk__PM_ACT_CFG, CYREG_PM_ACT_CFG2
.set ADC_DelSig_1_Ext_CP_Clk__PM_ACT_MSK, 0x01
.set ADC_DelSig_1_Ext_CP_Clk__PM_STBY_CFG, CYREG_PM_STBY_CFG2
.set ADC_DelSig_1_Ext_CP_Clk__PM_STBY_MSK, 0x01
.set ADC_DelSig_1_IRQ__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set ADC_DelSig_1_IRQ__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set ADC_DelSig_1_IRQ__INTC_MASK, 0x20000000
.set ADC_DelSig_1_IRQ__INTC_NUMBER, 29
.set ADC_DelSig_1_IRQ__INTC_PRIOR_NUM, 7
.set ADC_DelSig_1_IRQ__INTC_PRIOR_REG, CYREG_NVIC_PRI_29
.set ADC_DelSig_1_IRQ__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set ADC_DelSig_1_IRQ__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0
.set ADC_DelSig_1_theACLK__CFG0, CYREG_CLKDIST_ACFG0_CFG0
.set ADC_DelSig_1_theACLK__CFG1, CYREG_CLKDIST_ACFG0_CFG1
.set ADC_DelSig_1_theACLK__CFG2, CYREG_CLKDIST_ACFG0_CFG2
.set ADC_DelSig_1_theACLK__CFG2_SRC_SEL_MASK, 0x07
.set ADC_DelSig_1_theACLK__CFG3, CYREG_CLKDIST_ACFG0_CFG3
.set ADC_DelSig_1_theACLK__CFG3_PHASE_DLY_MASK, 0x0F
.set ADC_DelSig_1_theACLK__INDEX, 0x00
.set ADC_DelSig_1_theACLK__PM_ACT_CFG, CYREG_PM_ACT_CFG1
.set ADC_DelSig_1_theACLK__PM_ACT_MSK, 0x01
.set ADC_DelSig_1_theACLK__PM_STBY_CFG, CYREG_PM_STBY_CFG1
.set ADC_DelSig_1_theACLK__PM_STBY_MSK, 0x01

/* BUILT_IN_LED */
.set BUILT_IN_LED__0__INTTYPE, CYREG_PICU2_INTTYPE1
.set BUILT_IN_LED__0__MASK, 0x02
.set BUILT_IN_LED__0__PC, CYREG_PRT2_PC1
.set BUILT_IN_LED__0__PORT, 2
.set BUILT_IN_LED__0__SHIFT, 1
.set BUILT_IN_LED__AG, CYREG_PRT2_AG
.set BUILT_IN_LED__AMUX, CYREG_PRT2_AMUX
.set BUILT_IN_LED__BIE, CYREG_PRT2_BIE
.set BUILT_IN_LED__BIT_MASK, CYREG_PRT2_BIT_MASK
.set BUILT_IN_LED__BYP, CYREG_PRT2_BYP
.set BUILT_IN_LED__CTL, CYREG_PRT2_CTL
.set BUILT_IN_LED__DM0, CYREG_PRT2_DM0
.set BUILT_IN_LED__DM1, CYREG_PRT2_DM1
.set BUILT_IN_LED__DM2, CYREG_PRT2_DM2
.set BUILT_IN_LED__DR, CYREG_PRT2_DR
.set BUILT_IN_LED__INP_DIS, CYREG_PRT2_INP_DIS
.set BUILT_IN_LED__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU2_BASE
.set BUILT_IN_LED__LCD_COM_SEG, CYREG_PRT2_LCD_COM_SEG
.set BUILT_IN_LED__LCD_EN, CYREG_PRT2_LCD_EN
.set BUILT_IN_LED__MASK, 0x02
.set BUILT_IN_LED__PORT, 2
.set BUILT_IN_LED__PRT, CYREG_PRT2_PRT
.set BUILT_IN_LED__PRTDSI__CAPS_SEL, CYREG_PRT2_CAPS_SEL
.set BUILT_IN_LED__PRTDSI__DBL_SYNC_IN, CYREG_PRT2_DBL_SYNC_IN
.set BUILT_IN_LED__PRTDSI__OE_SEL0, CYREG_PRT2_OE_SEL0
.set BUILT_IN_LED__PRTDSI__OE_SEL1, CYREG_PRT2_OE_SEL1
.set BUILT_IN_LED__PRTDSI__OUT_SEL0, CYREG_PRT2_OUT_SEL0
.set BUILT_IN_LED__PRTDSI__OUT_SEL1, CYREG_PRT2_OUT_SEL1
.set BUILT_IN_LED__PRTDSI__SYNC_OUT, CYREG_PRT2_SYNC_OUT
.set BUILT_IN_LED__PS, CYREG_PRT2_PS
.set BUILT_IN_LED__SHIFT, 1
.set BUILT_IN_LED__SLW, CYREG_PRT2_SLW

/* Miscellaneous */
.set BCLK__BUS_CLK__HZ, 24000000
.set BCLK__BUS_CLK__KHZ, 24000
.set BCLK__BUS_CLK__MHZ, 24
.set CYDEV_CHIP_DIE_LEOPARD, 1
.set CYDEV_CHIP_DIE_PSOC4A, 26
.set CYDEV_CHIP_DIE_PSOC5LP, 2
.set CYDEV_CHIP_DIE_PSOC5TM, 3
.set CYDEV_CHIP_DIE_TMA4, 4
.set CYDEV_CHIP_DIE_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_FM0P, 5
.set CYDEV_CHIP_FAMILY_FM3, 6
.set CYDEV_CHIP_FAMILY_FM4, 7
.set CYDEV_CHIP_FAMILY_PSOC3, 1
.set CYDEV_CHIP_FAMILY_PSOC4, 2
.set CYDEV_CHIP_FAMILY_PSOC5, 3
.set CYDEV_CHIP_FAMILY_PSOC6, 4
.set CYDEV_CHIP_FAMILY_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_USED, CYDEV_CHIP_FAMILY_PSOC5
.set CYDEV_CHIP_JTAG_ID, 0x2E161069
.set CYDEV_CHIP_MEMBER_3A, 1
.set CYDEV_CHIP_MEMBER_4A, 26
.set CYDEV_CHIP_MEMBER_4AA, 25
.set CYDEV_CHIP_MEMBER_4AB, 30
.set CYDEV_CHIP_MEMBER_4AC, 14
.set CYDEV_CHIP_MEMBER_4AD, 15
.set CYDEV_CHIP_MEMBER_4AE, 16
.set CYDEV_CHIP_MEMBER_4D, 20
.set CYDEV_CHIP_MEMBER_4E, 6
.set CYDEV_CHIP_MEMBER_4F, 27
.set CYDEV_CHIP_MEMBER_4G, 4
.set CYDEV_CHIP_MEMBER_4H, 24
.set CYDEV_CHIP_MEMBER_4I, 32
.set CYDEV_CHIP_MEMBER_4J, 21
.set CYDEV_CHIP_MEMBER_4K, 22
.set CYDEV_CHIP_MEMBER_4L, 31
.set CYDEV_CHIP_MEMBER_4M, 29
.set CYDEV_CHIP_MEMBER_4N, 11
.set CYDEV_CHIP_MEMBER_4O, 8
.set CYDEV_CHIP_MEMBER_4P, 28
.set CYDEV_CHIP_MEMBER_4Q, 17
.set CYDEV_CHIP_MEMBER_4R, 9
.set CYDEV_CHIP_MEMBER_4S, 12
.set CYDEV_CHIP_MEMBER_4T, 10
.set CYDEV_CHIP_MEMBER_4U, 5
.set CYDEV_CHIP_MEMBER_4V, 23
.set CYDEV_CHIP_MEMBER_4W, 13
.set CYDEV_CHIP_MEMBER_4X, 7
.set CYDEV_CHIP_MEMBER_4Y, 18
.set CYDEV_CHIP_MEMBER_4Z, 19
.set CYDEV_CHIP_MEMBER_5A, 3
.set CYDEV_CHIP_MEMBER_5B, 2
.set CYDEV_CHIP_MEMBER_6A, 33
.set CYDEV_CHIP_MEMBER_FM3, 37
.set CYDEV_CHIP_MEMBER_FM4, 38
.set CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1, 34
.set CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2, 35
.set CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3, 36
.set CYDEV_CHIP_MEMBER_UNKNOWN, 0
.set CYDEV_CHIP_MEMBER_USED, CYDEV_CHIP_MEMBER_5B
.set CYDEV_CHIP_DIE_EXPECT, CYDEV_CHIP_MEMBER_USED
.set CYDEV_CHIP_DIE_ACTUAL, CYDEV_CHIP_DIE_EXPECT
.set CYDEV_CHIP_REV_LEOPARD_ES1, 0
.set CYDEV_CHIP_REV_LEOPARD_ES2, 1
.set CYDEV_CHIP_REV_LEOPARD_ES3, 3
.set CYDEV_CHIP_REV_LEOPARD_PRODUCTION, 3
.set CYDEV_CHIP_REV_PSOC4A_ES0, 17
.set CYDEV_CHIP_REV_PSOC4A_PRODUCTION, 17
.set CYDEV_CHIP_REV_PSOC5LP_ES0, 0
.set CYDEV_CHIP_REV_PSOC5LP_PRODUCTION, 0
.set CYDEV_CHIP_REV_PSOC5TM_ES0, 0
.set CYDEV_CHIP_REV_PSOC5TM_ES1, 1
.set CYDEV_CHIP_REV_PSOC5TM_PRODUCTION, 1
.set CYDEV_CHIP_REV_TMA4_ES, 17
.set CYDEV_CHIP_REV_TMA4_ES2, 33
.set CYDEV_CHIP_REV_TMA4_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_3A_ES1, 0
.set CYDEV_CHIP_REVISION_3A_ES2, 1
.set CYDEV_CHIP_REVISION_3A_ES3, 3
.set CYDEV_CHIP_REVISION_3A_PRODUCTION, 3
.set CYDEV_CHIP_REVISION_4A_ES0, 17
.set CYDEV_CHIP_REVISION_4A_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_4AA_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4AB_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4AC_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4AD_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4AE_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4D_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4E_CCG2_NO_USBPD, 0
.set CYDEV_CHIP_REVISION_4E_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION_256K, 0
.set CYDEV_CHIP_REVISION_4G_ES, 17
.set CYDEV_CHIP_REVISION_4G_ES2, 33
.set CYDEV_CHIP_REVISION_4G_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_4H_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4I_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4J_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4K_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4L_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4M_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4N_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4O_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4P_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4Q_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4R_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4S_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4T_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4U_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4V_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4W_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4X_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4Y_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4Z_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_5A_ES0, 0
.set CYDEV_CHIP_REVISION_5A_ES1, 1
.set CYDEV_CHIP_REVISION_5A_PRODUCTION, 1
.set CYDEV_CHIP_REVISION_5B_ES0, 0
.set CYDEV_CHIP_REVISION_5B_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_6A_ES, 17
.set CYDEV_CHIP_REVISION_6A_NO_UDB, 33
.set CYDEV_CHIP_REVISION_6A_PRODUCTION, 33
.set CYDEV_CHIP_REVISION_FM3_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_FM4_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_USED, CYDEV_CHIP_REVISION_5B_PRODUCTION
.set CYDEV_CHIP_REV_EXPECT, CYDEV_CHIP_REVISION_USED
.set CYDEV_CONFIG_FASTBOOT_ENABLED, 1
.set CYDEV_CONFIG_UNUSED_IO_AllowButWarn, 0
.set CYDEV_CONFIG_UNUSED_IO, CYDEV_CONFIG_UNUSED_IO_AllowButWarn
.set CYDEV_CONFIG_UNUSED_IO_AllowWithInfo, 1
.set CYDEV_CONFIG_UNUSED_IO_Disallowed, 2
.set CYDEV_CONFIGURATION_COMPRESSED, 1
.set CYDEV_CONFIGURATION_DMA, 0
.set CYDEV_CONFIGURATION_ECC, 1
.set CYDEV_CONFIGURATION_IMOENABLED, CYDEV_CONFIG_FASTBOOT_ENABLED
.set CYDEV_CONFIGURATION_MODE_COMPRESSED, 0
.set CYDEV_CONFIGURATION_MODE, CYDEV_CONFIGURATION_MODE_COMPRESSED
.set CYDEV_CONFIGURATION_MODE_DMA, 2
.set CYDEV_CONFIGURATION_MODE_UNCOMPRESSED, 1
.set CYDEV_DEBUG_ENABLE_MASK, 0x20
.set CYDEV_DEBUG_ENABLE_REGISTER, CYREG_MLOGIC_DEBUG
.set CYDEV_DEBUGGING_DPS_Disable, 3
.set CYDEV_DEBUGGING_DPS_JTAG_4, 1
.set CYDEV_DEBUGGING_DPS_JTAG_5, 0
.set CYDEV_DEBUGGING_DPS_SWD, 2
.set CYDEV_DEBUGGING_DPS_SWD_SWV, 6
.set CYDEV_DEBUGGING_DPS, CYDEV_DEBUGGING_DPS_SWD_SWV
.set CYDEV_DEBUGGING_ENABLE, 1
.set CYDEV_DEBUGGING_XRES, 0
.set CYDEV_DMA_CHANNELS_AVAILABLE, 24
.set CYDEV_ECC_ENABLE, 0
.set CYDEV_HEAP_SIZE, 0x80
.set CYDEV_INSTRUCT_CACHE_ENABLED, 1
.set CYDEV_INTR_RISING, 0x0000800F
.set CYDEV_IS_EXPORTING_CODE, 0
.set CYDEV_IS_IMPORTING_CODE, 0
.set CYDEV_PROJ_TYPE, 0
.set CYDEV_PROJ_TYPE_BOOTLOADER, 1
.set CYDEV_PROJ_TYPE_LAUNCHER, 5
.set CYDEV_PROJ_TYPE_LOADABLE, 2
.set CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER, 4
.set CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER, 3
.set CYDEV_PROJ_TYPE_STANDARD, 0
.set CYDEV_PROTECTION_ENABLE, 0
.set CYDEV_STACK_SIZE, 0x0800
.set CYDEV_USE_BUNDLED_CMSIS, 1
.set CYDEV_VARIABLE_VDDA, 0
.set CYDEV_VDDA_MV, 5000
.set CYDEV_VDDD_MV, 5000
.set CYDEV_VDDIO0_MV, 5000
.set CYDEV_VDDIO1_MV, 5000
.set CYDEV_VDDIO2_MV, 5000
.set CYDEV_VDDIO3_MV, 5000
.set CYDEV_VIO0_MV, 5000
.set CYDEV_VIO1_MV, 5000
.set CYDEV_VIO2_MV, 5000
.set CYDEV_VIO3_MV, 5000
.set CYIPBLOCK_ARM_CM3_VERSION, 0
.set CYIPBLOCK_P3_ANAIF_VERSION, 0
.set CYIPBLOCK_P3_CAN_VERSION, 0
.set CYIPBLOCK_P3_CAPSENSE_VERSION, 0
.set CYIPBLOCK_P3_COMP_VERSION, 0
.set CYIPBLOCK_P3_DECIMATOR_VERSION, 0
.set CYIPBLOCK_P3_DFB_VERSION, 0
.set CYIPBLOCK_P3_DMA_VERSION, 0
.set CYIPBLOCK_P3_DRQ_VERSION, 0
.set CYIPBLOCK_P3_DSM_VERSION, 0
.set CYIPBLOCK_P3_EMIF_VERSION, 0
.set CYIPBLOCK_P3_I2C_VERSION, 0
.set CYIPBLOCK_P3_LCD_VERSION, 0
.set CYIPBLOCK_P3_LPF_VERSION, 0
.set CYIPBLOCK_P3_OPAMP_VERSION, 0
.set CYIPBLOCK_P3_PM_VERSION, 0
.set CYIPBLOCK_P3_SCCT_VERSION, 0
.set CYIPBLOCK_P3_TIMER_VERSION, 0
.set CYIPBLOCK_P3_USB_VERSION, 0
.set CYIPBLOCK_P3_VIDAC_VERSION, 0
.set CYIPBLOCK_P3_VREF_VERSION, 0
.set CYIPBLOCK_S8_GPIO_VERSION, 0
.set CYIPBLOCK_S8_IRQ_VERSION, 0
.set CYIPBLOCK_S8_SAR_VERSION, 0
.set CYIPBLOCK_S8_SIO_VERSION, 0
.set CYIPBLOCK_S8_UDB_VERSION, 0
.set DMA_CHANNELS_USED__MASK0, 0x00000000
.set CYDEV_BOOTLOADER_ENABLE, 0
.endif