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
#define LAYOUT_astro( \
    k00, k01, k02, k03, k04, k05, k06,             k60, k61, k62, k63, k64, k65, k66, \
    k10, k11, k12, k13, k14, k15, k16,             k70, k71, k72, k73, k74, k75, k76, \
    k20, k21, k22, k23, k24, k25, k26,             k80, k81, k82, k83, k84, k85, k86, \
    k30, k31, k32, k33, k34, k35,                       k91, k92, k93, k94, k95, k96, \
    k40, k41, k42, k43, k44, k45, k46, k47,   kan, ka0, ka1, ka2, ka3, ka4, ka5, ka6 \
) \
{ \
    { k00, k01, k02, k03, k04, k05, k06,   KC_NO }, \
    { k10, k11, k12, k13, k14, k15, k16,   KC_NO }, \
    { k20, k21, k22, k23, k24, k25, k26,   KC_NO }, \
    { k30, k31, k32, k33, k34, k35, KC_NO, KC_NO }, \
    { k40, k41, k42, k43, k44, k45, k46,   k47   }, \
\
    { KC_NO, k60,   k61, k62, k63, k64, k65, k66 }, \
    { KC_NO, k70,   k71, k72, k73, k74, k75, k76 }, \
    { KC_NO, k80,   k81, k82, k83, k84, k85, k86 }, \
    { KC_NO, KC_NO, k91, k92, k93, k94, k95, k96 }, \
    { kan, ka0, ka1, ka2, ka3, ka4, ka5, ka6 } \
}
