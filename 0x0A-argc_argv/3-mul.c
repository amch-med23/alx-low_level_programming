#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the result of two integers
 * multiplication followed by a new line.
 * @argc: the argument counter.
 * @argv: the arguments (the strings).
 *
 * Return: (0) or (1)
 */

int main(int argc, char *argv[])
{
	int argnum;
	int res;

	argnum = argc - 1;
	if (argnum > 2 || argnum < 1)
	{
		printf("Error\n");
		return (1);
	}
	res = argv[1] * argv[2];
	printf("%d\n", res);
	return (0);
}
