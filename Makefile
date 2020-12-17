CC=gcc
CFLAGS=-g -Wall -Werror
DEPS= dissasm.h opcode_map.h decoder.h
OBJ= dissasm.o decoder.o opcode_map.o
FILE= *.o dissasm 

%.o: %.c $(DEPS)
		$(CC) $(CFLAGS) -c -o $@ $<

dissasm: $(OBJ) 
	$(CC) $(CFLAGS) -o $@ $^ 

clean: 
	rm -f $(FILE)
	