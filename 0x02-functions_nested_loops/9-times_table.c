#include "main.h"
/**
 * times_tables - prints a times table on the screen.
 * 
 */

void times_table(void)
{
	int i;
	int k;
	int res;
	int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	i = 0;
	while (i < 10)
	{
		arr[i];
		k = 0;
		res = 0;
		while (k < 10)
		{
			res = arr[i] * arr[j];
			if (k < 9 && i < 9)
			{
				_putcahr(res + '0')
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else
			{
				_putchar(res + '0');
			}
			k++;
			_putchar('\n');
		}
		i++;
	}
}
