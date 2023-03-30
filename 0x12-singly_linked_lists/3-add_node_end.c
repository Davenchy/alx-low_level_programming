#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - add a new node at the end of the linked list
 * @head: pointer to the the first list node pointer
 * @str: the string value of the node
 *
 * Return: the pointer to the created node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;

	if (!head)
		return (NULL);
	node = malloc(sizeof(list_t));
	if (!node)
		return (NULL);

	node->str = strdup(str);
	if (!node->str)
	{
		free(node);
		return (NULL);
	}

	node->len = strlen(str);
	if (!*head)
	{
		*head = node;
	}
	else
	{
		list_t *h = *head;

		while (h->next)
			h = h->next;
		h->next = node;
	}

	return (node);
}
