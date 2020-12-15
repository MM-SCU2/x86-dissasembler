#include "opcode_map.h"


char* registers [8] = { "eax","ecx","edx","ebx","esp","ebp", "esi", "edi"};


opcode_entry op_table [16][16] = {


 	[0][0] = (opcode_entry) {

 		(char*) "add",
 		(char*) "Eb",
 		(char*) "Gb",
 	},
 	[0][1] = (opcode_entry) {

 		(char*) "add",
 		(char*) "Ev",
 		(char*) "Gv",
 	},
 	[0][2] = (opcode_entry) {

 		(char*) "add",
 		(char*) "Gb",
 		(char*) "Eb",
 	}





};


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


uint8_t one_operand( uint8_t* instructions, char* first_op , uint8_t offset){





	return offset++;
}



uint8_t two_operand( uint8_t* instructions, char* first_op , char* sec_op, uint8_t offset){





	return offset++;
}

uint8_t decode (uint8_t* instructions ,uint8_t opcode ,uint8_t offset){

	// we get the indexes to the op table 

	uint8_t file = (opcode >> 4) & 0x0f;
	uint8_t row = opcode & 0x0f;

	// we extract the entry and translate de information 


	if ( !string_match(op_table[file][row].first_op,"nop") && !string_match(op_table[file][row].sec_op, "nop") ){ 	// no operands

		printf("%s\n", op_table[file][row].instruction );
		offset++;

	}

	else if ( string_match(op_table[file][row].first_op,"nop") && !string_match(op_table[file][row].sec_op, "nop")) {  // one operand 

		offset = one_operand ( instructions , op_table[file][row].first_op , offset);

	}

	else {

		offset = two_operand( instructions, op_table[file][row].first_op , op_table[file][row].sec_op , offset);
	}

	
	return offset;


} 		



























