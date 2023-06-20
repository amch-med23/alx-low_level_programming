#include "main.h"
void print_alphabet_x10(void)
{
	int i;
	char c;

	i = 0;
	c = 'a';
	while (i < 10)
	{
		while(c <= 'z')
		{
			putchar(c);
			c++;
		}
		putchar('\n');
		i++;
	}
}
