#include "main.h"
/**
 * puts2 - prints everu other caracter of a given string.
 * @str: the given string.
 */

void puts2(char *str)
{
	int strng;

	for (strng = 0; str[strng] != '\0'; strng++)
	if (strng % 2 == 0)
		_putchar(str[strng]);
	_putchar('\n');
}
