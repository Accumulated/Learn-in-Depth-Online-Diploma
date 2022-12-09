/*
 ============================================================================
 Name        : HW_Array_Ex2.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : EX2: C Program to Calculate Average Using Arrays
 	 	 	   This program takes n number of element from user( where, n is specified by user),
 	 	 	   stores data in an array and calculates the average of those numbers.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Functions.h"

void ARR_EX2_Run()
{
	printf("EX2: Calculate Average Using Arrays \n");

	float n = 0, sum = 0, ui = 0;

	printf("Enter the numbers of data: ");
	Get_Float_User_Input(&n);

	for(int i = 0; i < n; i++)
	{
		printf("%d. Enter number: ", i);
		Get_Float_User_Input(&ui);

		sum += ui;
	}
	printf("Average = %.2f \n", sum/n);
}
