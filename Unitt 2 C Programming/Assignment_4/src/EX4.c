/*
 * EX4.c: program to Calculate the Power of a Number Using Recursion
 *
 *
 *      Author: Mohamed M. Abdelmotaleb
 */

#include <stdio.h>
#include <stdlib.h>
#include "Functions.h"



void EX4()
{
	int base_num = 0, pow_num = 0;

	printf("Enter base number: ");
	Get_Integer_User_Input(&base_num);

	printf("Enter power number(positive integer): ");
	Get_Integer_User_Input(&pow_num);

	printf("%d ^ %d = %d", base_num, pow_num, power_recur(base_num, pow_num));
}

int power_recur(int num, int power)
{
	if(power == 1)
		return num;
	else
	return num * power_recur(num, power - 1);
}
