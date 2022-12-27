#include QMK_KEYBOARD_H
#include "esnahn.h"

/*K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K010, K011, K012, K013, K014, K015, \
	K100, K101, K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, K112,       K114, K115, \
	K200,       K202, K203, K204, K205, K206, K207, K208, K209, K210, K211, K212, K213, K214, K215, \
	K300,       K302, K303, K304, K305, K306, K307, K308, K309, K310, K311, K312, K313,       K315, \
	K400,       K402, K403, K404, K405, K406, K407, K408, K409, K410, K411,       K413, K414, K415, \
	K500, K501,       K503, K504,       K506,       K508,       K510, K511,       K513, K514, K515  \ */

enum _keymap_layers {
  _QWERTY = 0,
  // _SFT_FUNC,
  // _LFT_SPC,
  _CAPS,
  _MID_SPC,
  // everything goes under the normal and the special layer 
  _NORMAL,
  _SPECIAL,
};



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  // 0: Base Layer
  [_QWERTY] = LAYOUT_kbd75_esnahn(
    KC_ESC,   XXXXXXX,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   MO(_SPECIAL),KC_PSCR,
    KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,               _______,
    KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,               _______,
    LT(_MID_SPC, KC_LNG1),
              KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,            KC_ENT,                _______,
    KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,               KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,            KC_UP,       KC_DEL,
    KC_LCTL,  KC_LGUI,  KC_LALT,                      KC_SPC,   LT(_MID_SPC, KC_F24), KC_SPC,          ALT_T(KC_HOME),CTL_T(KC_END), KC_LEFT,  KC_DOWN,     KC_RGHT
  ), 
  // shifted function row
  // [_SFT_FUNC] = LAYOUT_kbd75_esnahn(
  //   _______,  S(KC_1),  S(KC_2),  S(KC_3),  S(KC_4),  S(KC_5),  S(KC_6),  S(KC_7),  S(KC_8),  S(KC_9),  S(KC_0),  KC_UNDS,  KC_PLUS,  _______,  _______,  _______,
  //   _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
  //   _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
  //   _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,            _______,
  //   _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______,  _______,  _______,            _______,  _______,
  //   _______,  _______,  _______,                      _______,  _______,  _______,                      _______,  _______,            _______,  _______,  _______
  // ),
  // left space as lang1
  // [_LFT_SPC] = LAYOUT_kbd75_esnahn(
  //   _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
  //   _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
  //   _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
  //   _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,            _______,
  //   _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______,  _______,  _______,            _______,  _______,
  //   _______,  _______,  _______,                      KC_LNG1,  _______,  _______,                      _______,  _______,            _______,  _______,  _______
  // ),
  // caps lock/lang1 key layer
  [_CAPS] = LAYOUT_kbd75_esnahn(
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_MUTE,  KC_VOLD,  KC_VOLU,  KC_MPLY,            _______,
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,            _______,
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______,  _______,  _______,            _______,  _______,
    _______,  _______,  _______,                      _______,  _______,  _______,                      _______,  KC_LNG2,            _______,  _______,  _______
  ),
  // middle key Layer
  [_MID_SPC] = LAYOUT_kbd75_esnahn(
    _______,  _______,  KC_F13,   KC_F14,   KC_F15,   KC_F16,   KC_F17,   KC_F18,   KC_F19,   KC_F20,   KC_F21,   KC_F22,   KC_F23,   KC_F24,   _______,  _______,
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_MUTE,  KC_VOLD,  KC_VOLU,  KC_MPLY,            _______,
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
    KC_CAPS,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,            _______,
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______,  _______,  _______,            _______,  _______,
    _______,  _______,  _______,                      _______,  _______,  _______,                      _______,  KC_LNG2,            _______,  _______,  _______
  ),

  // normal Layer; should be higher than other toggle layers
  [_NORMAL] = LAYOUT_kbd75_esnahn(
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
    KC_CAPS,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,            _______,
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______,  _______,  _______,            _______,  _______,
    _______,  _______,  _______,                      KC_SPC,   KC_SPC,   KC_SPC,                       KC_LNG1,  KC_LNG2,            _______,  _______,  _______
  ),
  // special key Layer
  [_SPECIAL] = LAYOUT_kbd75_esnahn(
    TO(_QWERTY), _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,      _______,  _______,  _______,  _______,  _______,  _______,
    _______,     _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,      _______,  _______,  _______,  _______,            _______,
    _______,     _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,      _______,  _______,  _______,  _______,            _______,
    QK_BOOT,     _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,      _______,  _______,            _______,            _______,
    _______,     _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,      _______,  _______,  _______,            _______,  _______,
    _______,     _______,  _______,                      _______,TG(_NORMAL),_______,                          TG(_NORMAL),  TG(_NORMAL),    _______,  _______,  _______
  ),
  // // 31: transparent Layer
  // [31] = LAYOUT_kbd75_esnahn(
  //   _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
  //   _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
  //   _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
  //   _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,            _______,
  //   _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______,  _______,  _______,            _______,  _______,
  //   _______,  _______,  _______,                      _______,  _______,  _______,                      _______,  _______,            _______,  _______,  _______
  // ),

};



// // Light LEDs 6 to 9 and 12 to 15 red when caps lock is active. Hard to ignore!
// const rgblight_segment_t PROGMEM my_capslock_layer[] = RGBLIGHT_LAYER_SEGMENTS(
//     {0, 2, HSV_RED},       // Light 2 LED(s), starting with LED 0
//     {RGBLED_NUM-2, 2, HSV_RED}       // Light 2 LED(s), finishing with the last LED
// );
// Light LEDs white when normal layer is active
const rgblight_segment_t PROGMEM my_normal_layer[] = RGBLIGHT_LAYER_SEGMENTS(
  {RGBLED_NUM/2, RGBLED_NUM/2, HSV_WHITE}
);
// Light LEDs red when shifted layer is active
const rgblight_segment_t PROGMEM my_shifted_layer[] = RGBLIGHT_LAYER_SEGMENTS(
  {RGBLED_NUM/2, 1, HSV_RED},
  {RGBLED_NUM-1, 1, HSV_RED}
);
// Light LEDs in rainbow when mod key is down
const rgblight_segment_t PROGMEM my_special_layer[] = RGBLIGHT_LAYER_SEGMENTS(
  // { 0, 1, 256 / RGBLED_NUM *  0, 255, 255},
  // { 1, 1, 256 / RGBLED_NUM *  1, 255, 255},
  // { 2, 1, 256 / RGBLED_NUM *  2, 255, 255},
  // { 3, 1, 256 / RGBLED_NUM *  3, 255, 255},
  // { 4, 1, 256 / RGBLED_NUM *  4, 255, 255},
  // { 5, 1, 256 / RGBLED_NUM *  5, 255, 255},
  // { 6, 1, 256 / RGBLED_NUM *  6, 255, 255},
  // { 7, 1, 256 / RGBLED_NUM *  7, 255, 255},
  // { 8, 1, 256 / RGBLED_NUM *  8, 255, 255},
  // { 9, 1, 256 / RGBLED_NUM *  9, 255, 255},
  // {10, 1, 256 / RGBLED_NUM * 10, 255, 255},
  // {11, 1, 256 / RGBLED_NUM * 11, 255, 255},
  // {12, 1, 256 / RGBLED_NUM * 12, 255, 255},
  // {13, 1, 256 / RGBLED_NUM * 13, 255, 255},
  // {14, 1, 256 / RGBLED_NUM * 14, 255, 255},
  // {15, 1, 256 / RGBLED_NUM * 15, 255, 255}

  { 0, 1, 256 / 8 * 0, 255, 255},
  { 1, 1, 256 / 8 * 1, 255, 255},
  { 2, 1, 256 / 8 * 2, 255, 255},
  { 3, 1, 256 / 8 * 3, 255, 255},
  { 4, 1, 256 / 8 * 4, 255, 255},
  { 5, 1, 256 / 8 * 5, 255, 255},
  { 6, 1, 256 / 8 * 6, 255, 255},
  { 7, 1, 256 / 8 * 7, 255, 255},

  { 8, 1, 256 / 8 * 0, 255, 255},
  { 9, 1, 256 / 8 * 1, 255, 255},
  {10, 1, 256 / 8 * 2, 255, 255},
  {11, 1, 256 / 8 * 3, 255, 255},
  {12, 1, 256 / 8 * 4, 255, 255},
  {13, 1, 256 / 8 * 5, 255, 255},
  {14, 1, 256 / 8 * 6, 255, 255},
  {15, 1, 256 / 8 * 7, 255, 255}
);

// Now define the array of layers. Later layers take precedence
const rgblight_segment_t* const PROGMEM my_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
  my_normal_layer,
  my_shifted_layer,
  my_special_layer
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

    // lights up rgb layer x when keymap layer y is set
    rgblight_set_layer_state(0, IS_LAYER_ON_STATE(state, _NORMAL));
    // rgblight_set_layer_state(1, IS_LAYER_ON_STATE(state, _SFT_FUNC));
    rgblight_set_layer_state(2, IS_LAYER_ON_STATE(state, _SPECIAL));
    return state;
}
