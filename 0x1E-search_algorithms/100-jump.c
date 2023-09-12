#include "search_algos.h"
#include <math.h>

/**
 * search_log - print logs for the current search process
 * @array: the array being searched
 * @a: the current array index/the range begin
 * @b: -1/the range end
 *
 * Description: Has two modes the first mode prints the current index/value,
 * the second mode is to print search range.
 *
 * To use mode a:
 * Set the array then set the argument a to the index of the element and set b
 * to -1.
 *
 * To use mode b:
 * Set the array to NULL and set a to the range begin and b to the range end
 */
void search_log(int *array, int a, int b)
{
	if (array)
		printf("Value checked array[%d] = [%d]\n", a, array[a]);
	else
		printf("Value found between indexes [%d] and [%d]\n", a, b);
}

/**
 * jump_search - Search array for value using jump search algo
 * @array: pointer to the first element of the array
 * @size: the size of the array
 * @value: the value looking for
 *
 * Return: the index where the value located if found otherwise -1
 */
int jump_search(int *array, size_t size, int value)
{
	int a, b, range;

	if (!array || !size)
		return (-1);

	range = sqrt(size);
	for (a = 0, b = range; array[b] < value; a = b, b += range)
	{
		search_log(array, a, -1);
		if (a >= size)
			return (-1);
		if (b >= size)
			break;
	}
	search_log(array, a, -1);
	search_log(NULL, a, b);
	for (; array[a] < value; a += 1)
	{
		if (a == b || a == size)
			return (-1);
		search_log(array, a, -1);
	}
	search_log(array, a, -1);

	return (array[a] == value ? a : -1);
}
