#include "hash_tables.h"
/**
 * hash_table_get - Retreives the value associated with a key in a hash
 *	table.
 * @ht: A pointer to a hash table.
 * @key: The key to get the value ot.
 *
 * Return: The value associated with the key in ht
 *	Otherwise - NULL if the key cannot be matched.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (NULL);
	}
	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
	{
		return (NULL);
	}
	node = ht->array[index];
	while (node && strcmp(node->key, key) != 0)
	{
		node = node->next;
	}

	return ((node == NULL) ? NULL : node->value);
}
