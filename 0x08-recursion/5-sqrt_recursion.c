#include "main.h"

int vol_sqrt_recursion(int n, int j);
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to calculate the square root of.
 *
 * Return: the resulting square root of the given number.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (vol_sqrt_recursion(n, 0));
}

/**
 * vol_sqrt_recursion - recurses to find the natural
 * square root of a given number.
 * @n: the number to calculate the sqaure root of.
 * @j: the iterator
 *
 * Return: the resulting square root
 */
int vol_sqrt_recursion(int n, int j)
{
	if (j * j > n)
	{
		return (-1);
	}
	if (j * j == n)
	{
		return (j);
	}
	return (vol_sqrt_recursion(n, j + 1));
}
