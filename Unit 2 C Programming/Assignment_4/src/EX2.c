/*
 * EX2.c: C program to Calculate Factorial of a Number Using Recursion
 *
 *      Author: Mohamed M. Abdelmotaleb
 */



#include <stdio.h>
#include <stdlib.h>
#include "Functions.h"


void EX2()
{
	int num = 0;
	printf("Enter a positive number: ");
	Get_Integer_User_Input(&num);

	printf("%d", calc_factorial(num));
}


int calc_factorial(int num)
{
	if(num == 1)
		return 1;
	else
		return num * calc_factorial(num - 1);
}
