#include "main.h"
/**
 * _strncpy - copies the string from src to dest
 * in range of (n) bytes, if the src is less than
 * the n bytes the dest remaining bytes must hold
 * the value of '\0' to reach the full lenght of n bytes.
 *
 * @dest: the destination.
 * @src: the source string.
 * @n: the number of bytes to copy.
 *
 * Return: it's returning the sinal string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	char *temp;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	temp = dest;
	return (temp);
}
