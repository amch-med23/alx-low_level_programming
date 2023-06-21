#include "main.h"
#include <stdio.h>
/**
 * print_times_table - prints the times table for a given number.
 * @n: it's the parameter that defines the times table to be printed.
 */

void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int i, j, k;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = i * j;
				if (k < 10 && j < n)
				{
					_putchar(k + '0');
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				else if (k < 10 && j == n)
				{
					_putchar(k + '0');
					_putchar('\n');
				}
				else if (k >= 10 && k < 100 && j < n)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((k / 10) + '0');
					_putchar((k % 10) + '0');
					_putchar(',');
				}
				else if (k >= 10 && k < 100 && j == n)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((k / 10)+ '0');
					_putchar((k % 10) + '0');
					_putchar('\n');
				}
				else if (k >= 100 && j < n)
				{
					_putchar(' ');
					_putchar((k / 100) + '0');
					_putchar(((k / 10 ) % 10) + '0');
					_putchar((k % 10) + '0');
					_putchar(',');
				}
				else if (k >= 100 && j == n)
				{
					_putchar(' ');
					_putchar((k / 100) + '0');
					_putchar(((k / 10) % 10) + '0');
					_putchar((k % 10) + '0');
					_putchar('\n');
				}
			}
		}
	}
}
