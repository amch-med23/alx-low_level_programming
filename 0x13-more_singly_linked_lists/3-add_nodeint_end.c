#include "lists.h"
/**
 * add_nodeint_end - adds a node to the end of the linked list
 * @head: pointer to the first head of the linked list.
 * @n: the number to be used as the value.
 *
 *
 * Return: address of the added node.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *ptr = *head;

	newNode = malloc(sizeof(listint_t));
	if (newNode != NULL)
	{
		newNode->n = n;
		newNode->next = NULL;
	}
	else
	{
		return (NULL);
	}
	if (ptr != NULL)
	{
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = newNode;
	}
	else
	{
		*head = newNode;
	}
	return (newNode);
}
