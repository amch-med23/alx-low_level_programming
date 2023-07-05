#include "main.h"
/**
 * _strlen_recursion - returns a string length.
 * @s: points tothe string.
 *
 * Return: nothing.
 */

int _strlen_recursion(char *s)
{
	int i;

	i = 0;
	if (*s)
	{
		i++;
		i += _strlen_recursion(s + 1);
	}
	return (i);
}
