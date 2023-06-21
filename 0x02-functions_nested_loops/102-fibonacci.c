#include <stdio.h>
/**
 * main - the entry point.
 * Return: it's (0), Success.
 */

int main(void)
{
	int a, prev, b, i;

	b = 0;
	prev = b;
	for (i = 1; i <= 50; i++)
	{
		a = prev + i;
		printf("%d, ", a);
		prev = a;
	}
	return (0);
}
