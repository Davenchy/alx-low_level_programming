#include "search_algos.h"

/**
 * linear_search - search array for a value using linear searching algo
 * @array: pointer to the first element in the array
 * @size: the size of the array
 * @value: the value looking for
 *
 * DESCRIPTION: Searches the array for value using the linear searching
 * algorithm and returns the index of the value if found otherwise -1
 *
 * Return: the index of the value if found otherwise -1
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (!array)
		return (-1);

	for (i = 0; (size_t)i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
	}

	return (-1);
}
