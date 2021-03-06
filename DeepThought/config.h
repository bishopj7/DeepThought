#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xEEEE
#define PRODUCT_ID      0xEDB5
#define DEVICE_VER		0x0001
#define MANUFACTURER    Clack-Attack
#define PRODUCT         The42

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 12

/* key matrix pins*/
#define MATRIX_ROW_PINS { D1,D0, D4, C6 }
#define MATRIX_COL_PINS { D7, E6, B4, B5, B6, B2, B3, B1, F7, F6, F5, F4 }
#define UNUSED_PINS

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define VIAL_KEYBOARD_UID {0xB1, 0xC1, 0x22, 0x38, 0x11, 0x15, 0x38, 0x09}
#define VIAL_UNLOCK_COMBO_ROWS { 0, 0 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 3 }
