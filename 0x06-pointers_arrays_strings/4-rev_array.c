#include "main.h"
/**
 * reverse_array - reverse the contant of an array of
 * integer elements.
 * @a: the array to operate on.
 * @n: the number of elements in the array.
 *
 * Return: it doesn't return anything.
 */

void reverse_array(int *a, int n)
{
	int i, j;

	i = 0;
	while (i < n--)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
		i++;
	}
}
