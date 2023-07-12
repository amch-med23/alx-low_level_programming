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
	long unsigned int totalsize, sizeS1, sizeS2;
	char *dest;
	long unsigned int i, j;
	
	sizeS1 = (int)strlen(s1);
	sizeS2 = (int)strlen(s2);
	totalsize = sizeS1 + sizeS2;
	dest = malloc(sizeof(char) * totalsize);
	if (dest == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < sizeS1)
	{
		if (s1[i] != '\0')
		{
			dest[i] = s1[i];
			i++;
		}
	}
	j = 0;
	while (j < sizeS2)
	{
		if (j == sizeS2)
			dest[sizeS1 + j] = '\0';
		dest[sizeS1 + j] = s2[j];
		j++;
	}
	return dest;
}
