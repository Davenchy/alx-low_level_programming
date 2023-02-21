#include "main.h"

/**
 * print_int - print int number of 2 digits as ascii text
 * @n: the number to print
 * Return: void
 */
void print_int(int n)
{
	int a, b;

	b = (n % 10) + 48;
	a = n > 9 ? (n / 10) + 48 : ' ';

	_putchar(a);
	_putchar(b);
}

/**
 * times_table - print the 9 times table starting with 0
 * Return: void
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int v = i * j;

			print_int(v);
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}

}
