#include "main.h"

/**
 * clear_bit - a fucntion to set the bit value to 0 t a given index.
 * @n: a pointer to the given number.
 * @index: the given index.
 *
 * Return: it returns 1 if success or -1 otehrwise.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int size;

	size = sizeof(unsigned long int) * 8;
	if (index > size)
	{
		return (-1);
	}
	*n = *n & ~(1 << index);
	return (1);
}
