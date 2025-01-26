/*
 * serial.c
 *
 *  Created on: Nov 16, 2024
 *      Author: cbusq
 */

#include "main.h"

extern UART_HandleTypeDef huart1;
#define SERIAL_TIME_OUT		100

int __io_putchar(int ch) 
{

	int retStat = 0;
	HAL_StatusTypeDef HAL_Status = HAL_OK;
	unsigned char c = (unsigned char) (ch & 0xFF);

	HAL_Status = HAL_UART_Transmit( &huart1, &c, 1, SERIAL_TIME_OUT);

	if(HAL_Status != HAL_OK) {
		retStat = -1;
	} else {
		retStat = 0;
	}
	return retStat;
}
