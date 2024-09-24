/*
 * Ex6.c
 *
 *  Created on: Sep 22, 2024
 *      Author: dangk
 */

#include "main.h"
#include "Ex6.h"

void init_Exercise6()
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

void run_Exercise6(int count)
{
	int ledNum = count % 12;
	switch (ledNum) {
		case 0:
			HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, RESET);
			break;
		case 1:
			HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, RESET);
			break;
		case 2:
			HAL_GPIO_WritePin(GREEN_1_GPIO_Port, GREEN_1_Pin, RESET);
			break;
		case 3:
			HAL_GPIO_WritePin(YELLOW_1_GPIO_Port, YELLOW_1_Pin, RESET);
			break;
		case 4:
			HAL_GPIO_WritePin(RED_1_GPIO_Port, RED_1_Pin, RESET);
			break;
		case 5:
			HAL_GPIO_WritePin(GREEN_2_GPIO_Port, GREEN_2_Pin, RESET);
			break;
		case 6:
			HAL_GPIO_WritePin(YELLOW_2_GPIO_Port, YELLOW_2_Pin, RESET);
			break;
		case 7:
			HAL_GPIO_WritePin(RED_2_GPIO_Port, RED_2_Pin, RESET);
			break;
		case 8:
			HAL_GPIO_WritePin(GREEN_3_GPIO_Port, GREEN_3_Pin, RESET);
			break;
		case 9:
			HAL_GPIO_WritePin(YELLOW_3_GPIO_Port, YELLOW_3_Pin, RESET);
			break;
		case 10:
			HAL_GPIO_WritePin(RED_3_GPIO_Port, RED_3_Pin, RESET);
			break;
		case 11:
			HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, RESET);
			break;
		default:
			break;
	}
}
