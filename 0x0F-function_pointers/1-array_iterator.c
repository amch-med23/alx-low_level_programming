#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - iterates through elements of
 * a given pointer to array.
 * @array: a pointer to the array.
 * @size: tha array size.
 * @action: the action function to use (this means
 * what to do with the elements of the given array).
 *
 * Return: nothing (void).
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int element;

	if (array == NULL || size == 0 || action == NULL)
		return;
	for (element = 0; element < size; element++)
	{
		action(array[element]);
	}
}
