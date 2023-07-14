#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates a memory for an array on nmembers.
 * @nmemb: the number of the array elements.
 * @size: the size of each element.
 *
 * Return: te returns an pointer to the allocated memory area.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *dest;

	if (size == 0 || nmemb == 0)
		return (NULL);
	dest = calloc(nmemb, size);
	if (!dest)
		return (NULL);
	return (dest);
}
