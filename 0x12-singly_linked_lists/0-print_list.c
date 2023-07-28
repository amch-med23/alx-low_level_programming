#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - prints all the elements of the
 * linked list.
 * @h: a pinter to the given head of list.
 *
 * Return: it returns the numbet of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t i;
	const list_t *p;

	p = h;
	i = 0;
	while (p != NULL)
	{
		if (p->str != NULL)
		{
			printf("[%u] %s\n", p->len, p->str);
		}
		else
			printf("[0] (nil)\n");
		i++;
		p = p->next;
	}
	return (i);
}
