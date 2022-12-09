/*
 ============================================================================
 Name        : Lecture1_Assignment_2.c
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
	// EX1: Check Whether a number is even or odd
	printf("EX1: Check Whether a number is even or odd\n");
	int num = 0;
	printf("Enter an integer you want to check: ");
	Get_Integer_User_Input(&num);

	if(num % 2)
		printf("%d is odd \n",num);
	else
		printf("%d is even \n",num);

	// EX2: C Program to Check Vowel or Consonant
	printf("\nEX2: C Program to Check Vowel or Consonant\n");
	char alpha = 0;
	printf("Enter an alphabet : ");
	Get_Char_User_Input(&alpha);
	switch (alpha)
	{
		case 'a':
		case 'A':
		case 'E':
		case 'e':
		case 'I':
		case 'i':
		case 'O':
		case 'o':
		case 'U':
		case 'u':
			printf("%c is a vowel \n", alpha);
			break;

		default:
			printf("%c is a consonant \n", alpha);
			break;
	}

	// EX3:C Program to Find the Largest Number Among Three Numbers
	printf("\nEX3:C Program to Find the Largest Number Among Three Numbers\n");
	float num1 = 0, num2 = 0, num3 = 0;
	printf("Enter three numbers: ");
	Get_Float_User_Input(&num1);
	Get_Float_User_Input(&num2);
	Get_Float_User_Input(&num3);

	if(num1 > num2)
	{
		if(num1 > num3)
			printf("largest number is %.3f \n", num1);
		else
			printf("largest number is %.3f \n", num3);
	}
	else if(num2 > num3)
		printf("largest number is %.3f \n", num2);
	else
		printf("largest number is %.3f \n", num3);

	// EX4: C Program to Check Whether a Number is Positive or Negative
	printf("\nEX4: C Program to Check Whether a Number is Positive or Negative\n");
	float pos_neg = 0;
	printf("Enter a number: ");
	Get_Float_User_Input(&pos_neg);
	if(pos_neg < 0)
		printf("%.2f is negative \n", pos_neg);
	else if(pos_neg == 0)
		printf("You entered zero");
	else
		printf("%.2f is positive \n", pos_neg);

	// EXS: C Program to Check Whether a Character is an Alphabet or not
	printf("\nEXS: C Program to Check Whether a Character is an Alphabet or not\n");
	printf("Enter a character: ");
	Get_Char_User_Input(&alpha);
	if((alpha >= 'a' && alpha <= 'z') || (alpha >= 'A' && alpha <= 'Z'))
		printf("%c is an alphabet \n", alpha);
	else
		printf("%c is not an alphabet \n", alpha);

	// EX6: C Program to Calculate Sum of Natural Numbers
	printf("\nEX6: C Program to Calculate Sum of Natural Numbers\n");
	int NaturalNum = 0, sum = 0;
	printf("Enter an integer: ");
	Get_Integer_User_Input(&NaturalNum);
	for (int i = 1; i <= NaturalNum; i++)
		sum += i;
	printf("Sum = %d \n", sum);

	// EX7: C Program to Find Factorial ofa Number
	printf("\nEX7: C Program to Find Factorial of a Number\n");
	int factr = 0, multi = 1;
	printf("Enter an integer: ");
	Get_Integer_User_Input(&factr);
	if(factr < 0)
	{
		printf("Error!!! Factorial of negative number doesn't exist. \n");
		return 0;
	}

	for (int i = 1; i <= factr; i++)
		multi *= i;

	printf("Factorial = %d \n", multi);
}
