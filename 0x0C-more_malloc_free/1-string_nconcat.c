#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: the first string.
 * @s2: hthe second string.
 * @n: the number of chars to take from the s2.
 *
 * Return: a pointer to the final string.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned long int sizeS1, sizenS2, totalsize;
	char *dest;
	unsigned long int i, j;

	if (n >= strlen(s2))
		n = strlen(s2);
	sizeS1 = 0;
	sizenS2 = 0;
	while (s1 != NULL && s1[sizeS1])
	{
		sizeS1++;
	}
	while (s2 != NULL && s2[sizenS2])
	{
		sizenS2++;
	}
	totalsize = sizeS1 + sizenS2;
	dest = malloc(sizeof(char) * (totalsize + 1));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (i < sizeS1 && s1[i] != '\0')
	{
		dest[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < sizenS2)
	{
		if (j < n)
		{
			dest[i + j] = s2[j];
		}
		j++;
	}
	return (dest);
}
