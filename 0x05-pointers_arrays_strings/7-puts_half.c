#include "main.h"
/**
 * puts_half - puts the last half of the given string.
 * @str: the given string.
 */

void puts_half(char *str)
{
	int strng = 0;
	int n;

	while (str[strng] != '\0')
	{
		strng++;
	}
	if (strng + 1 % 2 != '0')
	{
		n = (strng - 1) / 2;
	}
	else
	{
		n = (strng / 2);
	}
	n++;

	for (strng = n; str[strng] != '\0'; strng++)
	{
		_putchar(str[strng]);
	}
	_putchar('\n');
}
