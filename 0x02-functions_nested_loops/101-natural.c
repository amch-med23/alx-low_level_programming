#include <stdio.h>
/**
 * main - the entry point.
 * Return: It's (0).
 */

int main(void)
{
	int a, b, c;
	int result;

	result = 0;
	for (a = 0; a < 1024; a++)
	{
		b = a % 3;
		c = a % 5;
		if ( b == 0)
		{
			result += b;
		} else if (c == 0)
		{
			result += c;
		}
	}
	printf("%d\n",result);
	return (0);
}
