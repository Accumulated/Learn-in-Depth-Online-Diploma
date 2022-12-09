#include <stdio.h>
#include <stdlib.h>
#include "Functions.h"

void reverse_string(char *str)
{
	int slen = Get_Strln(str);

	for(int i = slen; i != -1; i--)
	{
		printf("%c", str[i]);
	}
	printf("/n");
}

int Get_Strln(char* ptr)
{
	int slen = 0;
	for(slen = 0; ptr[slen] != '\0'; slen++);

	if (slen == 0)
	{
		printf("Empty string \n");
		return slen;
	}

	printf("Length of string: %d", slen-1);
	return slen -1;
}

void Get_Char_Frequency(char *str, char element)
{
	int count = 0;
	for(int i = 0; str[i] != '\0'; i++)
	{
		if(str[i] == element)
		{
			count++;
		}
	}
	printf("Frequency of e = %d\n", count);
}

void Get_Integer_User_Input(int *ptr)
{
	fflush(stdout);	fflush(stdin);
	scanf("%d", ptr);
	fflush(stdout);	fflush(stdin);
}

void Get_Float_User_Input(float *ptr)
{
	fflush(stdout);	fflush(stdin);
	scanf("%f", ptr);
	fflush(stdout);	fflush(stdin);
}

void Get_Char_User_Input(char *ptr)
{
	fflush(stdout);	fflush(stdin);
	scanf("%c", ptr);
	fflush(stdout);	fflush(stdin);
	printf("\n");
}

void Get_String_User_Input(char *ptr, int max_chars)
{
	fflush(stdout);	fflush(stdin);
	fgets(ptr, max_chars, stdin);
	fflush(stdout);	fflush(stdin);
	printf("\n");

}
