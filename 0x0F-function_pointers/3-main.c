#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - this prints  the result of simple operations.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: EXIT_SUCCESS.
 */
int main(int argc, char *argv[])
{
	int input1, input2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	input1 = atoi(argv[1]);
	op = argv[2];
	input2 = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' && input2 == 0) ||
	    (*op == '%' && input2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(input1, input2));

	exit(EXIT_SUCCESS);
}
