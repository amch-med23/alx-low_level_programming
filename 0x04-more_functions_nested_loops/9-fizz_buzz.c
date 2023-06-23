#include <stdio.h>
/**
 * main - the Entry point.
 * Return: it returns (0), Success.
 *
 */

int main(void)
{
	int i;
	char *fizz = "Fizz";
	char *buzz = "Buzz";
	char *fb = "FizzBuzz";

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("%s", fizz);
			if (i != 100)
				printf(" ");
		} else if (i % 5 == 0 && i % 3 != 0)
		{
			printf("%s", buzz);
			if (i != 100)
				printf(" ");
		} else if (i % 5 == 0 && i % 3 == 0)
		{
			printf("%s", fb);
			if (i != 100)
				printf(" ");
		} else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
