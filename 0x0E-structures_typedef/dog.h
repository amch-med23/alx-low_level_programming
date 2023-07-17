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
#endif
