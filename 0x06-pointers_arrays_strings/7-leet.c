#include "main.h"
/**
 * leet - encodes the string into 1337speak.
 * @s: the given string.
 *
 * Return: the value of s.
 */

char *leet(char *s)
{
	int i, j;
	char v2[] = "4433007711";
	char v1[] = "aAeEoOtTlL";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == v1[j])
			{
				s[i] = v2[j];
			}
		}
	}
	return (s);
}
