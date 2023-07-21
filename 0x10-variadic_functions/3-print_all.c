#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_all - a function that prints a given strings,
 * as arguments, via a supplied format list of types.
 * @format: the format list of types.
 *
 * Return: nothing (void).
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	char *string, *sep = "";
	int i;

	i = 0;
	va_start(ap, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(ap, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(ap, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(ap, double));
					break;
				case 's':
					string = va_arg(ap, char *);
					if (!string)
						string = "(nil)";
					printf("%s%s", sep, string);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}
	va_end(ap);
	printf("\n");
}
