#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - the entry point.
 * @argc: the argument counter.
 * @argv: the argument vector.
 *
 * Return: it returns 1 on success.
 */

int main(int argc, char **argv)
{
	char *printing_buffer[1024];
	unsigned int mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	int dest, src, c_dest, c_src, wrt, readN = 1024;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s", "Usage: cp file_from file_to\n");
		return (97);
	}
	src = open(argv[1], O_RDONLY);
	io_check(src, -1, argv[1], 'O');
	dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	io_check(dest, -1, argv[2], 'W');
	while (readN == 1024)
	{
		readN = read(src, printing_buffer, sizeof(printing_buffer));
		if (readN == -1)
		{
			io_check(-1, -1, argv[1], 'O');
		}
		wrt = write(dest, printing_buffer, readN);
		if (wrt == -1)
		{
			io_check(-1, -1, argv[2], 'W');
		}
	}
	c_src = close(src);
	io_check(c_src, src, NULL, 'C');
	c_dest = close(dest);
	io_check(c_dest, dest, NULL, 'C');
	return (0);
}
/**
 * io_check - checks if the file can be closed or opened.
 * @tt: the status returned by the call.
 * @file_des: the file descriptor.
 * @filename: the file name.
 * @mode: the passed mode, (C for close, W for write, O for open).
 *
 * Return: nothing (void).
 */
void io_check(int tt, int file_des, char *filename, char mode)
{
	if (mode == 'W' && tt == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	else if (mode == 'O' && tt == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	else if (mode == 'C' && tt == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", file_des);
		exit(100);
	}
}
