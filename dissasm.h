#ifndef DISSASM_H
#define DISSASM_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "elf.h"


/*

typedef struct {
        unsigned char   e_ident[EI_NIDENT]; 
        Elf32_Half      e_type;
        Elf32_Half      e_machine;                 machine architecture
        Elf32_Word      e_version;
        Elf32_Addr      e_entry; 					
        Elf32_Off       e_phoff;
        Elf32_Off       e_shoff;
        Elf32_Word      e_flags;
        Elf32_Half      e_ehsize;           The ELF header's size in bytes.
        Elf32_Half      e_phentsize; 		The size in bytes of one entry in the file's program header table. All entries are the same size.
        Elf32_Half      e_phnum;  			number of entries in program header table
        Elf32_Half      e_shentsize;  		byte'size of an entry of the section header table
        Elf32_Half      e_shnum;   			number of entries in the section header table
        Elf32_Half      e_shstrndx; 		
} Elf32_Ehdr;


entry of the section header

typedef struct {
        elf32_Word      sh_name; 			name of the section
        Elf32_Word      sh_type; 			section type and semantic
        Elf32_Word      sh_flags;  		
        Elf32_Addr      sh_addr;  			If the section appears in the memory image of a process, this member gives the address at which the section's first byte should reside. Otherwise, the member contains the value zero.
        Elf32_Off       sh_offset;  		The byte offset from the beginning of the file to the first byte in the section. For a SHT_NOBITS section, this member indicates the conceptual offset in the file, as the section occupies no space in the file.
        Elf32_Word      sh_size; 			The section's size in bytes. Unless the section type is SHT_NOBITS, the section occupies sh_size bytes in the file. A section of type SHT_NOBITS can have a nonzero size, but the section occupies no space in the file.
        Elf32_Word      sh_link;
        Elf32_Word      sh_info;
        Elf32_Word      sh_addralign;
        Elf32_Word      sh_entsize;
} Elf32_Shdr;


*/
void read_file(FILE* fp, Elf32_Ehdr* elfhead);
void read_sections(FILE* fp,Elf32_Ehdr* elfhead, Elf32_Shdr* elf_shdr);
void section_name(FILE* fp, Elf32_Shdr* sections , Elf32_Word stable_index , Elf32_Word sh_name_index);


#endif



