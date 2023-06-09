#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - adds an element to the hash table
 * @ht: pointer to the hash table object
 * @key: the key that represents the value in the hash table
 * @value: the value to add to the hash table
 * Description:
 * key can not be an empty string while value can be an empty string
 *
 * if the key exists then update the value
 *
 * the value is duplicated
 *
 * on collision the value node will be added to the begin of the linked list
 *
 * Return: 1 on success otherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *node = NULL;

	if (!ht || !key || !value || !strlen(key))
		return (0);

	/* get the index of the value */
	index = key_index((const unsigned char *)key, ht->size);
	/* allocates a new node */
	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);

	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;
	if (!node->key || !node->value)
		goto kill;

	if (ht->array[index])
		node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
kill:
	if (node->key)
		free(node->key);
	free(node);
	return (0);
}
