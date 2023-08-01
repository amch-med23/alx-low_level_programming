#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a given index.
 * @head: pointer to the head of the list
 * @index: index of the node to be deleted.
 *
 * Return: the address of the deleted node.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	int list_len;
	listint_t *oldNode = NULL;
	listint_t *prevNode = NULL;

	prevNode = NULL;
	oldNode = NULL;
	i = 0;
	list_len = len_listint(*head);
	if ((index > list_len) || (list_len == 0))
	{
		return (-1);
	}
	while (head != NULL)
	{
		if (i == index)
		{
			oldNode = *head;
			if (i == 0)
			{
				*head = oldNode->next;
				free(oldNode);
				return (1);
			}
			prevNode->next = oldNode->next;
			free(oldNode);
			return (1);
		}
		else if ((i + 1) == index)
			prevNode = *head;
		head = &((*head)->next);
		i = i + 1;
	}
	return (-1);
}

/**
 * len_listint - counts the number of nodes
 * @h: the head of the given list.
 *
 * Return: the number of nodes.
 */
int len_listint(const listint_t *h)
{
	const listint_t *ptr;
	int counter;

	counter = 0;
	ptr = h;
	while (ptr != NULL)
	{
		counter += 1;
		ptr = ptr->next;
	}
	return (counter);
}
