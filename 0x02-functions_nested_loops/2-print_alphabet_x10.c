#include "main.h"

/**
 * print_alphabet_x10 - print a..z x10
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char i;
	char c;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);

		_putchar('\n');
	}
}
