#include "main.h"
/**
 * _puts - it puts a string on the screen.
 * @s: the string.
 *
 * Return: it returns nothing.
 */

void _puts(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i += 1;
	}
	_putchar('\n');
}
