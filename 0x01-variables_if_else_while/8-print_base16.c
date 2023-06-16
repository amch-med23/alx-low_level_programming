#include <stdio.h>
/**
 * main - It's the main function of a program
 * Return: I'ts all (0), means Success.
 */

int main(void)
{
	int i;
	char ch;

	i = 48;
	ch = 'a';
	while (i < 58)
	{
		putchar(i);
		i++;
	}
	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
