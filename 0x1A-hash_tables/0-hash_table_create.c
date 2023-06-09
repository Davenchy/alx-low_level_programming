#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - creates a new hash table
 * @size: the size of the array
 * Return: pointer to the newly created hash table on success otherwise NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;

	table = malloc(sizeof(hash_table_t) + sizeof(hash_node_t *) * size);
	if (!table)
		return (NULL);

	table->size = size;
	table->array = (hash_node_t **)(table + 1);
	return (table);
}

