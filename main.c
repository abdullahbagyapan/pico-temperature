#include "pico/stdlib.h"

#include "temperature/temperature.c"
#include "uart/uart.h"


int main() {

    UART_Init();
    TEMPERATURE_Init();

    while (1) {

        uint8_t ui8TemperatureCelsius = TEMPERATURE_Read();

        UART_PutChar(ui8TemperatureCelsius);
        UART_PutChar('\n');

        sleep_ms(1000);
    }

}