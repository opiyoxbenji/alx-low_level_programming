#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

void display_error(const char *msg);
void display_elf(const char *filename);
void print_magic(unsigned char *ident);
void print_class(unsigned char class);
void print_data(unsigned char data);
void print_os(unsigned char osabi);

/**
 * main - entry point for the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		display_error("Usage: elf_header elf_filename");
	}

	display_elf(argv[1]);

	return (0);
}

/**
 * display_error - display error msg
 * @msg: error msg
 */
void display_error(const char *msg)
{
	fprintf(stderr, "%s\n", msg);
	exit(98);
}

/**
 * display_elf - displays information contained in an ELF header
 * @filename: name of ELF file
 */
void display_elf(const char *filename)
{
	int fd;
	Elf64_Ehdr header;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		display_error("Error: Cannot open file");
	}

	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		display_error("Error: Cannot read file");
	}

	print_magic(header.e_ident);
	print_class(header.e_ident[EI_CLASS]);
	print_data(header.e_ident[EI_DATA]);
	printf("Version:                            %d\n",
			header.e_ident[EI_VERSION]);
	print_os(header.e_ident[EI_OSABI]);
	printf("ABI Version:                        %d\n",
			header.e_ident[EI_ABIVERSION]);
	printf("Type:                               %d\n",
			header.e_type);
	printf("Entry point address:                0x%lx\n",
			header.e_entry);

	close(fd);
}

/**
* print_magic - prints the magic
* @ident: identity
*/
void print_magic(unsigned char *ident)
{
	int i;

	printf("Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", ident[i]);
	}
	printf("\n");
}

/**
* print_class - prints the class
* @class: class to be printed
*/
void print_class(unsigned char class)
{
	printf("Class:                              ");
	switch (class)
	{
		case ELFCLASSNONE:
			printf("None\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown>\n");
			break;
	}
}

/**
* print_data - prints the data encoding
* @data: data encoding to be printed
*/
void print_data(unsigned char data)
{
	printf("Data:                               ");
	switch (data)
	{
		case ELFDATANONE:
			printf("None\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown>\n");
			break;
	}
}

/**
* print_os - prints the operating system or ABI
* @osabi: operating system or ABI to be printed
*/
void print_os(unsigned char osabi)
{
	printf("OS/ABI:                             ");
	switch (osabi)
	{
		case ELFOSABI_SYSV:
			printf("UNIX System V ABI\n");
			break;
		case ELFOSABI_HPUX:
			printf("HP-UX ABI\n");
			break;
		case ELFOSABI_NETBSD:
			printf("NetBSD ABI\n");
			break;
		case ELFOSABI_LINUX:
			printf("Linux ABI\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("Solaris ABI\n");
			break;
		case ELFOSABI_AIX:
			printf("AIX ABI\n");
			break;
		case ELFOSABI_IRIX:
			printf("IRIX ABI\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("FreeBSD ABI\n");
			break;
		case ELFOSABI_TRU64:
			printf("TRU64 UNIX ABI\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM architecture ABI\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone (embedded) application\n");
			break;
		default:
			printf("<unknown>\n");
			break;
	}
}
