// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

/*******************************************************************************
  88888888888 888      d8b                .d888 d8b 888               d8b
      888     888      Y8P               d88P"  Y8P 888               Y8P
      888     888                        888        888
      888     88888b.  888 .d8888b       888888 888 888  .d88b.       888 .d8888b
      888     888 "88b 888 88K           888    888 888 d8P  Y8b      888 88K
      888     888  888 888 "Y8888b.      888    888 888 88888888      888 "Y8888b.
      888     888  888 888      X88      888    888 888 Y8b.          888      X88
      888     888  888 888  88888P'      888    888 888  "Y8888       888  88888P'
                                                        888                 888
                                                        888                 888
                                                        888                 888
     .d88b.   .d88b.  88888b.   .d88b.  888d888 8888b.  888888 .d88b.   .d88888
    d88P"88b d8P  Y8b 888 "88b d8P  Y8b 888P"      "88b 888   d8P  Y8b d88" 888
    888  888 88888888 888  888 88888888 888    .d888888 888   88888888 888  888
    Y88b 888 Y8b.     888  888 Y8b.     888    888  888 Y88b. Y8b.     Y88b 888
     "Y88888  "Y8888  888  888  "Y8888  888    "Y888888  "Y888 "Y8888   "Y88888
         888
    Y8b d88P
     "Y88P"
*******************************************************************************/

#pragma once
// clang-format off
enum { ENABLED_RGB_MATRIX_EFFECTS = 0
    | (1ULL << 0x00)

#ifdef ENABLE_RGB_MATRIX_ALPHAS_MODS
    | (1ULL << 0x01)
#endif

#ifdef ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN
    | (1ULL << 0x02)
#endif

#ifdef ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT
    | (1ULL << 0x03)
#endif

#ifdef ENABLE_RGB_MATRIX_BREATHING
    | (1ULL << 0x04)
#endif

#ifdef ENABLE_RGB_MATRIX_BAND_SAT
    | (1ULL << 0x05)
#endif

#ifdef ENABLE_RGB_MATRIX_BAND_VAL
    | (1ULL << 0x06)
#endif

#ifdef ENABLE_RGB_MATRIX_BAND_PINWHEEL_SAT
    | (1ULL << 0x07)
#endif

#ifdef ENABLE_RGB_MATRIX_BAND_PINWHEEL_VAL
    | (1ULL << 0x08)
#endif

#ifdef ENABLE_RGB_MATRIX_BAND_SPIRAL_SAT
    | (1ULL << 0x09)
#endif

#ifdef ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL
    | (1ULL << 0x0A)
#endif

#ifdef ENABLE_RGB_MATRIX_CYCLE_ALL
    | (1ULL << 0x0B)
#endif

#ifdef ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
    | (1ULL << 0x0C)
#endif

#ifdef ENABLE_RGB_MATRIX_CYCLE_UP_DOWN
    | (1ULL << 0x0D)
#endif

#ifdef ENABLE_RGB_MATRIX_CYCLE_OUT_IN
    | (1ULL << 0x0E)
#endif

#ifdef ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL
    | (1ULL << 0x0F)
#endif

#ifdef ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
    | (1ULL << 0x10)
#endif

#ifdef ENABLE_RGB_MATRIX_CYCLE_PINWHEEL
    | (1ULL << 0x11)
#endif

#ifdef ENABLE_RGB_MATRIX_CYCLE_SPIRAL
    | (1ULL << 0x12)
#endif

#ifdef ENABLE_RGB_MATRIX_DUAL_BEACON
    | (1ULL << 0x13)
#endif

#ifdef ENABLE_RGB_MATRIX_RAINBOW_BEACON
    | (1ULL << 0x14)
#endif

#ifdef ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS
    | (1ULL << 0x15)
#endif

#ifdef ENABLE_RGB_MATRIX_RAINDROPS
    | (1ULL << 0x16)
#endif

#ifdef ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS
    | (1ULL << 0x17)
#endif

#ifdef ENABLE_RGB_MATRIX_HUE_BREATHING
    | (1ULL << 0x18)
#endif

#ifdef ENABLE_RGB_MATRIX_HUE_PENDULUM
    | (1ULL << 0x19)
#endif

#ifdef ENABLE_RGB_MATRIX_HUE_WAVE
    | (1ULL << 0x1A)
#endif

#ifdef ENABLE_RGB_MATRIX_PIXEL_FRACTAL
    | (1ULL << 0x1B)
#endif

#ifdef ENABLE_RGB_MATRIX_PIXEL_FLOW
    | (1ULL << 0x1C)
#endif

#ifdef ENABLE_RGB_MATRIX_PIXEL_RAIN
    | (1ULL << 0x1D)
#endif

#ifdef RGB_MATRIX_FRAMEBUFFER_EFFECTS

#ifdef ENABLE_RGB_MATRIX_TYPING_HEATMAP
    | (1ULL << 0x1E)
#endif
#endif

#ifdef RGB_MATRIX_FRAMEBUFFER_EFFECTS

#ifdef ENABLE_RGB_MATRIX_DIGITAL_RAIN
    | (1ULL << 0x1F)
#endif
#endif

#ifdef RGB_MATRIX_KEYREACTIVE_ENABLED

#ifdef ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
    | (1ULL << 0x20)
#endif
#endif

#ifdef RGB_MATRIX_KEYREACTIVE_ENABLED

#ifdef ENABLE_RGB_MATRIX_SOLID_REACTIVE
    | (1ULL << 0x21)
#endif
#endif

#ifdef RGB_MATRIX_KEYREACTIVE_ENABLED

#ifdef ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE
    | (1ULL << 0x22)
#endif
#endif

#ifdef RGB_MATRIX_KEYREACTIVE_ENABLED

#ifdef ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
    | (1ULL << 0x23)
#endif
#endif

#ifdef RGB_MATRIX_KEYREACTIVE_ENABLED

#ifdef ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS
    | (1ULL << 0x24)
#endif
#endif

#ifdef RGB_MATRIX_KEYREACTIVE_ENABLED

#ifdef ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS
    | (1ULL << 0x25)
#endif
#endif

#ifdef RGB_MATRIX_KEYREACTIVE_ENABLED

#ifdef ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS
    | (1ULL << 0x26)
#endif
#endif

#ifdef RGB_MATRIX_KEYREACTIVE_ENABLED

#ifdef ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
    | (1ULL << 0x27)
#endif
#endif

#ifdef RGB_MATRIX_KEYREACTIVE_ENABLED

#ifdef ENABLE_RGB_MATRIX_SPLASH
    | (1ULL << 0x28)
#endif
#endif

#ifdef RGB_MATRIX_KEYREACTIVE_ENABLED

#ifdef ENABLE_RGB_MATRIX_MULTISPLASH
    | (1ULL << 0x29)
#endif
#endif

#ifdef RGB_MATRIX_KEYREACTIVE_ENABLED

#ifdef ENABLE_RGB_MATRIX_SOLID_SPLASH
    | (1ULL << 0x2A)
#endif
#endif

#ifdef RGB_MATRIX_KEYREACTIVE_ENABLED

#ifdef ENABLE_RGB_MATRIX_SOLID_MULTISPLASH
    | (1ULL << 0x2B)
#endif
#endif
};
static const uint8_t rgb_matrix_effect_map[][2] PROGMEM = {
{ 0x00, RGB_MATRIX_SOLID_COLOR},

#ifdef ENABLE_RGB_MATRIX_ALPHAS_MODS
{ 0x01, RGB_MATRIX_ALPHAS_MODS},
#endif

#ifdef ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN
{ 0x02, RGB_MATRIX_GRADIENT_UP_DOWN},
#endif

#ifdef ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT
{ 0x03, RGB_MATRIX_GRADIENT_LEFT_RIGHT},
#endif

#ifdef ENABLE_RGB_MATRIX_BREATHING
{ 0x04, RGB_MATRIX_BREATHING},
#endif

#ifdef ENABLE_RGB_MATRIX_BAND_SAT
{ 0x05, RGB_MATRIX_BAND_SAT},
#endif

#ifdef ENABLE_RGB_MATRIX_BAND_VAL
{ 0x06, RGB_MATRIX_BAND_VAL},
#endif

#ifdef ENABLE_RGB_MATRIX_BAND_PINWHEEL_SAT
{ 0x07, RGB_MATRIX_BAND_PINWHEEL_SAT},
#endif

#ifdef ENABLE_RGB_MATRIX_BAND_PINWHEEL_VAL
{ 0x08, RGB_MATRIX_BAND_PINWHEEL_VAL},
#endif

#ifdef ENABLE_RGB_MATRIX_BAND_SPIRAL_SAT
{ 0x09, RGB_MATRIX_BAND_SPIRAL_SAT},
#endif

#ifdef ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL
{ 0x0A, RGB_MATRIX_BAND_SPIRAL_VAL},
#endif

#ifdef ENABLE_RGB_MATRIX_CYCLE_ALL
{ 0x0B, RGB_MATRIX_CYCLE_ALL},
#endif

#ifdef ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
{ 0x0C, RGB_MATRIX_CYCLE_LEFT_RIGHT},
#endif

#ifdef ENABLE_RGB_MATRIX_CYCLE_UP_DOWN
{ 0x0D, RGB_MATRIX_CYCLE_UP_DOWN},
#endif

#ifdef ENABLE_RGB_MATRIX_CYCLE_OUT_IN
{ 0x0E, RGB_MATRIX_CYCLE_OUT_IN},
#endif

#ifdef ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL
{ 0x0F, RGB_MATRIX_CYCLE_OUT_IN_DUAL},
#endif

#ifdef ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
{ 0x10, RGB_MATRIX_RAINBOW_MOVING_CHEVRON},
#endif

#ifdef ENABLE_RGB_MATRIX_CYCLE_PINWHEEL
{ 0x11, RGB_MATRIX_CYCLE_PINWHEEL},
#endif

#ifdef ENABLE_RGB_MATRIX_CYCLE_SPIRAL
{ 0x12, RGB_MATRIX_CYCLE_SPIRAL},
#endif

#ifdef ENABLE_RGB_MATRIX_DUAL_BEACON
{ 0x13, RGB_MATRIX_DUAL_BEACON},
#endif

#ifdef ENABLE_RGB_MATRIX_RAINBOW_BEACON
{ 0x14, RGB_MATRIX_RAINBOW_BEACON},
#endif

#ifdef ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS
{ 0x15, RGB_MATRIX_RAINBOW_PINWHEELS},
#endif

#ifdef ENABLE_RGB_MATRIX_RAINDROPS
{ 0x16, RGB_MATRIX_RAINDROPS},
#endif

#ifdef ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS
{ 0x17, RGB_MATRIX_JELLYBEAN_RAINDROPS},
#endif

#ifdef ENABLE_RGB_MATRIX_HUE_BREATHING
{ 0x18, RGB_MATRIX_HUE_BREATHING},
#endif

#ifdef ENABLE_RGB_MATRIX_HUE_PENDULUM
{ 0x19, RGB_MATRIX_HUE_PENDULUM},
#endif

#ifdef ENABLE_RGB_MATRIX_HUE_WAVE
{ 0x1A, RGB_MATRIX_HUE_WAVE},
#endif

#ifdef ENABLE_RGB_MATRIX_PIXEL_FRACTAL
{ 0x1B, RGB_MATRIX_PIXEL_FRACTAL},
#endif

#ifdef ENABLE_RGB_MATRIX_PIXEL_FLOW
{ 0x1C, RGB_MATRIX_PIXEL_FLOW},
#endif

#ifdef ENABLE_RGB_MATRIX_PIXEL_RAIN
{ 0x1D, RGB_MATRIX_PIXEL_RAIN},
#endif

#ifdef RGB_MATRIX_FRAMEBUFFER_EFFECTS

#ifdef ENABLE_RGB_MATRIX_TYPING_HEATMAP
{ 0x1E, RGB_MATRIX_TYPING_HEATMAP},
#endif
#endif

#ifdef RGB_MATRIX_FRAMEBUFFER_EFFECTS

#ifdef ENABLE_RGB_MATRIX_DIGITAL_RAIN
{ 0x1F, RGB_MATRIX_DIGITAL_RAIN},
#endif
#endif

#ifdef RGB_MATRIX_KEYREACTIVE_ENABLED

#ifdef ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
{ 0x20, RGB_MATRIX_SOLID_REACTIVE_SIMPLE},
#endif
#endif

#ifdef RGB_MATRIX_KEYREACTIVE_ENABLED

#ifdef ENABLE_RGB_MATRIX_SOLID_REACTIVE
{ 0x21, RGB_MATRIX_SOLID_REACTIVE},
#endif
#endif

#ifdef RGB_MATRIX_KEYREACTIVE_ENABLED

#ifdef ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE
{ 0x22, RGB_MATRIX_SOLID_REACTIVE_WIDE},
#endif
#endif

#ifdef RGB_MATRIX_KEYREACTIVE_ENABLED

#ifdef ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
{ 0x23, RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE},
#endif
#endif

#ifdef RGB_MATRIX_KEYREACTIVE_ENABLED

#ifdef ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS
{ 0x24, RGB_MATRIX_SOLID_REACTIVE_CROSS},
#endif
#endif

#ifdef RGB_MATRIX_KEYREACTIVE_ENABLED

#ifdef ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS
{ 0x25, RGB_MATRIX_SOLID_REACTIVE_MULTICROSS},
#endif
#endif

#ifdef RGB_MATRIX_KEYREACTIVE_ENABLED

#ifdef ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS
{ 0x26, RGB_MATRIX_SOLID_REACTIVE_NEXUS},
#endif
#endif

#ifdef RGB_MATRIX_KEYREACTIVE_ENABLED

#ifdef ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
{ 0x27, RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS},
#endif
#endif

#ifdef RGB_MATRIX_KEYREACTIVE_ENABLED

#ifdef ENABLE_RGB_MATRIX_SPLASH
{ 0x28, RGB_MATRIX_SPLASH},
#endif
#endif

#ifdef RGB_MATRIX_KEYREACTIVE_ENABLED

#ifdef ENABLE_RGB_MATRIX_MULTISPLASH
{ 0x29, RGB_MATRIX_MULTISPLASH},
#endif
#endif

#ifdef RGB_MATRIX_KEYREACTIVE_ENABLED

#ifdef ENABLE_RGB_MATRIX_SOLID_SPLASH
{ 0x2A, RGB_MATRIX_SOLID_SPLASH},
#endif
#endif

#ifdef RGB_MATRIX_KEYREACTIVE_ENABLED

#ifdef ENABLE_RGB_MATRIX_SOLID_MULTISPLASH
{ 0x2B, RGB_MATRIX_SOLID_MULTISPLASH},
#endif
#endif
};

uint8_t rgb_matrix_effect_to_id(uint8_t val) {
    for(uint8_t i = 0; i < ARRAY_SIZE(rgb_matrix_effect_map); i++) {
        if (pgm_read_byte(&rgb_matrix_effect_map[i][1]) == val)
            return pgm_read_byte(&rgb_matrix_effect_map[i][0]);
    }
    return 0xFF;
}

uint8_t rgb_matrix_id_to_effect(uint8_t val) {
    for(uint8_t i = 0; i < ARRAY_SIZE(rgb_matrix_effect_map); i++) {
        if (pgm_read_byte(&rgb_matrix_effect_map[i][0]) == val)
            return pgm_read_byte(&rgb_matrix_effect_map[i][1]);
    }
    return 0xFF;
}