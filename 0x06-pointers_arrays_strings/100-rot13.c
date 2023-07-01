#include "main.h"
#include <stdio.h>

/**
 * rot13 - encodes in rot13 algo.
 * @s: ponits to the string.
 *
 * Return: it returns (0), means Success.
 */

char *rot13(char *s)
{
	int i;
	int j;
	char d1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char drot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == d1[j])
			{
				s[i] = drot[j];
				break;
			}
		}
	}
	return (s);
}
