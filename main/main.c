#include <stdio.h>

#include "../components/ble_rgb/include/ble_rgb.h"
#include "../components/rgb/include/rgb.h"

void app_main(void)
{
    rgb_init();
    ble_rgb_init();
}
