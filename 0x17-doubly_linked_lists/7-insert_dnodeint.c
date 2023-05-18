#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a new node at index into the linked list
 * @h: pointer to pointer of the first node of the list
 * @idx: the index where to insert the new node
 * @n: the value of the new node
 * Return: the add ress of the new node otherwise NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *curr = NULL, *new = NULL;

	if (!h)
		return (NULL);

	if (!idx)
		return (add_dnodeint(h, n));

	/* find the node at the index n */
	for (curr = *h; curr && idx > 0; curr = curr->next, idx--)
		;

	/* if can't reach the node then end */
	if (idx)
		return (NULL);
	if (curr)
	{
		/* insert new node before the current one if exist */
		curr->prev->next = NULL;
		new = add_dnodeint_end(&curr->prev, n);
		if (!new)
			return (NULL);
		new->next = curr;
		curr->prev = new;
		return (new);
	}
	else
		/* if no node at that index then create a new one */
		return (add_dnodeint_end(h, n));
}
