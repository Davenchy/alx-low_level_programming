#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - add a new node at the beginning
 * @head: pointer to the head pointer
 * @n: the int value of the node
 *
 * Return: pointer to the created node otherwise NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	if (!head)
		return (NULL);
	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);
	node->n = n;
	if (*head)
		node->next = *head;
	*head = node;
	return (node);
}
