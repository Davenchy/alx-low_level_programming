#include "main.h"

/**
 * nearest_tens - find the nearest floored 10s to @n
 * @n: the number to stop search for 10s before
 * Return: the nearest floored 10s number to @n
 */
int nearest_tens(int n)
{
	int t = 10;

	while (n / t > 0)
	{
		t *= 10;
	}

	return (t / 10);
}

/**
 * print_number - print number in ascii characters
 * @n: the number to print
 * Return: void
 */
void print_number(int n)
{
	int tens;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	else if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	tens = nearest_tens(n);
	while (n > 0)
	{
		char c = n / tens + '0';

		_putchar(c);
		n %= tens;
		tens /= 10;
	}
}
