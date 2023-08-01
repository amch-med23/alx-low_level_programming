#include "lists.h"
/**
* free_listint2 - frees a memory allocated to a linked list
* @head: pointer to the head of the linked list.
*
* Return: nothing (void)
*/

void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *node;

	node = *head;
	if (head == NULL)
	{
		return;
	}

	while (node != NULL)
	{
		temp = node->next;
		free(node);
		node = temp;
	}

	head = NULL;
}
