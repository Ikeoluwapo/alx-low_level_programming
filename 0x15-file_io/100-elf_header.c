#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>

#define ELF_MAGIC "\x7f""ELF"
#define ELF_MAGIC_LEN 4

#define EI_CLASS 4
#define EI_DATA 5
#define EI_VERSION 6
#define EI_OSABI 7
#define EI_ABIVERSION 8

#define ET_NONE 0
#define ET_REL 1
#define ET_EXEC 2
#define ET_DYN 3
#define ET_CORE 4


/**
 * main - display information
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int fd, rit;
	Elf64_Ehdr ehdr;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		fprintf(stderr, "Error: Can't open %s (%s)\n", argv[1], strerror(errno));
		exit(98);
	}

	rit = read(fd, &ehdr, sizeof(ehdr));
	if (rit == -1)
	{
		fprintf(stderr, "Error: Can't read ELF header (%s)\n", strerror(errno));
		close(fd);
		exit(98);
	}

	if (memcmp(ehdr.e_ident, ELFMAG, ELF_MAGIC_LEN) != 0)
	{
		fprintf(stderr, "Error: Not an ELF file\n");
		close(fd);
		exit(98);
	}

	printf("Magic: %02x %02x %02x %02x\n", ehdr.e_ident[0], ehdr.e_ident[1], ehdr.e_ident[2], ehdr.e_ident[3]);
	printf("Class: %s\n", ehdr.e_ident[EI_CLASS] == 1 ? "ELF32" :
			ehdr.e_ident[EI_CLASS] == 2 ? "ELF64" :
			"Unknown");
	printf("Data: %s\n", ehdr.e_ident[EI_DATA] == 1 ? "2's complement, little endian" :
			ehdr.e_ident[EI_DATA] == 2 ? "2's complement, big endian" :
			"Unknown");
	printf("Version: %d\n", ehdr.e_ident[EI_VERSION]);
	printf("OS/ABI: %s\n", ehdr.e_ident[EI_OSABI] == 0 ? "System V" :
			ehdr.e_ident[EI_OSABI] == 3 ? "Linux" :
			"Unknown");
	printf("ABI Version: %d\n", ehdr.e_ident[EI_ABIVERSION]);
	printf("Type: %s\n", ehdr.e_type == ET_NONE ? "NONE (Unknown)" :
			ehdr.e_type == ET_REL ? "REL (Relocatable file)" :
			ehdr.e_type == ET_EXEC ? "EXEC (Executable file)" :
			ehdr.e_type == ET_DYN ? "DYN (Shared object file)" :
	"CORE (Core file)");
	return (0);
}
