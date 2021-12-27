// https://beta.docs.qmk.fm/using-qmk/software-features/tap_hold#ignore-mod-tap-interrupt
// An example of a sequence which will be affected by the IGNORE_MOD_TAP_INTERRUPT option
// (assuming that options like PERMISSIVE_HOLD or HOLD_ON_OTHER_KEY_PRESS are not enabled):
// SFT_T(KC_A) Down
// KC_X Down
// SFT_T(KC_A) Up
// KC_X Up
// Normally, this would send a capital X (SHIFT+x), even if the sequence is performed faster than the TAPPING_TERM.
// However, if the IGNORE_MOD_TAP_INTERRUPT option is enabled, the SFT_T(KC_A) key must be held longer than the TAPPING_TERM
// to register the hold action. A quick tap will output ax in this case, while a hold will still output a capital X (SHIFT+x).

// #define IGNORE_MOD_TAP_INTERRUPT


// If defined, the RGB lighting will be switched off when the host goes to sleep

#define RGBLIGHT_SLEEP

// These make it easy to use your underglow LEDs as status indicators to show 
// which keyboard layer is currently active, or the state of caps lock, 
// all without disrupting any animations.

#define RGBLIGHT_LAYERS