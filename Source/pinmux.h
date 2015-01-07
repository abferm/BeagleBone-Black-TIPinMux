#ifndef _PINMUX_H_
#define _PINMUX_H_

/*
 * MODE0 - Mux Mode 0
 * MODE1 - Mux Mode 1
 * MODE2 - Mux Mode 2
 * MODE3 - Mux Mode 3
 * MODE4 - Mux Mode 4
 * MODE5 - Mux Mode 5
 * MODE6 - Mux Mode 6
 * MODE7 - Mux Mode 7
 * IDIS - Receiver disabled
 * IEN - Receiver enabled
 * PD - Internal pull-down
 * PU - Internal pull-up
 * OFF - Internal pull disabled
 */

#define MUX_EVM() \

/* Design Status: NO ERRORS */

MUX_VAL(CONTROL_PADCONF_GPMC_AD0, (IEN | PD | MODE1 )) /* mmc1_dat0_mux2 */\
MUX_VAL(CONTROL_PADCONF_GPMC_AD1, (IEN | PD | MODE1 )) /* mmc1_dat1_mux2 */\
MUX_VAL(CONTROL_PADCONF_GPMC_AD2, (IEN | PD | MODE1 )) /* mmc1_dat2_mux2 */\
MUX_VAL(CONTROL_PADCONF_GPMC_AD3, (IEN | PD | MODE1 )) /* mmc1_dat3_mux2 */\
MUX_VAL(CONTROL_PADCONF_GPMC_AD4, (IEN | PD | MODE1 )) /* mmc1_dat4_mux2 */\
MUX_VAL(CONTROL_PADCONF_GPMC_AD5, (IEN | PD | MODE1 )) /* mmc1_dat5_mux2 */\
MUX_VAL(CONTROL_PADCONF_GPMC_AD6, (IEN | PD | MODE1 )) /* mmc1_dat6_mux2 */\
MUX_VAL(CONTROL_PADCONF_GPMC_AD7, (IEN | PD | MODE1 )) /* mmc1_dat7_mux2 */\
MUX_VAL(CONTROL_PADCONF_GPMC_AD8, (IEN | PD | MODE1 )) /* lcd_data23 */\
MUX_VAL(CONTROL_PADCONF_GPMC_AD9, (IEN | PD | MODE1 )) /* lcd_data22 */\
MUX_VAL(CONTROL_PADCONF_GPMC_AD10, (IEN | PD | MODE1 )) /* lcd_data21 */\
MUX_VAL(CONTROL_PADCONF_GPMC_AD11, (IEN | PD | MODE1 )) /* lcd_data20 */\
MUX_VAL(CONTROL_PADCONF_GPMC_AD12, (IEN | PD | MODE1 )) /* lcd_data19 */\
MUX_VAL(CONTROL_PADCONF_GPMC_AD13, (IEN | PD | MODE1 )) /* lcd_data18 */\
MUX_VAL(CONTROL_PADCONF_GPMC_AD14, (IEN | PD | MODE1 )) /* lcd_data17 */\
MUX_VAL(CONTROL_PADCONF_GPMC_AD15, (IEN | PD | MODE1 )) /* lcd_data16 */\
MUX_VAL(CONTROL_PADCONF_GPMC_A0, (IEN | PD | MODE7 )) /* gpio1[16] */\
MUX_VAL(CONTROL_PADCONF_GPMC_A1, (IEN | PD | MODE7 )) /* gpio1[17] */\
MUX_VAL(CONTROL_PADCONF_GPMC_A2, (IEN | PD | MODE7 )) /* gpio1[18] */\
MUX_VAL(CONTROL_PADCONF_GPMC_A3, (IEN | PD | MODE7 )) /* gpio1[19] */\
MUX_VAL(CONTROL_PADCONF_GPMC_A4, (IEN | PD | MODE7 )) /* gpio1[20] */\
MUX_VAL(CONTROL_PADCONF_GPMC_A5, (IEN | PD | MODE7 )) /* gpio1[21] */\
MUX_VAL(CONTROL_PADCONF_GPMC_A6, (IEN | PD | MODE7 )) /* gpio1[22] */\
MUX_VAL(CONTROL_PADCONF_GPMC_A7, (IEN | PD | MODE7 )) /* gpio1[23] */\
MUX_VAL(CONTROL_PADCONF_GPMC_A8, (IEN | PD | MODE7 )) /* gpio1[24] */\
MUX_VAL(CONTROL_PADCONF_GPMC_A9, (IEN | PD | MODE7 )) /* gpio1[25] */\
MUX_VAL(CONTROL_PADCONF_GPMC_A10, (IEN | PD | MODE7 )) /* gpio1[26] */\
MUX_VAL(CONTROL_PADCONF_GPMC_A11, (IEN | PD | MODE7 )) /* gpio1[27] */\
MUX_VAL(CONTROL_PADCONF_GPMC_WAIT0, (IEN | PU | MODE7 )) /* gpio0[30] */\
MUX_VAL(CONTROL_PADCONF_GPMC_WPN, (IEN | PU | MODE7 )) /* gpio0[31] */\
MUX_VAL(CONTROL_PADCONF_GPMC_BEN1, (IEN | PU | MODE7 )) /* gpio1[28] */\
MUX_VAL(CONTROL_PADCONF_GPMC_CSN0, (IEN | PU | MODE7 )) /* gpio1[29] */\
MUX_VAL(CONTROL_PADCONF_GPMC_CSN1, (IEN | PU | MODE2 )) /* mmc1_clk_mux0 */\
MUX_VAL(CONTROL_PADCONF_GPMC_CSN2, (IEN | PU | MODE2 )) /* mmc1_cmd_mux0 */\
MUX_VAL(CONTROL_PADCONF_GPMC_CSN3, (IEN | PU | MODE7 )) /* gpio2[0] */\
MUX_VAL(CONTROL_PADCONF_GPMC_CLK, (IEN | PD | MODE7 )) /* gpio2[1] */\
MUX_VAL(CONTROL_PADCONF_GPMC_ADVN_ALE, (IEN | PU | MODE7 )) /* gpio2[2] */\
MUX_VAL(CONTROL_PADCONF_GPMC_OEN_REN, (IEN | PU | MODE7 )) /* gpio2[3] */\
MUX_VAL(CONTROL_PADCONF_GPMC_WEN, (IEN | PU | MODE7 )) /* gpio2[4] */\
MUX_VAL(CONTROL_PADCONF_GPMC_BEN0_CLE, (IEN | PU | MODE7 )) /* gpio2[5] */\
MUX_VAL(CONTROL_PADCONF_LCD_DATA0, (IEN | OFF | MODE0 )) /* lcd_data0 */\
MUX_VAL(CONTROL_PADCONF_LCD_DATA1, (IEN | OFF | MODE0 )) /* lcd_data1 */\
MUX_VAL(CONTROL_PADCONF_LCD_DATA2, (IEN | OFF | MODE0 )) /* lcd_data2 */\
MUX_VAL(CONTROL_PADCONF_LCD_DATA3, (IEN | OFF | MODE0 )) /* lcd_data3 */\
MUX_VAL(CONTROL_PADCONF_LCD_DATA4, (IEN | OFF | MODE0 )) /* lcd_data4 */\
MUX_VAL(CONTROL_PADCONF_LCD_DATA5, (IEN | OFF | MODE0 )) /* lcd_data5 */\
MUX_VAL(CONTROL_PADCONF_LCD_DATA6, (IEN | OFF | MODE0 )) /* lcd_data6 */\
MUX_VAL(CONTROL_PADCONF_LCD_DATA7, (IEN | OFF | MODE0 )) /* lcd_data7 */\
MUX_VAL(CONTROL_PADCONF_LCD_DATA8, (IEN | OFF | MODE0 )) /* lcd_data8 */\
MUX_VAL(CONTROL_PADCONF_LCD_DATA9, (IEN | OFF | MODE0 )) /* lcd_data9 */\
MUX_VAL(CONTROL_PADCONF_LCD_DATA10, (IEN | OFF | MODE0 )) /* lcd_data10 */\
MUX_VAL(CONTROL_PADCONF_LCD_DATA11, (IEN | OFF | MODE0 )) /* lcd_data11 */\
MUX_VAL(CONTROL_PADCONF_LCD_DATA12, (IEN | OFF | MODE0 )) /* lcd_data12 */\
MUX_VAL(CONTROL_PADCONF_LCD_DATA13, (IEN | OFF | MODE0 )) /* lcd_data13 */\
MUX_VAL(CONTROL_PADCONF_LCD_DATA14, (IEN | OFF | MODE0 )) /* lcd_data14 */\
MUX_VAL(CONTROL_PADCONF_LCD_DATA15, (IEN | OFF | MODE0 )) /* lcd_data15 */\
MUX_VAL(CONTROL_PADCONF_LCD_VSYNC, (IEN | OFF | MODE0 )) /* lcd_vsync */\
MUX_VAL(CONTROL_PADCONF_LCD_HSYNC, (IEN | OFF | MODE0 )) /* lcd_hsync */\
MUX_VAL(CONTROL_PADCONF_LCD_PCLK, (IEN | OFF | MODE0 )) /* lcd_pclk */\
MUX_VAL(CONTROL_PADCONF_LCD_AC_BIAS_EN, (IEN | OFF | MODE0 )) /* lcd_ac_bias_en */\
MUX_VAL(CONTROL_PADCONF_MMC0_DAT3, (IEN | PU | MODE7 )) /* gpio2[26] */\
MUX_VAL(CONTROL_PADCONF_MMC0_DAT2, (IEN | PU | MODE7 )) /* gpio2[27] */\
MUX_VAL(CONTROL_PADCONF_MMC0_DAT1, (IEN | PU | MODE7 )) /* gpio2[28] */\
MUX_VAL(CONTROL_PADCONF_MMC0_DAT0, (IEN | PU | MODE7 )) /* gpio2[29] */\
MUX_VAL(CONTROL_PADCONF_MMC0_CLK, (IEN | PU | MODE7 )) /* gpio2[30] */\
MUX_VAL(CONTROL_PADCONF_MMC0_CMD, (IEN | PU | MODE7 )) /* gpio2[31] */\
MUX_VAL(CONTROL_PADCONF_MII1_COL, (IEN | PD | MODE7 )) /* gpio3[0] */\
MUX_VAL(CONTROL_PADCONF_MII1_CRS, (IEN | PD | MODE7 )) /* gpio3[1] */\
MUX_VAL(CONTROL_PADCONF_MII1_RX_ER, (IEN | PD | MODE7 )) /* gpio3[2] */\
MUX_VAL(CONTROL_PADCONF_MII1_TX_EN, (IEN | PD | MODE7 )) /* gpio3[3] */\
MUX_VAL(CONTROL_PADCONF_MII1_RX_DV, (IDIS | PD | MODE1 )) /* lcd_memory_clk_mux1 */\
MUX_VAL(CONTROL_PADCONF_MII1_TXD3, (IEN | PD | MODE7 )) /* gpio0[16] */\
MUX_VAL(CONTROL_PADCONF_MII1_TXD2, (IEN | PD | MODE7 )) /* gpio0[17] */\
MUX_VAL(CONTROL_PADCONF_MII1_TXD1, (IEN | PD | MODE7 )) /* gpio0[21] */\
MUX_VAL(CONTROL_PADCONF_MII1_TXD0, (IEN | PD | MODE7 )) /* gpio0[28] */\
MUX_VAL(CONTROL_PADCONF_MII1_TX_CLK, (IEN | PD | MODE7 )) /* gpio3[9] */\
MUX_VAL(CONTROL_PADCONF_MII1_RX_CLK, (IEN | PD | MODE7 )) /* gpio3[10] */\
MUX_VAL(CONTROL_PADCONF_MII1_RXD3, (IEN | PD | MODE7 )) /* gpio2[18] */\
MUX_VAL(CONTROL_PADCONF_MII1_RXD2, (IEN | PD | MODE7 )) /* gpio2[19] */\
MUX_VAL(CONTROL_PADCONF_MII1_RXD1, (IEN | PD | MODE7 )) /* gpio2[20] */\
MUX_VAL(CONTROL_PADCONF_MII1_RXD0, (IEN | PD | MODE7 )) /* gpio2[21] */\
MUX_VAL(CONTROL_PADCONF_RMII1_REF_CLK, (IEN | PD | MODE7 )) /* gpio0[29] */\
MUX_VAL(CONTROL_PADCONF_MDIO, (IEN | PU | MODE7 )) /* gpio0[0] */\
MUX_VAL(CONTROL_PADCONF_MDC, (IEN | PU | MODE7 )) /* gpio0[1] */\
MUX_VAL(CONTROL_PADCONF_SPI0_SCLK, (IEN | OFF | MODE7 )) /* gpio0[2] */\
MUX_VAL(CONTROL_PADCONF_SPI0_D0, (IEN | OFF | MODE7 )) /* gpio0[3] */\
MUX_VAL(CONTROL_PADCONF_SPI0_D1, (IEN | OFF | MODE7 )) /* gpio0[4] */\
MUX_VAL(CONTROL_PADCONF_SPI0_CS0, (IEN | OFF | MODE7 )) /* gpio0[5] */\
MUX_VAL(CONTROL_PADCONF_SPI0_CS1, (IEN | OFF | MODE7 )) /* gpio0[6] */\
MUX_VAL(CONTROL_PADCONF_ECAP0_IN_PWM0_OUT, (IEN | OFF | MODE7 )) /* gpio0[7] */\
MUX_VAL(CONTROL_PADCONF_UART0_CTSN, (IEN | OFF | MODE7 )) /* gpio1[8] */\
MUX_VAL(CONTROL_PADCONF_UART0_RTSN, (IEN | OFF | MODE7 )) /* gpio1[9] */\
MUX_VAL(CONTROL_PADCONF_UART0_RXD, (IEN | OFF | MODE7 )) /* gpio1[10] */\
MUX_VAL(CONTROL_PADCONF_UART0_TXD, (IEN | OFF | MODE7 )) /* gpio1[11] */\
MUX_VAL(CONTROL_PADCONF_UART1_CTSN, (IEN | OFF | MODE3 )) /* I2C2_SDA_mux0 */\
MUX_VAL(CONTROL_PADCONF_UART1_RTSN, (IEN | OFF | MODE3 )) /* I2C2_SCL_mux0 */\
MUX_VAL(CONTROL_PADCONF_UART1_RXD, (IEN | OFF | MODE7 )) /* gpio0[14] */\
MUX_VAL(CONTROL_PADCONF_UART1_TXD, (IEN | OFF | MODE7 )) /* gpio0[15] */\
MUX_VAL(CONTROL_PADCONF_I2C0_SDA, (IEN | OFF | MODE7 )) /* gpio3[5] */\
MUX_VAL(CONTROL_PADCONF_I2C0_SCL, (IEN | OFF | MODE7 )) /* gpio3[6] */\
MUX_VAL(CONTROL_PADCONF_MCASP0_ACLKX, (IEN | PD | MODE0 )) /* mcasp0_aclkx_mux0 */\
MUX_VAL(CONTROL_PADCONF_MCASP0_FSX, (IEN | PD | MODE0 )) /* mcasp0_fsx_mux0 */\
MUX_VAL(CONTROL_PADCONF_MCASP0_AXR0, (IEN | PD | MODE0 )) /* mcasp0_axr0_mux0 */\
MUX_VAL(CONTROL_PADCONF_MCASP0_AHCLKR, (IEN | PD | MODE0 )) /* mcasp0_ahclkr_mux0 */\
MUX_VAL(CONTROL_PADCONF_MCASP0_ACLKR, (IEN | PD | MODE0 )) /* mcasp0_aclkr_mux0 */\
MUX_VAL(CONTROL_PADCONF_MCASP0_FSR, (IEN | PD | MODE0 )) /* mcasp0_fsr_mux0 */\
MUX_VAL(CONTROL_PADCONF_MCASP0_AXR1, (IEN | PD | MODE0 )) /* mcasp0_axr1_mux0 */\
MUX_VAL(CONTROL_PADCONF_MCASP0_AHCLKX, (IEN | PD | MODE0 )) /* mcasp0_ahclkx_mux0 */\
MUX_VAL(CONTROL_PADCONF_XDMA_EVENT_INTR0, (IEN | OFF | MODE7 )) /* gpio0[19] */\
MUX_VAL(CONTROL_PADCONF_XDMA_EVENT_INTR1, (IEN | OFF | MODE7 )) /* gpio0[20] */\
MUX_VAL(CONTROL_PADCONF_WARMRSTN, (IEN | OFF | MODE0 )) /* nRESETIN_OUT */\
MUX_VAL(CONTROL_PADCONF_EXTINTN, (IEN | OFF | MODE0 )) /* nNMI */\
MUX_VAL(CONTROL_PADCONF_TMS, (IEN | PU | MODE0 )) /* TMS */\
MUX_VAL(CONTROL_PADCONF_TDI, (IEN | PU | MODE0 )) /* TDI */\
MUX_VAL(CONTROL_PADCONF_TDO, (IDIS | PU | MODE0 )) /* TDO */\
MUX_VAL(CONTROL_PADCONF_TCK, (IEN | PU | MODE0 )) /* TCK */\
MUX_VAL(CONTROL_PADCONF_TRSTN, (IEN | PD | MODE0 )) /* nTRST */\
MUX_VAL(CONTROL_PADCONF_EMU0, (IEN | PU | MODE0 )) /* EMU0 */\
MUX_VAL(CONTROL_PADCONF_EMU1, (IEN | PU | MODE0 )) /* EMU1 */\
MUX_VAL(CONTROL_PADCONF_RTC_PWRONRSTN, (IEN | OFF | MODE0 )) /* RTC_porz */\
MUX_VAL(CONTROL_PADCONF_PMIC_POWER_EN, (IDIS | PU | MODE0 )) /* PMIC_POWER_EN */\
MUX_VAL(CONTROL_PADCONF_EXT_WAKEUP, (IEN | PD | MODE0 )) /* EXT_WAKEUP */\
MUX_VAL(CONTROL_PADCONF_RTC_KALDO_ENN, (IEN | OFF | MODE0 )) /* ENZ_KALDO_1P8V */\
MUX_VAL(CONTROL_PADCONF_USB0_DRVVBUS, (IDIS | PD | MODE0 )) /* USB0_DRVVBUS */\
MUX_VAL(CONTROL_PADCONF_USB1_DRVVBUS, (IDIS | PD | MODE0 )) /* USB1_DRVVBUS */\

#endif
