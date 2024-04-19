/*
 @module: TEMPERATURE
 @author: Abdullah Bagyapan
 @date:   19/04/2024
*/

/*================================== Libraries ==================================*/


#include "temperature.h"

#include "pico/stdlib.h"
#include "hardware/adc.h"


/*================================== Functions ==================================*/


/*
 @brief:  Calculate ADC value according to the formula

 @author  Abdullah Bagyapan

 @date    19/04/2024

 @param   uint16_t ui16ADC_voltage, The analog data from temperature sensor

 @return  The temperature, in celsius format
*/
static inline uint8_t _TEMPERATURE_Calculate_Celsius(uint16_t ui16ADC_voltage) {

    // T = 27 - (ADC_voltage - 0.706)/0.001721
    // The given above formula according to the RP2040 datasheet

    return 27 - (ui16ADC_voltage - 0.706) / 0.001721;

}


void TEMPERATURE_Init(void) {

    // Initialize onboard temperature sensor
    adc_gpio_init(TEMPERATURE_GPIO_PIN);

    // Set onboard temperature sensor as ADC
    adc_select_input(TEMPERATURE_ADC_PIN);
    
}

uint8_t TEMPERATURE_Read(void) {

    uint8_t ui8TemperatureCelsius;

    uint16_t ui16ADC_voltage = adc_read();

    ui8TemperatureCelsius = _TEMPERATURE_Calculate_Celsius(ui16ADC_voltage);

    return ui8TemperatureCelsius;
}