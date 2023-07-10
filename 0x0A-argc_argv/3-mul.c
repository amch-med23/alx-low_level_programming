#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the result of two integers
 * multiplication followed by a new line.
 * @argc: the argument counter.
 * @argv: the arguments (the strings).
 *
 * Return: EXIT_SUCCESS.
 */

int main(int argc, char *argv[])
{
	int argnum;
	int num1, num2;
	int res;

	argnum = argc - 1;
	if (argnum > 2 || argnum < 1)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	res = num1 * num2;
	printf("%d\n", res);
	exit(EXIT_SUCCESS);
}
