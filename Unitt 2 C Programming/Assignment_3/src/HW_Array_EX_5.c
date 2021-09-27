/*
 ============================================================================
 Name        : HW_Array_EX_5.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : EX5: Search an element in Array
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Functions.h"

void ARR_EX5_Run()
{
	printf("EX5: Search an element in Array \n");

	int no_elements = 0;
	float element = 0;

	printf("Enter no of elements: ");
	Get_Integer_User_Input(&no_elements);

	float *EX4_mat = (float *) malloc(no_elements * sizeof(float));
	Get_Matrix(EX4_mat, no_elements, 1);

	printf("Enter the element to be searched: ");
	Get_Float_User_Input(&element);

	Search_Mat(EX4_mat, no_elements, &element);

	free(EX4_mat);
}
