#ifndef _uart_h_
#define _uart_h_

#define UART0DR		*((volatile uint32_t *) 0x101f1000U)


void Uart_Send_String(unsigned char *ptr);


#endif