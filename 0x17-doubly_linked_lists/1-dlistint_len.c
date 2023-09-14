#include "lists.h"

/**
 * dlistint_len - returns the number of elems in the doubly linked list
 *
 * @h: a pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	int c;

	c = 0;
	if (h == NULL)
		return (c);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		c++;
		h = h->next;
	}
	return (c);
}
