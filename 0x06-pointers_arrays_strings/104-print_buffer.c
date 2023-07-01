#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints the buffer
 * @b: the specified buffer
 * @size: the size
 *
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int z, j, i;

	z = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (z < size)
	{
		j = size - z < 10 ? size - z : 10;
		printf("%08x: ", z);
		for (i = 0; i < 10; i++)
		{
			if (i < j)
				printf("%02x", *(b + z + i));
			else
				printf("  ");
			if (i % 2)
			{
				printf(" ");
			}
		}
		for (i = 0; i < j; i++)
		{
			int c = *(b + z + i);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		z += 10;
	}
}
