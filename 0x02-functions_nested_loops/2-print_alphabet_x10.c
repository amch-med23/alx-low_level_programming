#include "main.h"
/**
 * print_alphabet_x10 - ptints 10 times the alphabets from 'a' to 'z'
 */
void print_alphabet_x10(void)
{
	int i;
	char c;

	i = 0;
	while (i < 10)
	{
		while (c <= 'z')
		{
			c = 'a';
			putchar(c);
			c++;
		}
		putchar('\n');
		i++;
	}
}
