#include <stdio.h>

/**
 * main - prints all numbers of base16 in lowercase using putchar only
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
		putchar(i);

	for (i = 97; i <= 102; i++)
		putchar(i);

	putchar('\n');
	return (0);
}
