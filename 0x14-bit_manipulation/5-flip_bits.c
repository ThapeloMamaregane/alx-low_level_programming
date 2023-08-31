#include "main.h"

/**
 * flip_bits - returns hamming distance of two bit words
 * @n: number to compare bits
 * @m: Second number to check bits
 *
 * Description: returns the number of bits you would need to flip
 * Return: number of bits need to flip to get from `n to `m`
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num;
	unsigned int c = 0;

	num = n ^ m;

	while (num != 0)
	{
		if ((num & 1) == 1)
			c++;
		num = num >> 1;
	}
	return (c);
}
