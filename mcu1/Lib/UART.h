
/**
 * @file gps.h
 * @brief GPS driver header file
 */
#ifndef __UART_H__
#define __UART_H__

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"
#include "esp_system.h"
#include "driver/uart.h"
#include "driver/gpio.h"
#include "sdkconfig.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>




#define UART_UART UART_NUM_1
#define UART_UART_TXD (GPIO_NUM_9)
#define UART_UART_RXD (GPIO_NUM_10)

typedef struct{
	float temp;
	float pH;
	float DO;
	float EC;
    float KD;
    float VD; 
}data_type;




esp_err_t UART_init();


#ifdef __cplusplus
}
#endif // __cplusplus

#endif // __GPS_H__