#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
/**
 * sum_them_all - sums all its arguments.
 * @n: the first argument.
 *
 * Return: an integer to the result.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int i;
	unsigned int result;

	va_start(ap, n);
	if (n == 0)
	{
		return (0);
	}
	result = 0;
	for (i = 0; i < (int)n; i++)
	{
		result += va_arg(ap, int);
	}
	va_end(ap);
	return (result);
}
