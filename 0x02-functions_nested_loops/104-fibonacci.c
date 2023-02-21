#include <stdio.h>

/**
 * main - print the first 50 fibonacci number
 * Return: void
 */
int main(void)
{
	int i;
	unsigned long j, k, j1, j2, k1, k2, c = 1000000000;

	j = 1;
	k = 2;
	printf("%lu", j);
	for (i = 1; i < 90; i++)
	{
		printf(", %lu", k);
		k = k + j;
		j = k - j;
	}
	j1 = j / c, j2 = j % c;
	k1 = k / c, k2 = k % c;
	for (i = 0; i < 8; i++)
	{
		printf(", %lu%lu", k1 + (k2 / c), k2 % c);
		k1 = k1 + j1, j1 = k1 - j1;
		k2 = k2 + j2, j2 = k2 - j2;
	}
	printf("\n");
	return (0);
}
