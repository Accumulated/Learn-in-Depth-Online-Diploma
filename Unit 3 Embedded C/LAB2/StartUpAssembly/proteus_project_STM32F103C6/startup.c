
#include <stdint.h>

extern int main();

void Reset_Handler();

void Default_Handler(){
	Reset_Handler();
}


void NMI_Handler()__attribute__((weak, alias("Default_Handler")));
void HardFault_Handler()__attribute__((weak, alias("Default_Handler")));
void Bus_Handler()__attribute__((weak, alias("Default_Handler")));
void UsageFault_Handler()__attribute__((weak, alias("Default_Handler")));


extern unsigned int _stack_top;

/* Define array of unsigned32 and put it in the .vector section */
/* It's up to linker script to set the */
uint32_t vectors[] __attribute__((section(".vectors"))) = {
	(uint32_t) &_stack_top,
	(uint32_t) &Reset_Handler,
	(uint32_t) &NMI_Handler,
	(uint32_t) &HardFault_Handler,
	(uint32_t) &Bus_Handler,
	(uint32_t) &UsageFault_Handler
};

extern unsigned int _E_TEXT;
extern unsigned int _S_data;
extern unsigned int _E_data;
extern unsigned int _S_bss;
extern unsigned int _E_bss;


void Reset_Handler(){
	unsigned int Data_size = (unsigned char*) &_E_data - (unsigned char*) &_S_data;   
	unsigned char *P_src = (unsigned char*) &_E_data;
	unsigned char *P_dest = (unsigned char*) &_S_data;
	
	for(int i = 0; i < Data_size; i++){
		P_dest[i] = P_src[i];
	}
	
	Data_size = (unsigned char*) &_S_bss - (unsigned char*) &_E_bss;   
	P_src = (unsigned char*) &_S_bss;
	P_dest = (unsigned char*) &_E_bss;
	
	for(int i = 0; i < Data_size; i++){
		P_dest[i] = (uint8_t) 0;
	}

	main();
}