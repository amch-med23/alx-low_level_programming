#include <unistd.h>
/**
 * _putchar - prints a character on the screen.
 * @c: the character.
 *
 * Return: it returns an integer.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
