#include <stdio.h>
/**
 * main - The Entry Point
 * Return: Itreturns (0), If Succeded.
 */

int main(void)
{
	char pchar[8] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	int i = 0;

	while (i < 9)
	{
		putchar(pchar[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
