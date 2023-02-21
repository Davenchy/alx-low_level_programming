#include <stdio.h>

/**
 * main - print the first 50 fibonacci number
 * Return: void
 */
int main(void)
{
	int f = 3, a = 1, b = 2;

	while (f < 50)
	{
		printf("%d", f);

		f = a + b;
		a = b;
		b = f;

		if (f < 50)
			printf(", ");
		else
		{
			printf("\n");
			break;
		}
	}
	return (0);
}
