/**
 * get_bit - gets bit value at an index
 * @n: integer to get bit value from
 * @index: position to compare
 *
 * Return: the bit state or -1 on error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int s;

	s = sizeof(n) * 8 - 1;

	if (index > s)
		return (-1);

	return ((n >> index) & 1);

}
