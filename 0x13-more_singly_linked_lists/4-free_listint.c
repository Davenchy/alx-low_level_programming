#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - free the allocated list memory
 * @head: pointer to the first node in the list
 */
void free_listint(listint_t *head)
{
	while (head)
	{
		listint_t *next = head->next;

		free(head);
		head = next;
	}

}
