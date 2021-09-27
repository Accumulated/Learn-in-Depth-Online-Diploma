#include <stdio.h>
#include <stdlib.h>
#include "Functions.h"

void reverse_string(char *str)
{
	int slen = Get_Strln(str);

	for(int i = slen; i != -1; i--)
	{
		printf("%c", str[i]);
	}
	printf("/n");
}

int Get_Strln(char* ptr)
{
	int slen = 0;
	for(slen = 0; ptr[slen] != '\0'; slen++);

	if (slen == 0)
	{
		printf("Empty string \n");
		return slen;
	}

	printf("Length of string: %d", slen-1);
	return slen -1;
}

void Get_Char_Frequency(char *str, char element)
{
	int count = 0;
	for(int i = 0; str[i] != '\0'; i++)
	{
		if(str[i] == element)
		{
			count++;
		}
	}

	printf("Frequency of e = %d\n", count);
}

void Search_Mat(float *mat, int no_elements, float *element)
{
	for(int i = 0; i < no_elements; i++)
	{
		if(mat[i] == *element)
		{
			printf("Number found at location = %d \n", i+1);
			return;
		}
	}

	printf("Element not found\n");
}

void Matrix_Transpose(float *mat, float *mat_trans, int mat_height, int mat_width)
{
	for(int row = 0; row < mat_height; row++)
	{
		for(int col = 0; col < mat_width; col++)
		{
			mat_trans[col * mat_height + row] = mat[row * mat_width + col];
		}
	}
}

void Get_Matrix(float *mat, int height, int width)
{
	int row = 0, col  = 0;
	float ui = 0;

	for(row = 0; row < height; row++)
	{
		for(col = 0; col < width; col++)
		{
			printf("Enter a%d%d: ", row+1, col+1);
			Get_Float_User_Input(&ui);
			mat[row * width + col] = ui;
		}
	}

}

void Print_Matrix(float *mat, int height, int width)
{
	int row = 0, col  = 0;
	printf("Height = %d, width = %d \n", height, width);
	for(row = 0; row < height; row++)
	{
		for(col = 0; col < width; col++)
		{
			printf("%.2f \t", mat[row * width + col]);
		}
		printf("\n");
	}
}

void Get_Integer_User_Input(int *ptr)
{
	fflush(stdout);	fflush(stdin);
	scanf("%d", ptr);
	fflush(stdout);	fflush(stdin);
}

void Get_Float_User_Input(float *ptr)
{
	fflush(stdout);	fflush(stdin);
	scanf("%f", ptr);
	fflush(stdout);	fflush(stdin);
}

void Get_Char_User_Input(char *ptr)
{
	fflush(stdout);	fflush(stdin);
	scanf("%c", ptr);
	fflush(stdout);	fflush(stdin);
	printf("\n");
}

void Get_String_User_Input(char *ptr, int max_chars)
{
	fflush(stdout);	fflush(stdin);
	fgets(ptr, max_chars, stdin);
	fflush(stdout);	fflush(stdin);
	printf("\n");

}
