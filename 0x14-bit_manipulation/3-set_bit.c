#include "main.h"
/**
 * set_bit - sets the bit at the index
 * @n: pointer to integer
 * @index: position to change bit
 *
 * Return: 1 if succeeded of -1 if failed
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;
	unsigned long int size;

	size = sizeof(*n) * 8 - 1;

	if (index > size)
		return (-1);

	i = 1 << index;

	*n = i | *n;

	return (1);
}
