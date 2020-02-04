#pragma once
#include "rlovelessiii.h"

/* Pre-Process Wrappers */

// Center columns
#define __XD75_M_0__        KC_NLCK,    KC_CAPS,    KC_SLCK
#define __XD75_M_1__        KC_P7,      KC_P8,      KC_P9
#define __XD75_M_2__        KC_P4,      KC_P5,      KC_P6
#define __XD75_M_3__        KC_P1,      KC_P2,      KC_P3
#define __XD75_M_4__        BASE_LT3,   KC_P0,      BASE_RT0

// Used for LOWER, RAISE, & ADJUST layers
#define __TRNS_3SP__        _______,    _______,    _______

/* ________XD75_KEYMAP________ */

#define __________XD75_BASE_____________ \
    ________BASE_L_0________,__XD75_M_0__,________BASE_R_0________,\
    ________BASE_L_1________,__XD75_M_1__,________BASE_R_1________,\
    ________BASE_L_2________,__XD75_M_2__,________BASE_R_2________,\
    ________BASE_L_3________,__XD75_M_3__,________BASE_R_3________,\
    ________BASE_L_4________,__XD75_M_4__,________BASE_R_4________

#define __________XD75_LOWER____________ \
    ________LOWER_L0________,__TRNS_3SP__,________LOWER_R0________,\
    ________LOWER_L1________,__TRNS_3SP__,________LOWER_R1________,\
    ________LOWER_L2________,__TRNS_3SP__,________LOWER_R2________,\
    ________LOWER_L3________,__TRNS_3SP__,________LOWER_R3________,\
    ________LOWER_L4________,__TRNS_3SP__,________LOWER_R4________

#define __________XD75_RAISE____________ \
    ________RAISE_L0________,__TRNS_3SP__,________RAISE_R0________,\
    ________RAISE_L1________,__TRNS_3SP__,________RAISE_R1________,\
    ________RAISE_L2________,__TRNS_3SP__,________RAISE_R2________,\
    ________RAISE_L3________,__TRNS_3SP__,________RAISE_R3________,\
    ________RAISE_L4________,__TRNS_3SP__,________RAISE_R4________

#define __________XD75_ADJUST___________ \
    _______ADJUST_L_0_______,__TRNS_3SP__,_______ADJUST_R_0_______,\
    _______ADJUST_L_1_______,__TRNS_3SP__,_______ADJUST_R_1_______,\
    _______ADJUST_L_2_______,__TRNS_3SP__,_______ADJUST_R_2_______,\
    _______ADJUST_L_3_______,__TRNS_3SP__,_______ADJUST_R_3_______,\
    _______ADJUST_L_4_______,__TRNS_3SP__,_______ADJUST_R_4_______
