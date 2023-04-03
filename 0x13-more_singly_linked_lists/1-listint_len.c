#include "lists.h"

/**
 * listint_len - count the number of nodes in the list
 * @h: the first node in the list
 *
 * Return: the size of nodes in the list
 */
size_t listint_len(const listint_t *h)
{
	int counter;

	for (counter = 0; h; h = h->next, counter++)
		;
	return (counter);
}
