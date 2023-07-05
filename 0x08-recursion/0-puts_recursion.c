#include "main.h"
/**
 * _puts_recursion - puts a string using recursion.
 * @s: the string to put.
 *
 * Return: it returns nothing.
 */

void _puts_recursion(char *s)
{
	int i;
	char *j;

	i = 0;
	if (*(s + i) == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(s[i]);
		i++;
		j = (s + i);
		_puts_recursion(j);
	}
}
