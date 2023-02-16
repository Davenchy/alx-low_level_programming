#include <unistd.h>

/**
 * main - prints msg without using printf or puts families
 * Return: 1 exit code
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
