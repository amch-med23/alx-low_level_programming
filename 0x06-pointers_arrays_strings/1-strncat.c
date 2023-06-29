#include "main.h"
/**
 * _strncat - concatenates two strings with
 * the selection of the n bytes from the second string.
 * @dest: the destination.
 * @src: the source.
 * @n: the number of bytes it's gonna take from the source.
 *
 * Return: it returns a string.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	char *temp;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	temp = dest;
	return (temp);
}
