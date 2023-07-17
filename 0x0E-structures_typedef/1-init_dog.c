#include <stddef.h>
#include "dog.h"
/**
 * init_dog - a function to initialyze the elements
 * of the structure dog.
 * @d: a variable of type struct dog.
 * @name: the name argument.
 * @age: the age argument.
 * @owner: the owner argument:
 *
 * Return: nothing(void).
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
