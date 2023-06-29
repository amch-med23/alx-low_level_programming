#include "main.h"
/**
 * _strcmp - compares the two given strings.
 * @s1: the first string.
 * @s2: the second string.
 *
 * Return: it returns a string.
 */

int _strcmp(char *s1, char *s2)
{
	int cast1, cast2, i, j;
	int res;

	i = 0;
	cast1 = 0;
	while (s1[i] != '\0')
	{
		cast1 += (int) s1[i];
		i++;
	}
	cast2 = 0;
	j = 0;
	while (s2[j] != '\0')
	{
		cast2 += (int) s2[j];
		j++;
	}
	res = cast1 - cast2;
	return (res);
}
