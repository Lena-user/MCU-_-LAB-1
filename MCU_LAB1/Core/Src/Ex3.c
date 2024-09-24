/*
 * Ex3.c
 *
 *  Created on: Sep 22, 2024
 *      Author: dangk
 */

#include "main.h"
#include "Ex3.h"

void init_Exercise3()
{
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, SET);
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, SET);
	HAL_GPIO_WritePin(RED_1_GPIO_Port, RED_1_Pin, SET);
	HAL_GPIO_WritePin(YELLOW_1_GPIO_Port, YELLOW_1_Pin, SET);
	HAL_GPIO_WritePin(GREEN_1_GPIO_Port, GREEN_1_Pin, SET);
	HAL_GPIO_WritePin(RED_2_GPIO_Port, RED_2_Pin, SET);
	HAL_GPIO_WritePin(YELLOW_2_GPIO_Port, YELLOW_2_Pin, SET);
	HAL_GPIO_WritePin(GREEN_2_GPIO_Port, GREEN_2_Pin, SET);
	HAL_GPIO_WritePin(RED_3_GPIO_Port, RED_3_Pin, SET);
	HAL_GPIO_WritePin(YELLOW_3_GPIO_Port, YELLOW_3_Pin, SET);
	HAL_GPIO_WritePin(GREEN_3_GPIO_Port, GREEN_3_Pin, SET);
}

void run_Exercise3(int count)
{
	int timerLed = count % 5;
	int stateTraffic = ((count % 10)-timerLed)/5;
	switch (stateTraffic)
	{
	case 0:
		HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
		HAL_GPIO_WritePin(RED_2_GPIO_Port, RED_2_Pin, SET);
		HAL_GPIO_WritePin(RED_3_GPIO_Port, RED_3_Pin, RESET);
		HAL_GPIO_WritePin(YELLOW_3_GPIO_Port, YELLOW_3_Pin, SET);
		HAL_GPIO_WritePin(GREEN_3_GPIO_Port, GREEN_3_Pin, SET);
		HAL_GPIO_WritePin(RED_1_GPIO_Port, RED_1_Pin, RESET);
		HAL_GPIO_WritePin(YELLOW_1_GPIO_Port, YELLOW_1_Pin, SET);
		HAL_GPIO_WritePin(GREEN_1_GPIO_Port, GREEN_1_Pin, SET);
		switch (timerLed)
		{
			case 0: case 1: case 2:
				HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, RESET);
				HAL_GPIO_WritePin(GREEN_2_GPIO_Port, GREEN_2_Pin, RESET);
				HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, SET);
				HAL_GPIO_WritePin(YELLOW_2_GPIO_Port, YELLOW_2_Pin, SET);
				break;
			case 3: case 4:
				HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, SET);
				HAL_GPIO_WritePin(GREEN_2_GPIO_Port, GREEN_2_Pin, SET);
				HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, RESET);
				HAL_GPIO_WritePin(YELLOW_2_GPIO_Port, YELLOW_2_Pin, RESET);
			default:
				break;
		}
		break;
	case 1:
		HAL_GPIO_WritePin(RED_1_GPIO_Port, RED_1_Pin, SET);
		HAL_GPIO_WritePin(RED_3_GPIO_Port, RED_3_Pin, SET);
		HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, RESET);
		HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, SET);
		HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, SET);
		HAL_GPIO_WritePin(RED_2_GPIO_Port, RED_2_Pin, RESET);
		HAL_GPIO_WritePin(YELLOW_2_GPIO_Port, YELLOW_2_Pin, SET);
		HAL_GPIO_WritePin(GREEN_2_GPIO_Port, GREEN_2_Pin, SET);

		switch (timerLed)
		{
			case 0: case 1: case 2:
				HAL_GPIO_WritePin(GREEN_1_GPIO_Port, GREEN_1_Pin, RESET);
				HAL_GPIO_WritePin(GREEN_3_GPIO_Port, GREEN_3_Pin, RESET);
				HAL_GPIO_WritePin(YELLOW_1_GPIO_Port, YELLOW_1_Pin, SET);
				HAL_GPIO_WritePin(YELLOW_3_GPIO_Port, YELLOW_3_Pin, SET);
				break;
			case 3: case 4:
				HAL_GPIO_WritePin(GREEN_1_GPIO_Port, GREEN_1_Pin, SET);
				HAL_GPIO_WritePin(GREEN_3_GPIO_Port, GREEN_3_Pin, SET);
				HAL_GPIO_WritePin(YELLOW_1_GPIO_Port, YELLOW_1_Pin, RESET);
				HAL_GPIO_WritePin(YELLOW_3_GPIO_Port, YELLOW_3_Pin, RESET);
			default:
				break;
		}
		break;
	default:
		break;
	}
}

