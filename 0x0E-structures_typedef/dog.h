#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a stucture of name dog
 * @name: the first element of type char *
 * @age: the second element of type float
 * @owner: the third element of type char*
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;
/**
 * init_dog - a function that initializes the dog elements.
 * @d: 1
 * @name: 2
 * @age: 3
 * @owner: 4
 *
 * Return: nothing.
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
