#include "main.h"

/**
 * set_bit - sets a bit to 1 at a given index
 * @n: pointer to integer
 * @index: The index at which to set the value to 1
 *
 * Return: 1 if worked and -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (!!(*n |= 1L << index));
}
