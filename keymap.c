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
 *
 *
 * Notes:
 * Should always have dedicated layer key (maybe one for each layer)
 * check out mouse cursor movement with keys!!!!
 * Should have a CAPS key, useful when needed
 * Utilize the end key
 *
 * switching W and V did not really work, need to find other key to replace with W. Try one from right hand side like C or G or something. O'boy I try changing out L to avoid the awkward LDR combo
 *
 * change out F with something
 *
 * Try swap B and J, or move some non common letter to right hand
 * Then put J in far right
 *
 * Testing beakl layout - !!!!!!!!!!!!!!!CURRENTLY IN USE!!!!!!!!!!!!!!!!
 * Notes:
 * W felt nicer than P on right pinky. to many rolls with P
 * Nice not to have D in centre though
 *
 * MY COMFORT ZONE
 * ,-----------------------------------------------------------------------------------.
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |   X  |   X  |      |      |      |      |   X  |   X  |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |   X  |   X  |   X  |   X  |      |      |   X  |   X  |   X  |   X  |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |      |      |      |   X  |      |      |   X  |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 *
 * bigram frequency
 * th 1.52       en 0.55       ng 0.18
 * he 1.28       ed 0.53       of 0.16
 * in 0.94       to 0.52       al 0.09
 * er 0.94       it 0.50       de 0.09
 * an 0.82       ou 0.50       se 0.08
 * re 0.68       ea 0.47       le 0.08
 * nd 0.63       hi 0.46       sa 0.06
 * at 0.59       is 0.46       si 0.05
 * on 0.57       or 0.43       ar 0.04
 * nt 0.56       ti 0.34       ve 0.04
 * ha 0.56       as 0.33       ra 0.04
 * es 0.56       te 0.27       ld 0.02
 * st 0.55       et 0.19       ur 0.02
 *
 * letter frequency (english)
 * a 	8.497%
 * b 	1.492%
 * c 	2.202%
 * d 	4.253%
 * e 	11.162%
 * f 	2.228%
 * g 	2.015%
 * h 	6.094%
 * i 	7.546%
 * j 	0.153%
 * k 	1.292%
 * l 	4.025%
 * m 	2.406%
 * n 	6.749%
 * o 	7.507%
 * p 	1.929%
 * q 	0.095%
 * r 	7.587%
 * s 	6.327%
 * t 	9.356%
 * u 	2.758%
 * v 	0.978%
 * w 	2.560%
 * x 	0.150%
 * y 	1.994%
 * z 	0.077%
 *
 * Most common doubled letters:
 * LL EE SS OO TT FF RR NN PP CC
 *
 *
 *
 * left hand: 49.642%
 * right hand: 50.358%
 *
 * ,-----------------------------------------------------------------------------------.
 * |Qwerty|   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |  Esc | Tab  |   H  |   O  |   U  |   '  |   ;  |   C  |   R  |   M  | Bksp | Del  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |   Q  |   Y  |   I  |   E  |   A  |   Z  |   F  |   S  |   T  |   N  |   W  |   J  |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | End  |   V  |   B  |   X  |   K  |   .  |   ,  |   D  |   L  |   P  |   G  |Enter |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |Qwerty| Ctrl | Alt  | GUI  |Lower |  Spc | Shft |Raise | Left | Down |  Up  |Right |
 * `-----------------------------------------------------------------------------------'
 * ,-----------------------------------------------------------------------------------.
 * |Qwerty|   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |  Esc | Tab  |   H  |   O  |   U  |   '  |   ;  |   F  |   T  |   L  | Bksp | Del  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |   Q  |   Y  |   I  |   E  |   A  |   Z  |   C  |   S  |   R  |   N  |   W  |   J  |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | End  |   B  |   V  |   X  |   K  |   .  |   ,  |   D  |   M  |   P  |   G  |Enter |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |Qwerty| Ctrl | Alt  | GUI  |Lower |  Spc | Shft |Raise | Left | Down |  Up  |Right |
 * `-----------------------------------------------------------------------------------'
 * main problem, is LD bigram
 *
 * ,-----------------------------------------------------------------------------------.
 * |Qwerty|   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |  Esc | Tab  |   H  |   O  |   U  |   '  |   ;  |   F  |   C  |   N  | Bksp | Del  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |   Q  |   Y  |   I  |   E  |   A  |   Z  |   W  |   S  |   T  |   R  |   G  |   J  |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | End  |   B  |   V  |   X  |   K  |   .  |   ,  |   D  |   M  |   L  |   P  |Enter |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |Qwerty| Ctrl | Alt  | GUI  |Lower |  Spc | Shft |Raise | Left | Down |  Up  |Right |
 * `-----------------------------------------------------------------------------------'
 *                                    P F G D C T M S R L W
 * hard constonants: P F G D C T
 * soft constonants: M S R L W
 *
 *
 * p 	1.929%
 * g 	2.015%
 * c 	2.202%
 * f 	2.228%
 * m 	2.406%
 * w 	2.560%
 * l 	4.025%
 * d 	4.253%
 * s 	6.327%
 * n 	6.749%
 * r 	7.587%
 * t 	9.356%
 */

#include QMK_KEYBOARD_H
#include "muse.h"

enum preonic_layers {
  _BEAKL15X,
  _BEAKLTEST,
  _QWERTY,
  _LOWER,
  _RAISE,
  _ADJUST
};

enum preonic_keycodes {
  BKL15X = SAFE_RANGE,
  BKLTST,
  QWERTY,
  LOWER,
  RAISE,
  ADJUST
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {


/* Beakl15X
 * left hand: 48.303%
 * right hand: 51.697
 * ,-----------------------------------------------------------------------------------.
 * |Qwerty|   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  |BeaklT|
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |  Esc | Tab  |   H  |   O  |   U  |   '  |   ;  |   C  |   R  |   F  | Bksp | Del  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |   Q  |   Y  |   I  |   E  |   A  |   Z  |   D  |   S  |   T  |   N  |   B  |   W  |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |ScrlUp|   V  |   J  |   X  |   K  |   .  |   ,  |   M  |   L  |   P  |   G  |Enter |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |ScrlDn| Ctrl | Alt  | GUI  |Lower |  Spc | Shft |Raise | Left | Down |  Up  |Right |
 * `-----------------------------------------------------------------------------------'
 */
[_BEAKL15X] = LAYOUT_preonic_grid( \
  QWERTY,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    BKLTST,  \
  KC_ESC,  KC_TAB,  KC_H,    KC_O,    KC_U,    KC_QUOT, KC_SCLN, KC_C,    KC_R,    KC_F,    KC_BSPC, KC_DEL,  \
  KC_Q,    KC_Y,    KC_I,    KC_E,    KC_A,    KC_Z,    KC_D,    KC_S,    KC_T,    KC_N,    KC_B,    KC_W,    \
  KC_WH_U, KC_V,    KC_J,    KC_X,    KC_K,    KC_DOT,  KC_COMM, KC_M,    KC_L,    KC_P,    KC_G,    KC_ENT,  \
  KC_WH_D, KC_LCTL, KC_LALT, KC_LGUI, LOWER,   KC_SPC,  KC_RSFT, RAISE,   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT  \
),

/* Beakl test layout
 * left hand: 49.642%
 * right hand: 50.358%
 * ,-----------------------------------------------------------------------------------.
 * |Qwerty|   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  |Beakl |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |  Esc | Tab  |   H  |   O  |   U  |   '  |   ;  |   C  |   R  |   F  | Bksp | Del  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |   Q  |   Y  |   I  |   E  |   A  |   Z  |   D  |   S  |   T  |   N  |   W  |   J  |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |Enter |   V  |   B  |   X  |   K  |   .  |   ,  |   M  |   L  |   P  |   G  | End  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |Qwerty| Ctrl | Alt  | GUI  |Lower |  Spc | Shft |Raise | Left | Down |  Up  |Right |
 * `-----------------------------------------------------------------------------------'
 */
[_BEAKLTEST] = LAYOUT_preonic_grid( \
  QWERTY,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    BKL15X,  \
  KC_ESC,  KC_TAB,  KC_H,    KC_O,    KC_U,    KC_QUOT, KC_SCLN, KC_C,    KC_R,    KC_F,    KC_BSPC, KC_DEL,  \
  KC_Q,    KC_Y,    KC_I,    KC_E,    KC_A,    KC_Z,    KC_D,    KC_S,    KC_T,    KC_N,    KC_W,    KC_J,    \
  KC_WH_U, KC_V,    KC_B,    KC_X,    KC_K,    KC_DOT,  KC_COMM, KC_M,    KC_L,    KC_P,    KC_G,    KC_ENT,  \
  KC_WH_D, KC_LCTL, KC_LALT, KC_LGUI, LOWER,   KC_SPC,  KC_RSFT, RAISE,   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT  \
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
  _______, KC_CIRC, KC_AMPR, KC_DLR,  KC_UNDS, KC_DOT,  KC_COMM, KC_PERC, KC_ASTR, KC_SLSH, KC_BSLS, _______,  \
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

        case BKLTST:
          if (record->event.pressed) {
            set_single_persistent_default_layer(_BEAKLTEST);
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

