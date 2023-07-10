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
	int finalres;
	
	i = 1;
	zero = 0;
	argnum = argc - 1;
	finalres = 0;
	if (argnum == 0)
	{
		printf("%d\n", zero);
	}
	while (i <= argnum)
	{
		if (atoi(argv[i]) == 0)
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
		if (atoi(argv[i]) > 0)
		{
			finalres += atoi(argv[i]); 
		}
		i++;
	}
	printf("%d\n", finalres);
	return(0);
}
