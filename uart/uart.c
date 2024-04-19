/*
 @module: UART
 @author: Abdullah Bagyapan
 @date:   18/04/2024
*/

/*================================== Libraries ==================================*/

#include "uart.h"

#include "pico/stdlib.h"


/*================================== Functions ==================================*/


void UART_Init(void) {

    stdio_uart_init_full(UART_INSTANCE, UART_BAUDRATE, UART_TX_PIN, UART_RX_PIN);

}
