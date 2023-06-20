#include "main.h"
/**
 * print_alphabet - prints the alphabets from a to z in lowercase.
 * Description: this function uses two putchar functions to print 
 * alphabets from 'a' to 'z'.
 */
/*the function to print the alphabets*/
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
