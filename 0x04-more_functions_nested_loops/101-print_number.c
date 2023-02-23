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
		t *= 10;

	return (t / 10);
}

/**
 * print_number - print number in ascii characters
 * @n: the number to print
 * Return: void
 */
void print_number(int n)
{
	int tens, k = 1000000000;

	/* handle limits numbers */
	if (n > k || n < -k)
	{
		int a;

		a = n / k;
		print_number(a);
		n %= k;
		tens = k;

		if (n < 0)
			n *= -1;
	}
	else
	{
		if (n < 0)
		{
			_putchar('-');
			n *= -1;
		}
		tens = nearest_tens(n);
	}

	while (n > 0 || tens > 0)
	{
		char c = n / tens + '0';

		_putchar(c);
		n %= tens;
		tens /= 10;
	}
}
