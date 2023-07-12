#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - prints args as strings
 * @ac: takes in width of grid
 * @av: height of grid
 * Return: the args one line at a time
 */

char *argstostr(int ac, char **av)
{
	char *string;
	int count, a, b, c;

	if (ac == 0 || av == NULL)
		return (NULL);
	a = 0;
	while (a < ac)
	{
		b = 0;
		while (av[a][b] != '\0')
		{
			count++;
			b++;
		}
		a++;
	}
	count = 0;
	count = count + ac + 1;
	string = malloc(sizeof(char) * count);
	if (string == NULL)
	{
		return (NULL);
	}
	c = 0;
	b = 0;
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
