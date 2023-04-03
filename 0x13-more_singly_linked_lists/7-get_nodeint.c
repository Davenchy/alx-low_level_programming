#include "lists.h"

/**
 * get_nodeint_at_index - get node from the list by its index
 * @head: pointer to the first node in the list
 * @index: the index of required node
 *
 * Return: pointer to the required node otherwise NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	while (head && index)
		head = head->next, index--;
	return (head);
}
