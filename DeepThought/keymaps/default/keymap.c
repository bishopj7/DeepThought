#include "quantum.h"
#include "DeepThought.h"

#define ____ KC_TRNS
#define _BASE 0
#define _FN1 1

#pragma once

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[0] = LAYOUT(
    KC_ESC, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_DEL, 
    KC_TAB, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_ENT,
    KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, 
    KC_LCTL, KC_LALT, KC_SPC, MO(1), KC_BSPC, MO(2), KC_LGUI
),
[1] = LAYOUT(
     KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_LBRC,
     KC_CAPS, KC_PGUP, KC_HOME, _______, _______, _______, _______, KC_MINS, KC_EQL, KC_SCLN, KC_QUOT, KC_BSLS,
     _______, KC_PGDN, KC_END, _______, _______, _______, KC_VOLU, KC_VOLD, KC_MUTE, _______, _______,
     _______, _______, _______, _______, _______, _______, _______
)
};
