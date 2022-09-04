/* Copyright 2021 peepeetee
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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT_tkl_ansi(
        KC_ESC,               KC_F1,     KC_F2,     KC_F3,     KC_F4,     KC_F5,     KC_F6,     KC_F7,     KC_F8,     KC_F9,     KC_F10,    KC_F11,    KC_F12,     KC_PSCR, KC_SLCK, KC_PAUS,
        KC_GRV,    KC_1,      KC_2,      KC_3,      KC_4,      KC_5,      KC_6,      KC_7,      KC_8,      KC_9,      KC_0,      KC_MINS,   KC_EQL,    KC_BSPC,    KC_INS,  KC_HOME, KC_PGUP,
        KC_TAB,    KC_Q,      KC_W,      KC_E,      KC_R,      KC_T,      KC_Y,      KC_U,      KC_I,      KC_O,      KC_P,      KC_LBRC,   KC_RBRC,   KC_BSLS,    KC_DEL,  KC_END,  KC_PGDN,
        KC_CAPS,   KC_A,      KC_S,      KC_D,      KC_F,      KC_G,      KC_H,      KC_J,      KC_K,      KC_L,      KC_SCLN,   KC_QUOT,              KC_ENT,
        KC_LSFT,              KC_Z,      KC_X,      KC_C,      KC_V,      KC_B,      KC_N,      KC_M,      KC_COMM,   KC_DOT,    KC_SLSH,              KC_RSFT,             KC_UP,
        KC_LCTL,   KC_LGUI,   KC_LALT,                                    KC_SPC,                                     KC_RALT,   KC_RGUI,   MO(1),     KC_RCTL,    KC_LEFT, KC_DOWN, KC_RGHT
    ),

    [1] = LAYOUT_tkl_ansi(
        _______,              RGB_M_P,   RGB_M_B,   RGB_M_R,   RGB_M_SW,  RGB_M_SN,  RGB_M_K,   RGB_M_X,   RGB_M_G,   RGB_M_T,   _______,   _______,   _______,    _______, _______, QK_BOOT,
        _______,   RGB_TOG,   RGB_MOD,   RGB_HUI,   RGB_SAI,   RGB_VAI,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   TG(2),    _______, _______, _______,
        _______,   _______,   RGB_RMOD,  RGB_HUD,   RGB_SAD,   RGB_VAD,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,    _______, KC_MPLY, _______,
        _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,              _______,
        _______,              _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,              _______,             KC_VOLU,
        _______,   _______,   _______,                                    KC_MPLY,                                    _______,   _______,   _______,   KC_MPLY,    KC_MPRV, KC_VOLD, KC_MNXT
    ),

    [2] = LAYOUT_tkl_ansi(
        _______,              LSA(KC_F1),   _______,   _______,   LSA(KC_F4),   LSA(KC_F5),   _______,   _______,   LSA(KC_F8),   _______,   _______,   _______,   _______,    _______, _______, _______,
        _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,    _______, _______, _______,
        _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,    _______, _______, _______,
        _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,              _______,
        _______,              _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,              _______,             _______,
        _______,   _______,   _______,                                    _______,                                    _______,   _______,   _______,   _______,    _______, _______, _______
    ),

/*
    [X] = LAYOUT_tkl_ansi(
        _______,              _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,    _______, _______, _______,
        _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,    _______, _______, _______,
        _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,    _______, _______, _______,
        _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,              _______,
        _______,              _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,              _______,             _______,
        _______,   _______,   _______,                                    _______,                                    _______,   _______,   _______,   _______,    _______, _______, _______
    ),
*/


};

void keyboard_post_init_user(void){
    rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_REACTIVE);
}

// function key for now
#define INDICATOR_KEY 82
#define INDICATOR_COLOR RGB_RED
#define STREAM_LAYER 2
#define STREAM_KEYS_COLOR RGB_GOLD
void rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    if (get_highest_layer(layer_state) > 0) {
        uint8_t layer = get_highest_layer(layer_state);
        uint8_t streamingKeys[] = {1, 4, 5, 8};
        if (STREAM_LAYER == layer){
            for(uint8_t i=0;i < sizeof(streamingKeys) / sizeof(streamingKeys[0]); i++){
                rgb_matrix_set_color(streamingKeys[i], STREAM_KEYS_COLOR);
            }
            rgb_matrix_set_color(INDICATOR_KEY, INDICATOR_COLOR);
        }else{
            for(uint8_t row=0; row < MATRIX_ROWS; ++row){
                for(uint8_t col=0; col <MATRIX_COLS; ++col){
                    uint8_t index = g_led_config.matrix_co[row][col];

                    if (index >= led_min
                            && index <= led_max
                            && index != NO_LED
                            && keymap_key_to_keycode(layer, (keypos_t){col,row}) > KC_TRNS) {
                        rgb_matrix_set_color(index, INDICATOR_COLOR);
                    }
                }
            }
        }
    }
}
