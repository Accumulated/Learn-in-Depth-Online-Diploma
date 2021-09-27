/*
 ============================================================================
  Name        : HW_String_EX3.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : EX3: C Program to Reverse String Without Using Library Function
 ============================================================================
 */


#include <stdio.h>
#include <stdlib.h>
#include "Functions.h"

void STR_EX_3()
{
	printf("EX3: Reverse String Without Using Library Function \n");

	printf("Note: User input maximum 50 characters\nEnter a string: ");
	char *str = (char *) malloc(50 * sizeof(char));
	Get_String_User_Input(str, 50);
	reverse_string(str);
}
