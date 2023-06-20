#include "main.h"
/**
 * jack_bauer - prints all the minutes in a day.
 * Return: it's not useful because the function has a void return type.
 */

void jack_bauer(void)
{
	int h1, h2, m1, m2;
	int h2t;

	h2t = 1;
	for (h1 = 0; h1 <= 2; h1++)
	{
		
		h2t <= 2 ? c = (h2 <= 9) : c = (h2 <= 3);
		for (h2 = 0; c; h2++)
		{
			for (m1 = 0; m1 <= 5; m1++)
			{
				for (m2 = 0; m2 <= 9; m2++)
				{
					_putchar(h1 + '0');
					_putchar(h2 + '0');
					_putchar(':');
					_putchar(m1 + '0');
					_putchar(m2 + '0');
					_putchar('\n');
				}
			}
			h2t++;
		}
	}
}
