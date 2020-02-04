#pragma once
#include "rlovelessiii.h"

/*
Since our quirky block definitions are basically a list of comma separated
arguments, we need a wrapper in order for these definitions to be
expanded before being used as arguments to the LAYOUT_xxx macro.
*/
#if (!defined(LAYOUT) && defined(KEYMAP))
#    define LAYOUT KEYMAP
#endif

#define KEYMAP_wrapper(...)                 LAYOUT(__VA_ARGS__)
#define LAYOUT_wrapper(...)                 LAYOUT(__VA_ARGS__)
#define LAYOUT_preonic_grid_wrapper(...)    LAYOUT_preonic_grid(__VA_ARGS__)
#define LAYOUT_ortho_5x15_wrapper(...)      LAYOUT_ortho_5x15(__VA_ARGS__)
#define LAYOUT_ergodox_pretty_wrapper(...)  LAYOUT_ergodox_pretty(__VA_ARGS__)

/* ________BASE_LAYER________ */

// Left Pinky Cluster
#define BASE_LP0                        XXXXXXX                                                                 /* Left Base Pinky Key 0 */
#define BASE_LP1                        KC_LEFT                                                                 /* Left Base Pinky Key 1 */
#define BASE_LP2                        KC_DOWN                                                                 /* Left Base Pinky Key 2 */

// Left Thumb Cluster
#define BASE_LT0                        KC_LCMD                                                                 /* Left Base Thumb Mod   */
#define BASE_LT1                        LOWER                                                                   /* Left Base Thumb Layer */
#define BASE_LT2                        KC_BSPC                                                                 /* Left Base Thumb Main  */
#define BASE_LT3                        KC_DEL                                                                  /* Left Base Thumb Outer */

// Left-Hand
#define ________BASE_L_0________        KC_GESC,    KC_1,       KC_2,       KC_3,       KC_4,       KC_5        /* Left Base Row 0 */
#define ________BASE_L_1________        KC_TAB,     KC_Q,       KC_W,       KC_E,       KC_R,       KC_T        /* Left Base Row 1 */
#define ________BASE_L_2________        KC_GESC,    KC_A,       KC_S,       KC_D,       KC_F,       KC_G        /* Left Base Row 2 */
#define ________BASE_L_3________        KC_LSFT,    KC_Z,       KC_X,       KC_C,       KC_V,       KC_B        /* Left Base Row 3 */
#define ________BASE_L_4________        BASE_LP0,   BASE_LP1,   BASE_LP2,   BASE_LT0,   BASE_LT1,   BASE_LT2    /* Left Base Row 4 */

// Right Thumb Cluster
#define BASE_RT0                        KC_ENT                                                                  /* Right Base Thumb Outer */
#define BASE_RT1                        KC_SPC                                                                  /* Right Base Thumb Main  */
#define BASE_RT2                        RAISE                                                                   /* Right Base Thumb Layer */
#define BASE_RT3                        KC_LCTL                                                                 /* Right Base Thumb Mod   */

// Right Pinky Cluster
#define BASE_RP0                        KC_UP                                                                   /* Right Base Pinky Key 0 */
#define BASE_RP1                        KC_RIGHT                                                                /* Right Base Pinky Key 1 */
#define BASE_RP2                        XXXXXXX                                                                 /* Right Base Pinky Key 2 */

// Right-Hand
#define ________BASE_R_0________        KC_6,       KC_7,       KC_8,       KC_9,       KC_0,       KC_BSPC     /* Right Base Row 0 */
#define ________BASE_R_1________        KC_Y,       KC_U,       KC_I,       KC_O,       KC_P,       KC_DEL      /* Right Base Row 1 */
#define ________BASE_R_2________        KC_H,       KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_QUOT     /* Right Base Row 2 */
#define ________BASE_R_3________        KC_N,       KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,    KC_SFTENT   /* Right Base Row 3 */
#define ________BASE_R_4________        BASE_RT1,   BASE_RT2,   BASE_RT3,   BASE_RP0,   BASE_RP1,   BASE_RP2    /* Right Base Row 4 */

/* ________LOWER_LAYER________ */

// Left Pinky Cluster
#define LOWER_LP0                       _______                                                                 /* Left Lower Pinky Key 0 */
#define LOWER_LP1                       _______                                                                 /* Left Lower Pinky Key 1 */
#define LOWER_LP2                       _______                                                                 /* Left Lower Pinky Key 2 */

// Left Thumb Cluster
#define LOWER_LT0                       _______                                                                 /* Left Lower Thumb Key 0 */
#define LOWER_LT1                       _______                                                                 /* Left Lower Thumb Key 1 */
#define LOWER_LT2                       _______                                                                 /* Left Lower Thumb Key 2 */
#define LOWER_LT3                       _______                                                                 /* Left Lower Thumb Key 3 */

// Left-Hand
#define ________LOWER_L0________        _______,    _______,    _______,    _______,    _______,    _______     /* Left Lower Row 0 */
#define ________LOWER_L1________        KC_GRV,     KC_1,       KC_2,       KC_3,       KC_4,       KC_5        /* Left Lower Row 1 */
#define ________LOWER_L2________        _______,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX     /* Left Lower Row 2 */
#define ________LOWER_L3________        _______,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX     /* Left Lower Row 3 */
#define ________LOWER_L4________        LOWER_LP0,  LOWER_LP1,  LOWER_LP2,  LOWER_LT0,  LOWER_LT1,  LOWER_LT2   /* Left Lower Row 4 */

// Right Thumb Cluster
#define LOWER_RT0                       _______                                                                 /* Right Lower Thumb Key 0 */
#define LOWER_RT1                       _______                                                                 /* Right Lower Thumb Key 1 */
#define LOWER_RT2                       _______                                                                 /* Right Lower Thumb Key 2 */
#define LOWER_RT3                       _______                                                                 /* Right Lower Thumb Key 3 */

// Right Pinky Cluster
#define LOWER_RP0                       _______                                                                 /* Right Lower Pinky Key 0 */
#define LOWER_RP1                       _______                                                                 /* Right Lower Pinky Key 1 */
#define LOWER_RP2                       _______                                                                 /* Right Lower Pinky Key 2 */

// Right-Hand
#define ________LOWER_R0________        _______,    _______,    _______,    _______,    _______,    _______     /* Right Lower Row 0 */
#define ________LOWER_R1________        KC_6,       KC_7,       KC_8,       KC_9,       KC_0,       KC_BSLS     /* Right Lower Row 1 */
#define ________LOWER_R2________        XXXXXXX,    KC_MINS,    KC_EQL,     KC_LBRC,    KC_RBRC,    _______     /* Right Lower Row 2 */
#define ________LOWER_R3________        XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    KC_SFTENT   /* Right Lower Row 3 */
#define ________LOWER_R4________        LOWER_RT1,  LOWER_RT2,  LOWER_RT3,  LOWER_RP0,  LOWER_RP1,  LOWER_RP2   /* Right Lower Row 4 */

/* ________RAISE_LAYER________ */

// Left Pinky Cluster
#define RAISE_LP0                       _______                                                                 /* Left Raise Pinky Key 0 */
#define RAISE_LP1                       _______                                                                 /* Left Raise Pinky Key 1 */
#define RAISE_LP2                       _______                                                                 /* Left Raise Pinky Key 2 */

// Left Thumb Cluster
#define RAISE_LT0                       _______                                                                 /* Left Raise Thumb Key 0 */
#define RAISE_LT1                       _______                                                                 /* Left Raise Thumb Key 1 */
#define RAISE_LT2                       _______                                                                 /* Left Raise Thumb Key 2 */
#define RAISE_LT3                       _______                                                                 /* Left Raise Thumb Key 3 */

// Left-Hand
#define ________RAISE_L0________        _______,    _______,    _______,    _______,    _______,    _______     /* Left Raise Row 0 */
#define ________RAISE_L1________        _______,    KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5       /* Left Raise Row 1 */
#define ________RAISE_L2________        _______,    KC_F6,      KC_F7,      KC_F8,      KC_F9,      KC_F10      /* Left Raise Row 2 */
#define ________RAISE_L3________        _______,    KC_F11,     KC_F12,     KC_F13,     KC_F14,     KC_F15      /* Left Raise Row 3 */
#define ________RAISE_L4________        RAISE_LP0,  RAISE_LP1,  RAISE_LP2,  RAISE_LT0,  RAISE_LT1,  RAISE_LT2   /* Left Raise Row 4 */

// Right Thumb Cluster
#define RAISE_RT0                       _______                                                                 /* Right Raise Thumb Key 0 */
#define RAISE_RT1                       _______                                                                 /* Right Raise Thumb Key 1 */
#define RAISE_RT2                       _______                                                                 /* Right Raise Thumb Key 2 */
#define RAISE_RT3                       _______                                                                 /* Right Raise Thumb Key 3 */

// Right Pinky Cluster
#define RAISE_RP0                       _______                                                                 /* Right Raise Pinky Key 0 */
#define RAISE_RP1                       _______                                                                 /* Right Raise Pinky Key 1 */
#define RAISE_RP2                       _______                                                                 /* Right Raise Pinky Key 2 */

// Right-Hand
#define ________RAISE_R0________        _______,    _______,    _______,    _______,    _______,    _______     /* Right Raise Row 0 */
#define ________RAISE_R1________        XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    _______     /* Right Raise Row 1 */
#define ________RAISE_R2________        KC_LEFT,    KC_DOWN,    KC_UP,      KC_RIGHT,   XXXXXXX,    _______     /* Right Raise Row 2 */
#define ________RAISE_R3________        XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    KC_SFTENT   /* Right Raise Row 3 */
#define ________RAISE_R4________        RAISE_RT1,  RAISE_RT2,  RAISE_RT3,  RAISE_RP0,  RAISE_RP1,  RAISE_RP2   /* Right Raise Row 4 */

/* ________ADJUST_LAYER________ */

// Left Pinky Cluster
#define ADJUST_LP0                      _______                                                                 /* Left Adjust Pinky Key 0 */
#define ADJUST_LP1                      _______                                                                 /* Left Adjust Pinky Key 1 */
#define ADJUST_LP2                      _______                                                                 /* Left Adjust Pinky Key 2 */

// Left Thumb Cluster
#define ADJUST_LT0                      _______                                                                 /* Left Adjust Thumb Key 0 */
#define ADJUST_LT1                      _______                                                                 /* Left Adjust Thumb Key 1 */
#define ADJUST_LT2                      _______                                                                 /* Left Adjust Thumb Key 2 */
#define ADJUST_LT3                      _______                                                                 /* Left Adjust Thumb Key 3 */

// Left-Hand
#define _______ADJUST_L_0_______        RESET,      XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX     /* Left Adjust Row 0 */
#define _______ADJUST_L_1_______        RESET,      XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX     /* Left Adjust Row 1 */
#define _______ADJUST_L_2_______        RGB_TOG,    RGB_HUI,    RGB_SAI,    RGB_VAI,    XXXXXXX,    XXXXXXX     /* Left Adjust Row 2 */
#define _______ADJUST_L_3_______        RGB_MOD,    RGB_HUD,    RGB_SAD,    RGB_VAD,    XXXXXXX,    XXXXXXX     /* Left Adjust Row 3 */
#define _______ADJUST_L_4_______        ADJUST_LP0, ADJUST_LP1, ADJUST_LP2, ADJUST_LT0, ADJUST_LT1, ADJUST_LT2  /* Left Adjust Row 4 */

// Right Thumb Cluster
#define ADJUST_RT0                      _______                                                                 /* Right Adjust Thumb Key 0 */
#define ADJUST_RT1                      _______                                                                 /* Right Adjust Thumb Key 1 */
#define ADJUST_RT2                      _______                                                                 /* Right Adjust Thumb Key 2 */
#define ADJUST_RT3                      KC_0                                                                    /* Right Adjust Thumb Key 3 */

// Right Pinky Cluster
#define ADJUST_RP0                      _______                                                                 /* Right Adjust Pinky Key 0 */
#define ADJUST_RP1                      _______                                                                 /* Right Adjust Pinky Key 1 */
#define ADJUST_RP2                      _______                                                                 /* Right Adjust Pinky Key 2 */

// Right-Hand
#define _______ADJUST_R_0_______        _______,    _______,    _______,    _______,    _______,    _______     /* Right Adjust Row 0 */
#define _______ADJUST_R_1_______        KC_SLCK,    KC_7,       KC_8,       KC_9,       KC_PSCR,    XXXXXXX     /* Right Adjust Row 1 */
#define _______ADJUST_R_2_______        KC_CAPS,    KC_4,       KC_5,       KC_6,       XXXXXXX,    XXXXXXX     /* Right Adjust Row 2 */
#define _______ADJUST_R_3_______        KC_NLCK,    KC_1,       KC_2,       KC_3,       XXXXXXX,    XXXXXXX     /* Right Adjust Row 3 */
#define _______ADJUST_R_4_______        ADJUST_RT1, ADJUST_RT2, ADJUST_RT3, ADJUST_RP0, ADJUST_RP1, ADJUST_RP2  /* Right Adjust Row 4 */
