#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _memcpy - copies area of memory
 * @dest: destination
 * @src: source
 * @n: number of bytes to be copie
 *d
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int counter;

	for (counter = 0; counter < n; counter++)
	{
		dest[counter] = src[counter];
	}
	return (dest);
}

/**
 * _realloc - reallocates a memory block using malloc() and free()
 * @ptr: previously allocated memory
 * @old_size: size of the previously allocated memory
 * @new_size: size of the new memory
 *
 * Return: pointer to the newly resized block of memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int use_size;
	void *dest;

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	dest = malloc(new_size);
	if (dest == NULL)
		return (NULL);

	if (old_size < new_size)
		use_size = old_size;
	else
		use_size = new_size;

	_memcpy(dest, ptr, use_size);

	free(ptr);

	return (dest);
}
