#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

/**
* print_magic - prints the magic bytes of an ELF header
* @e_ident: the e_ident array of the header
*/
void print_magic(unsigned char *e_ident)
{
int i;

printf("  Magic:   ");
for (i = 0; i < EI_NIDENT; i++)
{
printf("%02x", e_ident[i]);
if (i < EI_NIDENT - 1)
printf(" ");
}
printf("\n");
}

/**
* print_class - prints the class of an ELF header
* @e_ident: the e_ident array of the header
*/
void print_class(unsigned char *e_ident)
{
printf("  Class:                             ");
switch (e_ident[EI_CLASS])
{
case ELFCLASSNONE:
printf("none\n");
break;
case ELFCLASS32:
printf("ELF32\n");
break;
case ELFCLASS64:
printf("ELF64\n");
break;
default:
printf("<unknown: %x>\n", e_ident[EI_CLASS]);
break;
}
}

/**
* print_data - prints the data encoding of an ELF header
* @e_ident: the e_ident array of the header
*/
void print_data(unsigned char *e_ident)
{
printf("  Data:                              ");
switch (e_ident[EI_DATA])
{
case ELFDATANONE:
printf("none\n");
break;
case ELFDATA2LSB:
printf("2's complement, little endian\n");
break;
case ELFDATA2MSB:
printf("2's complement, big endian\n");
break;
default:
printf("<unknown: %x>\n", e_ident[EI_DATA]);
break;
}
}

/**
* print_version - prints the version of an ELF header
* @e_ident: the e_ident array of the header
*/
void print_version(unsigned char *e_ident)
{
printf("  Version:                           %d", e_ident[EI_VERSION]);
switch (e_ident[EI_VERSION])
{
case EV_NONE:
printf(" (none)\n");
break;
case EV_CURRENT:
printf(" (current)\n");
break;
default:
printf("\n");
break;
}
}

/**
* print_osabi - prints the OS/ABI of an ELF header
* @e_ident: the e_ident array of the header
*/
void print_osabi(unsigned char *e_ident)
{
printf("  OS/ABI:                            ");
switch (e_ident[EI_OSABI])
{
case ELFOSABI_NONE:
printf("UNIX - System V\n");
break;
case ELFOSABI_HPUX:
printf("HP-UX\n");
break;
case ELFOSABI_NETBSD:
printf("NetBSD\n");
break;
case ELFOSABI_LINUX:
printf("Linux\n");
break;
case ELFOSABI_SOLARIS:
printf("Sun Solaris\n");
break;
case ELFOSABI_IRIX:
printf("SGI Irix\n");
break;
case ELFOSABI_FREEBSD:
printf("FreeBSD\n");
break;
case ELFOSABI_TRU64:
printf("Compaq TRU64 UNIX\n");
break;
case ELFOSABI_ARM:
printf("ARM architecture\n");
break;
case ELFOSABI_STANDALONE:
printf("Standalone (embedded) application\n");
break;
default:
printf("<unknown: %x>\n", e_ident[EI_OSABI]);
break;
}
}

/**
* print_abiversion - prints the ABI version of an ELF header
* @e_ident: the e_ident array of the header
*/
void print_abiversion(unsigned char *e_ident)
{
printf("  ABI Version:                       %d\n", e_ident[EI_ABIVERSION]);
}

/**
* print_type - prints the type of an ELF header
* @e_type: the e_type member of the header
* @e_machine: the e_machine member of the header
*/
void print_type(uint16_t e_type, uint16_t e_machine)
{
int et_none = 0;

if (e_machine == EM_MIPS || e_machine == EM_PARISC || e_machine == EM_SPARCV9)
et_none = 0xff00;

printf("  Type:                              ");
switch (e_type & ~et_none)
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
printf("<unknown: %x>\n", e_type);
break;
}
}

/**
* print_entry - prints the entry point address of an ELF header
* @e_entry: the e_entry member of the header
*/
void print_entry(uint64_t e_entry)
{
printf("  Entry point address:               %#lx\n", e_entry);
}

/**
* print_elf_header - prints the information of an ELF header
* @header: a pointer to the header struct
*/
void print_elf_header(Elf64_Ehdr *header)
{
printf("ELF Header:\n");
print_magic(header->e_ident);
print_class(header->e_ident);
print_data(header->e_ident);
print_version(header->e_ident);
print_osabi(header->e_ident);
print_abiversion(header->e_ident);
print_type(header->e_type, header->e_machine);
print_entry(header->e_entry);
}

/**
* main - displays the information contained in the ELF header at the start of an ELF file
* @argc: number of arguments
* @argv: array of arguments
* Return: 0 on success, exit with code on failure
*/
int main(int argc, char *argv[])
{
int fd; /* file descriptor */
Elf64_Ehdr header; /* header struct */
ssize_t bytes_read; /* number of bytes read */

/* check if number of arguments is correct */
if (argc != 2)
{
dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
exit(98);
}

/* open the ELF file in read-only mode */
fd = open(argv[1], O_RDONLY);

/* check if file can be opened */
if (fd == -1)
{
dprintf(STDERR_FILENO, "Error: Cannot read file %s\n", argv[1]);
exit(98);
}

/* read the ELF header from the file */
bytes_read = read(fd, &header, sizeof(header));

/* check if read was successful and header is valid */
if (bytes_read != sizeof(header) || header.e_ident[EI_MAG0] != ELFMAG0 ||
header.e_ident[EI_MAG1] != ELFMAG1 || header.e_ident[EI_MAG2] != ELFMAG2 ||
header.e_ident[EI_MAG3] != ELFMAG3)
{
dprintf(STDERR_FILENO, "Error: Not an ELF file - %s\n", argv[1]);
exit(98);
}

/* print the ELF header information */
print_elf_header(&header);

/* close the file descriptor*/
if (close(fd) == -1)
{
dprintf(STDERR_FILENO, "Error: Cannot close file descriptor %d\n", fd);
exit(98);
}

return (0);
}
