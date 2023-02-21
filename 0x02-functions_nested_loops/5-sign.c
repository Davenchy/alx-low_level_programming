#include "main.h"

/**
 * print_sign - check @n sign and prints it
 * @n: the number to check
 *
 * Return: 1 if @n is positive
 * or 0 if @n is zero
 * or -1 if @n is negative
 */
int print_sign(int n)
{
	int r = (n > 0) ? 1 : (n < 0) ? -1 : 0;

	if (r == 1)
		_putchar('+');
	else if (r == -1)
		_putchar('-');
	else
		_putchar('0');

	return (r);
}
