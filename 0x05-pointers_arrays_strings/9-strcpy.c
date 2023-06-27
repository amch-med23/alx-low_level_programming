#include "main.h"
/**
 * _strcpy - copies the string pinted to by src to.
 * dest.
 * @src: the source chars.
 * @dest: the destination chars.
 *
 * Return: it returns the dest char.
 */

char *_strcpy(char *dest, char *src)
{
	int c;

	for (c = 0; src[c] != '\0'; c++)
	{
		dest[c] = src[c];
	}
	dest[c] = '\0';
	return (dest);
}
