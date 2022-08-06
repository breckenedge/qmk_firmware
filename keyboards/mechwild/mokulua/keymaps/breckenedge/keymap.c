// Original copyright 2022 Kyle McCreery (@kylemccreery)
// Modifications 2022 Aaron Breckenridge (@breckenedge)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layer_numbers {
  _COLEMAK = 0,
  _RAISE,
  _LOWER
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_COLEMAK] = LAYOUT(
              KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,                         KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,
              KC_TAB,   KC_Q,     KC_W,     KC_F,     KC_P,     KC_B,     KC_J,                                   KC_J,     KC_L,     KC_U,     KC_Y,     KC_SCLN,  KC_BSLS,
         CTL_T(KC_ESC), KC_A,     KC_R,     KC_S,     KC_T,     KC_G,     KC_LBRC,                      KC_RBRC,  KC_M,     KC_N,     KC_E,     KC_I,     KC_O,     KC_QUOT,
    KC_LSPO,  _______,  KC_Z,     KC_X,     KC_C,     KC_D,     KC_V,     KC_MUTE,                      KC_MUTE,  KC_V,     KC_K,     KC_H,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSPC,
              RGB_RMOD, _______,  KC_LCTL,  KC_LALT,  KC_LGUI,  KC_SPC,   MO(_RAISE),                 MO(_LOWER), KC_ENT,   KC_BSPC,  KC_DEL,   KC_RCTL,  _______,  _______
  ),

  [_RAISE] = LAYOUT(
              _______,  _______,  _______,  _______,  _______,  _______,  _______,                      _______,  _______,  _______,  _______,  _______,  _______,  _______,
              _______,  _______,  _______,  _______,  _______,  _______,  _______,                                _______,  _______,  _______,  _______,  _______,  _______,
              _______,  _______,  _______,  _______,  _______,  _______,  _______,                      _______,  _______,  _______,  _______,  _______,  _______,  _______,
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,                      _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
              _______,  _______,  _______,  _______,  _______,  _______,  _______,                      _______,  _______,  _______,  _______,  _______,  _______,  _______
  ),

  [_LOWER] = LAYOUT(
              _______,  _______,  _______,  _______,  _______,  _______,  _______,                      _______,  _______,  _______,  _______,  _______,  _______,  _______,
              _______,  KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,                                   KC_7,     KC_8,     KC_9,     KC_0,     _______,  _______,
              _______,  _______,  _______,  _______,  _______,  _______,  _______,                      _______,  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT,  _______,  _______,
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,                      _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
              _______,  _______,  _______,  _______,  _______,  _______,  _______,                      _______,  _______,  _______,  _______,  _______,  _______,  _______
  ),
};
