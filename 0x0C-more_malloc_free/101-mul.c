#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * isvalid - check if inputed string is a valid number
 * @input: the string to check
 *
 * Return: 1 if @input is a string with a digits only
 *         otherwise returns 0
 */
int isvalid(char *input)
{
	for (; *input; input++)
		if (!isdigit(*input))
			return (0);
	return (1);
}

/**
 * main - a program to multiply two arguments to gether
 * @argc: number of arguments
 * @argv: the arguments array
 *
 * Return: exit status
 */
int main(int argc, char **argv)
{
	int num1, num2;

	/* check for valid input */
	if (argc != 3 || !isvalid(argv[1]) || !isvalid(argv[2]))
	{
		puts("Error");
		return (98);
	}

	/* store and convert arguments from string to integers */
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	/* print the result */
	printf("%d\n", num1 * num2);

	return (0);
}
