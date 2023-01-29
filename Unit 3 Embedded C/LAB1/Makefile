#Use @ to supress printing command executed

CC=arm-none-eabi-
CFLAGS=-g -mcpu=arm926ej-s
INCS=-I .
LIBS=

SRC = $(wildcard *.c)
OBJ =  $(SRC:.c=.o)

ASSEM_S = $(wildcard *.s)
ASSEM_O = $(ASSEM_S:.s=.o)

ProjectName = LID

all: $(ProjectName).bin
	@echo "Build Done"


startup.o: startup.s
	@$(CC)as.exe $(CFLAGS) $< -o $@


%.o: %.c
	@$(CC)gcc.exe -c $(INCS) $(CFLAGS) $< -o $@


$(ProjectName).elf: $(ASSEM_O) $(OBJ)
	@$(CC)ld.exe -T LinkerScript.ld $(LIBS) $(ASSEM_O) $(OBJ) -o $@


$(ProjectName).bin: $(ProjectName).elf
	@$(CC)objcopy.exe -O binary $< $@
	
	
clean_all:
	@rm *.o *.elf *.bin							
	@echo "Removed elf, object and binary files"

clean:
	@rm *.elf *.bin
	@echo "Removed elf and binary files"