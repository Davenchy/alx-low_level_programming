#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * shash_table_create - creates a sorted hash table
 * @size: the size of the hash table array
 * Return: pointer to the hash table object otherwise NULL
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table = NULL;

	if (!size)
		return (NULL);

	table = malloc(sizeof(shash_table_t) + size * sizeof(shash_node_t));
	if (!table)
		return (NULL);

	table->size = size;
	table->array = (shash_node_t **)(table + 1);
	table->shead = NULL;
	table->stail = NULL;

	memset(table->array, 0, size * sizeof(shash_node_t));
	return (table);
}

/**
 * remove_node - checks if a node with key already exists then removes it
 * @ht: pointer to the hash table object
 * @key: the key to look for
 */
void remove_node(shash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	shash_node_t *node = NULL;

	if (!ht || !key || !strlen(key))
		return;

	index = key_index((const unsigned char *)key, ht->size);
	for (node = ht->array[index]; node; node = node->next)
		if (!strcmp(key, node->key))
		{
			if (node == ht->array[index])
				ht->array[index] = node->next;
			if (node->key)
				free(node->key);
			if (node->value)
				free(node->value);
			if (ht->shead == node)
			{
				ht->shead = node->snext;
				node->snext->sprev = NULL;
			}
			if (ht->stail == node)
			{
				ht->stail = node->sprev;
				node->sprev->snext = NULL;
			}
			free(node);
			break;
		}
}

/**
 * insert_node - insert the node into the sorted hash table
 * @ht: pointer to the hash table object
 * @node: the node to insert
 */
void insert_node(shash_table_t *ht, shash_node_t *node)
{
	int cmp = 0;
	shash_node_t *curr = NULL;

	if (!ht || !node)
		return;
	if (!ht->shead)
		ht->shead = node;
	if (!ht->stail)
		ht->stail = node;

	for (curr = ht->shead; curr; curr = curr->snext)
	{
		cmp = strcmp(node->key, curr->key);
		if (!cmp)
			return;
		if (cmp < 0)
		{
			node->snext = curr;
			node->sprev = curr->sprev;
			if (curr->sprev)
				curr->sprev->snext = node;
			else
				ht->shead = node;
			curr->sprev = node;
			return;
		}
	}
	ht->stail->snext = node;
	node->sprev = ht->stail;
	ht->stail = node;
}

/**
 * shash_table_set - sets a new element to the hash table
 * @ht: pointer to the hash table object
 * @key: the key to associate the value to
 * @value: the value that will be associated to the key
 * Description:
 * key can not be empty string while value can be empty string
 *
 * key and value will be duplicated
 *
 * if key exists then the value will be freed and replaced
 *
 * Return: 1 on success and 0 on fail
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	shash_node_t *node = NULL;

	if (!ht || !key || !value || !strlen(key))
		return (0);

	remove_node(ht, key);
	node = malloc(sizeof(shash_node_t));
	if (!node)
		return (0);

	node->key = strdup(key);
	if (!node->key)
	{
		free(node);
		return (0);
	}
	node->next = ht->array[index] ? ht->array[index] : NULL;
	node->snext = NULL;
	node->sprev = NULL;
	node->value = strdup(value);
	if (!node->value)
	{
		free(node->key);
		free(node);
		return (0);
	}
	ht->array[index] = node;
	insert_node(ht, node);
	return (1);
}

/**
 * shash_table_delete - deletes hash table object and frees memory
 * @ht: pointer to the hash table object
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int index = 0;

	if (!ht)
		return;
	for (; index < ht->size; index++)
	{
		shash_node_t *node = ht->array[index], *temp = NULL;

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

/**
 * shash_table_get - get value associated to key if exists
 * @ht: pointer to the hash table object
 * @key: the key to look for
 * Return: the value if exists otherwise NULL
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	shash_node_t *node = NULL;

	if (!ht || !key || !strlen(key))
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];
	while (node)
	{
		if (!strcmp(key, node->key))
			return (node->value);
		node = node->next;
	}
	return (NULL);
}

/**
 * shash_table_print - prints the hash table keys/values using the sorted table
 * @ht: pointer to the hash table object
 */
void shash_table_print(const shash_table_t *ht)
{
	char begin = 1;
	shash_node_t *node = NULL;

	printf("{");

	if (!ht || !ht->shead)
		goto end;

	for (node = ht->shead; node; node = node->snext, begin = 0)
		printf("%s'%s': '%s'", begin ? "" : ", ", node->key, node->value);

end:
	puts("}");
}

/**
 * shash_table_print_rev - prints the keys/values reversed
 * using the sorted table
 * @ht: pointer to the hash table object
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	char begin = 1;
	shash_node_t *node = NULL;

	printf("{");

	if (!ht || !ht->stail)
		goto end;

	for (node = ht->stail; node; node = node->sprev, begin = 0)
		printf("%s'%s': '%s'", begin ? "" : ", ", node->key, node->value);

end:
	puts("}");
}
