#include "lists.h"
/**
 * listint_len_loo - Counts the number of nodes in a linked list.
 * @head: A pointer to the head of the list to check.
 *
 * Return: (0) if the list is not looped, Otherwise - the number
 * of the unique nodes in the list.
 */

size_t listint_len_loo(const listint_t *head)
{
	const listint_t *tor, *ha;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	tor = head->next;
	ha = (head->next)->next;

	while (ha)
	{
		if (tor == ha)
		{
			tor = head;
			while (tor != ha)
			{
				nodes++;
				tor = tor->next;
				ha = ha->next;
			}

			tor = tor->next;
			while (tor != ha)
			{
				nodes++;
				tor = tor->next;
			}

			return (nodes);
		}

		tor = tor->next;
		ha = (ha->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a given list safely.
 * @head: a pointer to the head of the given list.
 *
 * Return: the number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = listint_len_loo(head);
	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nodes);
}
