/*
 @module: TEMPERATURE
 @author: Abdullah Bagyapan
 @date:   18/04/2024
*/

/*================================== Libraries ==================================*/

#include "stdint.h"


/*================================== Defined Variables ==================================*/


#define TEMPERATURE_GPIO_PIN        29
#define TEMPERATURE_ADC_PIN         4


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
float TEMPERATURE_Read(void);