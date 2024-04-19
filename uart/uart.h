/*
 @module: UART
 @author: Abdullah Bagyapan
 @date:   18/04/2024
*/

/*================================== Libraries ==================================*/

#include "pico/stdlib.h"


/*================================== Defined Variables ==================================*/

#define UART_INSTANCE               uart0
#define UART_BAUDRATE               115200

#define UART_TX_PIN                 0
#define UART_RX_PIN                 1


/*================================== Functions ==================================*/


/*
 @brief:  Initialize UART module

 @author  Abdullah Bagyapan

 @date    18/04/2024

 @param   None

 @return  None
*/
void UART_Init(void);
