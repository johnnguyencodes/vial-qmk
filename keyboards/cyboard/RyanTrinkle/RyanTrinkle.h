// Copyright 2021 cyboard (@cyboard)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "quantum.h"

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
#define LAYOUT_RyanTrinkle( \
    r6c1, r6c2, r6c3, r6c4, r6c5, r6c6, r6c7, r6c8,      r6c9, r6c10, r6c11, r6c12, r6c13, r6c14, r6c15, r6c16, \
    r5c2, r5c3, r5c4, r5c5, r5c6, r5c7, r5c8,           r5c9, r5c10, r5c11, r5c12, r5c13, r5c14, r5c16, \
      r4c3, r4c4, r4c5, r4c6, r4c7, r4c8,     r4c9, r4c10, r4c11, r4c12, r4c13, r4c14, r4c15, r4c16, \
        r3c3, r3c4, r3c5, r3c6, r3c7, r3c8,     r3c9, r3c10, r3c11, r3c12, r3c13, r3c14, r3c16, \
          r2c3, r2c5, r2c6, r2c7, r2c8,     r2c9, r2c10, r2c11, r2c12, r2c13, r2c14, r2c15, \
     r1c3, r1c4, r1c5, r1c6, r1c8,           r1c10, r1c12, r1c13, r1c14, r1c15, r1c16, \
                                                                         r0c15 \
) \
{ \
    { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
    { KC_NO, KC_NO, r1c3, r1c4, r1c5, r1c6, KC_NO, r1c8 }, \
    { KC_NO, KC_NO, r2c3, KC_NO, r2c5, r2c6, r2c7, r2c8 }, \
    { KC_NO, KC_NO, r3c3, r3c4, r3c5, r3c6, r3c7, r3c8 }, \
    { KC_NO, KC_NO, r4c3, r4c4, r4c5, r4c6, r4c7, r4c8 }, \
    { KC_NO, r5c2, r5c3, r5c4, r5c5, r5c6, r5c7, r5c8 }, \
    { r6c1, r6c2, r6c3, r6c4, r6c5, r6c6, r6c7, r6c8 }, \
\
    { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, r0c15, KC_NO }, \
    { KC_NO, r1c10, KC_NO, r1c12, r1c13, r1c14, r1c15, r1c16 }, \
    { r2c9, r2c10, r2c11, r2c12, r2c13, r2c14, r2c15, KC_NO }, \
    { r3c9, r3c10, r3c11, r3c12, r3c13, r3c14, KC_NO, r3c16 }, \
    { r4c9, r4c10, r4c11, r4c12, r4c13, r4c14, r4c15, r4c16 }, \
    { r5c9, r5c10, r5c11, r5c12, r5c13, r5c14, KC_NO, r5c16 }, \
    { r6c9, r6c10, r6c11, r6c12, r6c13, r6c14, r6c15, r6c16 } \
}
