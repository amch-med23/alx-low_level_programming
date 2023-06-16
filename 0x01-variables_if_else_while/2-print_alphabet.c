#include <stdio.h>
/**
 *main - It is the main function.
 *Return: it return (0)
 */

int main(void)
{
	char alphabet;
	
	alphabet = 'a';
	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
