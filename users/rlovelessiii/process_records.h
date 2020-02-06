#pragma once

enum userspace_custom_keycodes {
    LOWER,
    RAISE,
    RGBRST
};

#define KC_MWSL LCTL(KC_LEFT)
#define KC_MWSR LCTL(KC_RIGHT)
#define KC_MWSA LCTL(KC_UP)
#define KC_MWSW LCTL(KC_DOWN)
