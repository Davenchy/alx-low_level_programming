#include "main.h"

/**
 * print_line - print line of length @n
 * @n: the length of the line
 * Return: void
 */
void print_line(int n)
{
	int i;

	if (n < 0)
		n = 0;

	for (i = 0; i < n; i++)
		_putchar('_');

	_putchar('\n');
}
