#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * str_concat - concatenates two given strings.
 * @s1: the first string.
 * @s2: the second string.
 *
 * Return: return a new ptr to the newelly created
 * space in memory.
 */
char *str_concat(char *s1, char *s2)
{
	unsigned long int totalsize, sizeS1, sizeS2;
	char *dest;
	unsigned long int i;

	sizeS1 = (int)strlen(s1);
	sizeS2 = (int)strlen(s2);
	totalsize = sizeS1 + sizeS2;
	dest = malloc(sizeof(char) * totalsize + 1);
	if (s1 == NULL && s2 == NULL)
	{
		dest = "\0";
	}
	if (dest == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < sizeS1 + sizeS2; i++)
	{
		if (i < sizeS1)
		{
			dest[i] = s1[i];
		}
		else
		{
			dest[i] = s2[i - sizeS1];
		}
	}
	return (dest);
}
