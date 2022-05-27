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
#define LAYOUT_abhijit_patel( \
  r6c8, r6c7, r6c6, r6c5, r6c4, r6c3, r6c2,                 r6c11, r6c12, r6c13, r6c14, r6c15, r6c16, r6c17, \
  r5c8, r5c7, r5c6, r5c5, r5c4, r5c3, r5c2,                 r5c11, r5c12, r5c13, r5c14, r5c15, r5c16, r5c17, \
  r4c8, r4c7, r4c6, r4c5, r4c4, r4c3, r4c2,                 r4c11, r4c12, r4c13, r4c14, r4c15, r4c16, r4c17, \
  r3c8, r3c7, r3c6, r3c5, r3c4, r3c3, r3c2,                 r3c11, r3c12, r3c13, r3c14, r3c15, r3c16, r3c17, \
  r2c8, r2c7, r2c6, r2c5, r2c4, r2c3, r2c2,                 r2c11, r2c12, r2c13, r2c14, r2c15, r2c16, r2c17, \
  r1c8, r1c7, r1c6, r1c5, r0c4, r0c3, r0c1, r0c0,     r0c9, r0c10, r0c12, r0c13, r1c14, r1c15, r1c16, r1c17 \
) \
{ \
    { r0c0, r0c1, KC_NO, r0c3, r0c4, KC_NO, KC_NO, KC_NO, KC_NO }, \
    { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, r1c5, r1c6, r1c7, r1c8 }, \
    { KC_NO, KC_NO, r2c2, r2c3, r2c4, r2c5, r2c6, r2c7, r2c8 }, \
    { KC_NO, KC_NO, r3c2, r3c3, r3c4, r3c5, r3c6, r3c7, r3c8 }, \
    { KC_NO, KC_NO, r4c2, r4c3, r4c4, r4c5, r4c6, r4c7, r4c8 }, \
    { KC_NO, KC_NO, r5c2, r5c3, r5c4, r5c5, r5c6, r5c7, r5c8 }, \
    { KC_NO, KC_NO, r6c2, r6c3, r6c4, r6c5, r6c6, r6c7, r6c8 }, \
\
    { r0c9, r0c10, KC_NO, r0c12, r0c13, KC_NO, KC_NO, KC_NO, KC_NO }, \
    { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, r1c14, r1c15, r1c16, r1c17 }, \
    { KC_NO, KC_NO, r2c11, r2c12, r2c13, r2c14, r2c15, r2c16, r2c17 }, \
    { KC_NO, KC_NO, r3c11, r3c12, r3c13, r3c14, r3c15, r3c16, r3c17 }, \
    { KC_NO, KC_NO, r4c11, r4c12, r4c13, r4c14, r4c15, r4c16, r4c17 }, \
    { KC_NO, KC_NO, r5c11, r5c12, r5c13, r5c14, r5c15, r5c16, r5c17 }, \
    { KC_NO, KC_NO, r6c11, r6c12, r6c13, r6c14, r6c15, r6c16, r6c17 } \
}
