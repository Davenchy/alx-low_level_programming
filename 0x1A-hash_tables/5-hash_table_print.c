#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - prints all key/value in the hash table
 * @ht: pointer to the hash table object
 */
void hash_table_print(const hash_table_t *ht)
{
	char begin = 1;
	unsigned long int index;
	hash_node_t *node = NULL;

	printf("{");
	if (!ht)
		goto end;

	for (index = 0; index < ht->size; index++)
	{
		node = ht->array[index];
		while (node)
		{
			if (!begin)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
			begin = 0;
		}
	}

end:
	puts("}");
}
