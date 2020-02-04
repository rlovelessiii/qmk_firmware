#include "rlovelessiii.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ortho_5x15_wrapper(__________XD75_BASE_____________),
  [1] = LAYOUT_ortho_5x15_wrapper(__________XD75_LOWER____________),
  [2] = LAYOUT_ortho_5x15_wrapper(__________XD75_RAISE____________),
  [3] = LAYOUT_ortho_5x15_wrapper(__________XD75_ADJUST___________)
};

bool process_record_keymap(uint16_t keycode, keyrecord_t *record) {
  return true;
}
