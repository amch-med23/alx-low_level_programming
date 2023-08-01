#include "lists.h"
/**
 * insert_nodeint_at_index - returns the given node index of a linked list
 * @head: the head of the list
 * @idx: the node to be added
 * @n: data of the new node
 *
 * Return: the address of the node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode;
	listint_t *prevNode;
	unsigned int i, length;

	length = len_listint(*head);
	prevNode = NULL;
	newNode = NULL;
	i = 0;
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL || idx > length)
	{
		free(newNode);
		return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;
	while (head != NULL)
	{
		if (i == idx)
		{
			if (i == 0)
			{
				newNode->next = *head;
				*head = newNode;
				return (newNode);
			}
			newNode->next = prevNode->next;
			prevNode->next = newNode;
			return (newNode);
		}
		else if ((i + 1) == idx)
		{
			prevNode = *head;
		}
		head = &((*head)->next);
		i = i + 1;
	}
	return (NULL);
}

/**
 * len_listint - counts the number of nodes in a given linked list
 * @h: the given head of the list
 *
 * Return: the number of nodes.
 */
size_t len_listint(const listint_t *h)
{
	const listint_t *ptr;
	size_t counter;

	counter = 0;
	ptr = h;
	while (ptr != NULL)
	{
		counter += 1;
		ptr = ptr->next;
	}
	return (counter);
}
