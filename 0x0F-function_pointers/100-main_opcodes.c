#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints opcodes of its own.
 * @argc: the argument counter.
 * @argv: the argument vectore.
 *
 * Return: it returns EXIT_SUCCESS.
 */
int main(int argc, char *argv[])
{
	int bnumber;
	int counter;
	char *array;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bnumber = atoi(argv[1]);

	if (bnumber < 0)
	{
		printf("Error\n");
		exit(2);
	}

	array = (char *)main;
	counter = 0;
	while (counter < bnumber)
	{
		if (counter == (bnumber - 1))
		{
			printf("%02hhx\n", array[counter]);
			break;
		}
		printf("%02hhx ", array[counter]);
		counter++;
	}
	exit(EXIT_SUCCESS);
}
