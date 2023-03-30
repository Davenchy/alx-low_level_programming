#include "lists.h"

/**
* list_len - count the number of nides in the linked list
* @h: the first element in the linked list
*
* Return: the number of nodes in the list
*/
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
