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
	unsigned long int sizeS1, sizeS2, totalsize __attribute__ ((unused));
	char *dest;
	unsigned long int i, j;

	sizeS1 = 0;
	sizeS2 = 0;
	while (s1 && s1[sizeS1])
		sizeS1++;
	while (s2 && s2[sizeS2])
		sizeS2++;
	if (n < strlen(s2))
		dest = malloc(sizeof(char) * (sizeS1 + n + 1));
	else
		dest = malloc(sizeof(char) * (sizeS2 + sizeS1 + 1));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (i < sizeS1)
	{
		dest[i] = s1[i];
		i++;
	}
	j = 0;
	while (n < sizeS2 && i < (sizeS1 + n))
	{
		dest[i++] = s2[j++];
	}
	while (n >= sizeS2 && i < (sizeS1 + sizeS2))
	{
		dest[i++] = s2[j];
	}
	dest[i] = '\0';
	return (dest);
}
