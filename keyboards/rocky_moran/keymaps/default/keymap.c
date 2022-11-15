#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┐
     * │ A │ B │ C │
     * ├───┼───┼───┤
     * │ D │ E │ F │
     * └───┴───┴───┘
     */
    [0] = LAYOUT(
        KC_A,    KC_B,    KC_C,    KC_D
    ),
    [1] = LAYOUT(
        _______,    _______,    _______,    _______
    ),
    [2] = LAYOUT(
        _______,    _______,    _______,    _______
    ),
    [3] = LAYOUT(
        _______,    _______,    _______,    _______
    ),
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] =   { ENCODER_CCW_CW(KC_1, KC_2), ENCODER_CCW_CW(KC_3, KC_4), ENCODER_CCW_CW(KC_5, KC_6), ENCODER_CCW_CW(KC_7, KC_8) },
    [1] =  { ENCODER_CCW_CW(_______, _______), ENCODER_CCW_CW(_______, _______), ENCODER_CCW_CW(_______, _______), ENCODER_CCW_CW(_______, _______) },
    [2] =  { ENCODER_CCW_CW(_______, _______), ENCODER_CCW_CW(_______, _______), ENCODER_CCW_CW(_______, _______), ENCODER_CCW_CW(_______, _______) },
    [3] = { ENCODER_CCW_CW(_______, _______), ENCODER_CCW_CW(_______, _______), ENCODER_CCW_CW(_______, _______), ENCODER_CCW_CW(_______, _______) },
};
#endif

