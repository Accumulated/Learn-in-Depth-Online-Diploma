/*
 ============================================================================
  Name        : HW_String_EX2.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : EX2: C Program to Find the Length of a String You can use standard library
			   function strlen() to find the length of a string but, this program computes
	 	 	   the length of a string manually without using strlen() funtion.
 ============================================================================
 */


#include <stdio.h>
#include <stdlib.h>
# include "Functions.h"

void STR_EX_2()
{
	printf("EX2: Find the Length of a String You can use standard library \n");

	printf("Note: User input maximum 50 characters\nEnter a string: ");
	char *str = (char *) malloc(50 * sizeof(char));
	Get_String_User_Input(str, 50);

	Get_Strln(str);

}
