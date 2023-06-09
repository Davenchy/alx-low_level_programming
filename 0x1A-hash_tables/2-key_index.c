#include "hash_tables.h"

/**
 * key_index - gives the index of the given key
 * @key: the key to find its index in the hast table array
 * @size: the size of the hash table array
 * Return: the index of the key represented node in the hash table array
 */
#include "hash_tables.h"
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
