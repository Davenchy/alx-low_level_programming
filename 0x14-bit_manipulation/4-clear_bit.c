/**
 * clear_bit - set bit value of @n to 0 at the given @index
 * @n: pointer to the number to modify
 * @index: the index of the bit
 *
 * Return: 1 if success otherwise -1 on fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (!n)
		return (-1);
	*n &= 0xffffffff ^ (1 << index);
	return (1);
}
