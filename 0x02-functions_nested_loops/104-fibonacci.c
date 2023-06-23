#include <stdio.h>
#define MAX_VALUE 1000000000
/**
 * main - the Entry point.
 * Return: it returns (0), Success.
 */

int main(void)
{
	unsigned long int sum, prev1, prev2;
	unsigned long int counter;
	unsigned long int fib1_1, fib1_2, fib2_1, fib2_2;
	unsigned long int v1, v2;

	prev1 = 1;
	prev2 = 2;
	printf("%lu", prev1);
	for (counter = 0; counter < 91 ; counter++)
	{
		printf(", %lu", prev2);
		prev2 += prev1;
		prev1 = prev2 - prev1;
	}
	fib1_1 = prev1 / MAX_VALUE;
	fib2_1 = prev2 / MAX_VALUE;
	fib1_2 = prev1 % MAX_VALUE;
	fib2_2 = prev2 % MAX_VALUE;
	for (counter = 92; counter < 99; counter++)
	{
		printf(", %lu", fib1_2 + (fib2_2 / MAX_VALUE));
		printf("%lu", fib2_2 % MAX_VALUE);
		fib2_1 = fib2_1 + fib1_1;
		fib1_1 = fib2_1 - fib1_1;
		fib2_2 = fib2_2 + fib1_2;
		fib1_2 = fib2_2 + fib1_2;
	}
	printf("\n");
	return (0);
}
