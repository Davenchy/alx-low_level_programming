#include <stdio.h>

/**
 * main - print all 3 different digits numbers separated by ","
 *
 * Return: 0
 */
int main(void)
{
	int i, j, k;

	for (i = 48; i <= 55; i++)
		for (j = i + 1; j <= 56; j++)
			for (k = j + 1; k <= 57; k++)
			{
				if (i != 48 || j != 49 || k != 50)
					putchar(' ');

				putchar(i);
				putchar(j);
				putchar(k);

				if (i != 55 || j != 56 || k != 57)
					putchar(',');
			}

	putchar('\n');
	return (0);
}
