#include "main.h"
#include <stdio.h>

/**
 * main - the entry point.
 *
 * Return: it returns (0), means Success.
 */
int main(void)
{
	char v[] = "ROT13 (\"rotate by 13 places\", sometimes hyphenated ROT-13) is a simple letter substitution cipher.\n";
	char *g;

	g = rot13(v);
	printf("%s", g);
	printf("------------------------------------\n");
	printf("%s", v);
	printf("------------------------------------\n");
	g = rot13(v);
	printf("%s", g);
	printf("------------------------------------\n");
	printf("%s", v);
	printf("------------------------------------\n");
	g = rot13(v);
	printf("%s", g);
	printf("------------------------------------\n");
	printf("%s", v);
	return (0);
}
