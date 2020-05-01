/* Copyright 2015-2017 Jack Humbert
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
#include "muse.h"

enum preonic_layers {
  _BEAKL15X,
  _QWERTY,
  _LOWER,
  _RAISE,
  _ADJUST
};

enum preonic_keycodes {
  BKL15X = SAFE_RANGE,
  QWERTY,
  LOWER,
  RAISE,
  ADJUST
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {


/* Beakl15X
 * ,-----------------------------------------------------------------------------------.
 * |      |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |  Esc | Tab  |   H  |   O  |   U  |   '  |   ;  |   F  |   C  |   N  | Bksp | Del  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |   Q  |   Y  |   I  |   E  |   A  |   Z  |   W  |   S  |   T  |   R  |   G  |   J  |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | End  |   B  |   V  |   X  |   K  |   .  |   ,  |   D  |   M  |   L  |   P  |Enter |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |Qwerty| Ctrl | Alt  | GUI  |Lower |  Spc | Shft |Raise | Left | Down |  Up  |Right |
 * `-----------------------------------------------------------------------------------'
 */
[_BEAKL15X] = LAYOUT_preonic_grid( \
  _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,   _______,  \
  KC_ESC,  KC_TAB,  KC_H,    KC_O,    KC_U,    KC_QUOT, KC_SCLN, KC_F,    KC_C,    KC_N,    KC_BSPC, KC_DEL,  \
  KC_Q,    KC_Y,    KC_I,    KC_E,    KC_A,    KC_Z,    KC_W,    KC_S,    KC_T,    KC_R,    KC_G,    KC_J,    \
  KC_END,  KC_B,    KC_V,    KC_X,    KC_K,    KC_DOT,  KC_COMM, KC_D,    KC_M,    KC_L,    KC_P,    KC_ENT,  \
  QWERTY,  KC_LCTL, KC_LALT, KC_LGUI, LOWER,   KC_SPC,  KC_RSFT, RAISE,   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT  \
),

/* Qwerty
 * ,-----------------------------------------------------------------------------------.
 * | Esc  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Del  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Caps |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  | End  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Beakl| Ctrl | Alt  | GUI  |Lower |  Spc | Shft |Raise | Left | Down |  Up  |Right |
 * `-----------------------------------------------------------------------------------'
 */
[_QWERTY] = LAYOUT_preonic_grid( \
  KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_DEL,  \
  KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC, \
  KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, \
  KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_END,  \
  BKL15X,  KC_LCTL, KC_LALT, KC_LGUI, LOWER,   KC_SPC,  KC_RSFT, RAISE,   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT  \
),

/* Lower
 * ,-----------------------------------------------------------------------------------.
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |  Esc | Tab  |  [   |   {  |   (  |   '  |   ;  |   )  |   }  |   ]  | Bksp | Del  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |   §  |   #  |   @  |   !  |   ?  |      |   _  |   -  |   +  |   =  |   |  |   ~  |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |   ^  |   &  |   $  |   _  |   .  |   ,  |   %  |   *  |   /  |   \  |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |Enter |      | Play | Vol- | Vol+ | Next |
 * `-----------------------------------------------------------------------------------'
 */
[_LOWER] = LAYOUT_preonic_grid( \
  _______, _______, _______, _______, _______, _______, _______, _______,_______, _______, _______, _______,  \
  KC_ESC,  KC_TAB,  KC_LBRC, KC_LCBR, KC_LPRN, KC_QUOT, KC_SCLN, KC_RPRN, KC_RCBR, KC_RBRC, KC_BSPC, KC_DEL,  \
  _______, KC_HASH, KC_AT,   KC_EXLM, KC_QUES, _______, KC_UNDS, KC_MINS, KC_PLUS, KC_EQL,  KC_PIPE, KC_TILD, \
  _______, KC_CIRC, KC_AMPR, KC_DLR,  KC_UNDS, KC_DOT,  KC_COMM, KC_PERC, KC_ASTR, KC_SLSH, KC_BSLS,_______,  \
  _______, _______, _______, _______, _______, _______, KC_ENT,  _______, KC_MPLY, KC_VOLD, KC_VOLU, KC_MNXT  \
),

/* Raise
 * ,-----------------------------------------------------------------------------------.
 * | Reset| Debug|      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |  Esc | Tab  |  [   |   '  |   ;  |   '  |   ;  |   )  |   }  |   ]  | Bksp | Del  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |   .  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  |   ,  |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      | Undo |  Cut | Copy |Paste |   .  |   ,  | Left | Down |  Up  |Right |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      | Shift|      |      | Play | Vol- | Vol+ | Next |
 * `-----------------------------------------------------------------------------------'
 */
[_RAISE] = LAYOUT_preonic_grid( \
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
  KC_ESC,  KC_TAB,  KC_LBRC, KC_QUOT, KC_SCLN, KC_QUOT, KC_SCLN, KC_RPRN, KC_RCBR, KC_RBRC, KC_BSPC, KC_DEL,  \
  KC_DOT,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_COMM, \
  _______, KC_UNDO, KC_CUT,  KC_COPY, KC_PSTE, KC_DOT,  KC_COMM, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_END,  \
  _______, _______, _______, _______, _______, KC_RSFT,  _______, _______, KC_MPLY, KC_VOLD, KC_VOLU, KC_MNXT \
),

/* Adjust
 * ,-----------------------------------------------------------------------------------.
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      | Reset| Debug|EEPRST|      |      |      |  F21 |  F22 |  F23 |  F24 |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |  F11 |  F12 |  F13 |  F14 |  F15 |  F16 |  F17 |  F18 |  F19 |  F20 |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  |  F10 |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_ADJUST] = LAYOUT_preonic_grid( \
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
  _______, RESET,   DEBUG,   EEP_RST, _______, _______, _______, KC_F21,  KC_F22,  KC_F23,  KC_F24, _______,  \
  _______, KC_F11,  KC_F12,  KC_F13,  KC_F14,  KC_F15,  KC_F16,  KC_F17,  KC_F18,  KC_F19,  KC_F20,  _______, \
  _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  _______, \
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______  \
),

};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {

  switch (keycode) {
        case BKL15X:
          if (record->event.pressed) {
            set_single_persistent_default_layer(_BEAKL15X);
          }
          return false;
          break;

        case QWERTY:
          if (record->event.pressed) {
            set_single_persistent_default_layer(_QWERTY);
          }
          return false;
          break;

        case LOWER:
          if (record->event.pressed) {
            layer_on(_LOWER);
            update_tri_layer(_LOWER, _RAISE, _ADJUST);
          } else {
            layer_off(_LOWER);
            update_tri_layer(_LOWER, _RAISE, _ADJUST);
          }
          return false;
          break;

        case RAISE:
          if (record->event.pressed) {
            layer_on(_RAISE);
            update_tri_layer(_LOWER, _RAISE, _ADJUST);
          } else {
            layer_off(_RAISE);
            update_tri_layer(_LOWER, _RAISE, _ADJUST);
          }
          return false;
          break;
      }
    return true;
};

