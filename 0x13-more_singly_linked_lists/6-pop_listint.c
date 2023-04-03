#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - pop and free the first node in the list
 * @head: pointer to the first list node pointer
 *
 * Return: the value of the popped node otherwise zero
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int value;

	if (!head || !*head)
		return (0);

	node = *head;
	value = node->n;
	*head = node->next;
	free(node);
	return (value);
}
