#include <stdio.h>
#include <stdlib.h>
#include "Functions.h"

typedef struct Distance
{
	float feet;
	float inch;
}Distance;

void Get_Struct_Data(Distance *ptr);

void EX2()
{
	Distance d1, d2, result;

	printf("Enter information for 1st distance: \n");
	Get_Struct_Data(&d1);

	printf("Enter information for 2nd distance: \n");
	Get_Struct_Data(&d2);

	result.feet = d1.feet + d2.feet;
	result.inch= d1.inch + d2.inch;

	while(result.inch >= 12)
	{
		result.inch -= 12;
		result.feet++;
	}

	printf("Sum of distances = %.f'-%.1f\"", result.feet, result.inch);
}

void Get_Struct_Data(Distance *ptr)
{
	printf("Enter feet: ");
	Get_Float_User_Input(& (ptr -> feet));

	printf("Enter inch: ");
	Get_Float_User_Input(& (ptr -> inch));
}
