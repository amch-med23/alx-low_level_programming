#include <stdio.h>
#include <stdlib.h>

/**
 * main - the entry point.
 * @argc: the argument counter.
 * @argv: the argument vectore.
 *
 * Return: exit success.
 */

int main(int argc __attribute__ ((unused)), char *argv[])
{
	int i;

	i = 0;
	while (argv[i] != NULL)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	exit(EXIT_SUCCESS);
}
