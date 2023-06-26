#include "main.h"
/**
 * swap_int - swaps the value of two integers.
 * @a: the first integer (refered by address).
 * @b: the second integer (refered by address).
 */

void swap_int(int *a, int *b)
{
	int temp1;
	int temp2;

	temp1 = 0;
	temp2 = 0;
	temp1 = *a;
	temp2 = *b;
	*b = temp1;
	*a = temp2;
}
