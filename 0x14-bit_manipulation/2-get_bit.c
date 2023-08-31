#include "main.h"

/**
 * get_bit - gets the bit at the index
 * @n: The number to find the bit value from
 * @index: position to compare
 *
 * Return: bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int s;

	s = sizeof(n) * 8 - 1;

	if (index > s)
		return (-1);

	return ((n >> index) & 1);

}
