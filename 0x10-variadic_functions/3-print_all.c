#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_all - a function that prints a given strings,
 * as arguments, via a supplied format list of types.
 * @foramt: the format list of types.
 *
 * Return: nothing (void).
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	const char *ptr;
	char *string;
	int i;
	int bl;
	
	i = 0;
	ptr = format;
	va_start(ap, format);
	while (ptr[i] != '\0')
	{
		bl = 0;
		switch (ptr[i])
		{
		case 'i':
			printf("%d", va_arg(ap, int));
			bl = 1;
			break;
		case 's':
			string = va_arg(ap, char *);
			if (!(*string))
			{
				printf("(nil)");
				bl = 1;
				break;
			}
			printf("%s", string);
			bl = 1;
			break;
		case 'c':
			printf("%c", (char) (va_arg(ap, int)));
			bl = 1;
			break;
		case 'f':
			printf("%f", va_arg(ap, double));
			bl = 1;
			break;
		}
		if (ptr[i + 1] != '\0' && bl)
			printf(", ");
		i++;
	}
	va_end(ap);
	printf("\n");
}
