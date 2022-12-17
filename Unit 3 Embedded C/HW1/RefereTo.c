typedef volatile unsigned int vuint32_t;

typedef union{
	// Access all 32 bits for the register
	vuint32_t All_Fields;
	
	// Struct for pins (32 bits)
	struct{
		// First 13 bits in the register
		vuint32_t reserved:13;
		// Bit #14 in the register
		vuint32_t pin13:1;
	}pin;
	
}R_ODR_t;

// Pointer to the register needed. 
volatile R_ODR_t *R_ODR = (volatile R_ODR_t *) (GPIO_ODR + 0x0C);



// Clear bit
R_ODR -> pin.pin13 = 0;

// Set bit
R_ODR -> pin.pin13 = 1;


// Read only register. 
// Const is for the compiler to forbid changes for this constant 
// volatile uint32_t. However Volatile is for the Hardware, which means that
// data can change by Hardware.
uint32_t const volatile * Const Preg2 = (uint32_t const volatile *) (0xFFFF0004).

// Read Or Write register.
// That's a constant pointer that points to volatile data of type uint32_t
// Const is used to guard the pointer from unexpected changes from C code
uint32_t volatile *const Preg1 = (uint32 _t volatile *) (0xFFFF0000);





