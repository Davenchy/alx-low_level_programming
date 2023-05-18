#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - print all elements in the linked list
 * @h: pointer of the first node in the linked list
 * Return: number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	if (!h)
		return (0);
	for (count = 0; h; h = h->next, count++)
		printf("%d\n", h->n);
	return (count);
}
