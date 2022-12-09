#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_

#define max_string	50

typedef struct SStudent
{
	float marks;
	int roll;
	char *name;
}Student;

void Get_Integer_User_Input(int *ptr);
void Get_Float_User_Input(float *ptr);
void Get_Char_User_Input(char *ptr);
void Get_String_User_Input(char *ptr, int max_chars);
void Get_Char_Frequency(char *str, char element);
int Get_Strln(char* ptr);
void reverse_string(char *str);

void Get_Student_Data(Student *ptr);
void print_Student_Data(Student *ptr);

void EX5(void);
void EX4(void);
void EX3(void);
void EX2(void);
void EX1(void);

#endif /* FUNCTIONS_H_ */
