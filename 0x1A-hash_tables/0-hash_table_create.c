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

	if (size == 0)
		return (NULL);

	table = malloc(size * sizeof(struct hash_table_s));
	if (!table)
		return (NULL);

	table->size = size;
	table->array = NULL;
	return (table);
}

