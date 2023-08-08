#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * read_textfile - reads the text file
 * @filename: the filename.
 * @letters: the number of letters to read and print
 *
 * Return: the number of letters it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fl;
	ssize_t readL, writeL;
	char *printing_buffer;

	if (filename == NULL)
	{
		return (0);
	}
	fl = open(filename, O_RDONLY);
	if (fl == -1)
	{
		return (0);
	}
	printing_buffer = malloc(sizeof(char) * letters);
	if (printing_buffer == NULL)
	{
		close(fl);
		return (0);
	}
	readL = read(fl, printing_buffer, letters);
	close(fl);
	if (readL == -1)
	{
		free(printing_buffer);
		return (0);
	}
	writeL = write(STDOUT_FILENO, printing_buffer, readL);
	free(printing_buffer);
	if (writeL != readL)
		return (0);
	return (writeL);
}
