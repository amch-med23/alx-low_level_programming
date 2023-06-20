#include "main.h"
/**
 * main - the entry point.
 * Return: It's (0).
 * print_alphabet - prints the alphabets from a to z in lowercase.
 * Description: this function uses two putchar functions to print alphabets from 'a' to 'z'.
 */
void print_alphabet(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
}
