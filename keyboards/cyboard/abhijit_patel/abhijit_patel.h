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
  l3c6, l3c5, l3c4, l3c3, l3c2, l3c1,                               r3c1, r3c2, r3c3, r3c4, r3c5, r3c6, \
  l2c6, l2c5, l2c4, l2c3, l2c2, l2c1,                               r2c1, r2c2, r2c3, r2c4, r2c5, r2c6, \
  l1c6, l1c5, l1c4, l1c3, l1c2, l1c1, l1c0, l1ca,     r1ca, r1c0, r1c1, r1c2, r1c3, r1c4, r1c5, r1c6, \
                          l0c3, l0c2, l0c0, l0ca,     r0ca, r0c0, r0c2, r0c3 \
) \
{ \
    { l0ca, l0c0, KC_NO, l0c2, l0c3, KC_NO, KC_NO, KC_NO }, \
    { l1ca, l1c0, l1c1, l1c2, l1c3, l1c4, l1c5, l1c6 }, \
    { KC_NO, KC_NO, l2c1, l2c2, l2c3, l2c4, l2c5, l2c6 }, \
    { KC_NO, KC_NO, l3c1, l3c2, l3c3, l3c4, l3c5, l3c6 }, \
\
    { r0ca, r0c0, KC_NO, r0c2, r0c3, KC_NO, KC_NO, KC_NO }, \
    { r1ca, r1c0, r1c1, r1c2, r1c3, r1c4, r1c5, r1c6 }, \
    { KC_NO, KC_NO, r2c1, r2c2, r2c3, r2c4, r2c5, r2c6 }, \
    { KC_NO, KC_NO, r3c1, r3c2, r3c3, r3c4, r3c5, r3c6 } \
}
