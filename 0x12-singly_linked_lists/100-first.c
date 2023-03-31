#include <stdio.h>

/**
 * premain - a function to execute before the main function
 */
void __attribute__((constructor)) premain(void)
{
	puts("You're beat! and yet, you must allow,");
	puts("I bore my house upon my back!");
}
