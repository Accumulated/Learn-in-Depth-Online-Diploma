/*
 * Funcations.c
 *
 *  Created on: Sep 24, 2021
 *      Author: newname
 */

#include <stdio.h>
#include <stdlib.h>
#include "Functions.h"

void Get_Integer_User_Input(int *ptr)
{
	fflush(stdout);	fflush(stdin);
	scanf("%d", ptr);
	fflush(stdout);	fflush(stdin);
	printf("\n");
}

void Get_Float_User_Input(float *ptr)
{
	fflush(stdout);	fflush(stdin);
	scanf("%f", ptr);
	fflush(stdout);	fflush(stdin);
	printf("\n");
}

void Get_Char_User_Input(char *ptr)
{
	fflush(stdout);	fflush(stdin);
	scanf("%c", ptr);
	fflush(stdout);	fflush(stdin);
	printf("\n");
}

