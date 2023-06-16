#include <stdio.h>
/**
 * main - this is the main function of every program.
 * Return: I's always (0), it means Success.
 */

int main(void)
{
	int i;

	i = 48;
	while ( i < 58 )
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
