typedef volatile unsigned int vuint32 ;

#include <stdint.h>

#define RCC_BASE		0x40021000
#define GPIOA_BASE		0x40010800

#define RCC_APB2		*(volatile uint32_t *)(RCC_BASE   + 0x18)
#define GPIOA_CRH		*(volatile uint32_t *)(GPIOA_BASE + 0x04)	
#define GPIOA_ODR		*(volatile uint32_t *)(GPIOA_BASE + 0x0c)

#define RCC_IOP			(1<<2)
#define GPIOA13			(1<<13)


typedef union{

	vuint32				all_fields;
	struct 
	{
		vuint32			reserved:13;
		vuint32			p13:1;
	} pin;
} ODR;

volatile ODR* ODR_13 = (volatile ODR*)(GPIOA_BASE + 0x0C);

int main(){

	//-------------- Registers Confegration ------------

	RCC_APB2   |= RCC_IOP;				//RCC_Enable
	GPIOA_CRH  &= 0xff0fffff;			//reset bits from 20 to 24
	GPIOA_CRH  |= 0x00200000;			//Enable bit (21) 
	
	int i=0;		

	//------------------ Infinite Loop -----------------
	while(1){
		ODR_13 -> pin.p13 = 1;	
		for(i = 0; i<5000; i++);		//Delay

		ODR_13 -> pin.p13 = 0;			//Turn Led OFF
		for(i=0; i<5000; i++);		//Delay
	}

	return 0;
}