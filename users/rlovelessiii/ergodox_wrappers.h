#pragma once
#include "rlovelessiii.h"

/* Undefine wrappers from wrappers.h */
#undef  ________BASE_L_4________
#undef  ________BASE_R_4________
#undef  ________LOWER_L4________
#undef  ________LOWER_R4________
#undef  ________RAISE_L4________
#undef  ________RAISE_R4________
#undef  _______ADJUST_L_4_______
#undef  _______ADJUST_R_4_______

/* Pre-Process Wrappers */

// Base Layer
#define ________BASE_L_4________        BASE_LP0,   BASE_LP1,   BASE_LP2,   BASE_LT0,   BASE_LT1
#define ________BASE_R_4________        BASE_RT2,   BASE_RT3,   BASE_RP0,   BASE_RP1,   BASE_RP2

#define __THUMB_L0__                                KC_MWSW,    KC_MWSR 
#define __THUMB_L1__                                            KC_MWSL
#define __THUMB_L2__                    BASE_LT2,   BASE_LT3,   KC_MWSA

#define __THUMB_R0__                    KC_HOME,    KC_END
#define __THUMB_R1__                    KC_PGUP
#define __THUMB_R2__                    KC_PGDN,    BASE_RT0,   BASE_RT1

// Lower Layer
#define ________LOWER_L4________        LOWER_LP0,  LOWER_LP1,  LOWER_LP2,  LOWER_LT0,  LOWER_LT1
#define ________LOWER_R4________        LOWER_RT2,  LOWER_RT3,  LOWER_RP0,  LOWER_RP1,  LOWER_RP2

// Raise Layer
#define ________RAISE_L4________        RAISE_LP0,  RAISE_LP1,  RAISE_LP2,  RAISE_LT0,  RAISE_LT1 
#define ________RAISE_R4________        RAISE_RT2,  RAISE_RT3,  RAISE_RP0,  RAISE_RP1,  RAISE_RP2

// Adjust Layer
#define _______ADJUST_L_4_______        ADJUST_LP0, ADJUST_LP1, ADJUST_LP2, ADJUST_LT0, ADJUST_LT1
#define _______ADJUST_R_4_______        ADJUST_RT2, ADJUST_RT3, ADJUST_RP0, ADJUST_RP1, ADJUST_RP2

// Transparent Thumb Clusters
#define __TRN_T_L0__                                _______,    _______
#define __TRN_T_L1__                                            _______
#define __TRN_T_L2__                    _______,    _______,    _______

#define __TRN_T_R0__                    _______,    _______
#define __TRN_T_R1__                    _______
#define __TRN_T_R2__                    _______,    _______,    _______

/* Ergodox Keymaps */

#define __________ERGODOX_BASE__________ \
    ________BASE_L_0________,_______,_______,________BASE_R_0________,\
    ________BASE_L_1________,_______,_______,________BASE_R_1________,\
    ________BASE_L_2________,                ________BASE_R_2________,\
    ________BASE_L_3________,_______,_______,________BASE_R_3________,\
    ________BASE_L_4________,                ________BASE_R_4________,\
                        __THUMB_L0__,__THUMB_R0__,                    \
                        __THUMB_L1__,__THUMB_R1__,                    \
                        __THUMB_L2__,__THUMB_R2__

#define __________ERGODOX_LOWER_________ \
    ________LOWER_L0________,_______,_______,________LOWER_R0________,\
    ________LOWER_L1________,_______,_______,________LOWER_R1________,\
    ________LOWER_L2________,                ________LOWER_R2________,\
    ________LOWER_L3________,_______,_______,________LOWER_R3________,\
    ________LOWER_L4________,                ________LOWER_R4________,\
                        __TRN_T_L0__,__TRN_T_R0__,                    \
                        __TRN_T_L1__,__TRN_T_R1__,                    \
                        __TRN_T_L2__,__TRN_T_R2__

 #define __________ERGODOX_RAISE_________ \
    ________RAISE_L0________,_______,_______,________RAISE_R0________,\
    ________RAISE_L1________,_______,_______,________RAISE_R1________,\
    ________RAISE_L2________,                ________RAISE_R2________,\
    ________RAISE_L3________,_______,_______,________RAISE_R3________,\
    ________RAISE_L4________,                ________RAISE_R4________,\
                        __TRN_T_L0__,__TRN_T_R0__,                    \
                        __TRN_T_L1__,__TRN_T_R1__,                    \
                        __TRN_T_L2__,__TRN_T_R2__

#define __________ERGODOX_ADJUST________ \
    _______ADJUST_L_0_______,_______,_______,_______ADJUST_R_0_______,\
    _______ADJUST_L_1_______,_______,_______,_______ADJUST_R_1_______,\
    _______ADJUST_L_2_______,                _______ADJUST_R_2_______,\
    _______ADJUST_L_3_______,_______,_______,_______ADJUST_R_3_______,\
    _______ADJUST_L_4_______,                _______ADJUST_R_4_______,\
                        __TRN_T_L0__,__TRN_T_R0__,                    \
                        __TRN_T_L1__,__TRN_T_R1__,                    \
                        __TRN_T_L2__,__TRN_T_R2__


    
