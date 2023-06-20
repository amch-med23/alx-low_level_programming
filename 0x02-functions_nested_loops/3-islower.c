#include "main.h"
/**
 * _islower - checks is a haracter is lowercase or not.
 * @c: the character that's gonna be passed to the function to be checked.
 *
 * Return: it's (0) for lowercase, and (1) for uppercase.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
