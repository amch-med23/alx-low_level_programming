#include "main.h"
/**
 * rev_string - prints a string in reverse.
 * @s: the string to print in reverse.
 */

void rev_string(char *s)
{
	int i, string_length, k;
	char arr = s[0];

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	k = 0;
	while ( k < i)
	{
		í--;
		arr = s[k];
		s[k] = s[i];
		s[i] = arr;
		k++;
	}
}
