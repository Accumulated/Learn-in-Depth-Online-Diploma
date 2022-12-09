/*
 ============================================================================
 Name        : HW_Array_EX_4.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : EX4: C Program to Insert an element in an Array
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Functions.h"

void ARR_EX4_Run()
{
	printf("EX4: C Program to Insert an element in an Array \n");

	int no_elements = 0, element = 0, index = 0;

	printf("Enter no of elements: ");
	Get_Integer_User_Input(&no_elements);

	float *EX4_mat = (float *) malloc(no_elements * sizeof(float));
	float *ptr = (float *) malloc((no_elements) * sizeof(float));

	printf("Enter the matrix elements: \n");
	Get_Matrix(EX4_mat, no_elements, 1);

	printf("Enter the element to be inserted: ");
	Get_Integer_User_Input(&element);
	no_elements += 1;


	printf("Enter the location: ");
	Get_Integer_User_Input(&index);


	int j = 0;

	for(int i = 0; i < no_elements; i++)
	{
		if(i == index-1)
		{
			ptr[i] = element;
		}
		else
		{
			ptr[i] = EX4_mat[j];
			j++;
		}
	}

	Print_Matrix(ptr, no_elements, 1);

	free(EX4_mat);
	free(ptr);
}
