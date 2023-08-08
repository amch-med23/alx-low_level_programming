#include "main.h"
/**
 * append_text_to_file - appends text to the EOF.
 * @filename: the filename.
 * @text_content: the content of the file.
 *
 * Return: 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_des, letters, perm;

	if (!filename)
	{
		return (-1);
	}
	file_des = open(filename, O_WRONLY | O_APPEND);
	if (text_content)
	{
		letters = 0;
		while (text_content[letters])
		{
			letters++;
		}
		perm = write(file_des, text_content, letters);
		if (perm == -1)
		{
			return (-1);
		}
	}
	close(file_des);
	return (1);
}
