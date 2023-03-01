/**
 * _strcat - concatenates strings @dest and @src to @dest
 * @dest: the string to append @src to
 * @src: the string to be appended to @dest
 * Return: pointer to @dest
 */
char *_strcat(char *dest, char *src)
{
	char *p = dest;

	for (; *dest; dest++)
		{}
	for (; *src; src++, dest++)
		*dest = *src;
	*dest = 0;
	return (p);
}
