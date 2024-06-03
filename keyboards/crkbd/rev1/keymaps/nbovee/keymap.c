/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_PGDN,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,  KC_ESC,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LALT,   MO(1),  KC_SPC,     KC_ENT,   MO(2), KC_RGUI
                                      //`--------------------------'  `--------------------------'

  ),

    [1] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_TRNS,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_TRNS,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_TRNS, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_LEFT, KC_DOWN,   KC_UP,KC_RIGHT, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_TRNS, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_TRNS, _______, KC_TRNS,    KC_TRNS,   MO(3), KC_TRNS
                                      //`--------------------------'  `--------------------------'
  ),

    [2] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_TRNS, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,                      KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_TRNS,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_TRNS, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_MINS,  KC_EQL, KC_LBRC, KC_RBRC, KC_BSLS,  KC_GRV,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_TRNS, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE, KC_TILD,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_TRNS,   MO(3), KC_TRNS,    KC_TRNS, _______, KC_TRNS
                                      //`--------------------------'  `--------------------------'
  ),

    [3] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_TRNS, _______, KC_TRNS,    KC_TRNS, _______, KC_TRNS
                                      //`--------------------------'  `--------------------------'
  )
};

// static void render_logo(void) {
    // 'pepsidog.png
    // This is on an Elite-Pi, ARM, and so cannot use the wrapping of oled_write_ln_P naturally.
    // IMAGE BASED
    // 'pepsidog', 32x32px
    //     static const char PROGMEM pepsidog[] = {
    // 0x80, 0xa0, 0x60, 0xc0, 0x20, 0xf0, 0xc8, 0x78, 0xb0, 0xf1, 0x71, 0xe1, 0xe3, 0xc7, 0x01, 0x07,
    // 0x06, 0x0b, 0x09, 0x0f, 0x03, 0xc8, 0x7b, 0xbb, 0xe7, 0xff, 0x39, 0xef, 0xff, 0x73, 0xdf, 0xff,
    // 0x1b, 0xc5, 0x74, 0x1b, 0x0b, 0x84, 0xc6, 0x33, 0xbd, 0xed, 0xff, 0xfd, 0xf7, 0xff, 0xc3, 0x86,
    // 0xec, 0xf8, 0xf8, 0x18, 0x20, 0x80, 0xb2, 0x23, 0x87, 0x05, 0x77, 0x07, 0x05, 0x27, 0xb7, 0x07,
    // 0x9b, 0xa1, 0x40, 0x44, 0xb2, 0x80, 0x00, 0xa1, 0x81, 0xc0, 0x40, 0xc0, 0xc1, 0x7f, 0xff, 0x8f,
    // 0x86, 0x6e, 0x3f, 0x1d, 0x12, 0x04, 0x44, 0x32, 0x38, 0x38, 0x38, 0x39, 0x38, 0x38, 0x39, 0x38,
    // 0x86, 0x85, 0x49, 0x1b, 0x06, 0x0c, 0x13, 0x39, 0x0c, 0x1e, 0x13, 0x1d, 0x0d, 0x0f, 0x47, 0x03,
    // 0x10, 0x40, 0x08, 0x08, 0x0c, 0x06, 0x0c, 0x48, 0x04, 0x01, 0x08, 0x22, 0x00, 0x11, 0x00, 0x00
    //     };
    // FONT BASED
    // static const char PROGMEM pepsidog[] = {
    //     0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    //     0xA0, 0xA1, 0xA2, 0xA3, 0xA4, 0xA5, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    //     0xC0, 0xC1, 0xC2, 0xC3, 0xC4, 0xC5, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    //     0xC6, 0xC7, 0xC8, 0xC9, 0xCA, 0xCB, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    //     };
    // static const char PROGMEM pepsidog1[] = {0x80, 0x81, 0x82, 0x83, 0x84, 0x85};
    // static const char PROGMEM pepsidog2[] = {0xA0, 0xA1, 0xA2, 0xA3, 0xA4, 0xA5};
    // static const char PROGMEM pepsidog3[] = {0xC0, 0xC1, 0xC2, 0xC3, 0xC4, 0xC5};
    // static const char PROGMEM pepsidog4[] = {0xC6, 0xC7, 0xC8, 0xC9, 0xCA, 0xCB};
static void render_logo(void) {
    static const char PROGMEM pepsidog1[] = {0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x00};
    static const char PROGMEM pepsidog2[] = {0xA0, 0xA1, 0xA2, 0xA3, 0xA4, 0xA5, 0x00};
    static const char PROGMEM pepsidog3[] = {0xC0, 0xC1, 0xC2, 0xC3, 0xC4, 0xC5, 0x00};
    static const char PROGMEM pepsidog4[] = {0xC6, 0xC7, 0xC8, 0xC9, 0xCA, 0xCB, 0x00};

    oled_write_ln_P(pepsidog1, false);
    oled_write_ln_P(pepsidog2, false);
    oled_write_ln_P(pepsidog3, false);
    oled_write_ln_P(pepsidog4, false);
}

bool oled_task_user(void) {
    if(!is_keyboard_master()) {

    }
    render_logo();
    return false;
}
