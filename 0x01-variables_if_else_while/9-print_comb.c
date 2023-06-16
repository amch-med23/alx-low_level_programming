#include <stdio.h>
/**
 * main - It's the main function in the program.
 * Return: It's always (0), Success.
 */

int main(void)
{
	int i;

	i = 48;
	/*44 = ','*/
	/*32 = ' '*/
	while (i <= 57)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
