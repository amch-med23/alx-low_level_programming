#include "main.h"

int vol_prime(int n, int j);
/**
 * is_prime_number - says if an integer is a prime number or not
 * @n: number to evaluate
 *
 * Return: (1) if n is a prime number,or (0) if not.
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (vol_prime(n, n - 1));
}

/**
 * vol_prime - it calculates if a number is a prime recursively.
 * @n: the number to evaluate.
 * @j: the iterator.
 *
 * Return: (1) if n is prime, or (0) if not.
 */

int vol_prime(int n, int j)
{
	if (j == 1)
	{
		return (1);
	}
	if (n % j == 0 && j > 0)
	{
		return (0);
	}
	return (actual_prime(n, j - 1));
}
