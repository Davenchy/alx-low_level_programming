#include "lists.h"

/**
 * get_dnodeint_at_index - get list element at @index
 * @head: pointer to the first node in the list
 * @index: the index of the node to get
 * Return: the address of the node of exist otherwise NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t count;

	if (!head)
		return (NULL);

	for (count = index; head && count > 0; count--)
		head = head->next;
	return (!count ? head : NULL);
}
