#ifndef DECO_H
#define DECO_H


#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "opcode_map.h"


uint8_t string_match( char* sf, char* ss);
void one_operand( uint8_t* instructions, char* name ,char* first_op , uint8_t offset);
void two_operand( uint8_t* instructions, char* name ,char* first_op , char* sec_op, uint8_t offset);
void decode (uint8_t* instructions ,uint8_t opcode ,uint8_t offset);
char* operand_decode ( uint8_t * instructions, char * operand,uint8_t offset );
uint8_t is_reg( char* operand );
//uint8_t ajustment ( char* type, uint8_t offset );
uint8_t inst_size(uint8_t* instructions, uint8_t opcode, uint8_t offset);




#endif

