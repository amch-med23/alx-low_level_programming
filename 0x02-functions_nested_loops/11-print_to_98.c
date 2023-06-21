#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print from the operand to the number 98.
 * @n: the operand.
 *
 */

void print_to_98(int n)
{
	if (n = 98)
	{
   		printf("%d\n", n);
	}
	else if (n < 98)
	{
		int res;

		for (res = n; res < 98; res++)
		{
			printf("%d, ", res);
		}
		if (res == 98)
		{
			printf("%d\n", res);
		}
	}
	else if (n > 98)
	{
		int mres;

		for (mres = n; mres > 98; mres--)
		{
			printf("%d, ", mres);
		}
		if (mres == 98)
		{
			printf("%d\n", mres);
		}
	}
}
