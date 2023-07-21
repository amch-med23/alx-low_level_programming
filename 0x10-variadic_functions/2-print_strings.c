#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_strings - a function that prints strings.
 * @separator: the separator string.
 * @n: the arguments numbers.
 *
 * Return: nothing (void).
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *string;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(ap, char*);
		if (!(*string))
			printf("(nil)");
		else if (string)
			printf("%s", string);
		if ((separator) && i < (int)(n - 1))
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
