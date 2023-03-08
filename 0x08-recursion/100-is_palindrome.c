#include <string.h>

/**
 * is_palindrome - check is @s is a palindrome string or not
 * @s: the reference to a string to check
 * Return: 1 is @s is palindrome otherwise returns 0
 */
int is_palindrome(char *s)
{
	char *p;

	for (p = s + strlen(s) - 1; s < p; s++, p--)
		if (*p != *s)
			return (0);
	return (1);
}
