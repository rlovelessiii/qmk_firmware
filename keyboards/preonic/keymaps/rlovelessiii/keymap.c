#include "rlovelessiii.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_preonic_grid_wrapper(__________PREONIC_BASE__________),
    [1] = LAYOUT_preonic_grid_wrapper(__________PREONIC_LOWER_________),
    [2] = LAYOUT_preonic_grid_wrapper(__________PREONIC_RAISE_________),
    [3] = LAYOUT_preonic_grid_wrapper(__________PREONIC_ADJUST________)
};

bool process_record_keymap(uint16_t keycode, keyrecord_t *record) {
    return true;
}
