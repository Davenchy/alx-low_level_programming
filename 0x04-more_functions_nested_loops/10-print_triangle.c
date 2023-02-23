#include "main.h"

/**
 * print_triangle - print right angle triangle of side @size
 * @size: the side size
 * Return: void
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar(j > size - i - 2 ? '#' : ' ');
		}
		_putchar('\n');
	}
}
