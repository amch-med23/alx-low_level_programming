#include "main.h"
/**
 * print_rev - prints the string in teverse order.
 * @s: the string to print reverselly.
 */

void print_rev(char *s)
{
	int string_length;
	int i, j;

	i = 0;
	string_length = 0;
	while (s[i] != '\0')
	{
		if (s[i] != '\0')
		{
			i++;
		}
	}
	i = string_length;
	j = 0;
	while (string_length >= j)
	{
		_putchar(s[string_length]);
		string_length--;
	}
	_putcahr('\n');
}
