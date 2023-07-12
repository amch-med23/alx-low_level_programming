#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array and returning it.
 * @size: the size of the aray.
 * @c: the character.
 * Return: it returns a pointer to the string
 */

char *create_array(unsigned int size, char c)
{
	int i;
	char *s;

	i = 0;
	s = malloc(sizeof(*s) * size);
	while (s[i] != '\0')
	{
		s[i] = c;
		i++;
	}
	return (s);
}
