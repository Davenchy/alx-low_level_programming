#include <stdio.h>

/**
 * main - print the first 50 fibonacci number
 * Return: void
 */
int main(void)
{
	int i, limit = 98;
	unsigned long a = 0, b = 1, f;

	for (i = 0; i < limit; i++)
	{
		f = a + b;
		a = b, b = f;
		if (i < limit - 1)
			printf("%lu, ", f);
		else
			printf("%lu\n", f);
	}

	return (0);
}
