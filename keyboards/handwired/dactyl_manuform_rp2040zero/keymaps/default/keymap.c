#include QMK_KEYBOARD_H

enum layers {
    _DEFAULT,
    _SYMBOL,
    _NUMBER,
    _FUNC,
};

// Key overrides: make DOT and COMMA ignore shift
// (ZMK mod-morph equivalent: dot_only, comma_only)
const key_override_t dot_override = ko_make_basic(MOD_MASK_SHIFT, KC_DOT, KC_DOT);
const key_override_t comma_override = ko_make_basic(MOD_MASK_SHIFT, KC_COMM, KC_COMM);

const key_override_t *key_overrides[] = {
    &dot_override,
    &comma_override,
    NULL
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* Default layer - ported from daftyl ZMK
     *
     *         V  M  L  C  P              X  F  O  U  J
     *  ESC    S  T  R  D  Y              .  N  A  E  I    TAB
     *  LCTL   Z  K  Q  G  W              B  H  '  ;  ,    RCTL
     *               _  _                       _  _
     *                  GUI SPC      LT(2,ENT) OSL(1)
     *                  LSFT _            _ RSFT
     *                  _    _            _ _
     */
    [_DEFAULT] = LAYOUT_5x6(
        KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,          KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
        KC_NO,  KC_V,   KC_M,   KC_L,   KC_C,   KC_P,           KC_X,   KC_F,   KC_O,   KC_U,   KC_J,   KC_NO,
        KC_ESC, KC_S,   KC_T,   KC_R,   KC_D,   KC_Y,           KC_DOT, KC_N,   KC_A,   KC_E,   KC_I,   KC_TAB,
        KC_LCTL,KC_Z,   KC_K,   KC_Q,   KC_G,   KC_W,           KC_B,   KC_H,   KC_QUOT,KC_SCLN,KC_COMM,KC_RCTL,
                        KC_NO,  KC_NO,                                           KC_NO,  KC_NO,
                                        KC_LGUI,KC_SPC,  LT(_NUMBER,KC_ENT),OSL(_SYMBOL),
                                        KC_LSFT,KC_NO,          KC_NO,  KC_RSFT,
                                        KC_NO,  KC_NO,          KC_NO,  KC_NO
    ),

    /* Symbol layer (OSL from default)
     *
     *         !  @  #  $  %              ^  &  *  DEL BSPC
     *  ___    _  {  }  =  +              ?  <  v  ^  >    ___
     *  ___    [  (  )  ]  -              |  <  \  /  >    ___
     *               _  _                       _  _
     *                  _  _          OSL(2) ___
     *                  _  _                _  _
     *                  _  _                _  _
     */
    [_SYMBOL] = LAYOUT_5x6(
        KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,          KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
        KC_NO,  KC_EXLM,KC_AT,  KC_HASH,KC_DLR, KC_PERC,        KC_CIRC,KC_AMPR,KC_ASTR,KC_DEL, KC_BSPC,KC_NO,
        _______,KC_UNDS,KC_LCBR,KC_RCBR,KC_EQL, KC_PLUS,        KC_QUES,KC_LEFT,KC_DOWN,KC_UP,  KC_RGHT,_______,
        _______,KC_LBRC,KC_LPRN,KC_RPRN,KC_RBRC,KC_MINS,        KC_PIPE,KC_LT,  KC_BSLS,KC_SLSH,KC_GT,  _______,
                        KC_NO,  KC_NO,                                           _______,_______,
                                        _______,_______,    OSL(_NUMBER),_______,
                                        _______,KC_NO,          KC_NO,  _______,
                                        KC_NO,  KC_NO,          KC_NO,  KC_NO
    ),

    /* Number layer (LT from default thumb, OSL from symbol)
     *
     *         MPRV MPLY MNXT MUTE _         _  7  8  9  BSPC
     *  ___    _   OSM(ALT) `  ~  VOL+       _  4  5  6  _    ___
     *  ___    NUM  INS SLCK _  VOL-          _  1  2  3  _    ___
     *               _  _                       0  .
     *                  _  _           MO(3) ___
     *                  _  _                _  _
     *                  _  _                _  _
     */
    [_NUMBER] = LAYOUT_5x6(
        KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,          KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
        KC_NO,  KC_MPRV,KC_MPLY,KC_MNXT,KC_MUTE,KC_NO,          KC_NO,  KC_7,   KC_8,   KC_9,   KC_BSPC,KC_NO,
        _______,KC_NO,  OSM(MOD_LALT),KC_GRV,KC_TILD,KC_VOLU,   KC_NO,  KC_4,   KC_5,   KC_6,   KC_NO,  _______,
        _______,KC_NUM, KC_INS, KC_SCRL,KC_NO,  KC_VOLD,        KC_NO,  KC_1,   KC_2,   KC_3,   KC_NO,  _______,
                        _______,_______,                                         KC_0,   KC_PDOT,
                                        _______,_______,    MO(_FUNC),  _______,
                                        _______,KC_NO,          KC_NO,  _______,
                                        KC_NO,  KC_NO,          KC_NO,  KC_NO
    ),

    /* Function layer (MO from number layer)
     *
     *         _  _  _  _  _              _  F7 F8 F9 _
     *  ___    _  _  _  _  _              _  F4 F5 F6 _    ___
     *  ___    _  _  _  _  _              _  F1 F2 F3 _    ___
     *               _ BOOT                    BOOT _
     *                  _  _              _  _
     *                  _  _              _  _
     *                  _  _              _  _
     */
    [_FUNC] = LAYOUT_5x6(
        KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,          KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
        KC_NO,  _______,_______,_______,_______,_______,        _______,KC_F7,  KC_F8,  KC_F9,  _______,KC_NO,
        _______,_______,_______,_______,_______,_______,        _______,KC_F4,  KC_F5,  KC_F6,  _______,_______,
        _______,_______,_______,_______,_______,_______,        _______,KC_F1,  KC_F2,  KC_F3,  _______,_______,
                        _______,QK_BOOT,                                        QK_BOOT,_______,
                                        _______,_______,        _______,_______,
                                        _______,KC_NO,          KC_NO,  _______,
                                        KC_NO,  KC_NO,          KC_NO,  KC_NO
    ),
};
