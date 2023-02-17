#include <stdio.h>

/**
 * main - print all 2 different digits numbers separated by ","
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
