#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: the number.
 * @index: the index.
 *
 * Return: it returns the value of the bit index, otherwise -1.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int d, r;
	unsigned int pos;

	pos = sizeof(unsigned long int) * 8 - 1;
	if (index > pos)
	{
		return (-1);
	}
	d = 1 << index;
	r = n & d;
	if (d == r)
	{
		return (1);
	}
	return (0);
}
