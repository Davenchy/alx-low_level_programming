#include <stdio.h>
#include <string.h>
#include "variadic_functions.h"

/**
 * print_string - format function for string case
 * @ap: pointer to the variadic list
 * @suffix: string to append at the end of the output
 */
void print_string(va_list ap, char *suffix)
{
	printf("%s%s", suffix,  va_arg(ap, char *));
}

/**
 * print_integer - format function for integer case
 * @ap: pointer to the variadic list
 * @suffix: string to append at the end of the output
 */
void print_integer(va_list ap, char *suffix)
{
	printf("%s%d", suffix,  va_arg(ap, int));
}

/**
 * print_float - format function for float case
 * @ap: pointer to the variadic list
 * @suffix: string to append at the end of the output
 */
void print_float(va_list ap, char *suffix)
{
	printf("%s%f", suffix,  va_arg(ap, double));
}

/**
 * print_character - format function for character case
 * @ap: pointer to the variadic list
 * @suffix: string to append at the end of the output
 */
void print_character(va_list ap, char *suffix)
{
	printf("%s%c", suffix,  va_arg(ap, int));
}

/**
 * print_all - prints anything as described in @format
 * @format: a string that describes the types of arguments
 */
void print_all(const char * const format, ...)
{
	int i = 0, j;
	char *sep = "";
	char *suffix = ", ";
	va_list ap;
	pformat formats[] = {
		{ 'c', print_character },
		{ 's', print_string },
		{ 'i', print_integer },
		{ 'f', print_float },
		{ 0, NULL }
	};

	if (format)
	{
		va_start(ap, format);
		while (format[i])
		{
			j = 0;
			while (formats[j].key)
			{
				if (formats[j].key == format[i])
				{
					formats[j].fun(ap, sep);
					sep = suffix;
					break;
				}
				j++;
			}
			i++;
		}
		va_end(ap);
	}
	putchar('\n');
}
