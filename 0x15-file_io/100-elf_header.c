#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

#define MAGIC_NUM_SIZE 4

void display_elf_header(unsigned char *header);
int validate_elf_header(unsigned char *header);

/**
 * main - the entry point.
 * @argc: the number of supplied arguments.
 * @argv: the argument vector.
 *
 * Return: 0 on success, 98 otherwize.
 */
int main(int argc, char **argv)
{
	int f_des;
	unsigned char header[64];

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		return (98);
	}
	f_des = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		perror("Error");
		return (98);
	}
	if (read(fd, header, sizeof(header)) != sizeof(header))
	{
		perror("Error");
		close(f_des);
		return (98);
	}
	if (!verify_elf_header(header))
	{
		fprintf(stderr, "This is not an ELF file\n");
		close(f_des);
		return (98);
	}
	show_elf_header(header);
	close(f_des);
	return (0);
}

/**
 * verify_elf_header - veryfies the header of the elf file.
 * @header : the supplied header.
 *
 * Return: 0 in case of a failure, 1 on success.
 */
int verify_elf_header(unsigned char *header)
{
	unsigned char elf_magic[MAGIC_NUM_SIZE] = { 0x7f, 'E', 'L', 'F' };
	int i;

	i = 0;
	while (i < MAGIC_NUM_SIZE)
	{
		if (header[i] != elf_magic[i])
			return (0);
		i++;
	}
	return (1);
}

/**
 * show_elf_header - displays the elf header.
 * @header: the supplied header.
 *
 * Return: nothing (void).
 */
void show_elf_header(unsigned char *header)
{
	int i;
	int type;

	i = 0;
	printf("Magic:   ");
	while (i < MAGIC_NUM_SIZE)
	{
		printf("%02x ", header[i]);
		i++;
	}
	printf("\n");
	printf("Class:   ");
	switch (header[4])
	{
	case 1:
		printf("ELF32\n");
		break;
	case 2:
		printf("ELF64\n");
		break;
	default:
		printf("Unknown\n");
	}
	printf("Data:    ");
	switch (header[5])
	{
	case 1:
		printf("2's complement, little endian\n");
		break;
	case 2:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("The compliment is unknown\n");
	}

	printf("Version: %d (current)\n", header[6]);
	printf("OS/ABI: ");
	switch (header[7])
	{
	case 0:
		printf("UNIX - System V\n");
		break;
	case 1:
		printf("UNIX - HP-UX\n");
		break;
	default:
		printf("OS/ABI is unknown\n");
	}
	printf("ABI Version: %d\n", header[8]);
	type = header[16] | (header[17] << 8);
	printf("Type:     ");
	switch (type)
	{
	case 1:
		printf("REL (Relocatable file)\n");
		break;
	case 2:
		printf("EXEC (Executable file)\n");
		break;
	case 3:
		printf("DYN (Shared object file)\n");
		break;
	case 4:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("Unknown\n");
	}
}

