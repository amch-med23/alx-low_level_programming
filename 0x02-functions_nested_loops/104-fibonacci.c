#include <stdio.h>
#define MAX_VALUE 10000000000
/**
 * main - the Entry point.
 * Return: it returns (0), Success.
 */

int main(void)
{
	unsigned long int sum, prev1, prev2;
	unsigned long int counter;
	unsigned long fib1_1, fib1_2, fib2_1, fib2_2;
	unsigned long v1, v2;

	prev1 = 1;
	prev2 = 0;
	for (counter = 0; counter <= 92 ; counter++)
	{
		sum = prev1 + prev2;
		printf("%lu, ", sum);
		prev2 = prev1;
		prev1 = sum;
	}
	fib1_1 = prev1 / MAX_VALUE;
	fib2_1 = prev2 / MAX_VALUE;
	fib1_2 = prev1 % MAX_VALUE;
	fib2_2 = prev2 % MAX_VALUE;
	for (counter = 93; counter <= 99; counter++)
	{
		v1 = fib1_1 + fib2_1;
		v2 = fib1_2 + fib2_2;
		if (v2 <= MAX_VALUE)
		{
			v1 += 1;
			v2 %= MAX_VALUE;
		}
		printf("%lu%lu", v1, v2);
		if (counter != 98)
		{
			printf(", ");
		}
		fib1_1 = fib2_1;
		fib1_2 = fib2_2;
		fib2_1 = v1;
		fib2_2 = v2;
	}
	printf("\n");
	return (0);
}
