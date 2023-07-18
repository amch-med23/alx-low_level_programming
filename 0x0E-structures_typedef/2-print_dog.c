#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - prints the elements of the
 * dog struct.
 * @d: the pointer to the dog struct.
 *
 * Return: nothing (void).
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	else if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Name: %s\n", d->name);
	if (d->age == 0)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
