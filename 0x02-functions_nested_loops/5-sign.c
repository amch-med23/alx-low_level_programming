#include "main.h"
/**
 * print_sign - this function checks the sign of
 * the given parameter (number)
 * @n: the number passed to the function.
 *
 * Return: it return (1) nad the character('1'), it returns
 * (0) and printing the char '0', It returns (-1) and the char
 * (-) if the number is negative.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
