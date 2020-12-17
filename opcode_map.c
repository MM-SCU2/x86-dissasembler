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
 	},

 	[0][3] = (opcode_entry) {

 		(char*) "add",
 		(char*) "Gv",
 		(char*) "Ev",
 	},
 	[0][4] = (opcode_entry) {

 		(char*) "add",
 		(char*) "AL",
 		(char*) "Ib",
 	},
 	[0][5] = (opcode_entry) {

 		(char*) "add",
 		(char*) "rax",
 		(char*) "Iz",
 	},
 	[0][6] = (opcode_entry) {

 		(char*) "Push",
 		(char*) "es",
 		(char*) "nop",
 	},
 	[0][7] = (opcode_entry) {

 		(char*) "Pop",
 		(char*) "es",
 		(char*) "nop",
 	},
 	[0][8] = (opcode_entry) {

 		(char*) "or",
 		(char*) "Eb",
 		(char*) "Gb",
 	},
 	[0][9] = (opcode_entry) {

 		(char*) "or",
 		(char*) "Ev",
 		(char*) "Gv",
 	},
 	[0][10] = (opcode_entry) {

 		(char*) "or",
 		(char*) "Gb",
 		(char*) "Eb",
 	},

 	[0][11] = (opcode_entry) {

 		(char*) "or",
 		(char*) "Gv",
 		(char*) "Ev",
 	},
 	[0][12] = (opcode_entry) {

 		(char*) "or",
 		(char*) "AL",
 		(char*) "Ib",
 	},
 	[0][13] = (opcode_entry) {

 		(char*) "or",
 		(char*) "rax",
 		(char*) "Iz",
 	},
 	[0][14] = (opcode_entry) {

 		(char*) "Push",
 		(char*) "cs",
 		(char*) "nop",
 	},
 	[0][15] = (opcode_entry) {

 		(char*) "Pop",
 		(char*) "cs",
 		(char*) "nop",
 	},

 	[1][0] = (opcode_entry) {

 		(char*) "adc",
 		(char*) "Eb",
 		(char*) "Gb",
 	},
 	[1][1] = (opcode_entry) {

 		(char*) "adc",
 		(char*) "Ev",
 		(char*) "Gv",
 	},
 	[1][2] = (opcode_entry) {

 		(char*) "adc",
 		(char*) "Gb",
 		(char*) "Eb",
 	},

 	[1][3] = (opcode_entry) {

 		(char*) "adc",
 		(char*) "Gv",
 		(char*) "Ev",
 	},
 	[1][4] = (opcode_entry) {

 		(char*) "adc",
 		(char*) "AL",
 		(char*) "Ib",
 	},
 	[1][5] = (opcode_entry) {

 		(char*) "adc",
 		(char*) "rax",
 		(char*) "Iz",
 	},
 	[1][6] = (opcode_entry) {

 		(char*) "Push",
 		(char*) "ss",
 		(char*) "nop",
 	},
 	[1][7] = (opcode_entry) {

 		(char*) "Pop",
 		(char*) "ss",
 		(char*) "nop",
 	},

 	[1][8] = (opcode_entry) {

 		(char*) "sbb",
 		(char*) "Eb",
 		(char*) "Gb",
 	},
 	[1][9] = (opcode_entry) {

 		(char*) "sbb",
 		(char*) "Ev",
 		(char*) "Gv",
 	},
 	[1][10] = (opcode_entry) {

 		(char*) "sbb",
 		(char*) "Gb",
 		(char*) "Eb",
 	},

 	[1][11] = (opcode_entry) {

 		(char*) "sbb",
 		(char*) "Gv",
 		(char*) "Ev",
 	},
 	[1][12] = (opcode_entry) {

 		(char*) "sbb",
 		(char*) "AL",
 		(char*) "Ib",
 	},
 	[1][13] = (opcode_entry) {

 		(char*) "sbb",
 		(char*) "rax",
 		(char*) "Iz",
 	},
 	[1][14] = (opcode_entry) {

 		(char*) "Push",
 		(char*) "ds",
 		(char*) "nop",
 	},
 	[1][15] = (opcode_entry) {

 		(char*) "Pop",
 		(char*) "ds",
 		(char*) "nop",
 	},

 	[2][0] = (opcode_entry) {

 		(char*) "and",
 		(char*) "Eb",
 		(char*) "Gb",
 	},
 	[2][1] = (opcode_entry) {

 		(char*) "and",
 		(char*) "Ev",
 		(char*) "Gv",
 	},
 	[2][2] = (opcode_entry) {

 		(char*) "and",
 		(char*) "Gb",
 		(char*) "Eb",
 	},

 	[2][3] = (opcode_entry) {

 		(char*) "and",
 		(char*) "Gv",
 		(char*) "Ev",
 	},
 	[2][4] = (opcode_entry) {

 		(char*) "and",
 		(char*) "AL",
 		(char*) "Ib",
 	},
 	[2][5] = (opcode_entry) {

 		(char*) "and",
 		(char*) "rax",
 		(char*) "Iz",
 	},
 	[2][6] = (opcode_entry) {

 		(char*) "es",
 		(char*) "prefix",
 		(char*) "nop",
 	},
 	[2][7] = (opcode_entry) {

 		(char*) "daa",
 		(char*) "nop",
 		(char*) "nop",
 	},
 	[2][8] = (opcode_entry) {

 		(char*) "sub",
 		(char*) "Eb",
 		(char*) "Gb",
 	},
 	[2][9] = (opcode_entry) {

 		(char*) "sub",
 		(char*) "Ev",
 		(char*) "Gv",
 	},
 	[2][10] = (opcode_entry) {

 		(char*) "sub",
 		(char*) "Gb",
 		(char*) "Eb",
 	},

 	[2][11] = (opcode_entry) {

 		(char*) "sub",
 		(char*) "Gv",
 		(char*) "Ev",
 	},
 	[2][12] = (opcode_entry) {

 		(char*) "sub",
 		(char*) "AL",
 		(char*) "Ib",
 	},
 	[2][13] = (opcode_entry) {

 		(char*) "sub",
 		(char*) "rax",
 		(char*) "Iz",
 	},
 	[2][14] = (opcode_entry) {

 		(char*) "cs",
 		(char*) "prefix",
 		(char*) "nop",
 	},
 	[2][15] = (opcode_entry) {

 		(char*) "das",
 		(char*) "nop",
 		(char*) "nop",
 	},

 	[3][0] = (opcode_entry) {

 		(char*) "xor",
 		(char*) "Eb",
 		(char*) "Gb",
 	},
 	[3][1] = (opcode_entry) {

 		(char*) "xor",
 		(char*) "Ev",
 		(char*) "Gv",
 	},
 	[3][2] = (opcode_entry) {

 		(char*) "xor",
 		(char*) "Gb",
 		(char*) "Eb",
 	},

 	[3][3] = (opcode_entry) {

 		(char*) "xor",
 		(char*) "Gv",
 		(char*) "Ev",
 	},
 	[3][4] = (opcode_entry) {

 		(char*) "xor",
 		(char*) "AL",
 		(char*) "Ib",
 	},
 	[3][5] = (opcode_entry) {

 		(char*) "xor",
 		(char*) "rax",
 		(char*) "Iz",
 	},
 	[3][6] = (opcode_entry) {

 		(char*) "ss",
 		(char*) "prefix",
 		(char*) "nop",
 	},
 	[3][7] = (opcode_entry) {

 		(char*) "aaa",
 		(char*) "nop",
 		(char*) "nop",
 	},

 	[3][8] = (opcode_entry) {

 		(char*) "cmp",
 		(char*) "Eb",
 		(char*) "Gb",
 	},
 	[3][9] = (opcode_entry) {

 		(char*) "cmp",
 		(char*) "Ev",
 		(char*) "Gv",
 	},
 	[3][10] = (opcode_entry) {

 		(char*) "cmp",
 		(char*) "Gb",
 		(char*) "Eb",
 	},

 	[3][11] = (opcode_entry) {

 		(char*) "cmp",
 		(char*) "Gv",
 		(char*) "Ev",
 	},
 	[3][12] = (opcode_entry) {

 		(char*) "cmp",
 		(char*) "AL",
 		(char*) "Ib",
 	},
 	[3][13] = (opcode_entry) {

 		(char*) "cmp",
 		(char*) "rax",
 		(char*) "Iz",
 	},
 	[3][14] = (opcode_entry) {

 		(char*) "ds",
 		(char*) "prefix",
 		(char*) "nop",
 	},
 	[3][15] = (opcode_entry) {

 		(char*) "aas",
 		(char*) "nop",
 		(char*) "nop",
 	},

 	[4][0] = (opcode_entry) {

 		(char*) "inc",
 		(char*) "eax",
 		(char*) "nop",
 	},
 	[4][1] = (opcode_entry) {

 		(char*) "inc",
 		(char*) "ecx",
 		(char*) "nop",
 	},
 	[4][2] = (opcode_entry) {

		(char*) "inc",
 		(char*) "edx",
 		(char*) "nop",
 	},

 	[4][3] = (opcode_entry) {

 		(char*) "inc",
 		(char*) "ebx",
 		(char*) "nop",
 	},
 	[4][4] = (opcode_entry) {

 		(char*) "inc",
 		(char*) "esp",
 		(char*) "nop",
 	},
 	[4][5] = (opcode_entry) {

 		(char*) "inc",
 		(char*) "ebp",
 		(char*) "nop",
 	},
 	[4][6] = (opcode_entry) {

 		(char*) "inc",
 		(char*) "esi",
 		(char*) "nop",
 	},
 	[4][7] = (opcode_entry) {

 		(char*) "inc",
 		(char*) "edi",
 		(char*) "nop",
 	},

 	[4][8] = (opcode_entry) {

 		(char*) "dec",
 		(char*) "eax",
 		(char*) "nop",
 	},
 	[4][9] = (opcode_entry) {

 		(char*) "dec",
 		(char*) "ecx",
 		(char*) "nop",
 	},
 	[4][10] = (opcode_entry) {

		(char*) "dec",
 		(char*) "edx",
 		(char*) "nop",
 	},

 	[4][11] = (opcode_entry) {

 		(char*) "dec",
 		(char*) "ebx",
 		(char*) "nop",
 	},
 	[4][12] = (opcode_entry) {

 		(char*) "dec",
 		(char*) "esp",
 		(char*) "nop",
 	},
 	[4][13] = (opcode_entry) {

 		(char*) "dec",
 		(char*) "ebp",
 		(char*) "nop",
 	},
 	[4][14] = (opcode_entry) {

 		(char*) "dec",
 		(char*) "esi",
 		(char*) "nop",
 	},
 	[4][15] = (opcode_entry) {

 		(char*) "dec",
 		(char*) "edi",
 		(char*) "nop",
 	},


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



























