#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees a struct.
 * @d: a ptr to the structure.
 *
 * Return: it returns nothing.
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
