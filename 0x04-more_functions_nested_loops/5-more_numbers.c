#include "main.h"
/**
 * more_numbers - prints the numbers from 0 - 14.
 * Return: it's nothing.
 */

void more_numbers(void)
{
	int i, j, c;
	int num[5] = {10, 11, 12, 13, 14};

	i = 0;
	while (i < 10)
	{
		j = 48;
		while (j < 58)
		{
			_putchar(j);
			if (j == 57)
			{
				c = 0;
				while (c < 5)
				{
					_putchar((num[c] / 10) + '0');
					_putchar((num[c] % 10) + '0');
					c++;
				}
				
			}
			j++;
		}
		i++;
		_putchar('\n');
	}
}
