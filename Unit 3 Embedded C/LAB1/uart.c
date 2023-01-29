#include "common.h"
#include "uart.h"



void Uart_Send_String(uint8_t *ptr){
	uint8_t i = 0;
	for(i = 0; ptr[i] != '\0'; i++){
	
		UART0DR = (uint32_t) ptr[i];
	
	}		
	
}