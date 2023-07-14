#include "main.h"
#include <stdlib.h>
/**
 * _realloc - a function to reallocates a block of memory.
 * @ptr: the old memory address.
 * @old_size: the old ptr size.
 * @new_size: the new size.
 *
 * Return: it returns a pointer to the newelly 
 * allocated memory.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
        int *dest;
	unsigned int sizedefer, i;
	int *ptr1;

	ptr1 = ptr;
	if (new_size == old_size)
	{
		free(ptr);
		return (ptr);
	}
	if (ptr == NULL)
	{
		dest = malloc(sizeof(unsigned int) * new_size);
		free(dest);
		return (dest);
	}
	dest = malloc(sizeof(unsigned int) * new_size);
	/**
	 * initializing the memory if  new_size > old_size.
	 */
	if (new_size > old_size)
	{
		sizedefer = new_size - old_size;
	}
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	/**
	 * assigning the elements of ptr to dest until oldsize
	 */
	i = 0;
	while (i <= old_size && ptr)
	{
		dest[i] = ptr1[i];
		i++;
	}
	/**
	 * assigning zeros to size deffer.
	 */
	while (i <= sizedefer && sizedefer > 0)
	{
		dest[i] = 0;
		i++;
	}
	free(ptr1);
	free(dest);
	return (dest);
}
