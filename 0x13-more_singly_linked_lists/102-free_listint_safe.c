#include "lists.h"

/**
 * listint_count_loo - counts the number of unique nodes in
 * a looped linked list.
 * @head: the pointer to the head of the list to check.
 *
 * Return: (0) when the list is not looped.
 * otherwise it returns the number of the unique nodes in the list.
 */
size_t listint_count_loo(listint_t *head)
{
	listint_t *vrc;
	listint_t *vtr;
	size_t nodes;

	if (head == NULL || head->next == NULL)
	{
		return (0);
	}
	vrc = head->next;
	vtr = (head->next)->next;
	nodes = 1;
	while (vtr)
	{
		if (vrc == vtr)
		{
			vrc = vtr;
			while (vrc != vtr)
			{
				nodes++;
				vrc = vrc->next;
				vtr = vtr->next;
			}

			vrc = vrc->next;
			while (vrc != vtr)
			{
				nodes++;
				vrc = vrc->next;
			}

			return (nodes);
		}

		vrc = vrc->next;
		vtr = (vtr->next)->next;
	}

	return (0);
}

/**
 * free_listint_safe - Frees a given list safely
 * it can free list containing loops as well
 * @h: a pointer to the head of the given list.
 *
 * Return: an integer representing the size of the list that was freed.
 *
 * Description: this function sets the head to NULL.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t nodes;
	size_t index;

	nodes = listint_count_loo(*h);
	index = 0;
	if (nodes == 0)
	{
		while (h != NULL && *h != NULL)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			nodes++;
		}
	}

	else
	{
		while (index < nodes)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			index++;
		}

		*h = NULL;
	}

	h = NULL;

	return (nodes);
}
