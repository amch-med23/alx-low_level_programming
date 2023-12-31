#include "main.h"
/**
 * _memset - fills a specified field in memory with a given
 * buffer content.
 * @s: the given buffer (pointed to).
 * @b: the constent character to fill the mem with.
 * @n: the first bytes of memory to fill.
 *
 * Return: it returns a pointer to the filled memory area.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	j = 0;
	while (j < n)
	{
		*((char *) s + j) = b;
		j++;
	}
	return (s);
}
