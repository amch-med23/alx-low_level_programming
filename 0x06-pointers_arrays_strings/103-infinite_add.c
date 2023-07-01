#include "main.h"

/**
 * rev_string - reverse an array of characters
 * @n: integer parameter
 *
 * Return: it return (0), Success.
 */

void rev_string(char *n)
{
	int i = 0;
	int j = 0;
	char tmp;

	while (*(n + i) != '\0')
	{
		i++;
	}
	i--;

	for (j = 0; j < i; j++, i--)
	{
		tmp = *(n + j);
		*(n + j) = *(n + i);
		*(n + i) = tmp;
	}
}

/**
 * infinite_add - add 2 numbers together
 * @n1: integer representation of 1st number to add
 * @n2: integer representation of 2nd number to add
 * @r: refers to the buffer
 * @size_r: the buffer size
 * Return: points to the calling function
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int overusedflow = 0, i = 0, j = 0, digits = 0;
	int value1 = 0, value2 = 0, temp_t = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
		return (0);
	while (j >= 0 || i >= 0 || overusedflow == 1)
	{
		if (i < 0)
			value1 = 0;
		else
			value1 = *(n1 + i) - '0';
		if (j < 0)
			value2 = 0;
		else
			value2 = *(n2 + j) - '0';
		temp_t = value1 + value2 + overusedflow;
		if (temp_t >= 10)
			overusedflow = 1;
		else
			overusedflow = 0;
		if (digits >= (size_r - 1))
			return (0);
		*(r + digits) = (temp_t % 10) + '0';
		digits++;
		j--;
		i--;
	}
	if (digits == size_r)
		return (0);
	*(r + digits) = '\0';
	rev_string(r);
	return (r);
}
