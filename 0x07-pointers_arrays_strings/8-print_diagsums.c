#include <stdio.h>

/**
 * print_diagsums -  prints the sum of left and right diagonals
 *                   of a square matrix
 * @a: a pointer to the matrix
 * @size: the size of matrix side
 */
void print_diagsums(int *a, int size)
{
	int i, l_sum = 0, r_sum = 0;

	for (i = 0; i < size; i++)
	{
		l_sum += *(a + (size * i + i));
		r_sum += *(a + (size * i + size - 1 - i));
	}
	printf("%d, %d\n", l_sum, r_sum);
}
