#include "lists.h"
#include <stdlib.h>

/**
 * free_list - free a linked list
 * @head: the first list node
 */
void free_list(list_t *head)
{
	if (!head)
		return;

	if (head->next)
		free_list(head->next);

	free(head->str);
	free(head);
}
