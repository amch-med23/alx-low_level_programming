#include "main.h"
/**
 * reset_to_98 - resets the value of the integer pointed
 * by the pointer.
 * @n: the pointer that point to the operand value.
 * Return: void (nothing).
 */

void reset_to_98(int *n)
{
	int m;

	m = &n;
	*m = 98;
}
