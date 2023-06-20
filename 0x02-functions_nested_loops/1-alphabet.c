#include "main.h"
/**
 * main - the entry point.
 * Return: It's (0).
 * print_alphabet - prints the alphabets from a to z in lowercase.
 */
/* declaring the function print_alphabet */
void print_alphabet(void);
int main(void)
{
	print_alphabet();
	return (0);
}
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
	return;		   
}
