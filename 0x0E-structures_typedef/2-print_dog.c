#include "dog.h"
#include <stdio.h>
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
	printf("Name: %s\n", (d->name ? d->name : "(nil)"));
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", (d->owner ? d->owner : "(nil)"));
}
