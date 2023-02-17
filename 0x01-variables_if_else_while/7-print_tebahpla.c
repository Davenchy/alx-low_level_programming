#include <stdio.h>

/**
 * main - prints a..z reversed using putchar only
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 122; i >= 97; i--)
		putchar(i);

	putchar('\n');
	return (0);
}
