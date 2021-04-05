#include QMK_KEYBOARD_H
#include "esnahn.h"


enum custom_keycodes {
  MDOT = SAFE_RANGE, // Alt + 183
  // RSQUOTE // Alt + 8217 (doesn't work)
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case MDOT: // Alt + 183
      if (record->event.pressed) {
        // when keycode is pressed
        SEND_STRING(SS_DOWN(X_LALT));
        SEND_STRING(SS_TAP(X_P1) SS_TAP(X_P8) SS_TAP(X_P3));
        SEND_STRING(SS_UP(X_LALT));
      } else {
        // when keycode is released
      }
      break;
/*     case RSQUOTE:
      if (record->event.pressed) {
        // when keycode is pressed
        SEND_STRING(SS_DOWN(X_LALT));
        SEND_STRING(SS_TAP(X_P8) SS_TAP(X_P2) SS_TAP(X_P1) SS_TAP(X_P7));
        SEND_STRING(SS_UP(X_LALT));
      } else {
        // when keycode is released
      }
      break; */
  }
  return true;
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  // 0: Base Layer
  [0] = LAYOUT_esnahn( \
      KC_ESC,      KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,          \
      KC_TAB,      KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, LT(11,KC_BSLS),   \
      LT(10,KC_GRV),KC_A,   KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,           \
      KC_LSFT,              KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  RSFT_T(KC_SLSH),  KC_UP,   KC_DEL,  \
      KC_LCTL,     KC_LGUI, KC_LALT,          CTL_T(KC_LANG1),  KC_SPC,  RSFT_T(KC_HOME), RCTL_T(KC_END),    XXXXXXX, KC_LEFT, KC_DOWN, KC_RIGHT \
  ),    
  // 1: Plain Layer 
  [1] = LAYOUT_esnahn( \
      _______,     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          \
      _______,     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          \
      _______,     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,          \
      _______,              _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, \
      _______,     _______, _______,          KC_SPC,           KC_SPC,                    KC_LANG1,_______, _______, _______, _______, _______  \
  ),
  // 10: Caps Lock Layer
  [10] = LAYOUT_esnahn( \
      _______,     KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_PSCR,          \
      _______,     KC_F5,   KC_F6,   KC_F7,   KC_F8,   _______, _______, _______, _______, _______, _______, KC_VOLD, KC_VOLU, _______,          \
      _______,     KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______, _______, _______, _______, _______, _______, _______,          _______,          \
      _______,              RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, _______, _______, MDOT,    MDOT,    _______,          KC_PGUP, KC_INS,  \
      _______,     _______, _______,          TG(1),            _______,                   _______, _______, _______, KC_HOME, KC_PGDN, KC_END   \
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

bool get_ignore_mod_tap_interrupt(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case CTL_T(KC_LANG1):
      return true;
    /* case SFT_T(KC_SPC):
      return true; */
    default:
      return false;
  }
}



