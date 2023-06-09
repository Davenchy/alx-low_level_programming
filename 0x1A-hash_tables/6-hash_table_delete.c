#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - deletes the hash table and frees the memory
 * @ht: pointer to the hash table object
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *node = NULL, *temp = NULL;

	if (!ht)
		return;

	for (index = 0; index < ht->size; index++)
	{
		node = ht->array[index];
		while (node)
		{
			temp = node;
			node = node->next;
			if (temp->key)
				free(temp->key);
			if (temp->value)
				free(temp->value);
			free(temp);
		}
	}
	free(ht);
}
