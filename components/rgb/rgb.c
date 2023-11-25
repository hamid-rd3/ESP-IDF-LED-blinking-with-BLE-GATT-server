#include <stdio.h>
#include "rgb.h"
#include "driver/gpio.h"

#define RED_PIN     CONFIG_RED_LED_PIN
#define GREEN_PIN   CONFIG_GREEN_LED_PIN
#define BLUE_PIN    CONFIG_BLUE_LED_PIN

void rgb_init()
{
    gpio_set_direction(RED_PIN, GPIO_MODE_OUTPUT);
    gpio_set_direction(GREEN_PIN, GPIO_MODE_OUTPUT);
    gpio_set_direction(BLUE_PIN, GPIO_MODE_OUTPUT);
}

void rgb_ctrl(rgb_led_t led, rgb_state_t state)
{
#ifdef CONFIG_LED_ACTIVE_HIGH
    if (led == RGB_RED)
        gpio_set_level(RED_PIN, (state == RGB_ON) ? 1 : 0);
    
    if (led == RGB_GREEN)
        gpio_set_level(GREEN_PIN, (state == RGB_ON) ? 1 : 0);
    
    if (led == RGB_BLUE)
        gpio_set_level(BLUE_PIN, (state == RGB_ON) ? 1 : 0);

#endif

#ifdef CONFIG_LED_ACTIVE_LOW
    if (led == RGB_RED)
        gpio_set_level(RED_PIN, (state == RGB_ON) ? 0 : 1);
    
    if (led == RGB_GREEN)
        gpio_set_level(GREEN_PIN, (state == RGB_ON) ? 0 : 1);
    
    if (led == RGB_BLUE)
        gpio_set_level(BLUE_PIN, (state == RGB_ON) ? 0 : 1);
#endif
}
