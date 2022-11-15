// Copyright 2022 Rocky5232 (@Rocky5232)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define DEVICE_VER      0x0001
#define PRODUCT         Rocky Moran

/* key matrix size */
#define MATRIX_ROWS 2
#define MATRIX_COLS 2




#define ENCODERS_PAD_A {D4, E6, B4, D1}
#define ENCODERS_PAD_B {C6, D7, B3, D0}


/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
