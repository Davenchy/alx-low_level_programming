#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

typedef void (*pfun)(va_list, char *);
/**
 * struct pformat - a struct to hold format case and its function
 * @key: char represents the format case
 * @fun: a function that prints the format case
 */
typedef struct pformat
{
	char key;
	pfun fun;
} pformat;

#endif
