#include "main.h"
/**
 * print_line - prints stright line with a width.
 * specified by the parameter.
 * @n: the width of the line.
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		i = 1;
		while (i <= n)
		{
			_putchar('_');
			i++;
		}
	}
	_putchar('\n');
}
