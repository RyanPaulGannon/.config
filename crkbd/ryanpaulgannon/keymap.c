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

enum layers {
    _BASE,
    _LAYER1,
    _LAYER2,
    _LAYER3
};

void keyboard_post_init_user(void) {
    rgb_matrix_enable_noeeprom();
    rgb_matrix_mode(1); // solid color
    rgb_matrix_sethsv_noeeprom(HSV_CYAN);
}

layer_state_t layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
        case _BASE:
            rgb_matrix_sethsv_noeeprom(HSV_CYAN);
            break;
        case _LAYER1:
            rgb_matrix_sethsv_noeeprom(HSV_RED);
            break;
        case _LAYER2:
            rgb_matrix_sethsv_noeeprom(HSV_GREEN);
            break;
        case _LAYER3:
            rgb_matrix_sethsv_noeeprom(HSV_PURPLE);
            break;
        default:
            break;
    }
    return state;
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
     XXXXXXX,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
     XXXXXXX, KC_A ,MT(MOD_LGUI, KC_S), MT(MOD_LSFT,KC_D), MT(MOD_LCTL,KC_F), KC_G,        KC_H, MT(MOD_RCTL,KC_J), MT(MOD_RSFT,KC_K),MT(MOD_RGUI,KC_L),KC_BSPC, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
     XXXXXXX,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                    XXXXXXX,        KC_ESC, LT(3, KC_SPC),     KC_ENT, TO(1), XXXXXXX
                                      //`--------------------------'  `--------------------------'

  ),

    [1] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------
     XXXXXXX, KC_ESC,  KC_AT,   LSFT(KC_3), LALT(KC_3), KC_PERC,                KC_CIRC, KC_AMPR, KC_ASTR, KC_COLON, KC_SCLN, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
     XXXXXXX, KC_TAB,  KC_TILD, LALT(KC_RBRC),LALT(LSFT(KC_RBRC)),KC_QUOT,      RSFT(KC_MINS),RSFT(KC_LBRC),RSFT(KC_RBRC),KC_BSLS,KC_BSPC, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
     XXXXXXX, KC_CAPS, KC_INT1, LALT(KC_LBRC),LALT(LSFT(KC_LBRC)),KC_DQUO,      KC_LBRC, KC_LPRN, KC_RPRN, KC_RBRC, TO(3),   XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          XXXXXXX, TO(0),  KC_LGUI,     MT(MOD_RCTL, KC_ENT),   TO(2), XXXXXXX
                                      //`--------------------------'  `--------------------------'
  ),

    [2] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
     XXXXXXX, KC_ESC, LSFT(KC_1), LSFT(KC_3),  LSFT(KC_4), KC_PERC,             KC_MINS, KC_7,    KC_8,    KC_9,    RSFT(KC_EQL), XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
     XXXXXXX, KC_TAB,  XXXXXXX, XXXXXXX, KC_VOLD, KC_VOLU,                      KC_EQL,  KC_4,    KC_5,    KC_6,    KC_BSPC, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_BRID, KC_BRIU,                      KC_0,    KC_1,    KC_2,    KC_3,    TO(3),   XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          XXXXXXX,   TO(0), KC_LGUI,   MT(MOD_RCTL, KC_ENT),  TO(3),   XXXXXXX
                                      //`--------------------------'  `--------------------------'
  ),
    [3] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
     XXXXXXX, KC_ESC,  KC_WH_L, KC_MS_UP, KC_WH_R, KC_UNDS,                     RGUI(KC_LBRC),RCTL(RSFT(KC_TAB)),RCTL(KC_TAB),RGUI(KC_RBRC), XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
     XXXXXXX, KC_TAB,  KC_MS_L, KC_MS_D, KC_MS_R, MT(MOD_LGUI,KC_DEL),          KC_LEFT,  KC_DOWN, KC_UP, KC_RIGHT, KC_BSPC,XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
     XXXXXXX, KC_BTN2, KC_WH_U, KC_WH_D, KC_TRNS, KC_BTN1,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |----------------+--------+--------+--------+--------+--------|
                                          XXXXXXX,   TO(0),  KC_LGUI,  MT(MOD_RCTL, KC_ENT), TO(1),  XXXXXXX
                                      //`--------------------------'  `--------------------------'
  ),

};
