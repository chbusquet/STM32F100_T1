/*
 * SerialBeat.c
 *
 *  Created on: Nov 16, 2024
 *      Author: cbusq
 */


#include <cmsis_os.h>

#include <stdio.h>
#include "main.h"

#include "../App/Command/Command.h"

void serial_beat(void)
{
	while(1){
		printf("Hello Dear !\r\n");
		osDelay(1000);
	}
}
