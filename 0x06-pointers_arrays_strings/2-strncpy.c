#include <stdio.h>

/**
 * _strncpy - copy string from @src to @dest with @n bytes limit
 * @dest: the reference to copy to
 * @src: the string to copy from
 * @n: number of bytes to be copied from @src to @dest
 * Description:
 *  if @dest is not large enough to hold the copy, @src will be truncated.
 * Return: pointer to @dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *p = dest;

	/* copy from src to dest */
	for (; *dest && *src && n > 0; src++, dest++, n--)
		*dest = *src;

	if (!*src)
		*dest = *src;

	return (p);
}
