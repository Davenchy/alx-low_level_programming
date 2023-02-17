#include <stdio.h>

/**
 * printInt - puts int n as ascii chars into stdout
 * @n: number to be printed as ascii chars
 *
 * Return: void
 */
void printInt(int n)
{
	/* get digits in units(b) and tens(a) fields */
	int b = n % 10;
	int a = (n - b) / 10;
	/* write the 2 digits as ascii characters */
	putchar(a + 48);
	putchar(b + 48);
}

/**
 * main - print 2 numbers of all 2 different digits
 *
 * Return: 0
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 98; i++)
		for (j = i + 1; j <= 99; j++)
		{
			if (i != 0 || j != 1)
				putchar(' ');

			printInt(i);
			putchar(' ');
			printInt(j);

			if (i != 98 || j != 99)
				putchar(',');
		}

	putchar('\n');
	return (0);
}
