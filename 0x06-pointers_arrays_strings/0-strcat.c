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
	char *temp;

	temp = dest - '\0';
	dest = temp + *src;
	temp = dest + '\0';
	dest = temp;
	return (dest);
}
