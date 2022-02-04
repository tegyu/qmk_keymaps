#include QMK_KEYBOARD_H
#include "esnahn.h"


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  // 0: Base Layer
  [0] = LAYOUT_esnahn( \
      KC_GESC,      KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,          \
      KC_TAB,       KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,          \
      KC_LNG1,      KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,           \
      KC_LSFT,               KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  RSFT_T(KC_SLSH),  KC_UP,   KC_DEL,  \
      KC_LCTL,      KC_LGUI, KC_LALT,          KC_SPC, LT(10, KC_SPC),                      KC_CAPS, KC_LNG2, KC_QUES, KC_LEFT, KC_DOWN, KC_RIGHT \
  ),    
  // 10: right space Layer
  [10] = LAYOUT_esnahn( \
      KC_GRV,      KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_PSCR,          \
      _______,     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_VOLD, KC_VOLU, _______,          \
      _______,     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,          \
      _______,              _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_QUES,          KC_PGUP, _______, \
      _______,     _______, _______,          _______,          _______,                   _______, _______, _______, KC_HOME, KC_PGDN, KC_END   \
  ),

/*   // 15: Transparent Layer Template
  [15] = LAYOUT_esnahn( \
      _______,     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          \
      _______,     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          \
      _______,     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,          \
      _______,              _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, \
      _______,     _______, _______,          _______,          _______,                   _______, _______, _______, _______, _______, _______  \
  ) */
};



// // Light LEDs 6 to 9 and 12 to 15 red when caps lock is active. Hard to ignore!
// const rgblight_segment_t PROGMEM my_capslock_layer[] = RGBLIGHT_LAYER_SEGMENTS(
//     {0, 2, HSV_RED},       // Light 2 LED(s), starting with LED 0
//     {RGBLED_NUM-2, 2, HSV_RED}       // Light 2 LED(s), finishing with the last LED
// );
// Light LEDs 9 & 10 in cyan when keyboard layer 1 is active
const rgblight_segment_t PROGMEM my_spacebar_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, RGBLED_NUM, HSV_WHITE}
);

// Now define the array of layers. Later layers take precedence
const rgblight_segment_t* const PROGMEM my_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    my_spacebar_layer
);



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

  // enable RGB and turn it off (black)
  rgblight_enable();
  rgblight_sethsv(HSV_OFF);

  // Enable the LED layers
  rgblight_layers = my_rgb_layers;
}

bool led_update_user(led_t led_state) {
  // QMK provides methods to read 5 of the LEDs defined in the HID spec:
  // the API hooks provided allow custom control of the LED behavior. 
  // These functions will be called when the state of one of those 5 LEDs changes. 
  // It receives the LED state as a struct parameter.

  // set the state of the first RGB layer (my_capslock_layer) to match caps lock's
  // rgblight_set_layer_state(0, led_state.caps_lock);

  // By convention, return true from led_update_user() to get the led_update_kb() hook to run its code, 
  // and return false when you would prefer not to run the code in led_update_kb().
  return true;
}


/* layer_state_t default_layer_state_set_user(layer_state_t state) {
    // Callback for default layer functions, for users. Called on keyboard initialization.

    rgblight_set_layer_state(1, layer_state_cmp(state, _DVORAK));
    return state;
} */

layer_state_t layer_state_set_user(layer_state_t state) {
    // Callback for layer functions, for users.

    // lights up rgb layer 0 when key layer 10 is set
    rgblight_set_layer_state(0, IS_LAYER_ON_STATE(state, 10));
    return state;
}