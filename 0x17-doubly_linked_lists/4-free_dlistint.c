#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - free a doubly linked list from the memory
 * @head: pointer to the first node in the linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr = NULL;

loop:
	curr = head;
	if (!curr)
		return;

	head = curr->next;
	curr->n = 0;
	curr->next = NULL;
	curr->prev = NULL;
	free(curr);
	goto loop;
}
