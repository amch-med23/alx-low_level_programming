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

	result = i % 10;
	_putchar(result + '0');
	return (0);
}
