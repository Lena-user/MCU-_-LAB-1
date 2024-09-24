/*
 * Ex1.c
 *
 *  Created on: Sep 22, 2024
 *      Author: dangk
 */

#include "Ex1.h"
#include "main.h"

void init_Exercise1()
{
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, SET);
}
void run_Exercise1(int count)
{
	if (count == 0)
	{
		HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
	}

	if (count != 0 && count % 2 == 0)
	{
		HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
		HAL_GPIO_TogglePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin);
	}
}
