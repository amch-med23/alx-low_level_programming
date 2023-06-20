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
		_putchar(i + '0');
		return (0);
	}
	else if (i < 0)
	{
		int b;
		b = i * (-1);
		_putchar(b + '0');
		return (0);
	}
	else
	{
		_putchar(i + '0');
		return (0);
	}
}
