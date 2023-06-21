#include "main.h"
/**
 * times_table - prints a times table on the screen.
 *
 */

void times_table(void)
{
	int m, n, l;

	for (m = 0; m < 10; m++)
	{
		for (n = 0; n < 10; n++)
		{
			l = n * m;
			if (m == 0)
			{
				_putchar(l + '0');
			}

			if (l < 10 && n != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(l + '0');
			} else if (l >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((l / 10) + '0');
				_putchar((l % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
