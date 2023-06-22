#include "main.h"
/**
 * _isupper - returns 1 if the parameter is Uppercase and
 * 0 if it is lowercase.
 * @c: the operand.
 *
 * Return: (1) if the operand is uppercase and (0) if it's lowercase.
 */

int _isupper(int c)
{
	char B;

	B = (char) c;
	if (B >= 65 && B <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
