#include "main.h"
/**
 * factorial - returns the factorial of a number.
 * @n: the number to return the factorial of it.
 *
 * Return: an integer.
 */

int factorial(int n)
{
	long int i;

	i = n;
	if (i < 0)
	{
		return (-1);
	}
	if (i == 0)
	{
		return (1);
	}
		return (i * factorial(i - 1));
}
