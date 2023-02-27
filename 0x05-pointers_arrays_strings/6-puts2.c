#include "main.h"

/**
 * puts2 - prints every other char in string
 * @str: the reference to the string
 */
void puts2(char *str)
{
	int i = 0;
	char a, b;

	while (1)
	{
		a = *(str + i++);
		b = *(str + i++);
		if (a == '\0' || b == '\0')
			break;
		_putchar(a);
	}
	_putchar('\n');
}
