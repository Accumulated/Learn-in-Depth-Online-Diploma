#include <stdio.h>
#include <stdlib.h>
#include "Functions.h"

void EX4()
{
	Student arr[10];

	for(int i = 0; i < 10; i++)
		Get_Student_Data(&arr[i]);

	printf("Displaying information: \n");
	for(int i = 0; i < 10; i++)
	{
		printf("\n");
		print_Student_Data(&arr[i]);
		printf("\n");
	}
}
