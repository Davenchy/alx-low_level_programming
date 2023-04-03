#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - free list and set its head pointer to NULL
 * @head: pointer to the first list node pointer
 */
void free_listint2(listint_t **head)
{
	if (!head)
		return;
	while (*head)
	{
		listint_t *next = (*head)->next;

		free(*head);
		*head = next;
	}
}
