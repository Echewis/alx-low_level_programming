#include "main.h"
#include <elf.h>

#define MAX_READ 1024
/**
 * print_elf_header - is a prototype
 * @header: is the address
 */
void print_elf_header(Elf64_Ehdr *header)
{
	printf("Magic: ");

	int i = 0;

	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("\nClass: %s\n", header->e_ident[EI_CLASS] == ELFCLASS32 ?
		"ELF32" : "ELF64");
	printf("Data: %s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ?
	"2's complement, little endian" : "2's complement, big endian");
	printf("Version: %d\n", header->e_ident[EI_VERSION]);
	printf("OS/ABI: %d\n", header->e_ident[EI_OSABI]);
	printf("ABI Version: %d\n", header->e_ident[EI_ABIVERSION]);
	printf("Type: %d\n", header->e_type);
	printf("Entry point address: 0x%lx\n", header->e_entry);
}

/**
 * main - is main progeam
 * @argc: is the count of argument
 * @argv: is the list of argument
 * Return: will return P or N
 */
int main(int argc, char **argv)
{
	int fd;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: elf_header elf_filename\n");
		exit(98);
	}

	fd = open(argv[1], O_RDONLY);

	if (fd == -1)
	{
		fprintf(stderr, "Error opening files %s\n", argv[1]);
		exit(98);
	}

	Elf64_Ehdr header;

	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		fprintf(stderr, "Error reading ELF header file %s\n", argv[1]);
		exit(98);
	}

	if (header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1
	|| header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3)
	{
		fprintf(stderr, "%s is not an ELF file\n", argv[1]);
		exit(98);
	}
	print_elf_header(&header);
	close(fd);
}
