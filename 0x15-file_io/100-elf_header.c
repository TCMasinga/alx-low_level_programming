#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_abi(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_type(uint16_t e_type);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);

/**
 * check_elf - Function to check if the file is an ELF file
 * @e_ident: input value pointer
 */

void check_elf(unsigned char *e_ident)
{
	int index;

	for (index = 0; index < 4; index++)
	{
	if (e_ident[index] != ELFMAG[index])
	{
		dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
		exit(98);
	}

	}
}

/**
 * print_magic - Function to print ELF magic
 * @e_ident: input a pointer to an array
 * Description: magic numbers are separated by spaces.
 */

void print_magic(unsigned char *e_ident)
{
	int i;

	printf("ELF Header:\n");
	printf("  Magic:   ");

	for (i = 0; i < EI_NIDENT; i++)
	{
	printf("%02x ", e_ident[i]);
	}
	printf("\n");
}

/**
 * print_class - Function to print ELF class
 * @e_ident: input a pointer to an array containing the ELF class.
 */

void print_class(unsigned char *e_ident)
{
	printf("  Class:                             ");

	switch (e_ident[EI_CLASS])
	{
	case ELFCLASS32:
	printf("ELF32\n");
		break;
	case ELFCLASS64:
	printf("ELF64\n");
		break;
	default:
	printf("Invalid\n");
		break;
	}
}

/**
 * print_data - Function to print ELF data encoding
 * @e_ident: input a pointer to an array
 */

void print_data(unsigned char *e_ident)
{
	printf("  Data:			");

	switch (e_ident[EI_DATA])
	{
	case ELFDATA2LSB:
		printf("2's complement, little-endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big-endian\n");
		break;
	default:
		printf("Invalid\n");
		break;
	}
}

/**
 * print_version - Function to print ELF version
 * @e_ident: input a pointer to an array
 */

void print_version(unsigned char *e_ident)
{
	printf(" Version:		%d (current)\n", e_ident[EI_VERSION]);
}

/**
 * print_osabi - Function to print ELF OS/ABI
 * @e_ident: input a pointer to an array
 */

void print_osabi(unsigned char *e_ident)
{
	printf("  OS/ABI:			");

	switch (e_ident[EI_OSABI])
	{
	case ELFOSABI_SYSV:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	default:
		printf("Other\n");
		break;
	}
}

/**
 * print_abi - Function to print ABI version
 * @e_ident: input a pointer to an array
 */

void print_abi(unsigned char *e_ident)
{
	printf(" ABI Version:		%d\n", e_ident[EI_ABIVERSION]);
}

/**
 * print_type - Function to print ELF type
 * @e_type: input the ELF type.
 */

void print_type(uint16_t e_type)
{
	printf("  Type:			");

	switch (e_type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: 0x%x>\n", e_type);
		break;
	}
}

/**
 * print_entry - Function to print entry point address
 * @e_entry: input the address
 * @e_ident: input a pointer to an array
 */

void print_entry(uint64_t e_entry, unsigned char *e_ident)
{
	printf("  Entry point address:			");

	if (e_ident[EI_CLASS] == ELFCLASS32)
	{
	printf("0x%x\n", (unsigned int)e_entry);
	}

	else
	{
	printf("0x%lx\n", (unsigned long)e_entry);
	}
}

/**
 * close_elf - Function to close an ELF file
 * @elf: The file descriptor of the ELF file.
 * Description: If the file cannot be closed - exit code 98.
*/

void close_elf(int elf)
{
	if (close(elf) == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", elf);
	exit(98);
	}
}

/**
 * main - displays the information
 * @argc: input number of arguments
 * @argv:input the array of pointers
 * Return: 0 on success.
 */

int main(int argc, char *argv[])
{
	int fd;
	unsigned char e_ident[EI_NIDENT];
	ssize_t bytes_read;
	Elf64_Ehdr header;

	if (argc != 2)
	{
	fprintf(stderr, "Usage: %s <ELF file>\n", argv[0]);
	return (98);
	}

	fd = open(argv[1], O_RDONLY);

	if (fd == -1)
	{
	perror("Error opening file");
	return (98);
	}

	bytes_read = read(fd, e_ident, EI_NIDENT);

	if (bytes_read == -1)
	{
	perror("Error reading ELF header");
	close_elf(fd);
	return (98);
	}

/*check if it's an ELF file*/
	check_elf(e_ident);

/*Print ELF header information*/
	print_magic(e_ident);
	print_class(e_ident);
	print_data(e_ident);
	print_version(e_ident);
	print_osabi(e_ident);
	print_abi(e_ident);

/* this funtion read and print the rest of the ELF header*/

	if (read(fd, &header, sizeof(header)) == -1)
	{
	perror("Error reading ELF header");
	close_elf(fd);

	return (98);
	}

	print_type(header.e_type);
	print_entry(header.e_entry, e_ident);

	close_elf(fd);
	return (0);
}
