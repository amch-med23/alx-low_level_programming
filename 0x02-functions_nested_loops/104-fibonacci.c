#include <stdio.h>
/**
 * man - the Entry point.
 * Return: it returns (0), Success.
 */

int main(void)
{
	unsigned long int sum, prev1, prev2;
	unsigned long int counter;
	int i;

	prev1 = 0;
	prev2 = 1;
	for (counter = 0; counter < 99 ; counter++)
	{
		sum = prev1 + prev2;
		prev2 = prev1;
		sum = prev1;
		if (counter == 98)
			printf("%lu", sum);
		printf("%lu, ", sum)
	}
	return (0);
}
