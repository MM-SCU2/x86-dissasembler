#ifndef MAP_H
#define MAP_H

typedef struct {

  char *instruction;
  char *first_op;
  char *sec_op;

} opcode_entry;

opcode_entry op_table[16][16];

#endif
