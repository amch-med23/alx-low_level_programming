#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc.
 * @b: the size to allocate.
 *
 * Return: a pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *j;

	j = malloc((int) b);
	if (j == NULL)
		exit(98);
	return (j);
}
