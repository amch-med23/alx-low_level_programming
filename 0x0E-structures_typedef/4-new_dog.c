#include "dog.h"
#include <stddef.h>
/**
 * new_dog - creates a new dog strut.
 * @name: the name.
 * @age: the age.
 * @owner: the owner.
 *
 * Return: a pointer to the new struct.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;
	int i;
	int ownerLength = 0;
	int nameLength = 0;

	while (name[nameLegth])
		nameLegth++;
	while (owner[ownerLength])
		ownerLength++;
	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);
	ndog->name = malloc(sizeof(char) * (nameLength + 1));
	if (ndog->name == NULL)
	{
		free(ndog);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
	{
		ndog->name[i] = name[i];
	}
	ndog->name[i] = '\0';
	ndog->owner = malloc(sizeof(char) * (ownerLength + 1));
	if (ndog->owner == NULL)
	{
		free(ndog->name);
		free(ndog);
		return (NULL);
	}
	for (i = 0; owner[i] != '\0'; i++)
	{
		ndog->owner[i] = owner[i];
	}
	ndog->owner[i] = '\0';
	ndog->age = age;
	return (ndog);
}
