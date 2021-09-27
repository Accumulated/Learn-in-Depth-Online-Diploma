/*
 * Functions.h
 *
 *  Created on: Sep 24, 2021
 *      Author: newname
 */

#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_



void Get_Integer_User_Input(int *ptr);
void Get_Float_User_Input(float *ptr);
void Get_Char_User_Input(char *ptr);
void Get_String_User_Input(char *ptr, int max_chars);
void Get_Char_Frequency(char *str, char element);
int Get_Strln(char* ptr);
void reverse_string(char *str);

void Print_Matrix(float *mat, int height, int width);
void Get_Matrix(float *mat, int height, int width);
void Matrix_Transpose(float *mat, float *mat_trans, int mat_height, int mat_width);
void Search_Mat(float *mat, int no_elements, float *element);


void ARR_EX1_Run();
void ARR_EX2_Run();
void ARR_EX3_Run();
void ARR_EX4_Run();
void ARR_EX5_Run();

void STR_EX_1();
void STR_EX_2();
void STR_EX_3();


#endif /* FUNCTIONS_H_ */
