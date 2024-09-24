/*
 * Ex10.c
 *
 *  Created on: Sep 22, 2024
 *      Author: dangk
 */

#include "main.h"
#include "Ex7.h"
#include "Ex8.h"
#include "Ex4.h"

void run_Exercise10(int hour, int minute, int second, int count)
{
	//second += count;
	minute += second / 60;
	run_Exercise4(4 + 50/60);
	run_Exercise7();
	//run_Exercise8(minute / 5);
	//run_Exercise8(second / 5);
}
