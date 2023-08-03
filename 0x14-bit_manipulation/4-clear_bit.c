#include "main.h"
/**
 * clear_bit - clears the bit at the index
 * @n: pointer to unsigned long int
 * @index:  position to change bit
 *
 * Return: 1 if worked and -1 if fails
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int size;
	unsigned long int i;

	size = sizeof(*n) * 8 - 1;

	if (index > size)
		return (-1);

	i = 1 << index;

	*n = *n & ~i;

	return (1);
}
