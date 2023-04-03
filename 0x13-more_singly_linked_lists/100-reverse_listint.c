#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: a pointer to the first list node pointer
 *
 * Return: the first node pointer of the reversed list
 * otherwise NULL
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next, *prev = NULL;

	if (!head)
		return (NULL);

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
