#include <stdio.h>
/**
 * main - the entry point.
 * Return: it's (0), Success.
 */

int main(void)
{
	int i;
	unsigned long int a, prev1, prev2;

	prev1 = 0;
	prev2 = 0;
	for (i = 1; i <= 50; i++)
	{
		if (i == 1)
		{
			prev1 = 1;
		}
		a = prev1 + prev2;
		if (i == 50)
		{
			printf("%lu\n", a);
			return (0);
		}
		printf("%lu, ", a);
		prev2 = prev1;
		prev1 = a;
	}
	return (0);
}
