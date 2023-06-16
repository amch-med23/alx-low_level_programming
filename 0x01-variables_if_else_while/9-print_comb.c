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
	while (i <= 57)
	{
		if (i == 57)
		{
			putchar(i);
		}
		else
		{
			putchar(i);
			putchar(44);
			putchar(32);
		}
		
		i++;
	}
	return (0);
}
