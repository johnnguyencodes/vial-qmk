/* Copyright 2023 Cyboard LLC (@Cyboard-DigitalTailor)
 * SPDX-License-Identifier: GPL-2.0-or-later
 */

#pragma once

#include "quantum.h"

#define LAYOUT_zergotech( \
  r5c0, r5c1, r5c2, r5c3, r5c4, r5c5,     r11c0, r11c1, r11c2, r11c3, r11c4, r11c5, r11c6, r11c7, r11c8, r11c9, r11c10, \
  r4c0, r4c1, r4c2, r4c3, r4c4, r4c5,     r10c0, r10c1, r10c2, r10c3, r10c4, r10c5, r10c6, r10c7, r10c8, r10c9, r10c10, \
  r3c0, r3c1, r3c2, r3c3, r3c4, r3c5,     r9c0,  r9c1,  r9c2,  r9c3,  r9c4,  r9c5,  r9c6,  r9c7,  r9c8,  r9c9, \
  r2c0, r2c1, r2c2, r2c3, r2c4, r2c5,     r8c0,  r8c1,  r8c2,  r8c3,  r8c4,  r8c5,  r8c6,  r8c7,  r8c8,  r8c9,  r8c10, \
  r1c0, r1c1, r1c2, r1c3, r1c4, r1c5,     r7c0,  r7c1,  r7c2,  r7c3,  r7c4,  r7c5,         r7c7,         r7c9, \
  r0c0, r0c1, r0c2, r0c3, r0c4, r0c5,     r6c0,  r6c1,  r6c2,  r6c3,  r6c4,  r6c5,  r6c7,  r6c8,  r6c9,  r6c10 \
) \
{ \
    { r0c0, r0c1, r0c2, r0c3, r0c4, r0c5, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
    { r1c0, r1c1, r1c2, r1c3, r1c4, r1c5, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
    { r2c0, r2c1, r2c2, r2c3, r2c4, r2c5, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
    { r3c0, r3c1, r3c2, r3c3, r3c4, r3c5, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
    { r4c0, r4c1, r4c2, r4c3, r4c4, r4c5, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
    { r5c0, r5c1, r5c2, r5c3, r5c4, r5c5, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
\
    { r6c0,  r6c1,  r6c2,  r6c3,  r6c4,  r6c5,  KC_NO, r6c7,  r6c8,  r6c9,  r6c10 }, \
    { r7c0,  r7c1,  r7c2,  r7c3,  r7c4,  r7c5,  KC_NO, r7c7,  KC_NO, r7c9, KC_NO }, \
    { r8c0,  r8c1,  r8c2,  r8c3,  r8c4,  r8c5,  r8c6,  r8c7,  r8c8,  r8c9,  r8c10 }, \
    { r9c0,  r9c1,  r9c2,  r9c3,  r9c4,  r9c5,  r9c6,  r9c7,  r9c8,  r9c9, KC_NO }, \
    { r10c0, r10c1, r10c2, r10c3, r10c4, r10c5, r10c6, r10c7, r10c8, r10c9, r10c10 }, \
    { r11c0, r11c1, r11c2, r11c3, r11c4, r11c5, r11c6, r11c7, r11c8, r11c9, r11c10 } \
}
