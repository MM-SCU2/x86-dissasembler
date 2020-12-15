#include "opcode_map.h"
#include "dissasm.h"




void read_file(FILE* fp, Elf32_Ehdr* elfhead){

	//  read the header file 

	fread(elfhead,sizeof(Elf32_Ehdr),1,fp);
	// check that it open it correctly 
	if( elfhead->e_ident[EI_MAG0] != 0x7f || elfhead->e_ident[EI_MAG1] != 'E' ||
	 elfhead->e_ident[EI_MAG2] != 'L' || elfhead->e_ident[EI_MAG3] != 'F' ){

		printf("It is not an ELF file\n");
		fclose(fp);
		exit(EXIT_FAILURE);
	}

	printf(" File type %d\n", elfhead->e_type );
	printf(" Machine version %d\n",elfhead->e_machine);  // number 3 indicates intel 80386
	printf(" Entry %d\n", elfhead->e_entry);
}




void read_sections(FILE* fp,Elf32_Ehdr* elfhead, Elf32_Shdr* elf_shdr){


	// stand the FP pointer upon the beggining of the section header
	// and copy into the buffer  

	fseek(fp, elfhead->e_shoff,SEEK_SET);
	fread(elf_shdr,  sizeof(Elf32_Shdr), elfhead->e_shnum ,fp);

	// allocate the string table to cache the section names

	char* string_table;
	string_table = malloc( elf_shdr[elfhead->e_shstrndx].sh_size);

	fseek(fp,elf_shdr[elfhead->e_shstrndx].sh_offset,SEEK_SET); 		// set the fp pointer upon the string table section
	fread(string_table,elf_shdr[elfhead->e_shstrndx].sh_size,1,fp); 	// bring the table to memory 


	printf("========================\n");
	printf("************************\n");
	printf("READING SECTIONS\n" );
	printf("************************\n");
	printf("========================\n");


	uint8_t* instructions = NULL;

	for ( int i=0 ; i < elfhead->e_shnum ; i++){

		instructions = malloc(elf_shdr[i].sh_size );

		printf(" section name : %s\n",string_table + elf_shdr[i].sh_name);
		printf(" section type : %d\n", elf_shdr[i].sh_type );
		printf(" section size : %d\n",elf_shdr[i].sh_size );

		// read data from section 
    	fseek(fp,elf_shdr[i].sh_offset,SEEK_SET);
 		fread(instructions,elf_shdr[i].sh_size,1,fp);

		// find name 
		printf(" Dissasembly of section %s\n",string_table + elf_shdr[i].sh_name );


		for (uint8_t j = 0 ; j < elf_shdr[i].sh_size ;){


			j+= decode(instructions ,instructions[j] ,j );

		}
		
		printf("\n");
		free(instructions);
	}

	free(string_table);
}





int main (int argc, char** argv){
	
	FILE * fp;
	Elf32_Ehdr* elfhead ;
	Elf32_Shdr* elf_shdr ;

	if ( argc < 2){

		printf("incorrect number of arguments\n" );
		exit(EXIT_FAILURE);
	}

	// we open the file 

	if( (fp = fopen( argv[1], "rb" )) == NULL)  {

		printf("Fail in opening %s\n", argv[1]);
      	exit(EXIT_FAILURE);
	}

	// allocate place to bring the header 

	elfhead = malloc( sizeof(Elf32_Ehdr));

	if( !elfhead ){

		printf("Run out of memory for ELF header\n");
		fclose(fp);
      	exit(EXIT_FAILURE);
	}

	// read the file 

	read_file(fp,elfhead);

	// allocate space for the section table 

	elf_shdr = malloc( sizeof(Elf32_Shdr) * elfhead->e_shnum);

	if( !elf_shdr ){

		printf("Run out of memory for section header\n");
		free( elfhead);
		fclose(fp);
      	exit(EXIT_FAILURE);
	}

	// read sectors 

	read_sections(fp,elfhead,elf_shdr);

	free(elfhead);
	free(elf_shdr);
	fclose(fp);
	return 0;
}
