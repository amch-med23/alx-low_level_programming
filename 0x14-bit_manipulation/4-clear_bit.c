#include "main.h"

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
