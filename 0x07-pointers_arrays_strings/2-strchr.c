#include "main.h"
/**
 * _strchr - searches for a character in a string.
 * @s: the string.
 * @c: the character.
 *
 * Return: it return a pointer to the first occurance of
 * the character, or NULL if nothing found.
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] >= '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (0);
}
