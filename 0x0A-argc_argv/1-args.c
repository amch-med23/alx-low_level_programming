#include <stdio.h>
#include <stdlib.h>

/**
 * main - the entry point.
 * @argc: the argument counter.
 * @argv: the argument vector.
 *
 * Return: it returns success.
 */

int main(int argc, char *argv[] __attribute__ ((unused)))
{
	int res;

	res = argc - 1;
	printf("%d\n", res);
	exit(EXIT_SUCCESS);
}
