/* Copyright 2023 Cyboard LLC (@Cyboard-DigitalTailor)
 * SPDX-License-Identifier: GPL-2.0-or-later
 */

#include QMK_KEYBOARD_H
#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL
#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)
#define BP_NDSH_MAC ALGR(KC_8)
#define SE_SECT_MAC ALGR(KC_6)

enum custom_keycodes {
  RGB_SLD = SAFE_RANGE,
};

enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
  DANCE_2,
  DANCE_3,
  DANCE_4,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT_fun(
      _______,        _______,    _______,            _______,            _______,            _______,                                     _______, _______,            _______,            _______,                _______,    _______,
      KC_TRANSPARENT, KC_1,       KC_2,               KC_3,               KC_4,               KC_5,                                        KC_6,    KC_7,               KC_8,               KC_9,                   KC_0,       KC_TRANSPARENT,
      CW_TOGG,        KC_Y,       MT(MOD_LCTL, KC_C), MT(MOD_LALT, KC_L), MT(MOD_LGUI, KC_M), KC_K,                                        KC_Z,    MT(MOD_RGUI, KC_F), MT(MOD_RALT, KC_U), MT(MOD_RCTL, KC_COMMA), KC_QUOTE,   KC_SCLN,
      KC_TAB,         LT(4,KC_I), LT(3,KC_S),         LT(2,KC_R),         LT(1,KC_T),         KC_G,                                        KC_P,    LT(1,KC_N),         LT(2,KC_E),         LT(3,KC_A),             LT(4,KC_O), KC_EQUAL,
      KC_QUES,        KC_Q,       KC_V,               KC_W,               KC_D,               KC_J,                                        KC_B,    KC_H,               KC_SLASH,           KC_DOT,                 KC_X,       KC_EXLM,
                                  _______,            _______,            _______,            MEH_T(KC_SPACE), KC_LSFT,           KC_RCTL, KC_RGUI, _______,            _______,            _______,
                                                                          _______,            _______,         _______,                 _______, _______,   _______
    ),



    [1] = LAYOUT_fun(
      _______,        _______,            _______,        _______,            _______,           _______,                                                            _______,           _______,             _______,             _______,             _______,        _______,
      RGB_TOG,        _______,            RGB_MOD,        RGB_SLD,            RGB_VAD,           RGB_VAI,                                                            KC_TRANSPARENT,    KC_MEDIA_PREV_TRACK, KC_MEDIA_NEXT_TRACK, KC_MEDIA_PLAY_PAUSE, KC_MEDIA_STOP,  KC_TRANSPARENT,
      RGB_HUI,        KC_TRANSPARENT,     KC_ESCAPE,      LCTL(LSFT(KC_TAB)), LCTL(KC_TAB),      KC_TRANSPARENT,                                                     KC_AUDIO_VOL_UP,   LGUI(KC_C),          KC_UP,               KC_BSPC,             LGUI(KC_V),     KC_TRANSPARENT,
      RGB_HUD,        LGUI(KC_GRAVE),     TD(DANCE_0),    TD(DANCE_1),        LGUI(KC_RBRC), LGUI(LCTL(LSFT(KC_4))),                                                 KC_AUDIO_VOL_DOWN, KC_LEFT,             KC_DOWN,             KC_RIGHT,            KC_ENTER,       KC_TRANSPARENT,
      KC_TRANSPARENT, KC_TRANSPARENT,     KC_TRANSPARENT, KC_TRANSPARENT,     KC_TRANSPARENT,    KC_TRANSPARENT,                                                     KC_AUDIO_MUTE,     KC_TRANSPARENT,      KC_TRANSPARENT,      KC_TRANSPARENT,      KC_TRANSPARENT, KC_TRANSPARENT,
                                          _______,        _______,            _______,           KC_TRANSPARENT,     KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT,    _______,             _______,             _______,
                                                                              _______,           _______,            _______,                        _______,        _______,           _______
    ),



    [2] = LAYOUT_fun(
    _______,        _______,        _______,        _______,        _______,        _______,                                                            _______,        _______,        _______,        _______,        _______,        _______,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, LALT(KC_3),     LSFT(KC_3),     KC_DLR,         KC_TRANSPARENT,                                                     KC_TRANSPARENT, LSFT(KC_COMMA), LSFT(KC_DOT),   KC_CIRC,        KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_GRAVE,       KC_TILD,        KC_MINUS,       KC_BSLS,        KC_PLUS,                                                            KC_EQUAL,       KC_LBRC,        KC_RBRC,        KC_PIPE,        KC_SLASH,       KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                    _______,        _______,        _______,        KC_TRANSPARENT,     KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, _______,        _______,        _______,
                                                                    _______,         _______,           _______,                        _______,        _______,        _______
    ),



    [3] = LAYOUT_fun(
    _______,        _______,        _______,        _______,        _______,        _______,                                                        _______,           _______,            _______,             _______,        _______,        _______,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                 KC_TRANSPARENT,    KC_TRANSPARENT,     KC_TRANSPARENT,      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_AT,          TD(DANCE_2),    TD(DANCE_3),    KC_TRANSPARENT,                                                 KC_TRANSPARENT,    KC_LPRN,            KC_RPRN,             KC_SCLN,        KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_ASTR,        KC_PERC,        TD(DANCE_4),    KC_DQUO,        KC_TRANSPARENT,                                                 KC_TRANSPARENT,    KC_LCBR,            KC_RCBR,             KC_AMPR,        KC_COLN,        KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                 KC_TRANSPARENT,    KC_TRANSPARENT,     KC_TRANSPARENT,      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                    _______,        _______,        _______,        KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT,    _______,            _______,            _______,
                                                                    _______,        _______,        _______,                        _______,        _______,           _______
    ),



    [4] = LAYOUT_fun(
    _______,        _______,        _______,        _______,        _______,        _______,                                             _______,        _______,        _______,        _______,        _______,        _______,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_WH_DOWN,  KC_TRANSPARENT, KC_TRANSPARENT,                                      KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_UP,       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_WH_LEFT,  KC_MS_WH_UP,    KC_MS_WH_RIGHT, KC_TRANSPARENT,                                      KC_TRANSPARENT, KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                    _______,        _______,        KC_TRANSPARENT, KC_TRANSPARENT, _______,                 KC_MS_BTN1, KC_MS_BTN2,     _______,       _______,         _______,
                                                                    _______,        _______,        _______,                 _______,    _______,        _______
    )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {

    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}


typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[5];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_DELETE);
        tap_code16(KC_DELETE);
        tap_code16(KC_DELETE);
    }
    if(state->count > 3) {
        tap_code16(KC_DELETE);
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(KC_DELETE); break;
        case SINGLE_HOLD: register_code16(KC_HOME); break;
        case DOUBLE_TAP: register_code16(KC_DELETE); register_code16(KC_DELETE); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_DELETE); register_code16(KC_DELETE);
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(KC_DELETE); break;
        case SINGLE_HOLD: unregister_code16(KC_HOME); break;
        case DOUBLE_TAP: unregister_code16(KC_DELETE); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_DELETE); break;
    }
    dance_state[0].step = 0;
}
void on_dance_1(tap_dance_state_t *state, void *user_data);
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void on_dance_1(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LGUI(KC_LBRC));
        tap_code16(LGUI(KC_LBRC));
        tap_code16(LGUI(KC_LBRC));
    }
    if(state->count > 3) {
        tap_code16(LGUI(KC_LBRC));
    }
}

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(LGUI(KC_LBRC)); break;
        case SINGLE_HOLD: register_code16(KC_END); break;
        case DOUBLE_TAP: register_code16(LGUI(KC_LBRC)); register_code16(LGUI(KC_LBRC)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LGUI(KC_LBRC)); register_code16(LGUI(KC_LBRC));
    }
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(LGUI(KC_LBRC)); break;
        case SINGLE_HOLD: unregister_code16(KC_END); break;
        case DOUBLE_TAP: unregister_code16(LGUI(KC_LBRC)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LGUI(KC_LBRC)); break;
    }
    dance_state[1].step = 0;
}
void on_dance_2(tap_dance_state_t *state, void *user_data);
void dance_2_finished(tap_dance_state_t *state, void *user_data);
void dance_2_reset(tap_dance_state_t *state, void *user_data);

void on_dance_2(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(KC_RBRC));
        tap_code16(LALT(KC_RBRC));
        tap_code16(LALT(KC_RBRC));
    }
    if(state->count > 3) {
        tap_code16(LALT(KC_RBRC));
    }
}

void dance_2_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP: register_code16(LALT(KC_RBRC)); break;
        case SINGLE_HOLD: register_code16(LALT(LSFT(KC_RBRC))); break;
        case DOUBLE_TAP: register_code16(LALT(KC_RBRC)); register_code16(LALT(KC_RBRC)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(KC_RBRC)); register_code16(LALT(KC_RBRC));
    }
}

void dance_2_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP: unregister_code16(LALT(KC_RBRC)); break;
        case SINGLE_HOLD: unregister_code16(LALT(LSFT(KC_RBRC))); break;
        case DOUBLE_TAP: unregister_code16(LALT(KC_RBRC)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(KC_RBRC)); break;
    }
    dance_state[2].step = 0;
}
void on_dance_3(tap_dance_state_t *state, void *user_data);
void dance_3_finished(tap_dance_state_t *state, void *user_data);
void dance_3_reset(tap_dance_state_t *state, void *user_data);

void on_dance_3(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(KC_LBRC));
        tap_code16(LALT(KC_LBRC));
        tap_code16(LALT(KC_LBRC));
    }
    if(state->count > 3) {
        tap_code16(LALT(KC_LBRC));
    }
}

void dance_3_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[3].step = dance_step(state);
    switch (dance_state[3].step) {
        case SINGLE_TAP: register_code16(LALT(KC_LBRC)); break;
        case SINGLE_HOLD: register_code16(LALT(LSFT(KC_LBRC))); break;
        case DOUBLE_TAP: register_code16(LALT(KC_LBRC)); register_code16(LALT(KC_LBRC)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(KC_LBRC)); register_code16(LALT(KC_LBRC));
    }
}

void dance_3_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[3].step) {
        case SINGLE_TAP: unregister_code16(LALT(KC_LBRC)); break;
        case SINGLE_HOLD: unregister_code16(LALT(LSFT(KC_LBRC))); break;
        case DOUBLE_TAP: unregister_code16(LALT(KC_LBRC)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(KC_LBRC)); break;
    }
    dance_state[3].step = 0;
}
void on_dance_4(tap_dance_state_t *state, void *user_data);
void dance_4_finished(tap_dance_state_t *state, void *user_data);
void dance_4_reset(tap_dance_state_t *state, void *user_data);

void on_dance_4(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_EXLM);
        tap_code16(KC_EXLM);
        tap_code16(KC_EXLM);
    }
    if(state->count > 3) {
        tap_code16(KC_EXLM);
    }
}

void dance_4_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[4].step = dance_step(state);
    switch (dance_state[4].step) {
        case SINGLE_TAP: register_code16(KC_EXLM); break;
        case SINGLE_HOLD: register_code16(KC_QUES); break;
        case DOUBLE_TAP: register_code16(KC_EXLM); register_code16(KC_EXLM); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_EXLM); register_code16(KC_EXLM);
    }
}

void dance_4_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[4].step) {
        case SINGLE_TAP: unregister_code16(KC_EXLM); break;
        case SINGLE_HOLD: unregister_code16(KC_QUES); break;
        case DOUBLE_TAP: unregister_code16(KC_EXLM); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_EXLM); break;
    }
    dance_state[4].step = 0;
}

tap_dance_action_t tap_dance_actions_array[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
        [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset),
        [DANCE_3] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_3, dance_3_finished, dance_3_reset),
        [DANCE_4] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_4, dance_4_finished, dance_4_reset),
};

/* To setup Tap Dance, it's best to do it via VIAL
TD(0): {
  on tap: KC_DELETE,
  on hold: KC_HOME
},
TD(1): {
  on tap: LGUI(KC_LBRACKET),
  on hold: KC_END,
},
TD(2): {
  on tap: LALT(KC_RBRACKET),
  on hold: LSA(KC_RBRACKET),
},
TD(3): {
  on tap: LALT(KC_LBRACKET),
  on hold: LSA(KC_LBRACKET),
},
TD(4): {
  on tap: LSFT(KC_1),
  on hold: LSFT(KC_SLASH),
},
 */