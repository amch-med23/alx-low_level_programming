#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table.
 * @ht: A pointer to the hash table.
 *
 * Description: Key/value pairs are printed in the order they appear
 *	in the hash_table.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned char c_flag;
	unsigned long int i;

	c_flag = 0;
	if (ht == NULL)
		return;
	printf("{");
	i = 0;
	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
		{
			if (c_flag == 1)
				printf(", ");
			node = ht->array[i];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			c_flag = 1;
		}
		i++;
	}
	printf("}\n");
}
