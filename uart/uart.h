/*
 @module: UART
 @author: Abdullah Bagyapan
 @date:   18/04/2024
*/

/*================================== Libraries ==================================*/


#include "stdint.h"
#include "pico/stdlib.h"


/*================================== Defined Variables ==================================*/


#define UART_DEFAULT_INSTANCE           uart0
#define UART_BAUDRATE                   115200


/*================================== Functions ==================================*/


/*
 @brief:  Initialize UART

 @author  Abdullah Bagyapan

 @date    18/04/2024

 @param   None

 @return  None
*/
void UART_Init(void);



/*
 @brief:  Transmit a byte data by UART

 @author  Abdullah Bagyapan

 @date    18/04/2024

 @param   The 1 byte data

 @return  None
*/
void UART_PutChar(uint8_t ui8Data);


/*
 @brief:  Transmit string data by UART

 @author  Abdullah Bagyapan

 @date    19/04/2024

 @param   The string data

 @return  None
*/
void UART_PutString(char *ui8pData);