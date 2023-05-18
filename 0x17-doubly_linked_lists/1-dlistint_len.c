#include "lists.h"

/**
 * dlistint_len - counts the number of nodes in the linked list
 * @h: pointer of the first node in the list
 * Return: the number of nodes in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count;

	if (!h)
		return (0);
	for (count = 0; h; h = h->next, count++)
		;
	return (count);
}
