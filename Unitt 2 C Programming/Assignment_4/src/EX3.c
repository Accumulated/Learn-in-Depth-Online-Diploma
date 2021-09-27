/*
 * EX3.c: C program to Reverse a Sentence Using Recursion
 *
 *      Author: Mohamed M. Abdelmotaleb
 */


#include <stdio.h>
#include <stdlib.h>
#include "Functions.h"


void EX3()
{
	printf("Enter a sentence: ");
	char *str = (char *) malloc(50 * sizeof(char));

	Get_String_User_Input(str, 50);

	reverse_string_recur(str);
}


void reverse_string_recur(char *ptr)
{
	helper_reverse_string_recur(ptr, 0);
}

void helper_reverse_string_recur(char *ptr, int index)
{

	if(ptr[index] == '\0')
		return;
	else
		helper_reverse_string_recur(ptr, index + 1);

	printf("%c", ptr[index]);
}
