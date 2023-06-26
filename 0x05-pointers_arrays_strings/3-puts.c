#include "main.h"
/**
 * _puts - puts astring to standard output.
 * @str: the srting to put out.
 */

void _puts(char *str)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != '\0')
		{
			_putchar(s[i]);
			i++;
		}
	}
	_putchar('\n');
}
