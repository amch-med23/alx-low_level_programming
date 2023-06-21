#include <stdio.h>
/**
 * main - the entry point.
 * Return: it's (0), Success.
 */

int main(void)
{
	int a, prev, prev2, i;

	prev1 = 0;
	prev2 = 0;
	for (i = 1; i <= 50; i++)
	{
		if (i == 1)
		{
			prev1 = 1;
		} else if (i == 2)
		{
			prev2 = 1;
		}
		a = prev2 + prev1;
		if (i == 50)
		{
			printf("%d\n", a);
			return (0);
		}
		printf("%d, ", a);
		prev1 = a;
		prev2 = prev1 - a;
	}
	return (0);
}
