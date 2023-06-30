#include "main.h"
/**
 * cap_string - capitalizing a string.
 * @c: the string to capitalize.
 *
 * Return: it returns a string.
 */

char *cap_string(char *c)
{
	int i;

	i = 0;
	while (c[i] != '\0')
	{
		if (c[i] >= 'a' && c[i] <= 'z')
			c[i] -= 32;
		i++;
	}
	return (c);
}
