#include "main.h"
/**
 * rev_string - prints a string in reverse.
 * @s: the string to print in reverse.
 */

void rev_string(char *s)
{
	int i, j, string_length, k;

	i = 0;
	string_length = 0;
	while (s[i] != '\0')
	{
		if (s[i] != '\0')
		{
			i++;
		}
	}
	string_length = i - 1;
	j = 0;
	k = 0;
	while (string_length >= j)
	{
		if (s[string_lenght] = '\0')
		{
			s[k] = '\0';
			k++;
			string_length--;
		}
		else
		{
			s[k] = s[string_length];
			k++;
			string_length--;
		}
	}
}
