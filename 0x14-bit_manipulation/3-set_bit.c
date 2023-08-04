#include "main.h"

/**
 * set_bit - sets the value to 1 at a given index.
 * @n: pointer to the number.
 * @index: the given index.
 *
 * Return: 1 if it worked, -1 otherwise.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int c;
	unsigned int s;

	s = sizeof(unsigned long int) * 8 - 1;
	if (index > s)
	{
		return (-1);
	}
	c = 1 << index;
	*n = *n | c;
	return (1);
}
