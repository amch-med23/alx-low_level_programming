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
	hash_table_t *hash_table;
	unsigned long int i;

	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
		return (NULL);
	hash_table->size = size;
	/* this is to handle the chaining collusion */
	hash_table->array = malloc(sizeof(hash_node_t *) * size);
	if (hash_table->array == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		hash_table->array[i] == NULL;
		i++;
	}
	return (hash_table);
}
