CC=gcc
CFLAGS=-g -Wall -Werror
DEPS= dissasm.h
OBJ= dissasm.c 
FILE= *.o dissasm 


dissasm: $(OBJ) 
	$(CC) $(CFLAGS) -o $@ $^ 

clean: 
	rm -f $(FILE)
	