#include <stdlib.h>
#include <string.h>

/**
 * _strdup - copy string to allocated memory
 * @str: the reference to a string to copy to the allocated memory
 * Return: the pointer to the allocated memory otherwise NULL on fail
 */
char *_strdup(char *str)
{
	int len = strlen(str);
	char *dup = malloc(len + 1);

	if (!dup)
		return (NULL);
	strcpy(dup, str);
	dup[len] = 0;
	return (dup);
}
