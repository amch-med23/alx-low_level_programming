#include "main.h"
/**
 * print_diagonal - prints a diagonal of spacces
 * @n: the number of the diagonal.
 *
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
		int j, k, m;

		m = n - 1;
		k = n - m;
		while (k <= n)
		{
			j = 1;
			while (j < k)
			{
				_putchar(' ');
				j++;
			}
			_putchar('\\');
			_putchar('\n');
			k++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
