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

 	[5][0] = (opcode_entry) {

 		(char*) "push",
 		(char*) "eax",
 		(char*) "nop",
 	},
 	[5][1] = (opcode_entry) {

 		(char*) "push",
 		(char*) "ecx",
 		(char*) "nop",
 	},
 	[5][2] = (opcode_entry) {

 		(char*) "push",
 		(char*) "edx",
 		(char*) "nop",
 	},
 	[5][3] = (opcode_entry) {

 		(char*) "push",
 		(char*) "ebx",
 		(char*) "nop",
 	},
 	[5][4] = (opcode_entry) {

 		(char*) "push",
 		(char*) "esp",
 		(char*) "nop",
 	},
 	[5][5] = (opcode_entry) {

 		(char*) "push",
 		(char*) "ebp",
 		(char*) "nop",
 	},
 	[5][6] = (opcode_entry) {

 		(char*) "push",
 		(char*) "esi",
 		(char*) "nop",
 	},
 	[5][7] = (opcode_entry) {

 		(char*) "push",
 		(char*) "edi",
 		(char*) "nop",
 	},

 	[5][8] = (opcode_entry) {

 		(char*) "pop",
 		(char*) "eax",
 		(char*) "nop",
 	},
 	[5][9] = (opcode_entry) {

 		(char*) "pop",
 		(char*) "ecx",
 		(char*) "nop",
 	},
 	[5][10] = (opcode_entry) {

 		(char*) "pop",
 		(char*) "edx",
 		(char*) "nop",
 	},
 	[5][11] = (opcode_entry) {

 		(char*) "pop",
 		(char*) "ebx",
 		(char*) "nop",
 	},
 	[5][12] = (opcode_entry) {

 		(char*) "pop",
 		(char*) "esp",
 		(char*) "nop",
 	},
 	[5][13] = (opcode_entry) {

 		(char*) "pop",
 		(char*) "ebp",
 		(char*) "nop",
 	},
 	[5][14] = (opcode_entry) {

 		(char*) "pop",
 		(char*) "esi",
 		(char*) "nop",
 	},
 	[5][15] = (opcode_entry) {

 		(char*) "pop",
 		(char*) "edi",
 		(char*) "nop",
 	},
 	[6][0] = (opcode_entry) {

 		(char*) "pushad",
 		(char*) "nop",
 		(char*) "nop",
 	},
 	[6][1] = (opcode_entry) {

 		(char*) "popad",
 		(char*) "nop",
 		(char*) "nop",
 	},


 	[8][8] = (opcode_entry) {

 		(char*) "mov",
 		(char*) "Eb",
 		(char*) "Gb",
 	},
 	[8][9] = (opcode_entry) {

 		(char*) "mov",
 		(char*) "Ev",
 		(char*) "Gv",
 	},
 	[8][10] = (opcode_entry) {

 		(char*) "mov",
 		(char*) "Gb",
 		(char*) "Eb",
 	},

 	[8][11] = (opcode_entry) {

 		(char*) "mov",
 		(char*) "Gv",
 		(char*) "Ev",
 	 },

 	[11][0] = (opcode_entry) {

 		(char*) "mov",
 		(char*) "al",
 		(char*) "Ib",
 	},
 	[11][1] = (opcode_entry) {

 		(char*) "mov",
 		(char*) "cl",
 		(char*) "Ib",
 	},
 	[11][2] = (opcode_entry) {

 		(char*) "mov",
 		(char*) "dl",
 		(char*) "Ib",
 	},
 	[11][3] = (opcode_entry) {

 		(char*) "mov",
 		(char*) "bl",
 		(char*) "Ib",
 	},
 	[11][4] = (opcode_entry) {

 		(char*) "mov",
 		(char*) "ah",
 		(char*) "Ib",
 	},
 	[11][5] = (opcode_entry) {

 		(char*) "mov",
 		(char*) "ch",
 		(char*) "Ib",
 	},
 	[11][6] = (opcode_entry) {

 		(char*) "mov",
 		(char*) "dh",
 		(char*) "Ib",
 	},
 	[11][7] = (opcode_entry) {

 		(char*) "mov",
 		(char*) "bh",
 		(char*) "Ib",
 	},
	[11][8] = (opcode_entry) {

 		(char*) "mov",
 		(char*) "eax",
 		(char*) "Iv",
 	},
 	[11][9] = (opcode_entry) {

 		(char*) "mov",
 		(char*) "ecx",
 		(char*) "Iv",
 	},
 	[11][10] = (opcode_entry) {

 		(char*) "mov",
 		(char*) "edx",
 		(char*) "Iv",
 	},
 	[11][11] = (opcode_entry) {

 		(char*) "mov",
 		(char*) "ebx",
 		(char*) "Iv",
 	},
 	[11][12] = (opcode_entry) {

 		(char*) "mov",
 		(char*) "esp",
 		(char*) "Iv",
 	},
 	[11][13] = (opcode_entry) {

 		(char*) "mov",
 		(char*) "ebp",
 		(char*) "Iv",
 	},
 	[11][14] = (opcode_entry) {

 		(char*) "mov",
 		(char*) "esi",
 		(char*) "Iv",
 	},
 	[11][15] = (opcode_entry) {

 		(char*) "mov",
 		(char*) "edi",
 		(char*) "Iv",
 	},
};


