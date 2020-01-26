#include QMK_KEYBOARD_H
#include "rlovelessiii.h"


#ifdef RGBLIGHT_ENABLE
//Following line allows macro to read current RGB settings
extern rgblight_config_t rgblight_config;
#endif

extern uint8_t is_master;

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2
#define _ADJUST 3

#define LAYOUT_crkbd_base( \
        K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, \
        K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, \
        K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, \
                       K31, K32, K33, K34, K35, K36                 \
    ) \
    LAYOUT_wrapper( \
        K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, \
        K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, \
        K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, \
                       K31, K32, K33, K34, K35, K36                 \
    )

#define LAYOUT_crkbd_base_wrapper(...)   LAYOUT_crkbd_base(__VA_ARGS__)

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  LOWER,
  RAISE,
  ADJUST,
  BACKLIT,
  RGBRST
};

enum macro_keycodes {
  KC_SAMPLEMACRO,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT_crkbd_base_wrapper( \
          _____QWERTY_LEFT_1______, _____QWERTY_RIGHT_1_____,\
          _____QWERTY_LEFT_2______, _____QWERTY_RIGHT_2_____,\
          _____QWERTY_LEFT_3______, _____QWERTY_RIGHT_3_____,\
          __QWERTY_LEFT_4_THUMB___, __QWERTY_RIGHT_4_THUMB__ \
    ),

  [_LOWER] = LAYOUT_wrapper( \
          ______LOWER_LEFT_1______, _____LOWER_RIGHT_1______,\
          ______LOWER_LEFT_2______, _____LOWER_RIGHT_2______,\
          ______LOWER_LEFT_3______, _____LOWER_RIGHT_3______,\
          ___LOWER_LEFT_4_THUMB___, __LOWER_RIGHT_4_THUMB___ \
    ),

  [_RAISE] = LAYOUT_wrapper( \
          ______RAISE_LEFT_1______, _____RAISE_RIGHT_1______,\
          ______RAISE_LEFT_2______, _____RAISE_RIGHT_2______,\
          ______RAISE_LEFT_3______, _____RAISE_RIGHT_3______,\
          ___RAISE_LEFT_4_THUMB___, __RAISE_RIGHT_4_THUMB___ \
    ),

  [_ADJUST] = LAYOUT_wrapper( \
          _____ADJUST_LEFT_1______, _____ADJUST_RIGHT_1_____,\
          _____ADJUST_LEFT_2______, _____ADJUST_RIGHT_2_____,\
          _____ADJUST_LEFT_3______, _____ADJUST_RIGHT_3_____,\
          __ADJUST_LEFT_4_THUMB___, __ADJUST_RIGHT_4_THUMB__ \
    )
};

int RGB_current_mode;

void persistent_default_layer_set(uint16_t default_layer) {
  eeconfig_update_default_layer(default_layer);
  default_layer_set(default_layer);
}

// Setting ADJUST layer RGB back to default
void update_tri_layer_RGB(uint8_t layer1, uint8_t layer2, uint8_t layer3) {
  if (IS_LAYER_ON(layer1) && IS_LAYER_ON(layer2)) {
    layer_on(layer3);
  } else {
    layer_off(layer3);
  }
}

void matrix_init_user(void) {
    #ifdef RGBLIGHT_ENABLE
      RGB_current_mode = rgblight_config.mode;
    #endif
    //SSD1306 OLED init, make sure to add #define SSD1306OLED in config.h
    #ifdef SSD1306OLED
        iota_gfx_init(!has_usb());   // turns on the display
    #endif
}

//SSD1306 OLED update loop, make sure to add #define SSD1306OLED in config.h
#ifdef SSD1306OLED

// When add source files to SRC in rules.mk, you can use functions.
const char *read_layer_state(void);
const char *read_logo(void);
void set_keylog(uint16_t keycode, keyrecord_t *record);
const char *read_keylog(void);
// const char *read_keylogs(void);

// const char *read_mode_icon(bool swap);
const char *read_host_led_state(void);
// void set_timelog(void);
// const char *read_timelog(void);

void matrix_scan_user(void) {
   iota_gfx_task();
}

void matrix_render_user(struct CharacterMatrix *matrix) {
  if (is_master) {
    // If you want to change the display of OLED, you need to change here
    matrix_write_ln(matrix, read_layer_state());
    matrix_write_ln(matrix, read_keylog());
    //matrix_write_ln(matrix, read_keylogs());
    matrix_write_ln(matrix, read_host_led_state());
    //matrix_write_ln(matrix, read_mode_icon(keymap_config.swap_lalt_lgui));
    //matrix_write_ln(matrix, read_timelog());
  } else {
    matrix_write(matrix, read_logo());
  }
}

void matrix_update(struct CharacterMatrix *dest, const struct CharacterMatrix *source) {
  if (memcmp(dest->display, source->display, sizeof(dest->display))) {
    memcpy(dest->display, source->display, sizeof(dest->display));
    dest->dirty = true;
  }
}

void iota_gfx_task_user(void) {
  struct CharacterMatrix matrix;
  matrix_clear(&matrix);
  matrix_render_user(&matrix);
  matrix_update(&display, &matrix);
}
#endif//SSD1306OLED

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
#ifdef SSD1306OLED
    set_keylog(keycode, record);
#endif
    // set_timelog();
  }

  switch (keycode) {
    case QWERTY:
      if (record->event.pressed) {
        persistent_default_layer_set(1UL<<_QWERTY);
      }
      return false;
    case LOWER:
      if (record->event.pressed) {
        layer_on(_LOWER);
        update_tri_layer_RGB(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_LOWER);
        update_tri_layer_RGB(_LOWER, _RAISE, _ADJUST);
      }
      return false;
    case RAISE:
      if (record->event.pressed) {
        layer_on(_RAISE);
        update_tri_layer_RGB(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_RAISE);
        update_tri_layer_RGB(_LOWER, _RAISE, _ADJUST);
      }
      return false;
    case ADJUST:
        if (record->event.pressed) {
          layer_on(_ADJUST);
        } else {
          layer_off(_ADJUST);
        }
        return false;
    case RGB_MOD:
      #ifdef RGBLIGHT_ENABLE
        if (record->event.pressed) {
          rgblight_mode(RGB_current_mode);
          rgblight_step();
          RGB_current_mode = rgblight_config.mode;
        }
      #endif
      return false;
    case RGBRST:
      #ifdef RGBLIGHT_ENABLE
        if (record->event.pressed) {
          eeconfig_update_rgblight_default();
          rgblight_enable();
          RGB_current_mode = rgblight_config.mode;
        }
      #endif
      break;
  }
  return true;
}
