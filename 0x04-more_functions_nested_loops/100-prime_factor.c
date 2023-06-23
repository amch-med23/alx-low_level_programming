#include <stdio.h>
#include <math.h>
int _isprime(int i);
/**
 * main - the entry point.
 * Return: it return (0).
 *
 */

int main(void)
{
	unsigned long int num;
	long int i;
	long int m;
	
	i = 2;
	num = 612852475143;
	m = num / i;
	while (i <= m)
	{
		m = num / i;
		if (num % m == 0 && _isprime(m) == 1)
		{
			printf("%li\n", m);
		}
		i++;
	}
	return (0);
}

/**
 * _isprime - a function determines if the number is prime. 
 * @i: the number to check.
 * Return: (1) if it's a prime number and (0) otherwisre.
 */

int _isprime(int i)
{
	int k;

	k = 2;
	while (k < i / 2 + 1)
	{
		if (i % k == 0)
		{
			return (0);
		}
		k++;
	}
	return (1);
}
