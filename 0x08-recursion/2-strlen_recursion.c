/**
 *
 */
int _strlen_recursion(char *s)
{
	return (*s ? 1 + _strlen_recursion(s + 1) : 0);
}
