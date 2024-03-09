CC=arm-none-eabi-
CFLAGS=-mcpu=arm926ej-s -g
INCS=-INCS
LIBS=
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
As = $(wildcard *.s)
AsOBJ = $(As:.s=.o)
all: learn.bin
%.o:%.s
	$(CC)as.exe  $(CFLAGS) $< -o $@ 2> log
%.o:%.s
	$(CC)gcc.exe  $(CFLAGS) $(INCS) -c $c -o $@
 learn.elf: $(OBJ) $(AsOBJ)
	$(CC)ld.exe -T linker_script.ld $(LIBS) $(OBJ)  $(AsOBJ)  -O $@ -Map=Map_file.map
 learn.bin : learn.elf
	$(CC)objcopy.exe -O binary $<  $@
 clean:
	 rm -rf *.o *~
	 @echo "Everything clean"	 