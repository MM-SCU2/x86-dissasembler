#include "decoder.h"

char *extended_registers[8] = {"eax", "ecx", "edx", "ebx",
                               "esp", "ebp", "esi", "edi"};
char *half_registers[8] = {"ax", "cx", "dx", "bx", "sp", "bp", "si", "di"};
char *indirec_registers[8] = {"[eax]", "[ecx]", "[edx]", "[ebx]",
                              "[esp]", "[ebp]", "[esi]", "[edi]"};

/*
=============================
=============================

COMPARISON AND LENGHT FUNCTIONS

=============================
=============================

*/

uint8_t string_match(char *sf, char *ss) {

  while (*sf == *ss) {

    if (*sf == '\0' || *ss == '\0')
      break;
    sf++;
    ss++;
  }

  if (*sf == '\0' && *ss == '\0')
    return 1;
  else
    return 0;
}

uint8_t is_reg(char *operand) {

  for (uint8_t i = 0; i < 8; i++)
    if (string_match(operand, extended_registers[i]))
      return 1;

  return 0;
}

/***************************************************************************************************************************************
=====================================================================================================================================

INST_SIZE
calculates the size of an complete instruction.

according to the information of the opcode table, we add to the offset the
necesary displacement .

1)if it is a no operand instruction then it doesn't have mod byte, so it is not
requiered to check anything else, it has 1 byte displacement.

2) if it has one operand, it may or may not use a register, most of times it
doesnt require a mod byte either cuz info about the operand is found on the
opcade table, they tend to be immediates or register names.

3) if it has two operands then it surely has a mod byte (and maybe a sybe byte),
so we need to add one byte per the mod byte and check if it uses immediates or
other stuff.

====================================================================================================================================
*/

uint8_t inst_size(uint8_t *instructions, uint8_t opcode, uint8_t offset) {

  uint8_t file = (opcode >> 4) & 0x0f;
  uint8_t row = opcode & 0x0f;
  uint8_t res = 0;

  // check if it has mod byte

  // the instruction has none operand so none mob byte or aditional features
  if (string_match(op_table[file][row].first_op, "nop") &&
      string_match(op_table[file][row].sec_op, "nop"))
    res++;

  // the instructions has one operand so a move byte, we have to determinate its
  // size
  else if (!string_match(op_table[file][row].first_op, "nop") &&
           string_match(op_table[file][row].sec_op, "nop")) {

    // uses and immediate

    if (op_table[file][row].first_op[0] == 'O')
      res += 4;

    // has mod byte

    else if (op_table[file][row].first_op[0] == 'G' ||
             op_table[file][row].first_op[0] == 'E')
      res += 2;

    // it had the parameter harcoded on the opcode table

    else
      res++;

  } else {

    // two operands

    // it has a mod byte and doens't use and immediate.

    if ((op_table[file][row].first_op[0] == 'G' ||
         op_table[file][row].first_op[0] == 'E') &&
        op_table[file][row].sec_op[0] != 'I')
      res += 2;

    // it has a mod byte and use and immediate.

    else if (op_table[file][row].sec_op[0] == 'I')
      res += 5;

    else
      res += 2;
  }

  return res;
}

/*=========================================
===========================================

DECODIFICATION FUNCTIONS

============================================
============================================
*/

void has_immediate(uint8_t *instructions, char *name, char *op1,
                   uint8_t offset) {

  uint8_t data1 = instructions[offset + 2];
  uint8_t data2 = instructions[offset + 3];
  uint8_t data3 = instructions[offset + 4];
  //  uint8_t data4 = instructions[offset+5];

  int immediate = (data1 << 24) | (data2 << 16) | (data3 << 8);
  printf("  %s %s, %d \n", name, op1, immediate);
}

char *operand_decode(uint8_t *instructions, char *operand, uint8_t offset) {

  if (is_reg(operand)) {
    for (uint8_t i = 0; i < 8; i++) {
      if (string_match(operand, extended_registers[i]))
        return extended_registers[i];
    }
  } else if (operand[0] == 'G') { //  the reg-mod bits indicate a register

    // xx ccc xxx
    // 0011 1000  = 0x38
    uint8_t modByte = instructions[offset + 1];
    uint8_t reg_in = (modByte & 0x38) >> 3; // turn it into an index
    return extended_registers[reg_in];

  } else if (operand[0] ==
             'E') { // the mod indicates type of acceses and reg the register

    uint8_t modByte = instructions[offset + 1];

    uint8_t index = modByte & 0x7;       // index
    uint8_t mod = (modByte & 0xc0) >> 6; // mod

    switch (mod) {
    case 0x00: // indirect access
      return indirec_registers[index];

    case 0x3:
      return extended_registers[index]; // direct access

    default:
      return "xxx";
    }
  }
  return "xxx";
}

void one_operand(uint8_t *instructions, char *name, char *first_op,
                 uint8_t offset) {

  if (is_reg(first_op)) {
    printf("  %s %s  \n", name, first_op);
  } else if (first_op[0] == 'O') {
    has_immediate(instructions, name, first_op, offset);
  } else {
    char *op = operand_decode(instructions, first_op, offset);
    printf("  %s %s  \n", name, op);
  }
}

void two_operand(uint8_t *instructions, char *name, char *first_op,
                 char *sec_op, uint8_t offset) {

  char *op1 = NULL;
  char *op2 = NULL;

  // hay que ver cuales son los operandos

  op1 = operand_decode(instructions, first_op, offset);

  if (sec_op[0] == 'I') {

    has_immediate(instructions, name, op1, offset);
  }

  else {

    op2 = operand_decode(instructions, sec_op, offset);
    printf("  %s %s, %s \n", name, op1, op2);
  }
}

/*
============================================
==========================================

MAIN DECODE FUNCTION

==========================================
==========================================
*/

void one_byte_Opcode(uint8_t *instructions, uint8_t opcode, uint8_t offset) {

  // we get the indexes to the op table

  uint8_t file = (opcode >> 4) & 0x0f;
  uint8_t row = opcode & 0x0f;

  // extract the entry and translate de information

  // the instruction has none operand
  if (string_match(op_table[file][row].first_op, "nop") &&
      string_match(op_table[file][row].sec_op, "nop"))
    printf("  %s\n", op_table[file][row].instruction);
  // the instruction has one operand
  else if (!string_match(op_table[file][row].first_op, "nop") &&
           string_match(op_table[file][row].sec_op, "nop"))
    one_operand(instructions, op_table[file][row].instruction,
                op_table[file][row].first_op, offset);
  // the instruction has two operands
  else
    two_operand(instructions, op_table[file][row].instruction,
                op_table[file][row].first_op, op_table[file][row].sec_op,
                offset);
}

void decode(uint8_t *instructions, uint8_t opcode, uint8_t offset) {
  one_byte_Opcode(instructions, opcode, offset);
}
