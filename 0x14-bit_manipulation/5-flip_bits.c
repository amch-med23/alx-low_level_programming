#include "main.h"

/**
 * flip_bits - gives the number of bits to flip to get another num.
 * @n: the given number;
 * @m: the desired number.
 *
 * Return: the number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, c;
	unsigned long int cc, ex;

	c = 0;
	ex = n ^ m;
	i = 63;
	while (i >= 0)
	{
		cc = ex >> i;
		if (cc & 1)
		{
			c++;
		}
		i--;
	}
	return (c);
}
