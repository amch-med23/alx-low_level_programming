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
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (0);
	}
}
