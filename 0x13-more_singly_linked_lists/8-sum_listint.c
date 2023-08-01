#include "lists.h"
/**
 * sum_listint - adds all the data in a given linked list
 * @head: head of the given list
 *
 * Return: the value of the sum of the numbers(the content).
 */

int sum_listint(listint_t *head)
{
	listint_t *ptr;
	size_t val;

	ptr = head;
	val = 0;
	while (ptr != NULL)
	{
		val += ptr->n;
		cptr = ptr->next;
	}
	return (val);
}
