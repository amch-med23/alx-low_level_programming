#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - Selects the correct function to perform
 * the requested operation.
 * @s: The operator(operation in the main file) passed as argument.
 *
 * Return: A pointer to the corresponding function
 */
int (*get_op_func(char *s))(int, int)
{
	int i;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};
	while (operators[i]->op != NULL && *(operators[i]->op) != *s)
		i++;

	return (operators[i].f);
}
