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
#define LAYOUT_mandarbmax( \
      r10c2, r9c2, r8c2, r7c2,      r6c2, r5c2, r4c2, r3c2,       r6c3, r5c3, r4c3, r3c3,     r3c1, \
    r10c3, r9c10, r8c10, r7c10, r6c10, r5c10, r4c10, r3c10, r10c9, r9c9, r10c10, r8c9, r7c9,  r8c3, \
       r9c3, r4c6, r6c5, r8c7, r3c6, r9c5, r4c5, r8c5, r4c7, r6c6, r5c6, r5c9, r4c9, \
     r9c1, r4c8, r10c5, r9c7, r7c7, r6c7, r5c7, r3c7, r10c6, r9c6, r3c9, r10c8, r7c3, \
      r8c1, r3c5, r5c5, r10c7, r7c5, r3c8, r7c6, r8c6, r8c8, r7c8, r6c8, r7c1, \
     r10c1, r6c9,                       r10c4,                            r9c8, r5c1, r5c4, r4c1, \
    r6c1, r6c4, r4c4, r3c4, \
\
    r4c13, r6c11, r5c11, r6c12, \
    r7c11, r8c11, r9c11, \
    r7c12, r8c12, r9c12, r5c12, \
    r7c13, r8c13, r9c13, \
    r6c13, r5c13, r4c12 \
) \
{ \
    { r3c1,  r3c2,  r3c3,  r3c4,  r3c5,  r3c6,  r3c7,  r3c8,  r3c9,  r3c10,  KC_NO, KC_NO, KC_NO }, \
    { r4c1,  r4c2,  r4c3,  r4c4,  r4c5,  r4c6,  r4c7,  r4c8,  r4c9,  r4c10,  KC_NO, r4c12, r4c13 }, \
    { r5c1,  r5c2,  r5c3,  r5c4,  r5c5,  r5c6,  r5c7,  KC_NO, r5c9,  r5c10,  r5c11, r5c12, r5c13 }, \
    { r6c1,  r6c2,  r6c3,  r6c4,  r6c5,  r6c6,  r6c7,  r6c8,  r6c9,  r6c10,  r6c11, r6c12, r6c13 }, \
    { r7c1,  r7c2,  r7c3,  KC_NO, r7c5,  r7c6,  r7c7,  r7c8,  r7c9,  r7c10,  r7c11, r7c12, r7c13 }, \
    { r8c1,  r8c2,  r8c3,  KC_NO, r8c5,  r8c6,  r8c7,  r8c8,  r8c9,  r8c10, r8c11,  r8c12, r8c13 }, \
    { r9c1,  r9c2,  r9c3,  KC_NO, r9c5,  r9c6,  r9c7,  r9c8,  r9c9,  r9c10, r9c11,  r9c12, r9c13 }, \
    { r10c1, r10c2, r10c3, r10c4, r10c5, r10c6, r10c7, r10c8, r10c9, r10c10, KC_NO, KC_NO, KC_NO } \
}
/* KLE raw data
[{x:0.5,a:7},"7,1","6,1","5,1","4,1",{x:0.5},"3,1","2,1","1,1","0,1",{x:0.5},"3,2","2,2","1,2","0,2",{x:0.5},"0,0"],
[{y:0.5},"7,2","6,9","5,9","4,9","3,9","2,9","1,9","0,9","7,8","6,8","7,9","5,8","4,8",{w:2},"5,2",{x:0.5},"1,12","3,10","2,10","3,11"],
[{w:1.5},"6,2","1,5","3,4","5,6","0,5","6,4","1,4","5,4","1,6","3,5","2,5","2,8","1,8",{w:1.5,h:2,w2:2.25,h2:1,x2:-0.75,y2:1},"4,2",{x:0.5},"4,10","5,10","6,10",{h:2},"2,11"],
[{w:1.75},"6,0","1,7","7,4","6,6","4,6","3,6","2,6","0,6","7,5","6,5","0,8","7,7",{x:2.75},"4,11","5,11","6,11"],
[{w:2.25},"5,0","0,4","2,4","7,6","4,4","0,7","4,5","5,5","5,7","4,7","3,7",{w:2.25},"4,0",{x:1},"4,12","5,12","6,12",{h:2},"1,11"],
[{w:1.5},"7,0","3,8",{w:8},"7,3","6,7","2,0","2,3","1,0",{x:1,w:2},"3,12","2,12"],
[{x:1.25,w:1.5},"3,0",{x:8.75},"3,3","1,3","0,3"]
*/
