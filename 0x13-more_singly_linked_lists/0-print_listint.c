#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print all nodes in the list
 * @h: the first node in the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	if (!h)
		return (0);
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}
