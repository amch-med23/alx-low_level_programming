#include "hash_tables.h"
/**
 * hash_table_set - add or update an element on the hash tabe
 * @ht: A pointer to the  hash table
 * @key: The key to add - this can't be null
 * @value: The value associated with the key.
 *
 * Return: Upon success - 1
 *	Otherwise - 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *value_cpy;
	unsigned long int index, i;
	hash_node_t *new;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
	{
		return (0);
	}
	value_cpy = strdup(value);
	if (value_cpy == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_cpy;
			return (1);
		}
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(value_cpy);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = value_cpy;
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
