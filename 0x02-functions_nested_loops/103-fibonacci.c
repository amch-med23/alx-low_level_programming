#include <stdio.h>
/**
 * main - the Enrty point.
 * Return: it's (0).
 */

int main(void)
{
	unsigned long int sum;
	unsigned long int counter;
	unsigned long int prev1, prev2, sumtmp;

	prev1 = 0;
	prev2 = 1;
	sumtmp = 0;
	for (counter = 1; counter <= 1000; counter++)
	{
		sum = prev1 + prev2;
		prev2 = prev1;
		prev1 = sum;
		if (sum <= 4000000 && (sum % 2) == 0)
		{
			sumtmp += sum;
		}
	}
	printf("%lu\n", sumtmp);
	return (0);
}
