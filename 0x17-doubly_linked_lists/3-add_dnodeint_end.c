#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - add a new node at the end of the linked list
 * @head: pointer to pointer of the first node in the list
 * @n: the value of the new node
 * Return: the address of the new node otherwise NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (!head)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = *head;

	while (new->prev && new->prev->next)
		new->prev = new->prev->next;

	if (!new->prev)
		*head = new;
	else
		new->prev->next = new;
	return (new);
}
