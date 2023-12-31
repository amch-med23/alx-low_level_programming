#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - prints a given name in a given
 * format.
 * @name: astring represanting the name.
 * @f: a pointer to a function.
 *
 * Return: nothing (void).
 */
void print_name(char *name, void(*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
