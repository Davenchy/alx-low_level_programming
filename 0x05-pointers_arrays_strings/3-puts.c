#include "main.h"

/**
 * _puts - prints a string, followed by a newline to stdout
 * @str: the reference to the string
 */
void _puts(char *str)
{
	int i = 0;
	char c = *str;

	while (c != '\0')
		_putchar(c = *(str + i++));
	_putchar('\n');
}
