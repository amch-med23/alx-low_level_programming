#include <stdio.h>
#include <stdlib.h>
int atoi(const char *str);

/**
 * main - prints the result of two integers
 * multiplication followed by a new line.
 * atoi - converts a string to integer.
 * @argc: the argument counter.
 * @argv: the arguments (the strings).
 *
 * Return: (0) or (1)
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
	return (0);
}
