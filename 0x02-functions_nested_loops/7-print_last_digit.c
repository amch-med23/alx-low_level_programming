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
		int cc;
		char ch = '0';

		b = i * (-1);
		result = b % 10;
		cc = (int) (ch);
		return (_putchar(result + cc));
	}
	else
	{
		int cc;
		char ch = '0';

		cc = (int) (ch);
		result = i % 10;
		return (_putchar(result + cc));
	}
}
