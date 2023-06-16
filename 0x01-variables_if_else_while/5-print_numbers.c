#include <stdio.h>
/**
 * main - It's  the main function in the program.
 * Return: its always (0), it means Success.
 */

int main(void)
{
	int num;

	num = 0;
	while (num < 10)
	{
		printf("%d\n",num);
		num++;
	}
	/*putchar('\n');*/
	return (0);
}
