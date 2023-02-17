#include <stdio.h>

/**
 * main - prints 0..9 separated by ", " using putchar only
 *
 * Return: 0
 */
int main(void)
{
	int i, j;

	for (i = 48; i <= 56; i++)
		for (j = i + 1; j <= 57; j++)
		{
			if (i != 48 || j != 49)
				putchar(' ');

			putchar(i);
			putchar(j);

			if (i != 56 || j != 57)
				putchar(',');
		}

	putchar('\n');
	return (0);
}
