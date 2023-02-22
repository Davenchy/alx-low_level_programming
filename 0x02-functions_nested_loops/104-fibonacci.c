#include <stdio.h>

/**
 * main - print the first 98 fibonacci number
 * Return: void
 */
int main(void)
{
	unsigned int i, k;
	unsigned long a, b, a2, b2;

	/* use k to separate the large number into 2 halfs */
	k = 100000000, a = 1, b = 2;
	printf("%lu", a);
	for (i = 0; i < 90; i++)
	{
		printf(", %lu", b);
		b += a, a = b - a;
	}

	/*
	 * separate big number into 2 variables
	 * x : first half
	 * x2: seconnd half
	 */
	a2 = a % k, a /= k;
	b2 = b % k, b /= k;

	/* calculate fibonacci for large numbers */
	for (i = 0; i < 7; i++)
	{
		printf(", %lu%lu", b, b2);
		b += a, a = b - a;
		b2 += a2, a2 = b2 - a2;
	}

	printf("\n");
	return (0);
}
