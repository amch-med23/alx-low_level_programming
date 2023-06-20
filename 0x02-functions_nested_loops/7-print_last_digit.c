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
	int k;

	if (i < 0)
	{
		int b;
		
		b = i * -1;
		result = b % 10;
		k = _putchar(result);
		return (k);
	}
	else
	{
		result = i % 10;
		k = _putchar(result);
		return (k);
	}
}
