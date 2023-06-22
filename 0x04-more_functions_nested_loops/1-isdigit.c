#include "main.h"
/**
 * _isdigit - checks if the parameter is a digit.
 * @c: the parameter to perform the check on.
 *
 * Return: (1) if the parameter is a digit. and
 * (0) otherwise.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
