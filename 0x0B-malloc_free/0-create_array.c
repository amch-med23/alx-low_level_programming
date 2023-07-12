#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - 
 *
 *
 *
 */

char * create_array(unsigned int size, char c)
{
	int i;

	i = 0;
	s = malloc(sizeof(*s) * size);
	while (s[i] != '\0')
	{
		s[i] = c;
		i++;
	}
	return (s);
}
