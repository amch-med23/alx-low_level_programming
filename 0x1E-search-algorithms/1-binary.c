#include "search_algos.h"

/**
 * binary_search - using binary search algorithm to look for a value
 * in a given array.
 * @array: pointer to the first element of the array to search in.
 * @size: size of the @array.
 * @value: the value to search for.
 *
 * Return: the index of the value if found, otherwise -1.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t r, l, d, i;

	r = size - 1;
	l = 0;

	if (!array)
		return (-1);
	while (l <= r)
	{
		printf("Searching in array: %d", array[l]);
		for (i = l + 1; i <= r; i++)
		{
			printf(", %d", array[i]);
		}
		printf("\n");
		d = (l + r) / 2;
		if (array[d] < value)
		{
			l = d + 1;
		}
		else if (array[d] > value)
		{
			r = d - 1;
		}
		else
		{
			return (d);
		}
	}
	return (-1);
}
