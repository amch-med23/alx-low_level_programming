#include <stdio.h>
/**
 * main - the entry point.
 * Return: it's (0), Success.
 */

int main(void)
{
	int a, prev, i;

	prev = 0;
	for (i = 1; i <= 50; i++)
	{
		if (i == 1)
		{
			prev = 0;
		} else if (i == 2)
		{
			prev = 0;
		}
		a = prev + i;
		if (i == 50)
		{
			printf("%d\n", a);
			return (0);
		}
		printf("%d, ", a);
		prev = a;
	}
	return (0);
}
