#include <stdio.h>
#include <stdlib.h>
#include "Functions.h"

void Get_Integer_User_Input(int *ptr)
{
	fflush(stdout);	fflush(stdin);
	scanf("%d", ptr);
	fflush(stdout);	fflush(stdin);
	printf("\n");
}

void Get_Float_User_Input(float *ptr)
{
	fflush(stdout);	fflush(stdin);
	scanf("%f", ptr);
	fflush(stdout);	fflush(stdin);
	printf("\n");
}

void Get_Char_User_Input(char *ptr)
{
	fflush(stdout);	fflush(stdin);
	scanf("%c", ptr);
	fflush(stdout);	fflush(stdin);
	printf("\n");
}

void Swap_Two_Numbers(float *ptr1, float *ptr2)
{
	// Add the 2 values together
	*ptr1 = *ptr1+ *ptr2;
	*ptr2 = *ptr1 - *ptr2;
	*ptr1 = *ptr1 - *ptr2;
}
