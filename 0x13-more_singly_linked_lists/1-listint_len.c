#include "lists.h"
/**
 * listint_len - Returns the number of nodes in a integer linked list.
 * @h: A pointer to the head of the list
 *
 *
 * Return: an integer
 */

size_t listint_len(const listint_t *h)
{
	size_t counter = 0;
	const listint_t *node;

	node = h;
	while (node)
	{
		counter++;
		node = node->next;
	}
	return (counter);
}
