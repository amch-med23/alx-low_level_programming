#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * binary_to_uint - converts binary to unsigned int value
 * @b: the binary string.
 *
 * Return: an unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	int counter;
	unsigned int len, i, j;

	len = strlen(b);
	i = 0;
	j = 1;
	if (b == NULL)
		return (0);
	for (counter = len - 1; counter >= 0; counter--)
	{
		if (b[counter] != 48 && b[counter] != 49)
		{
			return (0);
		}
		else if (b[counter] == 49)
		{
			i += j;
		}
		j *= 2;
	}
	return (i);
}
