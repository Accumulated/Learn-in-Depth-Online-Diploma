/*
 ============================================================================
 Name        : Assignment_5.c
 Author      : Mohamed M. Abdelmotaleb
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Functions.h"

static inline void circle_area(float r)
{
	printf("Area= %.2f\n", 2 * 3.141592654 * r);
}

void EX5()
{
	float r = 0;
	printf("Enter the radius: ");
	Get_Float_User_Input(&r);
	circle_area(r);

}
