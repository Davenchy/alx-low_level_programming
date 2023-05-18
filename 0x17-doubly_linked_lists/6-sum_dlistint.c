#include "lists.h"

/**
 * sum_dlistint - calculate the sum of all the values in the list
 * @head: pointer of the first node in the list
 * Return: the sum of all data in the list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	for (sum = 0; head; head = head->next)
		sum += head->n;
	return (sum);
}
