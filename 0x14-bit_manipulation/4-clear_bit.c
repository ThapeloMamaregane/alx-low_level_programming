#include "main.h"

/**
 * clear_bit - function with two arguments
 * @n: The unsigned long int to print in binary
 * @index: index to set to 0
 *
 * Return: 1 if successful, -1 on error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int s, var;

	s = sizeof(*n) * 8 - 1;

	if (index > s)
		return (-1);

	var = 1 << index;

	*n = *n & ~var;

	return (1);
}
