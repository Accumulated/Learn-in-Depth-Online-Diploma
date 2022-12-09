/*
 ============================================================================
  Name        : HW_String_EX1.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : EX1: C Program to frind the frequency of characters in a string The is program
	 	 	   asks user to enter a string and a character and this program checks
	 	 	   how many times that character is repeated in the string entered by user.
 ============================================================================
 */


#include <stdio.h>
#include <stdlib.h>
#include "Functions.h"

#define max_chars_in_string	50

void STR_EX_1()
{
	printf("EX1: find the frequency of characters in a string T \n");

	char freq = 0;
	char *str = (char *) malloc(max_chars_in_string * sizeof(char));

	printf("Note: User input maximum 50 characters\nEnter a string: ");
	Get_String_User_Input(str, 50);

	printf("Enter a character to find frequency: ");
	Get_Char_User_Input(&freq);

	Get_Char_Frequency(str, freq);
	Get_Strln(str);

	free(str);
}
