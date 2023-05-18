#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - add a new node at the beggining
 * @head: pointer to pointer of linked list node
 * @n: the value of the new node
 * Return: address of the new node otherwise NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (!head)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	new->prev = NULL;
	*head = new;
	return (new);
}
