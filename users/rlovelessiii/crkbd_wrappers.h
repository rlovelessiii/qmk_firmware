#pragma once
#include "rlovelessiii.h"

/* Pre-process wrappers */

// Base Layer Thumb Clusters
#define _BASE_LT_                       BASE_LT0,       BASE_LT1,       BASE_LT2
#define _BASE_RT_                       BASE_RT1,       BASE_RT2,       BASE_RT3

// Lower Layer Thumb Clusters
#define _LOWER_LT_                      LOWER_LT0,      LOWER_LT1,      LOWER_LT2
#define _LOWER_RT_                      LOWER_RT1,      LOWER_RT2,      LOWER_RT3

// Raise Layer Thumb Clusters
#define _RAISE_LT_                      RAISE_LT0,      RAISE_LT1,      RAISE_LT2
#define _RAISE_RT_                      RAISE_RT1,      RAISE_LT2,      RAISE_RT3

// Adjust Layer Thumb Clusters
#define _ADJUST_LT_                     ADJUST_LT0,     ADJUST_LT1,     ADJUST_LT2
#define _ADJUST_RT_                     ADJUST_RT1,     ADJUST_RT2,     ADJUST_RT3

/* ________CRKBD_KEYMAP________ */

#define __________CRKBD_BASE____________ \
    ________BASE_L_1________,________BASE_R_1________,\
    ________BASE_L_2________,________BASE_R_2________,\
    ________BASE_L_3________,________BASE_R_3________,\
                   _BASE_LT_,_BASE_RT_

#define __________CRKBD_LOWER___________ \
    ________LOWER_L1________,________LOWER_R1________,\
    ________LOWER_L2________,________LOWER_R2________,\
    ________LOWER_L3________,________LOWER_R3________,\
                  _LOWER_LT_,_LOWER_RT_

#define __________CRKBD_RAISE___________ \
    ________RAISE_L1________,________RAISE_R1________,\
    ________RAISE_L2________,________RAISE_R2________,\
    ________RAISE_L3________,________RAISE_R3________,\
                  _RAISE_LT_,_RAISE_RT_

#define __________CRKBD_ADJUST__________ \
    _______ADJUST_L_1_______,_______ADJUST_R_1_______,\
    _______ADJUST_L_2_______,_______ADJUST_R_2_______,\
    _______ADJUST_L_3_______,_______ADJUST_R_3_______,\
                 _ADJUST_LT_,_ADJUST_RT_


