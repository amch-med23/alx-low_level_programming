#include <stdio.h>
/**
 * main - the Entry point.
 * Return: it returns (0), Success.
 */

int main(void)
{
	unsigned long long int sum, prev1, prev2;
	unsigned long int counter;

	prev1 = 1;
	prev2 = 0;
	for (counter = 1; counter <= 98 ; counter++)
	{
		sum = prev1 + prev2;
		printf("%lu, ", sum);
		if (counter == 98)
		{
			printf("%lu\n", sum);
		}
		prev2 = prev1;
		prev1 = sum;
	}
	return (0);
}
