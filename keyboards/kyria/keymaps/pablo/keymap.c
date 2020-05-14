/* Copyright 2019 Thomas Baart <thomas@splitkb.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H
#include "quantum.h"
#include "keymap_german.h"


enum layers {
    _QWERTY = 0,
    _LOWER,
    _RAISE,
    _MVMNT,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    //
    [_QWERTY] = LAYOUT(
    //
    //┌────────┬────────┬────────┬────────┬────────┬────────┐                                      ┌────────┬────────┬────────┬────────┬────────┬────────┐
       KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                                           KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    DE_UDIA,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                                      ├────────┼────────┼────────┼────────┼────────┼────────┤
       KC_LSFT, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                                           KC_H,    KC_J,    KC_K,    KC_L,    DE_ODIA, DE_ADIA,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┬────────┐  ┌────────┬────────┼────────┼────────┼────────┼────────┼────────┼────────┤
       KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_GRV,  KC_NO,      KC_NO, KC_NO,   KC_N,    KC_M,    DE_COMM, DE_DOT,  DE_MINS, MT(MOD_RSFT, DE_SS),
    //└────────┴────────┴────────┼────────┼────────┼────────┼────────┼────────┤  ├────────┴────────┴────────┼────────┼────────┼────────┴────────┴────────┘
                                  KC_NO,   KC_LALT, LT(_LOWER,KC_TAB), MT(MOD_LGUI, KC_ESC), KC_NO, KC_NO, LT(_MVMNT, KC_SPC), LT(_RAISE, KC_BSPC), KC_ENTER, KC_NO
    //                           └────────┴────────┴────────┴────────┴────────┘  └────────┴────────┴────────┴────────┴────────┘
    ),                                  

    // ---------------------------------------------------------------------------------------------------------------------------------------------------
    
    [_LOWER] = LAYOUT(
    //
    //┌────────┬────────┬────────┬────────┬────────┬────────┐                                      ┌────────┬────────┬────────┬────────┬────────┬────────┐
       _______, S(KC_1), S(KC_2), S(KC_3), S(KC_4), S(KC_5),                                        S(KC_6), S(KC_7), S(KC_8), S(KC_9), S(KC_0), DE_PLUS,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                                      ├────────┼────────┼────────┼────────┼────────┼────────┤
       _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                                           KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    DE_HASH,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┬────────┐  ┌────────┬────────┼────────┼────────┼────────┼────────┼────────┼────────┤
       KC_F12,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   _______, _______,    _______, _______, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
    //└────────┴────────┴────────┼────────┼────────┼────────┼────────┼────────┤  ├────────┴────────┴────────┼────────┼────────┼────────┴────────┴────────┘
                                  _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______
    //                           └────────┴────────┴────────┴────────┴────────┘  └────────┴────────┴────────┴────────┴────────┘
    ),                                  

    // ---------------------------------------------------------------------------------------------------------------------------------------------------

    [_RAISE] = LAYOUT(
    //
    //┌────────┬────────┬────────┬────────┬────────┬────────┐                                      ┌────────┬────────┬────────┬────────┬────────┬────────┐
       DE_DEG,  DE_AT,   _______, DE_EURO, _______, _______,                                        KC_GRAVE,DE_SLSH, S(KC_8), S(KC_9), DE_BSLS, DE_TILD,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                                      ├────────┼────────┼────────┼────────┼────────┼────────┤
       _______, _______, DE_SUP2, DE_SUP3, _______, _______,                                        DE_LABK, DE_LBRC, DE_LCBR, DE_RCBR, DE_RBRC, DE_RABK,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┬────────┐  ┌────────┬────────┼────────┼────────┼────────┼────────┼────────┼────────┤
       _______, DE_PIPE, _______, _______, _______, _______, _______, _______,    _______, _______, _______, DE_MICR, _______, _______, _______, _______,
    //└────────┴────────┴────────┼────────┼────────┼────────┼────────┼────────┤  ├────────┴────────┴────────┼────────┼────────┼────────┴────────┴────────┘
                                  _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______
    //                           └────────┴────────┴────────┴────────┴────────┘  └────────┴────────┴────────┴────────┴────────┘
    ),

    // ---------------------------------------------------------------------------------------------------------------------------------------------------

    [_MVMNT] = LAYOUT(
    //
    //┌────────┬────────┬────────┬────────┬────────┬────────┐                                      ┌────────┬────────┬────────┬────────┬────────┬────────┐
       _______, _______, _______, _______, _______, _______,                                        _______, _______, _______, _______, _______, KC_PSCREEN,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                                      ├────────┼────────┼────────┼────────┼────────┼────────┤
       RGB_TOG, RGB_MOD, RGB_RMOD, _______, _______, _______,                                        KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT,KC_ENTER, KC_PGUP,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┬────────┐  ┌────────┬────────┼────────┼────────┼────────┼────────┼────────┼────────┤
       _______, _______, _______, _______, _______, _______, _______, _______,    _______, _______, KC_DEL,  KC_INS,  KC_TAB,  KC_HOME, KC_END,  KC_PGDOWN,
    //└────────┴────────┴────────┼────────┼────────┼────────┼────────┼────────┤  ├────────┴────────┴────────┼────────┼────────┼────────┴────────┴────────┘
                                  _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______
    //                           └────────┴────────┴────────┴────────┴────────┘  └────────┴────────┴────────┴────────┴────────┘
    ),

};

#ifdef ENCODER_ENABLE
void encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        // Volume control
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    }
    else if (index == 1) {
        // Page up/Page down
        if (clockwise) {
            tap_code(KC_PGDN);
        } else {
            tap_code(KC_PGUP);
        }
    }
}
#endif
