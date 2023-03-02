/**
 * rot13_in_range - encode char @c using rot13 using characters range @a to @z
 * @a: the start of alphabit
 * @z: the end of alphabit
 * @c: the reference to the character to encode using rot13
 * Return: 0 if @c is not in the range @a to @z otherwise 1
 */
int rot13_in_range(char a, char z, char *c)
{
	if (*c >= a && *c <= z)
	{
		*c -= a;
		*c = ((*c + 13) % 26) + a;
		return (1);
	}
	return (0);
}

/**
 * rot13 - encode string using rot13
 * @str: the reference to string to encode
 * Return: @str
 */
char *rot13(char *str)
{
	int i;

	for (i = 0; *(str + i); i++)
		if (!rot13_in_range('a', 'z', str + i))
			rot13_in_range('A', 'Z', str + i);
	return (str);
}
