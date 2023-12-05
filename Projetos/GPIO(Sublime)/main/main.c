#include <stdio.h>
#include <freertos/task.h>
#include "sdkconfig.h"
#include <freertos/FreeRTOS.h>
#define pinoE 10

void app_main(void)
{
	esp_rom_gpio_pad_select_gpio(pinoE);
	gpio_set_direction(pinoE,GPIO_MODE_INPUT);
	gpio_pullup_en(pinoE);
	gpio_pulldown_dis(pinoE);

	while(1) {
		bool state_pino = gpio_get_level(pinoE);

	}


}
