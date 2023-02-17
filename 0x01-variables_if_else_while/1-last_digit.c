#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - simple function
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;

	printf("Last digit of %d is %d and ", n, lastDigit);

	if (lastDigit == 0)
		printf("is 0\n");
	else if (lastDigit > 5)
		printf("is greater than 5\n");
	else
		printf("is less than 6 and not 0\n");

	return (0);
}
