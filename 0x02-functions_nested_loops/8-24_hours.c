#include "main.h"
/**
 * jack_bauer - prints all the minutes in a day.
 * Return: it's not useful because the function has a void return type.
 */

void jack_bauer(void)
{
	int h1, h2, m1, m2;

	for (h1 = 0; h1 <= 2; h1++)
	{
		_putchar(h1 + '0');
		for (h2 = 0; h2 <= 3; h2++)
		{
			_putchar(h2 + '0');
			_putchar(':');
			for (m1 = 0; m1 <= 5; m1++)
			{
				_putchar(m1 + '0');
				for (m2 = 0; m2 <= 9; m2++)
				{
					_putchar(m2 + '0');
					_putchar('\n');
				}
			}
		}
	}
}