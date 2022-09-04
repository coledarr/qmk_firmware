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
        _______,              LSA(KC_F1), KC_NO,    KC_NO,   LSA(KC_F4),  LSA(KC_F5), KC_NO,    KC_NO,     LSA(KC_F8), KC_NO,    KC_NO,     KC_NO,     KC_NO,      _______, _______, _______,
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

// extra colors
#define PURPLE_PURPLE   0x6A, 0x0D, 0xAD

// fn key for now
#define INDICATOR_KEY   82
#define INDICATOR_COLOR PURPLE_PURPLE

#define MEDIA_COLOR     RGB_GREEN

// Stream layer must match the layer used above
#define STREAM_LAYER    2
#define STREAM_KEYS_COLOR   RGB_GOLD

void rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    if (get_highest_layer(layer_state) > 0) {
        uint8_t layer = get_highest_layer(layer_state);
        for(uint8_t row=0; row < MATRIX_ROWS; ++row){
            for(uint8_t col=0; col <MATRIX_COLS; ++col){
                uint8_t index = g_led_config.matrix_co[row][col];
                uint16_t keycode = keymap_key_to_keycode(layer, (keypos_t){col,row});
                if (index >= led_min && index <= led_max){
                    switch (index){
                        case NO_LED:
                            break;
                        // Media keys
                        case 48: // end
                        case 75: // up arrow
                        case 79: // space
                        case 83: // ctrl
                        case 84: // left arrow
                        case 85: // down arrow
                        case 86: // right arrow
                            if (KC_NO == keycode)
                                rgb_matrix_set_color(index, RGB_BLACK);
                            else if (keycode > KC_TRNS)
                                rgb_matrix_set_color(index, MEDIA_COLOR);
                            break;
                        // Streaming hotkeys for OBS
                        case 1: // F1
                        case 4: // F4
                        case 5: // F5
                        case 8: // F8
                            if (STREAM_LAYER == layer) {
                                rgb_matrix_set_color(index, STREAM_KEYS_COLOR);
                                break;
                            }
                        default:
                            switch(keycode){
                                case KC_NO:
                                    rgb_matrix_set_color(index, RGB_BLACK);
                                    break;
                                case QK_BOOT:
                                    rgb_matrix_set_color(index, RGB_RED);
                                    break;
                                default:
                                    if (keycode > KC_TRNS)
                                        rgb_matrix_set_color(index, INDICATOR_COLOR);
                            } // keycode switch
                    } // index switch
                } // end if LED && in led_min/max
            } // end of col
        } // end of row
    } // if default layer
}
