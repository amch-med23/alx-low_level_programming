#include "hash_tables.h"
/**
 * hash_table_delete - Deletes a given hash table
 * @ht: A pointer to the hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *tmp;
	hash_table_t *head = ht;
	unsigned long int i;

	i = 0;
	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];
			while (node != NULL)
			{
				tmp = node->next;
				free(node->value);
				free(node->key);
				free(node);
				node = tmp;
			}
		}
		i++;
	}
	free(head->array);
	free(head);
}
