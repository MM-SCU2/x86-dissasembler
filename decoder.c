#include "decoder.h"

char* registers [8] = { "eax","ecx","edx","ebx","esp","ebp", "esi", "edi"};

uint8_t string_match( char* sf, char* ss){

	while( *sf == *ss){

		if( *sf == '\0' || *ss == '\0'){
			break;
		}
		sf++;
		ss++;
	}

	if( *sf == '\0' && *ss == '\0' ) return 1;
	else return 0;

}


uint8_t is_reg( char* operand ){


	for( uint8_t i = 0 ; i < 8 ; i++){

		if(string_match ( operand , registers[i] ) ){

			return 1;
		}
	}

	return 0;
}


uint8_t one_operand( uint8_t* instructions, char* name ,char* first_op , uint8_t offset){


	if(  is_reg( first_op ) ){

		printf("  %s %s  \n", name,first_op );
	}

	else{

		char* op = operand_decode(instructions, first_op, offset);
		printf("  %s %s  \n", name,op );
	}

	offset++;
	return offset;
}


char* operand_decode ( uint8_t * instructions, char * operand , uint8_t offset  ){

	if ( operand[0] == 'G' ){  //  the reg-mod bits indicate a register 

		// xx ccc xxx
		// 0011 1000  = 0x38
 		uint8_t modByte = instructions[offset+1];
		uint8_t reg_in = (modByte & 0x38) >> 3; 		// turn it into an index
		return registers[reg_in];

	}

	else if ( operand[0] == 'E' ){ 	// the mod indicates type of acceses and reg the register

		uint8_t modByte = instructions[offset+1];

		uint8_t r1 = modByte & 0x7; 			//index
		uint8_t r2 = (modByte & 0xc0) >> 6; 	// mod 

		if( r2 == 0x3){


			return registers[r1];
		}

		else return "xxx";

	}

	else {

		return "xxx";
	}

}


uint8_t two_operand( uint8_t* instructions, char* name ,char* first_op , char* sec_op, uint8_t offset){

	char * op1 = NULL;
	char * op2 = NULL ;

	// hay que ver cuales son los operandos 
	
	op1 = operand_decode(instructions, first_op, offset);
	op2 = operand_decode(instructions, sec_op, offset);


	printf("  %s %s, %s \n", name, op1, op2 );

	offset = offset + 2;
	return offset;
}




uint8_t decode (uint8_t* instructions ,uint8_t opcode ,uint8_t offset){

	// we get the indexes to the op table 

	uint8_t file = (opcode >> 4) & 0x0f;
	uint8_t row = opcode & 0x0f;

	// extract the entry and translate de information 

	// the instruction has none operand 
	if ( string_match(op_table[file][row].first_op,"nop") && string_match(op_table[file][row].sec_op, "nop") ){ 	// no operands

		printf("  %s\n", op_table[file][row].instruction );
		offset++;

	}

	// the instruction has one operand 
	else if ( !string_match(op_table[file][row].first_op,"nop") && string_match(op_table[file][row].sec_op, "nop")) {  // one operand 

		offset = one_operand ( instructions , op_table[file][row].instruction ,op_table[file][row].first_op , offset);

	}

	// the instruction has two operands 
	else {

		offset = two_operand( instructions, op_table[file][row].instruction ,op_table[file][row].first_op , op_table[file][row].sec_op , offset);
	}

	
	return offset;

} 		
















