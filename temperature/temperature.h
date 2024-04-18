/*
 @module: TEMPERATURE
 @author: Abdullah Bagyapan
 @date:   18/04/2024
*/

/*================================== Libraries ==================================*/

#include "stdint.h"


/*================================== Functions ==================================*/


/*
 @brief:  Initialize temperature sensor

 @author  Abdullah Bagyapan

 @date    18/04/2024

 @param   None

 @return  None
*/
void TEMPERATURE_Init(void);



/*
 @brief:  Read data from temperature sensor

 @author  Abdullah Bagyapan

 @date    18/04/2024

 @param   None

 @return  The data, read from sensor
*/
uint8_t TEMPERATURE_Read(void);