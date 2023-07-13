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
	unsigned long int sizeS1, sizenS2;
	char *dest;
	unsigned long int i, j;

	if (n >= strlen(s2))
		n = strlen(s2);
	sizeS1 = strlen(s1);
	sizenS2 = strlen(s2);
	dest = malloc(sizeof(char) * (sizeS1 + sizenS2 + 1));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (i <= sizeS1 && s1 != NULL && s1[i] != '\0')
	{
		dest[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < n && s2 != NULL)
	{
		dest[i + j] = s2[j];
		if (s2[j] == '\0')
			dest[i + j] = '\0';
		j++;
	}
	return (dest);
}
