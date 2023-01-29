.global Abdelmotaleb_RESET

Abdelmotaleb_RESET:
						ldr sp, =stack_top
						bl main

Abdelmotaleb_STOP:		b Abdelmotaleb_STOP


