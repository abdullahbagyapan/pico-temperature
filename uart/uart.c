/*
 @module: UART
 @author: Abdullah Bagyapan
 @date:   19/04/2024
*/

/*================================== Libraries ==================================*/


#include "uart.h"

#include "pico/stdlib.h"


/*================================== Functions ==================================*/



void UART_Init(void) {

    // Set UART instance and baudrate
    uart_init(UART_DEFAULT_INSTANCE, UART_BAUDRATE);

    // set gpio 0 & 1 pins as UART
    gpio_set_function(0, GPIO_FUNC_UART);
    gpio_set_function(1, GPIO_FUNC_UART);

}


void UART_PutChar(uint8_t ui8Data) {

    uart_putc(UART_DEFAULT_INSTANCE, ui8Data);

}


void UART_PutString(char *ui8pData) {

    uart_puts(UART_DEFAULT_INSTANCE, ui8pData);

}