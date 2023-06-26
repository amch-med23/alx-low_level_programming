#include "main.h"
/**
 * _strlen - defines the length of a string.
 * @s: the string that we want to calculate the longht to.
 */

int _strlen(char *s)
{
	int total_length;
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != '\0')
		{
			i++;
		}
	}
	total_length = i + 1;
	return (total_length);
}
