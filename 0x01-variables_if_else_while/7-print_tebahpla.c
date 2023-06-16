#include <stdio.h>
/**
 * main - It's the main function in a program.
 * Return: It's always (0), means Success.
 */

int main(void)
{
	char ch;

	ch = 'z';
	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
