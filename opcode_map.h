#ifndef MAP_H
#define MAP_H


#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>



typedef struct {

	char* instruction;
	char* first_op;
	char* sec_op;

} opcode_entry;



uint8_t string_match( char* sf, char* ss);
uint8_t one_operand( uint8_t* instructions, char* first_op , uint8_t offset);
uint8_t two_operand( uint8_t* instructions, char* first_op , char* sec_op, uint8_t offset);
uint8_t decode (uint8_t* instructions ,uint8_t opcode ,uint8_t offset);


#endif

