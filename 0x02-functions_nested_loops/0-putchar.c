#include <main.h>
/**
 * main - The Entry Point
 * Return: Itreturns (0), If Succeded.
 */

int main(void)
{
	char pchar[10] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r', '\n', '\0'};
	int i = 0;

	while (i < 9)
	{
		putchar(pchar[i]);
		i++;
	}
	return (0);
}
