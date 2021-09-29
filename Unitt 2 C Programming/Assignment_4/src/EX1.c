/*
 * EX1.c: Prime Numbers Between two Intervals by Making User-defined Function
 *
 *      Author: Mohamed M. Abdelmotaleb
 */



#include <stdio.h>
#include <stdlib.h>
#include "Functions.h"


void EX1()
{
	int prime_1 = 0, prime_2 = 0;
	printf("Enter two numbers(intervals): ");
	Get_Integer_User_Input(&prime_1);
	Get_Integer_User_Input(&prime_2);

	Prime_Numbers(prime_1, prime_2);

}

void Prime_Numbers(int prime_1, int prime_2)
{
	int flag = 1;

	// The loop starts from the next number entered by the user and ends
	// at the last number entered by the user - 1
	for(int sus_num = prime_1+1; sus_num < prime_2; sus_num++)
	{
		// Reset the flag at the beginning of each iteration
		flag = 1;

		// Make sure to skip 0 and 1 as they aren't prime numbers
		if (sus_num == 0 || sus_num == 1)
			flag = 0;

		// Loop over all numbers from 2 till this "suspected number" - 1 to check if there is a number
		// that has a zero remainder after dividing the "suspected number" by it.
		for(int j = 2; j < sus_num; j++)
		{
			// If the remainder is 0, then you aren't a prime number
			if(sus_num % j == 0)
			{
				// Break the loop and zero the flag for error
				flag = 0;
				break;
			}
		}

		// Simply print the number passes the conditions
		if (flag)
			printf("%d ", sus_num);
	}
}
