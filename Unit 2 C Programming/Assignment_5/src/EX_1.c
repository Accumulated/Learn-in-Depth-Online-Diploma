#include <stdio.h>
#include <stdlib.h>
#include "Functions.h"

void EX1()
{
	Student st;

	Get_Student_Data(&st);

	printf("Displaying information: \n");
	print_Student_Data(&st);
}

void print_Student_Data(Student *ptr)
{
	printf("name: %sRoll: %d \nMarks: %.2f \n", ptr -> name, ptr -> roll, ptr -> marks);
}

void Get_Student_Data(Student *ptr)
{

	ptr -> name = (char *) malloc(max_string * sizeof(char))
			;
	printf("Enter information of students: \n");
	printf("Enter name: ");
	Get_String_User_Input(ptr -> name, max_string);

	printf("Enter roll number: ");
	Get_Integer_User_Input(&ptr -> roll);

	printf("Enter marks: ");
	Get_Float_User_Input(&ptr -> marks);
}
