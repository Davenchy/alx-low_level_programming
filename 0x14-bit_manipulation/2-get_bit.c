/**
 * get_bit - get a bit value of @n at a given @index
 * @n: the number that has the bit
 * @index: the index of the bit
 *
 * Return: the bit value owtherwise -1 on fail
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return (n >> index & 0x01);
}
