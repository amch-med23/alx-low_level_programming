#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 *
 * @head: a pointer to the head of the list
 *
 * Return: no return
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;
	}
	tmp = head;
	while (tmp != NULL)
	{
		head = head->next;
		free(tmp);
	}
}
