#include "main.h"

/**
 * get_endianness - checks the endianness.
 *
 * Return: nothing.
 */
int get_endianness(void)
{
	unsigned int i = 0x76543210;
	char *c = (char *) &i;

	if (*c == 0x10)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
