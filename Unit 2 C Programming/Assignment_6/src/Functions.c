/*
 ============================================================================
 Name        : Assignment_6.c
 Author      : Mohamed M. Abdelmotaleb
 Version     :
 Copyright   : Your copyright notice
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Functions.h"

void Q5(void){

	Employee *arr[1] = {};

	arr[0] = (Employee *) malloc(sizeof(Employee) * 1);

	arr[0] -> ID = 1002;

	arr[0] -> Name = (char *) malloc(sizeof(char) * NameSize);

	arr[0] -> Name = "Alex";

	Employee **ptr = arr;

	printf("Employee ID: %d \n", ptr[0] -> ID);
	printf("Employee Name: %s \n", ptr[0] -> Name);

	printf("\n\n");


}
void Q4(void){

	int *Nums = malloc(sizeof(int) * NumOfELements);

	for(int i = 0; i < NumOfELements; i++){
		Nums[i] = i;
	}

	for(int i = NumOfELements; i > 0; i--){
		printf("Element #%d is %d \n", i - 1, Nums[i - 1]);
	}

	printf("\n\n");

}

void Q3(void){

	char str[] = "w3resource";

	PrintStringReversed(str);

	printf("\n\n");

}
void PrintStringReversed(char *ptr){
	if(*ptr == '\0')
		return;
	PrintStringReversed(ptr + 1);
	printf("%c", *ptr);
}

void Q2(void){

	char Alpha[AlphaNums] = {};
	char *ptr = Alpha;

	for(int i = 0; i < AlphaNums; i++){
		Alpha[i] = 'a' + i;
	}


	printf("The Alphabets are: \n");
	for(int i = 0; i < AlphaNums; i++){
		printf("%c ,", ptr[i]);
	}

	printf("\n\n");

}
void Q1(void){

	int m = 29;
	printf("m has a value of %d and an address of %p \n", m, &m);

	int *ab = &m;
	printf("ab pointer holds the address of m which is: %p \n", ab);
	printf("ab pointer holds the content of m which is: %d \n", *ab);


	m = 34;
	printf("m has a value of %d and an address of %p \n", m, &m);
	printf("ab pointer holds the content of m which is: %d \n", *ab);


	*ab = 7;
	printf("m has a value of %d and an address of %p \n", m, &m);
	printf("ab pointer holds the content of m which is: %d \n", *ab);

	printf("\n\n");

}
