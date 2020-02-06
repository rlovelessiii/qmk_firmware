#include QMK_KEYBOARD_H
#include "rlovelessiii.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ergodox_pretty_wrapper(__________ERGODOX_BASE__________),
  [1] = LAYOUT_ergodox_pretty_wrapper(__________ERGODOX_LOWER_________),
  [2] = LAYOUT_ergodox_pretty_wrapper(__________ERGODOX_RAISE_________),
  [3] = LAYOUT_ergodox_pretty_wrapper(__________ERGODOX_ADJUST________)
};

extern bool g_suspend_state;
extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [0] = { 
        {0,0,85}, {0,0,85}, {0,0,85}, {0,0,85}, {0,0,85}, \
        {0,0,119}, {0,0,119}, {0,0,119}, {0,0,119}, {0,0,119}, \
        {0,0,153}, {0,0,153}, {0,0,153}, {0,0,153}, {0,0,153}, \
        {0,0,204}, {0,0,204}, {0,0,204}, {0,0,204}, {0,0,204}, \
        {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, \
        {0,0,85}, {0,0,85}, {0,0,85}, {0,0,85}, {0,0,85}, \
        {0,0,119}, {0,0,119}, {0,0,119}, {0,0,119}, {0,0,119}, \
        {0,0,153}, {0,0,153}, {0,0,153}, {0,0,153}, {0,0,153}, \
        {0,0,204}, {0,0,204}, {0,0,204}, {0,0,204}, {0,0,204}, \
        {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}
    },

};

void set_layer_color(int layer) {
  for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

void rgb_matrix_indicators_user(void) {
  if (g_suspend_state || keyboard_config.disable_layer_led) { return; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
}

bool process_record_keymap(uint16_t keycode, keyrecord_t *record) {
  return true;
}

uint32_t layer_state_set_user(uint32_t state) {

  uint8_t layer = biton32(state);

  ergodox_board_led_off();
  ergodox_right_led_1_off();
  ergodox_right_led_2_off();
  ergodox_right_led_3_off();
  switch (layer) {
    case 1:
      ergodox_right_led_1_on();
      break;
    case 2:
      ergodox_right_led_2_on();
      break;
    case 3:
      ergodox_right_led_3_on();
      break;
    case 4:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      break;
    case 5:
      ergodox_right_led_1_on();
      ergodox_right_led_3_on();
      break;
    case 6:
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    case 7:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    default:
      break;
  }
  return state;
};
