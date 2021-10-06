#include <stdio.h>
#include <stdlib.h>
#include "Functions.h"

typedef struct complex
{
	float real;
	float img;

}complex;


void EX3()
{
	complex cm1, cm2;

	printf("1st complex:\nEnter real and imaginary respectively: ");
	Get_Float_User_Input(&cm1.real);
	Get_Float_User_Input(&cm1.img);

	printf("2nd complex:\nEnter real and imaginary respectively: ");
	Get_Float_User_Input(&cm2.real);
	Get_Float_User_Input(&cm2.img);

	printf("sum: %.1f + %.1fi \n", cm1.real + cm2.real, cm1.img + cm2.img);
}
