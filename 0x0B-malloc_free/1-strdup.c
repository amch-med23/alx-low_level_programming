#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _strdup - gives a ptr to a duplicated string in memory.
 * @str: the string to doplicate.
 *
 * Return: a ptr to the memory address of the newely created
 * string.
 */

char *_strdup(char *str)
{
	char *dest;
	int size, i __attribute__ ((unused));

	if (str == NULL)
	{
		return (NULL);
	}
	size = strlen(str);
	dest = malloc(sizeof(char) * size + 1);
	if (dest == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i <= size)
	{
		*(dest + i) = *(str + i);
		i++;
	}
	return (dest);
}
