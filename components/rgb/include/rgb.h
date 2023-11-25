#pragma once

typedef enum {
    RGB_RED,
    RGB_GREEN,
    RGB_BLUE
} rgb_led_t;

typedef enum {
    RGB_ON,
    RGB_OFF
} rgb_state_t;

void rgb_init();
void rgb_ctrl(rgb_led_t led, rgb_state_t state);
