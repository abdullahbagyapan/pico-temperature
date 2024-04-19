/*
 @module: UART
 @author: Abdullah Bagyapan
 @date:   18/04/2024
*/

/*================================== Libraries ==================================*/


#include "stdint.h"


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
void UART_PutString(uint8_t *ui8pData);