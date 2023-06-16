#include <stdio.h>
/**
 * main - It is the main function in the program.
 * Return: it return (0), Success.
 */

int main(void)
{
	char alphabets = 'a';

	while (alphabets <= 'z')
	{
		putchar(alphabets);
		alphabets++;
	}
	alphabets = 'A';
	while (alphabets <= 'Z')
	{
		putchar(alphabets);
		alphabets++;
	}
	putchar('\n');
	return (0);
}
