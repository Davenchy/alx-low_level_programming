#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * print_key_all - print all values of the linked list at associated to a key
 * @ht: pointer to the hash table object
 * @key: the key to list its associated nodes
 */
void print_key_all(hash_table_t *ht, char *key)
{
	unsigned long int index = 0;
	hash_node_t *head = NULL;

	if (!ht || !key || !strlen(key))
		return;

	index = key_index((const unsigned char *)key, ht->size);
	head = ht->array[index];

	if (!head)
		return;

	while (head)
	{
		printf("key: %s, value: %s\n", head->key, head->value);
		head = head->next;
	}
}

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(1024);
	hash_table_set(ht, "betty", "cool");
	hash_table_set(ht, "hetairas", "cool1");
	hash_table_set(ht, "mentioner", "cool2");
	printf("betty: %lu\n",
				key_index((const unsigned char *)"betty", ht->size));
	printf("hetairas: %lu\n",
				key_index((const unsigned char *)"hetairas", ht->size));
	printf("mentioner: %lu\n",
				key_index((const unsigned char *)"mentioner", ht->size));
	puts("--------------");
	print_key_all(ht, "betty");
	puts("--------------");
	print_key_all(ht, "hetairas");
	return (EXIT_SUCCESS);
}
