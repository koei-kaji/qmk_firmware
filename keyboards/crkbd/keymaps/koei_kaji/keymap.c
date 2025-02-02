#include QMK_KEYBOARD_H

enum layers {
    L_BSE,  // base
    L_NAV,  // navigation
    L_MSE,  // mouse
    L_MDA,  // media
    L_NUM,  // number
    L_SYM,  // symbol
};

enum my_tapdance {
    V_ESC,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [L_BSE] = LAYOUT_split_3x6_3_ex2(
  //,----------------------------------------------------------------------------------------------------------------------.  ,----------------------------------------------------------------------------------------------------------------------.
              XXXXXXX,            KC_Q,            KC_W,            KC_E,            KC_R,            KC_T,         XXXXXXX,            XXXXXXX,            KC_Y,            KC_U,            KC_I,            KC_O,            KC_P,         XXXXXXX,
  //|----------------+----------------+----------------+----------------+----------------+----------------+----------------|  |----------------+----------------+----------------+----------------+----------------+----------------+----------------|
              XXXXXXX,    LCMD_T(KC_A),    LOPT_T(KC_S),    LCTL_T(KC_D),    LSFT_T(KC_F),            KC_G,         XXXXXXX,            XXXXXXX,            KC_H,    RSFT_T(KC_J),    RCTL_T(KC_K),    ROPT_T(KC_L),  RCMD_T(KC_TAB),         XXXXXXX,
  //|----------------+----------------+----------------+----------------+----------------+----------------+----------------'  `----------------+----------------+----------------+----------------+----------------+----------------+----------------|
              XXXXXXX,            KC_Z,    ROPT_T(KC_X),            KC_C,       TD(V_ESC),            KC_B,                                                 KC_N,            KC_M,         KC_COMM,  LOPT_T(KC_DOT),         KC_SLSH,         XXXXXXX,
  //|----------------+----------------+----------------+----------------+----------------+----------------+----------------.  ,----------------+----------------+----------------+----------------+----------------+----------------+----------------|
                                                                                MO(L_MDA),LT(L_NAV,KC_SPC),LT(L_MSE,KC_TAB),   LT(L_SYM,KC_ENT),LT(L_NUM,KC_BSPC),         KC_DEL
                                                                      //`--------------------------------------------------'  `--------------------------------------------------'
  ),
  [L_NAV] = LAYOUT_split_3x6_3_ex2(
  //,----------------------------------------------------------------------------------------------------------------------.  ,----------------------------------------------------------------------------------------------------------------------.
              XXXXXXX,         QK_BOOT,         XXXXXXX,         XXXXXXX,         XXXXXXX,         XXXXXXX,         XXXXXXX,            XXXXXXX,         XXXXXXX,      RCMD(KC_V),      RCMD(KC_C),      RCMD(KC_X),      RCMD(KC_Z),         XXXXXXX,
  //|----------------+----------------+----------------+----------------+----------------+----------------+----------------|  |----------------+----------------+----------------+----------------+----------------+----------------+----------------|
              XXXXXXX,         KC_LCMD,         KC_LOPT,         KC_LCTL,         KC_LSFT,         XXXXXXX,         XXXXXXX,            XXXXXXX,         KC_LEFT,         KC_DOWN,           KC_UP,         KC_RGHT,         XXXXXXX,         XXXXXXX,
  //|----------------+----------------+----------------+----------------+----------------+----------------+----------------'  `----------------+----------------+----------------+----------------+----------------+----------------+----------------|
              XXXXXXX,         XXXXXXX,         KC_ROPT,         XXXXXXX,         XXXXXXX,         XXXXXXX,                                              KC_HOME,         KC_PGDN,         KC_PGUP,          KC_END,         XXXXXXX,         XXXXXXX,
  //|----------------+----------------+----------------+----------------+----------------+----------------+----------------.  ,----------------+----------------+----------------+----------------+----------------+----------------+----------------|
                                                                                  XXXXXXX,         _______,         XXXXXXX,             KC_ENT,         KC_BSPC,          KC_DEL
                                                                      //`--------------------------------------------------'  `--------------------------------------------------'
  ),
  [L_MSE] = LAYOUT_split_3x6_3_ex2(
  //,----------------------------------------------------------------------------------------------------------------------.  ,----------------------------------------------------------------------------------------------------------------------.
              XXXXXXX,         QK_BOOT,         XXXXXXX,         XXXXXXX,         XXXXXXX,         XXXXXXX,         XXXXXXX,            XXXXXXX,         XXXXXXX,      RCMD(KC_V),      RCMD(KC_C),      RCMD(KC_X),      RCMD(KC_Z),         XXXXXXX,
  //|----------------+----------------+----------------+----------------+----------------+----------------+----------------|  |----------------+----------------+----------------+----------------+----------------+----------------+----------------|
              XXXXXXX,         KC_LCMD,         KC_LOPT,         KC_LCTL,         KC_LSFT,         XXXXXXX,         XXXXXXX,            XXXXXXX,         MS_LEFT,         MS_DOWN,           MS_UP,         MS_RGHT,         XXXXXXX,         XXXXXXX,
  //|----------------+----------------+----------------+----------------+----------------+----------------+----------------'  `----------------+----------------+----------------+----------------+----------------+----------------+----------------|
              XXXXXXX,         XXXXXXX,         KC_ROPT,         XXXXXXX,         XXXXXXX,         XXXXXXX,                                              MS_WHLL,         MS_WHLD,         MS_WHLU,         MS_WHLR,         XXXXXXX,         XXXXXXX,
  //|----------------+----------------+----------------+----------------+----------------+----------------+----------------.  ,----------------+----------------+----------------+----------------+----------------+----------------+----------------|
                                                                                  XXXXXXX,         XXXXXXX,         _______,            MS_BTN1,         MS_BTN2,         MS_BTN3
                                                                      //`--------------------------------------------------'  `--------------------------------------------------'
  ),
  [L_MDA] = LAYOUT_split_3x6_3_ex2(
  //,--------------------------------------------------------------.  ,--------------------------------------------------------------.
      XXXXXXX, QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_LCMD, KC_LOPT, KC_LCTL, KC_LSFT, XXXXXXX, XXXXXXX,    XXXXXXX, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------'  `--------+--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, KC_ROPT, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------.  ,--------+--------+--------+--------+--------+--------+--------|
                                          XXXXXXX, XXXXXXX, _______,    KC_MSTP, KC_MPLY, KC_MUTE
                                      //`--------------------------'  `--------------------------'
  ),
  [L_NUM] = LAYOUT_split_3x6_3_ex2(
  //,--------------------------------------------------------------.  ,--------------------------------------------------------------.
      XXXXXXX, KC_LBRC,   KC_P7,   KC_P8,   KC_P9, KC_RBRC, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, QK_BOOT, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_SCLN,   KC_P4,   KC_P5,   KC_P6,  KC_EQL, XXXXXXX,    XXXXXXX, XXXXXXX, KC_RSFT, KC_RCTL, KC_ROPT, KC_RCMD, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------'  `--------+--------+--------+--------+--------+--------+--------|
      XXXXXXX,  KC_GRV,   KC_P1,   KC_P2,   KC_P3, KC_BSLS,                      XXXXXXX, XXXXXXX, KC_LOPT, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------.  ,--------+--------+--------+--------+--------+--------+--------|
                                          KC_MINS,   KC_P0, KC_QUOT,    XXXXXXX, _______, XXXXXXX
                                      //`--------------------------'  `--------------------------'
  ),
  [L_SYM] = LAYOUT_split_3x6_3_ex2(
  //,--------------------------------------------------------------.  ,--------------------------------------------------------------.
      XXXXXXX, KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, QK_BOOT, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_COLN,  KC_DLR, KC_PERC, KC_CIRC, KC_PLUS, XXXXXXX,    XXXXXXX, XXXXXXX, KC_RSFT, KC_RCTL, KC_ROPT, KC_RCMD, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------'  `--------+--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_TILD, KC_EXLM,   KC_AT, KC_HASH, KC_PIPE,                      XXXXXXX, XXXXXXX, KC_LOPT, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------.  ,--------+--------+--------+--------+--------+--------+--------|
                                          KC_UNDS, KC_RPRN, KC_DQUO,    _______, XXXXXXX, XXXXXXX
                                      //`--------------------------'  `--------------------------'
  )
};

#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
  [L_BSE] = { ENCODER_CCW_CW(RGB_MOD, RGB_RMOD), ENCODER_CCW_CW(RGB_HUI, RGB_HUD), ENCODER_CCW_CW(RGB_VAI, RGB_VAD), ENCODER_CCW_CW(RGB_SAI, RGB_SAD), },
  [L_NAV] = { ENCODER_CCW_CW(RGB_MOD, RGB_RMOD), ENCODER_CCW_CW(RGB_HUI, RGB_HUD), ENCODER_CCW_CW(RGB_VAI, RGB_VAD), ENCODER_CCW_CW(RGB_SAI, RGB_SAD), },
  [L_MSE] = { ENCODER_CCW_CW(RGB_MOD, RGB_RMOD), ENCODER_CCW_CW(RGB_HUI, RGB_HUD), ENCODER_CCW_CW(RGB_VAI, RGB_VAD), ENCODER_CCW_CW(RGB_SAI, RGB_SAD), },
  [L_MDA] = { ENCODER_CCW_CW(RGB_MOD, RGB_RMOD), ENCODER_CCW_CW(RGB_HUI, RGB_HUD), ENCODER_CCW_CW(RGB_VAI, RGB_VAD), ENCODER_CCW_CW(RGB_SAI, RGB_SAD), },
  [L_NUM] = { ENCODER_CCW_CW(RGB_MOD, RGB_RMOD), ENCODER_CCW_CW(RGB_HUI, RGB_HUD), ENCODER_CCW_CW(RGB_VAI, RGB_VAD), ENCODER_CCW_CW(RGB_SAI, RGB_SAD), },
  [L_SYM] = { ENCODER_CCW_CW(RGB_MOD, RGB_RMOD), ENCODER_CCW_CW(RGB_HUI, RGB_HUD), ENCODER_CCW_CW(RGB_VAI, RGB_VAD), ENCODER_CCW_CW(RGB_SAI, RGB_SAD), },
};

#endif
tap_dance_action_t tap_dance_actions[] = {
    [V_ESC] = ACTION_TAP_DANCE_DOUBLE(KC_V, KC_ESC),
};
