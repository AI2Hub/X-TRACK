/*
 * MIT License
 * Copyright (c) 2021 _VIFEXTech
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the follo18wing conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */
#ifndef __CONFIG_H
#define __CONFIG_H

#define NULL_PIN                PD0

/* Screen */
#define CONFIG_SCREEN_CS_PIN    PB0
#define CONFIG_SCREEN_DC_PIN    PA4
#define CONFIG_SCREEN_RST_PIN   PA6
#define CONFIG_SCREEN_SCK_PIN   PA5
#define CONFIG_SCREEN_MOSI_PIN  PA7
#define CONFIG_SCREEN_BLK_PIN   PB1

/* Battery */
#define CONFIG_BAT_DET_PIN      PA1
#define CONFIG_BAT_CHG_DET_PIN  PA11

/* Buzzer */
#define CONFIG_BUZZ_PIN         PA0

/* GPS */
#define CONFIG_GPS_TX_PIN       PA3
#define CONFIG_GPS_RX_PIN       PA2

/* IMU */
#define CONFIG_IMU_INT1_PIN     PB10
#define CONFIG_IMU_INT2_PIN     PB11

/* I2C */
#define CONFIG_MCU_SDA_PIN      PB7
#define CONFIG_MCU_SDL_PIN      PB6

/* Encoder */
#define CONFIG_ENCODER_B_PIN    PB5
#define CONFIG_ENCODER_A_PIN    PB4
#define CONFIG_ENCODER_PUSH_PIN PB3

/* Power */
#define CONFIG_POWER_EN_PIN     PA12

/* USART */
#define CONFIG_MCU_RX_PIN       PA10
#define CONFIG_MCU_TX_PIN       PA9

/* SD CARD */
#define CONFIG_SD_CD_PIN        PA8
#define CONFIG_SD_MOSI_PIN      PB15
#define CONFIG_SD_MISO_PIN      PB14
#define CONFIG_SD_SCK_PIN       PB13
#define CONFIG_SD_CS_PIN        PB12

#endif
