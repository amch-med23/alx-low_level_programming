#include "main.h"
#include <stdlib.h>
/**
 * array_range - a function that creates an array of
 * integers.
 * @min: the min number of elements.
 * @max: the max number of elements.
 *
 * Return: it returns a pointer to the newelly created
 * array.
 */

int *array_range(int min, int max)
{
	int size __attribute__ ((unused));
	int *dest;
	int i, j __attribute__ ((unused));

	if (min > max)
		return (NULL);
	size = max - min + 1;
	dest = malloc(sizeof(int) * size);
	if (!dest)
		return (NULL);
	i = 0;
	while (i <= --size)
	{
		dest[i] = min + i;
		i++;
	}
	return (dest);
}
