/*
 * HeartBeat.c
 *
 *  Created on: Sep 7, 2024
 *      Author: cbusq
 */

#include <cmsis_os.h>

#include "main.h"

#define LED_DELAY	1000	// in Ticks

uint32_t counter = 0;

void HeartBeat_(void *args)
{
	HAL_GPIO_WritePin(LD4_GPIO_Port, LD4_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LD3_GPIO_Port, LD3_Pin, GPIO_PIN_SET);

	while(1){
		osDelay(LED_DELAY);
		HAL_GPIO_TogglePin(LD4_GPIO_Port, LD4_Pin);
		HAL_GPIO_TogglePin(LD3_GPIO_Port, LD3_Pin);
		counter ++;
	}
}
