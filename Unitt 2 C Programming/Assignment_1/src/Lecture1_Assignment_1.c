/*
 ============================================================================
 Name        : Lecture1_Assignment_1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Functions.h"

int main(void)
{
	// Ex1: Print a Sentence
	printf("Ex1: Print a sentence \n");
	printf("C Programming\n");

	// Ex2: Print a Integer Entered by a User
	printf("\nEx2: Print a Integer Entered by a User \n");
	int user_input = 0;
	printf("Enter Integer number: ");
	Get_Integer_User_Input(&user_input);
	printf("User entered: %d \n", user_input);

	// EX3: Write C Program to Add Two Integers
	printf("\nEX3: Write C Program to Add Two Integers \n");
	int N1 = 0, N2 = 0;
	printf("Enter 2 numbers to get addition: \n");
	printf("First Number: ");
	Get_Integer_User_Input(&N1);
	printf("Second Number: ");
	Get_Integer_User_Input(&N2);
	printf("Result: %d\n", N2 + N1);

	// EX4: Write C Program to Multiply two Floating Point Numbers
	printf("\nEX4: Write C Program to Multiply two Floating Point Numbers \n");
	float N3 = 0, N4 = 0;
	printf("Enter 2 numbers to get Multiplication: \n");
	printf("First Number: ");
	Get_Float_User_Input(&N3);
	printf("Second Number: ");
	Get_Float_User_Input(&N4);
	printf("Result: %6f\n", N3 * N4);

	// EX5 Write C Program to Find ASCII Value of a Character
	printf("\nEX5 Write C Program to Find ASCII Value of a Character\n");
	char value_ascii = 0;
	printf("Find ACSII value of a character: \n");
	printf("Enter a character: ");
	Get_Char_User_Input(&value_ascii);
	printf("ASCII value of %c = %d \n", value_ascii, value_ascii);

	// EX6: Write Source Code to Swap Two Numbers
	printf("\nEX6: Write Source Code to Swap Two Numbers\n");
	float num1 = 0, num2 = 0;
	float tmp = 0;
	printf("Enter value of a: ");
	Get_Float_User_Input(&num1);
	printf("Enter value of b: ");
	Get_Float_User_Input(&num2);
	// Swap the values
	tmp = num1;
	num1 = num2;
	num2 = tmp;
	printf("After swapping, value of a = %.2f \n",  num1);
	printf("After swapping, value of b = %.2f \n",  num2);

	// EX7: Write Source Code to Swap Two Numbers without temp variable.
	printf("\nEX7: Write Source Code to Swap Two Numbers without temp variable.\n");
	num1 = 0;
	num2 = 0;
	printf("Enter value of a: ");
	Get_Float_User_Input(&num1);
	printf("Enter value of b: ");
	Get_Float_User_Input(&num2);
	Swap_Two_Numbers(&num1, &num2);
	printf("After swapping, value of a = %.2f \n",  num1);
	printf("After swapping, value of b = %.2f \n",  num2);

	return 0;
}

