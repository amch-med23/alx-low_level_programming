#include "main.h"
/**
 * _strstr - it locates a substring
 * @haystack: the string
 * @needle: the input
 *
 * Return: a pointer to the beginning of the located substring
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *n = haystack;
		char *m = needle;

		while (*n == *m && *m != '\0')
		{
			n++;
			m++;
		}

		if (*m == '\0')
			return (haystack);
		haystack++;
	}

	return (0);
}
