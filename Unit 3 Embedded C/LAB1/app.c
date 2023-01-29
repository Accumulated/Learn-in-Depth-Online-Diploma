#include "common.h"
#include "uart.h"

uint8_t str1[20] = "Learn-in-Depth:MABDELM";
uint8_t const str2[] = "Learn-in-Depth:MABDELM";
void main(void){
	
	Uart_Send_String(str1);
}