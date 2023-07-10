#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers give as arguments.
 * @argc: the argument counter.
 * @argv: the argument vector.
 *
 * Return: (1) or EXIT_SUCCESS.
 */

int main(int argc, char *argv[])
{
	int i, argnum, j;
	int valhold, valhold2 __attribute__ ((unused));
	int finalres;

	i = 1;
	argnum = argc - 1;
	finalres = 0;
	if (argnum == 0)
	{
		printf("%d\n", argnum);
		return (0);
	}
	j = 0;
	while (i <= argnum)
	{
		while (argv[i][j] != '\0')
		{
			if(!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		i++;
	}
	i = 1;
	finalres = 0;
	while (i <= argnum)
	{
		valhold = atoi(argv[i]);
		if (valhold >= 0)
		{
			finalres += valhold;
		}
		i++;
	}
	printf("%d\n", finalres);
	exit(EXIT_SUCCESS);
}
