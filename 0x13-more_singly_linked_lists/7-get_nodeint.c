#include "lists.h"
/**
* get_nodeint_at_index - return the specified node of a given linked list.
* @head: the head of the list.
* @index: the index of the required node.
*
* Return: the address of the node.
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int d = 0;

	ptr = NULL;
	while (head != NULL)
	{
		if (d <= index)
		{
			if (d == index)
			{
				ptr =  head;
				break;
			}
			head = head->next;
			d++;
		}
		else
		{
			return (NULL);
		}
	}
	return (d);
}
