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

// Define my own keycodes (handled in process_record_user function below)
enum my_keycodes {
    V_RGBFAV = SAFE_RANGE
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT_tkl_ansi(
        KC_ESC,               KC_F1,     KC_F2,     KC_F3,     KC_F4,     KC_F5,     KC_F6,     KC_F7,     KC_F8,     KC_F9,     KC_F10,    KC_F11,    KC_F12,     KC_PSCR, KC_SCRL, KC_PAUS,
        KC_GRV,    KC_1,      KC_2,      KC_3,      KC_4,      KC_5,      KC_6,      KC_7,      KC_8,      KC_9,      KC_0,      KC_MINS,   KC_EQL,    KC_BSPC,    KC_INS,  KC_HOME, KC_PGUP,
        KC_TAB,    KC_Q,      KC_W,      KC_E,      KC_R,      KC_T,      KC_Y,      KC_U,      KC_I,      KC_O,      KC_P,      KC_LBRC,   KC_RBRC,   KC_BSLS,    KC_DEL,  KC_END,  KC_PGDN,
        KC_CAPS,   KC_A,      KC_S,      KC_D,      KC_F,      KC_G,      KC_H,      KC_J,      KC_K,      KC_L,      KC_SCLN,   KC_QUOT,              KC_ENT,
        KC_LSFT,              KC_Z,      KC_X,      KC_C,      KC_V,      KC_B,      KC_N,      KC_M,      KC_COMM,   KC_DOT,    KC_SLSH,              KC_RSFT,             KC_UP,
        KC_LCTL,   KC_LGUI,   KC_LALT,                                    KC_SPC,                                     KC_RALT,   MO(4),     MO(1),     KC_RCTL,    KC_LEFT, KC_DOWN, KC_RGHT
    ),

    [1] = LAYOUT_tkl_ansi(
        _______,              V_RGBFAV,  RGB_M_P,   RGB_M_B,   RGB_M_R,   RGB_M_SW,  RGB_M_SN,  RGB_M_K,   RGB_M_X,   RGB_M_G,   RGB_M_T,   _______,   _______,    _______, _______, QK_BOOT,
        _______,   RGB_TOG,   RGB_MOD,   RGB_HUI,   RGB_SAI,   RGB_VAI,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   TG(2),      _______, _______, _______,
        _______,   _______,   RGB_RMOD,  RGB_HUD,   RGB_SAD,   RGB_VAD,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,    _______, KC_MPLY, _______,
        _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,              _______,
        _______,              _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,              _______,             KC_VOLU,
        _______,   _______,   _______,                                    _______,                                    _______,   _______,   _______,   _______,    KC_MPRV, KC_VOLD, KC_MNXT
    ),

    [2] = LAYOUT_tkl_ansi(
        _______,              LGUI(KC_7), KC_NO,    LSA(KC_F1), LSA(KC_F4), LSA(KC_F5), KC_NO,  KC_NO,     LSA(KC_F8), LSA(KC_F9), KC_NO,   KC_NO,     KC_NO,      _______, _______, _______,
        _______,   LGUI(KC_1), LGUI(KC_2), LGUI(KC_3), LGUI(KC_4), LGUI(KC_5), LGUI(KC_6), KC_NO, KC_NO,   KC_NO,     KC_NO,     LSA(KC_M), KC_NO,     _______,    _______, _______, _______,
        _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,    _______, _______, _______,
        _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,              _______,
        _______,              _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,              _______,             _______,
        _______,   _______,   _______,                                    _______,                                    _______,   _______,   MO(3),     _______,    _______, _______, _______
    ),

    [3] = LAYOUT_tkl_ansi(
        _______,              _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,    _______, _______, QK_BOOT,
        _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   TG(2),      _______, _______, _______,
        _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,    _______, KC_MPLY, _______,
        _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,              _______,
        _______,              _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,              _______,             KC_VOLU,
        _______,   _______,   _______,                                    _______,                                    _______,   _______,   _______,   _______,    KC_MPRV, KC_VOLD, KC_MNXT
    ),

    [4] = LAYOUT_tkl_ansi(
        KC_SLEP,              _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,    _______, _______, QK_BOOT,
        _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,    _______, _______, _______,
        _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,    _______, _______, _______,
        _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,              _______,
        _______,              _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,              _______,             _______,
        _______,   KC_PWR,    _______,                                    _______,                                    _______,   _______,   _______,   _______,    _______, _______, _______
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

// Handle my keycodes so they work
bool process_record_user(uint16_t keycode, keyrecord_t *keyrecord){
    switch(keycode){
        case V_RGBFAV:
            // maybe I should save it? (remove _noeeprom)
            rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_REACTIVE);
            return false;
        default:
            return true;
    }
}

// extra colors
#define PURPLE_PURPLE   0x6A, 0x0D, 0xAD
#define DARK_PURPLE     0x55, 0x0A, 0x8A
#define SATURATED_GREEN 0x00, 0x88, 0x00
#define LIGHT_GREEN     0x44, 0xFF, 0x44

// fn key for now
#define INDICATOR_KEY   82
#define INDICATOR_COLOR PURPLE_PURPLE

#define MEDIA_COLOR     LIGHT_GREEN
#define PLAY_PAUSE_COLOR    RGB_GREEN

#define FAVRGB_COLOR    RGB_BLUE

// Stream layer must match the layer used above
#define STREAM_LAYER    2
#define STREAM_KEYS_COLOR   RGB_GOLD
#define OBS_KEY_COLOR       RGB_WHITE
#define APP_KEYS_COLOR      RGB_GOLDENROD

bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
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
                        case INDICATOR_KEY:
                            if (STREAM_LAYER == layer)
                                rgb_matrix_set_color(index, STREAM_KEYS_COLOR);
                            else
                                rgb_matrix_set_color(index, INDICATOR_COLOR);
                            break;
                        // Streaming hotkeys for OBS
                        case 1: // F1
                            if (STREAM_LAYER == layer) {
                                rgb_matrix_set_color(index, OBS_KEY_COLOR);
                                break;
                            }
                        case 3: // F3
                        case 4: // F4
                        case 5: // F5
                        case 8: // F8
                        case 9: // F9
                            if (STREAM_LAYER == layer) {
                                rgb_matrix_set_color(index, STREAM_KEYS_COLOR);
                                break;
                            }
                        case 17: // 1
                        case 18: // 2
                        case 19: // 3
                        case 20: // 4
                        case 21: // 5
                        case 22: // 6
                            if (STREAM_LAYER == layer) {
                                rgb_matrix_set_color(index, APP_KEYS_COLOR);
                                break;
                            }
                        default:
                            switch(keycode){
                                case V_RGBFAV:
                                    rgb_matrix_set_color(index, FAVRGB_COLOR);
                                    break;
                                case KC_NO:
                                    rgb_matrix_set_color(index, RGB_BLACK);
                                    break;
                                case QK_BOOT:
                                case KC_PWR:
                                    rgb_matrix_set_color(index, RGB_RED);
                                    break;
                                case KC_SLEP:
                                    rgb_matrix_set_color(index, RGB_ORANGE);
                                    break;
                                case KC_MPLY:
                                    rgb_matrix_set_color(index, PLAY_PAUSE_COLOR);
                                    break;
                                case KC_MPRV:
                                case KC_MNXT:
                                case KC_VOLU:
                                case KC_VOLD:
                                    rgb_matrix_set_color(index, MEDIA_COLOR);
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
    return false;
}
