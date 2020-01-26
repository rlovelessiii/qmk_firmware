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

#define KEYMAP_wrapper(...)                  LAYOUT(__VA_ARGS__)
#define LAYOUT_wrapper(...)                  LAYOUT(__VA_ARGS__)

#define _____QWERTY_LEFT_0______        KC_GESC, KC_1, KC_2, KC_3, KC_4, KC_5
#define _____QWERTY_LEFT_1______        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T
#define _____QWERTY_LEFT_2______        KC_GESC, KC_A, KC_S, KC_D, KC_F, KC_G
#define _____QWERTY_LEFT_3______        KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B
#define __QWERTY_LEFT_4_OUTER___        KC_LEFT, KC_DOWN, XXXXXXX
#define __QWERTY_LEFT_4_THUMB___        KC_LCMD, LOWER, KC_BSPC

#define _____QWERTY_RIGHT_0_____        KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC
#define _____QWERTY_RIGHT_1_____        KC_Y, KC_U, KC_I, KC_O, KC_P, KC_DEL
#define _____QWERTY_RIGHT_2_____        KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT
#define _____QWERTY_RIGHT_3_____        KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_SFTENT
#define __QWERTY_RIGHT_4_THUMB__        KC_SPC, RAISE, KC_LCTL
#define __QWERTY_RIGHT_5_OUTER__        XXXXXXX, KC_UP, KC_RIGHT

#define ______LOWER_LEFT_0______        _______, _______, _______, _______, _______, _______
#define ______LOWER_LEFT_1______        KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5
#define ______LOWER_LEFT_2______        _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
#define ______LOWER_LEFT_3______        _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
#define ___LOWER_LEFT_4_OUTER___        _______, _______, _______
#define ___LOWER_LEFT_4_THUMB___        _______, _______, _______

#define _____LOWER_RIGHT_0______        _______, _______, _______, _______, _______, _______
#define _____LOWER_RIGHT_1______        KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSLS
#define _____LOWER_RIGHT_2______        XXXXXXX, KC_MINS, KC_EQL, KC_LBRC, KC_RBRC, _______
#define _____LOWER_RIGHT_3______        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX 
#define __LOWER_RIGHT_4_THUMB___        _______, _______, _______
#define __LOWER_RIGHT_4_OUTER___        _______, _______, _______

#define ______RAISE_LEFT_0______        _______, _______, _______, _______, _______, _______
#define ______RAISE_LEFT_1______        _______, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5
#define ______RAISE_LEFT_2______        _______, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10
#define ______RAISE_LEFT_3______        _______, KC_F11, KC_F12, KC_F13, KC_F14, KC_F15
#define ___RAISE_LEFT_4_OUTER___        _______, _______, _______
#define ___RAISE_LEFT_4_THUMB___        _______, _______, _______

#define _____RAISE_RIGHT_0______        _______, _______, _______, _______, _______, _______
#define _____RAISE_RIGHT_1______        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______
#define _____RAISE_RIGHT_2______        KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, XXXXXXX, _______
#define _____RAISE_RIGHT_3______        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______
#define __RAISE_RIGHT_4_THUMB___        _______, _______, _______
#define __RAISE_RIGHT_4_OUTER___        _______, _______, _______

#define _____ADJUST_LEFT_0______        RESET, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
#define _____ADJUST_LEFT_1______        RESET, RGBRST, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
#define _____ADJUST_LEFT_2______        RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, XXXXXXX, XXXXXXX
#define _____ADJUST_LEFT_3______        RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, XXXXXXX, XXXXXXX
#define __ADJUST_LEFT_4_OUTER___        _______, _______, _______
#define __ADJUST_LEFT_4_THUMB___        _______, _______, _______

#define _____ADJUST_RIGHT_0_____        _______, _______, _______, _______, _______, _______
#define _____ADJUST_RIGHT_1_____        KC_SLCK, KC_7, KC_8, KC_9, KC_PSCR, XXXXXXX
#define _____ADJUST_RIGHT_2_____        KC_CAPS, KC_4, KC_5, KC_6, XXXXXXX, XXXXXXX
#define _____ADJUST_RIGHT_3_____        KC_NLCK, KC_1, KC_2, KC_3, XXXXXXX, XXXXXXX
#define __ADJUST_RIGHT_4_THUMB__        _______, _______, KC_0
#define __ADJUST_RIGHT_4_OUTER__        _______, _______, _______
