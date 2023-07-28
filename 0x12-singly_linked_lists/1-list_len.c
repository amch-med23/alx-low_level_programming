#include "lists.h"
#include <stddef.h>

/**
 * list_len - prints all the elements of the
 * linked list.
 * @h: a pinter to the given head of list.
 *
 * Return: it returns the numbet of nodes.
 */
size_t list_len(const list_t *h)
{
	size_t i;
	const list_t *p;

	p = h;
	i = 0;
	while (p != NULL)
	{
		i++;
		p = p->next;
	}
	return (i);
}
