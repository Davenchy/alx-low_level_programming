#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - insert a new node to the list
 * @head: pointer to the list first node pointer
 * @idx: the index to insert the new node at
 * @n: the int value of the new node
 *
 * Return: the pointer of the new inserted node  otherwise NULL on fail
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	char new_head = 0;
	listint_t *parent, *node;

	if (!head)
		return (NULL);

	/* if idx is zero, then add the new node as a new head */
	new_head = !idx;
	/* if the idx is not zero then target the parent of our node */
	if (idx)
		idx--;

	/* find the parent node */
	parent = *head;
	while (parent && idx--)
		parent = parent->next;

	/* if no parent node and the new node is not the new head */
	if (!parent && !new_head)
		return (NULL);

	/* create the new node */
	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);
	node->n = n;
	/* set the next node to our node */
	node->next = new_head ? *head : parent->next;

	/* insert the node to the list */
	if (new_head)
		*head = node;
	else
		parent->next = node;
	return (node);
}
