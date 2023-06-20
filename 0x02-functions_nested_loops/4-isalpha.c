#include "main.h"
/**
 * _isalpha - this function determines if a character is an
 * alphabit or not.
 * @c: the character to check.
 *
 * Return: returns (0) if the character is a letter uppercase
 * or lowercase, and returns (1) otherwise.
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
