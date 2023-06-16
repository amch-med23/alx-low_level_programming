#include <stdio.h>
/**
 *main - It's the main funtion.
 *Return: It's always (0), means Success.
 */

int main(void)
{
	int a;
	int b;

	a = 48;
	while (a < 58)
	{
		/*putchar(num);*/
		/*nums from 48-0 to 58-9*/
		if (a < 58)
		{
			b = 49;
			while (b < 58 && a < 57)
			{
				putchar(a);
				putchar(b);
				++b;
				if(a<57 && b<58)
				{
					putchar(',');
					putchar(' ');
				}
				
			}
		}
		a++;
	}
	putchar('\n');
	return (0);
}
