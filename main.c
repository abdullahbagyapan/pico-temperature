#include "pico/stdlib.h"
#include "stdio.h"


#include "temperature/temperature.c"
#include "uart/uart.h"


int main() {

    UART_Init();
    TEMPERATURE_Init();

    while (1) {

        float fTemperatureC = TEMPERATURE_Read();

        printf("Temperature: %0.2f \n", fTemperatureC);

        sleep_ms(1000);
    }

}