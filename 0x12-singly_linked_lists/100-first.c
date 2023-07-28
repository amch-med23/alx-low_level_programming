#include <stdio.h>
#include <stdlib.h>

void __attribute__((constructor)) strp(void);
/**
 * strp - the entry point befour main.
 *
 * Return: success
 */
void strp(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
