#include <stdio.h>

/**
 * main - prints from a..zA..Z using putchar only
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
		putchar(i);

	for (i = 65; i <= 90; i++)
		putchar(i);

	putchar('\n');
	return (0);
}
