/* Copyright 2023 Cyboard LLC (@Cyboard-DigitalTailor)
 * SPDX-License-Identifier: GPL-2.0-or-later
 */

#pragma once

/* Key matrix definitions */
#define MATRIX_ROWS 12
#define MATRIX_COLS 11
#define MATRIX_ROW_PINS { GP7, GP6, GP5, GP4, GP3, GP29 }
#define MATRIX_COL_PINS { GP13, GP12, GP9, GP8, GP2, GP0, NO_PIN, NO_PIN, NO_PIN, NO_PIN, NO_PIN }
#define MATRIX_ROW_PINS_RIGHT { GP20, GP22, GP26, GP27, GP28, GP29 }
#define MATRIX_COL_PINS_RIGHT { GP13, GP14, GP2, GP3, GP4, GP5, GP6, GP7, GP8, GP9, GP12 }

/* Split keyboard settings */
#define SERIAL_USART_TX_PIN GP1
#define MASTER_LEFT

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* Double-tap reset button parameters */
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP17
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 1000U

// fix for device detection after cold boot
// https://github.com/qmk/qmk_firmware/issues/18511#issuecomment-1264604610
// https://github.com/qmk/qmk_firmware/issues/8990#issuecomment-851055637
#undef SPLIT_USB_DETECT
//https://www.reddit.com/r/ErgoMechKeyboards/comments/11qevf9/comment/jc5y8ux/?context=3
#define USB_VBUS_PIN GP19
