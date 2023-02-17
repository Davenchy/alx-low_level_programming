#include <stdio.h>

/**
 * main - prints from a..z using putchar only
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
		putchar(i);

	putchar('\n');
	return (0);
}
