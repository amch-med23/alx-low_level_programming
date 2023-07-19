#include "function_pointers.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * int_index - return the index where the matched
 * element found.
 * @array: the given array.
 * @size: the array size.
 * @cmp: the function to use.
 *
 * Return: return and integer.
 */

int int_index(int *array, int size, int (*com)(int))
{
	int element;

	if (array == NULL || com == NULL)
	{
		exit(EXIT_FAILURE);
	}
	if (size <= 0)
		return (-1);
	for (element = 0; element < size; element++)
	{
		if (com(array[element]))
		{
			return (element);
		}
		else if (!(com(array[element])) && element == size)
			return (-1);
	}
	exit(EXIT_SUCCESS);
}
