#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given index to the doubly
 * linked list
 *
 * @h: a pointer to the head of the list
 * @idx: the index of the new node
 * @n: the value of the new node
 *
 * Return: the address of the new node, or NULL if it failure
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int x;
	dlistint_t *new;
	dlistint_t *head;

	new = NULL;
	if (idx == 0)
		new = add_dnodeint(h, n);
	else
	{
		x = 1;
		head = *h;
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;
		while (head != NULL)
		{
			if (x == idx)
			{
				if (head->next == NULL)
					new = add_dnodeint_end(h, n);
				else
				{
					new = malloc(sizeof(dlistint_t));
					if (new != NULL)
					{
						new->n = n;
						new->next = head->next;
						new->prev = head;
						head->next->prev = new;
						head->next = new;
					}
				}
				break;
			}
			head = head->next;
			x++;
		}
	}

	return (new);
}
