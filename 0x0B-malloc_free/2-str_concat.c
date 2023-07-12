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
	unsigned long int i, j, k;
	
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
	i = 0;
	while (i < sizeS1 && s1 != NULL)
	{
		if (s1[i] != '\0')
		{
			dest[i] = s1[i];
			i++;
		}
	}
	j = 0;
	while (j < sizeS2 && s2 != NULL)
	{
		if (j == sizeS2)
			dest[sizeS1 + j] = '\0';
		dest[sizeS1 + j] = s2[j];
		j++;
	}
	if (s2 == NULL || s1 == NULL)
	{
		k = 0;
		while (k <= sizeof(s1) || k <= sizeof(s2))
		{
			dest[k] = s1[k] + s2[k];
			k++;
		}  
	}
	return (dest);
}
