#include "search_algos.h"

/**
 * print_array - prints the array values into the stdout
 * @array: pointer to the first element of the array
 * @size: the size of the array
 */
void print_array(int *array, size_t size)
{
	int i;

	printf("Searching in array: ");

	for (i = 0; (size_t)i < size; i++)
	{
		if (i)
			printf(", ");

		printf("%d", array[i]);
	}

	printf("\n");
}

/**
 * binary_search - search for a value in an array using the binary search algo
 * @array: pointer to the first element in the array
 * @size: the size of the array
 * @value: the value looking for
 *
 * Return: the index of the element in the array if found otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
	int mid, index;

	if (!array || !size)
		return (-1);

	print_array(array, size);
	mid = size / 2 - (size % 2 == 0 ? 1 : 0);

	if (array[mid] == value)
		return (mid);
	else if (array[mid] > value)
		return (binary_search(array, mid, value));

	index = binary_search(array + mid + 1, size - mid - 1, value);
	return (index != -1 ? index + mid + 1 : -1);
}
