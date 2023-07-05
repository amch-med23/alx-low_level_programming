#include "main.h"
/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: the value to raise.
 * @y: the power to raise to.
 *
 * Return: result of the power
 */
int _pow_recursion(int x, int y)
{
	int i, j;

	i = x;
	j = y;
	if (j < 0)
	{
		return (-1);
	}
	if (j == 0)
	{
		return (1);
	}
	return (i * _pow_recursion(i, y - 1));
}
