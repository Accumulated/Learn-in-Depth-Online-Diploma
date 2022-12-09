/*
 ============================================================================
 Name        : HW_Array_EX3.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : EX3: C Program to Find Transpose of a Matrix
 	 	 	   The is program asks user to enter a matrix (size of matrix is specified by user)
 	 	 	   and this program finds the transpose of that matrix and displays it.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Functions.h"

void ARR_EX3_Run()
{
	printf("EX3: Find Transpose of a Matrix \n");

	int mat_height = 0, mat_width = 0;
	printf("Enter rows and column of matrix: ");
	Get_Integer_User_Input(&mat_height);
	Get_Integer_User_Input(&mat_width);

	float *EX3_mat = (float *) malloc(mat_height * mat_width * sizeof(float));
	float *EX3_mat_trans = (float *) malloc(mat_height * mat_width * sizeof(float));

	Get_Matrix(EX3_mat, mat_height, mat_width);
	Print_Matrix(EX3_mat, mat_height, mat_width);
	Matrix_Transpose(EX3_mat, EX3_mat_trans, mat_height, mat_width);
	Print_Matrix(EX3_mat_trans, mat_width, mat_height);

	free(EX3_mat);
	free(EX3_mat_trans);
}
