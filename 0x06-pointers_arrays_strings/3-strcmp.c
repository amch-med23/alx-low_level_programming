#include "main.h"
/**
 * _strcmp - compares the two given strings.
 * @s1: the first string.
 * @s2: the second string.
 *
 * Return: it returns a string.
 */

int _strcmp(char *s1, char *s2)
{
	int res;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[1] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (¨0);
}
