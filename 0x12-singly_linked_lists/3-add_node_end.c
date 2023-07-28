#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int chi(char const *str);

/**
 * add_node_end - add node at the beginning of the list.
 * @head: the head of the list.
 * @str: the string.
 *
 * Return: the address of the new element, NULL otherwise.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *p, *l;
	char *dup;
	int i;

	p = malloc(sizeof(list_t));
	if (p == NULL)
	{
		return (NULL);
	}
	dup = strdup(str);
	if (dup == NULL)
	{
		free(p);
		return (NULL);
	}
	i = chi(str);
	p->str = dup;
	p->len = i;
	p->next = NULL;
	if (*head == NULL)
	{
		*head = p;
	}
	else
	{
		l = *head;
		while (l->next != NULL)
		{
			l = l->next;
		}
		l->next = p;
	}
	return (*head);
}

/**
 * chi - return thenumber of chars in a str.
 * @str: the string.
 * Return: int.
 */

int chi(char const *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
