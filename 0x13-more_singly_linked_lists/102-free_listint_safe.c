#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - free all nodes in linked list (safe)
 * @h: pointer to the pointer of the first node in the list
 *
 * Return: the size of nodes in the list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 5, counter = 0, i;
	listint_t *node;
	void **pointers;

	pointers = calloc(size, sizeof(void *));
	if (!pointers)
		return (0);

	while (h && *h)
	{
		node = *h;
		for (i = 0; i < counter; i++)
			if (node == pointers[i])
				goto end;
		pointers[counter++] = node;
		*h = node->next;
		node->next = NULL;
		free(node);
		if (counter >= size)
		{
			size += 5;
			pointers = realloc(pointers, size * sizeof(void *));
			if (!pointers)
				return (0);
		}
	}
end:
	*h = NULL;
	free(pointers);
	return (counter);
}
