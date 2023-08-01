#include "lists.h"
/**
 * reverse_listint - Reverses the order of given list elements.
 * @head: the given head of the list.
 *
 * Return: a pointer to the first node of the produced list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next;
	listint_t *prev;

	if (head == NULL || *head == NULL)
	{
		return (NULL);
	}
	prev = NULL;
	while ((*head)->next != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	(*head)->next = prev;

	return (*head);
}
