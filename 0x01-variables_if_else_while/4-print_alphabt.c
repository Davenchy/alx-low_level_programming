#include <stdio.h>

/**
 * main - prints from a..z and exclude(e, q) using putchar only
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
		if (i != 101 && i != 113)
			putchar(i);

	putchar('\n');
	return (0);
}
