#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_steno.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  ST_MACRO_0,
};



enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
  DANCE_2,
  DANCE_3,
  DANCE_4,
  DANCE_5,
  DANCE_6,
  DANCE_7,
};
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, LGUI(KC_SPACE), KC_TRANSPARENT, LGUI(LSFT(KC_SPACE)),KC_TRANSPARENT, KC_DELETE,      
    KC_TRANSPARENT, KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_TRANSPARENT, 
    LCTL(KC_Z),     KC_A,           KC_S,           KC_D,           TD(DANCE_0),    KC_G,           LCTL(KC_Y),                                                                     QK_STENO_GEMINI,KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_QUOTE,       
    KC_TRANSPARENT, KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_UNDS,        KC_BSLS,        
    DM_RSTP,        DM_REC1,        DM_PLY1,        DM_REC2,        DM_PLY2,        MO(1),                                                                                                          MO(2),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    LT(4,KC_BSPC),  KC_LEFT_SHIFT,  TD(DANCE_1),                    TD(DANCE_2),    TD(DANCE_3),    LT(3,KC_SPACE)
  ),
  [1] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TILD,        KC_MINUS,       KC_PLUS,        KC_LBRC,        KC_RBRC,        KC_TRANSPARENT,                                 KC_TRANSPARENT, LCTL(KC_ENTER), KC_1,           KC_2,           KC_3,           KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_LEFT_SHIFT,  KC_PIPE,        KC_PERC,        KC_EQUAL,       KC_LPRN,        KC_RPRN,        KC_LEFT_ALT,                                                                    KC_TRANSPARENT, KC_COMMA,       KC_4,           KC_5,           KC_6,           KC_0,           KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_SLASH,       KC_ASTR,        KC_LCBR,        KC_RCBR,                                        LSFT(KC_ENTER), KC_7,           KC_8,           KC_9,           KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_LEFT_SHIFT,  KC_F2,          KC_F3,          KC_F5,          TD(DANCE_4),    KC_TRANSPARENT,                                                                                                 TO(8),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_DOT,         KC_ENTER
  ),
  [2] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_GRAVE,       KC_AT,          KC_HASH,        KC_CIRC,        KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, LCTL(KC_ENTER), LCTL(LSFT(KC_TAB)),TD(DANCE_5),    LCTL(KC_TAB),   KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_EXLM,        KC_QUES,        KC_AMPR,        KC_DLR,         KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_HOME,        LCTL(KC_LEFT),  KC_LEFT,        TD(DANCE_6),    KC_RIGHT,       LCTL(KC_RIGHT), KC_END,         
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT_CTRL,   KC_LABK,        KC_RABK,                                        LSFT(KC_ENTER), KC_TRANSPARENT, KC_ENTER,       KC_TRANSPARENT, KC_TRANSPARENT, LCTL(KC_SLASH), 
    LALT(LGUI(KC_G)),LALT(LGUI(KC_C)),LALT(LGUI(KC_X)),KC_F5,          LALT(LCTL(LSFT(KC_EQUAL))),TO(8),                                                                                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    LCTL(KC_D),     LCTL(LSFT(KC_L)),LALT(LCTL(KC_LEFT_SHIFT)),                KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT_SHIFT
  ),
  [3] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_UP,       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_ACCEL2,   KC_MS_ACCEL1,   KC_MS_ACCEL0,   KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_MS_BTN1,     KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_MS_BTN2,     KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_LEFT_ALT,    LSFT(KC_LEFT_ALT),KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(0),          
    KC_TRANSPARENT, KC_Q,           KC_X,           KC_C,           KC_H,           KC_B,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_S,           KC_N,           KC_A,           KC_T,           KC_G,           KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_K,           KC_Y,           KC_M,           KC_W,           KC_R,           KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_O,           KC_P,           KC_E,           KC_I,           KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_Z,           KC_J,           KC_L,           KC_V,           KC_F,                                           KC_U,           KC_D,           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [6] = LAYOUT_moonlander(
    TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_BOOT,        
    KC_TRANSPARENT, KC_F,           KC_G,           KC_W,           KC_E,           KC_R,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_Q,           KC_A,           KC_S,           KC_D,           KC_ENTER,       KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, LALT(KC_B),     KC_T,           KC_Z,           KC_LEFT_ALT,    KC_LEFT_ALT,                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, OSL(7),                                                                                                         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_LEFT_SHIFT,  KC_SPACE,       KC_LEFT_CTRL,                   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [7] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_M,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_LEFT_SHIFT,  KC_4,           KC_5,           KC_6,           KC_0,           KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_7,           KC_8,           KC_9,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    LCTL(KC_C),     LCTL(KC_X),     TD(DANCE_7),                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [8] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, STN_S1,         STN_TL,         STN_PL,         STN_HL,         STN_ST1,        KC_TRANSPARENT,                                                                 QK_STENO_GEMINI,STN_ST3,        STN_FR,         STN_PR,         STN_LR,         STN_TR,         STN_DR,         
    KC_TRANSPARENT, STN_S2,         STN_KL,         STN_WL,         STN_RL,         STN_ST2,                                        STN_ST4,        STN_RR,         STN_BR,         STN_GR,         STN_SR,         STN_ZR,         
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(0),                                                                                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    STN_A,          STN_O,          KC_TRANSPARENT,                 KC_TRANSPARENT, STN_E,          STN_U
  ),
};
const uint16_t PROGMEM combo0[] = { KC_I, KC_N, KC_G, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, ST_MACRO_0),
};

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}


const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {128,244,255}, {124,255,255}, {124,255,255}, {124,255,255}, {0,219,201}, {128,244,255}, {124,255,255}, {128,244,255}, {128,244,255}, {155,219,201}, {128,244,255}, {124,255,255}, {128,244,255}, {128,244,255}, {81,255,255}, {128,244,255}, {124,255,255}, {128,244,255}, {128,244,255}, {155,219,201}, {128,244,255}, {124,255,255}, {81,255,255}, {124,255,255}, {81,255,255}, {128,244,255}, {124,255,255}, {128,244,255}, {128,244,255}, {124,255,255}, {124,255,255}, {124,255,255}, {81,255,255}, {81,255,255}, {81,255,255}, {81,255,255}, {128,244,255}, {124,255,255}, {128,244,255}, {128,244,255}, {124,255,255}, {124,255,255}, {128,244,255}, {128,244,255}, {128,244,255}, {124,255,255}, {124,255,255}, {128,244,255}, {128,244,255}, {128,244,255}, {124,255,255}, {124,255,255}, {128,244,255}, {128,244,255}, {128,244,255}, {124,255,255}, {124,255,255}, {128,244,255}, {81,255,255}, {128,244,255}, {124,255,255}, {124,255,255}, {128,244,255}, {128,244,255}, {128,244,255}, {124,255,255}, {124,255,255}, {124,255,255}, {81,255,255}, {81,255,255}, {81,255,255}, {81,255,255} },

    [1] = { {81,255,255}, {124,255,255}, {124,255,255}, {124,255,255}, {46,255,243}, {124,255,255}, {0,255,255}, {0,255,255}, {0,245,255}, {46,255,243}, {124,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {46,255,243}, {124,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {81,255,255}, {124,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {46,255,255}, {124,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {124,255,255}, {124,255,255}, {124,255,255}, {0,219,201}, {0,219,201}, {0,219,201}, {0,219,201}, {124,255,255}, {124,255,255}, {124,255,255}, {124,255,255}, {124,255,255}, {124,255,255}, {19,255,255}, {124,255,255}, {124,255,255}, {124,255,255}, {124,255,255}, {225,245,255}, {0,255,255}, {225,245,255}, {124,255,255}, {124,255,255}, {0,255,255}, {0,255,255}, {93,245,255}, {124,255,255}, {124,255,255}, {225,245,255}, {0,0,255}, {225,245,255}, {124,255,255}, {124,255,255}, {19,255,255}, {19,255,255}, {19,255,255}, {124,255,255}, {124,255,255}, {124,255,255}, {0,219,201}, {0,219,201}, {0,219,201}, {0,219,201} },

    [2] = { {124,255,255}, {124,255,255}, {124,255,255}, {124,255,255}, {124,255,255}, {124,255,255}, {0,245,255}, {0,245,255}, {124,255,255}, {124,255,255}, {124,255,255}, {0,245,255}, {0,245,255}, {124,255,255}, {124,255,255}, {124,255,255}, {0,245,255}, {0,245,255}, {124,255,255}, {81,255,255}, {124,255,255}, {0,245,255}, {0,245,255}, {0,245,255}, {124,255,255}, {124,255,255}, {0,245,255}, {0,245,255}, {0,245,255}, {124,255,255}, {124,255,255}, {124,255,255}, {21,219,201}, {21,219,201}, {21,219,201}, {124,255,255}, {124,255,255}, {124,255,255}, {124,255,255}, {124,255,255}, {124,255,255}, {124,255,255}, {124,255,255}, {124,255,255}, {124,255,255}, {124,255,255}, {124,255,255}, {124,255,255}, {19,255,255}, {124,255,255}, {124,255,255}, {124,255,255}, {19,255,255}, {19,255,255}, {42,255,255}, {124,255,255}, {124,255,255}, {42,255,255}, {19,255,255}, {42,255,255}, {124,255,255}, {124,255,255}, {124,255,255}, {124,255,255}, {124,255,255}, {124,255,255}, {124,255,255}, {124,255,255}, {21,219,201}, {21,219,201}, {21,219,201}, {124,255,255} },

    [5] = { {61,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {61,255,255}, {139,255,255}, {61,255,255}, {61,255,255}, {61,255,255}, {61,255,255}, {139,255,255}, {61,255,255}, {61,255,255}, {61,255,255}, {61,255,255}, {139,255,255}, {61,255,255}, {61,255,255}, {61,255,255}, {61,255,255}, {139,255,255}, {61,255,255}, {61,255,255}, {61,255,255}, {61,255,255}, {139,255,255}, {61,255,255}, {61,255,255}, {61,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {61,255,255}, {61,255,255}, {61,255,255}, {61,255,255}, {61,255,255}, {139,255,255}, {61,255,255}, {61,255,255}, {139,255,255}, {139,255,255}, {61,255,255}, {61,255,255}, {61,255,255}, {139,255,255}, {139,255,255}, {61,255,255}, {61,255,255}, {61,255,255}, {139,255,255}, {139,255,255}, {61,255,255}, {61,255,255}, {61,255,255}, {139,255,255}, {139,255,255}, {61,255,255}, {61,255,255}, {61,255,255}, {0,0,0}, {139,255,255}, {61,255,255}, {61,255,255}, {61,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {61,255,255}, {61,255,255}, {61,255,255}, {61,255,255} },

    [6] = { {218,255,255}, {218,255,255}, {218,255,255}, {218,255,255}, {218,255,255}, {218,255,255}, {158,255,255}, {81,255,255}, {158,255,255}, {218,255,255}, {218,255,255}, {158,255,255}, {16,255,255}, {218,255,255}, {218,255,255}, {218,255,255}, {16,255,255}, {16,255,255}, {203,255,255}, {218,255,255}, {218,255,255}, {70,255,255}, {16,255,255}, {70,255,255}, {218,255,255}, {218,255,255}, {70,255,255}, {70,255,255}, {218,255,255}, {218,255,255}, {218,255,255}, {218,255,255}, {70,255,255}, {0,255,255}, {70,255,255}, {130,255,255}, {218,255,255}, {218,255,255}, {218,255,255}, {218,255,255}, {218,255,255}, {218,255,255}, {218,255,255}, {218,255,255}, {218,255,255}, {218,255,255}, {218,255,255}, {218,255,255}, {218,255,255}, {218,255,255}, {218,255,255}, {218,255,255}, {218,255,255}, {218,255,255}, {218,255,255}, {218,255,255}, {218,255,255}, {218,255,255}, {218,255,255}, {218,255,255}, {218,255,255}, {218,255,255}, {218,255,255}, {218,255,255}, {218,255,255}, {218,255,255}, {218,255,255}, {218,255,255}, {218,255,255}, {218,255,255}, {218,255,255}, {218,255,255} },

    [7] = { {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {124,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {124,255,255}, {124,255,255}, {124,255,255}, {43,255,255}, {43,255,255}, {124,255,255}, {124,255,255}, {124,255,255}, {43,255,255}, {43,255,255}, {124,255,255}, {124,255,255}, {124,255,255}, {43,255,255}, {43,255,255}, {218,255,255}, {124,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {124,255,255}, {124,255,255}, {124,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255} },

    [8] = { {203,255,255}, {203,255,255}, {203,255,255}, {203,255,255}, {203,255,255}, {203,255,255}, {203,255,255}, {130,255,255}, {130,255,255}, {203,255,255}, {203,255,255}, {203,255,255}, {130,255,255}, {130,255,255}, {203,255,255}, {203,255,255}, {203,255,255}, {130,255,255}, {130,255,255}, {203,255,255}, {203,255,255}, {203,255,255}, {130,255,255}, {130,255,255}, {203,255,255}, {203,255,255}, {203,255,255}, {130,255,255}, {130,255,255}, {203,255,255}, {203,255,255}, {203,255,255}, {130,255,255}, {130,255,255}, {203,255,255}, {0,255,255}, {203,255,255}, {203,255,255}, {130,255,255}, {130,255,255}, {203,255,255}, {203,255,255}, {203,255,255}, {130,255,255}, {130,255,255}, {203,255,255}, {203,255,255}, {203,255,255}, {130,255,255}, {130,255,255}, {203,255,255}, {203,255,255}, {203,255,255}, {130,255,255}, {130,255,255}, {203,255,255}, {203,255,255}, {203,255,255}, {130,255,255}, {130,255,255}, {203,255,255}, {203,255,255}, {203,255,255}, {130,255,255}, {130,255,255}, {203,255,255}, {203,255,255}, {0,255,255}, {130,255,255}, {130,255,255}, {203,255,255}, {0,255,255} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );   
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (keyboard_config.disable_layer_led) { return false; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 5:
      set_layer_color(5);
      break;
    case 6:
      set_layer_color(6);
      break;
    case 7:
      set_layer_color(7);
      break;
    case 8:
      set_layer_color(8);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_I) SS_DELAY(100) SS_TAP(X_N) SS_DELAY(100) SS_TAP(X_G));
    }
    break;

    case RGB_SLD:
        if (rawhid_state.rgb_control) {
            return false;
        }
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

static tap dance_state[8];

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
        tap_code16(KC_F);
        tap_code16(KC_F);
        tap_code16(KC_F);
    }
    if(state->count > 3) {
        tap_code16(KC_F);
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(KC_F); break;
        case SINGLE_HOLD: register_code16(LALT(KC_F)); break;
        case DOUBLE_TAP: register_code16(KC_F); register_code16(KC_F); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_F); register_code16(KC_F);
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(KC_F); break;
        case SINGLE_HOLD: unregister_code16(LALT(KC_F)); break;
        case DOUBLE_TAP: unregister_code16(KC_F); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_F); break;
    }
    dance_state[0].step = 0;
}
void on_dance_1(tap_dance_state_t *state, void *user_data);
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void on_dance_1(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LCTL(KC_V));
        tap_code16(LCTL(KC_V));
        tap_code16(LCTL(KC_V));
    }
    if(state->count > 3) {
        tap_code16(LCTL(KC_V));
    }
}

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(LCTL(KC_V)); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_Z)); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_V)); register_code16(LCTL(KC_V)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LCTL(KC_V)); register_code16(LCTL(KC_V));
    }
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(LCTL(KC_V)); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_Z)); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_V)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LCTL(KC_V)); break;
    }
    dance_state[1].step = 0;
}
void on_dance_2(tap_dance_state_t *state, void *user_data);
void dance_2_finished(tap_dance_state_t *state, void *user_data);
void dance_2_reset(tap_dance_state_t *state, void *user_data);

void on_dance_2(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LCTL(KC_C));
        tap_code16(LCTL(KC_C));
        tap_code16(LCTL(KC_C));
    }
    if(state->count > 3) {
        tap_code16(LCTL(KC_C));
    }
}

void dance_2_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP: register_code16(LCTL(KC_C)); break;
        case SINGLE_HOLD: register_code16(RCTL(KC_X)); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_C)); register_code16(LCTL(KC_C)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LCTL(KC_C)); register_code16(LCTL(KC_C));
    }
}

void dance_2_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP: unregister_code16(LCTL(KC_C)); break;
        case SINGLE_HOLD: unregister_code16(RCTL(KC_X)); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_C)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LCTL(KC_C)); break;
    }
    dance_state[2].step = 0;
}
void on_dance_3(tap_dance_state_t *state, void *user_data);
void dance_3_finished(tap_dance_state_t *state, void *user_data);
void dance_3_reset(tap_dance_state_t *state, void *user_data);

void on_dance_3(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_TAB);
        tap_code16(KC_TAB);
        tap_code16(KC_TAB);
    }
    if(state->count > 3) {
        tap_code16(KC_TAB);
    }
}

void dance_3_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[3].step = dance_step(state);
    switch (dance_state[3].step) {
        case SINGLE_TAP: register_code16(KC_TAB); break;
        case SINGLE_HOLD: register_code16(KC_LEFT_CTRL); break;
        case DOUBLE_TAP: register_code16(KC_TAB); register_code16(KC_TAB); break;
        case DOUBLE_HOLD: register_code16(LALT(LCTL(KC_TAB))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_TAB); register_code16(KC_TAB);
    }
}

void dance_3_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[3].step) {
        case SINGLE_TAP: unregister_code16(KC_TAB); break;
        case SINGLE_HOLD: unregister_code16(KC_LEFT_CTRL); break;
        case DOUBLE_TAP: unregister_code16(KC_TAB); break;
        case DOUBLE_HOLD: unregister_code16(LALT(LCTL(KC_TAB))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_TAB); break;
    }
    dance_state[3].step = 0;
}
void on_dance_4(tap_dance_state_t *state, void *user_data);
void dance_4_finished(tap_dance_state_t *state, void *user_data);
void dance_4_reset(tap_dance_state_t *state, void *user_data);

void on_dance_4(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_CAPS);
        tap_code16(KC_CAPS);
        tap_code16(KC_CAPS);
    }
    if(state->count > 3) {
        tap_code16(KC_CAPS);
    }
}

void dance_4_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[4].step = dance_step(state);
    switch (dance_state[4].step) {
        case SINGLE_TAP: register_code16(KC_CAPS); break;
        case SINGLE_HOLD: layer_move(6); break;
        case DOUBLE_TAP: register_code16(KC_CAPS); register_code16(KC_CAPS); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_CAPS); register_code16(KC_CAPS);
    }
}

void dance_4_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[4].step) {
        case SINGLE_TAP: unregister_code16(KC_CAPS); break;
        case DOUBLE_TAP: unregister_code16(KC_CAPS); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_CAPS); break;
    }
    dance_state[4].step = 0;
}
void on_dance_5(tap_dance_state_t *state, void *user_data);
void dance_5_finished(tap_dance_state_t *state, void *user_data);
void dance_5_reset(tap_dance_state_t *state, void *user_data);

void on_dance_5(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_UP);
        tap_code16(KC_UP);
        tap_code16(KC_UP);
    }
    if(state->count > 3) {
        tap_code16(KC_UP);
    }
}

void dance_5_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[5].step = dance_step(state);
    switch (dance_state[5].step) {
        case SINGLE_TAP: register_code16(KC_UP); break;
        case SINGLE_HOLD: register_code16(KC_PAGE_UP); break;
        case DOUBLE_TAP: register_code16(KC_UP); register_code16(KC_UP); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_UP); register_code16(KC_UP);
    }
}

void dance_5_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[5].step) {
        case SINGLE_TAP: unregister_code16(KC_UP); break;
        case SINGLE_HOLD: unregister_code16(KC_PAGE_UP); break;
        case DOUBLE_TAP: unregister_code16(KC_UP); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_UP); break;
    }
    dance_state[5].step = 0;
}
void on_dance_6(tap_dance_state_t *state, void *user_data);
void dance_6_finished(tap_dance_state_t *state, void *user_data);
void dance_6_reset(tap_dance_state_t *state, void *user_data);

void on_dance_6(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_DOWN);
        tap_code16(KC_DOWN);
        tap_code16(KC_DOWN);
    }
    if(state->count > 3) {
        tap_code16(KC_DOWN);
    }
}

void dance_6_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[6].step = dance_step(state);
    switch (dance_state[6].step) {
        case SINGLE_TAP: register_code16(KC_DOWN); break;
        case SINGLE_HOLD: register_code16(KC_PGDN); break;
        case DOUBLE_TAP: register_code16(KC_DOWN); register_code16(KC_DOWN); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_DOWN); register_code16(KC_DOWN);
    }
}

void dance_6_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[6].step) {
        case SINGLE_TAP: unregister_code16(KC_DOWN); break;
        case SINGLE_HOLD: unregister_code16(KC_PGDN); break;
        case DOUBLE_TAP: unregister_code16(KC_DOWN); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_DOWN); break;
    }
    dance_state[6].step = 0;
}
void on_dance_7(tap_dance_state_t *state, void *user_data);
void dance_7_finished(tap_dance_state_t *state, void *user_data);
void dance_7_reset(tap_dance_state_t *state, void *user_data);

void on_dance_7(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LCTL(KC_V));
        tap_code16(LCTL(KC_V));
        tap_code16(LCTL(KC_V));
    }
    if(state->count > 3) {
        tap_code16(LCTL(KC_V));
    }
}

void dance_7_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[7].step = dance_step(state);
    switch (dance_state[7].step) {
        case SINGLE_TAP: register_code16(LCTL(KC_V)); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_Z)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LCTL(KC_V)); register_code16(LCTL(KC_V));
    }
}

void dance_7_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[7].step) {
        case SINGLE_TAP: unregister_code16(LCTL(KC_V)); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_Z)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LCTL(KC_V)); break;
    }
    dance_state[7].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
        [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset),
        [DANCE_3] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_3, dance_3_finished, dance_3_reset),
        [DANCE_4] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_4, dance_4_finished, dance_4_reset),
        [DANCE_5] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_5, dance_5_finished, dance_5_reset),
        [DANCE_6] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_6, dance_6_finished, dance_6_reset),
        [DANCE_7] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_7, dance_7_finished, dance_7_reset),
};
