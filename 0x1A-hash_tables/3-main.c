#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;
	const char *key = "betty";

	ht = hash_table_create(1024);
	hash_table_set(ht, key, "cool");
	printf("value: %s\n", ht->array[
				key_index((const unsigned char *)key, ht->size)]->value);
	return (EXIT_SUCCESS);
}
