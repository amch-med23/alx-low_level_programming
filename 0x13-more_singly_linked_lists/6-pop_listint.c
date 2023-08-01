#include "lists.h"
/**
* pop_listint - deletes the head element of a given linked list
* @head: the head of a given list.
*
* Return: the data of the deleted node.
*/

int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}
	temp = *head;
	data = (*head)->n;
	*head = (*head)->next;

	free(temp);

	return (data);
}
