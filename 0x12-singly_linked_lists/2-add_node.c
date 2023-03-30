#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
* add_node - add a new node at the beginning of a linked list
* @head: pointer to the first node pointer
* @str: the string value of the node
*
* Return: pointer to the new beginning node
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

	if (!head)
		return (NULL);

	node = calloc(1, sizeof(list_t));
	if (!node)
		return (NULL);

	node->str = strdup(str);
	if (!node->str)
	{
		free(node);
		return (NULL);
	}
	node->len = strlen(str);
	node->next = *head;
	*head = node;
	return (node);
}
