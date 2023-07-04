#include "main.h"
/**
 * print_chessboard - it prints the chessboard.
 * @a: the array
 *
 * Return: nothing
 */

void print_chessboard(char (*a)[8])
{
	int l;
	int j;

	l = 0;
	while (l < 8)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[l][j]);
		_putchar('\n');
		l++;
	}
}
