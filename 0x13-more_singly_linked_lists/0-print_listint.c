#include <stdio.h>
#include "lists.h"
/**
 * print_listint - prints the elements of a linked list.
 * @h: a pointer to a linked list.
 *
 * Return: it return the number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t counter;
	const listint_t *node;

	node = h;
	for (counter = 0; node != NULL; counter++)
	{
		printf("%d\n", node->n);
		node = node->next;
	}
	return (counter);
}
