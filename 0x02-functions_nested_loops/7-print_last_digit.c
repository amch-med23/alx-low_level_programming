#include "main.h"
/**
 * print_last_digit - prints the lst digit of the given integer.
 * @i: the operand.
 *
 * Return: it returns (0).
 */

int print_last_digit(int i)
{
	int result;


	if (i < 0)
	{
		int b;
		char ch = '0';

		b = -i;
		result = b % 10;
		_putchar(result + ch);
		return (result);
	}
	else
	{
		char ch = '0';

		result = i % 10;
		_putchar(result + ch);
		return (result);
	}
}
