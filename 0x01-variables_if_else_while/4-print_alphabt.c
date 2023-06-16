#include <stdio.h>
/**
 * main -It's the main function for the program.
 * Return: its always (0), if the program succeded.
 */

int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		if (alphabet == 'e')
		{
			alphabet++;
		}
		else if (alphabet == 'q')
		{
			alphabet++;
		}
		else
		{
			putchar(alphabet);
			alphabet++;
		}
	}
	putchar('\n');
	return (0);
}
