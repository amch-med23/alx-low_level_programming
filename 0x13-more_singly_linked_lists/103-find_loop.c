#include "lists.h"

/**
 * find_listint_loop - Finds the loop contained in a linked list.
 * @head: a pointer to the head of the linked list.
 *
 * Return: (NULL) if there is no loop.
 * otherwise - the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *vtr, *vrc;

	if (head == NULL || head->next == NULL)
	{
		return (NULL);
	}
	vtr = head->next;
	vrc = (head->next)->next;

	while (vrc)
	{
		if (vtr == vrc)
		{
			vtr = head;

			while (vtr != hare)
			{
				vtr = vtr->next;
				vrc = vrc->next;
			}

			return (vtr);
		}

		vtr = vtr->next;
		vrc = (vrc->next)->next;
	}

	return (NULL);
}
