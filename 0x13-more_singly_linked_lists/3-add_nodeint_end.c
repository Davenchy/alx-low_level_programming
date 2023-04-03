#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - add a new node at the end of the list
 * @head: pointer to the head node pointer
 * @n: the int value of the node
 *
 * Return: pointer to the created node otherwise NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *curr;

	if (!head)
		return (NULL);
	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);
	node->next = NULL;
	node->n = n;

	if (!*head)
	{
		*head = node;
	}
	else
	{
		curr = *head;
		while (curr->next)
			curr = curr->next;
		curr->next = node;
	}

	return (node);
}
