#include "lists.h"
#include <string.h>
#include <stddef.h>
#include <stdlib.h>
/**
 * free_list - frees a list.
 * @head: the list_t passed.
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *p;

	while (head)
	{
		p = head->next;
		free(head->str);
		free(head);
		head = p;
	}
}
