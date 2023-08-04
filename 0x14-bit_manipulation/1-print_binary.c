#include "main.h"
#include <stdlib.h>
#include <limits.h>
#include <math.h>
#include <stddef.h>

/**
 * print_binary - prints binary out of a number.
 * @n: a long int number.
 *
 * Return: nothing, (void).
 */
void print_binary(unsigned long int n)
{
	unsigned long int d, r;
	char c;

	c = 0;

	d = (unsigned long int) pow(2, sizeof(unsigned long int) * 8 - 1);

	while (d)
	{
		r = d & n;

		if (r == d)
		{
			c = 1;
			_putchar(49);
		}
		else if (c == 1 || d == 1)
			_putchar(48);

		d = d >> 1;
	}
}
