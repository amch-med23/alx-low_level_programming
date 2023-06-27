#include "main.h"
/**
 * rev_string - prints a string in reverse.
 * @s: the string to print in reverse.
 */

void rev_string(char *s)
{
	int i, string_length, k;

	i = 0;
	string_length = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	string_length = i - 1;
	k = 0;
	while (string_length >= 0)
	{
		if (string_length == 0)
		{
			s[k] = s[0];
			_putchar('\0');
			break;
		}
		s[k] = s[string_length];
		k++;
		string_length--;
	}
}
