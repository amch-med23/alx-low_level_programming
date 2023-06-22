#include "main.h"

/**
 * _isupper - returns 1 if the parameter Uppercase and
 * 0 it it is lowercase.
 * @c: the operand.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	} else if (c >= 97 && c <= 122)
	{
		return (0);
	}
}
