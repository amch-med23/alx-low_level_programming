#include "hash_tables.h"
/**
 * hash_table_create - creates a new empty hash table
 * @size: the zise of the hash table
 *
 * Return: if an error occured: NULL
 *	a pointer to the newelly created hash table otherwise
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);
	ht->size = size;
	/* this is to handle the chaining collusion */
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		ht->array[i] == NULL;
		i++;
	}
	return (ht);
}
