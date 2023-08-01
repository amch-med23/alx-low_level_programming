#include "lists.h"
/**
 * add_nodeint - Adds a new node at the beginning of the list.
 * @head: a pointer to the head.
 * @n: an integer for the new node.
 *
 * Return: NULL if fail, or the address of the new added node.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
