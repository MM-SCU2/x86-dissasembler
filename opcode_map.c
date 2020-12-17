#include "opcode_map.h"



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


