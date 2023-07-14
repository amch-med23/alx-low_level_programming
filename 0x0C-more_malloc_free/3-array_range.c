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
	if (min > max)
		return (NULL);
	dest = malloc((max - min + 1) * sizeof(int));
	if (dest == NULL)
		return (NULL);
	for (i = 0; i <= max - min; i++)
	{
		dest[i] = min + i;
	}
	return (dest);
}
