#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - prints args as strings
 * @ac: the width of grid
 * @av: the height of grid
 *
 * Return: returns the args one line at a time
 */

char *argstostr(int ac, char **av)
{
	char *string;
	int count, a, b, c;

	a = 0;
	b = 0;
	c = 0;
	count = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	while (a < ac)
	{
		while (av[a][b] != '\0')
		{
			count++;
			b++;
		}
		a++;
	}
	count = count + ac + 1;
	string = malloc(sizeof(char) * count);
	if (string == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
		{
			string[c] = av[a][b];
			c++;
		}
		string[c] = '\n';
		c++;
	}
	return (string);
}
