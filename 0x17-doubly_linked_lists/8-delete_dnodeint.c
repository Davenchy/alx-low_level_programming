#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - delete a node at index
 * @head: pointer to pointer of the first node in the linked list
 * @index: the index of the node to delete
 * Return: 1 on success otherwise -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr;

	if (!head)
		return (-1);

	for (curr = *head; curr && index; curr = curr->next, index--)
		;

	if (index || !curr)
		return (-1);

	if (curr->prev)
		curr->prev->next = curr->next;
	if (curr->next)
		curr->next->prev = curr->prev;
	free(curr);
	return (1);
}
