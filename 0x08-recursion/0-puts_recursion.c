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

	i = 0;
	if (*(s + i) == '\0')
	{
		_putchar('\n');
		break;
	}
	else
	{
		_putchar(_puts_recursion(*(s + i)));
		i++;
	}
}