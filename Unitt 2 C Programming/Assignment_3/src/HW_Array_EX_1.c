/*
 ============================================================================
 Name        : HW_Array_EX1.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : EX1: Example of Multidimensional Array In C
			   Write a C program to find sum of two matrix of order2*2
			   using multidimensional arrays where, elements of matrix
			   are entered by user.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Functions.h"

void ARR_EX1_Run()
{
	printf("EX1: sum of two matrix of order2*2 \n");

	float user_input_1[4] = {0};
	float user_input_2[4] = {0};

	int row = 0, col = 0;

	printf("Enter the elements of 1st matrix\n");
	Get_Matrix(user_input_1, 2, 2);

	printf("Enter the elements of 2nd matrix\n");
	Get_Matrix(user_input_2, 2, 2);

	printf("Sum of Matrix: \n");
	for(row = 0; row < 2; row++)
	{
		for(col = 0; col < 2; col++)
		{
			user_input_1[row*2+col] += user_input_2[row*2+col];
			printf("%0.1f \t", user_input_1[row*2+col]);
		}
		printf("\n");
	}
}
