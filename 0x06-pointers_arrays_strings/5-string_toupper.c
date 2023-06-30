#include "main.h"
/**
 * string_toupper - capitalizing a string.
 * @c: the string to capitalize.
 *
 * Return: it returns a string.
 */

char *string_toupper(char *c)
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
