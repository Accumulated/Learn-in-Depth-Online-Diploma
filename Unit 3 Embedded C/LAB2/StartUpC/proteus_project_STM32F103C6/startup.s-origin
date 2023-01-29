
/* Sram starts at 0x20000000 */
/* Start stack pointer at address 0x20001000 */
/* This address shall be a value written in a 32 bits word */
/* Start of flash is at address 0x08000000 and will have a value of 
	0x20001000 .
	*/
/* Combine all these lines in a section called vectors.
	The linker shall handle the mapping for the section to which address.
	*/
.section .vectors

	.word 0x20001000			/* Stack top address */

	/* After that we need to pass reset handler address to jump at it
		after initializing stack 
	*/
	.word Vector_Handler		/* Reset handler 	*/
	.word Vector_Handler		/* NMI 				*/
	.word Vector_Handler		/* Hard fault 		*/
	.word Vector_Handler		/* MM Fault 		*/
	.word Vector_Handler		/* Bus fault 		*/
	.word Vector_Handler		/* Usage fault 		*/
	.word Vector_Handler		/* Reserved			*/
	.word Vector_Handler		/* Reserved			*/
	.word Vector_Handler		/* Reserved			*/
	.word Vector_Handler		/* Reserved			*/
	.word Vector_Handler		/* SV Call			*/
	.word Vector_Handler		/* Debug reserved	*/
	.word Vector_Handler		/* Reserved			*/
	.word Vector_Handler		/* PendSV			*/
	.word Vector_Handler		/* SysTicj			*/
	.word Vector_Handler		/* IRQ0				*/
	.word Vector_Handler		/* IRQ1				*/
	.word Vector_Handler		/* IRQ2				*/


/* Separate the last section and the functions by inserting text section */
.section .text
	/* 1- Write reset section.
		Convention to start section name using _*/
	_reset:
		bl main
		b .
		
	.thumb_func
	
	/* Vector handler section for all interrupt handlers */
	Vector_Handler:
		b _reset
