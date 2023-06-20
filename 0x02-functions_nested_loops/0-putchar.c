#include "main.h"
/**
 * main - The Entry Point
 * Return: It returns (0), If Succeded.
 */

int main(void)
{
	char pchar[10] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r', '\n', '\0'};
	int i = 0;

	while (i < 9)
	{
		_putchar(pchar[i]);
		i++;
	}
	return (0);
}
