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
     XXXXXXX,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
     XXXXXXX,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, KC_BSPC, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
     XXXXXXX,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                    XXXXXXX,OSM(MOD_LSFT), MT(MOD_LGUI, KC_SPC),     MT(MOD_RCTL, KC_ENT), TO(1), XXXXXXX
                                      //`--------------------------'  `--------------------------'

  ),

    [1] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------
     XXXXXXX, KC_ESC,  KC_AT,   KC_NUHS, LALT(3), KC_PERC,                      KC_CIRC, KC_AMPR, KC_ASTR, KC_COLON,KC_BSPC, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
     XXXXXXX, KC_TAB,  XXXXXXX, KC_INT1, XXXXXXX,  KC_QUOT,                     KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT, KC_ENT, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
     XXXXXXX, KC_CAPS, XXXXXXX, XXXXXXX, XXXXXXX, KC_UNDS,                      KC_LBRC, KC_LPRN, KC_RPRN, KC_RCBR, TO(3),   XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          XXXXXXX, TO(0),  KC_LGUI,     KC_RCTL,   TO(2), XXXXXXX
                                      //`--------------------------'  `--------------------------'
  ),

    [2] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
     XXXXXXX, KC_ESC, KC_AT, LSFT(KC_3),  KC_DLR, KC_PERC,                      KC_MINS, KC_7,    KC_8,    KC_9,    KC_TRNS, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
     XXXXXXX, KC_TAB,  XXXXXXX, XXXXXXX, KC_VOLD, KC_VOLU,                      KC_EQL,  KC_4,    KC_5,    KC_6,    KC_ENTER,XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_BRID, KC_BRIU,                      KC_0,    KC_1,    KC_2,    KC_3,    TO(3),   XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          XXXXXXX,   TO(0), KC_LGUI,   KC_ENT,  TO(3),   XXXXXXX
                                      //`--------------------------'  `--------------------------'
  ),
    [3] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
     XXXXXXX, KC_ESC,  KC_WH_L, KC_MS_UP, KC_WH_R, KC_PERC,                     KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_BSPC, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
     XXXXXXX, KC_TAB,  KC_MS_L, KC_MS_D, KC_MS_R, MT(MOD_LGUI,KC_DEL),          KC_MINS,  KC_EQL, KC_LBRC, KC_RBRC, KC_BSLS,XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
     XXXXXXX, KC_BTN2, KC_WH_U, KC_WH_D, KC_TRNS, KC_BTN1,                      KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |----------------+--------+--------+--------+--------+--------|
                                          XXXXXXX,   TO(0),  KC_LGUI,  KC_RALT, TO(1),  XXXXXXX
                                      //`--------------------------'  `--------------------------'
  ),

};

void keyboard_post_init_user(void) {
    rgb_matrix_enable_noeeprom();
    rgb_matrix_mode(1); // solid color
    rgb_matrix_sethsv_noeeprom(HSV_CYAN);
}
