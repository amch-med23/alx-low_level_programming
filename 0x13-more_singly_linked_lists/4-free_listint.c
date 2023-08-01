#include "lists.h"
/**
* free_listint - frees a linked list allocated  memory space.
* @head: ptr to the head of the list
*
* Return: nothing (void)
*/

void free_listint(listint_t *head)
{
	listint_t *tmpptr;

	while (head != NULL)
	{
		tmpptr = head;
		head = head->next;
		free(tmpptr);
	}
}
