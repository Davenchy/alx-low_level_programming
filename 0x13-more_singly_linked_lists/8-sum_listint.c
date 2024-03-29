#include "lists.h"

/**
 * sum_listint - calculate the sum of all node values
 * @head: pointer to the first list node
 *
 * Return: the sum of all data in the list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
