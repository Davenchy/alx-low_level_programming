char *_strchr(char *s, char c)
{
	for (; *s && *s != c; s++)
		;

	return (*s ? s : 0);
}
