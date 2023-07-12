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

	sizeS1 = 0;
	sizeS2 = 0;
	while (s1 != NULL && s1[sizeS1])
	{
		sizeS1++;
	}
	while (s2 != NULL && s2[sizeS2])
	{
		sizeS2++;
	}
	totalsize = sizeS1 + sizeS2;
	dest = malloc(sizeof(char) * totalsize + 1);
	if (dest == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < totalsize; i++)
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
