#include "main.h"
/**
 * print_square - printing a square.
 * @size: the size of the square.
 *
 * Return: it returns nothing.
 */

void print_square(int size)
{
	if (size > 0)
	{
		int i, j;

		i = 1;
		while(i <= size)
		{
			j = 1;
			while (j <= size)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
