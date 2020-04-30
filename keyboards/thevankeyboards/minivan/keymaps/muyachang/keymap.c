#include QMK_KEYBOARD_H
#include "macro.c"
#include "tap_dance.c"
#include "leader_key.c"

//*******************//
// Layer definitions //
//*******************//
#define LT_ESC LT(_FUNC, KC_ESC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_BASE] = LAYOUT_arrow_command(
     KC_TAB , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T    , KC_Y    , KC_U   , KC_I   , KC_O   , KC_P   , KC_BSPC,
     LT_ESC , KC_A   , KC_S   , KC_D   , KC_F   , KC_G    , KC_H    , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_ENT ,
     KC_LSFT, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B    , KC_N    , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_RSFT,
     KC_LCTL, KC_LGUI, KC_LGUI, KC_LALT,          KC_SPC  , MO(_NUM),          KC_RALT, KC_RGUI, KC_RGUI, KC_RCTL
     ),
  
  [_NUM] = LAYOUT_arrow_command( 
     KC_GRV , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   , KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_DEL ,
     KC_CAPS, _______, _______, _______, _______, _______, KC_MINS, KC_EQL , KC_LBRC, KC_RBRC, _______, _______,
     _______, _______, _______, _______, _______, _______, KC_BSLS, KC_QUOT, _______, _______, _______, _______,
     _______, _______, _______, _______,          _______, _______,          _______, _______, _______, _______
     ),
  
  [_FUNC] = LAYOUT_arrow_command(
     RESET  , KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_HOME, KC_PGDN, KC_PGUP, KC_END , _______, _______,
     _______, KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, _______, _______,
     _______, DY_REC1, DY_PLA1, DY_REC2, DY_PLA2, DY_STOP, KC_MPRV, KC_MPLY, KC_MNXT, KC_VOLD, KC_VOLU, _______,
     _______, _______, _______, _______,          _______, _______,          _______, _______, _______, _______
     ),

};
