#include "main.h"
/**
 * _strcat - concatenates two strings.
 * @dest: the destinations.
 * @src: the source.
 *
 * Return: it return a string.
 */

char *_strcat(char *dest, char *src)
{
	int i, j;
	char *temp;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	temp = dest;
	return (temp);
}
