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
	unsigned int i;

	i = 0;
	counter = 0;
	if (b == NULL)
		return (0);
	for (counter = 0; b[counter]; counter++)
	{
		if (b[counter] < '0' || b[counter] < '1')
			return (0);
		i = 2 * i + (b[counter] - '0');
	}
	return (i);
}
