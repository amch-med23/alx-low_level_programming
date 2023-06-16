#include <stdio.h>
/**
 * main - It's the main function of every program.
 * Return: I'ts (0), if the programe Succeded.
 */

int main(void)
{
	int a, b, c, d;

	for (a = 48; a <= 57; a++)
	{
		for (b = 48; b <= 56; b++)
		{
			for (c = 48; c <= 57; c++)
			{
				for (d = 49; d <= 57; d++)
				{
					if (a <= b || b || c || c <= d)
					{
						putchar(a);
						putchar(b);
						putchar(' ');
						putchar(c);
						putchar(d);
						if ( a != 57 || b != 56 || c != 57 || d != 57)
						{
							putchar(',');
							putchar(' ');
						}
						
					}
				}
			}
		}
		
	}
	putchar('\n');
	return (0);
}
