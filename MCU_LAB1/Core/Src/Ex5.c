/*
 * Ex5.c
 *
 *  Created on: Sep 22, 2024
 *      Author: dangk
 */

#include "main.h"
#include "Ex3.h"
#include "Ex4.h"
#include "Ex5.h"

void init_Exercise5()
{
	init_Exercise4();
	init_Exercise3();
}

void run_Exercise5(int count)
{
	run_Exercise3(count);
	int redTimer = 5;
	displayNumber(redTimer - count % 5);
}
