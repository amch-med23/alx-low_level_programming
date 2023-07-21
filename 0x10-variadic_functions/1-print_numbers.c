#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - a function that prints numbers.
 * @separator: the separator string.
 * @n: the number of integers passed.
 *
 * Return: nothing (void).
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (n <= 0)
	{
		return;
	}
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if ((separator) && i < (n - 1))
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
