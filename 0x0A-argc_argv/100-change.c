#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minemum number of coins to make change.
 * @argc: the argument counter.
 * @argv: the argument vector.
 *
 * Return: (1) or EXIT_SUCCESS;
 */

int main(int argc, char *argv[])
{
	int argnum, i;
	int valholder;
	int result;
	int coins[] = {25, 10, 5, 2, 1};

	argnum = argc - 1;
	i = 1;
	if (argnum != 1)
	{
		printf("Error\n");
		return (1);
	}
	while (i <= argnum)
	{
		if (atoi(argv[i]) <= 0)
		{
			printf("%d\n", 0);
			exit(EXIT_SUCCESS);
		}
		i++;
	}
	valholder = atoi(argv[1]);
	result = 0;
	while (valholder > 0)
	{
		i = 0;
		while (i < 5)
		{
			if (coins[i] <= valholder)
			{
				valholder -= coins[i];
				result++;
				break;
			}
			i++;
		}
	}
	printf("%d\n", result);
	exit(EXIT_SUCCESS);
}
