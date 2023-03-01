/**
 *
 */
char *_strcat(char *dest, char *src)
{
	int i, j;
	char c;

	for (i = 0; *(dest + i); i++) {}
	for (j = 0; (c = *(src + j)); j++)
		*(dest + ++i) = c;

	return (dest);
}
