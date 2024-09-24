/*
 * Ex4.c
 *
 *  Created on: Sep 22, 2024
 *      Author: dangk
 */


#include "main.h"
#include "Ex4.h"

void init_Exercise4()
{
	HAL_GPIO_WritePin(LED_0_GPIO_Port, LED_0_Pin, SET);
	HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, SET);
	HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, SET);
	HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, SET);
	HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, SET);
	HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, SET);
	HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, SET);
}

void displayNumber(int number)
{
	switch (number) {
		case 0:
			HAL_GPIO_WritePin(LED_0_GPIO_Port, LED_0_Pin, RESET);
			HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, RESET);
			HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, RESET);
			HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, RESET);
			HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, RESET);
			HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, RESET);
			HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, SET);
			break;
		case 1:
			HAL_GPIO_WritePin(LED_0_GPIO_Port, LED_0_Pin, SET);
			HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, RESET);
			HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, RESET);
			HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, SET);
			HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, SET);
			HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, SET);
			HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, SET);
			break;
		case 2:
			HAL_GPIO_WritePin(LED_0_GPIO_Port, LED_0_Pin, RESET);
			HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, RESET);
			HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, SET);
			HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, RESET);
			HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, RESET);
			HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, SET);
			HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, RESET);
			break;
		case 3:
			HAL_GPIO_WritePin(LED_0_GPIO_Port, LED_0_Pin, RESET);
			HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, RESET);
			HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, RESET);
			HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, RESET);
			HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, SET);
			HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, SET);
			HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, RESET);
			break;
		case 4:
			HAL_GPIO_WritePin(LED_0_GPIO_Port, LED_0_Pin, SET);
			HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, RESET);
			HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, RESET);
			HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, SET);
			HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, SET);
			HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, RESET);
			HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, RESET);
			break;
		case 5:
			HAL_GPIO_WritePin(LED_0_GPIO_Port, LED_0_Pin, RESET);
			HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, SET);
			HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, RESET);
			HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, RESET);
			HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, SET);
			HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, RESET);
			HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, RESET);
			break;
		case 6:
			HAL_GPIO_WritePin(LED_0_GPIO_Port, LED_0_Pin, RESET);
			HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, SET);
			HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, RESET);
			HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, RESET);
			HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, RESET);
			HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, RESET);
			HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, RESET);
			break;
		case 7:
			HAL_GPIO_WritePin(LED_0_GPIO_Port, LED_0_Pin, RESET);
			HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, RESET);
			HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, RESET);
			HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, SET);
			HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, SET);
			HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, SET);
			HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, SET);
			break;
		case 8:
			HAL_GPIO_WritePin(LED_0_GPIO_Port, LED_0_Pin, RESET);
			HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, RESET);
			HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, RESET);
			HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, RESET);
			HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, RESET);
			HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, RESET);
			HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, RESET);
			break;
		case 9:
			HAL_GPIO_WritePin(LED_0_GPIO_Port, LED_0_Pin, RESET);
			HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, RESET);
			HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, RESET);
			HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, RESET);
			HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, SET);
			HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, RESET);
			HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, RESET);
			break;
		default:
			break;
	}
}

void run_Exercise4(int count)
{
	displayNumber(count % 10);
}
