#include "main.h"
/**
 * _strspn - it get's the length of a prefix substring.
 * @s: the string
 * @accept: the bytes
 *
 * Return: it returns an unsigned integer.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int v = 0;
	unsigned int g;

	while (*s)
	{
		for (g = 0; accept[g]; g++)
		{
			if (*s == accept[g])
			{
				v++;
				break;
			}
			else if (accept[g + 1] == '\0')
				return (v);
		}
		s++;
	}
	return (v);
}
