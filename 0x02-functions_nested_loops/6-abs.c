#include "main.h"
/**
 * _abs - calculates the absolute value of a given number.
 * @i: the operand.
 *
 * Return: i'ts always (0), Success.
 */

int _abs(int i)
{
	if (i > 0)
	{
		return (i);
	}
	else if (i < 0)
	{
		int b;

		b = i * -1;
		return (b);
	}
	else
	{
		return (i);
	}
}
