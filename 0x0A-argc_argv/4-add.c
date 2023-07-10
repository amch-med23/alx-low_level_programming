#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers give as arguments.
 * @argc: the argument counter.
 * @argv: the argument vector.
 *
 * Return: (1) or EXIT_SUCCESS.
 */

int main(int argc, char *argv[])
{
	int argnum;
	int i, zero;
	int valhold, valhold2;
	int finalres;

	i = 1;
	zero = 0;
	argnum = argc - 1;
	finalres = 0;
	if (argnum == 0)
	{
		printf("%d\n", zero);
		exit(EXIT_SUCCESS);
	}
	while (i <= argnum)
	{
		valhold2 = atoi(argv[i]);
		if (valhold2 == 0)
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	i = 1;
	finalres = 0;
	while (i <= argnum)
	{
		valhold = atoi(argv[i]);
		if (valhold > 0)
		{
			finalres += valhold; 
		}
		i++;
	}
	printf("%d\n", finalres);
	exit(EXIT_SUCCESS);
}
