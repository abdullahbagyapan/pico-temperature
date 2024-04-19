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
static float TEMPERATURE_Calculate(uint16_t ui16ADC_voltage) {

    // T = 27 - (ADC_voltage - 0.706)/0.001721
    // The given above formula according to the RP2040 datasheet

    const float fConversionFactor = 3.3f / (1 << 12);

    float fADC = (float)(ui16ADC_voltage) * fConversionFactor;
    float fTemperatureC = 27.0f - (fADC - 0.706f) / 0.001721f;
    
    return fTemperatureC;

}


void TEMPERATURE_Init(void) {

    // Initialize gpio
    gpio_init(TEMPERATURE_GPIO_PIN);

    // Initialize hardware AD converter
    adc_init();

    // Enable onboard temperature sensor
    adc_set_temp_sensor_enabled(true);

    // Set onboard temperature sensor as ADC
    adc_select_input(TEMPERATURE_ADC_PIN);
    
}

float TEMPERATURE_Read(void) {

    float ui8TemperatureCelsius;

    uint16_t ui16ADC_voltage = adc_read();

    ui8TemperatureCelsius = TEMPERATURE_Calculate(ui16ADC_voltage);

    return ui8TemperatureCelsius;
}