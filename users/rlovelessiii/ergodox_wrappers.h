#pragma once
#include "rlovelessiii.h"

#undef ________BASE_L_4________
#undef ________BASE_R_4________

#define ________BASE_L_4________        BASE_LP0,   BASE_LP1,   BASE_LP2, BASE_LT0, BASE_LT1
#define ________BASE_R_4________        BASE_RT2, BASE_RT3, BASE_RP0, BASE_RP1, BASE_RP2

#define __THUMB_R0__                    KC_HOME, LCTL(KC_RIGHT), _______,    _______ 
#define __THUMB_R1__
#define __THUMB_R2__

#define __________ERGODOX_BASE__________ \
    ________BASE_L_0________,_______,_______,________BASE_R_0________,\
    ________BASE_L_1________,_______,_______,________BASE_R_1________,\
    ________BASE_L_2________,                ________BASE_R_2________,\
    ________BASE_L_3________,_______,_______,________BASE_R_3________,\
    ________BASE_L_4________,                ________BASE_R_4________,\
            KC_HOME,  LCTL(KC_RIGHT),_______,_______,                 \
                             LCTL(KC_LEFT),_______,                         \
             BASE_LT2,BASE_LT3,LCTL(KC_UP),_______,BASE_RT0,BASE_RT1
    
