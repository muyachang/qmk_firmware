#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

// Layers

#define _BASE        0
#define _NUM         1
#define _FUNC        2
#define _MEDIA       3
#define _MOUSE       4
#define _SYS         5

#define FN_ESC LT(_FUNC, KC_ESC)

#include "_macro.c"
#include "_music_mode.c"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[_BASE] = LAYOUT_planck_grid(
        KC_TAB  , KC_Q      , KC_W   , KC_E   , KC_R      , KC_T  , KC_Y  , KC_U    , KC_I   , KC_O   , KC_P   , KC_BSPC,
        FN_ESC  , KC_A      , KC_S   , KC_D   , KC_F      , KC_G  , KC_H  , KC_J    , KC_K   , KC_L   , KC_SCLN, KC_ENT,
        KC_LSFT , KC_Z      , KC_X   , KC_C   , KC_V      , KC_B  , KC_N  , KC_M    , KC_COMM, KC_DOT , KC_SLSH, KC_RSFT,
        KC_LCTL , MO(_MOUSE), KC_LWIN, KC_LALT, MO(_MEDIA), KC_SPC, KC_SPC, MO(_NUM), KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT
        ),

	[_NUM] = LAYOUT_planck_grid( 
        KC_GRV , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   , KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_BSLS,
        _______, _______, _______, _______, _______, _______, _______, KC_MINS, KC_EQL , KC_LBRC, KC_RBRC, KC_QUOT,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
        ),

	[_FUNC] = LAYOUT_planck_grid( 
        MO(_SYS), KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 ,  KC_DEL,
        _______ , _______, _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, _______, _______,
        _______ , _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______ , _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
        ),

	[_MEDIA] = LAYOUT_planck_grid(
        _______, KC_MUTE, KC_VOLD, KC_VOLU, KC_MPRV, KC_MPLY, KC_MNXT, _______, _______, _______, KC_BRID, KC_BRIU, 
        MU_TOG , _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
        MU_MOD , _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______ 
        ),

	[_MOUSE] = LAYOUT_planck_grid(
        _______, KC_ACL0, KC_ACL1, KC_ACL2, _______, _______, _______, KC_BTN1, KC_BTN2, _______, _______, _______, 
        _______, _______, _______, _______, _______, _______, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, _______, _______, 
        _______, _______, _______, _______, _______, _______, _______, KC_WH_D, KC_WH_U, _______, _______, _______, 
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______ 
        ),

	[_SYS] = LAYOUT_planck_grid(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, EEP_RST, DEBUG  , RESET  ,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
        )
};
