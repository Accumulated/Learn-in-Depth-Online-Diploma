/* Memory map */
MEMORY
{
FLASH(RX) : ORIGIN = 0x08000000, LENGTH = 128k
SRAM(RWX) : ORIGIN = 0x20000000, LENGTH = 20k
}


SECTIONS
{
	/* Output section name is .text */
	.text : {
		/* Input sections to the .text */
		/* Take any vector section in any object file */	
		*(.vectors*)
		*(.text *)
		*(.rodata*)
		
		_E_TEXT = .;
	} > FLASH

	.data : {
		_S_data = .;
		*(.data)
		. = ALIGN(4);
		_E_data = .;
	}> SRAM AT> FLASH

	.bss : {
		_S_bss = .;
		*(.bss)
		_E_bss = .;
		. = ALIGN(4);
		. = . + 0x1000;
		_stack_top = .;
	} > SRAM
}
