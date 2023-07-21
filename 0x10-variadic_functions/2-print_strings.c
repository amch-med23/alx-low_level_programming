#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - a function that prints strings.
 * @separator: the separator string.
 * @n: the arguments numbers.
 * @...: a variable number of arguments.
 *
 * Return: nothing (void).
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int i;
	char *string;

	va_start(ap, n);
	for (i = 0; i < (int)n; i++)
	{
		string = va_arg(ap, char *);
		printf("%s%s",
			   string == NULL ? "(nil)" : string,
			   i != (int)n - 1 && separator != NULL ? separator : "");
	}
	va_end(ap);
	printf("\n");
}
