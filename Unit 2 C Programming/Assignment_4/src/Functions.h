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

int calc_factorial(int num);
void reverse_string_recur(char *ptr);
void helper_reverse_string_recur(char *ptr, int index);
int power_recur(int num, int power);
void Prime_Numbers(int prime_1, int prime_2);

void EX4(void);
void EX3(void);
void EX2(void);
void EX1(void);

#endif /* FUNCTIONS_H_ */
