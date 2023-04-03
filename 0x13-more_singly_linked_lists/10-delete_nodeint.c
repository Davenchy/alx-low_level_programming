#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - delete a node from the list by its index
 * @head: pointer to the first list node pointer
 * @index: the index of the node to delete
 *
 * Return: 1 on success otherwise -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	char ishead = 0;
	listint_t *parent, *node;

	if (!head)
		return (-1);

	/* check if the node to delete is the head node */
	ishead = !index;
	/* if the node to delete is not the head then target the parent node */
	if (!ishead)
		index--;

	/* find the parent node */
	parent = *head;
	while (parent && index--)
		parent = parent->next;

	/* if no parent node and the node to delete is not the head node */
	if (!parent && !ishead)
		return (-1);

	/* get the node address if exist */
	node = ishead ? *head : parent->next;
	if (!node)
		return (-1);
	/* pop the node */
	if (ishead)
		*head = node->next;
	else
		parent->next = node->next;
	/* delete the node */
	free(node);
	return (1);
}
