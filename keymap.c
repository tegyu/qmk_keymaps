#include QMK_KEYBOARD_H
#include "esnahn.h"


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  // 0: Base Layer
  [0] = LAYOUT_esnahn( \
      KC_GRV,      KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,          \
      KC_TAB,      KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, LT(11,KC_BSLS),   \
      KC_ESC,      KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,           \
      KC_LSFT,              KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  RSFT_T(KC_SLSH),  KC_UP,   KC_DEL,  \
      KC_LCTL,     KC_LGUI, KC_LALT,          LT(10, KC_LANG1), KC_SPC,                    KC_HOME, KC_END,  KC_RCTL, KC_LEFT, KC_DOWN, KC_RIGHT \
  ),    
  // 1: Plain Layer 
  [1] = LAYOUT_esnahn( \
      _______,     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          \
      _______,     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          \
      _______,     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,          \
      _______,              _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, \
      _______,     _______, _______,          KC_SPC,           KC_SPC,                    KC_LANG1,_______, _______, _______, _______, _______  \
  ),
  // 10: Left space Layer
  [10] = LAYOUT_esnahn( \
      _______,     KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_PSCR,          \
      _______,     _______, _______, _______, _______, C(KC_T), _______, _______, _______, _______, _______, KC_VOLD, KC_VOLU, _______,          \
      _______,     C(KC_A), C(KC_S), _______, C(KC_F), _______, _______, _______, _______, _______, _______, _______,          _______,          \
      _______,              C(KC_Z), C(KC_X), C(KC_C), C(KC_V), _______, _______, _______, _______, _______, _______,          KC_PGUP, KC_INS,  \
      _______,     _______, _______,          _______,          _______,                   _______, _______, _______, KC_HOME, KC_PGDN, KC_END   \
  ),
  // 11: Backslash Layer
  [11] = LAYOUT_esnahn( \
      _______,     KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_PSCR,          \
      _______,     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_VOLD, KC_VOLU, _______,          \
      KC_CAPS,     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,          \
      _______,              _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          KC_PGUP, KC_INS,  \
      _______,     _______, _______,          TG(1),            _______,                   _______, _______, _______, KC_HOME, KC_PGDN, KC_END   \
  ),

/*   // 12: Shift Layer
  [12] = LAYOUT_esnahn( \
      S(KC_ESC), S(KC_1), S(KC_2), S(KC_3), S(KC_4), S(KC_5), S(KC_6), S(KC_7), S(KC_8), S(KC_9), S(KC_0), KC_UNDS, KC_PLUS, S(KC_BSPC),         \
      S(KC_TAB), S(KC_Q), S(KC_W), S(KC_E), S(KC_R), S(KC_T), S(KC_Y), S(KC_U), S(KC_I), S(KC_O), S(KC_P), KC_LCBR, KC_RCBR,   KC_PIPE,          \
        KC_TILD, S(KC_A), S(KC_S), S(KC_D), S(KC_F), S(KC_G), S(KC_H), S(KC_J), S(KC_K), S(KC_L), KC_COLN, KC_DQUO,          S(KC_ENT),          \
        KC_QUES,          S(KC_Z), S(KC_X), S(KC_C), S(KC_V), S(KC_B), S(KC_N), S(KC_M), KC_LABK, KC_RABK, KC_QUES,            KC_PGUP, KC_INS,  \
        _______, _______, _______,          KC_LCTL,          S(KC_SPC),                 _______, KC_PGUP, KC_PGDN,   KC_HOME, KC_PGDN, KC_END   \
  ), */
/*   // 15: Transparent Layer Template
  [15] = LAYOUT_esnahn( \
      _______,     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          \
      _______,     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          \
      _______,     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,          \
      _______,              _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, \
      _______,     _______, _______,          _______,          _______,                   _______, _______, _______, _______, _______, _______  \
  ) */
};

// Loop
void matrix_scan_user(void) {
  // Empty
};

void eeconfig_init_user(void) {

}

void keyboard_pre_init_user(void) {
  // Call the keyboard pre init code.
  
}

void matrix_init_user(void) {
  // This is called when the matrix is initialized, and after some of the hardware has been set up, but before many of the features have been initialized.
}

void keyboard_post_init_user(void) {
  // This is ran as the very last task in the keyboard initialization process.
}
